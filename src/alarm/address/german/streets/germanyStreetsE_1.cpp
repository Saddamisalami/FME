#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameE1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 87299:
    {
        returnValue = F("E");
        break;
    }
    case 87300:
    {
        returnValue = F("E- Wiese");
        break;
    }
    case 87301:
    {
        returnValue = F("E-Flügel");
        break;
    }
    case 87302:
    {
        returnValue = F("E-Flügel / Kreuzringelweg");
        break;
    }
    case 87303:
    {
        returnValue = F("E-Flügel / Kuhschwanz");
        break;
    }
    case 87304:
    {
        returnValue = F("E-Weg");
        break;
    }
    case 87305:
    {
        returnValue = F("E-Weinert-Str.");
        break;
    }
    case 87306:
    {
        returnValue = F("E-Werk-Weg");
        break;
    }
    case 87307:
    {
        returnValue = F("E-Werkstr.");
        break;
    }
    case 87308:
    {
        returnValue = F("E. Bühlerweg");
        break;
    }
    case 87309:
    {
        returnValue = F("E. Gampweg");
        break;
    }
    case 87310:
    {
        returnValue = F("E. v. Hinüber-Brücke");
        break;
    }
    case 87311:
    {
        returnValue = F("E.-C.-Baumann-Str.");
        break;
    }
    case 87312:
    {
        returnValue = F("E.-Esslinger-Pfad");
        break;
    }
    case 87313:
    {
        returnValue = F("E.-Howard-Weg");
        break;
    }
    case 87314:
    {
        returnValue = F("E.-Kutschenreuter-Weg");
        break;
    }
    case 87315:
    {
        returnValue = F("E.-L.-Meyn-Str.");
        break;
    }
    case 87316:
    {
        returnValue = F("E.-Oscar-Mehlhorn-Str.");
        break;
    }
    case 87317:
    {
        returnValue = F("E.-T.-A.-Hoffmann-Weg");
        break;
    }
    case 87318:
    {
        returnValue = F("E.T.A.-Hoffmann-Str.");
        break;
    }
    case 87319:
    {
        returnValue = F("E0");
        break;
    }
    case 87320:
    {
        returnValue = F("E11");
        break;
    }
    case 87321:
    {
        returnValue = F("E4");
        break;
    }
    case 87322:
    {
        returnValue = F("E5");
        break;
    }
    case 87323:
    {
        returnValue = F("E6");
        break;
    }
    case 87324:
    {
        returnValue = F("E8");
        break;
    }
    case 87325:
    {
        returnValue = F("E8 / 3");
        break;
    }
    case 87326:
    {
        returnValue = F("EB Park");
        break;
    }
    case 87327:
    {
        returnValue = F("ECO Pfad");
        break;
    }
    case 87328:
    {
        returnValue = F("EE 13");
        break;
    }
    case 87329:
    {
        returnValue = F("EFA-Str.");
        break;
    }
    case 87330:
    {
        returnValue = F("EKU-Str.");
        break;
    }
    case 87331:
    {
        returnValue = F("ERH5");
        break;
    }
    case 87332:
    {
        returnValue = F("ES-Pulschmoor");
        break;
    }
    case 87333:
    {
        returnValue = F("ESPE Platz");
        break;
    }
    case 87334:
    {
        returnValue = F("EV - Weg 45");
        break;
    }
    case 87335:
    {
        returnValue = F("EVS-Str.");
        break;
    }
    case 87336:
    {
        returnValue = F("EVS-Weg");
        break;
    }
    case 87337:
    {
        returnValue = F("EWE Passage");
        break;
    }
    case 87338:
    {
        returnValue = F("Eagle Way");
        break;
    }
    case 87339:
    {
        returnValue = F("Earl-Bakken-Platz");
        break;
    }
    case 87340:
    {
        returnValue = F("Earl-H.-Wood-Str.");
        break;
    }
    case 87341:
    {
        returnValue = F("Easingtonstr.");
        break;
    }
    case 87342:
    {
        returnValue = F("East-Cambridgeshire-Park");
        break;
    }
    case 87343:
    {
        returnValue = F("East-Yorkshire-Park");
        break;
    }
    case 87344:
    {
        returnValue = F("Eastleighstr.");
        break;
    }
    case 87345:
    {
        returnValue = F("Eaubonner Str.");
        break;
    }
    case 87346:
    {
        returnValue = F("Ebacher Hauptstr.");
        break;
    }
    case 87347:
    {
        returnValue = F("Ebacher Ring");
        break;
    }
    case 87348:
    {
        returnValue = F("Ebacher Str.");
        break;
    }
    case 87349:
    {
        returnValue = F("Ebachstr.");
        break;
    }
    case 87350:
    {
        returnValue = F("Ebbachweg");
        break;
    }
    case 87351:
    {
        returnValue = F("Ebbe-Kreisel");
        break;
    }
    case 87352:
    {
        returnValue = F("Ebbeblick");
        break;
    }
    case 87353:
    {
        returnValue = F("Ebbekammloipe");
        break;
    }
    case 87354:
    {
        returnValue = F("Ebbelicher Weg");
        break;
    }
    case 87355:
    {
        returnValue = F("Ebbelwoigässje");
        break;
    }
    case 87356:
    {
        returnValue = F("Ebbelwoiplatz");
        break;
    }
    case 87357:
    {
        returnValue = F("Ebbendorfstr.");
        break;
    }
    case 87358:
    {
        returnValue = F("Ebbensiek");
        break;
    }
    case 87359:
    {
        returnValue = F("Ebbensieker Weg");
        break;
    }
    case 87360:
    {
        returnValue = F("Ebbenthorpstr.");
        break;
    }
    case 87361:
    {
        returnValue = F("Ebberg");
        break;
    }
    case 87362:
    {
        returnValue = F("Ebberghöhe");
        break;
    }
    case 87363:
    {
        returnValue = F("Ebbergstr.");
        break;
    }
    case 87364:
    {
        returnValue = F("Ebbergweg");
        break;
    }
    case 87365:
    {
        returnValue = F("Ebbermannshof");
        break;
    }
    case 87366:
    {
        returnValue = F("Ebbers Garten");
        break;
    }
    case 87367:
    {
        returnValue = F("Ebbesloher Str.");
        break;
    }
    case 87368:
    {
        returnValue = F("Ebbestr.");
        break;
    }
    case 87369:
    {
        returnValue = F("Ebbetalstr.");
        break;
    }
    case 87370:
    {
        returnValue = F("Ebbeweg");
        break;
    }
    case 87371:
    {
        returnValue = F("Ebbighausenstr.");
        break;
    }
    case 87372:
    {
        returnValue = F("Ebbingen");
        break;
    }
    case 87373:
    {
        returnValue = F("Ebbinger Str.");
        break;
    }
    case 87374:
    {
        returnValue = F("Ebbinghausen");
        break;
    }
    case 87375:
    {
        returnValue = F("Ebbinghauser Str.");
        break;
    }
    case 87376:
    {
        returnValue = F("Ebbinghauser Weg");
        break;
    }
    case 87377:
    {
        returnValue = F("Ebbinghausstr.");
        break;
    }
    case 87378:
    {
        returnValue = F("Ebbinghausweg");
        break;
    }
    case 87379:
    {
        returnValue = F("Ebbinghäuser Str.");
        break;
    }
    case 87380:
    {
        returnValue = F("Ebbingsdiek");
        break;
    }
    case 87381:
    {
        returnValue = F("Ebbingshof");
        break;
    }
    case 87382:
    {
        returnValue = F("Ebbinkstr.");
        break;
    }
    case 87383:
    {
        returnValue = F("Ebbostr.");
        break;
    }
    case 87384:
    {
        returnValue = F("Ebbstr.");
        break;
    }
    case 87385:
    {
        returnValue = F("Ebbüllsiedlung");
        break;
    }
    case 87386:
    {
        returnValue = F("Ebeersreye");
        break;
    }
    case 87387:
    {
        returnValue = F("Ebeersweg");
        break;
    }
    case 87388:
    {
        returnValue = F("Ebel-Privatweg");
        break;
    }
    case 87389:
    {
        returnValue = F("Ebelebener Str.");
        break;
    }
    case 87390:
    {
        returnValue = F("Ebeleber Str.");
        break;
    }
    case 87391:
    {
        returnValue = F("Ebelgünder Weg");
        break;
    }
    case 87392:
    {
        returnValue = F("Ebelingplatz");
        break;
    }
    case 87393:
    {
        returnValue = F("Ebelingstr.");
        break;
    }
    case 87394:
    {
        returnValue = F("Ebelingsweg");
        break;
    }
    case 87395:
    {
        returnValue = F("Ebellstr.");
        break;
    }
    case 87396:
    {
        returnValue = F("Ebelshof");
        break;
    }
    case 87397:
    {
        returnValue = F("Ebelstr.");
        break;
    }
    case 87398:
    {
        returnValue = F("Ebeltofter Str.");
        break;
    }
    case 87399:
    {
        returnValue = F("Ebeltstr.");
        break;
    }
    case 87400:
    {
        returnValue = F("Ebelweg");
        break;
    }
    case 87401:
    {
        returnValue = F("Eben");
        break;
    }
    case 87402:
    {
        returnValue = F("Ebenackerstr.");
        break;
    }
    case 87403:
    {
        returnValue = F("Ebenackerweg");
        break;
    }
    case 87404:
    {
        returnValue = F("Ebenau");
        break;
    }
    case 87405:
    {
        returnValue = F("Ebenauer Str.");
        break;
    }
    case 87406:
    {
        returnValue = F("Ebenauer Weg");
        break;
    }
    case 87407:
    {
        returnValue = F("Ebenbruch");
        break;
    }
    case 87408:
    {
        returnValue = F("Ebenböckstr.");
        break;
    }
    case 87409:
    {
        returnValue = F("Ebendorfer Chaussee");
        break;
    }
    case 87410:
    {
        returnValue = F("Ebendorfer Str.");
        break;
    }
    case 87411:
    {
        returnValue = F("Ebendorfer Weg");
        break;
    }
    case 87412:
    {
        returnValue = F("Ebendstr.");
        break;
    }
    case 87413:
    {
        returnValue = F("Ebene");
        break;
    }
    case 87414:
    {
        returnValue = F("Ebene Weg");
        break;
    }
    case 87415:
    {
        returnValue = F("Ebene-Hardt-Weg");
        break;
    }
    case 87416:
    {
        returnValue = F("Ebenechtweg");
        break;
    }
    case 87417:
    {
        returnValue = F("Ebenenfelsweg");
        break;
    }
    case 87418:
    {
        returnValue = F("Ebenenweg");
        break;
    }
    case 87419:
    {
        returnValue = F("Ebener Weg");
        break;
    }
    case 87420:
    {
        returnValue = F("Ebenerweg");
        break;
    }
    case 87421:
    {
        returnValue = F("Ebenesch");
        break;
    }
    case 87422:
    {
        returnValue = F("Ebeneweg");
        break;
    }
    case 87423:
    {
        returnValue = F("Ebenezer-Howard-Allee");
        break;
    }
    case 87424:
    {
        returnValue = F("Ebenezerweg");
        break;
    }
    case 87425:
    {
        returnValue = F("Ebenfeld");
        break;
    }
    case 87426:
    {
        returnValue = F("Ebenfeldstr.");
        break;
    }
    case 87427:
    {
        returnValue = F("Ebenfeldweg");
        break;
    }
    case 87428:
    {
        returnValue = F("Ebengasse");
        break;
    }
    case 87429:
    {
        returnValue = F("Ebenhalde");
        break;
    }
    case 87430:
    {
        returnValue = F("Ebenhanstr.");
        break;
    }
    case 87431:
    {
        returnValue = F("Ebenhardser Brunnenweg");
        break;
    }
    case 87432:
    {
        returnValue = F("Ebenhardser Dorfstr.");
        break;
    }
    case 87433:
    {
        returnValue = F("Ebenhardser Neustadt");
        break;
    }
    case 87434:
    {
        returnValue = F("Ebenhausen");
        break;
    }
    case 87435:
    {
        returnValue = F("Ebenhausenerstr.");
        break;
    }
    case 87436:
    {
        returnValue = F("Ebenhauser Str.");
        break;
    }
    case 87437:
    {
        returnValue = F("Ebenhauser Weg");
        break;
    }
    case 87438:
    {
        returnValue = F("Ebenhauserweg");
        break;
    }
    case 87439:
    {
        returnValue = F("Ebenheider Weg");
        break;
    }
    case 87440:
    {
        returnValue = F("Ebenheit");
        break;
    }
    case 87441:
    {
        returnValue = F("Ebenhofener Str.");
        break;
    }
    case 87442:
    {
        returnValue = F("Ebenhofweg");
        break;
    }
    case 87443:
    {
        returnValue = F("Ebenholzweg");
        break;
    }
    case 87444:
    {
        returnValue = F("Ebenhäuser Str.");
        break;
    }
    case 87445:
    {
        returnValue = F("Ebenhäuser Weg");
        break;
    }
    case 87446:
    {
        returnValue = F("Ebenistenweg");
        break;
    }
    case 87447:
    {
        returnValue = F("Ebenkamp");
        break;
    }
    case 87448:
    {
        returnValue = F("Ebenland");
        break;
    }
    case 87449:
    {
        returnValue = F("Ebenlochweg");
        break;
    }
    case 87450:
    {
        returnValue = F("Ebenpaint");
        break;
    }
    case 87451:
    {
        returnValue = F("Ebenrainstr.");
        break;
    }
    case 87452:
    {
        returnValue = F("Ebenreuth");
        break;
    }
    case 87453:
    {
        returnValue = F("Ebenreuthen");
        break;
    }
    case 87454:
    {
        returnValue = F("Ebenreuther Str.");
        break;
    }
    case 87455:
    {
        returnValue = F("Ebenried");
        break;
    }
    case 87456:
    {
        returnValue = F("Ebenrieder Str.");
        break;
    }
    case 87457:
    {
        returnValue = F("Ebenroder Str.");
        break;
    }
    case 87458:
    {
        returnValue = F("Ebenrother Str.");
        break;
    }
    case 87459:
    {
        returnValue = F("Ebenseesteg");
        break;
    }
    case 87460:
    {
        returnValue = F("Ebenseestr.");
        break;
    }
    case 87461:
    {
        returnValue = F("Ebental");
        break;
    }
    case 87462:
    {
        returnValue = F("Ebentaler Weg");
        break;
    }
    case 87463:
    {
        returnValue = F("Ebentalstr.");
        break;
    }
    case 87464:
    {
        returnValue = F("Ebentalsweg");
        break;
    }
    case 87465:
    {
        returnValue = F("Ebentalweg");
        break;
    }
    case 87466:
    {
        returnValue = F("Ebenthaler Str.");
        break;
    }
    case 87467:
    {
        returnValue = F("Ebentleinweg");
        break;
    }
    case 87468:
    {
        returnValue = F("Ebenung");
        break;
    }
    case 87469:
    {
        returnValue = F("Ebenunger Str.");
        break;
    }
    case 87470:
    {
        returnValue = F("Ebenungerweg");
        break;
    }
    case 87471:
    {
        returnValue = F("Ebenungsstr.");
        break;
    }
    case 87472:
    {
        returnValue = F("Ebenweg");
        break;
    }
    case 87473:
    {
        returnValue = F("Ebenweiler Str.");
        break;
    }
    case 87474:
    {
        returnValue = F("Ebenwieser Str.");
        break;
    }
    case 87475:
    {
        returnValue = F("Ebenäcker");
        break;
    }
    case 87476:
    {
        returnValue = F("Ebenäcker Weg");
        break;
    }
    case 87477:
    {
        returnValue = F("Ebenäckerring");
        break;
    }
    case 87478:
    {
        returnValue = F("Ebenäckerstr.");
        break;
    }
    case 87479:
    {
        returnValue = F("Ebenöder Weg");
        break;
    }
    case 87480:
    {
        returnValue = F("Eberbach");
        break;
    }
    case 87481:
    {
        returnValue = F("Eberbacher Platz");
        break;
    }
    case 87482:
    {
        returnValue = F("Eberbacher Str.");
        break;
    }
    case 87483:
    {
        returnValue = F("Eberbacher Weg");
        break;
    }
    case 87484:
    {
        returnValue = F("Eberbachstr.");
        break;
    }
    case 87485:
    {
        returnValue = F("Eberbachsträßle");
        break;
    }
    case 87486:
    {
        returnValue = F("Eberbachweg");
        break;
    }
    case 87487:
    {
        returnValue = F("Eberbergstr.");
        break;
    }
    case 87488:
    {
        returnValue = F("Eberbrunnenwegle");
        break;
    }
    case 87489:
    {
        returnValue = F("Eberburgweg");
        break;
    }
    case 87490:
    {
        returnValue = F("Eberbächle");
        break;
    }
    case 87491:
    {
        returnValue = F("Eberdinger Str.");
        break;
    }
    case 87492:
    {
        returnValue = F("Eberdinger Weg");
        break;
    }
    case 87493:
    {
        returnValue = F("Ebererstr.");
        break;
    }
    case 87494:
    {
        returnValue = F("Ebereschenallee");
        break;
    }
    case 87495:
    {
        returnValue = F("Ebereschendamm");
        break;
    }
    case 87496:
    {
        returnValue = F("Ebereschenhof");
        break;
    }
    case 87497:
    {
        returnValue = F("Ebereschenhofer Str.");
        break;
    }
    case 87498:
    {
        returnValue = F("Ebereschenring");
        break;
    }
    case 87499:
    {
        returnValue = F("Ebereschenstr.");
        break;
    }
    case 87500:
    {
        returnValue = F("Ebereschenweg");
        break;
    }
    case 87501:
    {
        returnValue = F("Eberfangweg");
        break;
    }
    case 87502:
    {
        returnValue = F("Eberfinger Str.");
        break;
    }
    case 87503:
    {
        returnValue = F("Eberfirststr.");
        break;
    }
    case 87504:
    {
        returnValue = F("Eberfurter Str.");
        break;
    }
    case 87505:
    {
        returnValue = F("Eberg");
        break;
    }
    case 87506:
    {
        returnValue = F("Ebergasse");
        break;
    }
    case 87507:
    {
        returnValue = F("Eberhaken");
        break;
    }
    case 87508:
    {
        returnValue = F("Eberhard-Anheuser-Str.");
        break;
    }
    case 87509:
    {
        returnValue = F("Eberhard-Bauer-Str.");
        break;
    }
    case 87510:
    {
        returnValue = F("Eberhard-Bauner-Allee");
        break;
    }
    case 87511:
    {
        returnValue = F("Eberhard-Beckmann-Anlage");
        break;
    }
    case 87512:
    {
        returnValue = F("Eberhard-Faber-Str.");
        break;
    }
    case 87513:
    {
        returnValue = F("Eberhard-Finckh-Str.");
        break;
    }
    case 87514:
    {
        returnValue = F("Eberhard-Frey-Str.");
        break;
    }
    case 87515:
    {
        returnValue = F("Eberhard-Frohnmayer-Str.");
        break;
    }
    case 87516:
    {
        returnValue = F("Eberhard-Gieseler-Weg");
        break;
    }
    case 87517:
    {
        returnValue = F("Eberhard-Gildemeister-Weg");
        break;
    }
    case 87518:
    {
        returnValue = F("Eberhard-Gmelin-Str.");
        break;
    }
    case 87519:
    {
        returnValue = F("Eberhard-Gwinner-Str.");
        break;
    }
    case 87520:
    {
        returnValue = F("Eberhard-Hasche-Weg");
        break;
    }
    case 87521:
    {
        returnValue = F("Eberhard-Heim-Str.");
        break;
    }
    case 87522:
    {
        returnValue = F("Eberhard-Herzog-Str.");
        break;
    }
    case 87523:
    {
        returnValue = F("Eberhard-Hoesch-Str.");
        break;
    }
    case 87524:
    {
        returnValue = F("Eberhard-Joser-Weg");
        break;
    }
    case 87525:
    {
        returnValue = F("Eberhard-Jung-Weg");
        break;
    }
    case 87526:
    {
        returnValue = F("Eberhard-Kieser-Str.");
        break;
    }
    case 87527:
    {
        returnValue = F("Eberhard-Klausenberg-Str.");
        break;
    }
    case 87528:
    {
        returnValue = F("Eberhard-Koller-Str.");
        break;
    }
    case 87529:
    {
        returnValue = F("Eberhard-König-Weg");
        break;
    }
    case 87530:
    {
        returnValue = F("Eberhard-Layher-Str.");
        break;
    }
    case 87531:
    {
        returnValue = F("Eberhard-Leibnitz-Str.");
        break;
    }
    case 87532:
    {
        returnValue = F("Eberhard-Nestle-Str.");
        break;
    }
    case 87533:
    {
        returnValue = F("Eberhard-Preis-Weg");
        break;
    }
    case 87534:
    {
        returnValue = F("Eberhard-Ries-Str.");
        break;
    }
    case 87535:
    {
        returnValue = F("Eberhard-Seewald-Str.");
        break;
    }
    case 87536:
    {
        returnValue = F("Eberhard-Unkraut-Str.");
        break;
    }
    case 87537:
    {
        returnValue = F("Eberhard-Viegener-Weg");
        break;
    }
    case 87538:
    {
        returnValue = F("Eberhard-Wenzel-Weg");
        break;
    }
    case 87539:
    {
        returnValue = F("Eberhard-Wildermuth-Str.");
        break;
    }
    case 87540:
    {
        returnValue = F("Eberhard-von-Breitenbuch-Platz");
        break;
    }
    case 87541:
    {
        returnValue = F("Eberhard-von-Rochow-Str.");
        break;
    }
    case 87542:
    {
        returnValue = F("Eberhardgasse");
        break;
    }
    case 87543:
    {
        returnValue = F("Eberhardinenbrücke");
        break;
    }
    case 87544:
    {
        returnValue = F("Eberhardplatz");
        break;
    }
    case 87545:
    {
        returnValue = F("Eberhardsbergstr.");
        break;
    }
    case 87546:
    {
        returnValue = F("Eberhardsbrücke");
        break;
    }
    case 87547:
    {
        returnValue = F("Eberhardser Dorfstr.");
        break;
    }
    case 87548:
    {
        returnValue = F("Eberhardshof");
        break;
    }
    case 87549:
    {
        returnValue = F("Eberhardshofstr.");
        break;
    }
    case 87550:
    {
        returnValue = F("Eberhardshöhe");
        break;
    }
    case 87551:
    {
        returnValue = F("Eberhardspfad");
        break;
    }
    case 87552:
    {
        returnValue = F("Eberhardstr.");
        break;
    }
    case 87553:
    {
        returnValue = F("Eberhardsweg");
        break;
    }
    case 87554:
    {
        returnValue = F("Eberhardtrail Teil1");
        break;
    }
    case 87555:
    {
        returnValue = F("Eberhardtsteig");
        break;
    }
    case 87556:
    {
        returnValue = F("Eberhardtstr.");
        break;
    }
    case 87557:
    {
        returnValue = F("Eberhardtswaldweg");
        break;
    }
    case 87558:
    {
        returnValue = F("Eberhardtweg");
        break;
    }
    case 87559:
    {
        returnValue = F("Eberhardweg");
        break;
    }
    case 87560:
    {
        returnValue = F("Eberhardystr.");
        break;
    }
    case 87561:
    {
        returnValue = F("Eberhardzeller Str.");
        break;
    }
    case 87562:
    {
        returnValue = F("Eberhart-Hack-Str.");
        break;
    }
    case 87563:
    {
        returnValue = F("Eberhartstr.");
        break;
    }
    case 87564:
    {
        returnValue = F("Eberhofstieg");
        break;
    }
    case 87565:
    {
        returnValue = F("Eberhofweg");
        break;
    }
    case 87566:
    {
        returnValue = F("Eberholz");
        break;
    }
    case 87567:
    {
        returnValue = F("Eberholzer Hauptstr.");
        break;
    }
    case 87568:
    {
        returnValue = F("Eberholzer Str.");
        break;
    }
    case 87569:
    {
        returnValue = F("Eberhorst");
        break;
    }
    case 87570:
    {
        returnValue = F("Eberhäuser Weg");
        break;
    }
    case 87571:
    {
        returnValue = F("Ebering");
        break;
    }
    case 87572:
    {
        returnValue = F("Eberkamp");
        break;
    }
    case 87573:
    {
        returnValue = F("Eberle-Kögl-Str.");
        break;
    }
    case 87574:
    {
        returnValue = F("Eberleinstr.");
        break;
    }
    case 87575:
    {
        returnValue = F("Eberleplatz");
        break;
    }
    case 87576:
    {
        returnValue = F("Eberlestr.");
        break;
    }
    case 87577:
    {
        returnValue = F("Eberlesweg");
        break;
    }
    case 87578:
    {
        returnValue = F("Eberleweg");
        break;
    }
    case 87579:
    {
        returnValue = F("Eberlinstr.");
        break;
    }
    case 87580:
    {
        returnValue = F("Eberlinweg");
        break;
    }
    case 87581:
    {
        returnValue = F("Eberloh");
        break;
    }
    case 87582:
    {
        returnValue = F("Eberlstr.");
        break;
    }
    case 87583:
    {
        returnValue = F("Eberlweg");
        break;
    }
    case 87584:
    {
        returnValue = F("Ebermannstr.");
        break;
    }
    case 87585:
    {
        returnValue = F("Ebermannstädter Str.");
        break;
    }
    case 87586:
    {
        returnValue = F("Ebermayerstr.");
        break;
    }
    case 87587:
    {
        returnValue = F("Ebernburger Str.");
        break;
    }
    case 87588:
    {
        returnValue = F("Ebernburgstr.");
        break;
    }
    case 87589:
    {
        returnValue = F("Ebernburgweg");
        break;
    }
    case 87590:
    {
        returnValue = F("Eberner Höhe");
        break;
    }
    case 87591:
    {
        returnValue = F("Eberner Str.");
        break;
    }
    case 87592:
    {
        returnValue = F("Ebernhahner Str.");
        break;
    }
    case 87593:
    {
        returnValue = F("Ebernhölzlstr.");
        break;
    }
    case 87594:
    {
        returnValue = F("Ebernäckerring");
        break;
    }
    case 87595:
    {
        returnValue = F("Eberpfad");
        break;
    }
    case 87596:
    {
        returnValue = F("Eberrainweg");
        break;
    }
    case 87597:
    {
        returnValue = F("Eberreutestr.");
        break;
    }
    case 87598:
    {
        returnValue = F("Ebersbach");
        break;
    }
    case 87599:
    {
        returnValue = F("Ebersbacher Ring");
        break;
    }
    case 87600:
    {
        returnValue = F("Ebersbacher Str.");
        break;
    }
    case 87601:
    {
        returnValue = F("Ebersbacher Weg");
        break;
    }
    case 87602:
    {
        returnValue = F("Ebersbachstr.");
        break;
    }
    case 87603:
    {
        returnValue = F("Ebersbachweg");
        break;
    }
    case 87604:
    {
        returnValue = F("Ebersberg");
        break;
    }
    case 87605:
    {
        returnValue = F("Ebersberg Kammweg");
        break;
    }
    case 87606:
    {
        returnValue = F("Ebersberger Platz");
        break;
    }
    case 87607:
    {
        returnValue = F("Ebersberger Str.");
        break;
    }
    case 87608:
    {
        returnValue = F("Ebersberger Weg");
        break;
    }
    case 87609:
    {
        returnValue = F("Ebersbergerstr.");
        break;
    }
    case 87610:
    {
        returnValue = F("Ebersbergstr.");
        break;
    }
    case 87611:
    {
        returnValue = F("Ebersbergweg");
        break;
    }
    case 87612:
    {
        returnValue = F("Ebersbrunner Str.");
        break;
    }
    case 87613:
    {
        returnValue = F("Ebersburg-Rundweg");
        break;
    }
    case 87614:
    {
        returnValue = F("Eberschweilerweg");
        break;
    }
    case 87615:
    {
        returnValue = F("Eberschwein");
        break;
    }
    case 87616:
    {
        returnValue = F("Eberschützer Str.");
        break;
    }
    case 87617:
    {
        returnValue = F("Ebersdorf");
        break;
    }
    case 87618:
    {
        returnValue = F("Ebersdorfer Höhe");
        break;
    }
    case 87619:
    {
        returnValue = F("Ebersdorfer Str.");
        break;
    }
    case 87620:
    {
        returnValue = F("Ebersdorfer Weg");
        break;
    }
    case 87621:
    {
        returnValue = F("Eberseeweg");
        break;
    }
    case 87622:
    {
        returnValue = F("Ebersgrube");
        break;
    }
    case 87623:
    {
        returnValue = F("Ebersgönser Str.");
        break;
    }
    case 87624:
    {
        returnValue = F("Ebersgönser Weg");
        break;
    }
    case 87625:
    {
        returnValue = F("Ebershaldenstr.");
        break;
    }
    case 87626:
    {
        returnValue = F("Ebershardter Weg");
        break;
    }
    case 87627:
    {
        returnValue = F("Ebersheimer Str.");
        break;
    }
    case 87628:
    {
        returnValue = F("Ebersheimer Weg");
        break;
    }
    case 87629:
    {
        returnValue = F("Ebersheimstr.");
        break;
    }
    case 87630:
    {
        returnValue = F("Ebershäuser Weg");
        break;
    }
    case 87631:
    {
        returnValue = F("Ebersnackenweg");
        break;
    }
    case 87632:
    {
        returnValue = F("Ebersoll");
        break;
    }
    case 87633:
    {
        returnValue = F("Eberspieler Str.");
        break;
    }
    case 87634:
    {
        returnValue = F("Eberspielerweg");
        break;
    }
    case 87635:
    {
        returnValue = F("Eberspointer Str.");
        break;
    }
    case 87636:
    {
        returnValue = F("Eberspächerstr.");
        break;
    }
    case 87637:
    {
        returnValue = F("Eberstadter Str.");
        break;
    }
    case 87638:
    {
        returnValue = F("Eberstadtstr.");
        break;
    }
    case 87639:
    {
        returnValue = F("Eberstaler Str.");
        break;
    }
    case 87640:
    {
        returnValue = F("Eberstall");
        break;
    }
    case 87641:
    {
        returnValue = F("Eberstalstr.");
        break;
    }
    case 87642:
    {
        returnValue = F("Eberstedter Weg");
        break;
    }
    case 87643:
    {
        returnValue = F("Ebersteg");
        break;
    }
    case 87644:
    {
        returnValue = F("Ebersteige");
        break;
    }
    case 87645:
    {
        returnValue = F("Ebersteinbrücke");
        break;
    }
    case 87646:
    {
        returnValue = F("Ebersteinburger Str.");
        break;
    }
    case 87647:
    {
        returnValue = F("Ebersteiner Weg");
        break;
    }
    case 87648:
    {
        returnValue = F("Ebersteingasse");
        break;
    }
    case 87649:
    {
        returnValue = F("Ebersteinplatz");
        break;
    }
    case 87650:
    {
        returnValue = F("Ebersteinstr.");
        break;
    }
    case 87651:
    {
        returnValue = F("Ebersteinweg");
        break;
    }
    case 87652:
    {
        returnValue = F("Eberstettener Str.");
        break;
    }
    case 87653:
    {
        returnValue = F("Eberstettener Weg");
        break;
    }
    case 87654:
    {
        returnValue = F("Eberstorweg");
        break;
    }
    case 87655:
    {
        returnValue = F("Eberstr.");
        break;
    }
    case 87656:
    {
        returnValue = F("Eberstädter Hausschneise");
        break;
    }
    case 87657:
    {
        returnValue = F("Eberstädter Hohle");
        break;
    }
    case 87658:
    {
        returnValue = F("Eberstädter Kirchstr.");
        break;
    }
    case 87659:
    {
        returnValue = F("Eberstädter Marktstr.");
        break;
    }
    case 87660:
    {
        returnValue = F("Eberstädter Str.");
        break;
    }
    case 87661:
    {
        returnValue = F("Eberstädter Weg");
        break;
    }
    case 87662:
    {
        returnValue = F("Eberswalder Allee");
        break;
    }
    case 87663:
    {
        returnValue = F("Eberswalder Chaussee");
        break;
    }
    case 87664:
    {
        returnValue = F("Eberswalder Str.");
        break;
    }
    case 87665:
    {
        returnValue = F("Eberswalder Weg");
        break;
    }
    case 87666:
    {
        returnValue = F("Eberswanger Weg");
        break;
    }
    case 87667:
    {
        returnValue = F("Ebersweg");
        break;
    }
    case 87668:
    {
        returnValue = F("Ebersweierer Str.");
        break;
    }
    case 87669:
    {
        returnValue = F("Ebersweierweg");
        break;
    }
    case 87670:
    {
        returnValue = F("Ebertal");
        break;
    }
    case 87671:
    {
        returnValue = F("Ebertal Weg");
        break;
    }
    case 87672:
    {
        returnValue = F("Ebertallee");
        break;
    }
    case 87673:
    {
        returnValue = F("Ebertallee 16-23");
        break;
    }
    case 87674:
    {
        returnValue = F("Ebertalsteige");
        break;
    }
    case 87675:
    {
        returnValue = F("Ebertgasse");
        break;
    }
    case 87676:
    {
        returnValue = F("Eberthöhe");
        break;
    }
    case 87677:
    {
        returnValue = F("Ebertpark");
        break;
    }
    case 87678:
    {
        returnValue = F("Ebertplatz");
        break;
    }
    case 87679:
    {
        returnValue = F("Ebertring");
        break;
    }
    case 87680:
    {
        returnValue = F("Ebertsbaum");
        break;
    }
    case 87681:
    {
        returnValue = F("Ebertsbergstr.");
        break;
    }
    case 87682:
    {
        returnValue = F("Ebertsbergweg");
        break;
    }
    case 87683:
    {
        returnValue = F("Ebertsbronn");
        break;
    }
    case 87684:
    {
        returnValue = F("Ebertschneise");
        break;
    }
    case 87685:
    {
        returnValue = F("Ebertsgarten");
        break;
    }
    case 87686:
    {
        returnValue = F("Ebertsgasse");
        break;
    }
    case 87687:
    {
        returnValue = F("Ebertsgraben");
        break;
    }
    case 87688:
    {
        returnValue = F("Ebertshahnstr.");
        break;
    }
    case 87689:
    {
        returnValue = F("Ebertsheimer Str.");
        break;
    }
    case 87690:
    {
        returnValue = F("Ebertsheimer Weg");
        break;
    }
    case 87691:
    {
        returnValue = F("Ebertshof");
        break;
    }
    case 87692:
    {
        returnValue = F("Ebertshofstr.");
        break;
    }
    case 87693:
    {
        returnValue = F("Ebertsholz");
        break;
    }
    case 87694:
    {
        returnValue = F("Ebertshäuser Hauptstr.");
        break;
    }
    case 87695:
    {
        returnValue = F("Ebertshäuser Str.");
        break;
    }
    case 87696:
    {
        returnValue = F("Ebertsklinge");
        break;
    }
    case 87697:
    {
        returnValue = F("Ebertstr.");
        break;
    }
    case 87698:
    {
        returnValue = F("Ebertsweg");
        break;
    }
    case 87699:
    {
        returnValue = F("Ebertswies");
        break;
    }
    case 87700:
    {
        returnValue = F("Ebertswinkelseeschneise");
        break;
    }
    case 87701:
    {
        returnValue = F("Ebertweg");
        break;
    }
    case 87702:
    {
        returnValue = F("Ebertzweg");
        break;
    }
    case 87703:
    {
        returnValue = F("Eberweg");
        break;
    }
    case 87704:
    {
        returnValue = F("Eberweinstr.");
        break;
    }
    case 87705:
    {
        returnValue = F("Eberweinweg");
        break;
    }
    case 87706:
    {
        returnValue = F("Eberwiesenstr.");
        break;
    }
    case 87707:
    {
        returnValue = F("Eberwiesenweg");
        break;
    }
    case 87708:
    {
        returnValue = F("Eberwinstr.");
        break;
    }
    case 87709:
    {
        returnValue = F("Eberwurzstr.");
        break;
    }
    case 87710:
    {
        returnValue = F("Eberzstr.");
        break;
    }
    case 87711:
    {
        returnValue = F("Ebet");
        break;
    }
    case 87712:
    {
        returnValue = F("Ebetleweg");
        break;
    }
    case 87713:
    {
        returnValue = F("Ebetswiese");
        break;
    }
    case 87714:
    {
        returnValue = F("Ebe´s Weinsteige");
        break;
    }
    case 87715:
    {
        returnValue = F("Ebhardtstr.");
        break;
    }
    case 87716:
    {
        returnValue = F("Ebhauser Str.");
        break;
    }
    case 87717:
    {
        returnValue = F("Ebiger Matten Weg");
        break;
    }
    case 87718:
    {
        returnValue = F("Ebiger Str.");
        break;
    }
    case 87719:
    {
        returnValue = F("Ebinger Hauptstr.");
        break;
    }
    case 87720:
    {
        returnValue = F("Ebinger Marktplatz");
        break;
    }
    case 87721:
    {
        returnValue = F("Ebinger Str.");
        break;
    }
    case 87722:
    {
        returnValue = F("Ebinger Tal");
        break;
    }
    case 87723:
    {
        returnValue = F("Ebinger Weg");
        break;
    }
    case 87724:
    {
        returnValue = F("Ebingertalstr.");
        break;
    }
    case 87725:
    {
        returnValue = F("Ebinghausen");
        break;
    }
    case 87726:
    {
        returnValue = F("Ebisweilerstr.");
        break;
    }
    case 87727:
    {
        returnValue = F("Ebitzberg");
        break;
    }
    case 87728:
    {
        returnValue = F("Ebitzweg");
        break;
    }
    case 87729:
    {
        returnValue = F("Ebkehofstr.");
        break;
    }
    case 87730:
    {
        returnValue = F("Ebkenriege");
        break;
    }
    case 87731:
    {
        returnValue = F("Ebkeriege");
        break;
    }
    case 87732:
    {
        returnValue = F("Ebkesweg");
        break;
    }
    case 87733:
    {
        returnValue = F("Eblestr.");
        break;
    }
    case 87734:
    {
        returnValue = F("Eblesweg");
        break;
    }
    case 87735:
    {
        returnValue = F("Ebnat");
        break;
    }
    case 87736:
    {
        returnValue = F("Ebnater Dorfstr.");
        break;
    }
    case 87737:
    {
        returnValue = F("Ebnater Hauptstr.");
        break;
    }
    case 87738:
    {
        returnValue = F("Ebnater Steige");
        break;
    }
    case 87739:
    {
        returnValue = F("Ebnater Str.");
        break;
    }
    case 87740:
    {
        returnValue = F("Ebnater Weg");
        break;
    }
    case 87741:
    {
        returnValue = F("Ebnather Str.");
        break;
    }
    case 87742:
    {
        returnValue = F("Ebnatweg");
        break;
    }
    case 87743:
    {
        returnValue = F("Ebner Wiese");
        break;
    }
    case 87744:
    {
        returnValue = F("Ebner-Eschenbach-Str.");
        break;
    }
    case 87745:
    {
        returnValue = F("Ebner-Eschenbach-Weg");
        break;
    }
    case 87746:
    {
        returnValue = F("Ebnerberg");
        break;
    }
    case 87747:
    {
        returnValue = F("Ebnerstr.");
        break;
    }
    case 87748:
    {
        returnValue = F("Ebnerweg");
        break;
    }
    case 87749:
    {
        returnValue = F("Ebnestr.");
        break;
    }
    case 87750:
    {
        returnValue = F("Ebnet");
        break;
    }
    case 87751:
    {
        returnValue = F("Ebneter Str.");
        break;
    }
    case 87752:
    {
        returnValue = F("Ebneter Wegle");
        break;
    }
    case 87753:
    {
        returnValue = F("Ebnether Str.");
        break;
    }
    case 87754:
    {
        returnValue = F("Ebnether Weg");
        break;
    }
    case 87755:
    {
        returnValue = F("Ebnetsgrubenweg");
        break;
    }
    case 87756:
    {
        returnValue = F("Ebnetstr.");
        break;
    }
    case 87757:
    {
        returnValue = F("Ebnetweg");
        break;
    }
    case 87758:
    {
        returnValue = F("Ebniseestr.");
        break;
    }
    case 87759:
    {
        returnValue = F("Ebniseeweg");
        break;
    }
    case 87760:
    {
        returnValue = F("Ebniweg");
        break;
    }
    case 87761:
    {
        returnValue = F("Eboldshäuser Str.");
        break;
    }
    case 87762:
    {
        returnValue = F("Ebrach");
        break;
    }
    case 87763:
    {
        returnValue = F("Ebracher Gasse");
        break;
    }
    case 87764:
    {
        returnValue = F("Ebracher Hof");
        break;
    }
    case 87765:
    {
        returnValue = F("Ebracher Str.");
        break;
    }
    case 87766:
    {
        returnValue = F("Ebracher Weg");
        break;
    }
    case 87767:
    {
        returnValue = F("Ebrachstr.");
        break;
    }
    case 87768:
    {
        returnValue = F("Ebrachweg");
        break;
    }
    case 87769:
    {
        returnValue = F("Ebrantshauser Str.");
        break;
    }
    case 87770:
    {
        returnValue = F("Ebrardstr.");
        break;
    }
    case 87771:
    {
        returnValue = F("Ebratshofen");
        break;
    }
    case 87772:
    {
        returnValue = F("Ebratsweiler");
        break;
    }
    case 87773:
    {
        returnValue = F("Ebrichgasse");
        break;
    }
    case 87774:
    {
        returnValue = F("Ebringer Str.");
        break;
    }
    case 87775:
    {
        returnValue = F("Ebringer Weg");
        break;
    }
    case 87776:
    {
        returnValue = F("Ebrostr.");
        break;
    }
    case 87777:
    {
        returnValue = F("Ebräerstr.");
        break;
    }
    case 87778:
    {
        returnValue = F("Ebs - Kanzler Steig");
        break;
    }
    case 87779:
    {
        returnValue = F("Ebschieder Weg");
        break;
    }
    case 87780:
    {
        returnValue = F("Ebsdorfer Str.");
        break;
    }
    case 87781:
    {
        returnValue = F("Ebsdorfergrundstr.");
        break;
    }
    case 87782:
    {
        returnValue = F("Ebsenweg");
        break;
    }
    case 87783:
    {
        returnValue = F("Ebsmoor");
        break;
    }
    case 87784:
    {
        returnValue = F("Ebstorfer Str.");
        break;
    }
    case 87785:
    {
        returnValue = F("Ebstorfer Weg");
        break;
    }
    case 87786:
    {
        returnValue = F("Eburonenstr.");
        break;
    }
    case 87787:
    {
        returnValue = F("Eburonenweg");
        break;
    }
    case 87788:
    {
        returnValue = F("Eburonenwinkel");
        break;
    }
    case 87789:
    {
        returnValue = F("Ebweg");
        break;
    }
    case 87790:
    {
        returnValue = F("Ebüller Drift");
        break;
    }
    case 87791:
    {
        returnValue = F("Ecclesiastr.");
        break;
    }
    case 87792:
    {
        returnValue = F("Echardinger Grünstreifen");
        break;
    }
    case 87793:
    {
        returnValue = F("Echardinger Str.");
        break;
    }
    case 87794:
    {
        returnValue = F("Echardusstieg");
        break;
    }
    case 87795:
    {
        returnValue = F("Echaz-Steg");
        break;
    }
    case 87796:
    {
        returnValue = F("Echazstr.");
        break;
    }
    case 87797:
    {
        returnValue = F("Echazweg");
        break;
    }
    case 87798:
    {
        returnValue = F("Echbeck");
        break;
    }
    case 87799:
    {
        returnValue = F("Echelfortsweg");
        break;
    }
    case 87800:
    {
        returnValue = F("Echelmeyerpark");
        break;
    }
    case 87801:
    {
        returnValue = F("Echelmeyerstr.");
        break;
    }
    case 87802:
    {
        returnValue = F("Echelnberg");
        break;
    }
    case 87803:
    {
        returnValue = F("Echelnteichweg");
        break;
    }
    case 87804:
    {
        returnValue = F("Echeloh");
        break;
    }
    case 87805:
    {
        returnValue = F("Echelpool");
        break;
    }
    case 87806:
    {
        returnValue = F("Echelsbach");
        break;
    }
    case 87807:
    {
        returnValue = F("Echelsbacher Str.");
        break;
    }
    case 87808:
    {
        returnValue = F("Echelschwangweg");
        break;
    }
    case 87809:
    {
        returnValue = F("Echemer Str.");
        break;
    }
    case 87810:
    {
        returnValue = F("Echendorf");
        break;
    }
    case 87811:
    {
        returnValue = F("Echenzeller Str.");
        break;
    }
    case 87812:
    {
        returnValue = F("Echenzeller Weg");
        break;
    }
    case 87813:
    {
        returnValue = F("Echerschwang");
        break;
    }
    case 87814:
    {
        returnValue = F("Echerystr.");
        break;
    }
    case 87815:
    {
        returnValue = F("Echinger Str.");
        break;
    }
    case 87816:
    {
        returnValue = F("Echinger Weg");
        break;
    }
    case 87817:
    {
        returnValue = F("Echingerweg");
        break;
    }
    case 87818:
    {
        returnValue = F("Echo Park");
        break;
    }
    case 87819:
    {
        returnValue = F("Echoer Str.");
        break;
    }
    case 87820:
    {
        returnValue = F("Echohüttenweg");
        break;
    }
    case 87821:
    {
        returnValue = F("Echostr.");
        break;
    }
    case 87822:
    {
        returnValue = F("Echsheimer Str.");
        break;
    }
    case 87823:
    {
        returnValue = F("Echstenkämperweg");
        break;
    }
    case 87824:
    {
        returnValue = F("Echtbein");
        break;
    }
    case 87825:
    {
        returnValue = F("Echte Wennerweg");
        break;
    }
    case 87826:
    {
        returnValue = F("Echteler Str.");
        break;
    }
    case 87827:
    {
        returnValue = F("Echtelerstr.");
        break;
    }
    case 87828:
    {
        returnValue = F("Echter Str.");
        break;
    }
    case 87829:
    {
        returnValue = F("Echter-Galerie");
        break;
    }
    case 87830:
    {
        returnValue = F("Echter-Geräumt");
        break;
    }
    case 87831:
    {
        returnValue = F("Echterberg");
        break;
    }
    case 87832:
    {
        returnValue = F("Echterbrock");
        break;
    }
    case 87833:
    {
        returnValue = F("Echterbrocksweg");
        break;
    }
    case 87834:
    {
        returnValue = F("Echterdinger Hof");
        break;
    }
    case 87835:
    {
        returnValue = F("Echterdinger Str.");
        break;
    }
    case 87836:
    {
        returnValue = F("Echterdinger Weg");
        break;
    }
    case 87837:
    {
        returnValue = F("Echterfeldweg");
        break;
    }
    case 87838:
    {
        returnValue = F("Echterhoffs Weg");
        break;
    }
    case 87839:
    {
        returnValue = F("Echtermannsweg");
        break;
    }
    case 87840:
    {
        returnValue = F("Echtermeyerbrücke");
        break;
    }
    case 87841:
    {
        returnValue = F("Echtermeyerweg");
        break;
    }
    case 87842:
    {
        returnValue = F("Echternacher Hof");
        break;
    }
    case 87843:
    {
        returnValue = F("Echternacher Str.");
        break;
    }
    case 87844:
    {
        returnValue = F("Echternacher Weg");
        break;
    }
    case 87845:
    {
        returnValue = F("Echternachweg");
        break;
    }
    case 87846:
    {
        returnValue = F("Echternberg");
        break;
    }
    case 87847:
    {
        returnValue = F("Echternbrink");
        break;
    }
    case 87848:
    {
        returnValue = F("Echternbrinksweg");
        break;
    }
    case 87849:
    {
        returnValue = F("Echterneinweg");
        break;
    }
    case 87850:
    {
        returnValue = F("Echternfeld");
        break;
    }
    case 87851:
    {
        returnValue = F("Echterngrund");
        break;
    }
    case 87852:
    {
        returnValue = F("Echternhagen");
        break;
    }
    case 87853:
    {
        returnValue = F("Echternkampstr.");
        break;
    }
    case 87854:
    {
        returnValue = F("Echternort");
        break;
    }
    case 87855:
    {
        returnValue = F("Echternplatz");
        break;
    }
    case 87856:
    {
        returnValue = F("Echternstr.");
        break;
    }
    case 87857:
    {
        returnValue = F("Echternweg");
        break;
    }
    case 87858:
    {
        returnValue = F("Echterplatz");
        break;
    }
    case 87859:
    {
        returnValue = F("Echterseweg");
        break;
    }
    case 87860:
    {
        returnValue = F("Echterstr.");
        break;
    }
    case 87861:
    {
        returnValue = F("Echterweg");
        break;
    }
    case 87862:
    {
        returnValue = F("Echtestr.");
        break;
    }
    case 87863:
    {
        returnValue = F("Echthauser Str.");
        break;
    }
    case 87864:
    {
        returnValue = F("Echtorfer Höfe");
        break;
    }
    case 87865:
    {
        returnValue = F("Echtorfer Str.");
        break;
    }
    case 87866:
    {
        returnValue = F("Echtroper Weg");
        break;
    }
    case 87867:
    {
        returnValue = F("Echtwortweg");
        break;
    }
    case 87868:
    {
        returnValue = F("Echtzer Str.");
        break;
    }
    case 87869:
    {
        returnValue = F("Echzeller Str.");
        break;
    }
    case 87870:
    {
        returnValue = F("Echzeller Weg");
        break;
    }
    case 87871:
    {
        returnValue = F("Eck");
        break;
    }
    case 87872:
    {
        returnValue = F("Eck zum Vaulschink");
        break;
    }
    case 87873:
    {
        returnValue = F("Eck-Losten");
        break;
    }
    case 87874:
    {
        returnValue = F("Eck-Permin-Str.");
        break;
    }
    case 87875:
    {
        returnValue = F("Eckacker");
        break;
    }
    case 87876:
    {
        returnValue = F("Eckackersweg");
        break;
    }
    case 87877:
    {
        returnValue = F("Eckampstr.");
        break;
    }
    case 87878:
    {
        returnValue = F("Eckardistr.");
        break;
    }
    case 87879:
    {
        returnValue = F("Eckardrother Str.");
        break;
    }
    case 87880:
    {
        returnValue = F("Eckardsbachweg");
        break;
    }
    case 87881:
    {
        returnValue = F("Eckardsberg");
        break;
    }
    case 87882:
    {
        returnValue = F("Eckardsberger Weg");
        break;
    }
    case 87883:
    {
        returnValue = F("Eckardstr.");
        break;
    }
    case 87884:
    {
        returnValue = F("Eckardtsberg");
        break;
    }
    case 87885:
    {
        returnValue = F("Eckardtser Str.");
        break;
    }
    case 87886:
    {
        returnValue = F("Eckardtsgasse");
        break;
    }
    case 87887:
    {
        returnValue = F("Eckardtsheimer Str.");
        break;
    }
    case 87888:
    {
        returnValue = F("Eckardtshäuser Weg");
        break;
    }
    case 87889:
    {
        returnValue = F("Eckardtskopf");
        break;
    }
    case 87890:
    {
        returnValue = F("Eckardtsstr.");
        break;
    }
    case 87891:
    {
        returnValue = F("Eckardtstr.");
        break;
    }
    case 87892:
    {
        returnValue = F("Eckardtsweg");
        break;
    }
    case 87893:
    {
        returnValue = F("Eckarroter Str.");
        break;
    }
    case 87894:
    {
        returnValue = F("Eckart-Ulmann-Str.");
        break;
    }
    case 87895:
    {
        returnValue = F("Eckarthof");
        break;
    }
    case 87896:
    {
        returnValue = F("Eckartsbergaer Str.");
        break;
    }
    case 87897:
    {
        returnValue = F("Eckartsbergastr.");
        break;
    }
    case 87898:
    {
        returnValue = F("Eckartsberger Str.");
        break;
    }
    case 87899:
    {
        returnValue = F("Eckartsbergweg");
        break;
    }
    case 87900:
    {
        returnValue = F("Eckartser Str.");
        break;
    }
    case 87901:
    {
        returnValue = F("Eckartshaldenweg");
        break;
    }
    case 87902:
    {
        returnValue = F("Eckartshof");
        break;
    }
    case 87903:
    {
        returnValue = F("Eckartshofer Str.");
        break;
    }
    case 87904:
    {
        returnValue = F("Eckartshäuser Str.");
        break;
    }
    case 87905:
    {
        returnValue = F("Eckartshäuser Weg");
        break;
    }
    case 87906:
    {
        returnValue = F("Eckartsmühle");
        break;
    }
    case 87907:
    {
        returnValue = F("Eckartspfad");
        break;
    }
    case 87908:
    {
        returnValue = F("Eckartsrother Str.");
        break;
    }
    case 87909:
    {
        returnValue = F("Eckartstr.");
        break;
    }
    case 87910:
    {
        returnValue = F("Eckartsweg");
        break;
    }
    case 87911:
    {
        returnValue = F("Eckartsweierer Str.");
        break;
    }
    case 87912:
    {
        returnValue = F("Eckartsweierer Wässerwehr");
        break;
    }
    case 87913:
    {
        returnValue = F("Eckartsweiler");
        break;
    }
    case 87914:
    {
        returnValue = F("Eckartsweiler Str.");
        break;
    }
    case 87915:
    {
        returnValue = F("Eckartsweiler Weg");
        break;
    }
    case 87916:
    {
        returnValue = F("Eckau-Forststr.");
        break;
    }
    case 87917:
    {
        returnValue = F("Eckbachring");
        break;
    }
    case 87918:
    {
        returnValue = F("Eckbachstr.");
        break;
    }
    case 87919:
    {
        returnValue = F("Eckbachweg");
        break;
    }
    case 87920:
    {
        returnValue = F("Eckbaumweg");
        break;
    }
    case 87921:
    {
        returnValue = F("Eckberg");
        break;
    }
    case 87922:
    {
        returnValue = F("Eckbergstr.");
        break;
    }
    case 87923:
    {
        returnValue = F("Eckbergweg");
        break;
    }
    case 87924:
    {
        returnValue = F("Eckbertstr.");
        break;
    }
    case 87925:
    {
        returnValue = F("Eckbichl");
        break;
    }
    case 87926:
    {
        returnValue = F("Eckbornstr.");
        break;
    }
    case 87927:
    {
        returnValue = F("Eckboschweg");
        break;
    }
    case 87928:
    {
        returnValue = F("Eckbuckelweg");
        break;
    }
    case 87929:
    {
        returnValue = F("Eckbusch");
        break;
    }
    case 87930:
    {
        returnValue = F("Eckbuschweg");
        break;
    }
    case 87931:
    {
        returnValue = F("Eckdahl");
        break;
    }
    case 87932:
    {
        returnValue = F("Eckdorfer Mühlenweg");
        break;
    }
    case 87933:
    {
        returnValue = F("Eckdorfer Str.");
        break;
    }
    case 87934:
    {
        returnValue = F("Eckdrift");
        break;
    }
    case 87935:
    {
        returnValue = F("Ecke");
        break;
    }
    case 87936:
    {
        returnValue = F("Ecke Holz");
        break;
    }
    case 87937:
    {
        returnValue = F("Ecke Stützpunkt");
        break;
    }
    case 87938:
    {
        returnValue = F("Ecke Wiencke");
        break;
    }
    case 87939:
    {
        returnValue = F("Eckebachstr.");
        break;
    }
    case 87940:
    {
        returnValue = F("Eckeberg");
        break;
    }
    case 87941:
    {
        returnValue = F("Eckebornstr.");
        break;
    }
    case 87942:
    {
        returnValue = F("Eckebusch");
        break;
    }
    case 87943:
    {
        returnValue = F("Eckegasse");
        break;
    }
    case 87944:
    {
        returnValue = F("Eckehardtstr.");
        break;
    }
    case 87945:
    {
        returnValue = F("Eckehardweg");
        break;
    }
    case 87946:
    {
        returnValue = F("Eckehartstr.");
        break;
    }
    case 87947:
    {
        returnValue = F("Eckei");
        break;
    }
    case 87948:
    {
        returnValue = F("Eckel");
        break;
    }
    case 87949:
    {
        returnValue = F("Eckelau");
        break;
    }
    case 87950:
    {
        returnValue = F("Eckelboomtrift");
        break;
    }
    case 87951:
    {
        returnValue = F("Eckele");
        break;
    }
    case 87952:
    {
        returnValue = F("Eckelehe");
        break;
    }
    case 87953:
    {
        returnValue = F("Eckeler Berg");
        break;
    }
    case 87954:
    {
        returnValue = F("Eckeler Ohe");
        break;
    }
    case 87955:
    {
        returnValue = F("Eckeler Str.");
        break;
    }
    case 87956:
    {
        returnValue = F("Eckelhauser Str.");
        break;
    }
    case 87957:
    {
        returnValue = F("Eckelkamp");
        break;
    }
    case 87958:
    {
        returnValue = F("Eckelkampsweg");
        break;
    }
    case 87959:
    {
        returnValue = F("Eckelsgasse");
        break;
    }
    case 87960:
    {
        returnValue = F("Eckelsgrund");
        break;
    }
    case 87961:
    {
        returnValue = F("Eckelsheimer Str.");
        break;
    }
    case 87962:
    {
        returnValue = F("Eckelshof");
        break;
    }
    case 87963:
    {
        returnValue = F("Eckelskamp");
        break;
    }
    case 87964:
    {
        returnValue = F("Eckelstr.");
        break;
    }
    case 87965:
    {
        returnValue = F("Eckelsweg");
        break;
    }
    case 87966:
    {
        returnValue = F("Eckelweg");
        break;
    }
    case 87967:
    {
        returnValue = F("Eckemekerstr.");
        break;
    }
    case 87968:
    {
        returnValue = F("Ecken");
        break;
    }
    case 87969:
    {
        returnValue = F("Eckenbacher Hardt");
        break;
    }
    case 87970:
    {
        returnValue = F("Eckenbacher Str.");
        break;
    }
    case 87971:
    {
        returnValue = F("Eckenbachstr.");
        break;
    }
    case 87972:
    {
        returnValue = F("Eckenbachweg");
        break;
    }
    case 87973:
    {
        returnValue = F("Eckenberg");
        break;
    }
    case 87974:
    {
        returnValue = F("Eckenberger Str.");
        break;
    }
    case 87975:
    {
        returnValue = F("Eckenbergstr.");
        break;
    }
    case 87976:
    {
        returnValue = F("Eckenbergweg");
        break;
    }
    case 87977:
    {
        returnValue = F("Eckenbertstr.");
        break;
    }
    case 87978:
    {
        returnValue = F("Eckenbornweg");
        break;
    }
    case 87979:
    {
        returnValue = F("Eckenbrecherstr.");
        break;
    }
    case 87980:
    {
        returnValue = F("Eckendorfer Str.");
        break;
    }
    case 87981:
    {
        returnValue = F("Eckener Rainweg");
        break;
    }
    case 87982:
    {
        returnValue = F("Eckener Str.");
        break;
    }
    case 87983:
    {
        returnValue = F("Eckenerhöhe");
        break;
    }
    case 87984:
    {
        returnValue = F("Eckenerstr.");
        break;
    }
    case 87985:
    {
        returnValue = F("Eckenerweg");
        break;
    }
    case 87986:
    {
        returnValue = F("Eckenfelderstr.");
        break;
    }
    case 87987:
    {
        returnValue = F("Eckengasse");
        break;
    }
    case 87988:
    {
        returnValue = F("Eckenhagener Str.");
        break;
    }
    case 87989:
    {
        returnValue = F("Eckenhaider Hauptstr.");
        break;
    }
    case 87990:
    {
        returnValue = F("Eckenhaider Weg");
        break;
    }
    case 87991:
    {
        returnValue = F("Eckenhardtweg");
        break;
    }
    case 87992:
    {
        returnValue = F("Eckenhausen");
        break;
    }
    case 87993:
    {
        returnValue = F("Eckenheimer Landstr.");
        break;
    }
    case 87994:
    {
        returnValue = F("Eckenheimer Schulstr.");
        break;
    }
    case 87995:
    {
        returnValue = F("Eckenhof");
        break;
    }
    case 87996:
    {
        returnValue = F("Eckenhofstr.");
        break;
    }
    case 87997:
    {
        returnValue = F("Eckenholzstr.");
        break;
    }
    case 87998:
    {
        returnValue = F("Eckenhovener Weg");
        break;
    }
    case 87999:
    {
        returnValue = F("Eckenhöhenweg");
        break;
    }
    case 88000:
    {
        returnValue = F("Eckenpfad");
        break;
    }
    case 88001:
    {
        returnValue = F("Eckenreuther Str.");
        break;
    }
    case 88002:
    {
        returnValue = F("Eckenstr.");
        break;
    }
    case 88003:
    {
        returnValue = F("Eckenstruth");
        break;
    }
    case 88004:
    {
        returnValue = F("Eckenstückerweg");
        break;
    }
    case 88005:
    {
        returnValue = F("Eckentaler Str.");
        break;
    }
    case 88006:
    {
        returnValue = F("Eckenweg");
        break;
    }
    case 88007:
    {
        returnValue = F("Eckenweiherstr.");
        break;
    }
    case 88008:
    {
        returnValue = F("Eckenweilerstr.");
        break;
    }
    case 88009:
    {
        returnValue = F("Eckenwiese");
        break;
    }
    case 88010:
    {
        returnValue = F("Ecker Berg");
        break;
    }
    case 88011:
    {
        returnValue = F("Ecker Schloss");
        break;
    }
    case 88012:
    {
        returnValue = F("Ecker Str.");
        break;
    }
    case 88013:
    {
        returnValue = F("Eckerberg");
        break;
    }
    case 88014:
    {
        returnValue = F("Eckerder Str.");
        break;
    }
    case 88015:
    {
        returnValue = F("Eckerfeld");
        break;
    }
    case 88016:
    {
        returnValue = F("Eckergasse");
        break;
    }
    case 88017:
    {
        returnValue = F("Eckergrubenweg");
        break;
    }
    case 88018:
    {
        returnValue = F("Eckerhof");
        break;
    }
    case 88019:
    {
        returnValue = F("Eckerichsweg");
        break;
    }
    case 88020:
    {
        returnValue = F("Eckerichweg");
        break;
    }
    case 88021:
    {
        returnValue = F("Eckerkamp");
        break;
    }
    case 88022:
    {
        returnValue = F("Eckerleinstr.");
        break;
    }
    case 88023:
    {
        returnValue = F("Eckerlestr.");
        break;
    }
    case 88024:
    {
        returnValue = F("Eckermannpark");
        break;
    }
    case 88025:
    {
        returnValue = F("Eckermannstr.");
        break;
    }
    case 88026:
    {
        returnValue = F("Eckermannweg");
        break;
    }
    case 88027:
    {
        returnValue = F("Eckern");
        break;
    }
    case 88028:
    {
        returnValue = F("Eckernbrink");
        break;
    }
    case 88029:
    {
        returnValue = F("Eckernförder Chaussee");
        break;
    }
    case 88030:
    {
        returnValue = F("Eckernförder Landstr.");
        break;
    }
    case 88031:
    {
        returnValue = F("Eckernförder Stieg");
        break;
    }
    case 88032:
    {
        returnValue = F("Eckernförder Str.");
        break;
    }
    case 88033:
    {
        returnValue = F("Eckernförder Weg");
        break;
    }
    case 88034:
    {
        returnValue = F("Eckernfördestr.");
        break;
    }
    case 88035:
    {
        returnValue = F("Eckerngarten");
        break;
    }
    case 88036:
    {
        returnValue = F("Eckerngrund");
        break;
    }
    case 88037:
    {
        returnValue = F("Eckernhof");
        break;
    }
    case 88038:
    {
        returnValue = F("Eckernhoop");
        break;
    }
    case 88039:
    {
        returnValue = F("Eckernkamp");
        break;
    }
    case 88040:
    {
        returnValue = F("Eckernkampstr.");
        break;
    }
    case 88041:
    {
        returnValue = F("Eckernkampweg");
        break;
    }
    case 88042:
    {
        returnValue = F("Eckernkoppel");
        break;
    }
    case 88043:
    {
        returnValue = F("Eckernstiege");
        break;
    }
    case 88044:
    {
        returnValue = F("Eckernstr.");
        break;
    }
    case 88045:
    {
        returnValue = F("Eckerntor");
        break;
    }
    case 88046:
    {
        returnValue = F("Eckernweg");
        break;
    }
    case 88047:
    {
        returnValue = F("Eckernworth");
        break;
    }
    case 88048:
    {
        returnValue = F("Eckersbach");
        break;
    }
    case 88049:
    {
        returnValue = F("Eckersbach Wende");
        break;
    }
    case 88050:
    {
        returnValue = F("Eckersbacher Brücke");
        break;
    }
    case 88051:
    {
        returnValue = F("Eckersbacher Höhe");
        break;
    }
    case 88052:
    {
        returnValue = F("Eckersbacher Rundwanderweg");
        break;
    }
    case 88053:
    {
        returnValue = F("Eckersbacher Rundweg");
        break;
    }
    case 88054:
    {
        returnValue = F("Eckersbacher Str.");
        break;
    }
    case 88055:
    {
        returnValue = F("Eckersberg");
        break;
    }
    case 88056:
    {
        returnValue = F("Eckersbergstr.");
        break;
    }
    case 88057:
    {
        returnValue = F("Eckersdorf");
        break;
    }
    case 88058:
    {
        returnValue = F("Eckersdorfer Str.");
        break;
    }
    case 88059:
    {
        returnValue = F("Eckersdorfer Weg");
        break;
    }
    case 88060:
    {
        returnValue = F("Eckersgasse");
        break;
    }
    case 88061:
    {
        returnValue = F("Eckershof");
        break;
    }
    case 88062:
    {
        returnValue = F("Eckershofer Str.");
        break;
    }
    case 88063:
    {
        returnValue = F("Eckershorst");
        break;
    }
    case 88064:
    {
        returnValue = F("Eckersmühlener Hauptstr.");
        break;
    }
    case 88065:
    {
        returnValue = F("Eckersmühlener Str.");
        break;
    }
    case 88066:
    {
        returnValue = F("Eckersteig");
        break;
    }
    case 88067:
    {
        returnValue = F("Eckerstr.");
        break;
    }
    case 88068:
    {
        returnValue = F("Eckersweg");
        break;
    }
    case 88069:
    {
        returnValue = F("Eckersweiler Str.");
        break;
    }
    case 88070:
    {
        returnValue = F("Eckerswies");
        break;
    }
    case 88071:
    {
        returnValue = F("Eckertal");
        break;
    }
    case 88072:
    {
        returnValue = F("Eckertalstr.");
        break;
    }
    case 88073:
    {
        returnValue = F("Eckertgasse");
        break;
    }
    case 88074:
    {
        returnValue = F("Eckertsberg");
        break;
    }
    case 88075:
    {
        returnValue = F("Eckertshof");
        break;
    }
    case 88076:
    {
        returnValue = F("Eckertshofstr.");
        break;
    }
    case 88077:
    {
        returnValue = F("Eckertshohl");
        break;
    }
    case 88078:
    {
        returnValue = F("Eckertsmühle");
        break;
    }
    case 88079:
    {
        returnValue = F("Eckertsruh");
        break;
    }
    case 88080:
    {
        returnValue = F("Eckertsstr.");
        break;
    }
    case 88081:
    {
        returnValue = F("Eckertstr.");
        break;
    }
    case 88082:
    {
        returnValue = F("Eckertswehr");
        break;
    }
    case 88083:
    {
        returnValue = F("Eckertswiesen");
        break;
    }
    case 88084:
    {
        returnValue = F("Eckerweg");
        break;
    }
    case 88085:
    {
        returnValue = F("Eckerworth");
        break;
    }
    case 88086:
    {
        returnValue = F("Eckeröder Weg");
        break;
    }
    case 88087:
    {
        returnValue = F("Eckesbergstr.");
        break;
    }
    case 88088:
    {
        returnValue = F("Eckesdyck");
        break;
    }
    case 88089:
    {
        returnValue = F("Eckeseite");
        break;
    }
    case 88090:
    {
        returnValue = F("Eckeseyer Str.");
        break;
    }
    case 88091:
    {
        returnValue = F("Eckestr.");
        break;
    }
    case 88092:
    {
        returnValue = F("Eckewartstr.");
        break;
    }
    case 88093:
    {
        returnValue = F("Eckewartweg");
        break;
    }
    case 88094:
    {
        returnValue = F("Eckeweg");
        break;
    }
    case 88095:
    {
        returnValue = F("Eckewitti-Weg");
        break;
    }
    case 88096:
    {
        returnValue = F("Eckeystr.");
        break;
    }
    case 88097:
    {
        returnValue = F("Eckfehler Gaste");
        break;
    }
    case 88098:
    {
        returnValue = F("Eckfehler Leegstücken");
        break;
    }
    case 88099:
    {
        returnValue = F("Eckfehler Ring");
        break;
    }
    case 88100:
    {
        returnValue = F("Eckfehler Weg");
        break;
    }
    case 88101:
    {
        returnValue = F("Eckfeld");
        break;
    }
    case 88102:
    {
        returnValue = F("Eckfelder Weg");
        break;
    }
    case 88103:
    {
        returnValue = F("Eckfeldweg");
        break;
    }
    case 88104:
    {
        returnValue = F("Eckfleth");
        break;
    }
    case 88105:
    {
        returnValue = F("Eckflether Damm");
        break;
    }
    case 88106:
    {
        returnValue = F("Eckflether Hellmer");
        break;
    }
    case 88107:
    {
        returnValue = F("Eckflether Helmer");
        break;
    }
    case 88108:
    {
        returnValue = F("Eckgartenstr.");
        break;
    }
    case 88109:
    {
        returnValue = F("Eckgasse");
        break;
    }
    case 88110:
    {
        returnValue = F("Eckgraben");
        break;
    }
    case 88111:
    {
        returnValue = F("Eckgässele");
        break;
    }
    case 88112:
    {
        returnValue = F("Eckhalden Str.");
        break;
    }
    case 88113:
    {
        returnValue = F("Eckhaldeweg");
        break;
    }
    case 88114:
    {
        returnValue = F("Eckhaldstr.");
        break;
    }
    case 88115:
    {
        returnValue = F("Eckhardsberg");
        break;
    }
    case 88116:
    {
        returnValue = F("Eckhardsborn");
        break;
    }
    case 88117:
    {
        returnValue = F("Eckhardsgraben");
        break;
    }
    case 88118:
    {
        returnValue = F("Eckhardstr.");
        break;
    }
    case 88119:
    {
        returnValue = F("Eckhardsweg");
        break;
    }
    case 88120:
    {
        returnValue = F("Eckhardtsloh");
        break;
    }
    case 88121:
    {
        returnValue = F("Eckhardtstr.");
        break;
    }
    case 88122:
    {
        returnValue = F("Eckhartsreuth");
        break;
    }
    case 88123:
    {
        returnValue = F("Eckhartstr.");
        break;
    }
    case 88124:
    {
        returnValue = F("Eckhau");
        break;
    }
    case 88125:
    {
        returnValue = F("Eckhaus");
        break;
    }
    case 88126:
    {
        returnValue = F("Eckhausen");
        break;
    }
    case 88127:
    {
        returnValue = F("Eckhaustr.");
        break;
    }
    case 88128:
    {
        returnValue = F("Eckhausträßle");
        break;
    }
    case 88129:
    {
        returnValue = F("Eckhauweg");
        break;
    }
    case 88130:
    {
        returnValue = F("Eckherstr.");
        break;
    }
    case 88131:
    {
        returnValue = F("Eckhof");
        break;
    }
    case 88132:
    {
        returnValue = F("Eckhofener Str.");
        break;
    }
    case 88133:
    {
        returnValue = F("Eckhoff");
        break;
    }
    case 88134:
    {
        returnValue = F("Eckhoffkoppel");
        break;
    }
    case 88135:
    {
        returnValue = F("Eckhofkeller");
        break;
    }
    case 88136:
    {
        returnValue = F("Eckhofstr.");
        break;
    }
    case 88137:
    {
        returnValue = F("Eckhofsträßchen");
        break;
    }
    case 88138:
    {
        returnValue = F("Eckhofweg");
        break;
    }
    case 88139:
    {
        returnValue = F("Eckholderdriesch");
        break;
    }
    case 88140:
    {
        returnValue = F("Eckholderfeld");
        break;
    }
    case 88141:
    {
        returnValue = F("Eckholdtweg");
        break;
    }
    case 88142:
    {
        returnValue = F("Eckholmallee");
        break;
    }
    case 88143:
    {
        returnValue = F("Eckholz");
        break;
    }
    case 88144:
    {
        returnValue = F("Eckholzweg");
        break;
    }
    case 88145:
    {
        returnValue = F("Eckhorst");
        break;
    }
    case 88146:
    {
        returnValue = F("Eckhorster Str.");
        break;
    }
    case 88147:
    {
        returnValue = F("Eckhorstkamp");
        break;
    }
    case 88148:
    {
        returnValue = F("Eckhöfe");
        break;
    }
    case 88149:
    {
        returnValue = F("Ecking");
        break;
    }
    case 88150:
    {
        returnValue = F("Eckinger Str.");
        break;
    }
    case 88151:
    {
        returnValue = F("Eckisstr.");
        break;
    }
    case 88152:
    {
        returnValue = F("Eckiusstr.");
        break;
    }
    case 88153:
    {
        returnValue = F("Eckkopfgrat");
        break;
    }
    case 88154:
    {
        returnValue = F("Eckkopfstr.");
        break;
    }
    case 88155:
    {
        returnValue = F("Eckkopfweg");
        break;
    }
    case 88156:
    {
        returnValue = F("Eckkoppel");
        break;
    }
    case 88157:
    {
        returnValue = F("Eckköpflesweg");
        break;
    }
    case 88158:
    {
        returnValue = F("Ecklakerhörn");
        break;
    }
    case 88159:
    {
        returnValue = F("Eckle");
        break;
    }
    case 88160:
    {
        returnValue = F("Ecklegasse");
        break;
    }
    case 88161:
    {
        returnValue = F("Eckleinjarten");
        break;
    }
    case 88162:
    {
        returnValue = F("Eckleinsweg");
        break;
    }
    case 88163:
    {
        returnValue = F("Ecklenstr.");
        break;
    }
    case 88164:
    {
        returnValue = F("Ecklenwaldweg");
        break;
    }
    case 88165:
    {
        returnValue = F("Eckleschleifweg");
        break;
    }
    case 88166:
    {
        returnValue = F("Ecklessträßle");
        break;
    }
    case 88167:
    {
        returnValue = F("Ecklestein");
        break;
    }
    case 88168:
    {
        returnValue = F("Ecklestr.");
        break;
    }
    case 88169:
    {
        returnValue = F("Ecklesweg");
        break;
    }
    case 88170:
    {
        returnValue = F("Ecklewaldweg");
        break;
    }
    case 88171:
    {
        returnValue = F("Eckleweg");
        break;
    }
    case 88172:
    {
        returnValue = F("Ecklfeld");
        break;
    }
    case 88173:
    {
        returnValue = F("Ecklingeröder Str.");
        break;
    }
    case 88174:
    {
        returnValue = F("Ecklochenweg");
        break;
    }
    case 88175:
    {
        returnValue = F("Ecklreit");
        break;
    }
    case 88176:
    {
        returnValue = F("Ecklöh");
        break;
    }
    case 88177:
    {
        returnValue = F("Eckmannsdorf");
        break;
    }
    case 88178:
    {
        returnValue = F("Eckmannshausener Str.");
        break;
    }
    case 88179:
    {
        returnValue = F("Eckmannshofen");
        break;
    }
    case 88180:
    {
        returnValue = F("Eckmannshofener Str.");
        break;
    }
    case 88181:
    {
        returnValue = F("Eckmannstr.");
        break;
    }
    case 88182:
    {
        returnValue = F("Eckmähde");
        break;
    }
    case 88183:
    {
        returnValue = F("Eckmühle");
        break;
    }
    case 88184:
    {
        returnValue = F("Eckmühlstr.");
        break;
    }
    case 88185:
    {
        returnValue = F("Eckmüllergasse");
        break;
    }
    case 88186:
    {
        returnValue = F("Ecknacher Weg");
        break;
    }
    case 88187:
    {
        returnValue = F("Ecknachstr.");
        break;
    }
    case 88188:
    {
        returnValue = F("Ecknachweg");
        break;
    }
    case 88189:
    {
        returnValue = F("Eckostr.");
        break;
    }
    case 88190:
    {
        returnValue = F("Eckpfad");
        break;
    }
    case 88191:
    {
        returnValue = F("Eckpfeilersteg");
        break;
    }
    case 88192:
    {
        returnValue = F("Eckrade");
        break;
    }
    case 88193:
    {
        returnValue = F("Eckrand");
        break;
    }
    case 88194:
    {
        returnValue = F("Eckredder");
        break;
    }
    case 88195:
    {
        returnValue = F("Eckrehm");
        break;
    }
    case 88196:
    {
        returnValue = F("Eckringhausen");
        break;
    }
    case 88197:
    {
        returnValue = F("Eckringhauser Gasse");
        break;
    }
    case 88198:
    {
        returnValue = F("Ecksaal");
        break;
    }
    case 88199:
    {
        returnValue = F("Ecksbergweg");
        break;
    }
    case 88200:
    {
        returnValue = F("Eckschapp");
        break;
    }
    case 88201:
    {
        returnValue = F("Eckschneid");
        break;
    }
    case 88202:
    {
        returnValue = F("Eckschneise");
        break;
    }
    case 88203:
    {
        returnValue = F("Ecksee");
        break;
    }
    case 88204:
    {
        returnValue = F("Ecksgasse");
        break;
    }
    case 88205:
    {
        returnValue = F("Ecksoll");
        break;
    }
    case 88206:
    {
        returnValue = F("Eckstallerstr.");
        break;
    }
    case 88207:
    {
        returnValue = F("Eckstedter Weg");
        break;
    }
    case 88208:
    {
        returnValue = F("Ecksteig");
        break;
    }
    case 88209:
    {
        returnValue = F("Ecksteinmühle");
        break;
    }
    case 88210:
    {
        returnValue = F("Ecksteins Hof");
        break;
    }
    case 88211:
    {
        returnValue = F("Ecksteinsloh");
        break;
    }
    case 88212:
    {
        returnValue = F("Ecksteinstr.");
        break;
    }
    case 88213:
    {
        returnValue = F("Ecksteinweg");
        break;
    }
    case 88214:
    {
        returnValue = F("Eckstever");
        break;
    }
    case 88215:
    {
        returnValue = F("Eckstever Str.");
        break;
    }
    case 88216:
    {
        returnValue = F("Eckstever Weg");
        break;
    }
    case 88217:
    {
        returnValue = F("Eckstieg");
        break;
    }
    case 88218:
    {
        returnValue = F("Eckstr.");
        break;
    }
    case 88219:
    {
        returnValue = F("Eckstroot");
        break;
    }
    case 88220:
    {
        returnValue = F("Eckstumpf");
        break;
    }
    case 88221:
    {
        returnValue = F("Eckstücken");
        break;
    }
    case 88222:
    {
        returnValue = F("Ecksweg");
        break;
    }
    case 88223:
    {
        returnValue = F("Eckteil");
        break;
    }
    case 88224:
    {
        returnValue = F("Eckumer Berg");
        break;
    }
    case 88225:
    {
        returnValue = F("Eckumer Str.");
        break;
    }
    case 88226:
    {
        returnValue = F("Eckumer Weg");
        break;
    }
    case 88227:
    {
        returnValue = F("Eckwald");
        break;
    }
    case 88228:
    {
        returnValue = F("Eckwaldstr.");
        break;
    }
    case 88229:
    {
        returnValue = F("Eckwaldweg");
        break;
    }
    case 88230:
    {
        returnValue = F("Eckwarder Ahndeich");
        break;
    }
    case 88231:
    {
        returnValue = F("Eckwarder Altendeich");
        break;
    }
    case 88232:
    {
        returnValue = F("Eckwarder Deich");
        break;
    }
    case 88233:
    {
        returnValue = F("Eckwarder Str.");
        break;
    }
    case 88234:
    {
        returnValue = F("Eckweg");
        break;
    }
    case 88235:
    {
        returnValue = F("Eckweilerstr.");
        break;
    }
    case 88236:
    {
        returnValue = F("Eckwiesenweg");
        break;
    }
    case 88237:
    {
        returnValue = F("Eckwiesstr.");
        break;
    }
    case 88238:
    {
        returnValue = F("Eckwiesweg");
        break;
    }
    case 88239:
    {
        returnValue = F("Eckwinkel");
        break;
    }
    case 88240:
    {
        returnValue = F("Eclipse");
        break;
    }
    case 88241:
    {
        returnValue = F("Eco-Duct");
        break;
    }
    case 88242:
    {
        returnValue = F("Eco-Pfad");
        break;
    }
    case 88243:
    {
        returnValue = F("Ecolab-Allee");
        break;
    }
    case 88244:
    {
        returnValue = F("Economatstr.");
        break;
    }
    case 88245:
    {
        returnValue = F("Econova-Allee");
        break;
    }
    case 88246:
    {
        returnValue = F("Ed");
        break;
    }
    case 88247:
    {
        returnValue = F("Ed.-Brendel-Str.");
        break;
    }
    case 88248:
    {
        returnValue = F("Ed.-Kandl-Str.");
        break;
    }
    case 88249:
    {
        returnValue = F("Edamer Str.");
        break;
    }
    case 88250:
    {
        returnValue = F("Edammer Str.");
        break;
    }
    case 88251:
    {
        returnValue = F("Edda-Seydel-Richter-Str.");
        break;
    }
    case 88252:
    {
        returnValue = F("Eddastr.");
        break;
    }
    case 88253:
    {
        returnValue = F("Eddaweg");
        break;
    }
    case 88254:
    {
        returnValue = F("Eddelaker Str.");
        break;
    }
    case 88255:
    {
        returnValue = F("Eddelhoff");
        break;
    }
    case 88256:
    {
        returnValue = F("Eddelsener Siedlung");
        break;
    }
    case 88257:
    {
        returnValue = F("Eddelsener Str.");
        break;
    }
    case 88258:
    {
        returnValue = F("Eddelsener Weg");
        break;
    }
    case 88259:
    {
        returnValue = F("Eddelser Bruch");
        break;
    }
    case 88260:
    {
        returnValue = F("Eddenwiese");
        break;
    }
    case 88261:
    {
        returnValue = F("Eddersbacher Berg");
        break;
    }
    case 88262:
    {
        returnValue = F("Eddersheimer Str.");
        break;
    }
    case 88263:
    {
        returnValue = F("Edderweg");
        break;
    }
    case 88264:
    {
        returnValue = F("Edderwiesen");
        break;
    }
    case 88265:
    {
        returnValue = F("Eddeshorn");
        break;
    }
    case 88266:
    {
        returnValue = F("Eddesser Landstr.");
        break;
    }
    case 88267:
    {
        returnValue = F("Eddesser Str.");
        break;
    }
    case 88268:
    {
        returnValue = F("Eddigehäuser Str.");
        break;
    }
    case 88269:
    {
        returnValue = F("Eddinghausen");
        break;
    }
    case 88270:
    {
        returnValue = F("Ede-Baller-Weg");
        break;
    }
    case 88271:
    {
        returnValue = F("Ede-Menzler-Weg");
        break;
    }
    case 88272:
    {
        returnValue = F("Ede-und-Unku-Weg");
        break;
    }
    case 88273:
    {
        returnValue = F("Edeka Park");
        break;
    }
    case 88274:
    {
        returnValue = F("Edeka Zufahrt");
        break;
    }
    case 88275:
    {
        returnValue = F("Edekaplatz");
        break;
    }
    case 88276:
    {
        returnValue = F("Edekastr.");
        break;
    }
    case 88277:
    {
        returnValue = F("Edel-Gasch-Str.");
        break;
    }
    case 88278:
    {
        returnValue = F("Edelapfelweg");
        break;
    }
    case 88279:
    {
        returnValue = F("Edelbach");
        break;
    }
    case 88280:
    {
        returnValue = F("Edelbacher Str.");
        break;
    }
    case 88281:
    {
        returnValue = F("Edelbachstr.");
        break;
    }
    case 88282:
    {
        returnValue = F("Edelbachtalweg");
        break;
    }
    case 88283:
    {
        returnValue = F("Edelbeck Str.");
        break;
    }
    case 88284:
    {
        returnValue = F("Edelbeckstr.");
        break;
    }
    case 88285:
    {
        returnValue = F("Edelberg");
        break;
    }
    case 88286:
    {
        returnValue = F("Edelbergstr.");
        break;
    }
    case 88287:
    {
        returnValue = F("Edelbergweg");
        break;
    }
    case 88288:
    {
        returnValue = F("Edelbeurer Str.");
        break;
    }
    case 88289:
    {
        returnValue = F("Edelborn");
        break;
    }
    case 88290:
    {
        returnValue = F("Edelbrunn");
        break;
    }
    case 88291:
    {
        returnValue = F("Edelbrunnenweg");
        break;
    }
    case 88292:
    {
        returnValue = F("Edelbuchweg");
        break;
    }
    case 88293:
    {
        returnValue = F("Edelburgastr.");
        break;
    }
    case 88294:
    {
        returnValue = F("Edelburgstr.");
        break;
    }
    case 88295:
    {
        returnValue = F("Edelburgtraufweg");
        break;
    }
    case 88296:
    {
        returnValue = F("Edeldorfer Bergstr.");
        break;
    }
    case 88297:
    {
        returnValue = F("Edeldorfer Ringstr.");
        break;
    }
    case 88298:
    {
        returnValue = F("Edeldorfer Weg");
        break;
    }
    case 88299:
    {
        returnValue = F("Edelerstr.");
        break;
    }
    case 88300:
    {
        returnValue = F("Edelfalter");
        break;
    }
    case 88301:
    {
        returnValue = F("Edelfeldstr.");
        break;
    }
    case 88302:
    {
        returnValue = F("Edelfeldweg");
        break;
    }
    case 88303:
    {
        returnValue = F("Edelfinger Str.");
        break;
    }
    case 88304:
    {
        returnValue = F("Edelfrauengrab");
        break;
    }
    case 88305:
    {
        returnValue = F("Edelfrauwiesen");
        break;
    }
    case 88306:
    {
        returnValue = F("Edelgarten");
        break;
    }
    case 88307:
    {
        returnValue = F("Edelgartenstr.");
        break;
    }
    case 88308:
    {
        returnValue = F("Edelgasse");
        break;
    }
    case 88309:
    {
        returnValue = F("Edelgrasweg");
        break;
    }
    case 88310:
    {
        returnValue = F("Edelhalde");
        break;
    }
    case 88311:
    {
        returnValue = F("Edelham");
        break;
    }
    case 88312:
    {
        returnValue = F("Edelhardgasse");
        break;
    }
    case 88313:
    {
        returnValue = F("Edelhauweg");
        break;
    }
    case 88314:
    {
        returnValue = F("Edelherr-Ludolf-Ring");
        break;
    }
    case 88315:
    {
        returnValue = F("Edelherrenweg");
        break;
    }
    case 88316:
    {
        returnValue = F("Edelhof");
        break;
    }
    case 88317:
    {
        returnValue = F("Edelhoffstr.");
        break;
    }
    case 88318:
    {
        returnValue = F("Edelhofgasse");
        break;
    }
    case 88319:
    {
        returnValue = F("Edelhofstr.");
        break;
    }
    case 88320:
    {
        returnValue = F("Edelhofweg");
        break;
    }
    case 88321:
    {
        returnValue = F("Edelhöfe");
        break;
    }
    case 88322:
    {
        returnValue = F("Edelingstr.");
        break;
    }
    case 88323:
    {
        returnValue = F("Edelitz");
        break;
    }
    case 88324:
    {
        returnValue = F("Edelkirchenhof");
        break;
    }
    case 88325:
    {
        returnValue = F("Edellaitsch");
        break;
    }
    case 88326:
    {
        returnValue = F("Edelmaar");
        break;
    }
    case 88327:
    {
        returnValue = F("Edelmannsgasse");
        break;
    }
    case 88328:
    {
        returnValue = F("Edelmannshoferstr.");
        break;
    }
    case 88329:
    {
        returnValue = F("Edelmannshäuweg");
        break;
    }
    case 88330:
    {
        returnValue = F("Edelmannstr.");
        break;
    }
    case 88331:
    {
        returnValue = F("Edelmannsweg");
        break;
    }
    case 88332:
    {
        returnValue = F("Edelmannweg");
        break;
    }
    case 88333:
    {
        returnValue = F("Edelmatt");
        break;
    }
    case 88334:
    {
        returnValue = F("Edelmänne");
        break;
    }
    case 88335:
    {
        returnValue = F("Edelmühle");
        break;
    }
    case 88336:
    {
        returnValue = F("Edelrather Weg");
        break;
    }
    case 88337:
    {
        returnValue = F("Edelrautenweg");
        break;
    }
    case 88338:
    {
        returnValue = F("Edelrosenstr.");
        break;
    }
    case 88339:
    {
        returnValue = F("Edelruh");
        break;
    }
    case 88340:
    {
        returnValue = F("Edels Hof");
        break;
    }
    case 88341:
    {
        returnValue = F("Edels Weiden");
        break;
    }
    case 88342:
    {
        returnValue = F("Edelsbachweg");
        break;
    }
    case 88343:
    {
        returnValue = F("Edelsberger Str.");
        break;
    }
    case 88344:
    {
        returnValue = F("Edelsbergstr.");
        break;
    }
    case 88345:
    {
        returnValue = F("Edelsbergweg");
        break;
    }
    case 88346:
    {
        returnValue = F("Edelsfelder Str.");
        break;
    }
    case 88347:
    {
        returnValue = F("Edelshausener Str.");
        break;
    }
    case 88348:
    {
        returnValue = F("Edelsheimerstr.");
        break;
    }
    case 88349:
    {
        returnValue = F("Edelsheimstr.");
        break;
    }
    case 88350:
    {
        returnValue = F("Edelstahlweg");
        break;
    }
    case 88351:
    {
        returnValue = F("Edelsteig");
        break;
    }
    case 88352:
    {
        returnValue = F("Edelsteinstr.");
        break;
    }
    case 88353:
    {
        returnValue = F("Edelstettenstr.");
        break;
    }
    case 88354:
    {
        returnValue = F("Edelstetter Str.");
        break;
    }
    case 88355:
    {
        returnValue = F("Edelstetter Weg");
        break;
    }
    case 88356:
    {
        returnValue = F("Edelstieg");
        break;
    }
    case 88357:
    {
        returnValue = F("Edelstr.");
        break;
    }
    case 88358:
    {
        returnValue = F("Edelstrut");
        break;
    }
    case 88359:
    {
        returnValue = F("Edelsweg");
        break;
    }
    case 88360:
    {
        returnValue = F("Edeltraud-Huber-Str.");
        break;
    }
    case 88361:
    {
        returnValue = F("Edeltraud-Wacker-Str.");
        break;
    }
    case 88362:
    {
        returnValue = F("Edeltraudstr.");
        break;
    }
    case 88363:
    {
        returnValue = F("Edeltraut-Soot-Str.");
        break;
    }
    case 88364:
    {
        returnValue = F("Edeltrudisstr.");
        break;
    }
    case 88365:
    {
        returnValue = F("Edelwangweg");
        break;
    }
    case 88366:
    {
        returnValue = F("Edelweg");
        break;
    }
    case 88367:
    {
        returnValue = F("Edelweilerstr.");
        break;
    }
    case 88368:
    {
        returnValue = F("Edelweissstr.");
        break;
    }
    case 88369:
    {
        returnValue = F("Edelweissweg");
        break;
    }
    case 88370:
    {
        returnValue = F("Edelweiß Platz");
        break;
    }
    case 88371:
    {
        returnValue = F("Edelweißgasse");
        break;
    }
    case 88372:
    {
        returnValue = F("Edelweißring");
        break;
    }
    case 88373:
    {
        returnValue = F("Edelweißstr.");
        break;
    }
    case 88374:
    {
        returnValue = F("Edelweißweg");
        break;
    }
    case 88375:
    {
        returnValue = F("Edelzeller Str.");
        break;
    }
    case 88376:
    {
        returnValue = F("Edelzeller Weg");
        break;
    }
    case 88377:
    {
        returnValue = F("Edemannswisch");
        break;
    }
    case 88378:
    {
        returnValue = F("Edemannswurth");
        break;
    }
    case 88379:
    {
        returnValue = F("Edemissener Str.");
        break;
    }
    case 88380:
    {
        returnValue = F("Edemisser Dorfstr.");
        break;
    }
    case 88381:
    {
        returnValue = F("Edemisser Landstr.");
        break;
    }
    case 88382:
    {
        returnValue = F("Edemisser Str.");
        break;
    }
    case 88383:
    {
        returnValue = F("Eden");
        break;
    }
    case 88384:
    {
        returnValue = F("Edenbach");
        break;
    }
    case 88385:
    {
        returnValue = F("Edenbacher Str.");
        break;
    }
    case 88386:
    {
        returnValue = F("Edenberger Str.");
        break;
    }
    case 88387:
    {
        returnValue = F("Edenbergstr.");
        break;
    }
    case 88388:
    {
        returnValue = F("Edenbornerstr.");
        break;
    }
    case 88389:
    {
        returnValue = F("Edenbruch");
        break;
    }
    case 88390:
    {
        returnValue = F("Edenburgstr.");
        break;
    }
    case 88391:
    {
        returnValue = F("Edenbütteler Str.");
        break;
    }
    case 88392:
    {
        returnValue = F("Edendorfer Str.");
        break;
    }
    case 88393:
    {
        returnValue = F("Edendorfer Weg");
        break;
    }
    case 88394:
    {
        returnValue = F("Edengrub");
        break;
    }
    case 88395:
    {
        returnValue = F("Edenhallstr.");
        break;
    }
    case 88396:
    {
        returnValue = F("Edenhauser Str.");
        break;
    }
    case 88397:
    {
        returnValue = F("Edenhof");
        break;
    }
    case 88398:
    {
        returnValue = F("Edenhofen");
        break;
    }
    case 88399:
    {
        returnValue = F("Edenhofer Str.");
        break;
    }
    case 88400:
    {
        returnValue = F("Edenhoferweg");
        break;
    }
    case 88401:
    {
        returnValue = F("Edenhofweg");
        break;
    }
    case 88402:
    {
        returnValue = F("Edenhuizenstr.");
        break;
    }
    case 88403:
    {
        returnValue = F("Edenkobener Str.");
        break;
    }
    case 88404:
    {
        returnValue = F("Edenkobener Weg");
        break;
    }
    case 88405:
    {
        returnValue = F("Edenlander Str.");
        break;
    }
    case 88406:
    {
        returnValue = F("Edenrieder Str.");
        break;
    }
    case 88407:
    {
        returnValue = F("Edenseestr.");
        break;
    }
    case 88408:
    {
        returnValue = F("Edenserlooger Str.");
        break;
    }
    case 88409:
    {
        returnValue = F("Edenskamp");
        break;
    }
    case 88410:
    {
        returnValue = F("Edenstetten");
        break;
    }
    case 88411:
    {
        returnValue = F("Edenstr.");
        break;
    }
    case 88412:
    {
        returnValue = F("Edenstraß");
        break;
    }
    case 88413:
    {
        returnValue = F("Edental");
        break;
    }
    case 88414:
    {
        returnValue = F("Edenthal");
        break;
    }
    case 88415:
    {
        returnValue = F("Edenthaler Str.");
        break;
    }
    case 88416:
    {
        returnValue = F("Edenthalstr.");
        break;
    }
    case 88417:
    {
        returnValue = F("Edenthalweg");
        break;
    }
    case 88418:
    {
        returnValue = F("Edentrift");
        break;
    }
    case 88419:
    {
        returnValue = F("Edenweg");
        break;
    }
    case 88420:
    {
        returnValue = F("Eder-Lahn-Str.");
        break;
    }
    case 88421:
    {
        returnValue = F("Ederanger");
        break;
    }
    case 88422:
    {
        returnValue = F("Ederauenweg");
        break;
    }
    case 88423:
    {
        returnValue = F("Ederblick");
        break;
    }
    case 88424:
    {
        returnValue = F("Ederener Str.");
        break;
    }
    case 88425:
    {
        returnValue = F("Ederener Weg");
        break;
    }
    case 88426:
    {
        returnValue = F("Edererstr.");
        break;
    }
    case 88427:
    {
        returnValue = F("Ederfeldstr.");
        break;
    }
    case 88428:
    {
        returnValue = F("Edergasse");
        break;
    }
    case 88429:
    {
        returnValue = F("Edergoldquelle");
        break;
    }
    case 88430:
    {
        returnValue = F("Ederheimer Str.");
        break;
    }
    case 88431:
    {
        returnValue = F("Ederhöhe");
        break;
    }
    case 88432:
    {
        returnValue = F("Ederhöhenweg");
        break;
    }
    case 88433:
    {
        returnValue = F("Ederlsdorf");
        break;
    }
    case 88434:
    {
        returnValue = F("Edermaning");
        break;
    }
    case 88435:
    {
        returnValue = F("Ederring");
        break;
    }
    case 88436:
    {
        returnValue = F("Edersberg");
        break;
    }
    case 88437:
    {
        returnValue = F("Edersdorf");
        break;
    }
    case 88438:
    {
        returnValue = F("Ederseerandstr.");
        break;
    }
    case 88439:
    {
        returnValue = F("Ederseestr.");
        break;
    }
    case 88440:
    {
        returnValue = F("Ederseeweg");
        break;
    }
    case 88441:
    {
        returnValue = F("Edersfelder Str.");
        break;
    }
    case 88442:
    {
        returnValue = F("Edersiedlung");
        break;
    }
    case 88443:
    {
        returnValue = F("Ederslebener Landstr.");
        break;
    }
    case 88444:
    {
        returnValue = F("Ederslebener Str.");
        break;
    }
    case 88445:
    {
        returnValue = F("Ederstieg");
        break;
    }
    case 88446:
    {
        returnValue = F("Ederstr.");
        break;
    }
    case 88447:
    {
        returnValue = F("Edertalstr.");
        break;
    }
    case 88448:
    {
        returnValue = F("Edertalweg");
        break;
    }
    case 88449:
    {
        returnValue = F("Ederweg");
        break;
    }
    case 88450:
    {
        returnValue = F("Edesborren");
        break;
    }
    case 88451:
    {
        returnValue = F("Edesheimer Str.");
        break;
    }
    case 88452:
    {
        returnValue = F("Edesheimer Weg");
        break;
    }
    case 88453:
    {
        returnValue = F("Edewechter Landstr.");
        break;
    }
    case 88454:
    {
        returnValue = F("Edewechter Str.");
        break;
    }
    case 88455:
    {
        returnValue = F("Edgar-Andre-Str.");
        break;
    }
    case 88456:
    {
        returnValue = F("Edgar-André-Str.");
        break;
    }
    case 88457:
    {
        returnValue = F("Edgar-Anstett-Str.");
        break;
    }
    case 88458:
    {
        returnValue = F("Edgar-Bennert-Str.");
        break;
    }
    case 88459:
    {
        returnValue = F("Edgar-Deichmann-Park");
        break;
    }
    case 88460:
    {
        returnValue = F("Edgar-Hobinka-Str.");
        break;
    }
    case 88461:
    {
        returnValue = F("Edgar-John-Str.");
        break;
    }
    case 88462:
    {
        returnValue = F("Edgar-Michael-Wenz-Ring");
        break;
    }
    case 88463:
    {
        returnValue = F("Edgar-Müller-Str.");
        break;
    }
    case 88464:
    {
        returnValue = F("Edgar-Rudolph-Weg");
        break;
    }
    case 88465:
    {
        returnValue = F("Edgar-Scheibe-Str.");
        break;
    }
    case 88466:
    {
        returnValue = F("Edgar-von-Gierke-Str.");
        break;
    }
    case 88467:
    {
        returnValue = F("Edgarstr.");
        break;
    }
    case 88468:
    {
        returnValue = F("Edhofer Str.");
        break;
    }
    case 88469:
    {
        returnValue = F("Edhofstr.");
        break;
    }
    case 88470:
    {
        returnValue = F("Edhäusl");
        break;
    }
    case 88471:
    {
        returnValue = F("Edi-Oehmsen-Stroot");
        break;
    }
    case 88472:
    {
        returnValue = F("Edigerer Str.");
        break;
    }
    case 88473:
    {
        returnValue = F("Edigheimer Str.");
        break;
    }
    case 88474:
    {
        returnValue = F("Edigheimer Weg");
        break;
    }
    case 88475:
    {
        returnValue = F("Edignaweg");
        break;
    }
    case 88476:
    {
        returnValue = F("Edinburger Weg");
        break;
    }
    case 88477:
    {
        returnValue = F("Edinburghplatz");
        break;
    }
    case 88478:
    {
        returnValue = F("Edinger Riedweg");
        break;
    }
    case 88479:
    {
        returnValue = F("Edinger Str.");
        break;
    }
    case 88480:
    {
        returnValue = F("Edinger Weg");
        break;
    }
    case 88481:
    {
        returnValue = F("Edingeroder Weg");
        break;
    }
    case 88482:
    {
        returnValue = F("Edingerstr.");
        break;
    }
    case 88483:
    {
        returnValue = F("Edingerweg");
        break;
    }
    case 88484:
    {
        returnValue = F("Edinghausen");
        break;
    }
    case 88485:
    {
        returnValue = F("Edinghäuser Str.");
        break;
    }
    case 88486:
    {
        returnValue = F("Edingkweg");
        break;
    }
    case 88487:
    {
        returnValue = F("Edisonallee");
        break;
    }
    case 88488:
    {
        returnValue = F("Edisonplatz");
        break;
    }
    case 88489:
    {
        returnValue = F("Edisonstr.");
        break;
    }
    case 88490:
    {
        returnValue = F("Edisonweg");
        break;
    }
    case 88491:
    {
        returnValue = F("Edistr.");
        break;
    }
    case 88492:
    {
        returnValue = F("Edit-Stein-Str.");
        break;
    }
    case 88493:
    {
        returnValue = F("Edith Stein Weg");
        break;
    }
    case 88494:
    {
        returnValue = F("Edith-Bartenbach-Str.");
        break;
    }
    case 88495:
    {
        returnValue = F("Edith-Barzen-Str.");
        break;
    }
    case 88496:
    {
        returnValue = F("Edith-Dettmann-Str.");
        break;
    }
    case 88497:
    {
        returnValue = F("Edith-Ennen-Str.");
        break;
    }
    case 88498:
    {
        returnValue = F("Edith-Falk-Str.");
        break;
    }
    case 88499:
    {
        returnValue = F("Edith-Feder-Str.");
        break;
    }
    case 88500:
    {
        returnValue = F("Edith-Frank-Str.");
        break;
    }
    case 88501:
    {
        returnValue = F("Edith-Hecht-Str.");
        break;
    }
    case 88502:
    {
        returnValue = F("Edith-Lindenberg-Str.");
        break;
    }
    case 88503:
    {
        returnValue = F("Edith-Miltenberg-Weg");
        break;
    }
    case 88504:
    {
        returnValue = F("Edith-Müller-Str.");
        break;
    }
    case 88505:
    {
        returnValue = F("Edith-Ostendorf-Weg");
        break;
    }
    case 88506:
    {
        returnValue = F("Edith-Piaf-Str.");
        break;
    }
    case 88507:
    {
        returnValue = F("Edith-Schollwer-Weg");
        break;
    }
    case 88508:
    {
        returnValue = F("Edith-Sonntag-Str.");
        break;
    }
    case 88509:
    {
        returnValue = F("Edith-Stein-Anlage");
        break;
    }
    case 88510:
    {
        returnValue = F("Edith-Stein-Platz");
        break;
    }
    case 88511:
    {
        returnValue = F("Edith-Stein-RIng");
        break;
    }
    case 88512:
    {
        returnValue = F("Edith-Stein-Ring");
        break;
    }
    case 88513:
    {
        returnValue = F("Edith-Stein-Stieg");
        break;
    }
    case 88514:
    {
        returnValue = F("Edith-Stein-Str.");
        break;
    }
    case 88515:
    {
        returnValue = F("Edith-Stein-Weg");
        break;
    }
    case 88516:
    {
        returnValue = F("Edith-Weg");
        break;
    }
    case 88517:
    {
        returnValue = F("Edith-Weyde-Str.");
        break;
    }
    case 88518:
    {
        returnValue = F("Editha-Klipstein-Weg");
        break;
    }
    case 88519:
    {
        returnValue = F("Editharing");
        break;
    }
    case 88520:
    {
        returnValue = F("Edithawinkel");
        break;
    }
    case 88521:
    {
        returnValue = F("Edithstr.");
        break;
    }
    case 88522:
    {
        returnValue = F("Edithweg");
        break;
    }
    case 88523:
    {
        returnValue = F("Edlauer Str.");
        break;
    }
    case 88524:
    {
        returnValue = F("Edle Krone, Bahnsteig 1");
        break;
    }
    case 88525:
    {
        returnValue = F("Edle Krone, Bahnsteig 2");
        break;
    }
    case 88526:
    {
        returnValue = F("Edlef-Köppen-Weg");
        break;
    }
    case 88527:
    {
        returnValue = F("Edlendorfer Steig");
        break;
    }
    case 88528:
    {
        returnValue = F("Edlersweg");
        break;
    }
    case 88529:
    {
        returnValue = F("Edlhardstr.");
        break;
    }
    case 88530:
    {
        returnValue = F("Edlhausener Str.");
        break;
    }
    case 88531:
    {
        returnValue = F("Edlhofstr.");
        break;
    }
    case 88532:
    {
        returnValue = F("Edlichstr.");
        break;
    }
    case 88533:
    {
        returnValue = F("Edling");
        break;
    }
    case 88534:
    {
        returnValue = F("Edlinger Str.");
        break;
    }
    case 88535:
    {
        returnValue = F("Edlingerplatz");
        break;
    }
    case 88536:
    {
        returnValue = F("Edlingerstr.");
        break;
    }
    case 88537:
    {
        returnValue = F("Edlingsfeld");
        break;
    }
    case 88538:
    {
        returnValue = F("Edlkofener Str.");
        break;
    }
    case 88539:
    {
        returnValue = F("Edlmairstr.");
        break;
    }
    case 88540:
    {
        returnValue = F("Edlmannsberg");
        break;
    }
    case 88541:
    {
        returnValue = F("Edlöster-Geräumt");
        break;
    }
    case 88542:
    {
        returnValue = F("Edmaierstr.");
        break;
    }
    case 88543:
    {
        returnValue = F("Edmond-Kaiser-Str.");
        break;
    }
    case 88544:
    {
        returnValue = F("Edmonton-Platz");
        break;
    }
    case 88545:
    {
        returnValue = F("Edmund Conen Weg");
        break;
    }
    case 88546:
    {
        returnValue = F("Edmund Nuppeney Allee");
        break;
    }
    case 88547:
    {
        returnValue = F("Edmund-Baer-Ring");
        break;
    }
    case 88548:
    {
        returnValue = F("Edmund-Bergmann-Platz");
        break;
    }
    case 88549:
    {
        returnValue = F("Edmund-Bertrams-Str.");
        break;
    }
    case 88550:
    {
        returnValue = F("Edmund-Bungartz-Weg");
        break;
    }
    case 88551:
    {
        returnValue = F("Edmund-Dorfner-Str.");
        break;
    }
    case 88552:
    {
        returnValue = F("Edmund-Erlemann-Platz");
        break;
    }
    case 88553:
    {
        returnValue = F("Edmund-Groß-Str.");
        break;
    }
    case 88554:
    {
        returnValue = F("Edmund-Habermann-Str.");
        break;
    }
    case 88555:
    {
        returnValue = F("Edmund-Heinz-Str.");
        break;
    }
    case 88556:
    {
        returnValue = F("Edmund-Henkel-Weg");
        break;
    }
    case 88557:
    {
        returnValue = F("Edmund-Heusinger-Str.");
        break;
    }
    case 88558:
    {
        returnValue = F("Edmund-Hornung-Str.");
        break;
    }
    case 88559:
    {
        returnValue = F("Edmund-Husserl-Str.");
        break;
    }
    case 88560:
    {
        returnValue = F("Edmund-Janssen-Str.");
        break;
    }
    case 88561:
    {
        returnValue = F("Edmund-Jörg-Str.");
        break;
    }
    case 88562:
    {
        returnValue = F("Edmund-Kaufmann-Str.");
        break;
    }
    case 88563:
    {
        returnValue = F("Edmund-Kesting-Weg");
        break;
    }
    case 88564:
    {
        returnValue = F("Edmund-Kohl-Str.");
        break;
    }
    case 88565:
    {
        returnValue = F("Edmund-Kohler-Str.");
        break;
    }
    case 88566:
    {
        returnValue = F("Edmund-Kretschmer-Str.");
        break;
    }
    case 88567:
    {
        returnValue = F("Edmund-Kurtz-Str.");
        break;
    }
    case 88568:
    {
        returnValue = F("Edmund-König-Str.");
        break;
    }
    case 88569:
    {
        returnValue = F("Edmund-Lang-Str.");
        break;
    }
    case 88570:
    {
        returnValue = F("Edmund-Langhans-Str.");
        break;
    }
    case 88571:
    {
        returnValue = F("Edmund-Leistner-Weg");
        break;
    }
    case 88572:
    {
        returnValue = F("Edmund-Lohse-Str.");
        break;
    }
    case 88573:
    {
        returnValue = F("Edmund-Mansbart-Str.");
        break;
    }
    case 88574:
    {
        returnValue = F("Edmund-Meiser-Str.");
        break;
    }
    case 88575:
    {
        returnValue = F("Edmund-Merz-Str.");
        break;
    }
    case 88576:
    {
        returnValue = F("Edmund-Moeller-Weg");
        break;
    }
    case 88577:
    {
        returnValue = F("Edmund-Müller-Str.");
        break;
    }
    case 88578:
    {
        returnValue = F("Edmund-Probst-Weg");
        break;
    }
    case 88579:
    {
        returnValue = F("Edmund-Richen-Str.");
        break;
    }
    case 88580:
    {
        returnValue = F("Edmund-Rieß-Str.");
        break;
    }
    case 88581:
    {
        returnValue = F("Edmund-Ruf-Str.");
        break;
    }
    case 88582:
    {
        returnValue = F("Edmund-Rumpler-Str.");
        break;
    }
    case 88583:
    {
        returnValue = F("Edmund-Rumpler-Weg");
        break;
    }
    case 88584:
    {
        returnValue = F("Edmund-Schaefer-Platz");
        break;
    }
    case 88585:
    {
        returnValue = F("Edmund-Scholl-Str.");
        break;
    }
    case 88586:
    {
        returnValue = F("Edmund-Schweizer-Str.");
        break;
    }
    case 88587:
    {
        returnValue = F("Edmund-Seng-Str.");
        break;
    }
    case 88588:
    {
        returnValue = F("Edmund-Strutz-Weg");
        break;
    }
    case 88589:
    {
        returnValue = F("Edmund-Weber-Str.");
        break;
    }
    case 88590:
    {
        returnValue = F("Edmund-Wellenstein-Str.");
        break;
    }
    case 88591:
    {
        returnValue = F("Edmund-Weller-Str.");
        break;
    }
    case 88592:
    {
        returnValue = F("Edmund-Zimmermann-Str.");
        break;
    }
    case 88593:
    {
        returnValue = F("Edmund-ter-Meer-Str.");
        break;
    }
    case 88594:
    {
        returnValue = F("Edmund-von-Lippmann-Str.");
        break;
    }
    case 88595:
    {
        returnValue = F("Edmunda-Dietz-Str.");
        break;
    }
    case 88596:
    {
        returnValue = F("Edmunds Hütte Weg");
        break;
    }
    case 88597:
    {
        returnValue = F("Edmundstr.");
        break;
    }
    case 88598:
    {
        returnValue = F("Edo-Boling-Str.");
        break;
    }
    case 88599:
    {
        returnValue = F("Edo-Christophers-Pad");
        break;
    }
    case 88600:
    {
        returnValue = F("Edo-Edzards-Str.");
        break;
    }
    case 88601:
    {
        returnValue = F("Edo-Fimmen-Str.");
        break;
    }
    case 88602:
    {
        returnValue = F("Edo-Wiemken-Str.");
        break;
    }
    case 88603:
    {
        returnValue = F("Edoburg");
        break;
    }
    case 88604:
    {
        returnValue = F("Edoburger Str.");
        break;
    }
    case 88605:
    {
        returnValue = F("Edohausen");
        break;
    }
    case 88606:
    {
        returnValue = F("Edomsharderweg");
        break;
    }
    case 88607:
    {
        returnValue = F("Edouard-Manet-Weg");
        break;
    }
    case 88608:
    {
        returnValue = F("Edschenburger Weg");
        break;
    }
    case 88609:
    {
        returnValue = F("Edschmidweg");
        break;
    }
    case 88610:
    {
        returnValue = F("Edsel-Ford-Str.");
        break;
    }
    case 88611:
    {
        returnValue = F("Edtmüllerweg");
        break;
    }
    case 88612:
    {
        returnValue = F("Eduard Adelhoch-Str.");
        break;
    }
    case 88613:
    {
        returnValue = F("Eduard-Adler-Str.");
        break;
    }
    case 88614:
    {
        returnValue = F("Eduard-Ahlborn-Str.");
        break;
    }
    case 88615:
    {
        returnValue = F("Eduard-Anthes-Str.");
        break;
    }
    case 88616:
    {
        returnValue = F("Eduard-Arnhold-Str.");
        break;
    }
    case 88617:
    {
        returnValue = F("Eduard-Aronsohn-Str.");
        break;
    }
    case 88618:
    {
        returnValue = F("Eduard-Bader-Str.");
        break;
    }
    case 88619:
    {
        returnValue = F("Eduard-Baring-Str.");
        break;
    }
    case 88620:
    {
        returnValue = F("Eduard-Bartling-Platz");
        break;
    }
    case 88621:
    {
        returnValue = F("Eduard-Bausch-Str.");
        break;
    }
    case 88622:
    {
        returnValue = F("Eduard-Becker-Str.");
        break;
    }
    case 88623:
    {
        returnValue = F("Eduard-Beerbaum-Str.");
        break;
    }
    case 88624:
    {
        returnValue = F("Eduard-Berdel-Str.");
        break;
    }
    case 88625:
    {
        returnValue = F("Eduard-Bernstein-Str.");
        break;
    }
    case 88626:
    {
        returnValue = F("Eduard-Bernstein-Weg");
        break;
    }
    case 88627:
    {
        returnValue = F("Eduard-Bilz-Platz");
        break;
    }
    case 88628:
    {
        returnValue = F("Eduard-Bilz-Str.");
        break;
    }
    case 88629:
    {
        returnValue = F("Eduard-Bilz-Weg");
        break;
    }
    case 88630:
    {
        returnValue = F("Eduard-Bork-Str.");
        break;
    }
    case 88631:
    {
        returnValue = F("Eduard-Breitung-Weg");
        break;
    }
    case 88632:
    {
        returnValue = F("Eduard-Breuninger-Steg");
        break;
    }
    case 88633:
    {
        returnValue = F("Eduard-Breuninger-Str.");
        break;
    }
    case 88634:
    {
        returnValue = F("Eduard-Bromm-Str.");
        break;
    }
    case 88635:
    {
        returnValue = F("Eduard-Buchner-Str.");
        break;
    }
    case 88636:
    {
        returnValue = F("Eduard-Bäumer-Str.");
        break;
    }
    case 88637:
    {
        returnValue = F("Eduard-Claudius-Str.");
        break;
    }
    case 88638:
    {
        returnValue = F("Eduard-Conz-Str.");
        break;
    }
    case 88639:
    {
        returnValue = F("Eduard-Daelen-Str.");
        break;
    }
    case 88640:
    {
        returnValue = F("Eduard-David-Str.");
        break;
    }
    case 88641:
    {
        returnValue = F("Eduard-Deubert-Str.");
        break;
    }
    case 88642:
    {
        returnValue = F("Eduard-Deutsch-Str.");
        break;
    }
    case 88643:
    {
        returnValue = F("Eduard-Didion-Str.");
        break;
    }
    case 88644:
    {
        returnValue = F("Eduard-Doebner-Str.");
        break;
    }
    case 88645:
    {
        returnValue = F("Eduard-Dressler-Str.");
        break;
    }
    case 88646:
    {
        returnValue = F("Eduard-Dyckerhoff-Str.");
        break;
    }
    case 88647:
    {
        returnValue = F("Eduard-Dörge-Platz");
        break;
    }
    case 88648:
    {
        returnValue = F("Eduard-Dörge-Weg");
        break;
    }
    case 88649:
    {
        returnValue = F("Eduard-Ege-Str.");
        break;
    }
    case 88650:
    {
        returnValue = F("Eduard-Engel-Str.");
        break;
    }
    case 88651:
    {
        returnValue = F("Eduard-Feldhofen-Str.");
        break;
    }
    case 88652:
    {
        returnValue = F("Eduard-Fentsch-Weg");
        break;
    }
    case 88653:
    {
        returnValue = F("Eduard-Festbaum-Str.");
        break;
    }
    case 88654:
    {
        returnValue = F("Eduard-Feth-Str.");
        break;
    }
    case 88655:
    {
        returnValue = F("Eduard-Fischer-Weg");
        break;
    }
    case 88656:
    {
        returnValue = F("Eduard-Fittig-Str.");
        break;
    }
    case 88657:
    {
        returnValue = F("Eduard-Flach-Str.");
        break;
    }
    case 88658:
    {
        returnValue = F("Eduard-Forster-Str.");
        break;
    }
    case 88659:
    {
        returnValue = F("Eduard-Frank-Str.");
        break;
    }
    case 88660:
    {
        returnValue = F("Eduard-Frantzen-Str.");
        break;
    }
    case 88661:
    {
        returnValue = F("Eduard-Fritze-Str.");
        break;
    }
    case 88662:
    {
        returnValue = F("Eduard-Fähndrich-Weg");
        break;
    }
    case 88663:
    {
        returnValue = F("Eduard-Gabelsberger-Str.");
        break;
    }
    case 88664:
    {
        returnValue = F("Eduard-Gerhard-Str.");
        break;
    }
    case 88665:
    {
        returnValue = F("Eduard-Goebel-Str.");
        break;
    }
    case 88666:
    {
        returnValue = F("Eduard-Grunow-Str.");
        break;
    }
    case 88667:
    {
        returnValue = F("Eduard-Gräf-Str.");
        break;
    }
    case 88668:
    {
        returnValue = F("Eduard-Görbing-Str.");
        break;
    }
    case 88669:
    {
        returnValue = F("Eduard-Haber-Str.");
        break;
    }
    case 88670:
    {
        returnValue = F("Eduard-Hamm-Str.");
        break;
    }
    case 88671:
    {
        returnValue = F("Eduard-Hartmann-Str.");
        break;
    }
    case 88672:
    {
        returnValue = F("Eduard-Heinkes-Platz");
        break;
    }
    case 88673:
    {
        returnValue = F("Eduard-Heis-Str.");
        break;
    }
    case 88674:
    {
        returnValue = F("Eduard-Hepp-Str.");
        break;
    }
    case 88675:
    {
        returnValue = F("Eduard-Hilger-Str.");
        break;
    }
    case 88676:
    {
        returnValue = F("Eduard-Hiller-Str.");
        break;
    }
    case 88677:
    {
        returnValue = F("Eduard-Hirsch-Str.");
        break;
    }
    case 88678:
    {
        returnValue = F("Eduard-Istas-Str.");
        break;
    }
    case 88679:
    {
        returnValue = F("Eduard-Jost-Str.");
        break;
    }
    case 88680:
    {
        returnValue = F("Eduard-Kaczmarek-Weg");
        break;
    }
    case 88681:
    {
        returnValue = F("Eduard-Kaiser-Str.");
        break;
    }
    case 88682:
    {
        returnValue = F("Eduard-Kandl-Str.");
        break;
    }
    case 88683:
    {
        returnValue = F("Eduard-Karstens-Weg");
        break;
    }
    case 88684:
    {
        returnValue = F("Eduard-Kauffer-Weg");
        break;
    }
    case 88685:
    {
        returnValue = F("Eduard-Kiel-Str.");
        break;
    }
    case 88686:
    {
        returnValue = F("Eduard-Klas-Weg");
        break;
    }
    case 88687:
    {
        returnValue = F("Eduard-Kleine-Str.");
        break;
    }
    case 88688:
    {
        returnValue = F("Eduard-Klenck-Weg");
        break;
    }
    case 88689:
    {
        returnValue = F("Eduard-Klüber-Str.");
        break;
    }
    case 88690:
    {
        returnValue = F("Eduard-Knauer-Str.");
        break;
    }
    case 88691:
    {
        returnValue = F("Eduard-Knoll-Str.");
        break;
    }
    case 88692:
    {
        returnValue = F("Eduard-Korff-Str.");
        break;
    }
    case 88693:
    {
        returnValue = F("Eduard-Krauß-Str.");
        break;
    }
    case 88694:
    {
        returnValue = F("Eduard-Krenkel-Str.");
        break;
    }
    case 88695:
    {
        returnValue = F("Eduard-Krüger-Str.");
        break;
    }
    case 88696:
    {
        returnValue = F("Eduard-Künneke-Str.");
        break;
    }
    case 88697:
    {
        returnValue = F("Eduard-Küsters-Str.");
        break;
    }
    case 88698:
    {
        returnValue = F("Eduard-Lagemann-Str.");
        break;
    }
    case 88699:
    {
        returnValue = F("Eduard-Leede-Str.");
        break;
    }
    case 88700:
    {
        returnValue = F("Eduard-Lorentz-Str.");
        break;
    }
    case 88701:
    {
        returnValue = F("Eduard-Lucas-Str.");
        break;
    }
    case 88702:
    {
        returnValue = F("Eduard-Lucas-Weg");
        break;
    }
    case 88703:
    {
        returnValue = F("Eduard-Mange-Weg");
        break;
    }
    case 88704:
    {
        returnValue = F("Eduard-Mann-Str.");
        break;
    }
    case 88705:
    {
        returnValue = F("Eduard-Maurer-Str.");
        break;
    }
    case 88706:
    {
        returnValue = F("Eduard-Mazarin-Str.");
        break;
    }
    case 88707:
    {
        returnValue = F("Eduard-Merz-Weg");
        break;
    }
    case 88708:
    {
        returnValue = F("Eduard-Milse-Weg");
        break;
    }
    case 88709:
    {
        returnValue = F("Eduard-Moser-Str.");
        break;
    }
    case 88710:
    {
        returnValue = F("Eduard-Mörike-Damm");
        break;
    }
    case 88711:
    {
        returnValue = F("Eduard-Mörike-Platz");
        break;
    }
    case 88712:
    {
        returnValue = F("Eduard-Mörike-Ring");
        break;
    }
    case 88713:
    {
        returnValue = F("Eduard-Mörike-Str.");
        break;
    }
    case 88714:
    {
        returnValue = F("Eduard-Mörike-Weg");
        break;
    }
    case 88715:
    {
        returnValue = F("Eduard-Mühlbauer-Weg");
        break;
    }
    case 88716:
    {
        returnValue = F("Eduard-Müller-Str.");
        break;
    }
    case 88717:
    {
        returnValue = F("Eduard-Müller-Weg");
        break;
    }
    case 88718:
    {
        returnValue = F("Eduard-Nagel-Str.");
        break;
    }
    case 88719:
    {
        returnValue = F("Eduard-Nels-Str.");
        break;
    }
    case 88720:
    {
        returnValue = F("Eduard-Ockel-Weg");
        break;
    }
    case 88721:
    {
        returnValue = F("Eduard-Oehler-Str.");
        break;
    }
    case 88722:
    {
        returnValue = F("Eduard-Otto-Str.");
        break;
    }
    case 88723:
    {
        returnValue = F("Eduard-Pape-Str.");
        break;
    }
    case 88724:
    {
        returnValue = F("Eduard-Paret-Str.");
        break;
    }
    case 88725:
    {
        returnValue = F("Eduard-Petrat-Str.");
        break;
    }
    case 88726:
    {
        returnValue = F("Eduard-Pfeiffer-Str.");
        break;
    }
    case 88727:
    {
        returnValue = F("Eduard-Pflüger-Str.");
        break;
    }
    case 88728:
    {
        returnValue = F("Eduard-Poschinger-Weg");
        break;
    }
    case 88729:
    {
        returnValue = F("Eduard-Presser-Str.");
        break;
    }
    case 88730:
    {
        returnValue = F("Eduard-Profittlich-Str.");
        break;
    }
    case 88731:
    {
        returnValue = F("Eduard-Reichl-Str.");
        break;
    }
    case 88732:
    {
        returnValue = F("Eduard-Rhein-Str.");
        break;
    }
    case 88733:
    {
        returnValue = F("Eduard-Rosenthal-Str.");
        break;
    }
    case 88734:
    {
        returnValue = F("Eduard-Röders-Str.");
        break;
    }
    case 88735:
    {
        returnValue = F("Eduard-Rüber-Str.");
        break;
    }
    case 88736:
    {
        returnValue = F("Eduard-Rüppell-Str.");
        break;
    }
    case 88737:
    {
        returnValue = F("Eduard-Sabirowsky-Str.");
        break;
    }
    case 88738:
    {
        returnValue = F("Eduard-Salfeld-Str.");
        break;
    }
    case 88739:
    {
        returnValue = F("Eduard-Schenk-Str.");
        break;
    }
    case 88740:
    {
        returnValue = F("Eduard-Scheve-Allee");
        break;
    }
    case 88741:
    {
        returnValue = F("Eduard-Scheve-Str.");
        break;
    }
    case 88742:
    {
        returnValue = F("Eduard-Schick-Platz");
        break;
    }
    case 88743:
    {
        returnValue = F("Eduard-Schieffer-Str.");
        break;
    }
    case 88744:
    {
        returnValue = F("Eduard-Schleich-Weg");
        break;
    }
    case 88745:
    {
        returnValue = F("Eduard-Schlichting-Str.");
        break;
    }
    case 88746:
    {
        returnValue = F("Eduard-Schloemann-Str.");
        break;
    }
    case 88747:
    {
        returnValue = F("Eduard-Schmelzkopf-Str.");
        break;
    }
    case 88748:
    {
        returnValue = F("Eduard-Schmid-Str.");
        break;
    }
    case 88749:
    {
        returnValue = F("Eduard-Schneider-Davids-Str.");
        break;
    }
    case 88750:
    {
        returnValue = F("Eduard-Schnieder-Str.");
        break;
    }
    case 88751:
    {
        returnValue = F("Eduard-Schopf-Allee");
        break;
    }
    case 88752:
    {
        returnValue = F("Eduard-Schulte-Str.");
        break;
    }
    case 88753:
    {
        returnValue = F("Eduard-Schulze-Str.");
        break;
    }
    case 88754:
    {
        returnValue = F("Eduard-Schwartz-Str.");
        break;
    }
    case 88755:
    {
        returnValue = F("Eduard-Schweikert-Str.");
        break;
    }
    case 88756:
    {
        returnValue = F("Eduard-Schübler-Str.");
        break;
    }
    case 88757:
    {
        returnValue = F("Eduard-Seirig-Str.");
        break;
    }
    case 88758:
    {
        returnValue = F("Eduard-Sepler-Str.");
        break;
    }
    case 88759:
    {
        returnValue = F("Eduard-Soermus-Str.");
        break;
    }
    case 88760:
    {
        returnValue = F("Eduard-Sommer-Str.");
        break;
    }
    case 88761:
    {
        returnValue = F("Eduard-Spoelgen-Str.");
        break;
    }
    case 88762:
    {
        returnValue = F("Eduard-Spranger-Str.");
        break;
    }
    case 88763:
    {
        returnValue = F("Eduard-Stakemeier-Str.");
        break;
    }
    case 88764:
    {
        returnValue = F("Eduard-Stanglmeier-Str.");
        break;
    }
    case 88765:
    {
        returnValue = F("Eduard-Stehle-Str.");
        break;
    }
    case 88766:
    {
        returnValue = F("Eduard-Steinle-Str.");
        break;
    }
    case 88767:
    {
        returnValue = F("Eduard-Stemplinger-Str.");
        break;
    }
    case 88768:
    {
        returnValue = F("Eduard-Stieler-Ring");
        break;
    }
    case 88769:
    {
        returnValue = F("Eduard-Strasburger-Weg");
        break;
    }
    case 88770:
    {
        returnValue = F("Eduard-Stremme-Str.");
        break;
    }
    case 88771:
    {
        returnValue = F("Eduard-Stübler-Str.");
        break;
    }
    case 88772:
    {
        returnValue = F("Eduard-Sudendorf-Str.");
        break;
    }
    case 88773:
    {
        returnValue = F("Eduard-Suling-Str.");
        break;
    }
    case 88774:
    {
        returnValue = F("Eduard-Süskind-Weg");
        break;
    }
    case 88775:
    {
        returnValue = F("Eduard-Thöny-Str.");
        break;
    }
    case 88776:
    {
        returnValue = F("Eduard-Trabold-Str.");
        break;
    }
    case 88777:
    {
        returnValue = F("Eduard-Trautwein-Str.");
        break;
    }
    case 88778:
    {
        returnValue = F("Eduard-Tretrop-Brücke");
        break;
    }
    case 88779:
    {
        returnValue = F("Eduard-Verhülsdonk-Str.");
        break;
    }
    case 88780:
    {
        returnValue = F("Eduard-Vilde-Str.");
        break;
    }
    case 88781:
    {
        returnValue = F("Eduard-Vogel-Str.");
        break;
    }
    case 88782:
    {
        returnValue = F("Eduard-Völkel-Weg");
        break;
    }
    case 88783:
    {
        returnValue = F("Eduard-Wagner-Ring");
        break;
    }
    case 88784:
    {
        returnValue = F("Eduard-Weitsch-Weg");
        break;
    }
    case 88785:
    {
        returnValue = F("Eduard-Welty-Weg");
        break;
    }
    case 88786:
    {
        returnValue = F("Eduard-Wendebourg-Weg");
        break;
    }
    case 88787:
    {
        returnValue = F("Eduard-Wengert-Str.");
        break;
    }
    case 88788:
    {
        returnValue = F("Eduard-Wiebe-Weg");
        break;
    }
    case 88789:
    {
        returnValue = F("Eduard-Wilhelmi-Str.");
        break;
    }
    case 88790:
    {
        returnValue = F("Eduard-Windthorst-Str.");
        break;
    }
    case 88791:
    {
        returnValue = F("Eduard-Wolff-Str.");
        break;
    }
    case 88792:
    {
        returnValue = F("Eduard-Wulff-Str.");
        break;
    }
    case 88793:
    {
        returnValue = F("Eduard-Wörner-Str.");
        break;
    }
    case 88794:
    {
        returnValue = F("Eduard-Wüstenfeld-Weg");
        break;
    }
    case 88795:
    {
        returnValue = F("Eduard-Ziegler-Str.");
        break;
    }
    case 88796:
    {
        returnValue = F("Eduard-von-Hartmann-Str.");
        break;
    }
    case 88797:
    {
        returnValue = F("Eduard-von-Heuß-Str.");
        break;
    }
    case 88798:
    {
        returnValue = F("Eduard-von-Lang-Str.");
        break;
    }
    case 88799:
    {
        returnValue = F("Eduard-von-Müller-Weg");
        break;
    }
    case 88800:
    {
        returnValue = F("Eduard-von-Simson-Str.");
        break;
    }
    case 88801:
    {
        returnValue = F("Eduard-von-Winterstein-Str.");
        break;
    }
    case 88802:
    {
        returnValue = F("Eduardo-Galeano-Str.");
        break;
    }
    case 88803:
    {
        returnValue = F("Eduardo-Vargas-Str.");
        break;
    }
    case 88804:
    {
        returnValue = F("Eduardschacht");
        break;
    }
    case 88805:
    {
        returnValue = F("Eduardsplatz");
        break;
    }
    case 88806:
    {
        returnValue = F("Eduardstaler Str.");
        break;
    }
    case 88807:
    {
        returnValue = F("Eduardstr.");
        break;
    }
    case 88808:
    {
        returnValue = F("Eduardweg");
        break;
    }
    case 88809:
    {
        returnValue = F("Edvard-Grieg-Allee");
        break;
    }
    case 88810:
    {
        returnValue = F("Edvard-Grieg-Str.");
        break;
    }
    case 88811:
    {
        returnValue = F("Edvard-Grieg-Weg");
        break;
    }
    case 88812:
    {
        returnValue = F("Edvard-Munch-Str.");
        break;
    }
    case 88813:
    {
        returnValue = F("Edward-Schröder-Bogen");
        break;
    }
    case 88814:
    {
        returnValue = F("Edward-Schröder-Str.");
        break;
    }
    case 88815:
    {
        returnValue = F("Edwiese");
        break;
    }
    case 88816:
    {
        returnValue = F("Edwin-Hoernle-Str.");
        break;
    }
    case 88817:
    {
        returnValue = F("Edwin-Häusler-Str.");
        break;
    }
    case 88818:
    {
        returnValue = F("Edwin-Hörnle-Weg");
        break;
    }
    case 88819:
    {
        returnValue = F("Edwin-Kessler-Str.");
        break;
    }
    case 88820:
    {
        returnValue = F("Edwin-Lilienthal-Str.");
        break;
    }
    case 88821:
    {
        returnValue = F("Edwin-Löhler-Str.");
        break;
    }
    case 88822:
    {
        returnValue = F("Edwin-Naef-Weg");
        break;
    }
    case 88823:
    {
        returnValue = F("Edwin-Oppler-Weg");
        break;
    }
    case 88824:
    {
        returnValue = F("Edwin-Reis-Str.");
        break;
    }
    case 88825:
    {
        returnValue = F("Edwin-Rolf-Platz");
        break;
    }
    case 88826:
    {
        returnValue = F("Edwin-Stolz-Weg");
        break;
    }
    case 88827:
    {
        returnValue = F("Edzard-Cirksena-Str.");
        break;
    }
    case 88828:
    {
        returnValue = F("Edzardring");
        break;
    }
    case 88829:
    {
        returnValue = F("Edzardstr.");
        break;
    }
    case 88830:
    {
        returnValue = F("Eeckbusch");
        break;
    }
    case 88831:
    {
        returnValue = F("Eekbarg");
        break;
    }
    case 88832:
    {
        returnValue = F("Eekberg");
        break;
    }
    case 88833:
    {
        returnValue = F("Eekbrook");
        break;
    }
    case 88834:
    {
        returnValue = F("Eekbusch");
        break;
    }
    case 88835:
    {
        returnValue = F("Eeken");
        break;
    }
    case 88836:
    {
        returnValue = F("Eekenboomsweg");
        break;
    }
    case 88837:
    {
        returnValue = F("Eekenbusch");
        break;
    }
    case 88838:
    {
        returnValue = F("Eekenhoerst");
        break;
    }
    case 88839:
    {
        returnValue = F("Eekenhof");
        break;
    }
    case 88840:
    {
        returnValue = F("Eekenhorst");
        break;
    }
    case 88841:
    {
        returnValue = F("Eekenhöge");
        break;
    }
    case 88842:
    {
        returnValue = F("Eekenpadd");
        break;
    }
    case 88843:
    {
        returnValue = F("Eekenrebenweg");
        break;
    }
    case 88844:
    {
        returnValue = F("Eekenring");
        break;
    }
    case 88845:
    {
        returnValue = F("Eekenstraat");
        break;
    }
    case 88846:
    {
        returnValue = F("Eekenweg");
        break;
    }
    case 88847:
    {
        returnValue = F("Eekerfeen");
        break;
    }
    case 88848:
    {
        returnValue = F("Eekerkuuch");
        break;
    }
    case 88849:
    {
        returnValue = F("Eekeweg");
        break;
    }
    case 88850:
    {
        returnValue = F("Eekhof");
        break;
    }
    case 88851:
    {
        returnValue = F("Eekhoff");
        break;
    }
    case 88852:
    {
        returnValue = F("Eekholl");
        break;
    }
    case 88853:
    {
        returnValue = F("Eekholt");
        break;
    }
    case 88854:
    {
        returnValue = F("Eekhorst");
        break;
    }
    case 88855:
    {
        returnValue = F("Eekkampstr.");
        break;
    }
    case 88856:
    {
        returnValue = F("Eekloer Str.");
        break;
    }
    case 88857:
    {
        returnValue = F("Eekmissen");
        break;
    }
    case 88858:
    {
        returnValue = F("Eekweg");
        break;
    }
    case 88859:
    {
        returnValue = F("Eelder Str.");
        break;
    }
    case 88860:
    {
        returnValue = F("Eeleweg");
        break;
    }
    case 88861:
    {
        returnValue = F("Eemelkeswai");
        break;
    }
    case 88862:
    {
        returnValue = F("Eendrachtstr.");
        break;
    }
    case 88863:
    {
        returnValue = F("Eenhuis");
        break;
    }
    case 88864:
    {
        returnValue = F("Eesackerstr.");
        break;
    }
    case 88865:
    {
        returnValue = F("Eesbüll");
        break;
    }
    case 88866:
    {
        returnValue = F("Eescher Str.");
        break;
    }
    case 88867:
    {
        returnValue = F("Eescher Weg");
        break;
    }
    case 88868:
    {
        returnValue = F("Eescherdeich");
        break;
    }
    case 88869:
    {
        returnValue = F("Eescherpat");
        break;
    }
    case 88870:
    {
        returnValue = F("Eesmanns Weg");
        break;
    }
    case 88871:
    {
        returnValue = F("Eetsweg");
        break;
    }
    case 88872:
    {
        returnValue = F("Eetz");
        break;
    }
    case 88873:
    {
        returnValue = F("Eetzkrog");
        break;
    }
    case 88874:
    {
        returnValue = F("Eetzredder");
        break;
    }
    case 88875:
    {
        returnValue = F("Eetzweg");
        break;
    }
    case 88876:
    {
        returnValue = F("Eferdinger Str.");
        break;
    }
    case 88877:
    {
        returnValue = F("Eferenstr.");
        break;
    }
    case 88878:
    {
        returnValue = F("Efeugang");
        break;
    }
    case 88879:
    {
        returnValue = F("Efeuhof");
        break;
    }
    case 88880:
    {
        returnValue = F("Efeuplatz");
        break;
    }
    case 88881:
    {
        returnValue = F("Efeuranke");
        break;
    }
    case 88882:
    {
        returnValue = F("Efeuring");
        break;
    }
    case 88883:
    {
        returnValue = F("Efeustr.");
        break;
    }
    case 88884:
    {
        returnValue = F("Efeuweg");
        break;
    }
    case 88885:
    {
        returnValue = F("Efeuwinkel");
        break;
    }
    case 88886:
    {
        returnValue = F("Effelder Str.");
        break;
    }
    case 88887:
    {
        returnValue = F("Effelder Weg");
        break;
    }
    case 88888:
    {
        returnValue = F("Effelderstr.");
        break;
    }
    case 88889:
    {
        returnValue = F("Effeldorfer Str.");
        break;
    }
    case 88890:
    {
        returnValue = F("Effeler Str.");
        break;
    }
    case 88891:
    {
        returnValue = F("Effelner Mühlenweg");
        break;
    }
    case 88892:
    {
        returnValue = F("Effelner Str.");
        break;
    }
    case 88893:
    {
        returnValue = F("Effelnerweg");
        break;
    }
    case 88894:
    {
        returnValue = F("Effelsberger Weg");
        break;
    }
    case 88895:
    {
        returnValue = F("Effelsbergstr.");
        break;
    }
    case 88896:
    {
        returnValue = F("Effelterstr.");
        break;
    }
    case 88897:
    {
        returnValue = F("Effeltricher Steig");
        break;
    }
    case 88898:
    {
        returnValue = F("Effeltricher Str.");
        break;
    }
    case 88899:
    {
        returnValue = F("Effenberger Weg");
        break;
    }
    case 88900:
    {
        returnValue = F("Effengrube");
        break;
    }
    case 88901:
    {
        returnValue = F("Effenkranz");
        break;
    }
    case 88902:
    {
        returnValue = F("Effenmühle");
        break;
    }
    case 88903:
    {
        returnValue = F("Effenspitze");
        break;
    }
    case 88904:
    {
        returnValue = F("Effenstiel");
        break;
    }
    case 88905:
    {
        returnValue = F("Effenweg");
        break;
    }
    case 88906:
    {
        returnValue = F("Efferener Str.");
        break;
    }
    case 88907:
    {
        returnValue = F("Efferenweg");
        break;
    }
    case 88908:
    {
        returnValue = F("Efferother Weg");
        break;
    }
    case 88909:
    {
        returnValue = F("Efferter Str.");
        break;
    }
    case 88910:
    {
        returnValue = F("Effertsufer");
        break;
    }
    case 88911:
    {
        returnValue = F("Effertsweg");
        break;
    }
    case 88912:
    {
        returnValue = F("Effertzfeld");
        break;
    }
    case 88913:
    {
        returnValue = F("Effertzgasse");
        break;
    }
    case 88914:
    {
        returnValue = F("Effertzstr.");
        break;
    }
    case 88915:
    {
        returnValue = F("Effeystr.");
        break;
    }
    case 88916:
    {
        returnValue = F("Effger-Busch-Weg");
        break;
    }
    case 88917:
    {
        returnValue = F("Effi-Briest-Weg");
        break;
    }
    case 88918:
    {
        returnValue = F("Effland");
        break;
    }
    case 88919:
    {
        returnValue = F("Efflandstwiete");
        break;
    }
    case 88920:
    {
        returnValue = F("Effmannstr.");
        break;
    }
    case 88921:
    {
        returnValue = F("Effnerplatz");
        break;
    }
    case 88922:
    {
        returnValue = F("Effnerstr.");
        break;
    }
    case 88923:
    {
        returnValue = F("Effolderbacher Weg");
        break;
    }
    case 88924:
    {
        returnValue = F("Effringer Str.");
        break;
    }
    case 88925:
    {
        returnValue = F("Effringer Tal");
        break;
    }
    case 88926:
    {
        returnValue = F("Efingstr.");
        break;
    }
    case 88927:
    {
        returnValue = F("Efkebüll");
        break;
    }
    case 88928:
    {
        returnValue = F("Efriedweg");
        break;
    }
    case 88929:
    {
        returnValue = F("Efringer Str.");
        break;
    }
    case 88930:
    {
        returnValue = F("Efrizweilerstr.");
        break;
    }
    case 88931:
    {
        returnValue = F("Efter Str.");
        break;
    }
    case 88932:
    {
        returnValue = F("Efzestr.");
        break;
    }
    case 88933:
    {
        returnValue = F("Efzeweg");
        break;
    }
    case 88934:
    {
        returnValue = F("Efzewiesen");
        break;
    }
    case 88935:
    {
        returnValue = F("Egarsee");
        break;
    }
    case 88936:
    {
        returnValue = F("Egart");
        break;
    }
    case 88937:
    {
        returnValue = F("Egartenhauallee");
        break;
    }
    case 88938:
    {
        returnValue = F("Egartenhof");
        break;
    }
    case 88939:
    {
        returnValue = F("Egartenstr.");
        break;
    }
    case 88940:
    {
        returnValue = F("Egartenweg");
        break;
    }
    case 88941:
    {
        returnValue = F("Egartenäcker");
        break;
    }
    case 88942:
    {
        returnValue = F("Egartnerstr.");
        break;
    }
    case 88943:
    {
        returnValue = F("Egartsteig");
        break;
    }
    case 88944:
    {
        returnValue = F("Egartstr.");
        break;
    }
    case 88945:
    {
        returnValue = F("Egartweg");
        break;
    }
    case 88946:
    {
        returnValue = F("Egatweg");
        break;
    }
    case 88947:
    {
        returnValue = F("Egaustr.");
        break;
    }
    case 88948:
    {
        returnValue = F("Egbersstr.");
        break;
    }
    case 88949:
    {
        returnValue = F("Egbert-Hayessen-Weg");
        break;
    }
    case 88950:
    {
        returnValue = F("Egbert-Lammers-Weg");
        break;
    }
    case 88951:
    {
        returnValue = F("Egbert-Snoek-Str.");
        break;
    }
    case 88952:
    {
        returnValue = F("Egbertstr.");
        break;
    }
    case 88953:
    {
        returnValue = F("Egbertweg");
        break;
    }
    case 88954:
    {
        returnValue = F("Egedacherstr.");
        break;
    }
    case 88955:
    {
        returnValue = F("Egediweg");
        break;
    }
    case 88956:
    {
        returnValue = F("Egelborger Feld");
        break;
    }
    case 88957:
    {
        returnValue = F("Egelbusch");
        break;
    }
    case 88958:
    {
        returnValue = F("Egeleseestr.");
        break;
    }
    case 88959:
    {
        returnValue = F("Egelfinger Str.");
        break;
    }
    case 88960:
    {
        returnValue = F("Egelgasse");
        break;
    }
    case 88961:
    {
        returnValue = F("Egelgraben");
        break;
    }
    case 88962:
    {
        returnValue = F("Egelhaafstr.");
        break;
    }
    case 88963:
    {
        returnValue = F("Egelhofen");
        break;
    }
    case 88964:
    {
        returnValue = F("Egelhofer Weg");
        break;
    }
    case 88965:
    {
        returnValue = F("Egelhoferstr.");
        break;
    }
    case 88966:
    {
        returnValue = F("Egelhäldenweg");
        break;
    }
    case 88967:
    {
        returnValue = F("Egelhüll");
        break;
    }
    case 88968:
    {
        returnValue = F("Egelinde");
        break;
    }
    case 88969:
    {
        returnValue = F("Egellstr.");
        break;
    }
    case 88970:
    {
        returnValue = F("Egelmeer");
        break;
    }
    case 88971:
    {
        returnValue = F("Egelmehr");
        break;
    }
    case 88972:
    {
        returnValue = F("Egelmes");
        break;
    }
    case 88973:
    {
        returnValue = F("Egelmeser Str.");
        break;
    }
    case 88974:
    {
        returnValue = F("Egelneißedamm");
        break;
    }
    case 88975:
    {
        returnValue = F("Egelner Str.");
        break;
    }
    case 88976:
    {
        returnValue = F("Egelner Weg");
        break;
    }
    case 88977:
    {
        returnValue = F("Egelnsche Str.");
        break;
    }
    case 88978:
    {
        returnValue = F("Egelnscher Weg");
        break;
    }
    case 88979:
    {
        returnValue = F("Egelpuhl");
        break;
    }
    case 88980:
    {
        returnValue = F("Egelsbacher Pfad");
        break;
    }
    case 88981:
    {
        returnValue = F("Egelsbacher Str.");
        break;
    }
    case 88982:
    {
        returnValue = F("Egelsbachweg");
        break;
    }
    case 88983:
    {
        returnValue = F("Egelsberg");
        break;
    }
    case 88984:
    {
        returnValue = F("Egelsbergstr.");
        break;
    }
    case 88985:
    {
        returnValue = F("Egelsbergweg");
        break;
    }
    case 88986:
    {
        returnValue = F("Egelsburger Str.");
        break;
    }
    case 88987:
    {
        returnValue = F("Egelsche Str.");
        break;
    }
    case 88988:
    {
        returnValue = F("Egelsdorfer Str.");
        break;
    }
    case 88989:
    {
        returnValue = F("Egelsee");
        break;
    }
    case 88990:
    {
        returnValue = F("Egelsee-Schlag");
        break;
    }
    case 88991:
    {
        returnValue = F("Egelseegasse");
        break;
    }
    case 88992:
    {
        returnValue = F("Egelseer Str.");
        break;
    }
    case 88993:
    {
        returnValue = F("Egelseerstr.");
        break;
    }
    case 88994:
    {
        returnValue = F("Egelseestr.");
        break;
    }
    case 88995:
    {
        returnValue = F("Egelseeweg");
        break;
    }
    case 88996:
    {
        returnValue = F("Egelser Gaste");
        break;
    }
    case 88997:
    {
        returnValue = F("Egelser Neukamp");
        break;
    }
    case 88998:
    {
        returnValue = F("Egelser Str.");
        break;
    }
    case 88999:
    {
        returnValue = F("Egelsfurthstr.");
        break;
    }
    case 89000:
    {
        returnValue = F("Egelshove");
        break;
    }
    case 89001:
    {
        returnValue = F("Egelspfad");
        break;
    }
    case 89002:
    {
        returnValue = F("Egelsried");
        break;
    }
    case 89003:
    {
        returnValue = F("Egelsrieder Str.");
        break;
    }
    case 89004:
    {
        returnValue = F("Egelstaler Weg");
        break;
    }
    case 89005:
    {
        returnValue = F("Egelsteg");
        break;
    }
    case 89006:
    {
        returnValue = F("Egelsteinstr.");
        break;
    }
    case 89007:
    {
        returnValue = F("Egelstr.");
        break;
    }
    case 89008:
    {
        returnValue = F("Egelsweg");
        break;
    }
    case 89009:
    {
        returnValue = F("Egelswiesenweg");
        break;
    }
    case 89010:
    {
        returnValue = F("Egelswoog Schneise");
        break;
    }
    case 89011:
    {
        returnValue = F("Egeltegaetsweg");
        break;
    }
    case 89012:
    {
        returnValue = F("Egelwaldstr.");
        break;
    }
    case 89013:
    {
        returnValue = F("Egelwaldweg");
        break;
    }
    case 89014:
    {
        returnValue = F("Egelwasser Naherholungsgebiet");
        break;
    }
    case 89015:
    {
        returnValue = F("Egelweg");
        break;
    }
    case 89016:
    {
        returnValue = F("Egen");
        break;
    }
    case 89017:
    {
        returnValue = F("Egenackerweg");
        break;
    }
    case 89018:
    {
        returnValue = F("Egenbachweg");
        break;
    }
    case 89019:
    {
        returnValue = F("Egenbergerweg");
        break;
    }
    case 89020:
    {
        returnValue = F("Egenbolstr.");
        break;
    }
    case 89021:
    {
        returnValue = F("Egenbostel");
        break;
    }
    case 89022:
    {
        returnValue = F("Egenburger Str.");
        break;
    }
    case 89023:
    {
        returnValue = F("Egenbüttelweg");
        break;
    }
    case 89024:
    {
        returnValue = F("Egendorf");
        break;
    }
    case 89025:
    {
        returnValue = F("Egener Str.");
        break;
    }
    case 89026:
    {
        returnValue = F("Egenhausener Str.");
        break;
    }
    case 89027:
    {
        returnValue = F("Egenhauser Str.");
        break;
    }
    case 89028:
    {
        returnValue = F("Egenheftweg");
        break;
    }
    case 89029:
    {
        returnValue = F("Egenhofener Str.");
        break;
    }
    case 89030:
    {
        returnValue = F("Egenhofenstr.");
        break;
    }
    case 89031:
    {
        returnValue = F("Egenhoferstr.");
        break;
    }
    case 89032:
    {
        returnValue = F("Egenhäuser Ring");
        break;
    }
    case 89033:
    {
        returnValue = F("Egenhäuser Str.");
        break;
    }
    case 89034:
    {
        returnValue = F("Egenkamp");
        break;
    }
    case 89035:
    {
        returnValue = F("Egenolf Sattelweg");
        break;
    }
    case 89036:
    {
        returnValue = F("Egenolf-Park");
        break;
    }
    case 89037:
    {
        returnValue = F("Egenolffstr.");
        break;
    }
    case 89038:
    {
        returnValue = F("Egenolfstr.");
        break;
    }
    case 89039:
    {
        returnValue = F("Egenrieder Weg");
        break;
    }
    case 89040:
    {
        returnValue = F("Egenriederstr.");
        break;
    }
    case 89041:
    {
        returnValue = F("Egenrother Weg");
        break;
    }
    case 89042:
    {
        returnValue = F("Egenstr.");
        break;
    }
    case 89043:
    {
        returnValue = F("Egental");
        break;
    }
    case 89044:
    {
        returnValue = F("Egenweg");
        break;
    }
    case 89045:
    {
        returnValue = F("Eger Str.");
        break;
    }
    case 89046:
    {
        returnValue = F("Eger Weg");
        break;
    }
    case 89047:
    {
        returnValue = F("Eger-Lebenspfad");
        break;
    }
    case 89048:
    {
        returnValue = F("Egerbergweg");
        break;
    }
    case 89049:
    {
        returnValue = F("Egerdyk");
        break;
    }
    case 89050:
    {
        returnValue = F("Egerer Platz");
        break;
    }
    case 89051:
    {
        returnValue = F("Egerer Str.");
        break;
    }
    case 89052:
    {
        returnValue = F("Egerer Weg");
        break;
    }
    case 89053:
    {
        returnValue = F("Egererstr.");
        break;
    }
    case 89054:
    {
        returnValue = F("Egererweg");
        break;
    }
    case 89055:
    {
        returnValue = F("Egergasse");
        break;
    }
    case 89056:
    {
        returnValue = F("Egerhaldenweg");
        break;
    }
    case 89057:
    {
        returnValue = F("Egerheide");
        break;
    }
    case 89058:
    {
        returnValue = F("Egeriaplatz");
        break;
    }
    case 89059:
    {
        returnValue = F("Egerichtsweg");
        break;
    }
    case 89060:
    {
        returnValue = F("Egerland");
        break;
    }
    case 89061:
    {
        returnValue = F("Egerland-Str.");
        break;
    }
    case 89062:
    {
        returnValue = F("Egerlandplatz");
        break;
    }
    case 89063:
    {
        returnValue = F("Egerlandring");
        break;
    }
    case 89064:
    {
        returnValue = F("Egerlandsiedlung");
        break;
    }
    case 89065:
    {
        returnValue = F("Egerlandstr.");
        break;
    }
    case 89066:
    {
        returnValue = F("Egerlandweg");
        break;
    }
    case 89067:
    {
        returnValue = F("Egerleinsweg");
        break;
    }
    case 89068:
    {
        returnValue = F("Egerlweg");
        break;
    }
    case 89069:
    {
        returnValue = F("Egerländer Platz");
        break;
    }
    case 89070:
    {
        returnValue = F("Egerländer Str.");
        break;
    }
    case 89071:
    {
        returnValue = F("Egerländer Str. A");
        break;
    }
    case 89072:
    {
        returnValue = F("Egerländer Weg");
        break;
    }
    case 89073:
    {
        returnValue = F("Egerländerstr.");
        break;
    }
    case 89074:
    {
        returnValue = F("Egerländerweg");
        break;
    }
    case 89075:
    {
        returnValue = F("Egermannbrücke");
        break;
    }
    case 89076:
    {
        returnValue = F("Egermannstr.");
        break;
    }
    case 89077:
    {
        returnValue = F("Egern");
        break;
    }
    case 89078:
    {
        returnValue = F("Egerndach");
        break;
    }
    case 89079:
    {
        returnValue = F("Egerplatz");
        break;
    }
    case 89080:
    {
        returnValue = F("Egerpohl");
        break;
    }
    case 89081:
    {
        returnValue = F("Egerring");
        break;
    }
    case 89082:
    {
        returnValue = F("Egersche Brücke");
        break;
    }
    case 89083:
    {
        returnValue = F("Egersdorfer Str.");
        break;
    }
    case 89084:
    {
        returnValue = F("Egersdorfer Weg");
        break;
    }
    case 89085:
    {
        returnValue = F("Egersdorffstr.");
        break;
    }
    case 89086:
    {
        returnValue = F("Egersteig");
        break;
    }
    case 89087:
    {
        returnValue = F("Egerstr.");
        break;
    }
    case 89088:
    {
        returnValue = F("Egert");
        break;
    }
    case 89089:
    {
        returnValue = F("Egerteil");
        break;
    }
    case 89090:
    {
        returnValue = F("Egerten");
        break;
    }
    case 89091:
    {
        returnValue = F("Egertenstr.");
        break;
    }
    case 89092:
    {
        returnValue = F("Egertenweg");
        break;
    }
    case 89093:
    {
        returnValue = F("Egertsbühl");
        break;
    }
    case 89094:
    {
        returnValue = F("Egertsklingeweg");
        break;
    }
    case 89095:
    {
        returnValue = F("Egertstr.");
        break;
    }
    case 89096:
    {
        returnValue = F("Egertsweg");
        break;
    }
    case 89097:
    {
        returnValue = F("Egertweg");
        break;
    }
    case 89098:
    {
        returnValue = F("Egerweg");
        break;
    }
    case 89099:
    {
        returnValue = F("Egerwiesen");
        break;
    }
    case 89100:
    {
        returnValue = F("Egesheimer Str.");
        break;
    }
    case 89101:
    {
        returnValue = F("Egestorfer Kirchweg");
        break;
    }
    case 89102:
    {
        returnValue = F("Egestorfer Landstr.");
        break;
    }
    case 89103:
    {
        returnValue = F("Egestorfer Str.");
        break;
    }
    case 89104:
    {
        returnValue = F("Egestorfer Warte");
        break;
    }
    case 89105:
    {
        returnValue = F("Egestorfer Weg");
        break;
    }
    case 89106:
    {
        returnValue = F("Egestorffstr.");
        break;
    }
    case 89107:
    {
        returnValue = F("Egestorffweg");
        break;
    }
    case 89108:
    {
        returnValue = F("Egestr.");
        break;
    }
    case 89109:
    {
        returnValue = F("Egetmeyerweg");
        break;
    }
    case 89110:
    {
        returnValue = F("Egeweg");
        break;
    }
    case 89111:
    {
        returnValue = F("Egg");
        break;
    }
    case 89112:
    {
        returnValue = F("Eggart");
        break;
    }
    case 89113:
    {
        returnValue = F("Eggartenstr.");
        break;
    }
    case 89114:
    {
        returnValue = F("Eggartenweg");
        break;
    }
    case 89115:
    {
        returnValue = F("Eggartskircher Str.");
        break;
    }
    case 89116:
    {
        returnValue = F("Eggartstr.");
        break;
    }
    case 89117:
    {
        returnValue = F("Eggartweg");
        break;
    }
    case 89118:
    {
        returnValue = F("Eggatsweiler Str.");
        break;
    }
    case 89119:
    {
        returnValue = F("Eggbachstr.");
        break;
    }
    case 89120:
    {
        returnValue = F("Eggbergstr.");
        break;
    }
    case 89121:
    {
        returnValue = F("Egge");
        break;
    }
    case 89122:
    {
        returnValue = F("Egge Wiede");
        break;
    }
    case 89123:
    {
        returnValue = F("Eggebeckstr.");
        break;
    }
    case 89124:
    {
        returnValue = F("Eggebeker Str.");
        break;
    }
    case 89125:
    {
        returnValue = F("Eggebeker Weg");
        break;
    }
    case 89126:
    {
        returnValue = F("Eggeblick");
        break;
    }
    case 89127:
    {
        returnValue = F("Eggebrechthang");
        break;
    }
    case 89128:
    {
        returnValue = F("Eggebrechtstr.");
        break;
    }
    case 89129:
    {
        returnValue = F("Eggeholzweg");
        break;
    }
    case 89130:
    {
        returnValue = F("Eggelinger Siedlung");
        break;
    }
    case 89131:
    {
        returnValue = F("Eggelinger Str.");
        break;
    }
    case 89132:
    {
        returnValue = F("Eggeloger Str.");
        break;
    }
    case 89133:
    {
        returnValue = F("Eggelstetter Str.");
        break;
    }
    case 89134:
    {
        returnValue = F("Eggen");
        break;
    }
    case 89135:
    {
        returnValue = F("Eggenastr.");
        break;
    }
    case 89136:
    {
        returnValue = F("Eggenbacher Hauptstr.");
        break;
    }
    case 89137:
    {
        returnValue = F("Eggenberg");
        break;
    }
    case 89138:
    {
        returnValue = F("Eggenbergsmoor");
        break;
    }
    case 89139:
    {
        returnValue = F("Eggenbergstr.");
        break;
    }
    case 89140:
    {
        returnValue = F("Eggenbergweg");
        break;
    }
    case 89141:
    {
        returnValue = F("Eggenbruch");
        break;
    }
    case 89142:
    {
        returnValue = F("Eggendorf");
        break;
    }
    case 89143:
    {
        returnValue = F("Eggener Str.");
        break;
    }
    case 89144:
    {
        returnValue = F("Eggener Weg");
        break;
    }
    case 89145:
    {
        returnValue = F("Eggenerweg");
        break;
    }
    case 89146:
    {
        returnValue = F("Eggenfeldener Str.");
        break;
    }
    case 89147:
    {
        returnValue = F("Eggenfelder Str.");
        break;
    }
    case 89148:
    {
        returnValue = F("Eggenhauptweg");
        break;
    }
    case 89149:
    {
        returnValue = F("Eggenhofstr.");
        break;
    }
    case 89150:
    {
        returnValue = F("Eggenhöfe");
        break;
    }
    case 89151:
    {
        returnValue = F("Eggenkamp");
        break;
    }
    case 89152:
    {
        returnValue = F("Eggenkopp");
        break;
    }
    case 89153:
    {
        returnValue = F("Eggenpfad");
        break;
    }
    case 89154:
    {
        returnValue = F("Eggenpoint");
        break;
    }
    case 89155:
    {
        returnValue = F("Eggenreuther Weg");
        break;
    }
    case 89156:
    {
        returnValue = F("Eggenriedstr.");
        break;
    }
    case 89157:
    {
        returnValue = F("Eggenrüttestr.");
        break;
    }
    case 89158:
    {
        returnValue = F("Eggenstedter Str.");
        break;
    }
    case 89159:
    {
        returnValue = F("Eggensteiner Allee");
        break;
    }
    case 89160:
    {
        returnValue = F("Eggensteiner Str.");
        break;
    }
    case 89161:
    {
        returnValue = F("Eggensteiner Weg");
        break;
    }
    case 89162:
    {
        returnValue = F("Eggenstr.");
        break;
    }
    case 89163:
    {
        returnValue = F("Eggenswarf");
        break;
    }
    case 89164:
    {
        returnValue = F("Eggentaler Str.");
        break;
    }
    case 89165:
    {
        returnValue = F("Eggentalstr.");
        break;
    }
    case 89166:
    {
        returnValue = F("Eggenthaler Str.");
        break;
    }
    case 89167:
    {
        returnValue = F("Eggenwatt");
        break;
    }
    case 89168:
    {
        returnValue = F("Eggenweg");
        break;
    }
    case 89169:
    {
        returnValue = F("Eggenweiherstr.");
        break;
    }
    case 89170:
    {
        returnValue = F("Eggenöd");
        break;
    }
    case 89171:
    {
        returnValue = F("Egger Str.");
        break;
    }
    case 89172:
    {
        returnValue = F("Egger Weg");
        break;
    }
    case 89173:
    {
        returnValue = F("Egger Wiese");
        break;
    }
    case 89174:
    {
        returnValue = F("Eggerather Weg");
        break;
    }
    case 89175:
    {
        returnValue = F("Eggerbachstr.");
        break;
    }
    case 89176:
    {
        returnValue = F("Eggerding");
        break;
    }
    case 89177:
    {
        returnValue = F("Eggerdinger Str.");
        break;
    }
    case 89178:
    {
        returnValue = F("Eggerfeld");
        break;
    }
    case 89179:
    {
        returnValue = F("Eggergasse");
        break;
    }
    case 89180:
    {
        returnValue = F("Eggerhauser Str.");
        break;
    }
    case 89181:
    {
        returnValue = F("Eggerhofstr.");
        break;
    }
    case 89182:
    {
        returnValue = F("Eggerhorst");
        break;
    }
    case 89183:
    {
        returnValue = F("Eggerichstr.");
        break;
    }
    case 89184:
    {
        returnValue = F("Eggerik-Beninga-Str.");
        break;
    }
    case 89185:
    {
        returnValue = F("Eggering");
        break;
    }
    case 89186:
    {
        returnValue = F("Eggerkamp");
        break;
    }
    case 89187:
    {
        returnValue = F("Eggerkingsweg");
        break;
    }
    case 89188:
    {
        returnValue = F("Eggerner-Feld");
        break;
    }
    case 89189:
    {
        returnValue = F("Eggernkamp");
        break;
    }
    case 89190:
    {
        returnValue = F("Eggernweg");
        break;
    }
    case 89191:
    {
        returnValue = F("Eggeroder Str.");
        break;
    }
    case 89192:
    {
        returnValue = F("Eggers Hof");
        break;
    }
    case 89193:
    {
        returnValue = F("Eggers Hoff");
        break;
    }
    case 89194:
    {
        returnValue = F("Eggersbach");
        break;
    }
    case 89195:
    {
        returnValue = F("Eggersberg");
        break;
    }
    case 89196:
    {
        returnValue = F("Eggersberger Weg");
        break;
    }
    case 89197:
    {
        returnValue = F("Eggersbergstr.");
        break;
    }
    case 89198:
    {
        returnValue = F("Eggerscheidter Str.");
        break;
    }
    case 89199:
    {
        returnValue = F("Eggersdorf");
        break;
    }
    case 89200:
    {
        returnValue = F("Eggersdorfer Chaussee");
        break;
    }
    case 89201:
    {
        returnValue = F("Eggersdorfer Damm");
        break;
    }
    case 89202:
    {
        returnValue = F("Eggersdorfer Rundweg");
        break;
    }
    case 89203:
    {
        returnValue = F("Eggersdorfer Str.");
        break;
    }
    case 89204:
    {
        returnValue = F("Eggersdorfer Waldstr.");
        break;
    }
    case 89205:
    {
        returnValue = F("Eggersdorfer Weg");
        break;
    }
    case 89206:
    {
        returnValue = F("Eggerser Str.");
        break;
    }
    case 89207:
    {
        returnValue = F("Eggersglüßstr.");
        break;
    }
    case 89208:
    {
        returnValue = F("Eggershauser Esch");
        break;
    }
    case 89209:
    {
        returnValue = F("Eggersheimer Str.");
        break;
    }
    case 89210:
    {
        returnValue = F("Eggershovergasse");
        break;
    }
    case 89211:
    {
        returnValue = F("Eggerskammer");
        break;
    }
    case 89212:
    {
        returnValue = F("Eggerskamp");
        break;
    }
    case 89213:
    {
        returnValue = F("Eggerskoppel");
        break;
    }
    case 89214:
    {
        returnValue = F("Eggersmühlen");
        break;
    }
    case 89215:
    {
        returnValue = F("Eggersstr.");
        break;
    }
    case 89216:
    {
        returnValue = F("Eggerssumpfweg");
        break;
    }
    case 89217:
    {
        returnValue = F("Eggerstalstr.");
        break;
    }
    case 89218:
    {
        returnValue = F("Eggerstedter Str.");
        break;
    }
    case 89219:
    {
        returnValue = F("Eggerstedter Weg");
        break;
    }
    case 89220:
    {
        returnValue = F("Eggerstedts Kamp");
        break;
    }
    case 89221:
    {
        returnValue = F("Eggerstedtsberg");
        break;
    }
    case 89222:
    {
        returnValue = F("Eggerstedtstr.");
        break;
    }
    case 89223:
    {
        returnValue = F("Eggersten Ring");
        break;
    }
    case 89224:
    {
        returnValue = F("Eggerstorf");
        break;
    }
    case 89225:
    {
        returnValue = F("Eggerstr.");
        break;
    }
    case 89226:
    {
        returnValue = F("Eggersweg");
        break;
    }
    case 89227:
    {
        returnValue = F("Eggerten");
        break;
    }
    case 89228:
    {
        returnValue = F("Eggertenweg");
        break;
    }
    case 89229:
    {
        returnValue = F("Eggertsberg");
        break;
    }
    case 89230:
    {
        returnValue = F("Eggertshofen");
        break;
    }
    case 89231:
    {
        returnValue = F("Eggertskroog");
        break;
    }
    case 89232:
    {
        returnValue = F("Eggertstr.");
        break;
    }
    case 89233:
    {
        returnValue = F("Eggerweg");
        break;
    }
    case 89234:
    {
        returnValue = F("Eggeröder Brunnen");
        break;
    }
    case 89235:
    {
        returnValue = F("Eggeröder Weg");
        break;
    }
    case 89236:
    {
        returnValue = F("Eggeseer Str.");
        break;
    }
    case 89237:
    {
        returnValue = F("Eggesiner Str.");
        break;
    }
    case 89238:
    {
        returnValue = F("Eggestedter Str.");
        break;
    }
    case 89239:
    {
        returnValue = F("Eggestr.");
        break;
    }
    case 89240:
    {
        returnValue = F("Eggetal");
        break;
    }
    case 89241:
    {
        returnValue = F("Eggetaler Str.");
        break;
    }
    case 89242:
    {
        returnValue = F("Eggeten");
        break;
    }
    case 89243:
    {
        returnValue = F("Eggeweg");
        break;
    }
    case 89244:
    {
        returnValue = F("Eggeweg (Wittekindsweg)");
        break;
    }
    case 89245:
    {
        returnValue = F("Eggewiese");
        break;
    }
    case 89246:
    {
        returnValue = F("Egghalde");
        break;
    }
    case 89247:
    {
        returnValue = F("Egghaldenstr.");
        break;
    }
    case 89248:
    {
        returnValue = F("Egghaldersteig");
        break;
    }
    case 89249:
    {
        returnValue = F("Egginger Str.");
        break;
    }
    case 89250:
    {
        returnValue = F("Egginger Weg");
        break;
    }
    case 89251:
    {
        returnValue = F("Eggioltstr.");
        break;
    }
    case 89252:
    {
        returnValue = F("Eggisried");
        break;
    }
    case 89253:
    {
        returnValue = F("Eggiweg");
        break;
    }
    case 89254:
    {
        returnValue = F("Eggl Brücke");
        break;
    }
    case 89255:
    {
        returnValue = F("Egglerpoint");
        break;
    }
    case 89256:
    {
        returnValue = F("Egglfinger Str.");
        break;
    }
    case 89257:
    {
        returnValue = F("Egglhamer Str.");
        break;
    }
    case 89258:
    {
        returnValue = F("Egglhausen");
        break;
    }
    case 89259:
    {
        returnValue = F("Egglhauser Str.");
        break;
    }
    case 89260:
    {
        returnValue = F("Egglsee");
        break;
    }
    case 89261:
    {
        returnValue = F("Eggmannsrieder Str.");
        break;
    }
    case 89262:
    {
        returnValue = F("Eggmannstr.");
        break;
    }
    case 89263:
    {
        returnValue = F("Eggmühle");
        break;
    }
    case 89264:
    {
        returnValue = F("Eggmühler Str.");
        break;
    }
    case 89265:
    {
        returnValue = F("Eggolsheimer Weg");
        break;
    }
    case 89266:
    {
        returnValue = F("Eggstedter Damm");
        break;
    }
    case 89267:
    {
        returnValue = F("Eggstedter Holz");
        break;
    }
    case 89268:
    {
        returnValue = F("Eggstr.");
        break;
    }
    case 89269:
    {
        returnValue = F("Eggstätter Str.");
        break;
    }
    case 89270:
    {
        returnValue = F("Eggweg");
        break;
    }
    case 89271:
    {
        returnValue = F("Egid-Harrer-Str.");
        break;
    }
    case 89272:
    {
        returnValue = F("Egidestr.");
        break;
    }
    case 89273:
    {
        returnValue = F("Egidienplatz");
        break;
    }
    case 89274:
    {
        returnValue = F("Egidienstr.");
        break;
    }
    case 89275:
    {
        returnValue = F("Egidius-Post-Weg");
        break;
    }
    case 89276:
    {
        returnValue = F("Egidius-Post-Weg (neu)");
        break;
    }
    case 89277:
    {
        returnValue = F("Egidiusweg");
        break;
    }
    case 89278:
    {
        returnValue = F("Egidiweg");
        break;
    }
    case 89279:
    {
        returnValue = F("Egidystr.");
        break;
    }
    case 89280:
    {
        returnValue = F("Egilbertstr.");
        break;
    }
    case 89281:
    {
        returnValue = F("Egilmarstr.");
        break;
    }
    case 89282:
    {
        returnValue = F("Egilolfstr.");
        break;
    }
    case 89283:
    {
        returnValue = F("Egilostr.");
        break;
    }
    case 89284:
    {
        returnValue = F("Egilstr.");
        break;
    }
    case 89285:
    {
        returnValue = F("Egilweg");
        break;
    }
    case 89286:
    {
        returnValue = F("Eging");
        break;
    }
    case 89287:
    {
        returnValue = F("Eginger Feld");
        break;
    }
    case 89288:
    {
        returnValue = F("Eginger Str.");
        break;
    }
    case 89289:
    {
        returnValue = F("Eginhardhöhe");
        break;
    }
    case 89290:
    {
        returnValue = F("Eginhardstr.");
        break;
    }
    case 89291:
    {
        returnValue = F("Eginoplatz");
        break;
    }
    case 89292:
    {
        returnValue = F("Eginostr.");
        break;
    }
    case 89293:
    {
        returnValue = F("Egkrog");
        break;
    }
    case 89294:
    {
        returnValue = F("Egkstr.");
        break;
    }
    case 89295:
    {
        returnValue = F("Egkweg");
        break;
    }
    case 89296:
    {
        returnValue = F("Egl");
        break;
    }
    case 89297:
    {
        returnValue = F("Eglack");
        break;
    }
    case 89298:
    {
        returnValue = F("Eglegatterweg");
        break;
    }
    case 89299:
    {
        returnValue = F("Eglerstr.");
        break;
    }
    case 89300:
    {
        returnValue = F("Eglfinger Weg");
        break;
    }
    case 89301:
    {
        returnValue = F("Eglham");
        break;
    }
    case 89302:
    {
        returnValue = F("Eglhart");
        break;
    }
    case 89303:
    {
        returnValue = F("Eglhartinger Str.");
        break;
    }
    case 89304:
    {
        returnValue = F("Eglhartinger Weg");
        break;
    }
    case 89305:
    {
        returnValue = F("Eglhof");
        break;
    }
    case 89306:
    {
        returnValue = F("Eglin Terrace");
        break;
    }
    case 89307:
    {
        returnValue = F("Eglinger Platz");
        break;
    }
    case 89308:
    {
        returnValue = F("Eglinger Str.");
        break;
    }
    case 89309:
    {
        returnValue = F("Eglisbrunnen");
        break;
    }
    case 89310:
    {
        returnValue = F("Eglishalde");
        break;
    }
    case 89311:
    {
        returnValue = F("Eglishaldenweg");
        break;
    }
    case 89312:
    {
        returnValue = F("Eglistal");
        break;
    }
    case 89313:
    {
        returnValue = F("Eglisweg");
        break;
    }
    case 89314:
    {
        returnValue = F("Egllackfeldweg");
        break;
    }
    case 89315:
    {
        returnValue = F("Eglofferweg");
        break;
    }
    case 89316:
    {
        returnValue = F("Egloffsteiner Ring");
        break;
    }
    case 89317:
    {
        returnValue = F("Egloffsteiner Str.");
        break;
    }
    case 89318:
    {
        returnValue = F("Egloffsteiner Weg");
        break;
    }
    case 89319:
    {
        returnValue = F("Egloffsteinstr.");
        break;
    }
    case 89320:
    {
        returnValue = F("Egloffswinder Str.");
        break;
    }
    case 89321:
    {
        returnValue = F("Eglofsdorfer Weg");
        break;
    }
    case 89322:
    {
        returnValue = F("Eglofser Str.");
        break;
    }
    case 89323:
    {
        returnValue = F("Eglofstal");
        break;
    }
    case 89324:
    {
        returnValue = F("Eglosheimer Str.");
        break;
    }
    case 89325:
    {
        returnValue = F("Eglsee");
        break;
    }
    case 89326:
    {
        returnValue = F("Eglseegasse");
        break;
    }
    case 89327:
    {
        returnValue = F("Eglseer Feldweg");
        break;
    }
    case 89328:
    {
        returnValue = F("Eglseer Moos");
        break;
    }
    case 89329:
    {
        returnValue = F("Eglseer Moosteilweg");
        break;
    }
    case 89330:
    {
        returnValue = F("Eglseer Str.");
        break;
    }
    case 89331:
    {
        returnValue = F("Eglseer Weg");
        break;
    }
    case 89332:
    {
        returnValue = F("Eglseerstr.");
        break;
    }
    case 89333:
    {
        returnValue = F("Eglseerweg");
        break;
    }
    case 89334:
    {
        returnValue = F("Eglseestr.");
        break;
    }
    case 89335:
    {
        returnValue = F("Eglseeweg");
        break;
    }
    case 89336:
    {
        returnValue = F("Eglshöfer Weg");
        break;
    }
    case 89337:
    {
        returnValue = F("Eglwanger Str.");
        break;
    }
    case 89338:
    {
        returnValue = F("Eglwies");
        break;
    }
    case 89339:
    {
        returnValue = F("Egmatinger Str.");
        break;
    }
    case 89340:
    {
        returnValue = F("Egmond-Park");
        break;
    }
    case 89341:
    {
        returnValue = F("Egmondstr.");
        break;
    }
    case 89342:
    {
        returnValue = F("Egmontstr.");
        break;
    }
    case 89343:
    {
        returnValue = F("Egmontweg");
        break;
    }
    case 89344:
    {
        returnValue = F("Egnermühlweg");
        break;
    }
    case 89345:
    {
        returnValue = F("Egon-Bahr-Str.");
        break;
    }
    case 89346:
    {
        returnValue = F("Egon-Dittmann-Str.");
        break;
    }
    case 89347:
    {
        returnValue = F("Egon-Eiermann-Allee");
        break;
    }
    case 89348:
    {
        returnValue = F("Egon-Erwin-Kisch Weg");
        break;
    }
    case 89349:
    {
        returnValue = F("Egon-Erwin-Kisch-Str.");
        break;
    }
    case 89350:
    {
        returnValue = F("Egon-Erwin-Kisch-Weg");
        break;
    }
    case 89351:
    {
        returnValue = F("Egon-Franke-Weg");
        break;
    }
    case 89352:
    {
        returnValue = F("Egon-Haufellner-Weg");
        break;
    }
    case 89353:
    {
        returnValue = F("Egon-Hugenschmidt-Platz");
        break;
    }
    case 89354:
    {
        returnValue = F("Egon-Höhmann-Str.");
        break;
    }
    case 89355:
    {
        returnValue = F("Egon-Klepsch-Weg");
        break;
    }
    case 89356:
    {
        returnValue = F("Egon-Langheinrich-Str.");
        break;
    }
    case 89357:
    {
        returnValue = F("Egon-Mehrings-Str.");
        break;
    }
    case 89358:
    {
        returnValue = F("Egon-Müller-Str.");
        break;
    }
    case 89359:
    {
        returnValue = F("Egon-Nickel-Str.");
        break;
    }
    case 89360:
    {
        returnValue = F("Egon-Ondrusch-Str.");
        break;
    }
    case 89361:
    {
        returnValue = F("Egon-Reinert-Str.");
        break;
    }
    case 89362:
    {
        returnValue = F("Egon-Rosenberg-Str.");
        break;
    }
    case 89363:
    {
        returnValue = F("Egon-Ruoff-Str.");
        break;
    }
    case 89364:
    {
        returnValue = F("Egon-Schmitt-Str.");
        break;
    }
    case 89365:
    {
        returnValue = F("Egon-Stutenkemper-Str.");
        break;
    }
    case 89366:
    {
        returnValue = F("Egon-Tschirch-Weg");
        break;
    }
    case 89367:
    {
        returnValue = F("Egon-v.-Poschinger-Str.");
        break;
    }
    case 89368:
    {
        returnValue = F("Egon-von-Romberg-Weg");
        break;
    }
    case 89369:
    {
        returnValue = F("Egonmühle");
        break;
    }
    case 89370:
    {
        returnValue = F("Egonstr.");
        break;
    }
    case 89371:
    {
        returnValue = F("Egringer Str.");
        break;
    }
    case 89372:
    {
        returnValue = F("Egsdorf");
        break;
    }
    case 89373:
    {
        returnValue = F("Egsdorfer Berg");
        break;
    }
    case 89374:
    {
        returnValue = F("Egsdorfer Horst");
        break;
    }
    case 89375:
    {
        returnValue = F("Egsdorfer Str.");
        break;
    }
    case 89376:
    {
        returnValue = F("Egstedter Str.");
        break;
    }
    case 89377:
    {
        returnValue = F("Egstedter Trift");
        break;
    }
    case 89378:
    {
        returnValue = F("Egtal");
        break;
    }
    case 89379:
    {
        returnValue = F("Egypten");
        break;
    }
    case 89380:
    {
        returnValue = F("Egyptenkoppel");
        break;
    }
    case 89381:
    {
        returnValue = F("Egörn");
        break;
    }
    case 89382:
    {
        returnValue = F("Ehaftstr.");
        break;
    }
    case 89383:
    {
        returnValue = F("Ehamostr.");
        break;
    }
    case 89384:
    {
        returnValue = F("Ehbachstr.");
        break;
    }
    case 89385:
    {
        returnValue = F("Ehbühl");
        break;
    }
    case 89386:
    {
        returnValue = F("Ehdorfstr.");
        break;
    }
    case 89387:
    {
        returnValue = F("Ehe");
        break;
    }
    case 89388:
    {
        returnValue = F("Ehebachstr.");
        break;
    }
    case 89389:
    {
        returnValue = F("Ehebachweg");
        break;
    }
    case 89390:
    {
        returnValue = F("Ehebrechergang");
        break;
    }
    case 89391:
    {
        returnValue = F("Ehegasse");
        break;
    }
    case 89392:
    {
        returnValue = F("Ehehaltstr.");
        break;
    }
    case 89393:
    {
        returnValue = F("Ehekirchener Str.");
        break;
    }
    case 89394:
    {
        returnValue = F("Ehekämpe");
        break;
    }
    case 89395:
    {
        returnValue = F("Ehem. Botanischer Garten / Aschenberg");
        break;
    }
    case 89396:
    {
        returnValue = F("Ehem. Chausseehaus");
        break;
    }
    case 89397:
    {
        returnValue = F("Ehem. Deponie Hympendahl");
        break;
    }
    case 89398:
    {
        returnValue = F("Ehem. Deponie Hühnerheide");
        break;
    }
    case 89399:
    {
        returnValue = F("Ehem. Gutspark");
        break;
    }
    case 89400:
    {
        returnValue = F("Ehem. Gutspark Gnewitz");
        break;
    }
    case 89401:
    {
        returnValue = F("Ehem. Hindernisbahn");
        break;
    }
    case 89402:
    {
        returnValue = F("Ehem. Kirchweg - Wasserversorgung Ostendorf");
        break;
    }
    case 89403:
    {
        returnValue = F("Ehem. Kleinbahn Steinhelle–Medebach");
        break;
    }
    case 89404:
    {
        returnValue = F("Ehem. Landstr. Fallersleben - Stellfelde - Tappenbeck (B248)");
        break;
    }
    case 89405:
    {
        returnValue = F("Ehem. Lessingstr.");
        break;
    }
    case 89406:
    {
        returnValue = F("Ehem. Obereichsfelder Kleinbahn Silberhausen - Hüpstedt");
        break;
    }
    case 89407:
    {
        returnValue = F("Ehem. Pechersche Kleinbahn");
        break;
    }
    case 89408:
    {
        returnValue = F("Ehem. Pfarrhof-Garten");
        break;
    }
    case 89409:
    {
        returnValue = F("Ehem. Röchlingpark");
        break;
    }
    case 89410:
    {
        returnValue = F("Ehemalige 20.000 Kilo Waage");
        break;
    }
    case 89411:
    {
        returnValue = F("Ehemalige Bahnstrecke Husum–Erfde–Rendsburg");
        break;
    }
    case 89412:
    {
        returnValue = F("Ehemalige Futterrinne Bullenmastanlage");
        break;
    }
    case 89413:
    {
        returnValue = F("Ehemalige Hülbe");
        break;
    }
    case 89414:
    {
        returnValue = F("Ehemalige L 1103");
        break;
    }
    case 89415:
    {
        returnValue = F("Ehemalige Rodelbahn");
        break;
    }
    case 89416:
    {
        returnValue = F("Ehemalige Schmalspurbahn Thum-Schönfeld/Wiesa");
        break;
    }
    case 89417:
    {
        returnValue = F("Ehemalige WÜ33");
        break;
    }
    case 89418:
    {
        returnValue = F("Ehemalige Zeche Königsborn Schachtanlage 3/4");
        break;
    }
    case 89419:
    {
        returnValue = F("Ehemaliger Botanischer Garten");
        break;
    }
    case 89420:
    {
        returnValue = F("Ehemaliger Brauereisee");
        break;
    }
    case 89421:
    {
        returnValue = F("Ehemaliger Feuerwehrteich");
        break;
    }
    case 89422:
    {
        returnValue = F("Ehemaliger Friedhof");
        break;
    }
    case 89423:
    {
        returnValue = F("Ehemaliger Friedhof der Stadt Herborn");
        break;
    }
    case 89424:
    {
        returnValue = F("Ehemaliger Kalksteinbruch");
        break;
    }
    case 89425:
    {
        returnValue = F("Ehemaliger Kath. Friedhof Milspe");
        break;
    }
    case 89426:
    {
        returnValue = F("Ehemaliger Park Waldkirchen");
        break;
    }
    case 89427:
    {
        returnValue = F("Ehemaliger Pfarrgarten");
        break;
    }
    case 89428:
    {
        returnValue = F("Ehemaliger Reitplatz");
        break;
    }
    case 89429:
    {
        returnValue = F("Ehemaliger Spielplatz");
        break;
    }
    case 89430:
    {
        returnValue = F("Ehemaliger Vicinalweg");
        break;
    }
    case 89431:
    {
        returnValue = F("Ehemaliger Weg nach Preensberg");
        break;
    }
    case 89432:
    {
        returnValue = F("Ehemaliges Freibad Bad Wurzach");
        break;
    }
    case 89433:
    {
        returnValue = F("Ehemaliges Kloster Obermarchtal");
        break;
    }
    case 89434:
    {
        returnValue = F("Ehemaliges Zementwerk");
        break;
    }
    case 89435:
    {
        returnValue = F("Ehemannshof");
        break;
    }
    case 89436:
    {
        returnValue = F("Ehemannstr.");
        break;
    }
    case 89437:
    {
        returnValue = F("Ehenbachstr.");
        break;
    }
    case 89438:
    {
        returnValue = F("Ehenfeld");
        break;
    }
    case 89439:
    {
        returnValue = F("Ehenfelder Str.");
        break;
    }
    case 89440:
    {
        returnValue = F("Eherne Schlange");
        break;
    }
    case 89441:
    {
        returnValue = F("Ehestetter Str.");
        break;
    }
    case 89442:
    {
        returnValue = F("Ehestetter Weg");
        break;
    }
    case 89443:
    {
        returnValue = F("Ehestorfer Dorfstr.");
        break;
    }
    case 89444:
    {
        returnValue = F("Ehestorfer Str.");
        break;
    }
    case 89445:
    {
        returnValue = F("Eheweg");
        break;
    }
    case 89446:
    {
        returnValue = F("Ehewiesenstr.");
        break;
    }
    case 89447:
    {
        returnValue = F("Ehgart");
        break;
    }
    case 89448:
    {
        returnValue = F("Ehgartenstr.");
        break;
    }
    case 89449:
    {
        returnValue = F("Ehgasse");
        break;
    }
    case 89450:
    {
        returnValue = F("Ehgärtlstr.");
        break;
    }
    case 89451:
    {
        returnValue = F("Ehingenstr.");
        break;
    }
    case 89452:
    {
        returnValue = F("Ehinger");
        break;
    }
    case 89453:
    {
        returnValue = F("Ehinger Anlagen");
        break;
    }
    case 89454:
    {
        returnValue = F("Ehinger Berg");
        break;
    }
    case 89455:
    {
        returnValue = F("Ehinger Gasse");
        break;
    }
    case 89456:
    {
        returnValue = F("Ehinger Platz");
        break;
    }
    case 89457:
    {
        returnValue = F("Ehinger Steig");
        break;
    }
    case 89458:
    {
        returnValue = F("Ehinger Steige");
        break;
    }
    case 89459:
    {
        returnValue = F("Ehinger Str.");
        break;
    }
    case 89460:
    {
        returnValue = F("Ehinger Weg");
        break;
    }
    case 89461:
    {
        returnValue = F("Ehinger-Ebene-Weg");
        break;
    }
    case 89462:
    {
        returnValue = F("Ehinger-Tor-Platz");
        break;
    }
    case 89463:
    {
        returnValue = F("Ehinger-Tor-Str.");
        break;
    }
    case 89464:
    {
        returnValue = F("Ehingerstr.");
        break;
    }
    case 89465:
    {
        returnValue = F("Ehingerweg");
        break;
    }
    case 89466:
    {
        returnValue = F("Ehkamp");
        break;
    }
    case 89467:
    {
        returnValue = F("Ehlaweg");
        break;
    }
    case 89468:
    {
        returnValue = F("Ehlbecker Weg");
        break;
    }
    case 89469:
    {
        returnValue = F("Ehlbeek");
        break;
    }
    case 89470:
    {
        returnValue = F("Ehledeich");
        break;
    }
    case 89471:
    {
        returnValue = F("Ehlefurt");
        break;
    }
    case 89472:
    {
        returnValue = F("Ehlegrund");
        break;
    }
    case 89473:
    {
        returnValue = F("Ehlenbeck");
        break;
    }
    case 89474:
    {
        returnValue = F("Ehlenbrucher Str.");
        break;
    }
    case 89475:
    {
        returnValue = F("Ehlener Str.");
        break;
    }
    case 89476:
    {
        returnValue = F("Ehlenmaar");
        break;
    }
    case 89477:
    {
        returnValue = F("Ehlenpfuhl");
        break;
    }
    case 89478:
    {
        returnValue = F("Ehlenstr.");
        break;
    }
    case 89479:
    {
        returnValue = F("Ehlentruper Weg");
        break;
    }
    case 89480:
    {
        returnValue = F("Ehlenweg");
        break;
    }
    case 89481:
    {
        returnValue = F("Ehlenzer Str.");
        break;
    }
    case 89482:
    {
        returnValue = F("Ehler Kamp");
        break;
    }
    case 89483:
    {
        returnValue = F("Ehler Str.");
        break;
    }
    case 89484:
    {
        returnValue = F("Ehler-Cuno-Weg");
        break;
    }
    case 89485:
    {
        returnValue = F("Ehlerbergstr.");
        break;
    }
    case 89486:
    {
        returnValue = F("Ehlersberg");
        break;
    }
    case 89487:
    {
        returnValue = F("Ehlersdamm");
        break;
    }
    case 89488:
    {
        returnValue = F("Ehlersdorfer Ring");
        break;
    }
    case 89489:
    {
        returnValue = F("Ehlersdorfer Weg");
        break;
    }
    case 89490:
    {
        returnValue = F("Ehlershausen");
        break;
    }
    case 89491:
    {
        returnValue = F("Ehlershausener Weg");
        break;
    }
    case 89492:
    {
        returnValue = F("Ehlershäuser Weg");
        break;
    }
    case 89493:
    {
        returnValue = F("Ehlerskamp");
        break;
    }
    case 89494:
    {
        returnValue = F("Ehlerskoppel");
        break;
    }
    case 89495:
    {
        returnValue = F("Ehlersrode");
        break;
    }
    case 89496:
    {
        returnValue = F("Ehlersstr.");
        break;
    }
    case 89497:
    {
        returnValue = F("Ehlerstorfer Weg");
        break;
    }
    case 89498:
    {
        returnValue = F("Ehlerstr.");
        break;
    }
    case 89499:
    {
        returnValue = F("Ehlersweg");
        break;
    }
    case 89500:
    {
        returnValue = F("Ehlert");
        break;
    }
    case 89501:
    {
        returnValue = F("Ehlertredder");
        break;
    }
    case 89502:
    {
        returnValue = F("Ehlertstr.");
        break;
    }
    case 89503:
    {
        returnValue = F("Ehlestr.");
        break;
    }
    case 89504:
    {
        returnValue = F("Ehleweg");
        break;
    }
    case 89505:
    {
        returnValue = F("Ehlhaltener Str.");
        break;
    }
    case 89506:
    {
        returnValue = F("Ehlhaltentrail");
        break;
    }
    case 89507:
    {
        returnValue = F("Ehlheimer Str.");
        break;
    }
    case 89508:
    {
        returnValue = F("Ehlinger Str.");
        break;
    }
    case 89509:
    {
        returnValue = F("Ehlinger Weg");
        break;
    }
    case 89510:
    {
        returnValue = F("Ehlingshäuser Str.");
        break;
    }
    case 89511:
    {
        returnValue = F("Ehlingstr.");
        break;
    }
    case 89512:
    {
        returnValue = F("Ehlscheider Pfad");
        break;
    }
    case 89513:
    {
        returnValue = F("Ehlsiefen");
        break;
    }
    case 89514:
    {
        returnValue = F("Ehlvershof");
        break;
    }
    case 89515:
    {
        returnValue = F("Ehlwiesenfeld");
        break;
    }
    case 89516:
    {
        returnValue = F("Ehm Welk-Str.");
        break;
    }
    case 89517:
    {
        returnValue = F("Ehm-Schipper-Weg");
        break;
    }
    case 89518:
    {
        returnValue = F("Ehm-Welk-Anger");
        break;
    }
    case 89519:
    {
        returnValue = F("Ehm-Welk-Platz");
        break;
    }
    case 89520:
    {
        returnValue = F("Ehm-Welk-Str.");
        break;
    }
    case 89521:
    {
        returnValue = F("Ehm-Welk-Weg");
        break;
    }
    case 89522:
    {
        returnValue = F("Ehmannstr.");
        break;
    }
    case 89523:
    {
        returnValue = F("Ehmckstr.");
        break;
    }
    case 89524:
    {
        returnValue = F("Ehmener Str.");
        break;
    }
    case 89525:
    {
        returnValue = F("Ehmer Str.");
        break;
    }
    case 89526:
    {
        returnValue = F("Ehmeräcker");
        break;
    }
    case 89527:
    {
        returnValue = F("Ehming-Bülten");
        break;
    }
    case 89528:
    {
        returnValue = F("Ehmkenberg");
        break;
    }
    case 89529:
    {
        returnValue = F("Ehmkendorf");
        break;
    }
    case 89530:
    {
        returnValue = F("Ehmkeweg");
        break;
    }
    case 89531:
    {
        returnValue = F("Ehmkhorstschneise");
        break;
    }
    case 89532:
    {
        returnValue = F("Ehmschen");
        break;
    }
    case 89533:
    {
        returnValue = F("Ehmschenkamp");
        break;
    }
    case 89534:
    {
        returnValue = F("Ehmsenhof");
        break;
    }
    case 89535:
    {
        returnValue = F("Ehmsenstr.");
        break;
    }
    case 89536:
    {
        returnValue = F("Ehnboomtwiete");
        break;
    }
    case 89537:
    {
        returnValue = F("Ehndorfer Moor");
        break;
    }
    case 89538:
    {
        returnValue = F("Ehndorfer Str.");
        break;
    }
    case 89539:
    {
        returnValue = F("Ehner-Fahrnau");
        break;
    }
    case 89540:
    {
        returnValue = F("Ehnernstr.");
        break;
    }
    case 89541:
    {
        returnValue = F("Ehnesbach");
        break;
    }
    case 89542:
    {
        returnValue = F("Ehneser Berg");
        break;
    }
    case 89543:
    {
        returnValue = F("Ehneser Str.");
        break;
    }
    case 89544:
    {
        returnValue = F("Ehneser Weg");
        break;
    }
    case 89545:
    {
        returnValue = F("Ehninger Str.");
        break;
    }
    case 89546:
    {
        returnValue = F("Ehninger Weg");
        break;
    }
    case 89547:
    {
        returnValue = F("Ehnisbach");
        break;
    }
    case 89548:
    {
        returnValue = F("Ehnisgasse");
        break;
    }
    case 89549:
    {
        returnValue = F("Ehniweg");
        break;
    }
    case 89550:
    {
        returnValue = F("Ehnkenweg");
        break;
    }
    case 89551:
    {
        returnValue = F("Ehnriedstr.");
        break;
    }
    case 89552:
    {
        returnValue = F("Ehnweg");
        break;
    }
    case 89553:
    {
        returnValue = F("Ehraer Weg");
        break;
    }
    case 89554:
    {
        returnValue = F("Ehranger Pfad");
        break;
    }
    case 89555:
    {
        returnValue = F("Ehranger Str.");
        break;
    }
    case 89556:
    {
        returnValue = F("Ehrbachtal");
        break;
    }
    case 89557:
    {
        returnValue = F("Ehrbrunnen");
        break;
    }
    case 89558:
    {
        returnValue = F("Ehrbuschweg");
        break;
    }
    case 89559:
    {
        returnValue = F("Ehrdobelweg");
        break;
    }
    case 89560:
    {
        returnValue = F("Ehren");
        break;
    }
    case 89561:
    {
        returnValue = F("Ehrenaue");
        break;
    }
    case 89562:
    {
        returnValue = F("Ehrenbach");
        break;
    }
    case 89563:
    {
        returnValue = F("Ehrenbacher Str.");
        break;
    }
    case 89564:
    {
        returnValue = F("Ehrenbacher Weg");
        break;
    }
    case 89565:
    {
        returnValue = F("Ehrenbachstr.");
        break;
    }
    case 89566:
    {
        returnValue = F("Ehrenbachweg");
        break;
    }
    case 89567:
    {
        returnValue = F("Ehrenberg");
        break;
    }
    case 89568:
    {
        returnValue = F("Ehrenberger Str.");
        break;
    }
    case 89569:
    {
        returnValue = F("Ehrenbergerstr.");
        break;
    }
    case 89570:
    {
        returnValue = F("Ehrenberggasse");
        break;
    }
    case 89571:
    {
        returnValue = F("Ehrenbergplatz");
        break;
    }
    case 89572:
    {
        returnValue = F("Ehrenbergstr.");
        break;
    }
    case 89573:
    {
        returnValue = F("Ehrenbergweg");
        break;
    }
    case 89574:
    {
        returnValue = F("Ehrenbrechtstr.");
        break;
    }
    case 89575:
    {
        returnValue = F("Ehrenbreitsteinstr.");
        break;
    }
    case 89576:
    {
        returnValue = F("Ehrenbruch");
        break;
    }
    case 89577:
    {
        returnValue = F("Ehrenburg Hauptweg");
        break;
    }
    case 89578:
    {
        returnValue = F("Ehrenburg Rundweg");
        break;
    }
    case 89579:
    {
        returnValue = F("Ehrenburger Str.");
        break;
    }
    case 89580:
    {
        returnValue = F("Ehrenburger Tal");
        break;
    }
    case 89581:
    {
        returnValue = F("Ehrenburgertal");
        break;
    }
    case 89582:
    {
        returnValue = F("Ehrenburgsteigweg");
        break;
    }
    case 89583:
    {
        returnValue = F("Ehrenburgstr.");
        break;
    }
    case 89584:
    {
        returnValue = F("Ehrenburgweg");
        break;
    }
    case 89585:
    {
        returnValue = F("Ehrenbürgerstr.");
        break;
    }
    case 89586:
    {
        returnValue = F("Ehrenbürgstr.");
        break;
    }
    case 89587:
    {
        returnValue = F("Ehrenbürgweg");
        break;
    }
    case 89588:
    {
        returnValue = F("Ehrendehlhelmder");
        break;
    }
    case 89589:
    {
        returnValue = F("Ehrendorfer Mark");
        break;
    }
    case 89590:
    {
        returnValue = F("Ehrendorfer Str.");
        break;
    }
    case 89591:
    {
        returnValue = F("Ehrener Dorfstr.");
        break;
    }
    case 89592:
    {
        returnValue = F("Ehrener Kirchweg");
        break;
    }
    case 89593:
    {
        returnValue = F("Ehrener Mühle");
        break;
    }
    case 89594:
    {
        returnValue = F("Ehrener Mühlenweg");
        break;
    }
    case 89595:
    {
        returnValue = F("Ehrener Schulweg");
        break;
    }
    case 89596:
    {
        returnValue = F("Ehrener Str.");
        break;
    }
    case 89597:
    {
        returnValue = F("Ehrenfeld");
        break;
    }
    case 89598:
    {
        returnValue = F("Ehrenfeldgürtel");
        break;
    }
    case 89599:
    {
        returnValue = F("Ehrenfeldstr.");
        break;
    }
    case 89600:
    {
        returnValue = F("Ehrenfelser Weg");
        break;
    }
    case 89601:
    {
        returnValue = F("Ehrenfelsstr.");
        break;
    }
    case 89602:
    {
        returnValue = F("Ehrenfelstr.");
        break;
    }
    case 89603:
    {
        returnValue = F("Ehrenfried-Arns-Weg");
        break;
    }
    case 89604:
    {
        returnValue = F("Ehrenfried-Jopp-Str.");
        break;
    }
    case 89605:
    {
        returnValue = F("Ehrenfried-Kumpf-Str.");
        break;
    }
    case 89606:
    {
        returnValue = F("Ehrenfried-von-Hünefeld-Weg");
        break;
    }
    case 89607:
    {
        returnValue = F("Ehrenfriedersdorfer Str.");
        break;
    }
    case 89608:
    {
        returnValue = F("Ehrenfriedhof");
        break;
    }
    case 89609:
    {
        returnValue = F("Ehrenfriedhof Friemersheim");
        break;
    }
    case 89610:
    {
        returnValue = F("Ehrenfriedhofsweg");
        break;
    }
    case 89611:
    {
        returnValue = F("Ehrenfriedplatz");
        break;
    }
    case 89612:
    {
        returnValue = F("Ehrenfriedstr.");
        break;
    }
    case 89613:
    {
        returnValue = F("Ehrengard-Schramm-Weg");
        break;
    }
    case 89614:
    {
        returnValue = F("Ehrengarde-Plätzchen");
        break;
    }
    case 89615:
    {
        returnValue = F("Ehrengartstr.");
        break;
    }
    case 89616:
    {
        returnValue = F("Ehrengrundblick");
        break;
    }
    case 89617:
    {
        returnValue = F("Ehrengrundstr.");
        break;
    }
    case 89618:
    {
        returnValue = F("Ehrenhain");
        break;
    }
    case 89619:
    {
        returnValue = F("Ehrenhain Diedenshausen");
        break;
    }
    case 89620:
    {
        returnValue = F("Ehrenhain Rudi Arnstadt");
        break;
    }
    case 89621:
    {
        returnValue = F("Ehrenhain Zeithain");
        break;
    }
    case 89622:
    {
        returnValue = F("Ehrenhain der Sozialisten");
        break;
    }
    case 89623:
    {
        returnValue = F("Ehrenhainer Str.");
        break;
    }
    case 89624:
    {
        returnValue = F("Ehrenhainstr.");
        break;
    }
    case 89625:
    {
        returnValue = F("Ehrenhalde");
        break;
    }
    case 89626:
    {
        returnValue = F("Ehrenhausener Str.");
        break;
    }
    case 89627:
    {
        returnValue = F("Ehrenhausweg");
        break;
    }
    case 89628:
    {
        returnValue = F("Ehrenhof");
        break;
    }
    case 89629:
    {
        returnValue = F("Ehrenkamp");
        break;
    }
    case 89630:
    {
        returnValue = F("Ehrenkirchener Str.");
        break;
    }
    case 89631:
    {
        returnValue = F("Ehrenmal");
        break;
    }
    case 89632:
    {
        returnValue = F("Ehrenmal Bramsche");
        break;
    }
    case 89633:
    {
        returnValue = F("Ehrenmal Gevelsberg");
        break;
    }
    case 89634:
    {
        returnValue = F("Ehrenmal Herzhausen");
        break;
    }
    case 89635:
    {
        returnValue = F("Ehrenmal Obersdorf");
        break;
    }
    case 89636:
    {
        returnValue = F("Ehrenmal Parkstr.");
        break;
    }
    case 89637:
    {
        returnValue = F("Ehrenmal am Gerbereiplatz");
        break;
    }
    case 89638:
    {
        returnValue = F("Ehrenmalstr.");
        break;
    }
    case 89639:
    {
        returnValue = F("Ehrenmalsweg");
        break;
    }
    case 89640:
    {
        returnValue = F("Ehrenmalweg");
        break;
    }
    case 89641:
    {
        returnValue = F("Ehrenpfortenbergstr.");
        break;
    }
    case 89642:
    {
        returnValue = F("Ehrenplatz");
        break;
    }
    case 89643:
    {
        returnValue = F("Ehrenpreisstr.");
        break;
    }
    case 89644:
    {
        returnValue = F("Ehrenpreisweg");
        break;
    }
    case 89645:
    {
        returnValue = F("Ehrenreith");
        break;
    }
    case 89646:
    {
        returnValue = F("Ehrensberger Str.");
        break;
    }
    case 89647:
    {
        returnValue = F("Ehrensberger Weg");
        break;
    }
    case 89648:
    {
        returnValue = F("Ehrensbergerstr.");
        break;
    }
    case 89649:
    {
        returnValue = F("Ehrenscheider Mühle");
        break;
    }
    case 89650:
    {
        returnValue = F("Ehrenschopfstr.");
        break;
    }
    case 89651:
    {
        returnValue = F("Ehrenspächweg");
        break;
    }
    case 89652:
    {
        returnValue = F("Ehrensteig");
        break;
    }
    case 89653:
    {
        returnValue = F("Ehrenstein");
        break;
    }
    case 89654:
    {
        returnValue = F("Ehrensteiner Feld");
        break;
    }
    case 89655:
    {
        returnValue = F("Ehrensteiner Str.");
        break;
    }
    case 89656:
    {
        returnValue = F("Ehrensteiner Weg");
        break;
    }
    case 89657:
    {
        returnValue = F("Ehrensteinstr.");
        break;
    }
    case 89658:
    {
        returnValue = F("Ehrenstetter Grundweg");
        break;
    }
    case 89659:
    {
        returnValue = F("Ehrenstetter Maistollenweg");
        break;
    }
    case 89660:
    {
        returnValue = F("Ehrenstr.");
        break;
    }
    case 89661:
    {
        returnValue = F("Ehrental");
        break;
    }
    case 89662:
    {
        returnValue = F("Ehrentalsmühler Str.");
        break;
    }
    case 89663:
    {
        returnValue = F("Ehrentalstr.");
        break;
    }
    case 89664:
    {
        returnValue = F("Ehrentalweg");
        break;
    }
    case 89665:
    {
        returnValue = F("Ehrentrautstr.");
        break;
    }
    case 89666:
    {
        returnValue = F("Ehrentruper Str.");
        break;
    }
    case 89667:
    {
        returnValue = F("Ehrenwald");
        break;
    }
    case 89668:
    {
        returnValue = F("Ehrenwiesen");
        break;
    }
    case 89669:
    {
        returnValue = F("Ehrenzeller Str.");
        break;
    }
    case 89670:
    {
        returnValue = F("Ehrenzug");
        break;
    }
    case 89671:
    {
        returnValue = F("Ehrer Str.");
        break;
    }
    case 89672:
    {
        returnValue = F("Ehrer Weg");
        break;
    }
    case 89673:
    {
        returnValue = F("Ehrerheider Str.");
        break;
    }
    case 89674:
    {
        returnValue = F("Ehrerheider Str. 7a");
        break;
    }
    case 89675:
    {
        returnValue = F("Ehresfeldweg");
        break;
    }
    case 89676:
    {
        returnValue = F("Ehreshoven");
        break;
    }
    case 89677:
    {
        returnValue = F("Ehreshover Str.");
        break;
    }
    case 89678:
    {
        returnValue = F("Ehretstr.");
        break;
    }
    case 89679:
    {
        returnValue = F("Ehretswiesenweg");
        break;
    }
    case 89680:
    {
        returnValue = F("Ehrfelder Weg");
        break;
    }
    case 89681:
    {
        returnValue = F("Ehrfeldstr.");
        break;
    }
    case 89682:
    {
        returnValue = F("Ehrgartenweg");
        break;
    }
    case 89683:
    {
        returnValue = F("Ehrhard-Kirchner-Str.");
        break;
    }
    case 89684:
    {
        returnValue = F("Ehrhardshof");
        break;
    }
    case 89685:
    {
        returnValue = F("Ehrhardstr.");
        break;
    }
    case 89686:
    {
        returnValue = F("Ehrhardtssteig");
        break;
    }
    case 89687:
    {
        returnValue = F("Ehrhardtstr.");
        break;
    }
    case 89688:
    {
        returnValue = F("Ehrhartstr.");
        break;
    }
    case 89689:
    {
        returnValue = F("Ehrholzweg");
        break;
    }
    case 89690:
    {
        returnValue = F("Ehrhorn");
        break;
    }
    case 89691:
    {
        returnValue = F("Ehrhorner Heuweg");
        break;
    }
    case 89692:
    {
        returnValue = F("Ehrhorner Str.");
        break;
    }
    case 89693:
    {
        returnValue = F("Ehrhornsgrund");
        break;
    }
    case 89694:
    {
        returnValue = F("Ehrhornsstieg");
        break;
    }
    case 89695:
    {
        returnValue = F("Ehrhornsweg");
        break;
    }
    case 89696:
    {
        returnValue = F("Ehrichstr.");
        break;
    }
    case 89697:
    {
        returnValue = F("Ehrigerstr.");
        break;
    }
    case 89698:
    {
        returnValue = F("Ehringer Au");
        break;
    }
    case 89699:
    {
        returnValue = F("Ehringer Innstr.");
        break;
    }
    case 89700:
    {
        returnValue = F("Ehringer Str.");
        break;
    }
    case 89701:
    {
        returnValue = F("Ehringer Weg");
        break;
    }
    case 89702:
    {
        returnValue = F("Ehringhausen");
        break;
    }
    case 89703:
    {
        returnValue = F("Ehringhauser Höhe");
        break;
    }
    case 89704:
    {
        returnValue = F("Ehringhauser Str.");
        break;
    }
    case 89705:
    {
        returnValue = F("Ehringhauser Weg");
        break;
    }
    case 89706:
    {
        returnValue = F("Ehringsdorfer Weg");
        break;
    }
    case 89707:
    {
        returnValue = F("Ehringsfeld");
        break;
    }
    case 89708:
    {
        returnValue = F("Ehringshäuser Str.");
        break;
    }
    case 89709:
    {
        returnValue = F("Ehringshäuser Weg");
        break;
    }
    case 89710:
    {
        returnValue = F("Ehrl");
        break;
    }
    case 89711:
    {
        returnValue = F("Ehrlandstr.");
        break;
    }
    case 89712:
    {
        returnValue = F("Ehrlerstr.");
        break;
    }
    case 89713:
    {
        returnValue = F("Ehrlestr.");
        break;
    }
    case 89714:
    {
        returnValue = F("Ehrlesäckerweg");
        break;
    }
    case 89715:
    {
        returnValue = F("Ehrleweg");
        break;
    }
    case 89716:
    {
        returnValue = F("Ehrlicherstr.");
        break;
    }
    case 89717:
    {
        returnValue = F("Ehrlichstr.");
        break;
    }
    case 89718:
    {
        returnValue = F("Ehrlichsweg");
        break;
    }
    case 89719:
    {
        returnValue = F("Ehrlichweg");
        break;
    }
    case 89720:
    {
        returnValue = F("Ehrligasse");
        break;
    }
    case 89721:
    {
        returnValue = F("Ehrlosweg");
        break;
    }
    case 89722:
    {
        returnValue = F("Ehrmannstr.");
        break;
    }
    case 89723:
    {
        returnValue = F("Ehrsamer Weg");
        break;
    }
    case 89724:
    {
        returnValue = F("Ehrsberger Str.");
        break;
    }
    case 89725:
    {
        returnValue = F("Ehrstener Weg");
        break;
    }
    case 89726:
    {
        returnValue = F("Ehrster Weg");
        break;
    }
    case 89727:
    {
        returnValue = F("Ehrstädter Str.");
        break;
    }
    case 89728:
    {
        returnValue = F("Ehrwalder Str.");
        break;
    }
    case 89729:
    {
        returnValue = F("Ehrwangweg");
        break;
    }
    case 89730:
    {
        returnValue = F("Ehwaldhüttenweg");
        break;
    }
    case 89731:
    {
        returnValue = F("Ehwaldweg");
        break;
    }
    case 89732:
    {
        returnValue = F("Ehweiler Str.");
        break;
    }
    case 89733:
    {
        returnValue = F("Ehwiesmühlstr.");
        break;
    }
    case 89734:
    {
        returnValue = F("Ehwinkel");
        break;
    }
    case 89735:
    {
        returnValue = F("Eibach");
        break;
    }
    case 89736:
    {
        returnValue = F("Eibacher Hammer");
        break;
    }
    case 89737:
    {
        returnValue = F("Eibacher Hauptstr.");
        break;
    }
    case 89738:
    {
        returnValue = F("Eibacher Schulstr.");
        break;
    }
    case 89739:
    {
        returnValue = F("Eibacher Weg");
        break;
    }
    case 89740:
    {
        returnValue = F("Eibachstr.");
        break;
    }
    case 89741:
    {
        returnValue = F("Eibauer Str.");
        break;
    }
    case 89742:
    {
        returnValue = F("Eibauer Weg");
        break;
    }
    case 89743:
    {
        returnValue = F("Eibbachweg");
        break;
    }
    case 89744:
    {
        returnValue = F("Eibelstadter Weg");
        break;
    }
    case 89745:
    {
        returnValue = F("Eibelstädter Kapellenberg");
        break;
    }
    case 89746:
    {
        returnValue = F("Eibelstädter Weg");
        break;
    }
    case 89747:
    {
        returnValue = F("Eiben Helmer");
        break;
    }
    case 89748:
    {
        returnValue = F("Eibenberg");
        break;
    }
    case 89749:
    {
        returnValue = F("Eibenberger Allee");
        break;
    }
    case 89750:
    {
        returnValue = F("Eibenberger Str.");
        break;
    }
    case 89751:
    {
        returnValue = F("Eibendonk");
        break;
    }
    case 89752:
    {
        returnValue = F("Eibengasse");
        break;
    }
    case 89753:
    {
        returnValue = F("Eibengrund");
        break;
    }
    case 89754:
    {
        returnValue = F("Eibenhain");
        break;
    }
    case 89755:
    {
        returnValue = F("Eibenhang");
        break;
    }
    case 89756:
    {
        returnValue = F("Eibenhausener Weg");
        break;
    }
    case 89757:
    {
        returnValue = F("Eibenhof");
        break;
    }
    case 89758:
    {
        returnValue = F("Eibenhofweg");
        break;
    }
    case 89759:
    {
        returnValue = F("Eibenkamp");
        break;
    }
    case 89760:
    {
        returnValue = F("Eibenkopfstr.");
        break;
    }
    case 89761:
    {
        returnValue = F("Eibenring");
        break;
    }
    case 89762:
    {
        returnValue = F("Eibensbacher Str.");
        break;
    }
    case 89763:
    {
        returnValue = F("Eibensteinstr.");
        break;
    }
    case 89764:
    {
        returnValue = F("Eibenstocker Grenzflügel");
        break;
    }
    case 89765:
    {
        returnValue = F("Eibenstocker Str.");
        break;
    }
    case 89766:
    {
        returnValue = F("Eibenstocker Weg");
        break;
    }
    case 89767:
    {
        returnValue = F("Eibenstr.");
        break;
    }
    case 89768:
    {
        returnValue = F("Eibenwald");
        break;
    }
    case 89769:
    {
        returnValue = F("Eibenweg");
        break;
    }
    case 89770:
    {
        returnValue = F("Eibenweg 1-7");
        break;
    }
    case 89771:
    {
        returnValue = F("Eibenweg 2-8");
        break;
    }
    case 89772:
    {
        returnValue = F("Eiberbachbrücke");
        break;
    }
    case 89773:
    {
        returnValue = F("Eiberg");
        break;
    }
    case 89774:
    {
        returnValue = F("Eibergener Str.");
        break;
    }
    case 89775:
    {
        returnValue = F("Eiberger Kirchenweg");
        break;
    }
    case 89776:
    {
        returnValue = F("Eiberger Str.");
        break;
    }
    case 89777:
    {
        returnValue = F("Eibergstr.");
        break;
    }
    case 89778:
    {
        returnValue = F("Eibergweg");
        break;
    }
    case 89779:
    {
        returnValue = F("Eibersbachweg");
        break;
    }
    case 89780:
    {
        returnValue = F("Eibersbergstr.");
        break;
    }
    case 89781:
    {
        returnValue = F("Eibertwete");
        break;
    }
    case 89782:
    {
        returnValue = F("Eibeschstr.");
        break;
    }
    case 89783:
    {
        returnValue = F("Eibestr.");
        break;
    }
    case 89784:
    {
        returnValue = F("Eibig");
        break;
    }
    case 89785:
    {
        returnValue = F("Eibigstr.");
        break;
    }
    case 89786:
    {
        returnValue = F("Eibigter Weg");
        break;
    }
    case 89787:
    {
        returnValue = F("Eibinger Oberstr.");
        break;
    }
    case 89788:
    {
        returnValue = F("Eibinger Str.");
        break;
    }
    case 89789:
    {
        returnValue = F("Eibinger Weg");
        break;
    }
    case 89790:
    {
        returnValue = F("Eibischring");
        break;
    }
    case 89791:
    {
        returnValue = F("Eibischstr.");
        break;
    }
    case 89792:
    {
        returnValue = F("Eibischweg");
        break;
    }
    case 89793:
    {
        returnValue = F("Eibiswiesenstr.");
        break;
    }
    case 89794:
    {
        returnValue = F("Eiblweg");
        break;
    }
    case 89795:
    {
        returnValue = F("Eibrunn - Ebenwies");
        break;
    }
    case 89796:
    {
        returnValue = F("Eibsee Rundwanderweg");
        break;
    }
    case 89797:
    {
        returnValue = F("Eibseestr.");
        break;
    }
    case 89798:
    {
        returnValue = F("Eibseeweg");
        break;
    }
    case 89799:
    {
        returnValue = F("Eibweg");
        break;
    }
    case 89800:
    {
        returnValue = F("Eich");
        break;
    }
    case 89801:
    {
        returnValue = F("Eicha");
        break;
    }
    case 89802:
    {
        returnValue = F("Eichacher Str.");
        break;
    }
    case 89803:
    {
        returnValue = F("Eichachstr.");
        break;
    }
    case 89804:
    {
        returnValue = F("Eichachweg");
        break;
    }
    case 89805:
    {
        returnValue = F("Eichacker");
        break;
    }
    case 89806:
    {
        returnValue = F("Eichackerstr.");
        break;
    }
    case 89807:
    {
        returnValue = F("Eichackerweg");
        break;
    }
    case 89808:
    {
        returnValue = F("Eichaer Str.");
        break;
    }
    case 89809:
    {
        returnValue = F("Eichaer Weg");
        break;
    }
    case 89810:
    {
        returnValue = F("Eichamtstr.");
        break;
    }
    case 89811:
    {
        returnValue = F("Eichanger");
        break;
    }
    case 89812:
    {
        returnValue = F("Eichangerstr.");
        break;
    }
    case 89813:
    {
        returnValue = F("Eichardt");
        break;
    }
    case 89814:
    {
        returnValue = F("Eichastr.");
        break;
    }
    case 89815:
    {
        returnValue = F("Eichat");
        break;
    }
    case 89816:
    {
        returnValue = F("Eichbach");
        break;
    }
    case 89817:
    {
        returnValue = F("Eichbach-Dorotheenhof");
        break;
    }
    case 89818:
    {
        returnValue = F("Eichbach-Ziegelei");
        break;
    }
    case 89819:
    {
        returnValue = F("Eichbachgasse");
        break;
    }
    case 89820:
    {
        returnValue = F("Eichbachstr.");
        break;
    }
    case 89821:
    {
        returnValue = F("Eichbachweg");
        break;
    }
    case 89822:
    {
        returnValue = F("Eichbalken");
        break;
    }
    case 89823:
    {
        returnValue = F("Eichbalkentwiete");
        break;
    }
    case 89824:
    {
        returnValue = F("Eichbaum");
        break;
    }
    case 89825:
    {
        returnValue = F("Eichbaumallee");
        break;
    }
    case 89826:
    {
        returnValue = F("Eichbaumschneise");
        break;
    }
    case 89827:
    {
        returnValue = F("Eichbaumstr.");
        break;
    }
    case 89828:
    {
        returnValue = F("Eichbaumweg");
        break;
    }
    case 89829:
    {
        returnValue = F("Eichberg");
        break;
    }
    case 89830:
    {
        returnValue = F("Eichberg - Forsthaus  Wiesental");
        break;
    }
    case 89831:
    {
        returnValue = F("Eichberg-Rundweg");
        break;
    }
    case 89832:
    {
        returnValue = F("Eichbergallee");
        break;
    }
    case 89833:
    {
        returnValue = F("Eichbergblick");
        break;
    }
    case 89834:
    {
        returnValue = F("Eichberger Str.");
        break;
    }
    case 89835:
    {
        returnValue = F("Eichberger Weg");
        break;
    }
    case 89836:
    {
        returnValue = F("Eichberggasse");
        break;
    }
    case 89837:
    {
        returnValue = F("Eichberggestell");
        break;
    }
    case 89838:
    {
        returnValue = F("Eichberghaldenweg");
        break;
    }
    case 89839:
    {
        returnValue = F("Eichberghöhenweg");
        break;
    }
    case 89840:
    {
        returnValue = F("Eichbergkammweg");
        break;
    }
    case 89841:
    {
        returnValue = F("Eichbergrainweg");
        break;
    }
    case 89842:
    {
        returnValue = F("Eichbergring");
        break;
    }
    case 89843:
    {
        returnValue = F("Eichbergrundweg");
        break;
    }
    case 89844:
    {
        returnValue = F("Eichbergstr.");
        break;
    }
    case 89845:
    {
        returnValue = F("Eichbergweg");
        break;
    }
    case 89846:
    {
        returnValue = F("Eichbichlstr.");
        break;
    }
    case 89847:
    {
        returnValue = F("Eichbichlweg");
        break;
    }
    case 89848:
    {
        returnValue = F("Eichbildstr.");
        break;
    }
    case 89849:
    {
        returnValue = F("Eichblatt");
        break;
    }
    case 89850:
    {
        returnValue = F("Eichborn");
        break;
    }
    case 89851:
    {
        returnValue = F("Eichbornschneise");
        break;
    }
    case 89852:
    {
        returnValue = F("Eichbornstr.");
        break;
    }
    case 89853:
    {
        returnValue = F("Eichbornweg");
        break;
    }
    case 89854:
    {
        returnValue = F("Eichbottstr.");
        break;
    }
    case 89855:
    {
        returnValue = F("Eichbreite");
        break;
    }
    case 89856:
    {
        returnValue = F("Eichbronnenweg");
        break;
    }
    case 89857:
    {
        returnValue = F("Eichbrunnen");
        break;
    }
    case 89858:
    {
        returnValue = F("Eichbrunnengasse");
        break;
    }
    case 89859:
    {
        returnValue = F("Eichbrunnenstr.");
        break;
    }
    case 89860:
    {
        returnValue = F("Eichbrunnenweg");
        break;
    }
    case 89861:
    {
        returnValue = F("Eichbrünnleweg");
        break;
    }
    case 89862:
    {
        returnValue = F("Eichbuckweg");
        break;
    }
    case 89863:
    {
        returnValue = F("Eichburren");
        break;
    }
    case 89864:
    {
        returnValue = F("Eichburrensträßle");
        break;
    }
    case 89865:
    {
        returnValue = F("Eichbusch");
        break;
    }
    case 89866:
    {
        returnValue = F("Eichbuscher Ring");
        break;
    }
    case 89867:
    {
        returnValue = F("Eichbuscher Str.");
        break;
    }
    case 89868:
    {
        returnValue = F("Eichbuschstr.");
        break;
    }
    case 89869:
    {
        returnValue = F("Eichbuschweg");
        break;
    }
    case 89870:
    {
        returnValue = F("Eichbühl");
        break;
    }
    case 89871:
    {
        returnValue = F("Eichbühlhof");
        break;
    }
    case 89872:
    {
        returnValue = F("Eichbühlstr.");
        break;
    }
    case 89873:
    {
        returnValue = F("Eichbühlweg");
        break;
    }
    case 89874:
    {
        returnValue = F("Eichbühnstr.");
        break;
    }
    case 89875:
    {
        returnValue = F("Eichbühnweg");
        break;
    }
    case 89876:
    {
        returnValue = F("Eichbüschlesweg");
        break;
    }
    case 89877:
    {
        returnValue = F("Eichdorf");
        break;
    }
    case 89878:
    {
        returnValue = F("Eichdorfer Str.");
        break;
    }
    case 89879:
    {
        returnValue = F("Eiche");
        break;
    }
    case 89880:
    {
        returnValue = F("Eiche Wende");
        break;
    }
    case 89881:
    {
        returnValue = F("Eicheckweg");
        break;
    }
    case 89882:
    {
        returnValue = F("Eichedeer Str.");
        break;
    }
    case 89883:
    {
        returnValue = F("Eichel-Geräumt");
        break;
    }
    case 89884:
    {
        returnValue = F("Eichelacker");
        break;
    }
    case 89885:
    {
        returnValue = F("Eichelackerschneise");
        break;
    }
    case 89886:
    {
        returnValue = F("Eichelallee");
        break;
    }
    case 89887:
    {
        returnValue = F("Eichelangerweg");
        break;
    }
    case 89888:
    {
        returnValue = F("Eichelbach");
        break;
    }
    case 89889:
    {
        returnValue = F("Eichelbacher Weg");
        break;
    }
    case 89890:
    {
        returnValue = F("Eichelbachhöhe");
        break;
    }
    case 89891:
    {
        returnValue = F("Eichelbachstr.");
        break;
    }
    case 89892:
    {
        returnValue = F("Eichelbachweg");
        break;
    }
    case 89893:
    {
        returnValue = F("Eichelbaumstr.");
        break;
    }
    case 89894:
    {
        returnValue = F("Eichelberg");
        break;
    }
    case 89895:
    {
        returnValue = F("Eichelberge");
        break;
    }
    case 89896:
    {
        returnValue = F("Eichelberger Dorfstr.");
        break;
    }
    case 89897:
    {
        returnValue = F("Eichelberger Str.");
        break;
    }
    case 89898:
    {
        returnValue = F("Eichelberger Weg");
        break;
    }
    case 89899:
    {
        returnValue = F("Eichelbergerweg");
        break;
    }
    case 89900:
    {
        returnValue = F("Eichelbergkamp");
        break;
    }
    case 89901:
    {
        returnValue = F("Eichelbergkopfweg");
        break;
    }
    case 89902:
    {
        returnValue = F("Eichelbergring");
        break;
    }
    case 89903:
    {
        returnValue = F("Eichelbergstr.");
        break;
    }
    case 89904:
    {
        returnValue = F("Eichelbergweg");
        break;
    }
    case 89905:
    {
        returnValue = F("Eichelbuckweg");
        break;
    }
    case 89906:
    {
        returnValue = F("Eichelburger Hauptstr.");
        break;
    }
    case 89907:
    {
        returnValue = F("Eichelchen");
        break;
    }
    case 89908:
    {
        returnValue = F("Eichelchesweg");
        break;
    }
    case 89909:
    {
        returnValue = F("Eichelelsterweg");
        break;
    }
    case 89910:
    {
        returnValue = F("Eichelen");
        break;
    }
    case 89911:
    {
        returnValue = F("Eichelenhof");
        break;
    }
    case 89912:
    {
        returnValue = F("Eichelensweg");
        break;
    }
    case 89913:
    {
        returnValue = F("Eicheler Höhenweg");
        break;
    }
    case 89914:
    {
        returnValue = F("Eichelesgartenweg");
        break;
    }
    case 89915:
    {
        returnValue = F("Eichelestr.");
        break;
    }
    case 89916:
    {
        returnValue = F("Eichelgarten");
        break;
    }
    case 89917:
    {
        returnValue = F("Eichelgarten Schneise");
        break;
    }
    case 89918:
    {
        returnValue = F("Eichelgarten-Schneise");
        break;
    }
    case 89919:
    {
        returnValue = F("Eichelgartenstr.");
        break;
    }
    case 89920:
    {
        returnValue = F("Eichelgartenweg");
        break;
    }
    case 89921:
    {
        returnValue = F("Eichelgarter Schneise");
        break;
    }
    case 89922:
    {
        returnValue = F("Eichelgasse");
        break;
    }
    case 89923:
    {
        returnValue = F("Eichelgraben");
        break;
    }
    case 89924:
    {
        returnValue = F("Eichelgrund");
        break;
    }
    case 89925:
    {
        returnValue = F("Eichelgrundweg");
        break;
    }
    case 89926:
    {
        returnValue = F("Eichelhain");
        break;
    }
    case 89927:
    {
        returnValue = F("Eichelhainer Str.");
        break;
    }
    case 89928:
    {
        returnValue = F("Eichelhaldenweg");
        break;
    }
    case 89929:
    {
        returnValue = F("Eichelhauweg");
        break;
    }
    case 89930:
    {
        returnValue = F("Eichelhof");
        break;
    }
    case 89931:
    {
        returnValue = F("Eichelhäherkamp");
        break;
    }
    case 89932:
    {
        returnValue = F("Eichelhähersteig");
        break;
    }
    case 89933:
    {
        returnValue = F("Eichelhäherstr.");
        break;
    }
    case 89934:
    {
        returnValue = F("Eichelhäherweg");
        break;
    }
    case 89935:
    {
        returnValue = F("Eichelhütte");
        break;
    }
    case 89936:
    {
        returnValue = F("Eichelkamm");
        break;
    }
    case 89937:
    {
        returnValue = F("Eichelkamp");
        break;
    }
    case 89938:
    {
        returnValue = F("Eichelkampstr.");
        break;
    }
    case 89939:
    {
        returnValue = F("Eichelkopfstr.");
        break;
    }
    case 89940:
    {
        returnValue = F("Eichelloheweg");
        break;
    }
    case 89941:
    {
        returnValue = F("Eichelmühlgasse");
        break;
    }
    case 89942:
    {
        returnValue = F("Eichelnkopfschneise");
        break;
    }
    case 89943:
    {
        returnValue = F("Eichelnkämpe");
        break;
    }
    case 89944:
    {
        returnValue = F("Eichelohstr.");
        break;
    }
    case 89945:
    {
        returnValue = F("Eichelplanstr.");
        break;
    }
    case 89946:
    {
        returnValue = F("Eichelreuth");
        break;
    }
    case 89947:
    {
        returnValue = F("Eichelsbacher Mühle");
        break;
    }
    case 89948:
    {
        returnValue = F("Eichelsbacher Str.");
        break;
    }
    case 89949:
    {
        returnValue = F("Eichelsbacher Weg");
        break;
    }
    case 89950:
    {
        returnValue = F("Eichelsbachergässchen");
        break;
    }
    case 89951:
    {
        returnValue = F("Eichelsbachermühle");
        break;
    }
    case 89952:
    {
        returnValue = F("Eichelsbachweg");
        break;
    }
    case 89953:
    {
        returnValue = F("Eichelsberg");
        break;
    }
    case 89954:
    {
        returnValue = F("Eichelsbergweg");
        break;
    }
    case 89955:
    {
        returnValue = F("Eichelscheider Str.");
        break;
    }
    case 89956:
    {
        returnValue = F("Eichelscheiderstr.");
        break;
    }
    case 89957:
    {
        returnValue = F("Eichelsdorfer Str.");
        break;
    }
    case 89958:
    {
        returnValue = F("Eichelsdörfer Chaussee");
        break;
    }
    case 89959:
    {
        returnValue = F("Eichelseer Str.");
        break;
    }
    case 89960:
    {
        returnValue = F("Eichelseeweg");
        break;
    }
    case 89961:
    {
        returnValue = F("Eichelseifen");
        break;
    }
    case 89962:
    {
        returnValue = F("Eichelsetz");
        break;
    }
    case 89963:
    {
        returnValue = F("Eichelsgarten");
        break;
    }
    case 89964:
    {
        returnValue = F("Eichelsgartenstr.");
        break;
    }
    case 89965:
    {
        returnValue = F("Eichelsgasse");
        break;
    }
    case 89966:
    {
        returnValue = F("Eichelsheimer Str.");
        break;
    }
    case 89967:
    {
        returnValue = F("Eichelshof");
        break;
    }
    case 89968:
    {
        returnValue = F("Eichelshofer Weg");
        break;
    }
    case 89969:
    {
        returnValue = F("Eichelsstr.");
        break;
    }
    case 89970:
    {
        returnValue = F("Eichelsteige");
        break;
    }
    case 89971:
    {
        returnValue = F("Eichelsteigweg");
        break;
    }
    case 89972:
    {
        returnValue = F("Eichelsteinstr.");
        break;
    }
    case 89973:
    {
        returnValue = F("Eichelstr.");
        break;
    }
    case 89974:
    {
        returnValue = F("Eichelstückschneise");
        break;
    }
    case 89975:
    {
        returnValue = F("Eichelsweg");
        break;
    }
    case 89976:
    {
        returnValue = F("Eichelsächser Str.");
        break;
    }
    case 89977:
    {
        returnValue = F("Eicheltalstr.");
        break;
    }
    case 89978:
    {
        returnValue = F("Eichelthalermühle");
        break;
    }
    case 89979:
    {
        returnValue = F("Eichelwanger Weg");
        break;
    }
    case 89980:
    {
        returnValue = F("Eichelweg");
        break;
    }
    case 89981:
    {
        returnValue = F("Eichelwiese");
        break;
    }
    case 89982:
    {
        returnValue = F("Eichelwiesenweg");
        break;
    }
    case 89983:
    {
        returnValue = F("Eicheläcker");
        break;
    }
    case 89984:
    {
        returnValue = F("Eicheläckerweg");
        break;
    }
    case 89985:
    {
        returnValue = F("Eichemstr.");
        break;
    }
    case 89986:
    {
        returnValue = F("Eichen");
        break;
    }
    case 89987:
    {
        returnValue = F("Eichen am Schöpsdamm");
        break;
    }
    case 89988:
    {
        returnValue = F("Eichen-Trail");
        break;
    }
    case 89989:
    {
        returnValue = F("Eichenacker");
        break;
    }
    case 89990:
    {
        returnValue = F("Eichenackerweg");
        break;
    }
    case 89991:
    {
        returnValue = F("Eichenallee");
        break;
    }
    case 89992:
    {
        returnValue = F("Eichenau");
        break;
    }
    case 89993:
    {
        returnValue = F("Eichenau (S) Nord");
        break;
    }
    case 89994:
    {
        returnValue = F("Eichenau, Süd");
        break;
    }
    case 89995:
    {
        returnValue = F("Eichenaue");
        break;
    }
    case 89996:
    {
        returnValue = F("Eichenauer Str.");
        break;
    }
    case 89997:
    {
        returnValue = F("Eichenauerring");
        break;
    }
    case 89998:
    {
        returnValue = F("Eichenbacher Kopf");
        break;
    }
    case 89999:
    {
        returnValue = F("Eichenbacher Str.");
        break;
    }
    case 90000:
    {
        returnValue = F("Eichenbacher Weg");
        break;
    }
    case 90001:
    {
        returnValue = F("Eichenbachstr.");
        break;
    }
    case 90002:
    {
        returnValue = F("Eichenbarleber Str.");
        break;
    }
    case 90003:
    {
        returnValue = F("Eichenbarleber Weg");
        break;
    }
    case 90004:
    {
        returnValue = F("Eichenbaumstr.");
        break;
    }
    case 90005:
    {
        returnValue = F("Eichenberg");
        break;
    }
    case 90006:
    {
        returnValue = F("Eichenberg-Querweg");
        break;
    }
    case 90007:
    {
        returnValue = F("Eichenberge");
        break;
    }
    case 90008:
    {
        returnValue = F("Eichenberger Str.");
        break;
    }
    case 356208:
    {
        returnValue = F("e-bike Hille");
        break;
    }
    case 356209:
    {
        returnValue = F("eheblick");
        break;
    }
    case 356210:
    {
        returnValue = F("ehem PzTrack");
        break;
    }
    case 356211:
    {
        returnValue = F("ehem Weg soll nicht mehr benutzt werden");
        break;
    }
    case 356212:
    {
        returnValue = F("ehem. A81 bzw. RAB 39");
        break;
    }
    case 356213:
    {
        returnValue = F("ehem. Altrheinbahn");
        break;
    }
    case 356214:
    {
        returnValue = F("ehem. Bahnsteig");
        break;
    }
    case 356215:
    {
        returnValue = F("ehem. Bahnstrecke Bad Langensalza–Haussömmern");
        break;
    }
    case 356216:
    {
        returnValue = F("ehem. Bahnstrecke Buttstädt–Rastenberg");
        break;
    }
    case 356217:
    {
        returnValue = F("ehem. Bahnstrecke Dalheim - Jülich");
        break;
    }
    case 356218:
    {
        returnValue = F("ehem. Bahnstrecke Erlau–Wegscheid");
        break;
    }
    case 356219:
    {
        returnValue = F("ehem. Bahnstrecke Finnentrop-Wennemen");
        break;
    }
    case 356220:
    {
        returnValue = F("ehem. Bahnstrecke Freiberg–Halsbrücke");
        break;
    }
    case 356221:
    {
        returnValue = F("ehem. Bahnstrecke Gau Odernheim–Osthofen");
        break;
    }
    case 356222:
    {
        returnValue = F("ehem. Bahnstrecke Pirna - Gottleuba");
        break;
    }
    case 356223:
    {
        returnValue = F("ehem. Bahnstrecke Schalksmühle–Halver");
        break;
    }
    case 356224:
    {
        returnValue = F("ehem. Bahnstrecke Teutschenthal–Salzmünde");
        break;
    }
    case 356225:
    {
        returnValue = F("ehem. Bahnstrecke Worms–Grünstadt");
        break;
    }
    case 356226:
    {
        returnValue = F("ehem. Bahnstrecke Worms–Gundheim");
        break;
    }
    case 356227:
    {
        returnValue = F("ehem. Barend. Weg");
        break;
    }
    case 356228:
    {
        returnValue = F("ehem. Bimmelbähnchens");
        break;
    }
    case 356229:
    {
        returnValue = F("ehem. Botanischer Garten");
        break;
    }
    case 356230:
    {
        returnValue = F("ehem. Caller Weg");
        break;
    }
    case 356231:
    {
        returnValue = F("ehem. Fort II");
        break;
    }
    case 356232:
    {
        returnValue = F("ehem. Friedhof");
        break;
    }
    case 356233:
    {
        returnValue = F("ehem. Friedhof Dückerstr.");
        break;
    }
    case 356234:
    {
        returnValue = F("ehem. Gartetalbahn");
        break;
    }
    case 356235:
    {
        returnValue = F("ehem. Gera-Meuselwitz-Wuitzer Eisenbahn");
        break;
    }
    case 356236:
    {
        returnValue = F("ehem. Grenzweg");
        break;
    }
    case 356237:
    {
        returnValue = F("ehem. Härtsfeldbahn");
        break;
    }
    case 356238:
    {
        returnValue = F("ehem. Hüttensche Chaussee");
        break;
    }
    case 356239:
    {
        returnValue = F("ehem. Industriebahn der Nickelhütte St. Egidien");
        break;
    }
    case 356240:
    {
        returnValue = F("ehem. K 6753");
        break;
    }
    case 356241:
    {
        returnValue = F("ehem. Kanonenbahn");
        break;
    }
    case 356242:
    {
        returnValue = F("ehem. Kleinbahn Ittersbach-Pforzheim");
        break;
    }
    case 356243:
    {
        returnValue = F("ehem. Kleinbahn Steinhelle–Medebach");
        break;
    }
    case 356244:
    {
        returnValue = F("ehem. Kleinbahnstrecke");
        break;
    }
    case 356245:
    {
        returnValue = F("ehem. Kolonnenweg");
        break;
    }
    case 356246:
    {
        returnValue = F("ehem. Landesschule");
        break;
    }
    case 356247:
    {
        returnValue = F("ehem. Landschaftspark Schloss Putzar");
        break;
    }
    case 356248:
    {
        returnValue = F("ehem. Laufbahn");
        break;
    }
    case 356249:
    {
        returnValue = F("ehem. Löptener Str.");
        break;
    }
    case 356250:
    {
        returnValue = F("ehem. Meseberger Chaussee");
        break;
    }
    case 356251:
    {
        returnValue = F("ehem. Mülhensbrücke");
        break;
    }
    case 356252:
    {
        returnValue = F("ehem. Müllenbachschleife");
        break;
    }
    case 356253:
    {
        returnValue = F("ehem. NVA Grenzweg");
        break;
    }
    case 356254:
    {
        returnValue = F("ehem. NVA-Grenzweg");
        break;
    }
    case 356255:
    {
        returnValue = F("ehem. Naturlehrpfad");
        break;
    }
    case 356256:
    {
        returnValue = F("ehem. Neukölln-Mittenwalder Eisenbahn");
        break;
    }
    case 356257:
    {
        returnValue = F("ehem. Nürnberger Heer- und Frachtstr.");
        break;
    }
    case 356258:
    {
        returnValue = F("ehem. Oderbruchbahn");
        break;
    }
    case 356259:
    {
        returnValue = F("ehem. Panzerstr.");
        break;
    }
    case 356260:
    {
        returnValue = F("ehem. Perm-Bahn");
        break;
    }
    case 356261:
    {
        returnValue = F("ehem. Pfarrgarten");
        break;
    }
    case 356262:
    {
        returnValue = F("ehem. Philippsburg");
        break;
    }
    case 356263:
    {
        returnValue = F("ehem. Plankener Chaussee");
        break;
    }
    case 356264:
    {
        returnValue = F("ehem. Poststr. Berlin - Lübben");
        break;
    }
    case 356265:
    {
        returnValue = F("ehem. Raminer Gutspark");
        break;
    }
    case 356266:
    {
        returnValue = F("ehem. Reiterstellwerk");
        break;
    }
    case 356267:
    {
        returnValue = F("ehem. Schacht Grillo 3 \"Kiwitt");
        break;
    }
    case 356268:
    {
        returnValue = F("ehem. Schießbahn");
        break;
    }
    case 356269:
    {
        returnValue = F("ehem. Schlosspark Letzlingen");
        break;
    }
    case 356270:
    {
        returnValue = F("ehem. Schmalspurbahn Freital-Potschappel–Nossen");
        break;
    }
    case 356271:
    {
        returnValue = F("ehem. Schmalspurbahn Goßdorf-Kohlmühle–Hohnstein");
        break;
    }
    case 356272:
    {
        returnValue = F("ehem. Schmalspurbahn Herrnhut–Bernstadt");
        break;
    }
    case 356273:
    {
        returnValue = F("ehem. Schmalspurbahn Hetzdorf–Eppendorf–Großwaltersdorf");
        break;
    }
    case 356274:
    {
        returnValue = F("ehem. Schmalspurbahn Klingenberg-Colmnitz–Frauenstein");
        break;
    }
    case 356275:
    {
        returnValue = F("ehem. Schmalspurbahn Klingenberg-Colmnitz–Oberdittmannsdorf");
        break;
    }
    case 356276:
    {
        returnValue = F("ehem. Schmalspurbahn Klingenthal–Sachsenberg-Georgenthal");
        break;
    }
    case 356277:
    {
        returnValue = F("ehem. Schmalspurbahn Mulda–Sayda");
        break;
    }
    case 356278:
    {
        returnValue = F("ehem. Schmalspurbahn Mügeln--Neichen");
        break;
    }
    case 356279:
    {
        returnValue = F("ehem. Schmalspurbahn Nebitzschen–Kroptewitz");
        break;
    }
    case 356280:
    {
        returnValue = F("ehem. Schmalspurbahn Oschatz–Mügeln–Döbeln");
        break;
    }
    case 356281:
    {
        returnValue = F("ehem. Schmalspurbahn Taubenheim–Dürrhennersdorf");
        break;
    }
    case 356282:
    {
        returnValue = F("ehem. Schmalspurbahn Weimar–Rastenberg/Großrudestedt");
        break;
    }
    case 356283:
    {
        returnValue = F("ehem. Schmalspurbahn Wilkau-Haßlau–Carlsfeld");
        break;
    }
    case 356284:
    {
        returnValue = F("ehem. Steinfähre");
        break;
    }
    case 356285:
    {
        returnValue = F("ehem. Str. nach Seelhausen");
        break;
    }
    case 356286:
    {
        returnValue = F("ehem. Strassenbau-Versuchsstrecke Braunschweig");
        break;
    }
    case 356287:
    {
        returnValue = F("ehem. Tanklager");
        break;
    }
    case 356288:
    {
        returnValue = F("ehem. Tankübungsplatz");
        break;
    }
    case 356289:
    {
        returnValue = F("ehem. Tierpark Seesen");
        break;
    }
    case 356290:
    {
        returnValue = F("ehem. Todweg");
        break;
    }
    case 356291:
    {
        returnValue = F("ehem. Untereichsfeldbahn");
        break;
    }
    case 356292:
    {
        returnValue = F("ehem. Weg duchr's Paddenloch");
        break;
    }
    case 356293:
    {
        returnValue = F("ehem. Werratalbahn");
        break;
    }
    case 356294:
    {
        returnValue = F("ehem. Westplatz");
        break;
    }
    case 356295:
    {
        returnValue = F("ehem. Zeche \"Am Schwaben");
        break;
    }
    case 356296:
    {
        returnValue = F("ehem. Zeche Erin Schacht 3");
        break;
    }
    case 356297:
    {
        returnValue = F("ehem. Zeche Erin Schachtanlage 1/2/4/7");
        break;
    }
    case 356298:
    {
        returnValue = F("ehem. Zeche Königsborn Schacht 1");
        break;
    }
    case 356299:
    {
        returnValue = F("ehem. Zeche Victor Schacht 5");
        break;
    }
    case 356300:
    {
        returnValue = F("ehem.Trimm-Dich-Pfad");
        break;
    }
    case 356301:
    {
        returnValue = F("ehemalige Autobahnauffahrt");
        break;
    }
    case 356302:
    {
        returnValue = F("ehemalige Bahnstrecke Nossen–Moldau");
        break;
    }
    case 356303:
    {
        returnValue = F("ehemalige Bahnstrecke Pirna - Großcotta");
        break;
    }
    case 356304:
    {
        returnValue = F("ehemalige Bongarder Str.");
        break;
    }
    case 356305:
    {
        returnValue = F("ehemalige Brücke, z.Zt. abgebaut");
        break;
    }
    case 356306:
    {
        returnValue = F("ehemalige Castendyckbrücke");
        break;
    }
    case 356307:
    {
        returnValue = F("ehemalige City-Passage");
        break;
    }
    case 356308:
    {
        returnValue = F("ehemalige Holzstr.");
        break;
    }
    case 356309:
    {
        returnValue = F("ehemalige Härtsfeldbahnstrecke");
        break;
    }
    case 356310:
    {
        returnValue = F("ehemalige Kiesgrube");
        break;
    }
    case 356311:
    {
        returnValue = F("ehemalige L 66");
        break;
    }
    case 356312:
    {
        returnValue = F("ehemalige Landstr.");
        break;
    }
    case 356313:
    {
        returnValue = F("ehemalige Panzerstr.");
        break;
    }
    case 356314:
    {
        returnValue = F("ehemalige Panzerstr. Weltkrieg II");
        break;
    }
    case 356315:
    {
        returnValue = F("ehemalige Südschleife");
        break;
    }
    case 356316:
    {
        returnValue = F("ehemalige Weinbergstr.");
        break;
    }
    case 356317:
    {
        returnValue = F("ehemalige Zugbrücke");
        break;
    }
    case 356318:
    {
        returnValue = F("ehemaliger Bolzplatz");
        break;
    }
    case 356319:
    {
        returnValue = F("ehemaliger Friedhof");
        break;
    }
    case 356320:
    {
        returnValue = F("ehemaliger Friedhof Hochemmerich");
        break;
    }
    case 356321:
    {
        returnValue = F("ehemaliger Gertrudenfriedhof");
        break;
    }
    case 356322:
    {
        returnValue = F("ehemaliger Grenzweg");
        break;
    }
    case 356323:
    {
        returnValue = F("ehemaliger Gutspark");
        break;
    }
    case 356324:
    {
        returnValue = F("ehemaliger Holzweg");
        break;
    }
    case 356325:
    {
        returnValue = F("ehemaliger Kirchsteg");
        break;
    }
    case 356326:
    {
        returnValue = F("ehemaliger Kolonnenweg - DDR Grenze");
        break;
    }
    case 356327:
    {
        returnValue = F("ehemaliger Kreuzweg");
        break;
    }
    case 356328:
    {
        returnValue = F("ehemaliger Krichsteig");
        break;
    }
    case 356329:
    {
        returnValue = F("ehemaliger Lampenweg");
        break;
    }
    case 356330:
    {
        returnValue = F("ehemaliger Mühlweg");
        break;
    }
    case 356331:
    {
        returnValue = F("ehemaliger Park der Gebrüder Kraemer");
        break;
    }
    case 356332:
    {
        returnValue = F("ehemaliger Tennisplatz");
        break;
    }
    case 356333:
    {
        returnValue = F("ehemaliger Wanderweg, jetzt privat");
        break;
    }
    case 356334:
    {
        returnValue = F("ehemaliger Weg");
        break;
    }
    case 356335:
    {
        returnValue = F("ehemaliges Kloster Maria Stern");
        break;
    }
    case 356336:
    {
        returnValue = F("ehemaliges Klärwerk");
        break;
    }
    case 356337:
    {
        returnValue = F("ehemaliges Schneider-Bad");
        break;
    }
    case 356338:
    {
        returnValue = F("ehemaliges Schwertfegergäßchen");
        break;
    }
    case 356339:
    {
        returnValue = F("ehemaliges Stadion");
        break;
    }
    case 356340:
    {
        returnValue = F("ehm. Kriegerpfad");
        break;
    }
    case 356341:
    {
        returnValue = F("eingezäunte Spielfläche");
        break;
    }
    case 356342:
    {
        returnValue = F("elomed Park");
        break;
    }
    case 356343:
    {
        returnValue = F("em Sief");
        break;
    }
    case 356344:
    {
        returnValue = F("em Stiel");
        break;
    }
    case 356345:
    {
        returnValue = F("en de Höll");
        break;
    }
    case 356346:
    {
        returnValue = F("endet in einen Dornenmeer");
        break;
    }
    case 356347:
    {
        returnValue = F("ene Zweibäsch");
        break;
    }
    case 356348:
    {
        returnValue = F("er Höll");
        break;
    }
    case 356349:
    {
        returnValue = F("er Wöllekuhl");
        break;
    }
    case 356350:
    {
        returnValue = F("ermlandpark");
        break;
    }
    case 356351:
    {
        returnValue = F("erster Heuweg");
        break;
    }
    case 356352:
    {
        returnValue = F("ex Langenstein-Derenburg-Minsleben");
        break;
    }
    case 356353:
    {
        returnValue = F("extreme uphill");
        break;
    }
    }
    return returnValue;
}
