#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameF1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 98444:
    {
        returnValue = F("F");
        break;
    }
    case 98445:
    {
        returnValue = F("F - Flügel");
        break;
    }
    case 98446:
    {
        returnValue = F("F 10");
        break;
    }
    case 98447:
    {
        returnValue = F("F 105");
        break;
    }
    case 98448:
    {
        returnValue = F("F 11");
        break;
    }
    case 98449:
    {
        returnValue = F("F 12");
        break;
    }
    case 98450:
    {
        returnValue = F("F 13");
        break;
    }
    case 98451:
    {
        returnValue = F("F 15");
        break;
    }
    case 98452:
    {
        returnValue = F("F 18");
        break;
    }
    case 98453:
    {
        returnValue = F("F 19");
        break;
    }
    case 98454:
    {
        returnValue = F("F 2");
        break;
    }
    case 98455:
    {
        returnValue = F("F 21");
        break;
    }
    case 98456:
    {
        returnValue = F("F 26");
        break;
    }
    case 98457:
    {
        returnValue = F("F 30");
        break;
    }
    case 98458:
    {
        returnValue = F("F 31");
        break;
    }
    case 98459:
    {
        returnValue = F("F 4");
        break;
    }
    case 98460:
    {
        returnValue = F("F 6");
        break;
    }
    case 98461:
    {
        returnValue = F("F 7");
        break;
    }
    case 98462:
    {
        returnValue = F("F 8");
        break;
    }
    case 98463:
    {
        returnValue = F("F 9");
        break;
    }
    case 98464:
    {
        returnValue = F("F-Flügel");
        break;
    }
    case 98465:
    {
        returnValue = F("F-Weg");
        break;
    }
    case 98466:
    {
        returnValue = F("F.-A.-Köhler-Str.");
        break;
    }
    case 98467:
    {
        returnValue = F("F.-A.-Meyer-Str.");
        break;
    }
    case 98468:
    {
        returnValue = F("F.-A.-Schmidt-Weg");
        break;
    }
    case 98469:
    {
        returnValue = F("F.-C.-Weiskopf-Platz");
        break;
    }
    case 98470:
    {
        returnValue = F("F.-C.-Weiskopf-Str.");
        break;
    }
    case 98471:
    {
        returnValue = F("F.-Dir.-Leiblein-Weg");
        break;
    }
    case 98472:
    {
        returnValue = F("F.-J.-Baumgartner-Str.");
        break;
    }
    case 98473:
    {
        returnValue = F("F.-J.-Strauß-Str.");
        break;
    }
    case 98474:
    {
        returnValue = F("F.-Knuhr-Weg");
        break;
    }
    case 98475:
    {
        returnValue = F("F.-L.-Schmidt-Str.");
        break;
    }
    case 98476:
    {
        returnValue = F("F.-M.-Scharffenberg-Weg");
        break;
    }
    case 98477:
    {
        returnValue = F("F.-O.-Schimmel-Str.");
        break;
    }
    case 98478:
    {
        returnValue = F("F.-Oberst-Str.");
        break;
    }
    case 98479:
    {
        returnValue = F("F.-W.-Liebknecht-Str.");
        break;
    }
    case 98480:
    {
        returnValue = F("F.-W.-Loos-Str.");
        break;
    }
    case 98481:
    {
        returnValue = F("F.-W.-Raiffeisen-Platz");
        break;
    }
    case 98482:
    {
        returnValue = F("F.-W.-Raiffeisen-Str.");
        break;
    }
    case 98483:
    {
        returnValue = F("F.-W.-Sander-Weg");
        break;
    }
    case 98484:
    {
        returnValue = F("F.-Zech-Weg");
        break;
    }
    case 98485:
    {
        returnValue = F("F.C.-Rode-Weg");
        break;
    }
    case 98486:
    {
        returnValue = F("F.E.-von-Busse-Str.");
        break;
    }
    case 98487:
    {
        returnValue = F("F.W");
        break;
    }
    case 98488:
    {
        returnValue = F("F.W.Bernstein-Str.");
        break;
    }
    case 98489:
    {
        returnValue = F("F20");
        break;
    }
    case 98490:
    {
        returnValue = F("F24");
        break;
    }
    case 98491:
    {
        returnValue = F("F25");
        break;
    }
    case 98492:
    {
        returnValue = F("F26");
        break;
    }
    case 98493:
    {
        returnValue = F("F27");
        break;
    }
    case 98494:
    {
        returnValue = F("F28");
        break;
    }
    case 98495:
    {
        returnValue = F("F29");
        break;
    }
    case 98496:
    {
        returnValue = F("F3");
        break;
    }
    case 98497:
    {
        returnValue = F("F4");
        break;
    }
    case 98498:
    {
        returnValue = F("FAHO Wiese");
        break;
    }
    case 98499:
    {
        returnValue = F("FC Fiat 1960 e.V");
        break;
    }
    case 98500:
    {
        returnValue = F("FF-Weg");
        break;
    }
    case 98501:
    {
        returnValue = F("FGV-Platz \"Zur Zolltafel");
        break;
    }
    case 98502:
    {
        returnValue = F("FH Weihenstephan");
        break;
    }
    case 98503:
    {
        returnValue = F("FIM-Wiese");
        break;
    }
    case 98504:
    {
        returnValue = F("FIX ME");
        break;
    }
    case 98505:
    {
        returnValue = F("FKK-Badebereich Sieben-Meter-Teich");
        break;
    }
    case 98506:
    {
        returnValue = F("FKK-Bereich");
        break;
    }
    case 98507:
    {
        returnValue = F("FKK-Weg");
        break;
    }
    case 98508:
    {
        returnValue = F("FSV Tennisanlage");
        break;
    }
    case 98509:
    {
        returnValue = F("FW");
        break;
    }
    case 98510:
    {
        returnValue = F("Faaborgweg");
        break;
    }
    case 98511:
    {
        returnValue = F("Faaker Str.");
        break;
    }
    case 98512:
    {
        returnValue = F("Faarderhuuch");
        break;
    }
    case 98513:
    {
        returnValue = F("Faaschweg");
        break;
    }
    case 98514:
    {
        returnValue = F("Faaßweg");
        break;
    }
    case 98515:
    {
        returnValue = F("Fabariusstr.");
        break;
    }
    case 98516:
    {
        returnValue = F("Fabbenstedter Str.");
        break;
    }
    case 98517:
    {
        returnValue = F("Fabelufer");
        break;
    }
    case 98518:
    {
        returnValue = F("Fabelweg");
        break;
    }
    case 98519:
    {
        returnValue = F("Faber-Castell-Allee");
        break;
    }
    case 98520:
    {
        returnValue = F("Faber-Castell-Str.");
        break;
    }
    case 98521:
    {
        returnValue = F("Faber-Privatweg");
        break;
    }
    case 98522:
    {
        returnValue = F("Faber-Str.");
        break;
    }
    case 98523:
    {
        returnValue = F("Faber-du-Faur-Str.");
        break;
    }
    case 98524:
    {
        returnValue = F("Faberberg");
        break;
    }
    case 98525:
    {
        returnValue = F("Fabergstr.");
        break;
    }
    case 98526:
    {
        returnValue = F("Fabergut");
        break;
    }
    case 98527:
    {
        returnValue = F("Faberhöhe");
        break;
    }
    case 98528:
    {
        returnValue = F("Faberpark");
        break;
    }
    case 98529:
    {
        returnValue = F("Faberrebenweg");
        break;
    }
    case 98530:
    {
        returnValue = F("Fabers-Land");
        break;
    }
    case 98531:
    {
        returnValue = F("Faberschlemm");
        break;
    }
    case 98532:
    {
        returnValue = F("Fabershof");
        break;
    }
    case 98533:
    {
        returnValue = F("Faberstr.");
        break;
    }
    case 98534:
    {
        returnValue = F("Fabersweg");
        break;
    }
    case 98535:
    {
        returnValue = F("Faberweg");
        break;
    }
    case 98536:
    {
        returnValue = F("Faberäcker");
        break;
    }
    case 98537:
    {
        returnValue = F("Fabi-Espan");
        break;
    }
    case 98538:
    {
        returnValue = F("Fabian-von-Schlabrendorff-Str.");
        break;
    }
    case 98539:
    {
        returnValue = F("Fabiansplatz");
        break;
    }
    case 98540:
    {
        returnValue = F("Fabianstr.");
        break;
    }
    case 98541:
    {
        returnValue = F("Fabianus-Kirchplatz");
        break;
    }
    case 98542:
    {
        returnValue = F("Fabianusstr.");
        break;
    }
    case 98543:
    {
        returnValue = F("Fabianusweg");
        break;
    }
    case 98544:
    {
        returnValue = F("Fabianweg");
        break;
    }
    case 98545:
    {
        returnValue = F("Fabinistr.");
        break;
    }
    case 98546:
    {
        returnValue = F("Fabiolastr.");
        break;
    }
    case 98547:
    {
        returnValue = F("Fabricestr.");
        break;
    }
    case 98548:
    {
        returnValue = F("Fabriciusring");
        break;
    }
    case 98549:
    {
        returnValue = F("Fabriciusstieg");
        break;
    }
    case 98550:
    {
        returnValue = F("Fabriciusstr.");
        break;
    }
    case 98551:
    {
        returnValue = F("Fabriciusweg");
        break;
    }
    case 98552:
    {
        returnValue = F("Fabrik");
        break;
    }
    case 98553:
    {
        returnValue = F("Fabrik Sonntag");
        break;
    }
    case 98554:
    {
        returnValue = F("Fabrikberg");
        break;
    }
    case 98555:
    {
        returnValue = F("Fabrikenstr.");
        break;
    }
    case 98556:
    {
        returnValue = F("Fabrikfeld");
        break;
    }
    case 98557:
    {
        returnValue = F("Fabrikgasse");
        break;
    }
    case 98558:
    {
        returnValue = F("Fabrikgelände");
        break;
    }
    case 98559:
    {
        returnValue = F("Fabrikhof");
        break;
    }
    case 98560:
    {
        returnValue = F("Fabrikle");
        break;
    }
    case 98561:
    {
        returnValue = F("Fabrikpfad");
        break;
    }
    case 98562:
    {
        returnValue = F("Fabrikpfädle");
        break;
    }
    case 98563:
    {
        returnValue = F("Fabrikplatz");
        break;
    }
    case 98564:
    {
        returnValue = F("Fabrikshof");
        break;
    }
    case 98565:
    {
        returnValue = F("Fabrikstationstr.");
        break;
    }
    case 98566:
    {
        returnValue = F("Fabriksteig");
        break;
    }
    case 98567:
    {
        returnValue = F("Fabrikstiege");
        break;
    }
    case 98568:
    {
        returnValue = F("Fabrikstr.");
        break;
    }
    case 98569:
    {
        returnValue = F("Fabrikswieke");
        break;
    }
    case 98570:
    {
        returnValue = F("Fabrikvorstadt");
        break;
    }
    case 98571:
    {
        returnValue = F("Fabrikweg");
        break;
    }
    case 98572:
    {
        returnValue = F("Fabrikzeile");
        break;
    }
    case 98573:
    {
        returnValue = F("Fabrikzeile (Jägerzeile)");
        break;
    }
    case 98574:
    {
        returnValue = F("Fabristr.");
        break;
    }
    case 98575:
    {
        returnValue = F("Fabritiusstr.");
        break;
    }
    case 98576:
    {
        returnValue = F("Fabriweg");
        break;
    }
    case 98577:
    {
        returnValue = F("Fabrystr.");
        break;
    }
    case 98578:
    {
        returnValue = F("Fabvierstr.");
        break;
    }
    case 98579:
    {
        returnValue = F("Fabystr.");
        break;
    }
    case 98580:
    {
        returnValue = F("Fach");
        break;
    }
    case 98581:
    {
        returnValue = F("Fachackerweg");
        break;
    }
    case 98582:
    {
        returnValue = F("Fachastr.");
        break;
    }
    case 98583:
    {
        returnValue = F("Fachenberger Weg");
        break;
    }
    case 98584:
    {
        returnValue = F("Fachendorf");
        break;
    }
    case 98585:
    {
        returnValue = F("Fachenfelde");
        break;
    }
    case 98586:
    {
        returnValue = F("Fachenfelder Eck");
        break;
    }
    case 98587:
    {
        returnValue = F("Fachenfelder Weg");
        break;
    }
    case 98588:
    {
        returnValue = F("Fachenfelder Winkel");
        break;
    }
    case 98589:
    {
        returnValue = F("Fachfeldstr.");
        break;
    }
    case 98590:
    {
        returnValue = F("Fachgraben");
        break;
    }
    case 98591:
    {
        returnValue = F("Fachinger Weg");
        break;
    }
    case 98592:
    {
        returnValue = F("Fachklinik");
        break;
    }
    case 98593:
    {
        returnValue = F("Fachklinik Systeam GmbH");
        break;
    }
    case 98594:
    {
        returnValue = F("Fachnerstr.");
        break;
    }
    case 98595:
    {
        returnValue = F("Fachrainstr.");
        break;
    }
    case 98596:
    {
        returnValue = F("Fachriastr.");
        break;
    }
    case 98597:
    {
        returnValue = F("Fachschulstr.");
        break;
    }
    case 98598:
    {
        returnValue = F("Fachsenfelder Str.");
        break;
    }
    case 98599:
    {
        returnValue = F("Fachweg");
        break;
    }
    case 98600:
    {
        returnValue = F("Fachwerkstr.");
        break;
    }
    case 98601:
    {
        returnValue = F("Fackelberg");
        break;
    }
    case 98602:
    {
        returnValue = F("Fackelbrückenstr.");
        break;
    }
    case 98603:
    {
        returnValue = F("Fackeldeystr.");
        break;
    }
    case 98604:
    {
        returnValue = F("Fackelkampsweg");
        break;
    }
    case 98605:
    {
        returnValue = F("Fackelrondell");
        break;
    }
    case 98606:
    {
        returnValue = F("Fackelsberg");
        break;
    }
    case 98607:
    {
        returnValue = F("Fackelstr.");
        break;
    }
    case 98608:
    {
        returnValue = F("Fackelswiesenweg");
        break;
    }
    case 98609:
    {
        returnValue = F("Fackelweg");
        break;
    }
    case 98610:
    {
        returnValue = F("Fackelwoogstr.");
        break;
    }
    case 98611:
    {
        returnValue = F("Fackenburger Allee");
        break;
    }
    case 98612:
    {
        returnValue = F("Fackendorfer Str.");
        break;
    }
    case 98613:
    {
        returnValue = F("Fackenhaldenweg");
        break;
    }
    case 98614:
    {
        returnValue = F("Fackenhöfer Weg");
        break;
    }
    case 98615:
    {
        returnValue = F("Fackensief");
        break;
    }
    case 98616:
    {
        returnValue = F("Fackersfeld");
        break;
    }
    case 98617:
    {
        returnValue = F("Fackertsfeld");
        break;
    }
    case 98618:
    {
        returnValue = F("Fackertstr.");
        break;
    }
    case 98619:
    {
        returnValue = F("Factory-Passage");
        break;
    }
    case 98620:
    {
        returnValue = F("Fadens Tannen");
        break;
    }
    case 98621:
    {
        returnValue = F("Fadenweg");
        break;
    }
    case 98622:
    {
        returnValue = F("Fadheider Str.");
        break;
    }
    case 98623:
    {
        returnValue = F("Fading");
        break;
    }
    case 98624:
    {
        returnValue = F("Fadingerstr.");
        break;
    }
    case 98625:
    {
        returnValue = F("Fadingerweg");
        break;
    }
    case 98626:
    {
        returnValue = F("Faeschstr.");
        break;
    }
    case 98627:
    {
        returnValue = F("Fafnerstr.");
        break;
    }
    case 98628:
    {
        returnValue = F("Faganastr.");
        break;
    }
    case 98629:
    {
        returnValue = F("Faganaweg");
        break;
    }
    case 98630:
    {
        returnValue = F("Faganenstr.");
        break;
    }
    case 98631:
    {
        returnValue = F("Fagerastr.");
        break;
    }
    case 98632:
    {
        returnValue = F("Faggenwinkel");
        break;
    }
    case 98633:
    {
        returnValue = F("Faginolfstr.");
        break;
    }
    case 98634:
    {
        returnValue = F("Fagiusstr.");
        break;
    }
    case 98635:
    {
        returnValue = F("Fagusweg");
        break;
    }
    case 98636:
    {
        returnValue = F("Fahlbachtal");
        break;
    }
    case 98637:
    {
        returnValue = F("Fahlbuschbrücke");
        break;
    }
    case 98638:
    {
        returnValue = F("Fahlenbacher Str.");
        break;
    }
    case 98639:
    {
        returnValue = F("Fahlenbachstr.");
        break;
    }
    case 98640:
    {
        returnValue = F("Fahlenberg");
        break;
    }
    case 98641:
    {
        returnValue = F("Fahlenbock");
        break;
    }
    case 98642:
    {
        returnValue = F("Fahlenbreede");
        break;
    }
    case 98643:
    {
        returnValue = F("Fahlenbruch");
        break;
    }
    case 98644:
    {
        returnValue = F("Fahlenbuschstr.");
        break;
    }
    case 98645:
    {
        returnValue = F("Fahlenhöhe");
        break;
    }
    case 98646:
    {
        returnValue = F("Fahlenkamp");
        break;
    }
    case 98647:
    {
        returnValue = F("Fahlenkampsweg");
        break;
    }
    case 98648:
    {
        returnValue = F("Fahler");
        break;
    }
    case 98649:
    {
        returnValue = F("Fahler Weg");
        break;
    }
    case 98650:
    {
        returnValue = F("Fahlerstr.");
        break;
    }
    case 98651:
    {
        returnValue = F("Fahlerweg");
        break;
    }
    case 98652:
    {
        returnValue = F("Fahlheimer Weg");
        break;
    }
    case 98653:
    {
        returnValue = F("Fahlhorster Dorfstr.");
        break;
    }
    case 98654:
    {
        returnValue = F("Fahlhorster Weg");
        break;
    }
    case 98655:
    {
        returnValue = F("Fahlscheider Weg");
        break;
    }
    case 98656:
    {
        returnValue = F("Fahlser Str.");
        break;
    }
    case 98657:
    {
        returnValue = F("Fahlstiege");
        break;
    }
    case 98658:
    {
        returnValue = F("Fahlte");
        break;
    }
    case 98659:
    {
        returnValue = F("Fahltorstr.");
        break;
    }
    case 98660:
    {
        returnValue = F("Fahltskamp");
        break;
    }
    case 98661:
    {
        returnValue = F("Fahltsweg");
        break;
    }
    case 98662:
    {
        returnValue = F("Fahltsweide");
        break;
    }
    case 98663:
    {
        returnValue = F("Fahltweg");
        break;
    }
    case 98664:
    {
        returnValue = F("Fahlweg");
        break;
    }
    case 98665:
    {
        returnValue = F("Fahn");
        break;
    }
    case 98666:
    {
        returnValue = F("Fahnbacher Str.");
        break;
    }
    case 98667:
    {
        returnValue = F("Fahndorfer Feld");
        break;
    }
    case 98668:
    {
        returnValue = F("Fahneburgstr.");
        break;
    }
    case 98669:
    {
        returnValue = F("Fahnenacker");
        break;
    }
    case 98670:
    {
        returnValue = F("Fahnenbergplatz");
        break;
    }
    case 98671:
    {
        returnValue = F("Fahnendriesch");
        break;
    }
    case 98672:
    {
        returnValue = F("Fahnengasse");
        break;
    }
    case 98673:
    {
        returnValue = F("Fahnenkamp");
        break;
    }
    case 98674:
    {
        returnValue = F("Fahnenstieh");
        break;
    }
    case 98675:
    {
        returnValue = F("Fahnenstr.");
        break;
    }
    case 98676:
    {
        returnValue = F("Fahnenweg");
        break;
    }
    case 98677:
    {
        returnValue = F("Fahnenösch");
        break;
    }
    case 98678:
    {
        returnValue = F("Fahner Weg");
        break;
    }
    case 98679:
    {
        returnValue = F("Fahnerscher Weg");
        break;
    }
    case 98680:
    {
        returnValue = F("Fahnerweg");
        break;
    }
    case 98681:
    {
        returnValue = F("Fahnestr.");
        break;
    }
    case 98682:
    {
        returnValue = F("Fahneyweg");
        break;
    }
    case 98683:
    {
        returnValue = F("Fahnhorststr.");
        break;
    }
    case 98684:
    {
        returnValue = F("Fahnhuser Str.");
        break;
    }
    case 98685:
    {
        returnValue = F("Fahnmühle");
        break;
    }
    case 98686:
    {
        returnValue = F("Fahnster Moorweg");
        break;
    }
    case 98687:
    {
        returnValue = F("Fahnster Streek");
        break;
    }
    case 98688:
    {
        returnValue = F("Fahntje");
        break;
    }
    case 98689:
    {
        returnValue = F("Fahnweg");
        break;
    }
    case 98690:
    {
        returnValue = F("Fahracker");
        break;
    }
    case 98691:
    {
        returnValue = F("Fahrbachstr.");
        break;
    }
    case 98692:
    {
        returnValue = F("Fahrbachweg");
        break;
    }
    case 98693:
    {
        returnValue = F("Fahrbeckgasse");
        break;
    }
    case 98694:
    {
        returnValue = F("Fahrberg");
        break;
    }
    case 98695:
    {
        returnValue = F("Fahrbergweg");
        break;
    }
    case 98696:
    {
        returnValue = F("Fahrbinder Str.");
        break;
    }
    case 98697:
    {
        returnValue = F("Fahrboomsweg");
        break;
    }
    case 98698:
    {
        returnValue = F("Fahrbornschneise");
        break;
    }
    case 98699:
    {
        returnValue = F("Fahrbornschneise/Gaulskopfweg");
        break;
    }
    case 98700:
    {
        returnValue = F("Fahren");
        break;
    }
    case 98701:
    {
        returnValue = F("Fahrenbach");
        break;
    }
    case 98702:
    {
        returnValue = F("Fahrenbacher Kopf");
        break;
    }
    case 98703:
    {
        returnValue = F("Fahrenbacher Str.");
        break;
    }
    case 98704:
    {
        returnValue = F("Fahrenbachstr.");
        break;
    }
    case 98705:
    {
        returnValue = F("Fahrenbecke");
        break;
    }
    case 98706:
    {
        returnValue = F("Fahrenberg");
        break;
    }
    case 98707:
    {
        returnValue = F("Fahrenberger Str.");
        break;
    }
    case 98708:
    {
        returnValue = F("Fahrenbergstr.");
        break;
    }
    case 98709:
    {
        returnValue = F("Fahrenbergsweg");
        break;
    }
    case 98710:
    {
        returnValue = F("Fahrenbrede");
        break;
    }
    case 98711:
    {
        returnValue = F("Fahrenbreede");
        break;
    }
    case 98712:
    {
        returnValue = F("Fahrenbreite");
        break;
    }
    case 98713:
    {
        returnValue = F("Fahrenbrink");
        break;
    }
    case 98714:
    {
        returnValue = F("Fahrendahl");
        break;
    }
    case 98715:
    {
        returnValue = F("Fahrendelle");
        break;
    }
    case 98716:
    {
        returnValue = F("Fahrendeller Str.");
        break;
    }
    case 98717:
    {
        returnValue = F("Fahrendorf");
        break;
    }
    case 98718:
    {
        returnValue = F("Fahrendorfer Dorfstr.");
        break;
    }
    case 98719:
    {
        returnValue = F("Fahrendorfer Weg");
        break;
    }
    case 98720:
    {
        returnValue = F("Fahrener Mühle");
        break;
    }
    case 98721:
    {
        returnValue = F("Fahrener Weg");
        break;
    }
    case 98722:
    {
        returnValue = F("Fahrenfeld");
        break;
    }
    case 98723:
    {
        returnValue = F("Fahrenfelde");
        break;
    }
    case 98724:
    {
        returnValue = F("Fahrenfeldstr.");
        break;
    }
    case 98725:
    {
        returnValue = F("Fahrenheitstr.");
        break;
    }
    case 98726:
    {
        returnValue = F("Fahrenheitweg");
        break;
    }
    case 98727:
    {
        returnValue = F("Fahrenholz");
        break;
    }
    case 98728:
    {
        returnValue = F("Fahrenholzer Str.");
        break;
    }
    case 98729:
    {
        returnValue = F("Fahrenholzer Weg");
        break;
    }
    case 98730:
    {
        returnValue = F("Fahrenholzstr.");
        break;
    }
    case 98731:
    {
        returnValue = F("Fahrenhorst");
        break;
    }
    case 98732:
    {
        returnValue = F("Fahrenhorster Str.");
        break;
    }
    case 98733:
    {
        returnValue = F("Fahrenhorster Weg");
        break;
    }
    case 98734:
    {
        returnValue = F("Fahrenkamp");
        break;
    }
    case 98735:
    {
        returnValue = F("Fahrenkampstr.");
        break;
    }
    case 98736:
    {
        returnValue = F("Fahrenkothen");
        break;
    }
    case 98737:
    {
        returnValue = F("Fahrenkruger Weg");
        break;
    }
    case 98738:
    {
        returnValue = F("Fahrenkrön");
        break;
    }
    case 98739:
    {
        returnValue = F("Fahrenkrönstieg");
        break;
    }
    case 98740:
    {
        returnValue = F("Fahrenkuhl");
        break;
    }
    case 98741:
    {
        returnValue = F("Fahrenlüth");
        break;
    }
    case 98742:
    {
        returnValue = F("Fahrenplatz");
        break;
    }
    case 98743:
    {
        returnValue = F("Fahrensbachstr.");
        break;
    }
    case 98744:
    {
        returnValue = F("Fahrensberg");
        break;
    }
    case 98745:
    {
        returnValue = F("Fahrensbruch");
        break;
    }
    case 98746:
    {
        returnValue = F("Fahrenseifen");
        break;
    }
    case 98747:
    {
        returnValue = F("Fahrenseifener Weg");
        break;
    }
    case 98748:
    {
        returnValue = F("Fahrenshauptbergschneise");
        break;
    }
    case 98749:
    {
        returnValue = F("Fahrensodde");
        break;
    }
    case 98750:
    {
        returnValue = F("Fahrental");
        break;
    }
    case 98751:
    {
        returnValue = F("Fahrentalstr.");
        break;
    }
    case 98752:
    {
        returnValue = F("Fahrenweg");
        break;
    }
    case 98753:
    {
        returnValue = F("Fahrenweiher");
        break;
    }
    case 98754:
    {
        returnValue = F("Fahrenwies");
        break;
    }
    case 98755:
    {
        returnValue = F("Fahrenwiese");
        break;
    }
    case 98756:
    {
        returnValue = F("Fahrer Str.");
        break;
    }
    case 98757:
    {
        returnValue = F("Fahres");
        break;
    }
    case 98758:
    {
        returnValue = F("Fahrflurweg");
        break;
    }
    case 98759:
    {
        returnValue = F("Fahrgartenweg");
        break;
    }
    case 98760:
    {
        returnValue = F("Fahrgasse");
        break;
    }
    case 98761:
    {
        returnValue = F("Fahrhauerstr.");
        break;
    }
    case 98762:
    {
        returnValue = F("Fahriehen");
        break;
    }
    case 98763:
    {
        returnValue = F("Fahringshäuser Weg");
        break;
    }
    case 98764:
    {
        returnValue = F("Fahringsmühle");
        break;
    }
    case 98765:
    {
        returnValue = F("Fahringsstr.");
        break;
    }
    case 98766:
    {
        returnValue = F("Fahrionstaffel");
        break;
    }
    case 98767:
    {
        returnValue = F("Fahrionstr.");
        break;
    }
    case 98768:
    {
        returnValue = F("Fahrkamp");
        break;
    }
    case 98769:
    {
        returnValue = F("Fahrkopfweg");
        break;
    }
    case 98770:
    {
        returnValue = F("Fahrlache");
        break;
    }
    case 98771:
    {
        returnValue = F("Fahrlachstr.");
        break;
    }
    case 98772:
    {
        returnValue = F("Fahrlehenkopfweg");
        break;
    }
    case 98773:
    {
        returnValue = F("Fahrländer Allee");
        break;
    }
    case 98774:
    {
        returnValue = F("Fahrländer Chaussee");
        break;
    }
    case 98775:
    {
        returnValue = F("Fahrländer Damm");
        break;
    }
    case 98776:
    {
        returnValue = F("Fahrländer Str.");
        break;
    }
    case 98777:
    {
        returnValue = F("Fahrländer Weg");
        break;
    }
    case 98778:
    {
        returnValue = F("Fahrländer Weinberg");
        break;
    }
    case 98779:
    {
        returnValue = F("Fahrlängten");
        break;
    }
    case 98780:
    {
        returnValue = F("Fahrlücke");
        break;
    }
    case 98781:
    {
        returnValue = F("Fahrmannsbachstr.");
        break;
    }
    case 98782:
    {
        returnValue = F("Fahrmannstr.");
        break;
    }
    case 98783:
    {
        returnValue = F("Fahrnauer Str.");
        break;
    }
    case 98784:
    {
        returnValue = F("Fahrnauhofweg");
        break;
    }
    case 98785:
    {
        returnValue = F("Fahrnauweg");
        break;
    }
    case 98786:
    {
        returnValue = F("Fahrnbach");
        break;
    }
    case 98787:
    {
        returnValue = F("Fahrnbacher Str.");
        break;
    }
    case 98788:
    {
        returnValue = F("Fahrnbacherweg");
        break;
    }
    case 98789:
    {
        returnValue = F("Fahrnbichlstr.");
        break;
    }
    case 98790:
    {
        returnValue = F("Fahrnbuck");
        break;
    }
    case 98791:
    {
        returnValue = F("Fahrnbühlweg");
        break;
    }
    case 98792:
    {
        returnValue = F("Fahrndorf");
        break;
    }
    case 98793:
    {
        returnValue = F("Fahrner Bruch");
        break;
    }
    case 98794:
    {
        returnValue = F("Fahrner Str.");
        break;
    }
    case 98795:
    {
        returnValue = F("Fahrnpoint");
        break;
    }
    case 98796:
    {
        returnValue = F("Fahrposterweg");
        break;
    }
    case 98797:
    {
        returnValue = F("Fahrpoterne");
        break;
    }
    case 98798:
    {
        returnValue = F("Fahrrad Parcours");
        break;
    }
    case 98799:
    {
        returnValue = F("Fahrrad-Tunnel");
        break;
    }
    case 98800:
    {
        returnValue = F("Fahrrad-Verkehrsübungsplatz");
        break;
    }
    case 98801:
    {
        returnValue = F("Fahrradbrücke Römerstr. über die A8");
        break;
    }
    case 98802:
    {
        returnValue = F("Fahrradparcours Verkehrsübungsfläche");
        break;
    }
    case 98803:
    {
        returnValue = F("Fahrradpark");
        break;
    }
    case 98804:
    {
        returnValue = F("Fahrradparkplatz FSG");
        break;
    }
    case 98805:
    {
        returnValue = F("Fahrradstr.");
        break;
    }
    case 98806:
    {
        returnValue = F("Fahrradweg Einem - Haverbeck");
        break;
    }
    case 98807:
    {
        returnValue = F("Fahrradübungsgelände");
        break;
    }
    case 98808:
    {
        returnValue = F("Fahrseifen");
        break;
    }
    case 98809:
    {
        returnValue = F("Fahrstedter Mühle");
        break;
    }
    case 98810:
    {
        returnValue = F("Fahrstedterwesterdeich");
        break;
    }
    case 98811:
    {
        returnValue = F("Fahrstr.");
        break;
    }
    case 98812:
    {
        returnValue = F("Fahrstuhlweg");
        break;
    }
    case 98813:
    {
        returnValue = F("Fahrt");
        break;
    }
    case 98814:
    {
        returnValue = F("Fahrtalweg");
        break;
    }
    case 98815:
    {
        returnValue = F("Fahrteich");
        break;
    }
    case 98816:
    {
        returnValue = F("Fahrteichweg");
        break;
    }
    case 98817:
    {
        returnValue = F("Fahrtenstr.");
        break;
    }
    case 98818:
    {
        returnValue = F("Fahrtgasse");
        break;
    }
    case 98819:
    {
        returnValue = F("Fahrtkopfweg");
        break;
    }
    case 98820:
    {
        returnValue = F("Fahrtoft");
        break;
    }
    case 98821:
    {
        returnValue = F("Fahrtstr.");
        break;
    }
    case 98822:
    {
        returnValue = F("Fahrtweg");
        break;
    }
    case 98823:
    {
        returnValue = F("Fahrweg");
        break;
    }
    case 98824:
    {
        returnValue = F("Fahrweg Thammenhain");
        break;
    }
    case 98825:
    {
        returnValue = F("Fahrweg zum Parkplatz");
        break;
    }
    case 98826:
    {
        returnValue = F("Fahrweg, Grundstückszufahrt");
        break;
    }
    case 98827:
    {
        returnValue = F("Fahrwiese");
        break;
    }
    case 98828:
    {
        returnValue = F("Fahrwiesendamm");
        break;
    }
    case 98829:
    {
        returnValue = F("Fahrzeugverladerampe");
        break;
    }
    case 98830:
    {
        returnValue = F("Fahräcker");
        break;
    }
    case 98831:
    {
        returnValue = F("Faichtmayrstr.");
        break;
    }
    case 98832:
    {
        returnValue = F("Faider Weg");
        break;
    }
    case 98833:
    {
        returnValue = F("Faidkoppel");
        break;
    }
    case 98834:
    {
        returnValue = F("Faigeleweg");
        break;
    }
    case 98835:
    {
        returnValue = F("Failenschmidstr.");
        break;
    }
    case 98836:
    {
        returnValue = F("Failnbach");
        break;
    }
    case 98837:
    {
        returnValue = F("Failsworthweg");
        break;
    }
    case 98838:
    {
        returnValue = F("Fainaggstr.");
        break;
    }
    case 98839:
    {
        returnValue = F("Fair-View Drive");
        break;
    }
    case 98840:
    {
        returnValue = F("Fairchild Avenue");
        break;
    }
    case 98841:
    {
        returnValue = F("Fairchild Court");
        break;
    }
    case 98842:
    {
        returnValue = F("Fairway Brücke");
        break;
    }
    case 98843:
    {
        returnValue = F("Faislbach");
        break;
    }
    case 98844:
    {
        returnValue = F("Faisstenhofweg");
        break;
    }
    case 98845:
    {
        returnValue = F("Faistenberg");
        break;
    }
    case 98846:
    {
        returnValue = F("Faistenbergerstr.");
        break;
    }
    case 98847:
    {
        returnValue = F("Faistenhaarer Str.");
        break;
    }
    case 98848:
    {
        returnValue = F("Faistenlohestr.");
        break;
    }
    case 98849:
    {
        returnValue = F("Faistenmantlgasse");
        break;
    }
    case 98850:
    {
        returnValue = F("Faistweg");
        break;
    }
    case 98851:
    {
        returnValue = F("Faißtstr.");
        break;
    }
    case 98852:
    {
        returnValue = F("Faißtweg");
        break;
    }
    case 98853:
    {
        returnValue = F("Fakelau");
        break;
    }
    case 98854:
    {
        returnValue = F("Fakenhahner Weg");
        break;
    }
    case 98855:
    {
        returnValue = F("Faktor-Rothe-Str.");
        break;
    }
    case 98856:
    {
        returnValue = F("Faktoreigasse");
        break;
    }
    case 98857:
    {
        returnValue = F("Faktoreistr.");
        break;
    }
    case 98858:
    {
        returnValue = F("Fakturberg");
        break;
    }
    case 98859:
    {
        returnValue = F("Fakultätsweg");
        break;
    }
    case 98860:
    {
        returnValue = F("Falak");
        break;
    }
    case 98861:
    {
        returnValue = F("Falbecke");
        break;
    }
    case 98862:
    {
        returnValue = F("Falbenhennenstr.");
        break;
    }
    case 98863:
    {
        returnValue = F("Falbenstr.");
        break;
    }
    case 98864:
    {
        returnValue = F("Falbentaler Weg");
        break;
    }
    case 98865:
    {
        returnValue = F("Falbenthal");
        break;
    }
    case 98866:
    {
        returnValue = F("Falbenthaler Str.");
        break;
    }
    case 98867:
    {
        returnValue = F("Falbenthaler Weg");
        break;
    }
    case 98868:
    {
        returnValue = F("Falbenweg");
        break;
    }
    case 98869:
    {
        returnValue = F("Falbenäcker");
        break;
    }
    case 98870:
    {
        returnValue = F("Falchenhau");
        break;
    }
    case 98871:
    {
        returnValue = F("Falchenmahdweg");
        break;
    }
    case 98872:
    {
        returnValue = F("Falchenstr.");
        break;
    }
    case 98873:
    {
        returnValue = F("Falchenweg");
        break;
    }
    case 98874:
    {
        returnValue = F("Falchstr.");
        break;
    }
    case 98875:
    {
        returnValue = F("Falckenbergstr.");
        break;
    }
    case 98876:
    {
        returnValue = F("Falckenheiner Str.");
        break;
    }
    case 98877:
    {
        returnValue = F("Falckensteiner Strand");
        break;
    }
    case 98878:
    {
        returnValue = F("Falckensteingasse");
        break;
    }
    case 98879:
    {
        returnValue = F("Falckensteinstr.");
        break;
    }
    case 98880:
    {
        returnValue = F("Falckstr.");
        break;
    }
    case 98881:
    {
        returnValue = F("Faldera-Park");
        break;
    }
    case 98882:
    {
        returnValue = F("Falderastr.");
        break;
    }
    case 98883:
    {
        returnValue = F("Falderbaumstr.");
        break;
    }
    case 98884:
    {
        returnValue = F("Faldernstr.");
        break;
    }
    case 98885:
    {
        returnValue = F("Faldernweg");
        break;
    }
    case 98886:
    {
        returnValue = F("Falderstr.");
        break;
    }
    case 98887:
    {
        returnValue = F("Faldisch Jass");
        break;
    }
    case 98888:
    {
        returnValue = F("Faleska-Meinig-Str.");
        break;
    }
    case 98889:
    {
        returnValue = F("Falgerstr.");
        break;
    }
    case 98890:
    {
        returnValue = F("Falk-Müller-Str.");
        break;
    }
    case 98891:
    {
        returnValue = F("Falkaer Str.");
        break;
    }
    case 98892:
    {
        returnValue = F("Falkatweg");
        break;
    }
    case 98893:
    {
        returnValue = F("Falkemich");
        break;
    }
    case 98894:
    {
        returnValue = F("Falken-Gesäßer Str.");
        break;
    }
    case 98895:
    {
        returnValue = F("Falkenackerweg");
        break;
    }
    case 98896:
    {
        returnValue = F("Falkenau");
        break;
    }
    case 98897:
    {
        returnValue = F("Falkenaue");
        break;
    }
    case 98898:
    {
        returnValue = F("Falkenaueler Str.");
        break;
    }
    case 98899:
    {
        returnValue = F("Falkenaueler Weg");
        break;
    }
    case 98900:
    {
        returnValue = F("Falkenauer Str.");
        break;
    }
    case 98901:
    {
        returnValue = F("Falkenauer Weg");
        break;
    }
    case 98902:
    {
        returnValue = F("Falkenauer Wiesenstr.");
        break;
    }
    case 98903:
    {
        returnValue = F("Falkenaustr.");
        break;
    }
    case 98904:
    {
        returnValue = F("Falkenbacher Hauptstr.");
        break;
    }
    case 98905:
    {
        returnValue = F("Falkenbacher Str.");
        break;
    }
    case 98906:
    {
        returnValue = F("Falkenbachstr.");
        break;
    }
    case 98907:
    {
        returnValue = F("Falkenbeize");
        break;
    }
    case 98908:
    {
        returnValue = F("Falkenberg");
        break;
    }
    case 98909:
    {
        returnValue = F("Falkenberg Adolf-Damaschke-Str.");
        break;
    }
    case 98910:
    {
        returnValue = F("Falkenberg Parksiedlung");
        break;
    }
    case 98911:
    {
        returnValue = F("Falkenberg-Str.");
        break;
    }
    case 98912:
    {
        returnValue = F("Falkenbergbergweg");
        break;
    }
    case 98913:
    {
        returnValue = F("Falkenberger Chaussee");
        break;
    }
    case 98914:
    {
        returnValue = F("Falkenberger Dorfstr.");
        break;
    }
    case 98915:
    {
        returnValue = F("Falkenberger Hauptstr.");
        break;
    }
    case 98916:
    {
        returnValue = F("Falkenberger Haupttraße");
        break;
    }
    case 98917:
    {
        returnValue = F("Falkenberger Landstr.");
        break;
    }
    case 98918:
    {
        returnValue = F("Falkenberger Str.");
        break;
    }
    case 98919:
    {
        returnValue = F("Falkenberger Weg");
        break;
    }
    case 98920:
    {
        returnValue = F("Falkenbergerstr.");
        break;
    }
    case 98921:
    {
        returnValue = F("Falkenbergstr.");
        break;
    }
    case 98922:
    {
        returnValue = F("Falkenbergswerder");
        break;
    }
    case 98923:
    {
        returnValue = F("Falkenbergweg");
        break;
    }
    case 98924:
    {
        returnValue = F("Falkenblick");
        break;
    }
    case 98925:
    {
        returnValue = F("Falkenburg");
        break;
    }
    case 98926:
    {
        returnValue = F("Falkenburger Stieg");
        break;
    }
    case 98927:
    {
        returnValue = F("Falkenburger Str.");
        break;
    }
    case 98928:
    {
        returnValue = F("Falkenburger Weg");
        break;
    }
    case 98929:
    {
        returnValue = F("Falkenburgermühle");
        break;
    }
    case 98930:
    {
        returnValue = F("Falkenburgstr.");
        break;
    }
    case 98931:
    {
        returnValue = F("Falkenburgweg");
        break;
    }
    case 98932:
    {
        returnValue = F("Falkenbuschweg");
        break;
    }
    case 98933:
    {
        returnValue = F("Falkendamm");
        break;
    }
    case 98934:
    {
        returnValue = F("Falkendieker Str.");
        break;
    }
    case 98935:
    {
        returnValue = F("Falkendorfer Str.");
        break;
    }
    case 98936:
    {
        returnValue = F("Falkendorfer Weg");
        break;
    }
    case 98937:
    {
        returnValue = F("Falkeneck");
        break;
    }
    case 98938:
    {
        returnValue = F("Falkenecksweg");
        break;
    }
    case 98939:
    {
        returnValue = F("Falkeneggstr.");
        break;
    }
    case 98940:
    {
        returnValue = F("Falkener Landstr.");
        break;
    }
    case 98941:
    {
        returnValue = F("Falkener Str.");
        break;
    }
    case 98942:
    {
        returnValue = F("Falkenfang");
        break;
    }
    case 98943:
    {
        returnValue = F("Falkenfelder Moor");
        break;
    }
    case 98944:
    {
        returnValue = F("Falkenfelder Str.");
        break;
    }
    case 98945:
    {
        returnValue = F("Falkenfelsenweg");
        break;
    }
    case 98946:
    {
        returnValue = F("Falkenfelser Str.");
        break;
    }
    case 98947:
    {
        returnValue = F("Falkenflucht");
        break;
    }
    case 98948:
    {
        returnValue = F("Falkenflur");
        break;
    }
    case 98949:
    {
        returnValue = F("Falkengarten");
        break;
    }
    case 98950:
    {
        returnValue = F("Falkengasse");
        break;
    }
    case 98951:
    {
        returnValue = F("Falkengrund");
        break;
    }
    case 98952:
    {
        returnValue = F("Falkenhagen");
        break;
    }
    case 98953:
    {
        returnValue = F("Falkenhagener Anger");
        break;
    }
    case 98954:
    {
        returnValue = F("Falkenhagener Damm");
        break;
    }
    case 98955:
    {
        returnValue = F("Falkenhagener Str.");
        break;
    }
    case 98956:
    {
        returnValue = F("Falkenhagener Weg");
        break;
    }
    case 98957:
    {
        returnValue = F("Falkenhain");
        break;
    }
    case 98958:
    {
        returnValue = F("Falkenhainer Chaussee");
        break;
    }
    case 98959:
    {
        returnValue = F("Falkenhainer Flügel");
        break;
    }
    case 98960:
    {
        returnValue = F("Falkenhainer Str.");
        break;
    }
    case 98961:
    {
        returnValue = F("Falkenhainer Weg");
        break;
    }
    case 98962:
    {
        returnValue = F("Falkenhalden");
        break;
    }
    case 98963:
    {
        returnValue = F("Falkenhaldenweg");
        break;
    }
    case 98964:
    {
        returnValue = F("Falkenhaldeweg");
        break;
    }
    case 98965:
    {
        returnValue = F("Falkenhammerweg");
        break;
    }
    case 98966:
    {
        returnValue = F("Falkenhardt");
        break;
    }
    case 98967:
    {
        returnValue = F("Falkenhausweg");
        break;
    }
    case 98968:
    {
        returnValue = F("Falkenhaynstr.");
        break;
    }
    case 98969:
    {
        returnValue = F("Falkenhof");
        break;
    }
    case 98970:
    {
        returnValue = F("Falkenhofstr.");
        break;
    }
    case 98971:
    {
        returnValue = F("Falkenhofweg");
        break;
    }
    case 98972:
    {
        returnValue = F("Falkenhorst");
        break;
    }
    case 98973:
    {
        returnValue = F("Falkenhorstweg");
        break;
    }
    case 98974:
    {
        returnValue = F("Falkenhusener Weg");
        break;
    }
    case 98975:
    {
        returnValue = F("Falkenhäuser Weg");
        break;
    }
    case 98976:
    {
        returnValue = F("Falkenhöfle");
        break;
    }
    case 98977:
    {
        returnValue = F("Falkenhöhe");
        break;
    }
    case 98978:
    {
        returnValue = F("Falkenhüttenstr.");
        break;
    }
    case 98979:
    {
        returnValue = F("Falkenkamp");
        break;
    }
    case 98980:
    {
        returnValue = F("Falkenkopfstr.");
        break;
    }
    case 98981:
    {
        returnValue = F("Falkenkopfweg");
        break;
    }
    case 98982:
    {
        returnValue = F("Falkenkorso");
        break;
    }
    case 98983:
    {
        returnValue = F("Falkenkrugstr.");
        break;
    }
    case 98984:
    {
        returnValue = F("Falkenluster Allee");
        break;
    }
    case 98985:
    {
        returnValue = F("Falkenmühle");
        break;
    }
    case 98986:
    {
        returnValue = F("Falkenplatz");
        break;
    }
    case 98987:
    {
        returnValue = F("Falkenrebenweg");
        break;
    }
    case 98988:
    {
        returnValue = F("Falkenrecks Heide");
        break;
    }
    case 98989:
    {
        returnValue = F("Falkenrehder Chaussee");
        break;
    }
    case 98990:
    {
        returnValue = F("Falkenrehder Weg");
        break;
    }
    case 98991:
    {
        returnValue = F("Falkenreihe");
        break;
    }
    case 98992:
    {
        returnValue = F("Falkenried");
        break;
    }
    case 98993:
    {
        returnValue = F("Falkenring");
        break;
    }
    case 98994:
    {
        returnValue = F("Falkenrotter Str.");
        break;
    }
    case 98995:
    {
        returnValue = F("Falkenschlenke");
        break;
    }
    case 98996:
    {
        returnValue = F("Falkenschneise");
        break;
    }
    case 98997:
    {
        returnValue = F("Falkenseer Str.");
        break;
    }
    case 98998:
    {
        returnValue = F("Falkenseer Weg");
        break;
    }
    case 98999:
    {
        returnValue = F("Falkenseeweg");
        break;
    }
    case 99000:
    {
        returnValue = F("Falkensteg");
        break;
    }
    case 99001:
    {
        returnValue = F("Falkensteig");
        break;
    }
    case 99002:
    {
        returnValue = F("Falkenstein");
        break;
    }
    case 99003:
    {
        returnValue = F("Falkensteiner Landstr.");
        break;
    }
    case 99004:
    {
        returnValue = F("Falkensteiner Pfad");
        break;
    }
    case 99005:
    {
        returnValue = F("Falkensteiner Str.");
        break;
    }
    case 99006:
    {
        returnValue = F("Falkensteiner Weg");
        break;
    }
    case 99007:
    {
        returnValue = F("Falkensteinerstr.");
        break;
    }
    case 99008:
    {
        returnValue = F("Falkensteinerweg");
        break;
    }
    case 99009:
    {
        returnValue = F("Falkensteinpark");
        break;
    }
    case 99010:
    {
        returnValue = F("Falkensteinplatz");
        break;
    }
    case 99011:
    {
        returnValue = F("Falkensteinstr.");
        break;
    }
    case 99012:
    {
        returnValue = F("Falkensteinweg");
        break;
    }
    case 99013:
    {
        returnValue = F("Falkenstieg");
        break;
    }
    case 99014:
    {
        returnValue = F("Falkenstiege");
        break;
    }
    case 99015:
    {
        returnValue = F("Falkenstr.");
        break;
    }
    case 99016:
    {
        returnValue = F("Falkenteichweg");
        break;
    }
    case 99017:
    {
        returnValue = F("Falkenthaler Chaussee");
        break;
    }
    case 99018:
    {
        returnValue = F("Falkentorstr.");
        break;
    }
    case 99019:
    {
        returnValue = F("Falkentraufweg");
        break;
    }
    case 99020:
    {
        returnValue = F("Falkenturmgasse");
        break;
    }
    case 99021:
    {
        returnValue = F("Falkenturmstr.");
        break;
    }
    case 99022:
    {
        returnValue = F("Falkenwalder Str.");
        break;
    }
    case 99023:
    {
        returnValue = F("Falkenwasenwiesen");
        break;
    }
    case 99024:
    {
        returnValue = F("Falkenweg");
        break;
    }
    case 99025:
    {
        returnValue = F("Falkenäcker");
        break;
    }
    case 99026:
    {
        returnValue = F("Falkeplatz");
        break;
    }
    case 99027:
    {
        returnValue = F("Falkertstaffel");
        break;
    }
    case 99028:
    {
        returnValue = F("Falkertstr.");
        break;
    }
    case 99029:
    {
        returnValue = F("Falkestr.");
        break;
    }
    case 99030:
    {
        returnValue = F("Falkeweg");
        break;
    }
    case 99031:
    {
        returnValue = F("Falkhörn");
        break;
    }
    case 99032:
    {
        returnValue = F("Falkingsviertel");
        break;
    }
    case 99033:
    {
        returnValue = F("Falklandstr.");
        break;
    }
    case 99034:
    {
        returnValue = F("Falkmannstr.");
        break;
    }
    case 99035:
    {
        returnValue = F("Falknerei");
        break;
    }
    case 99036:
    {
        returnValue = F("Falknerei / Flugvorführung");
        break;
    }
    case 99037:
    {
        returnValue = F("Falknersteig");
        break;
    }
    case 99038:
    {
        returnValue = F("Falknerstr.");
        break;
    }
    case 99039:
    {
        returnValue = F("Falknersweg");
        break;
    }
    case 99040:
    {
        returnValue = F("Falknerweg");
        break;
    }
    case 99041:
    {
        returnValue = F("Falkschachtweg");
        break;
    }
    case 99042:
    {
        returnValue = F("Falksgasse");
        break;
    }
    case 99043:
    {
        returnValue = F("Falkstr.");
        break;
    }
    case 99044:
    {
        returnValue = F("Falkweg");
        break;
    }
    case 99045:
    {
        returnValue = F("Falladabrücke");
        break;
    }
    case 99046:
    {
        returnValue = F("Falladastr.");
        break;
    }
    case 99047:
    {
        returnValue = F("Falladaweg");
        break;
    }
    case 99048:
    {
        returnValue = F("Fallantgässchen");
        break;
    }
    case 99049:
    {
        returnValue = F("Fallbacherstr.");
        break;
    }
    case 99050:
    {
        returnValue = F("Fallbachstr.");
        break;
    }
    case 99051:
    {
        returnValue = F("Fallbachtal");
        break;
    }
    case 99052:
    {
        returnValue = F("Fallbaumstr.");
        break;
    }
    case 99053:
    {
        returnValue = F("Fallbergstr.");
        break;
    }
    case 99054:
    {
        returnValue = F("Fallbergweg");
        break;
    }
    case 99055:
    {
        returnValue = F("Fallbornstr.");
        break;
    }
    case 99056:
    {
        returnValue = F("Fallbrunnenweg");
        break;
    }
    case 99057:
    {
        returnValue = F("Falldorf");
        break;
    }
    case 99058:
    {
        returnValue = F("Falldorfer Weg");
        break;
    }
    case 99059:
    {
        returnValue = F("Falle");
        break;
    }
    case 99060:
    {
        returnValue = F("Fallenbachstr.");
        break;
    }
    case 99061:
    {
        returnValue = F("Fallenbachweg");
        break;
    }
    case 99062:
    {
        returnValue = F("Fallenbodenweg");
        break;
    }
    case 99063:
    {
        returnValue = F("Fallenbrunnen");
        break;
    }
    case 99064:
    {
        returnValue = F("Fallendholzweg");
        break;
    }
    case 99065:
    {
        returnValue = F("Fallenkopfweg");
        break;
    }
    case 99066:
    {
        returnValue = F("Fallenriede");
        break;
    }
    case 99067:
    {
        returnValue = F("Fallensteiner Str.");
        break;
    }
    case 99068:
    {
        returnValue = F("Fallentorstr.");
        break;
    }
    case 99069:
    {
        returnValue = F("Fallentorweg");
        break;
    }
    case 99070:
    {
        returnValue = F("Fallenweg");
        break;
    }
    case 99071:
    {
        returnValue = F("Faller Weg");
        break;
    }
    case 99072:
    {
        returnValue = F("Faller-Klamm-Brücke");
        break;
    }
    case 99073:
    {
        returnValue = F("Fallerberg");
        break;
    }
    case 99074:
    {
        returnValue = F("Fallerbrunna");
        break;
    }
    case 99075:
    {
        returnValue = F("Fallerhofweg");
        break;
    }
    case 99076:
    {
        returnValue = F("Falleronstr.");
        break;
    }
    case 99077:
    {
        returnValue = F("Fallerslebener Str.");
        break;
    }
    case 99078:
    {
        returnValue = F("Fallerslebener Weg");
        break;
    }
    case 99079:
    {
        returnValue = F("Fallerslebenstr.");
        break;
    }
    case 99080:
    {
        returnValue = F("Fallerslebenweg");
        break;
    }
    case 99081:
    {
        returnValue = F("Fallersleber Str.");
        break;
    }
    case 99082:
    {
        returnValue = F("Fallersleber-Tor-Wall");
        break;
    }
    case 99083:
    {
        returnValue = F("Fallerslochweg");
        break;
    }
    case 99084:
    {
        returnValue = F("Fallerstr.");
        break;
    }
    case 99085:
    {
        returnValue = F("Fallersweg");
        break;
    }
    case 99086:
    {
        returnValue = F("Fallerwasen");
        break;
    }
    case 99087:
    {
        returnValue = F("Fallerweg");
        break;
    }
    case 99088:
    {
        returnValue = F("Fallfeldstr.");
        break;
    }
    case 99089:
    {
        returnValue = F("Fallgasse");
        break;
    }
    case 99090:
    {
        returnValue = F("Fallgatter");
        break;
    }
    case 99091:
    {
        returnValue = F("Fallgatterweg");
        break;
    }
    case 99092:
    {
        returnValue = F("Fallgrabenstr.");
        break;
    }
    case 99093:
    {
        returnValue = F("Fallhaus");
        break;
    }
    case 99094:
    {
        returnValue = F("Fallhauser Feld");
        break;
    }
    case 99095:
    {
        returnValue = F("Fallhausring");
        break;
    }
    case 99096:
    {
        returnValue = F("Fallhausstr.");
        break;
    }
    case 99097:
    {
        returnValue = F("Fallhausweg");
        break;
    }
    case 99098:
    {
        returnValue = F("Fallhüttenstr.");
        break;
    }
    case 99099:
    {
        returnValue = F("Fallhüttenweg");
        break;
    }
    case 99100:
    {
        returnValue = F("Falligstr.");
        break;
    }
    case 99101:
    {
        returnValue = F("Falligsverbindungsweg");
        break;
    }
    case 99102:
    {
        returnValue = F("Fallingbosteler Str.");
        break;
    }
    case 99103:
    {
        returnValue = F("Fallingbosteler Weg");
        break;
    }
    case 99104:
    {
        returnValue = F("Fallmeisterei");
        break;
    }
    case 99105:
    {
        returnValue = F("Fallmeistereiweg");
        break;
    }
    case 99106:
    {
        returnValue = F("Fallmeisterstr.");
        break;
    }
    case 99107:
    {
        returnValue = F("Fallmeisterweg");
        break;
    }
    case 99108:
    {
        returnValue = F("Fallmerayerstr.");
        break;
    }
    case 99109:
    {
        returnValue = F("Fallmühle");
        break;
    }
    case 99110:
    {
        returnValue = F("Falloch");
        break;
    }
    case 99111:
    {
        returnValue = F("Fallohweg");
        break;
    }
    case 99112:
    {
        returnValue = F("Fallpfad");
        break;
    }
    case 99113:
    {
        returnValue = F("Fallreep");
        break;
    }
    case 99114:
    {
        returnValue = F("Fallrohrstr.");
        break;
    }
    case 99115:
    {
        returnValue = F("Fallschirmjägerweg");
        break;
    }
    case 99116:
    {
        returnValue = F("Fallsiel Einlaßbauwerk");
        break;
    }
    case 99117:
    {
        returnValue = F("Fallsteinblick");
        break;
    }
    case 99118:
    {
        returnValue = F("Fallsteinstr.");
        break;
    }
    case 99119:
    {
        returnValue = F("Fallsteinweg");
        break;
    }
    case 99120:
    {
        returnValue = F("Fallstr.");
        break;
    }
    case 99121:
    {
        returnValue = F("Falltal");
        break;
    }
    case 99122:
    {
        returnValue = F("Falltalstr.");
        break;
    }
    case 99123:
    {
        returnValue = F("Fallthoreck Schneise");
        break;
    }
    case 99124:
    {
        returnValue = F("Fallthoreckschneise");
        break;
    }
    case 99125:
    {
        returnValue = F("Fallthorschneise");
        break;
    }
    case 99126:
    {
        returnValue = F("Falltor");
        break;
    }
    case 99127:
    {
        returnValue = F("Falltorfeld");
        break;
    }
    case 99128:
    {
        returnValue = F("Falltorgasse");
        break;
    }
    case 99129:
    {
        returnValue = F("Falltorhaus Schneise");
        break;
    }
    case 99130:
    {
        returnValue = F("Falltorhausstr.");
        break;
    }
    case 99131:
    {
        returnValue = F("Falltorschneise");
        break;
    }
    case 99132:
    {
        returnValue = F("Falltorsteig");
        break;
    }
    case 99133:
    {
        returnValue = F("Falltorstr.");
        break;
    }
    case 99134:
    {
        returnValue = F("Falltorweg");
        break;
    }
    case 99135:
    {
        returnValue = F("Fallweg");
        break;
    }
    case 99136:
    {
        returnValue = F("Falläcker");
        break;
    }
    case 99137:
    {
        returnValue = F("Falläckerweg");
        break;
    }
    case 99138:
    {
        returnValue = F("Falsbrunn");
        break;
    }
    case 99139:
    {
        returnValue = F("Falsbult");
        break;
    }
    case 99140:
    {
        returnValue = F("Falsche-Klingenweg");
        break;
    }
    case 99141:
    {
        returnValue = F("Falschede");
        break;
    }
    case 99142:
    {
        returnValue = F("Falscheider Str.");
        break;
    }
    case 99143:
    {
        returnValue = F("Falscheider Weg");
        break;
    }
    case 99144:
    {
        returnValue = F("Falsches Klingensträßle");
        break;
    }
    case 99145:
    {
        returnValue = F("Falschheider Weg");
        break;
    }
    case 99146:
    {
        returnValue = F("Falshorner Str.");
        break;
    }
    case 99147:
    {
        returnValue = F("Falshöft");
        break;
    }
    case 99148:
    {
        returnValue = F("Falstaffweg");
        break;
    }
    case 99149:
    {
        returnValue = F("Falster");
        break;
    }
    case 99150:
    {
        returnValue = F("Falsterring");
        break;
    }
    case 99151:
    {
        returnValue = F("Falsterstr.");
        break;
    }
    case 99152:
    {
        returnValue = F("Falsterweg");
        break;
    }
    case 99153:
    {
        returnValue = F("Faltenbachtobelweg");
        break;
    }
    case 99154:
    {
        returnValue = F("Faltengasse");
        break;
    }
    case 99155:
    {
        returnValue = F("Faltenstr.");
        break;
    }
    case 99156:
    {
        returnValue = F("Faltenweg");
        break;
    }
    case 99157:
    {
        returnValue = F("Faltenäckerstr.");
        break;
    }
    case 99158:
    {
        returnValue = F("Falter");
        break;
    }
    case 99159:
    {
        returnValue = F("Falteracker");
        break;
    }
    case 99160:
    {
        returnValue = F("Falterbachstr.");
        break;
    }
    case 99161:
    {
        returnValue = F("Falterbaum");
        break;
    }
    case 99162:
    {
        returnValue = F("Falterer");
        break;
    }
    case 99163:
    {
        returnValue = F("Falterer Berg");
        break;
    }
    case 99164:
    {
        returnValue = F("Faltererpfad");
        break;
    }
    case 99165:
    {
        returnValue = F("Faltergartenstr.");
        break;
    }
    case 99166:
    {
        returnValue = F("Faltergasse");
        break;
    }
    case 99167:
    {
        returnValue = F("Faltergatter");
        break;
    }
    case 99168:
    {
        returnValue = F("Falterhecklesweg");
        break;
    }
    case 99169:
    {
        returnValue = F("Faltermaierweg");
        break;
    }
    case 99170:
    {
        returnValue = F("Faltermayer Steig");
        break;
    }
    case 99171:
    {
        returnValue = F("Faltermeierweg");
        break;
    }
    case 99172:
    {
        returnValue = F("Falternstr.");
        break;
    }
    case 99173:
    {
        returnValue = F("Falterplatz");
        break;
    }
    case 99174:
    {
        returnValue = F("Falterring");
        break;
    }
    case 99175:
    {
        returnValue = F("Faltersgärten");
        break;
    }
    case 99176:
    {
        returnValue = F("Falterstieg");
        break;
    }
    case 99177:
    {
        returnValue = F("Falterstr.");
        break;
    }
    case 99178:
    {
        returnValue = F("Faltersweg");
        break;
    }
    case 99179:
    {
        returnValue = F("Falterswiese");
        break;
    }
    case 99180:
    {
        returnValue = F("Falterweg");
        break;
    }
    case 99181:
    {
        returnValue = F("Falterwiesen");
        break;
    }
    case 99182:
    {
        returnValue = F("Falteräcker");
        break;
    }
    case 99183:
    {
        returnValue = F("Falting");
        break;
    }
    case 99184:
    {
        returnValue = F("Faltlhauserstr.");
        break;
    }
    case 99185:
    {
        returnValue = F("Faluner Weg");
        break;
    }
    case 99186:
    {
        returnValue = F("Falzbergstr.");
        break;
    }
    case 99187:
    {
        returnValue = F("Falzenberg");
        break;
    }
    case 99188:
    {
        returnValue = F("Falzenstr.");
        break;
    }
    case 99189:
    {
        returnValue = F("Falznerstr.");
        break;
    }
    case 99190:
    {
        returnValue = F("Falzweg");
        break;
    }
    case 99191:
    {
        returnValue = F("Fambacher Weg");
        break;
    }
    case 99192:
    {
        returnValue = F("Famberg");
        break;
    }
    case 99193:
    {
        returnValue = F("Famberghohle");
        break;
    }
    case 99194:
    {
        returnValue = F("Fambergstr.");
        break;
    }
    case 99195:
    {
        returnValue = F("Familie-Cohn-Str.");
        break;
    }
    case 99196:
    {
        returnValue = F("Familie-Einstein-Str.");
        break;
    }
    case 99197:
    {
        returnValue = F("Familie-Hoffmann-Str.");
        break;
    }
    case 99198:
    {
        returnValue = F("Familie-Isenberg-Platz");
        break;
    }
    case 99199:
    {
        returnValue = F("Familie-Jürges-Platz");
        break;
    }
    case 99200:
    {
        returnValue = F("Familie-Jürges-Weg");
        break;
    }
    case 99201:
    {
        returnValue = F("Familie-Mechau-Str.");
        break;
    }
    case 99202:
    {
        returnValue = F("Familie-Wertheim-Str.");
        break;
    }
    case 99203:
    {
        returnValue = F("Familien- und Erlebniswelt");
        break;
    }
    case 99204:
    {
        returnValue = F("Familienabfahrt");
        break;
    }
    case 99205:
    {
        returnValue = F("Familiengärten");
        break;
    }
    case 99206:
    {
        returnValue = F("Familienhain");
        break;
    }
    case 99207:
    {
        returnValue = F("Familienhaus");
        break;
    }
    case 99208:
    {
        returnValue = F("Familienpark");
        break;
    }
    case 99209:
    {
        returnValue = F("Familienpark Allee-Süd");
        break;
    }
    case 99210:
    {
        returnValue = F("Familienstr.");
        break;
    }
    case 99211:
    {
        returnValue = F("Familienwald");
        break;
    }
    case 99212:
    {
        returnValue = F("Familienwiese");
        break;
    }
    case 99213:
    {
        returnValue = F("Familienzentrum 'Kloster Kerbscher Berg'");
        break;
    }
    case 99214:
    {
        returnValue = F("Famosastr.");
        break;
    }
    case 99215:
    {
        returnValue = F("Fandelborn");
        break;
    }
    case 99216:
    {
        returnValue = F("Fanderl-Wastl-Weg");
        break;
    }
    case 99217:
    {
        returnValue = F("Fanderlstr.");
        break;
    }
    case 99218:
    {
        returnValue = F("Fang Damm");
        break;
    }
    case 99219:
    {
        returnValue = F("Fange");
        break;
    }
    case 99220:
    {
        returnValue = F("Fangelsbachstr.");
        break;
    }
    case 99221:
    {
        returnValue = F("Fangendamm");
        break;
    }
    case 99222:
    {
        returnValue = F("Fangenweg");
        break;
    }
    case 99223:
    {
        returnValue = F("Fangeweg");
        break;
    }
    case 99224:
    {
        returnValue = F("Fangfelder Weg");
        break;
    }
    case 99225:
    {
        returnValue = F("Fanggasse");
        break;
    }
    case 99226:
    {
        returnValue = F("Fangkampe");
        break;
    }
    case 99227:
    {
        returnValue = F("Fangkampstr.");
        break;
    }
    case 99228:
    {
        returnValue = F("Fangort");
        break;
    }
    case 99229:
    {
        returnValue = F("Fangostr.");
        break;
    }
    case 99230:
    {
        returnValue = F("Fangschleusenstr.");
        break;
    }
    case 99231:
    {
        returnValue = F("Fangschleusenweg");
        break;
    }
    case 99232:
    {
        returnValue = F("Fangstr.");
        break;
    }
    case 99233:
    {
        returnValue = F("Fangturm");
        break;
    }
    case 99234:
    {
        returnValue = F("Fangweg");
        break;
    }
    case 99235:
    {
        returnValue = F("Fankershohl");
        break;
    }
    case 99236:
    {
        returnValue = F("Fankeweg");
        break;
    }
    case 99237:
    {
        returnValue = F("Fankhänelweg");
        break;
    }
    case 99238:
    {
        returnValue = F("Fannis");
        break;
    }
    case 99239:
    {
        returnValue = F("Fanny-Hensel-Anlage");
        break;
    }
    case 99240:
    {
        returnValue = F("Fanny-Hensel-Hof");
        break;
    }
    case 99241:
    {
        returnValue = F("Fanny-Hensel-Platz");
        break;
    }
    case 99242:
    {
        returnValue = F("Fanny-Hensel-Str.");
        break;
    }
    case 99243:
    {
        returnValue = F("Fanny-Hensel-Weg");
        break;
    }
    case 99244:
    {
        returnValue = F("Fanny-Kahn-Weg");
        break;
    }
    case 99245:
    {
        returnValue = F("Fanny-Koenig-Str.");
        break;
    }
    case 99246:
    {
        returnValue = F("Fanny-Leicht-Park");
        break;
    }
    case 99247:
    {
        returnValue = F("Fanny-Leicht-Str.");
        break;
    }
    case 99248:
    {
        returnValue = F("Fanny-Lewald-Ring");
        break;
    }
    case 99249:
    {
        returnValue = F("Fanny-Lewald-Str.");
        break;
    }
    case 99250:
    {
        returnValue = F("Fanny-Lewald-Weg");
        break;
    }
    case 99251:
    {
        returnValue = F("Fanny-Mendelssohn-Str.");
        break;
    }
    case 99252:
    {
        returnValue = F("Fanny-Nathan-Str.");
        break;
    }
    case 99253:
    {
        returnValue = F("Fanny-Niggl-Str.");
        break;
    }
    case 99254:
    {
        returnValue = F("Fanny-Tarnow-Siedlung");
        break;
    }
    case 99255:
    {
        returnValue = F("Fanny-de-la-Roche-Weg");
        break;
    }
    case 99256:
    {
        returnValue = F("Fannyhöh");
        break;
    }
    case 99257:
    {
        returnValue = F("Fanschuhstr.");
        break;
    }
    case 99258:
    {
        returnValue = F("Fantaisiestr.");
        break;
    }
    case 99259:
    {
        returnValue = F("Fantke Weg Ost");
        break;
    }
    case 99260:
    {
        returnValue = F("Fantke Weg West");
        break;
    }
    case 99261:
    {
        returnValue = F("Fanöweg");
        break;
    }
    case 99262:
    {
        returnValue = F("Faradaystr.");
        break;
    }
    case 99263:
    {
        returnValue = F("Farbeberg");
        break;
    }
    case 99264:
    {
        returnValue = F("Farbegasse");
        break;
    }
    case 99265:
    {
        returnValue = F("Farbengasse");
        break;
    }
    case 99266:
    {
        returnValue = F("Farbenstr.");
        break;
    }
    case 99267:
    {
        returnValue = F("Farbentwietje");
        break;
    }
    case 99268:
    {
        returnValue = F("Farbenweg");
        break;
    }
    case 99269:
    {
        returnValue = F("Farbgasse");
        break;
    }
    case 99270:
    {
        returnValue = F("Farbgrubenstr.");
        break;
    }
    case 99271:
    {
        returnValue = F("Farbholz");
        break;
    }
    case 99272:
    {
        returnValue = F("Farbing");
        break;
    }
    case 99273:
    {
        returnValue = F("Farbinger Waldweg");
        break;
    }
    case 99274:
    {
        returnValue = F("Farbinger Weg");
        break;
    }
    case 99275:
    {
        returnValue = F("Farbmühle");
        break;
    }
    case 99276:
    {
        returnValue = F("Farbmühlenstr.");
        break;
    }
    case 99277:
    {
        returnValue = F("Farbmühler Berg");
        break;
    }
    case 99278:
    {
        returnValue = F("Farbmühlstr.");
        break;
    }
    case 99279:
    {
        returnValue = F("Farbmühlweg");
        break;
    }
    case 99280:
    {
        returnValue = F("Farbstr.");
        break;
    }
    case 99281:
    {
        returnValue = F("Farbweg");
        break;
    }
    case 99282:
    {
        returnValue = F("Farbäcker");
        break;
    }
    case 99283:
    {
        returnValue = F("Farchanter Str.");
        break;
    }
    case 99284:
    {
        returnValue = F("Farchanter Weg");
        break;
    }
    case 99285:
    {
        returnValue = F("Farchau");
        break;
    }
    case 99286:
    {
        returnValue = F("Farchauer Mühle");
        break;
    }
    case 99287:
    {
        returnValue = F("Farchet");
        break;
    }
    case 99288:
    {
        returnValue = F("Fardelystr.");
        break;
    }
    case 99289:
    {
        returnValue = F("Farehamstr.");
        break;
    }
    case 99290:
    {
        returnValue = F("Farenbrede");
        break;
    }
    case 99291:
    {
        returnValue = F("Farenheimer Str.");
        break;
    }
    case 99292:
    {
        returnValue = F("Faretshauser Str.");
        break;
    }
    case 99293:
    {
        returnValue = F("Faretshauser Weg");
        break;
    }
    case 99294:
    {
        returnValue = F("Fargauer Str.");
        break;
    }
    case 99295:
    {
        returnValue = F("Fargauweg");
        break;
    }
    case 99296:
    {
        returnValue = F("Farger Feld");
        break;
    }
    case 99297:
    {
        returnValue = F("Farger Str.");
        break;
    }
    case 99298:
    {
        returnValue = F("Faribaultstr.");
        break;
    }
    case 99299:
    {
        returnValue = F("Farinastr.");
        break;
    }
    case 99300:
    {
        returnValue = F("Farinellistr.");
        break;
    }
    case 99301:
    {
        returnValue = F("Farlingsweg");
        break;
    }
    case 99302:
    {
        returnValue = F("Farlohsweg");
        break;
    }
    case 99303:
    {
        returnValue = F("Farm Road");
        break;
    }
    case 99304:
    {
        returnValue = F("Farmbecker Str.");
        break;
    }
    case 99305:
    {
        returnValue = F("Farmbker Weg");
        break;
    }
    case 99306:
    {
        returnValue = F("Farmer Loop");
        break;
    }
    case 99307:
    {
        returnValue = F("Farmerland");
        break;
    }
    case 99308:
    {
        returnValue = F("Farmers Ring");
        break;
    }
    case 99309:
    {
        returnValue = F("Farmers-Branch-Platz");
        break;
    }
    case 99310:
    {
        returnValue = F("Farmersteg");
        break;
    }
    case 99311:
    {
        returnValue = F("Farmerstr.");
        break;
    }
    case 99312:
    {
        returnValue = F("Farmerweg");
        break;
    }
    case 99313:
    {
        returnValue = F("Farmsches Feld");
        break;
    }
    case 99314:
    {
        returnValue = F("Farmsener Weg");
        break;
    }
    case 99315:
    {
        returnValue = F("Farmser Str.");
        break;
    }
    case 99316:
    {
        returnValue = F("Farmstr.");
        break;
    }
    case 99317:
    {
        returnValue = F("Farmweg");
        break;
    }
    case 99318:
    {
        returnValue = F("Farnacker");
        break;
    }
    case 99319:
    {
        returnValue = F("Farnackerweg");
        break;
    }
    case 99320:
    {
        returnValue = F("Farnbach");
        break;
    }
    case 99321:
    {
        returnValue = F("Farnbacher Str.");
        break;
    }
    case 99322:
    {
        returnValue = F("Farnbachtal");
        break;
    }
    case 99323:
    {
        returnValue = F("Farnbachweg");
        break;
    }
    case 99324:
    {
        returnValue = F("Farnberg");
        break;
    }
    case 99325:
    {
        returnValue = F("Farnbergschleichweg");
        break;
    }
    case 99326:
    {
        returnValue = F("Farnbergstr.");
        break;
    }
    case 99327:
    {
        returnValue = F("Farnbergweg");
        break;
    }
    case 99328:
    {
        returnValue = F("Farnbrink");
        break;
    }
    case 99329:
    {
        returnValue = F("Farnenweg");
        break;
    }
    case 99330:
    {
        returnValue = F("Farnersberg");
        break;
    }
    case 99331:
    {
        returnValue = F("Farnewinkler Str.");
        break;
    }
    case 99332:
    {
        returnValue = F("Farngarten");
        break;
    }
    case 99333:
    {
        returnValue = F("Farngrund");
        break;
    }
    case 99334:
    {
        returnValue = F("Farnhaldenweg");
        break;
    }
    case 99335:
    {
        returnValue = F("Farnhamhof");
        break;
    }
    case 99336:
    {
        returnValue = F("Farnhorst");
        break;
    }
    case 99337:
    {
        returnValue = F("Farnkrautbreite");
        break;
    }
    case 99338:
    {
        returnValue = F("Farnkrautweg");
        break;
    }
    case 99339:
    {
        returnValue = F("Farnleitenweg");
        break;
    }
    case 99340:
    {
        returnValue = F("Farnplatzweg");
        break;
    }
    case 99341:
    {
        returnValue = F("Farnpointweg");
        break;
    }
    case 99342:
    {
        returnValue = F("Farnrainweg");
        break;
    }
    case 99343:
    {
        returnValue = F("Farnrodaer Str.");
        break;
    }
    case 99344:
    {
        returnValue = F("Farnrodaer Weg");
        break;
    }
    case 99345:
    {
        returnValue = F("Farnstedter Weg");
        break;
    }
    case 99346:
    {
        returnValue = F("Farnstieg");
        break;
    }
    case 99347:
    {
        returnValue = F("Farnstr.");
        break;
    }
    case 99348:
    {
        returnValue = F("Farnwaldstr.");
        break;
    }
    case 99349:
    {
        returnValue = F("Farnweg");
        break;
    }
    case 99350:
    {
        returnValue = F("Farrelstr.");
        break;
    }
    case 99351:
    {
        returnValue = F("Farrelweg");
        break;
    }
    case 99352:
    {
        returnValue = F("Farrenauer Weg");
        break;
    }
    case 99353:
    {
        returnValue = F("Farrenbergmittelweg");
        break;
    }
    case 99354:
    {
        returnValue = F("Farrenbergstr.");
        break;
    }
    case 99355:
    {
        returnValue = F("Farrenbergweg");
        break;
    }
    case 99356:
    {
        returnValue = F("Farrenbroich");
        break;
    }
    case 99357:
    {
        returnValue = F("Farrenforstweg");
        break;
    }
    case 99358:
    {
        returnValue = F("Farrengasse");
        break;
    }
    case 99359:
    {
        returnValue = F("Farrenkothenweg");
        break;
    }
    case 99360:
    {
        returnValue = F("Farrenmahdweg");
        break;
    }
    case 99361:
    {
        returnValue = F("Farrenpointstr.");
        break;
    }
    case 99362:
    {
        returnValue = F("Farrensen");
        break;
    }
    case 99363:
    {
        returnValue = F("Farrenser Str.");
        break;
    }
    case 99364:
    {
        returnValue = F("Farrenstr.");
        break;
    }
    case 99365:
    {
        returnValue = F("Farrenturmgasse");
        break;
    }
    case 99366:
    {
        returnValue = F("Farrenweg");
        break;
    }
    case 99367:
    {
        returnValue = F("Farrenwies");
        break;
    }
    case 99368:
    {
        returnValue = F("Farrenwiesstr.");
        break;
    }
    case 99369:
    {
        returnValue = F("Farrnbacher Str.");
        break;
    }
    case 99370:
    {
        returnValue = F("Farrnbachstr.");
        break;
    }
    case 99371:
    {
        returnValue = F("Farrnbachweg");
        break;
    }
    case 99372:
    {
        returnValue = F("Farrwiesenstr.");
        break;
    }
    case 99373:
    {
        returnValue = F("Farsleber Str.");
        break;
    }
    case 99374:
    {
        returnValue = F("Farster Str.");
        break;
    }
    case 99375:
    {
        returnValue = F("Farsterweg");
        break;
    }
    case 99376:
    {
        returnValue = F("Farve");
        break;
    }
    case 99377:
    {
        returnValue = F("Farvener Str.");
        break;
    }
    case 99378:
    {
        returnValue = F("Farvener Weg");
        break;
    }
    case 99379:
    {
        returnValue = F("Farverburg");
        break;
    }
    case 99380:
    {
        returnValue = F("Farwicker Str.");
        break;
    }
    case 99381:
    {
        returnValue = F("Farwicks Kamp");
        break;
    }
    case 99382:
    {
        returnValue = F("Farwickstr.");
        break;
    }
    case 99383:
    {
        returnValue = F("Farwicksweg");
        break;
    }
    case 99384:
    {
        returnValue = F("Farzbornwiesenschneise");
        break;
    }
    case 99385:
    {
        returnValue = F("Fasanen Schneise");
        break;
    }
    case 99386:
    {
        returnValue = F("Fasanen-Schneise");
        break;
    }
    case 99387:
    {
        returnValue = F("Fasanenallee");
        break;
    }
    case 99388:
    {
        returnValue = F("Fasanenanger");
        break;
    }
    case 99389:
    {
        returnValue = F("Fasanenaue");
        break;
    }
    case 99390:
    {
        returnValue = F("Fasanenaufzuchtweg");
        break;
    }
    case 99391:
    {
        returnValue = F("Fasanenberg");
        break;
    }
    case 99392:
    {
        returnValue = F("Fasanenbogen");
        break;
    }
    case 99393:
    {
        returnValue = F("Fasanenbusch");
        break;
    }
    case 99394:
    {
        returnValue = F("Fasanendamm");
        break;
    }
    case 99395:
    {
        returnValue = F("Fasaneneck");
        break;
    }
    case 99396:
    {
        returnValue = F("Fasaneneck1");
        break;
    }
    case 99397:
    {
        returnValue = F("Fasaneneck3");
        break;
    }
    case 99398:
    {
        returnValue = F("Fasanenfeld");
        break;
    }
    case 99399:
    {
        returnValue = F("Fasanenflug");
        break;
    }
    case 99400:
    {
        returnValue = F("Fasanengang");
        break;
    }
    case 99401:
    {
        returnValue = F("Fasanengarten");
        break;
    }
    case 99402:
    {
        returnValue = F("Fasanengartenweg");
        break;
    }
    case 99403:
    {
        returnValue = F("Fasanengasse");
        break;
    }
    case 99404:
    {
        returnValue = F("Fasanengrund");
        break;
    }
    case 99405:
    {
        returnValue = F("Fasanengärten");
        break;
    }
    case 99406:
    {
        returnValue = F("Fasanenhain");
        break;
    }
    case 99407:
    {
        returnValue = F("Fasanenhaus");
        break;
    }
    case 99408:
    {
        returnValue = F("Fasanenhauweg");
        break;
    }
    case 99409:
    {
        returnValue = F("Fasanenhege");
        break;
    }
    case 99410:
    {
        returnValue = F("Fasanenheide");
        break;
    }
    case 99411:
    {
        returnValue = F("Fasanenhof");
        break;
    }
    case 99412:
    {
        returnValue = F("Fasanenhofstr.");
        break;
    }
    case 99413:
    {
        returnValue = F("Fasanenhöhe");
        break;
    }
    case 99414:
    {
        returnValue = F("Fasanenhügel");
        break;
    }
    case 99415:
    {
        returnValue = F("Fasaneninsel");
        break;
    }
    case 99416:
    {
        returnValue = F("Fasanenkamp");
        break;
    }
    case 99417:
    {
        returnValue = F("Fasanenkippe");
        break;
    }
    case 99418:
    {
        returnValue = F("Fasanenleite");
        break;
    }
    case 99419:
    {
        returnValue = F("Fasanenpark");
        break;
    }
    case 99420:
    {
        returnValue = F("Fasanenpfad");
        break;
    }
    case 99421:
    {
        returnValue = F("Fasanenplatz");
        break;
    }
    case 99422:
    {
        returnValue = F("Fasanenpromenade");
        break;
    }
    case 99423:
    {
        returnValue = F("Fasanenring");
        break;
    }
    case 99424:
    {
        returnValue = F("Fasanenschneise");
        break;
    }
    case 99425:
    {
        returnValue = F("Fasanensteg");
        break;
    }
    case 99426:
    {
        returnValue = F("Fasanensteig");
        break;
    }
    case 99427:
    {
        returnValue = F("Fasanenstieg");
        break;
    }
    case 99428:
    {
        returnValue = F("Fasanenstiege");
        break;
    }
    case 99429:
    {
        returnValue = F("Fasanenstr.");
        break;
    }
    case 99430:
    {
        returnValue = F("Fasanentriebweg");
        break;
    }
    case 99431:
    {
        returnValue = F("Fasanenweg");
        break;
    }
    case 99432:
    {
        returnValue = F("Fasanenweg -neu-");
        break;
    }
    case 99433:
    {
        returnValue = F("Fasanenwinkel");
        break;
    }
    case 99434:
    {
        returnValue = F("Fasanerie");
        break;
    }
    case 99435:
    {
        returnValue = F("Fasanerie Groß-Gerau");
        break;
    }
    case 99436:
    {
        returnValue = F("Fasanerie-Arkaden");
        break;
    }
    case 99437:
    {
        returnValue = F("Fasaneriestr.");
        break;
    }
    case 99438:
    {
        returnValue = F("Fasanerieweg");
        break;
    }
    case 99439:
    {
        returnValue = F("Fasangarten");
        break;
    }
    case 99440:
    {
        returnValue = F("Fasangartenstr.");
        break;
    }
    case 99441:
    {
        returnValue = F("Fasanjägerstr.");
        break;
    }
    case 99442:
    {
        returnValue = F("Fasanstr.");
        break;
    }
    case 99443:
    {
        returnValue = F("Fasanweg");
        break;
    }
    case 99444:
    {
        returnValue = F("Fasbenderstr.");
        break;
    }
    case 99445:
    {
        returnValue = F("Fasbinderweg");
        break;
    }
    case 99446:
    {
        returnValue = F("Faschauer Brücke");
        break;
    }
    case 99447:
    {
        returnValue = F("Fascherwäi");
        break;
    }
    case 99448:
    {
        returnValue = F("Faschingsgraben");
        break;
    }
    case 99449:
    {
        returnValue = F("Faschingweg");
        break;
    }
    case 99450:
    {
        returnValue = F("Faschstr.");
        break;
    }
    case 99451:
    {
        returnValue = F("Faschweg");
        break;
    }
    case 99452:
    {
        returnValue = F("Faselberg");
        break;
    }
    case 99453:
    {
        returnValue = F("Faselgrund");
        break;
    }
    case 99454:
    {
        returnValue = F("Faselkieper Weg");
        break;
    }
    case 99455:
    {
        returnValue = F("Faselwiese");
        break;
    }
    case 99456:
    {
        returnValue = F("Fasendorfer Str.");
        break;
    }
    case 99457:
    {
        returnValue = F("Fasendorfer Weg");
        break;
    }
    case 99458:
    {
        returnValue = F("Fasenenstr.");
        break;
    }
    case 99459:
    {
        returnValue = F("Fasenweg");
        break;
    }
    case 99460:
    {
        returnValue = F("Faserschirmweg");
        break;
    }
    case 99461:
    {
        returnValue = F("Faserweg");
        break;
    }
    case 99462:
    {
        returnValue = F("Fasia-Jansen-Str.");
        break;
    }
    case 99463:
    {
        returnValue = F("Fasken Kamp");
        break;
    }
    case 99464:
    {
        returnValue = F("Faskerstegelk");
        break;
    }
    case 99465:
    {
        returnValue = F("Fasoldshof");
        break;
    }
    case 99466:
    {
        returnValue = F("Fasoltstr.");
        break;
    }
    case 99467:
    {
        returnValue = F("Fassbinderstr.");
        break;
    }
    case 99468:
    {
        returnValue = F("Fasselgrundweg");
        break;
    }
    case 99469:
    {
        returnValue = F("Fasselsberg");
        break;
    }
    case 99470:
    {
        returnValue = F("Fasselsgrundweg");
        break;
    }
    case 99471:
    {
        returnValue = F("Fassendeichstr.");
        break;
    }
    case 99472:
    {
        returnValue = F("Fassenhof");
        break;
    }
    case 99473:
    {
        returnValue = F("Fassensdorfer Weg");
        break;
    }
    case 99474:
    {
        returnValue = F("Fassensteg");
        break;
    }
    case 99475:
    {
        returnValue = F("Fassenteich");
        break;
    }
    case 99476:
    {
        returnValue = F("Fasserstr.");
        break;
    }
    case 99477:
    {
        returnValue = F("Fassinstr.");
        break;
    }
    case 99478:
    {
        returnValue = F("Fassnachtsgässchen");
        break;
    }
    case 99479:
    {
        returnValue = F("Fassweg");
        break;
    }
    case 99480:
    {
        returnValue = F("Fastenberg");
        break;
    }
    case 99481:
    {
        returnValue = F("Fastenberger Str.");
        break;
    }
    case 99482:
    {
        returnValue = F("Fastenfeld");
        break;
    }
    case 99483:
    {
        returnValue = F("Fastenrathstr.");
        break;
    }
    case 99484:
    {
        returnValue = F("Fastlingerring");
        break;
    }
    case 99485:
    {
        returnValue = F("Fastlingerstr.");
        break;
    }
    case 99486:
    {
        returnValue = F("Fastlstr.");
        break;
    }
    case 99487:
    {
        returnValue = F("Fastlweg");
        break;
    }
    case 99488:
    {
        returnValue = F("Fastlwinkel");
        break;
    }
    case 99489:
    {
        returnValue = F("Fastnachtsgasse");
        break;
    }
    case 99490:
    {
        returnValue = F("Fastradahof");
        break;
    }
    case 99491:
    {
        returnValue = F("Fastradastr.");
        break;
    }
    case 99492:
    {
        returnValue = F("Fastradaweg");
        break;
    }
    case 99493:
    {
        returnValue = F("Fastrauer Weg");
        break;
    }
    case 99494:
    {
        returnValue = F("Fastweg");
        break;
    }
    case 99495:
    {
        returnValue = F("Father-Bill-Str.");
        break;
    }
    case 99496:
    {
        returnValue = F("Fathofskamp");
        break;
    }
    case 99497:
    {
        returnValue = F("Fatimagrotte");
        break;
    }
    case 99498:
    {
        returnValue = F("Fatimastr.");
        break;
    }
    case 99499:
    {
        returnValue = F("Fatimaweg");
        break;
    }
    case 99500:
    {
        returnValue = F("Fattengasse");
        break;
    }
    case 99501:
    {
        returnValue = F("Fattinger Str.");
        break;
    }
    case 99502:
    {
        returnValue = F("Faudistr.");
        break;
    }
    case 99503:
    {
        returnValue = F("Faudiweg");
        break;
    }
    case 99504:
    {
        returnValue = F("Fauerbacher Str.");
        break;
    }
    case 99505:
    {
        returnValue = F("Fauerbacher Weg");
        break;
    }
    case 99506:
    {
        returnValue = F("Fauermannspad");
        break;
    }
    case 99507:
    {
        returnValue = F("Fauertweg");
        break;
    }
    case 99508:
    {
        returnValue = F("Faukenstr.");
        break;
    }
    case 99509:
    {
        returnValue = F("Faulacker");
        break;
    }
    case 99510:
    {
        returnValue = F("Faularmschneise");
        break;
    }
    case 99511:
    {
        returnValue = F("Faulbacher Str.");
        break;
    }
    case 99512:
    {
        returnValue = F("Faulbachstr.");
        break;
    }
    case 99513:
    {
        returnValue = F("Faulbachtal");
        break;
    }
    case 99514:
    {
        returnValue = F("Faulbaum");
        break;
    }
    case 99515:
    {
        returnValue = F("Faulbaumstr.");
        break;
    }
    case 99516:
    {
        returnValue = F("Faulbergstr.");
        break;
    }
    case 99517:
    {
        returnValue = F("Faulbergweg");
        break;
    }
    case 99518:
    {
        returnValue = F("Faulborn");
        break;
    }
    case 99519:
    {
        returnValue = F("Faulborngasse");
        break;
    }
    case 99520:
    {
        returnValue = F("Faulbornsweg");
        break;
    }
    case 99521:
    {
        returnValue = F("Faulbruchstr.");
        break;
    }
    case 99522:
    {
        returnValue = F("Faulbrunnenweg");
        break;
    }
    case 99523:
    {
        returnValue = F("Faulchenstr.");
        break;
    }
    case 99524:
    {
        returnValue = F("Faule");
        break;
    }
    case 99525:
    {
        returnValue = F("Faule Breede");
        break;
    }
    case 99526:
    {
        returnValue = F("Faule Breite");
        break;
    }
    case 99527:
    {
        returnValue = F("Faule Brücke");
        break;
    }
    case 99528:
    {
        returnValue = F("Faule Grube");
        break;
    }
    case 99529:
    {
        returnValue = F("Faule Pfütze");
        break;
    }
    case 99530:
    {
        returnValue = F("Faule Str.");
        break;
    }
    case 99531:
    {
        returnValue = F("Faule Wiese");
        break;
    }
    case 99532:
    {
        returnValue = F("Faule Äcker");
        break;
    }
    case 99533:
    {
        returnValue = F("Fauleborn");
        break;
    }
    case 99534:
    {
        returnValue = F("Faulebutter");
        break;
    }
    case 99535:
    {
        returnValue = F("Faulegrundsweg");
        break;
    }
    case 99536:
    {
        returnValue = F("Faulenbachgäßchen");
        break;
    }
    case 99537:
    {
        returnValue = F("Faulenbachstr.");
        break;
    }
    case 99538:
    {
        returnValue = F("Faulenbergstr.");
        break;
    }
    case 99539:
    {
        returnValue = F("Faulenbitze");
        break;
    }
    case 99540:
    {
        returnValue = F("Faulenborn");
        break;
    }
    case 99541:
    {
        returnValue = F("Faulenbruchstr.");
        break;
    }
    case 99542:
    {
        returnValue = F("Faulenbrunnenweg");
        break;
    }
    case 99543:
    {
        returnValue = F("Faulendriesch");
        break;
    }
    case 99544:
    {
        returnValue = F("Faulenfürster Str.");
        break;
    }
    case 99545:
    {
        returnValue = F("Faulenhauweg");
        break;
    }
    case 99546:
    {
        returnValue = F("Faulenhofe-Ost");
        break;
    }
    case 99547:
    {
        returnValue = F("Faulenhofe-West");
        break;
    }
    case 99548:
    {
        returnValue = F("Faulenhofer Weg");
        break;
    }
    case 99549:
    {
        returnValue = F("Faulenpuhl");
        break;
    }
    case 99550:
    {
        returnValue = F("Faulensee");
        break;
    }
    case 99551:
    {
        returnValue = F("Faulenseestr.");
        break;
    }
    case 99552:
    {
        returnValue = F("Faulenseeweg");
        break;
    }
    case 99553:
    {
        returnValue = F("Faulensiek");
        break;
    }
    case 99554:
    {
        returnValue = F("Faulensieksweg");
        break;
    }
    case 99555:
    {
        returnValue = F("Faulenstr.");
        break;
    }
    case 99556:
    {
        returnValue = F("Faulenzerweg");
        break;
    }
    case 99557:
    {
        returnValue = F("Fauler Grund");
        break;
    }
    case 99558:
    {
        returnValue = F("Fauler Pfad");
        break;
    }
    case 99559:
    {
        returnValue = F("Fauler Steg");
        break;
    }
    case 99560:
    {
        returnValue = F("Fauler Weg");
        break;
    }
    case 99561:
    {
        returnValue = F("Faulerstr.");
        break;
    }
    case 99562:
    {
        returnValue = F("Faules Faß");
        break;
    }
    case 99563:
    {
        returnValue = F("Faules Feld");
        break;
    }
    case 99564:
    {
        returnValue = F("Faules Tal");
        break;
    }
    case 99565:
    {
        returnValue = F("Faulgasse");
        break;
    }
    case 99566:
    {
        returnValue = F("Faulhaberstr.");
        break;
    }
    case 99567:
    {
        returnValue = F("Faulhornweg");
        break;
    }
    case 99568:
    {
        returnValue = F("Faulhornweg / Flügel 12a");
        break;
    }
    case 99569:
    {
        returnValue = F("Faullederstr.");
        break;
    }
    case 99570:
    {
        returnValue = F("Faulloch");
        break;
    }
    case 99571:
    {
        returnValue = F("Faulmannstr.");
        break;
    }
    case 99572:
    {
        returnValue = F("Faulmannweg");
        break;
    }
    case 99573:
    {
        returnValue = F("Faulmattweg");
        break;
    }
    case 99574:
    {
        returnValue = F("Faulmert");
        break;
    }
    case 99575:
    {
        returnValue = F("Faulstiegstr.");
        break;
    }
    case 99576:
    {
        returnValue = F("Faulstr.");
        break;
    }
    case 99577:
    {
        returnValue = F("Faultannenfurche");
        break;
    }
    case 99578:
    {
        returnValue = F("Faulunger Weg");
        break;
    }
    case 99579:
    {
        returnValue = F("Faunastr.");
        break;
    }
    case 99580:
    {
        returnValue = F("Faunaweg");
        break;
    }
    case 99581:
    {
        returnValue = F("Faunstieg");
        break;
    }
    case 99582:
    {
        returnValue = F("Faunstr.");
        break;
    }
    case 99583:
    {
        returnValue = F("Faunusweg");
        break;
    }
    case 99584:
    {
        returnValue = F("Faureciastr.");
        break;
    }
    case 99585:
    {
        returnValue = F("Faurndauer Str.");
        break;
    }
    case 99586:
    {
        returnValue = F("Fausenburg");
        break;
    }
    case 99587:
    {
        returnValue = F("Fauserweg");
        break;
    }
    case 99588:
    {
        returnValue = F("Fauslerstr.");
        break;
    }
    case 99589:
    {
        returnValue = F("Faust-Remmert-Str.");
        break;
    }
    case 99590:
    {
        returnValue = F("Faust-von-Stromberg-Str.");
        break;
    }
    case 99591:
    {
        returnValue = F("Faustackerweg");
        break;
    }
    case 99592:
    {
        returnValue = F("Faustenberg");
        break;
    }
    case 99593:
    {
        returnValue = F("Faustendorf");
        break;
    }
    case 99594:
    {
        returnValue = F("Faustenholzstr.");
        break;
    }
    case 99595:
    {
        returnValue = F("Faustgäßchen");
        break;
    }
    case 99596:
    {
        returnValue = F("Faustin-Mennel-Str.");
        break;
    }
    case 99597:
    {
        returnValue = F("Faustinastr.");
        break;
    }
    case 99598:
    {
        returnValue = F("Faustinusstr.");
        break;
    }
    case 99599:
    {
        returnValue = F("Faustmühlenweg");
        break;
    }
    case 99600:
    {
        returnValue = F("Faustnerweg");
        break;
    }
    case 99601:
    {
        returnValue = F("Faustnitzweg");
        break;
    }
    case 99602:
    {
        returnValue = F("Fauststr.");
        break;
    }
    case 99603:
    {
        returnValue = F("Faustweg");
        break;
    }
    case 99604:
    {
        returnValue = F("Fautenbacher Str.");
        break;
    }
    case 99605:
    {
        returnValue = F("Fautenbruchstr.");
        break;
    }
    case 99606:
    {
        returnValue = F("Fauthstr.");
        break;
    }
    case 99607:
    {
        returnValue = F("Fauthweg");
        break;
    }
    case 99608:
    {
        returnValue = F("Fautspacher Weg");
        break;
    }
    case 99609:
    {
        returnValue = F("Fautwiesenstr.");
        break;
    }
    case 99610:
    {
        returnValue = F("Fauviller Ring");
        break;
    }
    case 99611:
    {
        returnValue = F("Favoritegärten");
        break;
    }
    case 99612:
    {
        returnValue = F("Favoritepark");
        break;
    }
    case 99613:
    {
        returnValue = F("Favoritestr.");
        break;
    }
    case 99614:
    {
        returnValue = F("Faxweg");
        break;
    }
    case 99615:
    {
        returnValue = F("Fayencestr.");
        break;
    }
    case 99616:
    {
        returnValue = F("Fayenceweg");
        break;
    }
    case 99617:
    {
        returnValue = F("Fazichroett");
        break;
    }
    case 99618:
    {
        returnValue = F("Faßbenderkaul");
        break;
    }
    case 99619:
    {
        returnValue = F("Faßberger Str.");
        break;
    }
    case 99620:
    {
        returnValue = F("Faßbergstr.");
        break;
    }
    case 99621:
    {
        returnValue = F("Faßbindergasse");
        break;
    }
    case 99622:
    {
        returnValue = F("Faßbinderstr.");
        break;
    }
    case 99623:
    {
        returnValue = F("Faßbinderweg");
        break;
    }
    case 99624:
    {
        returnValue = F("Faßbrink");
        break;
    }
    case 99625:
    {
        returnValue = F("Faßgasse");
        break;
    }
    case 99626:
    {
        returnValue = F("Faßlochsberg");
        break;
    }
    case 99627:
    {
        returnValue = F("Faßmannsreuther Str.");
        break;
    }
    case 99628:
    {
        returnValue = F("Faßmeyerstr.");
        break;
    }
    case 99629:
    {
        returnValue = F("Faßnachtstr.");
        break;
    }
    case 99630:
    {
        returnValue = F("Faßstr.");
        break;
    }
    case 99631:
    {
        returnValue = F("Faßweg");
        break;
    }
    case 99632:
    {
        returnValue = F("Faßäckerweg");
        break;
    }
    case 99633:
    {
        returnValue = F("Fdr.-von-Bodelschwingh-Weg");
        break;
    }
    case 99634:
    {
        returnValue = F("Fechenbachpark");
        break;
    }
    case 99635:
    {
        returnValue = F("Fechenbachstr.");
        break;
    }
    case 99636:
    {
        returnValue = F("Fechenheimer Leinpfad");
        break;
    }
    case 99637:
    {
        returnValue = F("Fechenheimer Str.");
        break;
    }
    case 99638:
    {
        returnValue = F("Fechenheimer Weg");
        break;
    }
    case 99639:
    {
        returnValue = F("Fechenwiesen");
        break;
    }
    case 99640:
    {
        returnValue = F("Fechheimer Str.");
        break;
    }
    case 99641:
    {
        returnValue = F("Fechinger Str.");
        break;
    }
    case 99642:
    {
        returnValue = F("Fechnerstr.");
        break;
    }
    case 99643:
    {
        returnValue = F("Fechnerweg");
        break;
    }
    case 99644:
    {
        returnValue = F("Fechtboden");
        break;
    }
    case 99645:
    {
        returnValue = F("Fechtelerstr.");
        break;
    }
    case 99646:
    {
        returnValue = F("Fechtenbreite");
        break;
    }
    case 99647:
    {
        returnValue = F("Fechtenkamp");
        break;
    }
    case 99648:
    {
        returnValue = F("Fechterweg");
        break;
    }
    case 99649:
    {
        returnValue = F("Fechtstr.");
        break;
    }
    case 99650:
    {
        returnValue = F("Feckelsberg");
        break;
    }
    case 99651:
    {
        returnValue = F("Feckelsberger Weg");
        break;
    }
    case 99652:
    {
        returnValue = F("Feckenhauser Str.");
        break;
    }
    case 99653:
    {
        returnValue = F("Feckersbach");
        break;
    }
    case 99654:
    {
        returnValue = F("Feckinger Str.");
        break;
    }
    case 99655:
    {
        returnValue = F("Feckweilerberg");
        break;
    }
    case 99656:
    {
        returnValue = F("Feckweilerbruch");
        break;
    }
    case 99657:
    {
        returnValue = F("Feckweilerhaide");
        break;
    }
    case 99658:
    {
        returnValue = F("Feckweilerstr.");
        break;
    }
    case 99659:
    {
        returnValue = F("Feddeler Str.");
        break;
    }
    case 99660:
    {
        returnValue = F("Feddelerweg");
        break;
    }
    case 99661:
    {
        returnValue = F("Feddelesch Jaaß (Fittlersgasse)");
        break;
    }
    case 99662:
    {
        returnValue = F("Feddenweg");
        break;
    }
    case 99663:
    {
        returnValue = F("Fedderbach");
        break;
    }
    case 99664:
    {
        returnValue = F("Fedderbroweg");
        break;
    }
    case 99665:
    {
        returnValue = F("Feddersdeich");
        break;
    }
    case 99666:
    {
        returnValue = F("Feddersenstr.");
        break;
    }
    case 99667:
    {
        returnValue = F("Feddersenweg");
        break;
    }
    case 99668:
    {
        returnValue = F("Fedderstr.");
        break;
    }
    case 99669:
    {
        returnValue = F("Fedderswarf");
        break;
    }
    case 99670:
    {
        returnValue = F("Fedderwarder Deich");
        break;
    }
    case 99671:
    {
        returnValue = F("Fedderwarder Landstr.");
        break;
    }
    case 99672:
    {
        returnValue = F("Fedderwarder Str.");
        break;
    }
    case 99673:
    {
        returnValue = F("Fedderwarder Weg");
        break;
    }
    case 99674:
    {
        returnValue = F("Fedelerstr.");
        break;
    }
    case 99675:
    {
        returnValue = F("Fedelhören");
        break;
    }
    case 99676:
    {
        returnValue = F("Feder");
        break;
    }
    case 99677:
    {
        returnValue = F("Federath");
        break;
    }
    case 99678:
    {
        returnValue = F("Federathweg");
        break;
    }
    case 99679:
    {
        returnValue = F("Federbachstr.");
        break;
    }
    case 99680:
    {
        returnValue = F("Federburgstr.");
        break;
    }
    case 99681:
    {
        returnValue = F("Federerweg");
        break;
    }
    case 99682:
    {
        returnValue = F("Federgasse");
        break;
    }
    case 99683:
    {
        returnValue = F("Federgaustr.");
        break;
    }
    case 99684:
    {
        returnValue = F("Federgrasweg");
        break;
    }
    case 99685:
    {
        returnValue = F("Federhafengasse");
        break;
    }
    case 99686:
    {
        returnValue = F("Federhecke");
        break;
    }
    case 99687:
    {
        returnValue = F("Federheckstr.");
        break;
    }
    case 99688:
    {
        returnValue = F("Federmannstr.");
        break;
    }
    case 99689:
    {
        returnValue = F("Federmannweg");
        break;
    }
    case 99690:
    {
        returnValue = F("Federmarkt");
        break;
    }
    case 99691:
    {
        returnValue = F("Federnhof");
        break;
    }
    case 99692:
    {
        returnValue = F("Federnseestr.");
        break;
    }
    case 99693:
    {
        returnValue = F("Federower Str.");
        break;
    }
    case 99694:
    {
        returnValue = F("Federseestr.");
        break;
    }
    case 99695:
    {
        returnValue = F("Federseeweg");
        break;
    }
    case 99696:
    {
        returnValue = F("Federstr.");
        break;
    }
    case 99697:
    {
        returnValue = F("Federteilstr.");
        break;
    }
    case 99698:
    {
        returnValue = F("Federwasen");
        break;
    }
    case 99699:
    {
        returnValue = F("Federwiesstr.");
        break;
    }
    case 99700:
    {
        returnValue = F("Federwischer Str.");
        break;
    }
    case 99701:
    {
        returnValue = F("Fedlers Garten");
        break;
    }
    case 99702:
    {
        returnValue = F("Fedor-Flinzer-Str.");
        break;
    }
    case 99703:
    {
        returnValue = F("Fedor-Schuchardt-Str.");
        break;
    }
    case 99704:
    {
        returnValue = F("Fedor-Sommer-Str.");
        break;
    }
    case 99705:
    {
        returnValue = F("Feederhuugam");
        break;
    }
    case 99706:
    {
        returnValue = F("Feegersweg");
        break;
    }
    case 99707:
    {
        returnValue = F("Feeks-Linden");
        break;
    }
    case 99708:
    {
        returnValue = F("Feeltenweg");
        break;
    }
    case 99709:
    {
        returnValue = F("Feengrottenweg");
        break;
    }
    case 99710:
    {
        returnValue = F("Feenhöher Weg");
        break;
    }
    case 99711:
    {
        returnValue = F("Feenkamp");
        break;
    }
    case 99712:
    {
        returnValue = F("Feenmoosstr.");
        break;
    }
    case 99713:
    {
        returnValue = F("Feenpfad");
        break;
    }
    case 99714:
    {
        returnValue = F("Feenring");
        break;
    }
    case 99715:
    {
        returnValue = F("Feenstieg");
        break;
    }
    case 99716:
    {
        returnValue = F("Feenstr.");
        break;
    }
    case 99717:
    {
        returnValue = F("Feenweg");
        break;
    }
    case 99718:
    {
        returnValue = F("Feenweltchen");
        break;
    }
    case 99719:
    {
        returnValue = F("Feenwiese");
        break;
    }
    case 99720:
    {
        returnValue = F("Feerenstr.");
        break;
    }
    case 99721:
    {
        returnValue = F("Feerner Moorweg");
        break;
    }
    case 99722:
    {
        returnValue = F("Feerstr.");
        break;
    }
    case 99723:
    {
        returnValue = F("Feeschen Acker");
        break;
    }
    case 99724:
    {
        returnValue = F("Feeshof");
        break;
    }
    case 99725:
    {
        returnValue = F("Feetness-Parcours");
        break;
    }
    case 99726:
    {
        returnValue = F("Fegebanksweg");
        break;
    }
    case 99727:
    {
        returnValue = F("Fegefeuer");
        break;
    }
    case 99728:
    {
        returnValue = F("Fegesack");
        break;
    }
    case 99729:
    {
        returnValue = F("Fegetasche");
        break;
    }
    case 99730:
    {
        returnValue = F("Fegetascher Weg");
        break;
    }
    case 99731:
    {
        returnValue = F("Fegeteschstr.");
        break;
    }
    case 99732:
    {
        returnValue = F("Feggelerweg");
        break;
    }
    case 99733:
    {
        returnValue = F("Fehlabrücke");
        break;
    }
    case 99734:
    {
        returnValue = F("Fehlackerweg");
        break;
    }
    case 99735:
    {
        returnValue = F("Fehlastr.");
        break;
    }
    case 99736:
    {
        returnValue = F("Fehlatalstr.");
        break;
    }
    case 99737:
    {
        returnValue = F("Fehlbachstr.");
        break;
    }
    case 99738:
    {
        returnValue = F("Fehlbachweg");
        break;
    }
    case 99739:
    {
        returnValue = F("Fehlburger Weg");
        break;
    }
    case 99740:
    {
        returnValue = F("Fehleitener Str.");
        break;
    }
    case 99741:
    {
        returnValue = F("Fehlenacker");
        break;
    }
    case 99742:
    {
        returnValue = F("Fehlender Feld");
        break;
    }
    case 99743:
    {
        returnValue = F("Fehlender Weg bei Barterode");
        break;
    }
    case 99744:
    {
        returnValue = F("Fehlenweg");
        break;
    }
    case 99745:
    {
        returnValue = F("Fehlesdyck");
        break;
    }
    case 99746:
    {
        returnValue = F("Fehlgang");
        break;
    }
    case 99747:
    {
        returnValue = F("Fehlhalde");
        break;
    }
    case 99748:
    {
        returnValue = F("Fehlhaldensteige");
        break;
    }
    case 99749:
    {
        returnValue = F("Fehlhaldenweg");
        break;
    }
    case 99750:
    {
        returnValue = F("Fehlheimer Str.");
        break;
    }
    case 99751:
    {
        returnValue = F("Fehling");
        break;
    }
    case 99752:
    {
        returnValue = F("Fehlinger Str.");
        break;
    }
    case 99753:
    {
        returnValue = F("Fehlingstr.");
        break;
    }
    case 99754:
    {
        returnValue = F("Fehlingsweg");
        break;
    }
    case 99755:
    {
        returnValue = F("Fehlnerweg");
        break;
    }
    case 99756:
    {
        returnValue = F("Fehlowweg");
        break;
    }
    case 99757:
    {
        returnValue = F("Fehlstr.");
        break;
    }
    case 99758:
    {
        returnValue = F("Fehlstr. Ost");
        break;
    }
    case 99759:
    {
        returnValue = F("Fehläckerweg");
        break;
    }
    case 99760:
    {
        returnValue = F("Fehmarnbeltweg");
        break;
    }
    case 99761:
    {
        returnValue = F("Fehmarner Ring");
        break;
    }
    case 99762:
    {
        returnValue = F("Fehmarner Str.");
        break;
    }
    case 99763:
    {
        returnValue = F("Fehmarnring");
        break;
    }
    case 99764:
    {
        returnValue = F("Fehmarnstr.");
        break;
    }
    case 99765:
    {
        returnValue = F("Fehmarnsund");
        break;
    }
    case 99766:
    {
        returnValue = F("Fehmarnsundweg");
        break;
    }
    case 99767:
    {
        returnValue = F("Fehmarnweg");
        break;
    }
    case 99768:
    {
        returnValue = F("Fehmarnwinkel");
        break;
    }
    case 99769:
    {
        returnValue = F("Fehmbusch");
        break;
    }
    case 99770:
    {
        returnValue = F("Fehmsweg");
        break;
    }
    case 99771:
    {
        returnValue = F("Fehnbachstr.");
        break;
    }
    case 99772:
    {
        returnValue = F("Fehnbrücke");
        break;
    }
    case 99773:
    {
        returnValue = F("Fehnbrücker Moorweg");
        break;
    }
    case 99774:
    {
        returnValue = F("Fehndorfer Str.");
        break;
    }
    case 99775:
    {
        returnValue = F("Fehnhusen");
        break;
    }
    case 99776:
    {
        returnValue = F("Fehnhuser Gaste");
        break;
    }
    case 99777:
    {
        returnValue = F("Fehnkenweg");
        break;
    }
    case 99778:
    {
        returnValue = F("Fehnker Str.");
        break;
    }
    case 99779:
    {
        returnValue = F("Fehnker Weg");
        break;
    }
    case 99780:
    {
        returnValue = F("Fehnkerweg");
        break;
    }
    case 99781:
    {
        returnValue = F("Fehnkämpe");
        break;
    }
    case 99782:
    {
        returnValue = F("Fehnring");
        break;
    }
    case 99783:
    {
        returnValue = F("Fehnstellenweg");
        break;
    }
    case 99784:
    {
        returnValue = F("Fehnstr.");
        break;
    }
    case 99785:
    {
        returnValue = F("Fehntjer Str.");
        break;
    }
    case 99786:
    {
        returnValue = F("Fehntjer Weg");
        break;
    }
    case 99787:
    {
        returnValue = F("Fehnweg");
        break;
    }
    case 99788:
    {
        returnValue = F("Fehraltorferweg");
        break;
    }
    case 99789:
    {
        returnValue = F("Fehrbacher Str.");
        break;
    }
    case 99790:
    {
        returnValue = F("Fehrbelliner Platz");
        break;
    }
    case 99791:
    {
        returnValue = F("Fehrbelliner Str.");
        break;
    }
    case 99792:
    {
        returnValue = F("Fehrbelliner Weg");
        break;
    }
    case 99793:
    {
        returnValue = F("Fehrbellinstr.");
        break;
    }
    case 99794:
    {
        returnValue = F("Fehrbellinweg");
        break;
    }
    case 99795:
    {
        returnValue = F("Fehrenbachallee");
        break;
    }
    case 99796:
    {
        returnValue = F("Fehrenbachstr.");
        break;
    }
    case 99797:
    {
        returnValue = F("Fehrenberg");
        break;
    }
    case 99798:
    {
        returnValue = F("Fehrenberger Str.");
        break;
    }
    case 99799:
    {
        returnValue = F("Fehrenbergweg");
        break;
    }
    case 99800:
    {
        returnValue = F("Fehrenbracht");
        break;
    }
    case 99801:
    {
        returnValue = F("Fehrenbrachter Str.");
        break;
    }
    case 99802:
    {
        returnValue = F("Fehrenbrucher Mühlenweg");
        break;
    }
    case 99803:
    {
        returnValue = F("Fehrenböteler Dorfstr.");
        break;
    }
    case 99804:
    {
        returnValue = F("Fehrenböteler Str.");
        break;
    }
    case 99805:
    {
        returnValue = F("Fehrener Str.");
        break;
    }
    case 99806:
    {
        returnValue = F("Fehrenkamp");
        break;
    }
    case 99807:
    {
        returnValue = F("Fehrenkampstr.");
        break;
    }
    case 99808:
    {
        returnValue = F("Fehrenland");
        break;
    }
    case 99809:
    {
        returnValue = F("Fehrenlandweg");
        break;
    }
    case 99810:
    {
        returnValue = F("Fehrensholz");
        break;
    }
    case 99811:
    {
        returnValue = F("Fehrentzstr.");
        break;
    }
    case 99812:
    {
        returnValue = F("Fehrenwinkel");
        break;
    }
    case 99813:
    {
        returnValue = F("Fehrfeld");
        break;
    }
    case 99814:
    {
        returnValue = F("Fehringshof");
        break;
    }
    case 99815:
    {
        returnValue = F("Fehrleinweg");
        break;
    }
    case 99816:
    {
        returnValue = F("Fehrlekreisel");
        break;
    }
    case 99817:
    {
        returnValue = F("Fehrlesteg");
        break;
    }
    case 99818:
    {
        returnValue = F("Fehrlingser Str.");
        break;
    }
    case 99819:
    {
        returnValue = F("Fehrlingser Weg");
        break;
    }
    case 99820:
    {
        returnValue = F("Fehrmannstr.");
        break;
    }
    case 99821:
    {
        returnValue = F("Fehrmannweg");
        break;
    }
    case 99822:
    {
        returnValue = F("Fehrmoorweg");
        break;
    }
    case 99823:
    {
        returnValue = F("Fehrower Weg");
        break;
    }
    case 99824:
    {
        returnValue = F("Fehrsdorf");
        break;
    }
    case 99825:
    {
        returnValue = F("Fehrsplatz");
        break;
    }
    case 99826:
    {
        returnValue = F("Fehrsstr.");
        break;
    }
    case 99827:
    {
        returnValue = F("Fehrstieg");
        break;
    }
    case 99828:
    {
        returnValue = F("Fehrstr.");
        break;
    }
    case 99829:
    {
        returnValue = F("Fehrsweg");
        break;
    }
    case 99830:
    {
        returnValue = F("Fehsholmer Weg");
        break;
    }
    case 99831:
    {
        returnValue = F("Fehwiesenstr.");
        break;
    }
    case 99832:
    {
        returnValue = F("Feibeldüne");
        break;
    }
    case 99833:
    {
        returnValue = F("Feichteckstr.");
        break;
    }
    case 99834:
    {
        returnValue = F("Feichteckweg");
        break;
    }
    case 99835:
    {
        returnValue = F("Feichten");
        break;
    }
    case 99836:
    {
        returnValue = F("Feichtener Str.");
        break;
    }
    case 99837:
    {
        returnValue = F("Feichtenstr.");
        break;
    }
    case 99838:
    {
        returnValue = F("Feichtenweg");
        break;
    }
    case 99839:
    {
        returnValue = F("Feichterweg");
        break;
    }
    case 99840:
    {
        returnValue = F("Feichtetstr.");
        break;
    }
    case 99841:
    {
        returnValue = F("Feichthofstr.");
        break;
    }
    case 99842:
    {
        returnValue = F("Feichtholzweg");
        break;
    }
    case 99843:
    {
        returnValue = F("Feichtlstr.");
        break;
    }
    case 99844:
    {
        returnValue = F("Feichtmaier");
        break;
    }
    case 99845:
    {
        returnValue = F("Feichtmairstr.");
        break;
    }
    case 99846:
    {
        returnValue = F("Feichtmayrstr.");
        break;
    }
    case 99847:
    {
        returnValue = F("Feichtmayrweg");
        break;
    }
    case 99848:
    {
        returnValue = F("Feichtmeierweg");
        break;
    }
    case 99849:
    {
        returnValue = F("Feichtner Str.");
        break;
    }
    case 99850:
    {
        returnValue = F("Feichtstr.");
        break;
    }
    case 99851:
    {
        returnValue = F("Feidelweg");
        break;
    }
    case 99852:
    {
        returnValue = F("Feidiekstr.");
        break;
    }
    case 99853:
    {
        returnValue = F("Feidikstr.");
        break;
    }
    case 99854:
    {
        returnValue = F("Feidweg");
        break;
    }
    case 99855:
    {
        returnValue = F("Feienberg");
        break;
    }
    case 99856:
    {
        returnValue = F("Feienberger Weg");
        break;
    }
    case 99857:
    {
        returnValue = F("Feierabend-Privatweg");
        break;
    }
    case 99858:
    {
        returnValue = F("Feierabendallee");
        break;
    }
    case 99859:
    {
        returnValue = F("Feierabendfelsenweg");
        break;
    }
    case 99860:
    {
        returnValue = F("Feierabendgrund");
        break;
    }
    case 99861:
    {
        returnValue = F("Feierabendheimstr.");
        break;
    }
    case 99862:
    {
        returnValue = F("Feierabendmühle");
        break;
    }
    case 99863:
    {
        returnValue = F("Feierabendstr.");
        break;
    }
    case 99864:
    {
        returnValue = F("Feierabendweg");
        break;
    }
    case 99865:
    {
        returnValue = F("Feierabendwinkel");
        break;
    }
    case 99866:
    {
        returnValue = F("Feierleweg");
        break;
    }
    case 99867:
    {
        returnValue = F("Feierstr.");
        break;
    }
    case 99868:
    {
        returnValue = F("Feigenberg");
        break;
    }
    case 99869:
    {
        returnValue = F("Feigenbutzstr.");
        break;
    }
    case 99870:
    {
        returnValue = F("Feigengasse");
        break;
    }
    case 99871:
    {
        returnValue = F("Feigenhof");
        break;
    }
    case 99872:
    {
        returnValue = F("Feigentalweg");
        break;
    }
    case 99873:
    {
        returnValue = F("Feigenweg");
        break;
    }
    case 99874:
    {
        returnValue = F("Feigestr.");
        break;
    }
    case 99875:
    {
        returnValue = F("Feigstr.");
        break;
    }
    case 99876:
    {
        returnValue = F("Feikenhof");
        break;
    }
    case 99877:
    {
        returnValue = F("Feil");
        break;
    }
    case 99878:
    {
        returnValue = F("Feilberg");
        break;
    }
    case 99879:
    {
        returnValue = F("Feilenbrunnenstr.");
        break;
    }
    case 99880:
    {
        returnValue = F("Feilengasse");
        break;
    }
    case 99881:
    {
        returnValue = F("Feilenhalde Weg");
        break;
    }
    case 99882:
    {
        returnValue = F("Feilenhauerstr.");
        break;
    }
    case 99883:
    {
        returnValue = F("Feilenhauerweg");
        break;
    }
    case 99884:
    {
        returnValue = F("Feilenhofweg");
        break;
    }
    case 99885:
    {
        returnValue = F("Feilenschneise");
        break;
    }
    case 99886:
    {
        returnValue = F("Feilenstr.");
        break;
    }
    case 99887:
    {
        returnValue = F("Feilenswies");
        break;
    }
    case 99888:
    {
        returnValue = F("Feilenweg");
        break;
    }
    case 99889:
    {
        returnValue = F("Feiler");
        break;
    }
    case 99890:
    {
        returnValue = F("Feiler Heck");
        break;
    }
    case 99891:
    {
        returnValue = F("Feiler Weg");
        break;
    }
    case 99892:
    {
        returnValue = F("Feilersdorf");
        break;
    }
    case 99893:
    {
        returnValue = F("Feilerweg");
        break;
    }
    case 99894:
    {
        returnValue = F("Feiletalstr.");
        break;
    }
    case 99895:
    {
        returnValue = F("Feilgartenweg");
        break;
    }
    case 99896:
    {
        returnValue = F("Feilgasse");
        break;
    }
    case 99897:
    {
        returnValue = F("Feilings Goarden");
        break;
    }
    case 99898:
    {
        returnValue = F("Feilitzscher Str.");
        break;
    }
    case 99899:
    {
        returnValue = F("Feilitzschpark");
        break;
    }
    case 99900:
    {
        returnValue = F("Feilitzschstr.");
        break;
    }
    case 99901:
    {
        returnValue = F("Feilkirschshöhe");
        break;
    }
    case 99902:
    {
        returnValue = F("Feilnbacher Kreisel");
        break;
    }
    case 99903:
    {
        returnValue = F("Feilnbacher Str.");
        break;
    }
    case 99904:
    {
        returnValue = F("Feilnerstr.");
        break;
    }
    case 99905:
    {
        returnValue = F("Feilsdorfer Str.");
        break;
    }
    case 99906:
    {
        returnValue = F("Feilsgraben");
        break;
    }
    case 99907:
    {
        returnValue = F("Feilturmgasse");
        break;
    }
    case 99908:
    {
        returnValue = F("Feilweg");
        break;
    }
    case 99909:
    {
        returnValue = F("Feimeckweg");
        break;
    }
    case 99910:
    {
        returnValue = F("Feimenstr.");
        break;
    }
    case 99911:
    {
        returnValue = F("Feimlisburgweg");
        break;
    }
    case 99912:
    {
        returnValue = F("Feinauweg");
        break;
    }
    case 99913:
    {
        returnValue = F("Feinbauweg");
        break;
    }
    case 99914:
    {
        returnValue = F("Feincheswiese");
        break;
    }
    case 99915:
    {
        returnValue = F("Feindhag");
        break;
    }
    case 99916:
    {
        returnValue = F("Feindrahtstr.");
        break;
    }
    case 99917:
    {
        returnValue = F("Feine Koppel");
        break;
    }
    case 99918:
    {
        returnValue = F("Feine Sache");
        break;
    }
    case 99919:
    {
        returnValue = F("Feinebachstr.");
        break;
    }
    case 99920:
    {
        returnValue = F("Feineisenstr.");
        break;
    }
    case 99921:
    {
        returnValue = F("Feiner Str.");
        break;
    }
    case 99922:
    {
        returnValue = F("Feinerstr.");
        break;
    }
    case 99923:
    {
        returnValue = F("Feinerweg");
        break;
    }
    case 99924:
    {
        returnValue = F("Feinhöfen");
        break;
    }
    case 99925:
    {
        returnValue = F("Feininger Ring");
        break;
    }
    case 99926:
    {
        returnValue = F("Feininger Str.");
        break;
    }
    case 99927:
    {
        returnValue = F("Feiningerstr.");
        break;
    }
    case 99928:
    {
        returnValue = F("Feiningerweg");
        break;
    }
    case 99929:
    {
        returnValue = F("Feinstr.");
        break;
    }
    case 99930:
    {
        returnValue = F("Feiselbergsfeld");
        break;
    }
    case 99931:
    {
        returnValue = F("Feistelberger Str.");
        break;
    }
    case 99932:
    {
        returnValue = F("Feistelholzstr.");
        break;
    }
    case 99933:
    {
        returnValue = F("Feistenbergstr.");
        break;
    }
    case 99934:
    {
        returnValue = F("Feistkornstr.");
        break;
    }
    case 99935:
    {
        returnValue = F("Feistlestr.");
        break;
    }
    case 99936:
    {
        returnValue = F("Feiteler Weg");
        break;
    }
    case 99937:
    {
        returnValue = F("Feithstr.");
        break;
    }
    case 99938:
    {
        returnValue = F("Feiße Bündt");
        break;
    }
    case 99939:
    {
        returnValue = F("Felackerstr.");
        break;
    }
    case 99940:
    {
        returnValue = F("Felbelstr.");
        break;
    }
    case 99941:
    {
        returnValue = F("Felbengärtlesweg");
        break;
    }
    case 99942:
    {
        returnValue = F("Felbenhof");
        break;
    }
    case 99943:
    {
        returnValue = F("Felbenstockweg");
        break;
    }
    case 99944:
    {
        returnValue = F("Felbenstr.");
        break;
    }
    case 99945:
    {
        returnValue = F("Felbenweg");
        break;
    }
    case 99946:
    {
        returnValue = F("Felbenweiher");
        break;
    }
    case 99947:
    {
        returnValue = F("Felbenwiese");
        break;
    }
    case 99948:
    {
        returnValue = F("Felbenwiesweg");
        break;
    }
    case 99949:
    {
        returnValue = F("Felbenäcker");
        break;
    }
    case 99950:
    {
        returnValue = F("Felbergasse");
        break;
    }
    case 99951:
    {
        returnValue = F("Felberich");
        break;
    }
    case 99952:
    {
        returnValue = F("Felberstr.");
        break;
    }
    case 99953:
    {
        returnValue = F("Felbigerstr.");
        break;
    }
    case 99954:
    {
        returnValue = F("Felbrigstr.");
        break;
    }
    case 99955:
    {
        returnValue = F("Felburg");
        break;
    }
    case 99956:
    {
        returnValue = F("Felburger Str.");
        break;
    }
    case 99957:
    {
        returnValue = F("Felburgweg");
        break;
    }
    case 99958:
    {
        returnValue = F("Felchengang");
        break;
    }
    case 99959:
    {
        returnValue = F("Felchensteg");
        break;
    }
    case 99960:
    {
        returnValue = F("Felchenstr.");
        break;
    }
    case 99961:
    {
        returnValue = F("Felchenweg");
        break;
    }
    case 99962:
    {
        returnValue = F("Felchesgasse");
        break;
    }
    case 99963:
    {
        returnValue = F("Felchgrabenweg");
        break;
    }
    case 99964:
    {
        returnValue = F("Felchower Str.");
        break;
    }
    case 99965:
    {
        returnValue = F("Felchtaer Bachbrücke Nr. S31-08");
        break;
    }
    case 99966:
    {
        returnValue = F("Felchtaer Hauptstr.");
        break;
    }
    case 99967:
    {
        returnValue = F("Felchtaer Str.");
        break;
    }
    case 99968:
    {
        returnValue = F("Felchtaer Winkel");
        break;
    }
    case 99969:
    {
        returnValue = F("Feld");
        break;
    }
    case 99970:
    {
        returnValue = F("Feld- und Waldweg alte B174");
        break;
    }
    case 99971:
    {
        returnValue = F("Feld- und Wiesenweg");
        break;
    }
    case 99972:
    {
        returnValue = F("Feld-Holm-Weg");
        break;
    }
    case 99973:
    {
        returnValue = F("Feld-Vorstmann-Str.");
        break;
    }
    case 99974:
    {
        returnValue = F("Feld-am-See-Ring");
        break;
    }
    case 99975:
    {
        returnValue = F("Feld/Waldweg");
        break;
    }
    case 99976:
    {
        returnValue = F("Feldabahnstr.");
        break;
    }
    case 99977:
    {
        returnValue = F("Feldackerweg");
        break;
    }
    case 99978:
    {
        returnValue = F("Feldafinger Str.");
        break;
    }
    case 99979:
    {
        returnValue = F("Feldahornstr.");
        break;
    }
    case 99980:
    {
        returnValue = F("Feldahornweg");
        break;
    }
    case 99981:
    {
        returnValue = F("Feldallee");
        break;
    }
    case 99982:
    {
        returnValue = F("Feldanger");
        break;
    }
    case 99983:
    {
        returnValue = F("Feldangerweg");
        break;
    }
    case 99984:
    {
        returnValue = F("Feldastr.");
        break;
    }
    case 99985:
    {
        returnValue = F("Feldatalradweg");
        break;
    }
    case 99986:
    {
        returnValue = F("Feldbach");
        break;
    }
    case 99987:
    {
        returnValue = F("Feldbachbrücke");
        break;
    }
    case 99988:
    {
        returnValue = F("Feldbachgraben");
        break;
    }
    case 99989:
    {
        returnValue = F("Feldbachmühle");
        break;
    }
    case 99990:
    {
        returnValue = F("Feldbachring");
        break;
    }
    case 99991:
    {
        returnValue = F("Feldbachstr.");
        break;
    }
    case 99992:
    {
        returnValue = F("Feldbachweg");
        break;
    }
    case 99993:
    {
        returnValue = F("Feldbahndamm");
        break;
    }
    case 99994:
    {
        returnValue = F("Feldbahnweg");
        break;
    }
    case 99995:
    {
        returnValue = F("Feldbank");
        break;
    }
    case 99996:
    {
        returnValue = F("Feldbarg");
        break;
    }
    case 99997:
    {
        returnValue = F("Feldbauer-Off");
        break;
    }
    case 99998:
    {
        returnValue = F("Feldbauerschaft");
        break;
    }
    case 99999:
    {
        returnValue = F("Feldbauerstr.");
        break;
    }
    case 100000:
    {
        returnValue = F("Feldbehnstr.");
        break;
    }
    case 100001:
    {
        returnValue = F("Feldbehnsweg");
        break;
    }
    case 100002:
    {
        returnValue = F("Feldberg");
        break;
    }
    case 100003:
    {
        returnValue = F("Feldberg-Klinik");
        break;
    }
    case 100004:
    {
        returnValue = F("Feldbergblick");
        break;
    }
    case 100005:
    {
        returnValue = F("Feldbergblickstr.");
        break;
    }
    case 100006:
    {
        returnValue = F("Feldberger Chaussee");
        break;
    }
    case 100007:
    {
        returnValue = F("Feldberger Hütte");
        break;
    }
    case 100008:
    {
        returnValue = F("Feldberger Str.");
        break;
    }
    case 100009:
    {
        returnValue = F("Feldberger Weg");
        break;
    }
    case 356354:
    {
        returnValue = F("f.w");
        break;
    }
    case 356355:
    {
        returnValue = F("fafff");
        break;
    }
    case 356356:
    {
        returnValue = F("feldstr.");
        break;
    }
    case 356357:
    {
        returnValue = F("feuchter Weg");
        break;
    }
    case 356358:
    {
        returnValue = F("fix me");
        break;
    }
    case 356359:
    {
        returnValue = F("forstweg");
        break;
    }
    }
    return returnValue;
}
