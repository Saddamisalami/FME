#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameB1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 46576:
    {
        returnValue = F("B");
        break;
    }
    case 46577:
    {
        returnValue = F("B 101");
        break;
    }
    case 46578:
    {
        returnValue = F("B 103");
        break;
    }
    case 46579:
    {
        returnValue = F("B 173");
        break;
    }
    case 46580:
    {
        returnValue = F("B 229");
        break;
    }
    case 46581:
    {
        returnValue = F("B 236");
        break;
    }
    case 46582:
    {
        returnValue = F("B 242 - Parallelweg");
        break;
    }
    case 46583:
    {
        returnValue = F("B 248");
        break;
    }
    case 46584:
    {
        returnValue = F("B 256");
        break;
    }
    case 46585:
    {
        returnValue = F("B 27");
        break;
    }
    case 46586:
    {
        returnValue = F("B 293");
        break;
    }
    case 46587:
    {
        returnValue = F("B 297");
        break;
    }
    case 46588:
    {
        returnValue = F("B 462 Hördener Str.");
        break;
    }
    case 46589:
    {
        returnValue = F("B 61");
        break;
    }
    case 46590:
    {
        returnValue = F("B 8");
        break;
    }
    case 46591:
    {
        returnValue = F("B 85");
        break;
    }
    case 46592:
    {
        returnValue = F("B 88");
        break;
    }
    case 46593:
    {
        returnValue = F("B 96");
        break;
    }
    case 46594:
    {
        returnValue = F("B-Ebene");
        break;
    }
    case 46595:
    {
        returnValue = F("B-Flügel");
        break;
    }
    case 46596:
    {
        returnValue = F("B-Linie");
        break;
    }
    case 46597:
    {
        returnValue = F("B-Park");
        break;
    }
    case 46598:
    {
        returnValue = F("B-Reihe");
        break;
    }
    case 46599:
    {
        returnValue = F("B-Str.");
        break;
    }
    case 46600:
    {
        returnValue = F("B-Weg");
        break;
    }
    case 46601:
    {
        returnValue = F("B-Weg oder Lausaer Weg");
        break;
    }
    case 46602:
    {
        returnValue = F("B.-Röttgen-Waldweg");
        break;
    }
    case 46603:
    {
        returnValue = F("B0");
        break;
    }
    case 46604:
    {
        returnValue = F("B1");
        break;
    }
    case 46605:
    {
        returnValue = F("B12 Verteilerring");
        break;
    }
    case 46606:
    {
        returnValue = F("B13");
        break;
    }
    case 46607:
    {
        returnValue = F("B15");
        break;
    }
    case 46608:
    {
        returnValue = F("B175");
        break;
    }
    case 46609:
    {
        returnValue = F("B192");
        break;
    }
    case 46610:
    {
        returnValue = F("B2");
        break;
    }
    case 46611:
    {
        returnValue = F("B27");
        break;
    }
    case 46612:
    {
        returnValue = F("B3");
        break;
    }
    case 46613:
    {
        returnValue = F("B4");
        break;
    }
    case 46614:
    {
        returnValue = F("B420");
        break;
    }
    case 46615:
    {
        returnValue = F("B460");
        break;
    }
    case 46616:
    {
        returnValue = F("B481");
        break;
    }
    case 46617:
    {
        returnValue = F("B5");
        break;
    }
    case 46618:
    {
        returnValue = F("B501");
        break;
    }
    case 46619:
    {
        returnValue = F("B51");
        break;
    }
    case 46620:
    {
        returnValue = F("B62");
        break;
    }
    case 46621:
    {
        returnValue = F("B72");
        break;
    }
    case 46622:
    {
        returnValue = F("B96 Umfahrung");
        break;
    }
    case 46623:
    {
        returnValue = F("BAB Randweg");
        break;
    }
    case 46624:
    {
        returnValue = F("BAB112");
        break;
    }
    case 46625:
    {
        returnValue = F("BALDWALD ZWEI - der Baumpatenwald");
        break;
    }
    case 46626:
    {
        returnValue = F("BASALT PARKours");
        break;
    }
    case 46627:
    {
        returnValue = F("BAUER-Str.");
        break;
    }
    case 46628:
    {
        returnValue = F("BBC-Brücke");
        break;
    }
    case 46629:
    {
        returnValue = F("BBC-Weg");
        break;
    }
    case 46630:
    {
        returnValue = F("BHG-Berg");
        break;
    }
    case 46631:
    {
        returnValue = F("BInnenlinie");
        break;
    }
    case 46632:
    {
        returnValue = F("BIrkenstr.");
        break;
    }
    case 46633:
    {
        returnValue = F("BM-Dieter-Hanselmann-Str.");
        break;
    }
    case 46634:
    {
        returnValue = F("BM-Willi-Höschele-Str.");
        break;
    }
    case 46635:
    {
        returnValue = F("BMX Bahn");
        break;
    }
    case 46636:
    {
        returnValue = F("BMX-Bahn");
        break;
    }
    case 46637:
    {
        returnValue = F("BR 2 / 6");
        break;
    }
    case 46638:
    {
        returnValue = F("BR 2/ 5/ 6");
        break;
    }
    case 46639:
    {
        returnValue = F("BR 5");
        break;
    }
    case 46640:
    {
        returnValue = F("BS-Weg");
        break;
    }
    case 46641:
    {
        returnValue = F("BST eltromat Kreisel");
        break;
    }
    case 46642:
    {
        returnValue = F("BUGA-Gelände Dombezirk");
        break;
    }
    case 46643:
    {
        returnValue = F("BW 1");
        break;
    }
    case 46644:
    {
        returnValue = F("BW 2");
        break;
    }
    case 46645:
    {
        returnValue = F("BW 6");
        break;
    }
    case 46646:
    {
        returnValue = F("BWDLZ MZG");
        break;
    }
    case 46647:
    {
        returnValue = F("Baaber Weg");
        break;
    }
    case 46648:
    {
        returnValue = F("Baacher Hauptstr.");
        break;
    }
    case 46649:
    {
        returnValue = F("Baacher Str.");
        break;
    }
    case 46650:
    {
        returnValue = F("Baacher Sträßle");
        break;
    }
    case 46651:
    {
        returnValue = F("Baacher Weg");
        break;
    }
    case 46652:
    {
        returnValue = F("Baachstr.");
        break;
    }
    case 46653:
    {
        returnValue = F("Baackesweg");
        break;
    }
    case 46654:
    {
        returnValue = F("Baackskamp");
        break;
    }
    case 46655:
    {
        returnValue = F("Baackweg");
        break;
    }
    case 46656:
    {
        returnValue = F("Baad");
        break;
    }
    case 46657:
    {
        returnValue = F("Baadenberger Str.");
        break;
    }
    case 46658:
    {
        returnValue = F("Baadenbergstr.");
        break;
    }
    case 46659:
    {
        returnValue = F("Baadergasse");
        break;
    }
    case 46660:
    {
        returnValue = F("Baaderplatz");
        break;
    }
    case 46661:
    {
        returnValue = F("Baaderstr.");
        break;
    }
    case 46662:
    {
        returnValue = F("Baaderweg");
        break;
    }
    case 46663:
    {
        returnValue = F("Baadestr.");
        break;
    }
    case 46664:
    {
        returnValue = F("Baadfeld");
        break;
    }
    case 46665:
    {
        returnValue = F("Baadgasse");
        break;
    }
    case 46666:
    {
        returnValue = F("Baakdeelwai");
        break;
    }
    case 46667:
    {
        returnValue = F("Baaken");
        break;
    }
    case 46668:
    {
        returnValue = F("Baaken-Esch");
        break;
    }
    case 46669:
    {
        returnValue = F("Baakenallee");
        break;
    }
    case 46670:
    {
        returnValue = F("Baakendorfer Str.");
        break;
    }
    case 46671:
    {
        returnValue = F("Baakenesch");
        break;
    }
    case 46672:
    {
        returnValue = F("Baakenhafenbrücke");
        break;
    }
    case 46673:
    {
        returnValue = F("Baakenpark");
        break;
    }
    case 46674:
    {
        returnValue = F("Baakenparkbrücke");
        break;
    }
    case 46675:
    {
        returnValue = F("Baakenweg");
        break;
    }
    case 46676:
    {
        returnValue = F("Baakenwerder Str.");
        break;
    }
    case 46677:
    {
        returnValue = F("Baaker Berg");
        break;
    }
    case 46678:
    {
        returnValue = F("Baaker Mulde");
        break;
    }
    case 46679:
    {
        returnValue = F("Baaker Str.");
        break;
    }
    case 46680:
    {
        returnValue = F("Baakerberg");
        break;
    }
    case 46681:
    {
        returnValue = F("Baaksgrund");
        break;
    }
    case 46682:
    {
        returnValue = F("Baaksquell");
        break;
    }
    case 46683:
    {
        returnValue = F("Baakweg");
        break;
    }
    case 46684:
    {
        returnValue = F("Baal");
        break;
    }
    case 46685:
    {
        returnValue = F("Baalbachstr.");
        break;
    }
    case 46686:
    {
        returnValue = F("Baalberger Chaussee");
        break;
    }
    case 46687:
    {
        returnValue = F("Baalberger Kreisstr.");
        break;
    }
    case 46688:
    {
        returnValue = F("Baalberger Str.");
        break;
    }
    case 46689:
    {
        returnValue = F("Baalborner Weg");
        break;
    }
    case 46690:
    {
        returnValue = F("Baalenseebrücke");
        break;
    }
    case 46691:
    {
        returnValue = F("Baalenseestr.");
        break;
    }
    case 46692:
    {
        returnValue = F("Baaler Weg");
        break;
    }
    case 46693:
    {
        returnValue = F("Baalhopsweg");
        break;
    }
    case 46694:
    {
        returnValue = F("Baaljeweg");
        break;
    }
    case 46695:
    {
        returnValue = F("Baalsdorfer Anger");
        break;
    }
    case 46696:
    {
        returnValue = F("Baalsdorfer Str.");
        break;
    }
    case 46697:
    {
        returnValue = F("Baalstr.");
        break;
    }
    case 46698:
    {
        returnValue = F("Baantjebur");
        break;
    }
    case 46699:
    {
        returnValue = F("Baar Geräumt");
        break;
    }
    case 46700:
    {
        returnValue = F("Baarblick");
        break;
    }
    case 46701:
    {
        returnValue = F("Baarblickstr.");
        break;
    }
    case 46702:
    {
        returnValue = F("Baareneichkoppel");
        break;
    }
    case 46703:
    {
        returnValue = F("Baarenkamp");
        break;
    }
    case 46704:
    {
        returnValue = F("Baarer Str.");
        break;
    }
    case 46705:
    {
        returnValue = F("Baarerstr.");
        break;
    }
    case 46706:
    {
        returnValue = F("Baarestr.");
        break;
    }
    case 46707:
    {
        returnValue = F("Baarfußpfad");
        break;
    }
    case 46708:
    {
        returnValue = F("Baarkamp");
        break;
    }
    case 46709:
    {
        returnValue = F("Baarleyweg");
        break;
    }
    case 46710:
    {
        returnValue = F("Baarsen");
        break;
    }
    case 46711:
    {
        returnValue = F("Baarser Str.");
        break;
    }
    case 46712:
    {
        returnValue = F("Baarstr.");
        break;
    }
    case 46713:
    {
        returnValue = F("Baarsweg");
        break;
    }
    case 46714:
    {
        returnValue = F("Baarweg");
        break;
    }
    case 46715:
    {
        returnValue = F("Baarwinkel");
        break;
    }
    case 46716:
    {
        returnValue = F("Baas-Brathe-Weg");
        break;
    }
    case 46717:
    {
        returnValue = F("Baasdorfer Str.");
        break;
    }
    case 46718:
    {
        returnValue = F("Baasenmeersstr.");
        break;
    }
    case 46719:
    {
        returnValue = F("Baasstr.");
        break;
    }
    case 46720:
    {
        returnValue = F("Baaste");
        break;
    }
    case 46721:
    {
        returnValue = F("Baaster Berg");
        break;
    }
    case 46722:
    {
        returnValue = F("Baathstr.");
        break;
    }
    case 46723:
    {
        returnValue = F("Babac-Platz");
        break;
    }
    case 46724:
    {
        returnValue = F("Babarossagarten");
        break;
    }
    case 46725:
    {
        returnValue = F("Babbenhausener Str.");
        break;
    }
    case 46726:
    {
        returnValue = F("Babbergerstr.");
        break;
    }
    case 46727:
    {
        returnValue = F("Babbestr.");
        break;
    }
    case 46728:
    {
        returnValue = F("Babcockallee");
        break;
    }
    case 46729:
    {
        returnValue = F("Babekuhl");
        break;
    }
    case 46730:
    {
        returnValue = F("Babel");
        break;
    }
    case 46731:
    {
        returnValue = F("Babelsberger Str.");
        break;
    }
    case 46732:
    {
        returnValue = F("Babelsberger Weg");
        break;
    }
    case 46733:
    {
        returnValue = F("Babelweg");
        break;
    }
    case 46734:
    {
        returnValue = F("Baben Brandheid");
        break;
    }
    case 46735:
    {
        returnValue = F("Baben Dörp");
        break;
    }
    case 46736:
    {
        returnValue = F("Baben Pfier");
        break;
    }
    case 46737:
    {
        returnValue = F("Baben de Heid");
        break;
    }
    case 46738:
    {
        returnValue = F("Baben de Möhl");
        break;
    }
    case 46739:
    {
        returnValue = F("Baben-Berg");
        break;
    }
    case 46740:
    {
        returnValue = F("Baben-Dörpe");
        break;
    }
    case 46741:
    {
        returnValue = F("Babenberger Str.");
        break;
    }
    case 46742:
    {
        returnValue = F("Babenbergerring");
        break;
    }
    case 46743:
    {
        returnValue = F("Babenbergerstr.");
        break;
    }
    case 46744:
    {
        returnValue = F("Babenbergerweg");
        break;
    }
    case 46745:
    {
        returnValue = F("Babenbergerzeile");
        break;
    }
    case 46746:
    {
        returnValue = F("Babenbergstr.");
        break;
    }
    case 46747:
    {
        returnValue = F("Babenbrook");
        break;
    }
    case 46748:
    {
        returnValue = F("Babendiek");
        break;
    }
    case 46749:
    {
        returnValue = F("Babendiekstr.");
        break;
    }
    case 46750:
    {
        returnValue = F("Babendoerp");
        break;
    }
    case 46751:
    {
        returnValue = F("Babendorfer Weg");
        break;
    }
    case 46752:
    {
        returnValue = F("Babendörp");
        break;
    }
    case 46753:
    {
        returnValue = F("Babendörpstieg");
        break;
    }
    case 46754:
    {
        returnValue = F("Babenend");
        break;
    }
    case 46755:
    {
        returnValue = F("Babener Str.");
        break;
    }
    case 46756:
    {
        returnValue = F("Babener Weg");
        break;
    }
    case 46757:
    {
        returnValue = F("Babenföhrt");
        break;
    }
    case 46758:
    {
        returnValue = F("Babenhaeuser Str.");
        break;
    }
    case 46759:
    {
        returnValue = F("Babenhaeuser Strasse");
        break;
    }
    case 46760:
    {
        returnValue = F("Babenhausen Süd");
        break;
    }
    case 46761:
    {
        returnValue = F("Babenhausener Str.");
        break;
    }
    case 46762:
    {
        returnValue = F("Babenhausener Weg");
        break;
    }
    case 46763:
    {
        returnValue = F("Babenhauser Str.");
        break;
    }
    case 46764:
    {
        returnValue = F("Babenhauser Weg");
        break;
    }
    case 46765:
    {
        returnValue = F("Babenhäuser Feld Schneise");
        break;
    }
    case 46766:
    {
        returnValue = F("Babenhäuser Landstr.");
        break;
    }
    case 46767:
    {
        returnValue = F("Babenhäuser Schneise");
        break;
    }
    case 46768:
    {
        returnValue = F("Babenhäuser Str.");
        break;
    }
    case 46769:
    {
        returnValue = F("Babenhäuser Weg");
        break;
    }
    case 46770:
    {
        returnValue = F("Babenkamp");
        break;
    }
    case 46771:
    {
        returnValue = F("Babenkoppel");
        break;
    }
    case 46772:
    {
        returnValue = F("Babenstieg");
        break;
    }
    case 46773:
    {
        returnValue = F("Babenstuber Weg");
        break;
    }
    case 46774:
    {
        returnValue = F("Babensweg");
        break;
    }
    case 46775:
    {
        returnValue = F("Babentwiete");
        break;
    }
    case 46776:
    {
        returnValue = F("Babenwischenweg");
        break;
    }
    case 46777:
    {
        returnValue = F("Baberg");
        break;
    }
    case 46778:
    {
        returnValue = F("Baberowweg");
        break;
    }
    case 46779:
    {
        returnValue = F("Babette-Gundlach-Platz");
        break;
    }
    case 46780:
    {
        returnValue = F("Babette-Hauf-Str.");
        break;
    }
    case 46781:
    {
        returnValue = F("Babette-Ihle-Platz");
        break;
    }
    case 46782:
    {
        returnValue = F("Babette-Koch-Weg");
        break;
    }
    case 46783:
    {
        returnValue = F("Babette-Müller-Str.");
        break;
    }
    case 46784:
    {
        returnValue = F("Babichweg");
        break;
    }
    case 46785:
    {
        returnValue = F("Babickstr.");
        break;
    }
    case 46786:
    {
        returnValue = F("Babiesweg");
        break;
    }
    case 46787:
    {
        returnValue = F("Babilonieweg");
        break;
    }
    case 46788:
    {
        returnValue = F("Babimost-Ring");
        break;
    }
    case 46789:
    {
        returnValue = F("Babinger Str.");
        break;
    }
    case 46790:
    {
        returnValue = F("Babingerstr.");
        break;
    }
    case 46791:
    {
        returnValue = F("Babisnauer Str.");
        break;
    }
    case 46792:
    {
        returnValue = F("Babisnauer Weg");
        break;
    }
    case 46793:
    {
        returnValue = F("Babitzer Str.");
        break;
    }
    case 46794:
    {
        returnValue = F("Babke");
        break;
    }
    case 46795:
    {
        returnValue = F("Babostr.");
        break;
    }
    case 46796:
    {
        returnValue = F("Babower Weg");
        break;
    }
    case 46797:
    {
        returnValue = F("Babstadter Str.");
        break;
    }
    case 46798:
    {
        returnValue = F("Babstadter Weg");
        break;
    }
    case 46799:
    {
        returnValue = F("Babster Berg");
        break;
    }
    case 46800:
    {
        returnValue = F("Babster Str.");
        break;
    }
    case 46801:
    {
        returnValue = F("Babststr.");
        break;
    }
    case 46802:
    {
        returnValue = F("Babypark Wesseling");
        break;
    }
    case 46803:
    {
        returnValue = F("Babywald");
        break;
    }
    case 46804:
    {
        returnValue = F("Babywald Neuenrade");
        break;
    }
    case 46805:
    {
        returnValue = F("Babywiese");
        break;
    }
    case 46806:
    {
        returnValue = F("Baccarat-Str.");
        break;
    }
    case 46807:
    {
        returnValue = F("Baccenroder Stieg");
        break;
    }
    case 46808:
    {
        returnValue = F("Bacchushof");
        break;
    }
    case 46809:
    {
        returnValue = F("Bacchusring");
        break;
    }
    case 46810:
    {
        returnValue = F("Bacchusstr.");
        break;
    }
    case 46811:
    {
        returnValue = F("Bacchusweg");
        break;
    }
    case 46812:
    {
        returnValue = F("Baccumer Str.");
        break;
    }
    case 46813:
    {
        returnValue = F("Bach");
        break;
    }
    case 46814:
    {
        returnValue = F("Bach-Str.");
        break;
    }
    case 46815:
    {
        returnValue = F("Bach/Leupolz");
        break;
    }
    case 46816:
    {
        returnValue = F("Bachacker");
        break;
    }
    case 46817:
    {
        returnValue = F("Bachackerweg");
        break;
    }
    case 46818:
    {
        returnValue = F("Bachallee");
        break;
    }
    case 46819:
    {
        returnValue = F("Bachanger");
        break;
    }
    case 46820:
    {
        returnValue = F("Bachangerweg");
        break;
    }
    case 46821:
    {
        returnValue = F("Bachanlage");
        break;
    }
    case 46822:
    {
        returnValue = F("Bachappen");
        break;
    }
    case 46823:
    {
        returnValue = F("Bacharacher Str.");
        break;
    }
    case 46824:
    {
        returnValue = F("Bacharachstr.");
        break;
    }
    case 46825:
    {
        returnValue = F("Bachasse");
        break;
    }
    case 46826:
    {
        returnValue = F("Bachaue");
        break;
    }
    case 46827:
    {
        returnValue = F("Bachaue \"Mühlenbach");
        break;
    }
    case 46828:
    {
        returnValue = F("Bachbauernhof");
        break;
    }
    case 46829:
    {
        returnValue = F("Bachbauernstr.");
        break;
    }
    case 46830:
    {
        returnValue = F("Bachbauernweg");
        break;
    }
    case 46831:
    {
        returnValue = F("Bachberg");
        break;
    }
    case 46832:
    {
        returnValue = F("Bachbergstr.");
        break;
    }
    case 46833:
    {
        returnValue = F("Bachbergweg");
        break;
    }
    case 46834:
    {
        returnValue = F("Bachbett");
        break;
    }
    case 46835:
    {
        returnValue = F("Bachbohlweg");
        break;
    }
    case 46836:
    {
        returnValue = F("Bachbohlweg/Urisbergweg");
        break;
    }
    case 46837:
    {
        returnValue = F("Bachbreite");
        break;
    }
    case 46838:
    {
        returnValue = F("Bachbrunnenstr.");
        break;
    }
    case 46839:
    {
        returnValue = F("Bachbrunnweg");
        break;
    }
    case 46840:
    {
        returnValue = F("Bachbräupassage");
        break;
    }
    case 46841:
    {
        returnValue = F("Bachbrück");
        break;
    }
    case 46842:
    {
        returnValue = F("Bachbrücke");
        break;
    }
    case 46843:
    {
        returnValue = F("Bachbügl");
        break;
    }
    case 46844:
    {
        returnValue = F("Bachbügler Weg");
        break;
    }
    case 46845:
    {
        returnValue = F("Bachdammweg");
        break;
    }
    case 46846:
    {
        returnValue = F("Bachdobelweg");
        break;
    }
    case 46847:
    {
        returnValue = F("Bachdresch");
        break;
    }
    case 46848:
    {
        returnValue = F("Bache");
        break;
    }
    case 46849:
    {
        returnValue = F("Bachecke");
        break;
    }
    case 46850:
    {
        returnValue = F("Bachelfeldstr.");
        break;
    }
    case 46851:
    {
        returnValue = F("Bacheltweg");
        break;
    }
    case 46852:
    {
        returnValue = F("Bacheläcker");
        break;
    }
    case 46853:
    {
        returnValue = F("Bachemer Landstr.");
        break;
    }
    case 46854:
    {
        returnValue = F("Bachemer Str.");
        break;
    }
    case 46855:
    {
        returnValue = F("Bachemer Weg");
        break;
    }
    case 46856:
    {
        returnValue = F("Bachems Gasse");
        break;
    }
    case 46857:
    {
        returnValue = F("Bachemstr.");
        break;
    }
    case 46858:
    {
        returnValue = F("Bachenau");
        break;
    }
    case 46859:
    {
        returnValue = F("Bachenauer Str.");
        break;
    }
    case 46860:
    {
        returnValue = F("Bachenbergstr.");
        break;
    }
    case 46861:
    {
        returnValue = F("Bachenbrock");
        break;
    }
    case 46862:
    {
        returnValue = F("Bachenbrucher Str.");
        break;
    }
    case 46863:
    {
        returnValue = F("Bachenbruchsweg");
        break;
    }
    case 46864:
    {
        returnValue = F("Bachengang");
        break;
    }
    case 46865:
    {
        returnValue = F("Bachenpfad");
        break;
    }
    case 46866:
    {
        returnValue = F("Bachensteinweg");
        break;
    }
    case 46867:
    {
        returnValue = F("Bachenstr.");
        break;
    }
    case 46868:
    {
        returnValue = F("Bachenweg");
        break;
    }
    case 46869:
    {
        returnValue = F("Bacher Berg");
        break;
    }
    case 46870:
    {
        returnValue = F("Bacher Str.");
        break;
    }
    case 46871:
    {
        returnValue = F("Bacher Weg");
        break;
    }
    case 46872:
    {
        returnValue = F("Bachere");
        break;
    }
    case 46873:
    {
        returnValue = F("Bacheresweg");
        break;
    }
    case 46874:
    {
        returnValue = F("Bachereweg");
        break;
    }
    case 46875:
    {
        returnValue = F("Bachergasse");
        break;
    }
    case 46876:
    {
        returnValue = F("Bacherhofstr.");
        break;
    }
    case 46877:
    {
        returnValue = F("Bacherlebnispfad Pulheimer Bach");
        break;
    }
    case 46878:
    {
        returnValue = F("Bacherlehstr.");
        break;
    }
    case 46879:
    {
        returnValue = F("Bacherlisweg");
        break;
    }
    case 46880:
    {
        returnValue = F("Bacherlstr.");
        break;
    }
    case 46881:
    {
        returnValue = F("Bacherner Str.");
        break;
    }
    case 46882:
    {
        returnValue = F("Bacherner Weg");
        break;
    }
    case 46883:
    {
        returnValue = F("Bachernstr.");
        break;
    }
    case 46884:
    {
        returnValue = F("Bacherstr.");
        break;
    }
    case 46885:
    {
        returnValue = F("Bachertweg");
        break;
    }
    case 46886:
    {
        returnValue = F("Bacherwald");
        break;
    }
    case 46887:
    {
        returnValue = F("Bacherweg");
        break;
    }
    case 46888:
    {
        returnValue = F("Bachetsstr.");
        break;
    }
    case 46889:
    {
        returnValue = F("Bacheufer");
        break;
    }
    case 46890:
    {
        returnValue = F("Bachfeld");
        break;
    }
    case 46891:
    {
        returnValue = F("Bachfelder Weg");
        break;
    }
    case 46892:
    {
        returnValue = F("Bachfeldstr.");
        break;
    }
    case 46893:
    {
        returnValue = F("Bachfeldweg");
        break;
    }
    case 46894:
    {
        returnValue = F("Bachfilzenweg");
        break;
    }
    case 46895:
    {
        returnValue = F("Bachflussweg");
        break;
    }
    case 46896:
    {
        returnValue = F("Bachfurtweg");
        break;
    }
    case 46897:
    {
        returnValue = F("Bachgarten");
        break;
    }
    case 46898:
    {
        returnValue = F("Bachgartenstr.");
        break;
    }
    case 46899:
    {
        returnValue = F("Bachgartenweg");
        break;
    }
    case 46900:
    {
        returnValue = F("Bachgasse");
        break;
    }
    case 46901:
    {
        returnValue = F("Bachgassl");
        break;
    }
    case 46902:
    {
        returnValue = F("Bachgaustr.");
        break;
    }
    case 46903:
    {
        returnValue = F("Bachgauweg");
        break;
    }
    case 46904:
    {
        returnValue = F("Bachgerstenstr.");
        break;
    }
    case 46905:
    {
        returnValue = F("Bachgraben");
        break;
    }
    case 46906:
    {
        returnValue = F("Bachgrabenstr.");
        break;
    }
    case 46907:
    {
        returnValue = F("Bachgrabenweg");
        break;
    }
    case 46908:
    {
        returnValue = F("Bachgrafenstr.");
        break;
    }
    case 46909:
    {
        returnValue = F("Bachgrund");
        break;
    }
    case 46910:
    {
        returnValue = F("Bachgrundschneise");
        break;
    }
    case 46911:
    {
        returnValue = F("Bachgrundstr.");
        break;
    }
    case 46912:
    {
        returnValue = F("Bachgärten");
        break;
    }
    case 46913:
    {
        returnValue = F("Bachgässchen");
        break;
    }
    case 46914:
    {
        returnValue = F("Bachgässle");
        break;
    }
    case 46915:
    {
        returnValue = F("Bachgäßchen");
        break;
    }
    case 46916:
    {
        returnValue = F("Bachgäßle");
        break;
    }
    case 46917:
    {
        returnValue = F("Bachhagler Str.");
        break;
    }
    case 46918:
    {
        returnValue = F("Bachhalde");
        break;
    }
    case 46919:
    {
        returnValue = F("Bachhalde-Reitweg");
        break;
    }
    case 46920:
    {
        returnValue = F("Bachhaldenweg");
        break;
    }
    case 46921:
    {
        returnValue = F("Bachhaltermühle");
        break;
    }
    case 46922:
    {
        returnValue = F("Bachham");
        break;
    }
    case 46923:
    {
        returnValue = F("Bachhamer Str.");
        break;
    }
    case 46924:
    {
        returnValue = F("Bachhansenwiese");
        break;
    }
    case 46925:
    {
        returnValue = F("Bachhauptener Weg");
        break;
    }
    case 46926:
    {
        returnValue = F("Bachhaus");
        break;
    }
    case 46927:
    {
        returnValue = F("Bachhausen");
        break;
    }
    case 46928:
    {
        returnValue = F("Bachhausener Str.");
        break;
    }
    case 46929:
    {
        returnValue = F("Bachhauser Str.");
        break;
    }
    case 46930:
    {
        returnValue = F("Bachheide-West");
        break;
    }
    case 46931:
    {
        returnValue = F("Bachheimer Str.");
        break;
    }
    case 46932:
    {
        returnValue = F("Bachhofweg");
        break;
    }
    case 46933:
    {
        returnValue = F("Bachholz");
        break;
    }
    case 46934:
    {
        returnValue = F("Bachholzer Riede");
        break;
    }
    case 46935:
    {
        returnValue = F("Bachholzstr.");
        break;
    }
    case 46936:
    {
        returnValue = F("Bachhorn");
        break;
    }
    case 46937:
    {
        returnValue = F("Bachhorststr.");
        break;
    }
    case 46938:
    {
        returnValue = F("Bachhovenweg");
        break;
    }
    case 46939:
    {
        returnValue = F("Bachhäldeweg");
        break;
    }
    case 46940:
    {
        returnValue = F("Bachhäusel");
        break;
    }
    case 46941:
    {
        returnValue = F("Bachhäusle");
        break;
    }
    case 46942:
    {
        returnValue = F("Bachhöfe");
        break;
    }
    case 46943:
    {
        returnValue = F("Bachhöhe");
        break;
    }
    case 46944:
    {
        returnValue = F("Bachhöhle");
        break;
    }
    case 46945:
    {
        returnValue = F("Bachhöller Weg");
        break;
    }
    case 46946:
    {
        returnValue = F("Bachhühle");
        break;
    }
    case 46947:
    {
        returnValue = F("Bachingerstr.");
        break;
    }
    case 46948:
    {
        returnValue = F("Bachingerweg");
        break;
    }
    case 46949:
    {
        returnValue = F("Bachiweg");
        break;
    }
    case 46950:
    {
        returnValue = F("Bachjägerweg");
        break;
    }
    case 46951:
    {
        returnValue = F("Bachkoppelweg");
        break;
    }
    case 46952:
    {
        returnValue = F("Bachkramerweg");
        break;
    }
    case 46953:
    {
        returnValue = F("Bachlaich");
        break;
    }
    case 46954:
    {
        returnValue = F("Bachlangenstr.");
        break;
    }
    case 46955:
    {
        returnValue = F("Bachlangweg");
        break;
    }
    case 46956:
    {
        returnValue = F("Bachlehnerstr.");
        break;
    }
    case 46957:
    {
        returnValue = F("Bachleite");
        break;
    }
    case 46958:
    {
        returnValue = F("Bachleiten");
        break;
    }
    case 46959:
    {
        returnValue = F("Bachleithe");
        break;
    }
    case 46960:
    {
        returnValue = F("Bachler Str.");
        break;
    }
    case 46961:
    {
        returnValue = F("Bachlerweg");
        break;
    }
    case 46962:
    {
        returnValue = F("Bachlingenweg");
        break;
    }
    case 46963:
    {
        returnValue = F("Bachlohe");
        break;
    }
    case 46964:
    {
        returnValue = F("Bachlweg");
        break;
    }
    case 46965:
    {
        returnValue = F("Bachlände");
        break;
    }
    case 46966:
    {
        returnValue = F("Bachlängweg");
        break;
    }
    case 46967:
    {
        returnValue = F("Bachmaierstr.");
        break;
    }
    case 46968:
    {
        returnValue = F("Bachmairgasse");
        break;
    }
    case 46969:
    {
        returnValue = F("Bachmairstr.");
        break;
    }
    case 46970:
    {
        returnValue = F("Bachmairweg");
        break;
    }
    case 46971:
    {
        returnValue = F("Bachmannsgasse");
        break;
    }
    case 46972:
    {
        returnValue = F("Bachmannshof");
        break;
    }
    case 46973:
    {
        returnValue = F("Bachmannstr.");
        break;
    }
    case 46974:
    {
        returnValue = F("Bachmannsweg");
        break;
    }
    case 46975:
    {
        returnValue = F("Bachmannweg");
        break;
    }
    case 46976:
    {
        returnValue = F("Bachmatt");
        break;
    }
    case 46977:
    {
        returnValue = F("Bachmatten");
        break;
    }
    case 46978:
    {
        returnValue = F("Bachmayerstr.");
        break;
    }
    case 46979:
    {
        returnValue = F("Bachmeierholzweg");
        break;
    }
    case 46980:
    {
        returnValue = F("Bachmeyerweg");
        break;
    }
    case 46981:
    {
        returnValue = F("Bachmorgen");
        break;
    }
    case 46982:
    {
        returnValue = F("Bachmoserweg");
        break;
    }
    case 46983:
    {
        returnValue = F("Bachmuschelweg");
        break;
    }
    case 46984:
    {
        returnValue = F("Bachmättle");
        break;
    }
    case 46985:
    {
        returnValue = F("Bachmättleweg");
        break;
    }
    case 46986:
    {
        returnValue = F("Bachmühle");
        break;
    }
    case 46987:
    {
        returnValue = F("Bachmühlenweg");
        break;
    }
    case 46988:
    {
        returnValue = F("Bachmühlestr.");
        break;
    }
    case 46989:
    {
        returnValue = F("Bachmühlweg");
        break;
    }
    case 46990:
    {
        returnValue = F("Bachovenstr.");
        break;
    }
    case 46991:
    {
        returnValue = F("Bachpeterweg");
        break;
    }
    case 46992:
    {
        returnValue = F("Bachpfad");
        break;
    }
    case 46993:
    {
        returnValue = F("Bachplatz");
        break;
    }
    case 46994:
    {
        returnValue = F("Bachpromenade");
        break;
    }
    case 46995:
    {
        returnValue = F("Bachpromenade Park");
        break;
    }
    case 46996:
    {
        returnValue = F("Bachraer Str.");
        break;
    }
    case 46997:
    {
        returnValue = F("Bachraer Weg");
        break;
    }
    case 46998:
    {
        returnValue = F("Bachrain");
        break;
    }
    case 46999:
    {
        returnValue = F("Bachrainer Str.");
        break;
    }
    case 47000:
    {
        returnValue = F("Bachrainstr.");
        break;
    }
    case 47001:
    {
        returnValue = F("Bachrasen");
        break;
    }
    case 47002:
    {
        returnValue = F("Bachreihe");
        break;
    }
    case 47003:
    {
        returnValue = F("Bachring");
        break;
    }
    case 47004:
    {
        returnValue = F("Bachrunzel");
        break;
    }
    case 47005:
    {
        returnValue = F("Bachrücken");
        break;
    }
    case 47006:
    {
        returnValue = F("Bachs Garten");
        break;
    }
    case 47007:
    {
        returnValue = F("Bachsatzstr.");
        break;
    }
    case 47008:
    {
        returnValue = F("Bachschanze");
        break;
    }
    case 47009:
    {
        returnValue = F("Bachschleife");
        break;
    }
    case 47010:
    {
        returnValue = F("Bachschlossweg");
        break;
    }
    case 47011:
    {
        returnValue = F("Bachschmidstr.");
        break;
    }
    case 47012:
    {
        returnValue = F("Bachschneise");
        break;
    }
    case 47013:
    {
        returnValue = F("Bachschwinde");
        break;
    }
    case 47014:
    {
        returnValue = F("Bachseifenweg");
        break;
    }
    case 47015:
    {
        returnValue = F("Bachseite");
        break;
    }
    case 47016:
    {
        returnValue = F("Bachsiedlung");
        break;
    }
    case 47017:
    {
        returnValue = F("Bachstade");
        break;
    }
    case 47018:
    {
        returnValue = F("Bachstadenweg");
        break;
    }
    case 47019:
    {
        returnValue = F("Bachstedter Str.");
        break;
    }
    case 47020:
    {
        returnValue = F("Bachsteg");
        break;
    }
    case 47021:
    {
        returnValue = F("Bachstege");
        break;
    }
    case 47022:
    {
        returnValue = F("Bachsteig");
        break;
    }
    case 47023:
    {
        returnValue = F("Bachsteige");
        break;
    }
    case 47024:
    {
        returnValue = F("Bachsteinbahn");
        break;
    }
    case 47025:
    {
        returnValue = F("Bachsteingasse");
        break;
    }
    case 47026:
    {
        returnValue = F("Bachsteinweg");
        break;
    }
    case 47027:
    {
        returnValue = F("Bachstelzendyk");
        break;
    }
    case 47028:
    {
        returnValue = F("Bachstelzengang");
        break;
    }
    case 47029:
    {
        returnValue = F("Bachstelzengasse");
        break;
    }
    case 47030:
    {
        returnValue = F("Bachstelzenring");
        break;
    }
    case 47031:
    {
        returnValue = F("Bachstelzensteig");
        break;
    }
    case 47032:
    {
        returnValue = F("Bachstelzenstr.");
        break;
    }
    case 47033:
    {
        returnValue = F("Bachstelzenweg");
        break;
    }
    case 47034:
    {
        returnValue = F("Bachstelzenwiese");
        break;
    }
    case 47035:
    {
        returnValue = F("Bachstieg");
        break;
    }
    case 47036:
    {
        returnValue = F("Bachstiege");
        break;
    }
    case 47037:
    {
        returnValue = F("Bachstr.");
        break;
    }
    case 47038:
    {
        returnValue = F("Bachstr.n Park");
        break;
    }
    case 47039:
    {
        returnValue = F("Bachstruthstr.");
        break;
    }
    case 47040:
    {
        returnValue = F("Bachsträßchen");
        break;
    }
    case 47041:
    {
        returnValue = F("Bachstumpenweg");
        break;
    }
    case 47042:
    {
        returnValue = F("Bachstückerweg");
        break;
    }
    case 47043:
    {
        returnValue = F("Bachsweg");
        break;
    }
    case 47044:
    {
        returnValue = F("Bachtal");
        break;
    }
    case 47045:
    {
        returnValue = F("Bachtalenweg");
        break;
    }
    case 47046:
    {
        returnValue = F("Bachtalstr.");
        break;
    }
    case 47047:
    {
        returnValue = F("Bachtel");
        break;
    }
    case 47048:
    {
        returnValue = F("Bachtel Str.");
        break;
    }
    case 47049:
    {
        returnValue = F("Bachtelgasse");
        break;
    }
    case 47050:
    {
        returnValue = F("Bachtelweg");
        break;
    }
    case 47051:
    {
        returnValue = F("Bachthal");
        break;
    }
    case 47052:
    {
        returnValue = F("Bachtorstr.");
        break;
    }
    case 47053:
    {
        returnValue = F("Bachtreppchen");
        break;
    }
    case 47054:
    {
        returnValue = F("Bachtwietje");
        break;
    }
    case 47055:
    {
        returnValue = F("Bachumer Heide");
        break;
    }
    case 47056:
    {
        returnValue = F("Bachumer Weg");
        break;
    }
    case 47057:
    {
        returnValue = F("Bachusring");
        break;
    }
    case 47058:
    {
        returnValue = F("Bachviertel");
        break;
    }
    case 47059:
    {
        returnValue = F("Bachviertelstr.");
        break;
    }
    case 47060:
    {
        returnValue = F("Bachwanderweg");
        break;
    }
    case 47061:
    {
        returnValue = F("Bachwasenstr.");
        break;
    }
    case 47062:
    {
        returnValue = F("Bachweberstr.");
        break;
    }
    case 47063:
    {
        returnValue = F("Bachweg");
        break;
    }
    case 47064:
    {
        returnValue = F("Bachwegle");
        break;
    }
    case 47065:
    {
        returnValue = F("Bachweide");
        break;
    }
    case 47066:
    {
        returnValue = F("Bachweinbergweg");
        break;
    }
    case 47067:
    {
        returnValue = F("Bachwies");
        break;
    }
    case 47068:
    {
        returnValue = F("Bachwiese");
        break;
    }
    case 47069:
    {
        returnValue = F("Bachwiesen");
        break;
    }
    case 47070:
    {
        returnValue = F("Bachwiesenfurt");
        break;
    }
    case 47071:
    {
        returnValue = F("Bachwiesenring");
        break;
    }
    case 47072:
    {
        returnValue = F("Bachwiesenstr.");
        break;
    }
    case 47073:
    {
        returnValue = F("Bachwiesenweg");
        break;
    }
    case 47074:
    {
        returnValue = F("Bachwingert");
        break;
    }
    case 47075:
    {
        returnValue = F("Bachwinkel");
        break;
    }
    case 47076:
    {
        returnValue = F("Bachwörth");
        break;
    }
    case 47077:
    {
        returnValue = F("Bachzimmerer Str.");
        break;
    }
    case 47078:
    {
        returnValue = F("Bachzimmerer Ösch");
        break;
    }
    case 47079:
    {
        returnValue = F("Bachzimmern");
        break;
    }
    case 47080:
    {
        returnValue = F("Bachäcker");
        break;
    }
    case 47081:
    {
        returnValue = F("Bachäckerstr.");
        break;
    }
    case 47082:
    {
        returnValue = F("Bachäckerweg");
        break;
    }
    case 47083:
    {
        returnValue = F("Bachübergang");
        break;
    }
    case 47084:
    {
        returnValue = F("Backbord");
        break;
    }
    case 47085:
    {
        returnValue = F("Backbordstr.");
        break;
    }
    case 47086:
    {
        returnValue = F("Backeberger Kirchweg");
        break;
    }
    case 47087:
    {
        returnValue = F("Backebergs Totenweg");
        break;
    }
    case 47088:
    {
        returnValue = F("Backebergsmühle");
        break;
    }
    case 47089:
    {
        returnValue = F("Backeleyen");
        break;
    }
    case 47090:
    {
        returnValue = F("Backeleyenstr.");
        break;
    }
    case 47091:
    {
        returnValue = F("Backelsteinstr.");
        break;
    }
    case 47092:
    {
        returnValue = F("Backemoorer Str.");
        break;
    }
    case 47093:
    {
        returnValue = F("Backemstr.");
        break;
    }
    case 47094:
    {
        returnValue = F("Backemuder Str.");
        break;
    }
    case 47095:
    {
        returnValue = F("Backenbeeksweg");
        break;
    }
    case 47096:
    {
        returnValue = F("Backendiek");
        break;
    }
    case 47097:
    {
        returnValue = F("Backenfeldsteig");
        break;
    }
    case 47098:
    {
        returnValue = F("Backenkamp");
        break;
    }
    case 47099:
    {
        returnValue = F("Backenköhlerweg");
        break;
    }
    case 47100:
    {
        returnValue = F("Backenmühlenweg");
        break;
    }
    case 47101:
    {
        returnValue = F("Backenreuteweg");
        break;
    }
    case 47102:
    {
        returnValue = F("Backens-Platz");
        break;
    }
    case 47103:
    {
        returnValue = F("Backensmühle");
        break;
    }
    case 47104:
    {
        returnValue = F("Backenswung");
        break;
    }
    case 47105:
    {
        returnValue = F("Backenweg");
        break;
    }
    case 47106:
    {
        returnValue = F("Backer-Frieder-Weg");
        break;
    }
    case 47107:
    {
        returnValue = F("Backermatt");
        break;
    }
    case 47108:
    {
        returnValue = F("Backern");
        break;
    }
    case 47109:
    {
        returnValue = F("Backersweg");
        break;
    }
    case 47110:
    {
        returnValue = F("Backes");
        break;
    }
    case 47111:
    {
        returnValue = F("Backes Eck");
        break;
    }
    case 47112:
    {
        returnValue = F("Backes Ecke");
        break;
    }
    case 47113:
    {
        returnValue = F("Backes-Pit-Weg");
        break;
    }
    case 47114:
    {
        returnValue = F("Backesberg");
        break;
    }
    case 47115:
    {
        returnValue = F("Backesecken");
        break;
    }
    case 47116:
    {
        returnValue = F("Backesfeld");
        break;
    }
    case 47117:
    {
        returnValue = F("Backesgarten");
        break;
    }
    case 47118:
    {
        returnValue = F("Backesgasse");
        break;
    }
    case 47119:
    {
        returnValue = F("Backesgäßchen");
        break;
    }
    case 47120:
    {
        returnValue = F("Backeshecke");
        break;
    }
    case 47121:
    {
        returnValue = F("Backeshof");
        break;
    }
    case 47122:
    {
        returnValue = F("Backeskamp");
        break;
    }
    case 47123:
    {
        returnValue = F("Backespad");
        break;
    }
    case 47124:
    {
        returnValue = F("Backespfad");
        break;
    }
    case 47125:
    {
        returnValue = F("Backesplatz");
        break;
    }
    case 47126:
    {
        returnValue = F("Backesstr.");
        break;
    }
    case 47127:
    {
        returnValue = F("Backestr.");
        break;
    }
    case 47128:
    {
        returnValue = F("Backesweg");
        break;
    }
    case 47129:
    {
        returnValue = F("Backesweider Weg");
        break;
    }
    case 47130:
    {
        returnValue = F("Backeswiese");
        break;
    }
    case 47131:
    {
        returnValue = F("Backeweg");
        break;
    }
    case 47132:
    {
        returnValue = F("Backewiese");
        break;
    }
    case 47133:
    {
        returnValue = F("Backfeldstr.");
        break;
    }
    case 47134:
    {
        returnValue = F("Backfischgasse");
        break;
    }
    case 47135:
    {
        returnValue = F("Backgarten");
        break;
    }
    case 47136:
    {
        returnValue = F("Backgasse");
        break;
    }
    case 47137:
    {
        returnValue = F("Backgraben");
        break;
    }
    case 47138:
    {
        returnValue = F("Backgrabenweg");
        break;
    }
    case 47139:
    {
        returnValue = F("Backhausberg");
        break;
    }
    case 47140:
    {
        returnValue = F("Backhausbreite");
        break;
    }
    case 47141:
    {
        returnValue = F("Backhausenweg");
        break;
    }
    case 47142:
    {
        returnValue = F("Backhausfeld");
        break;
    }
    case 47143:
    {
        returnValue = F("Backhausgarten");
        break;
    }
    case 47144:
    {
        returnValue = F("Backhausgasse");
        break;
    }
    case 47145:
    {
        returnValue = F("Backhausgraben");
        break;
    }
    case 47146:
    {
        returnValue = F("Backhausgässchen");
        break;
    }
    case 47147:
    {
        returnValue = F("Backhausgäßchen");
        break;
    }
    case 47148:
    {
        returnValue = F("Backhaushohl");
        break;
    }
    case 47149:
    {
        returnValue = F("Backhaushohle");
        break;
    }
    case 47150:
    {
        returnValue = F("Backhauslinie");
        break;
    }
    case 47151:
    {
        returnValue = F("Backhauspforte");
        break;
    }
    case 47152:
    {
        returnValue = F("Backhausplan");
        break;
    }
    case 47153:
    {
        returnValue = F("Backhausplatz");
        break;
    }
    case 47154:
    {
        returnValue = F("Backhausstieg");
        break;
    }
    case 47155:
    {
        returnValue = F("Backhausstr.");
        break;
    }
    case 47156:
    {
        returnValue = F("Backhausweg");
        break;
    }
    case 47157:
    {
        returnValue = F("Backhespfädchen");
        break;
    }
    case 47158:
    {
        returnValue = F("Backhol");
        break;
    }
    case 47159:
    {
        returnValue = F("Backhorn");
        break;
    }
    case 47160:
    {
        returnValue = F("Backhusweg");
        break;
    }
    case 47161:
    {
        returnValue = F("Backhuus");
        break;
    }
    case 47162:
    {
        returnValue = F("Backhuusweg");
        break;
    }
    case 47163:
    {
        returnValue = F("Backhäusleweg");
        break;
    }
    case 47164:
    {
        returnValue = F("Backküchengässle");
        break;
    }
    case 47165:
    {
        returnValue = F("Backleber Tor");
        break;
    }
    case 47166:
    {
        returnValue = F("Backleber Weg");
        break;
    }
    case 47167:
    {
        returnValue = F("Backmeisterweg");
        break;
    }
    case 47168:
    {
        returnValue = F("Backmuhlstr.");
        break;
    }
    case 47169:
    {
        returnValue = F("Backmuldenweg");
        break;
    }
    case 47170:
    {
        returnValue = F("Backnanger Str.");
        break;
    }
    case 47171:
    {
        returnValue = F("Backnanger Weg");
        break;
    }
    case 47172:
    {
        returnValue = F("Backofen");
        break;
    }
    case 47173:
    {
        returnValue = F("Backofen-Schneise");
        break;
    }
    case 47174:
    {
        returnValue = F("Backofenberg");
        break;
    }
    case 47175:
    {
        returnValue = F("Backofenbreite");
        break;
    }
    case 47176:
    {
        returnValue = F("Backofengasse");
        break;
    }
    case 47177:
    {
        returnValue = F("Backofenhügel");
        break;
    }
    case 47178:
    {
        returnValue = F("Backofenschneise");
        break;
    }
    case 47179:
    {
        returnValue = F("Backofensend");
        break;
    }
    case 47180:
    {
        returnValue = F("Backofenstr.");
        break;
    }
    case 47181:
    {
        returnValue = F("Backofentrift");
        break;
    }
    case 47182:
    {
        returnValue = F("Backofenweg");
        break;
    }
    case 47183:
    {
        returnValue = F("Backoffenstr.");
        break;
    }
    case 47184:
    {
        returnValue = F("Backrain");
        break;
    }
    case 47185:
    {
        returnValue = F("Backs Höfe");
        break;
    }
    case 47186:
    {
        returnValue = F("Backsberg");
        break;
    }
    case 47187:
    {
        returnValue = F("Backsgarten");
        break;
    }
    case 47188:
    {
        returnValue = F("Backsgasse");
        break;
    }
    case 47189:
    {
        returnValue = F("Backsheide");
        break;
    }
    case 47190:
    {
        returnValue = F("Backshög");
        break;
    }
    case 47191:
    {
        returnValue = F("Backsiek");
        break;
    }
    case 47192:
    {
        returnValue = F("Backskamp");
        break;
    }
    case 47193:
    {
        returnValue = F("Backsmannstr.");
        break;
    }
    case 47194:
    {
        returnValue = F("Backsplatz");
        break;
    }
    case 47195:
    {
        returnValue = F("Backsstr.");
        break;
    }
    case 47196:
    {
        returnValue = F("Backstania");
        break;
    }
    case 47197:
    {
        returnValue = F("Backsteinhof");
        break;
    }
    case 47198:
    {
        returnValue = F("Backsteinweg");
        break;
    }
    case 47199:
    {
        returnValue = F("Backstr.");
        break;
    }
    case 47200:
    {
        returnValue = F("Backtrog");
        break;
    }
    case 47201:
    {
        returnValue = F("Backtwete");
        break;
    }
    case 47202:
    {
        returnValue = F("Backumer Str.");
        break;
    }
    case 47203:
    {
        returnValue = F("Backumer Tal");
        break;
    }
    case 47204:
    {
        returnValue = F("Backweg");
        break;
    }
    case 47205:
    {
        returnValue = F("Backwinkelstr.");
        break;
    }
    case 47206:
    {
        returnValue = F("Bad");
        break;
    }
    case 47207:
    {
        returnValue = F("Bad Aegir");
        break;
    }
    case 47208:
    {
        returnValue = F("Bad Aibling / Marienplatz");
        break;
    }
    case 47209:
    {
        returnValue = F("Bad Bentheimer Weg");
        break;
    }
    case 47210:
    {
        returnValue = F("Bad Bergzaberner Str.");
        break;
    }
    case 47211:
    {
        returnValue = F("Bad Berkaer Str.");
        break;
    }
    case 47212:
    {
        returnValue = F("Bad Bernecker Str.");
        break;
    }
    case 47213:
    {
        returnValue = F("Bad Bibraer Str.");
        break;
    }
    case 47214:
    {
        returnValue = F("Bad Bibraer Weg");
        break;
    }
    case 47215:
    {
        returnValue = F("Bad Birkenhofweg");
        break;
    }
    case 47216:
    {
        returnValue = F("Bad Blankenburg, Stadtmühle");
        break;
    }
    case 47217:
    {
        returnValue = F("Bad Blankenburger Str.");
        break;
    }
    case 47218:
    {
        returnValue = F("Bad Boll Weg");
        break;
    }
    case 47219:
    {
        returnValue = F("Bad Brunnthal");
        break;
    }
    case 47220:
    {
        returnValue = F("Bad Brückenauer Str.");
        break;
    }
    case 47221:
    {
        returnValue = F("Bad Buchauer Str.");
        break;
    }
    case 47222:
    {
        returnValue = F("Bad Doberaner Str.");
        break;
    }
    case 47223:
    {
        returnValue = F("Bad Driburger Str.");
        break;
    }
    case 47224:
    {
        returnValue = F("Bad Dübener Str.");
        break;
    }
    case 47225:
    {
        returnValue = F("Bad Dürkheim, Bahnhof");
        break;
    }
    case 47226:
    {
        returnValue = F("Bad Dürkheimer Str.");
        break;
    }
    case 47227:
    {
        returnValue = F("Bad Dürrenberger Str.");
        break;
    }
    case 47228:
    {
        returnValue = F("Bad Dürrheimer Str.");
        break;
    }
    case 47229:
    {
        returnValue = F("Bad Eilsener Kleinbahn");
        break;
    }
    case 47230:
    {
        returnValue = F("Bad Emser Str.");
        break;
    }
    case 47231:
    {
        returnValue = F("Bad Essener Str.");
        break;
    }
    case 47232:
    {
        returnValue = F("Bad Flinsberger-Str.");
        break;
    }
    case 47233:
    {
        returnValue = F("Bad Forstenrieder Park");
        break;
    }
    case 47234:
    {
        returnValue = F("Bad Freienwalder Brücke");
        break;
    }
    case 47235:
    {
        returnValue = F("Bad Godesberger Tunnel");
        break;
    }
    case 47236:
    {
        returnValue = F("Bad Harzburger Str.");
        break;
    }
    case 47237:
    {
        returnValue = F("Bad Harzburger Weg");
        break;
    }
    case 47238:
    {
        returnValue = F("Bad Hersfelder Str.");
        break;
    }
    case 47239:
    {
        returnValue = F("Bad Hersfelder Weg");
        break;
    }
    case 47240:
    {
        returnValue = F("Bad Homburger Str.");
        break;
    }
    case 47241:
    {
        returnValue = F("Bad Honnefer Str.");
        break;
    }
    case 47242:
    {
        returnValue = F("Bad Hundertpfund");
        break;
    }
    case 47243:
    {
        returnValue = F("Bad Höhenstadt");
        break;
    }
    case 47244:
    {
        returnValue = F("Bad Iburger Str.");
        break;
    }
    case 47245:
    {
        returnValue = F("Bad Kissinger Str.");
        break;
    }
    case 47246:
    {
        returnValue = F("Bad Kleinener Chaussee");
        break;
    }
    case 47247:
    {
        returnValue = F("Bad Kreuznacher Str.");
        break;
    }
    case 47248:
    {
        returnValue = F("Bad Krozinger Str.");
        break;
    }
    case 47249:
    {
        returnValue = F("Bad Königer Weg");
        break;
    }
    case 47250:
    {
        returnValue = F("Bad Langesalza-Platz");
        break;
    }
    case 47251:
    {
        returnValue = F("Bad Lausicker Str.");
        break;
    }
    case 47252:
    {
        returnValue = F("Bad Lippspringer Ring");
        break;
    }
    case 47253:
    {
        returnValue = F("Bad Lippspringer Str.");
        break;
    }
    case 47254:
    {
        returnValue = F("Bad Marienberger Str.");
        break;
    }
    case 47255:
    {
        returnValue = F("Bad Meinberger Str.");
        break;
    }
    case 47256:
    {
        returnValue = F("Bad Mergentheimer Str.");
        break;
    }
    case 47257:
    {
        returnValue = F("Bad Muskauer Str.");
        break;
    }
    case 47258:
    {
        returnValue = F("Bad Nauheimer Str.");
        break;
    }
    case 47259:
    {
        returnValue = F("Bad Nauheimer Weg");
        break;
    }
    case 47260:
    {
        returnValue = F("Bad Neustädter Str.");
        break;
    }
    case 47261:
    {
        returnValue = F("Bad Niederbronner Weg");
        break;
    }
    case 47262:
    {
        returnValue = F("Bad Oberdorfer Str.");
        break;
    }
    case 47263:
    {
        returnValue = F("Bad Oeynhausener Str.");
        break;
    }
    case 47264:
    {
        returnValue = F("Bad Orber Str.");
        break;
    }
    case 47265:
    {
        returnValue = F("Bad Sachsaer Str.");
        break;
    }
    case 47266:
    {
        returnValue = F("Bad Salzbrunner Str.");
        break;
    }
    case 47267:
    {
        returnValue = F("Bad Salzhäuser Weg");
        break;
    }
    case 47268:
    {
        returnValue = F("Bad Salzschlirfer Str.");
        break;
    }
    case 47269:
    {
        returnValue = F("Bad Schmiedeberger Str.");
        break;
    }
    case 47270:
    {
        returnValue = F("Bad Segeberger Str.");
        break;
    }
    case 47271:
    {
        returnValue = F("Bad Sodener Str.");
        break;
    }
    case 47272:
    {
        returnValue = F("Bad Sodener Weg");
        break;
    }
    case 47273:
    {
        returnValue = F("Bad Stebener Str.");
        break;
    }
    case 47274:
    {
        returnValue = F("Bad Sulzaer Str.");
        break;
    }
    case 47275:
    {
        returnValue = F("Bad Sülzer Str.");
        break;
    }
    case 47276:
    {
        returnValue = F("Bad Tennstedter Str.");
        break;
    }
    case 47277:
    {
        returnValue = F("Bad Trißl Park");
        break;
    }
    case 47278:
    {
        returnValue = F("Bad Tönisstein");
        break;
    }
    case 47279:
    {
        returnValue = F("Bad Vilbeler Platz");
        break;
    }
    case 47280:
    {
        returnValue = F("Bad Wiesseer Höhenstr.");
        break;
    }
    case 47281:
    {
        returnValue = F("Bad Wildunger Str.");
        break;
    }
    case 47282:
    {
        returnValue = F("Bad Wilsnacker Landstr.");
        break;
    }
    case 47283:
    {
        returnValue = F("Bad Wilsnacker Str.");
        break;
    }
    case 47284:
    {
        returnValue = F("Bad Wilsnacker Weg");
        break;
    }
    case 47285:
    {
        returnValue = F("Bad Windsheimer Str.");
        break;
    }
    case 47286:
    {
        returnValue = F("Bad Wörishofener Str.");
        break;
    }
    case 47287:
    {
        returnValue = F("Bad Wörishofer Str.");
        break;
    }
    case 47288:
    {
        returnValue = F("Bad Zwestener Str.");
        break;
    }
    case 47289:
    {
        returnValue = F("Bad-Anna-Weg");
        break;
    }
    case 47290:
    {
        returnValue = F("Bad-Aussee-Str.");
        break;
    }
    case 47291:
    {
        returnValue = F("Bad-Berka-Weg");
        break;
    }
    case 47292:
    {
        returnValue = F("Bad-Berneck-Str.");
        break;
    }
    case 47293:
    {
        returnValue = F("Bad-Bertricher-Str.");
        break;
    }
    case 47294:
    {
        returnValue = F("Bad-Boll-Str.");
        break;
    }
    case 47295:
    {
        returnValue = F("Bad-Deutsch-Altenburg-Weg");
        break;
    }
    case 47296:
    {
        returnValue = F("Bad-Dürkheimer-Str.");
        break;
    }
    case 47297:
    {
        returnValue = F("Bad-Einsiedler-Weg");
        break;
    }
    case 47298:
    {
        returnValue = F("Bad-Füssinger-Str.");
        break;
    }
    case 47299:
    {
        returnValue = F("Bad-Ischler-Str.");
        break;
    }
    case 47300:
    {
        returnValue = F("Bad-Kissingen-Str.");
        break;
    }
    case 47301:
    {
        returnValue = F("Bad-Kreuther-Str.");
        break;
    }
    case 47302:
    {
        returnValue = F("Bad-Kreuznach-Ring");
        break;
    }
    case 47303:
    {
        returnValue = F("Bad-Kreuznacher-Str.");
        break;
    }
    case 47304:
    {
        returnValue = F("Bad-Krozinger-Str.");
        break;
    }
    case 47305:
    {
        returnValue = F("Bad-Nauheimer-Weg");
        break;
    }
    case 47306:
    {
        returnValue = F("Bad-Park");
        break;
    }
    case 47307:
    {
        returnValue = F("Bad-Schachener-Str.");
        break;
    }
    case 47308:
    {
        returnValue = F("Bad-Soden-Str.");
        break;
    }
    case 47309:
    {
        returnValue = F("Bad-Stebener-Weg");
        break;
    }
    case 47310:
    {
        returnValue = F("Bad-Sulza-Ring");
        break;
    }
    case 47311:
    {
        returnValue = F("Bad-Sulza-Str.");
        break;
    }
    case 47312:
    {
        returnValue = F("Bad-Wiessee-Str.");
        break;
    }
    case 47313:
    {
        returnValue = F("Bad-Wörishofener-Str.");
        break;
    }
    case 47314:
    {
        returnValue = F("Badackerstr.");
        break;
    }
    case 47315:
    {
        returnValue = F("Badallee");
        break;
    }
    case 47316:
    {
        returnValue = F("Badanger");
        break;
    }
    case 47317:
    {
        returnValue = F("Badangerstr.");
        break;
    }
    case 47318:
    {
        returnValue = F("Badau");
        break;
    }
    case 47319:
    {
        returnValue = F("Badberg");
        break;
    }
    case 47320:
    {
        returnValue = F("Badberger Allee");
        break;
    }
    case 47321:
    {
        returnValue = F("Badberger Str.");
        break;
    }
    case 47322:
    {
        returnValue = F("Badbergstr.");
        break;
    }
    case 47323:
    {
        returnValue = F("Badbergsweg");
        break;
    }
    case 47324:
    {
        returnValue = F("Badborngasse");
        break;
    }
    case 47325:
    {
        returnValue = F("Badbrunnenstr.");
        break;
    }
    case 47326:
    {
        returnValue = F("Badbrunnenweg");
        break;
    }
    case 47327:
    {
        returnValue = F("Badbuckstr.");
        break;
    }
    case 47328:
    {
        returnValue = F("Baddels Hoff");
        break;
    }
    case 47329:
    {
        returnValue = F("Baddenberg");
        break;
    }
    case 47330:
    {
        returnValue = F("Baddenkamp");
        break;
    }
    case 47331:
    {
        returnValue = F("Baddinghagener Weg");
        break;
    }
    case 47332:
    {
        returnValue = F("Badeallee");
        break;
    }
    case 47333:
    {
        returnValue = F("Badeanger");
        break;
    }
    case 47334:
    {
        returnValue = F("Badeanstalt");
        break;
    }
    case 47335:
    {
        returnValue = F("Badeborner Allee");
        break;
    }
    case 47336:
    {
        returnValue = F("Badeborner Str.");
        break;
    }
    case 47337:
    {
        returnValue = F("Badeborner Weg");
        break;
    }
    case 47338:
    {
        returnValue = F("Badebornweg");
        break;
    }
    case 47339:
    {
        returnValue = F("Badegarten");
        break;
    }
    case 47340:
    {
        returnValue = F("Badegasse");
        break;
    }
    case 47341:
    {
        returnValue = F("Badegebiet Paradies");
        break;
    }
    case 47342:
    {
        returnValue = F("Badegäßchen");
        break;
    }
    case 47343:
    {
        returnValue = F("Badehausallee");
        break;
    }
    case 47344:
    {
        returnValue = F("Badekower Str.");
        break;
    }
    case 47345:
    {
        returnValue = F("Badekower Weg");
        break;
    }
    case 47346:
    {
        returnValue = F("Badel");
        break;
    }
    case 47347:
    {
        returnValue = F("Badel Nr.");
        break;
    }
    case 47348:
    {
        returnValue = F("Badelacher Weg");
        break;
    }
    case 47349:
    {
        returnValue = F("Badelebener Str.");
        break;
    }
    case 47350:
    {
        returnValue = F("Badeleber Str.");
        break;
    }
    case 47351:
    {
        returnValue = F("Badeler Dorfstr.");
        break;
    }
    case 47352:
    {
        returnValue = F("Badeler Str.");
        break;
    }
    case 47353:
    {
        returnValue = F("Bademer Str.");
        break;
    }
    case 47354:
    {
        returnValue = F("Bademeuseler Neißestr.");
        break;
    }
    case 47355:
    {
        returnValue = F("Bademeuseler Str.");
        break;
    }
    case 47356:
    {
        returnValue = F("Bademutterstr.");
        break;
    }
    case 47357:
    {
        returnValue = F("Baden-Badener Str.");
        break;
    }
    case 47358:
    {
        returnValue = F("Baden-Powell-Str.");
        break;
    }
    case 47359:
    {
        returnValue = F("Badenacker");
        break;
    }
    case 47360:
    {
        returnValue = F("Badenberg");
        break;
    }
    case 47361:
    {
        returnValue = F("Badenbergstr.");
        break;
    }
    case 47362:
    {
        returnValue = F("Badenburger Hohl");
        break;
    }
    case 47363:
    {
        returnValue = F("Badenburger Weg");
        break;
    }
    case 47364:
    {
        returnValue = F("Badenburgstr.");
        break;
    }
    case 47365:
    {
        returnValue = F("Badenbütteler Str.");
        break;
    }
    case 47366:
    {
        returnValue = F("Badendieker Weg");
        break;
    }
    case 47367:
    {
        returnValue = F("Badendonker Str.");
        break;
    }
    case 47368:
    {
        returnValue = F("Badener Brücke");
        break;
    }
    case 47369:
    {
        returnValue = F("Badener Busch Schleife");
        break;
    }
    case 47370:
    {
        returnValue = F("Badener Dorfstr.");
        break;
    }
    case 47371:
    {
        returnValue = F("Badener Finien");
        break;
    }
    case 47372:
    {
        returnValue = F("Badener Holz");
        break;
    }
    case 47373:
    {
        returnValue = F("Badener Platz");
        break;
    }
    case 47374:
    {
        returnValue = F("Badener Ring");
        break;
    }
    case 47375:
    {
        returnValue = F("Badener Str.");
        break;
    }
    case 47376:
    {
        returnValue = F("Badener Wald");
        break;
    }
    case 47377:
    {
        returnValue = F("Badener Weg");
        break;
    }
    case 47378:
    {
        returnValue = F("Badenerstr.");
        break;
    }
    case 47379:
    {
        returnValue = F("Badenerweg");
        break;
    }
    case 47380:
    {
        returnValue = F("Badengasse");
        break;
    }
    case 47381:
    {
        returnValue = F("Badenheimer Str.");
        break;
    }
    case 47382:
    {
        returnValue = F("Badenheimer Weg");
        break;
    }
    case 47383:
    {
        returnValue = F("Badenhopsweg");
        break;
    }
    case 47384:
    {
        returnValue = F("Badeniaplatz");
        break;
    }
    case 47385:
    {
        returnValue = F("Badeniastr.");
        break;
    }
    case 47386:
    {
        returnValue = F("Badenkamp");
        break;
    }
    case 47387:
    {
        returnValue = F("Badenkoog");
        break;
    }
    case 47388:
    {
        returnValue = F("Badenmühle");
        break;
    }
    case 47389:
    {
        returnValue = F("Badenplatz");
        break;
    }
    case 47390:
    {
        returnValue = F("Badenser Weg");
        break;
    }
    case 47391:
    {
        returnValue = F("Badenstedter Marktplatz");
        break;
    }
    case 47392:
    {
        returnValue = F("Badenstedter Str.");
        break;
    }
    case 47393:
    {
        returnValue = F("Badenstr.");
        break;
    }
    case 47394:
    {
        returnValue = F("Badenweg");
        break;
    }
    case 47395:
    {
        returnValue = F("Badenweilerstr.");
        break;
    }
    case 47396:
    {
        returnValue = F("Badenweilerweg");
        break;
    }
    case 47397:
    {
        returnValue = F("Badenwerkstr.");
        break;
    }
    case 47398:
    {
        returnValue = F("Badenwerkstr. am Festplatz");
        break;
    }
    case 47399:
    {
        returnValue = F("Badepark");
        break;
    }
    case 47400:
    {
        returnValue = F("Badeplan");
        break;
    }
    case 47401:
    {
        returnValue = F("Badeplatz");
        break;
    }
    case 47402:
    {
        returnValue = F("Badeplatz Fall");
        break;
    }
    case 47403:
    {
        returnValue = F("Badeplatz Pietzing");
        break;
    }
    case 47404:
    {
        returnValue = F("Badeplatz Stettner See");
        break;
    }
    case 47405:
    {
        returnValue = F("Baderangersweg");
        break;
    }
    case 47406:
    {
        returnValue = F("Baderbachweg");
        break;
    }
    case 47407:
    {
        returnValue = F("Baderberg");
        break;
    }
    case 47408:
    {
        returnValue = F("Baderbergweg");
        break;
    }
    case 47409:
    {
        returnValue = F("Baderbichel");
        break;
    }
    case 47410:
    {
        returnValue = F("Baderbichl");
        break;
    }
    case 47411:
    {
        returnValue = F("Baderbogen");
        break;
    }
    case 47412:
    {
        returnValue = F("Baderdamm");
        break;
    }
    case 47413:
    {
        returnValue = F("Baderei");
        break;
    }
    case 47414:
    {
        returnValue = F("Baderfeld");
        break;
    }
    case 47415:
    {
        returnValue = F("Baderfeldstr.");
        break;
    }
    case 47416:
    {
        returnValue = F("Baderfeldweg");
        break;
    }
    case 47417:
    {
        returnValue = F("Badergartenweg");
        break;
    }
    case 47418:
    {
        returnValue = F("Badergasse");
        break;
    }
    case 47419:
    {
        returnValue = F("Badergassl");
        break;
    }
    case 47420:
    {
        returnValue = F("Badergaß");
        break;
    }
    case 47421:
    {
        returnValue = F("Badergaßl");
        break;
    }
    case 47422:
    {
        returnValue = F("Badergraben");
        break;
    }
    case 47423:
    {
        returnValue = F("Badergäßchen");
        break;
    }
    case 47424:
    {
        returnValue = F("Badergäßle");
        break;
    }
    case 47425:
    {
        returnValue = F("Badergäßlein");
        break;
    }
    case 47426:
    {
        returnValue = F("Baderhag");
        break;
    }
    case 47427:
    {
        returnValue = F("Baderhohlweg");
        break;
    }
    case 47428:
    {
        returnValue = F("Baderinn");
        break;
    }
    case 47429:
    {
        returnValue = F("Baderlehenkopf");
        break;
    }
    case 47430:
    {
        returnValue = F("Baderlehenweg");
        break;
    }
    case 47431:
    {
        returnValue = F("Baderleite");
        break;
    }
    case 47432:
    {
        returnValue = F("Badermannweg");
        break;
    }
    case 47433:
    {
        returnValue = F("Badermelcherweg");
        break;
    }
    case 47434:
    {
        returnValue = F("Baderpforte");
        break;
    }
    case 47435:
    {
        returnValue = F("Baderplan");
        break;
    }
    case 47436:
    {
        returnValue = F("Baderplatz");
        break;
    }
    case 47437:
    {
        returnValue = F("Baderring");
        break;
    }
    case 47438:
    {
        returnValue = F("Baders Gärten");
        break;
    }
    case 47439:
    {
        returnValue = F("Badersbergstr.");
        break;
    }
    case 47440:
    {
        returnValue = F("Badersbuck");
        break;
    }
    case 47441:
    {
        returnValue = F("Badersdorf");
        break;
    }
    case 47442:
    {
        returnValue = F("Baderseestr.");
        break;
    }
    case 47443:
    {
        returnValue = F("Baderseeweg");
        break;
    }
    case 47444:
    {
        returnValue = F("Badersen");
        break;
    }
    case 47445:
    {
        returnValue = F("Badersfelder Str.");
        break;
    }
    case 47446:
    {
        returnValue = F("Badersgasse");
        break;
    }
    case 47447:
    {
        returnValue = F("Badersgraben");
        break;
    }
    case 47448:
    {
        returnValue = F("Badersgängle");
        break;
    }
    case 47449:
    {
        returnValue = F("Baderslebener Chaussee");
        break;
    }
    case 47450:
    {
        returnValue = F("Badersrain");
        break;
    }
    case 47451:
    {
        returnValue = F("Baderstor");
        break;
    }
    case 47452:
    {
        returnValue = F("Baderstr.");
        break;
    }
    case 47453:
    {
        returnValue = F("Badersäcker");
        break;
    }
    case 47454:
    {
        returnValue = F("Baderteichdamm");
        break;
    }
    case 47455:
    {
        returnValue = F("Badertor");
        break;
    }
    case 47456:
    {
        returnValue = F("Baderweg");
        break;
    }
    case 47457:
    {
        returnValue = F("Baderwiese");
        break;
    }
    case 47458:
    {
        returnValue = F("Bades Huk");
        break;
    }
    case 47459:
    {
        returnValue = F("Badesee");
        break;
    }
    case 47460:
    {
        returnValue = F("Badesee Fredenbeck");
        break;
    }
    case 47461:
    {
        returnValue = F("Badesee Mainflingen");
        break;
    }
    case 47462:
    {
        returnValue = F("Badeseestr.");
        break;
    }
    case 47463:
    {
        returnValue = F("Badeseeweg");
        break;
    }
    case 47464:
    {
        returnValue = F("Badesteig");
        break;
    }
    case 47465:
    {
        returnValue = F("Badestelle Dorfstr.");
        break;
    }
    case 47466:
    {
        returnValue = F("Badestelle Habyer Str.");
        break;
    }
    case 47467:
    {
        returnValue = F("Badestelle Wrohe");
        break;
    }
    case 47468:
    {
        returnValue = F("Badestock");
        break;
    }
    case 47469:
    {
        returnValue = F("Badestr.");
        break;
    }
    case 47470:
    {
        returnValue = F("Badestrand");
        break;
    }
    case 47471:
    {
        returnValue = F("Badestrand Niederschopfheim");
        break;
    }
    case 47472:
    {
        returnValue = F("Badestrand Ostufer Feldmochinger See");
        break;
    }
    case 47473:
    {
        returnValue = F("Badestube");
        break;
    }
    case 47474:
    {
        returnValue = F("Badestubengasse");
        break;
    }
    case 47475:
    {
        returnValue = F("Badeteichstr.");
        break;
    }
    case 47476:
    {
        returnValue = F("Badetwete");
        break;
    }
    case 47477:
    {
        returnValue = F("Badetzer Str.");
        break;
    }
    case 47478:
    {
        returnValue = F("Badewannenweg");
        break;
    }
    case 47479:
    {
        returnValue = F("Badeweg");
        break;
    }
    case 47480:
    {
        returnValue = F("Badeweiher Sonnen");
        break;
    }
    case 47481:
    {
        returnValue = F("Badeweiherweg");
        break;
    }
    case 47482:
    {
        returnValue = F("Badewiese");
        break;
    }
    case 47483:
    {
        returnValue = F("Badewinkel");
        break;
    }
    case 47484:
    {
        returnValue = F("Badewitzstr.");
        break;
    }
    case 47485:
    {
        returnValue = F("Badfeld");
        break;
    }
    case 47486:
    {
        returnValue = F("Badfeldring");
        break;
    }
    case 47487:
    {
        returnValue = F("Badfeldweg");
        break;
    }
    case 47488:
    {
        returnValue = F("Badgarten");
        break;
    }
    case 47489:
    {
        returnValue = F("Badgasse");
        break;
    }
    case 47490:
    {
        returnValue = F("Badgasteiner Str.");
        break;
    }
    case 47491:
    {
        returnValue = F("Badgasteiner Weg");
        break;
    }
    case 47492:
    {
        returnValue = F("Badgaßweg");
        break;
    }
    case 47493:
    {
        returnValue = F("Badgässchen");
        break;
    }
    case 47494:
    {
        returnValue = F("Badgässle");
        break;
    }
    case 47495:
    {
        returnValue = F("Badgäßchen");
        break;
    }
    case 47496:
    {
        returnValue = F("Badgäßl");
        break;
    }
    case 47497:
    {
        returnValue = F("Badhauser Weg");
        break;
    }
    case 47498:
    {
        returnValue = F("Badhausgasse");
        break;
    }
    case 47499:
    {
        returnValue = F("Badhausstr.");
        break;
    }
    case 47500:
    {
        returnValue = F("Badhausweg");
        break;
    }
    case 47501:
    {
        returnValue = F("Badholz-Siedlung");
        break;
    }
    case 47502:
    {
        returnValue = F("Badholzweg");
        break;
    }
    case 47503:
    {
        returnValue = F("Badhölzleweg");
        break;
    }
    case 47504:
    {
        returnValue = F("Badhöringer Str.");
        break;
    }
    case 47505:
    {
        returnValue = F("Badiek");
        break;
    }
    case 47506:
    {
        returnValue = F("Badinger Chaussee");
        break;
    }
    case 47507:
    {
        returnValue = F("Badinger Dorfstr.");
        break;
    }
    case 47508:
    {
        returnValue = F("Badinger Str.");
        break;
    }
    case 47509:
    {
        returnValue = F("Badinger Weg");
        break;
    }
    case 47510:
    {
        returnValue = F("Badinghagen");
        break;
    }
    case 47511:
    {
        returnValue = F("Badisch Morgenweg");
        break;
    }
    case 47512:
    {
        returnValue = F("Badische Landsiedlung");
        break;
    }
    case 47513:
    {
        returnValue = F("Badische Str.");
        break;
    }
    case 47514:
    {
        returnValue = F("Badischer Hof");
        break;
    }
    case 47515:
    {
        returnValue = F("Badköpfleweg");
        break;
    }
    case 47516:
    {
        returnValue = F("Badleite");
        break;
    }
    case 47517:
    {
        returnValue = F("Badleiten");
        break;
    }
    case 47518:
    {
        returnValue = F("Badmatte");
        break;
    }
    case 47519:
    {
        returnValue = F("Badmauer");
        break;
    }
    case 47520:
    {
        returnValue = F("Badnauweg");
        break;
    }
    case 47521:
    {
        returnValue = F("Badner Str.");
        break;
    }
    case 47522:
    {
        returnValue = F("Badner Weg");
        break;
    }
    case 47523:
    {
        returnValue = F("Badnerstr.");
        break;
    }
    case 47524:
    {
        returnValue = F("Badopark");
        break;
    }
    case 47525:
    {
        returnValue = F("Badorfer Str.");
        break;
    }
    case 47526:
    {
        returnValue = F("Badorfer Weg");
        break;
    }
    case 47527:
    {
        returnValue = F("Badower Str.");
        break;
    }
    case 47528:
    {
        returnValue = F("Badpfad");
        break;
    }
    case 47529:
    {
        returnValue = F("Badraer Hauptstr.");
        break;
    }
    case 47530:
    {
        returnValue = F("Badraer Str.");
        break;
    }
    case 47531:
    {
        returnValue = F("Badrainweg");
        break;
    }
    case 47532:
    {
        returnValue = F("Badresch");
        break;
    }
    case 47533:
    {
        returnValue = F("Badrinaer Str.");
        break;
    }
    case 47534:
    {
        returnValue = F("Badrinaer Weg");
        break;
    }
    case 47535:
    {
        returnValue = F("Badseestr.");
        break;
    }
    case 47536:
    {
        returnValue = F("Badseeweg");
        break;
    }
    case 47537:
    {
        returnValue = F("Badsiedlung");
        break;
    }
    case 47538:
    {
        returnValue = F("Badstauden");
        break;
    }
    case 47539:
    {
        returnValue = F("Badstaven");
        break;
    }
    case 47540:
    {
        returnValue = F("Badsteg");
        break;
    }
    case 47541:
    {
        returnValue = F("Badsteig");
        break;
    }
    case 47542:
    {
        returnValue = F("Badsteige");
        break;
    }
    case 47543:
    {
        returnValue = F("Badsteigweg");
        break;
    }
    case 47544:
    {
        returnValue = F("Badstr.");
        break;
    }
    case 47545:
    {
        returnValue = F("Badstube");
        break;
    }
    case 47546:
    {
        returnValue = F("Badstuben");
        break;
    }
    case 47547:
    {
        returnValue = F("Badstubengasse");
        break;
    }
    case 47548:
    {
        returnValue = F("Badstubengäßle");
        break;
    }
    case 47549:
    {
        returnValue = F("Badstubenrain");
        break;
    }
    case 47550:
    {
        returnValue = F("Badstubenstr.");
        break;
    }
    case 47551:
    {
        returnValue = F("Badstubenvorstadt");
        break;
    }
    case 47552:
    {
        returnValue = F("Badstubenweg");
        break;
    }
    case 47553:
    {
        returnValue = F("Badstubenwiese");
        break;
    }
    case 47554:
    {
        returnValue = F("Badstubenwiesenstr.");
        break;
    }
    case 47555:
    {
        returnValue = F("Badstubgasse");
        break;
    }
    case 47556:
    {
        returnValue = F("Badstubweg");
        break;
    }
    case 47557:
    {
        returnValue = F("Badstüberbruch");
        break;
    }
    case 47558:
    {
        returnValue = F("Badstüberstr.");
        break;
    }
    case 47559:
    {
        returnValue = F("Badthürl");
        break;
    }
    case 47560:
    {
        returnValue = F("Badtorstr.");
        break;
    }
    case 47561:
    {
        returnValue = F("Badumstr.");
        break;
    }
    case 47562:
    {
        returnValue = F("Baduradstr.");
        break;
    }
    case 47563:
    {
        returnValue = F("Badwaldhöhenweg");
        break;
    }
    case 47564:
    {
        returnValue = F("Badwaldweg");
        break;
    }
    case 47565:
    {
        returnValue = F("Badweg");
        break;
    }
    case 47566:
    {
        returnValue = F("Badweiherstr.");
        break;
    }
    case 47567:
    {
        returnValue = F("Badwiese");
        break;
    }
    case 47568:
    {
        returnValue = F("Badwiesen");
        break;
    }
    case 47569:
    {
        returnValue = F("Badwiesenstr.");
        break;
    }
    case 47570:
    {
        returnValue = F("Badwiesenweg");
        break;
    }
    case 47571:
    {
        returnValue = F("Badzaunstr.");
        break;
    }
    case 47572:
    {
        returnValue = F("Badäcker");
        break;
    }
    case 47573:
    {
        returnValue = F("Badäckerstr.");
        break;
    }
    case 47574:
    {
        returnValue = F("Baebenrothufer");
        break;
    }
    case 47575:
    {
        returnValue = F("Baechlstr.");
        break;
    }
    case 47576:
    {
        returnValue = F("Baedekerstr.");
        break;
    }
    case 47577:
    {
        returnValue = F("Baegertstr.");
        break;
    }
    case 47578:
    {
        returnValue = F("Baeker Ausbau");
        break;
    }
    case 47579:
    {
        returnValue = F("Baeker Bahnhof");
        break;
    }
    case 47580:
    {
        returnValue = F("Baeker Hauptstr.");
        break;
    }
    case 47581:
    {
        returnValue = F("Baeker Str.");
        break;
    }
    case 47582:
    {
        returnValue = F("Baekernweg");
        break;
    }
    case 47583:
    {
        returnValue = F("Baentschstr.");
        break;
    }
    case 47584:
    {
        returnValue = F("Baerenkamp");
        break;
    }
    case 47585:
    {
        returnValue = F("Baerlagweg");
        break;
    }
    case 47586:
    {
        returnValue = F("Baerler Str.");
        break;
    }
    case 47587:
    {
        returnValue = F("Baerlo");
        break;
    }
    case 47588:
    {
        returnValue = F("Baersberg");
        break;
    }
    case 47589:
    {
        returnValue = F("Baersdonk");
        break;
    }
    case 47590:
    {
        returnValue = F("Baersdonker Str.");
        break;
    }
    case 47591:
    {
        returnValue = F("Baerweg");
        break;
    }
    case 47592:
    {
        returnValue = F("Baesweilerstr.");
        break;
    }
    case 47593:
    {
        returnValue = F("Baesweilerweg");
        break;
    }
    case 47594:
    {
        returnValue = F("Baetsweg");
        break;
    }
    case 47595:
    {
        returnValue = F("Baeumerstr.");
        break;
    }
    case 47596:
    {
        returnValue = F("Baeyerhöhe");
        break;
    }
    case 47597:
    {
        returnValue = F("Baeyerstr.");
        break;
    }
    case 47598:
    {
        returnValue = F("Baeyerweg");
        break;
    }
    case 47599:
    {
        returnValue = F("Baffscherweg");
        break;
    }
    case 47600:
    {
        returnValue = F("Bagatelle");
        break;
    }
    case 47601:
    {
        returnValue = F("Bagbander Str.");
        break;
    }
    case 47602:
    {
        returnValue = F("Bagelstr.");
        break;
    }
    case 47603:
    {
        returnValue = F("Bagemühl Gartenstr.");
        break;
    }
    case 47604:
    {
        returnValue = F("Bagemühl Hauptstr.");
        break;
    }
    case 47605:
    {
        returnValue = F("Bagemühl Zum Sportplatz");
        break;
    }
    case 47606:
    {
        returnValue = F("Bagemühler Str.");
        break;
    }
    case 47607:
    {
        returnValue = F("Bagenzer Str.");
        break;
    }
    case 47608:
    {
        returnValue = F("Bagenzer Weg");
        break;
    }
    case 47609:
    {
        returnValue = F("Bageritzer Ring");
        break;
    }
    case 47610:
    {
        returnValue = F("Bageritzer Weg");
        break;
    }
    case 47611:
    {
        returnValue = F("Bagers Weg");
        break;
    }
    case 47612:
    {
        returnValue = F("Baggelan");
        break;
    }
    case 47613:
    {
        returnValue = F("Baggerberg");
        break;
    }
    case 47614:
    {
        returnValue = F("Baggerkuhle");
        break;
    }
    case 47615:
    {
        returnValue = F("Baggermeisterring");
        break;
    }
    case 47616:
    {
        returnValue = F("Baggerschlatt");
        break;
    }
    case 47617:
    {
        returnValue = F("Baggerseestr.");
        break;
    }
    case 47618:
    {
        returnValue = F("Baggerstr.");
        break;
    }
    case 47619:
    {
        returnValue = F("Baggertsweg");
        break;
    }
    case 47620:
    {
        returnValue = F("Baggerwald");
        break;
    }
    case 47621:
    {
        returnValue = F("Baggerweg");
        break;
    }
    case 47622:
    {
        returnValue = F("Bagnatosteig");
        break;
    }
    case 47623:
    {
        returnValue = F("Bagnatostr.");
        break;
    }
    case 47624:
    {
        returnValue = F("Bagneres de Bigorre Park");
        break;
    }
    case 47625:
    {
        returnValue = F("Bagno");
        break;
    }
    case 47626:
    {
        returnValue = F("Bagnoletstr.");
        break;
    }
    case 47627:
    {
        returnValue = F("Bagnolsstr.");
        break;
    }
    case 47628:
    {
        returnValue = F("Bagnostr.");
        break;
    }
    case 47629:
    {
        returnValue = F("Bagoder Weg");
        break;
    }
    case 47630:
    {
        returnValue = F("Bagower Dorfstr.");
        break;
    }
    case 47631:
    {
        returnValue = F("Baguettestr.");
        break;
    }
    case 47632:
    {
        returnValue = F("Bahamas Lane");
        break;
    }
    case 47633:
    {
        returnValue = F("Bahide-Arslan-Platz");
        break;
    }
    case 47634:
    {
        returnValue = F("Bahide-Arslan-Str.");
        break;
    }
    case 47635:
    {
        returnValue = F("Bahlas-Weg");
        break;
    }
    case 47636:
    {
        returnValue = F("Bahlburger Kreisel");
        break;
    }
    case 47637:
    {
        returnValue = F("Bahlburger Str.");
        break;
    }
    case 47638:
    {
        returnValue = F("Bahlen");
        break;
    }
    case 47639:
    {
        returnValue = F("Bahlener Chaussee");
        break;
    }
    case 47640:
    {
        returnValue = F("Bahlenhorststr.");
        break;
    }
    case 47641:
    {
        returnValue = F("Bahlenhüschener Str.");
        break;
    }
    case 47642:
    {
        returnValue = F("Bahlenstr.");
        break;
    }
    case 47643:
    {
        returnValue = F("Bahlenweg");
        break;
    }
    case 47644:
    {
        returnValue = F("Bahler Mark");
        break;
    }
    case 47645:
    {
        returnValue = F("Bahler Str.");
        break;
    }
    case 47646:
    {
        returnValue = F("Bahlhorngasse");
        break;
    }
    case 47647:
    {
        returnValue = F("Bahlihof");
        break;
    }
    case 47648:
    {
        returnValue = F("Bahlinger Str.");
        break;
    }
    case 47649:
    {
        returnValue = F("Bahlinger Weg");
        break;
    }
    case 47650:
    {
        returnValue = F("Bahlkamp");
        break;
    }
    case 47651:
    {
        returnValue = F("Bahlmannstr.");
        break;
    }
    case 47652:
    {
        returnValue = F("Bahlmannwiese");
        break;
    }
    case 47653:
    {
        returnValue = F("Bahlsenstr.");
        break;
    }
    case 47654:
    {
        returnValue = F("Bahlumer Weg");
        break;
    }
    case 47655:
    {
        returnValue = F("Bahlweg");
        break;
    }
    case 47656:
    {
        returnValue = F("Bahmersgasse");
        break;
    }
    case 47657:
    {
        returnValue = F("Bahn");
        break;
    }
    case 47658:
    {
        returnValue = F("Bahn 1");
        break;
    }
    case 47659:
    {
        returnValue = F("Bahn 10");
        break;
    }
    case 47660:
    {
        returnValue = F("Bahn 11");
        break;
    }
    case 47661:
    {
        returnValue = F("Bahn 12");
        break;
    }
    case 47662:
    {
        returnValue = F("Bahn 13");
        break;
    }
    case 47663:
    {
        returnValue = F("Bahn 14");
        break;
    }
    case 47664:
    {
        returnValue = F("Bahn 15");
        break;
    }
    case 47665:
    {
        returnValue = F("Bahn 16");
        break;
    }
    case 47666:
    {
        returnValue = F("Bahn 17");
        break;
    }
    case 47667:
    {
        returnValue = F("Bahn 18");
        break;
    }
    case 47668:
    {
        returnValue = F("Bahn 2");
        break;
    }
    case 47669:
    {
        returnValue = F("Bahn 3");
        break;
    }
    case 47670:
    {
        returnValue = F("Bahn 4");
        break;
    }
    case 47671:
    {
        returnValue = F("Bahn 5");
        break;
    }
    case 47672:
    {
        returnValue = F("Bahn 6");
        break;
    }
    case 47673:
    {
        returnValue = F("Bahn 7");
        break;
    }
    case 47674:
    {
        returnValue = F("Bahn 8");
        break;
    }
    case 47675:
    {
        returnValue = F("Bahn 9");
        break;
    }
    case 47676:
    {
        returnValue = F("Bahn-Weg");
        break;
    }
    case 47677:
    {
        returnValue = F("Bahn-Überführung Tornesch");
        break;
    }
    case 47678:
    {
        returnValue = F("Bahnacker");
        break;
    }
    case 47679:
    {
        returnValue = F("Bahnallee");
        break;
    }
    case 47680:
    {
        returnValue = F("Bahnanlage");
        break;
    }
    case 47681:
    {
        returnValue = F("Bahnberg");
        break;
    }
    case 47682:
    {
        returnValue = F("Bahnbergstr.");
        break;
    }
    case 47683:
    {
        returnValue = F("Bahnbettweg");
        break;
    }
    case 47684:
    {
        returnValue = F("Bahnbrücke");
        break;
    }
    case 47685:
    {
        returnValue = F("Bahnbrückener Str.");
        break;
    }
    case 47686:
    {
        returnValue = F("Bahnbrücker Str.");
        break;
    }
    case 47687:
    {
        returnValue = F("Bahnchaussee");
        break;
    }
    case 47688:
    {
        returnValue = F("Bahndamm");
        break;
    }
    case 47689:
    {
        returnValue = F("Bahndammstr.");
        break;
    }
    case 47690:
    {
        returnValue = F("Bahndammweg");
        break;
    }
    case 47691:
    {
        returnValue = F("Bahndobben");
        break;
    }
    case 47692:
    {
        returnValue = F("Bahndurchlass Kies");
        break;
    }
    case 47693:
    {
        returnValue = F("Bahndyck");
        break;
    }
    case 47694:
    {
        returnValue = F("Bahnebredde");
        break;
    }
    case 47695:
    {
        returnValue = F("Bahneck");
        break;
    }
    case 47696:
    {
        returnValue = F("Bahnecke");
        break;
    }
    case 47697:
    {
        returnValue = F("Bahnengasse");
        break;
    }
    case 47698:
    {
        returnValue = F("Bahnenstr.");
        break;
    }
    case 47699:
    {
        returnValue = F("Bahnepädche");
        break;
    }
    case 47700:
    {
        returnValue = F("Bahner");
        break;
    }
    case 47701:
    {
        returnValue = F("Bahner Str.");
        break;
    }
    case 47702:
    {
        returnValue = F("Bahner Weg");
        break;
    }
    case 47703:
    {
        returnValue = F("Bahnerstieg");
        break;
    }
    case 47704:
    {
        returnValue = F("Bahnesweg");
        break;
    }
    case 47705:
    {
        returnValue = F("Bahnfeldgaß");
        break;
    }
    case 47706:
    {
        returnValue = F("Bahnfeldstr.");
        break;
    }
    case 47707:
    {
        returnValue = F("Bahnfurt");
        break;
    }
    case 47708:
    {
        returnValue = F("Bahngasse");
        break;
    }
    case 47709:
    {
        returnValue = F("Bahngelände");
        break;
    }
    case 47710:
    {
        returnValue = F("Bahngraben");
        break;
    }
    case 47711:
    {
        returnValue = F("Bahngärtle");
        break;
    }
    case 47712:
    {
        returnValue = F("Bahngässchen");
        break;
    }
    case 47713:
    {
        returnValue = F("Bahngäßchen");
        break;
    }
    case 47714:
    {
        returnValue = F("Bahnhalde");
        break;
    }
    case 47715:
    {
        returnValue = F("Bahnhaldenweg");
        break;
    }
    case 47716:
    {
        returnValue = F("Bahnhangstr.");
        break;
    }
    case 47717:
    {
        returnValue = F("Bahnhaus");
        break;
    }
    case 47718:
    {
        returnValue = F("Bahnhaus 115");
        break;
    }
    case 47719:
    {
        returnValue = F("Bahnhaus Camberg");
        break;
    }
    case 47720:
    {
        returnValue = F("Bahnheim");
        break;
    }
    case 47721:
    {
        returnValue = F("Bahnhof");
        break;
    }
    case 47722:
    {
        returnValue = F("Bahnhof Ahrdorf");
        break;
    }
    case 47723:
    {
        returnValue = F("Bahnhof Bad Schandau");
        break;
    }
    case 47724:
    {
        returnValue = F("Bahnhof Bodendorf");
        break;
    }
    case 47725:
    {
        returnValue = F("Bahnhof Buchholz");
        break;
    }
    case 47726:
    {
        returnValue = F("Bahnhof Bufleben");
        break;
    }
    case 47727:
    {
        returnValue = F("Bahnhof Calbe Ost");
        break;
    }
    case 47728:
    {
        returnValue = F("Bahnhof Carolinensiel");
        break;
    }
    case 47729:
    {
        returnValue = F("Bahnhof Egestorf");
        break;
    }
    case 47730:
    {
        returnValue = F("Bahnhof Eintracht");
        break;
    }
    case 47731:
    {
        returnValue = F("Bahnhof Emleben");
        break;
    }
    case 47732:
    {
        returnValue = F("Bahnhof Feuerbach");
        break;
    }
    case 47733:
    {
        returnValue = F("Bahnhof Förtha");
        break;
    }
    case 47734:
    {
        returnValue = F("Bahnhof Geltendorf");
        break;
    }
    case 47735:
    {
        returnValue = F("Bahnhof Görbitz");
        break;
    }
    case 47736:
    {
        returnValue = F("Bahnhof Haynsburg");
        break;
    }
    case 47737:
    {
        returnValue = F("Bahnhof Hochdorf");
        break;
    }
    case 47738:
    {
        returnValue = F("Bahnhof Irrenlohe");
        break;
    }
    case 47739:
    {
        returnValue = F("Bahnhof Jagstfeld");
        break;
    }
    case 47740:
    {
        returnValue = F("Bahnhof Kastorf");
        break;
    }
    case 47741:
    {
        returnValue = F("Bahnhof Kläden");
        break;
    }
    case 47742:
    {
        returnValue = F("Bahnhof Kottenforst");
        break;
    }
    case 47743:
    {
        returnValue = F("Bahnhof Köditzberg");
        break;
    }
    case 47744:
    {
        returnValue = F("Bahnhof Lelkendorf");
        break;
    }
    case 47745:
    {
        returnValue = F("Bahnhof Mitte");
        break;
    }
    case 47746:
    {
        returnValue = F("Bahnhof Nord");
        break;
    }
    case 47747:
    {
        returnValue = F("Bahnhof Obertürkheim");
        break;
    }
    case 47748:
    {
        returnValue = F("Bahnhof Peterslahr");
        break;
    }
    case 47749:
    {
        returnValue = F("Bahnhof Ratzenried");
        break;
    }
    case 47750:
    {
        returnValue = F("Bahnhof Saalburg");
        break;
    }
    case 47751:
    {
        returnValue = F("Bahnhof Schaibing");
        break;
    }
    case 47752:
    {
        returnValue = F("Bahnhof Schwäbisch Hall");
        break;
    }
    case 47753:
    {
        returnValue = F("Bahnhof Süd");
        break;
    }
    case 47754:
    {
        returnValue = F("Bahnhof Tannenheim");
        break;
    }
    case 47755:
    {
        returnValue = F("Bahnhof Vaihingen");
        break;
    }
    case 47756:
    {
        returnValue = F("Bahnhof Wallwitzhafen");
        break;
    }
    case 47757:
    {
        returnValue = F("Bahnhof Werbellinsee");
        break;
    }
    case 47758:
    {
        returnValue = F("Bahnhof Zollern");
        break;
    }
    case 47759:
    {
        returnValue = F("Bahnhof Ürzig");
        break;
    }
    case 47760:
    {
        returnValue = F("Bahnhof-Apotheke");
        break;
    }
    case 47761:
    {
        returnValue = F("Bahnhof-Einöde");
        break;
    }
    case 47762:
    {
        returnValue = F("Bahnhof-Siedlungsweg");
        break;
    }
    case 47763:
    {
        returnValue = F("Bahnhof-West");
        break;
    }
    case 47764:
    {
        returnValue = F("Bahnhofallee");
        break;
    }
    case 47765:
    {
        returnValue = F("Bahnhofanlage");
        break;
    }
    case 47766:
    {
        returnValue = F("Bahnhofberg");
        break;
    }
    case 47767:
    {
        returnValue = F("Bahnhofbrücke");
        break;
    }
    case 47768:
    {
        returnValue = F("Bahnhofchaussee");
        break;
    }
    case 47769:
    {
        returnValue = F("Bahnhoffußweg");
        break;
    }
    case 47770:
    {
        returnValue = F("Bahnhofgasse");
        break;
    }
    case 47771:
    {
        returnValue = F("Bahnhofgäßle");
        break;
    }
    case 47772:
    {
        returnValue = F("Bahnhofkreisel");
        break;
    }
    case 47773:
    {
        returnValue = F("Bahnhofparkplatz");
        break;
    }
    case 47774:
    {
        returnValue = F("Bahnhofplatz");
        break;
    }
    case 47775:
    {
        returnValue = F("Bahnhofring");
        break;
    }
    case 47776:
    {
        returnValue = F("Bahnhofsallee");
        break;
    }
    case 47777:
    {
        returnValue = F("Bahnhofsanlage");
        break;
    }
    case 47778:
    {
        returnValue = F("Bahnhofsbaracke");
        break;
    }
    case 47779:
    {
        returnValue = F("Bahnhofsberg");
        break;
    }
    case 47780:
    {
        returnValue = F("Bahnhofsbrink");
        break;
    }
    case 47781:
    {
        returnValue = F("Bahnhofsbrücke");
        break;
    }
    case 47782:
    {
        returnValue = F("Bahnhofsbrühl");
        break;
    }
    case 47783:
    {
        returnValue = F("Bahnhofsdamm");
        break;
    }
    case 47784:
    {
        returnValue = F("Bahnhofsdenkmalpark");
        break;
    }
    case 47785:
    {
        returnValue = F("Bahnhofsfußweg");
        break;
    }
    case 47786:
    {
        returnValue = F("Bahnhofsgang");
        break;
    }
    case 47787:
    {
        returnValue = F("Bahnhofsgasse");
        break;
    }
    case 47788:
    {
        returnValue = F("Bahnhofsgaste");
        break;
    }
    case 47789:
    {
        returnValue = F("Bahnhofsgäßchen");
        break;
    }
    case 47790:
    {
        returnValue = F("Bahnhofsiedlung");
        break;
    }
    case 47791:
    {
        returnValue = F("Bahnhofsiedlung/Gartenweg");
        break;
    }
    case 47792:
    {
        returnValue = F("Bahnhofspark");
        break;
    }
    case 47793:
    {
        returnValue = F("Bahnhofspassage");
        break;
    }
    case 47794:
    {
        returnValue = F("Bahnhofspfad");
        break;
    }
    case 47795:
    {
        returnValue = F("Bahnhofsplatz");
        break;
    }
    case 47796:
    {
        returnValue = F("Bahnhofspromenade");
        break;
    }
    case 47797:
    {
        returnValue = F("Bahnhofsring");
        break;
    }
    case 47798:
    {
        returnValue = F("Bahnhofsringstr.");
        break;
    }
    case 47799:
    {
        returnValue = F("Bahnhofssiedlung");
        break;
    }
    case 47800:
    {
        returnValue = F("Bahnhofsstr.");
        break;
    }
    case 47801:
    {
        returnValue = F("Bahnhofsteig");
        break;
    }
    case 47802:
    {
        returnValue = F("Bahnhofstr.");
        break;
    }
    case 47803:
    {
        returnValue = F("Bahnhofstr. ");
        break;
    }
    case 47804:
    {
        returnValue = F("Bahnhofstr. (Buchenhorst)");
        break;
    }
    case 47805:
    {
        returnValue = F("Bahnhofstr. Badel");
        break;
    }
    case 47806:
    {
        returnValue = F("Bahnhofstr. Gernrode");
        break;
    }
    case 47807:
    {
        returnValue = F("Bahnhofstr. Torsballig");
        break;
    }
    case 47808:
    {
        returnValue = F("Bahnhofsträßle");
        break;
    }
    case 47809:
    {
        returnValue = F("Bahnhofstunnel");
        break;
    }
    case 47810:
    {
        returnValue = F("Bahnhofstwiete");
        break;
    }
    case 47811:
    {
        returnValue = F("Bahnhofsunterführung");
        break;
    }
    case 47812:
    {
        returnValue = F("Bahnhofsvorplatz");
        break;
    }
    case 47813:
    {
        returnValue = F("Bahnhofsvorplatz Lindau-Reutin");
        break;
    }
    case 47814:
    {
        returnValue = F("Bahnhofswald");
        break;
    }
    case 47815:
    {
        returnValue = F("Bahnhofswall");
        break;
    }
    case 47816:
    {
        returnValue = F("Bahnhofsweg");
        break;
    }
    case 47817:
    {
        returnValue = F("Bahnhofsweg Beveringen");
        break;
    }
    case 47818:
    {
        returnValue = F("Bahnhofsweg Falkenhagen");
        break;
    }
    case 47819:
    {
        returnValue = F("Bahnhofswege");
        break;
    }
    case 47820:
    {
        returnValue = F("Bahnhofswegle");
        break;
    }
    case 47821:
    {
        returnValue = F("Bahnhofswinkel");
        break;
    }
    case 47822:
    {
        returnValue = F("Bahnhofszufuhrweg");
        break;
    }
    case 47823:
    {
        returnValue = F("Bahnhofweg");
        break;
    }
    case 47824:
    {
        returnValue = F("Bahnholz");
        break;
    }
    case 47825:
    {
        returnValue = F("Bahnholzstr.");
        break;
    }
    case 47826:
    {
        returnValue = F("Bahnholzweg");
        break;
    }
    case 47827:
    {
        returnValue = F("Bahnhäuser");
        break;
    }
    case 47828:
    {
        returnValue = F("Bahnhäuserweg");
        break;
    }
    case 47829:
    {
        returnValue = F("Bahnhäuslweg");
        break;
    }
    case 47830:
    {
        returnValue = F("Bahnhöfle");
        break;
    }
    case 47831:
    {
        returnValue = F("Bahnikstr.");
        break;
    }
    case 47832:
    {
        returnValue = F("Bahnkuhle");
        break;
    }
    case 47833:
    {
        returnValue = F("Bahnleite");
        break;
    }
    case 47834:
    {
        returnValue = F("Bahnlinie");
        break;
    }
    case 47835:
    {
        returnValue = F("Bahnmeistersteig (Heuweg)");
        break;
    }
    case 47836:
    {
        returnValue = F("Bahnparallele Trasse");
        break;
    }
    case 47837:
    {
        returnValue = F("Bahnparallelweg");
        break;
    }
    case 47838:
    {
        returnValue = F("Bahnpfad");
        break;
    }
    case 47839:
    {
        returnValue = F("Bahnpfädchen");
        break;
    }
    case 47840:
    {
        returnValue = F("Bahnposten");
        break;
    }
    case 47841:
    {
        returnValue = F("Bahnpromenade");
        break;
    }
    case 47842:
    {
        returnValue = F("Bahnrain");
        break;
    }
    case 47843:
    {
        returnValue = F("Bahnrandweg");
        break;
    }
    case 47844:
    {
        returnValue = F("Bahnriehe");
        break;
    }
    case 47845:
    {
        returnValue = F("Bahnrundweg");
        break;
    }
    case 47846:
    {
        returnValue = F("Bahnsdorfer Dorfstr.");
        break;
    }
    case 47847:
    {
        returnValue = F("Bahnsdorfer Weg");
        break;
    }
    case 47848:
    {
        returnValue = F("Bahnseitenweg");
        break;
    }
    case 47849:
    {
        returnValue = F("Bahnsenallee");
        break;
    }
    case 47850:
    {
        returnValue = F("Bahnsenstr.");
        break;
    }
    case 47851:
    {
        returnValue = F("Bahnser Str.");
        break;
    }
    case 47852:
    {
        returnValue = F("Bahnser Weg");
        break;
    }
    case 47853:
    {
        returnValue = F("Bahnsgasse");
        break;
    }
    case 47854:
    {
        returnValue = F("Bahnsiedlung");
        break;
    }
    case 47855:
    {
        returnValue = F("Bahnstadt Promenade");
        break;
    }
    case 47856:
    {
        returnValue = F("Bahnstadtchaussee");
        break;
    }
    case 47857:
    {
        returnValue = F("Bahnstaffeln");
        break;
    }
    case 47858:
    {
        returnValue = F("Bahnsteg");
        break;
    }
    case 47859:
    {
        returnValue = F("Bahnsteig");
        break;
    }
    case 47860:
    {
        returnValue = F("Bahnsteig 1");
        break;
    }
    case 47861:
    {
        returnValue = F("Bahnsteigzugang Hockenheim");
        break;
    }
    case 47862:
    {
        returnValue = F("Bahnstr.");
        break;
    }
    case 47863:
    {
        returnValue = F("Bahnstrecke Ballstädt-Straussfurt");
        break;
    }
    case 47864:
    {
        returnValue = F("Bahnstrecke Bodenheim–Alzey");
        break;
    }
    case 47865:
    {
        returnValue = F("Bahnstrecke Erbach–Fehl-Ritzhausen");
        break;
    }
    case 47866:
    {
        returnValue = F("Bahnstrecke Legau-Memmingen");
        break;
    }
    case 47867:
    {
        returnValue = F("Bahnstrecke Memmingen–Legau");
        break;
    }
    case 47868:
    {
        returnValue = F("Bahnstrecke Neubrücke–Birkenfeld");
        break;
    }
    case 47869:
    {
        returnValue = F("Bahnstrecke Simmern–Gemünden");
        break;
    }
    case 47870:
    {
        returnValue = F("Bahnstrift");
        break;
    }
    case 47871:
    {
        returnValue = F("Bahntechnikerring");
        break;
    }
    case 47872:
    {
        returnValue = F("Bahntrasse");
        break;
    }
    case 47873:
    {
        returnValue = F("Bahntrassenradweg Sülztalbahn");
        break;
    }
    case 47874:
    {
        returnValue = F("Bahnufer");
        break;
    }
    case 47875:
    {
        returnValue = F("Bahnunterführung");
        break;
    }
    case 47876:
    {
        returnValue = F("Bahnunterführung Langelsheim");
        break;
    }
    case 47877:
    {
        returnValue = F("Bahnwaldstr.");
        break;
    }
    case 47878:
    {
        returnValue = F("Bahnwartshaus");
        break;
    }
    case 47879:
    {
        returnValue = F("Bahnwasenstr.");
        break;
    }
    case 47880:
    {
        returnValue = F("Bahnweg");
        break;
    }
    case 47881:
    {
        returnValue = F("Bahnweg / Hakenweg");
        break;
    }
    case 47882:
    {
        returnValue = F("Bahnwegfeld");
        break;
    }
    case 47883:
    {
        returnValue = F("Bahnweiheranlage");
        break;
    }
    case 47884:
    {
        returnValue = F("Bahnwiesenstr.");
        break;
    }
    case 47885:
    {
        returnValue = F("Bahnwiesenweg");
        break;
    }
    case 47886:
    {
        returnValue = F("Bahnwinkel");
        break;
    }
    case 47887:
    {
        returnValue = F("Bahnwärterhaus");
        break;
    }
    case 47888:
    {
        returnValue = F("Bahnwärterhäuser");
        break;
    }
    case 47889:
    {
        returnValue = F("Bahnwärterweg");
        break;
    }
    case 47890:
    {
        returnValue = F("Bahnzaunweg");
        break;
    }
    case 47891:
    {
        returnValue = F("Bahnzeile");
        break;
    }
    case 47892:
    {
        returnValue = F("Bahnäckerallee");
        break;
    }
    case 47893:
    {
        returnValue = F("Bahnübergang");
        break;
    }
    case 47894:
    {
        returnValue = F("Bahofweg");
        break;
    }
    case 47895:
    {
        returnValue = F("Bahraer Str.");
        break;
    }
    case 47896:
    {
        returnValue = F("Bahrastr.");
        break;
    }
    case 47897:
    {
        returnValue = F("Bahraweg");
        break;
    }
    case 47898:
    {
        returnValue = F("Bahrdorfer Str.");
        break;
    }
    case 47899:
    {
        returnValue = F("Bahren");
        break;
    }
    case 47900:
    {
        returnValue = F("Bahrenbergring");
        break;
    }
    case 47901:
    {
        returnValue = F("Bahrenbergstr.");
        break;
    }
    case 47902:
    {
        returnValue = F("Bahrenborsteler Str.");
        break;
    }
    case 47903:
    {
        returnValue = F("Bahrenbrook");
        break;
    }
    case 47904:
    {
        returnValue = F("Bahrenbrooker Weg");
        break;
    }
    case 47905:
    {
        returnValue = F("Bahrendorfer Str.");
        break;
    }
    case 47906:
    {
        returnValue = F("Bahrendorfer Weg");
        break;
    }
    case 47907:
    {
        returnValue = F("Bahrener Ring");
        break;
    }
    case 47908:
    {
        returnValue = F("Bahrener Str.");
        break;
    }
    case 47909:
    {
        returnValue = F("Bahrener Weg");
        break;
    }
    case 47910:
    {
        returnValue = F("Bahrenfelder Stieg");
        break;
    }
    case 47911:
    {
        returnValue = F("Bahrenflether Moor");
        break;
    }
    case 47912:
    {
        returnValue = F("Bahrenhofer Str.");
        break;
    }
    case 47913:
    {
        returnValue = F("Bahrensdorfer Berg");
        break;
    }
    case 47914:
    {
        returnValue = F("Bahrensdorfer Str.");
        break;
    }
    case 47915:
    {
        returnValue = F("Bahrenweg");
        break;
    }
    case 47916:
    {
        returnValue = F("Bahrenwinkler Weg");
        break;
    }
    case 47917:
    {
        returnValue = F("Bahretalbrücke");
        break;
    }
    case 47918:
    {
        returnValue = F("Bahretalstr.");
        break;
    }
    case 47919:
    {
        returnValue = F("Bahrfeldtstr.");
        break;
    }
    case 47920:
    {
        returnValue = F("Bahrhaus");
        break;
    }
    case 47921:
    {
        returnValue = F("Bahrsplate");
        break;
    }
    case 47922:
    {
        returnValue = F("Bahrstr.");
        break;
    }
    case 47923:
    {
        returnValue = F("Bahrweg");
        break;
    }
    case 47924:
    {
        returnValue = F("Bahwiese");
        break;
    }
    case 47925:
    {
        returnValue = F("Baidergasse");
        break;
    }
    case 47926:
    {
        returnValue = F("Baienbacher Str.");
        break;
    }
    case 47927:
    {
        returnValue = F("Baienbergweg");
        break;
    }
    case 47928:
    {
        returnValue = F("Baienfurter Str.");
        break;
    }
    case 47929:
    {
        returnValue = F("Baienfurter Weg");
        break;
    }
    case 47930:
    {
        returnValue = F("Baienstr.");
        break;
    }
    case 47931:
    {
        returnValue = F("Baier's Holzmattenweg");
        break;
    }
    case 47932:
    {
        returnValue = F("Baierbach");
        break;
    }
    case 47933:
    {
        returnValue = F("Baierbacher Str.");
        break;
    }
    case 47934:
    {
        returnValue = F("Baierbacher Weg");
        break;
    }
    case 47935:
    {
        returnValue = F("Baierbacherweg");
        break;
    }
    case 47936:
    {
        returnValue = F("Baierberg");
        break;
    }
    case 47937:
    {
        returnValue = F("Baierberger Str.");
        break;
    }
    case 47938:
    {
        returnValue = F("Baierbrunner Str.");
        break;
    }
    case 47939:
    {
        returnValue = F("Baierecker Str.");
        break;
    }
    case 47940:
    {
        returnValue = F("Baierfelder Str.");
        break;
    }
    case 47941:
    {
        returnValue = F("Baiergarten");
        break;
    }
    case 47942:
    {
        returnValue = F("Baiergasse");
        break;
    }
    case 47943:
    {
        returnValue = F("Baiergrüner Weg");
        break;
    }
    case 47944:
    {
        returnValue = F("Baierhauweg");
        break;
    }
    case 47945:
    {
        returnValue = F("Baierhofweg");
        break;
    }
    case 47946:
    {
        returnValue = F("Baierhüttenweg");
        break;
    }
    case 47947:
    {
        returnValue = F("Baierlacherstr.");
        break;
    }
    case 47948:
    {
        returnValue = F("Baierle");
        break;
    }
    case 47949:
    {
        returnValue = F("Baiermühlenweg");
        break;
    }
    case 47950:
    {
        returnValue = F("Baiern");
        break;
    }
    case 47951:
    {
        returnValue = F("Baierner Str.");
        break;
    }
    case 47952:
    {
        returnValue = F("Baierner Weg");
        break;
    }
    case 47953:
    {
        returnValue = F("Baiernrainer Weg");
        break;
    }
    case 47954:
    {
        returnValue = F("Baiernweg");
        break;
    }
    case 47955:
    {
        returnValue = F("Baierort");
        break;
    }
    case 47956:
    {
        returnValue = F("Baierplatz");
        break;
    }
    case 47957:
    {
        returnValue = F("Baiersbachweg");
        break;
    }
    case 47958:
    {
        returnValue = F("Baiersbachwiesenweg");
        break;
    }
    case 47959:
    {
        returnValue = F("Baiersberg");
        break;
    }
    case 47960:
    {
        returnValue = F("Baiersbronner Str.");
        break;
    }
    case 47961:
    {
        returnValue = F("Baiersbronner Sträßle");
        break;
    }
    case 47962:
    {
        returnValue = F("Baiersbronner Winkel");
        break;
    }
    case 47963:
    {
        returnValue = F("Baiersdorf");
        break;
    }
    case 47964:
    {
        returnValue = F("Baiersdorfer Str.");
        break;
    }
    case 47965:
    {
        returnValue = F("Baiersgründlein");
        break;
    }
    case 47966:
    {
        returnValue = F("Baiershaldeweg");
        break;
    }
    case 47967:
    {
        returnValue = F("Baiershofener Str.");
        break;
    }
    case 47968:
    {
        returnValue = F("Baiershofer Str.");
        break;
    }
    case 47969:
    {
        returnValue = F("Baierstengasse");
        break;
    }
    case 47970:
    {
        returnValue = F("Baierstr.");
        break;
    }
    case 47971:
    {
        returnValue = F("Baiersweg");
        break;
    }
    case 47972:
    {
        returnValue = F("Baiertaler Str.");
        break;
    }
    case 47973:
    {
        returnValue = F("Baiertaler Weg");
        break;
    }
    case 47974:
    {
        returnValue = F("Baiertorstr.");
        break;
    }
    case 47975:
    {
        returnValue = F("Baierweg");
        break;
    }
    case 47976:
    {
        returnValue = F("Baierweinweg");
        break;
    }
    case 47977:
    {
        returnValue = F("Baikonurweg");
        break;
    }
    case 47978:
    {
        returnValue = F("Bailers");
        break;
    }
    case 47979:
    {
        returnValue = F("Baille-Maille-Allee");
        break;
    }
    case 47980:
    {
        returnValue = F("Bailleuler Str.");
        break;
    }
    case 47981:
    {
        returnValue = F("Bailleuxweg");
        break;
    }
    case 47982:
    {
        returnValue = F("Bailweg");
        break;
    }
    case 47983:
    {
        returnValue = F("Baimbacher Weg");
        break;
    }
    case 47984:
    {
        returnValue = F("Baimhofener Str.");
        break;
    }
    case 47985:
    {
        returnValue = F("Bain-de-Bretagne-Ring");
        break;
    }
    case 47986:
    {
        returnValue = F("Baind");
        break;
    }
    case 47987:
    {
        returnValue = F("Baindlkircher Str.");
        break;
    }
    case 47988:
    {
        returnValue = F("Baindlkirchner Str.");
        break;
    }
    case 47989:
    {
        returnValue = F("Baindstr.");
        break;
    }
    case 47990:
    {
        returnValue = F("Baindt");
        break;
    }
    case 47991:
    {
        returnValue = F("Baindter Str.");
        break;
    }
    case 47992:
    {
        returnValue = F("Baindtstr.");
        break;
    }
    case 47993:
    {
        returnValue = F("Baindtweg");
        break;
    }
    case 47994:
    {
        returnValue = F("Baindweg");
        break;
    }
    case 47995:
    {
        returnValue = F("Bainingstr.");
        break;
    }
    case 47996:
    {
        returnValue = F("Baintstr.");
        break;
    }
    case 47997:
    {
        returnValue = F("Bainweg");
        break;
    }
    case 47998:
    {
        returnValue = F("Bairawieser Str.");
        break;
    }
    case 47999:
    {
        returnValue = F("Bairawieser Weg");
        break;
    }
    case 48000:
    {
        returnValue = F("Bairodaer Str.");
        break;
    }
    case 48001:
    {
        returnValue = F("Baischenstr.");
        break;
    }
    case 48002:
    {
        returnValue = F("Baischstr.");
        break;
    }
    case 48003:
    {
        returnValue = F("Baiselsbergstr.");
        break;
    }
    case 48004:
    {
        returnValue = F("Baisieper Str.");
        break;
    }
    case 48005:
    {
        returnValue = F("Baisinger Steig");
        break;
    }
    case 48006:
    {
        returnValue = F("Baisinger Str.");
        break;
    }
    case 48007:
    {
        returnValue = F("Baislingstr.");
        break;
    }
    case 48008:
    {
        returnValue = F("Baisweiler Str.");
        break;
    }
    case 48009:
    {
        returnValue = F("Baitenhauser Str.");
        break;
    }
    case 48010:
    {
        returnValue = F("Baitgersweg");
        break;
    }
    case 48011:
    {
        returnValue = F("Baitzer Str.");
        break;
    }
    case 48012:
    {
        returnValue = F("Baiuwarenstr.");
        break;
    }
    case 48013:
    {
        returnValue = F("Bajakel");
        break;
    }
    case 48014:
    {
        returnValue = F("Bajastr.");
        break;
    }
    case 48015:
    {
        returnValue = F("Bajuwarenhof");
        break;
    }
    case 48016:
    {
        returnValue = F("Bajuwarenring");
        break;
    }
    case 48017:
    {
        returnValue = F("Bajuwarenstr.");
        break;
    }
    case 48018:
    {
        returnValue = F("Bajuwarenweg");
        break;
    }
    case 48019:
    {
        returnValue = F("Bakeder Str.");
        break;
    }
    case 48020:
    {
        returnValue = F("Bakelberg");
        break;
    }
    case 48021:
    {
        returnValue = F("Bakelder Kamp");
        break;
    }
    case 48022:
    {
        returnValue = F("Bakeler Weg");
        break;
    }
    case 48023:
    {
        returnValue = F("Bakelheide");
        break;
    }
    case 48024:
    {
        returnValue = F("Bakenberg");
        break;
    }
    case 48025:
    {
        returnValue = F("Bakenbrink");
        break;
    }
    case 48026:
    {
        returnValue = F("Bakendorfer Str.");
        break;
    }
    case 48027:
    {
        returnValue = F("Bakenfeld");
        break;
    }
    case 48028:
    {
        returnValue = F("Bakenfeld-Aruper Str.");
        break;
    }
    case 48029:
    {
        returnValue = F("Bakenfeld-Hawerfeld");
        break;
    }
    case 48030:
    {
        returnValue = F("Bakenfeld-Himmelskampweg");
        break;
    }
    case 48031:
    {
        returnValue = F("Bakenfelder Weg");
        break;
    }
    case 48032:
    {
        returnValue = F("Bakenhuser Esch");
        break;
    }
    case 48033:
    {
        returnValue = F("Bakenhusstr.");
        break;
    }
    case 48034:
    {
        returnValue = F("Bakenhusweg");
        break;
    }
    case 48035:
    {
        returnValue = F("Bakenmoor");
        break;
    }
    case 48036:
    {
        returnValue = F("Bakenstr.");
        break;
    }
    case 48037:
    {
        returnValue = F("Bakenstraat");
        break;
    }
    case 48038:
    {
        returnValue = F("Bakenweg");
        break;
    }
    case 48039:
    {
        returnValue = F("Baker-Hughes-Str.");
        break;
    }
    case 48040:
    {
        returnValue = F("Bakerder Ring");
        break;
    }
    case 48041:
    {
        returnValue = F("Bakerder Str.");
        break;
    }
    case 48042:
    {
        returnValue = F("Bakernhof");
        break;
    }
    case 48043:
    {
        returnValue = F("Bakernweg");
        break;
    }
    case 48044:
    {
        returnValue = F("Bakestr.");
        break;
    }
    case 48045:
    {
        returnValue = F("Bakeweg");
        break;
    }
    case 48046:
    {
        returnValue = F("Bakkenkamp");
        break;
    }
    case 48047:
    {
        returnValue = F("Bakkersweg");
        break;
    }
    case 48048:
    {
        returnValue = F("Bakkertskamp");
        break;
    }
    case 48049:
    {
        returnValue = F("Bakkesand");
        break;
    }
    case 48050:
    {
        returnValue = F("Bakler Berg");
        break;
    }
    case 48051:
    {
        returnValue = F("Bakler Weg");
        break;
    }
    case 48052:
    {
        returnValue = F("Baksgarten");
        break;
    }
    case 48053:
    {
        returnValue = F("Bakumer Str.");
        break;
    }
    case 48054:
    {
        returnValue = F("Bakusbrink");
        break;
    }
    case 48055:
    {
        returnValue = F("Bakweg");
        break;
    }
    case 48056:
    {
        returnValue = F("Balancebaumstamm");
        break;
    }
    case 48057:
    {
        returnValue = F("Balancestange");
        break;
    }
    case 48058:
    {
        returnValue = F("Balanstr.");
        break;
    }
    case 48059:
    {
        returnValue = F("Balatonfüreder Str.");
        break;
    }
    case 48060:
    {
        returnValue = F("Balatonlellestr.");
        break;
    }
    case 48061:
    {
        returnValue = F("Balatonweg");
        break;
    }
    case 48062:
    {
        returnValue = F("Balauerfohr");
        break;
    }
    case 48063:
    {
        returnValue = F("Balbacher Str.");
        break;
    }
    case 48064:
    {
        returnValue = F("Balbachtalstr.");
        break;
    }
    case 48065:
    {
        returnValue = F("Balbecksring");
        break;
    }
    case 48066:
    {
        returnValue = F("Balberger Str.");
        break;
    }
    case 48067:
    {
        returnValue = F("Balbersdorf");
        break;
    }
    case 48068:
    {
        returnValue = F("Balbiererstr.");
        break;
    }
    case 48069:
    {
        returnValue = F("Balbierstr.");
        break;
    }
    case 48070:
    {
        returnValue = F("Balbina-Kuchler-Str.");
        break;
    }
    case 48071:
    {
        returnValue = F("Balbinastr.");
        break;
    }
    case 48072:
    {
        returnValue = F("Balcke-Dürr-Allee");
        break;
    }
    case 48073:
    {
        returnValue = F("Balckestr.");
        break;
    }
    case 48074:
    {
        returnValue = F("Baldamusstr.");
        break;
    }
    case 48075:
    {
        returnValue = F("Baldaufschneise");
        break;
    }
    case 48076:
    {
        returnValue = F("Baldaufstr.");
        break;
    }
    case 48077:
    {
        returnValue = F("Baldeckstr.");
        break;
    }
    case 48078:
    {
        returnValue = F("Baldeckweg");
        break;
    }
    case 48079:
    {
        returnValue = F("Baldenaustr.");
        break;
    }
    case 48080:
    {
        returnValue = F("Baldenberger Weg");
        break;
    }
    case 48081:
    {
        returnValue = F("Baldenbergstr.");
        break;
    }
    case 48082:
    {
        returnValue = F("Baldeneyseestr.");
        break;
    }
    case 48083:
    {
        returnValue = F("Baldenhain");
        break;
    }
    case 48084:
    {
        returnValue = F("Baldeniusstr.");
        break;
    }
    case 48085:
    {
        returnValue = F("Baldensteinstr.");
        break;
    }
    case 48086:
    {
        returnValue = F("Balder Str.");
        break;
    }
    case 48087:
    {
        returnValue = F("Balderbruchweg");
        break;
    }
    case 48088:
    {
        returnValue = F("Baldereck");
        break;
    }
    case 48089:
    {
        returnValue = F("Baldergang");
        break;
    }
    case 48090:
    {
        returnValue = F("Balderhaar");
        break;
    }
    case 48091:
    {
        returnValue = F("Balderhofergraben");
        break;
    }
    case 48092:
    {
        returnValue = F("Balderichstr.");
        break;
    }
    case 48093:
    {
        returnValue = F("Baldern");
        break;
    }
    case 48094:
    {
        returnValue = F("Balderner Str.");
        break;
    }
    case 48095:
    {
        returnValue = F("Baldernstr.");
        break;
    }
    case 48096:
    {
        returnValue = F("Baldersau");
        break;
    }
    case 48097:
    {
        returnValue = F("Baldersberg");
        break;
    }
    case 48098:
    {
        returnValue = F("Balderscheidweg");
        break;
    }
    case 48099:
    {
        returnValue = F("Balderschwang");
        break;
    }
    case 48100:
    {
        returnValue = F("Baldershausen");
        break;
    }
    case 48101:
    {
        returnValue = F("Balderstr.");
        break;
    }
    case 48102:
    {
        returnValue = F("Baldersweg");
        break;
    }
    case 48103:
    {
        returnValue = F("Baldersäcker");
        break;
    }
    case 48104:
    {
        returnValue = F("Baldesgraben");
        break;
    }
    case 48105:
    {
        returnValue = F("Baldestr.");
        break;
    }
    case 48106:
    {
        returnValue = F("Baldewinstr.");
        break;
    }
    case 48107:
    {
        returnValue = F("Baldhamer Str.");
        break;
    }
    case 48108:
    {
        returnValue = F("Baldhausstr.");
        break;
    }
    case 48109:
    {
        returnValue = F("Baldinger Str.");
        break;
    }
    case 48110:
    {
        returnValue = F("Baldingersweg");
        break;
    }
    case 48111:
    {
        returnValue = F("Baldingerweg");
        break;
    }
    case 48112:
    {
        returnValue = F("Balditzer Str.");
        break;
    }
    case 48113:
    {
        returnValue = F("Baldiunsweg");
        break;
    }
    case 48114:
    {
        returnValue = F("Baldocker Str.");
        break;
    }
    case 48115:
    {
        returnValue = F("Baldrianstr.");
        break;
    }
    case 48116:
    {
        returnValue = F("Baldrianweg");
        break;
    }
    case 48117:
    {
        returnValue = F("Baldstr.");
        break;
    }
    case 48118:
    {
        returnValue = F("Balduin-Helm-Str.");
        break;
    }
    case 48119:
    {
        returnValue = F("Balduinbrücke");
        break;
    }
    case 48120:
    {
        returnValue = F("Balduinistr.");
        break;
    }
    case 48121:
    {
        returnValue = F("Balduinplatz");
        break;
    }
    case 48122:
    {
        returnValue = F("Balduinseck");
        break;
    }
    case 48123:
    {
        returnValue = F("Balduinsecker Weg");
        break;
    }
    case 48124:
    {
        returnValue = F("Balduinstr.");
        break;
    }
    case 48125:
    {
        returnValue = F("Balduinsweg");
        break;
    }
    case 48126:
    {
        returnValue = F("Balduinweg");
        break;
    }
    case 48127:
    {
        returnValue = F("Baldung-Grien-Str.");
        break;
    }
    case 48128:
    {
        returnValue = F("Baldungkreisel");
        break;
    }
    case 48129:
    {
        returnValue = F("Baldungstr.");
        break;
    }
    case 48130:
    {
        returnValue = F("Baldungweg");
        break;
    }
    case 48131:
    {
        returnValue = F("Baldur Seifert Weg");
        break;
    }
    case 48132:
    {
        returnValue = F("Baldurstr.");
        break;
    }
    case 48133:
    {
        returnValue = F("Baldurweg");
        break;
    }
    case 48134:
    {
        returnValue = F("Baldusstr.");
        break;
    }
    case 48135:
    {
        returnValue = F("Baldwinstr.");
        break;
    }
    case 48136:
    {
        returnValue = F("Baleckestr.");
        break;
    }
    case 48137:
    {
        returnValue = F("Balenbach");
        break;
    }
    case 48138:
    {
        returnValue = F("Balerother Str.");
        break;
    }
    case 48139:
    {
        returnValue = F("Balestergasse");
        break;
    }
    case 48140:
    {
        returnValue = F("Balfourweg");
        break;
    }
    case 48141:
    {
        returnValue = F("Balgenöschle");
        break;
    }
    case 48142:
    {
        returnValue = F("Balger Hauptstr.");
        break;
    }
    case 48143:
    {
        returnValue = F("Balger Rundweg");
        break;
    }
    case 48144:
    {
        returnValue = F("Balger Sackweg");
        break;
    }
    case 48145:
    {
        returnValue = F("Balger Str.");
        break;
    }
    case 48146:
    {
        returnValue = F("Balger Weg");
        break;
    }
    case 48147:
    {
        returnValue = F("Balgerbrück");
        break;
    }
    case 48148:
    {
        returnValue = F("Balgerstr.");
        break;
    }
    case 48149:
    {
        returnValue = F("Balgerweg");
        break;
    }
    case 48150:
    {
        returnValue = F("Balgheimer Str.");
        break;
    }
    case 48151:
    {
        returnValue = F("Balgheimer Weg");
        break;
    }
    case 48152:
    {
        returnValue = F("Balgstädter Str.");
        break;
    }
    case 48153:
    {
        returnValue = F("Balhorner Feld");
        break;
    }
    case 48154:
    {
        returnValue = F("Balhorner Str.");
        break;
    }
    case 48155:
    {
        returnValue = F("Balhorner Weg");
        break;
    }
    case 48156:
    {
        returnValue = F("Balhorngasse");
        break;
    }
    case 48157:
    {
        returnValue = F("Balhorns Gang");
        break;
    }
    case 48158:
    {
        returnValue = F("Balhornstr.");
        break;
    }
    case 48159:
    {
        returnValue = F("Bali-Rundweg");
        break;
    }
    case 48160:
    {
        returnValue = F("Balinger Str.");
        break;
    }
    case 48161:
    {
        returnValue = F("Balinger Weg");
        break;
    }
    case 48162:
    {
        returnValue = F("Baljer Weg");
        break;
    }
    case 48163:
    {
        returnValue = F("Baljerdorf");
        break;
    }
    case 48164:
    {
        returnValue = F("Baljeweg");
        break;
    }
    case 48165:
    {
        returnValue = F("Balkanroute");
        break;
    }
    case 48166:
    {
        returnValue = F("Balkanstr.");
        break;
    }
    case 48167:
    {
        returnValue = F("Balkehof");
        break;
    }
    case 48168:
    {
        returnValue = F("Balken");
        break;
    }
    case 48169:
    {
        returnValue = F("Balkenackersweg");
        break;
    }
    case 48170:
    {
        returnValue = F("Balkenberg");
        break;
    }
    case 48171:
    {
        returnValue = F("Balkenbornstr.");
        break;
    }
    case 48172:
    {
        returnValue = F("Balkendorfer Platz");
        break;
    }
    case 48173:
    {
        returnValue = F("Balkengestell");
        break;
    }
    case 48174:
    {
        returnValue = F("Balkenkamp");
        break;
    }
    case 48175:
    {
        returnValue = F("Balkenkampsweg");
        break;
    }
    case 48176:
    {
        returnValue = F("Balkenrien");
        break;
    }
    case 48177:
    {
        returnValue = F("Balkenrienstr.");
        break;
    }
    case 48178:
    {
        returnValue = F("Balkenröder Weg");
        break;
    }
    case 48179:
    {
        returnValue = F("Balkenschlenke");
        break;
    }
    case 48180:
    {
        returnValue = F("Balkenstr.");
        break;
    }
    case 48181:
    {
        returnValue = F("Balkenweg");
        break;
    }
    case 48182:
    {
        returnValue = F("Balkertsweg");
        break;
    }
    case 48183:
    {
        returnValue = F("Balkeweg");
        break;
    }
    case 48184:
    {
        returnValue = F("Balkham");
        break;
    }
    case 48185:
    {
        returnValue = F("Balkhausen");
        break;
    }
    case 48186:
    {
        returnValue = F("Balkhausener Str.");
        break;
    }
    case 48187:
    {
        returnValue = F("Balkhausenweg");
        break;
    }
    case 48188:
    {
        returnValue = F("Balkhauser Kotten");
        break;
    }
    case 48189:
    {
        returnValue = F("Balkhauser Weg");
        break;
    }
    case 48190:
    {
        returnValue = F("Balkhemm");
        break;
    }
    case 48191:
    {
        returnValue = F("Balkhäuser Str.");
        break;
    }
    case 48192:
    {
        returnValue = F("Balkhäuser Tal");
        break;
    }
    case 48193:
    {
        returnValue = F("Balkishauweg");
        break;
    }
    case 48194:
    {
        returnValue = F("Balkmansweg");
        break;
    }
    case 48195:
    {
        returnValue = F("Balkon zum Meer");
        break;
    }
    case 48196:
    {
        returnValue = F("Balkonweg");
        break;
    }
    case 48197:
    {
        returnValue = F("Balkstr.");
        break;
    }
    case 48198:
    {
        returnValue = F("Balkumer Grenzweg");
        break;
    }
    case 48199:
    {
        returnValue = F("Balkumer Str.");
        break;
    }
    case 48200:
    {
        returnValue = F("Balkweg");
        break;
    }
    case 48201:
    {
        returnValue = F("Ball");
        break;
    }
    case 48202:
    {
        returnValue = F("Ball of Stone");
        break;
    }
    case 48203:
    {
        returnValue = F("Ball-Ricco-Str.");
        break;
    }
    case 48204:
    {
        returnValue = F("Ballast");
        break;
    }
    case 48205:
    {
        returnValue = F("Ballastberg");
        break;
    }
    case 48206:
    {
        returnValue = F("Ballastbrücke");
        break;
    }
    case 48207:
    {
        returnValue = F("Ballastkuhle");
        break;
    }
    case 48208:
    {
        returnValue = F("Ballastweg");
        break;
    }
    case 48209:
    {
        returnValue = F("Ballaufstr.");
        break;
    }
    case 48210:
    {
        returnValue = F("Ballbahn");
        break;
    }
    case 48211:
    {
        returnValue = F("Balleistr.");
        break;
    }
    case 48212:
    {
        returnValue = F("Ballenberger Weg");
        break;
    }
    case 48213:
    {
        returnValue = F("Ballenbergerweg");
        break;
    }
    case 48214:
    {
        returnValue = F("Ballenbergstr.");
        break;
    }
    case 48215:
    {
        returnValue = F("Ballenbergweg");
        break;
    }
    case 48216:
    {
        returnValue = F("Ballendorfer Str.");
        break;
    }
    case 48217:
    {
        returnValue = F("Ballendorfer Weg");
        break;
    }
    case 48218:
    {
        returnValue = F("Ballengasse");
        break;
    }
    case 48219:
    {
        returnValue = F("Ballengrundweg");
        break;
    }
    case 48220:
    {
        returnValue = F("Ballenhagen");
        break;
    }
    case 48221:
    {
        returnValue = F("Ballenhausgasse");
        break;
    }
    case 48222:
    {
        returnValue = F("Ballenhausstr.");
        break;
    }
    case 48223:
    {
        returnValue = F("Ballenhäuser Weg");
        break;
    }
    case 48224:
    {
        returnValue = F("Ballenmoosweg");
        break;
    }
    case 48225:
    {
        returnValue = F("Ballenpfad");
        break;
    }
    case 48226:
    {
        returnValue = F("Ballenstedter Str.");
        break;
    }
    case 48227:
    {
        returnValue = F("Ballenstedter Weg");
        break;
    }
    case 48228:
    {
        returnValue = F("Ballenstedtstr.");
        break;
    }
    case 48229:
    {
        returnValue = F("Ballenwasen");
        break;
    }
    case 48230:
    {
        returnValue = F("Ballenweg");
        break;
    }
    case 48231:
    {
        returnValue = F("Ballerner Str.");
        break;
    }
    case 48232:
    {
        returnValue = F("Ballersbacher Weg");
        break;
    }
    case 48233:
    {
        returnValue = F("Ballersdorfer Str.");
        break;
    }
    case 48234:
    {
        returnValue = F("Ballersdorfer Weg");
        break;
    }
    case 48235:
    {
        returnValue = F("Ballerstedter Str.");
        break;
    }
    case 48236:
    {
        returnValue = F("Ballerstedtstr.");
        break;
    }
    case 48237:
    {
        returnValue = F("Ballerstr.");
        break;
    }
    case 48238:
    {
        returnValue = F("Ballertshofen");
        break;
    }
    case 48239:
    {
        returnValue = F("Ballhauser Str.");
        break;
    }
    case 48240:
    {
        returnValue = F("Ballhausgasse");
        break;
    }
    case 48241:
    {
        returnValue = F("Ballhausstiege");
        break;
    }
    case 48242:
    {
        returnValue = F("Ballhausstr.");
        break;
    }
    case 48243:
    {
        returnValue = F("Ballhausweg");
        break;
    }
    case 48244:
    {
        returnValue = F("Ballheimer Weg");
        break;
    }
    case 48245:
    {
        returnValue = F("Ballhofstr.");
        break;
    }
    case 48246:
    {
        returnValue = F("Ballhäuser Str.");
        break;
    }
    case 48247:
    {
        returnValue = F("Ballhäuser Weg");
        break;
    }
    case 48248:
    {
        returnValue = F("Ballig");
        break;
    }
    case 48249:
    {
        returnValue = F("Balliner Str.");
        break;
    }
    case 48250:
    {
        returnValue = F("Ballingshäuser Str.");
        break;
    }
    case 48251:
    {
        returnValue = F("Ballingstr.");
        break;
    }
    case 48252:
    {
        returnValue = F("Ballisgraben");
        break;
    }
    case 48253:
    {
        returnValue = F("Ballistolweg");
        break;
    }
    case 48254:
    {
        returnValue = F("Ballitzer Weg");
        break;
    }
    case 48255:
    {
        returnValue = F("Ballkestr.");
        break;
    }
    case 48256:
    {
        returnValue = F("Ballmannshof");
        break;
    }
    case 48257:
    {
        returnValue = F("Ballmertshofer Str.");
        break;
    }
    case 48258:
    {
        returnValue = F("Ballongasse");
        break;
    }
    case 48259:
    {
        returnValue = F("Ballonstr.");
        break;
    }
    case 48260:
    {
        returnValue = F("Ballostr.");
        break;
    }
    case 48261:
    {
        returnValue = F("Balloweg");
        break;
    }
    case 48262:
    {
        returnValue = F("Ballplatz");
        break;
    }
    case 48263:
    {
        returnValue = F("Ballrechter Str.");
        break;
    }
    case 48264:
    {
        returnValue = F("Ballreichweg");
        break;
    }
    case 48265:
    {
        returnValue = F("Ballsieperstr.");
        break;
    }
    case 48266:
    {
        returnValue = F("Ballstr.");
        break;
    }
    case 48267:
    {
        returnValue = F("Ballstädter Hauptstr.");
        break;
    }
    case 48268:
    {
        returnValue = F("Ballstädter Str.");
        break;
    }
    case 48269:
    {
        returnValue = F("Ballstädter Weg");
        break;
    }
    case 48270:
    {
        returnValue = F("Ballumer Str.");
        break;
    }
    case 48271:
    {
        returnValue = F("Ballumweg");
        break;
    }
    case 48272:
    {
        returnValue = F("Ballweilerstr.");
        break;
    }
    case 48273:
    {
        returnValue = F("Ballwitzer Weg");
        break;
    }
    case 48274:
    {
        returnValue = F("Ballyweg");
        break;
    }
    case 48275:
    {
        returnValue = F("Balmer Str.");
        break;
    }
    case 48276:
    {
        returnValue = F("Balmersfeld");
        break;
    }
    case 48277:
    {
        returnValue = F("Balmerstr.");
        break;
    }
    case 48278:
    {
        returnValue = F("Balmertshofener Str.");
        break;
    }
    case 48279:
    {
        returnValue = F("Balmes-Mühle");
        break;
    }
    case 48280:
    {
        returnValue = F("Balmesgasse");
        break;
    }
    case 48281:
    {
        returnValue = F("Balmungweg");
        break;
    }
    case 48282:
    {
        returnValue = F("Baloghweg");
        break;
    }
    case 48283:
    {
        returnValue = F("Baloher Weg");
        break;
    }
    case 48284:
    {
        returnValue = F("Bals Hof");
        break;
    }
    case 48285:
    {
        returnValue = F("Balsaminenweg");
        break;
    }
    case 48286:
    {
        returnValue = F("Balsamstr.");
        break;
    }
    case 48287:
    {
        returnValue = F("Balsbach");
        break;
    }
    case 48288:
    {
        returnValue = F("Balsbach-Kirchenweg");
        break;
    }
    case 48289:
    {
        returnValue = F("Balsbacher Str.");
        break;
    }
    case 48290:
    {
        returnValue = F("Balsbergstr.");
        break;
    }
    case 48291:
    {
        returnValue = F("Balschenweg");
        break;
    }
    case 48292:
    {
        returnValue = F("Balsenstr.");
        break;
    }
    case 48293:
    {
        returnValue = F("Balsenteich");
        break;
    }
    case 48294:
    {
        returnValue = F("Balserstr.");
        break;
    }
    case 48295:
    {
        returnValue = F("Balsgäßchen");
        break;
    }
    case 48296:
    {
        returnValue = F("Balsterholz");
        break;
    }
    case 48297:
    {
        returnValue = F("Balsterhörn");
        break;
    }
    case 48298:
    {
        returnValue = F("Balsters Feld");
        break;
    }
    case 48299:
    {
        returnValue = F("Balsterstr.");
        break;
    }
    case 48300:
    {
        returnValue = F("Balsufer");
        break;
    }
    case 48301:
    {
        returnValue = F("Baltenstr.");
        break;
    }
    case 48302:
    {
        returnValue = F("Baltenweg");
        break;
    }
    case 48303:
    {
        returnValue = F("Balterazhofer Str.");
        break;
    }
    case 48304:
    {
        returnValue = F("Balternweg");
        break;
    }
    case 48305:
    {
        returnValue = F("Baltersbacher Weg");
        break;
    }
    case 48306:
    {
        returnValue = F("Baltersweilerweg");
        break;
    }
    case 48307:
    {
        returnValue = F("Balteshalde");
        break;
    }
    case 48308:
    {
        returnValue = F("Balteshof");
        break;
    }
    case 48309:
    {
        returnValue = F("Balthartweg");
        break;
    }
    case 48310:
    {
        returnValue = F("Balthas-Dieter-Weg");
        break;
    }
    case 48311:
    {
        returnValue = F("Balthasar-Barban-Str.");
        break;
    }
    case 48312:
    {
        returnValue = F("Balthasar-Becker-Weg");
        break;
    }
    case 48313:
    {
        returnValue = F("Balthasar-Bichler-Str.");
        break;
    }
    case 48314:
    {
        returnValue = F("Balthasar-Fabricius-Str.");
        break;
    }
    case 48315:
    {
        returnValue = F("Balthasar-Fischer-Str.");
        break;
    }
    case 48316:
    {
        returnValue = F("Balthasar-Graf-Str.");
        break;
    }
    case 48317:
    {
        returnValue = F("Balthasar-Heeg-Str.");
        break;
    }
    case 48318:
    {
        returnValue = F("Balthasar-Hubmaier-Str.");
        break;
    }
    case 48319:
    {
        returnValue = F("Balthasar-Hürtgen-Str.");
        break;
    }
    case 48320:
    {
        returnValue = F("Balthasar-Kissner-Str.");
        break;
    }
    case 48321:
    {
        returnValue = F("Balthasar-Kraft-Str.");
        break;
    }
    case 48322:
    {
        returnValue = F("Balthasar-Krems-Str.");
        break;
    }
    case 48323:
    {
        returnValue = F("Balthasar-Lacher-Str.");
        break;
    }
    case 48324:
    {
        returnValue = F("Balthasar-Maler-Gasse");
        break;
    }
    case 48325:
    {
        returnValue = F("Balthasar-Neumann-Brücke");
        break;
    }
    case 48326:
    {
        returnValue = F("Balthasar-Neumann-Platz");
        break;
    }
    case 48327:
    {
        returnValue = F("Balthasar-Neumann-Promenade");
        break;
    }
    case 48328:
    {
        returnValue = F("Balthasar-Neumann-Str.");
        break;
    }
    case 48329:
    {
        returnValue = F("Balthasar-Neumann-Weg");
        break;
    }
    case 48330:
    {
        returnValue = F("Balthasar-Permoser-Str.");
        break;
    }
    case 48331:
    {
        returnValue = F("Balthasar-Regler-Str.");
        break;
    }
    case 48332:
    {
        returnValue = F("Balthasar-Riepp-Str.");
        break;
    }
    case 48333:
    {
        returnValue = F("Balthasar-Ritz-Str.");
        break;
    }
    case 48334:
    {
        returnValue = F("Balthasar-Rößler-Str.");
        break;
    }
    case 48335:
    {
        returnValue = F("Balthasar-Schmitt-Str.");
        break;
    }
    case 48336:
    {
        returnValue = F("Balthasar-Schwebel-Str.");
        break;
    }
    case 48337:
    {
        returnValue = F("Balthasar-Schönfelder-Str.");
        break;
    }
    case 48338:
    {
        returnValue = F("Balthasar-Thieme-Str.");
        break;
    }
    case 48339:
    {
        returnValue = F("Balthasar-Vitzthum-Str.");
        break;
    }
    case 48340:
    {
        returnValue = F("Balthasar-Zeh-Weg");
        break;
    }
    case 48341:
    {
        returnValue = F("Balthasargäßchen");
        break;
    }
    case 48342:
    {
        returnValue = F("Balthasarstr.");
        break;
    }
    case 48343:
    {
        returnValue = F("Balthasarweg");
        break;
    }
    case 48344:
    {
        returnValue = F("Balthazarstr.");
        break;
    }
    case 48345:
    {
        returnValue = F("Baltherplatz");
        break;
    }
    case 48346:
    {
        returnValue = F("Balthsenau");
        break;
    }
    case 48347:
    {
        returnValue = F("Baltic Park");
        break;
    }
    case 48348:
    {
        returnValue = F("Baltic-Platz");
        break;
    }
    case 48349:
    {
        returnValue = F("Baltikumstr.");
        break;
    }
    case 48350:
    {
        returnValue = F("Baltimora");
        break;
    }
    case 48351:
    {
        returnValue = F("Baltimorweg");
        break;
    }
    case 48352:
    {
        returnValue = F("Baltische Allee");
        break;
    }
    case 48353:
    {
        returnValue = F("Baltische Str.");
        break;
    }
    case 48354:
    {
        returnValue = F("Baltischer Weg");
        break;
    }
    case 48355:
    {
        returnValue = F("Baltlinsweg");
        break;
    }
    case 48356:
    {
        returnValue = F("Baltmannsweiler Str.");
        break;
    }
    case 48357:
    {
        returnValue = F("Baltringer Hauptstr.");
        break;
    }
    case 48358:
    {
        returnValue = F("Baltringer Str.");
        break;
    }
    case 48359:
    {
        returnValue = F("Baltringer Weg");
        break;
    }
    case 48360:
    {
        returnValue = F("Baltrumer Platz");
        break;
    }
    case 48361:
    {
        returnValue = F("Baltrumer Str.");
        break;
    }
    case 48362:
    {
        returnValue = F("Baltrumer Weg");
        break;
    }
    case 48363:
    {
        returnValue = F("Baltrumstr.");
        break;
    }
    case 48364:
    {
        returnValue = F("Baltrumweg");
        break;
    }
    case 48365:
    {
        returnValue = F("Baltzerstr.");
        break;
    }
    case 48366:
    {
        returnValue = F("Baltzerweg");
        break;
    }
    case 48367:
    {
        returnValue = F("Baltzstr.");
        break;
    }
    case 48368:
    {
        returnValue = F("Baluschekstr.");
        break;
    }
    case 48369:
    {
        returnValue = F("Balver Str.");
        break;
    }
    case 48370:
    {
        returnValue = F("Balver Weg");
        break;
    }
    case 48371:
    {
        returnValue = F("Balwinusstr.");
        break;
    }
    case 48372:
    {
        returnValue = F("Balz");
        break;
    }
    case 48373:
    {
        returnValue = F("Balz Schneise");
        break;
    }
    case 48374:
    {
        returnValue = F("BalzAllee");
        break;
    }
    case 48375:
    {
        returnValue = F("Balzac-Weg");
        break;
    }
    case 48376:
    {
        returnValue = F("Balzacring");
        break;
    }
    case 48377:
    {
        returnValue = F("Balzacstr.");
        break;
    }
    case 48378:
    {
        returnValue = F("Balzacweg");
        break;
    }
    case 48379:
    {
        returnValue = F("Balzburg");
        break;
    }
    case 48380:
    {
        returnValue = F("Balzenbacher Str.");
        break;
    }
    case 48381:
    {
        returnValue = F("Balzenbergstr.");
        break;
    }
    case 48382:
    {
        returnValue = F("Balzenbuck");
        break;
    }
    case 48383:
    {
        returnValue = F("Balzenhofweg");
        break;
    }
    case 48384:
    {
        returnValue = F("Balzenteich");
        break;
    }
    case 48385:
    {
        returnValue = F("Balzenwaldweg");
        break;
    }
    case 48386:
    {
        returnValue = F("Balzerberg");
        break;
    }
    case 48387:
    {
        returnValue = F("Balzerbornweg");
        break;
    }
    case 48388:
    {
        returnValue = F("Balzergasse");
        break;
    }
    case 48389:
    {
        returnValue = F("Balzergässchen");
        break;
    }
    case 48390:
    {
        returnValue = F("Balzerkopfweg");
        break;
    }
    case 48391:
    {
        returnValue = F("Balzermühle");
        break;
    }
    case 48392:
    {
        returnValue = F("Balzershaldenweg");
        break;
    }
    case 48393:
    {
        returnValue = F("Balzerstr.");
        break;
    }
    case 48394:
    {
        returnValue = F("Balzersweg");
        break;
    }
    case 48395:
    {
        returnValue = F("Balzerweg");
        break;
    }
    case 48396:
    {
        returnValue = F("Balzfelder Weg");
        break;
    }
    case 48397:
    {
        returnValue = F("Balzhalde");
        break;
    }
    case 48398:
    {
        returnValue = F("Balzhauser Richtstatt");
        break;
    }
    case 48399:
    {
        returnValue = F("Balzhauser Str.");
        break;
    }
    case 48400:
    {
        returnValue = F("Balzheimer Weg");
        break;
    }
    case 48401:
    {
        returnValue = F("Balzhof");
        break;
    }
    case 48402:
    {
        returnValue = F("Balzhofener Moor");
        break;
    }
    case 48403:
    {
        returnValue = F("Balzhofener Str.");
        break;
    }
    case 48404:
    {
        returnValue = F("Balzholzer Str.");
        break;
    }
    case 48405:
    {
        returnValue = F("Balzstr.");
        break;
    }
    case 48406:
    {
        returnValue = F("Balzweg");
        break;
    }
    case 48407:
    {
        returnValue = F("Bam.-Wimmer-Weg");
        break;
    }
    case 48408:
    {
        returnValue = F("Bambensattelweg");
        break;
    }
    case 48409:
    {
        returnValue = F("Bamberg");
        break;
    }
    case 48410:
    {
        returnValue = F("Bamberger Mühle");
        break;
    }
    case 48411:
    {
        returnValue = F("Bamberger Str.");
        break;
    }
    case 48412:
    {
        returnValue = F("Bamberger Weg");
        break;
    }
    case 48413:
    {
        returnValue = F("Bambergerhof");
        break;
    }
    case 48414:
    {
        returnValue = F("Bambergstr.");
        break;
    }
    case 48415:
    {
        returnValue = F("Bambergsweg");
        break;
    }
    case 48416:
    {
        returnValue = F("Bambergweg");
        break;
    }
    case 48417:
    {
        returnValue = F("Bambiweg");
        break;
    }
    case 48418:
    {
        returnValue = F("Bambusweg");
        break;
    }
    case 48419:
    {
        returnValue = F("Bamenohler Str.");
        break;
    }
    case 48420:
    {
        returnValue = F("Bamergasse");
        break;
    }
    case 48421:
    {
        returnValue = F("Bamersbergweg");
        break;
    }
    case 48422:
    {
        returnValue = F("Bamerstieg");
        break;
    }
    case 48423:
    {
        returnValue = F("Bamesstr.");
        break;
    }
    case 48424:
    {
        returnValue = F("Bamlacher Str.");
        break;
    }
    case 48425:
    {
        returnValue = F("Bamlerstr.");
        break;
    }
    case 48426:
    {
        returnValue = F("Bammelsburger Str.");
        break;
    }
    case 48427:
    {
        returnValue = F("Bammeltring");
        break;
    }
    case 48428:
    {
        returnValue = F("Bammelweg");
        break;
    }
    case 48429:
    {
        returnValue = F("Bammentaler Str.");
        break;
    }
    case 48430:
    {
        returnValue = F("Bammentaler Weg");
        break;
    }
    case 48431:
    {
        returnValue = F("Bammer Landstr.");
        break;
    }
    case 48432:
    {
        returnValue = F("Bammer Weg");
        break;
    }
    case 48433:
    {
        returnValue = F("Bammersdorfer Str.");
        break;
    }
    case 48434:
    {
        returnValue = F("Bammertsackerweg");
        break;
    }
    case 48435:
    {
        returnValue = F("Bammertsbergweg");
        break;
    }
    case 48436:
    {
        returnValue = F("Bammertstr.");
        break;
    }
    case 48437:
    {
        returnValue = F("Bammerweg");
        break;
    }
    case 48438:
    {
        returnValue = F("Bammesweg");
        break;
    }
    case 48439:
    {
        returnValue = F("Bammyweg");
        break;
    }
    case 48440:
    {
        returnValue = F("Ban Taarep");
        break;
    }
    case 48441:
    {
        returnValue = F("Bananengäßle");
        break;
    }
    case 48442:
    {
        returnValue = F("Bananenweg");
        break;
    }
    case 48443:
    {
        returnValue = F("Banaschstr.");
        break;
    }
    case 48444:
    {
        returnValue = F("Banater Anger");
        break;
    }
    case 48445:
    {
        returnValue = F("Banater Str.");
        break;
    }
    case 48446:
    {
        returnValue = F("Banater Weg");
        break;
    }
    case 48447:
    {
        returnValue = F("Banaterstr.");
        break;
    }
    case 48448:
    {
        returnValue = F("Banaterweg");
        break;
    }
    case 48449:
    {
        returnValue = F("Banatstr.");
        break;
    }
    case 48450:
    {
        returnValue = F("Banatweg");
        break;
    }
    case 48451:
    {
        returnValue = F("Bandaustr.");
        break;
    }
    case 48452:
    {
        returnValue = F("Bandelgasse");
        break;
    }
    case 48453:
    {
        returnValue = F("Bandelhöhe");
        break;
    }
    case 48454:
    {
        returnValue = F("Bandelow");
        break;
    }
    case 48455:
    {
        returnValue = F("Bandelow-Siedlung");
        break;
    }
    case 48456:
    {
        returnValue = F("Bandelowshof");
        break;
    }
    case 48457:
    {
        returnValue = F("Bandelowstr.");
        break;
    }
    case 48458:
    {
        returnValue = F("Bandelstorfer Str.");
        break;
    }
    case 48459:
    {
        returnValue = F("Bandelstr.");
        break;
    }
    case 48460:
    {
        returnValue = F("Bandengraben");
        break;
    }
    case 48461:
    {
        returnValue = F("Bandenitzer Str.");
        break;
    }
    case 48462:
    {
        returnValue = F("Bandenitzer Weg");
        break;
    }
    case 48463:
    {
        returnValue = F("Banderbacher Str.");
        break;
    }
    case 48464:
    {
        returnValue = F("Banderbacher Weg");
        break;
    }
    case 48465:
    {
        returnValue = F("Bandesmühle");
        break;
    }
    case 48466:
    {
        returnValue = F("Bandgartenreute");
        break;
    }
    case 48467:
    {
        returnValue = F("Bandgäßchen");
        break;
    }
    case 48468:
    {
        returnValue = F("Bandhauerstr.");
        break;
    }
    case 48469:
    {
        returnValue = F("Bandhausgasse");
        break;
    }
    case 48470:
    {
        returnValue = F("Bandhausstr.");
        break;
    }
    case 48471:
    {
        returnValue = F("Bandholzstr.");
        break;
    }
    case 48472:
    {
        returnValue = F("Bandkellerstr.");
        break;
    }
    case 48473:
    {
        returnValue = F("Bandkeramik");
        break;
    }
    case 48474:
    {
        returnValue = F("Bandkeramikerweg");
        break;
    }
    case 48475:
    {
        returnValue = F("Bandkeramikweg");
        break;
    }
    case 48476:
    {
        returnValue = F("Bandmachergasse");
        break;
    }
    case 48477:
    {
        returnValue = F("Bandolstr.");
        break;
    }
    case 48478:
    {
        returnValue = F("Bandower Chaussee");
        break;
    }
    case 48479:
    {
        returnValue = F("Bandower Str.");
        break;
    }
    case 48480:
    {
        returnValue = F("Bandrieterstroot");
        break;
    }
    case 48481:
    {
        returnValue = F("Bandrieterweg");
        break;
    }
    case 48482:
    {
        returnValue = F("Bandstr.");
        break;
    }
    case 48483:
    {
        returnValue = F("Bandtälesweg");
        break;
    }
    case 48484:
    {
        returnValue = F("Bandungbrücke");
        break;
    }
    case 48485:
    {
        returnValue = F("Bandweberstr.");
        break;
    }
    case 48486:
    {
        returnValue = F("Bandweg");
        break;
    }
    case 48487:
    {
        returnValue = F("Bandwirkerplatz");
        break;
    }
    case 48488:
    {
        returnValue = F("Bandwirkerstr.");
        break;
    }
    case 48489:
    {
        returnValue = F("Bandwirkerweg");
        break;
    }
    case 48490:
    {
        returnValue = F("Bandwörthstr.");
        break;
    }
    case 48491:
    {
        returnValue = F("Banfenbreite");
        break;
    }
    case 48492:
    {
        returnValue = F("Banfer Weg");
        break;
    }
    case 48493:
    {
        returnValue = F("Banfetalstr.");
        break;
    }
    case 48494:
    {
        returnValue = F("Bangarten");
        break;
    }
    case 48495:
    {
        returnValue = F("Bangelsrundweg");
        break;
    }
    case 48496:
    {
        returnValue = F("Bangelsweg");
        break;
    }
    case 48497:
    {
        returnValue = F("Bangeltstr.");
        break;
    }
    case 48498:
    {
        returnValue = F("Bangemannweg");
        break;
    }
    case 48499:
    {
        returnValue = F("Bangenstr.");
        break;
    }
    case 48500:
    {
        returnValue = F("Bangerens Kämpken");
        break;
    }
    case 48501:
    {
        returnValue = F("Bangerig");
        break;
    }
    case 48502:
    {
        returnValue = F("Bangern");
        break;
    }
    case 48503:
    {
        returnValue = F("Bangernweg");
        break;
    }
    case 48504:
    {
        returnValue = F("Bangerstr.");
        break;
    }
    case 48505:
    {
        returnValue = F("Bangert");
        break;
    }
    case 48506:
    {
        returnValue = F("Bangertsbuckel");
        break;
    }
    case 48507:
    {
        returnValue = F("Bangertseck");
        break;
    }
    case 48508:
    {
        returnValue = F("Bangertsgasse");
        break;
    }
    case 48509:
    {
        returnValue = F("Bangertsgaß");
        break;
    }
    case 48510:
    {
        returnValue = F("Bangertsheeg");
        break;
    }
    case 48511:
    {
        returnValue = F("Bangertshöhe");
        break;
    }
    case 48512:
    {
        returnValue = F("Bangertsklingenweg");
        break;
    }
    case 48513:
    {
        returnValue = F("Bangertsschneise");
        break;
    }
    case 48514:
    {
        returnValue = F("Bangertstr.");
        break;
    }
    case 48515:
    {
        returnValue = F("Bangertsweg");
        break;
    }
    case 48516:
    {
        returnValue = F("Bangertweg");
        break;
    }
    case 48517:
    {
        returnValue = F("Bangertwete");
        break;
    }
    case 48518:
    {
        returnValue = F("Bangerweg");
        break;
    }
    case 48519:
    {
        returnValue = F("Bangfeldstr.");
        break;
    }
    case 48520:
    {
        returnValue = F("Banggartenweg");
        break;
    }
    case 48521:
    {
        returnValue = F("Bangorweg");
        break;
    }
    case 48522:
    {
        returnValue = F("Bangsstr.");
        break;
    }
    case 48523:
    {
        returnValue = F("Bangsteder Kirchstr.");
        break;
    }
    case 48524:
    {
        returnValue = F("Bangsteder Weg");
        break;
    }
    case 48525:
    {
        returnValue = F("Banholzstr.");
        break;
    }
    case 48526:
    {
        returnValue = F("Banholzweg");
        break;
    }
    case 48527:
    {
        returnValue = F("Bankbrücke");
        break;
    }
    case 48528:
    {
        returnValue = F("Bankenbreite");
        break;
    }
    case 48529:
    {
        returnValue = F("Bankendorfer Weg");
        break;
    }
    case 48530:
    {
        returnValue = F("Bankenplatz");
        break;
    }
    case 48531:
    {
        returnValue = F("Bankenstr.");
        break;
    }
    case 48532:
    {
        returnValue = F("Banker Str.");
        break;
    }
    case 48533:
    {
        returnValue = F("Banker-Feld-Str.");
        break;
    }
    case 48534:
    {
        returnValue = F("Bankerfeldstr.");
        break;
    }
    case 48535:
    {
        returnValue = F("Bankerheide");
        break;
    }
    case 48536:
    {
        returnValue = F("Bankgalliweg");
        break;
    }
    case 48537:
    {
        returnValue = F("Bankgasse");
        break;
    }
    case 48538:
    {
        returnValue = F("Bankgäßchen");
        break;
    }
    case 48539:
    {
        returnValue = F("Bankholzer Str.");
        break;
    }
    case 48540:
    {
        returnValue = F("Bankkamp");
        break;
    }
    case 48541:
    {
        returnValue = F("Bankl");
        break;
    }
    case 48542:
    {
        returnValue = F("Bankplatz");
        break;
    }
    case 48543:
    {
        returnValue = F("Bankrottsweg");
        break;
    }
    case 48544:
    {
        returnValue = F("Bankscher Weg");
        break;
    }
    case 48545:
    {
        returnValue = F("Bankstr.");
        break;
    }
    case 48546:
    {
        returnValue = F("Bankweg");
        break;
    }
    case 48547:
    {
        returnValue = F("Banmähder");
        break;
    }
    case 48548:
    {
        returnValue = F("Bann");
        break;
    }
    case 48549:
    {
        returnValue = F("Bannacker");
        break;
    }
    case 48550:
    {
        returnValue = F("Bannackerstr.");
        break;
    }
    case 48551:
    {
        returnValue = F("Bannackerweg");
        break;
    }
    case 48552:
    {
        returnValue = F("Bannberg");
        break;
    }
    case 48553:
    {
        returnValue = F("Bannberscheider Str.");
        break;
    }
    case 48554:
    {
        returnValue = F("Bannboschweg");
        break;
    }
    case 48555:
    {
        returnValue = F("Bannbühlweg");
        break;
    }
    case 48556:
    {
        returnValue = F("Bannebruchweg");
        break;
    }
    case 48557:
    {
        returnValue = F("Banneers");
        break;
    }
    case 48558:
    {
        returnValue = F("Banneggstr.");
        break;
    }
    case 48559:
    {
        returnValue = F("Bannemer Feld");
        break;
    }
    case 48560:
    {
        returnValue = F("Banneminer Dorfstr.");
        break;
    }
    case 48561:
    {
        returnValue = F("Bannenberg");
        break;
    }
    case 48562:
    {
        returnValue = F("Bannenbergstr.");
        break;
    }
    case 48563:
    {
        returnValue = F("Bannenbrück");
        break;
    }
    case 48564:
    {
        returnValue = F("Bannenbrücker Weg");
        break;
    }
    case 48565:
    {
        returnValue = F("Bannenbühne");
        break;
    }
    case 48566:
    {
        returnValue = F("Bannensieker Str.");
        break;
    }
    case 48567:
    {
        returnValue = F("Banner Str.");
        break;
    }
    case 48568:
    {
        returnValue = F("Bannerberg");
        break;
    }
    case 48569:
    {
        returnValue = F("Bannerscheid");
        break;
    }
    case 48570:
    {
        returnValue = F("Bannerstr.");
        break;
    }
    case 48571:
    {
        returnValue = F("Banneröder Str.");
        break;
    }
    case 48572:
    {
        returnValue = F("Bannetzer Str.");
        break;
    }
    case 48573:
    {
        returnValue = F("Bannewerthstr.");
        break;
    }
    case 48574:
    {
        returnValue = F("Bannewitzer Dorfplatz");
        break;
    }
    case 48575:
    {
        returnValue = F("Bannewitzer Ring");
        break;
    }
    case 48576:
    {
        returnValue = F("Bannewitzer Str.");
        break;
    }
    case 48577:
    {
        returnValue = F("Bannfrieden");
        break;
    }
    case 48578:
    {
        returnValue = F("Bannfurter Brücke");
        break;
    }
    case 48579:
    {
        returnValue = F("Banngarten");
        break;
    }
    case 48580:
    {
        returnValue = F("Banngartenstr.");
        break;
    }
    case 48581:
    {
        returnValue = F("Banngartenweg");
        break;
    }
    case 48582:
    {
        returnValue = F("Banngasse");
        break;
    }
    case 48583:
    {
        returnValue = F("Bannhaldenweg");
        break;
    }
    case 48584:
    {
        returnValue = F("Bannhegge");
        break;
    }
    case 48585:
    {
        returnValue = F("Bannherrenstr.");
        break;
    }
    case 48586:
    {
        returnValue = F("Bannhof");
        break;
    }
    case 48587:
    {
        returnValue = F("Bannholz");
        break;
    }
    case 48588:
    {
        returnValue = F("Bannholzer Str.");
        break;
    }
    case 48589:
    {
        returnValue = F("Bannholzer Weg");
        break;
    }
    case 48590:
    {
        returnValue = F("Bannholzring");
        break;
    }
    case 48591:
    {
        returnValue = F("Bannholzrundweg");
        break;
    }
    case 48592:
    {
        returnValue = F("Bannholzsiedlung");
        break;
    }
    case 48593:
    {
        returnValue = F("Bannholzstr.");
        break;
    }
    case 48594:
    {
        returnValue = F("Bannholzweg");
        break;
    }
    case 48595:
    {
        returnValue = F("Bannhölzleweg");
        break;
    }
    case 48596:
    {
        returnValue = F("Bannhügelweg");
        break;
    }
    case 48597:
    {
        returnValue = F("Banningstr.");
        break;
    }
    case 48598:
    {
        returnValue = F("Bannizastr.");
        break;
    }
    case 48599:
    {
        returnValue = F("Bannlachenweg");
        break;
    }
    case 48600:
    {
        returnValue = F("Bannmatt");
        break;
    }
    case 48601:
    {
        returnValue = F("Bannmatten");
        break;
    }
    case 48602:
    {
        returnValue = F("Bannmattstr.");
        break;
    }
    case 48603:
    {
        returnValue = F("Bannmühle");
        break;
    }
    case 48604:
    {
        returnValue = F("Bannmühletalweg");
        break;
    }
    case 48605:
    {
        returnValue = F("Bannony");
        break;
    }
    case 48606:
    {
        returnValue = F("Bannpfad");
        break;
    }
    case 48607:
    {
        returnValue = F("Bannpointstr.");
        break;
    }
    case 48608:
    {
        returnValue = F("Bannrieder Str.");
        break;
    }
    case 48609:
    {
        returnValue = F("Bannscheidenweg");
        break;
    }
    case 48610:
    {
        returnValue = F("Bannseeweg");
        break;
    }
    case 48611:
    {
        returnValue = F("Bannsieks Mühle");
        break;
    }
    case 48612:
    {
        returnValue = F("Bannstein");
        break;
    }
    case 48613:
    {
        returnValue = F("Bannsteinweg");
        break;
    }
    case 48614:
    {
        returnValue = F("Bannstr.");
        break;
    }
    case 48615:
    {
        returnValue = F("Bannstöckestr.");
        break;
    }
    case 48616:
    {
        returnValue = F("Bannwaldallee");
        break;
    }
    case 48617:
    {
        returnValue = F("Bannwaldseestr.");
        break;
    }
    case 48618:
    {
        returnValue = F("Bannwaldseeweg");
        break;
    }
    case 48619:
    {
        returnValue = F("Bannwaldskopfweg");
        break;
    }
    case 48620:
    {
        returnValue = F("Bannwaldstr.");
        break;
    }
    case 48621:
    {
        returnValue = F("Bannwaldweg");
        break;
    }
    case 48622:
    {
        returnValue = F("Bannwallstr.");
        break;
    }
    case 48623:
    {
        returnValue = F("Bannwasserstr.");
        break;
    }
    case 48624:
    {
        returnValue = F("Bannweg");
        break;
    }
    case 48625:
    {
        returnValue = F("Bannweide");
        break;
    }
    case 48626:
    {
        returnValue = F("Bannweidenweg");
        break;
    }
    case 48627:
    {
        returnValue = F("Bannweideweg");
        break;
    }
    case 48628:
    {
        returnValue = F("Bannwinkelstr.");
        break;
    }
    case 48629:
    {
        returnValue = F("Bannzaunstr.");
        break;
    }
    case 48630:
    {
        returnValue = F("Bannzaunweg");
        break;
    }
    case 48631:
    {
        returnValue = F("Bannzeile");
        break;
    }
    case 48632:
    {
        returnValue = F("Bannzeilweg");
        break;
    }
    case 48633:
    {
        returnValue = F("Bannzäune");
        break;
    }
    case 48634:
    {
        returnValue = F("Bannzäunerweg");
        break;
    }
    case 48635:
    {
        returnValue = F("Banrade");
        break;
    }
    case 48636:
    {
        returnValue = F("Banrain");
        break;
    }
    case 48637:
    {
        returnValue = F("Banrather Str.");
        break;
    }
    case 48638:
    {
        returnValue = F("Banreute");
        break;
    }
    case 48639:
    {
        returnValue = F("Bansapark");
        break;
    }
    case 48640:
    {
        returnValue = F("Bansastr.");
        break;
    }
    case 48641:
    {
        returnValue = F("Banse-Steg");
        break;
    }
    case 48642:
    {
        returnValue = F("Bansegarten");
        break;
    }
    case 48643:
    {
        returnValue = F("Bansin Bahnhof");
        break;
    }
    case 48644:
    {
        returnValue = F("Bansiner Allee");
        break;
    }
    case 48645:
    {
        returnValue = F("Bansiner Landweg");
        break;
    }
    case 48646:
    {
        returnValue = F("Bansiner Str.");
        break;
    }
    case 48647:
    {
        returnValue = F("Bansiner Weg");
        break;
    }
    case 48648:
    {
        returnValue = F("Banskamp");
        break;
    }
    case 48649:
    {
        returnValue = F("Banslebenring");
        break;
    }
    case 48650:
    {
        returnValue = F("Bansleber Holzweg");
        break;
    }
    case 48651:
    {
        returnValue = F("Bansleber Str.");
        break;
    }
    case 48652:
    {
        returnValue = F("Bansower Str.");
        break;
    }
    case 48653:
    {
        returnValue = F("Bantelner Str.");
        break;
    }
    case 48654:
    {
        returnValue = F("Bantenberger Str.");
        break;
    }
    case 48655:
    {
        returnValue = F("Bantenort");
        break;
    }
    case 48656:
    {
        returnValue = F("Banter Deich");
        break;
    }
    case 48657:
    {
        returnValue = F("Banter Seedeich");
        break;
    }
    case 48658:
    {
        returnValue = F("Banter Weg");
        break;
    }
    case 48659:
    {
        returnValue = F("Bantesholm");
        break;
    }
    case 48660:
    {
        returnValue = F("Banthusstr.");
        break;
    }
    case 48661:
    {
        returnValue = F("Bantikower Weg");
        break;
    }
    case 48662:
    {
        returnValue = F("Bantiner Str.");
        break;
    }
    case 48663:
    {
        returnValue = F("Bantiner Weg");
        break;
    }
    case 48664:
    {
        returnValue = F("Bantingstr.");
        break;
    }
    case 48665:
    {
        returnValue = F("Bantjedünen");
        break;
    }
    case 48666:
    {
        returnValue = F("Bantlesweg");
        break;
    }
    case 48667:
    {
        returnValue = F("Bantlinstr.");
        break;
    }
    case 48668:
    {
        returnValue = F("Bantorfer Brink");
        break;
    }
    case 48669:
    {
        returnValue = F("Bantorfer Str.");
        break;
    }
    case 48670:
    {
        returnValue = F("Bantorfer Thie");
        break;
    }
    case 48671:
    {
        returnValue = F("Bantorfer Weg");
        break;
    }
    case 48672:
    {
        returnValue = F("Bantsbalje");
        break;
    }
    case 48673:
    {
        returnValue = F("Bantzerstr.");
        break;
    }
    case 48674:
    {
        returnValue = F("Bantzerweg");
        break;
    }
    case 48675:
    {
        returnValue = F("Bantzstr.");
        break;
    }
    case 48676:
    {
        returnValue = F("Banwangweg");
        break;
    }
    case 48677:
    {
        returnValue = F("Banweg");
        break;
    }
    case 48678:
    {
        returnValue = F("Banwiesen");
        break;
    }
    case 48679:
    {
        returnValue = F("Banwiesenstr.");
        break;
    }
    case 48680:
    {
        returnValue = F("Banzaunstr.");
        break;
    }
    case 48681:
    {
        returnValue = F("Banzel");
        break;
    }
    case 48682:
    {
        returnValue = F("Banzenbach");
        break;
    }
    case 48683:
    {
        returnValue = F("Banzenbohl");
        break;
    }
    case 48684:
    {
        returnValue = F("Banzendorfer Str.");
        break;
    }
    case 48685:
    {
        returnValue = F("Banzendorfer Weg");
        break;
    }
    case 48686:
    {
        returnValue = F("Banzengasse");
        break;
    }
    case 48687:
    {
        returnValue = F("Banzenhof");
        break;
    }
    case 48688:
    {
        returnValue = F("Banzenmacherstr.");
        break;
    }
    case 48689:
    {
        returnValue = F("Banzenriedweg");
        break;
    }
    case 48690:
    {
        returnValue = F("Banzer Str.");
        break;
    }
    case 48691:
    {
        returnValue = F("Banzhafstr.");
        break;
    }
    case 48692:
    {
        returnValue = F("Banzhaldenstr.");
        break;
    }
    case 48693:
    {
        returnValue = F("Banzkower Damm");
        break;
    }
    case 48694:
    {
        returnValue = F("Banzkower Hubbrücke");
        break;
    }
    case 48695:
    {
        returnValue = F("Banzkower Str.");
        break;
    }
    case 48696:
    {
        returnValue = F("Banzweg");
        break;
    }
    case 48697:
    {
        returnValue = F("Banäcker");
        break;
    }
    case 48698:
    {
        returnValue = F("Banérplatz");
        break;
    }
    case 48699:
    {
        returnValue = F("Banérstr.");
        break;
    }
    case 48700:
    {
        returnValue = F("Baptist-Göring-Str.");
        break;
    }
    case 48701:
    {
        returnValue = F("Baptist-Himbert-Str.");
        break;
    }
    case 48702:
    {
        returnValue = F("Baptist-Hoffmann-Str.");
        break;
    }
    case 48703:
    {
        returnValue = F("Baptist-Kitzlinger-Str.");
        break;
    }
    case 48704:
    {
        returnValue = F("Baptist-Kraus-Str.");
        break;
    }
    case 48705:
    {
        returnValue = F("Baptist-Liebertz-Str.");
        break;
    }
    case 48706:
    {
        returnValue = F("Baptist-Palm-Platz");
        break;
    }
    case 48707:
    {
        returnValue = F("Baptistastr.");
        break;
    }
    case 48708:
    {
        returnValue = F("Baptistaweg");
        break;
    }
    case 48709:
    {
        returnValue = F("Baptistenlohne");
        break;
    }
    case 48710:
    {
        returnValue = F("Baptistgasse");
        break;
    }
    case 48711:
    {
        returnValue = F("Baptiststr.");
        break;
    }
    case 48712:
    {
        returnValue = F("Bapuweg");
        break;
    }
    case 48713:
    {
        returnValue = F("Barabein");
        break;
    }
    case 48714:
    {
        returnValue = F("Barackenweg");
        break;
    }
    case 48715:
    {
        returnValue = F("Barbachweg");
        break;
    }
    case 48716:
    {
        returnValue = F("Barbara Park");
        break;
    }
    case 48717:
    {
        returnValue = F("Barbara Träger-Platz");
        break;
    }
    case 48718:
    {
        returnValue = F("Barbara-Blomberg-Str.");
        break;
    }
    case 48719:
    {
        returnValue = F("Barbara-Boehme-Weg");
        break;
    }
    case 48720:
    {
        returnValue = F("Barbara-Brennfleck-Str.");
        break;
    }
    case 48721:
    {
        returnValue = F("Barbara-Gerretz-Str.");
        break;
    }
    case 48722:
    {
        returnValue = F("Barbara-Gignoux-Weg");
        break;
    }
    case 48723:
    {
        returnValue = F("Barbara-Kayser-Str.");
        break;
    }
    case 48724:
    {
        returnValue = F("Barbara-Kluntz-Weg");
        break;
    }
    case 48725:
    {
        returnValue = F("Barbara-Labbe-Str.");
        break;
    }
    case 48726:
    {
        returnValue = F("Barbara-Lüdemann-Str.");
        break;
    }
    case 48727:
    {
        returnValue = F("Barbara-Park");
        break;
    }
    case 48728:
    {
        returnValue = F("Barbara-Popp-Str.");
        break;
    }
    case 48729:
    {
        returnValue = F("Barbara-Rustemeier-Weg");
        break;
    }
    case 48730:
    {
        returnValue = F("Barbara-Stech-Weg");
        break;
    }
    case 48731:
    {
        returnValue = F("Barbara-Strell-Weg");
        break;
    }
    case 48732:
    {
        returnValue = F("Barbara-Uthmann-Platz");
        break;
    }
    case 48733:
    {
        returnValue = F("Barbara-Uthmann-Ring");
        break;
    }
    case 48734:
    {
        returnValue = F("Barbara-Uthmann-Str.");
        break;
    }
    case 48735:
    {
        returnValue = F("Barbara-Uttmann-Str.");
        break;
    }
    case 48736:
    {
        returnValue = F("Barbara-Uttmann-Weg");
        break;
    }
    case 48737:
    {
        returnValue = F("Barbara-Von-Eck-Str.");
        break;
    }
    case 48738:
    {
        returnValue = F("Barbara-Weigand-Str.");
        break;
    }
    case 48739:
    {
        returnValue = F("Barbara-Wolters-Str.");
        break;
    }
    case 48740:
    {
        returnValue = F("Barbara-von-Zipplingen-Str.");
        break;
    }
    case 48741:
    {
        returnValue = F("Barbaraackerweg");
        break;
    }
    case 48742:
    {
        returnValue = F("Barbaraberg");
        break;
    }
    case 48743:
    {
        returnValue = F("Barbaragasse");
        break;
    }
    case 48744:
    {
        returnValue = F("Barbarahaldenstr.");
        break;
    }
    case 48745:
    {
        returnValue = F("Barbarakirchgang");
        break;
    }
    case 48746:
    {
        returnValue = F("Barbarapfad");
        break;
    }
    case 48747:
    {
        returnValue = F("Barbaraplatz");
        break;
    }
    case 48748:
    {
        returnValue = F("Barbararing");
        break;
    }
    case 48749:
    {
        returnValue = F("Barbarastollen");
        break;
    }
    case 48750:
    {
        returnValue = F("Barbarastr.");
        break;
    }
    case 48751:
    {
        returnValue = F("Barbaraweg");
        break;
    }
    case 48752:
    {
        returnValue = F("Barbarinostr.");
        break;
    }
    case 48753:
    {
        returnValue = F("Barbarossa Weg");
        break;
    }
    case 48754:
    {
        returnValue = F("Barbarossa-Platz");
        break;
    }
    case 48755:
    {
        returnValue = F("Barbarossa-Weg");
        break;
    }
    case 48756:
    {
        returnValue = F("Barbarossahof");
        break;
    }
    case 48757:
    {
        returnValue = F("Barbarossaplatz");
        break;
    }
    case 48758:
    {
        returnValue = F("Barbarossaring");
        break;
    }
    case 48759:
    {
        returnValue = F("Barbarossastr.");
        break;
    }
    case 48760:
    {
        returnValue = F("Barbarossawall");
        break;
    }
    case 48761:
    {
        returnValue = F("Barbarossaweg");
        break;
    }
    case 48762:
    {
        returnValue = F("Barbecker Str.");
        break;
    }
    case 48763:
    {
        returnValue = F("Barbecker Weg");
        break;
    }
    case 48764:
    {
        returnValue = F("Barbeker Weg");
        break;
    }
    case 48765:
    {
        returnValue = F("Barbelgängle");
        break;
    }
    case 48766:
    {
        returnValue = F("Barbelsenstr.");
        break;
    }
    case 48767:
    {
        returnValue = F("Barbelstr.");
        break;
    }
    case 48768:
    {
        returnValue = F("Barbenrieth");
        break;
    }
    case 48769:
    {
        returnValue = F("Barbenstr.");
        break;
    }
    case 48770:
    {
        returnValue = F("Barbenweg");
        break;
    }
    case 48771:
    {
        returnValue = F("Barbergestr.");
        break;
    }
    case 48772:
    {
        returnValue = F("Barbericherweg");
        break;
    }
    case 48773:
    {
        returnValue = F("Barberstr.");
        break;
    }
    case 48774:
    {
        returnValue = F("Barbezieuxstr.");
        break;
    }
    case 48775:
    {
        returnValue = F("Barbi-Henneberger-Str.");
        break;
    }
    case 48776:
    {
        returnValue = F("Barbier-Baumann-Str.");
        break;
    }
    case 48777:
    {
        returnValue = F("Barbiergasse");
        break;
    }
    case 48778:
    {
        returnValue = F("Barbiergäßchen");
        break;
    }
    case 48779:
    {
        returnValue = F("Barbinger Str.");
        break;
    }
    case 48780:
    {
        returnValue = F("Barbiser Str.");
        break;
    }
    case 48781:
    {
        returnValue = F("Barbrake");
        break;
    }
    case 48782:
    {
        returnValue = F("Barbusch");
        break;
    }
    case 48783:
    {
        returnValue = F("Barbussestr.");
        break;
    }
    case 48784:
    {
        returnValue = F("Barbyer Chaussee");
        break;
    }
    case 48785:
    {
        returnValue = F("Barbyer Str.");
        break;
    }
    case 48786:
    {
        returnValue = F("Barbyer Weg");
        break;
    }
    case 48787:
    {
        returnValue = F("Barcastr.");
        break;
    }
    case 48788:
    {
        returnValue = F("Barcelonaweg");
        break;
    }
    case 48789:
    {
        returnValue = F("Barcheler Str.");
        break;
    }
    case 48790:
    {
        returnValue = F("Barchemhöhe");
        break;
    }
    case 48791:
    {
        returnValue = F("Barchetstr.");
        break;
    }
    case 48792:
    {
        returnValue = F("Barchfelder Str.");
        break;
    }
    case 48793:
    {
        returnValue = F("Barchfelder Weg");
        break;
    }
    case 48794:
    {
        returnValue = F("Barchfeldstr.");
        break;
    }
    case 48795:
    {
        returnValue = F("Barchusen");
        break;
    }
    case 48796:
    {
        returnValue = F("Barckefeldstr.");
        break;
    }
    case 48797:
    {
        returnValue = F("Barckhausenstr.");
        break;
    }
    case 48798:
    {
        returnValue = F("Barckhausstr.");
        break;
    }
    case 48799:
    {
        returnValue = F("Barclayweg");
        break;
    }
    case 48800:
    {
        returnValue = F("Barcser Str.");
        break;
    }
    case 48801:
    {
        returnValue = F("Bardal");
        break;
    }
    case 48802:
    {
        returnValue = F("Bardeleben");
        break;
    }
    case 48803:
    {
        returnValue = F("Bardelebenstr.");
        break;
    }
    case 48804:
    {
        returnValue = F("Bardelstr.");
        break;
    }
    case 48805:
    {
        returnValue = F("Bardelweg");
        break;
    }
    case 48806:
    {
        returnValue = F("Bardenberger Gäßchen");
        break;
    }
    case 48807:
    {
        returnValue = F("Bardenberger Str.");
        break;
    }
    case 48808:
    {
        returnValue = F("Bardenbike");
        break;
    }
    case 48809:
    {
        returnValue = F("Bardenfleth");
        break;
    }
    case 48810:
    {
        returnValue = F("Bardenflether Helmer");
        break;
    }
    case 48811:
    {
        returnValue = F("Bardenflether Kuhweidenweg");
        break;
    }
    case 48812:
    {
        returnValue = F("Bardenflethstr.");
        break;
    }
    case 48813:
    {
        returnValue = F("Bardenhagener Str.");
        break;
    }
    case 48814:
    {
        returnValue = F("Bardenheuerstr.");
        break;
    }
    case 48815:
    {
        returnValue = F("Bardenhorst");
        break;
    }
    case 48816:
    {
        returnValue = F("Bardenhäuerstr.");
        break;
    }
    case 48817:
    {
        returnValue = F("Bardenitzer Dorfstr.");
        break;
    }
    case 48818:
    {
        returnValue = F("Bardenitzer Str.");
        break;
    }
    case 48819:
    {
        returnValue = F("Bardenweg");
        break;
    }
    case 48820:
    {
        returnValue = F("Barderup-Nord");
        break;
    }
    case 48821:
    {
        returnValue = F("Barderup-Ost");
        break;
    }
    case 48822:
    {
        returnValue = F("Barderuper Dörpstraat");
        break;
    }
    case 48823:
    {
        returnValue = F("Barderuper Str.");
        break;
    }
    case 48824:
    {
        returnValue = F("Bardewischer Ring");
        break;
    }
    case 48825:
    {
        returnValue = F("Bardewischer Str.");
        break;
    }
    case 48826:
    {
        returnValue = F("Bardewischer Weg");
        break;
    }
    case 48827:
    {
        returnValue = F("Bardeystr.");
        break;
    }
    case 48828:
    {
        returnValue = F("Bardieksweg");
        break;
    }
    case 48829:
    {
        returnValue = F("Bardiliweg");
        break;
    }
    case 48830:
    {
        returnValue = F("Bardin");
        break;
    }
    case 48831:
    {
        returnValue = F("Bardolf-Wilden-Weg");
        break;
    }
    case 48832:
    {
        returnValue = F("Bardorfer Str.");
        break;
    }
    case 48833:
    {
        returnValue = F("Bardorfer Weg");
        break;
    }
    case 48834:
    {
        returnValue = F("Bardostr.");
        break;
    }
    case 48835:
    {
        returnValue = F("Bardowicker Str.");
        break;
    }
    case 48836:
    {
        returnValue = F("Bardowicker Wasserweg");
        break;
    }
    case 48837:
    {
        returnValue = F("Bardowicker Weg");
        break;
    }
    case 48838:
    {
        returnValue = F("Bardowickstr.");
        break;
    }
    case 48839:
    {
        returnValue = F("Bardowieker Weg");
        break;
    }
    case 48840:
    {
        returnValue = F("Bardowikstr.");
        break;
    }
    case 48841:
    {
        returnValue = F("Bardroffstr.");
        break;
    }
    case 48842:
    {
        returnValue = F("Bardseyring");
        break;
    }
    case 48843:
    {
        returnValue = F("Barduastr.");
        break;
    }
    case 48844:
    {
        returnValue = F("Barelhäserlohne");
        break;
    }
    case 48845:
    {
        returnValue = F("Barellistr.");
        break;
    }
    case 48846:
    {
        returnValue = F("Barenaue");
        break;
    }
    case 48847:
    {
        returnValue = F("Barenauer Weg");
        break;
    }
    case 48848:
    {
        returnValue = F("Barenberg");
        break;
    }
    case 48849:
    {
        returnValue = F("Barenbergstr.");
        break;
    }
    case 48850:
    {
        returnValue = F("Barenbergweg");
        break;
    }
    case 48851:
    {
        returnValue = F("Barenbreede");
        break;
    }
    case 48852:
    {
        returnValue = F("Barenbruch");
        break;
    }
    case 48853:
    {
        returnValue = F("Barenburg");
        break;
    }
    case 48854:
    {
        returnValue = F("Barenburger Str.");
        break;
    }
    case 48855:
    {
        returnValue = F("Barenbuscher Weg");
        break;
    }
    case 48856:
    {
        returnValue = F("Barendieksholz");
        break;
    }
    case 48857:
    {
        returnValue = F("Barendorfer Bruch");
        break;
    }
    case 48858:
    {
        returnValue = F("Barendorfer Str.");
        break;
    }
    case 48859:
    {
        returnValue = F("Bareneck");
        break;
    }
    case 48860:
    {
        returnValue = F("Barenhalder Str.");
        break;
    }
    case 48861:
    {
        returnValue = F("Barenhorst");
        break;
    }
    case 48862:
    {
        returnValue = F("Barenkampweg");
        break;
    }
    case 48863:
    {
        returnValue = F("Barenscheidstr.");
        break;
    }
    case 48864:
    {
        returnValue = F("Barenstock");
        break;
    }
    case 48865:
    {
        returnValue = F("Barenteich");
        break;
    }
    case 48866:
    {
        returnValue = F("Barenthiner Str.");
        break;
    }
    case 48867:
    {
        returnValue = F("Barenthiner Weg");
        break;
    }
    case 48868:
    {
        returnValue = F("Barentiner Str.");
        break;
    }
    case 48869:
    {
        returnValue = F("Barentoner Str.");
        break;
    }
    case 48870:
    {
        returnValue = F("Barentsstr.");
        break;
    }
    case 48871:
    {
        returnValue = F("Barfusspfad");
        break;
    }
    case 48872:
    {
        returnValue = F("Barfusspfad Penzberg");
        break;
    }
    case 48873:
    {
        returnValue = F("Barfussweg");
        break;
    }
    case 48874:
    {
        returnValue = F("Barfuß - und Generationenpark");
        break;
    }
    case 48875:
    {
        returnValue = F("Barfuß-Parcours");
        break;
    }
    case 48876:
    {
        returnValue = F("Barfußparcours");
        break;
    }
    case 48877:
    {
        returnValue = F("Barfußpark");
        break;
    }
    case 48878:
    {
        returnValue = F("Barfußparkur");
        break;
    }
    case 48879:
    {
        returnValue = F("Barfußpfad");
        break;
    }
    case 48880:
    {
        returnValue = F("Barfußpfad Sandwiesenweiher St. Martin");
        break;
    }
    case 48881:
    {
        returnValue = F("Barfußpfad Zeutern");
        break;
    }
    case 48882:
    {
        returnValue = F("Barfußpfad Ötisheim");
        break;
    }
    case 48883:
    {
        returnValue = F("Barfußweg");
        break;
    }
    case 48884:
    {
        returnValue = F("Barförder Elbdeich");
        break;
    }
    case 48885:
    {
        returnValue = F("Barförder Str.");
        break;
    }
    case 48886:
    {
        returnValue = F("Barfüßerbrücke");
        break;
    }
    case 48887:
    {
        returnValue = F("Barfüßergasse");
        break;
    }
    case 48888:
    {
        returnValue = F("Barfüßergäßchen");
        break;
    }
    case 48889:
    {
        returnValue = F("Barfüßerkloster");
        break;
    }
    case 48890:
    {
        returnValue = F("Barfüßerplatz");
        break;
    }
    case 48891:
    {
        returnValue = F("Barfüßerreulchen");
        break;
    }
    case 48892:
    {
        returnValue = F("Barfüßerstr.");
        break;
    }
    case 48893:
    {
        returnValue = F("Barfüßertor");
        break;
    }
    case 48894:
    {
        returnValue = F("Barfüßerweg");
        break;
    }
    case 48895:
    {
        returnValue = F("Barg");
        break;
    }
    case 48896:
    {
        returnValue = F("Barg up");
        break;
    }
    case 48897:
    {
        returnValue = F("Barg-Steinhamm");
        break;
    }
    case 48898:
    {
        returnValue = F("Bargauer Str.");
        break;
    }
    case 48899:
    {
        returnValue = F("Bargauer Strässle");
        break;
    }
    case 48900:
    {
        returnValue = F("Bargblöcken");
        break;
    }
    case 48901:
    {
        returnValue = F("Bargdorfer Heide");
        break;
    }
    case 48902:
    {
        returnValue = F("Bargdorfer Str.");
        break;
    }
    case 48903:
    {
        returnValue = F("Barge");
        break;
    }
    case 48904:
    {
        returnValue = F("Bargefeldweg");
        break;
    }
    case 48905:
    {
        returnValue = F("Bargelweg");
        break;
    }
    case 48906:
    {
        returnValue = F("Bargen");
        break;
    }
    case 48907:
    {
        returnValue = F("Bargener Str.");
        break;
    }
    case 48908:
    {
        returnValue = F("Bargener Weg");
        break;
    }
    case 48909:
    {
        returnValue = F("Bargenkoppel");
        break;
    }
    case 48910:
    {
        returnValue = F("Bargenkoppelredder");
        break;
    }
    case 48911:
    {
        returnValue = F("Bargenstedter Str.");
        break;
    }
    case 48912:
    {
        returnValue = F("Bargenweg");
        break;
    }
    case 48913:
    {
        returnValue = F("Barger Str.");
        break;
    }
    case 48914:
    {
        returnValue = F("Barger Weg");
        break;
    }
    case 48915:
    {
        returnValue = F("Bargerfehn Süd");
        break;
    }
    case 48916:
    {
        returnValue = F("Bargerhof");
        break;
    }
    case 48917:
    {
        returnValue = F("Bargerlandsweg");
        break;
    }
    case 48918:
    {
        returnValue = F("Bargerweg");
        break;
    }
    case 48919:
    {
        returnValue = F("Barges Garten");
        break;
    }
    case 48920:
    {
        returnValue = F("Bargesch");
        break;
    }
    case 48921:
    {
        returnValue = F("Bargeshäger Str.");
        break;
    }
    case 48922:
    {
        returnValue = F("Bargetsmühle");
        break;
    }
    case 48923:
    {
        returnValue = F("Bargeworth");
        break;
    }
    case 48924:
    {
        returnValue = F("Bargfelder Str.");
        break;
    }
    case 48925:
    {
        returnValue = F("Bargfelder Weg");
        break;
    }
    case 48926:
    {
        returnValue = F("Barghamm");
        break;
    }
    case 48927:
    {
        returnValue = F("Barghammsweken");
        break;
    }
    case 48928:
    {
        returnValue = F("Barghof");
        break;
    }
    case 48929:
    {
        returnValue = F("Bargholzstr.");
        break;
    }
    case 48930:
    {
        returnValue = F("Barghook");
        break;
    }
    case 48931:
    {
        returnValue = F("Barghorner Chaussee");
        break;
    }
    case 48932:
    {
        returnValue = F("Barghorner Str.");
        break;
    }
    case 48933:
    {
        returnValue = F("Barghorner Weg");
        break;
    }
    case 48934:
    {
        returnValue = F("Barghorster Weg");
        break;
    }
    case 48935:
    {
        returnValue = F("Barghörn");
        break;
    }
    case 48936:
    {
        returnValue = F("Bargischow Ausbau");
        break;
    }
    case 48937:
    {
        returnValue = F("Bargkamp");
        break;
    }
    case 48938:
    {
        returnValue = F("Bargkampstr.");
        break;
    }
    case 48939:
    {
        returnValue = F("Bargkoppel");
        break;
    }
    case 48940:
    {
        returnValue = F("Bargkoppelweg");
        break;
    }
    case 48941:
    {
        returnValue = F("Bargloyer Heide");
        break;
    }
    case 48942:
    {
        returnValue = F("Bargloyer Str.");
        break;
    }
    case 48943:
    {
        returnValue = F("Bargloyer Weg");
        break;
    }
    case 48944:
    {
        returnValue = F("Bargmannstr.");
        break;
    }
    case 48945:
    {
        returnValue = F("Bargmannsweg");
        break;
    }
    case 48946:
    {
        returnValue = F("Bargmerweg");
        break;
    }
    case 48947:
    {
        returnValue = F("Bargmoor");
        break;
    }
    case 48948:
    {
        returnValue = F("Bargmoorweg");
        break;
    }
    case 48949:
    {
        returnValue = F("Bargrabenstr.");
        break;
    }
    case 48950:
    {
        returnValue = F("Bargreiterdamm");
        break;
    }
    case 48951:
    {
        returnValue = F("Bargs Kamp");
        break;
    }
    case 48952:
    {
        returnValue = F("Bargstaller Str.");
        break;
    }
    case 48953:
    {
        returnValue = F("Bargsteder Str.");
        break;
    }
    case 48954:
    {
        returnValue = F("Bargstedter Str.");
        break;
    }
    case 48955:
    {
        returnValue = F("Bargstedtermoor");
        break;
    }
    case 48956:
    {
        returnValue = F("Bargsteeg");
        break;
    }
    case 48957:
    {
        returnValue = F("Bargster Karkweg");
        break;
    }
    case 48958:
    {
        returnValue = F("Bargstr.");
        break;
    }
    case 48959:
    {
        returnValue = F("Bargteheider Stadtpark");
        break;
    }
    case 48960:
    {
        returnValue = F("Bargteheider Str.");
        break;
    }
    case 48961:
    {
        returnValue = F("Bargumer Weg");
        break;
    }
    case 48962:
    {
        returnValue = F("Bargup");
        break;
    }
    case 48963:
    {
        returnValue = F("Bargweg");
        break;
    }
    case 48964:
    {
        returnValue = F("Barheinestr.");
        break;
    }
    case 48965:
    {
        returnValue = F("Barhornweg");
        break;
    }
    case 48966:
    {
        returnValue = F("Barhöfter Str.");
        break;
    }
    case 48967:
    {
        returnValue = F("Barichstr.");
        break;
    }
    case 48968:
    {
        returnValue = F("Barienroder Str.");
        break;
    }
    case 48969:
    {
        returnValue = F("Barigau");
        break;
    }
    case 48970:
    {
        returnValue = F("Barigauer Tal");
        break;
    }
    case 48971:
    {
        returnValue = F("Barigauer Weg");
        break;
    }
    case 48972:
    {
        returnValue = F("Bariger Str.");
        break;
    }
    case 48973:
    {
        returnValue = F("Barikamp");
        break;
    }
    case 48974:
    {
        returnValue = F("Baringdorfer Str.");
        break;
    }
    case 48975:
    {
        returnValue = F("Baringer Weg");
        break;
    }
    case 48976:
    {
        returnValue = F("Baringhof");
        break;
    }
    case 48977:
    {
        returnValue = F("Baringhofstr.");
        break;
    }
    case 48978:
    {
        returnValue = F("Baringstr.");
        break;
    }
    case 48979:
    {
        returnValue = F("Barionstr.");
        break;
    }
    case 48980:
    {
        returnValue = F("Barkassenweg");
        break;
    }
    case 48981:
    {
        returnValue = F("Barkau");
        break;
    }
    case 48982:
    {
        returnValue = F("Barkauer Str.");
        break;
    }
    case 48983:
    {
        returnValue = F("Barkauer Weg");
        break;
    }
    case 48984:
    {
        returnValue = F("Barkel");
        break;
    }
    case 48985:
    {
        returnValue = F("Barkeler Weg");
        break;
    }
    case 48986:
    {
        returnValue = F("Barkelweg");
        break;
    }
    case 48987:
    {
        returnValue = F("Barkemeyersweg");
        break;
    }
    case 48988:
    {
        returnValue = F("Barkenberger Allee");
        break;
    }
    case 48989:
    {
        returnValue = F("Barkenboomsweg");
        break;
    }
    case 48990:
    {
        returnValue = F("Barkenbuschweg");
        break;
    }
    case 48991:
    {
        returnValue = F("Barkendal");
        break;
    }
    case 48992:
    {
        returnValue = F("Barkener Weg");
        break;
    }
    case 48993:
    {
        returnValue = F("Barkengasse");
        break;
    }
    case 48994:
    {
        returnValue = F("Barkenhoff");
        break;
    }
    case 48995:
    {
        returnValue = F("Barkenholmer Str.");
        break;
    }
    case 48996:
    {
        returnValue = F("Barkenholmer Weg");
        break;
    }
    case 48997:
    {
        returnValue = F("Barkenkamp");
        break;
    }
    case 48998:
    {
        returnValue = F("Barkenkoppel");
        break;
    }
    case 48999:
    {
        returnValue = F("Barkenmoor");
        break;
    }
    case 49000:
    {
        returnValue = F("Barkenschneise");
        break;
    }
    case 49001:
    {
        returnValue = F("Barkenshorn");
        break;
    }
    case 49002:
    {
        returnValue = F("Barkenstr.");
        break;
    }
    case 49003:
    {
        returnValue = F("Barkensweg");
        break;
    }
    case 49004:
    {
        returnValue = F("Barkentange");
        break;
    }
    case 49005:
    {
        returnValue = F("Barkenverbindungsweg");
        break;
    }
    case 49006:
    {
        returnValue = F("Barkenweg");
        break;
    }
    case 49007:
    {
        returnValue = F("Barkenwinkel");
        break;
    }
    case 49008:
    {
        returnValue = F("Barker Weg");
        break;
    }
    case 49009:
    {
        returnValue = F("Barkeschstr.");
        break;
    }
    case 49010:
    {
        returnValue = F("Barkeschweg");
        break;
    }
    case 49011:
    {
        returnValue = F("Barkeweg");
        break;
    }
    case 49012:
    {
        returnValue = F("Barkeystr.");
        break;
    }
    case 49013:
    {
        returnValue = F("Barkhausen");
        break;
    }
    case 49014:
    {
        returnValue = F("Barkhausener Str.");
        break;
    }
    case 49015:
    {
        returnValue = F("Barkhausenstr.");
        break;
    }
    case 49016:
    {
        returnValue = F("Barkhauser Feld");
        break;
    }
    case 49017:
    {
        returnValue = F("Barkhauser Str.");
        break;
    }
    case 49018:
    {
        returnValue = F("Barkhauser Weg");
        break;
    }
    case 49019:
    {
        returnValue = F("Barkhausstr.");
        break;
    }
    case 49020:
    {
        returnValue = F("Barkheiden-Schneise");
        break;
    }
    case 49021:
    {
        returnValue = F("Barkheimer Weg");
        break;
    }
    case 49022:
    {
        returnValue = F("Barkhof");
        break;
    }
    case 49023:
    {
        returnValue = F("Barkhof Brokeloh");
        break;
    }
    case 49024:
    {
        returnValue = F("Barkholt");
        break;
    }
    case 49025:
    {
        returnValue = F("Barkholtredder");
        break;
    }
    case 49026:
    {
        returnValue = F("Barkhorn");
        break;
    }
    case 49027:
    {
        returnValue = F("Barkhorst");
        break;
    }
    case 49028:
    {
        returnValue = F("Barkhorster Str.");
        break;
    }
    case 49029:
    {
        returnValue = F("Barkhorster Weg");
        break;
    }
    case 49030:
    {
        returnValue = F("Barkhäuser Str.");
        break;
    }
    case 49031:
    {
        returnValue = F("Barkhörner Weg");
        break;
    }
    case 49032:
    {
        returnValue = F("Barkingstr.");
        break;
    }
    case 49033:
    {
        returnValue = F("Barklage Weg");
        break;
    }
    case 49034:
    {
        returnValue = F("Barkloger Str.");
        break;
    }
    case 49035:
    {
        returnValue = F("Barkmannsweg");
        break;
    }
    case 49036:
    {
        returnValue = F("Barkmissen");
        break;
    }
    case 49037:
    {
        returnValue = F("Barkow");
        break;
    }
    case 49038:
    {
        returnValue = F("Barkow - Kaschow");
        break;
    }
    case 49039:
    {
        returnValue = F("Barkower Str.");
        break;
    }
    case 49040:
    {
        returnValue = F("Barkower Weg");
        break;
    }
    case 49041:
    {
        returnValue = F("Barkring");
        break;
    }
    case 49042:
    {
        returnValue = F("Barksdale Avenue");
        break;
    }
    case 49043:
    {
        returnValue = F("Barksener Weg");
        break;
    }
    case 49044:
    {
        returnValue = F("Barkser Str.");
        break;
    }
    case 49045:
    {
        returnValue = F("Barkskamp");
        break;
    }
    case 49046:
    {
        returnValue = F("Barkvieren");
        break;
    }
    case 49047:
    {
        returnValue = F("Barkweg");
        break;
    }
    case 49048:
    {
        returnValue = F("Barl");
        break;
    }
    case 49049:
    {
        returnValue = F("Barlachhof");
        break;
    }
    case 49050:
    {
        returnValue = F("Barlachpfad");
        break;
    }
    case 49051:
    {
        returnValue = F("Barlachplatz");
        break;
    }
    case 49052:
    {
        returnValue = F("Barlachring");
        break;
    }
    case 49053:
    {
        returnValue = F("Barlachstr.");
        break;
    }
    case 49054:
    {
        returnValue = F("Barlachweg");
        break;
    }
    case 49055:
    {
        returnValue = F("Barlage");
        break;
    }
    case 49056:
    {
        returnValue = F("Barlager Mühlenweg");
        break;
    }
    case 49057:
    {
        returnValue = F("Barlager Str.");
        break;
    }
    case 49058:
    {
        returnValue = F("Barlager Weg");
        break;
    }
    case 49059:
    {
        returnValue = F("Barlagerort");
        break;
    }
    case 49060:
    {
        returnValue = F("Barle");
        break;
    }
    case 49061:
    {
        returnValue = F("Barlebeekweg");
        break;
    }
    case 49062:
    {
        returnValue = F("Barleber Chaussee");
        break;
    }
    case 49063:
    {
        returnValue = F("Barleber Str.");
        break;
    }
    case 49064:
    {
        returnValue = F("Barlenstr.");
        break;
    }
    case 49065:
    {
        returnValue = F("Barler Str.");
        break;
    }
    case 49066:
    {
        returnValue = F("Barler Weg");
        break;
    }
    case 49067:
    {
        returnValue = F("Barletenweg");
        break;
    }
    case 49068:
    {
        returnValue = F("Barlettenweg");
        break;
    }
    case 49069:
    {
        returnValue = F("Barlin");
        break;
    }
    case 49070:
    {
        returnValue = F("Barlinghausener Str.");
        break;
    }
    case 49071:
    {
        returnValue = F("Barlingweg");
        break;
    }
    case 49072:
    {
        returnValue = F("Barlisser Str.");
        break;
    }
    case 49073:
    {
        returnValue = F("Barlochweg");
        break;
    }
    case 49074:
    {
        returnValue = F("Barloer Ringstr.");
        break;
    }
    case 49075:
    {
        returnValue = F("Barloer Str.");
        break;
    }
    case 49076:
    {
        returnValue = F("Barloer Weg");
        break;
    }
    case 49077:
    {
        returnValue = F("Barloh");
        break;
    }
    case 49078:
    {
        returnValue = F("Barlohe");
        break;
    }
    case 49079:
    {
        returnValue = F("Barlohsgrund");
        break;
    }
    case 49080:
    {
        returnValue = F("Barlower Weg");
        break;
    }
    case 49081:
    {
        returnValue = F("Barlösiusstr.");
        break;
    }
    case 49082:
    {
        returnValue = F("Barmbek");
        break;
    }
    case 49083:
    {
        returnValue = F("Barmbeker Ring");
        break;
    }
    case 49084:
    {
        returnValue = F("Barmbergweg");
        break;
    }
    case 49085:
    {
        returnValue = F("Barmbichler Str.");
        break;
    }
    case 49086:
    {
        returnValue = F("Barmbostel");
        break;
    }
    case 49087:
    {
        returnValue = F("Barmbosteler Str.");
        break;
    }
    case 49088:
    {
        returnValue = F("Barmbrede");
        break;
    }
    case 49089:
    {
        returnValue = F("Barmeedsfeldweg");
        break;
    }
    case 49090:
    {
        returnValue = F("Barmen");
        break;
    }
    case 49091:
    {
        returnValue = F("Barmen Bahnhof");
        break;
    }
    case 49092:
    {
        returnValue = F("Barmenia-Allee");
        break;
    }
    case 49093:
    {
        returnValue = F("Barmenia-Park");
        break;
    }
    case 49094:
    {
        returnValue = F("Barmenitz");
        break;
    }
    case 49095:
    {
        returnValue = F("Barmer");
        break;
    }
    case 49096:
    {
        returnValue = F("Barmer Kirchweg");
        break;
    }
    case 49097:
    {
        returnValue = F("Barmer Str.");
        break;
    }
    case 49098:
    {
        returnValue = F("Barmer Weg");
        break;
    }
    case 49099:
    {
        returnValue = F("Barmingholtener Str.");
        break;
    }
    case 49100:
    {
        returnValue = F("Barmkapfweg");
        break;
    }
    case 49101:
    {
        returnValue = F("Barmker Str.");
        break;
    }
    case 49102:
    {
        returnValue = F("Barmklagesweg");
        break;
    }
    case 49103:
    {
        returnValue = F("Barmseestr.");
        break;
    }
    case 49104:
    {
        returnValue = F("Barmseeweg");
        break;
    }
    case 49105:
    {
        returnValue = F("Barmstedter Chaussee");
        break;
    }
    case 49106:
    {
        returnValue = F("Barmstedter Str.");
        break;
    }
    case 49107:
    {
        returnValue = F("Barmstedter Wohld");
        break;
    }
    case 49108:
    {
        returnValue = F("Barmsteinweg");
        break;
    }
    case 49109:
    {
        returnValue = F("Barmstr.");
        break;
    }
    case 49110:
    {
        returnValue = F("Barmsweg");
        break;
    }
    case 49111:
    {
        returnValue = F("Barnackensgrund");
        break;
    }
    case 49112:
    {
        returnValue = F("Barnackersweg");
        break;
    }
    case 49113:
    {
        returnValue = F("Barnau");
        break;
    }
    case 49114:
    {
        returnValue = F("Barnbecker Weg");
        break;
    }
    case 49115:
    {
        returnValue = F("Barnberghalde");
        break;
    }
    case 49116:
    {
        returnValue = F("Barnbosteler Weg");
        break;
    }
    case 49117:
    {
        returnValue = F("Barnbruch");
        break;
    }
    case 49118:
    {
        returnValue = F("Barnbrucher Weg");
        break;
    }
    case 49119:
    {
        returnValue = F("Barnbruchskamp");
        break;
    }
    case 49120:
    {
        returnValue = F("Barnebeck");
        break;
    }
    case 49121:
    {
        returnValue = F("Barneberger Str.");
        break;
    }
    case 49122:
    {
        returnValue = F("Barneckemoor");
        break;
    }
    case 49123:
    {
        returnValue = F("Barnecker Steg");
        break;
    }
    case 49124:
    {
        returnValue = F("Barnecker Str.");
        break;
    }
    case 49125:
    {
        returnValue = F("Barnefeldstr.");
        break;
    }
    case 49126:
    {
        returnValue = F("Barneführerholzweg");
        break;
    }
    case 49127:
    {
        returnValue = F("Barnekower Str.");
        break;
    }
    case 49128:
    {
        returnValue = F("Barner Stücker Weg");
        break;
    }
    case 49129:
    {
        returnValue = F("Barneschweg");
        break;
    }
    case 49130:
    {
        returnValue = F("Barnestr.");
        break;
    }
    case 49131:
    {
        returnValue = F("Barnevelderweg");
        break;
    }
    case 49132:
    {
        returnValue = F("Barnewitzer Str.");
        break;
    }
    case 49133:
    {
        returnValue = F("Barnhauser Str.");
        break;
    }
    case 49134:
    {
        returnValue = F("Barnholz");
        break;
    }
    case 49135:
    {
        returnValue = F("Barnhope");
        break;
    }
    case 49136:
    {
        returnValue = F("Barnim-von-Braunschweig-Str.");
        break;
    }
    case 49137:
    {
        returnValue = F("Barnimer Str.");
        break;
    }
    case 49138:
    {
        returnValue = F("Barnimhöhe");
        break;
    }
    case 49139:
    {
        returnValue = F("Barnimstr.");
        break;
    }
    case 49140:
    {
        returnValue = F("Barniner Weg");
        break;
    }
    case 49141:
    {
        returnValue = F("Barningeroder Kamp");
        break;
    }
    case 49142:
    {
        returnValue = F("Barnitzer Str.");
        break;
    }
    case 49143:
    {
        returnValue = F("Barnkevitzer Weg");
        break;
    }
    case 49144:
    {
        returnValue = F("Barnkruger Hafenstr.");
        break;
    }
    case 49145:
    {
        returnValue = F("Barnkruger Str.");
        break;
    }
    case 49146:
    {
        returnValue = F("Barnsdorfer Str.");
        break;
    }
    case 49147:
    {
        returnValue = F("Barnsdorfer Weg");
        break;
    }
    case 49148:
    {
        returnValue = F("Barnsdorfser Hauptstr.");
        break;
    }
    case 49149:
    {
        returnValue = F("Barnser Ring");
        break;
    }
    case 49150:
    {
        returnValue = F("Barnser Str.");
        break;
    }
    case 49151:
    {
        returnValue = F("Barnser Weg");
        break;
    }
    case 49152:
    {
        returnValue = F("Barnsleyer Str.");
        break;
    }
    case 49153:
    {
        returnValue = F("Barnstedt");
        break;
    }
    case 49154:
    {
        returnValue = F("Barnstedter Str.");
        break;
    }
    case 49155:
    {
        returnValue = F("Barnstedter Weg");
        break;
    }
    case 49156:
    {
        returnValue = F("Barnstorfer Hof");
        break;
    }
    case 49157:
    {
        returnValue = F("Barnstorfer Platz");
        break;
    }
    case 49158:
    {
        returnValue = F("Barnstorfer Ring");
        break;
    }
    case 49159:
    {
        returnValue = F("Barnstorfer Str.");
        break;
    }
    case 49160:
    {
        returnValue = F("Barnstorfer Weg");
        break;
    }
    case 49161:
    {
        returnValue = F("Barnstorfplatz");
        break;
    }
    case 49162:
    {
        returnValue = F("Barntener Platz");
        break;
    }
    case 49163:
    {
        returnValue = F("Barnter Hameke");
        break;
    }
    case 49164:
    {
        returnValue = F("Barntruper Str.");
        break;
    }
    case 49165:
    {
        returnValue = F("Barntruper Weg");
        break;
    }
    case 49166:
    {
        returnValue = F("Baro");
        break;
    }
    case 49167:
    {
        returnValue = F("Baro-Allee");
        break;
    }
    case 49168:
    {
        returnValue = F("Barock-Rosengarten");
        break;
    }
    case 49169:
    {
        returnValue = F("Barockblick");
        break;
    }
    case 49170:
    {
        returnValue = F("Barockbrücke (Hochzeitsbrücke)");
        break;
    }
    case 49171:
    {
        returnValue = F("Barocker Schloßpark");
        break;
    }
    case 49172:
    {
        returnValue = F("Barockgarten");
        break;
    }
    case 49173:
    {
        returnValue = F("Barockgarten Großsedlitz");
        break;
    }
    case 49174:
    {
        returnValue = F("Barockgarten Künsche");
        break;
    }
    case 49175:
    {
        returnValue = F("Barockgarten Lichtenwalde");
        break;
    }
    case 49176:
    {
        returnValue = F("Barockgarten Zabeltitz");
        break;
    }
    case 49177:
    {
        returnValue = F("Barockschloßgarten");
        break;
    }
    case 49178:
    {
        returnValue = F("Barockstr.");
        break;
    }
    case 49179:
    {
        returnValue = F("Baroldmühle");
        break;
    }
    case 49180:
    {
        returnValue = F("Baron Hornstein Str.");
        break;
    }
    case 49181:
    {
        returnValue = F("Baron-Carl-Str.");
        break;
    }
    case 49182:
    {
        returnValue = F("Baron-Eberhard-Weg");
        break;
    }
    case 49183:
    {
        returnValue = F("Baron-Feurer-Weg");
        break;
    }
    case 49184:
    {
        returnValue = F("Baron-Joachim-Str.");
        break;
    }
    case 49185:
    {
        returnValue = F("Baron-Kurt-Str.");
        break;
    }
    case 49186:
    {
        returnValue = F("Baron-Kückh-Str.");
        break;
    }
    case 49187:
    {
        returnValue = F("Baron-Mandl-Str.");
        break;
    }
    case 49188:
    {
        returnValue = F("Baron-Michel-Str.");
        break;
    }
    case 49189:
    {
        returnValue = F("Baron-Müller-Weg");
        break;
    }
    case 49190:
    {
        returnValue = F("Baron-Riederer-Str.");
        break;
    }
    case 49191:
    {
        returnValue = F("Baron-von-Gelting-Weg");
        break;
    }
    case 49192:
    {
        returnValue = F("Baron-von-Geyr-Str.");
        break;
    }
    case 49193:
    {
        returnValue = F("Baron-von-Kotz-Str.");
        break;
    }
    case 49194:
    {
        returnValue = F("Baron-von-Lepel-Platz");
        break;
    }
    case 49195:
    {
        returnValue = F("Baron-von-Lochner-Str.");
        break;
    }
    case 49196:
    {
        returnValue = F("Baron-von-Schilling-Weg");
        break;
    }
    case 49197:
    {
        returnValue = F("Baronenallee");
        break;
    }
    case 49198:
    {
        returnValue = F("Baronenbergweg");
        break;
    }
    case 49199:
    {
        returnValue = F("Baronenstr.");
        break;
    }
    case 49200:
    {
        returnValue = F("Baronenwaldstr.");
        break;
    }
    case 49201:
    {
        returnValue = F("Baronenweg");
        break;
    }
    case 49202:
    {
        returnValue = F("Baroneßstr.");
        break;
    }
    case 49203:
    {
        returnValue = F("Baronfeld");
        break;
    }
    case 49204:
    {
        returnValue = F("Barongasse");
        break;
    }
    case 49205:
    {
        returnValue = F("Baroniestr.");
        break;
    }
    case 49206:
    {
        returnValue = F("Baronin-von-Loebbecke-Str.");
        break;
    }
    case 49207:
    {
        returnValue = F("Baronreihe");
        break;
    }
    case 49208:
    {
        returnValue = F("Baronsdell");
        break;
    }
    case 49209:
    {
        returnValue = F("Baronsgarten");
        break;
    }
    case 49210:
    {
        returnValue = F("Baronstr.");
        break;
    }
    case 49211:
    {
        returnValue = F("Baronsweg");
        break;
    }
    case 49212:
    {
        returnValue = F("Baronweg");
        break;
    }
    case 49213:
    {
        returnValue = F("Baroper Bahnhofstr.");
        break;
    }
    case 49214:
    {
        returnValue = F("Baroper Bergstr.");
        break;
    }
    case 49215:
    {
        returnValue = F("Baroper Heidestr.");
        break;
    }
    case 49216:
    {
        returnValue = F("Baroper Kirchweg");
        break;
    }
    case 49217:
    {
        returnValue = F("Baroper Landwehr");
        break;
    }
    case 49218:
    {
        returnValue = F("Baroper Marktplatz");
        break;
    }
    case 49219:
    {
        returnValue = F("Baroper Schulstr.");
        break;
    }
    case 49220:
    {
        returnValue = F("Baroper Str.");
        break;
    }
    case 49221:
    {
        returnValue = F("Barrenbruchweg");
        break;
    }
    case 49222:
    {
        returnValue = F("Barrenfeldstr.");
        break;
    }
    case 49223:
    {
        returnValue = F("Barrenkamp");
        break;
    }
    case 49224:
    {
        returnValue = F("Barrensteiner Weg");
        break;
    }
    case 49225:
    {
        returnValue = F("Barrensteinstr.");
        break;
    }
    case 49226:
    {
        returnValue = F("Barresgraben");
        break;
    }
    case 49227:
    {
        returnValue = F("Barrestr.");
        break;
    }
    case 49228:
    {
        returnValue = F("Barrgärten");
        break;
    }
    case 49229:
    {
        returnValue = F("Barrien");
        break;
    }
    case 49230:
    {
        returnValue = F("Barrienstr.");
        break;
    }
    case 49231:
    {
        returnValue = F("Barrienweg");
        break;
    }
    case 49232:
    {
        returnValue = F("Barrier Kirchweg");
        break;
    }
    case 49233:
    {
        returnValue = F("Barrier Str.");
        break;
    }
    case 49234:
    {
        returnValue = F("Barrierefreier Badesteg");
        break;
    }
    case 49235:
    {
        returnValue = F("Barrierefreier Zugang Rathaus");
        break;
    }
    case 49236:
    {
        returnValue = F("Barrigser Str.");
        break;
    }
    case 49237:
    {
        returnValue = F("Barrikadenstr.");
        break;
    }
    case 49238:
    {
        returnValue = F("Barriser Weg");
        break;
    }
    case 49239:
    {
        returnValue = F("Barrl");
        break;
    }
    case 49240:
    {
        returnValue = F("Barrler Kirchweg");
        break;
    }
    case 49241:
    {
        returnValue = F("Barrow-Tunnel");
        break;
    }
    case 49242:
    {
        returnValue = F("Barrwiese");
        break;
    }
    case 49243:
    {
        returnValue = F("Barsac-Allee");
        break;
    }
    case 49244:
    {
        returnValue = F("Barsbeker Weg");
        break;
    }
    case 49245:
    {
        returnValue = F("Barsbütteler Hof");
        break;
    }
    case 49246:
    {
        returnValue = F("Barsbütteler Landstr.");
        break;
    }
    case 49247:
    {
        returnValue = F("Barsbütteler Weg");
        break;
    }
    case 49248:
    {
        returnValue = F("Barsbüttler Ring");
        break;
    }
    case 49249:
    {
        returnValue = F("Barschbleek");
        break;
    }
    case 49250:
    {
        returnValue = F("Barschenweg");
        break;
    }
    case 49251:
    {
        returnValue = F("Barschlüter Str.");
        break;
    }
    case 49252:
    {
        returnValue = F("Barschstr.");
        break;
    }
    case 49253:
    {
        returnValue = F("Barschweg");
        break;
    }
    case 49254:
    {
        returnValue = F("Barselkeweg");
        break;
    }
    case 49255:
    {
        returnValue = F("Barsener Str.");
        break;
    }
    case 49256:
    {
        returnValue = F("Barsikower Weg");
        break;
    }
    case 49257:
    {
        returnValue = F("Barsinghausenstr.");
        break;
    }
    case 49258:
    {
        returnValue = F("Barsinghäuser Kreisel");
        break;
    }
    case 49259:
    {
        returnValue = F("Barsinghäuser Str.");
        break;
    }
    case 49260:
    {
        returnValue = F("Barskamper Str.");
        break;
    }
    case 49261:
    {
        returnValue = F("Barskamper Weg");
        break;
    }
    case 49262:
    {
        returnValue = F("Barslund");
        break;
    }
    case 49263:
    {
        returnValue = F("Barsteder Str.");
        break;
    }
    case 49264:
    {
        returnValue = F("Barstenkamp");
        break;
    }
    case 49265:
    {
        returnValue = F("Barstenweg");
        break;
    }
    case 49266:
    {
        returnValue = F("Barstewende");
        break;
    }
    case 49267:
    {
        returnValue = F("Bartelbergweg");
        break;
    }
    case 49268:
    {
        returnValue = F("Barteldesplatz");
        break;
    }
    case 49269:
    {
        returnValue = F("Bartelgasse");
        break;
    }
    case 49270:
    {
        returnValue = F("Bartells Allee");
        break;
    }
    case 49271:
    {
        returnValue = F("Bartels Feld A");
        break;
    }
    case 49272:
    {
        returnValue = F("Bartels Feld B");
        break;
    }
    case 49273:
    {
        returnValue = F("Bartels Feld C");
        break;
    }
    case 49274:
    {
        returnValue = F("Bartels Feld D");
        break;
    }
    case 49275:
    {
        returnValue = F("Bartels Kamp");
        break;
    }
    case 49276:
    {
        returnValue = F("Bartelsallee");
        break;
    }
    case 49277:
    {
        returnValue = F("Bartelsberg");
        break;
    }
    case 49278:
    {
        returnValue = F("Bartelsbusch");
        break;
    }
    case 49279:
    {
        returnValue = F("Bartelscher Weg");
        break;
    }
    case 49280:
    {
        returnValue = F("Bartelsdorfer Chaussee");
        break;
    }
    case 49281:
    {
        returnValue = F("Bartelsdorfer Str.");
        break;
    }
    case 49282:
    {
        returnValue = F("Bartelsdorfer Weg");
        break;
    }
    case 49283:
    {
        returnValue = F("Bartelsee");
        break;
    }
    case 49284:
    {
        returnValue = F("Bartelsgang");
        break;
    }
    case 49285:
    {
        returnValue = F("Bartelshagen");
        break;
    }
    case 49286:
    {
        returnValue = F("Bartelsheide");
        break;
    }
    case 49287:
    {
        returnValue = F("Bartelshorn");
        break;
    }
    case 49288:
    {
        returnValue = F("Bartelshäger Damm");
        break;
    }
    case 49289:
    {
        returnValue = F("Bartelskamp");
        break;
    }
    case 49290:
    {
        returnValue = F("Bartelskamptwiete");
        break;
    }
    case 49291:
    {
        returnValue = F("Bartelsstr.");
        break;
    }
    case 49292:
    {
        returnValue = F("Bartelsteinstr.");
        break;
    }
    case 49293:
    {
        returnValue = F("Bartelstr.");
        break;
    }
    case 49294:
    {
        returnValue = F("Bartelsweg");
        break;
    }
    case 49295:
    {
        returnValue = F("Bartelter Weg");
        break;
    }
    case 49296:
    {
        returnValue = F("Barteläcker");
        break;
    }
    case 49297:
    {
        returnValue = F("Bartenbacher Str.");
        break;
    }
    case 49298:
    {
        returnValue = F("Bartenbacher Sträßle");
        break;
    }
    case 49299:
    {
        returnValue = F("Bartenbergstr.");
        break;
    }
    case 49300:
    {
        returnValue = F("Bartener Str.");
        break;
    }
    case 49301:
    {
        returnValue = F("Bartengasse");
        break;
    }
    case 49302:
    {
        returnValue = F("Bartenhauerweg");
        break;
    }
    case 49303:
    {
        returnValue = F("Bartenhofweg");
        break;
    }
    case 49304:
    {
        returnValue = F("Bartenhöhe");
        break;
    }
    case 49305:
    {
        returnValue = F("Bartenkamp");
        break;
    }
    case 49306:
    {
        returnValue = F("Bartenmannsgeräumt");
        break;
    }
    case 49307:
    {
        returnValue = F("Bartenmühlenweg");
        break;
    }
    case 49308:
    {
        returnValue = F("Bartenshäger Str.");
        break;
    }
    case 49309:
    {
        returnValue = F("Bartenslebenring");
        break;
    }
    case 49310:
    {
        returnValue = F("Bartensleber Weg");
        break;
    }
    case 49311:
    {
        returnValue = F("Bartensteige");
        break;
    }
    case 49312:
    {
        returnValue = F("Bartensteigweg");
        break;
    }
    case 49313:
    {
        returnValue = F("Bartensteiner Str.");
        break;
    }
    case 49314:
    {
        returnValue = F("Bartensteiner Weg");
        break;
    }
    case 49315:
    {
        returnValue = F("Bartensteinstr.");
        break;
    }
    case 49316:
    {
        returnValue = F("Bartensteinweg");
        break;
    }
    case 49317:
    {
        returnValue = F("Bartenstr.");
        break;
    }
    case 49318:
    {
        returnValue = F("Bartenweg");
        break;
    }
    case 49319:
    {
        returnValue = F("Barteröder Str.");
        break;
    }
    case 49320:
    {
        returnValue = F("Bartgeierweg");
        break;
    }
    case 49321:
    {
        returnValue = F("Barth-Blendinger-Str.");
        break;
    }
    case 49322:
    {
        returnValue = F("Barth-Park");
        break;
    }
    case 49323:
    {
        returnValue = F("Barth-Weg");
        break;
    }
    case 49324:
    {
        returnValue = F("Barthel-Bruyn-Weg");
        break;
    }
    case 49325:
    {
        returnValue = F("Barthel-Giesen-Str.");
        break;
    }
    case 49326:
    {
        returnValue = F("Barthel-Gilles-Weg");
        break;
    }
    case 49327:
    {
        returnValue = F("Barthelmarktstr.");
        break;
    }
    case 49328:
    {
        returnValue = F("Barthelmesauracher Str.");
        break;
    }
    case 49329:
    {
        returnValue = F("Barthelmeßstr.");
        break;
    }
    case 49330:
    {
        returnValue = F("Barthels Hof");
        break;
    }
    case 49331:
    {
        returnValue = F("Barthelskamp");
        break;
    }
    case 49332:
    {
        returnValue = F("Barthelsmühlring");
        break;
    }
    case 49333:
    {
        returnValue = F("Barthelspforte");
        break;
    }
    case 49334:
    {
        returnValue = F("Barthelstr.");
        break;
    }
    case 49335:
    {
        returnValue = F("Barthelsäcker");
        break;
    }
    case 49336:
    {
        returnValue = F("Barthelweiher");
        break;
    }
    case 49337:
    {
        returnValue = F("Barther Anlagen");
        break;
    }
    case 49338:
    {
        returnValue = F("Barther Feldweg");
        break;
    }
    case 49339:
    {
        returnValue = F("Barther Stieg");
        break;
    }
    case 49340:
    {
        returnValue = F("Barther Str.");
        break;
    }
    case 49341:
    {
        returnValue = F("Barther Weidenweg");
        break;
    }
    case 49342:
    {
        returnValue = F("Barthestr.");
        break;
    }
    case 49343:
    {
        returnValue = F("Bartheweg");
        break;
    }
    case 49344:
    {
        returnValue = F("Barthgäßchen");
        break;
    }
    case 49345:
    {
        returnValue = F("Barthl-Mayer-Weg");
        break;
    }
    case 49346:
    {
        returnValue = F("Barthles Gässle");
        break;
    }
    case 49347:
    {
        returnValue = F("Barthlgasserstr.");
        break;
    }
    case 49348:
    {
        returnValue = F("Barthlmannstr.");
        break;
    }
    case 49349:
    {
        returnValue = F("Barthlott-Weg");
        break;
    }
    case 49350:
    {
        returnValue = F("Barthlweg");
        break;
    }
    case 49351:
    {
        returnValue = F("Barthmühle");
        break;
    }
    case 49352:
    {
        returnValue = F("Barthmühlenstr.");
        break;
    }
    case 49353:
    {
        returnValue = F("Barthold Road");
        break;
    }
    case 49354:
    {
        returnValue = F("Barthold-Behrens-Weg");
        break;
    }
    case 49355:
    {
        returnValue = F("Barthold-Cloer-Weg");
        break;
    }
    case 49356:
    {
        returnValue = F("Barthold-Drewes-Str.");
        break;
    }
    case 49357:
    {
        returnValue = F("Barthold-Linden-Str.n");
        break;
    }
    case 49358:
    {
        returnValue = F("Bartholdweg");
        break;
    }
    case 49359:
    {
        returnValue = F("Bartholomäer Str.");
        break;
    }
    case 49360:
    {
        returnValue = F("Bartholomäerweg");
        break;
    }
    case 49361:
    {
        returnValue = F("Bartholomäikirchhof");
        break;
    }
    case 49362:
    {
        returnValue = F("Bartholomäiwiesen");
        break;
    }
    case 49363:
    {
        returnValue = F("Bartholomästr.");
        break;
    }
    case 49364:
    {
        returnValue = F("Bartholomäus Platz");
        break;
    }
    case 49365:
    {
        returnValue = F("Bartholomäus-Arnoldi-Str.");
        break;
    }
    case 49366:
    {
        returnValue = F("Bartholomäus-Bacher-Str.");
        break;
    }
    case 49367:
    {
        returnValue = F("Bartholomäus-Gang");
        break;
    }
    case 49368:
    {
        returnValue = F("Bartholomäus-Holzhauser-Str.");
        break;
    }
    case 49369:
    {
        returnValue = F("Bartholomäus-Moser-Weg");
        break;
    }
    case 49370:
    {
        returnValue = F("Bartholomäus-Neumann-Str.");
        break;
    }
    case 49371:
    {
        returnValue = F("Bartholomäus-Schink-Str.");
        break;
    }
    case 49372:
    {
        returnValue = F("Bartholomäus-Schuchpaur-Str.");
        break;
    }
    case 49373:
    {
        returnValue = F("Bartholomäus-Steg");
        break;
    }
    case 49374:
    {
        returnValue = F("Bartholomäus-Weltz-Platz");
        break;
    }
    case 49375:
    {
        returnValue = F("Bartholomäus-Weltz-Str.");
        break;
    }
    case 49376:
    {
        returnValue = F("Bartholomäusberg");
        break;
    }
    case 49377:
    {
        returnValue = F("Bartholomäusgasse");
        break;
    }
    case 49378:
    {
        returnValue = F("Bartholomäusplatz");
        break;
    }
    case 49379:
    {
        returnValue = F("Bartholomäusring");
        break;
    }
    case 49380:
    {
        returnValue = F("Bartholomäusstr.");
        break;
    }
    case 49381:
    {
        returnValue = F("Bartholomäustwete");
        break;
    }
    case 49382:
    {
        returnValue = F("Bartholomäusweg");
        break;
    }
    case 49383:
    {
        returnValue = F("Bartholomäweg");
        break;
    }
    case 49384:
    {
        returnValue = F("Bartholzstr.");
        break;
    }
    case 49385:
    {
        returnValue = F("Barthonia-Forum");
        break;
    }
    case 49386:
    {
        returnValue = F("Barthshof");
        break;
    }
    case 49387:
    {
        returnValue = F("Barthshügelstr.");
        break;
    }
    case 49388:
    {
        returnValue = F("Barthstr.");
        break;
    }
    case 49389:
    {
        returnValue = F("Barthweg");
        break;
    }
    case 49390:
    {
        returnValue = F("Barthwiesenweg");
        break;
    }
    case 49391:
    {
        returnValue = F("Barthübelstr.");
        break;
    }
    case 49392:
    {
        returnValue = F("Bartl-Retsch-Str.");
        break;
    }
    case 49393:
    {
        returnValue = F("Bartleshalde");
        break;
    }
    case 49394:
    {
        returnValue = F("Bartlgasse");
        break;
    }
    case 49395:
    {
        returnValue = F("Bartlingenkamp");
        break;
    }
    case 49396:
    {
        returnValue = F("Bartlingshof");
        break;
    }
    case 49397:
    {
        returnValue = F("Bartlmäweg");
        break;
    }
    case 49398:
    {
        returnValue = F("Bartlmühlweg");
        break;
    }
    case 49399:
    {
        returnValue = F("Bartloffer Stieg");
        break;
    }
    case 49400:
    {
        returnValue = F("Bartloffer Weg");
        break;
    }
    case 49401:
    {
        returnValue = F("Bartlweg");
        break;
    }
    case 49402:
    {
        returnValue = F("Bartmannsholter Str.");
        break;
    }
    case 49403:
    {
        returnValue = F("Bartmannstr.");
        break;
    }
    case 49404:
    {
        returnValue = F("Bartmannsweg");
        break;
    }
    case 49405:
    {
        returnValue = F("Bartnelkenweg");
        break;
    }
    case 49406:
    {
        returnValue = F("Bartningstr.");
        break;
    }
    case 49407:
    {
        returnValue = F("Bartok-Weg");
        break;
    }
    case 49408:
    {
        returnValue = F("Bartokstr.");
        break;
    }
    case 49409:
    {
        returnValue = F("Bartokweg");
        break;
    }
    case 49410:
    {
        returnValue = F("Bartold-Asendorpf-Str.");
        break;
    }
    case 49411:
    {
        returnValue = F("Bartold-Kastrop-Str.");
        break;
    }
    case 49412:
    {
        returnValue = F("Bartold-Knaust-Str.");
        break;
    }
    case 49413:
    {
        returnValue = F("Bartoldusstr.");
        break;
    }
    case 49414:
    {
        returnValue = F("Bartolfelder Str.");
        break;
    }
    case 49415:
    {
        returnValue = F("Bartolomaestr.");
        break;
    }
    case 49416:
    {
        returnValue = F("Bartolt-Kastrop-Weg");
        break;
    }
    case 49417:
    {
        returnValue = F("Bartschendorfer Str.");
        break;
    }
    case 49418:
    {
        returnValue = F("Bartscher Weg");
        break;
    }
    case 49419:
    {
        returnValue = F("Bartscherstr.");
        break;
    }
    case 49420:
    {
        returnValue = F("Bartshauser Str.");
        break;
    }
    case 49421:
    {
        returnValue = F("Bartshauser Weg");
        break;
    }
    case 49422:
    {
        returnValue = F("Bartshäuser Str.");
        break;
    }
    case 49423:
    {
        returnValue = F("Bartshäuser Turm");
        break;
    }
    case 49424:
    {
        returnValue = F("Bartsweiler");
        break;
    }
    case 49425:
    {
        returnValue = F("Bartweg");
        break;
    }
    case 49426:
    {
        returnValue = F("Bartzheide");
        break;
    }
    case 49427:
    {
        returnValue = F("Bartzweg");
        break;
    }
    case 49428:
    {
        returnValue = F("Bartäcker");
        break;
    }
    case 49429:
    {
        returnValue = F("Bartókstr.");
        break;
    }
    case 49430:
    {
        returnValue = F("Baruch-Baschwitz-Platz");
        break;
    }
    case 49431:
    {
        returnValue = F("Barumer Hagen");
        break;
    }
    case 49432:
    {
        returnValue = F("Barumer Str.");
        break;
    }
    case 49433:
    {
        returnValue = F("Barumser Weg");
        break;
    }
    case 49434:
    {
        returnValue = F("Barumstr.");
        break;
    }
    case 49435:
    {
        returnValue = F("Baruther Chaussee");
        break;
    }
    case 49436:
    {
        returnValue = F("Baruther Landstr.");
        break;
    }
    case 49437:
    {
        returnValue = F("Baruther Str.");
        break;
    }
    case 49438:
    {
        returnValue = F("Baruther Tor");
        break;
    }
    case 49439:
    {
        returnValue = F("Baruther Vorstadt");
        break;
    }
    case 49440:
    {
        returnValue = F("Baruther Weg");
        break;
    }
    case 49441:
    {
        returnValue = F("Barver Str.");
        break;
    }
    case 49442:
    {
        returnValue = F("Barwarder Weken");
        break;
    }
    case 49443:
    {
        returnValue = F("Barwedeler Str.");
        break;
    }
    case 49444:
    {
        returnValue = F("Barwedeler Weg");
        break;
    }
    case 49445:
    {
        returnValue = F("Barweg");
        break;
    }
    case 49446:
    {
        returnValue = F("Barwegskoppel");
        break;
    }
    case 49447:
    {
        returnValue = F("Barweilerstr.");
        break;
    }
    case 49448:
    {
        returnValue = F("Barwersweg");
        break;
    }
    case 49449:
    {
        returnValue = F("Barwoeste");
        break;
    }
    case 49450:
    {
        returnValue = F("Barytweg");
        break;
    }
    case 49451:
    {
        returnValue = F("Barz");
        break;
    }
    case 49452:
    {
        returnValue = F("Barzengasse");
        break;
    }
    case 49453:
    {
        returnValue = F("Barzheimer Str.");
        break;
    }
    case 49454:
    {
        returnValue = F("Barßeler Str.");
        break;
    }
    case 49455:
    {
        returnValue = F("Basaltbrücke");
        break;
    }
    case 49456:
    {
        returnValue = F("Basaltinstr.");
        break;
    }
    case 49457:
    {
        returnValue = F("Basaltrail light");
        break;
    }
    case 49458:
    {
        returnValue = F("Basaltring");
        break;
    }
    case 49459:
    {
        returnValue = F("Basaltstr.");
        break;
    }
    case 49460:
    {
        returnValue = F("Basalttrail light");
        break;
    }
    case 49461:
    {
        returnValue = F("Basaltweg");
        break;
    }
    case 49462:
    {
        returnValue = F("Basaltwerk");
        break;
    }
    case 49463:
    {
        returnValue = F("Basaltwerkstr.");
        break;
    }
    case 49464:
    {
        returnValue = F("Basankwitzer Str.");
        break;
    }
    case 49465:
    {
        returnValue = F("Basbecker Str.");
        break;
    }
    case 49466:
    {
        returnValue = F("Basberger Weg");
        break;
    }
    case 49467:
    {
        returnValue = F("Basbergstr.");
        break;
    }
    case 49468:
    {
        returnValue = F("Baschenberg");
        break;
    }
    case 49469:
    {
        returnValue = F("Baschenbühlweg");
        break;
    }
    case 49470:
    {
        returnValue = F("Baschgweg");
        break;
    }
    case 49471:
    {
        returnValue = F("Baschianstr.");
        break;
    }
    case 49472:
    {
        returnValue = F("Baschnagelhof");
        break;
    }
    case 49473:
    {
        returnValue = F("Baschtiackerweg");
        break;
    }
    case 49474:
    {
        returnValue = F("Baschäcker");
        break;
    }
    case 49475:
    {
        returnValue = F("Baschützer Str.");
        break;
    }
    case 49476:
    {
        returnValue = F("Basdahler Str.");
        break;
    }
    case 49477:
    {
        returnValue = F("Basdahler Weg");
        break;
    }
    case 49478:
    {
        returnValue = F("Basdorfer Hauptstr.");
        break;
    }
    case 49479:
    {
        returnValue = F("Basdorfer Str.");
        break;
    }
    case 49480:
    {
        returnValue = F("Basdorfer Wiesenpark");
        break;
    }
    case 49481:
    {
        returnValue = F("Basedow-Höhe");
        break;
    }
    case 49482:
    {
        returnValue = F("Basedower Str.");
        break;
    }
    case 49483:
    {
        returnValue = F("Basedower Weg");
        break;
    }
    case 49484:
    {
        returnValue = F("Basedows Weg");
        break;
    }
    case 49485:
    {
        returnValue = F("Basedowstr.");
        break;
    }
    case 49486:
    {
        returnValue = F("Basedowweg");
        break;
    }
    case 49487:
    {
        returnValue = F("Baselblick");
        break;
    }
    case 49488:
    {
        returnValue = F("Baseler Platz");
        break;
    }
    case 49489:
    {
        returnValue = F("Baseler Str.");
        break;
    }
    case 49490:
    {
        returnValue = F("Baseler Weg");
        break;
    }
    case 49491:
    {
        returnValue = F("Baselstr.");
        break;
    }
    case 49492:
    {
        returnValue = F("Baselweg");
        break;
    }
    case 49493:
    {
        returnValue = F("Basenachstr.");
        break;
    }
    case 49494:
    {
        returnValue = F("Basenberg");
        break;
    }
    case 49495:
    {
        returnValue = F("Basepohl");
        break;
    }
    case 49496:
    {
        returnValue = F("Basepohler Str.");
        break;
    }
    case 49497:
    {
        returnValue = F("Baseuber");
        break;
    }
    case 49498:
    {
        returnValue = F("Basildonplatz");
        break;
    }
    case 49499:
    {
        returnValue = F("Basilikaplatz");
        break;
    }
    case 49500:
    {
        returnValue = F("Basilikastr.");
        break;
    }
    case 49501:
    {
        returnValue = F("Basilikumstr.");
        break;
    }
    case 49502:
    {
        returnValue = F("Basilikumweg");
        break;
    }
    case 49503:
    {
        returnValue = F("Basilius-Besler-Weg");
        break;
    }
    case 49504:
    {
        returnValue = F("Basilius-Sinner-Str.");
        break;
    }
    case 49505:
    {
        returnValue = F("Basillastr.");
        break;
    }
    case 49506:
    {
        returnValue = F("Basingstoker Ring");
        break;
    }
    case 49507:
    {
        returnValue = F("Basinusstr.");
        break;
    }
    case 49508:
    {
        returnValue = F("Basler Gässle");
        break;
    }
    case 49509:
    {
        returnValue = F("Basler Landstr.");
        break;
    }
    case 49510:
    {
        returnValue = F("Basler Str.");
        break;
    }
    case 49511:
    {
        returnValue = F("Basler Wanderweg");
        break;
    }
    case 49512:
    {
        returnValue = F("Basler Weg");
        break;
    }
    case 49513:
    {
        returnValue = F("Basler-Tor-Str.");
        break;
    }
    case 49514:
    {
        returnValue = F("Baslmühlweg");
        break;
    }
    case 49515:
    {
        returnValue = F("Basmecker Weg");
        break;
    }
    case 49516:
    {
        returnValue = F("Bass");
        break;
    }
    case 49517:
    {
        returnValue = F("Bass-Str.");
        break;
    }
    case 49518:
    {
        returnValue = F("Bassanostr.");
        break;
    }
    case 49519:
    {
        returnValue = F("Basse");
        break;
    }
    case 49520:
    {
        returnValue = F("Basse-Saane-Tal");
        break;
    }
    case 49521:
    {
        returnValue = F("Basselscheid");
        break;
    }
    case 49522:
    {
        returnValue = F("Basselscheider Str.");
        break;
    }
    case 49523:
    {
        returnValue = F("Bassenbrink");
        break;
    }
    case 49524:
    {
        returnValue = F("Bassenbusch");
        break;
    }
    case 49525:
    {
        returnValue = F("Bassendorf");
        break;
    }
    case 49526:
    {
        returnValue = F("Bassener Str.");
        break;
    }
    case 49527:
    {
        returnValue = F("Bassenfleth");
        break;
    }
    case 49528:
    {
        returnValue = F("Bassenflether Chaussee");
        break;
    }
    case 49529:
    {
        returnValue = F("Bassenheimer Str.");
        break;
    }
    case 49530:
    {
        returnValue = F("Bassenheimer Weg");
        break;
    }
    case 49531:
    {
        returnValue = F("Bassenreute");
        break;
    }
    case 49532:
    {
        returnValue = F("Bassens");
        break;
    }
    case 49533:
    {
        returnValue = F("Bassenser Str.");
        break;
    }
    case 49534:
    {
        returnValue = F("Bassental");
        break;
    }
    case 49535:
    {
        returnValue = F("Bassenwinkel");
        break;
    }
    case 49536:
    {
        returnValue = F("Basser Str.");
        break;
    }
    case 49537:
    {
        returnValue = F("Bassermann-Jordan-Str.");
        break;
    }
    case 49538:
    {
        returnValue = F("Bassermannstr.");
        break;
    }
    case 49539:
    {
        returnValue = F("Bassestr.");
        break;
    }
    case 49540:
    {
        returnValue = F("Bassettistr.");
        break;
    }
    case 49541:
    {
        returnValue = F("Bassewitz-Platz");
        break;
    }
    case 49542:
    {
        returnValue = F("Bassewitzstr.");
        break;
    }
    case 49543:
    {
        returnValue = F("Bassilastr.");
        break;
    }
    case 49544:
    {
        returnValue = F("Bassin");
        break;
    }
    case 49545:
    {
        returnValue = F("Bassinweg");
        break;
    }
    case 49546:
    {
        returnValue = F("Bassmerhoopweg");
        break;
    }
    case 49547:
    {
        returnValue = F("Bassower Str.");
        break;
    }
    case 49548:
    {
        returnValue = F("Bassower Weg");
        break;
    }
    case 49549:
    {
        returnValue = F("Bassumer Landstr.");
        break;
    }
    case 49550:
    {
        returnValue = F("Bassumer Str.");
        break;
    }
    case 49551:
    {
        returnValue = F("Bassumer Weg");
        break;
    }
    case 49552:
    {
        returnValue = F("Bast");
        break;
    }
    case 49553:
    {
        returnValue = F("Bastackerweg");
        break;
    }
    case 49554:
    {
        returnValue = F("Bastaer Str.");
        break;
    }
    case 49555:
    {
        returnValue = F("Bastaustr.");
        break;
    }
    case 49556:
    {
        returnValue = F("Bastegasse");
        break;
    }
    case 49557:
    {
        returnValue = F("Bastei");
        break;
    }
    case 49558:
    {
        returnValue = F("Basteibrücke");
        break;
    }
    case 49559:
    {
        returnValue = F("Basteigasse");
        break;
    }
    case 49560:
    {
        returnValue = F("Basteiplatz");
        break;
    }
    case 49561:
    {
        returnValue = F("Basteiring");
        break;
    }
    case 49562:
    {
        returnValue = F("Basteisteg");
        break;
    }
    case 49563:
    {
        returnValue = F("Basteistr.");
        break;
    }
    case 49564:
    {
        returnValue = F("Basteiweg");
        break;
    }
    case 49565:
    {
        returnValue = F("Bastelweg");
        break;
    }
    case 49566:
    {
        returnValue = F("Bastenauer Str.");
        break;
    }
    case 49567:
    {
        returnValue = F("Bastener Weg");
        break;
    }
    case 49568:
    {
        returnValue = F("Bastenhauser Str.");
        break;
    }
    case 49569:
    {
        returnValue = F("Bastenstr.");
        break;
    }
    case 49570:
    {
        returnValue = F("Basterberg");
        break;
    }
    case 49571:
    {
        returnValue = F("Bastersteichstr.");
        break;
    }
    case 49572:
    {
        returnValue = F("Bastertweg");
        break;
    }
    case 49573:
    {
        returnValue = F("Bastes Fichtenweg");
        break;
    }
    case 49574:
    {
        returnValue = F("Bastesiedlung");
        break;
    }
    case 49575:
    {
        returnValue = F("Bastfelder Weg");
        break;
    }
    case 49576:
    {
        returnValue = F("Bastgartenstr.");
        break;
    }
    case 49577:
    {
        returnValue = F("Basthauptweg");
        break;
    }
    case 49578:
    {
        returnValue = F("Bastheimer Str.");
        break;
    }
    case 49579:
    {
        returnValue = F("Bastholzweg");
        break;
    }
    case 49580:
    {
        returnValue = F("Basthorster Weg");
        break;
    }
    case 49581:
    {
        returnValue = F("Bastian-Gugel-Str.");
        break;
    }
    case 49582:
    {
        returnValue = F("Bastianskotten");
        break;
    }
    case 49583:
    {
        returnValue = F("Bastianstr.");
        break;
    }
    case 49584:
    {
        returnValue = F("Bastiansweg");
        break;
    }
    case 49585:
    {
        returnValue = F("Bastianweg");
        break;
    }
    case 49586:
    {
        returnValue = F("Bastion");
        break;
    }
    case 49587:
    {
        returnValue = F("Bastion Martin");
        break;
    }
    case 49588:
    {
        returnValue = F("Bastion Philipp");
        break;
    }
    case 49589:
    {
        returnValue = F("Bastionstr.");
        break;
    }
    case 49590:
    {
        returnValue = F("Bastlohkamp");
        break;
    }
    case 49591:
    {
        returnValue = F("Bastmarkt");
        break;
    }
    case 49592:
    {
        returnValue = F("Bastogne City");
        break;
    }
    case 49593:
    {
        returnValue = F("Bastonhöftweg");
        break;
    }
    case 49594:
    {
        returnValue = F("Bastopweg");
        break;
    }
    case 49595:
    {
        returnValue = F("Bastorfer Landweg");
        break;
    }
    case 49596:
    {
        returnValue = F("Bastorfer Weg");
        break;
    }
    case 49597:
    {
        returnValue = F("Bastorpstr.");
        break;
    }
    case 49598:
    {
        returnValue = F("Baststr.");
        break;
    }
    case 49599:
    {
        returnValue = F("Bastwaldallee");
        break;
    }
    case 49600:
    {
        returnValue = F("Bastwaldstr.");
        break;
    }
    case 49601:
    {
        returnValue = F("Bastwaldweg");
        break;
    }
    case 49602:
    {
        returnValue = F("Bastweg");
        break;
    }
    case 49603:
    {
        returnValue = F("Bataillonsweg");
        break;
    }
    case 49604:
    {
        returnValue = F("Bataszekstr.");
        break;
    }
    case 49605:
    {
        returnValue = F("Bataverstr.");
        break;
    }
    case 49606:
    {
        returnValue = F("Bataverweg");
        break;
    }
    case 49607:
    {
        returnValue = F("Bataviaweg");
        break;
    }
    case 49608:
    {
        returnValue = F("Bateler Weg");
        break;
    }
    case 49609:
    {
        returnValue = F("Batenbrockstr.");
        break;
    }
    case 49610:
    {
        returnValue = F("Batenburgstr.");
        break;
    }
    case 49611:
    {
        returnValue = F("Batenhorster Str.");
        break;
    }
    case 49612:
    {
        returnValue = F("Batenhorstweg");
        break;
    }
    case 49613:
    {
        returnValue = F("Batenkenweg");
        break;
    }
    case 49614:
    {
        returnValue = F("Batensen");
        break;
    }
    case 49615:
    {
        returnValue = F("Batestr.");
        break;
    }
    case 49616:
    {
        returnValue = F("Batheweg");
        break;
    }
    case 49617:
    {
        returnValue = F("Batheyweg");
        break;
    }
    case 49618:
    {
        returnValue = F("Bathgartenweg");
        break;
    }
    case 49619:
    {
        returnValue = F("Bathildisstr.");
        break;
    }
    case 49620:
    {
        returnValue = F("Bathmener Str.");
        break;
    }
    case 49621:
    {
        returnValue = F("Bathorner Diek");
        break;
    }
    case 49622:
    {
        returnValue = F("Bathorner Siedlung");
        break;
    }
    case 49623:
    {
        returnValue = F("Bathorner Str.");
        break;
    }
    case 49624:
    {
        returnValue = F("Bathwiesenweg");
        break;
    }
    case 49625:
    {
        returnValue = F("Batjerie");
        break;
    }
    case 49626:
    {
        returnValue = F("Batschenhofer Str.");
        break;
    }
    case 49627:
    {
        returnValue = F("Batschkaer Str.");
        break;
    }
    case 49628:
    {
        returnValue = F("Batschkaer Weg");
        break;
    }
    case 49629:
    {
        returnValue = F("Batschkastr.");
        break;
    }
    case 49630:
    {
        returnValue = F("Batschkaweg");
        break;
    }
    case 49631:
    {
        returnValue = F("Batschweiler");
        break;
    }
    case 49632:
    {
        returnValue = F("Battaglia Str.");
        break;
    }
    case 49633:
    {
        returnValue = F("Battauner Hauptstr.");
        break;
    }
    case 49634:
    {
        returnValue = F("Battauner Str.");
        break;
    }
    case 49635:
    {
        returnValue = F("Battauner Weg");
        break;
    }
    case 49636:
    {
        returnValue = F("Battelsweg");
        break;
    }
    case 49637:
    {
        returnValue = F("Battenbachweg");
        break;
    }
    case 49638:
    {
        returnValue = F("Battenberger Str.");
        break;
    }
    case 49639:
    {
        returnValue = F("Battenberger Weg");
        break;
    }
    case 49640:
    {
        returnValue = F("Battenbergstr.");
        break;
    }
    case 49641:
    {
        returnValue = F("Battenbühlstr.");
        break;
    }
    case 49642:
    {
        returnValue = F("Battenhäuser Weg");
        break;
    }
    case 49643:
    {
        returnValue = F("Battensteinstr.");
        break;
    }
    case 49644:
    {
        returnValue = F("Battentor");
        break;
    }
    case 49645:
    {
        returnValue = F("Battenweg");
        break;
    }
    case 49646:
    {
        returnValue = F("Battereigasse");
        break;
    }
    case 49647:
    {
        returnValue = F("Batterie");
        break;
    }
    case 49648:
    {
        returnValue = F("Batteriegasse");
        break;
    }
    case 49649:
    {
        returnValue = F("Batteriegelände");
        break;
    }
    case 49650:
    {
        returnValue = F("Batterieschneise");
        break;
    }
    case 49651:
    {
        returnValue = F("Batteriesteig");
        break;
    }
    case 49652:
    {
        returnValue = F("Batteriestr.");
        break;
    }
    case 49653:
    {
        returnValue = F("Batterieweg");
        break;
    }
    case 49654:
    {
        returnValue = F("Battermanns Busch");
        break;
    }
    case 49655:
    {
        returnValue = F("Battertstr.");
        break;
    }
    case 49656:
    {
        returnValue = F("Battertweg");
        break;
    }
    case 49657:
    {
        returnValue = F("Batteurstr.");
        break;
    }
    case 49658:
    {
        returnValue = F("Battgendorfer Str.");
        break;
    }
    case 49659:
    {
        returnValue = F("Battin");
        break;
    }
    case 49660:
    {
        returnValue = F("Battin Ausbau");
        break;
    }
    case 49661:
    {
        returnValue = F("Battinsthaler Str.");
        break;
    }
    case 49662:
    {
        returnValue = F("Battinsthaler Weg");
        break;
    }
    case 49663:
    {
        returnValue = F("Battistiweg");
        break;
    }
    case 49664:
    {
        returnValue = F("Battnerstr.");
        break;
    }
    case 49665:
    {
        returnValue = F("Battonnstr.");
        break;
    }
    case 49666:
    {
        returnValue = F("Battstr.");
        break;
    }
    case 49667:
    {
        returnValue = F("Battstubenweg");
        break;
    }
    case 49668:
    {
        returnValue = F("Battstübleweg");
        break;
    }
    case 49669:
    {
        returnValue = F("Battweilerstr.");
        break;
    }
    case 49670:
    {
        returnValue = F("Batweiler-Niederhausen");
        break;
    }
    case 49671:
    {
        returnValue = F("Batz Strauch");
        break;
    }
    case 49672:
    {
        returnValue = F("Batzackerweg");
        break;
    }
    case 49673:
    {
        returnValue = F("Batzbachstr.");
        break;
    }
    case 49674:
    {
        returnValue = F("Batzenbaumweg");
        break;
    }
    case 49675:
    {
        returnValue = F("Batzenbergstr.");
        break;
    }
    case 49676:
    {
        returnValue = F("Batzenbergweg");
        break;
    }
    case 49677:
    {
        returnValue = F("Batzengasse");
        break;
    }
    case 49678:
    {
        returnValue = F("Batzenhofer Str.");
        break;
    }
    case 49679:
    {
        returnValue = F("Batzenhofweg");
        break;
    }
    case 49680:
    {
        returnValue = F("Batzenhäuselweg");
        break;
    }
    case 49681:
    {
        returnValue = F("Batzenhäusle");
        break;
    }
    case 49682:
    {
        returnValue = F("Batzensteg");
        break;
    }
    case 49683:
    {
        returnValue = F("Batzenweg");
        break;
    }
    case 49684:
    {
        returnValue = F("Batzerhangstr.");
        break;
    }
    case 49685:
    {
        returnValue = F("Batzhauser Weg");
        break;
    }
    case 49686:
    {
        returnValue = F("Batzkuhler Weg");
        break;
    }
    case 49687:
    {
        returnValue = F("Batzlower Dorfstr.");
        break;
    }
    case 49688:
    {
        returnValue = F("Batzlower Hauptstr.");
        break;
    }
    case 49689:
    {
        returnValue = F("Batzlower Mühlenweg");
        break;
    }
    case 49690:
    {
        returnValue = F("Batzweg");
        break;
    }
    case 49691:
    {
        returnValue = F("Bau");
        break;
    }
    case 49692:
    {
        returnValue = F("Bauberg");
        break;
    }
    case 49693:
    {
        returnValue = F("Bauberger Str.");
        break;
    }
    case 49694:
    {
        returnValue = F("Baubergerstr.");
        break;
    }
    case 49695:
    {
        returnValue = F("Baubergstr.");
        break;
    }
    case 49696:
    {
        returnValue = F("Bauchbaumweg");
        break;
    }
    case 49697:
    {
        returnValue = F("Bauchemer Gracht");
        break;
    }
    case 49698:
    {
        returnValue = F("Bauchgasse");
        break;
    }
    case 49699:
    {
        returnValue = F("Bauchhalde");
        break;
    }
    case 49700:
    {
        returnValue = F("Bauchwarzweg");
        break;
    }
    case 49701:
    {
        returnValue = F("Bauchwitzstr.");
        break;
    }
    case 49702:
    {
        returnValue = F("Bauchäckerstr.");
        break;
    }
    case 49703:
    {
        returnValue = F("Bauciusstr.");
        break;
    }
    case 49704:
    {
        returnValue = F("Bauckstr.");
        break;
    }
    case 49705:
    {
        returnValue = F("Baudaer Hauptstr.");
        break;
    }
    case 49706:
    {
        returnValue = F("Baudaer Str.");
        break;
    }
    case 49707:
    {
        returnValue = F("Baudaer Weg");
        break;
    }
    case 49708:
    {
        returnValue = F("Baudenhardtweg");
        break;
    }
    case 49709:
    {
        returnValue = F("Baudenstr.");
        break;
    }
    case 49710:
    {
        returnValue = F("Baudenweg");
        break;
    }
    case 49711:
    {
        returnValue = F("Baudirektor-Hahn-Str.");
        break;
    }
    case 49712:
    {
        returnValue = F("Baudissinstr.");
        break;
    }
    case 49713:
    {
        returnValue = F("Baudissinweg");
        break;
    }
    case 49714:
    {
        returnValue = F("Baudorf");
        break;
    }
    case 49715:
    {
        returnValue = F("Baudrexelstr.");
        break;
    }
    case 49716:
    {
        returnValue = F("Baudriplatz");
        break;
    }
    case 49717:
    {
        returnValue = F("Baudräxlweg");
        break;
    }
    case 49718:
    {
        returnValue = F("Bauenbergweg");
        break;
    }
    case 49719:
    {
        returnValue = F("Bauengehäge");
        break;
    }
    case 49720:
    {
        returnValue = F("Bauenrott");
        break;
    }
    case 49721:
    {
        returnValue = F("Bauer Landstr.");
        break;
    }
    case 49722:
    {
        returnValue = F("Bauer Lehmanns Hof");
        break;
    }
    case 49723:
    {
        returnValue = F("Bauer-Damm");
        break;
    }
    case 49724:
    {
        returnValue = F("Bauer-Denkmal");
        break;
    }
    case 49725:
    {
        returnValue = F("Bauer-Kilian-Weg");
        break;
    }
    case 49726:
    {
        returnValue = F("Bauer-Mecke-Weg");
        break;
    }
    case 49727:
    {
        returnValue = F("Bauer-Steg");
        break;
    }
    case 49728:
    {
        returnValue = F("Baueracker");
        break;
    }
    case 49729:
    {
        returnValue = F("Bauerbacher Pfad");
        break;
    }
    case 49730:
    {
        returnValue = F("Bauerbacher Str.");
        break;
    }
    case 49731:
    {
        returnValue = F("Bauerbachstr.");
        break;
    }
    case 49732:
    {
        returnValue = F("Bauerberg");
        break;
    }
    case 49733:
    {
        returnValue = F("Bauerbrinker Str.");
        break;
    }
    case 49734:
    {
        returnValue = F("Bauerbruch");
        break;
    }
    case 49735:
    {
        returnValue = F("Bauerbrücke");
        break;
    }
    case 49736:
    {
        returnValue = F("Bauereißweg");
        break;
    }
    case 49737:
    {
        returnValue = F("Bauerfeindallee");
        break;
    }
    case 49738:
    {
        returnValue = F("Bauerfeld");
        break;
    }
    case 49739:
    {
        returnValue = F("Bauergarten");
        break;
    }
    case 49740:
    {
        returnValue = F("Bauergasse");
        break;
    }
    case 49741:
    {
        returnValue = F("Bauergraben");
        break;
    }
    case 49742:
    {
        returnValue = F("Bauerhausener Weg");
        break;
    }
    case 49743:
    {
        returnValue = F("Bauerheide");
        break;
    }
    case 49744:
    {
        returnValue = F("Bauerhof");
        break;
    }
    case 49745:
    {
        returnValue = F("Bauerholz");
        break;
    }
    case 49746:
    {
        returnValue = F("Bauerholzstr.");
        break;
    }
    case 49747:
    {
        returnValue = F("Bauerholzweg");
        break;
    }
    case 49748:
    {
        returnValue = F("Bauerkamp");
        break;
    }
    case 49749:
    {
        returnValue = F("Bauerkampstr.");
        break;
    }
    case 49750:
    {
        returnValue = F("Bauerkuhler Str.");
        break;
    }
    case 49751:
    {
        returnValue = F("Bauerkuhler Weg");
        break;
    }
    case 49752:
    {
        returnValue = F("Bauerland");
        break;
    }
    case 49753:
    {
        returnValue = F("Bauerlandweg");
        break;
    }
    case 49754:
    {
        returnValue = F("Bauerlegden");
        break;
    }
    case 49755:
    {
        returnValue = F("Bauermannskulle");
        break;
    }
    case 49756:
    {
        returnValue = F("Bauermeisterplatz");
        break;
    }
    case 49757:
    {
        returnValue = F("Bauermeisterstr.");
        break;
    }
    case 49758:
    {
        returnValue = F("Bauermeisterwinkel");
        break;
    }
    case 49759:
    {
        returnValue = F("Bauernackerweg");
        break;
    }
    case 49760:
    {
        returnValue = F("Bauernallee");
        break;
    }
    case 49761:
    {
        returnValue = F("Bauernanger");
        break;
    }
    case 49762:
    {
        returnValue = F("Bauernberg");
        break;
    }
    case 49763:
    {
        returnValue = F("Bauernberger Str.");
        break;
    }
    case 49764:
    {
        returnValue = F("Bauernbergweg");
        break;
    }
    case 49765:
    {
        returnValue = F("Bauernbreite");
        break;
    }
    case 49766:
    {
        returnValue = F("Bauernbrink");
        break;
    }
    case 49767:
    {
        returnValue = F("Bauernbruch");
        break;
    }
    case 49768:
    {
        returnValue = F("Bauernbräustr.");
        break;
    }
    case 49769:
    {
        returnValue = F("Bauernbrücke");
        break;
    }
    case 49770:
    {
        returnValue = F("Bauerndamm");
        break;
    }
    case 49771:
    {
        returnValue = F("Bauerndobben");
        break;
    }
    case 49772:
    {
        returnValue = F("Bauerndoktor-Gros-Str.");
        break;
    }
    case 49773:
    {
        returnValue = F("Bauerndorf");
        break;
    }
    case 49774:
    {
        returnValue = F("Bauerneck");
        break;
    }
    case 49775:
    {
        returnValue = F("Bauernecke");
        break;
    }
    case 49776:
    {
        returnValue = F("Bauernende");
        break;
    }
    case 49777:
    {
        returnValue = F("Bauernerde");
        break;
    }
    case 49778:
    {
        returnValue = F("Bauernfeind-Str.");
        break;
    }
    case 49779:
    {
        returnValue = F("Bauernfeindstr.");
        break;
    }
    case 49780:
    {
        returnValue = F("Bauernfeld");
        break;
    }
    case 49781:
    {
        returnValue = F("Bauernfeldallee");
        break;
    }
    case 49782:
    {
        returnValue = F("Bauernfeldstr.");
        break;
    }
    case 49783:
    {
        returnValue = F("Bauernfeldweg");
        break;
    }
    case 49784:
    {
        returnValue = F("Bauernfestweg");
        break;
    }
    case 49785:
    {
        returnValue = F("Bauerngarten");
        break;
    }
    case 49786:
    {
        returnValue = F("Bauerngarten Eberstadt");
        break;
    }
    case 49787:
    {
        returnValue = F("Bauerngarten mit Streuobstwiese in Lorup");
        break;
    }
    case 49788:
    {
        returnValue = F("Bauerngartenstr.");
        break;
    }
    case 49789:
    {
        returnValue = F("Bauerngasse");
        break;
    }
    case 49790:
    {
        returnValue = F("Bauerngehäge");
        break;
    }
    case 49791:
    {
        returnValue = F("Bauerngolf");
        break;
    }
    case 49792:
    {
        returnValue = F("Bauerngrabenstr.");
        break;
    }
    case 49793:
    {
        returnValue = F("Bauerngrabenweg");
        break;
    }
    case 49794:
    {
        returnValue = F("Bauerngrünstr.");
        break;
    }
    case 49795:
    {
        returnValue = F("Bauerngut");
        break;
    }
    case 49796:
    {
        returnValue = F("Bauerngärtenweg");
        break;
    }
    case 49797:
    {
        returnValue = F("Bauernhagweg");
        break;
    }
    case 49798:
    {
        returnValue = F("Bauernhausmuseum Amerang");
        break;
    }
    case 49799:
    {
        returnValue = F("Bauernhausmusseum");
        break;
    }
    case 49800:
    {
        returnValue = F("Bauernhauweg");
        break;
    }
    case 49801:
    {
        returnValue = F("Bauernhecke");
        break;
    }
    case 49802:
    {
        returnValue = F("Bauernheide");
        break;
    }
    case 49803:
    {
        returnValue = F("Bauernheimer Weg");
        break;
    }
    case 49804:
    {
        returnValue = F("Bauernheuweg");
        break;
    }
    case 49805:
    {
        returnValue = F("Bauernhof");
        break;
    }
    case 49806:
    {
        returnValue = F("Bauernhofstr.");
        break;
    }
    case 49807:
    {
        returnValue = F("Bauernhofweg");
        break;
    }
    case 49808:
    {
        returnValue = F("Bauernholz");
        break;
    }
    case 49809:
    {
        returnValue = F("Bauernholzweg");
        break;
    }
    case 49810:
    {
        returnValue = F("Bauernhäulesweg");
        break;
    }
    case 49811:
    {
        returnValue = F("Bauernhöhe");
        break;
    }
    case 49812:
    {
        returnValue = F("Bauernhörne");
        break;
    }
    case 49813:
    {
        returnValue = F("Bauernhütte");
        break;
    }
    case 49814:
    {
        returnValue = F("Bauernjörgstr.");
        break;
    }
    case 49815:
    {
        returnValue = F("Bauernjörgweg");
        break;
    }
    case 49816:
    {
        returnValue = F("Bauernkamp");
        break;
    }
    case 49817:
    {
        returnValue = F("Bauernkampstr.");
        break;
    }
    case 49818:
    {
        returnValue = F("Bauernlinde");
        break;
    }
    case 49819:
    {
        returnValue = F("Bauernmarktchaussee");
        break;
    }
    case 49820:
    {
        returnValue = F("Bauernmarschweg");
        break;
    }
    case 49821:
    {
        returnValue = F("Bauernmoor");
        break;
    }
    case 49822:
    {
        returnValue = F("Bauernpfad");
        break;
    }
    case 49823:
    {
        returnValue = F("Bauernpfadstr.");
        break;
    }
    case 49824:
    {
        returnValue = F("Bauernpriel");
        break;
    }
    case 49825:
    {
        returnValue = F("Bauernredder");
        break;
    }
    case 49826:
    {
        returnValue = F("Bauernreihe");
        break;
    }
    case 49827:
    {
        returnValue = F("Bauernrieder Str.");
        break;
    }
    case 49828:
    {
        returnValue = F("Bauernrieder Weg");
        break;
    }
    case 49829:
    {
        returnValue = F("Bauernriedweg");
        break;
    }
    case 49830:
    {
        returnValue = F("Bauernring");
        break;
    }
    case 49831:
    {
        returnValue = F("Bauernrosenweg");
        break;
    }
    case 49832:
    {
        returnValue = F("Bauernschaftskrug");
        break;
    }
    case 49833:
    {
        returnValue = F("Bauernschaftsweg");
        break;
    }
    case 49834:
    {
        returnValue = F("Bauernscheuer");
        break;
    }
    case 49835:
    {
        returnValue = F("Bauernschlag");
        break;
    }
    case 49836:
    {
        returnValue = F("Bauernschmidweg");
        break;
    }
    case 49837:
    {
        returnValue = F("Bauernschmiedweg");
        break;
    }
    case 49838:
    {
        returnValue = F("Bauernschöttgen");
        break;
    }
    case 49839:
    {
        returnValue = F("Bauernsee");
        break;
    }
    case 49840:
    {
        returnValue = F("Bauernseestr.");
        break;
    }
    case 49841:
    {
        returnValue = F("Bauernseite");
        break;
    }
    case 49842:
    {
        returnValue = F("Bauernsiedlung");
        break;
    }
    case 49843:
    {
        returnValue = F("Bauernsiedlung Möllendorf");
        break;
    }
    case 49844:
    {
        returnValue = F("Bauernsiek");
        break;
    }
    case 49845:
    {
        returnValue = F("Bauernsteig");
        break;
    }
    case 49846:
    {
        returnValue = F("Bauernstein");
        break;
    }
    case 49847:
    {
        returnValue = F("Bauernsteinsiedlung");
        break;
    }
    case 49848:
    {
        returnValue = F("Bauernsteinstr.");
        break;
    }
    case 49849:
    {
        returnValue = F("Bauernstieg");
        break;
    }
    case 49850:
    {
        returnValue = F("Bauernstr.");
        break;
    }
    case 49851:
    {
        returnValue = F("Bauernstr. Schladebach");
        break;
    }
    case 49852:
    {
        returnValue = F("Bauernstücke");
        break;
    }
    case 49853:
    {
        returnValue = F("Bauerntannen");
        break;
    }
    case 49854:
    {
        returnValue = F("Bauerntanzgasse");
        break;
    }
    case 49855:
    {
        returnValue = F("Bauerntanzgäßchen");
        break;
    }
    case 49856:
    {
        returnValue = F("Bauerntor");
        break;
    }
    case 49857:
    {
        returnValue = F("Bauerntrift");
        break;
    }
    case 49858:
    {
        returnValue = F("Bauerntränke");
        break;
    }
    case 49859:
    {
        returnValue = F("Bauernvogtei");
        break;
    }
    case 49860:
    {
        returnValue = F("Bauernvogtredder");
        break;
    }
    case 49861:
    {
        returnValue = F("Bauernvogtskoppel");
        break;
    }
    case 49862:
    {
        returnValue = F("Bauernvogtsweg");
        break;
    }
    case 49863:
    {
        returnValue = F("Bauernwald");
        break;
    }
    case 49864:
    {
        returnValue = F("Bauernwaldstr.");
        break;
    }
    case 49865:
    {
        returnValue = F("Bauernwaldweg");
        break;
    }
    case 49866:
    {
        returnValue = F("Bauernwall");
        break;
    }
    case 49867:
    {
        returnValue = F("Bauernwand");
        break;
    }
    case 49868:
    {
        returnValue = F("Bauernweg");
        break;
    }
    case 49869:
    {
        returnValue = F("Bauernweide");
        break;
    }
    case 49870:
    {
        returnValue = F("Bauernwiese");
        break;
    }
    case 49871:
    {
        returnValue = F("Bauernwiesenschneise");
        break;
    }
    case 49872:
    {
        returnValue = F("Bauernwiesenstr.");
        break;
    }
    case 49873:
    {
        returnValue = F("Bauernwiesenweg");
        break;
    }
    case 49874:
    {
        returnValue = F("Bauernwiesestr.");
        break;
    }
    case 49875:
    {
        returnValue = F("Bauernwinkel");
        break;
    }
    case 49876:
    {
        returnValue = F("Bauernwoogstr.");
        break;
    }
    case 49877:
    {
        returnValue = F("Bauernworth");
        break;
    }
    case 49878:
    {
        returnValue = F("Bauernwäldle");
        break;
    }
    case 49879:
    {
        returnValue = F("Bauerrichterweg");
        break;
    }
    case 49880:
    {
        returnValue = F("Bauers Hof");
        break;
    }
    case 49881:
    {
        returnValue = F("Bauersacker");
        break;
    }
    case 49882:
    {
        returnValue = F("Bauersbach");
        break;
    }
    case 49883:
    {
        returnValue = F("Bauersberg");
        break;
    }
    case 49884:
    {
        returnValue = F("Bauersberger Hohle");
        break;
    }
    case 49885:
    {
        returnValue = F("Bauersberger Str.");
        break;
    }
    case 49886:
    {
        returnValue = F("Bauersbergstr.");
        break;
    }
    case 49887:
    {
        returnValue = F("Bauerschaft");
        break;
    }
    case 49888:
    {
        returnValue = F("Bauerschaft Düstrup");
        break;
    }
    case 49889:
    {
        returnValue = F("Bauerschaft Hickingen");
        break;
    }
    case 49890:
    {
        returnValue = F("Bauerschaft Jeggen");
        break;
    }
    case 49891:
    {
        returnValue = F("Bauerschaft Kleinenkneten");
        break;
    }
    case 49892:
    {
        returnValue = F("Bauerschaft Lüstringen");
        break;
    }
    case 49893:
    {
        returnValue = F("Bauerschaft Voxtrup");
        break;
    }
    case 49894:
    {
        returnValue = F("Bauerschaftsstr.");
        break;
    }
    case 49895:
    {
        returnValue = F("Bauerschilz");
        break;
    }
    case 49896:
    {
        returnValue = F("Bauersfeldstr.");
        break;
    }
    case 49897:
    {
        returnValue = F("Bauersgarten");
        break;
    }
    case 49898:
    {
        returnValue = F("Bauersgasse");
        break;
    }
    case 49899:
    {
        returnValue = F("Bauersheimer Weg");
        break;
    }
    case 49900:
    {
        returnValue = F("Bauershof");
        break;
    }
    case 49901:
    {
        returnValue = F("Bauersmühle");
        break;
    }
    case 49902:
    {
        returnValue = F("Bauerstatt");
        break;
    }
    case 49903:
    {
        returnValue = F("Bauerstr.");
        break;
    }
    case 49904:
    {
        returnValue = F("Bauersweg");
        break;
    }
    case 49905:
    {
        returnValue = F("Bauerteich");
        break;
    }
    case 49906:
    {
        returnValue = F("Bauertstr.");
        break;
    }
    case 49907:
    {
        returnValue = F("Bauerweg");
        break;
    }
    case 49908:
    {
        returnValue = F("Bauerweiden");
        break;
    }
    case 49909:
    {
        returnValue = F("Bauerwiese");
        break;
    }
    case 49910:
    {
        returnValue = F("Bauerwinkel");
        break;
    }
    case 49911:
    {
        returnValue = F("Bauesfeld");
        break;
    }
    case 49912:
    {
        returnValue = F("Baueshof");
        break;
    }
    case 49913:
    {
        returnValue = F("Baueshütte");
        break;
    }
    case 49914:
    {
        returnValue = F("Baufnang");
        break;
    }
    case 49915:
    {
        returnValue = F("Baufnanger Str.");
        break;
    }
    case 49916:
    {
        returnValue = F("Baugasse");
        break;
    }
    case 49917:
    {
        returnValue = F("Baugebiet Auf der Linkworth III");
        break;
    }
    case 49918:
    {
        returnValue = F("Baugebiet Habichtspark");
        break;
    }
    case 49919:
    {
        returnValue = F("Baugebiet östlich Aldruper Damm");
        break;
    }
    case 49920:
    {
        returnValue = F("Baugenossenschaftsstr.");
        break;
    }
    case 49921:
    {
        returnValue = F("Baugerwies");
        break;
    }
    case 49922:
    {
        returnValue = F("Baugolfstr.");
        break;
    }
    case 49923:
    {
        returnValue = F("Baugrodenstr.");
        break;
    }
    case 49924:
    {
        returnValue = F("Baugulfstr.");
        break;
    }
    case 49925:
    {
        returnValue = F("Baugéstr.");
        break;
    }
    case 49926:
    {
        returnValue = F("Bauhauskamp");
        break;
    }
    case 49927:
    {
        returnValue = F("Bauhausplatz");
        break;
    }
    case 49928:
    {
        returnValue = F("Bauhausstiege");
        break;
    }
    case 49929:
    {
        returnValue = F("Bauhausstr.");
        break;
    }
    case 49930:
    {
        returnValue = F("Bauhausweg");
        break;
    }
    case 49931:
    {
        returnValue = F("Bauhof");
        break;
    }
    case 49932:
    {
        returnValue = F("Bauhofergasse");
        break;
    }
    case 49933:
    {
        returnValue = F("Bauhoferstr.");
        break;
    }
    case 49934:
    {
        returnValue = F("Bauhofgasse");
        break;
    }
    case 49935:
    {
        returnValue = F("Bauhofgäßchen");
        break;
    }
    case 49936:
    {
        returnValue = F("Bauhofring");
        break;
    }
    case 49937:
    {
        returnValue = F("Bauhofstr.");
        break;
    }
    case 49938:
    {
        returnValue = F("Bauhofwall");
        break;
    }
    case 49939:
    {
        returnValue = F("Bauhofweg");
        break;
    }
    case 49940:
    {
        returnValue = F("Bauholzrangen");
        break;
    }
    case 49941:
    {
        returnValue = F("Bauholzweg");
        break;
    }
    case 49942:
    {
        returnValue = F("Bauhöferstr.");
        break;
    }
    case 49943:
    {
        returnValue = F("Bauhüttenbrücke");
        break;
    }
    case 49944:
    {
        returnValue = F("Bauhüttenstr.");
        break;
    }
    case 49945:
    {
        returnValue = F("Bauhüttenweg");
        break;
    }
    case 49946:
    {
        returnValue = F("Baukamp");
        break;
    }
    case 49947:
    {
        returnValue = F("Baukampstr.");
        break;
    }
    case 49948:
    {
        returnValue = F("Baukauer Str.");
        break;
    }
    case 49949:
    {
        returnValue = F("Baukeler Str.");
        break;
    }
    case 49950:
    {
        returnValue = F("Baukelroder Weg");
        break;
    }
    case 49951:
    {
        returnValue = F("Baukelstr.");
        break;
    }
    case 49952:
    {
        returnValue = F("Baukeltergasse");
        break;
    }
    case 49953:
    {
        returnValue = F("Baukelweg");
        break;
    }
    case 49954:
    {
        returnValue = F("Baukenweg");
        break;
    }
    case 49955:
    {
        returnValue = F("Baukeweg");
        break;
    }
    case 49956:
    {
        returnValue = F("Baukey");
        break;
    }
    case 49957:
    {
        returnValue = F("Baukhorst");
        break;
    }
    case 49958:
    {
        returnValue = F("Baukloh");
        break;
    }
    case 49959:
    {
        returnValue = F("Bauklohstr.");
        break;
    }
    case 49960:
    {
        returnValue = F("Baukondukteur-Baumann-Allee");
        break;
    }
    case 49961:
    {
        returnValue = F("Baukreativstr.");
        break;
    }
    case 49962:
    {
        returnValue = F("Baukstrunk");
        break;
    }
    case 49963:
    {
        returnValue = F("Bauksweg");
        break;
    }
    case 49964:
    {
        returnValue = F("Baulandstr.");
        break;
    }
    case 49965:
    {
        returnValue = F("Baulandweg");
        break;
    }
    case 49966:
    {
        returnValue = F("Baulenwiese");
        break;
    }
    case 49967:
    {
        returnValue = F("Baulering");
        break;
    }
    case 49968:
    {
        returnValue = F("Baulert");
        break;
    }
    case 49969:
    {
        returnValue = F("Bauleuteweg");
        break;
    }
    case 49970:
    {
        returnValue = F("Bauleweg");
        break;
    }
    case 49971:
    {
        returnValue = F("Baulof");
        break;
    }
    case 49972:
    {
        returnValue = F("Baum");
        break;
    }
    case 49973:
    {
        returnValue = F("Baum & Zeit - Baumkronenpfad Beelitz-Heilstätten");
        break;
    }
    case 49974:
    {
        returnValue = F("Baum Schneise");
        break;
    }
    case 49975:
    {
        returnValue = F("Baum des Jahres Weg");
        break;
    }
    case 49976:
    {
        returnValue = F("Baum- und Gehölzweg");
        break;
    }
    case 49977:
    {
        returnValue = F("Baum-des-Jahres-Pfad");
        break;
    }
    case 49978:
    {
        returnValue = F("Baum-des-Jahres-Platz");
        break;
    }
    case 49979:
    {
        returnValue = F("Baumacker");
        break;
    }
    case 49980:
    {
        returnValue = F("Baumackerstr.");
        break;
    }
    case 49981:
    {
        returnValue = F("Baumackerweg");
        break;
    }
    case 49982:
    {
        returnValue = F("Baumallee");
        break;
    }
    case 49983:
    {
        returnValue = F("Baumallee entlang der Acher");
        break;
    }
    case 49984:
    {
        returnValue = F("Baumanger");
        break;
    }
    case 49985:
    {
        returnValue = F("Baumannbrücke");
        break;
    }
    case 49986:
    {
        returnValue = F("Baumanngasse");
        break;
    }
    case 49987:
    {
        returnValue = F("Baumannshof");
        break;
    }
    case 49988:
    {
        returnValue = F("Baumannshöhlenweg");
        break;
    }
    case 49989:
    {
        returnValue = F("Baumannskamp");
        break;
    }
    case 49990:
    {
        returnValue = F("Baumannstr.");
        break;
    }
    case 49991:
    {
        returnValue = F("Baumannweg");
        break;
    }
    case 49992:
    {
        returnValue = F("Baumarktstr.");
        break;
    }
    case 49993:
    {
        returnValue = F("Baumbach");
        break;
    }
    case 49994:
    {
        returnValue = F("Baumbacher Str.");
        break;
    }
    case 49995:
    {
        returnValue = F("Baumbacherstr.");
        break;
    }
    case 49996:
    {
        returnValue = F("Baumbachstr.");
        break;
    }
    case 49997:
    {
        returnValue = F("Baumbachweg");
        break;
    }
    case 49998:
    {
        returnValue = F("Baumberg");
        break;
    }
    case 49999:
    {
        returnValue = F("Baumbergeblick");
        break;
    }
    case 50000:
    {
        returnValue = F("Baumberger Chaussee");
        break;
    }
    case 50001:
    {
        returnValue = F("Baumberger Str.");
        break;
    }
    case 50002:
    {
        returnValue = F("Baumberger Weg");
        break;
    }
    case 50003:
    {
        returnValue = F("Baumbergstr.");
        break;
    }
    case 50004:
    {
        returnValue = F("Baumbergweg");
        break;
    }
    case 356177:
    {
        returnValue = F("bad way");
        break;
    }
    case 356178:
    {
        returnValue = F("badkap");
        break;
    }
    case 356179:
    {
        returnValue = F("barrierefreier Weg zum Moorerlebnispfad");
        break;
    }
    case 356180:
    {
        returnValue = F("bay. böm. Freundschaftsradweg");
        break;
    }
    case 356181:
    {
        returnValue = F("behindertengerechter Zugang");
        break;
    }
    case 356182:
    {
        returnValue = F("beim Grisse");
        break;
    }
    case 356183:
    {
        returnValue = F("beim Schritt Steinen");
        break;
    }
    case 356184:
    {
        returnValue = F("blauer Keil");
        break;
    }
    case 356185:
    {
        returnValue = F("blind end");
        break;
    }
    case 356186:
    {
        returnValue = F("blind way");
        break;
    }
    case 356187:
    {
        returnValue = F("breiter Waldweg");
        break;
    }
    }
    return returnValue;
}
