#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameS1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 273361:
    {
        returnValue = F("S");
        break;
    }
    case 273362:
    {
        returnValue = F("S'Eder / Aalti Poscht");
        break;
    }
    case 273363:
    {
        returnValue = F("S'Gässl");
        break;
    }
    case 273364:
    {
        returnValue = F("S'Schwaderloch");
        break;
    }
    case 273365:
    {
        returnValue = F("S-Bahn Brücke");
        break;
    }
    case 273366:
    {
        returnValue = F("S-Berg");
        break;
    }
    case 273367:
    {
        returnValue = F("S-Flügel");
        break;
    }
    case 273368:
    {
        returnValue = F("S-Kammweg");
        break;
    }
    case 273369:
    {
        returnValue = F("S-Passage");
        break;
    }
    case 273370:
    {
        returnValue = F("S-Weg");
        break;
    }
    case 273371:
    {
        returnValue = F("S.-N.-Borstschew-Str.");
        break;
    }
    case 273372:
    {
        returnValue = F("S.G.V.-Weg");
        break;
    }
    case 273373:
    {
        returnValue = F("S122");
        break;
    }
    case 273374:
    {
        returnValue = F("S304");
        break;
    }
    case 273375:
    {
        returnValue = F("S4A");
        break;
    }
    case 273376:
    {
        returnValue = F("SACKGASSE!!");
        break;
    }
    case 273377:
    {
        returnValue = F("SAP Park");
        break;
    }
    case 273378:
    {
        returnValue = F("SAP-Allee");
        break;
    }
    case 273379:
    {
        returnValue = F("SBI-Park");
        break;
    }
    case 273380:
    {
        returnValue = F("SBV Senioren Wohnpark");
        break;
    }
    case 273381:
    {
        returnValue = F("SGV-Weg");
        break;
    }
    case 273382:
    {
        returnValue = F("SOS-Kinderdorf-Str.");
        break;
    }
    case 273383:
    {
        returnValue = F("SSC Sportplatz");
        break;
    }
    case 273384:
    {
        returnValue = F("ST 2026");
        break;
    }
    case 273385:
    {
        returnValue = F("ST2");
        break;
    }
    case 273386:
    {
        returnValue = F("STEINRÜTTENWEG");
        break;
    }
    case 273387:
    {
        returnValue = F("STUB");
        break;
    }
    case 273388:
    {
        returnValue = F("SV DSH OG Kevelaer");
        break;
    }
    case 273389:
    {
        returnValue = F("SV Mundingen");
        break;
    }
    case 273390:
    {
        returnValue = F("SWOL2");
        break;
    }
    case 273391:
    {
        returnValue = F("Saadower Hauptstr.");
        break;
    }
    case 273392:
    {
        returnValue = F("Saadower Str.");
        break;
    }
    case 273393:
    {
        returnValue = F("Saag");
        break;
    }
    case 273394:
    {
        returnValue = F("Saak'scher Weg");
        break;
    }
    case 273395:
    {
        returnValue = F("Saakes Kamp");
        break;
    }
    case 273396:
    {
        returnValue = F("Saaks Busch");
        break;
    }
    case 273397:
    {
        returnValue = F("Saal");
        break;
    }
    case 273398:
    {
        returnValue = F("Saalachau");
        break;
    }
    case 273399:
    {
        returnValue = F("Saalachbrücke");
        break;
    }
    case 273400:
    {
        returnValue = F("Saalachseestr.");
        break;
    }
    case 273401:
    {
        returnValue = F("Saalachstr.");
        break;
    }
    case 273402:
    {
        returnValue = F("Saalachwehr");
        break;
    }
    case 273403:
    {
        returnValue = F("Saalackerstr.");
        break;
    }
    case 273404:
    {
        returnValue = F("Saaland");
        break;
    }
    case 273405:
    {
        returnValue = F("Saalangerstr.");
        break;
    }
    case 273406:
    {
        returnValue = F("Saalau");
        break;
    }
    case 273407:
    {
        returnValue = F("Saalauer Str.");
        break;
    }
    case 273408:
    {
        returnValue = F("Saalbach");
        break;
    }
    case 273409:
    {
        returnValue = F("Saalbachbrücke");
        break;
    }
    case 273410:
    {
        returnValue = F("Saalbacherweg");
        break;
    }
    case 273411:
    {
        returnValue = F("Saalbachstr.");
        break;
    }
    case 273412:
    {
        returnValue = F("Saalbachsweg");
        break;
    }
    case 273413:
    {
        returnValue = F("Saalbachweg");
        break;
    }
    case 273414:
    {
        returnValue = F("Saalbahnhofstr.");
        break;
    }
    case 273415:
    {
        returnValue = F("Saalbahnstr.");
        break;
    }
    case 273416:
    {
        returnValue = F("Saalbaustr.");
        break;
    }
    case 273417:
    {
        returnValue = F("Saalbeek");
        break;
    }
    case 273418:
    {
        returnValue = F("Saalberg");
        break;
    }
    case 273419:
    {
        returnValue = F("Saalberge");
        break;
    }
    case 273420:
    {
        returnValue = F("Saalbergstr.");
        break;
    }
    case 273421:
    {
        returnValue = F("Saalbergweg");
        break;
    }
    case 273422:
    {
        returnValue = F("Saalbrunnenweg");
        break;
    }
    case 273423:
    {
        returnValue = F("Saalburgallee");
        break;
    }
    case 273424:
    {
        returnValue = F("Saalburgchaussee");
        break;
    }
    case 273425:
    {
        returnValue = F("Saalburger Str.");
        break;
    }
    case 273426:
    {
        returnValue = F("Saalburger Weg");
        break;
    }
    case 273427:
    {
        returnValue = F("Saalburgring");
        break;
    }
    case 273428:
    {
        returnValue = F("Saalburgschneise");
        break;
    }
    case 273429:
    {
        returnValue = F("Saalburgstr.");
        break;
    }
    case 273430:
    {
        returnValue = F("Saalburgweg");
        break;
    }
    case 273431:
    {
        returnValue = F("Saaldorf");
        break;
    }
    case 273432:
    {
        returnValue = F("Saaldorfer Str.");
        break;
    }
    case 273433:
    {
        returnValue = F("Saaleanger");
        break;
    }
    case 273434:
    {
        returnValue = F("Saaleauen");
        break;
    }
    case 273435:
    {
        returnValue = F("Saalebachstr.");
        break;
    }
    case 273436:
    {
        returnValue = F("Saaleblick");
        break;
    }
    case 273437:
    {
        returnValue = F("Saalebogen");
        break;
    }
    case 273438:
    {
        returnValue = F("Saalecker Str.");
        break;
    }
    case 273439:
    {
        returnValue = F("Saaledamm");
        break;
    }
    case 273440:
    {
        returnValue = F("Saalegasse");
        break;
    }
    case 273441:
    {
        returnValue = F("Saalegäßchen");
        break;
    }
    case 273442:
    {
        returnValue = F("Saalehang");
        break;
    }
    case 273443:
    {
        returnValue = F("Saalekai");
        break;
    }
    case 273444:
    {
        returnValue = F("Saalemühle");
        break;
    }
    case 273445:
    {
        returnValue = F("Saalenbergstr.");
        break;
    }
    case 273446:
    {
        returnValue = F("Saalenbergweg");
        break;
    }
    case 273447:
    {
        returnValue = F("Saalenbrede");
        break;
    }
    case 273448:
    {
        returnValue = F("Saalenstein");
        break;
    }
    case 273449:
    {
        returnValue = F("Saalenstr.");
        break;
    }
    case 273450:
    {
        returnValue = F("Saalenweg");
        break;
    }
    case 273451:
    {
        returnValue = F("Saalepark");
        break;
    }
    case 273452:
    {
        returnValue = F("Saalepromenade");
        break;
    }
    case 273453:
    {
        returnValue = F("Saalequelleweg");
        break;
    }
    case 273454:
    {
        returnValue = F("Saaler Chaussee");
        break;
    }
    case 273455:
    {
        returnValue = F("Saaler Hof");
        break;
    }
    case 273456:
    {
        returnValue = F("Saaler Str.");
        break;
    }
    case 273457:
    {
        returnValue = F("Saalering");
        break;
    }
    case 273458:
    {
        returnValue = F("Saalermühlenweg");
        break;
    }
    case 273459:
    {
        returnValue = F("Saalestr.");
        break;
    }
    case 273460:
    {
        returnValue = F("Saaletalstr.");
        break;
    }
    case 273461:
    {
        returnValue = F("Saaleuferstr.");
        break;
    }
    case 273462:
    {
        returnValue = F("Saaleweg");
        break;
    }
    case 273463:
    {
        returnValue = F("Saalfeld");
        break;
    }
    case 273464:
    {
        returnValue = F("Saalfeldener Str.");
        break;
    }
    case 273465:
    {
        returnValue = F("Saalfelder Gasse");
        break;
    }
    case 273466:
    {
        returnValue = F("Saalfelder Str.");
        break;
    }
    case 273467:
    {
        returnValue = F("Saalfelder Weg");
        break;
    }
    case 273468:
    {
        returnValue = F("Saalfeldstr.");
        break;
    }
    case 273469:
    {
        returnValue = F("Saalfeldweg");
        break;
    }
    case 273470:
    {
        returnValue = F("Saalgangstr.");
        break;
    }
    case 273471:
    {
        returnValue = F("Saalgarten");
        break;
    }
    case 273472:
    {
        returnValue = F("Saalgasse");
        break;
    }
    case 273473:
    {
        returnValue = F("Saalgemeindenweg");
        break;
    }
    case 273474:
    {
        returnValue = F("Saalgrabenweg");
        break;
    }
    case 273475:
    {
        returnValue = F("Saalgärten");
        break;
    }
    case 273476:
    {
        returnValue = F("Saalgässchen");
        break;
    }
    case 273477:
    {
        returnValue = F("Saalhaupter Str.");
        break;
    }
    case 273478:
    {
        returnValue = F("Saalhausener Str.");
        break;
    }
    case 273479:
    {
        returnValue = F("Saalhauser Str.");
        break;
    }
    case 273480:
    {
        returnValue = F("Saalhof");
        break;
    }
    case 273481:
    {
        returnValue = F("Saalhoffer Str.");
        break;
    }
    case 273482:
    {
        returnValue = F("Saalhofgasse");
        break;
    }
    case 273483:
    {
        returnValue = F("Saalholzstr.");
        break;
    }
    case 273484:
    {
        returnValue = F("Saalhügel");
        break;
    }
    case 273485:
    {
        returnValue = F("Saaliger Str.");
        break;
    }
    case 273486:
    {
        returnValue = F("Saaliger Weg");
        break;
    }
    case 273487:
    {
        returnValue = F("Saalkamp");
        break;
    }
    case 273488:
    {
        returnValue = F("Saalkampredder");
        break;
    }
    case 273489:
    {
        returnValue = F("Saalleitenweg");
        break;
    }
    case 273490:
    {
        returnValue = F("Saalmühlstr.");
        break;
    }
    case 273491:
    {
        returnValue = F("Saalower Allee");
        break;
    }
    case 273492:
    {
        returnValue = F("Saalower Str.");
        break;
    }
    case 273493:
    {
        returnValue = F("Saalpförtchen");
        break;
    }
    case 273494:
    {
        returnValue = F("Saalplatz");
        break;
    }
    case 273495:
    {
        returnValue = F("Saalsdorfer Str.");
        break;
    }
    case 273496:
    {
        returnValue = F("Saalskamp");
        break;
    }
    case 273497:
    {
        returnValue = F("Saalstr.");
        break;
    }
    case 273498:
    {
        returnValue = F("Saalsweg");
        break;
    }
    case 273499:
    {
        returnValue = F("Saalweg");
        break;
    }
    case 273500:
    {
        returnValue = F("Saalweide");
        break;
    }
    case 273501:
    {
        returnValue = F("Saalweidenstrauch");
        break;
    }
    case 273502:
    {
        returnValue = F("Saalwerderstr.");
        break;
    }
    case 273503:
    {
        returnValue = F("Saalwies");
        break;
    }
    case 273504:
    {
        returnValue = F("Saalwiese");
        break;
    }
    case 273505:
    {
        returnValue = F("Saalwiesenweg");
        break;
    }
    case 273506:
    {
        returnValue = F("Saaläckerstr.");
        break;
    }
    case 273507:
    {
        returnValue = F("Saamfeldstr.");
        break;
    }
    case 273508:
    {
        returnValue = F("Saan Sick");
        break;
    }
    case 273509:
    {
        returnValue = F("Saar");
        break;
    }
    case 273510:
    {
        returnValue = F("Saar-Hunsrück Steig");
        break;
    }
    case 273511:
    {
        returnValue = F("Saar-Hunsrück-Steig");
        break;
    }
    case 273512:
    {
        returnValue = F("Saar-Pfalz-Str.");
        break;
    }
    case 273513:
    {
        returnValue = F("Saar-Schlesier-Weg");
        break;
    }
    case 273514:
    {
        returnValue = F("Saara");
        break;
    }
    case 273515:
    {
        returnValue = F("Saaraer Str.");
        break;
    }
    case 273516:
    {
        returnValue = F("Saaraer Weg");
        break;
    }
    case 273517:
    {
        returnValue = F("Saaralber Str.");
        break;
    }
    case 273518:
    {
        returnValue = F("Saarallee");
        break;
    }
    case 273519:
    {
        returnValue = F("Saarbachstr.");
        break;
    }
    case 273520:
    {
        returnValue = F("Saarbecker Str.");
        break;
    }
    case 273521:
    {
        returnValue = F("Saarbeksweg");
        break;
    }
    case 273522:
    {
        returnValue = F("Saarbergstr.");
        break;
    }
    case 273523:
    {
        returnValue = F("Saarblick");
        break;
    }
    case 273524:
    {
        returnValue = F("Saarbrocksweg");
        break;
    }
    case 273525:
    {
        returnValue = F("Saarbrunnenstr.");
        break;
    }
    case 273526:
    {
        returnValue = F("Saarbrückener Str.");
        break;
    }
    case 273527:
    {
        returnValue = F("Saarbrückenstr.");
        break;
    }
    case 273528:
    {
        returnValue = F("Saarbrücker Allee");
        break;
    }
    case 273529:
    {
        returnValue = F("Saarbrücker Platz");
        break;
    }
    case 273530:
    {
        returnValue = F("Saarbrücker Str.");
        break;
    }
    case 273531:
    {
        returnValue = F("Saarbrücker Weg");
        break;
    }
    case 273532:
    {
        returnValue = F("Saarbrückner Str.");
        break;
    }
    case 273533:
    {
        returnValue = F("Saarburger Ring");
        break;
    }
    case 273534:
    {
        returnValue = F("Saarburger Str.");
        break;
    }
    case 273535:
    {
        returnValue = F("Saarburgstr.");
        break;
    }
    case 273536:
    {
        returnValue = F("Saarecks Ländchen");
        break;
    }
    case 273537:
    {
        returnValue = F("Saareckstr.");
        break;
    }
    case 273538:
    {
        returnValue = F("Saarengrünstr.");
        break;
    }
    case 273539:
    {
        returnValue = F("Saarenweg");
        break;
    }
    case 273540:
    {
        returnValue = F("Saarfelser Str.");
        break;
    }
    case 273541:
    {
        returnValue = F("Saargaustr.");
        break;
    }
    case 273542:
    {
        returnValue = F("Saargelände");
        break;
    }
    case 273543:
    {
        returnValue = F("Saargemünder Str.");
        break;
    }
    case 273544:
    {
        returnValue = F("Saarhofweg");
        break;
    }
    case 273545:
    {
        returnValue = F("Saaringer Dorfstr.");
        break;
    }
    case 273546:
    {
        returnValue = F("Saarke-Moyarts-Str.");
        break;
    }
    case 273547:
    {
        returnValue = F("Saarlandallee");
        break;
    }
    case 273548:
    {
        returnValue = F("Saarlandhof");
        break;
    }
    case 273549:
    {
        returnValue = F("Saarlandplatz");
        break;
    }
    case 273550:
    {
        returnValue = F("Saarlandring");
        break;
    }
    case 273551:
    {
        returnValue = F("Saarlandstr.");
        break;
    }
    case 273552:
    {
        returnValue = F("Saarlandweg");
        break;
    }
    case 273553:
    {
        returnValue = F("Saarlauterner Str.");
        break;
    }
    case 273554:
    {
        returnValue = F("Saarlauternstr.");
        break;
    }
    case 273555:
    {
        returnValue = F("Saarleite");
        break;
    }
    case 273556:
    {
        returnValue = F("Saarlouiser Str.");
        break;
    }
    case 273557:
    {
        returnValue = F("Saarlouiser Weg");
        break;
    }
    case 273558:
    {
        returnValue = F("Saarlouisstr.");
        break;
    }
    case 273559:
    {
        returnValue = F("Saarländer Str.");
        break;
    }
    case 273560:
    {
        returnValue = F("Saarländer Weg");
        break;
    }
    case 273561:
    {
        returnValue = F("Saarländerstr.");
        break;
    }
    case 273562:
    {
        returnValue = F("Saarmatten");
        break;
    }
    case 273563:
    {
        returnValue = F("Saarmunder Str.");
        break;
    }
    case 273564:
    {
        returnValue = F("Saarmunder Weg");
        break;
    }
    case 273565:
    {
        returnValue = F("Saarmühlenstr.");
        break;
    }
    case 273566:
    {
        returnValue = F("Saarmühlenweg");
        break;
    }
    case 273567:
    {
        returnValue = F("Saarnberg");
        break;
    }
    case 273568:
    {
        returnValue = F("Saarner Str.");
        break;
    }
    case 273569:
    {
        returnValue = F("Saarower Chaussee");
        break;
    }
    case 273570:
    {
        returnValue = F("Saarower Str.");
        break;
    }
    case 273571:
    {
        returnValue = F("Saarower Weg");
        break;
    }
    case 273572:
    {
        returnValue = F("Saarpark");
        break;
    }
    case 273573:
    {
        returnValue = F("Saarpfalz-Park");
        break;
    }
    case 273574:
    {
        returnValue = F("Saarpfalz-Str.");
        break;
    }
    case 273575:
    {
        returnValue = F("Saarpfalzstr.");
        break;
    }
    case 273576:
    {
        returnValue = F("Saarplatz");
        break;
    }
    case 273577:
    {
        returnValue = F("Saarring");
        break;
    }
    case 273578:
    {
        returnValue = F("Saarscheider Weg");
        break;
    }
    case 273579:
    {
        returnValue = F("Saarschleife");
        break;
    }
    case 273580:
    {
        returnValue = F("Saarsteinstr.");
        break;
    }
    case 273581:
    {
        returnValue = F("Saarstr.");
        break;
    }
    case 273582:
    {
        returnValue = F("Saartalstr.");
        break;
    }
    case 273583:
    {
        returnValue = F("Saaruferstr.");
        break;
    }
    case 273584:
    {
        returnValue = F("Saarweg");
        break;
    }
    case 273585:
    {
        returnValue = F("Saarwellinger Str.");
        break;
    }
    case 273586:
    {
        returnValue = F("Saarwerdenstr.");
        break;
    }
    case 273587:
    {
        returnValue = F("Saarwerder Str.");
        break;
    }
    case 273588:
    {
        returnValue = F("Saarwiesenring");
        break;
    }
    case 273589:
    {
        returnValue = F("Saarwiesenstr.");
        break;
    }
    case 273590:
    {
        returnValue = F("Saas");
        break;
    }
    case 273591:
    {
        returnValue = F("Saasa");
        break;
    }
    case 273592:
    {
        returnValue = F("Saasaer Str.");
        break;
    }
    case 273593:
    {
        returnValue = F("Saasdorf");
        break;
    }
    case 273594:
    {
        returnValue = F("Saasdorfer Str.");
        break;
    }
    case 273595:
    {
        returnValue = F("Saasener Str.");
        break;
    }
    case 273596:
    {
        returnValue = F("Saasener Weg");
        break;
    }
    case 273597:
    {
        returnValue = F("Saaser Berg");
        break;
    }
    case 273598:
    {
        returnValue = F("Saasfelder Weg");
        break;
    }
    case 273599:
    {
        returnValue = F("Saassenstr.");
        break;
    }
    case 273600:
    {
        returnValue = F("Saasweg");
        break;
    }
    case 273601:
    {
        returnValue = F("Saat Langenah");
        break;
    }
    case 273602:
    {
        returnValue = F("Saatbruchstr.");
        break;
    }
    case 273603:
    {
        returnValue = F("Saateler Weg");
        break;
    }
    case 273604:
    {
        returnValue = F("Saatental");
        break;
    }
    case 273605:
    {
        returnValue = F("Saatfeldstr.");
        break;
    }
    case 273606:
    {
        returnValue = F("Saatgarten");
        break;
    }
    case 273607:
    {
        returnValue = F("Saatgehrden");
        break;
    }
    case 273608:
    {
        returnValue = F("Saathainer Str.");
        break;
    }
    case 273609:
    {
        returnValue = F("Saathainer Weg");
        break;
    }
    case 273610:
    {
        returnValue = F("Saathorst");
        break;
    }
    case 273611:
    {
        returnValue = F("Saatkamp");
        break;
    }
    case 273612:
    {
        returnValue = F("Saatkamps Knapp");
        break;
    }
    case 273613:
    {
        returnValue = F("Saatkampstr.");
        break;
    }
    case 273614:
    {
        returnValue = F("Saatland");
        break;
    }
    case 273615:
    {
        returnValue = F("Saatlandring");
        break;
    }
    case 273616:
    {
        returnValue = F("Saatmoorgraben");
        break;
    }
    case 273617:
    {
        returnValue = F("Saatschul-Weg");
        break;
    }
    case 273618:
    {
        returnValue = F("Saatschule");
        break;
    }
    case 273619:
    {
        returnValue = F("Saatschulenweg");
        break;
    }
    case 273620:
    {
        returnValue = F("Saatschulrundweg");
        break;
    }
    case 273621:
    {
        returnValue = F("Saatschulweg");
        break;
    }
    case 273622:
    {
        returnValue = F("Saatweg");
        break;
    }
    case 273623:
    {
        returnValue = F("Saatweide");
        break;
    }
    case 273624:
    {
        returnValue = F("Saatwiese");
        break;
    }
    case 273625:
    {
        returnValue = F("Saatziger Str.");
        break;
    }
    case 273626:
    {
        returnValue = F("Saatzuchtgut");
        break;
    }
    case 273627:
    {
        returnValue = F("Saazer Str.");
        break;
    }
    case 273628:
    {
        returnValue = F("Saazer Weg");
        break;
    }
    case 273629:
    {
        returnValue = F("Saaßenstr.");
        break;
    }
    case 273630:
    {
        returnValue = F("Sababurg");
        break;
    }
    case 273631:
    {
        returnValue = F("Sababurger Str.");
        break;
    }
    case 273632:
    {
        returnValue = F("Sabel");
        break;
    }
    case 273633:
    {
        returnValue = F("Sabeler Ausbau");
        break;
    }
    case 273634:
    {
        returnValue = F("Sabeler Str.");
        break;
    }
    case 273635:
    {
        returnValue = F("Sabelsgasse");
        break;
    }
    case 273636:
    {
        returnValue = F("Sabelskaul");
        break;
    }
    case 273637:
    {
        returnValue = F("Sabelstr.");
        break;
    }
    case 273638:
    {
        returnValue = F("Sabelweg");
        break;
    }
    case 273639:
    {
        returnValue = F("Sabergstr.");
        break;
    }
    case 273640:
    {
        returnValue = F("Sabergweg");
        break;
    }
    case 273641:
    {
        returnValue = F("Sabershausener Weg");
        break;
    }
    case 273642:
    {
        returnValue = F("Sabinanigoer Str.");
        break;
    }
    case 273643:
    {
        returnValue = F("Sabinastr.");
        break;
    }
    case 273644:
    {
        returnValue = F("Sabinchenweg");
        break;
    }
    case 273645:
    {
        returnValue = F("Sabine-Gerke-Weg");
        break;
    }
    case 273646:
    {
        returnValue = F("Sabine-Hörger-Platz");
        break;
    }
    case 273647:
    {
        returnValue = F("Sabine-Rosenbaum-Weg");
        break;
    }
    case 273648:
    {
        returnValue = F("Sabine-Schmitt-Str.");
        break;
    }
    case 273649:
    {
        returnValue = F("Sabinenkloster-Ziegelei");
        break;
    }
    case 273650:
    {
        returnValue = F("Sabinenstr.");
        break;
    }
    case 273651:
    {
        returnValue = F("Sabinenweg");
        break;
    }
    case 273652:
    {
        returnValue = F("Sablonhof");
        break;
    }
    case 273653:
    {
        returnValue = F("Sablé-Platz");
        break;
    }
    case 273654:
    {
        returnValue = F("Sabower Dorfstr.");
        break;
    }
    case 273655:
    {
        returnValue = F("Sabrodter Str.");
        break;
    }
    case 273656:
    {
        returnValue = F("Sabstätte");
        break;
    }
    case 273657:
    {
        returnValue = F("Sabstätter Str.");
        break;
    }
    case 273658:
    {
        returnValue = F("Sac. Baumgärtl Str.");
        break;
    }
    case 273659:
    {
        returnValue = F("Saccasner Str.");
        break;
    }
    case 273660:
    {
        returnValue = F("Sacco-Vanzetti-Str.");
        break;
    }
    case 273661:
    {
        returnValue = F("Saccusweg");
        break;
    }
    case 273662:
    {
        returnValue = F("Sacharowstr.");
        break;
    }
    case 273663:
    {
        returnValue = F("Sacharowweg");
        break;
    }
    case 273664:
    {
        returnValue = F("Sachau");
        break;
    }
    case 273665:
    {
        returnValue = F("Sachau Bretteiche");
        break;
    }
    case 273666:
    {
        returnValue = F("Sachauer Str.");
        break;
    }
    case 273667:
    {
        returnValue = F("Sachauer Weg");
        break;
    }
    case 273668:
    {
        returnValue = F("Sachaustr.");
        break;
    }
    case 273669:
    {
        returnValue = F("Sachenbach");
        break;
    }
    case 273670:
    {
        returnValue = F("Sacherstr.");
        break;
    }
    case 273671:
    {
        returnValue = F("Sacherweg");
        break;
    }
    case 273672:
    {
        returnValue = F("Sachgasse");
        break;
    }
    case 273673:
    {
        returnValue = F("Sachkuhlskamp");
        break;
    }
    case 273674:
    {
        returnValue = F("Sachranger Str.");
        break;
    }
    case 273675:
    {
        returnValue = F("Sachs-Ring");
        break;
    }
    case 273676:
    {
        returnValue = F("Sachs-Weg");
        break;
    }
    case 273677:
    {
        returnValue = F("Sachsaer Weg");
        break;
    }
    case 273678:
    {
        returnValue = F("Sachsberg");
        break;
    }
    case 273679:
    {
        returnValue = F("Sachsbüttel");
        break;
    }
    case 273680:
    {
        returnValue = F("Sachsdorfer Str.");
        break;
    }
    case 273681:
    {
        returnValue = F("Sachsdorfer Weg");
        break;
    }
    case 273682:
    {
        returnValue = F("Sachsegge");
        break;
    }
    case 273683:
    {
        returnValue = F("Sachsen Weg");
        break;
    }
    case 273684:
    {
        returnValue = F("Sachsen-Anhalt-Weg");
        break;
    }
    case 273685:
    {
        returnValue = F("Sachsenallee");
        break;
    }
    case 273686:
    {
        returnValue = F("Sachsenberg-Siedlung");
        break;
    }
    case 273687:
    {
        returnValue = F("Sachsenberger Landstr.");
        break;
    }
    case 273688:
    {
        returnValue = F("Sachsenberger Str.");
        break;
    }
    case 273689:
    {
        returnValue = F("Sachsenberger Weg");
        break;
    }
    case 273690:
    {
        returnValue = F("Sachsenbergstr.");
        break;
    }
    case 273691:
    {
        returnValue = F("Sachsenbergweg");
        break;
    }
    case 273692:
    {
        returnValue = F("Sachsenbogen");
        break;
    }
    case 273693:
    {
        returnValue = F("Sachsenbuckelstr.");
        break;
    }
    case 273694:
    {
        returnValue = F("Sachsenburger Str.");
        break;
    }
    case 273695:
    {
        returnValue = F("Sachsenburger Weg");
        break;
    }
    case 273696:
    {
        returnValue = F("Sachsenburgweg");
        break;
    }
    case 273697:
    {
        returnValue = F("Sachsendamm");
        break;
    }
    case 273698:
    {
        returnValue = F("Sachsendorfer Chaussee");
        break;
    }
    case 273699:
    {
        returnValue = F("Sachsendorfer Hauptstr.");
        break;
    }
    case 273700:
    {
        returnValue = F("Sachsendorfer Str.");
        break;
    }
    case 273701:
    {
        returnValue = F("Sachsendorfer Wiesen");
        break;
    }
    case 273702:
    {
        returnValue = F("Sachseneck");
        break;
    }
    case 273703:
    {
        returnValue = F("Sachsenecke");
        break;
    }
    case 273704:
    {
        returnValue = F("Sachsener Berg");
        break;
    }
    case 273705:
    {
        returnValue = F("Sachsener Str.");
        break;
    }
    case 273706:
    {
        returnValue = F("Sachsener Weg");
        break;
    }
    case 273707:
    {
        returnValue = F("Sachsenfeld");
        break;
    }
    case 273708:
    {
        returnValue = F("Sachsenfelder Str.");
        break;
    }
    case 273709:
    {
        returnValue = F("Sachsenflurer Str.");
        break;
    }
    case 273710:
    {
        returnValue = F("Sachsenfreund");
        break;
    }
    case 273711:
    {
        returnValue = F("Sachsenglück");
        break;
    }
    case 273712:
    {
        returnValue = F("Sachsengraben");
        break;
    }
    case 273713:
    {
        returnValue = F("Sachsengrund");
        break;
    }
    case 273714:
    {
        returnValue = F("Sachsengäßchen");
        break;
    }
    case 273715:
    {
        returnValue = F("Sachsenhain");
        break;
    }
    case 273716:
    {
        returnValue = F("Sachsenhardtstr.");
        break;
    }
    case 273717:
    {
        returnValue = F("Sachsenhartstr.");
        break;
    }
    case 273718:
    {
        returnValue = F("Sachsenhausen");
        break;
    }
    case 273719:
    {
        returnValue = F("Sachsenhausener Kirchgasse");
        break;
    }
    case 273720:
    {
        returnValue = F("Sachsenhausener Str.");
        break;
    }
    case 273721:
    {
        returnValue = F("Sachsenhausenstr.");
        break;
    }
    case 273722:
    {
        returnValue = F("Sachsenhauser Str.");
        break;
    }
    case 273723:
    {
        returnValue = F("Sachsenhauser Weg");
        break;
    }
    case 273724:
    {
        returnValue = F("Sachsenheimer Steige");
        break;
    }
    case 273725:
    {
        returnValue = F("Sachsenheimer Str.");
        break;
    }
    case 273726:
    {
        returnValue = F("Sachsenheimer Weg");
        break;
    }
    case 273727:
    {
        returnValue = F("Sachsenheimerstr.");
        break;
    }
    case 273728:
    {
        returnValue = F("Sachsenhof");
        break;
    }
    case 273729:
    {
        returnValue = F("Sachsenhofstr.");
        break;
    }
    case 273730:
    {
        returnValue = F("Sachsenholzstr.");
        break;
    }
    case 273731:
    {
        returnValue = F("Sachsenhäger Str.");
        break;
    }
    case 273732:
    {
        returnValue = F("Sachsenhäuser Landwehrweg");
        break;
    }
    case 273733:
    {
        returnValue = F("Sachsenhäuser Str.");
        break;
    }
    case 273734:
    {
        returnValue = F("Sachsenhäuser Ufer");
        break;
    }
    case 273735:
    {
        returnValue = F("Sachsenhäuser Weg");
        break;
    }
    case 273736:
    {
        returnValue = F("Sachsenhöhe");
        break;
    }
    case 273737:
    {
        returnValue = F("Sachsenhütter Str.");
        break;
    }
    case 273738:
    {
        returnValue = F("Sachsenkam");
        break;
    }
    case 273739:
    {
        returnValue = F("Sachsenkamer Str.");
        break;
    }
    case 273740:
    {
        returnValue = F("Sachsenkamstr.");
        break;
    }
    case 273741:
    {
        returnValue = F("Sachsenkorso");
        break;
    }
    case 273742:
    {
        returnValue = F("Sachsenlandstr.");
        break;
    }
    case 273743:
    {
        returnValue = F("Sachsenlaufweg");
        break;
    }
    case 273744:
    {
        returnValue = F("Sachsenmühler Str.");
        break;
    }
    case 273745:
    {
        returnValue = F("Sachsenplatz");
        break;
    }
    case 273746:
    {
        returnValue = F("Sachsenrieder Forststr.");
        break;
    }
    case 273747:
    {
        returnValue = F("Sachsenring");
        break;
    }
    case 273748:
    {
        returnValue = F("Sachsenringblick");
        break;
    }
    case 273749:
    {
        returnValue = F("Sachsenroda");
        break;
    }
    case 273750:
    {
        returnValue = F("Sachsenruh");
        break;
    }
    case 273751:
    {
        returnValue = F("Sachsenschleife");
        break;
    }
    case 273752:
    {
        returnValue = F("Sachsenseite");
        break;
    }
    case 273753:
    {
        returnValue = F("Sachsensiedlung");
        break;
    }
    case 273754:
    {
        returnValue = F("Sachsenspiegel");
        break;
    }
    case 273755:
    {
        returnValue = F("Sachsenspiegelstr.");
        break;
    }
    case 273756:
    {
        returnValue = F("Sachsenspiegelweg");
        break;
    }
    case 273757:
    {
        returnValue = F("Sachsensteig");
        break;
    }
    case 273758:
    {
        returnValue = F("Sachsensteinstr.");
        break;
    }
    case 273759:
    {
        returnValue = F("Sachsenstieg");
        break;
    }
    case 273760:
    {
        returnValue = F("Sachsenstr.");
        break;
    }
    case 273761:
    {
        returnValue = F("Sachsensträßchen");
        break;
    }
    case 273762:
    {
        returnValue = F("Sachsentalstr.");
        break;
    }
    case 273763:
    {
        returnValue = F("Sachsenteichstr.");
        break;
    }
    case 273764:
    {
        returnValue = F("Sachsentorstr.");
        break;
    }
    case 273765:
    {
        returnValue = F("Sachsenwaldau");
        break;
    }
    case 273766:
    {
        returnValue = F("Sachsenwaldring");
        break;
    }
    case 273767:
    {
        returnValue = F("Sachsenwaldstr.");
        break;
    }
    case 273768:
    {
        returnValue = F("Sachsenweg");
        break;
    }
    case 273769:
    {
        returnValue = F("Sachsenweidenweg");
        break;
    }
    case 273770:
    {
        returnValue = F("Sachsenweiler Steige");
        break;
    }
    case 273771:
    {
        returnValue = F("Sachsenweiler Str.");
        break;
    }
    case 273772:
    {
        returnValue = F("Sachsenwerkstr.");
        break;
    }
    case 273773:
    {
        returnValue = F("Sachsenäckerstr.");
        break;
    }
    case 273774:
    {
        returnValue = F("Sachshäuweg");
        break;
    }
    case 273775:
    {
        returnValue = F("Sachskolonie");
        break;
    }
    case 273776:
    {
        returnValue = F("Sachsstr.");
        break;
    }
    case 273777:
    {
        returnValue = F("Sachsweg");
        break;
    }
    case 273778:
    {
        returnValue = F("Sachsweiherstr.");
        break;
    }
    case 273779:
    {
        returnValue = F("Sachswitzer Str.");
        break;
    }
    case 273780:
    {
        returnValue = F("Sachtleben Str.");
        break;
    }
    case 273781:
    {
        returnValue = F("Sachtlebenstr.");
        break;
    }
    case 273782:
    {
        returnValue = F("Sack");
        break;
    }
    case 273783:
    {
        returnValue = F("Sackberg");
        break;
    }
    case 273784:
    {
        returnValue = F("Sackelhauser Str.");
        break;
    }
    case 273785:
    {
        returnValue = F("Sackenrieder Str.");
        break;
    }
    case 273786:
    {
        returnValue = F("Sackentalweg");
        break;
    }
    case 273787:
    {
        returnValue = F("Sacker Hauptstr.");
        break;
    }
    case 273788:
    {
        returnValue = F("Sacker Weg");
        break;
    }
    case 273789:
    {
        returnValue = F("Sackergrundweg");
        break;
    }
    case 273790:
    {
        returnValue = F("Sackestr.");
        break;
    }
    case 273791:
    {
        returnValue = F("Sackgasse");
        break;
    }
    case 273792:
    {
        returnValue = F("Sackgäßchen");
        break;
    }
    case 273793:
    {
        returnValue = F("Sackhofsweg");
        break;
    }
    case 273794:
    {
        returnValue = F("Sackkamp");
        break;
    }
    case 273795:
    {
        returnValue = F("Sackköpfleweg");
        break;
    }
    case 273796:
    {
        returnValue = F("Sackländerweg");
        break;
    }
    case 273797:
    {
        returnValue = F("Sackmannstr.");
        break;
    }
    case 273798:
    {
        returnValue = F("Sackpfeife");
        break;
    }
    case 273799:
    {
        returnValue = F("Sackpfeifenweg");
        break;
    }
    case 273800:
    {
        returnValue = F("Sackplanie");
        break;
    }
    case 273801:
    {
        returnValue = F("Sackriedenweg");
        break;
    }
    case 273802:
    {
        returnValue = F("Sackring");
        break;
    }
    case 273803:
    {
        returnValue = F("Sacksoll");
        break;
    }
    case 273804:
    {
        returnValue = F("Sacksteinstr.");
        break;
    }
    case 273805:
    {
        returnValue = F("Sackstr.");
        break;
    }
    case 273806:
    {
        returnValue = F("Sacktannen");
        break;
    }
    case 273807:
    {
        returnValue = F("Sackwaldstr.");
        break;
    }
    case 273808:
    {
        returnValue = F("Sackwaldweg");
        break;
    }
    case 273809:
    {
        returnValue = F("Sackwebergasse");
        break;
    }
    case 273810:
    {
        returnValue = F("Sackweg");
        break;
    }
    case 273811:
    {
        returnValue = F("Sackweg Laierhau");
        break;
    }
    case 273812:
    {
        returnValue = F("Sackwinkel");
        break;
    }
    case 273813:
    {
        returnValue = F("Sackwitz");
        break;
    }
    case 273814:
    {
        returnValue = F("Sackworth");
        break;
    }
    case 273815:
    {
        returnValue = F("Sacrower Allee");
        break;
    }
    case 273816:
    {
        returnValue = F("Sacrower Dorfstr.");
        break;
    }
    case 273817:
    {
        returnValue = F("Sacrower Str.");
        break;
    }
    case 273818:
    {
        returnValue = F("Sacré-Coeur-Weg");
        break;
    }
    case 273819:
    {
        returnValue = F("Sadatstr.");
        break;
    }
    case 273820:
    {
        returnValue = F("Saddelerstr.");
        break;
    }
    case 273821:
    {
        returnValue = F("Sadebaumweg");
        break;
    }
    case 273822:
    {
        returnValue = F("Sadebuschstr.");
        break;
    }
    case 273823:
    {
        returnValue = F("Sadeckistr.");
        break;
    }
    case 273824:
    {
        returnValue = F("Sadelerstr.");
        break;
    }
    case 273825:
    {
        returnValue = F("Sadelhof");
        break;
    }
    case 273826:
    {
        returnValue = F("Sadelkower Str.");
        break;
    }
    case 273827:
    {
        returnValue = F("Sadelkower Weg");
        break;
    }
    case 273828:
    {
        returnValue = F("Sadelstr.");
        break;
    }
    case 273829:
    {
        returnValue = F("Sadelweg");
        break;
    }
    case 273830:
    {
        returnValue = F("Sadenbecker Str.");
        break;
    }
    case 273831:
    {
        returnValue = F("Saderlacher Weg");
        break;
    }
    case 273832:
    {
        returnValue = F("Saderlachweg");
        break;
    }
    case 273833:
    {
        returnValue = F("Sadersdorfer Str.");
        break;
    }
    case 273834:
    {
        returnValue = F("Sadisdorfer Str.");
        break;
    }
    case 273835:
    {
        returnValue = F("Sadisdorfer Weg");
        break;
    }
    case 273836:
    {
        returnValue = F("Sadowastr.");
        break;
    }
    case 273837:
    {
        returnValue = F("Saebystr.");
        break;
    }
    case 273838:
    {
        returnValue = F("Saeffelener Weg");
        break;
    }
    case 273839:
    {
        returnValue = F("Saefkowstr.");
        break;
    }
    case 273840:
    {
        returnValue = F("Saegerbergweg");
        break;
    }
    case 273841:
    {
        returnValue = F("Saeghölzleweg");
        break;
    }
    case 273842:
    {
        returnValue = F("Saegmüllerstr.");
        break;
    }
    case 273843:
    {
        returnValue = F("Saelhuysen");
        break;
    }
    case 273844:
    {
        returnValue = F("Saelhuyser Kirchweg");
        break;
    }
    case 273845:
    {
        returnValue = F("Saelweiherstr.");
        break;
    }
    case 273846:
    {
        returnValue = F("Saemannsbrink");
        break;
    }
    case 273847:
    {
        returnValue = F("Saenkamp");
        break;
    }
    case 273848:
    {
        returnValue = F("Saerbecker Damm");
        break;
    }
    case 273849:
    {
        returnValue = F("Saerbecker Str.");
        break;
    }
    case 273850:
    {
        returnValue = F("Saerbecker Weg");
        break;
    }
    case 273851:
    {
        returnValue = F("Safari zu Fuß");
        break;
    }
    case 273852:
    {
        returnValue = F("Safariweg");
        break;
    }
    case 273853:
    {
        returnValue = F("Saffenberger Str.");
        break;
    }
    case 273854:
    {
        returnValue = F("Saffenburgstr.");
        break;
    }
    case 273855:
    {
        returnValue = F("Safferlingsteg");
        break;
    }
    case 273856:
    {
        returnValue = F("Safferlingstr.");
        break;
    }
    case 273857:
    {
        returnValue = F("Safferstettener Str.");
        break;
    }
    case 273858:
    {
        returnValue = F("Saffeweg");
        break;
    }
    case 273859:
    {
        returnValue = F("Saffiger Str.");
        break;
    }
    case 273860:
    {
        returnValue = F("Saffiger Weg");
        break;
    }
    case 273861:
    {
        returnValue = F("Saffron");
        break;
    }
    case 273862:
    {
        returnValue = F("Saffron-Walden-Str.");
        break;
    }
    case 273863:
    {
        returnValue = F("Safranberg");
        break;
    }
    case 273864:
    {
        returnValue = F("Safrangarten");
        break;
    }
    case 273865:
    {
        returnValue = F("Safrangasse");
        break;
    }
    case 273866:
    {
        returnValue = F("Safranmoosstr.");
        break;
    }
    case 273867:
    {
        returnValue = F("Safransgarten");
        break;
    }
    case 273868:
    {
        returnValue = F("Safranweg");
        break;
    }
    case 273869:
    {
        returnValue = F("Safrigrainweg");
        break;
    }
    case 273870:
    {
        returnValue = F("Saganer Str.");
        break;
    }
    case 273871:
    {
        returnValue = F("Saganer Weg");
        break;
    }
    case 273872:
    {
        returnValue = F("Saganger");
        break;
    }
    case 273873:
    {
        returnValue = F("Saganstr.");
        break;
    }
    case 273874:
    {
        returnValue = F("Sagasfeld");
        break;
    }
    case 273875:
    {
        returnValue = F("Sagaster Str.");
        break;
    }
    case 273876:
    {
        returnValue = F("Sagauer Str.");
        break;
    }
    case 273877:
    {
        returnValue = F("Sagaystr.");
        break;
    }
    case 273878:
    {
        returnValue = F("Sage-Bräu-Str.");
        break;
    }
    case 273879:
    {
        returnValue = F("Sagehorner Dorfstr.");
        break;
    }
    case 273880:
    {
        returnValue = F("Sagehorner Str.");
        break;
    }
    case 273881:
    {
        returnValue = F("Sagekuhle");
        break;
    }
    case 273882:
    {
        returnValue = F("Sagemüller-Str.");
        break;
    }
    case 273883:
    {
        returnValue = F("Sagenberg");
        break;
    }
    case 273884:
    {
        returnValue = F("Sagenbuck");
        break;
    }
    case 273885:
    {
        returnValue = F("Sagenhafter Bergwald");
        break;
    }
    case 273886:
    {
        returnValue = F("Sagenpfad");
        break;
    }
    case 273887:
    {
        returnValue = F("Sagenweg");
        break;
    }
    case 273888:
    {
        returnValue = F("Sager Esch");
        break;
    }
    case 273889:
    {
        returnValue = F("Sager Schulweg");
        break;
    }
    case 273890:
    {
        returnValue = F("Sager Schweiz");
        break;
    }
    case 273891:
    {
        returnValue = F("Sager Str.");
        break;
    }
    case 273892:
    {
        returnValue = F("Sager-Meer-Weg");
        break;
    }
    case 273893:
    {
        returnValue = F("Sagerhof");
        break;
    }
    case 273894:
    {
        returnValue = F("Sagersweg");
        break;
    }
    case 273895:
    {
        returnValue = F("Sageweg");
        break;
    }
    case 273896:
    {
        returnValue = F("Saggau");
        break;
    }
    case 273897:
    {
        returnValue = F("Sagisdorfer Str.");
        break;
    }
    case 273898:
    {
        returnValue = F("Sagittariusstr.");
        break;
    }
    case 273899:
    {
        returnValue = F("Sagittastr.");
        break;
    }
    case 273900:
    {
        returnValue = F("Sagkuhle");
        break;
    }
    case 273901:
    {
        returnValue = F("Saglerstr.");
        break;
    }
    case 273902:
    {
        returnValue = F("Saglerweg");
        break;
    }
    case 273903:
    {
        returnValue = F("Sagmeistergarten");
        break;
    }
    case 273904:
    {
        returnValue = F("Sagmeisterstr.");
        break;
    }
    case 273905:
    {
        returnValue = F("Sagmeisterweg");
        break;
    }
    case 273906:
    {
        returnValue = F("Sagter-Ems-Str.");
        break;
    }
    case 273907:
    {
        returnValue = F("Sagterländer Str.");
        break;
    }
    case 273908:
    {
        returnValue = F("Sagwasserstr.");
        break;
    }
    case 273909:
    {
        returnValue = F("Sagweg");
        break;
    }
    case 273910:
    {
        returnValue = F("Saherrstr.");
        break;
    }
    case 273911:
    {
        returnValue = F("Sahlassaner Str.");
        break;
    }
    case 273912:
    {
        returnValue = F("Sahlbachwinkel");
        break;
    }
    case 273913:
    {
        returnValue = F("Sahlberg");
        break;
    }
    case 273914:
    {
        returnValue = F("Sahlenbach");
        break;
    }
    case 273915:
    {
        returnValue = F("Sahlenbacher Str.");
        break;
    }
    case 273916:
    {
        returnValue = F("Sahlenbachrundweg");
        break;
    }
    case 273917:
    {
        returnValue = F("Sahlenbachweg");
        break;
    }
    case 273918:
    {
        returnValue = F("Sahlenberg");
        break;
    }
    case 273919:
    {
        returnValue = F("Sahlenburger Chaussee");
        break;
    }
    case 273920:
    {
        returnValue = F("Sahlenburger Forstweg");
        break;
    }
    case 273921:
    {
        returnValue = F("Sahlenburger Waldweg");
        break;
    }
    case 273922:
    {
        returnValue = F("Sahlenburger Weg");
        break;
    }
    case 273923:
    {
        returnValue = F("Sahlenbühlweg");
        break;
    }
    case 273924:
    {
        returnValue = F("Sahlenghauweg");
        break;
    }
    case 273925:
    {
        returnValue = F("Sahlenholzweg");
        break;
    }
    case 273926:
    {
        returnValue = F("Sahlerstr.");
        break;
    }
    case 273927:
    {
        returnValue = F("Sahlertraufweg");
        break;
    }
    case 273928:
    {
        returnValue = F("Sahlerweg");
        break;
    }
    case 273929:
    {
        returnValue = F("Sahlfeldstr.");
        break;
    }
    case 273930:
    {
        returnValue = F("Sahliser Str.");
        break;
    }
    case 273931:
    {
        returnValue = F("Sahlkamp");
        break;
    }
    case 273932:
    {
        returnValue = F("Sahlmannsberg");
        break;
    }
    case 273933:
    {
        returnValue = F("Sahlredder");
        break;
    }
    case 273934:
    {
        returnValue = F("Sahlweg");
        break;
    }
    case 273935:
    {
        returnValue = F("Sahnaweg");
        break;
    }
    case 273936:
    {
        returnValue = F("Sahnerstr.");
        break;
    }
    case 273937:
    {
        returnValue = F("Sahnestr.");
        break;
    }
    case 273938:
    {
        returnValue = F("Sahneweg");
        break;
    }
    case 273939:
    {
        returnValue = F("Sahnpark");
        break;
    }
    case 273940:
    {
        returnValue = F("Sahntalstr.");
        break;
    }
    case 273941:
    {
        returnValue = F("Sahraweg");
        break;
    }
    case 273942:
    {
        returnValue = F("Sahren");
        break;
    }
    case 273943:
    {
        returnValue = F("Sahrendorfer Aueweg");
        break;
    }
    case 273944:
    {
        returnValue = F("Sahrendorfer Weg");
        break;
    }
    case 273945:
    {
        returnValue = F("Sahrener Ring");
        break;
    }
    case 273946:
    {
        returnValue = F("Sahrener Weg");
        break;
    }
    case 273947:
    {
        returnValue = F("Sahrensdorfer Str.");
        break;
    }
    case 273948:
    {
        returnValue = F("Sahrlachen Nord");
        break;
    }
    case 273949:
    {
        returnValue = F("Sahrstr.");
        break;
    }
    case 273950:
    {
        returnValue = F("Sahrweg");
        break;
    }
    case 273951:
    {
        returnValue = F("Sahtschulweg");
        break;
    }
    case 273952:
    {
        returnValue = F("Saibenstr.");
        break;
    }
    case 273953:
    {
        returnValue = F("Saibenweg");
        break;
    }
    case 273954:
    {
        returnValue = F("Saiblesteichweg");
        break;
    }
    case 273955:
    {
        returnValue = F("Saiblestr.");
        break;
    }
    case 273956:
    {
        returnValue = F("Saiblingstr.");
        break;
    }
    case 273957:
    {
        returnValue = F("Saiblingweg");
        break;
    }
    case 273958:
    {
        returnValue = F("Saichlinger");
        break;
    }
    case 273959:
    {
        returnValue = F("Saidaer Str.");
        break;
    }
    case 273960:
    {
        returnValue = F("Saidelsteig");
        break;
    }
    case 273961:
    {
        returnValue = F("Saidenbachstr.");
        break;
    }
    case 273962:
    {
        returnValue = F("Saierhäusle");
        break;
    }
    case 273963:
    {
        returnValue = F("Saierling");
        break;
    }
    case 273964:
    {
        returnValue = F("Saifer Str.");
        break;
    }
    case 273965:
    {
        returnValue = F("Saigenwies");
        break;
    }
    case 273966:
    {
        returnValue = F("Saiger Str.");
        break;
    }
    case 273967:
    {
        returnValue = F("Saiger-Höhe");
        break;
    }
    case 273968:
    {
        returnValue = F("Saigerhütte");
        break;
    }
    case 273969:
    {
        returnValue = F("Saigerhüttenstr.");
        break;
    }
    case 273970:
    {
        returnValue = F("Sailaufer Str.");
        break;
    }
    case 273971:
    {
        returnValue = F("Sailbergweg");
        break;
    }
    case 273972:
    {
        returnValue = F("Sailegärten");
        break;
    }
    case 273973:
    {
        returnValue = F("Sailendobelweg");
        break;
    }
    case 273974:
    {
        returnValue = F("Sailer Feld");
        break;
    }
    case 273975:
    {
        returnValue = F("Sailerbachstr.");
        break;
    }
    case 273976:
    {
        returnValue = F("Sailerbogen");
        break;
    }
    case 273977:
    {
        returnValue = F("Sailergasse");
        break;
    }
    case 273978:
    {
        returnValue = F("Sailershäuser Str.");
        break;
    }
    case 273979:
    {
        returnValue = F("Sailershäuser Weg");
        break;
    }
    case 273980:
    {
        returnValue = F("Sailerstr.");
        break;
    }
    case 273981:
    {
        returnValue = F("Sailerweg");
        break;
    }
    case 273982:
    {
        returnValue = F("Sailerwöhr");
        break;
    }
    case 273983:
    {
        returnValue = F("Sailewaldweg");
        break;
    }
    case 273984:
    {
        returnValue = F("Sailstockweg");
        break;
    }
    case 273985:
    {
        returnValue = F("Sailtheimer Str.");
        break;
    }
    case 273986:
    {
        returnValue = F("Sailweg");
        break;
    }
    case 273987:
    {
        returnValue = F("Saime-Genc-Ring");
        break;
    }
    case 273988:
    {
        returnValue = F("Saindllohstr.");
        break;
    }
    case 273989:
    {
        returnValue = F("Sainredder");
        break;
    }
    case 273990:
    {
        returnValue = F("Sains-Richaumont-Str.");
        break;
    }
    case 273991:
    {
        returnValue = F("Saint Leu la Forêt Platz");
        break;
    }
    case 273992:
    {
        returnValue = F("Saint Nazairer Allee");
        break;
    }
    case 273993:
    {
        returnValue = F("Saint-Albans-Platz");
        break;
    }
    case 273994:
    {
        returnValue = F("Saint-Andre-Str.");
        break;
    }
    case 273995:
    {
        returnValue = F("Saint-André-Str.");
        break;
    }
    case 273996:
    {
        returnValue = F("Saint-Aubin-Str.");
        break;
    }
    case 273997:
    {
        returnValue = F("Saint-Avé-Ring");
        break;
    }
    case 273998:
    {
        returnValue = F("Saint-Barbara-Allee");
        break;
    }
    case 273999:
    {
        returnValue = F("Saint-Benoit-Str.");
        break;
    }
    case 274000:
    {
        returnValue = F("Saint-Brieuc-Platz");
        break;
    }
    case 274001:
    {
        returnValue = F("Saint-Claude-Str.");
        break;
    }
    case 274002:
    {
        returnValue = F("Saint-Cloud-Str.");
        break;
    }
    case 274003:
    {
        returnValue = F("Saint-Cyr-l'Ecole-Platz");
        break;
    }
    case 274004:
    {
        returnValue = F("Saint-Céré-Platz");
        break;
    }
    case 274005:
    {
        returnValue = F("Saint-Denis-Str.");
        break;
    }
    case 274006:
    {
        returnValue = F("Saint-Die-Str.");
        break;
    }
    case 274007:
    {
        returnValue = F("Saint-Exupéry-Weg");
        break;
    }
    case 274008:
    {
        returnValue = F("Saint-Gengoux-Str.");
        break;
    }
    case 274009:
    {
        returnValue = F("Saint-Georges-Str.");
        break;
    }
    case 274010:
    {
        returnValue = F("Saint-Gervais-Ring");
        break;
    }
    case 274011:
    {
        returnValue = F("Saint-Hubert-Str.");
        break;
    }
    case 274012:
    {
        returnValue = F("Saint-Jean-Le-Blanc-Str.");
        break;
    }
    case 274013:
    {
        returnValue = F("Saint-Jean-de-Losne-Weg");
        break;
    }
    case 274014:
    {
        returnValue = F("Saint-Laurent-Weg");
        break;
    }
    case 274015:
    {
        returnValue = F("Saint-Louis-Str.");
        break;
    }
    case 274016:
    {
        returnValue = F("Saint-Maur-Platz");
        break;
    }
    case 274017:
    {
        returnValue = F("Saint-Mihiel-Platz");
        break;
    }
    case 274018:
    {
        returnValue = F("Saint-Priest-Str.");
        break;
    }
    case 274019:
    {
        returnValue = F("Saint-Privat-Str.");
        break;
    }
    case 274020:
    {
        returnValue = F("Saint-Riquier-Platz");
        break;
    }
    case 274021:
    {
        returnValue = F("Saint-Savine-Brücke");
        break;
    }
    case 274022:
    {
        returnValue = F("Saint-Savinien-Weg");
        break;
    }
    case 274023:
    {
        returnValue = F("Saint-Sever-Str.");
        break;
    }
    case 274024:
    {
        returnValue = F("Sainte-Eulalie-Str.");
        break;
    }
    case 274025:
    {
        returnValue = F("Sainte-Floriner-Str.");
        break;
    }
    case 274026:
    {
        returnValue = F("Sainte-Maxime-Platz");
        break;
    }
    case 274027:
    {
        returnValue = F("Sainte-Ménehould-Platz");
        break;
    }
    case 274028:
    {
        returnValue = F("Saintesstr.");
        break;
    }
    case 274029:
    {
        returnValue = F("Saistweg");
        break;
    }
    case 274030:
    {
        returnValue = F("Saitzweg");
        break;
    }
    case 274031:
    {
        returnValue = F("Saizig");
        break;
    }
    case 274032:
    {
        returnValue = F("Saißleshauweg");
        break;
    }
    case 274033:
    {
        returnValue = F("Sakrische Grübe");
        break;
    }
    case 274034:
    {
        returnValue = F("Salachberg");
        break;
    }
    case 274035:
    {
        returnValue = F("Salachbergstr.");
        break;
    }
    case 274036:
    {
        returnValue = F("Salacher Str.");
        break;
    }
    case 274037:
    {
        returnValue = F("Salachternweg");
        break;
    }
    case 274038:
    {
        returnValue = F("Salachweg");
        break;
    }
    case 274039:
    {
        returnValue = F("Saladin-Schmitt-Str.");
        break;
    }
    case 274040:
    {
        returnValue = F("Salagarten");
        break;
    }
    case 274041:
    {
        returnValue = F("Salamancastr.");
        break;
    }
    case 274042:
    {
        returnValue = F("Salamancaweg");
        break;
    }
    case 274043:
    {
        returnValue = F("Salamander Passage");
        break;
    }
    case 274044:
    {
        returnValue = F("Salamander-Stadtpark");
        break;
    }
    case 274045:
    {
        returnValue = F("Salamanderkaule");
        break;
    }
    case 274046:
    {
        returnValue = F("Salamanderplatz");
        break;
    }
    case 274047:
    {
        returnValue = F("Salamanderstr.");
        break;
    }
    case 274048:
    {
        returnValue = F("Salamanderweg");
        break;
    }
    case 274049:
    {
        returnValue = F("Salaspils iela");
        break;
    }
    case 274050:
    {
        returnValue = F("Salatberg");
        break;
    }
    case 274051:
    {
        returnValue = F("Salaterei");
        break;
    }
    case 274052:
    {
        returnValue = F("Salatgasse");
        break;
    }
    case 274053:
    {
        returnValue = F("Salbacher Str.");
        break;
    }
    case 274054:
    {
        returnValue = F("Salbachweg");
        break;
    }
    case 274055:
    {
        returnValue = F("Salbauerstr.");
        break;
    }
    case 274056:
    {
        returnValue = F("Salbeistr.");
        break;
    }
    case 274057:
    {
        returnValue = F("Salbeiweg");
        break;
    }
    case 274058:
    {
        returnValue = F("Salbengehren");
        break;
    }
    case 274059:
    {
        returnValue = F("Salbengehrenweg");
        break;
    }
    case 274060:
    {
        returnValue = F("Salbenweg");
        break;
    }
    case 274061:
    {
        returnValue = F("Salberbach");
        break;
    }
    case 274062:
    {
        returnValue = F("Salbergweg");
        break;
    }
    case 274063:
    {
        returnValue = F("Salbitzer Str.");
        break;
    }
    case 274064:
    {
        returnValue = F("Salbker Chaussee");
        break;
    }
    case 274065:
    {
        returnValue = F("Salbker Str.");
        break;
    }
    case 274066:
    {
        returnValue = F("Salchauer Chaussee");
        break;
    }
    case 274067:
    {
        returnValue = F("Salchauer Str.");
        break;
    }
    case 274068:
    {
        returnValue = F("Salchenbuschweg");
        break;
    }
    case 274069:
    {
        returnValue = F("Salchendorfer Str.");
        break;
    }
    case 274070:
    {
        returnValue = F("Salchenhaus");
        break;
    }
    case 274071:
    {
        returnValue = F("Salchinger Str.");
        break;
    }
    case 274072:
    {
        returnValue = F("Salchow");
        break;
    }
    case 274073:
    {
        returnValue = F("Salchtweg");
        break;
    }
    case 274074:
    {
        returnValue = F("Saldenburgstr.");
        break;
    }
    case 274075:
    {
        returnValue = F("Salder Str.");
        break;
    }
    case 274076:
    {
        returnValue = F("Saldernstr.");
        break;
    }
    case 274077:
    {
        returnValue = F("Salderpfuhl");
        break;
    }
    case 274078:
    {
        returnValue = F("Saldersche Str.");
        break;
    }
    case 274079:
    {
        returnValue = F("Saldingerstr.");
        break;
    }
    case 274080:
    {
        returnValue = F("Saldorferstr.");
        break;
    }
    case 274081:
    {
        returnValue = F("Saldusstr.");
        break;
    }
    case 274082:
    {
        returnValue = F("Saldute");
        break;
    }
    case 274083:
    {
        returnValue = F("Sale Seite");
        break;
    }
    case 274084:
    {
        returnValue = F("Salegaster Chaussee");
        break;
    }
    case 274085:
    {
        returnValue = F("Salegaster Str.");
        break;
    }
    case 274086:
    {
        returnValue = F("Saleggstr.");
        break;
    }
    case 274087:
    {
        returnValue = F("Salegrund");
        break;
    }
    case 274088:
    {
        returnValue = F("Salem");
        break;
    }
    case 274089:
    {
        returnValue = F("Salem-Scheuer-Str.");
        break;
    }
    case 274090:
    {
        returnValue = F("Salemer Str.");
        break;
    }
    case 274091:
    {
        returnValue = F("Salemer Weg");
        break;
    }
    case 274092:
    {
        returnValue = F("Salems Weg");
        break;
    }
    case 274093:
    {
        returnValue = F("Salemstr.");
        break;
    }
    case 274094:
    {
        returnValue = F("Salemweg");
        break;
    }
    case 274095:
    {
        returnValue = F("Salenbergstr.");
        break;
    }
    case 274096:
    {
        returnValue = F("Salenbergweg");
        break;
    }
    case 274097:
    {
        returnValue = F("Salenhauweg");
        break;
    }
    case 274098:
    {
        returnValue = F("Salenhof");
        break;
    }
    case 274099:
    {
        returnValue = F("Salenhofweg");
        break;
    }
    case 274100:
    {
        returnValue = F("Salenkruke");
        break;
    }
    case 274101:
    {
        returnValue = F("Salensteinweg");
        break;
    }
    case 274102:
    {
        returnValue = F("Salenstr.");
        break;
    }
    case 274103:
    {
        returnValue = F("Salentalweg");
        break;
    }
    case 274104:
    {
        returnValue = F("Salentinstr.");
        break;
    }
    case 274105:
    {
        returnValue = F("Salentinweg");
        break;
    }
    case 274106:
    {
        returnValue = F("Salenwanger Str.");
        break;
    }
    case 274107:
    {
        returnValue = F("Salenweg");
        break;
    }
    case 274108:
    {
        returnValue = F("Salenwiesenweg");
        break;
    }
    case 274109:
    {
        returnValue = F("Salepfützenweg");
        break;
    }
    case 274110:
    {
        returnValue = F("Salergasse");
        break;
    }
    case 274111:
    {
        returnValue = F("Salers-Rinder-Weg");
        break;
    }
    case 274112:
    {
        returnValue = F("Salerstr.");
        break;
    }
    case 274113:
    {
        returnValue = F("Sales-Sartori-Str.");
        break;
    }
    case 274114:
    {
        returnValue = F("Salesianerstr.");
        break;
    }
    case 274115:
    {
        returnValue = F("Salesianerweg");
        break;
    }
    case 274116:
    {
        returnValue = F("Saleuxer Str.");
        break;
    }
    case 274117:
    {
        returnValue = F("Salfeldstr.");
        break;
    }
    case 274118:
    {
        returnValue = F("Salgaer Str.");
        break;
    }
    case 274119:
    {
        returnValue = F("Salgenholzkamp");
        break;
    }
    case 274120:
    {
        returnValue = F("Salgenholzweg");
        break;
    }
    case 274121:
    {
        returnValue = F("Salgert");
        break;
    }
    case 274122:
    {
        returnValue = F("Salhalde");
        break;
    }
    case 274123:
    {
        returnValue = F("Salheck");
        break;
    }
    case 274124:
    {
        returnValue = F("Salheim");
        break;
    }
    case 274125:
    {
        returnValue = F("Salhof");
        break;
    }
    case 274126:
    {
        returnValue = F("Salhofstr.");
        break;
    }
    case 274127:
    {
        returnValue = F("Salhop");
        break;
    }
    case 274128:
    {
        returnValue = F("Salichweg");
        break;
    }
    case 274129:
    {
        returnValue = F("Salier-Str.");
        break;
    }
    case 274130:
    {
        returnValue = F("Salierallee");
        break;
    }
    case 274131:
    {
        returnValue = F("Salierplatz");
        break;
    }
    case 274132:
    {
        returnValue = F("Salierring");
        break;
    }
    case 274133:
    {
        returnValue = F("Salierstr.");
        break;
    }
    case 274134:
    {
        returnValue = F("Salierweg");
        break;
    }
    case 274135:
    {
        returnValue = F("Saligmannsweg");
        break;
    }
    case 274136:
    {
        returnValue = F("Saligstr.");
        break;
    }
    case 274137:
    {
        returnValue = F("Salin Weg");
        break;
    }
    case 274138:
    {
        returnValue = F("Saline");
        break;
    }
    case 274139:
    {
        returnValue = F("Saline Theodorshalle");
        break;
    }
    case 274140:
    {
        returnValue = F("Salinenblick");
        break;
    }
    case 274141:
    {
        returnValue = F("Salinenchaussee");
        break;
    }
    case 274142:
    {
        returnValue = F("Salinenfeld");
        break;
    }
    case 274143:
    {
        returnValue = F("Salinenhof");
        break;
    }
    case 274144:
    {
        returnValue = F("Salinenkolonie");
        break;
    }
    case 274145:
    {
        returnValue = F("Salinenpark");
        break;
    }
    case 274146:
    {
        returnValue = F("Salinenplatz");
        break;
    }
    case 274147:
    {
        returnValue = F("Salinenpromenade");
        break;
    }
    case 274148:
    {
        returnValue = F("Salinenring");
        break;
    }
    case 274149:
    {
        returnValue = F("Salinensteg");
        break;
    }
    case 274150:
    {
        returnValue = F("Salinenstieg");
        break;
    }
    case 274151:
    {
        returnValue = F("Salinenstr.");
        break;
    }
    case 274152:
    {
        returnValue = F("Salinentrift");
        break;
    }
    case 274153:
    {
        returnValue = F("Salinenweg");
        break;
    }
    case 274154:
    {
        returnValue = F("Salinepark");
        break;
    }
    case 274155:
    {
        returnValue = F("Salinestr.");
        break;
    }
    case 274156:
    {
        returnValue = F("Salingarten");
        break;
    }
    case 274157:
    {
        returnValue = F("Salinger Feld");
        break;
    }
    case 274158:
    {
        returnValue = F("Salinger Weg");
        break;
    }
    case 274159:
    {
        returnValue = F("Salingstr.");
        break;
    }
    case 274160:
    {
        returnValue = F("Salinstr.");
        break;
    }
    case 274161:
    {
        returnValue = F("Salinweg");
        break;
    }
    case 274162:
    {
        returnValue = F("Salisburystr.");
        break;
    }
    case 274163:
    {
        returnValue = F("Salisweg");
        break;
    }
    case 274164:
    {
        returnValue = F("Saliteraustr.");
        break;
    }
    case 274165:
    {
        returnValue = F("Salitererweg");
        break;
    }
    case 274166:
    {
        returnValue = F("Saliterfeldfahrt");
        break;
    }
    case 274167:
    {
        returnValue = F("Salitersheimer Str.");
        break;
    }
    case 274168:
    {
        returnValue = F("Saliterstr.");
        break;
    }
    case 274169:
    {
        returnValue = F("Saliterweg");
        break;
    }
    case 274170:
    {
        returnValue = F("Salitzer Weg");
        break;
    }
    case 274171:
    {
        returnValue = F("Salizéstr.");
        break;
    }
    case 274172:
    {
        returnValue = F("Salkamp");
        break;
    }
    case 274173:
    {
        returnValue = F("Salkoppel");
        break;
    }
    case 274174:
    {
        returnValue = F("Salksdorf");
        break;
    }
    case 274175:
    {
        returnValue = F("Salksdorfer Str.");
        break;
    }
    case 274176:
    {
        returnValue = F("Sallach");
        break;
    }
    case 274177:
    {
        returnValue = F("Sallacher Str.");
        break;
    }
    case 274178:
    {
        returnValue = F("Sallahn");
        break;
    }
    case 274179:
    {
        returnValue = F("Sallancher Str.");
        break;
    }
    case 274180:
    {
        returnValue = F("Sallauminer Str.");
        break;
    }
    case 274181:
    {
        returnValue = F("Salle");
        break;
    }
    case 274182:
    {
        returnValue = F("Salleboos");
        break;
    }
    case 274183:
    {
        returnValue = F("Sallen");
        break;
    }
    case 274184:
    {
        returnValue = F("Sallen-Weg");
        break;
    }
    case 274185:
    {
        returnValue = F("Sallenbacherweg");
        break;
    }
    case 274186:
    {
        returnValue = F("Sallenbusch");
        break;
    }
    case 274187:
    {
        returnValue = F("Sallenhauptweg");
        break;
    }
    case 274188:
    {
        returnValue = F("Sallenhauringweg");
        break;
    }
    case 274189:
    {
        returnValue = F("Sallenhaustr.");
        break;
    }
    case 274190:
    {
        returnValue = F("Sallenjagenwegle");
        break;
    }
    case 274191:
    {
        returnValue = F("Sallenthin");
        break;
    }
    case 274192:
    {
        returnValue = F("Sallenwaldweg");
        break;
    }
    case 274193:
    {
        returnValue = F("Sallenweg");
        break;
    }
    case 274194:
    {
        returnValue = F("Sallerriegel");
        break;
    }
    case 274195:
    {
        returnValue = F("Sallersteig");
        break;
    }
    case 274196:
    {
        returnValue = F("Sallerweg");
        break;
    }
    case 274197:
    {
        returnValue = F("Salleröder Str.");
        break;
    }
    case 274198:
    {
        returnValue = F("Salleröder Tal");
        break;
    }
    case 274199:
    {
        returnValue = F("Salleweg");
        break;
    }
    case 274200:
    {
        returnValue = F("Sallgaster Str.");
        break;
    }
    case 274201:
    {
        returnValue = F("Salling");
        break;
    }
    case 274202:
    {
        returnValue = F("Sallingberger Str.");
        break;
    }
    case 274203:
    {
        returnValue = F("Sallingergasse");
        break;
    }
    case 274204:
    {
        returnValue = F("Sallingersiedlung");
        break;
    }
    case 274205:
    {
        returnValue = F("Sallingerstr.");
        break;
    }
    case 274206:
    {
        returnValue = F("Sallmannshäuser Rennsteig");
        break;
    }
    case 274207:
    {
        returnValue = F("Sallnecker Dorfstr.");
        break;
    }
    case 274208:
    {
        returnValue = F("Sallplatz");
        break;
    }
    case 274209:
    {
        returnValue = F("Sallstr.");
        break;
    }
    case 274210:
    {
        returnValue = F("Sallweg");
        break;
    }
    case 274211:
    {
        returnValue = F("Sallwürkstr.");
        break;
    }
    case 274212:
    {
        returnValue = F("Sally-Adamsohn-Platz");
        break;
    }
    case 274213:
    {
        returnValue = F("Sally-Ehrlich-Str.");
        break;
    }
    case 274214:
    {
        returnValue = F("Sally-Grünewald-Str.");
        break;
    }
    case 274215:
    {
        returnValue = F("Sally-Kessler-Weg");
        break;
    }
    case 274216:
    {
        returnValue = F("Sally-Lennhoff-Gang");
        break;
    }
    case 274217:
    {
        returnValue = F("Sally-Wiest-Str.");
        break;
    }
    case 274218:
    {
        returnValue = F("Salm-Horstmar-Str.");
        break;
    }
    case 274219:
    {
        returnValue = F("Salm-Reifferscheidt-Allee");
        break;
    }
    case 274220:
    {
        returnValue = F("Salmadinger Str.");
        break;
    }
    case 274221:
    {
        returnValue = F("Salmannshofen");
        break;
    }
    case 274222:
    {
        returnValue = F("Salmannskirchen");
        break;
    }
    case 274223:
    {
        returnValue = F("Salmannsweiler Weg");
        break;
    }
    case 274224:
    {
        returnValue = F("Salmannsweilergasse");
        break;
    }
    case 274225:
    {
        returnValue = F("Salmannsweilerstr.");
        break;
    }
    case 274226:
    {
        returnValue = F("Salmansweiler Weg");
        break;
    }
    case 274227:
    {
        returnValue = F("Salmansweilerweg");
        break;
    }
    case 274228:
    {
        returnValue = F("Salmanusplatz");
        break;
    }
    case 274229:
    {
        returnValue = F("Salmanusstr.");
        break;
    }
    case 274230:
    {
        returnValue = F("Salmaue");
        break;
    }
    case 274231:
    {
        returnValue = F("Salmbacher Fussweg");
        break;
    }
    case 274232:
    {
        returnValue = F("Salmbacher Passage");
        break;
    }
    case 274233:
    {
        returnValue = F("Salmbacher Str.");
        break;
    }
    case 274234:
    {
        returnValue = F("Salmbacher Weg");
        break;
    }
    case 274235:
    {
        returnValue = F("Salmdorfer Str.");
        break;
    }
    case 274236:
    {
        returnValue = F("Salmeck");
        break;
    }
    case 274237:
    {
        returnValue = F("Salmegg");
        break;
    }
    case 274238:
    {
        returnValue = F("Salmengasse");
        break;
    }
    case 274239:
    {
        returnValue = F("Salmengärtenweg");
        break;
    }
    case 274240:
    {
        returnValue = F("Salmengäßchen");
        break;
    }
    case 274241:
    {
        returnValue = F("Salmenstr.");
        break;
    }
    case 274242:
    {
        returnValue = F("Salmenweg");
        break;
    }
    case 274243:
    {
        returnValue = F("Salmer Str.");
        break;
    }
    case 274244:
    {
        returnValue = F("Salmer Weg");
        break;
    }
    case 274245:
    {
        returnValue = F("Salmeringer Weg");
        break;
    }
    case 274246:
    {
        returnValue = F("Salmers");
        break;
    }
    case 274247:
    {
        returnValue = F("Salmerweg");
        break;
    }
    case 274248:
    {
        returnValue = F("Salmes Feld");
        break;
    }
    case 274249:
    {
        returnValue = F("Salmgasse");
        break;
    }
    case 274250:
    {
        returnValue = F("Salmketalstr.");
        break;
    }
    case 274251:
    {
        returnValue = F("Salmon Road");
        break;
    }
    case 274252:
    {
        returnValue = F("Salmshäuser Str.");
        break;
    }
    case 274253:
    {
        returnValue = F("Salmshütte");
        break;
    }
    case 274254:
    {
        returnValue = F("Salmstr.");
        break;
    }
    case 274255:
    {
        returnValue = F("Salmsweg");
        break;
    }
    case 274256:
    {
        returnValue = F("Salmtalstr.");
        break;
    }
    case 274257:
    {
        returnValue = F("Salmuthstr.");
        break;
    }
    case 274258:
    {
        returnValue = F("Salmweg");
        break;
    }
    case 274259:
    {
        returnValue = F("Salmünsterer Str.");
        break;
    }
    case 274260:
    {
        returnValue = F("Salmünsterer Weg");
        break;
    }
    case 274261:
    {
        returnValue = F("Salo-Brücke");
        break;
    }
    case 274262:
    {
        returnValue = F("Saloberstr.");
        break;
    }
    case 274263:
    {
        returnValue = F("Saloberweg");
        break;
    }
    case 274264:
    {
        returnValue = F("Salokenweg");
        break;
    }
    case 274265:
    {
        returnValue = F("Salomestr.");
        break;
    }
    case 274266:
    {
        returnValue = F("Salomeweg");
        break;
    }
    case 274267:
    {
        returnValue = F("Salomon-Calvi-Str.");
        break;
    }
    case 274268:
    {
        returnValue = F("Salomon-Formstecher-Weg");
        break;
    }
    case 274269:
    {
        returnValue = F("Salomon-Goldschmidt-Str.");
        break;
    }
    case 274270:
    {
        returnValue = F("Salomon-Gottlob-Frentzel-Str.");
        break;
    }
    case 274271:
    {
        returnValue = F("Salomon-Idler-Str.");
        break;
    }
    case 274272:
    {
        returnValue = F("Salomon-Seligmann-Weg");
        break;
    }
    case 274273:
    {
        returnValue = F("Salomon-Siedle-Str.");
        break;
    }
    case 274274:
    {
        returnValue = F("Salomonisstr.");
        break;
    }
    case 274275:
    {
        returnValue = F("Salomonsberg");
        break;
    }
    case 274276:
    {
        returnValue = F("Salomonsborner Höhe");
        break;
    }
    case 274277:
    {
        returnValue = F("Salomonsborner Str.");
        break;
    }
    case 274278:
    {
        returnValue = F("Salomonsgasse");
        break;
    }
    case 274279:
    {
        returnValue = F("Salomonsonstr.");
        break;
    }
    case 274280:
    {
        returnValue = F("Salomonstr.");
        break;
    }
    case 274281:
    {
        returnValue = F("Salomonweg");
        break;
    }
    case 274282:
    {
        returnValue = F("Salon-de-Provence-Ring");
        break;
    }
    case 274283:
    {
        returnValue = F("Salonallee");
        break;
    }
    case 274284:
    {
        returnValue = F("Salonbrücke");
        break;
    }
    case 274285:
    {
        returnValue = F("Salower Chaussee");
        break;
    }
    case 274286:
    {
        returnValue = F("Salower Str.");
        break;
    }
    case 274287:
    {
        returnValue = F("Salower Weg");
        break;
    }
    case 274288:
    {
        returnValue = F("Salpetererstr.");
        break;
    }
    case 274289:
    {
        returnValue = F("Salpetererweg");
        break;
    }
    case 274290:
    {
        returnValue = F("Salpetergasse");
        break;
    }
    case 274291:
    {
        returnValue = F("Salpeterhütte");
        break;
    }
    case 274292:
    {
        returnValue = F("Salpeterstr.");
        break;
    }
    case 274293:
    {
        returnValue = F("Salpeterweg");
        break;
    }
    case 274294:
    {
        returnValue = F("Saltemertstr.");
        break;
    }
    case 274295:
    {
        returnValue = F("Saltendorfer Str.");
        break;
    }
    case 274296:
    {
        returnValue = F("Saltendorfer Weg");
        break;
    }
    case 274297:
    {
        returnValue = F("Saltenhofener Eck");
        break;
    }
    case 274298:
    {
        returnValue = F("Saltenwiesestiege");
        break;
    }
    case 274299:
    {
        returnValue = F("Salugoweg");
        break;
    }
    case 274300:
    {
        returnValue = F("Salurner Str.");
        break;
    }
    case 274301:
    {
        returnValue = F("Salutstr.");
        break;
    }
    case 274302:
    {
        returnValue = F("Salvador-Allende-Platz");
        break;
    }
    case 274303:
    {
        returnValue = F("Salvador-Allende-Str.");
        break;
    }
    case 274304:
    {
        returnValue = F("Salvador-Dali-Str.");
        break;
    }
    case 274305:
    {
        returnValue = F("Salvador-Dali-Weg");
        break;
    }
    case 274306:
    {
        returnValue = F("Salvator-Friedhof");
        break;
    }
    case 274307:
    {
        returnValue = F("Salvator-Kirchplatz");
        break;
    }
    case 274308:
    {
        returnValue = F("Salvator-Ring");
        break;
    }
    case 274309:
    {
        returnValue = F("Salvator-Steig");
        break;
    }
    case 274310:
    {
        returnValue = F("Salvatorberg");
        break;
    }
    case 274311:
    {
        returnValue = F("Salvatorbergstr.");
        break;
    }
    case 274312:
    {
        returnValue = F("Salvatorgasse");
        break;
    }
    case 274313:
    {
        returnValue = F("Salvatorgäßchen");
        break;
    }
    case 274314:
    {
        returnValue = F("Salvatorhof");
        break;
    }
    case 274315:
    {
        returnValue = F("Salvatorianerstr.");
        break;
    }
    case 274316:
    {
        returnValue = F("Salvatorianerweg");
        break;
    }
    case 274317:
    {
        returnValue = F("Salvatorpassage");
        break;
    }
    case 274318:
    {
        returnValue = F("Salvatorplatz");
        break;
    }
    case 274319:
    {
        returnValue = F("Salvatorschlagstr.");
        break;
    }
    case 274320:
    {
        returnValue = F("Salvatorstr.");
        break;
    }
    case 274321:
    {
        returnValue = F("Salvatorweg");
        break;
    }
    case 274322:
    {
        returnValue = F("Salvestweg");
        break;
    }
    case 274323:
    {
        returnValue = F("Salvianstr.");
        break;
    }
    case 274324:
    {
        returnValue = F("Salviaweg");
        break;
    }
    case 274325:
    {
        returnValue = F("Salvienstr.");
        break;
    }
    case 274326:
    {
        returnValue = F("Salvienweg");
        break;
    }
    case 274327:
    {
        returnValue = F("Salweide");
        break;
    }
    case 274328:
    {
        returnValue = F("Salweidenbecke");
        break;
    }
    case 274329:
    {
        returnValue = F("Salweidenkamp");
        break;
    }
    case 274330:
    {
        returnValue = F("Salweidenring");
        break;
    }
    case 274331:
    {
        returnValue = F("Salwertstich");
        break;
    }
    case 274332:
    {
        returnValue = F("Salweyweg");
        break;
    }
    case 274333:
    {
        returnValue = F("Salwirkstr.");
        break;
    }
    case 274334:
    {
        returnValue = F("Salwischtwiete");
        break;
    }
    case 274335:
    {
        returnValue = F("Salz-Beiz-Sträßle");
        break;
    }
    case 274336:
    {
        returnValue = F("Salzachau");
        break;
    }
    case 274337:
    {
        returnValue = F("Salzachbogen");
        break;
    }
    case 274338:
    {
        returnValue = F("Salzachbrücke Tittmoning");
        break;
    }
    case 274339:
    {
        returnValue = F("Salzachring");
        break;
    }
    case 274340:
    {
        returnValue = F("Salzachstr.");
        break;
    }
    case 274341:
    {
        returnValue = F("Salzachweg");
        break;
    }
    case 274342:
    {
        returnValue = F("Salzack-Schneise");
        break;
    }
    case 274343:
    {
        returnValue = F("Salzackerweg");
        break;
    }
    case 274344:
    {
        returnValue = F("Salzaer Str.");
        break;
    }
    case 274345:
    {
        returnValue = F("Salzaquellweg");
        break;
    }
    case 274346:
    {
        returnValue = F("Salzastr.");
        break;
    }
    case 274347:
    {
        returnValue = F("Salzatal Rundweg");
        break;
    }
    case 274348:
    {
        returnValue = F("Salzbachaue");
        break;
    }
    case 274349:
    {
        returnValue = F("Salzbachstr.");
        break;
    }
    case 274350:
    {
        returnValue = F("Salzbachweg");
        break;
    }
    case 274351:
    {
        returnValue = F("Salzbachäcker");
        break;
    }
    case 274352:
    {
        returnValue = F("Salzberg");
        break;
    }
    case 274353:
    {
        returnValue = F("Salzbergblick");
        break;
    }
    case 274354:
    {
        returnValue = F("Salzbergener Str.");
        break;
    }
    case 274355:
    {
        returnValue = F("Salzbergener Weg");
        break;
    }
    case 274356:
    {
        returnValue = F("Salzberger Str.");
        break;
    }
    case 274357:
    {
        returnValue = F("Salzberger Weg");
        break;
    }
    case 274358:
    {
        returnValue = F("Salzbergstr.");
        break;
    }
    case 274359:
    {
        returnValue = F("Salzbergweg");
        break;
    }
    case 274360:
    {
        returnValue = F("Salzbiegelsträßle");
        break;
    }
    case 274361:
    {
        returnValue = F("Salzbiegelweg");
        break;
    }
    case 274362:
    {
        returnValue = F("Salzbinsenweg");
        break;
    }
    case 274363:
    {
        returnValue = F("Salzbitz");
        break;
    }
    case 274364:
    {
        returnValue = F("Salzblütenweg");
        break;
    }
    case 274365:
    {
        returnValue = F("Salzborn");
        break;
    }
    case 274366:
    {
        returnValue = F("Salzborngasse");
        break;
    }
    case 274367:
    {
        returnValue = F("Salzbornhöhe");
        break;
    }
    case 274368:
    {
        returnValue = F("Salzbornstr.");
        break;
    }
    case 274369:
    {
        returnValue = F("Salzbreite");
        break;
    }
    case 274370:
    {
        returnValue = F("Salzbrink");
        break;
    }
    case 274371:
    {
        returnValue = F("Salzbronnenweg");
        break;
    }
    case 274372:
    {
        returnValue = F("Salzbrunnen");
        break;
    }
    case 274373:
    {
        returnValue = F("Salzbrunnenstr.");
        break;
    }
    case 274374:
    {
        returnValue = F("Salzbrunnenweg");
        break;
    }
    case 274375:
    {
        returnValue = F("Salzbrunner Str.");
        break;
    }
    case 274376:
    {
        returnValue = F("Salzbrunner Weg");
        break;
    }
    case 274377:
    {
        returnValue = F("Salzbrunnstr.");
        break;
    }
    case 274378:
    {
        returnValue = F("Salzbrücke");
        break;
    }
    case 274379:
    {
        returnValue = F("Salzbrückerstr.");
        break;
    }
    case 274380:
    {
        returnValue = F("Salzbuckelweg");
        break;
    }
    case 274381:
    {
        returnValue = F("Salzburg");
        break;
    }
    case 274382:
    {
        returnValue = F("Salzburger Leite");
        break;
    }
    case 274383:
    {
        returnValue = F("Salzburger Platz");
        break;
    }
    case 274384:
    {
        returnValue = F("Salzburger Str.");
        break;
    }
    case 274385:
    {
        returnValue = F("Salzburger Weg");
        break;
    }
    case 274386:
    {
        returnValue = F("Salzburghofener Str.");
        break;
    }
    case 274387:
    {
        returnValue = F("Salzburgstr.");
        break;
    }
    case 274388:
    {
        returnValue = F("Salzburgweg");
        break;
    }
    case 274389:
    {
        returnValue = F("Salzbödener Weg");
        break;
    }
    case 274390:
    {
        returnValue = F("Salzböder Weg");
        break;
    }
    case 274391:
    {
        returnValue = F("Salzbödestr.");
        break;
    }
    case 274392:
    {
        returnValue = F("Salzbödeweg");
        break;
    }
    case 274393:
    {
        returnValue = F("Salzbühl");
        break;
    }
    case 274394:
    {
        returnValue = F("Salzdahlumer Str.");
        break;
    }
    case 274395:
    {
        returnValue = F("Salzdahlumer Weg");
        break;
    }
    case 274396:
    {
        returnValue = F("Salzdamm");
        break;
    }
    case 274397:
    {
        returnValue = F("Salzdetfurther Str.");
        break;
    }
    case 274398:
    {
        returnValue = F("Salzdetfurthstr.");
        break;
    }
    case 274399:
    {
        returnValue = F("Salzeck");
        break;
    }
    case 274400:
    {
        returnValue = F("Salzeckweg");
        break;
    }
    case 274401:
    {
        returnValue = F("Salzegart-Weg");
        break;
    }
    case 274402:
    {
        returnValue = F("Salzeichenweg");
        break;
    }
    case 274403:
    {
        returnValue = F("Salzellerweg");
        break;
    }
    case 274404:
    {
        returnValue = F("Salzelmener Str.");
        break;
    }
    case 274405:
    {
        returnValue = F("Salzelmer Weg");
        break;
    }
    case 274406:
    {
        returnValue = F("Salzendeicher Str.");
        break;
    }
    case 274407:
    {
        returnValue = F("Salzenforster Str.");
        break;
    }
    case 274408:
    {
        returnValue = F("Salzengasse");
        break;
    }
    case 274409:
    {
        returnValue = F("Salzengroden");
        break;
    }
    case 274410:
    {
        returnValue = F("Salzenweg");
        break;
    }
    case 274411:
    {
        returnValue = F("Salzenweiler Str.");
        break;
    }
    case 274412:
    {
        returnValue = F("Salzenweiler Weg");
        break;
    }
    case 274413:
    {
        returnValue = F("Salzer Pass");
        break;
    }
    case 274414:
    {
        returnValue = F("Salzer Str.");
        break;
    }
    case 274415:
    {
        returnValue = F("Salzer Weg");
        break;
    }
    case 274416:
    {
        returnValue = F("Salzerlenweg");
        break;
    }
    case 274417:
    {
        returnValue = F("Salzertstr.");
        break;
    }
    case 274418:
    {
        returnValue = F("Salzertweg");
        break;
    }
    case 274419:
    {
        returnValue = F("Salzerweg");
        break;
    }
    case 274420:
    {
        returnValue = F("Salzeweg");
        break;
    }
    case 274421:
    {
        returnValue = F("Salzfeldstr.");
        break;
    }
    case 274422:
    {
        returnValue = F("Salzforststr.");
        break;
    }
    case 274423:
    {
        returnValue = F("Salzfurter Weg");
        break;
    }
    case 274424:
    {
        returnValue = F("Salzgarten");
        break;
    }
    case 274425:
    {
        returnValue = F("Salzgartenstr.");
        break;
    }
    case 274426:
    {
        returnValue = F("Salzgass");
        break;
    }
    case 274427:
    {
        returnValue = F("Salzgasse");
        break;
    }
    case 274428:
    {
        returnValue = F("Salzgitter Str.");
        break;
    }
    case 274429:
    {
        returnValue = F("Salzgitterstr.");
        break;
    }
    case 274430:
    {
        returnValue = F("Salzgraben");
        break;
    }
    case 274431:
    {
        returnValue = F("Salzgrabenweg");
        break;
    }
    case 274432:
    {
        returnValue = F("Salzgrafenplatz");
        break;
    }
    case 274433:
    {
        returnValue = F("Salzgrafenstr.");
        break;
    }
    case 274434:
    {
        returnValue = F("Salzgrube");
        break;
    }
    case 274435:
    {
        returnValue = F("Salzgrund");
        break;
    }
    case 274436:
    {
        returnValue = F("Salzgrundstr.");
        break;
    }
    case 274437:
    {
        returnValue = F("Salzgässchen");
        break;
    }
    case 274438:
    {
        returnValue = F("Salzgäßchen");
        break;
    }
    case 274439:
    {
        returnValue = F("Salzgäßle");
        break;
    }
    case 274440:
    {
        returnValue = F("Salzhaffweg");
        break;
    }
    case 274441:
    {
        returnValue = F("Salzhandelsstr.");
        break;
    }
    case 274442:
    {
        returnValue = F("Salzhausener Str.");
        break;
    }
    case 274443:
    {
        returnValue = F("Salzhemmendorfer Str.");
        break;
    }
    case 274444:
    {
        returnValue = F("Salzhemmendorfer Weg");
        break;
    }
    case 274445:
    {
        returnValue = F("Salzherrnstr.");
        break;
    }
    case 274446:
    {
        returnValue = F("Salzhofen");
        break;
    }
    case 274447:
    {
        returnValue = F("Salzhofstr.");
        break;
    }
    case 274448:
    {
        returnValue = F("Salzhofufer");
        break;
    }
    case 274449:
    {
        returnValue = F("Salzhorstweg");
        break;
    }
    case 274450:
    {
        returnValue = F("Salzhub");
        break;
    }
    case 274451:
    {
        returnValue = F("Salzhübelstr.");
        break;
    }
    case 274452:
    {
        returnValue = F("Salzhügel");
        break;
    }
    case 274453:
    {
        returnValue = F("Salziger Seen Weg");
        break;
    }
    case 274454:
    {
        returnValue = F("Salzingerstr.");
        break;
    }
    case 274455:
    {
        returnValue = F("Salzkamp");
        break;
    }
    case 274456:
    {
        returnValue = F("Salzkoth");
        break;
    }
    case 274457:
    {
        returnValue = F("Salzkotten");
        break;
    }
    case 274458:
    {
        returnValue = F("Salzkottener Str.");
        break;
    }
    case 274459:
    {
        returnValue = F("Salzkärrnerweg");
        break;
    }
    case 274460:
    {
        returnValue = F("Salzköppel");
        break;
    }
    case 274461:
    {
        returnValue = F("Salzküfergasse");
        break;
    }
    case 274462:
    {
        returnValue = F("Salzlachenweg");
        break;
    }
    case 274463:
    {
        returnValue = F("Salzlachweg");
        break;
    }
    case 274464:
    {
        returnValue = F("Salzlack Schneise");
        break;
    }
    case 274465:
    {
        returnValue = F("Salzlack-Schneise");
        break;
    }
    case 274466:
    {
        returnValue = F("Salzlackenbergweg");
        break;
    }
    case 274467:
    {
        returnValue = F("Salzlackenbuschweg");
        break;
    }
    case 274468:
    {
        returnValue = F("Salzlackenweg");
        break;
    }
    case 274469:
    {
        returnValue = F("Salzlackschneise");
        break;
    }
    case 274470:
    {
        returnValue = F("Salzlackweg");
        break;
    }
    case 274471:
    {
        returnValue = F("Salzlagerweg");
        break;
    }
    case 274472:
    {
        returnValue = F("Salzlandenweg");
        break;
    }
    case 274473:
    {
        returnValue = F("Salzlecke");
        break;
    }
    case 274474:
    {
        returnValue = F("Salzleckengestell");
        break;
    }
    case 274475:
    {
        returnValue = F("Salzleckenweg");
        break;
    }
    case 274476:
    {
        returnValue = F("Salzleckerhauweg");
        break;
    }
    case 274477:
    {
        returnValue = F("Salzleckertal");
        break;
    }
    case 274478:
    {
        returnValue = F("Salzleckerweg");
        break;
    }
    case 274479:
    {
        returnValue = F("Salzleckeweg");
        break;
    }
    case 274480:
    {
        returnValue = F("Salzleckmattenweg");
        break;
    }
    case 274481:
    {
        returnValue = F("Salzlände");
        break;
    }
    case 274482:
    {
        returnValue = F("Salzländeweg");
        break;
    }
    case 274483:
    {
        returnValue = F("Salzmannsgäßchen");
        break;
    }
    case 274484:
    {
        returnValue = F("Salzmannstr.");
        break;
    }
    case 274485:
    {
        returnValue = F("Salzmannweg");
        break;
    }
    case 274486:
    {
        returnValue = F("Salzmarkt");
        break;
    }
    case 274487:
    {
        returnValue = F("Salzmarktstr.");
        break;
    }
    case 274488:
    {
        returnValue = F("Salzmatten");
        break;
    }
    case 274489:
    {
        returnValue = F("Salzmeierstiege");
        break;
    }
    case 274490:
    {
        returnValue = F("Salzmesserstr.");
        break;
    }
    case 274491:
    {
        returnValue = F("Salzmoor");
        break;
    }
    case 274492:
    {
        returnValue = F("Salzmoosweg");
        break;
    }
    case 274493:
    {
        returnValue = F("Salzmüllerweg");
        break;
    }
    case 274494:
    {
        returnValue = F("Salzmünder Landstr.");
        break;
    }
    case 274495:
    {
        returnValue = F("Salzmünder Str.");
        break;
    }
    case 274496:
    {
        returnValue = F("Salzmünder Weg");
        break;
    }
    case 274497:
    {
        returnValue = F("Salzpfad");
        break;
    }
    case 274498:
    {
        returnValue = F("Salzpforte");
        break;
    }
    case 274499:
    {
        returnValue = F("Salzpfännerstr.");
        break;
    }
    case 274500:
    {
        returnValue = F("Salzplatz");
        break;
    }
    case 274501:
    {
        returnValue = F("Salzredder");
        break;
    }
    case 274502:
    {
        returnValue = F("Salzreut");
        break;
    }
    case 274503:
    {
        returnValue = F("Salzreute");
        break;
    }
    case 274504:
    {
        returnValue = F("Salzring");
        break;
    }
    case 274505:
    {
        returnValue = F("Salzrinne");
        break;
    }
    case 274506:
    {
        returnValue = F("Salzrinnenstr.");
        break;
    }
    case 274507:
    {
        returnValue = F("Salzschlirfer Str.");
        break;
    }
    case 274508:
    {
        returnValue = F("Salzschöfflerweg");
        break;
    }
    case 274509:
    {
        returnValue = F("Salzsiederpfad");
        break;
    }
    case 274510:
    {
        returnValue = F("Salzsiederstr.");
        break;
    }
    case 274511:
    {
        returnValue = F("Salzstadelgasse");
        break;
    }
    case 274512:
    {
        returnValue = F("Salzstadelplatz");
        break;
    }
    case 274513:
    {
        returnValue = F("Salzstadelweg");
        break;
    }
    case 274514:
    {
        returnValue = F("Salzsteinstr.");
        break;
    }
    case 274515:
    {
        returnValue = F("Salzsteinweg");
        break;
    }
    case 274516:
    {
        returnValue = F("Salzstetter Str.");
        break;
    }
    case 274517:
    {
        returnValue = F("Salzstr.");
        break;
    }
    case 274518:
    {
        returnValue = F("Salzstr. am Wasser");
        break;
    }
    case 274519:
    {
        returnValue = F("Salztal");
        break;
    }
    case 274520:
    {
        returnValue = F("Salztalstr.");
        break;
    }
    case 274521:
    {
        returnValue = F("Salztalweg");
        break;
    }
    case 274522:
    {
        returnValue = F("Salzteich");
        break;
    }
    case 274523:
    {
        returnValue = F("Salztor");
        break;
    }
    case 274524:
    {
        returnValue = F("Salztorscontrescarpe");
        break;
    }
    case 274525:
    {
        returnValue = F("Salztorswall");
        break;
    }
    case 274526:
    {
        returnValue = F("Salztröge");
        break;
    }
    case 274527:
    {
        returnValue = F("Salzturmgasse");
        break;
    }
    case 274528:
    {
        returnValue = F("Salzuflener Str.");
        break;
    }
    case 274529:
    {
        returnValue = F("Salzufler Allee");
        break;
    }
    case 274530:
    {
        returnValue = F("Salzufler Str.");
        break;
    }
    case 274531:
    {
        returnValue = F("Salzunger Str.");
        break;
    }
    case 274532:
    {
        returnValue = F("Salzunger Tor");
        break;
    }
    case 274533:
    {
        returnValue = F("Salzwasen");
        break;
    }
    case 274534:
    {
        returnValue = F("Salzwasenweg");
        break;
    }
    case 274535:
    {
        returnValue = F("Salzwedeler Hof");
        break;
    }
    case 274536:
    {
        returnValue = F("Salzwedeler Str.");
        break;
    }
    case 274537:
    {
        returnValue = F("Salzwedeler Tormühle");
        break;
    }
    case 274538:
    {
        returnValue = F("Salzwedeler Torstr.");
        break;
    }
    case 274539:
    {
        returnValue = F("Salzwedeler Trift");
        break;
    }
    case 274540:
    {
        returnValue = F("Salzwedeler Weg");
        break;
    }
    case 274541:
    {
        returnValue = F("Salzwedelhey");
        break;
    }
    case 274542:
    {
        returnValue = F("Salzwedelweg");
        break;
    }
    case 274543:
    {
        returnValue = F("Salzweg");
        break;
    }
    case 274544:
    {
        returnValue = F("Salzweger Str.");
        break;
    }
    case 274545:
    {
        returnValue = F("Salzweiher");
        break;
    }
    case 274546:
    {
        returnValue = F("Salzwerkstr.");
        break;
    }
    case 274547:
    {
        returnValue = F("Salzwiese");
        break;
    }
    case 274548:
    {
        returnValue = F("Salzwiesen");
        break;
    }
    case 274549:
    {
        returnValue = F("Salzwiesenpfad");
        break;
    }
    case 274550:
    {
        returnValue = F("Salzwiesenrain");
        break;
    }
    case 274551:
    {
        returnValue = F("Salzwiesenring");
        break;
    }
    case 274552:
    {
        returnValue = F("Salzwiesenstr.");
        break;
    }
    case 274553:
    {
        returnValue = F("Salzwiesenweg");
        break;
    }
    case 274554:
    {
        returnValue = F("Salzwinkel");
        break;
    }
    case 274555:
    {
        returnValue = F("Salzäcker");
        break;
    }
    case 274556:
    {
        returnValue = F("Salzäckerstr.");
        break;
    }
    case 274557:
    {
        returnValue = F("Salzäckerweg");
        break;
    }
    case 274558:
    {
        returnValue = F("Samansstr.");
        break;
    }
    case 274559:
    {
        returnValue = F("Samariaweg");
        break;
    }
    case 274560:
    {
        returnValue = F("Samariterstr.");
        break;
    }
    case 274561:
    {
        returnValue = F("Samariterweg");
        break;
    }
    case 274562:
    {
        returnValue = F("Samatenweg");
        break;
    }
    case 274563:
    {
        returnValue = F("Sambach");
        break;
    }
    case 274564:
    {
        returnValue = F("Sambacher Landstr.");
        break;
    }
    case 274565:
    {
        returnValue = F("Sambacher Leite");
        break;
    }
    case 274566:
    {
        returnValue = F("Sambacherr Weg");
        break;
    }
    case 274567:
    {
        returnValue = F("Sambachspfad");
        break;
    }
    case 274568:
    {
        returnValue = F("Sambachstr.");
        break;
    }
    case 274569:
    {
        returnValue = F("Sambachweg");
        break;
    }
    case 274570:
    {
        returnValue = F("Sambeck");
        break;
    }
    case 274571:
    {
        returnValue = F("Samberg");
        break;
    }
    case 274572:
    {
        returnValue = F("Samberger Str.");
        break;
    }
    case 274573:
    {
        returnValue = F("Sambergerstr.");
        break;
    }
    case 274574:
    {
        returnValue = F("Sambethstr.");
        break;
    }
    case 274575:
    {
        returnValue = F("Sambleber Str.");
        break;
    }
    case 274576:
    {
        returnValue = F("Sambugastr.");
        break;
    }
    case 274577:
    {
        returnValue = F("Sambugaweg");
        break;
    }
    case 274578:
    {
        returnValue = F("Samelesgasse");
        break;
    }
    case 274579:
    {
        returnValue = F("Samelower Weg");
        break;
    }
    case 274580:
    {
        returnValue = F("Samelsonplatz");
        break;
    }
    case 274581:
    {
        returnValue = F("Samenfeldstr.");
        break;
    }
    case 274582:
    {
        returnValue = F("Samenhandelstr.");
        break;
    }
    case 274583:
    {
        returnValue = F("Samenholz");
        break;
    }
    case 274584:
    {
        returnValue = F("Samentalstr.");
        break;
    }
    case 274585:
    {
        returnValue = F("Samentalweg");
        break;
    }
    case 274586:
    {
        returnValue = F("Samenäcker");
        break;
    }
    case 274587:
    {
        returnValue = F("Samerbergstr.");
        break;
    }
    case 274588:
    {
        returnValue = F("Samerbrücke");
        break;
    }
    case 274589:
    {
        returnValue = F("Samerhofstr.");
        break;
    }
    case 274590:
    {
        returnValue = F("Samermoosweg");
        break;
    }
    case 274591:
    {
        returnValue = F("Samernsche Str.");
        break;
    }
    case 274592:
    {
        returnValue = F("Samerstr.");
        break;
    }
    case 274593:
    {
        returnValue = F("Samerweg");
        break;
    }
    case 274594:
    {
        returnValue = F("Samerwiesen");
        break;
    }
    case 274595:
    {
        returnValue = F("Sametswasenweg");
        break;
    }
    case 274596:
    {
        returnValue = F("Sametwiesen");
        break;
    }
    case 274597:
    {
        returnValue = F("Samfeldstr.");
        break;
    }
    case 274598:
    {
        returnValue = F("Samfeldweg");
        break;
    }
    case 274599:
    {
        returnValue = F("Samhofer Weg");
        break;
    }
    case 274600:
    {
        returnValue = F("Samhofstr.");
        break;
    }
    case 274601:
    {
        returnValue = F("Samholz");
        break;
    }
    case 274602:
    {
        returnValue = F("Samkestr.");
        break;
    }
    case 274603:
    {
        returnValue = F("Samlandhof");
        break;
    }
    case 274604:
    {
        returnValue = F("Samlandstr.");
        break;
    }
    case 274605:
    {
        returnValue = F("Samlandufer");
        break;
    }
    case 274606:
    {
        returnValue = F("Samlandweg");
        break;
    }
    case 274607:
    {
        returnValue = F("Sammatzer Kirchweg");
        break;
    }
    case 274608:
    {
        returnValue = F("Sammelbahnhof");
        break;
    }
    case 274609:
    {
        returnValue = F("Sammelband");
        break;
    }
    case 274610:
    {
        returnValue = F("Sammelmanns Weide");
        break;
    }
    case 274611:
    {
        returnValue = F("Sammelplatz Fluchtweg");
        break;
    }
    case 274612:
    {
        returnValue = F("Sammelte");
        break;
    }
    case 274613:
    {
        returnValue = F("Sammenheimer Str.");
        break;
    }
    case 274614:
    {
        returnValue = F("Sammerberg");
        break;
    }
    case 274615:
    {
        returnValue = F("Sammerswinkel");
        break;
    }
    case 274616:
    {
        returnValue = F("Sammertsweg");
        break;
    }
    case 274617:
    {
        returnValue = F("Sammetgasse");
        break;
    }
    case 274618:
    {
        returnValue = F("Sammetgässle");
        break;
    }
    case 274619:
    {
        returnValue = F("Sammetsreith");
        break;
    }
    case 274620:
    {
        returnValue = F("Sammetwiesen");
        break;
    }
    case 274621:
    {
        returnValue = F("Sammetwiesenstr.");
        break;
    }
    case 274622:
    {
        returnValue = F("Sammifeld");
        break;
    }
    case 274623:
    {
        returnValue = F("Sammlungsgasse");
        break;
    }
    case 274624:
    {
        returnValue = F("Sammthaler Weg");
        break;
    }
    case 274625:
    {
        returnValue = F("Sammtholzweg");
        break;
    }
    case 274626:
    {
        returnValue = F("Sammtstr.");
        break;
    }
    case 274627:
    {
        returnValue = F("Sammtweg");
        break;
    }
    case 274628:
    {
        returnValue = F("Sammweg");
        break;
    }
    case 274629:
    {
        returnValue = F("Sammy-Drechsel-Str.");
        break;
    }
    case 274630:
    {
        returnValue = F("Samnitscheweg");
        break;
    }
    case 274631:
    {
        returnValue = F("Samoastr.");
        break;
    }
    case 274632:
    {
        returnValue = F("Samoborstr.");
        break;
    }
    case 274633:
    {
        returnValue = F("Samow");
        break;
    }
    case 274634:
    {
        returnValue = F("Samsgasse");
        break;
    }
    case 274635:
    {
        returnValue = F("Samskamp");
        break;
    }
    case 274636:
    {
        returnValue = F("Samstagstr.");
        break;
    }
    case 274637:
    {
        returnValue = F("Samstagsweg");
        break;
    }
    case 274638:
    {
        returnValue = F("Samstr.");
        break;
    }
    case 274639:
    {
        returnValue = F("Samsweger Str.");
        break;
    }
    case 274640:
    {
        returnValue = F("Samtbandstr.");
        break;
    }
    case 274641:
    {
        returnValue = F("Samtholzstr.");
        break;
    }
    case 274642:
    {
        returnValue = F("Samthude");
        break;
    }
    case 274643:
    {
        returnValue = F("Samtrotweg");
        break;
    }
    case 274644:
    {
        returnValue = F("Samtweg");
        break;
    }
    case 274645:
    {
        returnValue = F("Samtwiesen");
        break;
    }
    case 274646:
    {
        returnValue = F("Samuel-Beck-Weg");
        break;
    }
    case 274647:
    {
        returnValue = F("Samuel-Beckett-Anlage");
        break;
    }
    case 274648:
    {
        returnValue = F("Samuel-Frank-Str.");
        break;
    }
    case 274649:
    {
        returnValue = F("Samuel-Friedrich-Sauter-Str.");
        break;
    }
    case 274650:
    {
        returnValue = F("Samuel-Hahnemann-Platz");
        break;
    }
    case 274651:
    {
        returnValue = F("Samuel-Hahnemann-Str.");
        break;
    }
    case 274652:
    {
        returnValue = F("Samuel-Hahnemann-Weg");
        break;
    }
    case 274653:
    {
        returnValue = F("Samuel-Hebich-Weg");
        break;
    }
    case 274654:
    {
        returnValue = F("Samuel-Heinicke-Str.");
        break;
    }
    case 274655:
    {
        returnValue = F("Samuel-Hoenes-Str.");
        break;
    }
    case 274656:
    {
        returnValue = F("Samuel-Lampel-Str.");
        break;
    }
    case 274657:
    {
        returnValue = F("Samuel-Mayer-Weg");
        break;
    }
    case 274658:
    {
        returnValue = F("Samuel-Morse-Str.");
        break;
    }
    case 274659:
    {
        returnValue = F("Samuel-Pufendorf-Weg");
        break;
    }
    case 274660:
    {
        returnValue = F("Samuel-Scheidt-Weg");
        break;
    }
    case 274661:
    {
        returnValue = F("Samuel-Schmidt-Str.");
        break;
    }
    case 274662:
    {
        returnValue = F("Samuel-Schröter-Str.");
        break;
    }
    case 274663:
    {
        returnValue = F("Samuel-Spier-Gasse");
        break;
    }
    case 274664:
    {
        returnValue = F("Samuel-Vogel-Weg");
        break;
    }
    case 274665:
    {
        returnValue = F("Samuelisdamm");
        break;
    }
    case 274666:
    {
        returnValue = F("Samuelsgasse");
        break;
    }
    case 274667:
    {
        returnValue = F("Samuelshof");
        break;
    }
    case 274668:
    {
        returnValue = F("Samuelstr.");
        break;
    }
    case 274669:
    {
        returnValue = F("Samuelweg");
        break;
    }
    case 274670:
    {
        returnValue = F("Samweberstr.");
        break;
    }
    case 274671:
    {
        returnValue = F("Samweg");
        break;
    }
    case 274672:
    {
        returnValue = F("Samwerstr.");
        break;
    }
    case 274673:
    {
        returnValue = F("San Fernando");
        break;
    }
    case 274674:
    {
        returnValue = F("San Jacinto Drive");
        break;
    }
    case 274675:
    {
        returnValue = F("San Juan Hill Street");
        break;
    }
    case 274676:
    {
        returnValue = F("San Michele Str.");
        break;
    }
    case 274677:
    {
        returnValue = F("San Sebastian de los Reyes Platz");
        break;
    }
    case 274678:
    {
        returnValue = F("San-Biagio-Platani-Platz");
        break;
    }
    case 274679:
    {
        returnValue = F("San-Carlos-Str.");
        break;
    }
    case 274680:
    {
        returnValue = F("San-Gimignano-Weg");
        break;
    }
    case 274681:
    {
        returnValue = F("San-Pietro-Str.");
        break;
    }
    case 274682:
    {
        returnValue = F("San-Remo-Str.");
        break;
    }
    case 274683:
    {
        returnValue = F("San-Sebastian-Platz");
        break;
    }
    case 274684:
    {
        returnValue = F("San-Vincenzo-Bogen");
        break;
    }
    case 274685:
    {
        returnValue = F("San-Vito-dei-Normanni-Str.");
        break;
    }
    case 274686:
    {
        returnValue = F("San.-Rat-Dr.-Niessen-Str.");
        break;
    }
    case 274687:
    {
        returnValue = F("Sanaallee");
        break;
    }
    case 274688:
    {
        returnValue = F("Sanagarten");
        break;
    }
    case 274689:
    {
        returnValue = F("Sanarystr.");
        break;
    }
    case 274690:
    {
        returnValue = F("Sanatoriumsplatz");
        break;
    }
    case 274691:
    {
        returnValue = F("Sanatoriumstr.");
        break;
    }
    case 274692:
    {
        returnValue = F("Sanatoriumsweg");
        break;
    }
    case 274693:
    {
        returnValue = F("Sand");
        break;
    }
    case 274694:
    {
        returnValue = F("Sandacker");
        break;
    }
    case 274695:
    {
        returnValue = F("Sandackerring");
        break;
    }
    case 274696:
    {
        returnValue = F("Sandackerstr.");
        break;
    }
    case 274697:
    {
        returnValue = F("Sandackersweg");
        break;
    }
    case 274698:
    {
        returnValue = F("Sandackerweg");
        break;
    }
    case 274699:
    {
        returnValue = F("Sandallee");
        break;
    }
    case 274700:
    {
        returnValue = F("Sandanger");
        break;
    }
    case 274701:
    {
        returnValue = F("Sandangerweg");
        break;
    }
    case 274702:
    {
        returnValue = F("Sandauer Str.");
        break;
    }
    case 274703:
    {
        returnValue = F("Sandauer Tor");
        break;
    }
    case 274704:
    {
        returnValue = F("Sandauer Weg");
        break;
    }
    case 274705:
    {
        returnValue = F("Sandauerholz");
        break;
    }
    case 274706:
    {
        returnValue = F("Sandbach");
        break;
    }
    case 274707:
    {
        returnValue = F("Sandbachdamm");
        break;
    }
    case 274708:
    {
        returnValue = F("Sandbache");
        break;
    }
    case 274709:
    {
        returnValue = F("Sandbacher Str.");
        break;
    }
    case 274710:
    {
        returnValue = F("Sandbachstr.");
        break;
    }
    case 274711:
    {
        returnValue = F("Sandbachweg");
        break;
    }
    case 274712:
    {
        returnValue = F("Sandbahn");
        break;
    }
    case 274713:
    {
        returnValue = F("Sandbankstr.");
        break;
    }
    case 274714:
    {
        returnValue = F("Sandbarg");
        break;
    }
    case 274715:
    {
        returnValue = F("Sandbargkoppel");
        break;
    }
    case 274716:
    {
        returnValue = F("Sandbargmoorweg");
        break;
    }
    case 274717:
    {
        returnValue = F("Sandbargring");
        break;
    }
    case 274718:
    {
        returnValue = F("Sandbargwisch");
        break;
    }
    case 274719:
    {
        returnValue = F("Sandbauernweg");
        break;
    }
    case 274720:
    {
        returnValue = F("Sandbauerweg");
        break;
    }
    case 274721:
    {
        returnValue = F("Sandbeckstr.");
        break;
    }
    case 274722:
    {
        returnValue = F("Sandbeeke");
        break;
    }
    case 274723:
    {
        returnValue = F("Sandbeetstr.");
        break;
    }
    case 274724:
    {
        returnValue = F("Sandbek-Dorfstr.");
        break;
    }
    case 274725:
    {
        returnValue = F("Sandbek-Eulenstr.");
        break;
    }
    case 274726:
    {
        returnValue = F("Sandbek-Meiereiweg");
        break;
    }
    case 274727:
    {
        returnValue = F("Sandbek-Mühlenweg");
        break;
    }
    case 274728:
    {
        returnValue = F("Sandberg");
        break;
    }
    case 274729:
    {
        returnValue = F("Sandbergasse");
        break;
    }
    case 274730:
    {
        returnValue = F("Sandberge");
        break;
    }
    case 274731:
    {
        returnValue = F("Sandbergenweg");
        break;
    }
    case 274732:
    {
        returnValue = F("Sandberger Str.");
        break;
    }
    case 274733:
    {
        returnValue = F("Sandberger Weg");
        break;
    }
    case 274734:
    {
        returnValue = F("Sandbergerstr.");
        break;
    }
    case 274735:
    {
        returnValue = F("Sandbergeweg");
        break;
    }
    case 274736:
    {
        returnValue = F("Sandbergfeld");
        break;
    }
    case 274737:
    {
        returnValue = F("Sandberggasse");
        break;
    }
    case 274738:
    {
        returnValue = F("Sandberggeräumt");
        break;
    }
    case 274739:
    {
        returnValue = F("Sandberghof");
        break;
    }
    case 274740:
    {
        returnValue = F("Sandberghohle");
        break;
    }
    case 274741:
    {
        returnValue = F("Sandberghöhe");
        break;
    }
    case 274742:
    {
        returnValue = F("Sandbergkamp");
        break;
    }
    case 274743:
    {
        returnValue = F("Sandbergring");
        break;
    }
    case 274744:
    {
        returnValue = F("Sandbergsfeld");
        break;
    }
    case 274745:
    {
        returnValue = F("Sandbergsiedlung");
        break;
    }
    case 274746:
    {
        returnValue = F("Sandbergsteige");
        break;
    }
    case 274747:
    {
        returnValue = F("Sandbergstr.");
        break;
    }
    case 274748:
    {
        returnValue = F("Sandbergsweg");
        break;
    }
    case 274749:
    {
        returnValue = F("Sandbergtannen");
        break;
    }
    case 274750:
    {
        returnValue = F("Sandbergweg");
        break;
    }
    case 274751:
    {
        returnValue = F("Sandbichel");
        break;
    }
    case 274752:
    {
        returnValue = F("Sandbichelring");
        break;
    }
    case 274753:
    {
        returnValue = F("Sandbichelweg");
        break;
    }
    case 274754:
    {
        returnValue = F("Sandbichl");
        break;
    }
    case 274755:
    {
        returnValue = F("Sandbichlweg");
        break;
    }
    case 274756:
    {
        returnValue = F("Sandbienenweg");
        break;
    }
    case 274757:
    {
        returnValue = F("Sandbirkenstr.");
        break;
    }
    case 274758:
    {
        returnValue = F("Sandbirkenweg");
        break;
    }
    case 274759:
    {
        returnValue = F("Sandbirkenwende");
        break;
    }
    case 274760:
    {
        returnValue = F("Sandblattschneise");
        break;
    }
    case 274761:
    {
        returnValue = F("Sandblattweg");
        break;
    }
    case 274762:
    {
        returnValue = F("Sandbleckden");
        break;
    }
    case 274763:
    {
        returnValue = F("Sandblek");
        break;
    }
    case 274764:
    {
        returnValue = F("Sandblick");
        break;
    }
    case 274765:
    {
        returnValue = F("Sandblock");
        break;
    }
    case 274766:
    {
        returnValue = F("Sandbochumer Str.");
        break;
    }
    case 274767:
    {
        returnValue = F("Sandbochumer Weg");
        break;
    }
    case 274768:
    {
        returnValue = F("Sandboden");
        break;
    }
    case 274769:
    {
        returnValue = F("Sandbodenstr.");
        break;
    }
    case 274770:
    {
        returnValue = F("Sandbodenweg");
        break;
    }
    case 274771:
    {
        returnValue = F("Sandboll");
        break;
    }
    case 274772:
    {
        returnValue = F("Sandborn");
        break;
    }
    case 274773:
    {
        returnValue = F("Sandbornschneise");
        break;
    }
    case 274774:
    {
        returnValue = F("Sandbornstr.");
        break;
    }
    case 274775:
    {
        returnValue = F("Sandbornweg");
        break;
    }
    case 274776:
    {
        returnValue = F("Sandbrede");
        break;
    }
    case 274777:
    {
        returnValue = F("Sandbredenstr.");
        break;
    }
    case 274778:
    {
        returnValue = F("Sandbreede");
        break;
    }
    case 274779:
    {
        returnValue = F("Sandbreestr.");
        break;
    }
    case 274780:
    {
        returnValue = F("Sandbreide");
        break;
    }
    case 274781:
    {
        returnValue = F("Sandbreite");
        break;
    }
    case 274782:
    {
        returnValue = F("Sandbreitenstr.");
        break;
    }
    case 274783:
    {
        returnValue = F("Sandbreiter Weg");
        break;
    }
    case 274784:
    {
        returnValue = F("Sandbrink");
        break;
    }
    case 274785:
    {
        returnValue = F("Sandbrinker Weg");
        break;
    }
    case 274786:
    {
        returnValue = F("Sandbrinkerfeld");
        break;
    }
    case 274787:
    {
        returnValue = F("Sandbrinks Hofstr.");
        break;
    }
    case 274788:
    {
        returnValue = F("Sandbrinkstr.");
        break;
    }
    case 274789:
    {
        returnValue = F("Sandbrooken Teich");
        break;
    }
    case 274790:
    {
        returnValue = F("Sandbruch");
        break;
    }
    case 274791:
    {
        returnValue = F("Sandbruchweg");
        break;
    }
    case 274792:
    {
        returnValue = F("Sandbrunnenstr.");
        break;
    }
    case 274793:
    {
        returnValue = F("Sandbrunnenweg");
        break;
    }
    case 274794:
    {
        returnValue = F("Sandbrunnstr.");
        break;
    }
    case 274795:
    {
        returnValue = F("Sandbrück");
        break;
    }
    case 274796:
    {
        returnValue = F("Sandbrückenweg");
        break;
    }
    case 274797:
    {
        returnValue = F("Sandbrückschneise");
        break;
    }
    case 274798:
    {
        returnValue = F("Sandbrünnele");
        break;
    }
    case 274799:
    {
        returnValue = F("Sandbuck");
        break;
    }
    case 274800:
    {
        returnValue = F("Sandbuckel");
        break;
    }
    case 274801:
    {
        returnValue = F("Sandbuckelgasse");
        break;
    }
    case 274802:
    {
        returnValue = F("Sandbuckelweg");
        break;
    }
    case 274803:
    {
        returnValue = F("Sandbuckweg");
        break;
    }
    case 274804:
    {
        returnValue = F("Sandburg");
        break;
    }
    case 274805:
    {
        returnValue = F("Sandburr");
        break;
    }
    case 274806:
    {
        returnValue = F("Sandbuschweg");
        break;
    }
    case 274807:
    {
        returnValue = F("Sandbüchel");
        break;
    }
    case 274808:
    {
        returnValue = F("Sandbühl");
        break;
    }
    case 274809:
    {
        returnValue = F("Sandbühlstr.");
        break;
    }
    case 274810:
    {
        returnValue = F("Sandbühlweg");
        break;
    }
    case 274811:
    {
        returnValue = F("Sandbültenweg");
        break;
    }
    case 274812:
    {
        returnValue = F("Sanddamm");
        break;
    }
    case 274813:
    {
        returnValue = F("Sanddammsweg");
        break;
    }
    case 274814:
    {
        returnValue = F("Sanddeele");
        break;
    }
    case 274815:
    {
        returnValue = F("Sanddeich");
        break;
    }
    case 274816:
    {
        returnValue = F("Sanddelle");
        break;
    }
    case 274817:
    {
        returnValue = F("Sanddobben");
        break;
    }
    case 274818:
    {
        returnValue = F("Sanddobbenweg");
        break;
    }
    case 274819:
    {
        returnValue = F("Sanddornhang");
        break;
    }
    case 274820:
    {
        returnValue = F("Sanddornhof");
        break;
    }
    case 274821:
    {
        returnValue = F("Sanddornring");
        break;
    }
    case 274822:
    {
        returnValue = F("Sanddornstaffel");
        break;
    }
    case 274823:
    {
        returnValue = F("Sanddornstieg");
        break;
    }
    case 274824:
    {
        returnValue = F("Sanddornstr.");
        break;
    }
    case 274825:
    {
        returnValue = F("Sanddornweg");
        break;
    }
    case 274826:
    {
        returnValue = F("Sanddornwinkel");
        break;
    }
    case 274827:
    {
        returnValue = F("Sanddyck");
        break;
    }
    case 274828:
    {
        returnValue = F("Sanddörp");
        break;
    }
    case 274829:
    {
        returnValue = F("Sanddüne");
        break;
    }
    case 274830:
    {
        returnValue = F("Sanddünens Höcht");
        break;
    }
    case 274831:
    {
        returnValue = F("Sanddünenweg");
        break;
    }
    case 274832:
    {
        returnValue = F("Sande");
        break;
    }
    case 274833:
    {
        returnValue = F("Sandebecker Str.");
        break;
    }
    case 274834:
    {
        returnValue = F("Sandebecker Weg");
        break;
    }
    case 274835:
    {
        returnValue = F("Sandebeneweg");
        break;
    }
    case 274836:
    {
        returnValue = F("Sandeckwaldweg");
        break;
    }
    case 274837:
    {
        returnValue = F("Sandeldamm");
        break;
    }
    case 274838:
    {
        returnValue = F("Sandeler Burgweg");
        break;
    }
    case 274839:
    {
        returnValue = F("Sandeler Kirchhofsweg");
        break;
    }
    case 274840:
    {
        returnValue = F("Sandeler Mühlenweg");
        break;
    }
    case 274841:
    {
        returnValue = F("Sandeler Pad");
        break;
    }
    case 274842:
    {
        returnValue = F("Sandelerburg");
        break;
    }
    case 274843:
    {
        returnValue = F("Sandelerhorsten");
        break;
    }
    case 274844:
    {
        returnValue = F("Sandelermöns");
        break;
    }
    case 274845:
    {
        returnValue = F("Sandelgasse");
        break;
    }
    case 274846:
    {
        returnValue = F("Sandelhaldenweg");
        break;
    }
    case 274847:
    {
        returnValue = F("Sandelkopfweg");
        break;
    }
    case 274848:
    {
        returnValue = F("Sandelmühle");
        break;
    }
    case 274849:
    {
        returnValue = F("Sandelrütteweg");
        break;
    }
    case 274850:
    {
        returnValue = F("Sandelsbronner Weg");
        break;
    }
    case 274851:
    {
        returnValue = F("Sandelweg");
        break;
    }
    case 274852:
    {
        returnValue = F("Sandelzhauser Gangsteig");
        break;
    }
    case 274853:
    {
        returnValue = F("Sanden");
        break;
    }
    case 274854:
    {
        returnValue = F("Sanden-Platz");
        break;
    }
    case 274855:
    {
        returnValue = F("Sandenden");
        break;
    }
    case 274856:
    {
        returnValue = F("Sandendredder");
        break;
    }
    case 274857:
    {
        returnValue = F("Sandenhof");
        break;
    }
    case 274858:
    {
        returnValue = F("Sandenweg");
        break;
    }
    case 274859:
    {
        returnValue = F("Sander Aue");
        break;
    }
    case 274860:
    {
        returnValue = F("Sander Boulevard");
        break;
    }
    case 274861:
    {
        returnValue = F("Sander Donauweg");
        break;
    }
    case 274862:
    {
        returnValue = F("Sander Heide");
        break;
    }
    case 274863:
    {
        returnValue = F("Sander Höhe");
        break;
    }
    case 274864:
    {
        returnValue = F("Sander Pfad");
        break;
    }
    case 274865:
    {
        returnValue = F("Sander Str.");
        break;
    }
    case 274866:
    {
        returnValue = F("Sander Weg");
        break;
    }
    case 274867:
    {
        returnValue = F("Sander-Bruch-Str.");
        break;
    }
    case 274868:
    {
        returnValue = F("Sander-Wietfeld-Ring");
        break;
    }
    case 274869:
    {
        returnValue = F("Sanderahmer Str.");
        break;
    }
    case 274870:
    {
        returnValue = F("Sanderau");
        break;
    }
    case 274871:
    {
        returnValue = F("Sanderaustr.");
        break;
    }
    case 274872:
    {
        returnValue = F("Sanderfeld");
        break;
    }
    case 274873:
    {
        returnValue = F("Sanderglacisstr.");
        break;
    }
    case 274874:
    {
        returnValue = F("Sanderhof");
        break;
    }
    case 274875:
    {
        returnValue = F("Sanderhöhe");
        break;
    }
    case 274876:
    {
        returnValue = F("Sandermannweg");
        break;
    }
    case 274877:
    {
        returnValue = F("Sanderoth");
        break;
    }
    case 274878:
    {
        returnValue = F("Sanderring");
        break;
    }
    case 274879:
    {
        returnValue = F("Sanderrothstr.");
        break;
    }
    case 274880:
    {
        returnValue = F("Sanders Anlagen");
        break;
    }
    case 274881:
    {
        returnValue = F("Sanders Hagen");
        break;
    }
    case 274882:
    {
        returnValue = F("Sanders Hof");
        break;
    }
    case 274883:
    {
        returnValue = F("Sanders Padd");
        break;
    }
    case 274884:
    {
        returnValue = F("Sanders-Thielen-Weg");
        break;
    }
    case 274885:
    {
        returnValue = F("Sandersbeek");
        break;
    }
    case 274886:
    {
        returnValue = F("Sandersberg");
        break;
    }
    case 274887:
    {
        returnValue = F("Sandersdorfer Str.");
        break;
    }
    case 274888:
    {
        returnValue = F("Sandersfeld");
        break;
    }
    case 274889:
    {
        returnValue = F("Sandersgarten");
        break;
    }
    case 274890:
    {
        returnValue = F("Sandersgrund");
        break;
    }
    case 274891:
    {
        returnValue = F("Sandersheide");
        break;
    }
    case 274892:
    {
        returnValue = F("Sandershof");
        break;
    }
    case 274893:
    {
        returnValue = F("Sandershäuser Str.");
        break;
    }
    case 274894:
    {
        returnValue = F("Sandershäuser Weg");
        break;
    }
    case 274895:
    {
        returnValue = F("Sanderskamp");
        break;
    }
    case 274896:
    {
        returnValue = F("Sanderslebener Str.");
        break;
    }
    case 274897:
    {
        returnValue = F("Sanderslebener Trift");
        break;
    }
    case 274898:
    {
        returnValue = F("Sandersmeerweg");
        break;
    }
    case 274899:
    {
        returnValue = F("Sanderstr.");
        break;
    }
    case 274900:
    {
        returnValue = F("Sandersweg");
        break;
    }
    case 274901:
    {
        returnValue = F("Sanderweg");
        break;
    }
    case 274902:
    {
        returnValue = F("Sandesch");
        break;
    }
    case 274903:
    {
        returnValue = F("Sandeskamp");
        break;
    }
    case 274904:
    {
        returnValue = F("Sandeskampstr.");
        break;
    }
    case 274905:
    {
        returnValue = F("Sandesnebener Weg");
        break;
    }
    case 274906:
    {
        returnValue = F("Sandfahrel");
        break;
    }
    case 274907:
    {
        returnValue = F("Sandfallen");
        break;
    }
    case 274908:
    {
        returnValue = F("Sandfalterstr.");
        break;
    }
    case 274909:
    {
        returnValue = F("Sandfang");
        break;
    }
    case 274910:
    {
        returnValue = F("Sandfangweg");
        break;
    }
    case 274911:
    {
        returnValue = F("Sandfeld");
        break;
    }
    case 274912:
    {
        returnValue = F("Sandfeld Ost");
        break;
    }
    case 274913:
    {
        returnValue = F("Sandfeld West");
        break;
    }
    case 274914:
    {
        returnValue = F("Sandfelde");
        break;
    }
    case 274915:
    {
        returnValue = F("Sandfelder Str.");
        break;
    }
    case 274916:
    {
        returnValue = F("Sandfeldredder");
        break;
    }
    case 274917:
    {
        returnValue = F("Sandfeldring");
        break;
    }
    case 274918:
    {
        returnValue = F("Sandfeldstr.");
        break;
    }
    case 274919:
    {
        returnValue = F("Sandfeldweg");
        break;
    }
    case 274920:
    {
        returnValue = F("Sandfenne");
        break;
    }
    case 274921:
    {
        returnValue = F("Sandfichten");
        break;
    }
    case 274922:
    {
        returnValue = F("Sandfleck");
        break;
    }
    case 274923:
    {
        returnValue = F("Sandfleth");
        break;
    }
    case 274924:
    {
        returnValue = F("Sandflurweg");
        break;
    }
    case 274925:
    {
        returnValue = F("Sandfohrt");
        break;
    }
    case 274926:
    {
        returnValue = F("Sandforlinger Ring");
        break;
    }
    case 274927:
    {
        returnValue = F("Sandfort");
        break;
    }
    case 274928:
    {
        returnValue = F("Sandforter Str.");
        break;
    }
    case 274929:
    {
        returnValue = F("Sandforter Weg");
        break;
    }
    case 274930:
    {
        returnValue = F("Sandforth");
        break;
    }
    case 274931:
    {
        returnValue = F("Sandforther Str.");
        break;
    }
    case 274932:
    {
        returnValue = F("Sandforths Weg");
        break;
    }
    case 274933:
    {
        returnValue = F("Sandfortskamp");
        break;
    }
    case 274934:
    {
        returnValue = F("Sandfrauenpark");
        break;
    }
    case 274935:
    {
        returnValue = F("Sandfuhr");
        break;
    }
    case 274936:
    {
        returnValue = F("Sandfuhren");
        break;
    }
    case 274937:
    {
        returnValue = F("Sandfuhrenweg");
        break;
    }
    case 274938:
    {
        returnValue = F("Sandfuhrstr.");
        break;
    }
    case 274939:
    {
        returnValue = F("Sandfuhrtsmoor");
        break;
    }
    case 274940:
    {
        returnValue = F("Sandfuhrweg");
        break;
    }
    case 274941:
    {
        returnValue = F("Sandfurt");
        break;
    }
    case 274942:
    {
        returnValue = F("Sandfurtbrücke");
        break;
    }
    case 274943:
    {
        returnValue = F("Sandfurter Str.");
        break;
    }
    case 274944:
    {
        returnValue = F("Sandfurter Weg");
        break;
    }
    case 274945:
    {
        returnValue = F("Sandfurth");
        break;
    }
    case 274946:
    {
        returnValue = F("Sandfurthstr.");
        break;
    }
    case 274947:
    {
        returnValue = F("Sandfurthweg");
        break;
    }
    case 274948:
    {
        returnValue = F("Sandfurtstr.");
        break;
    }
    case 274949:
    {
        returnValue = F("Sandfurtsweg");
        break;
    }
    case 274950:
    {
        returnValue = F("Sandfurttrift");
        break;
    }
    case 274951:
    {
        returnValue = F("Sandförder Dorfstr.");
        break;
    }
    case 274952:
    {
        returnValue = F("Sandförder Str.");
        break;
    }
    case 274953:
    {
        returnValue = F("Sandförth");
        break;
    }
    case 274954:
    {
        returnValue = F("Sandgalie");
        break;
    }
    case 274955:
    {
        returnValue = F("Sandgang");
        break;
    }
    case 274956:
    {
        returnValue = F("Sandgarten");
        break;
    }
    case 274957:
    {
        returnValue = F("Sandgartenfeld");
        break;
    }
    case 274958:
    {
        returnValue = F("Sandgartenstr.");
        break;
    }
    case 274959:
    {
        returnValue = F("Sandgasse");
        break;
    }
    case 274960:
    {
        returnValue = F("Sandgaßweg");
        break;
    }
    case 274961:
    {
        returnValue = F("Sandgewannstr.");
        break;
    }
    case 274962:
    {
        returnValue = F("Sandglöckchenweg");
        break;
    }
    case 274963:
    {
        returnValue = F("Sandgraben");
        break;
    }
    case 274964:
    {
        returnValue = F("Sandgrabener Str.");
        break;
    }
    case 274965:
    {
        returnValue = F("Sandgrabenstr.");
        break;
    }
    case 274966:
    {
        returnValue = F("Sandgrabenweg");
        break;
    }
    case 274967:
    {
        returnValue = F("Sandgracht");
        break;
    }
    case 274968:
    {
        returnValue = F("Sandgrasstr.");
        break;
    }
    case 274969:
    {
        returnValue = F("Sandgrub");
        break;
    }
    case 274970:
    {
        returnValue = F("Sandgrubbühlstr.");
        break;
    }
    case 274971:
    {
        returnValue = F("Sandgrube");
        break;
    }
    case 274972:
    {
        returnValue = F("Sandgruben");
        break;
    }
    case 274973:
    {
        returnValue = F("Sandgruben Weg");
        break;
    }
    case 274974:
    {
        returnValue = F("Sandgrubenfeld");
        break;
    }
    case 274975:
    {
        returnValue = F("Sandgrubenreute");
        break;
    }
    case 274976:
    {
        returnValue = F("Sandgrubenstr.");
        break;
    }
    case 274977:
    {
        returnValue = F("Sandgrubenweg");
        break;
    }
    case 274978:
    {
        returnValue = F("Sandgruber Weg");
        break;
    }
    case 274979:
    {
        returnValue = F("Sandgrubstr.");
        break;
    }
    case 274980:
    {
        returnValue = F("Sandgrubweg");
        break;
    }
    case 274981:
    {
        returnValue = F("Sandgrubäcker");
        break;
    }
    case 274982:
    {
        returnValue = F("Sandgrund");
        break;
    }
    case 274983:
    {
        returnValue = F("Sandgräberweg");
        break;
    }
    case 274984:
    {
        returnValue = F("Sandgrüble");
        break;
    }
    case 274985:
    {
        returnValue = F("Sandgrübleweg");
        break;
    }
    case 274986:
    {
        returnValue = F("Sandgärten");
        break;
    }
    case 274987:
    {
        returnValue = F("Sandgäßchen");
        break;
    }
    case 274988:
    {
        returnValue = F("Sandhaar");
        break;
    }
    case 274989:
    {
        returnValue = F("Sandhaasenhalde");
        break;
    }
    case 274990:
    {
        returnValue = F("Sandhaasstr.");
        break;
    }
    case 274991:
    {
        returnValue = F("Sandhafer");
        break;
    }
    case 274992:
    {
        returnValue = F("Sandhagen");
        break;
    }
    case 274993:
    {
        returnValue = F("Sandhagener Str.");
        break;
    }
    case 274994:
    {
        returnValue = F("Sandhagenweg");
        break;
    }
    case 274995:
    {
        returnValue = F("Sandhalde");
        break;
    }
    case 274996:
    {
        returnValue = F("Sandharlandener Str.");
        break;
    }
    case 274997:
    {
        returnValue = F("Sandharlandener Weg");
        break;
    }
    case 274998:
    {
        returnValue = F("Sandhase");
        break;
    }
    case 274999:
    {
        returnValue = F("Sandhasenweg");
        break;
    }
    case 275000:
    {
        returnValue = F("Sandhatter Str.");
        break;
    }
    case 275001:
    {
        returnValue = F("Sandhaufenweg");
        break;
    }
    case 275002:
    {
        returnValue = F("Sandhauk");
        break;
    }
    case 275003:
    {
        returnValue = F("Sandhaus");
        break;
    }
    case 275004:
    {
        returnValue = F("Sandhausener Ring");
        break;
    }
    case 275005:
    {
        returnValue = F("Sandhausener Str.");
        break;
    }
    case 275006:
    {
        returnValue = F("Sandhausener Weg");
        break;
    }
    case 275007:
    {
        returnValue = F("Sandhausweg");
        break;
    }
    case 275008:
    {
        returnValue = F("Sandhayn");
        break;
    }
    case 275009:
    {
        returnValue = F("Sandheck");
        break;
    }
    case 275010:
    {
        returnValue = F("Sandhecke");
        break;
    }
    case 275011:
    {
        returnValue = F("Sandheckenweg");
        break;
    }
    case 275012:
    {
        returnValue = F("Sandheide");
        break;
    }
    case 275013:
    {
        returnValue = F("Sandheider Str.");
        break;
    }
    case 275014:
    {
        returnValue = F("Sandheideweg");
        break;
    }
    case 275015:
    {
        returnValue = F("Sandheim");
        break;
    }
    case 275016:
    {
        returnValue = F("Sandheimer Str.");
        break;
    }
    case 275017:
    {
        returnValue = F("Sandhellerweg");
        break;
    }
    case 275018:
    {
        returnValue = F("Sandhellmer");
        break;
    }
    case 275019:
    {
        returnValue = F("Sandhof");
        break;
    }
    case 275020:
    {
        returnValue = F("Sandhof-Ring");
        break;
    }
    case 275021:
    {
        returnValue = F("Sandhofer Steinweg");
        break;
    }
    case 275022:
    {
        returnValue = F("Sandhofer Str.");
        break;
    }
    case 275023:
    {
        returnValue = F("Sandhofer Weg");
        break;
    }
    case 275024:
    {
        returnValue = F("Sandhofsiedlung");
        break;
    }
    case 275025:
    {
        returnValue = F("Sandhofstr.");
        break;
    }
    case 275026:
    {
        returnValue = F("Sandhofsweg");
        break;
    }
    case 275027:
    {
        returnValue = F("Sandhofweg");
        break;
    }
    case 275028:
    {
        returnValue = F("Sandhohl");
        break;
    }
    case 275029:
    {
        returnValue = F("Sandholm");
        break;
    }
    case 275030:
    {
        returnValue = F("Sandholzweg");
        break;
    }
    case 275031:
    {
        returnValue = F("Sandhook");
        break;
    }
    case 275032:
    {
        returnValue = F("Sandhorstdamm");
        break;
    }
    case 275033:
    {
        returnValue = F("Sandhorster Allee");
        break;
    }
    case 275034:
    {
        returnValue = F("Sandhorster Loog");
        break;
    }
    case 275035:
    {
        returnValue = F("Sandhorster Str.");
        break;
    }
    case 275036:
    {
        returnValue = F("Sandhorstweg");
        break;
    }
    case 275037:
    {
        returnValue = F("Sandhoster Str.");
        break;
    }
    case 275038:
    {
        returnValue = F("Sandhufe");
        break;
    }
    case 275039:
    {
        returnValue = F("Sandhut");
        break;
    }
    case 275040:
    {
        returnValue = F("Sandhägener Str.");
        break;
    }
    case 275041:
    {
        returnValue = F("Sandhäuleweg");
        break;
    }
    case 275042:
    {
        returnValue = F("Sandhäuser");
        break;
    }
    case 275043:
    {
        returnValue = F("Sandhäuser Pfädle");
        break;
    }
    case 275044:
    {
        returnValue = F("Sandhäuser Str.");
        break;
    }
    case 275045:
    {
        returnValue = F("Sandhäuser Weg");
        break;
    }
    case 275046:
    {
        returnValue = F("Sandhöcht");
        break;
    }
    case 275047:
    {
        returnValue = F("Sandhöchte");
        break;
    }
    case 275048:
    {
        returnValue = F("Sandhöfe");
        break;
    }
    case 275049:
    {
        returnValue = F("Sandhöfen");
        break;
    }
    case 275050:
    {
        returnValue = F("Sandhöfener Str.");
        break;
    }
    case 275051:
    {
        returnValue = F("Sandhöhe");
        break;
    }
    case 275052:
    {
        returnValue = F("Sandhöhenweg");
        break;
    }
    case 275053:
    {
        returnValue = F("Sandhöhle");
        break;
    }
    case 275054:
    {
        returnValue = F("Sandhörn");
        break;
    }
    case 275055:
    {
        returnValue = F("Sandhörnstr.");
        break;
    }
    case 275056:
    {
        returnValue = F("Sandhövelstr.");
        break;
    }
    case 275057:
    {
        returnValue = F("Sandhübel");
        break;
    }
    case 275058:
    {
        returnValue = F("Sandhübelstr.");
        break;
    }
    case 275059:
    {
        returnValue = F("Sandhübelweg");
        break;
    }
    case 275060:
    {
        returnValue = F("Sandhügel");
        break;
    }
    case 275061:
    {
        returnValue = F("Sandhügelplatz");
        break;
    }
    case 275062:
    {
        returnValue = F("Sandhügelring");
        break;
    }
    case 275063:
    {
        returnValue = F("Sandhügelschneise");
        break;
    }
    case 275064:
    {
        returnValue = F("Sandhügelstr.");
        break;
    }
    case 275065:
    {
        returnValue = F("Sandhügelweg");
        break;
    }
    case 275066:
    {
        returnValue = F("Sandhüttengasse");
        break;
    }
    case 275067:
    {
        returnValue = F("Sandhüttenweg");
        break;
    }
    case 275068:
    {
        returnValue = F("Sandiger Weg");
        break;
    }
    case 275069:
    {
        returnValue = F("Sandizeller Str.");
        break;
    }
    case 275070:
    {
        returnValue = F("Sandizellergasse");
        break;
    }
    case 275071:
    {
        returnValue = F("Sandjöhren");
        break;
    }
    case 275072:
    {
        returnValue = F("Sandkamp");
        break;
    }
    case 275073:
    {
        returnValue = F("Sandkampsdeich");
        break;
    }
    case 275074:
    {
        returnValue = F("Sandkampstr.");
        break;
    }
    case 275075:
    {
        returnValue = F("Sandkampweg");
        break;
    }
    case 275076:
    {
        returnValue = F("Sandkastenweg");
        break;
    }
    case 275077:
    {
        returnValue = F("Sandkaul");
        break;
    }
    case 275078:
    {
        returnValue = F("Sandkaul (neu)");
        break;
    }
    case 275079:
    {
        returnValue = F("Sandkaulbach");
        break;
    }
    case 275080:
    {
        returnValue = F("Sandkaulberg");
        break;
    }
    case 275081:
    {
        returnValue = F("Sandkaule");
        break;
    }
    case 275082:
    {
        returnValue = F("Sandkaulenweg");
        break;
    }
    case 275083:
    {
        returnValue = F("Sandkauler Weg");
        break;
    }
    case 275084:
    {
        returnValue = F("Sandkaulerweg");
        break;
    }
    case 275085:
    {
        returnValue = F("Sandkaulpark");
        break;
    }
    case 275086:
    {
        returnValue = F("Sandkaulstr.");
        break;
    }
    case 275087:
    {
        returnValue = F("Sandkaute");
        break;
    }
    case 275088:
    {
        returnValue = F("Sandkauten Schneise");
        break;
    }
    case 275089:
    {
        returnValue = F("Sandkautenweg");
        break;
    }
    case 275090:
    {
        returnValue = F("Sandkauter Weg");
        break;
    }
    case 275091:
    {
        returnValue = F("Sandkehre");
        break;
    }
    case 275092:
    {
        returnValue = F("Sandker Weg");
        break;
    }
    case 275093:
    {
        returnValue = F("Sandkiefernweg");
        break;
    }
    case 275094:
    {
        returnValue = F("Sandklinge");
        break;
    }
    case 275095:
    {
        returnValue = F("Sandklingenweg");
        break;
    }
    case 275096:
    {
        returnValue = F("Sandklippen");
        break;
    }
    case 275097:
    {
        returnValue = F("Sandknapp");
        break;
    }
    case 275098:
    {
        returnValue = F("Sandknäppen");
        break;
    }
    case 275099:
    {
        returnValue = F("Sandkopf");
        break;
    }
    case 275100:
    {
        returnValue = F("Sandkopfweg");
        break;
    }
    case 275101:
    {
        returnValue = F("Sandkoppel");
        break;
    }
    case 275102:
    {
        returnValue = F("Sandkoppeln");
        break;
    }
    case 275103:
    {
        returnValue = F("Sandkoppelring");
        break;
    }
    case 275104:
    {
        returnValue = F("Sandkoppelweg");
        break;
    }
    case 275105:
    {
        returnValue = F("Sandkornstr.");
        break;
    }
    case 275106:
    {
        returnValue = F("Sandkoul");
        break;
    }
    case 275107:
    {
        returnValue = F("Sandkreppe");
        break;
    }
    case 275108:
    {
        returnValue = F("Sandkroog");
        break;
    }
    case 275109:
    {
        returnValue = F("Sandkroogsredder");
        break;
    }
    case 275110:
    {
        returnValue = F("Sandkrug");
        break;
    }
    case 275111:
    {
        returnValue = F("Sandkruger Str.");
        break;
    }
    case 275112:
    {
        returnValue = F("Sandkruger Weg");
        break;
    }
    case 275113:
    {
        returnValue = F("Sandkrugsiedlung");
        break;
    }
    case 275114:
    {
        returnValue = F("Sandkrugskoppel");
        break;
    }
    case 275115:
    {
        returnValue = F("Sandkrugstr.");
        break;
    }
    case 275116:
    {
        returnValue = F("Sandkrugsweg");
        break;
    }
    case 275117:
    {
        returnValue = F("Sandkrugweg");
        break;
    }
    case 275118:
    {
        returnValue = F("Sandkuhl");
        break;
    }
    case 275119:
    {
        returnValue = F("Sandkuhle");
        break;
    }
    case 275120:
    {
        returnValue = F("Sandkuhlen");
        break;
    }
    case 275121:
    {
        returnValue = F("Sandkuhlen Weg");
        break;
    }
    case 275122:
    {
        returnValue = F("Sandkuhlenfeld");
        break;
    }
    case 275123:
    {
        returnValue = F("Sandkuhlenkoppel");
        break;
    }
    case 275124:
    {
        returnValue = F("Sandkuhlenweg");
        break;
    }
    case 275125:
    {
        returnValue = F("Sandkuhlstr.");
        break;
    }
    case 275126:
    {
        returnValue = F("Sandkuhlweg");
        break;
    }
    case 275127:
    {
        returnValue = F("Sandkull");
        break;
    }
    case 275128:
    {
        returnValue = F("Sandkuppe");
        break;
    }
    case 275129:
    {
        returnValue = F("Sandkämpchen");
        break;
    }
    case 275130:
    {
        returnValue = F("Sandkämper Str.");
        break;
    }
    case 275131:
    {
        returnValue = F("Sandkötters Hof");
        break;
    }
    case 275132:
    {
        returnValue = F("Sandlacher");
        break;
    }
    case 275133:
    {
        returnValue = F("Sandlachsträßle");
        break;
    }
    case 275134:
    {
        returnValue = F("Sandlage");
        break;
    }
    case 275135:
    {
        returnValue = F("Sandlandstr.");
        break;
    }
    case 275136:
    {
        returnValue = F("Sandlehen");
        break;
    }
    case 275137:
    {
        returnValue = F("Sandleiden");
        break;
    }
    case 275138:
    {
        returnValue = F("Sandleite");
        break;
    }
    case 275139:
    {
        returnValue = F("Sandleiten");
        break;
    }
    case 275140:
    {
        returnValue = F("Sandleitenweg");
        break;
    }
    case 275141:
    {
        returnValue = F("Sandleithe");
        break;
    }
    case 275142:
    {
        returnValue = F("Sandlerweg");
        break;
    }
    case 275143:
    {
        returnValue = F("Sandlesbergweg");
        break;
    }
    case 275144:
    {
        returnValue = F("Sandlid");
        break;
    }
    case 275145:
    {
        returnValue = F("Sandlinger Kirchweg");
        break;
    }
    case 275146:
    {
        returnValue = F("Sandlinger Str.");
        break;
    }
    case 275147:
    {
        returnValue = F("Sandloch");
        break;
    }
    case 275148:
    {
        returnValue = F("Sandlochweg");
        break;
    }
    case 275149:
    {
        returnValue = F("Sandlofser Str.");
        break;
    }
    case 275150:
    {
        returnValue = F("Sandloher Str.");
        break;
    }
    case 275151:
    {
        returnValue = F("Sandlöcher");
        break;
    }
    case 275152:
    {
        returnValue = F("Sandlöcherweg");
        break;
    }
    case 275153:
    {
        returnValue = F("Sandlöhken");
        break;
    }
    case 275154:
    {
        returnValue = F("Sandlünz");
        break;
    }
    case 275155:
    {
        returnValue = F("Sandmannstr.");
        break;
    }
    case 275156:
    {
        returnValue = F("Sandmannweg");
        break;
    }
    case 275157:
    {
        returnValue = F("Sandmeerweg");
        break;
    }
    case 275158:
    {
        returnValue = F("Sandmoorweg");
        break;
    }
    case 275159:
    {
        returnValue = F("Sandmorgen");
        break;
    }
    case 275160:
    {
        returnValue = F("Sandmorgenstr.");
        break;
    }
    case 275161:
    {
        returnValue = F("Sandmännchenweg");
        break;
    }
    case 275162:
    {
        returnValue = F("Sandmühle");
        break;
    }
    case 275163:
    {
        returnValue = F("Sandmühlenkamp");
        break;
    }
    case 275164:
    {
        returnValue = F("Sandmühlenweg");
        break;
    }
    case 275165:
    {
        returnValue = F("Sandmühlstr.");
        break;
    }
    case 275166:
    {
        returnValue = F("Sandmühlweg");
        break;
    }
    case 275167:
    {
        returnValue = F("Sandmüllerschneise");
        break;
    }
    case 275168:
    {
        returnValue = F("Sandmüllersweg");
        break;
    }
    case 275169:
    {
        returnValue = F("Sandmüllerweg");
        break;
    }
    case 275170:
    {
        returnValue = F("Sandmüllerwiese");
        break;
    }
    case 275171:
    {
        returnValue = F("Sandner Drift");
        break;
    }
    case 275172:
    {
        returnValue = F("Sandnerhofweg");
        break;
    }
    case 275173:
    {
        returnValue = F("Sandnerstr.");
        break;
    }
    case 275174:
    {
        returnValue = F("Sandnerweg");
        break;
    }
    case 275175:
    {
        returnValue = F("Sandoer Brücke");
        break;
    }
    case 275176:
    {
        returnValue = F("Sandoer Str.");
        break;
    }
    case 275177:
    {
        returnValue = F("Sandolfstr.");
        break;
    }
    case 275178:
    {
        returnValue = F("Sandorfstr.");
        break;
    }
    case 275179:
    {
        returnValue = F("Sandornweg");
        break;
    }
    case 275180:
    {
        returnValue = F("Sandortstr.");
        break;
    }
    case 275181:
    {
        returnValue = F("Sandower Hauptstr.");
        break;
    }
    case 275182:
    {
        returnValue = F("Sandower Str.");
        break;
    }
    case 275183:
    {
        returnValue = F("Sandpad");
        break;
    }
    case 275184:
    {
        returnValue = F("Sandpadd");
        break;
    }
    case 275185:
    {
        returnValue = F("Sandpesch");
        break;
    }
    case 275186:
    {
        returnValue = F("Sandpfad");
        break;
    }
    case 275187:
    {
        returnValue = F("Sandpfadweg");
        break;
    }
    case 275188:
    {
        returnValue = F("Sandpfänder");
        break;
    }
    case 275189:
    {
        returnValue = F("Sandpilzweg");
        break;
    }
    case 275190:
    {
        returnValue = F("Sandplacken");
        break;
    }
    case 275191:
    {
        returnValue = F("Sandplackenstr.");
        break;
    }
    case 275192:
    {
        returnValue = F("Sandplanweg");
        break;
    }
    case 275193:
    {
        returnValue = F("Sandplatte");
        break;
    }
    case 275194:
    {
        returnValue = F("Sandplatz");
        break;
    }
    case 275195:
    {
        returnValue = F("Sandpoh");
        break;
    }
    case 275196:
    {
        returnValue = F("Sandra-Minnert-Weg");
        break;
    }
    case 275197:
    {
        returnValue = F("Sandra-Paretti-Weg");
        break;
    }
    case 275198:
    {
        returnValue = F("Sandrachweg");
        break;
    }
    case 275199:
    {
        returnValue = F("Sandradstr.");
        break;
    }
    case 275200:
    {
        returnValue = F("Sandrain");
        break;
    }
    case 275201:
    {
        returnValue = F("Sandrainweg");
        break;
    }
    case 275202:
    {
        returnValue = F("Sandrangen");
        break;
    }
    case 275203:
    {
        returnValue = F("Sandrangenweg");
        break;
    }
    case 275204:
    {
        returnValue = F("Sandrankweg");
        break;
    }
    case 275205:
    {
        returnValue = F("Sandrartstr.");
        break;
    }
    case 275206:
    {
        returnValue = F("Sandrastr.");
        break;
    }
    case 275207:
    {
        returnValue = F("Sandraz");
        break;
    }
    case 275208:
    {
        returnValue = F("Sandregenpfeiferweg");
        break;
    }
    case 275209:
    {
        returnValue = F("Sandrehre");
        break;
    }
    case 275210:
    {
        returnValue = F("Sandreuteweg");
        break;
    }
    case 275211:
    {
        returnValue = F("Sandreuther Weg");
        break;
    }
    case 275212:
    {
        returnValue = F("Sandreuthstr.");
        break;
    }
    case 275213:
    {
        returnValue = F("Sandricht");
        break;
    }
    case 275214:
    {
        returnValue = F("Sandriege");
        break;
    }
    case 275215:
    {
        returnValue = F("Sandriegerring");
        break;
    }
    case 275216:
    {
        returnValue = F("Sandrinaweg");
        break;
    }
    case 275217:
    {
        returnValue = F("Sandring");
        break;
    }
    case 275218:
    {
        returnValue = F("Sandrisslen");
        break;
    }
    case 275219:
    {
        returnValue = F("Sandrockweg");
        break;
    }
    case 275220:
    {
        returnValue = F("Sandroggenstr.");
        break;
    }
    case 275221:
    {
        returnValue = F("Sandroggenweg");
        break;
    }
    case 275222:
    {
        returnValue = F("Sandroth");
        break;
    }
    case 275223:
    {
        returnValue = F("Sandrück Str.");
        break;
    }
    case 275224:
    {
        returnValue = F("Sandsbacher Str.");
        break;
    }
    case 275225:
    {
        returnValue = F("Sandschachtweg");
        break;
    }
    case 275226:
    {
        returnValue = F("Sandschale");
        break;
    }
    case 275227:
    {
        returnValue = F("Sandscharn");
        break;
    }
    case 275228:
    {
        returnValue = F("Sandscheider Str.");
        break;
    }
    case 275229:
    {
        returnValue = F("Sandschellenberg");
        break;
    }
    case 275230:
    {
        returnValue = F("Sandscherbenweg");
        break;
    }
    case 275231:
    {
        returnValue = F("Sandschlagsträßchen");
        break;
    }
    case 275232:
    {
        returnValue = F("Sandschleuse");
        break;
    }
    case 275233:
    {
        returnValue = F("Sandschluchtweg");
        break;
    }
    case 275234:
    {
        returnValue = F("Sandschneise");
        break;
    }
    case 275235:
    {
        returnValue = F("Sandscholle");
        break;
    }
    case 275236:
    {
        returnValue = F("Sandschollen-Schneise");
        break;
    }
    case 275237:
    {
        returnValue = F("Sandschollschneise");
        break;
    }
    case 275238:
    {
        returnValue = F("Sandschultrift");
        break;
    }
    case 275239:
    {
        returnValue = F("Sandschänkenbrücke");
        break;
    }
    case 275240:
    {
        returnValue = F("Sandseesteig");
        break;
    }
    case 275241:
    {
        returnValue = F("Sandseestr.");
        break;
    }
    case 275242:
    {
        returnValue = F("Sandser Str.");
        break;
    }
    case 275243:
    {
        returnValue = F("Sandskoppel");
        break;
    }
    case 275244:
    {
        returnValue = F("Sandsoot");
        break;
    }
    case 275245:
    {
        returnValue = F("Sandspitze");
        break;
    }
    case 275246:
    {
        returnValue = F("Sandstedter Str.");
        break;
    }
    case 275247:
    {
        returnValue = F("Sandstedter Weg");
        break;
    }
    case 275248:
    {
        returnValue = F("Sandsteen");
        break;
    }
    case 275249:
    {
        returnValue = F("Sandsteg");
        break;
    }
    case 275250:
    {
        returnValue = F("Sandstege");
        break;
    }
    case 275251:
    {
        returnValue = F("Sandstegge");
        break;
    }
    case 275252:
    {
        returnValue = F("Sandsteig");
        break;
    }
    case 275253:
    {
        returnValue = F("Sandsteige");
        break;
    }
    case 275254:
    {
        returnValue = F("Sandsteigle");
        break;
    }
    case 275255:
    {
        returnValue = F("Sandsteigleweg");
        break;
    }
    case 275256:
    {
        returnValue = F("Sandsteinpfad");
        break;
    }
    case 275257:
    {
        returnValue = F("Sandsteinstr.");
        break;
    }
    case 275258:
    {
        returnValue = F("Sandsteinweg");
        break;
    }
    case 275259:
    {
        returnValue = F("Sandstich");
        break;
    }
    case 275260:
    {
        returnValue = F("Sandstichweg");
        break;
    }
    case 275261:
    {
        returnValue = F("Sandstieg");
        break;
    }
    case 275262:
    {
        returnValue = F("Sandstiege");
        break;
    }
    case 275263:
    {
        returnValue = F("Sandstr.");
        break;
    }
    case 275264:
    {
        returnValue = F("Sandstr. Nord");
        break;
    }
    case 275265:
    {
        returnValue = F("Sandstrahlweg");
        break;
    }
    case 275266:
    {
        returnValue = F("Sandsträßle");
        break;
    }
    case 275267:
    {
        returnValue = F("Sandstücke");
        break;
    }
    case 275268:
    {
        returnValue = F("Sandstücken");
        break;
    }
    case 275269:
    {
        returnValue = F("Sandstückenweg");
        break;
    }
    case 275270:
    {
        returnValue = F("Sandstückerweg");
        break;
    }
    case 275271:
    {
        returnValue = F("Sandtal");
        break;
    }
    case 275272:
    {
        returnValue = F("Sandtalrundweg");
        break;
    }
    case 275273:
    {
        returnValue = F("Sandteichdamm");
        break;
    }
    case 275274:
    {
        returnValue = F("Sandteichweg");
        break;
    }
    case 275275:
    {
        returnValue = F("Sandtnerstr.");
        break;
    }
    case 275276:
    {
        returnValue = F("Sandtorfer Allee");
        break;
    }
    case 275277:
    {
        returnValue = F("Sandtorfer Weg");
        break;
    }
    case 275278:
    {
        returnValue = F("Sandtorstr.");
        break;
    }
    case 275279:
    {
        returnValue = F("Sandtrift");
        break;
    }
    case 275280:
    {
        returnValue = F("Sandträgerweg");
        break;
    }
    case 275281:
    {
        returnValue = F("Sandufer");
        break;
    }
    case 275282:
    {
        returnValue = F("Sandufergasse");
        break;
    }
    case 275283:
    {
        returnValue = F("Sandusweg");
        break;
    }
    case 275284:
    {
        returnValue = F("Sandvariger Weg");
        break;
    }
    case 275285:
    {
        returnValue = F("Sandveilchenweg");
        break;
    }
    case 275286:
    {
        returnValue = F("Sandwald");
        break;
    }
    case 275287:
    {
        returnValue = F("Sandwaldstr.");
        break;
    }
    case 275288:
    {
        returnValue = F("Sandwaldweg");
        break;
    }
    case 275289:
    {
        returnValue = F("Sandwall");
        break;
    }
    case 275290:
    {
        returnValue = F("Sandwanne");
        break;
    }
    case 275291:
    {
        returnValue = F("Sandwasenweg");
        break;
    }
    case 275292:
    {
        returnValue = F("Sandwaterweg");
        break;
    }
    case 275293:
    {
        returnValue = F("Sandwatt");
        break;
    }
    case 275294:
    {
        returnValue = F("Sandweg");
        break;
    }
    case 275295:
    {
        returnValue = F("Sandwegle");
        break;
    }
    case 275296:
    {
        returnValue = F("Sandwehe");
        break;
    }
    case 275297:
    {
        returnValue = F("Sandwehle");
        break;
    }
    case 275298:
    {
        returnValue = F("Sandwehr");
        break;
    }
    case 275299:
    {
        returnValue = F("Sandweierer Str.");
        break;
    }
    case 275300:
    {
        returnValue = F("Sandwelle");
        break;
    }
    case 275301:
    {
        returnValue = F("Sandwerkstr.");
        break;
    }
    case 275302:
    {
        returnValue = F("Sandwich");
        break;
    }
    case 275303:
    {
        returnValue = F("Sandwieke");
        break;
    }
    case 275304:
    {
        returnValue = F("Sandwiese");
        break;
    }
    case 275305:
    {
        returnValue = F("Sandwiesen");
        break;
    }
    case 275306:
    {
        returnValue = F("Sandwiesenstr.");
        break;
    }
    case 275307:
    {
        returnValue = F("Sandwiesenweg");
        break;
    }
    case 275308:
    {
        returnValue = F("Sandwingert");
        break;
    }
    case 275309:
    {
        returnValue = F("Sandwirtstr.");
        break;
    }
    case 275310:
    {
        returnValue = F("Sandwurth");
        break;
    }
    case 275311:
    {
        returnValue = F("Sandwäsche");
        break;
    }
    case 275312:
    {
        returnValue = F("Sandwühl");
        break;
    }
    case 275313:
    {
        returnValue = F("Sandwürfeweg");
        break;
    }
    case 275314:
    {
        returnValue = F("Sandwüstenweg");
        break;
    }
    case 275315:
    {
        returnValue = F("Sandäcker");
        break;
    }
    case 275316:
    {
        returnValue = F("Sandäckerstr.");
        break;
    }
    case 275317:
    {
        returnValue = F("Sandäckerweg");
        break;
    }
    case 275318:
    {
        returnValue = F("Sandöschstr.");
        break;
    }
    case 275319:
    {
        returnValue = F("Sanettastr.");
        break;
    }
    case 275320:
    {
        returnValue = F("Sang");
        break;
    }
    case 275321:
    {
        returnValue = F("Sangel");
        break;
    }
    case 275322:
    {
        returnValue = F("Sangenstedter Dorfstr.");
        break;
    }
    case 275323:
    {
        returnValue = F("Sangenweg");
        break;
    }
    case 275324:
    {
        returnValue = F("Sanger Dyk");
        break;
    }
    case 275325:
    {
        returnValue = F("Sanger Feld");
        break;
    }
    case 275326:
    {
        returnValue = F("Sanger Str.");
        break;
    }
    case 275327:
    {
        returnValue = F("Sanger Weg");
        break;
    }
    case 275328:
    {
        returnValue = F("Sangerhausener Str.");
        break;
    }
    case 275329:
    {
        returnValue = F("Sangerhauser Str.");
        break;
    }
    case 275330:
    {
        returnValue = F("Sangerhof");
        break;
    }
    case 275331:
    {
        returnValue = F("Sangerhäuser Platz");
        break;
    }
    case 275332:
    {
        returnValue = F("Sangerhäuser Str.");
        break;
    }
    case 275333:
    {
        returnValue = F("Sangerhäuser Weg");
        break;
    }
    case 275334:
    {
        returnValue = F("Sangerhäuserstr.");
        break;
    }
    case 275335:
    {
        returnValue = F("Sangerstr.");
        break;
    }
    case 275336:
    {
        returnValue = F("Sangerweg");
        break;
    }
    case 275337:
    {
        returnValue = F("Sangeweg");
        break;
    }
    case 275338:
    {
        returnValue = F("Sangfeldstr.");
        break;
    }
    case 275339:
    {
        returnValue = F("Sanghecke");
        break;
    }
    case 275340:
    {
        returnValue = F("Sanghughwai");
        break;
    }
    case 275341:
    {
        returnValue = F("Sanglaurenweg");
        break;
    }
    case 275342:
    {
        returnValue = F("Sangstr.");
        break;
    }
    case 275343:
    {
        returnValue = F("Sangweg");
        break;
    }
    case 275344:
    {
        returnValue = F("Sanimoor");
        break;
    }
    case 275345:
    {
        returnValue = F("Sanitas Kräutergarten");
        break;
    }
    case 275346:
    {
        returnValue = F("Sanitz Ausbau");
        break;
    }
    case 275347:
    {
        returnValue = F("Sanitzer Str.");
        break;
    }
    case 275348:
    {
        returnValue = F("Sanitätsrat-Becker-Str.");
        break;
    }
    case 275349:
    {
        returnValue = F("Sanitätsrat-Doktor-Herrmann-Str.");
        break;
    }
    case 275350:
    {
        returnValue = F("Sanitätsrat-Doktor-Jorns-Str.");
        break;
    }
    case 275351:
    {
        returnValue = F("Sanitätsrat-Dr.-Geiger-Str.");
        break;
    }
    case 275352:
    {
        returnValue = F("Sanitätsrat-Dr.-Jorns-Str.");
        break;
    }
    case 275353:
    {
        returnValue = F("Sanitätsrat-Dr.-Kaiser-Weg");
        break;
    }
    case 275354:
    {
        returnValue = F("Sanitätsrat-Führer-Gasse");
        break;
    }
    case 275355:
    {
        returnValue = F("Sanitätsrat-Hallermann-Str.");
        break;
    }
    case 275356:
    {
        returnValue = F("Sanitätsrat-Jeggle-Str.");
        break;
    }
    case 275357:
    {
        returnValue = F("Sanitätsrat-Seebohm-Str.");
        break;
    }
    case 275358:
    {
        returnValue = F("Sanitätsrat-Wortmann-Str.");
        break;
    }
    case 275359:
    {
        returnValue = F("Sanitätsweg");
        break;
    }
    case 275360:
    {
        returnValue = F("Sankelmarker Weg");
        break;
    }
    case 275361:
    {
        returnValue = F("Sankenbachkesselsträßchen");
        break;
    }
    case 275362:
    {
        returnValue = F("Sankenbachstr.");
        break;
    }
    case 275363:
    {
        returnValue = F("Sankenbühl");
        break;
    }
    case 275364:
    {
        returnValue = F("Sankertgraben");
        break;
    }
    case 275365:
    {
        returnValue = F("Sankhufenweg");
        break;
    }
    case 275366:
    {
        returnValue = F("Sankt -Michael-Str.");
        break;
    }
    case 275367:
    {
        returnValue = F("Sankt -Nikolaus-Ring");
        break;
    }
    case 275368:
    {
        returnValue = F("Sankt Alban");
        break;
    }
    case 275369:
    {
        returnValue = F("Sankt Andrae");
        break;
    }
    case 275370:
    {
        returnValue = F("Sankt Andreas Str.");
        break;
    }
    case 275371:
    {
        returnValue = F("Sankt Andreasstr.");
        break;
    }
    case 275372:
    {
        returnValue = F("Sankt Annen");
        break;
    }
    case 275373:
    {
        returnValue = F("Sankt Annenberg");
        break;
    }
    case 275374:
    {
        returnValue = F("Sankt Annenstr.");
        break;
    }
    case 275375:
    {
        returnValue = F("Sankt Annenweg");
        break;
    }
    case 275376:
    {
        returnValue = F("Sankt Antoni Esch");
        break;
    }
    case 275377:
    {
        returnValue = F("Sankt Antoniort");
        break;
    }
    case 275378:
    {
        returnValue = F("Sankt Antoniushof");
        break;
    }
    case 275379:
    {
        returnValue = F("Sankt Antoniusstr.");
        break;
    }
    case 275380:
    {
        returnValue = F("Sankt Augustiner Str.");
        break;
    }
    case 275381:
    {
        returnValue = F("Sankt Avolder Str.");
        break;
    }
    case 275382:
    {
        returnValue = F("Sankt Barbara Str.");
        break;
    }
    case 275383:
    {
        returnValue = F("Sankt Bernhardsberg");
        break;
    }
    case 275384:
    {
        returnValue = F("Sankt Blasier Str.");
        break;
    }
    case 275385:
    {
        returnValue = F("Sankt Colomann");
        break;
    }
    case 275386:
    {
        returnValue = F("Sankt Florianstr.");
        break;
    }
    case 275387:
    {
        returnValue = F("Sankt Floriansweg");
        break;
    }
    case 275388:
    {
        returnValue = F("Sankt Florianweg");
        break;
    }
    case 275389:
    {
        returnValue = F("Sankt Georg");
        break;
    }
    case 275390:
    {
        returnValue = F("Sankt Georg Str.");
        break;
    }
    case 275391:
    {
        returnValue = F("Sankt Georgener Str.");
        break;
    }
    case 275392:
    {
        returnValue = F("Sankt Georgiwold");
        break;
    }
    case 275393:
    {
        returnValue = F("Sankt Georgstr.");
        break;
    }
    case 275394:
    {
        returnValue = F("Sankt Gilgen");
        break;
    }
    case 275395:
    {
        returnValue = F("Sankt Gregor");
        break;
    }
    case 275396:
    {
        returnValue = F("Sankt Huberter Landstr.");
        break;
    }
    case 275397:
    {
        returnValue = F("Sankt Hubertus");
        break;
    }
    case 275398:
    {
        returnValue = F("Sankt Hülfer Dorfstr.");
        break;
    }
    case 275399:
    {
        returnValue = F("Sankt Ilgener Str.");
        break;
    }
    case 275400:
    {
        returnValue = F("Sankt Ingberter Str.");
        break;
    }
    case 275401:
    {
        returnValue = F("Sankt Irminen Str.");
        break;
    }
    case 275402:
    {
        returnValue = F("Sankt Jacob");
        break;
    }
    case 275403:
    {
        returnValue = F("Sankt Jacober Hauptstr.");
        break;
    }
    case 275404:
    {
        returnValue = F("Sankt Jacober Nebenstr.");
        break;
    }
    case 275405:
    {
        returnValue = F("Sankt Jakob Str.");
        break;
    }
    case 275406:
    {
        returnValue = F("Sankt Jakobi");
        break;
    }
    case 275407:
    {
        returnValue = F("Sankt Jakobsgäßli");
        break;
    }
    case 275408:
    {
        returnValue = F("Sankt Joachimsthaler Str.");
        break;
    }
    case 275409:
    {
        returnValue = F("Sankt Johann");
        break;
    }
    case 275410:
    {
        returnValue = F("Sankt Johanner Str.");
        break;
    }
    case 275411:
    {
        returnValue = F("Sankt Johannesstr.");
        break;
    }
    case 275412:
    {
        returnValue = F("Sankt Johannisrain");
        break;
    }
    case 275413:
    {
        returnValue = F("Sankt Josefstr.");
        break;
    }
    case 275414:
    {
        returnValue = F("Sankt Jost");
        break;
    }
    case 275415:
    {
        returnValue = F("Sankt Joster Str.");
        break;
    }
    case 275416:
    {
        returnValue = F("Sankt Joster Weg");
        break;
    }
    case 275417:
    {
        returnValue = F("Sankt Jürgen");
        break;
    }
    case 275418:
    {
        returnValue = F("Sankt Jürgen-Gang");
        break;
    }
    case 275419:
    {
        returnValue = F("Sankt Katharinenstr.");
        break;
    }
    case 275420:
    {
        returnValue = F("Sankt Leonhard");
        break;
    }
    case 275421:
    {
        returnValue = F("Sankt Leonhardstr.");
        break;
    }
    case 275422:
    {
        returnValue = F("Sankt Lies");
        break;
    }
    case 275423:
    {
        returnValue = F("Sankt Lorenz Str.");
        break;
    }
    case 275424:
    {
        returnValue = F("Sankt Ludwig");
        break;
    }
    case 275425:
    {
        returnValue = F("Sankt Magnuser Brink");
        break;
    }
    case 275426:
    {
        returnValue = F("Sankt Margareten-Weg");
        break;
    }
    case 275427:
    {
        returnValue = F("Sankt Margarethen");
        break;
    }
    case 275428:
    {
        returnValue = F("Sankt Martin");
        break;
    }
    case 275429:
    {
        returnValue = F("Sankt Martin in Hädern");
        break;
    }
    case 275430:
    {
        returnValue = F("Sankt Martinbogen");
        break;
    }
    case 275431:
    {
        returnValue = F("Sankt Martinsplatz");
        break;
    }
    case 275432:
    {
        returnValue = F("Sankt Martinstr.");
        break;
    }
    case 275433:
    {
        returnValue = F("Sankt Martinsweg");
        break;
    }
    case 275434:
    {
        returnValue = F("Sankt Maximilian Platz");
        break;
    }
    case 275435:
    {
        returnValue = F("Sankt Michael");
        break;
    }
    case 275436:
    {
        returnValue = F("Sankt Michaelisdonner Str.");
        break;
    }
    case 275437:
    {
        returnValue = F("Sankt Michaelstr.");
        break;
    }
    case 275438:
    {
        returnValue = F("Sankt Michaelsweg");
        break;
    }
    case 275439:
    {
        returnValue = F("Sankt Michelner Hauptstr.");
        break;
    }
    case 275440:
    {
        returnValue = F("Sankt Michelner Nebenstr.");
        break;
    }
    case 275441:
    {
        returnValue = F("Sankt Michelsweg");
        break;
    }
    case 275442:
    {
        returnValue = F("Sankt Nepomukstr.");
        break;
    }
    case 275443:
    {
        returnValue = F("Sankt Nicolausstr.");
        break;
    }
    case 275444:
    {
        returnValue = F("Sankt Nikolai");
        break;
    }
    case 275445:
    {
        returnValue = F("Sankt Nikolauser Str.");
        break;
    }
    case 275446:
    {
        returnValue = F("Sankt Pauli");
        break;
    }
    case 275447:
    {
        returnValue = F("Sankt Peter");
        break;
    }
    case 275448:
    {
        returnValue = F("Sankt Peter Str.");
        break;
    }
    case 275449:
    {
        returnValue = F("Sankt Peterstr.");
        break;
    }
    case 275450:
    {
        returnValue = F("Sankt Petri");
        break;
    }
    case 275451:
    {
        returnValue = F("Sankt Piuskirchplatz");
        break;
    }
    case 275452:
    {
        returnValue = F("Sankt Quirin Str.");
        break;
    }
    case 275453:
    {
        returnValue = F("Sankt Ritter");
        break;
    }
    case 275454:
    {
        returnValue = F("Sankt Sebastian");
        break;
    }
    case 275455:
    {
        returnValue = F("Sankt Sebastian-Str.");
        break;
    }
    case 275456:
    {
        returnValue = F("Sankt Thomaser Str.");
        break;
    }
    case 275457:
    {
        returnValue = F("Sankt Töniser Str.");
        break;
    }
    case 275458:
    {
        returnValue = F("Sankt Ulrichsberg");
        break;
    }
    case 275459:
    {
        returnValue = F("Sankt Ulrichsweg");
        break;
    }
    case 275460:
    {
        returnValue = F("Sankt Valentin");
        break;
    }
    case 275461:
    {
        returnValue = F("Sankt Veit");
        break;
    }
    case 275462:
    {
        returnValue = F("Sankt Verenaplatz");
        break;
    }
    case 275463:
    {
        returnValue = F("Sankt Vitus Str.");
        break;
    }
    case 275464:
    {
        returnValue = F("Sankt Wendelgasse");
        break;
    }
    case 275465:
    {
        returnValue = F("Sankt Wolfgang");
        break;
    }
    case 275466:
    {
        returnValue = F("Sankt- Pantaleon- Str.");
        break;
    }
    case 275467:
    {
        returnValue = F("Sankt-Adelheid-Str.");
        break;
    }
    case 275468:
    {
        returnValue = F("Sankt-Aegidien-Str.");
        break;
    }
    case 275469:
    {
        returnValue = F("Sankt-Aegidius-Str.");
        break;
    }
    case 275470:
    {
        returnValue = F("Sankt-Afra-Str.");
        break;
    }
    case 275471:
    {
        returnValue = F("Sankt-Afra-Weg");
        break;
    }
    case 275472:
    {
        returnValue = F("Sankt-Agatha-Str.");
        break;
    }
    case 275473:
    {
        returnValue = F("Sankt-Agidius-Platz");
        break;
    }
    case 275474:
    {
        returnValue = F("Sankt-Agnes-Gasse");
        break;
    }
    case 275475:
    {
        returnValue = F("Sankt-Agnes-Str.");
        break;
    }
    case 275476:
    {
        returnValue = F("Sankt-Alban-Gassen");
        break;
    }
    case 275477:
    {
        returnValue = F("Sankt-Alban-Ring");
        break;
    }
    case 275478:
    {
        returnValue = F("Sankt-Alban-Str.");
        break;
    }
    case 275479:
    {
        returnValue = F("Sankt-Alban-Weg");
        break;
    }
    case 275480:
    {
        returnValue = F("Sankt-Albans-Gasse");
        break;
    }
    case 275481:
    {
        returnValue = F("Sankt-Albans-Weg");
        break;
    }
    case 275482:
    {
        returnValue = F("Sankt-Albanus-Str.");
        break;
    }
    case 275483:
    {
        returnValue = F("Sankt-Albertus-Magnus-Str.");
        break;
    }
    case 275484:
    {
        returnValue = F("Sankt-Albertus-Weg");
        break;
    }
    case 275485:
    {
        returnValue = F("Sankt-Alto-Str.");
        break;
    }
    case 275486:
    {
        returnValue = F("Sankt-Altohof");
        break;
    }
    case 275487:
    {
        returnValue = F("Sankt-Andreas-Str.");
        break;
    }
    case 275488:
    {
        returnValue = F("Sankt-Andreas-Weg");
        break;
    }
    case 275489:
    {
        returnValue = F("Sankt-Andrä-Str.");
        break;
    }
    case 275490:
    {
        returnValue = F("Sankt-Anna-Gasse");
        break;
    }
    case 275491:
    {
        returnValue = F("Sankt-Anna-Gärten");
        break;
    }
    case 275492:
    {
        returnValue = F("Sankt-Anna-Hof");
        break;
    }
    case 275493:
    {
        returnValue = F("Sankt-Anna-Platz");
        break;
    }
    case 275494:
    {
        returnValue = F("Sankt-Anna-Str.");
        break;
    }
    case 275495:
    {
        returnValue = F("Sankt-Anna-Weg");
        break;
    }
    case 275496:
    {
        returnValue = F("Sankt-Annaberg-Str.");
        break;
    }
    case 275497:
    {
        returnValue = F("Sankt-Annaberg-Weg");
        break;
    }
    case 275498:
    {
        returnValue = F("Sankt-Annen-Promenade");
        break;
    }
    case 275499:
    {
        returnValue = F("Sankt-Annen-Str.");
        break;
    }
    case 275500:
    {
        returnValue = F("Sankt-Annen-Weg");
        break;
    }
    case 275501:
    {
        returnValue = F("Sankt-Anno-Str.");
        break;
    }
    case 275502:
    {
        returnValue = F("Sankt-Anton-Str.");
        break;
    }
    case 275503:
    {
        returnValue = F("Sankt-Anton-Weg");
        break;
    }
    case 275504:
    {
        returnValue = F("Sankt-Antoni-Steig");
        break;
    }
    case 275505:
    {
        returnValue = F("Sankt-Antonius-Siedlung");
        break;
    }
    case 275506:
    {
        returnValue = F("Sankt-Antonius-Str.");
        break;
    }
    case 275507:
    {
        returnValue = F("Sankt-Antonius-Weg");
        break;
    }
    case 275508:
    {
        returnValue = F("Sankt-Apollinaris-Weg");
        break;
    }
    case 275509:
    {
        returnValue = F("Sankt-Apollonia-Weg");
        break;
    }
    case 275510:
    {
        returnValue = F("Sankt-Arno-Weg");
        break;
    }
    case 275511:
    {
        returnValue = F("Sankt-Augustinus-Str.");
        break;
    }
    case 275512:
    {
        returnValue = F("Sankt-Augustinus-Weg");
        break;
    }
    case 275513:
    {
        returnValue = F("Sankt-Barabara-Str.");
        break;
    }
    case 275514:
    {
        returnValue = F("Sankt-Barbara-Platz");
        break;
    }
    case 275515:
    {
        returnValue = F("Sankt-Barbara-Str.");
        break;
    }
    case 275516:
    {
        returnValue = F("Sankt-Barbara-Weg");
        break;
    }
    case 275517:
    {
        returnValue = F("Sankt-Bartholomäus-Gasse");
        break;
    }
    case 275518:
    {
        returnValue = F("Sankt-Bartholomäus-Weg");
        break;
    }
    case 275519:
    {
        returnValue = F("Sankt-Benedikt-Str.");
        break;
    }
    case 275520:
    {
        returnValue = F("Sankt-Benno-Weg");
        break;
    }
    case 275521:
    {
        returnValue = F("Sankt-Bernhard-Platz");
        break;
    }
    case 275522:
    {
        returnValue = F("Sankt-Bernhard-Str.");
        break;
    }
    case 275523:
    {
        returnValue = F("Sankt-Bernhard-Weg");
        break;
    }
    case 275524:
    {
        returnValue = F("Sankt-Bernhardt-Allee");
        break;
    }
    case 275525:
    {
        returnValue = F("Sankt-Bernhardus-Str.");
        break;
    }
    case 275526:
    {
        returnValue = F("Sankt-Bernward-Str.");
        break;
    }
    case 275527:
    {
        returnValue = F("Sankt-Birgittenhof");
        break;
    }
    case 275528:
    {
        returnValue = F("Sankt-Blasien-Str.");
        break;
    }
    case 275529:
    {
        returnValue = F("Sankt-Blasier-Str.");
        break;
    }
    case 275530:
    {
        returnValue = F("Sankt-Blasius-Str.");
        break;
    }
    case 275531:
    {
        returnValue = F("Sankt-Blasius-Weg");
        break;
    }
    case 275532:
    {
        returnValue = F("Sankt-Bonifatius-Str.");
        break;
    }
    case 275533:
    {
        returnValue = F("Sankt-Bris-Brückenstr.");
        break;
    }
    case 275534:
    {
        returnValue = F("Sankt-Bruno-Siedlung");
        break;
    }
    case 275535:
    {
        returnValue = F("Sankt-Bruno-Str.");
        break;
    }
    case 275536:
    {
        returnValue = F("Sankt-Burkard-Str.");
        break;
    }
    case 275537:
    {
        returnValue = F("Sankt-Bäumel-Str.");
        break;
    }
    case 275538:
    {
        returnValue = F("Sankt-Catharina-Str.");
        break;
    }
    case 275539:
    {
        returnValue = F("Sankt-Christophorus-Str.");
        break;
    }
    case 275540:
    {
        returnValue = F("Sankt-Clemens-Str.");
        break;
    }
    case 275541:
    {
        returnValue = F("Sankt-Cäcilia-Str.");
        break;
    }
    case 275542:
    {
        returnValue = F("Sankt-Desir-Str.");
        break;
    }
    case 275543:
    {
        returnValue = F("Sankt-Diethard-Str.");
        break;
    }
    case 275544:
    {
        returnValue = F("Sankt-Dietrich-Str.");
        break;
    }
    case 275545:
    {
        returnValue = F("Sankt-Dionys-Str.");
        break;
    }
    case 275546:
    {
        returnValue = F("Sankt-Dionysius-Str.");
        break;
    }
    case 275547:
    {
        returnValue = F("Sankt-Dionysstr.");
        break;
    }
    case 275548:
    {
        returnValue = F("Sankt-Eligius-Weg");
        break;
    }
    case 275549:
    {
        returnValue = F("Sankt-Elisabeth-Str.");
        break;
    }
    case 275550:
    {
        returnValue = F("Sankt-Emanuel-Weg");
        break;
    }
    case 275551:
    {
        returnValue = F("Sankt-Emmeram-Str.");
        break;
    }
    case 275552:
    {
        returnValue = F("Sankt-Emmeram-Weg");
        break;
    }
    case 275553:
    {
        returnValue = F("Sankt-Emmeran-Str.");
        break;
    }
    case 275554:
    {
        returnValue = F("Sankt-Engelbert-Str.");
        break;
    }
    case 275555:
    {
        returnValue = F("Sankt-Erasmus-Str.");
        break;
    }
    case 275556:
    {
        returnValue = F("Sankt-Erentrudis-Str.");
        break;
    }
    case 275557:
    {
        returnValue = F("Sankt-Erhard-Str.");
        break;
    }
    case 275558:
    {
        returnValue = F("Sankt-Erhards-Weg");
        break;
    }
    case 275559:
    {
        returnValue = F("Sankt-Felicitas-Str.");
        break;
    }
    case 275560:
    {
        returnValue = F("Sankt-Felizitas-Str.");
        break;
    }
    case 275561:
    {
        returnValue = F("Sankt-Florian-Platz");
        break;
    }
    case 275562:
    {
        returnValue = F("Sankt-Florian-Str.");
        break;
    }
    case 275563:
    {
        returnValue = F("Sankt-Florian-Weg");
        break;
    }
    case 275564:
    {
        returnValue = F("Sankt-Florians-Weg");
        break;
    }
    case 275565:
    {
        returnValue = F("Sankt-Franziskus-Str.");
        break;
    }
    case 275566:
    {
        returnValue = F("Sankt-Franziskus-Weg");
        break;
    }
    case 275567:
    {
        returnValue = F("Sankt-Fridolin-Str.");
        break;
    }
    case 275568:
    {
        returnValue = F("Sankt-Friedrichs-Weg");
        break;
    }
    case 275569:
    {
        returnValue = F("Sankt-Gabinus-Weg");
        break;
    }
    case 275570:
    {
        returnValue = F("Sankt-Gallen-Ring");
        break;
    }
    case 275571:
    {
        returnValue = F("Sankt-Gallen-Str.");
        break;
    }
    case 275572:
    {
        returnValue = F("Sankt-Gallener-Str.");
        break;
    }
    case 275573:
    {
        returnValue = F("Sankt-Galler-Str.");
        break;
    }
    case 275574:
    {
        returnValue = F("Sankt-Gallus-Str.");
        break;
    }
    case 275575:
    {
        returnValue = F("Sankt-Gallus-Weg");
        break;
    }
    case 275576:
    {
        returnValue = F("Sankt-Gangolf-Str.");
        break;
    }
    case 275577:
    {
        returnValue = F("Sankt-Gangolfs-Weg");
        break;
    }
    case 275578:
    {
        returnValue = F("Sankt-Gangwolf-Str.");
        break;
    }
    case 275579:
    {
        returnValue = F("Sankt-Gebhard-Platz");
        break;
    }
    case 275580:
    {
        returnValue = F("Sankt-Gebhard-Str.");
        break;
    }
    case 275581:
    {
        returnValue = F("Sankt-Georg-Garten");
        break;
    }
    case 275582:
    {
        returnValue = F("Sankt-Georg-Platz");
        break;
    }
    case 275583:
    {
        returnValue = F("Sankt-Georg-Ring");
        break;
    }
    case 275584:
    {
        returnValue = F("Sankt-Georg-Str.");
        break;
    }
    case 275585:
    {
        returnValue = F("Sankt-Georg-Weg");
        break;
    }
    case 275586:
    {
        returnValue = F("Sankt-George-Str.");
        break;
    }
    case 275587:
    {
        returnValue = F("Sankt-Georgen-Platz");
        break;
    }
    case 275588:
    {
        returnValue = F("Sankt-Georgen-Str.");
        break;
    }
    case 275589:
    {
        returnValue = F("Sankt-Georgener Str.");
        break;
    }
    case 275590:
    {
        returnValue = F("Sankt-Georgener-Weg");
        break;
    }
    case 275591:
    {
        returnValue = F("Sankt-Georgs-Platz");
        break;
    }
    case 275592:
    {
        returnValue = F("Sankt-Georgs-Weg");
        break;
    }
    case 275593:
    {
        returnValue = F("Sankt-Georgsweg");
        break;
    }
    case 275594:
    {
        returnValue = F("Sankt-Gereon-Str.");
        break;
    }
    case 275595:
    {
        returnValue = F("Sankt-Gerhard-Str.");
        break;
    }
    case 275596:
    {
        returnValue = F("Sankt-Getreu-Str.");
        break;
    }
    case 275597:
    {
        returnValue = F("Sankt-Godehard-Str.");
        break;
    }
    case 275598:
    {
        returnValue = F("Sankt-Godehard-Weg");
        break;
    }
    case 275599:
    {
        returnValue = F("Sankt-Gotthard-Str.");
        break;
    }
    case 275600:
    {
        returnValue = F("Sankt-Gotthardt-Str.");
        break;
    }
    case 275601:
    {
        returnValue = F("Sankt-Gregor-Weg");
        break;
    }
    case 275602:
    {
        returnValue = F("Sankt-Gumbert-Str.");
        break;
    }
    case 275603:
    {
        returnValue = F("Sankt-Gundekar-Str.");
        break;
    }
    case 275604:
    {
        returnValue = F("Sankt-Gunther-Str.");
        break;
    }
    case 275605:
    {
        returnValue = F("Sankt-Gunther-Weg");
        break;
    }
    case 275606:
    {
        returnValue = F("Sankt-Göres-Str.");
        break;
    }
    case 275607:
    {
        returnValue = F("Sankt-Hedwig-Str.");
        break;
    }
    case 275608:
    {
        returnValue = F("Sankt-Hedwigs-Weg");
        break;
    }
    case 275609:
    {
        returnValue = F("Sankt-Heinricher-Str.");
        break;
    }
    case 275610:
    {
        returnValue = F("Sankt-Helena-Weg");
        break;
    }
    case 275611:
    {
        returnValue = F("Sankt-Helenen-Str.");
        break;
    }
    case 275612:
    {
        returnValue = F("Sankt-Helens-Steg");
        break;
    }
    case 275613:
    {
        returnValue = F("Sankt-Helens-Weg");
        break;
    }
    case 275614:
    {
        returnValue = F("Sankt-Hermann-Weg");
        break;
    }
    case 275615:
    {
        returnValue = F("Sankt-Hilarius-Weg");
        break;
    }
    case 275616:
    {
        returnValue = F("Sankt-Hubertus-Ring");
        break;
    }
    case 275617:
    {
        returnValue = F("Sankt-Hubertus-Str.");
        break;
    }
    case 275618:
    {
        returnValue = F("Sankt-Hubertus-Weg");
        break;
    }
    case 275619:
    {
        returnValue = F("Sankt-Härmann-Platz");
        break;
    }
    case 275620:
    {
        returnValue = F("Sankt-Hülfer-Str.");
        break;
    }
    case 275621:
    {
        returnValue = F("Sankt-Ingbert-Str.");
        break;
    }
    case 275622:
    {
        returnValue = F("Sankt-Ingbert-Weg");
        break;
    }
    case 275623:
    {
        returnValue = F("Sankt-Ingberter-Str.");
        break;
    }
    case 275624:
    {
        returnValue = F("Sankt-Jacobi-Str.");
        break;
    }
    case 275625:
    {
        returnValue = F("Sankt-Jakob-Str.");
        break;
    }
    case 275626:
    {
        returnValue = F("Sankt-Jakobs-Gasse");
        break;
    }
    case 275627:
    {
        returnValue = F("Sankt-Jakobus-Str.");
        break;
    }
    case 275628:
    {
        returnValue = F("Sankt-Jakobus-Weg");
        break;
    }
    case 275629:
    {
        returnValue = F("Sankt-Jobser-Str.");
        break;
    }
    case 275630:
    {
        returnValue = F("Sankt-Jodok-Str.");
        break;
    }
    case 275631:
    {
        returnValue = F("Sankt-Jodok-Weg");
        break;
    }
    case 275632:
    {
        returnValue = F("Sankt-Johann-Gasse");
        break;
    }
    case 275633:
    {
        returnValue = F("Sankt-Johann-Str.");
        break;
    }
    case 275634:
    {
        returnValue = F("Sankt-Johanner-Str.");
        break;
    }
    case 275635:
    {
        returnValue = F("Sankt-Johannes-Baptist-Str.");
        break;
    }
    case 275636:
    {
        returnValue = F("Sankt-Johannes-Ring");
        break;
    }
    case 275637:
    {
        returnValue = F("Sankt-Johannes-Stift");
        break;
    }
    case 275638:
    {
        returnValue = F("Sankt-Johannes-Str.");
        break;
    }
    case 275639:
    {
        returnValue = F("Sankt-Johannes-Weg");
        break;
    }
    case 275640:
    {
        returnValue = F("Sankt-Johannis-Mühle");
        break;
    }
    case 275641:
    {
        returnValue = F("Sankt-Johannis-Mühlgasse");
        break;
    }
    case 275642:
    {
        returnValue = F("Sankt-Johannis-Str.");
        break;
    }
    case 275643:
    {
        returnValue = F("Sankt-Johannis-Weg");
        break;
    }
    case 275644:
    {
        returnValue = F("Sankt-Joos-Str.");
        break;
    }
    case 275645:
    {
        returnValue = F("Sankt-Josef-Siedlung");
        break;
    }
    case 275646:
    {
        returnValue = F("Sankt-Josef-Spital-Str.");
        break;
    }
    case 275647:
    {
        returnValue = F("Sankt-Josef-Str.");
        break;
    }
    case 275648:
    {
        returnValue = F("Sankt-Josef-Weg");
        break;
    }
    case 275649:
    {
        returnValue = F("Sankt-Josefs-Kirchplatz");
        break;
    }
    case 275650:
    {
        returnValue = F("Sankt-Josefs-Platz");
        break;
    }
    case 275651:
    {
        returnValue = F("Sankt-Josefs-Weg");
        break;
    }
    case 275652:
    {
        returnValue = F("Sankt-Joseph-Siedlung");
        break;
    }
    case 275653:
    {
        returnValue = F("Sankt-Joseph-Str.");
        break;
    }
    case 275654:
    {
        returnValue = F("Sankt-Joseph-Weg");
        break;
    }
    case 275655:
    {
        returnValue = F("Sankt-Jörgen-Platz");
        break;
    }
    case 275656:
    {
        returnValue = F("Sankt-Jöris-Str.");
        break;
    }
    case 275657:
    {
        returnValue = F("Sankt-Jürgen-Platz");
        break;
    }
    case 275658:
    {
        returnValue = F("Sankt-Jürgen-Ring");
        break;
    }
    case 275659:
    {
        returnValue = F("Sankt-Jürgen-Str.");
        break;
    }
    case 275660:
    {
        returnValue = F("Sankt-Jürgen-Winkel");
        break;
    }
    case 275661:
    {
        returnValue = F("Sankt-Jürgener-Str.");
        break;
    }
    case 275662:
    {
        returnValue = F("Sankt-Jürgens-Weg");
        break;
    }
    case 275663:
    {
        returnValue = F("Sankt-Kastulus-Weg");
        break;
    }
    case 275664:
    {
        returnValue = F("Sankt-Katharinen-Platz");
        break;
    }
    case 275665:
    {
        returnValue = F("Sankt-Katharinen-Weg");
        break;
    }
    case 275666:
    {
        returnValue = F("Sankt-Kilian-Str.");
        break;
    }
    case 275667:
    {
        returnValue = F("Sankt-Kilians-Platz");
        break;
    }
    case 275668:
    {
        returnValue = F("Sankt-Klara-Str.");
        break;
    }
    case 275669:
    {
        returnValue = F("Sankt-Koloman-Str.");
        break;
    }
    case 275670:
    {
        returnValue = F("Sankt-Koloman-Weg");
        break;
    }
    case 275671:
    {
        returnValue = F("Sankt-Kolomann-Str.");
        break;
    }
    case 275672:
    {
        returnValue = F("Sankt-Konrad-Platz");
        break;
    }
    case 275673:
    {
        returnValue = F("Sankt-Konrad-Str.");
        break;
    }
    case 275674:
    {
        returnValue = F("Sankt-Konrad-Weg");
        break;
    }
    case 275675:
    {
        returnValue = F("Sankt-Korbinian-Str.");
        break;
    }
    case 275676:
    {
        returnValue = F("Sankt-Korbinian-Weg");
        break;
    }
    case 275677:
    {
        returnValue = F("Sankt-Korona-Str.");
        break;
    }
    case 275678:
    {
        returnValue = F("Sankt-Lambert-Str.");
        break;
    }
    case 275679:
    {
        returnValue = F("Sankt-Lamberti-Str.");
        break;
    }
    case 275680:
    {
        returnValue = F("Sankt-Lantpert-Str.");
        break;
    }
    case 275681:
    {
        returnValue = F("Sankt-Laurentius-Str.");
        break;
    }
    case 275682:
    {
        returnValue = F("Sankt-Laurenzius-Str.");
        break;
    }
    case 275683:
    {
        returnValue = F("Sankt-Leo-Str.");
        break;
    }
    case 275684:
    {
        returnValue = F("Sankt-Leoner-Str.");
        break;
    }
    case 275685:
    {
        returnValue = F("Sankt-Leonhard-Str.");
        break;
    }
    case 275686:
    {
        returnValue = F("Sankt-Leonhard-Weg");
        break;
    }
    case 275687:
    {
        returnValue = F("Sankt-Leonhards-Gasse");
        break;
    }
    case 275688:
    {
        returnValue = F("Sankt-Leonhards-Weg");
        break;
    }
    case 275689:
    {
        returnValue = F("Sankt-Lioba-Str.");
        break;
    }
    case 275690:
    {
        returnValue = F("Sankt-Lorenz-Brücke");
        break;
    }
    case 275691:
    {
        returnValue = F("Sankt-Lorenz-Str.");
        break;
    }
    case 275692:
    {
        returnValue = F("Sankt-Lorenz-Weg");
        break;
    }
    case 275693:
    {
        returnValue = F("Sankt-Lorenzweg");
        break;
    }
    case 275694:
    {
        returnValue = F("Sankt-Louis-Weg");
        break;
    }
    case 275695:
    {
        returnValue = F("Sankt-Lozenz-Str.");
        break;
    }
    case 275696:
    {
        returnValue = F("Sankt-Lucia-Str.");
        break;
    }
    case 275697:
    {
        returnValue = F("Sankt-Lukas-Str.");
        break;
    }
    case 275698:
    {
        returnValue = F("Sankt-Magdalena-Ring");
        break;
    }
    case 275699:
    {
        returnValue = F("Sankt-Magnus-Gasse");
        break;
    }
    case 275700:
    {
        returnValue = F("Sankt-Magnus-Str.");
        break;
    }
    case 275701:
    {
        returnValue = F("Sankt-Mammas-Weg");
        break;
    }
    case 275702:
    {
        returnValue = F("Sankt-Mang-Str.");
        break;
    }
    case 275703:
    {
        returnValue = F("Sankt-Mang-Weg");
        break;
    }
    case 275704:
    {
        returnValue = F("Sankt-Margareta-Str.");
        break;
    }
    case 275705:
    {
        returnValue = F("Sankt-Margareten-Str.");
        break;
    }
    case 275706:
    {
        returnValue = F("Sankt-Margareten-Weg");
        break;
    }
    case 275707:
    {
        returnValue = F("Sankt-Margareth-Str.");
        break;
    }
    case 275708:
    {
        returnValue = F("Sankt-Margaretha-Str.");
        break;
    }
    case 275709:
    {
        returnValue = F("Sankt-Margarethen-Str.");
        break;
    }
    case 275710:
    {
        returnValue = F("Sankt-Marien-Platz");
        break;
    }
    case 275711:
    {
        returnValue = F("Sankt-Marien-Str.");
        break;
    }
    case 275712:
    {
        returnValue = F("Sankt-Marien-Weg");
        break;
    }
    case 275713:
    {
        returnValue = F("Sankt-Marienstr.");
        break;
    }
    case 275714:
    {
        returnValue = F("Sankt-Martin Str.");
        break;
    }
    case 275715:
    {
        returnValue = F("Sankt-Martin-Platz");
        break;
    }
    case 275716:
    {
        returnValue = F("Sankt-Martin-Str.");
        break;
    }
    case 275717:
    {
        returnValue = F("Sankt-Martin-Weg");
        break;
    }
    case 275718:
    {
        returnValue = F("Sankt-Martiner-Str.");
        break;
    }
    case 275719:
    {
        returnValue = F("Sankt-Martins-Platz");
        break;
    }
    case 275720:
    {
        returnValue = F("Sankt-Martins-Str.");
        break;
    }
    case 275721:
    {
        returnValue = F("Sankt-Martins-Weg");
        break;
    }
    case 275722:
    {
        returnValue = F("Sankt-Martinus-Str.");
        break;
    }
    case 275723:
    {
        returnValue = F("Sankt-Martinus-Weg");
        break;
    }
    case 275724:
    {
        returnValue = F("Sankt-Matthias-Str.");
        break;
    }
    case 275725:
    {
        returnValue = F("Sankt-Matthäus-Weg");
        break;
    }
    case 275726:
    {
        returnValue = F("Sankt-Mauri-Str.");
        break;
    }
    case 275727:
    {
        returnValue = F("Sankt-Mauritius-Str.");
        break;
    }
    case 275728:
    {
        returnValue = F("Sankt-Mauritz-Freiheit");
        break;
    }
    case 275729:
    {
        returnValue = F("Sankt-Meinrads-Platz");
        break;
    }
    case 275730:
    {
        returnValue = F("Sankt-Michael-Platz");
        break;
    }
    case 275731:
    {
        returnValue = F("Sankt-Michael-Ring");
        break;
    }
    case 275732:
    {
        returnValue = F("Sankt-Michael-Str.");
        break;
    }
    case 275733:
    {
        returnValue = F("Sankt-Michael-Weg");
        break;
    }
    case 275734:
    {
        returnValue = F("Sankt-Michaels-Allee");
        break;
    }
    case 275735:
    {
        returnValue = F("Sankt-Michaels-Gasse");
        break;
    }
    case 275736:
    {
        returnValue = F("Sankt-Michaels-Str.");
        break;
    }
    case 275737:
    {
        returnValue = F("Sankt-Michaels-Weg");
        break;
    }
    case 275738:
    {
        returnValue = F("Sankt-Mihiel-Str.");
        break;
    }
    case 275739:
    {
        returnValue = F("Sankt-Monika-Kirche");
        break;
    }
    case 275740:
    {
        returnValue = F("Sankt-Moritz-Str.");
        break;
    }
    case 275741:
    {
        returnValue = F("Sankt-Nepomuk-Str.");
        break;
    }
    case 275742:
    {
        returnValue = F("Sankt-Nicolai-Str.");
        break;
    }
    case 275743:
    {
        returnValue = F("Sankt-Niklas-Str.");
        break;
    }
    case 275744:
    {
        returnValue = F("Sankt-Nikola-Str.");
        break;
    }
    case 275745:
    {
        returnValue = F("Sankt-Nikolai-Kirchplatz");
        break;
    }
    case 275746:
    {
        returnValue = F("Sankt-Nikolai-Kirchstr.");
        break;
    }
    case 275747:
    {
        returnValue = F("Sankt-Nikolai-Str.");
        break;
    }
    case 275748:
    {
        returnValue = F("Sankt-Nikolaus-Siedlung");
        break;
    }
    case 275749:
    {
        returnValue = F("Sankt-Nikolaus-Str.");
        break;
    }
    case 275750:
    {
        returnValue = F("Sankt-Nikolaus-Weg");
        break;
    }
    case 275751:
    {
        returnValue = F("Sankt-Norbert-Str.");
        break;
    }
    case 275752:
    {
        returnValue = F("Sankt-Notburga-Str.");
        break;
    }
    case 275753:
    {
        returnValue = F("Sankt-Notker-Str.");
        break;
    }
    case 275754:
    {
        returnValue = F("Sankt-Osdag-Str.");
        break;
    }
    case 275755:
    {
        returnValue = F("Sankt-Oswald-Str.");
        break;
    }
    case 275756:
    {
        returnValue = F("Sankt-Oswald-Weg");
        break;
    }
    case 275757:
    {
        returnValue = F("Sankt-Otmar-Str.");
        break;
    }
    case 275758:
    {
        returnValue = F("Sankt-Ottilien-Str.");
        break;
    }
    case 275759:
    {
        returnValue = F("Sankt-Ottilier Weg");
        break;
    }
    case 275760:
    {
        returnValue = F("Sankt-Otto-Str.");
        break;
    }
    case 275761:
    {
        returnValue = F("Sankt-Pankratius-Str.");
        break;
    }
    case 275762:
    {
        returnValue = F("Sankt-Paul-Str.");
        break;
    }
    case 275763:
    {
        returnValue = F("Sankt-Pauli-Deich");
        break;
    }
    case 275764:
    {
        returnValue = F("Sankt-Pauli-Str.");
        break;
    }
    case 275765:
    {
        returnValue = F("Sankt-Peter-Str.");
        break;
    }
    case 275766:
    {
        returnValue = F("Sankt-Peter-Weg");
        break;
    }
    case 275767:
    {
        returnValue = F("Sankt-Peter-und-Paul-Platz");
        break;
    }
    case 275768:
    {
        returnValue = F("Sankt-Peter-und-Paul-Str.");
        break;
    }
    case 275769:
    {
        returnValue = F("Sankt-Peter-und-Paul-Weg");
        break;
    }
    case 275770:
    {
        returnValue = F("Sankt-Peters-Gasse");
        break;
    }
    case 275771:
    {
        returnValue = F("Sankt-Peters-Platz");
        break;
    }
    case 275772:
    {
        returnValue = F("Sankt-Peters-Weg");
        break;
    }
    case 275773:
    {
        returnValue = F("Sankt-Petri-Str.");
        break;
    }
    case 275774:
    {
        returnValue = F("Sankt-Pius-Platz");
        break;
    }
    case 275775:
    {
        returnValue = F("Sankt-Pius-Str.");
        break;
    }
    case 275776:
    {
        returnValue = F("Sankt-Pöltener-Str.");
        break;
    }
    case 275777:
    {
        returnValue = F("Sankt-Quirin-Str.");
        break;
    }
    case 275778:
    {
        returnValue = F("Sankt-Quirin-Weg");
        break;
    }
    case 275779:
    {
        returnValue = F("Sankt-Raphael-Weg");
        break;
    }
    case 275780:
    {
        returnValue = F("Sankt-Rasso-Str.");
        break;
    }
    case 275781:
    {
        returnValue = F("Sankt-Reginen-Platz");
        break;
    }
    case 275782:
    {
        returnValue = F("Sankt-Remberti-Stift");
        break;
    }
    case 275783:
    {
        returnValue = F("Sankt-Rita-Weg");
        break;
    }
    case 275784:
    {
        returnValue = F("Sankt-Rochus-Allee");
        break;
    }
    case 275785:
    {
        returnValue = F("Sankt-Rochus-Platz");
        break;
    }
    case 275786:
    {
        returnValue = F("Sankt-Rochus-Str.");
        break;
    }
    case 275787:
    {
        returnValue = F("Sankt-Rochus-Weg");
        break;
    }
    case 275788:
    {
        returnValue = F("Sankt-Rupert-Str.");
        break;
    }
    case 275789:
    {
        returnValue = F("Sankt-Ruprecht-Ring");
        break;
    }
    case 275790:
    {
        returnValue = F("Sankt-Salvator-Str.");
        break;
    }
    case 275791:
    {
        returnValue = F("Sankt-Sebastian-Str.");
        break;
    }
    case 275792:
    {
        returnValue = F("Sankt-Sebastians-Platz");
        break;
    }
    case 275793:
    {
        returnValue = F("Sankt-Sebastians-Weg");
        break;
    }
    case 275794:
    {
        returnValue = F("Sankt-Sebastianus-Platz");
        break;
    }
    case 275795:
    {
        returnValue = F("Sankt-Sebastianus-Str.");
        break;
    }
    case 275796:
    {
        returnValue = F("Sankt-Sebastianus-Weg");
        break;
    }
    case 275797:
    {
        returnValue = F("Sankt-Severin-Str.");
        break;
    }
    case 275798:
    {
        returnValue = F("Sankt-Severin-Weg");
        break;
    }
    case 275799:
    {
        returnValue = F("Sankt-Sixtus-Str.");
        break;
    }
    case 275800:
    {
        returnValue = F("Sankt-Stephan-Str.");
        break;
    }
    case 275801:
    {
        returnValue = F("Sankt-Stephan-Weg");
        break;
    }
    case 275802:
    {
        returnValue = F("Sankt-Stephans-Platz");
        break;
    }
    case 275803:
    {
        returnValue = F("Sankt-Stephans-Weg");
        break;
    }
    case 275804:
    {
        returnValue = F("Sankt-Stephanus-Str.");
        break;
    }
    case 275805:
    {
        returnValue = F("Sankt-Suitbert-Platz");
        break;
    }
    case 275806:
    {
        returnValue = F("Sankt-Sylvester-Str.");
        break;
    }
    case 275807:
    {
        returnValue = F("Sankt-Thekla-Weg");
        break;
    }
    case 275808:
    {
        returnValue = F("Sankt-Theodul-Weg");
        break;
    }
    case 275809:
    {
        returnValue = F("Sankt-Thomas-Weg");
        break;
    }
    case 275810:
    {
        returnValue = F("Sankt-Ulrich-Gasse");
        break;
    }
    case 275811:
    {
        returnValue = F("Sankt-Ulrich-Platz");
        break;
    }
    case 275812:
    {
        returnValue = F("Sankt-Ulrich-Str.");
        break;
    }
    case 275813:
    {
        returnValue = F("Sankt-Ulrich-Weg");
        break;
    }
    case 275814:
    {
        returnValue = F("Sankt-Ulrichs-Weg");
        break;
    }
    case 275815:
    {
        returnValue = F("Sankt-Urban-Str.");
        break;
    }
    case 275816:
    {
        returnValue = F("Sankt-Urban-Weg");
        break;
    }
    case 275817:
    {
        returnValue = F("Sankt-Urbans-Weg");
        break;
    }
    case 275818:
    {
        returnValue = F("Sankt-Urbanus-Str.");
        break;
    }
    case 275819:
    {
        returnValue = F("Sankt-Ursula-Str.");
        break;
    }
    case 275820:
    {
        returnValue = F("Sankt-Ursula-Weg");
        break;
    }
    case 275821:
    {
        returnValue = F("Sankt-Uta-Str.");
        break;
    }
    case 275822:
    {
        returnValue = F("Sankt-Valentin-Str.");
        break;
    }
    case 275823:
    {
        returnValue = F("Sankt-Valentin-Weg");
        break;
    }
    case 275824:
    {
        returnValue = F("Sankt-Valentinus-Str.");
        break;
    }
    case 275825:
    {
        returnValue = F("Sankt-Veit-Platz");
        break;
    }
    case 275826:
    {
        returnValue = F("Sankt-Veit-Str.");
        break;
    }
    case 275827:
    {
        returnValue = F("Sankt-Veit-Weg");
        break;
    }
    case 275828:
    {
        returnValue = F("Sankt-Veith-Str.");
        break;
    }
    case 275829:
    {
        returnValue = F("Sankt-Veits-Weg");
        break;
    }
    case 275830:
    {
        returnValue = F("Sankt-Verena-Str.");
        break;
    }
    case 275831:
    {
        returnValue = F("Sankt-Verena-Weg");
        break;
    }
    case 275832:
    {
        returnValue = F("Sankt-Vincentius-Weg");
        break;
    }
    case 275833:
    {
        returnValue = F("Sankt-Vinzenz-Platz");
        break;
    }
    case 275834:
    {
        returnValue = F("Sankt-Vinzenz-Str.");
        break;
    }
    case 275835:
    {
        returnValue = F("Sankt-Vitalis-Str.");
        break;
    }
    case 275836:
    {
        returnValue = F("Sankt-Vitalis-Weg");
        break;
    }
    case 275837:
    {
        returnValue = F("Sankt-Vither-Str.");
        break;
    }
    case 275838:
    {
        returnValue = F("Sankt-Viti-Str.");
        break;
    }
    case 275839:
    {
        returnValue = F("Sankt-Vitus-Gasse");
        break;
    }
    case 275840:
    {
        returnValue = F("Sankt-Vitus-Schützenstr.");
        break;
    }
    case 275841:
    {
        returnValue = F("Sankt-Vitus-Str.");
        break;
    }
    case 275842:
    {
        returnValue = F("Sankt-Vitus-Weg");
        break;
    }
    case 275843:
    {
        returnValue = F("Sankt-Wendel-Str.");
        break;
    }
    case 275844:
    {
        returnValue = F("Sankt-Wendel-Weg");
        break;
    }
    case 275845:
    {
        returnValue = F("Sankt-Wendelin-Platz");
        break;
    }
    case 275846:
    {
        returnValue = F("Sankt-Wendelin-Str.");
        break;
    }
    case 275847:
    {
        returnValue = F("Sankt-Wendelin-Weg");
        break;
    }
    case 275848:
    {
        returnValue = F("Sankt-Wendelinus-Str.");
        break;
    }
    case 275849:
    {
        returnValue = F("Sankt-Wendelinus-Weg");
        break;
    }
    case 275850:
    {
        returnValue = F("Sankt-Wenzel-Platz");
        break;
    }
    case 275851:
    {
        returnValue = F("Sankt-Wilhadi-Str.");
        break;
    }
    case 275852:
    {
        returnValue = F("Sankt-Willebold-Str.");
        break;
    }
    case 275853:
    {
        returnValue = F("Sankt-Willehad-Str.");
        break;
    }
    case 275854:
    {
        returnValue = F("Sankt-Willibrord-Str.");
        break;
    }
    case 275855:
    {
        returnValue = F("Sankt-Wolfgang-Platz");
        break;
    }
    case 275856:
    {
        returnValue = F("Sankt-Wolfgang-Siedlung");
        break;
    }
    case 275857:
    {
        returnValue = F("Sankt-Wolfgang-Str.");
        break;
    }
    case 275858:
    {
        returnValue = F("Sankt-Wolfgangs-Weg");
        break;
    }
    case 275859:
    {
        returnValue = F("Sankt-Zeno-Str.");
        break;
    }
    case 275860:
    {
        returnValue = F("Sankt-kilian-Str.");
        break;
    }
    case 275861:
    {
        returnValue = F("Sankt-Ägidien-Str.");
        break;
    }
    case 275862:
    {
        returnValue = F("Sankt-Ägidius-Str.");
        break;
    }
    case 275863:
    {
        returnValue = F("Sanktjohanserstr.");
        break;
    }
    case 275864:
    {
        returnValue = F("Sanktustorstr.");
        break;
    }
    case 275865:
    {
        returnValue = F("Sankweg");
        break;
    }
    case 275866:
    {
        returnValue = F("Sann-Acker");
        break;
    }
    case 275867:
    {
        returnValue = F("Sannemannweg");
        break;
    }
    case 275868:
    {
        returnValue = F("Sannentalstr.");
        break;
    }
    case 275869:
    {
        returnValue = F("Sanner Dorfstr.");
        break;
    }
    case 275870:
    {
        returnValue = F("Sanner Str.");
        break;
    }
    case 275871:
    {
        returnValue = F("Sanner Weg");
        break;
    }
    case 275872:
    {
        returnValue = F("Sannertsberg");
        break;
    }
    case 275873:
    {
        returnValue = F("Sannerweg");
        break;
    }
    case 275874:
    {
        returnValue = F("Sannerwies");
        break;
    }
    case 275875:
    {
        returnValue = F("Sannerzer Str.");
        break;
    }
    case 275876:
    {
        returnValue = F("Sannerzer Weg");
        break;
    }
    case 275877:
    {
        returnValue = F("Sannumer Str.");
        break;
    }
    case 275878:
    {
        returnValue = F("Sansenhecken");
        break;
    }
    case 275879:
    {
        returnValue = F("Sansenweg");
        break;
    }
    case 275880:
    {
        returnValue = F("Sanserweg");
        break;
    }
    case 275881:
    {
        returnValue = F("Sansibarstr.");
        break;
    }
    case 275882:
    {
        returnValue = F("Sanssouci");
        break;
    }
    case 275883:
    {
        returnValue = F("Sanstiecken Redder");
        break;
    }
    case 275884:
    {
        returnValue = F("Santa Fe - Brücke");
        break;
    }
    case 275885:
    {
        returnValue = F("Santa Monica Pier");
        break;
    }
    case 275886:
    {
        returnValue = F("Santa-Catarina-Allee");
        break;
    }
    case 275887:
    {
        returnValue = F("Santander-Platz");
        break;
    }
    case 275888:
    {
        returnValue = F("Sante-David-Str.");
        break;
    }
    case 275889:
    {
        returnValue = F("Santeramostr.");
        break;
    }
    case 275890:
    {
        returnValue = F("Santersleber Weg");
        break;
    }
    case 275891:
    {
        returnValue = F("Santesstr.");
        break;
    }
    case 275892:
    {
        returnValue = F("Santfoort");
        break;
    }
    case 275893:
    {
        returnValue = F("Santiago Drive");
        break;
    }
    case 275894:
    {
        returnValue = F("Santiago-de-Chile-Platz");
        break;
    }
    case 275895:
    {
        returnValue = F("Santis Claus Weg");
        break;
    }
    case 275896:
    {
        returnValue = F("Santis-Claus-Str.");
        break;
    }
    case 275897:
    {
        returnValue = F("Santnerstr.");
        break;
    }
    case 275898:
    {
        returnValue = F("Santo-Domingo-de-la-Calzada Platz");
        break;
    }
    case 275899:
    {
        returnValue = F("Santo-Tirso-Ring");
        break;
    }
    case 275900:
    {
        returnValue = F("Santower Str.");
        break;
    }
    case 275901:
    {
        returnValue = F("Sanvignes-Str.");
        break;
    }
    case 275902:
    {
        returnValue = F("Sany Allee");
        break;
    }
    case 275903:
    {
        returnValue = F("Sanzaring");
        break;
    }
    case 275904:
    {
        returnValue = F("Sanzaweg");
        break;
    }
    case 275905:
    {
        returnValue = F("Sanzebergstr.");
        break;
    }
    case 275906:
    {
        returnValue = F("Sanzenbach");
        break;
    }
    case 275907:
    {
        returnValue = F("Sanzenbacher Str.");
        break;
    }
    case 275908:
    {
        returnValue = F("Sanzkow");
        break;
    }
    case 275909:
    {
        returnValue = F("Sanzkower Weg");
        break;
    }
    case 275910:
    {
        returnValue = F("Saonestr.");
        break;
    }
    case 275911:
    {
        returnValue = F("Sapelloh");
        break;
    }
    case 275912:
    {
        returnValue = F("Sapherscher Weg");
        break;
    }
    case 275913:
    {
        returnValue = F("Saphirallee");
        break;
    }
    case 275914:
    {
        returnValue = F("Saphirring");
        break;
    }
    case 275915:
    {
        returnValue = F("Saphirstr.");
        break;
    }
    case 275916:
    {
        returnValue = F("Saphirweg");
        break;
    }
    case 275917:
    {
        returnValue = F("Saphuser Str.");
        break;
    }
    case 275918:
    {
        returnValue = F("Saporoshje-Platz");
        break;
    }
    case 275919:
    {
        returnValue = F("Sappenberg");
        break;
    }
    case 275920:
    {
        returnValue = F("Sappenfelder Str.");
        break;
    }
    case 275921:
    {
        returnValue = F("Sappenfelder Sträßchen");
        break;
    }
    case 275922:
    {
        returnValue = F("Sapperallee");
        break;
    }
    case 275923:
    {
        returnValue = F("Sapperstr.");
        break;
    }
    case 275924:
    {
        returnValue = F("Sappeurweg");
        break;
    }
    case 275925:
    {
        returnValue = F("Sappichweg");
        break;
    }
    case 275926:
    {
        returnValue = F("Sapplweg");
        break;
    }
    case 275927:
    {
        returnValue = F("Sara-Frenkel-Platz");
        break;
    }
    case 275928:
    {
        returnValue = F("Sara-Kirsch-Str.");
        break;
    }
    case 275929:
    {
        returnValue = F("Sara-Nußbaum-Platz");
        break;
    }
    case 275930:
    {
        returnValue = F("Sara-Oppenheimer-Str.");
        break;
    }
    case 275931:
    {
        returnValue = F("Sarah-Kirsch-Weg");
        break;
    }
    case 275932:
    {
        returnValue = F("Sarahof");
        break;
    }
    case 275933:
    {
        returnValue = F("Sarajevo-Ufer");
        break;
    }
    case 275934:
    {
        returnValue = F("Sarajevostr.");
        break;
    }
    case 275935:
    {
        returnValue = F("Saranskstr.");
        break;
    }
    case 275936:
    {
        returnValue = F("Saranstr.");
        break;
    }
    case 275937:
    {
        returnValue = F("Sarataweg");
        break;
    }
    case 275938:
    {
        returnValue = F("Saratoga Avenue");
        break;
    }
    case 275939:
    {
        returnValue = F("Saratoga Drive");
        break;
    }
    case 275940:
    {
        returnValue = F("Sarattenweg");
        break;
    }
    case 275941:
    {
        returnValue = F("Sarauer Str.");
        break;
    }
    case 275942:
    {
        returnValue = F("Sarceller Str.");
        break;
    }
    case 275943:
    {
        returnValue = F("Sarchhalde");
        break;
    }
    case 275944:
    {
        returnValue = F("Sarchinger Feld");
        break;
    }
    case 275945:
    {
        returnValue = F("Sardmannsbruchweg");
        break;
    }
    case 275946:
    {
        returnValue = F("Sareitz");
        break;
    }
    case 275947:
    {
        returnValue = F("Sareptaweg");
        break;
    }
    case 275948:
    {
        returnValue = F("Sargenzeller Str.");
        break;
    }
    case 275949:
    {
        returnValue = F("Sarglebener Dorfstr.");
        break;
    }
    case 275950:
    {
        returnValue = F("Sarglebener Str.");
        break;
    }
    case 275951:
    {
        returnValue = F("Sargmacherstr.");
        break;
    }
    case 275952:
    {
        returnValue = F("Sargstedter Str.");
        break;
    }
    case 275953:
    {
        returnValue = F("Sargstedter Weg");
        break;
    }
    case 275954:
    {
        returnValue = F("Sargweg");
        break;
    }
    case 275955:
    {
        returnValue = F("Saritscher Hauptstr.");
        break;
    }
    case 275956:
    {
        returnValue = F("Sariweg");
        break;
    }
    case 275957:
    {
        returnValue = F("Sarkertstr.");
        break;
    }
    case 275958:
    {
        returnValue = F("Sarkower Weg");
        break;
    }
    case 275959:
    {
        returnValue = F("Sarkstig");
        break;
    }
    case 275960:
    {
        returnValue = F("Sarkwitzer Str.");
        break;
    }
    case 275961:
    {
        returnValue = F("Sarkwitzer Weg");
        break;
    }
    case 275962:
    {
        returnValue = F("Sarlesheimer Str.");
        break;
    }
    case 275963:
    {
        returnValue = F("Sarlingstr.");
        break;
    }
    case 275964:
    {
        returnValue = F("Sarmanna-Str.");
        break;
    }
    case 275965:
    {
        returnValue = F("Sarmatiaweg");
        break;
    }
    case 275966:
    {
        returnValue = F("Sarnauer Str.");
        break;
    }
    case 275967:
    {
        returnValue = F("Sarninghausen");
        break;
    }
    case 275968:
    {
        returnValue = F("Sarninghäuser Str.");
        break;
    }
    case 275969:
    {
        returnValue = F("Sarnower Weg");
        break;
    }
    case 275970:
    {
        returnValue = F("Sarnowstr.");
        break;
    }
    case 275971:
    {
        returnValue = F("Sarnowweg");
        break;
    }
    case 275972:
    {
        returnValue = F("Sarnsbank");
        break;
    }
    case 275973:
    {
        returnValue = F("Sarnsbankstr.");
        break;
    }
    case 275974:
    {
        returnValue = F("Sarntaler Str.");
        break;
    }
    case 275975:
    {
        returnValue = F("Saroltagäßchen");
        break;
    }
    case 275976:
    {
        returnValue = F("Saroltastr.");
        break;
    }
    case 275977:
    {
        returnValue = F("Saronweg");
        break;
    }
    case 275978:
    {
        returnValue = F("Sarrasanistr.");
        break;
    }
    case 275979:
    {
        returnValue = F("Sarrebourg-Str.");
        break;
    }
    case 275980:
    {
        returnValue = F("Sarreiterweg");
        break;
    }
    case 275981:
    {
        returnValue = F("Sarresdorfer Str.");
        break;
    }
    case 275982:
    {
        returnValue = F("Sarrestr.");
        break;
    }
    case 275983:
    {
        returnValue = F("Sarrewinkel");
        break;
    }
    case 275984:
    {
        returnValue = F("Sarroder Str.");
        break;
    }
    case 275985:
    {
        returnValue = F("Sarrstr.");
        break;
    }
    case 275986:
    {
        returnValue = F("Sarsinaer Str.");
        break;
    }
    case 275987:
    {
        returnValue = F("Sarstedter Str.");
        break;
    }
    case 275988:
    {
        returnValue = F("Sarterstr.");
        break;
    }
    case 275989:
    {
        returnValue = F("Sartoristr.");
        break;
    }
    case 275990:
    {
        returnValue = F("Sartoriusstr.");
        break;
    }
    case 275991:
    {
        returnValue = F("Sartoriusweg");
        break;
    }
    case 275992:
    {
        returnValue = F("Sartrering");
        break;
    }
    case 275993:
    {
        returnValue = F("Sartrouville Platz");
        break;
    }
    case 275994:
    {
        returnValue = F("Sarusch");
        break;
    }
    case 275995:
    {
        returnValue = F("Sarver Str.");
        break;
    }
    case 275996:
    {
        returnValue = F("Sarweystr.");
        break;
    }
    case 275997:
    {
        returnValue = F("Sarwürckerstr.");
        break;
    }
    case 275998:
    {
        returnValue = F("Sasbacher Str.");
        break;
    }
    case 275999:
    {
        returnValue = F("Sasbachrieder Str.");
        break;
    }
    case 276000:
    {
        returnValue = F("Sasbachwaldener Str.");
        break;
    }
    case 276001:
    {
        returnValue = F("Saseler Redder");
        break;
    }
    case 276002:
    {
        returnValue = F("Saseler Stieg");
        break;
    }
    case 276003:
    {
        returnValue = F("Saseler Weg");
        break;
    }
    case 276004:
    {
        returnValue = F("Sasendorf");
        break;
    }
    case 276005:
    {
        returnValue = F("Sasendorfer Str.");
        break;
    }
    case 276006:
    {
        returnValue = F("Sasenweg");
        break;
    }
    case 276007:
    {
        returnValue = F("Saskatoon-Str.");
        break;
    }
    case 276008:
    {
        returnValue = F("Saspower Hauptstr.");
        break;
    }
    case 276009:
    {
        returnValue = F("Saspower Landstr.");
        break;
    }
    case 276010:
    {
        returnValue = F("Saspower Str.");
        break;
    }
    case 276011:
    {
        returnValue = F("Saspower Weg");
        break;
    }
    case 276012:
    {
        returnValue = F("Sassanfahrter Hauptstr.");
        break;
    }
    case 276013:
    {
        returnValue = F("Sassau");
        break;
    }
    case 276014:
    {
        returnValue = F("Sassbergstr.");
        break;
    }
    case 276015:
    {
        returnValue = F("Sasselbach");
        break;
    }
    case 276016:
    {
        returnValue = F("Sassen Kamp");
        break;
    }
    case 276017:
    {
        returnValue = F("Sassenage-Garten");
        break;
    }
    case 276018:
    {
        returnValue = F("Sassenbach");
        break;
    }
    case 276019:
    {
        returnValue = F("Sassenberg");
        break;
    }
    case 276020:
    {
        returnValue = F("Sassenberger Str.");
        break;
    }
    case 276021:
    {
        returnValue = F("Sassenberger Weg");
        break;
    }
    case 276022:
    {
        returnValue = F("Sassenbergstr.");
        break;
    }
    case 276023:
    {
        returnValue = F("Sassenbirkstr.");
        break;
    }
    case 276024:
    {
        returnValue = F("Sassenbrückenweg");
        break;
    }
    case 276025:
    {
        returnValue = F("Sassenburg");
        break;
    }
    case 276026:
    {
        returnValue = F("Sassenburgstr.");
        break;
    }
    case 276027:
    {
        returnValue = F("Sassenbühl");
        break;
    }
    case 276028:
    {
        returnValue = F("Sassendorfer Ring");
        break;
    }
    case 276029:
    {
        returnValue = F("Sassendorfer Weg");
        break;
    }
    case 276030:
    {
        returnValue = F("Sassendorferweg");
        break;
    }
    case 276031:
    {
        returnValue = F("Sasseneck");
        break;
    }
    case 276032:
    {
        returnValue = F("Sassenfeld");
        break;
    }
    case 276033:
    {
        returnValue = F("Sassenfelder Kirchweg");
        break;
    }
    case 276034:
    {
        returnValue = F("Sassenfelder Str.");
        break;
    }
    case 276035:
    {
        returnValue = F("Sassengarten");
        break;
    }
    case 276036:
    {
        returnValue = F("Sassengasse");
        break;
    }
    case 276037:
    {
        returnValue = F("Sassengraben");
        break;
    }
    case 276038:
    {
        returnValue = F("Sassenhof");
        break;
    }
    case 276039:
    {
        returnValue = F("Sassenhäuser Str.");
        break;
    }
    case 276040:
    {
        returnValue = F("Sassenhäuser Weg");
        break;
    }
    case 276041:
    {
        returnValue = F("Sassenkamp");
        break;
    }
    case 276042:
    {
        returnValue = F("Sassenmühle");
        break;
    }
    case 276043:
    {
        returnValue = F("Sassenstr.");
        break;
    }
    case 276044:
    {
        returnValue = F("Sassenweg");
        break;
    }
    case 276045:
    {
        returnValue = F("Sasser Weg");
        break;
    }
    case 276046:
    {
        returnValue = F("Sasserath");
        break;
    }
    case 276047:
    {
        returnValue = F("Sasserather Berg");
        break;
    }
    case 276048:
    {
        returnValue = F("Sasserather Feld");
        break;
    }
    case 276049:
    {
        returnValue = F("Sasserather Pfad");
        break;
    }
    case 276050:
    {
        returnValue = F("Sasserstr.");
        break;
    }
    case 276051:
    {
        returnValue = F("Sassestr.");
        break;
    }
    case 276052:
    {
        returnValue = F("Sassnitzer Chaussee");
        break;
    }
    case 276053:
    {
        returnValue = F("Sassnitzer Str.");
        break;
    }
    case 276054:
    {
        returnValue = F("Sassnitzer Weg");
        break;
    }
    case 276055:
    {
        returnValue = F("Sassstr.");
        break;
    }
    case 276056:
    {
        returnValue = F("Sasstr.");
        break;
    }
    case 276057:
    {
        returnValue = F("Sastrowstr.");
        break;
    }
    case 276058:
    {
        returnValue = F("Satansschlucht");
        break;
    }
    case 276059:
    {
        returnValue = F("Sateldünwai");
        break;
    }
    case 276060:
    {
        returnValue = F("Satellitenweg");
        break;
    }
    case 276061:
    {
        returnValue = F("Satelsrönne");
        break;
    }
    case 276062:
    {
        returnValue = F("Sater Landstr.");
        break;
    }
    case 276063:
    {
        returnValue = F("Saterlandstr.");
        break;
    }
    case 276064:
    {
        returnValue = F("Saterländer Weg");
        break;
    }
    case 276065:
    {
        returnValue = F("Saterstr.");
        break;
    }
    case 276066:
    {
        returnValue = F("Sathelstr.");
        break;
    }
    case 276067:
    {
        returnValue = F("Sathmarweg");
        break;
    }
    case 276068:
    {
        returnValue = F("Satingsbaane");
        break;
    }
    case 276069:
    {
        returnValue = F("Satjendorf");
        break;
    }
    case 276070:
    {
        returnValue = F("Satlen");
        break;
    }
    case 276071:
    {
        returnValue = F("Satonevri-Platz");
        break;
    }
    case 276072:
    {
        returnValue = F("Satow Hütte");
        break;
    }
    case 276073:
    {
        returnValue = F("Satower Str.");
        break;
    }
    case 276074:
    {
        returnValue = F("Satower Weg");
        break;
    }
    case 276075:
    {
        returnValue = F("Satruper Str.");
        break;
    }
    case 276076:
    {
        returnValue = F("Sattel-Sack-Weg");
        break;
    }
    case 276077:
    {
        returnValue = F("Sattelackerstr.");
        break;
    }
    case 276078:
    {
        returnValue = F("Sattelackerweg");
        break;
    }
    case 276079:
    {
        returnValue = F("Sattelbacher Pfad");
        break;
    }
    case 276080:
    {
        returnValue = F("Sattelbacher Str.");
        break;
    }
    case 276081:
    {
        returnValue = F("Sattelbacher Weg");
        break;
    }
    case 276082:
    {
        returnValue = F("Sattelbachstr.");
        break;
    }
    case 276083:
    {
        returnValue = F("Sattelbergstr.");
        break;
    }
    case 276084:
    {
        returnValue = F("Sattelbogen");
        break;
    }
    case 276085:
    {
        returnValue = F("Sattelbogenerstr.");
        break;
    }
    case 276086:
    {
        returnValue = F("Sattelbogenstr.");
        break;
    }
    case 276087:
    {
        returnValue = F("Satteldorfer Hauptstr.");
        break;
    }
    case 276088:
    {
        returnValue = F("Satteldorfer Str.");
        break;
    }
    case 276089:
    {
        returnValue = F("Sattelecke");
        break;
    }
    case 276090:
    {
        returnValue = F("Sattelgasse");
        break;
    }
    case 276091:
    {
        returnValue = F("Sattelgrundweg");
        break;
    }
    case 276092:
    {
        returnValue = F("Sattelhecke");
        break;
    }
    case 276093:
    {
        returnValue = F("Sattelhof");
        break;
    }
    case 276094:
    {
        returnValue = F("Sattelhofstr.");
        break;
    }
    case 276095:
    {
        returnValue = F("Sattelhofweg");
        break;
    }
    case 276096:
    {
        returnValue = F("Sattelholz");
        break;
    }
    case 276097:
    {
        returnValue = F("Sattelkamp");
        break;
    }
    case 276098:
    {
        returnValue = F("Sattellegestr.");
        break;
    }
    case 276099:
    {
        returnValue = F("Sattelmannsburg");
        break;
    }
    case 276100:
    {
        returnValue = F("Sattelmayerbrücke");
        break;
    }
    case 276101:
    {
        returnValue = F("Sattelmayerstr.");
        break;
    }
    case 276102:
    {
        returnValue = F("Sattelmeierstr.");
        break;
    }
    case 276103:
    {
        returnValue = F("Sattelmeierweg");
        break;
    }
    case 276104:
    {
        returnValue = F("Sattelmühle");
        break;
    }
    case 276105:
    {
        returnValue = F("Sattelpaßstr.");
        break;
    }
    case 276106:
    {
        returnValue = F("Sattelplatz");
        break;
    }
    case 276107:
    {
        returnValue = F("Sattelrainweg");
        break;
    }
    case 276108:
    {
        returnValue = F("Sattelstorch");
        break;
    }
    case 276109:
    {
        returnValue = F("Sattelstr.");
        break;
    }
    case 276110:
    {
        returnValue = F("Sattelstörche");
        break;
    }
    case 276111:
    {
        returnValue = F("Sattelweg");
        break;
    }
    case 276112:
    {
        returnValue = F("Sattelweiler Weg");
        break;
    }
    case 276113:
    {
        returnValue = F("Satteläcker");
        break;
    }
    case 276114:
    {
        returnValue = F("Sattenbeuren");
        break;
    }
    case 276115:
    {
        returnValue = F("Sattenfelder Str.");
        break;
    }
    case 276116:
    {
        returnValue = F("Sattenhäuser Str.");
        break;
    }
    case 276117:
    {
        returnValue = F("Sattichstr.");
        break;
    }
    case 276118:
    {
        returnValue = F("Sattigplatz");
        break;
    }
    case 276119:
    {
        returnValue = F("Sattigstr.");
        break;
    }
    case 276120:
    {
        returnValue = F("Sattlage");
        break;
    }
    case 276121:
    {
        returnValue = F("Sattlegeweg");
        break;
    }
    case 276122:
    {
        returnValue = F("Sattlerbad");
        break;
    }
    case 276123:
    {
        returnValue = F("Sattlerberg");
        break;
    }
    case 276124:
    {
        returnValue = F("Sattlerbreite");
        break;
    }
    case 276125:
    {
        returnValue = F("Sattlerbrücke");
        break;
    }
    case 276126:
    {
        returnValue = F("Sattlerdyk");
        break;
    }
    case 276127:
    {
        returnValue = F("Sattlergang");
        break;
    }
    case 276128:
    {
        returnValue = F("Sattlergasse");
        break;
    }
    case 276129:
    {
        returnValue = F("Sattlergassl");
        break;
    }
    case 276130:
    {
        returnValue = F("Sattlergässle");
        break;
    }
    case 276131:
    {
        returnValue = F("Sattlergäßli");
        break;
    }
    case 276132:
    {
        returnValue = F("Sattlerhöhe");
        break;
    }
    case 276133:
    {
        returnValue = F("Sattlerlohne");
        break;
    }
    case 276134:
    {
        returnValue = F("Sattlerring");
        break;
    }
    case 276135:
    {
        returnValue = F("Sattlerskamp");
        break;
    }
    case 276136:
    {
        returnValue = F("Sattlersteige");
        break;
    }
    case 276137:
    {
        returnValue = F("Sattlerstieg");
        break;
    }
    case 276138:
    {
        returnValue = F("Sattlerstr.");
        break;
    }
    case 276139:
    {
        returnValue = F("Sattlertorstr.");
        break;
    }
    case 276140:
    {
        returnValue = F("Sattlerweg");
        break;
    }
    case 276141:
    {
        returnValue = F("Sattlmühle");
        break;
    }
    case 276142:
    {
        returnValue = F("Sattmer-Siedlung");
        break;
    }
    case 276143:
    {
        returnValue = F("Sattyweg");
        break;
    }
    case 276144:
    {
        returnValue = F("Satu Mare Brücke");
        break;
    }
    case 276145:
    {
        returnValue = F("Satu-Mare-Brücke");
        break;
    }
    case 276146:
    {
        returnValue = F("Satueller Str.");
        break;
    }
    case 276147:
    {
        returnValue = F("Saturnbogen");
        break;
    }
    case 276148:
    {
        returnValue = F("Saturninenstr.");
        break;
    }
    case 276149:
    {
        returnValue = F("Saturnring");
        break;
    }
    case 276150:
    {
        returnValue = F("Saturnstr.");
        break;
    }
    case 276151:
    {
        returnValue = F("Saturnusweg");
        break;
    }
    case 276152:
    {
        returnValue = F("Saturnweg");
        break;
    }
    case 276153:
    {
        returnValue = F("Satzbach");
        break;
    }
    case 276154:
    {
        returnValue = F("Satzenberg");
        break;
    }
    case 276155:
    {
        returnValue = F("Satzenbergstr.");
        break;
    }
    case 276156:
    {
        returnValue = F("Satzenbuckelweg");
        break;
    }
    case 276157:
    {
        returnValue = F("Satzenhofenstr.");
        break;
    }
    case 276158:
    {
        returnValue = F("Satzenhoferstr.");
        break;
    }
    case 276159:
    {
        returnValue = F("Satzkorner Bergstr.");
        break;
    }
    case 276160:
    {
        returnValue = F("Satzkorner Ringstr.");
        break;
    }
    case 276161:
    {
        returnValue = F("Satzschneise");
        break;
    }
    case 276162:
    {
        returnValue = F("Satzunger Birkenweg");
        break;
    }
    case 276163:
    {
        returnValue = F("Satzunger Hauptstr.");
        break;
    }
    case 276164:
    {
        returnValue = F("Satzunger Kirchstr.");
        break;
    }
    case 276165:
    {
        returnValue = F("Satzunger Ziegengasse");
        break;
    }
    case 276166:
    {
        returnValue = F("Satzveyer Str.");
        break;
    }
    case 276167:
    {
        returnValue = F("Satzweg");
        break;
    }
    case 276168:
    {
        returnValue = F("Sau Weg");
        break;
    }
    case 276169:
    {
        returnValue = F("Sau-Damm");
        break;
    }
    case 276170:
    {
        returnValue = F("Sauackerweg");
        break;
    }
    case 276171:
    {
        returnValue = F("Sauanger");
        break;
    }
    case 276172:
    {
        returnValue = F("Saubach");
        break;
    }
    case 276173:
    {
        returnValue = F("Saubacher Mühlen");
        break;
    }
    case 276174:
    {
        returnValue = F("Saubacher Str.");
        break;
    }
    case 276175:
    {
        returnValue = F("Saubachshäuser Weg");
        break;
    }
    case 276176:
    {
        returnValue = F("Saubachtal");
        break;
    }
    case 276177:
    {
        returnValue = F("Saubachweg");
        break;
    }
    case 276178:
    {
        returnValue = F("Saubadweg");
        break;
    }
    case 276179:
    {
        returnValue = F("Sauberg");
        break;
    }
    case 276180:
    {
        returnValue = F("Saubergasse");
        break;
    }
    case 276181:
    {
        returnValue = F("Sauberglinie");
        break;
    }
    case 276182:
    {
        returnValue = F("Saubergstr.");
        break;
    }
    case 276183:
    {
        returnValue = F("Saubergweg");
        break;
    }
    case 276184:
    {
        returnValue = F("Sauberplatz");
        break;
    }
    case 276185:
    {
        returnValue = F("Saubersrieth");
        break;
    }
    case 276186:
    {
        returnValue = F("Saubersriether Str.");
        break;
    }
    case 276187:
    {
        returnValue = F("Saubertstr.");
        break;
    }
    case 276188:
    {
        returnValue = F("Saubogen Geräumt");
        break;
    }
    case 276189:
    {
        returnValue = F("Saubogenweg");
        break;
    }
    case 276190:
    {
        returnValue = F("Sauborn");
        break;
    }
    case 276191:
    {
        returnValue = F("Saubornweg");
        break;
    }
    case 276192:
    {
        returnValue = F("Saubrunnen Weg");
        break;
    }
    case 276193:
    {
        returnValue = F("Saubrunnenhangweg");
        break;
    }
    case 276194:
    {
        returnValue = F("Saubrunnenstr.");
        break;
    }
    case 276195:
    {
        returnValue = F("Saubrunnenweg");
        break;
    }
    case 276196:
    {
        returnValue = F("Saubrücke");
        break;
    }
    case 276197:
    {
        returnValue = F("Saubrückenweg");
        break;
    }
    case 276198:
    {
        returnValue = F("Saubsdorfer Str.");
        break;
    }
    case 276199:
    {
        returnValue = F("Saubuchweg");
        break;
    }
    case 276200:
    {
        returnValue = F("Saubuckel");
        break;
    }
    case 276201:
    {
        returnValue = F("Saubuckelweg");
        break;
    }
    case 276202:
    {
        returnValue = F("Saubuschschneise");
        break;
    }
    case 276203:
    {
        returnValue = F("Saubühlweg");
        break;
    }
    case 276204:
    {
        returnValue = F("Saudengasse");
        break;
    }
    case 276205:
    {
        returnValue = F("Saudentalstr.");
        break;
    }
    case 276206:
    {
        returnValue = F("Saudstr.");
        break;
    }
    case 276207:
    {
        returnValue = F("Sauener Str.");
        break;
    }
    case 276208:
    {
        returnValue = F("Sauensieker Weg");
        break;
    }
    case 276209:
    {
        returnValue = F("Sauenweg");
        break;
    }
    case 276210:
    {
        returnValue = F("Sauer Moor");
        break;
    }
    case 276211:
    {
        returnValue = F("Saueracker");
        break;
    }
    case 276212:
    {
        returnValue = F("Sauerackerweg");
        break;
    }
    case 276213:
    {
        returnValue = F("Sauerampferweg");
        break;
    }
    case 276214:
    {
        returnValue = F("Sauerbach");
        break;
    }
    case 276215:
    {
        returnValue = F("Sauerbachstr.");
        break;
    }
    case 276216:
    {
        returnValue = F("Sauerbachweg");
        break;
    }
    case 276217:
    {
        returnValue = F("Sauerbenden");
        break;
    }
    case 276218:
    {
        returnValue = F("Sauerberg");
        break;
    }
    case 276219:
    {
        returnValue = F("Sauerbergshohle");
        break;
    }
    case 276220:
    {
        returnValue = F("Sauerbergweg");
        break;
    }
    case 276221:
    {
        returnValue = F("Sauerbornshohl");
        break;
    }
    case 276222:
    {
        returnValue = F("Sauerbornstr.");
        break;
    }
    case 276223:
    {
        returnValue = F("Sauerbornsweg");
        break;
    }
    case 276224:
    {
        returnValue = F("Sauerbrei");
        break;
    }
    case 276225:
    {
        returnValue = F("Sauerbreystr.");
        break;
    }
    case 276226:
    {
        returnValue = F("Sauerbronnstr.");
        break;
    }
    case 276227:
    {
        returnValue = F("Sauerbruch");
        break;
    }
    case 276228:
    {
        returnValue = F("Sauerbruchpark");
        break;
    }
    case 276229:
    {
        returnValue = F("Sauerbruchring");
        break;
    }
    case 276230:
    {
        returnValue = F("Sauerbruchstr.");
        break;
    }
    case 276231:
    {
        returnValue = F("Sauerbruchsweg");
        break;
    }
    case 276232:
    {
        returnValue = F("Sauerbruchweg");
        break;
    }
    case 276233:
    {
        returnValue = F("Sauerbrunnen");
        break;
    }
    case 276234:
    {
        returnValue = F("Sauerbrunnengasse");
        break;
    }
    case 276235:
    {
        returnValue = F("Sauerbrunnengässle");
        break;
    }
    case 276236:
    {
        returnValue = F("Sauerbrunnenpfad");
        break;
    }
    case 276237:
    {
        returnValue = F("Sauerbrunnenstr.");
        break;
    }
    case 276238:
    {
        returnValue = F("Sauerbrunnenweg");
        break;
    }
    case 276239:
    {
        returnValue = F("Sauerbuschweg");
        break;
    }
    case 276240:
    {
        returnValue = F("Sauerdornweg");
        break;
    }
    case 276241:
    {
        returnValue = F("Sauerdrift");
        break;
    }
    case 276242:
    {
        returnValue = F("Sauererlenstr.");
        break;
    }
    case 276243:
    {
        returnValue = F("Sauerfeld");
        break;
    }
    case 276244:
    {
        returnValue = F("Sauerfelder Str.");
        break;
    }
    case 276245:
    {
        returnValue = F("Sauerfeldstr.");
        break;
    }
    case 276246:
    {
        returnValue = F("Sauerfeldweg");
        break;
    }
    case 276247:
    {
        returnValue = F("Sauergarten");
        break;
    }
    case 276248:
    {
        returnValue = F("Sauergasse");
        break;
    }
    case 276249:
    {
        returnValue = F("Sauergras");
        break;
    }
    case 276250:
    {
        returnValue = F("Sauergrund");
        break;
    }
    case 276251:
    {
        returnValue = F("Sauergrundschneise");
        break;
    }
    case 276252:
    {
        returnValue = F("Sauergrundweg");
        break;
    }
    case 276253:
    {
        returnValue = F("Sauerheimer Weg");
        break;
    }
    case 276254:
    {
        returnValue = F("Sauerhof");
        break;
    }
    case 276255:
    {
        returnValue = F("Sauerholzweg");
        break;
    }
    case 276256:
    {
        returnValue = F("Sauerhutweg");
        break;
    }
    case 276257:
    {
        returnValue = F("Sauerhöfle");
        break;
    }
    case 276258:
    {
        returnValue = F("Sauerkampstr.");
        break;
    }
    case 276259:
    {
        returnValue = F("Sauerkirschenallee");
        break;
    }
    case 276260:
    {
        returnValue = F("Sauerkirschenweg");
        break;
    }
    case 276261:
    {
        returnValue = F("Sauerkreisel");
        break;
    }
    case 276262:
    {
        returnValue = F("Sauerlacher Str.");
        break;
    }
    case 276263:
    {
        returnValue = F("Sauerland Radring");
        break;
    }
    case 276264:
    {
        returnValue = F("Sauerland-Pyramiden");
        break;
    }
    case 276265:
    {
        returnValue = F("Sauerlandpark Hemer");
        break;
    }
    case 276266:
    {
        returnValue = F("Sauerlandring");
        break;
    }
    case 276267:
    {
        returnValue = F("Sauerlandstr.");
        break;
    }
    case 276268:
    {
        returnValue = F("Sauerlandweg");
        break;
    }
    case 276269:
    {
        returnValue = F("Sauerlochweg");
        break;
    }
    case 276270:
    {
        returnValue = F("Sauerländer Str.");
        break;
    }
    case 276271:
    {
        returnValue = F("Sauerländer Weg");
        break;
    }
    case 276272:
    {
        returnValue = F("Sauerländig");
        break;
    }
    case 276273:
    {
        returnValue = F("Sauermannstr.");
        break;
    }
    case 276274:
    {
        returnValue = F("Sauermannweg");
        break;
    }
    case 276275:
    {
        returnValue = F("Sauernbeeksweg");
        break;
    }
    case 276276:
    {
        returnValue = F("Sauernbrink");
        break;
    }
    case 276277:
    {
        returnValue = F("Sauernfeldweg");
        break;
    }
    case 276278:
    {
        returnValue = F("Sauerngasse");
        break;
    }
    case 276279:
    {
        returnValue = F("Sauernheim");
        break;
    }
    case 276280:
    {
        returnValue = F("Sauernlohe");
        break;
    }
    case 276281:
    {
        returnValue = F("Sauernweg");
        break;
    }
    case 276282:
    {
        returnValue = F("Sauerplätze");
        break;
    }
    case 276283:
    {
        returnValue = F("Sauers Weiden");
        break;
    }
    case 276284:
    {
        returnValue = F("Sauersberg");
        break;
    }
    case 276285:
    {
        returnValue = F("Sauersbergstr.");
        break;
    }
    case 276286:
    {
        returnValue = F("Sauersbuck");
        break;
    }
    case 276287:
    {
        returnValue = F("Sauersgrund");
        break;
    }
    case 276288:
    {
        returnValue = F("Sauersgäßchen");
        break;
    }
    case 276289:
    {
        returnValue = F("Sauerskampweg");
        break;
    }
    case 276290:
    {
        returnValue = F("Sauersmühle");
        break;
    }
    case 276291:
    {
        returnValue = F("Sauerstaden");
        break;
    }
    case 276292:
    {
        returnValue = F("Sauersteinweg");
        break;
    }
    case 276293:
    {
        returnValue = F("Sauerstr.");
        break;
    }
    case 276294:
    {
        returnValue = F("Sauerstückenweg");
        break;
    }
    case 276295:
    {
        returnValue = F("Sauersweg");
        break;
    }
    case 276296:
    {
        returnValue = F("Sauertalstr.");
        break;
    }
    case 276297:
    {
        returnValue = F("Sauertalsweg");
        break;
    }
    case 276298:
    {
        returnValue = F("Sauerwaldweg");
        break;
    }
    case 276299:
    {
        returnValue = F("Sauerwasserweg");
        break;
    }
    case 276300:
    {
        returnValue = F("Sauerweg");
        break;
    }
    case 276301:
    {
        returnValue = F("Sauerweinstr.");
        break;
    }
    case 276302:
    {
        returnValue = F("Sauerwerder Rundweg");
        break;
    }
    case 276303:
    {
        returnValue = F("Sauerwies");
        break;
    }
    case 276304:
    {
        returnValue = F("Sauerwiese");
        break;
    }
    case 276305:
    {
        returnValue = F("Sauerwiesen");
        break;
    }
    case 276306:
    {
        returnValue = F("Sauerwiesenstr.");
        break;
    }
    case 276307:
    {
        returnValue = F("Sauerwiesenweg");
        break;
    }
    case 276308:
    {
        returnValue = F("Sauerwiesweg");
        break;
    }
    case 276309:
    {
        returnValue = F("Sauerzapfstr.");
        break;
    }
    case 276310:
    {
        returnValue = F("Saufang");
        break;
    }
    case 276311:
    {
        returnValue = F("Saufang-Schneise");
        break;
    }
    case 276312:
    {
        returnValue = F("Saufangallee");
        break;
    }
    case 276313:
    {
        returnValue = F("Saufangstr.");
        break;
    }
    case 276314:
    {
        returnValue = F("Saufangsträßle");
        break;
    }
    case 276315:
    {
        returnValue = F("Saufangweg");
        break;
    }
    case 276316:
    {
        returnValue = F("Saufert");
        break;
    }
    case 276317:
    {
        returnValue = F("Saugarten");
        break;
    }
    case 276318:
    {
        returnValue = F("Saugartenallee");
        break;
    }
    case 276319:
    {
        returnValue = F("Saugartengestell");
        break;
    }
    case 276320:
    {
        returnValue = F("Saugartenschneise");
        break;
    }
    case 276321:
    {
        returnValue = F("Saugartenweg");
        break;
    }
    case 276322:
    {
        returnValue = F("Saugass");
        break;
    }
    case 276323:
    {
        returnValue = F("Saugasse");
        break;
    }
    case 276324:
    {
        returnValue = F("Saugatter Weg");
        break;
    }
    case 276325:
    {
        returnValue = F("Saugehegeweg");
        break;
    }
    case 276326:
    {
        returnValue = F("Saugendorf");
        break;
    }
    case 276327:
    {
        returnValue = F("Sauggarter Str.");
        break;
    }
    case 276328:
    {
        returnValue = F("Saugraben");
        break;
    }
    case 276329:
    {
        returnValue = F("Saugrabenweg");
        break;
    }
    case 276330:
    {
        returnValue = F("Saugrund");
        break;
    }
    case 276331:
    {
        returnValue = F("Saugrundweg");
        break;
    }
    case 276332:
    {
        returnValue = F("Saugründleweg");
        break;
    }
    case 276333:
    {
        returnValue = F("Saugäßle");
        break;
    }
    case 276334:
    {
        returnValue = F("Sauhagstr.");
        break;
    }
    case 276335:
    {
        returnValue = F("Sauhagsträßchen");
        break;
    }
    case 276336:
    {
        returnValue = F("Sauhagsträßle");
        break;
    }
    case 276337:
    {
        returnValue = F("Sauhagtraufweg");
        break;
    }
    case 276338:
    {
        returnValue = F("Sauhagweg");
        break;
    }
    case 276339:
    {
        returnValue = F("Sauhalsgasse");
        break;
    }
    case 276340:
    {
        returnValue = F("Sauhausweg");
        break;
    }
    case 276341:
    {
        returnValue = F("Sauhofsweg");
        break;
    }
    case 276342:
    {
        returnValue = F("Sauhohl");
        break;
    }
    case 276343:
    {
        returnValue = F("Sauhohle");
        break;
    }
    case 276344:
    {
        returnValue = F("Sauhutenweg");
        break;
    }
    case 276345:
    {
        returnValue = F("Sauhäglesweg");
        break;
    }
    case 276346:
    {
        returnValue = F("Sauhäuseltalweg");
        break;
    }
    case 276347:
    {
        returnValue = F("Sauhülbenweg");
        break;
    }
    case 276348:
    {
        returnValue = F("Sauhüttenweg");
        break;
    }
    case 276349:
    {
        returnValue = F("Saukesselweg");
        break;
    }
    case 276350:
    {
        returnValue = F("Sauklinge");
        break;
    }
    case 276351:
    {
        returnValue = F("Sauklingensträßle");
        break;
    }
    case 276352:
    {
        returnValue = F("Sauklingenweg");
        break;
    }
    case 276353:
    {
        returnValue = F("Saukopf Schneise");
        break;
    }
    case 276354:
    {
        returnValue = F("Saukopfbrücke");
        break;
    }
    case 276355:
    {
        returnValue = F("Saukopfflügel");
        break;
    }
    case 276356:
    {
        returnValue = F("Saukopfweg");
        break;
    }
    case 276357:
    {
        returnValue = F("Saulach");
        break;
    }
    case 276358:
    {
        returnValue = F("Saulachenweg");
        break;
    }
    case 276359:
    {
        returnValue = F("Saulachsträßchen");
        break;
    }
    case 276360:
    {
        returnValue = F("Saulachweg");
        break;
    }
    case 276361:
    {
        returnValue = F("Saulackerweg");
        break;
    }
    case 276362:
    {
        returnValue = F("Saulagerweg");
        break;
    }
    case 276363:
    {
        returnValue = F("Saulauf");
        break;
    }
    case 276364:
    {
        returnValue = F("Sauldorfer Str.");
        break;
    }
    case 276365:
    {
        returnValue = F("Saulengrainer Str.");
        break;
    }
    case 276366:
    {
        returnValue = F("Saulgasse");
        break;
    }
    case 276367:
    {
        returnValue = F("Saulgauer Str.");
        break;
    }
    case 276368:
    {
        returnValue = F("Saulgauer Weg");
        break;
    }
    case 276369:
    {
        returnValue = F("Saulgruber Mühle");
        break;
    }
    case 276370:
    {
        returnValue = F("Saulgruber Str.");
        break;
    }
    case 276371:
    {
        returnValue = F("Saulheimer Pfad");
        break;
    }
    case 276372:
    {
        returnValue = F("Saulheimer Str.");
        break;
    }
    case 276373:
    {
        returnValue = F("Saulheimer Weg");
        break;
    }
    case 276374:
    {
        returnValue = F("Saulieustr.");
        break;
    }
    case 276375:
    {
        returnValue = F("Saulochsträßchen");
        break;
    }
    case 276376:
    {
        returnValue = F("Saulochweg");
        break;
    }
    case 276377:
    {
        returnValue = F("Saulsiek");
        break;
    }
    case 276378:
    {
        returnValue = F("Saulxuresstr.");
        break;
    }
    case 276379:
    {
        returnValue = F("Saulägerweg");
        break;
    }
    case 276380:
    {
        returnValue = F("Saulöcherweg");
        break;
    }
    case 276381:
    {
        returnValue = F("Saulückeweg");
        break;
    }
    case 276382:
    {
        returnValue = F("Saum");
        break;
    }
    case 276383:
    {
        returnValue = F("Saumagenschneise");
        break;
    }
    case 276384:
    {
        returnValue = F("Saumahdbrunnen-Weg");
        break;
    }
    case 276385:
    {
        returnValue = F("Saumahdweg");
        break;
    }
    case 276386:
    {
        returnValue = F("Saumarkt");
        break;
    }
    case 276387:
    {
        returnValue = F("Saumehlsweg");
        break;
    }
    case 276388:
    {
        returnValue = F("Saumer");
        break;
    }
    case 276389:
    {
        returnValue = F("Saumergasse");
        break;
    }
    case 276390:
    {
        returnValue = F("Saumerhöfe");
        break;
    }
    case 276391:
    {
        returnValue = F("Saumerweg");
        break;
    }
    case 276392:
    {
        returnValue = F("Saumfeldstr.");
        break;
    }
    case 276393:
    {
        returnValue = F("Saumgartenweg");
        break;
    }
    case 276394:
    {
        returnValue = F("Saumißstr.");
        break;
    }
    case 276395:
    {
        returnValue = F("Saumißweg");
        break;
    }
    case 276396:
    {
        returnValue = F("Saumseligkeitsweg");
        break;
    }
    case 276397:
    {
        returnValue = F("Saumstr.");
        break;
    }
    case 276398:
    {
        returnValue = F("Saumurplatz");
        break;
    }
    case 276399:
    {
        returnValue = F("Saumweg");
        break;
    }
    case 276400:
    {
        returnValue = F("Saumwiesen");
        break;
    }
    case 276401:
    {
        returnValue = F("Saumwiesenweg");
        break;
    }
    case 276402:
    {
        returnValue = F("Saumäckerstr.");
        break;
    }
    case 276403:
    {
        returnValue = F("Saunagarten");
        break;
    }
    case 276404:
    {
        returnValue = F("Saunaring");
        break;
    }
    case 276405:
    {
        returnValue = F("Saunaweg");
        break;
    }
    case 276406:
    {
        returnValue = F("Saunsstr.");
        break;
    }
    case 276407:
    {
        returnValue = F("Saunweg");
        break;
    }
    case 276408:
    {
        returnValue = F("Saupersdorfer Str.");
        break;
    }
    case 276409:
    {
        returnValue = F("Saupersdorfer Weg");
        break;
    }
    case 276410:
    {
        returnValue = F("Saupfad");
        break;
    }
    case 276411:
    {
        returnValue = F("Saupfercheckweg");
        break;
    }
    case 276412:
    {
        returnValue = F("Saupferchsackweg");
        break;
    }
    case 276413:
    {
        returnValue = F("Saupferchtal");
        break;
    }
    case 276414:
    {
        returnValue = F("Saupferchweg");
        break;
    }
    case 276415:
    {
        returnValue = F("Saupfergallee");
        break;
    }
    case 276416:
    {
        returnValue = F("Saupfuhlenweg");
        break;
    }
    case 276417:
    {
        returnValue = F("Saupfuhlweg");
        break;
    }
    case 276418:
    {
        returnValue = F("Saupfützenweg");
        break;
    }
    case 276419:
    {
        returnValue = F("Sauplattenbrückle");
        break;
    }
    case 276420:
    {
        returnValue = F("Sauplatz");
        break;
    }
    case 276421:
    {
        returnValue = F("Sauplatzweg");
        break;
    }
    case 276422:
    {
        returnValue = F("Saupsdorfer Str.");
        break;
    }
    case 276423:
    {
        returnValue = F("Saupsdorfer Streuweg");
        break;
    }
    case 276424:
    {
        returnValue = F("Saupsdorfer Weg");
        break;
    }
    case 276425:
    {
        returnValue = F("Saurainsträssle");
        break;
    }
    case 276426:
    {
        returnValue = F("Saurainsträßle");
        break;
    }
    case 276427:
    {
        returnValue = F("Saurand");
        break;
    }
    case 276428:
    {
        returnValue = F("Saurangen");
        break;
    }
    case 276429:
    {
        returnValue = F("Sauranger");
        break;
    }
    case 276430:
    {
        returnValue = F("Sauransträßle");
        break;
    }
    case 276431:
    {
        returnValue = F("Saurbornstr.");
        break;
    }
    case 276432:
    {
        returnValue = F("Saure Allee");
        break;
    }
    case 276433:
    {
        returnValue = F("Saure Au");
        break;
    }
    case 276434:
    {
        returnValue = F("Saure Breite");
        break;
    }
    case 276435:
    {
        returnValue = F("Saure Gasse");
        break;
    }
    case 276436:
    {
        returnValue = F("Saure Plecke");
        break;
    }
    case 276437:
    {
        returnValue = F("Saure Wiese");
        break;
    }
    case 276438:
    {
        returnValue = F("Saure Wiesen");
        break;
    }
    case 276439:
    {
        returnValue = F("Saurechstr.");
        break;
    }
    case 276440:
    {
        returnValue = F("Saurengreinswinkel");
        break;
    }
    case 276441:
    {
        returnValue = F("Saurenhau Str.");
        break;
    }
    case 276442:
    {
        returnValue = F("Saurenhaus");
        break;
    }
    case 276443:
    {
        returnValue = F("Saurenkamp");
        break;
    }
    case 276444:
    {
        returnValue = F("Saurensgasse");
        break;
    }
    case 276445:
    {
        returnValue = F("Saures Feld");
        break;
    }
    case 276446:
    {
        returnValue = F("Saureuteweg");
        break;
    }
    case 276447:
    {
        returnValue = F("Saurier-Erlebnispfad");
        break;
    }
    case 276448:
    {
        returnValue = F("Sauriergarten");
        break;
    }
    case 276449:
    {
        returnValue = F("Saurierpark Kleinwelka");
        break;
    }
    case 276450:
    {
        returnValue = F("Sauruckenweg");
        break;
    }
    case 276451:
    {
        returnValue = F("Saurücken");
        break;
    }
    case 276452:
    {
        returnValue = F("Saurückenhangsträßle");
        break;
    }
    case 276453:
    {
        returnValue = F("Sauschlippe");
        break;
    }
    case 276454:
    {
        returnValue = F("Sauschneise");
        break;
    }
    case 276455:
    {
        returnValue = F("Sauschütt-Geräumt");
        break;
    }
    case 276456:
    {
        returnValue = F("Sausedlitzer Str.");
        break;
    }
    case 276457:
    {
        returnValue = F("Sauselestr.");
        break;
    }
    case 276458:
    {
        returnValue = F("Sausenburgweg");
        break;
    }
    case 276459:
    {
        returnValue = F("Sausenheimer Str.");
        break;
    }
    case 276460:
    {
        returnValue = F("Sausenhofen");
        break;
    }
    case 276461:
    {
        returnValue = F("Sausenhofener Weg");
        break;
    }
    case 276462:
    {
        returnValue = F("Sausenthalstr.");
        break;
    }
    case 276463:
    {
        returnValue = F("Sausenwiesen");
        break;
    }
    case 276464:
    {
        returnValue = F("Sauserberg");
        break;
    }
    case 276465:
    {
        returnValue = F("Sauserhof");
        break;
    }
    case 276466:
    {
        returnValue = F("Sauserweg");
        break;
    }
    case 276467:
    {
        returnValue = F("Saustall Weg");
        break;
    }
    case 276468:
    {
        returnValue = F("Saustallschlagweg");
        break;
    }
    case 276469:
    {
        returnValue = F("Saustallschneise");
        break;
    }
    case 276470:
    {
        returnValue = F("Saustallstr.");
        break;
    }
    case 276471:
    {
        returnValue = F("Saustallweg");
        break;
    }
    case 276472:
    {
        returnValue = F("Sausteg");
        break;
    }
    case 276473:
    {
        returnValue = F("Saustegerweg");
        break;
    }
    case 276474:
    {
        returnValue = F("Saustegschneise");
        break;
    }
    case 276475:
    {
        returnValue = F("Sausteig");
        break;
    }
    case 276476:
    {
        returnValue = F("Sausteige");
        break;
    }
    case 276477:
    {
        returnValue = F("Sausteigschneise");
        break;
    }
    case 276478:
    {
        returnValue = F("Sausthal");
        break;
    }
    case 276479:
    {
        returnValue = F("Saustichweg");
        break;
    }
    case 276480:
    {
        returnValue = F("Saustiege");
        break;
    }
    case 276481:
    {
        returnValue = F("Saustiegschneise");
        break;
    }
    case 276482:
    {
        returnValue = F("Saustrup-Lück");
        break;
    }
    case 276483:
    {
        returnValue = F("Sausträßle");
        break;
    }
    case 276484:
    {
        returnValue = F("Sausulchweg");
        break;
    }
    case 276485:
    {
        returnValue = F("Sausuttenweg");
        break;
    }
    case 276486:
    {
        returnValue = F("Sautalstr.");
        break;
    }
    case 276487:
    {
        returnValue = F("Sautalweg");
        break;
    }
    case 276488:
    {
        returnValue = F("Sauteichallee");
        break;
    }
    case 276489:
    {
        returnValue = F("Sauteichplanie");
        break;
    }
    case 276490:
    {
        returnValue = F("Sauteichstr.");
        break;
    }
    case 276491:
    {
        returnValue = F("Sauteichsträssle");
        break;
    }
    case 276492:
    {
        returnValue = F("Sauteichsträßle");
        break;
    }
    case 276493:
    {
        returnValue = F("Sauteichweg");
        break;
    }
    case 276494:
    {
        returnValue = F("Sauteler Weg");
        break;
    }
    case 276495:
    {
        returnValue = F("Sautener Str.");
        break;
    }
    case 276496:
    {
        returnValue = F("Sautenlehen");
        break;
    }
    case 276497:
    {
        returnValue = F("Sautenser Str.");
        break;
    }
    case 276498:
    {
        returnValue = F("Sautergässle");
        break;
    }
    case 276499:
    {
        returnValue = F("Sauterleutestr.");
        break;
    }
    case 276500:
    {
        returnValue = F("Sauterstr.");
        break;
    }
    case 276501:
    {
        returnValue = F("Sautierstr.");
        break;
    }
    case 276502:
    {
        returnValue = F("Sautreibergasse");
        break;
    }
    case 276503:
    {
        returnValue = F("Sautreiberweg");
        break;
    }
    case 276504:
    {
        returnValue = F("Sautriebweg");
        break;
    }
    case 276505:
    {
        returnValue = F("Sautriftweg");
        break;
    }
    case 276506:
    {
        returnValue = F("Sautrogweg");
        break;
    }
    case 276507:
    {
        returnValue = F("Sautsch");
        break;
    }
    case 276508:
    {
        returnValue = F("Sauvageodstr.");
        break;
    }
    case 276509:
    {
        returnValue = F("Sauveterrer Str.");
        break;
    }
    case 276510:
    {
        returnValue = F("Sauwaidweg");
        break;
    }
    case 276511:
    {
        returnValue = F("Sauwaldsträßchen");
        break;
    }
    case 276512:
    {
        returnValue = F("Sauwaldweg");
        break;
    }
    case 276513:
    {
        returnValue = F("Sauwasen");
        break;
    }
    case 276514:
    {
        returnValue = F("Sauwechselallee");
        break;
    }
    case 276515:
    {
        returnValue = F("Sauwechselweg");
        break;
    }
    case 276516:
    {
        returnValue = F("Sauweg");
        break;
    }
    case 276517:
    {
        returnValue = F("Sauweidenweg");
        break;
    }
    case 276518:
    {
        returnValue = F("Sauweideweg");
        break;
    }
    case 276519:
    {
        returnValue = F("Sauweidweg");
        break;
    }
    case 276520:
    {
        returnValue = F("Sauwiese");
        break;
    }
    case 276521:
    {
        returnValue = F("Sauwiesen");
        break;
    }
    case 276522:
    {
        returnValue = F("Sauwiesengrund");
        break;
    }
    case 276523:
    {
        returnValue = F("Sauwiesenschneise");
        break;
    }
    case 276524:
    {
        returnValue = F("Sauwiesenweg");
        break;
    }
    case 276525:
    {
        returnValue = F("Sauziner Str.");
        break;
    }
    case 276526:
    {
        returnValue = F("Sauziner Weg");
        break;
    }
    case 276527:
    {
        returnValue = F("Saußbachklamm");
        break;
    }
    case 276528:
    {
        returnValue = F("Saußbachstr.");
        break;
    }
    case 276529:
    {
        returnValue = F("Saußbachweg");
        break;
    }
    case 276530:
    {
        returnValue = F("Savannenweg");
        break;
    }
    case 276531:
    {
        returnValue = F("Savellistr.");
        break;
    }
    case 276532:
    {
        returnValue = F("Savelshang");
        break;
    }
    case 276533:
    {
        returnValue = F("Savelstr.");
        break;
    }
    case 276534:
    {
        returnValue = F("Saverner Str.");
        break;
    }
    case 276535:
    {
        returnValue = F("Saverner Weg");
        break;
    }
    case 276536:
    {
        returnValue = F("Saverneweg");
        break;
    }
    case 276537:
    {
        returnValue = F("Saversdyck");
        break;
    }
    case 276538:
    {
        returnValue = F("Savignanogasse");
        break;
    }
    case 276539:
    {
        returnValue = F("Savignyring");
        break;
    }
    case 276540:
    {
        returnValue = F("Savignystr.");
        break;
    }
    case 276541:
    {
        returnValue = F("Savonastr.");
        break;
    }
    case 276542:
    {
        returnValue = F("Savoyardenstr.");
        break;
    }
    case 276543:
    {
        returnValue = F("Savoyen-Ring");
        break;
    }
    case 276544:
    {
        returnValue = F("Savoyenpark");
        break;
    }
    case 276545:
    {
        returnValue = F("Savoyenring");
        break;
    }
    case 276546:
    {
        returnValue = F("Savoyenstr.");
        break;
    }
    case 276547:
    {
        returnValue = F("Savoyer Weg");
        break;
    }
    case 276548:
    {
        returnValue = F("Savoyestr.");
        break;
    }
    case 276549:
    {
        returnValue = F("Sawadestr.");
        break;
    }
    case 276550:
    {
        returnValue = F("Sawaller Dorfstr.");
        break;
    }
    case 276551:
    {
        returnValue = F("Sawaller Str.");
        break;
    }
    case 276552:
    {
        returnValue = F("Sawallstr.");
        break;
    }
    case 276553:
    {
        returnValue = F("Saxbergstr.");
        break;
    }
    case 276554:
    {
        returnValue = F("Saxdorfer Str.");
        break;
    }
    case 276555:
    {
        returnValue = F("Saxenkam");
        break;
    }
    case 276556:
    {
        returnValue = F("Saxhorn");
        break;
    }
    case 276557:
    {
        returnValue = F("Saxhuberweg");
        break;
    }
    case 276558:
    {
        returnValue = F("Saxonia");
        break;
    }
    case 276559:
    {
        returnValue = F("Saxoniastr.");
        break;
    }
    case 276560:
    {
        returnValue = F("Saxoniaweg");
        break;
    }
    case 276561:
    {
        returnValue = F("Saxtorfer Weg");
        break;
    }
    case 276562:
    {
        returnValue = F("Saxumer Ring");
        break;
    }
    case 276563:
    {
        returnValue = F("Saxumer Str.");
        break;
    }
    case 276564:
    {
        returnValue = F("Saydaer Str.");
        break;
    }
    case 276565:
    {
        returnValue = F("Saydaer Weg");
        break;
    }
    case 276566:
    {
        returnValue = F("Sayenstr.");
        break;
    }
    case 276567:
    {
        returnValue = F("Sayn'scher Hof");
        break;
    }
    case 276568:
    {
        returnValue = F("Saynbachstr.");
        break;
    }
    case 276569:
    {
        returnValue = F("Saynbuschweg");
        break;
    }
    case 276570:
    {
        returnValue = F("Sayner Landstr.");
        break;
    }
    case 276571:
    {
        returnValue = F("Sayner Str.");
        break;
    }
    case 276572:
    {
        returnValue = F("Sayner Weg");
        break;
    }
    case 276573:
    {
        returnValue = F("Saynerhahnstr.");
        break;
    }
    case 276574:
    {
        returnValue = F("Saynhofstr.");
        break;
    }
    case 276575:
    {
        returnValue = F("Saynische Str.");
        break;
    }
    case 276576:
    {
        returnValue = F("Saynstr.");
        break;
    }
    case 276577:
    {
        returnValue = F("Sayntalstr.");
        break;
    }
    case 276578:
    {
        returnValue = F("Saynwaldstr.");
        break;
    }
    case 276579:
    {
        returnValue = F("Saßbach");
        break;
    }
    case 276580:
    {
        returnValue = F("Saßelhofweg");
        break;
    }
    case 276581:
    {
        returnValue = F("Saßlage");
        break;
    }
    case 276582:
    {
        returnValue = F("Saßlinge");
        break;
    }
    case 276583:
    {
        returnValue = F("Saßmannsweg");
        break;
    }
    case 276584:
    {
        returnValue = F("Saßmicker Hammer");
        break;
    }
    case 276585:
    {
        returnValue = F("Saßmicker Str.");
        break;
    }
    case 276586:
    {
        returnValue = F("Saßnitzer Str.");
        break;
    }
    case 276587:
    {
        returnValue = F("Saßnitzer Weg");
        break;
    }
    case 276588:
    {
        returnValue = F("Saßnitzring");
        break;
    }
    case 276589:
    {
        returnValue = F("Saßweiherstr.");
        break;
    }
    case 276590:
    {
        returnValue = F("Scabellstr.");
        break;
    }
    case 276591:
    {
        returnValue = F("Scadoer Str.");
        break;
    }
    case 276592:
    {
        returnValue = F("Scala Biergarten");
        break;
    }
    case 276593:
    {
        returnValue = F("Scambachring");
        break;
    }
    case 276594:
    {
        returnValue = F("Scandinavian-Park");
        break;
    }
    case 276595:
    {
        returnValue = F("Scanzonistr.");
        break;
    }
    case 276596:
    {
        returnValue = F("Scariastr.");
        break;
    }
    case 276597:
    {
        returnValue = F("Scarletallee");
        break;
    }
    case 276598:
    {
        returnValue = F("Scarlinoweg");
        break;
    }
    case 276599:
    {
        returnValue = F("Sceaux-Platz");
        break;
    }
    case 276600:
    {
        returnValue = F("Schaacksche Halbinsel");
        break;
    }
    case 276601:
    {
        returnValue = F("Schaadweg");
        break;
    }
    case 276602:
    {
        returnValue = F("Schaafberg");
        break;
    }
    case 276603:
    {
        returnValue = F("Schaafbusch");
        break;
    }
    case 276604:
    {
        returnValue = F("Schaafdrift");
        break;
    }
    case 276605:
    {
        returnValue = F("Schaafeckstr.");
        break;
    }
    case 276606:
    {
        returnValue = F("Schaafenmühle");
        break;
    }
    case 276607:
    {
        returnValue = F("Schaafenstr.");
        break;
    }
    case 276608:
    {
        returnValue = F("Schaaffhausenstr.");
        break;
    }
    case 276609:
    {
        returnValue = F("Schaafgasse");
        break;
    }
    case 276610:
    {
        returnValue = F("Schaafhausen");
        break;
    }
    case 276611:
    {
        returnValue = F("Schaafhausweg");
        break;
    }
    case 276612:
    {
        returnValue = F("Schaafheimer Str.");
        break;
    }
    case 276613:
    {
        returnValue = F("Schaafheimer Weg");
        break;
    }
    case 276614:
    {
        returnValue = F("Schaafhof");
        break;
    }
    case 276615:
    {
        returnValue = F("Schaafrippel");
        break;
    }
    case 276616:
    {
        returnValue = F("Schaafsweg");
        break;
    }
    case 276617:
    {
        returnValue = F("Schaafweg");
        break;
    }
    case 276618:
    {
        returnValue = F("Schaafweide");
        break;
    }
    case 276619:
    {
        returnValue = F("Schaagbachstr.");
        break;
    }
    case 276620:
    {
        returnValue = F("Schaager Str.");
        break;
    }
    case 276621:
    {
        returnValue = F("Schaagring");
        break;
    }
    case 276622:
    {
        returnValue = F("Schaal");
        break;
    }
    case 276623:
    {
        returnValue = F("Schaalaer Chaussee");
        break;
    }
    case 276624:
    {
        returnValue = F("Schaalhofstr.");
        break;
    }
    case 276625:
    {
        returnValue = F("Schaalmühle");
        break;
    }
    case 276626:
    {
        returnValue = F("Schaalseehang");
        break;
    }
    case 276627:
    {
        returnValue = F("Schaalseepark");
        break;
    }
    case 276628:
    {
        returnValue = F("Schaalseeufer");
        break;
    }
    case 276629:
    {
        returnValue = F("Schaalseeweg");
        break;
    }
    case 276630:
    {
        returnValue = F("Schaalstr.");
        break;
    }
    case 276631:
    {
        returnValue = F("Schaalwiese");
        break;
    }
    case 276632:
    {
        returnValue = F("Schaan");
        break;
    }
    case 276633:
    {
        returnValue = F("Schaapbrügg");
        break;
    }
    case 276634:
    {
        returnValue = F("Schaaperstieg");
        break;
    }
    case 276635:
    {
        returnValue = F("Schaaphausstr.");
        break;
    }
    case 276636:
    {
        returnValue = F("Schaapkamp");
        break;
    }
    case 276637:
    {
        returnValue = F("Schaapkoppel");
        break;
    }
    case 276638:
    {
        returnValue = F("Schaapsdrift");
        break;
    }
    case 276639:
    {
        returnValue = F("Schaapskoppel");
        break;
    }
    case 276640:
    {
        returnValue = F("Schaapskovenweg");
        break;
    }
    case 276641:
    {
        returnValue = F("Schaapstr.");
        break;
    }
    case 276642:
    {
        returnValue = F("Schaapwaschweg");
        break;
    }
    case 276643:
    {
        returnValue = F("Schaar");
        break;
    }
    case 276644:
    {
        returnValue = F("Schaarackerweg");
        break;
    }
    case 276645:
    {
        returnValue = F("Schaarberg");
        break;
    }
    case 276646:
    {
        returnValue = F("Schaarbusch");
        break;
    }
    case 276647:
    {
        returnValue = F("Schaardeich");
        break;
    }
    case 276648:
    {
        returnValue = F("Schaardieksholt");
        break;
    }
    case 276649:
    {
        returnValue = F("Schaardreieck");
        break;
    }
    case 276650:
    {
        returnValue = F("Schaarener Weg");
        break;
    }
    case 276651:
    {
        returnValue = F("Schaarenstr.");
        break;
    }
    case 276652:
    {
        returnValue = F("Schaarfgreet");
        break;
    }
    case 276653:
    {
        returnValue = F("Schaarhof");
        break;
    }
    case 276654:
    {
        returnValue = F("Schaarplatz");
        break;
    }
    case 276655:
    {
        returnValue = F("Schaarredder");
        break;
    }
    case 276656:
    {
        returnValue = F("Schaarreihe");
        break;
    }
    case 276657:
    {
        returnValue = F("Schaarstr.");
        break;
    }
    case 276658:
    {
        returnValue = F("Schaarteich");
        break;
    }
    case 276659:
    {
        returnValue = F("Schaartmarktstr.");
        break;
    }
    case 276660:
    {
        returnValue = F("Schaartweg");
        break;
    }
    case 276661:
    {
        returnValue = F("Schaarweg");
        break;
    }
    case 276662:
    {
        returnValue = F("Schaarwisch");
        break;
    }
    case 276663:
    {
        returnValue = F("Schaarwändeweg");
        break;
    }
    case 276664:
    {
        returnValue = F("Schaarz");
        break;
    }
    case 276665:
    {
        returnValue = F("Schaasfeldstr.");
        break;
    }
    case 276666:
    {
        returnValue = F("Schabbecke");
        break;
    }
    case 276667:
    {
        returnValue = F("Schabelhof");
        break;
    }
    case 276668:
    {
        returnValue = F("Schabelweg");
        break;
    }
    case 276669:
    {
        returnValue = F("Schabengasse");
        break;
    }
    case 276670:
    {
        returnValue = F("Schabenhauser Str.");
        break;
    }
    case 276671:
    {
        returnValue = F("Schaber");
        break;
    }
    case 276672:
    {
        returnValue = F("Schaberfeld");
        break;
    }
    case 276673:
    {
        returnValue = F("Schaberger Str.");
        break;
    }
    case 276674:
    {
        returnValue = F("Schaberger Weg");
        break;
    }
    case 276675:
    {
        returnValue = F("Schabergweg");
        break;
    }
    case 276676:
    {
        returnValue = F("Schaberlache");
        break;
    }
    case 276677:
    {
        returnValue = F("Schaberlgasse");
        break;
    }
    case 276678:
    {
        returnValue = F("Schabernack");
        break;
    }
    case 276679:
    {
        returnValue = F("Schabernacker Berg");
        break;
    }
    case 276680:
    {
        returnValue = F("Schabernackstr.");
        break;
    }
    case 276681:
    {
        returnValue = F("Schaberschulstr.");
        break;
    }
    case 276682:
    {
        returnValue = F("Schaberweg");
        break;
    }
    case 276683:
    {
        returnValue = F("Schabhaldenweg");
        break;
    }
    case 276684:
    {
        returnValue = F("Schabigsmühle");
        break;
    }
    case 276685:
    {
        returnValue = F("Schabing");
        break;
    }
    case 276686:
    {
        returnValue = F("Schabingerweg");
        break;
    }
    case 276687:
    {
        returnValue = F("Schableckscher Weg");
        break;
    }
    case 276688:
    {
        returnValue = F("Schabliskerweg");
        break;
    }
    case 276689:
    {
        returnValue = F("Schablweg");
        break;
    }
    case 276690:
    {
        returnValue = F("Schabnerstr.");
        break;
    }
    case 276691:
    {
        returnValue = F("Schabringerstr.");
        break;
    }
    case 276692:
    {
        returnValue = F("Schabrockerweg");
        break;
    }
    case 276693:
    {
        returnValue = F("Schabroicher Weg");
        break;
    }
    case 276694:
    {
        returnValue = F("Schabweg");
        break;
    }
    case 276695:
    {
        returnValue = F("Schach(t)ertweg");
        break;
    }
    case 276696:
    {
        returnValue = F("Schacha");
        break;
    }
    case 276697:
    {
        returnValue = F("Schachaer Str.");
        break;
    }
    case 276698:
    {
        returnValue = F("Schachblumenring");
        break;
    }
    case 276699:
    {
        returnValue = F("Schachblumenweg");
        break;
    }
    case 276700:
    {
        returnValue = F("Schachbrett");
        break;
    }
    case 276701:
    {
        returnValue = F("Schachen");
        break;
    }
    case 276702:
    {
        returnValue = F("Schachenallee");
        break;
    }
    case 276703:
    {
        returnValue = F("Schachenaueler Str.");
        break;
    }
    case 276704:
    {
        returnValue = F("Schachenbronn");
        break;
    }
    case 276705:
    {
        returnValue = F("Schachenbühlstr.");
        break;
    }
    case 276706:
    {
        returnValue = F("Schachener Str.");
        break;
    }
    case 276707:
    {
        returnValue = F("Schachenfeld");
        break;
    }
    case 276708:
    {
        returnValue = F("Schachenhauweg");
        break;
    }
    case 276709:
    {
        returnValue = F("Schachenseeschneise");
        break;
    }
    case 276710:
    {
        returnValue = F("Schachenstr.");
        break;
    }
    case 276711:
    {
        returnValue = F("Schachentalweg");
        break;
    }
    case 276712:
    {
        returnValue = F("Schachenwaldstr.");
        break;
    }
    case 276713:
    {
        returnValue = F("Schachenweg");
        break;
    }
    case 276714:
    {
        returnValue = F("Schachenwiesen");
        break;
    }
    case 276715:
    {
        returnValue = F("Schachenäcker Weg");
        break;
    }
    case 276716:
    {
        returnValue = F("Schacher Str.");
        break;
    }
    case 276717:
    {
        returnValue = F("Schacherbauergeräumt");
        break;
    }
    case 276718:
    {
        returnValue = F("Schacherbuckweg");
        break;
    }
    case 276719:
    {
        returnValue = F("Schacherlstr.");
        break;
    }
    case 276720:
    {
        returnValue = F("Schacherstr.");
        break;
    }
    case 276721:
    {
        returnValue = F("Schacherweg");
        break;
    }
    case 276722:
    {
        returnValue = F("Schachet");
        break;
    }
    case 276723:
    {
        returnValue = F("Schachhaldenweg");
        break;
    }
    case 276724:
    {
        returnValue = F("Schachinger Weg");
        break;
    }
    case 276725:
    {
        returnValue = F("Schachl");
        break;
    }
    case 276726:
    {
        returnValue = F("Schachleiterstr.");
        break;
    }
    case 276727:
    {
        returnValue = F("Schachnerstr.");
        break;
    }
    case 276728:
    {
        returnValue = F("Schachselstr.");
        break;
    }
    case 276729:
    {
        returnValue = F("Schachstr.");
        break;
    }
    case 276730:
    {
        returnValue = F("Schacht");
        break;
    }
    case 276731:
    {
        returnValue = F("Schacht 3/4/7-Weg");
        break;
    }
    case 276732:
    {
        returnValue = F("Schacht I");
        break;
    }
    case 276733:
    {
        returnValue = F("Schacht II");
        break;
    }
    case 276734:
    {
        returnValue = F("Schacht III");
        break;
    }
    case 276735:
    {
        returnValue = F("Schacht Jakob");
        break;
    }
    case 276736:
    {
        returnValue = F("Schacht-Albert-Ring");
        break;
    }
    case 276737:
    {
        returnValue = F("Schacht-Dilsburg");
        break;
    }
    case 276738:
    {
        returnValue = F("Schacht-Franz-Str.");
        break;
    }
    case 276739:
    {
        returnValue = F("Schacht-Georg-Str.");
        break;
    }
    case 276740:
    {
        returnValue = F("Schacht-Georg-Weg");
        break;
    }
    case 276741:
    {
        returnValue = F("Schacht-IV-Str.");
        break;
    }
    case 276742:
    {
        returnValue = F("Schacht-Kronprinz-Str.");
        break;
    }
    case 276743:
    {
        returnValue = F("Schacht-König-Wilhelm 2");
        break;
    }
    case 276744:
    {
        returnValue = F("Schacht-Neu-Cöln");
        break;
    }
    case 276745:
    {
        returnValue = F("Schachtanlage");
        break;
    }
    case 276746:
    {
        returnValue = F("Schachtbauring");
        break;
    }
    case 276747:
    {
        returnValue = F("Schachtberg");
        break;
    }
    case 276748:
    {
        returnValue = F("Schachtbergstr.");
        break;
    }
    case 276749:
    {
        returnValue = F("Schachtblick");
        break;
    }
    case 276750:
    {
        returnValue = F("Schachtbreite");
        break;
    }
    case 276751:
    {
        returnValue = F("Schachtebeckweg");
        break;
    }
    case 276752:
    {
        returnValue = F("Schachtelbergstr.");
        break;
    }
    case 276753:
    {
        returnValue = F("Schachtelhalmweg");
        break;
    }
    case 276754:
    {
        returnValue = F("Schachtelwebersgäßchen");
        break;
    }
    case 276755:
    {
        returnValue = F("Schachten");
        break;
    }
    case 276756:
    {
        returnValue = F("Schachtenbachweg");
        break;
    }
    case 276757:
    {
        returnValue = F("Schachtenbeck");
        break;
    }
    case 276758:
    {
        returnValue = F("Schachtenberg");
        break;
    }
    case 276759:
    {
        returnValue = F("Schachtener Str.");
        break;
    }
    case 276760:
    {
        returnValue = F("Schachtenstr.");
        break;
    }
    case 276761:
    {
        returnValue = F("Schachtenweg");
        break;
    }
    case 276762:
    {
        returnValue = F("Schachtenöd");
        break;
    }
    case 276763:
    {
        returnValue = F("Schachter Str.");
        break;
    }
    case 276764:
    {
        returnValue = F("Schachterbusch");
        break;
    }
    case 276765:
    {
        returnValue = F("Schachtgasse");
        break;
    }
    case 276766:
    {
        returnValue = F("Schachtgelände");
        break;
    }
    case 276767:
    {
        returnValue = F("Schachthof");
        break;
    }
    case 276768:
    {
        returnValue = F("Schachtholzweg");
        break;
    }
    case 276769:
    {
        returnValue = F("Schachthöhe");
        break;
    }
    case 276770:
    {
        returnValue = F("Schachtkuhle");
        break;
    }
    case 276771:
    {
        returnValue = F("Schachtl");
        break;
    }
    case 276772:
    {
        returnValue = F("Schachtmeisterstr.");
        break;
    }
    case 276773:
    {
        returnValue = F("Schachtmühle");
        break;
    }
    case 276774:
    {
        returnValue = F("Schachtner Feld");
        break;
    }
    case 276775:
    {
        returnValue = F("Schachtplatz");
        break;
    }
    case 276776:
    {
        returnValue = F("Schachtsiedlung");
        break;
    }
    case 276777:
    {
        returnValue = F("Schachtsstr.");
        break;
    }
    case 276778:
    {
        returnValue = F("Schachtstr.");
        break;
    }
    case 276779:
    {
        returnValue = F("Schachtweg");
        break;
    }
    case 276780:
    {
        returnValue = F("Schackauer Weg");
        break;
    }
    case 276781:
    {
        returnValue = F("Schacke");
        break;
    }
    case 276782:
    {
        returnValue = F("Schacke-Wall");
        break;
    }
    case 276783:
    {
        returnValue = F("Schackenburger Str.");
        break;
    }
    case 276784:
    {
        returnValue = F("Schackenbuschbahn");
        break;
    }
    case 276785:
    {
        returnValue = F("Schackendorfer Str.");
        break;
    }
    case 276786:
    {
        returnValue = F("Schackendorfer Weg");
        break;
    }
    case 276787:
    {
        returnValue = F("Schackenkamp");
        break;
    }
    case 276788:
    {
        returnValue = F("Schackensleber Str.");
        break;
    }
    case 276789:
    {
        returnValue = F("Schackensleber Weg");
        break;
    }
    case 276790:
    {
        returnValue = F("Schackenstr.");
        break;
    }
    case 276791:
    {
        returnValue = F("Schackental");
        break;
    }
    case 276792:
    {
        returnValue = F("Schackenteichweg");
        break;
    }
    case 276793:
    {
        returnValue = F("Schackenthal");
        break;
    }
    case 276794:
    {
        returnValue = F("Schackenthaler Str.");
        break;
    }
    case 276795:
    {
        returnValue = F("Schacks Twieten");
        break;
    }
    case 276796:
    {
        returnValue = F("Schacksdorfer Str.");
        break;
    }
    case 276797:
    {
        returnValue = F("Schackstedter Str.");
        break;
    }
    case 276798:
    {
        returnValue = F("Schackstr.");
        break;
    }
    case 276799:
    {
        returnValue = F("Schacktor");
        break;
    }
    case 276800:
    {
        returnValue = F("Schackumer Str.");
        break;
    }
    case 276801:
    {
        returnValue = F("Schadackerweg");
        break;
    }
    case 276802:
    {
        returnValue = F("Schadallerstr.");
        break;
    }
    case 276803:
    {
        returnValue = F("Schaddeler Dreieck");
        break;
    }
    case 276804:
    {
        returnValue = F("Schaddeler Str.");
        break;
    }
    case 276805:
    {
        returnValue = F("Schadden Feld");
        break;
    }
    case 276806:
    {
        returnValue = F("Schaddenbrook");
        break;
    }
    case 276807:
    {
        returnValue = F("Schaddenhook");
        break;
    }
    case 276808:
    {
        returnValue = F("Schaddingsdorfer Weg");
        break;
    }
    case 276809:
    {
        returnValue = F("Schadebergstr.");
        break;
    }
    case 276810:
    {
        returnValue = F("Schadeburgstr.");
        break;
    }
    case 276811:
    {
        returnValue = F("Schadecker Str.");
        break;
    }
    case 276812:
    {
        returnValue = F("Schadegasse");
        break;
    }
    case 276813:
    {
        returnValue = F("Schadehausweg");
        break;
    }
    case 276814:
    {
        returnValue = F("Schadelebener Str.");
        break;
    }
    case 276815:
    {
        returnValue = F("Schadelebener Weg");
        break;
    }
    case 276816:
    {
        returnValue = F("Schadeländer Weg");
        break;
    }
    case 276817:
    {
        returnValue = F("Schadenbacher Str.");
        break;
    }
    case 276818:
    {
        returnValue = F("Schadenbeekshangweg");
        break;
    }
    case 276819:
    {
        returnValue = F("Schadenbeeksweg");
        break;
    }
    case 276820:
    {
        returnValue = F("Schadenbergstr.");
        break;
    }
    case 276821:
    {
        returnValue = F("Schadendorf");
        break;
    }
    case 276822:
    {
        returnValue = F("Schadendorfer Str.");
        break;
    }
    case 276823:
    {
        returnValue = F("Schadendorfer Weg");
        break;
    }
    case 276824:
    {
        returnValue = F("Schadenfrohstr.");
        break;
    }
    case 276825:
    {
        returnValue = F("Schadenkampsweg");
        break;
    }
    case 276826:
    {
        returnValue = F("Schadenreuther Weg");
        break;
    }
    case 276827:
    {
        returnValue = F("Schadenwasenstr.");
        break;
    }
    case 276828:
    {
        returnValue = F("Schadenweilerhof");
        break;
    }
    case 276829:
    {
        returnValue = F("Schadenweilerstr.");
        break;
    }
    case 276830:
    {
        returnValue = F("Schaderoder Str.");
        break;
    }
    case 276831:
    {
        returnValue = F("Schaderstr.");
        break;
    }
    case 276832:
    {
        returnValue = F("Schadesche Wiese");
        break;
    }
    case 276833:
    {
        returnValue = F("Schadestr.");
        break;
    }
    case 276834:
    {
        returnValue = F("Schadewachten");
        break;
    }
    case 276835:
    {
        returnValue = F("Schadewalde");
        break;
    }
    case 276836:
    {
        returnValue = F("Schadewitzer Str.");
        break;
    }
    case 276837:
    {
        returnValue = F("Schadewitzstr.");
        break;
    }
    case 276838:
    {
        returnValue = F("Schadewohler Weg");
        break;
    }
    case 276839:
    {
        returnValue = F("Schadow");
        break;
    }
    case 276840:
    {
        returnValue = F("Schadowstr.");
        break;
    }
    case 276841:
    {
        returnValue = F("Schadstr.");
        break;
    }
    case 276842:
    {
        returnValue = F("Schadtengasse");
        break;
    }
    case 276843:
    {
        returnValue = F("Schadwiesenweg");
        break;
    }
    case 276844:
    {
        returnValue = F("Schaechtleweg");
        break;
    }
    case 276845:
    {
        returnValue = F("Schaefersklingenweg");
        break;
    }
    case 276846:
    {
        returnValue = F("Schaeferstr.");
        break;
    }
    case 276847:
    {
        returnValue = F("Schaefferstr.");
        break;
    }
    case 276848:
    {
        returnValue = F("Schaefstr.");
        break;
    }
    case 276849:
    {
        returnValue = F("Schaeggergarten");
        break;
    }
    case 276850:
    {
        returnValue = F("Schaephuysener Str.");
        break;
    }
    case 276851:
    {
        returnValue = F("Schaers Grasweg");
        break;
    }
    case 276852:
    {
        returnValue = F("Schaertzgensweg");
        break;
    }
    case 276853:
    {
        returnValue = F("Schaesberggasse");
        break;
    }
    case 276854:
    {
        returnValue = F("Schaesbergstr.");
        break;
    }
    case 276855:
    {
        returnValue = F("Schaeuffelenstr.");
        break;
    }
    case 276856:
    {
        returnValue = F("Schaevenstr.");
        break;
    }
    case 276857:
    {
        returnValue = F("Schaezlerstr.");
        break;
    }
    case 276858:
    {
        returnValue = F("Schaf- und Ziegelhof");
        break;
    }
    case 276859:
    {
        returnValue = F("Schafackerhof");
        break;
    }
    case 276860:
    {
        returnValue = F("Schafackerstr.");
        break;
    }
    case 276861:
    {
        returnValue = F("Schafackerweg");
        break;
    }
    case 276862:
    {
        returnValue = F("Schafalm");
        break;
    }
    case 276863:
    {
        returnValue = F("Schafanger");
        break;
    }
    case 276864:
    {
        returnValue = F("Schafbachmühle");
        break;
    }
    case 276865:
    {
        returnValue = F("Schafbachstr.");
        break;
    }
    case 276866:
    {
        returnValue = F("Schafbade");
        break;
    }
    case 276867:
    {
        returnValue = F("Schafbauer Anger");
        break;
    }
    case 276868:
    {
        returnValue = F("Schafbaumstr.");
        break;
    }
    case 276869:
    {
        returnValue = F("Schafbaumweg");
        break;
    }
    case 276870:
    {
        returnValue = F("Schafbeetgasse");
        break;
    }
    case 276871:
    {
        returnValue = F("Schafberg");
        break;
    }
    case 276872:
    {
        returnValue = F("Schafberger Grenze");
        break;
    }
    case 276873:
    {
        returnValue = F("Schafberger Postweg");
        break;
    }
    case 276874:
    {
        returnValue = F("Schafbergring");
        break;
    }
    case 276875:
    {
        returnValue = F("Schafbergstr.");
        break;
    }
    case 276876:
    {
        returnValue = F("Schafbergweg");
        break;
    }
    case 276877:
    {
        returnValue = F("Schafbiegelallee");
        break;
    }
    case 276878:
    {
        returnValue = F("Schafbirkenweg");
        break;
    }
    case 276879:
    {
        returnValue = F("Schafblumenhalde");
        break;
    }
    case 276880:
    {
        returnValue = F("Schafbockgehege");
        break;
    }
    case 276881:
    {
        returnValue = F("Schafbockweg");
        break;
    }
    case 276882:
    {
        returnValue = F("Schafbodenweg");
        break;
    }
    case 276883:
    {
        returnValue = F("Schafbraken");
        break;
    }
    case 276884:
    {
        returnValue = F("Schafbreede");
        break;
    }
    case 276885:
    {
        returnValue = F("Schafbreite");
        break;
    }
    case 276886:
    {
        returnValue = F("Schafbrink");
        break;
    }
    case 276887:
    {
        returnValue = F("Schafbruck");
        break;
    }
    case 276888:
    {
        returnValue = F("Schafbrunnenstr.");
        break;
    }
    case 276889:
    {
        returnValue = F("Schafbrunnenweg");
        break;
    }
    case 276890:
    {
        returnValue = F("Schafbrücke");
        break;
    }
    case 276891:
    {
        returnValue = F("Schafbrückenweg");
        break;
    }
    case 276892:
    {
        returnValue = F("Schafbrücker Mühle");
        break;
    }
    case 276893:
    {
        returnValue = F("Schafbrücker Str.");
        break;
    }
    case 276894:
    {
        returnValue = F("Schafbrückweg");
        break;
    }
    case 276895:
    {
        returnValue = F("Schafbrünnlweg");
        break;
    }
    case 276896:
    {
        returnValue = F("Schafbuck");
        break;
    }
    case 276897:
    {
        returnValue = F("Schafbuckelweg");
        break;
    }
    case 276898:
    {
        returnValue = F("Schafböhler Weg");
        break;
    }
    case 276899:
    {
        returnValue = F("Schafbühl");
        break;
    }
    case 276900:
    {
        returnValue = F("Schafbühlweg");
        break;
    }
    case 276901:
    {
        returnValue = F("Schafdamm");
        break;
    }
    case 276902:
    {
        returnValue = F("Schafdammbrücke");
        break;
    }
    case 276903:
    {
        returnValue = F("Schafdammsmoor");
        break;
    }
    case 276904:
    {
        returnValue = F("Schafdammsweg");
        break;
    }
    case 276905:
    {
        returnValue = F("Schafdeich");
        break;
    }
    case 276906:
    {
        returnValue = F("Schafdrift");
        break;
    }
    case 276907:
    {
        returnValue = F("Schafe");
        break;
    }
    case 276908:
    {
        returnValue = F("Schafe, Ziegen");
        break;
    }
    case 276909:
    {
        returnValue = F("Schafeichenweg");
        break;
    }
    case 276910:
    {
        returnValue = F("Schafelsberg");
        break;
    }
    case 276911:
    {
        returnValue = F("Schafenberg");
        break;
    }
    case 276912:
    {
        returnValue = F("Schafenbergweg");
        break;
    }
    case 276913:
    {
        returnValue = F("Schaffahrt");
        break;
    }
    case 276914:
    {
        returnValue = F("Schaffelbergstr.");
        break;
    }
    case 276915:
    {
        returnValue = F("Schaffeld");
        break;
    }
    case 276916:
    {
        returnValue = F("Schaffeldstr.");
        break;
    }
    case 276917:
    {
        returnValue = F("Schaffeldweg");
        break;
    }
    case 276918:
    {
        returnValue = F("Schaffelhofer Weg");
        break;
    }
    case 276919:
    {
        returnValue = F("Schaffelhuberweg");
        break;
    }
    case 276920:
    {
        returnValue = F("Schaffelkingen");
        break;
    }
    case 276921:
    {
        returnValue = F("Schaffelkinger Weg");
        break;
    }
    case 276922:
    {
        returnValue = F("Schaffenbergstr.");
        break;
    }
    case 276923:
    {
        returnValue = F("Schaffenrathstr.");
        break;
    }
    case 276924:
    {
        returnValue = F("Schaffentorstr.");
        break;
    }
    case 276925:
    {
        returnValue = F("Schafferweg");
        break;
    }
    case 276926:
    {
        returnValue = F("Schaffhausen");
        break;
    }
    case 276927:
    {
        returnValue = F("Schaffhausener Str.");
        break;
    }
    case 276928:
    {
        returnValue = F("Schaffhausener Weg");
        break;
    }
    case 276929:
    {
        returnValue = F("Schaffhausenstr.");
        break;
    }
    case 276930:
    {
        returnValue = F("Schaffhauser Platz");
        break;
    }
    case 276931:
    {
        returnValue = F("Schaffhauser Str.");
        break;
    }
    case 276932:
    {
        returnValue = F("Schaffhauser Säge");
        break;
    }
    case 276933:
    {
        returnValue = F("Schaffhauser Weg");
        break;
    }
    case 276934:
    {
        returnValue = F("Schaffhäuser Feld");
        break;
    }
    case 276935:
    {
        returnValue = F("Schaffirsee Kreuz zur Donau");
        break;
    }
    case 276936:
    {
        returnValue = F("Schafflergraben");
        break;
    }
    case 276937:
    {
        returnValue = F("Schafflerstr.");
        break;
    }
    case 276938:
    {
        returnValue = F("Schafflerweg");
        break;
    }
    case 276939:
    {
        returnValue = F("Schafflunder Str.");
        break;
    }
    case 276940:
    {
        returnValue = F("Schaffmeisterweg");
        break;
    }
    case 276941:
    {
        returnValue = F("Schaffneigasse");
        break;
    }
    case 276942:
    {
        returnValue = F("Schaffneiweg");
        break;
    }
    case 276943:
    {
        returnValue = F("Schaffnereiweg");
        break;
    }
    case 276944:
    {
        returnValue = F("Schaffnerstr.");
        break;
    }
    case 276945:
    {
        returnValue = F("Schaffnerweg");
        break;
    }
    case 276946:
    {
        returnValue = F("Schaffnitstr.");
        break;
    }
    case 276947:
    {
        returnValue = F("Schaffohrenweg");
        break;
    }
    case 276948:
    {
        returnValue = F("Schaffrathsgasse");
        break;
    }
    case 276949:
    {
        returnValue = F("Schaffrathstr.");
        break;
    }
    case 276950:
    {
        returnValue = F("Schaffrusch");
        break;
    }
    case 276951:
    {
        returnValue = F("Schaffsteinweg");
        break;
    }
    case 276952:
    {
        returnValue = F("Schafftergasse");
        break;
    }
    case 276953:
    {
        returnValue = F("Schaffweg");
        break;
    }
    case 276954:
    {
        returnValue = F("Schafgarbenstr.");
        break;
    }
    case 276955:
    {
        returnValue = F("Schafgarbenweg");
        break;
    }
    case 276956:
    {
        returnValue = F("Schafgarten");
        break;
    }
    case 276957:
    {
        returnValue = F("Schafgartendamm");
        break;
    }
    case 276958:
    {
        returnValue = F("Schafgartenplatz");
        break;
    }
    case 276959:
    {
        returnValue = F("Schafgartenstr.");
        break;
    }
    case 276960:
    {
        returnValue = F("Schafgartenweg");
        break;
    }
    case 276961:
    {
        returnValue = F("Schafgasse");
        break;
    }
    case 276962:
    {
        returnValue = F("Schafgegend");
        break;
    }
    case 276963:
    {
        returnValue = F("Schafgraben");
        break;
    }
    case 276964:
    {
        returnValue = F("Schafgrabengasse");
        break;
    }
    case 276965:
    {
        returnValue = F("Schafgrabenweg");
        break;
    }
    case 276966:
    {
        returnValue = F("Schafgrube");
        break;
    }
    case 276967:
    {
        returnValue = F("Schafgrund");
        break;
    }
    case 276968:
    {
        returnValue = F("Schafgrundbrücke");
        break;
    }
    case 276969:
    {
        returnValue = F("Schafgärten");
        break;
    }
    case 276970:
    {
        returnValue = F("Schafgärtenweg");
        break;
    }
    case 276971:
    {
        returnValue = F("Schafhalde");
        break;
    }
    case 276972:
    {
        returnValue = F("Schafhaldeweg");
        break;
    }
    case 276973:
    {
        returnValue = F("Schafhalterweg");
        break;
    }
    case 276974:
    {
        returnValue = F("Schafhauk");
        break;
    }
    case 276975:
    {
        returnValue = F("Schafhaus");
        break;
    }
    case 276976:
    {
        returnValue = F("Schafhausener Str.");
        break;
    }
    case 276977:
    {
        returnValue = F("Schafhausenweg");
        break;
    }
    case 276978:
    {
        returnValue = F("Schafhauser Grund");
        break;
    }
    case 276979:
    {
        returnValue = F("Schafhauser Landstr.");
        break;
    }
    case 276980:
    {
        returnValue = F("Schafhauser Str.");
        break;
    }
    case 276981:
    {
        returnValue = F("Schafhauser Weg");
        break;
    }
    case 276982:
    {
        returnValue = F("Schafhausgasse");
        break;
    }
    case 276983:
    {
        returnValue = F("Schafhausplatz");
        break;
    }
    case 276984:
    {
        returnValue = F("Schafhausstr.");
        break;
    }
    case 276985:
    {
        returnValue = F("Schafhausweg");
        break;
    }
    case 276986:
    {
        returnValue = F("Schafheckenweg");
        break;
    }
    case 276987:
    {
        returnValue = F("Schafheckstr.");
        break;
    }
    case 276988:
    {
        returnValue = F("Schafheide");
        break;
    }
    case 276989:
    {
        returnValue = F("Schafheitlinstr.");
        break;
    }
    case 276990:
    {
        returnValue = F("Schafhof");
        break;
    }
    case 276991:
    {
        returnValue = F("Schafhofer Str.");
        break;
    }
    case 276992:
    {
        returnValue = F("Schafhofer Weg");
        break;
    }
    case 276993:
    {
        returnValue = F("Schafhofgasse");
        break;
    }
    case 276994:
    {
        returnValue = F("Schafhofgärten");
        break;
    }
    case 276995:
    {
        returnValue = F("Schafhofkeller");
        break;
    }
    case 276996:
    {
        returnValue = F("Schafhofsteige");
        break;
    }
    case 276997:
    {
        returnValue = F("Schafhofstr.");
        break;
    }
    case 276998:
    {
        returnValue = F("Schafhofweg");
        break;
    }
    case 276999:
    {
        returnValue = F("Schafhohle");
        break;
    }
    case 277000:
    {
        returnValue = F("Schafhorst");
        break;
    }
    case 277001:
    {
        returnValue = F("Schafhäuser");
        break;
    }
    case 277002:
    {
        returnValue = F("Schafhäuser Str.");
        break;
    }
    case 277003:
    {
        returnValue = F("Schafhäuser Weg");
        break;
    }
    case 277004:
    {
        returnValue = F("Schafhöchter Weg");
        break;
    }
    case 277005:
    {
        returnValue = F("Schafhöfener Weg");
        break;
    }
    case 277006:
    {
        returnValue = F("Schafhöfer Weg");
        break;
    }
    case 277007:
    {
        returnValue = F("Schafhübel");
        break;
    }
    case 277008:
    {
        returnValue = F("Schafhübelweg");
        break;
    }
    case 277009:
    {
        returnValue = F("Schafhütte");
        break;
    }
    case 277010:
    {
        returnValue = F("Schafhüttenweg");
        break;
    }
    case 277011:
    {
        returnValue = F("Schafjückenweg");
        break;
    }
    case 277012:
    {
        returnValue = F("Schafkamp");
        break;
    }
    case 277013:
    {
        returnValue = F("Schafkampweg");
        break;
    }
    case 277014:
    {
        returnValue = F("Schafklingenstr.");
        break;
    }
    case 277015:
    {
        returnValue = F("Schafkoben");
        break;
    }
    case 277016:
    {
        returnValue = F("Schafkopfweg");
        break;
    }
    case 277017:
    {
        returnValue = F("Schafkovenberg");
        break;
    }
    case 277018:
    {
        returnValue = F("Schafkovengrund");
        break;
    }
    case 277019:
    {
        returnValue = F("Schaflacher Weg");
        break;
    }
    case 277020:
    {
        returnValue = F("Schaflager");
        break;
    }
    case 277021:
    {
        returnValue = F("Schaflecker");
        break;
    }
    case 277022:
    {
        returnValue = F("Schafleite");
        break;
    }
    case 277023:
    {
        returnValue = F("Schaflerweg");
        break;
    }
    case 277024:
    {
        returnValue = F("Schafloch");
        break;
    }
    case 277025:
    {
        returnValue = F("Schafmarkt");
        break;
    }
    case 277026:
    {
        returnValue = F("Schafmarktplatz");
        break;
    }
    case 277027:
    {
        returnValue = F("Schafmarktstr.");
        break;
    }
    case 277028:
    {
        returnValue = F("Schafmarkweg");
        break;
    }
    case 277029:
    {
        returnValue = F("Schafmarsch");
        break;
    }
    case 277030:
    {
        returnValue = F("Schafmeierweg");
        break;
    }
    case 277031:
    {
        returnValue = F("Schafmeistertal");
        break;
    }
    case 277032:
    {
        returnValue = F("Schafmühle");
        break;
    }
    case 277033:
    {
        returnValue = F("Schafnussbaumweg");
        break;
    }
    case 277034:
    {
        returnValue = F("Schafottweg");
        break;
    }
    case 277035:
    {
        returnValue = F("Schafplane");
        break;
    }
    case 277036:
    {
        returnValue = F("Schafpreskeln");
        break;
    }
    case 277037:
    {
        returnValue = F("Schafrain");
        break;
    }
    case 277038:
    {
        returnValue = F("Schafrainle");
        break;
    }
    case 277039:
    {
        returnValue = F("Schafrainweg");
        break;
    }
    case 277040:
    {
        returnValue = F("Schaframpe");
        break;
    }
    case 277041:
    {
        returnValue = F("Schafrangen");
        break;
    }
    case 277042:
    {
        returnValue = F("Schafrasen");
        break;
    }
    case 277043:
    {
        returnValue = F("Schafredder");
        break;
    }
    case 277044:
    {
        returnValue = F("Schafrehre");
        break;
    }
    case 277045:
    {
        returnValue = F("Schafsacker");
        break;
    }
    case 277046:
    {
        returnValue = F("Schafsbecken");
        break;
    }
    case 277047:
    {
        returnValue = F("Schafsbenden");
        break;
    }
    case 277048:
    {
        returnValue = F("Schafsberg");
        break;
    }
    case 277049:
    {
        returnValue = F("Schafsbrücke");
        break;
    }
    case 277050:
    {
        returnValue = F("Schafscheuernberg");
        break;
    }
    case 277051:
    {
        returnValue = F("Schafscheuerstr.");
        break;
    }
    case 277052:
    {
        returnValue = F("Schafscheunenweg");
        break;
    }
    case 277053:
    {
        returnValue = F("Schafschindestr.");
        break;
    }
    case 277054:
    {
        returnValue = F("Schafschläglewerg");
        break;
    }
    case 277055:
    {
        returnValue = F("Schafschneise");
        break;
    }
    case 277056:
    {
        returnValue = F("Schafschwingelweg");
        break;
    }
    case 277057:
    {
        returnValue = F("Schafsdamm");
        break;
    }
    case 277058:
    {
        returnValue = F("Schafsdrift");
        break;
    }
    case 277059:
    {
        returnValue = F("Schafsdyck");
        break;
    }
    case 277060:
    {
        returnValue = F("Schafsee Schneise");
        break;
    }
    case 277061:
    {
        returnValue = F("Schafseer Str.");
        break;
    }
    case 277062:
    {
        returnValue = F("Schafsgasse");
        break;
    }
    case 277063:
    {
        returnValue = F("Schafsgottenweg");
        break;
    }
    case 277064:
    {
        returnValue = F("Schafsgrundweg I");
        break;
    }
    case 277065:
    {
        returnValue = F("Schafsgrundweg II");
        break;
    }
    case 277066:
    {
        returnValue = F("Schafshof-Berenssief");
        break;
    }
    case 277067:
    {
        returnValue = F("Schafskamp");
        break;
    }
    case 277068:
    {
        returnValue = F("Schafskaute");
        break;
    }
    case 277069:
    {
        returnValue = F("Schafskoppel");
        break;
    }
    case 277070:
    {
        returnValue = F("Schafsmühlenweg");
        break;
    }
    case 277071:
    {
        returnValue = F("Schafspfad");
        break;
    }
    case 277072:
    {
        returnValue = F("Schafspforte");
        break;
    }
    case 277073:
    {
        returnValue = F("Schafsplecken");
        break;
    }
    case 277074:
    {
        returnValue = F("Schafsreller");
        break;
    }
    case 277075:
    {
        returnValue = F("Schafstall");
        break;
    }
    case 277076:
    {
        returnValue = F("Schafstallkamp");
        break;
    }
    case 277077:
    {
        returnValue = F("Schafstallstr.");
        break;
    }
    case 277078:
    {
        returnValue = F("Schafstallweg");
        break;
    }
    case 277079:
    {
        returnValue = F("Schafsteg");
        break;
    }
    case 277080:
    {
        returnValue = F("Schafsteige");
        break;
    }
    case 277081:
    {
        returnValue = F("Schafsteiner Str.");
        break;
    }
    case 277082:
    {
        returnValue = F("Schafsteinerhof");
        break;
    }
    case 277083:
    {
        returnValue = F("Schafsteinweg");
        break;
    }
    case 277084:
    {
        returnValue = F("Schafstelzenweg");
        break;
    }
    case 277085:
    {
        returnValue = F("Schafstr.");
        break;
    }
    case 277086:
    {
        returnValue = F("Schafstrebe");
        break;
    }
    case 277087:
    {
        returnValue = F("Schafstrift");
        break;
    }
    case 277088:
    {
        returnValue = F("Schafstunnel");
        break;
    }
    case 277089:
    {
        returnValue = F("Schafstweete");
        break;
    }
    case 277090:
    {
        returnValue = F("Schafstädter Str.");
        break;
    }
    case 277091:
    {
        returnValue = F("Schafstädter Weg");
        break;
    }
    case 277092:
    {
        returnValue = F("Schafsweg");
        break;
    }
    case 277093:
    {
        returnValue = F("Schafsweide");
        break;
    }
    case 277094:
    {
        returnValue = F("Schafswiese");
        break;
    }
    case 277095:
    {
        returnValue = F("Schafswiesenweg");
        break;
    }
    case 277096:
    {
        returnValue = F("Schaftal");
        break;
    }
    case 277097:
    {
        returnValue = F("Schafteckweg");
        break;
    }
    case 277098:
    {
        returnValue = F("Schafteichflügel");
        break;
    }
    case 277099:
    {
        returnValue = F("Schafteichweg");
        break;
    }
    case 277100:
    {
        returnValue = F("Schafterbach");
        break;
    }
    case 277101:
    {
        returnValue = F("Schaftlacher Str.");
        break;
    }
    case 277102:
    {
        returnValue = F("Schaftnacher Str.");
        break;
    }
    case 277103:
    {
        returnValue = F("Schaftnacher Weg");
        break;
    }
    case 277104:
    {
        returnValue = F("Schaftrebe");
        break;
    }
    case 277105:
    {
        returnValue = F("Schaftreibe");
        break;
    }
    case 277106:
    {
        returnValue = F("Schaftreiberweg");
        break;
    }
    case 277107:
    {
        returnValue = F("Schaftreibeweg");
        break;
    }
    case 277108:
    {
        returnValue = F("Schaftrieb");
        break;
    }
    case 277109:
    {
        returnValue = F("Schaftriebschneise");
        break;
    }
    case 277110:
    {
        returnValue = F("Schaftriebweg");
        break;
    }
    case 277111:
    {
        returnValue = F("Schaftrifft");
        break;
    }
    case 277112:
    {
        returnValue = F("Schaftrift");
        break;
    }
    case 277113:
    {
        returnValue = F("Schaftriftweg");
        break;
    }
    case 277114:
    {
        returnValue = F("Schaftwaldweg");
        break;
    }
    case 277115:
    {
        returnValue = F("Schafwaldsträssle");
        break;
    }
    case 277116:
    {
        returnValue = F("Schafwaschen");
        break;
    }
    case 277117:
    {
        returnValue = F("Schafwaschener Weg");
        break;
    }
    case 277118:
    {
        returnValue = F("Schafwasen");
        break;
    }
    case 277119:
    {
        returnValue = F("Schafwasser");
        break;
    }
    case 277120:
    {
        returnValue = F("Schafweg");
        break;
    }
    case 277121:
    {
        returnValue = F("Schafwegbrücke");
        break;
    }
    case 277122:
    {
        returnValue = F("Schafweide");
        break;
    }
    case 277123:
    {
        returnValue = F("Schafweidenweg");
        break;
    }
    case 277124:
    {
        returnValue = F("Schafweideweg");
        break;
    }
    case 277125:
    {
        returnValue = F("Schafweidstraßl");
        break;
    }
    case 277126:
    {
        returnValue = F("Schafwiese");
        break;
    }
    case 277127:
    {
        returnValue = F("Schafwiesenstr.");
        break;
    }
    case 277128:
    {
        returnValue = F("Schafwiesenweg");
        break;
    }
    case 277129:
    {
        returnValue = F("Schafwinkel");
        break;
    }
    case 277130:
    {
        returnValue = F("Schafwinkeler Dorfstr.");
        break;
    }
    case 277131:
    {
        returnValue = F("Schafwinkeler Landstr.");
        break;
    }
    case 277132:
    {
        returnValue = F("Schafwinkeler Weg");
        break;
    }
    case 277133:
    {
        returnValue = F("Schafwäsche");
        break;
    }
    case 277134:
    {
        returnValue = F("Schafwäscheweg");
        break;
    }
    case 277135:
    {
        returnValue = F("Schafzeil");
        break;
    }
    case 277136:
    {
        returnValue = F("Schafäcker");
        break;
    }
    case 277137:
    {
        returnValue = F("Schafäckerstr.");
        break;
    }
    case 277138:
    {
        returnValue = F("Schafäckerweg");
        break;
    }
    case 277139:
    {
        returnValue = F("Schagen");
        break;
    }
    case 277140:
    {
        returnValue = F("Schagenstr.");
        break;
    }
    case 277141:
    {
        returnValue = F("Schagenweg");
        break;
    }
    case 277142:
    {
        returnValue = F("Schagern");
        break;
    }
    case 277143:
    {
        returnValue = F("Schageshofstr.");
        break;
    }
    case 277144:
    {
        returnValue = F("Schaggenhofener Str.");
        break;
    }
    case 277145:
    {
        returnValue = F("Schaibinger Boindl");
        break;
    }
    case 277146:
    {
        returnValue = F("Schaibinger Str.");
        break;
    }
    case 277147:
    {
        returnValue = F("Schaiblestr.");
        break;
    }
    case 277148:
    {
        returnValue = F("Schaiblesweg");
        break;
    }
    case 277149:
    {
        returnValue = F("Schaichbergstr.");
        break;
    }
    case 277150:
    {
        returnValue = F("Schaichbergsträßle");
        break;
    }
    case 277151:
    {
        returnValue = F("Schaicherfeld");
        break;
    }
    case 277152:
    {
        returnValue = F("Schaichhofstr.");
        break;
    }
    case 277153:
    {
        returnValue = F("Schaichstr.");
        break;
    }
    case 277154:
    {
        returnValue = F("Schaichtalweg");
        break;
    }
    case 277155:
    {
        returnValue = F("Schaidhamer Weg");
        break;
    }
    case 277156:
    {
        returnValue = F("Schaidhaufstr.");
        break;
    }
    case 277157:
    {
        returnValue = F("Schaidhaufweg");
        break;
    }
    case 277158:
    {
        returnValue = F("Schaidinger Str.");
        break;
    }
    case 277159:
    {
        returnValue = F("Schaidter Platz");
        break;
    }
    case 277160:
    {
        returnValue = F("Schaidter Sträßchen");
        break;
    }
    case 277161:
    {
        returnValue = F("Schaidter Weg");
        break;
    }
    case 277162:
    {
        returnValue = F("Schaienbuchweg");
        break;
    }
    case 277163:
    {
        returnValue = F("Schailblesweg");
        break;
    }
    case 277164:
    {
        returnValue = F("Schainbacher Hauptstr.");
        break;
    }
    case 277165:
    {
        returnValue = F("Schainbacher Str.");
        break;
    }
    case 277166:
    {
        returnValue = F("Schaitbergerstr.");
        break;
    }
    case 277167:
    {
        returnValue = F("Schaitdorfer Weg");
        break;
    }
    case 277168:
    {
        returnValue = F("Schakenberg");
        break;
    }
    case 277169:
    {
        returnValue = F("Schakenburg");
        break;
    }
    case 277170:
    {
        returnValue = F("Schakengasse");
        break;
    }
    case 277171:
    {
        returnValue = F("Schakenkamp");
        break;
    }
    case 277172:
    {
        returnValue = F("Schakentalstr.");
        break;
    }
    case 277173:
    {
        returnValue = F("Schakostr.");
        break;
    }
    case 277174:
    {
        returnValue = F("Schalbree");
        break;
    }
    case 277175:
    {
        returnValue = F("Schalbruch");
        break;
    }
    case 277176:
    {
        returnValue = F("Schalchdorferstr.");
        break;
    }
    case 277177:
    {
        returnValue = F("Schalchen");
        break;
    }
    case 277178:
    {
        returnValue = F("Schalchener Str.");
        break;
    }
    case 277179:
    {
        returnValue = F("Schalchern");
        break;
    }
    case 277180:
    {
        returnValue = F("Schaldachweg");
        break;
    }
    case 277181:
    {
        returnValue = F("Schalderberg");
        break;
    }
    case 277182:
    {
        returnValue = F("Schaldinger Str.");
        break;
    }
    case 277183:
    {
        returnValue = F("Schalenbacher Weg");
        break;
    }
    case 277184:
    {
        returnValue = F("Schalenser Weg");
        break;
    }
    case 277185:
    {
        returnValue = F("Schalenweg");
        break;
    }
    case 277186:
    {
        returnValue = F("Schaler Str.");
        break;
    }
    case 277187:
    {
        returnValue = F("Schalholzweg");
        break;
    }
    case 277188:
    {
        returnValue = F("Schaliß");
        break;
    }
    case 277189:
    {
        returnValue = F("Schalißer Str.");
        break;
    }
    case 277190:
    {
        returnValue = F("Schalkauer Ring");
        break;
    }
    case 277191:
    {
        returnValue = F("Schalkauer Str.");
        break;
    }
    case 277192:
    {
        returnValue = F("Schalken");
        break;
    }
    case 277193:
    {
        returnValue = F("Schalkenbachstr.");
        break;
    }
    case 277194:
    {
        returnValue = F("Schalkenberg");
        break;
    }
    case 277195:
    {
        returnValue = F("Schalkenbergsiepen");
        break;
    }
    case 277196:
    {
        returnValue = F("Schalkenbergstr.");
        break;
    }
    case 277197:
    {
        returnValue = F("Schalkenbergweg");
        break;
    }
    case 277198:
    {
        returnValue = F("Schalkenbühlweg");
        break;
    }
    case 277199:
    {
        returnValue = F("Schalkenmehrener Mühle");
        break;
    }
    case 277200:
    {
        returnValue = F("Schalkenmehrener Str.");
        break;
    }
    case 277201:
    {
        returnValue = F("Schalkenmehrener Weg");
        break;
    }
    case 277202:
    {
        returnValue = F("Schalkentaler Weg");
        break;
    }
    case 277203:
    {
        returnValue = F("Schalkenthan");
        break;
    }
    case 277204:
    {
        returnValue = F("Schalkenthaner Weg");
        break;
    }
    case 277205:
    {
        returnValue = F("Schalker Markt");
        break;
    }
    case 277206:
    {
        returnValue = F("Schalker Stadtweg");
        break;
    }
    case 277207:
    {
        returnValue = F("Schalker Str.");
        break;
    }
    case 277208:
    {
        returnValue = F("Schalker Weg");
        break;
    }
    case 277209:
    {
        returnValue = F("Schalkestr.");
        break;
    }
    case 277210:
    {
        returnValue = F("Schalkham");
        break;
    }
    case 277211:
    {
        returnValue = F("Schalkhamer Str.");
        break;
    }
    case 277212:
    {
        returnValue = F("Schalkhaußerstr.");
        break;
    }
    case 277213:
    {
        returnValue = F("Schalkhäuser Landstr.");
        break;
    }
    case 277214:
    {
        returnValue = F("Schalkhäuser Str.");
        break;
    }
    case 277215:
    {
        returnValue = F("Schalksbachstr.");
        break;
    }
    case 277216:
    {
        returnValue = F("Schalksbergstr.");
        break;
    }
    case 277217:
    {
        returnValue = F("Schalksbergweg");
        break;
    }
    case 277218:
    {
        returnValue = F("Schalksbornstr.");
        break;
    }
    case 277219:
    {
        returnValue = F("Schalksburgstr.");
        break;
    }
    case 277220:
    {
        returnValue = F("Schalksburgweg");
        break;
    }
    case 277221:
    {
        returnValue = F("Schalksgasse");
        break;
    }
    case 277222:
    {
        returnValue = F("Schalksmühle");
        break;
    }
    case 277223:
    {
        returnValue = F("Schalksrasen");
        break;
    }
    case 277224:
    {
        returnValue = F("Schalkstal");
        break;
    }
    case 277225:
    {
        returnValue = F("Schalkstetter Str.");
        break;
    }
    case 277226:
    {
        returnValue = F("Schalkstr.");
        break;
    }
    case 277227:
    {
        returnValue = F("Schalksweg");
        break;
    }
    case 277228:
    {
        returnValue = F("Schalkweg");
        break;
    }
    case 277229:
    {
        returnValue = F("Schalkwiesenweg");
        break;
    }
    case 277230:
    {
        returnValue = F("Schall-und-Schwencke-Weg");
        break;
    }
    case 277231:
    {
        returnValue = F("Schall-von-Bell-Weg");
        break;
    }
    case 277232:
    {
        returnValue = F("Schallbacher Str.");
        break;
    }
    case 277233:
    {
        returnValue = F("Schallbacher Weg");
        break;
    }
    case 277234:
    {
        returnValue = F("Schallbachgasse");
        break;
    }
    case 277235:
    {
        returnValue = F("Schallbruch");
        break;
    }
    case 277236:
    {
        returnValue = F("Schallbrucher Höhe");
        break;
    }
    case 277237:
    {
        returnValue = F("Schalldorf");
        break;
    }
    case 277238:
    {
        returnValue = F("Schalldorfer Str.");
        break;
    }
    case 277239:
    {
        returnValue = F("Schallemicher Str.");
        break;
    }
    case 277240:
    {
        returnValue = F("Schallenberg");
        break;
    }
    case 277241:
    {
        returnValue = F("Schallenbergstr.");
        break;
    }
    case 277242:
    {
        returnValue = F("Schallenbergweg");
        break;
    }
    case 277243:
    {
        returnValue = F("Schallenburg");
        break;
    }
    case 277244:
    {
        returnValue = F("Schallenburger Str.");
        break;
    }
    case 277245:
    {
        returnValue = F("Schallengasse");
        break;
    }
    case 277246:
    {
        returnValue = F("Schallenhaus");
        break;
    }
    case 277247:
    {
        returnValue = F("Schallenkamer Str.");
        break;
    }
    case 277248:
    {
        returnValue = F("Schallenstr.");
        break;
    }
    case 277249:
    {
        returnValue = F("Schaller Weg");
        break;
    }
    case 277250:
    {
        returnValue = F("Schaller-Härlin-Weg");
        break;
    }
    case 277251:
    {
        returnValue = F("Schallerbachstr.");
        break;
    }
    case 277252:
    {
        returnValue = F("Schallergarten");
        break;
    }
    case 277253:
    {
        returnValue = F("Schallerin");
        break;
    }
    case 277254:
    {
        returnValue = F("Schallershof");
        break;
    }
    case 277255:
    {
        returnValue = F("Schallershofer Str.");
        break;
    }
    case 277256:
    {
        returnValue = F("Schallershofer Weg");
        break;
    }
    case 277257:
    {
        returnValue = F("Schallerstr.");
        break;
    }
    case 277258:
    {
        returnValue = F("Schallerweg");
        break;
    }
    case 277259:
    {
        returnValue = F("Schallerwinkel");
        break;
    }
    case 277260:
    {
        returnValue = F("Schallesbuchstr.");
        break;
    }
    case 277261:
    {
        returnValue = F("Schallfelder Str.");
        break;
    }
    case 277262:
    {
        returnValue = F("Schallfelder Weg");
        break;
    }
    case 277263:
    {
        returnValue = F("Schallgrabenweg");
        break;
    }
    case 277264:
    {
        returnValue = F("Schallhollenloch");
        break;
    }
    case 277265:
    {
        returnValue = F("Schallholm");
        break;
    }
    case 277266:
    {
        returnValue = F("Schallmauer");
        break;
    }
    case 277267:
    {
        returnValue = F("Schallmauerweg");
        break;
    }
    case 277268:
    {
        returnValue = F("Schallmoserweg");
        break;
    }
    case 277269:
    {
        returnValue = F("Schalloh");
        break;
    }
    case 277270:
    {
        returnValue = F("Schallroth");
        break;
    }
    case 277271:
    {
        returnValue = F("Schallsingen");
        break;
    }
    case 277272:
    {
        returnValue = F("Schallsinger Hauweg");
        break;
    }
    case 277273:
    {
        returnValue = F("Schallstr.");
        break;
    }
    case 277274:
    {
        returnValue = F("Schalltorstr.");
        break;
    }
    case 277275:
    {
        returnValue = F("Schallund");
        break;
    }
    case 277276:
    {
        returnValue = F("Schalluner Weg");
        break;
    }
    case 277277:
    {
        returnValue = F("Schallweg");
        break;
    }
    case 277278:
    {
        returnValue = F("Schalmeienweg");
        break;
    }
    case 277279:
    {
        returnValue = F("Schalmeistr.");
        break;
    }
    case 277280:
    {
        returnValue = F("Schalmeiweg");
        break;
    }
    case 277281:
    {
        returnValue = F("Schalmengasse");
        break;
    }
    case 277282:
    {
        returnValue = F("Schalmengraben");
        break;
    }
    case 277283:
    {
        returnValue = F("Schalmenhagweg");
        break;
    }
    case 277284:
    {
        returnValue = F("Schalmenhalde");
        break;
    }
    case 277285:
    {
        returnValue = F("Schalmenwasenweg");
        break;
    }
    case 277286:
    {
        returnValue = F("Schalmenweg");
        break;
    }
    case 277287:
    {
        returnValue = F("Schalmenäcker");
        break;
    }
    case 277288:
    {
        returnValue = F("Schalmenäckerstr.");
        break;
    }
    case 277289:
    {
        returnValue = F("Schalmesau");
        break;
    }
    case 277290:
    {
        returnValue = F("Schalmweg");
        break;
    }
    case 277291:
    {
        returnValue = F("Schaltalweg");
        break;
    }
    case 277292:
    {
        returnValue = F("Schaltbruchweg");
        break;
    }
    case 277293:
    {
        returnValue = F("Schaltbrunnenweg");
        break;
    }
    case 277294:
    {
        returnValue = F("Schaltdorf");
        break;
    }
    case 277295:
    {
        returnValue = F("Schaltdorf an der Schanz");
        break;
    }
    case 277296:
    {
        returnValue = F("Schaltdorfer Str.");
        break;
    }
    case 277297:
    {
        returnValue = F("Schaltenbach");
        break;
    }
    case 277298:
    {
        returnValue = F("Schaltenberg");
        break;
    }
    case 277299:
    {
        returnValue = F("Schalterbach");
        break;
    }
    case 277300:
    {
        returnValue = F("Schaltern");
        break;
    }
    case 277301:
    {
        returnValue = F("Schalterner Str.");
        break;
    }
    case 277302:
    {
        returnValue = F("Schalthaus");
        break;
    }
    case 277303:
    {
        returnValue = F("Schalthausstr.");
        break;
    }
    case 277304:
    {
        returnValue = F("Schaltisweg");
        break;
    }
    case 277305:
    {
        returnValue = F("Schaltstation");
        break;
    }
    case 277306:
    {
        returnValue = F("Schaltwerk");
        break;
    }
    case 277307:
    {
        returnValue = F("Schaltwerkstr.");
        break;
    }
    case 277308:
    {
        returnValue = F("Schaluppenweg");
        break;
    }
    case 277309:
    {
        returnValue = F("Schaluppeplätzel");
        break;
    }
    case 277310:
    {
        returnValue = F("Schalweg");
        break;
    }
    case 277311:
    {
        returnValue = F("Schalzenweg");
        break;
    }
    case 277312:
    {
        returnValue = F("Schalückstr.");
        break;
    }
    case 277313:
    {
        returnValue = F("Schambach");
        break;
    }
    case 277314:
    {
        returnValue = F("Schambacher Leite");
        break;
    }
    case 277315:
    {
        returnValue = F("Schambacher Str.");
        break;
    }
    case 277316:
    {
        returnValue = F("Schambacher Weg");
        break;
    }
    case 277317:
    {
        returnValue = F("Schambachtal");
        break;
    }
    case 277318:
    {
        returnValue = F("Schambachtalbrücke");
        break;
    }
    case 277319:
    {
        returnValue = F("Schambachwaldweg");
        break;
    }
    case 277320:
    {
        returnValue = F("Schambachweg");
        break;
    }
    case 277321:
    {
        returnValue = F("Schambeckstr.");
        break;
    }
    case 277322:
    {
        returnValue = F("Schambrede");
        break;
    }
    case 277323:
    {
        returnValue = F("Schamederstr.");
        break;
    }
    case 277324:
    {
        returnValue = F("Schamelsberg");
        break;
    }
    case 277325:
    {
        returnValue = F("Schamerloh");
        break;
    }
    case 277326:
    {
        returnValue = F("Schamhopsweg");
        break;
    }
    case 277327:
    {
        returnValue = F("Schammacher Weg");
        break;
    }
    case 277328:
    {
        returnValue = F("Schammelsdorfer Str.");
        break;
    }
    case 277329:
    {
        returnValue = F("Schammendorf");
        break;
    }
    case 277330:
    {
        returnValue = F("Schammenstr.");
        break;
    }
    case 277331:
    {
        returnValue = F("Schammental");
        break;
    }
    case 277332:
    {
        returnValue = F("Schamottestr.");
        break;
    }
    case 277333:
    {
        returnValue = F("Schampe Mühle");
        break;
    }
    case 277334:
    {
        returnValue = F("Schampweg");
        break;
    }
    case 277335:
    {
        returnValue = F("Schamusi-Weg");
        break;
    }
    case 277336:
    {
        returnValue = F("Schamwege");
        break;
    }
    case 277337:
    {
        returnValue = F("Schamweger Str.");
        break;
    }
    case 277338:
    {
        returnValue = F("Schanbacher Str.");
        break;
    }
    case 277339:
    {
        returnValue = F("Schanbacher Weg");
        break;
    }
    case 277340:
    {
        returnValue = F("Schandauer Str.");
        break;
    }
    case 277341:
    {
        returnValue = F("Schandauer Weg");
        break;
    }
    case 277342:
    {
        returnValue = F("Schandeinstr.");
        break;
    }
    case 277343:
    {
        returnValue = F("Schandelaher Str.");
        break;
    }
    case 277344:
    {
        returnValue = F("Schandelaue");
        break;
    }
    case 277345:
    {
        returnValue = F("Schandergasse");
        break;
    }
    case 277346:
    {
        returnValue = F("Schandfuhr");
        break;
    }
    case 277347:
    {
        returnValue = F("Schandtaubertal");
        break;
    }
    case 277348:
    {
        returnValue = F("Schandule");
        break;
    }
    case 277349:
    {
        returnValue = F("Schandweg");
        break;
    }
    case 277350:
    {
        returnValue = F("Schanhollenweg");
        break;
    }
    case 277351:
    {
        returnValue = F("Schankalaweg");
        break;
    }
    case 277352:
    {
        returnValue = F("Schankenberg");
        break;
    }
    case 277353:
    {
        returnValue = F("Schankentalstr.");
        break;
    }
    case 277354:
    {
        returnValue = F("Schankgarten");
        break;
    }
    case 277355:
    {
        returnValue = F("Schankstr.");
        break;
    }
    case 277356:
    {
        returnValue = F("Schankstättenweg");
        break;
    }
    case 277357:
    {
        returnValue = F("Schankweiler Str.");
        break;
    }
    case 277358:
    {
        returnValue = F("Schannatstr.");
        break;
    }
    case 277359:
    {
        returnValue = F("Schannenbacher Weg");
        break;
    }
    case 277360:
    {
        returnValue = F("Schantinistr.");
        break;
    }
    case 277361:
    {
        returnValue = F("Schantoft");
        break;
    }
    case 277362:
    {
        returnValue = F("Schantzstr.");
        break;
    }
    case 277363:
    {
        returnValue = F("Schanz");
        break;
    }
    case 277364:
    {
        returnValue = F("Schanz Allee");
        break;
    }
    case 277365:
    {
        returnValue = F("Schanz Dyck");
        break;
    }
    case 277366:
    {
        returnValue = F("Schanz-Steige");
        break;
    }
    case 277367:
    {
        returnValue = F("Schanzacker");
        break;
    }
    case 277368:
    {
        returnValue = F("Schanzackerweg");
        break;
    }
    case 277369:
    {
        returnValue = F("Schanzallee");
        break;
    }
    case 277370:
    {
        returnValue = F("Schanzbachstr.");
        break;
    }
    case 277371:
    {
        returnValue = F("Schanzberg");
        break;
    }
    case 277372:
    {
        returnValue = F("Schanzbogenstr.");
        break;
    }
    case 277373:
    {
        returnValue = F("Schanzbühlweg");
        break;
    }
    case 277374:
    {
        returnValue = F("Schanze");
        break;
    }
    case 277375:
    {
        returnValue = F("Schanzen");
        break;
    }
    case 277376:
    {
        returnValue = F("Schanzenbachstr.");
        break;
    }
    case 277377:
    {
        returnValue = F("Schanzenbachweg");
        break;
    }
    case 277378:
    {
        returnValue = F("Schanzenbarg");
        break;
    }
    case 277379:
    {
        returnValue = F("Schanzenberg");
        break;
    }
    case 277380:
    {
        returnValue = F("Schanzenbergweg");
        break;
    }
    case 277381:
    {
        returnValue = F("Schanzenblick");
        break;
    }
    case 277382:
    {
        returnValue = F("Schanzenburger Weg");
        break;
    }
    case 277383:
    {
        returnValue = F("Schanzendrift");
        break;
    }
    case 277384:
    {
        returnValue = F("Schanzenfeld");
        break;
    }
    case 277385:
    {
        returnValue = F("Schanzenfeldstr.");
        break;
    }
    case 277386:
    {
        returnValue = F("Schanzengarten");
        break;
    }
    case 277387:
    {
        returnValue = F("Schanzengraben");
        break;
    }
    case 277388:
    {
        returnValue = F("Schanzenheide");
        break;
    }
    case 277389:
    {
        returnValue = F("Schanzenkamp");
        break;
    }
    case 277390:
    {
        returnValue = F("Schanzenkopfstr.");
        break;
    }
    case 277391:
    {
        returnValue = F("Schanzenpforte");
        break;
    }
    case 277392:
    {
        returnValue = F("Schanzenring");
        break;
    }
    case 277393:
    {
        returnValue = F("Schanzens Wiese");
        break;
    }
    case 277394:
    {
        returnValue = F("Schanzenstieg");
        break;
    }
    case 277395:
    {
        returnValue = F("Schanzenstr.");
        break;
    }
    case 277396:
    {
        returnValue = F("Schanzenweg");
        break;
    }
    case 277397:
    {
        returnValue = F("Schanzenwegle");
        break;
    }
    case 277398:
    {
        returnValue = F("Schanzenäcker Str.");
        break;
    }
    case 277399:
    {
        returnValue = F("Schanzer Weg");
        break;
    }
    case 277400:
    {
        returnValue = F("Schanzerhof");
        break;
    }
    case 277401:
    {
        returnValue = F("Schanzerhof Waldhaus");
        break;
    }
    case 277402:
    {
        returnValue = F("Schanzermühle");
        break;
    }
    case 277403:
    {
        returnValue = F("Schanzerstr.");
        break;
    }
    case 277404:
    {
        returnValue = F("Schanzfeld");
        break;
    }
    case 277405:
    {
        returnValue = F("Schanzgasse");
        break;
    }
    case 277406:
    {
        returnValue = F("Schanzgraben");
        break;
    }
    case 277407:
    {
        returnValue = F("Schanzgrabenweg");
        break;
    }
    case 277408:
    {
        returnValue = F("Schanzgrubenweg");
        break;
    }
    case 277409:
    {
        returnValue = F("Schanzgäßchen");
        break;
    }
    case 277410:
    {
        returnValue = F("Schanzheide");
        break;
    }
    case 277411:
    {
        returnValue = F("Schanzkopfstr.");
        break;
    }
    case 277412:
    {
        returnValue = F("Schanzlbrücke");
        break;
    }
    case 277413:
    {
        returnValue = F("Schanzler Hof");
        break;
    }
    case 277414:
    {
        returnValue = F("Schanzlweg");
        break;
    }
    case 277415:
    {
        returnValue = F("Schanzpark");
        break;
    }
    case 277416:
    {
        returnValue = F("Schanzreiterweg");
        break;
    }
    case 277417:
    {
        returnValue = F("Schanzring");
        break;
    }
    case 277418:
    {
        returnValue = F("Schanzstr.");
        break;
    }
    case 277419:
    {
        returnValue = F("Schanzwaldweg");
        break;
    }
    case 277420:
    {
        returnValue = F("Schanzweg");
        break;
    }
    case 277421:
    {
        returnValue = F("Schanzweg Ost");
        break;
    }
    case 277422:
    {
        returnValue = F("Schanzwiese");
        break;
    }
    case 277423:
    {
        returnValue = F("Schanzäckerstr.");
        break;
    }
    case 277424:
    {
        returnValue = F("Schapacher Weg");
        break;
    }
    case 277425:
    {
        returnValue = F("Schapbachstr.");
        break;
    }
    case 277426:
    {
        returnValue = F("Schapbachweg");
        break;
    }
    case 277427:
    {
        returnValue = F("Schapbrooker Weg");
        break;
    }
    case 277428:
    {
        returnValue = F("Schapdettener Str.");
        break;
    }
    case 277429:
    {
        returnValue = F("Schapdrift");
        break;
    }
    case 277430:
    {
        returnValue = F("Schapenbruch");
        break;
    }
    case 277431:
    {
        returnValue = F("Schapener Str.");
        break;
    }
    case 277432:
    {
        returnValue = F("Schapenholz");
        break;
    }
    case 277433:
    {
        returnValue = F("Schapenstiel");
        break;
    }
    case 277434:
    {
        returnValue = F("Schapenstr.");
        break;
    }
    case 277435:
    {
        returnValue = F("Schaperberg");
        break;
    }
    case 277436:
    {
        returnValue = F("Schaperbleek");
        break;
    }
    case 277437:
    {
        returnValue = F("Schaperbuschweg");
        break;
    }
    case 277438:
    {
        returnValue = F("Schaperdrift");
        break;
    }
    case 277439:
    {
        returnValue = F("Schapergarten");
        break;
    }
    case 277440:
    {
        returnValue = F("Schapergasse");
        break;
    }
    case 277441:
    {
        returnValue = F("Schaperhof");
        break;
    }
    case 277442:
    {
        returnValue = F("Schaperjahnstr.");
        break;
    }
    case 277443:
    {
        returnValue = F("Schaperkamp");
        break;
    }
    case 277444:
    {
        returnValue = F("Schaperplatz");
        break;
    }
    case 277445:
    {
        returnValue = F("Schapers Kamp");
        break;
    }
    case 277446:
    {
        returnValue = F("Schapersbrink");
        break;
    }
    case 277447:
    {
        returnValue = F("Schaperstr.");
        break;
    }
    case 277448:
    {
        returnValue = F("Schapersweg");
        break;
    }
    case 277449:
    {
        returnValue = F("Schapertwete");
        break;
    }
    case 277450:
    {
        returnValue = F("Schaperweg");
        break;
    }
    case 277451:
    {
        returnValue = F("Schaperwiese");
        break;
    }
    case 277452:
    {
        returnValue = F("Schaperwiesenweg");
        break;
    }
    case 277453:
    {
        returnValue = F("Schaperworth");
        break;
    }
    case 277454:
    {
        returnValue = F("Schapfengasse");
        break;
    }
    case 277455:
    {
        returnValue = F("Schaphauser Str.");
        break;
    }
    case 277456:
    {
        returnValue = F("Schaphorst");
        break;
    }
    case 277457:
    {
        returnValue = F("Schaphusenweg");
        break;
    }
    case 277458:
    {
        returnValue = F("Schaphuser Dorfstr.");
        break;
    }
    case 277459:
    {
        returnValue = F("Schaphuser Weg");
        break;
    }
    case 277460:
    {
        returnValue = F("Schaphusstr.");
        break;
    }
    case 277461:
    {
        returnValue = F("Schapirostr.");
        break;
    }
    case 277462:
    {
        returnValue = F("Schapker Weg");
        break;
    }
    case 277463:
    {
        returnValue = F("Schapower Weg");
        break;
    }
    case 277464:
    {
        returnValue = F("Schappachstr.");
        break;
    }
    case 277465:
    {
        returnValue = F("Schappelerstr.");
        break;
    }
    case 277466:
    {
        returnValue = F("Schappenstr.");
        break;
    }
    case 277467:
    {
        returnValue = F("Schapplachhalde");
        break;
    }
    case 277468:
    {
        returnValue = F("Schaprehmenweg");
        break;
    }
    case 277469:
    {
        returnValue = F("Schapsbecken");
        break;
    }
    case 277470:
    {
        returnValue = F("Schapschneise");
        break;
    }
    case 277471:
    {
        returnValue = F("Schapsweide");
        break;
    }
    case 277472:
    {
        returnValue = F("Schapwasch");
        break;
    }
    case 277473:
    {
        returnValue = F("Schar");
        break;
    }
    case 277474:
    {
        returnValue = F("Scharamer Weg");
        break;
    }
    case 277475:
    {
        returnValue = F("Scharbacher Str.");
        break;
    }
    case 277476:
    {
        returnValue = F("Scharbachweg");
        break;
    }
    case 277477:
    {
        returnValue = F("Scharbeilweg");
        break;
    }
    case 277478:
    {
        returnValue = F("Scharberg");
        break;
    }
    case 277479:
    {
        returnValue = F("Scharbergweg");
        break;
    }
    case 277480:
    {
        returnValue = F("Scharbeutzer Str.");
        break;
    }
    case 277481:
    {
        returnValue = F("Scharbeutzer Weg");
        break;
    }
    case 277482:
    {
        returnValue = F("Scharbrink");
        break;
    }
    case 277483:
    {
        returnValue = F("Schardeich");
        break;
    }
    case 277484:
    {
        returnValue = F("Schardenweg");
        break;
    }
    case 277485:
    {
        returnValue = F("Scharder Str.");
        break;
    }
    case 277486:
    {
        returnValue = F("Scharderhohlweg");
        break;
    }
    case 277487:
    {
        returnValue = F("Schardeyshof");
        break;
    }
    case 277488:
    {
        returnValue = F("Schardstr.");
        break;
    }
    case 277489:
    {
        returnValue = F("Scharebenstr.");
        break;
    }
    case 277490:
    {
        returnValue = F("Scharebenweg");
        break;
    }
    case 277491:
    {
        returnValue = F("Scharenbach");
        break;
    }
    case 277492:
    {
        returnValue = F("Scharenberg");
        break;
    }
    case 277493:
    {
        returnValue = F("Scharenberger Weg");
        break;
    }
    case 277494:
    {
        returnValue = F("Scharenbergstr.");
        break;
    }
    case 277495:
    {
        returnValue = F("Scharenbusch");
        break;
    }
    case 277496:
    {
        returnValue = F("Scharenbuschweg");
        break;
    }
    case 277497:
    {
        returnValue = F("Scharenhop");
        break;
    }
    case 277498:
    {
        returnValue = F("Scharenhöhe");
        break;
    }
    case 277499:
    {
        returnValue = F("Scharenkamp");
        break;
    }
    case 277500:
    {
        returnValue = F("Scharenstetter Str.");
        break;
    }
    case 277501:
    {
        returnValue = F("Scharenstetter Weg");
        break;
    }
    case 277502:
    {
        returnValue = F("Scharenstetterstr.");
        break;
    }
    case 277503:
    {
        returnValue = F("Scharenweg");
        break;
    }
    case 277504:
    {
        returnValue = F("Scharfacker");
        break;
    }
    case 277505:
    {
        returnValue = F("Scharfbachweg");
        break;
    }
    case 277506:
    {
        returnValue = F("Scharfbilliger Str.");
        break;
    }
    case 277507:
    {
        returnValue = F("Scharfe Ecke");
        break;
    }
    case 277508:
    {
        returnValue = F("Scharfe Gasse");
        break;
    }
    case 277509:
    {
        returnValue = F("Scharfe Worth");
        break;
    }
    case 277510:
    {
        returnValue = F("Scharfeck");
        break;
    }
    case 277511:
    {
        returnValue = F("Scharfeckweg");
        break;
    }
    case 277512:
    {
        returnValue = F("Scharfenberg");
        break;
    }
    case 277513:
    {
        returnValue = F("Scharfenberger Hof");
        break;
    }
    case 277514:
    {
        returnValue = F("Scharfenberger Str.");
        break;
    }
    case 277515:
    {
        returnValue = F("Scharfenbergerstr.");
        break;
    }
    case 277516:
    {
        returnValue = F("Scharfenbergpromenade");
        break;
    }
    case 277517:
    {
        returnValue = F("Scharfenbergstr.");
        break;
    }
    case 277518:
    {
        returnValue = F("Scharfenbrücker Str.");
        break;
    }
    case 277519:
    {
        returnValue = F("Scharfeneck");
        break;
    }
    case 277520:
    {
        returnValue = F("Scharfeneckstr.");
        break;
    }
    case 277521:
    {
        returnValue = F("Scharfeneckweg");
        break;
    }
    case 277522:
    {
        returnValue = F("Scharfengasse");
        break;
    }
    case 277523:
    {
        returnValue = F("Scharfenholz");
        break;
    }
    case 277524:
    {
        returnValue = F("Scharfenholzweg");
        break;
    }
    case 277525:
    {
        returnValue = F("Scharfenstegbrücke");
        break;
    }
    case 277526:
    {
        returnValue = F("Scharfenstein");
        break;
    }
    case 277527:
    {
        returnValue = F("Scharfensteiner Str.");
        break;
    }
    case 277528:
    {
        returnValue = F("Scharfensteiner Weg");
        break;
    }
    case 277529:
    {
        returnValue = F("Scharfensteinergäßchen");
        break;
    }
    case 277530:
    {
        returnValue = F("Scharfensteinerstr.");
        break;
    }
    case 277531:
    {
        returnValue = F("Scharfensteinpfad");
        break;
    }
    case 277532:
    {
        returnValue = F("Scharfensteinstr.");
        break;
    }
    case 277533:
    {
        returnValue = F("Scharfenweg");
        break;
    }
    case 277534:
    {
        returnValue = F("Scharfer Baum");
        break;
    }
    case 277535:
    {
        returnValue = F("Scharfer Uferweg");
        break;
    }
    case 277536:
    {
        returnValue = F("Scharfes Eck");
        break;
    }
    case 277537:
    {
        returnValue = F("Scharfewindgasse");
        break;
    }
    case 277538:
    {
        returnValue = F("Scharffensteinstr.");
        break;
    }
    case 277539:
    {
        returnValue = F("Scharffestr.");
        break;
    }
    case 277540:
    {
        returnValue = F("Scharffstr.");
        break;
    }
    case 277541:
    {
        returnValue = F("Scharfland");
        break;
    }
    case 277542:
    {
        returnValue = F("Scharfloher Str.");
        break;
    }
    case 277543:
    {
        returnValue = F("Scharfoldendorfer Str.");
        break;
    }
    case 277544:
    {
        returnValue = F("Scharfreiterring");
        break;
    }
    case 277545:
    {
        returnValue = F("Scharfreiterstr.");
        break;
    }
    case 277546:
    {
        returnValue = F("Scharfrichtergang");
        break;
    }
    case 277547:
    {
        returnValue = F("Scharfrichtergasse");
        break;
    }
    case 277548:
    {
        returnValue = F("Scharfrichterstr.");
        break;
    }
    case 277549:
    {
        returnValue = F("Scharfrichteweg");
        break;
    }
    case 277550:
    {
        returnValue = F("Scharfschwerdtstr.");
        break;
    }
    case 277551:
    {
        returnValue = F("Scharfstr.");
        break;
    }
    case 277552:
    {
        returnValue = F("Schargasse");
        break;
    }
    case 277553:
    {
        returnValue = F("Scharhofer Str.");
        break;
    }
    case 277554:
    {
        returnValue = F("Scharhörn");
        break;
    }
    case 277555:
    {
        returnValue = F("Scharhörner Ring");
        break;
    }
    case 277556:
    {
        returnValue = F("Scharhörner Weg");
        break;
    }
    case 277557:
    {
        returnValue = F("Scharhörnstr.");
        break;
    }
    case 277558:
    {
        returnValue = F("Scharhörnweg");
        break;
    }
    case 277559:
    {
        returnValue = F("Scharitzkehlstr.");
        break;
    }
    case 277560:
    {
        returnValue = F("Scharkoppel");
        break;
    }
    case 277561:
    {
        returnValue = F("Scharlachbergstr.");
        break;
    }
    case 277562:
    {
        returnValue = F("Scharlachsgrund");
        break;
    }
    case 277563:
    {
        returnValue = F("Scharlachweg");
        break;
    }
    case 277564:
    {
        returnValue = F("Scharlackenweg");
        break;
    }
    case 277565:
    {
        returnValue = F("Scharlageweg");
        break;
    }
    case 277566:
    {
        returnValue = F("Scharlau");
        break;
    }
    case 277567:
    {
        returnValue = F("Scharlemannstr.");
        break;
    }
    case 277568:
    {
        returnValue = F("Scharlenzer Weg");
        break;
    }
    case 277569:
    {
        returnValue = F("Scharler Weg");
        break;
    }
    case 277570:
    {
        returnValue = F("Scharlgasse");
        break;
    }
    case 277571:
    {
        returnValue = F("Scharlhofer Weg");
        break;
    }
    case 277572:
    {
        returnValue = F("Scharlicker Str.");
        break;
    }
    case 277573:
    {
        returnValue = F("Scharlinger Str.");
        break;
    }
    case 277574:
    {
        returnValue = F("Scharlmühlstr.");
        break;
    }
    case 277575:
    {
        returnValue = F("Scharltalstr.");
        break;
    }
    case 277576:
    {
        returnValue = F("Scharländerstr.");
        break;
    }
    case 277577:
    {
        returnValue = F("Scharmannstr.");
        break;
    }
    case 277578:
    {
        returnValue = F("Scharmbecker Dorfstr.");
        break;
    }
    case 277579:
    {
        returnValue = F("Scharmbecker Str.");
        break;
    }
    case 277580:
    {
        returnValue = F("Scharmbecker Weg");
        break;
    }
    case 277581:
    {
        returnValue = F("Scharmbrooksweg");
        break;
    }
    case 277582:
    {
        returnValue = F("Scharmeder Stadtweg");
        break;
    }
    case 277583:
    {
        returnValue = F("Scharmeder Str.");
        break;
    }
    case 277584:
    {
        returnValue = F("Scharmoorweg");
        break;
    }
    case 277585:
    {
        returnValue = F("Scharnbergstieg");
        break;
    }
    case 277586:
    {
        returnValue = F("Scharnebeck");
        break;
    }
    case 277587:
    {
        returnValue = F("Scharnebecker Str.");
        break;
    }
    case 277588:
    {
        returnValue = F("Scharnebecker Weg");
        break;
    }
    case 277589:
    {
        returnValue = F("Scharngasse");
        break;
    }
    case 277590:
    {
        returnValue = F("Scharngrund");
        break;
    }
    case 277591:
    {
        returnValue = F("Scharnhagener Str.");
        break;
    }
    case 277592:
    {
        returnValue = F("Scharnhauser Str.");
        break;
    }
    case 277593:
    {
        returnValue = F("Scharnhauser Weg");
        break;
    }
    case 277594:
    {
        returnValue = F("Scharnholzweg");
        break;
    }
    case 277595:
    {
        returnValue = F("Scharnhorst");
        break;
    }
    case 277596:
    {
        returnValue = F("Scharnhorster Kirchenplatz");
        break;
    }
    case 277597:
    {
        returnValue = F("Scharnhorster Weg");
        break;
    }
    case 277598:
    {
        returnValue = F("Scharnhorstplatz");
        break;
    }
    case 277599:
    {
        returnValue = F("Scharnhorstring");
        break;
    }
    case 277600:
    {
        returnValue = F("Scharnhorststr.");
        break;
    }
    case 277601:
    {
        returnValue = F("Scharnhorstweg");
        break;
    }
    case 277602:
    {
        returnValue = F("Scharnhusenplatz");
        break;
    }
    case 277603:
    {
        returnValue = F("Scharnhäuser Str.");
        break;
    }
    case 277604:
    {
        returnValue = F("Scharnhölzfeld");
        break;
    }
    case 277605:
    {
        returnValue = F("Scharnhölzstr.");
        break;
    }
    case 277606:
    {
        returnValue = F("Scharnikaustr.");
        break;
    }
    case 277607:
    {
        returnValue = F("Scharnitzer Str.");
        break;
    }
    case 277608:
    {
        returnValue = F("Scharnitzer Weg");
        break;
    }
    case 277609:
    {
        returnValue = F("Scharnstedter Weg");
        break;
    }
    case 277610:
    {
        returnValue = F("Scharnstr.");
        break;
    }
    case 277611:
    {
        returnValue = F("Scharnweberstr.");
        break;
    }
    case 277612:
    {
        returnValue = F("Scharoldstr.");
        break;
    }
    case 277613:
    {
        returnValue = F("Scharottweg");
        break;
    }
    case 277614:
    {
        returnValue = F("Scharounweg");
        break;
    }
    case 277615:
    {
        returnValue = F("Scharpackerweg");
        break;
    }
    case 277616:
    {
        returnValue = F("Scharpenacker Weg");
        break;
    }
    case 277617:
    {
        returnValue = F("Scharpenberg");
        break;
    }
    case 277618:
    {
        returnValue = F("Scharpenberger Str.");
        break;
    }
    case 277619:
    {
        returnValue = F("Scharpenbergweg");
        break;
    }
    case 277620:
    {
        returnValue = F("Scharpenhausweg");
        break;
    }
    case 277621:
    {
        returnValue = F("Scharpenhufer Str.");
        break;
    }
    case 277622:
    {
        returnValue = F("Scharpenkamp");
        break;
    }
    case 277623:
    {
        returnValue = F("Scharpenmoor");
        break;
    }
    case 277624:
    {
        returnValue = F("Scharpenseelstr.");
        break;
    }
    case 277625:
    {
        returnValue = F("Scharpenstein");
        break;
    }
    case 277626:
    {
        returnValue = F("Scharpenwinkel");
        break;
    }
    case 277627:
    {
        returnValue = F("Scharperloh");
        break;
    }
    case 277628:
    {
        returnValue = F("Scharpfad");
        break;
    }
    case 277629:
    {
        returnValue = F("Scharpffstr.");
        break;
    }
    case 277630:
    {
        returnValue = F("Scharpitz");
        break;
    }
    case 277631:
    {
        returnValue = F("Scharpmannstr.");
        break;
    }
    case 277632:
    {
        returnValue = F("Scharpness");
        break;
    }
    case 277633:
    {
        returnValue = F("Scharpschnute");
        break;
    }
    case 277634:
    {
        returnValue = F("Scharpwinkelring");
        break;
    }
    case 277635:
    {
        returnValue = F("Scharr");
        break;
    }
    case 277636:
    {
        returnValue = F("Scharrebenstr.");
        break;
    }
    case 277637:
    {
        returnValue = F("Scharrel");
        break;
    }
    case 277638:
    {
        returnValue = F("Scharreler Damm");
        break;
    }
    case 277639:
    {
        returnValue = F("Scharreler Str.");
        break;
    }
    case 277640:
    {
        returnValue = F("Scharren");
        break;
    }
    case 277641:
    {
        returnValue = F("Scharrenberg");
        break;
    }
    case 277642:
    {
        returnValue = F("Scharrenberger Damm");
        break;
    }
    case 277643:
    {
        returnValue = F("Scharrenberger Str.");
        break;
    }
    case 277644:
    {
        returnValue = F("Scharrenbroicher Str.");
        break;
    }
    case 277645:
    {
        returnValue = F("Scharrenbroichweg");
        break;
    }
    case 277646:
    {
        returnValue = F("Scharrengasse");
        break;
    }
    case 277647:
    {
        returnValue = F("Scharrenkamp");
        break;
    }
    case 277648:
    {
        returnValue = F("Scharrenstr.");
        break;
    }
    case 277649:
    {
        returnValue = F("Scharrenweg");
        break;
    }
    case 277650:
    {
        returnValue = F("Scharrergasse");
        break;
    }
    case 277651:
    {
        returnValue = F("Scharrerstr.");
        break;
    }
    case 277652:
    {
        returnValue = F("Scharretenackerweg");
        break;
    }
    case 277653:
    {
        returnValue = F("Scharrhof");
        break;
    }
    case 277654:
    {
        returnValue = F("Scharringhausen");
        break;
    }
    case 277655:
    {
        returnValue = F("Scharrkoppelweg");
        break;
    }
    case 277656:
    {
        returnValue = F("Scharrler Str.");
        break;
    }
    case 277657:
    {
        returnValue = F("Scharrler Weg");
        break;
    }
    case 277658:
    {
        returnValue = F("Scharrnstr.");
        break;
    }
    case 277659:
    {
        returnValue = F("Scharrstr.");
        break;
    }
    case 277660:
    {
        returnValue = F("Scharrweg");
        break;
    }
    case 277661:
    {
        returnValue = F("Scharsbergweg");
        break;
    }
    case 277662:
    {
        returnValue = F("Scharseekamp");
        break;
    }
    case 277663:
    {
        returnValue = F("Scharsenweg");
        break;
    }
    case 277664:
    {
        returnValue = F("Scharstorfer Str.");
        break;
    }
    case 277665:
    {
        returnValue = F("Scharstorfer Weg");
        break;
    }
    case 277666:
    {
        returnValue = F("Schartauer Dorfstr.");
        break;
    }
    case 277667:
    {
        returnValue = F("Schartaustr.");
        break;
    }
    case 277668:
    {
        returnValue = F("Schartelweg");
        break;
    }
    case 277669:
    {
        returnValue = F("Schartenbergstr.");
        break;
    }
    case 277670:
    {
        returnValue = F("Schartenbergweg");
        break;
    }
    case 277671:
    {
        returnValue = F("Schartenburgstr.");
        break;
    }
    case 277672:
    {
        returnValue = F("Schartensweg");
        break;
    }
    case 277673:
    {
        returnValue = F("Schartenweg");
        break;
    }
    case 277674:
    {
        returnValue = F("Schartgasse");
        break;
    }
    case 277675:
    {
        returnValue = F("Schartschrofenweg");
        break;
    }
    case 277676:
    {
        returnValue = F("Schartstr.");
        break;
    }
    case 277677:
    {
        returnValue = F("Schartweg");
        break;
    }
    case 277678:
    {
        returnValue = F("Schartwiesenweg");
        break;
    }
    case 277679:
    {
        returnValue = F("Schartzberg");
        break;
    }
    case 277680:
    {
        returnValue = F("Scharwacht");
        break;
    }
    case 277681:
    {
        returnValue = F("Scharweg");
        break;
    }
    case 277682:
    {
        returnValue = F("Scharwenka-Steig");
        break;
    }
    case 277683:
    {
        returnValue = F("Scharwerkstr.");
        break;
    }
    case 277684:
    {
        returnValue = F("Scharwinkelweg");
        break;
    }
    case 277685:
    {
        returnValue = F("Scharzbergstr.");
        break;
    }
    case 277686:
    {
        returnValue = F("Scharzfelder Str.");
        break;
    }
    case 277687:
    {
        returnValue = F("Scharzhofstr.");
        break;
    }
    case 277688:
    {
        returnValue = F("Schaselweg");
        break;
    }
    case 277689:
    {
        returnValue = F("Schashagener Str.");
        break;
    }
    case 277690:
    {
        returnValue = F("Schassen Koppel");
        break;
    }
    case 277691:
    {
        returnValue = F("Schate-Ost");
        break;
    }
    case 277692:
    {
        returnValue = F("Schate-West");
        break;
    }
    case 277693:
    {
        returnValue = F("Schatenstr.");
        break;
    }
    case 277694:
    {
        returnValue = F("Schatenweg");
        break;
    }
    case 277695:
    {
        returnValue = F("Schattannrundweg");
        break;
    }
    case 277696:
    {
        returnValue = F("Schattannweg");
        break;
    }
    case 277697:
    {
        returnValue = F("Schattanrundweg");
        break;
    }
    case 277698:
    {
        returnValue = F("Schattanweg");
        break;
    }
    case 277699:
    {
        returnValue = F("Schattbachstr.");
        break;
    }
    case 277700:
    {
        returnValue = F("Schattberg");
        break;
    }
    case 277701:
    {
        returnValue = F("Schattberger Str.");
        break;
    }
    case 277702:
    {
        returnValue = F("Schattbergweg");
        break;
    }
    case 277703:
    {
        returnValue = F("Schattdeichweg");
        break;
    }
    case 277704:
    {
        returnValue = F("Schatteburg Trift");
        break;
    }
    case 277705:
    {
        returnValue = F("Schatteburger Str.");
        break;
    }
    case 277706:
    {
        returnValue = F("Schatten");
        break;
    }
    case 277707:
    {
        returnValue = F("Schattenallee");
        break;
    }
    case 277708:
    {
        returnValue = F("Schattenaugasse");
        break;
    }
    case 277709:
    {
        returnValue = F("Schattenaustr.");
        break;
    }
    case 277710:
    {
        returnValue = F("Schattenbachstr.");
        break;
    }
    case 277711:
    {
        returnValue = F("Schattenberg");
        break;
    }
    case 277712:
    {
        returnValue = F("Schattenbergstr.");
        break;
    }
    case 277713:
    {
        returnValue = F("Schattenbergweg");
        break;
    }
    case 277714:
    {
        returnValue = F("Schattenbodenweg");
        break;
    }
    case 277715:
    {
        returnValue = F("Schattenhofergasse");
        break;
    }
    case 277716:
    {
        returnValue = F("Schattenmannstr.");
        break;
    }
    case 277717:
    {
        returnValue = F("Schattenmühle");
        break;
    }
    case 277718:
    {
        returnValue = F("Schattenmühlestr.");
        break;
    }
    case 277719:
    {
        returnValue = F("Schattenrainweg");
        break;
    }
    case 277720:
    {
        returnValue = F("Schattenser Weg");
        break;
    }
    case 277721:
    {
        returnValue = F("Schattenskamp");
        break;
    }
    case 277722:
    {
        returnValue = F("Schattensteg");
        break;
    }
    case 277723:
    {
        returnValue = F("Schattenstr.");
        break;
    }
    case 277724:
    {
        returnValue = F("Schattenwaldweg");
        break;
    }
    case 277725:
    {
        returnValue = F("Schattenwandgasse");
        break;
    }
    case 277726:
    {
        returnValue = F("Schattenweg");
        break;
    }
    case 277727:
    {
        returnValue = F("Schattenweiler Str.");
        break;
    }
    case 277728:
    {
        returnValue = F("Schattenwinkel");
        break;
    }
    case 277729:
    {
        returnValue = F("Schatterau");
        break;
    }
    case 277730:
    {
        returnValue = F("Schattertriesch");
        break;
    }
    case 277731:
    {
        returnValue = F("Schatterweg");
        break;
    }
    case 277732:
    {
        returnValue = F("Schatteröder Weg");
        break;
    }
    case 277733:
    {
        returnValue = F("Schatthaldenweg");
        break;
    }
    case 277734:
    {
        returnValue = F("Schatthauser Str.");
        break;
    }
    case 277735:
    {
        returnValue = F("Schatthauser Weg");
        break;
    }
    case 277736:
    {
        returnValue = F("Schatthausstr.");
        break;
    }
    case 277737:
    {
        returnValue = F("Schatthäuser Str.");
        break;
    }
    case 277738:
    {
        returnValue = F("Schattiner Weg");
        break;
    }
    case 277739:
    {
        returnValue = F("Schattrainweg");
        break;
    }
    case 277740:
    {
        returnValue = F("Schattredder");
        break;
    }
    case 277741:
    {
        returnValue = F("Schattseitweg");
        break;
    }
    case 277742:
    {
        returnValue = F("Schattweg");
        break;
    }
    case 277743:
    {
        returnValue = F("Schatzberg");
        break;
    }
    case 277744:
    {
        returnValue = F("Schatzbergstr.");
        break;
    }
    case 277745:
    {
        returnValue = F("Schatzbergweg");
        break;
    }
    case 277746:
    {
        returnValue = F("Schatzbuckelweg");
        break;
    }
    case 277747:
    {
        returnValue = F("Schatzbühl-Fußweg");
        break;
    }
    case 277748:
    {
        returnValue = F("Schatzelweg");
        break;
    }
    case 277749:
    {
        returnValue = F("Schatzenberg");
        break;
    }
    case 277750:
    {
        returnValue = F("Schatzensteinweg");
        break;
    }
    case 277751:
    {
        returnValue = F("Schatzgerstr.");
        break;
    }
    case 277752:
    {
        returnValue = F("Schatzgrabenweg");
        break;
    }
    case 277753:
    {
        returnValue = F("Schatzgrube");
        break;
    }
    case 277754:
    {
        returnValue = F("Schatzhofen");
        break;
    }
    case 277755:
    {
        returnValue = F("Schatzinsel");
        break;
    }
    case 277756:
    {
        returnValue = F("Schatzkammer");
        break;
    }
    case 277757:
    {
        returnValue = F("Schatzkammerstr.");
        break;
    }
    case 277758:
    {
        returnValue = F("Schatzkammerweg");
        break;
    }
    case 277759:
    {
        returnValue = F("Schatzkiste");
        break;
    }
    case 277760:
    {
        returnValue = F("Schatzmoor");
        break;
    }
    case 277761:
    {
        returnValue = F("Schatzstr.");
        break;
    }
    case 277762:
    {
        returnValue = F("Schatzungsstr.");
        break;
    }
    case 277763:
    {
        returnValue = F("Schatzweg");
        break;
    }
    case 277764:
    {
        returnValue = F("Schatzäckerweg");
        break;
    }
    case 277765:
    {
        returnValue = F("Schau Ins Land");
        break;
    }
    case 277766:
    {
        returnValue = F("Schau ins Land");
        break;
    }
    case 277767:
    {
        returnValue = F("Schau- und Sichtungsgarten Hermannshof");
        break;
    }
    case 277768:
    {
        returnValue = F("Schau-ins-Land");
        break;
    }
    case 277769:
    {
        returnValue = F("Schauacker");
        break;
    }
    case 277770:
    {
        returnValue = F("Schaubachstr.");
        break;
    }
    case 277771:
    {
        returnValue = F("Schauberg");
        break;
    }
    case 277772:
    {
        returnValue = F("Schauberger Str.");
        break;
    }
    case 277773:
    {
        returnValue = F("Schaubergstr.");
        break;
    }
    case 277774:
    {
        returnValue = F("Schaubert");
        break;
    }
    case 277775:
    {
        returnValue = F("Schauberthalde");
        break;
    }
    case 277776:
    {
        returnValue = F("Schauberweg");
        break;
    }
    case 277777:
    {
        returnValue = F("Schaubildweg");
        break;
    }
    case 277778:
    {
        returnValue = F("Schaubingerstr.");
        break;
    }
    case 277779:
    {
        returnValue = F("Schaublohe");
        break;
    }
    case 277780:
    {
        returnValue = F("Schaubmühlstr.");
        break;
    }
    case 277781:
    {
        returnValue = F("Schaubstr.");
        break;
    }
    case 277782:
    {
        returnValue = F("Schauby");
        break;
    }
    case 277783:
    {
        returnValue = F("Schauchertstr.");
        break;
    }
    case 277784:
    {
        returnValue = F("Schaudistr.");
        break;
    }
    case 277785:
    {
        returnValue = F("Schaudorfstr.");
        break;
    }
    case 277786:
    {
        returnValue = F("Schauenburger Platz");
        break;
    }
    case 277787:
    {
        returnValue = F("Schauenburger Str.");
        break;
    }
    case 277788:
    {
        returnValue = F("Schauenburger Weg");
        break;
    }
    case 277789:
    {
        returnValue = F("Schauenburgerstr.");
        break;
    }
    case 277790:
    {
        returnValue = F("Schauenburgstr.");
        break;
    }
    case 277791:
    {
        returnValue = F("Schauenburgweg");
        break;
    }
    case 277792:
    {
        returnValue = F("Schauendahlerweg");
        break;
    }
    case 277793:
    {
        returnValue = F("Schauener Str.");
        break;
    }
    case 277794:
    {
        returnValue = F("Schauener Weg");
        break;
    }
    case 277795:
    {
        returnValue = F("Schauenplatz");
        break;
    }
    case 277796:
    {
        returnValue = F("Schauenroth");
        break;
    }
    case 277797:
    {
        returnValue = F("Schauensteiner Str.");
        break;
    }
    case 277798:
    {
        returnValue = F("Schauensteiner Weg");
        break;
    }
    case 277799:
    {
        returnValue = F("Schauenstr.");
        break;
    }
    case 277800:
    {
        returnValue = F("Schauenteichen");
        break;
    }
    case 277801:
    {
        returnValue = F("Schauerbachweg");
        break;
    }
    case 277802:
    {
        returnValue = F("Schauergasse");
        break;
    }
    case 277803:
    {
        returnValue = F("Schauerhofstr.");
        break;
    }
    case 277804:
    {
        returnValue = F("Schauerkreuzstr.");
        break;
    }
    case 277805:
    {
        returnValue = F("Schauernheimer Str.");
        break;
    }
    case 277806:
    {
        returnValue = F("Schauernheimer Weg");
        break;
    }
    case 277807:
    {
        returnValue = F("Schauernweg");
        break;
    }
    case 277808:
    {
        returnValue = F("Schauerstr.");
        break;
    }
    case 277809:
    {
        returnValue = F("Schauertal");
        break;
    }
    case 277810:
    {
        returnValue = F("Schauerwaldweg");
        break;
    }
    case 277811:
    {
        returnValue = F("Schauerweg");
        break;
    }
    case 277812:
    {
        returnValue = F("Schaufelbuck");
        break;
    }
    case 277813:
    {
        returnValue = F("Schaufelder Str.");
        break;
    }
    case 277814:
    {
        returnValue = F("Schaufelhammer");
        break;
    }
    case 277815:
    {
        returnValue = F("Schaufelsgraben");
        break;
    }
    case 277816:
    {
        returnValue = F("Schaufelsteige");
        break;
    }
    case 277817:
    {
        returnValue = F("Schaufelstiel");
        break;
    }
    case 277818:
    {
        returnValue = F("Schaufeläcker");
        break;
    }
    case 277819:
    {
        returnValue = F("Schaufenberg");
        break;
    }
    case 277820:
    {
        returnValue = F("Schaufenberger Str.");
        break;
    }
    case 277821:
    {
        returnValue = F("Schaufenberger Weg");
        break;
    }
    case 277822:
    {
        returnValue = F("Schaufenhauer Talweg");
        break;
    }
    case 277823:
    {
        returnValue = F("Schaufenhauer Weg");
        break;
    }
    case 277824:
    {
        returnValue = F("Schaufenster Fischereihafen");
        break;
    }
    case 277825:
    {
        returnValue = F("Schaufertsstr.");
        break;
    }
    case 277826:
    {
        returnValue = F("Schaufertstr.");
        break;
    }
    case 277827:
    {
        returnValue = F("Schaufertweg");
        break;
    }
    case 277828:
    {
        returnValue = F("Schaufflerstr.");
        break;
    }
    case 277829:
    {
        returnValue = F("Schauflinger Str.");
        break;
    }
    case 277830:
    {
        returnValue = F("Schaufußgasse");
        break;
    }
    case 277831:
    {
        returnValue = F("Schaufußstr.");
        break;
    }
    case 277832:
    {
        returnValue = F("Schaugarten");
        break;
    }
    case 277833:
    {
        returnValue = F("Schaugarten Handwerkerpark");
        break;
    }
    case 277834:
    {
        returnValue = F("Schauimkerei");
        break;
    }
    case 277835:
    {
        returnValue = F("Schauinsland");
        break;
    }
    case 277836:
    {
        returnValue = F("Schauinslandstr.");
        break;
    }
    case 277837:
    {
        returnValue = F("Schauinslandweg");
        break;
    }
    case 277838:
    {
        returnValue = F("Schaukelbrücke");
        break;
    }
    case 277839:
    {
        returnValue = F("Schaukelpferd");
        break;
    }
    case 277840:
    {
        returnValue = F("Schaukelsteg");
        break;
    }
    case 277841:
    {
        returnValue = F("Schaulandweg");
        break;
    }
    case 277842:
    {
        returnValue = F("Schaulenborg");
        break;
    }
    case 277843:
    {
        returnValue = F("Schaulihdenwech");
        break;
    }
    case 277844:
    {
        returnValue = F("Schaulland");
        break;
    }
    case 277845:
    {
        returnValue = F("Schaulpadd");
        break;
    }
    case 277846:
    {
        returnValue = F("Schaulstraten");
        break;
    }
    case 277847:
    {
        returnValue = F("Schaumainkai");
        break;
    }
    case 277848:
    {
        returnValue = F("Schaumanns Hof");
        break;
    }
    case 277849:
    {
        returnValue = F("Schaumanns Kamp");
        break;
    }
    case 277850:
    {
        returnValue = F("Schaumbeckstr.");
        break;
    }
    case 277851:
    {
        returnValue = F("Schaumberg");
        break;
    }
    case 277852:
    {
        returnValue = F("Schaumberger Platz");
        break;
    }
    case 277853:
    {
        returnValue = F("Schaumberger Str.");
        break;
    }
    case 277854:
    {
        returnValue = F("Schaumbergerstr.");
        break;
    }
    case 277855:
    {
        returnValue = F("Schaumbergerweg");
        break;
    }
    case 277856:
    {
        returnValue = F("Schaumbergplatz");
        break;
    }
    case 277857:
    {
        returnValue = F("Schaumbergring");
        break;
    }
    case 277858:
    {
        returnValue = F("Schaumbergstr.");
        break;
    }
    case 277859:
    {
        returnValue = F("Schaumbergweg");
        break;
    }
    case 277860:
    {
        returnValue = F("Schaumburg-Lippe-Str.");
        break;
    }
    case 277861:
    {
        returnValue = F("Schaumburger Landstr.");
        break;
    }
    case 277862:
    {
        returnValue = F("Schaumburger Str.");
        break;
    }
    case 277863:
    {
        returnValue = F("Schaumburger Weg");
        break;
    }
    case 277864:
    {
        returnValue = F("Schaumburgerstr.");
        break;
    }
    case 277865:
    {
        returnValue = F("Schaumburggasse");
        break;
    }
    case 277866:
    {
        returnValue = F("Schaumburgstr.");
        break;
    }
    case 277867:
    {
        returnValue = F("Schaumburgweg");
        break;
    }
    case 277868:
    {
        returnValue = F("Schaumgasse");
        break;
    }
    case 277869:
    {
        returnValue = F("Schaumkrautweg");
        break;
    }
    case 277870:
    {
        returnValue = F("Schauneckstr.");
        break;
    }
    case 277871:
    {
        returnValue = F("Schaupenstiel");
        break;
    }
    case 277872:
    {
        returnValue = F("Schauppstr.");
        break;
    }
    case 277873:
    {
        returnValue = F("Schaurain");
        break;
    }
    case 277874:
    {
        returnValue = F("Schaurener Weg");
        break;
    }
    case 277875:
    {
        returnValue = F("Schaurtestr.");
        break;
    }
    case 277876:
    {
        returnValue = F("Schaus Hof");
        break;
    }
    case 277877:
    {
        returnValue = F("Schausacker");
        break;
    }
    case 277878:
    {
        returnValue = F("Schausters Padd");
        break;
    }
    case 277879:
    {
        returnValue = F("Schausterstraat");
        break;
    }
    case 277880:
    {
        returnValue = F("Schauteweg");
        break;
    }
    case 277881:
    {
        returnValue = F("Schauwiesstr.");
        break;
    }
    case 277882:
    {
        returnValue = F("Schauwinkelweg");
        break;
    }
    case 277883:
    {
        returnValue = F("Schavener Weg");
        break;
    }
    case 277884:
    {
        returnValue = F("Schawinskyweg");
        break;
    }
    case 277885:
    {
        returnValue = F("Schaßstr.");
        break;
    }
    case 277886:
    {
        returnValue = F("Schebbel");
        break;
    }
    case 277887:
    {
        returnValue = F("Schebeeksfeld");
        break;
    }
    case 277888:
    {
        returnValue = F("Schebenstr.");
        break;
    }
    case 277889:
    {
        returnValue = F("Schechener Str.");
        break;
    }
    case 277890:
    {
        returnValue = F("Schechinger Str.");
        break;
    }
    case 277891:
    {
        returnValue = F("Schechsengasse");
        break;
    }
    case 277892:
    {
        returnValue = F("Schechter-Schanze");
        break;
    }
    case 277893:
    {
        returnValue = F("Schechweg");
        break;
    }
    case 277894:
    {
        returnValue = F("Scheckenbachstr.");
        break;
    }
    case 277895:
    {
        returnValue = F("Scheckenblick");
        break;
    }
    case 277896:
    {
        returnValue = F("Scheckenbühlstr.");
        break;
    }
    case 277897:
    {
        returnValue = F("Scheckengasse");
        break;
    }
    case 277898:
    {
        returnValue = F("Scheckenhauser Str.");
        break;
    }
    case 277899:
    {
        returnValue = F("Scheckenheide");
        break;
    }
    case 277900:
    {
        returnValue = F("Scheckenhofen");
        break;
    }
    case 277901:
    {
        returnValue = F("Scheckenhofer Weg");
        break;
    }
    case 277902:
    {
        returnValue = F("Scheckenhoferstr.");
        break;
    }
    case 277903:
    {
        returnValue = F("Scheckenweg");
        break;
    }
    case 277904:
    {
        returnValue = F("Scheckersgraben");
        break;
    }
    case 277905:
    {
        returnValue = F("Scheckiglochweg");
        break;
    }
    case 277906:
    {
        returnValue = F("Scheckmühle");
        break;
    }
    case 277907:
    {
        returnValue = F("Scheckstr.");
        break;
    }
    case 277908:
    {
        returnValue = F("Scheddebrock");
        break;
    }
    case 277909:
    {
        returnValue = F("Schedelbergweg");
        break;
    }
    case 277910:
    {
        returnValue = F("Schedelgasse");
        break;
    }
    case 277911:
    {
        returnValue = F("Schedelichstr.");
        break;
    }
    case 277912:
    {
        returnValue = F("Schedelstr.");
        break;
    }
    case 277913:
    {
        returnValue = F("Schedelweg");
        break;
    }
    case 277914:
    {
        returnValue = F("Schedemannsweg");
        break;
    }
    case 277915:
    {
        returnValue = F("Schedener Weg");
        break;
    }
    case 277916:
    {
        returnValue = F("Schedenweg");
        break;
    }
    case 277917:
    {
        returnValue = F("Schederberge");
        break;
    }
    case 277918:
    {
        returnValue = F("Schedergrund");
        break;
    }
    case 277919:
    {
        returnValue = F("Schederweg");
        break;
    }
    case 277920:
    {
        returnValue = F("Schedestr.");
        break;
    }
    case 277921:
    {
        returnValue = F("Schedetalweg");
        break;
    }
    case 277922:
    {
        returnValue = F("Schedeweg");
        break;
    }
    case 277923:
    {
        returnValue = F("Schedewitzer Brücke");
        break;
    }
    case 277924:
    {
        returnValue = F("Schedewitzer Str.");
        break;
    }
    case 277925:
    {
        returnValue = F("Schedlerstr.");
        break;
    }
    case 277926:
    {
        returnValue = F("Schedlhofstr.");
        break;
    }
    case 277927:
    {
        returnValue = F("Schedlichstr.");
        break;
    }
    case 277928:
    {
        returnValue = F("Schedlweg");
        break;
    }
    case 277929:
    {
        returnValue = F("Scheebrook");
        break;
    }
    case 277930:
    {
        returnValue = F("Scheeder Weg");
        break;
    }
    case 277931:
    {
        returnValue = F("Scheederstr.");
        break;
    }
    case 277932:
    {
        returnValue = F("Scheefenkamp");
        break;
    }
    case 277933:
    {
        returnValue = F("Scheefkoppel");
        break;
    }
    case 277934:
    {
        returnValue = F("Scheelbergstr.");
        break;
    }
    case 277935:
    {
        returnValue = F("Scheele Gasse");
        break;
    }
    case 277936:
    {
        returnValue = F("Scheelegasse");
        break;
    }
    case 277937:
    {
        returnValue = F("Scheelen Hoff");
        break;
    }
    case 277938:
    {
        returnValue = F("Scheelendamm");
        break;
    }
    case 277939:
    {
        returnValue = F("Scheelenhorst");
        break;
    }
    case 277940:
    {
        returnValue = F("Scheelenkamp");
        break;
    }
    case 277941:
    {
        returnValue = F("Scheelenstr.");
        break;
    }
    case 277942:
    {
        returnValue = F("Scheelenweg");
        break;
    }
    case 277943:
    {
        returnValue = F("Scheeler Mühle");
        break;
    }
    case 277944:
    {
        returnValue = F("Scheelestr.");
        break;
    }
    case 277945:
    {
        returnValue = F("Scheeleweg");
        break;
    }
    case 277946:
    {
        returnValue = F("Scheelholz");
        break;
    }
    case 277947:
    {
        returnValue = F("Scheelkenhof");
        break;
    }
    case 277948:
    {
        returnValue = F("Scheelkopf");
        break;
    }
    case 277949:
    {
        returnValue = F("Scheelsberg");
        break;
    }
    case 277950:
    {
        returnValue = F("Scheelstr.");
        break;
    }
    case 277951:
    {
        returnValue = F("Scheeltenstr.");
        break;
    }
    case 277952:
    {
        returnValue = F("Scheelweg");
        break;
    }
    case 277953:
    {
        returnValue = F("Scheemdaer Str.");
        break;
    }
    case 277954:
    {
        returnValue = F("Scheenbrandweg");
        break;
    }
    case 277955:
    {
        returnValue = F("Scheeper Weg");
        break;
    }
    case 277956:
    {
        returnValue = F("Scheepergang");
        break;
    }
    case 277957:
    {
        returnValue = F("Scheepermannsweg");
        break;
    }
    case 277958:
    {
        returnValue = F("Scheeperredder");
        break;
    }
    case 277959:
    {
        returnValue = F("Scheepers Dannen");
        break;
    }
    case 277960:
    {
        returnValue = F("Scheepersdyck");
        break;
    }
    case 277961:
    {
        returnValue = F("Scheeperskamp");
        break;
    }
    case 277962:
    {
        returnValue = F("Scheepersweg");
        break;
    }
    case 277963:
    {
        returnValue = F("Scheepsweg");
        break;
    }
    case 277964:
    {
        returnValue = F("Scheeracker");
        break;
    }
    case 277965:
    {
        returnValue = F("Scheerau");
        break;
    }
    case 277966:
    {
        returnValue = F("Scheerbachstr.");
        break;
    }
    case 277967:
    {
        returnValue = F("Scheerberg");
        break;
    }
    case 277968:
    {
        returnValue = F("Scheerenberg");
        break;
    }
    case 277969:
    {
        returnValue = F("Scheerenberger Str.");
        break;
    }
    case 277970:
    {
        returnValue = F("Scheerenbergweg");
        break;
    }
    case 277971:
    {
        returnValue = F("Scheerenburger Str.");
        break;
    }
    case 277972:
    {
        returnValue = F("Scheerener Str.");
        break;
    }
    case 277973:
    {
        returnValue = F("Scheerengasse");
        break;
    }
    case 277974:
    {
        returnValue = F("Scheerengraben");
        break;
    }
    case 277975:
    {
        returnValue = F("Scheerenstr.");
        break;
    }
    case 277976:
    {
        returnValue = F("Scheerenweg");
        break;
    }
    case 277977:
    {
        returnValue = F("Scheerer Str.");
        break;
    }
    case 277978:
    {
        returnValue = F("Scheerer Weg");
        break;
    }
    case 277979:
    {
        returnValue = F("Scheerersbergweg");
        break;
    }
    case 277980:
    {
        returnValue = F("Scheererstr.");
        break;
    }
    case 277981:
    {
        returnValue = F("Scheererswinkel");
        break;
    }
    case 277982:
    {
        returnValue = F("Scheeresgasse");
        break;
    }
    case 277983:
    {
        returnValue = F("Scheergasse");
        break;
    }
    case 277984:
    {
        returnValue = F("Scheergrabenstr.");
        break;
    }
    case 277985:
    {
        returnValue = F("Scheergrund");
        break;
    }
    case 277986:
    {
        returnValue = F("Scheergrundweg");
        break;
    }
    case 277987:
    {
        returnValue = F("Scheerhorner Land");
        break;
    }
    case 277988:
    {
        returnValue = F("Scheerhorner Siedlung");
        break;
    }
    case 277989:
    {
        returnValue = F("Scheeringerstr.");
        break;
    }
    case 277990:
    {
        returnValue = F("Scheerortweg");
        break;
    }
    case 277991:
    {
        returnValue = F("Scheersbach");
        break;
    }
    case 277992:
    {
        returnValue = F("Scheersberg");
        break;
    }
    case 277993:
    {
        returnValue = F("Scheerstr.");
        break;
    }
    case 277994:
    {
        returnValue = F("Scheerstädter Weg");
        break;
    }
    case 277995:
    {
        returnValue = F("Scheerwaldschneise");
        break;
    }
    case 277996:
    {
        returnValue = F("Scheerwiesen");
        break;
    }
    case 277997:
    {
        returnValue = F("Scheerwiesenweg");
        break;
    }
    case 277998:
    {
        returnValue = F("Scheerwinkel");
        break;
    }
    case 277999:
    {
        returnValue = F("Scheerwässere");
        break;
    }
    case 278000:
    {
        returnValue = F("Scheesgasse");
        break;
    }
    case 278001:
    {
        returnValue = F("Scheewbarg");
        break;
    }
    case 278002:
    {
        returnValue = F("Scheeweg");
        break;
    }
    case 278003:
    {
        returnValue = F("Scheewinkel");
        break;
    }
    case 278004:
    {
        returnValue = F("Scheeßeler Str.");
        break;
    }
    case 278005:
    {
        returnValue = F("Schefenacker");
        break;
    }
    case 278006:
    {
        returnValue = F("Schefenackerstr.");
        break;
    }
    case 278007:
    {
        returnValue = F("Schefenäckerweg");
        break;
    }
    case 278008:
    {
        returnValue = F("Schefestr.");
        break;
    }
    case 278009:
    {
        returnValue = F("Scheffau");
        break;
    }
    case 278010:
    {
        returnValue = F("Scheffauer Str.");
        break;
    }
    case 278011:
    {
        returnValue = F("Scheffel");
        break;
    }
    case 278012:
    {
        returnValue = F("Scheffel-Platz");
        break;
    }
    case 278013:
    {
        returnValue = F("Scheffel-Privatstr.");
        break;
    }
    case 278014:
    {
        returnValue = F("Scheffelfeld");
        break;
    }
    case 278015:
    {
        returnValue = F("Scheffelgrund");
        break;
    }
    case 278016:
    {
        returnValue = F("Scheffelhof");
        break;
    }
    case 278017:
    {
        returnValue = F("Scheffelpark");
        break;
    }
    case 278018:
    {
        returnValue = F("Scheffelpfad");
        break;
    }
    case 278019:
    {
        returnValue = F("Scheffelplatz");
        break;
    }
    case 278020:
    {
        returnValue = F("Scheffelplatzbrücke");
        break;
    }
    case 278021:
    {
        returnValue = F("Scheffelring");
        break;
    }
    case 278022:
    {
        returnValue = F("Scheffelsteige");
        break;
    }
    case 278023:
    {
        returnValue = F("Scheffelstr.");
        break;
    }
    case 278024:
    {
        returnValue = F("Scheffelstraßr");
        break;
    }
    case 278025:
    {
        returnValue = F("Scheffeltgasse");
        break;
    }
    case 278026:
    {
        returnValue = F("Scheffelweg");
        break;
    }
    case 278027:
    {
        returnValue = F("Scheffenhof");
        break;
    }
    case 278028:
    {
        returnValue = F("Scheffenkamp");
        break;
    }
    case 278029:
    {
        returnValue = F("Scheffensweg");
        break;
    }
    case 278030:
    {
        returnValue = F("Scheffenthum");
        break;
    }
    case 278031:
    {
        returnValue = F("Schefferei");
        break;
    }
    case 278032:
    {
        returnValue = F("Schefferfeld");
        break;
    }
    case 278033:
    {
        returnValue = F("Scheffershof");
        break;
    }
    case 278034:
    {
        returnValue = F("Schefferstr.");
        break;
    }
    case 278035:
    {
        returnValue = F("Schefflenzer Str.");
        break;
    }
    case 278036:
    {
        returnValue = F("Schefflenzstr.");
        break;
    }
    case 278037:
    {
        returnValue = F("Schefflenztalstr.");
        break;
    }
    case 278038:
    {
        returnValue = F("Schefflerring");
        break;
    }
    case 278039:
    {
        returnValue = F("Schefflerstr.");
        break;
    }
    case 278040:
    {
        returnValue = F("Schefflerweg");
        break;
    }
    case 278041:
    {
        returnValue = F("Scheffoldstr.");
        break;
    }
    case 278042:
    {
        returnValue = F("Scheffweg");
        break;
    }
    case 278043:
    {
        returnValue = F("Scheftheimer Weg");
        break;
    }
    case 278044:
    {
        returnValue = F("Scheggerotter Str.");
        break;
    }
    case 278045:
    {
        returnValue = F("Scheggerotter Weg");
        break;
    }
    case 278046:
    {
        returnValue = F("Scheggerottfeld");
        break;
    }
    case 278047:
    {
        returnValue = F("Schehlenstr.");
        break;
    }
    case 278048:
    {
        returnValue = F("Schehlharth");
        break;
    }
    case 278049:
    {
        returnValue = F("Schehnberger Weg");
        break;
    }
    case 278050:
    {
        returnValue = F("Scheib");
        break;
    }
    case 278051:
    {
        returnValue = F("Scheibbser Str.");
        break;
    }
    case 278052:
    {
        returnValue = F("Scheibe");
        break;
    }
    case 278053:
    {
        returnValue = F("Scheibe-Gut");
        break;
    }
    case 278054:
    {
        returnValue = F("Scheibelbuschweg");
        break;
    }
    case 278055:
    {
        returnValue = F("Scheibelfeld");
        break;
    }
    case 278056:
    {
        returnValue = F("Scheibelgarten");
        break;
    }
    case 278057:
    {
        returnValue = F("Scheibelingsweg");
        break;
    }
    case 278058:
    {
        returnValue = F("Scheibelleithe");
        break;
    }
    case 278059:
    {
        returnValue = F("Scheibelstr.");
        break;
    }
    case 278060:
    {
        returnValue = F("Scheibelweg");
        break;
    }
    case 278061:
    {
        returnValue = F("Scheibelwies");
        break;
    }
    case 278062:
    {
        returnValue = F("Scheibenackerweg");
        break;
    }
    case 278063:
    {
        returnValue = F("Scheibenberg");
        break;
    }
    case 278064:
    {
        returnValue = F("Scheibenberger Str.");
        break;
    }
    case 278065:
    {
        returnValue = F("Scheibenbergstr.");
        break;
    }
    case 278066:
    {
        returnValue = F("Scheibenbergsweg");
        break;
    }
    case 278067:
    {
        returnValue = F("Scheibenbergtraufweg");
        break;
    }
    case 278068:
    {
        returnValue = F("Scheibenbergweg");
        break;
    }
    case 278069:
    {
        returnValue = F("Scheibenbier");
        break;
    }
    case 278070:
    {
        returnValue = F("Scheibenbrink");
        break;
    }
    case 278071:
    {
        returnValue = F("Scheibenbuckstr.");
        break;
    }
    case 278072:
    {
        returnValue = F("Scheibenbuckweg");
        break;
    }
    case 278073:
    {
        returnValue = F("Scheibenbuschstr.");
        break;
    }
    case 278074:
    {
        returnValue = F("Scheibenbuschweg");
        break;
    }
    case 278075:
    {
        returnValue = F("Scheibenbußstr.");
        break;
    }
    case 278076:
    {
        returnValue = F("Scheibenbühl");
        break;
    }
    case 278077:
    {
        returnValue = F("Scheibenbühlstr.");
        break;
    }
    case 278078:
    {
        returnValue = F("Scheibenbühlweg");
        break;
    }
    case 278079:
    {
        returnValue = F("Scheibener Str.");
        break;
    }
    case 278080:
    {
        returnValue = F("Scheibenfeld");
        break;
    }
    case 278081:
    {
        returnValue = F("Scheibenfeldweg");
        break;
    }
    case 278082:
    {
        returnValue = F("Scheibenfelsenweg");
        break;
    }
    case 278083:
    {
        returnValue = F("Scheibengasse");
        break;
    }
    case 278084:
    {
        returnValue = F("Scheibengipfeltunnel");
        break;
    }
    case 278085:
    {
        returnValue = F("Scheibengraben");
        break;
    }
    case 278086:
    {
        returnValue = F("Scheibenhalde");
        break;
    }
    case 278087:
    {
        returnValue = F("Scheibenhardter Allee");
        break;
    }
    case 278088:
    {
        returnValue = F("Scheibenhardter Str.");
        break;
    }
    case 278089:
    {
        returnValue = F("Scheibenhardter Weg");
        break;
    }
    case 278090:
    {
        returnValue = F("Scheibenhaus");
        break;
    }
    case 278091:
    {
        returnValue = F("Scheibenhof");
        break;
    }
    case 278092:
    {
        returnValue = F("Scheibenhäuser");
        break;
    }
    case 278093:
    {
        returnValue = F("Scheibenkamp");
        break;
    }
    case 278094:
    {
        returnValue = F("Scheibenmühlenstr.");
        break;
    }
    case 278095:
    {
        returnValue = F("Scheibenrain");
        break;
    }
    case 278096:
    {
        returnValue = F("Scheibenrainstr.");
        break;
    }
    case 278097:
    {
        returnValue = F("Scheibenschneise");
        break;
    }
    case 278098:
    {
        returnValue = F("Scheibensee Schneise");
        break;
    }
    case 278099:
    {
        returnValue = F("Scheibenseeschneise");
        break;
    }
    case 278100:
    {
        returnValue = F("Scheibenseeweg");
        break;
    }
    case 278101:
    {
        returnValue = F("Scheibenstr.");
        break;
    }
    case 278102:
    {
        returnValue = F("Scheibenstuhlweg");
        break;
    }
    case 278103:
    {
        returnValue = F("Scheibental");
        break;
    }
    case 278104:
    {
        returnValue = F("Scheibentränkschneise");
        break;
    }
    case 278105:
    {
        returnValue = F("Scheibenwandstr.");
        break;
    }
    case 278106:
    {
        returnValue = F("Scheibenweg");
        break;
    }
    case 278107:
    {
        returnValue = F("Scheibenwiesen");
        break;
    }
    case 278108:
    {
        returnValue = F("Scheibenwiesenweg");
        break;
    }
    case 278109:
    {
        returnValue = F("Scheibenäckerweg");
        break;
    }
    case 278110:
    {
        returnValue = F("Scheiber Atzeleck");
        break;
    }
    case 278111:
    {
        returnValue = F("Scheiberfeld");
        break;
    }
    case 278112:
    {
        returnValue = F("Scheiberfelderstr.");
        break;
    }
    case 278113:
    {
        returnValue = F("Scheiberling");
        break;
    }
    case 278114:
    {
        returnValue = F("Scheiberlohstr.");
        break;
    }
    case 278115:
    {
        returnValue = F("Scheiberweg");
        break;
    }
    case 278116:
    {
        returnValue = F("Scheibeweg");
        break;
    }
    case 278117:
    {
        returnValue = F("Scheiblbachweg");
        break;
    }
    case 278118:
    {
        returnValue = F("Scheibleinweg");
        break;
    }
    case 278119:
    {
        returnValue = F("Scheiblerstr.");
        break;
    }
    case 278120:
    {
        returnValue = F("Scheiblesgasse");
        break;
    }
    case 278121:
    {
        returnValue = F("Scheiblfeldweg");
        break;
    }
    case 278122:
    {
        returnValue = F("Scheiblfleck");
        break;
    }
    case 278123:
    {
        returnValue = F("Scheiblingstr.");
        break;
    }
    case 278124:
    {
        returnValue = F("Scheiblweg");
        break;
    }
    case 278125:
    {
        returnValue = F("Scheibnerstr.");
        break;
    }
    case 278126:
    {
        returnValue = F("Scheibnerweg");
        break;
    }
    case 278127:
    {
        returnValue = F("Scheibstr.");
        break;
    }
    case 278128:
    {
        returnValue = F("Scheichenbergstr.");
        break;
    }
    case 278129:
    {
        returnValue = F("Scheid");
        break;
    }
    case 278130:
    {
        returnValue = F("Scheidbachweg");
        break;
    }
    case 278131:
    {
        returnValue = F("Scheidbergstr.");
        break;
    }
    case 278132:
    {
        returnValue = F("Scheidebach");
        break;
    }
    case 278133:
    {
        returnValue = F("Scheidebuschstr.");
        break;
    }
    case 278134:
    {
        returnValue = F("Scheidecker Ring");
        break;
    }
    case 278135:
    {
        returnValue = F("Scheideckerweg");
        break;
    }
    case 278136:
    {
        returnValue = F("Scheideckstr.");
        break;
    }
    case 278137:
    {
        returnValue = F("Scheidegasse");
        break;
    }
    case 278138:
    {
        returnValue = F("Scheidegger Str.");
        break;
    }
    case 278139:
    {
        returnValue = F("Scheidegger Weg");
        break;
    }
    case 278140:
    {
        returnValue = F("Scheidegrabenweg");
        break;
    }
    case 278141:
    {
        returnValue = F("Scheideheck");
        break;
    }
    case 278142:
    {
        returnValue = F("Scheidehecke");
        break;
    }
    case 278143:
    {
        returnValue = F("Scheideichenweg");
        break;
    }
    case 278144:
    {
        returnValue = F("Scheidekoppel");
        break;
    }
    case 278145:
    {
        returnValue = F("Scheidekrug");
        break;
    }
    case 278146:
    {
        returnValue = F("Scheideller Weg");
        break;
    }
    case 278147:
    {
        returnValue = F("Scheidelsgasse");
        break;
    }
    case 278148:
    {
        returnValue = F("Scheidelwitzer Weg");
        break;
    }
    case 278149:
    {
        returnValue = F("Scheidemannstr.");
        break;
    }
    case 278150:
    {
        returnValue = F("Scheidemantelstr.");
        break;
    }
    case 278151:
    {
        returnValue = F("Scheidemantelweg");
        break;
    }
    case 278152:
    {
        returnValue = F("Scheidenberg");
        break;
    }
    case 278153:
    {
        returnValue = F("Scheidener Str.");
        break;
    }
    case 278154:
    {
        returnValue = F("Scheidengasse");
        break;
    }
    case 278155:
    {
        returnValue = F("Scheidenschneise");
        break;
    }
    case 278156:
    {
        returnValue = F("Scheidenstr.");
        break;
    }
    case 278157:
    {
        returnValue = F("Scheidentaler Str.");
        break;
    }
    case 278158:
    {
        returnValue = F("Scheidenweiler");
        break;
    }
    case 278159:
    {
        returnValue = F("Scheider Mühlenweg");
        break;
    }
    case 278160:
    {
        returnValue = F("Scheider Str.");
        break;
    }
    case 278161:
    {
        returnValue = F("Scheider Weg");
        break;
    }
    case 278162:
    {
        returnValue = F("Scheiderbergstr.");
        break;
    }
    case 278163:
    {
        returnValue = F("Scheiderhöher Str.");
        break;
    }
    case 278164:
    {
        returnValue = F("Scheiderstr.");
        break;
    }
    case 278165:
    {
        returnValue = F("Scheidertalstr.");
        break;
    }
    case 278166:
    {
        returnValue = F("Scheiderwald");
        break;
    }
    case 278167:
    {
        returnValue = F("Scheides Kamp");
        break;
    }
    case 278168:
    {
        returnValue = F("Scheideschloot");
        break;
    }
    case 278169:
    {
        returnValue = F("Scheideweg");
        break;
    }
    case 278170:
    {
        returnValue = F("Scheidewiehe");
        break;
    }
    case 278171:
    {
        returnValue = F("Scheidfeldstr.");
        break;
    }
    case 278172:
    {
        returnValue = F("Scheidfuhr");
        break;
    }
    case 278173:
    {
        returnValue = F("Scheidgraben");
        break;
    }
    case 278174:
    {
        returnValue = F("Scheidgrabenweg");
        break;
    }
    case 278175:
    {
        returnValue = F("Scheidigstr.");
        break;
    }
    case 278176:
    {
        returnValue = F("Scheidinger Str.");
        break;
    }
    case 278177:
    {
        returnValue = F("Scheidklinge");
        break;
    }
    case 278178:
    {
        returnValue = F("Scheidklingenweg");
        break;
    }
    case 278179:
    {
        returnValue = F("Scheidl Geräumt");
        break;
    }
    case 278180:
    {
        returnValue = F("Scheidlachweg");
        break;
    }
    case 278181:
    {
        returnValue = F("Scheidlerstr.");
        break;
    }
    case 278182:
    {
        returnValue = F("Scheidlingsmühlenweg");
        break;
    }
    case 278183:
    {
        returnValue = F("Scheidlinweg");
        break;
    }
    case 278184:
    {
        returnValue = F("Scheidsbacher Weg");
        break;
    }
    case 278185:
    {
        returnValue = F("Scheidsgasse");
        break;
    }
    case 278186:
    {
        returnValue = F("Scheidsiepen");
        break;
    }
    case 278187:
    {
        returnValue = F("Scheidskopfstr.");
        break;
    }
    case 278188:
    {
        returnValue = F("Scheidstr.");
        break;
    }
    case 278189:
    {
        returnValue = F("Scheidswaldstr.");
        break;
    }
    case 278190:
    {
        returnValue = F("Scheidsweg");
        break;
    }
    case 278191:
    {
        returnValue = F("Scheidt");
        break;
    }
    case 278192:
    {
        returnValue = F("Scheidtbachstr.");
        break;
    }
    case 278193:
    {
        returnValue = F("Scheidter Bruch");
        break;
    }
    case 278194:
    {
        returnValue = F("Scheidter Feld");
        break;
    }
    case 278195:
    {
        returnValue = F("Scheidter Str.");
        break;
    }
    case 278196:
    {
        returnValue = F("Scheidter Weg");
        break;
    }
    case 278197:
    {
        returnValue = F("Scheidterbachstr.");
        break;
    }
    case 278198:
    {
        returnValue = F("Scheidterbergstr.");
        break;
    }
    case 278199:
    {
        returnValue = F("Scheidterweg");
        break;
    }
    case 278200:
    {
        returnValue = F("Scheidtstr.");
        break;
    }
    case 278201:
    {
        returnValue = F("Scheidtweg");
        break;
    }
    case 278202:
    {
        returnValue = F("Scheidtweiler Hof");
        break;
    }
    case 278203:
    {
        returnValue = F("Scheidtweiler Weg");
        break;
    }
    case 278204:
    {
        returnValue = F("Scheidung");
        break;
    }
    case 278205:
    {
        returnValue = F("Scheidungsweg");
        break;
    }
    case 278206:
    {
        returnValue = F("Scheidwartstr.");
        break;
    }
    case 278207:
    {
        returnValue = F("Scheidwasenstr.");
        break;
    }
    case 278208:
    {
        returnValue = F("Scheidweg");
        break;
    }
    case 278209:
    {
        returnValue = F("Scheidweg Nierst");
        break;
    }
    case 278210:
    {
        returnValue = F("Scheidwegle");
        break;
    }
    case 278211:
    {
        returnValue = F("Scheidwiesenweg");
        break;
    }
    case 278212:
    {
        returnValue = F("Scheier Str.");
        break;
    }
    case 278213:
    {
        returnValue = F("Scheierland");
        break;
    }
    case 278214:
    {
        returnValue = F("Scheiermannstr.");
        break;
    }
    case 278215:
    {
        returnValue = F("Scheifelestr.");
        break;
    }
    case 278216:
    {
        returnValue = F("Scheifendahl");
        break;
    }
    case 278217:
    {
        returnValue = F("Scheifenkamp");
        break;
    }
    case 278218:
    {
        returnValue = F("Scheiferskamp");
        break;
    }
    case 278219:
    {
        returnValue = F("Scheifeshütte");
        break;
    }
    case 278220:
    {
        returnValue = F("Scheiffartsweg");
        break;
    }
    case 278221:
    {
        returnValue = F("Scheiffgensweg");
        break;
    }
    case 278222:
    {
        returnValue = F("Scheifhackenweg");
        break;
    }
    case 278223:
    {
        returnValue = F("Scheiflinger Str.");
        break;
    }
    case 278224:
    {
        returnValue = F("Scheinbenbergweg");
        break;
    }
    case 278225:
    {
        returnValue = F("Scheinbergring");
        break;
    }
    case 278226:
    {
        returnValue = F("Scheinbergstr.");
        break;
    }
    case 278227:
    {
        returnValue = F("Scheinbergweg");
        break;
    }
    case 278228:
    {
        returnValue = F("Scheinerstr.");
        break;
    }
    case 278229:
    {
        returnValue = F("Scheinfelder Str.");
        break;
    }
    case 278230:
    {
        returnValue = F("Scheinfelder Weg");
        break;
    }
    case 278231:
    {
        returnValue = F("Scheinfeldstr.");
        break;
    }
    case 278232:
    {
        returnValue = F("Scheingraben");
        break;
    }
    case 278233:
    {
        returnValue = F("Scheinleinstr.");
        break;
    }
    case 278234:
    {
        returnValue = F("Scheinpflugstr.");
        break;
    }
    case 278235:
    {
        returnValue = F("Scheinsberg");
        break;
    }
    case 278236:
    {
        returnValue = F("Scheintenstr.");
        break;
    }
    case 278237:
    {
        returnValue = F("Scheiplitz");
        break;
    }
    case 278238:
    {
        returnValue = F("Scheiplstr.");
        break;
    }
    case 278239:
    {
        returnValue = F("Scheitenskamp");
        break;
    }
    case 278240:
    {
        returnValue = F("Scheiter Weg");
        break;
    }
    case 278241:
    {
        returnValue = F("Scheiterbergweg");
        break;
    }
    case 278242:
    {
        returnValue = F("Scheiterbuhlweg");
        break;
    }
    case 278243:
    {
        returnValue = F("Scheitergasse");
        break;
    }
    case 278244:
    {
        returnValue = F("Scheitergässle");
        break;
    }
    case 278245:
    {
        returnValue = F("Scheiterhausträßle");
        break;
    }
    case 278246:
    {
        returnValue = F("Scheiterhauweg");
        break;
    }
    case 278247:
    {
        returnValue = F("Scheiterhäulesweg");
        break;
    }
    case 278248:
    {
        returnValue = F("Scheiterstr.");
        break;
    }
    case 278249:
    {
        returnValue = F("Scheiterteileweg");
        break;
    }
    case 278250:
    {
        returnValue = F("Scheiterweg");
        break;
    }
    case 278251:
    {
        returnValue = F("Scheitgarten");
        break;
    }
    case 278252:
    {
        returnValue = F("Scheithauer Weg");
        break;
    }
    case 278253:
    {
        returnValue = F("Scheithaufstr.");
        break;
    }
    case 278254:
    {
        returnValue = F("Scheithauweg");
        break;
    }
    case 278255:
    {
        returnValue = F("Scheivenkothen");
        break;
    }
    case 278256:
    {
        returnValue = F("Scheiweg");
        break;
    }
    case 278257:
    {
        returnValue = F("Scheißgässel");
        break;
    }
    case 278258:
    {
        returnValue = F("Schelbuckring");
        break;
    }
    case 278259:
    {
        returnValue = F("Schelbäumer Weg");
        break;
    }
    case 278260:
    {
        returnValue = F("Schelcherweg");
        break;
    }
    case 278261:
    {
        returnValue = F("Schelchgasse");
        break;
    }
    case 278262:
    {
        returnValue = F("Schelchshornstr.");
        break;
    }
    case 278263:
    {
        returnValue = F("Schelchwangweg");
        break;
    }
    case 278264:
    {
        returnValue = F("Schelchwitzer Weg");
        break;
    }
    case 278265:
    {
        returnValue = F("Schelcklinweg");
        break;
    }
    case 278266:
    {
        returnValue = F("Schelde-Lahn-Str.");
        break;
    }
    case 278267:
    {
        returnValue = F("Scheldebachstr.");
        break;
    }
    case 278268:
    {
        returnValue = F("Scheldefahrt");
        break;
    }
    case 278269:
    {
        returnValue = F("Schelder Str.");
        break;
    }
    case 278270:
    {
        returnValue = F("Schelderau");
        break;
    }
    case 278271:
    {
        returnValue = F("Schelderberg");
        break;
    }
    case 278272:
    {
        returnValue = F("Schelderdiekstr.");
        break;
    }
    case 278273:
    {
        returnValue = F("Schelderhütte");
        break;
    }
    case 278274:
    {
        returnValue = F("Scheldgasse");
        break;
    }
    case 278275:
    {
        returnValue = F("Scheleberg");
        break;
    }
    case 278276:
    {
        returnValue = F("Schelenborn");
        break;
    }
    case 278277:
    {
        returnValue = F("Schelenburger Feldweg");
        break;
    }
    case 278278:
    {
        returnValue = F("Schelenburger Str.");
        break;
    }
    case 278279:
    {
        returnValue = F("Schelenkamp");
        break;
    }
    case 278280:
    {
        returnValue = F("Schelenweg");
        break;
    }
    case 278281:
    {
        returnValue = F("Schelersgasse");
        break;
    }
    case 278282:
    {
        returnValue = F("Schelerstr.");
        break;
    }
    case 278283:
    {
        returnValue = F("Schelerweg");
        break;
    }
    case 278284:
    {
        returnValue = F("Schelfengasse");
        break;
    }
    case 278285:
    {
        returnValue = F("Schelfmarkt");
        break;
    }
    case 278286:
    {
        returnValue = F("Schelfpark");
        break;
    }
    case 278287:
    {
        returnValue = F("Schelfstr.");
        break;
    }
    case 278288:
    {
        returnValue = F("Schelhasseweg");
        break;
    }
    case 278289:
    {
        returnValue = F("Schelhoppen");
        break;
    }
    case 278290:
    {
        returnValue = F("Schelhornstr.");
        break;
    }
    case 278291:
    {
        returnValue = F("Schelihastr.");
        break;
    }
    case 278292:
    {
        returnValue = F("Schelihaweg");
        break;
    }
    case 278293:
    {
        returnValue = F("Schelkauer Str.");
        break;
    }
    case 278294:
    {
        returnValue = F("Schelkenwiese");
        break;
    }
    case 278295:
    {
        returnValue = F("Schelklinger Str.");
        break;
    }
    case 278296:
    {
        returnValue = F("Schelklinger Weg");
        break;
    }
    case 278297:
    {
        returnValue = F("Schelklingerbergweg");
        break;
    }
    case 278298:
    {
        returnValue = F("Schelklingerstr.");
        break;
    }
    case 278299:
    {
        returnValue = F("Schelklystr.");
        break;
    }
    case 278300:
    {
        returnValue = F("Schelkstr.");
        break;
    }
    case 278301:
    {
        returnValue = F("Schellbach");
        break;
    }
    case 278302:
    {
        returnValue = F("Schellbacher Str.");
        break;
    }
    case 278303:
    {
        returnValue = F("Schellbachsgraben");
        break;
    }
    case 278304:
    {
        returnValue = F("Schellbachweg");
        break;
    }
    case 278305:
    {
        returnValue = F("Schellberg");
        break;
    }
    case 278306:
    {
        returnValue = F("Schellberg West");
        break;
    }
    case 278307:
    {
        returnValue = F("Schellberger Weg");
        break;
    }
    case 278308:
    {
        returnValue = F("Schellbergstr.");
        break;
    }
    case 278309:
    {
        returnValue = F("Schellbergweg");
        break;
    }
    case 278310:
    {
        returnValue = F("Schellbronner Str.");
        break;
    }
    case 278311:
    {
        returnValue = F("Schellbronnerweg");
        break;
    }
    case 278312:
    {
        returnValue = F("Schelldobelweg");
        break;
    }
    case 278313:
    {
        returnValue = F("Schelldorfer Dorfstr.");
        break;
    }
    case 278314:
    {
        returnValue = F("Schelldorfer Str.");
        break;
    }
    case 278315:
    {
        returnValue = F("Schelle");
        break;
    }
    case 278316:
    {
        returnValue = F("Schellebergsweg");
        break;
    }
    case 278317:
    {
        returnValue = F("Schelleck");
        break;
    }
    case 278318:
    {
        returnValue = F("Schellekattel");
        break;
    }
    case 278319:
    {
        returnValue = F("Schelleklingenweg");
        break;
    }
    case 278320:
    {
        returnValue = F("Schellenanger");
        break;
    }
    case 278321:
    {
        returnValue = F("Schellenbach");
        break;
    }
    case 278322:
    {
        returnValue = F("Schellenbacher Str.");
        break;
    }
    case 278323:
    {
        returnValue = F("Schellenbachstr.");
        break;
    }
    case 278324:
    {
        returnValue = F("Schellenbecker Str.");
        break;
    }
    case 278325:
    {
        returnValue = F("Schellenberg");
        break;
    }
    case 278326:
    {
        returnValue = F("Schellenberg-Str.");
        break;
    }
    case 278327:
    {
        returnValue = F("Schellenbergbrücke");
        break;
    }
    case 278328:
    {
        returnValue = F("Schellenberger Hof");
        break;
    }
    case 278329:
    {
        returnValue = F("Schellenberger Str.");
        break;
    }
    case 278330:
    {
        returnValue = F("Schellenberger Weg");
        break;
    }
    case 278331:
    {
        returnValue = F("Schellenberger-Pfad");
        break;
    }
    case 278332:
    {
        returnValue = F("Schellenbergerhof");
        break;
    }
    case 278333:
    {
        returnValue = F("Schellenbergerstr.");
        break;
    }
    case 278334:
    {
        returnValue = F("Schellenberggasse");
        break;
    }
    case 278335:
    {
        returnValue = F("Schellenbergpassage");
        break;
    }
    case 278336:
    {
        returnValue = F("Schellenbergstr.");
        break;
    }
    case 278337:
    {
        returnValue = F("Schellenbergweg");
        break;
    }
    case 278338:
    {
        returnValue = F("Schellenbrink");
        break;
    }
    case 278339:
    {
        returnValue = F("Schellenbruckplatz");
        break;
    }
    case 278340:
    {
        returnValue = F("Schellenbruckstr.");
        break;
    }
    case 278341:
    {
        returnValue = F("Schellenbuck");
        break;
    }
    case 278342:
    {
        returnValue = F("Schellenburg");
        break;
    }
    case 278343:
    {
        returnValue = F("Schellenfeld");
        break;
    }
    case 278344:
    {
        returnValue = F("Schellenfelder Str.");
        break;
    }
    case 278345:
    {
        returnValue = F("Schellengasse");
        break;
    }
    case 278346:
    {
        returnValue = F("Schellengrabensträßchen");
        break;
    }
    case 278347:
    {
        returnValue = F("Schellengrund");
        break;
    }
    case 278348:
    {
        returnValue = F("Schellenhof");
        break;
    }
    case 278349:
    {
        returnValue = F("Schellenhöhe");
        break;
    }
    case 278350:
    {
        returnValue = F("Schellenkamp");
        break;
    }
    case 278351:
    {
        returnValue = F("Schellenleite");
        break;
    }
    case 278352:
    {
        returnValue = F("Schellenlöchleweg");
        break;
    }
    case 278353:
    {
        returnValue = F("Schellenmüllerweg");
        break;
    }
    case 278354:
    {
        returnValue = F("Schellenpark");
        break;
    }
    case 278355:
    {
        returnValue = F("Schellenpfad");
        break;
    }
    case 278356:
    {
        returnValue = F("Schellensteigle");
        break;
    }
    case 278357:
    {
        returnValue = F("Schellenstr.");
        break;
    }
    case 278358:
    {
        returnValue = F("Schellenteichweg");
        break;
    }
    case 278359:
    {
        returnValue = F("Schellenwasen");
        break;
    }
    case 278360:
    {
        returnValue = F("Schellenweg");
        break;
    }
    case 278361:
    {
        returnValue = F("Scheller");
        break;
    }
    case 278362:
    {
        returnValue = F("Schellerbaum");
        break;
    }
    case 278363:
    {
        returnValue = F("Schellererstr.");
        break;
    }
    case 278364:
    {
        returnValue = F("Schellergasse");
        break;
    }
    case 278365:
    {
        returnValue = F("Schellerhauer Reitsteig");
        break;
    }
    case 278366:
    {
        returnValue = F("Schellerhauer Str.");
        break;
    }
    case 278367:
    {
        returnValue = F("Schellerhauer Weg");
        break;
    }
    case 278368:
    {
        returnValue = F("Schellerhecke");
        break;
    }
    case 278369:
    {
        returnValue = F("Schellerholz");
        break;
    }
    case 278370:
    {
        returnValue = F("Schellermühlenweg");
        break;
    }
    case 278371:
    {
        returnValue = F("Schellernweg");
        break;
    }
    case 278372:
    {
        returnValue = F("Schellersberg");
        break;
    }
    case 278373:
    {
        returnValue = F("Schellersgasse");
        break;
    }
    case 278374:
    {
        returnValue = F("Schellerstr.");
        break;
    }
    case 278375:
    {
        returnValue = F("Schellerter Str.");
        break;
    }
    case 278376:
    {
        returnValue = F("Schellerweiherweg");
        break;
    }
    case 278377:
    {
        returnValue = F("Schellestr.");
        break;
    }
    case 278378:
    {
        returnValue = F("Schelleweg");
        break;
    }
    case 278379:
    {
        returnValue = F("Schellgasse");
        break;
    }
    case 278380:
    {
        returnValue = F("Schellheimerplatz");
        break;
    }
    case 278381:
    {
        returnValue = F("Schellhockerbruch");
        break;
    }
    case 278382:
    {
        returnValue = F("Schellhofstr.");
        break;
    }
    case 278383:
    {
        returnValue = F("Schellhorn-Geräumt");
        break;
    }
    case 278384:
    {
        returnValue = F("Schellhorner Str.");
        break;
    }
    case 278385:
    {
        returnValue = F("Schellhornfeld");
        break;
    }
    case 278386:
    {
        returnValue = F("Schellhornstr.");
        break;
    }
    case 278387:
    {
        returnValue = F("Schellhornweg");
        break;
    }
    case 278388:
    {
        returnValue = F("Schellhorstgestell");
        break;
    }
    case 278389:
    {
        returnValue = F("Schellinberg");
        break;
    }
    case 278390:
    {
        returnValue = F("Schellinggasse");
        break;
    }
    case 278391:
    {
        returnValue = F("Schellingstr.");
        break;
    }
    case 278392:
    {
        returnValue = F("Schellingweg");
        break;
    }
    case 278393:
    {
        returnValue = F("Schellmühle");
        break;
    }
    case 278394:
    {
        returnValue = F("Schellmühler Str.");
        break;
    }
    case 278395:
    {
        returnValue = F("Schellnecker Str.");
        break;
    }
    case 278396:
    {
        returnValue = F("Schellnhausen");
        break;
    }
    case 278397:
    {
        returnValue = F("Schellnhäuser Pfad");
        break;
    }
    case 278398:
    {
        returnValue = F("Schellnhäuser Str.");
        break;
    }
    case 278399:
    {
        returnValue = F("Schellohner Weg");
        break;
    }
    case 278400:
    {
        returnValue = F("Schellrodaer Str.");
        break;
    }
    case 278401:
    {
        returnValue = F("Schellrodaer Weg");
        break;
    }
    case 278402:
    {
        returnValue = F("Schellsbruch");
        break;
    }
    case 278403:
    {
        returnValue = F("Schellschwang");
        break;
    }
    case 278404:
    {
        returnValue = F("Schellsieben");
        break;
    }
    case 278405:
    {
        returnValue = F("Schellsitz");
        break;
    }
    case 278406:
    {
        returnValue = F("Schellsitzer Weg");
        break;
    }
    case 278407:
    {
        returnValue = F("Schellsteder Weg");
        break;
    }
    case 278408:
    {
        returnValue = F("Schellstr.");
        break;
    }
    case 278409:
    {
        returnValue = F("Schellweg");
        break;
    }
    case 278410:
    {
        returnValue = F("Schellweiler Str.");
        break;
    }
    case 278411:
    {
        returnValue = F("Schellwieser Str.");
        break;
    }
    case 278412:
    {
        returnValue = F("Schelmahdstr.");
        break;
    }
    case 278413:
    {
        returnValue = F("Schelmanger");
        break;
    }
    case 278414:
    {
        returnValue = F("Schelmbergstr.");
        break;
    }
    case 278415:
    {
        returnValue = F("Schelmenacker");
        break;
    }
    case 278416:
    {
        returnValue = F("Schelmenackerweg");
        break;
    }
    case 278417:
    {
        returnValue = F("Schelmenbachweg");
        break;
    }
    case 278418:
    {
        returnValue = F("Schelmenberg");
        break;
    }
    case 278419:
    {
        returnValue = F("Schelmenbergstr.");
        break;
    }
    case 278420:
    {
        returnValue = F("Schelmenbrink");
        break;
    }
    case 278421:
    {
        returnValue = F("Schelmenbrückl");
        break;
    }
    case 278422:
    {
        returnValue = F("Schelmenburgweg");
        break;
    }
    case 278423:
    {
        returnValue = F("Schelmenbuschweg");
        break;
    }
    case 278424:
    {
        returnValue = F("Schelmenbühl");
        break;
    }
    case 278425:
    {
        returnValue = F("Schelmeneichstr.");
        break;
    }
    case 278426:
    {
        returnValue = F("Schelmengartenstr.");
        break;
    }
    case 278427:
    {
        returnValue = F("Schelmengasse");
        break;
    }
    case 278428:
    {
        returnValue = F("Schelmengehrenweg");
        break;
    }
    case 278429:
    {
        returnValue = F("Schelmengraben");
        break;
    }
    case 278430:
    {
        returnValue = F("Schelmengrabenweg");
        break;
    }
    case 278431:
    {
        returnValue = F("Schelmengriesstr.");
        break;
    }
    case 278432:
    {
        returnValue = F("Schelmengrube");
        break;
    }
    case 278433:
    {
        returnValue = F("Schelmengrubweg");
        break;
    }
    case 278434:
    {
        returnValue = F("Schelmengrund");
        break;
    }
    case 278435:
    {
        returnValue = F("Schelmengässel");
        break;
    }
    case 278436:
    {
        returnValue = F("Schelmengäßle");
        break;
    }
    case 278437:
    {
        returnValue = F("Schelmenhag");
        break;
    }
    case 278438:
    {
        returnValue = F("Schelmenhalde");
        break;
    }
    case 278439:
    {
        returnValue = F("Schelmenhaldeweg");
        break;
    }
    case 278440:
    {
        returnValue = F("Schelmenhecke");
        break;
    }
    case 278441:
    {
        returnValue = F("Schelmenheckstr.");
        break;
    }
    case 278442:
    {
        returnValue = F("Schelmenheckweg");
        break;
    }
    case 278443:
    {
        returnValue = F("Schelmenheider Weg");
        break;
    }
    case 278444:
    {
        returnValue = F("Schelmenhofstr.");
        break;
    }
    case 278445:
    {
        returnValue = F("Schelmenhofstrasse");
        break;
    }
    case 278446:
    {
        returnValue = F("Schelmenholz");
        break;
    }
    case 278447:
    {
        returnValue = F("Schelmenklinge");
        break;
    }
    case 278448:
    {
        returnValue = F("Schelmenklingenweg");
        break;
    }
    case 278449:
    {
        returnValue = F("Schelmenlochweg");
        break;
    }
    case 278450:
    {
        returnValue = F("Schelmenlohe");
        break;
    }
    case 278451:
    {
        returnValue = F("Schelmenlohweg");
        break;
    }
    case 278452:
    {
        returnValue = F("Schelmenpfad");
        break;
    }
    case 278453:
    {
        returnValue = F("Schelmenrain");
        break;
    }
    case 278454:
    {
        returnValue = F("Schelmenreuteweg");
        break;
    }
    case 278455:
    {
        returnValue = F("Schelmenschlag");
        break;
    }
    case 278456:
    {
        returnValue = F("Schelmensgrund");
        break;
    }
    case 278457:
    {
        returnValue = F("Schelmenstr.");
        break;
    }
    case 278458:
    {
        returnValue = F("Schelmentalstr.");
        break;
    }
    case 278459:
    {
        returnValue = F("Schelmenturmstr.");
        break;
    }
    case 278460:
    {
        returnValue = F("Schelmenwaldplatz");
        break;
    }
    case 278461:
    {
        returnValue = F("Schelmenwaldstr.");
        break;
    }
    case 278462:
    {
        returnValue = F("Schelmenwasen");
        break;
    }
    case 278463:
    {
        returnValue = F("Schelmenwasenstr.");
        break;
    }
    case 278464:
    {
        returnValue = F("Schelmenwasenweg");
        break;
    }
    case 278465:
    {
        returnValue = F("Schelmenweg");
        break;
    }
    case 278466:
    {
        returnValue = F("Schelmenwinkel");
        break;
    }
    case 278467:
    {
        returnValue = F("Schelmenwinkelweg");
        break;
    }
    case 278468:
    {
        returnValue = F("Schelmenzeile");
        break;
    }
    case 278469:
    {
        returnValue = F("Schelmenzugstr.");
        break;
    }
    case 278470:
    {
        returnValue = F("Schelmenäcker");
        break;
    }
    case 278471:
    {
        returnValue = F("Schelmenäckerstaffel");
        break;
    }
    case 278472:
    {
        returnValue = F("Schelmenäckerstr.");
        break;
    }
    case 278473:
    {
        returnValue = F("Schelmerather Str.");
        break;
    }
    case 278474:
    {
        returnValue = F("Schelmersgraben");
        break;
    }
    case 278475:
    {
        returnValue = F("Schelmesgraben");
        break;
    }
    case 278476:
    {
        returnValue = F("Schelmfleckweg");
        break;
    }
    case 278477:
    {
        returnValue = F("Schelmgasse");
        break;
    }
    case 278478:
    {
        returnValue = F("Schelmgraben");
        break;
    }
    case 278479:
    {
        returnValue = F("Schelmgrabenweg");
        break;
    }
    case 278480:
    {
        returnValue = F("Schelmhecke");
        break;
    }
    case 278481:
    {
        returnValue = F("Schelmkappe");
        break;
    }
    case 278482:
    {
        returnValue = F("Schelmkapper Eck");
        break;
    }
    case 278483:
    {
        returnValue = F("Schelmkapper Str.");
        break;
    }
    case 278484:
    {
        returnValue = F("Schelmleite");
        break;
    }
    case 278485:
    {
        returnValue = F("Schelmrather Hof");
        break;
    }
    case 278486:
    {
        returnValue = F("Schelmrather Str.");
        break;
    }
    case 278487:
    {
        returnValue = F("Schelmsberg");
        break;
    }
    case 278488:
    {
        returnValue = F("Schelmschlagstr.");
        break;
    }
    case 278489:
    {
        returnValue = F("Schelmsgraben");
        break;
    }
    case 278490:
    {
        returnValue = F("Schelmsgrabenweg");
        break;
    }
    case 278491:
    {
        returnValue = F("Schelmshager Weg");
        break;
    }
    case 278492:
    {
        returnValue = F("Schelmshecke");
        break;
    }
    case 278493:
    {
        returnValue = F("Schelmsleite");
        break;
    }
    case 278494:
    {
        returnValue = F("Schelmsrasen");
        break;
    }
    case 278495:
    {
        returnValue = F("Schelmsstr.");
        break;
    }
    case 278496:
    {
        returnValue = F("Schelmsteig");
        break;
    }
    case 278497:
    {
        returnValue = F("Schelmuffsky-Str.");
        break;
    }
    case 278498:
    {
        returnValue = F("Schelp");
        break;
    }
    case 278499:
    {
        returnValue = F("Schelpberg-Brücke");
        break;
    }
    case 278500:
    {
        returnValue = F("Schelpestr.");
        break;
    }
    case 278501:
    {
        returnValue = F("Schelphörn");
        break;
    }
    case 278502:
    {
        returnValue = F("Schelploher Weg");
        break;
    }
    case 278503:
    {
        returnValue = F("Schelpmilser Weg");
        break;
    }
    case 278504:
    {
        returnValue = F("Schelppwisch");
        break;
    }
    case 278505:
    {
        returnValue = F("Schelpsheide");
        break;
    }
    case 278506:
    {
        returnValue = F("Schelpstr.");
        break;
    }
    case 278507:
    {
        returnValue = F("Schelpwiese");
        break;
    }
    case 278508:
    {
        returnValue = F("Schelrader Str.");
        break;
    }
    case 278509:
    {
        returnValue = F("Schelsberg");
        break;
    }
    case 278510:
    {
        returnValue = F("Schelsener Maar");
        break;
    }
    case 278511:
    {
        returnValue = F("Schelsener Str.");
        break;
    }
    case 278512:
    {
        returnValue = F("Schelsener Weg");
        break;
    }
    case 278513:
    {
        returnValue = F("Scheltenbergweg");
        break;
    }
    case 278514:
    {
        returnValue = F("Scheltenweg");
        break;
    }
    case 278515:
    {
        returnValue = F("Scheltgasse");
        break;
    }
    case 278516:
    {
        returnValue = F("Schelthofen");
        break;
    }
    case 278517:
    {
        returnValue = F("Schelver Diek");
        break;
    }
    case 278518:
    {
        returnValue = F("Schelverstr.");
        break;
    }
    case 278519:
    {
        returnValue = F("Schelzbergstr.");
        break;
    }
    case 278520:
    {
        returnValue = F("Schelzelweg");
        break;
    }
    case 278521:
    {
        returnValue = F("Schelztorstr.");
        break;
    }
    case 278522:
    {
        returnValue = F("Schemannshof");
        break;
    }
    case 278523:
    {
        returnValue = F("Schemannstr.");
        break;
    }
    case 278524:
    {
        returnValue = F("Schembach");
        break;
    }
    case 278525:
    {
        returnValue = F("Schembusch");
        break;
    }
    case 278526:
    {
        returnValue = F("Schemder Esch");
        break;
    }
    case 278527:
    {
        returnValue = F("Schemder Höhe");
        break;
    }
    case 278528:
    {
        returnValue = F("Schemder Str.");
        break;
    }
    case 278529:
    {
        returnValue = F("Schemder Vossenberg");
        break;
    }
    case 278530:
    {
        returnValue = F("Schemel");
        break;
    }
    case 278531:
    {
        returnValue = F("Schemelsbergtunnel");
        break;
    }
    case 278532:
    {
        returnValue = F("Schemelsbergweg");
        break;
    }
    case 278533:
    {
        returnValue = F("Schemelsbruch");
        break;
    }
    case 278534:
    {
        returnValue = F("Schemelsdamm");
        break;
    }
    case 278535:
    {
        returnValue = F("Schemenaustr.");
        break;
    }
    case 278536:
    {
        returnValue = F("Schemhoff-Brücke");
        break;
    }
    case 278537:
    {
        returnValue = F("Schemkesweg");
        break;
    }
    case 278538:
    {
        returnValue = F("Schemm");
        break;
    }
    case 278539:
    {
        returnValue = F("Schemm-Brücke");
        break;
    }
    case 278540:
    {
        returnValue = F("Schemmannsfeld");
        break;
    }
    case 278541:
    {
        returnValue = F("Schemmannstr.");
        break;
    }
    case 278542:
    {
        returnValue = F("Schemmannweg");
        break;
    }
    case 278543:
    {
        returnValue = F("Schemmelskamp");
        break;
    }
    case 278544:
    {
        returnValue = F("Schemmelstr.");
        break;
    }
    case 278545:
    {
        returnValue = F("Schemmelweg");
        break;
    }
    case 278546:
    {
        returnValue = F("Schemmen");
        break;
    }
    case 278547:
    {
        returnValue = F("Schemmener Str.");
        break;
    }
    case 278548:
    {
        returnValue = F("Schemmer Str.");
        break;
    }
    case 278549:
    {
        returnValue = F("Schemmerberger Steige");
        break;
    }
    case 278550:
    {
        returnValue = F("Schemmerberger Str.");
        break;
    }
    case 278551:
    {
        returnValue = F("Schemmerberger Weg");
        break;
    }
    case 278552:
    {
        returnValue = F("Schemmerhausener Str.");
        break;
    }
    case 278553:
    {
        returnValue = F("Schemmersfeld");
        break;
    }
    case 278554:
    {
        returnValue = F("Schemmgraben");
        break;
    }
    case 278555:
    {
        returnValue = F("Schemmkamp");
        break;
    }
    case 278556:
    {
        returnValue = F("Schemmstr.");
        break;
    }
    case 278557:
    {
        returnValue = F("Schemmwiese");
        break;
    }
    case 278558:
    {
        returnValue = F("Schemperstr.");
        break;
    }
    case 278559:
    {
        returnValue = F("Schenaustr.");
        break;
    }
    case 278560:
    {
        returnValue = F("Schenbek");
        break;
    }
    case 278561:
    {
        returnValue = F("Schenckstr.");
        break;
    }
    case 278562:
    {
        returnValue = F("Schenderleinstr.");
        break;
    }
    case 278563:
    {
        returnValue = F("Schendrichweg");
        break;
    }
    case 278564:
    {
        returnValue = F("Schenefelder Chaussee");
        break;
    }
    case 278565:
    {
        returnValue = F("Schenefelder Landstr.");
        break;
    }
    case 278566:
    {
        returnValue = F("Schenefelder Platz");
        break;
    }
    case 278567:
    {
        returnValue = F("Schenefelder Str.");
        break;
    }
    case 278568:
    {
        returnValue = F("Schengbüchel");
        break;
    }
    case 278569:
    {
        returnValue = F("Schengener Allee");
        break;
    }
    case 278570:
    {
        returnValue = F("Schengener Str.");
        break;
    }
    case 278571:
    {
        returnValue = F("Schengenweg");
        break;
    }
    case 278572:
    {
        returnValue = F("Schengerholz");
        break;
    }
    case 278573:
    {
        returnValue = F("Schenk-Castell-Str.");
        break;
    }
    case 278574:
    {
        returnValue = F("Schenk-Konrad-Str.");
        break;
    }
    case 278575:
    {
        returnValue = F("Schenk-Konrad-Weg");
        break;
    }
    case 278576:
    {
        returnValue = F("Schenk-Ulrich-Str.");
        break;
    }
    case 278577:
    {
        returnValue = F("Schenk-v-Schmittburg-Strasse");
        break;
    }
    case 278578:
    {
        returnValue = F("Schenk-von-Castell-Str.");
        break;
    }
    case 278579:
    {
        returnValue = F("Schenk-von-Nideggen-Weg");
        break;
    }
    case 278580:
    {
        returnValue = F("Schenkanger");
        break;
    }
    case 278581:
    {
        returnValue = F("Schenkberg");
        break;
    }
    case 278582:
    {
        returnValue = F("Schenkbergstr.");
        break;
    }
    case 278583:
    {
        returnValue = F("Schenkbreite");
        break;
    }
    case 278584:
    {
        returnValue = F("Schenkebeer-Pättken");
        break;
    }
    case 278585:
    {
        returnValue = F("Schenkebier Stanne");
        break;
    }
    case 278586:
    {
        returnValue = F("Schenkebierweg");
        break;
    }
    case 278587:
    {
        returnValue = F("Schenkegasse");
        break;
    }
    case 278588:
    {
        returnValue = F("Schenkelberger Str.");
        break;
    }
    case 278589:
    {
        returnValue = F("Schenkelbergstr.");
        break;
    }
    case 278590:
    {
        returnValue = F("Schenkelbergweg");
        break;
    }
    case 278591:
    {
        returnValue = F("Schenkelgasse");
        break;
    }
    case 278592:
    {
        returnValue = F("Schenkelgehrenweg");
        break;
    }
    case 278593:
    {
        returnValue = F("Schenkelsberg");
        break;
    }
    case 278594:
    {
        returnValue = F("Schenkelsbergstr.");
        break;
    }
    case 278595:
    {
        returnValue = F("Schenkelstr.");
        break;
    }
    case 278596:
    {
        returnValue = F("Schenkelstück");
        break;
    }
    case 278597:
    {
        returnValue = F("Schenkelweg");
        break;
    }
    case 278598:
    {
        returnValue = F("Schenken-von-Schüpf-Str.");
        break;
    }
    case 278599:
    {
        returnValue = F("Schenkenauerstr.");
        break;
    }
    case 278600:
    {
        returnValue = F("Schenkenberg");
        break;
    }
    case 278601:
    {
        returnValue = F("Schenkenberger Str.");
        break;
    }
    case 278602:
    {
        returnValue = F("Schenkenberger Weg");
        break;
    }
    case 278603:
    {
        returnValue = F("Schenkenbergstr.");
        break;
    }
    case 278604:
    {
        returnValue = F("Schenkenbergweg");
        break;
    }
    case 278605:
    {
        returnValue = F("Schenkenbrühl");
        break;
    }
    case 278606:
    {
        returnValue = F("Schenkenburgstr.");
        break;
    }
    case 278607:
    {
        returnValue = F("Schenkenböhlstr.");
        break;
    }
    case 278608:
    {
        returnValue = F("Schenkendamm");
        break;
    }
    case 278609:
    {
        returnValue = F("Schenkendorf");
        break;
    }
    case 278610:
    {
        returnValue = F("Schenkendorfer Chaussee");
        break;
    }
    case 278611:
    {
        returnValue = F("Schenkendorfer Flur");
        break;
    }
    case 278612:
    {
        returnValue = F("Schenkendorfer Str.");
        break;
    }
    case 278613:
    {
        returnValue = F("Schenkendorfer Weg");
        break;
    }
    case 278614:
    {
        returnValue = F("Schenkendorfer Weg Siedlung A");
        break;
    }
    case 278615:
    {
        returnValue = F("Schenkendorfer Weg Siedlung B");
        break;
    }
    case 278616:
    {
        returnValue = F("Schenkendorfer Weg Siedlung C");
        break;
    }
    case 278617:
    {
        returnValue = F("Schenkendorfer Weg Siedlung D");
        break;
    }
    case 278618:
    {
        returnValue = F("Schenkendorfer Weg Siedlung E");
        break;
    }
    case 278619:
    {
        returnValue = F("Schenkendorfplatz");
        break;
    }
    case 278620:
    {
        returnValue = F("Schenkendorfstr.");
        break;
    }
    case 278621:
    {
        returnValue = F("Schenkendorfweg");
        break;
    }
    case 278622:
    {
        returnValue = F("Schenkendöberner Weg");
        break;
    }
    case 278623:
    {
        returnValue = F("Schenkengasse");
        break;
    }
    case 278624:
    {
        returnValue = F("Schenkengraben");
        break;
    }
    case 278625:
    {
        returnValue = F("Schenkengärtenstr.");
        break;
    }
    case 278626:
    {
        returnValue = F("Schenkenhohle");
        break;
    }
    case 278627:
    {
        returnValue = F("Schenkenhorster Str.");
        break;
    }
    case 278628:
    {
        returnValue = F("Schenkenhügel");
        break;
    }
    case 278629:
    {
        returnValue = F("Schenkenlandstr.");
        break;
    }
    case 278630:
    {
        returnValue = F("Schenkenplatz");
        break;
    }
    case 278631:
    {
        returnValue = F("Schenkenschanz");
        break;
    }
    case 278632:
    {
        returnValue = F("Schenkensteinerstr.");
        break;
    }
    case 278633:
    {
        returnValue = F("Schenkensteinstr.");
        break;
    }
    case 278634:
    {
        returnValue = F("Schenkenstr.");
        break;
    }
    case 278635:
    {
        returnValue = F("Schenkenwaldstr.");
        break;
    }
    case 278636:
    {
        returnValue = F("Schenkenweg");
        break;
    }
    case 278637:
    {
        returnValue = F("Schenkenwinkel");
        break;
    }
    case 278638:
    {
        returnValue = F("Schenkenzeller Str.");
        break;
    }
    case 278639:
    {
        returnValue = F("Schenkeplatz");
        break;
    }
    case 278640:
    {
        returnValue = F("Schenkergasse");
        break;
    }
    case 278641:
    {
        returnValue = F("Schenkermaierweg");
        break;
    }
    case 278642:
    {
        returnValue = F("Schenkestr.");
        break;
    }
    case 278643:
    {
        returnValue = F("Schenkgartenweg");
        break;
    }
    case 278644:
    {
        returnValue = F("Schenkgasse");
        break;
    }
    case 278645:
    {
        returnValue = F("Schenkgraben");
        break;
    }
    case 278646:
    {
        returnValue = F("Schenkhof");
        break;
    }
    case 278647:
    {
        returnValue = F("Schenkhäuser");
        break;
    }
    case 278648:
    {
        returnValue = F("Schenkhäuserstr.");
        break;
    }
    case 278649:
    {
        returnValue = F("Schenkhübelweg");
        break;
    }
    case 278650:
    {
        returnValue = F("Schenkingstr.");
        break;
    }
    case 278651:
    {
        returnValue = F("Schenkleite");
        break;
    }
    case 278652:
    {
        returnValue = F("Schenklengsfelder Str.");
        break;
    }
    case 278653:
    {
        returnValue = F("Schenklstr.");
        break;
    }
    case 278654:
    {
        returnValue = F("Schenkpfädchen");
        break;
    }
    case 278655:
    {
        returnValue = F("Schenkplatz");
        break;
    }
    case 278656:
    {
        returnValue = F("Schenkrain");
        break;
    }
    case 278657:
    {
        returnValue = F("Schenkrainweg");
        break;
    }
    case 278658:
    {
        returnValue = F("Schenks Berg");
        break;
    }
    case 278659:
    {
        returnValue = F("Schenksberg");
        break;
    }
    case 278660:
    {
        returnValue = F("Schenksgasse");
        break;
    }
    case 278661:
    {
        returnValue = F("Schenkshoeg");
        break;
    }
    case 278662:
    {
        returnValue = F("Schenksplatz");
        break;
    }
    case 278663:
    {
        returnValue = F("Schenksteg");
        break;
    }
    case 278664:
    {
        returnValue = F("Schenkstor");
        break;
    }
    case 278665:
    {
        returnValue = F("Schenkstr.");
        break;
    }
    case 278666:
    {
        returnValue = F("Schenktor");
        break;
    }
    case 278667:
    {
        returnValue = F("Schenkweg");
        break;
    }
    case 278668:
    {
        returnValue = F("Schenkwiesenweg");
        break;
    }
    case 278669:
    {
        returnValue = F("Schennershagen");
        break;
    }
    case 278670:
    {
        returnValue = F("Schenumer Str.");
        break;
    }
    case 278671:
    {
        returnValue = F("Schenumer Weg");
        break;
    }
    case 278672:
    {
        returnValue = F("Schenze");
        break;
    }
    case 278673:
    {
        returnValue = F("Schepdonksweg");
        break;
    }
    case 278674:
    {
        returnValue = F("Schepelerstr.");
        break;
    }
    case 278675:
    {
        returnValue = F("Schepelser Str.");
        break;
    }
    case 278676:
    {
        returnValue = F("Schependorf");
        break;
    }
    case 278677:
    {
        returnValue = F("Scheperdieck");
        break;
    }
    case 278678:
    {
        returnValue = F("Scheperdiek");
        break;
    }
    case 278679:
    {
        returnValue = F("Scheperdrift");
        break;
    }
    case 278680:
    {
        returnValue = F("Scheperhusener Weg");
        break;
    }
    case 278681:
    {
        returnValue = F("Scheperjansstieg");
        break;
    }
    case 278682:
    {
        returnValue = F("Scheperkamp");
        break;
    }
    case 278683:
    {
        returnValue = F("Scheperkampsweg");
        break;
    }
    case 278684:
    {
        returnValue = F("Schepers Kotten");
        break;
    }
    case 278685:
    {
        returnValue = F("Schepers Pädkem");
        break;
    }
    case 278686:
    {
        returnValue = F("Schepers Pädken");
        break;
    }
    case 278687:
    {
        returnValue = F("Schepersfeld");
        break;
    }
    case 278688:
    {
        returnValue = F("Scheperskamp");
        break;
    }
    case 278689:
    {
        returnValue = F("Scheperstr.");
        break;
    }
    case 278690:
    {
        returnValue = F("Schepersweg");
        break;
    }
    case 278691:
    {
        returnValue = F("Schepkerweg");
        break;
    }
    case 278692:
    {
        returnValue = F("Scheplake");
        break;
    }
    case 278693:
    {
        returnValue = F("Schepmannskamp");
        break;
    }
    case 278694:
    {
        returnValue = F("Schepp Allee");
        break;
    }
    case 278695:
    {
        returnValue = F("Scheppacher Mühle");
        break;
    }
    case 278696:
    {
        returnValue = F("Scheppacher Str.");
        break;
    }
    case 278697:
    {
        returnValue = F("Scheppauer Weg");
        break;
    }
    case 278698:
    {
        returnValue = F("Scheppe Gewissegasse");
        break;
    }
    case 278699:
    {
        returnValue = F("Scheppelesweg");
        break;
    }
    case 278700:
    {
        returnValue = F("Scheppenacker");
        break;
    }
    case 278701:
    {
        returnValue = F("Schepperpad");
        break;
    }
    case 278702:
    {
        returnValue = F("Scheppersteig");
        break;
    }
    case 278703:
    {
        returnValue = F("Scheppflage");
        break;
    }
    case 278704:
    {
        returnValue = F("Scheppler");
        break;
    }
    case 278705:
    {
        returnValue = F("Schepplerweg");
        break;
    }
    case 278706:
    {
        returnValue = F("Scheppmannstr.");
        break;
    }
    case 278707:
    {
        returnValue = F("Scheppäcker");
        break;
    }
    case 278708:
    {
        returnValue = F("Schepser Damm");
        break;
    }
    case 278709:
    {
        returnValue = F("Schepser Str.");
        break;
    }
    case 278710:
    {
        returnValue = F("Schepshaker Str.");
        break;
    }
    case 278711:
    {
        returnValue = F("Scherau");
        break;
    }
    case 278712:
    {
        returnValue = F("Scherauer Weg");
        break;
    }
    case 278713:
    {
        returnValue = F("Scherbach");
        break;
    }
    case 278714:
    {
        returnValue = F("Scherbachstr.");
        break;
    }
    case 278715:
    {
        returnValue = F("Scherbachweg");
        break;
    }
    case 278716:
    {
        returnValue = F("Scherbank");
        break;
    }
    case 278717:
    {
        returnValue = F("Scherbdaer Str.");
        break;
    }
    case 278718:
    {
        returnValue = F("Scherbelsberg");
        break;
    }
    case 278719:
    {
        returnValue = F("Scherbenacker mit Wildkräutern");
        break;
    }
    case 278720:
    {
        returnValue = F("Scherbenberg");
        break;
    }
    case 278721:
    {
        returnValue = F("Scherbengasse");
        break;
    }
    case 278722:
    {
        returnValue = F("Scherbenwinkel");
        break;
    }
    case 278723:
    {
        returnValue = F("Scherberger Feld");
        break;
    }
    case 278724:
    {
        returnValue = F("Scherberger Str.");
        break;
    }
    case 278725:
    {
        returnValue = F("Scherbergplatz");
        break;
    }
    case 278726:
    {
        returnValue = F("Scherbsgraben");
        break;
    }
    case 278727:
    {
        returnValue = F("Scherbstr.");
        break;
    }
    case 278728:
    {
        returnValue = F("Scherchstr.");
        break;
    }
    case 278729:
    {
        returnValue = F("Scherdelstr.");
        break;
    }
    case 278730:
    {
        returnValue = F("Scherderstr.");
        break;
    }
    case 278731:
    {
        returnValue = F("Scherecke");
        break;
    }
    case 278732:
    {
        returnValue = F("Scherenauer Str.");
        break;
    }
    case 278733:
    {
        returnValue = F("Scherenbachstr.");
        break;
    }
    case 278734:
    {
        returnValue = F("Scherenberg");
        break;
    }
    case 278735:
    {
        returnValue = F("Scherenbergstr.");
        break;
    }
    case 278736:
    {
        returnValue = F("Scherenbergweg");
        break;
    }
    case 278737:
    {
        returnValue = F("Scherenbosteler Str.");
        break;
    }
    case 278738:
    {
        returnValue = F("Scherenbreite");
        break;
    }
    case 278739:
    {
        returnValue = F("Scherengrabenweg");
        break;
    }
    case 278740:
    {
        returnValue = F("Scherengrund");
        break;
    }
    case 278741:
    {
        returnValue = F("Scherenhorst");
        break;
    }
    case 278742:
    {
        returnValue = F("Scherenschleiferbrunnenweg");
        break;
    }
    case 278743:
    {
        returnValue = F("Scherentann");
        break;
    }
    case 278744:
    {
        returnValue = F("Scherenweg");
        break;
    }
    case 278745:
    {
        returnValue = F("Scherer-Passage");
        break;
    }
    case 278746:
    {
        returnValue = F("Schererbuckweg");
        break;
    }
    case 278747:
    {
        returnValue = F("Scherergarten");
        break;
    }
    case 278748:
    {
        returnValue = F("Scherergasse");
        break;
    }
    case 278749:
    {
        returnValue = F("Scherersfeldstr.");
        break;
    }
    case 278750:
    {
        returnValue = F("Scherersgrund");
        break;
    }
    case 278751:
    {
        returnValue = F("Scherershof");
        break;
    }
    case 278752:
    {
        returnValue = F("Scherershüttenstr.");
        break;
    }
    case 278753:
    {
        returnValue = F("Schererstr.");
        break;
    }
    case 278754:
    {
        returnValue = F("Schererweg");
        break;
    }
    case 278755:
    {
        returnValue = F("Schereswaldhöhenweg");
        break;
    }
    case 278756:
    {
        returnValue = F("Scherf");
        break;
    }
    case 278757:
    {
        returnValue = F("Scherfbachtalstr.");
        break;
    }
    case 278758:
    {
        returnValue = F("Scherfeder Str.");
        break;
    }
    case 278759:
    {
        returnValue = F("Scherfeldstr.");
        break;
    }
    case 278760:
    {
        returnValue = F("Scherfer Höhe");
        break;
    }
    case 278761:
    {
        returnValue = F("Scherfgasse");
        break;
    }
    case 278762:
    {
        returnValue = F("Scherfhausen");
        break;
    }
    case 278763:
    {
        returnValue = F("Scherfling");
        break;
    }
    case 278764:
    {
        returnValue = F("Scherfstr.");
        break;
    }
    case 278765:
    {
        returnValue = F("Scherfweg");
        break;
    }
    case 278766:
    {
        returnValue = F("Scherg");
        break;
    }
    case 278767:
    {
        returnValue = F("Schergasse");
        break;
    }
    case 278768:
    {
        returnValue = F("Schergenamtsweg");
        break;
    }
    case 278769:
    {
        returnValue = F("Schergengasse");
        break;
    }
    case 278770:
    {
        returnValue = F("Schergenstr.");
        break;
    }
    case 278771:
    {
        returnValue = F("Schergenweg");
        break;
    }
    case 278772:
    {
        returnValue = F("Schergeshof");
        break;
    }
    case 278773:
    {
        returnValue = F("Schergraben");
        break;
    }
    case 278774:
    {
        returnValue = F("Schergstr.");
        break;
    }
    case 278775:
    {
        returnValue = F("Schergweg");
        break;
    }
    case 278776:
    {
        returnValue = F("Schergässle");
        break;
    }
    case 278777:
    {
        returnValue = F("Scheringer Str.");
        break;
    }
    case 278778:
    {
        returnValue = F("Scheringer Weg");
        break;
    }
    case 278779:
    {
        returnValue = F("Scheringerstr.");
        break;
    }
    case 278780:
    {
        returnValue = F("Scheringstr.");
        break;
    }
    case 278781:
    {
        returnValue = F("Scherisberg");
        break;
    }
    case 278782:
    {
        returnValue = F("Scherkampsweg");
        break;
    }
    case 278783:
    {
        returnValue = F("Scherke-Weg");
        break;
    }
    case 278784:
    {
        returnValue = F("Scherl");
        break;
    }
    case 278785:
    {
        returnValue = F("Scherlachstr.");
        break;
    }
    case 278786:
    {
        returnValue = F("Scherlachweg");
        break;
    }
    case 278787:
    {
        returnValue = F("Scherlebecker Str.");
        break;
    }
    case 278788:
    {
        returnValue = F("Scherleitenstr.");
        break;
    }
    case 278789:
    {
        returnValue = F("Scherlenweg");
        break;
    }
    case 278790:
    {
        returnValue = F("Scherleshofer Str.");
        break;
    }
    case 278791:
    {
        returnValue = F("Scherleweg");
        break;
    }
    case 278792:
    {
        returnValue = F("Scherlingstr.");
        break;
    }
    case 278793:
    {
        returnValue = F("Scherlstr.");
        break;
    }
    case 278794:
    {
        returnValue = F("Scherlweg");
        break;
    }
    case 278795:
    {
        returnValue = F("Schermarweg");
        break;
    }
    case 278796:
    {
        returnValue = F("Schermauer Str.");
        break;
    }
    case 278797:
    {
        returnValue = F("Schermbach");
        break;
    }
    case 278798:
    {
        returnValue = F("Schermbacherstr.");
        break;
    }
    case 278799:
    {
        returnValue = F("Schermbecker Landstr.");
        break;
    }
    case 278800:
    {
        returnValue = F("Schermbecker Str.");
        break;
    }
    case 278801:
    {
        returnValue = F("Schermcker Weg");
        break;
    }
    case 278802:
    {
        returnValue = F("Schermener Weg");
        break;
    }
    case 278803:
    {
        returnValue = F("Schermerweg");
        break;
    }
    case 278804:
    {
        returnValue = F("Schern");
        break;
    }
    case 278805:
    {
        returnValue = F("Schernau");
        break;
    }
    case 278806:
    {
        returnValue = F("Schernauer Str.");
        break;
    }
    case 278807:
    {
        returnValue = F("Schernbacher Sägmühle");
        break;
    }
    case 278808:
    {
        returnValue = F("Schernbacher Weg");
        break;
    }
    case 278809:
    {
        returnValue = F("Schernberger Str.");
        break;
    }
    case 278810:
    {
        returnValue = F("Schernberger Weg");
        break;
    }
    case 278811:
    {
        returnValue = F("Schernbreite");
        break;
    }
    case 278812:
    {
        returnValue = F("Scherndorfer Str.");
        break;
    }
    case 278813:
    {
        returnValue = F("Scherndorfer Weg");
        break;
    }
    case 278814:
    {
        returnValue = F("Scherne");
        break;
    }
    case 278815:
    {
        returnValue = F("Schernebecker Dorfstr.");
        break;
    }
    case 278816:
    {
        returnValue = F("Schernebecker Str.");
        break;
    }
    case 278817:
    {
        returnValue = F("Schernebecker Weg");
        break;
    }
    case 278818:
    {
        returnValue = F("Schernecker Str.");
        break;
    }
    case 278819:
    {
        returnValue = F("Schernegg");
        break;
    }
    case 278820:
    {
        returnValue = F("Schernegger Str.");
        break;
    }
    case 278821:
    {
        returnValue = F("Schernenweg");
        break;
    }
    case 278822:
    {
        returnValue = F("Schernerweg");
        break;
    }
    case 278823:
    {
        returnValue = F("Schernfelder Str.");
        break;
    }
    case 278824:
    {
        returnValue = F("Schernfelder Weg");
        break;
    }
    case 278825:
    {
        returnValue = F("Schernikauer Str.");
        break;
    }
    case 278826:
    {
        returnValue = F("Schernried");
        break;
    }
    case 278827:
    {
        returnValue = F("Schernrieder Str.");
        break;
    }
    case 278828:
    {
        returnValue = F("Schernsiedlung");
        break;
    }
    case 278829:
    {
        returnValue = F("Scherpelsweg");
        break;
    }
    case 278830:
    {
        returnValue = F("Scherpemicher Str.");
        break;
    }
    case 278831:
    {
        returnValue = F("Scherpenbach");
        break;
    }
    case 278832:
    {
        returnValue = F("Scherpenberg");
        break;
    }
    case 278833:
    {
        returnValue = F("Scherpenberger Str.");
        break;
    }
    case 278834:
    {
        returnValue = F("Scherpenburgstr.");
        break;
    }
    case 278835:
    {
        returnValue = F("Scherpengasse");
        break;
    }
    case 278836:
    {
        returnValue = F("Scherpenseeler Str.");
        break;
    }
    case 278837:
    {
        returnValue = F("Scherperstr.");
        break;
    }
    case 278838:
    {
        returnValue = F("Scherpkesweg");
        break;
    }
    case 278839:
    {
        returnValue = F("Scherrenbergstr.");
        break;
    }
    case 278840:
    {
        returnValue = F("Scherrenholzweg");
        break;
    }
    case 278841:
    {
        returnValue = F("Scherrergasse");
        break;
    }
    case 278842:
    {
        returnValue = F("Scherrerstr.");
        break;
    }
    case 278843:
    {
        returnValue = F("Scherrerweg");
        break;
    }
    case 278844:
    {
        returnValue = F("Scherreuth");
        break;
    }
    case 278845:
    {
        returnValue = F("Scherrgasse");
        break;
    }
    case 278846:
    {
        returnValue = F("Scherrichmühlweg");
        break;
    }
    case 278847:
    {
        returnValue = F("Scherrichweg");
        break;
    }
    case 278848:
    {
        returnValue = F("Scherriebengasse");
        break;
    }
    case 278849:
    {
        returnValue = F("Scherrkesselweg");
        break;
    }
    case 278850:
    {
        returnValue = F("Scherrngasse");
        break;
    }
    case 278851:
    {
        returnValue = F("Scherrstr.");
        break;
    }
    case 278852:
    {
        returnValue = F("Scherrweg");
        break;
    }
    case 278853:
    {
        returnValue = F("Scherrwiesenweg");
        break;
    }
    case 278854:
    {
        returnValue = F("Schersengut");
        break;
    }
    case 278855:
    {
        returnValue = F("Schersental");
        break;
    }
    case 278856:
    {
        returnValue = F("Schersfeld");
        break;
    }
    case 278857:
    {
        returnValue = F("Scherstrasse");
        break;
    }
    case 278858:
    {
        returnValue = F("Scherswang");
        break;
    }
    case 278859:
    {
        returnValue = F("Schersweide");
        break;
    }
    case 278860:
    {
        returnValue = F("Schertlestr.");
        break;
    }
    case 278861:
    {
        returnValue = F("Schertlingstr.");
        break;
    }
    case 278862:
    {
        returnValue = F("Schertlinhaus");
        break;
    }
    case 278863:
    {
        returnValue = F("Schertlinpark");
        break;
    }
    case 278864:
    {
        returnValue = F("Schertlinstr.");
        break;
    }
    case 278865:
    {
        returnValue = F("Schertlinweg");
        break;
    }
    case 278866:
    {
        returnValue = F("Schervierstr.");
        break;
    }
    case 278867:
    {
        returnValue = F("Scherweg");
        break;
    }
    case 278868:
    {
        returnValue = F("Scherwiller Str.");
        break;
    }
    case 278869:
    {
        returnValue = F("Scherwuhrstr.");
        break;
    }
    case 278870:
    {
        returnValue = F("Scherzachstr.");
        break;
    }
    case 278871:
    {
        returnValue = F("Scherzengasse");
        break;
    }
    case 278872:
    {
        returnValue = F("Scherzenteich");
        break;
    }
    case 278873:
    {
        returnValue = F("Scherzergasse");
        break;
    }
    case 278874:
    {
        returnValue = F("Scherzerplatz");
        break;
    }
    case 278875:
    {
        returnValue = F("Scherzerstr.");
        break;
    }
    case 278876:
    {
        returnValue = F("Scherzinger Waldweg");
        break;
    }
    case 278877:
    {
        returnValue = F("Scherzinger Weg");
        break;
    }
    case 278878:
    {
        returnValue = F("Scherzingerweg");
        break;
    }
    case 278879:
    {
        returnValue = F("Scherzwiesenweg");
        break;
    }
    case 278880:
    {
        returnValue = F("Scheräcker");
        break;
    }
    case 278881:
    {
        returnValue = F("Schessgasse");
        break;
    }
    case 278882:
    {
        returnValue = F("Scheteligstr.");
        break;
    }
    case 278883:
    {
        returnValue = F("Schetmicke");
        break;
    }
    case 278884:
    {
        returnValue = F("Schettelbachstr.");
        break;
    }
    case 278885:
    {
        returnValue = F("Schettelweg");
        break;
    }
    case 278886:
    {
        returnValue = F("Schetterstr.");
        break;
    }
    case 278887:
    {
        returnValue = F("Schettler Bogen");
        break;
    }
    case 278888:
    {
        returnValue = F("Schettler Platz");
        break;
    }
    case 278889:
    {
        returnValue = F("Schettlermühle");
        break;
    }
    case 278890:
    {
        returnValue = F("Schettlerweg");
        break;
    }
    case 278891:
    {
        returnValue = F("Schetzenweg");
        break;
    }
    case 278892:
    {
        returnValue = F("Scheubachweg");
        break;
    }
    case 278893:
    {
        returnValue = F("Scheubelstr.");
        break;
    }
    case 278894:
    {
        returnValue = F("Scheubelweg");
        break;
    }
    case 278895:
    {
        returnValue = F("Scheubengrobsdorfer Str.");
        break;
    }
    case 278896:
    {
        returnValue = F("Scheubühlweg");
        break;
    }
    case 278897:
    {
        returnValue = F("Scheuchenbergstr.");
        break;
    }
    case 278898:
    {
        returnValue = F("Scheuchenstulstr.");
        break;
    }
    case 278899:
    {
        returnValue = F("Scheudersche Str.");
        break;
    }
    case 278900:
    {
        returnValue = F("Scheuelberghof");
        break;
    }
    case 278901:
    {
        returnValue = F("Scheuelbergstr.");
        break;
    }
    case 278902:
    {
        returnValue = F("Scheuener Str.");
        break;
    }
    case 278903:
    {
        returnValue = F("Scheuentobel");
        break;
    }
    case 278904:
    {
        returnValue = F("Scheuer");
        break;
    }
    case 278905:
    {
        returnValue = F("Scheuerberg");
        break;
    }
    case 278906:
    {
        returnValue = F("Scheuerbergstr.");
        break;
    }
    case 278907:
    {
        returnValue = F("Scheuerebene");
        break;
    }
    case 278908:
    {
        returnValue = F("Scheuereck");
        break;
    }
    case 278909:
    {
        returnValue = F("Scheuereckengasse");
        break;
    }
    case 278910:
    {
        returnValue = F("Scheuereckerweg");
        break;
    }
    case 278911:
    {
        returnValue = F("Scheuerer Siedlung");
        break;
    }
    case 278912:
    {
        returnValue = F("Scheuerer Str.");
        break;
    }
    case 278913:
    {
        returnValue = F("Scheuerergasse");
        break;
    }
    case 278914:
    {
        returnValue = F("Scheuerfelder Str.");
        break;
    }
    case 278915:
    {
        returnValue = F("Scheuergarten");
        break;
    }
    case 278916:
    {
        returnValue = F("Scheuergartenweg");
        break;
    }
    case 278917:
    {
        returnValue = F("Scheuergasse");
        break;
    }
    case 278918:
    {
        returnValue = F("Scheuergärten");
        break;
    }
    case 278919:
    {
        returnValue = F("Scheuerhauweg");
        break;
    }
    case 278920:
    {
        returnValue = F("Scheuerhecker Str.");
        break;
    }
    case 278921:
    {
        returnValue = F("Scheuerhoffelder Weg");
        break;
    }
    case 278922:
    {
        returnValue = F("Scheuerhofstr.");
        break;
    }
    case 278923:
    {
        returnValue = F("Scheuerhofweg");
        break;
    }
    case 278924:
    {
        returnValue = F("Scheuerholzstr.");
        break;
    }
    case 278925:
    {
        returnValue = F("Scheuerinstr.");
        break;
    }
    case 278926:
    {
        returnValue = F("Scheuerklamm");
        break;
    }
    case 278927:
    {
        returnValue = F("Scheuerkopfweg");
        break;
    }
    case 278928:
    {
        returnValue = F("Scheuerkreuzweg");
        break;
    }
    case 278929:
    {
        returnValue = F("Scheuerle");
        break;
    }
    case 278930:
    {
        returnValue = F("Scheuerleinsplatz");
        break;
    }
    case 278931:
    {
        returnValue = F("Scheuerlenstr.");
        break;
    }
    case 278932:
    {
        returnValue = F("Scheuerleriß");
        break;
    }
    case 278933:
    {
        returnValue = F("Scheuerleriß (verwildert)");
        break;
    }
    case 278934:
    {
        returnValue = F("Scheuerlesbühl");
        break;
    }
    case 278935:
    {
        returnValue = F("Scheuerlesstr.");
        break;
    }
    case 278936:
    {
        returnValue = F("Scheuerleweg");
        break;
    }
    case 278937:
    {
        returnValue = F("Scheuermannstr.");
        break;
    }
    case 278938:
    {
        returnValue = F("Scheuermannsweg");
        break;
    }
    case 278939:
    {
        returnValue = F("Scheuermatt");
        break;
    }
    case 278940:
    {
        returnValue = F("Scheuermatten");
        break;
    }
    case 278941:
    {
        returnValue = F("Scheuermühle");
        break;
    }
    case 278942:
    {
        returnValue = F("Scheuern");
        break;
    }
    case 278943:
    {
        returnValue = F("Scheuernacker");
        break;
    }
    case 278944:
    {
        returnValue = F("Scheuernbergstr.");
        break;
    }
    case 278945:
    {
        returnValue = F("Scheuerner Str.");
        break;
    }
    case 278946:
    {
        returnValue = F("Scheuernstr.");
        break;
    }
    case 278947:
    {
        returnValue = F("Scheuerntorstr.");
        break;
    }
    case 278948:
    {
        returnValue = F("Scheuernwaldweg");
        break;
    }
    case 278949:
    {
        returnValue = F("Scheuernweg");
        break;
    }
    case 278950:
    {
        returnValue = F("Scheuernwinkel");
        break;
    }
    case 278951:
    {
        returnValue = F("Scheuerpesch");
        break;
    }
    case 278952:
    {
        returnValue = F("Scheuerrainstr.");
        break;
    }
    case 278953:
    {
        returnValue = F("Scheuerstr.");
        break;
    }
    case 278954:
    {
        returnValue = F("Scheuertalstr.");
        break;
    }
    case 278955:
    {
        returnValue = F("Scheuertrift");
        break;
    }
    case 278956:
    {
        returnValue = F("Scheuerwaldstr.");
        break;
    }
    case 278957:
    {
        returnValue = F("Scheuerweg");
        break;
    }
    case 278958:
    {
        returnValue = F("Scheuerwiese");
        break;
    }
    case 278959:
    {
        returnValue = F("Scheuerwiesen");
        break;
    }
    case 278960:
    {
        returnValue = F("Scheuerwiesenweg");
        break;
    }
    case 278961:
    {
        returnValue = F("Scheuerwinkel");
        break;
    }
    case 278962:
    {
        returnValue = F("Scheueräcker");
        break;
    }
    case 278963:
    {
        returnValue = F("Scheueräckerstr.");
        break;
    }
    case 278964:
    {
        returnValue = F("Scheufelesbergweg");
        break;
    }
    case 278965:
    {
        returnValue = F("Scheufelteichweg");
        break;
    }
    case 278966:
    {
        returnValue = F("Scheugäßchen");
        break;
    }
    case 278967:
    {
        returnValue = F("Scheulenbend");
        break;
    }
    case 278968:
    {
        returnValue = F("Scheulenstr.");
        break;
    }
    case 278969:
    {
        returnValue = F("Scheuler Hangweg");
        break;
    }
    case 278970:
    {
        returnValue = F("Scheuler Weg");
        break;
    }
    case 278971:
    {
        returnValue = F("Scheumannstr.");
        break;
    }
    case 278972:
    {
        returnValue = F("Scheune-Hof");
        break;
    }
    case 278973:
    {
        returnValue = F("Scheunebergstr.");
        break;
    }
    case 278974:
    {
        returnValue = F("Scheunen am Brink");
        break;
    }
    case 278975:
    {
        returnValue = F("Scheunenbalken");
        break;
    }
    case 278976:
    {
        returnValue = F("Scheunenberg");
        break;
    }
    case 278977:
    {
        returnValue = F("Scheunenbergsweg");
        break;
    }
    case 278978:
    {
        returnValue = F("Scheunenbrink");
        break;
    }
    case 278979:
    {
        returnValue = F("Scheunenfeld");
        break;
    }
    case 278980:
    {
        returnValue = F("Scheunenfeldweg");
        break;
    }
    case 278981:
    {
        returnValue = F("Scheunengasse");
        break;
    }
    case 278982:
    {
        returnValue = F("Scheunengäßchen");
        break;
    }
    case 278983:
    {
        returnValue = F("Scheunenhof");
        break;
    }
    case 278984:
    {
        returnValue = F("Scheunenkamp");
        break;
    }
    case 278985:
    {
        returnValue = F("Scheunenkoppel");
        break;
    }
    case 278986:
    {
        returnValue = F("Scheunenplan");
        break;
    }
    case 278987:
    {
        returnValue = F("Scheunenplatz");
        break;
    }
    case 278988:
    {
        returnValue = F("Scheunenstr.");
        break;
    }
    case 278989:
    {
        returnValue = F("Scheunenviertel");
        break;
    }
    case 278990:
    {
        returnValue = F("Scheunenviertel Estorf");
        break;
    }
    case 278991:
    {
        returnValue = F("Scheunenviertel Wellie");
        break;
    }
    case 278992:
    {
        returnValue = F("Scheunenweg");
        break;
    }
    case 278993:
    {
        returnValue = F("Scheunenwinkel");
        break;
    }
    case 278994:
    {
        returnValue = F("Scheunhornweg");
        break;
    }
    case 278995:
    {
        returnValue = F("Scheurachshof");
        break;
    }
    case 278996:
    {
        returnValue = F("Scheurebenring");
        break;
    }
    case 278997:
    {
        returnValue = F("Scheurebenweg");
        break;
    }
    case 278998:
    {
        returnValue = F("Scheurebestr.");
        break;
    }
    case 278999:
    {
        returnValue = F("Scheuren");
        break;
    }
    case 279000:
    {
        returnValue = F("Scheurenbenden");
        break;
    }
    case 279001:
    {
        returnValue = F("Scheurener Str.");
        break;
    }
    case 279002:
    {
        returnValue = F("Scheurenfeld");
        break;
    }
    case 279003:
    {
        returnValue = F("Scheurenfeldstr.");
        break;
    }
    case 279004:
    {
        returnValue = F("Scheurengarten");
        break;
    }
    case 279005:
    {
        returnValue = F("Scheurenhof");
        break;
    }
    case 279006:
    {
        returnValue = F("Scheurenhofweg");
        break;
    }
    case 279007:
    {
        returnValue = F("Scheurenhöfe");
        break;
    }
    case 279008:
    {
        returnValue = F("Scheurenrain");
        break;
    }
    case 279009:
    {
        returnValue = F("Scheurenstr.");
        break;
    }
    case 279010:
    {
        returnValue = F("Scheurenwiese");
        break;
    }
    case 279011:
    {
        returnValue = F("Scheurenwiesen");
        break;
    }
    case 279012:
    {
        returnValue = F("Scheurenäcker");
        break;
    }
    case 279013:
    {
        returnValue = F("Scheurenäckerweg");
        break;
    }
    case 279014:
    {
        returnValue = F("Scheuringskamp");
        break;
    }
    case 279015:
    {
        returnValue = F("Scheurlstr.");
        break;
    }
    case 279016:
    {
        returnValue = F("Scheurlweg");
        break;
    }
    case 279017:
    {
        returnValue = F("Scheuseweg");
        break;
    }
    case 279018:
    {
        returnValue = F("Scheustr.");
        break;
    }
    case 279019:
    {
        returnValue = F("Scheuweg");
        break;
    }
    case 279020:
    {
        returnValue = F("Schevastesstr.");
        break;
    }
    case 279021:
    {
        returnValue = F("Schevelinger Weg");
        break;
    }
    case 279022:
    {
        returnValue = F("Schevelsteiner Str.");
        break;
    }
    case 279023:
    {
        returnValue = F("Schevenbarg");
        break;
    }
    case 279024:
    {
        returnValue = F("Schevenbrücke");
        break;
    }
    case 279025:
    {
        returnValue = F("Schevenbrügge");
        break;
    }
    case 279026:
    {
        returnValue = F("Schevener Holz");
        break;
    }
    case 279027:
    {
        returnValue = F("Schevener Str.");
        break;
    }
    case 279028:
    {
        returnValue = F("Schevengarten");
        break;
    }
    case 279029:
    {
        returnValue = F("Schevenhofer Weg");
        break;
    }
    case 279030:
    {
        returnValue = F("Schevenhüttener Str.");
        break;
    }
    case 279031:
    {
        returnValue = F("Schevenstr.");
        break;
    }
    case 279032:
    {
        returnValue = F("Schevenweg");
        break;
    }
    case 279033:
    {
        returnValue = F("Schevenwiese");
        break;
    }
    case 279034:
    {
        returnValue = F("Scheverberg");
        break;
    }
    case 279035:
    {
        returnValue = F("Schevestr.");
        break;
    }
    case 279036:
    {
        returnValue = F("Schewe Kämpe");
        break;
    }
    case 279037:
    {
        returnValue = F("Schewebusch");
        break;
    }
    case 279038:
    {
        returnValue = F("Schewenbrücke");
        break;
    }
    case 279039:
    {
        returnValue = F("Schewenböken");
        break;
    }
    case 279040:
    {
        returnValue = F("Schewenhorst");
        break;
    }
    case 279041:
    {
        returnValue = F("Schewenort");
        break;
    }
    case 279042:
    {
        returnValue = F("Schexgasse");
        break;
    }
    case 279043:
    {
        returnValue = F("Scheyerer Str.");
        break;
    }
    case 279044:
    {
        returnValue = F("Scheyerer Weg");
        break;
    }
    case 279045:
    {
        returnValue = F("Scheyerl-Geräumt");
        break;
    }
    case 279046:
    {
        returnValue = F("Scheyernstr.");
        break;
    }
    case 279047:
    {
        returnValue = F("Scheyrer Str.");
        break;
    }
    case 279048:
    {
        returnValue = F("Scheyringstr.");
        break;
    }
    case 279049:
    {
        returnValue = F("Scheßlitzer Str.");
        break;
    }
    case 279050:
    {
        returnValue = F("Scheßlitzer Weg");
        break;
    }
    case 279051:
    {
        returnValue = F("Schiasser Chaussee");
        break;
    }
    case 279052:
    {
        returnValue = F("Schibecker Weg");
        break;
    }
    case 279053:
    {
        returnValue = F("Schibitz");
        break;
    }
    case 279054:
    {
        returnValue = F("Schibsler Weg");
        break;
    }
    case 279055:
    {
        returnValue = F("Schicht");
        break;
    }
    case 279056:
    {
        returnValue = F("Schichtgrube");
        break;
    }
    case 279057:
    {
        returnValue = F("Schichtlingsstr.");
        break;
    }
    case 279058:
    {
        returnValue = F("Schichtmeisterweg");
        break;
    }
    case 279059:
    {
        returnValue = F("Schichtshöhner Str.");
        break;
    }
    case 279060:
    {
        returnValue = F("Schichtstr.");
        break;
    }
    case 279061:
    {
        returnValue = F("Schichtweg");
        break;
    }
    case 279062:
    {
        returnValue = F("Schick'sche Planie");
        break;
    }
    case 279063:
    {
        returnValue = F("Schicka");
        break;
    }
    case 279064:
    {
        returnValue = F("Schickanöder Feld");
        break;
    }
    case 279065:
    {
        returnValue = F("Schickardstr.");
        break;
    }
    case 279066:
    {
        returnValue = F("Schicke-Brücke");
        break;
    }
    case 279067:
    {
        returnValue = F("Schickelsbrücke");
        break;
    }
    case 279068:
    {
        returnValue = F("Schickelstorweg");
        break;
    }
    case 279069:
    {
        returnValue = F("Schickemühle");
        break;
    }
    case 279070:
    {
        returnValue = F("Schickenberg");
        break;
    }
    case 279071:
    {
        returnValue = F("Schickengasse");
        break;
    }
    case 279072:
    {
        returnValue = F("Schickenweg");
        break;
    }
    case 279073:
    {
        returnValue = F("Schickergasse");
        break;
    }
    case 279074:
    {
        returnValue = F("Schickersgrub");
        break;
    }
    case 279075:
    {
        returnValue = F("Schickerweg");
        break;
    }
    case 279076:
    {
        returnValue = F("Schickeweg");
        break;
    }
    case 279077:
    {
        returnValue = F("Schickgasse");
        break;
    }
    case 279078:
    {
        returnValue = F("Schickhardt-Ring");
        break;
    }
    case 279079:
    {
        returnValue = F("Schickhardtallee");
        break;
    }
    case 279080:
    {
        returnValue = F("Schickhardtring");
        break;
    }
    case 279081:
    {
        returnValue = F("Schickhardtstr.");
        break;
    }
    case 279082:
    {
        returnValue = F("Schickhardtweg");
        break;
    }
    case 279083:
    {
        returnValue = F("Schickinger Str.");
        break;
    }
    case 279084:
    {
        returnValue = F("Schicklerstr.");
        break;
    }
    case 279085:
    {
        returnValue = F("Schicks Kamp");
        break;
    }
    case 279086:
    {
        returnValue = F("Schicksalsberg");
        break;
    }
    case 279087:
    {
        returnValue = F("Schickweg");
        break;
    }
    case 279088:
    {
        returnValue = F("Schiddelgang");
        break;
    }
    case 279089:
    {
        returnValue = F("Schiebberg");
        break;
    }
    case 279090:
    {
        returnValue = F("Schiebegasse");
        break;
    }
    case 279091:
    {
        returnValue = F("Schiebelau");
        break;
    }
    case 279092:
    {
        returnValue = F("Schiebelgasse");
        break;
    }
    case 279093:
    {
        returnValue = F("Schiebelhuthweg");
        break;
    }
    case 279094:
    {
        returnValue = F("Schiebelstr.");
        break;
    }
    case 279095:
    {
        returnValue = F("Schieben");
        break;
    }
    case 279096:
    {
        returnValue = F("Schieben Acker");
        break;
    }
    case 279097:
    {
        returnValue = F("Schiebener Str.");
        break;
    }
    case 279098:
    {
        returnValue = F("Schiebenkamp");
        break;
    }
    case 279099:
    {
        returnValue = F("Schiebergweg");
        break;
    }
    case 279100:
    {
        returnValue = F("Schieberweg");
        break;
    }
    case 279101:
    {
        returnValue = F("Schiebestr.");
        break;
    }
    case 279102:
    {
        returnValue = F("Schiebeweg");
        break;
    }
    case 279103:
    {
        returnValue = F("Schiebigeich");
        break;
    }
    case 279104:
    {
        returnValue = F("Schiebigenberg");
        break;
    }
    case 279105:
    {
        returnValue = F("Schieblerstr.");
        break;
    }
    case 279106:
    {
        returnValue = F("Schieblerweg");
        break;
    }
    case 279107:
    {
        returnValue = F("Schiebrookstr.");
        break;
    }
    case 279108:
    {
        returnValue = F("Schiebsdorf");
        break;
    }
    case 279109:
    {
        returnValue = F("Schiebsdorfer Weg");
        break;
    }
    case 279110:
    {
        returnValue = F("Schiedangerweg");
        break;
    }
    case 279111:
    {
        returnValue = F("Schiedberg");
        break;
    }
    case 279112:
    {
        returnValue = F("Schiede");
        break;
    }
    case 279113:
    {
        returnValue = F("Schiedebornstr.");
        break;
    }
    case 279114:
    {
        returnValue = F("Schiedegasse");
        break;
    }
    case 279115:
    {
        returnValue = F("Schiedelenweg");
        break;
    }
    case 279116:
    {
        returnValue = F("Schiedelhof");
        break;
    }
    case 279117:
    {
        returnValue = F("Schiedelstr.");
        break;
    }
    case 279118:
    {
        returnValue = F("Schiedenitzweg");
        break;
    }
    case 279119:
    {
        returnValue = F("Schiedenstr.");
        break;
    }
    case 279120:
    {
        returnValue = F("Schiedermeierplatz");
        break;
    }
    case 279121:
    {
        returnValue = F("Schiederstr.");
        break;
    }
    case 279122:
    {
        returnValue = F("Schiedetunnel");
        break;
    }
    case 279123:
    {
        returnValue = F("Schiedgasse");
        break;
    }
    case 279124:
    {
        returnValue = F("Schiedler Weg");
        break;
    }
    case 279125:
    {
        returnValue = F("Schiedstr.");
        break;
    }
    case 279126:
    {
        returnValue = F("Schiedunger Dorfstr.");
        break;
    }
    case 279127:
    {
        returnValue = F("Schiedunger Str.");
        break;
    }
    case 279128:
    {
        returnValue = F("Schiedweg");
        break;
    }
    case 279129:
    {
        returnValue = F("Schiefbahn");
        break;
    }
    case 279130:
    {
        returnValue = F("Schiefbahner Str.");
        break;
    }
    case 279131:
    {
        returnValue = F("Schiefbahner Weg");
        break;
    }
    case 279132:
    {
        returnValue = F("Schiefbahnweg");
        break;
    }
    case 279133:
    {
        returnValue = F("Schiefe Ahelle");
        break;
    }
    case 279134:
    {
        returnValue = F("Schiefe Barte");
        break;
    }
    case 279135:
    {
        returnValue = F("Schiefe Breite");
        break;
    }
    case 279136:
    {
        returnValue = F("Schiefe Gasse");
        break;
    }
    case 279137:
    {
        returnValue = F("Schiefe Güntke");
        break;
    }
    case 279138:
    {
        returnValue = F("Schiefe Halbe");
        break;
    }
    case 279139:
    {
        returnValue = F("Schiefe Horn");
        break;
    }
    case 279140:
    {
        returnValue = F("Schiefe Nördelt");
        break;
    }
    case 279141:
    {
        returnValue = F("Schiefe Schneise");
        break;
    }
    case 279142:
    {
        returnValue = F("Schiefe Str.");
        break;
    }
    case 279143:
    {
        returnValue = F("Schiefe-Halbe-Weg");
        break;
    }
    case 279144:
    {
        returnValue = F("Schiefehalbeweg");
        break;
    }
    case 279145:
    {
        returnValue = F("Schiefelberg");
        break;
    }
    case 279146:
    {
        returnValue = F("Schiefelgasse");
        break;
    }
    case 279147:
    {
        returnValue = F("Schiefenbergweg");
        break;
    }
    case 279148:
    {
        returnValue = F("Schiefener Str.");
        break;
    }
    case 279149:
    {
        returnValue = F("Schiefener Weg");
        break;
    }
    case 279150:
    {
        returnValue = F("Schiefer Berg");
        break;
    }
    case 279151:
    {
        returnValue = F("Schiefer Brink");
        break;
    }
    case 279152:
    {
        returnValue = F("Schiefer Hauweg");
        break;
    }
    case 279153:
    {
        returnValue = F("Schiefer Stiefel");
        break;
    }
    case 279154:
    {
        returnValue = F("Schiefer Sträßchen");
        break;
    }
    case 279155:
    {
        returnValue = F("Schiefer Weg");
        break;
    }
    case 279156:
    {
        returnValue = F("Schieferacker");
        break;
    }
    case 279157:
    {
        returnValue = F("Schieferbachweg");
        break;
    }
    case 279158:
    {
        returnValue = F("Schieferbank");
        break;
    }
    case 279159:
    {
        returnValue = F("Schieferbenden");
        break;
    }
    case 279160:
    {
        returnValue = F("Schieferberg");
        break;
    }
    case 279161:
    {
        returnValue = F("Schieferbergstr.");
        break;
    }
    case 279162:
    {
        returnValue = F("Schieferbruch");
        break;
    }
    case 279163:
    {
        returnValue = F("Schieferbühl");
        break;
    }
    case 279164:
    {
        returnValue = F("Schieferdyck");
        break;
    }
    case 279165:
    {
        returnValue = F("Schiefergasse");
        break;
    }
    case 279166:
    {
        returnValue = F("Schiefergrabenstr.");
        break;
    }
    case 279167:
    {
        returnValue = F("Schiefergrund");
        break;
    }
    case 279168:
    {
        returnValue = F("Schieferhügel");
        break;
    }
    case 279169:
    {
        returnValue = F("Schieferingweg");
        break;
    }
    case 279170:
    {
        returnValue = F("Schieferkamp");
        break;
    }
    case 279171:
    {
        returnValue = F("Schieferkaut");
        break;
    }
    case 279172:
    {
        returnValue = F("Schieferkautweg");
        break;
    }
    case 279173:
    {
        returnValue = F("Schieferkopf");
        break;
    }
    case 279174:
    {
        returnValue = F("Schieferliethen");
        break;
    }
    case 279175:
    {
        returnValue = F("Schieferling");
        break;
    }
    case 279176:
    {
        returnValue = F("Schieferpley");
        break;
    }
    case 279177:
    {
        returnValue = F("Schieferrichstatt");
        break;
    }
    case 279178:
    {
        returnValue = F("Schiefersee");
        break;
    }
    case 279179:
    {
        returnValue = F("Schieferseite");
        break;
    }
    case 279180:
    {
        returnValue = F("Schieferstein");
        break;
    }
    case 279181:
    {
        returnValue = F("Schiefersteinfeld");
        break;
    }
    case 279182:
    {
        returnValue = F("Schiefersteinstr.");
        break;
    }
    case 279183:
    {
        returnValue = F("Schiefersteinweg");
        break;
    }
    case 279184:
    {
        returnValue = F("Schieferstr.");
        break;
    }
    case 279185:
    {
        returnValue = F("Schiefertalsweg");
        break;
    }
    case 279186:
    {
        returnValue = F("Schieferterrasse");
        break;
    }
    case 279187:
    {
        returnValue = F("Schieferweg");
        break;
    }
    case 279188:
    {
        returnValue = F("Schieferöd");
        break;
    }
    case 279189:
    {
        returnValue = F("Schieffelingsweg");
        break;
    }
    case 279190:
    {
        returnValue = F("Schiefkoppel");
        break;
    }
    case 279191:
    {
        returnValue = F("Schiefnersweg");
        break;
    }
    case 279192:
    {
        returnValue = F("Schiefstr.");
        break;
    }
    case 279193:
    {
        returnValue = F("Schiefweg");
        break;
    }
    case 279194:
    {
        returnValue = F("Schiefweger Str.");
        break;
    }
    case 279195:
    {
        returnValue = F("Schiege");
        break;
    }
    case 279196:
    {
        returnValue = F("Schieggstr.");
        break;
    }
    case 279197:
    {
        returnValue = F("Schieglmühle");
        break;
    }
    case 279198:
    {
        returnValue = F("Schiel");
        break;
    }
    case 279199:
    {
        returnValue = F("Schielberger Str.");
        break;
    }
    case 279200:
    {
        returnValue = F("Schielehen");
        break;
    }
    case 279201:
    {
        returnValue = F("Schielenstr.");
        break;
    }
    case 279202:
    {
        returnValue = F("Schielestr.");
        break;
    }
    case 279203:
    {
        returnValue = F("Schieloer Str.");
        break;
    }
    case 279204:
    {
        returnValue = F("Schielstr.");
        break;
    }
    case 279205:
    {
        returnValue = F("Schielweg");
        break;
    }
    case 279206:
    {
        returnValue = F("Schiemerweg");
        break;
    }
    case 279207:
    {
        returnValue = F("Schiemesgasse");
        break;
    }
    case 279208:
    {
        returnValue = F("Schiemkerweg");
        break;
    }
    case 279209:
    {
        returnValue = F("Schienebergstege");
        break;
    }
    case 279210:
    {
        returnValue = F("Schienegraaf");
        break;
    }
    case 279211:
    {
        returnValue = F("Schienendamm");
        break;
    }
    case 279212:
    {
        returnValue = F("Schienenhofstr.");
        break;
    }
    case 279213:
    {
        returnValue = F("Schienenpadd");
        break;
    }
    case 279214:
    {
        returnValue = F("Schienenstr.");
        break;
    }
    case 279215:
    {
        returnValue = F("Schienenstrang");
        break;
    }
    case 279216:
    {
        returnValue = F("Schienenweg");
        break;
    }
    case 279217:
    {
        returnValue = F("Schiener Str.");
        break;
    }
    case 279218:
    {
        returnValue = F("Schienerbergstr.");
        break;
    }
    case 279219:
    {
        returnValue = F("Schienerbergweg");
        break;
    }
    case 279220:
    {
        returnValue = F("Schienholter Weg");
        break;
    }
    case 279221:
    {
        returnValue = F("Schienhörsterweg");
        break;
    }
    case 279222:
    {
        returnValue = F("Schiensbusch");
        break;
    }
    case 279223:
    {
        returnValue = F("Schiensweg");
        break;
    }
    case 279224:
    {
        returnValue = F("Schiepenholter Weg");
        break;
    }
    case 279225:
    {
        returnValue = F("Schiepziger Str.");
        break;
    }
    case 279226:
    {
        returnValue = F("Schiepziger Weg");
        break;
    }
    case 279227:
    {
        returnValue = F("Schier");
        break;
    }
    case 279228:
    {
        returnValue = F("Schier-Rähmen-Weg");
        break;
    }
    case 279229:
    {
        returnValue = F("Schieranger");
        break;
    }
    case 279230:
    {
        returnValue = F("Schierauer Hauptstr.");
        break;
    }
    case 279231:
    {
        returnValue = F("Schierbachstr.");
        break;
    }
    case 279232:
    {
        returnValue = F("Schierbachweg");
        break;
    }
    case 279233:
    {
        returnValue = F("Schierbaumsfeld");
        break;
    }
    case 279234:
    {
        returnValue = F("Schierberg");
        break;
    }
    case 279235:
    {
        returnValue = F("Schierbergstr.");
        break;
    }
    case 279236:
    {
        returnValue = F("Schierblicken");
        break;
    }
    case 279237:
    {
        returnValue = F("Schierboom");
        break;
    }
    case 279238:
    {
        returnValue = F("Schierborn");
        break;
    }
    case 279239:
    {
        returnValue = F("Schierbroker Mühlenweg");
        break;
    }
    case 279240:
    {
        returnValue = F("Schierbroker Str.");
        break;
    }
    case 279241:
    {
        returnValue = F("Schierbruch");
        break;
    }
    case 279242:
    {
        returnValue = F("Schierbruchweg");
        break;
    }
    case 279243:
    {
        returnValue = F("Schierbusch");
        break;
    }
    case 279244:
    {
        returnValue = F("Schiere");
        break;
    }
    case 279245:
    {
        returnValue = F("Schiereichenkoppel");
        break;
    }
    case 279246:
    {
        returnValue = F("Schierelberg");
        break;
    }
    case 279247:
    {
        returnValue = F("Schiereler Weg");
        break;
    }
    case 279248:
    {
        returnValue = F("Schieren Eichen");
        break;
    }
    case 279249:
    {
        returnValue = F("Schieren-Böhmen-Weg");
        break;
    }
    case 279250:
    {
        returnValue = F("Schierenacker");
        break;
    }
    case 279251:
    {
        returnValue = F("Schierenbalken");
        break;
    }
    case 279252:
    {
        returnValue = F("Schierenbarg");
        break;
    }
    case 279253:
    {
        returnValue = F("Schierenbergstr.");
        break;
    }
    case 279254:
    {
        returnValue = F("Schierenblek");
        break;
    }
    case 279255:
    {
        returnValue = F("Schierenblick");
        break;
    }
    case 279256:
    {
        returnValue = F("Schierenbrink");
        break;
    }
    case 279257:
    {
        returnValue = F("Schierenbuchen");
        break;
    }
    case 279258:
    {
        returnValue = F("Schierener Str.");
        break;
    }
    case 279259:
    {
        returnValue = F("Schierengstr.");
        break;
    }
    case 279260:
    {
        returnValue = F("Schierenhoper Str.");
        break;
    }
    case 279261:
    {
        returnValue = F("Schierenhorster Weg");
        break;
    }
    case 279262:
    {
        returnValue = F("Schierenkreuz");
        break;
    }
    case 279263:
    {
        returnValue = F("Schierenplack");
        break;
    }
    case 279264:
    {
        returnValue = F("Schierenseer Weg");
        break;
    }
    case 279265:
    {
        returnValue = F("Schierenstr.");
        break;
    }
    case 279266:
    {
        returnValue = F("Schierenwald");
        break;
    }
    case 279267:
    {
        returnValue = F("Schierenweg");
        break;
    }
    case 279268:
    {
        returnValue = F("Schierergasse");
        break;
    }
    case 279269:
    {
        returnValue = F("Schierghoferstr.");
        break;
    }
    case 279270:
    {
        returnValue = F("Schiergrund");
        break;
    }
    case 279271:
    {
        returnValue = F("Schierheider Str.");
        break;
    }
    case 279272:
    {
        returnValue = F("Schierheisterberg");
        break;
    }
    case 279273:
    {
        returnValue = F("Schierhof");
        break;
    }
    case 279274:
    {
        returnValue = F("Schierholt");
        break;
    }
    case 279275:
    {
        returnValue = F("Schierholz");
        break;
    }
    case 279276:
    {
        returnValue = F("Schierholzkaten");
        break;
    }
    case 279277:
    {
        returnValue = F("Schierholzstr.");
        break;
    }
    case 279278:
    {
        returnValue = F("Schierholzweg");
        break;
    }
    case 279279:
    {
        returnValue = F("Schierhorner Allee");
        break;
    }
    case 279280:
    {
        returnValue = F("Schierhorner Str.");
        break;
    }
    case 279281:
    {
        returnValue = F("Schierhorner Weg");
        break;
    }
    case 279282:
    {
        returnValue = F("Schierhorster Weg");
        break;
    }
    case 279283:
    {
        returnValue = F("Schieringerbrunnenstr.");
        break;
    }
    case 279284:
    {
        returnValue = F("Schieringerstr.");
        break;
    }
    case 279285:
    {
        returnValue = F("Schieringstr.");
        break;
    }
    case 279286:
    {
        returnValue = F("Schierkamp");
        break;
    }
    case 279287:
    {
        returnValue = F("Schierke");
        break;
    }
    case 279288:
    {
        returnValue = F("Schierkenring");
        break;
    }
    case 279289:
    {
        returnValue = F("Schierkenweg");
        break;
    }
    case 279290:
    {
        returnValue = F("Schierker Str.");
        break;
    }
    case 279291:
    {
        returnValue = F("Schierker Weg");
        break;
    }
    case 279292:
    {
        returnValue = F("Schierker-Feuerstein-Platz");
        break;
    }
    case 279293:
    {
        returnValue = F("Schierksdamm");
        break;
    }
    case 279294:
    {
        returnValue = F("Schierksmoorstr.");
        break;
    }
    case 279295:
    {
        returnValue = F("Schierksmühlenweg");
        break;
    }
    case 279296:
    {
        returnValue = F("Schierlager Weg");
        break;
    }
    case 279297:
    {
        returnValue = F("Schierleinsgasse");
        break;
    }
    case 279298:
    {
        returnValue = F("Schierlhofweg");
        break;
    }
    case 279299:
    {
        returnValue = F("Schierling");
        break;
    }
    case 279300:
    {
        returnValue = F("Schierlinger Str.");
        break;
    }
    case 279301:
    {
        returnValue = F("Schierlingsfeld");
        break;
    }
    case 279302:
    {
        returnValue = F("Schierlingsweg");
        break;
    }
    case 279303:
    {
        returnValue = F("Schierlingweg");
        break;
    }
    case 279304:
    {
        returnValue = F("Schierlmühler Str.");
        break;
    }
    case 279305:
    {
        returnValue = F("Schierloh");
        break;
    }
    case 279306:
    {
        returnValue = F("Schierloher Footpättken");
        break;
    }
    case 279307:
    {
        returnValue = F("Schierloher Mühlenweg");
        break;
    }
    case 279308:
    {
        returnValue = F("Schierloher Ring");
        break;
    }
    case 279309:
    {
        returnValue = F("Schierlohweg I");
        break;
    }
    case 279310:
    {
        returnValue = F("Schiernbusch");
        break;
    }
    case 279311:
    {
        returnValue = F("Schiernfeldstr.");
        break;
    }
    case 279312:
    {
        returnValue = F("Schiersandstr.");
        break;
    }
    case 279313:
    {
        returnValue = F("Schiersbruch");
        break;
    }
    case 279314:
    {
        returnValue = F("Schierschnitzer Str.");
        break;
    }
    case 279315:
    {
        returnValue = F("Schierschwender Str.");
        break;
    }
    case 279316:
    {
        returnValue = F("Schiersfelder Str.");
        break;
    }
    case 279317:
    {
        returnValue = F("Schiersiedlung");
        break;
    }
    case 279318:
    {
        returnValue = F("Schierstedter Chaussee");
        break;
    }
    case 279319:
    {
        returnValue = F("Schierstedter Str.");
        break;
    }
    case 279320:
    {
        returnValue = F("Schiersteiner Str.");
        break;
    }
    case 279321:
    {
        returnValue = F("Schierstr.");
        break;
    }
    case 279322:
    {
        returnValue = F("Schierstädter Wildfuhre");
        break;
    }
    case 279323:
    {
        returnValue = F("Schiersweg");
        break;
    }
    case 279324:
    {
        returnValue = F("Schierwaldenrather Str.");
        break;
    }
    case 279325:
    {
        returnValue = F("Schierwaldenrather Weg");
        break;
    }
    case 279326:
    {
        returnValue = F("Schierweg");
        break;
    }
    case 279327:
    {
        returnValue = F("Schiesheck");
        break;
    }
    case 279328:
    {
        returnValue = F("Schiesseirbergweg");
        break;
    }
    case 279329:
    {
        returnValue = F("Schiessersgarten");
        break;
    }
    case 279330:
    {
        returnValue = F("Schiesserstr.");
        break;
    }
    case 279331:
    {
        returnValue = F("Schiesserweg");
        break;
    }
    case 279332:
    {
        returnValue = F("Schiesshaldenweg");
        break;
    }
    case 279333:
    {
        returnValue = F("Schiesshausschneise");
        break;
    }
    case 279334:
    {
        returnValue = F("Schiesshausweg");
        break;
    }
    case 279335:
    {
        returnValue = F("Schiesshäuser Str.");
        break;
    }
    case 279336:
    {
        returnValue = F("Schiesslinie");
        break;
    }
    case 279337:
    {
        returnValue = F("Schiessmauer");
        break;
    }
    case 279338:
    {
        returnValue = F("Schiessmauerstr.");
        break;
    }
    case 279339:
    {
        returnValue = F("Schiessmauerweg");
        break;
    }
    case 279340:
    {
        returnValue = F("Schiessplatzweg");
        break;
    }
    case 279341:
    {
        returnValue = F("Schiessrain");
        break;
    }
    case 279342:
    {
        returnValue = F("Schiessstandweg");
        break;
    }
    case 279343:
    {
        returnValue = F("Schiessstr.");
        break;
    }
    case 279344:
    {
        returnValue = F("Schiesstandweg");
        break;
    }
    case 279345:
    {
        returnValue = F("Schiesswiesen");
        break;
    }
    case 279346:
    {
        returnValue = F("Schiestlstr.");
        break;
    }
    case 279347:
    {
        returnValue = F("Schieteck");
        break;
    }
    case 279348:
    {
        returnValue = F("Schieten");
        break;
    }
    case 279349:
    {
        returnValue = F("Schietenweg");
        break;
    }
    case 279350:
    {
        returnValue = F("Schietinger Str.");
        break;
    }
    case 279351:
    {
        returnValue = F("Schiettingerstr.");
        break;
    }
    case 279352:
    {
        returnValue = F("Schietweg");
        break;
    }
    case 279353:
    {
        returnValue = F("Schievekampsbusch");
        break;
    }
    case 279354:
    {
        returnValue = F("Schievenheim");
        break;
    }
    case 279355:
    {
        returnValue = F("Schievenstr.");
        break;
    }
    case 279356:
    {
        returnValue = F("Schievinkstr.");
        break;
    }
    case 279357:
    {
        returnValue = F("Schiewe Halbe");
        break;
    }
    case 279358:
    {
        returnValue = F("Schiewenhügel");
        break;
    }
    case 279359:
    {
        returnValue = F("Schießackerweg");
        break;
    }
    case 279360:
    {
        returnValue = F("Schießanger");
        break;
    }
    case 279361:
    {
        returnValue = F("Schießangerstr.");
        break;
    }
    case 279362:
    {
        returnValue = F("Schießanlage Hörabach");
        break;
    }
    case 279363:
    {
        returnValue = F("Schießbach");
        break;
    }
    case 279364:
    {
        returnValue = F("Schießbachstr.");
        break;
    }
    case 279365:
    {
        returnValue = F("Schießbahn");
        break;
    }
    case 279366:
    {
        returnValue = F("Schießbahnstr.");
        break;
    }
    case 279367:
    {
        returnValue = F("Schießbahnsträßchen");
        break;
    }
    case 279368:
    {
        returnValue = F("Schießbahnweg");
        break;
    }
    case 279369:
    {
        returnValue = F("Schießberg");
        break;
    }
    case 279370:
    {
        returnValue = F("Schießbergblick");
        break;
    }
    case 279371:
    {
        returnValue = F("Schießberger Weg");
        break;
    }
    case 279372:
    {
        returnValue = F("Schießberggraben");
        break;
    }
    case 279373:
    {
        returnValue = F("Schießbergstr.");
        break;
    }
    case 279374:
    {
        returnValue = F("Schießbergweg");
        break;
    }
    case 279375:
    {
        returnValue = F("Schießbuckel");
        break;
    }
    case 279376:
    {
        returnValue = F("Schießbudenweg");
        break;
    }
    case 279377:
    {
        returnValue = F("Schießbusch");
        break;
    }
    case 279378:
    {
        returnValue = F("Schießbähnchen");
        break;
    }
    case 279379:
    {
        returnValue = F("Schießecke");
        break;
    }
    case 279380:
    {
        returnValue = F("Schießeckschneise");
        break;
    }
    case 279381:
    {
        returnValue = F("Schießeneck");
        break;
    }
    case 279382:
    {
        returnValue = F("Schießener Str.");
        break;
    }
    case 279383:
    {
        returnValue = F("Schießer Weg");
        break;
    }
    case 279384:
    {
        returnValue = F("Schießerweg");
        break;
    }
    case 279385:
    {
        returnValue = F("Schießfeldstr.");
        break;
    }
    case 279386:
    {
        returnValue = F("Schießflügel");
        break;
    }
    case 279387:
    {
        returnValue = F("Schießgarten");
        break;
    }
    case 279388:
    {
        returnValue = F("Schießgartenstr.");
        break;
    }
    case 279389:
    {
        returnValue = F("Schießgartenweg");
        break;
    }
    case 279390:
    {
        returnValue = F("Schießgasse");
        break;
    }
    case 279391:
    {
        returnValue = F("Schießgraben");
        break;
    }
    case 279392:
    {
        returnValue = F("Schießgrabengasse");
        break;
    }
    case 279393:
    {
        returnValue = F("Schießgrabenstr.");
        break;
    }
    case 279394:
    {
        returnValue = F("Schießgrabenweg");
        break;
    }
    case 279395:
    {
        returnValue = F("Schießgärten");
        break;
    }
    case 279396:
    {
        returnValue = F("Schießgärtenweg");
        break;
    }
    case 279397:
    {
        returnValue = F("Schießhagen");
        break;
    }
    case 279398:
    {
        returnValue = F("Schießhalde");
        break;
    }
    case 279399:
    {
        returnValue = F("Schießhaldenweg");
        break;
    }
    case 279400:
    {
        returnValue = F("Schießhausallee");
        break;
    }
    case 279401:
    {
        returnValue = F("Schießhausbrücke");
        break;
    }
    case 279402:
    {
        returnValue = F("Schießhausgasse");
        break;
    }
    case 279403:
    {
        returnValue = F("Schießhausplatz");
        break;
    }
    case 279404:
    {
        returnValue = F("Schießhausstr.");
        break;
    }
    case 279405:
    {
        returnValue = F("Schießhaussträßle");
        break;
    }
    case 279406:
    {
        returnValue = F("Schießhausweg");
        break;
    }
    case 279407:
    {
        returnValue = F("Schießhecke");
        break;
    }
    case 279408:
    {
        returnValue = F("Schießhof");
        break;
    }
    case 279409:
    {
        returnValue = F("Schießhofer Str.");
        break;
    }
    case 279410:
    {
        returnValue = F("Schießhofstr.");
        break;
    }
    case 279411:
    {
        returnValue = F("Schießhohl");
        break;
    }
    case 279412:
    {
        returnValue = F("Schießholenweg");
        break;
    }
    case 279413:
    {
        returnValue = F("Schießhäuselweg");
        break;
    }
    case 279414:
    {
        returnValue = F("Schießhäuser Str.");
        break;
    }
    case 279415:
    {
        returnValue = F("Schießhäuslweg");
        break;
    }
    case 279416:
    {
        returnValue = F("Schießhütte");
        break;
    }
    case 279417:
    {
        returnValue = F("Schießhüttenstr.");
        break;
    }
    case 279418:
    {
        returnValue = F("Schießhüttenweg");
        break;
    }
    case 279419:
    {
        returnValue = F("Schießhüttestr.");
        break;
    }
    case 279420:
    {
        returnValue = F("Schießlacker");
        break;
    }
    case 279421:
    {
        returnValue = F("Schießlgasse");
        break;
    }
    case 279422:
    {
        returnValue = F("Schießlstr.");
        break;
    }
    case 279423:
    {
        returnValue = F("Schießlweg");
        break;
    }
    case 279424:
    {
        returnValue = F("Schießmantelstr.");
        break;
    }
    case 279425:
    {
        returnValue = F("Schießmauer");
        break;
    }
    case 279426:
    {
        returnValue = F("Schießmauerstr.");
        break;
    }
    case 279427:
    {
        returnValue = F("Schießmauerweg");
        break;
    }
    case 279428:
    {
        returnValue = F("Schießplatz");
        break;
    }
    case 279429:
    {
        returnValue = F("Schießplatzstr.");
        break;
    }
    case 279430:
    {
        returnValue = F("Schießplatzweg");
        break;
    }
    case 279431:
    {
        returnValue = F("Schießrain");
        break;
    }
    case 279432:
    {
        returnValue = F("Schießrainstr.");
        break;
    }
    case 279433:
    {
        returnValue = F("Schießrainweg");
        break;
    }
    case 279434:
    {
        returnValue = F("Schießruthe");
        break;
    }
    case 279435:
    {
        returnValue = F("Schießstand");
        break;
    }
    case 279436:
    {
        returnValue = F("Schießstand-Windräder");
        break;
    }
    case 279437:
    {
        returnValue = F("Schießstandweg");
        break;
    }
    case 279438:
    {
        returnValue = F("Schießstatt");
        break;
    }
    case 279439:
    {
        returnValue = F("Schießstattsiedlung");
        break;
    }
    case 279440:
    {
        returnValue = F("Schießstattstr.");
        break;
    }
    case 279441:
    {
        returnValue = F("Schießstattweg");
        break;
    }
    case 279442:
    {
        returnValue = F("Schießstr.");
        break;
    }
    case 279443:
    {
        returnValue = F("Schießstättberg");
        break;
    }
    case 279444:
    {
        returnValue = F("Schießstätte");
        break;
    }
    case 279445:
    {
        returnValue = F("Schießstättengasse");
        break;
    }
    case 279446:
    {
        returnValue = F("Schießstättenstr.");
        break;
    }
    case 279447:
    {
        returnValue = F("Schießstättenweg");
        break;
    }
    case 279448:
    {
        returnValue = F("Schießstätteweg");
        break;
    }
    case 279449:
    {
        returnValue = F("Schießstättgasse");
        break;
    }
    case 279450:
    {
        returnValue = F("Schießstättstr.");
        break;
    }
    case 279451:
    {
        returnValue = F("Schießstättweg");
        break;
    }
    case 279452:
    {
        returnValue = F("Schießtalstr.");
        break;
    }
    case 279453:
    {
        returnValue = F("Schießtorstr.");
        break;
    }
    case 279454:
    {
        returnValue = F("Schießtrath");
        break;
    }
    case 279455:
    {
        returnValue = F("Schießtäle");
        break;
    }
    case 279456:
    {
        returnValue = F("Schießwasen");
        break;
    }
    case 279457:
    {
        returnValue = F("Schießwasengäßchen");
        break;
    }
    case 279458:
    {
        returnValue = F("Schießwasenstr.");
        break;
    }
    case 279459:
    {
        returnValue = F("Schießwasenweg");
        break;
    }
    case 279460:
    {
        returnValue = F("Schießweg");
        break;
    }
    case 279461:
    {
        returnValue = F("Schießwiesenweg");
        break;
    }
    case 279462:
    {
        returnValue = F("Schießwieslenstr.");
        break;
    }
    case 279463:
    {
        returnValue = F("Schießwinkel");
        break;
    }
    case 279464:
    {
        returnValue = F("Schießäckerstr.");
        break;
    }
    case 279465:
    {
        returnValue = F("Schiffahrt");
        break;
    }
    case 279466:
    {
        returnValue = F("Schiffahrter Damm");
        break;
    }
    case 279467:
    {
        returnValue = F("Schiffahrtsweg");
        break;
    }
    case 279468:
    {
        returnValue = F("Schiffarther Str.");
        break;
    }
    case 279469:
    {
        returnValue = F("Schiffarther Weg");
        break;
    }
    case 279470:
    {
        returnValue = F("Schiffbauerdamm");
        break;
    }
    case 279471:
    {
        returnValue = F("Schiffbauergasse");
        break;
    }
    case 279472:
    {
        returnValue = F("Schiffbauerring");
        break;
    }
    case 279473:
    {
        returnValue = F("Schiffbauerstr.");
        break;
    }
    case 279474:
    {
        returnValue = F("Schiffbauerweg");
        break;
    }
    case 279475:
    {
        returnValue = F("Schiffbauplatz");
        break;
    }
    case 279476:
    {
        returnValue = F("Schiffbrücke");
        break;
    }
    case 279477:
    {
        returnValue = F("Schiffbrückenplatz");
        break;
    }
    case 279478:
    {
        returnValue = F("Schiffbrückgasse");
        break;
    }
    case 279479:
    {
        returnValue = F("Schiffdieweg");
        break;
    }
    case 279480:
    {
        returnValue = F("Schiffdorfer Chaussee");
        break;
    }
    case 279481:
    {
        returnValue = F("Schiffdorfer Grenzweg");
        break;
    }
    case 279482:
    {
        returnValue = F("Schiffdorfer Str.");
        break;
    }
    case 279483:
    {
        returnValue = F("Schiffelbacher Str.");
        break;
    }
    case 279484:
    {
        returnValue = F("Schiffelborner Str.");
        break;
    }
    case 279485:
    {
        returnValue = F("Schiffelsfelder Weg");
        break;
    }
    case 279486:
    {
        returnValue = F("Schiffelsweg");
        break;
    }
    case 279487:
    {
        returnValue = F("Schiffen Äcken");
        break;
    }
    case 279488:
    {
        returnValue = F("Schiffenberger Weg");
        break;
    }
    case 279489:
    {
        returnValue = F("Schiffenbergstr.");
        break;
    }
    case 279490:
    {
        returnValue = F("Schiffenborn");
        break;
    }
    case 279491:
    {
        returnValue = F("Schiffer Gasse");
        break;
    }
    case 279492:
    {
        returnValue = F("Schiffer-Hof");
        break;
    }
    case 279493:
    {
        returnValue = F("Schifferamt");
        break;
    }
    case 279494:
    {
        returnValue = F("Schifferberg");
        break;
    }
    case 279495:
    {
        returnValue = F("Schifferdamm");
        break;
    }
    case 279496:
    {
        returnValue = F("Schiffergang");
        break;
    }
    case 279497:
    {
        returnValue = F("Schiffergasse");
        break;
    }
    case 279498:
    {
        returnValue = F("Schiffergässchen");
        break;
    }
    case 279499:
    {
        returnValue = F("Schifferheimstr.");
        break;
    }
    case 279500:
    {
        returnValue = F("Schifferhof");
        break;
    }
    case 279501:
    {
        returnValue = F("Schifferlehnerstr.");
        break;
    }
    case 279502:
    {
        returnValue = F("Schifferring");
        break;
    }
    case 279503:
    {
        returnValue = F("Schiffersgasse");
        break;
    }
    case 279504:
    {
        returnValue = F("Schifferslohne");
        break;
    }
    case 279505:
    {
        returnValue = F("Schifferspielplatz");
        break;
    }
    case 279506:
    {
        returnValue = F("Schifferstadter Str.");
        break;
    }
    case 279507:
    {
        returnValue = F("Schifferstadter Weg");
        break;
    }
    case 279508:
    {
        returnValue = F("Schiffersteg");
        break;
    }
    case 279509:
    {
        returnValue = F("Schifferstieg");
        break;
    }
    case 279510:
    {
        returnValue = F("Schifferstr.");
        break;
    }
    case 279511:
    {
        returnValue = F("Schiffertorsstr.");
        break;
    }
    case 279512:
    {
        returnValue = F("Schiffertwiete");
        break;
    }
    case 279513:
    {
        returnValue = F("Schifferweg");
        break;
    }
    case 279514:
    {
        returnValue = F("Schifffahrter Damm");
        break;
    }
    case 279515:
    {
        returnValue = F("Schifffahrtsweg");
        break;
    }
    case 279516:
    {
        returnValue = F("Schiffgarten");
        break;
    }
    case 279517:
    {
        returnValue = F("Schiffgasse");
        break;
    }
    case 279518:
    {
        returnValue = F("Schiffgesweg");
        break;
    }
    case 279519:
    {
        returnValue = F("Schiffgraben");
        break;
    }
    case 279520:
    {
        returnValue = F("Schiffgrabendamm");
        break;
    }
    case 279521:
    {
        returnValue = F("Schiffgrundweg");
        break;
    }
    case 279522:
    {
        returnValue = F("Schiffhüttenweg");
        break;
    }
    case 279523:
    {
        returnValue = F("Schifflersgrund");
        break;
    }
    case 279524:
    {
        returnValue = F("Schifflerweg");
        break;
    }
    case 279525:
    {
        returnValue = F("Schiffmacherweg");
        break;
    }
    case 279526:
    {
        returnValue = F("Schiffmannstr.");
        break;
    }
    case 279527:
    {
        returnValue = F("Schiffmeisterweg");
        break;
    }
    case 279528:
    {
        returnValue = F("Schiffmühlenweg");
        break;
    }
    case 279529:
    {
        returnValue = F("Schiffmühlgasse");
        break;
    }
    case 279530:
    {
        returnValue = F("Schiffnerweg");
        break;
    }
    case 279531:
    {
        returnValue = F("Schiffrainer Str.");
        break;
    }
    case 279532:
    {
        returnValue = F("Schiffs-Anleger");
        break;
    }
    case 279533:
    {
        returnValue = F("Schiffsanlegebrücke Warnitz / Quast");
        break;
    }
    case 279534:
    {
        returnValue = F("Schiffsanleger Fahrgastschifffahrt van de Lücht");
        break;
    }
    case 279535:
    {
        returnValue = F("Schiffsbrücke Wuppermündung");
        break;
    }
    case 279536:
    {
        returnValue = F("Schiffsgasse");
        break;
    }
    case 279537:
    {
        returnValue = F("Schiffshebewerk");
        break;
    }
    case 279538:
    {
        returnValue = F("Schiffshelleweg");
        break;
    }
    case 279539:
    {
        returnValue = F("Schiffshören");
        break;
    }
    case 279540:
    {
        returnValue = F("Schiffshören-Ausbau");
        break;
    }
    case 279541:
    {
        returnValue = F("Schiffsklingenweg");
        break;
    }
    case 279542:
    {
        returnValue = F("Schiffsleidingsweg");
        break;
    }
    case 279543:
    {
        returnValue = F("Schiffsmuehlenweg");
        break;
    }
    case 279544:
    {
        returnValue = F("Schiffsmühle");
        break;
    }
    case 279545:
    {
        returnValue = F("Schiffsstelle");
        break;
    }
    case 279546:
    {
        returnValue = F("Schiffsstellendamm");
        break;
    }
    case 279547:
    {
        returnValue = F("Schiffsstr.");
        break;
    }
    case 279548:
    {
        returnValue = F("Schiffstatt");
        break;
    }
    case 279549:
    {
        returnValue = F("Schiffstelle");
        break;
    }
    case 279550:
    {
        returnValue = F("Schiffstellendamm");
        break;
    }
    case 279551:
    {
        returnValue = F("Schiffstr.");
        break;
    }
    case 279552:
    {
        returnValue = F("Schiffsweg");
        break;
    }
    case 279553:
    {
        returnValue = F("Schiffswerfte");
        break;
    }
    case 279554:
    {
        returnValue = F("Schifftaln");
        break;
    }
    case 279555:
    {
        returnValue = F("Schifftorstr.");
        break;
    }
    case 279556:
    {
        returnValue = F("Schiffwall");
        break;
    }
    case 279557:
    {
        returnValue = F("Schiffweg");
        break;
    }
    case 279558:
    {
        returnValue = F("Schiffweilerstr.");
        break;
    }
    case 279559:
    {
        returnValue = F("Schiftenweg");
        break;
    }
    case 279560:
    {
        returnValue = F("Schiftunger Str.");
        break;
    }
    case 279561:
    {
        returnValue = F("Schiftungerweg");
        break;
    }
    case 279562:
    {
        returnValue = F("Schign");
        break;
    }
    case 279563:
    {
        returnValue = F("Schikanederstr.");
        break;
    }
    case 279564:
    {
        returnValue = F("Schilbacher Str.");
        break;
    }
    case 279565:
    {
        returnValue = F("Schilbachweg");
        break;
    }
    case 279566:
    {
        returnValue = F("Schilbergasse");
        break;
    }
    case 279567:
    {
        returnValue = F("Schilbergstr.");
        break;
    }
    case 279568:
    {
        returnValue = F("Schilchau");
        break;
    }
    case 279569:
    {
        returnValue = F("Schilcher Geräumt");
        break;
    }
    case 279570:
    {
        returnValue = F("Schilcher-Geraeumt");
        break;
    }
    case 279571:
    {
        returnValue = F("Schilchergeräumt");
        break;
    }
    case 279572:
    {
        returnValue = F("Schilcherholzweg");
        break;
    }
    case 279573:
    {
        returnValue = F("Schilcherweg");
        break;
    }
    case 279574:
    {
        returnValue = F("Schild");
        break;
    }
    case 279575:
    {
        returnValue = F("Schild-Str.");
        break;
    }
    case 279576:
    {
        returnValue = F("Schildablick");
        break;
    }
    case 279577:
    {
        returnValue = F("Schildacker");
        break;
    }
    case 279578:
    {
        returnValue = F("Schildackerweg");
        break;
    }
    case 279579:
    {
        returnValue = F("Schildaer Str.");
        break;
    }
    case 279580:
    {
        returnValue = F("Schildaer Weg");
        break;
    }
    case 279581:
    {
        returnValue = F("Schildarpstr.");
        break;
    }
    case 279582:
    {
        returnValue = F("Schildauer Str.");
        break;
    }
    case 279583:
    {
        returnValue = F("Schildauer Triftweg");
        break;
    }
    case 279584:
    {
        returnValue = F("Schildauer Weg");
        break;
    }
    case 279585:
    {
        returnValue = F("Schildaustr.");
        break;
    }
    case 279586:
    {
        returnValue = F("Schildaweg");
        break;
    }
    case 279587:
    {
        returnValue = F("Schildbachhaldenweg");
        break;
    }
    case 279588:
    {
        returnValue = F("Schildbachstr.");
        break;
    }
    case 279589:
    {
        returnValue = F("Schildbauernweg");
        break;
    }
    case 279590:
    {
        returnValue = F("Schildbendweg");
        break;
    }
    case 279591:
    {
        returnValue = F("Schildberg");
        break;
    }
    case 279592:
    {
        returnValue = F("Schildbergaufstieg");
        break;
    }
    case 279593:
    {
        returnValue = F("Schildberger Weg");
        break;
    }
    case 279594:
    {
        returnValue = F("Schildbergweg");
        break;
    }
    case 279595:
    {
        returnValue = F("Schildbreede");
        break;
    }
    case 279596:
    {
        returnValue = F("Schildbusch");
        break;
    }
    case 279597:
    {
        returnValue = F("Schildbürger Park");
        break;
    }
    case 279598:
    {
        returnValue = F("Schildchenstr.");
        break;
    }
    case 279599:
    {
        returnValue = F("Schildchesgraben");
        break;
    }
    case 279600:
    {
        returnValue = F("Schilde-Park");
        break;
    }
    case 279601:
    {
        returnValue = F("Schildeblick");
        break;
    }
    case 279602:
    {
        returnValue = F("Schildeckstr.");
        break;
    }
    case 279603:
    {
        returnValue = F("Schildeckweg");
        break;
    }
    case 279604:
    {
        returnValue = F("Schilden");
        break;
    }
    case 279605:
    {
        returnValue = F("Schildenstr.");
        break;
    }
    case 279606:
    {
        returnValue = F("Schilder Dorfstr.");
        break;
    }
    case 279607:
    {
        returnValue = F("Schilder Str.");
        break;
    }
    case 279608:
    {
        returnValue = F("Schilder Weg");
        break;
    }
    case 279609:
    {
        returnValue = F("Schildererstr.");
        break;
    }
    case 279610:
    {
        returnValue = F("Schildergasse");
        break;
    }
    case 279611:
    {
        returnValue = F("Schilderhainer Str.");
        break;
    }
    case 279612:
    {
        returnValue = F("Schilderhainer Triftweg");
        break;
    }
    case 279613:
    {
        returnValue = F("Schilderinksweide");
        break;
    }
    case 279614:
    {
        returnValue = F("Schilderstr.");
        break;
    }
    case 279615:
    {
        returnValue = F("Schilderweg");
        break;
    }
    case 279616:
    {
        returnValue = F("Schildescher Str.");
        break;
    }
    case 279617:
    {
        returnValue = F("Schildestr.");
        break;
    }
    case 279618:
    {
        returnValue = F("Schildfarneck");
        break;
    }
    case 279619:
    {
        returnValue = F("Schildgasse");
        break;
    }
    case 279620:
    {
        returnValue = F("Schildgenplatz");
        break;
    }
    case 279621:
    {
        returnValue = F("Schildgensacker");
        break;
    }
    case 279622:
    {
        returnValue = F("Schildgenstr.");
        break;
    }
    case 279623:
    {
        returnValue = F("Schildgensweg");
        break;
    }
    case 279624:
    {
        returnValue = F("Schildgesstr.");
        break;
    }
    case 279625:
    {
        returnValue = F("Schildhauerstr.");
        break;
    }
    case 279626:
    {
        returnValue = F("Schildheide");
        break;
    }
    case 279627:
    {
        returnValue = F("Schildhof");
        break;
    }
    case 279628:
    {
        returnValue = F("Schildhofstr.");
        break;
    }
    case 279629:
    {
        returnValue = F("Schildholzsiedlung");
        break;
    }
    case 279630:
    {
        returnValue = F("Schilding");
        break;
    }
    case 279631:
    {
        returnValue = F("Schildkamp");
        break;
    }
    case 279632:
    {
        returnValue = F("Schildkrötenweg");
        break;
    }
    case 279633:
    {
        returnValue = F("Schildkrötstr.");
        break;
    }
    case 279634:
    {
        returnValue = F("Schildmannsberger Str.");
        break;
    }
    case 279635:
    {
        returnValue = F("Schildmühlestr.");
        break;
    }
    case 279636:
    {
        returnValue = F("Schildower Chaussee");
        break;
    }
    case 279637:
    {
        returnValue = F("Schildower Gärten");
        break;
    }
    case 279638:
    {
        returnValue = F("Schildplatz");
        break;
    }
    case 279639:
    {
        returnValue = F("Schildsheider Str.");
        break;
    }
    case 279640:
    {
        returnValue = F("Schildsteinweg");
        break;
    }
    case 279641:
    {
        returnValue = F("Schildstr.");
        break;
    }
    case 279642:
    {
        returnValue = F("Schildstölken");
        break;
    }
    case 279643:
    {
        returnValue = F("Schildthurner Str.");
        break;
    }
    case 279644:
    {
        returnValue = F("Schildwach");
        break;
    }
    case 279645:
    {
        returnValue = F("Schildwache");
        break;
    }
    case 279646:
    {
        returnValue = F("Schildwachstr.");
        break;
    }
    case 279647:
    {
        returnValue = F("Schildwachtstr.");
        break;
    }
    case 279648:
    {
        returnValue = F("Schildwachtweg");
        break;
    }
    case 279649:
    {
        returnValue = F("Schildwachweg");
        break;
    }
    case 279650:
    {
        returnValue = F("Schildweg");
        break;
    }
    case 279651:
    {
        returnValue = F("Schildweiden");
        break;
    }
    case 279652:
    {
        returnValue = F("Schildwiese");
        break;
    }
    case 279653:
    {
        returnValue = F("Schilf-Erlebnissteg");
        break;
    }
    case 279654:
    {
        returnValue = F("Schilfberg");
        break;
    }
    case 279655:
    {
        returnValue = F("Schilfbergweg");
        break;
    }
    case 279656:
    {
        returnValue = F("Schilfbogen");
        break;
    }
    case 279657:
    {
        returnValue = F("Schilfbreite");
        break;
    }
    case 279658:
    {
        returnValue = F("Schilfbruch");
        break;
    }
    case 279659:
    {
        returnValue = F("Schilfbruchstr.");
        break;
    }
    case 279660:
    {
        returnValue = F("Schilfgasse");
        break;
    }
    case 279661:
    {
        returnValue = F("Schilfgraben");
        break;
    }
    case 279662:
    {
        returnValue = F("Schilfgrund");
        break;
    }
    case 279663:
    {
        returnValue = F("Schilfgürtelweg");
        break;
    }
    case 279664:
    {
        returnValue = F("Schilfhof");
        break;
    }
    case 279665:
    {
        returnValue = F("Schilfkamp");
        break;
    }
    case 279666:
    {
        returnValue = F("Schilfkampweg");
        break;
    }
    case 279667:
    {
        returnValue = F("Schilflache");
        break;
    }
    case 279668:
    {
        returnValue = F("Schilfpfad");
        break;
    }
    case 279669:
    {
        returnValue = F("Schilfrain");
        break;
    }
    case 279670:
    {
        returnValue = F("Schilfring");
        break;
    }
    case 279671:
    {
        returnValue = F("Schilfrohr");
        break;
    }
    case 279672:
    {
        returnValue = F("Schilfrohrpfad");
        break;
    }
    case 279673:
    {
        returnValue = F("Schilfrohrsängerweg");
        break;
    }
    case 279674:
    {
        returnValue = F("Schilfrohrweg");
        break;
    }
    case 279675:
    {
        returnValue = F("Schilfsgraben");
        break;
    }
    case 279676:
    {
        returnValue = F("Schilfstr.");
        break;
    }
    case 279677:
    {
        returnValue = F("Schilfteichweg");
        break;
    }
    case 279678:
    {
        returnValue = F("Schilfufer");
        break;
    }
    case 279679:
    {
        returnValue = F("Schilfweg");
        break;
    }
    case 279680:
    {
        returnValue = F("Schilfwiese");
        break;
    }
    case 279681:
    {
        returnValue = F("Schilfwiesenflügel");
        break;
    }
    case 279682:
    {
        returnValue = F("Schilgenstr.");
        break;
    }
    case 279683:
    {
        returnValue = F("Schilgeskamp");
        break;
    }
    case 279684:
    {
        returnValue = F("Schilkersteg");
        break;
    }
    case 279685:
    {
        returnValue = F("Schilksee Wanderweg");
        break;
    }
    case 279686:
    {
        returnValue = F("Schilkseer Str.");
        break;
    }
    case 279687:
    {
        returnValue = F("Schillbachstr.");
        break;
    }
    case 279688:
    {
        returnValue = F("Schillbergstr.");
        break;
    }
    case 279689:
    {
        returnValue = F("Schillbrok");
        break;
    }
    case 279690:
    {
        returnValue = F("Schillbroker Weg");
        break;
    }
    case 279691:
    {
        returnValue = F("Schilldünen");
        break;
    }
    case 279692:
    {
        returnValue = F("Schillegassen");
        break;
    }
    case 279693:
    {
        returnValue = F("Schillenbühnweg");
        break;
    }
    case 279694:
    {
        returnValue = F("Schillener Str.");
        break;
    }
    case 279695:
    {
        returnValue = F("Schillengraben");
        break;
    }
    case 279696:
    {
        returnValue = F("Schiller-Str.");
        break;
    }
    case 279697:
    {
        returnValue = F("Schillerallee");
        break;
    }
    case 279698:
    {
        returnValue = F("Schilleranlage");
        break;
    }
    case 279699:
    {
        returnValue = F("Schilleranlagen");
        break;
    }
    case 279700:
    {
        returnValue = F("Schillerbend");
        break;
    }
    case 279701:
    {
        returnValue = F("Schillerberg");
        break;
    }
    case 279702:
    {
        returnValue = F("Schillerbrücke");
        break;
    }
    case 279703:
    {
        returnValue = F("Schillerbuche");
        break;
    }
    case 279704:
    {
        returnValue = F("Schillergarten");
        break;
    }
    case 279705:
    {
        returnValue = F("Schillergasse");
        break;
    }
    case 279706:
    {
        returnValue = F("Schillergäßchen");
        break;
    }
    case 279707:
    {
        returnValue = F("Schillerhain");
        break;
    }
    case 279708:
    {
        returnValue = F("Schillerhöfe");
        break;
    }
    case 279709:
    {
        returnValue = F("Schillerhöhe");
        break;
    }
    case 279710:
    {
        returnValue = F("Schillerirng");
        break;
    }
    case 279711:
    {
        returnValue = F("Schillerlinde");
        break;
    }
    case 279712:
    {
        returnValue = F("Schillern");
        break;
    }
    case 279713:
    {
        returnValue = F("Schillerpark");
        break;
    }
    case 279714:
    {
        returnValue = F("Schillerpfad");
        break;
    }
    case 279715:
    {
        returnValue = F("Schillerplatz");
        break;
    }
    case 279716:
    {
        returnValue = F("Schillerpromenade");
        break;
    }
    case 279717:
    {
        returnValue = F("Schillerring");
        break;
    }
    case 279718:
    {
        returnValue = F("Schillersdorf");
        break;
    }
    case 279719:
    {
        returnValue = F("Schillershöhe");
        break;
    }
    case 279720:
    {
        returnValue = F("Schillersiedlung");
        break;
    }
    case 279721:
    {
        returnValue = F("Schillerslager Landstr.");
        break;
    }
    case 279722:
    {
        returnValue = F("Schillerslager Str.");
        break;
    }
    case 279723:
    {
        returnValue = F("Schillersteg");
        break;
    }
    case 279724:
    {
        returnValue = F("Schillersteig");
        break;
    }
    case 279725:
    {
        returnValue = F("Schillerstr.");
        break;
    }
    case 279726:
    {
        returnValue = F("Schillertsberg");
        break;
    }
    case 279727:
    {
        returnValue = F("Schillerweg");
        break;
    }
    case 279728:
    {
        returnValue = F("Schillerwiese");
        break;
    }
    case 279729:
    {
        returnValue = F("Schillesgasse");
        break;
    }
    case 279730:
    {
        returnValue = F("Schillgasse");
        break;
    }
    case 279731:
    {
        returnValue = F("Schillhof");
        break;
    }
    case 279732:
    {
        returnValue = F("Schillhofener Str.");
        break;
    }
    case 279733:
    {
        returnValue = F("Schillhörn");
        break;
    }
    case 279734:
    {
        returnValue = F("Schillighof");
        break;
    }
    case 279735:
    {
        returnValue = F("Schillighörn");
        break;
    }
    case 279736:
    {
        returnValue = F("Schilligstück");
        break;
    }
    case 279737:
    {
        returnValue = F("Schilling");
        break;
    }
    case 279738:
    {
        returnValue = F("Schilling-von-Canstatt-Str.");
        break;
    }
    case 279739:
    {
        returnValue = F("Schillingallee");
        break;
    }
    case 279740:
    {
        returnValue = F("Schillinger Weg");
        break;
    }
    case 279741:
    {
        returnValue = F("Schillingerbergstr.");
        break;
    }
    case 279742:
    {
        returnValue = F("Schillingerring");
        break;
    }
    case 279743:
    {
        returnValue = F("Schillingerstr.");
        break;
    }
    case 279744:
    {
        returnValue = F("Schillinghof");
        break;
    }
    case 279745:
    {
        returnValue = F("Schillinghofweg");
        break;
    }
    case 279746:
    {
        returnValue = F("Schillingkamp");
        break;
    }
    case 279747:
    {
        returnValue = F("Schillings Grund");
        break;
    }
    case 279748:
    {
        returnValue = F("Schillings Hof");
        break;
    }
    case 279749:
    {
        returnValue = F("Schillingsbarg");
        break;
    }
    case 279750:
    {
        returnValue = F("Schillingsbostel");
        break;
    }
    case 279751:
    {
        returnValue = F("Schillingsbusch");
        break;
    }
    case 279752:
    {
        returnValue = F("Schillingsfürst");
        break;
    }
    case 279753:
    {
        returnValue = F("Schillingsfürster Str.");
        break;
    }
    case 279754:
    {
        returnValue = F("Schillingsgasse");
        break;
    }
    case 279755:
    {
        returnValue = F("Schillingshof");
        break;
    }
    case 279756:
    {
        returnValue = F("Schillingshofweg");
        break;
    }
    case 279757:
    {
        returnValue = F("Schillingskamp");
        break;
    }
    case 279758:
    {
        returnValue = F("Schillingspforte");
        break;
    }
    case 279759:
    {
        returnValue = F("Schillingsrain");
        break;
    }
    case 279760:
    {
        returnValue = F("Schillingsstr.");
        break;
    }
    case 279761:
    {
        returnValue = F("Schillingstaler Weg");
        break;
    }
    case 279762:
    {
        returnValue = F("Schillingsteg");
        break;
    }
    case 279763:
    {
        returnValue = F("Schillingstr.");
        break;
    }
    case 279764:
    {
        returnValue = F("Schillingswaldstr.");
        break;
    }
    case 279765:
    {
        returnValue = F("Schillingsweg");
        break;
    }
    case 279766:
    {
        returnValue = F("Schillingswinkel");
        break;
    }
    case 279767:
    {
        returnValue = F("Schillingweg");
        break;
    }
    case 279768:
    {
        returnValue = F("Schillmühle");
        break;
    }
    case 279769:
    {
        returnValue = F("Schillmühlenkamp");
        break;
    }
    case 279770:
    {
        returnValue = F("Schillplate");
        break;
    }
    case 279771:
    {
        returnValue = F("Schillstr.");
        break;
    }
    case 279772:
    {
        returnValue = F("Schillweg");
        break;
    }
    case 279773:
    {
        returnValue = F("Schillwiese");
        break;
    }
    case 279774:
    {
        returnValue = F("Schillwitzhausen");
        break;
    }
    case 279775:
    {
        returnValue = F("Schilmgasse");
        break;
    }
    case 279776:
    {
        returnValue = F("Schilsbachstr.");
        break;
    }
    case 279777:
    {
        returnValue = F("Schilsbachtal");
        break;
    }
    case 279778:
    {
        returnValue = F("Schiltacher Str.");
        break;
    }
    case 279779:
    {
        returnValue = F("Schiltachstr.");
        break;
    }
    case 279780:
    {
        returnValue = F("Schiltachweg");
        break;
    }
    case 279781:
    {
        returnValue = F("Schiltberger Str.");
        break;
    }
    case 279782:
    {
        returnValue = F("Schiltbergerstr.");
        break;
    }
    case 279783:
    {
        returnValue = F("Schilteck");
        break;
    }
    case 279784:
    {
        returnValue = F("Schilteckstr.");
        break;
    }
    case 279785:
    {
        returnValue = F("Schiltenbachstr.");
        break;
    }
    case 279786:
    {
        returnValue = F("Schiltern");
        break;
    }
    case 279787:
    {
        returnValue = F("Schilterstr.");
        break;
    }
    case 279788:
    {
        returnValue = F("Schiltsgasse");
        break;
    }
    case 279789:
    {
        returnValue = F("Schimbacher Str.");
        break;
    }
    case 279790:
    {
        returnValue = F("Schimbaum");
        break;
    }
    case 279791:
    {
        returnValue = F("Schimborner Str.");
        break;
    }
    case 279792:
    {
        returnValue = F("Schimhof");
        break;
    }
    case 279793:
    {
        returnValue = F("Schimmeck");
        break;
    }
    case 279794:
    {
        returnValue = F("Schimmel");
        break;
    }
    case 279795:
    {
        returnValue = F("Schimmelbach");
        break;
    }
    case 279796:
    {
        returnValue = F("Schimmelbogenverbindungsweg");
        break;
    }
    case 279797:
    {
        returnValue = F("Schimmelbogenweg");
        break;
    }
    case 279798:
    {
        returnValue = F("Schimmelbuschstr.");
        break;
    }
    case 279799:
    {
        returnValue = F("Schimmelbuschweg");
        break;
    }
    case 279800:
    {
        returnValue = F("Schimmeles-Weg");
        break;
    }
    case 279801:
    {
        returnValue = F("Schimmelesweg");
        break;
    }
    case 279802:
    {
        returnValue = F("Schimmelfederweg");
        break;
    }
    case 279803:
    {
        returnValue = F("Schimmelfeldstr.");
        break;
    }
    case 279804:
    {
        returnValue = F("Schimmelgasse");
        break;
    }
    case 279805:
    {
        returnValue = F("Schimmelgaß");
        break;
    }
    case 279806:
    {
        returnValue = F("Schimmelgraben");
        break;
    }
    case 279807:
    {
        returnValue = F("Schimmelhof");
        break;
    }
    case 279808:
    {
        returnValue = F("Schimmelkamp");
        break;
    }
    case 279809:
    {
        returnValue = F("Schimmelleite");
        break;
    }
    case 279810:
    {
        returnValue = F("Schimmelleitenweg");
        break;
    }
    case 279811:
    {
        returnValue = F("Schimmelmannstr.");
        break;
    }
    case 279812:
    {
        returnValue = F("Schimmelpfengstr.");
        break;
    }
    case 279813:
    {
        returnValue = F("Schimmelpfennigstr.");
        break;
    }
    case 279814:
    {
        returnValue = F("Schimmelreitersteig");
        break;
    }
    case 279815:
    {
        returnValue = F("Schimmelreiterstr.");
        break;
    }
    case 279816:
    {
        returnValue = F("Schimmelreiterweg");
        break;
    }
    case 279817:
    {
        returnValue = F("Schimmelsberg");
        break;
    }
    case 279818:
    {
        returnValue = F("Schimmelsburg");
        break;
    }
    case 279819:
    {
        returnValue = F("Schimmelseite");
        break;
    }
    case 279820:
    {
        returnValue = F("Schimmelsgraben");
        break;
    }
    case 279821:
    {
        returnValue = F("Schimmelsheider Park");
        break;
    }
    case 279822:
    {
        returnValue = F("Schimmelsheider Weg");
        break;
    }
    case 279823:
    {
        returnValue = F("Schimmelsplatz");
        break;
    }
    case 279824:
    {
        returnValue = F("Schimmelsrain");
        break;
    }
    case 279825:
    {
        returnValue = F("Schimmelsteig");
        break;
    }
    case 279826:
    {
        returnValue = F("Schimmelstr.");
        break;
    }
    case 279827:
    {
        returnValue = F("Schimmelsweg");
        break;
    }
    case 279828:
    {
        returnValue = F("Schimmelturmgasse");
        break;
    }
    case 279829:
    {
        returnValue = F("Schimmelweg");
        break;
    }
    case 279830:
    {
        returnValue = F("Schimmelwies");
        break;
    }
    case 279831:
    {
        returnValue = F("Schimmelwiesenstr.");
        break;
    }
    case 279832:
    {
        returnValue = F("Schimmer Dorfstr.");
        break;
    }
    case 279833:
    {
        returnValue = F("Schimmer Landstr.");
        break;
    }
    case 279834:
    {
        returnValue = F("Schimmertstr.");
        break;
    }
    case 279835:
    {
        returnValue = F("Schimmerwaldweg");
        break;
    }
    case 279836:
    {
        returnValue = F("Schimmingweg");
        break;
    }
    case 279837:
    {
        returnValue = F("Schimmweg");
        break;
    }
    case 279838:
    {
        returnValue = F("Schimper-Weg");
        break;
    }
    case 279839:
    {
        returnValue = F("Schimperstr.");
        break;
    }
    case 279840:
    {
        returnValue = F("Schimpf-Weg");
        break;
    }
    case 279841:
    {
        returnValue = F("Schimpfhausen");
        break;
    }
    case 279842:
    {
        returnValue = F("Schimplweg");
        break;
    }
    case 279843:
    {
        returnValue = F("Schimsheimer Str.");
        break;
    }
    case 279844:
    {
        returnValue = F("Schind Geräumt");
        break;
    }
    case 279845:
    {
        returnValue = F("Schindackersweg");
        break;
    }
    case 279846:
    {
        returnValue = F("Schindackerweg");
        break;
    }
    case 279847:
    {
        returnValue = F("Schindangerweg");
        break;
    }
    case 279848:
    {
        returnValue = F("Schindberg");
        break;
    }
    case 279849:
    {
        returnValue = F("Schindbergring");
        break;
    }
    case 279850:
    {
        returnValue = F("Schindbergstr.");
        break;
    }
    case 279851:
    {
        returnValue = F("Schindbuckweg");
        break;
    }
    case 279852:
    {
        returnValue = F("Schindbühl");
        break;
    }
    case 279853:
    {
        returnValue = F("Schindbühlweg");
        break;
    }
    case 279854:
    {
        returnValue = F("Schindebusch");
        break;
    }
    case 279855:
    {
        returnValue = F("Schindegasse");
        break;
    }
    case 279856:
    {
        returnValue = F("Schindelackerweg");
        break;
    }
    case 279857:
    {
        returnValue = F("Schindelbach");
        break;
    }
    case 279858:
    {
        returnValue = F("Schindelbacher Str.");
        break;
    }
    case 279859:
    {
        returnValue = F("Schindelbacher Weg");
        break;
    }
    case 279860:
    {
        returnValue = F("Schindelberg");
        break;
    }
    case 279861:
    {
        returnValue = F("Schindelbergstr.");
        break;
    }
    case 279862:
    {
        returnValue = F("Schindelbergweg");
        break;
    }
    case 279863:
    {
        returnValue = F("Schindelbornweg");
        break;
    }
    case 279864:
    {
        returnValue = F("Schindelbruch");
        break;
    }
    case 279865:
    {
        returnValue = F("Schindelbuck");
        break;
    }
    case 279866:
    {
        returnValue = F("Schindelebeneweg");
        break;
    }
    case 279867:
    {
        returnValue = F("Schindelepassage");
        break;
    }
    case 279868:
    {
        returnValue = F("Schindelfeldstr.");
        break;
    }
    case 279869:
    {
        returnValue = F("Schindelgasse");
        break;
    }
    case 279870:
    {
        returnValue = F("Schindelhalde");
        break;
    }
    case 279871:
    {
        returnValue = F("Schindelhofweg");
        break;
    }
    case 279872:
    {
        returnValue = F("Schindeliweg");
        break;
    }
    case 279873:
    {
        returnValue = F("Schindelklammweg");
        break;
    }
    case 279874:
    {
        returnValue = F("Schindeller");
        break;
    }
    case 279875:
    {
        returnValue = F("Schindellohe");
        break;
    }
    case 279876:
    {
        returnValue = F("Schindelmacherweg");
        break;
    }
    case 279877:
    {
        returnValue = F("Schindelrangen");
        break;
    }
    case 279878:
    {
        returnValue = F("Schindelstr.");
        break;
    }
    case 279879:
    {
        returnValue = F("Schindelwald");
        break;
    }
    case 279880:
    {
        returnValue = F("Schindelwaldstr.");
        break;
    }
    case 279881:
    {
        returnValue = F("Schindelwandweg");
        break;
    }
    case 279882:
    {
        returnValue = F("Schindelweg");
        break;
    }
    case 279883:
    {
        returnValue = F("Schindeläckerstr.");
        break;
    }
    case 279884:
    {
        returnValue = F("Schindenbühlweg");
        break;
    }
    case 279885:
    {
        returnValue = F("Schindenstr.");
        break;
    }
    case 279886:
    {
        returnValue = F("Schinder");
        break;
    }
    case 279887:
    {
        returnValue = F("Schinderbachweg");
        break;
    }
    case 279888:
    {
        returnValue = F("Schinderberg");
        break;
    }
    case 279889:
    {
        returnValue = F("Schinderbergweg");
        break;
    }
    case 279890:
    {
        returnValue = F("Schinderbrücke");
        break;
    }
    case 279891:
    {
        returnValue = F("Schinderfeldstr.");
        break;
    }
    case 279892:
    {
        returnValue = F("Schinderflügel");
        break;
    }
    case 279893:
    {
        returnValue = F("Schindergasse");
        break;
    }
    case 279894:
    {
        returnValue = F("Schindergraben");
        break;
    }
    case 279895:
    {
        returnValue = F("Schindergrund");
        break;
    }
    case 279896:
    {
        returnValue = F("Schinderhaldenweg");
        break;
    }
    case 279897:
    {
        returnValue = F("Schinderhanneseck");
        break;
    }
    case 279898:
    {
        returnValue = F("Schinderhannespfad");
        break;
    }
    case 279899:
    {
        returnValue = F("Schinderhannesstr.");
        break;
    }
    case 279900:
    {
        returnValue = F("Schinderhannesweg");
        break;
    }
    case 279901:
    {
        returnValue = F("Schinderholz");
        break;
    }
    case 279902:
    {
        returnValue = F("Schinderhüttenweg");
        break;
    }
    case 279903:
    {
        returnValue = F("Schinderklamm");
        break;
    }
    case 279904:
    {
        returnValue = F("Schinderklammweg");
        break;
    }
    case 279905:
    {
        returnValue = F("Schinderkuhlenweg");
        break;
    }
    case 279906:
    {
        returnValue = F("Schinderleich");
        break;
    }
    case 279907:
    {
        returnValue = F("Schinderlesweg");
        break;
    }
    case 279908:
    {
        returnValue = F("Schinderschleife");
        break;
    }
    case 279909:
    {
        returnValue = F("Schindersgasse");
        break;
    }
    case 279910:
    {
        returnValue = F("Schindersgrube");
        break;
    }
    case 279911:
    {
        returnValue = F("Schindersklammweg");
        break;
    }
    case 279912:
    {
        returnValue = F("Schindersklinge");
        break;
    }
    case 279913:
    {
        returnValue = F("Schindersrütteweg");
        break;
    }
    case 279914:
    {
        returnValue = F("Schindersteige");
        break;
    }
    case 279915:
    {
        returnValue = F("Schinderstraßl");
        break;
    }
    case 279916:
    {
        returnValue = F("Schindertalweg");
        break;
    }
    case 279917:
    {
        returnValue = F("Schinderwaldrundweg");
        break;
    }
    case 279918:
    {
        returnValue = F("Schinderwasen");
        break;
    }
    case 279919:
    {
        returnValue = F("Schinderwasenweg");
        break;
    }
    case 279920:
    {
        returnValue = F("Schinderweg");
        break;
    }
    case 279921:
    {
        returnValue = F("Schinderwuhne");
        break;
    }
    case 279922:
    {
        returnValue = F("Schinderäckerstr.");
        break;
    }
    case 279923:
    {
        returnValue = F("Schindgasse");
        break;
    }
    case 279924:
    {
        returnValue = F("Schindgraben");
        break;
    }
    case 279925:
    {
        returnValue = F("Schindgrube");
        break;
    }
    case 279926:
    {
        returnValue = F("Schindhaldenweg");
        break;
    }
    case 279927:
    {
        returnValue = F("Schindhausweg");
        break;
    }
    case 279928:
    {
        returnValue = F("Schindhecke");
        break;
    }
    case 279929:
    {
        returnValue = F("Schindhelmleite");
        break;
    }
    case 279930:
    {
        returnValue = F("Schindholzweg");
        break;
    }
    case 279931:
    {
        returnValue = F("Schinditz");
        break;
    }
    case 279932:
    {
        returnValue = F("Schinditzgrund");
        break;
    }
    case 279933:
    {
        returnValue = F("Schindkaute Schneise");
        break;
    }
    case 279934:
    {
        returnValue = F("Schindkautenweg");
        break;
    }
    case 279935:
    {
        returnValue = F("Schindkauteweg");
        break;
    }
    case 279936:
    {
        returnValue = F("Schindkautschneise");
        break;
    }
    case 279937:
    {
        returnValue = F("Schindkautweg");
        break;
    }
    case 279938:
    {
        returnValue = F("Schindkuchelweg");
        break;
    }
    case 279939:
    {
        returnValue = F("Schindlacher Linie");
        break;
    }
    case 279940:
    {
        returnValue = F("Schindlauchwiesenweg");
        break;
    }
    case 279941:
    {
        returnValue = F("Schindleich");
        break;
    }
    case 279942:
    {
        returnValue = F("Schindleichsweg");
        break;
    }
    case 279943:
    {
        returnValue = F("Schindlenbühlweg");
        break;
    }
    case 279944:
    {
        returnValue = F("Schindlergasse");
        break;
    }
    case 279945:
    {
        returnValue = F("Schindlerstr.");
        break;
    }
    case 279946:
    {
        returnValue = F("Schindlerswaldweg");
        break;
    }
    case 279947:
    {
        returnValue = F("Schindlerweg");
        break;
    }
    case 279948:
    {
        returnValue = F("Schindlerwiese");
        break;
    }
    case 279949:
    {
        returnValue = F("Schindlweg");
        break;
    }
    case 279950:
    {
        returnValue = F("Schindmaaser Weg");
        break;
    }
    case 279951:
    {
        returnValue = F("Schindsgasse");
        break;
    }
    case 279952:
    {
        returnValue = F("Schindskaul");
        break;
    }
    case 279953:
    {
        returnValue = F("Schindstr.");
        break;
    }
    case 279954:
    {
        returnValue = F("Schindsweg");
        break;
    }
    case 279955:
    {
        returnValue = F("Schindtal");
        break;
    }
    case 279956:
    {
        returnValue = F("Schindtaler Str.");
        break;
    }
    case 279957:
    {
        returnValue = F("Schindthalstr.");
        break;
    }
    case 279958:
    {
        returnValue = F("Schindwaldstr.");
        break;
    }
    case 279959:
    {
        returnValue = F("Schindwasenweg");
        break;
    }
    case 279960:
    {
        returnValue = F("Schindweg");
        break;
    }
    case 279961:
    {
        returnValue = F("Schindäckerstr.");
        break;
    }
    case 279962:
    {
        returnValue = F("Schingsweg");
        break;
    }
    case 279963:
    {
        returnValue = F("Schinhammerstr.");
        break;
    }
    case 279964:
    {
        returnValue = F("Schinharlstr.");
        break;
    }
    case 279965:
    {
        returnValue = F("Schink's Gäßchen");
        break;
    }
    case 279966:
    {
        returnValue = F("Schinkel");
        break;
    }
    case 279967:
    {
        returnValue = F("Schinkelbergstr.");
        break;
    }
    case 279968:
    {
        returnValue = F("Schinkeler Esch");
        break;
    }
    case 279969:
    {
        returnValue = F("Schinkeler Mark");
        break;
    }
    case 279970:
    {
        returnValue = F("Schinkeler Str.");
        break;
    }
    case 279971:
    {
        returnValue = F("Schinkeler Weg");
        break;
    }
    case 279972:
    {
        returnValue = F("Schinkelhof");
        break;
    }
    case 279973:
    {
        returnValue = F("Schinkelplatz");
        break;
    }
    case 279974:
    {
        returnValue = F("Schinkelring");
        break;
    }
    case 279975:
    {
        returnValue = F("Schinkelstr.");
        break;
    }
    case 279976:
    {
        returnValue = F("Schinkeltriftstr.");
        break;
    }
    case 279977:
    {
        returnValue = F("Schinkelweg");
        break;
    }
    case 279978:
    {
        returnValue = F("Schinkenberg");
        break;
    }
    case 279979:
    {
        returnValue = F("Schinkenfeldweg");
        break;
    }
    case 279980:
    {
        returnValue = F("Schinkenkamp");
        break;
    }
    case 279981:
    {
        returnValue = F("Schinkenstr.");
        break;
    }
    case 279982:
    {
        returnValue = F("Schinkenweg");
        break;
    }
    case 279983:
    {
        returnValue = F("Schinkestr.");
        break;
    }
    case 279984:
    {
        returnValue = F("Schinkgasse");
        break;
    }
    case 279985:
    {
        returnValue = F("Schinnaer Landstr.");
        break;
    }
    case 279986:
    {
        returnValue = F("Schinnaglstr.");
        break;
    }
    case 279987:
    {
        returnValue = F("Schinner Weg");
        break;
    }
    case 279988:
    {
        returnValue = F("Schinnererstr.");
        break;
    }
    case 279989:
    {
        returnValue = F("Schinnergass");
        break;
    }
    case 279990:
    {
        returnValue = F("Schinnergasse");
        break;
    }
    case 279991:
    {
        returnValue = F("Schinnerstr.");
        break;
    }
    case 279992:
    {
        returnValue = F("Schinnertal");
        break;
    }
    case 279993:
    {
        returnValue = F("Schinnhohl");
        break;
    }
    case 279994:
    {
        returnValue = F("Schinnrainstr.");
        break;
    }
    case 279995:
    {
        returnValue = F("Schinnsgraben");
        break;
    }
    case 279996:
    {
        returnValue = F("Schinnwasen");
        break;
    }
    case 279997:
    {
        returnValue = F("Schintlingweg");
        break;
    }
    case 279998:
    {
        returnValue = F("Schinvelder Str.");
        break;
    }
    case 279999:
    {
        returnValue = F("Schinzelweg");
        break;
    }
    case 280000:
    {
        returnValue = F("Schinzenberg");
        break;
    }
    case 280001:
    {
        returnValue = F("Schinzingersteige");
        break;
    }
    case 280002:
    {
        returnValue = F("Schipdonks Straet");
        break;
    }
    case 280003:
    {
        returnValue = F("Schiphorst");
        break;
    }
    case 280004:
    {
        returnValue = F("Schiphorster Str.");
        break;
    }
    case 280005:
    {
        returnValue = F("Schiphorster Weg");
        break;
    }
    case 280006:
    {
        returnValue = F("Schiphowerstr.");
        break;
    }
    case 280007:
    {
        returnValue = F("Schipkauer Str.");
        break;
    }
    case 280008:
    {
        returnValue = F("Schippacher Str.");
        break;
    }
    case 280009:
    {
        returnValue = F("Schippachweg");
        break;
    }
    case 280010:
    {
        returnValue = F("Schippanweg");
        break;
    }
    case 280011:
    {
        returnValue = F("Schippbrookredder");
        break;
    }
    case 280012:
    {
        returnValue = F("Schippelgasse");
        break;
    }
    case 280013:
    {
        returnValue = F("Schipperkamp");
        break;
    }
    case 280014:
    {
        returnValue = F("Schippers Weg");
        break;
    }
    case 280015:
    {
        returnValue = F("Schippersheide");
        break;
    }
    case 280016:
    {
        returnValue = F("Schipperslohne");
        break;
    }
    case 280017:
    {
        returnValue = F("Schippersteeg");
        break;
    }
    case 280018:
    {
        returnValue = F("Schipperstieg");
        break;
    }
    case 280019:
    {
        returnValue = F("Schippersweg");
        break;
    }
    case 280020:
    {
        returnValue = F("Schippertstr.");
        break;
    }
    case 280021:
    {
        returnValue = F("Schippertsäcker");
        break;
    }
    case 280022:
    {
        returnValue = F("Schipperweg");
        break;
    }
    case 280023:
    {
        returnValue = F("Schipphorster Weg");
        break;
    }
    case 280024:
    {
        returnValue = F("Schippkamp");
        break;
    }
    case 280025:
    {
        returnValue = F("Schiratswinkel");
        break;
    }
    case 280026:
    {
        returnValue = F("Schirenhofweg");
        break;
    }
    case 280027:
    {
        returnValue = F("Schirgensteige");
        break;
    }
    case 356501:
    {
        returnValue = F("s");
        break;
    }
    case 356502:
    {
        returnValue = F("s' Mause-Weg");
        break;
    }
    case 356503:
    {
        returnValue = F("s'Gangerl");
        break;
    }
    case 356504:
    {
        returnValue = F("s'Gässli");
        break;
    }
    case 356505:
    {
        returnValue = F("s'Loch");
        break;
    }
    case 356506:
    {
        returnValue = F("s'Molkegässle");
        break;
    }
    case 356507:
    {
        returnValue = F("s`Brückle");
        break;
    }
    case 356508:
    {
        returnValue = F("schwarzer Weg");
        break;
    }
    case 356509:
    {
        returnValue = F("sog. Roter Platz");
        break;
    }
    case 356510:
    {
        returnValue = F("spree park");
        break;
    }
    case 356511:
    {
        returnValue = F("standstreifen");
        break;
    }
    case 356512:
    {
        returnValue = F("südlicher Hardtweg");
        break;
    }
    case 356513:
    {
        returnValue = F("südlicher Knopfweg");
        break;
    }
    case 356514:
    {
        returnValue = F("südlicher Mühlweg");
        break;
    }
    }
    return returnValue;
}
