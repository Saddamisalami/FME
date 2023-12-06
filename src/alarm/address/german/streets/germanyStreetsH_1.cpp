#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameH1(unsigned int streetKey)
{
String returnValue = "";
switch (streetKey)
{
case 127374:
{
returnValue = F("H");
break;
}
case 127375:
{
returnValue = F("H-Flügel");
break;
}
case 127376:
{
returnValue = F("H-Weg");
break;
}
case 127377:
{
returnValue = F("H. Andresen Weg");
break;
}
case 127378:
{
returnValue = F("H. E. W. Str.");
break;
}
case 127379:
{
returnValue = F("H. Fischer-Weg");
break;
}
case 127380:
{
returnValue = F("H. Küntzer Weg");
break;
}
case 127381:
{
returnValue = F("H. Maidner Str.");
break;
}
case 127382:
{
returnValue = F("H.-C.-Andersen-Platz");
break;
}
case 127383:
{
returnValue = F("H.-Falke-Str.");
break;
}
case 127384:
{
returnValue = F("H.-H.-Grube-Stroot");
break;
}
case 127385:
{
returnValue = F("H.-L.-Miebrodt-Str.");
break;
}
case 127386:
{
returnValue = F("H.-S.-Richardson-Str.");
break;
}
case 127387:
{
returnValue = F("H.-W.-Schmitz-Str.");
break;
}
case 127388:
{
returnValue = F("H.-v.-Gern-Str.");
break;
}
case 127389:
{
returnValue = F("H.C. Starck-Str.");
break;
}
case 127390:
{
returnValue = F("H.J.-Müller-Str.");
break;
}
case 127391:
{
returnValue = F("H1");
break;
}
case 127392:
{
returnValue = F("H2-Abkürzung");
break;
}
case 127393:
{
returnValue = F("H3");
break;
}
case 127394:
{
returnValue = F("H3, H7");
break;
}
case 127395:
{
returnValue = F("H5 - SH");
break;
}
case 127396:
{
returnValue = F("H8 Hörre Weg");
break;
}
case 127397:
{
returnValue = F("HALCOM-Str.");
break;
}
case 127398:
{
returnValue = F("HAM-Brücke");
break;
}
case 127399:
{
returnValue = F("HAP-Grieshaber-Str.");
break;
}
case 127400:
{
returnValue = F("HAP-Grieshaber-Weg");
break;
}
case 127401:
{
returnValue = F("HAPRI-Str.");
break;
}
case 127402:
{
returnValue = F("HBS Wiese");
break;
}
case 127403:
{
returnValue = F("HC-Weg");
break;
}
case 127404:
{
returnValue = F("HFU O-Gebäude Vorplatz");
break;
}
case 127405:
{
returnValue = F("HG1 HG4");
break;
}
case 127406:
{
returnValue = F("HIlgerstr.");
break;
}
case 127407:
{
returnValue = F("HO 22");
break;
}
case 127408:
{
returnValue = F("HSH-Str.");
break;
}
case 127409:
{
returnValue = F("HUgo-Brandt-Platz");
break;
}
case 127410:
{
returnValue = F("HW");
break;
}
case 127411:
{
returnValue = F("HW-Weg");
break;
}
case 127412:
{
returnValue = F("Haabergstr.");
break;
}
case 127413:
{
returnValue = F("Haackestr.");
break;
}
case 127414:
{
returnValue = F("Haackstr.");
break;
}
case 127415:
{
returnValue = F("Haaderer Str.");
break;
}
case 127416:
{
returnValue = F("Haafegasse");
break;
}
case 127417:
{
returnValue = F("Haafstr.");
break;
}
case 127418:
{
returnValue = F("Haag");
break;
}
case 127419:
{
returnValue = F("Haag Schneise");
break;
}
case 127420:
{
returnValue = F("Haag b. Schwarzhofen");
break;
}
case 127421:
{
returnValue = F("Haagackerweg");
break;
}
case 127422:
{
returnValue = F("Haagematten");
break;
}
case 127423:
{
returnValue = F("Haagemrainweg");
break;
}
case 127424:
{
returnValue = F("Haagen");
break;
}
case 127425:
{
returnValue = F("Haagenbusch");
break;
}
case 127426:
{
returnValue = F("Haagener Str.");
break;
}
case 127427:
{
returnValue = F("Haagener Sträßchen");
break;
}
case 127428:
{
returnValue = F("Haagener Weg");
break;
}
case 127429:
{
returnValue = F("Haagenkamp");
break;
}
case 127430:
{
returnValue = F("Haager Berg");
break;
}
case 127431:
{
returnValue = F("Haager Gracht");
break;
}
case 127432:
{
returnValue = F("Haager Gässchen");
break;
}
case 127433:
{
returnValue = F("Haager Hohle");
break;
}
case 127434:
{
returnValue = F("Haager Steig");
break;
}
case 127435:
{
returnValue = F("Haager Str.");
break;
}
case 127436:
{
returnValue = F("Haager Viadukt");
break;
}
case 127437:
{
returnValue = F("Haager Weg");
break;
}
case 127438:
{
returnValue = F("Haager Winkel");
break;
}
case 127439:
{
returnValue = F("Haagerbusch");
break;
}
case 127440:
{
returnValue = F("Haagerfeld");
break;
}
case 127441:
{
returnValue = F("Haagestr.");
break;
}
case 127442:
{
returnValue = F("Haageweg");
break;
}
case 127443:
{
returnValue = F("Haagfeldstr.");
break;
}
case 127444:
{
returnValue = F("Haaggasse");
break;
}
case 127445:
{
returnValue = F("Haaghof");
break;
}
case 127446:
{
returnValue = F("Haagmattenweg");
break;
}
case 127447:
{
returnValue = F("Haagsche Allee");
break;
}
case 127448:
{
returnValue = F("Haagsche Poort");
break;
}
case 127449:
{
returnValue = F("Haagsche Str.");
break;
}
case 127450:
{
returnValue = F("Haagscher Weg");
break;
}
case 127451:
{
returnValue = F("Haagsgraben");
break;
}
case 127452:
{
returnValue = F("Haagsmühle");
break;
}
case 127453:
{
returnValue = F("Haagstiege");
break;
}
case 127454:
{
returnValue = F("Haagstiegstr.");
break;
}
case 127455:
{
returnValue = F("Haagstr.");
break;
}
case 127456:
{
returnValue = F("Haagtorplatz");
break;
}
case 127457:
{
returnValue = F("Haagweg");
break;
}
case 127458:
{
returnValue = F("Haagweiher");
break;
}
case 127459:
{
returnValue = F("Haagwiesenweg");
break;
}
case 127460:
{
returnValue = F("Haagwieser Weg");
break;
}
case 127461:
{
returnValue = F("Haagwieserweg");
break;
}
case 127462:
{
returnValue = F("Haagzaun");
break;
}
case 127463:
{
returnValue = F("Haagäckerstr.");
break;
}
case 127464:
{
returnValue = F("Haak");
break;
}
case 127465:
{
returnValue = F("Haak-Weg");
break;
}
case 127466:
{
returnValue = F("Haakengraben");
break;
}
case 127467:
{
returnValue = F("Haakenkamp");
break;
}
case 127468:
{
returnValue = F("Haakenstieg");
break;
}
case 127469:
{
returnValue = F("Haakenweg");
break;
}
case 127470:
{
returnValue = F("Haakestr.");
break;
}
case 127471:
{
returnValue = F("Haaks");
break;
}
case 127472:
{
returnValue = F("Haaks Garten");
break;
}
case 127473:
{
returnValue = F("Haaks-Gat");
break;
}
case 127474:
{
returnValue = F("Haaksbergener Str.");
break;
}
case 127475:
{
returnValue = F("Haaksweg");
break;
}
case 127476:
{
returnValue = F("Haaler Dreieck");
break;
}
case 127477:
{
returnValue = F("Haaler Str.");
break;
}
case 127478:
{
returnValue = F("Haalshof");
break;
}
case 127479:
{
returnValue = F("Haalsteige");
break;
}
case 127480:
{
returnValue = F("Haalstr.");
break;
}
case 127481:
{
returnValue = F("Haalweg");
break;
}
case 127482:
{
returnValue = F("Haalwiesenweg");
break;
}
case 127483:
{
returnValue = F("Haan");
break;
}
case 127484:
{
returnValue = F("Haanacker");
break;
}
case 127485:
{
returnValue = F("Haanbalken");
break;
}
case 127486:
{
returnValue = F("Haaneburger Lohne");
break;
}
case 127487:
{
returnValue = F("Haanenbarg");
break;
}
case 127488:
{
returnValue = F("Haaner Berg");
break;
}
case 127489:
{
returnValue = F("Haaner Gasse");
break;
}
case 127490:
{
returnValue = F("Haaner Str.");
break;
}
case 127491:
{
returnValue = F("Haaner Weg");
break;
}
case 127492:
{
returnValue = F("Haaneweg");
break;
}
case 127493:
{
returnValue = F("Haansahl");
break;
}
case 127494:
{
returnValue = F("Haar");
break;
}
case 127495:
{
returnValue = F("Haar-Kirchweg");
break;
}
case 127496:
{
returnValue = F("Haaraer Kirchsteig");
break;
}
case 127497:
{
returnValue = F("Haaraer Str.");
break;
}
case 127498:
{
returnValue = F("Haarbach");
break;
}
case 127499:
{
returnValue = F("Haarbach Höfe");
break;
}
case 127500:
{
returnValue = F("Haarbachstr.");
break;
}
case 127501:
{
returnValue = F("Haarbachtalstr.");
break;
}
case 127502:
{
returnValue = F("Haarbeckstr.");
break;
}
case 127503:
{
returnValue = F("Haarbeeke");
break;
}
case 127504:
{
returnValue = F("Haarberg");
break;
}
case 127505:
{
returnValue = F("Haarbergstr.");
break;
}
case 127506:
{
returnValue = F("Haarbergweg");
break;
}
case 127507:
{
returnValue = F("Haarbreite");
break;
}
case 127508:
{
returnValue = F("Haarbrinkstr.");
break;
}
case 127509:
{
returnValue = F("Haarbrook");
break;
}
case 127510:
{
returnValue = F("Haarbrücke");
break;
}
case 127511:
{
returnValue = F("Haarbrücker Str.");
break;
}
case 127512:
{
returnValue = F("Haarbrücker Weg");
break;
}
case 127513:
{
returnValue = F("Haarburg");
break;
}
case 127514:
{
returnValue = F("Haarbühl");
break;
}
case 127515:
{
returnValue = F("Haarbülten");
break;
}
case 127516:
{
returnValue = F("Haarbünte");
break;
}
case 127517:
{
returnValue = F("Haardblick");
break;
}
case 127518:
{
returnValue = F("Haardecken Kamp");
break;
}
case 127519:
{
returnValue = F("Haarder Weg");
break;
}
case 127520:
{
returnValue = F("Haardfeld");
break;
}
case 127521:
{
returnValue = F("Haardgrenzweg");
break;
}
case 127522:
{
returnValue = F("Haardiek");
break;
}
case 127523:
{
returnValue = F("Haardmühle");
break;
}
case 127524:
{
returnValue = F("Haardorfer Str.");
break;
}
case 127525:
{
returnValue = F("Haardstr.");
break;
}
case 127526:
{
returnValue = F("Haardt");
break;
}
case 127527:
{
returnValue = F("Haardt-Str.");
break;
}
case 127528:
{
returnValue = F("Haardtberg");
break;
}
case 127529:
{
returnValue = F("Haardtblick");
break;
}
case 127530:
{
returnValue = F("Haardtchenstr.");
break;
}
case 127531:
{
returnValue = F("Haardter Dorfstr.");
break;
}
case 127532:
{
returnValue = F("Haardter Kopp");
break;
}
case 127533:
{
returnValue = F("Haardter Str.");
break;
}
case 127534:
{
returnValue = F("Haardter Treppenweg");
break;
}
case 127535:
{
returnValue = F("Haardter Weg");
break;
}
case 127536:
{
returnValue = F("Haardtfeld");
break;
}
case 127537:
{
returnValue = F("Haardtgasse");
break;
}
case 127538:
{
returnValue = F("Haardthof");
break;
}
case 127539:
{
returnValue = F("Haardtkopfstr.");
break;
}
case 127540:
{
returnValue = F("Haardtring");
break;
}
case 127541:
{
returnValue = F("Haardtskopf");
break;
}
case 127542:
{
returnValue = F("Haardtstr.");
break;
}
case 127543:
{
returnValue = F("Haardtwaldplatz");
break;
}
case 127544:
{
returnValue = F("Haardtwaldring");
break;
}
case 127545:
{
returnValue = F("Haardtwaldstr.");
break;
}
case 127546:
{
returnValue = F("Haardtweg");
break;
}
case 127547:
{
returnValue = F("Haardtwiese");
break;
}
case 127548:
{
returnValue = F("Haardtwiesen");
break;
}
case 127549:
{
returnValue = F("Haardweg");
break;
}
case 127550:
{
returnValue = F("Haaren");
break;
}
case 127551:
{
returnValue = F("Haarener Brücke");
break;
}
case 127552:
{
returnValue = F("Haarener Gracht");
break;
}
case 127553:
{
returnValue = F("Haarener Mühle");
break;
}
case 127554:
{
returnValue = F("Haarener Str.");
break;
}
case 127555:
{
returnValue = F("Haarener Weg");
break;
}
case 127556:
{
returnValue = F("Haareneschstr.");
break;
}
case 127557:
{
returnValue = F("Haarenfeld");
break;
}
case 127558:
{
returnValue = F("Haarenkamp");
break;
}
case 127559:
{
returnValue = F("Haarenniederung");
break;
}
case 127560:
{
returnValue = F("Haarenstr.");
break;
}
case 127561:
{
returnValue = F("Haarenstrother Str.");
break;
}
case 127562:
{
returnValue = F("Haarenufer");
break;
}
case 127563:
{
returnValue = F("Haarenweg");
break;
}
case 127564:
{
returnValue = F("Haarer Anger");
break;
}
case 127565:
{
returnValue = F("Haarer Str.");
break;
}
case 127566:
{
returnValue = F("Haarer Weg");
break;
}
case 127567:
{
returnValue = F("Haaresgrund");
break;
}
case 127568:
{
returnValue = F("Haarfeld");
break;
}
case 127569:
{
returnValue = F("Haarfelder Str.");
break;
}
case 127570:
{
returnValue = F("Haarfurther Str.");
break;
}
case 127571:
{
returnValue = F("Haargarten");
break;
}
case 127572:
{
returnValue = F("Haargartenweg");
break;
}
case 127573:
{
returnValue = F("Haargasse");
break;
}
case 127574:
{
returnValue = F("Haargoren");
break;
}
case 127575:
{
returnValue = F("Haarhausen");
break;
}
case 127576:
{
returnValue = F("Haarhauser Weg");
break;
}
case 127577:
{
returnValue = F("Haarhausstr.");
break;
}
case 127578:
{
returnValue = F("Haarhof");
break;
}
case 127579:
{
returnValue = F("Haarhofsgasse");
break;
}
case 127580:
{
returnValue = F("Haarhofstr.");
break;
}
case 127581:
{
returnValue = F("Haarholz");
break;
}
case 127582:
{
returnValue = F("Haarholzer Str.");
break;
}
case 127583:
{
returnValue = F("Haarhäuser Str.");
break;
}
case 127584:
{
returnValue = F("Haarhöfe");
break;
}
case 127585:
{
returnValue = F("Haarjanweg");
break;
}
case 127586:
{
returnValue = F("Haarkamp");
break;
}
case 127587:
{
returnValue = F("Haarkampstr.");
break;
}
case 127588:
{
returnValue = F("Haarkampsweg");
break;
}
case 127589:
{
returnValue = F("Haarkesanger");
break;
}
case 127590:
{
returnValue = F("Haarkirchener Str.");
break;
}
case 127591:
{
returnValue = F("Haarkirchener Weg");
break;
}
case 127592:
{
returnValue = F("Haarkoppel");
break;
}
case 127593:
{
returnValue = F("Haarkoppeln");
break;
}
case 127594:
{
returnValue = F("Haarlandenstr.");
break;
}
case 127595:
{
returnValue = F("Haarlassweg");
break;
}
case 127596:
{
returnValue = F("Haarlemer Str.");
break;
}
case 127597:
{
returnValue = F("Haarlerbruch");
break;
}
case 127598:
{
returnValue = F("Haarletweg");
break;
}
case 127599:
{
returnValue = F("Haarleweg");
break;
}
case 127600:
{
returnValue = F("Haarlohweg");
break;
}
case 127601:
{
returnValue = F("Haarmannplatz");
break;
}
case 127602:
{
returnValue = F("Haarmanns Hof");
break;
}
case 127603:
{
returnValue = F("Haarmannstr.");
break;
}
case 127604:
{
returnValue = F("Haarmannsweg");
break;
}
case 127605:
{
returnValue = F("Haarmannweg");
break;
}
case 127606:
{
returnValue = F("Haarmark");
break;
}
case 127607:
{
returnValue = F("Haarmeyers Kamp");
break;
}
case 127608:
{
returnValue = F("Haarmoor");
break;
}
case 127609:
{
returnValue = F("Haarpoint");
break;
}
case 127610:
{
returnValue = F("Haarscheid");
break;
}
case 127611:
{
returnValue = F("Haarschlagweg");
break;
}
case 127612:
{
returnValue = F("Haarschwärze");
break;
}
case 127613:
{
returnValue = F("Haarschwärzeweg");
break;
}
case 127614:
{
returnValue = F("Haarseestr.");
break;
}
case 127615:
{
returnValue = F("Haarskamp");
break;
}
case 127616:
{
returnValue = F("Haarstr.");
break;
}
case 127617:
{
returnValue = F("Haarstrang");
break;
}
case 127618:
{
returnValue = F("Haarstranghöhe");
break;
}
case 127619:
{
returnValue = F("Haarstrangweg");
break;
}
case 127620:
{
returnValue = F("Haarstubnerweg");
break;
}
case 127621:
{
returnValue = F("Haarsweg");
break;
}
case 127622:
{
returnValue = F("Haart");
break;
}
case 127623:
{
returnValue = F("Haartallee");
break;
}
case 127624:
{
returnValue = F("Haarth");
break;
}
case 127625:
{
returnValue = F("Haarther Ring");
break;
}
case 127626:
{
returnValue = F("Haarther Str.");
break;
}
case 127627:
{
returnValue = F("Haarthstr.");
break;
}
case 127628:
{
returnValue = F("Haarthweg");
break;
}
case 127629:
{
returnValue = F("Haartkoppelweg");
break;
}
case 127630:
{
returnValue = F("Haartstr.");
break;
}
case 127631:
{
returnValue = F("Haarwand");
break;
}
case 127632:
{
returnValue = F("Haarweg");
break;
}
case 127633:
{
returnValue = F("Haarweiherweg");
break;
}
case 127634:
{
returnValue = F("Haarwiesenstr.");
break;
}
case 127635:
{
returnValue = F("Haarzhorn");
break;
}
case 127636:
{
returnValue = F("Haarzopfer Str.");
break;
}
case 127637:
{
returnValue = F("Haaräcker");
break;
}
case 127638:
{
returnValue = F("Haaräckerweg");
break;
}
case 127639:
{
returnValue = F("Haasacker");
break;
}
case 127640:
{
returnValue = F("Haasbach");
break;
}
case 127641:
{
returnValue = F("Haasbachstr.");
break;
}
case 127642:
{
returnValue = F("Haasegarten");
break;
}
case 127643:
{
returnValue = F("Haasemannstr.");
break;
}
case 127644:
{
returnValue = F("Haasen Fuhren");
break;
}
case 127645:
{
returnValue = F("Haasenhof");
break;
}
case 127646:
{
returnValue = F("Haasenmühle");
break;
}
case 127647:
{
returnValue = F("Haasensteeg");
break;
}
case 127648:
{
returnValue = F("Haasenstr.");
break;
}
case 127649:
{
returnValue = F("Haasenweg");
break;
}
case 127650:
{
returnValue = F("Haaser Str.");
break;
}
case 127651:
{
returnValue = F("Haaserdriesch");
break;
}
case 127652:
{
returnValue = F("Haasestr.");
break;
}
case 127653:
{
returnValue = F("Haaseweg");
break;
}
case 127654:
{
returnValue = F("Haasgasse");
break;
}
case 127655:
{
returnValue = F("Haaskampweg");
break;
}
case 127656:
{
returnValue = F("Haaslandsweg");
break;
}
case 127657:
{
returnValue = F("Haaslohstr.");
break;
}
case 127658:
{
returnValue = F("Haaslop");
break;
}
case 127659:
{
returnValue = F("Haasmarkt");
break;
}
case 127660:
{
returnValue = F("Haasnüst");
break;
}
case 127661:
{
returnValue = F("Haasower Ausbau");
break;
}
case 127662:
{
returnValue = F("Haasower Hauptstr.");
break;
}
case 127663:
{
returnValue = F("Haasower Str.");
break;
}
case 127664:
{
returnValue = F("Haasower Weg");
break;
}
case 127665:
{
returnValue = F("Haasstr.");
break;
}
case 127666:
{
returnValue = F("Haaster Höhe");
break;
}
case 127667:
{
returnValue = F("Haaster Sand");
break;
}
case 127668:
{
returnValue = F("Haasweg");
break;
}
case 127669:
{
returnValue = F("Haavkepad");
break;
}
case 127670:
{
returnValue = F("Haawerlön");
break;
}
case 127671:
{
returnValue = F("Haaßel");
break;
}
case 127672:
{
returnValue = F("Haaßeler Kamp");
break;
}
case 127673:
{
returnValue = F("Haaßeler Ring");
break;
}
case 127674:
{
returnValue = F("Haaßeler Str.");
break;
}
case 127675:
{
returnValue = F("Haaßeler Weg");
break;
}
case 127676:
{
returnValue = F("Habach");
break;
}
case 127677:
{
returnValue = F("Habacher Str.");
break;
}
case 127678:
{
returnValue = F("Habachstr.");
break;
}
case 127679:
{
returnValue = F("Habbacker Weg");
break;
}
case 127680:
{
returnValue = F("Habbecke");
break;
}
case 127681:
{
returnValue = F("Habbecker Heide");
break;
}
case 127682:
{
returnValue = F("Habbecker Weg");
break;
}
case 127683:
{
returnValue = F("Habbeler Str.");
break;
}
case 127684:
{
returnValue = F("Habbeler Weg");
break;
}
case 127685:
{
returnValue = F("Habbelrather Str.");
break;
}
case 127686:
{
returnValue = F("Habbelrather Weg");
break;
}
case 127687:
{
returnValue = F("Habbelstr.");
break;
}
case 127688:
{
returnValue = F("Habbendorfer Weg");
break;
}
case 127689:
{
returnValue = F("Habberg");
break;
}
case 127690:
{
returnValue = F("Habbeskamp");
break;
}
case 127691:
{
returnValue = F("Habbeweg");
break;
}
case 127692:
{
returnValue = F("Habbo-Apken-Str.");
break;
}
case 127693:
{
returnValue = F("Habbrügger Furth");
break;
}
case 127694:
{
returnValue = F("Habbrügger Weg");
break;
}
case 127695:
{
returnValue = F("Habeckstal");
break;
}
case 127696:
{
returnValue = F("Habelbergstr.");
break;
}
case 127697:
{
returnValue = F("Habelgarten");
break;
}
case 127698:
{
returnValue = F("Habelgraben");
break;
}
case 127699:
{
returnValue = F("Habelsbacher Str.");
break;
}
case 127700:
{
returnValue = F("Habelschwerdter Hof");
break;
}
case 127701:
{
returnValue = F("Habelschwerdter Str.");
break;
}
case 127702:
{
returnValue = F("Habelschwerdter Weg");
break;
}
case 127703:
{
returnValue = F("Habelseeweg");
break;
}
case 127704:
{
returnValue = F("Habelsteiner Weg");
break;
}
case 127705:
{
returnValue = F("Habelstr.");
break;
}
case 127706:
{
returnValue = F("Habelweg");
break;
}
case 127707:
{
returnValue = F("Habenhain");
break;
}
case 127708:
{
returnValue = F("Habenharst");
break;
}
case 127709:
{
returnValue = F("Habenhauser Brückenstr.");
break;
}
case 127710:
{
returnValue = F("Habenhauser Deich");
break;
}
case 127711:
{
returnValue = F("Habenhauser Dorfstr.");
break;
}
case 127712:
{
returnValue = F("Habenhauser Landstr.");
break;
}
case 127713:
{
returnValue = F("Habenhauser Windmühlenberg");
break;
}
case 127714:
{
returnValue = F("Habenichts");
break;
}
case 127715:
{
returnValue = F("Habenscheider Weg");
break;
}
case 127716:
{
returnValue = F("Haberacker Weg");
break;
}
case 127717:
{
returnValue = F("Haberackerstr.");
break;
}
case 127718:
{
returnValue = F("Haberackerweg");
break;
}
case 127719:
{
returnValue = F("Haberallee");
break;
}
case 127720:
{
returnValue = F("Haberbachweg");
break;
}
case 127721:
{
returnValue = F("Haberbitze");
break;
}
case 127722:
{
returnValue = F("Haberbreede");
break;
}
case 127723:
{
returnValue = F("Haberdell");
break;
}
case 127724:
{
returnValue = F("Haberdorn");
break;
}
case 127725:
{
returnValue = F("Habereck");
break;
}
case 127726:
{
returnValue = F("Habereder-Hermann-Weg");
break;
}
case 127727:
{
returnValue = F("Haberegertenweg");
break;
}
case 127728:
{
returnValue = F("Habererd");
break;
}
case 127729:
{
returnValue = F("Habererplatz");
break;
}
case 127730:
{
returnValue = F("Habererweg");
break;
}
case 127731:
{
returnValue = F("Haberfeld");
break;
}
case 127732:
{
returnValue = F("Haberfeldstr.");
break;
}
case 127733:
{
returnValue = F("Habergaarwang");
break;
}
case 127734:
{
returnValue = F("Habergartenstr.");
break;
}
case 127735:
{
returnValue = F("Habergartenweg");
break;
}
case 127736:
{
returnValue = F("Habergasse");
break;
}
case 127737:
{
returnValue = F("Habergstr.");
break;
}
case 127738:
{
returnValue = F("Habergärten");
break;
}
case 127739:
{
returnValue = F("Haberhackensaum");
break;
}
case 127740:
{
returnValue = F("Haberhof");
break;
}
case 127741:
{
returnValue = F("Haberhäuslestr.");
break;
}
case 127742:
{
returnValue = F("Haberichweg");
break;
}
case 127743:
{
returnValue = F("Haberisch");
break;
}
case 127744:
{
returnValue = F("Haberkamp");
break;
}
case 127745:
{
returnValue = F("Haberkamps Vöhde");
break;
}
case 127746:
{
returnValue = F("Haberkampstr.");
break;
}
case 127747:
{
returnValue = F("Haberkernstr.");
break;
}
case 127748:
{
returnValue = F("Haberkernweg");
break;
}
case 127749:
{
returnValue = F("Haberkornplatz");
break;
}
case 127750:
{
returnValue = F("Haberkornstr.");
break;
}
case 127751:
{
returnValue = F("Haberkornweg");
break;
}
case 127752:
{
returnValue = F("Haberkoststr.");
break;
}
case 127753:
{
returnValue = F("Haberland");
break;
}
case 127754:
{
returnValue = F("Haberlandbrücke");
break;
}
case 127755:
{
returnValue = F("Haberlands Grund");
break;
}
case 127756:
{
returnValue = F("Haberlandstr.");
break;
}
case 127757:
{
returnValue = F("Haberlandweg");
break;
}
case 127758:
{
returnValue = F("Haberlehen");
break;
}
case 127759:
{
returnValue = F("Haberlehnenweg");
break;
}
case 127760:
{
returnValue = F("Haberleitenstr.");
break;
}
case 127761:
{
returnValue = F("Haberleitenweg");
break;
}
case 127762:
{
returnValue = F("Haberleithe");
break;
}
case 127763:
{
returnValue = F("Haberlochgäßchen");
break;
}
case 127764:
{
returnValue = F("Haberloher Dorfstr.");
break;
}
case 127765:
{
returnValue = F("Haberloher Str.");
break;
}
case 127766:
{
returnValue = F("Haberlstr.");
break;
}
case 127767:
{
returnValue = F("Haberlsägstr.");
break;
}
case 127768:
{
returnValue = F("Haberländerstr.");
break;
}
case 127769:
{
returnValue = F("Habermanngasse");
break;
}
case 127770:
{
returnValue = F("Habermannstr.");
break;
}
case 127771:
{
returnValue = F("Habermannweg");
break;
}
case 127772:
{
returnValue = F("Habermehlstr.");
break;
}
case 127773:
{
returnValue = F("Habermühlweg");
break;
}
case 127774:
{
returnValue = F("Habern Koppel");
break;
}
case 127775:
{
returnValue = F("Habernberg");
break;
}
case 127776:
{
returnValue = F("Habernhofer Weg");
break;
}
case 127777:
{
returnValue = F("Habernickel Weg");
break;
}
case 127778:
{
returnValue = F("Habernickelweg");
break;
}
case 127779:
{
returnValue = F("Habernis");
break;
}
case 127780:
{
returnValue = F("Habernisser Str.");
break;
}
case 127781:
{
returnValue = F("Haberrütte");
break;
}
case 127782:
{
returnValue = F("Habersackstr.");
break;
}
case 127783:
{
returnValue = F("Habersam");
break;
}
case 127784:
{
returnValue = F("Habersbergstr.");
break;
}
case 127785:
{
returnValue = F("Habersbergweg");
break;
}
case 127786:
{
returnValue = F("Haberschlachter Str.");
break;
}
case 127787:
{
returnValue = F("Haberschlachtweg");
break;
}
case 127788:
{
returnValue = F("Haberschlaiheide");
break;
}
case 127789:
{
returnValue = F("Habersetzerstr.");
break;
}
case 127790:
{
returnValue = F("Habershöhe");
break;
}
case 127791:
{
returnValue = F("Haberskamp");
break;
}
case 127792:
{
returnValue = F("Haberskirchener Str.");
break;
}
case 127793:
{
returnValue = F("Haberskircher Str.");
break;
}
case 127794:
{
returnValue = F("Haberskirchner Str.");
break;
}
case 127795:
{
returnValue = F("Haberspirker Str.");
break;
}
case 127796:
{
returnValue = F("Haberspitzweg");
break;
}
case 127797:
{
returnValue = F("Haberstalstr.");
break;
}
case 127798:
{
returnValue = F("Habersteinstr.");
break;
}
case 127799:
{
returnValue = F("Haberstenweiler");
break;
}
case 127800:
{
returnValue = F("Haberstieg");
break;
}
case 127801:
{
returnValue = F("Haberstr.");
break;
}
case 127802:
{
returnValue = F("Haberstrohstr.");
break;
}
case 127803:
{
returnValue = F("Haberstumpsgäßchen");
break;
}
case 127804:
{
returnValue = F("Haberstübelweg");
break;
}
case 127805:
{
returnValue = F("Haberswöhr");
break;
}
case 127806:
{
returnValue = F("Habertsaustr.");
break;
}
case 127807:
{
returnValue = F("Habertshausener Str.");
break;
}
case 127808:
{
returnValue = F("Habertsplatz");
break;
}
case 127809:
{
returnValue = F("Habertwedt");
break;
}
case 127810:
{
returnValue = F("Habertweg");
break;
}
case 127811:
{
returnValue = F("Haberwaldweg");
break;
}
case 127812:
{
returnValue = F("Haberweg");
break;
}
case 127813:
{
returnValue = F("Haberweidig");
break;
}
case 127814:
{
returnValue = F("Haberwinkel");
break;
}
case 127815:
{
returnValue = F("Haberzagler Ring");
break;
}
case 127816:
{
returnValue = F("Haberäckerweg");
break;
}
case 127817:
{
returnValue = F("Haberöhren");
break;
}
case 127818:
{
returnValue = F("Habicher Str.");
break;
}
case 127819:
{
returnValue = F("Habichhorster Str.");
break;
}
case 127820:
{
returnValue = F("Habichsthaler Weg");
break;
}
case 127821:
{
returnValue = F("Habicht-Schneise");
break;
}
case 127822:
{
returnValue = F("Habichtallee");
break;
}
case 127823:
{
returnValue = F("Habichtdamm");
break;
}
case 127824:
{
returnValue = F("Habichtgasse");
break;
}
case 127825:
{
returnValue = F("Habichthof");
break;
}
case 127826:
{
returnValue = F("Habichthorst");
break;
}
case 127827:
{
returnValue = F("Habichthorster Str.");
break;
}
case 127828:
{
returnValue = F("Habichthorster Weg");
break;
}
case 127829:
{
returnValue = F("Habichthorstschneise");
break;
}
case 127830:
{
returnValue = F("Habichthöhe");
break;
}
case 127831:
{
returnValue = F("Habichtplatz");
break;
}
case 127832:
{
returnValue = F("Habichtring");
break;
}
case 127833:
{
returnValue = F("Habichtsberg");
break;
}
case 127834:
{
returnValue = F("Habichtsberger Str.");
break;
}
case 127835:
{
returnValue = F("Habichtsbornstr.");
break;
}
case 127836:
{
returnValue = F("Habichtschneise");
break;
}
case 127837:
{
returnValue = F("Habichtseck");
break;
}
case 127838:
{
returnValue = F("Habichtsfang");
break;
}
case 127839:
{
returnValue = F("Habichtsforstweg");
break;
}
case 127840:
{
returnValue = F("Habichtsgrund");
break;
}
case 127841:
{
returnValue = F("Habichtsgäßchen");
break;
}
case 127842:
{
returnValue = F("Habichtsheide");
break;
}
case 127843:
{
returnValue = F("Habichtshof");
break;
}
case 127844:
{
returnValue = F("Habichtshorst");
break;
}
case 127845:
{
returnValue = F("Habichtshorst Nord");
break;
}
case 127846:
{
returnValue = F("Habichtshorst Süd");
break;
}
case 127847:
{
returnValue = F("Habichtshorststr.");
break;
}
case 127848:
{
returnValue = F("Habichtshöfe");
break;
}
case 127849:
{
returnValue = F("Habichtshöhe");
break;
}
case 127850:
{
returnValue = F("Habichtsleite");
break;
}
case 127851:
{
returnValue = F("Habichtsrain");
break;
}
case 127852:
{
returnValue = F("Habichtsring");
break;
}
case 127853:
{
returnValue = F("Habichtssiek");
break;
}
case 127854:
{
returnValue = F("Habichtsstr.");
break;
}
case 127855:
{
returnValue = F("Habichtstal");
break;
}
case 127856:
{
returnValue = F("Habichtstalgasse");
break;
}
case 127857:
{
returnValue = F("Habichtsteig");
break;
}
case 127858:
{
returnValue = F("Habichtsteiner Weg");
break;
}
case 127859:
{
returnValue = F("Habichtstr.");
break;
}
case 127860:
{
returnValue = F("Habichtswalder Str.");
break;
}
case 127861:
{
returnValue = F("Habichtswaldstr.");
break;
}
case 127862:
{
returnValue = F("Habichtswaldweg");
break;
}
case 127863:
{
returnValue = F("Habichtsweg");
break;
}
case 127864:
{
returnValue = F("Habichttal");
break;
}
case 127865:
{
returnValue = F("Habichtweg");
break;
}
case 127866:
{
returnValue = F("Habichweg");
break;
}
case 127867:
{
returnValue = F("Habighorst");
break;
}
case 127868:
{
returnValue = F("Habighorster Chaussee");
break;
}
case 127869:
{
returnValue = F("Habighorster Weg");
break;
}
case 127870:
{
returnValue = F("Habigstr.");
break;
}
case 127871:
{
returnValue = F("Habinghorster Markt");
break;
}
case 127872:
{
returnValue = F("Habinghorster Str.");
break;
}
case 127873:
{
returnValue = F("Habischrieder Str.");
break;
}
case 127874:
{
returnValue = F("Habitzheimer Ruh");
break;
}
case 127875:
{
returnValue = F("Habitzheimer Str.");
break;
}
case 127876:
{
returnValue = F("Habkehöchter Weg");
break;
}
case 127877:
{
returnValue = F("Habkemeyers Hof");
break;
}
case 127878:
{
returnValue = F("Habnith");
break;
}
case 127879:
{
returnValue = F("Habnitweg");
break;
}
case 127880:
{
returnValue = F("Habornweg");
break;
}
case 127881:
{
returnValue = F("Habratsweiler");
break;
}
case 127882:
{
returnValue = F("Habratsweilerstr.");
break;
}
case 127883:
{
returnValue = F("Habrechtstr.");
break;
}
case 127884:
{
returnValue = F("Habringhauser Weg");
break;
}
case 127885:
{
returnValue = F("Habsberg");
break;
}
case 127886:
{
returnValue = F("Habsbergerstr.");
break;
}
case 127887:
{
returnValue = F("Habsbergweg");
break;
}
case 127888:
{
returnValue = F("Habsburger Ring");
break;
}
case 127889:
{
returnValue = F("Habsburger Str.");
break;
}
case 127890:
{
returnValue = F("Habsburgerallee");
break;
}
case 127891:
{
returnValue = F("Habsburgergasse");
break;
}
case 127892:
{
returnValue = F("Habsburgerplatz");
break;
}
case 127893:
{
returnValue = F("Habsburgerring");
break;
}
case 127894:
{
returnValue = F("Habsburgerstr.");
break;
}
case 127895:
{
returnValue = F("Habsburgerweg");
break;
}
case 127896:
{
returnValue = F("Habsburgring");
break;
}
case 127897:
{
returnValue = F("Habsburgstr.");
break;
}
case 127898:
{
returnValue = F("Habsburgweg");
break;
}
case 127899:
{
returnValue = F("Habscheider Mühle");
break;
}
case 127900:
{
returnValue = F("Habscheider Str.");
break;
}
case 127901:
{
returnValue = F("Habschied");
break;
}
case 127902:
{
returnValue = F("Habseckweg");
break;
}
case 127903:
{
returnValue = F("Habspergstr.");
break;
}
case 127904:
{
returnValue = F("Habssteige");
break;
}
case 127905:
{
returnValue = F("Habsterhöhe");
break;
}
case 127906:
{
returnValue = F("Habsthaler Str.");
break;
}
case 127907:
{
returnValue = F("Habsthaler Weg");
break;
}
case 127908:
{
returnValue = F("Habyer Str.");
break;
}
case 127909:
{
returnValue = F("Hachau");
break;
}
case 127910:
{
returnValue = F("Hachberger Str.");
break;
}
case 127911:
{
returnValue = F("Hachbergstr.");
break;
}
case 127912:
{
returnValue = F("Hachbergweg");
break;
}
case 127913:
{
returnValue = F("Hachborner Str.");
break;
}
case 127914:
{
returnValue = F("Hachborner Weg");
break;
}
case 127915:
{
returnValue = F("Hache-Lene Spielplatz");
break;
}
case 127916:
{
returnValue = F("Hachedamm");
break;
}
case 127917:
{
returnValue = F("Hachelallee");
break;
}
case 127918:
{
returnValue = F("Hachelanlage");
break;
}
case 127919:
{
returnValue = F("Hachelbachstr.");
break;
}
case 127920:
{
returnValue = F("Hachelbrücke");
break;
}
case 127921:
{
returnValue = F("Hachelstuhler Str.");
break;
}
case 127922:
{
returnValue = F("Hachelweg");
break;
}
case 127923:
{
returnValue = F("Hachemühle");
break;
}
case 127924:
{
returnValue = F("Hachen");
break;
}
case 127925:
{
returnValue = F("Hachenbacher Str.");
break;
}
case 127926:
{
returnValue = F("Hachenberg");
break;
}
case 127927:
{
returnValue = F("Hachenberger Weg");
break;
}
case 127928:
{
returnValue = F("Hachenbergstr.");
break;
}
case 127929:
{
returnValue = F("Hachenburger Seifen");
break;
}
case 127930:
{
returnValue = F("Hachenburger Str.");
break;
}
case 127931:
{
returnValue = F("Hachenburger Weg");
break;
}
case 127932:
{
returnValue = F("Hachener Str.");
break;
}
case 127933:
{
returnValue = F("Hacheney");
break;
}
case 127934:
{
returnValue = F("Hacheneyer Kirchweg");
break;
}
case 127935:
{
returnValue = F("Hacheneyer Str.");
break;
}
case 127936:
{
returnValue = F("Hachenhausen");
break;
}
case 127937:
{
returnValue = F("Hachenhausen Park");
break;
}
case 127938:
{
returnValue = F("Hachenstr.");
break;
}
case 127939:
{
returnValue = F("Hacher Str.");
break;
}
case 127940:
{
returnValue = F("Hachestr.");
break;
}
case 127941:
{
returnValue = F("Hachetal");
break;
}
case 127942:
{
returnValue = F("Hacheweg");
break;
}
case 127943:
{
returnValue = F("Hachfeldstr.");
break;
}
case 127944:
{
returnValue = F("Hachhausener Str.");
break;
}
case 127945:
{
returnValue = F("Hachholzweg");
break;
}
case 127946:
{
returnValue = F("Hachhowe");
break;
}
case 127947:
{
returnValue = F("Hachinger Str.");
break;
}
case 127948:
{
returnValue = F("Hachinger Weg");
break;
}
case 127949:
{
returnValue = F("Hachinger-Bach-Str.");
break;
}
case 127950:
{
returnValue = F("Hachingerring");
break;
}
case 127951:
{
returnValue = F("Hachlandweg");
break;
}
case 127952:
{
returnValue = F("Hachmannstr.");
break;
}
case 127953:
{
returnValue = F("Hachmannweg");
break;
}
case 127954:
{
returnValue = F("Hachmeisterstr.");
break;
}
case 127955:
{
returnValue = F("Hachmicke");
break;
}
case 127956:
{
returnValue = F("Hachmühler Str.");
break;
}
case 127957:
{
returnValue = F("Hachstiege");
break;
}
case 127958:
{
returnValue = F("Hachstr.");
break;
}
case 127959:
{
returnValue = F("Hachtdiek");
break;
}
case 127960:
{
returnValue = F("Hachteler Weg");
break;
}
case 127961:
{
returnValue = F("Hachtelstr.");
break;
}
case 127962:
{
returnValue = F("Hachtingweg");
break;
}
case 127963:
{
returnValue = F("Hachtler Weg");
break;
}
case 127964:
{
returnValue = F("Hachtorstr.");
break;
}
case 127965:
{
returnValue = F("Hachtstr.");
break;
}
case 127966:
{
returnValue = F("Hachumer Str.");
break;
}
case 127967:
{
returnValue = F("Hachweg");
break;
}
case 127968:
{
returnValue = F("Hack");
break;
}
case 127969:
{
returnValue = F("Hackberg");
break;
}
case 127970:
{
returnValue = F("Hackberger Str.");
break;
}
case 127971:
{
returnValue = F("Hackburschweg");
break;
}
case 127972:
{
returnValue = F("Hackeberg");
break;
}
case 127973:
{
returnValue = F("Hackebergweg");
break;
}
case 127974:
{
returnValue = F("Hackeboe");
break;
}
case 127975:
{
returnValue = F("Hackeborger Weg");
break;
}
case 127976:
{
returnValue = F("Hackebornstr.");
break;
}
case 127977:
{
returnValue = F("Hackelandstr.");
break;
}
case 127978:
{
returnValue = F("Hackelbarg");
break;
}
case 127979:
{
returnValue = F("Hackelberg");
break;
}
case 127980:
{
returnValue = F("Hackelbergstr.");
break;
}
case 127981:
{
returnValue = F("Hackelbreite");
break;
}
case 127982:
{
returnValue = F("Hackelbrink");
break;
}
case 127983:
{
returnValue = F("Hackelbusch");
break;
}
case 127984:
{
returnValue = F("Hackelersberg");
break;
}
case 127985:
{
returnValue = F("Hackelkamp");
break;
}
case 127986:
{
returnValue = F("Hackelnbrink");
break;
}
case 127987:
{
returnValue = F("Hackelnkamp");
break;
}
case 127988:
{
returnValue = F("Hackeloh");
break;
}
case 127989:
{
returnValue = F("Hackelsmay");
break;
}
case 127990:
{
returnValue = F("Hackelsteinweg");
break;
}
case 127991:
{
returnValue = F("Hackelwiese");
break;
}
case 127992:
{
returnValue = F("Hackemackweg");
break;
}
case 127993:
{
returnValue = F("Hackemoor Allee");
break;
}
case 127994:
{
returnValue = F("Hackemoorstr.");
break;
}
case 127995:
{
returnValue = F("Hackenackerweg");
break;
}
case 127996:
{
returnValue = F("Hackenbaum");
break;
}
case 127997:
{
returnValue = F("Hackenbeek");
break;
}
case 127998:
{
returnValue = F("Hackenberg");
break;
}
case 127999:
{
returnValue = F("Hackenberger Str.");
break;
}
case 128000:
{
returnValue = F("Hackenberger Weg");
break;
}
case 128001:
{
returnValue = F("Hackenberghang");
break;
}
case 128002:
{
returnValue = F("Hackenbergstr.");
break;
}
case 128003:
{
returnValue = F("Hackenbergweg");
break;
}
case 128004:
{
returnValue = F("Hackenborner Trift");
break;
}
case 128005:
{
returnValue = F("Hackenbroicher Str.");
break;
}
case 128006:
{
returnValue = F("Hackenbroicher Weg");
break;
}
case 128007:
{
returnValue = F("Hackenburgstr.");
break;
}
case 128008:
{
returnValue = F("Hackenbühlstr.");
break;
}
case 128009:
{
returnValue = F("Hackendohrredder");
break;
}
case 128010:
{
returnValue = F("Hackenfeld");
break;
}
case 128011:
{
returnValue = F("Hackengäßchen");
break;
}
case 128012:
{
returnValue = F("Hackenhausen");
break;
}
case 128013:
{
returnValue = F("Hackenheimer Str.");
break;
}
case 128014:
{
returnValue = F("Hackenhofener Str.");
break;
}
case 128015:
{
returnValue = F("Hackenistweg");
break;
}
case 128016:
{
returnValue = F("Hackenleite");
break;
}
case 128017:
{
returnValue = F("Hackenower Weg");
break;
}
case 128018:
{
returnValue = F("Hackenrichtstr.");
break;
}
case 128019:
{
returnValue = F("Hackenschlatt");
break;
}
case 128020:
{
returnValue = F("Hackenschwaige");
break;
}
case 128021:
{
returnValue = F("Hackenseestr.");
break;
}
case 128022:
{
returnValue = F("Hackensteege");
break;
}
case 128023:
{
returnValue = F("Hackenstr.");
break;
}
case 128024:
{
returnValue = F("Hackentalgen");
break;
}
case 128025:
{
returnValue = F("Hackenweg");
break;
}
case 128026:
{
returnValue = F("Hackenängerstr.");
break;
}
case 128027:
{
returnValue = F("Hacker-Pschorr Wirtshaus");
break;
}
case 128028:
{
returnValue = F("Hackerberg");
break;
}
case 128029:
{
returnValue = F("Hackerbergweg");
break;
}
case 128030:
{
returnValue = F("Hackerbrücke");
break;
}
case 128031:
{
returnValue = F("Hackergasse");
break;
}
case 128032:
{
returnValue = F("Hackermühle");
break;
}
case 128033:
{
returnValue = F("Hackermühlstr.");
break;
}
case 128034:
{
returnValue = F("Hackerskampweg");
break;
}
case 128035:
{
returnValue = F("Hackersteigle");
break;
}
case 128036:
{
returnValue = F("Hackerstr.");
break;
}
case 128037:
{
returnValue = F("Hackertsbergweg");
break;
}
case 128038:
{
returnValue = F("Hackerweg");
break;
}
case 128039:
{
returnValue = F("Hackerzaunweg");
break;
}
case 128040:
{
returnValue = F("Hackeschladenweg");
break;
}
case 128041:
{
returnValue = F("Hackesstr.");
break;
}
case 128042:
{
returnValue = F("Hackestr.");
break;
}
case 128043:
{
returnValue = F("Hacketalstr.");
break;
}
case 128044:
{
returnValue = F("Hackethalstr.");
break;
}
case 128045:
{
returnValue = F("Hacketäuerstr.");
break;
}
case 128046:
{
returnValue = F("Hackeweg");
break;
}
case 128047:
{
returnValue = F("Hackewiese");
break;
}
case 128048:
{
returnValue = F("Hackfahrel");
break;
}
case 128049:
{
returnValue = F("Hackfeldskamp");
break;
}
case 128050:
{
returnValue = F("Hackfeldstr.");
break;
}
case 128051:
{
returnValue = F("Hackfeldweg");
break;
}
case 128052:
{
returnValue = F("Hackflügelweg");
break;
}
case 128053:
{
returnValue = F("Hackfurthstr.");
break;
}
case 128054:
{
returnValue = F("Hackgarten");
break;
}
case 128055:
{
returnValue = F("Hackhausen");
break;
}
case 128056:
{
returnValue = F("Hackhauser Str.");
break;
}
case 128057:
{
returnValue = F("Hackhauser Weg");
break;
}
case 128058:
{
returnValue = F("Hackhorststr.");
break;
}
case 128059:
{
returnValue = F("Hackjansbend");
break;
}
case 128060:
{
returnValue = F("Hackland");
break;
}
case 128061:
{
returnValue = F("Hacklandstr.");
break;
}
case 128062:
{
returnValue = F("Hacklandweg");
break;
}
case 128063:
{
returnValue = F("Hacklberg");
break;
}
case 128064:
{
returnValue = F("Hacklenburg");
break;
}
case 128065:
{
returnValue = F("Hacklerfeld");
break;
}
case 128066:
{
returnValue = F("Hacklgasse");
break;
}
case 128067:
{
returnValue = F("Hacklmühle");
break;
}
case 128068:
{
returnValue = F("Hacklsbergweg (KM)");
break;
}
case 128069:
{
returnValue = F("Hacklthal");
break;
}
case 128070:
{
returnValue = F("Hacklthaler Str.");
break;
}
case 128071:
{
returnValue = F("Hacklweg");
break;
}
case 128072:
{
returnValue = F("Hackländerplatz");
break;
}
case 128073:
{
returnValue = F("Hackländerstr.");
break;
}
case 128074:
{
returnValue = F("Hacklöser Weg");
break;
}
case 128075:
{
returnValue = F("Hackmahdgasse");
break;
}
case 128076:
{
returnValue = F("Hackmanns Boll");
break;
}
case 128077:
{
returnValue = F("Hacknerweg");
break;
}
case 128078:
{
returnValue = F("Hackpfüffeler Str.");
break;
}
case 128079:
{
returnValue = F("Hacks-Mühle");
break;
}
case 128080:
{
returnValue = F("Hacksbergstr.");
break;
}
case 128081:
{
returnValue = F("Hacksbergweg");
break;
}
case 128082:
{
returnValue = F("Hacksener Str.");
break;
}
case 128083:
{
returnValue = F("Hackshorst");
break;
}
case 128084:
{
returnValue = F("Hacksiek");
break;
}
case 128085:
{
returnValue = F("Hacksiekstr.");
break;
}
case 128086:
{
returnValue = F("Hackstedtsweg");
break;
}
case 128087:
{
returnValue = F("Hackstetterstr.");
break;
}
case 128088:
{
returnValue = F("Hackstr.");
break;
}
case 128089:
{
returnValue = F("Hackstückstr.");
break;
}
case 128090:
{
returnValue = F("Hacktiller Weg");
break;
}
case 128091:
{
returnValue = F("Hackweg");
break;
}
case 128092:
{
returnValue = F("Hackwiese");
break;
}
case 128093:
{
returnValue = F("Hackwiesenweg");
break;
}
case 128094:
{
returnValue = F("Hadamarer Str.");
break;
}
case 128095:
{
returnValue = F("Hadamarstr.");
break;
}
case 128096:
{
returnValue = F("Haddamarstr.");
break;
}
case 128097:
{
returnValue = F("Haddamarweg");
break;
}
case 128098:
{
returnValue = F("Haddamshäuser Str.");
break;
}
case 128099:
{
returnValue = F("Haddamshäuser Weg");
break;
}
case 128100:
{
returnValue = F("Haddebyer Chaussee");
break;
}
case 128101:
{
returnValue = F("Haddenbacher Str.");
break;
}
case 128102:
{
returnValue = F("Haddenbergstr.");
break;
}
case 128103:
{
returnValue = F("Haddenbrocker Str.");
break;
}
case 128104:
{
returnValue = F("Haddendorpstr.");
break;
}
case 128105:
{
returnValue = F("Haddenhauser Dorfstr.");
break;
}
case 128106:
{
returnValue = F("Haddesser Str.");
break;
}
case 128107:
{
returnValue = F("Haddien");
break;
}
case 128108:
{
returnValue = F("Haddings Berg");
break;
}
case 128109:
{
returnValue = F("Haddorf");
break;
}
case 128110:
{
returnValue = F("Haddorfer Berg");
break;
}
case 128111:
{
returnValue = F("Haddorfer Grenzweg");
break;
}
case 128112:
{
returnValue = F("Haddorfer Hauptstr.");
break;
}
case 128113:
{
returnValue = F("Haddorfer Str.");
break;
}
case 128114:
{
returnValue = F("Haddorfer Weg");
break;
}
case 128115:
{
returnValue = F("Haddostr.");
break;
}
case 128116:
{
returnValue = F("Haddoweg");
break;
}
case 128117:
{
returnValue = F("Hadebornstr.");
break;
}
case 128118:
{
returnValue = F("Hadeborntal");
break;
}
case 128119:
{
returnValue = F("Hadelberg");
break;
}
case 128120:
{
returnValue = F("Hadeler Heide");
break;
}
case 128121:
{
returnValue = F("Hadeler Platz");
break;
}
case 128122:
{
returnValue = F("Hadeler Str.");
break;
}
case 128123:
{
returnValue = F("Hadeler Weg");
break;
}
case 128124:
{
returnValue = F("Hadelnweg");
break;
}
case 128125:
{
returnValue = F("Hadelsgraben");
break;
}
case 128126:
{
returnValue = F("Hadelweg");
break;
}
case 128127:
{
returnValue = F("Hadelwies");
break;
}
case 128128:
{
returnValue = F("Hademarscher Weg");
break;
}
case 128129:
{
returnValue = F("Hademarstieg");
break;
}
case 128130:
{
returnValue = F("Hademarweg");
break;
}
case 128131:
{
returnValue = F("Haderastr.");
break;
}
case 128132:
{
returnValue = F("Haderecke");
break;
}
case 128133:
{
returnValue = F("Haderer Str.");
break;
}
case 128134:
{
returnValue = F("Hadererstr.");
break;
}
case 128135:
{
returnValue = F("Hadergasse");
break;
}
case 128136:
{
returnValue = F("Hadergäßchen");
break;
}
case 128137:
{
returnValue = F("Haderheck-Schneise");
break;
}
case 128138:
{
returnValue = F("Haderheckeweg");
break;
}
case 128139:
{
returnValue = F("Haderholzstr.");
break;
}
case 128140:
{
returnValue = F("Haderholzweg");
break;
}
case 128141:
{
returnValue = F("Haderkopf");
break;
}
case 128142:
{
returnValue = F("Haderlandstieg");
break;
}
case 128143:
{
returnValue = F("Haderleinsgässchen");
break;
}
case 128144:
{
returnValue = F("Haderlosgässlein");
break;
}
case 128145:
{
returnValue = F("Haderlsdorf");
break;
}
case 128146:
{
returnValue = F("Hadermarkt");
break;
}
case 128147:
{
returnValue = F("Hadermarktweg");
break;
}
case 128148:
{
returnValue = F("Hadermühle");
break;
}
case 128149:
{
returnValue = F("Hadern");
break;
}
case 128150:
{
returnValue = F("Haderner Weg");
break;
}
case 128151:
{
returnValue = F("Hadernweg");
break;
}
case 128152:
{
returnValue = F("Hadersbach");
break;
}
case 128153:
{
returnValue = F("Hadersbacher Str.");
break;
}
case 128154:
{
returnValue = F("Hadersberger Str.");
break;
}
case 128155:
{
returnValue = F("Haderschener Str.");
break;
}
case 128156:
{
returnValue = F("Haderslebener Str.");
break;
}
case 128157:
{
returnValue = F("Hadersleber Str.");
break;
}
case 128158:
{
returnValue = F("Hadersried");
break;
}
case 128159:
{
returnValue = F("Haderstr.");
break;
}
case 128160:
{
returnValue = F("Haderthalweg");
break;
}
case 128161:
{
returnValue = F("Haderunstr.");
break;
}
case 128162:
{
returnValue = F("Haderwaldstr.");
break;
}
case 128163:
{
returnValue = F("Hadewartstr.");
break;
}
case 128164:
{
returnValue = F("Hading");
break;
}
case 128165:
{
returnValue = F("Hadlaubstr.");
break;
}
case 128166:
{
returnValue = F("Hadler Weg");
break;
}
case 128167:
{
returnValue = F("Hadmerslebener Str.");
break;
}
case 128168:
{
returnValue = F("Hadmersleber Str.");
break;
}
case 128169:
{
returnValue = F("Hadmersleber Weg");
break;
}
case 128170:
{
returnValue = F("Hadolfinger Str.");
break;
}
case 128171:
{
returnValue = F("Hadorfer Str.");
break;
}
case 128172:
{
returnValue = F("Hadorn");
break;
}
case 128173:
{
returnValue = F("Hadrianstr.");
break;
}
case 128174:
{
returnValue = F("Hadrianweg");
break;
}
case 128175:
{
returnValue = F("Hadrich");
break;
}
case 128176:
{
returnValue = F("Hadriwa Höhenweg");
break;
}
case 128177:
{
returnValue = F("Hadriwastr.");
break;
}
case 128178:
{
returnValue = F("Hadubertstr.");
break;
}
case 128179:
{
returnValue = F("Hadubrandstr.");
break;
}
case 128180:
{
returnValue = F("Hadubrandweg");
break;
}
case 128181:
{
returnValue = F("Hadumothstr.");
break;
}
case 128182:
{
returnValue = F("Hadwigastr.");
break;
}
case 128183:
{
returnValue = F("Hadwigstr.");
break;
}
case 128184:
{
returnValue = F("Hadäckerstr.");
break;
}
case 128185:
{
returnValue = F("Haeberlinstr.");
break;
}
case 128186:
{
returnValue = F("Haeberlinsweg");
break;
}
case 128187:
{
returnValue = F("Haeberlinweg");
break;
}
case 128188:
{
returnValue = F("Haeckelallee");
break;
}
case 128189:
{
returnValue = F("Haeckelstr.");
break;
}
case 128190:
{
returnValue = F("Haeckelweg");
break;
}
case 128191:
{
returnValue = F("Haeckerstr.");
break;
}
case 128192:
{
returnValue = F("Haedenkampstr.");
break;
}
case 128193:
{
returnValue = F("Haedgestr.");
break;
}
case 128194:
{
returnValue = F("Haeg");
break;
}
case 128195:
{
returnValue = F("Haegelestr.");
break;
}
case 128196:
{
returnValue = F("Haegerstr.");
break;
}
case 128197:
{
returnValue = F("Haegestr.");
break;
}
case 128198:
{
returnValue = F("Haegweg");
break;
}
case 128199:
{
returnValue = F("Haehlstr.");
break;
}
case 128200:
{
returnValue = F("Haelmenwinkel");
break;
}
case 128201:
{
returnValue = F("Haempenkamp");
break;
}
case 128202:
{
returnValue = F("Haenel-Clauß-Platz");
break;
}
case 128203:
{
returnValue = F("Haenel-Clauß-Str.");
break;
}
case 128204:
{
returnValue = F("Haenelplatz");
break;
}
case 128205:
{
returnValue = F("Haenelstr.");
break;
}
case 128206:
{
returnValue = F("Haenischstr.");
break;
}
case 128207:
{
returnValue = F("Haenlinstr.");
break;
}
case 128208:
{
returnValue = F("Haermeyers Kamp");
break;
}
case 128209:
{
returnValue = F("Haerte Kämpe");
break;
}
case 128210:
{
returnValue = F("Haertsfelderstr.");
break;
}
case 128211:
{
returnValue = F("Haesefeld");
break;
}
case 128212:
{
returnValue = F("Haeselerstr.");
break;
}
case 128213:
{
returnValue = F("Haeselerweg");
break;
}
case 128214:
{
returnValue = F("Haesgeswiesen");
break;
}
case 128215:
{
returnValue = F("Haeslerstr.");
break;
}
case 128216:
{
returnValue = F("Haesloops Pad");
break;
}
case 128217:
{
returnValue = F("Haesterkamp");
break;
}
case 128218:
{
returnValue = F("Haesterkampweg");
break;
}
case 128219:
{
returnValue = F("Haeussermannstr.");
break;
}
case 128220:
{
returnValue = F("Haeverfeld");
break;
}
case 128221:
{
returnValue = F("Hafelbachweg");
break;
}
case 128222:
{
returnValue = F("Hafeld");
break;
}
case 128223:
{
returnValue = F("Hafelhofweg");
break;
}
case 128224:
{
returnValue = F("Hafelsstr.");
break;
}
case 128225:
{
returnValue = F("Hafen");
break;
}
case 128226:
{
returnValue = F("Hafenallee");
break;
}
case 128227:
{
returnValue = F("Hafenbad");
break;
}
case 128228:
{
returnValue = F("Hafenbahn");
break;
}
case 128229:
{
returnValue = F("Hafenbahnhofstr.");
break;
}
case 128230:
{
returnValue = F("Hafenbahnstr.");
break;
}
case 128231:
{
returnValue = F("Hafenbahntrasse");
break;
}
case 128232:
{
returnValue = F("Hafenbahnweg");
break;
}
case 128233:
{
returnValue = F("Hafenberg");
break;
}
case 128234:
{
returnValue = F("Hafenblick");
break;
}
case 128235:
{
returnValue = F("Hafenbrunnenweg");
break;
}
case 128236:
{
returnValue = F("Hafenbrädlallee");
break;
}
case 128237:
{
returnValue = F("Hafenbrädlstr.");
break;
}
case 128238:
{
returnValue = F("Hafenbrücke");
break;
}
case 128239:
{
returnValue = F("Hafenchaussee");
break;
}
case 128240:
{
returnValue = F("Hafendamm");
break;
}
case 128241:
{
returnValue = F("Hafendeck");
break;
}
case 128242:
{
returnValue = F("Hafendecke");
break;
}
case 128243:
{
returnValue = F("Hafendeckstr.");
break;
}
case 128244:
{
returnValue = F("Hafendeichstr.");
break;
}
case 128245:
{
returnValue = F("Hafendorf");
break;
}
case 128246:
{
returnValue = F("Hafenducht");
break;
}
case 128247:
{
returnValue = F("Hafenegg");
break;
}
case 128248:
{
returnValue = F("Hafenendschlagweg");
break;
}
case 128249:
{
returnValue = F("Hafenfeldweg");
break;
}
case 128250:
{
returnValue = F("Hafengang");
break;
}
case 128251:
{
returnValue = F("Hafengasse");
break;
}
case 128252:
{
returnValue = F("Hafengrenzweg");
break;
}
case 128253:
{
returnValue = F("Hafenham");
break;
}
case 128254:
{
returnValue = F("Hafenhaus");
break;
}
case 128255:
{
returnValue = F("Hafenhofener Str.");
break;
}
case 128256:
{
returnValue = F("Hafeninsel");
break;
}
case 128257:
{
returnValue = F("Hafenkopfstr.");
break;
}
case 128258:
{
returnValue = F("Hafenkäs");
break;
}
case 128259:
{
returnValue = F("Hafenlohrer Str.");
break;
}
case 128260:
{
returnValue = F("Hafenlohrtalstr.");
break;
}
case 128261:
{
returnValue = F("Hafenlohrweg");
break;
}
case 128262:
{
returnValue = F("Hafenmarkt");
break;
}
case 128263:
{
returnValue = F("Hafenmarktgasse");
break;
}
case 128264:
{
returnValue = F("Hafenmühlweg");
break;
}
case 128265:
{
returnValue = F("Hafenpark");
break;
}
case 128266:
{
returnValue = F("Hafenplatz");
break;
}
case 128267:
{
returnValue = F("Hafenpreppacher Str.");
break;
}
case 128268:
{
returnValue = F("Hafenpromenade");
break;
}
case 128269:
{
returnValue = F("Hafenrandstr.");
break;
}
case 128270:
{
returnValue = F("Hafenreuter Str.");
break;
}
case 128271:
{
returnValue = F("Hafenreuther Str.");
break;
}
case 128272:
{
returnValue = F("Hafenringstr.");
break;
}
case 128273:
{
returnValue = F("Hafenspange");
break;
}
case 128274:
{
returnValue = F("Hafenspitze");
break;
}
case 128275:
{
returnValue = F("Hafensteg");
break;
}
case 128276:
{
returnValue = F("Hafenstr.");
break;
}
case 128277:
{
returnValue = F("Hafenstr. - Seerundweg");
break;
}
case 128278:
{
returnValue = F("Hafentalweg");
break;
}
case 128279:
{
returnValue = F("Hafenterrassen");
break;
}
case 128280:
{
returnValue = F("Hafenthal");
break;
}
case 128281:
{
returnValue = F("Hafentorplatz");
break;
}
case 128282:
{
returnValue = F("Hafentunnel");
break;
}
case 128283:
{
returnValue = F("Hafentörn");
break;
}
case 128284:
{
returnValue = F("Hafenweg");
break;
}
case 128285:
{
returnValue = F("Hafenweiler");
break;
}
case 128286:
{
returnValue = F("Hafenäcker");
break;
}
case 128287:
{
returnValue = F("Hafer-Vöhde");
break;
}
case 128288:
{
returnValue = F("Haferacker");
break;
}
case 128289:
{
returnValue = F("Haferackerschneise");
break;
}
case 128290:
{
returnValue = F("Haferbachstr.");
break;
}
case 128291:
{
returnValue = F("Haferberg");
break;
}
case 128292:
{
returnValue = F("Haferbergweg");
break;
}
case 128293:
{
returnValue = F("Haferbogen");
break;
}
case 128294:
{
returnValue = F("Haferbrede");
break;
}
case 128295:
{
returnValue = F("Haferbreite");
break;
}
case 128296:
{
returnValue = F("Haferbreiter Weg");
break;
}
case 128297:
{
returnValue = F("Haferbruchweg");
break;
}
case 128298:
{
returnValue = F("Haferbuckel");
break;
}
case 128299:
{
returnValue = F("Haferbusch");
break;
}
case 128300:
{
returnValue = F("Haferbült");
break;
}
case 128301:
{
returnValue = F("Haferfeld");
break;
}
case 128302:
{
returnValue = F("Haferfeldring");
break;
}
case 128303:
{
returnValue = F("Haferfeldsgrund");
break;
}
case 128304:
{
returnValue = F("Haferfeldstr.");
break;
}
case 128305:
{
returnValue = F("Hafergang");
break;
}
case 128306:
{
returnValue = F("Hafergarten");
break;
}
case 128307:
{
returnValue = F("Hafergasse");
break;
}
case 128308:
{
returnValue = F("Hafergrund");
break;
}
case 128309:
{
returnValue = F("Hafergärten");
break;
}
case 128310:
{
returnValue = F("Haferheegstr.");
break;
}
case 128311:
{
returnValue = F("Haferhof");
break;
}
case 128312:
{
returnValue = F("Hafering");
break;
}
case 128313:
{
returnValue = F("Haferkammsweg");
break;
}
case 128314:
{
returnValue = F("Haferkamp");
break;
}
case 128315:
{
returnValue = F("Haferkampsheide");
break;
}
case 128316:
{
returnValue = F("Haferkampstr.");
break;
}
case 128317:
{
returnValue = F("Haferkampsweg");
break;
}
case 128318:
{
returnValue = F("Haferknapp");
break;
}
case 128319:
{
returnValue = F("Haferkoppel");
break;
}
case 128320:
{
returnValue = F("Haferkornstr.");
break;
}
case 128321:
{
returnValue = F("Haferkost");
break;
}
case 128322:
{
returnValue = F("Haferkostweg");
break;
}
case 128323:
{
returnValue = F("Haferland");
break;
}
case 128324:
{
returnValue = F("Haferland-Siedlung");
break;
}
case 128325:
{
returnValue = F("Haferlander Weg");
break;
}
case 128326:
{
returnValue = F("Haferlandsheide");
break;
}
case 128327:
{
returnValue = F("Haferlandweg");
break;
}
case 128328:
{
returnValue = F("Haferlbrücke");
break;
}
case 128329:
{
returnValue = F("Haferloh");
break;
}
case 128330:
{
returnValue = F("Hafermarkt");
break;
}
case 128331:
{
returnValue = F("Hafermasch");
break;
}
case 128332:
{
returnValue = F("Haferpfad");
break;
}
case 128333:
{
returnValue = F("Haferrain");
break;
}
case 128334:
{
returnValue = F("Haferring");
break;
}
case 128335:
{
returnValue = F("Haferrögen");
break;
}
case 128336:
{
returnValue = F("Hafersteig");
break;
}
case 128337:
{
returnValue = F("Haferstieg");
break;
}
case 128338:
{
returnValue = F("Haferstiege");
break;
}
case 128339:
{
returnValue = F("Haferstoppel");
break;
}
case 128340:
{
returnValue = F("Haferstr.");
break;
}
case 128341:
{
returnValue = F("Haferstücke");
break;
}
case 128342:
{
returnValue = F("Haferstückenweg");
break;
}
case 128343:
{
returnValue = F("Hafersäckleweg");
break;
}
case 128344:
{
returnValue = F("Haferteich");
break;
}
case 128345:
{
returnValue = F("Hafertwiete");
break;
}
case 128346:
{
returnValue = F("Haferunger Weg");
break;
}
case 128347:
{
returnValue = F("Hafervöhde");
break;
}
case 128348:
{
returnValue = F("Haferweg");
break;
}
case 128349:
{
returnValue = F("Haferwende");
break;
}
case 128350:
{
returnValue = F("Haferwinkel");
break;
}
case 128351:
{
returnValue = F("Haffbergstr.");
break;
}
case 128352:
{
returnValue = F("Haffblick");
break;
}
case 128353:
{
returnValue = F("Haffburg");
break;
}
case 128354:
{
returnValue = F("Haffdeich");
break;
}
case 128355:
{
returnValue = F("Haffdroom");
break;
}
case 128356:
{
returnValue = F("Hafferholz");
break;
}
case 128357:
{
returnValue = F("Haffkamp");
break;
}
case 128358:
{
returnValue = F("Haffkamper Weg");
break;
}
case 128359:
{
returnValue = F("Haffkampredder");
break;
}
case 128360:
{
returnValue = F("Haffkoppel");
break;
}
case 128361:
{
returnValue = F("Haffkruger Str.");
break;
}
case 128362:
{
returnValue = F("Hafflücke");
break;
}
case 128363:
{
returnValue = F("Haffmannsdyck");
break;
}
case 128364:
{
returnValue = F("Haffner Ring");
break;
}
case 128365:
{
returnValue = F("Haffner's Gässchen");
break;
}
case 128366:
{
returnValue = F("Haffnersgartenstr.");
break;
}
case 128367:
{
returnValue = F("Haffnersteg");
break;
}
case 128368:
{
returnValue = F("Haffnerstr.");
break;
}
case 128369:
{
returnValue = F("Haffpromenade");
break;
}
case 128370:
{
returnValue = F("Haffring");
break;
}
case 128371:
{
returnValue = F("Haffstr.");
break;
}
case 128372:
{
returnValue = F("Haffweg");
break;
}
case 128373:
{
returnValue = F("Haffwiesenpark");
break;
}
case 128374:
{
returnValue = F("Haffwiesenweg");
break;
}
case 128375:
{
returnValue = F("Haffwinkel");
break;
}
case 128376:
{
returnValue = F("Hafing");
break;
}
case 128377:
{
returnValue = F("Hafisweg");
break;
}
case 128378:
{
returnValue = F("Hafkamp");
break;
}
case 128379:
{
returnValue = F("Hafkemeyerweg");
break;
}
case 128380:
{
returnValue = F("Hafkesdell");
break;
}
case 128381:
{
returnValue = F("Hafkhorst");
break;
}
case 128382:
{
returnValue = F("Haflinger Str.");
break;
}
case 128383:
{
returnValue = F("Haflinger Weg");
break;
}
case 128384:
{
returnValue = F("Haflingerstr.");
break;
}
case 128385:
{
returnValue = F("Haflingerweg");
break;
}
case 128386:
{
returnValue = F("Haflstrassl");
break;
}
case 128387:
{
returnValue = F("Hafnarfjördurplatz");
break;
}
case 128388:
{
returnValue = F("Hafner-Stöhr-Str.");
break;
}
case 128389:
{
returnValue = F("Hafnerberg");
break;
}
case 128390:
{
returnValue = F("Hafnerbergl");
break;
}
case 128391:
{
returnValue = F("Hafnerbergstr.");
break;
}
case 128392:
{
returnValue = F("Hafnergarten");
break;
}
case 128393:
{
returnValue = F("Hafnergasse");
break;
}
case 128394:
{
returnValue = F("Hafnergraben");
break;
}
case 128395:
{
returnValue = F("Hafnergässle");
break;
}
case 128396:
{
returnValue = F("Hafnergäßchen");
break;
}
case 128397:
{
returnValue = F("Hafnergäßle");
break;
}
case 128398:
{
returnValue = F("Hafnerhohle");
break;
}
case 128399:
{
returnValue = F("Hafnerhöhe");
break;
}
case 128400:
{
returnValue = F("Hafnerhüttenweg");
break;
}
case 128401:
{
returnValue = F("Hafnerleite");
break;
}
case 128402:
{
returnValue = F("Hafnermarkt");
break;
}
case 128403:
{
returnValue = F("Hafnersberg");
break;
}
case 128404:
{
returnValue = F("Hafnersgraben");
break;
}
case 128405:
{
returnValue = F("Hafnersmarkt");
break;
}
case 128406:
{
returnValue = F("Hafnerstadt");
break;
}
case 128407:
{
returnValue = F("Hafnersteig");
break;
}
case 128408:
{
returnValue = F("Hafnersteige");
break;
}
case 128409:
{
returnValue = F("Hafnerstr.");
break;
}
case 128410:
{
returnValue = F("Hafnersäcker");
break;
}
case 128411:
{
returnValue = F("Hafnerweg");
break;
}
case 128412:
{
returnValue = F("Hafneräcker");
break;
}
case 128413:
{
returnValue = F("Haft");
break;
}
case 128414:
{
returnValue = F("Haftalstr.");
break;
}
case 128415:
{
returnValue = F("Haftelbach");
break;
}
case 128416:
{
returnValue = F("Haftenkamper Diek");
break;
}
case 128417:
{
returnValue = F("Haftenkamper Str.");
break;
}
case 128418:
{
returnValue = F("Haftenkamper Weg");
break;
}
case 128419:
{
returnValue = F("Haftenweg");
break;
}
case 128420:
{
returnValue = F("Haftstr.");
break;
}
case 128421:
{
returnValue = F("Hafweg");
break;
}
case 128422:
{
returnValue = F("Hag");
break;
}
case 128423:
{
returnValue = F("Hagab");
break;
}
case 128424:
{
returnValue = F("Hagacker");
break;
}
case 128425:
{
returnValue = F("Hagansplatz");
break;
}
case 128426:
{
returnValue = F("Hagauer Str.");
break;
}
case 128427:
{
returnValue = F("Hagbend");
break;
}
case 128428:
{
returnValue = F("Hagbergstr.");
break;
}
case 128429:
{
returnValue = F("Hagbrucher Str.");
break;
}
case 128430:
{
returnValue = F("Hagbäukenschneise");
break;
}
case 128431:
{
returnValue = F("Hagbüchelweg");
break;
}
case 128432:
{
returnValue = F("Hagbügerl");
break;
}
case 128433:
{
returnValue = F("Hagdorn");
break;
}
case 128434:
{
returnValue = F("Hagdornstr.");
break;
}
case 128435:
{
returnValue = F("Hagdornweg");
break;
}
case 128436:
{
returnValue = F("Hageau-Promenade");
break;
}
case 128437:
{
returnValue = F("Hagebachweg");
break;
}
case 128438:
{
returnValue = F("Hagebaustr.");
break;
}
case 128439:
{
returnValue = F("Hagebergstr.");
break;
}
case 128440:
{
returnValue = F("Hagebornstr.");
break;
}
case 128441:
{
returnValue = F("Hagebrunnen");
break;
}
case 128442:
{
returnValue = F("Hagebröcker Weg");
break;
}
case 128443:
{
returnValue = F("Hagebuche");
break;
}
case 128444:
{
returnValue = F("Hagebuchenweg");
break;
}
case 128445:
{
returnValue = F("Hagebuttengraben");
break;
}
case 128446:
{
returnValue = F("Hagebuttenkamp");
break;
}
case 128447:
{
returnValue = F("Hagebuttenpfad");
break;
}
case 128448:
{
returnValue = F("Hagebuttenplatz");
break;
}
case 128449:
{
returnValue = F("Hagebuttenring");
break;
}
case 128450:
{
returnValue = F("Hagebuttenstr.");
break;
}
case 128451:
{
returnValue = F("Hagebuttentwiete");
break;
}
case 128452:
{
returnValue = F("Hagebuttenweg");
break;
}
case 128453:
{
returnValue = F("Hageböcker Mauer");
break;
}
case 128454:
{
returnValue = F("Hageböcker Str.");
break;
}
case 128455:
{
returnValue = F("Hageböker Weg");
break;
}
case 128456:
{
returnValue = F("Hagedorn");
break;
}
case 128457:
{
returnValue = F("Hagedornbusch");
break;
}
case 128458:
{
returnValue = F("Hagedorner Kirchweg");
break;
}
case 128459:
{
returnValue = F("Hagedorner Str.");
break;
}
case 128460:
{
returnValue = F("Hagedorner Weg");
break;
}
case 128461:
{
returnValue = F("Hagedornplatz");
break;
}
case 128462:
{
returnValue = F("Hagedorns Kamp");
break;
}
case 128463:
{
returnValue = F("Hagedornsgasse");
break;
}
case 128464:
{
returnValue = F("Hagedornskamp");
break;
}
case 128465:
{
returnValue = F("Hagedornstr.");
break;
}
case 128466:
{
returnValue = F("Hagedornsweg");
break;
}
case 128467:
{
returnValue = F("Hagedornweg");
break;
}
case 128468:
{
returnValue = F("Hagefeld");
break;
}
case 128469:
{
returnValue = F("Hageflur");
break;
}
case 128470:
{
returnValue = F("Hagegassl");
break;
}
case 128471:
{
returnValue = F("Hageholz");
break;
}
case 128472:
{
returnValue = F("Hagekamp");
break;
}
case 128473:
{
returnValue = F("Hagelbach");
break;
}
case 128474:
{
returnValue = F("Hagelberg");
break;
}
case 128475:
{
returnValue = F("Hagelberger Allee");
break;
}
case 128476:
{
returnValue = F("Hagelberger Str.");
break;
}
case 128477:
{
returnValue = F("Hagelbergstr.");
break;
}
case 128478:
{
returnValue = F("Hagelbergweg");
break;
}
case 128479:
{
returnValue = F("Hageleite");
break;
}
case 128480:
{
returnValue = F("Hagelenweg");
break;
}
case 128481:
{
returnValue = F("Hageler Damm");
break;
}
case 128482:
{
returnValue = F("Hageler Höhe");
break;
}
case 128483:
{
returnValue = F("Hageler Str.");
break;
}
case 128484:
{
returnValue = F("Hageler Weg");
break;
}
case 128485:
{
returnValue = F("Hagelerweg");
break;
}
case 128486:
{
returnValue = F("Hagelgasse");
break;
}
case 128487:
{
returnValue = F("Hagelgrundstr.");
break;
}
case 128488:
{
returnValue = F("Hagelhof");
break;
}
case 128489:
{
returnValue = F("Hagelhäldenweg");
break;
}
case 128490:
{
returnValue = F("Hagelkreuz");
break;
}
case 128491:
{
returnValue = F("Hagelkreuzstr.");
break;
}
case 128492:
{
returnValue = F("Hagelkreuzweg");
break;
}
case 128493:
{
returnValue = F("Hagellachstr.");
break;
}
case 128494:
{
returnValue = F("Hagellocher Grenzweg");
break;
}
case 128495:
{
returnValue = F("Hagellocher Weg");
break;
}
case 128496:
{
returnValue = F("Hagelmannsweg");
break;
}
case 128497:
{
returnValue = F("Hagelmühlweg");
break;
}
case 128498:
{
returnValue = F("Hagelrainstr.");
break;
}
case 128499:
{
returnValue = F("Hagelreute");
break;
}
case 128500:
{
returnValue = F("Hagelriede");
break;
}
case 128501:
{
returnValue = F("Hagels Kamp");
break;
}
case 128502:
{
returnValue = F("Hagelsberger Weg");
break;
}
case 128503:
{
returnValue = F("Hagelsbergstr.");
break;
}
case 128504:
{
returnValue = F("Hagelsbergweg");
break;
}
case 128505:
{
returnValue = F("Hagelsbrunnen");
break;
}
case 128506:
{
returnValue = F("Hagelsbrunnenweg");
break;
}
case 128507:
{
returnValue = F("Hagelschieß");
break;
}
case 128508:
{
returnValue = F("Hagelsfeld");
break;
}
case 128509:
{
returnValue = F("Hagelsgrundweg");
break;
}
case 128510:
{
returnValue = F("Hagelsheck");
break;
}
case 128511:
{
returnValue = F("Hagelsheimerstr.");
break;
}
case 128512:
{
returnValue = F("Hagelsiepen");
break;
}
case 128513:
{
returnValue = F("Hagelsiepenweg");
break;
}
case 128514:
{
returnValue = F("Hagelskamp");
break;
}
case 128515:
{
returnValue = F("Hagelslochweg");
break;
}
case 128516:
{
returnValue = F("Hagelstangestr.");
break;
}
case 128517:
{
returnValue = F("Hagelsteig");
break;
}
case 128518:
{
returnValue = F("Hagelstein");
break;
}
case 128519:
{
returnValue = F("Hagelsteingasse");
break;
}
case 128520:
{
returnValue = F("Hagelstr.");
break;
}
case 128521:
{
returnValue = F("Hagelsweg");
break;
}
case 128522:
{
returnValue = F("Hagelweg");
break;
}
case 128523:
{
returnValue = F("Hagelweide");
break;
}
case 128524:
{
returnValue = F("Hagemanns Kämpken");
break;
}
case 128525:
{
returnValue = F("Hagemanns Weg");
break;
}
case 128526:
{
returnValue = F("Hagemannsberg");
break;
}
case 128527:
{
returnValue = F("Hagemannshof");
break;
}
case 128528:
{
returnValue = F("Hagemannstr.");
break;
}
case 128529:
{
returnValue = F("Hagemannsweg");
break;
}
case 128530:
{
returnValue = F("Hagemeister Str.");
break;
}
case 128531:
{
returnValue = F("Hagemeisterstr.");
break;
}
case 128532:
{
returnValue = F("Hagemer Binsenweide");
break;
}
case 128533:
{
returnValue = F("Hagemer Kirchweg");
break;
}
case 128534:
{
returnValue = F("Hagemühle");
break;
}
case 128535:
{
returnValue = F("Hagen");
break;
}
case 128536:
{
returnValue = F("Hagen Allee");
break;
}
case 128537:
{
returnValue = F("Hagen Kamp");
break;
}
case 128538:
{
returnValue = F("Hagen Weg");
break;
}
case 128539:
{
returnValue = F("Hagen-Arve");
break;
}
case 128540:
{
returnValue = F("Hagen-Hof-Weg");
break;
}
case 128541:
{
returnValue = F("Hagen-Ringstr.");
break;
}
case 128542:
{
returnValue = F("Hagenacker");
break;
}
case 128543:
{
returnValue = F("Hagenackerweg");
break;
}
case 128544:
{
returnValue = F("Hagenaher Str.");
break;
}
case 128545:
{
returnValue = F("Hagenahstr.");
break;
}
case 128546:
{
returnValue = F("Hagenau");
break;
}
case 128547:
{
returnValue = F("Hagenauer Str.");
break;
}
case 128548:
{
returnValue = F("Hagenauer Weg");
break;
}
case 128549:
{
returnValue = F("Hagenauer Winkel");
break;
}
case 128550:
{
returnValue = F("Hagenauerstr.");
break;
}
case 128551:
{
returnValue = F("Hagenaustr.");
break;
}
case 128552:
{
returnValue = F("Hagenauweg");
break;
}
case 128553:
{
returnValue = F("Hagenbach");
break;
}
case 128554:
{
returnValue = F("Hagenbacher Hof");
break;
}
case 128555:
{
returnValue = F("Hagenbacher Ring");
break;
}
case 128556:
{
returnValue = F("Hagenbacher Steige");
break;
}
case 128557:
{
returnValue = F("Hagenbacher Str.");
break;
}
case 128558:
{
returnValue = F("Hagenbachstr.");
break;
}
case 128559:
{
returnValue = F("Hagenbachweg");
break;
}
case 128560:
{
returnValue = F("Hagenbecker Bahn");
break;
}
case 128561:
{
returnValue = F("Hagenbecker Str.");
break;
}
case 128562:
{
returnValue = F("Hagenbeckstr.");
break;
}
case 128563:
{
returnValue = F("Hagenbeckweg");
break;
}
case 128564:
{
returnValue = F("Hagenberg");
break;
}
case 128565:
{
returnValue = F("Hagenberger Str.");
break;
}
case 128566:
{
returnValue = F("Hagenbergstr.");
break;
}
case 128567:
{
returnValue = F("Hagenbergweg");
break;
}
case 128568:
{
returnValue = F("Hagenbichl");
break;
}
case 128569:
{
returnValue = F("Hagenbieke");
break;
}
case 128570:
{
returnValue = F("Hagenbitze");
break;
}
case 128571:
{
returnValue = F("Hagenbleckstr.");
break;
}
case 128572:
{
returnValue = F("Hagenblick");
break;
}
case 128573:
{
returnValue = F("Hagenbredde");
break;
}
case 128574:
{
returnValue = F("Hagenbrede");
break;
}
case 128575:
{
returnValue = F("Hagenbreite");
break;
}
case 128576:
{
returnValue = F("Hagenbrink");
break;
}
case 128577:
{
returnValue = F("Hagenbrockstr.");
break;
}
case 128578:
{
returnValue = F("Hagenbrook");
break;
}
case 128579:
{
returnValue = F("Hagenbruchstr.");
break;
}
case 128580:
{
returnValue = F("Hagenbruchweg");
break;
}
case 128581:
{
returnValue = F("Hagenbruchwiesen");
break;
}
case 128582:
{
returnValue = F("Hagenbruck");
break;
}
case 128583:
{
returnValue = F("Hagenbrunnenstr.");
break;
}
case 128584:
{
returnValue = F("Hagenbrücke");
break;
}
case 128585:
{
returnValue = F("Hagenbuch");
break;
}
case 128586:
{
returnValue = F("Hagenbuchen");
break;
}
case 128587:
{
returnValue = F("Hagenbuchenallee");
break;
}
case 128588:
{
returnValue = F("Hagenbuchenstr.");
break;
}
case 128589:
{
returnValue = F("Hagenbucher Mühle");
break;
}
case 128590:
{
returnValue = F("Hagenbucher Str.");
break;
}
case 128591:
{
returnValue = F("Hagenbucher Tal");
break;
}
case 128592:
{
returnValue = F("Hagenbucher Weg");
break;
}
case 128593:
{
returnValue = F("Hagenbucherbrücke");
break;
}
case 128594:
{
returnValue = F("Hagenbuchring");
break;
}
case 128595:
{
returnValue = F("Hagenbuchstr.");
break;
}
case 128596:
{
returnValue = F("Hagenbuchwaldweg");
break;
}
case 128597:
{
returnValue = F("Hagenbuchweg");
break;
}
case 128598:
{
returnValue = F("Hagenbuchäcker");
break;
}
case 128599:
{
returnValue = F("Hagenburger Str.");
break;
}
case 128600:
{
returnValue = F("Hagenburgring");
break;
}
case 128601:
{
returnValue = F("Hagenbusch");
break;
}
case 128602:
{
returnValue = F("Hagenbuschstr.");
break;
}
case 128603:
{
returnValue = F("Hagenbuschweg");
break;
}
case 128604:
{
returnValue = F("Hagenbühl");
break;
}
case 128605:
{
returnValue = F("Hagenbühlweg");
break;
}
case 128606:
{
returnValue = F("Hagenbütter Weg");
break;
}
case 128607:
{
returnValue = F("Hagendamm");
break;
}
case 128608:
{
returnValue = F("Hagendiekskamp");
break;
}
case 128609:
{
returnValue = F("Hagendonop");
break;
}
case 128610:
{
returnValue = F("Hagendorf");
break;
}
case 128611:
{
returnValue = F("Hagendorfer Str.");
break;
}
case 128612:
{
returnValue = F("Hagendorfer Weg");
break;
}
case 128613:
{
returnValue = F("Hagendorfstr.");
break;
}
case 128614:
{
returnValue = F("Hagendorn");
break;
}
case 128615:
{
returnValue = F("Hagendorner Weg");
break;
}
case 128616:
{
returnValue = F("Hageneichen");
break;
}
case 128617:
{
returnValue = F("Hagener Allee");
break;
}
case 128618:
{
returnValue = F("Hagener Dorfstr.");
break;
}
case 128619:
{
returnValue = F("Hagener Esch");
break;
}
case 128620:
{
returnValue = F("Hagener Hauptstr.");
break;
}
case 128621:
{
returnValue = F("Hagener Landstr.");
break;
}
case 128622:
{
returnValue = F("Hagener Moordamm");
break;
}
case 128623:
{
returnValue = F("Hagener Platz");
break;
}
case 128624:
{
returnValue = F("Hagener Str.");
break;
}
case 128625:
{
returnValue = F("Hagener Tobel");
break;
}
case 128626:
{
returnValue = F("Hagener Weg");
break;
}
case 128627:
{
returnValue = F("Hagenerberg");
break;
}
case 128628:
{
returnValue = F("Hagenest");
break;
}
case 128629:
{
returnValue = F("Hagenfeld");
break;
}
case 128630:
{
returnValue = F("Hagenfeldstr.");
break;
}
case 128631:
{
returnValue = F("Hagenfeldsweg");
break;
}
case 128632:
{
returnValue = F("Hagengarten");
break;
}
case 128633:
{
returnValue = F("Hagengasse");
break;
}
case 128634:
{
returnValue = F("Hagengruber Str.");
break;
}
case 128635:
{
returnValue = F("Hagengrund");
break;
}
case 128636:
{
returnValue = F("Hagengängsken");
break;
}
case 128637:
{
returnValue = F("Hagengässle");
break;
}
case 128638:
{
returnValue = F("Hagenhausener Hauptstr.");
break;
}
case 128639:
{
returnValue = F("Hagenhausener Str.");
break;
}
case 128640:
{
returnValue = F("Hagenhausenweg");
break;
}
case 128641:
{
returnValue = F("Hagenhausweg");
break;
}
case 128642:
{
returnValue = F("Hagenheimer Str.");
break;
}
case 128643:
{
returnValue = F("Hagenheis Wieske");
break;
}
case 128644:
{
returnValue = F("Hagenhiller Str.");
break;
}
case 128645:
{
returnValue = F("Hagenhof");
break;
}
case 128646:
{
returnValue = F("Hagenhofen");
break;
}
case 128647:
{
returnValue = F("Hagenhofer Str.");
break;
}
case 128648:
{
returnValue = F("Hagenhofer Weg");
break;
}
case 128649:
{
returnValue = F("Hagenhofweg");
break;
}
case 128650:
{
returnValue = F("Hagenholt");
break;
}
case 128651:
{
returnValue = F("Hagenhoopt");
break;
}
case 128652:
{
returnValue = F("Hagenhäuleweg");
break;
}
case 128653:
{
returnValue = F("Hagenhölzleweg");
break;
}
case 128654:
{
returnValue = F("Hagenich");
break;
}
case 128655:
{
returnValue = F("Hagenkamp");
break;
}
case 128656:
{
returnValue = F("Hagenkampsweg");
break;
}
case 128657:
{
returnValue = F("Hagenkreuzweg");
break;
}
case 128658:
{
returnValue = F("Hagenleite");
break;
}
case 128659:
{
returnValue = F("Hagenlochweg");
break;
}
case 128660:
{
returnValue = F("Hagenloher Str.");
break;
}
case 128661:
{
returnValue = F("Hagenmahd");
break;
}
case 128662:
{
returnValue = F("Hagenmarkt");
break;
}
case 128663:
{
returnValue = F("Hagenmattenstr.");
break;
}
case 128664:
{
returnValue = F("Hagenmattenweg");
break;
}
case 128665:
{
returnValue = F("Hagenmattweg");
break;
}
case 128666:
{
returnValue = F("Hagenmoos");
break;
}
case 128667:
{
returnValue = F("Hagenmoosstr.");
break;
}
case 128668:
{
returnValue = F("Hagenmähderstr.");
break;
}
case 128669:
{
returnValue = F("Hagenmühle");
break;
}
case 128670:
{
returnValue = F("Hagenmühlenweg");
break;
}
case 128671:
{
returnValue = F("Hagenmühlweg");
break;
}
case 128672:
{
returnValue = F("Hagenohsener Str.");
break;
}
case 128673:
{
returnValue = F("Hagenortstr.");
break;
}
case 128674:
{
returnValue = F("Hagenow-Heide-Chaussee");
break;
}
case 128675:
{
returnValue = F("Hagenow-Heider-Chaussee");
break;
}
case 128676:
{
returnValue = F("Hagenower Chaussee");
break;
}
case 128677:
{
returnValue = F("Hagenower Str.");
break;
}
case 128678:
{
returnValue = F("Hagenower Weg");
break;
}
case 128679:
{
returnValue = F("Hagenowweg");
break;
}
case 128680:
{
returnValue = F("Hagenpatt");
break;
}
case 128681:
{
returnValue = F("Hagenpfad");
break;
}
case 128682:
{
returnValue = F("Hagenpfuhl");
break;
}
case 128683:
{
returnValue = F("Hagenplatz");
break;
}
case 128684:
{
returnValue = F("Hagenpolder I");
break;
}
case 128685:
{
returnValue = F("Hagenpolder II");
break;
}
case 128686:
{
returnValue = F("Hagenrain");
break;
}
case 128687:
{
returnValue = F("Hagenrainstr.");
break;
}
case 128688:
{
returnValue = F("Hagenrainweg");
break;
}
case 128689:
{
returnValue = F("Hagenreutestr.");
break;
}
case 128690:
{
returnValue = F("Hagenried");
break;
}
case 128691:
{
returnValue = F("Hagenriede");
break;
}
case 128692:
{
returnValue = F("Hagenrieder Str.");
break;
}
case 128693:
{
returnValue = F("Hagenrieder Weg");
break;
}
case 128694:
{
returnValue = F("Hagenring");
break;
}
case 128695:
{
returnValue = F("Hagens Weg");
break;
}
case 128696:
{
returnValue = F("Hagensallee");
break;
}
case 128697:
{
returnValue = F("Hagensberg");
break;
}
case 128698:
{
returnValue = F("Hagenscharrn");
break;
}
case 128699:
{
returnValue = F("Hagensche Str.");
break;
}
case 128700:
{
returnValue = F("Hagenschießstr.");
break;
}
case 128701:
{
returnValue = F("Hagenschneiderweg");
break;
}
case 128702:
{
returnValue = F("Hagenschwand");
break;
}
case 128703:
{
returnValue = F("Hagenshöferweg");
break;
}
case 128704:
{
returnValue = F("Hagensiek");
break;
}
case 128705:
{
returnValue = F("Hagenskamp");
break;
}
case 128706:
{
returnValue = F("Hagenskoppel");
break;
}
case 128707:
{
returnValue = F("Hagensmoor");
break;
}
case 128708:
{
returnValue = F("Hagensstr.");
break;
}
case 128709:
{
returnValue = F("Hagensteinweg");
break;
}
case 128710:
{
returnValue = F("Hagenstieg");
break;
}
case 128711:
{
returnValue = F("Hagenstiege");
break;
}
case 128712:
{
returnValue = F("Hagenstr.");
break;
}
case 128713:
{
returnValue = F("Hagental");
break;
}
case 128714:
{
returnValue = F("Hagentalstr.");
break;
}
case 128715:
{
returnValue = F("Hagentalweg");
break;
}
case 128716:
{
returnValue = F("Hagenteichgasse");
break;
}
case 128717:
{
returnValue = F("Hagentelle");
break;
}
case 128718:
{
returnValue = F("Hagenthalerstr.");
break;
}
case 128719:
{
returnValue = F("Hagentor");
break;
}
case 128720:
{
returnValue = F("Hagentorstr.");
break;
}
case 128721:
{
returnValue = F("Hagentorwall");
break;
}
case 128722:
{
returnValue = F("Hagentorweg");
break;
}
case 128723:
{
returnValue = F("Hagentrift");
break;
}
case 128724:
{
returnValue = F("Hagentwiete");
break;
}
case 128725:
{
returnValue = F("Hagentäle");
break;
}
case 128726:
{
returnValue = F("Hagenweg");
break;
}
case 128727:
{
returnValue = F("Hagenweide");
break;
}
case 128728:
{
returnValue = F("Hagenweiler");
break;
}
case 128729:
{
returnValue = F("Hagenwerderstr.");
break;
}
case 128730:
{
returnValue = F("Hagenwiese");
break;
}
case 128731:
{
returnValue = F("Hagenwiesen");
break;
}
case 128732:
{
returnValue = F("Hagenwiesenstr.");
break;
}
case 128733:
{
returnValue = F("Hagenwiesenweg");
break;
}
case 128734:
{
returnValue = F("Hagenwinkel");
break;
}
case 128735:
{
returnValue = F("Hagenwisch");
break;
}
case 128736:
{
returnValue = F("Hagenwörtstr.");
break;
}
case 128737:
{
returnValue = F("Hagenzeller Weg");
break;
}
case 128738:
{
returnValue = F("Hagenäcker");
break;
}
case 128739:
{
returnValue = F("Hagenäckerring");
break;
}
case 128740:
{
returnValue = F("Hagenäckerstr.");
break;
}
case 128741:
{
returnValue = F("Hagenäckerweg");
break;
}
case 128742:
{
returnValue = F("Hager");
break;
}
case 128743:
{
returnValue = F("Hager Feld");
break;
}
case 128744:
{
returnValue = F("Hageresch");
break;
}
case 128745:
{
returnValue = F("Hagermarscher Str.");
break;
}
case 128746:
{
returnValue = F("Hagershof");
break;
}
case 128747:
{
returnValue = F("Hagershofer Weg");
break;
}
case 128748:
{
returnValue = F("Hagerstownstr.");
break;
}
case 128749:
{
returnValue = F("Hagerstr.");
break;
}
case 128750:
{
returnValue = F("Hagertshausen");
break;
}
case 128751:
{
returnValue = F("Hagerweg");
break;
}
case 128752:
{
returnValue = F("Hagestr.");
break;
}
case 128753:
{
returnValue = F("Hagetshof");
break;
}
case 128754:
{
returnValue = F("Hageweder Kirchweg");
break;
}
case 128755:
{
returnValue = F("Hageweg");
break;
}
case 128756:
{
returnValue = F("Hagewick");
break;
}
case 128757:
{
returnValue = F("Haggasse");
break;
}
case 128758:
{
returnValue = F("Haggeneyweg");
break;
}
case 128759:
{
returnValue = F("Haggenmillerstr.");
break;
}
case 128760:
{
returnValue = F("Haggenmooser Str.");
break;
}
case 128761:
{
returnValue = F("Haggertystr.");
break;
}
case 128762:
{
returnValue = F("Haggn");
break;
}
case 128763:
{
returnValue = F("Haggraben");
break;
}
case 128764:
{
returnValue = F("Haggweg");
break;
}
case 128765:
{
returnValue = F("Haggässle");
break;
}
case 128766:
{
returnValue = F("Haghof");
break;
}
case 128767:
{
returnValue = F("Hagholz");
break;
}
case 128768:
{
returnValue = F("Hagiusring");
break;
}
case 128769:
{
returnValue = F("Hagkestr.");
break;
}
case 128770:
{
returnValue = F("Hagl Höhe");
break;
}
case 128771:
{
returnValue = F("Hagleite");
break;
}
case 128772:
{
returnValue = F("Haglweg");
break;
}
case 128773:
{
returnValue = F("Hagmanngarten");
break;
}
case 128774:
{
returnValue = F("Hagmattstr.");
break;
}
case 128775:
{
returnValue = F("Hagmühleweg");
break;
}
case 128776:
{
returnValue = F("Hagnachstr.");
break;
}
case 128777:
{
returnValue = F("Hagnachweg");
break;
}
case 128778:
{
returnValue = F("Hagnauer Str.");
break;
}
case 128779:
{
returnValue = F("Hagnauer Weg");
break;
}
case 128780:
{
returnValue = F("Hagnaufurter Str.");
break;
}
case 128781:
{
returnValue = F("Hagnberg");
break;
}
case 128782:
{
returnValue = F("Hagnbergstr.");
break;
}
case 128783:
{
returnValue = F("Hagngasse");
break;
}
case 128784:
{
returnValue = F("Hagnzeller Str.");
break;
}
case 128785:
{
returnValue = F("Hagoltweg");
break;
}
case 128786:
{
returnValue = F("Hagrainer Str.");
break;
}
case 128787:
{
returnValue = F("Hagrainstr.");
break;
}
case 128788:
{
returnValue = F("Hagring");
break;
}
case 128789:
{
returnValue = F("Hagsbach");
break;
}
case 128790:
{
returnValue = F("Hagsbergweg");
break;
}
case 128791:
{
returnValue = F("Hagsbronner Str.");
break;
}
case 128792:
{
returnValue = F("Hagsbucher Weg");
break;
}
case 128793:
{
returnValue = F("Hagschachenweg");
break;
}
case 128794:
{
returnValue = F("Hagsche Poort");
break;
}
case 128795:
{
returnValue = F("Hagsche Str.");
break;
}
case 128796:
{
returnValue = F("Hagsfelder Allee");
break;
}
case 128797:
{
returnValue = F("Hagsfelder Lindenplatz");
break;
}
case 128798:
{
returnValue = F("Hagsfelder Weg");
break;
}
case 128799:
{
returnValue = F("Hagsgarten");
break;
}
case 128800:
{
returnValue = F("Hagstaffel");
break;
}
case 128801:
{
returnValue = F("Hagsteige");
break;
}
case 128802:
{
returnValue = F("Hagstolz");
break;
}
case 128803:
{
returnValue = F("Hagstr.");
break;
}
case 128804:
{
returnValue = F("Hagsweg");
break;
}
case 128805:
{
returnValue = F("Hagtor");
break;
}
case 128806:
{
returnValue = F("Hagwaldstr.");
break;
}
case 128807:
{
returnValue = F("Hagweg");
break;
}
case 128808:
{
returnValue = F("Hagwiesenweg");
break;
}
case 128809:
{
returnValue = F("Hagwinkel");
break;
}
case 128810:
{
returnValue = F("Hagwäldle");
break;
}
case 128811:
{
returnValue = F("Hagzinkenweg");
break;
}
case 128812:
{
returnValue = F("Hagäcker");
break;
}
case 128813:
{
returnValue = F("Hagäckerstr.");
break;
}
case 128814:
{
returnValue = F("Hagäckerweg");
break;
}
case 128815:
{
returnValue = F("Hahenweg");
break;
}
case 128816:
{
returnValue = F("Hahgasse");
break;
}
case 128817:
{
returnValue = F("Hahilingastr.");
break;
}
case 128818:
{
returnValue = F("Hahingstr.");
break;
}
case 128819:
{
returnValue = F("Hahingusstr.");
break;
}
case 128820:
{
returnValue = F("Hahlbergstr.");
break;
}
case 128821:
{
returnValue = F("Hahlebruchschneise");
break;
}
case 128822:
{
returnValue = F("Hahlener Str.");
break;
}
case 128823:
{
returnValue = F("Hahlengasse");
break;
}
case 128824:
{
returnValue = F("Hahlenweg");
break;
}
case 128825:
{
returnValue = F("Hahler Dorfstr.");
break;
}
case 128826:
{
returnValue = F("Hahler Plaggenweg");
break;
}
case 128827:
{
returnValue = F("Hahler Str.");
break;
}
case 128828:
{
returnValue = F("Hahler Weg");
break;
}
case 128829:
{
returnValue = F("Hahlerweg");
break;
}
case 128830:
{
returnValue = F("Hahlestr.");
break;
}
case 128831:
{
returnValue = F("Hahletalstr.");
break;
}
case 128832:
{
returnValue = F("Hahleweg");
break;
}
case 128833:
{
returnValue = F("Hahlgarten");
break;
}
case 128834:
{
returnValue = F("Hahlgartenstr.");
break;
}
case 128835:
{
returnValue = F("Hahlgartenweg");
break;
}
case 128836:
{
returnValue = F("Hahlgasse");
break;
}
case 128837:
{
returnValue = F("Hahloplatz");
break;
}
case 128838:
{
returnValue = F("Hahlstr.");
break;
}
case 128839:
{
returnValue = F("Hahlweg");
break;
}
case 128840:
{
returnValue = F("Hahlwegtrift");
break;
}
case 128841:
{
returnValue = F("Hahmberg");
break;
}
case 128842:
{
returnValue = F("Hahmbergstr.");
break;
}
case 128843:
{
returnValue = F("Hahmbühl");
break;
}
case 128844:
{
returnValue = F("Hahn");
break;
}
case 128845:
{
returnValue = F("Hahn'sche Insel");
break;
}
case 128846:
{
returnValue = F("Hahn-Leite");
break;
}
case 128847:
{
returnValue = F("Hahnacker");
break;
}
case 128848:
{
returnValue = F("Hahnackerstr.");
break;
}
case 128849:
{
returnValue = F("Hahnbach");
break;
}
case 128850:
{
returnValue = F("Hahnbachweg");
break;
}
case 128851:
{
returnValue = F("Hahnbergblick");
break;
}
case 128852:
{
returnValue = F("Hahnbergschneise");
break;
}
case 128853:
{
returnValue = F("Hahnbergstr.");
break;
}
case 128854:
{
returnValue = F("Hahnbergsweg");
break;
}
case 128855:
{
returnValue = F("Hahnbergweg");
break;
}
case 128856:
{
returnValue = F("Hahnbeuler Kreuz");
break;
}
case 128857:
{
returnValue = F("Hahnbittstr.");
break;
}
case 128858:
{
returnValue = F("Hahnbitzenweg");
break;
}
case 128859:
{
returnValue = F("Hahnbruch");
break;
}
case 128860:
{
returnValue = F("Hahnbruchweg");
break;
}
case 128861:
{
returnValue = F("Hahnbrunner Str.");
break;
}
case 128862:
{
returnValue = F("Hahnbucher Str.");
break;
}
case 128863:
{
returnValue = F("Hahnburg");
break;
}
case 128864:
{
returnValue = F("Hahnbusch");
break;
}
case 128865:
{
returnValue = F("Hahnbuschweg");
break;
}
case 128866:
{
returnValue = F("Hahnböschel");
break;
}
case 128867:
{
returnValue = F("Hahnbüchelsweg");
break;
}
case 128868:
{
returnValue = F("Hahndorfer Landwehr");
break;
}
case 128869:
{
returnValue = F("Hahndorfer Str.");
break;
}
case 128870:
{
returnValue = F("Hahne-Schorsch-Platz");
break;
}
case 128871:
{
returnValue = F("Hahnebalzer Weg");
break;
}
case 128872:
{
returnValue = F("Hahnebalzstr.");
break;
}
case 128873:
{
returnValue = F("Hahneberger Weg");
break;
}
case 128874:
{
returnValue = F("Hahnebergstr.");
break;
}
case 128875:
{
returnValue = F("Hahneborn");
break;
}
case 128876:
{
returnValue = F("Hahnebrink");
break;
}
case 128877:
{
returnValue = F("Hahneburg");
break;
}
case 128878:
{
returnValue = F("Hahnee Päädee");
break;
}
case 128879:
{
returnValue = F("Hahnefehn");
break;
}
case 128880:
{
returnValue = F("Hahnefelder Str.");
break;
}
case 128881:
{
returnValue = F("Hahnegass");
break;
}
case 128882:
{
returnValue = F("Hahnegasse");
break;
}
case 128883:
{
returnValue = F("Hahneichstr.");
break;
}
case 128884:
{
returnValue = F("Hahnemannsplatz");
break;
}
case 128885:
{
returnValue = F("Hahnemannstr.");
break;
}
case 128886:
{
returnValue = F("Hahnemannweg");
break;
}
case 128887:
{
returnValue = F("Hahnenacker");
break;
}
case 128888:
{
returnValue = F("Hahnenbacher Str.");
break;
}
case 128889:
{
returnValue = F("Hahnenbachstr.");
break;
}
case 128890:
{
returnValue = F("Hahnenbalz");
break;
}
case 128891:
{
returnValue = F("Hahnenbauersweg");
break;
}
case 128892:
{
returnValue = F("Hahnenbecke");
break;
}
case 128893:
{
returnValue = F("Hahnenberg");
break;
}
case 128894:
{
returnValue = F("Hahnenberger Diek");
break;
}
case 128895:
{
returnValue = F("Hahnenberger Str.");
break;
}
case 128896:
{
returnValue = F("Hahnenberger Weg");
break;
}
case 128897:
{
returnValue = F("Hahnenbergerweg");
break;
}
case 128898:
{
returnValue = F("Hahnenbergsteige");
break;
}
case 128899:
{
returnValue = F("Hahnenbergstr.");
break;
}
case 128900:
{
returnValue = F("Hahnenbergsweg");
break;
}
case 128901:
{
returnValue = F("Hahnenbergweg");
break;
}
case 128902:
{
returnValue = F("Hahnenbichlstr.");
break;
}
case 128903:
{
returnValue = F("Hahnenbihlweg");
break;
}
case 128904:
{
returnValue = F("Hahnenblecher");
break;
}
case 128905:
{
returnValue = F("Hahnenbreite");
break;
}
case 128906:
{
returnValue = F("Hahnenbrok");
break;
}
case 128907:
{
returnValue = F("Hahnenbrunnen");
break;
}
case 128908:
{
returnValue = F("Hahnenburg");
break;
}
case 128909:
{
returnValue = F("Hahnenburgweg");
break;
}
case 128910:
{
returnValue = F("Hahnenbusch");
break;
}
case 128911:
{
returnValue = F("Hahnenbuschstr.");
break;
}
case 128912:
{
returnValue = F("Hahnenbuschweg");
break;
}
case 128913:
{
returnValue = F("Hahnenbügele");
break;
}
case 128914:
{
returnValue = F("Hahnenbühl");
break;
}
case 128915:
{
returnValue = F("Hahnendamm");
break;
}
case 128916:
{
returnValue = F("Hahnendyk");
break;
}
case 128917:
{
returnValue = F("Hahneneck");
break;
}
case 128918:
{
returnValue = F("Hahnenfalz 23 a");
break;
}
case 128919:
{
returnValue = F("Hahnenfalzweg");
break;
}
case 128920:
{
returnValue = F("Hahnenfeld");
break;
}
case 128921:
{
returnValue = F("Hahnenfelder Weg");
break;
}
case 128922:
{
returnValue = F("Hahnenfeldstr.");
break;
}
case 128923:
{
returnValue = F("Hahnenfurth");
break;
}
case 128924:
{
returnValue = F("Hahnenfurther Str.");
break;
}
case 128925:
{
returnValue = F("Hahnenfurther Weg");
break;
}
case 128926:
{
returnValue = F("Hahnenfußweg");
break;
}
case 128927:
{
returnValue = F("Hahnenfähre");
break;
}
case 128928:
{
returnValue = F("Hahnengarten");
break;
}
case 128929:
{
returnValue = F("Hahnengasse");
break;
}
case 128930:
{
returnValue = F("Hahnengrasweg");
break;
}
case 128931:
{
returnValue = F("Hahnengrund");
break;
}
case 128932:
{
returnValue = F("Hahnengrundstr.");
break;
}
case 128933:
{
returnValue = F("Hahnengrundweg");
break;
}
case 128934:
{
returnValue = F("Hahnengässchen");
break;
}
case 128935:
{
returnValue = F("Hahnengässle");
break;
}
case 128936:
{
returnValue = F("Hahnengäßlein");
break;
}
case 128937:
{
returnValue = F("Hahnenhaus");
break;
}
case 128938:
{
returnValue = F("Hahnenhauser Feld");
break;
}
case 128939:
{
returnValue = F("Hahnenhausstr.");
break;
}
case 128940:
{
returnValue = F("Hahnenhausweg");
break;
}
case 128941:
{
returnValue = F("Hahnenhof");
break;
}
case 128942:
{
returnValue = F("Hahnenhook");
break;
}
case 128943:
{
returnValue = F("Hahnenhorst");
break;
}
case 128944:
{
returnValue = F("Hahnenhügel");
break;
}
case 128945:
{
returnValue = F("Hahnenhügelbrücke");
break;
}
case 128946:
{
returnValue = F("Hahnenkammhof");
break;
}
case 128947:
{
returnValue = F("Hahnenkammstr.");
break;
}
case 128948:
{
returnValue = F("Hahnenkammweg");
break;
}
case 128949:
{
returnValue = F("Hahnenkamp");
break;
}
case 128950:
{
returnValue = F("Hahnenkampsfeld");
break;
}
case 128951:
{
returnValue = F("Hahnenkampstr.");
break;
}
case 128952:
{
returnValue = F("Hahnenkaten");
break;
}
case 128953:
{
returnValue = F("Hahnenkleer Bergstr.");
break;
}
case 128954:
{
returnValue = F("Hahnenkleer Str.");
break;
}
case 128955:
{
returnValue = F("Hahnenkleestr.");
break;
}
case 128956:
{
returnValue = F("Hahnenkleeweg");
break;
}
case 128957:
{
returnValue = F("Hahnenklinge");
break;
}
case 128958:
{
returnValue = F("Hahnenkopf");
break;
}
case 128959:
{
returnValue = F("Hahnenkopfstr.");
break;
}
case 128960:
{
returnValue = F("Hahnenkoppel");
break;
}
case 128961:
{
returnValue = F("Hahnenkratzweg");
break;
}
case 128962:
{
returnValue = F("Hahnenkämpe");
break;
}
case 128963:
{
returnValue = F("Hahnenmoorstr.");
break;
}
case 128964:
{
returnValue = F("Hahnenmoorsweg");
break;
}
case 128965:
{
returnValue = F("Hahnenmoos");
break;
}
case 128966:
{
returnValue = F("Hahnenmoosweg");
break;
}
case 128967:
{
returnValue = F("Hahnenmühle");
break;
}
case 128968:
{
returnValue = F("Hahnenmühlenweg");
break;
}
case 128969:
{
returnValue = F("Hahnennest");
break;
}
case 128970:
{
returnValue = F("Hahnennester Str.");
break;
}
case 128971:
{
returnValue = F("Hahnenpatt");
break;
}
case 128972:
{
returnValue = F("Hahnenpfad");
break;
}
case 128973:
{
returnValue = F("Hahnenpfädchen");
break;
}
case 128974:
{
returnValue = F("Hahnenplatz");
break;
}
case 128975:
{
returnValue = F("Hahnenrückstr.");
break;
}
case 128976:
{
returnValue = F("Hahnenschnabelweg");
break;
}
case 128977:
{
returnValue = F("Hahnenschneise");
break;
}
case 128978:
{
returnValue = F("Hahnenschrei");
break;
}
case 128979:
{
returnValue = F("Hahnenseestr.");
break;
}
case 128980:
{
returnValue = F("Hahnenseifener Str.");
break;
}
case 128981:
{
returnValue = F("Hahnensteg");
break;
}
case 128982:
{
returnValue = F("Hahnensteig");
break;
}
case 128983:
{
returnValue = F("Hahnensteige");
break;
}
case 128984:
{
returnValue = F("Hahnenstein");
break;
}
case 128985:
{
returnValue = F("Hahnenstr.");
break;
}
case 128986:
{
returnValue = F("Hahnentalstr.");
break;
}
case 128987:
{
returnValue = F("Hahnentange");
break;
}
case 128988:
{
returnValue = F("Hahnentanger Str.");
break;
}
case 128989:
{
returnValue = F("Hahnentanzweg");
break;
}
case 128990:
{
returnValue = F("Hahnenteichstr.");
break;
}
case 128991:
{
returnValue = F("Hahnentrift");
break;
}
case 128992:
{
returnValue = F("Hahnenwaldstr.");
break;
}
case 128993:
{
returnValue = F("Hahnenweg");
break;
}
case 128994:
{
returnValue = F("Hahnenweide");
break;
}
case 128995:
{
returnValue = F("Hahnenweiler");
break;
}
case 128996:
{
returnValue = F("Hahnenweilerstr.");
break;
}
case 128997:
{
returnValue = F("Hahnenwiese");
break;
}
case 128998:
{
returnValue = F("Hahnenwinkel");
break;
}
case 128999:
{
returnValue = F("Hahnenäcker");
break;
}
case 129000:
{
returnValue = F("Hahnenäckerstr.");
break;
}
case 129001:
{
returnValue = F("Hahnepfalz");
break;
}
case 129002:
{
returnValue = F("Hahner Berg");
break;
}
case 129003:
{
returnValue = F("Hahner Hofstr.");
break;
}
case 129004:
{
returnValue = F("Hahner Knippchen");
break;
}
case 129005:
{
returnValue = F("Hahner Str.");
break;
}
case 129006:
{
returnValue = F("Hahner Weg");
break;
}
case 129007:
{
returnValue = F("Hahnerberger Str.");
break;
}
case 129008:
{
returnValue = F("Hahnerfeld");
break;
}
case 129009:
{
returnValue = F("Hahnerheide");
break;
}
case 129010:
{
returnValue = F("Hahnerhoffeld");
break;
}
case 129011:
{
returnValue = F("Hahnerhofstr.");
break;
}
case 129012:
{
returnValue = F("Hahnermoor");
break;
}
case 129013:
{
returnValue = F("Hahnermoorweg");
break;
}
case 129014:
{
returnValue = F("Hahnerstr.");
break;
}
case 129015:
{
returnValue = F("Hahnertsrain");
break;
}
case 129016:
{
returnValue = F("Hahnerweg");
break;
}
case 129017:
{
returnValue = F("Hahnesch");
break;
}
case 129018:
{
returnValue = F("Hahnestr.");
break;
}
case 129019:
{
returnValue = F("Hahnetalweg");
break;
}
case 129020:
{
returnValue = F("Hahnewall");
break;
}
case 129021:
{
returnValue = F("Hahnfeldstr.");
break;
}
case 129022:
{
returnValue = F("Hahngarten");
break;
}
case 129023:
{
returnValue = F("Hahngartenstr.");
break;
}
case 129024:
{
returnValue = F("Hahngasse");
break;
}
case 129025:
{
returnValue = F("Hahngraben");
break;
}
case 129026:
{
returnValue = F("Hahngreding");
break;
}
case 129027:
{
returnValue = F("Hahngrundstr.");
break;
}
case 129028:
{
returnValue = F("Hahnheide");
break;
}
case 129029:
{
returnValue = F("Hahnheider Weg");
break;
}
case 129030:
{
returnValue = F("Hahnheimer Str.");
break;
}
case 129031:
{
returnValue = F("Hahnhof");
break;
}
case 129032:
{
returnValue = F("Hahnhofer Weg");
break;
}
case 129033:
{
returnValue = F("Hahnhofstr.");
break;
}
case 129034:
{
returnValue = F("Hahnhorster Str.");
break;
}
case 129035:
{
returnValue = F("Hahnkamp");
break;
}
case 129036:
{
returnValue = F("Hahnknüll");
break;
}
case 129037:
{
returnValue = F("Hahnkopfstr.");
break;
}
case 129038:
{
returnValue = F("Hahnl-Geräumt");
break;
}
case 129039:
{
returnValue = F("Hahnleite");
break;
}
case 129040:
{
returnValue = F("Hahnmühlweg");
break;
}
case 129041:
{
returnValue = F("Hahnpfadschneise");
break;
}
case 129042:
{
returnValue = F("Hahnplatz");
break;
}
case 129043:
{
returnValue = F("Hahnrather Busch");
break;
}
case 129044:
{
returnValue = F("Hahnreuth");
break;
}
case 129045:
{
returnValue = F("Hahnreuther Str.");
break;
}
case 129046:
{
returnValue = F("Hahnrodsweg");
break;
}
case 129047:
{
returnValue = F("Hahnsbrunnenweg");
break;
}
case 129048:
{
returnValue = F("Hahnseifenstr.");
break;
}
case 129049:
{
returnValue = F("Hahnsfeld");
break;
}
case 129050:
{
returnValue = F("Hahnsteig");
break;
}
case 129051:
{
returnValue = F("Hahnsteinhof");
break;
}
case 129052:
{
returnValue = F("Hahnsteinstr.");
break;
}
case 129053:
{
returnValue = F("Hahnsteinweg");
break;
}
case 129054:
{
returnValue = F("Hahnstr.");
break;
}
case 129055:
{
returnValue = F("Hahnstrauch");
break;
}
case 129056:
{
returnValue = F("Hahnstätter Str.");
break;
}
case 129057:
{
returnValue = F("Hahnstückenweg");
break;
}
case 129058:
{
returnValue = F("Hahnsweide");
break;
}
case 129059:
{
returnValue = F("Hahntrift");
break;
}
case 129060:
{
returnValue = F("Hahnwaldweg");
break;
}
case 129061:
{
returnValue = F("Hahnweg");
break;
}
case 129062:
{
returnValue = F("Hahnweidstr.");
break;
}
case 129063:
{
returnValue = F("Hahnweiler Str.");
break;
}
case 129064:
{
returnValue = F("Hahnweilerhof");
break;
}
case 129065:
{
returnValue = F("Hahnweilerstr.");
break;
}
case 129066:
{
returnValue = F("Hahnwerder");
break;
}
case 129067:
{
returnValue = F("Hahnwiese");
break;
}
case 129068:
{
returnValue = F("Hahnwiesenschneise");
break;
}
case 129069:
{
returnValue = F("Hahnwiesenweg");
break;
}
case 129070:
{
returnValue = F("Hahnäcker");
break;
}
case 129071:
{
returnValue = F("Haholdstr.");
break;
}
case 129072:
{
returnValue = F("Haholdweg");
break;
}
case 129073:
{
returnValue = F("Haholtstr.");
break;
}
case 129074:
{
returnValue = F("Hahrachstr.");
break;
}
case 129075:
{
returnValue = F("Hahrwiesenweg");
break;
}
case 129076:
{
returnValue = F("Hahscheid");
break;
}
case 129077:
{
returnValue = F("Hahäuser Str.");
break;
}
case 129078:
{
returnValue = F("Haibacher Schweiz");
break;
}
case 129079:
{
returnValue = F("Haibacher Str.");
break;
}
case 129080:
{
returnValue = F("Haibachstr.");
break;
}
case 129081:
{
returnValue = F("Haibe");
break;
}
case 129082:
{
returnValue = F("Haibeckenstr.");
break;
}
case 129083:
{
returnValue = F("Haibergstr.");
break;
}
case 129084:
{
returnValue = F("Haibergäcker");
break;
}
case 129085:
{
returnValue = F("Haibühler Str.");
break;
}
case 129086:
{
returnValue = F("Haichera");
break;
}
case 129087:
{
returnValue = F("Haichostr.");
break;
}
case 129088:
{
returnValue = F("Haickweg");
break;
}
case 129089:
{
returnValue = F("Haid");
break;
}
case 129090:
{
returnValue = F("Haid Park");
break;
}
case 129091:
{
returnValue = F("Haid bei Pitzling");
break;
}
case 129092:
{
returnValue = F("Haid-und-Neu-Str.");
break;
}
case 129093:
{
returnValue = F("Haidacher Str.");
break;
}
case 129094:
{
returnValue = F("Haidacher Talweg");
break;
}
case 129095:
{
returnValue = F("Haidachstr.");
break;
}
case 129096:
{
returnValue = F("Haidachweg");
break;
}
case 129097:
{
returnValue = F("Haidackerstr.");
break;
}
case 129098:
{
returnValue = F("Haidaer Str.");
break;
}
case 129099:
{
returnValue = F("Haidaer Weg");
break;
}
case 129100:
{
returnValue = F("Haidaerstr.");
break;
}
case 129101:
{
returnValue = F("Haidanger");
break;
}
case 129102:
{
returnValue = F("Haidauer Str.");
break;
}
case 129103:
{
returnValue = F("Haidauer Weg");
break;
}
case 129104:
{
returnValue = F("Haidbachstr.");
break;
}
case 129105:
{
returnValue = F("Haidbarg");
break;
}
case 129106:
{
returnValue = F("Haidberg");
break;
}
case 129107:
{
returnValue = F("Haidberger Str.");
break;
}
case 129108:
{
returnValue = F("Haidbergstr.");
break;
}
case 129109:
{
returnValue = F("Haidbergweg");
break;
}
case 129110:
{
returnValue = F("Haidbichler Str.");
break;
}
case 129111:
{
returnValue = F("Haidbreite");
break;
}
case 129112:
{
returnValue = F("Haidbrook");
break;
}
case 129113:
{
returnValue = F("Haidbrookweg");
break;
}
case 129114:
{
returnValue = F("Haidbuckel");
break;
}
case 129115:
{
returnValue = F("Haidchenweg");
break;
}
case 129116:
{
returnValue = F("Haide");
break;
}
case 129117:
{
returnValue = F("Haide Feld");
break;
}
case 129118:
{
returnValue = F("Haideacker");
break;
}
case 129119:
{
returnValue = F("Haidebachstr.");
break;
}
case 129120:
{
returnValue = F("Haidebergstr.");
break;
}
case 129121:
{
returnValue = F("Haidebirnbaumweg");
break;
}
case 129122:
{
returnValue = F("Haideck");
break;
}
case 129123:
{
returnValue = F("Haidecker Str.");
break;
}
case 129124:
{
returnValue = F("Haideckerstr.");
break;
}
case 129125:
{
returnValue = F("Haidefeld");
break;
}
case 129126:
{
returnValue = F("Haidegasse");
break;
}
case 129127:
{
returnValue = F("Haidehang");
break;
}
case 129128:
{
returnValue = F("Haidekamp");
break;
}
case 129129:
{
returnValue = F("Haidelausigker Weg");
break;
}
case 129130:
{
returnValue = F("Haidelbacher Str.");
break;
}
case 129131:
{
returnValue = F("Haidelmoosweg");
break;
}
case 129132:
{
returnValue = F("Haidelweg");
break;
}
case 129133:
{
returnValue = F("Haidematt");
break;
}
case 129134:
{
returnValue = F("Haidemühler Str.");
break;
}
case 129135:
{
returnValue = F("Haidemühler Weg");
break;
}
case 129136:
{
returnValue = F("Haidemühlstr.");
break;
}
case 129137:
{
returnValue = F("Haidenaab");
break;
}
case 129138:
{
returnValue = F("Haidenaabweg");
break;
}
case 129139:
{
returnValue = F("Haidenaupark");
break;
}
case 129140:
{
returnValue = F("Haidenauplatz");
break;
}
case 129141:
{
returnValue = F("Haidenbucherstr.");
break;
}
case 129142:
{
returnValue = F("Haidenbuckelweg");
break;
}
case 129143:
{
returnValue = F("Haidenburger Str.");
break;
}
case 129144:
{
returnValue = F("Haidenburgring");
break;
}
case 129145:
{
returnValue = F("Haidengrün");
break;
}
case 129146:
{
returnValue = F("Haidengrüner Str.");
break;
}
case 129147:
{
returnValue = F("Haidengrüner Weg");
break;
}
case 129148:
{
returnValue = F("Haidengrünerweg");
break;
}
case 129149:
{
returnValue = F("Haidenhof");
break;
}
case 129150:
{
returnValue = F("Haidenhofstr.");
break;
}
case 129151:
{
returnValue = F("Haidenholzstr.");
break;
}
case 129152:
{
returnValue = F("Haidenkofen");
break;
}
case 129153:
{
returnValue = F("Haidenkofener Str.");
break;
}
case 129154:
{
returnValue = F("Haidenrainweg");
break;
}
case 129155:
{
returnValue = F("Haidenäcker Str.");
break;
}
case 129156:
{
returnValue = F("Haider Str.");
break;
}
case 129157:
{
returnValue = F("Haider Weg");
break;
}
case 129158:
{
returnValue = F("Haiderfeldstr.");
break;
}
case 129159:
{
returnValue = F("Haidersberger Str.");
break;
}
case 129160:
{
returnValue = F("Haiderstr.");
break;
}
case 129161:
{
returnValue = F("Haiderweg");
break;
}
case 129162:
{
returnValue = F("Haideschachen");
break;
}
case 129163:
{
returnValue = F("Haidestr.");
break;
}
case 129164:
{
returnValue = F("Haidestücken");
break;
}
case 129165:
{
returnValue = F("Haideweg");
break;
}
case 129166:
{
returnValue = F("Haideäcker");
break;
}
case 129167:
{
returnValue = F("Haidfeld");
break;
}
case 129168:
{
returnValue = F("Haidfeldstr.");
break;
}
case 129169:
{
returnValue = F("Haidfeldweg");
break;
}
case 129170:
{
returnValue = F("Haidforst");
break;
}
case 129171:
{
returnValue = F("Haidgarten");
break;
}
case 129172:
{
returnValue = F("Haidgasse");
break;
}
case 129173:
{
returnValue = F("Haidgauer Str.");
break;
}
case 129174:
{
returnValue = F("Haidgesweg");
break;
}
case 129175:
{
returnValue = F("Haidgraben");
break;
}
case 129176:
{
returnValue = F("Haidgrabenweg");
break;
}
case 129177:
{
returnValue = F("Haidgrund");
break;
}
case 129178:
{
returnValue = F("Haidham");
break;
}
case 129179:
{
returnValue = F("Haidhauser Str.");
break;
}
case 129180:
{
returnValue = F("Haidhof");
break;
}
case 129181:
{
returnValue = F("Haidhofer Str.");
break;
}
case 129182:
{
returnValue = F("Haidhofweg");
break;
}
case 129183:
{
returnValue = F("Haidholzstr.");
break;
}
case 129184:
{
returnValue = F("Haidhäuser");
break;
}
case 129185:
{
returnValue = F("Haidhäusl");
break;
}
case 129186:
{
returnValue = F("Haidhügel");
break;
}
case 129187:
{
returnValue = F("Haidhügelweg");
break;
}
case 129188:
{
returnValue = F("Haidigestr.");
break;
}
case 129189:
{
returnValue = F("Haidjer Pad");
break;
}
case 129190:
{
returnValue = F("Haidkamp");
break;
}
case 129191:
{
returnValue = F("Haidkoppel");
break;
}
case 129192:
{
returnValue = F("Haidkrugchaussee");
break;
}
case 129193:
{
returnValue = F("Haidkrugsweg");
break;
}
case 129194:
{
returnValue = F("Haidkuhle");
break;
}
case 129195:
{
returnValue = F("Haidland");
break;
}
case 129196:
{
returnValue = F("Haidlandweg");
break;
}
case 129197:
{
returnValue = F("Haidlenstr.");
break;
}
case 129198:
{
returnValue = F("Haidlfinger Str.");
break;
}
case 129199:
{
returnValue = F("Haidlhängstr.");
break;
}
case 129200:
{
returnValue = F("Haidlinger Str.");
break;
}
case 129201:
{
returnValue = F("Haidlinger Weg");
break;
}
case 129202:
{
returnValue = F("Haidlinsgasse");
break;
}
case 129203:
{
returnValue = F("Haidloh");
break;
}
case 129204:
{
returnValue = F("Haidlstr.");
break;
}
case 129205:
{
returnValue = F("Haidmoor");
break;
}
case 129206:
{
returnValue = F("Haidmühl");
break;
}
case 129207:
{
returnValue = F("Haidmühlenweg");
break;
}
case 129208:
{
returnValue = F("Haidmühlstr.");
break;
}
case 129209:
{
returnValue = F("Haidmühlweg");
break;
}
case 129210:
{
returnValue = F("Haidplatz");
break;
}
case 129211:
{
returnValue = F("Haidrath");
break;
}
case 129212:
{
returnValue = F("Haidschlade");
break;
}
case 129213:
{
returnValue = F("Haidschlagweg");
break;
}
case 129214:
{
returnValue = F("Haidschwärze");
break;
}
case 129215:
{
returnValue = F("Haidsiedlung");
break;
}
case 129216:
{
returnValue = F("Haidsteiner Str.");
break;
}
case 129217:
{
returnValue = F("Haidsteiner Weg");
break;
}
case 129218:
{
returnValue = F("Haidsteinstr.");
break;
}
case 129219:
{
returnValue = F("Haidstr.");
break;
}
case 129220:
{
returnValue = F("Haidtanger");
break;
}
case 129221:
{
returnValue = F("Haidter Str.");
break;
}
case 129222:
{
returnValue = F("Haidter Weg");
break;
}
case 129223:
{
returnValue = F("Haidthöhe");
break;
}
case 129224:
{
returnValue = F("Haidwandstr.");
break;
}
case 129225:
{
returnValue = F("Haidwang");
break;
}
case 129226:
{
returnValue = F("Haidweg");
break;
}
case 129227:
{
returnValue = F("Haidweiherstr.");
break;
}
case 129228:
{
returnValue = F("Haidwiese");
break;
}
case 129229:
{
returnValue = F("Haidwiesenweg");
break;
}
case 129230:
{
returnValue = F("Haidwinkelweg");
break;
}
case 129231:
{
returnValue = F("Haidzinger Str.");
break;
}
case 129232:
{
returnValue = F("Haidäckerweg");
break;
}
case 129233:
{
returnValue = F("Haidösch");
break;
}
case 129234:
{
returnValue = F("Haienbachstr.");
break;
}
case 129235:
{
returnValue = F("Haienbachweg");
break;
}
case 129236:
{
returnValue = F("Haierbäumchen");
break;
}
case 129237:
{
returnValue = F("Haierner Str.");
break;
}
case 129238:
{
returnValue = F("Haierskopf");
break;
}
case 129239:
{
returnValue = F("Haierwaldstr.");
break;
}
case 129240:
{
returnValue = F("Haierweg");
break;
}
case 129241:
{
returnValue = F("Haieshausen");
break;
}
case 129242:
{
returnValue = F("Haifa-Allee");
break;
}
case 129243:
{
returnValue = F("Haifastr.");
break;
}
case 129244:
{
returnValue = F("Haifischweg");
break;
}
case 129245:
{
returnValue = F("Haigelbergstr.");
break;
}
case 129246:
{
returnValue = F("Haigelrain");
break;
}
case 129247:
{
returnValue = F("Haiger Str.");
break;
}
case 129248:
{
returnValue = F("Haigerer Str.");
break;
}
case 129249:
{
returnValue = F("Haigerlocher Str.");
break;
}
case 129250:
{
returnValue = F("Haigerlocher Weg");
break;
}
case 129251:
{
returnValue = F("Haigermooser Str.");
break;
}
case 129252:
{
returnValue = F("Haigernstr.");
break;
}
case 129253:
{
returnValue = F("Haigernäcker");
break;
}
case 129254:
{
returnValue = F("Haigerseelbacher Str.");
break;
}
case 129255:
{
returnValue = F("Haigerweg");
break;
}
case 129256:
{
returnValue = F("Haigramstr.");
break;
}
case 129257:
{
returnValue = F("Haigstr.");
break;
}
case 129258:
{
returnValue = F("Haigststaffel");
break;
}
case 129259:
{
returnValue = F("Haiholz");
break;
}
case 129260:
{
returnValue = F("Haihover Str.");
break;
}
case 129261:
{
returnValue = F("Hailanderstr.");
break;
}
case 129262:
{
returnValue = F("Hailerer Str.");
break;
}
case 129263:
{
returnValue = F("Hailerer Tal");
break;
}
case 129264:
{
returnValue = F("Hailerstr.");
break;
}
case 129265:
{
returnValue = F("Hailfinger Str.");
break;
}
case 129266:
{
returnValue = F("Hailfinger Weg");
break;
}
case 129267:
{
returnValue = F("Hailinger Str.");
break;
}
case 129268:
{
returnValue = F("Hailingstr.");
break;
}
case 129269:
{
returnValue = F("Hailtinger Str.");
break;
}
case 129270:
{
returnValue = F("Hailweg");
break;
}
case 129271:
{
returnValue = F("Haimarer Str.");
break;
}
case 129272:
{
returnValue = F("Haimbacher Str.");
break;
}
case 129273:
{
returnValue = F("Haimbachstr.");
break;
}
case 129274:
{
returnValue = F("Haimbachweg");
break;
}
case 129275:
{
returnValue = F("Haimbuchstr.");
break;
}
case 129276:
{
returnValue = F("Haimburger Str.");
break;
}
case 129277:
{
returnValue = F("Haimelstr.");
break;
}
case 129278:
{
returnValue = F("Haimendorfer Str.");
break;
}
case 129279:
{
returnValue = F("Haimendorfstr.");
break;
}
case 129280:
{
returnValue = F("Haimerlstr.");
break;
}
case 129281:
{
returnValue = F("Haimerslochweg");
break;
}
case 129282:
{
returnValue = F("Haimgartenstr.");
break;
}
case 129283:
{
returnValue = F("Haimhausener Str.");
break;
}
case 129284:
{
returnValue = F("Haimhausenstr.");
break;
}
case 129285:
{
returnValue = F("Haimhauser Str.");
break;
}
case 129286:
{
returnValue = F("Haimhauserstr.");
break;
}
case 129287:
{
returnValue = F("Haiminger Str.");
break;
}
case 129288:
{
returnValue = F("Haimkrogkoppel");
break;
}
case 129289:
{
returnValue = F("Haimoorweg");
break;
}
case 129290:
{
returnValue = F("Haimoweg");
break;
}
case 129291:
{
returnValue = F("Haimpfarricher Weg");
break;
}
case 129292:
{
returnValue = F("Haimrott");
break;
}
case 129293:
{
returnValue = F("Haimstweg");
break;
}
case 129294:
{
returnValue = F("Hain");
break;
}
case 129295:
{
returnValue = F("Hain der Kulturen - Bürgerpark Herrschaftsgärten");
break;
}
case 129296:
{
returnValue = F("Hain-Gründauer Str.");
break;
}
case 129297:
{
returnValue = F("Hainach");
break;
}
case 129298:
{
returnValue = F("Hainachstr.");
break;
}
case 129299:
{
returnValue = F("Hainacker");
break;
}
case 129300:
{
returnValue = F("Hainackerstr.");
break;
}
case 129301:
{
returnValue = F("Hainaer Dorfstr.");
break;
}
case 129302:
{
returnValue = F("Hainaer Heurichstr.");
break;
}
case 129303:
{
returnValue = F("Hainaer Mühlgasse");
break;
}
case 129304:
{
returnValue = F("Hainaer Str.");
break;
}
case 129305:
{
returnValue = F("Hainaer Weg");
break;
}
case 129306:
{
returnValue = F("Hainal");
break;
}
case 129307:
{
returnValue = F("Hainallee");
break;
}
case 129308:
{
returnValue = F("Hainanger");
break;
}
case 129309:
{
returnValue = F("Hainauer Str.");
break;
}
case 129310:
{
returnValue = F("Hainbach");
break;
}
case 129311:
{
returnValue = F("Hainbacher Str.");
break;
}
case 129312:
{
returnValue = F("Hainbachsgraben");
break;
}
case 129313:
{
returnValue = F("Hainbachstr.");
break;
}
case 129314:
{
returnValue = F("Hainbachsweg");
break;
}
case 129315:
{
returnValue = F("Hainbachtalstr.");
break;
}
case 129316:
{
returnValue = F("Hainbachweg");
break;
}
case 129317:
{
returnValue = F("Hainbachwiesen");
break;
}
case 129318:
{
returnValue = F("Hainbeekweg");
break;
}
case 129319:
{
returnValue = F("Hainberg");
break;
}
case 129320:
{
returnValue = F("Hainbergblick");
break;
}
case 129321:
{
returnValue = F("Hainbergbrücke");
break;
}
case 129322:
{
returnValue = F("Hainberger Feld");
break;
}
case 129323:
{
returnValue = F("Hainberger Weg");
break;
}
case 129324:
{
returnValue = F("Hainbergring");
break;
}
case 129325:
{
returnValue = F("Hainbergsee");
break;
}
case 129326:
{
returnValue = F("Hainbergshöhe");
break;
}
case 129327:
{
returnValue = F("Hainbergsteg");
break;
}
case 129328:
{
returnValue = F("Hainbergstr.");
break;
}
case 129329:
{
returnValue = F("Hainbergsweg");
break;
}
case 129330:
{
returnValue = F("Hainbergweg");
break;
}
case 129331:
{
returnValue = F("Hainbirkenweg");
break;
}
case 129332:
{
returnValue = F("Hainbornstr.");
break;
}
case 129333:
{
returnValue = F("Hainbrink");
break;
}
case 129334:
{
returnValue = F("Hainbrook");
break;
}
case 129335:
{
returnValue = F("Hainbruchstr.");
break;
}
case 129336:
{
returnValue = F("Hainbrunnenstr.");
break;
}
case 129337:
{
returnValue = F("Hainbrunner Str.");
break;
}
case 129338:
{
returnValue = F("Hainbrunner Weg");
break;
}
case 129339:
{
returnValue = F("Hainbuche");
break;
}
case 129340:
{
returnValue = F("Hainbuchehöheweg");
break;
}
case 129341:
{
returnValue = F("Hainbuchen");
break;
}
case 129342:
{
returnValue = F("Hainbuchenallee");
break;
}
case 129343:
{
returnValue = F("Hainbuchenbusch");
break;
}
case 129344:
{
returnValue = F("Hainbucheneck");
break;
}
case 129345:
{
returnValue = F("Hainbuchenfeld");
break;
}
case 129346:
{
returnValue = F("Hainbuchenhof");
break;
}
case 129347:
{
returnValue = F("Hainbuchenkamp");
break;
}
case 129348:
{
returnValue = F("Hainbuchennest");
break;
}
case 129349:
{
returnValue = F("Hainbuchenplatz");
break;
}
case 129350:
{
returnValue = F("Hainbuchenring");
break;
}
case 129351:
{
returnValue = F("Hainbuchenschneise");
break;
}
case 129352:
{
returnValue = F("Hainbuchenstieg");
break;
}
case 129353:
{
returnValue = F("Hainbuchenstr.");
break;
}
case 129354:
{
returnValue = F("Hainbuchenweg");
break;
}
case 129355:
{
returnValue = F("Hainbuchreut");
break;
}
case 129356:
{
returnValue = F("Hainbuchstr.");
break;
}
case 129357:
{
returnValue = F("Hainbuchweg");
break;
}
case 129358:
{
returnValue = F("Hainbundstr.");
break;
}
case 129359:
{
returnValue = F("Hainburger Weg");
break;
}
case 129360:
{
returnValue = F("Hainburgstr.");
break;
}
case 129361:
{
returnValue = F("Hainburgweg");
break;
}
case 129362:
{
returnValue = F("Hainbuschenberg");
break;
}
case 129363:
{
returnValue = F("Hainbuschweg");
break;
}
case 129364:
{
returnValue = F("Hainbüchelstr.");
break;
}
case 129365:
{
returnValue = F("Hainbüchter Str.");
break;
}
case 129366:
{
returnValue = F("Hainbüchter Weg");
break;
}
case 129367:
{
returnValue = F("Hainbühl");
break;
}
case 129368:
{
returnValue = F("Hainbüschen");
break;
}
case 129369:
{
returnValue = F("Hainchen");
break;
}
case 129370:
{
returnValue = F("Hainchenweg");
break;
}
case 129371:
{
returnValue = F("Haincher Str.");
break;
}
case 129372:
{
returnValue = F("Haincher Weg");
break;
}
case 129373:
{
returnValue = F("Hainchesmühle");
break;
}
case 129374:
{
returnValue = F("Haindlfing");
break;
}
case 129375:
{
returnValue = F("Haindlfinger Str.");
break;
}
case 129376:
{
returnValue = F("Haindlhof");
break;
}
case 129377:
{
returnValue = F("Haindling");
break;
}
case 129378:
{
returnValue = F("Haindlingbergstr.");
break;
}
case 129379:
{
returnValue = F("Haindlinger Weg");
break;
}
case 129380:
{
returnValue = F("Haindlstr.");
break;
}
case 129381:
{
returnValue = F("Haindorf");
break;
}
case 129382:
{
returnValue = F("Haindorfer Mühle");
break;
}
case 129383:
{
returnValue = F("Haindorfer Siedlung");
break;
}
case 129384:
{
returnValue = F("Haindorfer Str.");
break;
}
case 129385:
{
returnValue = F("Haindorfer Weg");
break;
}
case 129386:
{
returnValue = F("Haindorfsgasse");
break;
}
case 129387:
{
returnValue = F("Hainebergstr.");
break;
}
case 129388:
{
returnValue = F("Hainebuche");
break;
}
case 129389:
{
returnValue = F("Hainebuchenweg");
break;
}
case 129390:
{
returnValue = F("Hainefeld");
break;
}
case 129391:
{
returnValue = F("Hainekamp");
break;
}
case 129392:
{
returnValue = F("Hainenhübelstr.");
break;
}
case 129393:
{
returnValue = F("Hainenweg");
break;
}
case 129394:
{
returnValue = F("Hainer Chaussee");
break;
}
case 129395:
{
returnValue = F("Hainer Hof");
break;
}
case 129396:
{
returnValue = F("Hainer Hütte");
break;
}
case 129397:
{
returnValue = F("Hainer Pfad");
break;
}
case 129398:
{
returnValue = F("Hainer Seeblick");
break;
}
case 129399:
{
returnValue = F("Hainer Str.");
break;
}
case 129400:
{
returnValue = F("Hainer Trift");
break;
}
case 129401:
{
returnValue = F("Hainer Weg");
break;
}
case 129402:
{
returnValue = F("Hainerbachstr.");
break;
}
case 129403:
{
returnValue = F("Hainerbergweg");
break;
}
case 129404:
{
returnValue = F("Hainerbrückweg");
break;
}
case 129405:
{
returnValue = F("Hainerde");
break;
}
case 129406:
{
returnValue = F("Hainerpfad");
break;
}
case 129407:
{
returnValue = F("Hainersdorfer Weg");
break;
}
case 129408:
{
returnValue = F("Hainerstr.");
break;
}
case 129409:
{
returnValue = F("Hainersweg");
break;
}
case 129410:
{
returnValue = F("Hainerter Str.");
break;
}
case 129411:
{
returnValue = F("Hainertor");
break;
}
case 129412:
{
returnValue = F("Hainerweg");
break;
}
case 129413:
{
returnValue = F("Hainesgasse");
break;
}
case 129414:
{
returnValue = F("Hainesstr.");
break;
}
case 129415:
{
returnValue = F("Hainewalder Str.");
break;
}
case 129416:
{
returnValue = F("Haineweg");
break;
}
case 129417:
{
returnValue = F("Hainewinkel");
break;
}
case 129418:
{
returnValue = F("Hainfeld");
break;
}
case 129419:
{
returnValue = F("Hainfelder Hof");
break;
}
case 129420:
{
returnValue = F("Hainfelder Str.");
break;
}
case 129421:
{
returnValue = F("Hainfeldstr.");
break;
}
case 129422:
{
returnValue = F("Hainfeldweg");
break;
}
case 129423:
{
returnValue = F("Hainfelsblick");
break;
}
case 129424:
{
returnValue = F("Hainflügel");
break;
}
case 129425:
{
returnValue = F("Haingackerstr.");
break;
}
case 129426:
{
returnValue = F("Haingarten");
break;
}
case 129427:
{
returnValue = F("Haingartenstr.");
break;
}
case 129428:
{
returnValue = F("Haingasse");
break;
}
case 129429:
{
returnValue = F("Haingeraidestr.");
break;
}
case 129430:
{
returnValue = F("Haingeraideweg");
break;
}
case 129431:
{
returnValue = F("Haingersdorf");
break;
}
case 129432:
{
returnValue = F("Haingortstr.");
break;
}
case 129433:
{
returnValue = F("Haingraben");
break;
}
case 129434:
{
returnValue = F("Haingraben New-York-Str. Wiesbaden");
break;
}
case 129435:
{
returnValue = F("Haingrabengasse");
break;
}
case 129436:
{
returnValue = F("Haingrabenstr.");
break;
}
case 129437:
{
returnValue = F("Haingrabenweg");
break;
}
case 129438:
{
returnValue = F("Haingründauer Weg");
break;
}
case 129439:
{
returnValue = F("Haingrüner Str.");
break;
}
case 129440:
{
returnValue = F("Haingut");
break;
}
case 129441:
{
returnValue = F("Haingärten");
break;
}
case 129442:
{
returnValue = F("Haingärtenstr.");
break;
}
case 129443:
{
returnValue = F("Haingärtenweg");
break;
}
case 129444:
{
returnValue = F("Haingässchen");
break;
}
case 129445:
{
returnValue = F("Hainham");
break;
}
case 129446:
{
returnValue = F("Hainhaus");
break;
}
case 129447:
{
returnValue = F("Hainhausen");
break;
}
case 129448:
{
returnValue = F("Hainhausweg");
break;
}
case 129449:
{
returnValue = F("Hainhof");
break;
}
case 129450:
{
returnValue = F("Hainhofer Str.");
break;
}
case 129451:
{
returnValue = F("Hainhoferstr.");
break;
}
case 129452:
{
returnValue = F("Hainhofstr.");
break;
}
case 129453:
{
returnValue = F("Hainhofweg");
break;
}
case 129454:
{
returnValue = F("Hainholt");
break;
}
case 129455:
{
returnValue = F("Hainholter Ohr");
break;
}
case 129456:
{
returnValue = F("Hainholz");
break;
}
case 129457:
{
returnValue = F("Hainholzer Damm");
break;
}
case 129458:
{
returnValue = F("Hainholzer Schulstr.");
break;
}
case 129459:
{
returnValue = F("Hainholzfelde");
break;
}
case 129460:
{
returnValue = F("Hainholzgasse");
break;
}
case 129461:
{
returnValue = F("Hainholzsiedlung");
break;
}
case 129462:
{
returnValue = F("Hainholzstr.");
break;
}
case 129463:
{
returnValue = F("Hainholzweg");
break;
}
case 129464:
{
returnValue = F("Hainhoop");
break;
}
case 129465:
{
returnValue = F("Hainhoop - Brücke z. zt. nicht befahrbar - Sperrung!");
break;
}
case 129466:
{
returnValue = F("Hainhopenweg");
break;
}
case 129467:
{
returnValue = F("Hainhorster Weg");
break;
}
case 129468:
{
returnValue = F("Hainhorststrasse");
break;
}
case 129469:
{
returnValue = F("Hainhäuser Str.");
break;
}
case 129470:
{
returnValue = F("Hainhäuser Weg");
break;
}
case 129471:
{
returnValue = F("Hainhäuser-Seligenstädter Weg");
break;
}
case 129472:
{
returnValue = F("Hainhöfen");
break;
}
case 129473:
{
returnValue = F("Hainhölzer Str.");
break;
}
case 129474:
{
returnValue = F("Hainichblick");
break;
}
case 129475:
{
returnValue = F("Hainichen");
break;
}
case 129476:
{
returnValue = F("Hainichener Chaussee");
break;
}
case 129477:
{
returnValue = F("Hainichener Dorfstr.");
break;
}
case 129478:
{
returnValue = F("Hainichener Str.");
break;
}
case 129479:
{
returnValue = F("Hainichenstr.");
break;
}
case 129480:
{
returnValue = F("Hainicher Str.");
break;
}
case 129481:
{
returnValue = F("Hainicher Weg");
break;
}
case 129482:
{
returnValue = F("Hainichstr.");
break;
}
case 129483:
{
returnValue = F("Hainichte");
break;
}
case 129484:
{
returnValue = F("Hainichtengasse");
break;
}
case 129485:
{
returnValue = F("Hainichweg");
break;
}
case 129486:
{
returnValue = F("Hainigstr.");
break;
}
case 129487:
{
returnValue = F("Hainigweg");
break;
}
case 129488:
{
returnValue = F("Hainkamp");
break;
}
case 129489:
{
returnValue = F("Hainkhörnstr.");
break;
}
case 129490:
{
returnValue = F("Hainkopfstr.");
break;
}
case 129491:
{
returnValue = F("Hainkopsweg");
break;
}
case 129492:
{
returnValue = F("Hainkuppenweg");
break;
}
case 129493:
{
returnValue = F("Hainkämpe");
break;
}
case 129494:
{
returnValue = F("Hainlachestr.");
break;
}
case 129495:
{
returnValue = F("Hainleinstr.");
break;
}
case 129496:
{
returnValue = F("Hainleite");
break;
}
case 129497:
{
returnValue = F("Hainleite-Helbetal-Str.");
break;
}
case 129498:
{
returnValue = F("Hainleiteblick");
break;
}
case 129499:
{
returnValue = F("Hainleitestr.");
break;
}
case 129500:
{
returnValue = F("Hainleitewanderweg");
break;
}
case 129501:
{
returnValue = F("Hainleiteweg");
break;
}
case 129502:
{
returnValue = F("Hainlranger");
break;
}
case 129503:
{
returnValue = F("Hainlwies");
break;
}
case 129504:
{
returnValue = F("Hainmahl");
break;
}
case 129505:
{
returnValue = F("Hainmauergasse");
break;
}
case 129506:
{
returnValue = F("Hainmauerweg");
break;
}
case 129507:
{
returnValue = F("Hainmühle");
break;
}
case 129508:
{
returnValue = F("Hainmühlen");
break;
}
case 129509:
{
returnValue = F("Hainmühlener Str.");
break;
}
case 129510:
{
returnValue = F("Hainmühlenweg");
break;
}
case 129511:
{
returnValue = F("Hainmühlestr.");
break;
}
case 129512:
{
returnValue = F("Hainpark");
break;
}
case 129513:
{
returnValue = F("Hainpfad");
break;
}
case 129514:
{
returnValue = F("Hainreuthe");
break;
}
case 129515:
{
returnValue = F("Hainrott");
break;
}
case 129516:
{
returnValue = F("Hainröder Bergstr.");
break;
}
case 129517:
{
returnValue = F("Hainröder Bischofgasse");
break;
}
case 129518:
{
returnValue = F("Hainröder Brunnenstr.");
break;
}
case 129519:
{
returnValue = F("Hainröder Dorfstr.");
break;
}
case 129520:
{
returnValue = F("Hainröder Gartenstr.");
break;
}
case 129521:
{
returnValue = F("Hainröder Hauptstr.");
break;
}
case 129522:
{
returnValue = F("Hainröder Hirteberg");
break;
}
case 129523:
{
returnValue = F("Hainröder Müncheberg");
break;
}
case 129524:
{
returnValue = F("Hainröder Schulgasse");
break;
}
case 129525:
{
returnValue = F("Hainröder Str.");
break;
}
case 129526:
{
returnValue = F("Hainröder Wachberg");
break;
}
case 129527:
{
returnValue = F("Hainsackerweg");
break;
}
case 129528:
{
returnValue = F("Hainsbach");
break;
}
case 129529:
{
returnValue = F("Hainsbach Ost");
break;
}
case 129530:
{
returnValue = F("Hainsbachweg");
break;
}
case 129531:
{
returnValue = F("Hainsberg");
break;
}
case 129532:
{
returnValue = F("Hainsberger Str.");
break;
}
case 129533:
{
returnValue = F("Hainsberger Weg");
break;
}
case 129534:
{
returnValue = F("Hainsbühlweg");
break;
}
case 129535:
{
returnValue = F("Hainsche Str.");
break;
}
case 129536:
{
returnValue = F("Hainschneise");
break;
}
case 129537:
{
returnValue = F("Hainsergasse");
break;
}
case 129538:
{
returnValue = F("Hainserwall");
break;
}
case 129539:
{
returnValue = F("Hainshof");
break;
}
case 129540:
{
returnValue = F("Hainspacher Str.");
break;
}
case 129541:
{
returnValue = F("Hainspitze");
break;
}
case 129542:
{
returnValue = F("Hainsteg");
break;
}
case 129543:
{
returnValue = F("Hainsterbachstr.");
break;
}
case 129544:
{
returnValue = F("Hainstetten");
break;
}
case 129545:
{
returnValue = F("Hainstr.");
break;
}
case 129546:
{
returnValue = F("Hainstruth");
break;
}
case 129547:
{
returnValue = F("Hainstädter Brückle");
break;
}
case 129548:
{
returnValue = F("Hainstädter Str.");
break;
}
case 129549:
{
returnValue = F("Hainstück");
break;
}
case 129550:
{
returnValue = F("Haintal");
break;
}
case 129551:
{
returnValue = F("Haintalstr.");
break;
}
case 129552:
{
returnValue = F("Hainteichstr.");
break;
}
case 129553:
{
returnValue = F("Haintgesfeld");
break;
}
case 129554:
{
returnValue = F("Haintor");
break;
}
case 129555:
{
returnValue = F("Haintorstr.");
break;
}
case 129556:
{
returnValue = F("Haintorweg");
break;
}
case 129557:
{
returnValue = F("Haintürchenstr.");
break;
}
case 129558:
{
returnValue = F("Hainveilchenweg");
break;
}
case 129559:
{
returnValue = F("Hainwald");
break;
}
case 129560:
{
returnValue = F("Hainwaldstr.");
break;
}
case 129561:
{
returnValue = F("Hainwaldweg");
break;
}
case 129562:
{
returnValue = F("Hainweg");
break;
}
case 129563:
{
returnValue = F("Hainwiese");
break;
}
case 129564:
{
returnValue = F("Hainwiesenweg");
break;
}
case 129565:
{
returnValue = F("Hainwinkel");
break;
}
case 129566:
{
returnValue = F("Hainwinkelstr.");
break;
}
case 129567:
{
returnValue = F("Hainzbergstr.");
break;
}
case 129568:
{
returnValue = F("Hainzelgasse");
break;
}
case 129569:
{
returnValue = F("Hainzelinweg");
break;
}
case 129570:
{
returnValue = F("Hainzeller Str.");
break;
}
case 129571:
{
returnValue = F("Hainzeneller");
break;
}
case 129572:
{
returnValue = F("Hainzenmühlstr.");
break;
}
case 129573:
{
returnValue = F("Hainzenweg");
break;
}
case 129574:
{
returnValue = F("Hainäcker");
break;
}
case 129575:
{
returnValue = F("Haiplatzweg");
break;
}
case 129576:
{
returnValue = F("Hairenbucher Str.");
break;
}
case 129577:
{
returnValue = F("Haisbachstr.");
break;
}
case 129578:
{
returnValue = F("Haischbachstr.");
break;
}
case 129579:
{
returnValue = F("Haischwiese");
break;
}
case 129580:
{
returnValue = F("Haisinger Weg");
break;
}
case 129581:
{
returnValue = F("Haislandweg");
break;
}
case 129582:
{
returnValue = F("Haissengasse");
break;
}
case 129583:
{
returnValue = F("Haisterbacher Str.");
break;
}
case 129584:
{
returnValue = F("Haistergaustr.");
break;
}
case 129585:
{
returnValue = F("Haisterkircher Gasse");
break;
}
case 129586:
{
returnValue = F("Haistr.");
break;
}
case 129587:
{
returnValue = F("Haitachweg");
break;
}
case 129588:
{
returnValue = F("Haitelweg");
break;
}
case 129589:
{
returnValue = F("Haiterbacher Steige");
break;
}
case 129590:
{
returnValue = F("Haiterbacher Str.");
break;
}
case 129591:
{
returnValue = F("Haithaburing");
break;
}
case 129592:
{
returnValue = F("Haithabuweg");
break;
}
case 129593:
{
returnValue = F("Haitinger Weg");
break;
}
case 129594:
{
returnValue = F("Haitkamp");
break;
}
case 129595:
{
returnValue = F("Haitostr.");
break;
}
case 129596:
{
returnValue = F("Haitzer Str.");
break;
}
case 129597:
{
returnValue = F("Haitzinger Str.");
break;
}
case 129598:
{
returnValue = F("Haiweg");
break;
}
case 129599:
{
returnValue = F("Haizen");
break;
}
case 129600:
{
returnValue = F("Haizingerstr.");
break;
}
case 129601:
{
returnValue = F("Haißing");
break;
}
case 129602:
{
returnValue = F("Hajanweg");
break;
}
case 129603:
{
returnValue = F("Hajener Str.");
break;
}
case 129604:
{
returnValue = F("Hajenweg");
break;
}
case 129605:
{
returnValue = F("Hajestr.");
break;
}
case 129606:
{
returnValue = F("Hajo-Jürgens-Str.");
break;
}
case 129607:
{
returnValue = F("Hajo-Unken-Str.");
break;
}
case 129608:
{
returnValue = F("Hake-Betcken-Str.");
break;
}
case 129609:
{
returnValue = F("Hakeborner Str.");
break;
}
case 129610:
{
returnValue = F("Hakeborner Weg");
break;
}
case 129611:
{
returnValue = F("Hakehuspättken");
break;
}
case 129612:
{
returnValue = F("Hakelblick");
break;
}
case 129613:
{
returnValue = F("Hakelstieg");
break;
}
case 129614:
{
returnValue = F("Hakelstr.");
break;
}
case 129615:
{
returnValue = F("Hakeltwete");
break;
}
case 129616:
{
returnValue = F("Hakelweg");
break;
}
case 129617:
{
returnValue = F("Hakemetweg");
break;
}
case 129618:
{
returnValue = F("Hakemickestr.");
break;
}
case 129619:
{
returnValue = F("Haken");
break;
}
case 129620:
{
returnValue = F("Hakenberg");
break;
}
case 129621:
{
returnValue = F("Hakenbergweg");
break;
}
case 129622:
{
returnValue = F("Hakenborner Weg");
break;
}
case 129623:
{
returnValue = F("Hakenbornweg");
break;
}
case 129624:
{
returnValue = F("Hakenbrede");
break;
}
case 129625:
{
returnValue = F("Hakenbree");
break;
}
case 129626:
{
returnValue = F("Hakenbreite");
break;
}
case 129627:
{
returnValue = F("Hakenbrink");
break;
}
case 129628:
{
returnValue = F("Hakenbusch");
break;
}
case 129629:
{
returnValue = F("Hakenbäck");
break;
}
case 129630:
{
returnValue = F("Hakendiek");
break;
}
case 129631:
{
returnValue = F("Hakendorf");
break;
}
case 129632:
{
returnValue = F("Hakendorfer Weg");
break;
}
case 129633:
{
returnValue = F("Hakendorferwurp");
break;
}
case 129634:
{
returnValue = F("Hakenesheide");
break;
}
case 129635:
{
returnValue = F("Hakenfeldstr.");
break;
}
case 129636:
{
returnValue = F("Hakengasse");
break;
}
case 129637:
{
returnValue = F("Hakenheide");
break;
}
case 129638:
{
returnValue = F("Hakenholzweg");
break;
}
case 129639:
{
returnValue = F("Hakenort");
break;
}
case 129640:
{
returnValue = F("Hakenroder Str.");
break;
}
case 129641:
{
returnValue = F("Hakensand");
break;
}
case 129642:
{
returnValue = F("Hakensoll");
break;
}
case 129643:
{
returnValue = F("Hakenstedter Str.");
break;
}
case 129644:
{
returnValue = F("Hakenstedter Weg");
break;
}
case 129645:
{
returnValue = F("Hakenstr.");
break;
}
case 129646:
{
returnValue = F("Hakenweg");
break;
}
case 129647:
{
returnValue = F("Hakenwehrstr.");
break;
}
case 129648:
{
returnValue = F("Hakenäckerstr.");
break;
}
case 129649:
{
returnValue = F("Hakenäckerweg");
break;
}
case 129650:
{
returnValue = F("Hakes Weg");
break;
}
case 129651:
{
returnValue = F("Hakesberg");
break;
}
case 129652:
{
returnValue = F("Hakesweg");
break;
}
case 129653:
{
returnValue = F("Hakeweg");
break;
}
case 129654:
{
returnValue = F("Haksgrund");
break;
}
case 129655:
{
returnValue = F("Hal-Loo-Weg");
break;
}
case 129656:
{
returnValue = F("Halandhof");
break;
}
case 129657:
{
returnValue = F("Halankweg");
break;
}
case 129658:
{
returnValue = F("Halbach");
break;
}
case 129659:
{
returnValue = F("Halbachstr.");
break;
}
case 129660:
{
returnValue = F("Halbacker");
break;
}
case 129661:
{
returnValue = F("Halbauer Str.");
break;
}
case 129662:
{
returnValue = F("Halbauernweg");
break;
}
case 129663:
{
returnValue = F("Halbe");
break;
}
case 129664:
{
returnValue = F("Halbe Gasse");
break;
}
case 129665:
{
returnValue = F("Halbe Haube");
break;
}
case 129666:
{
returnValue = F("Halbe Hecke");
break;
}
case 129667:
{
returnValue = F("Halbe Hufe");
break;
}
case 129668:
{
returnValue = F("Halbe Höhe");
break;
}
case 129669:
{
returnValue = F("Halbe Mond");
break;
}
case 129670:
{
returnValue = F("Halbe Mondstr.");
break;
}
case 129671:
{
returnValue = F("Halbe Sasse");
break;
}
case 129672:
{
returnValue = F("Halbe Str.");
break;
}
case 129673:
{
returnValue = F("Halbebüchsenweg");
break;
}
case 129674:
{
returnValue = F("Halbegrundweg");
break;
}
case 129675:
{
returnValue = F("Halbehof");
break;
}
case 129676:
{
returnValue = F("Halbemeile");
break;
}
case 129677:
{
returnValue = F("Halbemeiler Str.");
break;
}
case 129678:
{
returnValue = F("Halbemeiler Weg");
break;
}
case 129679:
{
returnValue = F("Halbemonder Str.");
break;
}
case 129680:
{
returnValue = F("Halbemondstr.");
break;
}
case 129681:
{
returnValue = F("Halbendorfer Str.");
break;
}
case 129682:
{
returnValue = F("Halbendorfer Weg");
break;
}
case 129683:
{
returnValue = F("Halbengartenstr.");
break;
}
case 129684:
{
returnValue = F("Halbenkamp");
break;
}
case 129685:
{
returnValue = F("Halbenmorgen");
break;
}
case 129686:
{
returnValue = F("Halbenweg");
break;
}
case 129687:
{
returnValue = F("Halber Mond");
break;
}
case 129688:
{
returnValue = F("Halber Str.");
break;
}
case 129689:
{
returnValue = F("Halber Weg");
break;
}
case 129690:
{
returnValue = F("Halberauweg");
break;
}
case 129691:
{
returnValue = F("Halberbrachter Str.");
break;
}
case 129692:
{
returnValue = F("Halberg");
break;
}
case 129693:
{
returnValue = F("Halberger Str.");
break;
}
case 129694:
{
returnValue = F("Halbergstr.");
break;
}
case 129695:
{
returnValue = F("Halbergsweg");
break;
}
case 129696:
{
returnValue = F("Halbersdorfer Hauptstr.");
break;
}
case 129697:
{
returnValue = F("Halbersdorfer Str.");
break;
}
case 129698:
{
returnValue = F("Halberstadter Weg");
break;
}
case 129699:
{
returnValue = F("Halberstadtstr.");
break;
}
case 129700:
{
returnValue = F("Halberstadtweg");
break;
}
case 129701:
{
returnValue = F("Halberstunger Feld");
break;
}
case 129702:
{
returnValue = F("Halberstunger Str.");
break;
}
case 129703:
{
returnValue = F("Halberstädter Chaussee");
break;
}
case 129704:
{
returnValue = F("Halberstädter Poststr.");
break;
}
case 129705:
{
returnValue = F("Halberstädter Str.");
break;
}
case 129706:
{
returnValue = F("Halberstädter Tor");
break;
}
case 129707:
{
returnValue = F("Halbertshofer Str.");
break;
}
case 129708:
{
returnValue = F("Halbes Dach");
break;
}
case 129709:
{
returnValue = F("Halbestadt");
break;
}
case 129710:
{
returnValue = F("Halbeswiger Str.");
break;
}
case 129711:
{
returnValue = F("Halbetzer Str.");
break;
}
case 129712:
{
returnValue = F("Halbfaßweg");
break;
}
case 129713:
{
returnValue = F("Halbgütle");
break;
}
case 129714:
{
returnValue = F("Halbhustener Weg");
break;
}
case 129715:
{
returnValue = F("Halbigstr.");
break;
}
case 129716:
{
returnValue = F("Halbinsel");
break;
}
case 129717:
{
returnValue = F("Halbinsel Werder");
break;
}
case 129718:
{
returnValue = F("Halbinselstr.");
break;
}
case 129719:
{
returnValue = F("Halbkreisstr.");
break;
}
case 129720:
{
returnValue = F("Halbmeierweg");
break;
}
case 129721:
{
returnValue = F("Halbmeil");
break;
}
case 129722:
{
returnValue = F("Halbmeilenbachweg");
break;
}
case 129723:
{
returnValue = F("Halbmond");
break;
}
case 129724:
{
returnValue = F("Halbmondgäßchen");
break;
}
case 129725:
{
returnValue = F("Halbmondschneise");
break;
}
case 129726:
{
returnValue = F("Halbmondstr.");
break;
}
case 129727:
{
returnValue = F("Halbmondsweg");
break;
}
case 129728:
{
returnValue = F("Halbmondweg");
break;
}
case 129729:
{
returnValue = F("Halbmondweg / C-Weg");
break;
}
case 129730:
{
returnValue = F("Halbmorgenweg");
break;
}
case 129731:
{
returnValue = F("Halbreiterstr.");
break;
}
case 129732:
{
returnValue = F("Halbring");
break;
}
case 129733:
{
returnValue = F("Halbritterstr.");
break;
}
case 129734:
{
returnValue = F("Halbrunnenweg");
break;
}
case 129735:
{
returnValue = F("Halbschlägelweg");
break;
}
case 129736:
{
returnValue = F("Halbstrengen");
break;
}
case 129737:
{
returnValue = F("Halbtauen");
break;
}
case 129738:
{
returnValue = F("Halbteilweg");
break;
}
case 129739:
{
returnValue = F("Halbuschstr.");
break;
}
case 129740:
{
returnValue = F("Halbverlorenweg");
break;
}
case 129741:
{
returnValue = F("Halbwachsengäßchen");
break;
}
case 129742:
{
returnValue = F("Halbwaldstr.");
break;
}
case 129743:
{
returnValue = F("Halbäcker");
break;
}
case 129744:
{
returnValue = F("Halbäckerweg");
break;
}
case 129745:
{
returnValue = F("Halchtersche Str.");
break;
}
case 129746:
{
returnValue = F("Haldacker");
break;
}
case 129747:
{
returnValue = F("Halde");
break;
}
case 129748:
{
returnValue = F("Halde General Blumenthal 8");
break;
}
case 129749:
{
returnValue = F("Halde Norddeutschland");
break;
}
case 129750:
{
returnValue = F("Halde Radbod");
break;
}
case 129751:
{
returnValue = F("Halde Rheinpreußen");
break;
}
case 129752:
{
returnValue = F("Halde Zeche Waltrop");
break;
}
case 129753:
{
returnValue = F("Halde-Ernst-August");
break;
}
case 129754:
{
returnValue = F("Haldeckstr.");
break;
}
case 129755:
{
returnValue = F("Haldemer Str.");
break;
}
case 129756:
{
returnValue = F("Haldemer Weg");
break;
}
case 129757:
{
returnValue = F("Halden");
break;
}
case 129758:
{
returnValue = F("Haldenackerweg");
break;
}
case 129759:
{
returnValue = F("Haldenanger");
break;
}
case 129760:
{
returnValue = F("Haldenbach");
break;
}
case 129761:
{
returnValue = F("Haldenbachstr.");
break;
}
case 129762:
{
returnValue = F("Haldenbachweg");
break;
}
case 129763:
{
returnValue = F("Haldenberg");
break;
}
case 129764:
{
returnValue = F("Haldenbergerstr.");
break;
}
case 129765:
{
returnValue = F("Haldenbergstr.");
break;
}
case 129766:
{
returnValue = F("Haldenbergweg");
break;
}
case 129767:
{
returnValue = F("Haldenblick");
break;
}
case 129768:
{
returnValue = F("Haldenbrunnen");
break;
}
case 129769:
{
returnValue = F("Haldenbuckweg");
break;
}
case 129770:
{
returnValue = F("Haldenbühlstr.");
break;
}
case 129771:
{
returnValue = F("Haldenesch");
break;
}
case 129772:
{
returnValue = F("Haldeneschle");
break;
}
case 129773:
{
returnValue = F("Haldeneschstr.");
break;
}
case 129774:
{
returnValue = F("Haldenfeld");
break;
}
case 129775:
{
returnValue = F("Haldengasse");
break;
}
case 129776:
{
returnValue = F("Haldengärten");
break;
}
case 129777:
{
returnValue = F("Haldengässle");
break;
}
case 129778:
{
returnValue = F("Haldengäßchen");
break;
}
case 129779:
{
returnValue = F("Haldengäßle");
break;
}
case 129780:
{
returnValue = F("Haldenhausweg");
break;
}
case 129781:
{
returnValue = F("Haldenhof");
break;
}
case 129782:
{
returnValue = F("Haldenhofstr.");
break;
}
case 129783:
{
returnValue = F("Haldenhofweg");
break;
}
case 129784:
{
returnValue = F("Haldenhöfe");
break;
}
case 129785:
{
returnValue = F("Haldenloh");
break;
}
case 129786:
{
returnValue = F("Haldenloh A");
break;
}
case 129787:
{
returnValue = F("Haldenloh B");
break;
}
case 129788:
{
returnValue = F("Haldenloh C");
break;
}
case 129789:
{
returnValue = F("Haldenrain");
break;
}
case 129790:
{
returnValue = F("Haldenrainstr.");
break;
}
case 129791:
{
returnValue = F("Haldenring");
break;
}
case 129792:
{
returnValue = F("Haldenseestr.");
break;
}
case 129793:
{
returnValue = F("Haldensiedlung");
break;
}
case 129794:
{
returnValue = F("Haldenslebener Str.");
break;
}
case 129795:
{
returnValue = F("Haldenslebener Weg");
break;
}
case 129796:
{
returnValue = F("Haldensleber Str.");
break;
}
case 129797:
{
returnValue = F("Haldensleber Weg");
break;
}
case 129798:
{
returnValue = F("Haldenspur");
break;
}
case 129799:
{
returnValue = F("Haldenstaffelweg");
break;
}
case 129800:
{
returnValue = F("Haldensteige");
break;
}
case 129801:
{
returnValue = F("Haldenstr.");
break;
}
case 129802:
{
returnValue = F("Haldensträßle");
break;
}
case 129803:
{
returnValue = F("Haldenteil");
break;
}
case 129804:
{
returnValue = F("Haldentraufweg");
break;
}
case 129805:
{
returnValue = F("Haldenwaldstr.");
break;
}
case 129806:
{
returnValue = F("Haldenwaldweg");
break;
}
case 129807:
{
returnValue = F("Haldenwanger Str.");
break;
}
case 129808:
{
returnValue = F("Haldenwangfeld");
break;
}
case 129809:
{
returnValue = F("Haldenwangstr.");
break;
}
case 129810:
{
returnValue = F("Haldenweber");
break;
}
case 129811:
{
returnValue = F("Haldenweg");
break;
}
case 129812:
{
returnValue = F("Haldenweide");
break;
}
case 129813:
{
returnValue = F("Haldenwies");
break;
}
case 129814:
{
returnValue = F("Haldenwiesenstr.");
break;
}
case 129815:
{
returnValue = F("Haldenwiesenweg");
break;
}
case 129816:
{
returnValue = F("Haldenwiesweg");
break;
}
case 129817:
{
returnValue = F("Haldenäcker");
break;
}
case 129818:
{
returnValue = F("Haldenäckerstr.");
break;
}
case 129819:
{
returnValue = F("Haldenäckerweg");
break;
}
case 129820:
{
returnValue = F("Haldenöschstr.");
break;
}
case 129821:
{
returnValue = F("Haldergasse");
break;
}
case 129822:
{
returnValue = F("Halderner Feld");
break;
}
case 129823:
{
returnValue = F("Halderner Str.");
break;
}
case 129824:
{
returnValue = F("Haldernerkopfweg");
break;
}
case 129825:
{
returnValue = F("Halderstr.");
break;
}
case 129826:
{
returnValue = F("Halderweg");
break;
}
case 129827:
{
returnValue = F("Halderweide");
break;
}
case 129828:
{
returnValue = F("Haldesiedlung");
break;
}
case 129829:
{
returnValue = F("Haldessenweg");
break;
}
case 129830:
{
returnValue = F("Haldestr.");
break;
}
case 129831:
{
returnValue = F("Haldeweg");
break;
}
case 129832:
{
returnValue = F("Haldiger Weg");
break;
}
case 129833:
{
returnValue = F("Haldorfer Str.");
break;
}
case 129834:
{
returnValue = F("Haldystr.");
break;
}
case 129835:
{
returnValue = F("Halebüller Weg");
break;
}
case 129836:
{
returnValue = F("Haledonstr.");
break;
}
case 129837:
{
returnValue = F("Halemdüür");
break;
}
case 129838:
{
returnValue = F("Halemstr.");
break;
}
case 129839:
{
returnValue = F("Halemwai");
break;
}
case 129840:
{
returnValue = F("Halenbach");
break;
}
case 129841:
{
returnValue = F("Halenbacher Str.");
break;
}
case 129842:
{
returnValue = F("Halenbeckstr.");
break;
}
case 129843:
{
returnValue = F("Halenberg");
break;
}
case 129844:
{
returnValue = F("Halenboom");
break;
}
case 129845:
{
returnValue = F("Halenbruk");
break;
}
case 129846:
{
returnValue = F("Halenderfeld");
break;
}
case 129847:
{
returnValue = F("Halendorf");
break;
}
case 129848:
{
returnValue = F("Halene-Kampen");
break;
}
case 129849:
{
returnValue = F("Halener Str.");
break;
}
case 129850:
{
returnValue = F("Halenfeld");
break;
}
case 129851:
{
returnValue = F("Halenforth");
break;
}
case 129852:
{
returnValue = F("Halenhorst");
break;
}
case 129853:
{
returnValue = F("Halenhorster Str.");
break;
}
case 129854:
{
returnValue = F("Halenseestr.");
break;
}
case 129855:
{
returnValue = F("Halenseeweg");
break;
}
case 129856:
{
returnValue = F("Halepaghenstr.");
break;
}
case 129857:
{
returnValue = F("Haler Ort");
break;
}
case 129858:
{
returnValue = F("Halerhöhe");
break;
}
case 129859:
{
returnValue = F("Halestr.");
break;
}
case 129860:
{
returnValue = F("Halevistr.");
break;
}
case 129861:
{
returnValue = F("Halfenberg");
break;
}
case 129862:
{
returnValue = F("Halfendriesch");
break;
}
case 129863:
{
returnValue = F("Halfengasse");
break;
}
case 129864:
{
returnValue = F("Halfensbüchel");
break;
}
case 129865:
{
returnValue = F("Halfenshof");
break;
}
case 129866:
{
returnValue = F("Halfenstr.");
break;
}
case 129867:
{
returnValue = F("Halfenweg");
break;
}
case 129868:
{
returnValue = F("Halfenweiherplatz");
break;
}
case 129869:
{
returnValue = F("Halfergasse");
break;
}
case 129870:
{
returnValue = F("Halferstein");
break;
}
case 129871:
{
returnValue = F("Halferstr.");
break;
}
case 129872:
{
returnValue = F("Halfeshof");
break;
}
case 129873:
{
returnValue = F("Halfesweg");
break;
}
case 129874:
{
returnValue = F("Halfgarten");
break;
}
case 129875:
{
returnValue = F("Halfinger Str.");
break;
}
case 129876:
{
returnValue = F("Halfliterpatt");
break;
}
case 129877:
{
returnValue = F("Halfmannsfeld");
break;
}
case 129878:
{
returnValue = F("Halfmannskath");
break;
}
case 129879:
{
returnValue = F("Halfmannspfad");
break;
}
case 129880:
{
returnValue = F("Halfmannstr.");
break;
}
case 129881:
{
returnValue = F("Halfmannsweg");
break;
}
case 129882:
{
returnValue = F("Halfmannswiese");
break;
}
case 129883:
{
returnValue = F("Halfmannwiese");
break;
}
case 129884:
{
returnValue = F("Halfter Str.");
break;
}
case 129885:
{
returnValue = F("Halfterhäuser");
break;
}
case 129886:
{
returnValue = F("Halfterweg");
break;
}
case 129887:
{
returnValue = F("Halgartenweg");
break;
}
case 129888:
{
returnValue = F("Halgebrachweg");
break;
}
case 129889:
{
returnValue = F("Halheim");
break;
}
case 129890:
{
returnValue = F("Halieth");
break;
}
case 129891:
{
returnValue = F("Halifax-Platz");
break;
}
case 129892:
{
returnValue = F("Halifaxstr.");
break;
}
case 129893:
{
returnValue = F("Halinger Str.");
break;
}
case 129894:
{
returnValue = F("Haljalastr.");
break;
}
case 129895:
{
returnValue = F("Halken");
break;
}
case 129896:
{
returnValue = F("Halkensberg");
break;
}
case 129897:
{
returnValue = F("Halkenweg");
break;
}
case 129898:
{
returnValue = F("Halkettstr.");
break;
}
case 129899:
{
returnValue = F("Hall-Str.");
break;
}
case 129900:
{
returnValue = F("Hallafeld");
break;
}
case 129901:
{
returnValue = F("Hallaliter Weg");
break;
}
case 129902:
{
returnValue = F("Hallauer Str.");
break;
}
case 129903:
{
returnValue = F("Hallaweg");
break;
}
case 129904:
{
returnValue = F("Hallbacher Str.");
break;
}
case 129905:
{
returnValue = F("Hallbauerstr.");
break;
}
case 129906:
{
returnValue = F("Hallberg");
break;
}
case 129907:
{
returnValue = F("Hallberg Str.");
break;
}
case 129908:
{
returnValue = F("Hallbergerallee");
break;
}
case 129909:
{
returnValue = F("Hallbergerstr.");
break;
}
case 129910:
{
returnValue = F("Hallbergmooser Str.");
break;
}
case 129911:
{
returnValue = F("Hallbergsbreite");
break;
}
case 129912:
{
returnValue = F("Hallbergstr.");
break;
}
case 129913:
{
returnValue = F("Hallburger Weg");
break;
}
case 129914:
{
returnValue = F("Halldorfer Str.");
break;
}
case 129915:
{
returnValue = F("Halldorferweg");
break;
}
case 129916:
{
returnValue = F("Halle");
break;
}
case 129917:
{
returnValue = F("Halle, Rosenfelder Str.");
break;
}
case 129918:
{
returnValue = F("Halle-Kasseler-Str.");
break;
}
case 129919:
{
returnValue = F("Halle-Saale-Schleife");
break;
}
case 129920:
{
returnValue = F("Halle/Saale Str.");
break;
}
case 129921:
{
returnValue = F("Halleckle");
break;
}
case 129922:
{
returnValue = F("Hallegasse");
break;
}
case 129923:
{
returnValue = F("Halleiner Str.");
break;
}
case 129924:
{
returnValue = F("Hallemannstr.");
break;
}
case 129925:
{
returnValue = F("Hallen");
break;
}
case 129926:
{
returnValue = F("Hallenbad Huchting");
break;
}
case 129927:
{
returnValue = F("Hallenbadstr.");
break;
}
case 129928:
{
returnValue = F("Hallenberg");
break;
}
case 129929:
{
returnValue = F("Hallenberger Str.");
break;
}
case 129930:
{
returnValue = F("Hallenbergstr.");
break;
}
case 129931:
{
returnValue = F("Hallenbuckel");
break;
}
case 129932:
{
returnValue = F("Hallenburgstr.");
break;
}
case 129933:
{
returnValue = F("Hallendorf");
break;
}
case 129934:
{
returnValue = F("Hallendorfer Str.");
break;
}
case 129935:
{
returnValue = F("Hallengasse");
break;
}
case 129936:
{
returnValue = F("Hallengrund");
break;
}
case 129937:
{
returnValue = F("Hallenscheider Weg");
break;
}
case 129938:
{
returnValue = F("Hallensen");
break;
}
case 129939:
{
returnValue = F("Hallenser Str.");
break;
}
case 129940:
{
returnValue = F("Hallenslebenweg");
break;
}
case 129941:
{
returnValue = F("Hallensteige");
break;
}
case 129942:
{
returnValue = F("Hallensteinweg");
break;
}
case 129943:
{
returnValue = F("Hallenstr.");
break;
}
case 129944:
{
returnValue = F("Hallenthaler Str.");
break;
}
case 129945:
{
returnValue = F("Hallenwaldweg");
break;
}
case 129946:
{
returnValue = F("Hallenweg");
break;
}
case 129947:
{
returnValue = F("Haller Ring");
break;
}
case 129948:
{
returnValue = F("Haller Str.");
break;
}
case 129949:
{
returnValue = F("Haller Weg");
break;
}
case 129950:
{
returnValue = F("Haller-Küfer-Weg");
break;
}
case 129951:
{
returnValue = F("Haller-Willem-Patt");
break;
}
case 129952:
{
returnValue = F("Hallerbacher Str.");
break;
}
case 129953:
{
returnValue = F("Hallerbachstr.");
break;
}
case 129954:
{
returnValue = F("Hallerbergstr.");
break;
}
case 129955:
{
returnValue = F("Hallerburger Str.");
break;
}
case 129956:
{
returnValue = F("Hallerey");
break;
}
case 129957:
{
returnValue = F("Hallergasse");
break;
}
case 129958:
{
returnValue = F("Hallerhöhe");
break;
}
case 129959:
{
returnValue = F("Hallerhölzlweg");
break;
}
case 129960:
{
returnValue = F("Hallerhüttenstr.");
break;
}
case 129961:
{
returnValue = F("Hallering");
break;
}
case 129962:
{
returnValue = F("Hallermundstr.");
break;
}
case 129963:
{
returnValue = F("Hallermundtskopf");
break;
}
case 129964:
{
returnValue = F("Hallermundweg");
break;
}
case 129965:
{
returnValue = F("Hallermünder Str.");
break;
}
case 129966:
{
returnValue = F("Hallerndorfer Str.");
break;
}
case 129967:
{
returnValue = F("Hallersberg");
break;
}
case 129968:
{
returnValue = F("Hallersbergweg");
break;
}
case 129969:
{
returnValue = F("Hallerschlag");
break;
}
case 129970:
{
returnValue = F("Hallersgraben");
break;
}
case 129971:
{
returnValue = F("Hallershof");
break;
}
case 129972:
{
returnValue = F("Hallerskamp");
break;
}
case 129973:
{
returnValue = F("Hallerstein");
break;
}
case 129974:
{
returnValue = F("Hallersteiner Str.");
break;
}
case 129975:
{
returnValue = F("Hallersteiner Weg");
break;
}
case 129976:
{
returnValue = F("Hallerstr.");
break;
}
case 129977:
{
returnValue = F("Hallertauer Hopfenweg 5");
break;
}
case 129978:
{
returnValue = F("Hallertauer Str.");
break;
}
case 129979:
{
returnValue = F("Hallertauerstr.");
break;
}
case 129980:
{
returnValue = F("Hallertor");
break;
}
case 129981:
{
returnValue = F("Hallertorbrücke");
break;
}
case 129982:
{
returnValue = F("Hallertorstr.");
break;
}
case 129983:
{
returnValue = F("Hallerweg");
break;
}
case 129984:
{
returnValue = F("Hallerweiherstr.");
break;
}
case 129985:
{
returnValue = F("Hallerwiese");
break;
}
case 129986:
{
returnValue = F("Hallerwöhrstr.");
break;
}
case 129987:
{
returnValue = F("Hallesche Allee");
break;
}
case 129988:
{
returnValue = F("Hallesche Landstr.");
break;
}
case 129989:
{
returnValue = F("Hallesche Str.");
break;
}
case 129990:
{
returnValue = F("Hallesches Dreieck");
break;
}
case 129991:
{
returnValue = F("Hallestr.");
break;
}
case 129992:
{
returnValue = F("Halleystr.");
break;
}
case 129993:
{
returnValue = F("Hallgarten");
break;
}
case 129994:
{
returnValue = F("Hallgartener Platz");
break;
}
case 129995:
{
returnValue = F("Hallgartener Str.");
break;
}
case 129996:
{
returnValue = F("Hallgartenstr.");
break;
}
case 129997:
{
returnValue = F("Hallgartenweg");
break;
}
case 129998:
{
returnValue = F("Hallgarter Str.");
break;
}
case 129999:
{
returnValue = F("Hallgarter Weg");
break;
}
case 130000:
{
returnValue = F("Hallgasse");
break;
}
case 130001:
{
returnValue = F("Hallgrafenstr.");
break;
}
case 130002:
{
returnValue = F("Hallgrund");
break;
}
case 130003:
{
returnValue = F("Hallgrundstr.");
break;
}
case 130004:
{
returnValue = F("Hallgrundweg");
break;
}
case 130005:
{
returnValue = F("Hallgäßchen");
break;
}
case 130006:
{
returnValue = F("Hallhofgasse");
break;
}
case 130007:
{
returnValue = F("Hallhüttenweg");
break;
}
case 130008:
{
returnValue = F("Hallig-Hooge-Stieg");
break;
}
case 130009:
{
returnValue = F("Hallig-Hooge-Weg");
break;
}
case 130010:
{
returnValue = F("Halligblick");
break;
}
case 130011:
{
returnValue = F("Halligdorf");
break;
}
case 130012:
{
returnValue = F("Halligdorfer Weg");
break;
}
case 356375:
{
returnValue = F("h-Gestell");
break;
}
case 356376:
{
returnValue = F("hellgrüner Weg");
break;
}
case 356377:
{
returnValue = F("hinkelmichel");
break;
}
case 356378:
{
returnValue = F("hinter hinkelmichel");
break;
}
case 356379:
{
returnValue = F("hintere Eschachausfahrt");
break;
}
case 356380:
{
returnValue = F("hinterer Eichbergweg");
break;
}
case 356381:
{
returnValue = F("hist. \"Große Str.");
break;
}
case 356382:
{
returnValue = F("hist. Str. Amberg - Regensburg");
break;
}
case 356383:
{
returnValue = F("historischer Handelsweg (markanter Hohlweg)");
break;
}
case 356384:
{
returnValue = F("historischer Rennweg");
break;
}
case 356385:
{
returnValue = F("historischer Schlosspark Wasserburg Anholt");
break;
}
case 356386:
{
returnValue = F("hohe Roth");
break;
}
}
return returnValue;
}
