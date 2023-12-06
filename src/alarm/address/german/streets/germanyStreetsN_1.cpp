#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameN1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 227648:
    {
        returnValue = F("N");
        break;
    }
    case 227649:
    {
        returnValue = F("N, RW 7 PWV Elmstein");
        break;
    }
    case 227650:
    {
        returnValue = F("N-Weg");
        break;
    }
    case 227651:
    {
        returnValue = F("N. Aichelbergsträssle");
        break;
    }
    case 227652:
    {
        returnValue = F("N.-A.-Ostrowski-Str.");
        break;
    }
    case 227653:
    {
        returnValue = F("N14");
        break;
    }
    case 227654:
    {
        returnValue = F("NA");
        break;
    }
    case 227655:
    {
        returnValue = F("NABU Naturerlebnispfad Liekwegen (Alter Steinbruch)");
        break;
    }
    case 227656:
    {
        returnValue = F("NABU-Naturarena \"Auf dem Mars");
        break;
    }
    case 227657:
    {
        returnValue = F("NATO Str.");
        break;
    }
    case 227658:
    {
        returnValue = F("NATO-Str.");
        break;
    }
    case 227659:
    {
        returnValue = F("NATO-Weg");
        break;
    }
    case 227660:
    {
        returnValue = F("NBT-Zugang Clausen");
        break;
    }
    case 227661:
    {
        returnValue = F("NBT-Zugang Funckstr.");
        break;
    }
    case 227662:
    {
        returnValue = F("NBT-Zugang Hofstr.");
        break;
    }
    case 227663:
    {
        returnValue = F("NBT-Zugang Rott");
        break;
    }
    case 227664:
    {
        returnValue = F("NBT-Zugang Untersteinenfeld");
        break;
    }
    case 227665:
    {
        returnValue = F("ND Kirchsteig");
        break;
    }
    case 227666:
    {
        returnValue = F("NEROTEC Energiepark 1 - 3");
        break;
    }
    case 227667:
    {
        returnValue = F("NICKLAND");
        break;
    }
    case 227668:
    {
        returnValue = F("NINO-Allee");
        break;
    }
    case 227669:
    {
        returnValue = F("NM 1");
        break;
    }
    case 227670:
    {
        returnValue = F("NM 41");
        break;
    }
    case 227671:
    {
        returnValue = F("NN");
        break;
    }
    case 227672:
    {
        returnValue = F("NOSTA-Str.");
        break;
    }
    case 227673:
    {
        returnValue = F("NRW-Nordpunkt");
        break;
    }
    case 227674:
    {
        returnValue = F("NSG Almker Mergelgruben");
        break;
    }
    case 227675:
    {
        returnValue = F("NSM-Str.");
        break;
    }
    case 227676:
    {
        returnValue = F("NSU-Einfahrbahn");
        break;
    }
    case 227677:
    {
        returnValue = F("NSU-Str.");
        break;
    }
    case 227678:
    {
        returnValue = F("NVA Grenzweg");
        break;
    }
    case 227679:
    {
        returnValue = F("NW 10");
        break;
    }
    case 227680:
    {
        returnValue = F("NW-10-Str.");
        break;
    }
    case 227681:
    {
        returnValue = F("NW-Strecke");
        break;
    }
    case 227682:
    {
        returnValue = F("Na Rossieg");
        break;
    }
    case 227683:
    {
        returnValue = F("Na de Beck");
        break;
    }
    case 227684:
    {
        returnValue = F("Na de Heide");
        break;
    }
    case 227685:
    {
        returnValue = F("Na de Hoss");
        break;
    }
    case 227686:
    {
        returnValue = F("Na de Huk");
        break;
    }
    case 227687:
    {
        returnValue = F("Na't Deep");
        break;
    }
    case 227688:
    {
        returnValue = F("Naab");
        break;
    }
    case 227689:
    {
        returnValue = F("Naabbergstr.");
        break;
    }
    case 227690:
    {
        returnValue = F("Naabbergweg");
        break;
    }
    case 227691:
    {
        returnValue = F("Naabdemenreuth");
        break;
    }
    case 227692:
    {
        returnValue = F("Naabecker Str.");
        break;
    }
    case 227693:
    {
        returnValue = F("Naaber Str.");
        break;
    }
    case 227694:
    {
        returnValue = F("Naabgasse");
        break;
    }
    case 227695:
    {
        returnValue = F("Naabhöhe");
        break;
    }
    case 227696:
    {
        returnValue = F("Naabquellenweg");
        break;
    }
    case 227697:
    {
        returnValue = F("Naabstr.");
        break;
    }
    case 227698:
    {
        returnValue = F("Naabtalstr.");
        break;
    }
    case 227699:
    {
        returnValue = F("Naabuferstr.");
        break;
    }
    case 227700:
    {
        returnValue = F("Naabweg");
        break;
    }
    case 227701:
    {
        returnValue = F("Naabwinkel");
        break;
    }
    case 227702:
    {
        returnValue = F("Naaf");
        break;
    }
    case 227703:
    {
        returnValue = F("Naagerstr.");
        break;
    }
    case 227704:
    {
        returnValue = F("Naatlandstr.");
        break;
    }
    case 227705:
    {
        returnValue = F("Nabbenkamp");
        break;
    }
    case 227706:
    {
        returnValue = F("Nabburger Str.");
        break;
    }
    case 227707:
    {
        returnValue = F("Nabburger Torplatz");
        break;
    }
    case 227708:
    {
        returnValue = F("Naberbruchweg");
        break;
    }
    case 227709:
    {
        returnValue = F("Naberner Str.");
        break;
    }
    case 227710:
    {
        returnValue = F("Nabers Weg");
        break;
    }
    case 227711:
    {
        returnValue = F("Naborstr.");
        break;
    }
    case 227712:
    {
        returnValue = F("Nabweg");
        break;
    }
    case 227713:
    {
        returnValue = F("Nach Arenz Stück");
        break;
    }
    case 227714:
    {
        returnValue = F("Nach Feierabend");
        break;
    }
    case 227715:
    {
        returnValue = F("Nach Friedrichsbauhof");
        break;
    }
    case 227716:
    {
        returnValue = F("Nach Grittern");
        break;
    }
    case 227717:
    {
        returnValue = F("Nach Kuhlmanns Freuden");
        break;
    }
    case 227718:
    {
        returnValue = F("Nach Meyerhorn");
        break;
    }
    case 227719:
    {
        returnValue = F("Nach Plümerskotten");
        break;
    }
    case 227720:
    {
        returnValue = F("Nach Poggenmühle");
        break;
    }
    case 227721:
    {
        returnValue = F("Nach Püttkesberge");
        break;
    }
    case 227722:
    {
        returnValue = F("Nach Rösslsberg");
        break;
    }
    case 227723:
    {
        returnValue = F("Nach Schleuse I");
        break;
    }
    case 227724:
    {
        returnValue = F("Nach Schleuse II");
        break;
    }
    case 227725:
    {
        returnValue = F("Nach Schwarzland");
        break;
    }
    case 227726:
    {
        returnValue = F("Nach Stottoff");
        break;
    }
    case 227727:
    {
        returnValue = F("Nach Villingen");
        break;
    }
    case 227728:
    {
        returnValue = F("Nach Waldesruh");
        break;
    }
    case 227729:
    {
        returnValue = F("Nach Wildenrod");
        break;
    }
    case 227730:
    {
        returnValue = F("Nach Wintermannshof");
        break;
    }
    case 227731:
    {
        returnValue = F("Nach Wiste");
        break;
    }
    case 227732:
    {
        returnValue = F("Nach dem Alten Schloss");
        break;
    }
    case 227733:
    {
        returnValue = F("Nach dem Bergschlößchen");
        break;
    }
    case 227734:
    {
        returnValue = F("Nach dem Brand");
        break;
    }
    case 227735:
    {
        returnValue = F("Nach dem Eigen");
        break;
    }
    case 227736:
    {
        returnValue = F("Nach dem Essigsteig");
        break;
    }
    case 227737:
    {
        returnValue = F("Nach dem Gartenfeld");
        break;
    }
    case 227738:
    {
        returnValue = F("Nach dem Horst");
        break;
    }
    case 227739:
    {
        returnValue = F("Nach dem Rainchen");
        break;
    }
    case 227740:
    {
        returnValue = F("Nach dem Rhein");
        break;
    }
    case 227741:
    {
        returnValue = F("Nach dem Rollplatze");
        break;
    }
    case 227742:
    {
        returnValue = F("Nach dem Sahn");
        break;
    }
    case 227743:
    {
        returnValue = F("Nach dem Seehaus");
        break;
    }
    case 227744:
    {
        returnValue = F("Nach dem Steinbruch");
        break;
    }
    case 227745:
    {
        returnValue = F("Nach dem Taubenberg");
        break;
    }
    case 227746:
    {
        returnValue = F("Nach dem Vorwerke");
        break;
    }
    case 227747:
    {
        returnValue = F("Nach dem Waldhaus");
        break;
    }
    case 227748:
    {
        returnValue = F("Nach dem Wieschen");
        break;
    }
    case 227749:
    {
        returnValue = F("Nach dem Wirtschaftsweg");
        break;
    }
    case 227750:
    {
        returnValue = F("Nach dem Ziegelofen");
        break;
    }
    case 227751:
    {
        returnValue = F("Nach den 12 Morgen");
        break;
    }
    case 227752:
    {
        returnValue = F("Nach den Bergen");
        break;
    }
    case 227753:
    {
        returnValue = F("Nach den Birken");
        break;
    }
    case 227754:
    {
        returnValue = F("Nach den Bülten");
        break;
    }
    case 227755:
    {
        returnValue = F("Nach den Dellen");
        break;
    }
    case 227756:
    {
        returnValue = F("Nach den Heiden");
        break;
    }
    case 227757:
    {
        returnValue = F("Nach den Hopfenbergen");
        break;
    }
    case 227758:
    {
        returnValue = F("Nach den Kiefern");
        break;
    }
    case 227759:
    {
        returnValue = F("Nach den Kohlwiesen");
        break;
    }
    case 227760:
    {
        returnValue = F("Nach den Mauresköthen");
        break;
    }
    case 227761:
    {
        returnValue = F("Nach den Steegen");
        break;
    }
    case 227762:
    {
        returnValue = F("Nach den Wischen");
        break;
    }
    case 227763:
    {
        returnValue = F("Nach den drei Bergen");
        break;
    }
    case 227764:
    {
        returnValue = F("Nach der Bleiche");
        break;
    }
    case 227765:
    {
        returnValue = F("Nach der Deine");
        break;
    }
    case 227766:
    {
        returnValue = F("Nach der Engelhecke");
        break;
    }
    case 227767:
    {
        returnValue = F("Nach der Hardt");
        break;
    }
    case 227768:
    {
        returnValue = F("Nach der Königsmühle");
        break;
    }
    case 227769:
    {
        returnValue = F("Nach der Rehtränke");
        break;
    }
    case 227770:
    {
        returnValue = F("Nach der Schiffsmühle");
        break;
    }
    case 227771:
    {
        returnValue = F("Nach der Sorge");
        break;
    }
    case 227772:
    {
        returnValue = F("Nach der Struth");
        break;
    }
    case 227773:
    {
        returnValue = F("Nach der Wachtel");
        break;
    }
    case 227774:
    {
        returnValue = F("Nach der Wahrhorst");
        break;
    }
    case 227775:
    {
        returnValue = F("Nach der Wanne");
        break;
    }
    case 227776:
    {
        returnValue = F("Nach der Wipse");
        break;
    }
    case 227777:
    {
        returnValue = F("Nach der Wolfsmühle");
        break;
    }
    case 227778:
    {
        returnValue = F("Nach der Wäsche");
        break;
    }
    case 227779:
    {
        returnValue = F("Nach_Heidekaten");
        break;
    }
    case 227780:
    {
        returnValue = F("Nachbargasse");
        break;
    }
    case 227781:
    {
        returnValue = F("Nachbarheid");
        break;
    }
    case 227782:
    {
        returnValue = F("Nachbarnweg");
        break;
    }
    case 227783:
    {
        returnValue = F("Nachbars Wiesenweg");
        break;
    }
    case 227784:
    {
        returnValue = F("Nachbarschaft");
        break;
    }
    case 227785:
    {
        returnValue = F("Nachbarschaftsgarten Grünebaumstr.");
        break;
    }
    case 227786:
    {
        returnValue = F("Nachbarschaftspark Am Hackenbruch");
        break;
    }
    case 227787:
    {
        returnValue = F("Nachbarstr.");
        break;
    }
    case 227788:
    {
        returnValue = F("Nachbarsweg");
        break;
    }
    case 227789:
    {
        returnValue = F("Nachermühle");
        break;
    }
    case 227790:
    {
        returnValue = F("Nachfeldstr.");
        break;
    }
    case 227791:
    {
        returnValue = F("Nachheidener Weg");
        break;
    }
    case 227792:
    {
        returnValue = F("Nachkamp");
        break;
    }
    case 227793:
    {
        returnValue = F("Nachmittagsweg");
        break;
    }
    case 227794:
    {
        returnValue = F("Nachmühl");
        break;
    }
    case 227795:
    {
        returnValue = F("Nachoder Str.");
        break;
    }
    case 227796:
    {
        returnValue = F("Nachrichterer");
        break;
    }
    case 227797:
    {
        returnValue = F("Nachrodter Str.");
        break;
    }
    case 227798:
    {
        returnValue = F("Nachsommerweg");
        break;
    }
    case 227799:
    {
        returnValue = F("Nachstr.");
        break;
    }
    case 227800:
    {
        returnValue = F("Nacht Geräumt");
        break;
    }
    case 227801:
    {
        returnValue = F("Nachtallmend");
        break;
    }
    case 227802:
    {
        returnValue = F("Nachtanger");
        break;
    }
    case 227803:
    {
        returnValue = F("Nachtangerstr.");
        break;
    }
    case 227804:
    {
        returnValue = F("Nachtausgang");
        break;
    }
    case 227805:
    {
        returnValue = F("Nachtbergweg");
        break;
    }
    case 227806:
    {
        returnValue = F("Nachtbleek");
        break;
    }
    case 227807:
    {
        returnValue = F("Nachtbuchtweg");
        break;
    }
    case 227808:
    {
        returnValue = F("Nachtenhöferstr.");
        break;
    }
    case 227809:
    {
        returnValue = F("Nachterstedter Str.");
        break;
    }
    case 227810:
    {
        returnValue = F("Nachteweide");
        break;
    }
    case 227811:
    {
        returnValue = F("Nachtfalterweg");
        break;
    }
    case 227812:
    {
        returnValue = F("Nachtflügel");
        break;
    }
    case 227813:
    {
        returnValue = F("Nachtflügel / A");
        break;
    }
    case 227814:
    {
        returnValue = F("Nachtflügelweg");
        break;
    }
    case 227815:
    {
        returnValue = F("Nachthainichenweg");
        break;
    }
    case 227816:
    {
        returnValue = F("Nachthaube");
        break;
    }
    case 227817:
    {
        returnValue = F("Nachthof");
        break;
    }
    case 227818:
    {
        returnValue = F("Nachthufe");
        break;
    }
    case 227819:
    {
        returnValue = F("Nachthutstr.");
        break;
    }
    case 227820:
    {
        returnValue = F("Nachtigalental");
        break;
    }
    case 227821:
    {
        returnValue = F("Nachtigall");
        break;
    }
    case 227822:
    {
        returnValue = F("Nachtigallen-Weg");
        break;
    }
    case 227823:
    {
        returnValue = F("Nachtigallenallee");
        break;
    }
    case 227824:
    {
        returnValue = F("Nachtigallenbrink");
        break;
    }
    case 227825:
    {
        returnValue = F("Nachtigallenburg");
        break;
    }
    case 227826:
    {
        returnValue = F("Nachtigallenbusch");
        break;
    }
    case 227827:
    {
        returnValue = F("Nachtigallengasse");
        break;
    }
    case 227828:
    {
        returnValue = F("Nachtigallengrund");
        break;
    }
    case 227829:
    {
        returnValue = F("Nachtigallenhain");
        break;
    }
    case 227830:
    {
        returnValue = F("Nachtigallenpfad");
        break;
    }
    case 227831:
    {
        returnValue = F("Nachtigallenpforte");
        break;
    }
    case 227832:
    {
        returnValue = F("Nachtigallenring");
        break;
    }
    case 227833:
    {
        returnValue = F("Nachtigallenschlag");
        break;
    }
    case 227834:
    {
        returnValue = F("Nachtigallenschlucht");
        break;
    }
    case 227835:
    {
        returnValue = F("Nachtigallensteg");
        break;
    }
    case 227836:
    {
        returnValue = F("Nachtigallensteig");
        break;
    }
    case 227837:
    {
        returnValue = F("Nachtigallenstieg");
        break;
    }
    case 227838:
    {
        returnValue = F("Nachtigallenstiege");
        break;
    }
    case 227839:
    {
        returnValue = F("Nachtigallenstr.");
        break;
    }
    case 227840:
    {
        returnValue = F("Nachtigallental");
        break;
    }
    case 227841:
    {
        returnValue = F("Nachtigallenthal");
        break;
    }
    case 227842:
    {
        returnValue = F("Nachtigallentwiete");
        break;
    }
    case 227843:
    {
        returnValue = F("Nachtigallenwald");
        break;
    }
    case 227844:
    {
        returnValue = F("Nachtigallenweg");
        break;
    }
    case 227845:
    {
        returnValue = F("Nachtigallsgang");
        break;
    }
    case 227846:
    {
        returnValue = F("Nachtigallshof");
        break;
    }
    case 227847:
    {
        returnValue = F("Nachtigallstal");
        break;
    }
    case 227848:
    {
        returnValue = F("Nachtigallstr.");
        break;
    }
    case 227849:
    {
        returnValue = F("Nachtigallweg");
        break;
    }
    case 227850:
    {
        returnValue = F("Nachtigalplatz");
        break;
    }
    case 227851:
    {
        returnValue = F("Nachtigalstr.");
        break;
    }
    case 227852:
    {
        returnValue = F("Nachtkerzenweg");
        break;
    }
    case 227853:
    {
        returnValue = F("Nachtkoppel");
        break;
    }
    case 227854:
    {
        returnValue = F("Nachtkoppelring");
        break;
    }
    case 227855:
    {
        returnValue = F("Nachtkoppelweg");
        break;
    }
    case 227856:
    {
        returnValue = F("Nachtobel");
        break;
    }
    case 227857:
    {
        returnValue = F("Nachtpfauenaugeweg");
        break;
    }
    case 227858:
    {
        returnValue = F("Nachtredder");
        break;
    }
    case 227859:
    {
        returnValue = F("Nachtschwalbenweg");
        break;
    }
    case 227860:
    {
        returnValue = F("Nachtsheimer Weg");
        break;
    }
    case 227861:
    {
        returnValue = F("Nachtsheimstr.");
        break;
    }
    case 227862:
    {
        returnValue = F("Nachtstall");
        break;
    }
    case 227863:
    {
        returnValue = F("Nachtwaid");
        break;
    }
    case 227864:
    {
        returnValue = F("Nachtwaide");
        break;
    }
    case 227865:
    {
        returnValue = F("Nachtwaidstr.");
        break;
    }
    case 227866:
    {
        returnValue = F("Nachtwaidweg");
        break;
    }
    case 227867:
    {
        returnValue = F("Nachtweg");
        break;
    }
    case 227868:
    {
        returnValue = F("Nachtweid");
        break;
    }
    case 227869:
    {
        returnValue = F("Nachtweide");
        break;
    }
    case 227870:
    {
        returnValue = F("Nachtweidenstr.");
        break;
    }
    case 227871:
    {
        returnValue = F("Nachtweidenweg");
        break;
    }
    case 227872:
    {
        returnValue = F("Nachtweider Weg");
        break;
    }
    case 227873:
    {
        returnValue = F("Nachtweidestr.");
        break;
    }
    case 227874:
    {
        returnValue = F("Nachtweideweg");
        break;
    }
    case 227875:
    {
        returnValue = F("Nachtweidstr.");
        break;
    }
    case 227876:
    {
        returnValue = F("Nachtweidweg");
        break;
    }
    case 227877:
    {
        returnValue = F("Nachtwinkel");
        break;
    }
    case 227878:
    {
        returnValue = F("Nachtwächterpfad");
        break;
    }
    case 227879:
    {
        returnValue = F("Nachtwächterweg");
        break;
    }
    case 227880:
    {
        returnValue = F("Nackbuckweg");
        break;
    }
    case 227881:
    {
        returnValue = F("Nacke-Erich-Str.");
        break;
    }
    case 227882:
    {
        returnValue = F("Nacken");
        break;
    }
    case 227883:
    {
        returnValue = F("Nackenberg");
        break;
    }
    case 227884:
    {
        returnValue = F("Nackenberger Str.");
        break;
    }
    case 227885:
    {
        returnValue = F("Nackenbergsgarten");
        break;
    }
    case 227886:
    {
        returnValue = F("Nackenbergstr.");
        break;
    }
    case 227887:
    {
        returnValue = F("Nackenborn");
        break;
    }
    case 227888:
    {
        returnValue = F("Nackendorf");
        break;
    }
    case 227889:
    {
        returnValue = F("Nackenheimer Str.");
        break;
    }
    case 227890:
    {
        returnValue = F("Nackenhof");
        break;
    }
    case 227891:
    {
        returnValue = F("Nackenstr.");
        break;
    }
    case 227892:
    {
        returnValue = F("Nackenweg");
        break;
    }
    case 227893:
    {
        returnValue = F("Nacker Str.");
        break;
    }
    case 227894:
    {
        returnValue = F("Nacker Weg");
        break;
    }
    case 227895:
    {
        returnValue = F("Nackermühleweg");
        break;
    }
    case 227896:
    {
        returnValue = F("Nackerstr.");
        break;
    }
    case 227897:
    {
        returnValue = F("Nackflur");
        break;
    }
    case 227898:
    {
        returnValue = F("Nackhofweg");
        break;
    }
    case 227899:
    {
        returnValue = F("Nackholz");
        break;
    }
    case 227900:
    {
        returnValue = F("Nackstr.");
        break;
    }
    case 227901:
    {
        returnValue = F("Nacktbadebereich am Feldmochinger See");
        break;
    }
    case 227902:
    {
        returnValue = F("Nackter Str.");
        break;
    }
    case 227903:
    {
        returnValue = F("Nackter Weg");
        break;
    }
    case 227904:
    {
        returnValue = F("Nackterhof");
        break;
    }
    case 227905:
    {
        returnValue = F("Nacktes Wegle");
        break;
    }
    case 227906:
    {
        returnValue = F("Nackweg");
        break;
    }
    case 227907:
    {
        returnValue = F("Nadah");
        break;
    }
    case 227908:
    {
        returnValue = F("Nadamer Str.");
        break;
    }
    case 227909:
    {
        returnValue = F("Nadaper Weg");
        break;
    }
    case 227910:
    {
        returnValue = F("Nadefeld");
        break;
    }
    case 227911:
    {
        returnValue = F("Nadelbaumäcker");
        break;
    }
    case 227912:
    {
        returnValue = F("Nadelberg");
        break;
    }
    case 227913:
    {
        returnValue = F("Nadelbrink");
        break;
    }
    case 227914:
    {
        returnValue = F("Nadelburg");
        break;
    }
    case 227915:
    {
        returnValue = F("Nadelgasse");
        break;
    }
    case 227916:
    {
        returnValue = F("Nadelgehölze");
        break;
    }
    case 227917:
    {
        returnValue = F("Nadelhayweg");
        break;
    }
    case 227918:
    {
        returnValue = F("Nadelholzarboretum");
        break;
    }
    case 227919:
    {
        returnValue = F("Nadelitz");
        break;
    }
    case 227920:
    {
        returnValue = F("Nadelkamp");
        break;
    }
    case 227921:
    {
        returnValue = F("Nadelspitzweg");
        break;
    }
    case 227922:
    {
        returnValue = F("Nadelstieg");
        break;
    }
    case 227923:
    {
        returnValue = F("Nadelstr.");
        break;
    }
    case 227924:
    {
        returnValue = F("Nadeltaschenweg");
        break;
    }
    case 227925:
    {
        returnValue = F("Nadelweg");
        break;
    }
    case 227926:
    {
        returnValue = F("Nadelwehrring");
        break;
    }
    case 227927:
    {
        returnValue = F("Nadelwitzer Str.");
        break;
    }
    case 227928:
    {
        returnValue = F("Nadenberg");
        break;
    }
    case 227929:
    {
        returnValue = F("Nadenbergstr.");
        break;
    }
    case 227930:
    {
        returnValue = F("Naderkau");
        break;
    }
    case 227931:
    {
        returnValue = F("Nadeweg");
        break;
    }
    case 227932:
    {
        returnValue = F("Nadigstr.");
        break;
    }
    case 227933:
    {
        returnValue = F("Nadistr.");
        break;
    }
    case 227934:
    {
        returnValue = F("Nadlergasse");
        break;
    }
    case 227935:
    {
        returnValue = F("Nadlerstr.");
        break;
    }
    case 227936:
    {
        returnValue = F("Nadlerweg");
        break;
    }
    case 227937:
    {
        returnValue = F("Nadorffs Kamp");
        break;
    }
    case 227938:
    {
        returnValue = F("Nadorpstr.");
        break;
    }
    case 227939:
    {
        returnValue = F("Nadorst");
        break;
    }
    case 227940:
    {
        returnValue = F("Nadorster Str.");
        break;
    }
    case 227941:
    {
        returnValue = F("Nadrenseer Str.");
        break;
    }
    case 227942:
    {
        returnValue = F("Nadrenseer Weg");
        break;
    }
    case 227943:
    {
        returnValue = F("Nadrenser Weg");
        break;
    }
    case 227944:
    {
        returnValue = F("Nadörster Str.");
        break;
    }
    case 227945:
    {
        returnValue = F("Naegelestr.");
        break;
    }
    case 227946:
    {
        returnValue = F("Naehbergweg");
        break;
    }
    case 227947:
    {
        returnValue = F("Naeherweg");
        break;
    }
    case 227948:
    {
        returnValue = F("Naendorf");
        break;
    }
    case 227949:
    {
        returnValue = F("Naendorfstr.");
        break;
    }
    case 227950:
    {
        returnValue = F("Naenser Hohler Weg");
        break;
    }
    case 227951:
    {
        returnValue = F("Naesbrockweg");
        break;
    }
    case 227952:
    {
        returnValue = F("Nagahama-Allee");
        break;
    }
    case 227953:
    {
        returnValue = F("Nagaistr.");
        break;
    }
    case 227954:
    {
        returnValue = F("Nagelbachstr.");
        break;
    }
    case 227955:
    {
        returnValue = F("Nagelbachtalweg");
        break;
    }
    case 227956:
    {
        returnValue = F("Nagelbergstr.");
        break;
    }
    case 227957:
    {
        returnValue = F("Nagelbrecher-Linie");
        break;
    }
    case 227958:
    {
        returnValue = F("Nagelbrinkstr.");
        break;
    }
    case 227959:
    {
        returnValue = F("Nageler Rundweg");
        break;
    }
    case 227960:
    {
        returnValue = F("Nageler Str.");
        break;
    }
    case 227961:
    {
        returnValue = F("Nagelfluhstr.");
        break;
    }
    case 227962:
    {
        returnValue = F("Nagelfluhweg");
        break;
    }
    case 227963:
    {
        returnValue = F("Nagelgasse");
        break;
    }
    case 227964:
    {
        returnValue = F("Nagelhof");
        break;
    }
    case 227965:
    {
        returnValue = F("Nagelhofweg");
        break;
    }
    case 227966:
    {
        returnValue = F("Nagelmanns Moor");
        break;
    }
    case 227967:
    {
        returnValue = F("Nagelpfad");
        break;
    }
    case 227968:
    {
        returnValue = F("Nagelplatz");
        break;
    }
    case 227969:
    {
        returnValue = F("Nagelpötchen");
        break;
    }
    case 227970:
    {
        returnValue = F("Nagels Gang");
        break;
    }
    case 227971:
    {
        returnValue = F("Nagelsallee");
        break;
    }
    case 227972:
    {
        returnValue = F("Nagelsbaum");
        break;
    }
    case 227973:
    {
        returnValue = F("Nagelsberger Weg");
        break;
    }
    case 227974:
    {
        returnValue = F("Nagelsbüchel");
        break;
    }
    case 227975:
    {
        returnValue = F("Nagelschmiede");
        break;
    }
    case 227976:
    {
        returnValue = F("Nagelschmiedegasse");
        break;
    }
    case 227977:
    {
        returnValue = F("Nagelschmiedestr.");
        break;
    }
    case 227978:
    {
        returnValue = F("Nagelschmiedeweg");
        break;
    }
    case 227979:
    {
        returnValue = F("Nagelschmiedgasse");
        break;
    }
    case 227980:
    {
        returnValue = F("Nagelschmieds-Gang");
        break;
    }
    case 227981:
    {
        returnValue = F("Nagelschmiedsgasse");
        break;
    }
    case 227982:
    {
        returnValue = F("Nagelschmiedsgäßchen");
        break;
    }
    case 227983:
    {
        returnValue = F("Nagelschmiedshütte");
        break;
    }
    case 227984:
    {
        returnValue = F("Nagelschmiedstr.");
        break;
    }
    case 227985:
    {
        returnValue = F("Nagelschmiedweg");
        break;
    }
    case 227986:
    {
        returnValue = F("Nagelsgasse");
        break;
    }
    case 227987:
    {
        returnValue = F("Nagelsgäßchen");
        break;
    }
    case 227988:
    {
        returnValue = F("Nagelshof");
        break;
    }
    case 227989:
    {
        returnValue = F("Nagelsholz");
        break;
    }
    case 227990:
    {
        returnValue = F("Nagelshub");
        break;
    }
    case 227991:
    {
        returnValue = F("Nagelskamp");
        break;
    }
    case 227992:
    {
        returnValue = F("Nagelspitzstr.");
        break;
    }
    case 227993:
    {
        returnValue = F("Nagelspitzweg");
        break;
    }
    case 227994:
    {
        returnValue = F("Nagelstiftsweg");
        break;
    }
    case 227995:
    {
        returnValue = F("Nagelstr.");
        break;
    }
    case 227996:
    {
        returnValue = F("Nagelsweg");
        break;
    }
    case 227997:
    {
        returnValue = F("Nagelweg");
        break;
    }
    case 227998:
    {
        returnValue = F("Nagelwiesenweg");
        break;
    }
    case 227999:
    {
        returnValue = F("Naggertstr.");
        break;
    }
    case 228000:
    {
        returnValue = F("Nagler Weg");
        break;
    }
    case 228001:
    {
        returnValue = F("Naglergasse");
        break;
    }
    case 228002:
    {
        returnValue = F("Naglergäßle");
        break;
    }
    case 228003:
    {
        returnValue = F("Naglers Berg");
        break;
    }
    case 228004:
    {
        returnValue = F("Naglerstr.");
        break;
    }
    case 228005:
    {
        returnValue = F("Nagloch");
        break;
    }
    case 228006:
    {
        returnValue = F("Nagoeschle 3");
        break;
    }
    case 228007:
    {
        returnValue = F("Nagoldaue");
        break;
    }
    case 228008:
    {
        returnValue = F("Nagoldblick");
        break;
    }
    case 228009:
    {
        returnValue = F("Nagolder Str.");
        break;
    }
    case 228010:
    {
        returnValue = F("Nagolder Weg");
        break;
    }
    case 228011:
    {
        returnValue = F("Nagoldhangweg");
        break;
    }
    case 228012:
    {
        returnValue = F("Nagoldstr.");
        break;
    }
    case 228013:
    {
        returnValue = F("Nagoldtalradweg");
        break;
    }
    case 228014:
    {
        returnValue = F("Nagoldtalstr.");
        break;
    }
    case 228015:
    {
        returnValue = F("Nagoldtalweg");
        break;
    }
    case 228016:
    {
        returnValue = F("Nagoldweg");
        break;
    }
    case 228017:
    {
        returnValue = F("Nagykallo-Allee");
        break;
    }
    case 228018:
    {
        returnValue = F("Nah'n Kliff");
        break;
    }
    case 228019:
    {
        returnValue = F("Nahariyastr.");
        break;
    }
    case 228020:
    {
        returnValue = F("Nahblöcken");
        break;
    }
    case 228021:
    {
        returnValue = F("Nahbollenbacher Str.");
        break;
    }
    case 228022:
    {
        returnValue = F("Nahe Weinbergstr.");
        break;
    }
    case 228023:
    {
        returnValue = F("Nahe-Felsen-Weg");
        break;
    }
    case 228024:
    {
        returnValue = F("Nahe-Hoch-Str.");
        break;
    }
    case 228025:
    {
        returnValue = F("Naheallee");
        break;
    }
    case 228026:
    {
        returnValue = F("Naheblick");
        break;
    }
    case 228027:
    {
        returnValue = F("Nahegasse");
        break;
    }
    case 228028:
    {
        returnValue = F("Naheland");
        break;
    }
    case 228029:
    {
        returnValue = F("Nahenfürster Str.");
        break;
    }
    case 228030:
    {
        returnValue = F("Nahensteig");
        break;
    }
    case 228031:
    {
        returnValue = F("Naher Str.");
        break;
    }
    case 228032:
    {
        returnValue = F("Naher Weg");
        break;
    }
    case 228033:
    {
        returnValue = F("Naherechstr.");
        break;
    }
    case 228034:
    {
        returnValue = F("Naherholung Hasenberg");
        break;
    }
    case 228035:
    {
        returnValue = F("Naherholungsanlage Edigen");
        break;
    }
    case 228036:
    {
        returnValue = F("Naherholungsanlage Klingelhalde");
        break;
    }
    case 228037:
    {
        returnValue = F("Naherholungsbereich Feuersee Oberjesingen");
        break;
    }
    case 228038:
    {
        returnValue = F("Naherholungsgebiet Bad Erna");
        break;
    }
    case 228039:
    {
        returnValue = F("Naherholungsgebiet Brühlwiesen");
        break;
    }
    case 228040:
    {
        returnValue = F("Naherholungsgebiet Busenwiesen");
        break;
    }
    case 228041:
    {
        returnValue = F("Naherholungsgebiet Bürgerseen");
        break;
    }
    case 228042:
    {
        returnValue = F("Naherholungsgebiet Garching-Hochbrück");
        break;
    }
    case 228043:
    {
        returnValue = F("Naherholungsgebiet Gerlos");
        break;
    }
    case 228044:
    {
        returnValue = F("Naherholungsgebiet Park am Trajuhnschen Bach");
        break;
    }
    case 228045:
    {
        returnValue = F("Naherholungsgebiet Rinderwiesen");
        break;
    }
    case 228046:
    {
        returnValue = F("Naherholungsgebiet Sandfang");
        break;
    }
    case 228047:
    {
        returnValue = F("Naherholungsgebiet Scharpenacken");
        break;
    }
    case 228048:
    {
        returnValue = F("Naherholungsgebiet Vöhringer Badesee");
        break;
    }
    case 228049:
    {
        returnValue = F("Naherholungsgebiet Weiterdersberg");
        break;
    }
    case 228050:
    {
        returnValue = F("Naherholungsgebiet Wurmtal");
        break;
    }
    case 228051:
    {
        returnValue = F("Naherholungspark Voslapp");
        break;
    }
    case 228052:
    {
        returnValue = F("Naherholungspfad");
        break;
    }
    case 228053:
    {
        returnValue = F("Naherholungsstr.");
        break;
    }
    case 228054:
    {
        returnValue = F("Naherholungsweg Gletscherschliff");
        break;
    }
    case 228055:
    {
        returnValue = F("Naherholungsweg Oetterbach");
        break;
    }
    case 228056:
    {
        returnValue = F("Naherholungszentrum");
        break;
    }
    case 228057:
    {
        returnValue = F("Nahering");
        break;
    }
    case 228058:
    {
        returnValue = F("Nahestr.");
        break;
    }
    case 228059:
    {
        returnValue = F("Nahetalstr.");
        break;
    }
    case 228060:
    {
        returnValue = F("Naheuferstr.");
        break;
    }
    case 228061:
    {
        returnValue = F("Naheweg");
        break;
    }
    case 228062:
    {
        returnValue = F("Naheweinstr.");
        break;
    }
    case 228063:
    {
        returnValue = F("Nahfeldstr.");
        break;
    }
    case 228064:
    {
        returnValue = F("Nahkamp");
        break;
    }
    case 228065:
    {
        returnValue = F("Nahlendorfer Str.");
        break;
    }
    case 228066:
    {
        returnValue = F("Nahlenkamp");
        break;
    }
    case 228067:
    {
        returnValue = F("Nahlesteg");
        break;
    }
    case 228068:
    {
        returnValue = F("Nahlkammer");
        break;
    }
    case 228069:
    {
        returnValue = F("Nahlstr.");
        break;
    }
    case 228070:
    {
        returnValue = F("Nahmerbach");
        break;
    }
    case 228071:
    {
        returnValue = F("Nahmerbrücke");
        break;
    }
    case 228072:
    {
        returnValue = F("Nahmmacherstr.");
        break;
    }
    case 228073:
    {
        returnValue = F("Nahner Kirchplatz");
        break;
    }
    case 228074:
    {
        returnValue = F("Nahner Landwehr");
        break;
    }
    case 228075:
    {
        returnValue = F("Nahner Weg");
        break;
    }
    case 228076:
    {
        returnValue = F("Nahrendorfer Str.");
        break;
    }
    case 228077:
    {
        returnValue = F("Nahrgangstr.");
        break;
    }
    case 228078:
    {
        returnValue = F("Nahrodder Str.");
        break;
    }
    case 228079:
    {
        returnValue = F("Nahrstedter Dorfstr.");
        break;
    }
    case 228080:
    {
        returnValue = F("Nahrstedter Weg");
        break;
    }
    case 228081:
    {
        returnValue = F("Nahrungsberg");
        break;
    }
    case 228082:
    {
        returnValue = F("Nahtweg");
        break;
    }
    case 228083:
    {
        returnValue = F("Nahum-Goldmann-Allee");
        break;
    }
    case 228084:
    {
        returnValue = F("Nahverkehrsmuseum Mooskamp");
        break;
    }
    case 228085:
    {
        returnValue = F("Nahweg");
        break;
    }
    case 228086:
    {
        returnValue = F("Nahwinden");
        break;
    }
    case 228087:
    {
        returnValue = F("Naiers");
        break;
    }
    case 228088:
    {
        returnValue = F("Naiferstr.");
        break;
    }
    case 228089:
    {
        returnValue = F("Nailaer Str.");
        break;
    }
    case 228090:
    {
        returnValue = F("Nailastr.");
        break;
    }
    case 228091:
    {
        returnValue = F("Nairnstr.");
        break;
    }
    case 228092:
    {
        returnValue = F("Naisaer Str.");
        break;
    }
    case 228093:
    {
        returnValue = F("Naislacher Str.");
        break;
    }
    case 228094:
    {
        returnValue = F("Naitschau");
        break;
    }
    case 228095:
    {
        returnValue = F("Naitschauer Weg");
        break;
    }
    case 228096:
    {
        returnValue = F("Nakatenusstr.");
        break;
    }
    case 228097:
    {
        returnValue = F("Nakeler Str.");
        break;
    }
    case 228098:
    {
        returnValue = F("Nakskovstr.");
        break;
    }
    case 228099:
    {
        returnValue = F("Nalbachstr.");
        break;
    }
    case 228100:
    {
        returnValue = F("Nalenzstr.");
        break;
    }
    case 228101:
    {
        returnValue = F("Nalhofstr.");
        break;
    }
    case 228102:
    {
        returnValue = F("Nallenweg");
        break;
    }
    case 228103:
    {
        returnValue = F("Nallinger Str.");
        break;
    }
    case 228104:
    {
        returnValue = F("Nalsbachring");
        break;
    }
    case 228105:
    {
        returnValue = F("Nalser Str.");
        break;
    }
    case 228106:
    {
        returnValue = F("Nalshof");
        break;
    }
    case 228107:
    {
        returnValue = F("Namborner Str.");
        break;
    }
    case 228108:
    {
        returnValue = F("Nambüll");
        break;
    }
    case 228109:
    {
        returnValue = F("Namedorfstr.");
        break;
    }
    case 228110:
    {
        returnValue = F("Namenlose Str.");
        break;
    }
    case 228111:
    {
        returnValue = F("Namibia-Allee");
        break;
    }
    case 228112:
    {
        returnValue = F("Namibiastr.");
        break;
    }
    case 228113:
    {
        returnValue = F("Namine-Witt-Wai");
        break;
    }
    case 228114:
    {
        returnValue = F("Naminkstr.");
        break;
    }
    case 228115:
    {
        returnValue = F("Namloserweg");
        break;
    }
    case 228116:
    {
        returnValue = F("Nammer Berg");
        break;
    }
    case 228117:
    {
        returnValue = F("Nammer Paß");
        break;
    }
    case 228118:
    {
        returnValue = F("Nammer Platz");
        break;
    }
    case 228119:
    {
        returnValue = F("Nammer Weg");
        break;
    }
    case 228120:
    {
        returnValue = F("Namslauer Str.");
        break;
    }
    case 228121:
    {
        returnValue = F("Namurer Str.");
        break;
    }
    case 228122:
    {
        returnValue = F("Namurstr.");
        break;
    }
    case 228123:
    {
        returnValue = F("Nancy-Johnson-Str.");
        break;
    }
    case 228124:
    {
        returnValue = F("Nancystr.");
        break;
    }
    case 228125:
    {
        returnValue = F("Nandistr.");
        break;
    }
    case 228126:
    {
        returnValue = F("Nandlstädter Höhe");
        break;
    }
    case 228127:
    {
        returnValue = F("Nandlstädter Str.");
        break;
    }
    case 228128:
    {
        returnValue = F("Nandlstädter Weg");
        break;
    }
    case 228129:
    {
        returnValue = F("Nandostr.");
        break;
    }
    case 228130:
    {
        returnValue = F("Nandu");
        break;
    }
    case 228131:
    {
        returnValue = F("Nandus");
        break;
    }
    case 228132:
    {
        returnValue = F("Nane-Jürgensen-Weg");
        break;
    }
    case 228133:
    {
        returnValue = F("Nane-Wolf-Weg");
        break;
    }
    case 228134:
    {
        returnValue = F("Nanette-Bald-Str.");
        break;
    }
    case 228135:
    {
        returnValue = F("Nanette-Streicher-Str.");
        break;
    }
    case 228136:
    {
        returnValue = F("Nanette-Streicher-Weg");
        break;
    }
    case 228137:
    {
        returnValue = F("Nanetteweg");
        break;
    }
    case 228138:
    {
        returnValue = F("Nanga-Parbat-Str.");
        break;
    }
    case 228139:
    {
        returnValue = F("Nankendorf");
        break;
    }
    case 228140:
    {
        returnValue = F("Nankendorfer Str.");
        break;
    }
    case 228141:
    {
        returnValue = F("Nankendorfer Weg");
        break;
    }
    case 228142:
    {
        returnValue = F("Nannemannshusen");
        break;
    }
    case 228143:
    {
        returnValue = F("Nannenhohn");
        break;
    }
    case 228144:
    {
        returnValue = F("Nannette-Rehmann-Str.");
        break;
    }
    case 228145:
    {
        returnValue = F("Nannette-Streicher-Str.");
        break;
    }
    case 228146:
    {
        returnValue = F("Nannhausener Str.");
        break;
    }
    case 228147:
    {
        returnValue = F("Nannhofer Str.");
        break;
    }
    case 228148:
    {
        returnValue = F("Nanni-Lambrecht-Str.");
        break;
    }
    case 228149:
    {
        returnValue = F("Nanny-Lambrecht-Str.");
        break;
    }
    case 228150:
    {
        returnValue = F("Nansenpfad");
        break;
    }
    case 228151:
    {
        returnValue = F("Nansenring");
        break;
    }
    case 228152:
    {
        returnValue = F("Nansenstr.");
        break;
    }
    case 228153:
    {
        returnValue = F("Nansenufer");
        break;
    }
    case 228154:
    {
        returnValue = F("Nansenweg");
        break;
    }
    case 228155:
    {
        returnValue = F("Nansteinstr.");
        break;
    }
    case 228156:
    {
        returnValue = F("Nantegasse");
        break;
    }
    case 228157:
    {
        returnValue = F("Nantenbacher Str.");
        break;
    }
    case 228158:
    {
        returnValue = F("Nantesbuch");
        break;
    }
    case 228159:
    {
        returnValue = F("Nantesbucher Weg");
        break;
    }
    case 228160:
    {
        returnValue = F("Nanteweg");
        break;
    }
    case 228161:
    {
        returnValue = F("Nantkeweg");
        break;
    }
    case 228162:
    {
        returnValue = F("Nantzstr.");
        break;
    }
    case 228163:
    {
        returnValue = F("Nanzenbacher Weg");
        break;
    }
    case 228164:
    {
        returnValue = F("Nanzhäuser Weg");
        break;
    }
    case 228165:
    {
        returnValue = F("Nanzinger Str.");
        break;
    }
    case 228166:
    {
        returnValue = F("Nanzinger Weg");
        break;
    }
    case 228167:
    {
        returnValue = F("Naorichters Hof");
        break;
    }
    case 228168:
    {
        returnValue = F("Napfberg");
        break;
    }
    case 228169:
    {
        returnValue = F("Napfweg");
        break;
    }
    case 228170:
    {
        returnValue = F("Naphausen");
        break;
    }
    case 228171:
    {
        returnValue = F("Napianstr.");
        break;
    }
    case 228172:
    {
        returnValue = F("Napoleonbrücke");
        break;
    }
    case 228173:
    {
        returnValue = F("Napoleondamm");
        break;
    }
    case 228174:
    {
        returnValue = F("Napoleongasse");
        break;
    }
    case 228175:
    {
        returnValue = F("Napoleonisches Dreieck");
        break;
    }
    case 228176:
    {
        returnValue = F("Napoleons-Platz");
        break;
    }
    case 228177:
    {
        returnValue = F("Napoleonsberg");
        break;
    }
    case 228178:
    {
        returnValue = F("Napoleonsgasse");
        break;
    }
    case 228179:
    {
        returnValue = F("Napoleonstock");
        break;
    }
    case 228180:
    {
        returnValue = F("Napoleonstr.");
        break;
    }
    case 228181:
    {
        returnValue = F("Napoleonsweg");
        break;
    }
    case 228182:
    {
        returnValue = F("Napoleonweg");
        break;
    }
    case 228183:
    {
        returnValue = F("Nappe");
        break;
    }
    case 228184:
    {
        returnValue = F("Nappenhorn");
        break;
    }
    case 228185:
    {
        returnValue = F("Nappenhorner Koppel");
        break;
    }
    case 228186:
    {
        returnValue = F("Nappenplatz");
        break;
    }
    case 228187:
    {
        returnValue = F("Nappenrain");
        break;
    }
    case 228188:
    {
        returnValue = F("Nappianstr.");
        break;
    }
    case 228189:
    {
        returnValue = F("Napteweg");
        break;
    }
    case 228190:
    {
        returnValue = F("Narbensweg");
        break;
    }
    case 228191:
    {
        returnValue = F("Narberhausen");
        break;
    }
    case 228192:
    {
        returnValue = F("Narbonner Ring");
        break;
    }
    case 228193:
    {
        returnValue = F("Nardenheim");
        break;
    }
    case 228194:
    {
        returnValue = F("Nardinistr.");
        break;
    }
    case 228195:
    {
        returnValue = F("Nardiniweg");
        break;
    }
    case 228196:
    {
        returnValue = F("Nardter Str.");
        break;
    }
    case 228197:
    {
        returnValue = F("Nardter Weg");
        break;
    }
    case 228198:
    {
        returnValue = F("Narewstr.");
        break;
    }
    case 228199:
    {
        returnValue = F("Narichenhalde");
        break;
    }
    case 228200:
    {
        returnValue = F("Naringer Str.");
        break;
    }
    case 228201:
    {
        returnValue = F("Nariskerstr.");
        break;
    }
    case 228202:
    {
        returnValue = F("Narjesstr.");
        break;
    }
    case 228203:
    {
        returnValue = F("Narper Str.");
        break;
    }
    case 228204:
    {
        returnValue = F("Narper Weg");
        break;
    }
    case 228205:
    {
        returnValue = F("Narrenbergstr.");
        break;
    }
    case 228206:
    {
        returnValue = F("Narsdorfer Str.");
        break;
    }
    case 228207:
    {
        returnValue = F("Narthauener Str.");
        break;
    }
    case 228208:
    {
        returnValue = F("Nartumer Str.");
        break;
    }
    case 228209:
    {
        returnValue = F("Narupshof");
        break;
    }
    case 228210:
    {
        returnValue = F("Narupstr.");
        break;
    }
    case 228211:
    {
        returnValue = F("Naruto-Str.");
        break;
    }
    case 228212:
    {
        returnValue = F("Narvikstr.");
        break;
    }
    case 228213:
    {
        returnValue = F("Narzigäßchen");
        break;
    }
    case 228214:
    {
        returnValue = F("Narzissenallee");
        break;
    }
    case 228215:
    {
        returnValue = F("Narzissengasse");
        break;
    }
    case 228216:
    {
        returnValue = F("Narzissenhang");
        break;
    }
    case 228217:
    {
        returnValue = F("Narzissenhof");
        break;
    }
    case 228218:
    {
        returnValue = F("Narzissenplatz");
        break;
    }
    case 228219:
    {
        returnValue = F("Narzissenstiege");
        break;
    }
    case 228220:
    {
        returnValue = F("Narzissenstr.");
        break;
    }
    case 228221:
    {
        returnValue = F("Narzissenweg");
        break;
    }
    case 228222:
    {
        returnValue = F("Narzissenwiese");
        break;
    }
    case 228223:
    {
        returnValue = F("Nasbacher Weg");
        break;
    }
    case 228224:
    {
        returnValue = F("Nasbachtal");
        break;
    }
    case 228225:
    {
        returnValue = F("Naschendorfer Str.");
        break;
    }
    case 228226:
    {
        returnValue = F("Naschgasse");
        break;
    }
    case 228227:
    {
        returnValue = F("Naschhäuser Str.");
        break;
    }
    case 228228:
    {
        returnValue = F("Nasenbachstr.");
        break;
    }
    case 228229:
    {
        returnValue = F("Nasenbachweg");
        break;
    }
    case 228230:
    {
        returnValue = F("Nasenbär");
        break;
    }
    case 228231:
    {
        returnValue = F("Nasengasse");
        break;
    }
    case 228232:
    {
        returnValue = F("Nasenplatzweg");
        break;
    }
    case 228233:
    {
        returnValue = F("Nashagen");
        break;
    }
    case 228234:
    {
        returnValue = F("Nashorn");
        break;
    }
    case 228235:
    {
        returnValue = F("Nashornring");
        break;
    }
    case 228236:
    {
        returnValue = F("Nashornweg");
        break;
    }
    case 228237:
    {
        returnValue = F("Nashvillepromenade");
        break;
    }
    case 228238:
    {
        returnValue = F("Nasigerstr.");
        break;
    }
    case 228239:
    {
        returnValue = F("Nasnitzer Hauptstr.");
        break;
    }
    case 228240:
    {
        returnValue = F("Nassach");
        break;
    }
    case 228241:
    {
        returnValue = F("Nassacher Sträßchen");
        break;
    }
    case 228242:
    {
        returnValue = F("Nassacher Weg");
        break;
    }
    case 228243:
    {
        returnValue = F("Nassachstr.");
        break;
    }
    case 228244:
    {
        returnValue = F("Nassachtalstr.");
        break;
    }
    case 228245:
    {
        returnValue = F("Nassau");
        break;
    }
    case 228246:
    {
        returnValue = F("Nassau-Oranier-Weg");
        break;
    }
    case 228247:
    {
        returnValue = F("Nassauer Hof");
        break;
    }
    case 228248:
    {
        returnValue = F("Nassauer Ring");
        break;
    }
    case 228249:
    {
        returnValue = F("Nassauer Str.");
        break;
    }
    case 228250:
    {
        returnValue = F("Nassauer Weg");
        break;
    }
    case 228251:
    {
        returnValue = F("Nassauer-Hof-Garten");
        break;
    }
    case 228252:
    {
        returnValue = F("Nassauerallee");
        break;
    }
    case 228253:
    {
        returnValue = F("Nassauermauer");
        break;
    }
    case 228254:
    {
        returnValue = F("Nassauerring");
        break;
    }
    case 228255:
    {
        returnValue = F("Nassauerstr.");
        break;
    }
    case 228256:
    {
        returnValue = F("Nassauische Str.");
        break;
    }
    case 228257:
    {
        returnValue = F("Nassauische Weinstr.");
        break;
    }
    case 228258:
    {
        returnValue = F("Nassauischer Ring");
        break;
    }
    case 228259:
    {
        returnValue = F("Nassauischer Weg");
        break;
    }
    case 228260:
    {
        returnValue = F("Nassausiedlung");
        break;
    }
    case 228261:
    {
        returnValue = F("Nassaustr.");
        break;
    }
    case 228262:
    {
        returnValue = F("Nassauweg");
        break;
    }
    case 228263:
    {
        returnValue = F("Nasse Breite");
        break;
    }
    case 228264:
    {
        returnValue = F("Nasse Füße");
        break;
    }
    case 228265:
    {
        returnValue = F("Nasse Gasse");
        break;
    }
    case 228266:
    {
        returnValue = F("Nasse Gewand");
        break;
    }
    case 228267:
    {
        returnValue = F("Nasse Heide");
        break;
    }
    case 228268:
    {
        returnValue = F("Nasse Str.");
        break;
    }
    case 228269:
    {
        returnValue = F("Nasse Welle");
        break;
    }
    case 228270:
    {
        returnValue = F("Nasse Wenne");
        break;
    }
    case 228271:
    {
        returnValue = F("Nassebendsweg");
        break;
    }
    case 228272:
    {
        returnValue = F("Nassebrückenweg");
        break;
    }
    case 228273:
    {
        returnValue = F("Nasseböhlaer Weg");
        break;
    }
    case 228274:
    {
        returnValue = F("Nassefösswech");
        break;
    }
    case 228275:
    {
        returnValue = F("Nassen");
        break;
    }
    case 228276:
    {
        returnValue = F("Nassenbeurer Weg");
        break;
    }
    case 228277:
    {
        returnValue = F("Nassenbüsch");
        break;
    }
    case 228278:
    {
        returnValue = F("Nassenerfurther Str.");
        break;
    }
    case 228279:
    {
        returnValue = F("Nassengasse");
        break;
    }
    case 228280:
    {
        returnValue = F("Nassengrund");
        break;
    }
    case 228281:
    {
        returnValue = F("Nassengrundweg");
        break;
    }
    case 228282:
    {
        returnValue = F("Nassenhausener Str.");
        break;
    }
    case 228283:
    {
        returnValue = F("Nassenheider Chaussee");
        break;
    }
    case 228284:
    {
        returnValue = F("Nassenheider Weg");
        break;
    }
    case 228285:
    {
        returnValue = F("Nassenkamp");
        break;
    }
    case 228286:
    {
        returnValue = F("Nassenkampstr.");
        break;
    }
    case 228287:
    {
        returnValue = F("Nassenstein");
        break;
    }
    case 228288:
    {
        returnValue = F("Nassenweg");
        break;
    }
    case 228289:
    {
        returnValue = F("Nasser Brückenweg");
        break;
    }
    case 228290:
    {
        returnValue = F("Nasser Grabenweg");
        break;
    }
    case 228291:
    {
        returnValue = F("Nasser Grund");
        break;
    }
    case 228292:
    {
        returnValue = F("Nasser Hauweg");
        break;
    }
    case 228293:
    {
        returnValue = F("Nasser Kamp");
        break;
    }
    case 228294:
    {
        returnValue = F("Nasser Weg");
        break;
    }
    case 228295:
    {
        returnValue = F("Nasserplattenweg");
        break;
    }
    case 228296:
    {
        returnValue = F("Nasses Alleele");
        break;
    }
    case 228297:
    {
        returnValue = F("Nasses Holz");
        break;
    }
    case 228298:
    {
        returnValue = F("Nassestr.");
        break;
    }
    case 228299:
    {
        returnValue = F("Nassgeigerweg");
        break;
    }
    case 228300:
    {
        returnValue = F("Nassgewann");
        break;
    }
    case 228301:
    {
        returnValue = F("Nassiger Str.");
        break;
    }
    case 228302:
    {
        returnValue = F("Nasskittelweg");
        break;
    }
    case 228303:
    {
        returnValue = F("Nasslager");
        break;
    }
    case 228304:
    {
        returnValue = F("Nasslagerweg");
        break;
    }
    case 228305:
    {
        returnValue = F("Nassmacherpassage");
        break;
    }
    case 228306:
    {
        returnValue = F("Nassoviastr.");
        break;
    }
    case 228307:
    {
        returnValue = F("Nasswaldweg");
        break;
    }
    case 228308:
    {
        returnValue = F("Nastplatz");
        break;
    }
    case 228309:
    {
        returnValue = F("Naststr.");
        break;
    }
    case 228310:
    {
        returnValue = F("Nastätter Str.");
        break;
    }
    case 228311:
    {
        returnValue = F("Nastätter Weg");
        break;
    }
    case 228312:
    {
        returnValue = F("Nat Fieftein");
        break;
    }
    case 228313:
    {
        returnValue = F("Nat ole Hus");
        break;
    }
    case 228314:
    {
        returnValue = F("Nat'Our Route 2");
        break;
    }
    case 228315:
    {
        returnValue = F("NatURWALDpfad Schönberg");
        break;
    }
    case 228316:
    {
        returnValue = F("Natalie-Von-Harder-Str.");
        break;
    }
    case 228317:
    {
        returnValue = F("Natalienstr.");
        break;
    }
    case 228318:
    {
        returnValue = F("Natalisweg");
        break;
    }
    case 228319:
    {
        returnValue = F("Natarp");
        break;
    }
    case 228320:
    {
        returnValue = F("Natbergerweg");
        break;
    }
    case 228321:
    {
        returnValue = F("Natelner Str.");
        break;
    }
    case 228322:
    {
        returnValue = F("Natelner Weg");
        break;
    }
    case 228323:
    {
        returnValue = F("Natelsdamm");
        break;
    }
    case 228324:
    {
        returnValue = F("Natelsheideweg");
        break;
    }
    case 228325:
    {
        returnValue = F("Natenbergweg");
        break;
    }
    case 228326:
    {
        returnValue = F("Natenestr.");
        break;
    }
    case 228327:
    {
        returnValue = F("Natenheide");
        break;
    }
    case 228328:
    {
        returnValue = F("Natenhöhe");
        break;
    }
    case 228329:
    {
        returnValue = F("Natenhöher Str.");
        break;
    }
    case 228330:
    {
        returnValue = F("Natenkamp");
        break;
    }
    case 228331:
    {
        returnValue = F("Natenstedt");
        break;
    }
    case 228332:
    {
        returnValue = F("Natenstedter Weg");
        break;
    }
    case 228333:
    {
        returnValue = F("Natenstieg");
        break;
    }
    case 228334:
    {
        returnValue = F("Nateweg");
        break;
    }
    case 228335:
    {
        returnValue = F("Nathan-Kahn-Str.");
        break;
    }
    case 228336:
    {
        returnValue = F("Nathan-Platz");
        break;
    }
    case 228337:
    {
        returnValue = F("Nathan-R.-Preston-Str.");
        break;
    }
    case 228338:
    {
        returnValue = F("Nathan-Trier-Str.");
        break;
    }
    case 228339:
    {
        returnValue = F("Nathan-Walter-Str.");
        break;
    }
    case 228340:
    {
        returnValue = F("Nathanaelstr.");
        break;
    }
    case 228341:
    {
        returnValue = F("Nathanstr.");
        break;
    }
    case 228342:
    {
        returnValue = F("Nathebachstr.");
        break;
    }
    case 228343:
    {
        returnValue = F("Natheforth's Kreuz");
        break;
    }
    case 228344:
    {
        returnValue = F("Natheidenschneise");
        break;
    }
    case 228345:
    {
        returnValue = F("Natherstr.");
        break;
    }
    case 228346:
    {
        returnValue = F("Natherweg");
        break;
    }
    case 228347:
    {
        returnValue = F("Nathestr.");
        break;
    }
    case 228348:
    {
        returnValue = F("Natheweg");
        break;
    }
    case 228349:
    {
        returnValue = F("Nathlandstr.");
        break;
    }
    case 228350:
    {
        returnValue = F("Nathmannsheide");
        break;
    }
    case 228351:
    {
        returnValue = F("Nathmerichstr.");
        break;
    }
    case 228352:
    {
        returnValue = F("Nathoer Dorfstr.");
        break;
    }
    case 228353:
    {
        returnValue = F("Nathoer Weg");
        break;
    }
    case 228354:
    {
        returnValue = F("Nathrather Str.");
        break;
    }
    case 228355:
    {
        returnValue = F("Nathrathstr.");
        break;
    }
    case 228356:
    {
        returnValue = F("Nathstr.");
        break;
    }
    case 228357:
    {
        returnValue = F("Nathweg");
        break;
    }
    case 228358:
    {
        returnValue = F("Natinger Str.");
        break;
    }
    case 228359:
    {
        returnValue = F("Natinger Weg");
        break;
    }
    case 228360:
    {
        returnValue = F("Nationalgasse");
        break;
    }
    case 228361:
    {
        returnValue = F("Nationalparkstr.");
        break;
    }
    case 228362:
    {
        returnValue = F("Nationalstr.");
        break;
    }
    case 228363:
    {
        returnValue = F("Natland");
        break;
    }
    case 228364:
    {
        returnValue = F("Nato-Str.");
        break;
    }
    case 228365:
    {
        returnValue = F("Natobrücke");
        break;
    }
    case 228366:
    {
        returnValue = F("Natonekstr.");
        break;
    }
    case 228367:
    {
        returnValue = F("Natorp");
        break;
    }
    case 228368:
    {
        returnValue = F("Natorper Str.");
        break;
    }
    case 228369:
    {
        returnValue = F("Natorpstr.");
        break;
    }
    case 228370:
    {
        returnValue = F("Natorpweg");
        break;
    }
    case 228371:
    {
        returnValue = F("Natostr.");
        break;
    }
    case 228372:
    {
        returnValue = F("Natroper Weg");
        break;
    }
    case 228373:
    {
        returnValue = F("Natrup-Hagener-Str.");
        break;
    }
    case 228374:
    {
        returnValue = F("Natruper Str.");
        break;
    }
    case 228375:
    {
        returnValue = F("Natruper-Tor-Wall");
        break;
    }
    case 228376:
    {
        returnValue = F("Natt");
        break;
    }
    case 228377:
    {
        returnValue = F("Natte");
        break;
    }
    case 228378:
    {
        returnValue = F("Nattenbucher Weg");
        break;
    }
    case 228379:
    {
        returnValue = F("Nattenhausener Str.");
        break;
    }
    case 228380:
    {
        returnValue = F("Nattenhauser Str.");
        break;
    }
    case 228381:
    {
        returnValue = F("Nattenhauser Weg");
        break;
    }
    case 228382:
    {
        returnValue = F("Nattenheimer Str.");
        break;
    }
    case 228383:
    {
        returnValue = F("Natterheide");
        break;
    }
    case 228384:
    {
        returnValue = F("Natterheider Str.");
        break;
    }
    case 228385:
    {
        returnValue = F("Natterholzer Str.");
        break;
    }
    case 228386:
    {
        returnValue = F("Nattermannallee");
        break;
    }
    case 228387:
    {
        returnValue = F("Nattermooser Str.");
        break;
    }
    case 228388:
    {
        returnValue = F("Nattermoosstr.");
        break;
    }
    case 228389:
    {
        returnValue = F("Natternberg");
        break;
    }
    case 228390:
    {
        returnValue = F("Natternberger Str.");
        break;
    }
    case 228391:
    {
        returnValue = F("Natternbergstr.");
        break;
    }
    case 228392:
    {
        returnValue = F("Natternbrunnenweg");
        break;
    }
    case 228393:
    {
        returnValue = F("Natternstieg");
        break;
    }
    case 228394:
    {
        returnValue = F("Natternweg");
        break;
    }
    case 228395:
    {
        returnValue = F("Natterpfad");
        break;
    }
    case 228396:
    {
        returnValue = F("Nattersdorf");
        break;
    }
    case 228397:
    {
        returnValue = F("Natterweg");
        break;
    }
    case 228398:
    {
        returnValue = F("Natteweg");
        break;
    }
    case 228399:
    {
        returnValue = F("Nattewisch");
        break;
    }
    case 228400:
    {
        returnValue = F("Nattheimer Steige");
        break;
    }
    case 228401:
    {
        returnValue = F("Nattheimer Str.");
        break;
    }
    case 228402:
    {
        returnValue = F("Nattmannsweg");
        break;
    }
    case 228403:
    {
        returnValue = F("Nattweg");
        break;
    }
    case 228404:
    {
        returnValue = F("Nattwerder Weg");
        break;
    }
    case 228405:
    {
        returnValue = F("Natur Erlebnis Weg");
        break;
    }
    case 228406:
    {
        returnValue = F("Natur Ferienpark");
        break;
    }
    case 228407:
    {
        returnValue = F("Natur Lehrpfad");
        break;
    }
    case 228408:
    {
        returnValue = F("Natur- und Erlebnispfad");
        break;
    }
    case 228409:
    {
        returnValue = F("Natur- und Kreidelehrpfad um den Kreidebruch Gummanz");
        break;
    }
    case 228410:
    {
        returnValue = F("Natur- und Sportfreunde e.V. Aachen");
        break;
    }
    case 228411:
    {
        returnValue = F("Natur- und Tierpark");
        break;
    }
    case 228412:
    {
        returnValue = F("Natur- und Tierpark Brüggen");
        break;
    }
    case 228413:
    {
        returnValue = F("Natur-, Lehr- und Beobachtungsgelände");
        break;
    }
    case 228414:
    {
        returnValue = F("Natur-Erlebnis-Pfad");
        break;
    }
    case 228415:
    {
        returnValue = F("Natur-Erlebnisgarten");
        break;
    }
    case 228416:
    {
        returnValue = F("Natur-Erlebnisgarten - Bauerngarten");
        break;
    }
    case 228417:
    {
        returnValue = F("Natur-Erlebnispfad");
        break;
    }
    case 228418:
    {
        returnValue = F("Natur-Kurpark");
        break;
    }
    case 228419:
    {
        returnValue = F("Natur-Lehrgarten");
        break;
    }
    case 228420:
    {
        returnValue = F("Natur-Lehrpfad Karlstein");
        break;
    }
    case 228421:
    {
        returnValue = F("Natur-Oase");
        break;
    }
    case 228422:
    {
        returnValue = F("Natur/Freizeitpark Flößrasen");
        break;
    }
    case 228423:
    {
        returnValue = F("NaturAktivPlatz");
        break;
    }
    case 228424:
    {
        returnValue = F("NaturErlebnisPfad");
        break;
    }
    case 228425:
    {
        returnValue = F("NaturaGart Landschafts- und Tauchpark");
        break;
    }
    case 228426:
    {
        returnValue = F("Naturbad Aachtal");
        break;
    }
    case 228427:
    {
        returnValue = F("Naturbad Postbauer-Heng");
        break;
    }
    case 228428:
    {
        returnValue = F("Naturbad Selingau");
        break;
    }
    case 228429:
    {
        returnValue = F("Naturbadstr.");
        break;
    }
    case 228430:
    {
        returnValue = F("Naturbelassener Garten der Achtsamkeit");
        break;
    }
    case 228431:
    {
        returnValue = F("Naturbrücke");
        break;
    }
    case 228432:
    {
        returnValue = F("Naturcamp Ragösen");
        break;
    }
    case 228433:
    {
        returnValue = F("Naturdenkmal \"Seufzer Allee");
        break;
    }
    case 228434:
    {
        returnValue = F("Naturdenkmal Druidenbusch");
        break;
    }
    case 228435:
    {
        returnValue = F("Naturdenkmal Parkanlage am Karlshof");
        break;
    }
    case 228436:
    {
        returnValue = F("Naturdenkmal Rockseneiche");
        break;
    }
    case 228437:
    {
        returnValue = F("Naturerlebnis Erlensee");
        break;
    }
    case 228438:
    {
        returnValue = F("Naturerlebnis-Weg Iba");
        break;
    }
    case 228439:
    {
        returnValue = F("Naturerlebnisbereich Huchtinger Fleet Nord");
        break;
    }
    case 228440:
    {
        returnValue = F("Naturerlebnisbereich Huchtinger Fleet Süd");
        break;
    }
    case 228441:
    {
        returnValue = F("Naturerlebnisbrücke");
        break;
    }
    case 228442:
    {
        returnValue = F("Naturerlebnispark Lübs");
        break;
    }
    case 228443:
    {
        returnValue = F("Naturerlebnispark Mühlenhagen");
        break;
    }
    case 228444:
    {
        returnValue = F("Naturerlebnispfad");
        break;
    }
    case 228445:
    {
        returnValue = F("Naturerlebnispfad NEPP");
        break;
    }
    case 228446:
    {
        returnValue = F("Naturerlebnispfad Ohre");
        break;
    }
    case 228447:
    {
        returnValue = F("Naturerlebnispfad Regen");
        break;
    }
    case 228448:
    {
        returnValue = F("Naturerlebnispfad Sophienhöhe");
        break;
    }
    case 228449:
    {
        returnValue = F("Naturerlebnisraum Bibertinsel");
        break;
    }
    case 228450:
    {
        returnValue = F("Naturerlebnisraum Pfarrhof Schönwalde");
        break;
    }
    case 228451:
    {
        returnValue = F("Naturerlebnisweg Vilsaue");
        break;
    }
    case 228452:
    {
        returnValue = F("Natureum II");
        break;
    }
    case 228453:
    {
        returnValue = F("Naturfreibad Legau");
        break;
    }
    case 228454:
    {
        returnValue = F("Naturfreibad Winterlingen");
        break;
    }
    case 228455:
    {
        returnValue = F("Naturfreunde Bodensee");
        break;
    }
    case 228456:
    {
        returnValue = F("Naturfreunde Park");
        break;
    }
    case 228457:
    {
        returnValue = F("Naturfreundehausweg");
        break;
    }
    case 228458:
    {
        returnValue = F("Naturfreundestr.");
        break;
    }
    case 228459:
    {
        returnValue = F("Naturfreundeweg");
        break;
    }
    case 228460:
    {
        returnValue = F("Naturgarten Lindenallee");
        break;
    }
    case 228461:
    {
        returnValue = F("Naturgarten NABU");
        break;
    }
    case 228462:
    {
        returnValue = F("Naturgarten Rolfscher Hof");
        break;
    }
    case 228463:
    {
        returnValue = F("Naturgarten Vergissmeinnicht");
        break;
    }
    case 228464:
    {
        returnValue = F("Naturgarten des BUND-Bad Langensalza");
        break;
    }
    case 228465:
    {
        returnValue = F("Naturgärten");
        break;
    }
    case 228466:
    {
        returnValue = F("Naturheilpark");
        break;
    }
    case 228467:
    {
        returnValue = F("Naturistenbund Kurpfalz");
        break;
    }
    case 228468:
    {
        returnValue = F("Naturlehrgebiet");
        break;
    }
    case 228469:
    {
        returnValue = F("Naturlehrpfad");
        break;
    }
    case 228470:
    {
        returnValue = F("Naturlehrpfad \"Großer Klietzer See");
        break;
    }
    case 228471:
    {
        returnValue = F("Naturlehrpfad \"Heinrich Cotta");
        break;
    }
    case 228472:
    {
        returnValue = F("Naturlehrpfad \"Lust");
        break;
    }
    case 228473:
    {
        returnValue = F("Naturlehrpfad \"Rauener Berge");
        break;
    }
    case 228474:
    {
        returnValue = F("Naturlehrpfad \"Zoberberg");
        break;
    }
    case 228475:
    {
        returnValue = F("Naturlehrpfad / Loipe");
        break;
    }
    case 228476:
    {
        returnValue = F("Naturlehrpfad Aschach");
        break;
    }
    case 228477:
    {
        returnValue = F("Naturlehrpfad Bad Birnbach");
        break;
    }
    case 228478:
    {
        returnValue = F("Naturlehrpfad Binnbachtal");
        break;
    }
    case 228479:
    {
        returnValue = F("Naturlehrpfad Eichental");
        break;
    }
    case 228480:
    {
        returnValue = F("Naturlehrpfad Geißenhölzle");
        break;
    }
    case 228481:
    {
        returnValue = F("Naturlehrpfad Graben-Neudorf");
        break;
    }
    case 228482:
    {
        returnValue = F("Naturlehrpfad Grießen");
        break;
    }
    case 228483:
    {
        returnValue = F("Naturlehrpfad Gönnatal");
        break;
    }
    case 228484:
    {
        returnValue = F("Naturlehrpfad Karnin");
        break;
    }
    case 228485:
    {
        returnValue = F("Naturlehrpfad Kleiner Klietzer See");
        break;
    }
    case 228486:
    {
        returnValue = F("Naturlehrpfad Kleiner Klietzer See alternative");
        break;
    }
    case 228487:
    {
        returnValue = F("Naturlehrpfad Litschental");
        break;
    }
    case 228488:
    {
        returnValue = F("Naturlehrpfad Neurott");
        break;
    }
    case 228489:
    {
        returnValue = F("Naturlehrpfad Quetziner Tannen");
        break;
    }
    case 228490:
    {
        returnValue = F("Naturlehrpfad Schinderkoppel Pegau");
        break;
    }
    case 228491:
    {
        returnValue = F("Naturlehrpfad Wildtierauffangstation");
        break;
    }
    case 228492:
    {
        returnValue = F("Naturlehrpfad Wooster Heide");
        break;
    }
    case 228493:
    {
        returnValue = F("Naturlehrpfad am Dörnthaler Teich");
        break;
    }
    case 228494:
    {
        returnValue = F("Naturlehrpfad rund um den Mühlgraben");
        break;
    }
    case 228495:
    {
        returnValue = F("Naturlernpark Strohbach");
        break;
    }
    case 228496:
    {
        returnValue = F("Naturnaher Park");
        break;
    }
    case 228497:
    {
        returnValue = F("Naturnaher Spielraum");
        break;
    }
    case 228498:
    {
        returnValue = F("Naturnser Str.");
        break;
    }
    case 228499:
    {
        returnValue = F("Naturoase");
        break;
    }
    case 228500:
    {
        returnValue = F("Naturoase Scharnebeck");
        break;
    }
    case 228501:
    {
        returnValue = F("Naturparadies");
        break;
    }
    case 228502:
    {
        returnValue = F("Naturpark");
        break;
    }
    case 228503:
    {
        returnValue = F("Naturpark Gänseräse");
        break;
    }
    case 228504:
    {
        returnValue = F("Naturpark Hangkamp");
        break;
    }
    case 228505:
    {
        returnValue = F("Naturpark Hofanger");
        break;
    }
    case 228506:
    {
        returnValue = F("Naturpark Kellen");
        break;
    }
    case 228507:
    {
        returnValue = F("Naturpark Kohlstatt");
        break;
    }
    case 228508:
    {
        returnValue = F("Naturpark Löwitz");
        break;
    }
    case 228509:
    {
        returnValue = F("Naturpark Treene");
        break;
    }
    case 228510:
    {
        returnValue = F("Naturpark Varusturm");
        break;
    }
    case 228511:
    {
        returnValue = F("Naturpark am Freibad");
        break;
    }
    case 228512:
    {
        returnValue = F("Naturparkstr.");
        break;
    }
    case 228513:
    {
        returnValue = F("Naturparkweg");
        break;
    }
    case 228514:
    {
        returnValue = F("Naturpfad");
        break;
    }
    case 228515:
    {
        returnValue = F("Naturpfad Weltende");
        break;
    }
    case 228516:
    {
        returnValue = F("Naturschaugarten (im Bau)");
        break;
    }
    case 228517:
    {
        returnValue = F("Naturschutzcamp");
        break;
    }
    case 228518:
    {
        returnValue = F("Naturschutzgrenzgebietsweg");
        break;
    }
    case 228519:
    {
        returnValue = F("Naturschutzpark");
        break;
    }
    case 228520:
    {
        returnValue = F("Naturschutzweg");
        break;
    }
    case 228521:
    {
        returnValue = F("Naturschwimmbad Seeburger See");
        break;
    }
    case 228522:
    {
        returnValue = F("Natursportzentrum");
        break;
    }
    case 228523:
    {
        returnValue = F("Naturstadion");
        break;
    }
    case 228524:
    {
        returnValue = F("Natursteig");
        break;
    }
    case 228525:
    {
        returnValue = F("Naturstrandbad Kressbronn");
        break;
    }
    case 228526:
    {
        returnValue = F("Naturwanderpfad");
        break;
    }
    case 228527:
    {
        returnValue = F("Naturweg");
        break;
    }
    case 228528:
    {
        returnValue = F("Naturwerkstatt");
        break;
    }
    case 228529:
    {
        returnValue = F("Naturwildpark Freisen");
        break;
    }
    case 228530:
    {
        returnValue = F("Natz-Thier-Str.");
        break;
    }
    case 228531:
    {
        returnValue = F("Natz-Thier-Weg");
        break;
    }
    case 228532:
    {
        returnValue = F("Natzentalweg");
        break;
    }
    case 228533:
    {
        returnValue = F("Natzfeldstr.");
        break;
    }
    case 228534:
    {
        returnValue = F("Natzlweg");
        break;
    }
    case 228535:
    {
        returnValue = F("Natzunger Str.");
        break;
    }
    case 228536:
    {
        returnValue = F("Nauberger Landstr.");
        break;
    }
    case 228537:
    {
        returnValue = F("Nauberger Str.");
        break;
    }
    case 228538:
    {
        returnValue = F("Nauberger Weg");
        break;
    }
    case 228539:
    {
        returnValue = F("Naubergstr.");
        break;
    }
    case 228540:
    {
        returnValue = F("Nauborner Str.");
        break;
    }
    case 228541:
    {
        returnValue = F("Naudiner Str.");
        break;
    }
    case 228542:
    {
        returnValue = F("Naudiner Weg");
        break;
    }
    case 228543:
    {
        returnValue = F("Nauenacker");
        break;
    }
    case 228544:
    {
        returnValue = F("Nauendorfer Gartenstr.");
        break;
    }
    case 228545:
    {
        returnValue = F("Nauendorfer Hauptstr.");
        break;
    }
    case 228546:
    {
        returnValue = F("Nauendorfer Str.");
        break;
    }
    case 228547:
    {
        returnValue = F("Nauendorfer Weg");
        break;
    }
    case 228548:
    {
        returnValue = F("Nauener Ausbau");
        break;
    }
    case 228549:
    {
        returnValue = F("Nauener Chaussee");
        break;
    }
    case 228550:
    {
        returnValue = F("Nauener Landweg");
        break;
    }
    case 228551:
    {
        returnValue = F("Nauener Str.");
        break;
    }
    case 228552:
    {
        returnValue = F("Nauener Weg");
        break;
    }
    case 228553:
    {
        returnValue = F("Nauenhain");
        break;
    }
    case 228554:
    {
        returnValue = F("Nauenhainer Weg");
        break;
    }
    case 228555:
    {
        returnValue = F("Nauens");
        break;
    }
    case 228556:
    {
        returnValue = F("Nauenstege");
        break;
    }
    case 228557:
    {
        returnValue = F("Nauenstr.");
        break;
    }
    case 228558:
    {
        returnValue = F("Nauenweg");
        break;
    }
    case 228559:
    {
        returnValue = F("Nauenäckerstr.");
        break;
    }
    case 228560:
    {
        returnValue = F("Nauer Berg");
        break;
    }
    case 228561:
    {
        returnValue = F("Nauestr.");
        break;
    }
    case 228562:
    {
        returnValue = F("Naugardenring");
        break;
    }
    case 228563:
    {
        returnValue = F("Naugarder Str.");
        break;
    }
    case 228564:
    {
        returnValue = F("Naugarder Weg");
        break;
    }
    case 228565:
    {
        returnValue = F("Naugartener Str.");
        break;
    }
    case 228566:
    {
        returnValue = F("Naugartener Weg");
        break;
    }
    case 228567:
    {
        returnValue = F("Nauhain");
        break;
    }
    case 228568:
    {
        returnValue = F("Nauheimer Landstr.");
        break;
    }
    case 228569:
    {
        returnValue = F("Nauheimer Str.");
        break;
    }
    case 228570:
    {
        returnValue = F("Nauheimer Weg");
        break;
    }
    case 228571:
    {
        returnValue = F("Nauholzer Weg");
        break;
    }
    case 228572:
    {
        returnValue = F("Naukestr.");
        break;
    }
    case 228573:
    {
        returnValue = F("Nauklerstr.");
        break;
    }
    case 228574:
    {
        returnValue = F("Nauleis");
        break;
    }
    case 228575:
    {
        returnValue = F("Nauleiser Str.");
        break;
    }
    case 228576:
    {
        returnValue = F("Naulitz");
        break;
    }
    case 228577:
    {
        returnValue = F("Naulitzer Str.");
        break;
    }
    case 228578:
    {
        returnValue = F("Naulottstr.");
        break;
    }
    case 228579:
    {
        returnValue = F("Naumanns Gut");
        break;
    }
    case 228580:
    {
        returnValue = F("Naumannsruhe");
        break;
    }
    case 228581:
    {
        returnValue = F("Naumannstr.");
        break;
    }
    case 228582:
    {
        returnValue = F("Naumannsweg");
        break;
    }
    case 228583:
    {
        returnValue = F("Naumannweg");
        break;
    }
    case 228584:
    {
        returnValue = F("Naumborn");
        break;
    }
    case 228585:
    {
        returnValue = F("Naumburger Höfe");
        break;
    }
    case 228586:
    {
        returnValue = F("Naumburger Landstr.");
        break;
    }
    case 228587:
    {
        returnValue = F("Naumburger Str.");
        break;
    }
    case 228588:
    {
        returnValue = F("Naumburger Weg");
        break;
    }
    case 228589:
    {
        returnValue = F("Naumburgstr.");
        break;
    }
    case 228590:
    {
        returnValue = F("Naundorf");
        break;
    }
    case 228591:
    {
        returnValue = F("Naundorf Ausbau");
        break;
    }
    case 228592:
    {
        returnValue = F("Naundorfer Bergstr.");
        break;
    }
    case 228593:
    {
        returnValue = F("Naundorfer Dorfstr.");
        break;
    }
    case 228594:
    {
        returnValue = F("Naundorfer Gartenstr.");
        break;
    }
    case 228595:
    {
        returnValue = F("Naundorfer Landstr.");
        break;
    }
    case 228596:
    {
        returnValue = F("Naundorfer Mühle");
        break;
    }
    case 228597:
    {
        returnValue = F("Naundorfer Str.");
        break;
    }
    case 228598:
    {
        returnValue = F("Naundorfer Weg");
        break;
    }
    case 228599:
    {
        returnValue = F("Naundorfer Wiesenweg");
        break;
    }
    case 228600:
    {
        returnValue = F("Naundörfchen");
        break;
    }
    case 228601:
    {
        returnValue = F("Naunheimer Str.");
        break;
    }
    case 228602:
    {
        returnValue = F("Naunhof");
        break;
    }
    case 228603:
    {
        returnValue = F("Naunhofer Landstr.");
        break;
    }
    case 228604:
    {
        returnValue = F("Naunhofer Str.");
        break;
    }
    case 228605:
    {
        returnValue = F("Naunhofer Weg");
        break;
    }
    case 228606:
    {
        returnValue = F("Naunspitzstr.");
        break;
    }
    case 228607:
    {
        returnValue = F("Naunstädter Str.");
        break;
    }
    case 228608:
    {
        returnValue = F("Naunstädter Weg");
        break;
    }
    case 228609:
    {
        returnValue = F("Nauorter Str.");
        break;
    }
    case 228610:
    {
        returnValue = F("Naupliaallee");
        break;
    }
    case 228611:
    {
        returnValue = F("Naupliastr.");
        break;
    }
    case 228612:
    {
        returnValue = F("Naurather Str.");
        break;
    }
    case 228613:
    {
        returnValue = F("Naurathssiepen");
        break;
    }
    case 228614:
    {
        returnValue = F("Nauretal");
        break;
    }
    case 228615:
    {
        returnValue = F("Nauroder Str.");
        break;
    }
    case 228616:
    {
        returnValue = F("Naurother Str.");
        break;
    }
    case 228617:
    {
        returnValue = F("Naurother Weg");
        break;
    }
    case 228618:
    {
        returnValue = F("Nauschützstr.");
        break;
    }
    case 228619:
    {
        returnValue = F("Nausdorfer Str.");
        break;
    }
    case 228620:
    {
        returnValue = F("Nausdorfer Weg");
        break;
    }
    case 228621:
    {
        returnValue = F("Nausiser Str.");
        break;
    }
    case 228622:
    {
        returnValue = F("Nausiser Weg");
        break;
    }
    case 228623:
    {
        returnValue = F("Nausitzer Dorfstr.");
        break;
    }
    case 228624:
    {
        returnValue = F("Nausitzer Gasse");
        break;
    }
    case 228625:
    {
        returnValue = F("Nausißer Landstr.");
        break;
    }
    case 228626:
    {
        returnValue = F("Nausißer Str.");
        break;
    }
    case 228627:
    {
        returnValue = F("Naustr.");
        break;
    }
    case 228628:
    {
        returnValue = F("Nauteweg");
        break;
    }
    case 228629:
    {
        returnValue = F("Nautikstr.");
        break;
    }
    case 228630:
    {
        returnValue = F("Nautiland");
        break;
    }
    case 228631:
    {
        returnValue = F("Nautische Str.");
        break;
    }
    case 228632:
    {
        returnValue = F("Nautschkeufer");
        break;
    }
    case 228633:
    {
        returnValue = F("Nautschütz");
        break;
    }
    case 228634:
    {
        returnValue = F("Nauwalder Str.");
        break;
    }
    case 228635:
    {
        returnValue = F("Nauweg");
        break;
    }
    case 228636:
    {
        returnValue = F("Nauwerckstr.");
        break;
    }
    case 228637:
    {
        returnValue = F("Nauwies");
        break;
    }
    case 228638:
    {
        returnValue = F("Nauwiese");
        break;
    }
    case 228639:
    {
        returnValue = F("Nauwieserplatz");
        break;
    }
    case 228640:
    {
        returnValue = F("Nauwieserstr.");
        break;
    }
    case 228641:
    {
        returnValue = F("Nauwiesstr.");
        break;
    }
    case 228642:
    {
        returnValue = F("Naußlitz");
        break;
    }
    case 228643:
    {
        returnValue = F("Nawatzkistr.");
        break;
    }
    case 228644:
    {
        returnValue = F("Nawiaskystr.");
        break;
    }
    case 228645:
    {
        returnValue = F("Naxburgweg");
        break;
    }
    case 228646:
    {
        returnValue = F("Nazarethweg");
        break;
    }
    case 228647:
    {
        returnValue = F("Nazariusweg");
        break;
    }
    case 228648:
    {
        returnValue = F("Nazenbergstr.");
        break;
    }
    case 228649:
    {
        returnValue = F("Nazgasse");
        break;
    }
    case 228650:
    {
        returnValue = F("Nazzaer Weg");
        break;
    }
    case 228651:
    {
        returnValue = F("Nazzenbrunner Str.");
        break;
    }
    case 228652:
    {
        returnValue = F("Naßanger");
        break;
    }
    case 228653:
    {
        returnValue = F("Naßbruckenweg");
        break;
    }
    case 228654:
    {
        returnValue = F("Naßenharter Weg");
        break;
    }
    case 228655:
    {
        returnValue = F("Naßfeldstr.");
        break;
    }
    case 228656:
    {
        returnValue = F("Naßheckenstr.");
        break;
    }
    case 228657:
    {
        returnValue = F("Naßheckstr.");
        break;
    }
    case 228658:
    {
        returnValue = F("Naßlohweg");
        break;
    }
    case 228659:
    {
        returnValue = F("Naßlstr.");
        break;
    }
    case 228660:
    {
        returnValue = F("Naßmühle");
        break;
    }
    case 228661:
    {
        returnValue = F("Naßschieber");
        break;
    }
    case 228662:
    {
        returnValue = F("Naßweg");
        break;
    }
    case 228663:
    {
        returnValue = F("Naßweilerstr.");
        break;
    }
    case 228664:
    {
        returnValue = F("Naßäckerstr.");
        break;
    }
    case 228665:
    {
        returnValue = F("Ne'en Hoff");
        break;
    }
    case 228666:
    {
        returnValue = F("NeanderPark");
        break;
    }
    case 228667:
    {
        returnValue = F("Neanderhöhe");
        break;
    }
    case 228668:
    {
        returnValue = F("Neanderplatz");
        break;
    }
    case 228669:
    {
        returnValue = F("Neanderstr.");
        break;
    }
    case 228670:
    {
        returnValue = F("Neandertal");
        break;
    }
    case 228671:
    {
        returnValue = F("Neandertalstr.");
        break;
    }
    case 228672:
    {
        returnValue = F("Neandertalweg");
        break;
    }
    case 228673:
    {
        returnValue = F("Neanderweg");
        break;
    }
    case 228674:
    {
        returnValue = F("Nebbsallee");
        break;
    }
    case 228675:
    {
        returnValue = F("Nebel");
        break;
    }
    case 228676:
    {
        returnValue = F("Nebelbachstr.");
        break;
    }
    case 228677:
    {
        returnValue = F("Nebelbeekenstr.");
        break;
    }
    case 228678:
    {
        returnValue = F("Nebelberg");
        break;
    }
    case 228679:
    {
        returnValue = F("Nebelflucht");
        break;
    }
    case 228680:
    {
        returnValue = F("Nebelgang");
        break;
    }
    case 228681:
    {
        returnValue = F("Nebelgasse");
        break;
    }
    case 228682:
    {
        returnValue = F("Nebelhornring");
        break;
    }
    case 228683:
    {
        returnValue = F("Nebelhornstr.");
        break;
    }
    case 228684:
    {
        returnValue = F("Nebelhornweg");
        break;
    }
    case 228685:
    {
        returnValue = F("Nebelhöhlenweg");
        break;
    }
    case 228686:
    {
        returnValue = F("Nebelhöhlestr.");
        break;
    }
    case 228687:
    {
        returnValue = F("Nebelhöhleweg");
        break;
    }
    case 228688:
    {
        returnValue = F("Nebeliner Dorfstr.");
        break;
    }
    case 228689:
    {
        returnValue = F("Nebeliner Str.");
        break;
    }
    case 228690:
    {
        returnValue = F("Nebelring");
        break;
    }
    case 228691:
    {
        returnValue = F("Nebelsbach");
        break;
    }
    case 228692:
    {
        returnValue = F("Nebelsberger Str.");
        break;
    }
    case 228693:
    {
        returnValue = F("Nebelsberger Weg");
        break;
    }
    case 228694:
    {
        returnValue = F("Nebelschützer Str.");
        break;
    }
    case 228695:
    {
        returnValue = F("Nebelseestr.");
        break;
    }
    case 228696:
    {
        returnValue = F("Nebelseifener Str.");
        break;
    }
    case 228697:
    {
        returnValue = F("Nebelswall");
        break;
    }
    case 228698:
    {
        returnValue = F("Nebeltal");
        break;
    }
    case 228699:
    {
        returnValue = F("Nebelthaustr.");
        break;
    }
    case 228700:
    {
        returnValue = F("Neben dem Brand");
        break;
    }
    case 228701:
    {
        returnValue = F("Neben dem Burggraben");
        break;
    }
    case 228702:
    {
        returnValue = F("Neben dem Entenpfad");
        break;
    }
    case 228703:
    {
        returnValue = F("Neben dem Mühlweg");
        break;
    }
    case 228704:
    {
        returnValue = F("Neben dem Schubertweg");
        break;
    }
    case 228705:
    {
        returnValue = F("Neben dem alten Bahndamm");
        break;
    }
    case 228706:
    {
        returnValue = F("Neben den Rodäckern");
        break;
    }
    case 228707:
    {
        returnValue = F("Neben der Großen Metzgergasse");
        break;
    }
    case 228708:
    {
        returnValue = F("Neben der Hohl");
        break;
    }
    case 228709:
    {
        returnValue = F("Neben der Kirche");
        break;
    }
    case 228710:
    {
        returnValue = F("Neben der Stützelwiese");
        break;
    }
    case 228711:
    {
        returnValue = F("Nebenacker");
        break;
    }
    case 228712:
    {
        returnValue = F("Nebenauer Str.");
        break;
    }
    case 228713:
    {
        returnValue = F("Nebenausgang Parkebene");
        break;
    }
    case 228714:
    {
        returnValue = F("Nebenbank");
        break;
    }
    case 228715:
    {
        returnValue = F("Nebenbankstr.");
        break;
    }
    case 228716:
    {
        returnValue = F("Nebenborngasse");
        break;
    }
    case 228717:
    {
        returnValue = F("Nebenbruch");
        break;
    }
    case 228718:
    {
        returnValue = F("Nebendamm");
        break;
    }
    case 228719:
    {
        returnValue = F("Nebendorfer Weg");
        break;
    }
    case 228720:
    {
        returnValue = F("Nebenesch");
        break;
    }
    case 228721:
    {
        returnValue = F("Nebenflaarweg");
        break;
    }
    case 228722:
    {
        returnValue = F("Nebengasse");
        break;
    }
    case 228723:
    {
        returnValue = F("Nebengassenweg");
        break;
    }
    case 228724:
    {
        returnValue = F("Nebengäulsgasse");
        break;
    }
    case 228725:
    {
        returnValue = F("Nebenhofstr.");
        break;
    }
    case 228726:
    {
        returnValue = F("Nebeniusplatz");
        break;
    }
    case 228727:
    {
        returnValue = F("Nebeniusstr.");
        break;
    }
    case 228728:
    {
        returnValue = F("Nebeniusweg");
        break;
    }
    case 228729:
    {
        returnValue = F("Nebenkrug");
        break;
    }
    case 228730:
    {
        returnValue = F("Nebenlengfurterstr.");
        break;
    }
    case 228731:
    {
        returnValue = F("Nebenpfarrgasse");
        break;
    }
    case 228732:
    {
        returnValue = F("Nebenrittergasse");
        break;
    }
    case 228733:
    {
        returnValue = F("Nebenschauplatz Sinneswald");
        break;
    }
    case 228734:
    {
        returnValue = F("Nebensteig");
        break;
    }
    case 228735:
    {
        returnValue = F("Nebensteigle");
        break;
    }
    case 228736:
    {
        returnValue = F("Nebensteingasse");
        break;
    }
    case 228737:
    {
        returnValue = F("Nebenstr.");
        break;
    }
    case 228738:
    {
        returnValue = F("Nebenstr. Grieben");
        break;
    }
    case 228739:
    {
        returnValue = F("Nebenweg");
        break;
    }
    case 228740:
    {
        returnValue = F("Nebestr.");
        break;
    }
    case 228741:
    {
        returnValue = F("Nebingerhof");
        break;
    }
    case 228742:
    {
        returnValue = F("Nebitzschner Str.");
        break;
    }
    case 228743:
    {
        returnValue = F("Nebraer Str.");
        break;
    }
    case 228744:
    {
        returnValue = F("Nebraer Tor");
        break;
    }
    case 228745:
    {
        returnValue = F("Nebraer Weg");
        break;
    }
    case 228746:
    {
        returnValue = F("Nebraskastr.");
        break;
    }
    case 228747:
    {
        returnValue = F("Nebringer Steige");
        break;
    }
    case 228748:
    {
        returnValue = F("Nebringer Str.");
        break;
    }
    case 228749:
    {
        returnValue = F("Nebringer Weg");
        break;
    }
    case 228750:
    {
        returnValue = F("Nechener Str.");
        break;
    }
    case 228751:
    {
        returnValue = F("Nechlin");
        break;
    }
    case 228752:
    {
        returnValue = F("Nechwatalstr.");
        break;
    }
    case 228753:
    {
        returnValue = F("Neckanitzer Str.");
        break;
    }
    case 228754:
    {
        returnValue = F("Neckar-Alb-Str.");
        break;
    }
    case 228755:
    {
        returnValue = F("Neckarallee");
        break;
    }
    case 228756:
    {
        returnValue = F("Neckaranlage");
        break;
    }
    case 228757:
    {
        returnValue = F("Neckarau");
        break;
    }
    case 228758:
    {
        returnValue = F("Neckaraue");
        break;
    }
    case 228759:
    {
        returnValue = F("Neckarauer Str.");
        break;
    }
    case 228760:
    {
        returnValue = F("Neckarauer Waldweg");
        break;
    }
    case 228761:
    {
        returnValue = F("Neckarauer Übergang");
        break;
    }
    case 228762:
    {
        returnValue = F("Neckarbad");
        break;
    }
    case 228763:
    {
        returnValue = F("Neckarblick");
        break;
    }
    case 228764:
    {
        returnValue = F("Neckarbrücke");
        break;
    }
    case 228765:
    {
        returnValue = F("Neckarburg");
        break;
    }
    case 228766:
    {
        returnValue = F("Neckarburger Weg");
        break;
    }
    case 228767:
    {
        returnValue = F("Neckarburkener Str.");
        break;
    }
    case 228768:
    {
        returnValue = F("Neckarelz, Bahnhof");
        break;
    }
    case 228769:
    {
        returnValue = F("Neckarelzer Landstr.");
        break;
    }
    case 228770:
    {
        returnValue = F("Neckarelzer Str.");
        break;
    }
    case 228771:
    {
        returnValue = F("Neckargartacher Brücke");
        break;
    }
    case 228772:
    {
        returnValue = F("Neckargartacher Str.");
        break;
    }
    case 228773:
    {
        returnValue = F("Neckargasse");
        break;
    }
    case 228774:
    {
        returnValue = F("Neckargemünder Str.");
        break;
    }
    case 228775:
    {
        returnValue = F("Neckargemünder Weg");
        break;
    }
    case 228776:
    {
        returnValue = F("Neckargemünderweg");
        break;
    }
    case 228777:
    {
        returnValue = F("Neckargemündweg");
        break;
    }
    case 228778:
    {
        returnValue = F("Neckargeracher Str.");
        break;
    }
    case 228779:
    {
        returnValue = F("Neckargewann");
        break;
    }
    case 228780:
    {
        returnValue = F("Neckargröninger Str.");
        break;
    }
    case 228781:
    {
        returnValue = F("Neckargröninger Weg");
        break;
    }
    case 228782:
    {
        returnValue = F("Neckargrün");
        break;
    }
    case 228783:
    {
        returnValue = F("Neckarhalde");
        break;
    }
    case 228784:
    {
        returnValue = F("Neckarhaldenweg");
        break;
    }
    case 228785:
    {
        returnValue = F("Neckarhamm");
        break;
    }
    case 228786:
    {
        returnValue = F("Neckarhangweg");
        break;
    }
    case 228787:
    {
        returnValue = F("Neckarhausen");
        break;
    }
    case 228788:
    {
        returnValue = F("Neckarhauser Str.");
        break;
    }
    case 228789:
    {
        returnValue = F("Neckarhauser Weg");
        break;
    }
    case 228790:
    {
        returnValue = F("Neckarhof");
        break;
    }
    case 228791:
    {
        returnValue = F("Neckarhälde");
        break;
    }
    case 228792:
    {
        returnValue = F("Neckarhäuser Str.");
        break;
    }
    case 228793:
    {
        returnValue = F("Neckarhäuserhofstr.");
        break;
    }
    case 228794:
    {
        returnValue = F("Neckarhäuserweg");
        break;
    }
    case 228795:
    {
        returnValue = F("Neckarhöhe");
        break;
    }
    case 228796:
    {
        returnValue = F("Neckarkanalstr.");
        break;
    }
    case 228797:
    {
        returnValue = F("Neckarkatzenbacher Str.");
        break;
    }
    case 228798:
    {
        returnValue = F("Neckarmünzgasse");
        break;
    }
    case 228799:
    {
        returnValue = F("Neckarmünzplatz");
        break;
    }
    case 228800:
    {
        returnValue = F("Neckarpark");
        break;
    }
    case 228801:
    {
        returnValue = F("Neckarplatt");
        break;
    }
    case 228802:
    {
        returnValue = F("Neckarplatten");
        break;
    }
    case 228803:
    {
        returnValue = F("Neckarplatz");
        break;
    }
    case 228804:
    {
        returnValue = F("Neckarpromenade");
        break;
    }
    case 228805:
    {
        returnValue = F("Neckarrain");
        break;
    }
    case 228806:
    {
        returnValue = F("Neckarremser Str.");
        break;
    }
    case 228807:
    {
        returnValue = F("Neckarremser Weg");
        break;
    }
    case 228808:
    {
        returnValue = F("Neckarring");
        break;
    }
    case 228809:
    {
        returnValue = F("Neckarspitze");
        break;
    }
    case 228810:
    {
        returnValue = F("Neckarstaden");
        break;
    }
    case 228811:
    {
        returnValue = F("Neckarsteg");
        break;
    }
    case 228812:
    {
        returnValue = F("Neckarsteige");
        break;
    }
    case 228813:
    {
        returnValue = F("Neckarsteinacher Str.");
        break;
    }
    case 228814:
    {
        returnValue = F("Neckarstr.");
        break;
    }
    case 228815:
    {
        returnValue = F("Neckarstrand");
        break;
    }
    case 228816:
    {
        returnValue = F("Neckarsulmer Ring");
        break;
    }
    case 228817:
    {
        returnValue = F("Neckarsulmer Str.");
        break;
    }
    case 228818:
    {
        returnValue = F("Neckarsulmer Weg");
        break;
    }
    case 228819:
    {
        returnValue = F("Neckartailfinger Str.");
        break;
    }
    case 228820:
    {
        returnValue = F("Neckartal");
        break;
    }
    case 228821:
    {
        returnValue = F("Neckartal-Radweg");
        break;
    }
    case 228822:
    {
        returnValue = F("Neckartalblick");
        break;
    }
    case 228823:
    {
        returnValue = F("Neckartalstr.");
        break;
    }
    case 228824:
    {
        returnValue = F("Neckartalweg");
        break;
    }
    case 228825:
    {
        returnValue = F("Neckartenzlinger Str.");
        break;
    }
    case 228826:
    {
        returnValue = F("Neckartorplatz");
        break;
    }
    case 228827:
    {
        returnValue = F("Neckarufer");
        break;
    }
    case 228828:
    {
        returnValue = F("Neckaruferpark");
        break;
    }
    case 228829:
    {
        returnValue = F("Neckaruferweg");
        break;
    }
    case 228830:
    {
        returnValue = F("Neckarwasen");
        break;
    }
    case 228831:
    {
        returnValue = F("Neckarweg");
        break;
    }
    case 228832:
    {
        returnValue = F("Neckarweihinger Str.");
        break;
    }
    case 228833:
    {
        returnValue = F("Neckarwestheimer Platz");
        break;
    }
    case 228834:
    {
        returnValue = F("Neckarwestheimer Steige");
        break;
    }
    case 228835:
    {
        returnValue = F("Neckarwestheimer Str.");
        break;
    }
    case 228836:
    {
        returnValue = F("Neckarwiese");
        break;
    }
    case 228837:
    {
        returnValue = F("Neckarwiesen");
        break;
    }
    case 228838:
    {
        returnValue = F("Neckelstein");
        break;
    }
    case 228839:
    {
        returnValue = F("Neckelstr.");
        break;
    }
    case 228840:
    {
        returnValue = F("Neckendorf");
        break;
    }
    case 228841:
    {
        returnValue = F("Neckenfurt");
        break;
    }
    case 228842:
    {
        returnValue = F("Neckenfurter Str.");
        break;
    }
    case 228843:
    {
        returnValue = F("Neckenmarkter Weg");
        break;
    }
    case 228844:
    {
        returnValue = F("Neckentalstr.");
        break;
    }
    case 228845:
    {
        returnValue = F("Neckentalweg");
        break;
    }
    case 228846:
    {
        returnValue = F("Neckermannstr.");
        break;
    }
    case 228847:
    {
        returnValue = F("Necklenbroicher Str.");
        break;
    }
    case 228848:
    {
        returnValue = F("Neddelförd");
        break;
    }
    case 228849:
    {
        returnValue = F("Neddelsthörn");
        break;
    }
    case 228850:
    {
        returnValue = F("Neddeminer Str.");
        break;
    }
    case 228851:
    {
        returnValue = F("Neddenborgstr.");
        break;
    }
    case 228852:
    {
        returnValue = F("Neddenburweg");
        break;
    }
    case 228853:
    {
        returnValue = F("Neddendorf");
        break;
    }
    case 228854:
    {
        returnValue = F("Neddendörp");
        break;
    }
    case 228855:
    {
        returnValue = F("Neddener Dorfstr.");
        break;
    }
    case 228856:
    {
        returnValue = F("Neddener Str.");
        break;
    }
    case 228857:
    {
        returnValue = F("Neddengast");
        break;
    }
    case 228858:
    {
        returnValue = F("Neddenheider Str.");
        break;
    }
    case 228859:
    {
        returnValue = F("Neddenhüsen");
        break;
    }
    case 228860:
    {
        returnValue = F("Neddenkamp");
        break;
    }
    case 228861:
    {
        returnValue = F("Neddenstr.");
        break;
    }
    case 228862:
    {
        returnValue = F("Nedder Lönn");
        break;
    }
    case 228863:
    {
        returnValue = F("Nedderbreden");
        break;
    }
    case 228864:
    {
        returnValue = F("Nedderbrook");
        break;
    }
    case 228865:
    {
        returnValue = F("Nedderbyer Str.");
        break;
    }
    case 228866:
    {
        returnValue = F("Nedderend");
        break;
    }
    case 228867:
    {
        returnValue = F("Nedderendeweg");
        break;
    }
    case 228868:
    {
        returnValue = F("Nedderfeld");
        break;
    }
    case 228869:
    {
        returnValue = F("Nedderfeldstr.");
        break;
    }
    case 228870:
    {
        returnValue = F("Nedderfeldweg");
        break;
    }
    case 228871:
    {
        returnValue = F("Nedderhandfeld");
        break;
    }
    case 228872:
    {
        returnValue = F("Nedderhufer Schlag");
        break;
    }
    case 228873:
    {
        returnValue = F("Nedderhulden");
        break;
    }
    case 228874:
    {
        returnValue = F("Nedderland");
        break;
    }
    case 228875:
    {
        returnValue = F("Nedderlandsweg");
        break;
    }
    case 228876:
    {
        returnValue = F("Nedderlund");
        break;
    }
    case 228877:
    {
        returnValue = F("Neddern End");
        break;
    }
    case 228878:
    {
        returnValue = F("Neddernhof");
        break;
    }
    case 228879:
    {
        returnValue = F("Neddernhude");
        break;
    }
    case 228880:
    {
        returnValue = F("Neddernkamp");
        break;
    }
    case 228881:
    {
        returnValue = F("Nedderntor");
        break;
    }
    case 228882:
    {
        returnValue = F("Neddernwanne");
        break;
    }
    case 228883:
    {
        returnValue = F("Nedderste Kamp");
        break;
    }
    case 228884:
    {
        returnValue = F("Nedderste Weg");
        break;
    }
    case 228885:
    {
        returnValue = F("Nedderstenmoor");
        break;
    }
    case 228886:
    {
        returnValue = F("Nedderster Moorweg");
        break;
    }
    case 228887:
    {
        returnValue = F("Nedderstr.");
        break;
    }
    case 228888:
    {
        returnValue = F("Neddersweg");
        break;
    }
    case 228889:
    {
        returnValue = F("Nedderwarder Weg");
        break;
    }
    case 228890:
    {
        returnValue = F("Nedderweg");
        break;
    }
    case 228891:
    {
        returnValue = F("Neddesitz");
        break;
    }
    case 228892:
    {
        returnValue = F("Nedelmannstr.");
        break;
    }
    case 228893:
    {
        returnValue = F("Nedensdorf");
        break;
    }
    case 228894:
    {
        returnValue = F("Nedensdorfer Str.");
        break;
    }
    case 228895:
    {
        returnValue = F("Nedergäßchen");
        break;
    }
    case 228896:
    {
        returnValue = F("Nederhoffstr.");
        break;
    }
    case 228897:
    {
        returnValue = F("Nederlandpark");
        break;
    }
    case 228898:
    {
        returnValue = F("Nederlandstr.");
        break;
    }
    case 228899:
    {
        returnValue = F("Nederlinger Platz");
        break;
    }
    case 228900:
    {
        returnValue = F("Nederlinger Str.");
        break;
    }
    case 228901:
    {
        returnValue = F("Nedisser Weg");
        break;
    }
    case 228902:
    {
        returnValue = F("Nedleburg");
        break;
    }
    case 228903:
    {
        returnValue = F("Nedlitzer Holz");
        break;
    }
    case 228904:
    {
        returnValue = F("Nedlitzer Str.");
        break;
    }
    case 228905:
    {
        returnValue = F("Nedlitzer Weg");
        break;
    }
    case 228906:
    {
        returnValue = F("Nedwigstr.");
        break;
    }
    case 228907:
    {
        returnValue = F("Nee Straat");
        break;
    }
    case 228908:
    {
        returnValue = F("Nee Streek");
        break;
    }
    case 228909:
    {
        returnValue = F("Nee'n Kamp");
        break;
    }
    case 228910:
    {
        returnValue = F("Neeb-Str.");
        break;
    }
    case 228911:
    {
        returnValue = F("Neeberger Str.");
        break;
    }
    case 228912:
    {
        returnValue = F("Neeberger Weg");
        break;
    }
    case 228913:
    {
        returnValue = F("Neeboree");
        break;
    }
    case 228914:
    {
        returnValue = F("Neebstr.");
        break;
    }
    case 228915:
    {
        returnValue = F("Neebuhrsweg");
        break;
    }
    case 228916:
    {
        returnValue = F("Needlandskamp");
        break;
    }
    case 228917:
    {
        returnValue = F("Neefestr.");
        break;
    }
    case 228918:
    {
        returnValue = F("Neefstr.");
        break;
    }
    case 228919:
    {
        returnValue = F("Neefweg");
        break;
    }
    case 228920:
    {
        returnValue = F("Neegen Barge");
        break;
    }
    case 228921:
    {
        returnValue = F("Neegenbarg");
        break;
    }
    case 228922:
    {
        returnValue = F("Neegenweg");
        break;
    }
    case 228923:
    {
        returnValue = F("Neehauser Str.");
        break;
    }
    case 228924:
    {
        returnValue = F("Neeje Pad");
        break;
    }
    case 228925:
    {
        returnValue = F("Neejisweg");
        break;
    }
    case 228926:
    {
        returnValue = F("Neekamp");
        break;
    }
    case 228927:
    {
        returnValue = F("Neekampsweg");
        break;
    }
    case 228928:
    {
        returnValue = F("Neekener Str.");
        break;
    }
    case 228929:
    {
        returnValue = F("Neekoppel");
        break;
    }
    case 228930:
    {
        returnValue = F("Neel-Greve-Str.");
        break;
    }
    case 228931:
    {
        returnValue = F("Neeland");
        break;
    }
    case 228932:
    {
        returnValue = F("Neelandskamp");
        break;
    }
    case 228933:
    {
        returnValue = F("Neelandstr.");
        break;
    }
    case 228934:
    {
        returnValue = F("Neelandsweg");
        break;
    }
    case 228935:
    {
        returnValue = F("Neelhofsiedlung");
        break;
    }
    case 228936:
    {
        returnValue = F("Neelmeyerstr.");
        break;
    }
    case 228937:
    {
        returnValue = F("Neemannsweg");
        break;
    }
    case 228938:
    {
        returnValue = F("Neemeedsweg");
        break;
    }
    case 228939:
    {
        returnValue = F("Neemoorsweg");
        break;
    }
    case 228940:
    {
        returnValue = F("Neen Kamp");
        break;
    }
    case 228941:
    {
        returnValue = F("Neenkamp");
        break;
    }
    case 228942:
    {
        returnValue = F("Neenrathstr.");
        break;
    }
    case 228943:
    {
        returnValue = F("Neenstatt");
        break;
    }
    case 228944:
    {
        returnValue = F("Neenstetter Str.");
        break;
    }
    case 228945:
    {
        returnValue = F("Neenstetter Sträßle");
        break;
    }
    case 228946:
    {
        returnValue = F("Neenstetter Weg");
        break;
    }
    case 228947:
    {
        returnValue = F("Neerbargen");
        break;
    }
    case 228948:
    {
        returnValue = F("Neerdartalstr.");
        break;
    }
    case 228949:
    {
        returnValue = F("Neerenbrink");
        break;
    }
    case 228950:
    {
        returnValue = F("Neerenweg");
        break;
    }
    case 228951:
    {
        returnValue = F("Neeresch");
        break;
    }
    case 228952:
    {
        returnValue = F("Neerfeldstr.");
        break;
    }
    case 228953:
    {
        returnValue = F("Neerlager Postdamm");
        break;
    }
    case 228954:
    {
        returnValue = F("Neerlager Weg");
        break;
    }
    case 228955:
    {
        returnValue = F("Neern de Worth");
        break;
    }
    case 228956:
    {
        returnValue = F("Neern in Dörp");
        break;
    }
    case 228957:
    {
        returnValue = F("Neerponter Weg");
        break;
    }
    case 228958:
    {
        returnValue = F("Neersbroicher Str.");
        break;
    }
    case 228959:
    {
        returnValue = F("Neersen");
        break;
    }
    case 228960:
    {
        returnValue = F("Neersener Str.");
        break;
    }
    case 228961:
    {
        returnValue = F("Neersener Weg");
        break;
    }
    case 228962:
    {
        returnValue = F("Neershofer Str.");
        break;
    }
    case 228963:
    {
        returnValue = F("Neerst-Oh");
        break;
    }
    case 228964:
    {
        returnValue = F("Neerstedter Str.");
        break;
    }
    case 228965:
    {
        returnValue = F("Neerstr.");
        break;
    }
    case 228966:
    {
        returnValue = F("Nees-Weg");
        break;
    }
    case 228967:
    {
        returnValue = F("Nees-von-Esenbeck-Str.");
        break;
    }
    case 228968:
    {
        returnValue = F("Neesbacher Str.");
        break;
    }
    case 228969:
    {
        returnValue = F("Neesendyck");
        break;
    }
    case 228970:
    {
        returnValue = F("Neesenweg");
        break;
    }
    case 228971:
    {
        returnValue = F("Neeser Steig");
        break;
    }
    case 228972:
    {
        returnValue = F("Neeshornweg");
        break;
    }
    case 228973:
    {
        returnValue = F("Neeteweg");
        break;
    }
    case 228974:
    {
        returnValue = F("Neetjebusch");
        break;
    }
    case 228975:
    {
        returnValue = F("Neetzendorf");
        break;
    }
    case 228976:
    {
        returnValue = F("Neetzendorfer Str.");
        break;
    }
    case 228977:
    {
        returnValue = F("Neetzer Kirchweg");
        break;
    }
    case 228978:
    {
        returnValue = F("Neetzer Str.");
        break;
    }
    case 228979:
    {
        returnValue = F("Neetzer Weg");
        break;
    }
    case 228980:
    {
        returnValue = F("Neetzetalstr.");
        break;
    }
    case 228981:
    {
        returnValue = F("Neetzkaer Weg");
        break;
    }
    case 228982:
    {
        returnValue = F("Neeverskamp");
        break;
    }
    case 228983:
    {
        returnValue = F("Neewiesenweg");
        break;
    }
    case 228984:
    {
        returnValue = F("Neffeberg");
        break;
    }
    case 228985:
    {
        returnValue = F("Neffelbachstr.");
        break;
    }
    case 228986:
    {
        returnValue = F("Neffeltalstr.");
        break;
    }
    case 228987:
    {
        returnValue = F("Neffelweg");
        break;
    }
    case 228988:
    {
        returnValue = F("Nefflenallee");
        break;
    }
    case 228989:
    {
        returnValue = F("Neffsendstr.");
        break;
    }
    case 228990:
    {
        returnValue = F("Neffstr.");
        break;
    }
    case 228991:
    {
        returnValue = F("Neffswende");
        break;
    }
    case 228992:
    {
        returnValue = F("Negast");
        break;
    }
    case 228993:
    {
        returnValue = F("Negeleinstr.");
        break;
    }
    case 228994:
    {
        returnValue = F("Negelerstr.");
        break;
    }
    case 228995:
    {
        returnValue = F("Negelhof");
        break;
    }
    case 228996:
    {
        returnValue = F("Negelstetterstr.");
        break;
    }
    case 228997:
    {
        returnValue = F("Negen Barge");
        break;
    }
    case 228998:
    {
        returnValue = F("Negen Dimt");
        break;
    }
    case 228999:
    {
        returnValue = F("Negen Stücken");
        break;
    }
    case 229000:
    {
        returnValue = F("Negenbargen");
        break;
    }
    case 229001:
    {
        returnValue = F("Negenbarger Str.");
        break;
    }
    case 229002:
    {
        returnValue = F("Negenborner Landstr.");
        break;
    }
    case 229003:
    {
        returnValue = F("Negenborner Str.");
        break;
    }
    case 229004:
    {
        returnValue = F("Negenborner Weg");
        break;
    }
    case 229005:
    {
        returnValue = F("Negenbornsiedlung");
        break;
    }
    case 229006:
    {
        returnValue = F("Negenbornstr.");
        break;
    }
    case 229007:
    {
        returnValue = F("Negenborntrift");
        break;
    }
    case 229008:
    {
        returnValue = F("Negenchören");
        break;
    }
    case 229009:
    {
        returnValue = F("Negenhusen");
        break;
    }
    case 229010:
    {
        returnValue = F("Negenmark");
        break;
    }
    case 229011:
    {
        returnValue = F("Negenmeertener Str.");
        break;
    }
    case 229012:
    {
        returnValue = F("Negenmeerter Weg");
        break;
    }
    case 229013:
    {
        returnValue = F("Negenstr.");
        break;
    }
    case 229014:
    {
        returnValue = F("Negergate");
        break;
    }
    case 229015:
    {
        returnValue = F("Negernböteler Str.");
        break;
    }
    case 229016:
    {
        returnValue = F("Negertalstr.");
        break;
    }
    case 229017:
    {
        returnValue = F("Negertalweg");
        break;
    }
    case 229018:
    {
        returnValue = F("Negertstr.");
        break;
    }
    case 229019:
    {
        returnValue = F("Negis");
        break;
    }
    case 229020:
    {
        returnValue = F("Negrellistr.");
        break;
    }
    case 229021:
    {
        returnValue = F("Nehaider");
        break;
    }
    case 229022:
    {
        returnValue = F("Nehberghalde");
        break;
    }
    case 229023:
    {
        returnValue = F("Nehdener Str.");
        break;
    }
    case 229024:
    {
        returnValue = F("Nehdener Weg");
        break;
    }
    case 229025:
    {
        returnValue = F("Neheimer Markt");
        break;
    }
    case 229026:
    {
        returnValue = F("Neheimer Str.");
        break;
    }
    case 229027:
    {
        returnValue = F("Neheimer Weg");
        break;
    }
    case 229028:
    {
        returnValue = F("Neheimer Werlweg");
        break;
    }
    case 229029:
    {
        returnValue = F("Neherfeld");
        break;
    }
    case 229030:
    {
        returnValue = F("Neherstr.");
        break;
    }
    case 229031:
    {
        returnValue = F("Nehlerheide");
        break;
    }
    case 229032:
    {
        returnValue = F("Nehlitzer Bergweg");
        break;
    }
    case 229033:
    {
        returnValue = F("Nehlitzer Hauptstr.");
        break;
    }
    case 229034:
    {
        returnValue = F("Nehlitzer Weg");
        break;
    }
    case 229035:
    {
        returnValue = F("Nehlsweg");
        break;
    }
    case 229036:
    {
        returnValue = F("Nehmitz");
        break;
    }
    case 229037:
    {
        returnValue = F("Nehms Gässchen");
        break;
    }
    case 229038:
    {
        returnValue = F("Nehmzowsgang");
        break;
    }
    case 229039:
    {
        returnValue = F("Nehren");
        break;
    }
    case 229040:
    {
        returnValue = F("Nehrener Gäßle");
        break;
    }
    case 229041:
    {
        returnValue = F("Nehrener Str.");
        break;
    }
    case 229042:
    {
        returnValue = F("Nehrenfeld");
        break;
    }
    case 229043:
    {
        returnValue = F("Nehrensbrink");
        break;
    }
    case 229044:
    {
        returnValue = F("Nehrgasse");
        break;
    }
    case 229045:
    {
        returnValue = F("Nehring");
        break;
    }
    case 229046:
    {
        returnValue = F("Nehringen");
        break;
    }
    case 229047:
    {
        returnValue = F("Nehringskamp");
        break;
    }
    case 229048:
    {
        returnValue = F("Nehringstr.");
        break;
    }
    case 229049:
    {
        returnValue = F("Nehringweg");
        break;
    }
    case 229050:
    {
        returnValue = F("Nehrkampen");
        break;
    }
    case 229051:
    {
        returnValue = F("Nehrkornweg");
        break;
    }
    case 229052:
    {
        returnValue = F("Nehrunger Weg");
        break;
    }
    case 229053:
    {
        returnValue = F("Nehuberweg");
        break;
    }
    case 229054:
    {
        returnValue = F("Nehus Kamp");
        break;
    }
    case 229055:
    {
        returnValue = F("Nei Lun");
        break;
    }
    case 229056:
    {
        returnValue = F("Nei Stich");
        break;
    }
    case 229057:
    {
        returnValue = F("Neibsheimer Str.");
        break;
    }
    case 229058:
    {
        returnValue = F("Neibsheimer Weg");
        break;
    }
    case 229059:
    {
        returnValue = F("Neichener Heide");
        break;
    }
    case 229060:
    {
        returnValue = F("Neichener Hofweg");
        break;
    }
    case 229061:
    {
        returnValue = F("Neichener Str.");
        break;
    }
    case 229062:
    {
        returnValue = F("Neichener Weg");
        break;
    }
    case 229063:
    {
        returnValue = F("Neickmannsfeld");
        break;
    }
    case 229064:
    {
        returnValue = F("Neidaer Weg");
        break;
    }
    case 229065:
    {
        returnValue = F("Neidbergstr.");
        break;
    }
    case 229066:
    {
        returnValue = F("Neidbergweg");
        break;
    }
    case 229067:
    {
        returnValue = F("Neideck");
        break;
    }
    case 229068:
    {
        returnValue = F("Neideckerstr.");
        break;
    }
    case 229069:
    {
        returnValue = F("Neideckstr.");
        break;
    }
    case 229070:
    {
        returnValue = F("Neideggstr.");
        break;
    }
    case 229071:
    {
        returnValue = F("Neideggweg");
        break;
    }
    case 229072:
    {
        returnValue = F("Neidelhof");
        break;
    }
    case 229073:
    {
        returnValue = F("Neidelsbach");
        break;
    }
    case 229074:
    {
        returnValue = F("Neidelsbacher Str.");
        break;
    }
    case 229075:
    {
        returnValue = F("Neidelstr.");
        break;
    }
    case 229076:
    {
        returnValue = F("Neidenbacher Str.");
        break;
    }
    case 229077:
    {
        returnValue = F("Neidenberga");
        break;
    }
    case 229078:
    {
        returnValue = F("Neidenbergweg");
        break;
    }
    case 229079:
    {
        returnValue = F("Neidenburger Str.");
        break;
    }
    case 229080:
    {
        returnValue = F("Neidenburger Weg");
        break;
    }
    case 229081:
    {
        returnValue = F("Neidenburgweg");
        break;
    }
    case 229082:
    {
        returnValue = F("Neidenfelser Str.");
        break;
    }
    case 229083:
    {
        returnValue = F("Neidensteiner Höhe");
        break;
    }
    case 229084:
    {
        returnValue = F("Neidensteiner Str.");
        break;
    }
    case 229085:
    {
        returnValue = F("Neiderstaufenbach Park");
        break;
    }
    case 229086:
    {
        returnValue = F("Neidertshofener Str.");
        break;
    }
    case 229087:
    {
        returnValue = F("Neidertstr.");
        break;
    }
    case 229088:
    {
        returnValue = F("Neidhansenweg");
        break;
    }
    case 229089:
    {
        returnValue = F("Neidhardswinden");
        break;
    }
    case 229090:
    {
        returnValue = F("Neidhardt-von-Gneisenau-Str.");
        break;
    }
    case 229091:
    {
        returnValue = F("Neidhardtsthaler Str.");
        break;
    }
    case 229092:
    {
        returnValue = F("Neidhardtsthaler Weg");
        break;
    }
    case 229093:
    {
        returnValue = F("Neidhardtstr.");
        break;
    }
    case 229094:
    {
        returnValue = F("Neidhartstr.");
        break;
    }
    case 229095:
    {
        returnValue = F("Neidinger Str.");
        break;
    }
    case 229096:
    {
        returnValue = F("Neidlinger Str.");
        break;
    }
    case 229097:
    {
        returnValue = F("Neidlingertal-Traufweg");
        break;
    }
    case 229098:
    {
        returnValue = F("Neidlingstr.");
        break;
    }
    case 229099:
    {
        returnValue = F("Neidlingweg");
        break;
    }
    case 229100:
    {
        returnValue = F("Neidschützer Str.");
        break;
    }
    case 229101:
    {
        returnValue = F("Neidsteiner Str.");
        break;
    }
    case 229102:
    {
        returnValue = F("Neidsteiner Weg");
        break;
    }
    case 229103:
    {
        returnValue = F("Neien Lanne");
        break;
    }
    case 229104:
    {
        returnValue = F("Neige");
        break;
    }
    case 229105:
    {
        returnValue = F("Neije Weg");
        break;
    }
    case 229106:
    {
        returnValue = F("Neikingshof");
        break;
    }
    case 229107:
    {
        returnValue = F("Neil-Armstrong-Str.");
        break;
    }
    case 229108:
    {
        returnValue = F("Neilanderweg");
        break;
    }
    case 229109:
    {
        returnValue = F("Neilespringweg");
        break;
    }
    case 229110:
    {
        returnValue = F("Neilestr.");
        break;
    }
    case 229111:
    {
        returnValue = F("Neileweg");
        break;
    }
    case 229112:
    {
        returnValue = F("Neillstr.");
        break;
    }
    case 229113:
    {
        returnValue = F("Neimener Kirchweg");
        break;
    }
    case 229114:
    {
        returnValue = F("Neimener Weg");
        break;
    }
    case 229115:
    {
        returnValue = F("Neindorfer Str.");
        break;
    }
    case 229116:
    {
        returnValue = F("Neindorffstr.");
        break;
    }
    case 229117:
    {
        returnValue = F("Neinstedter Chaussee");
        break;
    }
    case 229118:
    {
        returnValue = F("Neinstedter Feldweg");
        break;
    }
    case 229119:
    {
        returnValue = F("Neinstedter Hauptstr.");
        break;
    }
    case 229120:
    {
        returnValue = F("Neinstedter Str.");
        break;
    }
    case 229121:
    {
        returnValue = F("Neipeler Str.");
        break;
    }
    case 229122:
    {
        returnValue = F("Neipperger Höhe");
        break;
    }
    case 229123:
    {
        returnValue = F("Neipperger Str.");
        break;
    }
    case 229124:
    {
        returnValue = F("Neipperger Weg");
        break;
    }
    case 229125:
    {
        returnValue = F("Neippergstr.");
        break;
    }
    case 229126:
    {
        returnValue = F("Neisekenstr.");
        break;
    }
    case 229127:
    {
        returnValue = F("Neisemeyerweg");
        break;
    }
    case 229128:
    {
        returnValue = F("Neisenstr.");
        break;
    }
    case 229129:
    {
        returnValue = F("Neishornweg");
        break;
    }
    case 229130:
    {
        returnValue = F("Neisser Str.");
        break;
    }
    case 229131:
    {
        returnValue = F("Neisser Weg");
        break;
    }
    case 229132:
    {
        returnValue = F("Neissestr.");
        break;
    }
    case 229133:
    {
        returnValue = F("Neisseweg");
        break;
    }
    case 229134:
    {
        returnValue = F("Neissgasse");
        break;
    }
    case 229135:
    {
        returnValue = F("Neistigh");
        break;
    }
    case 229136:
    {
        returnValue = F("Neithardtstr.");
        break;
    }
    case 229137:
    {
        returnValue = F("Neitschmühle");
        break;
    }
    case 229138:
    {
        returnValue = F("Neitzelweg");
        break;
    }
    case 229139:
    {
        returnValue = F("Neitzerter Str.");
        break;
    }
    case 229140:
    {
        returnValue = F("Neitzkamp");
        break;
    }
    case 229141:
    {
        returnValue = F("Neiwoi");
        break;
    }
    case 229142:
    {
        returnValue = F("Neiße Weg");
        break;
    }
    case 229143:
    {
        returnValue = F("Neißebogen");
        break;
    }
    case 229144:
    {
        returnValue = F("Neißegasse");
        break;
    }
    case 229145:
    {
        returnValue = F("Neißer Str.");
        break;
    }
    case 229146:
    {
        returnValue = F("Neißer Weg");
        break;
    }
    case 229147:
    {
        returnValue = F("Neißering");
        break;
    }
    case 229148:
    {
        returnValue = F("Neißestieg");
        break;
    }
    case 229149:
    {
        returnValue = F("Neißestr.");
        break;
    }
    case 229150:
    {
        returnValue = F("Neißetalstr.");
        break;
    }
    case 229151:
    {
        returnValue = F("Neißeweg");
        break;
    }
    case 229152:
    {
        returnValue = F("Neißgasse");
        break;
    }
    case 229153:
    {
        returnValue = F("Neißstr.");
        break;
    }
    case 229154:
    {
        returnValue = F("Neißtalweg");
        break;
    }
    case 229155:
    {
        returnValue = F("Nejwittweg");
        break;
    }
    case 229156:
    {
        returnValue = F("Nekesstr.");
        break;
    }
    case 229157:
    {
        returnValue = F("Nekesweg");
        break;
    }
    case 229158:
    {
        returnValue = F("Neklade");
        break;
    }
    case 229159:
    {
        returnValue = F("Nektarinenweg");
        break;
    }
    case 229160:
    {
        returnValue = F("Nektarweg");
        break;
    }
    case 229161:
    {
        returnValue = F("Nelben");
        break;
    }
    case 229162:
    {
        returnValue = F("Nelblingstr.");
        break;
    }
    case 229163:
    {
        returnValue = F("Nelkanitz");
        break;
    }
    case 229164:
    {
        returnValue = F("Nelkenberg");
        break;
    }
    case 229165:
    {
        returnValue = F("Nelkengarten");
        break;
    }
    case 229166:
    {
        returnValue = F("Nelkengasse");
        break;
    }
    case 229167:
    {
        returnValue = F("Nelkengrund");
        break;
    }
    case 229168:
    {
        returnValue = F("Nelkenhof");
        break;
    }
    case 229169:
    {
        returnValue = F("Nelkenpfad");
        break;
    }
    case 229170:
    {
        returnValue = F("Nelkenring");
        break;
    }
    case 229171:
    {
        returnValue = F("Nelkensteg");
        break;
    }
    case 229172:
    {
        returnValue = F("Nelkensteig");
        break;
    }
    case 229173:
    {
        returnValue = F("Nelkenstieg");
        break;
    }
    case 229174:
    {
        returnValue = F("Nelkenstiege");
        break;
    }
    case 229175:
    {
        returnValue = F("Nelkenstr.");
        break;
    }
    case 229176:
    {
        returnValue = F("Nelkentor");
        break;
    }
    case 229177:
    {
        returnValue = F("Nelkenweg");
        break;
    }
    case 229178:
    {
        returnValue = F("Nelkenwinkel");
        break;
    }
    case 229179:
    {
        returnValue = F("Nelkestr.");
        break;
    }
    case 229180:
    {
        returnValue = F("Nell-Breuning-Ring");
        break;
    }
    case 229181:
    {
        returnValue = F("Nell-Breuning-Str.");
        break;
    }
    case 229182:
    {
        returnValue = F("Nell-Breuning-Weg");
        break;
    }
    case 229183:
    {
        returnValue = F("Nelle-Jannsen-Weg");
        break;
    }
    case 229184:
    {
        returnValue = F("Nellenbachstr.");
        break;
    }
    case 229185:
    {
        returnValue = F("Nellenbadstr.");
        break;
    }
    case 229186:
    {
        returnValue = F("Nellenburgstr.");
        break;
    }
    case 229187:
    {
        returnValue = F("Nellenburgweg");
        break;
    }
    case 229188:
    {
        returnValue = F("Nellenkath");
        break;
    }
    case 229189:
    {
        returnValue = F("Nellenwaldweg");
        break;
    }
    case 229190:
    {
        returnValue = F("Nellenweg");
        break;
    }
    case 229191:
    {
        returnValue = F("Nellessenstr.");
        break;
    }
    case 229192:
    {
        returnValue = F("Nellessenweg");
        break;
    }
    case 229193:
    {
        returnValue = F("Nellesweg");
        break;
    }
    case 229194:
    {
        returnValue = F("Nellheck");
        break;
    }
    case 229195:
    {
        returnValue = F("Nelli-Schmithals-Str.");
        break;
    }
    case 229196:
    {
        returnValue = F("Nellie-Friedrichs-Str.");
        break;
    }
    case 229197:
    {
        returnValue = F("Nellingen Ostfildern");
        break;
    }
    case 229198:
    {
        returnValue = F("Nellinger Str.");
        break;
    }
    case 229199:
    {
        returnValue = F("Nellinger Weg");
        break;
    }
    case 229200:
    {
        returnValue = F("Nellinghof-Schierberg");
        break;
    }
    case 229201:
    {
        returnValue = F("Nellingsheimer Str.");
        break;
    }
    case 229202:
    {
        returnValue = F("Nellmersbacher Str.");
        break;
    }
    case 229203:
    {
        returnValue = F("Nells Park");
        break;
    }
    case 229204:
    {
        returnValue = F("Nellschütz");
        break;
    }
    case 229205:
    {
        returnValue = F("Nellschützer Weg");
        break;
    }
    case 229206:
    {
        returnValue = F("Nellschützer Winkel");
        break;
    }
    case 229207:
    {
        returnValue = F("Nellstr.");
        break;
    }
    case 229208:
    {
        returnValue = F("Nelly-Luise-Brandenburg-Str.");
        break;
    }
    case 229209:
    {
        returnValue = F("Nelly-Pütz-Str.");
        break;
    }
    case 229210:
    {
        returnValue = F("Nelly-Rodi-Platz");
        break;
    }
    case 229211:
    {
        returnValue = F("Nelly-Sachs-Hof");
        break;
    }
    case 229212:
    {
        returnValue = F("Nelly-Sachs-Ring");
        break;
    }
    case 229213:
    {
        returnValue = F("Nelly-Sachs-Str.");
        break;
    }
    case 229214:
    {
        returnValue = F("Nelly-Sachs-Weg");
        break;
    }
    case 229215:
    {
        returnValue = F("Nelmannwall");
        break;
    }
    case 229216:
    {
        returnValue = F("Nelsbachstr.");
        break;
    }
    case 229217:
    {
        returnValue = F("Nelseestr.");
        break;
    }
    case 229218:
    {
        returnValue = F("Nelsenstr.");
        break;
    }
    case 229219:
    {
        returnValue = F("Nelson-Mandela-Park");
        break;
    }
    case 229220:
    {
        returnValue = F("Nelson-Mandela-Platz");
        break;
    }
    case 229221:
    {
        returnValue = F("Nelson-Mandela-Ring");
        break;
    }
    case 229222:
    {
        returnValue = F("Nelson-Mandela-Str.");
        break;
    }
    case 229223:
    {
        returnValue = F("Nelson-Mandela-Weg");
        break;
    }
    case 229224:
    {
        returnValue = F("Nelsonallee");
        break;
    }
    case 229225:
    {
        returnValue = F("Nelsonweg");
        break;
    }
    case 229226:
    {
        returnValue = F("Nelsstr.");
        break;
    }
    case 229227:
    {
        returnValue = F("Nembraken");
        break;
    }
    case 229228:
    {
        returnValue = F("Nemdener Kirchweg");
        break;
    }
    case 229229:
    {
        returnValue = F("Nemdener Str.");
        break;
    }
    case 229230:
    {
        returnValue = F("Nemering");
        break;
    }
    case 229231:
    {
        returnValue = F("Nemerower Str.");
        break;
    }
    case 229232:
    {
        returnValue = F("Nemeterstr.");
        break;
    }
    case 229233:
    {
        returnValue = F("Nemitz");
        break;
    }
    case 229234:
    {
        returnValue = F("Nemitzer Str.");
        break;
    }
    case 229235:
    {
        returnValue = F("Nemitzer Weg");
        break;
    }
    case 229236:
    {
        returnValue = F("Nemitzweg");
        break;
    }
    case 229237:
    {
        returnValue = F("Nemmenicher Str.");
        break;
    }
    case 229238:
    {
        returnValue = F("Nemmersdorfer Str.");
        break;
    }
    case 229239:
    {
        returnValue = F("Nemmersdorfer Weg");
        break;
    }
    case 229240:
    {
        returnValue = F("Nemphestr.");
        break;
    }
    case 229241:
    {
        returnValue = F("Nempitzer Str.");
        break;
    }
    case 229242:
    {
        returnValue = F("Nemsdorfer Weg");
        break;
    }
    case 229243:
    {
        returnValue = F("Nemter Str.");
        break;
    }
    case 229244:
    {
        returnValue = F("Nendinger Allee");
        break;
    }
    case 229245:
    {
        returnValue = F("Nendorfstr.");
        break;
    }
    case 229246:
    {
        returnValue = F("Nendorper Str.");
        break;
    }
    case 229247:
    {
        returnValue = F("Nendorper Weg");
        break;
    }
    case 229248:
    {
        returnValue = F("Nenkersbergweg");
        break;
    }
    case 229249:
    {
        returnValue = F("Nenkersdorfer Hauptstr.");
        break;
    }
    case 229250:
    {
        returnValue = F("Nenkersdorfer Str.");
        break;
    }
    case 229251:
    {
        returnValue = F("Nenkershölzleweg");
        break;
    }
    case 229252:
    {
        returnValue = F("Nenndorf");
        break;
    }
    case 229253:
    {
        returnValue = F("Nenndorfer Chaussee");
        break;
    }
    case 229254:
    {
        returnValue = F("Nenndorfer Landstr.");
        break;
    }
    case 229255:
    {
        returnValue = F("Nenndorfer Lohne");
        break;
    }
    case 229256:
    {
        returnValue = F("Nenndorfer Platz");
        break;
    }
    case 229257:
    {
        returnValue = F("Nenndorfer Str.");
        break;
    }
    case 229258:
    {
        returnValue = F("Nenndorfer Weg");
        break;
    }
    case 229259:
    {
        returnValue = F("Nennhausener Str.");
        break;
    }
    case 229260:
    {
        returnValue = F("Nenniger Str.");
        break;
    }
    case 229261:
    {
        returnValue = F("Nennigmühle");
        break;
    }
    case 229262:
    {
        returnValue = F("Nenninger Weg");
        break;
    }
    case 229263:
    {
        returnValue = F("Nenningerstr.");
        break;
    }
    case 229264:
    {
        returnValue = F("Nennsberger Weg");
        break;
    }
    case 229265:
    {
        returnValue = F("Nennsdorf");
        break;
    }
    case 229266:
    {
        returnValue = F("Nennsdorfer Weg");
        break;
    }
    case 229267:
    {
        returnValue = F("Nennsfeldweg");
        break;
    }
    case 229268:
    {
        returnValue = F("Nennslinger Str.");
        break;
    }
    case 229269:
    {
        returnValue = F("Nentershäuser Str.");
        break;
    }
    case 229270:
    {
        returnValue = F("Nentershäuser Weg");
        break;
    }
    case 229271:
    {
        returnValue = F("Nenteröder Garten");
        break;
    }
    case 229272:
    {
        returnValue = F("Nenteröder Kirchweg");
        break;
    }
    case 229273:
    {
        returnValue = F("Nenteröder Str.");
        break;
    }
    case 229274:
    {
        returnValue = F("Nentmannsdorf");
        break;
    }
    case 229275:
    {
        returnValue = F("Nenzhäuserhof");
        break;
    }
    case 229276:
    {
        returnValue = F("Nenzinger Str.");
        break;
    }
    case 229277:
    {
        returnValue = F("Neonstr.");
        break;
    }
    case 229278:
    {
        returnValue = F("Nepal-Himalaya-Park");
        break;
    }
    case 229279:
    {
        returnValue = F("Neparmitz");
        break;
    }
    case 229280:
    {
        returnValue = F("Nepfhurstweg");
        break;
    }
    case 229281:
    {
        returnValue = F("Nepicks Garten");
        break;
    }
    case 229282:
    {
        returnValue = F("Nepomuk-Allee");
        break;
    }
    case 229283:
    {
        returnValue = F("Nepomuk-Brücke");
        break;
    }
    case 229284:
    {
        returnValue = F("Nepomuk-Meier-Str.");
        break;
    }
    case 229285:
    {
        returnValue = F("Nepomuk-Meintel-Weg");
        break;
    }
    case 229286:
    {
        returnValue = F("Nepomuk-Ring");
        break;
    }
    case 229287:
    {
        returnValue = F("Nepomuk-Schelble-Str.");
        break;
    }
    case 229288:
    {
        returnValue = F("Nepomuk-Schneider-Str.");
        break;
    }
    case 229289:
    {
        returnValue = F("Nepomukbrücke");
        break;
    }
    case 229290:
    {
        returnValue = F("Nepomukgasse");
        break;
    }
    case 229291:
    {
        returnValue = F("Nepomukstr.");
        break;
    }
    case 229292:
    {
        returnValue = F("Nepomukweg");
        break;
    }
    case 229293:
    {
        returnValue = F("Nepperberg");
        break;
    }
    case 229294:
    {
        returnValue = F("Nepperbergstr.");
        break;
    }
    case 229295:
    {
        returnValue = F("Nepperbergweg");
        break;
    }
    case 229296:
    {
        returnValue = F("Neppersdorf");
        break;
    }
    case 229297:
    {
        returnValue = F("Neptun");
        break;
    }
    case 229298:
    {
        returnValue = F("Neptunallee");
        break;
    }
    case 229299:
    {
        returnValue = F("Neptunhof");
        break;
    }
    case 229300:
    {
        returnValue = F("Neptunplatz");
        break;
    }
    case 229301:
    {
        returnValue = F("Neptunring");
        break;
    }
    case 229302:
    {
        returnValue = F("Neptunstr.");
        break;
    }
    case 229303:
    {
        returnValue = F("Neptunweg");
        break;
    }
    case 229304:
    {
        returnValue = F("Nepziner Str.");
        break;
    }
    case 229305:
    {
        returnValue = F("Nepziner Weg");
        break;
    }
    case 229306:
    {
        returnValue = F("Nequamweg");
        break;
    }
    case 229307:
    {
        returnValue = F("Neraditz");
        break;
    }
    case 229308:
    {
        returnValue = F("Neratovicer Str.");
        break;
    }
    case 229309:
    {
        returnValue = F("Nerbstr.");
        break;
    }
    case 229310:
    {
        returnValue = F("Nerchauer Hauptstr.");
        break;
    }
    case 229311:
    {
        returnValue = F("Nerchauer Landstr.");
        break;
    }
    case 229312:
    {
        returnValue = F("Nerchauer Str.");
        break;
    }
    case 229313:
    {
        returnValue = F("Nerder Weg");
        break;
    }
    case 229314:
    {
        returnValue = F("Nerdin");
        break;
    }
    case 229315:
    {
        returnValue = F("Nerdin Ausbau");
        break;
    }
    case 229316:
    {
        returnValue = F("Nerenbroicker Weg");
        break;
    }
    case 229317:
    {
        returnValue = F("Nerenhofweg");
        break;
    }
    case 229318:
    {
        returnValue = F("Nerenstetter Str.");
        break;
    }
    case 229319:
    {
        returnValue = F("Nerenwand");
        break;
    }
    case 229320:
    {
        returnValue = F("Neresheimer Str.");
        break;
    }
    case 229321:
    {
        returnValue = F("Neresheimer Weg");
        break;
    }
    case 229322:
    {
        returnValue = F("Nergenaer Str.");
        break;
    }
    case 229323:
    {
        returnValue = F("Nerianerweg");
        break;
    }
    case 229324:
    {
        returnValue = F("Nering-Bögel-Str.");
        break;
    }
    case 229325:
    {
        returnValue = F("Neringstr.");
        break;
    }
    case 229326:
    {
        returnValue = F("Nerisstr.");
        break;
    }
    case 229327:
    {
        returnValue = F("Neritzer Dorfstr.");
        break;
    }
    case 229328:
    {
        returnValue = F("Neritzer Weg");
        break;
    }
    case 229329:
    {
        returnValue = F("Nerkewitzer Str.");
        break;
    }
    case 229330:
    {
        returnValue = F("Nerling");
        break;
    }
    case 229331:
    {
        returnValue = F("Nerlystr.");
        break;
    }
    case 229332:
    {
        returnValue = F("Nermsdorf");
        break;
    }
    case 229333:
    {
        returnValue = F("Nermsdorfer Str.");
        break;
    }
    case 229334:
    {
        returnValue = F("Nernststr.");
        break;
    }
    case 229335:
    {
        returnValue = F("Nernstweg");
        break;
    }
    case 229336:
    {
        returnValue = F("Neroberg");
        break;
    }
    case 229337:
    {
        returnValue = F("Nerobergstr.");
        break;
    }
    case 229338:
    {
        returnValue = F("Nerongsallee");
        break;
    }
    case 229339:
    {
        returnValue = F("Nerostr.");
        break;
    }
    case 229340:
    {
        returnValue = F("Nerotal");
        break;
    }
    case 229341:
    {
        returnValue = F("Nerotalstr.");
        break;
    }
    case 229342:
    {
        returnValue = F("Nerping");
        break;
    }
    case 229343:
    {
        returnValue = F("Nerpinger Str.");
        break;
    }
    case 229344:
    {
        returnValue = F("Nerrether Weg");
        break;
    }
    case 229345:
    {
        returnValue = F("Nerrweg");
        break;
    }
    case 229346:
    {
        returnValue = F("Nerscheider Weg");
        break;
    }
    case 229347:
    {
        returnValue = F("Nersinger Str.");
        break;
    }
    case 229348:
    {
        returnValue = F("Nersumer Str.");
        break;
    }
    case 229349:
    {
        returnValue = F("Nerthusstr.");
        break;
    }
    case 229350:
    {
        returnValue = F("Nertusstr.");
        break;
    }
    case 229351:
    {
        returnValue = F("Nervastr.");
        break;
    }
    case 229352:
    {
        returnValue = F("Nervierstr.");
        break;
    }
    case 229353:
    {
        returnValue = F("Nerzstr.");
        break;
    }
    case 229354:
    {
        returnValue = F("Nerzweg");
        break;
    }
    case 229355:
    {
        returnValue = F("Neschener Str.");
        break;
    }
    case 229356:
    {
        returnValue = F("Neschholz");
        break;
    }
    case 229357:
    {
        returnValue = F("Neschholzer Ausbau");
        break;
    }
    case 229358:
    {
        returnValue = F("Neschwitzer Str.");
        break;
    }
    case 229359:
    {
        returnValue = F("Neschwitzweg");
        break;
    }
    case 229360:
    {
        returnValue = F("Nesebanzer Weg");
        break;
    }
    case 229361:
    {
        returnValue = F("Nesenbachstr.");
        break;
    }
    case 229362:
    {
        returnValue = F("Nesenbachweg");
        break;
    }
    case 229363:
    {
        returnValue = F("Nesenhaus");
        break;
    }
    case 229364:
    {
        returnValue = F("Nesenitzer Weg");
        break;
    }
    case 229365:
    {
        returnValue = F("Nesenplatz");
        break;
    }
    case 229366:
    {
        returnValue = F("Nesenstr.");
        break;
    }
    case 229367:
    {
        returnValue = F("Nesower Weg");
        break;
    }
    case 229368:
    {
        returnValue = F("Nespelerstr.");
        break;
    }
    case 229369:
    {
        returnValue = F("Ness-Ziona-Str.");
        break;
    }
    case 229370:
    {
        returnValue = F("Nessaer Weg");
        break;
    }
    case 229371:
    {
        returnValue = F("Nessaer Winkel");
        break;
    }
    case 229372:
    {
        returnValue = F("Nesse");
        break;
    }
    case 229373:
    {
        returnValue = F("Nesseborg");
        break;
    }
    case 229374:
    {
        returnValue = F("Nessebrücke");
        break;
    }
    case 229375:
    {
        returnValue = F("Nessegrund");
        break;
    }
    case 229376:
    {
        returnValue = F("Nesselbach");
        break;
    }
    case 229377:
    {
        returnValue = F("Nesselbacher Str.");
        break;
    }
    case 229378:
    {
        returnValue = F("Nesselbachgasse");
        break;
    }
    case 229379:
    {
        returnValue = F("Nesselbachstr.");
        break;
    }
    case 229380:
    {
        returnValue = F("Nesselberg");
        break;
    }
    case 229381:
    {
        returnValue = F("Nesselbergstr.");
        break;
    }
    case 229382:
    {
        returnValue = F("Nesselbleck");
        break;
    }
    case 229383:
    {
        returnValue = F("Nesselbosch");
        break;
    }
    case 229384:
    {
        returnValue = F("Nesselbrunner Str.");
        break;
    }
    case 229385:
    {
        returnValue = F("Nesselbusch");
        break;
    }
    case 229386:
    {
        returnValue = F("Nesselbuschstr.");
        break;
    }
    case 229387:
    {
        returnValue = F("Nesselfang");
        break;
    }
    case 229388:
    {
        returnValue = F("Nesselfeld");
        break;
    }
    case 229389:
    {
        returnValue = F("Nesselgrund");
        break;
    }
    case 229390:
    {
        returnValue = F("Nesselgrundstr.");
        break;
    }
    case 229391:
    {
        returnValue = F("Nesselgrundweg");
        break;
    }
    case 229392:
    {
        returnValue = F("Nesselhalde");
        break;
    }
    case 229393:
    {
        returnValue = F("Nesselhof");
        break;
    }
    case 229394:
    {
        returnValue = F("Nesselkamp");
        break;
    }
    case 229395:
    {
        returnValue = F("Nessellachenweg");
        break;
    }
    case 229396:
    {
        returnValue = F("Nessellacher Linie");
        break;
    }
    case 229397:
    {
        returnValue = F("Nesselpfad");
        break;
    }
    case 229398:
    {
        returnValue = F("Nesselrain");
        break;
    }
    case 229399:
    {
        returnValue = F("Nesselrather Str.");
        break;
    }
    case 229400:
    {
        returnValue = F("Nesselrieder Str.");
        break;
    }
    case 229401:
    {
        returnValue = F("Nesselroder Str.");
        break;
    }
    case 229402:
    {
        returnValue = F("Nesselrodestr.");
        break;
    }
    case 229403:
    {
        returnValue = F("Nesselrodeweg");
        break;
    }
    case 229404:
    {
        returnValue = F("Nesselröder Str.");
        break;
    }
    case 229405:
    {
        returnValue = F("Nesselstr.");
        break;
    }
    case 229406:
    {
        returnValue = F("Nesseltal");
        break;
    }
    case 229407:
    {
        returnValue = F("Nesseltaler Hof");
        break;
    }
    case 229408:
    {
        returnValue = F("Nesseltalweg");
        break;
    }
    case 229409:
    {
        returnValue = F("Nesselwanger Str.");
        break;
    }
    case 229410:
    {
        returnValue = F("Nesselweg");
        break;
    }
    case 229411:
    {
        returnValue = F("Nessenberg");
        break;
    }
    case 229412:
    {
        returnValue = F("Nessenbergstr.");
        break;
    }
    case 229413:
    {
        returnValue = F("Nessenmühle");
        break;
    }
    case 229414:
    {
        returnValue = F("Nessenmühlstr.");
        break;
    }
    case 229415:
    {
        returnValue = F("Nesser Str.");
        break;
    }
    case 229416:
    {
        returnValue = F("Nesserdeich");
        break;
    }
    case 229417:
    {
        returnValue = F("Nesserlander Str.");
        break;
    }
    case 229418:
    {
        returnValue = F("Nessestr.");
        break;
    }
    case 229419:
    {
        returnValue = F("Nessetal Weg");
        break;
    }
    case 229420:
    {
        returnValue = F("Nessetalstr.");
        break;
    }
    case 229421:
    {
        returnValue = F("Nesseweg");
        break;
    }
    case 229422:
    {
        returnValue = F("Nesshagen");
        break;
    }
    case 229423:
    {
        returnValue = F("Nessig");
        break;
    }
    case 229424:
    {
        returnValue = F("Nesso");
        break;
    }
    case 229425:
    {
        returnValue = F("Nestackerweg");
        break;
    }
    case 229426:
    {
        returnValue = F("Nestau");
        break;
    }
    case 229427:
    {
        returnValue = F("Nestauer Str.");
        break;
    }
    case 229428:
    {
        returnValue = F("Nestbruchweg");
        break;
    }
    case 229429:
    {
        returnValue = F("Nestelbergstr.");
        break;
    }
    case 229430:
    {
        returnValue = F("Nestelbergweg");
        break;
    }
    case 229431:
    {
        returnValue = F("Nestelesallee");
        break;
    }
    case 229432:
    {
        returnValue = F("Nestelgraben");
        break;
    }
    case 229433:
    {
        returnValue = F("Nestelreuther Weg");
        break;
    }
    case 229434:
    {
        returnValue = F("Nestelwasen");
        break;
    }
    case 229435:
    {
        returnValue = F("Nestelweg");
        break;
    }
    case 229436:
    {
        returnValue = F("Nestenweg");
        break;
    }
    case 229437:
    {
        returnValue = F("Nesterende");
        break;
    }
    case 229438:
    {
        returnValue = F("Nestfellplatz");
        break;
    }
    case 229439:
    {
        returnValue = F("Nestgasse");
        break;
    }
    case 229440:
    {
        returnValue = F("Nesthakenweg");
        break;
    }
    case 229441:
    {
        returnValue = F("Nesthauser Str.");
        break;
    }
    case 229442:
    {
        returnValue = F("Nestleinsberggasse");
        break;
    }
    case 229443:
    {
        returnValue = F("Nestlergasse");
        break;
    }
    case 229444:
    {
        returnValue = F("Nestlersbuckweg");
        break;
    }
    case 229445:
    {
        returnValue = F("Nestlerstr.");
        break;
    }
    case 229446:
    {
        returnValue = F("Nestlestr.");
        break;
    }
    case 229447:
    {
        returnValue = F("Nestleweg");
        break;
    }
    case 229448:
    {
        returnValue = F("Nestmannstr.");
        break;
    }
    case 229449:
    {
        returnValue = F("Nestrainhangweg");
        break;
    }
    case 229450:
    {
        returnValue = F("Nestrainweg");
        break;
    }
    case 229451:
    {
        returnValue = F("Nestroystr.");
        break;
    }
    case 229452:
    {
        returnValue = F("Nestroyweg");
        break;
    }
    case 229453:
    {
        returnValue = F("Netanel-Weil-Str.");
        break;
    }
    case 229454:
    {
        returnValue = F("Netanyastr.");
        break;
    }
    case 229455:
    {
        returnValue = F("Netergasse");
        break;
    }
    case 229456:
    {
        returnValue = F("Neterhöhe");
        break;
    }
    case 229457:
    {
        returnValue = F("Nethakshof");
        break;
    }
    case 229458:
    {
        returnValue = F("Nethegrund");
        break;
    }
    case 229459:
    {
        returnValue = F("Nethen");
        break;
    }
    case 229460:
    {
        returnValue = F("Nethener Kirchweg");
        break;
    }
    case 229461:
    {
        returnValue = F("Nethener Weg");
        break;
    }
    case 229462:
    {
        returnValue = F("Nethestr.");
        break;
    }
    case 229463:
    {
        returnValue = F("Nethetalstr.");
        break;
    }
    case 229464:
    {
        returnValue = F("Netheteich");
        break;
    }
    case 229465:
    {
        returnValue = F("Netheweg");
        break;
    }
    case 229466:
    {
        returnValue = F("Netken-Schulte-Weg");
        break;
    }
    case 229467:
    {
        returnValue = F("Netphener Str.");
        break;
    }
    case 229468:
    {
        returnValue = F("Netphener Weg");
        break;
    }
    case 229469:
    {
        returnValue = F("Netraer Weg");
        break;
    }
    case 229470:
    {
        returnValue = F("Netragasse");
        break;
    }
    case 229471:
    {
        returnValue = F("Nettbrucher Weg");
        break;
    }
    case 229472:
    {
        returnValue = F("Nettchen-Körfer-Str.");
        break;
    }
    case 229473:
    {
        returnValue = F("Nettchen-Molls-Str.");
        break;
    }
    case 229474:
    {
        returnValue = F("Nette");
        break;
    }
    case 229475:
    {
        returnValue = F("Netteberger Str.");
        break;
    }
    case 229476:
    {
        returnValue = F("Nettebergstr.");
        break;
    }
    case 229477:
    {
        returnValue = F("Nettegasse");
        break;
    }
    case 229478:
    {
        returnValue = F("Nettehof");
        break;
    }
    case 229479:
    {
        returnValue = F("Nettekovener Str.");
        break;
    }
    case 229480:
    {
        returnValue = F("Nettelbecker Weg");
        break;
    }
    case 229481:
    {
        returnValue = F("Nettelbeckstr.");
        break;
    }
    case 229482:
    {
        returnValue = F("Nettelbeckufer");
        break;
    }
    case 229483:
    {
        returnValue = F("Nettelbeckweg");
        break;
    }
    case 229484:
    {
        returnValue = F("Nettelbrook");
        break;
    }
    case 229485:
    {
        returnValue = F("Nettelbruch");
        break;
    }
    case 229486:
    {
        returnValue = F("Nettelburger Str.");
        break;
    }
    case 229487:
    {
        returnValue = F("Nettelbuschweg");
        break;
    }
    case 229488:
    {
        returnValue = F("Netteldorskamp");
        break;
    }
    case 229489:
    {
        returnValue = F("Nettelgrund");
        break;
    }
    case 229490:
    {
        returnValue = F("Nettelhoff");
        break;
    }
    case 229491:
    {
        returnValue = F("Nettelkamper Str.");
        break;
    }
    case 229492:
    {
        returnValue = F("Nettelkofener Str.");
        break;
    }
    case 229493:
    {
        returnValue = F("Nettelkroog");
        break;
    }
    case 229494:
    {
        returnValue = F("Nettelreder Trift");
        break;
    }
    case 229495:
    {
        returnValue = F("Nettelsburger Str.");
        break;
    }
    case 229496:
    {
        returnValue = F("Nettelseer Str.");
        break;
    }
    case 229497:
    {
        returnValue = F("Nettelstedter Str.");
        break;
    }
    case 229498:
    {
        returnValue = F("Nettelstr.");
        break;
    }
    case 229499:
    {
        returnValue = F("Nettelstädt");
        break;
    }
    case 229500:
    {
        returnValue = F("Nettemannstr.");
        break;
    }
    case 229501:
    {
        returnValue = F("Nettenbachweg");
        break;
    }
    case 229502:
    {
        returnValue = F("Nettenberg");
        break;
    }
    case 229503:
    {
        returnValue = F("Nettenbergrundweg");
        break;
    }
    case 229504:
    {
        returnValue = F("Nettenbergstr.");
        break;
    }
    case 229505:
    {
        returnValue = F("Nettenbergweg");
        break;
    }
    case 229506:
    {
        returnValue = F("Nettengasse");
        break;
    }
    case 229507:
    {
        returnValue = F("Nettenscheid");
        break;
    }
    case 229508:
    {
        returnValue = F("Nettentäle");
        break;
    }
    case 229509:
    {
        returnValue = F("Nettenwiesen");
        break;
    }
    case 229510:
    {
        returnValue = F("Netter Kirchweg");
        break;
    }
    case 229511:
    {
        returnValue = F("Netterbühl");
        break;
    }
    case 229512:
    {
        returnValue = F("Netterdensche Str.");
        break;
    }
    case 229513:
    {
        returnValue = F("Nettergasse");
        break;
    }
    case 229514:
    {
        returnValue = F("Nettershauser Str.");
        break;
    }
    case 229515:
    {
        returnValue = F("Nettersheimer Str.");
        break;
    }
    case 229516:
    {
        returnValue = F("Nettersheimer Weg");
        break;
    }
    case 229517:
    {
        returnValue = F("Netterstr.");
        break;
    }
    case 229518:
    {
        returnValue = F("Netterweg");
        break;
    }
    case 229519:
    {
        returnValue = F("Nettesheimer Str.");
        break;
    }
    case 229520:
    {
        returnValue = F("Nettesheimer Weg");
        break;
    }
    case 229521:
    {
        returnValue = F("Nettesheimstr.");
        break;
    }
    case 229522:
    {
        returnValue = F("Nettespring");
        break;
    }
    case 229523:
    {
        returnValue = F("Nettestr.");
        break;
    }
    case 229524:
    {
        returnValue = F("Nettesürsch");
        break;
    }
    case 229525:
    {
        returnValue = F("Nettetal Str.");
        break;
    }
    case 229526:
    {
        returnValue = F("Nettetaler Str.");
        break;
    }
    case 229527:
    {
        returnValue = F("Nettetalstr.");
        break;
    }
    case 229528:
    {
        returnValue = F("Netteweg");
        break;
    }
    case 229529:
    {
        returnValue = F("Nettgauer Weg");
        break;
    }
    case 229530:
    {
        returnValue = F("Nettgendorfer Hauptstr.");
        break;
    }
    case 229531:
    {
        returnValue = F("Nettgendorfer Str.");
        break;
    }
    case 229532:
    {
        returnValue = F("Nettgendorfer Weg");
        break;
    }
    case 229533:
    {
        returnValue = F("Nettgesweg");
        break;
    }
    case 229534:
    {
        returnValue = F("Netti-Nagel-Str.");
        break;
    }
    case 229535:
    {
        returnValue = F("Nettlinger Str.");
        break;
    }
    case 229536:
    {
        returnValue = F("Nettlingskamp");
        break;
    }
    case 229537:
    {
        returnValue = F("Nettstr.");
        break;
    }
    case 229538:
    {
        returnValue = F("Nettuno-Allee");
        break;
    }
    case 229539:
    {
        returnValue = F("Nettweg");
        break;
    }
    case 229540:
    {
        returnValue = F("Netzarter Str.");
        break;
    }
    case 229541:
    {
        returnValue = F("Netzbacher Str.");
        break;
    }
    case 229542:
    {
        returnValue = F("Netzbachtal");
        break;
    }
    case 229543:
    {
        returnValue = F("Netzbornstr.");
        break;
    }
    case 229544:
    {
        returnValue = F("Netzbrücke");
        break;
    }
    case 229545:
    {
        returnValue = F("Netzebander Str.");
        break;
    }
    case 229546:
    {
        returnValue = F("Netzegaustr.");
        break;
    }
    case 229547:
    {
        returnValue = F("Netzelkower Weg");
        break;
    }
    case 229548:
    {
        returnValue = F("Netzenbergstr.");
        break;
    }
    case 229549:
    {
        returnValue = F("Netzenbergweg");
        break;
    }
    case 229550:
    {
        returnValue = F("Netzener Dorfstr.");
        break;
    }
    case 229551:
    {
        returnValue = F("Netzener Str.");
        break;
    }
    case 229552:
    {
        returnValue = F("Netzeplatz");
        break;
    }
    case 229553:
    {
        returnValue = F("Netzer Str.");
        break;
    }
    case 229554:
    {
        returnValue = F("Netzersteg");
        break;
    }
    case 229555:
    {
        returnValue = F("Netzerstr.");
        break;
    }
    case 229556:
    {
        returnValue = F("Netzestr.");
        break;
    }
    case 229557:
    {
        returnValue = F("Netzetal");
        break;
    }
    case 229558:
    {
        returnValue = F("Netzeweg");
        break;
    }
    case 229559:
    {
        returnValue = F("Netzfeld");
        break;
    }
    case 229560:
    {
        returnValue = F("Netzgarten");
        break;
    }
    case 229561:
    {
        returnValue = F("Netzgraben");
        break;
    }
    case 229562:
    {
        returnValue = F("Netzgärten");
        break;
    }
    case 229563:
    {
        returnValue = F("Netzkater");
        break;
    }
    case 229564:
    {
        returnValue = F("Netzower Dorfstr.");
        break;
    }
    case 229565:
    {
        returnValue = F("Netzower Str.");
        break;
    }
    case 229566:
    {
        returnValue = F("Netzschkauer Str.");
        break;
    }
    case 229567:
    {
        returnValue = F("Netzschlade");
        break;
    }
    case 229568:
    {
        returnValue = F("Netzschuppenweg");
        break;
    }
    case 229569:
    {
        returnValue = F("Netzsegen");
        break;
    }
    case 229570:
    {
        returnValue = F("Netzstahler Str.");
        break;
    }
    case 229571:
    {
        returnValue = F("Netzstall");
        break;
    }
    case 229572:
    {
        returnValue = F("Netzstaller Weg");
        break;
    }
    case 229573:
    {
        returnValue = F("Netzstr.");
        break;
    }
    case 229574:
    {
        returnValue = F("Netztal");
        break;
    }
    case 229575:
    {
        returnValue = F("Netzweg");
        break;
    }
    case 229576:
    {
        returnValue = F("Netzwiesen");
        break;
    }
    case 229577:
    {
        returnValue = F("Neu Abbickenhausen");
        break;
    }
    case 229578:
    {
        returnValue = F("Neu Banneers");
        break;
    }
    case 229579:
    {
        returnValue = F("Neu Banziner Str.");
        break;
    }
    case 229580:
    {
        returnValue = F("Neu Bartelsdorf");
        break;
    }
    case 229581:
    {
        returnValue = F("Neu Bartelsdorfer Str.");
        break;
    }
    case 229582:
    {
        returnValue = F("Neu Basedow");
        break;
    }
    case 229583:
    {
        returnValue = F("Neu Bauhof");
        break;
    }
    case 229584:
    {
        returnValue = F("Neu Bellahn");
        break;
    }
    case 229585:
    {
        returnValue = F("Neu Benitzer Weg");
        break;
    }
    case 229586:
    {
        returnValue = F("Neu Bethlehem");
        break;
    }
    case 229587:
    {
        returnValue = F("Neu Bleckeder Str.");
        break;
    }
    case 229588:
    {
        returnValue = F("Neu Boddin");
        break;
    }
    case 229589:
    {
        returnValue = F("Neu Bohlingen");
        break;
    }
    case 229590:
    {
        returnValue = F("Neu Brackede");
        break;
    }
    case 229591:
    {
        returnValue = F("Neu Brützkow");
        break;
    }
    case 229592:
    {
        returnValue = F("Neu Buchholz");
        break;
    }
    case 229593:
    {
        returnValue = F("Neu Bückchener Str.");
        break;
    }
    case 229594:
    {
        returnValue = F("Neu Bülk-Gut");
        break;
    }
    case 229595:
    {
        returnValue = F("Neu Canow");
        break;
    }
    case 229596:
    {
        returnValue = F("Neu Cölln");
        break;
    }
    case 229597:
    {
        returnValue = F("Neu Diele");
        break;
    }
    case 229598:
    {
        returnValue = F("Neu Dobbin");
        break;
    }
    case 229599:
    {
        returnValue = F("Neu Ebersdorfer Str.");
        break;
    }
    case 229600:
    {
        returnValue = F("Neu Farpen");
        break;
    }
    case 229601:
    {
        returnValue = F("Neu Frauenmarker Weg");
        break;
    }
    case 229602:
    {
        returnValue = F("Neu Fresenbrügge");
        break;
    }
    case 229603:
    {
        returnValue = F("Neu Friederikengroden");
        break;
    }
    case 229604:
    {
        returnValue = F("Neu Fringshaus");
        break;
    }
    case 229605:
    {
        returnValue = F("Neu Gaarz");
        break;
    }
    case 229606:
    {
        returnValue = F("Neu Galliner Ring");
        break;
    }
    case 229607:
    {
        returnValue = F("Neu Galliner Weg");
        break;
    }
    case 229608:
    {
        returnValue = F("Neu Garstedt");
        break;
    }
    case 229609:
    {
        returnValue = F("Neu Godern");
        break;
    }
    case 229610:
    {
        returnValue = F("Neu Goderner Weg");
        break;
    }
    case 229611:
    {
        returnValue = F("Neu Golmer Str.");
        break;
    }
    case 229612:
    {
        returnValue = F("Neu Golmer Waldweg");
        break;
    }
    case 229613:
    {
        returnValue = F("Neu Golmer Weg");
        break;
    }
    case 229614:
    {
        returnValue = F("Neu Gramstorf");
        break;
    }
    case 229615:
    {
        returnValue = F("Neu Grebs");
        break;
    }
    case 229616:
    {
        returnValue = F("Neu Greschendorf");
        break;
    }
    case 229617:
    {
        returnValue = F("Neu Gülzer Weg");
        break;
    }
    case 229618:
    {
        returnValue = F("Neu Harmstorf");
        break;
    }
    case 229619:
    {
        returnValue = F("Neu Hartmannsdorfer Str.");
        break;
    }
    case 229620:
    {
        returnValue = F("Neu Hettenstr.");
        break;
    }
    case 229621:
    {
        returnValue = F("Neu Hinrichsdorf");
        break;
    }
    case 229622:
    {
        returnValue = F("Neu Hohenvier");
        break;
    }
    case 229623:
    {
        returnValue = F("Neu Holtum");
        break;
    }
    case 229624:
    {
        returnValue = F("Neu Hörup");
        break;
    }
    case 229625:
    {
        returnValue = F("Neu Kariner Weg");
        break;
    }
    case 229626:
    {
        returnValue = F("Neu Karstädter Weg");
        break;
    }
    case 229627:
    {
        returnValue = F("Neu Kemnitz");
        break;
    }
    case 229628:
    {
        returnValue = F("Neu Kleinow");
        break;
    }
    case 229629:
    {
        returnValue = F("Neu Krassow");
        break;
    }
    case 229630:
    {
        returnValue = F("Neu Krüssower Str.");
        break;
    }
    case 229631:
    {
        returnValue = F("Neu Krüssower Weg");
        break;
    }
    case 229632:
    {
        returnValue = F("Neu Köthener Str.");
        break;
    }
    case 229633:
    {
        returnValue = F("Neu Lakoma");
        break;
    }
    case 229634:
    {
        returnValue = F("Neu Lanschvitz");
        break;
    }
    case 229635:
    {
        returnValue = F("Neu Lassentin");
        break;
    }
    case 229636:
    {
        returnValue = F("Neu Lentenau");
        break;
    }
    case 229637:
    {
        returnValue = F("Neu Lentenauer Weg");
        break;
    }
    case 229638:
    {
        returnValue = F("Neu Lübstorfer Str.");
        break;
    }
    case 229639:
    {
        returnValue = F("Neu Lübtheen");
        break;
    }
    case 229640:
    {
        returnValue = F("Neu Lübtheener Weg");
        break;
    }
    case 229641:
    {
        returnValue = F("Neu Lüdershagen-Dorfstr.");
        break;
    }
    case 229642:
    {
        returnValue = F("Neu Lüdershäger Weg");
        break;
    }
    case 229643:
    {
        returnValue = F("Neu Minheim");
        break;
    }
    case 229644:
    {
        returnValue = F("Neu Mistorf");
        break;
    }
    case 229645:
    {
        returnValue = F("Neu Mukran");
        break;
    }
    case 229646:
    {
        returnValue = F("Neu Nantrow");
        break;
    }
    case 229647:
    {
        returnValue = F("Neu Nieköhr");
        break;
    }
    case 229648:
    {
        returnValue = F("Neu Oedelumer Str.");
        break;
    }
    case 229649:
    {
        returnValue = F("Neu Oese");
        break;
    }
    case 229650:
    {
        returnValue = F("Neu Osterweder Str.");
        break;
    }
    case 229651:
    {
        returnValue = F("Neu Pampow");
        break;
    }
    case 229652:
    {
        returnValue = F("Neu Pannekow");
        break;
    }
    case 229653:
    {
        returnValue = F("Neu Panstorf");
        break;
    }
    case 229654:
    {
        returnValue = F("Neu Pastiner Str.");
        break;
    }
    case 229655:
    {
        returnValue = F("Neu Pinnow");
        break;
    }
    case 229656:
    {
        returnValue = F("Neu Plestlin");
        break;
    }
    case 229657:
    {
        returnValue = F("Neu Plötz");
        break;
    }
    case 229658:
    {
        returnValue = F("Neu Polzow");
        break;
    }
    case 229659:
    {
        returnValue = F("Neu Premsliner Str.");
        break;
    }
    case 229660:
    {
        returnValue = F("Neu Prilip");
        break;
    }
    case 229661:
    {
        returnValue = F("Neu Pudagla");
        break;
    }
    case 229662:
    {
        returnValue = F("Neu Quitzenow Ausbau");
        break;
    }
    case 229663:
    {
        returnValue = F("Neu Rakow");
        break;
    }
    case 229664:
    {
        returnValue = F("Neu Redlin");
        break;
    }
    case 229665:
    {
        returnValue = F("Neu Rehberg");
        break;
    }
    case 229666:
    {
        returnValue = F("Neu Reichenwalder Str.");
        break;
    }
    case 229667:
    {
        returnValue = F("Neu Ripdorf");
        break;
    }
    case 229668:
    {
        returnValue = F("Neu Roggentiner Str.");
        break;
    }
    case 229669:
    {
        returnValue = F("Neu Rohlsdorf");
        break;
    }
    case 229670:
    {
        returnValue = F("Neu Rosenthal");
        break;
    }
    case 229671:
    {
        returnValue = F("Neu Rott");
        break;
    }
    case 229672:
    {
        returnValue = F("Neu Runstedt");
        break;
    }
    case 229673:
    {
        returnValue = F("Neu Sagast");
        break;
    }
    case 229674:
    {
        returnValue = F("Neu Sammit");
        break;
    }
    case 229675:
    {
        returnValue = F("Neu Sanitz");
        break;
    }
    case 229676:
    {
        returnValue = F("Neu Sapshagen");
        break;
    }
    case 229677:
    {
        returnValue = F("Neu Saunstorf");
        break;
    }
    case 229678:
    {
        returnValue = F("Neu Schanzer Hof");
        break;
    }
    case 229679:
    {
        returnValue = F("Neu Schlagsdorfer Allee");
        break;
    }
    case 229680:
    {
        returnValue = F("Neu Schlemmin");
        break;
    }
    case 229681:
    {
        returnValue = F("Neu Schmellwitz");
        break;
    }
    case 229682:
    {
        returnValue = F("Neu Schrepkow");
        break;
    }
    case 229683:
    {
        returnValue = F("Neu Schröderhof");
        break;
    }
    case 229684:
    {
        returnValue = F("Neu Schönau");
        break;
    }
    case 229685:
    {
        returnValue = F("Neu Seebeck");
        break;
    }
    case 229686:
    {
        returnValue = F("Neu Silmersdorf");
        break;
    }
    case 229687:
    {
        returnValue = F("Neu Sommersdorf");
        break;
    }
    case 229688:
    {
        returnValue = F("Neu Sorge");
        break;
    }
    case 229689:
    {
        returnValue = F("Neu St. Jürgener Str.");
        break;
    }
    case 229690:
    {
        returnValue = F("Neu Stassow");
        break;
    }
    case 229691:
    {
        returnValue = F("Neu Staßfurt");
        break;
    }
    case 229692:
    {
        returnValue = F("Neu Stocketen Weg");
        break;
    }
    case 229693:
    {
        returnValue = F("Neu Stolzenburg");
        break;
    }
    case 229694:
    {
        returnValue = F("Neu Sülbeck");
        break;
    }
    case 229695:
    {
        returnValue = F("Neu Tellin");
        break;
    }
    case 229696:
    {
        returnValue = F("Neu Temmen");
        break;
    }
    case 229697:
    {
        returnValue = F("Neu Temmener Str.");
        break;
    }
    case 229698:
    {
        returnValue = F("Neu Teterin");
        break;
    }
    case 229699:
    {
        returnValue = F("Neu Tüzener Weg");
        break;
    }
    case 229700:
    {
        returnValue = F("Neu Utlande");
        break;
    }
    case 229701:
    {
        returnValue = F("Neu Vietschow");
        break;
    }
    case 229702:
    {
        returnValue = F("Neu Vorwerk");
        break;
    }
    case 229703:
    {
        returnValue = F("Neu Waldhof");
        break;
    }
    case 229704:
    {
        returnValue = F("Neu Waltersdorf");
        break;
    }
    case 229705:
    {
        returnValue = F("Neu Wandrumer Str.");
        break;
    }
    case 229706:
    {
        returnValue = F("Neu Weitendorf");
        break;
    }
    case 229707:
    {
        returnValue = F("Neu Werbig");
        break;
    }
    case 229708:
    {
        returnValue = F("Neu Werret");
        break;
    }
    case 229709:
    {
        returnValue = F("Neu Wiednitzer Str.");
        break;
    }
    case 229710:
    {
        returnValue = F("Neu Wiesental");
        break;
    }
    case 229711:
    {
        returnValue = F("Neu Wokern");
        break;
    }
    case 229712:
    {
        returnValue = F("Neu Wustrow");
        break;
    }
    case 229713:
    {
        returnValue = F("Neu Zachuner Weg");
        break;
    }
    case 229714:
    {
        returnValue = F("Neu Zarrentin");
        break;
    }
    case 229715:
    {
        returnValue = F("Neu Zerwelin");
        break;
    }
    case 229716:
    {
        returnValue = F("Neu Ziddorf");
        break;
    }
    case 229717:
    {
        returnValue = F("Neu Zierhagen");
        break;
    }
    case 229718:
    {
        returnValue = F("Neu Zietlitz Ausbau");
        break;
    }
    case 229719:
    {
        returnValue = F("Neu Zippendorf");
        break;
    }
    case 229720:
    {
        returnValue = F("Neu Zittauer Str.");
        break;
    }
    case 229721:
    {
        returnValue = F("Neu-Afrika-Str.");
        break;
    }
    case 229722:
    {
        returnValue = F("Neu-Amerika");
        break;
    }
    case 229723:
    {
        returnValue = F("Neu-Bamberger Str.");
        break;
    }
    case 229724:
    {
        returnValue = F("Neu-Barmbostel");
        break;
    }
    case 229725:
    {
        returnValue = F("Neu-Bergedorfer Damm");
        break;
    }
    case 229726:
    {
        returnValue = F("Neu-Berger-Str.");
        break;
    }
    case 229727:
    {
        returnValue = F("Neu-Biesener Weg");
        break;
    }
    case 229728:
    {
        returnValue = F("Neu-Bochower Str.");
        break;
    }
    case 229729:
    {
        returnValue = F("Neu-Braunfelser-Str.");
        break;
    }
    case 229730:
    {
        returnValue = F("Neu-Breisacher Str.");
        break;
    }
    case 229731:
    {
        returnValue = F("Neu-Broicher Hof");
        break;
    }
    case 229732:
    {
        returnValue = F("Neu-Böternhöfen");
        break;
    }
    case 229733:
    {
        returnValue = F("Neu-Calenberger-Weg");
        break;
    }
    case 229734:
    {
        returnValue = F("Neu-Crengeldanz-Str.");
        break;
    }
    case 229735:
    {
        returnValue = F("Neu-Dannenberger Str.");
        break;
    }
    case 229736:
    {
        returnValue = F("Neu-Devwinkel");
        break;
    }
    case 229737:
    {
        returnValue = F("Neu-Dichau");
        break;
    }
    case 229738:
    {
        returnValue = F("Neu-Dornap");
        break;
    }
    case 229739:
    {
        returnValue = F("Neu-Eckeler Str.");
        break;
    }
    case 229740:
    {
        returnValue = F("Neu-Ehringsdorf");
        break;
    }
    case 229741:
    {
        returnValue = F("Neu-Eipaß");
        break;
    }
    case 229742:
    {
        returnValue = F("Neu-Elmenhorst");
        break;
    }
    case 229743:
    {
        returnValue = F("Neu-Ervscher-Weg");
        break;
    }
    case 229744:
    {
        returnValue = F("Neu-Etumer Str.");
        break;
    }
    case 229745:
    {
        returnValue = F("Neu-Eydelstedter Str.");
        break;
    }
    case 229746:
    {
        returnValue = F("Neu-Galower Weg");
        break;
    }
    case 229747:
    {
        returnValue = F("Neu-Geräumt");
        break;
    }
    case 229748:
    {
        returnValue = F("Neu-Geusmanns");
        break;
    }
    case 229749:
    {
        returnValue = F("Neu-Grambower Ring");
        break;
    }
    case 229750:
    {
        returnValue = F("Neu-Günterberg");
        break;
    }
    case 229751:
    {
        returnValue = F("Neu-Haag");
        break;
    }
    case 229752:
    {
        returnValue = F("Neu-Haberland");
        break;
    }
    case 229753:
    {
        returnValue = F("Neu-Hellas-Str.");
        break;
    }
    case 229754:
    {
        returnValue = F("Neu-Holzkamp");
        break;
    }
    case 229755:
    {
        returnValue = F("Neu-Horremer-Hof");
        break;
    }
    case 229756:
    {
        returnValue = F("Neu-Hubenhof");
        break;
    }
    case 229757:
    {
        returnValue = F("Neu-Häcklingen");
        break;
    }
    case 229758:
    {
        returnValue = F("Neu-Isenburger Str.");
        break;
    }
    case 229759:
    {
        returnValue = F("Neu-Iserlohn-Str.");
        break;
    }
    case 229760:
    {
        returnValue = F("Neu-Jeßnitzer Hauptstr.");
        break;
    }
    case 229761:
    {
        returnValue = F("Neu-Jürgenstorf");
        break;
    }
    case 229762:
    {
        returnValue = F("Neu-Kentzlin");
        break;
    }
    case 229763:
    {
        returnValue = F("Neu-Kleinow");
        break;
    }
    case 229764:
    {
        returnValue = F("Neu-Kleinower Weg");
        break;
    }
    case 229765:
    {
        returnValue = F("Neu-Knoch-Hof");
        break;
    }
    case 229766:
    {
        returnValue = F("Neu-Kosel");
        break;
    }
    case 229767:
    {
        returnValue = F("Neu-Krien");
        break;
    }
    case 229768:
    {
        returnValue = F("Neu-Laatziger-Str.");
        break;
    }
    case 229769:
    {
        returnValue = F("Neu-Langerwisch");
        break;
    }
    case 229770:
    {
        returnValue = F("Neu-Löh");
        break;
    }
    case 229771:
    {
        returnValue = F("Neu-Löhdorf");
        break;
    }
    case 229772:
    {
        returnValue = F("Neu-Maarer Str.");
        break;
    }
    case 229773:
    {
        returnValue = F("Neu-Morsumer-Weg");
        break;
    }
    case 229774:
    {
        returnValue = F("Neu-Nüssau");
        break;
    }
    case 229775:
    {
        returnValue = F("Neu-Oldendorf");
        break;
    }
    case 229776:
    {
        returnValue = F("Neu-Petersdorf");
        break;
    }
    case 229777:
    {
        returnValue = F("Neu-Placht");
        break;
    }
    case 229778:
    {
        returnValue = F("Neu-Plauer-Weg");
        break;
    }
    case 229779:
    {
        returnValue = F("Neu-Pouch");
        break;
    }
    case 229780:
    {
        returnValue = F("Neu-Puschwitz");
        break;
    }
    case 229781:
    {
        returnValue = F("Neu-Quitzenow");
        break;
    }
    case 229782:
    {
        returnValue = F("Neu-Radekower Str.");
        break;
    }
    case 229783:
    {
        returnValue = F("Neu-Revensdorf");
        break;
    }
    case 229784:
    {
        returnValue = F("Neu-Riester-Weg");
        break;
    }
    case 229785:
    {
        returnValue = F("Neu-Ristedter Dorfstr.");
        break;
    }
    case 229786:
    {
        returnValue = F("Neu-Rosow");
        break;
    }
    case 229787:
    {
        returnValue = F("Neu-Sassenscheid");
        break;
    }
    case 229788:
    {
        returnValue = F("Neu-Schellerhau");
        break;
    }
    case 229789:
    {
        returnValue = F("Neu-Schnee");
        break;
    }
    case 229790:
    {
        returnValue = F("Neu-Schneise");
        break;
    }
    case 229791:
    {
        returnValue = F("Neu-Schollene");
        break;
    }
    case 229792:
    {
        returnValue = F("Neu-Schönbeck");
        break;
    }
    case 229793:
    {
        returnValue = F("Neu-Seeholz");
        break;
    }
    case 229794:
    {
        returnValue = F("Neu-Seeland");
        break;
    }
    case 229795:
    {
        returnValue = F("Neu-Sohl");
        break;
    }
    case 229796:
    {
        returnValue = F("Neu-Sophienhof");
        break;
    }
    case 229797:
    {
        returnValue = F("Neu-Spiel");
        break;
    }
    case 229798:
    {
        returnValue = F("Neu-Stefenshoven");
        break;
    }
    case 229799:
    {
        returnValue = F("Neu-Steinbrücker-Weg");
        break;
    }
    case 229800:
    {
        returnValue = F("Neu-Südmersen");
        break;
    }
    case 229801:
    {
        returnValue = F("Neu-Sührkow");
        break;
    }
    case 229802:
    {
        returnValue = F("Neu-Sülstorfer Weg");
        break;
    }
    case 229803:
    {
        returnValue = F("Neu-Töplitzer Str.");
        break;
    }
    case 229804:
    {
        returnValue = F("Neu-Ulmer Str.");
        break;
    }
    case 229805:
    {
        returnValue = F("Neu-Ulrichstein");
        break;
    }
    case 229806:
    {
        returnValue = F("Neu-Ulrichsteiner Str.");
        break;
    }
    case 229807:
    {
        returnValue = F("Neu-Wehnsen");
        break;
    }
    case 229808:
    {
        returnValue = F("Neu-Weiher-Str.");
        break;
    }
    case 229809:
    {
        returnValue = F("Neu-Wirtheimer Str.");
        break;
    }
    case 229810:
    {
        returnValue = F("Neu-Zeilsheim");
        break;
    }
    case 229811:
    {
        returnValue = F("Neu-Ziegelhütte");
        break;
    }
    case 229812:
    {
        returnValue = F("Neuacker");
        break;
    }
    case 229813:
    {
        returnValue = F("Neuackerweg");
        break;
    }
    case 229814:
    {
        returnValue = F("Neuahlener Str.");
        break;
    }
    case 229815:
    {
        returnValue = F("Neuaicher Str.");
        break;
    }
    case 229816:
    {
        returnValue = F("Neuaigner Str.");
        break;
    }
    case 229817:
    {
        returnValue = F("Neualbenreuther Str.");
        break;
    }
    case 229818:
    {
        returnValue = F("Neualtheimer Str.");
        break;
    }
    case 229819:
    {
        returnValue = F("Neuanbau");
        break;
    }
    case 229820:
    {
        returnValue = F("Neuanger");
        break;
    }
    case 229821:
    {
        returnValue = F("Neuanlage");
        break;
    }
    case 229822:
    {
        returnValue = F("Neuastenberger Str.");
        break;
    }
    case 229823:
    {
        returnValue = F("Neubach");
        break;
    }
    case 229824:
    {
        returnValue = F("Neubachenbrucher Weg");
        break;
    }
    case 229825:
    {
        returnValue = F("Neubachstr.");
        break;
    }
    case 229826:
    {
        returnValue = F("Neubachweg");
        break;
    }
    case 229827:
    {
        returnValue = F("Neubachwiesen");
        break;
    }
    case 229828:
    {
        returnValue = F("Neubannweg");
        break;
    }
    case 229829:
    {
        returnValue = F("Neubanrundweg");
        break;
    }
    case 229830:
    {
        returnValue = F("Neubantraufweg");
        break;
    }
    case 229831:
    {
        returnValue = F("Neubanz");
        break;
    }
    case 229832:
    {
        returnValue = F("Neubarnimer Ausbau");
        break;
    }
    case 229833:
    {
        returnValue = F("Neubarnimer Dorfstr.");
        break;
    }
    case 229834:
    {
        returnValue = F("Neubau");
        break;
    }
    case 229835:
    {
        returnValue = F("Neubau Jagdwirtschaft");
        break;
    }
    case 229836:
    {
        returnValue = F("Neubau Unterführung unter A8 und Bahn 2013");
        break;
    }
    case 229837:
    {
        returnValue = F("Neubauer Heide");
        break;
    }
    case 229838:
    {
        returnValue = F("Neubauer Weg");
        break;
    }
    case 229839:
    {
        returnValue = F("Neubauern");
        break;
    }
    case 229840:
    {
        returnValue = F("Neubauern Siedlung");
        break;
    }
    case 229841:
    {
        returnValue = F("Neubauerndorf");
        break;
    }
    case 229842:
    {
        returnValue = F("Neubauerndorf Ost");
        break;
    }
    case 229843:
    {
        returnValue = F("Neubauernfeld");
        break;
    }
    case 229844:
    {
        returnValue = F("Neubauerngasse");
        break;
    }
    case 229845:
    {
        returnValue = F("Neubauerngäßle");
        break;
    }
    case 229846:
    {
        returnValue = F("Neubauernmark");
        break;
    }
    case 229847:
    {
        returnValue = F("Neubauernsiedlung");
        break;
    }
    case 229848:
    {
        returnValue = F("Neubauernsiedlung West");
        break;
    }
    case 229849:
    {
        returnValue = F("Neubauernstr.");
        break;
    }
    case 229850:
    {
        returnValue = F("Neubauernweg");
        break;
    }
    case 229851:
    {
        returnValue = F("Neubauersdamm");
        break;
    }
    case 229852:
    {
        returnValue = F("Neubauersgasse");
        break;
    }
    case 229853:
    {
        returnValue = F("Neubauerstr.");
        break;
    }
    case 229854:
    {
        returnValue = F("Neubauerweg");
        break;
    }
    case 229855:
    {
        returnValue = F("Neubaugasse");
        break;
    }
    case 229856:
    {
        returnValue = F("Neubaugebiet");
        break;
    }
    case 229857:
    {
        returnValue = F("Neubauhof");
        break;
    }
    case 229858:
    {
        returnValue = F("Neubauhof-Oberhof");
        break;
    }
    case 229859:
    {
        returnValue = F("Neubauhofstr.");
        break;
    }
    case 229860:
    {
        returnValue = F("Neubaurengäßle");
        break;
    }
    case 229861:
    {
        returnValue = F("Neubauring");
        break;
    }
    case 229862:
    {
        returnValue = F("Neubausiedlung");
        break;
    }
    case 229863:
    {
        returnValue = F("Neubaustr.");
        break;
    }
    case 229864:
    {
        returnValue = F("Neubauten");
        break;
    }
    case 229865:
    {
        returnValue = F("Neubauter Str.");
        break;
    }
    case 229866:
    {
        returnValue = F("Neubauviertel");
        break;
    }
    case 229867:
    {
        returnValue = F("Neubauweg");
        break;
    }
    case 229868:
    {
        returnValue = F("Neubeckumer Str.");
        break;
    }
    case 229869:
    {
        returnValue = F("Neubeerener Str.");
        break;
    }
    case 229870:
    {
        returnValue = F("Neubenden");
        break;
    }
    case 229871:
    {
        returnValue = F("Neuberender Weg");
        break;
    }
    case 229872:
    {
        returnValue = F("Neuberg");
        break;
    }
    case 229873:
    {
        returnValue = F("Neuberger Weg");
        break;
    }
    case 229874:
    {
        returnValue = F("Neuberggasse");
        break;
    }
    case 229875:
    {
        returnValue = F("Neuberghauser Str.");
        break;
    }
    case 229876:
    {
        returnValue = F("Neubergring");
        break;
    }
    case 229877:
    {
        returnValue = F("Neubergstr.");
        break;
    }
    case 229878:
    {
        returnValue = F("Neubergsweg");
        break;
    }
    case 229879:
    {
        returnValue = F("Neubergweg");
        break;
    }
    case 229880:
    {
        returnValue = F("Neuberinplatz");
        break;
    }
    case 229881:
    {
        returnValue = F("Neuberinstr.");
        break;
    }
    case 229882:
    {
        returnValue = F("Neuberlin");
        break;
    }
    case 229883:
    {
        returnValue = F("Neuberstr.");
        break;
    }
    case 229884:
    {
        returnValue = F("Neuberthelsdorf");
        break;
    }
    case 229885:
    {
        returnValue = F("Neuberthelsdorfer Str.");
        break;
    }
    case 229886:
    {
        returnValue = F("Neubertstr.");
        break;
    }
    case 229887:
    {
        returnValue = F("Neuberzdorfer Weg");
        break;
    }
    case 229888:
    {
        returnValue = F("Neubessinger Str.");
        break;
    }
    case 229889:
    {
        returnValue = F("Neubeuerer Str.");
        break;
    }
    case 229890:
    {
        returnValue = F("Neubeuerner Str.");
        break;
    }
    case 229891:
    {
        returnValue = F("Neubeurer Str.");
        break;
    }
    case 229892:
    {
        returnValue = F("Neubiberger Str.");
        break;
    }
    case 229893:
    {
        returnValue = F("Neubildweg");
        break;
    }
    case 229894:
    {
        returnValue = F("Neubitz");
        break;
    }
    case 229895:
    {
        returnValue = F("Neubleiche");
        break;
    }
    case 229896:
    {
        returnValue = F("Neubleicherode");
        break;
    }
    case 229897:
    {
        returnValue = F("Neubleicheröder Str.");
        break;
    }
    case 229898:
    {
        returnValue = F("Neubodengrün");
        break;
    }
    case 229899:
    {
        returnValue = F("Neubokeler Str.");
        break;
    }
    case 229900:
    {
        returnValue = F("Neuborn");
        break;
    }
    case 229901:
    {
        returnValue = F("Neuborner Str.");
        break;
    }
    case 229902:
    {
        returnValue = F("Neubornstr.");
        break;
    }
    case 229903:
    {
        returnValue = F("Neuborthener Str.");
        break;
    }
    case 229904:
    {
        returnValue = F("Neubourgstr.");
        break;
    }
    case 229905:
    {
        returnValue = F("Neubramowstr.");
        break;
    }
    case 229906:
    {
        returnValue = F("Neubrand");
        break;
    }
    case 229907:
    {
        returnValue = F("Neubrandenburger Chaussee");
        break;
    }
    case 229908:
    {
        returnValue = F("Neubrandenburger Str.");
        break;
    }
    case 229909:
    {
        returnValue = F("Neubraunshain");
        break;
    }
    case 229910:
    {
        returnValue = F("Neubreisacher Str.");
        break;
    }
    case 229911:
    {
        returnValue = F("Neubreithofweg");
        break;
    }
    case 229912:
    {
        returnValue = F("Neubriach");
        break;
    }
    case 229913:
    {
        returnValue = F("Neubronn");
        break;
    }
    case 229914:
    {
        returnValue = F("Neubronnen");
        break;
    }
    case 229915:
    {
        returnValue = F("Neubronnenschlagweg");
        break;
    }
    case 229916:
    {
        returnValue = F("Neubronnensteige");
        break;
    }
    case 229917:
    {
        returnValue = F("Neubronner Str.");
        break;
    }
    case 229918:
    {
        returnValue = F("Neubronner Weg");
        break;
    }
    case 229919:
    {
        returnValue = F("Neubronnerweg");
        break;
    }
    case 229920:
    {
        returnValue = F("Neubronnstr.");
        break;
    }
    case 229921:
    {
        returnValue = F("Neubruch");
        break;
    }
    case 229922:
    {
        returnValue = F("Neubruchhausen");
        break;
    }
    case 229923:
    {
        returnValue = F("Neubruchhäuser Str.");
        break;
    }
    case 229924:
    {
        returnValue = F("Neubruchstr.");
        break;
    }
    case 229925:
    {
        returnValue = F("Neubruchtorweg");
        break;
    }
    case 229926:
    {
        returnValue = F("Neubruchweg");
        break;
    }
    case 229927:
    {
        returnValue = F("Neubruchäcker");
        break;
    }
    case 229928:
    {
        returnValue = F("Neubrunnen-Schneise");
        break;
    }
    case 229929:
    {
        returnValue = F("Neubrunnengasse");
        break;
    }
    case 229930:
    {
        returnValue = F("Neubrunnenlinie");
        break;
    }
    case 229931:
    {
        returnValue = F("Neubrunnenring");
        break;
    }
    case 229932:
    {
        returnValue = F("Neubrunnenschlag");
        break;
    }
    case 229933:
    {
        returnValue = F("Neubrunnenschlagweg");
        break;
    }
    case 229934:
    {
        returnValue = F("Neubrunnenstr.");
        break;
    }
    case 229935:
    {
        returnValue = F("Neubrunnenweg");
        break;
    }
    case 229936:
    {
        returnValue = F("Neubrunner Dorfstr.");
        break;
    }
    case 229937:
    {
        returnValue = F("Neubrunner Str.");
        break;
    }
    case 229938:
    {
        returnValue = F("Neubrunner Weg");
        break;
    }
    case 229939:
    {
        returnValue = F("Neubrunnstr.");
        break;
    }
    case 229940:
    {
        returnValue = F("Neubrück");
        break;
    }
    case 229941:
    {
        returnValue = F("Neubrückenstr.");
        break;
    }
    case 229942:
    {
        returnValue = F("Neubrückentorstr.");
        break;
    }
    case 229943:
    {
        returnValue = F("Neubrückenweg");
        break;
    }
    case 229944:
    {
        returnValue = F("Neubrücker Ring");
        break;
    }
    case 229945:
    {
        returnValue = F("Neubrücker Str.");
        break;
    }
    case 229946:
    {
        returnValue = F("Neubrücker Weg");
        break;
    }
    case 229947:
    {
        returnValue = F("Neubrückshelmder");
        break;
    }
    case 229948:
    {
        returnValue = F("Neubrückstr.");
        break;
    }
    case 229949:
    {
        returnValue = F("Neubuch");
        break;
    }
    case 229950:
    {
        returnValue = F("Neubuchholzer Str.");
        break;
    }
    case 229951:
    {
        returnValue = F("Neubuchsland");
        break;
    }
    case 229952:
    {
        returnValue = F("Neubuchwalde");
        break;
    }
    case 229953:
    {
        returnValue = F("Neubukower Chaussee");
        break;
    }
    case 229954:
    {
        returnValue = F("Neubukower Str.");
        break;
    }
    case 229955:
    {
        returnValue = F("Neubulacher Str.");
        break;
    }
    case 229956:
    {
        returnValue = F("Neuburg");
        break;
    }
    case 229957:
    {
        returnValue = F("Neuburger Hof");
        break;
    }
    case 229958:
    {
        returnValue = F("Neuburger Pfad");
        break;
    }
    case 229959:
    {
        returnValue = F("Neuburger Ring");
        break;
    }
    case 229960:
    {
        returnValue = F("Neuburger Str.");
        break;
    }
    case 229961:
    {
        returnValue = F("Neuburger Weg");
        break;
    }
    case 229962:
    {
        returnValue = F("Neuburghausener Weg");
        break;
    }
    case 229963:
    {
        returnValue = F("Neuburgshof");
        break;
    }
    case 229964:
    {
        returnValue = F("Neuburgstr.");
        break;
    }
    case 229965:
    {
        returnValue = F("Neuburgstädtel");
        break;
    }
    case 229966:
    {
        returnValue = F("Neuburgunder Weg");
        break;
    }
    case 229967:
    {
        returnValue = F("Neuburgweierer Str.");
        break;
    }
    case 229968:
    {
        returnValue = F("Neubuschbeller Weg");
        break;
    }
    case 229969:
    {
        returnValue = F("Neubuschweg");
        break;
    }
    case 229970:
    {
        returnValue = F("Neubärentaler Str.");
        break;
    }
    case 229971:
    {
        returnValue = F("Neuböelschuby");
        break;
    }
    case 229972:
    {
        returnValue = F("Neubörger Str.");
        break;
    }
    case 229973:
    {
        returnValue = F("Neubörgerstr.");
        break;
    }
    case 229974:
    {
        returnValue = F("Neubühl");
        break;
    }
    case 229975:
    {
        returnValue = F("Neubühlauer Str.");
        break;
    }
    case 229976:
    {
        returnValue = F("Neubühlsteige");
        break;
    }
    case 229977:
    {
        returnValue = F("Neubürgerstr.");
        break;
    }
    case 229978:
    {
        returnValue = F("Neuchateller Weg");
        break;
    }
    case 229979:
    {
        returnValue = F("Neuchinger Str.");
        break;
    }
    case 229980:
    {
        returnValue = F("Neuchinger Weg");
        break;
    }
    case 229981:
    {
        returnValue = F("Neucoswiger Str.");
        break;
    }
    case 229982:
    {
        returnValue = F("Neucunnersdorfer Str.");
        break;
    }
    case 229983:
    {
        returnValue = F("Neucunnewitz");
        break;
    }
    case 229984:
    {
        returnValue = F("Neudamm");
        break;
    }
    case 229985:
    {
        returnValue = F("Neudammstr.");
        break;
    }
    case 229986:
    {
        returnValue = F("Neudau");
        break;
    }
    case 229987:
    {
        returnValue = F("Neudeck");
        break;
    }
    case 229988:
    {
        returnValue = F("Neudecker Steig");
        break;
    }
    case 229989:
    {
        returnValue = F("Neudecker Str.");
        break;
    }
    case 229990:
    {
        returnValue = F("Neudecker Weg");
        break;
    }
    case 229991:
    {
        returnValue = F("Neudeckerstr.");
        break;
    }
    case 229992:
    {
        returnValue = F("Neudegger Allee");
        break;
    }
    case 229993:
    {
        returnValue = F("Neudeich");
        break;
    }
    case 229994:
    {
        returnValue = F("Neudeicher Weg");
        break;
    }
    case 229995:
    {
        returnValue = F("Neudeker Str.");
        break;
    }
    case 229996:
    {
        returnValue = F("Neudeker Weg");
        break;
    }
    case 229997:
    {
        returnValue = F("Neudenauer Str.");
        break;
    }
    case 229998:
    {
        returnValue = F("Neudenauerweg");
        break;
    }
    case 229999:
    {
        returnValue = F("Neudersumer Str.");
        break;
    }
    case 230000:
    {
        returnValue = F("Neudes");
        break;
    }
    case 230001:
    {
        returnValue = F("Neudessauer Str.");
        break;
    }
    case 230002:
    {
        returnValue = F("Neudiepeschrath");
        break;
    }
    case 230003:
    {
        returnValue = F("Neudieringhauser Str.");
        break;
    }
    case 230004:
    {
        returnValue = F("Neudierkower Weg");
        break;
    }
    case 230005:
    {
        returnValue = F("Neudietendorf, Bahnhof");
        break;
    }
    case 230006:
    {
        returnValue = F("Neudietendorfer Str.");
        break;
    }
    case 230007:
    {
        returnValue = F("Neudießen");
        break;
    }
    case 230008:
    {
        returnValue = F("Neudießener Str.");
        break;
    }
    case 230009:
    {
        returnValue = F("Neudinger Str.");
        break;
    }
    case 230010:
    {
        returnValue = F("Neudinger Weg");
        break;
    }
    case 230011:
    {
        returnValue = F("Neudobl");
        break;
    }
    case 230012:
    {
        returnValue = F("Neudobritzer Weg");
        break;
    }
    case 230013:
    {
        returnValue = F("Neudorf");
        break;
    }
    case 230014:
    {
        returnValue = F("Neudorf-Klösterlich");
        break;
    }
    case 230015:
    {
        returnValue = F("Neudorfer Allee");
        break;
    }
    case 230016:
    {
        returnValue = F("Neudorfer Fußweg");
        break;
    }
    case 230017:
    {
        returnValue = F("Neudorfer Grenzweg");
        break;
    }
    case 230018:
    {
        returnValue = F("Neudorfer Höhe");
        break;
    }
    case 230019:
    {
        returnValue = F("Neudorfer Markt");
        break;
    }
    case 230020:
    {
        returnValue = F("Neudorfer Moorweg");
        break;
    }
    case 230021:
    {
        returnValue = F("Neudorfer Riege");
        break;
    }
    case 230022:
    {
        returnValue = F("Neudorfer Siedlung");
        break;
    }
    case 356447:
    {
        returnValue = F("n");
        break;
    }
    case 356448:
    {
        returnValue = F("nach Gotteszell");
        break;
    }
    case 356449:
    {
        returnValue = F("nach Maxen");
        break;
    }
    case 356450:
    {
        returnValue = F("nach Zwachau (Röcknitz) S-Weg");
        break;
    }
    case 356451:
    {
        returnValue = F("nasser Lehm");
        break;
    }
    case 356452:
    {
        returnValue = F("naturkundlicher Wanderpfad");
        break;
    }
    case 356453:
    {
        returnValue = F("neben dem Kohlenbahnweg");
        break;
    }
    case 356454:
    {
        returnValue = F("neuer HW1");
        break;
    }
    case 356455:
    {
        returnValue = F("nicht fürs Auto geeignet");
        break;
    }
    case 356456:
    {
        returnValue = F("nicht im Gelände sichtbar");
        break;
    }
    case 356457:
    {
        returnValue = F("nicht markiert");
        break;
    }
    case 356458:
    {
        returnValue = F("noch unbekannt");
        break;
    }
    }
    return returnValue;
}
