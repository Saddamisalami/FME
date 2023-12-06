#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameW1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 324450:
    {
        returnValue = F("W");
        break;
    }
    case 324451:
    {
        returnValue = F("W 10");
        break;
    }
    case 324452:
    {
        returnValue = F("W 11");
        break;
    }
    case 324453:
    {
        returnValue = F("W 6");
        break;
    }
    case 324454:
    {
        returnValue = F("W 7");
        break;
    }
    case 324455:
    {
        returnValue = F("W-Badmühlweg");
        break;
    }
    case 324456:
    {
        returnValue = F("W-Weg");
        break;
    }
    case 324457:
    {
        returnValue = F("W. Alfeld-Weg");
        break;
    }
    case 324458:
    {
        returnValue = F("W. Pieck Str.");
        break;
    }
    case 324459:
    {
        returnValue = F("W.-A.-Mozart-Str.");
        break;
    }
    case 324460:
    {
        returnValue = F("W.-Böckle-Weg");
        break;
    }
    case 324461:
    {
        returnValue = F("W.-C.-Röntgen-Str.");
        break;
    }
    case 324462:
    {
        returnValue = F("W.-Epple-Str.");
        break;
    }
    case 324463:
    {
        returnValue = F("W.-G.-Freund-Str.");
        break;
    }
    case 324464:
    {
        returnValue = F("W.-I.-Lenin-Str.");
        break;
    }
    case 324465:
    {
        returnValue = F("W.-Klemm-Weg");
        break;
    }
    case 324466:
    {
        returnValue = F("W.-Niemann-Str.");
        break;
    }
    case 324467:
    {
        returnValue = F("W.-Richter-Weg");
        break;
    }
    case 324468:
    {
        returnValue = F("W.-v. Hindte Weg");
        break;
    }
    case 324469:
    {
        returnValue = F("W.O.-von-Horn-Str.");
        break;
    }
    case 324470:
    {
        returnValue = F("W08");
        break;
    }
    case 324471:
    {
        returnValue = F("W09");
        break;
    }
    case 324472:
    {
        returnValue = F("W1");
        break;
    }
    case 324473:
    {
        returnValue = F("W10");
        break;
    }
    case 324474:
    {
        returnValue = F("W12");
        break;
    }
    case 324475:
    {
        returnValue = F("W4");
        break;
    }
    case 324476:
    {
        returnValue = F("W5");
        break;
    }
    case 324477:
    {
        returnValue = F("W6");
        break;
    }
    case 324478:
    {
        returnValue = F("W9");
        break;
    }
    case 324479:
    {
        returnValue = F("WASAG-Str.");
        break;
    }
    case 324480:
    {
        returnValue = F("WBZ-Garten");
        break;
    }
    case 324481:
    {
        returnValue = F("WE Am Mühlenfließ");
        break;
    }
    case 324482:
    {
        returnValue = F("WE Am Pottack");
        break;
    }
    case 324483:
    {
        returnValue = F("WE Am Rosenhain");
        break;
    }
    case 324484:
    {
        returnValue = F("WE Am Waldessaum");
        break;
    }
    case 324485:
    {
        returnValue = F("WE An der Schlaube");
        break;
    }
    case 324486:
    {
        returnValue = F("WE Klixmühle 1");
        break;
    }
    case 324487:
    {
        returnValue = F("WE Schlaubehammer Fähre");
        break;
    }
    case 324488:
    {
        returnValue = F("WE Schlaubehammer Nord");
        break;
    }
    case 324489:
    {
        returnValue = F("WE Schlaubehammer Wasser-Siedlung");
        break;
    }
    case 324490:
    {
        returnValue = F("WF, Kornmarkt");
        break;
    }
    case 324491:
    {
        returnValue = F("WH");
        break;
    }
    case 324492:
    {
        returnValue = F("WUMBO Kreisel");
        break;
    }
    case 324493:
    {
        returnValue = F("WW");
        break;
    }
    case 324494:
    {
        returnValue = F("WW 1");
        break;
    }
    case 324495:
    {
        returnValue = F("WW 10");
        break;
    }
    case 324496:
    {
        returnValue = F("WW 5");
        break;
    }
    case 324497:
    {
        returnValue = F("WW D1-Dreikirchen");
        break;
    }
    case 324498:
    {
        returnValue = F("WW E 1");
        break;
    }
    case 324499:
    {
        returnValue = F("WW HA2");
        break;
    }
    case 324500:
    {
        returnValue = F("Wa");
        break;
    }
    case 324501:
    {
        returnValue = F("WaGaPara");
        break;
    }
    case 324502:
    {
        returnValue = F("Waabsbrook");
        break;
    }
    case 324503:
    {
        returnValue = F("Waabser Chaussee");
        break;
    }
    case 324504:
    {
        returnValue = F("Waag");
        break;
    }
    case 324505:
    {
        returnValue = F("Waagegasse");
        break;
    }
    case 324506:
    {
        returnValue = F("Waagenbachstr.");
        break;
    }
    case 324507:
    {
        returnValue = F("Waagenstr.");
        break;
    }
    case 324508:
    {
        returnValue = F("Waageplatz");
        break;
    }
    case 324509:
    {
        returnValue = F("Waager Delle");
        break;
    }
    case 324510:
    {
        returnValue = F("Waager Hohlweg");
        break;
    }
    case 324511:
    {
        returnValue = F("Waager Planweg");
        break;
    }
    case 324512:
    {
        returnValue = F("Waagerner Tal");
        break;
    }
    case 324513:
    {
        returnValue = F("Waagestr.");
        break;
    }
    case 324514:
    {
        returnValue = F("Waageweg");
        break;
    }
    case 324515:
    {
        returnValue = F("Waaggasse");
        break;
    }
    case 324516:
    {
        returnValue = F("Waaggäßchen");
        break;
    }
    case 324517:
    {
        returnValue = F("Waaghausstr.");
        break;
    }
    case 324518:
    {
        returnValue = F("Waaghausweg");
        break;
    }
    case 324519:
    {
        returnValue = F("Waaghäuslwiese");
        break;
    }
    case 324520:
    {
        returnValue = F("Waagmatt");
        break;
    }
    case 324521:
    {
        returnValue = F("Waagmühle");
        break;
    }
    case 324522:
    {
        returnValue = F("Waagrain");
        break;
    }
    case 324523:
    {
        returnValue = F("Waagrainweg");
        break;
    }
    case 324524:
    {
        returnValue = F("Waagschale");
        break;
    }
    case 324525:
    {
        returnValue = F("Waagseichenweg");
        break;
    }
    case 324526:
    {
        returnValue = F("Waagstr.");
        break;
    }
    case 324527:
    {
        returnValue = F("Waagweg");
        break;
    }
    case 324528:
    {
        returnValue = F("Waagäckerstr.");
        break;
    }
    case 324529:
    {
        returnValue = F("Waaker Stieg");
        break;
    }
    case 324530:
    {
        returnValue = F("Waakhauser Str.");
        break;
    }
    case 324531:
    {
        returnValue = F("Waakirchener Str.");
        break;
    }
    case 324532:
    {
        returnValue = F("Waakirchner Str.");
        break;
    }
    case 324533:
    {
        returnValue = F("Waakirchner Weg");
        break;
    }
    case 324534:
    {
        returnValue = F("Waakstermoorweg");
        break;
    }
    case 324535:
    {
        returnValue = F("Waal");
        break;
    }
    case 324536:
    {
        returnValue = F("Waaler Str.");
        break;
    }
    case 324537:
    {
        returnValue = F("Waalhauptener Str.");
        break;
    }
    case 324538:
    {
        returnValue = F("Waalstr.");
        break;
    }
    case 324539:
    {
        returnValue = F("Waalwijker Str.");
        break;
    }
    case 324540:
    {
        returnValue = F("Waaneschlachswääsch");
        break;
    }
    case 324541:
    {
        returnValue = F("Waar");
        break;
    }
    case 324542:
    {
        returnValue = F("Waarbaum");
        break;
    }
    case 324543:
    {
        returnValue = F("Waardt");
        break;
    }
    case 324544:
    {
        returnValue = F("Waasemstr.");
        break;
    }
    case 324545:
    {
        returnValue = F("Waasenweg");
        break;
    }
    case 324546:
    {
        returnValue = F("Waasmühlgässchen");
        break;
    }
    case 324547:
    {
        returnValue = F("Waaster Jügem");
        break;
    }
    case 324548:
    {
        returnValue = F("Waasterstigh");
        break;
    }
    case 324549:
    {
        returnValue = F("Waaswai");
        break;
    }
    case 324550:
    {
        returnValue = F("Waaswitzer Weg");
        break;
    }
    case 324551:
    {
        returnValue = F("Waat");
        break;
    }
    case 324552:
    {
        returnValue = F("Waater Str.");
        break;
    }
    case 324553:
    {
        returnValue = F("Waaterkant");
        break;
    }
    case 324554:
    {
        returnValue = F("Wabach");
        break;
    }
    case 324555:
    {
        returnValue = F("Wabachstr.");
        break;
    }
    case 324556:
    {
        returnValue = F("Wabachsweg");
        break;
    }
    case 324557:
    {
        returnValue = F("Wabel");
        break;
    }
    case 324558:
    {
        returnValue = F("Wabeler Str.");
        break;
    }
    case 324559:
    {
        returnValue = F("Wabeler Weg");
        break;
    }
    case 324560:
    {
        returnValue = F("Wabelingweg");
        break;
    }
    case 324561:
    {
        returnValue = F("Wabenkamp");
        break;
    }
    case 324562:
    {
        returnValue = F("Wabenstr.");
        break;
    }
    case 324563:
    {
        returnValue = F("Wabenweg");
        break;
    }
    case 324564:
    {
        returnValue = F("Waberner Str.");
        break;
    }
    case 324565:
    {
        returnValue = F("Waberner Weg");
        break;
    }
    case 324566:
    {
        returnValue = F("Wabestr.");
        break;
    }
    case 324567:
    {
        returnValue = F("Wabeweg");
        break;
    }
    case 324568:
    {
        returnValue = F("Wabrichstr.");
        break;
    }
    case 324569:
    {
        returnValue = F("Wachauer Str.");
        break;
    }
    case 324570:
    {
        returnValue = F("Wachaustr.");
        break;
    }
    case 324571:
    {
        returnValue = F("Wachbacher Str.");
        break;
    }
    case 324572:
    {
        returnValue = F("Wachbacher Weg");
        break;
    }
    case 324573:
    {
        returnValue = F("Wachberg");
        break;
    }
    case 324574:
    {
        returnValue = F("Wachbergallee");
        break;
    }
    case 324575:
    {
        returnValue = F("Wachbergstr.");
        break;
    }
    case 324576:
    {
        returnValue = F("Wachbergweg");
        break;
    }
    case 324577:
    {
        returnValue = F("Wacheberg");
        break;
    }
    case 324578:
    {
        returnValue = F("Wachelweg");
        break;
    }
    case 324579:
    {
        returnValue = F("Wachenbachweg");
        break;
    }
    case 324580:
    {
        returnValue = F("Wachenbergstr.");
        break;
    }
    case 324581:
    {
        returnValue = F("Wachenbrunner Str.");
        break;
    }
    case 324582:
    {
        returnValue = F("Wachenbuchener Str.");
        break;
    }
    case 324583:
    {
        returnValue = F("Wachenbucher Str.");
        break;
    }
    case 324584:
    {
        returnValue = F("Wachenburgstr.");
        break;
    }
    case 324585:
    {
        returnValue = F("Wachenburgweg");
        break;
    }
    case 324586:
    {
        returnValue = F("Wachendorfer Hain");
        break;
    }
    case 324587:
    {
        returnValue = F("Wachendorfer Str.");
        break;
    }
    case 324588:
    {
        returnValue = F("Wachendorfer Weg");
        break;
    }
    case 324589:
    {
        returnValue = F("Wachendorffstr.");
        break;
    }
    case 324590:
    {
        returnValue = F("Wachengrundstr.");
        break;
    }
    case 324591:
    {
        returnValue = F("Wachenheimer Str.");
        break;
    }
    case 324592:
    {
        returnValue = F("Wachenheimstr.");
        break;
    }
    case 324593:
    {
        returnValue = F("Wachenhäuser Str.");
        break;
    }
    case 324594:
    {
        returnValue = F("Wachenmeisterweg");
        break;
    }
    case 324595:
    {
        returnValue = F("Wachenrother Weg");
        break;
    }
    case 324596:
    {
        returnValue = F("Wachererweg");
        break;
    }
    case 324597:
    {
        returnValue = F("Wacherling");
        break;
    }
    case 324598:
    {
        returnValue = F("Wachesiedlung");
        break;
    }
    case 324599:
    {
        returnValue = F("Wachestr.");
        break;
    }
    case 324600:
    {
        returnValue = F("Wachetelstr.");
        break;
    }
    case 324601:
    {
        returnValue = F("Wacheweg");
        break;
    }
    case 324602:
    {
        returnValue = F("Wachfuß");
        break;
    }
    case 324603:
    {
        returnValue = F("Wachgasse");
        break;
    }
    case 324604:
    {
        returnValue = F("Wachhaldenweg");
        break;
    }
    case 324605:
    {
        returnValue = F("Wachhausenstr.");
        break;
    }
    case 324606:
    {
        returnValue = F("Wachhausstr.");
        break;
    }
    case 324607:
    {
        returnValue = F("Wachhecke");
        break;
    }
    case 324608:
    {
        returnValue = F("Wachheckenberg");
        break;
    }
    case 324609:
    {
        returnValue = F("Wachheckenweg");
        break;
    }
    case 324610:
    {
        returnValue = F("Wachhoferstr.");
        break;
    }
    case 324611:
    {
        returnValue = F("Wachholder");
        break;
    }
    case 324612:
    {
        returnValue = F("Wachholder Schneise");
        break;
    }
    case 324613:
    {
        returnValue = F("Wachholderbaum");
        break;
    }
    case 324614:
    {
        returnValue = F("Wachholdergasse");
        break;
    }
    case 324615:
    {
        returnValue = F("Wachholderhauweg");
        break;
    }
    case 324616:
    {
        returnValue = F("Wachholderstr.");
        break;
    }
    case 324617:
    {
        returnValue = F("Wachholderweg");
        break;
    }
    case 324618:
    {
        returnValue = F("Wachholtzstr.");
        break;
    }
    case 324619:
    {
        returnValue = F("Wachhäusleweg");
        break;
    }
    case 324620:
    {
        returnValue = F("Wachhög");
        break;
    }
    case 324621:
    {
        returnValue = F("Wachhöhlenweg");
        break;
    }
    case 324622:
    {
        returnValue = F("Wachhübel");
        break;
    }
    case 324623:
    {
        returnValue = F("Wachhügel");
        break;
    }
    case 324624:
    {
        returnValue = F("Wachhütte");
        break;
    }
    case 324625:
    {
        returnValue = F("Wachinger Str.");
        break;
    }
    case 324626:
    {
        returnValue = F("Wachingerstr.");
        break;
    }
    case 324627:
    {
        returnValue = F("Wachirweg");
        break;
    }
    case 324628:
    {
        returnValue = F("Wachlange");
        break;
    }
    case 324629:
    {
        returnValue = F("Wachlehen");
        break;
    }
    case 324630:
    {
        returnValue = F("Wachlkofen");
        break;
    }
    case 324631:
    {
        returnValue = F("Wachmannskamp");
        break;
    }
    case 324632:
    {
        returnValue = F("Wachmannstr.");
        break;
    }
    case 324633:
    {
        returnValue = F("Wacholder");
        break;
    }
    case 324634:
    {
        returnValue = F("Wacholder Hecken");
        break;
    }
    case 324635:
    {
        returnValue = F("Wacholder Wanderweg");
        break;
    }
    case 324636:
    {
        returnValue = F("Wacholderallee");
        break;
    }
    case 324637:
    {
        returnValue = F("Wacholderberg");
        break;
    }
    case 324638:
    {
        returnValue = F("Wacholderbergstr.");
        break;
    }
    case 324639:
    {
        returnValue = F("Wacholderbogen");
        break;
    }
    case 324640:
    {
        returnValue = F("Wacholderbusch");
        break;
    }
    case 324641:
    {
        returnValue = F("Wacholderbühl");
        break;
    }
    case 324642:
    {
        returnValue = F("Wacholderbüschlein");
        break;
    }
    case 324643:
    {
        returnValue = F("Wacholdergasse");
        break;
    }
    case 324644:
    {
        returnValue = F("Wacholdergestell");
        break;
    }
    case 324645:
    {
        returnValue = F("Wacholdergrund");
        break;
    }
    case 324646:
    {
        returnValue = F("Wacholderhain");
        break;
    }
    case 324647:
    {
        returnValue = F("Wacholderhang");
        break;
    }
    case 324648:
    {
        returnValue = F("Wacholderheide");
        break;
    }
    case 324649:
    {
        returnValue = F("Wacholderhof");
        break;
    }
    case 324650:
    {
        returnValue = F("Wacholderhöhe");
        break;
    }
    case 324651:
    {
        returnValue = F("Wacholderich");
        break;
    }
    case 324652:
    {
        returnValue = F("Wacholderkamp");
        break;
    }
    case 324653:
    {
        returnValue = F("Wacholderpark");
        break;
    }
    case 324654:
    {
        returnValue = F("Wacholderplatz");
        break;
    }
    case 324655:
    {
        returnValue = F("Wacholderring");
        break;
    }
    case 324656:
    {
        returnValue = F("Wacholderschleife");
        break;
    }
    case 324657:
    {
        returnValue = F("Wacholderstaffel");
        break;
    }
    case 324658:
    {
        returnValue = F("Wacholdersteg");
        break;
    }
    case 324659:
    {
        returnValue = F("Wacholdersteig");
        break;
    }
    case 324660:
    {
        returnValue = F("Wacholdersteige");
        break;
    }
    case 324661:
    {
        returnValue = F("Wacholderstieg");
        break;
    }
    case 324662:
    {
        returnValue = F("Wacholderstr.");
        break;
    }
    case 324663:
    {
        returnValue = F("Wacholdersträßle");
        break;
    }
    case 324664:
    {
        returnValue = F("Wacholderstück");
        break;
    }
    case 324665:
    {
        returnValue = F("Wacholdersweg");
        break;
    }
    case 324666:
    {
        returnValue = F("Wacholdertal");
        break;
    }
    case 324667:
    {
        returnValue = F("Wacholdertalstr.");
        break;
    }
    case 324668:
    {
        returnValue = F("Wacholdertwiete");
        break;
    }
    case 324669:
    {
        returnValue = F("Wacholderweg");
        break;
    }
    case 324670:
    {
        returnValue = F("Wacholderwinkel");
        break;
    }
    case 324671:
    {
        returnValue = F("Wachower Landstr.");
        break;
    }
    case 324672:
    {
        returnValue = F("Wachower Weg");
        break;
    }
    case 324673:
    {
        returnValue = F("Wachsackerstr.");
        break;
    }
    case 324674:
    {
        returnValue = F("Wachsbaumstr.");
        break;
    }
    case 324675:
    {
        returnValue = F("Wachsbleiche");
        break;
    }
    case 324676:
    {
        returnValue = F("Wachsbleichenstr.");
        break;
    }
    case 324677:
    {
        returnValue = F("Wachsbleicherweg");
        break;
    }
    case 324678:
    {
        returnValue = F("Wachsbleichstr.");
        break;
    }
    case 324679:
    {
        returnValue = F("Wachsenburgallee");
        break;
    }
    case 324680:
    {
        returnValue = F("Wachsenburgblick");
        break;
    }
    case 324681:
    {
        returnValue = F("Wachsenburger Str.");
        break;
    }
    case 324682:
    {
        returnValue = F("Wachsenburgstr.");
        break;
    }
    case 324683:
    {
        returnValue = F("Wachsenburgweg");
        break;
    }
    case 324684:
    {
        returnValue = F("Wachserzweg");
        break;
    }
    case 324685:
    {
        returnValue = F("Wachslandersträßchen");
        break;
    }
    case 324686:
    {
        returnValue = F("Wachsmuthstr.");
        break;
    }
    case 324687:
    {
        returnValue = F("Wachsmutweg");
        break;
    }
    case 324688:
    {
        returnValue = F("Wachstedter Str.");
        break;
    }
    case 324689:
    {
        returnValue = F("Wachstr.");
        break;
    }
    case 324690:
    {
        returnValue = F("Wachstuchstr.");
        break;
    }
    case 324691:
    {
        returnValue = F("Wachszieherweg");
        break;
    }
    case 324692:
    {
        returnValue = F("Wacht");
        break;
    }
    case 324693:
    {
        returnValue = F("Wachtalweg");
        break;
    }
    case 324694:
    {
        returnValue = F("Wachtberg");
        break;
    }
    case 324695:
    {
        returnValue = F("Wachtberghöhle");
        break;
    }
    case 324696:
    {
        returnValue = F("Wachtbergring");
        break;
    }
    case 324697:
    {
        returnValue = F("Wachtbergstr.");
        break;
    }
    case 324698:
    {
        returnValue = F("Wachtbergweg");
        break;
    }
    case 324699:
    {
        returnValue = F("Wachtbuckstr.");
        break;
    }
    case 324700:
    {
        returnValue = F("Wachtbühl");
        break;
    }
    case 324701:
    {
        returnValue = F("Wachtbühlweg");
        break;
    }
    case 324702:
    {
        returnValue = F("Wachtekamp");
        break;
    }
    case 324703:
    {
        returnValue = F("Wachtelberg");
        break;
    }
    case 324704:
    {
        returnValue = F("Wachtelbergstr.");
        break;
    }
    case 324705:
    {
        returnValue = F("Wachtelfeld");
        break;
    }
    case 324706:
    {
        returnValue = F("Wachtelgang");
        break;
    }
    case 324707:
    {
        returnValue = F("Wachtelgarten");
        break;
    }
    case 324708:
    {
        returnValue = F("Wachtelgasse");
        break;
    }
    case 324709:
    {
        returnValue = F("Wachtelhof");
        break;
    }
    case 324710:
    {
        returnValue = F("Wachteln");
        break;
    }
    case 324711:
    {
        returnValue = F("Wachteloh");
        break;
    }
    case 324712:
    {
        returnValue = F("Wachtelpfad");
        break;
    }
    case 324713:
    {
        returnValue = F("Wachtelpforte");
        break;
    }
    case 324714:
    {
        returnValue = F("Wachtelring");
        break;
    }
    case 324715:
    {
        returnValue = F("Wachtelschlag");
        break;
    }
    case 324716:
    {
        returnValue = F("Wachtelschneise");
        break;
    }
    case 324717:
    {
        returnValue = F("Wachtelsteg");
        break;
    }
    case 324718:
    {
        returnValue = F("Wachtelsteig");
        break;
    }
    case 324719:
    {
        returnValue = F("Wachtelstieg");
        break;
    }
    case 324720:
    {
        returnValue = F("Wachtelstiege");
        break;
    }
    case 324721:
    {
        returnValue = F("Wachtelstr.");
        break;
    }
    case 324722:
    {
        returnValue = F("Wachtelweg");
        break;
    }
    case 324723:
    {
        returnValue = F("Wachtelwinkel");
        break;
    }
    case 324724:
    {
        returnValue = F("Wachteläcker");
        break;
    }
    case 324725:
    {
        returnValue = F("Wachtenburgstr.");
        break;
    }
    case 324726:
    {
        returnValue = F("Wachtendonker Str.");
        break;
    }
    case 324727:
    {
        returnValue = F("Wachtendonkweg");
        break;
    }
    case 324728:
    {
        returnValue = F("Wachtendorfsweg");
        break;
    }
    case 324729:
    {
        returnValue = F("Wachterberg");
        break;
    }
    case 324730:
    {
        returnValue = F("Wachtersflur");
        break;
    }
    case 324731:
    {
        returnValue = F("Wachtersflurstr.");
        break;
    }
    case 324732:
    {
        returnValue = F("Wachterstr.");
        break;
    }
    case 324733:
    {
        returnValue = F("Wachterweg");
        break;
    }
    case 324734:
    {
        returnValue = F("Wachtfelsenstr.");
        break;
    }
    case 324735:
    {
        returnValue = F("Wachtfelsenweg");
        break;
    }
    case 324736:
    {
        returnValue = F("Wachthausgasse");
        break;
    }
    case 324737:
    {
        returnValue = F("Wachthauskoppel");
        break;
    }
    case 324738:
    {
        returnValue = F("Wachthausstr.");
        break;
    }
    case 324739:
    {
        returnValue = F("Wachthügelstr.");
        break;
    }
    case 324740:
    {
        returnValue = F("Wachthütte");
        break;
    }
    case 324741:
    {
        returnValue = F("Wachtkamp");
        break;
    }
    case 324742:
    {
        returnValue = F("Wachtkopfstr.");
        break;
    }
    case 324743:
    {
        returnValue = F("Wachtküppel");
        break;
    }
    case 324744:
    {
        returnValue = F("Wachtküppelstr.");
        break;
    }
    case 324745:
    {
        returnValue = F("Wachtküppelweg");
        break;
    }
    case 324746:
    {
        returnValue = F("Wachtlerstr.");
        break;
    }
    case 324747:
    {
        returnValue = F("Wachtloh");
        break;
    }
    case 324748:
    {
        returnValue = F("Wachtmeisters Kamp");
        break;
    }
    case 324749:
    {
        returnValue = F("Wachtmeisterweg");
        break;
    }
    case 324750:
    {
        returnValue = F("Wachtnitzer Str.");
        break;
    }
    case 324751:
    {
        returnValue = F("Wachtpfad");
        break;
    }
    case 324752:
    {
        returnValue = F("Wachtstr.");
        break;
    }
    case 324753:
    {
        returnValue = F("Wachtumer Dorfstr.");
        break;
    }
    case 324754:
    {
        returnValue = F("Wachtumer Str.");
        break;
    }
    case 324755:
    {
        returnValue = F("Wachturmgasse");
        break;
    }
    case 324756:
    {
        returnValue = F("Wachtweg");
        break;
    }
    case 324757:
    {
        returnValue = F("Wachweg");
        break;
    }
    case 324758:
    {
        returnValue = F("Wachwitzblick");
        break;
    }
    case 324759:
    {
        returnValue = F("Wachwitzblickweg");
        break;
    }
    case 324760:
    {
        returnValue = F("Wachwitzer Bergstr.");
        break;
    }
    case 324761:
    {
        returnValue = F("Wachwitzer Höhenweg");
        break;
    }
    case 324762:
    {
        returnValue = F("Wachwitzer Weinberg");
        break;
    }
    case 324763:
    {
        returnValue = F("Wachwitzgrund");
        break;
    }
    case 324764:
    {
        returnValue = F("Wackebergstr.");
        break;
    }
    case 324765:
    {
        returnValue = F("Wackefeller");
        break;
    }
    case 324766:
    {
        returnValue = F("Wackelbrücke");
        break;
    }
    case 324767:
    {
        returnValue = F("Wackelsbeck");
        break;
    }
    case 324768:
    {
        returnValue = F("Wackelsteg");
        break;
    }
    case 324769:
    {
        returnValue = F("Wackelsteinweg");
        break;
    }
    case 324770:
    {
        returnValue = F("Wackenberg");
        break;
    }
    case 324771:
    {
        returnValue = F("Wackenberger Hof");
        break;
    }
    case 324772:
    {
        returnValue = F("Wackenbergstr.");
        break;
    }
    case 324773:
    {
        returnValue = F("Wackenbergweg");
        break;
    }
    case 324774:
    {
        returnValue = F("Wackenbornerstr.");
        break;
    }
    case 324775:
    {
        returnValue = F("Wackenbrucher Str.");
        break;
    }
    case 324776:
    {
        returnValue = F("Wackengasse");
        break;
    }
    case 324777:
    {
        returnValue = F("Wackenhübel");
        break;
    }
    case 324778:
    {
        returnValue = F("Wackenmühle");
        break;
    }
    case 324779:
    {
        returnValue = F("Wackenmühlstr.");
        break;
    }
    case 324780:
    {
        returnValue = F("Wackenpfad");
        break;
    }
    case 324781:
    {
        returnValue = F("Wackenroder Weg");
        break;
    }
    case 324782:
    {
        returnValue = F("Wackenroderstr.");
        break;
    }
    case 324783:
    {
        returnValue = F("Wackenstedter Str.");
        break;
    }
    case 324784:
    {
        returnValue = F("Wackenstr.");
        break;
    }
    case 324785:
    {
        returnValue = F("Wackenweiler Str.");
        break;
    }
    case 324786:
    {
        returnValue = F("Wacker Neuson Str.");
        break;
    }
    case 324787:
    {
        returnValue = F("Wackerade");
        break;
    }
    case 324788:
    {
        returnValue = F("Wackerballig");
        break;
    }
    case 324789:
    {
        returnValue = F("Wackerbarthstr.");
        break;
    }
    case 324790:
    {
        returnValue = F("Wackerbauerweg");
        break;
    }
    case 324791:
    {
        returnValue = F("Wackerbeckstr.");
        break;
    }
    case 324792:
    {
        returnValue = F("Wackerberge");
        break;
    }
    case 324793:
    {
        returnValue = F("Wackerdahler Blick");
        break;
    }
    case 324794:
    {
        returnValue = F("Wackerdonkstr.");
        break;
    }
    case 324795:
    {
        returnValue = F("Wackerfelder Weg");
        break;
    }
    case 324796:
    {
        returnValue = F("Wackergasse");
        break;
    }
    case 324797:
    {
        returnValue = F("Wackergrund");
        break;
    }
    case 324798:
    {
        returnValue = F("Wackerlinger Weg");
        break;
    }
    case 324799:
    {
        returnValue = F("Wackernheimer Str.");
        break;
    }
    case 324800:
    {
        returnValue = F("Wackersberger Str.");
        break;
    }
    case 324801:
    {
        returnValue = F("Wackersbrunnenstr.");
        break;
    }
    case 324802:
    {
        returnValue = F("Wackersdorfer Str.");
        break;
    }
    case 324803:
    {
        returnValue = F("Wackershofen");
        break;
    }
    case 324804:
    {
        returnValue = F("Wackerslebener Str.");
        break;
    }
    case 324805:
    {
        returnValue = F("Wackersteinsteige");
        break;
    }
    case 324806:
    {
        returnValue = F("Wackersteinstr.");
        break;
    }
    case 324807:
    {
        returnValue = F("Wackersteinweg");
        break;
    }
    case 324808:
    {
        returnValue = F("Wackerstr.");
        break;
    }
    case 324809:
    {
        returnValue = F("Wackertal");
        break;
    }
    case 324810:
    {
        returnValue = F("Wackerweg");
        break;
    }
    case 324811:
    {
        returnValue = F("Wackerwinkel");
        break;
    }
    case 324812:
    {
        returnValue = F("Wackingerstr.");
        break;
    }
    case 324813:
    {
        returnValue = F("Wacksstr.");
        break;
    }
    case 324814:
    {
        returnValue = F("Wackumer Esch");
        break;
    }
    case 324815:
    {
        returnValue = F("Wadbergstr.");
        break;
    }
    case 324816:
    {
        returnValue = F("Waddenbergstr.");
        break;
    }
    case 324817:
    {
        returnValue = F("Waddenhauser Str.");
        break;
    }
    case 324818:
    {
        returnValue = F("Waddenser Plate");
        break;
    }
    case 324819:
    {
        returnValue = F("Waddenser Weg");
        break;
    }
    case 324820:
    {
        returnValue = F("Waddewarder Mühle");
        break;
    }
    case 324821:
    {
        returnValue = F("Wadebeisserstross");
        break;
    }
    case 324822:
    {
        returnValue = F("Wadelheimer Chaussee");
        break;
    }
    case 324823:
    {
        returnValue = F("Wadelsdorfer Dorfstr.");
        break;
    }
    case 324824:
    {
        returnValue = F("Wadelsdorfer Weg");
        break;
    }
    case 324825:
    {
        returnValue = F("Wadelshaldenweg");
        break;
    }
    case 324826:
    {
        returnValue = F("Wadelweg");
        break;
    }
    case 324827:
    {
        returnValue = F("Wadenbrunner Str.");
        break;
    }
    case 324828:
    {
        returnValue = F("Wadendorf");
        break;
    }
    case 324829:
    {
        returnValue = F("Wadenhardstr.");
        break;
    }
    case 324830:
    {
        returnValue = F("Wadenheimer Platz");
        break;
    }
    case 324831:
    {
        returnValue = F("Wadenheimer Str.");
        break;
    }
    case 324832:
    {
        returnValue = F("Wadenheimweg");
        break;
    }
    case 324833:
    {
        returnValue = F("Wadenpfad");
        break;
    }
    case 324834:
    {
        returnValue = F("Waderner Str.");
        break;
    }
    case 324835:
    {
        returnValue = F("Wadersloher Str.");
        break;
    }
    case 324836:
    {
        returnValue = F("Wadewitz");
        break;
    }
    case 324837:
    {
        returnValue = F("Wadewitzer Str.");
        break;
    }
    case 324838:
    {
        returnValue = F("Wadgasse");
        break;
    }
    case 324839:
    {
        returnValue = F("Wadgasser Str.");
        break;
    }
    case 324840:
    {
        returnValue = F("Wadlerstr.");
        break;
    }
    case 324841:
    {
        returnValue = F("Wadlhausen");
        break;
    }
    case 324842:
    {
        returnValue = F("Wadlhauser Str.");
        break;
    }
    case 324843:
    {
        returnValue = F("Wadpfad");
        break;
    }
    case 324844:
    {
        returnValue = F("Wadriller Str.");
        break;
    }
    case 324845:
    {
        returnValue = F("Wadtberg");
        break;
    }
    case 324846:
    {
        returnValue = F("Wadtstr.");
        break;
    }
    case 324847:
    {
        returnValue = F("Wae Str.");
        break;
    }
    case 324848:
    {
        returnValue = F("Waechterstr.");
        break;
    }
    case 324849:
    {
        returnValue = F("Waerderweg");
        break;
    }
    case 324850:
    {
        returnValue = F("Waetgenstr.");
        break;
    }
    case 324851:
    {
        returnValue = F("Waffelgasse");
        break;
    }
    case 324852:
    {
        returnValue = F("Waffenhammer");
        break;
    }
    case 324853:
    {
        returnValue = F("Waffenhammerweg");
        break;
    }
    case 324854:
    {
        returnValue = F("Waffenhof");
        break;
    }
    case 324855:
    {
        returnValue = F("Waffenplatz");
        break;
    }
    case 324856:
    {
        returnValue = F("Waffenschleife");
        break;
    }
    case 324857:
    {
        returnValue = F("Waffenschleifenweg");
        break;
    }
    case 324858:
    {
        returnValue = F("Waffenschmidtstr.");
        break;
    }
    case 324859:
    {
        returnValue = F("Waffenschmiede");
        break;
    }
    case 324860:
    {
        returnValue = F("Waffenschmiedgasse");
        break;
    }
    case 324861:
    {
        returnValue = F("Waffenschmiedstr.");
        break;
    }
    case 324862:
    {
        returnValue = F("Waffenschmiedweg");
        break;
    }
    case 324863:
    {
        returnValue = F("Waffensener Weg");
        break;
    }
    case 324864:
    {
        returnValue = F("Waffenstr.");
        break;
    }
    case 324865:
    {
        returnValue = F("Waffnergasse");
        break;
    }
    case 324866:
    {
        returnValue = F("Wafiosstr.");
        break;
    }
    case 324867:
    {
        returnValue = F("Wagbachstr.");
        break;
    }
    case 324868:
    {
        returnValue = F("Wagdstr.");
        break;
    }
    case 324869:
    {
        returnValue = F("Wagegg");
        break;
    }
    case 324870:
    {
        returnValue = F("Wagegger Str.");
        break;
    }
    case 324871:
    {
        returnValue = F("Wagelwitzer Str.");
        break;
    }
    case 324872:
    {
        returnValue = F("Wagenak");
        break;
    }
    case 324873:
    {
        returnValue = F("Wagenbacher Str.");
        break;
    }
    case 324874:
    {
        returnValue = F("Wagenbacher Weg");
        break;
    }
    case 324875:
    {
        returnValue = F("Wagenbauerstr.");
        break;
    }
    case 324876:
    {
        returnValue = F("Wagenberger Str.");
        break;
    }
    case 324877:
    {
        returnValue = F("Wagenbergstr.");
        break;
    }
    case 324878:
    {
        returnValue = F("Wagenbreths Kamp");
        break;
    }
    case 324879:
    {
        returnValue = F("Wagenbrettweg");
        break;
    }
    case 324880:
    {
        returnValue = F("Wagenbruch");
        break;
    }
    case 324881:
    {
        returnValue = F("Wagenburgplatz");
        break;
    }
    case 324882:
    {
        returnValue = F("Wagenburgstr.");
        break;
    }
    case 324883:
    {
        returnValue = F("Wageneggerstr.");
        break;
    }
    case 324884:
    {
        returnValue = F("Wagenerstr.");
        break;
    }
    case 324885:
    {
        returnValue = F("Wagenfelder Str.");
        break;
    }
    case 324886:
    {
        returnValue = F("Wagenfeldstr.");
        break;
    }
    case 324887:
    {
        returnValue = F("Wagenfeldweg");
        break;
    }
    case 324888:
    {
        returnValue = F("Wagenfuhr");
        break;
    }
    case 324889:
    {
        returnValue = F("Wagenführstr.");
        break;
    }
    case 324890:
    {
        returnValue = F("Wagengasse");
        break;
    }
    case 324891:
    {
        returnValue = F("Wagengässele");
        break;
    }
    case 324892:
    {
        returnValue = F("Wagenhallenstr.");
        break;
    }
    case 324893:
    {
        returnValue = F("Wagenhallenweg");
        break;
    }
    case 324894:
    {
        returnValue = F("Wagenhalsstr.");
        break;
    }
    case 324895:
    {
        returnValue = F("Wagenhausener Weg");
        break;
    }
    case 324896:
    {
        returnValue = F("Wagenhofen");
        break;
    }
    case 324897:
    {
        returnValue = F("Wagenhofener Str.");
        break;
    }
    case 324898:
    {
        returnValue = F("Wagenhofer Str.");
        break;
    }
    case 324899:
    {
        returnValue = F("Wagenhofstr.");
        break;
    }
    case 324900:
    {
        returnValue = F("Wagenhorst");
        break;
    }
    case 324901:
    {
        returnValue = F("Wagenhäuser Weg");
        break;
    }
    case 324902:
    {
        returnValue = F("Wagenhüttweg");
        break;
    }
    case 324903:
    {
        returnValue = F("Wageninger Str.");
        break;
    }
    case 324904:
    {
        returnValue = F("Wagenmacherstr.");
        break;
    }
    case 324905:
    {
        returnValue = F("Wagenmannsteige");
        break;
    }
    case 324906:
    {
        returnValue = F("Wagenscheinweg");
        break;
    }
    case 324907:
    {
        returnValue = F("Wagenschollweg");
        break;
    }
    case 324908:
    {
        returnValue = F("Wagenschwender Str.");
        break;
    }
    case 324909:
    {
        returnValue = F("Wagenschwender Weg");
        break;
    }
    case 324910:
    {
        returnValue = F("Wagenseeweg");
        break;
    }
    case 324911:
    {
        returnValue = F("Wagenseilstr.");
        break;
    }
    case 324912:
    {
        returnValue = F("Wagenstadter Weg");
        break;
    }
    case 324913:
    {
        returnValue = F("Wagenstallweg");
        break;
    }
    case 324914:
    {
        returnValue = F("Wagenstedter Brücke");
        break;
    }
    case 324915:
    {
        returnValue = F("Wagenstedter Str.");
        break;
    }
    case 324916:
    {
        returnValue = F("Wagensteigstr.");
        break;
    }
    case 324917:
    {
        returnValue = F("Wagenstieg");
        break;
    }
    case 324918:
    {
        returnValue = F("Wagenstr.");
        break;
    }
    case 324919:
    {
        returnValue = F("Wagenstätter Str.");
        break;
    }
    case 324920:
    {
        returnValue = F("Wagentalstr.");
        break;
    }
    case 324921:
    {
        returnValue = F("Wagentronsweg");
        break;
    }
    case 324922:
    {
        returnValue = F("Wagenweg");
        break;
    }
    case 324923:
    {
        returnValue = F("Wagenwerkweg");
        break;
    }
    case 324924:
    {
        returnValue = F("Wagenzeller Str.");
        break;
    }
    case 324925:
    {
        returnValue = F("Wagenäcker");
        break;
    }
    case 324926:
    {
        returnValue = F("Wagersrott");
        break;
    }
    case 324927:
    {
        returnValue = F("Wagersrottstr.");
        break;
    }
    case 324928:
    {
        returnValue = F("Wagerstr.");
        break;
    }
    case 324929:
    {
        returnValue = F("Wagga-Wagga-Str.");
        break;
    }
    case 324930:
    {
        returnValue = F("Waggershauser Str.");
        break;
    }
    case 324931:
    {
        returnValue = F("Waggumer Hof");
        break;
    }
    case 324932:
    {
        returnValue = F("Waggumer Str.");
        break;
    }
    case 324933:
    {
        returnValue = F("Waggumer Weg");
        break;
    }
    case 324934:
    {
        returnValue = F("Waghalsstr.");
        break;
    }
    case 324935:
    {
        returnValue = F("Waghardtsträßle");
        break;
    }
    case 324936:
    {
        returnValue = F("Waghorster Str.");
        break;
    }
    case 324937:
    {
        returnValue = F("Waghorster Weg");
        break;
    }
    case 324938:
    {
        returnValue = F("Waghäuseler Str.");
        break;
    }
    case 324939:
    {
        returnValue = F("Waghäuseler Weg");
        break;
    }
    case 324940:
    {
        returnValue = F("Waghäusler Str.");
        break;
    }
    case 324941:
    {
        returnValue = F("Waghäusler Weg");
        break;
    }
    case 324942:
    {
        returnValue = F("Waginger Str.");
        break;
    }
    case 324943:
    {
        returnValue = F("Wagleitenstr.");
        break;
    }
    case 324944:
    {
        returnValue = F("Wagmattenweg");
        break;
    }
    case 324945:
    {
        returnValue = F("Wagmüllerstr.");
        break;
    }
    case 324946:
    {
        returnValue = F("Wagner Platz");
        break;
    }
    case 324947:
    {
        returnValue = F("Wagner-Beckes-Gässel");
        break;
    }
    case 324948:
    {
        returnValue = F("Wagner-Pättken");
        break;
    }
    case 324949:
    {
        returnValue = F("Wagner-Sutter-Str.");
        break;
    }
    case 324950:
    {
        returnValue = F("Wagnerallee");
        break;
    }
    case 324951:
    {
        returnValue = F("Wagneranger");
        break;
    }
    case 324952:
    {
        returnValue = F("Wagnerberg");
        break;
    }
    case 324953:
    {
        returnValue = F("Wagnerbergstr.");
        break;
    }
    case 324954:
    {
        returnValue = F("Wagnerbreite");
        break;
    }
    case 324955:
    {
        returnValue = F("Wagnerbruch");
        break;
    }
    case 324956:
    {
        returnValue = F("Wagnereckle Planie");
        break;
    }
    case 324957:
    {
        returnValue = F("Wagnerfeld");
        break;
    }
    case 324958:
    {
        returnValue = F("Wagnerfeldweg");
        break;
    }
    case 324959:
    {
        returnValue = F("Wagnergasse");
        break;
    }
    case 324960:
    {
        returnValue = F("Wagnergaßl");
        break;
    }
    case 324961:
    {
        returnValue = F("Wagnergässchen");
        break;
    }
    case 324962:
    {
        returnValue = F("Wagnergässle");
        break;
    }
    case 324963:
    {
        returnValue = F("Wagnergäßchen");
        break;
    }
    case 324964:
    {
        returnValue = F("Wagnergäßle");
        break;
    }
    case 324965:
    {
        returnValue = F("Wagnerhof");
        break;
    }
    case 324966:
    {
        returnValue = F("Wagnerhofweg");
        break;
    }
    case 324967:
    {
        returnValue = F("Wagnerhöhe");
        break;
    }
    case 324968:
    {
        returnValue = F("Wagneritz");
        break;
    }
    case 324969:
    {
        returnValue = F("Wagnerleite");
        break;
    }
    case 324970:
    {
        returnValue = F("Wagnerlochweg");
        break;
    }
    case 324971:
    {
        returnValue = F("Wagnerner Str.");
        break;
    }
    case 324972:
    {
        returnValue = F("Wagnerplatz");
        break;
    }
    case 324973:
    {
        returnValue = F("Wagnerring");
        break;
    }
    case 324974:
    {
        returnValue = F("Wagnersberg");
        break;
    }
    case 324975:
    {
        returnValue = F("Wagnersbühl");
        break;
    }
    case 324976:
    {
        returnValue = F("Wagnersgasse");
        break;
    }
    case 324977:
    {
        returnValue = F("Wagnersgrubenweg");
        break;
    }
    case 324978:
    {
        returnValue = F("Wagnersgässle");
        break;
    }
    case 324979:
    {
        returnValue = F("Wagnershohle");
        break;
    }
    case 324980:
    {
        returnValue = F("Wagnersiedlung");
        break;
    }
    case 324981:
    {
        returnValue = F("Wagnersleite");
        break;
    }
    case 324982:
    {
        returnValue = F("Wagnerspeunt");
        break;
    }
    case 324983:
    {
        returnValue = F("Wagnerstadelweg");
        break;
    }
    case 324984:
    {
        returnValue = F("Wagnerstal");
        break;
    }
    case 324985:
    {
        returnValue = F("Wagnerstalstr.");
        break;
    }
    case 324986:
    {
        returnValue = F("Wagnersteg");
        break;
    }
    case 324987:
    {
        returnValue = F("Wagnerstr.");
        break;
    }
    case 324988:
    {
        returnValue = F("Wagnersweg");
        break;
    }
    case 324989:
    {
        returnValue = F("Wagnersäcker");
        break;
    }
    case 324990:
    {
        returnValue = F("Wagnerweg");
        break;
    }
    case 324991:
    {
        returnValue = F("Wagnerwiese");
        break;
    }
    case 324992:
    {
        returnValue = F("Wagnerwirtsgasse");
        break;
    }
    case 324993:
    {
        returnValue = F("Wagrain-Ausfahrt");
        break;
    }
    case 324994:
    {
        returnValue = F("Wagrainstr.");
        break;
    }
    case 324995:
    {
        returnValue = F("Wagreiner Str.");
        break;
    }
    case 324996:
    {
        returnValue = F("Wagriaweg");
        break;
    }
    case 324997:
    {
        returnValue = F("Wagschale");
        break;
    }
    case 324998:
    {
        returnValue = F("Wagshurster Str.");
        break;
    }
    case 324999:
    {
        returnValue = F("Wagstadter Str.");
        break;
    }
    case 325000:
    {
        returnValue = F("Wagstr.");
        break;
    }
    case 325001:
    {
        returnValue = F("Wagun");
        break;
    }
    case 325002:
    {
        returnValue = F("Wagäcker");
        break;
    }
    case 325003:
    {
        returnValue = F("Wahbach");
        break;
    }
    case 325004:
    {
        returnValue = F("Wahlbacher Hof");
        break;
    }
    case 325005:
    {
        returnValue = F("Wahlbacher Str.");
        break;
    }
    case 325006:
    {
        returnValue = F("Wahlbachsmühle");
        break;
    }
    case 325007:
    {
        returnValue = F("Wahlbachstr.");
        break;
    }
    case 325008:
    {
        returnValue = F("Wahlbaum");
        break;
    }
    case 325009:
    {
        returnValue = F("Wahlberg");
        break;
    }
    case 325010:
    {
        returnValue = F("Wahlbergstr.");
        break;
    }
    case 325011:
    {
        returnValue = F("Wahlburgstr.");
        break;
    }
    case 325012:
    {
        returnValue = F("Wahld");
        break;
    }
    case 325013:
    {
        returnValue = F("Wahlde");
        break;
    }
    case 325014:
    {
        returnValue = F("Wahlder Weg");
        break;
    }
    case 325015:
    {
        returnValue = F("Wahlebachweg");
        break;
    }
    case 325016:
    {
        returnValue = F("Wahlendower Str.");
        break;
    }
    case 325017:
    {
        returnValue = F("Wahlener Str.");
        break;
    }
    case 325018:
    {
        returnValue = F("Wahlengasse");
        break;
    }
    case 325019:
    {
        returnValue = F("Wahlenheim");
        break;
    }
    case 325020:
    {
        returnValue = F("Wahlenmühle");
        break;
    }
    case 325021:
    {
        returnValue = F("Wahlenpfad");
        break;
    }
    case 325022:
    {
        returnValue = F("Wahlenstr.");
        break;
    }
    case 325023:
    {
        returnValue = F("Wahlentalstr.");
        break;
    }
    case 325024:
    {
        returnValue = F("Wahlenweg");
        break;
    }
    case 325025:
    {
        returnValue = F("Wahler Weg");
        break;
    }
    case 325026:
    {
        returnValue = F("Wahlerscheid");
        break;
    }
    case 325027:
    {
        returnValue = F("Wahlersee");
        break;
    }
    case 325028:
    {
        returnValue = F("Wahlershäuser Str.");
        break;
    }
    case 325029:
    {
        returnValue = F("Wahlerstr.");
        break;
    }
    case 325030:
    {
        returnValue = F("Wahlert");
        break;
    }
    case 325031:
    {
        returnValue = F("Wahlerter Str.");
        break;
    }
    case 325032:
    {
        returnValue = F("Wahlerter Weg");
        break;
    }
    case 325033:
    {
        returnValue = F("Wahlertstr.");
        break;
    }
    case 325034:
    {
        returnValue = F("Wahles Weg");
        break;
    }
    case 325035:
    {
        returnValue = F("Wahlestr.");
        break;
    }
    case 325036:
    {
        returnValue = F("Wahlfelder Heide");
        break;
    }
    case 325037:
    {
        returnValue = F("Wahlfelder Hof");
        break;
    }
    case 325038:
    {
        returnValue = F("Wahlfelder Mühle");
        break;
    }
    case 325039:
    {
        returnValue = F("Wahlfelder Str.");
        break;
    }
    case 325040:
    {
        returnValue = F("Wahlfeldstr.");
        break;
    }
    case 325041:
    {
        returnValue = F("Wahlgasse");
        break;
    }
    case 325042:
    {
        returnValue = F("Wahlgemeinde");
        break;
    }
    case 325043:
    {
        returnValue = F("Wahlhau");
        break;
    }
    case 325044:
    {
        returnValue = F("Wahlhauser Str.");
        break;
    }
    case 325045:
    {
        returnValue = F("Wahlheimer Hof");
        break;
    }
    case 325046:
    {
        returnValue = F("Wahlheimer Str.");
        break;
    }
    case 325047:
    {
        returnValue = F("Wahlheimer Weg");
        break;
    }
    case 325048:
    {
        returnValue = F("Wahlhof");
        break;
    }
    case 325049:
    {
        returnValue = F("Wahlholzer Str.");
        break;
    }
    case 325050:
    {
        returnValue = F("Wahlhöhlstr.");
        break;
    }
    case 325051:
    {
        returnValue = F("Wahlitzer Weg");
        break;
    }
    case 325052:
    {
        returnValue = F("Wahlleite");
        break;
    }
    case 325053:
    {
        returnValue = F("Wahlmanns Tor");
        break;
    }
    case 325054:
    {
        returnValue = F("Wahlsburg");
        break;
    }
    case 325055:
    {
        returnValue = F("Wahlscheider Str.");
        break;
    }
    case 325056:
    {
        returnValue = F("Wahlscheider Weg");
        break;
    }
    case 325057:
    {
        returnValue = F("Wahlschieder Grube");
        break;
    }
    case 325058:
    {
        returnValue = F("Wahlschieder Str.");
        break;
    }
    case 325059:
    {
        returnValue = F("Wahlsdorf");
        break;
    }
    case 325060:
    {
        returnValue = F("Wahlsdorfer Dorfstr.");
        break;
    }
    case 325061:
    {
        returnValue = F("Wahlsdorfer Weg");
        break;
    }
    case 325062:
    {
        returnValue = F("Wahlstedter Str.");
        break;
    }
    case 325063:
    {
        returnValue = F("Wahlstedter Weg");
        break;
    }
    case 325064:
    {
        returnValue = F("Wahlstorfer Weg");
        break;
    }
    case 325065:
    {
        returnValue = F("Wahlstr.");
        break;
    }
    case 325066:
    {
        returnValue = F("Wahlsweg");
        break;
    }
    case 325067:
    {
        returnValue = F("Wahlweg");
        break;
    }
    case 325068:
    {
        returnValue = F("Wahlwiese");
        break;
    }
    case 325069:
    {
        returnValue = F("Wahlwiesenstr.");
        break;
    }
    case 325070:
    {
        returnValue = F("Wahlwiesenweg");
        break;
    }
    case 325071:
    {
        returnValue = F("Wahlwieser Str.");
        break;
    }
    case 325072:
    {
        returnValue = F("Wahlwinkler Str.");
        break;
    }
    case 325073:
    {
        returnValue = F("Wahmbecker Pfad");
        break;
    }
    case 325074:
    {
        returnValue = F("Wahmbecker Str.");
        break;
    }
    case 325075:
    {
        returnValue = F("Wahmbecker Weg");
        break;
    }
    case 325076:
    {
        returnValue = F("Wahmstr.");
        break;
    }
    case 325077:
    {
        returnValue = F("Wahnbachtal");
        break;
    }
    case 325078:
    {
        returnValue = F("Wahnbachtalstr.");
        break;
    }
    case 325079:
    {
        returnValue = F("Wahnbäkenweg");
        break;
    }
    case 325080:
    {
        returnValue = F("Wahne Uhle");
        break;
    }
    case 325081:
    {
        returnValue = F("Wahnenkamp");
        break;
    }
    case 325082:
    {
        returnValue = F("Wahnenmühle");
        break;
    }
    case 325083:
    {
        returnValue = F("Wahner Delle");
        break;
    }
    case 325084:
    {
        returnValue = F("Wahner Hof");
        break;
    }
    case 325085:
    {
        returnValue = F("Wahner Siedlung");
        break;
    }
    case 325086:
    {
        returnValue = F("Wahner Str.");
        break;
    }
    case 325087:
    {
        returnValue = F("Wahner Weg");
        break;
    }
    case 325088:
    {
        returnValue = F("Wahnergasse");
        break;
    }
    case 325089:
    {
        returnValue = F("Wahnfriedallee");
        break;
    }
    case 325090:
    {
        returnValue = F("Wahnfriedstr.");
        break;
    }
    case 325091:
    {
        returnValue = F("Wahnheider Str.");
        break;
    }
    case 325092:
    {
        returnValue = F("Wahnhäuser Str.");
        break;
    }
    case 325093:
    {
        returnValue = F("Wahnitz");
        break;
    }
    case 325094:
    {
        returnValue = F("Wahnscheid");
        break;
    }
    case 325095:
    {
        returnValue = F("Wahnscheider Str.");
        break;
    }
    case 325096:
    {
        returnValue = F("Wahnsdorfer Str.");
        break;
    }
    case 325097:
    {
        returnValue = F("Wahnsdorfer Weg");
        break;
    }
    case 325098:
    {
        returnValue = F("Wahnser Gartenstr.");
        break;
    }
    case 325099:
    {
        returnValue = F("Wahnser Hauptstr.");
        break;
    }
    case 325100:
    {
        returnValue = F("Wahnweger Str.");
        break;
    }
    case 325101:
    {
        returnValue = F("Wahrbachstr.");
        break;
    }
    case 325102:
    {
        returnValue = F("Wahrbergstr.");
        break;
    }
    case 325103:
    {
        returnValue = F("Wahrbrink");
        break;
    }
    case 325104:
    {
        returnValue = F("Wahrburger Park");
        break;
    }
    case 325105:
    {
        returnValue = F("Wahrburger Str.");
        break;
    }
    case 325106:
    {
        returnValue = F("Wahrburger Weg");
        break;
    }
    case 325107:
    {
        returnValue = F("Wahrbuschstr.");
        break;
    }
    case 325108:
    {
        returnValue = F("Wahrdamm");
        break;
    }
    case 325109:
    {
        returnValue = F("Wahrder Weg");
        break;
    }
    case 325110:
    {
        returnValue = F("Wahre-Dorffstr.");
        break;
    }
    case 325111:
    {
        returnValue = F("Wahrenberger Str.");
        break;
    }
    case 325112:
    {
        returnValue = F("Wahrenbrücker Str.");
        break;
    }
    case 325113:
    {
        returnValue = F("Wahrendahler Str.");
        break;
    }
    case 325114:
    {
        returnValue = F("Wahrendorfer Str.");
        break;
    }
    case 325115:
    {
        returnValue = F("Wahrener Str.");
        break;
    }
    case 325116:
    {
        returnValue = F("Wahrenholzer Str.");
        break;
    }
    case 325117:
    {
        returnValue = F("Wahrensberg");
        break;
    }
    case 325118:
    {
        returnValue = F("Wahrhausenweg");
        break;
    }
    case 325119:
    {
        returnValue = F("Wahrholz");
        break;
    }
    case 325120:
    {
        returnValue = F("Wahringstr.");
        break;
    }
    case 325121:
    {
        returnValue = F("Wahrkamp");
        break;
    }
    case 325122:
    {
        returnValue = F("Wahrstedter Str.");
        break;
    }
    case 325123:
    {
        returnValue = F("Wahrtopstr.");
        break;
    }
    case 325124:
    {
        returnValue = F("Wahrweg");
        break;
    }
    case 325125:
    {
        returnValue = F("Waibachstr.");
        break;
    }
    case 325126:
    {
        returnValue = F("Waibelschwandweg");
        break;
    }
    case 325127:
    {
        returnValue = F("Waibelstr.");
        break;
    }
    case 325128:
    {
        returnValue = F("Waibelweg");
        break;
    }
    case 325129:
    {
        returnValue = F("Waibeläcker");
        break;
    }
    case 325130:
    {
        returnValue = F("Waiblinger Berg");
        break;
    }
    case 325131:
    {
        returnValue = F("Waiblinger Str.");
        break;
    }
    case 325132:
    {
        returnValue = F("Waiblinger Weg");
        break;
    }
    case 325133:
    {
        returnValue = F("Waiblingermoos");
        break;
    }
    case 325134:
    {
        returnValue = F("Waiblingerstr.");
        break;
    }
    case 325135:
    {
        returnValue = F("Waibstadter Str.");
        break;
    }
    case 325136:
    {
        returnValue = F("Waibstadter Weg");
        break;
    }
    case 325137:
    {
        returnValue = F("Waich");
        break;
    }
    case 325138:
    {
        returnValue = F("Waid-Hessel-Str.");
        break;
    }
    case 325139:
    {
        returnValue = F("Waidach");
        break;
    }
    case 325140:
    {
        returnValue = F("Waidachanger");
        break;
    }
    case 325141:
    {
        returnValue = F("Waidacher Dorfstr.");
        break;
    }
    case 325142:
    {
        returnValue = F("Waidachshof");
        break;
    }
    case 325143:
    {
        returnValue = F("Waidachshofer Str.");
        break;
    }
    case 325144:
    {
        returnValue = F("Waidachwiesenweg");
        break;
    }
    case 325145:
    {
        returnValue = F("Waidallee");
        break;
    }
    case 325146:
    {
        returnValue = F("Waidanger");
        break;
    }
    case 325147:
    {
        returnValue = F("Waidastr.");
        break;
    }
    case 325148:
    {
        returnValue = F("Waidawinkel");
        break;
    }
    case 325149:
    {
        returnValue = F("Waidbachstr.");
        break;
    }
    case 325150:
    {
        returnValue = F("Waidberg");
        break;
    }
    case 325151:
    {
        returnValue = F("Waidbrucker Str.");
        break;
    }
    case 325152:
    {
        returnValue = F("Waidecker Str.");
        break;
    }
    case 325153:
    {
        returnValue = F("Waidelstr.");
        break;
    }
    case 325154:
    {
        returnValue = F("Waidesgrund");
        break;
    }
    case 325155:
    {
        returnValue = F("Waidesweg");
        break;
    }
    case 325156:
    {
        returnValue = F("Waidfeld");
        break;
    }
    case 325157:
    {
        returnValue = F("Waidgarten");
        break;
    }
    case 325158:
    {
        returnValue = F("Waidgartenstr.");
        break;
    }
    case 325159:
    {
        returnValue = F("Waidgasse");
        break;
    }
    case 325160:
    {
        returnValue = F("Waidhauser Str.");
        break;
    }
    case 325161:
    {
        returnValue = F("Waidhausweg");
        break;
    }
    case 325162:
    {
        returnValue = F("Waidhof");
        break;
    }
    case 325163:
    {
        returnValue = F("Waidhofener Str.");
        break;
    }
    case 325164:
    {
        returnValue = F("Waidhofweg");
        break;
    }
    case 325165:
    {
        returnValue = F("Waidhöfe");
        break;
    }
    case 325166:
    {
        returnValue = F("Waidlachstr.");
        break;
    }
    case 325167:
    {
        returnValue = F("Waidlstr.");
        break;
    }
    case 325168:
    {
        returnValue = F("Waidmannpromenade");
        break;
    }
    case 325169:
    {
        returnValue = F("Waidmannsau");
        break;
    }
    case 325170:
    {
        returnValue = F("Waidmannsdank");
        break;
    }
    case 325171:
    {
        returnValue = F("Waidmannsgrund");
        break;
    }
    case 325172:
    {
        returnValue = F("Waidmannsheil");
        break;
    }
    case 325173:
    {
        returnValue = F("Waidmannslust");
        break;
    }
    case 325174:
    {
        returnValue = F("Waidmannsluster Str.");
        break;
    }
    case 325175:
    {
        returnValue = F("Waidmannsring");
        break;
    }
    case 325176:
    {
        returnValue = F("Waidmannsruh");
        break;
    }
    case 325177:
    {
        returnValue = F("Waidmannsruhberg");
        break;
    }
    case 325178:
    {
        returnValue = F("Waidmannsstr.");
        break;
    }
    case 325179:
    {
        returnValue = F("Waidmannsteige");
        break;
    }
    case 325180:
    {
        returnValue = F("Waidmannstr.");
        break;
    }
    case 325181:
    {
        returnValue = F("Waidmannsweg");
        break;
    }
    case 325182:
    {
        returnValue = F("Waidmannweg");
        break;
    }
    case 325183:
    {
        returnValue = F("Waidmarkt");
        break;
    }
    case 325184:
    {
        returnValue = F("Waidmarktstr.");
        break;
    }
    case 325185:
    {
        returnValue = F("Waidmatten");
        break;
    }
    case 325186:
    {
        returnValue = F("Waidmattenstr.");
        break;
    }
    case 325187:
    {
        returnValue = F("Waidmühle");
        break;
    }
    case 325188:
    {
        returnValue = F("Waidmühlengasse");
        break;
    }
    case 325189:
    {
        returnValue = F("Waidmühlenstr.");
        break;
    }
    case 325190:
    {
        returnValue = F("Waidmühlenweg");
        break;
    }
    case 325191:
    {
        returnValue = F("Waidpfad");
        break;
    }
    case 325192:
    {
        returnValue = F("Waidplatz");
        break;
    }
    case 325193:
    {
        returnValue = F("Waidplatzstr.");
        break;
    }
    case 325194:
    {
        returnValue = F("Waidplatzweg");
        break;
    }
    case 325195:
    {
        returnValue = F("Waidrasen");
        break;
    }
    case 325196:
    {
        returnValue = F("Waidschlagweg");
        break;
    }
    case 325197:
    {
        returnValue = F("Waidstr.");
        break;
    }
    case 325198:
    {
        returnValue = F("Waidweg");
        break;
    }
    case 325199:
    {
        returnValue = F("Waigandshainer Str.");
        break;
    }
    case 325200:
    {
        returnValue = F("Waikersreuth");
        break;
    }
    case 325201:
    {
        returnValue = F("Waikersreuther Str.");
        break;
    }
    case 325202:
    {
        returnValue = F("Waimersbergstr.");
        break;
    }
    case 325203:
    {
        returnValue = F("Waimerstr.");
        break;
    }
    case 325204:
    {
        returnValue = F("Wainer Str.");
        break;
    }
    case 325205:
    {
        returnValue = F("Wainsdorfer Gartenstr.");
        break;
    }
    case 325206:
    {
        returnValue = F("Wainsdorfer Hauptstr.");
        break;
    }
    case 325207:
    {
        returnValue = F("Wainsdorfer Mittelweg");
        break;
    }
    case 325208:
    {
        returnValue = F("Wainsdorfer Str.");
        break;
    }
    case 325209:
    {
        returnValue = F("Waisagrundstr.");
        break;
    }
    case 325210:
    {
        returnValue = F("Waisenallee");
        break;
    }
    case 325211:
    {
        returnValue = F("Waisengasse");
        break;
    }
    case 325212:
    {
        returnValue = F("Waisengärten");
        break;
    }
    case 325213:
    {
        returnValue = F("Waisengäßchen");
        break;
    }
    case 325214:
    {
        returnValue = F("Waisenhausbrink");
        break;
    }
    case 325215:
    {
        returnValue = F("Waisenhausdamm");
        break;
    }
    case 325216:
    {
        returnValue = F("Waisenhausgasse");
        break;
    }
    case 325217:
    {
        returnValue = F("Waisenhausgässle");
        break;
    }
    case 325218:
    {
        returnValue = F("Waisenhausgäßchen");
        break;
    }
    case 325219:
    {
        returnValue = F("Waisenhauspark");
        break;
    }
    case 325220:
    {
        returnValue = F("Waisenhausring");
        break;
    }
    case 325221:
    {
        returnValue = F("Waisenhausstr.");
        break;
    }
    case 325222:
    {
        returnValue = F("Waisenhof");
        break;
    }
    case 325223:
    {
        returnValue = F("Waisenhofstr.");
        break;
    }
    case 325224:
    {
        returnValue = F("Waisenmauer");
        break;
    }
    case 325225:
    {
        returnValue = F("Waisenstr.");
        break;
    }
    case 325226:
    {
        returnValue = F("Waisenweg");
        break;
    }
    case 325227:
    {
        returnValue = F("Waither Str.");
        break;
    }
    case 325228:
    {
        returnValue = F("Waitz-von-Eschen-Str.");
        break;
    }
    case 325229:
    {
        returnValue = F("Waitzenbinde");
        break;
    }
    case 325230:
    {
        returnValue = F("Waitzenrücken");
        break;
    }
    case 325231:
    {
        returnValue = F("Waitzenäckerstr.");
        break;
    }
    case 325232:
    {
        returnValue = F("Waitzgraming");
        break;
    }
    case 325233:
    {
        returnValue = F("Waitzinger Wiese");
        break;
    }
    case 325234:
    {
        returnValue = F("Waitzingerpark");
        break;
    }
    case 325235:
    {
        returnValue = F("Waitzstr.");
        break;
    }
    case 325236:
    {
        returnValue = F("Waitzweg");
        break;
    }
    case 325237:
    {
        returnValue = F("Waizelsweg");
        break;
    }
    case 325238:
    {
        returnValue = F("Waizendorfer Str.");
        break;
    }
    case 325239:
    {
        returnValue = F("Waizenfeld");
        break;
    }
    case 325240:
    {
        returnValue = F("Waizenfelder Str.");
        break;
    }
    case 325241:
    {
        returnValue = F("Waizenhof");
        break;
    }
    case 325242:
    {
        returnValue = F("Waizenhofen");
        break;
    }
    case 325243:
    {
        returnValue = F("Waizenhofener Weg");
        break;
    }
    case 325244:
    {
        returnValue = F("Waizenreuth");
        break;
    }
    case 325245:
    {
        returnValue = F("Waizenreuther Str.");
        break;
    }
    case 325246:
    {
        returnValue = F("Waizenrieder Str.");
        break;
    }
    case 325247:
    {
        returnValue = F("Waizer Berg");
        break;
    }
    case 325248:
    {
        returnValue = F("Waizmannsdorfer Str.");
        break;
    }
    case 325249:
    {
        returnValue = F("Wajemanns Feld");
        break;
    }
    case 325250:
    {
        returnValue = F("Wajemanns Kamp");
        break;
    }
    case 325251:
    {
        returnValue = F("Wajoner Str.");
        break;
    }
    case 325252:
    {
        returnValue = F("Wakefieldstr.");
        break;
    }
    case 325253:
    {
        returnValue = F("Wakelkamp");
        break;
    }
    case 325254:
    {
        returnValue = F("Wakelsacker");
        break;
    }
    case 325255:
    {
        returnValue = F("Wakenbreite");
        break;
    }
    case 325256:
    {
        returnValue = F("Wakendorf");
        break;
    }
    case 325257:
    {
        returnValue = F("Wakendorfer Str.");
        break;
    }
    case 325258:
    {
        returnValue = F("Wakendorfer Weg");
        break;
    }
    case 325259:
    {
        returnValue = F("Wakenitzfeld III");
        break;
    }
    case 325260:
    {
        returnValue = F("Wakenitzmauer");
        break;
    }
    case 325261:
    {
        returnValue = F("Wakenitzstr.");
        break;
    }
    case 325262:
    {
        returnValue = F("Wakenitzufer");
        break;
    }
    case 325263:
    {
        returnValue = F("Wakenitzweg");
        break;
    }
    case 325264:
    {
        returnValue = F("Wakenstädt");
        break;
    }
    case 325265:
    {
        returnValue = F("Wakenstädter Siedlung");
        break;
    }
    case 325266:
    {
        returnValue = F("Wakenstädter Str.");
        break;
    }
    case 325267:
    {
        returnValue = F("Walahfridstr.");
        break;
    }
    case 325268:
    {
        returnValue = F("Walbach");
        break;
    }
    case 325269:
    {
        returnValue = F("Walbaumstr.");
        break;
    }
    case 325270:
    {
        returnValue = F("Walbecker Dorfstr.");
        break;
    }
    case 325271:
    {
        returnValue = F("Walbecker Dyck");
        break;
    }
    case 325272:
    {
        returnValue = F("Walbecker Hauptstr.");
        break;
    }
    case 325273:
    {
        returnValue = F("Walbecker Markt");
        break;
    }
    case 325274:
    {
        returnValue = F("Walbecker Str.");
        break;
    }
    case 325275:
    {
        returnValue = F("Walbecker Tor");
        break;
    }
    case 325276:
    {
        returnValue = F("Walbecker Weg");
        break;
    }
    case 325277:
    {
        returnValue = F("Walbenreuth");
        break;
    }
    case 325278:
    {
        returnValue = F("Walbenreuther Str.");
        break;
    }
    case 325279:
    {
        returnValue = F("Walbenstr.");
        break;
    }
    case 325280:
    {
        returnValue = F("Walberberger Str.");
        break;
    }
    case 325281:
    {
        returnValue = F("Walberberger Weg");
        break;
    }
    case 325282:
    {
        returnValue = F("Walberfeldstr.");
        break;
    }
    case 325283:
    {
        returnValue = F("Walberg");
        break;
    }
    case 325284:
    {
        returnValue = F("Walbergerstr.");
        break;
    }
    case 325285:
    {
        returnValue = F("Walberggäßchen");
        break;
    }
    case 325286:
    {
        returnValue = F("Walbergraben");
        break;
    }
    case 325287:
    {
        returnValue = F("Walbergweg");
        break;
    }
    case 325288:
    {
        returnValue = F("Walberlastr.");
        break;
    }
    case 325289:
    {
        returnValue = F("Walberngrün");
        break;
    }
    case 325290:
    {
        returnValue = F("Walberngrüner Str.");
        break;
    }
    case 325291:
    {
        returnValue = F("Walbertstr.");
        break;
    }
    case 325292:
    {
        returnValue = F("Walbertweg");
        break;
    }
    case 325293:
    {
        returnValue = F("Walbeweg");
        break;
    }
    case 325294:
    {
        returnValue = F("Walbig");
        break;
    }
    case 325295:
    {
        returnValue = F("Walbkestr.");
        break;
    }
    case 325296:
    {
        returnValue = F("Walbottstr.");
        break;
    }
    case 325297:
    {
        returnValue = F("Walbrecken");
        break;
    }
    case 325298:
    {
        returnValue = F("Walbree");
        break;
    }
    case 325299:
    {
        returnValue = F("Walbrodtsweg");
        break;
    }
    case 325300:
    {
        returnValue = F("Walbroksweg");
        break;
    }
    case 325301:
    {
        returnValue = F("Walbrunnenstr.");
        break;
    }
    case 325302:
    {
        returnValue = F("Walburer Weg");
        break;
    }
    case 325303:
    {
        returnValue = F("Walburg");
        break;
    }
    case 325304:
    {
        returnValue = F("Walburg-Egerer-Str.");
        break;
    }
    case 325305:
    {
        returnValue = F("Walburga-Closmann-Str.");
        break;
    }
    case 325306:
    {
        returnValue = F("Walburga-Eichhorn-Str.");
        break;
    }
    case 325307:
    {
        returnValue = F("Walburgaplatz");
        break;
    }
    case 325308:
    {
        returnValue = F("Walburgastr.");
        break;
    }
    case 325309:
    {
        returnValue = F("Walburgaweg");
        break;
    }
    case 325310:
    {
        returnValue = F("Walburger Str.");
        break;
    }
    case 325311:
    {
        returnValue = F("Walburger-Osthofen-Wallstr.");
        break;
    }
    case 325312:
    {
        returnValue = F("Walburgerschäfergasse");
        break;
    }
    case 325313:
    {
        returnValue = F("Walburgerstr.");
        break;
    }
    case 325314:
    {
        returnValue = F("Walburgerweg");
        break;
    }
    case 325315:
    {
        returnValue = F("Walburgisgasse");
        break;
    }
    case 325316:
    {
        returnValue = F("Walburgisplatz");
        break;
    }
    case 325317:
    {
        returnValue = F("Walburgisstr.");
        break;
    }
    case 325318:
    {
        returnValue = F("Walburgisweg");
        break;
    }
    case 325319:
    {
        returnValue = F("Walburgiweg");
        break;
    }
    case 325320:
    {
        returnValue = F("Walburgstr.");
        break;
    }
    case 325321:
    {
        returnValue = F("Walbüttelbrunner Str.");
        break;
    }
    case 325322:
    {
        returnValue = F("Walche");
        break;
    }
    case 325323:
    {
        returnValue = F("Walchenberg");
        break;
    }
    case 325324:
    {
        returnValue = F("Walchenseeplatz");
        break;
    }
    case 325325:
    {
        returnValue = F("Walchenseer-Steig");
        break;
    }
    case 325326:
    {
        returnValue = F("Walchenseestr.");
        break;
    }
    case 325327:
    {
        returnValue = F("Walchenseeweg");
        break;
    }
    case 325328:
    {
        returnValue = F("Walchenstr.");
        break;
    }
    case 325329:
    {
        returnValue = F("Walchgasse");
        break;
    }
    case 325330:
    {
        returnValue = F("Walchi");
        break;
    }
    case 325331:
    {
        returnValue = F("Walching");
        break;
    }
    case 325332:
    {
        returnValue = F("Walchnerstr.");
        break;
    }
    case 325333:
    {
        returnValue = F("Walchseestr.");
        break;
    }
    case 325334:
    {
        returnValue = F("Walchshofener Str.");
        break;
    }
    case 325335:
    {
        returnValue = F("Walchshofener Weg");
        break;
    }
    case 325336:
    {
        returnValue = F("Walchsinger Str.");
        break;
    }
    case 325337:
    {
        returnValue = F("Walchstadter Höhe");
        break;
    }
    case 325338:
    {
        returnValue = F("Walchstadter Str.");
        break;
    }
    case 325339:
    {
        returnValue = F("Walchstadter Weg");
        break;
    }
    case 325340:
    {
        returnValue = F("Walchstr.");
        break;
    }
    case 325341:
    {
        returnValue = F("Walchumer Str.");
        break;
    }
    case 325342:
    {
        returnValue = F("Walchwies");
        break;
    }
    case 325343:
    {
        returnValue = F("Walckerstr.");
        break;
    }
    case 325344:
    {
        returnValue = F("Walcott Weg");
        break;
    }
    case 325345:
    {
        returnValue = F("Walcourtweg");
        break;
    }
    case 325346:
    {
        returnValue = F("Walczer Str.");
        break;
    }
    case 325347:
    {
        returnValue = F("Wald");
        break;
    }
    case 325348:
    {
        returnValue = F("Wald Weg");
        break;
    }
    case 325349:
    {
        returnValue = F("Wald der Erinnerung");
        break;
    }
    case 325350:
    {
        returnValue = F("Wald der Generationen");
        break;
    }
    case 325351:
    {
        returnValue = F("Wald- und Holzlehrpfad");
        break;
    }
    case 325352:
    {
        returnValue = F("Wald-Ameisen-Weg");
        break;
    }
    case 325353:
    {
        returnValue = F("Wald-Amorbacher Str.");
        break;
    }
    case 325354:
    {
        returnValue = F("Wald-Dünenweg");
        break;
    }
    case 325355:
    {
        returnValue = F("Wald-Eck");
        break;
    }
    case 325356:
    {
        returnValue = F("Wald-Erbacher-Str.");
        break;
    }
    case 325357:
    {
        returnValue = F("Wald-Erlebnis-Pfad");
        break;
    }
    case 325358:
    {
        returnValue = F("Wald-Glas-Garten");
        break;
    }
    case 325359:
    {
        returnValue = F("Wald-Michelbacher Str.");
        break;
    }
    case 325360:
    {
        returnValue = F("Wald-Schmidt-Str.");
        break;
    }
    case 325361:
    {
        returnValue = F("Wald-Wasser-Lehrpfad Soltau");
        break;
    }
    case 325362:
    {
        returnValue = F("Wald-Wunder-Weg");
        break;
    }
    case 325363:
    {
        returnValue = F("Wald-und-Wanderweg");
        break;
    }
    case 325364:
    {
        returnValue = F("Wald/Feldweg");
        break;
    }
    case 325365:
    {
        returnValue = F("WaldWipfelWeg");
        break;
    }
    case 325366:
    {
        returnValue = F("Waldachstr.");
        break;
    }
    case 325367:
    {
        returnValue = F("Waldacker");
        break;
    }
    case 325368:
    {
        returnValue = F("Waldackerstr.");
        break;
    }
    case 325369:
    {
        returnValue = F("Waldackerweg");
        break;
    }
    case 325370:
    {
        returnValue = F("Waldaer Str.");
        break;
    }
    case 325371:
    {
        returnValue = F("Waldalgesheimer Str.");
        break;
    }
    case 325372:
    {
        returnValue = F("Waldallee");
        break;
    }
    case 325373:
    {
        returnValue = F("Waldamtstr.");
        break;
    }
    case 325374:
    {
        returnValue = F("Waldangellocher Str.");
        break;
    }
    case 325375:
    {
        returnValue = F("Waldanger");
        break;
    }
    case 325376:
    {
        returnValue = F("Waldarbeitersiedlung");
        break;
    }
    case 325377:
    {
        returnValue = F("Waldarbeiterweg");
        break;
    }
    case 325378:
    {
        returnValue = F("Waldarichstr.");
        break;
    }
    case 325379:
    {
        returnValue = F("Waldaubacher Str.");
        break;
    }
    case 325380:
    {
        returnValue = F("Waldaue");
        break;
    }
    case 325381:
    {
        returnValue = F("Waldauenweg");
        break;
    }
    case 325382:
    {
        returnValue = F("Waldauer Berg");
        break;
    }
    case 325383:
    {
        returnValue = F("Waldauer Fußweg");
        break;
    }
    case 325384:
    {
        returnValue = F("Waldauer Kirchplatz");
        break;
    }
    case 325385:
    {
        returnValue = F("Waldauer Leite");
        break;
    }
    case 325386:
    {
        returnValue = F("Waldauer Oberdorf");
        break;
    }
    case 325387:
    {
        returnValue = F("Waldauer Str.");
        break;
    }
    case 325388:
    {
        returnValue = F("Waldauer Weg");
        break;
    }
    case 325389:
    {
        returnValue = F("Waldauerbacher Str.");
        break;
    }
    case 325390:
    {
        returnValue = F("Waldauschneise");
        break;
    }
    case 325391:
    {
        returnValue = F("Waldaustr.");
        break;
    }
    case 325392:
    {
        returnValue = F("Waldauweg");
        break;
    }
    case 325393:
    {
        returnValue = F("Waldaweg");
        break;
    }
    case 325394:
    {
        returnValue = F("Waldbach");
        break;
    }
    case 325395:
    {
        returnValue = F("Waldbacher Str.");
        break;
    }
    case 325396:
    {
        returnValue = F("Waldbachsenke");
        break;
    }
    case 325397:
    {
        returnValue = F("Waldbachstr.");
        break;
    }
    case 325398:
    {
        returnValue = F("Waldbachtal");
        break;
    }
    case 325399:
    {
        returnValue = F("Waldbachweg");
        break;
    }
    case 325400:
    {
        returnValue = F("Waldbad");
        break;
    }
    case 325401:
    {
        returnValue = F("Waldbad Adria");
        break;
    }
    case 325402:
    {
        returnValue = F("Waldbad Elend");
        break;
    }
    case 325403:
    {
        returnValue = F("Waldbad Geschwenda");
        break;
    }
    case 325404:
    {
        returnValue = F("Waldbad Schloss Neuhaus");
        break;
    }
    case 325405:
    {
        returnValue = F("Waldbad Stolzenhain");
        break;
    }
    case 325406:
    {
        returnValue = F("Waldbad Sünteltal");
        break;
    }
    case 325407:
    {
        returnValue = F("Waldbad Tröstau");
        break;
    }
    case 325408:
    {
        returnValue = F("Waldbad Wehrsdorf");
        break;
    }
    case 325409:
    {
        returnValue = F("Waldbadpromenade");
        break;
    }
    case 325410:
    {
        returnValue = F("Waldbadstieg");
        break;
    }
    case 325411:
    {
        returnValue = F("Waldbadstr.");
        break;
    }
    case 325412:
    {
        returnValue = F("Waldbadweg");
        break;
    }
    case 325413:
    {
        returnValue = F("Waldbahn");
        break;
    }
    case 325414:
    {
        returnValue = F("Waldbahnstr.");
        break;
    }
    case 325415:
    {
        returnValue = F("Waldbahnweg");
        break;
    }
    case 325416:
    {
        returnValue = F("Waldbannweg");
        break;
    }
    case 325417:
    {
        returnValue = F("Waldbardauer Str.");
        break;
    }
    case 325418:
    {
        returnValue = F("Waldbauer-Branten");
        break;
    }
    case 325419:
    {
        returnValue = F("Waldbaurstr.");
        break;
    }
    case 325420:
    {
        returnValue = F("Waldbauschülerpfad");
        break;
    }
    case 325421:
    {
        returnValue = F("Waldbeerenweg");
        break;
    }
    case 325422:
    {
        returnValue = F("Waldbeerweg");
        break;
    }
    case 325423:
    {
        returnValue = F("Waldberg");
        break;
    }
    case 325424:
    {
        returnValue = F("Waldberger Str.");
        break;
    }
    case 325425:
    {
        returnValue = F("Waldbergsley");
        break;
    }
    case 325426:
    {
        returnValue = F("Waldbergstr.");
        break;
    }
    case 325427:
    {
        returnValue = F("Waldbergweg");
        break;
    }
    case 325428:
    {
        returnValue = F("Waldbitze");
        break;
    }
    case 325429:
    {
        returnValue = F("Waldbleeke");
        break;
    }
    case 325430:
    {
        returnValue = F("Waldblick");
        break;
    }
    case 325431:
    {
        returnValue = F("Waldblickstr.");
        break;
    }
    case 325432:
    {
        returnValue = F("Waldblickweg");
        break;
    }
    case 325433:
    {
        returnValue = F("Waldblumenstr.");
        break;
    }
    case 325434:
    {
        returnValue = F("Waldbornstr.");
        break;
    }
    case 325435:
    {
        returnValue = F("Waldbottenstr.");
        break;
    }
    case 325436:
    {
        returnValue = F("Waldbottweg");
        break;
    }
    case 325437:
    {
        returnValue = F("Waldbree");
        break;
    }
    case 325438:
    {
        returnValue = F("Waldbreede");
        break;
    }
    case 325439:
    {
        returnValue = F("Waldbreitbacher Str.");
        break;
    }
    case 325440:
    {
        returnValue = F("Waldbreite");
        break;
    }
    case 325441:
    {
        returnValue = F("Waldbrink");
        break;
    }
    case 325442:
    {
        returnValue = F("Waldbronner Str.");
        break;
    }
    case 325443:
    {
        returnValue = F("Waldbronner Weg");
        break;
    }
    case 325444:
    {
        returnValue = F("Waldbronnweg");
        break;
    }
    case 325445:
    {
        returnValue = F("Waldbruch");
        break;
    }
    case 325446:
    {
        returnValue = F("Waldbruckhöfe");
        break;
    }
    case 325447:
    {
        returnValue = F("Waldbrunn");
        break;
    }
    case 325448:
    {
        returnValue = F("Waldbrunnen");
        break;
    }
    case 325449:
    {
        returnValue = F("Waldbrunnenstr.");
        break;
    }
    case 325450:
    {
        returnValue = F("Waldbrunnenweg");
        break;
    }
    case 325451:
    {
        returnValue = F("Waldbrunner Str.");
        break;
    }
    case 325452:
    {
        returnValue = F("Waldbröler Str.");
        break;
    }
    case 325453:
    {
        returnValue = F("Waldbuch");
        break;
    }
    case 325454:
    {
        returnValue = F("Waldburgallee");
        break;
    }
    case 325455:
    {
        returnValue = F("Waldburger Str.");
        break;
    }
    case 325456:
    {
        returnValue = F("Waldburgstr.");
        break;
    }
    case 325457:
    {
        returnValue = F("Waldburgweg");
        break;
    }
    case 325458:
    {
        returnValue = F("Waldböckelheimer Str.");
        break;
    }
    case 325459:
    {
        returnValue = F("Waldbühlstr.");
        break;
    }
    case 325460:
    {
        returnValue = F("Waldbühlweg");
        break;
    }
    case 325461:
    {
        returnValue = F("Waldbühne Niederelsungen");
        break;
    }
    case 325462:
    {
        returnValue = F("Waldbühnenweg");
        break;
    }
    case 325463:
    {
        returnValue = F("Waldcafeweg");
        break;
    }
    case 325464:
    {
        returnValue = F("Waldcarree");
        break;
    }
    case 325465:
    {
        returnValue = F("Waldchaussee");
        break;
    }
    case 325466:
    {
        returnValue = F("Walddachsweg");
        break;
    }
    case 325467:
    {
        returnValue = F("Walddistelpfad");
        break;
    }
    case 325468:
    {
        returnValue = F("Walddorfer Ring");
        break;
    }
    case 325469:
    {
        returnValue = F("Walddorfer Str.");
        break;
    }
    case 325470:
    {
        returnValue = F("Walddorfer Weg");
        break;
    }
    case 325471:
    {
        returnValue = F("Walddorfstr.");
        break;
    }
    case 325472:
    {
        returnValue = F("Walddrehna Am Kietz");
        break;
    }
    case 325473:
    {
        returnValue = F("Walddrehna Bahnhofstr.");
        break;
    }
    case 325474:
    {
        returnValue = F("Walddrehna Försterei");
        break;
    }
    case 325475:
    {
        returnValue = F("Walddrehna Gehrener Str.");
        break;
    }
    case 325476:
    {
        returnValue = F("Walddrehna Hauptstr.");
        break;
    }
    case 325477:
    {
        returnValue = F("Walddrehna Lindenstr.");
        break;
    }
    case 325478:
    {
        returnValue = F("Walddrehna Pilzheide");
        break;
    }
    case 325479:
    {
        returnValue = F("Walddrehna Poststr.");
        break;
    }
    case 325480:
    {
        returnValue = F("Walddrosselweg");
        break;
    }
    case 325481:
    {
        returnValue = F("Walddörfel-Weg");
        break;
    }
    case 325482:
    {
        returnValue = F("Waldebur");
        break;
    }
    case 325483:
    {
        returnValue = F("Waldeck");
        break;
    }
    case 325484:
    {
        returnValue = F("Waldecke");
        break;
    }
    case 325485:
    {
        returnValue = F("Waldecken");
        break;
    }
    case 325486:
    {
        returnValue = F("Waldeckenbergweg");
        break;
    }
    case 325487:
    {
        returnValue = F("Waldecker Platz");
        break;
    }
    case 325488:
    {
        returnValue = F("Waldecker Ring");
        break;
    }
    case 325489:
    {
        returnValue = F("Waldecker Str.");
        break;
    }
    case 325490:
    {
        returnValue = F("Waldecker Weg");
        break;
    }
    case 325491:
    {
        returnValue = F("Waldeckerhof");
        break;
    }
    case 325492:
    {
        returnValue = F("Waldeckerhöhe");
        break;
    }
    case 325493:
    {
        returnValue = F("Waldeckersteig");
        break;
    }
    case 325494:
    {
        returnValue = F("Waldeckestr.");
        break;
    }
    case 325495:
    {
        returnValue = F("Waldeckstr.");
        break;
    }
    case 325496:
    {
        returnValue = F("Waldeckweg");
        break;
    }
    case 325497:
    {
        returnValue = F("Waldegert");
        break;
    }
    case 325498:
    {
        returnValue = F("Waldeinfahrt");
        break;
    }
    case 325499:
    {
        returnValue = F("Waldemar-Becké-Platz");
        break;
    }
    case 325500:
    {
        returnValue = F("Waldemar-Besson-Str.");
        break;
    }
    case 325501:
    {
        returnValue = F("Waldemar-Boedts-Str.");
        break;
    }
    case 325502:
    {
        returnValue = F("Waldemar-Bonsels-Str.");
        break;
    }
    case 325503:
    {
        returnValue = F("Waldemar-Bonsels-Weg");
        break;
    }
    case 325504:
    {
        returnValue = F("Waldemar-Dudda-Str.");
        break;
    }
    case 325505:
    {
        returnValue = F("Waldemar-Elsoffer-Weg");
        break;
    }
    case 325506:
    {
        returnValue = F("Waldemar-Friauf-Str.");
        break;
    }
    case 325507:
    {
        returnValue = F("Waldemar-Fritsch-Weg");
        break;
    }
    case 325508:
    {
        returnValue = F("Waldemar-Götze-Str.");
        break;
    }
    case 325509:
    {
        returnValue = F("Waldemar-Holtz-Str.");
        break;
    }
    case 325510:
    {
        returnValue = F("Waldemar-Klink-Str.");
        break;
    }
    case 325511:
    {
        returnValue = F("Waldemar-Koch-Weg");
        break;
    }
    case 325512:
    {
        returnValue = F("Waldemar-Petersen-Str.");
        break;
    }
    case 325513:
    {
        returnValue = F("Waldemar-Scherl-Str.");
        break;
    }
    case 325514:
    {
        returnValue = F("Waldemar-Schröder-Weg");
        break;
    }
    case 325515:
    {
        returnValue = F("Waldemar-Specht-Weg");
        break;
    }
    case 325516:
    {
        returnValue = F("Waldemar-von-Mohl-Str.");
        break;
    }
    case 325517:
    {
        returnValue = F("Waldemardamm");
        break;
    }
    case 325518:
    {
        returnValue = F("Waldemarplatz");
        break;
    }
    case 325519:
    {
        returnValue = F("Waldemarstr.");
        break;
    }
    case 325520:
    {
        returnValue = F("Waldemarsweg");
        break;
    }
    case 325521:
    {
        returnValue = F("Waldemei");
        break;
    }
    case 325522:
    {
        returnValue = F("Waldemeinestr.");
        break;
    }
    case 325523:
    {
        returnValue = F("Waldemeistr.");
        break;
    }
    case 325524:
    {
        returnValue = F("Waldemeiweg");
        break;
    }
    case 325525:
    {
        returnValue = F("Waldemey");
        break;
    }
    case 325526:
    {
        returnValue = F("Waldemeystr.");
        break;
    }
    case 325527:
    {
        returnValue = F("Waldemser Str.");
        break;
    }
    case 325528:
    {
        returnValue = F("Waldenauer Marktplatz");
        break;
    }
    case 325529:
    {
        returnValue = F("Waldenauer Weg");
        break;
    }
    case 325530:
    {
        returnValue = F("Waldenbauerweg");
        break;
    }
    case 325531:
    {
        returnValue = F("Waldenbergweg");
        break;
    }
    case 325532:
    {
        returnValue = F("Waldenbucher Allee");
        break;
    }
    case 325533:
    {
        returnValue = F("Waldenbucher Platz");
        break;
    }
    case 325534:
    {
        returnValue = F("Waldenbucher Str.");
        break;
    }
    case 325535:
    {
        returnValue = F("Waldenbucher Weg");
        break;
    }
    case 325536:
    {
        returnValue = F("Waldenbungert");
        break;
    }
    case 325537:
    {
        returnValue = F("Waldenburg-Weg");
        break;
    }
    case 325538:
    {
        returnValue = F("Waldenburger Hof");
        break;
    }
    case 325539:
    {
        returnValue = F("Waldenburger Kehre");
        break;
    }
    case 325540:
    {
        returnValue = F("Waldenburger Ring");
        break;
    }
    case 325541:
    {
        returnValue = F("Waldenburger Str.");
        break;
    }
    case 325542:
    {
        returnValue = F("Waldenburger Weg");
        break;
    }
    case 325543:
    {
        returnValue = F("Waldenburgerstr.");
        break;
    }
    case 325544:
    {
        returnValue = F("Waldenburgstr.");
        break;
    }
    case 325545:
    {
        returnValue = F("Waldenburgweg");
        break;
    }
    case 325546:
    {
        returnValue = F("Waldenbühlweg");
        break;
    }
    case 325547:
    {
        returnValue = F("Waldeneckweg");
        break;
    }
    case 325548:
    {
        returnValue = F("Waldenfelsplatz");
        break;
    }
    case 325549:
    {
        returnValue = F("Waldenfelsstr.");
        break;
    }
    case 325550:
    {
        returnValue = F("Waldenrather Weg");
        break;
    }
    case 325551:
    {
        returnValue = F("Waldenreut");
        break;
    }
    case 325552:
    {
        returnValue = F("Waldenreuter Str.");
        break;
    }
    case 325553:
    {
        returnValue = F("Waldensberger Str.");
        break;
    }
    case 325554:
    {
        returnValue = F("Waldenserplatz");
        break;
    }
    case 325555:
    {
        returnValue = F("Waldenserstr.");
        break;
    }
    case 325556:
    {
        returnValue = F("Waldenserweg");
        break;
    }
    case 325557:
    {
        returnValue = F("Waldenstein");
        break;
    }
    case 325558:
    {
        returnValue = F("Waldensteiner Str.");
        break;
    }
    case 325559:
    {
        returnValue = F("Waldensteiner Weg");
        break;
    }
    case 325560:
    {
        returnValue = F("Waldenstr.");
        break;
    }
    case 325561:
    {
        returnValue = F("Waldental");
        break;
    }
    case 325562:
    {
        returnValue = F("Waldentdeckersteg");
        break;
    }
    case 325563:
    {
        returnValue = F("Waldenwiesen");
        break;
    }
    case 325564:
    {
        returnValue = F("Walder Stadtpark");
        break;
    }
    case 325565:
    {
        returnValue = F("Walder Str.");
        break;
    }
    case 325566:
    {
        returnValue = F("Walder-Weissert-Str.");
        break;
    }
    case 325567:
    {
        returnValue = F("Walderbacher Str.");
        break;
    }
    case 325568:
    {
        returnValue = F("Walderbachstr.");
        break;
    }
    case 325569:
    {
        returnValue = F("Walderbachweg");
        break;
    }
    case 325570:
    {
        returnValue = F("Walderbenweg");
        break;
    }
    case 325571:
    {
        returnValue = F("Walderdorffring");
        break;
    }
    case 325572:
    {
        returnValue = F("Walderdorffstr.");
        break;
    }
    case 325573:
    {
        returnValue = F("Walderebnispfad Denklingen");
        break;
    }
    case 325574:
    {
        returnValue = F("Waldergasse");
        break;
    }
    case 325575:
    {
        returnValue = F("Walderinger Str.");
        break;
    }
    case 325576:
    {
        returnValue = F("Walderlebnispark Petersberg");
        break;
    }
    case 325577:
    {
        returnValue = F("Walderlebnispfad");
        break;
    }
    case 325578:
    {
        returnValue = F("Walderlebnispfad Freising Forst");
        break;
    }
    case 325579:
    {
        returnValue = F("Walderlebnispfad Hahnenkamm");
        break;
    }
    case 325580:
    {
        returnValue = F("Walderlebnispfad Sauschütt");
        break;
    }
    case 325581:
    {
        returnValue = F("Walderlebnispfad Sinneswandeln");
        break;
    }
    case 325582:
    {
        returnValue = F("Walderlebnispfad Türkenfeld");
        break;
    }
    case 325583:
    {
        returnValue = F("Walderlebnispfad Zerf");
        break;
    }
    case 325584:
    {
        returnValue = F("Walderlebnisweg");
        break;
    }
    case 325585:
    {
        returnValue = F("Waldernbacher Str.");
        break;
    }
    case 325586:
    {
        returnValue = F("Waldersdorf");
        break;
    }
    case 325587:
    {
        returnValue = F("Walderseeer Str.");
        break;
    }
    case 325588:
    {
        returnValue = F("Walderseehöhe");
        break;
    }
    case 325589:
    {
        returnValue = F("Walderseer Str.");
        break;
    }
    case 325590:
    {
        returnValue = F("Walderseestr.");
        break;
    }
    case 325591:
    {
        returnValue = F("Walderseeweg");
        break;
    }
    case 325592:
    {
        returnValue = F("Waldershofer Kirchsteig");
        break;
    }
    case 325593:
    {
        returnValue = F("Waldershofer Str.");
        break;
    }
    case 325594:
    {
        returnValue = F("Waldertrift");
        break;
    }
    case 325595:
    {
        returnValue = F("Walderych");
        break;
    }
    case 325596:
    {
        returnValue = F("Waldescher Str.");
        break;
    }
    case 325597:
    {
        returnValue = F("Waldescher Weg");
        break;
    }
    case 325598:
    {
        returnValue = F("Waldesgrund");
        break;
    }
    case 325599:
    {
        returnValue = F("Waldeshöhe");
        break;
    }
    case 325600:
    {
        returnValue = F("Waldeshöher Str.");
        break;
    }
    case 325601:
    {
        returnValue = F("Waldeslust");
        break;
    }
    case 325602:
    {
        returnValue = F("Waldeslustweg");
        break;
    }
    case 325603:
    {
        returnValue = F("Waldesrand");
        break;
    }
    case 325604:
    {
        returnValue = F("Waldesrauschen");
        break;
    }
    case 325605:
    {
        returnValue = F("Waldesruh");
        break;
    }
    case 325606:
    {
        returnValue = F("Waldesruhe");
        break;
    }
    case 325607:
    {
        returnValue = F("Waldesruher Str.");
        break;
    }
    case 325608:
    {
        returnValue = F("Waldesruher Weg");
        break;
    }
    case 325609:
    {
        returnValue = F("Waldesruhweg");
        break;
    }
    case 325610:
    {
        returnValue = F("Waldessaum");
        break;
    }
    case 325611:
    {
        returnValue = F("Waldesser Weg");
        break;
    }
    case 325612:
    {
        returnValue = F("Waldesweben");
        break;
    }
    case 325613:
    {
        returnValue = F("Waldeyerstr.");
        break;
    }
    case 325614:
    {
        returnValue = F("Waldeyerweg");
        break;
    }
    case 325615:
    {
        returnValue = F("Waldeysenstr.");
        break;
    }
    case 325616:
    {
        returnValue = F("Waldfahrstr. Wasserschlößle-Kyburg");
        break;
    }
    case 325617:
    {
        returnValue = F("Waldfeeschneise");
        break;
    }
    case 325618:
    {
        returnValue = F("Waldfelderhof");
        break;
    }
    case 325619:
    {
        returnValue = F("Waldfeldstr.");
        break;
    }
    case 325620:
    {
        returnValue = F("Waldfeldweg");
        break;
    }
    case 325621:
    {
        returnValue = F("Waldferiendorf");
        break;
    }
    case 325622:
    {
        returnValue = F("Waldfestplatz");
        break;
    }
    case 325623:
    {
        returnValue = F("Waldfestplatz Failnbach");
        break;
    }
    case 325624:
    {
        returnValue = F("Waldfestplatz Männerchor Bachem 1904 e.V.");
        break;
    }
    case 325625:
    {
        returnValue = F("Waldfestplatz Oberseiffenbach");
        break;
    }
    case 325626:
    {
        returnValue = F("Waldfeuchter Str.");
        break;
    }
    case 325627:
    {
        returnValue = F("Waldfischbacher Str.");
        break;
    }
    case 325628:
    {
        returnValue = F("Waldfischer Str.");
        break;
    }
    case 325629:
    {
        returnValue = F("Waldfließstr.");
        break;
    }
    case 325630:
    {
        returnValue = F("Waldflorastr.");
        break;
    }
    case 325631:
    {
        returnValue = F("Waldflur");
        break;
    }
    case 325632:
    {
        returnValue = F("Waldflußweg");
        break;
    }
    case 325633:
    {
        returnValue = F("Waldfreibad Allmendingen");
        break;
    }
    case 325634:
    {
        returnValue = F("Waldfreibad Holzgerlingen");
        break;
    }
    case 325635:
    {
        returnValue = F("Waldfreundeweg");
        break;
    }
    case 325636:
    {
        returnValue = F("Waldfried");
        break;
    }
    case 325637:
    {
        returnValue = F("Waldfriede");
        break;
    }
    case 325638:
    {
        returnValue = F("Waldfrieden");
        break;
    }
    case 325639:
    {
        returnValue = F("Waldfriedener Str.");
        break;
    }
    case 325640:
    {
        returnValue = F("Waldfriedenstr.");
        break;
    }
    case 325641:
    {
        returnValue = F("Waldfriedenweg");
        break;
    }
    case 325642:
    {
        returnValue = F("Waldfriedhof");
        break;
    }
    case 325643:
    {
        returnValue = F("Waldfriedhof Lauheide");
        break;
    }
    case 325644:
    {
        returnValue = F("Waldfriedhofstr.");
        break;
    }
    case 325645:
    {
        returnValue = F("Waldfriedstr.");
        break;
    }
    case 325646:
    {
        returnValue = F("Waldgarten");
        break;
    }
    case 325647:
    {
        returnValue = F("Waldgarten Jerusalem");
        break;
    }
    case 325648:
    {
        returnValue = F("Waldgartenallee");
        break;
    }
    case 325649:
    {
        returnValue = F("Waldgartenstr.");
        break;
    }
    case 325650:
    {
        returnValue = F("Waldgartenweg");
        break;
    }
    case 325651:
    {
        returnValue = F("Waldgasse");
        break;
    }
    case 325652:
    {
        returnValue = F("Waldgaß");
        break;
    }
    case 325653:
    {
        returnValue = F("Waldgebiet-Rundweg");
        break;
    }
    case 325654:
    {
        returnValue = F("Waldgeschichtlicher Lehrpfad");
        break;
    }
    case 325655:
    {
        returnValue = F("Waldgeschichtspfad");
        break;
    }
    case 325656:
    {
        returnValue = F("Waldgirmeser Str.");
        break;
    }
    case 325657:
    {
        returnValue = F("Waldglashüttenstr.");
        break;
    }
    case 325658:
    {
        returnValue = F("Waldglasweg");
        break;
    }
    case 325659:
    {
        returnValue = F("Waldgraben");
        break;
    }
    case 325660:
    {
        returnValue = F("Waldgrabenweg");
        break;
    }
    case 325661:
    {
        returnValue = F("Waldgrenzweg");
        break;
    }
    case 325662:
    {
        returnValue = F("Waldgrubenweg");
        break;
    }
    case 325663:
    {
        returnValue = F("Waldgrund");
        break;
    }
    case 325664:
    {
        returnValue = F("Waldgrundstr.");
        break;
    }
    case 325665:
    {
        returnValue = F("Waldgrundweg");
        break;
    }
    case 325666:
    {
        returnValue = F("Waldgräfenstr.");
        break;
    }
    case 325667:
    {
        returnValue = F("Waldgrün");
        break;
    }
    case 325668:
    {
        returnValue = F("Waldgut");
        break;
    }
    case 325669:
    {
        returnValue = F("Waldgutstr.");
        break;
    }
    case 325670:
    {
        returnValue = F("Waldgutweg");
        break;
    }
    case 325671:
    {
        returnValue = F("Waldgärten");
        break;
    }
    case 325672:
    {
        returnValue = F("Waldgärtenstr.");
        break;
    }
    case 325673:
    {
        returnValue = F("Waldgärtnerstr.");
        break;
    }
    case 325674:
    {
        returnValue = F("Waldgürtel");
        break;
    }
    case 325675:
    {
        returnValue = F("Waldhaar");
        break;
    }
    case 325676:
    {
        returnValue = F("Waldhalle");
        break;
    }
    case 325677:
    {
        returnValue = F("Waldhallenweg");
        break;
    }
    case 325678:
    {
        returnValue = F("Waldhang");
        break;
    }
    case 325679:
    {
        returnValue = F("Waldhans");
        break;
    }
    case 325680:
    {
        returnValue = F("Waldhaus");
        break;
    }
    case 325681:
    {
        returnValue = F("Waldhaus Grunow");
        break;
    }
    case 325682:
    {
        returnValue = F("Waldhaus Hahn");
        break;
    }
    case 325683:
    {
        returnValue = F("Waldhaus Kahleshain");
        break;
    }
    case 325684:
    {
        returnValue = F("Waldhaus am Börnersgrund");
        break;
    }
    case 325685:
    {
        returnValue = F("Waldhaus im Schindereck");
        break;
    }
    case 325686:
    {
        returnValue = F("Waldhausener Höhe");
        break;
    }
    case 325687:
    {
        returnValue = F("Waldhausener Str.");
        break;
    }
    case 325688:
    {
        returnValue = F("Waldhausenstr.");
        break;
    }
    case 325689:
    {
        returnValue = F("Waldhauser Feld");
        break;
    }
    case 325690:
    {
        returnValue = F("Waldhauser Str.");
        break;
    }
    case 325691:
    {
        returnValue = F("Waldhauser Weg");
        break;
    }
    case 325692:
    {
        returnValue = F("Waldhauserstr.");
        break;
    }
    case 325693:
    {
        returnValue = F("Waldhaussiedlung");
        break;
    }
    case 325694:
    {
        returnValue = F("Waldhausstr.");
        break;
    }
    case 325695:
    {
        returnValue = F("Waldhausstreifen");
        break;
    }
    case 325696:
    {
        returnValue = F("Waldhausweg");
        break;
    }
    case 325697:
    {
        returnValue = F("Waldheckenstr.");
        break;
    }
    case 325698:
    {
        returnValue = F("Waldheidestr.");
        break;
    }
    case 325699:
    {
        returnValue = F("Waldheideweg");
        break;
    }
    case 325700:
    {
        returnValue = F("Waldheil");
        break;
    }
    case 325701:
    {
        returnValue = F("Waldheilstr.");
        break;
    }
    case 325702:
    {
        returnValue = F("Waldheilweg");
        break;
    }
    case 325703:
    {
        returnValue = F("Waldheim");
        break;
    }
    case 325704:
    {
        returnValue = F("Waldheim-Osteufer");
        break;
    }
    case 325705:
    {
        returnValue = F("Waldheimer Str.");
        break;
    }
    case 325706:
    {
        returnValue = F("Waldheimer Weg");
        break;
    }
    case 325707:
    {
        returnValue = F("Waldheimplatz");
        break;
    }
    case 325708:
    {
        returnValue = F("Waldheimstr.");
        break;
    }
    case 325709:
    {
        returnValue = F("Waldheimtrift");
        break;
    }
    case 325710:
    {
        returnValue = F("Waldheimweg");
        break;
    }
    case 325711:
    {
        returnValue = F("Waldherrenstr.");
        break;
    }
    case 325712:
    {
        returnValue = F("Waldherrstr.");
        break;
    }
    case 325713:
    {
        returnValue = F("Waldhilbersheimer Str.");
        break;
    }
    case 325714:
    {
        returnValue = F("Waldhilsbacher Strässel");
        break;
    }
    case 325715:
    {
        returnValue = F("Waldhilsbacher Weg");
        break;
    }
    case 325716:
    {
        returnValue = F("Waldhof");
        break;
    }
    case 325717:
    {
        returnValue = F("Waldhof Grenzschneise");
        break;
    }
    case 325718:
    {
        returnValue = F("Waldhof Hirschhausen");
        break;
    }
    case 325719:
    {
        returnValue = F("Waldhofer Pfad");
        break;
    }
    case 325720:
    {
        returnValue = F("Waldhofer Str.");
        break;
    }
    case 325721:
    {
        returnValue = F("Waldhofer Weg");
        break;
    }
    case 325722:
    {
        returnValue = F("Waldhoffs Weg");
        break;
    }
    case 325723:
    {
        returnValue = F("Waldhofplatz");
        break;
    }
    case 325724:
    {
        returnValue = F("Waldhofstr.");
        break;
    }
    case 325725:
    {
        returnValue = F("Waldhofsweg");
        break;
    }
    case 325726:
    {
        returnValue = F("Waldhofweg");
        break;
    }
    case 325727:
    {
        returnValue = F("Waldhohlstr.");
        break;
    }
    case 325728:
    {
        returnValue = F("Waldhohlweg");
        break;
    }
    case 325729:
    {
        returnValue = F("Waldhorngasse");
        break;
    }
    case 325730:
    {
        returnValue = F("Waldhorngässle");
        break;
    }
    case 325731:
    {
        returnValue = F("Waldhorngäßle");
        break;
    }
    case 325732:
    {
        returnValue = F("Waldhornplatz");
        break;
    }
    case 325733:
    {
        returnValue = F("Waldhornstr.");
        break;
    }
    case 325734:
    {
        returnValue = F("Waldhornweg");
        break;
    }
    case 325735:
    {
        returnValue = F("Waldhub");
        break;
    }
    case 325736:
    {
        returnValue = F("Waldhuckstr.");
        break;
    }
    case 325737:
    {
        returnValue = F("Waldhufe");
        break;
    }
    case 325738:
    {
        returnValue = F("Waldhufensiedlung");
        break;
    }
    case 325739:
    {
        returnValue = F("Waldhufenstr.");
        break;
    }
    case 325740:
    {
        returnValue = F("Waldhufenweg");
        break;
    }
    case 325741:
    {
        returnValue = F("Waldhusche");
        break;
    }
    case 325742:
    {
        returnValue = F("Waldhusen");
        break;
    }
    case 325743:
    {
        returnValue = F("Waldhusener Weg");
        break;
    }
    case 325744:
    {
        returnValue = F("Waldhäuser");
        break;
    }
    case 325745:
    {
        returnValue = F("Waldhäuser Mühle");
        break;
    }
    case 325746:
    {
        returnValue = F("Waldhäuser Str.");
        break;
    }
    case 325747:
    {
        returnValue = F("Waldhäuser Weg");
        break;
    }
    case 325748:
    {
        returnValue = F("Waldhäuserstr.");
        break;
    }
    case 325749:
    {
        returnValue = F("Waldhäuserweg");
        break;
    }
    case 325750:
    {
        returnValue = F("Waldhäusle");
        break;
    }
    case 325751:
    {
        returnValue = F("Waldhäusleweg");
        break;
    }
    case 325752:
    {
        returnValue = F("Waldhäuslweg");
        break;
    }
    case 325753:
    {
        returnValue = F("Waldhöfe");
        break;
    }
    case 325754:
    {
        returnValue = F("Waldhöhe");
        break;
    }
    case 325755:
    {
        returnValue = F("Waldhölzbacher Str.");
        break;
    }
    case 325756:
    {
        returnValue = F("Waldhörnlestr.");
        break;
    }
    case 325757:
    {
        returnValue = F("Waldhügel");
        break;
    }
    case 325758:
    {
        returnValue = F("Waldhügelweg");
        break;
    }
    case 325759:
    {
        returnValue = F("Waldhüterstr.");
        break;
    }
    case 325760:
    {
        returnValue = F("Waldhüterweg");
        break;
    }
    case 325761:
    {
        returnValue = F("Waldhüttener Weg");
        break;
    }
    case 325762:
    {
        returnValue = F("Waldhüttenstr.");
        break;
    }
    case 325763:
    {
        returnValue = F("Waldhüttenweg");
        break;
    }
    case 325764:
    {
        returnValue = F("Waldidyll");
        break;
    }
    case 325765:
    {
        returnValue = F("Waldidyller Weg");
        break;
    }
    case 325766:
    {
        returnValue = F("Walding");
        break;
    }
    case 325767:
    {
        returnValue = F("Waldisstr.");
        break;
    }
    case 325768:
    {
        returnValue = F("Walditz");
        break;
    }
    case 325769:
    {
        returnValue = F("Waldjugendweg");
        break;
    }
    case 325770:
    {
        returnValue = F("Waldkamp");
        break;
    }
    case 325771:
    {
        returnValue = F("Waldkante");
        break;
    }
    case 325772:
    {
        returnValue = F("Waldkapelle");
        break;
    }
    case 325773:
    {
        returnValue = F("Waldkapelle Retzelfembach");
        break;
    }
    case 325774:
    {
        returnValue = F("Waldkapellenstr.");
        break;
    }
    case 325775:
    {
        returnValue = F("Waldkapellenweg");
        break;
    }
    case 325776:
    {
        returnValue = F("Waldkappler Str.");
        break;
    }
    case 325777:
    {
        returnValue = F("Waldkate");
        break;
    }
    case 325778:
    {
        returnValue = F("Waldkaterallee");
        break;
    }
    case 325779:
    {
        returnValue = F("Waldkaterstr.");
        break;
    }
    case 325780:
    {
        returnValue = F("Waldkaterweg");
        break;
    }
    case 325781:
    {
        returnValue = F("Waldkatzenbacher Str.");
        break;
    }
    case 325782:
    {
        returnValue = F("Waldkauz");
        break;
    }
    case 325783:
    {
        returnValue = F("Waldkauzsteig");
        break;
    }
    case 325784:
    {
        returnValue = F("Waldkauzstr.");
        break;
    }
    case 325785:
    {
        returnValue = F("Waldkauzweg");
        break;
    }
    case 325786:
    {
        returnValue = F("Waldkerbelstr.");
        break;
    }
    case 325787:
    {
        returnValue = F("Waldkirch");
        break;
    }
    case 325788:
    {
        returnValue = F("Waldkirch Geräumt");
        break;
    }
    case 325789:
    {
        returnValue = F("Waldkirchbogen");
        break;
    }
    case 325790:
    {
        returnValue = F("Waldkirchener Str.");
        break;
    }
    case 325791:
    {
        returnValue = F("Waldkirchener Weg");
        break;
    }
    case 325792:
    {
        returnValue = F("Waldkircher Str.");
        break;
    }
    case 325793:
    {
        returnValue = F("Waldkirchner Str.");
        break;
    }
    case 325794:
    {
        returnValue = F("Waldkirchner Weg");
        break;
    }
    case 325795:
    {
        returnValue = F("Waldklassenzimmer");
        break;
    }
    case 325796:
    {
        returnValue = F("Waldklausenweg");
        break;
    }
    case 325797:
    {
        returnValue = F("Waldkletterpark Oberbayern");
        break;
    }
    case 325798:
    {
        returnValue = F("Waldkolonie");
        break;
    }
    case 325799:
    {
        returnValue = F("Waldkorso");
        break;
    }
    case 325800:
    {
        returnValue = F("Waldkraiburger Str.");
        break;
    }
    case 325801:
    {
        returnValue = F("Waldkrone");
        break;
    }
    case 325802:
    {
        returnValue = F("Waldkrugweg");
        break;
    }
    case 325803:
    {
        returnValue = F("Waldkugelweg");
        break;
    }
    case 325804:
    {
        returnValue = F("Waldkulturpfad");
        break;
    }
    case 325805:
    {
        returnValue = F("Waldkur");
        break;
    }
    case 325806:
    {
        returnValue = F("Waldkönigener Str.");
        break;
    }
    case 325807:
    {
        returnValue = F("Waldlabor Köln");
        break;
    }
    case 325808:
    {
        returnValue = F("Waldlaubersheimer Str.");
        break;
    }
    case 325809:
    {
        returnValue = F("Waldlaufpfad");
        break;
    }
    case 325810:
    {
        returnValue = F("Waldlehne");
        break;
    }
    case 325811:
    {
        returnValue = F("Waldlehrpark");
        break;
    }
    case 325812:
    {
        returnValue = F("Waldlehrpfad");
        break;
    }
    case 325813:
    {
        returnValue = F("Waldlehrpfad \"Alte Elbe");
        break;
    }
    case 325814:
    {
        returnValue = F("Waldlehrpfad (D5)");
        break;
    }
    case 325815:
    {
        returnValue = F("Waldlehrpfad Bollheide");
        break;
    }
    case 325816:
    {
        returnValue = F("Waldlehrpfad Eichelgarten");
        break;
    }
    case 325817:
    {
        returnValue = F("Waldlehrpfad Eimelrod");
        break;
    }
    case 325818:
    {
        returnValue = F("Waldlehrpfad Hoher Steiger");
        break;
    }
    case 325819:
    {
        returnValue = F("Waldlehrpfad Ilse");
        break;
    }
    case 325820:
    {
        returnValue = F("Waldlehrpfad Rund um den Huy");
        break;
    }
    case 325821:
    {
        returnValue = F("Waldlehrpfad Schwanheim");
        break;
    }
    case 325822:
    {
        returnValue = F("Waldlehrpfad Velburg");
        break;
    }
    case 325823:
    {
        returnValue = F("Waldleininger Weg");
        break;
    }
    case 325824:
    {
        returnValue = F("Waldleite");
        break;
    }
    case 325825:
    {
        returnValue = F("Waldleitenweg");
        break;
    }
    case 325826:
    {
        returnValue = F("Waldlerweg");
        break;
    }
    case 325827:
    {
        returnValue = F("Waldlichtung");
        break;
    }
    case 325828:
    {
        returnValue = F("Waldliesborner Str.");
        break;
    }
    case 325829:
    {
        returnValue = F("Waldlmühle");
        break;
    }
    case 325830:
    {
        returnValue = F("Waldloop");
        break;
    }
    case 325831:
    {
        returnValue = F("Waldlos Str.");
        break;
    }
    case 325832:
    {
        returnValue = F("Waldluftweg");
        break;
    }
    case 325833:
    {
        returnValue = F("Waldlust");
        break;
    }
    case 325834:
    {
        returnValue = F("Waldlustbrücke");
        break;
    }
    case 325835:
    {
        returnValue = F("Waldluststr.");
        break;
    }
    case 325836:
    {
        returnValue = F("Waldlustweg");
        break;
    }
    case 325837:
    {
        returnValue = F("Waldläuferweg");
        break;
    }
    case 325838:
    {
        returnValue = F("Waldmann");
        break;
    }
    case 325839:
    {
        returnValue = F("Waldmanngasse");
        break;
    }
    case 325840:
    {
        returnValue = F("Waldmannsbreite");
        break;
    }
    case 325841:
    {
        returnValue = F("Waldmannsfeld");
        break;
    }
    case 325842:
    {
        returnValue = F("Waldmannsgasse");
        break;
    }
    case 325843:
    {
        returnValue = F("Waldmannshauser Str.");
        break;
    }
    case 325844:
    {
        returnValue = F("Waldmannshofen");
        break;
    }
    case 325845:
    {
        returnValue = F("Waldmannshofer Str.");
        break;
    }
    case 325846:
    {
        returnValue = F("Waldmannshöfer Str.");
        break;
    }
    case 325847:
    {
        returnValue = F("Waldmannspfad");
        break;
    }
    case 325848:
    {
        returnValue = F("Waldmannstr.");
        break;
    }
    case 325849:
    {
        returnValue = F("Waldmannsweg");
        break;
    }
    case 325850:
    {
        returnValue = F("Waldmannsäcker");
        break;
    }
    case 325851:
    {
        returnValue = F("Waldmarkenhang");
        break;
    }
    case 325852:
    {
        returnValue = F("Waldmarkstr.");
        break;
    }
    case 325853:
    {
        returnValue = F("Waldmarkweg");
        break;
    }
    case 325854:
    {
        returnValue = F("Waldmatten");
        break;
    }
    case 325855:
    {
        returnValue = F("Waldmattengrundweg");
        break;
    }
    case 325856:
    {
        returnValue = F("Waldmattenhüttenweg");
        break;
    }
    case 325857:
    {
        returnValue = F("Waldmattenstr.");
        break;
    }
    case 325858:
    {
        returnValue = F("Waldmattenweg");
        break;
    }
    case 325859:
    {
        returnValue = F("Waldmattstr.");
        break;
    }
    case 325860:
    {
        returnValue = F("Waldmeisenweg");
        break;
    }
    case 325861:
    {
        returnValue = F("Waldmeisterpfad");
        break;
    }
    case 325862:
    {
        returnValue = F("Waldmeisterring");
        break;
    }
    case 325863:
    {
        returnValue = F("Waldmeistersteg");
        break;
    }
    case 325864:
    {
        returnValue = F("Waldmeistersteig");
        break;
    }
    case 325865:
    {
        returnValue = F("Waldmeisterstr.");
        break;
    }
    case 325866:
    {
        returnValue = F("Waldmeisterswegle");
        break;
    }
    case 325867:
    {
        returnValue = F("Waldmeisterweg");
        break;
    }
    case 325868:
    {
        returnValue = F("Waldmichelbacher Str.");
        break;
    }
    case 325869:
    {
        returnValue = F("Waldmohrer Str.");
        break;
    }
    case 325870:
    {
        returnValue = F("Waldmohrer Weg");
        break;
    }
    case 325871:
    {
        returnValue = F("Waldmoorweg");
        break;
    }
    case 325872:
    {
        returnValue = F("Waldmättleweg");
        break;
    }
    case 325873:
    {
        returnValue = F("Waldmösleweg");
        break;
    }
    case 325874:
    {
        returnValue = F("Waldmössinger Str.");
        break;
    }
    case 325875:
    {
        returnValue = F("Waldmühle");
        break;
    }
    case 325876:
    {
        returnValue = F("Waldmühlenstr.");
        break;
    }
    case 325877:
    {
        returnValue = F("Waldmühlenweg");
        break;
    }
    case 325878:
    {
        returnValue = F("Waldmühleweg");
        break;
    }
    case 325879:
    {
        returnValue = F("Waldmühlstr.");
        break;
    }
    case 325880:
    {
        returnValue = F("Waldmüllers-Hute-Weg");
        break;
    }
    case 325881:
    {
        returnValue = F("Waldmüllerstr.");
        break;
    }
    case 325882:
    {
        returnValue = F("Waldmünchener Str.");
        break;
    }
    case 325883:
    {
        returnValue = F("Waldmünchner Str.");
        break;
    }
    case 325884:
    {
        returnValue = F("Waldnaabstr.");
        break;
    }
    case 325885:
    {
        returnValue = F("Waldner Str.");
        break;
    }
    case 325886:
    {
        returnValue = F("Waldnerweg");
        break;
    }
    case 325887:
    {
        returnValue = F("Waldnieler Heide");
        break;
    }
    case 325888:
    {
        returnValue = F("Waldnieler Str.");
        break;
    }
    case 325889:
    {
        returnValue = F("Waldohreulenweg");
        break;
    }
    case 325890:
    {
        returnValue = F("Waldorfer Str.");
        break;
    }
    case 325891:
    {
        returnValue = F("Waldorfer Weg");
        break;
    }
    case 325892:
    {
        returnValue = F("Waldorfstr.");
        break;
    }
    case 325893:
    {
        returnValue = F("Waldorfweg");
        break;
    }
    case 325894:
    {
        returnValue = F("Waldostr.");
        break;
    }
    case 325895:
    {
        returnValue = F("Waldower Dorfstr.");
        break;
    }
    case 325896:
    {
        returnValue = F("Waldower Str.");
        break;
    }
    case 325897:
    {
        returnValue = F("Waldowstr.");
        break;
    }
    case 325898:
    {
        returnValue = F("Waldpark");
        break;
    }
    case 325899:
    {
        returnValue = F("Waldpark Lousberg");
        break;
    }
    case 325900:
    {
        returnValue = F("Waldpark Meinberger Eichholz");
        break;
    }
    case 325901:
    {
        returnValue = F("Waldpark Ruheberg");
        break;
    }
    case 325902:
    {
        returnValue = F("Waldpark Zwickau");
        break;
    }
    case 325903:
    {
        returnValue = F("Waldpark an der Öd");
        break;
    }
    case 325904:
    {
        returnValue = F("Waldparkanlage Gimmental");
        break;
    }
    case 325905:
    {
        returnValue = F("Waldparkdamm");
        break;
    }
    case 325906:
    {
        returnValue = F("Waldparkring");
        break;
    }
    case 325907:
    {
        returnValue = F("Waldparksiedlung");
        break;
    }
    case 325908:
    {
        returnValue = F("Waldparkstaffeln");
        break;
    }
    case 325909:
    {
        returnValue = F("Waldparkstr.");
        break;
    }
    case 325910:
    {
        returnValue = F("Waldparkweg");
        break;
    }
    case 325911:
    {
        returnValue = F("Waldparzelle I");
        break;
    }
    case 325912:
    {
        returnValue = F("Waldparzelle II");
        break;
    }
    case 325913:
    {
        returnValue = F("Waldperlacher Str.");
        break;
    }
    case 325914:
    {
        returnValue = F("Waldpfad");
        break;
    }
    case 325915:
    {
        returnValue = F("Waldpfad mit kleiner Brücke");
        break;
    }
    case 325916:
    {
        returnValue = F("Waldpfad zum Auf dem Ahorn");
        break;
    }
    case 325917:
    {
        returnValue = F("Waldpforte");
        break;
    }
    case 325918:
    {
        returnValue = F("Waldpfortenstr.");
        break;
    }
    case 325919:
    {
        returnValue = F("Waldpförtnerweg");
        break;
    }
    case 325920:
    {
        returnValue = F("Waldplatz");
        break;
    }
    case 325921:
    {
        returnValue = F("Waldplatz Hasenlauf");
        break;
    }
    case 325922:
    {
        returnValue = F("Waldplatz Toni's Hütte (Grillhütte Schwabmühle)");
        break;
    }
    case 325923:
    {
        returnValue = F("Waldpointerweg");
        break;
    }
    case 325924:
    {
        returnValue = F("Waldprechtsstr.");
        break;
    }
    case 325925:
    {
        returnValue = F("Waldprechtstalweg");
        break;
    }
    case 325926:
    {
        returnValue = F("Waldpromenade");
        break;
    }
    case 325927:
    {
        returnValue = F("Waldpromenate");
        break;
    }
    case 325928:
    {
        returnValue = F("Waldquellenweg");
        break;
    }
    case 325929:
    {
        returnValue = F("Waldracher Str.");
        break;
    }
    case 325930:
    {
        returnValue = F("Waldracher Weg");
        break;
    }
    case 325931:
    {
        returnValue = F("Waldracherstr.");
        break;
    }
    case 325932:
    {
        returnValue = F("Waldraffenlochweg");
        break;
    }
    case 325933:
    {
        returnValue = F("Waldrain");
        break;
    }
    case 325934:
    {
        returnValue = F("Waldramstr.");
        break;
    }
    case 325935:
    {
        returnValue = F("Waldrand");
        break;
    }
    case 325936:
    {
        returnValue = F("Waldrandsiedlung");
        break;
    }
    case 325937:
    {
        returnValue = F("Waldrandstr.");
        break;
    }
    case 325938:
    {
        returnValue = F("Waldrandweg");
        break;
    }
    case 325939:
    {
        returnValue = F("Waldrastweg");
        break;
    }
    case 325940:
    {
        returnValue = F("Waldrebenstr.");
        break;
    }
    case 325941:
    {
        returnValue = F("Waldrebenweg");
        break;
    }
    case 325942:
    {
        returnValue = F("Waldreihe");
        break;
    }
    case 325943:
    {
        returnValue = F("Waldreiterweg");
        break;
    }
    case 325944:
    {
        returnValue = F("Waldrennacher Fußweg");
        break;
    }
    case 325945:
    {
        returnValue = F("Waldrennacher Steige");
        break;
    }
    case 325946:
    {
        returnValue = F("Waldrennacher Str.");
        break;
    }
    case 325947:
    {
        returnValue = F("Waldrennacher Weg");
        break;
    }
    case 325948:
    {
        returnValue = F("Waldried");
        break;
    }
    case 325949:
    {
        returnValue = F("Waldriede");
        break;
    }
    case 325950:
    {
        returnValue = F("Waldring");
        break;
    }
    case 325951:
    {
        returnValue = F("Waldring 1");
        break;
    }
    case 325952:
    {
        returnValue = F("Waldring 2");
        break;
    }
    case 325953:
    {
        returnValue = F("Waldringstr.");
        break;
    }
    case 325954:
    {
        returnValue = F("Waldrode");
        break;
    }
    case 325955:
    {
        returnValue = F("Waldrodeweg");
        break;
    }
    case 325956:
    {
        returnValue = F("Waldroute");
        break;
    }
    case 325957:
    {
        returnValue = F("Waldruh");
        break;
    }
    case 325958:
    {
        returnValue = F("Waldrösberg");
        break;
    }
    case 325959:
    {
        returnValue = F("Waldrütteweg");
        break;
    }
    case 325960:
    {
        returnValue = F("Waldsachsener Schulgasse");
        break;
    }
    case 325961:
    {
        returnValue = F("Waldsachsener Str.");
        break;
    }
    case 325962:
    {
        returnValue = F("Waldsachsener Weg");
        break;
    }
    case 325963:
    {
        returnValue = F("Waldsall");
        break;
    }
    case 325964:
    {
        returnValue = F("Waldsassener Str.");
        break;
    }
    case 325965:
    {
        returnValue = F("Waldsaum");
        break;
    }
    case 325966:
    {
        returnValue = F("Waldsaumstr.");
        break;
    }
    case 325967:
    {
        returnValue = F("Waldsaumweg");
        break;
    }
    case 325968:
    {
        returnValue = F("Waldsberg");
        break;
    }
    case 325969:
    {
        returnValue = F("Waldsbergstr.");
        break;
    }
    case 325970:
    {
        returnValue = F("Waldschaid");
        break;
    }
    case 325971:
    {
        returnValue = F("Waldschloßstr.");
        break;
    }
    case 325972:
    {
        returnValue = F("Waldschlucht");
        break;
    }
    case 325973:
    {
        returnValue = F("Waldschluchtenweg");
        break;
    }
    case 325974:
    {
        returnValue = F("Waldschluchtweg");
        break;
    }
    case 325975:
    {
        returnValue = F("Waldschlösschen");
        break;
    }
    case 325976:
    {
        returnValue = F("Waldschlösschenweg");
        break;
    }
    case 325977:
    {
        returnValue = F("Waldschlößchen");
        break;
    }
    case 325978:
    {
        returnValue = F("Waldschlößchenbrücke");
        break;
    }
    case 325979:
    {
        returnValue = F("Waldschlößchenpark");
        break;
    }
    case 325980:
    {
        returnValue = F("Waldschlößchenstr.");
        break;
    }
    case 325981:
    {
        returnValue = F("Waldschlößchentunnel");
        break;
    }
    case 325982:
    {
        returnValue = F("Waldschlößchenweg");
        break;
    }
    case 325983:
    {
        returnValue = F("Waldschlößlstr.");
        break;
    }
    case 325984:
    {
        returnValue = F("Waldschmidstr.");
        break;
    }
    case 325985:
    {
        returnValue = F("Waldschmidt");
        break;
    }
    case 325986:
    {
        returnValue = F("Waldschmidthöhe");
        break;
    }
    case 325987:
    {
        returnValue = F("Waldschmidtpark");
        break;
    }
    case 325988:
    {
        returnValue = F("Waldschmidtplatz");
        break;
    }
    case 325989:
    {
        returnValue = F("Waldschmidtstr.");
        break;
    }
    case 325990:
    {
        returnValue = F("Waldschmidtweg");
        break;
    }
    case 325991:
    {
        returnValue = F("Waldschmidweg");
        break;
    }
    case 325992:
    {
        returnValue = F("Waldschmiede");
        break;
    }
    case 325993:
    {
        returnValue = F("Waldschmiedestr.");
        break;
    }
    case 325994:
    {
        returnValue = F("Waldschmiele");
        break;
    }
    case 325995:
    {
        returnValue = F("Waldschmittstr.");
        break;
    }
    case 325996:
    {
        returnValue = F("Waldschneise");
        break;
    }
    case 325997:
    {
        returnValue = F("Waldschulstr.");
        break;
    }
    case 325998:
    {
        returnValue = F("Waldschulweg");
        break;
    }
    case 325999:
    {
        returnValue = F("Waldschwaigestr.");
        break;
    }
    case 326000:
    {
        returnValue = F("Waldschwimmbad");
        break;
    }
    case 326001:
    {
        returnValue = F("Waldschwimmbad Bammental");
        break;
    }
    case 326002:
    {
        returnValue = F("Waldschwimmbad Eingang");
        break;
    }
    case 326003:
    {
        returnValue = F("Waldschwimmbad Kelze");
        break;
    }
    case 326004:
    {
        returnValue = F("Waldschänke");
        break;
    }
    case 326005:
    {
        returnValue = F("Waldschänkenweg");
        break;
    }
    case 326006:
    {
        returnValue = F("Waldsee");
        break;
    }
    case 326007:
    {
        returnValue = F("Waldsee Rundweg");
        break;
    }
    case 326008:
    {
        returnValue = F("Waldseeplatz");
        break;
    }
    case 326009:
    {
        returnValue = F("Waldseer Str.");
        break;
    }
    case 326010:
    {
        returnValue = F("Waldseer Weg");
        break;
    }
    case 326011:
    {
        returnValue = F("Waldseestr.");
        break;
    }
    case 326012:
    {
        returnValue = F("Waldseeweg");
        break;
    }
    case 326013:
    {
        returnValue = F("Waldseiter Str.");
        break;
    }
    case 326014:
    {
        returnValue = F("Waldserecke");
        break;
    }
    case 326015:
    {
        returnValue = F("Waldshuter Gass");
        break;
    }
    case 326016:
    {
        returnValue = F("Waldshuter Str.");
        break;
    }
    case 326017:
    {
        returnValue = F("Waldshuter Weg");
        break;
    }
    case 326018:
    {
        returnValue = F("Waldsiedlung");
        break;
    }
    case 326019:
    {
        returnValue = F("Waldsiedlung Heidgen");
        break;
    }
    case 326020:
    {
        returnValue = F("Waldsiedlung Sunde");
        break;
    }
    case 326021:
    {
        returnValue = F("Waldsiedlung-Eichendamm");
        break;
    }
    case 326022:
    {
        returnValue = F("Waldsiedlung-Fichtendamm");
        break;
    }
    case 326023:
    {
        returnValue = F("Waldsiedlung-Pappelring");
        break;
    }
    case 326024:
    {
        returnValue = F("Waldsiedlungsmarkt");
        break;
    }
    case 326025:
    {
        returnValue = F("Waldsiedlungsstr.");
        break;
    }
    case 326026:
    {
        returnValue = F("Waldsiedlungsweg");
        break;
    }
    case 326027:
    {
        returnValue = F("Waldskopfstr.");
        break;
    }
    case 326028:
    {
        returnValue = F("Waldskulpturenpark Maiburg");
        break;
    }
    case 326029:
    {
        returnValue = F("Waldspazierweg Zietlitz");
        break;
    }
    case 326030:
    {
        returnValue = F("Waldspielpark Carl-von-Weinberg");
        break;
    }
    case 326031:
    {
        returnValue = F("Waldspielpark Louisa");
        break;
    }
    case 326032:
    {
        returnValue = F("Waldspielplatz");
        break;
    }
    case 326033:
    {
        returnValue = F("Waldspirale");
        break;
    }
    case 326034:
    {
        returnValue = F("Waldspitz");
        break;
    }
    case 326035:
    {
        returnValue = F("Waldspitze");
        break;
    }
    case 326036:
    {
        returnValue = F("Waldspitzweg");
        break;
    }
    case 326037:
    {
        returnValue = F("Waldsportpark Liekwegen");
        break;
    }
    case 326038:
    {
        returnValue = F("Waldsportpfad");
        break;
    }
    case 326039:
    {
        returnValue = F("Waldsportpfad Rainweg");
        break;
    }
    case 326040:
    {
        returnValue = F("Waldsportstätten");
        break;
    }
    case 326041:
    {
        returnValue = F("Waldstadion");
        break;
    }
    case 326042:
    {
        returnValue = F("Waldstadtgestell");
        break;
    }
    case 326043:
    {
        returnValue = F("Waldstaße");
        break;
    }
    case 326044:
    {
        returnValue = F("Waldstedter Hauptstr.");
        break;
    }
    case 326045:
    {
        returnValue = F("Waldstedter Str.");
        break;
    }
    case 326046:
    {
        returnValue = F("Waldstedter Weg");
        break;
    }
    case 326047:
    {
        returnValue = F("Waldsteg");
        break;
    }
    case 326048:
    {
        returnValue = F("Waldsteig");
        break;
    }
    case 326049:
    {
        returnValue = F("Waldsteige");
        break;
    }
    case 326050:
    {
        returnValue = F("Waldsteiger Str.");
        break;
    }
    case 326051:
    {
        returnValue = F("Waldstein");
        break;
    }
    case 326052:
    {
        returnValue = F("Waldsteinberger Str.");
        break;
    }
    case 326053:
    {
        returnValue = F("Waldsteinblick");
        break;
    }
    case 326054:
    {
        returnValue = F("Waldsteinring");
        break;
    }
    case 326055:
    {
        returnValue = F("Waldsteinstr.");
        break;
    }
    case 326056:
    {
        returnValue = F("Waldsteinweg");
        break;
    }
    case 326057:
    {
        returnValue = F("Waldstetter Gasse");
        break;
    }
    case 326058:
    {
        returnValue = F("Waldstetter Pfad");
        break;
    }
    case 326059:
    {
        returnValue = F("Waldstetter Str.");
        break;
    }
    case 326060:
    {
        returnValue = F("Waldstetter Weg");
        break;
    }
    case 326061:
    {
        returnValue = F("Waldstieg");
        break;
    }
    case 326062:
    {
        returnValue = F("Waldstr.");
        break;
    }
    case 326063:
    {
        returnValue = F("Waldstr. Abberode");
        break;
    }
    case 326064:
    {
        returnValue = F("Waldstr. Hirzberg-Jägerhäusle");
        break;
    }
    case 326065:
    {
        returnValue = F("Waldstr. Hirzberg-St. Ottilien");
        break;
    }
    case 326066:
    {
        returnValue = F("Waldstr./Mariaroth");
        break;
    }
    case 326067:
    {
        returnValue = F("Waldstromerstr.");
        break;
    }
    case 326068:
    {
        returnValue = F("Waldstück");
        break;
    }
    case 326069:
    {
        returnValue = F("Waldstückerring");
        break;
    }
    case 326070:
    {
        returnValue = F("Waldstückle");
        break;
    }
    case 326071:
    {
        returnValue = F("Waldstücklesweg");
        break;
    }
    case 326072:
    {
        returnValue = F("Waldsängerweg");
        break;
    }
    case 326073:
    {
        returnValue = F("Waldtalweg");
        break;
    }
    case 326074:
    {
        returnValue = F("Waldteich-Weg");
        break;
    }
    case 326075:
    {
        returnValue = F("Waldteichstr.");
        break;
    }
    case 326076:
    {
        returnValue = F("Waldterrasse");
        break;
    }
    case 326077:
    {
        returnValue = F("Waldteufelweg");
        break;
    }
    case 326078:
    {
        returnValue = F("Waldthausenpark");
        break;
    }
    case 326079:
    {
        returnValue = F("Waldthausenstr.");
        break;
    }
    case 326080:
    {
        returnValue = F("Waldthurner Str.");
        break;
    }
    case 326081:
    {
        returnValue = F("Waldtorstr.");
        break;
    }
    case 326082:
    {
        returnValue = F("Waldtorweg");
        break;
    }
    case 326083:
    {
        returnValue = F("Waldtrautstr.");
        break;
    }
    case 326084:
    {
        returnValue = F("Waldtraße");
        break;
    }
    case 326085:
    {
        returnValue = F("Waldtwete");
        break;
    }
    case 326086:
    {
        returnValue = F("Waldtwiete");
        break;
    }
    case 326087:
    {
        returnValue = F("Waldulmer Str.");
        break;
    }
    case 326088:
    {
        returnValue = F("Waldvereinsweg");
        break;
    }
    case 326089:
    {
        returnValue = F("Waldvilla");
        break;
    }
    case 326090:
    {
        returnValue = F("Waldvogelpark Wiesental");
        break;
    }
    case 326091:
    {
        returnValue = F("Waldvogtstr.");
        break;
    }
    case 326092:
    {
        returnValue = F("Waldw. z. Hallaliter Forst");
        break;
    }
    case 326093:
    {
        returnValue = F("Waldwarmfreibad");
        break;
    }
    case 326094:
    {
        returnValue = F("Waldwasserallee");
        break;
    }
    case 326095:
    {
        returnValue = F("Waldweberweg");
        break;
    }
    case 326096:
    {
        returnValue = F("Waldweg");
        break;
    }
    case 326097:
    {
        returnValue = F("Waldweg \"Grund");
        break;
    }
    case 326098:
    {
        returnValue = F("Waldweg \"Peisel");
        break;
    }
    case 326099:
    {
        returnValue = F("Waldweg (KM)");
        break;
    }
    case 326100:
    {
        returnValue = F("Waldweg - Weißer Berg");
        break;
    }
    case 326101:
    {
        returnValue = F("Waldweg DH Tromm");
        break;
    }
    case 326102:
    {
        returnValue = F("Waldweg Ende Max-Clemens-Kanal");
        break;
    }
    case 326103:
    {
        returnValue = F("Waldweg Gottenheim-Neuershausen");
        break;
    }
    case 326104:
    {
        returnValue = F("Waldweg Grenzenlos");
        break;
    }
    case 326105:
    {
        returnValue = F("Waldweg Gärtnerei Beaufais");
        break;
    }
    case 326106:
    {
        returnValue = F("Waldweg Heidberge");
        break;
    }
    case 326107:
    {
        returnValue = F("Waldweg Jahmo-Grabo");
        break;
    }
    case 326108:
    {
        returnValue = F("Waldweg Jahmo-Mochau");
        break;
    }
    case 326109:
    {
        returnValue = F("Waldweg Klosterholz");
        break;
    }
    case 326110:
    {
        returnValue = F("Waldweg Kötterstr.");
        break;
    }
    case 326111:
    {
        returnValue = F("Waldweg Luisenlust");
        break;
    }
    case 326112:
    {
        returnValue = F("Waldweg Meetzen");
        break;
    }
    case 326113:
    {
        returnValue = F("Waldweg Richtung Hundsangen");
        break;
    }
    case 326114:
    {
        returnValue = F("Waldweg Route A6");
        break;
    }
    case 326115:
    {
        returnValue = F("Waldweg Schieferkaule");
        break;
    }
    case 326116:
    {
        returnValue = F("Waldweg Tiergartenheide");
        break;
    }
    case 326117:
    {
        returnValue = F("Waldweg Vitense");
        break;
    }
    case 326118:
    {
        returnValue = F("Waldweg Wasserwerk");
        break;
    }
    case 326119:
    {
        returnValue = F("Waldweg Weddin-Grabo");
        break;
    }
    case 326120:
    {
        returnValue = F("Waldweg am Haderhügel");
        break;
    }
    case 326121:
    {
        returnValue = F("Waldweg am Schellenberg");
        break;
    }
    case 326122:
    {
        returnValue = F("Waldweg an der Wolfseiche");
        break;
    }
    case 326123:
    {
        returnValue = F("Waldweg bei Mattsies");
        break;
    }
    case 326124:
    {
        returnValue = F("Waldweg durch die Brüche");
        break;
    }
    case 326125:
    {
        returnValue = F("Waldweg im Ellerholz");
        break;
    }
    case 326126:
    {
        returnValue = F("Waldweg im Schafgrund");
        break;
    }
    case 326127:
    {
        returnValue = F("Waldweg ins Lengenbachtal");
        break;
    }
    case 326128:
    {
        returnValue = F("Waldweg nach Bornkrug");
        break;
    }
    case 326129:
    {
        returnValue = F("Waldweg nach Hohn");
        break;
    }
    case 326130:
    {
        returnValue = F("Waldweg nach Tobertitz");
        break;
    }
    case 326131:
    {
        returnValue = F("Waldweg unterm Kielsberg");
        break;
    }
    case 326132:
    {
        returnValue = F("Waldweg zu den Helmhöfen");
        break;
    }
    case 326133:
    {
        returnValue = F("Waldweg zum Sportplatz Molsberg und Grillhütte");
        break;
    }
    case 326134:
    {
        returnValue = F("Waldweg zur Bruchmühle");
        break;
    }
    case 326135:
    {
        returnValue = F("Waldweg-Allseiters");
        break;
    }
    case 326136:
    {
        returnValue = F("Waldweg-Futterstelle");
        break;
    }
    case 326137:
    {
        returnValue = F("Waldweghöfe");
        break;
    }
    case 326138:
    {
        returnValue = F("Waldwegstr.");
        break;
    }
    case 326139:
    {
        returnValue = F("Waldweide");
        break;
    }
    case 326140:
    {
        returnValue = F("Waldweidenweg");
        break;
    }
    case 326141:
    {
        returnValue = F("Waldweideweg");
        break;
    }
    case 326142:
    {
        returnValue = F("Waldweiher");
        break;
    }
    case 326143:
    {
        returnValue = F("Waldweiherstr.");
        break;
    }
    case 326144:
    {
        returnValue = F("Waldweiherweg");
        break;
    }
    case 326145:
    {
        returnValue = F("Waldweinberg");
        break;
    }
    case 326146:
    {
        returnValue = F("Waldwelg-Trail");
        break;
    }
    case 326147:
    {
        returnValue = F("Waldwerdeweg");
        break;
    }
    case 326148:
    {
        returnValue = F("Waldwiese");
        break;
    }
    case 326149:
    {
        returnValue = F("Waldwiesen");
        break;
    }
    case 326150:
    {
        returnValue = F("Waldwiesenstr.");
        break;
    }
    case 326151:
    {
        returnValue = F("Waldwiesenweg");
        break;
    }
    case 326152:
    {
        returnValue = F("Waldwieser Str.");
        break;
    }
    case 326153:
    {
        returnValue = F("Waldwiesstr.");
        break;
    }
    case 326154:
    {
        returnValue = F("Waldwiesweg");
        break;
    }
    case 326155:
    {
        returnValue = F("Waldwimmersbacher Str.");
        break;
    }
    case 326156:
    {
        returnValue = F("Waldwinkel");
        break;
    }
    case 326157:
    {
        returnValue = F("Waldwinkelsweg");
        break;
    }
    case 326158:
    {
        returnValue = F("Waldwinkelweg");
        break;
    }
    case 326159:
    {
        returnValue = F("Waldwinkl");
        break;
    }
    case 326160:
    {
        returnValue = F("Waldwinkler Str.");
        break;
    }
    case 326161:
    {
        returnValue = F("Waldwirtschaftsweg");
        break;
    }
    case 326162:
    {
        returnValue = F("Waldzeile");
        break;
    }
    case 326163:
    {
        returnValue = F("Waldzeller Str.");
        break;
    }
    case 326164:
    {
        returnValue = F("Waldziegelhütte");
        break;
    }
    case 326165:
    {
        returnValue = F("Waldzieststr.");
        break;
    }
    case 326166:
    {
        returnValue = F("Waldzimmern");
        break;
    }
    case 326167:
    {
        returnValue = F("Waldäcker");
        break;
    }
    case 326168:
    {
        returnValue = F("Waldäckerstr.");
        break;
    }
    case 326169:
    {
        returnValue = F("Waldäckerweg");
        break;
    }
    case 326170:
    {
        returnValue = F("Waldökologischer Lehrpfad");
        break;
    }
    case 326171:
    {
        returnValue = F("Walenstr.");
        break;
    }
    case 326172:
    {
        returnValue = F("Walenweg");
        break;
    }
    case 326173:
    {
        returnValue = F("Waleri-Bykowski-Str.");
        break;
    }
    case 326174:
    {
        returnValue = F("Walerlebnispfad");
        break;
    }
    case 326175:
    {
        returnValue = F("Wales Platz");
        break;
    }
    case 326176:
    {
        returnValue = F("Walesallee");
        break;
    }
    case 326177:
    {
        returnValue = F("Walessiefen");
        break;
    }
    case 326178:
    {
        returnValue = F("Walesstr.");
        break;
    }
    case 326179:
    {
        returnValue = F("Walfahrtsteich");
        break;
    }
    case 326180:
    {
        returnValue = F("Walferdinger Str.");
        break;
    }
    case 326181:
    {
        returnValue = F("Walfisch");
        break;
    }
    case 326182:
    {
        returnValue = F("Walfischgasse");
        break;
    }
    case 326183:
    {
        returnValue = F("Walfischgäßchen");
        break;
    }
    case 326184:
    {
        returnValue = F("Walfischstr.");
        break;
    }
    case 326185:
    {
        returnValue = F("Walfriedusstr.");
        break;
    }
    case 326186:
    {
        returnValue = F("Walfängerstr.");
        break;
    }
    case 326187:
    {
        returnValue = F("Walfängerstrate");
        break;
    }
    case 326188:
    {
        returnValue = F("Walfängerweg");
        break;
    }
    case 326189:
    {
        returnValue = F("Walgenbacher Str.");
        break;
    }
    case 326190:
    {
        returnValue = F("Walgerfranzweg");
        break;
    }
    case 326191:
    {
        returnValue = F("Walgern");
        break;
    }
    case 326192:
    {
        returnValue = F("Walgernheide");
        break;
    }
    case 326193:
    {
        returnValue = F("Walgernweg");
        break;
    }
    case 326194:
    {
        returnValue = F("Walhalla-Allee");
        break;
    }
    case 326195:
    {
        returnValue = F("Walhallastr.");
        break;
    }
    case 326196:
    {
        returnValue = F("Walhallstr.");
        break;
    }
    case 326197:
    {
        returnValue = F("Walhausener Str.");
        break;
    }
    case 326198:
    {
        returnValue = F("Walhauser Str.");
        break;
    }
    case 326199:
    {
        returnValue = F("Walhausweg");
        break;
    }
    case 326200:
    {
        returnValue = F("Walheimer Str.");
        break;
    }
    case 326201:
    {
        returnValue = F("Walheimer Weg");
        break;
    }
    case 326202:
    {
        returnValue = F("Walheldsweg");
        break;
    }
    case 326203:
    {
        returnValue = F("Walholzer Weg");
        break;
    }
    case 326204:
    {
        returnValue = F("Walhorner Str.");
        break;
    }
    case 326205:
    {
        returnValue = F("Walhovener Str.");
        break;
    }
    case 326206:
    {
        returnValue = F("Walichstr.");
        break;
    }
    case 326207:
    {
        returnValue = F("Walinesheimer Str.");
        break;
    }
    case 326208:
    {
        returnValue = F("Walingen");
        break;
    }
    case 326209:
    {
        returnValue = F("Walinusstr.");
        break;
    }
    case 326210:
    {
        returnValue = F("Waliser Platz");
        break;
    }
    case 326211:
    {
        returnValue = F("Waliser Str.");
        break;
    }
    case 326212:
    {
        returnValue = F("Walk of Stars");
        break;
    }
    case 326213:
    {
        returnValue = F("Walk-Strasser-Anlage");
        break;
    }
    case 326214:
    {
        returnValue = F("Walkartswiesen");
        break;
    }
    case 326215:
    {
        returnValue = F("Walkaterring");
        break;
    }
    case 326216:
    {
        returnValue = F("Walkberg");
        break;
    }
    case 326217:
    {
        returnValue = F("Walke");
        break;
    }
    case 326218:
    {
        returnValue = F("Walkehof");
        break;
    }
    case 326219:
    {
        returnValue = F("Walkemühle");
        break;
    }
    case 326220:
    {
        returnValue = F("Walkemühlenweg");
        break;
    }
    case 326221:
    {
        returnValue = F("Walkenbach");
        break;
    }
    case 326222:
    {
        returnValue = F("Walkenberg");
        break;
    }
    case 326223:
    {
        returnValue = F("Walkenbergweg");
        break;
    }
    case 326224:
    {
        returnValue = F("Walkenbrückenstr.");
        break;
    }
    case 326225:
    {
        returnValue = F("Walkengässle");
        break;
    }
    case 326226:
    {
        returnValue = F("Walkenhagen");
        break;
    }
    case 326227:
    {
        returnValue = F("Walkenhof");
        break;
    }
    case 326228:
    {
        returnValue = F("Walkenmühle");
        break;
    }
    case 326229:
    {
        returnValue = F("Walkenmühlenweg");
        break;
    }
    case 326230:
    {
        returnValue = F("Walkenmühleweg");
        break;
    }
    case 326231:
    {
        returnValue = F("Walkenmühlstr.");
        break;
    }
    case 326232:
    {
        returnValue = F("Walkenried-Str.");
        break;
    }
    case 326233:
    {
        returnValue = F("Walkenrieder Str.");
        break;
    }
    case 326234:
    {
        returnValue = F("Walkenrieder Trift");
        break;
    }
    case 326235:
    {
        returnValue = F("Walkenriedstr.");
        break;
    }
    case 326236:
    {
        returnValue = F("Walkenweg");
        break;
    }
    case 326237:
    {
        returnValue = F("Walkerberg");
        break;
    }
    case 326238:
    {
        returnValue = F("Walkerdamm");
        break;
    }
    case 326239:
    {
        returnValue = F("Walkersaich");
        break;
    }
    case 326240:
    {
        returnValue = F("Walkersbachertraufweg");
        break;
    }
    case 326241:
    {
        returnValue = F("Walkersbacherwandweg");
        break;
    }
    case 326242:
    {
        returnValue = F("Walkerstr.");
        break;
    }
    case 326243:
    {
        returnValue = F("Walkerszell");
        break;
    }
    case 326244:
    {
        returnValue = F("Walkertshauser Weg");
        break;
    }
    case 326245:
    {
        returnValue = F("Walkerweg");
        break;
    }
    case 326246:
    {
        returnValue = F("Walkerzell");
        break;
    }
    case 326247:
    {
        returnValue = F("Walkes");
        break;
    }
    case 326248:
    {
        returnValue = F("Walkeser Str.");
        break;
    }
    case 326249:
    {
        returnValue = F("Walkestr.");
        break;
    }
    case 326250:
    {
        returnValue = F("Walkesweg");
        break;
    }
    case 326251:
    {
        returnValue = F("Walkeweg");
        break;
    }
    case 326252:
    {
        returnValue = F("Walkhof");
        break;
    }
    case 326253:
    {
        returnValue = F("Walkhoffring");
        break;
    }
    case 326254:
    {
        returnValue = F("Walkholzweg");
        break;
    }
    case 326255:
    {
        returnValue = F("Walkishauweg");
        break;
    }
    case 326256:
    {
        returnValue = F("Walkmöhle");
        break;
    }
    case 326257:
    {
        returnValue = F("Walkmühle");
        break;
    }
    case 326258:
    {
        returnValue = F("Walkmühlenhäuser");
        break;
    }
    case 326259:
    {
        returnValue = F("Walkmühlenstr.");
        break;
    }
    case 326260:
    {
        returnValue = F("Walkmühlenweg");
        break;
    }
    case 326261:
    {
        returnValue = F("Walkmühler Siedlung");
        break;
    }
    case 326262:
    {
        returnValue = F("Walkmühler Str.");
        break;
    }
    case 326263:
    {
        returnValue = F("Walkmühler Weg");
        break;
    }
    case 326264:
    {
        returnValue = F("Walkmühleweg");
        break;
    }
    case 326265:
    {
        returnValue = F("Walkmühlgasse");
        break;
    }
    case 326266:
    {
        returnValue = F("Walkmühlstr.");
        break;
    }
    case 326267:
    {
        returnValue = F("Walkmühltalanlagen");
        break;
    }
    case 326268:
    {
        returnValue = F("Walkmühlweg");
        break;
    }
    case 326269:
    {
        returnValue = F("Walkmüllerweg");
        break;
    }
    case 326270:
    {
        returnValue = F("Walksteig");
        break;
    }
    case 326271:
    {
        returnValue = F("Walksteige");
        break;
    }
    case 326272:
    {
        returnValue = F("Walkstr.");
        break;
    }
    case 326273:
    {
        returnValue = F("Walkstr. / Pickplatz");
        break;
    }
    case 326274:
    {
        returnValue = F("Walktal");
        break;
    }
    case 326275:
    {
        returnValue = F("Walkteich");
        break;
    }
    case 326276:
    {
        returnValue = F("Walkteichstr.");
        break;
    }
    case 326277:
    {
        returnValue = F("Walkweg");
        break;
    }
    case 326278:
    {
        returnValue = F("Walkürenallee");
        break;
    }
    case 326279:
    {
        returnValue = F("Walkürenring");
        break;
    }
    case 326280:
    {
        returnValue = F("Walkürenstr.");
        break;
    }
    case 326281:
    {
        returnValue = F("Walkürenweg");
        break;
    }
    case 326282:
    {
        returnValue = F("Wall");
        break;
    }
    case 326283:
    {
        returnValue = F("Wall Wasseraufhaltebecken");
        break;
    }
    case 326284:
    {
        returnValue = F("Wall am Kiez");
        break;
    }
    case 326285:
    {
        returnValue = F("Wall-Passage");
        break;
    }
    case 326286:
    {
        returnValue = F("Wallachei");
        break;
    }
    case 326287:
    {
        returnValue = F("Wallacher Str.");
        break;
    }
    case 326288:
    {
        returnValue = F("Wallachstr.");
        break;
    }
    case 326289:
    {
        returnValue = F("Wallachweg");
        break;
    }
    case 326290:
    {
        returnValue = F("Wallacker");
        break;
    }
    case 326291:
    {
        returnValue = F("Wallallee");
        break;
    }
    case 326292:
    {
        returnValue = F("Wallanlage");
        break;
    }
    case 326293:
    {
        returnValue = F("Wallanlage am Schießwall");
        break;
    }
    case 326294:
    {
        returnValue = F("Wallanlagen");
        break;
    }
    case 326295:
    {
        returnValue = F("Wallanlagen Fontaneanlage");
        break;
    }
    case 326296:
    {
        returnValue = F("Wallanlagen Kasernenallee");
        break;
    }
    case 326297:
    {
        returnValue = F("Wallanlagen Mittelpromenade");
        break;
    }
    case 326298:
    {
        returnValue = F("Wallau");
        break;
    }
    case 326299:
    {
        returnValue = F("Wallauer Hohl");
        break;
    }
    case 326300:
    {
        returnValue = F("Wallauer Str.");
        break;
    }
    case 326301:
    {
        returnValue = F("Wallauer Weg");
        break;
    }
    case 326302:
    {
        returnValue = F("Wallauffahrt");
        break;
    }
    case 326303:
    {
        returnValue = F("Wallaustr.");
        break;
    }
    case 326304:
    {
        returnValue = F("Wallbach");
        break;
    }
    case 326305:
    {
        returnValue = F("Wallbacher Stichle");
        break;
    }
    case 326306:
    {
        returnValue = F("Wallbacher Str.");
        break;
    }
    case 326307:
    {
        returnValue = F("Wallbacher Weg");
        break;
    }
    case 326308:
    {
        returnValue = F("Wallbachstr.");
        break;
    }
    case 326309:
    {
        returnValue = F("Wallbaumstr.");
        break;
    }
    case 326310:
    {
        returnValue = F("Wallbaumweg");
        break;
    }
    case 326311:
    {
        returnValue = F("Wallbeckstal");
        break;
    }
    case 326312:
    {
        returnValue = F("Wallberg");
        break;
    }
    case 326313:
    {
        returnValue = F("Wallberg-Rodelbahn");
        break;
    }
    case 326314:
    {
        returnValue = F("Wallberg-Schneise");
        break;
    }
    case 326315:
    {
        returnValue = F("Wallbergallee");
        break;
    }
    case 326316:
    {
        returnValue = F("Wallbergstr.");
        break;
    }
    case 326317:
    {
        returnValue = F("Wallbergweg");
        break;
    }
    case 326318:
    {
        returnValue = F("Wallbrechtstr.");
        break;
    }
    case 326319:
    {
        returnValue = F("Wallbrink");
        break;
    }
    case 326320:
    {
        returnValue = F("Wallbruchweg");
        break;
    }
    case 326321:
    {
        returnValue = F("Wallbrunnenstr.");
        break;
    }
    case 326322:
    {
        returnValue = F("Wallbrunnstr.");
        break;
    }
    case 326323:
    {
        returnValue = F("Wallbrunnstr. 106 / 108");
        break;
    }
    case 326324:
    {
        returnValue = F("Wallbrück");
        break;
    }
    case 326325:
    {
        returnValue = F("Wallbrücke");
        break;
    }
    case 326326:
    {
        returnValue = F("Wallburger Str.");
        break;
    }
    case 326327:
    {
        returnValue = F("Wallburgstr.");
        break;
    }
    case 326328:
    {
        returnValue = F("Wallburgweg");
        break;
    }
    case 326329:
    {
        returnValue = F("Walldamm");
        break;
    }
    case 326330:
    {
        returnValue = F("Walldammstr.");
        break;
    }
    case 326331:
    {
        returnValue = F("Walldeich");
        break;
    }
    case 326332:
    {
        returnValue = F("Walldorfer Pfad");
        break;
    }
    case 326333:
    {
        returnValue = F("Walldorfer Str.");
        break;
    }
    case 326334:
    {
        returnValue = F("Walldorfer Sträßle");
        break;
    }
    case 326335:
    {
        returnValue = F("Walldorfer Weg");
        break;
    }
    case 326336:
    {
        returnValue = F("Walldürner Steige");
        break;
    }
    case 326337:
    {
        returnValue = F("Walldürner Str.");
        break;
    }
    case 326338:
    {
        returnValue = F("Walldürner Weg");
        break;
    }
    case 326339:
    {
        returnValue = F("Walle");
        break;
    }
    case 326340:
    {
        returnValue = F("Wallefelder Str.");
        break;
    }
    case 326341:
    {
        returnValue = F("Walleichstr.");
        break;
    }
    case 326342:
    {
        returnValue = F("Walleitnerstr.");
        break;
    }
    case 326343:
    {
        returnValue = F("Walleitnerweg");
        break;
    }
    case 326344:
    {
        returnValue = F("Wallemer Weg");
        break;
    }
    case 326345:
    {
        returnValue = F("Wallen");
        break;
    }
    case 326346:
    {
        returnValue = F("Wallen-Lienen");
        break;
    }
    case 326347:
    {
        returnValue = F("Wallenbach");
        break;
    }
    case 326348:
    {
        returnValue = F("Wallenbachstr.");
        break;
    }
    case 326349:
    {
        returnValue = F("Wallenborner Weg");
        break;
    }
    case 326350:
    {
        returnValue = F("Wallenbornstr.");
        break;
    }
    case 326351:
    {
        returnValue = F("Wallenbrock");
        break;
    }
    case 326352:
    {
        returnValue = F("Wallenbrook");
        break;
    }
    case 326353:
    {
        returnValue = F("Wallenbrücker Str.");
        break;
    }
    case 326354:
    {
        returnValue = F("Wallenburg");
        break;
    }
    case 326355:
    {
        returnValue = F("Wallenburgdyk");
        break;
    }
    case 326356:
    {
        returnValue = F("Wallenburger Berg");
        break;
    }
    case 326357:
    {
        returnValue = F("Wallenburger Str.");
        break;
    }
    case 326358:
    {
        returnValue = F("Wallenburgstr.");
        break;
    }
    case 326359:
    {
        returnValue = F("Wallenburgweg");
        break;
    }
    case 326360:
    {
        returnValue = F("Wallendorf");
        break;
    }
    case 326361:
    {
        returnValue = F("Wallendorfer Str.");
        break;
    }
    case 326362:
    {
        returnValue = F("Wallendorfer Weg");
        break;
    }
    case 326363:
    {
        returnValue = F("Wallenfelser Str.");
        break;
    }
    case 326364:
    {
        returnValue = F("Wallenfelsstr.");
        break;
    }
    case 326365:
    {
        returnValue = F("Wallengrüner Str.");
        break;
    }
    case 326366:
    {
        returnValue = F("Wallenhauser Str.");
        break;
    }
    case 326367:
    {
        returnValue = F("Wallenhauser Weg");
        break;
    }
    case 326368:
    {
        returnValue = F("Wallenhorster Str.");
        break;
    }
    case 326369:
    {
        returnValue = F("Wallenhorster Weg");
        break;
    }
    case 326370:
    {
        returnValue = F("Wallenreuter Weg");
        break;
    }
    case 326371:
    {
        returnValue = F("Wallenreutherstr.");
        break;
    }
    case 326372:
    {
        returnValue = F("Wallenrodstr.");
        break;
    }
    case 326373:
    {
        returnValue = F("Wallenröder Str.");
        break;
    }
    case 326374:
    {
        returnValue = F("Wallenser Str.");
        break;
    }
    case 326375:
    {
        returnValue = F("Wallensiepen");
        break;
    }
    case 326376:
    {
        returnValue = F("Wallensteig");
        break;
    }
    case 326377:
    {
        returnValue = F("Wallensteige");
        break;
    }
    case 326378:
    {
        returnValue = F("Wallenstein-Passage");
        break;
    }
    case 326379:
    {
        returnValue = F("Wallensteiner Weg");
        break;
    }
    case 326380:
    {
        returnValue = F("Wallensteinslager");
        break;
    }
    case 326381:
    {
        returnValue = F("Wallensteinstr.");
        break;
    }
    case 326382:
    {
        returnValue = F("Wallensteinweg");
        break;
    }
    case 326383:
    {
        returnValue = F("Wallenstr.");
        break;
    }
    case 326384:
    {
        returnValue = F("Wallensulz");
        break;
    }
    case 326385:
    {
        returnValue = F("Wallenthaler Str.");
        break;
    }
    case 326386:
    {
        returnValue = F("Wallenthalerhöhe");
        break;
    }
    case 326387:
    {
        returnValue = F("Wallenweg");
        break;
    }
    case 326388:
    {
        returnValue = F("Waller Bahnhof");
        break;
    }
    case 326389:
    {
        returnValue = F("Waller Dorfstr.");
        break;
    }
    case 326390:
    {
        returnValue = F("Waller Esch");
        break;
    }
    case 326391:
    {
        returnValue = F("Waller Friedhofstr.");
        break;
    }
    case 326392:
    {
        returnValue = F("Waller Heerstr.");
        break;
    }
    case 326393:
    {
        returnValue = F("Waller Heuweg");
        break;
    }
    case 326394:
    {
        returnValue = F("Waller Lehmweg");
        break;
    }
    case 326395:
    {
        returnValue = F("Waller Mitte");
        break;
    }
    case 326396:
    {
        returnValue = F("Waller Moorweg");
        break;
    }
    case 326397:
    {
        returnValue = F("Waller Park");
        break;
    }
    case 326398:
    {
        returnValue = F("Waller Ring");
        break;
    }
    case 326399:
    {
        returnValue = F("Waller Stieg");
        break;
    }
    case 326400:
    {
        returnValue = F("Waller Str.");
        break;
    }
    case 326401:
    {
        returnValue = F("Waller Umweltpädagogik Projekt");
        break;
    }
    case 326402:
    {
        returnValue = F("Waller Weg");
        break;
    }
    case 326403:
    {
        returnValue = F("Waller-Marsch-Weg");
        break;
    }
    case 326404:
    {
        returnValue = F("Wallerdorfer Str.");
        break;
    }
    case 326405:
    {
        returnValue = F("Wallererstr.");
        break;
    }
    case 326406:
    {
        returnValue = F("Wallerfangener Str.");
        break;
    }
    case 326407:
    {
        returnValue = F("Wallerfanger Str.");
        break;
    }
    case 326408:
    {
        returnValue = F("Wallerfanger Weg");
        break;
    }
    case 326409:
    {
        returnValue = F("Wallerfeld");
        break;
    }
    case 326410:
    {
        returnValue = F("Wallerfeldstr.");
        break;
    }
    case 326411:
    {
        returnValue = F("Wallerhausener Str.");
        break;
    }
    case 326412:
    {
        returnValue = F("Wallering");
        break;
    }
    case 326413:
    {
        returnValue = F("Wallernhäuser Str.");
        break;
    }
    case 326414:
    {
        returnValue = F("Wallersbacher Weg");
        break;
    }
    case 326415:
    {
        returnValue = F("Wallersberg");
        break;
    }
    case 326416:
    {
        returnValue = F("Wallersdorfer Steig");
        break;
    }
    case 326417:
    {
        returnValue = F("Wallersdorfer Str.");
        break;
    }
    case 326418:
    {
        returnValue = F("Wallersdorfermoos");
        break;
    }
    case 326419:
    {
        returnValue = F("Wallersgasse");
        break;
    }
    case 326420:
    {
        returnValue = F("Wallersheimer Str.");
        break;
    }
    case 326421:
    {
        returnValue = F("Wallersheimer Weg");
        break;
    }
    case 326422:
    {
        returnValue = F("Wallersstr.");
        break;
    }
    case 326423:
    {
        returnValue = F("Wallersteigweg");
        break;
    }
    case 326424:
    {
        returnValue = F("Wallersteinstr.");
        break;
    }
    case 326425:
    {
        returnValue = F("Wallersteinweg");
        break;
    }
    case 326426:
    {
        returnValue = F("Wallerstr.");
        break;
    }
    case 326427:
    {
        returnValue = F("Wallerstädter Str.");
        break;
    }
    case 326428:
    {
        returnValue = F("Wallertheimer Str.");
        break;
    }
    case 326429:
    {
        returnValue = F("Wallertshofener Str.");
        break;
    }
    case 326430:
    {
        returnValue = F("Wallerweg");
        break;
    }
    case 326431:
    {
        returnValue = F("Walleshauser Str.");
        break;
    }
    case 326432:
    {
        returnValue = F("Walleterstr.");
        break;
    }
    case 326433:
    {
        returnValue = F("Wallfahrerweg");
        break;
    }
    case 326434:
    {
        returnValue = F("Wallfahrt");
        break;
    }
    case 326435:
    {
        returnValue = F("Wallfahrter Weg");
        break;
    }
    case 326436:
    {
        returnValue = F("Wallfahrtsanlage");
        break;
    }
    case 326437:
    {
        returnValue = F("Wallfahrtskottenweg");
        break;
    }
    case 326438:
    {
        returnValue = F("Wallfahrtsstr.");
        break;
    }
    case 326439:
    {
        returnValue = F("Wallfahrtsteich");
        break;
    }
    case 326440:
    {
        returnValue = F("Wallfahrtstr.");
        break;
    }
    case 326441:
    {
        returnValue = F("Wallfahrtsweg");
        break;
    }
    case 326442:
    {
        returnValue = F("Wallfahrtswegle");
        break;
    }
    case 326443:
    {
        returnValue = F("Wallfriedsweg");
        break;
    }
    case 326444:
    {
        returnValue = F("Wallfurth");
        break;
    }
    case 326445:
    {
        returnValue = F("Wallgap");
        break;
    }
    case 326446:
    {
        returnValue = F("Wallgarten");
        break;
    }
    case 326447:
    {
        returnValue = F("Wallgartenstr.");
        break;
    }
    case 326448:
    {
        returnValue = F("Wallgasse");
        break;
    }
    case 326449:
    {
        returnValue = F("Wallgauer Weg");
        break;
    }
    case 326450:
    {
        returnValue = F("Wallgraben");
        break;
    }
    case 326451:
    {
        returnValue = F("Wallgrabenbrücke");
        break;
    }
    case 326452:
    {
        returnValue = F("Wallgrabenpromenade");
        break;
    }
    case 326453:
    {
        returnValue = F("Wallgrabenstr.");
        break;
    }
    case 326454:
    {
        returnValue = F("Wallgrund");
        break;
    }
    case 326455:
    {
        returnValue = F("Wallgutstr.");
        break;
    }
    case 326456:
    {
        returnValue = F("Wallgärten");
        break;
    }
    case 326457:
    {
        returnValue = F("Wallgärtenstr.");
        break;
    }
    case 326458:
    {
        returnValue = F("Wallgäßchen");
        break;
    }
    case 326459:
    {
        returnValue = F("Wallhalber Str.");
        break;
    }
    case 326460:
    {
        returnValue = F("Wallhalla");
        break;
    }
    case 326461:
    {
        returnValue = F("Wallhausenstr.");
        break;
    }
    case 326462:
    {
        returnValue = F("Wallhauser Str.");
        break;
    }
    case 326463:
    {
        returnValue = F("Wallhecke");
        break;
    }
    case 326464:
    {
        returnValue = F("Wallheckenring");
        break;
    }
    case 326465:
    {
        returnValue = F("Wallheckenstr.");
        break;
    }
    case 326466:
    {
        returnValue = F("Wallheckenweg");
        break;
    }
    case 326467:
    {
        returnValue = F("Wallheckstr.");
        break;
    }
    case 326468:
    {
        returnValue = F("Wallhegge");
        break;
    }
    case 326469:
    {
        returnValue = F("Wallheide");
        break;
    }
    case 326470:
    {
        returnValue = F("Wallhof");
        break;
    }
    case 326471:
    {
        returnValue = F("Wallholzredder");
        break;
    }
    case 326472:
    {
        returnValue = F("Wallhorn");
        break;
    }
    case 326473:
    {
        returnValue = F("Wallhäuser Str.");
        break;
    }
    case 326474:
    {
        returnValue = F("Wallhäuser Weg");
        break;
    }
    case 326475:
    {
        returnValue = F("Wallhöfener Kirchweg");
        break;
    }
    case 326476:
    {
        returnValue = F("Wallhöfener Str.");
        break;
    }
    case 326477:
    {
        returnValue = F("Wallhöfer Weg");
        break;
    }
    case 326478:
    {
        returnValue = F("Wallicher Landstr.");
        break;
    }
    case 326479:
    {
        returnValue = F("Wallicher Weg");
        break;
    }
    case 326480:
    {
        returnValue = F("Walligrabenweg");
        break;
    }
    case 326481:
    {
        returnValue = F("Wallinghausener Gaste");
        break;
    }
    case 326482:
    {
        returnValue = F("Wallinghausener Ring");
        break;
    }
    case 326483:
    {
        returnValue = F("Wallinghausener Str.");
        break;
    }
    case 326484:
    {
        returnValue = F("Wallings");
        break;
    }
    case 326485:
    {
        returnValue = F("Wallingser Weg");
        break;
    }
    case 326486:
    {
        returnValue = F("Walliser Str.");
        break;
    }
    case 326487:
    {
        returnValue = F("Walliser Weg");
        break;
    }
    case 326488:
    {
        returnValue = F("Wallitzer Weg");
        break;
    }
    case 326489:
    {
        returnValue = F("Wallizer Waldweg");
        break;
    }
    case 326490:
    {
        returnValue = F("Wallkofen");
        break;
    }
    case 326491:
    {
        returnValue = F("Wallmannaue");
        break;
    }
    case 326492:
    {
        returnValue = F("Wallmannstr.");
        break;
    }
    case 326493:
    {
        returnValue = F("Wallmannsweg");
        break;
    }
    case 326494:
    {
        returnValue = F("Wallmannweg");
        break;
    }
    case 326495:
    {
        returnValue = F("Wallmei");
        break;
    }
    case 326496:
    {
        returnValue = F("Wallmeier");
        break;
    }
    case 326497:
    {
        returnValue = F("Wallmeisterstr.");
        break;
    }
    case 326498:
    {
        returnValue = F("Wallmenacher Weg");
        break;
    }
    case 326499:
    {
        returnValue = F("Wallmenrother Str.");
        break;
    }
    case 326500:
    {
        returnValue = F("Wallmenwiese");
        break;
    }
    case 326501:
    {
        returnValue = F("Wallmerbacher Weg");
        break;
    }
    case 326502:
    {
        returnValue = F("Wallmerhole");
        break;
    }
    case 326503:
    {
        returnValue = F("Wallmerkamp");
        break;
    }
    case 326504:
    {
        returnValue = F("Wallmersbacher Str.");
        break;
    }
    case 326505:
    {
        returnValue = F("Wallmersbacher Weg");
        break;
    }
    case 326506:
    {
        returnValue = F("Wallmersberger Weg");
        break;
    }
    case 326507:
    {
        returnValue = F("Wallmerstr.");
        break;
    }
    case 326508:
    {
        returnValue = F("Wallmodener Str.");
        break;
    }
    case 326509:
    {
        returnValue = F("Wallmodenstr.");
        break;
    }
    case 326510:
    {
        returnValue = F("Wallmodenweg");
        break;
    }
    case 326511:
    {
        returnValue = F("Wallmoning");
        break;
    }
    case 326512:
    {
        returnValue = F("Wallmow");
        break;
    }
    case 326513:
    {
        returnValue = F("Wallner");
        break;
    }
    case 326514:
    {
        returnValue = F("Wallnerberg");
        break;
    }
    case 326515:
    {
        returnValue = F("Wallnergasse");
        break;
    }
    case 326516:
    {
        returnValue = F("Wallnerlände");
        break;
    }
    case 326517:
    {
        returnValue = F("Wallnerstr.");
        break;
    }
    case 326518:
    {
        returnValue = F("Wallneyer Str.");
        break;
    }
    case 326519:
    {
        returnValue = F("Wallnsdorf A");
        break;
    }
    case 326520:
    {
        returnValue = F("Wallnsdorf B");
        break;
    }
    case 326521:
    {
        returnValue = F("Wallnsdorf C");
        break;
    }
    case 326522:
    {
        returnValue = F("Wallnsdorf D");
        break;
    }
    case 326523:
    {
        returnValue = F("Wallnsdorf E");
        break;
    }
    case 326524:
    {
        returnValue = F("Wallnsdorf F");
        break;
    }
    case 326525:
    {
        returnValue = F("Wallnsdorf G");
        break;
    }
    case 326526:
    {
        returnValue = F("Wallnsdorf H");
        break;
    }
    case 326527:
    {
        returnValue = F("Wallnsdorf K");
        break;
    }
    case 326528:
    {
        returnValue = F("Wallnsdorf L");
        break;
    }
    case 326529:
    {
        returnValue = F("Wallnstr.");
        break;
    }
    case 326530:
    {
        returnValue = F("Wallnußallee");
        break;
    }
    case 326531:
    {
        returnValue = F("Wallock");
        break;
    }
    case 326532:
    {
        returnValue = F("Wallonenstr.");
        break;
    }
    case 326533:
    {
        returnValue = F("Wallonenweg");
        break;
    }
    case 326534:
    {
        returnValue = F("Wallonerberg");
        break;
    }
    case 326535:
    {
        returnValue = F("Walloniestr.");
        break;
    }
    case 326536:
    {
        returnValue = F("Wallonischer-Ring");
        break;
    }
    case 326537:
    {
        returnValue = F("Wallotstr.");
        break;
    }
    case 326538:
    {
        returnValue = F("Wallpforte");
        break;
    }
    case 326539:
    {
        returnValue = F("Wallplatz");
        break;
    }
    case 326540:
    {
        returnValue = F("Wallpromenade");
        break;
    }
    case 326541:
    {
        returnValue = F("Wallrabenhof");
        break;
    }
    case 326542:
    {
        returnValue = F("Wallrabensteiner Str.");
        break;
    }
    case 326543:
    {
        returnValue = F("Wallrabestr.");
        break;
    }
    case 326544:
    {
        returnValue = F("Wallrabser Str.");
        break;
    }
    case 326545:
    {
        returnValue = F("Wallrafstr.");
        break;
    }
    case 326546:
    {
        returnValue = F("Wallrafweg");
        break;
    }
    case 326547:
    {
        returnValue = F("Wallrain");
        break;
    }
    case 326548:
    {
        returnValue = F("Wallrather Weg");
        break;
    }
    case 326549:
    {
        returnValue = F("Wallreckte");
        break;
    }
    case 326550:
    {
        returnValue = F("Wallring");
        break;
    }
    case 326551:
    {
        returnValue = F("Wallroda");
        break;
    }
    case 326552:
    {
        returnValue = F("Wallrodaer Str.");
        break;
    }
    case 326553:
    {
        returnValue = F("Wallrodaer Weg");
        break;
    }
    case 326554:
    {
        returnValue = F("Wallrother Str.");
        break;
    }
    case 326555:
    {
        returnValue = F("Wallrothstr.");
        break;
    }
    case 326556:
    {
        returnValue = F("Wallrund");
        break;
    }
    case 326557:
    {
        returnValue = F("Wallröder Str.");
        break;
    }
    case 326558:
    {
        returnValue = F("Wallsbüll Weg");
        break;
    }
    case 326559:
    {
        returnValue = F("Wallsbüller Weg");
        break;
    }
    case 326560:
    {
        returnValue = F("Wallscheunenweg");
        break;
    }
    case 326561:
    {
        returnValue = F("Wallsenn");
        break;
    }
    case 326562:
    {
        returnValue = F("Wallstadter Str.");
        break;
    }
    case 326563:
    {
        returnValue = F("Wallstege");
        break;
    }
    case 326564:
    {
        returnValue = F("Wallsteinstr.");
        break;
    }
    case 326565:
    {
        returnValue = F("Wallster Gaste");
        break;
    }
    case 326566:
    {
        returnValue = F("Wallster Loog");
        break;
    }
    case 326567:
    {
        returnValue = F("Wallster Postweg");
        break;
    }
    case 326568:
    {
        returnValue = F("Wallster Weg");
        break;
    }
    case 326569:
    {
        returnValue = F("Wallstieg");
        break;
    }
    case 326570:
    {
        returnValue = F("Wallstr.");
        break;
    }
    case 326571:
    {
        returnValue = F("Wallstrasse");
        break;
    }
    case 326572:
    {
        returnValue = F("Wallstädter Weg");
        break;
    }
    case 326573:
    {
        returnValue = F("Walltorstr.");
        break;
    }
    case 326574:
    {
        returnValue = F("Wallufer Str.");
        break;
    }
    case 326575:
    {
        returnValue = F("Wallufstr.");
        break;
    }
    case 326576:
    {
        returnValue = F("Wallum");
        break;
    }
    case 326577:
    {
        returnValue = F("Wallum Weg");
        break;
    }
    case 326578:
    {
        returnValue = F("Wallumer Weg");
        break;
    }
    case 326579:
    {
        returnValue = F("Wallweg");
        break;
    }
    case 326580:
    {
        returnValue = F("Wallweg nach Klein-Heilig-Kreuz");
        break;
    }
    case 326581:
    {
        returnValue = F("Wallwiese");
        break;
    }
    case 326582:
    {
        returnValue = F("Wallwiesenstr.");
        break;
    }
    case 326583:
    {
        returnValue = F("Wallwiesenweg");
        break;
    }
    case 326584:
    {
        returnValue = F("Wallwieser Weg");
        break;
    }
    case 326585:
    {
        returnValue = F("Wallwinkel");
        break;
    }
    case 326586:
    {
        returnValue = F("Wallwitzer Chaussee");
        break;
    }
    case 326587:
    {
        returnValue = F("Wallwitzer Str.");
        break;
    }
    case 326588:
    {
        returnValue = F("Wallwitzhafen");
        break;
    }
    case 326589:
    {
        returnValue = F("Wally-Müller-Str.");
        break;
    }
    case 326590:
    {
        returnValue = F("Wallygaßl");
        break;
    }
    case 326591:
    {
        returnValue = F("Wallyshofer Weg");
        break;
    }
    case 326592:
    {
        returnValue = F("Walläckerweg");
        break;
    }
    case 326593:
    {
        returnValue = F("Wallücke");
        break;
    }
    case 326594:
    {
        returnValue = F("Wallücker Bahndamm");
        break;
    }
    case 326595:
    {
        returnValue = F("Wallücker Bahnweg");
        break;
    }
    case 326596:
    {
        returnValue = F("Wallücker Weg");
        break;
    }
    case 326597:
    {
        returnValue = F("Walmanger");
        break;
    }
    case 326598:
    {
        returnValue = F("Walmbachstr.");
        break;
    }
    case 326599:
    {
        returnValue = F("Walmbergstr.");
        break;
    }
    case 326600:
    {
        returnValue = F("Walmbergsweg");
        break;
    }
    case 326601:
    {
        returnValue = F("Walme");
        break;
    }
    case 326602:
    {
        returnValue = F("Walmenmühle");
        break;
    }
    case 326603:
    {
        returnValue = F("Walmer Weg");
        break;
    }
    case 326604:
    {
        returnValue = F("Walmersgasse");
        break;
    }
    case 326605:
    {
        returnValue = F("Walmeröder Grund");
        break;
    }
    case 326606:
    {
        returnValue = F("Walmestr.");
        break;
    }
    case 326607:
    {
        returnValue = F("Walmeweg");
        break;
    }
    case 326608:
    {
        returnValue = F("Walmsburger Str.");
        break;
    }
    case 326609:
    {
        returnValue = F("Walnussallee");
        break;
    }
    case 326610:
    {
        returnValue = F("Walnusshofsweg");
        break;
    }
    case 326611:
    {
        returnValue = F("Walnussquartier");
        break;
    }
    case 326612:
    {
        returnValue = F("Walnussring");
        break;
    }
    case 326613:
    {
        returnValue = F("Walnussstr.");
        break;
    }
    case 326614:
    {
        returnValue = F("Walnussweg");
        break;
    }
    case 326615:
    {
        returnValue = F("Walnußallee");
        break;
    }
    case 326616:
    {
        returnValue = F("Walnußgarten");
        break;
    }
    case 326617:
    {
        returnValue = F("Walnußring");
        break;
    }
    case 326618:
    {
        returnValue = F("Walnußstr.");
        break;
    }
    case 326619:
    {
        returnValue = F("Walnußweg");
        break;
    }
    case 326620:
    {
        returnValue = F("Walower Str.");
        break;
    }
    case 326621:
    {
        returnValue = F("Walpenreute");
        break;
    }
    case 326622:
    {
        returnValue = F("Walpenreuther Str.");
        break;
    }
    case 326623:
    {
        returnValue = F("Walpenreuther Trail");
        break;
    }
    case 326624:
    {
        returnValue = F("Walpergasse");
        break;
    }
    case 326625:
    {
        returnValue = F("Walpersdorf");
        break;
    }
    case 326626:
    {
        returnValue = F("Walpersdorfer Str.");
        break;
    }
    case 326627:
    {
        returnValue = F("Walpershofer Str.");
        break;
    }
    case 326628:
    {
        returnValue = F("Walpersreuth");
        break;
    }
    case 326629:
    {
        returnValue = F("Walperstettener Str.");
        break;
    }
    case 326630:
    {
        returnValue = F("Walpertalstr.");
        break;
    }
    case 326631:
    {
        returnValue = F("Walpertshofen");
        break;
    }
    case 326632:
    {
        returnValue = F("Walpertshofer Str.");
        break;
    }
    case 326633:
    {
        returnValue = F("Walpertswiesenweg");
        break;
    }
    case 326634:
    {
        returnValue = F("Walperweg");
        break;
    }
    case 326635:
    {
        returnValue = F("Walpkestieg");
        break;
    }
    case 326636:
    {
        returnValue = F("Walpodenstr.");
        break;
    }
    case 326637:
    {
        returnValue = F("Walporzheimer Str.");
        break;
    }
    case 326638:
    {
        returnValue = F("Walpot-Platz");
        break;
    }
    case 326639:
    {
        returnValue = F("Walpurgastr.");
        break;
    }
    case 326640:
    {
        returnValue = F("Walpurgishof");
        break;
    }
    case 326641:
    {
        returnValue = F("Walpurgiskirchhof");
        break;
    }
    case 326642:
    {
        returnValue = F("Walpurgisstr.");
        break;
    }
    case 326643:
    {
        returnValue = F("Walrabenweg");
        break;
    }
    case 326644:
    {
        returnValue = F("Walrabstr.");
        break;
    }
    case 326645:
    {
        returnValue = F("Walradstr.");
        break;
    }
    case 326646:
    {
        returnValue = F("Walrafstr.");
        break;
    }
    case 326647:
    {
        returnValue = F("Walram-von-Salmen-Weg");
        break;
    }
    case 326648:
    {
        returnValue = F("Walramplatz");
        break;
    }
    case 326649:
    {
        returnValue = F("Walramshof");
        break;
    }
    case 326650:
    {
        returnValue = F("Walramsneustr.");
        break;
    }
    case 326651:
    {
        returnValue = F("Walramstr.");
        break;
    }
    case 326652:
    {
        returnValue = F("Walramsweg");
        break;
    }
    case 326653:
    {
        returnValue = F("Walrawenweg");
        break;
    }
    case 326654:
    {
        returnValue = F("Walraweweg");
        break;
    }
    case 326655:
    {
        returnValue = F("Walrodstr.");
        break;
    }
    case 326656:
    {
        returnValue = F("Walsburger Weg");
        break;
    }
    case 326657:
    {
        returnValue = F("Walschbronner Str.");
        break;
    }
    case 326658:
    {
        returnValue = F("Walschenkampsweg");
        break;
    }
    case 326659:
    {
        returnValue = F("Walschlebener Str.");
        break;
    }
    case 326660:
    {
        returnValue = F("Walschleber Str.");
        break;
    }
    case 326661:
    {
        returnValue = F("Walschleber Weg");
        break;
    }
    case 326662:
    {
        returnValue = F("Walsdorfer Str.");
        break;
    }
    case 326663:
    {
        returnValue = F("Walsdorfer Weg");
        break;
    }
    case 326664:
    {
        returnValue = F("Walsdorferstr.");
        break;
    }
    case 326665:
    {
        returnValue = F("Walseder Str.");
        break;
    }
    case 326666:
    {
        returnValue = F("Walseekerstich");
        break;
    }
    case 326667:
    {
        returnValue = F("Walsener Str.");
        break;
    }
    case 326668:
    {
        returnValue = F("Walser Weg");
        break;
    }
    case 326669:
    {
        returnValue = F("Walserkreuz");
        break;
    }
    case 326670:
    {
        returnValue = F("Walserstr.");
        break;
    }
    case 326671:
    {
        returnValue = F("Walsertalweg");
        break;
    }
    case 326672:
    {
        returnValue = F("Walserweg");
        break;
    }
    case 326673:
    {
        returnValue = F("Walsgrund");
        break;
    }
    case 326674:
    {
        returnValue = F("Walshagenstr.");
        break;
    }
    case 326675:
    {
        returnValue = F("Walshauser Str.");
        break;
    }
    case 326676:
    {
        returnValue = F("Walsheimer Str.");
        break;
    }
    case 326677:
    {
        returnValue = F("Walsheimer Weg");
        break;
    }
    case 326678:
    {
        returnValue = F("Walshornstr.");
        break;
    }
    case 326679:
    {
        returnValue = F("Walshorster Str.");
        break;
    }
    case 326680:
    {
        returnValue = F("Walskamp");
        break;
    }
    case 326681:
    {
        returnValue = F("Walslebener Str.");
        break;
    }
    case 326682:
    {
        returnValue = F("Walsmühlener Ende");
        break;
    }
    case 326683:
    {
        returnValue = F("Walsmühler Str.");
        break;
    }
    case 326684:
    {
        returnValue = F("Walsroder Str.");
        break;
    }
    case 326685:
    {
        returnValue = F("Walsroder Weg");
        break;
    }
    case 326686:
    {
        returnValue = F("Walstattstr.");
        break;
    }
    case 326687:
    {
        returnValue = F("Walstedder Str.");
        break;
    }
    case 326688:
    {
        returnValue = F("Walsumer Str.");
        break;
    }
    case 326689:
    {
        returnValue = F("Walsumer Wardtstr.");
        break;
    }
    case 326690:
    {
        returnValue = F("Walsumermarkstr.");
        break;
    }
    case 326691:
    {
        returnValue = F("Waltari-Bergmann-Platz");
        break;
    }
    case 326692:
    {
        returnValue = F("Waltari-Bergmann-Str.");
        break;
    }
    case 326693:
    {
        returnValue = F("Waltbertweg");
        break;
    }
    case 326694:
    {
        returnValue = F("Waltemaths Feld A");
        break;
    }
    case 326695:
    {
        returnValue = F("Waltemaths Feld B");
        break;
    }
    case 326696:
    {
        returnValue = F("Waltemaths Feld C");
        break;
    }
    case 326697:
    {
        returnValue = F("Waltenberg");
        break;
    }
    case 326698:
    {
        returnValue = F("Waltenbergerstr.");
        break;
    }
    case 326699:
    {
        returnValue = F("Waltenbergtunnel");
        break;
    }
    case 326700:
    {
        returnValue = F("Waltenbergweg");
        break;
    }
    case 326701:
    {
        returnValue = F("Waltener Str.");
        break;
    }
    case 326702:
    {
        returnValue = F("Waltenhauser Str.");
        break;
    }
    case 326703:
    {
        returnValue = F("Waltenhofen");
        break;
    }
    case 326704:
    {
        returnValue = F("Waltenried");
        break;
    }
    case 326705:
    {
        returnValue = F("Waltenrieder Str.");
        break;
    }
    case 326706:
    {
        returnValue = F("Waltenweilerstr.");
        break;
    }
    case 326707:
    {
        returnValue = F("Walter Freivogel Park");
        break;
    }
    case 326708:
    {
        returnValue = F("Walter Gemmer Str. (Auf'm Hunzel)");
        break;
    }
    case 326709:
    {
        returnValue = F("Walter Hartmann-Weg");
        break;
    }
    case 326710:
    {
        returnValue = F("Walter Krause Weg");
        break;
    }
    case 326711:
    {
        returnValue = F("Walter Passage");
        break;
    }
    case 326712:
    {
        returnValue = F("Walter Patz Str.");
        break;
    }
    case 326713:
    {
        returnValue = F("Walter Reed Drive");
        break;
    }
    case 326714:
    {
        returnValue = F("Walter Scheel Platz");
        break;
    }
    case 326715:
    {
        returnValue = F("Walter-Abschlag-Weg");
        break;
    }
    case 326716:
    {
        returnValue = F("Walter-Albrecht-Weg");
        break;
    }
    case 326717:
    {
        returnValue = F("Walter-Althoff-Str.");
        break;
    }
    case 326718:
    {
        returnValue = F("Walter-Arendt-Str.");
        break;
    }
    case 326719:
    {
        returnValue = F("Walter-Arnold-Brücke");
        break;
    }
    case 326720:
    {
        returnValue = F("Walter-Arnold-Str.");
        break;
    }
    case 326721:
    {
        returnValue = F("Walter-Baade-Weg");
        break;
    }
    case 326722:
    {
        returnValue = F("Walter-Bachmann-Str.");
        break;
    }
    case 326723:
    {
        returnValue = F("Walter-Bald-Platz");
        break;
    }
    case 326724:
    {
        returnValue = F("Walter-Ballhause-Str.");
        break;
    }
    case 326725:
    {
        returnValue = F("Walter-Bartels-Weg");
        break;
    }
    case 326726:
    {
        returnValue = F("Walter-Barth-Str.");
        break;
    }
    case 326727:
    {
        returnValue = F("Walter-Bauer-Platz");
        break;
    }
    case 326728:
    {
        returnValue = F("Walter-Bauer-Str.");
        break;
    }
    case 326729:
    {
        returnValue = F("Walter-Behning-Str.");
        break;
    }
    case 326730:
    {
        returnValue = F("Walter-Behrendt-Str.");
        break;
    }
    case 326731:
    {
        returnValue = F("Walter-Benjamin-Str.");
        break;
    }
    case 326732:
    {
        returnValue = F("Walter-Benjamin-Weg");
        break;
    }
    case 326733:
    {
        returnValue = F("Walter-Berg-Weg");
        break;
    }
    case 326734:
    {
        returnValue = F("Walter-Bernius-Anlage");
        break;
    }
    case 326735:
    {
        returnValue = F("Walter-Bernius-Str.");
        break;
    }
    case 326736:
    {
        returnValue = F("Walter-Bernstein-Str.");
        break;
    }
    case 326737:
    {
        returnValue = F("Walter-Bernstein-Weg");
        break;
    }
    case 326738:
    {
        returnValue = F("Walter-Beutel-Str.");
        break;
    }
    case 326739:
    {
        returnValue = F("Walter-Biehlman-Str.");
        break;
    }
    case 326740:
    {
        returnValue = F("Walter-Biering-Str.");
        break;
    }
    case 326741:
    {
        returnValue = F("Walter-Bloch-Str.");
        break;
    }
    case 326742:
    {
        returnValue = F("Walter-Block-Str.");
        break;
    }
    case 326743:
    {
        returnValue = F("Walter-Bloem-Ring");
        break;
    }
    case 326744:
    {
        returnValue = F("Walter-Boch-Str.");
        break;
    }
    case 326745:
    {
        returnValue = F("Walter-Bogsch-Str.");
        break;
    }
    case 326746:
    {
        returnValue = F("Walter-Bohle-Weg");
        break;
    }
    case 326747:
    {
        returnValue = F("Walter-Bohman-Str.");
        break;
    }
    case 326748:
    {
        returnValue = F("Walter-Bouhon-Str.");
        break;
    }
    case 326749:
    {
        returnValue = F("Walter-Boßlet-Weg");
        break;
    }
    case 326750:
    {
        returnValue = F("Walter-Braun-Str.");
        break;
    }
    case 326751:
    {
        returnValue = F("Walter-Bruch-Str.");
        break;
    }
    case 326752:
    {
        returnValue = F("Walter-Brutschin-Str.");
        break;
    }
    case 326753:
    {
        returnValue = F("Walter-Bröker-Ring");
        break;
    }
    case 326754:
    {
        returnValue = F("Walter-Bubert-Str.");
        break;
    }
    case 326755:
    {
        returnValue = F("Walter-Butzek-Str.");
        break;
    }
    case 326756:
    {
        returnValue = F("Walter-Bälz-Str.");
        break;
    }
    case 326757:
    {
        returnValue = F("Walter-Bötcher-Str.");
        break;
    }
    case 326758:
    {
        returnValue = F("Walter-Böttcher-Str.");
        break;
    }
    case 326759:
    {
        returnValue = F("Walter-Caroli-Weg");
        break;
    }
    case 326760:
    {
        returnValue = F("Walter-Carstens-Str.");
        break;
    }
    case 326761:
    {
        returnValue = F("Walter-Christoph-Platz");
        break;
    }
    case 326762:
    {
        returnValue = F("Walter-Clauss-Str.");
        break;
    }
    case 326763:
    {
        returnValue = F("Walter-Cordes-Str.");
        break;
    }
    case 326764:
    {
        returnValue = F("Walter-Cramer-Ring");
        break;
    }
    case 326765:
    {
        returnValue = F("Walter-Cramer-Str.");
        break;
    }
    case 326766:
    {
        returnValue = F("Walter-Dahnke-Weg");
        break;
    }
    case 326767:
    {
        returnValue = F("Walter-Dammköhler Str.");
        break;
    }
    case 326768:
    {
        returnValue = F("Walter-Debes-Weg");
        break;
    }
    case 326769:
    {
        returnValue = F("Walter-Dehmel-Str.");
        break;
    }
    case 326770:
    {
        returnValue = F("Walter-Delius-Str.");
        break;
    }
    case 326771:
    {
        returnValue = F("Walter-Demgen-Weg");
        break;
    }
    case 326772:
    {
        returnValue = F("Walter-Dexel-Str.");
        break;
    }
    case 326773:
    {
        returnValue = F("Walter-Diehr-Str.");
        break;
    }
    case 326774:
    {
        returnValue = F("Walter-Diestel-Weg");
        break;
    }
    case 326775:
    {
        returnValue = F("Walter-Dirks-Str.");
        break;
    }
    case 326776:
    {
        returnValue = F("Walter-Dodde-Str.");
        break;
    }
    case 326777:
    {
        returnValue = F("Walter-Dodde-Weg");
        break;
    }
    case 326778:
    {
        returnValue = F("Walter-Dürr-Weg");
        break;
    }
    case 326779:
    {
        returnValue = F("Walter-Eberhard-Loch-Str.");
        break;
    }
    case 326780:
    {
        returnValue = F("Walter-Eckhard-Str.");
        break;
    }
    case 326781:
    {
        returnValue = F("Walter-Eckold-Str.");
        break;
    }
    case 326782:
    {
        returnValue = F("Walter-Ender-Platz");
        break;
    }
    case 326783:
    {
        returnValue = F("Walter-Engelhardt-Weg");
        break;
    }
    case 326784:
    {
        returnValue = F("Walter-Erdmann-Str.");
        break;
    }
    case 326785:
    {
        returnValue = F("Walter-Erich-Schäfer-Weg");
        break;
    }
    case 326786:
    {
        returnValue = F("Walter-Ermisch-Str.");
        break;
    }
    case 326787:
    {
        returnValue = F("Walter-Eucken-Str.");
        break;
    }
    case 326788:
    {
        returnValue = F("Walter-Ewig-Weg");
        break;
    }
    case 326789:
    {
        returnValue = F("Walter-Fabinski-Weg");
        break;
    }
    case 326790:
    {
        returnValue = F("Walter-Faller-Weg");
        break;
    }
    case 326791:
    {
        returnValue = F("Walter-Flex-Str.");
        break;
    }
    case 326792:
    {
        returnValue = F("Walter-Flex-Weg");
        break;
    }
    case 326793:
    {
        returnValue = F("Walter-Foerster-Str.");
        break;
    }
    case 326794:
    {
        returnValue = F("Walter-Freitag-Str.");
        break;
    }
    case 326795:
    {
        returnValue = F("Walter-Freund-Weg");
        break;
    }
    case 326796:
    {
        returnValue = F("Walter-Frick-Str.");
        break;
    }
    case 326797:
    {
        returnValue = F("Walter-Frieß-Weg");
        break;
    }
    case 326798:
    {
        returnValue = F("Walter-Fuchs-Weg");
        break;
    }
    case 326799:
    {
        returnValue = F("Walter-Funcke-Str.");
        break;
    }
    case 326800:
    {
        returnValue = F("Walter-Gempp-Str.");
        break;
    }
    case 326801:
    {
        returnValue = F("Walter-Genz-Str.");
        break;
    }
    case 326802:
    {
        returnValue = F("Walter-Georgi-Str.");
        break;
    }
    case 326803:
    {
        returnValue = F("Walter-Georgii-Str.");
        break;
    }
    case 326804:
    {
        returnValue = F("Walter-Gerber-Str.");
        break;
    }
    case 326805:
    {
        returnValue = F("Walter-Gerstenkorn-Str.");
        break;
    }
    case 326806:
    {
        returnValue = F("Walter-Gessner-Str.");
        break;
    }
    case 326807:
    {
        returnValue = F("Walter-Gieseking-Str.");
        break;
    }
    case 326808:
    {
        returnValue = F("Walter-Gordon-Platz");
        break;
    }
    case 326809:
    {
        returnValue = F("Walter-Gotsmann-Str.");
        break;
    }
    case 326810:
    {
        returnValue = F("Walter-Gotsmann-Weg");
        break;
    }
    case 326811:
    {
        returnValue = F("Walter-Griesbach-Platz");
        break;
    }
    case 326812:
    {
        returnValue = F("Walter-Gropius-Allee");
        break;
    }
    case 326813:
    {
        returnValue = F("Walter-Gropius-Ring");
        break;
    }
    case 326814:
    {
        returnValue = F("Walter-Gropius-Str.");
        break;
    }
    case 326815:
    {
        returnValue = F("Walter-Gropius-Weg");
        break;
    }
    case 326816:
    {
        returnValue = F("Walter-Großmann-Allee");
        break;
    }
    case 326817:
    {
        returnValue = F("Walter-Großmann-Weg");
        break;
    }
    case 326818:
    {
        returnValue = F("Walter-Göbel-Weg");
        break;
    }
    case 326819:
    {
        returnValue = F("Walter-Günther-Weg");
        break;
    }
    case 326820:
    {
        returnValue = F("Walter-Haaren-Str.");
        break;
    }
    case 326821:
    {
        returnValue = F("Walter-Haas-Str.");
        break;
    }
    case 326822:
    {
        returnValue = F("Walter-Hagen-Str.");
        break;
    }
    case 326823:
    {
        returnValue = F("Walter-Hallstein-Str.");
        break;
    }
    case 326824:
    {
        returnValue = F("Walter-Hallstein-Weg");
        break;
    }
    case 326825:
    {
        returnValue = F("Walter-Hammer-Ufer");
        break;
    }
    case 326826:
    {
        returnValue = F("Walter-Hans-Schultze-Str.");
        break;
    }
    case 326827:
    {
        returnValue = F("Walter-Hase-Str.");
        break;
    }
    case 326828:
    {
        returnValue = F("Walter-Hauth-Str.");
        break;
    }
    case 326829:
    {
        returnValue = F("Walter-Hege-Weg");
        break;
    }
    case 326830:
    {
        returnValue = F("Walter-Heimig-Stege");
        break;
    }
    case 326831:
    {
        returnValue = F("Walter-Heinze-Str.");
        break;
    }
    case 326832:
    {
        returnValue = F("Walter-Heinzel-Weg");
        break;
    }
    case 326833:
    {
        returnValue = F("Walter-Heise-Str.");
        break;
    }
    case 326834:
    {
        returnValue = F("Walter-Heller-Str.");
        break;
    }
    case 326835:
    {
        returnValue = F("Walter-Helmes-Weg");
        break;
    }
    case 326836:
    {
        returnValue = F("Walter-Hempel-Str.");
        break;
    }
    case 326837:
    {
        returnValue = F("Walter-Hennig-Weg");
        break;
    }
    case 326838:
    {
        returnValue = F("Walter-Hensel-Weg");
        break;
    }
    case 326839:
    {
        returnValue = F("Walter-Hentschel-Str.");
        break;
    }
    case 326840:
    {
        returnValue = F("Walter-Herber-Str.");
        break;
    }
    case 326841:
    {
        returnValue = F("Walter-Herbst-Weg");
        break;
    }
    case 326842:
    {
        returnValue = F("Walter-Herzog-Str.");
        break;
    }
    case 326843:
    {
        returnValue = F("Walter-Hesselbach-Str.");
        break;
    }
    case 326844:
    {
        returnValue = F("Walter-Hochapfel-Str.");
        break;
    }
    case 326845:
    {
        returnValue = F("Walter-Hohmann-Str.");
        break;
    }
    case 326846:
    {
        returnValue = F("Walter-Hohnsbehn-Str.");
        break;
    }
    case 326847:
    {
        returnValue = F("Walter-Hornsteiner-Str.");
        break;
    }
    case 326848:
    {
        returnValue = F("Walter-Husemann-Str.");
        break;
    }
    case 326849:
    {
        returnValue = F("Walter-Häbich-Str.");
        break;
    }
    case 326850:
    {
        returnValue = F("Walter-Höcker-Weg");
        break;
    }
    case 326851:
    {
        returnValue = F("Walter-Höfer-Weg");
        break;
    }
    case 326852:
    {
        returnValue = F("Walter-Hövelmann-Str.");
        break;
    }
    case 326853:
    {
        returnValue = F("Walter-Hülse-Str.");
        break;
    }
    case 326854:
    {
        returnValue = F("Walter-Hümmer-Str.");
        break;
    }
    case 326855:
    {
        returnValue = F("Walter-Ilse-Str.");
        break;
    }
    case 326856:
    {
        returnValue = F("Walter-Jacob-Ring");
        break;
    }
    case 326857:
    {
        returnValue = F("Walter-Janka-Str.");
        break;
    }
    case 326858:
    {
        returnValue = F("Walter-Jansen-Weg");
        break;
    }
    case 326859:
    {
        returnValue = F("Walter-Jasper-Str.");
        break;
    }
    case 326860:
    {
        returnValue = F("Walter-Jost-Str.");
        break;
    }
    case 326861:
    {
        returnValue = F("Walter-Kaesbach-Weg");
        break;
    }
    case 326862:
    {
        returnValue = F("Walter-Kahn-Weg");
        break;
    }
    case 326863:
    {
        returnValue = F("Walter-Karbe-Weg");
        break;
    }
    case 326864:
    {
        returnValue = F("Walter-Karentz-Str.");
        break;
    }
    case 326865:
    {
        returnValue = F("Walter-Kemper-Str.");
        break;
    }
    case 326866:
    {
        returnValue = F("Walter-Klausch-Str.");
        break;
    }
    case 326867:
    {
        returnValue = F("Walter-Klein-Str.");
        break;
    }
    case 326868:
    {
        returnValue = F("Walter-Kleinow-Ring");
        break;
    }
    case 326869:
    {
        returnValue = F("Walter-Klippel-Str.");
        break;
    }
    case 326870:
    {
        returnValue = F("Walter-Kluge-Str.");
        break;
    }
    case 326871:
    {
        returnValue = F("Walter-Knoell-Str.");
        break;
    }
    case 326872:
    {
        returnValue = F("Walter-Knoll-Str.");
        break;
    }
    case 326873:
    {
        returnValue = F("Walter-Knäblein-Str.");
        break;
    }
    case 326874:
    {
        returnValue = F("Walter-Koch-Str.");
        break;
    }
    case 326875:
    {
        returnValue = F("Walter-Kohn-Str.");
        break;
    }
    case 326876:
    {
        returnValue = F("Walter-Kolb-Platz");
        break;
    }
    case 326877:
    {
        returnValue = F("Walter-Kolb-Str.");
        break;
    }
    case 326878:
    {
        returnValue = F("Walter-Kolbenhoff-Str.");
        break;
    }
    case 326879:
    {
        returnValue = F("Walter-Kollo-Str.");
        break;
    }
    case 326880:
    {
        returnValue = F("Walter-Kollo-Weg");
        break;
    }
    case 326881:
    {
        returnValue = F("Walter-Kriebel-Weg");
        break;
    }
    case 326882:
    {
        returnValue = F("Walter-Krumbach-Weg");
        break;
    }
    case 326883:
    {
        returnValue = F("Walter-Krämer-Str.");
        break;
    }
    case 326884:
    {
        returnValue = F("Walter-Kyllmann-Str.");
        break;
    }
    case 326885:
    {
        returnValue = F("Walter-Köhn-Str.");
        break;
    }
    case 326886:
    {
        returnValue = F("Walter-Kübler-Str.");
        break;
    }
    case 326887:
    {
        returnValue = F("Walter-Kühlthau-Weg");
        break;
    }
    case 326888:
    {
        returnValue = F("Walter-Künnemann-Str.");
        break;
    }
    case 326889:
    {
        returnValue = F("Walter-Leese-Str.");
        break;
    }
    case 326890:
    {
        returnValue = F("Walter-Lehmann-Str.");
        break;
    }
    case 326891:
    {
        returnValue = F("Walter-Lehnen-Str.");
        break;
    }
    case 326892:
    {
        returnValue = F("Walter-Leiske-Str.");
        break;
    }
    case 326893:
    {
        returnValue = F("Walter-Lenz-Str.");
        break;
    }
    case 326894:
    {
        returnValue = F("Walter-Liebig-Str.");
        break;
    }
    case 326895:
    {
        returnValue = F("Walter-Looschen-Weg");
        break;
    }
    case 326896:
    {
        returnValue = F("Walter-Lorey Str.");
        break;
    }
    case 326897:
    {
        returnValue = F("Walter-Ludewig-Str.");
        break;
    }
    case 326898:
    {
        returnValue = F("Walter-Ludwig-Str.");
        break;
    }
    case 326899:
    {
        returnValue = F("Walter-Löbering-Str.");
        break;
    }
    case 326900:
    {
        returnValue = F("Walter-Maack-Str.");
        break;
    }
    case 326901:
    {
        returnValue = F("Walter-Markov-Ring");
        break;
    }
    case 326902:
    {
        returnValue = F("Walter-Mayer-Str.");
        break;
    }
    case 326903:
    {
        returnValue = F("Walter-Meckauer-Str.");
        break;
    }
    case 326904:
    {
        returnValue = F("Walter-Meckauer-Weg");
        break;
    }
    case 326905:
    {
        returnValue = F("Walter-Mehnert-Str.");
        break;
    }
    case 326906:
    {
        returnValue = F("Walter-Meindl-Siedlung");
        break;
    }
    case 326907:
    {
        returnValue = F("Walter-Meusel-Str.");
        break;
    }
    case 326908:
    {
        returnValue = F("Walter-Meyer-Weg");
        break;
    }
    case 326909:
    {
        returnValue = F("Walter-Mohr-Ring");
        break;
    }
    case 326910:
    {
        returnValue = F("Walter-Munke-Str.");
        break;
    }
    case 326911:
    {
        returnValue = F("Walter-Möller-Str.");
        break;
    }
    case 326912:
    {
        returnValue = F("Walter-Münch-Str.");
        break;
    }
    case 326913:
    {
        returnValue = F("Walter-Nehb-Brücke");
        break;
    }
    case 326914:
    {
        returnValue = F("Walter-Nernst-Str.");
        break;
    }
    case 326915:
    {
        returnValue = F("Walter-Neumüller-Weg");
        break;
    }
    case 326916:
    {
        returnValue = F("Walter-Nicolai-Str.");
        break;
    }
    case 326917:
    {
        returnValue = F("Walter-Niehoff-Str.");
        break;
    }
    case 326918:
    {
        returnValue = F("Walter-Norrenbrock-Str.");
        break;
    }
    case 326919:
    {
        returnValue = F("Walter-Oehmichen-Str.");
        break;
    }
    case 326920:
    {
        returnValue = F("Walter-Oehmichen-Weg");
        break;
    }
    case 326921:
    {
        returnValue = F("Walter-Oertel-Str.");
        break;
    }
    case 326922:
    {
        returnValue = F("Walter-Ott-Str.");
        break;
    }
    case 326923:
    {
        returnValue = F("Walter-Otto-Str.");
        break;
    }
    case 326924:
    {
        returnValue = F("Walter-Paetzmann-Str.");
        break;
    }
    case 326925:
    {
        returnValue = F("Walter-Pahl-Brücke");
        break;
    }
    case 326926:
    {
        returnValue = F("Walter-Paul-Str.");
        break;
    }
    case 326927:
    {
        returnValue = F("Walter-Pauli-Ring");
        break;
    }
    case 326928:
    {
        returnValue = F("Walter-Peschke-Str.");
        break;
    }
    case 326929:
    {
        returnValue = F("Walter-Peters-Park");
        break;
    }
    case 326930:
    {
        returnValue = F("Walter-Peters-Str.");
        break;
    }
    case 326931:
    {
        returnValue = F("Walter-Peters-Weg");
        break;
    }
    case 326932:
    {
        returnValue = F("Walter-Petri-Ring");
        break;
    }
    case 326933:
    {
        returnValue = F("Walter-Pfützner-Str.");
        break;
    }
    case 326934:
    {
        returnValue = F("Walter-Pintus-Str.");
        break;
    }
    case 326935:
    {
        returnValue = F("Walter-Poller-Str.");
        break;
    }
    case 326936:
    {
        returnValue = F("Walter-Poser-Str.");
        break;
    }
    case 326937:
    {
        returnValue = F("Walter-Posth-Platz");
        break;
    }
    case 326938:
    {
        returnValue = F("Walter-Preh-Str.");
        break;
    }
    case 326939:
    {
        returnValue = F("Walter-Raap-Weg");
        break;
    }
    case 326940:
    {
        returnValue = F("Walter-Rabold-Str.");
        break;
    }
    case 326941:
    {
        returnValue = F("Walter-Ranft-Str.");
        break;
    }
    case 326942:
    {
        returnValue = F("Walter-Rathenau-Platz");
        break;
    }
    case 326943:
    {
        returnValue = F("Walter-Rathenau-Str.");
        break;
    }
    case 326944:
    {
        returnValue = F("Walter-Rauch-Str.");
        break;
    }
    case 326945:
    {
        returnValue = F("Walter-Rein-Str.");
        break;
    }
    case 326946:
    {
        returnValue = F("Walter-Reppe-Str.");
        break;
    }
    case 326947:
    {
        returnValue = F("Walter-Richter-Str.");
        break;
    }
    case 326948:
    {
        returnValue = F("Walter-Rietig-Str.");
        break;
    }
    case 326949:
    {
        returnValue = F("Walter-Rodehack-Str.");
        break;
    }
    case 326950:
    {
        returnValue = F("Walter-Rohloff-Str.");
        break;
    }
    case 326951:
    {
        returnValue = F("Walter-Rohmeis-Str.");
        break;
    }
    case 326952:
    {
        returnValue = F("Walter-Sachsse-Weg");
        break;
    }
    case 326953:
    {
        returnValue = F("Walter-Sartorius-Str.");
        break;
    }
    case 326954:
    {
        returnValue = F("Walter-Sawall-Str.");
        break;
    }
    case 326955:
    {
        returnValue = F("Walter-Saxen-Str.");
        break;
    }
    case 326956:
    {
        returnValue = F("Walter-Schade-Str.");
        break;
    }
    case 326957:
    {
        returnValue = F("Walter-Schatt-Allee");
        break;
    }
    case 326958:
    {
        returnValue = F("Walter-Scheel-Str.");
        break;
    }
    case 326959:
    {
        returnValue = F("Walter-Scheel-Weg");
        break;
    }
    case 326960:
    {
        returnValue = F("Walter-Scheibler-Str.");
        break;
    }
    case 326961:
    {
        returnValue = F("Walter-Schellenberg-Str.");
        break;
    }
    case 326962:
    {
        returnValue = F("Walter-Schießle-Str.");
        break;
    }
    case 326963:
    {
        returnValue = F("Walter-Schimek-Str.");
        break;
    }
    case 326964:
    {
        returnValue = F("Walter-Schlaak-Str.");
        break;
    }
    case 326965:
    {
        returnValue = F("Walter-Schleich-Str.");
        break;
    }
    case 326966:
    {
        returnValue = F("Walter-Schlieper-Weg");
        break;
    }
    case 326967:
    {
        returnValue = F("Walter-Schlosser-Weg");
        break;
    }
    case 326968:
    {
        returnValue = F("Walter-Schmidt-Platz");
        break;
    }
    case 326969:
    {
        returnValue = F("Walter-Schmiedel-Weg");
        break;
    }
    case 326970:
    {
        returnValue = F("Walter-Schneider-Platz");
        break;
    }
    case 326971:
    {
        returnValue = F("Walter-Schneider-Str.");
        break;
    }
    case 326972:
    {
        returnValue = F("Walter-Schneider-Weg");
        break;
    }
    case 326973:
    {
        returnValue = F("Walter-Schottky-Str.");
        break;
    }
    case 326974:
    {
        returnValue = F("Walter-Schrader-Weg");
        break;
    }
    case 326975:
    {
        returnValue = F("Walter-Schulz-Platz");
        break;
    }
    case 326976:
    {
        returnValue = F("Walter-Schulz-Str.");
        break;
    }
    case 326977:
    {
        returnValue = F("Walter-Schwagenscheidt-Platz");
        break;
    }
    case 326978:
    {
        returnValue = F("Walter-Schwagenscheidt-Str.");
        break;
    }
    case 326979:
    {
        returnValue = F("Walter-Schwahn-Str.");
        break;
    }
    case 326980:
    {
        returnValue = F("Walter-Schweter-Str.");
        break;
    }
    case 326981:
    {
        returnValue = F("Walter-Schäffler-Str.");
        break;
    }
    case 326982:
    {
        returnValue = F("Walter-Schönheit-Str.");
        break;
    }
    case 326983:
    {
        returnValue = F("Walter-Schücking-Str.");
        break;
    }
    case 326984:
    {
        returnValue = F("Walter-Sedlmayer-Str.");
        break;
    }
    case 326985:
    {
        returnValue = F("Walter-Sender-Platz");
        break;
    }
    case 326986:
    {
        returnValue = F("Walter-Siegfried-Str.");
        break;
    }
    case 326987:
    {
        returnValue = F("Walter-Sigel-Str.");
        break;
    }
    case 326988:
    {
        returnValue = F("Walter-Simon-Str.");
        break;
    }
    case 326989:
    {
        returnValue = F("Walter-Smolka-Str.");
        break;
    }
    case 326990:
    {
        returnValue = F("Walter-Sommer-Str.");
        break;
    }
    case 326991:
    {
        returnValue = F("Walter-Sondermann-Str.");
        break;
    }
    case 326992:
    {
        returnValue = F("Walter-Speer-Weg");
        break;
    }
    case 326993:
    {
        returnValue = F("Walter-Spiller-Brücke");
        break;
    }
    case 326994:
    {
        returnValue = F("Walter-Spindler-Str.");
        break;
    }
    case 326995:
    {
        returnValue = F("Walter-Steiner-Weg");
        break;
    }
    case 326996:
    {
        returnValue = F("Walter-Stelzle-Str.");
        break;
    }
    case 326997:
    {
        returnValue = F("Walter-Stier-Str.");
        break;
    }
    case 326998:
    {
        returnValue = F("Walter-Stoecker-Str.");
        break;
    }
    case 326999:
    {
        returnValue = F("Walter-Storck-Str.");
        break;
    }
    case 327000:
    {
        returnValue = F("Walter-Strock-Str.");
        break;
    }
    case 327001:
    {
        returnValue = F("Walter-Strumpf-Str.");
        break;
    }
    case 327002:
    {
        returnValue = F("Walter-Stöcker-Str.");
        break;
    }
    case 327003:
    {
        returnValue = F("Walter-Stötzner-Str.");
        break;
    }
    case 327004:
    {
        returnValue = F("Walter-Stößer-Weg");
        break;
    }
    case 327005:
    {
        returnValue = F("Walter-Suchanek-Str.");
        break;
    }
    case 327006:
    {
        returnValue = F("Walter-Süskind-Str.");
        break;
    }
    case 327007:
    {
        returnValue = F("Walter-Tackenberg-Weg");
        break;
    }
    case 327008:
    {
        returnValue = F("Walter-Theil-Str.");
        break;
    }
    case 327009:
    {
        returnValue = F("Walter-Thomas-Weg");
        break;
    }
    case 327010:
    {
        returnValue = F("Walter-Trautmann-Weg");
        break;
    }
    case 327011:
    {
        returnValue = F("Walter-Vetter-Str.");
        break;
    }
    case 327012:
    {
        returnValue = F("Walter-Volkers-Str.");
        break;
    }
    case 327013:
    {
        returnValue = F("Walter-Vögels-Str.");
        break;
    }
    case 327014:
    {
        returnValue = F("Walter-Wagner-Platz");
        break;
    }
    case 327015:
    {
        returnValue = F("Walter-Weg");
        break;
    }
    case 327016:
    {
        returnValue = F("Walter-Welp-Str.");
        break;
    }
    case 327017:
    {
        returnValue = F("Walter-Wenthe-Str.");
        break;
    }
    case 327018:
    {
        returnValue = F("Walter-Werning-Str.");
        break;
    }
    case 327019:
    {
        returnValue = F("Walter-Wetzel-Weg");
        break;
    }
    case 327020:
    {
        returnValue = F("Walter-Weyl-Weg");
        break;
    }
    case 327021:
    {
        returnValue = F("Walter-Wezel-Str.");
        break;
    }
    case 327022:
    {
        returnValue = F("Walter-Wiederhold-Str.");
        break;
    }
    case 327023:
    {
        returnValue = F("Walter-Wilde-Weg");
        break;
    }
    case 327024:
    {
        returnValue = F("Walter-Wilkins-Str.");
        break;
    }
    case 327025:
    {
        returnValue = F("Walter-Winkelmann-Str.");
        break;
    }
    case 327026:
    {
        returnValue = F("Walter-Wirsching-Str.");
        break;
    }
    case 327027:
    {
        returnValue = F("Walter-Wittenstein-Str.");
        break;
    }
    case 327028:
    {
        returnValue = F("Walter-Wolf-Str.");
        break;
    }
    case 327029:
    {
        returnValue = F("Walter-Wörn-Weg");
        break;
    }
    case 327030:
    {
        returnValue = F("Walter-Wülfing-Ufer");
        break;
    }
    case 327031:
    {
        returnValue = F("Walter-Zapp-Str.");
        break;
    }
    case 327032:
    {
        returnValue = F("Walter-Zieseniß-Weg");
        break;
    }
    case 327033:
    {
        returnValue = F("Walter-Ziess-Ring");
        break;
    }
    case 327034:
    {
        returnValue = F("Walter-Zillessen-Weg");
        break;
    }
    case 327035:
    {
        returnValue = F("Walter-de-Pay-Str.");
        break;
    }
    case 327036:
    {
        returnValue = F("Walter-vom-Rath-Str.");
        break;
    }
    case 327037:
    {
        returnValue = F("Walter-von-Hohenegg-Str.");
        break;
    }
    case 327038:
    {
        returnValue = F("Walter-von-Rathenau Str.");
        break;
    }
    case 327039:
    {
        returnValue = F("Walter-von-Vilbell-Str.");
        break;
    }
    case 327040:
    {
        returnValue = F("Walterbachweg");
        break;
    }
    case 327041:
    {
        returnValue = F("Walterberg");
        break;
    }
    case 327042:
    {
        returnValue = F("Walterbergstr.");
        break;
    }
    case 327043:
    {
        returnValue = F("Walterfingerstr.");
        break;
    }
    case 327044:
    {
        returnValue = F("Waltergasse");
        break;
    }
    case 327045:
    {
        returnValue = F("Walterhof");
        break;
    }
    case 327046:
    {
        returnValue = F("Walterhörn");
        break;
    }
    case 327047:
    {
        returnValue = F("Walterichsweg");
        break;
    }
    case 327048:
    {
        returnValue = F("Waltermannstrasse");
        break;
    }
    case 327049:
    {
        returnValue = F("Waltermattstr.");
        break;
    }
    case 327050:
    {
        returnValue = F("Walternienburger Str.");
        break;
    }
    case 327051:
    {
        returnValue = F("Walternweg");
        break;
    }
    case 327052:
    {
        returnValue = F("Walterpfad");
        break;
    }
    case 327053:
    {
        returnValue = F("Walterplatz");
        break;
    }
    case 327054:
    {
        returnValue = F("Walters Rauthweg");
        break;
    }
    case 327055:
    {
        returnValue = F("Waltersauer Str.");
        break;
    }
    case 327056:
    {
        returnValue = F("Waltersbach");
        break;
    }
    case 327057:
    {
        returnValue = F("Waltersbadweg");
        break;
    }
    case 327058:
    {
        returnValue = F("Waltersberg");
        break;
    }
    case 327059:
    {
        returnValue = F("Waltersberger Str.");
        break;
    }
    case 327060:
    {
        returnValue = F("Waltersbergstr.");
        break;
    }
    case 327061:
    {
        returnValue = F("Waltersbergweg");
        break;
    }
    case 327062:
    {
        returnValue = F("Waltersbündt");
        break;
    }
    case 327063:
    {
        returnValue = F("Walterscheid");
        break;
    }
    case 327064:
    {
        returnValue = F("Walterscheid-Müller-Str.");
        break;
    }
    case 327065:
    {
        returnValue = F("Waltersdorf");
        break;
    }
    case 327066:
    {
        returnValue = F("Waltersdorfer Allee");
        break;
    }
    case 327067:
    {
        returnValue = F("Waltersdorfer Bahnhof");
        break;
    }
    case 327068:
    {
        returnValue = F("Waltersdorfer Berg");
        break;
    }
    case 327069:
    {
        returnValue = F("Waltersdorfer Chaussee");
        break;
    }
    case 327070:
    {
        returnValue = F("Waltersdorfer Dorfstr.");
        break;
    }
    case 327071:
    {
        returnValue = F("Waltersdorfer Str.");
        break;
    }
    case 327072:
    {
        returnValue = F("Waltersdorfer Weg");
        break;
    }
    case 327073:
    {
        returnValue = F("Waltersgasse");
        break;
    }
    case 327074:
    {
        returnValue = F("Waltersgraben");
        break;
    }
    case 327075:
    {
        returnValue = F("Waltersgrüner Weg");
        break;
    }
    case 327076:
    {
        returnValue = F("Waltershagen");
        break;
    }
    case 327077:
    {
        returnValue = F("Waltershauser Str.");
        break;
    }
    case 327078:
    {
        returnValue = F("Waltersheide");
        break;
    }
    case 327079:
    {
        returnValue = F("Waltershofen");
        break;
    }
    case 327080:
    {
        returnValue = F("Waltershofener Str.");
        break;
    }
    case 327081:
    {
        returnValue = F("Waltershofer Str.");
        break;
    }
    case 327082:
    {
        returnValue = F("Waltershofer Weg");
        break;
    }
    case 327083:
    {
        returnValue = F("Waltersholznordweg");
        break;
    }
    case 327084:
    {
        returnValue = F("Waltersholzsüdweg");
        break;
    }
    case 327085:
    {
        returnValue = F("Waltershäger Str.");
        break;
    }
    case 327086:
    {
        returnValue = F("Waltershäuser Landstr.");
        break;
    }
    case 327087:
    {
        returnValue = F("Waltershäuser Str.");
        break;
    }
    case 327088:
    {
        returnValue = F("Waltershäuser Weg");
        break;
    }
    case 327089:
    {
        returnValue = F("Waltershäusleweg");
        break;
    }
    case 327090:
    {
        returnValue = F("Waltershöhe");
        break;
    }
    case 327091:
    {
        returnValue = F("Walterskirchener Str.");
        break;
    }
    case 327092:
    {
        returnValue = F("Walterslachstr.");
        break;
    }
    case 327093:
    {
        returnValue = F("Walterslebener Str.");
        break;
    }
    case 327094:
    {
        returnValue = F("Waltersruh");
        break;
    }
    case 327095:
    {
        returnValue = F("Walterstal");
        break;
    }
    case 327096:
    {
        returnValue = F("Walterstr.");
        break;
    }
    case 327097:
    {
        returnValue = F("Waltersweg");
        break;
    }
    case 327098:
    {
        returnValue = F("Waltersweidenstr.");
        break;
    }
    case 327099:
    {
        returnValue = F("Waltersweierweg");
        break;
    }
    case 327100:
    {
        returnValue = F("Waltersweiteweg");
        break;
    }
    case 327101:
    {
        returnValue = F("Walterswiesen");
        break;
    }
    case 327102:
    {
        returnValue = F("Walterthalweg");
        break;
    }
    case 327103:
    {
        returnValue = F("Walterweg");
        break;
    }
    case 327104:
    {
        returnValue = F("Waltgerstr.");
        break;
    }
    case 327105:
    {
        returnValue = F("Waltgerweg");
        break;
    }
    case 327106:
    {
        returnValue = F("Waltharistr.");
        break;
    }
    case 327107:
    {
        returnValue = F("Walthausenstr.");
        break;
    }
    case 327108:
    {
        returnValue = F("Walther-Anthes-Str.");
        break;
    }
    case 327109:
    {
        returnValue = F("Walther-Ausländer-Str.");
        break;
    }
    case 327110:
    {
        returnValue = F("Walther-Bauermeister-Str.");
        break;
    }
    case 327111:
    {
        returnValue = F("Walther-Bauersfeld-Str.");
        break;
    }
    case 327112:
    {
        returnValue = F("Walther-Bender-Str.");
        break;
    }
    case 327113:
    {
        returnValue = F("Walther-Blumenstock-Str.");
        break;
    }
    case 327114:
    {
        returnValue = F("Walther-Borgstette-Str.");
        break;
    }
    case 327115:
    {
        returnValue = F("Walther-Bothe-Str.");
        break;
    }
    case 327116:
    {
        returnValue = F("Walther-Bothe-Weg");
        break;
    }
    case 327117:
    {
        returnValue = F("Walther-Diekmann-Str.");
        break;
    }
    case 327118:
    {
        returnValue = F("Walther-Feld-Str.");
        break;
    }
    case 327119:
    {
        returnValue = F("Walther-Gagg-Weg");
        break;
    }
    case 327120:
    {
        returnValue = F("Walther-Grosse-Ring");
        break;
    }
    case 327121:
    {
        returnValue = F("Walther-Hartmann-Str.");
        break;
    }
    case 327122:
    {
        returnValue = F("Walther-Heim-Str.");
        break;
    }
    case 327123:
    {
        returnValue = F("Walther-Hensel-Str.");
        break;
    }
    case 327124:
    {
        returnValue = F("Walther-Jacobs-Str.");
        break;
    }
    case 327125:
    {
        returnValue = F("Walther-Klemm-Str.");
        break;
    }
    case 327126:
    {
        returnValue = F("Walther-Klemm-Weg");
        break;
    }
    case 327127:
    {
        returnValue = F("Walther-Knoll-Str.");
        break;
    }
    case 327128:
    {
        returnValue = F("Walther-Kohlmann-Str.");
        break;
    }
    case 327129:
    {
        returnValue = F("Walther-Nernst-Str.");
        break;
    }
    case 327130:
    {
        returnValue = F("Walther-Nernst-Weg");
        break;
    }
    case 327131:
    {
        returnValue = F("Walther-Rathenau-Allee");
        break;
    }
    case 327132:
    {
        returnValue = F("Walther-Rathenau-Platz");
        break;
    }
    case 327133:
    {
        returnValue = F("Walther-Rathenau-Str.");
        break;
    }
    case 327134:
    {
        returnValue = F("Walther-Schwarz-Str.");
        break;
    }
    case 327135:
    {
        returnValue = F("Walther-Schücking-Platz");
        break;
    }
    case 327136:
    {
        returnValue = F("Walther-Sudfeldt-Weg");
        break;
    }
    case 327137:
    {
        returnValue = F("Walther-Victor-Str.");
        break;
    }
    case 327138:
    {
        returnValue = F("Walther-Weis-Str.");
        break;
    }
    case 327139:
    {
        returnValue = F("Walther-Wolf-Str.");
        break;
    }
    case 327140:
    {
        returnValue = F("Walther-Wolff-Str.");
        break;
    }
    case 327141:
    {
        returnValue = F("Walther-Zimmermann-Weg");
        break;
    }
    case 327142:
    {
        returnValue = F("Walther-de-Sagher-Str.");
        break;
    }
    case 327143:
    {
        returnValue = F("Walther-von-Cronberg-Platz");
        break;
    }
    case 327144:
    {
        returnValue = F("Walther-von-der-Vogelweide-Str.");
        break;
    }
    case 327145:
    {
        returnValue = F("Walthergasse");
        break;
    }
    case 327146:
    {
        returnValue = F("Walthersdorfer Str.");
        break;
    }
    case 327147:
    {
        returnValue = F("Walthersdorfer Weg");
        break;
    }
    case 327148:
    {
        returnValue = F("Waltherstr.");
        break;
    }
    case 327149:
    {
        returnValue = F("Waltherweg");
        break;
    }
    case 327150:
    {
        returnValue = F("Walting");
        break;
    }
    case 327151:
    {
        returnValue = F("Waltinger Str.");
        break;
    }
    case 327152:
    {
        returnValue = F("Waltingerstr.");
        break;
    }
    case 327153:
    {
        returnValue = F("Waltisrieder Str.");
        break;
    }
    case 327154:
    {
        returnValue = F("Waltjenstr.");
        break;
    }
    case 327155:
    {
        returnValue = F("Waltkunstr.");
        break;
    }
    case 327156:
    {
        returnValue = F("Waltonstr.");
        break;
    }
    case 327157:
    {
        returnValue = F("Waltostr.");
        break;
    }
    case 327158:
    {
        returnValue = F("Waltraud-Füß-Str.");
        break;
    }
    case 327159:
    {
        returnValue = F("Waltraudenstr.");
        break;
    }
    case 327160:
    {
        returnValue = F("Waltraudstr.");
        break;
    }
    case 327161:
    {
        returnValue = F("Waltraudweg");
        break;
    }
    case 327162:
    {
        returnValue = F("Waltraute-Macke-Brüggemann-Str.");
        break;
    }
    case 327163:
    {
        returnValue = F("Waltrichstr.");
        break;
    }
    case 327164:
    {
        returnValue = F("Waltringer Weg");
        break;
    }
    case 327165:
    {
        returnValue = F("Waltringhausener Str.");
        break;
    }
    case 327166:
    {
        returnValue = F("Waltroper Str.");
        break;
    }
    case 327167:
    {
        returnValue = F("Waltrup");
        break;
    }
    case 327168:
    {
        returnValue = F("Waltruper Weg");
        break;
    }
    case 327169:
    {
        returnValue = F("Waltscher Platz");
        break;
    }
    case 327170:
    {
        returnValue = F("Waltzenmüllerstr.");
        break;
    }
    case 327171:
    {
        returnValue = F("Walver Acker");
        break;
    }
    case 327172:
    {
        returnValue = F("Walverdiek");
        break;
    }
    case 327173:
    {
        returnValue = F("Walwanusstr.");
        break;
    }
    case 327174:
    {
        returnValue = F("Walweg");
        break;
    }
    case 327175:
    {
        returnValue = F("Walwenstr.");
        break;
    }
    case 327176:
    {
        returnValue = F("Walxenstr.");
        break;
    }
    case 327177:
    {
        returnValue = F("Walxheimer Str.");
        break;
    }
    case 327178:
    {
        returnValue = F("Walzbachweg");
        break;
    }
    case 327179:
    {
        returnValue = F("Walzburgstr.");
        break;
    }
    case 327180:
    {
        returnValue = F("Walzenbrücke");
        break;
    }
    case 327181:
    {
        returnValue = F("Walzengässle");
        break;
    }
    case 327182:
    {
        returnValue = F("Walzenhalde");
        break;
    }
    case 327183:
    {
        returnValue = F("Walzenhofhangweg");
        break;
    }
    case 327184:
    {
        returnValue = F("Walzenhofweg");
        break;
    }
    case 327185:
    {
        returnValue = F("Walzenmühlenstr.");
        break;
    }
    case 327186:
    {
        returnValue = F("Walzenrather Str.");
        break;
    }
    case 327187:
    {
        returnValue = F("Walzenschlag");
        break;
    }
    case 327188:
    {
        returnValue = F("Walzenstr.");
        break;
    }
    case 327189:
    {
        returnValue = F("Walzenweg");
        break;
    }
    case 327190:
    {
        returnValue = F("Walzenäcker");
        break;
    }
    case 327191:
    {
        returnValue = F("Walzerstr.");
        break;
    }
    case 327192:
    {
        returnValue = F("Walzerweg");
        break;
    }
    case 327193:
    {
        returnValue = F("Walzfeld");
        break;
    }
    case 327194:
    {
        returnValue = F("Walzfelder Str.");
        break;
    }
    case 327195:
    {
        returnValue = F("Walzgasse");
        break;
    }
    case 327196:
    {
        returnValue = F("Walzgraben");
        break;
    }
    case 327197:
    {
        returnValue = F("Walzmühle");
        break;
    }
    case 327198:
    {
        returnValue = F("Walzrute");
        break;
    }
    case 327199:
    {
        returnValue = F("Walzstr.");
        break;
    }
    case 327200:
    {
        returnValue = F("Walzweg");
        break;
    }
    case 327201:
    {
        returnValue = F("Walzwerkerstr.");
        break;
    }
    case 327202:
    {
        returnValue = F("Walzwerkstr.");
        break;
    }
    case 327203:
    {
        returnValue = F("Wambach");
        break;
    }
    case 327204:
    {
        returnValue = F("Wambacher Stich");
        break;
    }
    case 327205:
    {
        returnValue = F("Wambacher Str.");
        break;
    }
    case 327206:
    {
        returnValue = F("Wambacher Weg");
        break;
    }
    case 327207:
    {
        returnValue = F("Wambachring");
        break;
    }
    case 327208:
    {
        returnValue = F("Wambachstr.");
        break;
    }
    case 327209:
    {
        returnValue = F("Wambachtal");
        break;
    }
    case 327210:
    {
        returnValue = F("Wambachweg");
        break;
    }
    case 327211:
    {
        returnValue = F("Wambeler Heide");
        break;
    }
    case 327212:
    {
        returnValue = F("Wambeler Hellweg");
        break;
    }
    case 327213:
    {
        returnValue = F("Wambeler Holz");
        break;
    }
    case 327214:
    {
        returnValue = F("Wambeler Landwehr");
        break;
    }
    case 327215:
    {
        returnValue = F("Wambeler Str.");
        break;
    }
    case 327216:
    {
        returnValue = F("Wambelner Bruch");
        break;
    }
    case 327217:
    {
        returnValue = F("Wambelner Str.");
        break;
    }
    case 327218:
    {
        returnValue = F("Wambertusstr.");
        break;
    }
    case 327219:
    {
        returnValue = F("Wambolt’scher Park");
        break;
    }
    case 327220:
    {
        returnValue = F("Wambrechiesstr.");
        break;
    }
    case 327221:
    {
        returnValue = F("Wamckower Str.");
        break;
    }
    case 327222:
    {
        returnValue = F("Wameler Bach");
        break;
    }
    case 327223:
    {
        returnValue = F("Wameler Berg");
        break;
    }
    case 327224:
    {
        returnValue = F("Wamichstr.");
        break;
    }
    case 327225:
    {
        returnValue = F("Wammersklopferweg");
        break;
    }
    case 327226:
    {
        returnValue = F("Wampachstr.");
        break;
    }
    case 327227:
    {
        returnValue = F("Wampelmühle");
        break;
    }
    case 327228:
    {
        returnValue = F("Wampener Str.");
        break;
    }
    case 327229:
    {
        returnValue = F("Wamper Weg");
        break;
    }
    case 327230:
    {
        returnValue = F("Wamsel");
        break;
    }
    case 327231:
    {
        returnValue = F("Wamsäcker");
        break;
    }
    case 327232:
    {
        returnValue = F("Wanda-Oesau-Str.");
        break;
    }
    case 327233:
    {
        returnValue = F("Wandalbertstr.");
        break;
    }
    case 327234:
    {
        returnValue = F("Wandalenstr.");
        break;
    }
    case 327235:
    {
        returnValue = F("Wandastr.");
        break;
    }
    case 327236:
    {
        returnValue = F("Wandel");
        break;
    }
    case 327237:
    {
        returnValue = F("WandelGarten");
        break;
    }
    case 327238:
    {
        returnValue = F("Wandelbahn");
        break;
    }
    case 327239:
    {
        returnValue = F("Wandelbergsfeld");
        break;
    }
    case 327240:
    {
        returnValue = F("Wandelburgstr.");
        break;
    }
    case 327241:
    {
        returnValue = F("Wandelfeld");
        break;
    }
    case 327242:
    {
        returnValue = F("Wandelgarten");
        break;
    }
    case 327243:
    {
        returnValue = F("Wandelgewann");
        break;
    }
    case 327244:
    {
        returnValue = F("Wandelgraben");
        break;
    }
    case 327245:
    {
        returnValue = F("Wandelgänge");
        break;
    }
    case 327246:
    {
        returnValue = F("Wandelhalle");
        break;
    }
    case 327247:
    {
        returnValue = F("Wandelstr.");
        break;
    }
    case 327248:
    {
        returnValue = F("Wandelsweg");
        break;
    }
    case 327249:
    {
        returnValue = F("Wandelweg");
        break;
    }
    case 327250:
    {
        returnValue = F("Wandelweg Kamp-Lintfort");
        break;
    }
    case 327251:
    {
        returnValue = F("Wandelwege");
        break;
    }
    case 327252:
    {
        returnValue = F("Wandelwege unter Grabkapelle");
        break;
    }
    case 327253:
    {
        returnValue = F("Wander Mountainbike/Fahrradweg zum Moritzberg");
        break;
    }
    case 327254:
    {
        returnValue = F("Wander- + Radweg");
        break;
    }
    case 327255:
    {
        returnValue = F("Wander- und Radweg Tuetsberg");
        break;
    }
    case 327256:
    {
        returnValue = F("Wanderbahn");
        break;
    }
    case 327257:
    {
        returnValue = F("Wanderbrücke Hützhammer");
        break;
    }
    case 327258:
    {
        returnValue = F("Wandererstr.");
        break;
    }
    case 327259:
    {
        returnValue = F("Wandergasse");
        break;
    }
    case 327260:
    {
        returnValue = F("Wanderhofstr.");
        break;
    }
    case 327261:
    {
        returnValue = F("Wanderlinie Steinpilz");
        break;
    }
    case 327262:
    {
        returnValue = F("Wandernen");
        break;
    }
    case 327263:
    {
        returnValue = F("Wanderoogkamp");
        break;
    }
    case 327264:
    {
        returnValue = F("Wanderpark");
        break;
    }
    case 327265:
    {
        returnValue = F("Wanderpfad");
        break;
    }
    case 327266:
    {
        returnValue = F("Wandershofer Weg");
        break;
    }
    case 327267:
    {
        returnValue = F("Wanderslebener Str.");
        break;
    }
    case 327268:
    {
        returnValue = F("Wandersleber Siedlung");
        break;
    }
    case 327269:
    {
        returnValue = F("Wandersleber Str.");
        break;
    }
    case 327270:
    {
        returnValue = F("Wandersleber Weg");
        break;
    }
    case 327271:
    {
        returnValue = F("Wandersmannstr.");
        break;
    }
    case 327272:
    {
        returnValue = F("Wandersteig");
        break;
    }
    case 327273:
    {
        returnValue = F("Wanderstr.");
        break;
    }
    case 327274:
    {
        returnValue = F("Wandersweg");
        break;
    }
    case 327275:
    {
        returnValue = F("Wanderuper Str.");
        break;
    }
    case 327276:
    {
        returnValue = F("Wanderuper Weg");
        break;
    }
    case 327277:
    {
        returnValue = F("Wanderweg");
        break;
    }
    case 327278:
    {
        returnValue = F("Wanderweg \"Anklamer Stadtbruch");
        break;
    }
    case 327279:
    {
        returnValue = F("Wanderweg \"B6");
        break;
    }
    case 327280:
    {
        returnValue = F("Wanderweg \"Gässchen\" - Alter Doschützer Kirchsteig");
        break;
    }
    case 327281:
    {
        returnValue = F("Wanderweg - Singletrail");
        break;
    }
    case 327282:
    {
        returnValue = F("Wanderweg 1");
        break;
    }
    case 327283:
    {
        returnValue = F("Wanderweg 10");
        break;
    }
    case 327284:
    {
        returnValue = F("Wanderweg 11");
        break;
    }
    case 327285:
    {
        returnValue = F("Wanderweg 152");
        break;
    }
    case 327286:
    {
        returnValue = F("Wanderweg 157");
        break;
    }
    case 327287:
    {
        returnValue = F("Wanderweg 2");
        break;
    }
    case 327288:
    {
        returnValue = F("Wanderweg 2 Hinterhof");
        break;
    }
    case 327289:
    {
        returnValue = F("Wanderweg 28J/K");
        break;
    }
    case 327290:
    {
        returnValue = F("Wanderweg 3");
        break;
    }
    case 327291:
    {
        returnValue = F("Wanderweg 4");
        break;
    }
    case 327292:
    {
        returnValue = F("Wanderweg 4 - Höhenweg");
        break;
    }
    case 327293:
    {
        returnValue = F("Wanderweg 43");
        break;
    }
    case 327294:
    {
        returnValue = F("Wanderweg 45a");
        break;
    }
    case 327295:
    {
        returnValue = F("Wanderweg 5");
        break;
    }
    case 327296:
    {
        returnValue = F("Wanderweg 7");
        break;
    }
    case 327297:
    {
        returnValue = F("Wanderweg 8");
        break;
    }
    case 327298:
    {
        returnValue = F("Wanderweg 9");
        break;
    }
    case 327299:
    {
        returnValue = F("Wanderweg A1, A2");
        break;
    }
    case 327300:
    {
        returnValue = F("Wanderweg A2");
        break;
    }
    case 327301:
    {
        returnValue = F("Wanderweg Albrechtshaus-Birkenmoor");
        break;
    }
    case 327302:
    {
        returnValue = F("Wanderweg Allrode-Güntersberge");
        break;
    }
    case 327303:
    {
        returnValue = F("Wanderweg Allrode-Stiege/Güntersberge");
        break;
    }
    case 327304:
    {
        returnValue = F("Wanderweg Am Falkenstein");
        break;
    }
    case 327305:
    {
        returnValue = F("Wanderweg Bewohnte Landschaft");
        break;
    }
    case 327306:
    {
        returnValue = F("Wanderweg Bokholt");
        break;
    }
    case 327307:
    {
        returnValue = F("Wanderweg Briedel B1");
        break;
    }
    case 327308:
    {
        returnValue = F("Wanderweg Bäckerloch");
        break;
    }
    case 327309:
    {
        returnValue = F("Wanderweg Extratour Michelsberg");
        break;
    }
    case 327310:
    {
        returnValue = F("Wanderweg Extratour Münnerstadt");
        break;
    }
    case 327311:
    {
        returnValue = F("Wanderweg Felsenpfad");
        break;
    }
    case 327312:
    {
        returnValue = F("Wanderweg Friedrichsbrunn-Viktorshöhe");
        break;
    }
    case 327313:
    {
        returnValue = F("Wanderweg Friedrichshöhe, Bhf Albrechtshof - Stiege");
        break;
    }
    case 327314:
    {
        returnValue = F("Wanderweg Güntersberge-Katzohltal -Breitenstein");
        break;
    }
    case 327315:
    {
        returnValue = F("Wanderweg Güntersberge-Katzsohltal-Breitenstein");
        break;
    }
    case 327316:
    {
        returnValue = F("Wanderweg Güntersberge-Stiege");
        break;
    }
    case 327317:
    {
        returnValue = F("Wanderweg Haigerloch Kloster Kirchberg");
        break;
    }
    case 327318:
    {
        returnValue = F("Wanderweg Harzgerode-Selkemühle");
        break;
    }
    case 327319:
    {
        returnValue = F("Wanderweg Hase / Schmetterling");
        break;
    }
    case 327320:
    {
        returnValue = F("Wanderweg Hase/Wildschwein");
        break;
    }
    case 327321:
    {
        returnValue = F("Wanderweg Hasselfelde-Birkenmoor");
        break;
    }
    case 327322:
    {
        returnValue = F("Wanderweg Hasselfelde-Stiege");
        break;
    }
    case 327323:
    {
        returnValue = F("Wanderweg Heubergbahndamm");
        break;
    }
    case 327324:
    {
        returnValue = F("Wanderweg K");
        break;
    }
    case 327325:
    {
        returnValue = F("Wanderweg Kronsberg-Silberhütte");
        break;
    }
    case 327326:
    {
        returnValue = F("Wanderweg Kränholmwald");
        break;
    }
    case 327327:
    {
        returnValue = F("Wanderweg Lohbrunnen-Trippelberg");
        break;
    }
    case 327328:
    {
        returnValue = F("Wanderweg Lütow");
        break;
    }
    case 327329:
    {
        returnValue = F("Wanderweg Mark. Grün/Weiß");
        break;
    }
    case 327330:
    {
        returnValue = F("Wanderweg Mielkendorf");
        break;
    }
    case 327331:
    {
        returnValue = F("Wanderweg Mühlenweg");
        break;
    }
    case 327332:
    {
        returnValue = F("Wanderweg Nr. 1 & 3");
        break;
    }
    case 327333:
    {
        returnValue = F("Wanderweg Nr. 1 (Heimatverein Puschendorf)");
        break;
    }
    case 327334:
    {
        returnValue = F("Wanderweg Nr. 2");
        break;
    }
    case 327335:
    {
        returnValue = F("Wanderweg Nr. 2 + 4");
        break;
    }
    case 327336:
    {
        returnValue = F("Wanderweg Nr. 3");
        break;
    }
    case 327337:
    {
        returnValue = F("Wanderweg Nr. 3 grün");
        break;
    }
    case 327338:
    {
        returnValue = F("Wanderweg Nr. 6");
        break;
    }
    case 327339:
    {
        returnValue = F("Wanderweg Nr.: 2");
        break;
    }
    case 327340:
    {
        returnValue = F("Wanderweg Panoramaweg");
        break;
    }
    case 327341:
    {
        returnValue = F("Wanderweg Peckatel-Klein Vielen");
        break;
    }
    case 327342:
    {
        returnValue = F("Wanderweg Sauergras");
        break;
    }
    case 327343:
    {
        returnValue = F("Wanderweg Schwenda-Auerberg");
        break;
    }
    case 327344:
    {
        returnValue = F("Wanderweg Silberhütte-Siptenfelde");
        break;
    }
    case 327345:
    {
        returnValue = F("Wanderweg Siptenfelde-Straßberg");
        break;
    }
    case 327346:
    {
        returnValue = F("Wanderweg Stolberg-Krummschlachttal");
        break;
    }
    case 327347:
    {
        returnValue = F("Wanderweg Stolberg-Straßberg");
        break;
    }
    case 327348:
    {
        returnValue = F("Wanderweg Stolzmühle Neudorf");
        break;
    }
    case 327349:
    {
        returnValue = F("Wanderweg Storchsdorf Rottenbach");
        break;
    }
    case 327350:
    {
        returnValue = F("Wanderweg Straßberg-Neudorf");
        break;
    }
    case 327351:
    {
        returnValue = F("Wanderweg W1");
        break;
    }
    case 327352:
    {
        returnValue = F("Wanderweg X1");
        break;
    }
    case 327353:
    {
        returnValue = F("Wanderweg Z11B");
        break;
    }
    case 327354:
    {
        returnValue = F("Wanderweg Zell-Oberentersbach-Nill");
        break;
    }
    case 327355:
    {
        returnValue = F("Wanderweg am Dobbertiner See");
        break;
    }
    case 327356:
    {
        returnValue = F("Wanderweg am Wehr");
        break;
    }
    case 327357:
    {
        returnValue = F("Wanderweg blauer Pfeil");
        break;
    }
    case 327358:
    {
        returnValue = F("Wanderweg nach Steinberg");
        break;
    }
    case 327359:
    {
        returnValue = F("Wanderweg nach Walkersbach");
        break;
    }
    case 327360:
    {
        returnValue = F("Wanderweg ohne Treppen");
        break;
    }
    case 327361:
    {
        returnValue = F("Wanderweg um den Gondelteich");
        break;
    }
    case 327362:
    {
        returnValue = F("Wanderweg um den Höchsten");
        break;
    }
    case 327363:
    {
        returnValue = F("Wanderweg von Friedrichsbrunn");
        break;
    }
    case 327364:
    {
        returnValue = F("Wanderweg zu Krolls Panoramablick");
        break;
    }
    case 327365:
    {
        returnValue = F("Wanderweg zum Heilbrünnl");
        break;
    }
    case 327366:
    {
        returnValue = F("Wanderweg zum Königsstuhl");
        break;
    }
    case 327367:
    {
        returnValue = F("Wanderweg zur Beichelsteinalpe");
        break;
    }
    case 327368:
    {
        returnValue = F("Wanderweg übers KIEZ nach Güntersberge");
        break;
    }
    case 327369:
    {
        returnValue = F("Wanderweg4 - Höhenweg");
        break;
    }
    case 327370:
    {
        returnValue = F("Wanderweg: Bad Segeberg/Schackendorf");
        break;
    }
    case 327371:
    {
        returnValue = F("Wanderwegeverbindung aktuell nicht nutzbar");
        break;
    }
    case 327372:
    {
        returnValue = F("Wandfärberstr.");
        break;
    }
    case 327373:
    {
        returnValue = F("Wandhofener Str.");
        break;
    }
    case 327374:
    {
        returnValue = F("Wandhofer Bruch");
        break;
    }
    case 327375:
    {
        returnValue = F("Wandicker Weg");
        break;
    }
    case 327376:
    {
        returnValue = F("Wandjesstr.");
        break;
    }
    case 327377:
    {
        returnValue = F("Wandlhamerstr.");
        break;
    }
    case 327378:
    {
        returnValue = F("Wandlingsweg");
        break;
    }
    case 327379:
    {
        returnValue = F("Wandlitzer Chaussee");
        break;
    }
    case 327380:
    {
        returnValue = F("Wandlitzer Str.");
        break;
    }
    case 327381:
    {
        returnValue = F("Wandlitzstr.");
        break;
    }
    case 327382:
    {
        returnValue = F("Wandlungsbreite");
        break;
    }
    case 327383:
    {
        returnValue = F("Wandmacherstiege");
        break;
    }
    case 327384:
    {
        returnValue = F("Wandplattensiedlung");
        break;
    }
    case 327385:
    {
        returnValue = F("Wandrahmpark");
        break;
    }
    case 327386:
    {
        returnValue = F("Wandrahmstr.");
        break;
    }
    case 327387:
    {
        returnValue = F("Wandrumer Str.");
        break;
    }
    case 327388:
    {
        returnValue = F("Wandsbeker Ring");
        break;
    }
    case 327389:
    {
        returnValue = F("Wandsbeker Stieg");
        break;
    }
    case 327390:
    {
        returnValue = F("Wandsbeker Str.");
        break;
    }
    case 327391:
    {
        returnValue = F("Wandschicht");
        break;
    }
    case 327392:
    {
        returnValue = F("Wandstr.");
        break;
    }
    case 327393:
    {
        returnValue = F("Wandsweg");
        break;
    }
    case 327394:
    {
        returnValue = F("Wandtshofweg");
        break;
    }
    case 327395:
    {
        returnValue = F("Wandweg");
        break;
    }
    case 327396:
    {
        returnValue = F("Wanebachstr.");
        break;
    }
    case 327397:
    {
        returnValue = F("Waneckerweg");
        break;
    }
    case 327398:
    {
        returnValue = F("Wanfrieder Landstr.");
        break;
    }
    case 327399:
    {
        returnValue = F("Wanfrieder Schlagd");
        break;
    }
    case 327400:
    {
        returnValue = F("Wanfrieder Str.");
        break;
    }
    case 327401:
    {
        returnValue = F("Wang");
        break;
    }
    case 327402:
    {
        returnValue = F("Wangardstr.");
        break;
    }
    case 327403:
    {
        returnValue = F("Wangelin Ausbau");
        break;
    }
    case 327404:
    {
        returnValue = F("Wangelinweg");
        break;
    }
    case 327405:
    {
        returnValue = F("Wangelister Feld");
        break;
    }
    case 327406:
    {
        returnValue = F("Wangelister Str.");
        break;
    }
    case 327407:
    {
        returnValue = F("Wangelkow");
        break;
    }
    case 327408:
    {
        returnValue = F("Wangen");
        break;
    }
    case 327409:
    {
        returnValue = F("Wangenbergweg");
        break;
    }
    case 327410:
    {
        returnValue = F("Wangenblick");
        break;
    }
    case 327411:
    {
        returnValue = F("Wangener Grund");
        break;
    }
    case 327412:
    {
        returnValue = F("Wangener Höhenweg");
        break;
    }
    case 327413:
    {
        returnValue = F("Wangener Kelterplatz");
        break;
    }
    case 327414:
    {
        returnValue = F("Wangener Marktplatz");
        break;
    }
    case 327415:
    {
        returnValue = F("Wangener Str.");
        break;
    }
    case 327416:
    {
        returnValue = F("Wangener Weg");
        break;
    }
    case 327417:
    {
        returnValue = F("Wangengraben");
        break;
    }
    case 327418:
    {
        returnValue = F("Wangenheimer Gasse");
        break;
    }
    case 327419:
    {
        returnValue = F("Wangenheimer Str.");
        break;
    }
    case 327420:
    {
        returnValue = F("Wangenheimer Tor");
        break;
    }
    case 327421:
    {
        returnValue = F("Wangenheimer Weg");
        break;
    }
    case 327422:
    {
        returnValue = F("Wangenheimstr.");
        break;
    }
    case 327423:
    {
        returnValue = F("Wangenhof");
        break;
    }
    case 327424:
    {
        returnValue = F("Wangenhofer Str.");
        break;
    }
    case 327425:
    {
        returnValue = F("Wangenmühle");
        break;
    }
    case 327426:
    {
        returnValue = F("Wangensahler Weg");
        break;
    }
    case 327427:
    {
        returnValue = F("Wangenstr.");
        break;
    }
    case 327428:
    {
        returnValue = F("Wangenweg");
        break;
    }
    case 327429:
    {
        returnValue = F("Wanger Neurieder Geräumt");
        break;
    }
    case 327430:
    {
        returnValue = F("Wanger Str.");
        break;
    }
    case 327431:
    {
        returnValue = F("Wanger Weg");
        break;
    }
    case 327432:
    {
        returnValue = F("Wanger-Mösl-Str.");
        break;
    }
    case 327433:
    {
        returnValue = F("Wangerbergweg");
        break;
    }
    case 327434:
    {
        returnValue = F("Wangergasse");
        break;
    }
    case 327435:
    {
        returnValue = F("Wangerhaldenweg");
        break;
    }
    case 327436:
    {
        returnValue = F("Wangering");
        break;
    }
    case 327437:
    {
        returnValue = F("Wangerlandstr.");
        break;
    }
    case 327438:
    {
        returnValue = F("Wangerlochweg");
        break;
    }
    case 327439:
    {
        returnValue = F("Wangerländer Str.");
        break;
    }
    case 327440:
    {
        returnValue = F("Wangerländische Str.");
        break;
    }
    case 327441:
    {
        returnValue = F("Wangern");
        break;
    }
    case 327442:
    {
        returnValue = F("Wangerooger Str.");
        break;
    }
    case 327443:
    {
        returnValue = F("Wangerooger Weg");
        break;
    }
    case 327444:
    {
        returnValue = F("Wangeroogerstr.");
        break;
    }
    case 327445:
    {
        returnValue = F("Wangeroogestr.");
        break;
    }
    case 327446:
    {
        returnValue = F("Wangeroogeweg");
        break;
    }
    case 327447:
    {
        returnValue = F("Wangersener Str.");
        break;
    }
    case 327448:
    {
        returnValue = F("Wangerstr.");
        break;
    }
    case 327449:
    {
        returnValue = F("Wangertweg");
        break;
    }
    case 327450:
    {
        returnValue = F("Wangerweg");
        break;
    }
    case 327451:
    {
        returnValue = F("Wangeweg");
        break;
    }
    case 327452:
    {
        returnValue = F("Wanglerstr.");
        break;
    }
    case 327453:
    {
        returnValue = F("Wangstr.");
        break;
    }
    case 327454:
    {
        returnValue = F("Wanheimer Str.");
        break;
    }
    case 327455:
    {
        returnValue = F("Wanhödener Str.");
        break;
    }
    case 327456:
    {
        returnValue = F("Wanhödener Weg");
        break;
    }
    case 327457:
    {
        returnValue = F("Waningstr.");
        break;
    }
    case 327458:
    {
        returnValue = F("Wank");
        break;
    }
    case 327459:
    {
        returnValue = F("Wankbahnstr.");
        break;
    }
    case 327460:
    {
        returnValue = F("Wankelburgsweg");
        break;
    }
    case 327461:
    {
        returnValue = F("Wankelgasse");
        break;
    }
    case 327462:
    {
        returnValue = F("Wankelstr.");
        break;
    }
    case 327463:
    {
        returnValue = F("Wankendorfer Str.");
        break;
    }
    case 327464:
    {
        returnValue = F("Wankendorfer Weg");
        break;
    }
    case 327465:
    {
        returnValue = F("Wankgasse");
        break;
    }
    case 327466:
    {
        returnValue = F("Wankheimer Str.");
        break;
    }
    case 327467:
    {
        returnValue = F("Wankheimer Täle");
        break;
    }
    case 327468:
    {
        returnValue = F("Wankleite");
        break;
    }
    case 327469:
    {
        returnValue = F("Wankmüllerstr.");
        break;
    }
    case 327470:
    {
        returnValue = F("Wankstr.");
        break;
    }
    case 327471:
    {
        returnValue = F("Wankumer Landstr.");
        break;
    }
    case 327472:
    {
        returnValue = F("Wankumer Str.");
        break;
    }
    case 327473:
    {
        returnValue = F("Wankweg");
        break;
    }
    case 327474:
    {
        returnValue = F("Wanloer Str.");
        break;
    }
    case 327475:
    {
        returnValue = F("Wannackerstr.");
        break;
    }
    case 327476:
    {
        returnValue = F("Wannackerweg");
        break;
    }
    case 327477:
    {
        returnValue = F("Wannauweg");
        break;
    }
    case 327478:
    {
        returnValue = F("Wannbach");
        break;
    }
    case 327479:
    {
        returnValue = F("Wannbacher Weg");
        break;
    }
    case 327480:
    {
        returnValue = F("Wannbackenweg");
        break;
    }
    case 327481:
    {
        returnValue = F("Wannbornstr.");
        break;
    }
    case 327482:
    {
        returnValue = F("Wanne");
        break;
    }
    case 327483:
    {
        returnValue = F("Wannebachstr.");
        break;
    }
    case 327484:
    {
        returnValue = F("Wanneblick");
        break;
    }
    case 327485:
    {
        returnValue = F("Wanneckweg");
        break;
    }
    case 327486:
    {
        returnValue = F("Wannefeld");
        break;
    }
    case 327487:
    {
        returnValue = F("Wannefelder Str.");
        break;
    }
    case 327488:
    {
        returnValue = F("Wannekamp");
        break;
    }
    case 327489:
    {
        returnValue = F("Wannemattweg");
        break;
    }
    case 327490:
    {
        returnValue = F("Wannen");
        break;
    }
    case 327491:
    {
        returnValue = F("Wannen-Weg");
        break;
    }
    case 327492:
    {
        returnValue = F("Wannenbachstr.");
        break;
    }
    case 327493:
    {
        returnValue = F("Wannenbachweg");
        break;
    }
    case 327494:
    {
        returnValue = F("Wannenberg");
        break;
    }
    case 327495:
    {
        returnValue = F("Wannenbergstr.");
        break;
    }
    case 327496:
    {
        returnValue = F("Wannenbergweg");
        break;
    }
    case 327497:
    {
        returnValue = F("Wannenblick");
        break;
    }
    case 327498:
    {
        returnValue = F("Wannenbruchweg");
        break;
    }
    case 327499:
    {
        returnValue = F("Wannenbuckel");
        break;
    }
    case 327500:
    {
        returnValue = F("Wannenebeneweg");
        break;
    }
    case 327501:
    {
        returnValue = F("Wannenfeld");
        break;
    }
    case 327502:
    {
        returnValue = F("Wannengasse");
        break;
    }
    case 327503:
    {
        returnValue = F("Wannengraben");
        break;
    }
    case 327504:
    {
        returnValue = F("Wannengrenzweg");
        break;
    }
    case 327505:
    {
        returnValue = F("Wannengrund");
        break;
    }
    case 327506:
    {
        returnValue = F("Wannengrundweg");
        break;
    }
    case 327507:
    {
        returnValue = F("Wannengässchen");
        break;
    }
    case 327508:
    {
        returnValue = F("Wannenhaldenweg");
        break;
    }
    case 327509:
    {
        returnValue = F("Wannenhauweg");
        break;
    }
    case 327510:
    {
        returnValue = F("Wannenhof");
        break;
    }
    case 327511:
    {
        returnValue = F("Wannenhofweg");
        break;
    }
    case 327512:
    {
        returnValue = F("Wannenhäulesweg");
        break;
    }
    case 327513:
    {
        returnValue = F("Wannenhöhenweg");
        break;
    }
    case 327514:
    {
        returnValue = F("Wannenkopfweg");
        break;
    }
    case 327515:
    {
        returnValue = F("Wannenmachergässle");
        break;
    }
    case 327516:
    {
        returnValue = F("Wannenmacherstr.");
        break;
    }
    case 327517:
    {
        returnValue = F("Wannenmacherweg");
        break;
    }
    case 327518:
    {
        returnValue = F("Wannenrain");
        break;
    }
    case 327519:
    {
        returnValue = F("Wannenrückenweg");
        break;
    }
    case 327520:
    {
        returnValue = F("Wannenschleifweg");
        break;
    }
    case 327521:
    {
        returnValue = F("Wannensteig");
        break;
    }
    case 327522:
    {
        returnValue = F("Wannenstr.");
        break;
    }
    case 327523:
    {
        returnValue = F("Wannensträßle");
        break;
    }
    case 327524:
    {
        returnValue = F("Wannental");
        break;
    }
    case 327525:
    {
        returnValue = F("Wannentalweg");
        break;
    }
    case 327526:
    {
        returnValue = F("Wannenwaldweg");
        break;
    }
    case 327527:
    {
        returnValue = F("Wannenweg");
        break;
    }
    case 327528:
    {
        returnValue = F("Wannenwinkel");
        break;
    }
    case 327529:
    {
        returnValue = F("Wannenäckerstr.");
        break;
    }
    case 327530:
    {
        returnValue = F("Wanner Markt");
        break;
    }
    case 327531:
    {
        returnValue = F("Wanner Str.");
        break;
    }
    case 327532:
    {
        returnValue = F("Wannerbruchstr.");
        break;
    }
    case 327533:
    {
        returnValue = F("Wannerhof");
        break;
    }
    case 327534:
    {
        returnValue = F("Wannersberg");
        break;
    }
    case 327535:
    {
        returnValue = F("Wannersdorf");
        break;
    }
    case 327536:
    {
        returnValue = F("Wannersdorfer Str.");
        break;
    }
    case 327537:
    {
        returnValue = F("Wannerspergerstr.");
        break;
    }
    case 327538:
    {
        returnValue = F("Wannerstr.");
        break;
    }
    case 327539:
    {
        returnValue = F("Wannerweg");
        break;
    }
    case 327540:
    {
        returnValue = F("Wannestr.");
        break;
    }
    case 327541:
    {
        returnValue = F("Wannewaldweg");
        break;
    }
    case 327542:
    {
        returnValue = F("Wanneweg");
        break;
    }
    case 327543:
    {
        returnValue = F("Wannewitz");
        break;
    }
    case 327544:
    {
        returnValue = F("Wanneystr.");
        break;
    }
    case 327545:
    {
        returnValue = F("Wanngasse");
        break;
    }
    case 327546:
    {
        returnValue = F("Wannhaldenweg");
        break;
    }
    case 327547:
    {
        returnValue = F("Wannichener Weg");
        break;
    }
    case 327548:
    {
        returnValue = F("Wannigweg");
        break;
    }
    case 327549:
    {
        returnValue = F("Wanninchener Str.");
        break;
    }
    case 327550:
    {
        returnValue = F("Wanningerstr.");
        break;
    }
    case 327551:
    {
        returnValue = F("Wanningerweg");
        break;
    }
    case 327552:
    {
        returnValue = F("Wanningsroda");
        break;
    }
    case 327553:
    {
        returnValue = F("Wannisweg");
        break;
    }
    case 327554:
    {
        returnValue = F("Wannkopfstr.");
        break;
    }
    case 327555:
    {
        returnValue = F("Wannmacherstr.");
        break;
    }
    case 327556:
    {
        returnValue = F("Wannratt");
        break;
    }
    case 327557:
    {
        returnValue = F("Wannschneise");
        break;
    }
    case 327558:
    {
        returnValue = F("Wannseebogen");
        break;
    }
    case 327559:
    {
        returnValue = F("Wannseestr.");
        break;
    }
    case 327560:
    {
        returnValue = F("Wannstadt");
        break;
    }
    case 327561:
    {
        returnValue = F("Wannsweg");
        break;
    }
    case 327562:
    {
        returnValue = F("Wannweg");
        break;
    }
    case 327563:
    {
        returnValue = F("Wannweiler Str.");
        break;
    }
    case 327564:
    {
        returnValue = F("Wannwicker Str.");
        break;
    }
    case 327565:
    {
        returnValue = F("Wanraiweg");
        break;
    }
    case 327566:
    {
        returnValue = F("Wanratt");
        break;
    }
    case 327567:
    {
        returnValue = F("Wansbeckstr.");
        break;
    }
    case 327568:
    {
        returnValue = F("Wansdorfer Chaussee");
        break;
    }
    case 327569:
    {
        returnValue = F("Wansdorfer Dorfstr.");
        break;
    }
    case 327570:
    {
        returnValue = F("Wansdorfer Str.");
        break;
    }
    case 327571:
    {
        returnValue = F("Wansdorfer Weg");
        break;
    }
    case 327572:
    {
        returnValue = F("Wansener Str.");
        break;
    }
    case 327573:
    {
        returnValue = F("Wanslebener Bahnhofstr.");
        break;
    }
    case 327574:
    {
        returnValue = F("Wanslebener Str.");
        break;
    }
    case 327575:
    {
        returnValue = F("Wanslebener Weg");
        break;
    }
    case 327576:
    {
        returnValue = F("Wansleber Weg");
        break;
    }
    case 327577:
    {
        returnValue = F("Wantageweg");
        break;
    }
    case 327578:
    {
        returnValue = F("Wanzengasse");
        break;
    }
    case 327579:
    {
        returnValue = F("Wanzenheimer Mühle");
        break;
    }
    case 327580:
    {
        returnValue = F("Wanzenjammer");
        break;
    }
    case 327581:
    {
        returnValue = F("Wanzenschneise");
        break;
    }
    case 327582:
    {
        returnValue = F("Wanzlebener Allee");
        break;
    }
    case 327583:
    {
        returnValue = F("Wanzlebener Chaussee");
        break;
    }
    case 327584:
    {
        returnValue = F("Wanzlebener Str.");
        break;
    }
    case 327585:
    {
        returnValue = F("Wanzlebener Weg");
        break;
    }
    case 327586:
    {
        returnValue = F("Wanzleber Chaussee");
        break;
    }
    case 327587:
    {
        returnValue = F("Wanzleber Str.");
        break;
    }
    case 327588:
    {
        returnValue = F("Wanzlitzer Chaussee");
        break;
    }
    case 327589:
    {
        returnValue = F("Wanzlitzer Dorfstr.");
        break;
    }
    case 327590:
    {
        returnValue = F("Waoterlaoge");
        break;
    }
    case 327591:
    {
        returnValue = F("Wapeldorfer Str.");
        break;
    }
    case 327592:
    {
        returnValue = F("Wapeler Weg");
        break;
    }
    case 327593:
    {
        returnValue = F("Wapelfelder Weg");
        break;
    }
    case 327594:
    {
        returnValue = F("Wapelstr.");
        break;
    }
    case 327595:
    {
        returnValue = F("Wapelweg");
        break;
    }
    case 327596:
    {
        returnValue = F("Wapitigehege");
        break;
    }
    case 327597:
    {
        returnValue = F("Wapitiweg");
        break;
    }
    case 327598:
    {
        returnValue = F("Waplerstr.");
        break;
    }
    case 327599:
    {
        returnValue = F("Wappachweg");
        break;
    }
    case 327600:
    {
        returnValue = F("Wappbachtal");
        break;
    }
    case 327601:
    {
        returnValue = F("Wappeltshofen");
        break;
    }
    case 327602:
    {
        returnValue = F("Wappenhenschstr.");
        break;
    }
    case 327603:
    {
        returnValue = F("Wappenhorner Weg");
        break;
    }
    case 327604:
    {
        returnValue = F("Wappenschmiedstr.");
        break;
    }
    case 327605:
    {
        returnValue = F("Wappensteinstr.");
        break;
    }
    case 327606:
    {
        returnValue = F("Wappenstr.");
        break;
    }
    case 327607:
    {
        returnValue = F("Wappental");
        break;
    }
    case 327608:
    {
        returnValue = F("Wappersdorfer Str.");
        break;
    }
    case 327609:
    {
        returnValue = F("Wapplerweg");
        break;
    }
    case 327610:
    {
        returnValue = F("Wapschledde");
        break;
    }
    case 327611:
    {
        returnValue = F("Wara Gasse");
        break;
    }
    case 327612:
    {
        returnValue = F("Warabistr.");
        break;
    }
    case 327613:
    {
        returnValue = F("Waranwiesen");
        break;
    }
    case 327614:
    {
        returnValue = F("Warbach");
        break;
    }
    case 327615:
    {
        returnValue = F("Warbachweg");
        break;
    }
    case 327616:
    {
        returnValue = F("Warbeckweg");
        break;
    }
    case 327617:
    {
        returnValue = F("Warbelow");
        break;
    }
    case 327618:
    {
        returnValue = F("Warbelweg");
        break;
    }
    case 327619:
    {
        returnValue = F("Warbende");
        break;
    }
    case 327620:
    {
        returnValue = F("Warbende Ausbau");
        break;
    }
    case 327621:
    {
        returnValue = F("Warbender Str.");
        break;
    }
    case 327622:
    {
        returnValue = F("Warberg");
        break;
    }
    case 327623:
    {
        returnValue = F("Warberger Str.");
        break;
    }
    case 327624:
    {
        returnValue = F("Warbergstr.");
        break;
    }
    case 327625:
    {
        returnValue = F("Warbersche Str.");
        break;
    }
    case 327626:
    {
        returnValue = F("Warbruckstr.");
        break;
    }
    case 327627:
    {
        returnValue = F("Warbsener Str.");
        break;
    }
    case 327628:
    {
        returnValue = F("Warburger Str.");
        break;
    }
    case 327629:
    {
        returnValue = F("Warburger Weg");
        break;
    }
    case 327630:
    {
        returnValue = F("Warburghof");
        break;
    }
    case 327631:
    {
        returnValue = F("Warburgring");
        break;
    }
    case 327632:
    {
        returnValue = F("Warburgweg");
        break;
    }
    case 327633:
    {
        returnValue = F("Warbusch");
        break;
    }
    case 327634:
    {
        returnValue = F("Warchauer Dorfstr.");
        break;
    }
    case 327635:
    {
        returnValue = F("Warchauer Str.");
        break;
    }
    case 327636:
    {
        returnValue = F("Warchauer Weg");
        break;
    }
    case 327637:
    {
        returnValue = F("Wardamm");
        break;
    }
    case 327638:
    {
        returnValue = F("Wardenbacher Str.");
        break;
    }
    case 327639:
    {
        returnValue = F("Wardenburger Str.");
        break;
    }
    case 327640:
    {
        returnValue = F("Wardenburger Weg");
        break;
    }
    case 327641:
    {
        returnValue = F("Wardenburgstr.");
        break;
    }
    case 327642:
    {
        returnValue = F("Wardener Str.");
        break;
    }
    case 327643:
    {
        returnValue = F("Warder Hof");
        break;
    }
    case 327644:
    {
        returnValue = F("Warder Str.");
        break;
    }
    case 327645:
    {
        returnValue = F("Warder Weg");
        break;
    }
    case 327646:
    {
        returnValue = F("Warderdamm");
        break;
    }
    case 327647:
    {
        returnValue = F("Warderredder");
        break;
    }
    case 327648:
    {
        returnValue = F("Wardieksfenne");
        break;
    }
    case 327649:
    {
        returnValue = F("Wardinghausen");
        break;
    }
    case 327650:
    {
        returnValue = F("Wardostr.");
        break;
    }
    case 327651:
    {
        returnValue = F("Wardower Weg");
        break;
    }
    case 327652:
    {
        returnValue = F("Wardstr.");
        break;
    }
    case 327653:
    {
        returnValue = F("Wardtmannspfad");
        break;
    }
    case 327654:
    {
        returnValue = F("Wardtmannsweg");
        break;
    }
    case 327655:
    {
        returnValue = F("Wardtweg");
        break;
    }
    case 327656:
    {
        returnValue = F("Wareham-Kreisel");
        break;
    }
    case 327657:
    {
        returnValue = F("Wareham-Str.");
        break;
    }
    case 327658:
    {
        returnValue = F("Warenbergstr.");
        break;
    }
    case 327659:
    {
        returnValue = F("Warenburgplatz");
        break;
    }
    case 327660:
    {
        returnValue = F("Warenburgstr.");
        break;
    }
    case 327661:
    {
        returnValue = F("Warendorfer Ring");
        break;
    }
    case 327662:
    {
        returnValue = F("Warendorfer Str.");
        break;
    }
    case 327663:
    {
        returnValue = F("Warendorfer Weg");
        break;
    }
    case 327664:
    {
        returnValue = F("Warendorpplatz");
        break;
    }
    case 327665:
    {
        returnValue = F("Warendorpstr.");
        break;
    }
    case 327666:
    {
        returnValue = F("Warener Chaussee");
        break;
    }
    case 327667:
    {
        returnValue = F("Warener Landstr.");
        break;
    }
    case 327668:
    {
        returnValue = F("Warener Str.");
        break;
    }
    case 327669:
    {
        returnValue = F("Warener Weg");
        break;
    }
    case 327670:
    {
        returnValue = F("Warf");
        break;
    }
    case 327671:
    {
        returnValue = F("Warfe");
        break;
    }
    case 327672:
    {
        returnValue = F("Warfenstr.");
        break;
    }
    case 327673:
    {
        returnValue = F("Warfenweg");
        break;
    }
    case 327674:
    {
        returnValue = F("Warfer Feldweg");
        break;
    }
    case 327675:
    {
        returnValue = F("Warfer Str.");
        break;
    }
    case 327676:
    {
        returnValue = F("Warfer Weg");
        break;
    }
    case 327677:
    {
        returnValue = F("Warferdonn");
        break;
    }
    case 327678:
    {
        returnValue = F("Warfeweg");
        break;
    }
    case 327679:
    {
        returnValue = F("Warfkämpe");
        break;
    }
    case 327680:
    {
        returnValue = F("Warflether Helmer");
        break;
    }
    case 327681:
    {
        returnValue = F("Warfpatt");
        break;
    }
    case 327682:
    {
        returnValue = F("Warfreihe");
        break;
    }
    case 327683:
    {
        returnValue = F("Warfsfenne");
        break;
    }
    case 327684:
    {
        returnValue = F("Warfspad");
        break;
    }
    case 327685:
    {
        returnValue = F("Warfstr.");
        break;
    }
    case 327686:
    {
        returnValue = F("Warfsweg");
        break;
    }
    case 327687:
    {
        returnValue = F("Warfsweg I");
        break;
    }
    case 327688:
    {
        returnValue = F("Warfsweg II");
        break;
    }
    case 327689:
    {
        returnValue = F("Warft-Tein");
        break;
    }
    case 327690:
    {
        returnValue = F("Warftenstr.");
        break;
    }
    case 327691:
    {
        returnValue = F("Warfthunsweg");
        break;
    }
    case 327692:
    {
        returnValue = F("Warftstr.");
        break;
    }
    case 327693:
    {
        returnValue = F("Warftweg");
        break;
    }
    case 327694:
    {
        returnValue = F("Wargelweg");
        break;
    }
    case 327695:
    {
        returnValue = F("Wargentiner Str.");
        break;
    }
    case 327696:
    {
        returnValue = F("Wariner Str.");
        break;
    }
    case 327697:
    {
        returnValue = F("Warinstr.");
        break;
    }
    case 327698:
    {
        returnValue = F("Warinusstr.");
        break;
    }
    case 327699:
    {
        returnValue = F("Warkel-Str.");
        break;
    }
    case 327700:
    {
        returnValue = F("Warken-Eckstein-Str.");
        break;
    }
    case 327701:
    {
        returnValue = F("Warken-Eckstein-Weg");
        break;
    }
    case 327702:
    {
        returnValue = F("Warkenbruch");
        break;
    }
    case 327703:
    {
        returnValue = F("Warksmoorstr.");
        break;
    }
    case 327704:
    {
        returnValue = F("Warkstorf");
        break;
    }
    case 327705:
    {
        returnValue = F("Warleberg");
        break;
    }
    case 327706:
    {
        returnValue = F("Warleberger Mühle");
        break;
    }
    case 327707:
    {
        returnValue = F("Warler Weg");
        break;
    }
    case 327708:
    {
        returnValue = F("Warliner Str.");
        break;
    }
    case 327709:
    {
        returnValue = F("Warliner Weg");
        break;
    }
    case 327710:
    {
        returnValue = F("Warlinser Str.");
        break;
    }
    case 327711:
    {
        returnValue = F("Warlitzer Str.");
        break;
    }
    case 327712:
    {
        returnValue = F("Warmbachweg");
        break;
    }
    case 327713:
    {
        returnValue = F("Warmbadsteig");
        break;
    }
    case 327714:
    {
        returnValue = F("Warmbadstr.");
        break;
    }
    case 327715:
    {
        returnValue = F("Warmbadweg");
        break;
    }
    case 327716:
    {
        returnValue = F("Warmberg");
        break;
    }
    case 327717:
    {
        returnValue = F("Warmbronner Str.");
        break;
    }
    case 327718:
    {
        returnValue = F("Warmbronner Trauf");
        break;
    }
    case 327719:
    {
        returnValue = F("Warmbronner Weg");
        break;
    }
    case 327720:
    {
        returnValue = F("Warmbrunner Str.");
        break;
    }
    case 327721:
    {
        returnValue = F("Warmbrunnstr.");
        break;
    }
    case 327722:
    {
        returnValue = F("Warmbüchenkamp");
        break;
    }
    case 327723:
    {
        returnValue = F("Warmbüchenstr.");
        break;
    }
    case 327724:
    {
        returnValue = F("Warmbütteler Weg");
        break;
    }
    case 327725:
    {
        returnValue = F("Warme Gasse");
        break;
    }
    case 327726:
    {
        returnValue = F("Warme Leite");
        break;
    }
    case 327727:
    {
        returnValue = F("Warmeloher Weg");
        break;
    }
    case 327728:
    {
        returnValue = F("Warmemühle");
        break;
    }
    case 327729:
    {
        returnValue = F("Warmensteinacher Str.");
        break;
    }
    case 327730:
    {
        returnValue = F("Warmenweg");
        break;
    }
    case 327731:
    {
        returnValue = F("Warmer Damm");
        break;
    }
    case 327732:
    {
        returnValue = F("Warmer Feld");
        break;
    }
    case 327733:
    {
        returnValue = F("Warmer Krug");
        break;
    }
    case 327734:
    {
        returnValue = F("Warmersdorf");
        break;
    }
    case 327735:
    {
        returnValue = F("Warmersdorfer Str.");
        break;
    }
    case 327736:
    {
        returnValue = F("Warmersweg");
        break;
    }
    case 327737:
    {
        returnValue = F("Warmetalstr.");
        break;
    }
    case 327738:
    {
        returnValue = F("Warmholzberg");
        break;
    }
    case 327739:
    {
        returnValue = F("Warmhörner Deich");
        break;
    }
    case 327740:
    {
        returnValue = F("Warmisrieder Str.");
        break;
    }
    case 327741:
    {
        returnValue = F("Warmkammer");
        break;
    }
    case 327742:
    {
        returnValue = F("Warmkestr.");
        break;
    }
    case 327743:
    {
        returnValue = F("Warmleiten");
        break;
    }
    case 327744:
    {
        returnValue = F("Warmloger Weg");
        break;
    }
    case 327745:
    {
        returnValue = F("Warmsdorfer Str.");
        break;
    }
    case 327746:
    {
        returnValue = F("Warmsdorfer Weg");
        break;
    }
    case 327747:
    {
        returnValue = F("Warmsdorfstr.");
        break;
    }
    case 327748:
    {
        returnValue = F("Warmse");
        break;
    }
    case 327749:
    {
        returnValue = F("Warmser Str.");
        break;
    }
    case 327750:
    {
        returnValue = F("Warmser Weg");
        break;
    }
    case 327751:
    {
        returnValue = F("Warmsrother Grund");
        break;
    }
    case 327752:
    {
        returnValue = F("Warmundstr.");
        break;
    }
    case 327753:
    {
        returnValue = F("Warmuthsreut");
        break;
    }
    case 327754:
    {
        returnValue = F("Warmweiherstr.");
        break;
    }
    case 327755:
    {
        returnValue = F("Warmwässerle");
        break;
    }
    case 327756:
    {
        returnValue = F("Warnbachstr.");
        break;
    }
    case 327757:
    {
        returnValue = F("Warnbachweg");
        break;
    }
    case 327758:
    {
        returnValue = F("Warnberger Weg");
        break;
    }
    case 327759:
    {
        returnValue = F("Warnbergstr.");
        break;
    }
    case 327760:
    {
        returnValue = F("Warnckes Gang");
        break;
    }
    case 327761:
    {
        returnValue = F("Warndtehrenmal");
        break;
    }
    case 327762:
    {
        returnValue = F("Warndtstr.");
        break;
    }
    case 327763:
    {
        returnValue = F("Warneckenfeld");
        break;
    }
    case 327764:
    {
        returnValue = F("Warneckeweg");
        break;
    }
    case 327765:
    {
        returnValue = F("Warneckstr.");
        break;
    }
    case 327766:
    {
        returnValue = F("Warnefelder Str.");
        break;
    }
    case 327767:
    {
        returnValue = F("Warnekingweg");
        break;
    }
    case 327768:
    {
        returnValue = F("Warnemünde-Ring");
        break;
    }
    case 327769:
    {
        returnValue = F("Warnemünder Str.");
        break;
    }
    case 327770:
    {
        returnValue = F("Warnemünder Weg");
        break;
    }
    case 327771:
    {
        returnValue = F("Warner-Allee");
        break;
    }
    case 327772:
    {
        returnValue = F("Warnestr.");
        break;
    }
    case 327773:
    {
        returnValue = F("Warnetalstr.");
        break;
    }
    case 327774:
    {
        returnValue = F("Warngauer Str.");
        break;
    }
    case 327775:
    {
        returnValue = F("Warngauer Weg");
        break;
    }
    case 327776:
    {
        returnValue = F("Warningsacker Weg");
        break;
    }
    case 327777:
    {
        returnValue = F("Warnitzer Str.");
        break;
    }
    case 327778:
    {
        returnValue = F("Warnitzer Weg");
        break;
    }
    case 327779:
    {
        returnValue = F("Warnkenhagener Str.");
        break;
    }
    case 327780:
    {
        returnValue = F("Warnkestr.");
        break;
    }
    case 327781:
    {
        returnValue = F("Warnowallee");
        break;
    }
    case 327782:
    {
        returnValue = F("Warnowaue");
        break;
    }
    case 327783:
    {
        returnValue = F("Warnowblick");
        break;
    }
    case 327784:
    {
        returnValue = F("Warnowenn");
        break;
    }
    case 327785:
    {
        returnValue = F("Warnower Schneise");
        break;
    }
    case 327786:
    {
        returnValue = F("Warnower Str.");
        break;
    }
    case 327787:
    {
        returnValue = F("Warnowerstr.");
        break;
    }
    case 327788:
    {
        returnValue = F("Warnowkihr");
        break;
    }
    case 327789:
    {
        returnValue = F("Warnowrande");
        break;
    }
    case 327790:
    {
        returnValue = F("Warnowstr.");
        break;
    }
    case 327791:
    {
        returnValue = F("Warnowtannen");
        break;
    }
    case 327792:
    {
        returnValue = F("Warnowtannen 1-9");
        break;
    }
    case 327793:
    {
        returnValue = F("Warnowtannen 10-15");
        break;
    }
    case 327794:
    {
        returnValue = F("Warnowtannen 16-28");
        break;
    }
    case 327795:
    {
        returnValue = F("Warnowufer");
        break;
    }
    case 327796:
    {
        returnValue = F("Warnowweg");
        break;
    }
    case 327797:
    {
        returnValue = F("Warnsath");
        break;
    }
    case 327798:
    {
        returnValue = F("Warnsbachtal");
        break;
    }
    case 327799:
    {
        returnValue = F("Warnsdorfer Flügel");
        break;
    }
    case 327800:
    {
        returnValue = F("Warnsdorfer Str.");
        break;
    }
    case 327801:
    {
        returnValue = F("Warnsdorfer Weg");
        break;
    }
    case 327802:
    {
        returnValue = F("Warnstedter Grenzweg");
        break;
    }
    case 327803:
    {
        returnValue = F("Warnstedter Hauptstr.");
        break;
    }
    case 327804:
    {
        returnValue = F("Warnstedter Plan");
        break;
    }
    case 327805:
    {
        returnValue = F("Warnstedter Str.");
        break;
    }
    case 327806:
    {
        returnValue = F("Warnsveldallee");
        break;
    }
    case 327807:
    {
        returnValue = F("Warnsweg");
        break;
    }
    case 327808:
    {
        returnValue = F("Warnthal");
        break;
    }
    case 327809:
    {
        returnValue = F("Waroberg");
        break;
    }
    case 327810:
    {
        returnValue = F("Warolder Str.");
        break;
    }
    case 327811:
    {
        returnValue = F("Warpelstr.");
        break;
    }
    case 327812:
    {
        returnValue = F("Warper Str.");
        break;
    }
    case 327813:
    {
        returnValue = F("Warpke");
        break;
    }
    case 327814:
    {
        returnValue = F("Warrelmannsweg");
        break;
    }
    case 327815:
    {
        returnValue = F("Warrenbergstr.");
        break;
    }
    case 327816:
    {
        returnValue = F("Warringhofer Str.");
        break;
    }
    case 327817:
    {
        returnValue = F("Warrington-Platz");
        break;
    }
    case 327818:
    {
        returnValue = F("Warrweg");
        break;
    }
    case 327819:
    {
        returnValue = F("Warrwiesenweg");
        break;
    }
    case 327820:
    {
        returnValue = F("Warsberger Str.");
        break;
    }
    case 327821:
    {
        returnValue = F("Warsbergerstr.");
        break;
    }
    case 327822:
    {
        returnValue = F("Warsbergstr.");
        break;
    }
    case 327823:
    {
        returnValue = F("Warschauer Str.");
        break;
    }
    case 327824:
    {
        returnValue = F("Warschauer Weg");
        break;
    }
    case 327825:
    {
        returnValue = F("Warsiner Weg");
        break;
    }
    case 327826:
    {
        returnValue = F("Warslebener Str.");
        break;
    }
    case 327827:
    {
        returnValue = F("Warsow");
        break;
    }
    case 327828:
    {
        returnValue = F("Warsower Str.");
        break;
    }
    case 327829:
    {
        returnValue = F("Warsower Weg");
        break;
    }
    case 327830:
    {
        returnValue = F("Warstader Herrlichkeit");
        break;
    }
    case 327831:
    {
        returnValue = F("Warsteiner Kuppe");
        break;
    }
    case 327832:
    {
        returnValue = F("Warsteiner Str.");
        break;
    }
    case 327833:
    {
        returnValue = F("Warsteiner Weg");
        break;
    }
    case 327834:
    {
        returnValue = F("Warstr.");
        break;
    }
    case 327835:
    {
        returnValue = F("Wartaweil");
        break;
    }
    case 327836:
    {
        returnValue = F("Wartaweiler Weg");
        break;
    }
    case 327837:
    {
        returnValue = F("Wartbachstr.");
        break;
    }
    case 327838:
    {
        returnValue = F("Wartbaumstr.");
        break;
    }
    case 327839:
    {
        returnValue = F("Wartberg");
        break;
    }
    case 327840:
    {
        returnValue = F("Wartbergallee");
        break;
    }
    case 327841:
    {
        returnValue = F("Wartbergblick");
        break;
    }
    case 327842:
    {
        returnValue = F("Wartberger Str.");
        break;
    }
    case 327843:
    {
        returnValue = F("Wartbergfeldstr.");
        break;
    }
    case 327844:
    {
        returnValue = F("Wartbergring");
        break;
    }
    case 327845:
    {
        returnValue = F("Wartbergsiedlung");
        break;
    }
    case 327846:
    {
        returnValue = F("Wartbergsteige");
        break;
    }
    case 327847:
    {
        returnValue = F("Wartbergstr.");
        break;
    }
    case 327848:
    {
        returnValue = F("Wartbergsweg");
        break;
    }
    case 327849:
    {
        returnValue = F("Wartbergweg");
        break;
    }
    case 327850:
    {
        returnValue = F("Wartburg");
        break;
    }
    case 327851:
    {
        returnValue = F("Wartburgallee");
        break;
    }
    case 327852:
    {
        returnValue = F("Wartburggang");
        break;
    }
    case 327853:
    {
        returnValue = F("Wartburgplatz");
        break;
    }
    case 327854:
    {
        returnValue = F("Wartburgring");
        break;
    }
    case 327855:
    {
        returnValue = F("Wartburgstr.");
        break;
    }
    case 327856:
    {
        returnValue = F("Wartburgweg");
        break;
    }
    case 327857:
    {
        returnValue = F("Wartbühlstr.");
        break;
    }
    case 327858:
    {
        returnValue = F("Wartbühlweg");
        break;
    }
    case 327859:
    {
        returnValue = F("Warte");
        break;
    }
    case 327860:
    {
        returnValue = F("Warte-Brücke");
        break;
    }
    case 327861:
    {
        returnValue = F("Wartebereich 64");
        break;
    }
    case 327862:
    {
        returnValue = F("Wartebereich 80");
        break;
    }
    case 327863:
    {
        returnValue = F("Wartebereich 85");
        break;
    }
    case 327864:
    {
        returnValue = F("Warteberg");
        break;
    }
    case 327865:
    {
        returnValue = F("Warteberg-Siedlung");
        break;
    }
    case 327866:
    {
        returnValue = F("Wartebergstr.");
        break;
    }
    case 327867:
    {
        returnValue = F("Warteblick");
        break;
    }
    case 327868:
    {
        returnValue = F("Wartebreich Mammut");
        break;
    }
    case 327869:
    {
        returnValue = F("Warteburgweg");
        break;
    }
    case 327870:
    {
        returnValue = F("Wartebuschweg");
        break;
    }
    case 327871:
    {
        returnValue = F("Wartegasse");
        break;
    }
    case 327872:
    {
        returnValue = F("Wartekopp");
        break;
    }
    case 327873:
    {
        returnValue = F("Wartekuppe");
        break;
    }
    case 327874:
    {
        returnValue = F("Wartenberg");
        break;
    }
    case 327875:
    {
        returnValue = F("Wartenberger Str.");
        break;
    }
    case 327876:
    {
        returnValue = F("Wartenberger Weg");
        break;
    }
    case 327877:
    {
        returnValue = F("Wartenbergsiedlung");
        break;
    }
    case 327878:
    {
        returnValue = F("Wartenbergstr.");
        break;
    }
    case 327879:
    {
        returnValue = F("Wartenbergweg");
        break;
    }
    case 327880:
    {
        returnValue = F("Wartenburger Str.");
        break;
    }
    case 327881:
    {
        returnValue = F("Wartenburgstr.");
        break;
    }
    case 327882:
    {
        returnValue = F("Wartenhof");
        break;
    }
    case 327883:
    {
        returnValue = F("Wartepfad");
        break;
    }
    case 327884:
    {
        returnValue = F("Warter Str.");
        break;
    }
    case 327885:
    {
        returnValue = F("Wartering");
        break;
    }
    case 327886:
    {
        returnValue = F("Warteschlange Bootsfahrt");
        break;
    }
    case 327887:
    {
        returnValue = F("Warteschlange Hals über Kopf");
        break;
    }
    case 327888:
    {
        returnValue = F("Warteschlange Höhenflug");
        break;
    }
    case 327889:
    {
        returnValue = F("Warteschlange Maibaum");
        break;
    }
    case 327890:
    {
        returnValue = F("Warteschlange Volldampf");
        break;
    }
    case 327891:
    {
        returnValue = F("Warteschlange Waschzuberrafting");
        break;
    }
    case 327892:
    {
        returnValue = F("Wartesteinbruchweg");
        break;
    }
    case 327893:
    {
        returnValue = F("Wartestr.");
        break;
    }
    case 327894:
    {
        returnValue = F("Warteweg");
        break;
    }
    case 327895:
    {
        returnValue = F("Wartfeld");
        break;
    }
    case 327896:
    {
        returnValue = F("Wartfelder Str.");
        break;
    }
    case 327897:
    {
        returnValue = F("Wartfeldweg");
        break;
    }
    case 327898:
    {
        returnValue = F("Wartgartenmühle");
        break;
    }
    case 327899:
    {
        returnValue = F("Warth");
        break;
    }
    case 327900:
    {
        returnValue = F("Warthaer Dorfstr.");
        break;
    }
    case 327901:
    {
        returnValue = F("Warthaer Str.");
        break;
    }
    case 327902:
    {
        returnValue = F("Warthaer Weg");
        break;
    }
    case 327903:
    {
        returnValue = F("Warthauser Str.");
        break;
    }
    case 327904:
    {
        returnValue = F("Warthauser Weg");
        break;
    }
    case 327905:
    {
        returnValue = F("Warthbergstr.");
        break;
    }
    case 327906:
    {
        returnValue = F("Warthe-Weichsel-Str.");
        break;
    }
    case 327907:
    {
        returnValue = F("Warthebergstr.");
        break;
    }
    case 327908:
    {
        returnValue = F("Warthebergweg");
        break;
    }
    case 327909:
    {
        returnValue = F("Warthegasse");
        break;
    }
    case 327910:
    {
        returnValue = F("Warthegaustr.");
        break;
    }
    case 327911:
    {
        returnValue = F("Warthelandstr.");
        break;
    }
    case 327912:
    {
        returnValue = F("Warther Dorfstr.");
        break;
    }
    case 327913:
    {
        returnValue = F("Warther Str.");
        break;
    }
    case 327914:
    {
        returnValue = F("Warther Weg");
        break;
    }
    case 327915:
    {
        returnValue = F("Warthering");
        break;
    }
    case 327916:
    {
        returnValue = F("Warthesteig");
        break;
    }
    case 327917:
    {
        returnValue = F("Warthestr.");
        break;
    }
    case 327918:
    {
        returnValue = F("Wartheweg");
        break;
    }
    case 327919:
    {
        returnValue = F("Warthfeldsiedlung");
        break;
    }
    case 327920:
    {
        returnValue = F("Warthgarten");
        break;
    }
    case 327921:
    {
        returnValue = F("Warthof");
        break;
    }
    case 327922:
    {
        returnValue = F("Warthofer Weg");
        break;
    }
    case 327923:
    {
        returnValue = F("Warthofweg");
        break;
    }
    case 327924:
    {
        returnValue = F("Warthstr.");
        break;
    }
    case 327925:
    {
        returnValue = F("Warthweg");
        break;
    }
    case 327926:
    {
        returnValue = F("Warthäuser Str.");
        break;
    }
    case 327927:
    {
        returnValue = F("Warthügel Veranstaltungsgelände");
        break;
    }
    case 327928:
    {
        returnValue = F("Warthügelweg");
        break;
    }
    case 327929:
    {
        returnValue = F("Wartiner Chaussee");
        break;
    }
    case 327930:
    {
        returnValue = F("Wartiner Str.");
        break;
    }
    case 327931:
    {
        returnValue = F("Wartiner Weg");
        break;
    }
    case 327932:
    {
        returnValue = F("Wartislawstr.");
        break;
    }
    case 327933:
    {
        returnValue = F("Wartjenstedter Weg");
        break;
    }
    case 327934:
    {
        returnValue = F("Wartkopfweg");
        break;
    }
    case 327935:
    {
        returnValue = F("Wartlaustr.");
        break;
    }
    case 327936:
    {
        returnValue = F("Wartleite");
        break;
    }
    case 327937:
    {
        returnValue = F("Wartleitenweg");
        break;
    }
    case 327938:
    {
        returnValue = F("Wartmauerstr.");
        break;
    }
    case 327939:
    {
        returnValue = F("Wartmauerweg");
        break;
    }
    case 327940:
    {
        returnValue = F("Wartmoning");
        break;
    }
    case 327941:
    {
        returnValue = F("Wartolfstr.");
        break;
    }
    case 327942:
    {
        returnValue = F("Wartsberg");
        break;
    }
    case 327943:
    {
        returnValue = F("Wartschneise");
        break;
    }
    case 327944:
    {
        returnValue = F("Wartstation");
        break;
    }
    case 327945:
    {
        returnValue = F("Wartsteinweg");
        break;
    }
    case 327946:
    {
        returnValue = F("Wartstr.");
        break;
    }
    case 327947:
    {
        returnValue = F("Wartturmstr.");
        break;
    }
    case 327948:
    {
        returnValue = F("Wartturmweg");
        break;
    }
    case 327949:
    {
        returnValue = F("Wartufer");
        break;
    }
    case 327950:
    {
        returnValue = F("Warturmer Heerstr.");
        break;
    }
    case 327951:
    {
        returnValue = F("Warturmer Platz");
        break;
    }
    case 327952:
    {
        returnValue = F("Wartweg");
        break;
    }
    case 327953:
    {
        returnValue = F("Wartwiesen");
        break;
    }
    case 327954:
    {
        returnValue = F("Warweg");
        break;
    }
    case 327955:
    {
        returnValue = F("Warwer Str.");
        break;
    }
    case 327956:
    {
        returnValue = F("Warwickplatz");
        break;
    }
    case 327957:
    {
        returnValue = F("Warzaer Kirchstr.");
        break;
    }
    case 327958:
    {
        returnValue = F("Warzaer Neue Str.");
        break;
    }
    case 327959:
    {
        returnValue = F("Warzaer Str.");
        break;
    }
    case 327960:
    {
        returnValue = F("Warzechastr.");
        break;
    }
    case 327961:
    {
        returnValue = F("Warzenbach");
        break;
    }
    case 327962:
    {
        returnValue = F("Warzenbacher Str.");
        break;
    }
    case 327963:
    {
        returnValue = F("Warzenbachweg");
        break;
    }
    case 327964:
    {
        returnValue = F("Warzenpfad");
        break;
    }
    case 327965:
    {
        returnValue = F("Warzenrieder Str.");
        break;
    }
    case 327966:
    {
        returnValue = F("Warzensteinsträssle");
        break;
    }
    case 327967:
    {
        returnValue = F("Warzer Weg");
        break;
    }
    case 327968:
    {
        returnValue = F("Warzfeldener Str.");
        break;
    }
    case 327969:
    {
        returnValue = F("Wasaburger Weg");
        break;
    }
    case 327970:
    {
        returnValue = F("Wasachstr.");
        break;
    }
    case 327971:
    {
        returnValue = F("Wasag-Park");
        break;
    }
    case 327972:
    {
        returnValue = F("Wasak");
        break;
    }
    case 327973:
    {
        returnValue = F("Wasaplatz");
        break;
    }
    case 327974:
    {
        returnValue = F("Wasastr.");
        break;
    }
    case 327975:
    {
        returnValue = F("Wasbaum");
        break;
    }
    case 327976:
    {
        returnValue = F("Wasbeker Str.");
        break;
    }
    case 327977:
    {
        returnValue = F("Wasbeker Weg");
        break;
    }
    case 327978:
    {
        returnValue = F("Wasbekerfeld");
        break;
    }
    case 327979:
    {
        returnValue = F("Wasberger Weg");
        break;
    }
    case 327980:
    {
        returnValue = F("Wasbucker Weg");
        break;
    }
    case 327981:
    {
        returnValue = F("Wasbütteler Str.");
        break;
    }
    case 327982:
    {
        returnValue = F("Waschau");
        break;
    }
    case 327983:
    {
        returnValue = F("Waschbachgasse");
        break;
    }
    case 327984:
    {
        returnValue = F("Waschbachweg");
        break;
    }
    case 327985:
    {
        returnValue = F("Waschberg");
        break;
    }
    case 327986:
    {
        returnValue = F("Waschbergweg");
        break;
    }
    case 327987:
    {
        returnValue = F("Waschbläu");
        break;
    }
    case 327988:
    {
        returnValue = F("Waschbodenstr.");
        break;
    }
    case 327989:
    {
        returnValue = F("Waschbornweg");
        break;
    }
    case 327990:
    {
        returnValue = F("Waschbrunnen");
        break;
    }
    case 327991:
    {
        returnValue = F("Waschbrunnenweg");
        break;
    }
    case 327992:
    {
        returnValue = F("Waschbrunner Weg");
        break;
    }
    case 327993:
    {
        returnValue = F("Waschbären");
        break;
    }
    case 327994:
    {
        returnValue = F("Waschbärenweg");
        break;
    }
    case 327995:
    {
        returnValue = F("Waschbärweg");
        break;
    }
    case 327996:
    {
        returnValue = F("Waschdorfstr.");
        break;
    }
    case 327997:
    {
        returnValue = F("Waschenbacher Str.");
        break;
    }
    case 327998:
    {
        returnValue = F("Waschensee");
        break;
    }
    case 327999:
    {
        returnValue = F("Wascherweg");
        break;
    }
    case 328000:
    {
        returnValue = F("Waschgasse");
        break;
    }
    case 328001:
    {
        returnValue = F("Waschgraben");
        break;
    }
    case 328002:
    {
        returnValue = F("Waschgrabenallee");
        break;
    }
    case 328003:
    {
        returnValue = F("Waschgrabenstr.");
        break;
    }
    case 328004:
    {
        returnValue = F("Waschgrube");
        break;
    }
    case 328005:
    {
        returnValue = F("Waschgärten");
        break;
    }
    case 328006:
    {
        returnValue = F("Waschhausgässle");
        break;
    }
    case 328007:
    {
        returnValue = F("Waschhausweg");
        break;
    }
    case 328008:
    {
        returnValue = F("Waschholzstr.");
        break;
    }
    case 328009:
    {
        returnValue = F("Waschhorst");
        break;
    }
    case 328010:
    {
        returnValue = F("Waschhorstweg");
        break;
    }
    case 328011:
    {
        returnValue = F("Waschkaulweg");
        break;
    }
    case 328012:
    {
        returnValue = F("Waschlauerweg");
        break;
    }
    case 328013:
    {
        returnValue = F("Waschleither Str.");
        break;
    }
    case 328014:
    {
        returnValue = F("Waschleithner Str.");
        break;
    }
    case 328015:
    {
        returnValue = F("Waschmorgen");
        break;
    }
    case 328016:
    {
        returnValue = F("Waschmühle");
        break;
    }
    case 328017:
    {
        returnValue = F("Waschow Hauptstr.");
        break;
    }
    case 328018:
    {
        returnValue = F("Waschower Chaussee");
        break;
    }
    case 328019:
    {
        returnValue = F("Waschower Dorfstr.");
        break;
    }
    case 328020:
    {
        returnValue = F("Waschower Str.");
        break;
    }
    case 328021:
    {
        returnValue = F("Waschpauhl");
        break;
    }
    case 328022:
    {
        returnValue = F("Waschpohl");
        break;
    }
    case 328023:
    {
        returnValue = F("Waschpohler Weg");
        break;
    }
    case 328024:
    {
        returnValue = F("Waschpöl");
        break;
    }
    case 328025:
    {
        returnValue = F("Waschseeweg");
        break;
    }
    case 328026:
    {
        returnValue = F("Waschwall");
        break;
    }
    case 328027:
    {
        returnValue = F("Waschweg");
        break;
    }
    case 328028:
    {
        returnValue = F("Wasdow");
        break;
    }
    case 328029:
    {
        returnValue = F("Wasemstr.");
        break;
    }
    case 328030:
    {
        returnValue = F("Wasemweg");
        break;
    }
    case 328031:
    {
        returnValue = F("Wasen");
        break;
    }
    case 328032:
    {
        returnValue = F("Wasen- und Fasanenstr. Zugang");
        break;
    }
    case 328033:
    {
        returnValue = F("Wasenacker");
        break;
    }
    case 328034:
    {
        returnValue = F("Wasenacker-Schneise");
        break;
    }
    case 328035:
    {
        returnValue = F("Wasenberger Str.");
        break;
    }
    case 328036:
    {
        returnValue = F("Wasenbergweg");
        break;
    }
    case 328037:
    {
        returnValue = F("Wasenblick");
        break;
    }
    case 328038:
    {
        returnValue = F("Wasenbreite");
        break;
    }
    case 328039:
    {
        returnValue = F("Wasenbuck");
        break;
    }
    case 328040:
    {
        returnValue = F("Wasenbühl");
        break;
    }
    case 328041:
    {
        returnValue = F("Waseneckstr.");
        break;
    }
    case 328042:
    {
        returnValue = F("Waseneckweg");
        break;
    }
    case 328043:
    {
        returnValue = F("Wasenfeld");
        break;
    }
    case 328044:
    {
        returnValue = F("Wasengartenstr.");
        break;
    }
    case 328045:
    {
        returnValue = F("Wasengasse");
        break;
    }
    case 328046:
    {
        returnValue = F("Wasengrund");
        break;
    }
    case 328047:
    {
        returnValue = F("Wasengärten");
        break;
    }
    case 328048:
    {
        returnValue = F("Wasenhaus");
        break;
    }
    case 328049:
    {
        returnValue = F("Wasenheck");
        break;
    }
    case 328050:
    {
        returnValue = F("Wasenhof");
        break;
    }
    case 328051:
    {
        returnValue = F("Wasenhübelstr.");
        break;
    }
    case 328052:
    {
        returnValue = F("Wasenlängen");
        break;
    }
    case 328053:
    {
        returnValue = F("Wasenmeisterei");
        break;
    }
    case 328054:
    {
        returnValue = F("Wasenmeisterweg");
        break;
    }
    case 328055:
    {
        returnValue = F("Wasenmühle");
        break;
    }
    case 328056:
    {
        returnValue = F("Wasenmühlenweg");
        break;
    }
    case 328057:
    {
        returnValue = F("Wasenpark");
        break;
    }
    case 328058:
    {
        returnValue = F("Wasenplatz");
        break;
    }
    case 328059:
    {
        returnValue = F("Wasenrütteweg");
        break;
    }
    case 328060:
    {
        returnValue = F("Wasenschlagweg");
        break;
    }
    case 328061:
    {
        returnValue = F("Wasenspitzweg");
        break;
    }
    case 328062:
    {
        returnValue = F("Wasenstatt");
        break;
    }
    case 328063:
    {
        returnValue = F("Wasenstein");
        break;
    }
    case 328064:
    {
        returnValue = F("Wasenstetter Weg");
        break;
    }
    case 328065:
    {
        returnValue = F("Wasenstr.");
        break;
    }
    case 328066:
    {
        returnValue = F("Wasenstücke");
        break;
    }
    case 328067:
    {
        returnValue = F("Wasental");
        break;
    }
    case 328068:
    {
        returnValue = F("Wasentegernbach");
        break;
    }
    case 328069:
    {
        returnValue = F("Wasentegernbacher Str.");
        break;
    }
    case 328070:
    {
        returnValue = F("Wasenwaldstr.");
        break;
    }
    case 328071:
    {
        returnValue = F("Wasenweg");
        break;
    }
    case 328072:
    {
        returnValue = F("Wasenweiler Str.");
        break;
    }
    case 328073:
    {
        returnValue = F("Wasenweilerstr.");
        break;
    }
    case 328074:
    {
        returnValue = F("Wasenwiesen");
        break;
    }
    case 328075:
    {
        returnValue = F("Wasenäcker");
        break;
    }
    case 328076:
    {
        returnValue = F("Wasenäckerstr.");
        break;
    }
    case 328077:
    {
        returnValue = F("Wasenöschstr.");
        break;
    }
    case 328078:
    {
        returnValue = F("Waseweg");
        break;
    }
    case 328079:
    {
        returnValue = F("Wasewitz");
        break;
    }
    case 328080:
    {
        returnValue = F("Wasgaublick");
        break;
    }
    case 328081:
    {
        returnValue = F("Wasgauring");
        break;
    }
    case 328082:
    {
        returnValue = F("Wasgaustr.");
        break;
    }
    case 328083:
    {
        returnValue = F("Wasgauweg");
        break;
    }
    case 328084:
    {
        returnValue = F("Wasgensteinstr.");
        break;
    }
    case 328085:
    {
        returnValue = F("Wasgenwaldstr.");
        break;
    }
    case 328086:
    {
        returnValue = F("Washington-Kreisel");
        break;
    }
    case 328087:
    {
        returnValue = F("Washingtonallee");
        break;
    }
    case 328088:
    {
        returnValue = F("Washingtonring");
        break;
    }
    case 328089:
    {
        returnValue = F("Washingtonstr.");
        break;
    }
    case 328090:
    {
        returnValue = F("Washingtonweg");
        break;
    }
    case 328091:
    {
        returnValue = F("Wasigensteinstr.");
        break;
    }
    case 328092:
    {
        returnValue = F("Wasingerweg");
        break;
    }
    case 328093:
    {
        returnValue = F("Waslweg");
        break;
    }
    case 328094:
    {
        returnValue = F("Wasmuthäuser Str.");
        break;
    }
    case 328095:
    {
        returnValue = F("Waspenhofweg");
        break;
    }
    case 328096:
    {
        returnValue = F("Wassarium Drakenburg");
        break;
    }
    case 328097:
    {
        returnValue = F("Wassbachweg");
        break;
    }
    case 328098:
    {
        returnValue = F("Wassbergweg");
        break;
    }
    case 328099:
    {
        returnValue = F("Wasseler Str.");
        break;
    }
    case 328100:
    {
        returnValue = F("Wasseler Weg");
        break;
    }
    case 328101:
    {
        returnValue = F("Wassenacher Hohl");
        break;
    }
    case 328102:
    {
        returnValue = F("Wassenacher Str.");
        break;
    }
    case 328103:
    {
        returnValue = F("Wassenacker Hohl");
        break;
    }
    case 328104:
    {
        returnValue = F("Wassenbergdamm");
        break;
    }
    case 328105:
    {
        returnValue = F("Wassenberger Horst");
        break;
    }
    case 328106:
    {
        returnValue = F("Wassenberger Str.");
        break;
    }
    case 328107:
    {
        returnValue = F("Wassenbergstr.");
        break;
    }
    case 328108:
    {
        returnValue = F("Wassenburg");
        break;
    }
    case 328109:
    {
        returnValue = F("Wassenkamp");
        break;
    }
    case 328110:
    {
        returnValue = F("Wassensdorfer Str.");
        break;
    }
    case 328111:
    {
        returnValue = F("Wasser");
        break;
    }
    case 328112:
    {
        returnValue = F("Wasser Ost");
        break;
    }
    case 328113:
    {
        returnValue = F("Wasser von Brachttal (kurz)");
        break;
    }
    case 328114:
    {
        returnValue = F("Wasser- und Schifffahrtsamt");
        break;
    }
    case 328115:
    {
        returnValue = F("Wasser-Info-Park");
        break;
    }
    case 328116:
    {
        returnValue = F("Wasser-route-5");
        break;
    }
    case 328117:
    {
        returnValue = F("Wasserachse");
        break;
    }
    case 328118:
    {
        returnValue = F("Wasseracker");
        break;
    }
    case 328119:
    {
        returnValue = F("Wasserackerstr.");
        break;
    }
    case 328120:
    {
        returnValue = F("Wasserackerweg");
        break;
    }
    case 328121:
    {
        returnValue = F("Wasseralfinger Str.");
        break;
    }
    case 328122:
    {
        returnValue = F("Wasserallee");
        break;
    }
    case 328123:
    {
        returnValue = F("Wasseramselweg");
        break;
    }
    case 328124:
    {
        returnValue = F("Wasserbachstr.");
        break;
    }
    case 328125:
    {
        returnValue = F("Wasserbachtalweg");
        break;
    }
    case 328126:
    {
        returnValue = F("Wasserbank");
        break;
    }
    case 328127:
    {
        returnValue = F("Wasserbankstr.");
        break;
    }
    case 328128:
    {
        returnValue = F("Wasserbarg");
        break;
    }
    case 328129:
    {
        returnValue = F("Wasserbaumweg");
        break;
    }
    case 328130:
    {
        returnValue = F("Wasserberg");
        break;
    }
    case 328131:
    {
        returnValue = F("Wasserbergsbreite");
        break;
    }
    case 328132:
    {
        returnValue = F("Wasserbergsteige");
        break;
    }
    case 328133:
    {
        returnValue = F("Wasserbergstr.");
        break;
    }
    case 328134:
    {
        returnValue = F("Wasserbergweg");
        break;
    }
    case 328135:
    {
        returnValue = F("Wasserbett");
        break;
    }
    case 328136:
    {
        returnValue = F("Wasserbettstr.");
        break;
    }
    case 328137:
    {
        returnValue = F("Wasserbilliger Str.");
        break;
    }
    case 328138:
    {
        returnValue = F("Wasserbreeke");
        break;
    }
    case 328139:
    {
        returnValue = F("Wasserbreite");
        break;
    }
    case 328140:
    {
        returnValue = F("Wasserbrenner");
        break;
    }
    case 328141:
    {
        returnValue = F("Wasserbruck");
        break;
    }
    case 328142:
    {
        returnValue = F("Wasserbrücken-Platz");
        break;
    }
    case 328143:
    {
        returnValue = F("Wasserbucher Weg");
        break;
    }
    case 328144:
    {
        returnValue = F("Wasserburg");
        break;
    }
    case 328145:
    {
        returnValue = F("Wasserburg Günthersleben");
        break;
    }
    case 328146:
    {
        returnValue = F("Wasserburger Feldweg");
        break;
    }
    case 328147:
    {
        returnValue = F("Wasserburger Höhe");
        break;
    }
    case 328148:
    {
        returnValue = F("Wasserburger Landstr.");
        break;
    }
    case 328149:
    {
        returnValue = F("Wasserburger Str.");
        break;
    }
    case 328150:
    {
        returnValue = F("Wasserburger Weg");
        break;
    }
    case 328151:
    {
        returnValue = F("Wasserburgertalstr.");
        break;
    }
    case 328152:
    {
        returnValue = F("Wasserburgstr.");
        break;
    }
    case 328153:
    {
        returnValue = F("Wasserdurchfahrt");
        break;
    }
    case 328154:
    {
        returnValue = F("Wasserdäll");
        break;
    }
    case 328155:
    {
        returnValue = F("Wassereggart");
        break;
    }
    case 328156:
    {
        returnValue = F("Wasserende");
        break;
    }
    case 328157:
    {
        returnValue = F("Wasserer Str.");
        break;
    }
    case 328158:
    {
        returnValue = F("Wasserer Wiesenbrücke");
        break;
    }
    case 328159:
    {
        returnValue = F("Wassererlebnispark");
        break;
    }
    case 328160:
    {
        returnValue = F("Wassererweg");
        break;
    }
    case 328161:
    {
        returnValue = F("Wasserfahr");
        break;
    }
    case 328162:
    {
        returnValue = F("Wasserfall");
        break;
    }
    case 328163:
    {
        returnValue = F("Wasserfall am Golfplatz");
        break;
    }
    case 328164:
    {
        returnValue = F("Wasserfall-Rundweg");
        break;
    }
    case 328165:
    {
        returnValue = F("Wasserfallenweg");
        break;
    }
    case 328166:
    {
        returnValue = F("Wasserfallstr.");
        break;
    }
    case 328167:
    {
        returnValue = F("Wasserfallweg");
        break;
    }
    case 328168:
    {
        returnValue = F("Wasserfederring");
        break;
    }
    case 328169:
    {
        returnValue = F("Wasserfederweg");
        break;
    }
    case 328170:
    {
        returnValue = F("Wasserfehdeweg");
        break;
    }
    case 328171:
    {
        returnValue = F("Wasserfeld");
        break;
    }
    case 328172:
    {
        returnValue = F("Wasserfelderstr.");
        break;
    }
    case 328173:
    {
        returnValue = F("Wasserfeldstr.");
        break;
    }
    case 328174:
    {
        returnValue = F("Wasserfeldweg");
        break;
    }
    case 328175:
    {
        returnValue = F("Wasserflut");
        break;
    }
    case 328176:
    {
        returnValue = F("Wasserfohr");
        break;
    }
    case 328177:
    {
        returnValue = F("Wasserforthstr.");
        break;
    }
    case 328178:
    {
        returnValue = F("Wasserfuhr");
        break;
    }
    case 328179:
    {
        returnValue = F("Wasserfuhre");
        break;
    }
    case 328180:
    {
        returnValue = F("Wasserfuhrstr.");
        break;
    }
    case 328181:
    {
        returnValue = F("Wasserfurche");
        break;
    }
    case 328182:
    {
        returnValue = F("Wasserfurt");
        break;
    }
    case 328183:
    {
        returnValue = F("Wasserfurth");
        break;
    }
    case 328184:
    {
        returnValue = F("Wassergang");
        break;
    }
    case 328185:
    {
        returnValue = F("Wassergarde");
        break;
    }
    case 328186:
    {
        returnValue = F("Wassergarten");
        break;
    }
    case 328187:
    {
        returnValue = F("Wassergarten Einruhr");
        break;
    }
    case 328188:
    {
        returnValue = F("Wassergartenstr.");
        break;
    }
    case 328189:
    {
        returnValue = F("Wassergasse");
        break;
    }
    case 328190:
    {
        returnValue = F("Wassergassenweg");
        break;
    }
    case 328191:
    {
        returnValue = F("Wassergaßschneise");
        break;
    }
    case 328192:
    {
        returnValue = F("Wassergeflügel");
        break;
    }
    case 328193:
    {
        returnValue = F("Wassergraben");
        break;
    }
    case 328194:
    {
        returnValue = F("Wassergrube");
        break;
    }
    case 328195:
    {
        returnValue = F("Wassergrundring");
        break;
    }
    case 328196:
    {
        returnValue = F("Wassergrundstr.");
        break;
    }
    case 328197:
    {
        returnValue = F("Wassergrundweg");
        break;
    }
    case 328198:
    {
        returnValue = F("Wassergäßchen");
        break;
    }
    case 328199:
    {
        returnValue = F("Wassergäßle");
        break;
    }
    case 328200:
    {
        returnValue = F("Wasserhalde");
        break;
    }
    case 328201:
    {
        returnValue = F("Wasserhausstr.");
        break;
    }
    case 328202:
    {
        returnValue = F("Wasserhausweg");
        break;
    }
    case 328203:
    {
        returnValue = F("Wasserhauweg");
        break;
    }
    case 328204:
    {
        returnValue = F("Wasserhof");
        break;
    }
    case 328205:
    {
        returnValue = F("Wasserhofstr.");
        break;
    }
    case 328206:
    {
        returnValue = F("Wasserhohl");
        break;
    }
    case 328207:
    {
        returnValue = F("Wasserholm");
        break;
    }
    case 328208:
    {
        returnValue = F("Wasserhorster Str.");
        break;
    }
    case 328209:
    {
        returnValue = F("Wasserhäuser");
        break;
    }
    case 328210:
    {
        returnValue = F("Wasserhäuslesweg");
        break;
    }
    case 328211:
    {
        returnValue = F("Wasserhäuslweg");
        break;
    }
    case 328212:
    {
        returnValue = F("Wasserkall");
        break;
    }
    case 328213:
    {
        returnValue = F("Wasserkamp");
        break;
    }
    case 328214:
    {
        returnValue = F("Wasserkampstr.");
        break;
    }
    case 328215:
    {
        returnValue = F("Wasserkampweg");
        break;
    }
    case 328216:
    {
        returnValue = F("Wasserkate");
        break;
    }
    case 328217:
    {
        returnValue = F("Wasserkelchstr.");
        break;
    }
    case 328218:
    {
        returnValue = F("Wasserklammstr.");
        break;
    }
    case 328219:
    {
        returnValue = F("Wasserklinge");
        break;
    }
    case 328220:
    {
        returnValue = F("Wasserkooger Str.");
        break;
    }
    case 328221:
    {
        returnValue = F("Wasserkraftwerk-Lehrpfad");
        break;
    }
    case 328222:
    {
        returnValue = F("Wasserkretscham");
        break;
    }
    case 328223:
    {
        returnValue = F("Wasserkrug");
        break;
    }
    case 328224:
    {
        returnValue = F("Wasserkrüger Weg");
        break;
    }
    case 328225:
    {
        returnValue = F("Wasserkunst");
        break;
    }
    case 328226:
    {
        returnValue = F("Wasserkunststr.");
        break;
    }
    case 328227:
    {
        returnValue = F("Wasserkuppe");
        break;
    }
    case 328228:
    {
        returnValue = F("Wasserkuppenstr.");
        break;
    }
    case 328229:
    {
        returnValue = F("Wasserkurler Str.");
        break;
    }
    case 328230:
    {
        returnValue = F("Wasserlache");
        break;
    }
    case 328231:
    {
        returnValue = F("Wasserlachen");
        break;
    }
    case 328232:
    {
        returnValue = F("Wasserlebener Str.");
        break;
    }
    case 328233:
    {
        returnValue = F("Wasserlebener-Str.");
        break;
    }
    case 328234:
    {
        returnValue = F("Wasserleber Weg");
        break;
    }
    case 328235:
    {
        returnValue = F("Wasserlehrpfad");
        break;
    }
    case 328236:
    {
        returnValue = F("Wasserlehrpfad Wümme");
        break;
    }
    case 328237:
    {
        returnValue = F("Wasserleite");
        break;
    }
    case 328238:
    {
        returnValue = F("Wasserleiten");
        break;
    }
    case 328239:
    {
        returnValue = F("Wasserleitenweg");
        break;
    }
    case 328240:
    {
        returnValue = F("Wasserleitung");
        break;
    }
    case 328241:
    {
        returnValue = F("Wasserleitungsplanie");
        break;
    }
    case 328242:
    {
        returnValue = F("Wasserleitungsweg");
        break;
    }
    case 328243:
    {
        returnValue = F("Wasserloch");
        break;
    }
    case 328244:
    {
        returnValue = F("Wasserlochschneise");
        break;
    }
    case 328245:
    {
        returnValue = F("Wasserlochstücke");
        break;
    }
    case 328246:
    {
        returnValue = F("Wasserlochweg");
        break;
    }
    case 328247:
    {
        returnValue = F("Wasserlohgäßchen");
        break;
    }
    case 328248:
    {
        returnValue = F("Wasserlohstr.");
        break;
    }
    case 328249:
    {
        returnValue = F("Wasserloos");
        break;
    }
    case 328250:
    {
        returnValue = F("Wasserlooser Weg");
        break;
    }
    case 328251:
    {
        returnValue = F("Wasserlooslück");
        break;
    }
    case 328252:
    {
        returnValue = F("Wasserlosener Str.");
        break;
    }
    case 328253:
    {
        returnValue = F("Wasserloser Str.");
        break;
    }
    case 328254:
    {
        returnValue = F("Wasserloser Weg");
        break;
    }
    case 328255:
    {
        returnValue = F("Wasserluft");
        break;
    }
    case 328256:
    {
        returnValue = F("Wasserläuferweg");
        break;
    }
    case 328257:
    {
        returnValue = F("Wasserlöse");
        break;
    }
    case 328258:
    {
        returnValue = F("Wassermanngasse");
        break;
    }
    case 328259:
    {
        returnValue = F("Wassermannpark");
        break;
    }
    case 328260:
    {
        returnValue = F("Wassermannskamp");
        break;
    }
    case 328261:
    {
        returnValue = F("Wassermannstr.");
        break;
    }
    case 328262:
    {
        returnValue = F("Wassermannsweg");
        break;
    }
    case 328263:
    {
        returnValue = F("Wassermannweg");
        break;
    }
    case 328264:
    {
        returnValue = F("Wassermasch");
        break;
    }
    case 328265:
    {
        returnValue = F("Wassermungenauer Str.");
        break;
    }
    case 328266:
    {
        returnValue = F("Wassermühle");
        break;
    }
    case 328267:
    {
        returnValue = F("Wassermühlenstr.");
        break;
    }
    case 328268:
    {
        returnValue = F("Wassermühlenweg");
        break;
    }
    case 328269:
    {
        returnValue = F("Wassermüllerstr.");
        break;
    }
    case 328270:
    {
        returnValue = F("Wasserpark");
        break;
    }
    case 328271:
    {
        returnValue = F("Wasserpark Hasselt");
        break;
    }
    case 328272:
    {
        returnValue = F("Wasserpark Hehlingen");
        break;
    }
    case 328273:
    {
        returnValue = F("Wasserpark Währentrup");
        break;
    }
    case 328274:
    {
        returnValue = F("Wasserpfad");
        break;
    }
    case 328275:
    {
        returnValue = F("Wasserpforte");
        break;
    }
    case 328276:
    {
        returnValue = F("Wasserpförtchen");
        break;
    }
    case 328277:
    {
        returnValue = F("Wasserplan");
        break;
    }
    case 328278:
    {
        returnValue = F("Wasserplatz");
        break;
    }
    case 328279:
    {
        returnValue = F("Wasserradweg");
        break;
    }
    case 328280:
    {
        returnValue = F("Wasserrain");
        break;
    }
    case 328281:
    {
        returnValue = F("Wasserrallenweg");
        break;
    }
    case 328282:
    {
        returnValue = F("Wasserreihe");
        break;
    }
    case 328283:
    {
        returnValue = F("Wasserreute");
        break;
    }
    case 328284:
    {
        returnValue = F("Wasserriede");
        break;
    }
    case 328285:
    {
        returnValue = F("Wasserriege");
        break;
    }
    case 328286:
    {
        returnValue = F("Wasserrinne");
        break;
    }
    case 328287:
    {
        returnValue = F("Wasserrinnenstr.");
        break;
    }
    case 328288:
    {
        returnValue = F("Wasserrissstr.");
        break;
    }
    case 328289:
    {
        returnValue = F("Wasserrissweg");
        break;
    }
    case 328290:
    {
        returnValue = F("Wasserrolle");
        break;
    }
    case 328291:
    {
        returnValue = F("Wasserrosenweg");
        break;
    }
    case 328292:
    {
        returnValue = F("Wasserrüsteweg");
        break;
    }
    case 328293:
    {
        returnValue = F("Wasserschapfgasse");
        break;
    }
    case 328294:
    {
        returnValue = F("Wasserschapfstr.");
        break;
    }
    case 328295:
    {
        returnValue = F("Wasserscheide");
        break;
    }
    case 328296:
    {
        returnValue = F("Wasserschieder Str.");
        break;
    }
    case 328297:
    {
        returnValue = F("Wasserschiederstr.");
        break;
    }
    case 328298:
    {
        returnValue = F("Wasserschlag");
        break;
    }
    case 328299:
    {
        returnValue = F("Wasserschloss Hartmannsdorf");
        break;
    }
    case 328300:
    {
        returnValue = F("Wasserschlossweg");
        break;
    }
    case 328301:
    {
        returnValue = F("Wasserschloß");
        break;
    }
    case 328302:
    {
        returnValue = F("Wasserschloßweg");
        break;
    }
    case 328303:
    {
        returnValue = F("Wasserschneise");
        break;
    }
    case 328304:
    {
        returnValue = F("Wasserschopfe");
        break;
    }
    case 328305:
    {
        returnValue = F("Wasserschräge");
        break;
    }
    case 328306:
    {
        returnValue = F("Wasserschröffenweg");
        break;
    }
    case 328307:
    {
        returnValue = F("Wasserschröppe");
        break;
    }
    case 328308:
    {
        returnValue = F("Wasserschutzdamm");
        break;
    }
    case 328309:
    {
        returnValue = F("Wasserschänkenstr.");
        break;
    }
    case 328310:
    {
        returnValue = F("Wasserschöpf");
        break;
    }
    case 328311:
    {
        returnValue = F("Wasserschöpp");
        break;
    }
    case 328312:
    {
        returnValue = F("Wasserskisteg 1.MWSC");
        break;
    }
    case 328313:
    {
        returnValue = F("Wassersleben");
        break;
    }
    case 328314:
    {
        returnValue = F("Wasserspielplatz");
        break;
    }
    case 328315:
    {
        returnValue = F("Wasserspielplatz Langenselbold");
        break;
    }
    case 328316:
    {
        returnValue = F("Wasserspielplatzrundweg");
        break;
    }
    case 328317:
    {
        returnValue = F("Wassersportsiedlung");
        break;
    }
    case 328318:
    {
        returnValue = F("Wassersprung");
        break;
    }
    case 328319:
    {
        returnValue = F("Wasserspuren");
        break;
    }
    case 328320:
    {
        returnValue = F("Wasserstadt");
        break;
    }
    case 328321:
    {
        returnValue = F("Wasserstall");
        break;
    }
    case 328322:
    {
        returnValue = F("Wasserstallstr.");
        break;
    }
    case 328323:
    {
        returnValue = F("Wasserstallweg");
        break;
    }
    case 328324:
    {
        returnValue = F("Wasserstapfe");
        break;
    }
    case 328325:
    {
        returnValue = F("Wasserstege");
        break;
    }
    case 328326:
    {
        returnValue = F("Wassersteig");
        break;
    }
    case 328327:
    {
        returnValue = F("Wassersteige");
        break;
    }
    case 328328:
    {
        returnValue = F("Wasserstein");
        break;
    }
    case 328329:
    {
        returnValue = F("Wassersteinweg");
        break;
    }
    case 328330:
    {
        returnValue = F("Wasserstern");
        break;
    }
    case 328331:
    {
        returnValue = F("Wassersternweg");
        break;
    }
    case 328332:
    {
        returnValue = F("Wasserstetter Str.");
        break;
    }
    case 328333:
    {
        returnValue = F("Wasserstiege");
        break;
    }
    case 328334:
    {
        returnValue = F("Wasserstr.");
        break;
    }
    case 328335:
    {
        returnValue = F("Wasserstrecke");
        break;
    }
    case 328336:
    {
        returnValue = F("Wassersträßle");
        break;
    }
    case 328337:
    {
        returnValue = F("Wasserstube");
        break;
    }
    case 328338:
    {
        returnValue = F("Wasserstubenweg");
        break;
    }
    case 328339:
    {
        returnValue = F("Wassersuttweg");
        break;
    }
    case 328340:
    {
        returnValue = F("Wassersümpfchen");
        break;
    }
    case 328341:
    {
        returnValue = F("Wassertal");
        break;
    }
    case 328342:
    {
        returnValue = F("Wassertalfleck");
        break;
    }
    case 328343:
    {
        returnValue = F("Wassertalweg");
        break;
    }
    case 328344:
    {
        returnValue = F("Wassertappen");
        break;
    }
    case 328345:
    {
        returnValue = F("Wasserteich");
        break;
    }
    case 328346:
    {
        returnValue = F("Wasserteich Planie");
        break;
    }
    case 328347:
    {
        returnValue = F("Wasserteichweg");
        break;
    }
    case 328348:
    {
        returnValue = F("Wasserteilweg");
        break;
    }
    case 328349:
    {
        returnValue = F("Wasserthalebener Str.");
        break;
    }
    case 328350:
    {
        returnValue = F("Wassertor");
        break;
    }
    case 328351:
    {
        returnValue = F("Wassertorbrücke");
        break;
    }
    case 328352:
    {
        returnValue = F("Wassertorpromenade");
        break;
    }
    case 328353:
    {
        returnValue = F("Wassertorstr.");
        break;
    }
    case 328354:
    {
        returnValue = F("Wassertrasse");
        break;
    }
    case 328355:
    {
        returnValue = F("Wassertretanlage");
        break;
    }
    case 328356:
    {
        returnValue = F("Wassertretanlage Hospitalbrunnen");
        break;
    }
    case 328357:
    {
        returnValue = F("Wassertretanlage Westerngrund");
        break;
    }
    case 328358:
    {
        returnValue = F("Wassertreter");
        break;
    }
    case 328359:
    {
        returnValue = F("Wassertretstelle");
        break;
    }
    case 328360:
    {
        returnValue = F("Wassertretstelle Am Postenberg");
        break;
    }
    case 328361:
    {
        returnValue = F("Wassertretstelle Ellhofen");
        break;
    }
    case 328362:
    {
        returnValue = F("Wassertretstelle Waldau");
        break;
    }
    case 328363:
    {
        returnValue = F("Wassertränke");
        break;
    }
    case 328364:
    {
        returnValue = F("Wassertrüdinger Str.");
        break;
    }
    case 328365:
    {
        returnValue = F("Wasserturm");
        break;
    }
    case 328366:
    {
        returnValue = F("Wasserturm Park");
        break;
    }
    case 328367:
    {
        returnValue = F("Wasserturmallee");
        break;
    }
    case 328368:
    {
        returnValue = F("Wasserturmanlage");
        break;
    }
    case 328369:
    {
        returnValue = F("Wasserturmstr.");
        break;
    }
    case 328370:
    {
        returnValue = F("Wasserturmweg");
        break;
    }
    case 328371:
    {
        returnValue = F("Wassertwete");
        break;
    }
    case 328372:
    {
        returnValue = F("Wassertäle");
        break;
    }
    case 328373:
    {
        returnValue = F("Wasservogelwiese");
        break;
    }
    case 328374:
    {
        returnValue = F("Wasservorstadt");
        break;
    }
    case 328375:
    {
        returnValue = F("Wasserwachtsteg");
        break;
    }
    case 328376:
    {
        returnValue = F("Wasserwall");
        break;
    }
    case 328377:
    {
        returnValue = F("Wasserwanderer");
        break;
    }
    case 328378:
    {
        returnValue = F("Wasserwanderweg Schwentine");
        break;
    }
    case 328379:
    {
        returnValue = F("Wasserweg");
        break;
    }
    case 328380:
    {
        returnValue = F("Wasserweg der Neubaute");
        break;
    }
    case 328381:
    {
        returnValue = F("Wasserwerk");
        break;
    }
    case 328382:
    {
        returnValue = F("Wasserwerk Försterei");
        break;
    }
    case 328383:
    {
        returnValue = F("Wasserwerk II");
        break;
    }
    case 328384:
    {
        returnValue = F("Wasserwerk Kesselshain");
        break;
    }
    case 328385:
    {
        returnValue = F("Wasserwerkstr.");
        break;
    }
    case 328386:
    {
        returnValue = F("Wasserwerksweg");
        break;
    }
    case 328387:
    {
        returnValue = F("Wasserwerkweg");
        break;
    }
    case 328388:
    {
        returnValue = F("Wasserwiesen");
        break;
    }
    case 328389:
    {
        returnValue = F("Wasserwirtschaft");
        break;
    }
    case 328390:
    {
        returnValue = F("Wasserzucht");
        break;
    }
    case 328391:
    {
        returnValue = F("Wasserzugsweg");
        break;
    }
    case 328392:
    {
        returnValue = F("Wasseräcker");
        break;
    }
    case 328393:
    {
        returnValue = F("Wasseräckerweg");
        break;
    }
    case 328394:
    {
        returnValue = F("Wasserübungsplatz");
        break;
    }
    case 328395:
    {
        returnValue = F("Wassiek");
        break;
    }
    case 328396:
    {
        returnValue = F("Wassiliy-Kandinsky-Str.");
        break;
    }
    case 328397:
    {
        returnValue = F("Wassily-Kandinsky-Str.");
        break;
    }
    case 328398:
    {
        returnValue = F("Wassily-Kandinsky-Weg");
        break;
    }
    case 328399:
    {
        returnValue = F("Wassilystr.");
        break;
    }
    case 328400:
    {
        returnValue = F("Wassing");
        break;
    }
    case 328401:
    {
        returnValue = F("Wassmannsweg");
        break;
    }
    case 328402:
    {
        returnValue = F("Wassy-Platz");
        break;
    }
    case 328403:
    {
        returnValue = F("Wastenfelder Redder");
        break;
    }
    case 328404:
    {
        returnValue = F("Wastenfelder Weg");
        break;
    }
    case 328405:
    {
        returnValue = F("Wastl-Fanderl-Str.");
        break;
    }
    case 328406:
    {
        returnValue = F("Wastl-Fanderl-Weg");
        break;
    }
    case 328407:
    {
        returnValue = F("Wastl-Lechner-Weg");
        break;
    }
    case 328408:
    {
        returnValue = F("Wastlbauerweg");
        break;
    }
    case 328409:
    {
        returnValue = F("Wastlhuberstr.");
        break;
    }
    case 328410:
    {
        returnValue = F("Wastlhöhe");
        break;
    }
    case 328411:
    {
        returnValue = F("Wastlleite");
        break;
    }
    case 328412:
    {
        returnValue = F("Wastlmühle");
        break;
    }
    case 328413:
    {
        returnValue = F("Wastlmühlstr.");
        break;
    }
    case 328414:
    {
        returnValue = F("Wastlmühlweg");
        break;
    }
    case 328415:
    {
        returnValue = F("Wastltalweg");
        break;
    }
    case 328416:
    {
        returnValue = F("Wasumsweg");
        break;
    }
    case 328417:
    {
        returnValue = F("Wasunger Str.");
        break;
    }
    case 328418:
    {
        returnValue = F("Wasunger Weg");
        break;
    }
    case 328419:
    {
        returnValue = F("Watelerstr.");
        break;
    }
    case 328420:
    {
        returnValue = F("Watenhübel");
        break;
    }
    case 328421:
    {
        returnValue = F("Watenstedter Str.");
        break;
    }
    case 328422:
    {
        returnValue = F("Watenstedter Weg");
        break;
    }
    case 328423:
    {
        returnValue = F("Watenstädter Str.");
        break;
    }
    case 328424:
    {
        returnValue = F("Waterbank");
        break;
    }
    case 328425:
    {
        returnValue = F("Waterberg");
        break;
    }
    case 328426:
    {
        returnValue = F("Waterbergpfad");
        break;
    }
    case 328427:
    {
        returnValue = F("Waterbergstr.");
        break;
    }
    case 328428:
    {
        returnValue = F("Waterblick");
        break;
    }
    case 328429:
    {
        returnValue = F("Waterboerstr.");
        break;
    }
    case 328430:
    {
        returnValue = F("Waterborger Weg");
        break;
    }
    case 328431:
    {
        returnValue = F("Waterbruch");
        break;
    }
    case 328432:
    {
        returnValue = F("Waterbusch");
        break;
    }
    case 328433:
    {
        returnValue = F("Waterdelle");
        break;
    }
    case 328434:
    {
        returnValue = F("Waterdieker Weg");
        break;
    }
    case 328435:
    {
        returnValue = F("Watereckstr.");
        break;
    }
    case 328436:
    {
        returnValue = F("Waterender Weg");
        break;
    }
    case 328437:
    {
        returnValue = F("Waterfeld");
        break;
    }
    case 328438:
    {
        returnValue = F("Waterfohr");
        break;
    }
    case 328439:
    {
        returnValue = F("Waterfohre");
        break;
    }
    case 328440:
    {
        returnValue = F("Waterfor");
        break;
    }
    case 328441:
    {
        returnValue = F("Waterfuhr");
        break;
    }
    case 328442:
    {
        returnValue = F("Waterfuhrweg");
        break;
    }
    case 328443:
    {
        returnValue = F("Waterfurt");
        break;
    }
    case 328444:
    {
        returnValue = F("Waterhookweg");
        break;
    }
    case 328445:
    {
        returnValue = F("Waterhorn");
        break;
    }
    case 328446:
    {
        returnValue = F("Waterhuck");
        break;
    }
    case 328447:
    {
        returnValue = F("Waterhörn");
        break;
    }
    case 328448:
    {
        returnValue = F("Waterkamp");
        break;
    }
    case 328449:
    {
        returnValue = F("Waterkampstr.");
        break;
    }
    case 328450:
    {
        returnValue = F("Waterkuhle");
        break;
    }
    case 328451:
    {
        returnValue = F("Waterkuhlstr.");
        break;
    }
    case 328452:
    {
        returnValue = F("Waterlohweg");
        break;
    }
    case 328453:
    {
        returnValue = F("Waterloo");
        break;
    }
    case 328454:
    {
        returnValue = F("Waterlooer Dorfstr.");
        break;
    }
    case 328455:
    {
        returnValue = F("Waterlooplatz");
        break;
    }
    case 328456:
    {
        returnValue = F("Waterloostr.");
        break;
    }
    case 328457:
    {
        returnValue = F("Waterloovillestr.");
        break;
    }
    case 328458:
    {
        returnValue = F("Watermanns Weg");
        break;
    }
    case 328459:
    {
        returnValue = F("Watermannscher Weg");
        break;
    }
    case 328460:
    {
        returnValue = F("Watermöhlenweg");
        break;
    }
    case 328461:
    {
        returnValue = F("Waternüst");
        break;
    }
    case 328462:
    {
        returnValue = F("Waterpad");
        break;
    }
    case 328463:
    {
        returnValue = F("Watersloh");
        break;
    }
    case 328464:
    {
        returnValue = F("Waterstegge");
        break;
    }
    case 328465:
    {
        returnValue = F("Waterstraat");
        break;
    }
    case 328466:
    {
        returnValue = F("Waterstraot");
        break;
    }
    case 328467:
    {
        returnValue = F("Waterstroate");
        break;
    }
    case 328468:
    {
        returnValue = F("Watertimpen");
        break;
    }
    case 328469:
    {
        returnValue = F("Watertucht");
        break;
    }
    case 328470:
    {
        returnValue = F("Waterweg");
        break;
    }
    case 328471:
    {
        returnValue = F("Waterwisch");
        break;
    }
    case 328472:
    {
        returnValue = F("Watestr.");
        break;
    }
    case 328473:
    {
        returnValue = F("Watfordstr.");
        break;
    }
    case 328474:
    {
        returnValue = F("Wathlinger Str.");
        break;
    }
    case 328475:
    {
        returnValue = F("Watkenstr.");
        break;
    }
    case 328476:
    {
        returnValue = F("Watstr.");
        break;
    }
    case 328477:
    {
        returnValue = F("Wattallee");
        break;
    }
    case 328478:
    {
        returnValue = F("Wattbergstr.");
        break;
    }
    case 328479:
    {
        returnValue = F("Wattbergweg");
        break;
    }
    case 328480:
    {
        returnValue = F("Wattehahn");
        break;
    }
    case 328481:
    {
        returnValue = F("Wattekumstr.");
        break;
    }
    case 328482:
    {
        returnValue = F("Wattelsgasse");
        break;
    }
    case 328483:
    {
        returnValue = F("Wattenbach");
        break;
    }
    case 328484:
    {
        returnValue = F("Wattenbacher Berg");
        break;
    }
    case 328485:
    {
        returnValue = F("Wattenbacher Str.");
        break;
    }
    case 328486:
    {
        returnValue = F("Wattenbacherau");
        break;
    }
    case 328487:
    {
        returnValue = F("Wattenbachstr.");
        break;
    }
    case 328488:
    {
        returnValue = F("Wattenbachsweg");
        break;
    }
    case 328489:
    {
        returnValue = F("Wattenberg");
        break;
    }
    case 328490:
    {
        returnValue = F("Wattenbergstr.");
        break;
    }
    case 328491:
    {
        returnValue = F("Wattenbergsweg");
        break;
    }
    case 328492:
    {
        returnValue = F("Wattendorfer Allee");
        break;
    }
    case 328493:
    {
        returnValue = F("Wattendorfer Weg");
        break;
    }
    case 328494:
    {
        returnValue = F("Wattendorffweg");
        break;
    }
    case 328495:
    {
        returnValue = F("Wattengrund");
        break;
    }
    case 328496:
    {
        returnValue = F("Wattenham");
        break;
    }
    case 328497:
    {
        returnValue = F("Wattenheimer Str.");
        break;
    }
    case 328498:
    {
        returnValue = F("Wattenheimer Weg");
        break;
    }
    case 328499:
    {
        returnValue = F("Wattenheimer-Brücke");
        break;
    }
    case 328500:
    {
        returnValue = F("Wattenreute");
        break;
    }
    case 328501:
    {
        returnValue = F("Wattenring");
        break;
    }
    case 328502:
    {
        returnValue = F("Wattenscheider Hellweg");
        break;
    }
    case 328503:
    {
        returnValue = F("Wattenscheider Str.");
        break;
    }
    case 328504:
    {
        returnValue = F("Wattenscheider Weg");
        break;
    }
    case 328505:
    {
        returnValue = F("Wattenstr.");
        break;
    }
    case 328506:
    {
        returnValue = F("Wattenweg");
        break;
    }
    case 328507:
    {
        returnValue = F("Wattenweiler Str.");
        break;
    }
    case 328508:
    {
        returnValue = F("Watterbach");
        break;
    }
    case 328509:
    {
        returnValue = F("Watterbacher Str.");
        break;
    }
    case 328510:
    {
        returnValue = F("Wattersdorfer Str.");
        break;
    }
    case 328511:
    {
        returnValue = F("Watterweg");
        break;
    }
    case 328512:
    {
        returnValue = F("Wattgraben");
        break;
    }
    case 328513:
    {
        returnValue = F("Watthaldenpark");
        break;
    }
    case 328514:
    {
        returnValue = F("Wattkopfstr.");
        break;
    }
    case 328515:
    {
        returnValue = F("Wattkopfweg");
        break;
    }
    case 328516:
    {
        returnValue = F("Wattmannstr.");
        break;
    }
    case 328517:
    {
        returnValue = F("Wattmeckestr.");
        break;
    }
    case 328518:
    {
        returnValue = F("Wattschaukrug");
        break;
    }
    case 328519:
    {
        returnValue = F("Wattseite");
        break;
    }
    case 328520:
    {
        returnValue = F("Wattsfeld");
        break;
    }
    case 328521:
    {
        returnValue = F("Wattsteig");
        break;
    }
    case 328522:
    {
        returnValue = F("Wattstr.");
        break;
    }
    case 328523:
    {
        returnValue = F("Wattwanderweg");
        break;
    }
    case 328524:
    {
        returnValue = F("Wattweg");
        break;
    }
    case 328525:
    {
        returnValue = F("Wattweilerstr.");
        break;
    }
    case 328526:
    {
        returnValue = F("Wattwiller Str.");
        break;
    }
    case 328527:
    {
        returnValue = F("Watzdorf");
        break;
    }
    case 328528:
    {
        returnValue = F("Watzelsdorfer Str.");
        break;
    }
    case 328529:
    {
        returnValue = F("Watzenbergsweg");
        break;
    }
    case 328530:
    {
        returnValue = F("Watzenborner Str.");
        break;
    }
    case 328531:
    {
        returnValue = F("Watzenborner Weg");
        break;
    }
    case 328532:
    {
        returnValue = F("Watzendorf");
        break;
    }
    case 328533:
    {
        returnValue = F("Watzengasse");
        break;
    }
    case 328534:
    {
        returnValue = F("Watzerather Str.");
        break;
    }
    case 328535:
    {
        returnValue = F("Watzhahner Str.");
        break;
    }
    case 328536:
    {
        returnValue = F("Watzkendorfer Str.");
        break;
    }
    case 328537:
    {
        returnValue = F("Watzlikring");
        break;
    }
    case 328538:
    {
        returnValue = F("Watzlikstr.");
        break;
    }
    case 328539:
    {
        returnValue = F("Watzlikweg");
        break;
    }
    case 328540:
    {
        returnValue = F("Watzmannsberger Str.");
        break;
    }
    case 328541:
    {
        returnValue = F("Watzmannsdorfer Ring");
        break;
    }
    case 328542:
    {
        returnValue = F("Watzmannstr.");
        break;
    }
    case 328543:
    {
        returnValue = F("Watzmannweg");
        break;
    }
    case 328544:
    {
        returnValue = F("Watzschwitzer Str.");
        break;
    }
    case 328545:
    {
        returnValue = F("Watzumer Häuschen");
        break;
    }
    case 328546:
    {
        returnValue = F("Watzumer Weg");
        break;
    }
    case 328547:
    {
        returnValue = F("Waubacher Weg");
        break;
    }
    case 328548:
    {
        returnValue = F("Wauckstr.");
        break;
    }
    case 328549:
    {
        returnValue = F("Wauden");
        break;
    }
    case 328550:
    {
        returnValue = F("Wauerthang");
        break;
    }
    case 328551:
    {
        returnValue = F("Wauertsiepen");
        break;
    }
    case 328552:
    {
        returnValue = F("Wauricher Weg");
        break;
    }
    case 328553:
    {
        returnValue = F("Wauzeliweg");
        break;
    }
    case 328554:
    {
        returnValue = F("Wawerner Str.");
        break;
    }
    case 328555:
    {
        returnValue = F("Waxbrunnen");
        break;
    }
    case 328556:
    {
        returnValue = F("Waxenstein");
        break;
    }
    case 328557:
    {
        returnValue = F("Waxensteinplatz");
        break;
    }
    case 328558:
    {
        returnValue = F("Waxensteinstr.");
        break;
    }
    case 328559:
    {
        returnValue = F("Waxensteinweg");
        break;
    }
    case 328560:
    {
        returnValue = F("Waxweiler Str.");
        break;
    }
    case 328561:
    {
        returnValue = F("Waygaarddeich");
        break;
    }
    case 328562:
    {
        returnValue = F("Waysche Str.");
        break;
    }
    case 328563:
    {
        returnValue = F("Waßenbuckelweg");
        break;
    }
    case 328564:
    {
        returnValue = F("Waßmannsdorfer Allee");
        break;
    }
    case 328565:
    {
        returnValue = F("Waßmannsdorfer Chaussee");
        break;
    }
    case 328566:
    {
        returnValue = F("Waßmannsdorfer Grund");
        break;
    }
    case 328567:
    {
        returnValue = F("Waßmannsdorfer Tor");
        break;
    }
    case 328568:
    {
        returnValue = F("Waßmannsmühle");
        break;
    }
    case 328569:
    {
        returnValue = F("Waßmannstr.");
        break;
    }
    case 328570:
    {
        returnValue = F("Waßmannweg");
        break;
    }
    case 328571:
    {
        returnValue = F("Waßmuthshäuser Str.");
        break;
    }
    case 328572:
    {
        returnValue = F("Wdbahn");
        break;
    }
    case 328573:
    {
        returnValue = F("Web IV");
        break;
    }
    case 328574:
    {
        returnValue = F("Webbach");
        break;
    }
    case 328575:
    {
        returnValue = F("Webelnweg");
        break;
    }
    case 328576:
    {
        returnValue = F("Webendörferstr.");
        break;
    }
    case 328577:
    {
        returnValue = F("Webenheimer Str.");
        break;
    }
    case 328578:
    {
        returnValue = F("Webenheimstr.");
        break;
    }
    case 328579:
    {
        returnValue = F("Webenweg");
        break;
    }
    case 328580:
    {
        returnValue = F("Weber Geräumt");
        break;
    }
    case 328581:
    {
        returnValue = F("Weber-Peter-Weg");
        break;
    }
    case 328582:
    {
        returnValue = F("Weber-Schneise");
        break;
    }
    case 328583:
    {
        returnValue = F("Weberacker");
        break;
    }
    case 328584:
    {
        returnValue = F("Weberallee");
        break;
    }
    case 328585:
    {
        returnValue = F("Weberanger");
        break;
    }
    case 328586:
    {
        returnValue = F("Weberbach");
        break;
    }
    case 328587:
    {
        returnValue = F("Weberbauergasse");
        break;
    }
    case 328588:
    {
        returnValue = F("Weberberg");
        break;
    }
    case 328589:
    {
        returnValue = F("Weberberggasse");
        break;
    }
    case 328590:
    {
        returnValue = F("Weberbleiche");
        break;
    }
    case 328591:
    {
        returnValue = F("Weberborn");
        break;
    }
    case 328592:
    {
        returnValue = F("Weberbrücke");
        break;
    }
    case 328593:
    {
        returnValue = F("Weberbuchenschneise");
        break;
    }
    case 328594:
    {
        returnValue = F("Weberbuck");
        break;
    }
    case 328595:
    {
        returnValue = F("Weberbuckelweg");
        break;
    }
    case 328596:
    {
        returnValue = F("Weberdobel");
        break;
    }
    case 328597:
    {
        returnValue = F("Webereck");
        break;
    }
    case 328598:
    {
        returnValue = F("Weberei");
        break;
    }
    case 328599:
    {
        returnValue = F("Webereistr.");
        break;
    }
    case 328600:
    {
        returnValue = F("Webereiweg");
        break;
    }
    case 328601:
    {
        returnValue = F("Weberfeld");
        break;
    }
    case 328602:
    {
        returnValue = F("Webergang");
        break;
    }
    case 328603:
    {
        returnValue = F("Webergasse");
        break;
    }
    case 328604:
    {
        returnValue = F("Webergaßl");
        break;
    }
    case 328605:
    {
        returnValue = F("Webergässchen");
        break;
    }
    case 328606:
    {
        returnValue = F("Webergässle");
        break;
    }
    case 328607:
    {
        returnValue = F("Webergäßchen");
        break;
    }
    case 328608:
    {
        returnValue = F("Webergäßle");
        break;
    }
    case 328609:
    {
        returnValue = F("Weberhanslgasse");
        break;
    }
    case 328610:
    {
        returnValue = F("Weberhaus");
        break;
    }
    case 328611:
    {
        returnValue = F("Weberhecke");
        break;
    }
    case 328612:
    {
        returnValue = F("Weberhof");
        break;
    }
    case 328613:
    {
        returnValue = F("Weberhofstr.");
        break;
    }
    case 328614:
    {
        returnValue = F("Weberhöhe");
        break;
    }
    case 328615:
    {
        returnValue = F("Weberhörn");
        break;
    }
    case 328616:
    {
        returnValue = F("Weberinnenstr.");
        break;
    }
    case 328617:
    {
        returnValue = F("Weberkamp");
        break;
    }
    case 328618:
    {
        returnValue = F("Weberkate");
        break;
    }
    case 328619:
    {
        returnValue = F("Weberknechtstr.");
        break;
    }
    case 328620:
    {
        returnValue = F("Weberkolkwiesen");
        break;
    }
    case 328621:
    {
        returnValue = F("Weberkoppel");
        break;
    }
    case 328622:
    {
        returnValue = F("Weberleinsweg");
        break;
    }
    case 328623:
    {
        returnValue = F("Weberles Hohl");
        break;
    }
    case 328624:
    {
        returnValue = F("Weberleweg");
        break;
    }
    case 328625:
    {
        returnValue = F("Weberlingstr.");
        break;
    }
    case 328626:
    {
        returnValue = F("Weberlohne");
        break;
    }
    case 328627:
    {
        returnValue = F("Weberlohstr.");
        break;
    }
    case 328628:
    {
        returnValue = F("Webermannweg");
        break;
    }
    case 328629:
    {
        returnValue = F("Webermarkt");
        break;
    }
    case 328630:
    {
        returnValue = F("Weberner Str.");
        break;
    }
    case 328631:
    {
        returnValue = F("Weberpark");
        break;
    }
    case 328632:
    {
        returnValue = F("Weberpfad");
        break;
    }
    case 328633:
    {
        returnValue = F("Weberplatz");
        break;
    }
    case 328634:
    {
        returnValue = F("Weberriedweg");
        break;
    }
    case 328635:
    {
        returnValue = F("Weberring");
        break;
    }
    case 328636:
    {
        returnValue = F("Webers Ablage");
        break;
    }
    case 328637:
    {
        returnValue = F("Webers Flach");
        break;
    }
    case 328638:
    {
        returnValue = F("Webers Hof");
        break;
    }
    case 328639:
    {
        returnValue = F("Webers Kamp");
        break;
    }
    case 328640:
    {
        returnValue = F("Webers Wiesen");
        break;
    }
    case 328641:
    {
        returnValue = F("Webersbenden");
        break;
    }
    case 328642:
    {
        returnValue = F("Webersberg");
        break;
    }
    case 328643:
    {
        returnValue = F("Webersberger Str.");
        break;
    }
    case 328644:
    {
        returnValue = F("Webersbergweg");
        break;
    }
    case 328645:
    {
        returnValue = F("Webersbitze");
        break;
    }
    case 328646:
    {
        returnValue = F("Webersbuck");
        break;
    }
    case 328647:
    {
        returnValue = F("Webersbühl");
        break;
    }
    case 328648:
    {
        returnValue = F("Weberschlag");
        break;
    }
    case 328649:
    {
        returnValue = F("Webersfeld");
        break;
    }
    case 328650:
    {
        returnValue = F("Webersgarten");
        break;
    }
    case 328651:
    {
        returnValue = F("Webersgasse");
        break;
    }
    case 328652:
    {
        returnValue = F("Webersgässla");
        break;
    }
    case 328653:
    {
        returnValue = F("Webershahn");
        break;
    }
    case 328654:
    {
        returnValue = F("Webershaus");
        break;
    }
    case 328655:
    {
        returnValue = F("Webershausener Str.");
        break;
    }
    case 328656:
    {
        returnValue = F("Webershütte");
        break;
    }
    case 328657:
    {
        returnValue = F("Webersiedlung");
        break;
    }
    case 328658:
    {
        returnValue = F("Weberskamp");
        break;
    }
    case 328659:
    {
        returnValue = F("Weberslohne");
        break;
    }
    case 328660:
    {
        returnValue = F("Weberspfad");
        break;
    }
    case 328661:
    {
        returnValue = F("Weberstedter Str.");
        break;
    }
    case 328662:
    {
        returnValue = F("Webersteg");
        break;
    }
    case 328663:
    {
        returnValue = F("Webersteig");
        break;
    }
    case 328664:
    {
        returnValue = F("Webersteig Döbra - Hof");
        break;
    }
    case 328665:
    {
        returnValue = F("Webersteinweg");
        break;
    }
    case 328666:
    {
        returnValue = F("Weberstieg");
        break;
    }
    case 328667:
    {
        returnValue = F("Weberstor");
        break;
    }
    case 328668:
    {
        returnValue = F("Weberstr.");
        break;
    }
    case 328669:
    {
        returnValue = F("Weberstube");
        break;
    }
    case 328670:
    {
        returnValue = F("Webersweg");
        break;
    }
    case 328671:
    {
        returnValue = F("Webertalstr.");
        break;
    }
    case 328672:
    {
        returnValue = F("Weberteichsträßle");
        break;
    }
    case 328673:
    {
        returnValue = F("Weberweg");
        break;
    }
    case 328674:
    {
        returnValue = F("Weberwies");
        break;
    }
    case 328675:
    {
        returnValue = F("Weberwiese");
        break;
    }
    case 328676:
    {
        returnValue = F("Weberwiesen");
        break;
    }
    case 328677:
    {
        returnValue = F("Weberwinkel");
        break;
    }
    case 328678:
    {
        returnValue = F("Weberäckerweg");
        break;
    }
    case 328679:
    {
        returnValue = F("Webgartenstr.");
        break;
    }
    case 328680:
    {
        returnValue = F("Webichgasse");
        break;
    }
    case 328681:
    {
        returnValue = F("Webichtallee");
        break;
    }
    case 328682:
    {
        returnValue = F("Webling");
        break;
    }
    case 328683:
    {
        returnValue = F("Weblinger Feld");
        break;
    }
    case 328684:
    {
        returnValue = F("Weblinger Weg");
        break;
    }
    case 328685:
    {
        returnValue = F("Webnestweg");
        break;
    }
    case 328686:
    {
        returnValue = F("Webs-Ranch");
        break;
    }
    case 328687:
    {
        returnValue = F("Webschulallee");
        break;
    }
    case 328688:
    {
        returnValue = F("Webschulstr.");
        break;
    }
    case 328689:
    {
        returnValue = F("Webskamp");
        break;
    }
    case 328690:
    {
        returnValue = F("Webster-Platz");
        break;
    }
    case 328691:
    {
        returnValue = F("Websweilerstr.");
        break;
    }
    case 328692:
    {
        returnValue = F("Wechelweg");
        break;
    }
    case 328693:
    {
        returnValue = F("Wechentalweg");
        break;
    }
    case 328694:
    {
        returnValue = F("Wechloyer Weg");
        break;
    }
    case 328695:
    {
        returnValue = F("Wechmarbrücke");
        break;
    }
    case 328696:
    {
        returnValue = F("Wechmarer Ring");
        break;
    }
    case 328697:
    {
        returnValue = F("Wechmarer Str.");
        break;
    }
    case 328698:
    {
        returnValue = F("Wecholder Str.");
        break;
    }
    case 328699:
    {
        returnValue = F("Wechselbergstr.");
        break;
    }
    case 328700:
    {
        returnValue = F("Wechselburger Str.");
        break;
    }
    case 328701:
    {
        returnValue = F("Wechseleicheweg");
        break;
    }
    case 328702:
    {
        returnValue = F("Wechselholzweg");
        break;
    }
    case 328703:
    {
        returnValue = F("Wechselpergerstr.");
        break;
    }
    case 328704:
    {
        returnValue = F("Wechselpfad");
        break;
    }
    case 328705:
    {
        returnValue = F("Wechselsaat");
        break;
    }
    case 328706:
    {
        returnValue = F("Wechselsaater Weg");
        break;
    }
    case 328707:
    {
        returnValue = F("Wechselstr.");
        break;
    }
    case 328708:
    {
        returnValue = F("Wechselweg");
        break;
    }
    case 328709:
    {
        returnValue = F("Wechselwiese");
        break;
    }
    case 328710:
    {
        returnValue = F("Wechslerstr.");
        break;
    }
    case 328711:
    {
        returnValue = F("Wechsunger Str.");
        break;
    }
    case 328712:
    {
        returnValue = F("Wechsunger Weg");
        break;
    }
    case 328713:
    {
        returnValue = F("Wechtenbruch");
        break;
    }
    case 328714:
    {
        returnValue = F("Wechter Mark");
        break;
    }
    case 328715:
    {
        returnValue = F("Wechter Str.");
        break;
    }
    case 328716:
    {
        returnValue = F("Wechtern");
        break;
    }
    case 328717:
    {
        returnValue = F("Wechterswinkler Str.");
        break;
    }
    case 328718:
    {
        returnValue = F("Weckbacher Str.");
        break;
    }
    case 328719:
    {
        returnValue = F("Weckebrotweg");
        break;
    }
    case 328720:
    {
        returnValue = F("Weckenbergstr.");
        break;
    }
    case 328721:
    {
        returnValue = F("Weckengasse");
        break;
    }
    case 328722:
    {
        returnValue = F("Weckenhofstr.");
        break;
    }
    case 328723:
    {
        returnValue = F("Weckenmannstr.");
        break;
    }
    case 328724:
    {
        returnValue = F("Weckenstr.");
        break;
    }
    case 328725:
    {
        returnValue = F("Weckentalstr.");
        break;
    }
    case 328726:
    {
        returnValue = F("Weckenweg");
        break;
    }
    case 328727:
    {
        returnValue = F("Weckerlestr.");
        break;
    }
    case 328728:
    {
        returnValue = F("Weckerlingplatz");
        break;
    }
    case 328729:
    {
        returnValue = F("Weckerlinstr.");
        break;
    }
    case 328730:
    {
        returnValue = F("Weckermannweg");
        break;
    }
    case 328731:
    {
        returnValue = F("Weckertsmatt");
        break;
    }
    case 328732:
    {
        returnValue = F("Weckesheimer Str.");
        break;
    }
    case 328733:
    {
        returnValue = F("Weckeweg");
        break;
    }
    case 328734:
    {
        returnValue = F("Weckhasenpfad");
        break;
    }
    case 328735:
    {
        returnValue = F("Weckherlinstr.");
        break;
    }
    case 328736:
    {
        returnValue = F("Weckhof");
        break;
    }
    case 328737:
    {
        returnValue = F("Weckhovener Str.");
        break;
    }
    case 328738:
    {
        returnValue = F("Weckinghauser Weg");
        break;
    }
    case 328739:
    {
        returnValue = F("Wecklinger Str.");
        break;
    }
    case 328740:
    {
        returnValue = F("Weckmannweg");
        break;
    }
    case 328741:
    {
        returnValue = F("Weckrain");
        break;
    }
    case 328742:
    {
        returnValue = F("Weckriedener Str.");
        break;
    }
    case 328743:
    {
        returnValue = F("Weckshof");
        break;
    }
    case 328744:
    {
        returnValue = F("Weckspfad");
        break;
    }
    case 328745:
    {
        returnValue = F("Weckstr.");
        break;
    }
    case 328746:
    {
        returnValue = F("Wedauer Brücke");
        break;
    }
    case 328747:
    {
        returnValue = F("Wedauer Markt");
        break;
    }
    case 328748:
    {
        returnValue = F("Wedauer Str.");
        break;
    }
    case 328749:
    {
        returnValue = F("Wedaustr.");
        break;
    }
    case 328750:
    {
        returnValue = F("Weddeborn");
        break;
    }
    case 328751:
    {
        returnValue = F("Weddegasse");
        break;
    }
    case 328752:
    {
        returnValue = F("Weddel");
        break;
    }
    case 328753:
    {
        returnValue = F("Weddelbrook");
        break;
    }
    case 328754:
    {
        returnValue = F("Weddelbrooker Damm");
        break;
    }
    case 328755:
    {
        returnValue = F("Weddelbrooker Str.");
        break;
    }
    case 328756:
    {
        returnValue = F("Weddeler Str.");
        break;
    }
    case 328757:
    {
        returnValue = F("Weddelkampredder");
        break;
    }
    case 328758:
    {
        returnValue = F("Weddeln");
        break;
    }
    case 328759:
    {
        returnValue = F("Weddelstr.");
        break;
    }
    case 328760:
    {
        returnValue = F("Weddemannstr.");
        break;
    }
    case 328761:
    {
        returnValue = F("Weddemweg");
        break;
    }
    case 328762:
    {
        returnValue = F("Wedden");
        break;
    }
    case 328763:
    {
        returnValue = F("Weddenkamp");
        break;
    }
    case 328764:
    {
        returnValue = F("Weddenwiesen");
        break;
    }
    case 328765:
    {
        returnValue = F("Weddeort");
        break;
    }
    case 328766:
    {
        returnValue = F("Wedderlage");
        break;
    }
    case 328767:
    {
        returnValue = F("Weddern");
        break;
    }
    case 328768:
    {
        returnValue = F("Weddersehler Dorfstr.");
        break;
    }
    case 328769:
    {
        returnValue = F("Wedderslebener Bahnhofstr.");
        break;
    }
    case 328770:
    {
        returnValue = F("Wedderslebener Bergstr.");
        break;
    }
    case 328771:
    {
        returnValue = F("Wedderslebener Chaussee");
        break;
    }
    case 328772:
    {
        returnValue = F("Wedderslebener Kirchstr.");
        break;
    }
    case 328773:
    {
        returnValue = F("Wedderslebener Mühlenstr.");
        break;
    }
    case 328774:
    {
        returnValue = F("Wedderslebener Weg");
        break;
    }
    case 328775:
    {
        returnValue = F("Wedderstedter Weg");
        break;
    }
    case 328776:
    {
        returnValue = F("Weddeweg");
        break;
    }
    case 328777:
    {
        returnValue = F("Weddigenallee");
        break;
    }
    case 328778:
    {
        returnValue = F("Weddigenhof");
        break;
    }
    case 328779:
    {
        returnValue = F("Weddigenplatz");
        break;
    }
    case 328780:
    {
        returnValue = F("Weddigenstollen");
        break;
    }
    case 328781:
    {
        returnValue = F("Weddigenstr.");
        break;
    }
    case 328782:
    {
        returnValue = F("Weddigenufer");
        break;
    }
    case 328783:
    {
        returnValue = F("Weddigenuferpark");
        break;
    }
    case 328784:
    {
        returnValue = F("Weddigeweg");
        break;
    }
    case 328785:
    {
        returnValue = F("Weddin");
        break;
    }
    case 328786:
    {
        returnValue = F("Weddiner Str.");
        break;
    }
    case 328787:
    {
        returnValue = F("Weddiner Weg");
        break;
    }
    case 328788:
    {
        returnValue = F("Weddinger Str.");
        break;
    }
    case 328789:
    {
        returnValue = F("Weddinger Weg");
        break;
    }
    case 328790:
    {
        returnValue = F("Weddinghofer Kirchweg");
        break;
    }
    case 328791:
    {
        returnValue = F("Weddinghofer Str.");
        break;
    }
    case 328792:
    {
        returnValue = F("Weddingstr.");
        break;
    }
    case 328793:
    {
        returnValue = F("Weddingweg");
        break;
    }
    case 328794:
    {
        returnValue = F("Wedegasse");
        break;
    }
    case 328795:
    {
        returnValue = F("Wedekindhof");
        break;
    }
    case 328796:
    {
        returnValue = F("Wedekindring");
        break;
    }
    case 328797:
    {
        returnValue = F("Wedekindschneise");
        break;
    }
    case 328798:
    {
        returnValue = F("Wedekindstr.");
        break;
    }
    case 328799:
    {
        returnValue = F("Wedekindweg");
        break;
    }
    case 328800:
    {
        returnValue = F("Wedeland");
        break;
    }
    case 328801:
    {
        returnValue = F("Wedeler");
        break;
    }
    case 328802:
    {
        returnValue = F("Wedeler Bruch");
        break;
    }
    case 328803:
    {
        returnValue = F("Wedeler Chaussee");
        break;
    }
    case 328804:
    {
        returnValue = F("Wedeler Hauptstr.");
        break;
    }
    case 328805:
    {
        returnValue = F("Wedeler Passage");
        break;
    }
    case 328806:
    {
        returnValue = F("Wedeler Str.");
        break;
    }
    case 328807:
    {
        returnValue = F("Wedeler Weg");
        break;
    }
    case 328808:
    {
        returnValue = F("Wedelfeld");
        break;
    }
    case 328809:
    {
        returnValue = F("Wedelingskamp");
        break;
    }
    case 328810:
    {
        returnValue = F("Wedellstr.");
        break;
    }
    case 328811:
    {
        returnValue = F("Wedelsgasse");
        break;
    }
    case 328812:
    {
        returnValue = F("Wedelspang");
        break;
    }
    case 328813:
    {
        returnValue = F("Wedelstaedtstr.");
        break;
    }
    case 328814:
    {
        returnValue = F("Wedelstr.");
        break;
    }
    case 328815:
    {
        returnValue = F("Wedelweg");
        break;
    }
    case 328816:
    {
        returnValue = F("Wedemannstr.");
        break;
    }
    case 328817:
    {
        returnValue = F("Wedemarkstr.");
        break;
    }
    case 328818:
    {
        returnValue = F("Wedemarsch");
        break;
    }
    case 328819:
    {
        returnValue = F("Wedemgang");
        break;
    }
    case 328820:
    {
        returnValue = F("Wedemhof");
        break;
    }
    case 328821:
    {
        returnValue = F("Wedenberg");
        break;
    }
    case 328822:
    {
        returnValue = F("Wedendorfer Str.");
        break;
    }
    case 328823:
    {
        returnValue = F("Wedendorfer Weg");
        break;
    }
    case 328824:
    {
        returnValue = F("Wedenhof");
        break;
    }
    case 328825:
    {
        returnValue = F("Wedenhofstr.");
        break;
    }
    case 328826:
    {
        returnValue = F("Wedenkamp");
        break;
    }
    case 328827:
    {
        returnValue = F("Wedenstr.");
        break;
    }
    case 328828:
    {
        returnValue = F("Wedenweg");
        break;
    }
    case 328829:
    {
        returnValue = F("Wedepohls Hof");
        break;
    }
    case 328830:
    {
        returnValue = F("Wedepohlstr.");
        break;
    }
    case 328831:
    {
        returnValue = F("Wederather Weg");
        break;
    }
    case 328832:
    {
        returnValue = F("Wederholz");
        break;
    }
    case 328833:
    {
        returnValue = F("Wederner Str.");
        break;
    }
    case 328834:
    {
        returnValue = F("Wederweg");
        break;
    }
    case 328835:
    {
        returnValue = F("Wedesbütteler Weg");
        break;
    }
    case 328836:
    {
        returnValue = F("Wedeweg");
        break;
    }
    case 328837:
    {
        returnValue = F("Wedgasse");
        break;
    }
    case 328838:
    {
        returnValue = F("Wedig's Pad");
        break;
    }
    case 328839:
    {
        returnValue = F("Wedinger Weg");
        break;
    }
    case 328840:
    {
        returnValue = F("Wedinghauser Str.");
        break;
    }
    case 328841:
    {
        returnValue = F("Wedling");
        break;
    }
    case 328842:
    {
        returnValue = F("Wedlitzer Hauptstr.");
        break;
    }
    case 328843:
    {
        returnValue = F("Wedringer Str.");
        break;
    }
    case 328844:
    {
        returnValue = F("Wedumshof");
        break;
    }
    case 328845:
    {
        returnValue = F("Wedumsweg");
        break;
    }
    case 328846:
    {
        returnValue = F("Weechstr.");
        break;
    }
    case 328847:
    {
        returnValue = F("Weed");
        break;
    }
    case 328848:
    {
        returnValue = F("Weed-Borngasse");
        break;
    }
    case 328849:
    {
        returnValue = F("Weedegasse");
        break;
    }
    case 328850:
    {
        returnValue = F("Weedengasse");
        break;
    }
    case 328851:
    {
        returnValue = F("Weedenplatz");
        break;
    }
    case 328852:
    {
        returnValue = F("Weedenstr.");
        break;
    }
    case 328853:
    {
        returnValue = F("Weedentwiete");
        break;
    }
    case 328854:
    {
        returnValue = F("Weedenweg");
        break;
    }
    case 328855:
    {
        returnValue = F("Weedeplatz");
        break;
    }
    case 328856:
    {
        returnValue = F("Weeder Dorfstr.");
        break;
    }
    case 328857:
    {
        returnValue = F("Weederedder");
        break;
    }
    case 328858:
    {
        returnValue = F("Weedestr.");
        break;
    }
    case 328859:
    {
        returnValue = F("Weedeweg");
        break;
    }
    case 328860:
    {
        returnValue = F("Weedflossgasse");
        break;
    }
    case 328861:
    {
        returnValue = F("Weedgasse");
        break;
    }
    case 328862:
    {
        returnValue = F("Weedkroog");
        break;
    }
    case 328863:
    {
        returnValue = F("Weedring");
        break;
    }
    case 328864:
    {
        returnValue = F("Weedstr.");
        break;
    }
    case 328865:
    {
        returnValue = F("Weeg");
        break;
    }
    case 328866:
    {
        returnValue = F("Weegen");
        break;
    }
    case 328867:
    {
        returnValue = F("Weegendyck");
        break;
    }
    case 328868:
    {
        returnValue = F("Weegener Str.");
        break;
    }
    case 328869:
    {
        returnValue = F("Weeger Berg");
        break;
    }
    case 328870:
    {
        returnValue = F("Weekeborg");
        break;
    }
    case 328871:
    {
        returnValue = F("Weelinger Str.");
        break;
    }
    case 328872:
    {
        returnValue = F("Weemkamp");
        break;
    }
    case 328873:
    {
        returnValue = F("Weendebogen");
        break;
    }
    case 328874:
    {
        returnValue = F("Weendelsbreite");
        break;
    }
    case 328875:
    {
        returnValue = F("Weender Landstr.");
        break;
    }
    case 328876:
    {
        returnValue = F("Weender Str.");
        break;
    }
    case 328877:
    {
        returnValue = F("Weender Weg");
        break;
    }
    case 328878:
    {
        returnValue = F("Weener Weg");
        break;
    }
    case 328879:
    {
        returnValue = F("Weenermoorer Str.");
        break;
    }
    case 328880:
    {
        returnValue = F("Weenerstr.");
        break;
    }
    case 328881:
    {
        returnValue = F("Weenser Damm");
        break;
    }
    case 328882:
    {
        returnValue = F("Weerseloer Str.");
        break;
    }
    case 328883:
    {
        returnValue = F("Weerthplatz");
        break;
    }
    case 328884:
    {
        returnValue = F("Weerthstr.");
        break;
    }
    case 328885:
    {
        returnValue = F("Weerthsweg");
        break;
    }
    case 328886:
    {
        returnValue = F("Weertohms Land");
        break;
    }
    case 328887:
    {
        returnValue = F("Weertsgatt");
        break;
    }
    case 328888:
    {
        returnValue = F("Weesbacher Str.");
        break;
    }
    case 328889:
    {
        returnValue = F("Weesbyer Str.");
        break;
    }
    case 328890:
    {
        returnValue = F("Weesener Str.");
        break;
    }
    case 328891:
    {
        returnValue = F("Weesener Weg");
        break;
    }
    case 328892:
    {
        returnValue = F("Weesensteiner Str.");
        break;
    }
    case 328893:
    {
        returnValue = F("Weesensteiner Weg");
        break;
    }
    case 328894:
    {
        returnValue = F("Weesenweide");
        break;
    }
    case 328895:
    {
        returnValue = F("Weeser Damm");
        break;
    }
    case 328896:
    {
        returnValue = F("Weeserweg");
        break;
    }
    case 328897:
    {
        returnValue = F("Weesower Chaussee");
        break;
    }
    case 328898:
    {
        returnValue = F("Weesower Dorfstr.");
        break;
    }
    case 328899:
    {
        returnValue = F("Weesower Str.");
        break;
    }
    case 328900:
    {
        returnValue = F("Weesrieser Str.");
        break;
    }
    case 328901:
    {
        returnValue = F("Weesrieser Weg");
        break;
    }
    case 328902:
    {
        returnValue = F("Weesterstich");
        break;
    }
    case 328903:
    {
        returnValue = F("Weesweg");
        break;
    }
    case 328904:
    {
        returnValue = F("Weetekamp");
        break;
    }
    case 328905:
    {
        returnValue = F("Weetenkamp");
        break;
    }
    case 328906:
    {
        returnValue = F("Weetenstück");
        break;
    }
    case 328907:
    {
        returnValue = F("Weetenweg");
        break;
    }
    case 328908:
    {
        returnValue = F("Weetfelder Str.");
        break;
    }
    case 328909:
    {
        returnValue = F("Weetgasse");
        break;
    }
    case 328910:
    {
        returnValue = F("Weethornweg");
        break;
    }
    case 328911:
    {
        returnValue = F("Weetkornstr.");
        break;
    }
    case 328912:
    {
        returnValue = F("Weetstich");
        break;
    }
    case 328913:
    {
        returnValue = F("Weetweg");
        break;
    }
    case 328914:
    {
        returnValue = F("Weetzener Landstr.");
        break;
    }
    case 328915:
    {
        returnValue = F("Weetzener Str.");
        break;
    }
    case 328916:
    {
        returnValue = F("Weetzer Kirchweg");
        break;
    }
    case 328917:
    {
        returnValue = F("Weezer Str.");
        break;
    }
    case 328918:
    {
        returnValue = F("Wefelen");
        break;
    }
    case 328919:
    {
        returnValue = F("Wefelsen");
        break;
    }
    case 328920:
    {
        returnValue = F("Wefelshof");
        break;
    }
    case 328921:
    {
        returnValue = F("Wefelshohler Schulweg");
        break;
    }
    case 328922:
    {
        returnValue = F("Wefelshohler Str.");
        break;
    }
    case 328923:
    {
        returnValue = F("Wefenslebener Berg");
        break;
    }
    case 328924:
    {
        returnValue = F("Wefenslebener Str.");
        break;
    }
    case 328925:
    {
        returnValue = F("Weferlinger Str.");
        break;
    }
    case 328926:
    {
        returnValue = F("Weferlingser Weg");
        break;
    }
    case 328927:
    {
        returnValue = F("Wefortstr.");
        break;
    }
    case 328928:
    {
        returnValue = F("Wefzgenhölzlesweg");
        break;
    }
    case 328929:
    {
        returnValue = F("Weg");
        break;
    }
    case 328930:
    {
        returnValue = F("Weg 01 - Neuenstaller Weg");
        break;
    }
    case 328931:
    {
        returnValue = F("Weg 02 - Flugplatzweg");
        break;
    }
    case 328932:
    {
        returnValue = F("Weg 03 - Wittinger Weg");
        break;
    }
    case 328933:
    {
        returnValue = F("Weg 04 - Fuhrweg");
        break;
    }
    case 328934:
    {
        returnValue = F("Weg 05");
        break;
    }
    case 328935:
    {
        returnValue = F("Weg 06");
        break;
    }
    case 328936:
    {
        returnValue = F("Weg 06 - Vierbuschweg");
        break;
    }
    case 328937:
    {
        returnValue = F("Weg 07");
        break;
    }
    case 328938:
    {
        returnValue = F("Weg 07 - Flugplatzweg");
        break;
    }
    case 328939:
    {
        returnValue = F("Weg 09");
        break;
    }
    case 328940:
    {
        returnValue = F("Weg 1");
        break;
    }
    case 328941:
    {
        returnValue = F("Weg 1 (Narzisse)");
        break;
    }
    case 328942:
    {
        returnValue = F("Weg 1 (Wassernixe)");
        break;
    }
    case 328943:
    {
        returnValue = F("Weg 1 - Jasminweg");
        break;
    }
    case 328944:
    {
        returnValue = F("Weg 10");
        break;
    }
    case 328945:
    {
        returnValue = F("Weg 10 (Kleingärtner's-Ruh)");
        break;
    }
    case 328946:
    {
        returnValue = F("Weg 11");
        break;
    }
    case 328947:
    {
        returnValue = F("Weg 11 (Sommerlust)");
        break;
    }
    case 328948:
    {
        returnValue = F("Weg 11 - Weg am Schilfgraben");
        break;
    }
    case 328949:
    {
        returnValue = F("Weg 12");
        break;
    }
    case 328950:
    {
        returnValue = F("Weg 12 (Meine Erholung)");
        break;
    }
    case 328951:
    {
        returnValue = F("Weg 12.1");
        break;
    }
    case 328952:
    {
        returnValue = F("Weg 13");
        break;
    }
    case 328953:
    {
        returnValue = F("Weg 13 (Nach Feierabend)");
        break;
    }
    case 328954:
    {
        returnValue = F("Weg 14");
        break;
    }
    case 328955:
    {
        returnValue = F("Weg 14 (Morgensonne)");
        break;
    }
    case 328956:
    {
        returnValue = F("Weg 19");
        break;
    }
    case 328957:
    {
        returnValue = F("Weg 1a");
        break;
    }
    case 328958:
    {
        returnValue = F("Weg 2");
        break;
    }
    case 328959:
    {
        returnValue = F("Weg 2 (Abendfrieden)");
        break;
    }
    case 328960:
    {
        returnValue = F("Weg 2 (Dornröschen)");
        break;
    }
    case 328961:
    {
        returnValue = F("Weg 20");
        break;
    }
    case 328962:
    {
        returnValue = F("Weg 209");
        break;
    }
    case 328963:
    {
        returnValue = F("Weg 24");
        break;
    }
    case 328964:
    {
        returnValue = F("Weg 25");
        break;
    }
    case 328965:
    {
        returnValue = F("Weg 26");
        break;
    }
    case 328966:
    {
        returnValue = F("Weg 27");
        break;
    }
    case 328967:
    {
        returnValue = F("Weg 28");
        break;
    }
    case 328968:
    {
        returnValue = F("Weg 29 Frohe Arbeit");
        break;
    }
    case 328969:
    {
        returnValue = F("Weg 3");
        break;
    }
    case 328970:
    {
        returnValue = F("Weg 3 (Edelweiß)");
        break;
    }
    case 328971:
    {
        returnValue = F("Weg 3 (Rosenweg)");
        break;
    }
    case 328972:
    {
        returnValue = F("Weg 3 - Schneewittchenweg");
        break;
    }
    case 328973:
    {
        returnValue = F("Weg 30");
        break;
    }
    case 328974:
    {
        returnValue = F("Weg 31");
        break;
    }
    case 328975:
    {
        returnValue = F("Weg 32");
        break;
    }
    case 328976:
    {
        returnValue = F("Weg 33");
        break;
    }
    case 328977:
    {
        returnValue = F("Weg 34");
        break;
    }
    case 328978:
    {
        returnValue = F("Weg 38");
        break;
    }
    case 328979:
    {
        returnValue = F("Weg 4");
        break;
    }
    case 328980:
    {
        returnValue = F("Weg 4 (Blumenfreunde)");
        break;
    }
    case 328981:
    {
        returnValue = F("Weg 4 (Vergißmeinnicht)");
        break;
    }
    case 328982:
    {
        returnValue = F("Weg 4 - Grüner Weg");
        break;
    }
    case 328983:
    {
        returnValue = F("Weg 4 - Spritweg");
        break;
    }
    case 328984:
    {
        returnValue = F("Weg 47");
        break;
    }
    case 328985:
    {
        returnValue = F("Weg 48");
        break;
    }
    case 328986:
    {
        returnValue = F("Weg 48 - EV Hausen");
        break;
    }
    case 328987:
    {
        returnValue = F("Weg 49");
        break;
    }
    case 328988:
    {
        returnValue = F("Weg 5");
        break;
    }
    case 328989:
    {
        returnValue = F("Weg 5 (Maiglöckchen)");
        break;
    }
    case 328990:
    {
        returnValue = F("Weg 5 (Reiter Zur frohen Stunde)");
        break;
    }
    case 328991:
    {
        returnValue = F("Weg 5 - Rot-Fuchs-Weg");
        break;
    }
    case 328992:
    {
        returnValue = F("Weg 50");
        break;
    }
    case 328993:
    {
        returnValue = F("Weg 51");
        break;
    }
    case 328994:
    {
        returnValue = F("Weg 6");
        break;
    }
    case 328995:
    {
        returnValue = F("Weg 6 (Drei Lilien)");
        break;
    }
    case 328996:
    {
        returnValue = F("Weg 6 (Freizeitidyll)");
        break;
    }
    case 328997:
    {
        returnValue = F("Weg 6 - Wichtelgasse");
        break;
    }
    case 328998:
    {
        returnValue = F("Weg 65");
        break;
    }
    case 328999:
    {
        returnValue = F("Weg 67a");
        break;
    }
    case 329000:
    {
        returnValue = F("Weg 69");
        break;
    }
    case 329001:
    {
        returnValue = F("Weg 7");
        break;
    }
    case 329002:
    {
        returnValue = F("Weg 7 (Frühlingserwachen)");
        break;
    }
    case 329003:
    {
        returnValue = F("Weg 70");
        break;
    }
    case 329004:
    {
        returnValue = F("Weg 71");
        break;
    }
    case 329005:
    {
        returnValue = F("Weg 72");
        break;
    }
    case 329006:
    {
        returnValue = F("Weg 76");
        break;
    }
    case 329007:
    {
        returnValue = F("Weg 77");
        break;
    }
    case 329008:
    {
        returnValue = F("Weg 8");
        break;
    }
    case 329009:
    {
        returnValue = F("Weg 8 (Sonnenland)");
        break;
    }
    case 329010:
    {
        returnValue = F("Weg 8.1");
        break;
    }
    case 329011:
    {
        returnValue = F("Weg 8.2");
        break;
    }
    case 329012:
    {
        returnValue = F("Weg 86");
        break;
    }
    case 329013:
    {
        returnValue = F("Weg 87");
        break;
    }
    case 329014:
    {
        returnValue = F("Weg 89");
        break;
    }
    case 329015:
    {
        returnValue = F("Weg 8a");
        break;
    }
    case 329016:
    {
        returnValue = F("Weg 9");
        break;
    }
    case 329017:
    {
        returnValue = F("Weg 9 (Goldene Höhe)");
        break;
    }
    case 329018:
    {
        returnValue = F("Weg 90");
        break;
    }
    case 329019:
    {
        returnValue = F("Weg 91");
        break;
    }
    case 329020:
    {
        returnValue = F("Weg 99");
        break;
    }
    case 329021:
    {
        returnValue = F("Weg Altschäffel");
        break;
    }
    case 329022:
    {
        returnValue = F("Weg An Der Rampe");
        break;
    }
    case 329023:
    {
        returnValue = F("Weg Aufm Brink");
        break;
    }
    case 329024:
    {
        returnValue = F("Weg Auf´m Brümmel");
        break;
    }
    case 329025:
    {
        returnValue = F("Weg Beim Brink");
        break;
    }
    case 329026:
    {
        returnValue = F("Weg Bossard");
        break;
    }
    case 329027:
    {
        returnValue = F("Weg D3");
        break;
    }
    case 329028:
    {
        returnValue = F("Weg Dobberzin-Kerkow");
        break;
    }
    case 329029:
    {
        returnValue = F("Weg Dornswalde-Zesch");
        break;
    }
    case 329030:
    {
        returnValue = F("Weg Gehren nach Riedebeck");
        break;
    }
    case 329031:
    {
        returnValue = F("Weg Grenzstr./Mehner Masch");
        break;
    }
    case 329032:
    {
        returnValue = F("Weg I");
        break;
    }
    case 329033:
    {
        returnValue = F("Weg I „Zum Floßhaus“");
        break;
    }
    case 329034:
    {
        returnValue = F("Weg II");
        break;
    }
    case 329035:
    {
        returnValue = F("Weg II „An der Elster“");
        break;
    }
    case 329036:
    {
        returnValue = F("Weg III");
        break;
    }
    case 329037:
    {
        returnValue = F("Weg IV");
        break;
    }
    case 329038:
    {
        returnValue = F("Weg Köckerritz");
        break;
    }
    case 329039:
    {
        returnValue = F("Weg Königsholzerweg/Zur Egge");
        break;
    }
    case 329040:
    {
        returnValue = F("Weg Leverner Str./südlich Kanal");
        break;
    }
    case 329041:
    {
        returnValue = F("Weg M");
        break;
    }
    case 329042:
    {
        returnValue = F("Weg Nr. 11");
        break;
    }
    case 329043:
    {
        returnValue = F("Weg Nr. 12");
        break;
    }
    case 329044:
    {
        returnValue = F("Weg Nr. 13");
        break;
    }
    case 329045:
    {
        returnValue = F("Weg Nr. 14");
        break;
    }
    case 329046:
    {
        returnValue = F("Weg Nr. 15");
        break;
    }
    case 329047:
    {
        returnValue = F("Weg Nr. 16");
        break;
    }
    case 329048:
    {
        returnValue = F("Weg Nr. 17");
        break;
    }
    case 329049:
    {
        returnValue = F("Weg Nr. 18");
        break;
    }
    case 329050:
    {
        returnValue = F("Weg Nr. 19");
        break;
    }
    case 329051:
    {
        returnValue = F("Weg Nr. 2");
        break;
    }
    case 329052:
    {
        returnValue = F("Weg Nr. 20");
        break;
    }
    case 329053:
    {
        returnValue = F("Weg Nr. 21");
        break;
    }
    case 329054:
    {
        returnValue = F("Weg Nr. 22");
        break;
    }
    case 329055:
    {
        returnValue = F("Weg Nr. 23");
        break;
    }
    case 329056:
    {
        returnValue = F("Weg Nr. 24");
        break;
    }
    case 329057:
    {
        returnValue = F("Weg Nr. 25");
        break;
    }
    case 329058:
    {
        returnValue = F("Weg Nr. 26");
        break;
    }
    case 329059:
    {
        returnValue = F("Weg Nr. 27");
        break;
    }
    case 329060:
    {
        returnValue = F("Weg Nr. 28");
        break;
    }
    case 329061:
    {
        returnValue = F("Weg Nr. 29");
        break;
    }
    case 329062:
    {
        returnValue = F("Weg Nr. 30");
        break;
    }
    case 329063:
    {
        returnValue = F("Weg Nr. 31");
        break;
    }
    case 329064:
    {
        returnValue = F("Weg Nr. 32");
        break;
    }
    case 329065:
    {
        returnValue = F("Weg Nr. 4");
        break;
    }
    case 329066:
    {
        returnValue = F("Weg Nr. 5");
        break;
    }
    case 329067:
    {
        returnValue = F("Weg Nr. 6");
        break;
    }
    case 329068:
    {
        returnValue = F("Weg Nr. 7");
        break;
    }
    case 329069:
    {
        returnValue = F("Weg Nr. K 6");
        break;
    }
    case 329070:
    {
        returnValue = F("Weg Nummer 16");
        break;
    }
    case 329071:
    {
        returnValue = F("Weg Parstein Gellmersdorf");
        break;
    }
    case 329072:
    {
        returnValue = F("Weg Richtung Prieros");
        break;
    }
    case 329073:
    {
        returnValue = F("Weg Schnäuen nb");
        break;
    }
    case 329074:
    {
        returnValue = F("Weg Sohlener Str./ Frohser Berge");
        break;
    }
    case 329075:
    {
        returnValue = F("Weg Unteres Stäudig");
        break;
    }
    case 329076:
    {
        returnValue = F("Weg V");
        break;
    }
    case 329077:
    {
        returnValue = F("Weg VI");
        break;
    }
    case 329078:
    {
        returnValue = F("Weg VII");
        break;
    }
    case 329079:
    {
        returnValue = F("Weg X");
        break;
    }
    case 329080:
    {
        returnValue = F("Weg Zum Offenstall");
        break;
    }
    case 329081:
    {
        returnValue = F("Weg Zur Sonne");
        break;
    }
    case 329082:
    {
        returnValue = F("Weg am Acker");
        break;
    }
    case 329083:
    {
        returnValue = F("Weg am Allergraben");
        break;
    }
    case 329084:
    {
        returnValue = F("Weg am Bahndamm");
        break;
    }
    case 329085:
    {
        returnValue = F("Weg am Berlach");
        break;
    }
    case 329086:
    {
        returnValue = F("Weg am Blöcken");
        break;
    }
    case 329087:
    {
        returnValue = F("Weg am Brand(t)enburger Tor");
        break;
    }
    case 329088:
    {
        returnValue = F("Weg am Cu");
        break;
    }
    case 329089:
    {
        returnValue = F("Weg am Denkmal");
        break;
    }
    case 329090:
    {
        returnValue = F("Weg am Dorfe");
        break;
    }
    case 329091:
    {
        returnValue = F("Weg am Eckenkamp");
        break;
    }
    case 329092:
    {
        returnValue = F("Weg am Effelsberger Bach");
        break;
    }
    case 329093:
    {
        returnValue = F("Weg am Foßkamp");
        break;
    }
    case 329094:
    {
        returnValue = F("Weg am Fuchsstück");
        break;
    }
    case 329095:
    {
        returnValue = F("Weg am Galgendorn");
        break;
    }
    case 329096:
    {
        returnValue = F("Weg am Hang");
        break;
    }
    case 329097:
    {
        returnValue = F("Weg am Hoffeld");
        break;
    }
    case 329098:
    {
        returnValue = F("Weg am Holzlagerplatz");
        break;
    }
    case 329099:
    {
        returnValue = F("Weg am Jesargraben");
        break;
    }
    case 329100:
    {
        returnValue = F("Weg am Kanalgraben");
        break;
    }
    case 329101:
    {
        returnValue = F("Weg am Kassel");
        break;
    }
    case 329102:
    {
        returnValue = F("Weg am Kotten Nie");
        break;
    }
    case 329103:
    {
        returnValue = F("Weg am Krampnitzsee");
        break;
    }
    case 329104:
    {
        returnValue = F("Weg am Krankenhaus");
        break;
    }
    case 329105:
    {
        returnValue = F("Weg am Krummenhäger See");
        break;
    }
    case 329106:
    {
        returnValue = F("Weg am Kötterberg");
        break;
    }
    case 329107:
    {
        returnValue = F("Weg am Lindholz");
        break;
    }
    case 329108:
    {
        returnValue = F("Weg am Maierpfuhl");
        break;
    }
    case 329109:
    {
        returnValue = F("Weg am Mühlengraben");
        break;
    }
    case 329110:
    {
        returnValue = F("Weg am Nottekanal");
        break;
    }
    case 329111:
    {
        returnValue = F("Weg am Park");
        break;
    }
    case 329112:
    {
        returnValue = F("Weg am Rehbach");
        break;
    }
    case 329113:
    {
        returnValue = F("Weg am Reitstall");
        break;
    }
    case 329114:
    {
        returnValue = F("Weg am Rosengarten");
        break;
    }
    case 329115:
    {
        returnValue = F("Weg am Sauforst");
        break;
    }
    case 329116:
    {
        returnValue = F("Weg am Schächle");
        break;
    }
    case 329117:
    {
        returnValue = F("Weg am See");
        break;
    }
    case 329118:
    {
        returnValue = F("Weg am Silo");
        break;
    }
    case 329119:
    {
        returnValue = F("Weg am Spanischen Tief");
        break;
    }
    case 329120:
    {
        returnValue = F("Weg am Spiegelberg");
        break;
    }
    case 329121:
    {
        returnValue = F("Weg am Spitzerfurth");
        break;
    }
    case 329122:
    {
        returnValue = F("Weg am Sportplatz");
        break;
    }
    case 329123:
    {
        returnValue = F("Weg am Stadtarm");
        break;
    }
    case 329124:
    {
        returnValue = F("Weg am Stadtpark");
        break;
    }
    case 329125:
    {
        returnValue = F("Weg am Steinberg");
        break;
    }
    case 329126:
    {
        returnValue = F("Weg am Tonsee");
        break;
    }
    case 329127:
    {
        returnValue = F("Weg am Umspannwerk");
        break;
    }
    case 329128:
    {
        returnValue = F("Weg am Vierthof");
        break;
    }
    case 329129:
    {
        returnValue = F("Weg am Volkshaus");
        break;
    }
    case 329130:
    {
        returnValue = F("Weg am Wald");
        break;
    }
    case 329131:
    {
        returnValue = F("Weg am Waldrand");
        break;
    }
    case 329132:
    {
        returnValue = F("Weg am Wasser");
        break;
    }
    case 329133:
    {
        returnValue = F("Weg am Wasserbehälter");
        break;
    }
    case 329134:
    {
        returnValue = F("Weg am Wasserhäuschen");
        break;
    }
    case 329135:
    {
        returnValue = F("Weg am Wehrholz");
        break;
    }
    case 329136:
    {
        returnValue = F("Weg am Weidendamm");
        break;
    }
    case 329137:
    {
        returnValue = F("Weg am Zenssee");
        break;
    }
    case 329138:
    {
        returnValue = F("Weg an den Bahngleisen");
        break;
    }
    case 329139:
    {
        returnValue = F("Weg an den Fischteichen");
        break;
    }
    case 329140:
    {
        returnValue = F("Weg an den Wiesen");
        break;
    }
    case 329141:
    {
        returnValue = F("Weg an der A72");
        break;
    }
    case 329142:
    {
        returnValue = F("Weg an der Aue");
        break;
    }
    case 329143:
    {
        returnValue = F("Weg an der Bahn");
        break;
    }
    case 329144:
    {
        returnValue = F("Weg an der Bornschen Grenze");
        break;
    }
    case 329145:
    {
        returnValue = F("Weg an der Breiten");
        break;
    }
    case 329146:
    {
        returnValue = F("Weg an der Bruchkante");
        break;
    }
    case 329147:
    {
        returnValue = F("Weg an der Fasanerie");
        break;
    }
    case 329148:
    {
        returnValue = F("Weg an der Grasmörte");
        break;
    }
    case 329149:
    {
        returnValue = F("Weg an der Gutsmauer");
        break;
    }
    case 329150:
    {
        returnValue = F("Weg an der Havel");
        break;
    }
    case 329151:
    {
        returnValue = F("Weg an der Kleinbahn");
        break;
    }
    case 329152:
    {
        returnValue = F("Weg an der LPG");
        break;
    }
    case 329153:
    {
        returnValue = F("Weg an der Löbau");
        break;
    }
    case 329154:
    {
        returnValue = F("Weg an der Steinkuhle");
        break;
    }
    case 329155:
    {
        returnValue = F("Weg an der Wagnerbrücke");
        break;
    }
    case 329156:
    {
        returnValue = F("Weg an der Weida");
        break;
    }
    case 329157:
    {
        returnValue = F("Weg auf dem Bahndamm");
        break;
    }
    case 329158:
    {
        returnValue = F("Weg auf der Staumauer");
        break;
    }
    case 329159:
    {
        returnValue = F("Weg auf's Meindorfs Fahr");
        break;
    }
    case 329160:
    {
        returnValue = F("Weg aufgegeben");
        break;
    }
    case 329161:
    {
        returnValue = F("Weg bei Krumm");
        break;
    }
    case 329162:
    {
        returnValue = F("Weg bei den Kreistannen");
        break;
    }
    case 329163:
    {
        returnValue = F("Weg der (Be-)Sinnlichkeit");
        break;
    }
    case 329164:
    {
        returnValue = F("Weg der Achtsamkeit");
        break;
    }
    case 329165:
    {
        returnValue = F("Weg der Barmherzigen Schwestern");
        break;
    }
    case 329166:
    {
        returnValue = F("Weg der Begegnung");
        break;
    }
    case 329167:
    {
        returnValue = F("Weg der Besinnung");
        break;
    }
    case 329168:
    {
        returnValue = F("Weg der Bodenreform");
        break;
    }
    case 329169:
    {
        returnValue = F("Weg der Einheit");
        break;
    }
    case 329170:
    {
        returnValue = F("Weg der Frau");
        break;
    }
    case 329171:
    {
        returnValue = F("Weg der Freundschaft");
        break;
    }
    case 329172:
    {
        returnValue = F("Weg der Jahresbäume");
        break;
    }
    case 329173:
    {
        returnValue = F("Weg der Jugend");
        break;
    }
    case 329174:
    {
        returnValue = F("Weg der Jungen Pioniere");
        break;
    }
    case 329175:
    {
        returnValue = F("Weg der Monolithe");
        break;
    }
    case 329176:
    {
        returnValue = F("Weg der Märzgefallenen");
        break;
    }
    case 329177:
    {
        returnValue = F("Weg der Naturfreunde");
        break;
    }
    case 329178:
    {
        returnValue = F("Weg der Ruderer");
        break;
    }
    case 329179:
    {
        returnValue = F("Weg der Römer");
        break;
    }
    case 329180:
    {
        returnValue = F("Weg der Technik");
        break;
    }
    case 329181:
    {
        returnValue = F("Weg der Verliebten");
        break;
    }
    case 329182:
    {
        returnValue = F("Weg der Zukunft");
        break;
    }
    case 329183:
    {
        returnValue = F("Weg der alten Kameraden");
        break;
    }
    case 329184:
    {
        returnValue = F("Weg des Erinnerns");
        break;
    }
    case 329185:
    {
        returnValue = F("Weg des Friedens");
        break;
    }
    case 329186:
    {
        returnValue = F("Weg des Gedenkens");
        break;
    }
    case 329187:
    {
        returnValue = F("Weg des Wassers");
        break;
    }
    case 329188:
    {
        returnValue = F("Weg durch Gartenverein");
        break;
    }
    case 329189:
    {
        returnValue = F("Weg durch die Hohle");
        break;
    }
    case 329190:
    {
        returnValue = F("Weg hinter dem Friedhof");
        break;
    }
    case 329191:
    {
        returnValue = F("Weg hinter dem Vierdel");
        break;
    }
    case 329192:
    {
        returnValue = F("Weg hinter den Gärten");
        break;
    }
    case 329193:
    {
        returnValue = F("Weg hinter den Häusern");
        break;
    }
    case 329194:
    {
        returnValue = F("Weg hinter der Bahn");
        break;
    }
    case 329195:
    {
        returnValue = F("Weg hinter der Binnung");
        break;
    }
    case 329196:
    {
        returnValue = F("Weg im \"Bobenloch");
        break;
    }
    case 329197:
    {
        returnValue = F("Weg im Bornschen Winkel");
        break;
    }
    case 329198:
    {
        returnValue = F("Weg im Bruch");
        break;
    }
    case 329199:
    {
        returnValue = F("Weg im Dorfe");
        break;
    }
    case 329200:
    {
        returnValue = F("Weg im Esterholz");
        break;
    }
    case 329201:
    {
        returnValue = F("Weg im Feld");
        break;
    }
    case 329202:
    {
        returnValue = F("Weg im Friedhof");
        break;
    }
    case 329203:
    {
        returnValue = F("Weg im Garten");
        break;
    }
    case 329204:
    {
        returnValue = F("Weg im Polder");
        break;
    }
    case 329205:
    {
        returnValue = F("Weg im Posenacker");
        break;
    }
    case 329206:
    {
        returnValue = F("Weg im Sand");
        break;
    }
    case 329207:
    {
        returnValue = F("Weg im Uelser Holt");
        break;
    }
    case 329208:
    {
        returnValue = F("Weg im alten Feld");
        break;
    }
    case 329209:
    {
        returnValue = F("Weg in Suerhop");
        break;
    }
    case 329210:
    {
        returnValue = F("Weg in den Interessentenforst");
        break;
    }
    case 329211:
    {
        returnValue = F("Weg in den Kemetenhöhen");
        break;
    }
    case 329212:
    {
        returnValue = F("Weg in der Aue");
        break;
    }
    case 329213:
    {
        returnValue = F("Weg in die Hanebek");
        break;
    }
    case 329214:
    {
        returnValue = F("Weg ins Bergfeld");
        break;
    }
    case 329215:
    {
        returnValue = F("Weg ins Feld");
        break;
    }
    case 329216:
    {
        returnValue = F("Weg ins Gries");
        break;
    }
    case 329217:
    {
        returnValue = F("Weg ins Grüne");
        break;
    }
    case 329218:
    {
        returnValue = F("Weg ins Hoftal");
        break;
    }
    case 329219:
    {
        returnValue = F("Weg mit Brückchen übers Biotop");
        break;
    }
    case 329220:
    {
        returnValue = F("Weg nach Afrika");
        break;
    }
    case 329221:
    {
        returnValue = F("Weg nach Amsdorf");
        break;
    }
    case 329222:
    {
        returnValue = F("Weg nach Biesdorf");
        break;
    }
    case 329223:
    {
        returnValue = F("Weg nach Birkholz");
        break;
    }
    case 329224:
    {
        returnValue = F("Weg nach Bornim");
        break;
    }
    case 329225:
    {
        returnValue = F("Weg nach Bornsdorf");
        break;
    }
    case 329226:
    {
        returnValue = F("Weg nach Bühne");
        break;
    }
    case 329227:
    {
        returnValue = F("Weg nach Caputh");
        break;
    }
    case 329228:
    {
        returnValue = F("Weg nach Gutengermendorf");
        break;
    }
    case 329229:
    {
        returnValue = F("Weg nach Herders Ruhe");
        break;
    }
    case 329230:
    {
        returnValue = F("Weg nach Hofe");
        break;
    }
    case 329231:
    {
        returnValue = F("Weg nach Hohenheide");
        break;
    }
    case 329232:
    {
        returnValue = F("Weg nach Horstwalde");
        break;
    }
    case 329233:
    {
        returnValue = F("Weg nach Hutha");
        break;
    }
    case 329234:
    {
        returnValue = F("Weg nach Kablow Ziegelei");
        break;
    }
    case 329235:
    {
        returnValue = F("Weg nach Kamerun");
        break;
    }
    case 329236:
    {
        returnValue = F("Weg nach Kistritz");
        break;
    }
    case 329237:
    {
        returnValue = F("Weg nach Kössuln");
        break;
    }
    case 329238:
    {
        returnValue = F("Weg nach Landstorf");
        break;
    }
    case 329239:
    {
        returnValue = F("Weg nach Marienwerder");
        break;
    }
    case 329240:
    {
        returnValue = F("Weg nach Mellensee");
        break;
    }
    case 329241:
    {
        returnValue = F("Weg nach Nessa");
        break;
    }
    case 329242:
    {
        returnValue = F("Weg nach Nordhausen");
        break;
    }
    case 329243:
    {
        returnValue = F("Weg nach Nudersdorf");
        break;
    }
    case 329244:
    {
        returnValue = F("Weg nach Petershagen");
        break;
    }
    case 329245:
    {
        returnValue = F("Weg nach Reesdorf");
        break;
    }
    case 329246:
    {
        returnValue = F("Weg nach Satzkorn");
        break;
    }
    case 329247:
    {
        returnValue = F("Weg nach Schwerstedt");
        break;
    }
    case 329248:
    {
        returnValue = F("Weg nach Schönbirken");
        break;
    }
    case 329249:
    {
        returnValue = F("Weg nach Selchow");
        break;
    }
    case 329250:
    {
        returnValue = F("Weg nach Stedtlingen");
        break;
    }
    case 329251:
    {
        returnValue = F("Weg nach Steinförde");
        break;
    }
    case 329252:
    {
        returnValue = F("Weg nach Taucha");
        break;
    }
    case 329253:
    {
        returnValue = F("Weg nach Waldfrieden");
        break;
    }
    case 329254:
    {
        returnValue = F("Weg nach Wenzlow");
        break;
    }
    case 329255:
    {
        returnValue = F("Weg nach Wittersitt, war schon unsrer Hexe Afra Dikh bekannt");
        break;
    }
    case 329256:
    {
        returnValue = F("Weg nach Wolfshagen");
        break;
    }
    case 329257:
    {
        returnValue = F("Weg nach Wolzig");
        break;
    }
    case 329258:
    {
        returnValue = F("Weg nach Wulkow");
        break;
    }
    case 329259:
    {
        returnValue = F("Weg nach Zermützel");
        break;
    }
    case 329260:
    {
        returnValue = F("Weg nach Zesch");
        break;
    }
    case 329261:
    {
        returnValue = F("Weg nach dem Kalkwerk");
        break;
    }
    case 329262:
    {
        returnValue = F("Weg nach den Hingbenden");
        break;
    }
    case 329263:
    {
        returnValue = F("Weg nach der Buchenmühle");
        break;
    }
    case 329264:
    {
        returnValue = F("Weg nicht mit dem MTB befahrbar (Dornen)");
        break;
    }
    case 329265:
    {
        returnValue = F("Weg nicht mit dem MTB befahrbar (umgestürzter Baum)");
        break;
    }
    case 329266:
    {
        returnValue = F("Weg nördlich AmYachthafen");
        break;
    }
    case 329267:
    {
        returnValue = F("Weg ohne Namen");
        break;
    }
    case 329268:
    {
        returnValue = F("Weg um den Kleinen Helmsberg");
        break;
    }
    case 329269:
    {
        returnValue = F("Weg um den Weiher");
        break;
    }
    case 329270:
    {
        returnValue = F("Weg vom Blauen See zur Kolonie");
        break;
    }
    case 329271:
    {
        returnValue = F("Weg von Daubitz nach Tränke");
        break;
    }
    case 329272:
    {
        returnValue = F("Weg von Görsdorf");
        break;
    }
    case 329273:
    {
        returnValue = F("Weg von Niendorf nach Bantow");
        break;
    }
    case 329274:
    {
        returnValue = F("Weg von Schmedshagen nach Krönnevitz");
        break;
    }
    case 329275:
    {
        returnValue = F("Weg von Skaby");
        break;
    }
    case 329276:
    {
        returnValue = F("Weg von der Schule");
        break;
    }
    case 329277:
    {
        returnValue = F("Weg vorm Moor");
        break;
    }
    case 329278:
    {
        returnValue = F("Weg zu Haltestelle Audi AG - Tor 10");
        break;
    }
    case 329279:
    {
        returnValue = F("Weg zu Schuppen");
        break;
    }
    case 329280:
    {
        returnValue = F("Weg zu Wunderlich");
        break;
    }
    case 329281:
    {
        returnValue = F("Weg zu den Gärten");
        break;
    }
    case 329282:
    {
        returnValue = F("Weg zu den Sommerklippen");
        break;
    }
    case 329283:
    {
        returnValue = F("Weg zu den Ställen");
        break;
    }
    case 329284:
    {
        returnValue = F("Weg zu den Tannen");
        break;
    }
    case 329285:
    {
        returnValue = F("Weg zugewachsen mit Büschen");
        break;
    }
    case 329286:
    {
        returnValue = F("Weg zum \"Westhäuser Stein");
        break;
    }
    case 329287:
    {
        returnValue = F("Weg zum Alten Sportplatz");
        break;
    }
    case 329288:
    {
        returnValue = F("Weg zum Angelhof");
        break;
    }
    case 329289:
    {
        returnValue = F("Weg zum Baderhof");
        break;
    }
    case 329290:
    {
        returnValue = F("Weg zum Badeteich");
        break;
    }
    case 329291:
    {
        returnValue = F("Weg zum Badhaus");
        break;
    }
    case 329292:
    {
        returnValue = F("Weg zum Bahnhof");
        break;
    }
    case 329293:
    {
        returnValue = F("Weg zum Bahnsteig der S2");
        break;
    }
    case 329294:
    {
        returnValue = F("Weg zum Bergpfad");
        break;
    }
    case 329295:
    {
        returnValue = F("Weg zum Biedenkopfblick");
        break;
    }
    case 329296:
    {
        returnValue = F("Weg zum Brand");
        break;
    }
    case 329297:
    {
        returnValue = F("Weg zum Brook");
        break;
    }
    case 329298:
    {
        returnValue = F("Weg zum Brünnlein");
        break;
    }
    case 329299:
    {
        returnValue = F("Weg zum Bunzenberg");
        break;
    }
    case 329300:
    {
        returnValue = F("Weg zum Dachsfelsen");
        break;
    }
    case 329301:
    {
        returnValue = F("Weg zum Dorfplatz");
        break;
    }
    case 329302:
    {
        returnValue = F("Weg zum Dreibauernteich");
        break;
    }
    case 329303:
    {
        returnValue = F("Weg zum Ehrenmal");
        break;
    }
    case 329304:
    {
        returnValue = F("Weg zum Eichbach");
        break;
    }
    case 329305:
    {
        returnValue = F("Weg zum Eichholz");
        break;
    }
    case 329306:
    {
        returnValue = F("Weg zum Eigenheim");
        break;
    }
    case 329307:
    {
        returnValue = F("Weg zum Fahr- und Reitzentrum");
        break;
    }
    case 329308:
    {
        returnValue = F("Weg zum Feld");
        break;
    }
    case 329309:
    {
        returnValue = F("Weg zum Fischpfuhl");
        break;
    }
    case 329310:
    {
        returnValue = F("Weg zum Flachstal");
        break;
    }
    case 329311:
    {
        returnValue = F("Weg zum Flößteich");
        break;
    }
    case 329312:
    {
        returnValue = F("Weg zum Forellensee");
        break;
    }
    case 329313:
    {
        returnValue = F("Weg zum Freibad");
        break;
    }
    case 329314:
    {
        returnValue = F("Weg zum Friedhof");
        break;
    }
    case 329315:
    {
        returnValue = F("Weg zum Galgenberg");
        break;
    }
    case 329316:
    {
        returnValue = F("Weg zum Gipfel");
        break;
    }
    case 329317:
    {
        returnValue = F("Weg zum Grenzteich");
        break;
    }
    case 329318:
    {
        returnValue = F("Weg zum Grünen Platz");
        break;
    }
    case 329319:
    {
        returnValue = F("Weg zum Haus H");
        break;
    }
    case 329320:
    {
        returnValue = F("Weg zum Haussee");
        break;
    }
    case 329321:
    {
        returnValue = F("Weg zum Hochbehälter");
        break;
    }
    case 329322:
    {
        returnValue = F("Weg zum Hofsee");
        break;
    }
    case 329323:
    {
        returnValue = F("Weg zum Hohen Ufer");
        break;
    }
    case 329324:
    {
        returnValue = F("Weg zum Hohenstein");
        break;
    }
    case 329325:
    {
        returnValue = F("Weg zum Holderneß");
        break;
    }
    case 329326:
    {
        returnValue = F("Weg zum Holzwinkelsaal");
        break;
    }
    case 329327:
    {
        returnValue = F("Weg zum Hutberg");
        break;
    }
    case 329328:
    {
        returnValue = F("Weg zum Jungfernbusch");
        break;
    }
    case 329329:
    {
        returnValue = F("Weg zum Keulenberg");
        break;
    }
    case 329330:
    {
        returnValue = F("Weg zum Kickelberg");
        break;
    }
    case 329331:
    {
        returnValue = F("Weg zum Kiel");
        break;
    }
    case 329332:
    {
        returnValue = F("Weg zum Kiesabbau");
        break;
    }
    case 329333:
    {
        returnValue = F("Weg zum Kindergarten");
        break;
    }
    case 329334:
    {
        returnValue = F("Weg zum Knittelholz");
        break;
    }
    case 329335:
    {
        returnValue = F("Weg zum Kombinat");
        break;
    }
    case 329336:
    {
        returnValue = F("Weg zum Kotten Nie");
        break;
    }
    case 329337:
    {
        returnValue = F("Weg zum Krankenhaus");
        break;
    }
    case 329338:
    {
        returnValue = F("Weg zum Kreuz");
        break;
    }
    case 329339:
    {
        returnValue = F("Weg zum Lausch");
        break;
    }
    case 329340:
    {
        returnValue = F("Weg zum Leuchtturm");
        break;
    }
    case 329341:
    {
        returnValue = F("Weg zum Liebenstein");
        break;
    }
    case 329342:
    {
        returnValue = F("Weg zum Moor");
        break;
    }
    case 329343:
    {
        returnValue = F("Weg zum Mühlenfließ");
        break;
    }
    case 329344:
    {
        returnValue = F("Weg zum Otto Dix Museum");
        break;
    }
    case 329345:
    {
        returnValue = F("Weg zum Panswald");
        break;
    }
    case 329346:
    {
        returnValue = F("Weg zum Petzinsee");
        break;
    }
    case 329347:
    {
        returnValue = F("Weg zum Pfahl");
        break;
    }
    case 329348:
    {
        returnValue = F("Weg zum Pfarrbüro");
        break;
    }
    case 329349:
    {
        returnValue = F("Weg zum Poethen");
        break;
    }
    case 329350:
    {
        returnValue = F("Weg zum Reiterhof");
        break;
    }
    case 329351:
    {
        returnValue = F("Weg zum Reitplatz");
        break;
    }
    case 329352:
    {
        returnValue = F("Weg zum Resum");
        break;
    }
    case 329353:
    {
        returnValue = F("Weg zum Rimpaustein");
        break;
    }
    case 329354:
    {
        returnValue = F("Weg zum Roten Marterl");
        break;
    }
    case 329355:
    {
        returnValue = F("Weg zum Roten See");
        break;
    }
    case 329356:
    {
        returnValue = F("Weg zum Rotenbächle");
        break;
    }
    case 329357:
    {
        returnValue = F("Weg zum Rötepark");
        break;
    }
    case 329358:
    {
        returnValue = F("Weg zum Saeggepfuhl");
        break;
    }
    case 329359:
    {
        returnValue = F("Weg zum Sandloch");
        break;
    }
    case 329360:
    {
        returnValue = F("Weg zum Schlößchen");
        break;
    }
    case 329361:
    {
        returnValue = F("Weg zum Schwimmbad");
        break;
    }
    case 329362:
    {
        returnValue = F("Weg zum See");
        break;
    }
    case 329363:
    {
        returnValue = F("Weg zum Sportplatz");
        break;
    }
    case 329364:
    {
        returnValue = F("Weg zum Stadtwald");
        break;
    }
    case 329365:
    {
        returnValue = F("Weg zum Stausee");
        break;
    }
    case 329366:
    {
        returnValue = F("Weg zum Stockbach");
        break;
    }
    case 329367:
    {
        returnValue = F("Weg zum Strand");
        break;
    }
    case 329368:
    {
        returnValue = F("Weg zum Strandbad");
        break;
    }
    case 329369:
    {
        returnValue = F("Weg zum Stubbenacker");
        break;
    }
    case 329370:
    {
        returnValue = F("Weg zum Tannenkamp");
        break;
    }
    case 329371:
    {
        returnValue = F("Weg zum Teich");
        break;
    }
    case 329372:
    {
        returnValue = F("Weg zum Terrassencafe");
        break;
    }
    case 329373:
    {
        returnValue = F("Weg zum Travewanderweg");
        break;
    }
    case 329374:
    {
        returnValue = F("Weg zum Ufer");
        break;
    }
    case 329375:
    {
        returnValue = F("Weg zum Urlauberdorf");
        break;
    }
    case 329376:
    {
        returnValue = F("Weg zum Wasserfall");
        break;
    }
    case 329377:
    {
        returnValue = F("Weg zum Wasserturm");
        break;
    }
    case 329378:
    {
        returnValue = F("Weg zum Wasserwerk");
        break;
    }
    case 329379:
    {
        returnValue = F("Weg zum Weberteich");
        break;
    }
    case 329380:
    {
        returnValue = F("Weg zum Weinberg");
        break;
    }
    case 329381:
    {
        returnValue = F("Weg zum Weissenbach");
        break;
    }
    case 329382:
    {
        returnValue = F("Weg zum Weißen Moor");
        break;
    }
    case 329383:
    {
        returnValue = F("Weg zum Wilhelmsgrund");
        break;
    }
    case 329384:
    {
        returnValue = F("Weg zum Wirchensee");
        break;
    }
    case 329385:
    {
        returnValue = F("Weg zum Wutzsee");
        break;
    }
    case 329386:
    {
        returnValue = F("Weg zum Zeltplatz");
        break;
    }
    case 329387:
    {
        returnValue = F("Weg zum Zwiebelfeld");
        break;
    }
    case 329388:
    {
        returnValue = F("Weg zum alten Melkstand");
        break;
    }
    case 329389:
    {
        returnValue = F("Weg zur Alten Bückeburg");
        break;
    }
    case 329390:
    {
        returnValue = F("Weg zur Ameisenbrücke");
        break;
    }
    case 329391:
    {
        returnValue = F("Weg zur Au");
        break;
    }
    case 329392:
    {
        returnValue = F("Weg zur Bachteilung");
        break;
    }
    case 329393:
    {
        returnValue = F("Weg zur Badeanstalt");
        break;
    }
    case 329394:
    {
        returnValue = F("Weg zur Badestelle");
        break;
    }
    case 329395:
    {
        returnValue = F("Weg zur Bahn");
        break;
    }
    case 329396:
    {
        returnValue = F("Weg zur Bettelfrau");
        break;
    }
    case 329397:
    {
        returnValue = F("Weg zur Biberfarm");
        break;
    }
    case 329398:
    {
        returnValue = F("Weg zur Biebersiedlung");
        break;
    }
    case 329399:
    {
        returnValue = F("Weg zur Brunecke");
        break;
    }
    case 329400:
    {
        returnValue = F("Weg zur Burg");
        break;
    }
    case 329401:
    {
        returnValue = F("Weg zur Bünsche");
        break;
    }
    case 329402:
    {
        returnValue = F("Weg zur Chaussee");
        break;
    }
    case 329403:
    {
        returnValue = F("Weg zur Eich");
        break;
    }
    case 329404:
    {
        returnValue = F("Weg zur Fasanerie");
        break;
    }
    case 329405:
    {
        returnValue = F("Weg zur Feinspinnerei");
        break;
    }
    case 329406:
    {
        returnValue = F("Weg zur Frohen Zukunft");
        break;
    }
    case 329407:
    {
        returnValue = F("Weg zur Fähre");
        break;
    }
    case 329408:
    {
        returnValue = F("Weg zur Gitstapper Mühle");
        break;
    }
    case 329409:
    {
        returnValue = F("Weg zur Graupenmühle");
        break;
    }
    case 329410:
    {
        returnValue = F("Weg zur Handlung");
        break;
    }
    case 329411:
    {
        returnValue = F("Weg zur Hardewiese");
        break;
    }
    case 329412:
    {
        returnValue = F("Weg zur Haus der Mitte");
        break;
    }
    case 329413:
    {
        returnValue = F("Weg zur Hechtsforthschleuse");
        break;
    }
    case 329414:
    {
        returnValue = F("Weg zur Holzkoppel");
        break;
    }
    case 329415:
    {
        returnValue = F("Weg zur Hörsel");
        break;
    }
    case 329416:
    {
        returnValue = F("Weg zur Hütte");
        break;
    }
    case 329417:
    {
        returnValue = F("Weg zur Insula");
        break;
    }
    case 329418:
    {
        returnValue = F("Weg zur Jugendherberge");
        break;
    }
    case 329419:
    {
        returnValue = F("Weg zur KGA");
        break;
    }
    case 329420:
    {
        returnValue = F("Weg zur Kalb");
        break;
    }
    case 329421:
    {
        returnValue = F("Weg zur Kegelbahn");
        break;
    }
    case 329422:
    {
        returnValue = F("Weg zur Krummhoffsmühle");
        break;
    }
    case 329423:
    {
        returnValue = F("Weg zur Kunst");
        break;
    }
    case 329424:
    {
        returnValue = F("Weg zur Landfriedquelle");
        break;
    }
    case 329425:
    {
        returnValue = F("Weg zur Lehne");
        break;
    }
    case 329426:
    {
        returnValue = F("Weg zur Linde");
        break;
    }
    case 329427:
    {
        returnValue = F("Weg zur Marbe");
        break;
    }
    case 329428:
    {
        returnValue = F("Weg zur Massnahme");
        break;
    }
    case 329429:
    {
        returnValue = F("Weg zur Mühle");
        break;
    }
    case 329430:
    {
        returnValue = F("Weg zur Neuen Welt");
        break;
    }
    case 329431:
    {
        returnValue = F("Weg zur Neumühle");
        break;
    }
    case 329432:
    {
        returnValue = F("Weg zur Sandgrube");
        break;
    }
    case 329433:
    {
        returnValue = F("Weg zur Schafbrücke");
        break;
    }
    case 329434:
    {
        returnValue = F("Weg zur Schanz");
        break;
    }
    case 329435:
    {
        returnValue = F("Weg zur Schanze");
        break;
    }
    case 329436:
    {
        returnValue = F("Weg zur Schleuse");
        break;
    }
    case 329437:
    {
        returnValue = F("Weg zur Schmölde");
        break;
    }
    case 329438:
    {
        returnValue = F("Weg zur Siedlung");
        break;
    }
    case 329439:
    {
        returnValue = F("Weg zur Silbersandquelle");
        break;
    }
    case 329440:
    {
        returnValue = F("Weg zur Sommersmühle");
        break;
    }
    case 329441:
    {
        returnValue = F("Weg zur Trift");
        break;
    }
    case 329442:
    {
        returnValue = F("Weg zur Triglismühle");
        break;
    }
    case 329443:
    {
        returnValue = F("Weg zur Villa");
        break;
    }
    case 329444:
    {
        returnValue = F("Weg zur Walk");
        break;
    }
    case 329445:
    {
        returnValue = F("Weg zur Wildnis");
        break;
    }
    case 329446:
    {
        returnValue = F("Weg zur Winkelmühle");
        break;
    }
    case 329447:
    {
        returnValue = F("Weg zur Wohnung Pfarrer-Bönneker-Str. 24b");
        break;
    }
    case 329448:
    {
        returnValue = F("Weg zur Zeller Waldspitze");
        break;
    }
    case 329449:
    {
        returnValue = F("Weg zwischen Dannenreich und Ziegelei");
        break;
    }
    case 329450:
    {
        returnValue = F("Weg zwischen Upstall und Ziegelei");
        break;
    }
    case 329451:
    {
        returnValue = F("Weg über die Wurt");
        break;
    }
    case 329452:
    {
        returnValue = F("Weg-Ende");
        break;
    }
    case 329453:
    {
        returnValue = F("Wegabschnitt zwischen Wegekreuz und BS Herdorf-Daaden");
        break;
    }
    case 329454:
    {
        returnValue = F("Wegacker");
        break;
    }
    case 329455:
    {
        returnValue = F("Wegackerstr.");
        break;
    }
    case 329456:
    {
        returnValue = F("Wegaer Str.");
        break;
    }
    case 329457:
    {
        returnValue = F("Wegastr.");
        break;
    }
    case 329458:
    {
        returnValue = F("Wegberger Str.");
        break;
    }
    case 329459:
    {
        returnValue = F("Wegbornstr.");
        break;
    }
    case 329460:
    {
        returnValue = F("Wegbreehe");
        break;
    }
    case 329461:
    {
        returnValue = F("Wegbrückenstr.");
        break;
    }
    case 329462:
    {
        returnValue = F("Wegbünders Maate");
        break;
    }
    case 329463:
    {
        returnValue = F("Wegchen");
        break;
    }
    case 329464:
    {
        returnValue = F("Wege");
        break;
    }
    case 329465:
    {
        returnValue = F("Wegeberg");
        break;
    }
    case 329466:
    {
        returnValue = F("Wegefährels");
        break;
    }
    case 329467:
    {
        returnValue = F("Wegeklinge");
        break;
    }
    case 329468:
    {
        returnValue = F("Wegelandstr.");
        break;
    }
    case 329469:
    {
        returnValue = F("Wegelange");
        break;
    }
    case 329470:
    {
        returnValue = F("Wegelanger");
        break;
    }
    case 329471:
    {
        returnValue = F("Wegelchen");
        break;
    }
    case 329472:
    {
        returnValue = F("Wegelebener Str.");
        break;
    }
    case 329473:
    {
        returnValue = F("Wegelebener Weg");
        break;
    }
    case 329474:
    {
        returnValue = F("Wegeleber Weg");
        break;
    }
    case 329475:
    {
        returnValue = F("Wegelerstr.");
        break;
    }
    case 329476:
    {
        returnValue = F("Wegelinstr.");
        break;
    }
    case 329477:
    {
        returnValue = F("Wegelnburger Str.");
        break;
    }
    case 329478:
    {
        returnValue = F("Wegelnburgstr.");
        break;
    }
    case 329479:
    {
        returnValue = F("Wegelänge");
        break;
    }
    case 329480:
    {
        returnValue = F("Wegemanns Feld");
        break;
    }
    case 329481:
    {
        returnValue = F("Wegemühle");
        break;
    }
    case 329482:
    {
        returnValue = F("Wegemühlenweg");
        break;
    }
    case 329483:
    {
        returnValue = F("Wegen Gasse");
        break;
    }
    case 329484:
    {
        returnValue = F("Wegende");
        break;
    }
    case 329485:
    {
        returnValue = F("Wegendorfer Chaussee");
        break;
    }
    case 329486:
    {
        returnValue = F("Wegendorfer Str.");
        break;
    }
    case 329487:
    {
        returnValue = F("Wegendorfer Weg");
        break;
    }
    case 329488:
    {
        returnValue = F("Wegener Str.");
        break;
    }
    case 329489:
    {
        returnValue = F("Wegenerring");
        break;
    }
    case 329490:
    {
        returnValue = F("Wegenerstr.");
        break;
    }
    case 329491:
    {
        returnValue = F("Wegenfelder Str.");
        break;
    }
    case 329492:
    {
        returnValue = F("Wegensener Str.");
        break;
    }
    case 329493:
    {
        returnValue = F("Wegenstedter Str.");
        break;
    }
    case 329494:
    {
        returnValue = F("Wegerden");
        break;
    }
    case 329495:
    {
        returnValue = F("Wegerfeld");
        break;
    }
    case 329496:
    {
        returnValue = F("Wegerhof");
        break;
    }
    case 329497:
    {
        returnValue = F("Wegerhofstr.");
        break;
    }
    case 329498:
    {
        returnValue = F("Wegerich");
        break;
    }
    case 329499:
    {
        returnValue = F("Wegerichpfad");
        break;
    }
    case 329500:
    {
        returnValue = F("Wegerichsteig");
        break;
    }
    case 329501:
    {
        returnValue = F("Wegerichstr.");
        break;
    }
    case 329502:
    {
        returnValue = F("Wegerl");
        break;
    }
    case 329503:
    {
        returnValue = F("Wegern");
        break;
    }
    case 329504:
    {
        returnValue = F("Wegescheid");
        break;
    }
    case 329505:
    {
        returnValue = F("Wegescheide");
        break;
    }
    case 329506:
    {
        returnValue = F("Wegescheider Str.");
        break;
    }
    case 329507:
    {
        returnValue = F("Wegescheidstr.");
        break;
    }
    case 329508:
    {
        returnValue = F("Wegesende");
        break;
    }
    case 329509:
    {
        returnValue = F("Wegestr.");
        break;
    }
    case 329510:
    {
        returnValue = F("Wegetalstr.");
        break;
    }
    case 329511:
    {
        returnValue = F("Wegezin");
        break;
    }
    case 329512:
    {
        returnValue = F("Wegfeld");
        break;
    }
    case 329513:
    {
        returnValue = F("Weggenhofstr.");
        break;
    }
    case 329514:
    {
        returnValue = F("Weggenrode");
        break;
    }
    case 329515:
    {
        returnValue = F("Weggentalstr.");
        break;
    }
    case 329516:
    {
        returnValue = F("Wegguner Str.");
        break;
    }
    case 329517:
    {
        returnValue = F("Weghaus");
        break;
    }
    case 329518:
    {
        returnValue = F("Weghausstr.");
        break;
    }
    case 329519:
    {
        returnValue = F("Weghof");
        break;
    }
    case 329520:
    {
        returnValue = F("Weghofstr.");
        break;
    }
    case 329521:
    {
        returnValue = F("Wegholmer Kämpe");
        break;
    }
    case 329522:
    {
        returnValue = F("Wegholmer Str.");
        break;
    }
    case 329523:
    {
        returnValue = F("Weghorst");
        break;
    }
    case 329524:
    {
        returnValue = F("Wegkamp");
        break;
    }
    case 329525:
    {
        returnValue = F("Wegkoppel");
        break;
    }
    case 329526:
    {
        returnValue = F("Weglache");
        break;
    }
    case 329527:
    {
        returnValue = F("Weglange");
        break;
    }
    case 329528:
    {
        returnValue = F("Weglanger");
        break;
    }
    case 329529:
    {
        returnValue = F("Weglangstr.");
        break;
    }
    case 329530:
    {
        returnValue = F("Wegle");
        break;
    }
    case 329531:
    {
        returnValue = F("Weglehnerstr.");
        break;
    }
    case 329532:
    {
        returnValue = F("Weglerstr.");
        break;
    }
    case 329533:
    {
        returnValue = F("Weglesacker");
        break;
    }
    case 329534:
    {
        returnValue = F("Wegländer");
        break;
    }
    case 329535:
    {
        returnValue = F("Weglänge");
        break;
    }
    case 329536:
    {
        returnValue = F("Weglängen");
        break;
    }
    case 329537:
    {
        returnValue = F("Wegmanns Hof");
        break;
    }
    case 329538:
    {
        returnValue = F("Wegmannskamp");
        break;
    }
    case 329539:
    {
        returnValue = F("Wegmannstr.");
        break;
    }
    case 329540:
    {
        returnValue = F("Wegnagl");
        break;
    }
    case 329541:
    {
        returnValue = F("Wegnershof");
        break;
    }
    case 329542:
    {
        returnValue = F("Wegnerstr.");
        break;
    }
    case 329543:
    {
        returnValue = F("Wegscheid");
        break;
    }
    case 329544:
    {
        returnValue = F("Wegscheide");
        break;
    }
    case 329545:
    {
        returnValue = F("Wegscheider Str.");
        break;
    }
    case 329546:
    {
        returnValue = F("Wegscheiderstr.");
        break;
    }
    case 329547:
    {
        returnValue = F("Wegscheiderweg");
        break;
    }
    case 329548:
    {
        returnValue = F("Wegshörn");
        break;
    }
    case 329549:
    {
        returnValue = F("Wegshörne");
        break;
    }
    case 329550:
    {
        returnValue = F("Wegskamp");
        break;
    }
    case 329551:
    {
        returnValue = F("Wegstr.");
        break;
    }
    case 329552:
    {
        returnValue = F("Wegstätte");
        break;
    }
    case 329553:
    {
        returnValue = F("Wegstück");
        break;
    }
    case 329554:
    {
        returnValue = F("Wegstücken");
        break;
    }
    case 329555:
    {
        returnValue = F("Wegwarte");
        break;
    }
    case 329556:
    {
        returnValue = F("Wegwartstr.");
        break;
    }
    case 329557:
    {
        returnValue = F("Wegweiherweg");
        break;
    }
    case 329558:
    {
        returnValue = F("Wegweiserweg");
        break;
    }
    case 329559:
    {
        returnValue = F("Wegwiesenweg");
        break;
    }
    case 329560:
    {
        returnValue = F("Wegwitz");
        break;
    }
    case 329561:
    {
        returnValue = F("Wegäcker");
        break;
    }
    case 329562:
    {
        returnValue = F("Wehamer Str.");
        break;
    }
    case 329563:
    {
        returnValue = F("Wehauser Str.");
        break;
    }
    case 329564:
    {
        returnValue = F("Wehberger Gohmarschweg");
        break;
    }
    case 329565:
    {
        returnValue = F("Wehberger Str.");
        break;
    }
    case 329566:
    {
        returnValue = F("Wehdbergweg");
        break;
    }
    case 329567:
    {
        returnValue = F("Wehde");
        break;
    }
    case 329568:
    {
        returnValue = F("Wehdeler Str.");
        break;
    }
    case 329569:
    {
        returnValue = F("Wehdeler Weg");
        break;
    }
    case 329570:
    {
        returnValue = F("Wehdelerfeldstr.");
        break;
    }
    case 329571:
    {
        returnValue = F("Wehdemacker");
        break;
    }
    case 329572:
    {
        returnValue = F("Wehdemer Weg");
        break;
    }
    case 329573:
    {
        returnValue = F("Wehdener Damm");
        break;
    }
    case 329574:
    {
        returnValue = F("Wehdener Grenzweg");
        break;
    }
    case 329575:
    {
        returnValue = F("Wehdener Str.");
        break;
    }
    case 329576:
    {
        returnValue = F("Wehdener Weg");
        break;
    }
    case 329577:
    {
        returnValue = F("Wehdenhof");
        break;
    }
    case 329578:
    {
        returnValue = F("Wehdenstr.");
        break;
    }
    case 329579:
    {
        returnValue = F("Wehdenweg");
        break;
    }
    case 329580:
    {
        returnValue = F("Wehdestr.");
        break;
    }
    case 329581:
    {
        returnValue = F("Wehdstr.");
        break;
    }
    case 329582:
    {
        returnValue = F("Wehe");
        break;
    }
    case 329583:
    {
        returnValue = F("Wehe-Brücke");
        break;
    }
    case 329584:
    {
        returnValue = F("Wehebachstr.");
        break;
    }
    case 329585:
    {
        returnValue = F("Wehenberg");
        break;
    }
    case 329586:
    {
        returnValue = F("Wehener Str.");
        break;
    }
    case 329587:
    {
        returnValue = F("Weher Esch");
        break;
    }
    case 329588:
    {
        returnValue = F("Weher Köppel");
        break;
    }
    case 329589:
    {
        returnValue = F("Weher Str.");
        break;
    }
    case 329590:
    {
        returnValue = F("Wehestr.");
        break;
    }
    case 329591:
    {
        returnValue = F("Weheweg");
        break;
    }
    case 329592:
    {
        returnValue = F("Wehgaster Str.");
        break;
    }
    case 329593:
    {
        returnValue = F("Wehgärten");
        break;
    }
    case 329594:
    {
        returnValue = F("Wehinger Loipe");
        break;
    }
    case 329595:
    {
        returnValue = F("Wehinger Str.");
        break;
    }
    case 329596:
    {
        returnValue = F("Wehinger Weg");
        break;
    }
    case 329597:
    {
        returnValue = F("Wehinghausweg");
        break;
    }
    case 329598:
    {
        returnValue = F("Wehlachstr.");
        break;
    }
    case 329599:
    {
        returnValue = F("Wehlacker");
        break;
    }
    case 329600:
    {
        returnValue = F("Wehland");
        break;
    }
    case 329601:
    {
        returnValue = F("Wehlauer Str.");
        break;
    }
    case 329602:
    {
        returnValue = F("Wehlaustr.");
        break;
    }
    case 329603:
    {
        returnValue = F("Wehlberg");
        break;
    }
    case 329604:
    {
        returnValue = F("Wehlbergstr.");
        break;
    }
    case 329605:
    {
        returnValue = F("Wehlburger Weg");
        break;
    }
    case 329606:
    {
        returnValue = F("Wehldorf");
        break;
    }
    case 329607:
    {
        returnValue = F("Wehldorfer Bundesstr.");
        break;
    }
    case 329608:
    {
        returnValue = F("Wehldorfer Str.");
        break;
    }
    case 329609:
    {
        returnValue = F("Wehleistr.");
        break;
    }
    case 329610:
    {
        returnValue = F("Wehlenberg");
        break;
    }
    case 329611:
    {
        returnValue = F("Wehlenbergweg");
        break;
    }
    case 329612:
    {
        returnValue = F("Wehlener Grund");
        break;
    }
    case 329613:
    {
        returnValue = F("Wehlener Str.");
        break;
    }
    case 329614:
    {
        returnValue = F("Wehlener Weg");
        break;
    }
    case 329615:
    {
        returnValue = F("Wehlenpark");
        break;
    }
    case 329616:
    {
        returnValue = F("Wehlenstr.");
        break;
    }
    case 329617:
    {
        returnValue = F("Wehlenteichweg");
        break;
    }
    case 329618:
    {
        returnValue = F("Wehler Bruch");
        break;
    }
    case 329619:
    {
        returnValue = F("Wehler Dorfstr.");
        break;
    }
    case 329620:
    {
        returnValue = F("Wehler Marsch");
        break;
    }
    case 329621:
    {
        returnValue = F("Wehler Platz");
        break;
    }
    case 329622:
    {
        returnValue = F("Wehler Siet");
        break;
    }
    case 329623:
    {
        returnValue = F("Wehler Str.");
        break;
    }
    case 329624:
    {
        returnValue = F("Wehler Weg");
        break;
    }
    case 329625:
    {
        returnValue = F("Wehlermühle");
        break;
    }
    case 329626:
    {
        returnValue = F("Wehlewaldberg");
        break;
    }
    case 329627:
    {
        returnValue = F("Wehlfennenweg");
        break;
    }
    case 329628:
    {
        returnValue = F("Wehlgarten");
        break;
    }
    case 329629:
    {
        returnValue = F("Wehlgraben");
        break;
    }
    case 329630:
    {
        returnValue = F("Wehlgrund");
        break;
    }
    case 329631:
    {
        returnValue = F("Wehlheider Str.");
        break;
    }
    case 329632:
    {
        returnValue = F("Wehlinger Weg");
        break;
    }
    case 329633:
    {
        returnValue = F("Wehlingsgarten");
        break;
    }
    case 329634:
    {
        returnValue = F("Wehlingstr.");
        break;
    }
    case 329635:
    {
        returnValue = F("Wehlingsweg");
        break;
    }
    case 329636:
    {
        returnValue = F("Wehlingweg");
        break;
    }
    case 329637:
    {
        returnValue = F("Wehlkate");
        break;
    }
    case 329638:
    {
        returnValue = F("Wehlken Weg");
        break;
    }
    case 329639:
    {
        returnValue = F("Wehlskamp");
        break;
    }
    case 329640:
    {
        returnValue = F("Wehlstr.");
        break;
    }
    case 329641:
    {
        returnValue = F("Wehlstrift");
        break;
    }
    case 329642:
    {
        returnValue = F("Wehlteweg");
        break;
    }
    case 329643:
    {
        returnValue = F("Wehme");
        break;
    }
    case 329644:
    {
        returnValue = F("Wehmegrund");
        break;
    }
    case 329645:
    {
        returnValue = F("Wehmekamp");
        break;
    }
    case 329646:
    {
        returnValue = F("Wehmen");
        break;
    }
    case 329647:
    {
        returnValue = F("Wehmenweg");
        break;
    }
    case 329648:
    {
        returnValue = F("Wehmer Str.");
        break;
    }
    case 329649:
    {
        returnValue = F("Wehmer Winkel");
        break;
    }
    case 329650:
    {
        returnValue = F("Wehmerhorststr.");
        break;
    }
    case 329651:
    {
        returnValue = F("Wehmestr.");
        break;
    }
    case 329652:
    {
        returnValue = F("Wehmeweg");
        break;
    }
    case 329653:
    {
        returnValue = F("Wehmgärtenstr.");
        break;
    }
    case 329654:
    {
        returnValue = F("Wehmhof");
        break;
    }
    case 329655:
    {
        returnValue = F("Wehminger Garten");
        break;
    }
    case 329656:
    {
        returnValue = F("Wehminger Str.");
        break;
    }
    case 329657:
    {
        returnValue = F("Wehmkamp");
        break;
    }
    case 329658:
    {
        returnValue = F("Wehmland");
        break;
    }
    case 329659:
    {
        returnValue = F("Wehmstr.");
        break;
    }
    case 329660:
    {
        returnValue = F("Wehmühlenstr.");
        break;
    }
    case 329661:
    {
        returnValue = F("Wehn");
        break;
    }
    case 329662:
    {
        returnValue = F("Wehnder Chaussee");
        break;
    }
    case 329663:
    {
        returnValue = F("Wehnder Str.");
        break;
    }
    case 329664:
    {
        returnValue = F("Wehneberger Str.");
        break;
    }
    case 329665:
    {
        returnValue = F("Wehneltstr.");
        break;
    }
    case 329666:
    {
        returnValue = F("Wehnerfelder Weg");
        break;
    }
    case 329667:
    {
        returnValue = F("Wehnergasse");
        break;
    }
    case 329668:
    {
        returnValue = F("Wehnersberg");
        break;
    }
    case 329669:
    {
        returnValue = F("Wehnersgasse");
        break;
    }
    case 329670:
    {
        returnValue = F("Wehnerstr.");
        break;
    }
    case 329671:
    {
        returnValue = F("Wehnertsgasse");
        break;
    }
    case 329672:
    {
        returnValue = F("Wehninger Str.");
        break;
    }
    case 329673:
    {
        returnValue = F("Wehnrather Str.");
        break;
    }
    case 329674:
    {
        returnValue = F("Wehnsdorf");
        break;
    }
    case 329675:
    {
        returnValue = F("Wehnsdorfer Weg");
        break;
    }
    case 329676:
    {
        returnValue = F("Wehnsen");
        break;
    }
    case 329677:
    {
        returnValue = F("Wehnser Horst");
        break;
    }
    case 329678:
    {
        returnValue = F("Wehnser Weg");
        break;
    }
    case 329679:
    {
        returnValue = F("Wehofer Str.");
        break;
    }
    case 329680:
    {
        returnValue = F("Wehr");
        break;
    }
    case 329681:
    {
        returnValue = F("Wehr Edingen");
        break;
    }
    case 329682:
    {
        returnValue = F("Wehr Große Tränke");
        break;
    }
    case 329683:
    {
        returnValue = F("Wehr IV");
        break;
    }
    case 329684:
    {
        returnValue = F("Wehr München");
        break;
    }
    case 329685:
    {
        returnValue = F("Wehr am Schwarzbach");
        break;
    }
    case 329686:
    {
        returnValue = F("Wehr am Schütz");
        break;
    }
    case 329687:
    {
        returnValue = F("Wehracker");
        break;
    }
    case 329688:
    {
        returnValue = F("Wehranlage Osterloh");
        break;
    }
    case 329689:
    {
        returnValue = F("Wehranlagen");
        break;
    }
    case 329690:
    {
        returnValue = F("Wehrastr.");
        break;
    }
    case 329691:
    {
        returnValue = F("Wehratal-Erlebnispfad");
        break;
    }
    case 329692:
    {
        returnValue = F("Wehratalstr.");
        break;
    }
    case 329693:
    {
        returnValue = F("Wehratalweg");
        break;
    }
    case 329694:
    {
        returnValue = F("Wehraustr.");
        break;
    }
    case 329695:
    {
        returnValue = F("Wehrautal");
        break;
    }
    case 329696:
    {
        returnValue = F("Wehraweg");
        break;
    }
    case 329697:
    {
        returnValue = F("Wehrbacher Str.");
        break;
    }
    case 329698:
    {
        returnValue = F("Wehrbachstr.");
        break;
    }
    case 329699:
    {
        returnValue = F("Wehrbachsweg");
        break;
    }
    case 329700:
    {
        returnValue = F("Wehrbau");
        break;
    }
    case 329701:
    {
        returnValue = F("Wehrbergallee");
        break;
    }
    case 329702:
    {
        returnValue = F("Wehrberger Str.");
        break;
    }
    case 329703:
    {
        returnValue = F("Wehrbergsweg");
        break;
    }
    case 329704:
    {
        returnValue = F("Wehrblecker Heide");
        break;
    }
    case 329705:
    {
        returnValue = F("Wehrblecker Str.");
        break;
    }
    case 329706:
    {
        returnValue = F("Wehrbreite");
        break;
    }
    case 329707:
    {
        returnValue = F("Wehrbrink");
        break;
    }
    case 329708:
    {
        returnValue = F("Wehrbruch");
        break;
    }
    case 329709:
    {
        returnValue = F("Wehrbruchskamp");
        break;
    }
    case 329710:
    {
        returnValue = F("Wehrbruchweg");
        break;
    }
    case 329711:
    {
        returnValue = F("Wehrbrücke");
        break;
    }
    case 329712:
    {
        returnValue = F("Wehrbusch");
        break;
    }
    case 329713:
    {
        returnValue = F("Wehrbörder");
        break;
    }
    case 329714:
    {
        returnValue = F("Wehrbüsch");
        break;
    }
    case 329715:
    {
        returnValue = F("Wehrbüschstr.");
        break;
    }
    case 329716:
    {
        returnValue = F("Wehrdaer Str.");
        break;
    }
    case 329717:
    {
        returnValue = F("Wehrdaer Weg");
        break;
    }
    case 329718:
    {
        returnValue = F("Wehrdamm");
        break;
    }
    case 329719:
    {
        returnValue = F("Wehrdeich");
        break;
    }
    case 329720:
    {
        returnValue = F("Wehrden");
        break;
    }
    case 329721:
    {
        returnValue = F("Wehrden Ost");
        break;
    }
    case 329722:
    {
        returnValue = F("Wehrden West");
        break;
    }
    case 329723:
    {
        returnValue = F("Wehrdener Str.");
        break;
    }
    case 329724:
    {
        returnValue = F("Wehrder");
        break;
    }
    case 329725:
    {
        returnValue = F("Wehrderstr.");
        break;
    }
    case 329726:
    {
        returnValue = F("Wehrdigtstr.");
        break;
    }
    case 329727:
    {
        returnValue = F("Wehrdistel");
        break;
    }
    case 329728:
    {
        returnValue = F("Wehrenberg");
        break;
    }
    case 329729:
    {
        returnValue = F("Wehrenberger Ortsstr.");
        break;
    }
    case 329730:
    {
        returnValue = F("Wehrenboldstr.");
        break;
    }
    case 329731:
    {
        returnValue = F("Wehrenbrock");
        break;
    }
    case 329732:
    {
        returnValue = F("Wehrendorfer Bergstr.");
        break;
    }
    case 329733:
    {
        returnValue = F("Wehrendorfer Str.");
        break;
    }
    case 329734:
    {
        returnValue = F("Wehrener Str.");
        break;
    }
    case 329735:
    {
        returnValue = F("Wehrenfeld");
        break;
    }
    case 329736:
    {
        returnValue = F("Wehrenhagenstr.");
        break;
    }
    case 329737:
    {
        returnValue = F("Wehrenhof");
        break;
    }
    case 329738:
    {
        returnValue = F("Wehrenpfad");
        break;
    }
    case 329739:
    {
        returnValue = F("Wehrenpfennigstr.");
        break;
    }
    case 329740:
    {
        returnValue = F("Wehrenteich");
        break;
    }
    case 329741:
    {
        returnValue = F("Wehrer Landstr.");
        break;
    }
    case 329742:
    {
        returnValue = F("Wehrer Str.");
        break;
    }
    case 329743:
    {
        returnValue = F("Wehrer Weg");
        break;
    }
    case 329744:
    {
        returnValue = F("Wehresbäumchen");
        break;
    }
    case 329745:
    {
        returnValue = F("Wehrestr.");
        break;
    }
    case 329746:
    {
        returnValue = F("Wehretalstr.");
        break;
    }
    case 329747:
    {
        returnValue = F("Wehrfeldstr.");
        break;
    }
    case 329748:
    {
        returnValue = F("Wehrfeldweg");
        break;
    }
    case 329749:
    {
        returnValue = F("Wehrgang");
        break;
    }
    case 329750:
    {
        returnValue = F("Wehrgang auf der Stadtmauer");
        break;
    }
    case 329751:
    {
        returnValue = F("Wehrgasse");
        break;
    }
    case 329752:
    {
        returnValue = F("Wehrgraben");
        break;
    }
    case 329753:
    {
        returnValue = F("Wehrhahnstr.");
        break;
    }
    case 329754:
    {
        returnValue = F("Wehrhahnweg");
        break;
    }
    case 329755:
    {
        returnValue = F("Wehrhainer Lindenstr.");
        break;
    }
    case 329756:
    {
        returnValue = F("Wehrhainer Str.");
        break;
    }
    case 329757:
    {
        returnValue = F("Wehrhaldergrenzweg");
        break;
    }
    case 329758:
    {
        returnValue = F("Wehrhalderweg");
        break;
    }
    case 329759:
    {
        returnValue = F("Wehrhausweg");
        break;
    }
    case 329760:
    {
        returnValue = F("Wehrheimer Pfad");
        break;
    }
    case 329761:
    {
        returnValue = F("Wehrheimer Str.");
        break;
    }
    case 329762:
    {
        returnValue = F("Wehrheimer Weg");
        break;
    }
    case 329763:
    {
        returnValue = F("Wehrhofstr.");
        break;
    }
    case 329764:
    {
        returnValue = F("Wehrholz");
        break;
    }
    case 329765:
    {
        returnValue = F("Wehrholzer Weg");
        break;
    }
    case 329766:
    {
        returnValue = F("Wehrholzstr.");
        break;
    }
    case 329767:
    {
        returnValue = F("Wehrholzweg");
        break;
    }
    case 329768:
    {
        returnValue = F("Wehrhölzchen");
        break;
    }
    case 329769:
    {
        returnValue = F("Wehrhölzchenstr.");
        break;
    }
    case 329770:
    {
        returnValue = F("Wehringdorf");
        break;
    }
    case 329771:
    {
        returnValue = F("Wehringer Str.");
        break;
    }
    case 329772:
    {
        returnValue = F("Wehringser Weg");
        break;
    }
    case 329773:
    {
        returnValue = F("Wehringstr.");
        break;
    }
    case 329774:
    {
        returnValue = F("Wehrinselstr.");
        break;
    }
    case 329775:
    {
        returnValue = F("Wehristr.");
        break;
    }
    case 329776:
    {
        returnValue = F("Wehrkamp");
        break;
    }
    case 329777:
    {
        returnValue = F("Wehrkamper Str.");
        break;
    }
    case 329778:
    {
        returnValue = F("Wehrkappellenpark");
        break;
    }
    case 329779:
    {
        returnValue = F("Wehrkirchstr.");
        break;
    }
    case 329780:
    {
        returnValue = F("Wehrlachstr.");
        break;
    }
    case 329781:
    {
        returnValue = F("Wehrlandsweg");
        break;
    }
    case 329782:
    {
        returnValue = F("Wehrlehofstr.");
        break;
    }
    case 329783:
    {
        returnValue = F("Wehrleitenweg");
        break;
    }
    case 329784:
    {
        returnValue = F("Wehrleshalde");
        break;
    }
    case 329785:
    {
        returnValue = F("Wehrlestr.");
        break;
    }
    case 329786:
    {
        returnValue = F("Wehrley");
        break;
    }
    case 329787:
    {
        returnValue = F("Wehrleystr.");
        break;
    }
    case 329788:
    {
        returnValue = F("Wehrlingstr.");
        break;
    }
    case 329789:
    {
        returnValue = F("Wehrlohweg");
        break;
    }
    case 329790:
    {
        returnValue = F("Wehrländerstr.");
        break;
    }
    case 329791:
    {
        returnValue = F("Wehrmaate");
        break;
    }
    case 329792:
    {
        returnValue = F("Wehrmannsdamm");
        break;
    }
    case 329793:
    {
        returnValue = F("Wehrmannsfeld");
        break;
    }
    case 329794:
    {
        returnValue = F("Wehrmannweg");
        break;
    }
    case 329795:
    {
        returnValue = F("Wehrmathen");
        break;
    }
    case 329796:
    {
        returnValue = F("Wehrmauer");
        break;
    }
    case 329797:
    {
        returnValue = F("Wehrmauerweg");
        break;
    }
    case 329798:
    {
        returnValue = F("Wehrmeisterweg");
        break;
    }
    case 329799:
    {
        returnValue = F("Wehrmühle");
        break;
    }
    case 329800:
    {
        returnValue = F("Wehrmühlenweg");
        break;
    }
    case 329801:
    {
        returnValue = F("Wehrneckarstr.");
        break;
    }
    case 329802:
    {
        returnValue = F("Wehrplatz");
        break;
    }
    case 329803:
    {
        returnValue = F("Wehrpromenade");
        break;
    }
    case 329804:
    {
        returnValue = F("Wehrpöhl");
        break;
    }
    case 329805:
    {
        returnValue = F("Wehrsbeeke");
        break;
    }
    case 329806:
    {
        returnValue = F("Wehrscheid");
        break;
    }
    case 329807:
    {
        returnValue = F("Wehrsdorfer Str.");
        break;
    }
    case 329808:
    {
        returnValue = F("Wehrseifenstr.");
        break;
    }
    case 329809:
    {
        returnValue = F("Wehrshäuser Str.");
        break;
    }
    case 329810:
    {
        returnValue = F("Wehrspitzweg");
        break;
    }
    case 329811:
    {
        returnValue = F("Wehrstapeler Str.");
        break;
    }
    case 329812:
    {
        returnValue = F("Wehrstaudenstr.");
        break;
    }
    case 329813:
    {
        returnValue = F("Wehrstedter Str.");
        break;
    }
    case 329814:
    {
        returnValue = F("Wehrsteg");
        break;
    }
    case 329815:
    {
        returnValue = F("Wehrsteig");
        break;
    }
    case 329816:
    {
        returnValue = F("Wehrsteiner Hof");
        break;
    }
    case 329817:
    {
        returnValue = F("Wehrsteiner Str.");
        break;
    }
    case 329818:
    {
        returnValue = F("Wehrsteinstr.");
        break;
    }
    case 329819:
    {
        returnValue = F("Wehrstr.");
        break;
    }
    case 329820:
    {
        returnValue = F("Wehrstück");
        break;
    }
    case 329821:
    {
        returnValue = F("Wehrtannenstr.");
        break;
    }
    case 329822:
    {
        returnValue = F("Wehrtbornstr.");
        break;
    }
    case 329823:
    {
        returnValue = F("Wehrweg");
        break;
    }
    case 329824:
    {
        returnValue = F("Wehrwiese");
        break;
    }
    case 329825:
    {
        returnValue = F("Wehrwiesenstr.");
        break;
    }
    case 329826:
    {
        returnValue = F("Wehrwiesenweg");
        break;
    }
    case 329827:
    {
        returnValue = F("Wehrwinkel");
        break;
    }
    case 329828:
    {
        returnValue = F("Wehrystr.");
        break;
    }
    case 329829:
    {
        returnValue = F("Wehräcker");
        break;
    }
    case 329830:
    {
        returnValue = F("Wehräckerweg");
        break;
    }
    case 329831:
    {
        returnValue = F("Wehsand");
        break;
    }
    case 329832:
    {
        returnValue = F("Wehsande");
        break;
    }
    case 329833:
    {
        returnValue = F("Wehstetten");
        break;
    }
    case 329834:
    {
        returnValue = F("Wehtgasse");
        break;
    }
    case 329835:
    {
        returnValue = F("Wehtstr.");
        break;
    }
    case 329836:
    {
        returnValue = F("Wehwarder");
        break;
    }
    case 329837:
    {
        returnValue = F("Wehweg");
        break;
    }
    case 329838:
    {
        returnValue = F("Wehwinkel");
        break;
    }
    case 329839:
    {
        returnValue = F("Weibecker Str.");
        break;
    }
    case 329840:
    {
        returnValue = F("Weibel");
        break;
    }
    case 329841:
    {
        returnValue = F("Weiberberg");
        break;
    }
    case 329842:
    {
        returnValue = F("Weiberbergweg");
        break;
    }
    case 329843:
    {
        returnValue = F("Weiberborn");
        break;
    }
    case 329844:
    {
        returnValue = F("Weiberfähre");
        break;
    }
    case 329845:
    {
        returnValue = F("Weiberg");
        break;
    }
    case 329846:
    {
        returnValue = F("Weiberger Str.");
        break;
    }
    case 329847:
    {
        returnValue = F("Weibergraben");
        break;
    }
    case 329848:
    {
        returnValue = F("Weibermarkt");
        break;
    }
    case 329849:
    {
        returnValue = F("Weibersaat");
        break;
    }
    case 329850:
    {
        returnValue = F("Weibersbrunner Str.");
        break;
    }
    case 329851:
    {
        returnValue = F("Weiberschnäue Nord");
        break;
    }
    case 329852:
    {
        returnValue = F("Weibersweg");
        break;
    }
    case 329853:
    {
        returnValue = F("Weibert-Mahler-Str.");
        break;
    }
    case 329854:
    {
        returnValue = F("Weiberteichweg");
        break;
    }
    case 329855:
    {
        returnValue = F("Weibertreustr.");
        break;
    }
    case 329856:
    {
        returnValue = F("Weibertstr.");
        break;
    }
    case 329857:
    {
        returnValue = F("Weibertswiesenweg");
        break;
    }
    case 329858:
    {
        returnValue = F("Weibeweg");
        break;
    }
    case 329859:
    {
        returnValue = F("Weibhauserstr.");
        break;
    }
    case 329860:
    {
        returnValue = F("Weibinger Str.");
        break;
    }
    case 329861:
    {
        returnValue = F("Weibletshofener Str.");
        break;
    }
    case 329862:
    {
        returnValue = F("Weiblingsweg");
        break;
    }
    case 329863:
    {
        returnValue = F("Weiboldshausener Str.");
        break;
    }
    case 329864:
    {
        returnValue = F("Weibspfad");
        break;
    }
    case 329865:
    {
        returnValue = F("Weichau");
        break;
    }
    case 329866:
    {
        returnValue = F("Weichaugrund");
        break;
    }
    case 329867:
    {
        returnValue = F("Weichaus");
        break;
    }
    case 329868:
    {
        returnValue = F("Weichbergerstr.");
        break;
    }
    case 329869:
    {
        returnValue = F("Weichbergring");
        break;
    }
    case 329870:
    {
        returnValue = F("Weiche");
        break;
    }
    case 329871:
    {
        returnValue = F("Weichelau");
        break;
    }
    case 329872:
    {
        returnValue = F("Weichelauer Str.");
        break;
    }
    case 329873:
    {
        returnValue = F("Weicheltswiesenweg");
        break;
    }
    case 329874:
    {
        returnValue = F("Weichenberg");
        break;
    }
    case 329875:
    {
        returnValue = F("Weichenberger Str.");
        break;
    }
    case 329876:
    {
        returnValue = F("Weichenbergerstr.");
        break;
    }
    case 329877:
    {
        returnValue = F("Weichengereuth");
        break;
    }
    case 329878:
    {
        returnValue = F("Weichensdorfer Str.");
        break;
    }
    case 329879:
    {
        returnValue = F("Weichenweg");
        break;
    }
    case 329880:
    {
        returnValue = F("Weicheringer Str.");
        break;
    }
    case 329881:
    {
        returnValue = F("Weichersbacher Str.");
        break;
    }
    case 329882:
    {
        returnValue = F("Weicherstal");
        break;
    }
    case 329883:
    {
        returnValue = F("Weichertstr.");
        break;
    }
    case 329884:
    {
        returnValue = F("Weichgasse");
        break;
    }
    case 329885:
    {
        returnValue = F("Weichhagenstr.");
        break;
    }
    case 329886:
    {
        returnValue = F("Weichhagenweg");
        break;
    }
    case 329887:
    {
        returnValue = F("Weichholzaue");
        break;
    }
    case 329888:
    {
        returnValue = F("Weichinger Str.");
        break;
    }
    case 329889:
    {
        returnValue = F("Weichpfuhlstr.");
        break;
    }
    case 329890:
    {
        returnValue = F("Weichs");
        break;
    }
    case 329891:
    {
        returnValue = F("Weichselbaum");
        break;
    }
    case 329892:
    {
        returnValue = F("Weichselbaumer Str.");
        break;
    }
    case 329893:
    {
        returnValue = F("Weichselberg");
        break;
    }
    case 329894:
    {
        returnValue = F("Weichselbergstr.");
        break;
    }
    case 329895:
    {
        returnValue = F("Weichseldamm");
        break;
    }
    case 329896:
    {
        returnValue = F("Weichselfeld");
        break;
    }
    case 329897:
    {
        returnValue = F("Weichselfeldstr.");
        break;
    }
    case 329898:
    {
        returnValue = F("Weichselgarten");
        break;
    }
    case 329899:
    {
        returnValue = F("Weichselgartenstr.");
        break;
    }
    case 329900:
    {
        returnValue = F("Weichselgasse");
        break;
    }
    case 329901:
    {
        returnValue = F("Weichselhecke");
        break;
    }
    case 329902:
    {
        returnValue = F("Weichselleite");
        break;
    }
    case 329903:
    {
        returnValue = F("Weichselsteiner Str.");
        break;
    }
    case 329904:
    {
        returnValue = F("Weichselsteiner Weg");
        break;
    }
    case 329905:
    {
        returnValue = F("Weichselstieg");
        break;
    }
    case 329906:
    {
        returnValue = F("Weichselstr.");
        break;
    }
    case 329907:
    {
        returnValue = F("Weichseltal");
        break;
    }
    case 329908:
    {
        returnValue = F("Weichselweg");
        break;
    }
    case 329909:
    {
        returnValue = F("Weichser Damm");
        break;
    }
    case 329910:
    {
        returnValue = F("Weichser Schloßgasse");
        break;
    }
    case 329911:
    {
        returnValue = F("Weichser Str.");
        break;
    }
    case 329912:
    {
        returnValue = F("Weichser Weg");
        break;
    }
    case 329913:
    {
        returnValue = F("Weichslehen");
        break;
    }
    case 329914:
    {
        returnValue = F("Weichsstr.");
        break;
    }
    case 329915:
    {
        returnValue = F("Weichstr.");
        break;
    }
    case 329916:
    {
        returnValue = F("Weichtal");
        break;
    }
    case 329917:
    {
        returnValue = F("Weichtalweg");
        break;
    }
    case 329918:
    {
        returnValue = F("Weichter Str.");
        break;
    }
    case 329919:
    {
        returnValue = F("Weichter Weg");
        break;
    }
    case 329920:
    {
        returnValue = F("Weichtunger Bergstr.");
        break;
    }
    case 329921:
    {
        returnValue = F("Weichtunger Str.");
        break;
    }
    case 329922:
    {
        returnValue = F("Weickede");
        break;
    }
    case 329923:
    {
        returnValue = F("Weickelsdorfer Hauptstr.");
        break;
    }
    case 329924:
    {
        returnValue = F("Weickelsdorfer Weg");
        break;
    }
    case 329925:
    {
        returnValue = F("Weickenbacher Str.");
        break;
    }
    case 329926:
    {
        returnValue = F("Weickenreuth");
        break;
    }
    case 329927:
    {
        returnValue = F("Weickenreuther Weg");
        break;
    }
    case 329928:
    {
        returnValue = F("Weickersdorfer Str.");
        break;
    }
    case 329929:
    {
        returnValue = F("Weickersgrüben");
        break;
    }
    case 329930:
    {
        returnValue = F("Weickersgrübener Str.");
        break;
    }
    case 329931:
    {
        returnValue = F("Weickersing");
        break;
    }
    case 329932:
    {
        returnValue = F("Weickertplatz");
        break;
    }
    case 329933:
    {
        returnValue = F("Weickmannshöhe");
        break;
    }
    case 329934:
    {
        returnValue = F("Weickmannstr.");
        break;
    }
    case 329935:
    {
        returnValue = F("Weickstr.");
        break;
    }
    case 329936:
    {
        returnValue = F("Weida");
        break;
    }
    case 329937:
    {
        returnValue = F("Weidach");
        break;
    }
    case 329938:
    {
        returnValue = F("Weidach-Siedlung");
        break;
    }
    case 329939:
    {
        returnValue = F("Weidacher Hauptstr.");
        break;
    }
    case 329940:
    {
        returnValue = F("Weidacher Steige");
        break;
    }
    case 329941:
    {
        returnValue = F("Weidacher Str.");
        break;
    }
    case 329942:
    {
        returnValue = F("Weidacher Weg");
        break;
    }
    case 329943:
    {
        returnValue = F("Weidacherfeld");
        break;
    }
    case 329944:
    {
        returnValue = F("Weidacherweg");
        break;
    }
    case 329945:
    {
        returnValue = F("Weidachgasse");
        break;
    }
    case 329946:
    {
        returnValue = F("Weidachring");
        break;
    }
    case 329947:
    {
        returnValue = F("Weidachstr.");
        break;
    }
    case 329948:
    {
        returnValue = F("Weidachtal");
        break;
    }
    case 329949:
    {
        returnValue = F("Weidachweg");
        break;
    }
    case 329950:
    {
        returnValue = F("Weidacker");
        break;
    }
    case 329951:
    {
        returnValue = F("Weidackerweg");
        break;
    }
    case 329952:
    {
        returnValue = F("Weidaer Ring");
        break;
    }
    case 329953:
    {
        returnValue = F("Weidaer Str.");
        break;
    }
    case 329954:
    {
        returnValue = F("Weidaer Weg");
        break;
    }
    case 329955:
    {
        returnValue = F("Weidamm");
        break;
    }
    case 329956:
    {
        returnValue = F("Weidanger");
        break;
    }
    case 329957:
    {
        returnValue = F("Weidangerstr.");
        break;
    }
    case 329958:
    {
        returnValue = F("Weidasserstr.");
        break;
    }
    case 329959:
    {
        returnValue = F("Weidastr.");
        break;
    }
    case 329960:
    {
        returnValue = F("Weidauer Str.");
        break;
    }
    case 329961:
    {
        returnValue = F("Weidauerstr.");
        break;
    }
    case 329962:
    {
        returnValue = F("Weidaweg");
        break;
    }
    case 329963:
    {
        returnValue = F("Weidbachgrund");
        break;
    }
    case 329964:
    {
        returnValue = F("Weidbachstr.");
        break;
    }
    case 329965:
    {
        returnValue = F("Weidberg");
        break;
    }
    case 329966:
    {
        returnValue = F("Weidbergstr.");
        break;
    }
    case 329967:
    {
        returnValue = F("Weidbergweg");
        break;
    }
    case 329968:
    {
        returnValue = F("Weidbodenweg");
        break;
    }
    case 329969:
    {
        returnValue = F("Weidbrake");
        break;
    }
    case 329970:
    {
        returnValue = F("Weidbruchsweg");
        break;
    }
    case 329971:
    {
        returnValue = F("Weidbrunnenstr.");
        break;
    }
    case 329972:
    {
        returnValue = F("Weidchen");
        break;
    }
    case 329973:
    {
        returnValue = F("Weidchensweg");
        break;
    }
    case 329974:
    {
        returnValue = F("Weidchesweg");
        break;
    }
    case 329975:
    {
        returnValue = F("Weiddor");
        break;
    }
    case 329976:
    {
        returnValue = F("Weide");
        break;
    }
    case 329977:
    {
        returnValue = F("Weide Verbindung");
        break;
    }
    case 329978:
    {
        returnValue = F("Weideanger");
        break;
    }
    case 329979:
    {
        returnValue = F("Weideberg");
        break;
    }
    case 329980:
    {
        returnValue = F("Weideblicken");
        break;
    }
    case 329981:
    {
        returnValue = F("Weidebornweg");
        break;
    }
    case 329982:
    {
        returnValue = F("Weidebrink");
        break;
    }
    case 329983:
    {
        returnValue = F("Weidebrunner Gasse");
        break;
    }
    case 329984:
    {
        returnValue = F("Weidebrunner Tor");
        break;
    }
    case 329985:
    {
        returnValue = F("Weidebusch");
        break;
    }
    case 329986:
    {
        returnValue = F("Weidedamm");
        break;
    }
    case 329987:
    {
        returnValue = F("Weidefelder Weg");
        break;
    }
    case 329988:
    {
        returnValue = F("Weidegang");
        break;
    }
    case 329989:
    {
        returnValue = F("Weidegarten");
        break;
    }
    case 329990:
    {
        returnValue = F("Weidegasse");
        break;
    }
    case 329991:
    {
        returnValue = F("Weidegrund");
        break;
    }
    case 329992:
    {
        returnValue = F("Weidegrundstr.");
        break;
    }
    case 329993:
    {
        returnValue = F("Weidehang");
        break;
    }
    case 329994:
    {
        returnValue = F("Weidehof");
        break;
    }
    case 329995:
    {
        returnValue = F("Weidehofstr.");
        break;
    }
    case 329996:
    {
        returnValue = F("Weidekamp");
        break;
    }
    case 329997:
    {
        returnValue = F("Weidekampstr.");
        break;
    }
    case 329998:
    {
        returnValue = F("Weidekampweg");
        break;
    }
    case 329999:
    {
        returnValue = F("Weidekoppel");
        break;
    }
    case 330000:
    {
        returnValue = F("Weidelbach");
        break;
    }
    case 330001:
    {
        returnValue = F("Weidelbacher Str.");
        break;
    }
    case 330002:
    {
        returnValue = F("Weidelbacherstr.");
        break;
    }
    case 330003:
    {
        returnValue = F("Weidelbachstr.");
        break;
    }
    case 330004:
    {
        returnValue = F("Weideleweg");
        break;
    }
    case 330005:
    {
        returnValue = F("Weidelgrasweg");
        break;
    }
    case 330006:
    {
        returnValue = F("Weideloop");
        break;
    }
    case 330007:
    {
        returnValue = F("Weidelsburgstr.");
        break;
    }
    case 330008:
    {
        returnValue = F("Weidelspfad");
        break;
    }
    case 330009:
    {
        returnValue = F("Weidelstr.");
        break;
    }
    case 330010:
    {
        returnValue = F("Weidelweg");
        break;
    }
    case 330011:
    {
        returnValue = F("Weidemannstr.");
        break;
    }
    case 330012:
    {
        returnValue = F("Weidemannweg");
        break;
    }
    case 330013:
    {
        returnValue = F("Weiden");
        break;
    }
    case 330014:
    {
        returnValue = F("Weiden-Weg");
        break;
    }
    case 330015:
    {
        returnValue = F("Weidenacker");
        break;
    }
    case 330016:
    {
        returnValue = F("Weidenallee");
        break;
    }
    case 330017:
    {
        returnValue = F("Weidenanger");
        break;
    }
    case 330018:
    {
        returnValue = F("Weidenau");
        break;
    }
    case 330019:
    {
        returnValue = F("Weidenauer Str.");
        break;
    }
    case 330020:
    {
        returnValue = F("Weidenaustr.");
        break;
    }
    case 330021:
    {
        returnValue = F("Weidenbach");
        break;
    }
    case 330022:
    {
        returnValue = F("Weidenbach-Siedlung");
        break;
    }
    case 330023:
    {
        returnValue = F("Weidenbacher Mühle");
        break;
    }
    case 330024:
    {
        returnValue = F("Weidenbacher Str.");
        break;
    }
    case 330025:
    {
        returnValue = F("Weidenbacher Weg");
        break;
    }
    case 330026:
    {
        returnValue = F("Weidenbachring");
        break;
    }
    case 330027:
    {
        returnValue = F("Weidenbachstr.");
        break;
    }
    case 330028:
    {
        returnValue = F("Weidenbachtal");
        break;
    }
    case 330029:
    {
        returnValue = F("Weidenbachweg");
        break;
    }
    case 330030:
    {
        returnValue = F("Weidenbaumweg");
        break;
    }
    case 330031:
    {
        returnValue = F("Weidenbend");
        break;
    }
    case 330032:
    {
        returnValue = F("Weidenberg");
        break;
    }
    case 356735:
    {
        returnValue = F("walkerbachertraufweg");
        break;
    }
    case 356736:
    {
        returnValue = F("wanderweg");
        break;
    }
    case 356737:
    {
        returnValue = F("weg");
        break;
    }
    case 356738:
    {
        returnValue = F("weg5");
        break;
    }
    case 356739:
    {
        returnValue = F("weg6");
        break;
    }
    case 356740:
    {
        returnValue = F("weiß-grün-weiß");
        break;
    }
    case 356741:
    {
        returnValue = F("wendemarker Lindenallee");
        break;
    }
    case 356742:
    {
        returnValue = F("westsiedlung");
        break;
    }
    case 356743:
    {
        returnValue = F("wohl");
        break;
    }
    }
    return returnValue;
}
