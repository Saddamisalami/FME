#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameR1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 258337:
    {
        returnValue = F("R");
        break;
    }
    case 258338:
    {
        returnValue = F("R 1");
        break;
    }
    case 258339:
    {
        returnValue = F("R 4");
        break;
    }
    case 258340:
    {
        returnValue = F("R A1");
        break;
    }
    case 258341:
    {
        returnValue = F("R-Weg");
        break;
    }
    case 258342:
    {
        returnValue = F("R. Bonsack-Weg");
        break;
    }
    case 258343:
    {
        returnValue = F("R. H. Baumgärtel-Allee");
        break;
    }
    case 258344:
    {
        returnValue = F("R. Kirchheim-Weg");
        break;
    }
    case 258345:
    {
        returnValue = F("R. Philippi-Pfad");
        break;
    }
    case 258346:
    {
        returnValue = F("R.-Gleichauf-Str.");
        break;
    }
    case 258347:
    {
        returnValue = F("R.-Koeppel-Str.");
        break;
    }
    case 258348:
    {
        returnValue = F("R.-Schirrmann-Str.");
        break;
    }
    case 258349:
    {
        returnValue = F("R.-Wagner-Str.");
        break;
    }
    case 258350:
    {
        returnValue = F("R.A.D. Weg");
        break;
    }
    case 258351:
    {
        returnValue = F("R1");
        break;
    }
    case 258352:
    {
        returnValue = F("R11");
        break;
    }
    case 258353:
    {
        returnValue = F("R13");
        break;
    }
    case 258354:
    {
        returnValue = F("R2");
        break;
    }
    case 258355:
    {
        returnValue = F("R22");
        break;
    }
    case 258356:
    {
        returnValue = F("R27");
        break;
    }
    case 258357:
    {
        returnValue = F("R28");
        break;
    }
    case 258358:
    {
        returnValue = F("R3");
        break;
    }
    case 258359:
    {
        returnValue = F("R4");
        break;
    }
    case 258360:
    {
        returnValue = F("R4 Hohengebrachinger Str.");
        break;
    }
    case 258361:
    {
        returnValue = F("R5");
        break;
    }
    case 258362:
    {
        returnValue = F("R6, Usatalradweg");
        break;
    }
    case 258363:
    {
        returnValue = F("R8");
        break;
    }
    case 258364:
    {
        returnValue = F("R8, R47");
        break;
    }
    case 258365:
    {
        returnValue = F("RAVeL L47");
        break;
    }
    case 258366:
    {
        returnValue = F("RB 3");
        break;
    }
    case 258367:
    {
        returnValue = F("RC Rhenus");
        break;
    }
    case 258368:
    {
        returnValue = F("REAM-Str.");
        break;
    }
    case 258369:
    {
        returnValue = F("RTK Süd");
        break;
    }
    case 258370:
    {
        returnValue = F("RTS - Siedlung");
        break;
    }
    case 258371:
    {
        returnValue = F("RTS-Siedlung");
        break;
    }
    case 258372:
    {
        returnValue = F("RTS-Str.");
        break;
    }
    case 258373:
    {
        returnValue = F("RUWIDO-Bogen");
        break;
    }
    case 258374:
    {
        returnValue = F("RW 2 PWV");
        break;
    }
    case 258375:
    {
        returnValue = F("RW 2 PWV, WW weiß-grün PWV");
        break;
    }
    case 258376:
    {
        returnValue = F("RW 4 PWV");
        break;
    }
    case 258377:
    {
        returnValue = F("RW 5");
        break;
    }
    case 258378:
    {
        returnValue = F("RW-Park");
        break;
    }
    case 258379:
    {
        returnValue = F("RWE-Park");
        break;
    }
    case 258380:
    {
        returnValue = F("RWE-Siedlung");
        break;
    }
    case 258381:
    {
        returnValue = F("RWE-Str.");
        break;
    }
    case 258382:
    {
        returnValue = F("RZ Passage");
        break;
    }
    case 258383:
    {
        returnValue = F("Raabenbörnelweg");
        break;
    }
    case 258384:
    {
        returnValue = F("Raabengasse");
        break;
    }
    case 258385:
    {
        returnValue = F("Raaberg");
        break;
    }
    case 258386:
    {
        returnValue = F("Raabestr.");
        break;
    }
    case 258387:
    {
        returnValue = F("Raabeweg");
        break;
    }
    case 258388:
    {
        returnValue = F("Raabgarten");
        break;
    }
    case 258389:
    {
        returnValue = F("Raabgasse");
        break;
    }
    case 258390:
    {
        returnValue = F("Raabgässchen");
        break;
    }
    case 258391:
    {
        returnValue = F("Raabsgasse");
        break;
    }
    case 258392:
    {
        returnValue = F("Raabstr.");
        break;
    }
    case 258393:
    {
        returnValue = F("Raabtalstr.");
        break;
    }
    case 258394:
    {
        returnValue = F("Raade");
        break;
    }
    case 258395:
    {
        returnValue = F("Raaden");
        break;
    }
    case 258396:
    {
        returnValue = F("Raadener Weg");
        break;
    }
    case 258397:
    {
        returnValue = F("Raadter Str.");
        break;
    }
    case 258398:
    {
        returnValue = F("Raafstr.");
        break;
    }
    case 258399:
    {
        returnValue = F("Raak");
        break;
    }
    case 258400:
    {
        returnValue = F("Raakamp");
        break;
    }
    case 258401:
    {
        returnValue = F("Raakamper Weg");
        break;
    }
    case 258402:
    {
        returnValue = F("Raakenbeckweg");
        break;
    }
    case 258403:
    {
        returnValue = F("Raakeweg");
        break;
    }
    case 258404:
    {
        returnValue = F("Raakheide");
        break;
    }
    case 258405:
    {
        returnValue = F("Raakmoorgrund");
        break;
    }
    case 258406:
    {
        returnValue = F("Raakower Str.");
        break;
    }
    case 258407:
    {
        returnValue = F("Raakower Teichstr.");
        break;
    }
    case 258408:
    {
        returnValue = F("Raaksheide");
        break;
    }
    case 258409:
    {
        returnValue = F("Raaland");
        break;
    }
    case 258410:
    {
        returnValue = F("Raalandsweg");
        break;
    }
    case 258411:
    {
        returnValue = F("Raalter Str.");
        break;
    }
    case 258412:
    {
        returnValue = F("Raamfeld");
        break;
    }
    case 258413:
    {
        returnValue = F("Raamkamp");
        break;
    }
    case 258414:
    {
        returnValue = F("Raamstieg");
        break;
    }
    case 258415:
    {
        returnValue = F("Raananastr.");
        break;
    }
    case 258416:
    {
        returnValue = F("Raanwai");
        break;
    }
    case 258417:
    {
        returnValue = F("Raapeweg");
        break;
    }
    case 258418:
    {
        returnValue = F("Raarangerweg");
        break;
    }
    case 258419:
    {
        returnValue = F("Raaschstr.");
        break;
    }
    case 258420:
    {
        returnValue = F("Raasdorfer Höhe");
        break;
    }
    case 258421:
    {
        returnValue = F("Raasdorfer Leichenweg");
        break;
    }
    case 258422:
    {
        returnValue = F("Raasdorfer Str.");
        break;
    }
    case 258423:
    {
        returnValue = F("Raasweg");
        break;
    }
    case 258424:
    {
        returnValue = F("Raatschluch");
        break;
    }
    case 258425:
    {
        returnValue = F("Raatschweg");
        break;
    }
    case 258426:
    {
        returnValue = F("Raawisch");
        break;
    }
    case 258427:
    {
        returnValue = F("Rabaer Dorfstr.");
        break;
    }
    case 258428:
    {
        returnValue = F("Rabahnweg");
        break;
    }
    case 258429:
    {
        returnValue = F("Rabaliattistr.");
        break;
    }
    case 258430:
    {
        returnValue = F("Rabanser Weg");
        break;
    }
    case 258431:
    {
        returnValue = F("Rabanstr.");
        break;
    }
    case 258432:
    {
        returnValue = F("Rabanus-Maurus-Str.");
        break;
    }
    case 258433:
    {
        returnValue = F("Rabanusstr.");
        break;
    }
    case 258434:
    {
        returnValue = F("Rabatten");
        break;
    }
    case 258435:
    {
        returnValue = F("Rabattenweg");
        break;
    }
    case 258436:
    {
        returnValue = F("Rabatzer Str.");
        break;
    }
    case 258437:
    {
        returnValue = F("Rabbenmoor");
        break;
    }
    case 258438:
    {
        returnValue = F("Rabbenweg");
        break;
    }
    case 258439:
    {
        returnValue = F("Rabber Kirchweg");
        break;
    }
    case 258440:
    {
        returnValue = F("Rabbethgestr.");
        break;
    }
    case 258441:
    {
        returnValue = F("Rabbi Meir-Gärtchen");
        break;
    }
    case 258442:
    {
        returnValue = F("Rabbiner-Grünewald-Platz");
        break;
    }
    case 258443:
    {
        returnValue = F("Rabbiner-Helfgott-Ring");
        break;
    }
    case 258444:
    {
        returnValue = F("Rabbiner-Joseph-Schwarz-Platz");
        break;
    }
    case 258445:
    {
        returnValue = F("Rabbiner-Neumark-Weg");
        break;
    }
    case 258446:
    {
        returnValue = F("Rabbiner-Stern-Weg");
        break;
    }
    case 258447:
    {
        returnValue = F("Rabboltstr.");
        break;
    }
    case 258448:
    {
        returnValue = F("Rabbruch");
        break;
    }
    case 258449:
    {
        returnValue = F("Rabeckbreite");
        break;
    }
    case 258450:
    {
        returnValue = F("Rabegasse");
        break;
    }
    case 258451:
    {
        returnValue = F("Rabelsacker");
        break;
    }
    case 258452:
    {
        returnValue = F("Rabelsberg");
        break;
    }
    case 258453:
    {
        returnValue = F("Rabelsbergstr.");
        break;
    }
    case 258454:
    {
        returnValue = F("Rabelsund");
        break;
    }
    case 258455:
    {
        returnValue = F("Raben");
        break;
    }
    case 258456:
    {
        returnValue = F("Raben Steinfelder Weg");
        break;
    }
    case 258457:
    {
        returnValue = F("Raben Steinfelderweg");
        break;
    }
    case 258458:
    {
        returnValue = F("Rabenacker");
        break;
    }
    case 258459:
    {
        returnValue = F("Rabenacksteig");
        break;
    }
    case 258460:
    {
        returnValue = F("Rabenallee");
        break;
    }
    case 258461:
    {
        returnValue = F("Rabenaue");
        break;
    }
    case 258462:
    {
        returnValue = F("Rabenauer Fußweg");
        break;
    }
    case 258463:
    {
        returnValue = F("Rabenauer Grund");
        break;
    }
    case 258464:
    {
        returnValue = F("Rabenauer Str.");
        break;
    }
    case 258465:
    {
        returnValue = F("Rabenauer Str./A.-Osswald-Platz");
        break;
    }
    case 258466:
    {
        returnValue = F("Rabenauer Weg");
        break;
    }
    case 258467:
    {
        returnValue = F("Rabenauschneise");
        break;
    }
    case 258468:
    {
        returnValue = F("Rabenaustr.");
        break;
    }
    case 258469:
    {
        returnValue = F("Rabenbaumbruch Schneise");
        break;
    }
    case 258470:
    {
        returnValue = F("Rabenberg");
        break;
    }
    case 258471:
    {
        returnValue = F("Rabenberger Str.");
        break;
    }
    case 258472:
    {
        returnValue = F("Rabenbergstr.");
        break;
    }
    case 258473:
    {
        returnValue = F("Rabenbergweg");
        break;
    }
    case 258474:
    {
        returnValue = F("Rabenboden");
        break;
    }
    case 258475:
    {
        returnValue = F("Rabenbornsweg");
        break;
    }
    case 258476:
    {
        returnValue = F("Rabenbreite");
        break;
    }
    case 258477:
    {
        returnValue = F("Rabenbrokweg");
        break;
    }
    case 258478:
    {
        returnValue = F("Rabenbrunn");
        break;
    }
    case 258479:
    {
        returnValue = F("Rabenbrücke");
        break;
    }
    case 258480:
    {
        returnValue = F("Rabenbusch");
        break;
    }
    case 258481:
    {
        returnValue = F("Rabenbühlstr.");
        break;
    }
    case 258482:
    {
        returnValue = F("Rabenden");
        break;
    }
    case 258483:
    {
        returnValue = F("Rabendener Str.");
        break;
    }
    case 258484:
    {
        returnValue = F("Rabeneck");
        break;
    }
    case 258485:
    {
        returnValue = F("Rabenecksheide");
        break;
    }
    case 258486:
    {
        returnValue = F("Rabeneckstr.");
        break;
    }
    case 258487:
    {
        returnValue = F("Rabeneiche");
        break;
    }
    case 258488:
    {
        returnValue = F("Rabeneichsweg");
        break;
    }
    case 258489:
    {
        returnValue = F("Rabener Passage");
        break;
    }
    case 258490:
    {
        returnValue = F("Rabener Weg");
        break;
    }
    case 258491:
    {
        returnValue = F("Rabenerstr.");
        break;
    }
    case 258492:
    {
        returnValue = F("Rabenfelde");
        break;
    }
    case 258493:
    {
        returnValue = F("Rabenfelsenhangweg");
        break;
    }
    case 258494:
    {
        returnValue = F("Rabenfelsenweg");
        break;
    }
    case 258495:
    {
        returnValue = F("Rabenfelsstr.");
        break;
    }
    case 258496:
    {
        returnValue = F("Rabenfloßweg");
        break;
    }
    case 258497:
    {
        returnValue = F("Rabenflugstr.");
        break;
    }
    case 258498:
    {
        returnValue = F("Rabengasse");
        break;
    }
    case 258499:
    {
        returnValue = F("Rabenhainstr.");
        break;
    }
    case 258500:
    {
        returnValue = F("Rabenhauptstr.");
        break;
    }
    case 258501:
    {
        returnValue = F("Rabenhausen");
        break;
    }
    case 258502:
    {
        returnValue = F("Rabenhausträssle");
        break;
    }
    case 258503:
    {
        returnValue = F("Rabenhof");
        break;
    }
    case 258504:
    {
        returnValue = F("Rabenhofstr.");
        break;
    }
    case 258505:
    {
        returnValue = F("Rabenholder Hohle");
        break;
    }
    case 258506:
    {
        returnValue = F("Rabenholzstr.");
        break;
    }
    case 258507:
    {
        returnValue = F("Rabenhornstr.");
        break;
    }
    case 258508:
    {
        returnValue = F("Rabenhorst");
        break;
    }
    case 258509:
    {
        returnValue = F("Rabenhorster Damm");
        break;
    }
    case 258510:
    {
        returnValue = F("Rabenhorster Weg");
        break;
    }
    case 258511:
    {
        returnValue = F("Rabenhorststr.");
        break;
    }
    case 258512:
    {
        returnValue = F("Rabeninselbrücke");
        break;
    }
    case 258513:
    {
        returnValue = F("Rabenkamp");
        break;
    }
    case 258514:
    {
        returnValue = F("Rabenkellerweg");
        break;
    }
    case 258515:
    {
        returnValue = F("Rabenkiel");
        break;
    }
    case 258516:
    {
        returnValue = F("Rabenkirchenholz");
        break;
    }
    case 258517:
    {
        returnValue = F("Rabenkirchenholzer Str.");
        break;
    }
    case 258518:
    {
        returnValue = F("Rabenknapp");
        break;
    }
    case 258519:
    {
        returnValue = F("Rabenkopf");
        break;
    }
    case 258520:
    {
        returnValue = F("Rabenkopfstr.");
        break;
    }
    case 258521:
    {
        returnValue = F("Rabenkopfweg");
        break;
    }
    case 258522:
    {
        returnValue = F("Rabenlachsschneise");
        break;
    }
    case 258523:
    {
        returnValue = F("Rabenlochweg");
        break;
    }
    case 258524:
    {
        returnValue = F("Rabenmühle");
        break;
    }
    case 258525:
    {
        returnValue = F("Rabenmühlweg");
        break;
    }
    case 258526:
    {
        returnValue = F("Rabennest");
        break;
    }
    case 258527:
    {
        returnValue = F("Rabenplatz");
        break;
    }
    case 258528:
    {
        returnValue = F("Rabenreuth");
        break;
    }
    case 258529:
    {
        returnValue = F("Rabenring");
        break;
    }
    case 258530:
    {
        returnValue = F("Rabenrodestr.");
        break;
    }
    case 258531:
    {
        returnValue = F("Rabensberg");
        break;
    }
    case 258532:
    {
        returnValue = F("Rabensbruch");
        break;
    }
    case 258533:
    {
        returnValue = F("Rabenscheider Weg");
        break;
    }
    case 258534:
    {
        returnValue = F("Rabenschlader Str.");
        break;
    }
    case 258535:
    {
        returnValue = F("Rabenshofer Weg");
        break;
    }
    case 258536:
    {
        returnValue = F("Rabensiefenweg");
        break;
    }
    case 258537:
    {
        returnValue = F("Rabenslücke");
        break;
    }
    case 258538:
    {
        returnValue = F("Rabensmoor");
        break;
    }
    case 258539:
    {
        returnValue = F("Rabenspiegel");
        break;
    }
    case 258540:
    {
        returnValue = F("Rabenstall");
        break;
    }
    case 258541:
    {
        returnValue = F("Rabensteig");
        break;
    }
    case 258542:
    {
        returnValue = F("Rabenstein");
        break;
    }
    case 258543:
    {
        returnValue = F("Rabenstein Rundweg");
        break;
    }
    case 258544:
    {
        returnValue = F("Rabensteiner Mühlweg");
        break;
    }
    case 258545:
    {
        returnValue = F("Rabensteiner Str.");
        break;
    }
    case 258546:
    {
        returnValue = F("Rabensteiner Viadukt");
        break;
    }
    case 258547:
    {
        returnValue = F("Rabensteinerstr.");
        break;
    }
    case 258548:
    {
        returnValue = F("Rabensteinfeld");
        break;
    }
    case 258549:
    {
        returnValue = F("Rabensteinplatz");
        break;
    }
    case 258550:
    {
        returnValue = F("Rabensteinstr.");
        break;
    }
    case 258551:
    {
        returnValue = F("Rabensteinweg");
        break;
    }
    case 258552:
    {
        returnValue = F("Rabenstieg");
        break;
    }
    case 258553:
    {
        returnValue = F("Rabenstockweg");
        break;
    }
    case 258554:
    {
        returnValue = F("Rabenstr.");
        break;
    }
    case 258555:
    {
        returnValue = F("Rabenstroth");
        break;
    }
    case 258556:
    {
        returnValue = F("Rabenstrut");
        break;
    }
    case 258557:
    {
        returnValue = F("Rabensweg");
        break;
    }
    case 258558:
    {
        returnValue = F("Rabental");
        break;
    }
    case 258559:
    {
        returnValue = F("Rabentalstr.");
        break;
    }
    case 258560:
    {
        returnValue = F("Rabentalweg");
        break;
    }
    case 258561:
    {
        returnValue = F("Rabentorstr.");
        break;
    }
    case 258562:
    {
        returnValue = F("Rabenweg");
        break;
    }
    case 258563:
    {
        returnValue = F("Rabenwiese");
        break;
    }
    case 258564:
    {
        returnValue = F("Rabenwiesenstr.");
        break;
    }
    case 258565:
    {
        returnValue = F("Rabenwinkel");
        break;
    }
    case 258566:
    {
        returnValue = F("Rabenzweig");
        break;
    }
    case 258567:
    {
        returnValue = F("Rabenäcker");
        break;
    }
    case 258568:
    {
        returnValue = F("Rabenäußiger Str.");
        break;
    }
    case 258569:
    {
        returnValue = F("Raber Str.");
        break;
    }
    case 258570:
    {
        returnValue = F("Rabersholzweg");
        break;
    }
    case 258571:
    {
        returnValue = F("Rabertshof");
        break;
    }
    case 258572:
    {
        returnValue = F("Rabertshäuser Str.");
        break;
    }
    case 258573:
    {
        returnValue = F("Rabertsweg");
        break;
    }
    case 258574:
    {
        returnValue = F("Rabestr.");
        break;
    }
    case 258575:
    {
        returnValue = F("Rabet");
        break;
    }
    case 258576:
    {
        returnValue = F("Rabhofstr.");
        break;
    }
    case 258577:
    {
        returnValue = F("Rabienstr.");
        break;
    }
    case 258578:
    {
        returnValue = F("Rabingenstr.");
        break;
    }
    case 258579:
    {
        returnValue = F("Rabinstr.");
        break;
    }
    case 258580:
    {
        returnValue = F("Rabinystr.");
        break;
    }
    case 258581:
    {
        returnValue = F("Rabis");
        break;
    }
    case 258582:
    {
        returnValue = F("Rabishauer Str.");
        break;
    }
    case 258583:
    {
        returnValue = F("Rabitzer Str.");
        break;
    }
    case 258584:
    {
        returnValue = F("Rablinghauser Deich");
        break;
    }
    case 258585:
    {
        returnValue = F("Rablinghauser Landstr.");
        break;
    }
    case 258586:
    {
        returnValue = F("Rablstr.");
        break;
    }
    case 258587:
    {
        returnValue = F("Raboisenstr.");
        break;
    }
    case 258588:
    {
        returnValue = F("Raboldesburg");
        break;
    }
    case 258589:
    {
        returnValue = F("Rabotoweg");
        break;
    }
    case 258590:
    {
        returnValue = F("Rabuskyweg");
        break;
    }
    case 258591:
    {
        returnValue = F("Rabutzer Weg");
        break;
    }
    case 258592:
    {
        returnValue = F("Rachel-Carson-Weg");
        break;
    }
    case 258593:
    {
        returnValue = F("Rachel-Straus-Weg");
        break;
    }
    case 258594:
    {
        returnValue = F("Rachelbrücke");
        break;
    }
    case 258595:
    {
        returnValue = F("Rachelbrückenweg");
        break;
    }
    case 258596:
    {
        returnValue = F("Rachelhöhenstr.");
        break;
    }
    case 258597:
    {
        returnValue = F("Rachelshäuser Weg");
        break;
    }
    case 258598:
    {
        returnValue = F("Rachelsteig");
        break;
    }
    case 258599:
    {
        returnValue = F("Rachelstr.");
        break;
    }
    case 258600:
    {
        returnValue = F("Rachelweg");
        break;
    }
    case 258601:
    {
        returnValue = F("Racherting");
        break;
    }
    case 258602:
    {
        returnValue = F("Rachertshofen");
        break;
    }
    case 258603:
    {
        returnValue = F("Rachlau");
        break;
    }
    case 258604:
    {
        returnValue = F("Rachlauer Weg");
        break;
    }
    case 258605:
    {
        returnValue = F("Rachlweg");
        break;
    }
    case 258606:
    {
        returnValue = F("Rachoniweg");
        break;
    }
    case 258607:
    {
        returnValue = F("Rachower Moor");
        break;
    }
    case 258608:
    {
        returnValue = F("Rachower Str.");
        break;
    }
    case 258609:
    {
        returnValue = F("Rachower Weg");
        break;
    }
    case 258610:
    {
        returnValue = F("Rachuter Str.");
        break;
    }
    case 258611:
    {
        returnValue = F("Racine-Weg");
        break;
    }
    case 258612:
    {
        returnValue = F("Rackeler Dorfstr.");
        break;
    }
    case 258613:
    {
        returnValue = F("Rackeler Str.");
        break;
    }
    case 258614:
    {
        returnValue = F("Rackelsdorf");
        break;
    }
    case 258615:
    {
        returnValue = F("Rackelskamp");
        break;
    }
    case 258616:
    {
        returnValue = F("Rackelsweg");
        break;
    }
    case 258617:
    {
        returnValue = F("Rackenhof");
        break;
    }
    case 258618:
    {
        returnValue = F("Rackensteg");
        break;
    }
    case 258619:
    {
        returnValue = F("Rackensteiner Str.");
        break;
    }
    case 258620:
    {
        returnValue = F("Rackenurt");
        break;
    }
    case 258621:
    {
        returnValue = F("Rackergang");
        break;
    }
    case 258622:
    {
        returnValue = F("Rackermoosstr.");
        break;
    }
    case 258623:
    {
        returnValue = F("Rackersbacher Str.");
        break;
    }
    case 258624:
    {
        returnValue = F("Rackersberg");
        break;
    }
    case 258625:
    {
        returnValue = F("Rackerscheider Weg");
        break;
    }
    case 258626:
    {
        returnValue = F("Rackerstieg");
        break;
    }
    case 258627:
    {
        returnValue = F("Rackerstr.");
        break;
    }
    case 258628:
    {
        returnValue = F("Rackertshofener Str.");
        break;
    }
    case 258629:
    {
        returnValue = F("Rackertwiete");
        break;
    }
    case 258630:
    {
        returnValue = F("Rackeschweg");
        break;
    }
    case 258631:
    {
        returnValue = F("Rackith");
        break;
    }
    case 258632:
    {
        returnValue = F("Rackither Dorfplatz");
        break;
    }
    case 258633:
    {
        returnValue = F("Rackither Dorfstr.");
        break;
    }
    case 258634:
    {
        returnValue = F("Rackither Große Gasse");
        break;
    }
    case 258635:
    {
        returnValue = F("Rackither Kleine Gasse");
        break;
    }
    case 258636:
    {
        returnValue = F("Rackither Str.");
        break;
    }
    case 258637:
    {
        returnValue = F("Racksener Str.");
        break;
    }
    case 258638:
    {
        returnValue = F("Rackstädter Weg");
        break;
    }
    case 258639:
    {
        returnValue = F("Rackwitzer Str.");
        break;
    }
    case 258640:
    {
        returnValue = F("Rackwitzer Weg");
        break;
    }
    case 258641:
    {
        returnValue = F("Rad- und Fußgängerweg");
        break;
    }
    case 258642:
    {
        returnValue = F("Rad- und Wanderweg am Ingeheimbach nach Nienhagen");
        break;
    }
    case 258643:
    {
        returnValue = F("Rad-/Wanderweg Kleinwenkheim-Wannigsmühle");
        break;
    }
    case 258644:
    {
        returnValue = F("Rad-und Wirtschaftsweg Richtung Uschlag");
        break;
    }
    case 258645:
    {
        returnValue = F("Rad/Fußweg");
        break;
    }
    case 258646:
    {
        returnValue = F("RadBahn Münsterland");
        break;
    }
    case 258647:
    {
        returnValue = F("Radackern");
        break;
    }
    case 258648:
    {
        returnValue = F("Radackerstr.");
        break;
    }
    case 258649:
    {
        returnValue = F("Radackerweg");
        break;
    }
    case 258650:
    {
        returnValue = F("Radarstr.");
        break;
    }
    case 258651:
    {
        returnValue = F("Radauanger");
        break;
    }
    case 258652:
    {
        returnValue = F("Radauangerstr.");
        break;
    }
    case 258653:
    {
        returnValue = F("Radauberg");
        break;
    }
    case 258654:
    {
        returnValue = F("Radaustr.");
        break;
    }
    case 258655:
    {
        returnValue = F("Radautzer Str.");
        break;
    }
    case 258656:
    {
        returnValue = F("Radberg");
        break;
    }
    case 258657:
    {
        returnValue = F("Radbodstr.");
        break;
    }
    case 258658:
    {
        returnValue = F("Radbodweg");
        break;
    }
    case 258659:
    {
        returnValue = F("Radbrucher Str.");
        break;
    }
    case 258660:
    {
        returnValue = F("Radbrucher Weg");
        break;
    }
    case 258661:
    {
        returnValue = F("Radbruchstr.");
        break;
    }
    case 258662:
    {
        returnValue = F("Radbrunnenallee");
        break;
    }
    case 258663:
    {
        returnValue = F("Radbrunnengasse");
        break;
    }
    case 258664:
    {
        returnValue = F("Radbrunnenstr.");
        break;
    }
    case 258665:
    {
        returnValue = F("Radbüschstr.");
        break;
    }
    case 258666:
    {
        returnValue = F("Radcliffweg");
        break;
    }
    case 258667:
    {
        returnValue = F("Raddasblick");
        break;
    }
    case 258668:
    {
        returnValue = F("Raddasstr.");
        break;
    }
    case 258669:
    {
        returnValue = F("Raddegrund");
        break;
    }
    case 258670:
    {
        returnValue = F("Raddestr.");
        break;
    }
    case 258671:
    {
        returnValue = F("Raddeweg");
        break;
    }
    case 258672:
    {
        returnValue = F("Raddingsdorf Ausbau");
        break;
    }
    case 258673:
    {
        returnValue = F("Raddingsdorfer Str.");
        break;
    }
    case 258674:
    {
        returnValue = F("Raddner Weg");
        break;
    }
    case 258675:
    {
        returnValue = F("Radduscher Bahnhofstr.");
        break;
    }
    case 258676:
    {
        returnValue = F("Radduscher Dorfstr.");
        break;
    }
    case 258677:
    {
        returnValue = F("Rade");
        break;
    }
    case 258678:
    {
        returnValue = F("Radebachweg");
        break;
    }
    case 258679:
    {
        returnValue = F("Radeberg");
        break;
    }
    case 258680:
    {
        returnValue = F("Radeberger Landstr.");
        break;
    }
    case 258681:
    {
        returnValue = F("Radeberger Str.");
        break;
    }
    case 258682:
    {
        returnValue = F("Radeberger Weg");
        break;
    }
    case 258683:
    {
        returnValue = F("Radebergstr.");
        break;
    }
    case 258684:
    {
        returnValue = F("Radebeuler Hof");
        break;
    }
    case 258685:
    {
        returnValue = F("Radebeuler Str.");
        break;
    }
    case 258686:
    {
        returnValue = F("Radebeuler Weg");
        break;
    }
    case 258687:
    {
        returnValue = F("Radebrecher");
        break;
    }
    case 258688:
    {
        returnValue = F("Radebrook");
        break;
    }
    case 258689:
    {
        returnValue = F("Radebruchwiesen");
        break;
    }
    case 258690:
    {
        returnValue = F("Radebrüche");
        break;
    }
    case 258691:
    {
        returnValue = F("Radebrück");
        break;
    }
    case 258692:
    {
        returnValue = F("Radeburger Landstr.");
        break;
    }
    case 258693:
    {
        returnValue = F("Radeburger Platz");
        break;
    }
    case 258694:
    {
        returnValue = F("Radeburger Str.");
        break;
    }
    case 258695:
    {
        returnValue = F("Radeck");
        break;
    }
    case 258696:
    {
        returnValue = F("Radeckestr.");
        break;
    }
    case 258697:
    {
        returnValue = F("Radeckweg");
        break;
    }
    case 258698:
    {
        returnValue = F("Radefelder Allee");
        break;
    }
    case 258699:
    {
        returnValue = F("Radefelder Landstr.");
        break;
    }
    case 258700:
    {
        returnValue = F("Radefelder Ring");
        break;
    }
    case 258701:
    {
        returnValue = F("Radefelder Str.");
        break;
    }
    case 258702:
    {
        returnValue = F("Radefelder Weg");
        break;
    }
    case 258703:
    {
        returnValue = F("Radegang");
        break;
    }
    case 258704:
    {
        returnValue = F("Radegast");
        break;
    }
    case 258705:
    {
        returnValue = F("Radegaster Str.");
        break;
    }
    case 258706:
    {
        returnValue = F("Radegaster Weg");
        break;
    }
    case 258707:
    {
        returnValue = F("Radegaststr.");
        break;
    }
    case 258708:
    {
        returnValue = F("Radegastweg");
        break;
    }
    case 258709:
    {
        returnValue = F("Radegundenstr.");
        break;
    }
    case 258710:
    {
        returnValue = F("Radegundis");
        break;
    }
    case 258711:
    {
        returnValue = F("Radegundisstr.");
        break;
    }
    case 258712:
    {
        returnValue = F("Radehorster Weg");
        break;
    }
    case 258713:
    {
        returnValue = F("Radekamp");
        break;
    }
    case 258714:
    {
        returnValue = F("Radekampsweg");
        break;
    }
    case 258715:
    {
        returnValue = F("Radekestr.");
        break;
    }
    case 258716:
    {
        returnValue = F("Radeklint");
        break;
    }
    case 258717:
    {
        returnValue = F("Radekoppel");
        break;
    }
    case 258718:
    {
        returnValue = F("Radekower Weg");
        break;
    }
    case 258719:
    {
        returnValue = F("Radeland");
        break;
    }
    case 258720:
    {
        returnValue = F("Radelandberg");
        break;
    }
    case 258721:
    {
        returnValue = F("Radelander Weg");
        break;
    }
    case 258722:
    {
        returnValue = F("Radelandswinkel");
        break;
    }
    case 258723:
    {
        returnValue = F("Radelandweg");
        break;
    }
    case 258724:
    {
        returnValue = F("Radellstr.");
        break;
    }
    case 258725:
    {
        returnValue = F("Radelsberg");
        break;
    }
    case 258726:
    {
        returnValue = F("Radelskuhle");
        break;
    }
    case 258727:
    {
        returnValue = F("Radelstetter Str.");
        break;
    }
    case 258728:
    {
        returnValue = F("Radelsweg");
        break;
    }
    case 258729:
    {
        returnValue = F("Radelzhauser Weg");
        break;
    }
    case 258730:
    {
        returnValue = F("Radeländer Str.");
        break;
    }
    case 258731:
    {
        returnValue = F("Radeländer Weg");
        break;
    }
    case 258732:
    {
        returnValue = F("Rademacher Kamp");
        break;
    }
    case 258733:
    {
        returnValue = F("Rademacher Str.");
        break;
    }
    case 258734:
    {
        returnValue = F("Rademacher Weg");
        break;
    }
    case 258735:
    {
        returnValue = F("Rademacher-Gang");
        break;
    }
    case 258736:
    {
        returnValue = F("Rademachers Weg");
        break;
    }
    case 258737:
    {
        returnValue = F("Rademacherstr.");
        break;
    }
    case 258738:
    {
        returnValue = F("Rademacherweg");
        break;
    }
    case 258739:
    {
        returnValue = F("Rademakersstiege");
        break;
    }
    case 258740:
    {
        returnValue = F("Rademakersweg");
        break;
    }
    case 258741:
    {
        returnValue = F("Raden");
        break;
    }
    case 258742:
    {
        returnValue = F("Radenbachweg");
        break;
    }
    case 258743:
    {
        returnValue = F("Radenbecker Str.");
        break;
    }
    case 258744:
    {
        returnValue = F("Radenbecker Weg");
        break;
    }
    case 258745:
    {
        returnValue = F("Radenberg");
        break;
    }
    case 258746:
    {
        returnValue = F("Radener Hofstr.");
        break;
    }
    case 258747:
    {
        returnValue = F("Radener Str.");
        break;
    }
    case 258748:
    {
        returnValue = F("Radener Weg");
        break;
    }
    case 258749:
    {
        returnValue = F("Radensdorfer Hauptstr.");
        break;
    }
    case 258750:
    {
        returnValue = F("Radensdorfer Weg");
        break;
    }
    case 258751:
    {
        returnValue = F("Radenstr.");
        break;
    }
    case 258752:
    {
        returnValue = F("Radensweg");
        break;
    }
    case 258753:
    {
        returnValue = F("Radental");
        break;
    }
    case 258754:
    {
        returnValue = F("Radepohl");
        break;
    }
    case 258755:
    {
        returnValue = F("Rader Kirchweg");
        break;
    }
    case 258756:
    {
        returnValue = F("Rader Str.");
        break;
    }
    case 258757:
    {
        returnValue = F("Rader Weg");
        break;
    }
    case 258758:
    {
        returnValue = F("Rader Winkel");
        break;
    }
    case 258759:
    {
        returnValue = F("Raderacher Str.");
        break;
    }
    case 258760:
    {
        returnValue = F("Raderberg");
        break;
    }
    case 258761:
    {
        returnValue = F("Raderberger Str.");
        break;
    }
    case 258762:
    {
        returnValue = F("Raderberggürtel");
        break;
    }
    case 258763:
    {
        returnValue = F("Raderbroich");
        break;
    }
    case 258764:
    {
        returnValue = F("Raderbroicher Str.");
        break;
    }
    case 258765:
    {
        returnValue = F("Raderedder");
        break;
    }
    case 258766:
    {
        returnValue = F("Raderfeld");
        break;
    }
    case 258767:
    {
        returnValue = F("Raderhorster Ellerbruch");
        break;
    }
    case 258768:
    {
        returnValue = F("Raderhorster Ring");
        break;
    }
    case 258769:
    {
        returnValue = F("Radermachershof");
        break;
    }
    case 258770:
    {
        returnValue = F("Radermühle");
        break;
    }
    case 258771:
    {
        returnValue = F("Radersbergstr.");
        break;
    }
    case 258772:
    {
        returnValue = F("Radersdorfer Str.");
        break;
    }
    case 258773:
    {
        returnValue = F("Raderstr.");
        break;
    }
    case 258774:
    {
        returnValue = F("Raderthaler Str.");
        break;
    }
    case 258775:
    {
        returnValue = F("Raderthalgürtel");
        break;
    }
    case 258776:
    {
        returnValue = F("Radertshausen");
        break;
    }
    case 258777:
    {
        returnValue = F("Raderweg");
        break;
    }
    case 258778:
    {
        returnValue = F("Radesforder");
        break;
    }
    case 258779:
    {
        returnValue = F("Radesforder Hof");
        break;
    }
    case 258780:
    {
        returnValue = F("Radesforder Weg");
        break;
    }
    case 258781:
    {
        returnValue = F("Radestr.");
        break;
    }
    case 258782:
    {
        returnValue = F("Radesweg");
        break;
    }
    case 258783:
    {
        returnValue = F("Radetzkystr.");
        break;
    }
    case 258784:
    {
        returnValue = F("Radeweg");
        break;
    }
    case 258785:
    {
        returnValue = F("Radeweiser Weg");
        break;
    }
    case 258786:
    {
        returnValue = F("Radeweller Str.");
        break;
    }
    case 258787:
    {
        returnValue = F("Radeweller Weg");
        break;
    }
    case 258788:
    {
        returnValue = F("Radewiese");
        break;
    }
    case 258789:
    {
        returnValue = F("Radewiesen");
        break;
    }
    case 258790:
    {
        returnValue = F("Radewieser Str.");
        break;
    }
    case 258791:
    {
        returnValue = F("Radewiger Str.");
        break;
    }
    case 258792:
    {
        returnValue = F("Radewisch");
        break;
    }
    case 258793:
    {
        returnValue = F("Radewitz");
        break;
    }
    case 258794:
    {
        returnValue = F("Radewitzer Weg");
        break;
    }
    case 258795:
    {
        returnValue = F("Radfeldstr.");
        break;
    }
    case 258796:
    {
        returnValue = F("Radfleckstr.");
        break;
    }
    case 258797:
    {
        returnValue = F("Radgasse");
        break;
    }
    case 258798:
    {
        returnValue = F("Radgendorfer Ring");
        break;
    }
    case 258799:
    {
        returnValue = F("Radgendorfer Str.");
        break;
    }
    case 258800:
    {
        returnValue = F("Radgrubenweg");
        break;
    }
    case 258801:
    {
        returnValue = F("Radgässchen");
        break;
    }
    case 258802:
    {
        returnValue = F("Radgäßle");
        break;
    }
    case 258803:
    {
        returnValue = F("Radhausstr.");
        break;
    }
    case 258804:
    {
        returnValue = F("Radheimer Str.");
        break;
    }
    case 258805:
    {
        returnValue = F("Radhoffstr.");
        break;
    }
    case 258806:
    {
        returnValue = F("Radholzweg");
        break;
    }
    case 258807:
    {
        returnValue = F("Radieschenweg");
        break;
    }
    case 258808:
    {
        returnValue = F("Radiesgasse");
        break;
    }
    case 258809:
    {
        returnValue = F("Radilostr.");
        break;
    }
    case 258810:
    {
        returnValue = F("Radinkendorf");
        break;
    }
    case 258811:
    {
        returnValue = F("Radinkendorf Ausbau");
        break;
    }
    case 258812:
    {
        returnValue = F("Radinkendorfer Str.");
        break;
    }
    case 258813:
    {
        returnValue = F("Radiser Bahnhofstr.");
        break;
    }
    case 258814:
    {
        returnValue = F("Radiser Friedhofsweg");
        break;
    }
    case 258815:
    {
        returnValue = F("Radiser Heideweg");
        break;
    }
    case 258816:
    {
        returnValue = F("Radiser Str.");
        break;
    }
    case 258817:
    {
        returnValue = F("Radiser Wiesenweg");
        break;
    }
    case 258818:
    {
        returnValue = F("Radislebener Weg");
        break;
    }
    case 258819:
    {
        returnValue = F("Radiumsteig");
        break;
    }
    case 258820:
    {
        returnValue = F("Radiumstr.");
        break;
    }
    case 258821:
    {
        returnValue = F("Radiusstr.");
        break;
    }
    case 258822:
    {
        returnValue = F("Radkellerweg");
        break;
    }
    case 258823:
    {
        returnValue = F("Radkestr.");
        break;
    }
    case 258824:
    {
        returnValue = F("Radkuhl");
        break;
    }
    case 258825:
    {
        returnValue = F("Radl");
        break;
    }
    case 258826:
    {
        returnValue = F("Radlandsichten");
        break;
    }
    case 258827:
    {
        returnValue = F("Radlberg");
        break;
    }
    case 258828:
    {
        returnValue = F("Radlbrunn");
        break;
    }
    case 258829:
    {
        returnValue = F("Radlbäckplatz");
        break;
    }
    case 258830:
    {
        returnValue = F("Radlbäckstr.");
        break;
    }
    case 258831:
    {
        returnValue = F("Radler Str.");
        break;
    }
    case 258832:
    {
        returnValue = F("Radlerstr.");
        break;
    }
    case 258833:
    {
        returnValue = F("Radlerweg");
        break;
    }
    case 258834:
    {
        returnValue = F("Radlhöfe");
        break;
    }
    case 258835:
    {
        returnValue = F("Radling");
        break;
    }
    case 258836:
    {
        returnValue = F("Radlinger Str.");
        break;
    }
    case 258837:
    {
        returnValue = F("Radlinghauser Str.");
        break;
    }
    case 258838:
    {
        returnValue = F("Radlkofen");
        break;
    }
    case 258839:
    {
        returnValue = F("Radlkofener Str.");
        break;
    }
    case 258840:
    {
        returnValue = F("Radlkofer-Weg");
        break;
    }
    case 258841:
    {
        returnValue = F("Radlkoferstr.");
        break;
    }
    case 258842:
    {
        returnValue = F("Radlmaierweg");
        break;
    }
    case 258843:
    {
        returnValue = F("Radlmoos");
        break;
    }
    case 258844:
    {
        returnValue = F("Radloff-Schneise");
        break;
    }
    case 258845:
    {
        returnValue = F("Radlow Dorf");
        break;
    }
    case 258846:
    {
        returnValue = F("Radlower Str.");
        break;
    }
    case 258847:
    {
        returnValue = F("Radlsteg");
        break;
    }
    case 258848:
    {
        returnValue = F("Radlubinstr.");
        break;
    }
    case 258849:
    {
        returnValue = F("Radlweg");
        break;
    }
    case 258850:
    {
        returnValue = F("Radmacherstr.");
        break;
    }
    case 258851:
    {
        returnValue = F("Radmeisterstr.");
        break;
    }
    case 258852:
    {
        returnValue = F("Radmeritzer Str.");
        break;
    }
    case 258853:
    {
        returnValue = F("Radmoor");
        break;
    }
    case 258854:
    {
        returnValue = F("Radmühler Str.");
        break;
    }
    case 258855:
    {
        returnValue = F("Radmüllerweg");
        break;
    }
    case 258856:
    {
        returnValue = F("Radolfstr.");
        break;
    }
    case 258857:
    {
        returnValue = F("Radolfzeller Str.");
        break;
    }
    case 258858:
    {
        returnValue = F("Radolphshäuser Str.");
        break;
    }
    case 258859:
    {
        returnValue = F("Radomer Str.");
        break;
    }
    case 258860:
    {
        returnValue = F("Radotinplatz");
        break;
    }
    case 258861:
    {
        returnValue = F("Radowitzstr.");
        break;
    }
    case 258862:
    {
        returnValue = F("Radplan");
        break;
    }
    case 258863:
    {
        returnValue = F("Radrennbahnweg");
        break;
    }
    case 258864:
    {
        returnValue = F("Radrennsteig");
        break;
    }
    case 258865:
    {
        returnValue = F("Radrundweg Plauer See");
        break;
    }
    case 258866:
    {
        returnValue = F("Radsberg");
        break;
    }
    case 258867:
    {
        returnValue = F("Radsbergweg");
        break;
    }
    case 258868:
    {
        returnValue = F("Radsche Gasse");
        break;
    }
    case 258869:
    {
        returnValue = F("Radsche Str.");
        break;
    }
    case 258870:
    {
        returnValue = F("Radschertstr.");
        break;
    }
    case 258871:
    {
        returnValue = F("Radschläfe");
        break;
    }
    case 258872:
    {
        returnValue = F("Radschnellweg Frankfurt-Darmstadt");
        break;
    }
    case 258873:
    {
        returnValue = F("Radsollkamp");
        break;
    }
    case 258874:
    {
        returnValue = F("Radspielergasse");
        break;
    }
    case 258875:
    {
        returnValue = F("Radspielerstr.");
        break;
    }
    case 258876:
    {
        returnValue = F("Radspitze Zeyern");
        break;
    }
    case 258877:
    {
        returnValue = F("Radspitzweg");
        break;
    }
    case 258878:
    {
        returnValue = F("Radstaken");
        break;
    }
    case 258879:
    {
        returnValue = F("Radstocksweg");
        break;
    }
    case 258880:
    {
        returnValue = F("Radstr.");
        break;
    }
    case 258881:
    {
        returnValue = F("Radstubenweg");
        break;
    }
    case 258882:
    {
        returnValue = F("Radstädter Str.");
        break;
    }
    case 258883:
    {
        returnValue = F("Radstädter Weg");
        break;
    }
    case 258884:
    {
        returnValue = F("Radsäcker");
        break;
    }
    case 258885:
    {
        returnValue = F("Raduhner Str.");
        break;
    }
    case 258886:
    {
        returnValue = F("Raduhner Weg");
        break;
    }
    case 258887:
    {
        returnValue = F("Raduschweg");
        break;
    }
    case 258888:
    {
        returnValue = F("Radvanstr.");
        break;
    }
    case 258889:
    {
        returnValue = F("Radwanderweg Lüdershof Schwandt");
        break;
    }
    case 258890:
    {
        returnValue = F("Radwang");
        break;
    }
    case 258891:
    {
        returnValue = F("Radwardstr.");
        break;
    }
    case 258892:
    {
        returnValue = F("Radweg");
        break;
    }
    case 258893:
    {
        returnValue = F("Radweg Blumenfeld - Watterdingen");
        break;
    }
    case 258894:
    {
        returnValue = F("Radweg Bodenwöhr-Neuenschwand");
        break;
    }
    case 258895:
    {
        returnValue = F("Radweg Deute-Dissen");
        break;
    }
    case 258896:
    {
        returnValue = F("Radweg Empfershausen");
        break;
    }
    case 258897:
    {
        returnValue = F("Radweg F3.1");
        break;
    }
    case 258898:
    {
        returnValue = F("Radweg FS - Allershausen");
        break;
    }
    case 258899:
    {
        returnValue = F("Radweg Hilkerode-Zwinge");
        break;
    }
    case 258900:
    {
        returnValue = F("Radweg Kirchzell-Mudau");
        break;
    }
    case 258901:
    {
        returnValue = F("Radweg Kleinwenkheim-Wannigsmühle");
        break;
    }
    case 258902:
    {
        returnValue = F("Radweg Oberlauringen-Sulzfeld");
        break;
    }
    case 258903:
    {
        returnValue = F("Radweg Obermichelbach - Vach");
        break;
    }
    case 258904:
    {
        returnValue = F("Radweg Ollsen-Undeloh");
        break;
    }
    case 258905:
    {
        returnValue = F("Radweg R10");
        break;
    }
    case 258906:
    {
        returnValue = F("Radweg R4");
        break;
    }
    case 258907:
    {
        returnValue = F("Radweg RF");
        break;
    }
    case 258908:
    {
        returnValue = F("Radweg Rennertshofen-Wellheim");
        break;
    }
    case 258909:
    {
        returnValue = F("Radweg Waldenburg-Stausee Oberwald");
        break;
    }
    case 258910:
    {
        returnValue = F("Radweg Westumgehung");
        break;
    }
    case 258911:
    {
        returnValue = F("Radweg Zwinge - Weißenborn-Lüderode");
        break;
    }
    case 258912:
    {
        returnValue = F("Radweg am Mündesee");
        break;
    }
    case 258913:
    {
        returnValue = F("Radweg durch die Leite");
        break;
    }
    case 258914:
    {
        returnValue = F("Radweg in Forst Bildhausen Nordost");
        break;
    }
    case 258915:
    {
        returnValue = F("Radweg nach Biberbach");
        break;
    }
    case 258916:
    {
        returnValue = F("Radweg nach Umkirch");
        break;
    }
    case 258917:
    {
        returnValue = F("Radweg zum Ortsteil Büchelkühn");
        break;
    }
    case 258918:
    {
        returnValue = F("Radweg/Kinzigbrücke");
        break;
    }
    case 258919:
    {
        returnValue = F("Radwiese");
        break;
    }
    case 258920:
    {
        returnValue = F("Radäckerstr.");
        break;
    }
    case 258921:
    {
        returnValue = F("Raederstr.");
        break;
    }
    case 258922:
    {
        returnValue = F("Raedtstr.");
        break;
    }
    case 258923:
    {
        returnValue = F("Raemweg");
        break;
    }
    case 258924:
    {
        returnValue = F("Raerener Str.");
        break;
    }
    case 258925:
    {
        returnValue = F("Raesfelder Str.");
        break;
    }
    case 258926:
    {
        returnValue = F("Raesfelder Weg");
        break;
    }
    case 258927:
    {
        returnValue = F("Raesfeldschneise");
        break;
    }
    case 258928:
    {
        returnValue = F("Raesfeldstr.");
        break;
    }
    case 258929:
    {
        returnValue = F("Raestrup");
        break;
    }
    case 258930:
    {
        returnValue = F("Raestruper Str.");
        break;
    }
    case 258931:
    {
        returnValue = F("Rafael-Katz-Str.");
        break;
    }
    case 258932:
    {
        returnValue = F("Rafenauer Weg");
        break;
    }
    case 258933:
    {
        returnValue = F("Raffach");
        break;
    }
    case 258934:
    {
        returnValue = F("Raffacher Str.");
        break;
    }
    case 258935:
    {
        returnValue = F("Raffaelplatz");
        break;
    }
    case 258936:
    {
        returnValue = F("Raffaelstr.");
        break;
    }
    case 258937:
    {
        returnValue = F("Raffaelweg");
        break;
    }
    case 258938:
    {
        returnValue = F("Raffastr.");
        break;
    }
    case 258939:
    {
        returnValue = F("Raffaweg");
        break;
    }
    case 258940:
    {
        returnValue = F("Raffelbergbrücke");
        break;
    }
    case 258941:
    {
        returnValue = F("Raffelberger Str.");
        break;
    }
    case 258942:
    {
        returnValue = F("Raffelbergweg");
        break;
    }
    case 258943:
    {
        returnValue = F("Raffeldweg");
        break;
    }
    case 258944:
    {
        returnValue = F("Raffelnberger Weg");
        break;
    }
    case 258945:
    {
        returnValue = F("Raffelsdorfer Str.");
        break;
    }
    case 258946:
    {
        returnValue = F("Raffelspütz");
        break;
    }
    case 258947:
    {
        returnValue = F("Raffelsteiner Weg");
        break;
    }
    case 258948:
    {
        returnValue = F("Raffeltersteige");
        break;
    }
    case 258949:
    {
        returnValue = F("Raffenberg");
        break;
    }
    case 258950:
    {
        returnValue = F("Raffenbergstr.");
        break;
    }
    case 258951:
    {
        returnValue = F("Raffenstettener Str.");
        break;
    }
    case 258952:
    {
        returnValue = F("Raffinadeweg");
        break;
    }
    case 258953:
    {
        returnValue = F("Raffinerie");
        break;
    }
    case 258954:
    {
        returnValue = F("Raffineriestr.");
        break;
    }
    case 258955:
    {
        returnValue = F("Raffinerieweg");
        break;
    }
    case 258956:
    {
        returnValue = F("Raffkamp");
        break;
    }
    case 258957:
    {
        returnValue = F("Raffoltstr.");
        break;
    }
    case 258958:
    {
        returnValue = F("Raffstr.");
        break;
    }
    case 258959:
    {
        returnValue = F("Raffturm");
        break;
    }
    case 258960:
    {
        returnValue = F("Raffweg");
        break;
    }
    case 258961:
    {
        returnValue = F("Rafnachgrabenweg");
        break;
    }
    case 258962:
    {
        returnValue = F("Ragenbusch");
        break;
    }
    case 258963:
    {
        returnValue = F("Ragenreuter Weg");
        break;
    }
    case 258964:
    {
        returnValue = F("Ragenstr.");
        break;
    }
    case 258965:
    {
        returnValue = F("Ragenwies");
        break;
    }
    case 258966:
    {
        returnValue = F("Ragern");
        break;
    }
    case 258967:
    {
        returnValue = F("Ragerspiel");
        break;
    }
    case 258968:
    {
        returnValue = F("Ragewitzer Str.");
        break;
    }
    case 258969:
    {
        returnValue = F("Ragewitzer Weg");
        break;
    }
    case 258970:
    {
        returnValue = F("Raggau");
        break;
    }
    case 258971:
    {
        returnValue = F("Raglovichstr.");
        break;
    }
    case 258972:
    {
        returnValue = F("Ragniter Ring");
        break;
    }
    case 258973:
    {
        returnValue = F("Ragniter Weg");
        break;
    }
    case 258974:
    {
        returnValue = F("Ragolds-Park");
        break;
    }
    case 258975:
    {
        returnValue = F("Ragower Ablage");
        break;
    }
    case 258976:
    {
        returnValue = F("Ragower Bergstr.");
        break;
    }
    case 258977:
    {
        returnValue = F("Ragower Mühle");
        break;
    }
    case 258978:
    {
        returnValue = F("Ragower Schlosspark");
        break;
    }
    case 258979:
    {
        returnValue = F("Ragower Str.");
        break;
    }
    case 258980:
    {
        returnValue = F("Ragower Weg");
        break;
    }
    case 258981:
    {
        returnValue = F("Raguhner Schleife");
        break;
    }
    case 258982:
    {
        returnValue = F("Raguhner Str.");
        break;
    }
    case 258983:
    {
        returnValue = F("Raguther Dorfstr.");
        break;
    }
    case 258984:
    {
        returnValue = F("Raguther Weg");
        break;
    }
    case 258985:
    {
        returnValue = F("Ragwitzer Str.");
        break;
    }
    case 258986:
    {
        returnValue = F("Ragösener Dorfstr.");
        break;
    }
    case 258987:
    {
        returnValue = F("Ragösener Str.");
        break;
    }
    case 258988:
    {
        returnValue = F("Ragöser Mühle");
        break;
    }
    case 258989:
    {
        returnValue = F("Ragöser Schleuse");
        break;
    }
    case 258990:
    {
        returnValue = F("Ragöser Str.");
        break;
    }
    case 258991:
    {
        returnValue = F("Rahaldenstr.");
        break;
    }
    case 258992:
    {
        returnValue = F("Rahbargkamp");
        break;
    }
    case 258993:
    {
        returnValue = F("Rahbusch");
        break;
    }
    case 258994:
    {
        returnValue = F("Rahde");
        break;
    }
    case 258995:
    {
        returnValue = F("Rahdeland");
        break;
    }
    case 258996:
    {
        returnValue = F("Rahdener Moorweg");
        break;
    }
    case 258997:
    {
        returnValue = F("Rahdener Str.");
        break;
    }
    case 258998:
    {
        returnValue = F("Rahdenstr.");
        break;
    }
    case 258999:
    {
        returnValue = F("Rahder Buckrich");
        break;
    }
    case 259000:
    {
        returnValue = F("Rahe");
        break;
    }
    case 259001:
    {
        returnValue = F("Raheinstr.");
        break;
    }
    case 259002:
    {
        returnValue = F("Rahel-Straus-Str.");
        break;
    }
    case 259003:
    {
        returnValue = F("Rahel-Straus-Weg");
        break;
    }
    case 259004:
    {
        returnValue = F("Rahel-Varnhagen-Str.");
        break;
    }
    case 259005:
    {
        returnValue = F("Rahel-Varnhagen-Weg");
        break;
    }
    case 259006:
    {
        returnValue = F("Rahelweg");
        break;
    }
    case 259007:
    {
        returnValue = F("Raheneschstr.");
        break;
    }
    case 259008:
    {
        returnValue = F("Rahenweg");
        break;
    }
    case 259009:
    {
        returnValue = F("Raher Str.");
        break;
    }
    case 259010:
    {
        returnValue = F("Rahester Helmer");
        break;
    }
    case 259011:
    {
        returnValue = F("Rahester Moor");
        break;
    }
    case 259012:
    {
        returnValue = F("Rahester Postweg");
        break;
    }
    case 259013:
    {
        returnValue = F("Rahester Verlaat");
        break;
    }
    case 259014:
    {
        returnValue = F("Rahestr.");
        break;
    }
    case 259015:
    {
        returnValue = F("Raheweg");
        break;
    }
    case 259016:
    {
        returnValue = F("Rahheideweg");
        break;
    }
    case 259017:
    {
        returnValue = F("Rahierstr.");
        break;
    }
    case 259018:
    {
        returnValue = F("Rahland");
        break;
    }
    case 259019:
    {
        returnValue = F("Rahlande");
        break;
    }
    case 259020:
    {
        returnValue = F("Rahlandsweg");
        break;
    }
    case 259021:
    {
        returnValue = F("Rahle");
        break;
    }
    case 259022:
    {
        returnValue = F("Rahlenbeckallee");
        break;
    }
    case 259023:
    {
        returnValue = F("Rahlenbecker Str.");
        break;
    }
    case 259024:
    {
        returnValue = F("Rahlenbecker Tunnel");
        break;
    }
    case 259025:
    {
        returnValue = F("Rahlenbeckstr.");
        break;
    }
    case 259026:
    {
        returnValue = F("Rahlenweg");
        break;
    }
    case 259027:
    {
        returnValue = F("Rahlfskamp");
        break;
    }
    case 259028:
    {
        returnValue = F("Rahlfsweg");
        break;
    }
    case 259029:
    {
        returnValue = F("Rahlinger Str.");
        break;
    }
    case 259030:
    {
        returnValue = F("Rahlingsweg");
        break;
    }
    case 259031:
    {
        returnValue = F("Rahlmeckeweg");
        break;
    }
    case 259032:
    {
        returnValue = F("Rahlmühler Str.");
        break;
    }
    case 259033:
    {
        returnValue = F("Rahlsbach");
        break;
    }
    case 259034:
    {
        returnValue = F("Rahlsdiek");
        break;
    }
    case 259035:
    {
        returnValue = F("Rahlstedter Heideweg");
        break;
    }
    case 259036:
    {
        returnValue = F("Rahlstedter Str.");
        break;
    }
    case 259037:
    {
        returnValue = F("Rahm");
        break;
    }
    case 259038:
    {
        returnValue = F("Rahmannstr.");
        break;
    }
    case 259039:
    {
        returnValue = F("Rahmbeek");
        break;
    }
    case 259040:
    {
        returnValue = F("Rahmdörne");
        break;
    }
    case 259041:
    {
        returnValue = F("Rahmedestr.");
        break;
    }
    case 259042:
    {
        returnValue = F("Rahmenberg");
        break;
    }
    case 259043:
    {
        returnValue = F("Rahmengartenstr.");
        break;
    }
    case 259044:
    {
        returnValue = F("Rahmengasse");
        break;
    }
    case 259045:
    {
        returnValue = F("Rahmengäßchen");
        break;
    }
    case 259046:
    {
        returnValue = F("Rahmenkamp");
        break;
    }
    case 259047:
    {
        returnValue = F("Rahmenplatz");
        break;
    }
    case 259048:
    {
        returnValue = F("Rahmenstr.");
        break;
    }
    case 259049:
    {
        returnValue = F("Rahmental");
        break;
    }
    case 259050:
    {
        returnValue = F("Rahmenweg");
        break;
    }
    case 259051:
    {
        returnValue = F("Rahmer Kirchweg");
        break;
    }
    case 259052:
    {
        returnValue = F("Rahmer Str.");
        break;
    }
    case 259053:
    {
        returnValue = F("Rahmerweg");
        break;
    }
    case 259054:
    {
        returnValue = F("Rahmesstr.");
        break;
    }
    case 259055:
    {
        returnValue = F("Rahmfeld");
        break;
    }
    case 259056:
    {
        returnValue = F("Rahmgasse");
        break;
    }
    case 259057:
    {
        returnValue = F("Rahmgäßchen");
        break;
    }
    case 259058:
    {
        returnValue = F("Rahmheide");
        break;
    }
    case 259059:
    {
        returnValue = F("Rahmhof");
        break;
    }
    case 259060:
    {
        returnValue = F("Rahmhofstr.");
        break;
    }
    case 259061:
    {
        returnValue = F("Rahmhügel");
        break;
    }
    case 259062:
    {
        returnValue = F("Rahmkesweg");
        break;
    }
    case 259063:
    {
        returnValue = F("Rahmmarkt");
        break;
    }
    case 259064:
    {
        returnValue = F("Rahms");
        break;
    }
    case 259065:
    {
        returnValue = F("Rahmsloher Weg");
        break;
    }
    case 259066:
    {
        returnValue = F("Rahmstorfer Str.");
        break;
    }
    case 259067:
    {
        returnValue = F("Rahmstr.");
        break;
    }
    case 259068:
    {
        returnValue = F("Rahmswiese");
        break;
    }
    case 259069:
    {
        returnValue = F("Rahmwallstr.");
        break;
    }
    case 259070:
    {
        returnValue = F("Rahmweg");
        break;
    }
    case 259071:
    {
        returnValue = F("Rahmäckerweg");
        break;
    }
    case 259072:
    {
        returnValue = F("Rahnberg");
        break;
    }
    case 259073:
    {
        returnValue = F("Rahneggstr.");
        break;
    }
    case 259074:
    {
        returnValue = F("Rahnenfelde");
        break;
    }
    case 259075:
    {
        returnValue = F("Rahnenstr.");
        break;
    }
    case 259076:
    {
        returnValue = F("Rahnestr.");
        break;
    }
    case 259077:
    {
        returnValue = F("Rahnfelsstr.");
        break;
    }
    case 259078:
    {
        returnValue = F("Rahnhorster Weg");
        break;
    }
    case 259079:
    {
        returnValue = F("Rahnsberg");
        break;
    }
    case 259080:
    {
        returnValue = F("Rahnsdorfer Lindenstr.");
        break;
    }
    case 259081:
    {
        returnValue = F("Rahnsdorfer Str.");
        break;
    }
    case 259082:
    {
        returnValue = F("Rahnsdorfer Weg");
        break;
    }
    case 259083:
    {
        returnValue = F("Rahnstr.");
        break;
    }
    case 259084:
    {
        returnValue = F("Rahnstraat");
        break;
    }
    case 259085:
    {
        returnValue = F("Rahnstädter Weg");
        break;
    }
    case 259086:
    {
        returnValue = F("Rahracker");
        break;
    }
    case 259087:
    {
        returnValue = F("Rahrbachtalstr.");
        break;
    }
    case 259088:
    {
        returnValue = F("Rahrbergweg");
        break;
    }
    case 259089:
    {
        returnValue = F("Rahrdumer Anlage");
        break;
    }
    case 259090:
    {
        returnValue = F("Rahrdumer Kamp");
        break;
    }
    case 259091:
    {
        returnValue = F("Rahrdumer Schweiz");
        break;
    }
    case 259092:
    {
        returnValue = F("Rahrdumer Str.");
        break;
    }
    case 259093:
    {
        returnValue = F("Rahrfeldweg");
        break;
    }
    case 259094:
    {
        returnValue = F("Rahrsberg");
        break;
    }
    case 259095:
    {
        returnValue = F("Rahrshorn");
        break;
    }
    case 259096:
    {
        returnValue = F("Rahrtshagen");
        break;
    }
    case 259097:
    {
        returnValue = F("Rahrtstr.");
        break;
    }
    case 259098:
    {
        returnValue = F("Rahrtweg");
        break;
    }
    case 259099:
    {
        returnValue = F("Rahserstr.");
        break;
    }
    case 259100:
    {
        returnValue = F("Rahstorf");
        break;
    }
    case 259101:
    {
        returnValue = F("Rahwiesenweg");
        break;
    }
    case 259102:
    {
        returnValue = F("Raibacher Str.");
        break;
    }
    case 259103:
    {
        returnValue = F("Raibacher Tal");
        break;
    }
    case 259104:
    {
        returnValue = F("Raibacher Weg");
        break;
    }
    case 259105:
    {
        returnValue = F("Raichbergstr.");
        break;
    }
    case 259106:
    {
        returnValue = F("Raichbergweg");
        break;
    }
    case 259107:
    {
        returnValue = F("Raichbrunnenweg");
        break;
    }
    case 259108:
    {
        returnValue = F("Raicher Ortsstr.");
        break;
    }
    case 259109:
    {
        returnValue = F("Raidegrundweg");
        break;
    }
    case 259110:
    {
        returnValue = F("Raidelbacher Str.");
        break;
    }
    case 259111:
    {
        returnValue = F("Raidenstr.");
        break;
    }
    case 259112:
    {
        returnValue = F("Raiderweg");
        break;
    }
    case 259113:
    {
        returnValue = F("Raidhalde");
        break;
    }
    case 259114:
    {
        returnValue = F("Raidinger Str.");
        break;
    }
    case 259115:
    {
        returnValue = F("Raidslaawswai");
        break;
    }
    case 259116:
    {
        returnValue = F("Raidtweg");
        break;
    }
    case 259117:
    {
        returnValue = F("Raidwanger Str.");
        break;
    }
    case 259118:
    {
        returnValue = F("Raidwanger Weg");
        break;
    }
    case 259119:
    {
        returnValue = F("Raidweg");
        break;
    }
    case 259120:
    {
        returnValue = F("Raifeisenstr.");
        break;
    }
    case 259121:
    {
        returnValue = F("Raiffaisenstr.");
        break;
    }
    case 259122:
    {
        returnValue = F("Raiffeisen Str.");
        break;
    }
    case 259123:
    {
        returnValue = F("Raiffeisen-Karree");
        break;
    }
    case 259124:
    {
        returnValue = F("Raiffeisen-Platz");
        break;
    }
    case 259125:
    {
        returnValue = F("Raiffeisenallee");
        break;
    }
    case 259126:
    {
        returnValue = F("Raiffeisendamm");
        break;
    }
    case 259127:
    {
        returnValue = F("Raiffeisengasse");
        break;
    }
    case 259128:
    {
        returnValue = F("Raiffeisengäßje");
        break;
    }
    case 259129:
    {
        returnValue = F("Raiffeisenpfad");
        break;
    }
    case 259130:
    {
        returnValue = F("Raiffeisenplatz");
        break;
    }
    case 259131:
    {
        returnValue = F("Raiffeisenring");
        break;
    }
    case 259132:
    {
        returnValue = F("Raiffeisenstieg");
        break;
    }
    case 259133:
    {
        returnValue = F("Raiffeisenstr.");
        break;
    }
    case 259134:
    {
        returnValue = F("Raiffeisenstraat");
        break;
    }
    case 259135:
    {
        returnValue = F("Raiffeisenstrasse");
        break;
    }
    case 259136:
    {
        returnValue = F("Raiffeisenweg");
        break;
    }
    case 259137:
    {
        returnValue = F("Raiffeisenwäi");
        break;
    }
    case 259138:
    {
        returnValue = F("Raiffenstr.");
        break;
    }
    case 259139:
    {
        returnValue = F("Raifspangenweg");
        break;
    }
    case 259140:
    {
        returnValue = F("Raigeringer Dorfstr.");
        break;
    }
    case 259141:
    {
        returnValue = F("Raigeringer Str.");
        break;
    }
    case 259142:
    {
        returnValue = F("Raigeringer Weg");
        break;
    }
    case 259143:
    {
        returnValue = F("Raigerwaldweg");
        break;
    }
    case 259144:
    {
        returnValue = F("Raigrasweg");
        break;
    }
    case 259145:
    {
        returnValue = F("Raiherwiesenstr.");
        break;
    }
    case 259146:
    {
        returnValue = F("Raihingstr.");
        break;
    }
    case 259147:
    {
        returnValue = F("Raila");
        break;
    }
    case 259148:
    {
        returnValue = F("Railhofer Str.");
        break;
    }
    case 259149:
    {
        returnValue = F("Railhöfer Str.");
        break;
    }
    case 259150:
    {
        returnValue = F("Raimannweg");
        break;
    }
    case 259151:
    {
        returnValue = F("Raimartihofweg");
        break;
    }
    case 259152:
    {
        returnValue = F("Raimlingstr.");
        break;
    }
    case 259153:
    {
        returnValue = F("Raimund Frei-Weg");
        break;
    }
    case 259154:
    {
        returnValue = F("Raimund-Baumann-Str.");
        break;
    }
    case 259155:
    {
        returnValue = F("Raimund-Biedenbach-Str.");
        break;
    }
    case 259156:
    {
        returnValue = F("Raimund-Harmstorf-Weg");
        break;
    }
    case 259157:
    {
        returnValue = F("Raimund-Huber-Str.");
        break;
    }
    case 259158:
    {
        returnValue = F("Raimund-Kreuzer-Str.");
        break;
    }
    case 259159:
    {
        returnValue = F("Raimund-Veith-Str.");
        break;
    }
    case 259160:
    {
        returnValue = F("Raimund-Wolf-Weg");
        break;
    }
    case 259161:
    {
        returnValue = F("Raimundistr.");
        break;
    }
    case 259162:
    {
        returnValue = F("Raimundstr.");
        break;
    }
    case 259163:
    {
        returnValue = F("Rain");
        break;
    }
    case 259164:
    {
        returnValue = F("Rainacker");
        break;
    }
    case 259165:
    {
        returnValue = F("Rainackerweg");
        break;
    }
    case 259166:
    {
        returnValue = F("Rainanlage \"Rainchen");
        break;
    }
    case 259167:
    {
        returnValue = F("Rainaplatz");
        break;
    }
    case 259168:
    {
        returnValue = F("Rainastr.");
        break;
    }
    case 259169:
    {
        returnValue = F("Rainbach");
        break;
    }
    case 259170:
    {
        returnValue = F("Rainbachstr.");
        break;
    }
    case 259171:
    {
        returnValue = F("Rainbachweg");
        break;
    }
    case 259172:
    {
        returnValue = F("Rainbauerngasse");
        break;
    }
    case 259173:
    {
        returnValue = F("Rainbaum");
        break;
    }
    case 259174:
    {
        returnValue = F("Rainberg");
        break;
    }
    case 259175:
    {
        returnValue = F("Rainbergstr.");
        break;
    }
    case 259176:
    {
        returnValue = F("Rainbergweg");
        break;
    }
    case 259177:
    {
        returnValue = F("Rainbichlweg");
        break;
    }
    case 259178:
    {
        returnValue = F("Rainbrunnenstr.");
        break;
    }
    case 259179:
    {
        returnValue = F("Rainbrunnenweg");
        break;
    }
    case 259180:
    {
        returnValue = F("Rainbrücke");
        break;
    }
    case 259181:
    {
        returnValue = F("Rainbrünnlein");
        break;
    }
    case 259182:
    {
        returnValue = F("Rainbügl");
        break;
    }
    case 259183:
    {
        returnValue = F("Rainbühlgasse");
        break;
    }
    case 259184:
    {
        returnValue = F("Rainchen");
        break;
    }
    case 259185:
    {
        returnValue = F("Raindinger Hauptstr.");
        break;
    }
    case 259186:
    {
        returnValue = F("Raindlinger Weg");
        break;
    }
    case 259187:
    {
        returnValue = F("Raindorfer Hauptstr.");
        break;
    }
    case 259188:
    {
        returnValue = F("Raindorfer Mühlenweg");
        break;
    }
    case 259189:
    {
        returnValue = F("Raindorfer Str.");
        break;
    }
    case 259190:
    {
        returnValue = F("Raindorfer Weg");
        break;
    }
    case 259191:
    {
        returnValue = F("Raineck");
        break;
    }
    case 259192:
    {
        returnValue = F("Rainen");
        break;
    }
    case 259193:
    {
        returnValue = F("Rainenstr.");
        break;
    }
    case 259194:
    {
        returnValue = F("Rainer Hellwig-Weg");
        break;
    }
    case 259195:
    {
        returnValue = F("Rainer Str.");
        break;
    }
    case 259196:
    {
        returnValue = F("Rainer Weg");
        break;
    }
    case 259197:
    {
        returnValue = F("Rainer-A.-Krewerth-Str.");
        break;
    }
    case 259198:
    {
        returnValue = F("Rainer-Christlein-Weg");
        break;
    }
    case 259199:
    {
        returnValue = F("Rainer-Dierichs-Platz");
        break;
    }
    case 259200:
    {
        returnValue = F("Rainer-Hamacher-Allee");
        break;
    }
    case 259201:
    {
        returnValue = F("Rainer-Langen-Weg");
        break;
    }
    case 259202:
    {
        returnValue = F("Rainer-Lemoine-Allee");
        break;
    }
    case 259203:
    {
        returnValue = F("Rainer-Maria-Rilke-Str.");
        break;
    }
    case 259204:
    {
        returnValue = F("Rainer-Maria-Rilke-Weg");
        break;
    }
    case 259205:
    {
        returnValue = F("Rainer-Plein-Weg");
        break;
    }
    case 259206:
    {
        returnValue = F("Rainer-Wirthmann-Weg");
        break;
    }
    case 259207:
    {
        returnValue = F("Rainer-Zille-Str.");
        break;
    }
    case 259208:
    {
        returnValue = F("Raineralmweg");
        break;
    }
    case 259209:
    {
        returnValue = F("Rainerfeld");
        break;
    }
    case 259210:
    {
        returnValue = F("Rainerstr.");
        break;
    }
    case 259211:
    {
        returnValue = F("Rainerweg");
        break;
    }
    case 259212:
    {
        returnValue = F("Raineweg");
        break;
    }
    case 259213:
    {
        returnValue = F("Rainfarn");
        break;
    }
    case 259214:
    {
        returnValue = F("Rainfarnstr.");
        break;
    }
    case 259215:
    {
        returnValue = F("Rainfarnweg");
        break;
    }
    case 259216:
    {
        returnValue = F("Rainfeldstr.");
        break;
    }
    case 259217:
    {
        returnValue = F("Raingarten");
        break;
    }
    case 259218:
    {
        returnValue = F("Raingartenstr.");
        break;
    }
    case 259219:
    {
        returnValue = F("Raingartenweg");
        break;
    }
    case 259220:
    {
        returnValue = F("Raingasse");
        break;
    }
    case 259221:
    {
        returnValue = F("Raingewannweg");
        break;
    }
    case 259222:
    {
        returnValue = F("Raingärten");
        break;
    }
    case 259223:
    {
        returnValue = F("Raingärtlestr.");
        break;
    }
    case 259224:
    {
        returnValue = F("Raingärtlesweg");
        break;
    }
    case 259225:
    {
        returnValue = F("Raingäßchen");
        break;
    }
    case 259226:
    {
        returnValue = F("Rainhalde");
        break;
    }
    case 259227:
    {
        returnValue = F("Rainhaldenweg");
        break;
    }
    case 259228:
    {
        returnValue = F("Rainhang");
        break;
    }
    case 259229:
    {
        returnValue = F("Rainhardstal");
        break;
    }
    case 259230:
    {
        returnValue = F("Rainhausgasse");
        break;
    }
    case 259231:
    {
        returnValue = F("Rainhaustr.");
        break;
    }
    case 259232:
    {
        returnValue = F("Rainhausträßle");
        break;
    }
    case 259233:
    {
        returnValue = F("Rainhauweg");
        break;
    }
    case 259234:
    {
        returnValue = F("Rainhof");
        break;
    }
    case 259235:
    {
        returnValue = F("Rainholzstr.");
        break;
    }
    case 259236:
    {
        returnValue = F("Rainholzweg");
        break;
    }
    case 259237:
    {
        returnValue = F("Rainhäuser");
        break;
    }
    case 259238:
    {
        returnValue = F("Rainhäuslweg");
        break;
    }
    case 259239:
    {
        returnValue = F("Rainle");
        break;
    }
    case 259240:
    {
        returnValue = F("Rainlebühl");
        break;
    }
    case 259241:
    {
        returnValue = F("Rainlenstr.");
        break;
    }
    case 259242:
    {
        returnValue = F("Rainlesbachweg");
        break;
    }
    case 259243:
    {
        returnValue = F("Rainlesberg");
        break;
    }
    case 259244:
    {
        returnValue = F("Rainlesstr.");
        break;
    }
    case 259245:
    {
        returnValue = F("Rainleäckerstr.");
        break;
    }
    case 259246:
    {
        returnValue = F("Rainpadent");
        break;
    }
    case 259247:
    {
        returnValue = F("Rainröder Str.");
        break;
    }
    case 259248:
    {
        returnValue = F("Rainröder Weg");
        break;
    }
    case 259249:
    {
        returnValue = F("Rainsberg");
        break;
    }
    case 259250:
    {
        returnValue = F("Rainsborn");
        break;
    }
    case 259251:
    {
        returnValue = F("Rainstallweg");
        break;
    }
    case 259252:
    {
        returnValue = F("Rainstaude");
        break;
    }
    case 259253:
    {
        returnValue = F("Rainsteig");
        break;
    }
    case 259254:
    {
        returnValue = F("Rainstr.");
        break;
    }
    case 259255:
    {
        returnValue = F("Rainsweg");
        break;
    }
    case 259256:
    {
        returnValue = F("Raintal");
        break;
    }
    case 259257:
    {
        returnValue = F("Raintaler Str.");
        break;
    }
    case 259258:
    {
        returnValue = F("Raintalstr.");
        break;
    }
    case 259259:
    {
        returnValue = F("Rainthalstr.");
        break;
    }
    case 259260:
    {
        returnValue = F("Raintinger Str.");
        break;
    }
    case 259261:
    {
        returnValue = F("Rainuferstr.");
        break;
    }
    case 259262:
    {
        returnValue = F("Rainwaldstr.");
        break;
    }
    case 259263:
    {
        returnValue = F("Rainwaldweg");
        break;
    }
    case 259264:
    {
        returnValue = F("Rainweg");
        break;
    }
    case 259265:
    {
        returnValue = F("Rainweidenstr.");
        break;
    }
    case 259266:
    {
        returnValue = F("Rainwiese");
        break;
    }
    case 259267:
    {
        returnValue = F("Rainwiesen");
        break;
    }
    case 259268:
    {
        returnValue = F("Rainwiesenhof");
        break;
    }
    case 259269:
    {
        returnValue = F("Rainwiesenstr.");
        break;
    }
    case 259270:
    {
        returnValue = F("Rainwiesenweg");
        break;
    }
    case 259271:
    {
        returnValue = F("Rainäckerstr.");
        break;
    }
    case 259272:
    {
        returnValue = F("Rainäckerweg");
        break;
    }
    case 259273:
    {
        returnValue = F("Raisachweg");
        break;
    }
    case 259274:
    {
        returnValue = F("Raisberg");
        break;
    }
    case 259275:
    {
        returnValue = F("Raischenpeckstr.");
        break;
    }
    case 259276:
    {
        returnValue = F("Raisdorfer Holz");
        break;
    }
    case 259277:
    {
        returnValue = F("Raisdorfer Str.");
        break;
    }
    case 259278:
    {
        returnValue = F("Raise");
        break;
    }
    case 259279:
    {
        returnValue = F("Raisenweg");
        break;
    }
    case 259280:
    {
        returnValue = F("Raiserstr.");
        break;
    }
    case 259281:
    {
        returnValue = F("Raismeser Str.");
        break;
    }
    case 259282:
    {
        returnValue = F("Raistinger Str.");
        break;
    }
    case 259283:
    {
        returnValue = F("Raitbach");
        break;
    }
    case 259284:
    {
        returnValue = F("Raitbach-Am Bahnhof");
        break;
    }
    case 259285:
    {
        returnValue = F("Raitbergweg");
        break;
    }
    case 259286:
    {
        returnValue = F("Raitebergweg");
        break;
    }
    case 259287:
    {
        returnValue = F("Raitelbergstr.");
        break;
    }
    case 259288:
    {
        returnValue = F("Raitelsbergstr.");
        break;
    }
    case 259289:
    {
        returnValue = F("Raitenaugasse");
        break;
    }
    case 259290:
    {
        returnValue = F("Raitenberg");
        break;
    }
    case 259291:
    {
        returnValue = F("Raitenbuch A");
        break;
    }
    case 259292:
    {
        returnValue = F("Raitenbuch B");
        break;
    }
    case 259293:
    {
        returnValue = F("Raitenbuch C");
        break;
    }
    case 259294:
    {
        returnValue = F("Raitenbuch D");
        break;
    }
    case 259295:
    {
        returnValue = F("Raitenbuch E");
        break;
    }
    case 259296:
    {
        returnValue = F("Raitenbuch F");
        break;
    }
    case 259297:
    {
        returnValue = F("Raitenbucher Str.");
        break;
    }
    case 259298:
    {
        returnValue = F("Raitener Str.");
        break;
    }
    case 259299:
    {
        returnValue = F("Raitengasse");
        break;
    }
    case 259300:
    {
        returnValue = F("Raitenharter Str.");
        break;
    }
    case 259301:
    {
        returnValue = F("Raitersaicher Str.");
        break;
    }
    case 259302:
    {
        returnValue = F("Raitersaicher Weg");
        break;
    }
    case 259303:
    {
        returnValue = F("Raitersberg");
        break;
    }
    case 259304:
    {
        returnValue = F("Raitestr.");
        break;
    }
    case 259305:
    {
        returnValue = F("Raithelhuberstr.");
        break;
    }
    case 259306:
    {
        returnValue = F("Raithelplatz");
        break;
    }
    case 259307:
    {
        returnValue = F("Raithelstr.");
        break;
    }
    case 259308:
    {
        returnValue = F("Raithenbach");
        break;
    }
    case 259309:
    {
        returnValue = F("Raithenbachstr.");
        break;
    }
    case 259310:
    {
        returnValue = F("Raithstr.");
        break;
    }
    case 259311:
    {
        returnValue = F("Raithweg");
        break;
    }
    case 259312:
    {
        returnValue = F("Raithöfle");
        break;
    }
    case 259313:
    {
        returnValue = F("Raitlweg");
        break;
    }
    case 259314:
    {
        returnValue = F("Raitnauerplatz");
        break;
    }
    case 259315:
    {
        returnValue = F("Raitner Str.");
        break;
    }
    case 259316:
    {
        returnValue = F("Raitschin");
        break;
    }
    case 259317:
    {
        returnValue = F("Raitschiner Weg");
        break;
    }
    case 259318:
    {
        returnValue = F("Raitstr.");
        break;
    }
    case 259319:
    {
        returnValue = F("Raitteichweg");
        break;
    }
    case 259320:
    {
        returnValue = F("Raitweg");
        break;
    }
    case 259321:
    {
        returnValue = F("Raitz-von-Frentz-Str.");
        break;
    }
    case 259322:
    {
        returnValue = F("Raitz-von-Frenz-Str.");
        break;
    }
    case 259323:
    {
        returnValue = F("Raiweg");
        break;
    }
    case 259324:
    {
        returnValue = F("Raiwiesenstr.");
        break;
    }
    case 259325:
    {
        returnValue = F("Rajen");
        break;
    }
    case 259326:
    {
        returnValue = F("Rajensdorfer Weg");
        break;
    }
    case 259327:
    {
        returnValue = F("Rajenstr.");
        break;
    }
    case 259328:
    {
        returnValue = F("Rajenweg");
        break;
    }
    case 259329:
    {
        returnValue = F("Rajewskiplatz");
        break;
    }
    case 259330:
    {
        returnValue = F("Rajoch");
        break;
    }
    case 259331:
    {
        returnValue = F("Rakampshöhe");
        break;
    }
    case 259332:
    {
        returnValue = F("Rakelstuchstr.");
        break;
    }
    case 259333:
    {
        returnValue = F("Rakers Kamp");
        break;
    }
    case 259334:
    {
        returnValue = F("Raketleweg");
        break;
    }
    case 259335:
    {
        returnValue = F("Rakmersstigh");
        break;
    }
    case 259336:
    {
        returnValue = F("Rako-Kamp");
        break;
    }
    case 259337:
    {
        returnValue = F("Rakovnikpassage");
        break;
    }
    case 259338:
    {
        returnValue = F("Rakower Ausbau");
        break;
    }
    case 259339:
    {
        returnValue = F("Rakower Schulstr.");
        break;
    }
    case 259340:
    {
        returnValue = F("Rakower Str.");
        break;
    }
    case 259341:
    {
        returnValue = F("Rakower Weg");
        break;
    }
    case 259342:
    {
        returnValue = F("Rakyweg");
        break;
    }
    case 259343:
    {
        returnValue = F("Raland");
        break;
    }
    case 259344:
    {
        returnValue = F("Ralandstwiet");
        break;
    }
    case 259345:
    {
        returnValue = F("Ralf-Beise-Str.");
        break;
    }
    case 259346:
    {
        returnValue = F("Ralinger Mühle");
        break;
    }
    case 259347:
    {
        returnValue = F("Rallenstieg");
        break;
    }
    case 259348:
    {
        returnValue = F("Rallenstr.");
        break;
    }
    case 259349:
    {
        returnValue = F("Rallenweg");
        break;
    }
    case 259350:
    {
        returnValue = F("Ralleweg");
        break;
    }
    case 259351:
    {
        returnValue = F("Ralph-Benatzky-Str.");
        break;
    }
    case 259352:
    {
        returnValue = F("Ralph-Bunche-Str.");
        break;
    }
    case 259353:
    {
        returnValue = F("Ralph-Müller-Weg");
        break;
    }
    case 259354:
    {
        returnValue = F("Ralschbachstr.");
        break;
    }
    case 259355:
    {
        returnValue = F("Ralscheid");
        break;
    }
    case 259356:
    {
        returnValue = F("Ralshovener Str.");
        break;
    }
    case 259357:
    {
        returnValue = F("Ralves-Karsten-Weg");
        break;
    }
    case 259358:
    {
        returnValue = F("Ramachersfeld");
        break;
    }
    case 259359:
    {
        returnValue = F("Ramaker Weg");
        break;
    }
    case 259360:
    {
        returnValue = F("Ramakersweg");
        break;
    }
    case 259361:
    {
        returnValue = F("Ramannstr.");
        break;
    }
    case 259362:
    {
        returnValue = F("Ramattenweg");
        break;
    }
    case 259363:
    {
        returnValue = F("Ramaweg");
        break;
    }
    case 259364:
    {
        returnValue = F("Rambach");
        break;
    }
    case 259365:
    {
        returnValue = F("Rambacher Str.");
        break;
    }
    case 259366:
    {
        returnValue = F("Rambachstr.");
        break;
    }
    case 259367:
    {
        returnValue = F("Rambachweg");
        break;
    }
    case 259368:
    {
        returnValue = F("Rambaldistr.");
        break;
    }
    case 259369:
    {
        returnValue = F("Rambeckgasse");
        break;
    }
    case 259370:
    {
        returnValue = F("Rambeeler Str.");
        break;
    }
    case 259371:
    {
        returnValue = F("Ramberg");
        break;
    }
    case 259372:
    {
        returnValue = F("Ramberg I");
        break;
    }
    case 259373:
    {
        returnValue = F("Ramberg II");
        break;
    }
    case 259374:
    {
        returnValue = F("Ramberg-Garten");
        break;
    }
    case 259375:
    {
        returnValue = F("Ramberger Weg");
        break;
    }
    case 259376:
    {
        returnValue = F("Rambergstr.");
        break;
    }
    case 259377:
    {
        returnValue = F("Rambergsweg");
        break;
    }
    case 259378:
    {
        returnValue = F("Rambergweg");
        break;
    }
    case 259379:
    {
        returnValue = F("Rambertweg");
        break;
    }
    case 259380:
    {
        returnValue = F("Rambervillersstr.");
        break;
    }
    case 259381:
    {
        returnValue = F("Rambo");
        break;
    }
    case 259382:
    {
        returnValue = F("Ramboldshausenweg");
        break;
    }
    case 259383:
    {
        returnValue = F("Rambouillet-Platz");
        break;
    }
    case 259384:
    {
        returnValue = F("Rambouxstr.");
        break;
    }
    case 259385:
    {
        returnValue = F("Rambow Hof");
        break;
    }
    case 259386:
    {
        returnValue = F("Rambow Mitte");
        break;
    }
    case 259387:
    {
        returnValue = F("Rambower Allee");
        break;
    }
    case 259388:
    {
        returnValue = F("Rambower Chaussee");
        break;
    }
    case 259389:
    {
        returnValue = F("Rambower Hauptstr.");
        break;
    }
    case 259390:
    {
        returnValue = F("Rambower Str.");
        break;
    }
    case 259391:
    {
        returnValue = F("Rambower Weg");
        break;
    }
    case 259392:
    {
        returnValue = F("Rambrücken");
        break;
    }
    case 259393:
    {
        returnValue = F("Rambrücker Mühlenweg");
        break;
    }
    case 259394:
    {
        returnValue = F("Ramburgstr.");
        break;
    }
    case 259395:
    {
        returnValue = F("Rambusch");
        break;
    }
    case 259396:
    {
        returnValue = F("Ramdohrscher Park");
        break;
    }
    case 259397:
    {
        returnValue = F("Ramdohrstr.");
        break;
    }
    case 259398:
    {
        returnValue = F("Rameler Kamp");
        break;
    }
    case 259399:
    {
        returnValue = F("Ramels");
        break;
    }
    case 259400:
    {
        returnValue = F("Ramelsen");
        break;
    }
    case 259401:
    {
        returnValue = F("Ramelshovener Str.");
        break;
    }
    case 259402:
    {
        returnValue = F("Ramelsloher Allee");
        break;
    }
    case 259403:
    {
        returnValue = F("Ramena");
        break;
    }
    case 259404:
    {
        returnValue = F("Ramensteinweg");
        break;
    }
    case 259405:
    {
        returnValue = F("Ramerberger Str.");
        break;
    }
    case 259406:
    {
        returnValue = F("Ramers Kamp");
        break;
    }
    case 259407:
    {
        returnValue = F("Ramersbacher Str.");
        break;
    }
    case 259408:
    {
        returnValue = F("Ramersbacherstr.");
        break;
    }
    case 259409:
    {
        returnValue = F("Ramersbachweg");
        break;
    }
    case 259410:
    {
        returnValue = F("Ramersberger Weg");
        break;
    }
    case 259411:
    {
        returnValue = F("Ramersdorf");
        break;
    }
    case 259412:
    {
        returnValue = F("Ramersdorfer Str.");
        break;
    }
    case 259413:
    {
        returnValue = F("Ramersdorfer Weg");
        break;
    }
    case 259414:
    {
        returnValue = F("Ramershovener Str.");
        break;
    }
    case 259415:
    {
        returnValue = F("Ramertshofen");
        break;
    }
    case 259416:
    {
        returnValue = F("Ramertsweg");
        break;
    }
    case 259417:
    {
        returnValue = F("Rameröder Mühlweg");
        break;
    }
    case 259418:
    {
        returnValue = F("Ramesbach");
        break;
    }
    case 259419:
    {
        returnValue = F("Ramesdorfer Weg");
        break;
    }
    case 259420:
    {
        returnValue = F("Rametnacher Weg");
        break;
    }
    case 259421:
    {
        returnValue = F("Rametshalde");
        break;
    }
    case 259422:
    {
        returnValue = F("Ramey Boulevard");
        break;
    }
    case 259423:
    {
        returnValue = F("Ramgestr.");
        break;
    }
    case 259424:
    {
        returnValue = F("Ramgraben");
        break;
    }
    case 259425:
    {
        returnValue = F("Ramhofstr.");
        break;
    }
    case 259426:
    {
        returnValue = F("Ramholm");
        break;
    }
    case 259427:
    {
        returnValue = F("Ramholzer Str.");
        break;
    }
    case 259428:
    {
        returnValue = F("Ramhorstweg");
        break;
    }
    case 259429:
    {
        returnValue = F("Ramhusen");
        break;
    }
    case 259430:
    {
        returnValue = F("Ramie-Str.");
        break;
    }
    case 259431:
    {
        returnValue = F("Raminer Str.");
        break;
    }
    case 259432:
    {
        returnValue = F("Ramitz");
        break;
    }
    case 259433:
    {
        returnValue = F("Ramitz Siedlung");
        break;
    }
    case 259434:
    {
        returnValue = F("Ramitzow");
        break;
    }
    case 259435:
    {
        returnValue = F("Ramker Str.");
        break;
    }
    case 259436:
    {
        returnValue = F("Ramker Weg");
        break;
    }
    case 259437:
    {
        returnValue = F("Ramling");
        break;
    }
    case 259438:
    {
        returnValue = F("Ramlinger Str.");
        break;
    }
    case 259439:
    {
        returnValue = F("Ramm");
        break;
    }
    case 259440:
    {
        returnValue = F("Rammberg");
        break;
    }
    case 259441:
    {
        returnValue = F("Rammberger Weg");
        break;
    }
    case 259442:
    {
        returnValue = F("Rammdalgraben");
        break;
    }
    case 259443:
    {
        returnValue = F("Rammelberg");
        break;
    }
    case 259444:
    {
        returnValue = F("Rammelburger Dorfstr.");
        break;
    }
    case 259445:
    {
        returnValue = F("Rammelburger Hauptstr.");
        break;
    }
    case 259446:
    {
        returnValue = F("Rammelburger Weg");
        break;
    }
    case 259447:
    {
        returnValue = F("Rammelfanger Str.");
        break;
    }
    case 259448:
    {
        returnValue = F("Rammelkam");
        break;
    }
    case 259449:
    {
        returnValue = F("Rammelsbacher Str.");
        break;
    }
    case 259450:
    {
        returnValue = F("Rammelsbacher Weg");
        break;
    }
    case 259451:
    {
        returnValue = F("Rammelsbachstr.");
        break;
    }
    case 259452:
    {
        returnValue = F("Rammelsberger Str.");
        break;
    }
    case 259453:
    {
        returnValue = F("Rammelsberger Weg");
        break;
    }
    case 259454:
    {
        returnValue = F("Rammelsbergstr.");
        break;
    }
    case 259455:
    {
        returnValue = F("Rammelsbergweg");
        break;
    }
    case 259456:
    {
        returnValue = F("Rammelsgrabenweg");
        break;
    }
    case 259457:
    {
        returnValue = F("Rammelsteiner Weg");
        break;
    }
    case 259458:
    {
        returnValue = F("Rammelsweg");
        break;
    }
    case 259459:
    {
        returnValue = F("Rammelteichweg");
        break;
    }
    case 259460:
    {
        returnValue = F("Rammelterweg");
        break;
    }
    case 259461:
    {
        returnValue = F("Rammenau, J.-G.-Fichte-Str.");
        break;
    }
    case 259462:
    {
        returnValue = F("Rammenauer Steg");
        break;
    }
    case 259463:
    {
        returnValue = F("Rammenauer Str.");
        break;
    }
    case 259464:
    {
        returnValue = F("Rammenauer Weg");
        break;
    }
    case 259465:
    {
        returnValue = F("Rammenfeld");
        break;
    }
    case 259466:
    {
        returnValue = F("Rammentalweg");
        break;
    }
    case 259467:
    {
        returnValue = F("Rammer Weg");
        break;
    }
    case 259468:
    {
        returnValue = F("Rammersberg");
        break;
    }
    case 259469:
    {
        returnValue = F("Rammersdorf");
        break;
    }
    case 259470:
    {
        returnValue = F("Rammersdorfer Str.");
        break;
    }
    case 259471:
    {
        returnValue = F("Rammersvehn");
        break;
    }
    case 259472:
    {
        returnValue = F("Rammersweierstr.");
        break;
    }
    case 259473:
    {
        returnValue = F("Rammertblick");
        break;
    }
    case 259474:
    {
        returnValue = F("Rammertshof");
        break;
    }
    case 259475:
    {
        returnValue = F("Rammertstr.");
        break;
    }
    case 259476:
    {
        returnValue = F("Rammertweg");
        break;
    }
    case 259477:
    {
        returnValue = F("Rammestr.");
        break;
    }
    case 259478:
    {
        returnValue = F("Rammeweg");
        break;
    }
    case 259479:
    {
        returnValue = F("Rammheidstr.");
        break;
    }
    case 259480:
    {
        returnValue = F("Ramminger Str.");
        break;
    }
    case 259481:
    {
        returnValue = F("Rammingerstr.");
        break;
    }
    case 259482:
    {
        returnValue = F("Rammrathbrücke");
        break;
    }
    case 259483:
    {
        returnValue = F("Rammscheweg");
        break;
    }
    case 259484:
    {
        returnValue = F("Rammseer Berg");
        break;
    }
    case 259485:
    {
        returnValue = F("Rammseer Weg");
        break;
    }
    case 259486:
    {
        returnValue = F("Rammseestr.");
        break;
    }
    case 259487:
    {
        returnValue = F("Rammsiepen");
        break;
    }
    case 259488:
    {
        returnValue = F("Rammskrug");
        break;
    }
    case 259489:
    {
        returnValue = F("Rammsmoor");
        break;
    }
    case 259490:
    {
        returnValue = F("Rammsweg");
        break;
    }
    case 259491:
    {
        returnValue = F("Rammtorstr.");
        break;
    }
    case 259492:
    {
        returnValue = F("Rammweg");
        break;
    }
    case 259493:
    {
        returnValue = F("Ramnest");
        break;
    }
    case 259494:
    {
        returnValue = F("Ramnestweg");
        break;
    }
    case 259495:
    {
        returnValue = F("Ramoldplatz");
        break;
    }
    case 259496:
    {
        returnValue = F("Ramoltstr.");
        break;
    }
    case 259497:
    {
        returnValue = F("Ramonchamp-Platz");
        break;
    }
    case 259498:
    {
        returnValue = F("Ramonville Str.");
        break;
    }
    case 259499:
    {
        returnValue = F("Ramoserstr.");
        break;
    }
    case 259500:
    {
        returnValue = F("Rampacherstr.");
        break;
    }
    case 259501:
    {
        returnValue = F("Rampachertal");
        break;
    }
    case 259502:
    {
        returnValue = F("Rampe");
        break;
    }
    case 259503:
    {
        returnValue = F("Rampe 1");
        break;
    }
    case 259504:
    {
        returnValue = F("Rampe 2");
        break;
    }
    case 259505:
    {
        returnValue = F("Rampe 3");
        break;
    }
    case 259506:
    {
        returnValue = F("Rampe 4");
        break;
    }
    case 259507:
    {
        returnValue = F("Rampe zur Slipstelle");
        break;
    }
    case 259508:
    {
        returnValue = F("Rampen");
        break;
    }
    case 259509:
    {
        returnValue = F("Rampendal");
        break;
    }
    case 259510:
    {
        returnValue = F("Rampenloch");
        break;
    }
    case 259511:
    {
        returnValue = F("Rampenstr.");
        break;
    }
    case 259512:
    {
        returnValue = F("Rampenweg");
        break;
    }
    case 259513:
    {
        returnValue = F("Rampertshof");
        break;
    }
    case 259514:
    {
        returnValue = F("Rampfweg");
        break;
    }
    case 259515:
    {
        returnValue = F("Rampische Str.");
        break;
    }
    case 259516:
    {
        returnValue = F("Rampitzer Str.");
        break;
    }
    case 259517:
    {
        returnValue = F("Rampoldshalde");
        break;
    }
    case 259518:
    {
        returnValue = F("Rampoldsheim");
        break;
    }
    case 259519:
    {
        returnValue = F("Ramprechtstr.");
        break;
    }
    case 259520:
    {
        returnValue = F("Rampsberger Str.");
        break;
    }
    case 259521:
    {
        returnValue = F("Ramrather Str.");
        break;
    }
    case 259522:
    {
        returnValue = F("Ramrather Weg");
        break;
    }
    case 259523:
    {
        returnValue = F("Ramsacher Str.");
        break;
    }
    case 259524:
    {
        returnValue = F("Ramsacherstr.");
        break;
    }
    case 259525:
    {
        returnValue = F("Ramsau");
        break;
    }
    case 259526:
    {
        returnValue = F("Ramsauer Str.");
        break;
    }
    case 259527:
    {
        returnValue = F("Ramsauer Weg");
        break;
    }
    case 259528:
    {
        returnValue = F("Ramsauerstr.");
        break;
    }
    case 259529:
    {
        returnValue = F("Ramsauerweg");
        break;
    }
    case 259530:
    {
        returnValue = F("Ramsaystr.");
        break;
    }
    case 259531:
    {
        returnValue = F("Ramsbach");
        break;
    }
    case 259532:
    {
        returnValue = F("Ramsbacher Str.");
        break;
    }
    case 259533:
    {
        returnValue = F("Ramsbachstr.");
        break;
    }
    case 259534:
    {
        returnValue = F("Ramsbachweg");
        break;
    }
    case 259535:
    {
        returnValue = F("Ramsberg");
        break;
    }
    case 259536:
    {
        returnValue = F("Ramsberger Str.");
        break;
    }
    case 259537:
    {
        returnValue = F("Ramsberghang");
        break;
    }
    case 259538:
    {
        returnValue = F("Ramsbergstr.");
        break;
    }
    case 259539:
    {
        returnValue = F("Ramsbergweg");
        break;
    }
    case 259540:
    {
        returnValue = F("Ramsborn");
        break;
    }
    case 259541:
    {
        returnValue = F("Ramsbrockring");
        break;
    }
    case 259542:
    {
        returnValue = F("Ramscheid");
        break;
    }
    case 259543:
    {
        returnValue = F("Ramscheider Weg");
        break;
    }
    case 259544:
    {
        returnValue = F("Ramscher Weg");
        break;
    }
    case 259545:
    {
        returnValue = F("Ramschwagstr.");
        break;
    }
    case 259546:
    {
        returnValue = F("Ramsdorfer Hoff");
        break;
    }
    case 259547:
    {
        returnValue = F("Ramsdorfer Postweg");
        break;
    }
    case 259548:
    {
        returnValue = F("Ramsdorfer Str.");
        break;
    }
    case 259549:
    {
        returnValue = F("Ramselehöhenweg");
        break;
    }
    case 259550:
    {
        returnValue = F("Ramselendobelweg");
        break;
    }
    case 259551:
    {
        returnValue = F("Ramseleweg");
        break;
    }
    case 259552:
    {
        returnValue = F("Ramselnweg");
        break;
    }
    case 259553:
    {
        returnValue = F("Ramselstr.");
        break;
    }
    case 259554:
    {
        returnValue = F("Ramsener Str.");
        break;
    }
    case 259555:
    {
        returnValue = F("Ramsenerblickweg");
        break;
    }
    case 259556:
    {
        returnValue = F("Ramsenlochweg");
        break;
    }
    case 259557:
    {
        returnValue = F("Ramsenstruter Str.");
        break;
    }
    case 259558:
    {
        returnValue = F("Ramsenweg");
        break;
    }
    case 259559:
    {
        returnValue = F("Ramser Hohl");
        break;
    }
    case 259560:
    {
        returnValue = F("Ramser Str.");
        break;
    }
    case 259561:
    {
        returnValue = F("Ramshalde");
        break;
    }
    case 259562:
    {
        returnValue = F("Ramshaldweg");
        break;
    }
    case 259563:
    {
        returnValue = F("Ramsharde");
        break;
    }
    case 259564:
    {
        returnValue = F("Ramshausener Str.");
        break;
    }
    case 259565:
    {
        returnValue = F("Ramshof");
        break;
    }
    case 259566:
    {
        returnValue = F("Ramshorn");
        break;
    }
    case 259567:
    {
        returnValue = F("Ramshornweg");
        break;
    }
    case 259568:
    {
        returnValue = F("Ramsiek");
        break;
    }
    case 259569:
    {
        returnValue = F("Ramsiner Str.");
        break;
    }
    case 259570:
    {
        returnValue = F("Ramskamp");
        break;
    }
    case 259571:
    {
        returnValue = F("Ramskamper Weg");
        break;
    }
    case 259572:
    {
        returnValue = F("Ramslaer Hauptstr.");
        break;
    }
    case 259573:
    {
        returnValue = F("Ramslaer Kirchgasse");
        break;
    }
    case 259574:
    {
        returnValue = F("Ramslaer Pfarrgasse");
        break;
    }
    case 259575:
    {
        returnValue = F("Ramslaer Str.");
        break;
    }
    case 259576:
    {
        returnValue = F("Ramsloh");
        break;
    }
    case 259577:
    {
        returnValue = F("Ramsloher Str.");
        break;
    }
    case 259578:
    {
        returnValue = F("Ramsloher Wäldchen");
        break;
    }
    case 259579:
    {
        returnValue = F("Ramsmeierstr.");
        break;
    }
    case 259580:
    {
        returnValue = F("Ramsnackenweg");
        break;
    }
    case 259581:
    {
        returnValue = F("Ramsohlweg");
        break;
    }
    case 259582:
    {
        returnValue = F("Ramspauer Str.");
        break;
    }
    case 259583:
    {
        returnValue = F("Ramsried");
        break;
    }
    case 259584:
    {
        returnValue = F("Ramstalweg");
        break;
    }
    case 259585:
    {
        returnValue = F("Ramstedter Str.");
        break;
    }
    case 259586:
    {
        returnValue = F("Ramsteiner Mühle");
        break;
    }
    case 259587:
    {
        returnValue = F("Ramsteiner Str.");
        break;
    }
    case 259588:
    {
        returnValue = F("Ramsteiner Weg");
        break;
    }
    case 259589:
    {
        returnValue = F("Ramstelsträssle");
        break;
    }
    case 259590:
    {
        returnValue = F("Ramstelweg");
        break;
    }
    case 259591:
    {
        returnValue = F("Ramstertalstr.");
        break;
    }
    case 259592:
    {
        returnValue = F("Ramsthaler Str.");
        break;
    }
    case 259593:
    {
        returnValue = F("Ramungstr.");
        break;
    }
    case 259594:
    {
        returnValue = F("Ramungusweg");
        break;
    }
    case 259595:
    {
        returnValue = F("Ramweg");
        break;
    }
    case 259596:
    {
        returnValue = F("Ramwoldstr.");
        break;
    }
    case 259597:
    {
        returnValue = F("Ramwoldweg");
        break;
    }
    case 259598:
    {
        returnValue = F("Ramäkersweg");
        break;
    }
    case 259599:
    {
        returnValue = F("Ranawerkstr.");
        break;
    }
    case 259600:
    {
        returnValue = F("Ranckhepacherweg");
        break;
    }
    case 259601:
    {
        returnValue = F("Randauer Dorfstr.");
        break;
    }
    case 259602:
    {
        returnValue = F("Randauer Str.");
        break;
    }
    case 259603:
    {
        returnValue = F("Randebrockstr.");
        break;
    }
    case 259604:
    {
        returnValue = F("Randeck");
        break;
    }
    case 259605:
    {
        returnValue = F("Randecker-Maar-Str.");
        break;
    }
    case 259606:
    {
        returnValue = F("Randeckstr.");
        break;
    }
    case 259607:
    {
        returnValue = F("Randegger Str.");
        break;
    }
    case 259608:
    {
        returnValue = F("Randel-Hannemann-Weg");
        break;
    }
    case 259609:
    {
        returnValue = F("Randelbachweg");
        break;
    }
    case 259610:
    {
        returnValue = F("Randelblick");
        break;
    }
    case 259611:
    {
        returnValue = F("Randelshoferweg");
        break;
    }
    case 259612:
    {
        returnValue = F("Randelstr.");
        break;
    }
    case 259613:
    {
        returnValue = F("Randenbahnstr.");
        break;
    }
    case 259614:
    {
        returnValue = F("Randenbergfeld");
        break;
    }
    case 259615:
    {
        returnValue = F("Randenblick");
        break;
    }
    case 259616:
    {
        returnValue = F("Randenhof");
        break;
    }
    case 259617:
    {
        returnValue = F("Randenstr.");
        break;
    }
    case 259618:
    {
        returnValue = F("Randenweg");
        break;
    }
    case 259619:
    {
        returnValue = F("Randerather Str.");
        break;
    }
    case 259620:
    {
        returnValue = F("Randerather Weg");
        break;
    }
    case 259621:
    {
        returnValue = F("Randerathstr.");
        break;
    }
    case 259622:
    {
        returnValue = F("Randerathweg");
        break;
    }
    case 259623:
    {
        returnValue = F("Randermannsweg");
        break;
    }
    case 259624:
    {
        returnValue = F("Randersackerer Str.");
        break;
    }
    case 259625:
    {
        returnValue = F("Randersstr.");
        break;
    }
    case 259626:
    {
        returnValue = F("Randholz");
        break;
    }
    case 259627:
    {
        returnValue = F("Randlsäge");
        break;
    }
    case 259628:
    {
        returnValue = F("Randolfstr.");
        break;
    }
    case 259629:
    {
        returnValue = F("Randolfweg");
        break;
    }
    case 259630:
    {
        returnValue = F("Randolph-von-Breidbach-Str.");
        break;
    }
    case 259631:
    {
        returnValue = F("Randorferstr.");
        break;
    }
    case 259632:
    {
        returnValue = F("Randow");
        break;
    }
    case 259633:
    {
        returnValue = F("Randowberg");
        break;
    }
    case 259634:
    {
        returnValue = F("Randower Str.");
        break;
    }
    case 259635:
    {
        returnValue = F("Randowgasse");
        break;
    }
    case 259636:
    {
        returnValue = F("Randowhöhe");
        break;
    }
    case 259637:
    {
        returnValue = F("Randowpark");
        break;
    }
    case 259638:
    {
        returnValue = F("Randowstr.");
        break;
    }
    case 259639:
    {
        returnValue = F("Randowweg");
        break;
    }
    case 259640:
    {
        returnValue = F("Randringhausener Weg");
        break;
    }
    case 259641:
    {
        returnValue = F("Randsberger Str.");
        break;
    }
    case 259642:
    {
        returnValue = F("Randsbergerhofstr.");
        break;
    }
    case 259643:
    {
        returnValue = F("Randsbergerweg");
        break;
    }
    case 259644:
    {
        returnValue = F("Randsbreiter Weg");
        break;
    }
    case 259645:
    {
        returnValue = F("Randsiedlung");
        break;
    }
    case 259646:
    {
        returnValue = F("Randsmoor");
        break;
    }
    case 259647:
    {
        returnValue = F("Randstr.");
        break;
    }
    case 259648:
    {
        returnValue = F("Randstr. Alten");
        break;
    }
    case 259649:
    {
        returnValue = F("Randweg");
        break;
    }
    case 259650:
    {
        returnValue = F("Randweg Genkelsperre");
        break;
    }
    case 259651:
    {
        returnValue = F("Randzelstr.");
        break;
    }
    case 259652:
    {
        returnValue = F("Randzelweg");
        break;
    }
    case 259653:
    {
        returnValue = F("Ranenbergstr.");
        break;
    }
    case 259654:
    {
        returnValue = F("Ranenstr.");
        break;
    }
    case 259655:
    {
        returnValue = F("Ranertstr.");
        break;
    }
    case 259656:
    {
        returnValue = F("Ranesstr.");
        break;
    }
    case 259657:
    {
        returnValue = F("Ranfelser Str.");
        break;
    }
    case 259658:
    {
        returnValue = F("Ranftlstr.");
        break;
    }
    case 259659:
    {
        returnValue = F("Ranftsche Gasse");
        break;
    }
    case 259660:
    {
        returnValue = F("Rangaustr.");
        break;
    }
    case 259661:
    {
        returnValue = F("Rangauweg");
        break;
    }
    case 259662:
    {
        returnValue = F("Rangen");
        break;
    }
    case 259663:
    {
        returnValue = F("Rangenberg");
        break;
    }
    case 259664:
    {
        returnValue = F("Rangenbergstr.");
        break;
    }
    case 259665:
    {
        returnValue = F("Rangenbergweg");
        break;
    }
    case 259666:
    {
        returnValue = F("Rangendinger Str.");
        break;
    }
    case 259667:
    {
        returnValue = F("Rangengasse");
        break;
    }
    case 259668:
    {
        returnValue = F("Rangenhof");
        break;
    }
    case 259669:
    {
        returnValue = F("Rangensteg");
        break;
    }
    case 259670:
    {
        returnValue = F("Rangenweg");
        break;
    }
    case 259671:
    {
        returnValue = F("Ranger Str.");
        break;
    }
    case 259672:
    {
        returnValue = F("Rangergasse");
        break;
    }
    case 259673:
    {
        returnValue = F("Rangersdorfer Str.");
        break;
    }
    case 259674:
    {
        returnValue = F("Rangersgaß");
        break;
    }
    case 259675:
    {
        returnValue = F("Rangestr.");
        break;
    }
    case 259676:
    {
        returnValue = F("Rangetriftweg");
        break;
    }
    case 259677:
    {
        returnValue = F("Rangewiese");
        break;
    }
    case 259678:
    {
        returnValue = F("Ranghofstr.");
        break;
    }
    case 259679:
    {
        returnValue = F("Rangierweg");
        break;
    }
    case 259680:
    {
        returnValue = F("Rangsdorfer Ring");
        break;
    }
    case 259681:
    {
        returnValue = F("Rangsdorfer Str.");
        break;
    }
    case 259682:
    {
        returnValue = F("Rangsdorfer Weg");
        break;
    }
    case 259683:
    {
        returnValue = F("Rangstdorfer Str.");
        break;
    }
    case 259684:
    {
        returnValue = F("Rangstr.");
        break;
    }
    case 259685:
    {
        returnValue = F("Ranham");
        break;
    }
    case 259686:
    {
        returnValue = F("Ranhartstetten");
        break;
    }
    case 259687:
    {
        returnValue = F("Ranhartweg");
        break;
    }
    case 259688:
    {
        returnValue = F("Ranhazweg");
        break;
    }
    case 259689:
    {
        returnValue = F("Ranieser Str.");
        break;
    }
    case 259690:
    {
        returnValue = F("Ranieser Weg");
        break;
    }
    case 259691:
    {
        returnValue = F("Raniesstr.");
        break;
    }
    case 259692:
    {
        returnValue = F("Ranischbergstr.");
        break;
    }
    case 259693:
    {
        returnValue = F("Raniser Str.");
        break;
    }
    case 259694:
    {
        returnValue = F("Ranisstr.");
        break;
    }
    case 259695:
    {
        returnValue = F("Ranisweg");
        break;
    }
    case 259696:
    {
        returnValue = F("Rank");
        break;
    }
    case 259697:
    {
        returnValue = F("Rankach");
        break;
    }
    case 259698:
    {
        returnValue = F("Rankackerweg");
        break;
    }
    case 259699:
    {
        returnValue = F("Rankauer Weg");
        break;
    }
    case 259700:
    {
        returnValue = F("Rankbachstr.");
        break;
    }
    case 259701:
    {
        returnValue = F("Rankegraben");
        break;
    }
    case 259702:
    {
        returnValue = F("Rankelschlagweg");
        break;
    }
    case 259703:
    {
        returnValue = F("Rankenberg");
        break;
    }
    case 259704:
    {
        returnValue = F("Rankendorfer Str.");
        break;
    }
    case 259705:
    {
        returnValue = F("Rankendorfer Weg");
        break;
    }
    case 259706:
    {
        returnValue = F("Rankengasse");
        break;
    }
    case 259707:
    {
        returnValue = F("Rankenheimer Str.");
        break;
    }
    case 259708:
    {
        returnValue = F("Rankenhof");
        break;
    }
    case 259709:
    {
        returnValue = F("Rankenstr.");
        break;
    }
    case 259710:
    {
        returnValue = F("Rankenweg");
        break;
    }
    case 259711:
    {
        returnValue = F("Rankestr.");
        break;
    }
    case 259712:
    {
        returnValue = F("Rankeweg");
        break;
    }
    case 259713:
    {
        returnValue = F("Rankham");
        break;
    }
    case 259714:
    {
        returnValue = F("Rankhamer Weg");
        break;
    }
    case 259715:
    {
        returnValue = F("Rankhofstr.");
        break;
    }
    case 259716:
    {
        returnValue = F("Ranklhofweg");
        break;
    }
    case 259717:
    {
        returnValue = F("Ranklweg");
        break;
    }
    case 259718:
    {
        returnValue = F("Rankstr.");
        break;
    }
    case 259719:
    {
        returnValue = F("Rankwaldweg");
        break;
    }
    case 259720:
    {
        returnValue = F("Rankweg");
        break;
    }
    case 259721:
    {
        returnValue = F("Rankwiesenweg");
        break;
    }
    case 259722:
    {
        returnValue = F("Rankwitzer Weg");
        break;
    }
    case 259723:
    {
        returnValue = F("Rannafeld");
        break;
    }
    case 259724:
    {
        returnValue = F("Rannariedlerstr.");
        break;
    }
    case 259725:
    {
        returnValue = F("Rannastr.");
        break;
    }
    case 259726:
    {
        returnValue = F("Rannenberger Str.");
        break;
    }
    case 259727:
    {
        returnValue = F("Rannenbergring");
        break;
    }
    case 259728:
    {
        returnValue = F("Rannenbergstr.");
        break;
    }
    case 259729:
    {
        returnValue = F("Ranner Trift");
        break;
    }
    case 259730:
    {
        returnValue = F("Rannersberg");
        break;
    }
    case 259731:
    {
        returnValue = F("Rannertshofen");
        break;
    }
    case 259732:
    {
        returnValue = F("Rannische Str.");
        break;
    }
    case 259733:
    {
        returnValue = F("Rannischer Platz");
        break;
    }
    case 259734:
    {
        returnValue = F("Rannstedter Str.");
        break;
    }
    case 259735:
    {
        returnValue = F("Rannsteig");
        break;
    }
    case 259736:
    {
        returnValue = F("Ranntalstr.");
        break;
    }
    case 259737:
    {
        returnValue = F("Ranntalweg");
        break;
    }
    case 259738:
    {
        returnValue = F("Rannteichweg");
        break;
    }
    case 259739:
    {
        returnValue = F("Rannunger Höhe");
        break;
    }
    case 259740:
    {
        returnValue = F("Rannunger Str.");
        break;
    }
    case 259741:
    {
        returnValue = F("Rannunger Weg");
        break;
    }
    case 259742:
    {
        returnValue = F("Rannusweg");
        break;
    }
    case 259743:
    {
        returnValue = F("Rannweg");
        break;
    }
    case 259744:
    {
        returnValue = F("Ransbach");
        break;
    }
    case 259745:
    {
        returnValue = F("Ransbach an der Holzecke");
        break;
    }
    case 259746:
    {
        returnValue = F("Ransbacher Pfad");
        break;
    }
    case 259747:
    {
        returnValue = F("Ransbacher Str.");
        break;
    }
    case 259748:
    {
        returnValue = F("Ransbacher Weg");
        break;
    }
    case 259749:
    {
        returnValue = F("Ransbachstr.");
        break;
    }
    case 259750:
    {
        returnValue = F("Ransberg");
        break;
    }
    case 259751:
    {
        returnValue = F("Ransen");
        break;
    }
    case 259752:
    {
        returnValue = F("Ransenbergweg");
        break;
    }
    case 259753:
    {
        returnValue = F("Ransengasse");
        break;
    }
    case 259754:
    {
        returnValue = F("Ransohoffweg");
        break;
    }
    case 259755:
    {
        returnValue = F("Ranspacher Str.");
        break;
    }
    case 259756:
    {
        returnValue = F("Ranstädter Rain");
        break;
    }
    case 259757:
    {
        returnValue = F("Ranstädter Steinweg");
        break;
    }
    case 259758:
    {
        returnValue = F("Ranstädter Str.");
        break;
    }
    case 259759:
    {
        returnValue = F("Ranstädter Weg");
        break;
    }
    case 259760:
    {
        returnValue = F("Rantrumer Str.");
        break;
    }
    case 259761:
    {
        returnValue = F("Rantrumer Weg");
        break;
    }
    case 259762:
    {
        returnValue = F("Rantulfstr.");
        break;
    }
    case 259763:
    {
        returnValue = F("Rantumer Str.");
        break;
    }
    case 259764:
    {
        returnValue = F("Rantzauallee");
        break;
    }
    case 259765:
    {
        returnValue = F("Rantzauer Forstweg");
        break;
    }
    case 259766:
    {
        returnValue = F("Rantzauhöhenweg");
        break;
    }
    case 259767:
    {
        returnValue = F("Rantzaustr.");
        break;
    }
    case 259768:
    {
        returnValue = F("Rantzauweg");
        break;
    }
    case 259769:
    {
        returnValue = F("Ranunkelweg");
        break;
    }
    case 259770:
    {
        returnValue = F("Ranzau");
        break;
    }
    case 259771:
    {
        returnValue = F("Ranzeler Str.");
        break;
    }
    case 259772:
    {
        returnValue = F("Ranzeler Weg");
        break;
    }
    case 259773:
    {
        returnValue = F("Ranzen-Schneise");
        break;
    }
    case 259774:
    {
        returnValue = F("Ranzenberg");
        break;
    }
    case 259775:
    {
        returnValue = F("Ranzenbergweg");
        break;
    }
    case 259776:
    {
        returnValue = F("Ranzenbütteler Str.");
        break;
    }
    case 259777:
    {
        returnValue = F("Ranzengasse");
        break;
    }
    case 259778:
    {
        returnValue = F("Ranzenmühle");
        break;
    }
    case 259779:
    {
        returnValue = F("Ranzenstr.");
        break;
    }
    case 259780:
    {
        returnValue = F("Ranzenweg");
        break;
    }
    case 259781:
    {
        returnValue = F("Ranzenäckerstr.");
        break;
    }
    case 259782:
    {
        returnValue = F("Ranziger Dorfstr.");
        break;
    }
    case 259783:
    {
        returnValue = F("Ranziger Hauptstr.");
        break;
    }
    case 259784:
    {
        returnValue = F("Ranziner Weg");
        break;
    }
    case 259785:
    {
        returnValue = F("Ranzinger Str.");
        break;
    }
    case 259786:
    {
        returnValue = F("Ranzinger Weg");
        break;
    }
    case 259787:
    {
        returnValue = F("Ranzingerberg");
        break;
    }
    case 259788:
    {
        returnValue = F("Ranzingerbergstr.");
        break;
    }
    case 259789:
    {
        returnValue = F("Ranzingerstr.");
        break;
    }
    case 259790:
    {
        returnValue = F("Ranzower Dorfstr.");
        break;
    }
    case 259791:
    {
        returnValue = F("Ranzower Weg");
        break;
    }
    case 259792:
    {
        returnValue = F("Ranzweg");
        break;
    }
    case 259793:
    {
        returnValue = F("Raoneser Platz");
        break;
    }
    case 259794:
    {
        returnValue = F("Raoul-Francé-Str.");
        break;
    }
    case 259795:
    {
        returnValue = F("Raoul-Wallenberg-Str.");
        break;
    }
    case 259796:
    {
        returnValue = F("Rapelsweg");
        break;
    }
    case 259797:
    {
        returnValue = F("Rapener Str.");
        break;
    }
    case 259798:
    {
        returnValue = F("Raperieweg");
        break;
    }
    case 259799:
    {
        returnValue = F("Rapertweg");
        break;
    }
    case 259800:
    {
        returnValue = F("Raphaelstr.");
        break;
    }
    case 259801:
    {
        returnValue = F("Raphaelsweg");
        break;
    }
    case 259802:
    {
        returnValue = F("Raphaelweg");
        break;
    }
    case 259803:
    {
        returnValue = F("Rapid-City-Str.");
        break;
    }
    case 259804:
    {
        returnValue = F("Rapinzenweg");
        break;
    }
    case 259805:
    {
        returnValue = F("Rapoloweg");
        break;
    }
    case 259806:
    {
        returnValue = F("Rapotohöhe");
        break;
    }
    case 259807:
    {
        returnValue = F("Rapotostr.");
        break;
    }
    case 259808:
    {
        returnValue = F("Rapotoweg");
        break;
    }
    case 259809:
    {
        returnValue = F("Rappach");
        break;
    }
    case 259810:
    {
        returnValue = F("Rappacher Str.");
        break;
    }
    case 259811:
    {
        returnValue = F("Rappacher Weg");
        break;
    }
    case 259812:
    {
        returnValue = F("Rappachstr.");
        break;
    }
    case 259813:
    {
        returnValue = F("Rappaportstr.");
        break;
    }
    case 259814:
    {
        returnValue = F("Rappbaint");
        break;
    }
    case 259815:
    {
        returnValue = F("Rappbodetalsperre-Staumauer");
        break;
    }
    case 259816:
    {
        returnValue = F("Rappebühl-Waldweg");
        break;
    }
    case 259817:
    {
        returnValue = F("Rappekaulshecke");
        break;
    }
    case 259818:
    {
        returnValue = F("Rappelgasse");
        break;
    }
    case 259819:
    {
        returnValue = F("Rappelhofstr.");
        break;
    }
    case 259820:
    {
        returnValue = F("Rappelhuth");
        break;
    }
    case 259821:
    {
        returnValue = F("Rappelshofen");
        break;
    }
    case 259822:
    {
        returnValue = F("Rappen");
        break;
    }
    case 259823:
    {
        returnValue = F("Rappenackerstr.");
        break;
    }
    case 259824:
    {
        returnValue = F("Rappenauer Str.");
        break;
    }
    case 259825:
    {
        returnValue = F("Rappenbaumweg");
        break;
    }
    case 259826:
    {
        returnValue = F("Rappenberg");
        break;
    }
    case 259827:
    {
        returnValue = F("Rappenberghalde");
        break;
    }
    case 259828:
    {
        returnValue = F("Rappenbergring");
        break;
    }
    case 259829:
    {
        returnValue = F("Rappenbergstr.");
        break;
    }
    case 259830:
    {
        returnValue = F("Rappenbergweg");
        break;
    }
    case 259831:
    {
        returnValue = F("Rappenbuckelweg");
        break;
    }
    case 259832:
    {
        returnValue = F("Rappenbuschweg");
        break;
    }
    case 259833:
    {
        returnValue = F("Rappenbühl");
        break;
    }
    case 259834:
    {
        returnValue = F("Rappendorfstr.");
        break;
    }
    case 259835:
    {
        returnValue = F("Rappeneckstr.");
        break;
    }
    case 259836:
    {
        returnValue = F("Rappeneckweg");
        break;
    }
    case 259837:
    {
        returnValue = F("Rappenfeldstr.");
        break;
    }
    case 259838:
    {
        returnValue = F("Rappenfelsen");
        break;
    }
    case 259839:
    {
        returnValue = F("Rappenfelsensteig");
        break;
    }
    case 259840:
    {
        returnValue = F("Rappenfelsenweg");
        break;
    }
    case 259841:
    {
        returnValue = F("Rappenfluh");
        break;
    }
    case 259842:
    {
        returnValue = F("Rappengasse");
        break;
    }
    case 259843:
    {
        returnValue = F("Rappengässle");
        break;
    }
    case 259844:
    {
        returnValue = F("Rappengäßle");
        break;
    }
    case 259845:
    {
        returnValue = F("Rappenhagen");
        break;
    }
    case 259846:
    {
        returnValue = F("Rappenhalde");
        break;
    }
    case 259847:
    {
        returnValue = F("Rappenhaldestr.");
        break;
    }
    case 259848:
    {
        returnValue = F("Rappenhaldeweg");
        break;
    }
    case 259849:
    {
        returnValue = F("Rappenhecke");
        break;
    }
    case 259850:
    {
        returnValue = F("Rappenhof");
        break;
    }
    case 259851:
    {
        returnValue = F("Rappenhofweg");
        break;
    }
    case 259852:
    {
        returnValue = F("Rappenhohn");
        break;
    }
    case 259853:
    {
        returnValue = F("Rappenhohner Str.");
        break;
    }
    case 259854:
    {
        returnValue = F("Rappenhäger Str.");
        break;
    }
    case 259855:
    {
        returnValue = F("Rappenklingen-Weg");
        break;
    }
    case 259856:
    {
        returnValue = F("Rappenklingenstaffel");
        break;
    }
    case 259857:
    {
        returnValue = F("Rappenloch");
        break;
    }
    case 259858:
    {
        returnValue = F("Rappenlochstr.");
        break;
    }
    case 259859:
    {
        returnValue = F("Rappenmühle");
        break;
    }
    case 259860:
    {
        returnValue = F("Rappenrainweg");
        break;
    }
    case 259861:
    {
        returnValue = F("Rappenreutegasse");
        break;
    }
    case 259862:
    {
        returnValue = F("Rappenruhweg");
        break;
    }
    case 259863:
    {
        returnValue = F("Rappenseestr.");
        break;
    }
    case 259864:
    {
        returnValue = F("Rappenseeweg");
        break;
    }
    case 259865:
    {
        returnValue = F("Rappenshagen");
        break;
    }
    case 259866:
    {
        returnValue = F("Rappensteinstr.");
        break;
    }
    case 259867:
    {
        returnValue = F("Rappenstockweg");
        break;
    }
    case 259868:
    {
        returnValue = F("Rappenstr.");
        break;
    }
    case 259869:
    {
        returnValue = F("Rappentanzweg");
        break;
    }
    case 259870:
    {
        returnValue = F("Rappentorgasse");
        break;
    }
    case 259871:
    {
        returnValue = F("Rappentorweg");
        break;
    }
    case 259872:
    {
        returnValue = F("Rappenweg");
        break;
    }
    case 259873:
    {
        returnValue = F("Rappenweiher");
        break;
    }
    case 259874:
    {
        returnValue = F("Rappenwörthstr.");
        break;
    }
    case 259875:
    {
        returnValue = F("Rappenwörtstr.");
        break;
    }
    case 259876:
    {
        returnValue = F("Rappenäcker");
        break;
    }
    case 259877:
    {
        returnValue = F("Rappenäckerweg");
        break;
    }
    case 259878:
    {
        returnValue = F("Rapperather Str.");
        break;
    }
    case 259879:
    {
        returnValue = F("Rappershäuser Str.");
        break;
    }
    case 259880:
    {
        returnValue = F("Rapperswyher Str.");
        break;
    }
    case 259881:
    {
        returnValue = F("Rapperszeller Weg");
        break;
    }
    case 259882:
    {
        returnValue = F("Rappertstr.");
        break;
    }
    case 259883:
    {
        returnValue = F("Rappertsweiler");
        break;
    }
    case 259884:
    {
        returnValue = F("Rappeshalde");
        break;
    }
    case 259885:
    {
        returnValue = F("Rappetenreuth");
        break;
    }
    case 259886:
    {
        returnValue = F("Rappfelsenweg");
        break;
    }
    case 259887:
    {
        returnValue = F("Rapphof");
        break;
    }
    case 259888:
    {
        returnValue = F("Rapphügel");
        break;
    }
    case 259889:
    {
        returnValue = F("Rappin");
        break;
    }
    case 259890:
    {
        returnValue = F("Rapplweg");
        break;
    }
    case 259891:
    {
        returnValue = F("Rappmühlstr.");
        break;
    }
    case 259892:
    {
        returnValue = F("Rappoldstr.");
        break;
    }
    case 259893:
    {
        returnValue = F("Rappoltengrün");
        break;
    }
    case 259894:
    {
        returnValue = F("Rappoltengrüner Str.");
        break;
    }
    case 259895:
    {
        returnValue = F("Rappoltshofer Str.");
        break;
    }
    case 259896:
    {
        returnValue = F("Rappoltsteiner Str.");
        break;
    }
    case 259897:
    {
        returnValue = F("Rappoltsweilerstr.");
        break;
    }
    case 259898:
    {
        returnValue = F("Rappoltsweilerwinkel");
        break;
    }
    case 259899:
    {
        returnValue = F("Rapportierplatz");
        break;
    }
    case 259900:
    {
        returnValue = F("Rappstr.");
        break;
    }
    case 259901:
    {
        returnValue = F("Rappteller");
        break;
    }
    case 259902:
    {
        returnValue = F("Rappweg");
        break;
    }
    case 259903:
    {
        returnValue = F("Rappweiler Str.");
        break;
    }
    case 259904:
    {
        returnValue = F("Rappäusweg");
        break;
    }
    case 259905:
    {
        returnValue = F("Rapsacker");
        break;
    }
    case 259906:
    {
        returnValue = F("Rapsblüte");
        break;
    }
    case 259907:
    {
        returnValue = F("Rapsblütenweg");
        break;
    }
    case 259908:
    {
        returnValue = F("Rapsbogen");
        break;
    }
    case 259909:
    {
        returnValue = F("Rapsbreite");
        break;
    }
    case 259910:
    {
        returnValue = F("Rapsdorf");
        break;
    }
    case 259911:
    {
        returnValue = F("Rapsdörfel");
        break;
    }
    case 259912:
    {
        returnValue = F("Rapsfeld");
        break;
    }
    case 259913:
    {
        returnValue = F("Rapsflur");
        break;
    }
    case 259914:
    {
        returnValue = F("Rapsgasse");
        break;
    }
    case 259915:
    {
        returnValue = F("Rapshagener Str.");
        break;
    }
    case 259916:
    {
        returnValue = F("Rapshagener Weg");
        break;
    }
    case 259917:
    {
        returnValue = F("Rapshagener Weg Falkenhagen");
        break;
    }
    case 259918:
    {
        returnValue = F("Rapskamp");
        break;
    }
    case 259919:
    {
        returnValue = F("Rapslage");
        break;
    }
    case 259920:
    {
        returnValue = F("Rapslager Weg");
        break;
    }
    case 259921:
    {
        returnValue = F("Rapsstieg");
        break;
    }
    case 259922:
    {
        returnValue = F("Rapsstr.");
        break;
    }
    case 259923:
    {
        returnValue = F("Rapstedter Str.");
        break;
    }
    case 259924:
    {
        returnValue = F("Rapsweg");
        break;
    }
    case 259925:
    {
        returnValue = F("Rapunzelstr.");
        break;
    }
    case 259926:
    {
        returnValue = F("Rapunzelweg");
        break;
    }
    case 259927:
    {
        returnValue = F("Rarkenhofweg");
        break;
    }
    case 259928:
    {
        returnValue = F("Rarsrott");
        break;
    }
    case 259929:
    {
        returnValue = F("Rasberger Str.");
        break;
    }
    case 259930:
    {
        returnValue = F("Raschauer Str.");
        break;
    }
    case 259931:
    {
        returnValue = F("Raschauer Weg");
        break;
    }
    case 259932:
    {
        returnValue = F("Raschauerstr.");
        break;
    }
    case 259933:
    {
        returnValue = F("Raschdorffstr.");
        break;
    }
    case 259934:
    {
        returnValue = F("Rascheider Str.");
        break;
    }
    case 259935:
    {
        returnValue = F("Rascheider Weg");
        break;
    }
    case 259936:
    {
        returnValue = F("Raschekamp");
        break;
    }
    case 259937:
    {
        returnValue = F("Raschenbergstr.");
        break;
    }
    case 259938:
    {
        returnValue = F("Raschens Kamp");
        break;
    }
    case 259939:
    {
        returnValue = F("Raschenstr.");
        break;
    }
    case 259940:
    {
        returnValue = F("Raschenweg");
        break;
    }
    case 259941:
    {
        returnValue = F("Rascher Hauptstr.");
        break;
    }
    case 259942:
    {
        returnValue = F("Rascher Str.");
        break;
    }
    case 259943:
    {
        returnValue = F("Rascher Weg");
        break;
    }
    case 259944:
    {
        returnValue = F("Rascheweg");
        break;
    }
    case 259945:
    {
        returnValue = F("Raschigstr.");
        break;
    }
    case 259946:
    {
        returnValue = F("Raschingstr.");
        break;
    }
    case 259947:
    {
        returnValue = F("Raschkestr.");
        break;
    }
    case 259948:
    {
        returnValue = F("Raschplatz");
        break;
    }
    case 259949:
    {
        returnValue = F("Raschplatzhochstr.");
        break;
    }
    case 259950:
    {
        returnValue = F("Raschwitzer Str.");
        break;
    }
    case 259951:
    {
        returnValue = F("Raschwitzer Weg");
        break;
    }
    case 259952:
    {
        returnValue = F("Raschützer Lindenstr.");
        break;
    }
    case 259953:
    {
        returnValue = F("Rasdorfer Str.");
        break;
    }
    case 259954:
    {
        returnValue = F("Raseanger");
        break;
    }
    case 259955:
    {
        returnValue = F("Raseliusweg");
        break;
    }
    case 259956:
    {
        returnValue = F("Rasen");
        break;
    }
    case 259957:
    {
        returnValue = F("Rasenallee");
        break;
    }
    case 259958:
    {
        returnValue = F("Rasenfleckstr.");
        break;
    }
    case 259959:
    {
        returnValue = F("Rasengasse");
        break;
    }
    case 259960:
    {
        returnValue = F("Rasengittersteine");
        break;
    }
    case 259961:
    {
        returnValue = F("Rasengraben");
        break;
    }
    case 259962:
    {
        returnValue = F("Rasengärten");
        break;
    }
    case 259963:
    {
        returnValue = F("Rasenheeg");
        break;
    }
    case 259964:
    {
        returnValue = F("Rasenhieb");
        break;
    }
    case 259965:
    {
        returnValue = F("Rasenmeersweg");
        break;
    }
    case 259966:
    {
        returnValue = F("Rasenmühle");
        break;
    }
    case 259967:
    {
        returnValue = F("Rasenmühleninsel");
        break;
    }
    case 259968:
    {
        returnValue = F("Rasenmühlenstr.");
        break;
    }
    case 259969:
    {
        returnValue = F("Rasenmühlenweg");
        break;
    }
    case 259970:
    {
        returnValue = F("Rasensteg");
        break;
    }
    case 259971:
    {
        returnValue = F("Rasenstr.");
        break;
    }
    case 259972:
    {
        returnValue = F("Rasenweg");
        break;
    }
    case 259973:
    {
        returnValue = F("Rasenwiese");
        break;
    }
    case 259974:
    {
        returnValue = F("Rasephaser Dorfanger");
        break;
    }
    case 259975:
    {
        returnValue = F("Rasephaser Str.");
        break;
    }
    case 259976:
    {
        returnValue = F("Raseweg");
        break;
    }
    case 259977:
    {
        returnValue = F("Rasflecken");
        break;
    }
    case 259978:
    {
        returnValue = F("Rasgrader Str.");
        break;
    }
    case 259979:
    {
        returnValue = F("Rasierbuckelallee");
        break;
    }
    case 259980:
    {
        returnValue = F("Rasihofweg");
        break;
    }
    case 259981:
    {
        returnValue = F("Rasingstr.");
        break;
    }
    case 259982:
    {
        returnValue = F("Raslweg");
        break;
    }
    case 259983:
    {
        returnValue = F("Rasmussen-Str.");
        break;
    }
    case 259984:
    {
        returnValue = F("Rasmussenstr.");
        break;
    }
    case 259985:
    {
        returnValue = F("Rasmussenweg");
        break;
    }
    case 259986:
    {
        returnValue = F("Rasostr.");
        break;
    }
    case 259987:
    {
        returnValue = F("Raspelweg");
        break;
    }
    case 259988:
    {
        returnValue = F("Raspelwiese");
        break;
    }
    case 259989:
    {
        returnValue = F("Raspeplan");
        break;
    }
    case 259990:
    {
        returnValue = F("Rass Str.");
        break;
    }
    case 259991:
    {
        returnValue = F("Rassaustr.");
        break;
    }
    case 259992:
    {
        returnValue = F("Rassbacher Weg");
        break;
    }
    case 259993:
    {
        returnValue = F("Rassbacherweg");
        break;
    }
    case 259994:
    {
        returnValue = F("Rasseln");
        break;
    }
    case 259995:
    {
        returnValue = F("Rasselner Kirchweg");
        break;
    }
    case 259996:
    {
        returnValue = F("Rasselner Weg");
        break;
    }
    case 259997:
    {
        returnValue = F("Rasselstein");
        break;
    }
    case 259998:
    {
        returnValue = F("Rasselsteiner Str.");
        break;
    }
    case 259999:
    {
        returnValue = F("Rasselsteinstr.");
        break;
    }
    case 260000:
    {
        returnValue = F("Rasselweg");
        break;
    }
    case 260001:
    {
        returnValue = F("Rassenhöveler Str.");
        break;
    }
    case 260002:
    {
        returnValue = F("Rasslerweg");
        break;
    }
    case 260003:
    {
        returnValue = F("Rassnweg");
        break;
    }
    case 260004:
    {
        returnValue = F("Rassosiedlung");
        break;
    }
    case 260005:
    {
        returnValue = F("Rassostr.");
        break;
    }
    case 260006:
    {
        returnValue = F("Rassowweg");
        break;
    }
    case 260007:
    {
        returnValue = F("Rast - Grillplatz");
        break;
    }
    case 260008:
    {
        returnValue = F("Rastal-Str.");
        break;
    }
    case 260009:
    {
        returnValue = F("Rastanlage Breitenbach");
        break;
    }
    case 260010:
    {
        returnValue = F("Rastatter Str.");
        break;
    }
    case 260011:
    {
        returnValue = F("Rastatter Weg");
        break;
    }
    case 260012:
    {
        returnValue = F("Rastattstr.");
        break;
    }
    case 260013:
    {
        returnValue = F("Rastbachweg");
        break;
    }
    case 260014:
    {
        returnValue = F("Rastbüchlstr.");
        break;
    }
    case 260015:
    {
        returnValue = F("Rastdorfer Str.");
        break;
    }
    case 260016:
    {
        returnValue = F("Rastebergweg");
        break;
    }
    case 260017:
    {
        returnValue = F("Rasteder Str.");
        break;
    }
    case 260018:
    {
        returnValue = F("Rasteder Weg");
        break;
    }
    case 260019:
    {
        returnValue = F("Rastenberger Str.");
        break;
    }
    case 260020:
    {
        returnValue = F("Rastenberger Tunnel");
        break;
    }
    case 260021:
    {
        returnValue = F("Rastenberger Weg");
        break;
    }
    case 260022:
    {
        returnValue = F("Rastenburger Str.");
        break;
    }
    case 260023:
    {
        returnValue = F("Rastenburger Weg");
        break;
    }
    case 260024:
    {
        returnValue = F("Rastenburgstr.");
        break;
    }
    case 260025:
    {
        returnValue = F("Rastenweg");
        break;
    }
    case 356498:
    {
        returnValue = F("railcrossing");
        break;
    }
    case 356499:
    {
        returnValue = F("roter, dunkelblauer und oranger Weg");
        break;
    }
    case 356500:
    {
        returnValue = F("römische Str.");
        break;
    }
    }
    return returnValue;
}
