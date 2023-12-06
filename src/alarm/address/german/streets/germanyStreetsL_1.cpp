#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameL1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 199316:
    {
        returnValue = F("L");
        break;
    }
    case 199317:
    {
        returnValue = F("L 108");
        break;
    }
    case 199318:
    {
        returnValue = F("L 117n");
        break;
    }
    case 199319:
    {
        returnValue = F("L 120");
        break;
    }
    case 199320:
    {
        returnValue = F("L 134");
        break;
    }
    case 199321:
    {
        returnValue = F("L 136");
        break;
    }
    case 199322:
    {
        returnValue = F("L 257");
        break;
    }
    case 199323:
    {
        returnValue = F("L 259");
        break;
    }
    case 199324:
    {
        returnValue = F("L 272");
        break;
    }
    case 199325:
    {
        returnValue = F("L 273");
        break;
    }
    case 199326:
    {
        returnValue = F("L 274");
        break;
    }
    case 199327:
    {
        returnValue = F("L 275");
        break;
    }
    case 199328:
    {
        returnValue = F("L 276");
        break;
    }
    case 199329:
    {
        returnValue = F("L 277");
        break;
    }
    case 199330:
    {
        returnValue = F("L 3070");
        break;
    }
    case 199331:
    {
        returnValue = F("L 3073");
        break;
    }
    case 199332:
    {
        returnValue = F("L 3093");
        break;
    }
    case 199333:
    {
        returnValue = F("L 3114");
        break;
    }
    case 199334:
    {
        returnValue = F("L 3125");
        break;
    }
    case 199335:
    {
        returnValue = F("L 34");
        break;
    }
    case 199336:
    {
        returnValue = F("L 392");
        break;
    }
    case 199337:
    {
        returnValue = F("L 411");
        break;
    }
    case 199338:
    {
        returnValue = F("L 90");
        break;
    }
    case 199339:
    {
        returnValue = F("L'Aigler Platz");
        break;
    }
    case 199340:
    {
        returnValue = F("L'Hôpitaler Str.");
        break;
    }
    case 199341:
    {
        returnValue = F("L'Isle-Adam-Anlage");
        break;
    }
    case 199342:
    {
        returnValue = F("L-Linie");
        break;
    }
    case 199343:
    {
        returnValue = F("L-Weg");
        break;
    }
    case 199344:
    {
        returnValue = F("L.-Hagenauer-Str.");
        break;
    }
    case 199345:
    {
        returnValue = F("L.-M.-Kluftingerstr.");
        break;
    }
    case 199346:
    {
        returnValue = F("L.-v.-Beethoven-Str.");
        break;
    }
    case 199347:
    {
        returnValue = F("L10");
        break;
    }
    case 199348:
    {
        returnValue = F("L1107");
        break;
    }
    case 199349:
    {
        returnValue = F("L1119");
        break;
    }
    case 199350:
    {
        returnValue = F("L1214");
        break;
    }
    case 199351:
    {
        returnValue = F("L133");
        break;
    }
    case 199352:
    {
        returnValue = F("L134");
        break;
    }
    case 199353:
    {
        returnValue = F("L151");
        break;
    }
    case 199354:
    {
        returnValue = F("L154");
        break;
    }
    case 199355:
    {
        returnValue = F("L177 - Schwarzbruch / Sonnenrödchen");
        break;
    }
    case 199356:
    {
        returnValue = F("L18");
        break;
    }
    case 199357:
    {
        returnValue = F("L204");
        break;
    }
    case 199358:
    {
        returnValue = F("L2117");
        break;
    }
    case 199359:
    {
        returnValue = F("L216");
        break;
    }
    case 199360:
    {
        returnValue = F("L232");
        break;
    }
    case 199361:
    {
        returnValue = F("L254");
        break;
    }
    case 199362:
    {
        returnValue = F("L277");
        break;
    }
    case 199363:
    {
        returnValue = F("L281");
        break;
    }
    case 199364:
    {
        returnValue = F("L3136");
        break;
    }
    case 199365:
    {
        returnValue = F("L323");
        break;
    }
    case 199366:
    {
        returnValue = F("L3353");
        break;
    }
    case 199367:
    {
        returnValue = F("L3418");
        break;
    }
    case 199368:
    {
        returnValue = F("L411");
        break;
    }
    case 199369:
    {
        returnValue = F("L414");
        break;
    }
    case 199370:
    {
        returnValue = F("L45");
        break;
    }
    case 199371:
    {
        returnValue = F("L499");
        break;
    }
    case 199372:
    {
        returnValue = F("L5");
        break;
    }
    case 199373:
    {
        returnValue = F("L5 Haupteingang");
        break;
    }
    case 199374:
    {
        returnValue = F("L509");
        break;
    }
    case 199375:
    {
        returnValue = F("L539");
        break;
    }
    case 199376:
    {
        returnValue = F("L5E Haupteingang");
        break;
    }
    case 199377:
    {
        returnValue = F("L6 Eingang Mitte");
        break;
    }
    case 199378:
    {
        returnValue = F("L6 Eingang Nord");
        break;
    }
    case 199379:
    {
        returnValue = F("L614");
        break;
    }
    case 199380:
    {
        returnValue = F("L649 Steinsweg");
        break;
    }
    case 199381:
    {
        returnValue = F("L73");
        break;
    }
    case 199382:
    {
        returnValue = F("L82");
        break;
    }
    case 199383:
    {
        returnValue = F("L86a");
        break;
    }
    case 199384:
    {
        returnValue = F("L886");
        break;
    }
    case 199385:
    {
        returnValue = F("LAGA 2022");
        break;
    }
    case 199386:
    {
        returnValue = F("LANDART Fig. 1");
        break;
    }
    case 199387:
    {
        returnValue = F("LANDART Fig. 2");
        break;
    }
    case 199388:
    {
        returnValue = F("LANDART Fig. 4");
        break;
    }
    case 199389:
    {
        returnValue = F("LBV Naturerlebnisgarten Kleinostheim");
        break;
    }
    case 199390:
    {
        returnValue = F("LBV Umweltstation");
        break;
    }
    case 199391:
    {
        returnValue = F("LEAG Werkstr.");
        break;
    }
    case 199392:
    {
        returnValue = F("LEW-Kolonie");
        break;
    }
    case 199393:
    {
        returnValue = F("LGS-Gelände 1990");
        break;
    }
    case 199394:
    {
        returnValue = F("LIFE-Naturerlebnispfad Auenwald");
        break;
    }
    case 199395:
    {
        returnValue = F("LKW Waage");
        break;
    }
    case 199396:
    {
        returnValue = F("LOCHBACHKLAMM EINGANG");
        break;
    }
    case 199397:
    {
        returnValue = F("LP Gießbacherkopfweg");
        break;
    }
    case 199398:
    {
        returnValue = F("LPG Str.");
        break;
    }
    case 199399:
    {
        returnValue = F("LPG-Hof");
        break;
    }
    case 199400:
    {
        returnValue = F("LPG-Siedlung");
        break;
    }
    case 199401:
    {
        returnValue = F("LPG-Str.");
        break;
    }
    case 199402:
    {
        returnValue = F("LPG-Weg");
        break;
    }
    case 199403:
    {
        returnValue = F("LVR-Archäologischer Park Xanten");
        break;
    }
    case 199404:
    {
        returnValue = F("LVR-Freilichtmuseum Lindlar");
        break;
    }
    case 199405:
    {
        returnValue = F("LW-Weg");
        break;
    }
    case 199406:
    {
        returnValue = F("LZA-Park");
        break;
    }
    case 199407:
    {
        returnValue = F("LZR Baggersee");
        break;
    }
    case 199408:
    {
        returnValue = F("La");
        break;
    }
    case 199409:
    {
        returnValue = F("La Baconnière-Platz");
        break;
    }
    case 199410:
    {
        returnValue = F("La Bazoge");
        break;
    }
    case 199411:
    {
        returnValue = F("La Clayetter Str.");
        break;
    }
    case 199412:
    {
        returnValue = F("La Ferté-Bernard-Str.");
        break;
    }
    case 199413:
    {
        returnValue = F("La Haye-Pesnel-Str.");
        break;
    }
    case 199414:
    {
        returnValue = F("La Loupé");
        break;
    }
    case 199415:
    {
        returnValue = F("La Montagne Platz");
        break;
    }
    case 199416:
    {
        returnValue = F("La Petite Provence");
        break;
    }
    case 199417:
    {
        returnValue = F("La Plata");
        break;
    }
    case 199418:
    {
        returnValue = F("La Roche-Weg");
        break;
    }
    case 199419:
    {
        returnValue = F("La Roche-sur-Yon-Str.");
        break;
    }
    case 199420:
    {
        returnValue = F("La Rochelle Brücke");
        break;
    }
    case 199421:
    {
        returnValue = F("La Souterrainer Str.");
        break;
    }
    case 199422:
    {
        returnValue = F("La Tessoualler Park");
        break;
    }
    case 199423:
    {
        returnValue = F("La Teste Str.");
        break;
    }
    case 199424:
    {
        returnValue = F("La-Baule-Platz");
        break;
    }
    case 199425:
    {
        returnValue = F("La-Bienne-Weg");
        break;
    }
    case 199426:
    {
        returnValue = F("La-Chartre-Str.");
        break;
    }
    case 199427:
    {
        returnValue = F("La-Flèche-Park");
        break;
    }
    case 199428:
    {
        returnValue = F("La-Frenaye-Weg");
        break;
    }
    case 199429:
    {
        returnValue = F("La-Madeleine-Allee");
        break;
    }
    case 199430:
    {
        returnValue = F("La-Motte-Servolex-Str.");
        break;
    }
    case 199431:
    {
        returnValue = F("La-Mézière-Weg");
        break;
    }
    case 199432:
    {
        returnValue = F("La-Roche-Platz");
        break;
    }
    case 199433:
    {
        returnValue = F("La-Roche-Str.");
        break;
    }
    case 199434:
    {
        returnValue = F("La-Spezia-Platz");
        break;
    }
    case 199435:
    {
        returnValue = F("La-Valette-Str.");
        break;
    }
    case 199436:
    {
        returnValue = F("La-Verrie-Str.");
        break;
    }
    case 199437:
    {
        returnValue = F("La-Villedieu-Ring");
        break;
    }
    case 199438:
    {
        returnValue = F("LaSalette Gedenkstätte");
        break;
    }
    case 199439:
    {
        returnValue = F("Laaberallee");
        break;
    }
    case 199440:
    {
        returnValue = F("Laaberberger Str.");
        break;
    }
    case 199441:
    {
        returnValue = F("Laaberbrücke");
        break;
    }
    case 199442:
    {
        returnValue = F("Laaberer Str.");
        break;
    }
    case 199443:
    {
        returnValue = F("Laaberer Weg");
        break;
    }
    case 199444:
    {
        returnValue = F("Laaberstr.");
        break;
    }
    case 199445:
    {
        returnValue = F("Laabertalstr.");
        break;
    }
    case 199446:
    {
        returnValue = F("Laaberweg");
        break;
    }
    case 199447:
    {
        returnValue = F("Laacher Hamm");
        break;
    }
    case 199448:
    {
        returnValue = F("Laacher Hof");
        break;
    }
    case 199449:
    {
        returnValue = F("Laacher See Str.");
        break;
    }
    case 199450:
    {
        returnValue = F("Laacher Str.");
        break;
    }
    case 199451:
    {
        returnValue = F("Laacher Weg");
        break;
    }
    case 199452:
    {
        returnValue = F("Laacher-See-Str.");
        break;
    }
    case 199453:
    {
        returnValue = F("Laacherstr.");
        break;
    }
    case 199454:
    {
        returnValue = F("Laachgasse");
        break;
    }
    case 199455:
    {
        returnValue = F("Laachgraben");
        break;
    }
    case 199456:
    {
        returnValue = F("Laachstr.");
        break;
    }
    case 199457:
    {
        returnValue = F("Laachweg");
        break;
    }
    case 199458:
    {
        returnValue = F("Laack");
        break;
    }
    case 199459:
    {
        returnValue = F("Laacker Kreuzweg");
        break;
    }
    case 199460:
    {
        returnValue = F("Laader Str.");
        break;
    }
    case 199461:
    {
        returnValue = F("Laadeweg");
        break;
    }
    case 199462:
    {
        returnValue = F("Laag");
        break;
    }
    case 199463:
    {
        returnValue = F("Laagberg");
        break;
    }
    case 199464:
    {
        returnValue = F("Laagbergstr.");
        break;
    }
    case 199465:
    {
        returnValue = F("Laagdickstr.");
        break;
    }
    case 199466:
    {
        returnValue = F("Laage-Pinnow");
        break;
    }
    case 199467:
    {
        returnValue = F("Laager Chausee");
        break;
    }
    case 199468:
    {
        returnValue = F("Laager Chaussee");
        break;
    }
    case 199469:
    {
        returnValue = F("Laager Str.");
        break;
    }
    case 199470:
    {
        returnValue = F("Laagholz");
        break;
    }
    case 199471:
    {
        returnValue = F("Laagmühle");
        break;
    }
    case 199472:
    {
        returnValue = F("Laagstr.");
        break;
    }
    case 199473:
    {
        returnValue = F("Laagweg");
        break;
    }
    case 199474:
    {
        returnValue = F("Laak");
        break;
    }
    case 199475:
    {
        returnValue = F("Laakbaum");
        break;
    }
    case 199476:
    {
        returnValue = F("Laake");
        break;
    }
    case 199477:
    {
        returnValue = F("Laakedamm");
        break;
    }
    case 199478:
    {
        returnValue = F("Laaken");
        break;
    }
    case 199479:
    {
        returnValue = F("Laakener Weg");
        break;
    }
    case 199480:
    {
        returnValue = F("Laaker Felder");
        break;
    }
    case 199481:
    {
        returnValue = F("Laaker Hammer");
        break;
    }
    case 199482:
    {
        returnValue = F("Laaker Landwehr");
        break;
    }
    case 199483:
    {
        returnValue = F("Laaker Str.");
        break;
    }
    case 199484:
    {
        returnValue = F("Laaker Weg");
        break;
    }
    case 199485:
    {
        returnValue = F("Laakerholzstr.");
        break;
    }
    case 199486:
    {
        returnValue = F("Laakestr.");
        break;
    }
    case 199487:
    {
        returnValue = F("Laakeweg");
        break;
    }
    case 199488:
    {
        returnValue = F("Laakewiese");
        break;
    }
    case 199489:
    {
        returnValue = F("Laakirchener Str.");
        break;
    }
    case 199490:
    {
        returnValue = F("Laakmannsbusch");
        break;
    }
    case 199491:
    {
        returnValue = F("Laakstr.");
        break;
    }
    case 199492:
    {
        returnValue = F("Laaksweg");
        break;
    }
    case 199493:
    {
        returnValue = F("Laakweg");
        break;
    }
    case 199494:
    {
        returnValue = F("Laakweide");
        break;
    }
    case 199495:
    {
        returnValue = F("Laamstich");
        break;
    }
    case 199496:
    {
        returnValue = F("Laanenweg");
        break;
    }
    case 199497:
    {
        returnValue = F("Laar");
        break;
    }
    case 199498:
    {
        returnValue = F("Laarberg");
        break;
    }
    case 199499:
    {
        returnValue = F("Laardiek");
        break;
    }
    case 199500:
    {
        returnValue = F("Laarer Bach");
        break;
    }
    case 199501:
    {
        returnValue = F("Laarer Str.");
        break;
    }
    case 199502:
    {
        returnValue = F("Laarer Weg");
        break;
    }
    case 199503:
    {
        returnValue = F("Laarfeldweg");
        break;
    }
    case 199504:
    {
        returnValue = F("Laarkamp");
        break;
    }
    case 199505:
    {
        returnValue = F("Laarmannshof");
        break;
    }
    case 199506:
    {
        returnValue = F("Laarmannsholz");
        break;
    }
    case 199507:
    {
        returnValue = F("Laarmannstr.");
        break;
    }
    case 199508:
    {
        returnValue = F("Laarshof");
        break;
    }
    case 199509:
    {
        returnValue = F("Laarstr.");
        break;
    }
    case 199510:
    {
        returnValue = F("Laarwaldstr.");
        break;
    }
    case 199511:
    {
        returnValue = F("Laarweg");
        break;
    }
    case 199512:
    {
        returnValue = F("Laarwiese");
        break;
    }
    case 199513:
    {
        returnValue = F("Laasackerweg");
        break;
    }
    case 199514:
    {
        returnValue = F("Laasan");
        break;
    }
    case 199515:
    {
        returnValue = F("Laasaner Oberweg");
        break;
    }
    case 199516:
    {
        returnValue = F("Laasaner Str.");
        break;
    }
    case 199517:
    {
        returnValue = F("Laasche");
        break;
    }
    case 199518:
    {
        returnValue = F("Laascher Heuweg");
        break;
    }
    case 199519:
    {
        returnValue = F("Laascher Str.");
        break;
    }
    case 199520:
    {
        returnValue = F("Laascher Weg");
        break;
    }
    case 199521:
    {
        returnValue = F("Laaschfeld");
        break;
    }
    case 199522:
    {
        returnValue = F("Laase");
        break;
    }
    case 199523:
    {
        returnValue = F("Laasemühlenring");
        break;
    }
    case 199524:
    {
        returnValue = F("Laasen");
        break;
    }
    case 199525:
    {
        returnValue = F("Laasener Str.");
        break;
    }
    case 199526:
    {
        returnValue = F("Laasensteig");
        break;
    }
    case 199527:
    {
        returnValue = F("Laasenweg");
        break;
    }
    case 199528:
    {
        returnValue = F("Laaser Str.");
        break;
    }
    case 199529:
    {
        returnValue = F("Laaseweg");
        break;
    }
    case 199530:
    {
        returnValue = F("Laasker Chaussee");
        break;
    }
    case 199531:
    {
        returnValue = F("Laasker Dorfstr.");
        break;
    }
    case 199532:
    {
        returnValue = F("Laaslicher Str.");
        break;
    }
    case 199533:
    {
        returnValue = F("Laasower Dorfstr.");
        break;
    }
    case 199534:
    {
        returnValue = F("Laasower Str.");
        break;
    }
    case 199535:
    {
        returnValue = F("Laasower Weg");
        break;
    }
    case 199536:
    {
        returnValue = F("Laaspher Str.");
        break;
    }
    case 199537:
    {
        returnValue = F("Laaspher Weg");
        break;
    }
    case 199538:
    {
        returnValue = F("Laaspherhütte");
        break;
    }
    case 199539:
    {
        returnValue = F("Laates Eck");
        break;
    }
    case 199540:
    {
        returnValue = F("Laatschwech");
        break;
    }
    case 199541:
    {
        returnValue = F("Laatzen");
        break;
    }
    case 199542:
    {
        returnValue = F("Laatzener Str.");
        break;
    }
    case 199543:
    {
        returnValue = F("Laaver Heide");
        break;
    }
    case 199544:
    {
        returnValue = F("Laaver Str.");
        break;
    }
    case 199545:
    {
        returnValue = F("Laaver Weg");
        break;
    }
    case 199546:
    {
        returnValue = F("Laawiesenweg");
        break;
    }
    case 199547:
    {
        returnValue = F("Laaßer Str.");
        break;
    }
    case 199548:
    {
        returnValue = F("Laaßstr.");
        break;
    }
    case 199549:
    {
        returnValue = F("Labach");
        break;
    }
    case 199550:
    {
        returnValue = F("Labacher Str.");
        break;
    }
    case 199551:
    {
        returnValue = F("Labacherbergweg");
        break;
    }
    case 199552:
    {
        returnValue = F("Labacherholzweg");
        break;
    }
    case 199553:
    {
        returnValue = F("Labachstr.");
        break;
    }
    case 199554:
    {
        returnValue = F("Labachweg");
        break;
    }
    case 199555:
    {
        returnValue = F("Labahnstr.");
        break;
    }
    case 199556:
    {
        returnValue = F("Labandstr.");
        break;
    }
    case 199557:
    {
        returnValue = F("Labauer Str.");
        break;
    }
    case 199558:
    {
        returnValue = F("Labaun");
        break;
    }
    case 199559:
    {
        returnValue = F("Labbecker Str.");
        break;
    }
    case 199560:
    {
        returnValue = F("Labberg");
        break;
    }
    case 199561:
    {
        returnValue = F("Labberghang");
        break;
    }
    case 199562:
    {
        returnValue = F("Labberstr.");
        break;
    }
    case 199563:
    {
        returnValue = F("Labbronnerweg");
        break;
    }
    case 199564:
    {
        returnValue = F("Labbéstr.");
        break;
    }
    case 199565:
    {
        returnValue = F("Labeer Weg");
        break;
    }
    case 199566:
    {
        returnValue = F("Labenwolfstr.");
        break;
    }
    case 199567:
    {
        returnValue = F("Laberau");
        break;
    }
    case 199568:
    {
        returnValue = F("Laberfeldstr.");
        break;
    }
    case 199569:
    {
        returnValue = F("Labergasse");
        break;
    }
    case 199570:
    {
        returnValue = F("Labergstr.");
        break;
    }
    case 199571:
    {
        returnValue = F("Laberholzweg");
        break;
    }
    case 199572:
    {
        returnValue = F("Laberich");
        break;
    }
    case 199573:
    {
        returnValue = F("Labermaierweg");
        break;
    }
    case 199574:
    {
        returnValue = F("Labersrichter Str.");
        break;
    }
    case 199575:
    {
        returnValue = F("Laberstr.");
        break;
    }
    case 199576:
    {
        returnValue = F("Labertalstr.");
        break;
    }
    case 199577:
    {
        returnValue = F("Labertalweg");
        break;
    }
    case 199578:
    {
        returnValue = F("Labertsborner Str.");
        break;
    }
    case 199579:
    {
        returnValue = F("Labertswend");
        break;
    }
    case 199580:
    {
        returnValue = F("Laberweg");
        break;
    }
    case 199581:
    {
        returnValue = F("Labesstr.");
        break;
    }
    case 199582:
    {
        returnValue = F("Labetzer Anger");
        break;
    }
    case 199583:
    {
        returnValue = F("Labetzer Weg");
        break;
    }
    case 199584:
    {
        returnValue = F("Labhardsweg");
        break;
    }
    case 199585:
    {
        returnValue = F("Labiauer Str.");
        break;
    }
    case 199586:
    {
        returnValue = F("Labiaustr.");
        break;
    }
    case 199587:
    {
        returnValue = F("Laboer Weg");
        break;
    }
    case 199588:
    {
        returnValue = F("Labonteweg");
        break;
    }
    case 199589:
    {
        returnValue = F("Laborantenhaussträßle");
        break;
    }
    case 199590:
    {
        returnValue = F("Laborantenweg");
        break;
    }
    case 199591:
    {
        returnValue = F("Laboratoriumstr.");
        break;
    }
    case 199592:
    {
        returnValue = F("Laborstr.");
        break;
    }
    case 199593:
    {
        returnValue = F("Laborweg");
        break;
    }
    case 199594:
    {
        returnValue = F("Labrador-Str.");
        break;
    }
    case 199595:
    {
        returnValue = F("Labradorweg");
        break;
    }
    case 199596:
    {
        returnValue = F("Labruner Feldstr.");
        break;
    }
    case 199597:
    {
        returnValue = F("Labruner Hauptstr.");
        break;
    }
    case 199598:
    {
        returnValue = F("Labruner Mühlenstr.");
        break;
    }
    case 199599:
    {
        returnValue = F("Labruner Str.");
        break;
    }
    case 199600:
    {
        returnValue = F("Labruner Winkel");
        break;
    }
    case 199601:
    {
        returnValue = F("Labuissierestr.");
        break;
    }
    case 199602:
    {
        returnValue = F("Labyrint");
        break;
    }
    case 199603:
    {
        returnValue = F("Labyrinth");
        break;
    }
    case 199604:
    {
        returnValue = F("Labyrinth am Blümersberg");
        break;
    }
    case 199605:
    {
        returnValue = F("Labyrinth der verlorenen Orte");
        break;
    }
    case 199606:
    {
        returnValue = F("Labömitzer Str.");
        break;
    }
    case 199607:
    {
        returnValue = F("Laccornweg");
        break;
    }
    case 199608:
    {
        returnValue = F("Lach");
        break;
    }
    case 199609:
    {
        returnValue = F("Lachbergstr.");
        break;
    }
    case 199610:
    {
        returnValue = F("Lachdorf");
        break;
    }
    case 199611:
    {
        returnValue = F("Lache");
        break;
    }
    case 199612:
    {
        returnValue = F("Lachebrücke");
        break;
    }
    case 199613:
    {
        returnValue = F("Lachegraben");
        break;
    }
    case 199614:
    {
        returnValue = F("Lachemer Dorfstr.");
        break;
    }
    case 199615:
    {
        returnValue = F("Lachemer Str.");
        break;
    }
    case 199616:
    {
        returnValue = F("Lachemer Weg");
        break;
    }
    case 199617:
    {
        returnValue = F("Lachen");
        break;
    }
    case 199618:
    {
        returnValue = F("Lachen Hof");
        break;
    }
    case 199619:
    {
        returnValue = F("Lachen-Birkenallee");
        break;
    }
    case 199620:
    {
        returnValue = F("Lachen-Prielwiese");
        break;
    }
    case 199621:
    {
        returnValue = F("Lachen-Schneise");
        break;
    }
    case 199622:
    {
        returnValue = F("Lachenauerweg");
        break;
    }
    case 199623:
    {
        returnValue = F("Lachenbachweg");
        break;
    }
    case 199624:
    {
        returnValue = F("Lachenbrunnweg");
        break;
    }
    case 199625:
    {
        returnValue = F("Lachenbuckweg");
        break;
    }
    case 199626:
    {
        returnValue = F("Lachenbühl");
        break;
    }
    case 199627:
    {
        returnValue = F("Lachend");
        break;
    }
    case 199628:
    {
        returnValue = F("Lachender Hans");
        break;
    }
    case 199629:
    {
        returnValue = F("Lachendorfer Weg");
        break;
    }
    case 199630:
    {
        returnValue = F("Lachendämmle");
        break;
    }
    case 199631:
    {
        returnValue = F("Lachener Str.");
        break;
    }
    case 199632:
    {
        returnValue = F("Lachener Weg");
        break;
    }
    case 199633:
    {
        returnValue = F("Lachenfeldstr.");
        break;
    }
    case 199634:
    {
        returnValue = F("Lachengallen");
        break;
    }
    case 199635:
    {
        returnValue = F("Lachenhauweg");
        break;
    }
    case 199636:
    {
        returnValue = F("Lachenhege");
        break;
    }
    case 199637:
    {
        returnValue = F("Lachenhofstr.");
        break;
    }
    case 199638:
    {
        returnValue = F("Lachenhöfe");
        break;
    }
    case 199639:
    {
        returnValue = F("Lachenmeyrstr.");
        break;
    }
    case 199640:
    {
        returnValue = F("Lachenmoos");
        break;
    }
    case 199641:
    {
        returnValue = F("Lachenmättle");
        break;
    }
    case 199642:
    {
        returnValue = F("Lachenrütteweg");
        break;
    }
    case 199643:
    {
        returnValue = F("Lachenseeschneise");
        break;
    }
    case 199644:
    {
        returnValue = F("Lachenstr.");
        break;
    }
    case 199645:
    {
        returnValue = F("Lachenstrasse");
        break;
    }
    case 199646:
    {
        returnValue = F("Lachentalstr.");
        break;
    }
    case 199647:
    {
        returnValue = F("Lachenteichweg");
        break;
    }
    case 199648:
    {
        returnValue = F("Lachenthalweg");
        break;
    }
    case 199649:
    {
        returnValue = F("Lachentorstr.");
        break;
    }
    case 199650:
    {
        returnValue = F("Lachenwasenweg");
        break;
    }
    case 199651:
    {
        returnValue = F("Lachenweg");
        break;
    }
    case 199652:
    {
        returnValue = F("Lachenwiesen");
        break;
    }
    case 199653:
    {
        returnValue = F("Lachenwiesenweg");
        break;
    }
    case 199654:
    {
        returnValue = F("Lachenwörthsweg");
        break;
    }
    case 199655:
    {
        returnValue = F("Lachenäcker");
        break;
    }
    case 199656:
    {
        returnValue = F("Lachenäckerstr.");
        break;
    }
    case 199657:
    {
        returnValue = F("Lachenäckerweg");
        break;
    }
    case 199658:
    {
        returnValue = F("Lacher Broch");
        break;
    }
    case 199659:
    {
        returnValue = F("Lacher Feld");
        break;
    }
    case 199660:
    {
        returnValue = F("Lacher Str.");
        break;
    }
    case 199661:
    {
        returnValue = F("Lacher Weg");
        break;
    }
    case 199662:
    {
        returnValue = F("Lacherbruch");
        break;
    }
    case 199663:
    {
        returnValue = F("Lachergasse");
        break;
    }
    case 199664:
    {
        returnValue = F("Lacherweg");
        break;
    }
    case 199665:
    {
        returnValue = F("Lachestr.");
        break;
    }
    case 199666:
    {
        returnValue = F("Lacheweg");
        break;
    }
    case 199667:
    {
        returnValue = F("Lachfeldweg");
        break;
    }
    case 199668:
    {
        returnValue = F("Lachgang");
        break;
    }
    case 199669:
    {
        returnValue = F("Lachgartenweg");
        break;
    }
    case 199670:
    {
        returnValue = F("Lachgasse");
        break;
    }
    case 199671:
    {
        returnValue = F("Lachgraben");
        break;
    }
    case 199672:
    {
        returnValue = F("Lachhaustr.");
        break;
    }
    case 199673:
    {
        returnValue = F("Lachholzweg");
        break;
    }
    case 199674:
    {
        returnValue = F("Lachmannstr.");
        break;
    }
    case 199675:
    {
        returnValue = F("Lachmannweg");
        break;
    }
    case 199676:
    {
        returnValue = F("Lachmundsdamm");
        break;
    }
    case 199677:
    {
        returnValue = F("Lachmöwenweg");
        break;
    }
    case 199678:
    {
        returnValue = F("Lachnerring");
        break;
    }
    case 199679:
    {
        returnValue = F("Lachnerstr.");
        break;
    }
    case 199680:
    {
        returnValue = F("Lachpfädle");
        break;
    }
    case 199681:
    {
        returnValue = F("Lachschneise");
        break;
    }
    case 199682:
    {
        returnValue = F("Lachsgang");
        break;
    }
    case 199683:
    {
        returnValue = F("Lachsgasse");
        break;
    }
    case 199684:
    {
        returnValue = F("Lachsgrabenweg");
        break;
    }
    case 199685:
    {
        returnValue = F("Lachsgrund");
        break;
    }
    case 199686:
    {
        returnValue = F("Lachstedter Str.");
        break;
    }
    case 199687:
    {
        returnValue = F("Lachstr.");
        break;
    }
    case 199688:
    {
        returnValue = F("Lachstreppe");
        break;
    }
    case 199689:
    {
        returnValue = F("Lachsweg");
        break;
    }
    case 199690:
    {
        returnValue = F("Lachswehrallee");
        break;
    }
    case 199691:
    {
        returnValue = F("Lachtehäuser Str.");
        break;
    }
    case 199692:
    {
        returnValue = F("Lachterweg");
        break;
    }
    case 199693:
    {
        returnValue = F("Lachteweg");
        break;
    }
    case 199694:
    {
        returnValue = F("Lachtropweg");
        break;
    }
    case 199695:
    {
        returnValue = F("Lachtrupstr.");
        break;
    }
    case 199696:
    {
        returnValue = F("Lachtstr.");
        break;
    }
    case 199697:
    {
        returnValue = F("Lachtweg");
        break;
    }
    case 199698:
    {
        returnValue = F("Lachwaldstr.");
        break;
    }
    case 199699:
    {
        returnValue = F("Lachweg");
        break;
    }
    case 199700:
    {
        returnValue = F("Lachwies");
        break;
    }
    case 199701:
    {
        returnValue = F("Lachwiesen");
        break;
    }
    case 199702:
    {
        returnValue = F("Lachwiesenstr.");
        break;
    }
    case 199703:
    {
        returnValue = F("Lachwiesenweg");
        break;
    }
    case 199704:
    {
        returnValue = F("Lachäckerstr.");
        break;
    }
    case 199705:
    {
        returnValue = F("Lackenbergweg");
        break;
    }
    case 199706:
    {
        returnValue = F("Lackendorfer Str.");
        break;
    }
    case 199707:
    {
        returnValue = F("Lackendorfer Weg");
        break;
    }
    case 199708:
    {
        returnValue = F("Lackenhäuser");
        break;
    }
    case 199709:
    {
        returnValue = F("Lackenschusterweg");
        break;
    }
    case 199710:
    {
        returnValue = F("Lackerbauerstr.");
        break;
    }
    case 199711:
    {
        returnValue = F("Lackermannweg");
        break;
    }
    case 199712:
    {
        returnValue = F("Lackgässchen");
        break;
    }
    case 199713:
    {
        returnValue = F("Lackhütterweg");
        break;
    }
    case 199714:
    {
        returnValue = F("Lackland Lane");
        break;
    }
    case 199715:
    {
        returnValue = F("Lackmanns Hof");
        break;
    }
    case 199716:
    {
        returnValue = F("Lackmannweg");
        break;
    }
    case 199717:
    {
        returnValue = F("Lacknergäßchen");
        break;
    }
    case 199718:
    {
        returnValue = F("Lacknerstr.");
        break;
    }
    case 199719:
    {
        returnValue = F("Lackstr.");
        break;
    }
    case 199720:
    {
        returnValue = F("Lacombletstr.");
        break;
    }
    case 199721:
    {
        returnValue = F("Lacraweg");
        break;
    }
    case 199722:
    {
        returnValue = F("Ladagen Mühle");
        break;
    }
    case 199723:
    {
        returnValue = F("Ladaweg");
        break;
    }
    case 199724:
    {
        returnValue = F("Ladbergener Str.");
        break;
    }
    case 199725:
    {
        returnValue = F("Ladberger Str.");
        break;
    }
    case 199726:
    {
        returnValue = F("Laddringsweg");
        break;
    }
    case 199727:
    {
        returnValue = F("Ladebleek");
        break;
    }
    case 199728:
    {
        returnValue = F("Ladebower Chaussee");
        break;
    }
    case 199729:
    {
        returnValue = F("Ladeburger Str.");
        break;
    }
    case 199730:
    {
        returnValue = F("Ladeburger Weg");
        break;
    }
    case 199731:
    {
        returnValue = F("Ladebühne");
        break;
    }
    case 199732:
    {
        returnValue = F("Ladebühner Str.");
        break;
    }
    case 199733:
    {
        returnValue = F("Ladegaard");
        break;
    }
    case 199734:
    {
        returnValue = F("Ladegaststr.");
        break;
    }
    case 199735:
    {
        returnValue = F("Ladegäßlein");
        break;
    }
    case 199736:
    {
        returnValue = F("Ladehofplatz");
        break;
    }
    case 199737:
    {
        returnValue = F("Ladehofstr.");
        break;
    }
    case 199738:
    {
        returnValue = F("Ladeholzstr.");
        break;
    }
    case 199739:
    {
        returnValue = F("Ladekather Str.");
        break;
    }
    case 199740:
    {
        returnValue = F("Ladelunder Str.");
        break;
    }
    case 199741:
    {
        returnValue = F("Lademühlenfeld");
        break;
    }
    case 199742:
    {
        returnValue = F("Ladenbeker Furtweg");
        break;
    }
    case 199743:
    {
        returnValue = F("Ladenbeker Weg");
        break;
    }
    case 199744:
    {
        returnValue = F("Ladenbeker-Furtweg-Brücke");
        break;
    }
    case 199745:
    {
        returnValue = F("Ladenberg");
        break;
    }
    case 199746:
    {
        returnValue = F("Ladenberger Buckelweg");
        break;
    }
    case 199747:
    {
        returnValue = F("Ladenbergstr.");
        break;
    }
    case 199748:
    {
        returnValue = F("Ladenbucher Hangweg");
        break;
    }
    case 199749:
    {
        returnValue = F("Ladenburger Fußweg");
        break;
    }
    case 199750:
    {
        returnValue = F("Ladenburger Str.");
        break;
    }
    case 199751:
    {
        returnValue = F("Ladenburger Weg");
        break;
    }
    case 199752:
    {
        returnValue = F("Ladenburger Weg (ehemalige Römerstr.)");
        break;
    }
    case 199753:
    {
        returnValue = F("Ladenburgstr.");
        break;
    }
    case 199754:
    {
        returnValue = F("Ladendaystr.");
        break;
    }
    case 199755:
    {
        returnValue = F("Ladengasse");
        break;
    }
    case 199756:
    {
        returnValue = F("Ladenmachergasse");
        break;
    }
    case 199757:
    {
        returnValue = F("Ladenpassage");
        break;
    }
    case 199758:
    {
        returnValue = F("Ladenrampenweg");
        break;
    }
    case 199759:
    {
        returnValue = F("Ladenspelderstr.");
        break;
    }
    case 199760:
    {
        returnValue = F("Ladenstr.");
        break;
    }
    case 199761:
    {
        returnValue = F("Ladenthin");
        break;
    }
    case 199762:
    {
        returnValue = F("Ladenthiner Weg");
        break;
    }
    case 199763:
    {
        returnValue = F("Ladenweg");
        break;
    }
    case 199764:
    {
        returnValue = F("Ladenzeile");
        break;
    }
    case 199765:
    {
        returnValue = F("Laderholzer Str.");
        break;
    }
    case 199766:
    {
        returnValue = F("Ladestr.");
        break;
    }
    case 199767:
    {
        returnValue = F("Ladestr. Drögeheide");
        break;
    }
    case 199768:
    {
        returnValue = F("Ladestr. Siegen-Ost");
        break;
    }
    case 199769:
    {
        returnValue = F("Ladestr. mit Seitenrampe und Kopframpe");
        break;
    }
    case 199770:
    {
        returnValue = F("Ladeweg");
        break;
    }
    case 199771:
    {
        returnValue = F("Ladewigstr.");
        break;
    }
    case 199772:
    {
        returnValue = F("Ladhof");
        break;
    }
    case 199773:
    {
        returnValue = F("Ladhofstr.");
        break;
    }
    case 199774:
    {
        returnValue = F("Ladillenring");
        break;
    }
    case 199775:
    {
        returnValue = F("Ladillenweg");
        break;
    }
    case 199776:
    {
        returnValue = F("Ladislaus-Winterstein-Ring");
        break;
    }
    case 199777:
    {
        returnValue = F("Ladisweg");
        break;
    }
    case 199778:
    {
        returnValue = F("Ladstattweg");
        break;
    }
    case 199779:
    {
        returnValue = F("Ladstädterweg");
        break;
    }
    case 199780:
    {
        returnValue = F("Laeisenhofer Str.");
        break;
    }
    case 199781:
    {
        returnValue = F("Laer");
        break;
    }
    case 199782:
    {
        returnValue = F("Laerbrockstr.");
        break;
    }
    case 199783:
    {
        returnValue = F("Laerbrockweg");
        break;
    }
    case 199784:
    {
        returnValue = F("Laeregge");
        break;
    }
    case 199785:
    {
        returnValue = F("Laerer Landweg");
        break;
    }
    case 199786:
    {
        returnValue = F("Laerer Str.");
        break;
    }
    case 199787:
    {
        returnValue = F("Laerfeldstr.");
        break;
    }
    case 199788:
    {
        returnValue = F("Laerheider Weg");
        break;
    }
    case 199789:
    {
        returnValue = F("Laerheidestr.");
        break;
    }
    case 199790:
    {
        returnValue = F("Laerholzstr.");
        break;
    }
    case 199791:
    {
        returnValue = F("Laerkamp");
        break;
    }
    case 199792:
    {
        returnValue = F("Laersche Str.");
        break;
    }
    case 199793:
    {
        returnValue = F("Laerscher Weg");
        break;
    }
    case 199794:
    {
        returnValue = F("Laerstr.");
        break;
    }
    case 199795:
    {
        returnValue = F("Laersweg");
        break;
    }
    case 199796:
    {
        returnValue = F("Laerweg");
        break;
    }
    case 199797:
    {
        returnValue = F("Laevener Str.");
        break;
    }
    case 199798:
    {
        returnValue = F("Lafatscherjochstr.");
        break;
    }
    case 199799:
    {
        returnValue = F("Lafettenweg");
        break;
    }
    case 199800:
    {
        returnValue = F("Laffenau");
        break;
    }
    case 199801:
    {
        returnValue = F("Laffenauer Str.");
        break;
    }
    case 199802:
    {
        returnValue = F("Lafferder Str.");
        break;
    }
    case 199803:
    {
        returnValue = F("Lafferder Weg");
        break;
    }
    case 199804:
    {
        returnValue = F("Laffertstr.");
        break;
    }
    case 199805:
    {
        returnValue = F("Lafontainestr.");
        break;
    }
    case 199806:
    {
        returnValue = F("Lagally-Garten");
        break;
    }
    case 199807:
    {
        returnValue = F("Lagarden-Str.");
        break;
    }
    case 199808:
    {
        returnValue = F("Lagauer Weg");
        break;
    }
    case 199809:
    {
        returnValue = F("Lage");
        break;
    }
    case 199810:
    {
        returnValue = F("Lagedeich");
        break;
    }
    case 199811:
    {
        returnValue = F("Lagemanns Hof");
        break;
    }
    case 199812:
    {
        returnValue = F("Lagemannstr.");
        break;
    }
    case 199813:
    {
        returnValue = F("Lagenburg");
        break;
    }
    case 199814:
    {
        returnValue = F("Lagendorf");
        break;
    }
    case 199815:
    {
        returnValue = F("Lagendorfer Weg");
        break;
    }
    case 199816:
    {
        returnValue = F("Lagenhorst");
        break;
    }
    case 199817:
    {
        returnValue = F("Lagenweg");
        break;
    }
    case 199818:
    {
        returnValue = F("Lager");
        break;
    }
    case 199819:
    {
        returnValue = F("Lager Allee");
        break;
    }
    case 199820:
    {
        returnValue = F("Lager Bahn");
        break;
    }
    case 199821:
    {
        returnValue = F("Lager Busch");
        break;
    }
    case 199822:
    {
        returnValue = F("Lager Damm");
        break;
    }
    case 199823:
    {
        returnValue = F("Lager Str.");
        break;
    }
    case 199824:
    {
        returnValue = F("Lager Weg");
        break;
    }
    case 199825:
    {
        returnValue = F("Lagerdamm");
        break;
    }
    case 199826:
    {
        returnValue = F("Lagerfeld");
        break;
    }
    case 199827:
    {
        returnValue = F("Lagerfeldstr.");
        break;
    }
    case 199828:
    {
        returnValue = F("Lagerfeuerplatz");
        break;
    }
    case 199829:
    {
        returnValue = F("Lagergrenze");
        break;
    }
    case 199830:
    {
        returnValue = F("Lagerhausgasse");
        break;
    }
    case 199831:
    {
        returnValue = F("Lagerhausgrünfläche");
        break;
    }
    case 199832:
    {
        returnValue = F("Lagerhausplatzgrünfläche");
        break;
    }
    case 199833:
    {
        returnValue = F("Lagerhausstr.");
        break;
    }
    case 199834:
    {
        returnValue = F("Lagerhausweg");
        break;
    }
    case 199835:
    {
        returnValue = F("Lagerheider Weg");
        break;
    }
    case 199836:
    {
        returnValue = F("Lagerhofstr.");
        break;
    }
    case 199837:
    {
        returnValue = F("Lagerlechfelder Str.");
        break;
    }
    case 199838:
    {
        returnValue = F("Lagerlöfstr.");
        break;
    }
    case 199839:
    {
        returnValue = F("Lagerlöfstr. 15-21");
        break;
    }
    case 199840:
    {
        returnValue = F("Lagerplatz");
        break;
    }
    case 199841:
    {
        returnValue = F("Lagerplatz Obstkisten");
        break;
    }
    case 199842:
    {
        returnValue = F("Lagerplatz PreZero Service Süd GmbH");
        break;
    }
    case 199843:
    {
        returnValue = F("Lagerplatzstr.");
        break;
    }
    case 199844:
    {
        returnValue = F("Lagerplatzweg");
        break;
    }
    case 199845:
    {
        returnValue = F("Lagerraum A");
        break;
    }
    case 199846:
    {
        returnValue = F("Lagerraum B");
        break;
    }
    case 199847:
    {
        returnValue = F("Lagerschneise");
        break;
    }
    case 199848:
    {
        returnValue = F("Lagerstr.");
        break;
    }
    case 199849:
    {
        returnValue = F("Lagerweg");
        break;
    }
    case 199850:
    {
        returnValue = F("Lagerzstr.");
        break;
    }
    case 199851:
    {
        returnValue = F("Lagesbüttelstr.");
        break;
    }
    case 199852:
    {
        returnValue = F("Lagesche Str.");
        break;
    }
    case 199853:
    {
        returnValue = F("Lagestr.");
        break;
    }
    case 199854:
    {
        returnValue = F("Lageweg");
        break;
    }
    case 199855:
    {
        returnValue = F("Lagewiesenstr.");
        break;
    }
    case 199856:
    {
        returnValue = F("Laggenbecker Str.");
        break;
    }
    case 199857:
    {
        returnValue = F("Lagkamp");
        break;
    }
    case 199858:
    {
        returnValue = F("Lagnitzer Str.");
        break;
    }
    case 199859:
    {
        returnValue = F("Lagnitzer Weg");
        break;
    }
    case 199860:
    {
        returnValue = F("Lagrangestr.");
        break;
    }
    case 199861:
    {
        returnValue = F("Lagune");
        break;
    }
    case 199862:
    {
        returnValue = F("Lagunenblick");
        break;
    }
    case 199863:
    {
        returnValue = F("Lagweg");
        break;
    }
    case 199864:
    {
        returnValue = F("Lagwiesenweg");
        break;
    }
    case 199865:
    {
        returnValue = F("Lahanger");
        break;
    }
    case 199866:
    {
        returnValue = F("Lahauser Str.");
        break;
    }
    case 199867:
    {
        returnValue = F("Lahberg");
        break;
    }
    case 199868:
    {
        returnValue = F("Lahbergweg");
        break;
    }
    case 199869:
    {
        returnValue = F("Lahbreite");
        break;
    }
    case 199870:
    {
        returnValue = F("Lahburg");
        break;
    }
    case 199871:
    {
        returnValue = F("Lahder Str.");
        break;
    }
    case 199872:
    {
        returnValue = F("Laheiter Str.");
        break;
    }
    case 199873:
    {
        returnValue = F("Laher Heide");
        break;
    }
    case 199874:
    {
        returnValue = F("Laher Kirchweg");
        break;
    }
    case 199875:
    {
        returnValue = F("Laher-Feld-Str.");
        break;
    }
    case 199876:
    {
        returnValue = F("Laheweg");
        break;
    }
    case 199877:
    {
        returnValue = F("Lahgarten");
        break;
    }
    case 199878:
    {
        returnValue = F("Lahholz");
        break;
    }
    case 199879:
    {
        returnValue = F("Lahkamp");
        break;
    }
    case 199880:
    {
        returnValue = F("Lahlkammweg");
        break;
    }
    case 199881:
    {
        returnValue = F("Lahmannring");
        break;
    }
    case 199882:
    {
        returnValue = F("Lahmannstr.");
        break;
    }
    case 199883:
    {
        returnValue = F("Lahmbecke");
        break;
    }
    case 199884:
    {
        returnValue = F("Lahmburger Str.");
        break;
    }
    case 199885:
    {
        returnValue = F("Lahmeich");
        break;
    }
    case 199886:
    {
        returnValue = F("Lahmenstraat");
        break;
    }
    case 199887:
    {
        returnValue = F("Lahmer Str.");
        break;
    }
    case 199888:
    {
        returnValue = F("Lahmer Weg");
        break;
    }
    case 199889:
    {
        returnValue = F("Lahmeyerstr.");
        break;
    }
    case 199890:
    {
        returnValue = F("Lahmorgen");
        break;
    }
    case 199891:
    {
        returnValue = F("Lahmpatschenweg");
        break;
    }
    case 199892:
    {
        returnValue = F("Lahmsbeck");
        break;
    }
    case 199893:
    {
        returnValue = F("Lahmstr.");
        break;
    }
    case 199894:
    {
        returnValue = F("Lahn-Dill-Str.");
        break;
    }
    case 199895:
    {
        returnValue = F("Lahn-Eder-Str.");
        break;
    }
    case 199896:
    {
        returnValue = F("Lahn-Lagerhaus");
        break;
    }
    case 199897:
    {
        returnValue = F("Lahnaue");
        break;
    }
    case 199898:
    {
        returnValue = F("Lahnbeckestr.");
        break;
    }
    case 199899:
    {
        returnValue = F("Lahnberg");
        break;
    }
    case 199900:
    {
        returnValue = F("Lahnbergblick");
        break;
    }
    case 199901:
    {
        returnValue = F("Lahnbergstr.");
        break;
    }
    case 199902:
    {
        returnValue = F("Lahnbergweg");
        break;
    }
    case 199903:
    {
        returnValue = F("Lahnblick");
        break;
    }
    case 199904:
    {
        returnValue = F("Lahneckstr.");
        break;
    }
    case 199905:
    {
        returnValue = F("Lahner Höhenweg");
        break;
    }
    case 199906:
    {
        returnValue = F("Lahner Kirchweg");
        break;
    }
    case 199907:
    {
        returnValue = F("Lahner Str.");
        break;
    }
    case 199908:
    {
        returnValue = F("Lahnergasse");
        break;
    }
    case 199909:
    {
        returnValue = F("Lahneweg");
        break;
    }
    case 199910:
    {
        returnValue = F("Lahnewiesstr.");
        break;
    }
    case 199911:
    {
        returnValue = F("Lahnfelsenstr.");
        break;
    }
    case 199912:
    {
        returnValue = F("Lahngasse");
        break;
    }
    case 199913:
    {
        returnValue = F("Lahngrabenweg");
        break;
    }
    case 199914:
    {
        returnValue = F("Lahnhof");
        break;
    }
    case 199915:
    {
        returnValue = F("Lahnhofstr.");
        break;
    }
    case 199916:
    {
        returnValue = F("Lahnhofweg");
        break;
    }
    case 199917:
    {
        returnValue = F("Lahnhöhenweg");
        break;
    }
    case 199918:
    {
        returnValue = F("Lahninsel");
        break;
    }
    case 199919:
    {
        returnValue = F("Lahnparkstr.");
        break;
    }
    case 199920:
    {
        returnValue = F("Lahnpassage");
        break;
    }
    case 199921:
    {
        returnValue = F("Lahnradweg");
        break;
    }
    case 199922:
    {
        returnValue = F("Lahnscheider Weg");
        break;
    }
    case 199923:
    {
        returnValue = F("Lahnsteiner Str.");
        break;
    }
    case 199924:
    {
        returnValue = F("Lahnstr.");
        break;
    }
    case 199925:
    {
        returnValue = F("Lahntalstr.");
        break;
    }
    case 199926:
    {
        returnValue = F("Lahntor");
        break;
    }
    case 199927:
    {
        returnValue = F("Lahntorpark");
        break;
    }
    case 199928:
    {
        returnValue = F("Lahnuferstr.");
        break;
    }
    case 199929:
    {
        returnValue = F("Lahnuferweg");
        break;
    }
    case 199930:
    {
        returnValue = F("Lahnweg");
        break;
    }
    case 199931:
    {
        returnValue = F("Lahnweg 1");
        break;
    }
    case 199932:
    {
        returnValue = F("Lahnweg 2");
        break;
    }
    case 199933:
    {
        returnValue = F("Lahnweg 3");
        break;
    }
    case 199934:
    {
        returnValue = F("Lahnweg 4");
        break;
    }
    case 199935:
    {
        returnValue = F("Lahnweg 5");
        break;
    }
    case 199936:
    {
        returnValue = F("Lahnwegsberg");
        break;
    }
    case 199937:
    {
        returnValue = F("Lahnwiesen");
        break;
    }
    case 199938:
    {
        returnValue = F("Lahr-Rottweil");
        break;
    }
    case 199939:
    {
        returnValue = F("Lahrer Str.");
        break;
    }
    case 199940:
    {
        returnValue = F("Lahrer Weg");
        break;
    }
    case 199941:
    {
        returnValue = F("Lahresweg");
        break;
    }
    case 199942:
    {
        returnValue = F("Lahrgasse");
        break;
    }
    case 199943:
    {
        returnValue = F("Lahriede");
        break;
    }
    case 199944:
    {
        returnValue = F("Lahrkampstr.");
        break;
    }
    case 199945:
    {
        returnValue = F("Lahrring");
        break;
    }
    case 199946:
    {
        returnValue = F("Lahrstr.");
        break;
    }
    case 199947:
    {
        returnValue = F("Lahrsweg");
        break;
    }
    case 199948:
    {
        returnValue = F("Lahräckerstr.");
        break;
    }
    case 199949:
    {
        returnValue = F("Lahsbachstr.");
        break;
    }
    case 199950:
    {
        returnValue = F("Lahstedter Weg");
        break;
    }
    case 199951:
    {
        returnValue = F("Lahstiegsweg");
        break;
    }
    case 199952:
    {
        returnValue = F("Lahstr.");
        break;
    }
    case 199953:
    {
        returnValue = F("Lahtistr.");
        break;
    }
    case 199954:
    {
        returnValue = F("Lahusenstr.");
        break;
    }
    case 199955:
    {
        returnValue = F("Lahweg");
        break;
    }
    case 199956:
    {
        returnValue = F("Lahwiese");
        break;
    }
    case 199957:
    {
        returnValue = F("Lahwiesen");
        break;
    }
    case 199958:
    {
        returnValue = F("Laibach");
        break;
    }
    case 199959:
    {
        returnValue = F("Laibacher Str.");
        break;
    }
    case 199960:
    {
        returnValue = F("Laibacher Weg");
        break;
    }
    case 199961:
    {
        returnValue = F("Laibachpark");
        break;
    }
    case 199962:
    {
        returnValue = F("Laibachsgrund");
        break;
    }
    case 199963:
    {
        returnValue = F("Laibachstr.");
        break;
    }
    case 199964:
    {
        returnValue = F("Laibe");
        break;
    }
    case 199965:
    {
        returnValue = F("Laiber");
        break;
    }
    case 199966:
    {
        returnValue = F("Laiberberg");
        break;
    }
    case 199967:
    {
        returnValue = F("Laiberbergstr.");
        break;
    }
    case 199968:
    {
        returnValue = F("Laibergasse");
        break;
    }
    case 199969:
    {
        returnValue = F("Laibernstr.");
        break;
    }
    case 199970:
    {
        returnValue = F("Laiberstr.");
        break;
    }
    case 199971:
    {
        returnValue = F("Laiberweg");
        break;
    }
    case 199972:
    {
        returnValue = F("Laibgasse");
        break;
    }
    case 199973:
    {
        returnValue = F("Laibgärten");
        break;
    }
    case 199974:
    {
        returnValue = F("Laiblache");
        break;
    }
    case 199975:
    {
        returnValue = F("Laiblestr.");
        break;
    }
    case 199976:
    {
        returnValue = F("Laibleweg");
        break;
    }
    case 199977:
    {
        returnValue = F("Laiblinger Weg");
        break;
    }
    case 199978:
    {
        returnValue = F("Laiblinspark");
        break;
    }
    case 199979:
    {
        returnValue = F("Laiblinsplatz");
        break;
    }
    case 199980:
    {
        returnValue = F("Laiblinstegstr.");
        break;
    }
    case 199981:
    {
        returnValue = F("Laibnerstr.");
        break;
    }
    case 199982:
    {
        returnValue = F("Laibstadt");
        break;
    }
    case 199983:
    {
        returnValue = F("Laibstr.");
        break;
    }
    case 199984:
    {
        returnValue = F("Laibäcker");
        break;
    }
    case 199985:
    {
        returnValue = F("Laichanger");
        break;
    }
    case 199986:
    {
        returnValue = F("Laicherttraufweg");
        break;
    }
    case 199987:
    {
        returnValue = F("Laichfeldstr.");
        break;
    }
    case 199988:
    {
        returnValue = F("Laichinger Höfle");
        break;
    }
    case 199989:
    {
        returnValue = F("Laichinger Str.");
        break;
    }
    case 199990:
    {
        returnValue = F("Laichinger Weg");
        break;
    }
    case 199991:
    {
        returnValue = F("Laichingerstr.");
        break;
    }
    case 199992:
    {
        returnValue = F("Laichlestr.");
        break;
    }
    case 199993:
    {
        returnValue = F("Laichlesweg");
        break;
    }
    case 199994:
    {
        returnValue = F("Laichleweg");
        break;
    }
    case 199995:
    {
        returnValue = F("Laichlinger Str.");
        break;
    }
    case 199996:
    {
        returnValue = F("Laichlinger Weg");
        break;
    }
    case 199997:
    {
        returnValue = F("Laichstr.");
        break;
    }
    case 199998:
    {
        returnValue = F("Laichstätter Siedlung");
        break;
    }
    case 199999:
    {
        returnValue = F("Laichstätter Weg");
        break;
    }
    case 200000:
    {
        returnValue = F("Laidlebstr.");
        break;
    }
    case 200001:
    {
        returnValue = F("Laidolfstr.");
        break;
    }
    case 200002:
    {
        returnValue = F("Laidorf");
        break;
    }
    case 200003:
    {
        returnValue = F("Laienbergstr.");
        break;
    }
    case 200004:
    {
        returnValue = F("Laiengärten");
        break;
    }
    case 200005:
    {
        returnValue = F("Laienstr.");
        break;
    }
    case 200006:
    {
        returnValue = F("Laienweg");
        break;
    }
    case 200007:
    {
        returnValue = F("Laierbergstr.");
        break;
    }
    case 200008:
    {
        returnValue = F("Laierfeldstr.");
        break;
    }
    case 200009:
    {
        returnValue = F("Laiernstr.");
        break;
    }
    case 200010:
    {
        returnValue = F("Laierserweg");
        break;
    }
    case 200011:
    {
        returnValue = F("Laierstr.");
        break;
    }
    case 200012:
    {
        returnValue = F("Laierweg");
        break;
    }
    case 200013:
    {
        returnValue = F("Laieweg");
        break;
    }
    case 200014:
    {
        returnValue = F("Laihleweg");
        break;
    }
    case 200015:
    {
        returnValue = F("Laijeweg");
        break;
    }
    case 200016:
    {
        returnValue = F("Laiken");
        break;
    }
    case 200017:
    {
        returnValue = F("Laikier");
        break;
    }
    case 200018:
    {
        returnValue = F("Lailbergstr.");
        break;
    }
    case 200019:
    {
        returnValue = F("Lailensäckerstr.");
        break;
    }
    case 356428:
    {
        returnValue = F("l-Gestell");
        break;
    }
    case 356429:
    {
        returnValue = F("landgarten");
        break;
    }
    case 356430:
    {
        returnValue = F("landwirschaftlicher Weg");
        break;
    }
    case 356431:
    {
        returnValue = F("langer Weg");
        break;
    }
    case 356432:
    {
        returnValue = F("lanzenhorstschneise");
        break;
    }
    case 356433:
    {
        returnValue = F("lerchenstr.");
        break;
    }
    }
    return returnValue;
}
