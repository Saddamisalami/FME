#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameV1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 317792:
    {
        returnValue = F("V-Weg");
        break;
    }
    case 317793:
    {
        returnValue = F("V. Altstadtgasse");
        break;
    }
    case 317794:
    {
        returnValue = F("V. Gartenreihe");
        break;
    }
    case 317795:
    {
        returnValue = F("V. Tongraben");
        break;
    }
    case 317796:
    {
        returnValue = F("V. Vereinsstr.");
        break;
    }
    case 317797:
    {
        returnValue = F("V.-A.-Fischer-Weg");
        break;
    }
    case 317798:
    {
        returnValue = F("V.-Hornstein-Str.");
        break;
    }
    case 317799:
    {
        returnValue = F("V.-Käppler-Str.");
        break;
    }
    case 317800:
    {
        returnValue = F("V.-Neuburg-Str.");
        break;
    }
    case 317801:
    {
        returnValue = F("V.-Rohrbach-Str.");
        break;
    }
    case 317802:
    {
        returnValue = F("V.-Wadenspann-Str.");
        break;
    }
    case 317803:
    {
        returnValue = F("V.D.K.-Str.");
        break;
    }
    case 317804:
    {
        returnValue = F("VDK Str.");
        break;
    }
    case 317805:
    {
        returnValue = F("VDK-Str.");
        break;
    }
    case 317806:
    {
        returnValue = F("VDK-Weg");
        break;
    }
    case 317807:
    {
        returnValue = F("VDO-Str.");
        break;
    }
    case 317808:
    {
        returnValue = F("VEG-Siedlung");
        break;
    }
    case 317809:
    {
        returnValue = F("VI. Gartenreihe");
        break;
    }
    case 317810:
    {
        returnValue = F("VI. Tongraben");
        break;
    }
    case 317811:
    {
        returnValue = F("VII. Gartenreihe");
        break;
    }
    case 317812:
    {
        returnValue = F("VKSK An der Fundgrube");
        break;
    }
    case 317813:
    {
        returnValue = F("VR-Bank-Str.");
        break;
    }
    case 317814:
    {
        returnValue = F("VR-Passage");
        break;
    }
    case 317815:
    {
        returnValue = F("VW Str. 101");
        break;
    }
    case 317816:
    {
        returnValue = F("VW Str. 107");
        break;
    }
    case 317817:
    {
        returnValue = F("Vaake Süd");
        break;
    }
    case 317818:
    {
        returnValue = F("Vaaker Str.");
        break;
    }
    case 317819:
    {
        returnValue = F("Vaaker Weg");
        break;
    }
    case 317820:
    {
        returnValue = F("Vaalermoorer Str.");
        break;
    }
    case 317821:
    {
        returnValue = F("Vaalser Str.");
        break;
    }
    case 317822:
    {
        returnValue = F("Vaasaer Str.");
        break;
    }
    case 317823:
    {
        returnValue = F("Vaasastr.");
        break;
    }
    case 317824:
    {
        returnValue = F("Vaasbüttel");
        break;
    }
    case 317825:
    {
        returnValue = F("Vaatjelohne");
        break;
    }
    case 317826:
    {
        returnValue = F("Vaaßenweg");
        break;
    }
    case 317827:
    {
        returnValue = F("Vacer Str.");
        break;
    }
    case 317828:
    {
        returnValue = F("Vachaer Berg");
        break;
    }
    case 317829:
    {
        returnValue = F("Vachaer Str.");
        break;
    }
    case 317830:
    {
        returnValue = F("Vachdorfer Str.");
        break;
    }
    case 317831:
    {
        returnValue = F("Vachendorfer Ring");
        break;
    }
    case 317832:
    {
        returnValue = F("Vachendorfer Str.");
        break;
    }
    case 317833:
    {
        returnValue = F("Vachenlueg");
        break;
    }
    case 317834:
    {
        returnValue = F("Vachenluegerstr.");
        break;
    }
    case 317835:
    {
        returnValue = F("Vacher Bergweg");
        break;
    }
    case 317836:
    {
        returnValue = F("Vacher Leitenweg");
        break;
    }
    case 317837:
    {
        returnValue = F("Vacher Regnitzbrücke");
        break;
    }
    case 317838:
    {
        returnValue = F("Vacher Str.");
        break;
    }
    case 317839:
    {
        returnValue = F("Vacher Weg");
        break;
    }
    case 317840:
    {
        returnValue = F("Vacher Zennbrücke");
        break;
    }
    case 317841:
    {
        returnValue = F("Vaddensen");
        break;
    }
    case 317842:
    {
        returnValue = F("Vadenröder Str.");
        break;
    }
    case 317843:
    {
        returnValue = F("Vaderkeborg");
        break;
    }
    case 317844:
    {
        returnValue = F("Vadersdorf");
        break;
    }
    case 317845:
    {
        returnValue = F("Vadersstr.");
        break;
    }
    case 317846:
    {
        returnValue = F("Vadiesweg");
        break;
    }
    case 317847:
    {
        returnValue = F("Vadomarstr.");
        break;
    }
    case 317848:
    {
        returnValue = F("Vadstena-Str.");
        break;
    }
    case 317849:
    {
        returnValue = F("Vaenser Dorfstr.");
        break;
    }
    case 317850:
    {
        returnValue = F("Vaenser Grund");
        break;
    }
    case 317851:
    {
        returnValue = F("Vaenser Weg");
        break;
    }
    case 317852:
    {
        returnValue = F("Vaerloh");
        break;
    }
    case 317853:
    {
        returnValue = F("Vaerloher Str.");
        break;
    }
    case 317854:
    {
        returnValue = F("Vaerstenberg");
        break;
    }
    case 317855:
    {
        returnValue = F("Vaersthausener Str.");
        break;
    }
    case 317856:
    {
        returnValue = F("Vaestestr.");
        break;
    }
    case 317857:
    {
        returnValue = F("Vagedesstr.");
        break;
    }
    case 317858:
    {
        returnValue = F("Vagedesweg");
        break;
    }
    case 317859:
    {
        returnValue = F("Vagel-Griep-Platz");
        break;
    }
    case 317860:
    {
        returnValue = F("Vagel-Grip-Weg");
        break;
    }
    case 317861:
    {
        returnValue = F("Vagelpohl");
        break;
    }
    case 317862:
    {
        returnValue = F("Vagelredder");
        break;
    }
    case 317863:
    {
        returnValue = F("Vagen-Weg 1");
        break;
    }
    case 317864:
    {
        returnValue = F("Vagener Str.");
        break;
    }
    case 317865:
    {
        returnValue = F("Vagenerau Weg");
        break;
    }
    case 317866:
    {
        returnValue = F("Vagerfeldweg");
        break;
    }
    case 317867:
    {
        returnValue = F("Vagesweg");
        break;
    }
    case 317868:
    {
        returnValue = F("Vagethweg");
        break;
    }
    case 317869:
    {
        returnValue = F("Vagtenfurtsschneise");
        break;
    }
    case 317870:
    {
        returnValue = F("Vagtstr.");
        break;
    }
    case 317871:
    {
        returnValue = F("Vahlandstr.");
        break;
    }
    case 317872:
    {
        returnValue = F("Vahlberger Weg");
        break;
    }
    case 317873:
    {
        returnValue = F("Vahlbrucher Str.");
        break;
    }
    case 317874:
    {
        returnValue = F("Vahlbusch");
        break;
    }
    case 317875:
    {
        returnValue = F("Vahlder Kirchweg");
        break;
    }
    case 317876:
    {
        returnValue = F("Vahlder Weg");
        break;
    }
    case 317877:
    {
        returnValue = F("Vahldiekstr.");
        break;
    }
    case 317878:
    {
        returnValue = F("Vahldieksweg");
        break;
    }
    case 317879:
    {
        returnValue = F("Vahldorfer Str.");
        break;
    }
    case 317880:
    {
        returnValue = F("Vahldorfer Weg");
        break;
    }
    case 317881:
    {
        returnValue = F("Vahlefelderstr.");
        break;
    }
    case 317882:
    {
        returnValue = F("Vahlenhorst");
        break;
    }
    case 317883:
    {
        returnValue = F("Vahlenkamp");
        break;
    }
    case 317884:
    {
        returnValue = F("Vahlenkampffweg");
        break;
    }
    case 317885:
    {
        returnValue = F("Vahler Berg");
        break;
    }
    case 317886:
    {
        returnValue = F("Vahler Twetje");
        break;
    }
    case 317887:
    {
        returnValue = F("Vahleweg");
        break;
    }
    case 317888:
    {
        returnValue = F("Vahlhausener Str.");
        break;
    }
    case 317889:
    {
        returnValue = F("Vahlhauser Höhe");
        break;
    }
    case 317890:
    {
        returnValue = F("Vahlhauser Str.");
        break;
    }
    case 317891:
    {
        returnValue = F("Vahlkamp");
        break;
    }
    case 317892:
    {
        returnValue = F("Vahlser Str.");
        break;
    }
    case 317893:
    {
        returnValue = F("Vahlstr.");
        break;
    }
    case 317894:
    {
        returnValue = F("Vahlzen");
        break;
    }
    case 317895:
    {
        returnValue = F("Vahlzener Str.");
        break;
    }
    case 317896:
    {
        returnValue = F("Vahnenbrucksweg");
        break;
    }
    case 317897:
    {
        returnValue = F("Vahrendorf");
        break;
    }
    case 317898:
    {
        returnValue = F("Vahrener Damm");
        break;
    }
    case 317899:
    {
        returnValue = F("Vahrener Dorfstr.");
        break;
    }
    case 317900:
    {
        returnValue = F("Vahrener Feld");
        break;
    }
    case 317901:
    {
        returnValue = F("Vahrener Str.");
        break;
    }
    case 317902:
    {
        returnValue = F("Vahrenfeld");
        break;
    }
    case 317903:
    {
        returnValue = F("Vahrenhorstweg");
        break;
    }
    case 317904:
    {
        returnValue = F("Vahrenkamp");
        break;
    }
    case 317905:
    {
        returnValue = F("Vahrenort");
        break;
    }
    case 317906:
    {
        returnValue = F("Vahrenstr.");
        break;
    }
    case 317907:
    {
        returnValue = F("Vahrenwalder Platz");
        break;
    }
    case 317908:
    {
        returnValue = F("Vahrenwalder Str.");
        break;
    }
    case 317909:
    {
        returnValue = F("Vahrenwinkelweg");
        break;
    }
    case 317910:
    {
        returnValue = F("Vahrer See");
        break;
    }
    case 317911:
    {
        returnValue = F("Vahrer Str.");
        break;
    }
    case 317912:
    {
        returnValue = F("Vahrholzer Dorfstr.");
        break;
    }
    case 317913:
    {
        returnValue = F("Vahrner Str.");
        break;
    }
    case 317914:
    {
        returnValue = F("Vahrnower Str.");
        break;
    }
    case 317915:
    {
        returnValue = F("Vaihenwiesenstr.");
        break;
    }
    case 317916:
    {
        returnValue = F("Vaihingen");
        break;
    }
    case 317917:
    {
        returnValue = F("Vaihingener Str.");
        break;
    }
    case 317918:
    {
        returnValue = F("Vaihinger Landstr.");
        break;
    }
    case 317919:
    {
        returnValue = F("Vaihinger Markt");
        break;
    }
    case 317920:
    {
        returnValue = F("Vaihinger Str.");
        break;
    }
    case 317921:
    {
        returnValue = F("Vaihinger Weg");
        break;
    }
    case 317922:
    {
        returnValue = F("Vaihinger-Hof-Str.");
        break;
    }
    case 317923:
    {
        returnValue = F("Vaihingergässle");
        break;
    }
    case 317924:
    {
        returnValue = F("Vaihingerhof");
        break;
    }
    case 317925:
    {
        returnValue = F("Vaihingerstr.");
        break;
    }
    case 317926:
    {
        returnValue = F("Vaihingweg");
        break;
    }
    case 317927:
    {
        returnValue = F("Vaitsbergstr.");
        break;
    }
    case 317928:
    {
        returnValue = F("Vaitsgasse");
        break;
    }
    case 317929:
    {
        returnValue = F("Vaitshainer Str.");
        break;
    }
    case 317930:
    {
        returnValue = F("Vakantenweg");
        break;
    }
    case 317931:
    {
        returnValue = F("Val-de-Reuil-Str.");
        break;
    }
    case 317932:
    {
        returnValue = F("Vala-Lamberger-Str.");
        break;
    }
    case 317933:
    {
        returnValue = F("Valbert-Bahnhof");
        break;
    }
    case 317934:
    {
        returnValue = F("Valberter Str.");
        break;
    }
    case 317935:
    {
        returnValue = F("Valchinsteinstr.");
        break;
    }
    case 317936:
    {
        returnValue = F("Valckenbergstr.");
        break;
    }
    case 317937:
    {
        returnValue = F("Valckenburghstr.");
        break;
    }
    case 317938:
    {
        returnValue = F("Valdagno-Platz");
        break;
    }
    case 317939:
    {
        returnValue = F("Valdenaire-Ring");
        break;
    }
    case 317940:
    {
        returnValue = F("Valdergasse");
        break;
    }
    case 317941:
    {
        returnValue = F("Valderstr.");
        break;
    }
    case 317942:
    {
        returnValue = F("Valdersweg");
        break;
    }
    case 317943:
    {
        returnValue = F("Valderweg");
        break;
    }
    case 317944:
    {
        returnValue = F("Valdoieweg");
        break;
    }
    case 317945:
    {
        returnValue = F("Valdorfer Str.");
        break;
    }
    case 317946:
    {
        returnValue = F("Valenceallee");
        break;
    }
    case 317947:
    {
        returnValue = F("Valenciaplatz");
        break;
    }
    case 317948:
    {
        returnValue = F("Valencienner Str.");
        break;
    }
    case 317949:
    {
        returnValue = F("Valenkamp");
        break;
    }
    case 317950:
    {
        returnValue = F("Valentin-Arnold-Str.");
        break;
    }
    case 317951:
    {
        returnValue = F("Valentin-Bauer-Str.");
        break;
    }
    case 317952:
    {
        returnValue = F("Valentin-Bauer-Weg");
        break;
    }
    case 317953:
    {
        returnValue = F("Valentin-Becker-Str.");
        break;
    }
    case 317954:
    {
        returnValue = F("Valentin-Brand-Str.");
        break;
    }
    case 317955:
    {
        returnValue = F("Valentin-Braun-Str.");
        break;
    }
    case 317956:
    {
        returnValue = F("Valentin-Brückner-Str.");
        break;
    }
    case 317957:
    {
        returnValue = F("Valentin-Dretzel-Str.");
        break;
    }
    case 317958:
    {
        returnValue = F("Valentin-Feldmann-Str.");
        break;
    }
    case 317959:
    {
        returnValue = F("Valentin-Fischer-Str.");
        break;
    }
    case 317960:
    {
        returnValue = F("Valentin-Fuchs-Str.");
        break;
    }
    case 317961:
    {
        returnValue = F("Valentin-Fürstenhöfer-Str.");
        break;
    }
    case 317962:
    {
        returnValue = F("Valentin-Hausmann-Str.");
        break;
    }
    case 317963:
    {
        returnValue = F("Valentin-Heider-Str.");
        break;
    }
    case 317964:
    {
        returnValue = F("Valentin-Hock-Str.");
        break;
    }
    case 317965:
    {
        returnValue = F("Valentin-Hopf-Str.");
        break;
    }
    case 317966:
    {
        returnValue = F("Valentin-Kindlin-Str.");
        break;
    }
    case 317967:
    {
        returnValue = F("Valentin-Kirmeyer-Str.");
        break;
    }
    case 317968:
    {
        returnValue = F("Valentin-Limmer-Str.");
        break;
    }
    case 317969:
    {
        returnValue = F("Valentin-Messing-Weg");
        break;
    }
    case 317970:
    {
        returnValue = F("Valentin-Münzel-Str.");
        break;
    }
    case 317971:
    {
        returnValue = F("Valentin-Ort-Str.");
        break;
    }
    case 317972:
    {
        returnValue = F("Valentin-Ostertag-Str.");
        break;
    }
    case 317973:
    {
        returnValue = F("Valentin-Pfeifer-Str.");
        break;
    }
    case 317974:
    {
        returnValue = F("Valentin-Rathgeber-Str.");
        break;
    }
    case 317975:
    {
        returnValue = F("Valentin-Rathgeber-Weg");
        break;
    }
    case 317976:
    {
        returnValue = F("Valentin-Reichardt-Weg");
        break;
    }
    case 317977:
    {
        returnValue = F("Valentin-Rose-Str.");
        break;
    }
    case 317978:
    {
        returnValue = F("Valentin-Rosel-Str.");
        break;
    }
    case 317979:
    {
        returnValue = F("Valentin-Schmetzer-Weg");
        break;
    }
    case 317980:
    {
        returnValue = F("Valentin-Schmitt-Weg");
        break;
    }
    case 317981:
    {
        returnValue = F("Valentin-Senger-Str.");
        break;
    }
    case 317982:
    {
        returnValue = F("Valentin-Stadler-Weg");
        break;
    }
    case 317983:
    {
        returnValue = F("Valentin-Still-Str.");
        break;
    }
    case 317984:
    {
        returnValue = F("Valentin-Streuber-Str.");
        break;
    }
    case 317985:
    {
        returnValue = F("Valentin-Thau-Str.");
        break;
    }
    case 317986:
    {
        returnValue = F("Valentin-Thierer-Str.");
        break;
    }
    case 317987:
    {
        returnValue = F("Valentin-Thomann-Str.");
        break;
    }
    case 317988:
    {
        returnValue = F("Valentin-Ulrich-Str.");
        break;
    }
    case 317989:
    {
        returnValue = F("Valentin-Winter-Str.");
        break;
    }
    case 317990:
    {
        returnValue = F("Valentin-Zang-Str.");
        break;
    }
    case 317991:
    {
        returnValue = F("Valentina-Tereschkowa-Str.");
        break;
    }
    case 317992:
    {
        returnValue = F("Valentinastr.");
        break;
    }
    case 317993:
    {
        returnValue = F("Valentinenstr.");
        break;
    }
    case 317994:
    {
        returnValue = F("Valentinerallee");
        break;
    }
    case 317995:
    {
        returnValue = F("Valentinerhof");
        break;
    }
    case 317996:
    {
        returnValue = F("Valentingasse");
        break;
    }
    case 317997:
    {
        returnValue = F("Valentinianstr.");
        break;
    }
    case 317998:
    {
        returnValue = F("Valentinianweg");
        break;
    }
    case 317999:
    {
        returnValue = F("Valentinistr.");
        break;
    }
    case 318000:
    {
        returnValue = F("Valentinsbreite");
        break;
    }
    case 318001:
    {
        returnValue = F("Valentinshof");
        break;
    }
    case 318002:
    {
        returnValue = F("Valentinsiedlung");
        break;
    }
    case 318003:
    {
        returnValue = F("Valentinskamp");
        break;
    }
    case 318004:
    {
        returnValue = F("Valentinspark");
        break;
    }
    case 318005:
    {
        returnValue = F("Valentinsruh");
        break;
    }
    case 318006:
    {
        returnValue = F("Valentinstr.");
        break;
    }
    case 318007:
    {
        returnValue = F("Valentinsweg");
        break;
    }
    case 318008:
    {
        returnValue = F("Valentinusstr.");
        break;
    }
    case 318009:
    {
        returnValue = F("Valentinusweg");
        break;
    }
    case 318010:
    {
        returnValue = F("Valentinweg");
        break;
    }
    case 318011:
    {
        returnValue = F("Valenusstr.");
        break;
    }
    case 318012:
    {
        returnValue = F("Valeostr.");
        break;
    }
    case 318013:
    {
        returnValue = F("Valepagestr.");
        break;
    }
    case 318014:
    {
        returnValue = F("Valepper Str.");
        break;
    }
    case 318015:
    {
        returnValue = F("Valeppstr.");
        break;
    }
    case 318016:
    {
        returnValue = F("Valeppweg");
        break;
    }
    case 318017:
    {
        returnValue = F("Valeria-Kratina-Weg");
        break;
    }
    case 318018:
    {
        returnValue = F("Valerian-Brenner-Weg");
        break;
    }
    case 318019:
    {
        returnValue = F("Valerieweg");
        break;
    }
    case 318020:
    {
        returnValue = F("Valeriusstr.");
        break;
    }
    case 318021:
    {
        returnValue = F("Valernheide");
        break;
    }
    case 318022:
    {
        returnValue = F("Valersgarten");
        break;
    }
    case 318023:
    {
        returnValue = F("Valerystr.");
        break;
    }
    case 318024:
    {
        returnValue = F("Valesistr.");
        break;
    }
    case 318025:
    {
        returnValue = F("Valetsberg");
        break;
    }
    case 318026:
    {
        returnValue = F("Valge");
        break;
    }
    case 318027:
    {
        returnValue = F("Valger Landstr.");
        break;
    }
    case 318028:
    {
        returnValue = F("Valger Weg");
        break;
    }
    case 318029:
    {
        returnValue = F("Valierweg");
        break;
    }
    case 318030:
    {
        returnValue = F("Valkeakoskistr.");
        break;
    }
    case 318031:
    {
        returnValue = F("Valkenburger Platz");
        break;
    }
    case 318032:
    {
        returnValue = F("Valkenburger Str.");
        break;
    }
    case 318033:
    {
        returnValue = F("Valkenierstr.");
        break;
    }
    case 318034:
    {
        returnValue = F("Valkerhofstadt");
        break;
    }
    case 318035:
    {
        returnValue = F("Vallanstr.");
        break;
    }
    case 318036:
    {
        returnValue = F("Vallendarer Str.");
        break;
    }
    case 318037:
    {
        returnValue = F("Vallentinscher Kamp");
        break;
    }
    case 318038:
    {
        returnValue = F("Vallerstr.");
        break;
    }
    case 318039:
    {
        returnValue = F("Vallettastr.");
        break;
    }
    case 318040:
    {
        returnValue = F("Valleyer Str.");
        break;
    }
    case 318041:
    {
        returnValue = F("Valleyer Weg");
        break;
    }
    case 318042:
    {
        returnValue = F("Valleyplatz");
        break;
    }
    case 318043:
    {
        returnValue = F("Valleystr.");
        break;
    }
    case 318044:
    {
        returnValue = F("Valloch");
        break;
    }
    case 318045:
    {
        returnValue = F("Vallrieder Weg");
        break;
    }
    case 318046:
    {
        returnValue = F("Vallstedter Str.");
        break;
    }
    case 318047:
    {
        returnValue = F("Vallstedter Weg");
        break;
    }
    case 318048:
    {
        returnValue = F("Valluhner Str.");
        break;
    }
    case 318049:
    {
        returnValue = F("Valmepochwerk");
        break;
    }
    case 318050:
    {
        returnValue = F("Valmestr.");
        break;
    }
    case 318051:
    {
        returnValue = F("Valmeweg");
        break;
    }
    case 318052:
    {
        returnValue = F("Valoisstr.");
        break;
    }
    case 318053:
    {
        returnValue = F("Valparaisostr.");
        break;
    }
    case 318054:
    {
        returnValue = F("Valpichlerstr.");
        break;
    }
    case 318055:
    {
        returnValue = F("Valréaser Str.");
        break;
    }
    case 318056:
    {
        returnValue = F("Valstr.");
        break;
    }
    case 318057:
    {
        returnValue = F("Valtenbergblick");
        break;
    }
    case 318058:
    {
        returnValue = F("Valtenbergstr.");
        break;
    }
    case 318059:
    {
        returnValue = F("Valtenbergweg");
        break;
    }
    case 318060:
    {
        returnValue = F("Valtensbreite");
        break;
    }
    case 318061:
    {
        returnValue = F("Valtentalstr.");
        break;
    }
    case 318062:
    {
        returnValue = F("Valter");
        break;
    }
    case 318063:
    {
        returnValue = F("Valterweg");
        break;
    }
    case 318064:
    {
        returnValue = F("Valtl");
        break;
    }
    case 318065:
    {
        returnValue = F("Valve");
        break;
    }
    case 318066:
    {
        returnValue = F("Valweg");
        break;
    }
    case 318067:
    {
        returnValue = F("Valwiger Str.");
        break;
    }
    case 318068:
    {
        returnValue = F("Valznerweiherstr.");
        break;
    }
    case 318069:
    {
        returnValue = F("Van Dell");
        break;
    }
    case 318070:
    {
        returnValue = F("Van Geysternstr.");
        break;
    }
    case 318071:
    {
        returnValue = F("Van der Straeten-Weg");
        break;
    }
    case 318072:
    {
        returnValue = F("Van't-Hoff-Str.");
        break;
    }
    case 318073:
    {
        returnValue = F("Van-Acken-Str.");
        break;
    }
    case 318074:
    {
        returnValue = F("Van-Ackeren-Str.");
        break;
    }
    case 318075:
    {
        returnValue = F("Van-Alpen-Str.");
        break;
    }
    case 318076:
    {
        returnValue = F("Van-Bebber-Str.");
        break;
    }
    case 318077:
    {
        returnValue = F("Van-Beek-Str.");
        break;
    }
    case 318078:
    {
        returnValue = F("Van-Beers-Str.");
        break;
    }
    case 318079:
    {
        returnValue = F("Van-Beethoven-Ring");
        break;
    }
    case 318080:
    {
        returnValue = F("Van-Beethoven-Str.");
        break;
    }
    case 318081:
    {
        returnValue = F("Van-Beethoven-Weg");
        break;
    }
    case 318082:
    {
        returnValue = F("Van-Brackel-Str.");
        break;
    }
    case 318083:
    {
        returnValue = F("Van-Brandes-Str.");
        break;
    }
    case 318084:
    {
        returnValue = F("Van-Bömmels-Eck");
        break;
    }
    case 318085:
    {
        returnValue = F("Van-Coeverden-Weg");
        break;
    }
    case 318086:
    {
        returnValue = F("Van-Dawen-Weg");
        break;
    }
    case 318087:
    {
        returnValue = F("Van-Delden-Str.");
        break;
    }
    case 318088:
    {
        returnValue = F("Van-Der-Klee-Stiege");
        break;
    }
    case 318089:
    {
        returnValue = F("Van-Dieken-Str.");
        break;
    }
    case 318090:
    {
        returnValue = F("Van-Douven-Str.");
        break;
    }
    case 318091:
    {
        returnValue = F("Van-Dyck-Str.");
        break;
    }
    case 318092:
    {
        returnValue = F("Van-Endert-Str.");
        break;
    }
    case 318093:
    {
        returnValue = F("Van-Endert-Weg");
        break;
    }
    case 318094:
    {
        returnValue = F("Van-Eyck-Str.");
        break;
    }
    case 318095:
    {
        returnValue = F("Van-Gemmeren-Weg");
        break;
    }
    case 318096:
    {
        returnValue = F("Van-Gent-Str.");
        break;
    }
    case 318097:
    {
        returnValue = F("Van-Gils-Str.");
        break;
    }
    case 318098:
    {
        returnValue = F("Van-Gogh-Allee");
        break;
    }
    case 318099:
    {
        returnValue = F("Van-Gogh-Hof");
        break;
    }
    case 318100:
    {
        returnValue = F("Van-Gogh-Platz");
        break;
    }
    case 318101:
    {
        returnValue = F("Van-Gogh-Ring");
        break;
    }
    case 318102:
    {
        returnValue = F("Van-Gogh-Str.");
        break;
    }
    case 318103:
    {
        returnValue = F("Van-Gogh-Weg");
        break;
    }
    case 318104:
    {
        returnValue = F("Van-Goyen-Str.");
        break;
    }
    case 318105:
    {
        returnValue = F("Van-Heekeren-Str.");
        break;
    }
    case 318106:
    {
        returnValue = F("Van-Hees-Str.");
        break;
    }
    case 318107:
    {
        returnValue = F("Van-Heyden-Str.");
        break;
    }
    case 318108:
    {
        returnValue = F("Van-Jinnelt-Str.");
        break;
    }
    case 318109:
    {
        returnValue = F("Van-Kampen-Str.");
        break;
    }
    case 318110:
    {
        returnValue = F("Van-Kempen-Str.");
        break;
    }
    case 318111:
    {
        returnValue = F("Van-Leyden-Str.");
        break;
    }
    case 318112:
    {
        returnValue = F("Van-Loon-Str.");
        break;
    }
    case 318113:
    {
        returnValue = F("Van-Meenen-Str.");
        break;
    }
    case 318114:
    {
        returnValue = F("Van-Melle-Str.");
        break;
    }
    case 318115:
    {
        returnValue = F("Van-Randenborgh-Weg");
        break;
    }
    case 318116:
    {
        returnValue = F("Van-Recum-Str.");
        break;
    }
    case 318117:
    {
        returnValue = F("Van-Suntum-Weg");
        break;
    }
    case 318118:
    {
        returnValue = F("Van-Sytzama-Str.");
        break;
    }
    case 318119:
    {
        returnValue = F("Van-Thiels-Gängske");
        break;
    }
    case 318120:
    {
        returnValue = F("Van-Wanray-Str.");
        break;
    }
    case 318121:
    {
        returnValue = F("Van-Werth-Str.");
        break;
    }
    case 318122:
    {
        returnValue = F("Van-Wiggen-Platz");
        break;
    }
    case 318123:
    {
        returnValue = F("Van-Wingene-Str.");
        break;
    }
    case 318124:
    {
        returnValue = F("Van-Woerden-Str.");
        break;
    }
    case 318125:
    {
        returnValue = F("Van-Zuylen-Str.");
        break;
    }
    case 318126:
    {
        returnValue = F("Van-de-Locht-Str.");
        break;
    }
    case 318127:
    {
        returnValue = F("Van-de-Wall-Str.");
        break;
    }
    case 318128:
    {
        returnValue = F("Van-den-Bergh-Str.");
        break;
    }
    case 318129:
    {
        returnValue = F("Van-den-Bosch-Str.");
        break;
    }
    case 318130:
    {
        returnValue = F("Van-den-Branden-Weg");
        break;
    }
    case 318131:
    {
        returnValue = F("Van-der-Beek-Str.");
        break;
    }
    case 318132:
    {
        returnValue = F("Van-der-Foehr-Damm");
        break;
    }
    case 318133:
    {
        returnValue = F("Van-der-Giese-Str.");
        break;
    }
    case 318134:
    {
        returnValue = F("Van-der-Grinten-Str.");
        break;
    }
    case 318135:
    {
        returnValue = F("Van-der-Linde-Hof");
        break;
    }
    case 318136:
    {
        returnValue = F("Van-der-Mölen-Str.");
        break;
    }
    case 318137:
    {
        returnValue = F("Van-der-Reis-Str.");
        break;
    }
    case 318138:
    {
        returnValue = F("Van-der-Smissen-Weg");
        break;
    }
    case 318139:
    {
        returnValue = F("Van-der-Upwich-Str.");
        break;
    }
    case 318140:
    {
        returnValue = F("Van-der-Velden-Str.");
        break;
    }
    case 318141:
    {
        returnValue = F("Van-der-Velden-Weg");
        break;
    }
    case 318142:
    {
        returnValue = F("Van-der-Wal-Str.");
        break;
    }
    case 318143:
    {
        returnValue = F("Van-der-Werff-Str.");
        break;
    }
    case 318144:
    {
        returnValue = F("Vancouver-Str.");
        break;
    }
    case 318145:
    {
        returnValue = F("Vancouverstr.");
        break;
    }
    case 318146:
    {
        returnValue = F("Vandalenstr.");
        break;
    }
    case 318147:
    {
        returnValue = F("Vandaliastr.");
        break;
    }
    case 318148:
    {
        returnValue = F("Vandanser Str.");
        break;
    }
    case 318149:
    {
        returnValue = F("Vandoeuvre Str.");
        break;
    }
    case 318150:
    {
        returnValue = F("Vandsburger Weg");
        break;
    }
    case 318151:
    {
        returnValue = F("Vangerowpad");
        break;
    }
    case 318152:
    {
        returnValue = F("Vangerowstr.");
        break;
    }
    case 318153:
    {
        returnValue = F("Vanikumer Str.");
        break;
    }
    case 318154:
    {
        returnValue = F("Vanille");
        break;
    }
    case 318155:
    {
        returnValue = F("Vanilleweg");
        break;
    }
    case 318156:
    {
        returnValue = F("Vanottiweg");
        break;
    }
    case 318157:
    {
        returnValue = F("Vanselower Bruch");
        break;
    }
    case 318158:
    {
        returnValue = F("Vanselower Eck");
        break;
    }
    case 318159:
    {
        returnValue = F("Vant-Hoff-Str.");
        break;
    }
    case 318160:
    {
        returnValue = F("Vaogts Hüsken");
        break;
    }
    case 318161:
    {
        returnValue = F("Vaogtsbarg");
        break;
    }
    case 318162:
    {
        returnValue = F("Varangéviller Str.");
        break;
    }
    case 318163:
    {
        returnValue = F("Varbelvitz");
        break;
    }
    case 318164:
    {
        returnValue = F("Varbitzer Weg");
        break;
    }
    case 318165:
    {
        returnValue = F("Varbrook");
        break;
    }
    case 318166:
    {
        returnValue = F("Varces-Platz");
        break;
    }
    case 318167:
    {
        returnValue = F("Vardegötzer Str.");
        break;
    }
    case 318168:
    {
        returnValue = F("Vardeilser Landstr.");
        break;
    }
    case 318169:
    {
        returnValue = F("Vardingholter Str.");
        break;
    }
    case 318170:
    {
        returnValue = F("Varel");
        break;
    }
    case 318171:
    {
        returnValue = F("Varel-Neuenburg");
        break;
    }
    case 318172:
    {
        returnValue = F("Vareler Str.");
        break;
    }
    case 318173:
    {
        returnValue = F("Vareler Weg");
        break;
    }
    case 318174:
    {
        returnValue = F("Varellweg");
        break;
    }
    case 318175:
    {
        returnValue = F("Varelmanns Hof");
        break;
    }
    case 318176:
    {
        returnValue = F("Varendorfer Str.");
        break;
    }
    case 318177:
    {
        returnValue = F("Varenholzer Str.");
        break;
    }
    case 318178:
    {
        returnValue = F("Varenholzstr.");
        break;
    }
    case 318179:
    {
        returnValue = F("Varenhorststr.");
        break;
    }
    case 318180:
    {
        returnValue = F("Vareniusweg");
        break;
    }
    case 318181:
    {
        returnValue = F("Varenkopf");
        break;
    }
    case 318182:
    {
        returnValue = F("Varenner Str.");
        break;
    }
    case 318183:
    {
        returnValue = F("Varenroder Str.");
        break;
    }
    case 318184:
    {
        returnValue = F("Varenseller Str.");
        break;
    }
    case 318185:
    {
        returnValue = F("Varenseller Weg");
        break;
    }
    case 318186:
    {
        returnValue = F("Vargatzer Weg");
        break;
    }
    case 318187:
    {
        returnValue = F("Vargetweg");
        break;
    }
    case 318188:
    {
        returnValue = F("Vargulaer Str.");
        break;
    }
    case 318189:
    {
        returnValue = F("Varholzer Str.");
        break;
    }
    case 318190:
    {
        returnValue = F("Variniusstr.");
        break;
    }
    case 318191:
    {
        returnValue = F("Varkausring");
        break;
    }
    case 318192:
    {
        returnValue = F("Varkausstr.");
        break;
    }
    case 318193:
    {
        returnValue = F("Varlar");
        break;
    }
    case 318194:
    {
        returnValue = F("Varlarer Hof");
        break;
    }
    case 318195:
    {
        returnValue = F("Varler Brink");
        break;
    }
    case 318196:
    {
        returnValue = F("Varler Str.");
        break;
    }
    case 318197:
    {
        returnValue = F("Varler Wald");
        break;
    }
    case 318198:
    {
        returnValue = F("Varleystr.");
        break;
    }
    case 318199:
    {
        returnValue = F("Varleystrasse");
        break;
    }
    case 318200:
    {
        returnValue = F("Varlheider Str.");
        break;
    }
    case 318201:
    {
        returnValue = F("Varlinger Dorfstr.");
        break;
    }
    case 318202:
    {
        returnValue = F("Varloh");
        break;
    }
    case 318203:
    {
        returnValue = F("Varloher Str.");
        break;
    }
    case 318204:
    {
        returnValue = F("Varloser Str.");
        break;
    }
    case 318205:
    {
        returnValue = F("Varmisser Str.");
        break;
    }
    case 318206:
    {
        returnValue = F("Varnbülerstr.");
        break;
    }
    case 318207:
    {
        returnValue = F("Varnhagenstr.");
        break;
    }
    case 318208:
    {
        returnValue = F("Varnhalter Weg");
        break;
    }
    case 318209:
    {
        returnValue = F("Varnhorststr.");
        break;
    }
    case 318210:
    {
        returnValue = F("Varnhusenstr.");
        break;
    }
    case 318211:
    {
        returnValue = F("Varnhöveler Str.");
        break;
    }
    case 318212:
    {
        returnValue = F("Varnkamp");
        break;
    }
    case 318213:
    {
        returnValue = F("Varnkevitz");
        break;
    }
    case 318214:
    {
        returnValue = F("Varnkevitzer Weg");
        break;
    }
    case 318215:
    {
        returnValue = F("Varrel");
        break;
    }
    case 318216:
    {
        returnValue = F("Varrelbuscher Str.");
        break;
    }
    case 318217:
    {
        returnValue = F("Varreler Dorfstr.");
        break;
    }
    case 318218:
    {
        returnValue = F("Varreler Feld");
        break;
    }
    case 318219:
    {
        returnValue = F("Varreler Kirchweg");
        break;
    }
    case 318220:
    {
        returnValue = F("Varreler Landstr.");
        break;
    }
    case 318221:
    {
        returnValue = F("Varreler Str.");
        break;
    }
    case 318222:
    {
        returnValue = F("Varrelmannstr.");
        break;
    }
    case 318223:
    {
        returnValue = F("Varrentrappstr.");
        break;
    }
    case 318224:
    {
        returnValue = F("Varresbecker Str.");
        break;
    }
    case 318225:
    {
        returnValue = F("Varrlingser Weg");
        break;
    }
    case 318226:
    {
        returnValue = F("Varstbruch");
        break;
    }
    case 318227:
    {
        returnValue = F("Varster Dorfstr.");
        break;
    }
    case 318228:
    {
        returnValue = F("Varster Str.");
        break;
    }
    case 318229:
    {
        returnValue = F("Varta-Platz");
        break;
    }
    case 318230:
    {
        returnValue = F("Varuspfad");
        break;
    }
    case 318231:
    {
        returnValue = F("Varusring");
        break;
    }
    case 318232:
    {
        returnValue = F("Varusstr.");
        break;
    }
    case 318233:
    {
        returnValue = F("Varuswaldstr.");
        break;
    }
    case 318234:
    {
        returnValue = F("Varusweg");
        break;
    }
    case 318235:
    {
        returnValue = F("Varziner Str.");
        break;
    }
    case 318236:
    {
        returnValue = F("Vasbach");
        break;
    }
    case 318237:
    {
        returnValue = F("Vasbecker Str.");
        break;
    }
    case 318238:
    {
        returnValue = F("Vasbühler Str.");
        break;
    }
    case 318239:
    {
        returnValue = F("Vaschvitz");
        break;
    }
    case 318240:
    {
        returnValue = F("Vasco-da-Gama-Platz");
        break;
    }
    case 318241:
    {
        returnValue = F("Vasco-da-Gama-Weg");
        break;
    }
    case 318242:
    {
        returnValue = F("Vaselinge");
        break;
    }
    case 318243:
    {
        returnValue = F("Vaselstr.");
        break;
    }
    case 318244:
    {
        returnValue = F("Vasenbusch");
        break;
    }
    case 318245:
    {
        returnValue = F("Vasenweg");
        break;
    }
    case 318246:
    {
        returnValue = F("Vaskúter Str.");
        break;
    }
    case 318247:
    {
        returnValue = F("Vasmerstr.");
        break;
    }
    case 318248:
    {
        returnValue = F("Vastersstr.");
        break;
    }
    case 318249:
    {
        returnValue = F("Vatan");
        break;
    }
    case 318250:
    {
        returnValue = F("Vater-Imme-Weg");
        break;
    }
    case 318251:
    {
        returnValue = F("Vater-Jahn-Berg");
        break;
    }
    case 318252:
    {
        returnValue = F("Vater-Jahn-Str.");
        break;
    }
    case 318253:
    {
        returnValue = F("Vater-Klein-Str.");
        break;
    }
    case 318254:
    {
        returnValue = F("Vater-Reichenberger-Str.");
        break;
    }
    case 318255:
    {
        returnValue = F("Vater-Zille-Weg");
        break;
    }
    case 318256:
    {
        returnValue = F("Vaterlandsgrubenweg");
        break;
    }
    case 318257:
    {
        returnValue = F("Vaterlandsweg");
        break;
    }
    case 318258:
    {
        returnValue = F("Vatersham");
        break;
    }
    case 318259:
    {
        returnValue = F("Vatersplaner Str.");
        break;
    }
    case 318260:
    {
        returnValue = F("Vaterstettener Str.");
        break;
    }
    case 318261:
    {
        returnValue = F("Vaterstettener Weg");
        break;
    }
    case 318262:
    {
        returnValue = F("Vatterstr.");
        break;
    }
    case 318263:
    {
        returnValue = F("Vatteröder Str.");
        break;
    }
    case 318264:
    {
        returnValue = F("Vattmannstr.");
        break;
    }
    case 318265:
    {
        returnValue = F("Vauban-Insel");
        break;
    }
    case 318266:
    {
        returnValue = F("Vaubanallee");
        break;
    }
    case 318267:
    {
        returnValue = F("Vaubanstr.");
        break;
    }
    case 318268:
    {
        returnValue = F("Vaucouleursring");
        break;
    }
    case 318269:
    {
        returnValue = F("Vautheigasse");
        break;
    }
    case 318270:
    {
        returnValue = F("Vautierstr.");
        break;
    }
    case 318271:
    {
        returnValue = F("Vautswiesenweg");
        break;
    }
    case 318272:
    {
        returnValue = F("Vauß Kamp");
        break;
    }
    case 318273:
    {
        returnValue = F("Vauß-Hof WuselWiese");
        break;
    }
    case 318274:
    {
        returnValue = F("Vazaninistr.");
        break;
    }
    case 318275:
    {
        returnValue = F("Vaßmerstr.");
        break;
    }
    case 318276:
    {
        returnValue = F("VdK-Heim-Str.");
        break;
    }
    case 318277:
    {
        returnValue = F("VdK-Siedlung");
        break;
    }
    case 318278:
    {
        returnValue = F("VdK-Str.");
        break;
    }
    case 318279:
    {
        returnValue = F("Vechelder Str.");
        break;
    }
    case 318280:
    {
        returnValue = F("Vechelder Weg");
        break;
    }
    case 318281:
    {
        returnValue = F("Vechtaer Hof");
        break;
    }
    case 318282:
    {
        returnValue = F("Vechtaer Marsch");
        break;
    }
    case 318283:
    {
        returnValue = F("Vechtaer Str.");
        break;
    }
    case 318284:
    {
        returnValue = F("Vechtaer Weg");
        break;
    }
    case 318285:
    {
        returnValue = F("Vechtastr.");
        break;
    }
    case 318286:
    {
        returnValue = F("Vechteaue");
        break;
    }
    case 318287:
    {
        returnValue = F("Vechtedamm");
        break;
    }
    case 318288:
    {
        returnValue = F("Vechteler Kirchweg");
        break;
    }
    case 318289:
    {
        returnValue = F("Vechtemoate");
        break;
    }
    case 318290:
    {
        returnValue = F("Vechtestr.");
        break;
    }
    case 318291:
    {
        returnValue = F("Vechtetal");
        break;
    }
    case 318292:
    {
        returnValue = F("Vechtetalstr.");
        break;
    }
    case 318293:
    {
        returnValue = F("Vechtetalweg");
        break;
    }
    case 318294:
    {
        returnValue = F("Vechteufer");
        break;
    }
    case 318295:
    {
        returnValue = F("Vechteweg");
        break;
    }
    case 318296:
    {
        returnValue = F("Veckelshecker Weg");
        break;
    }
    case 318297:
    {
        returnValue = F("Veckenstedter Weg");
        break;
    }
    case 318298:
    {
        returnValue = F("Veckenstedts Winkel");
        break;
    }
    case 318299:
    {
        returnValue = F("Veckerhagener Str.");
        break;
    }
    case 318300:
    {
        returnValue = F("Veckerhager Str.");
        break;
    }
    case 318301:
    {
        returnValue = F("Veckerhäger Str.");
        break;
    }
    case 318302:
    {
        returnValue = F("Vedastusstr.");
        break;
    }
    case 318303:
    {
        returnValue = F("Vedderhof");
        break;
    }
    case 318304:
    {
        returnValue = F("Veddershang");
        break;
    }
    case 318305:
    {
        returnValue = F("Vedhuser Chaussee");
        break;
    }
    case 318306:
    {
        returnValue = F("Veehstr.");
        break;
    }
    case 318307:
    {
        returnValue = F("Veen");
        break;
    }
    case 318308:
    {
        returnValue = F("Veenackerweg");
        break;
    }
    case 318309:
    {
        returnValue = F("Veendyk");
        break;
    }
    case 318310:
    {
        returnValue = F("Veener Str.");
        break;
    }
    case 318311:
    {
        returnValue = F("Veener Weg");
        break;
    }
    case 318312:
    {
        returnValue = F("Veeneweg");
        break;
    }
    case 318313:
    {
        returnValue = F("Veenpad");
        break;
    }
    case 318314:
    {
        returnValue = F("Veenpark");
        break;
    }
    case 318315:
    {
        returnValue = F("Veenreller");
        break;
    }
    case 318316:
    {
        returnValue = F("Veenstr.");
        break;
    }
    case 318317:
    {
        returnValue = F("Veenweg");
        break;
    }
    case 318318:
    {
        returnValue = F("Veerblöcken");
        break;
    }
    case 318319:
    {
        returnValue = F("Veerenholzstr.");
        break;
    }
    case 318320:
    {
        returnValue = F("Veerenstr.");
        break;
    }
    case 318321:
    {
        returnValue = F("Veerhoffstr.");
        break;
    }
    case 318322:
    {
        returnValue = F("Veerkamper Esch");
        break;
    }
    case 318323:
    {
        returnValue = F("Veerkamper Str.");
        break;
    }
    case 318324:
    {
        returnValue = F("Veerkchenweg");
        break;
    }
    case 318325:
    {
        returnValue = F("Veern Diek");
        break;
    }
    case 318326:
    {
        returnValue = F("Veerse");
        break;
    }
    case 318327:
    {
        returnValue = F("Veersebrücker Str.");
        break;
    }
    case 318328:
    {
        returnValue = F("Veerser Weg");
        break;
    }
    case 318329:
    {
        returnValue = F("Veerter Dorfstr.");
        break;
    }
    case 318330:
    {
        returnValue = F("Veerter Str.");
        break;
    }
    case 318331:
    {
        returnValue = F("Veertien Deimt");
        break;
    }
    case 318332:
    {
        returnValue = F("Veerßer Str.");
        break;
    }
    case 318333:
    {
        returnValue = F("Veesenmoosweg");
        break;
    }
    case 318334:
    {
        returnValue = F("Veesenwaldrundweg");
        break;
    }
    case 318335:
    {
        returnValue = F("Veeserstr.");
        break;
    }
    case 318336:
    {
        returnValue = F("Veestherrnweg");
        break;
    }
    case 318337:
    {
        returnValue = F("Vegastr.");
        break;
    }
    case 318338:
    {
        returnValue = F("Vegesacker Heerstr.");
        break;
    }
    case 318339:
    {
        returnValue = F("Vegesacker Rampe");
        break;
    }
    case 318340:
    {
        returnValue = F("Vegesacker Str.");
        break;
    }
    case 318341:
    {
        returnValue = F("Vegesacker Weg");
        break;
    }
    case 318342:
    {
        returnValue = F("Vegesacker Weserpromenade");
        break;
    }
    case 318343:
    {
        returnValue = F("Vegheler Str.");
        break;
    }
    case 318344:
    {
        returnValue = F("Veghestr.");
        break;
    }
    case 318345:
    {
        returnValue = F("Vehdrifft");
        break;
    }
    case 318346:
    {
        returnValue = F("Vehlager Str.");
        break;
    }
    case 318347:
    {
        returnValue = F("Vehlager Weg");
        break;
    }
    case 318348:
    {
        returnValue = F("Vehlberger Kirchweg");
        break;
    }
    case 318349:
    {
        returnValue = F("Vehlberger Str.");
        break;
    }
    case 318350:
    {
        returnValue = F("Vehlefanzer Str.");
        break;
    }
    case 318351:
    {
        returnValue = F("Vehlefanzer Weg");
        break;
    }
    case 318352:
    {
        returnValue = F("Vehlener Str.");
        break;
    }
    case 318353:
    {
        returnValue = F("Vehler Horst");
        break;
    }
    case 318354:
    {
        returnValue = F("Vehler Str.");
        break;
    }
    case 318355:
    {
        returnValue = F("Vehlgast");
        break;
    }
    case 318356:
    {
        returnValue = F("Vehliner Dorfstr.");
        break;
    }
    case 318357:
    {
        returnValue = F("Vehlinger Str.");
        break;
    }
    case 318358:
    {
        returnValue = F("Vehlitzer Chaussee");
        break;
    }
    case 318359:
    {
        returnValue = F("Vehlitzer Str.");
        break;
    }
    case 318360:
    {
        returnValue = F("Vehlitzer Weg");
        break;
    }
    case 318361:
    {
        returnValue = F("Vehlower Str.");
        break;
    }
    case 318362:
    {
        returnValue = F("Vehlower Weg");
        break;
    }
    case 318363:
    {
        returnValue = F("Vehmestr.");
        break;
    }
    case 318364:
    {
        returnValue = F("Vehnberg");
        break;
    }
    case 318365:
    {
        returnValue = F("Vehner Str.");
        break;
    }
    case 318366:
    {
        returnValue = F("Vehner Weg");
        break;
    }
    case 318367:
    {
        returnValue = F("Vehnestr.");
        break;
    }
    case 318368:
    {
        returnValue = F("Vehnkampstr.");
        break;
    }
    case 318369:
    {
        returnValue = F("Vehnsweg");
        break;
    }
    case 318370:
    {
        returnValue = F("Vehnweg");
        break;
    }
    case 318371:
    {
        returnValue = F("Vehofstr.");
        break;
    }
    case 318372:
    {
        returnValue = F("Vehraer Str.");
        break;
    }
    case 318373:
    {
        returnValue = F("Vehrels");
        break;
    }
    case 318374:
    {
        returnValue = F("Vehrenbergstr.");
        break;
    }
    case 318375:
    {
        returnValue = F("Vehrenheide");
        break;
    }
    case 318376:
    {
        returnValue = F("Vehrenheideweg");
        break;
    }
    case 318377:
    {
        returnValue = F("Vehrer Hagen");
        break;
    }
    case 318378:
    {
        returnValue = F("Vehres Jängske");
        break;
    }
    case 318379:
    {
        returnValue = F("Vehrlingstr.");
        break;
    }
    case 318380:
    {
        returnValue = F("Vehrmersch");
        break;
    }
    case 318381:
    {
        returnValue = F("Vehrter Bergstr.");
        break;
    }
    case 318382:
    {
        returnValue = F("Vehrter Kirchweg");
        break;
    }
    case 318383:
    {
        returnValue = F("Vehrter Landstr.");
        break;
    }
    case 318384:
    {
        returnValue = F("Vehrter Str.");
        break;
    }
    case 318385:
    {
        returnValue = F("Vehser Binnenweg");
        break;
    }
    case 318386:
    {
        returnValue = F("Vehser Damm");
        break;
    }
    case 318387:
    {
        returnValue = F("Vehser Str.");
        break;
    }
    case 318388:
    {
        returnValue = F("Vehstr.");
        break;
    }
    case 318389:
    {
        returnValue = F("Veichtbauernweg");
        break;
    }
    case 318390:
    {
        returnValue = F("Veichtederpointweg");
        break;
    }
    case 318391:
    {
        returnValue = F("Veielbrunnenpark");
        break;
    }
    case 318392:
    {
        returnValue = F("Veielbrunnenweg");
        break;
    }
    case 318393:
    {
        returnValue = F("Veigelesgarten");
        break;
    }
    case 318394:
    {
        returnValue = F("Veigelesgasse");
        break;
    }
    case 318395:
    {
        returnValue = F("Veigelweg");
        break;
    }
    case 318396:
    {
        returnValue = F("Veigerlberg");
        break;
    }
    case 318397:
    {
        returnValue = F("Veiglbergweg");
        break;
    }
    case 318398:
    {
        returnValue = F("Veihweg");
        break;
    }
    case 318399:
    {
        returnValue = F("Veiinghofstr.");
        break;
    }
    case 318400:
    {
        returnValue = F("Veikvitz");
        break;
    }
    case 318401:
    {
        returnValue = F("Veilchenberg");
        break;
    }
    case 318402:
    {
        returnValue = F("Veilchengasse");
        break;
    }
    case 318403:
    {
        returnValue = F("Veilchengrund");
        break;
    }
    case 318404:
    {
        returnValue = F("Veilchengäßle");
        break;
    }
    case 318405:
    {
        returnValue = F("Veilchenhalde");
        break;
    }
    case 318406:
    {
        returnValue = F("Veilchenhang");
        break;
    }
    case 318407:
    {
        returnValue = F("Veilchenhöhe");
        break;
    }
    case 318408:
    {
        returnValue = F("Veilchenpfad");
        break;
    }
    case 318409:
    {
        returnValue = F("Veilchenring");
        break;
    }
    case 318410:
    {
        returnValue = F("Veilchenstiege");
        break;
    }
    case 318411:
    {
        returnValue = F("Veilchenstr.");
        break;
    }
    case 318412:
    {
        returnValue = F("Veilchental");
        break;
    }
    case 318413:
    {
        returnValue = F("Veilchenweg");
        break;
    }
    case 318414:
    {
        returnValue = F("Veilgartenstr.");
        break;
    }
    case 318415:
    {
        returnValue = F("Veilhofstr.");
        break;
    }
    case 318416:
    {
        returnValue = F("Veillodterstr.");
        break;
    }
    case 318417:
    {
        returnValue = F("Veilsdorfer Str.");
        break;
    }
    case 318418:
    {
        returnValue = F("Veilsdorfer Weg");
        break;
    }
    case 318419:
    {
        returnValue = F("Veilsheckenweg");
        break;
    }
    case 318420:
    {
        returnValue = F("Veilsloch");
        break;
    }
    case 318421:
    {
        returnValue = F("Veilstr.");
        break;
    }
    case 318422:
    {
        returnValue = F("Veimannstr.");
        break;
    }
    case 318423:
    {
        returnValue = F("Veinauer Str.");
        break;
    }
    case 318424:
    {
        returnValue = F("Veinauweg");
        break;
    }
    case 318425:
    {
        returnValue = F("Veischedestr.");
        break;
    }
    case 318426:
    {
        returnValue = F("Veistr.");
        break;
    }
    case 318427:
    {
        returnValue = F("Veit-Adam-Str.");
        break;
    }
    case 318428:
    {
        returnValue = F("Veit-Dennert-Str.");
        break;
    }
    case 318429:
    {
        returnValue = F("Veit-Hirschmann-Str.");
        break;
    }
    case 318430:
    {
        returnValue = F("Veit-Höser-Str.");
        break;
    }
    case 318431:
    {
        returnValue = F("Veit-Jung-Str.");
        break;
    }
    case 318432:
    {
        returnValue = F("Veit-Lung-Str.");
        break;
    }
    case 318433:
    {
        returnValue = F("Veit-Oberhauser-Str.");
        break;
    }
    case 318434:
    {
        returnValue = F("Veit-Pogner-Str.");
        break;
    }
    case 318435:
    {
        returnValue = F("Veit-Rummel-Str.");
        break;
    }
    case 318436:
    {
        returnValue = F("Veit-Stoss-Str.");
        break;
    }
    case 318437:
    {
        returnValue = F("Veit-Stoß-Ring");
        break;
    }
    case 318438:
    {
        returnValue = F("Veit-Stoß-Str.");
        break;
    }
    case 318439:
    {
        returnValue = F("Veit-Stoß-Weg");
        break;
    }
    case 318440:
    {
        returnValue = F("Veit-Vom-Berg-Str.");
        break;
    }
    case 318441:
    {
        returnValue = F("Veit-vom-Berg-Str.");
        break;
    }
    case 318442:
    {
        returnValue = F("Veit-von-Geböck-Str.");
        break;
    }
    case 318443:
    {
        returnValue = F("Veitaberg");
        break;
    }
    case 318444:
    {
        returnValue = F("Veitastr.");
        break;
    }
    case 318445:
    {
        returnValue = F("Veitenbrunnen");
        break;
    }
    case 318446:
    {
        returnValue = F("Veitengasse");
        break;
    }
    case 318447:
    {
        returnValue = F("Veitenhäuser");
        break;
    }
    case 318448:
    {
        returnValue = F("Veitenmühlberg");
        break;
    }
    case 318449:
    {
        returnValue = F("Veitenmühlweg");
        break;
    }
    case 318450:
    {
        returnValue = F("Veitensteige");
        break;
    }
    case 318451:
    {
        returnValue = F("Veitensteinstr.");
        break;
    }
    case 318452:
    {
        returnValue = F("Veitenstr.");
        break;
    }
    case 318453:
    {
        returnValue = F("Veitenweg");
        break;
    }
    case 318454:
    {
        returnValue = F("Veitenäcker");
        break;
    }
    case 318455:
    {
        returnValue = F("Veiter Str.");
        break;
    }
    case 318456:
    {
        returnValue = F("Veiter Weg");
        break;
    }
    case 318457:
    {
        returnValue = F("Veith-Lutz-Str.");
        break;
    }
    case 318458:
    {
        returnValue = F("Veithenbuck");
        break;
    }
    case 318459:
    {
        returnValue = F("Veithweg");
        break;
    }
    case 318460:
    {
        returnValue = F("Veitlahm");
        break;
    }
    case 318461:
    {
        returnValue = F("Veitlahmer Str.");
        break;
    }
    case 318462:
    {
        returnValue = F("Veitlesweg");
        break;
    }
    case 318463:
    {
        returnValue = F("Veitlsöd");
        break;
    }
    case 318464:
    {
        returnValue = F("Veits-Hans-Weg");
        break;
    }
    case 318465:
    {
        returnValue = F("Veitsaurach D");
        break;
    }
    case 318466:
    {
        returnValue = F("Veitsaurach H");
        break;
    }
    case 318467:
    {
        returnValue = F("Veitsaurach K");
        break;
    }
    case 318468:
    {
        returnValue = F("Veitsaurach L");
        break;
    }
    case 318469:
    {
        returnValue = F("Veitsaurach M");
        break;
    }
    case 318470:
    {
        returnValue = F("Veitsaurach S");
        break;
    }
    case 318471:
    {
        returnValue = F("Veitsaurach W");
        break;
    }
    case 318472:
    {
        returnValue = F("Veitsberg");
        break;
    }
    case 318473:
    {
        returnValue = F("Veitsbergblick");
        break;
    }
    case 318474:
    {
        returnValue = F("Veitsberger Weg");
        break;
    }
    case 318475:
    {
        returnValue = F("Veitsbergstr.");
        break;
    }
    case 318476:
    {
        returnValue = F("Veitsbronner Str.");
        break;
    }
    case 318477:
    {
        returnValue = F("Veitsbrunnenweg");
        break;
    }
    case 318478:
    {
        returnValue = F("Veitsburgstr.");
        break;
    }
    case 318479:
    {
        returnValue = F("Veitserlbach");
        break;
    }
    case 318480:
    {
        returnValue = F("Veitserlbacher Str.");
        break;
    }
    case 318481:
    {
        returnValue = F("Veitsgasse");
        break;
    }
    case 318482:
    {
        returnValue = F("Veitsgraben");
        break;
    }
    case 318483:
    {
        returnValue = F("Veitsgrabenweg");
        break;
    }
    case 318484:
    {
        returnValue = F("Veitshöchheimer Str.");
        break;
    }
    case 318485:
    {
        returnValue = F("Veitshöchheimer Weg");
        break;
    }
    case 318486:
    {
        returnValue = F("Veitskirch");
        break;
    }
    case 318487:
    {
        returnValue = F("Veitskreuz");
        break;
    }
    case 318488:
    {
        returnValue = F("Veitsmühle");
        break;
    }
    case 318489:
    {
        returnValue = F("Veitsmüllerweg");
        break;
    }
    case 318490:
    {
        returnValue = F("Veitsrodter Str.");
        break;
    }
    case 318491:
    {
        returnValue = F("Veitsteichweg");
        break;
    }
    case 318492:
    {
        returnValue = F("Veitsteinbacher Str.");
        break;
    }
    case 318493:
    {
        returnValue = F("Veitstr.");
        break;
    }
    case 318494:
    {
        returnValue = F("Veitsweiler Str.");
        break;
    }
    case 318495:
    {
        returnValue = F("Veitswender Str.");
        break;
    }
    case 318496:
    {
        returnValue = F("Veitwiesenweg");
        break;
    }
    case 318497:
    {
        returnValue = F("Veitzheimer Str.");
        break;
    }
    case 318498:
    {
        returnValue = F("Velaskostr.");
        break;
    }
    case 318499:
    {
        returnValue = F("Velauer Str.");
        break;
    }
    case 318500:
    {
        returnValue = F("Velaystr.");
        break;
    }
    case 318501:
    {
        returnValue = F("Velberstr.");
        break;
    }
    case 318502:
    {
        returnValue = F("Velberter Str.");
        break;
    }
    case 318503:
    {
        returnValue = F("Velberter Sträßchen");
        break;
    }
    case 318504:
    {
        returnValue = F("Velbrückweg");
        break;
    }
    case 318505:
    {
        returnValue = F("Velburger Str.");
        break;
    }
    case 318506:
    {
        returnValue = F("Velburger Weg");
        break;
    }
    case 318507:
    {
        returnValue = F("Velbuschpfad");
        break;
    }
    case 318508:
    {
        returnValue = F("Veldeckestr.");
        break;
    }
    case 318509:
    {
        returnValue = F("Veldener Str.");
        break;
    }
    case 318510:
    {
        returnValue = F("Veldensteiner Forstweg");
        break;
    }
    case 318511:
    {
        returnValue = F("Veldensteinstr.");
        break;
    }
    case 318512:
    {
        returnValue = F("Veldenstr.");
        break;
    }
    case 318513:
    {
        returnValue = F("Veldenzer Hammer");
        break;
    }
    case 318514:
    {
        returnValue = F("Veldenzer Str.");
        break;
    }
    case 318515:
    {
        returnValue = F("Veldenzer Weg");
        break;
    }
    case 318516:
    {
        returnValue = F("Veldenzplatz");
        break;
    }
    case 318517:
    {
        returnValue = F("Veldenzstr.");
        break;
    }
    case 318518:
    {
        returnValue = F("Velder Dyck");
        break;
    }
    case 318519:
    {
        returnValue = F("Velder Dyk");
        break;
    }
    case 318520:
    {
        returnValue = F("Veldershof");
        break;
    }
    case 318521:
    {
        returnValue = F("Veldershofer Weg");
        break;
    }
    case 318522:
    {
        returnValue = F("Velderstr.");
        break;
    }
    case 318523:
    {
        returnValue = F("Veldgoorstr.");
        break;
    }
    case 318524:
    {
        returnValue = F("Veldhausener Str.");
        break;
    }
    case 318525:
    {
        returnValue = F("Veldhauser Str.");
        break;
    }
    case 318526:
    {
        returnValue = F("Veldhoffs-Kamp");
        break;
    }
    case 318527:
    {
        returnValue = F("Veldnerweg");
        break;
    }
    case 318528:
    {
        returnValue = F("Veldorfer Str.");
        break;
    }
    case 318529:
    {
        returnValue = F("Veledastr.");
        break;
    }
    case 318530:
    {
        returnValue = F("Veledaweg");
        break;
    }
    case 318531:
    {
        returnValue = F("Velener Str.");
        break;
    }
    case 318532:
    {
        returnValue = F("Velgaster Weg");
        break;
    }
    case 318533:
    {
        returnValue = F("Velgauer Str.");
        break;
    }
    case 318534:
    {
        returnValue = F("Velge");
        break;
    }
    case 318535:
    {
        returnValue = F("Velgen");
        break;
    }
    case 318536:
    {
        returnValue = F("Velger Str.");
        break;
    }
    case 318537:
    {
        returnValue = F("Velhagens Weg");
        break;
    }
    case 318538:
    {
        returnValue = F("Velhornstr.");
        break;
    }
    case 318539:
    {
        returnValue = F("Velinstr.");
        break;
    }
    case 318540:
    {
        returnValue = F("Velken");
        break;
    }
    case 318541:
    {
        returnValue = F("Vellager Str.");
        break;
    }
    case 318542:
    {
        returnValue = F("Vellahner Str.");
        break;
    }
    case 318543:
    {
        returnValue = F("Vellahner Weg");
        break;
    }
    case 318544:
    {
        returnValue = F("Vellandstr.");
        break;
    }
    case 318545:
    {
        returnValue = F("Vellarsweg");
        break;
    }
    case 318546:
    {
        returnValue = F("Vellbach");
        break;
    }
    case 318547:
    {
        returnValue = F("Vellberger Str.");
        break;
    }
    case 318548:
    {
        returnValue = F("Vellbrückstr.");
        break;
    }
    case 318549:
    {
        returnValue = F("Vellbrüggener Str.");
        break;
    }
    case 318550:
    {
        returnValue = F("Vellenken Kamp");
        break;
    }
    case 318551:
    {
        returnValue = F("Vellerner Str.");
        break;
    }
    case 318552:
    {
        returnValue = F("Velligser Weg");
        break;
    }
    case 318553:
    {
        returnValue = F("Vellingen");
        break;
    }
    case 318554:
    {
        returnValue = F("Vellinghauser Str.");
        break;
    }
    case 318555:
    {
        returnValue = F("Vellmarer Str.");
        break;
    }
    case 318556:
    {
        returnValue = F("Vellmarer Weg");
        break;
    }
    case 318557:
    {
        returnValue = F("Vellmenstr.");
        break;
    }
    case 318558:
    {
        returnValue = F("Vellrather Str.");
        break;
    }
    case 318559:
    {
        returnValue = F("Vellrather Weg");
        break;
    }
    case 318560:
    {
        returnValue = F("Vellsweg");
        break;
    }
    case 318561:
    {
        returnValue = F("Vellwigstr.");
        break;
    }
    case 318562:
    {
        returnValue = F("Velmannstr.");
        break;
    }
    case 318563:
    {
        returnValue = F("Velmede");
        break;
    }
    case 318564:
    {
        returnValue = F("Velmerstotweg");
        break;
    }
    case 318565:
    {
        returnValue = F("Velmerstr.");
        break;
    }
    case 318566:
    {
        returnValue = F("Veloroute 10");
        break;
    }
    case 318567:
    {
        returnValue = F("Veloroute Rhein");
        break;
    }
    case 318568:
    {
        returnValue = F("Veloxstr.");
        break;
    }
    case 318569:
    {
        returnValue = F("Velper Esch");
        break;
    }
    case 318570:
    {
        returnValue = F("Velper Str.");
        break;
    }
    case 318571:
    {
        returnValue = F("Velpker Str.");
        break;
    }
    case 318572:
    {
        returnValue = F("Vels-Heide-Park");
        break;
    }
    case 318573:
    {
        returnValue = F("Velsdorfer Str.");
        break;
    }
    case 318574:
    {
        returnValue = F("Velsen");
        break;
    }
    case 318575:
    {
        returnValue = F("Velsener Str.");
        break;
    }
    case 318576:
    {
        returnValue = F("Velsener Weg");
        break;
    }
    case 318577:
    {
        returnValue = F("Velsenstr.");
        break;
    }
    case 318578:
    {
        returnValue = F("Velsstr.");
        break;
    }
    case 318579:
    {
        returnValue = F("Velsterstr.");
        break;
    }
    case 318580:
    {
        returnValue = F("Velstover Str.");
        break;
    }
    case 318581:
    {
        returnValue = F("Veltener Chaussee");
        break;
    }
    case 318582:
    {
        returnValue = F("Veltener Str.");
        break;
    }
    case 318583:
    {
        returnValue = F("Veltener Weg");
        break;
    }
    case 318584:
    {
        returnValue = F("Veltenhofer Str.");
        break;
    }
    case 318585:
    {
        returnValue = F("Veltenhöfer Str.");
        break;
    }
    case 318586:
    {
        returnValue = F("Veltenstr.");
        break;
    }
    case 318587:
    {
        returnValue = F("Velterstr.");
        break;
    }
    case 318588:
    {
        returnValue = F("Veltgensweg");
        break;
    }
    case 318589:
    {
        returnValue = F("Veltheimer Str.");
        break;
    }
    case 318590:
    {
        returnValue = F("Veltheimsburger Weg");
        break;
    }
    case 318591:
    {
        returnValue = F("Velthover Winkel");
        break;
    }
    case 318592:
    {
        returnValue = F("Velthusstr.");
        break;
    }
    case 318593:
    {
        returnValue = F("Velthuysenstr.");
        break;
    }
    case 318594:
    {
        returnValue = F("Veltien");
        break;
    }
    case 318595:
    {
        returnValue = F("Veltinswall");
        break;
    }
    case 318596:
    {
        returnValue = F("Veltjensweg");
        break;
    }
    case 318597:
    {
        returnValue = F("Veltlinerweg");
        break;
    }
    case 318598:
    {
        returnValue = F("Veltmanns Kamp");
        break;
    }
    case 318599:
    {
        returnValue = F("Veltmannsweg");
        break;
    }
    case 318600:
    {
        returnValue = F("Veltmannweg");
        break;
    }
    case 318601:
    {
        returnValue = F("Veltmanplatz");
        break;
    }
    case 318602:
    {
        returnValue = F("Veltrup");
        break;
    }
    case 318603:
    {
        returnValue = F("Veltruper Kirchweg");
        break;
    }
    case 318604:
    {
        returnValue = F("Veltruper Str.");
        break;
    }
    case 318605:
    {
        returnValue = F("Velvet Soup");
        break;
    }
    case 318606:
    {
        returnValue = F("Vemelsruh");
        break;
    }
    case 318607:
    {
        returnValue = F("Vemelweg");
        break;
    }
    case 318608:
    {
        returnValue = F("Venantiastr.");
        break;
    }
    case 318609:
    {
        returnValue = F("Venantius-Arnold-Str.");
        break;
    }
    case 318610:
    {
        returnValue = F("Venantiusstr.");
        break;
    }
    case 318611:
    {
        returnValue = F("Venarey-Les-Laumes-Platz");
        break;
    }
    case 318612:
    {
        returnValue = F("Venatoriusstr.");
        break;
    }
    case 318613:
    {
        returnValue = F("Venatorstr.");
        break;
    }
    case 318614:
    {
        returnValue = F("Venauen");
        break;
    }
    case 318615:
    {
        returnValue = F("Vencer Str.");
        break;
    }
    case 318616:
    {
        returnValue = F("Vendelaustr.");
        break;
    }
    case 318617:
    {
        returnValue = F("Venderweg");
        break;
    }
    case 318618:
    {
        returnValue = F("Vendreesstr.");
        break;
    }
    case 318619:
    {
        returnValue = F("Vendtstr.");
        break;
    }
    case 318620:
    {
        returnValue = F("Venedig");
        break;
    }
    case 318621:
    {
        returnValue = F("Venediger Weg");
        break;
    }
    case 318622:
    {
        returnValue = F("Venekamp");
        break;
    }
    case 318623:
    {
        returnValue = F("Venekotenweg");
        break;
    }
    case 318624:
    {
        returnValue = F("Venemastr.");
        break;
    }
    case 318625:
    {
        returnValue = F("Venenien");
        break;
    }
    case 318626:
    {
        returnValue = F("Venesch");
        break;
    }
    case 318627:
    {
        returnValue = F("Veneterstr.");
        break;
    }
    case 318628:
    {
        returnValue = F("Venezianer Str.");
        break;
    }
    case 318629:
    {
        returnValue = F("Venhauser Damm");
        break;
    }
    case 318630:
    {
        returnValue = F("Venhauser Str.");
        break;
    }
    case 318631:
    {
        returnValue = F("Venhäuser Weg");
        break;
    }
    case 318632:
    {
        returnValue = F("Venise-Gosnat-Str.");
        break;
    }
    case 318633:
    {
        returnValue = F("Venissieuxer Str.");
        break;
    }
    case 318634:
    {
        returnValue = F("Venloer Str.");
        break;
    }
    case 318635:
    {
        returnValue = F("Venloer Wall");
        break;
    }
    case 318636:
    {
        returnValue = F("Venmansweg");
        break;
    }
    case 318637:
    {
        returnValue = F("Venn");
        break;
    }
    case 318638:
    {
        returnValue = F("Vennbahnstr.");
        break;
    }
    case 318639:
    {
        returnValue = F("Vennblick");
        break;
    }
    case 318640:
    {
        returnValue = F("Vennbruchstr.");
        break;
    }
    case 318641:
    {
        returnValue = F("Venndiek");
        break;
    }
    case 318642:
    {
        returnValue = F("Vennebachstr.");
        break;
    }
    case 318643:
    {
        returnValue = F("Vennebecker-Bruch-Str.");
        break;
    }
    case 318644:
    {
        returnValue = F("Vennebroek");
        break;
    }
    case 318645:
    {
        returnValue = F("Vennebülten");
        break;
    }
    case 318646:
    {
        returnValue = F("Vennediek");
        break;
    }
    case 318647:
    {
        returnValue = F("Vennegärten");
        break;
    }
    case 318648:
    {
        returnValue = F("Vennekamp");
        break;
    }
    case 318649:
    {
        returnValue = F("Vennekenweg");
        break;
    }
    case 318650:
    {
        returnValue = F("Vennekesberg");
        break;
    }
    case 318651:
    {
        returnValue = F("Vennemann-Str.");
        break;
    }
    case 318652:
    {
        returnValue = F("Vennemannstr.");
        break;
    }
    case 318653:
    {
        returnValue = F("Vennenweg");
        break;
    }
    case 318654:
    {
        returnValue = F("Vennepoth");
        break;
    }
    case 318655:
    {
        returnValue = F("Venner Allee");
        break;
    }
    case 318656:
    {
        returnValue = F("Venner Esch");
        break;
    }
    case 318657:
    {
        returnValue = F("Venner Gasse");
        break;
    }
    case 318658:
    {
        returnValue = F("Venner Hof");
        break;
    }
    case 318659:
    {
        returnValue = F("Venner Kirchweg");
        break;
    }
    case 318660:
    {
        returnValue = F("Venner Str.");
        break;
    }
    case 318661:
    {
        returnValue = F("Venner Weg");
        break;
    }
    case 318662:
    {
        returnValue = F("Vennerbruch");
        break;
    }
    case 318663:
    {
        returnValue = F("Vennerheide");
        break;
    }
    case 318664:
    {
        returnValue = F("Vennestr.");
        break;
    }
    case 318665:
    {
        returnValue = F("Venneweg");
        break;
    }
    case 318666:
    {
        returnValue = F("Venneweg 1-4");
        break;
    }
    case 318667:
    {
        returnValue = F("Vennfelder Str.");
        break;
    }
    case 318668:
    {
        returnValue = F("Venngasse");
        break;
    }
    case 318669:
    {
        returnValue = F("Vennhauser Allee");
        break;
    }
    case 318670:
    {
        returnValue = F("Vennheide");
        break;
    }
    case 318671:
    {
        returnValue = F("Vennheider Weg");
        break;
    }
    case 318672:
    {
        returnValue = F("Vennheidestr.");
        break;
    }
    case 318673:
    {
        returnValue = F("Vennheideweg");
        break;
    }
    case 318674:
    {
        returnValue = F("Vennhof");
        break;
    }
    case 318675:
    {
        returnValue = F("Vennhofallee");
        break;
    }
    case 318676:
    {
        returnValue = F("Vennhook");
        break;
    }
    case 318677:
    {
        returnValue = F("Vennhorn");
        break;
    }
    case 318678:
    {
        returnValue = F("Vennhues Berge");
        break;
    }
    case 318679:
    {
        returnValue = F("Vennigerholzstr.");
        break;
    }
    case 318680:
    {
        returnValue = F("Venninger Str.");
        break;
    }
    case 318681:
    {
        returnValue = F("Venningerstr.");
        break;
    }
    case 318682:
    {
        returnValue = F("Venninghauser Str.");
        break;
    }
    case 318683:
    {
        returnValue = F("Vennkamp");
        break;
    }
    case 318684:
    {
        returnValue = F("Vennkampsweg");
        break;
    }
    case 318685:
    {
        returnValue = F("Vennkampweg");
        break;
    }
    case 318686:
    {
        returnValue = F("Vennmühlenweg");
        break;
    }
    case 318687:
    {
        returnValue = F("Vennort");
        break;
    }
    case 318688:
    {
        returnValue = F("Vennorter Str.");
        break;
    }
    case 318689:
    {
        returnValue = F("Vennstiege");
        break;
    }
    case 318690:
    {
        returnValue = F("Vennstr.");
        break;
    }
    case 318691:
    {
        returnValue = F("Vennweg");
        break;
    }
    case 318692:
    {
        returnValue = F("Venrather Str.");
        break;
    }
    case 318693:
    {
        returnValue = F("Venrather Weg");
        break;
    }
    case 318694:
    {
        returnValue = F("Venslage");
        break;
    }
    case 318695:
    {
        returnValue = F("Vensleber Weg");
        break;
    }
    case 318696:
    {
        returnValue = F("Ventschower Chaussee");
        break;
    }
    case 318697:
    {
        returnValue = F("Ventschower Str.");
        break;
    }
    case 318698:
    {
        returnValue = F("Venuleth-Schneise");
        break;
    }
    case 318699:
    {
        returnValue = F("Venusberg");
        break;
    }
    case 318700:
    {
        returnValue = F("Venusberg-Campus");
        break;
    }
    case 318701:
    {
        returnValue = F("Venusberger Hauptstr.");
        break;
    }
    case 318702:
    {
        returnValue = F("Venusberger Str.");
        break;
    }
    case 318703:
    {
        returnValue = F("Venusberger Weg");
        break;
    }
    case 318704:
    {
        returnValue = F("Venusbergstr.");
        break;
    }
    case 318705:
    {
        returnValue = F("Venusbergweg");
        break;
    }
    case 318706:
    {
        returnValue = F("Venusbogen");
        break;
    }
    case 318707:
    {
        returnValue = F("Venushof");
        break;
    }
    case 318708:
    {
        returnValue = F("Venusmühle");
        break;
    }
    case 318709:
    {
        returnValue = F("Venusring");
        break;
    }
    case 318710:
    {
        returnValue = F("Venusstr.");
        break;
    }
    case 318711:
    {
        returnValue = F("Venusweg");
        break;
    }
    case 318712:
    {
        returnValue = F("Venwegener Str.");
        break;
    }
    case 318713:
    {
        returnValue = F("Venzenweg");
        break;
    }
    case 318714:
    {
        returnValue = F("Venzka");
        break;
    }
    case 318715:
    {
        returnValue = F("Venzvitz");
        break;
    }
    case 318716:
    {
        returnValue = F("Vera-Hildesheimer-Str.");
        break;
    }
    case 318717:
    {
        returnValue = F("Vera-Joho-Str.");
        break;
    }
    case 318718:
    {
        returnValue = F("Vera-Vollmer-Str.");
        break;
    }
    case 318719:
    {
        returnValue = F("Vera-Vollmer-Weg");
        break;
    }
    case 318720:
    {
        returnValue = F("Veranstaltungs-Oval");
        break;
    }
    case 318721:
    {
        returnValue = F("Veranstaltungsplatz");
        break;
    }
    case 318722:
    {
        returnValue = F("Verastr.");
        break;
    }
    case 318723:
    {
        returnValue = F("Verauer Str.");
        break;
    }
    case 318724:
    {
        returnValue = F("Veraweg");
        break;
    }
    case 318725:
    {
        returnValue = F("Verbandsstr.");
        break;
    }
    case 318726:
    {
        returnValue = F("Verbandstr.");
        break;
    }
    case 318727:
    {
        returnValue = F("Verberger Str.");
        break;
    }
    case 318728:
    {
        returnValue = F("Verbindsweg zum Zigeunerbrunnen");
        break;
    }
    case 318729:
    {
        returnValue = F("Verbindugsweg Teufelsmoor - Verlüßmoor");
        break;
    }
    case 318730:
    {
        returnValue = F("Verbindung");
        break;
    }
    case 318731:
    {
        returnValue = F("Verbindung Am Mühlkanal - Ölwiesenstr.");
        break;
    }
    case 318732:
    {
        returnValue = F("Verbindung Anger Triebesgrund");
        break;
    }
    case 318733:
    {
        returnValue = F("Verbindung Aue-Str. mit Mühlenstr.");
        break;
    }
    case 318734:
    {
        returnValue = F("Verbindung Bambi Besen 1");
        break;
    }
    case 318735:
    {
        returnValue = F("Verbindung Briefträgerweg ins Borntal");
        break;
    }
    case 318736:
    {
        returnValue = F("Verbindung Chausseestr.-Bergstr.");
        break;
    }
    case 318737:
    {
        returnValue = F("Verbindung Kanalweg - Weißbach Im Wiesele");
        break;
    }
    case 318738:
    {
        returnValue = F("Verbindung Lindenhart-Hofholz");
        break;
    }
    case 318739:
    {
        returnValue = F("Verbindung Mittelstr. Lindenstr.");
        break;
    }
    case 318740:
    {
        returnValue = F("Verbindung Scheibelbuschweg - Philosophenweg");
        break;
    }
    case 318741:
    {
        returnValue = F("Verbindung Scheibenbuschweg - Philosophenweg");
        break;
    }
    case 318742:
    {
        returnValue = F("Verbindung Schülestr. Kolbstr.");
        break;
    }
    case 318743:
    {
        returnValue = F("Verbindung Stierstall Lotsenstr.");
        break;
    }
    case 318744:
    {
        returnValue = F("Verbindung Unteres Holz - Galgeneller");
        break;
    }
    case 318745:
    {
        returnValue = F("Verbindung zum Höchholz");
        break;
    }
    case 318746:
    {
        returnValue = F("Verbindungs-Rad-Feld-Weg Naabeck-Büchelkühn");
        break;
    }
    case 318747:
    {
        returnValue = F("Verbindungsbauwerk 1");
        break;
    }
    case 318748:
    {
        returnValue = F("Verbindungsbauwerk 10");
        break;
    }
    case 318749:
    {
        returnValue = F("Verbindungsbauwerk 11");
        break;
    }
    case 318750:
    {
        returnValue = F("Verbindungsbauwerk 12");
        break;
    }
    case 318751:
    {
        returnValue = F("Verbindungsbauwerk 13");
        break;
    }
    case 318752:
    {
        returnValue = F("Verbindungsbauwerk 14");
        break;
    }
    case 318753:
    {
        returnValue = F("Verbindungsbauwerk 15");
        break;
    }
    case 318754:
    {
        returnValue = F("Verbindungsbauwerk 16");
        break;
    }
    case 318755:
    {
        returnValue = F("Verbindungsbauwerk 17");
        break;
    }
    case 318756:
    {
        returnValue = F("Verbindungsbauwerk 2");
        break;
    }
    case 318757:
    {
        returnValue = F("Verbindungsbauwerk 3");
        break;
    }
    case 318758:
    {
        returnValue = F("Verbindungsbauwerk 4");
        break;
    }
    case 318759:
    {
        returnValue = F("Verbindungsbauwerk 5");
        break;
    }
    case 318760:
    {
        returnValue = F("Verbindungsbauwerk 6");
        break;
    }
    case 318761:
    {
        returnValue = F("Verbindungsbauwerk 7");
        break;
    }
    case 318762:
    {
        returnValue = F("Verbindungsbauwerk 8");
        break;
    }
    case 318763:
    {
        returnValue = F("Verbindungsbauwerk 9");
        break;
    }
    case 318764:
    {
        returnValue = F("Verbindungschaussee");
        break;
    }
    case 318765:
    {
        returnValue = F("Verbindungsdamm");
        break;
    }
    case 318766:
    {
        returnValue = F("Verbindungsforstweg");
        break;
    }
    case 318767:
    {
        returnValue = F("Verbindungsgasse");
        break;
    }
    case 318768:
    {
        returnValue = F("Verbindungsloipe");
        break;
    }
    case 318769:
    {
        returnValue = F("Verbindungspfad");
        break;
    }
    case 318770:
    {
        returnValue = F("Verbindungspfad (KM)");
        break;
    }
    case 318771:
    {
        returnValue = F("Verbindungspfad Unteres Holz");
        break;
    }
    case 318772:
    {
        returnValue = F("Verbindungsschleuse");
        break;
    }
    case 318773:
    {
        returnValue = F("Verbindungsschneise");
        break;
    }
    case 318774:
    {
        returnValue = F("Verbindungsspange");
        break;
    }
    case 318775:
    {
        returnValue = F("Verbindungssteg");
        break;
    }
    case 318776:
    {
        returnValue = F("Verbindungssteg Moorhütten");
        break;
    }
    case 318777:
    {
        returnValue = F("Verbindungsstr.");
        break;
    }
    case 318778:
    {
        returnValue = F("Verbindungsstr. Großörner");
        break;
    }
    case 318779:
    {
        returnValue = F("Verbindungsstr. Kheisan");
        break;
    }
    case 318780:
    {
        returnValue = F("Verbindungswanderweg");
        break;
    }
    case 318781:
    {
        returnValue = F("Verbindungsweg");
        break;
    }
    case 318782:
    {
        returnValue = F("Verbindungsweg (KM)");
        break;
    }
    case 318783:
    {
        returnValue = F("Verbindungsweg (km)");
        break;
    }
    case 318784:
    {
        returnValue = F("Verbindungsweg 1");
        break;
    }
    case 318785:
    {
        returnValue = F("Verbindungsweg 2");
        break;
    }
    case 318786:
    {
        returnValue = F("Verbindungsweg 25028");
        break;
    }
    case 318787:
    {
        returnValue = F("Verbindungsweg 25033");
        break;
    }
    case 318788:
    {
        returnValue = F("Verbindungsweg 39005");
        break;
    }
    case 318789:
    {
        returnValue = F("Verbindungsweg 39010");
        break;
    }
    case 318790:
    {
        returnValue = F("Verbindungsweg Bramerhof - Stromlänge");
        break;
    }
    case 318791:
    {
        returnValue = F("Verbindungsweg Ebene 3 - 4");
        break;
    }
    case 318792:
    {
        returnValue = F("Verbindungsweg Giesenend / willicher Str.");
        break;
    }
    case 318793:
    {
        returnValue = F("Verbindungsweg Glashuett - Hirschenstein");
        break;
    }
    case 318794:
    {
        returnValue = F("Verbindungsweg Gut-Möhlenwisch");
        break;
    }
    case 318795:
    {
        returnValue = F("Verbindungsweg HW 4");
        break;
    }
    case 318796:
    {
        returnValue = F("Verbindungsweg Ilzleite - Bramerhof");
        break;
    }
    case 318797:
    {
        returnValue = F("Verbindungsweg Jg Fuchsenschlag");
        break;
    }
    case 318798:
    {
        returnValue = F("Verbindungsweg Kranzberg");
        break;
    }
    case 318799:
    {
        returnValue = F("Verbindungsweg Langenwaldschanze");
        break;
    }
    case 318800:
    {
        returnValue = F("Verbindungsweg Lauheide - Verth");
        break;
    }
    case 318801:
    {
        returnValue = F("Verbindungsweg Lüblow - Jasnitz");
        break;
    }
    case 318802:
    {
        returnValue = F("Verbindungsweg Ost");
        break;
    }
    case 318803:
    {
        returnValue = F("Verbindungsweg Spitzwegstr.");
        break;
    }
    case 318804:
    {
        returnValue = F("Verbindungsweg Teufelsmoor - Verlüßmoor");
        break;
    }
    case 318805:
    {
        returnValue = F("Verbindungsweg West");
        break;
    }
    case 318806:
    {
        returnValue = F("Verbindungsweg beim Rockenbühl");
        break;
    }
    case 318807:
    {
        returnValue = F("Verbindungsweg in der Rödelmaierer Heide");
        break;
    }
    case 318808:
    {
        returnValue = F("Verbindungsweg zu den Angelseen");
        break;
    }
    case 318809:
    {
        returnValue = F("Verbindungsweg zum Aufzug");
        break;
    }
    case 318810:
    {
        returnValue = F("Verbindungsweg zum Schwarzenbergweg");
        break;
    }
    case 318811:
    {
        returnValue = F("Verbindungsweg; Benutzung auf eigene Gefahr");
        break;
    }
    case 318812:
    {
        returnValue = F("Verborgene Mitte");
        break;
    }
    case 318813:
    {
        returnValue = F("Verborgstr.");
        break;
    }
    case 318814:
    {
        returnValue = F("Verboten");
        break;
    }
    case 318815:
    {
        returnValue = F("Verbotener Weg");
        break;
    }
    case 318816:
    {
        returnValue = F("Verbrannter Bühlweg");
        break;
    }
    case 318817:
    {
        returnValue = F("Verbrannter Schlagweg");
        break;
    }
    case 318818:
    {
        returnValue = F("Verbrannterhäuweg");
        break;
    }
    case 318819:
    {
        returnValue = F("Verbrannterschlagweg");
        break;
    }
    case 318820:
    {
        returnValue = F("Verbranntes Bergle Sträßle");
        break;
    }
    case 318821:
    {
        returnValue = F("Verbrennter-Buck-Weg");
        break;
    }
    case 318822:
    {
        returnValue = F("Verbrüderungsring");
        break;
    }
    case 318823:
    {
        returnValue = F("Verbundstr.");
        break;
    }
    case 318824:
    {
        returnValue = F("Verbundweg");
        break;
    }
    case 318825:
    {
        returnValue = F("Verdeler Wiesen");
        break;
    }
    case 318826:
    {
        returnValue = F("Verdelmannstr.");
        break;
    }
    case 318827:
    {
        returnValue = F("Verdener Brake");
        break;
    }
    case 318828:
    {
        returnValue = F("Verdener Feld");
        break;
    }
    case 318829:
    {
        returnValue = F("Verdener Hof");
        break;
    }
    case 318830:
    {
        returnValue = F("Verdener Landstr.");
        break;
    }
    case 318831:
    {
        returnValue = F("Verdener Platz");
        break;
    }
    case 318832:
    {
        returnValue = F("Verdener Str.");
        break;
    }
    case 318833:
    {
        returnValue = F("Verdener Weg");
        break;
    }
    case 318834:
    {
        returnValue = F("Verdieckstr.");
        break;
    }
    case 318835:
    {
        returnValue = F("Verdiplatz");
        break;
    }
    case 318836:
    {
        returnValue = F("Verdiring");
        break;
    }
    case 318837:
    {
        returnValue = F("Verdistr.");
        break;
    }
    case 318838:
    {
        returnValue = F("Verdiweg");
        break;
    }
    case 318839:
    {
        returnValue = F("Verdiwinkel");
        break;
    }
    case 318840:
    {
        returnValue = F("Verdrießstr.");
        break;
    }
    case 318841:
    {
        returnValue = F("Verdrögte Hau");
        break;
    }
    case 318842:
    {
        returnValue = F("Verduner Platz");
        break;
    }
    case 318843:
    {
        returnValue = F("Verduner Str.");
        break;
    }
    case 318844:
    {
        returnValue = F("Verdunstr.");
        break;
    }
    case 318845:
    {
        returnValue = F("Verdunweg");
        break;
    }
    case 318846:
    {
        returnValue = F("Verdyweg");
        break;
    }
    case 318847:
    {
        returnValue = F("Verein für Hundesport");
        break;
    }
    case 318848:
    {
        returnValue = F("Verein zur Erhaltung der Fränkischen Grillkultur e.V.");
        break;
    }
    case 318849:
    {
        returnValue = F("Vereinigt Feld");
        break;
    }
    case 318850:
    {
        returnValue = F("Vereinigung");
        break;
    }
    case 318851:
    {
        returnValue = F("Vereinigungs-Gang");
        break;
    }
    case 318852:
    {
        returnValue = F("Vereinigungsstr.");
        break;
    }
    case 318853:
    {
        returnValue = F("Vereinsallee");
        break;
    }
    case 318854:
    {
        returnValue = F("Vereinsgelände Wanderfreunde Hain im Spessart");
        break;
    }
    case 318855:
    {
        returnValue = F("Vereinsgelände des Förderverein Moselweiß");
        break;
    }
    case 318856:
    {
        returnValue = F("Vereinsglückstr.");
        break;
    }
    case 318857:
    {
        returnValue = F("Vereinshausstr.");
        break;
    }
    case 318858:
    {
        returnValue = F("Vereinshausweg");
        break;
    }
    case 318859:
    {
        returnValue = F("Vereinsheimweg");
        break;
    }
    case 318860:
    {
        returnValue = F("Vereinsstr.");
        break;
    }
    case 318861:
    {
        returnValue = F("Vereinstr.");
        break;
    }
    case 318862:
    {
        returnValue = F("Vereinsweg");
        break;
    }
    case 318863:
    {
        returnValue = F("Vereinswieke");
        break;
    }
    case 318864:
    {
        returnValue = F("Verenastr.");
        break;
    }
    case 318865:
    {
        returnValue = F("Verenaweg");
        break;
    }
    case 318866:
    {
        returnValue = F("Verenenweg");
        break;
    }
    case 318867:
    {
        returnValue = F("Verenfeldstr.");
        break;
    }
    case 318868:
    {
        returnValue = F("Verenmoor");
        break;
    }
    case 318869:
    {
        returnValue = F("Verfahrts Hof");
        break;
    }
    case 318870:
    {
        returnValue = F("Verfürthweg");
        break;
    }
    case 318871:
    {
        returnValue = F("Vergessene Str.");
        break;
    }
    case 318872:
    {
        returnValue = F("Vergil-Str.");
        break;
    }
    case 318873:
    {
        returnValue = F("Vergilallee");
        break;
    }
    case 318874:
    {
        returnValue = F("Vergissmeinnichtweg");
        break;
    }
    case 318875:
    {
        returnValue = F("Vergißmeinnicht");
        break;
    }
    case 318876:
    {
        returnValue = F("Vergißmeinnichtweg");
        break;
    }
    case 318877:
    {
        returnValue = F("Verhoevenstr.");
        break;
    }
    case 318878:
    {
        returnValue = F("Verhoolenweg");
        break;
    }
    case 318879:
    {
        returnValue = F("Veringendorfer Str.");
        break;
    }
    case 318880:
    {
        returnValue = F("Veringenstadter Str.");
        break;
    }
    case 318881:
    {
        returnValue = F("Veringenstr.");
        break;
    }
    case 318882:
    {
        returnValue = F("Veringenweg");
        break;
    }
    case 318883:
    {
        returnValue = F("Veringer Str.");
        break;
    }
    case 318884:
    {
        returnValue = F("Veringstr.");
        break;
    }
    case 318885:
    {
        returnValue = F("Veringstätte");
        break;
    }
    case 318886:
    {
        returnValue = F("Veritas-Sportpark");
        break;
    }
    case 318887:
    {
        returnValue = F("Veritasstr.");
        break;
    }
    case 318888:
    {
        returnValue = F("Veriusstr.");
        break;
    }
    case 318889:
    {
        returnValue = F("Verkadeweg");
        break;
    }
    case 318890:
    {
        returnValue = F("Verkaufspark Holz");
        break;
    }
    case 318891:
    {
        returnValue = F("Verkehrserziehung");
        break;
    }
    case 318892:
    {
        returnValue = F("Verkehrsgarten der Gebietsverkehrswacht Zerbst e.V.");
        break;
    }
    case 318893:
    {
        returnValue = F("Verkehrshof");
        break;
    }
    case 318894:
    {
        returnValue = F("Verkehrsinsel");
        break;
    }
    case 318895:
    {
        returnValue = F("Verkehrsknoten \"Rimsinger Ei");
        break;
    }
    case 318896:
    {
        returnValue = F("Verkehrsspielplatz");
        break;
    }
    case 318897:
    {
        returnValue = F("Verkehrsstr.");
        break;
    }
    case 318898:
    {
        returnValue = F("Verkehrswacht Dessau");
        break;
    }
    case 318899:
    {
        returnValue = F("Verkehrsübungsgarten");
        break;
    }
    case 318900:
    {
        returnValue = F("Verkehrsübungsplatz");
        break;
    }
    case 318901:
    {
        returnValue = F("Verkehrte Gabel");
        break;
    }
    case 318902:
    {
        returnValue = F("Verkehrter Anker");
        break;
    }
    case 318903:
    {
        returnValue = F("Verkehrter Hammer");
        break;
    }
    case 318904:
    {
        returnValue = F("Verlaatsweg");
        break;
    }
    case 318905:
    {
        returnValue = F("Verlach");
        break;
    }
    case 318906:
    {
        returnValue = F("Verladestr.");
        break;
    }
    case 318907:
    {
        returnValue = F("Verlarer Str.");
        break;
    }
    case 318908:
    {
        returnValue = F("Verlarer Weg");
        break;
    }
    case 318909:
    {
        returnValue = F("Verlatsweg");
        break;
    }
    case 318910:
    {
        returnValue = F("Verlautenheidener Str.");
        break;
    }
    case 318911:
    {
        returnValue = F("Verlegergasse");
        break;
    }
    case 318912:
    {
        returnValue = F("Verler Landstr.");
        break;
    }
    case 318913:
    {
        returnValue = F("Verler Str.");
        break;
    }
    case 318914:
    {
        returnValue = F("Verler Weg");
        break;
    }
    case 318915:
    {
        returnValue = F("Verliehäuser Str.");
        break;
    }
    case 318916:
    {
        returnValue = F("Verlobtenpad");
        break;
    }
    case 318917:
    {
        returnValue = F("Verlobungs-Weg");
        break;
    }
    case 318918:
    {
        returnValue = F("Verlobungsgässchen");
        break;
    }
    case 318919:
    {
        returnValue = F("Verlobungsweg");
        break;
    }
    case 318920:
    {
        returnValue = F("Verlobungswegle");
        break;
    }
    case 318921:
    {
        returnValue = F("Verlorene Kulmkestr.");
        break;
    }
    case 318922:
    {
        returnValue = F("Verlorenenweg");
        break;
    }
    case 318923:
    {
        returnValue = F("Verlorener Grundstein");
        break;
    }
    case 318924:
    {
        returnValue = F("Verlorener Sohn");
        break;
    }
    case 318925:
    {
        returnValue = F("Verlorener Weg");
        break;
    }
    case 318926:
    {
        returnValue = F("Verlorenes Holz");
        break;
    }
    case 318927:
    {
        returnValue = F("Verlorenorter Weg");
        break;
    }
    case 318928:
    {
        returnValue = F("Verlorenwasser");
        break;
    }
    case 318929:
    {
        returnValue = F("Verlängerte Ackergasse");
        break;
    }
    case 318930:
    {
        returnValue = F("Verlängerte Ackerstr.");
        break;
    }
    case 318931:
    {
        returnValue = F("Verlängerte Altrheinstr.");
        break;
    }
    case 318932:
    {
        returnValue = F("Verlängerte Amtsstr.");
        break;
    }
    case 318933:
    {
        returnValue = F("Verlängerte Apoldaer Str.");
        break;
    }
    case 318934:
    {
        returnValue = F("Verlängerte Brückenstr.");
        break;
    }
    case 318935:
    {
        returnValue = F("Verlängerte Carlbauerstr.");
        break;
    }
    case 318936:
    {
        returnValue = F("Verlängerte Eisenbahnstr.");
        break;
    }
    case 318937:
    {
        returnValue = F("Verlängerte Freiimfelder Str.");
        break;
    }
    case 318938:
    {
        returnValue = F("Verlängerte Geschwister-Scholl-Str.");
        break;
    }
    case 318939:
    {
        returnValue = F("Verlängerte Goethestr.");
        break;
    }
    case 318940:
    {
        returnValue = F("Verlängerte Grünstr.");
        break;
    }
    case 318941:
    {
        returnValue = F("Verlängerte Güstrower Str.");
        break;
    }
    case 318942:
    {
        returnValue = F("Verlängerte Jahnstr.");
        break;
    }
    case 318943:
    {
        returnValue = F("Verlängerte Julius-Kiefer-Str.");
        break;
    }
    case 318944:
    {
        returnValue = F("Verlängerte Jungbuschstr.");
        break;
    }
    case 318945:
    {
        returnValue = F("Verlängerte Kallinchener Str.");
        break;
    }
    case 318946:
    {
        returnValue = F("Verlängerte Kirchbaumstr.");
        break;
    }
    case 318947:
    {
        returnValue = F("Verlängerte Klosterstr.");
        break;
    }
    case 318948:
    {
        returnValue = F("Verlängerte Mariannenstr.");
        break;
    }
    case 318949:
    {
        returnValue = F("Verlängerte Max-Liebermann-Str.");
        break;
    }
    case 318950:
    {
        returnValue = F("Verlängerte Mötzlicher Str.");
        break;
    }
    case 318951:
    {
        returnValue = F("Verlängerte Parkstr.");
        break;
    }
    case 318952:
    {
        returnValue = F("Verlängerte Perleberger Str.");
        break;
    }
    case 318953:
    {
        returnValue = F("Verlängerte Scharnhorststr.");
        break;
    }
    case 318954:
    {
        returnValue = F("Verlängerte Schmerstr.");
        break;
    }
    case 318955:
    {
        returnValue = F("Verlängerte Schulstr.");
        break;
    }
    case 318956:
    {
        returnValue = F("Verlängerte Schwedenstr.");
        break;
    }
    case 318957:
    {
        returnValue = F("Verlängerte Spreestr.");
        break;
    }
    case 318958:
    {
        returnValue = F("Verlängerte Triebstr.");
        break;
    }
    case 318959:
    {
        returnValue = F("Verlängerte Villastr.");
        break;
    }
    case 318960:
    {
        returnValue = F("Verlängerte Wilhelmstr.");
        break;
    }
    case 318961:
    {
        returnValue = F("Verlängerter Dörfelweg");
        break;
    }
    case 318962:
    {
        returnValue = F("Verlängerter Grenzweg");
        break;
    }
    case 318963:
    {
        returnValue = F("Verlängerter Gruftenweg");
        break;
    }
    case 318964:
    {
        returnValue = F("Verlängerter Häfenweg");
        break;
    }
    case 318965:
    {
        returnValue = F("Verlängerter Landrain");
        break;
    }
    case 318966:
    {
        returnValue = F("Verlängerter Luchweg");
        break;
    }
    case 318967:
    {
        returnValue = F("Verlängerter Ostring");
        break;
    }
    case 318968:
    {
        returnValue = F("Verlängerter Triftweg");
        break;
    }
    case 318969:
    {
        returnValue = F("Verlängerter Ziegeleiweg");
        break;
    }
    case 318970:
    {
        returnValue = F("Verlängerter Zwotaer Weg");
        break;
    }
    case 318971:
    {
        returnValue = F("Verlängerung Brookstr.");
        break;
    }
    case 318972:
    {
        returnValue = F("Verlängerung Gagelstrauchweg");
        break;
    }
    case 318973:
    {
        returnValue = F("Verlängerung Rotberger Str.");
        break;
    }
    case 318974:
    {
        returnValue = F("Verlängerung Strombrückenzug");
        break;
    }
    case 318975:
    {
        returnValue = F("Verlängerung Vogelsangstr.");
        break;
    }
    case 318976:
    {
        returnValue = F("Vermeerstr.");
        break;
    }
    case 318977:
    {
        returnValue = F("Vermeerweg");
        break;
    }
    case 318978:
    {
        returnValue = F("Vermehrenring");
        break;
    }
    case 318979:
    {
        returnValue = F("Vermillionring");
        break;
    }
    case 318980:
    {
        returnValue = F("Vermittlung");
        break;
    }
    case 318981:
    {
        returnValue = F("Vermont Avenue");
        break;
    }
    case 318982:
    {
        returnValue = F("Vermontring");
        break;
    }
    case 318983:
    {
        returnValue = F("Vermontstr.");
        break;
    }
    case 318984:
    {
        returnValue = F("Verna-Park / Stadtpark");
        break;
    }
    case 318985:
    {
        returnValue = F("Vernaer Str.");
        break;
    }
    case 318986:
    {
        returnValue = F("Vernawahlshäuser Str.");
        break;
    }
    case 318987:
    {
        returnValue = F("Verner Holz");
        break;
    }
    case 318988:
    {
        returnValue = F("Verner Str.");
        break;
    }
    case 318989:
    {
        returnValue = F("Verner-Panton-Str.");
        break;
    }
    case 318990:
    {
        returnValue = F("Verner-Panton-Weg");
        break;
    }
    case 318991:
    {
        returnValue = F("Vernicher Str.");
        break;
    }
    case 318992:
    {
        returnValue = F("Vernonstr.");
        break;
    }
    case 318993:
    {
        returnValue = F("Vernoscer Kreisel");
        break;
    }
    case 318994:
    {
        returnValue = F("Vernou-sur-Brenne-Steige");
        break;
    }
    case 318995:
    {
        returnValue = F("Vernouillet Allee");
        break;
    }
    case 318996:
    {
        returnValue = F("Vernumer Str.");
        break;
    }
    case 318997:
    {
        returnValue = F("Vernumer Weg");
        break;
    }
    case 318998:
    {
        returnValue = F("Veronastr.");
        break;
    }
    case 318999:
    {
        returnValue = F("Veroneser Str.");
        break;
    }
    case 319000:
    {
        returnValue = F("Veronicaweg");
        break;
    }
    case 319001:
    {
        returnValue = F("Veronika-Rath-Str.");
        break;
    }
    case 319002:
    {
        returnValue = F("Veronika-Zorn-Str.");
        break;
    }
    case 319003:
    {
        returnValue = F("Veronika-von-Rietheim-Str.");
        break;
    }
    case 319004:
    {
        returnValue = F("Veronikaberg");
        break;
    }
    case 319005:
    {
        returnValue = F("Veronikahöhe");
        break;
    }
    case 319006:
    {
        returnValue = F("Veronikastr.");
        break;
    }
    case 319007:
    {
        returnValue = F("Veronikaweg");
        break;
    }
    case 319008:
    {
        returnValue = F("Verr");
        break;
    }
    case 319009:
    {
        returnValue = F("Verrenbacher Weg");
        break;
    }
    case 319010:
    {
        returnValue = F("Verrenberger Ring");
        break;
    }
    case 319011:
    {
        returnValue = F("Verrenberger Str.");
        break;
    }
    case 319012:
    {
        returnValue = F("Verrenberger Weg");
        break;
    }
    case 319013:
    {
        returnValue = F("Verresberger Str.");
        break;
    }
    case 319014:
    {
        returnValue = F("Verreshöhe");
        break;
    }
    case 319015:
    {
        returnValue = F("Verresstr.");
        break;
    }
    case 319016:
    {
        returnValue = F("Verrätergasse");
        break;
    }
    case 319017:
    {
        returnValue = F("Versailler Platz");
        break;
    }
    case 319018:
    {
        returnValue = F("Versailler Str.");
        break;
    }
    case 319019:
    {
        returnValue = F("Versbach-Str.");
        break;
    }
    case 319020:
    {
        returnValue = F("Versbacher Landstr.");
        break;
    }
    case 319021:
    {
        returnValue = F("Versbacher Röthe");
        break;
    }
    case 319022:
    {
        returnValue = F("Versbacher Str.");
        break;
    }
    case 319023:
    {
        returnValue = F("Verschaffeltstr.");
        break;
    }
    case 319024:
    {
        returnValue = F("Verschneider Str.");
        break;
    }
    case 319025:
    {
        returnValue = F("Verschwisterungsring");
        break;
    }
    case 319026:
    {
        returnValue = F("Verschönerung");
        break;
    }
    case 319027:
    {
        returnValue = F("Verschönerungsweg");
        break;
    }
    case 319028:
    {
        returnValue = F("Verse");
        break;
    }
    case 319029:
    {
        returnValue = F("Versehweg");
        break;
    }
    case 319030:
    {
        returnValue = F("Versemann's Weg");
        break;
    }
    case 319031:
    {
        returnValue = F("Versemannsweg");
        break;
    }
    case 319032:
    {
        returnValue = F("Versener Str.");
        break;
    }
    case 319033:
    {
        returnValue = F("Versestr.");
        break;
    }
    case 319034:
    {
        returnValue = F("Verseweg");
        break;
    }
    case 319035:
    {
        returnValue = F("Versflether Weg");
        break;
    }
    case 319036:
    {
        returnValue = F("Vershofenstr.");
        break;
    }
    case 319037:
    {
        returnValue = F("Versmar");
        break;
    }
    case 319038:
    {
        returnValue = F("Versmolder Str.");
        break;
    }
    case 319039:
    {
        returnValue = F("Versonstr.");
        break;
    }
    case 319040:
    {
        returnValue = F("Verspoel");
        break;
    }
    case 319041:
    {
        returnValue = F("Verspohlweg");
        break;
    }
    case 319042:
    {
        returnValue = F("Verstalstr.");
        break;
    }
    case 319043:
    {
        returnValue = F("Versteinerter Weg");
        break;
    }
    case 319044:
    {
        returnValue = F("Versteylstr.");
        break;
    }
    case 319045:
    {
        returnValue = F("Versuchsbrücken");
        break;
    }
    case 319046:
    {
        returnValue = F("Versuchsvenn");
        break;
    }
    case 319047:
    {
        returnValue = F("Versöhnungsloipe");
        break;
    }
    case 319048:
    {
        returnValue = F("Verteilerebene StadtBahn-Station Jahnplatz");
        break;
    }
    case 319049:
    {
        returnValue = F("Verteilerkreis Utbremen");
        break;
    }
    case 319050:
    {
        returnValue = F("Verteilerring");
        break;
    }
    case 319051:
    {
        returnValue = F("Verth");
        break;
    }
    case 319052:
    {
        returnValue = F("Vertingerstr.");
        break;
    }
    case 319053:
    {
        returnValue = F("Vertingerweg");
        break;
    }
    case 319054:
    {
        returnValue = F("Vertrauenschachtstr.");
        break;
    }
    case 319055:
    {
        returnValue = F("Vertusplatz");
        break;
    }
    case 319056:
    {
        returnValue = F("VerwEiland");
        break;
    }
    case 319057:
    {
        returnValue = F("Verwaltergang");
        break;
    }
    case 319058:
    {
        returnValue = F("Verwalterweg");
        break;
    }
    case 319059:
    {
        returnValue = F("Verwaltungsgasse");
        break;
    }
    case 319060:
    {
        returnValue = F("Verweilplatz Güterhallenstr.");
        break;
    }
    case 319061:
    {
        returnValue = F("Verwellengrund");
        break;
    }
    case 319062:
    {
        returnValue = F("Verweyenstr.");
        break;
    }
    case 319063:
    {
        returnValue = F("Verwoodstr.");
        break;
    }
    case 319064:
    {
        returnValue = F("Vesaliusstr.");
        break;
    }
    case 319065:
    {
        returnValue = F("Vesaliusweg");
        break;
    }
    case 319066:
    {
        returnValue = F("Vesalstr.");
        break;
    }
    case 319067:
    {
        returnValue = F("Vesbecker Str.");
        break;
    }
    case 319068:
    {
        returnValue = F("Vesbecker Weg");
        break;
    }
    case 319069:
    {
        returnValue = F("Veseder Str.");
        break;
    }
    case 319070:
    {
        returnValue = F("Vesenbührener Str.");
        break;
    }
    case 319071:
    {
        returnValue = F("Veserder Weg");
        break;
    }
    case 319072:
    {
        returnValue = F("Veskampstr.");
        break;
    }
    case 319073:
    {
        returnValue = F("Vesouler Str.");
        break;
    }
    case 319074:
    {
        returnValue = F("Vespasianstr.");
        break;
    }
    case 319075:
    {
        returnValue = F("Vesperbilder Str.");
        break;
    }
    case 319076:
    {
        returnValue = F("Vesperbrückle");
        break;
    }
    case 319077:
    {
        returnValue = F("Vespergang");
        break;
    }
    case 319078:
    {
        returnValue = F("Vesperstieg");
        break;
    }
    case 319079:
    {
        returnValue = F("Vesperstr.");
        break;
    }
    case 319080:
    {
        returnValue = F("Vesperther Trift");
        break;
    }
    case 319081:
    {
        returnValue = F("Vesperweg");
        break;
    }
    case 319082:
    {
        returnValue = F("Vespucciweg");
        break;
    }
    case 319083:
    {
        returnValue = F("Vessendorfer Str.");
        break;
    }
    case 319084:
    {
        returnValue = F("Vesser Str.");
        break;
    }
    case 319085:
    {
        returnValue = F("Vesserstr.");
        break;
    }
    case 319086:
    {
        returnValue = F("Vestaer Str.");
        break;
    }
    case 319087:
    {
        returnValue = F("Vestastr.");
        break;
    }
    case 319088:
    {
        returnValue = F("Vestaweg");
        break;
    }
    case 319089:
    {
        returnValue = F("Veste Wachsenburg");
        break;
    }
    case 319090:
    {
        returnValue = F("Vesteburgweg");
        break;
    }
    case 319091:
    {
        returnValue = F("Vestenberg");
        break;
    }
    case 319092:
    {
        returnValue = F("Vesterkoppel");
        break;
    }
    case 319093:
    {
        returnValue = F("Vestestr.");
        break;
    }
    case 319094:
    {
        returnValue = F("Vestgasse");
        break;
    }
    case 319095:
    {
        returnValue = F("Vestingweg");
        break;
    }
    case 319096:
    {
        returnValue = F("Vestische Allee");
        break;
    }
    case 319097:
    {
        returnValue = F("Vestische Str.");
        break;
    }
    case 319098:
    {
        returnValue = F("Vestner Weg");
        break;
    }
    case 319099:
    {
        returnValue = F("Vestnerstr.");
        break;
    }
    case 319100:
    {
        returnValue = F("Vestnertor");
        break;
    }
    case 319101:
    {
        returnValue = F("Vestnertorbrücke");
        break;
    }
    case 319102:
    {
        returnValue = F("Vestnertorgraben");
        break;
    }
    case 319103:
    {
        returnValue = F("Vestnertormauer");
        break;
    }
    case 319104:
    {
        returnValue = F("Vestruper Dorfstr.");
        break;
    }
    case 319105:
    {
        returnValue = F("Vestruper Esch");
        break;
    }
    case 319106:
    {
        returnValue = F("Vestruper Str.");
        break;
    }
    case 319107:
    {
        returnValue = F("Veszpremer Str.");
        break;
    }
    case 319108:
    {
        returnValue = F("Veteranenpfad");
        break;
    }
    case 319109:
    {
        returnValue = F("Veteranenstr.");
        break;
    }
    case 319110:
    {
        returnValue = F("Veterinärstr.");
        break;
    }
    case 319111:
    {
        returnValue = F("Vethackeweg");
        break;
    }
    case 319112:
    {
        returnValue = F("Vethem");
        break;
    }
    case 319113:
    {
        returnValue = F("Vetschauer Platz");
        break;
    }
    case 319114:
    {
        returnValue = F("Vetschauer Str.");
        break;
    }
    case 319115:
    {
        returnValue = F("Vetschauer Weg");
        break;
    }
    case 319116:
    {
        returnValue = F("Vettelhovener Str.");
        break;
    }
    case 319117:
    {
        returnValue = F("Vetter-Franz-Weg");
        break;
    }
    case 319118:
    {
        returnValue = F("Vettergasse");
        break;
    }
    case 319119:
    {
        returnValue = F("Vettermannstr.");
        break;
    }
    case 319120:
    {
        returnValue = F("Vetterngasse");
        break;
    }
    case 319121:
    {
        returnValue = F("Vetternkamp");
        break;
    }
    case 319122:
    {
        returnValue = F("Vetternweg");
        break;
    }
    case 319123:
    {
        returnValue = F("Vetters Hof");
        break;
    }
    case 319124:
    {
        returnValue = F("Vettersstr.");
        break;
    }
    case 319125:
    {
        returnValue = F("Vetterstr.");
        break;
    }
    case 319126:
    {
        returnValue = F("Vettersträßle");
        break;
    }
    case 319127:
    {
        returnValue = F("Vetterweg");
        break;
    }
    case 319128:
    {
        returnValue = F("Vettin");
        break;
    }
    case 319129:
    {
        returnValue = F("Vettiner Str.");
        break;
    }
    case 319130:
    {
        returnValue = F("Vettweißer Str.");
        break;
    }
    case 319131:
    {
        returnValue = F("Vetzberger Str.");
        break;
    }
    case 319132:
    {
        returnValue = F("Vetzberger Weg");
        break;
    }
    case 319133:
    {
        returnValue = F("Vetzbergring");
        break;
    }
    case 319134:
    {
        returnValue = F("Veybach Hof");
        break;
    }
    case 319135:
    {
        returnValue = F("Veybachpark");
        break;
    }
    case 319136:
    {
        returnValue = F("Veybachstr.");
        break;
    }
    case 319137:
    {
        returnValue = F("Veyegasse");
        break;
    }
    case 319138:
    {
        returnValue = F("Veyer Str.");
        break;
    }
    case 319139:
    {
        returnValue = F("Veynauer Weg");
        break;
    }
    case 319140:
    {
        returnValue = F("Veynaustr.");
        break;
    }
    case 319141:
    {
        returnValue = F("Veßraer Weg");
        break;
    }
    case 319142:
    {
        returnValue = F("Vfl Stade");
        break;
    }
    case 319143:
    {
        returnValue = F("Via Arno");
        break;
    }
    case 319144:
    {
        returnValue = F("Via Bastia");
        break;
    }
    case 319145:
    {
        returnValue = F("Via Belgica");
        break;
    }
    case 319146:
    {
        returnValue = F("Via Casa Bianco");
        break;
    }
    case 319147:
    {
        returnValue = F("Via Ceramica");
        break;
    }
    case 319148:
    {
        returnValue = F("Via Claudia");
        break;
    }
    case 319149:
    {
        returnValue = F("Via Costermano");
        break;
    }
    case 319150:
    {
        returnValue = F("Via Decumanum");
        break;
    }
    case 319151:
    {
        returnValue = F("Via Farina");
        break;
    }
    case 319152:
    {
        returnValue = F("Via L'Aquila");
        break;
    }
    case 319153:
    {
        returnValue = F("Via Mezzocorona");
        break;
    }
    case 319154:
    {
        returnValue = F("Via Piave");
        break;
    }
    case 319155:
    {
        returnValue = F("Via Principalis");
        break;
    }
    case 319156:
    {
        returnValue = F("Via Raetica");
        break;
    }
    case 319157:
    {
        returnValue = F("Via Regia");
        break;
    }
    case 319158:
    {
        returnValue = F("Via Reno");
        break;
    }
    case 319159:
    {
        returnValue = F("Via Rustica");
        break;
    }
    case 319160:
    {
        returnValue = F("Via Salza Irpina");
        break;
    }
    case 319161:
    {
        returnValue = F("Via Tiber");
        break;
    }
    case 319162:
    {
        returnValue = F("Via Tronto");
        break;
    }
    case 319163:
    {
        returnValue = F("Via Turano");
        break;
    }
    case 319164:
    {
        returnValue = F("Via-Claudia-Platz");
        break;
    }
    case 319165:
    {
        returnValue = F("Via-Claudia-Str.");
        break;
    }
    case 319166:
    {
        returnValue = F("Via-Claudia-Weg");
        break;
    }
    case 319167:
    {
        returnValue = F("Via-Julia-Ring");
        break;
    }
    case 319168:
    {
        returnValue = F("Via-Regia-Park");
        break;
    }
    case 319169:
    {
        returnValue = F("Viadukt");
        break;
    }
    case 319170:
    {
        returnValue = F("Viaduktblick");
        break;
    }
    case 319171:
    {
        returnValue = F("Viaduktstr.");
        break;
    }
    case 319172:
    {
        returnValue = F("Viaduktweg");
        break;
    }
    case 319173:
    {
        returnValue = F("Viandener Str.");
        break;
    }
    case 319174:
    {
        returnValue = F("Viandener Weg");
        break;
    }
    case 319175:
    {
        returnValue = F("Viandenerstr.");
        break;
    }
    case 319176:
    {
        returnValue = F("Viandenstr.");
        break;
    }
    case 319177:
    {
        returnValue = F("Viatisstr.");
        break;
    }
    case 319178:
    {
        returnValue = F("Viba Park");
        break;
    }
    case 319179:
    {
        returnValue = F("Viborgweg");
        break;
    }
    case 319180:
    {
        returnValue = F("Vicarie-Platz");
        break;
    }
    case 319181:
    {
        returnValue = F("Vicariuskamp");
        break;
    }
    case 319182:
    {
        returnValue = F("Viceburgstr.");
        break;
    }
    case 319183:
    {
        returnValue = F("Viceburgweg");
        break;
    }
    case 319184:
    {
        returnValue = F("Vicelinsgang");
        break;
    }
    case 319185:
    {
        returnValue = F("Vicelinstr.");
        break;
    }
    case 319186:
    {
        returnValue = F("Vicelinweg");
        break;
    }
    case 319187:
    {
        returnValue = F("Vichtbachstr.");
        break;
    }
    case 319188:
    {
        returnValue = F("Vichter Acker");
        break;
    }
    case 319189:
    {
        returnValue = F("Vichter Str.");
        break;
    }
    case 319190:
    {
        returnValue = F("Vichthangweg");
        break;
    }
    case 319191:
    {
        returnValue = F("Vichttalweg");
        break;
    }
    case 319192:
    {
        returnValue = F("Vichyplatz");
        break;
    }
    case 319193:
    {
        returnValue = F("Vicinalstr.");
        break;
    }
    case 319194:
    {
        returnValue = F("Vicinalweg");
        break;
    }
    case 319195:
    {
        returnValue = F("Vicke-Schorler-Ring");
        break;
    }
    case 319196:
    {
        returnValue = F("Vickenteich");
        break;
    }
    case 319197:
    {
        returnValue = F("Vickesheider Weg");
        break;
    }
    case 319198:
    {
        returnValue = F("Vicki-Baum-Weg");
        break;
    }
    case 319199:
    {
        returnValue = F("Victor-Achard-Str.");
        break;
    }
    case 319200:
    {
        returnValue = F("Victor-Adolf-Str.");
        break;
    }
    case 319201:
    {
        returnValue = F("Victor-Andersen-Weg");
        break;
    }
    case 319202:
    {
        returnValue = F("Victor-Blüthgen-Str.");
        break;
    }
    case 319203:
    {
        returnValue = F("Victor-Freese-Str.");
        break;
    }
    case 319204:
    {
        returnValue = F("Victor-Goerttler-Str.");
        break;
    }
    case 319205:
    {
        returnValue = F("Victor-Gollancz-Str.");
        break;
    }
    case 319206:
    {
        returnValue = F("Victor-Gollancz-Weg");
        break;
    }
    case 319207:
    {
        returnValue = F("Victor-Halstrick-Str.");
        break;
    }
    case 319208:
    {
        returnValue = F("Victor-Huber-Str.");
        break;
    }
    case 319209:
    {
        returnValue = F("Victor-Jara-Str.");
        break;
    }
    case 319210:
    {
        returnValue = F("Victor-Kaluza-Str.");
        break;
    }
    case 319211:
    {
        returnValue = F("Victor-Klemperer-Str.");
        break;
    }
    case 319212:
    {
        returnValue = F("Victor-Kretz-Str.");
        break;
    }
    case 319213:
    {
        returnValue = F("Victor-Loebe-Str.");
        break;
    }
    case 319214:
    {
        returnValue = F("Victor-Mezger-Str.");
        break;
    }
    case 319215:
    {
        returnValue = F("Victor-Schulte-Str.");
        break;
    }
    case 319216:
    {
        returnValue = F("Victor-Slotosch-Str.");
        break;
    }
    case 319217:
    {
        returnValue = F("Victor-Speier-Holstein-Str.");
        break;
    }
    case 319218:
    {
        returnValue = F("Victor-Weishaupt-Str.");
        break;
    }
    case 319219:
    {
        returnValue = F("Victor-von-Scheffel-Platz");
        break;
    }
    case 319220:
    {
        returnValue = F("Victor-von-Scheffel-Str.");
        break;
    }
    case 319221:
    {
        returnValue = F("Victor-von-Scheffel-Weg");
        break;
    }
    case 319222:
    {
        returnValue = F("Victorburer Moor");
        break;
    }
    case 319223:
    {
        returnValue = F("Victorburer Wilde");
        break;
    }
    case 319224:
    {
        returnValue = F("Victoria-Luise-Str.");
        break;
    }
    case 319225:
    {
        returnValue = F("Victoria-Str.");
        break;
    }
    case 319226:
    {
        returnValue = F("Victoriabrücke");
        break;
    }
    case 319227:
    {
        returnValue = F("Victoriahain");
        break;
    }
    case 319228:
    {
        returnValue = F("Victoriahöhe");
        break;
    }
    case 319229:
    {
        returnValue = F("Victoriapark");
        break;
    }
    case 319230:
    {
        returnValue = F("Victoriaplatz");
        break;
    }
    case 319231:
    {
        returnValue = F("Victoriastr.");
        break;
    }
    case 319232:
    {
        returnValue = F("Victoriaweg");
        break;
    }
    case 319233:
    {
        returnValue = F("Victorine-Endler-Weg");
        break;
    }
    case 319234:
    {
        returnValue = F("Victorinusstr.");
        break;
    }
    case 319235:
    {
        returnValue = F("Victorsruh");
        break;
    }
    case 319236:
    {
        returnValue = F("Victorstr.");
        break;
    }
    case 319237:
    {
        returnValue = F("Victorweg");
        break;
    }
    case 319238:
    {
        returnValue = F("Vicusweg");
        break;
    }
    case 319239:
    {
        returnValue = F("Vidamer Str.");
        break;
    }
    case 319240:
    {
        returnValue = F("Videbullenstr.");
        break;
    }
    case 319241:
    {
        returnValue = F("Videnzstr.");
        break;
    }
    case 319242:
    {
        returnValue = F("Vidiner Str.");
        break;
    }
    case 319243:
    {
        returnValue = F("Vidum");
        break;
    }
    case 319244:
    {
        returnValue = F("Vidumestr.");
        break;
    }
    case 319245:
    {
        returnValue = F("Vidumstr.");
        break;
    }
    case 319246:
    {
        returnValue = F("Viebacher Str.");
        break;
    }
    case 319247:
    {
        returnValue = F("Viebenweg");
        break;
    }
    case 319248:
    {
        returnValue = F("Viebicht");
        break;
    }
    case 319249:
    {
        returnValue = F("Viebig");
        break;
    }
    case 319250:
    {
        returnValue = F("Viebiggasse");
        break;
    }
    case 319251:
    {
        returnValue = F("Viebigplatz");
        break;
    }
    case 319252:
    {
        returnValue = F("Viebigstr.");
        break;
    }
    case 319253:
    {
        returnValue = F("Viebigt");
        break;
    }
    case 319254:
    {
        returnValue = F("Viebigtweg");
        break;
    }
    case 319255:
    {
        returnValue = F("Viebigweg");
        break;
    }
    case 319256:
    {
        returnValue = F("Vieburger Weg");
        break;
    }
    case 319257:
    {
        returnValue = F("Vieböckstr.");
        break;
    }
    case 319258:
    {
        returnValue = F("Viechelner Chaussee");
        break;
    }
    case 319259:
    {
        returnValue = F("Viechtacher Str.");
        break;
    }
    case 319260:
    {
        returnValue = F("Viechtafeller Str.");
        break;
    }
    case 319261:
    {
        returnValue = F("Viechzig");
        break;
    }
    case 319262:
    {
        returnValue = F("Viedegarten");
        break;
    }
    case 319263:
    {
        returnValue = F("Viedeler Gässchen");
        break;
    }
    case 319264:
    {
        returnValue = F("Viedelstr.");
        break;
    }
    case 319265:
    {
        returnValue = F("Vieffak");
        break;
    }
    case 319266:
    {
        returnValue = F("Vieffhausstr.");
        break;
    }
    case 319267:
    {
        returnValue = F("Viefhaushof");
        break;
    }
    case 319268:
    {
        returnValue = F("Viefhoek");
        break;
    }
    case 319269:
    {
        returnValue = F("Viega Platz");
        break;
    }
    case 319270:
    {
        returnValue = F("Viegastr.");
        break;
    }
    case 319271:
    {
        returnValue = F("Viehauser Berg");
        break;
    }
    case 319272:
    {
        returnValue = F("Viehausteerweg");
        break;
    }
    case 319273:
    {
        returnValue = F("Viehaustr.");
        break;
    }
    case 319274:
    {
        returnValue = F("Viehbacher Str.");
        break;
    }
    case 319275:
    {
        returnValue = F("Viehbacher Weg");
        break;
    }
    case 319276:
    {
        returnValue = F("Viehbachstr.");
        break;
    }
    case 319277:
    {
        returnValue = F("Viehbachweg");
        break;
    }
    case 319278:
    {
        returnValue = F("Viehbahn");
        break;
    }
    case 319279:
    {
        returnValue = F("Viehberg");
        break;
    }
    case 319280:
    {
        returnValue = F("Viehbergweg");
        break;
    }
    case 319281:
    {
        returnValue = F("Viehbig");
        break;
    }
    case 319282:
    {
        returnValue = F("Viehbigweg");
        break;
    }
    case 319283:
    {
        returnValue = F("Viehbotsche");
        break;
    }
    case 319284:
    {
        returnValue = F("Viehbrock");
        break;
    }
    case 319285:
    {
        returnValue = F("Viehbruchsweg");
        break;
    }
    case 319286:
    {
        returnValue = F("Viehbrunnenweg");
        break;
    }
    case 319287:
    {
        returnValue = F("Viehdamm");
        break;
    }
    case 319288:
    {
        returnValue = F("Viehdiecksredder");
        break;
    }
    case 319289:
    {
        returnValue = F("Viehdrift");
        break;
    }
    case 319290:
    {
        returnValue = F("Viehdurchlaß");
        break;
    }
    case 319291:
    {
        returnValue = F("Viehfahrtsweg");
        break;
    }
    case 319292:
    {
        returnValue = F("Viehfahrtweg");
        break;
    }
    case 319293:
    {
        returnValue = F("Viehfeldstr.");
        break;
    }
    case 319294:
    {
        returnValue = F("Viehgasse");
        break;
    }
    case 319295:
    {
        returnValue = F("Viehgasser Weg");
        break;
    }
    case 319296:
    {
        returnValue = F("Viehgrund");
        break;
    }
    case 319297:
    {
        returnValue = F("Viehgrundsträßle");
        break;
    }
    case 319298:
    {
        returnValue = F("Viehhagen");
        break;
    }
    case 319299:
    {
        returnValue = F("Viehhalde");
        break;
    }
    case 319300:
    {
        returnValue = F("Viehhallenweg");
        break;
    }
    case 319301:
    {
        returnValue = F("Viehhausen");
        break;
    }
    case 319302:
    {
        returnValue = F("Viehhausklingenweg");
        break;
    }
    case 319303:
    {
        returnValue = F("Viehhausteerweg");
        break;
    }
    case 319304:
    {
        returnValue = F("Viehhausweg");
        break;
    }
    case 319305:
    {
        returnValue = F("Viehhelmer");
        break;
    }
    case 319306:
    {
        returnValue = F("Viehhof");
        break;
    }
    case 319307:
    {
        returnValue = F("Viehhofstr.");
        break;
    }
    case 319308:
    {
        returnValue = F("Viehhofweg");
        break;
    }
    case 319309:
    {
        returnValue = F("Viehhorn");
        break;
    }
    case 319310:
    {
        returnValue = F("Viehhülbe");
        break;
    }
    case 319311:
    {
        returnValue = F("Viehkamp");
        break;
    }
    case 319312:
    {
        returnValue = F("Viehkate");
        break;
    }
    case 319313:
    {
        returnValue = F("Viehkaten");
        break;
    }
    case 319314:
    {
        returnValue = F("Viehlander Str.");
        break;
    }
    case 319315:
    {
        returnValue = F("Viehlasweg");
        break;
    }
    case 319316:
    {
        returnValue = F("Viehledenweg");
        break;
    }
    case 319317:
    {
        returnValue = F("Viehler Str.");
        break;
    }
    case 319318:
    {
        returnValue = F("Viehläger");
        break;
    }
    case 319319:
    {
        returnValue = F("Viehlägerweg");
        break;
    }
    case 319320:
    {
        returnValue = F("Viehmarkt");
        break;
    }
    case 319321:
    {
        returnValue = F("Viehmarktgasse");
        break;
    }
    case 319322:
    {
        returnValue = F("Viehmarktplatz");
        break;
    }
    case 319323:
    {
        returnValue = F("Viehmarktsplatz");
        break;
    }
    case 319324:
    {
        returnValue = F("Viehmarktstr.");
        break;
    }
    case 319325:
    {
        returnValue = F("Viehofer Platz");
        break;
    }
    case 319326:
    {
        returnValue = F("Viehofer Str.");
        break;
    }
    case 319327:
    {
        returnValue = F("Viehorn");
        break;
    }
    case 319328:
    {
        returnValue = F("Viehplack");
        break;
    }
    case 319329:
    {
        returnValue = F("Viehreihe");
        break;
    }
    case 319330:
    {
        returnValue = F("Viehrutenweg");
        break;
    }
    case 319331:
    {
        returnValue = F("Viehspecken");
        break;
    }
    case 319332:
    {
        returnValue = F("Viehstege");
        break;
    }
    case 319333:
    {
        returnValue = F("Viehsteige");
        break;
    }
    case 319334:
    {
        returnValue = F("Viehstellenweg");
        break;
    }
    case 319335:
    {
        returnValue = F("Viehstelleweg");
        break;
    }
    case 319336:
    {
        returnValue = F("Viehstiege");
        break;
    }
    case 319337:
    {
        returnValue = F("Viehstr.");
        break;
    }
    case 319338:
    {
        returnValue = F("Viehstätteweg");
        break;
    }
    case 319339:
    {
        returnValue = F("Viehteichweg");
        break;
    }
    case 319340:
    {
        returnValue = F("Viehtor");
        break;
    }
    case 319341:
    {
        returnValue = F("Viehtorstr.");
        break;
    }
    case 319342:
    {
        returnValue = F("Viehtreibe");
        break;
    }
    case 319343:
    {
        returnValue = F("Viehtrieb");
        break;
    }
    case 319344:
    {
        returnValue = F("Viehtriebhangweg");
        break;
    }
    case 319345:
    {
        returnValue = F("Viehtriebstr.");
        break;
    }
    case 319346:
    {
        returnValue = F("Viehtriebsträßchen");
        break;
    }
    case 319347:
    {
        returnValue = F("Viehtriebsweg");
        break;
    }
    case 319348:
    {
        returnValue = F("Viehtriebteichweg");
        break;
    }
    case 319349:
    {
        returnValue = F("Viehtriebweg");
        break;
    }
    case 319350:
    {
        returnValue = F("Viehtrifft");
        break;
    }
    case 319351:
    {
        returnValue = F("Viehtrift");
        break;
    }
    case 319352:
    {
        returnValue = F("Viehtriftenweg");
        break;
    }
    case 319353:
    {
        returnValue = F("Viehtriftstr.");
        break;
    }
    case 319354:
    {
        returnValue = F("Viehtriftweg");
        break;
    }
    case 319355:
    {
        returnValue = F("Viehungerallee");
        break;
    }
    case 319356:
    {
        returnValue = F("Viehwaidstr.");
        break;
    }
    case 319357:
    {
        returnValue = F("Viehwasen");
        break;
    }
    case 319358:
    {
        returnValue = F("Viehweg");
        break;
    }
    case 319359:
    {
        returnValue = F("Viehweg Mittelfrohna");
        break;
    }
    case 319360:
    {
        returnValue = F("Viehwegbrücke");
        break;
    }
    case 319361:
    {
        returnValue = F("Viehweide");
        break;
    }
    case 319362:
    {
        returnValue = F("Viehweidenweg");
        break;
    }
    case 319363:
    {
        returnValue = F("Viehweiderweg");
        break;
    }
    case 319364:
    {
        returnValue = F("Viehweidestr.");
        break;
    }
    case 319365:
    {
        returnValue = F("Viehweideweg");
        break;
    }
    case 319366:
    {
        returnValue = F("Viehweidplätze");
        break;
    }
    case 319367:
    {
        returnValue = F("Viehweidschneise");
        break;
    }
    case 319368:
    {
        returnValue = F("Viehweidstr.");
        break;
    }
    case 319369:
    {
        returnValue = F("Viehweidweg");
        break;
    }
    case 319370:
    {
        returnValue = F("Viehzugsweg");
        break;
    }
    case 319371:
    {
        returnValue = F("Viehzüchtig");
        break;
    }
    case 319372:
    {
        returnValue = F("Viehövener Str.");
        break;
    }
    case 319373:
    {
        returnValue = F("Viekskamp");
        break;
    }
    case 319374:
    {
        returnValue = F("Vielander Str.");
        break;
    }
    case 319375:
    {
        returnValue = F("Vielandweg");
        break;
    }
    case 319376:
    {
        returnValue = F("Vielanker Weg");
        break;
    }
    case 319377:
    {
        returnValue = F("Vielauer Str.");
        break;
    }
    case 319378:
    {
        returnValue = F("Vielbacher Weg");
        break;
    }
    case 319379:
    {
        returnValue = F("Vielbrunner Steige");
        break;
    }
    case 319380:
    {
        returnValue = F("Vielbrunner Weg");
        break;
    }
    case 319381:
    {
        returnValue = F("Viele Brunnen");
        break;
    }
    case 319382:
    {
        returnValue = F("Vielenbergstr.");
        break;
    }
    case 319383:
    {
        returnValue = F("Vielenbruchsweg");
        break;
    }
    case 319384:
    {
        returnValue = F("Vielener Weg");
        break;
    }
    case 319385:
    {
        returnValue = F("Vieleweg");
        break;
    }
    case 319386:
    {
        returnValue = F("Vielister Bogen");
        break;
    }
    case 319387:
    {
        returnValue = F("Vielitzer Holzweg");
        break;
    }
    case 319388:
    {
        returnValue = F("Vielitzer Str.");
        break;
    }
    case 319389:
    {
        returnValue = F("Vielitzer Weg");
        break;
    }
    case 319390:
    {
        returnValue = F("Vielmoorweg");
        break;
    }
    case 319391:
    {
        returnValue = F("Vielser Burgstr.");
        break;
    }
    case 319392:
    {
        returnValue = F("Vielser Str.");
        break;
    }
    case 319393:
    {
        returnValue = F("Vielserhof");
        break;
    }
    case 319394:
    {
        returnValue = F("Vielstedter Kirchweg");
        break;
    }
    case 319395:
    {
        returnValue = F("Vielstedter Str.");
        break;
    }
    case 319396:
    {
        returnValue = F("Vieländer Weg");
        break;
    }
    case 319397:
    {
        returnValue = F("Viemannsweg");
        break;
    }
    case 319398:
    {
        returnValue = F("Vienenburger Str.");
        break;
    }
    case 319399:
    {
        returnValue = F("Vienhorst");
        break;
    }
    case 319400:
    {
        returnValue = F("Vienhovenweg");
        break;
    }
    case 319401:
    {
        returnValue = F("Vienig");
        break;
    }
    case 319402:
    {
        returnValue = F("Vienkenstr.");
        break;
    }
    case 319403:
    {
        returnValue = F("Vier");
        break;
    }
    case 319404:
    {
        returnValue = F("Vier Buchenweg");
        break;
    }
    case 319405:
    {
        returnValue = F("Vier Eichen");
        break;
    }
    case 319406:
    {
        returnValue = F("Vier Grenzen");
        break;
    }
    case 319407:
    {
        returnValue = F("Vier Häuser");
        break;
    }
    case 319408:
    {
        returnValue = F("Vier Höfe");
        break;
    }
    case 319409:
    {
        returnValue = F("Vier Jauchert");
        break;
    }
    case 319410:
    {
        returnValue = F("Vier Linden");
        break;
    }
    case 319411:
    {
        returnValue = F("Vier Länder");
        break;
    }
    case 319412:
    {
        returnValue = F("Vier Morgen");
        break;
    }
    case 319413:
    {
        returnValue = F("Vier Ruten");
        break;
    }
    case 319414:
    {
        returnValue = F("Vier Ruthenweg");
        break;
    }
    case 319415:
    {
        returnValue = F("Vier-Birken-Weg");
        break;
    }
    case 319416:
    {
        returnValue = F("Vier-Eichen-Weg");
        break;
    }
    case 319417:
    {
        returnValue = F("Vier-Häuser-Str.");
        break;
    }
    case 319418:
    {
        returnValue = F("Vier-Häuser-Weg");
        break;
    }
    case 319419:
    {
        returnValue = F("Vier-Jahreszeiten");
        break;
    }
    case 319420:
    {
        returnValue = F("Vier-Jahreszeiten-Park");
        break;
    }
    case 319421:
    {
        returnValue = F("Vier-Linden-Platz");
        break;
    }
    case 319422:
    {
        returnValue = F("Vier-Morgen-Str.");
        break;
    }
    case 319423:
    {
        returnValue = F("Vier-Städte-Park");
        break;
    }
    case 319424:
    {
        returnValue = F("Vier-Winde-Str.");
        break;
    }
    case 319425:
    {
        returnValue = F("Vierackerweg");
        break;
    }
    case 319426:
    {
        returnValue = F("Vierackerwiesen");
        break;
    }
    case 319427:
    {
        returnValue = F("Vierauer Weg");
        break;
    }
    case 319428:
    {
        returnValue = F("Vierbacher Str.");
        break;
    }
    case 319429:
    {
        returnValue = F("Vierbaumer Heide");
        break;
    }
    case 319430:
    {
        returnValue = F("Vierbaumer Weg");
        break;
    }
    case 319431:
    {
        returnValue = F("Vierbeeteweg");
        break;
    }
    case 319432:
    {
        returnValue = F("Vierberge-Str.");
        break;
    }
    case 319433:
    {
        returnValue = F("Vierbergen");
        break;
    }
    case 319434:
    {
        returnValue = F("Vierbirkenschneise");
        break;
    }
    case 319435:
    {
        returnValue = F("Vierbrooks Redder");
        break;
    }
    case 319436:
    {
        returnValue = F("Vierbrückenweg");
        break;
    }
    case 319437:
    {
        returnValue = F("Vierbuchen");
        break;
    }
    case 319438:
    {
        returnValue = F("Vierbuchen-Sträßchen");
        break;
    }
    case 319439:
    {
        returnValue = F("Vierbuchenstr.");
        break;
    }
    case 319440:
    {
        returnValue = F("Vierburgenstr.");
        break;
    }
    case 319441:
    {
        returnValue = F("Vierburgenweg");
        break;
    }
    case 319442:
    {
        returnValue = F("Vierburgweg");
        break;
    }
    case 319443:
    {
        returnValue = F("Vierbühlstr.");
        break;
    }
    case 319444:
    {
        returnValue = F("Vierder Weg");
        break;
    }
    case 319445:
    {
        returnValue = F("Viereck");
        break;
    }
    case 319446:
    {
        returnValue = F("Viereckmühlstr.");
        break;
    }
    case 319447:
    {
        returnValue = F("Viereckremise");
        break;
    }
    case 319448:
    {
        returnValue = F("Viereckweg");
        break;
    }
    case 319449:
    {
        returnValue = F("Vieregge");
        break;
    }
    case 319450:
    {
        returnValue = F("Viereggenhof");
        break;
    }
    case 319451:
    {
        returnValue = F("Viereggenkamp");
        break;
    }
    case 319452:
    {
        returnValue = F("Viereggenweg");
        break;
    }
    case 319453:
    {
        returnValue = F("Viereichenallee");
        break;
    }
    case 319454:
    {
        returnValue = F("Viereichenhöhe");
        break;
    }
    case 319455:
    {
        returnValue = F("Viereichenweg");
        break;
    }
    case 319456:
    {
        returnValue = F("Viereicher Weg");
        break;
    }
    case 319457:
    {
        returnValue = F("Vierenbachsweg");
        break;
    }
    case 319458:
    {
        returnValue = F("Vierenhöfen");
        break;
    }
    case 319459:
    {
        returnValue = F("Vierenstr.");
        break;
    }
    case 319460:
    {
        returnValue = F("Vierenstücken");
        break;
    }
    case 319461:
    {
        returnValue = F("Vierenstückenweg");
        break;
    }
    case 319462:
    {
        returnValue = F("Vierenweg");
        break;
    }
    case 319463:
    {
        returnValue = F("Vierer Weg");
        break;
    }
    case 319464:
    {
        returnValue = F("Viererblock");
        break;
    }
    case 319465:
    {
        returnValue = F("Viererspitzstr.");
        break;
    }
    case 319466:
    {
        returnValue = F("Viererstr.");
        break;
    }
    case 319467:
    {
        returnValue = F("Viererweg");
        break;
    }
    case 319468:
    {
        returnValue = F("Vierether Str.");
        break;
    }
    case 319469:
    {
        returnValue = F("Viergesellweg");
        break;
    }
    case 319470:
    {
        returnValue = F("Viergewerkerstr.");
        break;
    }
    case 319471:
    {
        returnValue = F("Viergiebelweg");
        break;
    }
    case 319472:
    {
        returnValue = F("Viergärt");
        break;
    }
    case 319473:
    {
        returnValue = F("Viergärten");
        break;
    }
    case 319474:
    {
        returnValue = F("Vierhandbank");
        break;
    }
    case 319475:
    {
        returnValue = F("Vierhaupterstr.");
        break;
    }
    case 319476:
    {
        returnValue = F("Vierhausen");
        break;
    }
    case 319477:
    {
        returnValue = F("Vierhausendorf");
        break;
    }
    case 319478:
    {
        returnValue = F("Vierhauser Str.");
        break;
    }
    case 319479:
    {
        returnValue = F("Vierhaushellmer");
        break;
    }
    case 319480:
    {
        returnValue = F("Vierhausstr.");
        break;
    }
    case 319481:
    {
        returnValue = F("Vierheiligstr.");
        break;
    }
    case 319482:
    {
        returnValue = F("Vierherren");
        break;
    }
    case 319483:
    {
        returnValue = F("Vierherrenwald");
        break;
    }
    case 319484:
    {
        returnValue = F("Vierherrnsteinschneise");
        break;
    }
    case 319485:
    {
        returnValue = F("Vierhufenstr.");
        break;
    }
    case 319486:
    {
        returnValue = F("Vierhufenweg");
        break;
    }
    case 319487:
    {
        returnValue = F("Vierhusen");
        break;
    }
    case 319488:
    {
        returnValue = F("Vierhäuser");
        break;
    }
    case 319489:
    {
        returnValue = F("Vierhäuser Str.");
        break;
    }
    case 319490:
    {
        returnValue = F("Vierhäusergasse");
        break;
    }
    case 319491:
    {
        returnValue = F("Vierhäuserweg");
        break;
    }
    case 319492:
    {
        returnValue = F("Vierhöf");
        break;
    }
    case 319493:
    {
        returnValue = F("Vierhöfen");
        break;
    }
    case 319494:
    {
        returnValue = F("Vierhöfener Str.");
        break;
    }
    case 319495:
    {
        returnValue = F("Vierhöfener Weg");
        break;
    }
    case 319496:
    {
        returnValue = F("Vierhörn");
        break;
    }
    case 319497:
    {
        returnValue = F("Vierhüttenweg");
        break;
    }
    case 319498:
    {
        returnValue = F("Vieringhausen");
        break;
    }
    case 319499:
    {
        returnValue = F("Vieritzer Schäferei");
        break;
    }
    case 319500:
    {
        returnValue = F("Vierjahreszeiten");
        break;
    }
    case 319501:
    {
        returnValue = F("Vierkamp");
        break;
    }
    case 319502:
    {
        returnValue = F("Vierkandtweg");
        break;
    }
    case 319503:
    {
        returnValue = F("Vierkantendamm");
        break;
    }
    case 319504:
    {
        returnValue = F("Vierkaten");
        break;
    }
    case 319505:
    {
        returnValue = F("Vierkirchener Str.");
        break;
    }
    case 319506:
    {
        returnValue = F("Vierkotten");
        break;
    }
    case 319507:
    {
        returnValue = F("Vierkotter Feld");
        break;
    }
    case 319508:
    {
        returnValue = F("Vierlandenstr.");
        break;
    }
    case 319509:
    {
        returnValue = F("Vierlensteinweg");
        break;
    }
    case 319510:
    {
        returnValue = F("Vierlinden");
        break;
    }
    case 319511:
    {
        returnValue = F("Vierlindenhof");
        break;
    }
    case 319512:
    {
        returnValue = F("Vierlindenweg");
        break;
    }
    case 319513:
    {
        returnValue = F("Vierlingstr.");
        break;
    }
    case 319514:
    {
        returnValue = F("Vierländereck");
        break;
    }
    case 319515:
    {
        returnValue = F("Viermalterweg");
        break;
    }
    case 319516:
    {
        returnValue = F("Viermorgen");
        break;
    }
    case 319517:
    {
        returnValue = F("Viermorgenstr.");
        break;
    }
    case 319518:
    {
        returnValue = F("Viermorgenweg");
        break;
    }
    case 319519:
    {
        returnValue = F("Viermännerhöfe");
        break;
    }
    case 319520:
    {
        returnValue = F("Viermärker Schneise");
        break;
    }
    case 319521:
    {
        returnValue = F("Viermärker Weg");
        break;
    }
    case 319522:
    {
        returnValue = F("Viermärkerweg");
        break;
    }
    case 319523:
    {
        returnValue = F("Viermühlenweg");
        break;
    }
    case 319524:
    {
        returnValue = F("Viermündener Weg");
        break;
    }
    case 319525:
    {
        returnValue = F("Viernauer Str.");
        break;
    }
    case 319526:
    {
        returnValue = F("Viernauer Weg");
        break;
    }
    case 319527:
    {
        returnValue = F("Vierngrund");
        break;
    }
    case 319528:
    {
        returnValue = F("Viernheimer Str.");
        break;
    }
    case 319529:
    {
        returnValue = F("Viernheimer Weg");
        break;
    }
    case 319530:
    {
        returnValue = F("Vierordtstaffel");
        break;
    }
    case 319531:
    {
        returnValue = F("Vierordtstr.");
        break;
    }
    case 319532:
    {
        returnValue = F("Vierordtweg");
        break;
    }
    case 319533:
    {
        returnValue = F("Vierower Allee");
        break;
    }
    case 319534:
    {
        returnValue = F("Vierower Wende");
        break;
    }
    case 319535:
    {
        returnValue = F("Vierowweg");
        break;
    }
    case 319536:
    {
        returnValue = F("Vierpaß");
        break;
    }
    case 319537:
    {
        returnValue = F("Vierradener Chaussee");
        break;
    }
    case 319538:
    {
        returnValue = F("Vierradener Platz");
        break;
    }
    case 319539:
    {
        returnValue = F("Vierradweg");
        break;
    }
    case 319540:
    {
        returnValue = F("Vierruthendamm");
        break;
    }
    case 319541:
    {
        returnValue = F("Vierrückenweg");
        break;
    }
    case 319542:
    {
        returnValue = F("Viersbach");
        break;
    }
    case 319543:
    {
        returnValue = F("Vierschauer Str.");
        break;
    }
    case 319544:
    {
        returnValue = F("Vierschauer Weg");
        break;
    }
    case 319545:
    {
        returnValue = F("Vierschillingsberg");
        break;
    }
    case 319546:
    {
        returnValue = F("Vierschnedenweg");
        break;
    }
    case 319547:
    {
        returnValue = F("Vierseenblick");
        break;
    }
    case 319548:
    {
        returnValue = F("Vierseineweg");
        break;
    }
    case 319549:
    {
        returnValue = F("Vierseller");
        break;
    }
    case 319550:
    {
        returnValue = F("Viersener Allee");
        break;
    }
    case 319551:
    {
        returnValue = F("Viersener Str.");
        break;
    }
    case 319552:
    {
        returnValue = F("Viersener Weg");
        break;
    }
    case 319553:
    {
        returnValue = F("Viersstr.");
        break;
    }
    case 319554:
    {
        returnValue = F("Viersteinweg");
        break;
    }
    case 319555:
    {
        returnValue = F("Vierstücken");
        break;
    }
    case 319556:
    {
        returnValue = F("Viert");
        break;
    }
    case 319557:
    {
        returnValue = F("Vierte");
        break;
    }
    case 319558:
    {
        returnValue = F("Vierte Str.");
        break;
    }
    case 319559:
    {
        returnValue = F("Viertel");
        break;
    }
    case 319560:
    {
        returnValue = F("Viertelbachstr.");
        break;
    }
    case 319561:
    {
        returnValue = F("Viertelchen");
        break;
    }
    case 319562:
    {
        returnValue = F("Viertelesweg");
        break;
    }
    case 319563:
    {
        returnValue = F("Viertelhofweg");
        break;
    }
    case 319564:
    {
        returnValue = F("Viertelkamp");
        break;
    }
    case 319565:
    {
        returnValue = F("Viertellandsweg");
        break;
    }
    case 319566:
    {
        returnValue = F("Viertelle");
        break;
    }
    case 319567:
    {
        returnValue = F("Vierteln");
        break;
    }
    case 319568:
    {
        returnValue = F("Viertelsheide");
        break;
    }
    case 319569:
    {
        returnValue = F("Viertelsheideweg");
        break;
    }
    case 319570:
    {
        returnValue = F("Viertelshof");
        break;
    }
    case 319571:
    {
        returnValue = F("Viertelsiedlung");
        break;
    }
    case 319572:
    {
        returnValue = F("Viertelsteige");
        break;
    }
    case 319573:
    {
        returnValue = F("Viertelstr.");
        break;
    }
    case 319574:
    {
        returnValue = F("Viertelstundendamm");
        break;
    }
    case 319575:
    {
        returnValue = F("Viertelsweg");
        break;
    }
    case 319576:
    {
        returnValue = F("Viertelweg");
        break;
    }
    case 319577:
    {
        returnValue = F("Viertelwegsiedlung");
        break;
    }
    case 319578:
    {
        returnValue = F("Vierter Querweg");
        break;
    }
    case 319579:
    {
        returnValue = F("Viertes Quergäßchen");
        break;
    }
    case 319580:
    {
        returnValue = F("Vierth");
        break;
    }
    case 319581:
    {
        returnValue = F("Vierthauen");
        break;
    }
    case 319582:
    {
        returnValue = F("Vierthmoorweg");
        break;
    }
    case 319583:
    {
        returnValue = F("Vierthstr.");
        break;
    }
    case 319584:
    {
        returnValue = F("Viertkoppel");
        break;
    }
    case 319585:
    {
        returnValue = F("Viertling");
        break;
    }
    case 319586:
    {
        returnValue = F("Viertshöhe");
        break;
    }
    case 319587:
    {
        returnValue = F("Viertweg");
        break;
    }
    case 319588:
    {
        returnValue = F("Vierwaldstätter Str.");
        break;
    }
    case 319589:
    {
        returnValue = F("Vierweg");
        break;
    }
    case 319590:
    {
        returnValue = F("Vierwege");
        break;
    }
    case 319591:
    {
        returnValue = F("Vierweidenweg");
        break;
    }
    case 319592:
    {
        returnValue = F("Vierwenden");
        break;
    }
    case 319593:
    {
        returnValue = F("Vierwinden");
        break;
    }
    case 319594:
    {
        returnValue = F("Vierwindener Str.");
        break;
    }
    case 319595:
    {
        returnValue = F("Vierwindenhöhe");
        break;
    }
    case 319596:
    {
        returnValue = F("Vierwindenweg");
        break;
    }
    case 319597:
    {
        returnValue = F("Vierzechenblick");
        break;
    }
    case 319598:
    {
        returnValue = F("Vierzehn Eichen");
        break;
    }
    case 319599:
    {
        returnValue = F("Vierzehn Morgen");
        break;
    }
    case 319600:
    {
        returnValue = F("Vierzehn Nothelferweg");
        break;
    }
    case 319601:
    {
        returnValue = F("Vierzehn-Bäume-Weg");
        break;
    }
    case 319602:
    {
        returnValue = F("Vierzehn-Nothelfer-Str.");
        break;
    }
    case 319603:
    {
        returnValue = F("Vierzehn-Nothelfer-Weg");
        break;
    }
    case 319604:
    {
        returnValue = F("Vierzehner Reihe");
        break;
    }
    case 319605:
    {
        returnValue = F("Vierzehner Weg");
        break;
    }
    case 319606:
    {
        returnValue = F("Vierzehnheiligen");
        break;
    }
    case 319607:
    {
        returnValue = F("Vierzehnheiligener Str.");
        break;
    }
    case 319608:
    {
        returnValue = F("Vierzehnheiligenweg");
        break;
    }
    case 319609:
    {
        returnValue = F("Vierzehnmorgen");
        break;
    }
    case 319610:
    {
        returnValue = F("Vierziegstholzweg");
        break;
    }
    case 319611:
    {
        returnValue = F("Vierzig-Acker-Weg");
        break;
    }
    case 319612:
    {
        returnValue = F("Vierzigacker");
        break;
    }
    case 319613:
    {
        returnValue = F("Vierzigmannstr.");
        break;
    }
    case 319614:
    {
        returnValue = F("Vierzonstr.");
        break;
    }
    case 319615:
    {
        returnValue = F("Vieschstr.");
        break;
    }
    case 319616:
    {
        returnValue = F("Viesebecker Str.");
        break;
    }
    case 319617:
    {
        returnValue = F("Viesecker Str.");
        break;
    }
    case 319618:
    {
        returnValue = F("Viesecker Weg");
        break;
    }
    case 319619:
    {
        returnValue = F("Viesekenriede");
        break;
    }
    case 319620:
    {
        returnValue = F("Vieselbacher Str.");
        break;
    }
    case 319621:
    {
        returnValue = F("Vieselbacher Weg");
        break;
    }
    case 319622:
    {
        returnValue = F("Vieselerhofstr.");
        break;
    }
    case 319623:
    {
        returnValue = F("Vieselmanns Ried");
        break;
    }
    case 319624:
    {
        returnValue = F("Viesener Dorfstr.");
        break;
    }
    case 319625:
    {
        returnValue = F("Viesener Str.");
        break;
    }
    case 319626:
    {
        returnValue = F("Viesener Weg");
        break;
    }
    case 319627:
    {
        returnValue = F("Viesenhäuserhof");
        break;
    }
    case 319628:
    {
        returnValue = F("Viessmannstr.");
        break;
    }
    case 319629:
    {
        returnValue = F("Viet");
        break;
    }
    case 319630:
    {
        returnValue = F("Vietegasse");
        break;
    }
    case 319631:
    {
        returnValue = F("Vietendell");
        break;
    }
    case 319632:
    {
        returnValue = F("Vietenfuhr");
        break;
    }
    case 319633:
    {
        returnValue = F("Vietenheide");
        break;
    }
    case 319634:
    {
        returnValue = F("Vietenhöhe");
        break;
    }
    case 319635:
    {
        returnValue = F("Vietenstr.");
        break;
    }
    case 319636:
    {
        returnValue = F("Vietenweg");
        break;
    }
    case 319637:
    {
        returnValue = F("Viethhof");
        break;
    }
    case 319638:
    {
        returnValue = F("Viethstr.");
        break;
    }
    case 319639:
    {
        returnValue = F("Viethweg");
        break;
    }
    case 319640:
    {
        returnValue = F("Vietingshof");
        break;
    }
    case 319641:
    {
        returnValue = F("Vietingstr.");
        break;
    }
    case 319642:
    {
        returnValue = F("Vietlipper Damm");
        break;
    }
    case 319643:
    {
        returnValue = F("Vietlipper Dorfstr.");
        break;
    }
    case 319644:
    {
        returnValue = F("Vietlübber Chaussee");
        break;
    }
    case 319645:
    {
        returnValue = F("Vietlübber Str.");
        break;
    }
    case 319646:
    {
        returnValue = F("Vietmannsdorfer Str.");
        break;
    }
    case 319647:
    {
        returnValue = F("Vietnam-Sikahirsche");
        break;
    }
    case 319648:
    {
        returnValue = F("Vietnamesischer Garten");
        break;
    }
    case 319649:
    {
        returnValue = F("Vietorstr.");
        break;
    }
    case 319650:
    {
        returnValue = F("Vietow");
        break;
    }
    case 319651:
    {
        returnValue = F("Vietower Weg");
        break;
    }
    case 319652:
    {
        returnValue = F("Vietschower Str.");
        break;
    }
    case 319653:
    {
        returnValue = F("Vietschower Weg");
        break;
    }
    case 319654:
    {
        returnValue = F("Vietsfeld");
        break;
    }
    case 319655:
    {
        returnValue = F("Vietsgasse");
        break;
    }
    case 319656:
    {
        returnValue = F("Vietsmoorweg");
        break;
    }
    case 319657:
    {
        returnValue = F("Vietstieg");
        break;
    }
    case 319658:
    {
        returnValue = F("Vietzen Nr.");
        break;
    }
    case 319659:
    {
        returnValue = F("Vietzener Str.");
        break;
    }
    case 319660:
    {
        returnValue = F("Vietzer Str.");
        break;
    }
    case 319661:
    {
        returnValue = F("Vietznitzer Str.");
        break;
    }
    case 319662:
    {
        returnValue = F("Vietznitzer Weg");
        break;
    }
    case 319663:
    {
        returnValue = F("Vieux-Condé-Str.");
        break;
    }
    case 319664:
    {
        returnValue = F("Vieux-Thann-Ring");
        break;
    }
    case 319665:
    {
        returnValue = F("Vieux-Thann-Str.");
        break;
    }
    case 319666:
    {
        returnValue = F("Vieux-Thann-Weg");
        break;
    }
    case 319667:
    {
        returnValue = F("Viewegs Garten");
        break;
    }
    case 319668:
    {
        returnValue = F("Viewegstr.");
        break;
    }
    case 319669:
    {
        returnValue = F("Viezener Str.");
        break;
    }
    case 319670:
    {
        returnValue = F("Viezener Weg");
        break;
    }
    case 319671:
    {
        returnValue = F("Viezer Sandweg");
        break;
    }
    case 319672:
    {
        returnValue = F("Viezer Weg");
        break;
    }
    case 319673:
    {
        returnValue = F("Viezstr.");
        break;
    }
    case 319674:
    {
        returnValue = F("Viggens Wiese");
        break;
    }
    case 319675:
    {
        returnValue = F("Vigilarihaldeweg");
        break;
    }
    case 319676:
    {
        returnValue = F("Vigilienstr.");
        break;
    }
    case 319677:
    {
        returnValue = F("Vigneulles Str.");
        break;
    }
    case 319678:
    {
        returnValue = F("Vigo-di-Fassa-Platz");
        break;
    }
    case 319679:
    {
        returnValue = F("Vigölensoll");
        break;
    }
    case 319680:
    {
        returnValue = F("Viitasaari Weg");
        break;
    }
    case 319681:
    {
        returnValue = F("Vikar Theodor Göbel-Weg");
        break;
    }
    case 319682:
    {
        returnValue = F("Vikar-Entrup-Str.");
        break;
    }
    case 319683:
    {
        returnValue = F("Vikar-Fuest-Weg");
        break;
    }
    case 319684:
    {
        returnValue = F("Vikar-Golling-Str.");
        break;
    }
    case 319685:
    {
        returnValue = F("Vikar-Husmann-Str.");
        break;
    }
    case 319686:
    {
        returnValue = F("Vikar-Kleffmann-Weg");
        break;
    }
    case 319687:
    {
        returnValue = F("Vikar-Klein-Str.");
        break;
    }
    case 319688:
    {
        returnValue = F("Vikar-Klumpe-Str.");
        break;
    }
    case 319689:
    {
        returnValue = F("Vikar-Michels-Weg");
        break;
    }
    case 319690:
    {
        returnValue = F("Vikar-Schumacher-Str.");
        break;
    }
    case 319691:
    {
        returnValue = F("Vikar-Tümler-Str.");
        break;
    }
    case 319692:
    {
        returnValue = F("Vikar-Winkelmann-Str.");
        break;
    }
    case 319693:
    {
        returnValue = F("Vikar-Wächter-Weg");
        break;
    }
    case 319694:
    {
        returnValue = F("Vikariatsgarten");
        break;
    }
    case 319695:
    {
        returnValue = F("Vikariatsgasse");
        break;
    }
    case 319696:
    {
        returnValue = F("Vikariegasse");
        break;
    }
    case 319697:
    {
        returnValue = F("Vikarien-Diek");
        break;
    }
    case 319698:
    {
        returnValue = F("Vikarienhof");
        break;
    }
    case 319699:
    {
        returnValue = F("Vikarienstr.");
        break;
    }
    case 319700:
    {
        returnValue = F("Vikarienweg");
        break;
    }
    case 319701:
    {
        returnValue = F("Vikariestr.");
        break;
    }
    case 319702:
    {
        returnValue = F("Vikarieweg");
        break;
    }
    case 319703:
    {
        returnValue = F("Vikars Gärten");
        break;
    }
    case 319704:
    {
        returnValue = F("Vikarsbusch");
        break;
    }
    case 319705:
    {
        returnValue = F("Vikarskamp");
        break;
    }
    case 319706:
    {
        returnValue = F("Vikarstr.");
        break;
    }
    case 319707:
    {
        returnValue = F("Vikarweg");
        break;
    }
    case 319708:
    {
        returnValue = F("Viktor-Akermann-Platz");
        break;
    }
    case 319709:
    {
        returnValue = F("Viktor-Becker-Weg");
        break;
    }
    case 319710:
    {
        returnValue = F("Viktor-Blüthgen-Str.");
        break;
    }
    case 319711:
    {
        returnValue = F("Viktor-Brunner-Str.");
        break;
    }
    case 319712:
    {
        returnValue = F("Viktor-Böhmert-Weg");
        break;
    }
    case 319713:
    {
        returnValue = F("Viktor-Eder-Str.");
        break;
    }
    case 319714:
    {
        returnValue = F("Viktor-Frankl-Str.");
        break;
    }
    case 319715:
    {
        returnValue = F("Viktor-Heger-Str.");
        break;
    }
    case 319716:
    {
        returnValue = F("Viktor-Hoeth-Str.");
        break;
    }
    case 319717:
    {
        returnValue = F("Viktor-Hugo-Weg");
        break;
    }
    case 319718:
    {
        returnValue = F("Viktor-Jakubowicz-Str.");
        break;
    }
    case 319719:
    {
        returnValue = F("Viktor-Koch-Str.");
        break;
    }
    case 319720:
    {
        returnValue = F("Viktor-Kollefrath-Str.");
        break;
    }
    case 319721:
    {
        returnValue = F("Viktor-Köchl-Weg");
        break;
    }
    case 319722:
    {
        returnValue = F("Viktor-Launay-Weg");
        break;
    }
    case 319723:
    {
        returnValue = F("Viktor-Maier-Str.");
        break;
    }
    case 319724:
    {
        returnValue = F("Viktor-Merkle-Str.");
        break;
    }
    case 319725:
    {
        returnValue = F("Viktor-Meyer-Str.");
        break;
    }
    case 319726:
    {
        returnValue = F("Viktor-Przybilla-Str.");
        break;
    }
    case 319727:
    {
        returnValue = F("Viktor-Rabs-Str.");
        break;
    }
    case 319728:
    {
        returnValue = F("Viktor-Renner-Str.");
        break;
    }
    case 319729:
    {
        returnValue = F("Viktor-Renner-Weg");
        break;
    }
    case 319730:
    {
        returnValue = F("Viktor-Reuter-Str.");
        break;
    }
    case 319731:
    {
        returnValue = F("Viktor-Röper-Str.");
        break;
    }
    case 319732:
    {
        returnValue = F("Viktor-Scheffel-Str.");
        break;
    }
    case 319733:
    {
        returnValue = F("Viktor-Schnitzler-Str.");
        break;
    }
    case 319734:
    {
        returnValue = F("Viktor-Schroeder-Str.");
        break;
    }
    case 319735:
    {
        returnValue = F("Viktor-Schroeder-Weg");
        break;
    }
    case 319736:
    {
        returnValue = F("Viktor-Tesch-Allee");
        break;
    }
    case 319737:
    {
        returnValue = F("Viktor-Weiß-Str.");
        break;
    }
    case 319738:
    {
        returnValue = F("Viktor-Wildschütte-Str.");
        break;
    }
    case 319739:
    {
        returnValue = F("Viktor-von-Scheffel-Str.");
        break;
    }
    case 319740:
    {
        returnValue = F("Viktor-von-Scheffel-Weg");
        break;
    }
    case 319741:
    {
        returnValue = F("Viktor-von-Unruh-Str.");
        break;
    }
    case 319742:
    {
        returnValue = F("Viktoria Park");
        break;
    }
    case 319743:
    {
        returnValue = F("Viktoria Platz");
        break;
    }
    case 319744:
    {
        returnValue = F("Viktoria-Luise-Str.");
        break;
    }
    case 319745:
    {
        returnValue = F("Viktoria-Luise-Weg");
        break;
    }
    case 319746:
    {
        returnValue = F("Viktoria-Luisen-Str.");
        break;
    }
    case 319747:
    {
        returnValue = F("Viktoria-Melita-Anlage");
        break;
    }
    case 319748:
    {
        returnValue = F("Viktoria-Saffe-Weg");
        break;
    }
    case 319749:
    {
        returnValue = F("Viktoria-von-Baden-Str.");
        break;
    }
    case 319750:
    {
        returnValue = F("Viktoria-von-Butler-Str.");
        break;
    }
    case 319751:
    {
        returnValue = F("Viktoriaallee");
        break;
    }
    case 319752:
    {
        returnValue = F("Viktoriabergweg");
        break;
    }
    case 319753:
    {
        returnValue = F("Viktoriabrücke");
        break;
    }
    case 319754:
    {
        returnValue = F("Viktoriapassage");
        break;
    }
    case 319755:
    {
        returnValue = F("Viktoriaplatz");
        break;
    }
    case 319756:
    {
        returnValue = F("Viktoriaring");
        break;
    }
    case 319757:
    {
        returnValue = F("Viktorias Rosengarten");
        break;
    }
    case 319758:
    {
        returnValue = F("Viktoriastr.");
        break;
    }
    case 319759:
    {
        returnValue = F("Viktoriaweg");
        break;
    }
    case 319760:
    {
        returnValue = F("Viktorshöhe");
        break;
    }
    case 319761:
    {
        returnValue = F("Viktorshöher Fahrweg");
        break;
    }
    case 319762:
    {
        returnValue = F("Viktorshöher Weg");
        break;
    }
    case 319763:
    {
        returnValue = F("Viktorstr.");
        break;
    }
    case 319764:
    {
        returnValue = F("Viktorsweg");
        break;
    }
    case 319765:
    {
        returnValue = F("Viktorweg");
        break;
    }
    case 319766:
    {
        returnValue = F("Viktualienmarkt");
        break;
    }
    case 319767:
    {
        returnValue = F("Viktualienmarktpassage");
        break;
    }
    case 319768:
    {
        returnValue = F("Vikunjas");
        break;
    }
    case 319769:
    {
        returnValue = F("Vila-Verde-Str.");
        break;
    }
    case 319770:
    {
        returnValue = F("Vilbachgrund");
        break;
    }
    case 319771:
    {
        returnValue = F("Vilbeler Landstr.");
        break;
    }
    case 319772:
    {
        returnValue = F("Vilbeler Pfad");
        break;
    }
    case 319773:
    {
        returnValue = F("Vilbeler Str.");
        break;
    }
    case 319774:
    {
        returnValue = F("Vilbeler Weg");
        break;
    }
    case 319775:
    {
        returnValue = F("Vilchbander Str.");
        break;
    }
    case 319776:
    {
        returnValue = F("Vilchbänder Str.");
        break;
    }
    case 319777:
    {
        returnValue = F("Vilgertshofer Str.");
        break;
    }
    case 319778:
    {
        returnValue = F("Vilhelm-la-Cour-Weg");
        break;
    }
    case 319779:
    {
        returnValue = F("Vili-Viorel-Păun-Platz");
        break;
    }
    case 319780:
    {
        returnValue = F("Vilicher Str.");
        break;
    }
    case 319781:
    {
        returnValue = F("Vilinger Str.");
        break;
    }
    case 319782:
    {
        returnValue = F("Viljandiring");
        break;
    }
    case 319783:
    {
        returnValue = F("Vilkerather Str.");
        break;
    }
    case 319784:
    {
        returnValue = F("Vilkoofer Weg");
        break;
    }
    case 319785:
    {
        returnValue = F("Villa Abendruh");
        break;
    }
    case 319786:
    {
        returnValue = F("Villa Bergrat Stutz");
        break;
    }
    case 319787:
    {
        returnValue = F("Villa Diestel");
        break;
    }
    case 319788:
    {
        returnValue = F("Villa Eugenia Park");
        break;
    }
    case 319789:
    {
        returnValue = F("Villa Hermann Park");
        break;
    }
    case 319790:
    {
        returnValue = F("Villa Leuchtenberg");
        break;
    }
    case 319791:
    {
        returnValue = F("Villa Mühlberg");
        break;
    }
    case 319792:
    {
        returnValue = F("Villa Nordstern");
        break;
    }
    case 319793:
    {
        returnValue = F("Villa Rot");
        break;
    }
    case 319794:
    {
        returnValue = F("Villa Rustica");
        break;
    }
    case 319795:
    {
        returnValue = F("Villa Sachsen");
        break;
    }
    case 319796:
    {
        returnValue = F("Villa Vogelsang");
        break;
    }
    case 319797:
    {
        returnValue = F("Villa rustica");
        break;
    }
    case 319798:
    {
        returnValue = F("Villa-Bubenzer-Weg");
        break;
    }
    case 319799:
    {
        returnValue = F("Villaberg");
        break;
    }
    case 319800:
    {
        returnValue = F("Villacher Stiege");
        break;
    }
    case 319801:
    {
        returnValue = F("Villacher Str.");
        break;
    }
    case 319802:
    {
        returnValue = F("Villacher Weg");
        break;
    }
    case 319803:
    {
        returnValue = F("Villachstr.");
        break;
    }
    case 319804:
    {
        returnValue = F("Village");
        break;
    }
    case 319805:
    {
        returnValue = F("Village Square");
        break;
    }
    case 319806:
    {
        returnValue = F("Villanystr.");
        break;
    }
    case 319807:
    {
        returnValue = F("Villapark");
        break;
    }
    case 319808:
    {
        returnValue = F("Villar-Perosa-Str.");
        break;
    }
    case 319809:
    {
        returnValue = F("Villastr.");
        break;
    }
    case 319810:
    {
        returnValue = F("Villaweg");
        break;
    }
    case 319811:
    {
        returnValue = F("Villbacher Str.");
        break;
    }
    case 319812:
    {
        returnValue = F("Villbrooksweg");
        break;
    }
    case 319813:
    {
        returnValue = F("Villdobben");
        break;
    }
    case 319814:
    {
        returnValue = F("Villebrink");
        break;
    }
    case 319815:
    {
        returnValue = F("Villejuifer Str.");
        break;
    }
    case 319816:
    {
        returnValue = F("Villemombler Str.");
        break;
    }
    case 319817:
    {
        returnValue = F("Villenanlage mit Park");
        break;
    }
    case 319818:
    {
        returnValue = F("Villenauxer Str.");
        break;
    }
    case 319819:
    {
        returnValue = F("Villenave-d'Ornon-Platz");
        break;
    }
    case 319820:
    {
        returnValue = F("Villenbacher Str.");
        break;
    }
    case 319821:
    {
        returnValue = F("Villenbacher Weg");
        break;
    }
    case 319822:
    {
        returnValue = F("Villenbachstr.");
        break;
    }
    case 319823:
    {
        returnValue = F("Villenbergstr.");
        break;
    }
    case 319824:
    {
        returnValue = F("Villeneuve-la-Garenne-Str.");
        break;
    }
    case 319825:
    {
        returnValue = F("Villeneuve-lez-Avignon-Kreisel");
        break;
    }
    case 319826:
    {
        returnValue = F("Villeneuve-sur-Yonne-Str.");
        break;
    }
    case 319827:
    {
        returnValue = F("Villeneuver Str.");
        break;
    }
    case 319828:
    {
        returnValue = F("Villeneuvestr.");
        break;
    }
    case 319829:
    {
        returnValue = F("Villengang");
        break;
    }
    case 319830:
    {
        returnValue = F("Villengarten");
        break;
    }
    case 319831:
    {
        returnValue = F("Villengärten");
        break;
    }
    case 319832:
    {
        returnValue = F("Villenpromenade");
        break;
    }
    case 319833:
    {
        returnValue = F("Villenstr.");
        break;
    }
    case 319834:
    {
        returnValue = F("Villenstr. Nord");
        break;
    }
    case 319835:
    {
        returnValue = F("Villenstr. Süd");
        break;
    }
    case 319836:
    {
        returnValue = F("Villenweg");
        break;
    }
    case 319837:
    {
        returnValue = F("Villepintestr.");
        break;
    }
    case 319838:
    {
        returnValue = F("Villerberg");
        break;
    }
    case 319839:
    {
        returnValue = F("Villering");
        break;
    }
    case 319840:
    {
        returnValue = F("Villeroystr.");
        break;
    }
    case 319841:
    {
        returnValue = F("Villersbronn");
        break;
    }
    case 319842:
    {
        returnValue = F("Villersbronner Str.");
        break;
    }
    case 319843:
    {
        returnValue = F("Villerupter Str.");
        break;
    }
    case 319844:
    {
        returnValue = F("Villestr.");
        break;
    }
    case 319845:
    {
        returnValue = F("Villeweg");
        break;
    }
    case 319846:
    {
        returnValue = F("Villichgasse");
        break;
    }
    case 319847:
    {
        returnValue = F("Villierstr.");
        break;
    }
    case 319848:
    {
        returnValue = F("Villigster Str.");
        break;
    }
    case 319849:
    {
        returnValue = F("Villingenring");
        break;
    }
    case 319850:
    {
        returnValue = F("Villinger Park");
        break;
    }
    case 319851:
    {
        returnValue = F("Villinger Str.");
        break;
    }
    case 319852:
    {
        returnValue = F("Villinger Weg");
        break;
    }
    case 319853:
    {
        returnValue = F("Villinger-Ackerweg");
        break;
    }
    case 319854:
    {
        returnValue = F("Villingerstr.");
        break;
    }
    case 319855:
    {
        returnValue = F("Villiper Allee");
        break;
    }
    case 319856:
    {
        returnValue = F("Villiper Bachstr.");
        break;
    }
    case 319857:
    {
        returnValue = F("Villiper Hauptstr.");
        break;
    }
    case 319858:
    {
        returnValue = F("Villiper Kreuzgasse");
        break;
    }
    case 319859:
    {
        returnValue = F("Villiper Weg");
        break;
    }
    case 319860:
    {
        returnValue = F("Villkuhlenweg");
        break;
    }
    case 319861:
    {
        returnValue = F("Villmarer Pfad");
        break;
    }
    case 319862:
    {
        returnValue = F("Villmarer Str.");
        break;
    }
    case 319863:
    {
        returnValue = F("Villmatstr.");
        break;
    }
    case 319864:
    {
        returnValue = F("Villstr.");
        break;
    }
    case 319865:
    {
        returnValue = F("Vilmar Weg");
        break;
    }
    case 319866:
    {
        returnValue = F("Vilmarstr.");
        break;
    }
    case 319867:
    {
        returnValue = F("Vilmer Weg");
        break;
    }
    case 319868:
    {
        returnValue = F("Vilmnitzer Dorfstr.");
        break;
    }
    case 319869:
    {
        returnValue = F("Vilmnitzer Weg");
        break;
    }
    case 319870:
    {
        returnValue = F("Vilmring");
        break;
    }
    case 319871:
    {
        returnValue = F("Vilmstr.");
        break;
    }
    case 319872:
    {
        returnValue = F("Vilniuser Str.");
        break;
    }
    case 319873:
    {
        returnValue = F("Vilniusstr.");
        break;
    }
    case 319874:
    {
        returnValue = F("Vilniusweg");
        break;
    }
    case 319875:
    {
        returnValue = F("Vils");
        break;
    }
    case 319876:
    {
        returnValue = F("Vilsanger");
        break;
    }
    case 319877:
    {
        returnValue = F("Vilsauen");
        break;
    }
    case 319878:
    {
        returnValue = F("Vilsbiburger Str.");
        break;
    }
    case 319879:
    {
        returnValue = F("Vilsblick");
        break;
    }
    case 319880:
    {
        returnValue = F("Vilsbrücke ohne Geländer");
        break;
    }
    case 319881:
    {
        returnValue = F("Vilsecker Str.");
        break;
    }
    case 319882:
    {
        returnValue = F("Vilsendorfer Str.");
        break;
    }
    case 319883:
    {
        returnValue = F("Vilsener Str.");
        break;
    }
    case 319884:
    {
        returnValue = F("Vilser Schulstr.");
        break;
    }
    case 319885:
    {
        returnValue = F("Vilser Str.");
        break;
    }
    case 319886:
    {
        returnValue = F("Vilser Weg");
        break;
    }
    case 319887:
    {
        returnValue = F("Vilsersteige");
        break;
    }
    case 319888:
    {
        returnValue = F("Vilserstr.");
        break;
    }
    case 319889:
    {
        returnValue = F("Vilsfeldstr.");
        break;
    }
    case 319890:
    {
        returnValue = F("Vilsgasse");
        break;
    }
    case 319891:
    {
        returnValue = F("Vilsheimer Str.");
        break;
    }
    case 319892:
    {
        returnValue = F("Vilshofener Str.");
        break;
    }
    case 319893:
    {
        returnValue = F("Vilshoven");
        break;
    }
    case 319894:
    {
        returnValue = F("Vilsinger Str.");
        break;
    }
    case 319895:
    {
        returnValue = F("Vilskaul");
        break;
    }
    case 319896:
    {
        returnValue = F("Vilsmeiergasse");
        break;
    }
    case 319897:
    {
        returnValue = F("Vilssteg");
        break;
    }
    case 319898:
    {
        returnValue = F("Vilsstr.");
        break;
    }
    case 319899:
    {
        returnValue = F("Vilstalstr.");
        break;
    }
    case 319900:
    {
        returnValue = F("Vilstalwiesenweg");
        break;
    }
    case 319901:
    {
        returnValue = F("Vilsvorstadt");
        break;
    }
    case 319902:
    {
        returnValue = F("Vilsweg");
        break;
    }
    case 319903:
    {
        returnValue = F("Vilvenicher Str.");
        break;
    }
    case 319904:
    {
        returnValue = F("Vilvenicher Weg");
        break;
    }
    case 319905:
    {
        returnValue = F("Vilvoorder Str.");
        break;
    }
    case 319906:
    {
        returnValue = F("Vilzing");
        break;
    }
    case 319907:
    {
        returnValue = F("Vilzinger Str.");
        break;
    }
    case 319908:
    {
        returnValue = F("Vimbucher Str.");
        break;
    }
    case 319909:
    {
        returnValue = F("Vimoutiersstr.");
        break;
    }
    case 319910:
    {
        returnValue = F("Vimystr.");
        break;
    }
    case 319911:
    {
        returnValue = F("Vincennesstr.");
        break;
    }
    case 319912:
    {
        returnValue = F("Vincent-Luebeck-Str.");
        break;
    }
    case 319913:
    {
        returnValue = F("Vincent-Lübeck-Str.");
        break;
    }
    case 319914:
    {
        returnValue = F("Vincent-van-Gogh-Ring");
        break;
    }
    case 319915:
    {
        returnValue = F("Vincent-van-Gogh-Str.");
        break;
    }
    case 319916:
    {
        returnValue = F("Vincentistaffeln");
        break;
    }
    case 319917:
    {
        returnValue = F("Vincentistr.");
        break;
    }
    case 319918:
    {
        returnValue = F("Vincentiusgasse");
        break;
    }
    case 319919:
    {
        returnValue = F("Vincentiusplatz");
        break;
    }
    case 319920:
    {
        returnValue = F("Vincentiusstr.");
        break;
    }
    case 319921:
    {
        returnValue = F("Vincentstr.");
        break;
    }
    case 319922:
    {
        returnValue = F("Vincenz-Frigger-Str.");
        break;
    }
    case 319923:
    {
        returnValue = F("Vincenz-Prießnitz-Str.");
        break;
    }
    case 319924:
    {
        returnValue = F("Vincenz-Statz-Str.");
        break;
    }
    case 319925:
    {
        returnValue = F("Vincenz-Wiederholt-Str.");
        break;
    }
    case 319926:
    {
        returnValue = F("Vincenz-Zahn-Weg");
        break;
    }
    case 319927:
    {
        returnValue = F("Vincenz-von-Paul-Str.");
        break;
    }
    case 319928:
    {
        returnValue = F("Vincenzenbronner Hauptstr.");
        break;
    }
    case 319929:
    {
        returnValue = F("Vincenzstr.");
        break;
    }
    case 319930:
    {
        returnValue = F("Vincergasse");
        break;
    }
    case 319931:
    {
        returnValue = F("Vinckehof");
        break;
    }
    case 319932:
    {
        returnValue = F("Vinckenaue");
        break;
    }
    case 319933:
    {
        returnValue = F("Vinckenpützer Weg");
        break;
    }
    case 319934:
    {
        returnValue = F("Vinckenweg");
        break;
    }
    case 319935:
    {
        returnValue = F("Vinckeplatz");
        break;
    }
    case 319936:
    {
        returnValue = F("Vinckestr.");
        break;
    }
    case 319937:
    {
        returnValue = F("Vincketunnel");
        break;
    }
    case 319938:
    {
        returnValue = F("Vinckeufer");
        break;
    }
    case 319939:
    {
        returnValue = F("Vinckeweg");
        break;
    }
    case 319940:
    {
        returnValue = F("Vindelikerstr.");
        break;
    }
    case 319941:
    {
        returnValue = F("Vindelikerweg");
        break;
    }
    case 319942:
    {
        returnValue = F("Vindonk");
        break;
    }
    case 319943:
    {
        returnValue = F("Vindorfer Rund");
        break;
    }
    case 319944:
    {
        returnValue = F("Vinetaplatz");
        break;
    }
    case 319945:
    {
        returnValue = F("Vinetastr.");
        break;
    }
    case 319946:
    {
        returnValue = F("Vinetaweg");
        break;
    }
    case 319947:
    {
        returnValue = F("Vinger Str.");
        break;
    }
    case 319948:
    {
        returnValue = F("Vinger Weg");
        break;
    }
    case 319949:
    {
        returnValue = F("Vingerstr.");
        break;
    }
    case 319950:
    {
        returnValue = F("Vingster Ring");
        break;
    }
    case 319951:
    {
        returnValue = F("Vingåkerweg");
        break;
    }
    case 319952:
    {
        returnValue = F("Vinhage");
        break;
    }
    case 319953:
    {
        returnValue = F("Vinhovenplatz");
        break;
    }
    case 319954:
    {
        returnValue = F("Vinhovenweg");
        break;
    }
    case 319955:
    {
        returnValue = F("Vinkelfeld");
        break;
    }
    case 319956:
    {
        returnValue = F("Vinkelgasse");
        break;
    }
    case 319957:
    {
        returnValue = F("Vinkenberg");
        break;
    }
    case 319958:
    {
        returnValue = F("Vinkenbergstr.");
        break;
    }
    case 319959:
    {
        returnValue = F("Vinkentwiete");
        break;
    }
    case 319960:
    {
        returnValue = F("Vinkestr.");
        break;
    }
    case 319961:
    {
        returnValue = F("Vinklöther Mark");
        break;
    }
    case 319962:
    {
        returnValue = F("Vinkrather Str.");
        break;
    }
    case 319963:
    {
        returnValue = F("Vinn");
        break;
    }
    case 319964:
    {
        returnValue = F("Vinnbrück");
        break;
    }
    case 319965:
    {
        returnValue = F("Vinnen-Kiärkhoff");
        break;
    }
    case 319966:
    {
        returnValue = F("Vinnen-Tor");
        break;
    }
    case 319967:
    {
        returnValue = F("Vinnenberger Heide");
        break;
    }
    case 319968:
    {
        returnValue = F("Vinnenberger Str.");
        break;
    }
    case 319969:
    {
        returnValue = F("Vinnenweg");
        break;
    }
    case 319970:
    {
        returnValue = F("Vinner Str.");
        break;
    }
    case 319971:
    {
        returnValue = F("Vinner Weg");
        break;
    }
    case 319972:
    {
        returnValue = F("Vinnerholzweg");
        break;
    }
    case 319973:
    {
        returnValue = F("Vinngrabenstr.");
        break;
    }
    case 319974:
    {
        returnValue = F("Vinnhagen");
        break;
    }
    case 319975:
    {
        returnValue = F("Vinnhorster Rathausplatz");
        break;
    }
    case 319976:
    {
        returnValue = F("Vinnhorster Str.");
        break;
    }
    case 319977:
    {
        returnValue = F("Vinnhorster Weg");
        break;
    }
    case 319978:
    {
        returnValue = F("Vinninger Str.");
        break;
    }
    case 319979:
    {
        returnValue = F("Vinnmannsweg");
        break;
    }
    case 319980:
    {
        returnValue = F("Vinnstr.");
        break;
    }
    case 319981:
    {
        returnValue = F("Vinnumer Landweg");
        break;
    }
    case 319982:
    {
        returnValue = F("Vinnumer Str.");
        break;
    }
    case 319983:
    {
        returnValue = F("Vinnweg");
        break;
    }
    case 319984:
    {
        returnValue = F("Vinsebecker Str.");
        break;
    }
    case 319985:
    {
        returnValue = F("Vinsebecker Weg");
        break;
    }
    case 319986:
    {
        returnValue = F("Vinsonstr.");
        break;
    }
    case 319987:
    {
        returnValue = F("Vinsterhof");
        break;
    }
    case 319988:
    {
        returnValue = F("Vinteln");
        break;
    }
    case 319989:
    {
        returnValue = F("Vinter Grenzweg");
        break;
    }
    case 319990:
    {
        returnValue = F("Vinter Str.");
        break;
    }
    case 319991:
    {
        returnValue = F("Vintloh-Ring");
        break;
    }
    case 319992:
    {
        returnValue = F("Vintlweg");
        break;
    }
    case 319993:
    {
        returnValue = F("Vintrup");
        break;
    }
    case 319994:
    {
        returnValue = F("Vintschgauer Str.");
        break;
    }
    case 319995:
    {
        returnValue = F("Vintschgaustr.");
        break;
    }
    case 319996:
    {
        returnValue = F("Vintzelbergstr.");
        break;
    }
    case 319997:
    {
        returnValue = F("Vinumstr.");
        break;
    }
    case 319998:
    {
        returnValue = F("Vinxeler Str.");
        break;
    }
    case 319999:
    {
        returnValue = F("Vinxtweg");
        break;
    }
    case 320000:
    {
        returnValue = F("Vinzelberger Str.");
        break;
    }
    case 320001:
    {
        returnValue = F("Vinzelberger Weg");
        break;
    }
    case 320002:
    {
        returnValue = F("Vinzentinerinnenweg");
        break;
    }
    case 320003:
    {
        returnValue = F("Vinzentiusgarten");
        break;
    }
    case 320004:
    {
        returnValue = F("Vinzentiusstr.");
        break;
    }
    case 320005:
    {
        returnValue = F("Vinzentiusweg");
        break;
    }
    case 320006:
    {
        returnValue = F("Vinzenz von Paul Weg");
        break;
    }
    case 320007:
    {
        returnValue = F("Vinzenz-Erath-Str.");
        break;
    }
    case 320008:
    {
        returnValue = F("Vinzenz-Feckter-Str.");
        break;
    }
    case 320009:
    {
        returnValue = F("Vinzenz-Goller-Str.");
        break;
    }
    case 320010:
    {
        returnValue = F("Vinzenz-Grewe-Str.");
        break;
    }
    case 320011:
    {
        returnValue = F("Vinzenz-Koch-Str.");
        break;
    }
    case 320012:
    {
        returnValue = F("Vinzenz-Krick-Str.");
        break;
    }
    case 320013:
    {
        returnValue = F("Vinzenz-Lachner-Str.");
        break;
    }
    case 320014:
    {
        returnValue = F("Vinzenz-Nagel-Str.");
        break;
    }
    case 320015:
    {
        returnValue = F("Vinzenz-Pallotti-Str.");
        break;
    }
    case 320016:
    {
        returnValue = F("Vinzenz-Palotti-Weg");
        break;
    }
    case 320017:
    {
        returnValue = F("Vinzenz-Rüfner-Str.");
        break;
    }
    case 320018:
    {
        returnValue = F("Vinzenz-Schüpfer-Str.");
        break;
    }
    case 320019:
    {
        returnValue = F("Vinzenz-Stroh-Weg");
        break;
    }
    case 320020:
    {
        returnValue = F("Vinzenz-Zahn-Str.");
        break;
    }
    case 320021:
    {
        returnValue = F("Vinzenz-von-Paul-Str.");
        break;
    }
    case 320022:
    {
        returnValue = F("Vinzenz-von-Paul-Weg");
        break;
    }
    case 320023:
    {
        returnValue = F("Vinzenz-wehner-Str.");
        break;
    }
    case 320024:
    {
        returnValue = F("Vinzenzallee");
        break;
    }
    case 320025:
    {
        returnValue = F("Vinzenzistr.");
        break;
    }
    case 320026:
    {
        returnValue = F("Vinzenziusstr.");
        break;
    }
    case 320027:
    {
        returnValue = F("Vinzenzplatz");
        break;
    }
    case 320028:
    {
        returnValue = F("Vinzenzstr.");
        break;
    }
    case 320029:
    {
        returnValue = F("Vinzenzweg");
        break;
    }
    case 320030:
    {
        returnValue = F("Vinzierer Str.");
        break;
    }
    case 320031:
    {
        returnValue = F("Vinzierstr.");
        break;
    }
    case 356552:
    {
        returnValue = F("v. Hammerstein-Weg");
        break;
    }
    case 356553:
    {
        returnValue = F("v. Welsbergstr.");
        break;
    }
    case 356554:
    {
        returnValue = F("v.-Transehe-Weg");
        break;
    }
    case 356555:
    {
        returnValue = F("v.Höveln-Gang");
        break;
    }
    case 356556:
    {
        returnValue = F("v.d. Heydeweg");
        break;
    }
    case 356557:
    {
        returnValue = F("van der Hopp-Schneise");
        break;
    }
    case 356558:
    {
        returnValue = F("van-Beethoven-Str.");
        break;
    }
    case 356559:
    {
        returnValue = F("van-Delden-Str.");
        break;
    }
    case 356560:
    {
        returnValue = F("van-Eyck-Str.");
        break;
    }
    case 356561:
    {
        returnValue = F("van-Gülpen-Str.");
        break;
    }
    case 356562:
    {
        returnValue = F("van-Kinsbergen-Ring");
        break;
    }
    case 356563:
    {
        returnValue = F("van-Oldeneel-Weg");
        break;
    }
    case 356564:
    {
        returnValue = F("van-Onna-Weg");
        break;
    }
    case 356565:
    {
        returnValue = F("van-Roden-Str.");
        break;
    }
    case 356566:
    {
        returnValue = F("van-den-Bergh-Str.");
        break;
    }
    case 356567:
    {
        returnValue = F("van-der-Reis-Weg");
        break;
    }
    case 356568:
    {
        returnValue = F("van-der-Renne-Allee");
        break;
    }
    case 356569:
    {
        returnValue = F("vauDe-Str.");
        break;
    }
    case 356570:
    {
        returnValue = F("verfallen");
        break;
    }
    case 356571:
    {
        returnValue = F("verl. Völklinger Str.");
        break;
    }
    case 356572:
    {
        returnValue = F("verlängerte Irchwitzer Str.");
        break;
    }
    case 356573:
    {
        returnValue = F("verlängerter Bohlweg");
        break;
    }
    case 356574:
    {
        returnValue = F("verwildert");
        break;
    }
    case 356575:
    {
        returnValue = F("via decumana dextra");
        break;
    }
    case 356576:
    {
        returnValue = F("via principalis");
        break;
    }
    case 356577:
    {
        returnValue = F("via quintana");
        break;
    }
    case 356578:
    {
        returnValue = F("via tiberiana");
        break;
    }
    case 356579:
    {
        returnValue = F("voetpad");
        break;
    }
    case 356580:
    {
        returnValue = F("vom Scheidt-Saalfeld-Weg");
        break;
    }
    case 356581:
    {
        returnValue = F("vom-Stein-Str.");
        break;
    }
    case 356582:
    {
        returnValue = F("von Arnim-Weg");
        break;
    }
    case 356583:
    {
        returnValue = F("von Brettreich-Str.");
        break;
    }
    case 356584:
    {
        returnValue = F("von Canstein-Str.");
        break;
    }
    case 356585:
    {
        returnValue = F("von Cöllen Weg");
        break;
    }
    case 356586:
    {
        returnValue = F("von Göler-Weg");
        break;
    }
    case 356587:
    {
        returnValue = F("von Rietberg Weg");
        break;
    }
    case 356588:
    {
        returnValue = F("von Rost-Str.");
        break;
    }
    case 356589:
    {
        returnValue = F("von Schwendler-Badeweg");
        break;
    }
    case 356590:
    {
        returnValue = F("von Schwendlerswege");
        break;
    }
    case 356591:
    {
        returnValue = F("von Stettenweg");
        break;
    }
    case 356592:
    {
        returnValue = F("von Treskow Pfad");
        break;
    }
    case 356593:
    {
        returnValue = F("von Trützschler-Str.");
        break;
    }
    case 356594:
    {
        returnValue = F("von Weber-Str.");
        break;
    }
    case 356595:
    {
        returnValue = F("von der Söhrebahntrasse zur grünen Mitte");
        break;
    }
    case 356596:
    {
        returnValue = F("von-Aberle-Str.");
        break;
    }
    case 356597:
    {
        returnValue = F("von-Andlaw-Str.");
        break;
    }
    case 356598:
    {
        returnValue = F("von-Arnim-Str.");
        break;
    }
    case 356599:
    {
        returnValue = F("von-Aufseß-Str.");
        break;
    }
    case 356600:
    {
        returnValue = F("von-Baack-Weg");
        break;
    }
    case 356601:
    {
        returnValue = F("von-Baldersheim-Str.");
        break;
    }
    case 356602:
    {
        returnValue = F("von-Ballo-Str.");
        break;
    }
    case 356603:
    {
        returnValue = F("von-Behring-Str.");
        break;
    }
    case 356604:
    {
        returnValue = F("von-Berlichingen-Str.");
        break;
    }
    case 356605:
    {
        returnValue = F("von-Bibra-Str.");
        break;
    }
    case 356606:
    {
        returnValue = F("von-Blumencron-Ring");
        break;
    }
    case 356607:
    {
        returnValue = F("von-Bodelschwingh-Str.");
        break;
    }
    case 356608:
    {
        returnValue = F("von-Bose-Str.");
        break;
    }
    case 356609:
    {
        returnValue = F("von-Braun-Str.");
        break;
    }
    case 356610:
    {
        returnValue = F("von-Brentano-Str.");
        break;
    }
    case 356611:
    {
        returnValue = F("von-Brentano-Weg");
        break;
    }
    case 356612:
    {
        returnValue = F("von-Buol-Weg");
        break;
    }
    case 356613:
    {
        returnValue = F("von-Busch-Hof");
        break;
    }
    case 356614:
    {
        returnValue = F("von-Büren-Str.");
        break;
    }
    case 356615:
    {
        returnValue = F("von-Büssing-Str.");
        break;
    }
    case 356616:
    {
        returnValue = F("von-Canitz-Str.");
        break;
    }
    case 356617:
    {
        returnValue = F("von-Colln-Str.");
        break;
    }
    case 356618:
    {
        returnValue = F("von-Dall'Armi-Weg");
        break;
    }
    case 356619:
    {
        returnValue = F("von-Delling-Str.");
        break;
    }
    case 356620:
    {
        returnValue = F("von-Deuring-Str.");
        break;
    }
    case 356621:
    {
        returnValue = F("von-Droste-Hülshoff-Str.");
        break;
    }
    case 356622:
    {
        returnValue = F("von-Dücker-Weg");
        break;
    }
    case 356623:
    {
        returnValue = F("von-Eichendorff-Str.");
        break;
    }
    case 356624:
    {
        returnValue = F("von-Erthal-Str.");
        break;
    }
    case 356625:
    {
        returnValue = F("von-Estorff-Str.");
        break;
    }
    case 356626:
    {
        returnValue = F("von-Estrees-Str.");
        break;
    }
    case 356627:
    {
        returnValue = F("von-Frese-Str.");
        break;
    }
    case 356628:
    {
        returnValue = F("von-Galen-Str.");
        break;
    }
    case 356629:
    {
        returnValue = F("von-Geuder-Str.");
        break;
    }
    case 356630:
    {
        returnValue = F("von-Gluck-Str.");
        break;
    }
    case 356631:
    {
        returnValue = F("von-Goethe-Str.");
        break;
    }
    case 356632:
    {
        returnValue = F("von-Großheim-Platz");
        break;
    }
    case 356633:
    {
        returnValue = F("von-Gumppenberg-Str.");
        break;
    }
    case 356634:
    {
        returnValue = F("von-Guttenberg-Str.");
        break;
    }
    case 356635:
    {
        returnValue = F("von-Guttenbergstr.");
        break;
    }
    case 356636:
    {
        returnValue = F("von-Hagen-Str.");
        break;
    }
    case 356637:
    {
        returnValue = F("von-Harff-Str.");
        break;
    }
    case 356638:
    {
        returnValue = F("von-Harnack-Str.");
        break;
    }
    case 356639:
    {
        returnValue = F("von-Harsch-Str.");
        break;
    }
    case 356640:
    {
        returnValue = F("von-Hassell-Str.");
        break;
    }
    case 356641:
    {
        returnValue = F("von-Hatzfeld-Str.");
        break;
    }
    case 356642:
    {
        returnValue = F("von-Helmholtz-Str.");
        break;
    }
    case 356643:
    {
        returnValue = F("von-Hindenburg-Str.");
        break;
    }
    case 356644:
    {
        returnValue = F("von-Hofe-Weg");
        break;
    }
    case 356645:
    {
        returnValue = F("von-Hornstein-Str.");
        break;
    }
    case 356646:
    {
        returnValue = F("von-Hutten-Str.");
        break;
    }
    case 356647:
    {
        returnValue = F("von-Hörmann-Str.");
        break;
    }
    case 356648:
    {
        returnValue = F("von-Kaulbach-Str.");
        break;
    }
    case 356649:
    {
        returnValue = F("von-Keitz-Str.");
        break;
    }
    case 356650:
    {
        returnValue = F("von-Kerckering-Weg");
        break;
    }
    case 356651:
    {
        returnValue = F("von-Ketteler-Str.");
        break;
    }
    case 356652:
    {
        returnValue = F("von-Klenze-Str.");
        break;
    }
    case 356653:
    {
        returnValue = F("von-Kling-Weg");
        break;
    }
    case 356654:
    {
        returnValue = F("von-Kobell-Str.");
        break;
    }
    case 356655:
    {
        returnValue = F("von-Korff-Str.");
        break;
    }
    case 356656:
    {
        returnValue = F("von-Kückelsheim-Weg");
        break;
    }
    case 356657:
    {
        returnValue = F("von-Langen-Rundweg");
        break;
    }
    case 356658:
    {
        returnValue = F("von-Langen-Str.");
        break;
    }
    case 356659:
    {
        returnValue = F("von-Laßberg-Str.");
        break;
    }
    case 356660:
    {
        returnValue = F("von-Liebig-Str.");
        break;
    }
    case 356661:
    {
        returnValue = F("von-Liebig-Weg");
        break;
    }
    case 356662:
    {
        returnValue = F("von-Linde-Str.");
        break;
    }
    case 356663:
    {
        returnValue = F("von-Lindequist-Weg");
        break;
    }
    case 356664:
    {
        returnValue = F("von-Lindern-Str.");
        break;
    }
    case 356665:
    {
        returnValue = F("von-Lippe-Str.");
        break;
    }
    case 356666:
    {
        returnValue = F("von-Lori-Str.");
        break;
    }
    case 356667:
    {
        returnValue = F("von-Lüschwitz-Str.");
        break;
    }
    case 356668:
    {
        returnValue = F("von-Lütwitz-Heinrich-Str.");
        break;
    }
    case 356669:
    {
        returnValue = F("von-Mader-Str.");
        break;
    }
    case 356670:
    {
        returnValue = F("von-Martels-Str.");
        break;
    }
    case 356671:
    {
        returnValue = F("von-Mayer-Str.");
        break;
    }
    case 356672:
    {
        returnValue = F("von-Menzel-Str.");
        break;
    }
    case 356673:
    {
        returnValue = F("von-Mergenthal-Str.");
        break;
    }
    case 356674:
    {
        returnValue = F("von-Moltke-Str.");
        break;
    }
    case 356675:
    {
        returnValue = F("von-Morrien-Str.");
        break;
    }
    case 356676:
    {
        returnValue = F("von-Münchhausen-Str.");
        break;
    }
    case 356677:
    {
        returnValue = F("von-Münnich-Str.");
        break;
    }
    case 356678:
    {
        returnValue = F("von-Münster-Str.");
        break;
    }
    case 356679:
    {
        returnValue = F("von-Neuenfels-Weg");
        break;
    }
    case 356680:
    {
        returnValue = F("von-Ostein-Str.");
        break;
    }
    case 356681:
    {
        returnValue = F("von-Pfeuffer-Weg");
        break;
    }
    case 356682:
    {
        returnValue = F("von-Pfirt-Weg");
        break;
    }
    case 356683:
    {
        returnValue = F("von-Pienzenauer-Str.");
        break;
    }
    case 356684:
    {
        returnValue = F("von-Ramsberg-Weg");
        break;
    }
    case 356685:
    {
        returnValue = F("von-Reisach-Str.");
        break;
    }
    case 356686:
    {
        returnValue = F("von-Rhede-Str.");
        break;
    }
    case 356687:
    {
        returnValue = F("von-Richingen-Str.");
        break;
    }
    case 356688:
    {
        returnValue = F("von-Richthofen-Str.");
        break;
    }
    case 356689:
    {
        returnValue = F("von-Roggenbach-Weg");
        break;
    }
    case 356690:
    {
        returnValue = F("von-Rübel-Weg");
        break;
    }
    case 356691:
    {
        returnValue = F("von-Salza-Str.");
        break;
    }
    case 356692:
    {
        returnValue = F("von-Schauenburg-Weg");
        break;
    }
    case 356693:
    {
        returnValue = F("von-Scheffel-Str.");
        break;
    }
    case 356694:
    {
        returnValue = F("von-Schmitt-Str.");
        break;
    }
    case 356695:
    {
        returnValue = F("von-Schnewlin-Weg");
        break;
    }
    case 356696:
    {
        returnValue = F("von-Schreeb-Weg");
        break;
    }
    case 356697:
    {
        returnValue = F("von-Schwallbach-Weg");
        break;
    }
    case 356698:
    {
        returnValue = F("von-Schwind-Str.");
        break;
    }
    case 356699:
    {
        returnValue = F("von-Seydlitz-Str.");
        break;
    }
    case 356700:
    {
        returnValue = F("von-Simolin-Str.");
        break;
    }
    case 356701:
    {
        returnValue = F("von-Soden-Str.");
        break;
    }
    case 356702:
    {
        returnValue = F("von-Sothen-Weg");
        break;
    }
    case 356703:
    {
        returnValue = F("von-Stain-Str.");
        break;
    }
    case 356704:
    {
        returnValue = F("von-Stauffenberg-Str.");
        break;
    }
    case 356705:
    {
        returnValue = F("von-Stauffenberg-Weg");
        break;
    }
    case 356706:
    {
        returnValue = F("von-Stegmann-Str.");
        break;
    }
    case 356707:
    {
        returnValue = F("von-Steinen-Str.");
        break;
    }
    case 356708:
    {
        returnValue = F("von-Steinfurt-Str.");
        break;
    }
    case 356709:
    {
        returnValue = F("von-Steuben-Allee");
        break;
    }
    case 356710:
    {
        returnValue = F("von-Suttner-Weg");
        break;
    }
    case 356711:
    {
        returnValue = F("von-Syrgenstein-Str.");
        break;
    }
    case 356712:
    {
        returnValue = F("von-Thierbach-Str.");
        break;
    }
    case 356713:
    {
        returnValue = F("von-Thünen-Str.");
        break;
    }
    case 356714:
    {
        returnValue = F("von-Thünen-Ufer");
        break;
    }
    case 356715:
    {
        returnValue = F("von-Trebra-Str.");
        break;
    }
    case 356716:
    {
        returnValue = F("von-Vincke-Str.");
        break;
    }
    case 356717:
    {
        returnValue = F("von-Waldeck-Str.");
        break;
    }
    case 356718:
    {
        returnValue = F("von-Wartenberg-Str.");
        break;
    }
    case 356719:
    {
        returnValue = F("von-Weickmann-Str.");
        break;
    }
    case 356720:
    {
        returnValue = F("von-Wenkheim-Str.");
        break;
    }
    case 356721:
    {
        returnValue = F("von-Werth-Str.");
        break;
    }
    case 356722:
    {
        returnValue = F("von-Westernach-Str.");
        break;
    }
    case 356723:
    {
        returnValue = F("von-Wirsberg-Str.");
        break;
    }
    case 356724:
    {
        returnValue = F("von-Wüllen-Str.");
        break;
    }
    case 356725:
    {
        returnValue = F("von-Zumbusch-Str.");
        break;
    }
    case 356726:
    {
        returnValue = F("von-dem-Bussche-Str.");
        break;
    }
    case 356727:
    {
        returnValue = F("von-der-Becken-Str.");
        break;
    }
    case 356728:
    {
        returnValue = F("von-der-Recke-Str.");
        break;
    }
    case 356729:
    {
        returnValue = F("vor dem Pollenholz");
        break;
    }
    case 356730:
    {
        returnValue = F("vordere Eichbergweg");
        break;
    }
    case 356731:
    {
        returnValue = F("vordere Eschachausfahrt");
        break;
    }
    case 356732:
    {
        returnValue = F("vordere Hohenlohsteige");
        break;
    }
    case 356733:
    {
        returnValue = F("vorderer Markenhaldeweg");
        break;
    }
    case 356734:
    {
        returnValue = F("vr-bank-Passage");
        break;
    }
    }
    return returnValue;
}
