#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameU1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 311852:
    {
        returnValue = F("U-Weg");
        break;
    }
    case 311853:
    {
        returnValue = F("U. Ebhaldenberg-Weg");
        break;
    }
    case 311854:
    {
        returnValue = F("U. Kornbergweg");
        break;
    }
    case 311855:
    {
        returnValue = F("U. Schlangenweg");
        break;
    }
    case 311856:
    {
        returnValue = F("U. Steinbergweg");
        break;
    }
    case 311857:
    {
        returnValue = F("U.S. Housing");
        break;
    }
    case 311858:
    {
        returnValue = F("U11");
        break;
    }
    case 311859:
    {
        returnValue = F("U11 Ring");
        break;
    }
    case 311860:
    {
        returnValue = F("U12");
        break;
    }
    case 311861:
    {
        returnValue = F("U13");
        break;
    }
    case 311862:
    {
        returnValue = F("U4");
        break;
    }
    case 311863:
    {
        returnValue = F("U6");
        break;
    }
    case 311864:
    {
        returnValue = F("U64");
        break;
    }
    case 311865:
    {
        returnValue = F("U81");
        break;
    }
    case 311866:
    {
        returnValue = F("UN-Park");
        break;
    }
    case 311867:
    {
        returnValue = F("UNESCO-Platz");
        break;
    }
    case 311868:
    {
        returnValue = F("UNFINISHED");
        break;
    }
    case 311869:
    {
        returnValue = F("Ual Jaat");
        break;
    }
    case 311870:
    {
        returnValue = F("Ual Saarepswai");
        break;
    }
    case 311871:
    {
        returnValue = F("Ualaanj");
        break;
    }
    case 311872:
    {
        returnValue = F("Ualjaat");
        break;
    }
    case 311873:
    {
        returnValue = F("Uaster Klant");
        break;
    }
    case 311874:
    {
        returnValue = F("Uaster Reeg");
        break;
    }
    case 311875:
    {
        returnValue = F("Uasteraanj");
        break;
    }
    case 311876:
    {
        returnValue = F("Uasteranjstich");
        break;
    }
    case 311877:
    {
        returnValue = F("Uasterguardem");
        break;
    }
    case 311878:
    {
        returnValue = F("Uasterhörn");
        break;
    }
    case 311879:
    {
        returnValue = F("Uasterjaat");
        break;
    }
    case 311880:
    {
        returnValue = F("Uasterjen");
        break;
    }
    case 311881:
    {
        returnValue = F("Uasterstigh");
        break;
    }
    case 311882:
    {
        returnValue = F("Ubaldstr.");
        break;
    }
    case 311883:
    {
        returnValue = F("Ubbachstr.");
        break;
    }
    case 311884:
    {
        returnValue = F("Ubbedamm");
        break;
    }
    case 311885:
    {
        returnValue = F("Ubbedisser Stich");
        break;
    }
    case 311886:
    {
        returnValue = F("Ubbedisser Str.");
        break;
    }
    case 311887:
    {
        returnValue = F("Ubbehausen");
        break;
    }
    case 311888:
    {
        returnValue = F("Ubbelohdestr.");
        break;
    }
    case 311889:
    {
        returnValue = F("Ubbelohdeweg");
        break;
    }
    case 311890:
    {
        returnValue = F("Ubbenstr.");
        break;
    }
    case 311891:
    {
        returnValue = F("Ubbingweg");
        break;
    }
    case 311892:
    {
        returnValue = F("Ubbo-Emmius-Str.");
        break;
    }
    case 311893:
    {
        returnValue = F("Ubbo-Jacobs-Ring");
        break;
    }
    case 311894:
    {
        returnValue = F("Ubbostr.");
        break;
    }
    case 311895:
    {
        returnValue = F("Uberstr.");
        break;
    }
    case 311896:
    {
        returnValue = F("Uberweg");
        break;
    }
    case 311897:
    {
        returnValue = F("Ubierring");
        break;
    }
    case 311898:
    {
        returnValue = F("Ubierring Park");
        break;
    }
    case 311899:
    {
        returnValue = F("Ubierstr.");
        break;
    }
    case 311900:
    {
        returnValue = F("Ubierweg");
        break;
    }
    case 311901:
    {
        returnValue = F("Ubinckstr.");
        break;
    }
    case 311902:
    {
        returnValue = F("Ubisgartenweg");
        break;
    }
    case 311903:
    {
        returnValue = F("Ubostr.");
        break;
    }
    case 311904:
    {
        returnValue = F("Ubstadter Pfad");
        break;
    }
    case 311905:
    {
        returnValue = F("Ubstadter Str.");
        break;
    }
    case 311906:
    {
        returnValue = F("Ubstadter Weg");
        break;
    }
    case 311907:
    {
        returnValue = F("Uchbahnstr.");
        break;
    }
    case 311908:
    {
        returnValue = F("Uchenhofer Str.");
        break;
    }
    case 311909:
    {
        returnValue = F("Uchenhofer Weg");
        break;
    }
    case 311910:
    {
        returnValue = F("Uchtdorfer Lindenstr.");
        break;
    }
    case 311911:
    {
        returnValue = F("Uchtdorfer Schulstr.");
        break;
    }
    case 311912:
    {
        returnValue = F("Uchtdorfer Str.");
        break;
    }
    case 311913:
    {
        returnValue = F("Uchtdorfer Weg");
        break;
    }
    case 311914:
    {
        returnValue = F("Uchtelfanger Str.");
        break;
    }
    case 311915:
    {
        returnValue = F("Uchtelstr.");
        break;
    }
    case 311916:
    {
        returnValue = F("Uchtenhagen");
        break;
    }
    case 311917:
    {
        returnValue = F("Uchtenhagener Str.");
        break;
    }
    case 311918:
    {
        returnValue = F("Uchtenhagener Weg");
        break;
    }
    case 311919:
    {
        returnValue = F("Uchtenhagenstr.");
        break;
    }
    case 311920:
    {
        returnValue = F("Uchtenhagenweg");
        break;
    }
    case 311921:
    {
        returnValue = F("Uchtenweg");
        break;
    }
    case 311922:
    {
        returnValue = F("Uchter Str.");
        break;
    }
    case 311923:
    {
        returnValue = F("Uchtestr.");
        break;
    }
    case 311924:
    {
        returnValue = F("Uchtewall");
        break;
    }
    case 311925:
    {
        returnValue = F("Uchteweg");
        break;
    }
    case 311926:
    {
        returnValue = F("Uchthalde");
        break;
    }
    case 311927:
    {
        returnValue = F("Uchtstr.");
        break;
    }
    case 311928:
    {
        returnValue = F("Uchtweg");
        break;
    }
    case 311929:
    {
        returnValue = F("Uchtweide");
        break;
    }
    case 311930:
    {
        returnValue = F("Uckelstal");
        break;
    }
    case 311931:
    {
        returnValue = F("Uckendorfer Str.");
        break;
    }
    case 311932:
    {
        returnValue = F("Uckerather Str.");
        break;
    }
    case 311933:
    {
        returnValue = F("Uckerblick");
        break;
    }
    case 311934:
    {
        returnValue = F("Uckerhöhler Weg");
        break;
    }
    case 311935:
    {
        returnValue = F("Uckerleite");
        break;
    }
    case 311936:
    {
        returnValue = F("Uckermarkstr.");
        break;
    }
    case 311937:
    {
        returnValue = F("Uckermarkweg");
        break;
    }
    case 311938:
    {
        returnValue = F("Uckermärker Str.");
        break;
    }
    case 311939:
    {
        returnValue = F("Uckermärkische Str.");
        break;
    }
    case 311940:
    {
        returnValue = F("Uckerpromenade");
        break;
    }
    case 311941:
    {
        returnValue = F("Uckersdorf");
        break;
    }
    case 311942:
    {
        returnValue = F("Uckersdorfer Hauptstr.");
        break;
    }
    case 311943:
    {
        returnValue = F("Uckersdorfer Str.");
        break;
    }
    case 311944:
    {
        returnValue = F("Uckersdorfer Weg");
        break;
    }
    case 311945:
    {
        returnValue = F("Uckerwiek");
        break;
    }
    case 311946:
    {
        returnValue = F("Uckley");
        break;
    }
    case 311947:
    {
        returnValue = F("Uckleysteg");
        break;
    }
    case 311948:
    {
        returnValue = F("Uckroer Bahnhofstr.");
        break;
    }
    case 311949:
    {
        returnValue = F("Uckroer Dorfstr.");
        break;
    }
    case 311950:
    {
        returnValue = F("Uckroer Gartenstr.");
        break;
    }
    case 311951:
    {
        returnValue = F("Uckroer Gutshof");
        break;
    }
    case 311952:
    {
        returnValue = F("Uckroer Hauptstr.");
        break;
    }
    case 311953:
    {
        returnValue = F("Uckroer Wiesweg");
        break;
    }
    case 311954:
    {
        returnValue = F("Uco-Ukena-Str.");
        break;
    }
    case 311955:
    {
        returnValue = F("Udalrichstr.");
        break;
    }
    case 311956:
    {
        returnValue = F("Udamstr.");
        break;
    }
    case 311957:
    {
        returnValue = F("Udastr.");
        break;
    }
    case 311958:
    {
        returnValue = F("Udelinberg");
        break;
    }
    case 311959:
    {
        returnValue = F("Udelsgasse");
        break;
    }
    case 311960:
    {
        returnValue = F("Udenborn");
        break;
    }
    case 311961:
    {
        returnValue = F("Udenborner Str.");
        break;
    }
    case 311962:
    {
        returnValue = F("Udenbreth");
        break;
    }
    case 311963:
    {
        returnValue = F("Udenbrether Weg");
        break;
    }
    case 311964:
    {
        returnValue = F("Udenbrink");
        break;
    }
    case 311965:
    {
        returnValue = F("Udenbörner Str.");
        break;
    }
    case 311966:
    {
        returnValue = F("Udendorfer Teil");
        break;
    }
    case 311967:
    {
        returnValue = F("Udener Str.");
        break;
    }
    case 311968:
    {
        returnValue = F("Udenhainer Landstr.");
        break;
    }
    case 311969:
    {
        returnValue = F("Udenhainer Str.");
        break;
    }
    case 311970:
    {
        returnValue = F("Udenheimer Str.");
        break;
    }
    case 311971:
    {
        returnValue = F("Udenhoutstr.");
        break;
    }
    case 311972:
    {
        returnValue = F("Udenhäuser Str.");
        break;
    }
    case 311973:
    {
        returnValue = F("Udenstr.");
        break;
    }
    case 311974:
    {
        returnValue = F("Udersbergstr.");
        break;
    }
    case 311975:
    {
        returnValue = F("Udersche Str.");
        break;
    }
    case 311976:
    {
        returnValue = F("Uderslebener Ortsweg");
        break;
    }
    case 311977:
    {
        returnValue = F("Uderslebener Str.");
        break;
    }
    case 311978:
    {
        returnValue = F("Udersleber Weg");
        break;
    }
    case 311979:
    {
        returnValue = F("Uderter Weg");
        break;
    }
    case 311980:
    {
        returnValue = F("Udertsmühle");
        break;
    }
    case 311981:
    {
        returnValue = F("Udertsweg");
        break;
    }
    case 311982:
    {
        returnValue = F("Udestedter Str.");
        break;
    }
    case 311983:
    {
        returnValue = F("Udestedter Weg");
        break;
    }
    case 311984:
    {
        returnValue = F("Udet-Str.");
        break;
    }
    case 311985:
    {
        returnValue = F("Udetstr.");
        break;
    }
    case 311986:
    {
        returnValue = F("Udetweg");
        break;
    }
    case 311987:
    {
        returnValue = F("Udilopark");
        break;
    }
    case 311988:
    {
        returnValue = F("Udldinger Str.");
        break;
    }
    case 311989:
    {
        returnValue = F("Udlerstr.");
        break;
    }
    case 311990:
    {
        returnValue = F("Udo-Fischer-Str.");
        break;
    }
    case 311991:
    {
        returnValue = F("Udo-Knauel-Str.");
        break;
    }
    case 311992:
    {
        returnValue = F("Udo-Lermann-Str.");
        break;
    }
    case 311993:
    {
        returnValue = F("Udo-Müller-Ring");
        break;
    }
    case 311994:
    {
        returnValue = F("Udo-Peters-Weg");
        break;
    }
    case 311995:
    {
        returnValue = F("Udo-Zempel-Str.");
        break;
    }
    case 311996:
    {
        returnValue = F("Udohof");
        break;
    }
    case 311997:
    {
        returnValue = F("Udonenstr.");
        break;
    }
    case 311998:
    {
        returnValue = F("Udonenweg");
        break;
    }
    case 311999:
    {
        returnValue = F("Udorfer Str.");
        break;
    }
    case 312000:
    {
        returnValue = F("Udostr.");
        break;
    }
    case 312001:
    {
        returnValue = F("Uebachstr.");
        break;
    }
    case 312002:
    {
        returnValue = F("Uebachstr. 8");
        break;
    }
    case 312003:
    {
        returnValue = F("Ueberauer Str.");
        break;
    }
    case 312004:
    {
        returnValue = F("Ueberfeld");
        break;
    }
    case 312005:
    {
        returnValue = F("Ueberfelder Str.");
        break;
    }
    case 312006:
    {
        returnValue = F("Ueberreiterstr.");
        break;
    }
    case 312007:
    {
        returnValue = F("Ueberzwercherweg");
        break;
    }
    case 312008:
    {
        returnValue = F("Uebigau");
        break;
    }
    case 312009:
    {
        returnValue = F("Uebigauer Str.");
        break;
    }
    case 312010:
    {
        returnValue = F("Uebigauer Weg");
        break;
    }
    case 312011:
    {
        returnValue = F("Uebinghausen");
        break;
    }
    case 312012:
    {
        returnValue = F("Uechtingstr.");
        break;
    }
    case 312013:
    {
        returnValue = F("Uechtmannstr.");
        break;
    }
    case 312014:
    {
        returnValue = F("Ueckerather Str.");
        break;
    }
    case 312015:
    {
        returnValue = F("Ueckermünder Str.");
        break;
    }
    case 312016:
    {
        returnValue = F("Ueckermünder Str. Ausbau");
        break;
    }
    case 312017:
    {
        returnValue = F("Ueckermündestr.");
        break;
    }
    case 312018:
    {
        returnValue = F("Ueckerpark");
        break;
    }
    case 312019:
    {
        returnValue = F("Ueckerplatz");
        break;
    }
    case 312020:
    {
        returnValue = F("Ueckerstr.");
        break;
    }
    case 312021:
    {
        returnValue = F("Ueckinghovener Str.");
        break;
    }
    case 312022:
    {
        returnValue = F("Ueddinger Str.");
        break;
    }
    case 312023:
    {
        returnValue = F("Uedelhovener Weg");
        break;
    }
    case 312024:
    {
        returnValue = F("Uedemer Str.");
        break;
    }
    case 312025:
    {
        returnValue = F("Uedemerbrucher Str.");
        break;
    }
    case 312026:
    {
        returnValue = F("Uedesheimer Str.");
        break;
    }
    case 312027:
    {
        returnValue = F("Uedinghoffstr.");
        break;
    }
    case 312028:
    {
        returnValue = F("Uedingsweg");
        break;
    }
    case 312029:
    {
        returnValue = F("Uedorfer Str.");
        break;
    }
    case 312030:
    {
        returnValue = F("Uedorfer Weg");
        break;
    }
    case 312031:
    {
        returnValue = F("Ueffelner Str.");
        break;
    }
    case 312032:
    {
        returnValue = F("Uehlfelder Str.");
        break;
    }
    case 312033:
    {
        returnValue = F("Uehlfelder Weg");
        break;
    }
    case 312034:
    {
        returnValue = F("Uehrder Weg");
        break;
    }
    case 312035:
    {
        returnValue = F("Uekernstr.");
        break;
    }
    case 312036:
    {
        returnValue = F("Uelder Mühlenweg");
        break;
    }
    case 312037:
    {
        returnValue = F("Uelder Mühleweg");
        break;
    }
    case 312038:
    {
        returnValue = F("Uelder Weg");
        break;
    }
    case 312039:
    {
        returnValue = F("Uelenbeek");
        break;
    }
    case 312040:
    {
        returnValue = F("Uelenbenderweg");
        break;
    }
    case 312041:
    {
        returnValue = F("Uelfe-Wuppertal-Str.");
        break;
    }
    case 312042:
    {
        returnValue = F("Uelfebad");
        break;
    }
    case 312043:
    {
        returnValue = F("Uelfestr.");
        break;
    }
    case 312044:
    {
        returnValue = F("Uelfeweg");
        break;
    }
    case 312045:
    {
        returnValue = F("Uelhof");
        break;
    }
    case 312046:
    {
        returnValue = F("Uelhoffs Wiese");
        break;
    }
    case 312047:
    {
        returnValue = F("Ueliksgasse");
        break;
    }
    case 312048:
    {
        returnValue = F("Uelitzer Str.");
        break;
    }
    case 312049:
    {
        returnValue = F("Uelleber Str.");
        break;
    }
    case 312050:
    {
        returnValue = F("Uellenberg-Park");
        break;
    }
    case 312051:
    {
        returnValue = F("Uellendahl");
        break;
    }
    case 312052:
    {
        returnValue = F("Uellendahler Str.");
        break;
    }
    case 312053:
    {
        returnValue = F("Uelpebergstr.");
        break;
    }
    case 312054:
    {
        returnValue = F("Uelpestr.");
        break;
    }
    case 312055:
    {
        returnValue = F("Uelsbyer Str.");
        break;
    }
    case 312056:
    {
        returnValue = F("Uelsbyfeld");
        break;
    }
    case 312057:
    {
        returnValue = F("Uelsener Str.");
        break;
    }
    case 312058:
    {
        returnValue = F("Uelser Bürgerpark");
        break;
    }
    case 312059:
    {
        returnValue = F("Uelser Diek");
        break;
    }
    case 312060:
    {
        returnValue = F("Uelser Feld");
        break;
    }
    case 312061:
    {
        returnValue = F("Uelser Holt");
        break;
    }
    case 312062:
    {
        returnValue = F("Uelversheimer Str.");
        break;
    }
    case 312063:
    {
        returnValue = F("Uelversheimer Weg");
        break;
    }
    case 312064:
    {
        returnValue = F("Uelvesbüller Str.");
        break;
    }
    case 312065:
    {
        returnValue = F("Uelzener Chaussee");
        break;
    }
    case 312066:
    {
        returnValue = F("Uelzener Dorfstr.");
        break;
    }
    case 312067:
    {
        returnValue = F("Uelzener Hellweg");
        break;
    }
    case 312068:
    {
        returnValue = F("Uelzener Str.");
        break;
    }
    case 312069:
    {
        returnValue = F("Uelzener Weg");
        break;
    }
    case 312070:
    {
        returnValue = F("Uelzer Feld");
        break;
    }
    case 312071:
    {
        returnValue = F("Uelzestr.");
        break;
    }
    case 312072:
    {
        returnValue = F("Uengershauser Str.");
        break;
    }
    case 312073:
    {
        returnValue = F("Uenglinger Str.");
        break;
    }
    case 312074:
    {
        returnValue = F("Uenglinger Weg");
        break;
    }
    case 312075:
    {
        returnValue = F("Uentroper Dorfstr.");
        break;
    }
    case 312076:
    {
        returnValue = F("Uentroper Str.");
        break;
    }
    case 312077:
    {
        returnValue = F("Uentropstr.");
        break;
    }
    case 312078:
    {
        returnValue = F("Uenzen");
        break;
    }
    case 312079:
    {
        returnValue = F("Uenzer Dorfstr.");
        break;
    }
    case 312080:
    {
        returnValue = F("Uepser Str.");
        break;
    }
    case 312081:
    {
        returnValue = F("Uerdinger Gerichtsweg");
        break;
    }
    case 312082:
    {
        returnValue = F("Uerdinger Str.");
        break;
    }
    case 312083:
    {
        returnValue = F("Uerentrupweg");
        break;
    }
    case 312084:
    {
        returnValue = F("Uersfelder Fußpfad");
        break;
    }
    case 312085:
    {
        returnValue = F("Uerzeller Str.");
        break;
    }
    case 312086:
    {
        returnValue = F("Uesdorfer Str.");
        break;
    }
    case 312087:
    {
        returnValue = F("Uesener Feldstr.");
        break;
    }
    case 312088:
    {
        returnValue = F("Uesener Moor");
        break;
    }
    case 312089:
    {
        returnValue = F("Uesener Mühlenweg");
        break;
    }
    case 312090:
    {
        returnValue = F("Uesener Ring");
        break;
    }
    case 312091:
    {
        returnValue = F("Uesener Str.");
        break;
    }
    case 312092:
    {
        returnValue = F("Uesener Weserstr.");
        break;
    }
    case 312093:
    {
        returnValue = F("Ueser Brücke");
        break;
    }
    case 312094:
    {
        returnValue = F("Ueser Moorweg");
        break;
    }
    case 312095:
    {
        returnValue = F("Ueser Weg");
        break;
    }
    case 312096:
    {
        returnValue = F("Ueserhütte");
        break;
    }
    case 312097:
    {
        returnValue = F("Uessbachstr.");
        break;
    }
    case 312098:
    {
        returnValue = F("Uesser Weg");
        break;
    }
    case 312099:
    {
        returnValue = F("Uestweg");
        break;
    }
    case 312100:
    {
        returnValue = F("Uetersener Str.");
        break;
    }
    case 312101:
    {
        returnValue = F("Uetersener Weg");
        break;
    }
    case 312102:
    {
        returnValue = F("Uetrechts Weg");
        break;
    }
    case 312103:
    {
        returnValue = F("Uetschenkamp");
        break;
    }
    case 312104:
    {
        returnValue = F("Uettelsheimer Weg");
        break;
    }
    case 312105:
    {
        returnValue = F("Uetterather Dorfstr.");
        break;
    }
    case 312106:
    {
        returnValue = F("Uetterather Str.");
        break;
    }
    case 312107:
    {
        returnValue = F("Uetterather Weg");
        break;
    }
    case 312108:
    {
        returnValue = F("Uettinger Str.");
        break;
    }
    case 312109:
    {
        returnValue = F("Uetzenäcker");
        break;
    }
    case 312110:
    {
        returnValue = F("Uetzer Dorfstr.");
        break;
    }
    case 312111:
    {
        returnValue = F("Uetzer Kirchweg");
        break;
    }
    case 312112:
    {
        returnValue = F("Uetzer Parkstr.");
        break;
    }
    case 312113:
    {
        returnValue = F("Uetzer Schulstr.");
        break;
    }
    case 312114:
    {
        returnValue = F("Uetzer Str.");
        break;
    }
    case 312115:
    {
        returnValue = F("Uetzer Weg");
        break;
    }
    case 312116:
    {
        returnValue = F("Uetzerweg");
        break;
    }
    case 312117:
    {
        returnValue = F("Uetzingener Kirchweg");
        break;
    }
    case 312118:
    {
        returnValue = F("Uetzinger Str.");
        break;
    }
    case 312119:
    {
        returnValue = F("Uetzkamp");
        break;
    }
    case 312120:
    {
        returnValue = F("Uevelgönne");
        break;
    }
    case 312121:
    {
        returnValue = F("Uexküllstr.");
        break;
    }
    case 312122:
    {
        returnValue = F("Ueßbachweg");
        break;
    }
    case 312123:
    {
        returnValue = F("Ufaer Str.");
        break;
    }
    case 312124:
    {
        returnValue = F("Ufer");
        break;
    }
    case 312125:
    {
        returnValue = F("Ufer-Elster-Park");
        break;
    }
    case 312126:
    {
        returnValue = F("Uferallee");
        break;
    }
    case 312127:
    {
        returnValue = F("Uferanlage Prinzenkapelle");
        break;
    }
    case 312128:
    {
        returnValue = F("Uferblick");
        break;
    }
    case 312129:
    {
        returnValue = F("Uferbreen");
        break;
    }
    case 312130:
    {
        returnValue = F("Uferbreite");
        break;
    }
    case 312131:
    {
        returnValue = F("Ufergarten");
        break;
    }
    case 312132:
    {
        returnValue = F("Ufergasse");
        break;
    }
    case 312133:
    {
        returnValue = F("Uferheide");
        break;
    }
    case 312134:
    {
        returnValue = F("Uferkamp");
        break;
    }
    case 312135:
    {
        returnValue = F("Uferkoppel");
        break;
    }
    case 312136:
    {
        returnValue = F("Ufermannshof");
        break;
    }
    case 312137:
    {
        returnValue = F("Ufermühle");
        break;
    }
    case 312138:
    {
        returnValue = F("Uferpark");
        break;
    }
    case 312139:
    {
        returnValue = F("Uferpark Aeschach");
        break;
    }
    case 312140:
    {
        returnValue = F("Uferpark Bodman");
        break;
    }
    case 312141:
    {
        returnValue = F("Uferpark Lützel");
        break;
    }
    case 312142:
    {
        returnValue = F("Uferpark am Kellertor");
        break;
    }
    case 312143:
    {
        returnValue = F("Uferpark an der Havel");
        break;
    }
    case 312144:
    {
        returnValue = F("Uferpark Überlingen");
        break;
    }
    case 312145:
    {
        returnValue = F("Uferpfad");
        break;
    }
    case 312146:
    {
        returnValue = F("Uferplatz");
        break;
    }
    case 312147:
    {
        returnValue = F("Uferpromenade");
        break;
    }
    case 312148:
    {
        returnValue = F("Uferpromenade Jakobsgraben");
        break;
    }
    case 312149:
    {
        returnValue = F("Uferpromenade an der Dahme");
        break;
    }
    case 312150:
    {
        returnValue = F("Uferring");
        break;
    }
    case 312151:
    {
        returnValue = F("Uferschwalbenweg");
        break;
    }
    case 312152:
    {
        returnValue = F("Ufersteg");
        break;
    }
    case 312153:
    {
        returnValue = F("Ufersteig");
        break;
    }
    case 312154:
    {
        returnValue = F("Uferstieg");
        break;
    }
    case 312155:
    {
        returnValue = F("Uferstr.");
        break;
    }
    case 312156:
    {
        returnValue = F("Ufertal");
        break;
    }
    case 312157:
    {
        returnValue = F("Ufertalstr.");
        break;
    }
    case 312158:
    {
        returnValue = F("Uferterrasse");
        break;
    }
    case 312159:
    {
        returnValue = F("Ufertsgärten");
        break;
    }
    case 312160:
    {
        returnValue = F("Uferwanderweg");
        break;
    }
    case 312161:
    {
        returnValue = F("Uferweg");
        break;
    }
    case 312162:
    {
        returnValue = F("Uferweg Mardorf");
        break;
    }
    case 312163:
    {
        returnValue = F("Uferweg Schmaler Luzin");
        break;
    }
    case 312164:
    {
        returnValue = F("Uferweg Vorthbach");
        break;
    }
    case 312165:
    {
        returnValue = F("Uferzeile");
        break;
    }
    case 312166:
    {
        returnValue = F("Uferzone");
        break;
    }
    case 312167:
    {
        returnValue = F("Uffeln Mitte");
        break;
    }
    case 312168:
    {
        returnValue = F("Uffelner Berg");
        break;
    }
    case 312169:
    {
        returnValue = F("Uffelner Str.");
        break;
    }
    case 312170:
    {
        returnValue = F("Uffelner Weg");
        break;
    }
    case 312171:
    {
        returnValue = F("Uffenheimer Str.");
        break;
    }
    case 312172:
    {
        returnValue = F("Uffenheimer Weg");
        break;
    }
    case 312173:
    {
        returnValue = F("Uffenheimerstr.");
        break;
    }
    case 312174:
    {
        returnValue = F("Uffenstr.");
        break;
    }
    case 312175:
    {
        returnValue = F("Ufferhusloh");
        break;
    }
    case 312176:
    {
        returnValue = F("Uffestr.");
        break;
    }
    case 312177:
    {
        returnValue = F("Uffhauser Str.");
        break;
    }
    case 312178:
    {
        returnValue = F("Uffhofener Str.");
        break;
    }
    case 312179:
    {
        returnValue = F("Uffhofenstr.");
        break;
    }
    case 312180:
    {
        returnValue = F("Uffholtzer Str.");
        break;
    }
    case 312181:
    {
        returnValue = F("Uffhäuser Str.");
        break;
    }
    case 312182:
    {
        returnValue = F("Uffinger Str.");
        break;
    }
    case 312183:
    {
        returnValue = F("Uffler Gasse");
        break;
    }
    case 312184:
    {
        returnValue = F("Uffler Str.");
        break;
    }
    case 312185:
    {
        returnValue = F("Ufflinger Weg");
        break;
    }
    case 312186:
    {
        returnValue = F("Ufgaustr.");
        break;
    }
    case 312187:
    {
        returnValue = F("Ufhabiweg");
        break;
    }
    case 312188:
    {
        returnValue = F("Ufhofer Str.");
        break;
    }
    case 312189:
    {
        returnValue = F("Ufhover Kirchplatz");
        break;
    }
    case 312190:
    {
        returnValue = F("Ufhäuser Tor");
        break;
    }
    case 312191:
    {
        returnValue = F("Ufke-Cremer-Str.");
        break;
    }
    case 312192:
    {
        returnValue = F("Ufo");
        break;
    }
    case 312193:
    {
        returnValue = F("Uftrunger Enge Gasse");
        break;
    }
    case 312194:
    {
        returnValue = F("Uftrunger Feldstr.");
        break;
    }
    case 312195:
    {
        returnValue = F("Uftrunger Hauptstr.");
        break;
    }
    case 312196:
    {
        returnValue = F("Uftrunger Schulgasse");
        break;
    }
    case 312197:
    {
        returnValue = F("Uftrunger Teichdamm");
        break;
    }
    case 312198:
    {
        returnValue = F("Uftrunger Weg");
        break;
    }
    case 312199:
    {
        returnValue = F("Ugenhof");
        break;
    }
    case 312200:
    {
        returnValue = F("Ugenhofer Str.");
        break;
    }
    case 312201:
    {
        returnValue = F("Ugensteige");
        break;
    }
    case 312202:
    {
        returnValue = F("Ugenstichsträßle");
        break;
    }
    case 312203:
    {
        returnValue = F("Ugentalsträßle");
        break;
    }
    case 312204:
    {
        returnValue = F("Ugentalweg");
        break;
    }
    case 312205:
    {
        returnValue = F("Uggiate-Trevano-Str.");
        break;
    }
    case 312206:
    {
        returnValue = F("Ugiwinkel");
        break;
    }
    case 312207:
    {
        returnValue = F("Uglitscher Str.");
        break;
    }
    case 312208:
    {
        returnValue = F("Ugorina");
        break;
    }
    case 312209:
    {
        returnValue = F("Uhde-Bernays-Weg");
        break;
    }
    case 312210:
    {
        returnValue = F("Uhdenbergweg");
        break;
    }
    case 312211:
    {
        returnValue = F("Uhdenstr.");
        break;
    }
    case 312212:
    {
        returnValue = F("Uhdestr.");
        break;
    }
    case 312213:
    {
        returnValue = F("Uherstr.");
        break;
    }
    case 312214:
    {
        returnValue = F("Uhetsweiler");
        break;
    }
    case 312215:
    {
        returnValue = F("Uhinger Str.");
        break;
    }
    case 312216:
    {
        returnValue = F("Uhlandallee");
        break;
    }
    case 312217:
    {
        returnValue = F("Uhlandbrücke");
        break;
    }
    case 312218:
    {
        returnValue = F("Uhlandhof");
        break;
    }
    case 312219:
    {
        returnValue = F("Uhlandpark");
        break;
    }
    case 312220:
    {
        returnValue = F("Uhlandplatz");
        break;
    }
    case 312221:
    {
        returnValue = F("Uhlandring");
        break;
    }
    case 312222:
    {
        returnValue = F("Uhlandshöhe");
        break;
    }
    case 312223:
    {
        returnValue = F("Uhlandsteig");
        break;
    }
    case 312224:
    {
        returnValue = F("Uhlandstr.");
        break;
    }
    case 312225:
    {
        returnValue = F("Uhlandsweg");
        break;
    }
    case 312226:
    {
        returnValue = F("Uhlandweg");
        break;
    }
    case 312227:
    {
        returnValue = F("Uhlanenflügel");
        break;
    }
    case 312228:
    {
        returnValue = F("Uhlbacher Platz");
        break;
    }
    case 312229:
    {
        returnValue = F("Uhlbacher Str.");
        break;
    }
    case 312230:
    {
        returnValue = F("Uhlbachsträßle");
        break;
    }
    case 312231:
    {
        returnValue = F("Uhlbachweg");
        break;
    }
    case 312232:
    {
        returnValue = F("Uhlberg");
        break;
    }
    case 312233:
    {
        returnValue = F("Uhlberghangweg");
        break;
    }
    case 312234:
    {
        returnValue = F("Uhlbergstr.");
        break;
    }
    case 312235:
    {
        returnValue = F("Uhlbergturmsträßle");
        break;
    }
    case 312236:
    {
        returnValue = F("Uhlbergweg");
        break;
    }
    case 312237:
    {
        returnValue = F("Uhldinger Str.");
        break;
    }
    case 312238:
    {
        returnValue = F("Uhlebüller Dorfstr.");
        break;
    }
    case 312239:
    {
        returnValue = F("Uhlebüller Str.");
        break;
    }
    case 312240:
    {
        returnValue = F("Uhlegäßchen");
        break;
    }
    case 312241:
    {
        returnValue = F("Uhlemeyerstr.");
        break;
    }
    case 312242:
    {
        returnValue = F("Uhlemühlen");
        break;
    }
    case 312243:
    {
        returnValue = F("Uhlenbank");
        break;
    }
    case 312244:
    {
        returnValue = F("Uhlenbarg");
        break;
    }
    case 312245:
    {
        returnValue = F("Uhlenbargsweg");
        break;
    }
    case 312246:
    {
        returnValue = F("Uhlenbeek");
        break;
    }
    case 312247:
    {
        returnValue = F("Uhlenberg");
        break;
    }
    case 312248:
    {
        returnValue = F("Uhlenberger Str.");
        break;
    }
    case 312249:
    {
        returnValue = F("Uhlenbergfeld");
        break;
    }
    case 312250:
    {
        returnValue = F("Uhlenbergs Tannen");
        break;
    }
    case 312251:
    {
        returnValue = F("Uhlenbergstr.");
        break;
    }
    case 312252:
    {
        returnValue = F("Uhlenbergweg");
        break;
    }
    case 312253:
    {
        returnValue = F("Uhlenborgsweg");
        break;
    }
    case 312254:
    {
        returnValue = F("Uhlenbornstr.");
        break;
    }
    case 312255:
    {
        returnValue = F("Uhlenbrauk");
        break;
    }
    case 312256:
    {
        returnValue = F("Uhlenbreite");
        break;
    }
    case 312257:
    {
        returnValue = F("Uhlenbrink");
        break;
    }
    case 312258:
    {
        returnValue = F("Uhlenbrinkstr.");
        break;
    }
    case 312259:
    {
        returnValue = F("Uhlenbrock");
        break;
    }
    case 312260:
    {
        returnValue = F("Uhlenbrockstr.");
        break;
    }
    case 312261:
    {
        returnValue = F("Uhlenbrockweg");
        break;
    }
    case 312262:
    {
        returnValue = F("Uhlenbroicher Weg");
        break;
    }
    case 312263:
    {
        returnValue = F("Uhlenbrooksweg");
        break;
    }
    case 312264:
    {
        returnValue = F("Uhlenbruch");
        break;
    }
    case 312265:
    {
        returnValue = F("Uhlenbruchsdamm");
        break;
    }
    case 312266:
    {
        returnValue = F("Uhlenbruchstr.");
        break;
    }
    case 312267:
    {
        returnValue = F("Uhlenbruchweg");
        break;
    }
    case 312268:
    {
        returnValue = F("Uhlenbruckplatz");
        break;
    }
    case 312269:
    {
        returnValue = F("Uhlenbrucksfeld");
        break;
    }
    case 312270:
    {
        returnValue = F("Uhlenburg");
        break;
    }
    case 312271:
    {
        returnValue = F("Uhlenburger Weg");
        break;
    }
    case 312272:
    {
        returnValue = F("Uhlenburgstr.");
        break;
    }
    case 312273:
    {
        returnValue = F("Uhlenburgweg");
        break;
    }
    case 312274:
    {
        returnValue = F("Uhlenbusch");
        break;
    }
    case 312275:
    {
        returnValue = F("Uhlenbuscher Damm");
        break;
    }
    case 312276:
    {
        returnValue = F("Uhlenbuschstr.");
        break;
    }
    case 312277:
    {
        returnValue = F("Uhlenbuschweg");
        break;
    }
    case 312278:
    {
        returnValue = F("Uhlendahlweg");
        break;
    }
    case 312279:
    {
        returnValue = F("Uhlendiekstr.");
        break;
    }
    case 312280:
    {
        returnValue = F("Uhlendörp");
        break;
    }
    case 312281:
    {
        returnValue = F("Uhleneck");
        break;
    }
    case 312282:
    {
        returnValue = F("Uhleneike");
        break;
    }
    case 312283:
    {
        returnValue = F("Uhlenfeld");
        break;
    }
    case 312284:
    {
        returnValue = F("Uhlenflucht");
        break;
    }
    case 312285:
    {
        returnValue = F("Uhlengang");
        break;
    }
    case 312286:
    {
        returnValue = F("Uhlengartenstr.");
        break;
    }
    case 312287:
    {
        returnValue = F("Uhlengasse");
        break;
    }
    case 312288:
    {
        returnValue = F("Uhlengraben");
        break;
    }
    case 312289:
    {
        returnValue = F("Uhlengrund");
        break;
    }
    case 312290:
    {
        returnValue = F("Uhlenhautstr.");
        break;
    }
    case 312291:
    {
        returnValue = F("Uhlenheidestr.");
        break;
    }
    case 312292:
    {
        returnValue = F("Uhlenhoch");
        break;
    }
    case 312293:
    {
        returnValue = F("Uhlenhof");
        break;
    }
    case 312294:
    {
        returnValue = F("Uhlenholt");
        break;
    }
    case 312295:
    {
        returnValue = F("Uhlenholz");
        break;
    }
    case 312296:
    {
        returnValue = F("Uhlenhop");
        break;
    }
    case 312297:
    {
        returnValue = F("Uhlenhorst");
        break;
    }
    case 312298:
    {
        returnValue = F("Uhlenhorster Weg");
        break;
    }
    case 312299:
    {
        returnValue = F("Uhlenhorststr.");
        break;
    }
    case 312300:
    {
        returnValue = F("Uhlenhorstweg");
        break;
    }
    case 312301:
    {
        returnValue = F("Uhlenhuthweg");
        break;
    }
    case 312302:
    {
        returnValue = F("Uhlenhörn");
        break;
    }
    case 312303:
    {
        returnValue = F("Uhlenkamp");
        break;
    }
    case 312304:
    {
        returnValue = F("Uhlenkampstr.");
        break;
    }
    case 312305:
    {
        returnValue = F("Uhlenkaten");
        break;
    }
    case 312306:
    {
        returnValue = F("Uhlenknapp");
        break;
    }
    case 312307:
    {
        returnValue = F("Uhlenkotten");
        break;
    }
    case 312308:
    {
        returnValue = F("Uhlenkrog");
        break;
    }
    case 312309:
    {
        returnValue = F("Uhlenkrug");
        break;
    }
    case 312310:
    {
        returnValue = F("Uhlenkruggarten");
        break;
    }
    case 312311:
    {
        returnValue = F("Uhlenloch");
        break;
    }
    case 312312:
    {
        returnValue = F("Uhlenmoorweg");
        break;
    }
    case 312313:
    {
        returnValue = F("Uhlennest");
        break;
    }
    case 312314:
    {
        returnValue = F("Uhlenpolderweg");
        break;
    }
    case 312315:
    {
        returnValue = F("Uhlenrieker Weg");
        break;
    }
    case 312316:
    {
        returnValue = F("Uhlenseegen");
        break;
    }
    case 312317:
    {
        returnValue = F("Uhlenstegge");
        break;
    }
    case 312318:
    {
        returnValue = F("Uhlensteinstr.");
        break;
    }
    case 312319:
    {
        returnValue = F("Uhlenstieg");
        break;
    }
    case 312320:
    {
        returnValue = F("Uhlenstr.");
        break;
    }
    case 312321:
    {
        returnValue = F("Uhlenstrat");
        break;
    }
    case 312322:
    {
        returnValue = F("Uhlenstroot");
        break;
    }
    case 312323:
    {
        returnValue = F("Uhlenstückenweg");
        break;
    }
    case 312324:
    {
        returnValue = F("Uhlental");
        break;
    }
    case 312325:
    {
        returnValue = F("Uhlentaler Weg");
        break;
    }
    case 312326:
    {
        returnValue = F("Uhlenteichweg");
        break;
    }
    case 312327:
    {
        returnValue = F("Uhlentrift");
        break;
    }
    case 312328:
    {
        returnValue = F("Uhlenwaldweg");
        break;
    }
    case 312329:
    {
        returnValue = F("Uhlenweg");
        break;
    }
    case 312330:
    {
        returnValue = F("Uhlenwinkel");
        break;
    }
    case 312331:
    {
        returnValue = F("Uhlenwischer Weg");
        break;
    }
    case 312332:
    {
        returnValue = F("Uhler");
        break;
    }
    case 312333:
    {
        returnValue = F("Uhlerborn");
        break;
    }
    case 312334:
    {
        returnValue = F("Uhlerborner Weg");
        break;
    }
    case 312335:
    {
        returnValue = F("Uhlerbornstr.");
        break;
    }
    case 312336:
    {
        returnValue = F("Uhlersdorf");
        break;
    }
    case 312337:
    {
        returnValue = F("Uhlestr.");
        break;
    }
    case 312338:
    {
        returnValue = F("Uhlgasse");
        break;
    }
    case 312339:
    {
        returnValue = F("Uhlhorn");
        break;
    }
    case 312340:
    {
        returnValue = F("Uhlhorner Str.");
        break;
    }
    case 312341:
    {
        returnValue = F("Uhlhornskamp");
        break;
    }
    case 312342:
    {
        returnValue = F("Uhlhornstr.");
        break;
    }
    case 312343:
    {
        returnValue = F("Uhlhornsweg");
        break;
    }
    case 312344:
    {
        returnValue = F("Uhlhornweg");
        break;
    }
    case 312345:
    {
        returnValue = F("Uhlichs Weg");
        break;
    }
    case 312346:
    {
        returnValue = F("Uhlichstr.");
        break;
    }
    case 312347:
    {
        returnValue = F("Uhlmann-Bixterheide-Weg");
        break;
    }
    case 312348:
    {
        returnValue = F("Uhlmannsdorfer Str.");
        break;
    }
    case 312349:
    {
        returnValue = F("Uhlmannskamp");
        break;
    }
    case 312350:
    {
        returnValue = F("Uhlmannstr.");
        break;
    }
    case 312351:
    {
        returnValue = F("Uhlmühlweg");
        break;
    }
    case 312352:
    {
        returnValue = F("Uhlrather Str.");
        break;
    }
    case 312353:
    {
        returnValue = F("Uhlsbach");
        break;
    }
    case 312354:
    {
        returnValue = F("Uhlsbachstr.");
        break;
    }
    case 312355:
    {
        returnValue = F("Uhlsberghauptweg");
        break;
    }
    case 312356:
    {
        returnValue = F("Uhlsberghöhenweg");
        break;
    }
    case 312357:
    {
        returnValue = F("Uhlsbergstr.");
        break;
    }
    case 312358:
    {
        returnValue = F("Uhlsbergweg");
        break;
    }
    case 312359:
    {
        returnValue = F("Uhlsdorfer Str.");
        break;
    }
    case 312360:
    {
        returnValue = F("Uhlsdorfer Weg");
        break;
    }
    case 312361:
    {
        returnValue = F("Uhlsgasse");
        break;
    }
    case 312362:
    {
        returnValue = F("Uhlsteinweg");
        break;
    }
    case 312363:
    {
        returnValue = F("Uhlstr.");
        break;
    }
    case 312364:
    {
        returnValue = F("Uhlweg");
        break;
    }
    case 312365:
    {
        returnValue = F("Uhr's Knäppken");
        break;
    }
    case 312366:
    {
        returnValue = F("UhrWald");
        break;
    }
    case 312367:
    {
        returnValue = F("Uhraustr.");
        break;
    }
    case 312368:
    {
        returnValue = F("Uhrbrockstr.");
        break;
    }
    case 312369:
    {
        returnValue = F("Uhrbrookring");
        break;
    }
    case 312370:
    {
        returnValue = F("Uhrenbrunnenweg");
        break;
    }
    case 312371:
    {
        returnValue = F("Uhrendorf");
        break;
    }
    case 312372:
    {
        returnValue = F("Uhrendorfer Weg");
        break;
    }
    case 312373:
    {
        returnValue = F("Uhrengasse");
        break;
    }
    case 312374:
    {
        returnValue = F("Uhrengäßle");
        break;
    }
    case 312375:
    {
        returnValue = F("Uhrenhäusleweg");
        break;
    }
    case 312376:
    {
        returnValue = F("Uhrenmachergasse");
        break;
    }
    case 312377:
    {
        returnValue = F("Uhrerskreuzweg");
        break;
    }
    case 312378:
    {
        returnValue = F("Uhresweg");
        break;
    }
    case 312379:
    {
        returnValue = F("Uhrgässchen");
        break;
    }
    case 312380:
    {
        returnValue = F("Uhrigs");
        break;
    }
    case 312381:
    {
        returnValue = F("Uhrigshalde");
        break;
    }
    case 312382:
    {
        returnValue = F("Uhrigstr.");
        break;
    }
    case 312383:
    {
        returnValue = F("Uhrkopfweg");
        break;
    }
    case 312384:
    {
        returnValue = F("Uhrmacher-Ketterer-Str.");
        break;
    }
    case 312385:
    {
        returnValue = F("Uhrmachergasse");
        break;
    }
    case 312386:
    {
        returnValue = F("Uhrmacherweg");
        break;
    }
    case 312387:
    {
        returnValue = F("Uhrsleber Str.");
        break;
    }
    case 312388:
    {
        returnValue = F("Uhrturmgasse");
        break;
    }
    case 312389:
    {
        returnValue = F("Uhrwerkerstr.");
        break;
    }
    case 312390:
    {
        returnValue = F("Uhsmannsdorfer Str.");
        break;
    }
    case 312391:
    {
        returnValue = F("Uhthoffstr.");
        break;
    }
    case 312392:
    {
        returnValue = F("Uhugasse");
        break;
    }
    case 312393:
    {
        returnValue = F("Uhustr.");
        break;
    }
    case 312394:
    {
        returnValue = F("Uhuweg");
        break;
    }
    case 312395:
    {
        returnValue = F("Uhyster Hauptweg");
        break;
    }
    case 312396:
    {
        returnValue = F("Uhyster Str.");
        break;
    }
    case 312397:
    {
        returnValue = F("Uiffinger Str.");
        break;
    }
    case 312398:
    {
        returnValue = F("Uigenauer Weg");
        break;
    }
    case 312399:
    {
        returnValue = F("Uihleinstr.");
        break;
    }
    case 312400:
    {
        returnValue = F("Uikern");
        break;
    }
    case 312401:
    {
        returnValue = F("Uissigheimer Str.");
        break;
    }
    case 312402:
    {
        returnValue = F("Uiterdyk");
        break;
    }
    case 312403:
    {
        returnValue = F("Uiterstewehrster Weg");
        break;
    }
    case 312404:
    {
        returnValue = F("Uiterweg");
        break;
    }
    case 312405:
    {
        returnValue = F("Uithuizermeedenweg");
        break;
    }
    case 312406:
    {
        returnValue = F("Uitschenpump");
        break;
    }
    case 312407:
    {
        returnValue = F("Uitschenweg");
        break;
    }
    case 312408:
    {
        returnValue = F("Uitweg");
        break;
    }
    case 312409:
    {
        returnValue = F("Uitzenstr.");
        break;
    }
    case 312410:
    {
        returnValue = F("Ukeleiweg");
        break;
    }
    case 312411:
    {
        returnValue = F("Ukenastr.");
        break;
    }
    case 312412:
    {
        returnValue = F("Uker Platz");
        break;
    }
    case 312413:
    {
        returnValue = F("Uker Str.");
        break;
    }
    case 312414:
    {
        returnValue = F("Uko-Benen-Str.");
        break;
    }
    case 312415:
    {
        returnValue = F("Ukoweg");
        break;
    }
    case 312416:
    {
        returnValue = F("Ukrainestr.");
        break;
    }
    case 312417:
    {
        returnValue = F("Ukranenstr.");
        break;
    }
    case 312418:
    {
        returnValue = F("Ulan-Bator-Str.");
        break;
    }
    case 312419:
    {
        returnValue = F("Ulan-Becker-Str.");
        break;
    }
    case 312420:
    {
        returnValue = F("Ulanenhöhe");
        break;
    }
    case 312421:
    {
        returnValue = F("Ulanenplatz");
        break;
    }
    case 312422:
    {
        returnValue = F("Ulanenring");
        break;
    }
    case 312423:
    {
        returnValue = F("Ulanenstieg");
        break;
    }
    case 312424:
    {
        returnValue = F("Ulanenstr.");
        break;
    }
    case 312425:
    {
        returnValue = F("Ulanenweg");
        break;
    }
    case 312426:
    {
        returnValue = F("Ulbarger Str.");
        break;
    }
    case 312427:
    {
        returnValue = F("Ulbarger Weg");
        break;
    }
    case 312428:
    {
        returnValue = F("Ulberinger Str.");
        break;
    }
    case 312429:
    {
        returnValue = F("Ulberndorf, An der Niedermühle (1)");
        break;
    }
    case 312430:
    {
        returnValue = F("Ulberndorfer Str.");
        break;
    }
    case 312431:
    {
        returnValue = F("Ulberndorfer Weg");
        break;
    }
    case 312432:
    {
        returnValue = F("Ulbersdorfer Weg");
        break;
    }
    case 312433:
    {
        returnValue = F("Ulbersstr.");
        break;
    }
    case 312434:
    {
        returnValue = F("Ulbrichts Weg");
        break;
    }
    case 312435:
    {
        returnValue = F("Ulbrichtstr.");
        break;
    }
    case 312436:
    {
        returnValue = F("Ulbtlandstr.");
        break;
    }
    case 312437:
    {
        returnValue = F("Ulegraff");
        break;
    }
    case 312438:
    {
        returnValue = F("Ulehoi");
        break;
    }
    case 312439:
    {
        returnValue = F("Ulemannssiepen");
        break;
    }
    case 312440:
    {
        returnValue = F("Ulenaue");
        break;
    }
    case 312441:
    {
        returnValue = F("Ulenbarg");
        break;
    }
    case 312442:
    {
        returnValue = F("Ulenbergstr.");
        break;
    }
    case 312443:
    {
        returnValue = F("Ulenbroich");
        break;
    }
    case 312444:
    {
        returnValue = F("Ulenbroichstr.");
        break;
    }
    case 312445:
    {
        returnValue = F("Ulenburger Buchenallee");
        break;
    }
    case 312446:
    {
        returnValue = F("Ulenburger Weg");
        break;
    }
    case 312447:
    {
        returnValue = F("Ulenbäckerweg");
        break;
    }
    case 312448:
    {
        returnValue = F("Ulenfeldweg");
        break;
    }
    case 312449:
    {
        returnValue = F("Ulenflucht");
        break;
    }
    case 312450:
    {
        returnValue = F("Ulenhorst");
        break;
    }
    case 312451:
    {
        returnValue = F("Ulenkamp");
        break;
    }
    case 312452:
    {
        returnValue = F("Ulenmoorweg");
        break;
    }
    case 312453:
    {
        returnValue = F("Ulenpad");
        break;
    }
    case 312454:
    {
        returnValue = F("Ulenstein");
        break;
    }
    case 312455:
    {
        returnValue = F("Ulenstr.");
        break;
    }
    case 312456:
    {
        returnValue = F("Ulenweg");
        break;
    }
    case 312457:
    {
        returnValue = F("Ulestr.");
        break;
    }
    case 312458:
    {
        returnValue = F("Uleweg");
        break;
    }
    case 312459:
    {
        returnValue = F("Ulfaer Str.");
        break;
    }
    case 312460:
    {
        returnValue = F("Ulfaer Weg");
        break;
    }
    case 312461:
    {
        returnValue = F("Ulfenbachstr.");
        break;
    }
    case 312462:
    {
        returnValue = F("Ulfenburg");
        break;
    }
    case 312463:
    {
        returnValue = F("Ulfenmühle");
        break;
    }
    case 312464:
    {
        returnValue = F("Ulfert-Lüken-Str.");
        break;
    }
    case 312465:
    {
        returnValue = F("Ulfetalstr.");
        break;
    }
    case 312466:
    {
        returnValue = F("Ulfilasstr.");
        break;
    }
    case 312467:
    {
        returnValue = F("Ulfkotter Str.");
        break;
    }
    case 312468:
    {
        returnValue = F("Ulfridstr.");
        break;
    }
    case 312469:
    {
        returnValue = F("Ulhaus");
        break;
    }
    case 312470:
    {
        returnValue = F("Ulhausgasse");
        break;
    }
    case 312471:
    {
        returnValue = F("Uli-Biesinger-Weg");
        break;
    }
    case 312472:
    {
        returnValue = F("Uli-Kollmar-Kanzel");
        break;
    }
    case 312473:
    {
        returnValue = F("Uli-Wieland-Str.");
        break;
    }
    case 312474:
    {
        returnValue = F("Ulica Ciechanowiec");
        break;
    }
    case 312475:
    {
        returnValue = F("Ulitzhörn");
        break;
    }
    case 312476:
    {
        returnValue = F("Ulitzkastr.");
        break;
    }
    case 312477:
    {
        returnValue = F("Ulker-Gass");
        break;
    }
    case 312478:
    {
        returnValue = F("Ullannsweg");
        break;
    }
    case 312479:
    {
        returnValue = F("Ullastr.");
        break;
    }
    case 312480:
    {
        returnValue = F("Ullenbeck");
        break;
    }
    case 312481:
    {
        returnValue = F("Ullenburgstr.");
        break;
    }
    case 312482:
    {
        returnValue = F("Ullendorfer Str.");
        break;
    }
    case 312483:
    {
        returnValue = F("Ullengraben");
        break;
    }
    case 312484:
    {
        returnValue = F("Ullenstr.");
        break;
    }
    case 312485:
    {
        returnValue = F("Ullergasse");
        break;
    }
    case 312486:
    {
        returnValue = F("Ullersdorf-Langebrücker Str.");
        break;
    }
    case 312487:
    {
        returnValue = F("Ullersdorf-Langebrücker Str. (5)");
        break;
    }
    case 312488:
    {
        returnValue = F("Ullersdorfer Dorfstr.");
        break;
    }
    case 312489:
    {
        returnValue = F("Ullersdorfer Hauptstr.");
        break;
    }
    case 312490:
    {
        returnValue = F("Ullersdorfer Landstr.");
        break;
    }
    case 312491:
    {
        returnValue = F("Ullersdorfer Mühle");
        break;
    }
    case 312492:
    {
        returnValue = F("Ullersdorfer Platz");
        break;
    }
    case 312493:
    {
        returnValue = F("Ullersdorfer Str.");
        break;
    }
    case 312494:
    {
        returnValue = F("Ullersdorfer Weg");
        break;
    }
    case 312495:
    {
        returnValue = F("Ullersreuth");
        break;
    }
    case 312496:
    {
        returnValue = F("Ullersreuth-Str.");
        break;
    }
    case 312497:
    {
        returnValue = F("Ullersreuther Weg");
        break;
    }
    case 312498:
    {
        returnValue = F("Ullersrichter Str.");
        break;
    }
    case 312499:
    {
        returnValue = F("Ullerst");
        break;
    }
    case 312500:
    {
        returnValue = F("Ullitz");
        break;
    }
    case 312501:
    {
        returnValue = F("Ullitzstr.");
        break;
    }
    case 312502:
    {
        returnValue = F("Ulliweg");
        break;
    }
    case 312503:
    {
        returnValue = F("Ullmanns Weg");
        break;
    }
    case 312504:
    {
        returnValue = F("Ullmannstr.");
        break;
    }
    case 312505:
    {
        returnValue = F("Ullmeng");
        break;
    }
    case 312506:
    {
        returnValue = F("Ullrich-Prigge-Weg");
        break;
    }
    case 312507:
    {
        returnValue = F("Ullrich-Römer-Weg");
        break;
    }
    case 312508:
    {
        returnValue = F("Ullrichsberg");
        break;
    }
    case 312509:
    {
        returnValue = F("Ullrichshof");
        break;
    }
    case 312510:
    {
        returnValue = F("Ullrichsmühle");
        break;
    }
    case 312511:
    {
        returnValue = F("Ullrichstr.");
        break;
    }
    case 312512:
    {
        returnValue = F("Ullrichsweg");
        break;
    }
    case 312513:
    {
        returnValue = F("Ullsteinstr.");
        break;
    }
    case 312514:
    {
        returnValue = F("Ullstädter Str.");
        break;
    }
    case 312515:
    {
        returnValue = F("Ulmbacher Str.");
        break;
    }
    case 312516:
    {
        returnValue = F("Ulmbacher Weg");
        break;
    }
    case 312517:
    {
        returnValue = F("Ulmbachstr.");
        break;
    }
    case 312518:
    {
        returnValue = F("Ulmbachtalbahn");
        break;
    }
    case 312519:
    {
        returnValue = F("Ulmbauergasse");
        break;
    }
    case 312520:
    {
        returnValue = F("Ulmecker Siepen");
        break;
    }
    case 312521:
    {
        returnValue = F("Ulmen - Mosbacher - Weg");
        break;
    }
    case 312522:
    {
        returnValue = F("Ulmen-Mosbach-Weg");
        break;
    }
    case 312523:
    {
        returnValue = F("Ulmenallee");
        break;
    }
    case 312524:
    {
        returnValue = F("Ulmendonk");
        break;
    }
    case 312525:
    {
        returnValue = F("Ulmener Str.");
        break;
    }
    case 312526:
    {
        returnValue = F("Ulmengarten");
        break;
    }
    case 312527:
    {
        returnValue = F("Ulmengasse");
        break;
    }
    case 312528:
    {
        returnValue = F("Ulmenhain");
        break;
    }
    case 312529:
    {
        returnValue = F("Ulmenhang");
        break;
    }
    case 312530:
    {
        returnValue = F("Ulmenhof");
        break;
    }
    case 312531:
    {
        returnValue = F("Ulmenhof-Park");
        break;
    }
    case 312532:
    {
        returnValue = F("Ulmenhurstweg");
        break;
    }
    case 312533:
    {
        returnValue = F("Ulmenkamp");
        break;
    }
    case 312534:
    {
        returnValue = F("Ulmenkopf");
        break;
    }
    case 312535:
    {
        returnValue = F("Ulmenkoppel");
        break;
    }
    case 312536:
    {
        returnValue = F("Ulmenmarkt");
        break;
    }
    case 312537:
    {
        returnValue = F("Ulmenplatz");
        break;
    }
    case 312538:
    {
        returnValue = F("Ulmenried");
        break;
    }
    case 312539:
    {
        returnValue = F("Ulmenring");
        break;
    }
    case 312540:
    {
        returnValue = F("Ulmenschneise");
        break;
    }
    case 312541:
    {
        returnValue = F("Ulmensteig");
        break;
    }
    case 312542:
    {
        returnValue = F("Ulmensteinstr.");
        break;
    }
    case 312543:
    {
        returnValue = F("Ulmensteinweg");
        break;
    }
    case 312544:
    {
        returnValue = F("Ulmenstieg");
        break;
    }
    case 312545:
    {
        returnValue = F("Ulmenstr.");
        break;
    }
    case 312546:
    {
        returnValue = F("Ulmenweg");
        break;
    }
    case 312547:
    {
        returnValue = F("Ulmer Berg");
        break;
    }
    case 312548:
    {
        returnValue = F("Ulmer Diagonale");
        break;
    }
    case 312549:
    {
        returnValue = F("Ulmer Gasse");
        break;
    }
    case 312550:
    {
        returnValue = F("Ulmer Hof");
        break;
    }
    case 312551:
    {
        returnValue = F("Ulmer Kraftwerk Öpfingen");
        break;
    }
    case 312552:
    {
        returnValue = F("Ulmer Kreuz");
        break;
    }
    case 312553:
    {
        returnValue = F("Ulmer Landstr.");
        break;
    }
    case 312554:
    {
        returnValue = F("Ulmer Pfarrmättle");
        break;
    }
    case 312555:
    {
        returnValue = F("Ulmer Platz");
        break;
    }
    case 312556:
    {
        returnValue = F("Ulmer Ried");
        break;
    }
    case 312557:
    {
        returnValue = F("Ulmer Schanz");
        break;
    }
    case 312558:
    {
        returnValue = F("Ulmer Steige");
        break;
    }
    case 312559:
    {
        returnValue = F("Ulmer Str.");
        break;
    }
    case 312560:
    {
        returnValue = F("Ulmer Tal");
        break;
    }
    case 312561:
    {
        returnValue = F("Ulmer Weg");
        break;
    }
    case 312562:
    {
        returnValue = F("Ulmer Werth");
        break;
    }
    case 312563:
    {
        returnValue = F("Ulmer-Alb-Str.");
        break;
    }
    case 312564:
    {
        returnValue = F("Ulmer-Boten-Weg");
        break;
    }
    case 312565:
    {
        returnValue = F("Ulmer-Steig-Esch");
        break;
    }
    case 312566:
    {
        returnValue = F("Ulmer-Str.");
        break;
    }
    case 312567:
    {
        returnValue = F("Ulmer-Tor-Str.");
        break;
    }
    case 312568:
    {
        returnValue = F("Ulmergasse");
        break;
    }
    case 312569:
    {
        returnValue = F("Ulmerstr.");
        break;
    }
    case 312570:
    {
        returnValue = F("Ulmerweg");
        break;
    }
    case 312571:
    {
        returnValue = F("Ulmhof");
        break;
    }
    case 312572:
    {
        returnValue = F("Ulmisriedweg");
        break;
    }
    case 312573:
    {
        returnValue = F("Ulmke-Forum");
        break;
    }
    case 312574:
    {
        returnValue = F("Ulmtalstr.");
        break;
    }
    case 312575:
    {
        returnValue = F("Ulmweg");
        break;
    }
    case 312576:
    {
        returnValue = F("Ulner Dreieck");
        break;
    }
    case 312577:
    {
        returnValue = F("Ulnerstr.");
        break;
    }
    case 312578:
    {
        returnValue = F("Ulrather Blick");
        break;
    }
    case 312579:
    {
        returnValue = F("Ulrich O. Dahlke Platz");
        break;
    }
    case 312580:
    {
        returnValue = F("Ulrich-Bergmann-Str.");
        break;
    }
    case 312581:
    {
        returnValue = F("Ulrich-Brisch-Weg");
        break;
    }
    case 312582:
    {
        returnValue = F("Ulrich-Burggraf-Str.");
        break;
    }
    case 312583:
    {
        returnValue = F("Ulrich-Cirksena-Str.");
        break;
    }
    case 312584:
    {
        returnValue = F("Ulrich-Corti-Str.");
        break;
    }
    case 312585:
    {
        returnValue = F("Ulrich-Debler-Str.");
        break;
    }
    case 312586:
    {
        returnValue = F("Ulrich-Etter-Str.");
        break;
    }
    case 312587:
    {
        returnValue = F("Ulrich-Fabry-Str.");
        break;
    }
    case 312588:
    {
        returnValue = F("Ulrich-Faißt-Str.");
        break;
    }
    case 312589:
    {
        returnValue = F("Ulrich-Fischer-Weg");
        break;
    }
    case 312590:
    {
        returnValue = F("Ulrich-Frank-Weg");
        break;
    }
    case 312591:
    {
        returnValue = F("Ulrich-Fust-Str.");
        break;
    }
    case 312592:
    {
        returnValue = F("Ulrich-Gast-Weg");
        break;
    }
    case 312593:
    {
        returnValue = F("Ulrich-Geh-Str.");
        break;
    }
    case 312594:
    {
        returnValue = F("Ulrich-Gleutz-Str.");
        break;
    }
    case 312595:
    {
        returnValue = F("Ulrich-Gminder-Weg");
        break;
    }
    case 312596:
    {
        returnValue = F("Ulrich-Günther-Str.");
        break;
    }
    case 312597:
    {
        returnValue = F("Ulrich-Haberland-Str.");
        break;
    }
    case 312598:
    {
        returnValue = F("Ulrich-Hahn-Str.");
        break;
    }
    case 312599:
    {
        returnValue = F("Ulrich-Haid-Str.");
        break;
    }
    case 312600:
    {
        returnValue = F("Ulrich-Herold-Str.");
        break;
    }
    case 312601:
    {
        returnValue = F("Ulrich-Hiltl-Str.");
        break;
    }
    case 312602:
    {
        returnValue = F("Ulrich-Hofmaier-Str.");
        break;
    }
    case 312603:
    {
        returnValue = F("Ulrich-Huber-Weg");
        break;
    }
    case 312604:
    {
        returnValue = F("Ulrich-Häntler-Str.");
        break;
    }
    case 312605:
    {
        returnValue = F("Ulrich-Hübner-Str.");
        break;
    }
    case 312606:
    {
        returnValue = F("Ulrich-Jakobi-Wallstr.");
        break;
    }
    case 312607:
    {
        returnValue = F("Ulrich-Kiffhaber-Str.");
        break;
    }
    case 312608:
    {
        returnValue = F("Ulrich-Kortler-Weg");
        break;
    }
    case 312609:
    {
        returnValue = F("Ulrich-Kuderer-Str.");
        break;
    }
    case 312610:
    {
        returnValue = F("Ulrich-Kühn-Str.");
        break;
    }
    case 312611:
    {
        returnValue = F("Ulrich-Loth-Str.");
        break;
    }
    case 312612:
    {
        returnValue = F("Ulrich-Mull-Str.");
        break;
    }
    case 312613:
    {
        returnValue = F("Ulrich-Mühe-Str.");
        break;
    }
    case 312614:
    {
        returnValue = F("Ulrich-Müther-Platz");
        break;
    }
    case 312615:
    {
        returnValue = F("Ulrich-Nanshaimer-Str.");
        break;
    }
    case 312616:
    {
        returnValue = F("Ulrich-Neeb-Str.");
        break;
    }
    case 312617:
    {
        returnValue = F("Ulrich-Otto-Str.");
        break;
    }
    case 312618:
    {
        returnValue = F("Ulrich-Peisser-Gasse");
        break;
    }
    case 312619:
    {
        returnValue = F("Ulrich-Pfeiffer-Str.");
        break;
    }
    case 312620:
    {
        returnValue = F("Ulrich-Post-Str.");
        break;
    }
    case 312621:
    {
        returnValue = F("Ulrich-Pucher-Str.");
        break;
    }
    case 312622:
    {
        returnValue = F("Ulrich-Putsch-Str.");
        break;
    }
    case 312623:
    {
        returnValue = F("Ulrich-Rapp-Str.");
        break;
    }
    case 312624:
    {
        returnValue = F("Ulrich-Rocksloh-Str.");
        break;
    }
    case 312625:
    {
        returnValue = F("Ulrich-Rommel-Str.");
        break;
    }
    case 312626:
    {
        returnValue = F("Ulrich-Rösch-Weg");
        break;
    }
    case 312627:
    {
        returnValue = F("Ulrich-Rülein-Str.");
        break;
    }
    case 312628:
    {
        returnValue = F("Ulrich-Schalk-Str.");
        break;
    }
    case 312629:
    {
        returnValue = F("Ulrich-Schiegg-Str.");
        break;
    }
    case 312630:
    {
        returnValue = F("Ulrich-Schmid-Str.");
        break;
    }
    case 312631:
    {
        returnValue = F("Ulrich-Schmidl-Str.");
        break;
    }
    case 312632:
    {
        returnValue = F("Ulrich-Schmitt-Str.");
        break;
    }
    case 312633:
    {
        returnValue = F("Ulrich-Schuder-Str.");
        break;
    }
    case 312634:
    {
        returnValue = F("Ulrich-Schwarz-Str.");
        break;
    }
    case 312635:
    {
        returnValue = F("Ulrich-Schweizer-Str.");
        break;
    }
    case 312636:
    {
        returnValue = F("Ulrich-Schönberger-Str.");
        break;
    }
    case 312637:
    {
        returnValue = F("Ulrich-Stechele-Str.");
        break;
    }
    case 312638:
    {
        returnValue = F("Ulrich-Steinhauer-Str.");
        break;
    }
    case 312639:
    {
        returnValue = F("Ulrich-Stöckl-Str.");
        break;
    }
    case 312640:
    {
        returnValue = F("Ulrich-Thater-Str.");
        break;
    }
    case 312641:
    {
        returnValue = F("Ulrich-Trinkler-Str.");
        break;
    }
    case 312642:
    {
        returnValue = F("Ulrich-Veist-Str.");
        break;
    }
    case 312643:
    {
        returnValue = F("Ulrich-Venzlaff-Str.");
        break;
    }
    case 312644:
    {
        returnValue = F("Ulrich-Wegener-Str.");
        break;
    }
    case 312645:
    {
        returnValue = F("Ulrich-Weinerth-Platz");
        break;
    }
    case 312646:
    {
        returnValue = F("Ulrich-Willer-Str.");
        break;
    }
    case 312647:
    {
        returnValue = F("Ulrich-Wurmser-Weg");
        break;
    }
    case 312648:
    {
        returnValue = F("Ulrich-Zell-Str.");
        break;
    }
    case 312649:
    {
        returnValue = F("Ulrich-van-Dornum-Str.");
        break;
    }
    case 312650:
    {
        returnValue = F("Ulrich-von-Dornum-Str.");
        break;
    }
    case 312651:
    {
        returnValue = F("Ulrich-von-Ensingen-Str.");
        break;
    }
    case 312652:
    {
        returnValue = F("Ulrich-von-Hassel-Str.");
        break;
    }
    case 312653:
    {
        returnValue = F("Ulrich-von-Hassell-Str.");
        break;
    }
    case 312654:
    {
        returnValue = F("Ulrich-von-Hassell-Weg");
        break;
    }
    case 312655:
    {
        returnValue = F("Ulrich-von-Helfenstein-Weg");
        break;
    }
    case 312656:
    {
        returnValue = F("Ulrich-von-Hutten-Str.");
        break;
    }
    case 312657:
    {
        returnValue = F("Ulrich-von-Hutten-Weg");
        break;
    }
    case 312658:
    {
        returnValue = F("Ulrich-von-Pusch-Str.");
        break;
    }
    case 312659:
    {
        returnValue = F("Ulrich-von-Stein-Str.");
        break;
    }
    case 312660:
    {
        returnValue = F("Ulrich-von-Thürheim-Weg");
        break;
    }
    case 312661:
    {
        returnValue = F("Ulrichertor");
        break;
    }
    case 312662:
    {
        returnValue = F("Ulrichgasse");
        break;
    }
    case 312663:
    {
        returnValue = F("Ulrichplatz");
        break;
    }
    case 312664:
    {
        returnValue = F("Ulrichs Helgen");
        break;
    }
    case 312665:
    {
        returnValue = F("Ulrichs Kamp");
        break;
    }
    case 312666:
    {
        returnValue = F("Ulrichs-Au-Str.");
        break;
    }
    case 312667:
    {
        returnValue = F("Ulrichsberg");
        break;
    }
    case 312668:
    {
        returnValue = F("Ulrichsberg-Weg");
        break;
    }
    case 312669:
    {
        returnValue = F("Ulrichsberger Str.");
        break;
    }
    case 312670:
    {
        returnValue = F("Ulrichsbergstr.");
        break;
    }
    case 312671:
    {
        returnValue = F("Ulrichsbronnenweg");
        break;
    }
    case 312672:
    {
        returnValue = F("Ulrichsbrunnenweg");
        break;
    }
    case 312673:
    {
        returnValue = F("Ulrichsbrücke");
        break;
    }
    case 312674:
    {
        returnValue = F("Ulrichschneise");
        break;
    }
    case 312675:
    {
        returnValue = F("Ulrichschwimmbach");
        break;
    }
    case 312676:
    {
        returnValue = F("Ulrichsfeld");
        break;
    }
    case 312677:
    {
        returnValue = F("Ulrichsgarten");
        break;
    }
    case 312678:
    {
        returnValue = F("Ulrichsgasse");
        break;
    }
    case 312679:
    {
        returnValue = F("Ulrichsgrüner Str.");
        break;
    }
    case 312680:
    {
        returnValue = F("Ulrichshart");
        break;
    }
    case 312681:
    {
        returnValue = F("Ulrichsheide");
        break;
    }
    case 312682:
    {
        returnValue = F("Ulrichsheimstr.");
        break;
    }
    case 312683:
    {
        returnValue = F("Ulrichshof");
        break;
    }
    case 312684:
    {
        returnValue = F("Ulrichshofer Weg");
        break;
    }
    case 312685:
    {
        returnValue = F("Ulrichsholz");
        break;
    }
    case 312686:
    {
        returnValue = F("Ulrichshögler Str.");
        break;
    }
    case 312687:
    {
        returnValue = F("Ulrichsklinge");
        break;
    }
    case 312688:
    {
        returnValue = F("Ulrichsmahd");
        break;
    }
    case 312689:
    {
        returnValue = F("Ulrichsmühle");
        break;
    }
    case 312690:
    {
        returnValue = F("Ulrichsrain");
        break;
    }
    case 312691:
    {
        returnValue = F("Ulrichsreinweg");
        break;
    }
    case 312692:
    {
        returnValue = F("Ulrichsring");
        break;
    }
    case 312693:
    {
        returnValue = F("Ulrichsstr.");
        break;
    }
    case 312694:
    {
        returnValue = F("Ulrichstal");
        break;
    }
    case 312695:
    {
        returnValue = F("Ulrichsteig");
        break;
    }
    case 312696:
    {
        returnValue = F("Ulrichsteiner Str.");
        break;
    }
    case 312697:
    {
        returnValue = F("Ulrichsteiner Weg");
        break;
    }
    case 312698:
    {
        returnValue = F("Ulrichstr.");
        break;
    }
    case 312699:
    {
        returnValue = F("Ulrichswall");
        break;
    }
    case 312700:
    {
        returnValue = F("Ulrichsweg");
        break;
    }
    case 312701:
    {
        returnValue = F("Ulrichswiesen");
        break;
    }
    case 312702:
    {
        returnValue = F("Ulrichweg");
        break;
    }
    case 312703:
    {
        returnValue = F("Ulrideshuser Str.");
        break;
    }
    case 312704:
    {
        returnValue = F("Ulrika-Nisch-Str.");
        break;
    }
    case 312705:
    {
        returnValue = F("Ulrike-Meinhof-Str.");
        break;
    }
    case 312706:
    {
        returnValue = F("Ulrike-Scheffler-Rother-Str.");
        break;
    }
    case 312707:
    {
        returnValue = F("Ulrike-von-Heynitz-Str.");
        break;
    }
    case 312708:
    {
        returnValue = F("Ulrikenhof");
        break;
    }
    case 312709:
    {
        returnValue = F("Ulrikenstr.");
        break;
    }
    case 312710:
    {
        returnValue = F("Ulrikenweg");
        break;
    }
    case 312711:
    {
        returnValue = F("Ulsbachstr.");
        break;
    }
    case 312712:
    {
        returnValue = F("Ulsenbachstr.");
        break;
    }
    case 312713:
    {
        returnValue = F("Ulsenheim");
        break;
    }
    case 312714:
    {
        returnValue = F("Ulsenheimer Str.");
        break;
    }
    case 312715:
    {
        returnValue = F("Ulsleben-Gasse");
        break;
    }
    case 312716:
    {
        returnValue = F("Ulsnis-Kirchenholz");
        break;
    }
    case 312717:
    {
        returnValue = F("Ulsnisfeld");
        break;
    }
    case 312718:
    {
        returnValue = F("Ulsnishöh");
        break;
    }
    case 312719:
    {
        returnValue = F("Ulsnisstrand");
        break;
    }
    case 312720:
    {
        returnValue = F("Ulster-Ottilienrain");
        break;
    }
    case 312721:
    {
        returnValue = F("Ulstermühle");
        break;
    }
    case 312722:
    {
        returnValue = F("Ulsterstr.");
        break;
    }
    case 312723:
    {
        returnValue = F("Ulstertalradweg");
        break;
    }
    case 312724:
    {
        returnValue = F("Ulsterweg");
        break;
    }
    case 312725:
    {
        returnValue = F("Ulstettstr.");
        break;
    }
    case 312726:
    {
        returnValue = F("Ulstrup");
        break;
    }
    case 312727:
    {
        returnValue = F("Ulstrupfeld");
        break;
    }
    case 312728:
    {
        returnValue = F("Ultenweg");
        break;
    }
    case 312729:
    {
        returnValue = F("Ultner Weg");
        break;
    }
    case 312730:
    {
        returnValue = F("Ultzheimer Str.");
        break;
    }
    case 312731:
    {
        returnValue = F("Ulugasse");
        break;
    }
    case 312732:
    {
        returnValue = F("Ulvenbergstr.");
        break;
    }
    case 312733:
    {
        returnValue = F("Ulweg");
        break;
    }
    case 312734:
    {
        returnValue = F("Ulzburger Landstr.");
        break;
    }
    case 312735:
    {
        returnValue = F("Ulzburger Str.");
        break;
    }
    case 312736:
    {
        returnValue = F("Ulzhausen");
        break;
    }
    case 312737:
    {
        returnValue = F("Ulzheimer Str.");
        break;
    }
    case 312738:
    {
        returnValue = F("Ulzheimer Weg");
        break;
    }
    case 312739:
    {
        returnValue = F("Ulzigeröder Bergstr.");
        break;
    }
    case 312740:
    {
        returnValue = F("Ulzigeröder Gartenstr.");
        break;
    }
    case 312741:
    {
        returnValue = F("Ulzigeröder Hauptstr.");
        break;
    }
    case 312742:
    {
        returnValue = F("Ulzigeröder Siedlung");
        break;
    }
    case 312743:
    {
        returnValue = F("Ulzigeröder Str.");
        break;
    }
    case 312744:
    {
        returnValue = F("Ulzigeröder Weg");
        break;
    }
    case 312745:
    {
        returnValue = F("Um Kap Horn");
        break;
    }
    case 312746:
    {
        returnValue = F("Um Krünken");
        break;
    }
    case 312747:
    {
        returnValue = F("Um Süd");
        break;
    }
    case 312748:
    {
        returnValue = F("Um de Eck");
        break;
    }
    case 312749:
    {
        returnValue = F("Um de Möhl");
        break;
    }
    case 312750:
    {
        returnValue = F("Um de Wurth");
        break;
    }
    case 312751:
    {
        returnValue = F("Um den Bau");
        break;
    }
    case 312752:
    {
        returnValue = F("Um den Dornhau");
        break;
    }
    case 312753:
    {
        returnValue = F("Um den Lattenberg");
        break;
    }
    case 312754:
    {
        returnValue = F("Um den Staufen");
        break;
    }
    case 312755:
    {
        returnValue = F("Um die Eichen");
        break;
    }
    case 312756:
    {
        returnValue = F("Um die Hah");
        break;
    }
    case 312757:
    {
        returnValue = F("Um die Kirche");
        break;
    }
    case 312758:
    {
        returnValue = F("Um die Linde");
        break;
    }
    case 312759:
    {
        returnValue = F("Um die Sang");
        break;
    }
    case 312760:
    {
        returnValue = F("Um die Teiche");
        break;
    }
    case 312761:
    {
        returnValue = F("Um die Weiher");
        break;
    }
    case 312762:
    {
        returnValue = F("Um die Woot");
        break;
    }
    case 312763:
    {
        returnValue = F("Umbach");
        break;
    }
    case 312764:
    {
        returnValue = F("Umbacher Str.");
        break;
    }
    case 312765:
    {
        returnValue = F("Umbachstr.");
        break;
    }
    case 312766:
    {
        returnValue = F("Umbachsweg");
        break;
    }
    case 312767:
    {
        returnValue = F("Umbachweg");
        break;
    }
    case 312768:
    {
        returnValue = F("Umbeckweg");
        break;
    }
    case 312769:
    {
        returnValue = F("Umbenhauerstr.");
        break;
    }
    case 312770:
    {
        returnValue = F("Umberto-Nobile-Str.");
        break;
    }
    case 312771:
    {
        returnValue = F("Umbertshausener Kirchweg");
        break;
    }
    case 312772:
    {
        returnValue = F("Umbertshausener Weg");
        break;
    }
    case 312773:
    {
        returnValue = F("Umbreitstr.");
        break;
    }
    case 312774:
    {
        returnValue = F("Umbucht");
        break;
    }
    case 312775:
    {
        returnValue = F("Umdeich");
        break;
    }
    case 312776:
    {
        returnValue = F("Umdraht");
        break;
    }
    case 312777:
    {
        returnValue = F("Umelausträßchen");
        break;
    }
    case 312778:
    {
        returnValue = F("Umelsdorfer Str.");
        break;
    }
    case 312779:
    {
        returnValue = F("Umenhofstr.");
        break;
    }
    case 312780:
    {
        returnValue = F("Umenlauhweg");
        break;
    }
    case 312781:
    {
        returnValue = F("Umfahrungsweg Außenpark Branitz");
        break;
    }
    case 312782:
    {
        returnValue = F("Umfangstr.");
        break;
    }
    case 312783:
    {
        returnValue = F("Umfassungsstr.");
        break;
    }
    case 312784:
    {
        returnValue = F("Umfassungsweg");
        break;
    }
    case 312785:
    {
        returnValue = F("Umflutbrücke");
        break;
    }
    case 312786:
    {
        returnValue = F("Umformerweg");
        break;
    }
    case 312787:
    {
        returnValue = F("Umgangweg");
        break;
    }
    case 312788:
    {
        returnValue = F("Umgasse");
        break;
    }
    case 312789:
    {
        returnValue = F("Umgebindehauspark");
        break;
    }
    case 312790:
    {
        returnValue = F("Umgehung Baustelle zum Schmerbruch");
        break;
    }
    case 312791:
    {
        returnValue = F("Umgehung Haltingen");
        break;
    }
    case 312792:
    {
        returnValue = F("Umgehung Pampow");
        break;
    }
    case 312793:
    {
        returnValue = F("Umgehung Römerstr.");
        break;
    }
    case 312794:
    {
        returnValue = F("Umgehung Steinbach Süd");
        break;
    }
    case 312795:
    {
        returnValue = F("Umgehungsstr.");
        break;
    }
    case 312796:
    {
        returnValue = F("Umgehungsstr. Aerzen");
        break;
    }
    case 312797:
    {
        returnValue = F("Umgehungsstr. Ebringen");
        break;
    }
    case 312798:
    {
        returnValue = F("Umgehungsstr. Großwelzheim");
        break;
    }
    case 312799:
    {
        returnValue = F("Umgehungsstr. Nord");
        break;
    }
    case 312800:
    {
        returnValue = F("Umgehungsstr. Ostrach");
        break;
    }
    case 312801:
    {
        returnValue = F("Umgehungsstr. Schliengen");
        break;
    }
    case 312802:
    {
        returnValue = F("Umgehungsstr. Unterrohn");
        break;
    }
    case 312803:
    {
        returnValue = F("Umgehungstr.");
        break;
    }
    case 312804:
    {
        returnValue = F("Umgehungsweg");
        break;
    }
    case 312805:
    {
        returnValue = F("Umgelterstr.");
        break;
    }
    case 312806:
    {
        returnValue = F("Umgelterweg");
        break;
    }
    case 312807:
    {
        returnValue = F("Umhausener Str.");
        break;
    }
    case 312808:
    {
        returnValue = F("Umhausener Weg");
        break;
    }
    case 312809:
    {
        returnValue = F("Umkehr");
        break;
    }
    case 312810:
    {
        returnValue = F("Umkehrstr.");
        break;
    }
    case 312811:
    {
        returnValue = F("Umkircher Str.");
        break;
    }
    case 312812:
    {
        returnValue = F("Umlachstr.");
        break;
    }
    case 312813:
    {
        returnValue = F("Umlag");
        break;
    }
    case 312814:
    {
        returnValue = F("Umlangskoppel");
        break;
    }
    case 312815:
    {
        returnValue = F("Umlauf");
        break;
    }
    case 312816:
    {
        returnValue = F("Umleitung");
        break;
    }
    case 312817:
    {
        returnValue = F("Umleitung Via Agrippa");
        break;
    }
    case 312818:
    {
        returnValue = F("Umleitung Wanderwege A1/A8/X17");
        break;
    }
    case 312819:
    {
        returnValue = F("Umleitung zur Westenstr.");
        break;
    }
    case 312820:
    {
        returnValue = F("Umleitungsdeich");
        break;
    }
    case 312821:
    {
        returnValue = F("Umlostr.");
        break;
    }
    case 312822:
    {
        returnValue = F("Umländerwiek");
        break;
    }
    case 312823:
    {
        returnValue = F("Umländerwiek links");
        break;
    }
    case 312824:
    {
        returnValue = F("Umländerwiek rechts");
        break;
    }
    case 312825:
    {
        returnValue = F("Umläufer");
        break;
    }
    case 312826:
    {
        returnValue = F("Umlöper");
        break;
    }
    case 312827:
    {
        returnValue = F("Ummanzer Chaussee");
        break;
    }
    case 312828:
    {
        returnValue = F("Ummanzer Str.");
        break;
    }
    case 312829:
    {
        returnValue = F("Ummanzer Weg");
        break;
    }
    case 312830:
    {
        returnValue = F("Ummehof");
        break;
    }
    case 312831:
    {
        returnValue = F("Ummelner Pforte");
        break;
    }
    case 312832:
    {
        returnValue = F("Ummelner Str.");
        break;
    }
    case 312833:
    {
        returnValue = F("Ummelweg");
        break;
    }
    case 312834:
    {
        returnValue = F("Ummendorfer Feld");
        break;
    }
    case 312835:
    {
        returnValue = F("Ummendorfer Str.");
        break;
    }
    case 312836:
    {
        returnValue = F("Ummenweg");
        break;
    }
    case 312837:
    {
        returnValue = F("Ummenwinkel");
        break;
    }
    case 312838:
    {
        returnValue = F("Ummerkirchweg");
        break;
    }
    case 312839:
    {
        returnValue = F("Ummersche Heerstr.");
        break;
    }
    case 312840:
    {
        returnValue = F("Ummerstadter Str.");
        break;
    }
    case 312841:
    {
        returnValue = F("Ummerstr.");
        break;
    }
    case 312842:
    {
        returnValue = F("Ummertalweg");
        break;
    }
    case 312843:
    {
        returnValue = F("Ummethunstr.");
        break;
    }
    case 312844:
    {
        returnValue = F("Ummilostr.");
        break;
    }
    case 312845:
    {
        returnValue = F("Umpfenbacher Str.");
        break;
    }
    case 312846:
    {
        returnValue = F("Umpfenstr.");
        break;
    }
    case 312847:
    {
        returnValue = F("Umpfentalweg");
        break;
    }
    case 312848:
    {
        returnValue = F("Umpferblick");
        break;
    }
    case 312849:
    {
        returnValue = F("Umpferstedter Str.");
        break;
    }
    case 312850:
    {
        returnValue = F("Umpferweg");
        break;
    }
    case 312851:
    {
        returnValue = F("Umradstr.");
        break;
    }
    case 312852:
    {
        returnValue = F("Umrankweg");
        break;
    }
    case 312853:
    {
        returnValue = F("Umringweg");
        break;
    }
    case 312854:
    {
        returnValue = F("Ums Dorf");
        break;
    }
    case 312855:
    {
        returnValue = F("Ums klön Eck");
        break;
    }
    case 312856:
    {
        returnValue = F("Umsetzersträßle");
        break;
    }
    case 312857:
    {
        returnValue = F("Umsetzerweg");
        break;
    }
    case 312858:
    {
        returnValue = F("Umspannwerk");
        break;
    }
    case 312859:
    {
        returnValue = F("Umspannwerkstr.");
        break;
    }
    case 312860:
    {
        returnValue = F("Umsteig");
        break;
    }
    case 312861:
    {
        returnValue = F("Umsteiger");
        break;
    }
    case 312862:
    {
        returnValue = F("Umstr.");
        break;
    }
    case 312863:
    {
        returnValue = F("Umstädter Str.");
        break;
    }
    case 312864:
    {
        returnValue = F("Umtrage");
        break;
    }
    case 312865:
    {
        returnValue = F("Umtrageweg");
        break;
    }
    case 312866:
    {
        returnValue = F("Umtrageweg für Kanus");
        break;
    }
    case 312867:
    {
        returnValue = F("Umweg");
        break;
    }
    case 312868:
    {
        returnValue = F("Umweger Str.");
        break;
    }
    case 312869:
    {
        returnValue = F("UmweltInfoZentrum Eckernförde");
        break;
    }
    case 312870:
    {
        returnValue = F("UmweltKulturPark Dortmund");
        break;
    }
    case 312871:
    {
        returnValue = F("Umweltgarten");
        break;
    }
    case 312872:
    {
        returnValue = F("Umweltlehrgarten Haus am Strom");
        break;
    }
    case 312873:
    {
        returnValue = F("Umweltzentrum Heerser Mühle");
        break;
    }
    case 312874:
    {
        returnValue = F("Unabhängigkeitsstr.");
        break;
    }
    case 312875:
    {
        returnValue = F("Unaften");
        break;
    }
    case 312876:
    {
        returnValue = F("Uncel Harm seen Pad");
        break;
    }
    case 312877:
    {
        returnValue = F("Unckelstr.");
        break;
    }
    case 312878:
    {
        returnValue = F("Undeloher Str.");
        break;
    }
    case 312879:
    {
        returnValue = F("Undeloher Weg");
        break;
    }
    case 312880:
    {
        returnValue = F("Undenheimer Str.");
        break;
    }
    case 312881:
    {
        returnValue = F("Undenheimer Weg");
        break;
    }
    case 312882:
    {
        returnValue = F("Undeostr.");
        break;
    }
    case 312883:
    {
        returnValue = F("Undeoweg");
        break;
    }
    case 312884:
    {
        returnValue = F("Under de Diek");
        break;
    }
    case 312885:
    {
        returnValue = F("Under de Hinterwall");
        break;
    }
    case 312886:
    {
        returnValue = F("Underbergstr.");
        break;
    }
    case 312887:
    {
        returnValue = F("Underdiek");
        break;
    }
    case 312888:
    {
        returnValue = F("Underhook");
        break;
    }
    case 312889:
    {
        returnValue = F("Underweg");
        break;
    }
    case 312890:
    {
        returnValue = F("Undinenstr.");
        break;
    }
    case 312891:
    {
        returnValue = F("Undinenweg");
        break;
    }
    case 312892:
    {
        returnValue = F("Undinestr.");
        break;
    }
    case 312893:
    {
        returnValue = F("Undineweg");
        break;
    }
    case 312894:
    {
        returnValue = F("Undinger Str.");
        break;
    }
    case 312895:
    {
        returnValue = F("Unditzstr.");
        break;
    }
    case 312896:
    {
        returnValue = F("Undizstr.");
        break;
    }
    case 312897:
    {
        returnValue = F("Undorfer Str.");
        break;
    }
    case 312898:
    {
        returnValue = F("Unering");
        break;
    }
    case 312899:
    {
        returnValue = F("Uneringer Str.");
        break;
    }
    case 312900:
    {
        returnValue = F("Unertlstr.");
        break;
    }
    case 312901:
    {
        returnValue = F("Unewatter Str.");
        break;
    }
    case 312902:
    {
        returnValue = F("Unewattfeld");
        break;
    }
    case 312903:
    {
        returnValue = F("Unfaltstr.");
        break;
    }
    case 312904:
    {
        returnValue = F("Unfriedsdorf");
        break;
    }
    case 312905:
    {
        returnValue = F("Unfriedshausen");
        break;
    }
    case 312906:
    {
        returnValue = F("Unfriedshausener Str.");
        break;
    }
    case 312907:
    {
        returnValue = F("Unfriedstr.");
        break;
    }
    case 312908:
    {
        returnValue = F("Ungarischer Weg");
        break;
    }
    case 312909:
    {
        returnValue = F("Ungarndeutsche Str.");
        break;
    }
    case 312910:
    {
        returnValue = F("Ungarnpark");
        break;
    }
    case 312911:
    {
        returnValue = F("Ungarnplatz");
        break;
    }
    case 312912:
    {
        returnValue = F("Ungarnstr.");
        break;
    }
    case 312913:
    {
        returnValue = F("Ungartenstr.");
        break;
    }
    case 312914:
    {
        returnValue = F("Ungeheuerhof");
        break;
    }
    case 312915:
    {
        returnValue = F("Ungeheuertal");
        break;
    }
    case 312916:
    {
        returnValue = F("Ungeheuerweg");
        break;
    }
    case 312917:
    {
        returnValue = F("Ungeheurer Grund");
        break;
    }
    case 312918:
    {
        returnValue = F("Ungelsheimer Str.");
        break;
    }
    case 312919:
    {
        returnValue = F("Ungelsheimer Weg");
        break;
    }
    case 312920:
    {
        returnValue = F("Ungelstettener Str.");
        break;
    }
    case 312921:
    {
        returnValue = F("Ungelter Weg");
        break;
    }
    case 312922:
    {
        returnValue = F("Ungelterstr.");
        break;
    }
    case 312923:
    {
        returnValue = F("Ungenacher Str.");
        break;
    }
    case 312924:
    {
        returnValue = F("Ungenbachstr.");
        break;
    }
    case 312925:
    {
        returnValue = F("Ungendwieden");
        break;
    }
    case 312926:
    {
        returnValue = F("Ungerath");
        break;
    }
    case 312927:
    {
        returnValue = F("Ungerather Kirchweg");
        break;
    }
    case 312928:
    {
        returnValue = F("Ungerather Str.");
        break;
    }
    case 312929:
    {
        returnValue = F("Ungerbühlstr.");
        break;
    }
    case 312930:
    {
        returnValue = F("Ungererstr.");
        break;
    }
    case 312931:
    {
        returnValue = F("Ungergarten");
        break;
    }
    case 312932:
    {
        returnValue = F("Ungerhalde");
        break;
    }
    case 312933:
    {
        returnValue = F("Ungerhaldenweg");
        break;
    }
    case 312934:
    {
        returnValue = F("Ungerhaldeweg");
        break;
    }
    case 312935:
    {
        returnValue = F("Ungerhauser Str.");
        break;
    }
    case 312936:
    {
        returnValue = F("Ungerhauweg");
        break;
    }
    case 312937:
    {
        returnValue = F("Ungermannsweg");
        break;
    }
    case 312938:
    {
        returnValue = F("Ungernederstr.");
        break;
    }
    case 312939:
    {
        returnValue = F("Ungersborn");
        break;
    }
    case 312940:
    {
        returnValue = F("Ungerstr.");
        break;
    }
    case 312941:
    {
        returnValue = F("Ungerthal");
        break;
    }
    case 312942:
    {
        returnValue = F("Ungerthaler Str.");
        break;
    }
    case 312943:
    {
        returnValue = F("Ungerweg");
        break;
    }
    case 312944:
    {
        returnValue = F("Unghausen");
        break;
    }
    case 312945:
    {
        returnValue = F("Unghauser Str.");
        break;
    }
    case 312946:
    {
        returnValue = F("Ungibauerstr.");
        break;
    }
    case 312947:
    {
        returnValue = F("Unglinghausener Str.");
        break;
    }
    case 312948:
    {
        returnValue = F("Unglinghäuser Str.");
        break;
    }
    case 312949:
    {
        returnValue = F("Unglücksbergweg");
        break;
    }
    case 312950:
    {
        returnValue = F("Ungnad");
        break;
    }
    case 312951:
    {
        returnValue = F("Ungnade");
        break;
    }
    case 312952:
    {
        returnValue = F("Ungnader Weg");
        break;
    }
    case 312953:
    {
        returnValue = F("Ungsteiner Str.");
        break;
    }
    case 312954:
    {
        returnValue = F("Unhalde");
        break;
    }
    case 312955:
    {
        returnValue = F("Unhaldestr.");
        break;
    }
    case 312956:
    {
        returnValue = F("Unheldenweg");
        break;
    }
    case 312957:
    {
        returnValue = F("Unholdenberg");
        break;
    }
    case 312958:
    {
        returnValue = F("Unholzinger Str.");
        break;
    }
    case 312959:
    {
        returnValue = F("Uni-Forum");
        break;
    }
    case 312960:
    {
        returnValue = F("Uni-Villa-Wanderweg");
        break;
    }
    case 312961:
    {
        returnValue = F("Unicastr.");
        break;
    }
    case 312962:
    {
        returnValue = F("Unidekstr.");
        break;
    }
    case 312963:
    {
        returnValue = F("Unifrankstr.");
        break;
    }
    case 312964:
    {
        returnValue = F("Unimog Vorführstrecke");
        break;
    }
    case 312965:
    {
        returnValue = F("Unimogstr.");
        break;
    }
    case 312966:
    {
        returnValue = F("Unionrampe");
        break;
    }
    case 312967:
    {
        returnValue = F("Unionstr.");
        break;
    }
    case 312968:
    {
        returnValue = F("Unionsweg");
        break;
    }
    case 312969:
    {
        returnValue = F("Unipark");
        break;
    }
    case 312970:
    {
        returnValue = F("Unislawer Weg");
        break;
    }
    case 312971:
    {
        returnValue = F("Unitasstr.");
        break;
    }
    case 312972:
    {
        returnValue = F("Universität");
        break;
    }
    case 312973:
    {
        returnValue = F("Universität A");
        break;
    }
    case 312974:
    {
        returnValue = F("Universität B");
        break;
    }
    case 312975:
    {
        returnValue = F("Universität C");
        break;
    }
    case 312976:
    {
        returnValue = F("Universitäts-Boulevard");
        break;
    }
    case 312977:
    {
        returnValue = F("Universitätsallee");
        break;
    }
    case 312978:
    {
        returnValue = F("Universitätsgelände");
        break;
    }
    case 312979:
    {
        returnValue = F("Universitätspark");
        break;
    }
    case 312980:
    {
        returnValue = F("Universitätsplatz");
        break;
    }
    case 312981:
    {
        returnValue = F("Universitätsring");
        break;
    }
    case 312982:
    {
        returnValue = F("Universitätsstr.");
        break;
    }
    case 312983:
    {
        returnValue = F("Universumplatz");
        break;
    }
    case 312984:
    {
        returnValue = F("Unixstr.");
        break;
    }
    case 312985:
    {
        returnValue = F("Unkairstr.");
        break;
    }
    case 312986:
    {
        returnValue = F("Unkel-Andrees-Weg");
        break;
    }
    case 312987:
    {
        returnValue = F("Unkel-Bräsig-Str.");
        break;
    }
    case 312988:
    {
        returnValue = F("Unkel-Bräsig-Straat");
        break;
    }
    case 312989:
    {
        returnValue = F("Unkel-Bräsig-Strat");
        break;
    }
    case 312990:
    {
        returnValue = F("Unkel-Bräsig-Weg");
        break;
    }
    case 312991:
    {
        returnValue = F("Unkelbachstr. -neu-");
        break;
    }
    case 312992:
    {
        returnValue = F("Unkelbachtal");
        break;
    }
    case 312993:
    {
        returnValue = F("Unkeler Str.");
        break;
    }
    case 312994:
    {
        returnValue = F("Unkeler Weg");
        break;
    }
    case 312995:
    {
        returnValue = F("Unkelshof");
        break;
    }
    case 312996:
    {
        returnValue = F("Unkelstr.");
        break;
    }
    case 312997:
    {
        returnValue = F("Unkenallee");
        break;
    }
    case 312998:
    {
        returnValue = F("Unkenbachstr.");
        break;
    }
    case 312999:
    {
        returnValue = F("Unkenbaumweg");
        break;
    }
    case 313000:
    {
        returnValue = F("Unkengrund");
        break;
    }
    case 313001:
    {
        returnValue = F("Unkenstein");
        break;
    }
    case 313002:
    {
        returnValue = F("Unkensteintrail");
        break;
    }
    case 313003:
    {
        returnValue = F("Unkental");
        break;
    }
    case 313004:
    {
        returnValue = F("Unkenweg");
        break;
    }
    case 313005:
    {
        returnValue = F("Unkersburg");
        break;
    }
    case 313006:
    {
        returnValue = F("Unkersdorfer Landstr.");
        break;
    }
    case 313007:
    {
        returnValue = F("Unkersdorfer Str.");
        break;
    }
    case 313008:
    {
        returnValue = F("Unkersdorfer Weg");
        break;
    }
    case 313009:
    {
        returnValue = F("Unkeweg");
        break;
    }
    case 313010:
    {
        returnValue = F("Unklingenweg");
        break;
    }
    case 313011:
    {
        returnValue = F("Unlande");
        break;
    }
    case 313012:
    {
        returnValue = F("Unlanden");
        break;
    }
    case 313013:
    {
        returnValue = F("Unlander Str.");
        break;
    }
    case 313014:
    {
        returnValue = F("Unlander Weg");
        break;
    }
    case 313015:
    {
        returnValue = F("Unlandsmoor");
        break;
    }
    case 313016:
    {
        returnValue = F("Unlandstr.");
        break;
    }
    case 313017:
    {
        returnValue = F("Unlandsweg");
        break;
    }
    case 313018:
    {
        returnValue = F("Unlandweg");
        break;
    }
    case 313019:
    {
        returnValue = F("Unlitzsteig");
        break;
    }
    case 313020:
    {
        returnValue = F("Unlitzstr.");
        break;
    }
    case 313021:
    {
        returnValue = F("Unlust");
        break;
    }
    case 313022:
    {
        returnValue = F("Unmackstr.");
        break;
    }
    case 313023:
    {
        returnValue = F("Unmatenstiege");
        break;
    }
    case 313024:
    {
        returnValue = F("Unmatenweg");
        break;
    }
    case 313025:
    {
        returnValue = F("Unnaer Str.");
        break;
    }
    case 313026:
    {
        returnValue = F("Unnaplatz");
        break;
    }
    case 313027:
    {
        returnValue = F("Unnauer Str.");
        break;
    }
    case 313028:
    {
        returnValue = F("Unnauer Weg");
        break;
    }
    case 313029:
    {
        returnValue = F("Unnaustr.");
        break;
    }
    case 313030:
    {
        returnValue = F("Unnebrinkweg");
        break;
    }
    case 313031:
    {
        returnValue = F("Unnenberger Str.");
        break;
    }
    case 313032:
    {
        returnValue = F("Unnenbergstr.");
        break;
    }
    case 313033:
    {
        returnValue = F("Unnenheimer Weg");
        break;
    }
    case 313034:
    {
        returnValue = F("Unnenkamp");
        break;
    }
    case 313035:
    {
        returnValue = F("Unner Enn");
        break;
    }
    case 313036:
    {
        returnValue = F("Unner de Bult");
        break;
    }
    case 313037:
    {
        returnValue = F("Unner up Weg Ost");
        break;
    }
    case 313038:
    {
        returnValue = F("Unner'd Wierd");
        break;
    }
    case 313039:
    {
        returnValue = F("Unnerboen");
        break;
    }
    case 313040:
    {
        returnValue = F("Unnerbrügge");
        break;
    }
    case 313041:
    {
        returnValue = F("Unnerdorpweg");
        break;
    }
    case 313042:
    {
        returnValue = F("Unnerdörp");
        break;
    }
    case 313043:
    {
        returnValue = F("Unnerendenstr.");
        break;
    }
    case 313044:
    {
        returnValue = F("Unnerhusen");
        break;
    }
    case 313045:
    {
        returnValue = F("Unnerlang");
        break;
    }
    case 313046:
    {
        returnValue = F("Unnerlohne");
        break;
    }
    case 313047:
    {
        returnValue = F("Unnerloogsweg");
        break;
    }
    case 313048:
    {
        returnValue = F("Unnerpadd");
        break;
    }
    case 313049:
    {
        returnValue = F("Unnersberg");
        break;
    }
    case 313050:
    {
        returnValue = F("Unnersberger Allee");
        break;
    }
    case 313051:
    {
        returnValue = F("Unnersberger Weg");
        break;
    }
    case 313052:
    {
        returnValue = F("Unnerste Meer");
        break;
    }
    case 313053:
    {
        returnValue = F("Unnerstr.");
        break;
    }
    case 313054:
    {
        returnValue = F("Unnert Dörp");
        break;
    }
    case 313055:
    {
        returnValue = F("Unnertalstr.");
        break;
    }
    case 313056:
    {
        returnValue = F("Unnerweg");
        break;
    }
    case 313057:
    {
        returnValue = F("Unnötiger Weg");
        break;
    }
    case 313058:
    {
        returnValue = F("Unnütze Str.");
        break;
    }
    case 313059:
    {
        returnValue = F("Unnützstr.");
        break;
    }
    case 313060:
    {
        returnValue = F("Unnützwiese");
        break;
    }
    case 313061:
    {
        returnValue = F("Unoldstr.");
        break;
    }
    case 313062:
    {
        returnValue = F("Unotweg");
        break;
    }
    case 313063:
    {
        returnValue = F("Unraspfad");
        break;
    }
    case 313064:
    {
        returnValue = F("Unrechter Weg");
        break;
    }
    case 313065:
    {
        returnValue = F("Unritzstr.");
        break;
    }
    case 313066:
    {
        returnValue = F("Unrode");
        break;
    }
    case 313067:
    {
        returnValue = F("Unrow");
        break;
    }
    case 313068:
    {
        returnValue = F("Unruhstr.");
        break;
    }
    case 313069:
    {
        returnValue = F("Uns Huskoppel");
        break;
    }
    case 313070:
    {
        returnValue = F("Uns Hüsung");
        break;
    }
    case 313071:
    {
        returnValue = F("Unsal");
        break;
    }
    case 313072:
    {
        returnValue = F("Unsben");
        break;
    }
    case 313073:
    {
        returnValue = F("Unsbenweg");
        break;
    }
    case 313074:
    {
        returnValue = F("Unschlittplatz");
        break;
    }
    case 313075:
    {
        returnValue = F("Unschuffweg");
        break;
    }
    case 313076:
    {
        returnValue = F("Unseburger Chaussee");
        break;
    }
    case 313077:
    {
        returnValue = F("Unseburger Str.");
        break;
    }
    case 313078:
    {
        returnValue = F("Unseburger Weg");
        break;
    }
    case 313079:
    {
        returnValue = F("Unseltstr.");
        break;
    }
    case 313080:
    {
        returnValue = F("Unsener Str.");
        break;
    }
    case 313081:
    {
        returnValue = F("Unser Stückchen");
        break;
    }
    case 313082:
    {
        returnValue = F("Unser-Fritz-Str.");
        break;
    }
    case 313083:
    {
        returnValue = F("Unserer-Lieben-Frau-Weg");
        break;
    }
    case 313084:
    {
        returnValue = F("Unsernherrner Str.");
        break;
    }
    case 313085:
    {
        returnValue = F("Unsleber Str.");
        break;
    }
    case 313086:
    {
        returnValue = F("Unsolerweg");
        break;
    }
    case 313087:
    {
        returnValue = F("Unspel");
        break;
    }
    case 313088:
    {
        returnValue = F("Unspen");
        break;
    }
    case 313089:
    {
        returnValue = F("Unstedtenweg");
        break;
    }
    case 313090:
    {
        returnValue = F("Unstrutpromenade");
        break;
    }
    case 313091:
    {
        returnValue = F("Unstrutradweg");
        break;
    }
    case 313092:
    {
        returnValue = F("Unstrutstr.");
        break;
    }
    case 313093:
    {
        returnValue = F("Unstruttstr.");
        break;
    }
    case 313094:
    {
        returnValue = F("Unstrutweg");
        break;
    }
    case 313095:
    {
        returnValue = F("Unsuhrstr.");
        break;
    }
    case 313096:
    {
        returnValue = F("Unsöldstr.");
        break;
    }
    case 313097:
    {
        returnValue = F("Unt. Ermelsholz Weg");
        break;
    }
    case 313098:
    {
        returnValue = F("Unt. Hahnenbohlweg");
        break;
    }
    case 313099:
    {
        returnValue = F("Unt. Kohlstattstr.");
        break;
    }
    case 313100:
    {
        returnValue = F("Unt.-Steppenbergweg");
        break;
    }
    case 313101:
    {
        returnValue = F("Unten Klophausen");
        break;
    }
    case 313102:
    {
        returnValue = F("Unten Vorm Steeg");
        break;
    }
    case 313103:
    {
        returnValue = F("Unten am Biedersberg");
        break;
    }
    case 313104:
    {
        returnValue = F("Unten am Steinwald");
        break;
    }
    case 313105:
    {
        returnValue = F("Unten im Dorfe");
        break;
    }
    case 313106:
    {
        returnValue = F("Unten im Felde");
        break;
    }
    case 313107:
    {
        returnValue = F("Unten im Hähnchen");
        break;
    }
    case 313108:
    {
        returnValue = F("Unten im Weiler");
        break;
    }
    case 313109:
    {
        returnValue = F("Unten in der Wirft");
        break;
    }
    case 313110:
    {
        returnValue = F("Unten zum Holz");
        break;
    }
    case 313111:
    {
        returnValue = F("Untendorf");
        break;
    }
    case 313112:
    {
        returnValue = F("Untenende");
        break;
    }
    case 313113:
    {
        returnValue = F("Untenende Nord");
        break;
    }
    case 313114:
    {
        returnValue = F("Untenende Ost");
        break;
    }
    case 313115:
    {
        returnValue = F("Untenende Süd");
        break;
    }
    case 313116:
    {
        returnValue = F("Untenende Süd 69");
        break;
    }
    case 313117:
    {
        returnValue = F("Untenende West");
        break;
    }
    case 313118:
    {
        returnValue = F("Untenflachsberg");
        break;
    }
    case 313119:
    {
        returnValue = F("Untenfürkelt");
        break;
    }
    case 313120:
    {
        returnValue = F("Untengönrather Str.");
        break;
    }
    case 313121:
    {
        returnValue = F("Untenhöhscheid");
        break;
    }
    case 313122:
    {
        returnValue = F("Untenitter");
        break;
    }
    case 313123:
    {
        returnValue = F("Untenkatternberg");
        break;
    }
    case 313124:
    {
        returnValue = F("Untenketzberg");
        break;
    }
    case 313125:
    {
        returnValue = F("Untenmankhaus");
        break;
    }
    case 313126:
    {
        returnValue = F("Untenpilghausen");
        break;
    }
    case 313127:
    {
        returnValue = F("Untenrother Str.");
        break;
    }
    case 313128:
    {
        returnValue = F("Untenrüden");
        break;
    }
    case 313129:
    {
        returnValue = F("Untenrüdener Kotten");
        break;
    }
    case 313130:
    {
        returnValue = F("Unter Aak");
        break;
    }
    case 313131:
    {
        returnValue = F("Unter Abrach");
        break;
    }
    case 313132:
    {
        returnValue = F("Unter Bergamotten");
        break;
    }
    case 313133:
    {
        returnValue = F("Unter Birken");
        break;
    }
    case 313134:
    {
        returnValue = F("Unter Birnen");
        break;
    }
    case 313135:
    {
        returnValue = F("Unter Bogen");
        break;
    }
    case 313136:
    {
        returnValue = F("Unter Brandenhard");
        break;
    }
    case 313137:
    {
        returnValue = F("Unter Buchsteig");
        break;
    }
    case 313138:
    {
        returnValue = F("Unter Buschweg");
        break;
    }
    case 313139:
    {
        returnValue = F("Unter Cracauer Weg");
        break;
    }
    case 313140:
    {
        returnValue = F("Unter Eck");
        break;
    }
    case 313141:
    {
        returnValue = F("Unter Eckfeld");
        break;
    }
    case 313142:
    {
        returnValue = F("Unter Eichen");
        break;
    }
    case 313143:
    {
        returnValue = F("Unter Elben");
        break;
    }
    case 313144:
    {
        returnValue = F("Unter Eschen");
        break;
    }
    case 313145:
    {
        returnValue = F("Unter Fels");
        break;
    }
    case 313146:
    {
        returnValue = F("Unter Frohnen Garten");
        break;
    }
    case 313147:
    {
        returnValue = F("Unter Galgenberg");
        break;
    }
    case 313148:
    {
        returnValue = F("Unter Gehren");
        break;
    }
    case 313149:
    {
        returnValue = F("Unter Geiern");
        break;
    }
    case 313150:
    {
        returnValue = F("Unter Goldschmied");
        break;
    }
    case 313151:
    {
        returnValue = F("Unter Gottes Gnaden");
        break;
    }
    case 313152:
    {
        returnValue = F("Unter Greut");
        break;
    }
    case 313153:
    {
        returnValue = F("Unter Gutensteig");
        break;
    }
    case 313154:
    {
        returnValue = F("Unter Halden");
        break;
    }
    case 313155:
    {
        returnValue = F("Unter Haslich");
        break;
    }
    case 313156:
    {
        returnValue = F("Unter Haßlen");
        break;
    }
    case 313157:
    {
        returnValue = F("Unter Held");
        break;
    }
    case 313158:
    {
        returnValue = F("Unter Heubelstein");
        break;
    }
    case 313159:
    {
        returnValue = F("Unter Hirnau");
        break;
    }
    case 313160:
    {
        returnValue = F("Unter Hoch");
        break;
    }
    case 313161:
    {
        returnValue = F("Unter Hochkastell");
        break;
    }
    case 313162:
    {
        returnValue = F("Unter Hornau");
        break;
    }
    case 313163:
    {
        returnValue = F("Unter Jennung");
        break;
    }
    case 313164:
    {
        returnValue = F("Unter Kahlenhausen");
        break;
    }
    case 313165:
    {
        returnValue = F("Unter Kirschen");
        break;
    }
    case 313166:
    {
        returnValue = F("Unter Kleeburg");
        break;
    }
    case 313167:
    {
        returnValue = F("Unter Krahnenbäumen");
        break;
    }
    case 313168:
    {
        returnValue = F("Unter Lau");
        break;
    }
    case 313169:
    {
        returnValue = F("Unter Lauben");
        break;
    }
    case 313170:
    {
        returnValue = F("Unter Lauen");
        break;
    }
    case 313171:
    {
        returnValue = F("Unter Lehmgruben");
        break;
    }
    case 313172:
    {
        returnValue = F("Unter Lehr");
        break;
    }
    case 313173:
    {
        returnValue = F("Unter Linden");
        break;
    }
    case 313174:
    {
        returnValue = F("Unter Luckenburg");
        break;
    }
    case 313175:
    {
        returnValue = F("Unter Mastein");
        break;
    }
    case 313176:
    {
        returnValue = F("Unter Mayen");
        break;
    }
    case 313177:
    {
        returnValue = F("Unter Meiers Gärten");
        break;
    }
    case 313178:
    {
        returnValue = F("Unter Nank");
        break;
    }
    case 313179:
    {
        returnValue = F("Unter Naupen");
        break;
    }
    case 313180:
    {
        returnValue = F("Unter Netzenberg");
        break;
    }
    case 313181:
    {
        returnValue = F("Unter Palmen");
        break;
    }
    case 313182:
    {
        returnValue = F("Unter Paulen");
        break;
    }
    case 313183:
    {
        returnValue = F("Unter Petsch");
        break;
    }
    case 313184:
    {
        returnValue = F("Unter Rieden Weg");
        break;
    }
    case 313185:
    {
        returnValue = F("Unter Ringel");
        break;
    }
    case 313186:
    {
        returnValue = F("Unter Romeshard");
        break;
    }
    case 313187:
    {
        returnValue = F("Unter Rothell");
        break;
    }
    case 313188:
    {
        returnValue = F("Unter Scherrlinden");
        break;
    }
    case 313189:
    {
        returnValue = F("Unter Schoosweg");
        break;
    }
    case 313190:
    {
        returnValue = F("Unter Seifen");
        break;
    }
    case 313191:
    {
        returnValue = F("Unter Sellscheid");
        break;
    }
    case 313192:
    {
        returnValue = F("Unter St. Clemens");
        break;
    }
    case 313193:
    {
        returnValue = F("Unter Streichen");
        break;
    }
    case 313194:
    {
        returnValue = F("Unter Uns");
        break;
    }
    case 313195:
    {
        returnValue = F("Unter Wegen");
        break;
    }
    case 313196:
    {
        returnValue = F("Unter Wiesloch");
        break;
    }
    case 313197:
    {
        returnValue = F("Unter Zinnen");
        break;
    }
    case 313198:
    {
        returnValue = F("Unter dem Ahorn");
        break;
    }
    case 313199:
    {
        returnValue = F("Unter dem Aischbächle");
        break;
    }
    case 313200:
    {
        returnValue = F("Unter dem Amelungberg");
        break;
    }
    case 313201:
    {
        returnValue = F("Unter dem Amte");
        break;
    }
    case 313202:
    {
        returnValue = F("Unter dem Anger");
        break;
    }
    case 313203:
    {
        returnValue = F("Unter dem Asenberg");
        break;
    }
    case 313204:
    {
        returnValue = F("Unter dem Bach");
        break;
    }
    case 313205:
    {
        returnValue = F("Unter dem Bache");
        break;
    }
    case 313206:
    {
        returnValue = F("Unter dem Baderberg");
        break;
    }
    case 313207:
    {
        returnValue = F("Unter dem Berg");
        break;
    }
    case 313208:
    {
        returnValue = F("Unter dem Berge");
        break;
    }
    case 313209:
    {
        returnValue = F("Unter dem Berggarten");
        break;
    }
    case 313210:
    {
        returnValue = F("Unter dem Birkenkopf");
        break;
    }
    case 313211:
    {
        returnValue = F("Unter dem Birnbaum");
        break;
    }
    case 313212:
    {
        returnValue = F("Unter dem Blasbalg");
        break;
    }
    case 313213:
    {
        returnValue = F("Unter dem Bogen");
        break;
    }
    case 313214:
    {
        returnValue = F("Unter dem Bornberg");
        break;
    }
    case 313215:
    {
        returnValue = F("Unter dem Bornberge");
        break;
    }
    case 313216:
    {
        returnValue = F("Unter dem Bornrain");
        break;
    }
    case 313217:
    {
        returnValue = F("Unter dem Branntweinstein");
        break;
    }
    case 313218:
    {
        returnValue = F("Unter dem Bruch");
        break;
    }
    case 313219:
    {
        returnValue = F("Unter dem Bröder");
        break;
    }
    case 313220:
    {
        returnValue = F("Unter dem Burgberg");
        break;
    }
    case 313221:
    {
        returnValue = F("Unter dem Burghof");
        break;
    }
    case 313222:
    {
        returnValue = F("Unter dem Burkloh");
        break;
    }
    case 313223:
    {
        returnValue = F("Unter dem Bückeberg");
        break;
    }
    case 313224:
    {
        returnValue = F("Unter dem Deiche");
        break;
    }
    case 313225:
    {
        returnValue = F("Unter dem Dorf");
        break;
    }
    case 313226:
    {
        returnValue = F("Unter dem Dorfe");
        break;
    }
    case 313227:
    {
        returnValue = F("Unter dem Dorfkrug");
        break;
    }
    case 313228:
    {
        returnValue = F("Unter dem Dornbusch");
        break;
    }
    case 313229:
    {
        returnValue = F("Unter dem Ebersberg");
        break;
    }
    case 313230:
    {
        returnValue = F("Unter dem Eck");
        break;
    }
    case 313231:
    {
        returnValue = F("Unter dem Eiberg");
        break;
    }
    case 313232:
    {
        returnValue = F("Unter dem Erdelsweiher");
        break;
    }
    case 313233:
    {
        returnValue = F("Unter dem Erlenhang");
        break;
    }
    case 313234:
    {
        returnValue = F("Unter dem Erlicht");
        break;
    }
    case 313235:
    {
        returnValue = F("Unter dem Felde");
        break;
    }
    case 313236:
    {
        returnValue = F("Unter dem Felsenkeller");
        break;
    }
    case 313237:
    {
        returnValue = F("Unter dem Flachshof");
        break;
    }
    case 313238:
    {
        returnValue = F("Unter dem Freyen");
        break;
    }
    case 313239:
    {
        returnValue = F("Unter dem Friedhof");
        break;
    }
    case 313240:
    {
        returnValue = F("Unter dem Fußpfad");
        break;
    }
    case 313241:
    {
        returnValue = F("Unter dem Gansacker");
        break;
    }
    case 313242:
    {
        returnValue = F("Unter dem Gedankenspiel");
        break;
    }
    case 313243:
    {
        returnValue = F("Unter dem Germannsweiler");
        break;
    }
    case 313244:
    {
        returnValue = F("Unter dem Golfplatz");
        break;
    }
    case 313245:
    {
        returnValue = F("Unter dem Graben");
        break;
    }
    case 313246:
    {
        returnValue = F("Unter dem Greut");
        break;
    }
    case 313247:
    {
        returnValue = F("Unter dem Griesberg");
        break;
    }
    case 313248:
    {
        returnValue = F("Unter dem Gruneberg");
        break;
    }
    case 313249:
    {
        returnValue = F("Unter dem Gräble");
        break;
    }
    case 313250:
    {
        returnValue = F("Unter dem Hagen");
        break;
    }
    case 313251:
    {
        returnValue = F("Unter dem Hagenbach");
        break;
    }
    case 313252:
    {
        returnValue = F("Unter dem Hagenberge");
        break;
    }
    case 313253:
    {
        returnValue = F("Unter dem Hagenbrink");
        break;
    }
    case 313254:
    {
        returnValue = F("Unter dem Hahn");
        break;
    }
    case 313255:
    {
        returnValue = F("Unter dem Hain");
        break;
    }
    case 313256:
    {
        returnValue = F("Unter dem Hakenberge");
        break;
    }
    case 313257:
    {
        returnValue = F("Unter dem Hanstein");
        break;
    }
    case 313258:
    {
        returnValue = F("Unter dem Hartenberg");
        break;
    }
    case 313259:
    {
        returnValue = F("Unter dem Heil");
        break;
    }
    case 313260:
    {
        returnValue = F("Unter dem Heiligenwald");
        break;
    }
    case 313261:
    {
        returnValue = F("Unter dem Heldrastein");
        break;
    }
    case 313262:
    {
        returnValue = F("Unter dem Heltenbusch");
        break;
    }
    case 313263:
    {
        returnValue = F("Unter dem Heuhm");
        break;
    }
    case 313264:
    {
        returnValue = F("Unter dem Hohen Rain");
        break;
    }
    case 313265:
    {
        returnValue = F("Unter dem Hohenstein");
        break;
    }
    case 313266:
    {
        returnValue = F("Unter dem Holz");
        break;
    }
    case 313267:
    {
        returnValue = F("Unter dem Holzenberg");
        break;
    }
    case 313268:
    {
        returnValue = F("Unter dem Holzweg");
        break;
    }
    case 313269:
    {
        returnValue = F("Unter dem Hopfenberg");
        break;
    }
    case 313270:
    {
        returnValue = F("Unter dem Hopfenberge");
        break;
    }
    case 313271:
    {
        returnValue = F("Unter dem Hospitale");
        break;
    }
    case 313272:
    {
        returnValue = F("Unter dem Hägle");
        break;
    }
    case 313273:
    {
        returnValue = F("Unter dem Häldele");
        break;
    }
    case 313274:
    {
        returnValue = F("Unter dem Hölsterlöh");
        break;
    }
    case 313275:
    {
        returnValue = F("Unter dem Hölzchen");
        break;
    }
    case 313276:
    {
        returnValue = F("Unter dem Judenfriedhof");
        break;
    }
    case 313277:
    {
        returnValue = F("Unter dem Kahlenberg");
        break;
    }
    case 313278:
    {
        returnValue = F("Unter dem Kamp");
        break;
    }
    case 313279:
    {
        returnValue = F("Unter dem Kapellenberg");
        break;
    }
    case 313280:
    {
        returnValue = F("Unter dem Kapf");
        break;
    }
    case 313281:
    {
        returnValue = F("Unter dem Kehlberg");
        break;
    }
    case 313282:
    {
        returnValue = F("Unter dem Kelternberg");
        break;
    }
    case 313283:
    {
        returnValue = F("Unter dem Kiekenstein");
        break;
    }
    case 313284:
    {
        returnValue = F("Unter dem Kirchberg");
        break;
    }
    case 313285:
    {
        returnValue = F("Unter dem Kirchhof");
        break;
    }
    case 313286:
    {
        returnValue = F("Unter dem Kirschbaum");
        break;
    }
    case 313287:
    {
        returnValue = F("Unter dem Kirschberg");
        break;
    }
    case 313288:
    {
        returnValue = F("Unter dem Kleiberg");
        break;
    }
    case 313289:
    {
        returnValue = F("Unter dem Klingelschacht");
        break;
    }
    case 313290:
    {
        returnValue = F("Unter dem Klorenrech");
        break;
    }
    case 313291:
    {
        returnValue = F("Unter dem Kloster");
        break;
    }
    case 313292:
    {
        returnValue = F("Unter dem Kreuzsteg");
        break;
    }
    case 313293:
    {
        returnValue = F("Unter dem Krähen");
        break;
    }
    case 313294:
    {
        returnValue = F("Unter dem Käppele");
        break;
    }
    case 313295:
    {
        returnValue = F("Unter dem Königsberg");
        break;
    }
    case 313296:
    {
        returnValue = F("Unter dem Küchengarten");
        break;
    }
    case 313297:
    {
        returnValue = F("Unter dem Kühnenbuch");
        break;
    }
    case 313298:
    {
        returnValue = F("Unter dem Külf");
        break;
    }
    case 313299:
    {
        returnValue = F("Unter dem Küppel");
        break;
    }
    case 313300:
    {
        returnValue = F("Unter dem Langen Weg");
        break;
    }
    case 313301:
    {
        returnValue = F("Unter dem Lehle");
        break;
    }
    case 313302:
    {
        returnValue = F("Unter dem Lindchen");
        break;
    }
    case 313303:
    {
        returnValue = F("Unter dem Lindenhof");
        break;
    }
    case 313304:
    {
        returnValue = F("Unter dem Loh");
        break;
    }
    case 313305:
    {
        returnValue = F("Unter dem Lohberg");
        break;
    }
    case 313306:
    {
        returnValue = F("Unter dem Längenbühl");
        break;
    }
    case 313307:
    {
        returnValue = F("Unter dem Löh");
        break;
    }
    case 313308:
    {
        returnValue = F("Unter dem Malesfelsen");
        break;
    }
    case 313309:
    {
        returnValue = F("Unter dem Markt");
        break;
    }
    case 313310:
    {
        returnValue = F("Unter dem Menkhauser Berge");
        break;
    }
    case 313311:
    {
        returnValue = F("Unter dem Moor");
        break;
    }
    case 313312:
    {
        returnValue = F("Unter dem Mähringer Weg");
        break;
    }
    case 313313:
    {
        returnValue = F("Unter dem Mühlenberg");
        break;
    }
    case 313314:
    {
        returnValue = F("Unter dem Mühlteich");
        break;
    }
    case 313315:
    {
        returnValue = F("Unter dem Mühlwehr");
        break;
    }
    case 313316:
    {
        returnValue = F("Unter dem Nagd");
        break;
    }
    case 313317:
    {
        returnValue = F("Unter dem Naumberg");
        break;
    }
    case 313318:
    {
        returnValue = F("Unter dem Netteberg");
        break;
    }
    case 313319:
    {
        returnValue = F("Unter dem Nußbaum");
        break;
    }
    case 313320:
    {
        returnValue = F("Unter dem Nußberg");
        break;
    }
    case 313321:
    {
        returnValue = F("Unter dem Park");
        break;
    }
    case 313322:
    {
        returnValue = F("Unter dem Pfaffenberg");
        break;
    }
    case 313323:
    {
        returnValue = F("Unter dem Pfarracker");
        break;
    }
    case 313324:
    {
        returnValue = F("Unter dem Pferdestiege");
        break;
    }
    case 313325:
    {
        returnValue = F("Unter dem Pflinzhöck");
        break;
    }
    case 313326:
    {
        returnValue = F("Unter dem Pritzel");
        break;
    }
    case 313327:
    {
        returnValue = F("Unter dem Rain");
        break;
    }
    case 313328:
    {
        returnValue = F("Unter dem Rasenweg");
        break;
    }
    case 313329:
    {
        returnValue = F("Unter dem Regenbogen");
        break;
    }
    case 313330:
    {
        returnValue = F("Unter dem Reuberge");
        break;
    }
    case 313331:
    {
        returnValue = F("Unter dem Riedweg");
        break;
    }
    case 313332:
    {
        returnValue = F("Unter dem Ringwall");
        break;
    }
    case 313333:
    {
        returnValue = F("Unter dem Rodufer");
        break;
    }
    case 313334:
    {
        returnValue = F("Unter dem Romberg");
        break;
    }
    case 313335:
    {
        returnValue = F("Unter dem Rommelsberg");
        break;
    }
    case 313336:
    {
        returnValue = F("Unter dem Rotdorn");
        break;
    }
    case 313337:
    {
        returnValue = F("Unter dem Salzwege");
        break;
    }
    case 313338:
    {
        returnValue = F("Unter dem Schaven");
        break;
    }
    case 313339:
    {
        returnValue = F("Unter dem Schede");
        break;
    }
    case 313340:
    {
        returnValue = F("Unter dem Scheideweg");
        break;
    }
    case 313341:
    {
        returnValue = F("Unter dem Schellenberg");
        break;
    }
    case 313342:
    {
        returnValue = F("Unter dem Scherbenberg");
        break;
    }
    case 313343:
    {
        returnValue = F("Unter dem Schild");
        break;
    }
    case 313344:
    {
        returnValue = F("Unter dem Schildchen");
        break;
    }
    case 313345:
    {
        returnValue = F("Unter dem Schillerstein");
        break;
    }
    case 313346:
    {
        returnValue = F("Unter dem Schloß");
        break;
    }
    case 313347:
    {
        returnValue = F("Unter dem Schmalberg");
        break;
    }
    case 313348:
    {
        returnValue = F("Unter dem Schöneberg");
        break;
    }
    case 313349:
    {
        returnValue = F("Unter dem Sonnenhang");
        break;
    }
    case 313350:
    {
        returnValue = F("Unter dem Spielberg");
        break;
    }
    case 313351:
    {
        returnValue = F("Unter dem Sportplatz");
        break;
    }
    case 313352:
    {
        returnValue = F("Unter dem Spring");
        break;
    }
    case 313353:
    {
        returnValue = F("Unter dem Staffel");
        break;
    }
    case 313354:
    {
        returnValue = F("Unter dem Stationenrain");
        break;
    }
    case 313355:
    {
        returnValue = F("Unter dem Staufenberg");
        break;
    }
    case 313356:
    {
        returnValue = F("Unter dem Steigle");
        break;
    }
    case 313357:
    {
        returnValue = F("Unter dem Stein");
        break;
    }
    case 313358:
    {
        returnValue = F("Unter dem Steinbruch");
        break;
    }
    case 313359:
    {
        returnValue = F("Unter dem Steinbühl");
        break;
    }
    case 313360:
    {
        returnValue = F("Unter dem Steine");
        break;
    }
    case 313361:
    {
        returnValue = F("Unter dem Steinebachborn");
        break;
    }
    case 313362:
    {
        returnValue = F("Unter dem Stiderfeld");
        break;
    }
    case 313363:
    {
        returnValue = F("Unter dem Streifen");
        break;
    }
    case 313364:
    {
        returnValue = F("Unter dem Suhr");
        break;
    }
    case 313365:
    {
        returnValue = F("Unter dem Thie");
        break;
    }
    case 313366:
    {
        returnValue = F("Unter dem Todtenberg");
        break;
    }
    case 313367:
    {
        returnValue = F("Unter dem Torkelberg");
        break;
    }
    case 313368:
    {
        returnValue = F("Unter dem Turm");
        break;
    }
    case 313369:
    {
        returnValue = F("Unter dem Ufer");
        break;
    }
    case 313370:
    {
        returnValue = F("Unter dem Vogelberge");
        break;
    }
    case 313371:
    {
        returnValue = F("Unter dem Wald");
        break;
    }
    case 313372:
    {
        returnValue = F("Unter dem Walde");
        break;
    }
    case 313373:
    {
        returnValue = F("Unter dem Waldweg");
        break;
    }
    case 313374:
    {
        returnValue = F("Unter dem Wasem");
        break;
    }
    case 313375:
    {
        returnValue = F("Unter dem Wassergraben");
        break;
    }
    case 313376:
    {
        returnValue = F("Unter dem Weiler");
        break;
    }
    case 313377:
    {
        returnValue = F("Unter dem Weinberg");
        break;
    }
    case 313378:
    {
        returnValue = F("Unter dem Weißen");
        break;
    }
    case 313379:
    {
        returnValue = F("Unter dem Werrberg");
        break;
    }
    case 313380:
    {
        returnValue = F("Unter dem Wessen");
        break;
    }
    case 313381:
    {
        returnValue = F("Unter dem Wettenberg");
        break;
    }
    case 313382:
    {
        returnValue = F("Unter dem Wimpels");
        break;
    }
    case 313383:
    {
        returnValue = F("Unter dem Wingert");
        break;
    }
    case 313384:
    {
        returnValue = F("Unter dem Wittkopf");
        break;
    }
    case 313385:
    {
        returnValue = F("Unter dem Wolfshagen");
        break;
    }
    case 313386:
    {
        returnValue = F("Unter dem Woorth");
        break;
    }
    case 313387:
    {
        returnValue = F("Unter dem Wuhr");
        break;
    }
    case 313388:
    {
        returnValue = F("Unter dem Zaun");
        break;
    }
    case 313389:
    {
        returnValue = F("Unter dem alten Kamp");
        break;
    }
    case 313390:
    {
        returnValue = F("Unter dem kleinen Wehr");
        break;
    }
    case 313391:
    {
        returnValue = F("Unter den 30 Morgen");
        break;
    }
    case 313392:
    {
        returnValue = F("Unter den Akazien");
        break;
    }
    case 313393:
    {
        returnValue = F("Unter den Almen");
        break;
    }
    case 313394:
    {
        returnValue = F("Unter den Apfelbäumen");
        break;
    }
    case 313395:
    {
        returnValue = F("Unter den Baumgärten");
        break;
    }
    case 313396:
    {
        returnValue = F("Unter den Bergen");
        break;
    }
    case 313397:
    {
        returnValue = F("Unter den Birken");
        break;
    }
    case 313398:
    {
        returnValue = F("Unter den Brinkbäumen");
        break;
    }
    case 313399:
    {
        returnValue = F("Unter den Brücken");
        break;
    }
    case 313400:
    {
        returnValue = F("Unter den Brückenbergen");
        break;
    }
    case 313401:
    {
        returnValue = F("Unter den Buchen");
        break;
    }
    case 313402:
    {
        returnValue = F("Unter den Bäumchen");
        break;
    }
    case 313403:
    {
        returnValue = F("Unter den Bäumen");
        break;
    }
    case 313404:
    {
        returnValue = F("Unter den Dellen");
        break;
    }
    case 313405:
    {
        returnValue = F("Unter den Dolomiten");
        break;
    }
    case 313406:
    {
        returnValue = F("Unter den Drei Stöcken");
        break;
    }
    case 313407:
    {
        returnValue = F("Unter den Eichen");
        break;
    }
    case 313408:
    {
        returnValue = F("Unter den Erlen");
        break;
    }
    case 313409:
    {
        returnValue = F("Unter den Eschen");
        break;
    }
    case 313410:
    {
        returnValue = F("Unter den Felsen");
        break;
    }
    case 313411:
    {
        returnValue = F("Unter den Fichten");
        break;
    }
    case 313412:
    {
        returnValue = F("Unter den Fischteichen");
        break;
    }
    case 313413:
    {
        returnValue = F("Unter den Friedenseichen");
        break;
    }
    case 313414:
    {
        returnValue = F("Unter den Föhren");
        break;
    }
    case 313415:
    {
        returnValue = F("Unter den Gipsbergen");
        break;
    }
    case 313416:
    {
        returnValue = F("Unter den Gleichen");
        break;
    }
    case 313417:
    {
        returnValue = F("Unter den Golläckern");
        break;
    }
    case 313418:
    {
        returnValue = F("Unter den Grabenbäumen");
        break;
    }
    case 313419:
    {
        returnValue = F("Unter den Gärten");
        break;
    }
    case 313420:
    {
        returnValue = F("Unter den Günnen");
        break;
    }
    case 313421:
    {
        returnValue = F("Unter den Hanfgärten");
        break;
    }
    case 313422:
    {
        returnValue = F("Unter den Hassenbergen");
        break;
    }
    case 313423:
    {
        returnValue = F("Unter den Hecken");
        break;
    }
    case 313424:
    {
        returnValue = F("Unter den Heistern");
        break;
    }
    case 313425:
    {
        returnValue = F("Unter den Hestern");
        break;
    }
    case 313426:
    {
        returnValue = F("Unter den Heugärten");
        break;
    }
    case 313427:
    {
        returnValue = F("Unter den Hohlen");
        break;
    }
    case 313428:
    {
        returnValue = F("Unter den Höfen");
        break;
    }
    case 313429:
    {
        returnValue = F("Unter den Jestädter Weinbergen");
        break;
    }
    case 313430:
    {
        returnValue = F("Unter den Kastanien");
        break;
    }
    case 313431:
    {
        returnValue = F("Unter den Kiefern");
        break;
    }
    case 313432:
    {
        returnValue = F("Unter den Klingelsteinen");
        break;
    }
    case 313433:
    {
        returnValue = F("Unter den Klippen");
        break;
    }
    case 313434:
    {
        returnValue = F("Unter den Krohgärten");
        break;
    }
    case 313435:
    {
        returnValue = F("Unter den Kugelahorn");
        break;
    }
    case 313436:
    {
        returnValue = F("Unter den Kugelakazien");
        break;
    }
    case 313437:
    {
        returnValue = F("Unter den Kuhlen");
        break;
    }
    case 313438:
    {
        returnValue = F("Unter den Kämpen");
        break;
    }
    case 313439:
    {
        returnValue = F("Unter den Lehden");
        break;
    }
    case 313440:
    {
        returnValue = F("Unter den Lidden");
        break;
    }
    case 313441:
    {
        returnValue = F("Unter den Liethen");
        break;
    }
    case 313442:
    {
        returnValue = F("Unter den Linden");
        break;
    }
    case 313443:
    {
        returnValue = F("Unter den Lärchen");
        break;
    }
    case 313444:
    {
        returnValue = F("Unter den Matten");
        break;
    }
    case 313445:
    {
        returnValue = F("Unter den Pappeln");
        break;
    }
    case 313446:
    {
        returnValue = F("Unter den Pelzen");
        break;
    }
    case 313447:
    {
        returnValue = F("Unter den Pfählen");
        break;
    }
    case 313448:
    {
        returnValue = F("Unter den Platanen");
        break;
    }
    case 313449:
    {
        returnValue = F("Unter den Quellen");
        break;
    }
    case 313450:
    {
        returnValue = F("Unter den Reben");
        break;
    }
    case 313451:
    {
        returnValue = F("Unter den Reußen");
        break;
    }
    case 313452:
    {
        returnValue = F("Unter den Rotdornen");
        break;
    }
    case 313453:
    {
        returnValue = F("Unter den Schanzen");
        break;
    }
    case 313454:
    {
        returnValue = F("Unter den Schieren Bäumen");
        break;
    }
    case 313455:
    {
        returnValue = F("Unter den Schießeichen");
        break;
    }
    case 313456:
    {
        returnValue = F("Unter den Schlacken");
        break;
    }
    case 313457:
    {
        returnValue = F("Unter den Schwibbögen");
        break;
    }
    case 313458:
    {
        returnValue = F("Unter den Selskämpen");
        break;
    }
    case 313459:
    {
        returnValue = F("Unter den Sonnenbergen");
        break;
    }
    case 313460:
    {
        returnValue = F("Unter den Steinbrüchen");
        break;
    }
    case 313461:
    {
        returnValue = F("Unter den Steinen");
        break;
    }
    case 313462:
    {
        returnValue = F("Unter den Stockwiesen");
        break;
    }
    case 313463:
    {
        returnValue = F("Unter den Städeln");
        break;
    }
    case 313464:
    {
        returnValue = F("Unter den Stöcken");
        break;
    }
    case 313465:
    {
        returnValue = F("Unter den Tannen");
        break;
    }
    case 313466:
    {
        returnValue = F("Unter den Telgen");
        break;
    }
    case 313467:
    {
        returnValue = F("Unter den Ulmen");
        break;
    }
    case 313468:
    {
        returnValue = F("Unter den Wegen");
        break;
    }
    case 313469:
    {
        returnValue = F("Unter den Weiden");
        break;
    }
    case 313470:
    {
        returnValue = F("Unter den Weinbergen");
        break;
    }
    case 313471:
    {
        returnValue = F("Unter den Weingärten");
        break;
    }
    case 313472:
    {
        returnValue = F("Unter den Wellerwänden");
        break;
    }
    case 313473:
    {
        returnValue = F("Unter den Windräder");
        break;
    }
    case 313474:
    {
        returnValue = F("Unter den Wingerten");
        break;
    }
    case 313475:
    {
        returnValue = F("Unter den Wisselbäumen");
        break;
    }
    case 313476:
    {
        returnValue = F("Unter den Zindeln");
        break;
    }
    case 313477:
    {
        returnValue = F("Unter den Zweibäumen");
        break;
    }
    case 313478:
    {
        returnValue = F("Unter den Zwicken");
        break;
    }
    case 313479:
    {
        returnValue = F("Unter den Zäunen");
        break;
    }
    case 313480:
    {
        returnValue = F("Unter den kleinen Tannen");
        break;
    }
    case 313481:
    {
        returnValue = F("Unter den Äckern");
        break;
    }
    case 313482:
    {
        returnValue = F("Unter der Acht");
        break;
    }
    case 313483:
    {
        returnValue = F("Unter der Almert");
        break;
    }
    case 313484:
    {
        returnValue = F("Unter der Alpke");
        break;
    }
    case 313485:
    {
        returnValue = F("Unter der Alten Burg");
        break;
    }
    case 313486:
    {
        returnValue = F("Unter der Altenburg");
        break;
    }
    case 313487:
    {
        returnValue = F("Unter der Asseburg");
        break;
    }
    case 313488:
    {
        returnValue = F("Unter der Au");
        break;
    }
    case 313489:
    {
        returnValue = F("Unter der Bahn");
        break;
    }
    case 313490:
    {
        returnValue = F("Unter der Bastei");
        break;
    }
    case 313491:
    {
        returnValue = F("Unter der Beeke");
        break;
    }
    case 313492:
    {
        returnValue = F("Unter der Beibruck");
        break;
    }
    case 313493:
    {
        returnValue = F("Unter der Beul");
        break;
    }
    case 313494:
    {
        returnValue = F("Unter der Bilz");
        break;
    }
    case 313495:
    {
        returnValue = F("Unter der Birke");
        break;
    }
    case 313496:
    {
        returnValue = F("Unter der Bleiche");
        break;
    }
    case 313497:
    {
        returnValue = F("Unter der Breitsülze");
        break;
    }
    case 313498:
    {
        returnValue = F("Unter der Brohltalbrücke");
        break;
    }
    case 313499:
    {
        returnValue = F("Unter der Brunnenbreite");
        break;
    }
    case 313500:
    {
        returnValue = F("Unter der Buche");
        break;
    }
    case 313501:
    {
        returnValue = F("Unter der Bue");
        break;
    }
    case 313502:
    {
        returnValue = F("Unter der Burg");
        break;
    }
    case 313503:
    {
        returnValue = F("Unter der Burghalde");
        break;
    }
    case 313504:
    {
        returnValue = F("Unter der Böhl");
        break;
    }
    case 313505:
    {
        returnValue = F("Unter der Bündt");
        break;
    }
    case 313506:
    {
        returnValue = F("Unter der Charlottenburg");
        break;
    }
    case 313507:
    {
        returnValue = F("Unter der Clustrift");
        break;
    }
    case 313508:
    {
        returnValue = F("Unter der Comburg");
        break;
    }
    case 313509:
    {
        returnValue = F("Unter der Dicke");
        break;
    }
    case 313510:
    {
        returnValue = F("Unter der Dorfmauer");
        break;
    }
    case 313511:
    {
        returnValue = F("Unter der Düne");
        break;
    }
    case 313512:
    {
        returnValue = F("Unter der Egge");
        break;
    }
    case 313513:
    {
        returnValue = F("Unter der Eiche");
        break;
    }
    case 313514:
    {
        returnValue = F("Unter der Eichhalde");
        break;
    }
    case 313515:
    {
        returnValue = F("Unter der Eintke");
        break;
    }
    case 313516:
    {
        returnValue = F("Unter der Eisenbahn");
        break;
    }
    case 313517:
    {
        returnValue = F("Unter der Emst");
        break;
    }
    case 313518:
    {
        returnValue = F("Unter der Ennest");
        break;
    }
    case 313519:
    {
        returnValue = F("Unter der Eremitage");
        break;
    }
    case 313520:
    {
        returnValue = F("Unter der Fels");
        break;
    }
    case 313521:
    {
        returnValue = F("Unter der Forst");
        break;
    }
    case 313522:
    {
        returnValue = F("Unter der Frankenburg");
        break;
    }
    case 313523:
    {
        returnValue = F("Unter der Fährt");
        break;
    }
    case 313524:
    {
        returnValue = F("Unter der Fürstenwiese");
        break;
    }
    case 313525:
    {
        returnValue = F("Unter der Gasse");
        break;
    }
    case 313526:
    {
        returnValue = F("Unter der Gaste");
        break;
    }
    case 313527:
    {
        returnValue = F("Unter der Georgshöhe");
        break;
    }
    case 313528:
    {
        returnValue = F("Unter der Gerberei");
        break;
    }
    case 313529:
    {
        returnValue = F("Unter der Goldbrede");
        break;
    }
    case 313530:
    {
        returnValue = F("Unter der Grotenburg");
        break;
    }
    case 313531:
    {
        returnValue = F("Unter der Grotte");
        break;
    }
    case 313532:
    {
        returnValue = F("Unter der Grube");
        break;
    }
    case 313533:
    {
        returnValue = F("Unter der Haar");
        break;
    }
    case 313534:
    {
        returnValue = F("Unter der Haingasse");
        break;
    }
    case 313535:
    {
        returnValue = F("Unter der Halde");
        break;
    }
    case 313536:
    {
        returnValue = F("Unter der Halden");
        break;
    }
    case 313537:
    {
        returnValue = F("Unter der Hambach");
        break;
    }
    case 313538:
    {
        returnValue = F("Unter der Hanacht");
        break;
    }
    case 313539:
    {
        returnValue = F("Unter der Harbruck");
        break;
    }
    case 313540:
    {
        returnValue = F("Unter der Harburg");
        break;
    }
    case 313541:
    {
        returnValue = F("Unter der Hardenburg");
        break;
    }
    case 313542:
    {
        returnValue = F("Unter der Hardt");
        break;
    }
    case 313543:
    {
        returnValue = F("Unter der Hasselburg");
        break;
    }
    case 313544:
    {
        returnValue = F("Unter der Hecke");
        break;
    }
    case 313545:
    {
        returnValue = F("Unter der Heeg");
        break;
    }
    case 313546:
    {
        returnValue = F("Unter der Heide");
        break;
    }
    case 313547:
    {
        returnValue = F("Unter der Helbe");
        break;
    }
    case 313548:
    {
        returnValue = F("Unter der Helle");
        break;
    }
    case 313549:
    {
        returnValue = F("Unter der Herrenbrücke");
        break;
    }
    case 313550:
    {
        returnValue = F("Unter der Heusteige");
        break;
    }
    case 313551:
    {
        returnValue = F("Unter der Heyde");
        break;
    }
    case 313552:
    {
        returnValue = F("Unter der Hochbrücke");
        break;
    }
    case 313553:
    {
        returnValue = F("Unter der Hohen Fuhr");
        break;
    }
    case 313554:
    {
        returnValue = F("Unter der Horst");
        break;
    }
    case 313555:
    {
        returnValue = F("Unter der Howe");
        break;
    }
    case 313556:
    {
        returnValue = F("Unter der Hub");
        break;
    }
    case 313557:
    {
        returnValue = F("Unter der Hube");
        break;
    }
    case 313558:
    {
        returnValue = F("Unter der Hute");
        break;
    }
    case 313559:
    {
        returnValue = F("Unter der Höchte");
        break;
    }
    case 313560:
    {
        returnValue = F("Unter der Höhe");
        break;
    }
    case 313561:
    {
        returnValue = F("Unter der Höht");
        break;
    }
    case 313562:
    {
        returnValue = F("Unter der Hünenburg");
        break;
    }
    case 313563:
    {
        returnValue = F("Unter der Hütte");
        break;
    }
    case 313564:
    {
        returnValue = F("Unter der Hüwe");
        break;
    }
    case 313565:
    {
        returnValue = F("Unter der Iburg");
        break;
    }
    case 313566:
    {
        returnValue = F("Unter der Illwies");
        break;
    }
    case 313567:
    {
        returnValue = F("Unter der Jugendherberge");
        break;
    }
    case 313568:
    {
        returnValue = F("Unter der Kaiserhöhe");
        break;
    }
    case 313569:
    {
        returnValue = F("Unter der Kapelle");
        break;
    }
    case 313570:
    {
        returnValue = F("Unter der Kelter");
        break;
    }
    case 313571:
    {
        returnValue = F("Unter der Kirch");
        break;
    }
    case 313572:
    {
        returnValue = F("Unter der Kirchbreite");
        break;
    }
    case 313573:
    {
        returnValue = F("Unter der Kirche");
        break;
    }
    case 313574:
    {
        returnValue = F("Unter der Klinik");
        break;
    }
    case 313575:
    {
        returnValue = F("Unter der Kronbuche");
        break;
    }
    case 313576:
    {
        returnValue = F("Unter der Kukesburg");
        break;
    }
    case 313577:
    {
        returnValue = F("Unter der Lache");
        break;
    }
    case 313578:
    {
        returnValue = F("Unter der Lamfert");
        break;
    }
    case 313579:
    {
        returnValue = F("Unter der Landwehr");
        break;
    }
    case 313580:
    {
        returnValue = F("Unter der Lay");
        break;
    }
    case 313581:
    {
        returnValue = F("Unter der Leiter");
        break;
    }
    case 313582:
    {
        returnValue = F("Unter der Ley");
        break;
    }
    case 313583:
    {
        returnValue = F("Unter der Lieth");
        break;
    }
    case 313584:
    {
        returnValue = F("Unter der Linde");
        break;
    }
    case 313585:
    {
        returnValue = F("Unter der Lobdeburg");
        break;
    }
    case 313586:
    {
        returnValue = F("Unter der Lohmühle");
        break;
    }
    case 313587:
    {
        returnValue = F("Unter der Luft");
        break;
    }
    case 313588:
    {
        returnValue = F("Unter der Lönewand");
        break;
    }
    case 313589:
    {
        returnValue = F("Unter der Löwe");
        break;
    }
    case 313590:
    {
        returnValue = F("Unter der Maate");
        break;
    }
    case 313591:
    {
        returnValue = F("Unter der Mauer");
        break;
    }
    case 313592:
    {
        returnValue = F("Unter der Meinde");
        break;
    }
    case 313593:
    {
        returnValue = F("Unter der Metzig");
        break;
    }
    case 313594:
    {
        returnValue = F("Unter der Muschel");
        break;
    }
    case 313595:
    {
        returnValue = F("Unter der Mühle");
        break;
    }
    case 313596:
    {
        returnValue = F("Unter der Nümmert");
        break;
    }
    case 313597:
    {
        returnValue = F("Unter der Pfalz");
        break;
    }
    case 313598:
    {
        returnValue = F("Unter der Pfordt");
        break;
    }
    case 313599:
    {
        returnValue = F("Unter der Pfütze");
        break;
    }
    case 313600:
    {
        returnValue = F("Unter der Piese");
        break;
    }
    case 313601:
    {
        returnValue = F("Unter der Riede");
        break;
    }
    case 313602:
    {
        returnValue = F("Unter der Risihalde");
        break;
    }
    case 313603:
    {
        returnValue = F("Unter der Rodebreite");
        break;
    }
    case 313604:
    {
        returnValue = F("Unter der Rose");
        break;
    }
    case 313605:
    {
        returnValue = F("Unter der Rotheich");
        break;
    }
    case 313606:
    {
        returnValue = F("Unter der Ruine");
        break;
    }
    case 313607:
    {
        returnValue = F("Unter der Ruth");
        break;
    }
    case 313608:
    {
        returnValue = F("Unter der Röte");
        break;
    }
    case 313609:
    {
        returnValue = F("Unter der Sandkuhle");
        break;
    }
    case 313610:
    {
        returnValue = F("Unter der Schalksburg");
        break;
    }
    case 313611:
    {
        returnValue = F("Unter der Schanz");
        break;
    }
    case 313612:
    {
        returnValue = F("Unter der Schanze");
        break;
    }
    case 313613:
    {
        returnValue = F("Unter der Schaumburg");
        break;
    }
    case 313614:
    {
        returnValue = F("Unter der Schiesheck");
        break;
    }
    case 313615:
    {
        returnValue = F("Unter der Schinnerhecke");
        break;
    }
    case 313616:
    {
        returnValue = F("Unter der Schirmeke");
        break;
    }
    case 313617:
    {
        returnValue = F("Unter der Schlievenheck");
        break;
    }
    case 313618:
    {
        returnValue = F("Unter der Schule");
        break;
    }
    case 313619:
    {
        returnValue = F("Unter der Schönhalde");
        break;
    }
    case 313620:
    {
        returnValue = F("Unter der Setz");
        break;
    }
    case 313621:
    {
        returnValue = F("Unter der Silberklippe");
        break;
    }
    case 313622:
    {
        returnValue = F("Unter der Silberkuhle");
        break;
    }
    case 313623:
    {
        returnValue = F("Unter der Spielburg");
        break;
    }
    case 313624:
    {
        returnValue = F("Unter der Stadt");
        break;
    }
    case 313625:
    {
        returnValue = F("Unter der Stadtmauer");
        break;
    }
    case 313626:
    {
        returnValue = F("Unter der Stehde");
        break;
    }
    case 313627:
    {
        returnValue = F("Unter der Steig");
        break;
    }
    case 313628:
    {
        returnValue = F("Unter der Steige");
        break;
    }
    case 313629:
    {
        returnValue = F("Unter der Steigstr.");
        break;
    }
    case 313630:
    {
        returnValue = F("Unter der Steigtrotte");
        break;
    }
    case 313631:
    {
        returnValue = F("Unter der Steinkaul");
        break;
    }
    case 313632:
    {
        returnValue = F("Unter der Steinkuhle");
        break;
    }
    case 313633:
    {
        returnValue = F("Unter der Steinrütsche");
        break;
    }
    case 313634:
    {
        returnValue = F("Unter der Stelle");
        break;
    }
    case 313635:
    {
        returnValue = F("Unter der Stiegel");
        break;
    }
    case 313636:
    {
        returnValue = F("Unter der Struth");
        break;
    }
    case 313637:
    {
        returnValue = F("Unter der Stube");
        break;
    }
    case 313638:
    {
        returnValue = F("Unter der Störrmühle");
        break;
    }
    case 313639:
    {
        returnValue = F("Unter der Suntelt");
        break;
    }
    case 313640:
    {
        returnValue = F("Unter der Sängereiche");
        break;
    }
    case 313641:
    {
        returnValue = F("Unter der Tanne");
        break;
    }
    case 313642:
    {
        returnValue = F("Unter der Tannenhay");
        break;
    }
    case 313643:
    {
        returnValue = F("Unter der Todenwarth");
        break;
    }
    case 313644:
    {
        returnValue = F("Unter der Tonne");
        break;
    }
    case 313645:
    {
        returnValue = F("Unter der Treff");
        break;
    }
    case 313646:
    {
        returnValue = F("Unter der Tränke");
        break;
    }
    case 313647:
    {
        returnValue = F("Unter der Tuchbleiche");
        break;
    }
    case 313648:
    {
        returnValue = F("Unter der Turnhalle");
        break;
    }
    case 313649:
    {
        returnValue = F("Unter der Twiete");
        break;
    }
    case 313650:
    {
        returnValue = F("Unter der Vogelsburg");
        break;
    }
    case 313651:
    {
        returnValue = F("Unter der Wacht");
        break;
    }
    case 313652:
    {
        returnValue = F("Unter der Waldschule");
        break;
    }
    case 313653:
    {
        returnValue = F("Unter der Warthe");
        break;
    }
    case 313654:
    {
        returnValue = F("Unter der Weid");
        break;
    }
    case 313655:
    {
        returnValue = F("Unter der Weide");
        break;
    }
    case 313656:
    {
        returnValue = F("Unter der Weinstr.");
        break;
    }
    case 313657:
    {
        returnValue = F("Unter der Wiege");
        break;
    }
    case 313658:
    {
        returnValue = F("Unter der Wiemecke");
        break;
    }
    case 313659:
    {
        returnValue = F("Unter der Wiesche");
        break;
    }
    case 313660:
    {
        returnValue = F("Unter der Windmühle");
        break;
    }
    case 313661:
    {
        returnValue = F("Unter der Wulfseiche");
        break;
    }
    case 313662:
    {
        returnValue = F("Unter der alten Bahnbrücke");
        break;
    }
    case 313663:
    {
        returnValue = F("Unter'm Breloh");
        break;
    }
    case 313664:
    {
        returnValue = F("Unter'm Hagen");
        break;
    }
    case 313665:
    {
        returnValue = F("Unter'm Kurhut");
        break;
    }
    case 313666:
    {
        returnValue = F("Unter'm Luzienturm");
        break;
    }
    case 313667:
    {
        returnValue = F("Unter'm Müschede");
        break;
    }
    case 313668:
    {
        returnValue = F("Unter'm Piusberg");
        break;
    }
    case 313669:
    {
        returnValue = F("Unter'm Stahler Kopf");
        break;
    }
    case 313670:
    {
        returnValue = F("Unter-Bilstein");
        break;
    }
    case 313671:
    {
        returnValue = F("Unter-Eichen-Str.");
        break;
    }
    case 313672:
    {
        returnValue = F("Unter-Erler-Str.");
        break;
    }
    case 313673:
    {
        returnValue = F("Unter-Gerst-Str.");
        break;
    }
    case 313674:
    {
        returnValue = F("Unter-Geräumt");
        break;
    }
    case 313675:
    {
        returnValue = F("Unter-Kohlgraben");
        break;
    }
    case 313676:
    {
        returnValue = F("Unter-Laiser-Str.");
        break;
    }
    case 313677:
    {
        returnValue = F("Unter-Mark-Weg");
        break;
    }
    case 313678:
    {
        returnValue = F("Unter-Maxkron");
        break;
    }
    case 313679:
    {
        returnValue = F("Unter-Mengelbach");
        break;
    }
    case 313680:
    {
        returnValue = F("Unter-Seibertenröder Str.");
        break;
    }
    case 313681:
    {
        returnValue = F("Unter-Sorger-Str.");
        break;
    }
    case 313682:
    {
        returnValue = F("Unter-Widdersheimer Str.");
        break;
    }
    case 313683:
    {
        returnValue = F("Unterachen");
        break;
    }
    case 313684:
    {
        returnValue = F("Unterachstr.");
        break;
    }
    case 313685:
    {
        returnValue = F("Unterachtel");
        break;
    }
    case 313686:
    {
        returnValue = F("Unteracker");
        break;
    }
    case 313687:
    {
        returnValue = F("Unterafferbacher Str.");
        break;
    }
    case 313688:
    {
        returnValue = F("Unteraich");
        break;
    }
    case 313689:
    {
        returnValue = F("Unteraicher Str.");
        break;
    }
    case 313690:
    {
        returnValue = F("Unteraicher Weg");
        break;
    }
    case 313691:
    {
        returnValue = F("Unterailsfeld");
        break;
    }
    case 313692:
    {
        returnValue = F("Unteralleestr.");
        break;
    }
    case 313693:
    {
        returnValue = F("Unterallmendstr.");
        break;
    }
    case 313694:
    {
        returnValue = F("Unteralpfener Str.");
        break;
    }
    case 313695:
    {
        returnValue = F("Unteraltenburg");
        break;
    }
    case 313696:
    {
        returnValue = F("Unteraltertheimer Str.");
        break;
    }
    case 313697:
    {
        returnValue = F("Unteraltinger Str.");
        break;
    }
    case 313698:
    {
        returnValue = F("Unteramthofstr.");
        break;
    }
    case 313699:
    {
        returnValue = F("Unteranger");
        break;
    }
    case 313700:
    {
        returnValue = F("Unterangerstr.");
        break;
    }
    case 313701:
    {
        returnValue = F("Unterangerweg");
        break;
    }
    case 313702:
    {
        returnValue = F("Unterasbach");
        break;
    }
    case 313703:
    {
        returnValue = F("Unterasbacher-Geräumt");
        break;
    }
    case 313704:
    {
        returnValue = F("Unterasberg");
        break;
    }
    case 313705:
    {
        returnValue = F("Unteraschau");
        break;
    }
    case 313706:
    {
        returnValue = F("Unterasselborn");
        break;
    }
    case 313707:
    {
        returnValue = F("Unterau");
        break;
    }
    case 313708:
    {
        returnValue = F("Unteraue");
        break;
    }
    case 313709:
    {
        returnValue = F("Unterauer Str.");
        break;
    }
    case 313710:
    {
        returnValue = F("Unterauerbacher Str.");
        break;
    }
    case 313711:
    {
        returnValue = F("Unterauestr.");
        break;
    }
    case 313712:
    {
        returnValue = F("Unteraulenbach");
        break;
    }
    case 313713:
    {
        returnValue = F("Unterauracher Str.");
        break;
    }
    case 313714:
    {
        returnValue = F("Unterauracher Weg");
        break;
    }
    case 313715:
    {
        returnValue = F("Unterauwiesweg");
        break;
    }
    case 313716:
    {
        returnValue = F("Unterbach");
        break;
    }
    case 313717:
    {
        returnValue = F("Unterbachenstr.");
        break;
    }
    case 313718:
    {
        returnValue = F("Unterbacher Str.");
        break;
    }
    case 313719:
    {
        returnValue = F("Unterbachern");
        break;
    }
    case 313720:
    {
        returnValue = F("Unterbachham");
        break;
    }
    case 313721:
    {
        returnValue = F("Unterbachstr.");
        break;
    }
    case 313722:
    {
        returnValue = F("Unterbaimbach");
        break;
    }
    case 313723:
    {
        returnValue = F("Unterbank");
        break;
    }
    case 313724:
    {
        returnValue = F("Unterbarnstein");
        break;
    }
    case 313725:
    {
        returnValue = F("Unterbaselweg");
        break;
    }
    case 313726:
    {
        returnValue = F("Unterbau");
        break;
    }
    case 313727:
    {
        returnValue = F("Unterbauerschaft");
        break;
    }
    case 313728:
    {
        returnValue = F("Unterbaustr.");
        break;
    }
    case 313729:
    {
        returnValue = F("Unterbech");
        break;
    }
    case 313730:
    {
        returnValue = F("Unterbechinger Str.");
        break;
    }
    case 313731:
    {
        returnValue = F("Unterbechinger Weg");
        break;
    }
    case 313732:
    {
        returnValue = F("Unterberg");
        break;
    }
    case 313733:
    {
        returnValue = F("Unterberge");
        break;
    }
    case 313734:
    {
        returnValue = F("Unterbergen");
        break;
    }
    case 313735:
    {
        returnValue = F("Unterbergener Str.");
        break;
    }
    case 313736:
    {
        returnValue = F("Unterbergenstr.");
        break;
    }
    case 313737:
    {
        returnValue = F("Unterbergenweg");
        break;
    }
    case 313738:
    {
        returnValue = F("Unterberger Str.");
        break;
    }
    case 313739:
    {
        returnValue = F("Unterberger Wiesen");
        break;
    }
    case 313740:
    {
        returnValue = F("Unterberghausen");
        break;
    }
    case 313741:
    {
        returnValue = F("Unterbergscheid");
        break;
    }
    case 313742:
    {
        returnValue = F("Unterbergstr.");
        break;
    }
    case 313743:
    {
        returnValue = F("Unterbergweg");
        break;
    }
    case 313744:
    {
        returnValue = F("Unterbernbacher Str.");
        break;
    }
    case 313745:
    {
        returnValue = F("Unterbernhardser Str.");
        break;
    }
    case 313746:
    {
        returnValue = F("Unterbersten");
        break;
    }
    case 313747:
    {
        returnValue = F("Unterbeuern");
        break;
    }
    case 313748:
    {
        returnValue = F("Unterbeunde");
        break;
    }
    case 313749:
    {
        returnValue = F("Unterbeune");
        break;
    }
    case 313750:
    {
        returnValue = F("Unterbiberger Str.");
        break;
    }
    case 313751:
    {
        returnValue = F("Unterbichler Str.");
        break;
    }
    case 313752:
    {
        returnValue = F("Unterbinnwang");
        break;
    }
    case 313753:
    {
        returnValue = F("Unterblauenthaler Weg");
        break;
    }
    case 313754:
    {
        returnValue = F("Unterblissenbach");
        break;
    }
    case 313755:
    {
        returnValue = F("Unterboihinger Str.");
        break;
    }
    case 313756:
    {
        returnValue = F("Unterbornstr.");
        break;
    }
    case 313757:
    {
        returnValue = F("Unterboschbach");
        break;
    }
    case 313758:
    {
        returnValue = F("Unterbrake");
        break;
    }
    case 313759:
    {
        returnValue = F("Unterbraker Weg");
        break;
    }
    case 313760:
    {
        returnValue = F("Unterbreitenlohe");
        break;
    }
    case 313761:
    {
        returnValue = F("Unterbreiteweg");
        break;
    }
    case 313762:
    {
        returnValue = F("Unterbreitweg");
        break;
    }
    case 313763:
    {
        returnValue = F("Unterbreizbacher Weg");
        break;
    }
    case 313764:
    {
        returnValue = F("Unterbrettersbach");
        break;
    }
    case 313765:
    {
        returnValue = F("Unterbruch");
        break;
    }
    case 313766:
    {
        returnValue = F("Unterbrucher Str.");
        break;
    }
    case 313767:
    {
        returnValue = F("Unterbruchstr.");
        break;
    }
    case 313768:
    {
        returnValue = F("Unterbruck");
        break;
    }
    case 313769:
    {
        returnValue = F("Unterbrunnen");
        break;
    }
    case 313770:
    {
        returnValue = F("Unterbrunner Ring");
        break;
    }
    case 313771:
    {
        returnValue = F("Unterbrunner Str.");
        break;
    }
    case 313772:
    {
        returnValue = F("Unterbrunner Weg");
        break;
    }
    case 313773:
    {
        returnValue = F("Unterbränder Str.");
        break;
    }
    case 313774:
    {
        returnValue = F("Unterbrändi");
        break;
    }
    case 313775:
    {
        returnValue = F("Unterbrändiweg");
        break;
    }
    case 313776:
    {
        returnValue = F("Unterbräugasse");
        break;
    }
    case 313777:
    {
        returnValue = F("Unterbrücklein");
        break;
    }
    case 313778:
    {
        returnValue = F("Unterbrüdener Str.");
        break;
    }
    case 313779:
    {
        returnValue = F("Unterbrühlstr.");
        break;
    }
    case 313780:
    {
        returnValue = F("Unterbubach");
        break;
    }
    case 313781:
    {
        returnValue = F("Unterbuch");
        break;
    }
    case 313782:
    {
        returnValue = F("Unterbuchen");
        break;
    }
    case 313783:
    {
        returnValue = F("Unterbuchfelder Str.");
        break;
    }
    case 313784:
    {
        returnValue = F("Unterbuchwalder Str.");
        break;
    }
    case 313785:
    {
        returnValue = F("Unterburg");
        break;
    }
    case 313786:
    {
        returnValue = F("Unterburg: Garten- und Parkanlage");
        break;
    }
    case 313787:
    {
        returnValue = F("Unterburgstr.");
        break;
    }
    case 313788:
    {
        returnValue = F("Unterbuschweg");
        break;
    }
    case 313789:
    {
        returnValue = F("Unterböbinger Str.");
        break;
    }
    case 313790:
    {
        returnValue = F("Unterböhl");
        break;
    }
    case 313791:
    {
        returnValue = F("Unterböhringer Str.");
        break;
    }
    case 313792:
    {
        returnValue = F("Unterbörsch");
        break;
    }
    case 313793:
    {
        returnValue = F("Unterbössel");
        break;
    }
    case 313794:
    {
        returnValue = F("Unterbüchel");
        break;
    }
    case 313795:
    {
        returnValue = F("Unterbüchleiner Str.");
        break;
    }
    case 313796:
    {
        returnValue = F("Unterbüngstr.");
        break;
    }
    case 313797:
    {
        returnValue = F("Unterbürger Str.");
        break;
    }
    case 313798:
    {
        returnValue = F("Unterbürger Weg");
        break;
    }
    case 313799:
    {
        returnValue = F("Unterbüschem");
        break;
    }
    case 313800:
    {
        returnValue = F("Unterbüscherhof");
        break;
    }
    case 313801:
    {
        returnValue = F("Untercatharinau");
        break;
    }
    case 313802:
    {
        returnValue = F("Unterdahl");
        break;
    }
    case 313803:
    {
        returnValue = F("Unterdahler Hang");
        break;
    }
    case 313804:
    {
        returnValue = F("Unterdamm");
        break;
    }
    case 313805:
    {
        returnValue = F("Unterdelle");
        break;
    }
    case 313806:
    {
        returnValue = F("Unterdessing");
        break;
    }
    case 313807:
    {
        returnValue = F("Unterdettinger Weg");
        break;
    }
    case 313808:
    {
        returnValue = F("Unterdeufstetter Str.");
        break;
    }
    case 313809:
    {
        returnValue = F("Unterdietfurter Str.");
        break;
    }
    case 313810:
    {
        returnValue = F("Unterdietzing");
        break;
    }
    case 313811:
    {
        returnValue = F("Unterdigisheimer Str.");
        break;
    }
    case 313812:
    {
        returnValue = F("Unterdill");
        break;
    }
    case 313813:
    {
        returnValue = F("Unterdippling");
        break;
    }
    case 313814:
    {
        returnValue = F("Unterdolden");
        break;
    }
    case 313815:
    {
        returnValue = F("Unterdollinger Weg");
        break;
    }
    case 313816:
    {
        returnValue = F("Unterdorf");
        break;
    }
    case 313817:
    {
        returnValue = F("Unterdorf Nord");
        break;
    }
    case 313818:
    {
        returnValue = F("Unterdorf Süd");
        break;
    }
    case 313819:
    {
        returnValue = F("Unterdorfer Str.");
        break;
    }
    case 313820:
    {
        returnValue = F("Unterdorfer Torweg");
        break;
    }
    case 313821:
    {
        returnValue = F("Unterdorfstr.");
        break;
    }
    case 313822:
    {
        returnValue = F("Unterdorfweg");
        break;
    }
    case 313823:
    {
        returnValue = F("Unterdorfwiesenweg");
        break;
    }
    case 313824:
    {
        returnValue = F("Unterdreescher Weg");
        break;
    }
    case 313825:
    {
        returnValue = F("Unterdreispringen");
        break;
    }
    case 313826:
    {
        returnValue = F("Unterdörnbachshof");
        break;
    }
    case 313827:
    {
        returnValue = F("Unterdörnen");
        break;
    }
    case 313828:
    {
        returnValue = F("Unterdörnerfeld");
        break;
    }
    case 313829:
    {
        returnValue = F("Unterdürrbacher Str.");
        break;
    }
    case 313830:
    {
        returnValue = F("Unterdüssel");
        break;
    }
    case 313831:
    {
        returnValue = F("Unterdüsseler Weg");
        break;
    }
    case 313832:
    {
        returnValue = F("Untere Achstr.");
        break;
    }
    case 313833:
    {
        returnValue = F("Untere Ahr");
        break;
    }
    case 313834:
    {
        returnValue = F("Untere Aichbachtalstr.");
        break;
    }
    case 313835:
    {
        returnValue = F("Untere Aispergweg");
        break;
    }
    case 313836:
    {
        returnValue = F("Untere Aktienstr.");
        break;
    }
    case 313837:
    {
        returnValue = F("Untere Albrechtstr.");
        break;
    }
    case 313838:
    {
        returnValue = F("Untere Allee");
        break;
    }
    case 313839:
    {
        returnValue = F("Untere Alleenstr.");
        break;
    }
    case 313840:
    {
        returnValue = F("Untere Allmend");
        break;
    }
    case 313841:
    {
        returnValue = F("Untere Alm");
        break;
    }
    case 313842:
    {
        returnValue = F("Untere Alpe");
        break;
    }
    case 313843:
    {
        returnValue = F("Untere Alte Poststr.");
        break;
    }
    case 313844:
    {
        returnValue = F("Untere Altreuth");
        break;
    }
    case 313845:
    {
        returnValue = F("Untere Amalienhöhe");
        break;
    }
    case 313846:
    {
        returnValue = F("Untere Angergasse");
        break;
    }
    case 313847:
    {
        returnValue = F("Untere Angerlohe");
        break;
    }
    case 313848:
    {
        returnValue = F("Untere Angerstr.");
        break;
    }
    case 313849:
    {
        returnValue = F("Untere Anlage");
        break;
    }
    case 313850:
    {
        returnValue = F("Untere Anlagen");
        break;
    }
    case 313851:
    {
        returnValue = F("Untere Annaberger Str.");
        break;
    }
    case 313852:
    {
        returnValue = F("Untere Apfelbergstr.");
        break;
    }
    case 313853:
    {
        returnValue = F("Untere Arkauhalde");
        break;
    }
    case 313854:
    {
        returnValue = F("Untere Au");
        break;
    }
    case 313855:
    {
        returnValue = F("Untere Aubergstr.");
        break;
    }
    case 313856:
    {
        returnValue = F("Untere Auchtwiesen");
        break;
    }
    case 313857:
    {
        returnValue = F("Untere Aue");
        break;
    }
    case 313858:
    {
        returnValue = F("Untere Auen");
        break;
    }
    case 313859:
    {
        returnValue = F("Untere Auenstr.");
        break;
    }
    case 313860:
    {
        returnValue = F("Untere Augartenstr.");
        break;
    }
    case 313861:
    {
        returnValue = F("Untere Augasse");
        break;
    }
    case 313862:
    {
        returnValue = F("Untere Augärten");
        break;
    }
    case 313863:
    {
        returnValue = F("Untere Auhalde");
        break;
    }
    case 313864:
    {
        returnValue = F("Untere Auhaldenweg");
        break;
    }
    case 313865:
    {
        returnValue = F("Untere Austr.");
        break;
    }
    case 313866:
    {
        returnValue = F("Untere Auwiesen");
        break;
    }
    case 313867:
    {
        returnValue = F("Untere Bachgasse");
        break;
    }
    case 313868:
    {
        returnValue = F("Untere Bachstr.");
        break;
    }
    case 313869:
    {
        returnValue = F("Untere Bachwiesen");
        break;
    }
    case 313870:
    {
        returnValue = F("Untere Bachäcker");
        break;
    }
    case 313871:
    {
        returnValue = F("Untere Backhausgasse");
        break;
    }
    case 313872:
    {
        returnValue = F("Untere Badegasse");
        break;
    }
    case 313873:
    {
        returnValue = F("Untere Badergasse");
        break;
    }
    case 313874:
    {
        returnValue = F("Untere Badgasse");
        break;
    }
    case 313875:
    {
        returnValue = F("Untere Badstr.");
        break;
    }
    case 313876:
    {
        returnValue = F("Untere Bahnhofstr.");
        break;
    }
    case 313877:
    {
        returnValue = F("Untere Bahnstr.");
        break;
    }
    case 313878:
    {
        returnValue = F("Untere Bamberger Str.");
        break;
    }
    case 313879:
    {
        returnValue = F("Untere Barkengasse");
        break;
    }
    case 313880:
    {
        returnValue = F("Untere Barlstr.");
        break;
    }
    case 313881:
    {
        returnValue = F("Untere Baumwiese");
        break;
    }
    case 313882:
    {
        returnValue = F("Untere Bauscherstr.");
        break;
    }
    case 313883:
    {
        returnValue = F("Untere Baustr.");
        break;
    }
    case 313884:
    {
        returnValue = F("Untere Bayerische Gasse");
        break;
    }
    case 313885:
    {
        returnValue = F("Untere Beete");
        break;
    }
    case 313886:
    {
        returnValue = F("Untere Bein");
        break;
    }
    case 313887:
    {
        returnValue = F("Untere Beine");
        break;
    }
    case 313888:
    {
        returnValue = F("Untere Bell");
        break;
    }
    case 313889:
    {
        returnValue = F("Untere Beltz");
        break;
    }
    case 313890:
    {
        returnValue = F("Untere Benrather Str.");
        break;
    }
    case 313891:
    {
        returnValue = F("Untere Bergerheide");
        break;
    }
    case 313892:
    {
        returnValue = F("Untere Berggasse");
        break;
    }
    case 313893:
    {
        returnValue = F("Untere Berghofstr.");
        break;
    }
    case 313894:
    {
        returnValue = F("Untere Berghäuser");
        break;
    }
    case 313895:
    {
        returnValue = F("Untere Bergstr.");
        break;
    }
    case 313896:
    {
        returnValue = F("Untere Beund");
        break;
    }
    case 313897:
    {
        returnValue = F("Untere Beutau");
        break;
    }
    case 313898:
    {
        returnValue = F("Untere Biefangstr.");
        break;
    }
    case 313899:
    {
        returnValue = F("Untere Bielefelder Landstr.");
        break;
    }
    case 313900:
    {
        returnValue = F("Untere Bienhecke");
        break;
    }
    case 313901:
    {
        returnValue = F("Untere Bildgasse");
        break;
    }
    case 313902:
    {
        returnValue = F("Untere Birkenallee");
        break;
    }
    case 313903:
    {
        returnValue = F("Untere Birkenaustr.");
        break;
    }
    case 313904:
    {
        returnValue = F("Untere Bitzer Str.");
        break;
    }
    case 313905:
    {
        returnValue = F("Untere Blasse");
        break;
    }
    case 313906:
    {
        returnValue = F("Untere Blatt");
        break;
    }
    case 313907:
    {
        returnValue = F("Untere Bleiche");
        break;
    }
    case 313908:
    {
        returnValue = F("Untere Bleichstr.");
        break;
    }
    case 313909:
    {
        returnValue = F("Untere Bliesener Str.");
        break;
    }
    case 313910:
    {
        returnValue = F("Untere Bliesstr.");
        break;
    }
    case 313911:
    {
        returnValue = F("Untere Bockelbach");
        break;
    }
    case 313912:
    {
        returnValue = F("Untere Bockenheimer Str.");
        break;
    }
    case 313913:
    {
        returnValue = F("Untere Bockgasse");
        break;
    }
    case 313914:
    {
        returnValue = F("Untere Bogenstr.");
        break;
    }
    case 313915:
    {
        returnValue = F("Untere Bohle");
        break;
    }
    case 313916:
    {
        returnValue = F("Untere Bohlstr.");
        break;
    }
    case 313917:
    {
        returnValue = F("Untere Boller Halde");
        break;
    }
    case 313918:
    {
        returnValue = F("Untere Bonholzwiesen");
        break;
    }
    case 313919:
    {
        returnValue = F("Untere Borngasse");
        break;
    }
    case 313920:
    {
        returnValue = F("Untere Bornholzstr.");
        break;
    }
    case 313921:
    {
        returnValue = F("Untere Bornränder");
        break;
    }
    case 313922:
    {
        returnValue = F("Untere Bornwiese");
        break;
    }
    case 313923:
    {
        returnValue = F("Untere Bornwiesenstr.");
        break;
    }
    case 313924:
    {
        returnValue = F("Untere Boxgasse");
        break;
    }
    case 313925:
    {
        returnValue = F("Untere Braminseestr.");
        break;
    }
    case 313926:
    {
        returnValue = F("Untere Brandstr.");
        break;
    }
    case 313927:
    {
        returnValue = F("Untere Braugasse");
        break;
    }
    case 313928:
    {
        returnValue = F("Untere Brauhausgasse");
        break;
    }
    case 313929:
    {
        returnValue = F("Untere Brauhausstr.");
        break;
    }
    case 313930:
    {
        returnValue = F("Untere Braunstr.");
        break;
    }
    case 313931:
    {
        returnValue = F("Untere Bredenstiege");
        break;
    }
    case 313932:
    {
        returnValue = F("Untere Breede");
        break;
    }
    case 313933:
    {
        returnValue = F("Untere Brehm");
        break;
    }
    case 313934:
    {
        returnValue = F("Untere Breige");
        break;
    }
    case 313935:
    {
        returnValue = F("Untere Breite");
        break;
    }
    case 313936:
    {
        returnValue = F("Untere Breite Str.");
        break;
    }
    case 313937:
    {
        returnValue = F("Untere Breiten");
        break;
    }
    case 313938:
    {
        returnValue = F("Untere Breitenbach");
        break;
    }
    case 313939:
    {
        returnValue = F("Untere Breitenstr.");
        break;
    }
    case 313940:
    {
        returnValue = F("Untere Breithohleweg");
        break;
    }
    case 313941:
    {
        returnValue = F("Untere Breitstr.");
        break;
    }
    case 313942:
    {
        returnValue = F("Untere Breitwiesenstr.");
        break;
    }
    case 313943:
    {
        returnValue = F("Untere Brendelstr.");
        break;
    }
    case 313944:
    {
        returnValue = F("Untere Brettachtalstr.");
        break;
    }
    case 313945:
    {
        returnValue = F("Untere Brinkstr.");
        break;
    }
    case 313946:
    {
        returnValue = F("Untere Bruck");
        break;
    }
    case 313947:
    {
        returnValue = F("Untere Brunnengasse");
        break;
    }
    case 313948:
    {
        returnValue = F("Untere Brunnenstr.");
        break;
    }
    case 313949:
    {
        returnValue = F("Untere Brunnenäcker");
        break;
    }
    case 313950:
    {
        returnValue = F("Untere Bräuhausstr.");
        break;
    }
    case 313951:
    {
        returnValue = F("Untere Brüche");
        break;
    }
    case 313952:
    {
        returnValue = F("Untere Brücke");
        break;
    }
    case 313953:
    {
        returnValue = F("Untere Brückenstr.");
        break;
    }
    case 313954:
    {
        returnValue = F("Untere Brühlstr.");
        break;
    }
    case 313955:
    {
        returnValue = F("Untere Buchenhölle");
        break;
    }
    case 313956:
    {
        returnValue = F("Untere Buchenreihe");
        break;
    }
    case 313957:
    {
        returnValue = F("Untere Buchgasse");
        break;
    }
    case 313958:
    {
        returnValue = F("Untere Buchhalde");
        break;
    }
    case 313959:
    {
        returnValue = F("Untere Buchhaldenstr.");
        break;
    }
    case 313960:
    {
        returnValue = F("Untere Buchs");
        break;
    }
    case 313961:
    {
        returnValue = F("Untere Buchstr.");
        break;
    }
    case 313962:
    {
        returnValue = F("Untere Bult");
        break;
    }
    case 313963:
    {
        returnValue = F("Untere Burachstr.");
        break;
    }
    case 313964:
    {
        returnValue = F("Untere Burg");
        break;
    }
    case 313965:
    {
        returnValue = F("Untere Burgbergstr.");
        break;
    }
    case 313966:
    {
        returnValue = F("Untere Burgbreite");
        break;
    }
    case 313967:
    {
        returnValue = F("Untere Burggasse");
        break;
    }
    case 313968:
    {
        returnValue = F("Untere Burghalde");
        break;
    }
    case 313969:
    {
        returnValue = F("Untere Burgstr.");
        break;
    }
    case 313970:
    {
        returnValue = F("Untere Burgwiese");
        break;
    }
    case 313971:
    {
        returnValue = F("Untere Bärenbergstr.");
        break;
    }
    case 313972:
    {
        returnValue = F("Untere Bärenlocherstr.");
        break;
    }
    case 313973:
    {
        returnValue = F("Untere Bärenloher Str.");
        break;
    }
    case 313974:
    {
        returnValue = F("Untere Böhrstr.");
        break;
    }
    case 313975:
    {
        returnValue = F("Untere Bühlstr.");
        break;
    }
    case 313976:
    {
        returnValue = F("Untere Bühne");
        break;
    }
    case 313977:
    {
        returnValue = F("Untere Bülte");
        break;
    }
    case 313978:
    {
        returnValue = F("Untere Bündt");
        break;
    }
    case 313979:
    {
        returnValue = F("Untere Bürgstr.");
        break;
    }
    case 313980:
    {
        returnValue = F("Untere Büttengasse");
        break;
    }
    case 313981:
    {
        returnValue = F("Untere Clignetstr.");
        break;
    }
    case 313982:
    {
        returnValue = F("Untere Conrad-Valdor-Str.");
        break;
    }
    case 313983:
    {
        returnValue = F("Untere Crottenseestr.");
        break;
    }
    case 313984:
    {
        returnValue = F("Untere Daadenbach");
        break;
    }
    case 313985:
    {
        returnValue = F("Untere Dahlwiese");
        break;
    }
    case 313986:
    {
        returnValue = F("Untere Dammrichtstatt");
        break;
    }
    case 313987:
    {
        returnValue = F("Untere Dammstr.");
        break;
    }
    case 313988:
    {
        returnValue = F("Untere Danziger Str.");
        break;
    }
    case 313989:
    {
        returnValue = F("Untere Dell");
        break;
    }
    case 313990:
    {
        returnValue = F("Untere Dellstr.");
        break;
    }
    case 313991:
    {
        returnValue = F("Untere Denne");
        break;
    }
    case 313992:
    {
        returnValue = F("Untere Dickenbergstr.");
        break;
    }
    case 313993:
    {
        returnValue = F("Untere Dickne");
        break;
    }
    case 313994:
    {
        returnValue = F("Untere Dohle");
        break;
    }
    case 313995:
    {
        returnValue = F("Untere Domberggasse");
        break;
    }
    case 313996:
    {
        returnValue = F("Untere Donaulände");
        break;
    }
    case 313997:
    {
        returnValue = F("Untere Dorfgasse");
        break;
    }
    case 313998:
    {
        returnValue = F("Untere Dorfleite");
        break;
    }
    case 313999:
    {
        returnValue = F("Untere Dorfstr.");
        break;
    }
    case 314000:
    {
        returnValue = F("Untere Dorfstr. 19-5");
        break;
    }
    case 314001:
    {
        returnValue = F("Untere Dorfwiesen");
        break;
    }
    case 314002:
    {
        returnValue = F("Untere Dorngartenstr.");
        break;
    }
    case 314003:
    {
        returnValue = F("Untere Dornäcker");
        break;
    }
    case 314004:
    {
        returnValue = F("Untere Drittelgasse");
        break;
    }
    case 314005:
    {
        returnValue = F("Untere Dunkelgasse");
        break;
    }
    case 314006:
    {
        returnValue = F("Untere Döhlerwaldstr.");
        break;
    }
    case 314007:
    {
        returnValue = F("Untere Dösse");
        break;
    }
    case 314008:
    {
        returnValue = F("Untere Dürr");
        break;
    }
    case 314009:
    {
        returnValue = F("Untere Ebene");
        break;
    }
    case 314010:
    {
        returnValue = F("Untere Ebenhalde");
        break;
    }
    case 314011:
    {
        returnValue = F("Untere Ebenung");
        break;
    }
    case 314012:
    {
        returnValue = F("Untere Eberstr.");
        break;
    }
    case 314013:
    {
        returnValue = F("Untere Ebertstr.");
        break;
    }
    case 314014:
    {
        returnValue = F("Untere Ebnat");
        break;
    }
    case 314015:
    {
        returnValue = F("Untere Ecke");
        break;
    }
    case 314016:
    {
        returnValue = F("Untere Eckenbergstr.");
        break;
    }
    case 314017:
    {
        returnValue = F("Untere Eckstr.");
        break;
    }
    case 314018:
    {
        returnValue = F("Untere Egge");
        break;
    }
    case 314019:
    {
        returnValue = F("Untere Eichenbühlstr.");
        break;
    }
    case 314020:
    {
        returnValue = F("Untere Eichenstr.");
        break;
    }
    case 314021:
    {
        returnValue = F("Untere Eichgartenstr.");
        break;
    }
    case 314022:
    {
        returnValue = F("Untere Eichstädtstr.");
        break;
    }
    case 314023:
    {
        returnValue = F("Untere Eickenstr.");
        break;
    }
    case 314024:
    {
        returnValue = F("Untere Eisenbahnstr.");
        break;
    }
    case 314025:
    {
        returnValue = F("Untere Eisenstr.");
        break;
    }
    case 314026:
    {
        returnValue = F("Untere Eisinger Str.");
        break;
    }
    case 314027:
    {
        returnValue = F("Untere Eislebener Str.");
        break;
    }
    case 314028:
    {
        returnValue = F("Untere Eller");
        break;
    }
    case 314029:
    {
        returnValue = F("Untere Ellerbergstr.");
        break;
    }
    case 314030:
    {
        returnValue = F("Untere Endestr.");
        break;
    }
    case 314031:
    {
        returnValue = F("Untere Entengasse");
        break;
    }
    case 314032:
    {
        returnValue = F("Untere Erle");
        break;
    }
    case 314033:
    {
        returnValue = F("Untere Erlentiefenstr.");
        break;
    }
    case 314034:
    {
        returnValue = F("Untere Esch");
        break;
    }
    case 314035:
    {
        returnValue = F("Untere Eschstr.");
        break;
    }
    case 314036:
    {
        returnValue = F("Untere Espenstr.");
        break;
    }
    case 314037:
    {
        returnValue = F("Untere Etzstr.");
        break;
    }
    case 314038:
    {
        returnValue = F("Untere Eulenscheich");
        break;
    }
    case 314039:
    {
        returnValue = F("Untere Fallbrücke");
        break;
    }
    case 314040:
    {
        returnValue = F("Untere Falltorschneise");
        break;
    }
    case 314041:
    {
        returnValue = F("Untere Falltorstr.");
        break;
    }
    case 314042:
    {
        returnValue = F("Untere Fasanerie");
        break;
    }
    case 314043:
    {
        returnValue = F("Untere Felbenstr.");
        break;
    }
    case 314044:
    {
        returnValue = F("Untere Felderstr.");
        break;
    }
    case 314045:
    {
        returnValue = F("Untere Feldscheide");
        break;
    }
    case 314046:
    {
        returnValue = F("Untere Feldschneise");
        break;
    }
    case 314047:
    {
        returnValue = F("Untere Feldstr.");
        break;
    }
    case 314048:
    {
        returnValue = F("Untere Felsenstr.");
        break;
    }
    case 314049:
    {
        returnValue = F("Untere Fembachbrücke");
        break;
    }
    case 314050:
    {
        returnValue = F("Untere Feuergasse");
        break;
    }
    case 314051:
    {
        returnValue = F("Untere Findelstätte");
        break;
    }
    case 314052:
    {
        returnValue = F("Untere Finstere Gasse");
        break;
    }
    case 314053:
    {
        returnValue = F("Untere Fischergasse");
        break;
    }
    case 314054:
    {
        returnValue = F("Untere Fischerstr.");
        break;
    }
    case 314055:
    {
        returnValue = F("Untere Fischgasse");
        break;
    }
    case 314056:
    {
        returnValue = F("Untere Fischäckergasse");
        break;
    }
    case 314057:
    {
        returnValue = F("Untere Fliederstaffel");
        break;
    }
    case 314058:
    {
        returnValue = F("Untere Flotzgasse");
        break;
    }
    case 314059:
    {
        returnValue = F("Untere Flur");
        break;
    }
    case 314060:
    {
        returnValue = F("Untere Fluraustr.");
        break;
    }
    case 314061:
    {
        returnValue = F("Untere Flurstr.");
        break;
    }
    case 314062:
    {
        returnValue = F("Untere Flutgasse");
        break;
    }
    case 314063:
    {
        returnValue = F("Untere Flüh");
        break;
    }
    case 314064:
    {
        returnValue = F("Untere Forststr.");
        break;
    }
    case 314065:
    {
        returnValue = F("Untere Frankenstr.");
        break;
    }
    case 314066:
    {
        returnValue = F("Untere Frankfurter Str.");
        break;
    }
    case 314067:
    {
        returnValue = F("Untere Fraubachstr.");
        break;
    }
    case 314068:
    {
        returnValue = F("Untere Frauenstr.");
        break;
    }
    case 314069:
    {
        returnValue = F("Untere Freitorstr.");
        break;
    }
    case 314070:
    {
        returnValue = F("Untere Fringshau");
        break;
    }
    case 314071:
    {
        returnValue = F("Untere Froschau");
        break;
    }
    case 314072:
    {
        returnValue = F("Untere Fuchsmatt");
        break;
    }
    case 314073:
    {
        returnValue = F("Untere Fuhr");
        break;
    }
    case 314074:
    {
        returnValue = F("Untere Fuhre");
        break;
    }
    case 314075:
    {
        returnValue = F("Untere Fuldatalstr.");
        break;
    }
    case 314076:
    {
        returnValue = F("Untere Fulder Gasse");
        break;
    }
    case 314077:
    {
        returnValue = F("Untere Föhr");
        break;
    }
    case 314078:
    {
        returnValue = F("Untere Fürnsaler Str.");
        break;
    }
    case 314079:
    {
        returnValue = F("Untere Gadelheimer Mühle");
        break;
    }
    case 314080:
    {
        returnValue = F("Untere Gaishalde");
        break;
    }
    case 314081:
    {
        returnValue = F("Untere Gaisäckerstr.");
        break;
    }
    case 314082:
    {
        returnValue = F("Untere Gallusstr.");
        break;
    }
    case 314083:
    {
        returnValue = F("Untere Gamssteige");
        break;
    }
    case 314084:
    {
        returnValue = F("Untere Gartenreihe");
        break;
    }
    case 314085:
    {
        returnValue = F("Untere Gartenstr.");
        break;
    }
    case 314086:
    {
        returnValue = F("Untere Gasse");
        break;
    }
    case 314087:
    {
        returnValue = F("Untere Gaß");
        break;
    }
    case 314088:
    {
        returnValue = F("Untere Geerstr.");
        break;
    }
    case 314089:
    {
        returnValue = F("Untere Gehnbergstr.");
        break;
    }
    case 314090:
    {
        returnValue = F("Untere Gehrecken");
        break;
    }
    case 314091:
    {
        returnValue = F("Untere Gehrgass");
        break;
    }
    case 314092:
    {
        returnValue = F("Untere Gehrnstr.");
        break;
    }
    case 314093:
    {
        returnValue = F("Untere Geisbergstr.");
        break;
    }
    case 314094:
    {
        returnValue = F("Untere Gelänge");
        break;
    }
    case 314095:
    {
        returnValue = F("Untere Gerbe");
        break;
    }
    case 314096:
    {
        returnValue = F("Untere Gerbersteig");
        break;
    }
    case 314097:
    {
        returnValue = F("Untere Gerberstr.");
        break;
    }
    case 314098:
    {
        returnValue = F("Untere Gern");
        break;
    }
    case 314099:
    {
        returnValue = F("Untere Gewendhalde");
        break;
    }
    case 314100:
    {
        returnValue = F("Untere Gewerbestr.");
        break;
    }
    case 314101:
    {
        returnValue = F("Untere Ghaustr.");
        break;
    }
    case 314102:
    {
        returnValue = F("Untere Giglstr.");
        break;
    }
    case 314103:
    {
        returnValue = F("Untere Glanstr.");
        break;
    }
    case 314104:
    {
        returnValue = F("Untere Glashüttensiedlung");
        break;
    }
    case 314105:
    {
        returnValue = F("Untere Glasschleife");
        break;
    }
    case 314106:
    {
        returnValue = F("Untere Glemstalstr.");
        break;
    }
    case 314107:
    {
        returnValue = F("Untere Glumestr.");
        break;
    }
    case 314108:
    {
        returnValue = F("Untere Godingbrede");
        break;
    }
    case 314109:
    {
        returnValue = F("Untere Goethestr.");
        break;
    }
    case 314110:
    {
        returnValue = F("Untere Goldbergstr.");
        break;
    }
    case 314111:
    {
        returnValue = F("Untere Goldene Au");
        break;
    }
    case 314112:
    {
        returnValue = F("Untere Goldlauterstr.");
        break;
    }
    case 314113:
    {
        returnValue = F("Untere Gondorf");
        break;
    }
    case 314114:
    {
        returnValue = F("Untere Gote");
        break;
    }
    case 314115:
    {
        returnValue = F("Untere Grabenstr.");
        break;
    }
    case 314116:
    {
        returnValue = F("Untere Grabenäcker");
        break;
    }
    case 314117:
    {
        returnValue = F("Untere Grasstr.");
        break;
    }
    case 314118:
    {
        returnValue = F("Untere Grendelstr.");
        break;
    }
    case 314119:
    {
        returnValue = F("Untere Grenzstr.");
        break;
    }
    case 314120:
    {
        returnValue = F("Untere Großgasse");
        break;
    }
    case 314121:
    {
        returnValue = F("Untere Grub");
        break;
    }
    case 314122:
    {
        returnValue = F("Untere Grube");
        break;
    }
    case 314123:
    {
        returnValue = F("Untere Grundseite");
        break;
    }
    case 314124:
    {
        returnValue = F("Untere Grundstr.");
        break;
    }
    case 314125:
    {
        returnValue = F("Untere Gräbengasse");
        break;
    }
    case 314126:
    {
        returnValue = F("Untere Gräfenthaler Str.");
        break;
    }
    case 314127:
    {
        returnValue = F("Untere Grüne Weg");
        break;
    }
    case 314128:
    {
        returnValue = F("Untere Grüneichstr.");
        break;
    }
    case 314129:
    {
        returnValue = F("Untere Grünhalde");
        break;
    }
    case 314130:
    {
        returnValue = F("Untere Gundekarstr.");
        break;
    }
    case 314131:
    {
        returnValue = F("Untere Gänseweide");
        break;
    }
    case 314132:
    {
        returnValue = F("Untere Gänshalde");
        break;
    }
    case 314133:
    {
        returnValue = F("Untere Gänsweide");
        break;
    }
    case 314134:
    {
        returnValue = F("Untere Gärten");
        break;
    }
    case 314135:
    {
        returnValue = F("Untere Görgengasse");
        break;
    }
    case 314136:
    {
        returnValue = F("Untere Haaggasse");
        break;
    }
    case 314137:
    {
        returnValue = F("Untere Haardt");
        break;
    }
    case 314138:
    {
        returnValue = F("Untere Haardtstr.");
        break;
    }
    case 314139:
    {
        returnValue = F("Untere Habitsreisstr.");
        break;
    }
    case 314140:
    {
        returnValue = F("Untere Haferstr.");
        break;
    }
    case 314141:
    {
        returnValue = F("Untere Hafnerstr.");
        break;
    }
    case 314142:
    {
        returnValue = F("Untere Hagenstr.");
        break;
    }
    case 314143:
    {
        returnValue = F("Untere Hagstr.");
        break;
    }
    case 314144:
    {
        returnValue = F("Untere Haide");
        break;
    }
    case 314145:
    {
        returnValue = F("Untere Hainbachstr.");
        break;
    }
    case 314146:
    {
        returnValue = F("Untere Hainbergstr.");
        break;
    }
    case 314147:
    {
        returnValue = F("Untere Haindorfer Str.");
        break;
    }
    case 314148:
    {
        returnValue = F("Untere Haingasse");
        break;
    }
    case 314149:
    {
        returnValue = F("Untere Hainstr.");
        break;
    }
    case 314150:
    {
        returnValue = F("Untere Haitzer Gasse");
        break;
    }
    case 314151:
    {
        returnValue = F("Untere Halde");
        break;
    }
    case 314152:
    {
        returnValue = F("Untere Haldenstr.");
        break;
    }
    case 314153:
    {
        returnValue = F("Untere Haldenäcker");
        break;
    }
    case 314154:
    {
        returnValue = F("Untere Haldestr.");
        break;
    }
    case 314155:
    {
        returnValue = F("Untere Halle-Kasseler-Str.");
        break;
    }
    case 314156:
    {
        returnValue = F("Untere Hamböhlstr.");
        break;
    }
    case 314157:
    {
        returnValue = F("Untere Hammerwiese");
        break;
    }
    case 314158:
    {
        returnValue = F("Untere Hangstr.");
        break;
    }
    case 314159:
    {
        returnValue = F("Untere Hangweg");
        break;
    }
    case 314160:
    {
        returnValue = F("Untere Hardt");
        break;
    }
    case 314161:
    {
        returnValue = F("Untere Hardtbergstr.");
        break;
    }
    case 314162:
    {
        returnValue = F("Untere Hardtstr.");
        break;
    }
    case 314163:
    {
        returnValue = F("Untere Hart");
        break;
    }
    case 314164:
    {
        returnValue = F("Untere Hartmattenstr.");
        break;
    }
    case 314165:
    {
        returnValue = F("Untere Hartstr.");
        break;
    }
    case 314166:
    {
        returnValue = F("Untere Haselmühle");
        break;
    }
    case 314167:
    {
        returnValue = F("Untere Haselmühlstr.");
        break;
    }
    case 314168:
    {
        returnValue = F("Untere Hasenheide");
        break;
    }
    case 314169:
    {
        returnValue = F("Untere Haspelstr.");
        break;
    }
    case 314170:
    {
        returnValue = F("Untere Hatteläcker");
        break;
    }
    case 314171:
    {
        returnValue = F("Untere Haul");
        break;
    }
    case 314172:
    {
        returnValue = F("Untere Hauler");
        break;
    }
    case 314173:
    {
        returnValue = F("Untere Hauptallee");
        break;
    }
    case 314174:
    {
        returnValue = F("Untere Hauptstr.");
        break;
    }
    case 314175:
    {
        returnValue = F("Untere Hausbergstr.");
        break;
    }
    case 314176:
    {
        returnValue = F("Untere Hausbreite");
        break;
    }
    case 314177:
    {
        returnValue = F("Untere Hausmatt");
        break;
    }
    case 314178:
    {
        returnValue = F("Untere Heckenstr.");
        break;
    }
    case 314179:
    {
        returnValue = F("Untere Heeg");
        break;
    }
    case 314180:
    {
        returnValue = F("Untere Heerbergstr.");
        break;
    }
    case 314181:
    {
        returnValue = F("Untere Heerstr.");
        break;
    }
    case 314182:
    {
        returnValue = F("Untere Heide");
        break;
    }
    case 314183:
    {
        returnValue = F("Untere Heidecker Str.");
        break;
    }
    case 314184:
    {
        returnValue = F("Untere Heidestr.");
        break;
    }
    case 314185:
    {
        returnValue = F("Untere Heidgasse");
        break;
    }
    case 314186:
    {
        returnValue = F("Untere Heintzmannstr.");
        break;
    }
    case 314187:
    {
        returnValue = F("Untere Helle");
        break;
    }
    case 314188:
    {
        returnValue = F("Untere Herdgasse");
        break;
    }
    case 314189:
    {
        returnValue = F("Untere Herrenbergstr.");
        break;
    }
    case 314190:
    {
        returnValue = F("Untere Herrenstr.");
        break;
    }
    case 314191:
    {
        returnValue = F("Untere Herrentalstr.");
        break;
    }
    case 314192:
    {
        returnValue = F("Untere Herrenwiese");
        break;
    }
    case 314193:
    {
        returnValue = F("Untere Herwartstr.");
        break;
    }
    case 314194:
    {
        returnValue = F("Untere Hesmecke");
        break;
    }
    case 314195:
    {
        returnValue = F("Untere Heuernte");
        break;
    }
    case 314196:
    {
        returnValue = F("Untere Heulandsteige");
        break;
    }
    case 314197:
    {
        returnValue = F("Untere Hey");
        break;
    }
    case 314198:
    {
        returnValue = F("Untere Hiese");
        break;
    }
    case 314199:
    {
        returnValue = F("Untere Hilsengasse");
        break;
    }
    case 314200:
    {
        returnValue = F("Untere Hilsstr.");
        break;
    }
    case 314201:
    {
        returnValue = F("Untere Himmelreichstr.");
        break;
    }
    case 314202:
    {
        returnValue = F("Untere Himmelreichweg");
        break;
    }
    case 314203:
    {
        returnValue = F("Untere Himmelsstiege");
        break;
    }
    case 314204:
    {
        returnValue = F("Untere Hindenburgstr.");
        break;
    }
    case 314205:
    {
        returnValue = F("Untere Hintere Dorfstr.");
        break;
    }
    case 314206:
    {
        returnValue = F("Untere Hirschbitze");
        break;
    }
    case 314207:
    {
        returnValue = F("Untere Hirschgasse");
        break;
    }
    case 314208:
    {
        returnValue = F("Untere Hirschstr.");
        break;
    }
    case 314209:
    {
        returnValue = F("Untere Hirte");
        break;
    }
    case 314210:
    {
        returnValue = F("Untere Hirtengasse");
        break;
    }
    case 314211:
    {
        returnValue = F("Untere Hirtenstr.");
        break;
    }
    case 314212:
    {
        returnValue = F("Untere Hochstr.");
        break;
    }
    case 314213:
    {
        returnValue = F("Untere Hofbreite");
        break;
    }
    case 314214:
    {
        returnValue = F("Untere Hofgasse");
        break;
    }
    case 314215:
    {
        returnValue = F("Untere Hofmark");
        break;
    }
    case 314216:
    {
        returnValue = F("Untere Hofstadt");
        break;
    }
    case 314217:
    {
        returnValue = F("Untere Hofstatt");
        break;
    }
    case 314218:
    {
        returnValue = F("Untere Hofstr.");
        break;
    }
    case 314219:
    {
        returnValue = F("Untere Hofstättgasse");
        break;
    }
    case 314220:
    {
        returnValue = F("Untere Hofstückstr.");
        break;
    }
    case 314221:
    {
        returnValue = F("Untere Hofwiese");
        break;
    }
    case 314222:
    {
        returnValue = F("Untere Hofwiesen");
        break;
    }
    case 314223:
    {
        returnValue = F("Untere Hohl");
        break;
    }
    case 314224:
    {
        returnValue = F("Untere Hohlgasse");
        break;
    }
    case 314225:
    {
        returnValue = F("Untere Holdergasse");
        break;
    }
    case 314226:
    {
        returnValue = F("Untere Holtener Str.");
        break;
    }
    case 314227:
    {
        returnValue = F("Untere Holunderstaffel");
        break;
    }
    case 314228:
    {
        returnValue = F("Untere Holzbergstr.");
        break;
    }
    case 314229:
    {
        returnValue = F("Untere Holzgasse");
        break;
    }
    case 314230:
    {
        returnValue = F("Untere Holzmatt");
        break;
    }
    case 314231:
    {
        returnValue = F("Untere Holzstr.");
        break;
    }
    case 314232:
    {
        returnValue = F("Untere Hornbergstr.");
        break;
    }
    case 314233:
    {
        returnValue = F("Untere Horngaß");
        break;
    }
    case 314234:
    {
        returnValue = F("Untere Hummelke");
        break;
    }
    case 314235:
    {
        returnValue = F("Untere Hundem");
        break;
    }
    case 314236:
    {
        returnValue = F("Untere Husemannstr.");
        break;
    }
    case 314237:
    {
        returnValue = F("Untere Husengasse");
        break;
    }
    case 314238:
    {
        returnValue = F("Untere Hut");
        break;
    }
    case 314239:
    {
        returnValue = F("Untere Höfe");
        break;
    }
    case 314240:
    {
        returnValue = F("Untere Höhbergstr.");
        break;
    }
    case 314241:
    {
        returnValue = F("Untere Höhe");
        break;
    }
    case 314242:
    {
        returnValue = F("Untere Höhenstr.");
        break;
    }
    case 314243:
    {
        returnValue = F("Untere Höhle");
        break;
    }
    case 314244:
    {
        returnValue = F("Untere Höhlerreihe");
        break;
    }
    case 314245:
    {
        returnValue = F("Untere Höll");
        break;
    }
    case 314246:
    {
        returnValue = F("Untere Höll Str.");
        break;
    }
    case 314247:
    {
        returnValue = F("Untere Höllengasse");
        break;
    }
    case 314248:
    {
        returnValue = F("Untere Höllgasse");
        break;
    }
    case 314249:
    {
        returnValue = F("Untere Hügelstr.");
        break;
    }
    case 314250:
    {
        returnValue = F("Untere Ibachgasse");
        break;
    }
    case 314251:
    {
        returnValue = F("Untere Industriestr.");
        break;
    }
    case 314252:
    {
        returnValue = F("Untere Ingelheimstr.");
        break;
    }
    case 314253:
    {
        returnValue = F("Untere Inntalstr.");
        break;
    }
    case 314254:
    {
        returnValue = F("Untere Isarau");
        break;
    }
    case 314255:
    {
        returnValue = F("Untere Jahnstr.");
        break;
    }
    case 314256:
    {
        returnValue = F("Untere Jakobermauer");
        break;
    }
    case 314257:
    {
        returnValue = F("Untere Jakobstr.");
        break;
    }
    case 314258:
    {
        returnValue = F("Untere Jasminstaffel");
        break;
    }
    case 314259:
    {
        returnValue = F("Untere Johannisbergstr.");
        break;
    }
    case 314260:
    {
        returnValue = F("Untere Johannisstr.");
        break;
    }
    case 314261:
    {
        returnValue = F("Untere Johannitergasse");
        break;
    }
    case 314262:
    {
        returnValue = F("Untere Judengasse");
        break;
    }
    case 314263:
    {
        returnValue = F("Untere Jägerstr.");
        break;
    }
    case 314264:
    {
        returnValue = F("Untere Jägerwiese");
        break;
    }
    case 314265:
    {
        returnValue = F("Untere Kaiserstr.");
        break;
    }
    case 314266:
    {
        returnValue = F("Untere Kammeraden");
        break;
    }
    case 314267:
    {
        returnValue = F("Untere Kampstr.");
        break;
    }
    case 314268:
    {
        returnValue = F("Untere Kanalstr.");
        break;
    }
    case 314269:
    {
        returnValue = F("Untere Kapellenäcker");
        break;
    }
    case 314270:
    {
        returnValue = F("Untere Kaplaneistr.");
        break;
    }
    case 314271:
    {
        returnValue = F("Untere Karlsstr.");
        break;
    }
    case 314272:
    {
        returnValue = F("Untere Karlstr.");
        break;
    }
    case 314273:
    {
        returnValue = F("Untere Karolastr.");
        break;
    }
    case 314274:
    {
        returnValue = F("Untere Karspüle");
        break;
    }
    case 314275:
    {
        returnValue = F("Untere Kasernenstr.");
        break;
    }
    case 314276:
    {
        returnValue = F("Untere Kaserngasse");
        break;
    }
    case 314277:
    {
        returnValue = F("Untere Kasparstr.");
        break;
    }
    case 314278:
    {
        returnValue = F("Untere Kasseler Str.");
        break;
    }
    case 314279:
    {
        returnValue = F("Untere Kaulwiese");
        break;
    }
    case 314280:
    {
        returnValue = F("Untere Kellerbergstr.");
        break;
    }
    case 314281:
    {
        returnValue = F("Untere Kellergasse");
        break;
    }
    case 314282:
    {
        returnValue = F("Untere Kellerstr.");
        break;
    }
    case 314283:
    {
        returnValue = F("Untere Keltergasse");
        break;
    }
    case 314284:
    {
        returnValue = F("Untere Kelterstr.");
        break;
    }
    case 314285:
    {
        returnValue = F("Untere Kieselbergstr.");
        break;
    }
    case 314286:
    {
        returnValue = F("Untere Kiesstr.");
        break;
    }
    case 314287:
    {
        returnValue = F("Untere Kippstr.");
        break;
    }
    case 314288:
    {
        returnValue = F("Untere Kirchbergstr.");
        break;
    }
    case 314289:
    {
        returnValue = F("Untere Kirchgasse");
        break;
    }
    case 314290:
    {
        returnValue = F("Untere Kirchhaldenstr.");
        break;
    }
    case 314291:
    {
        returnValue = F("Untere Kirchrainstr.");
        break;
    }
    case 314292:
    {
        returnValue = F("Untere Kirchstr.");
        break;
    }
    case 314293:
    {
        returnValue = F("Untere Klappeiche");
        break;
    }
    case 314294:
    {
        returnValue = F("Untere Klause");
        break;
    }
    case 314295:
    {
        returnValue = F("Untere Klepbergstr.");
        break;
    }
    case 314296:
    {
        returnValue = F("Untere Klepp");
        break;
    }
    case 314297:
    {
        returnValue = F("Untere Klimbach");
        break;
    }
    case 314298:
    {
        returnValue = F("Untere Klinge");
        break;
    }
    case 314299:
    {
        returnValue = F("Untere Klingen");
        break;
    }
    case 314300:
    {
        returnValue = F("Untere Klingengasse");
        break;
    }
    case 314301:
    {
        returnValue = F("Untere Klingenäcker");
        break;
    }
    case 314302:
    {
        returnValue = F("Untere Klinggasse");
        break;
    }
    case 314303:
    {
        returnValue = F("Untere Klostergasse");
        break;
    }
    case 314304:
    {
        returnValue = F("Untere Klosterstr.");
        break;
    }
    case 314305:
    {
        returnValue = F("Untere Knappel");
        break;
    }
    case 314306:
    {
        returnValue = F("Untere Knollstr.");
        break;
    }
    case 314307:
    {
        returnValue = F("Untere Kocherwiesen");
        break;
    }
    case 314308:
    {
        returnValue = F("Untere Kohlau");
        break;
    }
    case 314309:
    {
        returnValue = F("Untere Kohlenstr.");
        break;
    }
    case 314310:
    {
        returnValue = F("Untere Kohr");
        break;
    }
    case 314311:
    {
        returnValue = F("Untere Koppelbergstr.");
        break;
    }
    case 314312:
    {
        returnValue = F("Untere Koppenhalde");
        break;
    }
    case 314313:
    {
        returnValue = F("Untere Kordel");
        break;
    }
    case 314314:
    {
        returnValue = F("Untere Krankenhausstr.");
        break;
    }
    case 314315:
    {
        returnValue = F("Untere Krautgasse");
        break;
    }
    case 314316:
    {
        returnValue = F("Untere Krautgärten");
        break;
    }
    case 314317:
    {
        returnValue = F("Untere Krautstr.");
        break;
    }
    case 314318:
    {
        returnValue = F("Untere Krebsbachstr.");
        break;
    }
    case 314319:
    {
        returnValue = F("Untere Kreisstr.");
        break;
    }
    case 314320:
    {
        returnValue = F("Untere Kreppe");
        break;
    }
    case 314321:
    {
        returnValue = F("Untere Kreuzbreite");
        break;
    }
    case 314322:
    {
        returnValue = F("Untere Kreuzgasse");
        break;
    }
    case 314323:
    {
        returnValue = F("Untere Kreuzstr.");
        break;
    }
    case 314324:
    {
        returnValue = F("Untere Krodostr.");
        break;
    }
    case 314325:
    {
        returnValue = F("Untere Krämersgasse");
        break;
    }
    case 314326:
    {
        returnValue = F("Untere Kuhtrift");
        break;
    }
    case 314327:
    {
        returnValue = F("Untere Kulturen");
        break;
    }
    case 314328:
    {
        returnValue = F("Untere Kupfer");
        break;
    }
    case 314329:
    {
        returnValue = F("Untere Käferbeinstr.");
        break;
    }
    case 314330:
    {
        returnValue = F("Untere Käppelesstr.");
        break;
    }
    case 314331:
    {
        returnValue = F("Untere Königsstr.");
        break;
    }
    case 314332:
    {
        returnValue = F("Untere Königstr.");
        break;
    }
    case 314333:
    {
        returnValue = F("Untere Kühnbach");
        break;
    }
    case 314334:
    {
        returnValue = F("Untere Lache");
        break;
    }
    case 314335:
    {
        returnValue = F("Untere Lachen");
        break;
    }
    case 314336:
    {
        returnValue = F("Untere Lahnstr.");
        break;
    }
    case 314337:
    {
        returnValue = F("Untere Landstr.");
        break;
    }
    case 314338:
    {
        returnValue = F("Untere Landwehr");
        break;
    }
    case 314339:
    {
        returnValue = F("Untere Lange Schläge");
        break;
    }
    case 314340:
    {
        returnValue = F("Untere Langgasse");
        break;
    }
    case 314341:
    {
        returnValue = F("Untere Latte");
        break;
    }
    case 314342:
    {
        returnValue = F("Untere Laube");
        break;
    }
    case 314343:
    {
        returnValue = F("Untere Laugasse");
        break;
    }
    case 314344:
    {
        returnValue = F("Untere Layenstr.");
        break;
    }
    case 314345:
    {
        returnValue = F("Untere Leberklinge");
        break;
    }
    case 314346:
    {
        returnValue = F("Untere Lehen");
        break;
    }
    case 314347:
    {
        returnValue = F("Untere Lehmbreite");
        break;
    }
    case 314348:
    {
        returnValue = F("Untere Lehmerhöfe");
        break;
    }
    case 314349:
    {
        returnValue = F("Untere Lehrstr.");
        break;
    }
    case 314350:
    {
        returnValue = F("Untere Leimenkaute");
        break;
    }
    case 314351:
    {
        returnValue = F("Untere Leite");
        break;
    }
    case 314352:
    {
        returnValue = F("Untere Leiten");
        break;
    }
    case 314353:
    {
        returnValue = F("Untere Leitenbergstr.");
        break;
    }
    case 314354:
    {
        returnValue = F("Untere Leitenstr.");
        break;
    }
    case 314355:
    {
        returnValue = F("Untere Lettenbergstr.");
        break;
    }
    case 314356:
    {
        returnValue = F("Untere Lichtenplatzer Str.");
        break;
    }
    case 314357:
    {
        returnValue = F("Untere Lichtäcker");
        break;
    }
    case 314358:
    {
        returnValue = F("Untere Liebach");
        break;
    }
    case 314359:
    {
        returnValue = F("Untere Liebfrauenstr.");
        break;
    }
    case 314360:
    {
        returnValue = F("Untere Linden");
        break;
    }
    case 314361:
    {
        returnValue = F("Untere Lindenackerstr.");
        break;
    }
    case 314362:
    {
        returnValue = F("Untere Lindenbreite");
        break;
    }
    case 314363:
    {
        returnValue = F("Untere Lindenstr.");
        break;
    }
    case 314364:
    {
        returnValue = F("Untere Linie");
        break;
    }
    case 314365:
    {
        returnValue = F("Untere Linnert");
        break;
    }
    case 314366:
    {
        returnValue = F("Untere Lissen");
        break;
    }
    case 314367:
    {
        returnValue = F("Untere Lochmatt");
        break;
    }
    case 314368:
    {
        returnValue = F("Untere Lohe");
        break;
    }
    case 314369:
    {
        returnValue = F("Untere Lohfeldstr.");
        break;
    }
    case 314370:
    {
        returnValue = F("Untere Ludwigstr.");
        break;
    }
    case 314371:
    {
        returnValue = F("Untere Luß");
        break;
    }
    case 314372:
    {
        returnValue = F("Untere Lyck");
        break;
    }
    case 314373:
    {
        returnValue = F("Untere Läng");
        break;
    }
    case 314374:
    {
        returnValue = F("Untere Länge");
        break;
    }
    case 314375:
    {
        returnValue = F("Untere Löthe");
        break;
    }
    case 314376:
    {
        returnValue = F("Untere Lüssen");
        break;
    }
    case 314377:
    {
        returnValue = F("Untere Mahlgasse");
        break;
    }
    case 314378:
    {
        returnValue = F("Untere Maien");
        break;
    }
    case 314379:
    {
        returnValue = F("Untere Maierhofstr.");
        break;
    }
    case 314380:
    {
        returnValue = F("Untere Maingasse");
        break;
    }
    case 314381:
    {
        returnValue = F("Untere Maintorgasse");
        break;
    }
    case 314382:
    {
        returnValue = F("Untere Mangfallstr.");
        break;
    }
    case 314383:
    {
        returnValue = F("Untere Manggasse");
        break;
    }
    case 314384:
    {
        returnValue = F("Untere Markenhalde");
        break;
    }
    case 314385:
    {
        returnValue = F("Untere Markstr.");
        break;
    }
    case 314386:
    {
        returnValue = F("Untere Marktgasse");
        break;
    }
    case 314387:
    {
        returnValue = F("Untere Marktstr.");
        break;
    }
    case 314388:
    {
        returnValue = F("Untere Martinsthaler Str.");
        break;
    }
    case 314389:
    {
        returnValue = F("Untere Matt");
        break;
    }
    case 314390:
    {
        returnValue = F("Untere Matthias-Claudius-Str.");
        break;
    }
    case 314391:
    {
        returnValue = F("Untere Mauergasse");
        break;
    }
    case 314392:
    {
        returnValue = F("Untere Mauerstr.");
        break;
    }
    case 314393:
    {
        returnValue = F("Untere Meerbach");
        break;
    }
    case 314394:
    {
        returnValue = F("Untere Meerlach");
        break;
    }
    case 314395:
    {
        returnValue = F("Untere Mehlgasse");
        break;
    }
    case 314396:
    {
        returnValue = F("Untere Meierbündt");
        break;
    }
    case 314397:
    {
        returnValue = F("Untere Meischede");
        break;
    }
    case 314398:
    {
        returnValue = F("Untere Meisterstr.");
        break;
    }
    case 314399:
    {
        returnValue = F("Untere Mentergasse");
        break;
    }
    case 314400:
    {
        returnValue = F("Untere Messenklinge");
        break;
    }
    case 314401:
    {
        returnValue = F("Untere Metzgerstr.");
        break;
    }
    case 314402:
    {
        returnValue = F("Untere Milbe");
        break;
    }
    case 314403:
    {
        returnValue = F("Untere Milchstr.");
        break;
    }
    case 314404:
    {
        returnValue = F("Untere Moosstr.");
        break;
    }
    case 314405:
    {
        returnValue = F("Untere Muhl");
        break;
    }
    case 314406:
    {
        returnValue = F("Untere Mäurichstr.");
        break;
    }
    case 314407:
    {
        returnValue = F("Untere Mölkenkoppel");
        break;
    }
    case 314408:
    {
        returnValue = F("Untere Mönchtaler Gasse");
        break;
    }
    case 314409:
    {
        returnValue = F("Untere Mühlbachgasse");
        break;
    }
    case 314410:
    {
        returnValue = F("Untere Mühlbachstr.");
        break;
    }
    case 314411:
    {
        returnValue = F("Untere Mühle");
        break;
    }
    case 314412:
    {
        returnValue = F("Untere Mühlenbergstr.");
        break;
    }
    case 314413:
    {
        returnValue = F("Untere Mühlengasse");
        break;
    }
    case 314414:
    {
        returnValue = F("Untere Mühlenstr.");
        break;
    }
    case 314415:
    {
        returnValue = F("Untere Mühlewiesen");
        break;
    }
    case 314416:
    {
        returnValue = F("Untere Mühlgasse");
        break;
    }
    case 314417:
    {
        returnValue = F("Untere Mühlhelle");
        break;
    }
    case 314418:
    {
        returnValue = F("Untere Mühlleite");
        break;
    }
    case 314419:
    {
        returnValue = F("Untere Mühlseite");
        break;
    }
    case 314420:
    {
        returnValue = F("Untere Mühlstadt");
        break;
    }
    case 314421:
    {
        returnValue = F("Untere Mühlstr.");
        break;
    }
    case 314422:
    {
        returnValue = F("Untere Nabburger Str.");
        break;
    }
    case 314423:
    {
        returnValue = F("Untere Neckarstr.");
        break;
    }
    case 314424:
    {
        returnValue = F("Untere Neue Gasse");
        break;
    }
    case 314425:
    {
        returnValue = F("Untere Neue Str.");
        break;
    }
    case 314426:
    {
        returnValue = F("Untere Neugasse");
        break;
    }
    case 314427:
    {
        returnValue = F("Untere Neumattstr.");
        break;
    }
    case 314428:
    {
        returnValue = F("Untere Neustadt");
        break;
    }
    case 314429:
    {
        returnValue = F("Untere Neustr.");
        break;
    }
    case 314430:
    {
        returnValue = F("Untere Nordstr.");
        break;
    }
    case 314431:
    {
        returnValue = F("Untere Nußbreite");
        break;
    }
    case 314432:
    {
        returnValue = F("Untere Oberaustr.");
        break;
    }
    case 314433:
    {
        returnValue = F("Untere Ochsenkopfstr.");
        break;
    }
    case 314434:
    {
        returnValue = F("Untere Ofengasse");
        break;
    }
    case 314435:
    {
        returnValue = F("Untere Ohlingerstr.");
        break;
    }
    case 314436:
    {
        returnValue = F("Untere Ortsstr.");
        break;
    }
    case 314437:
    {
        returnValue = F("Untere Osterfeldstr.");
        break;
    }
    case 314438:
    {
        returnValue = F("Untere Ostlandstr.");
        break;
    }
    case 314439:
    {
        returnValue = F("Untere Papenbrede");
        break;
    }
    case 314440:
    {
        returnValue = F("Untere Parkstr.");
        break;
    }
    case 314441:
    {
        returnValue = F("Untere Patron");
        break;
    }
    case 314442:
    {
        returnValue = F("Untere Paulsdorfer Str.");
        break;
    }
    case 314443:
    {
        returnValue = F("Untere Pekingstr.");
        break;
    }
    case 314444:
    {
        returnValue = F("Untere Penzelgasse");
        break;
    }
    case 314445:
    {
        returnValue = F("Untere Petersbach");
        break;
    }
    case 314446:
    {
        returnValue = F("Untere Peunte");
        break;
    }
    case 314447:
    {
        returnValue = F("Untere Pfaffensteigstr.");
        break;
    }
    case 314448:
    {
        returnValue = F("Untere Pfannenstielgasse");
        break;
    }
    case 314449:
    {
        returnValue = F("Untere Pfannstr.");
        break;
    }
    case 314450:
    {
        returnValue = F("Untere Pfarrgasse");
        break;
    }
    case 314451:
    {
        returnValue = F("Untere Pfarrstr.");
        break;
    }
    case 314452:
    {
        returnValue = F("Untere Pfeifermühle");
        break;
    }
    case 314453:
    {
        returnValue = F("Untere Pforte");
        break;
    }
    case 314454:
    {
        returnValue = F("Untere Pfreimdstr.");
        break;
    }
    case 314455:
    {
        returnValue = F("Untere Pitzstr.");
        break;
    }
    case 314456:
    {
        returnValue = F("Untere Plan");
        break;
    }
    case 314457:
    {
        returnValue = F("Untere Platzgasse");
        break;
    }
    case 314458:
    {
        returnValue = F("Untere Pleitenstr.");
        break;
    }
    case 314459:
    {
        returnValue = F("Untere Plötzgasse");
        break;
    }
    case 314460:
    {
        returnValue = F("Untere Point");
        break;
    }
    case 314461:
    {
        returnValue = F("Untere Prankelsteige");
        break;
    }
    case 314462:
    {
        returnValue = F("Untere Predigergasse");
        break;
    }
    case 314463:
    {
        returnValue = F("Untere Quergasse");
        break;
    }
    case 314464:
    {
        returnValue = F("Untere Querschneise");
        break;
    }
    case 314465:
    {
        returnValue = F("Untere Querstr.");
        break;
    }
    case 314466:
    {
        returnValue = F("Untere Raingasse");
        break;
    }
    case 314467:
    {
        returnValue = F("Untere Rainstr.");
        break;
    }
    case 314468:
    {
        returnValue = F("Untere Rangaustr.");
        break;
    }
    case 314469:
    {
        returnValue = F("Untere Rangenäcker");
        break;
    }
    case 314470:
    {
        returnValue = F("Untere Rappengasse");
        break;
    }
    case 314471:
    {
        returnValue = F("Untere Rathausgasse");
        break;
    }
    case 314472:
    {
        returnValue = F("Untere Rauhmühle");
        break;
    }
    case 314473:
    {
        returnValue = F("Untere Realschulstr.");
        break;
    }
    case 314474:
    {
        returnValue = F("Untere Rebbergstr.");
        break;
    }
    case 314475:
    {
        returnValue = F("Untere Rebhalde");
        break;
    }
    case 314476:
    {
        returnValue = F("Untere Rechstr.");
        break;
    }
    case 314477:
    {
        returnValue = F("Untere Redersgasse");
        break;
    }
    case 314478:
    {
        returnValue = F("Untere Regenstr.");
        break;
    }
    case 314479:
    {
        returnValue = F("Untere Rehwiese");
        break;
    }
    case 314480:
    {
        returnValue = F("Untere Reig");
        break;
    }
    case 314481:
    {
        returnValue = F("Untere Reihe");
        break;
    }
    case 314482:
    {
        returnValue = F("Untere Reit");
        break;
    }
    case 314483:
    {
        returnValue = F("Untere Reiterbrücke");
        break;
    }
    case 314484:
    {
        returnValue = F("Untere Reithausstr.");
        break;
    }
    case 314485:
    {
        returnValue = F("Untere Reut");
        break;
    }
    case 314486:
    {
        returnValue = F("Untere Reute");
        break;
    }
    case 314487:
    {
        returnValue = F("Untere Reuth");
        break;
    }
    case 314488:
    {
        returnValue = F("Untere Rheingasse");
        break;
    }
    case 314489:
    {
        returnValue = F("Untere Rheinstr.");
        break;
    }
    case 314490:
    {
        returnValue = F("Untere Richtstatt");
        break;
    }
    case 314491:
    {
        returnValue = F("Untere Riedstr.");
        break;
    }
    case 314492:
    {
        returnValue = F("Untere Riedwiesen");
        break;
    }
    case 314493:
    {
        returnValue = F("Untere Riedäcker");
        break;
    }
    case 314494:
    {
        returnValue = F("Untere Riemeske");
        break;
    }
    case 314495:
    {
        returnValue = F("Untere Rieselstr.");
        break;
    }
    case 314496:
    {
        returnValue = F("Untere Rietstr.");
        break;
    }
    case 314497:
    {
        returnValue = F("Untere Ringstr.");
        break;
    }
    case 314498:
    {
        returnValue = F("Untere Rittersheck");
        break;
    }
    case 314499:
    {
        returnValue = F("Untere Ritterstr.");
        break;
    }
    case 314500:
    {
        returnValue = F("Untere Rodstr.");
        break;
    }
    case 314501:
    {
        returnValue = F("Untere Rohrschmiedsmühle");
        break;
    }
    case 314502:
    {
        returnValue = F("Untere Rolandstr.");
        break;
    }
    case 314503:
    {
        returnValue = F("Untere Roonstr.");
        break;
    }
    case 314504:
    {
        returnValue = F("Untere Roppelsgasse");
        break;
    }
    case 314505:
    {
        returnValue = F("Untere Rosmaringasse");
        break;
    }
    case 314506:
    {
        returnValue = F("Untere Rossbachgasse");
        break;
    }
    case 314507:
    {
        returnValue = F("Untere Rote Hardt");
        break;
    }
    case 314508:
    {
        returnValue = F("Untere Rotmainaue");
        break;
    }
    case 314509:
    {
        returnValue = F("Untere Rottstr.");
        break;
    }
    case 314510:
    {
        returnValue = F("Untere Rudolf-Breitscheid-Str.");
        break;
    }
    case 314511:
    {
        returnValue = F("Untere Röde");
        break;
    }
    case 314512:
    {
        returnValue = F("Untere Rödt");
        break;
    }
    case 314513:
    {
        returnValue = F("Untere Rögnitz");
        break;
    }
    case 314514:
    {
        returnValue = F("Untere Röhrgasse");
        break;
    }
    case 314515:
    {
        returnValue = F("Untere Römerstr.");
        break;
    }
    case 314516:
    {
        returnValue = F("Untere Röte");
        break;
    }
    case 314517:
    {
        returnValue = F("Untere Röten");
        break;
    }
    case 314518:
    {
        returnValue = F("Untere Röth");
        break;
    }
    case 314519:
    {
        returnValue = F("Untere Röthe");
        break;
    }
    case 314520:
    {
        returnValue = F("Untere Rützelstr.");
        break;
    }
    case 314521:
    {
        returnValue = F("Untere Saarlandstr.");
        break;
    }
    case 314522:
    {
        returnValue = F("Untere Sackgass");
        break;
    }
    case 314523:
    {
        returnValue = F("Untere Sackgasse");
        break;
    }
    case 314524:
    {
        returnValue = F("Untere Sackstr.");
        break;
    }
    case 314525:
    {
        returnValue = F("Untere Sage");
        break;
    }
    case 314526:
    {
        returnValue = F("Untere Saline");
        break;
    }
    case 314527:
    {
        returnValue = F("Untere Salvatorgasse");
        break;
    }
    case 314528:
    {
        returnValue = F("Untere Sandstr.");
        break;
    }
    case 314529:
    {
        returnValue = F("Untere Sandwegebene");
        break;
    }
    case 314530:
    {
        returnValue = F("Untere Sankt-Leonhard-Str.");
        break;
    }
    case 314531:
    {
        returnValue = F("Untere Sattelhecke");
        break;
    }
    case 314532:
    {
        returnValue = F("Untere Schafscheuer");
        break;
    }
    case 314533:
    {
        returnValue = F("Untere Schanze");
        break;
    }
    case 314534:
    {
        returnValue = F("Untere Schanzenstr.");
        break;
    }
    case 314535:
    {
        returnValue = F("Untere Scharr");
        break;
    }
    case 314536:
    {
        returnValue = F("Untere Scheidquelle");
        break;
    }
    case 314537:
    {
        returnValue = F("Untere Scheiterburgsteige");
        break;
    }
    case 314538:
    {
        returnValue = F("Untere Scheunenberggasse");
        break;
    }
    case 314539:
    {
        returnValue = F("Untere Schießmauerstr.");
        break;
    }
    case 314540:
    {
        returnValue = F("Untere Schießäckerstr.");
        break;
    }
    case 314541:
    {
        returnValue = F("Untere Schildwache");
        break;
    }
    case 314542:
    {
        returnValue = F("Untere Schillerstr.");
        break;
    }
    case 314543:
    {
        returnValue = F("Untere Schlittenbahn");
        break;
    }
    case 314544:
    {
        returnValue = F("Untere Schlosshalde");
        break;
    }
    case 314545:
    {
        returnValue = F("Untere Schlosssteige");
        break;
    }
    case 314546:
    {
        returnValue = F("Untere Schloßgartenstr.");
        break;
    }
    case 314547:
    {
        returnValue = F("Untere Schloßgasse");
        break;
    }
    case 314548:
    {
        returnValue = F("Untere Schloßhalde");
        break;
    }
    case 314549:
    {
        returnValue = F("Untere Schloßleite");
        break;
    }
    case 314550:
    {
        returnValue = F("Untere Schloßstr.");
        break;
    }
    case 314551:
    {
        returnValue = F("Untere Schlänke");
        break;
    }
    case 314552:
    {
        returnValue = F("Untere Schmiedegasse");
        break;
    }
    case 314553:
    {
        returnValue = F("Untere Schmiedgasse");
        break;
    }
    case 314554:
    {
        returnValue = F("Untere Schneckenbergstr.");
        break;
    }
    case 314555:
    {
        returnValue = F("Untere Schneise");
        break;
    }
    case 314556:
    {
        returnValue = F("Untere Schnurstr.");
        break;
    }
    case 314557:
    {
        returnValue = F("Untere Schraplauer Str.");
        break;
    }
    case 314558:
    {
        returnValue = F("Untere Schubertstr.");
        break;
    }
    case 314559:
    {
        returnValue = F("Untere Schulgartenstr.");
        break;
    }
    case 314560:
    {
        returnValue = F("Untere Schulgasse");
        break;
    }
    case 314561:
    {
        returnValue = F("Untere Schulstr.");
        break;
    }
    case 314562:
    {
        returnValue = F("Untere Schurnstr.");
        break;
    }
    case 314563:
    {
        returnValue = F("Untere Schwabenau");
        break;
    }
    case 314564:
    {
        returnValue = F("Untere Schwabstr.");
        break;
    }
    case 314565:
    {
        returnValue = F("Untere Schwarzwaldstr.");
        break;
    }
    case 314566:
    {
        returnValue = F("Untere Schweizergasse");
        break;
    }
    case 314567:
    {
        returnValue = F("Untere Schwemmbach");
        break;
    }
    case 314568:
    {
        returnValue = F("Untere Schwemmbichlstr.");
        break;
    }
    case 314569:
    {
        returnValue = F("Untere Schwemme");
        break;
    }
    case 314570:
    {
        returnValue = F("Untere Schwenke");
        break;
    }
    case 314571:
    {
        returnValue = F("Untere Schwimmschulstr.");
        break;
    }
    case 314572:
    {
        returnValue = F("Untere Schäfergasse");
        break;
    }
    case 314573:
    {
        returnValue = F("Untere Schönau");
        break;
    }
    case 314574:
    {
        returnValue = F("Untere Schönauer");
        break;
    }
    case 314575:
    {
        returnValue = F("Untere Schügelestr.");
        break;
    }
    case 314576:
    {
        returnValue = F("Untere Schütt");
        break;
    }
    case 314577:
    {
        returnValue = F("Untere Schützenstr.");
        break;
    }
    case 314578:
    {
        returnValue = F("Untere Seefeldstr.");
        break;
    }
    case 314579:
    {
        returnValue = F("Untere Seegasse");
        break;
    }
    case 314580:
    {
        returnValue = F("Untere Seehalde");
        break;
    }
    case 314581:
    {
        returnValue = F("Untere Seelach");
        break;
    }
    case 314582:
    {
        returnValue = F("Untere Seelenhalde");
        break;
    }
    case 314583:
    {
        returnValue = F("Untere Seelgasse");
        break;
    }
    case 314584:
    {
        returnValue = F("Untere Seestr.");
        break;
    }
    case 314585:
    {
        returnValue = F("Untere Seeäcker");
        break;
    }
    case 314586:
    {
        returnValue = F("Untere Sehlhofstr.");
        break;
    }
    case 314587:
    {
        returnValue = F("Untere Seitenstr.");
        break;
    }
    case 314588:
    {
        returnValue = F("Untere Semel");
        break;
    }
    case 314589:
    {
        returnValue = F("Untere Sendlbachstr.");
        break;
    }
    case 314590:
    {
        returnValue = F("Untere Senke");
        break;
    }
    case 314591:
    {
        returnValue = F("Untere Siedlerstr.");
        break;
    }
    case 314592:
    {
        returnValue = F("Untere Siedlung");
        break;
    }
    case 314593:
    {
        returnValue = F("Untere Siedlungsstr.");
        break;
    }
    case 314594:
    {
        returnValue = F("Untere Siegfriedstr.");
        break;
    }
    case 314595:
    {
        returnValue = F("Untere Silberbergstr.");
        break;
    }
    case 314596:
    {
        returnValue = F("Untere Silberstr.");
        break;
    }
    case 314597:
    {
        returnValue = F("Untere Sitt");
        break;
    }
    case 314598:
    {
        returnValue = F("Untere Soester Str.");
        break;
    }
    case 314599:
    {
        returnValue = F("Untere Sohlstr.");
        break;
    }
    case 314600:
    {
        returnValue = F("Untere Sommerbachstr.");
        break;
    }
    case 314601:
    {
        returnValue = F("Untere Sommerbergstr.");
        break;
    }
    case 314602:
    {
        returnValue = F("Untere Sommerhalde");
        break;
    }
    case 314603:
    {
        returnValue = F("Untere Sommerleite");
        break;
    }
    case 314604:
    {
        returnValue = F("Untere Sonnenbergstr.");
        break;
    }
    case 314605:
    {
        returnValue = F("Untere Sonnenbühlstr.");
        break;
    }
    case 314606:
    {
        returnValue = F("Untere Sonnenhalde");
        break;
    }
    case 314607:
    {
        returnValue = F("Untere Sonnenleite");
        break;
    }
    case 314608:
    {
        returnValue = F("Untere Sonnenstr.");
        break;
    }
    case 314609:
    {
        returnValue = F("Untere Sonnenäcker");
        break;
    }
    case 314610:
    {
        returnValue = F("Untere Sonnhalde");
        break;
    }
    case 314611:
    {
        returnValue = F("Untere Spessartstr.");
        break;
    }
    case 314612:
    {
        returnValue = F("Untere Spielershalde");
        break;
    }
    case 314613:
    {
        returnValue = F("Untere Spitalgasse");
        break;
    }
    case 314614:
    {
        returnValue = F("Untere St. Nikolausgasse");
        break;
    }
    case 314615:
    {
        returnValue = F("Untere Stadlgasse");
        break;
    }
    case 314616:
    {
        returnValue = F("Untere Stadt");
        break;
    }
    case 314617:
    {
        returnValue = F("Untere Stadtmauer");
        break;
    }
    case 314618:
    {
        returnValue = F("Untere Staltenstr.");
        break;
    }
    case 314619:
    {
        returnValue = F("Untere Stauschleusenbrücke");
        break;
    }
    case 314620:
    {
        returnValue = F("Untere Stefanstr.");
        break;
    }
    case 314621:
    {
        returnValue = F("Untere Stegwiesen");
        break;
    }
    case 314622:
    {
        returnValue = F("Untere Steig");
        break;
    }
    case 314623:
    {
        returnValue = F("Untere Steig-Steige");
        break;
    }
    case 314624:
    {
        returnValue = F("Untere Steige");
        break;
    }
    case 314625:
    {
        returnValue = F("Untere Steigstr.");
        break;
    }
    case 314626:
    {
        returnValue = F("Untere Steinau");
        break;
    }
    case 314627:
    {
        returnValue = F("Untere Steinbach");
        break;
    }
    case 314628:
    {
        returnValue = F("Untere Steinbeisstr.");
        break;
    }
    case 314629:
    {
        returnValue = F("Untere Steinbreite");
        break;
    }
    case 314630:
    {
        returnValue = F("Untere Steingasse");
        break;
    }
    case 314631:
    {
        returnValue = F("Untere Steingrube");
        break;
    }
    case 314632:
    {
        returnValue = F("Untere Steinhalde");
        break;
    }
    case 314633:
    {
        returnValue = F("Untere Steinhauser Str.");
        break;
    }
    case 314634:
    {
        returnValue = F("Untere Steinig Richtstatt");
        break;
    }
    case 314635:
    {
        returnValue = F("Untere Steinkuhle");
        break;
    }
    case 314636:
    {
        returnValue = F("Untere Steinleite");
        break;
    }
    case 314637:
    {
        returnValue = F("Untere Steinpforte");
        break;
    }
    case 314638:
    {
        returnValue = F("Untere Steinrinne");
        break;
    }
    case 314639:
    {
        returnValue = F("Untere Steinstr.");
        break;
    }
    case 314640:
    {
        returnValue = F("Untere Steinwiesen");
        break;
    }
    case 314641:
    {
        returnValue = F("Untere Sternstr.");
        break;
    }
    case 314642:
    {
        returnValue = F("Untere Stettwegäcker");
        break;
    }
    case 314643:
    {
        returnValue = F("Untere Stiegel");
        break;
    }
    case 314644:
    {
        returnValue = F("Untere Stiegelwiesen");
        break;
    }
    case 314645:
    {
        returnValue = F("Untere Stiftstr.");
        break;
    }
    case 314646:
    {
        returnValue = F("Untere Stirnhälde");
        break;
    }
    case 314647:
    {
        returnValue = F("Untere Stockstädter Str.");
        break;
    }
    case 314648:
    {
        returnValue = F("Untere Stolle");
        break;
    }
    case 314649:
    {
        returnValue = F("Untere Stoppelsbergstr.");
        break;
    }
    case 314650:
    {
        returnValue = F("Untere Str.");
        break;
    }
    case 314651:
    {
        returnValue = F("Untere Straßäcker");
        break;
    }
    case 314652:
    {
        returnValue = F("Untere Striegisgasse");
        break;
    }
    case 314653:
    {
        returnValue = F("Untere Strohstr.");
        break;
    }
    case 314654:
    {
        returnValue = F("Untere Strut");
        break;
    }
    case 314655:
    {
        returnValue = F("Untere Struth");
        break;
    }
    case 314656:
    {
        returnValue = F("Untere Strütwiesen");
        break;
    }
    case 314657:
    {
        returnValue = F("Untere Stubicke");
        break;
    }
    case 314658:
    {
        returnValue = F("Untere Stöckstr.");
        break;
    }
    case 314659:
    {
        returnValue = F("Untere Säge");
        break;
    }
    case 314660:
    {
        returnValue = F("Untere Sände");
        break;
    }
    case 314661:
    {
        returnValue = F("Untere Söldnersgasse");
        break;
    }
    case 314662:
    {
        returnValue = F("Untere Sülte");
        break;
    }
    case 314663:
    {
        returnValue = F("Untere Talaue");
        break;
    }
    case 314664:
    {
        returnValue = F("Untere Talgasse");
        break;
    }
    case 314665:
    {
        returnValue = F("Untere Talleite");
        break;
    }
    case 314666:
    {
        returnValue = F("Untere Talstr.");
        break;
    }
    case 314667:
    {
        returnValue = F("Untere Tannenberger Str.");
        break;
    }
    case 314668:
    {
        returnValue = F("Untere Tannenbergstr.");
        break;
    }
    case 314669:
    {
        returnValue = F("Untere Tannenstr.");
        break;
    }
    case 314670:
    {
        returnValue = F("Untere Tannleite");
        break;
    }
    case 314671:
    {
        returnValue = F("Untere Tannstr.");
        break;
    }
    case 314672:
    {
        returnValue = F("Untere Teichstr.");
        break;
    }
    case 314673:
    {
        returnValue = F("Untere Terrassenstr.");
        break;
    }
    case 314674:
    {
        returnValue = F("Untere Tilkenbreite");
        break;
    }
    case 314675:
    {
        returnValue = F("Untere Torgasse");
        break;
    }
    case 314676:
    {
        returnValue = F("Untere Torstr.");
        break;
    }
    case 314677:
    {
        returnValue = F("Untere Trappengasse");
        break;
    }
    case 314678:
    {
        returnValue = F("Untere Trift");
        break;
    }
    case 314679:
    {
        returnValue = F("Untere Tropbach");
        break;
    }
    case 314680:
    {
        returnValue = F("Untere Turnstr.");
        break;
    }
    case 314681:
    {
        returnValue = F("Untere Twete");
        break;
    }
    case 314682:
    {
        returnValue = F("Untere Twiete");
        break;
    }
    case 314683:
    {
        returnValue = F("Untere Töpferstr.");
        break;
    }
    case 314684:
    {
        returnValue = F("Untere Ufergasse");
        break;
    }
    case 314685:
    {
        returnValue = F("Untere Uferstr.");
        break;
    }
    case 314686:
    {
        returnValue = F("Untere Ulfe");
        break;
    }
    case 314687:
    {
        returnValue = F("Untere Viebiggasse");
        break;
    }
    case 314688:
    {
        returnValue = F("Untere Viehläger");
        break;
    }
    case 314689:
    {
        returnValue = F("Untere Viehmarktstr.");
        break;
    }
    case 314690:
    {
        returnValue = F("Untere Viehtrift");
        break;
    }
    case 314691:
    {
        returnValue = F("Untere Volkwinhalde");
        break;
    }
    case 314692:
    {
        returnValue = F("Untere Vorstadt");
        break;
    }
    case 314693:
    {
        returnValue = F("Untere Vorstadtstr.");
        break;
    }
    case 314694:
    {
        returnValue = F("Untere Wacholderstr.");
        break;
    }
    case 314695:
    {
        returnValue = F("Untere Waisenhausgasse");
        break;
    }
    case 314696:
    {
        returnValue = F("Untere Waldeslust");
        break;
    }
    case 314697:
    {
        returnValue = F("Untere Waldparkstr.");
        break;
    }
    case 314698:
    {
        returnValue = F("Untere Waldplätze");
        break;
    }
    case 314699:
    {
        returnValue = F("Untere Waldstr.");
        break;
    }
    case 314700:
    {
        returnValue = F("Untere Walkestr.");
        break;
    }
    case 314701:
    {
        returnValue = F("Untere Walkmühle");
        break;
    }
    case 314702:
    {
        returnValue = F("Untere Wallbrunnstr.");
        break;
    }
    case 314703:
    {
        returnValue = F("Untere Wallecke");
        break;
    }
    case 314704:
    {
        returnValue = F("Untere Wallen");
        break;
    }
    case 314705:
    {
        returnValue = F("Untere Wallstr.");
        break;
    }
    case 314706:
    {
        returnValue = F("Untere Walsumermarkstr.");
        break;
    }
    case 314707:
    {
        returnValue = F("Untere Wandelbahn");
        break;
    }
    case 314708:
    {
        returnValue = F("Untere Wangerhalde");
        break;
    }
    case 314709:
    {
        returnValue = F("Untere Wanne");
        break;
    }
    case 314710:
    {
        returnValue = F("Untere Wannestr.");
        break;
    }
    case 314711:
    {
        returnValue = F("Untere Wart");
        break;
    }
    case 314712:
    {
        returnValue = F("Untere Wartenbergstr.");
        break;
    }
    case 314713:
    {
        returnValue = F("Untere Wasenstr.");
        break;
    }
    case 314714:
    {
        returnValue = F("Untere Wassergasse");
        break;
    }
    case 314715:
    {
        returnValue = F("Untere Watt");
        break;
    }
    case 314716:
    {
        returnValue = F("Untere Wegscheid");
        break;
    }
    case 314717:
    {
        returnValue = F("Untere Wehd");
        break;
    }
    case 314718:
    {
        returnValue = F("Untere Weidach");
        break;
    }
    case 314719:
    {
        returnValue = F("Untere Weide");
        break;
    }
    case 314720:
    {
        returnValue = F("Untere Weidenstr.");
        break;
    }
    case 314721:
    {
        returnValue = F("Untere Weihergasse");
        break;
    }
    case 314722:
    {
        returnValue = F("Untere Weiherstr.");
        break;
    }
    case 314723:
    {
        returnValue = F("Untere Weilerstr.");
        break;
    }
    case 314724:
    {
        returnValue = F("Untere Weinberggasse");
        break;
    }
    case 314725:
    {
        returnValue = F("Untere Weinbergsleite");
        break;
    }
    case 314726:
    {
        returnValue = F("Untere Weinbergsleithe");
        break;
    }
    case 314727:
    {
        returnValue = F("Untere Weinbergstr.");
        break;
    }
    case 314728:
    {
        returnValue = F("Untere Weingartenstr.");
        break;
    }
    case 314729:
    {
        returnValue = F("Untere Weinhalde");
        break;
    }
    case 314730:
    {
        returnValue = F("Untere Weinig");
        break;
    }
    case 314731:
    {
        returnValue = F("Untere Weinleite");
        break;
    }
    case 314732:
    {
        returnValue = F("Untere Weinsteige");
        break;
    }
    case 314733:
    {
        returnValue = F("Untere Weinstr.");
        break;
    }
    case 314734:
    {
        returnValue = F("Untere Weitfeldstr.");
        break;
    }
    case 314735:
    {
        returnValue = F("Untere Weitzbergstr.");
        break;
    }
    case 314736:
    {
        returnValue = F("Untere Weißlach");
        break;
    }
    case 314737:
    {
        returnValue = F("Untere Welle");
        break;
    }
    case 314738:
    {
        returnValue = F("Untere Wende");
        break;
    }
    case 314739:
    {
        returnValue = F("Untere Wendelinusstr.");
        break;
    }
    case 314740:
    {
        returnValue = F("Untere Wengertstr.");
        break;
    }
    case 314741:
    {
        returnValue = F("Untere Wernerstr.");
        break;
    }
    case 314742:
    {
        returnValue = F("Untere Weserstr.");
        break;
    }
    case 314743:
    {
        returnValue = F("Untere Widdum");
        break;
    }
    case 314744:
    {
        returnValue = F("Untere Widigstr.");
        break;
    }
    case 314745:
    {
        returnValue = F("Untere Wiedenäcker");
        break;
    }
    case 314746:
    {
        returnValue = F("Untere Wieme");
        break;
    }
    case 314747:
    {
        returnValue = F("Untere Wiesen");
        break;
    }
    case 314748:
    {
        returnValue = F("Untere Wiesen Weg");
        break;
    }
    case 314749:
    {
        returnValue = F("Untere Wiesenbergstr.");
        break;
    }
    case 314750:
    {
        returnValue = F("Untere Wiesenstr.");
        break;
    }
    case 314751:
    {
        returnValue = F("Untere Wilferdinger Str.");
        break;
    }
    case 314752:
    {
        returnValue = F("Untere Wingert");
        break;
    }
    case 314753:
    {
        returnValue = F("Untere Wingertstr.");
        break;
    }
    case 314754:
    {
        returnValue = F("Untere Winkelstr.");
        break;
    }
    case 314755:
    {
        returnValue = F("Untere Winterhalde");
        break;
    }
    case 314756:
    {
        returnValue = F("Untere Wolkenstattstr.");
        break;
    }
    case 314757:
    {
        returnValue = F("Untere Wöhrde");
        break;
    }
    case 314758:
    {
        returnValue = F("Untere Wöhrletstr.");
        break;
    }
    case 314759:
    {
        returnValue = F("Untere Wöhrstr.");
        break;
    }
    case 314760:
    {
        returnValue = F("Untere Wörthstr.");
        break;
    }
    case 314761:
    {
        returnValue = F("Untere Wülle");
        break;
    }
    case 314762:
    {
        returnValue = F("Untere Wüstenroter Str.");
        break;
    }
    case 314763:
    {
        returnValue = F("Untere Zabernstr.");
        break;
    }
    case 314764:
    {
        returnValue = F("Untere Zahlbacher Str.");
        break;
    }
    case 314765:
    {
        returnValue = F("Untere Zehntstr.");
        break;
    }
    case 314766:
    {
        returnValue = F("Untere Zeilstr.");
        break;
    }
    case 314767:
    {
        returnValue = F("Untere Zeiselbergstr.");
        break;
    }
    case 314768:
    {
        returnValue = F("Untere Zell");
        break;
    }
    case 314769:
    {
        returnValue = F("Untere Zense");
        break;
    }
    case 314770:
    {
        returnValue = F("Untere Zentbergstr.");
        break;
    }
    case 314771:
    {
        returnValue = F("Untere Zeppelinstr.");
        break;
    }
    case 314772:
    {
        returnValue = F("Untere Ziegelgasse");
        break;
    }
    case 314773:
    {
        returnValue = F("Untere Ziegelhütte");
        break;
    }
    case 314774:
    {
        returnValue = F("Untere Ziel");
        break;
    }
    case 314775:
    {
        returnValue = F("Untere Zinne");
        break;
    }
    case 314776:
    {
        returnValue = F("Untere Zobelgasse");
        break;
    }
    case 314777:
    {
        returnValue = F("Untere Zwerchgasse");
        break;
    }
    case 314778:
    {
        returnValue = F("Untere Zwingergasse");
        break;
    }
    case 314779:
    {
        returnValue = F("Untere Zwingerstr.");
        break;
    }
    case 314780:
    {
        returnValue = F("Untere Änger");
        break;
    }
    case 314781:
    {
        returnValue = F("Untere Ösch");
        break;
    }
    case 314782:
    {
        returnValue = F("Untere Öschlestr.");
        break;
    }
    case 314783:
    {
        returnValue = F("Untere Öschstr.");
        break;
    }
    case 314784:
    {
        returnValue = F("Untere-Au-Str.");
        break;
    }
    case 314785:
    {
        returnValue = F("Untere-Gasse");
        break;
    }
    case 314786:
    {
        returnValue = F("Untere-Höfe-Str.");
        break;
    }
    case 314787:
    {
        returnValue = F("Untere-Lehr-Str.");
        break;
    }
    case 314788:
    {
        returnValue = F("Untere-Masch-Str.");
        break;
    }
    case 314789:
    {
        returnValue = F("Untere-Sooäcker-Str.");
        break;
    }
    case 314790:
    {
        returnValue = F("Untere-Trift-Str.");
        break;
    }
    case 314791:
    {
        returnValue = F("Untere-Vallendarer-Str.");
        break;
    }
    case 314792:
    {
        returnValue = F("Untere-Walldürner-Str.");
        break;
    }
    case 314793:
    {
        returnValue = F("Untere-Wiesen-Weg");
        break;
    }
    case 314794:
    {
        returnValue = F("Untereben");
        break;
    }
    case 314795:
    {
        returnValue = F("Untereck");
        break;
    }
    case 314796:
    {
        returnValue = F("Unterecke");
        break;
    }
    case 314797:
    {
        returnValue = F("Untereckstr.");
        break;
    }
    case 314798:
    {
        returnValue = F("Unterecksträßle");
        break;
    }
    case 314799:
    {
        returnValue = F("Unteregger Mühle");
        break;
    }
    case 314800:
    {
        returnValue = F("Unteregger Str.");
        break;
    }
    case 314801:
    {
        returnValue = F("Untereggstr.");
        break;
    }
    case 314802:
    {
        returnValue = F("Untereginger Str.");
        break;
    }
    case 314803:
    {
        returnValue = F("Untereich");
        break;
    }
    case 314804:
    {
        returnValue = F("Untereichen");
        break;
    }
    case 314805:
    {
        returnValue = F("Untereicher Str.");
        break;
    }
    case 314806:
    {
        returnValue = F("Untereichet");
        break;
    }
    case 314807:
    {
        returnValue = F("Untereichigt");
        break;
    }
    case 314808:
    {
        returnValue = F("Untereichigter Str.");
        break;
    }
    case 314809:
    {
        returnValue = F("Untereickener Str.");
        break;
    }
    case 314810:
    {
        returnValue = F("Untereiderstr.");
        break;
    }
    case 314811:
    {
        returnValue = F("Untereisenbach");
        break;
    }
    case 314812:
    {
        returnValue = F("Untereisenheimer Str.");
        break;
    }
    case 314813:
    {
        returnValue = F("Untereisesheimer Weg");
        break;
    }
    case 314814:
    {
        returnValue = F("Untereisselner Str.");
        break;
    }
    case 314815:
    {
        returnValue = F("Unterelchinger Weg");
        break;
    }
    case 314816:
    {
        returnValue = F("Unterelend");
        break;
    }
    case 314817:
    {
        returnValue = F("Unterelldorf");
        break;
    }
    case 314818:
    {
        returnValue = F("Unterellenbach");
        break;
    }
    case 314819:
    {
        returnValue = F("Untereller Str.");
        break;
    }
    case 314820:
    {
        returnValue = F("Unterelles");
        break;
    }
    case 314821:
    {
        returnValue = F("Unterelsaff");
        break;
    }
    case 314822:
    {
        returnValue = F("Unterelsbacher Str.");
        break;
    }
    case 314823:
    {
        returnValue = F("Unteremmendorfer Weg");
        break;
    }
    case 314824:
    {
        returnValue = F("Unterems");
        break;
    }
    case 314825:
    {
        returnValue = F("Unterend");
        break;
    }
    case 314826:
    {
        returnValue = F("Unterende");
        break;
    }
    case 314827:
    {
        returnValue = F("Unterengengasse");
        break;
    }
    case 314828:
    {
        returnValue = F("Unterensinger Str.");
        break;
    }
    case 314829:
    {
        returnValue = F("Unterentersbacher Str.");
        break;
    }
    case 314830:
    {
        returnValue = F("Unterer Abendberg");
        break;
    }
    case 314831:
    {
        returnValue = F("Unterer Abteigarten");
        break;
    }
    case 314832:
    {
        returnValue = F("Unterer Adamsberg");
        break;
    }
    case 314833:
    {
        returnValue = F("Unterer Adelbergweg");
        break;
    }
    case 314834:
    {
        returnValue = F("Unterer Adenbergweg");
        break;
    }
    case 314835:
    {
        returnValue = F("Unterer Affensteinpromenade");
        break;
    }
    case 314836:
    {
        returnValue = F("Unterer Affensteinweg");
        break;
    }
    case 314837:
    {
        returnValue = F("Unterer Afrikaweg");
        break;
    }
    case 314838:
    {
        returnValue = F("Unterer Ahlenbergweg");
        break;
    }
    case 314839:
    {
        returnValue = F("Unterer Ahnepark");
        break;
    }
    case 314840:
    {
        returnValue = F("Unterer Alberttalweg");
        break;
    }
    case 314841:
    {
        returnValue = F("Unterer Alleenweg");
        break;
    }
    case 314842:
    {
        returnValue = F("Unterer Altbachweg");
        break;
    }
    case 314843:
    {
        returnValue = F("Unterer Alte-Damen-Weg");
        break;
    }
    case 314844:
    {
        returnValue = F("Unterer Altweg");
        break;
    }
    case 314845:
    {
        returnValue = F("Unterer Ambelenbachweg");
        break;
    }
    case 314846:
    {
        returnValue = F("Unterer Anger");
        break;
    }
    case 314847:
    {
        returnValue = F("Unterer Angerweg");
        break;
    }
    case 314848:
    {
        returnValue = F("Unterer Apfelskopfweg");
        break;
    }
    case 314849:
    {
        returnValue = F("Unterer Appelwaldweg");
        break;
    }
    case 314850:
    {
        returnValue = F("Unterer Ardeyweg");
        break;
    }
    case 314851:
    {
        returnValue = F("Unterer Aschenlochweg");
        break;
    }
    case 314852:
    {
        returnValue = F("Unterer Atzelgarten");
        break;
    }
    case 314853:
    {
        returnValue = F("Unterer Atzemer");
        break;
    }
    case 314854:
    {
        returnValue = F("Unterer Auenweg");
        break;
    }
    case 314855:
    {
        returnValue = F("Unterer Augsgrund");
        break;
    }
    case 314856:
    {
        returnValue = F("Unterer Augstbaum");
        break;
    }
    case 314857:
    {
        returnValue = F("Unterer Auhügel");
        break;
    }
    case 314858:
    {
        returnValue = F("Unterer Auweg");
        break;
    }
    case 314859:
    {
        returnValue = F("Unterer Axtlohweg");
        break;
    }
    case 314860:
    {
        returnValue = F("Unterer Bach");
        break;
    }
    case 314861:
    {
        returnValue = F("Unterer Bachhangweg");
        break;
    }
    case 314862:
    {
        returnValue = F("Unterer Bachweg");
        break;
    }
    case 314863:
    {
        returnValue = F("Unterer Backertsweg");
        break;
    }
    case 314864:
    {
        returnValue = F("Unterer Bahndamm");
        break;
    }
    case 314865:
    {
        returnValue = F("Unterer Bahnhof");
        break;
    }
    case 314866:
    {
        returnValue = F("Unterer Bahnhofsweg");
        break;
    }
    case 314867:
    {
        returnValue = F("Unterer Bahnhofweg");
        break;
    }
    case 314868:
    {
        returnValue = F("Unterer Bahnweg");
        break;
    }
    case 314869:
    {
        returnValue = F("Unterer Balkeshauweg");
        break;
    }
    case 314870:
    {
        returnValue = F("Unterer Ballenweg");
        break;
    }
    case 314871:
    {
        returnValue = F("Unterer Banholzweg");
        break;
    }
    case 314872:
    {
        returnValue = F("Unterer Bannweg");
        break;
    }
    case 314873:
    {
        returnValue = F("Unterer Baselblick");
        break;
    }
    case 314874:
    {
        returnValue = F("Unterer Baubergweg");
        break;
    }
    case 314875:
    {
        returnValue = F("Unterer Becherweg");
        break;
    }
    case 314876:
    {
        returnValue = F("Unterer Beckenhäulesweg");
        break;
    }
    case 314877:
    {
        returnValue = F("Unterer Beeksweg");
        break;
    }
    case 314878:
    {
        returnValue = F("Unterer Beerer");
        break;
    }
    case 314879:
    {
        returnValue = F("Unterer Beerlandsweg");
        break;
    }
    case 314880:
    {
        returnValue = F("Unterer Belz");
        break;
    }
    case 314881:
    {
        returnValue = F("Unterer Belzweg");
        break;
    }
    case 314882:
    {
        returnValue = F("Unterer Benzenklingenweg");
        break;
    }
    case 314883:
    {
        returnValue = F("Unterer Berg");
        break;
    }
    case 314884:
    {
        returnValue = F("Unterer Bergauerplatz");
        break;
    }
    case 314885:
    {
        returnValue = F("Unterer Berggraben");
        break;
    }
    case 314886:
    {
        returnValue = F("Unterer Bergsteig");
        break;
    }
    case 314887:
    {
        returnValue = F("Unterer Bergwandweg");
        break;
    }
    case 314888:
    {
        returnValue = F("Unterer Bergweg");
        break;
    }
    case 314889:
    {
        returnValue = F("Unterer Bermersbacher Weg");
        break;
    }
    case 314890:
    {
        returnValue = F("Unterer Bernardenzug");
        break;
    }
    case 314891:
    {
        returnValue = F("Unterer Bichlweg");
        break;
    }
    case 314892:
    {
        returnValue = F("Unterer Bickner");
        break;
    }
    case 314893:
    {
        returnValue = F("Unterer Bierweg");
        break;
    }
    case 314894:
    {
        returnValue = F("Unterer Bildsteinweg");
        break;
    }
    case 314895:
    {
        returnValue = F("Unterer Binsgenweg");
        break;
    }
    case 314896:
    {
        returnValue = F("Unterer Birken");
        break;
    }
    case 314897:
    {
        returnValue = F("Unterer Birkenbuckelweg");
        break;
    }
    case 314898:
    {
        returnValue = F("Unterer Birkenwaldweg");
        break;
    }
    case 314899:
    {
        returnValue = F("Unterer Birkenweg");
        break;
    }
    case 314900:
    {
        returnValue = F("Unterer Birklesweg");
        break;
    }
    case 314901:
    {
        returnValue = F("Unterer Birkweiler Weg");
        break;
    }
    case 314902:
    {
        returnValue = F("Unterer Birnberg");
        break;
    }
    case 314903:
    {
        returnValue = F("Unterer Bittersbrunnenweg");
        break;
    }
    case 314904:
    {
        returnValue = F("Unterer Blosenbergweg");
        break;
    }
    case 314905:
    {
        returnValue = F("Unterer Blumenstrichweg");
        break;
    }
    case 314906:
    {
        returnValue = F("Unterer Bobenheimer Weg");
        break;
    }
    case 314907:
    {
        returnValue = F("Unterer Bocksbrunnenweg");
        break;
    }
    case 314908:
    {
        returnValue = F("Unterer Bogen");
        break;
    }
    case 314909:
    {
        returnValue = F("Unterer Bohlweg");
        break;
    }
    case 314910:
    {
        returnValue = F("Unterer Bollhaldenweg");
        break;
    }
    case 314911:
    {
        returnValue = F("Unterer Bolloheweg");
        break;
    }
    case 314912:
    {
        returnValue = F("Unterer Bongert");
        break;
    }
    case 314913:
    {
        returnValue = F("Unterer Bornweg");
        break;
    }
    case 314914:
    {
        returnValue = F("Unterer Botenweg");
        break;
    }
    case 314915:
    {
        returnValue = F("Unterer Brand");
        break;
    }
    case 314916:
    {
        returnValue = F("Unterer Brandenkopfweg");
        break;
    }
    case 314917:
    {
        returnValue = F("Unterer Brandenweg");
        break;
    }
    case 314918:
    {
        returnValue = F("Unterer Brandl");
        break;
    }
    case 314919:
    {
        returnValue = F("Unterer Brandweg");
        break;
    }
    case 314920:
    {
        returnValue = F("Unterer Brandweg Horbachtal");
        break;
    }
    case 314921:
    {
        returnValue = F("Unterer Braunewaldsgrundweg");
        break;
    }
    case 314922:
    {
        returnValue = F("Unterer Braustüblweg");
        break;
    }
    case 314923:
    {
        returnValue = F("Unterer Breitackerweg");
        break;
    }
    case 314924:
    {
        returnValue = F("Unterer Breitendobelweg");
        break;
    }
    case 314925:
    {
        returnValue = F("Unterer Breiteweg");
        break;
    }
    case 314926:
    {
        returnValue = F("Unterer Brennerbergweg");
        break;
    }
    case 314927:
    {
        returnValue = F("Unterer Brenntenwaldweg");
        break;
    }
    case 314928:
    {
        returnValue = F("Unterer Brenntenweg");
        break;
    }
    case 314929:
    {
        returnValue = F("Unterer Brenntfelsenweg");
        break;
    }
    case 314930:
    {
        returnValue = F("Unterer Brokamp");
        break;
    }
    case 314931:
    {
        returnValue = F("Unterer Bruchbergweg");
        break;
    }
    case 314932:
    {
        returnValue = F("Unterer Bruchweg");
        break;
    }
    case 314933:
    {
        returnValue = F("Unterer Brunnenweg");
        break;
    }
    case 314934:
    {
        returnValue = F("Unterer Brunnsteig");
        break;
    }
    case 314935:
    {
        returnValue = F("Unterer Brömsterweg");
        break;
    }
    case 314936:
    {
        returnValue = F("Unterer Brückenweg");
        break;
    }
    case 314937:
    {
        returnValue = F("Unterer Brühl");
        break;
    }
    case 314938:
    {
        returnValue = F("Unterer Buchberg");
        break;
    }
    case 314939:
    {
        returnValue = F("Unterer Buchbergweg");
        break;
    }
    case 314940:
    {
        returnValue = F("Unterer Buchenacker");
        break;
    }
    case 314941:
    {
        returnValue = F("Unterer Buchenschlagweg");
        break;
    }
    case 314942:
    {
        returnValue = F("Unterer Buchhaldenweg");
        break;
    }
    case 314943:
    {
        returnValue = F("Unterer Buchholzleweg");
        break;
    }
    case 314944:
    {
        returnValue = F("Unterer Buchholzweg");
        break;
    }
    case 314945:
    {
        returnValue = F("Unterer Buchhälden Weg");
        break;
    }
    case 314946:
    {
        returnValue = F("Unterer Buchwald-weg");
        break;
    }
    case 314947:
    {
        returnValue = F("Unterer Buchwaldweg");
        break;
    }
    case 314948:
    {
        returnValue = F("Unterer Buchweg");
        break;
    }
    case 314949:
    {
        returnValue = F("Unterer Buhlschlag");
        break;
    }
    case 314950:
    {
        returnValue = F("Unterer Buigenweg");
        break;
    }
    case 314951:
    {
        returnValue = F("Unterer Burdenweg");
        break;
    }
    case 314952:
    {
        returnValue = F("Unterer Burggarten");
        break;
    }
    case 314953:
    {
        returnValue = F("Unterer Burggrabenweg");
        break;
    }
    case 314954:
    {
        returnValue = F("Unterer Burghaldeweg");
        break;
    }
    case 314955:
    {
        returnValue = F("Unterer Burgseitenweg");
        break;
    }
    case 314956:
    {
        returnValue = F("Unterer Burgstaller Weg");
        break;
    }
    case 314957:
    {
        returnValue = F("Unterer Burgweg");
        break;
    }
    case 314958:
    {
        returnValue = F("Unterer Buschmühlenweg");
        break;
    }
    case 314959:
    {
        returnValue = F("Unterer Bux");
        break;
    }
    case 314960:
    {
        returnValue = F("Unterer Buxheimer Weg");
        break;
    }
    case 314961:
    {
        returnValue = F("Unterer Bächhäldeweg");
        break;
    }
    case 314962:
    {
        returnValue = F("Unterer Bächlesweg");
        break;
    }
    case 314963:
    {
        returnValue = F("Unterer Bärensäureweg");
        break;
    }
    case 314964:
    {
        returnValue = F("Unterer Bästenhardtweg");
        break;
    }
    case 314965:
    {
        returnValue = F("Unterer Bühl");
        break;
    }
    case 314966:
    {
        returnValue = F("Unterer Bühlweg");
        break;
    }
    case 314967:
    {
        returnValue = F("Unterer Bürgerpark");
        break;
    }
    case 314968:
    {
        returnValue = F("Unterer Bürglaß");
        break;
    }
    case 314969:
    {
        returnValue = F("Unterer Bürrleweg");
        break;
    }
    case 314970:
    {
        returnValue = F("Unterer Conventrain");
        break;
    }
    case 314971:
    {
        returnValue = F("Unterer Dachsbauhaldenweg");
        break;
    }
    case 314972:
    {
        returnValue = F("Unterer Dachsbauweg");
        break;
    }
    case 314973:
    {
        returnValue = F("Unterer Dachsbergweg");
        break;
    }
    case 314974:
    {
        returnValue = F("Unterer Dachsklingenweg");
        break;
    }
    case 314975:
    {
        returnValue = F("Unterer Dallenbergweg");
        break;
    }
    case 314976:
    {
        returnValue = F("Unterer Damm");
        break;
    }
    case 314977:
    {
        returnValue = F("Unterer Dammbergweg");
        break;
    }
    case 314978:
    {
        returnValue = F("Unterer Dammen");
        break;
    }
    case 314979:
    {
        returnValue = F("Unterer Dammweg");
        break;
    }
    case 314980:
    {
        returnValue = F("Unterer Darmuthweg");
        break;
    }
    case 314981:
    {
        returnValue = F("Unterer Daxstein");
        break;
    }
    case 314982:
    {
        returnValue = F("Unterer Dellenweg");
        break;
    }
    case 314983:
    {
        returnValue = F("Unterer Deponieweg");
        break;
    }
    case 314984:
    {
        returnValue = F("Unterer Dettenackerweg");
        break;
    }
    case 314985:
    {
        returnValue = F("Unterer Deutschlandschacht");
        break;
    }
    case 314986:
    {
        returnValue = F("Unterer Dezemhieb");
        break;
    }
    case 314987:
    {
        returnValue = F("Unterer Dobelweg");
        break;
    }
    case 314988:
    {
        returnValue = F("Unterer Dohrweg");
        break;
    }
    case 314989:
    {
        returnValue = F("Unterer Domentalsweg");
        break;
    }
    case 314990:
    {
        returnValue = F("Unterer Dorfgraben");
        break;
    }
    case 314991:
    {
        returnValue = F("Unterer Dorfplatz");
        break;
    }
    case 314992:
    {
        returnValue = F("Unterer Dorfweg");
        break;
    }
    case 314993:
    {
        returnValue = F("Unterer Dorfwiesenweg");
        break;
    }
    case 314994:
    {
        returnValue = F("Unterer Dornbusch");
        break;
    }
    case 314995:
    {
        returnValue = F("Unterer Dornbuschweg");
        break;
    }
    case 314996:
    {
        returnValue = F("Unterer Dornrainweg");
        break;
    }
    case 314997:
    {
        returnValue = F("Unterer Dorrenberg");
        break;
    }
    case 314998:
    {
        returnValue = F("Unterer Dorsing");
        break;
    }
    case 314999:
    {
        returnValue = F("Unterer Drachenhöhlenweg");
        break;
    }
    case 315000:
    {
        returnValue = F("Unterer Drauweg");
        break;
    }
    case 315001:
    {
        returnValue = F("Unterer Dreieichenschlagweg");
        break;
    }
    case 315002:
    {
        returnValue = F("Unterer Dreierweg");
        break;
    }
    case 315003:
    {
        returnValue = F("Unterer Dunkeleweg");
        break;
    }
    case 315004:
    {
        returnValue = F("Unterer Dürrbückliweg");
        break;
    }
    case 315005:
    {
        returnValue = F("Unterer Dürrenbergweg");
        break;
    }
    case 315006:
    {
        returnValue = F("Unterer Ebbel");
        break;
    }
    case 315007:
    {
        returnValue = F("Unterer Eckkopfweg");
        break;
    }
    case 315008:
    {
        returnValue = F("Unterer Eggeweg");
        break;
    }
    case 315009:
    {
        returnValue = F("Unterer Ehla");
        break;
    }
    case 315010:
    {
        returnValue = F("Unterer Ehlert");
        break;
    }
    case 315011:
    {
        returnValue = F("Unterer Ehwaldweg");
        break;
    }
    case 315012:
    {
        returnValue = F("Unterer Ehweg");
        break;
    }
    case 315013:
    {
        returnValue = F("Unterer Eichbühl");
        break;
    }
    case 315014:
    {
        returnValue = F("Unterer Eichenbergsweg");
        break;
    }
    case 315015:
    {
        returnValue = F("Unterer Eichenweg");
        break;
    }
    case 315016:
    {
        returnValue = F("Unterer Eichhagen");
        break;
    }
    case 315017:
    {
        returnValue = F("Unterer Eichwaldweg");
        break;
    }
    case 315018:
    {
        returnValue = F("Unterer Eichweg");
        break;
    }
    case 315019:
    {
        returnValue = F("Unterer Eickeshagen");
        break;
    }
    case 315020:
    {
        returnValue = F("Unterer Einschlagweg");
        break;
    }
    case 315021:
    {
        returnValue = F("Unterer Eisbergweg");
        break;
    }
    case 315022:
    {
        returnValue = F("Unterer Ellenberg");
        break;
    }
    case 315023:
    {
        returnValue = F("Unterer Elstalsweg");
        break;
    }
    case 315024:
    {
        returnValue = F("Unterer Engelsbuckelweg");
        break;
    }
    case 315025:
    {
        returnValue = F("Unterer Engen");
        break;
    }
    case 315026:
    {
        returnValue = F("Unterer Enscheler Waldweg");
        break;
    }
    case 315027:
    {
        returnValue = F("Unterer Erbacher Weg");
        break;
    }
    case 315028:
    {
        returnValue = F("Unterer Erbsenbach");
        break;
    }
    case 315029:
    {
        returnValue = F("Unterer Erdbeerbodenweg");
        break;
    }
    case 315030:
    {
        returnValue = F("Unterer Erdenhardweg");
        break;
    }
    case 315031:
    {
        returnValue = F("Unterer Erdgrubenweg");
        break;
    }
    case 315032:
    {
        returnValue = F("Unterer Erdweg");
        break;
    }
    case 315033:
    {
        returnValue = F("Unterer Erlenbach");
        break;
    }
    case 315034:
    {
        returnValue = F("Unterer Erlenberg");
        break;
    }
    case 315035:
    {
        returnValue = F("Unterer Erlengrundweg");
        break;
    }
    case 315036:
    {
        returnValue = F("Unterer Ernteweg");
        break;
    }
    case 315037:
    {
        returnValue = F("Unterer Erzbuckweg");
        break;
    }
    case 315038:
    {
        returnValue = F("Unterer Esch");
        break;
    }
    case 315039:
    {
        returnValue = F("Unterer Eschachweg");
        break;
    }
    case 315040:
    {
        returnValue = F("Unterer Eschhaldenweg");
        break;
    }
    case 315041:
    {
        returnValue = F("Unterer Eschweg");
        break;
    }
    case 315042:
    {
        returnValue = F("Unterer Espach");
        break;
    }
    case 315043:
    {
        returnValue = F("Unterer Espenweg");
        break;
    }
    case 315044:
    {
        returnValue = F("Unterer Esperweg");
        break;
    }
    case 315045:
    {
        returnValue = F("Unterer Ettenbergweg");
        break;
    }
    case 315046:
    {
        returnValue = F("Unterer Ettlesberg");
        break;
    }
    case 315047:
    {
        returnValue = F("Unterer Eulenbergweg");
        break;
    }
    case 315048:
    {
        returnValue = F("Unterer Ewiger Weg");
        break;
    }
    case 315049:
    {
        returnValue = F("Unterer Ezachweg");
        break;
    }
    case 315050:
    {
        returnValue = F("Unterer Eßlichweg");
        break;
    }
    case 315051:
    {
        returnValue = F("Unterer Fahrbachweg");
        break;
    }
    case 315052:
    {
        returnValue = F("Unterer Falkenweg");
        break;
    }
    case 315053:
    {
        returnValue = F("Unterer Fallbergweg");
        break;
    }
    case 315054:
    {
        returnValue = F("Unterer Farbberg");
        break;
    }
    case 315055:
    {
        returnValue = F("Unterer Feldhain");
        break;
    }
    case 315056:
    {
        returnValue = F("Unterer Fellberg");
        break;
    }
    case 315057:
    {
        returnValue = F("Unterer Felsen");
        break;
    }
    case 315058:
    {
        returnValue = F("Unterer Felsenmeerweg");
        break;
    }
    case 315059:
    {
        returnValue = F("Unterer Finstererweg");
        break;
    }
    case 315060:
    {
        returnValue = F("Unterer Finstergrabenweg");
        break;
    }
    case 315061:
    {
        returnValue = F("Unterer Flachsberg");
        break;
    }
    case 315062:
    {
        returnValue = F("Unterer Flechter Weg");
        break;
    }
    case 315063:
    {
        returnValue = F("Unterer Fleischerweg");
        break;
    }
    case 315064:
    {
        returnValue = F("Unterer Floßgrabenweg");
        break;
    }
    case 315065:
    {
        returnValue = F("Unterer Flur");
        break;
    }
    case 315066:
    {
        returnValue = F("Unterer Flurweg");
        break;
    }
    case 315067:
    {
        returnValue = F("Unterer Flutgraben");
        break;
    }
    case 315068:
    {
        returnValue = F("Unterer Flöhaweg");
        break;
    }
    case 315069:
    {
        returnValue = F("Unterer Forst");
        break;
    }
    case 315070:
    {
        returnValue = F("Unterer Forstteileweg");
        break;
    }
    case 315071:
    {
        returnValue = F("Unterer Forstweg");
        break;
    }
    case 315072:
    {
        returnValue = F("Unterer Frauberg");
        break;
    }
    case 315073:
    {
        returnValue = F("Unterer Freimarkt");
        break;
    }
    case 315074:
    {
        returnValue = F("Unterer Friedhofsweg");
        break;
    }
    case 315075:
    {
        returnValue = F("Unterer Friedhofweg");
        break;
    }
    case 315076:
    {
        returnValue = F("Unterer Frohnengrund");
        break;
    }
    case 315077:
    {
        returnValue = F("Unterer Frohnholz");
        break;
    }
    case 315078:
    {
        returnValue = F("Unterer Frohnholzweg");
        break;
    }
    case 315079:
    {
        returnValue = F("Unterer Frohntalweg");
        break;
    }
    case 315080:
    {
        returnValue = F("Unterer Fuchsbergweg");
        break;
    }
    case 315081:
    {
        returnValue = F("Unterer Fuchsgraben");
        break;
    }
    case 315082:
    {
        returnValue = F("Unterer Fuchshaldenweg");
        break;
    }
    case 315083:
    {
        returnValue = F("Unterer Fussberg");
        break;
    }
    case 315084:
    {
        returnValue = F("Unterer Fußstieg");
        break;
    }
    case 315085:
    {
        returnValue = F("Unterer Föhrbergweg");
        break;
    }
    case 315086:
    {
        returnValue = F("Unterer Förbauer Weg");
        break;
    }
    case 315087:
    {
        returnValue = F("Unterer Förtelbergweg");
        break;
    }
    case 315088:
    {
        returnValue = F("Unterer Führhäupterweg");
        break;
    }
    case 315089:
    {
        returnValue = F("Unterer Füllsbergweg");
        break;
    }
    case 315090:
    {
        returnValue = F("Unterer Gabelhau");
        break;
    }
    case 315091:
    {
        returnValue = F("Unterer Gaisberg");
        break;
    }
    case 315092:
    {
        returnValue = F("Unterer Gaisfelsenweg");
        break;
    }
    case 315093:
    {
        returnValue = F("Unterer Gaishaldenweg");
        break;
    }
    case 315094:
    {
        returnValue = F("Unterer Galgenberg");
        break;
    }
    case 315095:
    {
        returnValue = F("Unterer Galgenbergweg");
        break;
    }
    case 315096:
    {
        returnValue = F("Unterer Galgenweg");
        break;
    }
    case 315097:
    {
        returnValue = F("Unterer Gallenweilerweg");
        break;
    }
    case 315098:
    {
        returnValue = F("Unterer Gartbrink");
        break;
    }
    case 315099:
    {
        returnValue = F("Unterer Garten");
        break;
    }
    case 315100:
    {
        returnValue = F("Unterer Gartenweg");
        break;
    }
    case 315101:
    {
        returnValue = F("Unterer Gauchmattweg");
        break;
    }
    case 315102:
    {
        returnValue = F("Unterer Gegenbauersweg");
        break;
    }
    case 315103:
    {
        returnValue = F("Unterer Gehauene Weg");
        break;
    }
    case 315104:
    {
        returnValue = F("Unterer Geiersgraben");
        break;
    }
    case 315105:
    {
        returnValue = F("Unterer Geigersheidweg");
        break;
    }
    case 315106:
    {
        returnValue = F("Unterer Geisberg");
        break;
    }
    case 315107:
    {
        returnValue = F("Unterer Geißelring");
        break;
    }
    case 315108:
    {
        returnValue = F("Unterer Geißenbachweg");
        break;
    }
    case 315109:
    {
        returnValue = F("Unterer Gelengweg");
        break;
    }
    case 315110:
    {
        returnValue = F("Unterer Gemeindeberg");
        break;
    }
    case 315111:
    {
        returnValue = F("Unterer Gemeindewaldweg");
        break;
    }
    case 315112:
    {
        returnValue = F("Unterer Geraweg");
        break;
    }
    case 315113:
    {
        returnValue = F("Unterer Gernauweg");
        break;
    }
    case 315114:
    {
        returnValue = F("Unterer Gertberg");
        break;
    }
    case 315115:
    {
        returnValue = F("Unterer Gfällmattenweg");
        break;
    }
    case 315116:
    {
        returnValue = F("Unterer Ghaiweg");
        break;
    }
    case 315117:
    {
        returnValue = F("Unterer Giersbergweg");
        break;
    }
    case 315118:
    {
        returnValue = F("Unterer Giesen-Weg");
        break;
    }
    case 315119:
    {
        returnValue = F("Unterer Gittwaldweg");
        break;
    }
    case 315120:
    {
        returnValue = F("Unterer Glaserbergweg");
        break;
    }
    case 315121:
    {
        returnValue = F("Unterer Glashaldenweg");
        break;
    }
    case 315122:
    {
        returnValue = F("Unterer Gleichenweg");
        break;
    }
    case 315123:
    {
        returnValue = F("Unterer Gleißenberg");
        break;
    }
    case 315124:
    {
        returnValue = F("Unterer Glockenstuhlweg");
        break;
    }
    case 315125:
    {
        returnValue = F("Unterer Goldbachweg");
        break;
    }
    case 315126:
    {
        returnValue = F("Unterer Graben");
        break;
    }
    case 315127:
    {
        returnValue = F("Unterer Grabenring");
        break;
    }
    case 315128:
    {
        returnValue = F("Unterer Grabenweg");
        break;
    }
    case 315129:
    {
        returnValue = F("Unterer Graffweg");
        break;
    }
    case 315130:
    {
        returnValue = F("Unterer Grasweg");
        break;
    }
    case 315131:
    {
        returnValue = F("Unterer Grenzweg");
        break;
    }
    case 315132:
    {
        returnValue = F("Unterer Greuthweg");
        break;
    }
    case 315133:
    {
        returnValue = F("Unterer Gries");
        break;
    }
    case 315134:
    {
        returnValue = F("Unterer Griesberg");
        break;
    }
    case 315135:
    {
        returnValue = F("Unterer Grieslenweg");
        break;
    }
    case 315136:
    {
        returnValue = F("Unterer Griesweg");
        break;
    }
    case 315137:
    {
        returnValue = F("Unterer Grifflenberg");
        break;
    }
    case 315138:
    {
        returnValue = F("Unterer Grimms");
        break;
    }
    case 315139:
    {
        returnValue = F("Unterer Grottenweg");
        break;
    }
    case 315140:
    {
        returnValue = F("Unterer Großholzweg");
        break;
    }
    case 315141:
    {
        returnValue = F("Unterer Grubenweg");
        break;
    }
    case 315142:
    {
        returnValue = F("Unterer Grund");
        break;
    }
    case 315143:
    {
        returnValue = F("Unterer Grundwaldweg");
        break;
    }
    case 315144:
    {
        returnValue = F("Unterer Grundweg");
        break;
    }
    case 315145:
    {
        returnValue = F("Unterer Grüner Weg");
        break;
    }
    case 315146:
    {
        returnValue = F("Unterer Grünwaldweg");
        break;
    }
    case 315147:
    {
        returnValue = F("Unterer Grünweg");
        break;
    }
    case 315148:
    {
        returnValue = F("Unterer Grütweg");
        break;
    }
    case 315149:
    {
        returnValue = F("Unterer Gschwendeweg");
        break;
    }
    case 315150:
    {
        returnValue = F("Unterer Guldenberg");
        break;
    }
    case 315151:
    {
        returnValue = F("Unterer Gunzenweg");
        break;
    }
    case 315152:
    {
        returnValue = F("Unterer Gutsweg");
        break;
    }
    case 315153:
    {
        returnValue = F("Unterer Gwänn Weg");
        break;
    }
    case 315154:
    {
        returnValue = F("Unterer Gähbahnweg");
        break;
    }
    case 315155:
    {
        returnValue = F("Unterer Gänsbergweg");
        break;
    }
    case 315156:
    {
        returnValue = F("Unterer Gässlesweg");
        break;
    }
    case 315157:
    {
        returnValue = F("Unterer Görnitzer Weg");
        break;
    }
    case 315158:
    {
        returnValue = F("Unterer Haarkamp");
        break;
    }
    case 315159:
    {
        returnValue = F("Unterer Haberschlagweg");
        break;
    }
    case 315160:
    {
        returnValue = F("Unterer Hachelweg");
        break;
    }
    case 315161:
    {
        returnValue = F("Unterer Hackenweg");
        break;
    }
    case 315162:
    {
        returnValue = F("Unterer Hagen");
        break;
    }
    case 315163:
    {
        returnValue = F("Unterer Hagenmattweg");
        break;
    }
    case 315164:
    {
        returnValue = F("Unterer Hagerweg");
        break;
    }
    case 315165:
    {
        returnValue = F("Unterer Hagwaldweg");
        break;
    }
    case 315166:
    {
        returnValue = F("Unterer Hagweg");
        break;
    }
    case 315167:
    {
        returnValue = F("Unterer Hahnenböhlweg");
        break;
    }
    case 315168:
    {
        returnValue = F("Unterer Hahnenkopf");
        break;
    }
    case 315169:
    {
        returnValue = F("Unterer Hahnweg");
        break;
    }
    case 315170:
    {
        returnValue = F("Unterer Haidberg");
        break;
    }
    case 315171:
    {
        returnValue = F("Unterer Haidweg");
        break;
    }
    case 315172:
    {
        returnValue = F("Unterer Hainberg");
        break;
    }
    case 315173:
    {
        returnValue = F("Unterer Hainstadter Weg");
        break;
    }
    case 315174:
    {
        returnValue = F("Unterer Hakenweg");
        break;
    }
    case 315175:
    {
        returnValue = F("Unterer Haldenwaldweg");
        break;
    }
    case 315176:
    {
        returnValue = F("Unterer Haldenweg");
        break;
    }
    case 315177:
    {
        returnValue = F("Unterer Haldeweg");
        break;
    }
    case 315178:
    {
        returnValue = F("Unterer Hallgarten");
        break;
    }
    case 315179:
    {
        returnValue = F("Unterer Hals");
        break;
    }
    case 315180:
    {
        returnValue = F("Unterer Hammer");
        break;
    }
    case 315181:
    {
        returnValue = F("Unterer Hammerbügl");
        break;
    }
    case 315182:
    {
        returnValue = F("Unterer Hammerhaldeweg");
        break;
    }
    case 315183:
    {
        returnValue = F("Unterer Hammerrain");
        break;
    }
    case 315184:
    {
        returnValue = F("Unterer Hamscheberg");
        break;
    }
    case 315185:
    {
        returnValue = F("Unterer Handweiser");
        break;
    }
    case 315186:
    {
        returnValue = F("Unterer Hang");
        break;
    }
    case 315187:
    {
        returnValue = F("Unterer Hangertweg");
        break;
    }
    case 315188:
    {
        returnValue = F("Unterer Hangweg");
        break;
    }
    case 315189:
    {
        returnValue = F("Unterer Hansbergweg");
        break;
    }
    case 315190:
    {
        returnValue = F("Unterer Hansenwiesenweg");
        break;
    }
    case 315191:
    {
        returnValue = F("Unterer Happeyweg");
        break;
    }
    case 315192:
    {
        returnValue = F("Unterer Hardbergweg");
        break;
    }
    case 315193:
    {
        returnValue = F("Unterer Hardtenbühl");
        break;
    }
    case 315194:
    {
        returnValue = F("Unterer Hardthof");
        break;
    }
    case 315195:
    {
        returnValue = F("Unterer Hardtweg");
        break;
    }
    case 315196:
    {
        returnValue = F("Unterer Hardweg");
        break;
    }
    case 315197:
    {
        returnValue = F("Unterer Harthweg");
        break;
    }
    case 315198:
    {
        returnValue = F("Unterer Hartungsweg");
        break;
    }
    case 315199:
    {
        returnValue = F("Unterer Hartweg");
        break;
    }
    case 315200:
    {
        returnValue = F("Unterer Haselberg");
        break;
    }
    case 315201:
    {
        returnValue = F("Unterer Hasenbuehlweg");
        break;
    }
    case 315202:
    {
        returnValue = F("Unterer Hasenknuck");
        break;
    }
    case 315203:
    {
        returnValue = F("Unterer Hasenkopfweg");
        break;
    }
    case 315204:
    {
        returnValue = F("Unterer Hasenteichweg");
        break;
    }
    case 315205:
    {
        returnValue = F("Unterer Hasenäckerweg");
        break;
    }
    case 315206:
    {
        returnValue = F("Unterer Haskamp");
        break;
    }
    case 315207:
    {
        returnValue = F("Unterer Hasselbach");
        break;
    }
    case 315208:
    {
        returnValue = F("Unterer Hasselbacherforlenweg");
        break;
    }
    case 315209:
    {
        returnValue = F("Unterer Hasselweg");
        break;
    }
    case 315210:
    {
        returnValue = F("Unterer Haubenbergweg");
        break;
    }
    case 315211:
    {
        returnValue = F("Unterer Hauptweg");
        break;
    }
    case 315212:
    {
        returnValue = F("Unterer Hauswang");
        break;
    }
    case 315213:
    {
        returnValue = F("Unterer Hauweg");
        break;
    }
    case 315214:
    {
        returnValue = F("Unterer Heckberg");
        break;
    }
    case 315215:
    {
        returnValue = F("Unterer Heersbergweg");
        break;
    }
    case 315216:
    {
        returnValue = F("Unterer Heideckweg");
        break;
    }
    case 315217:
    {
        returnValue = F("Unterer Heidelberg");
        break;
    }
    case 315218:
    {
        returnValue = F("Unterer Heidenweg");
        break;
    }
    case 315219:
    {
        returnValue = F("Unterer Heideweg");
        break;
    }
    case 315220:
    {
        returnValue = F("Unterer Heiligenhof");
        break;
    }
    case 315221:
    {
        returnValue = F("Unterer Heiligenrainweg");
        break;
    }
    case 315222:
    {
        returnValue = F("Unterer Heimbachweg");
        break;
    }
    case 315223:
    {
        returnValue = F("Unterer Heimeckerschlagweg");
        break;
    }
    case 315224:
    {
        returnValue = F("Unterer Heimstättenweg");
        break;
    }
    case 315225:
    {
        returnValue = F("Unterer Heinzengrund");
        break;
    }
    case 315226:
    {
        returnValue = F("Unterer Hellenweg");
        break;
    }
    case 315227:
    {
        returnValue = F("Unterer Hellrain");
        break;
    }
    case 315228:
    {
        returnValue = F("Unterer Hellweg");
        break;
    }
    case 315229:
    {
        returnValue = F("Unterer Henschenberg");
        break;
    }
    case 315230:
    {
        returnValue = F("Unterer Hermannsberg");
        break;
    }
    case 315231:
    {
        returnValue = F("Unterer Herrenberg");
        break;
    }
    case 315232:
    {
        returnValue = F("Unterer Herrenpfad");
        break;
    }
    case 315233:
    {
        returnValue = F("Unterer Herrenstein");
        break;
    }
    case 315234:
    {
        returnValue = F("Unterer Herrenwaldweg");
        break;
    }
    case 315235:
    {
        returnValue = F("Unterer Herrenweg");
        break;
    }
    case 315236:
    {
        returnValue = F("Unterer Herrlichweg");
        break;
    }
    case 315237:
    {
        returnValue = F("Unterer Herrnkopf");
        break;
    }
    case 315238:
    {
        returnValue = F("Unterer Herrschaftswaldweg");
        break;
    }
    case 315239:
    {
        returnValue = F("Unterer Herzogweg");
        break;
    }
    case 315240:
    {
        returnValue = F("Unterer Heselweg");
        break;
    }
    case 315241:
    {
        returnValue = F("Unterer Heubergweg");
        break;
    }
    case 315242:
    {
        returnValue = F("Unterer Heuchelbach");
        break;
    }
    case 315243:
    {
        returnValue = F("Unterer Heukamp");
        break;
    }
    case 315244:
    {
        returnValue = F("Unterer Heustellenweg");
        break;
    }
    case 315245:
    {
        returnValue = F("Unterer Heuweg");
        break;
    }
    case 315246:
    {
        returnValue = F("Unterer Hillig");
        break;
    }
    case 315247:
    {
        returnValue = F("Unterer Hilsigweg");
        break;
    }
    case 315248:
    {
        returnValue = F("Unterer Hintermattweg");
        break;
    }
    case 315249:
    {
        returnValue = F("Unterer Hirnberg");
        break;
    }
    case 315250:
    {
        returnValue = F("Unterer Hirschberg");
        break;
    }
    case 315251:
    {
        returnValue = F("Unterer Hirschhornleweg");
        break;
    }
    case 315252:
    {
        returnValue = F("Unterer Hirtenbuck");
        break;
    }
    case 315253:
    {
        returnValue = F("Unterer Hochwaldweg");
        break;
    }
    case 315254:
    {
        returnValue = F("Unterer Hochweg");
        break;
    }
    case 315255:
    {
        returnValue = F("Unterer Hof");
        break;
    }
    case 315256:
    {
        returnValue = F("Unterer Hofanger");
        break;
    }
    case 315257:
    {
        returnValue = F("Unterer Hofbauernweg");
        break;
    }
    case 315258:
    {
        returnValue = F("Unterer Hofhauweg");
        break;
    }
    case 315259:
    {
        returnValue = F("Unterer Hofstattweg");
        break;
    }
    case 315260:
    {
        returnValue = F("Unterer Hohenförsiekweg");
        break;
    }
    case 315261:
    {
        returnValue = F("Unterer Hohenwarsleber Weg");
        break;
    }
    case 315262:
    {
        returnValue = F("Unterer Hohlenweg");
        break;
    }
    case 315263:
    {
        returnValue = F("Unterer Hohlweg");
        break;
    }
    case 315264:
    {
        returnValue = F("Unterer Hohwaldweg");
        break;
    }
    case 315265:
    {
        returnValue = F("Unterer Hohweg");
        break;
    }
    case 315266:
    {
        returnValue = F("Unterer Holmershornweg");
        break;
    }
    case 315267:
    {
        returnValue = F("Unterer Holzackerweg");
        break;
    }
    case 315268:
    {
        returnValue = F("Unterer Holzschuhwaldweg");
        break;
    }
    case 315269:
    {
        returnValue = F("Unterer Horizontalweg");
        break;
    }
    case 315270:
    {
        returnValue = F("Unterer Hornbachstaden");
        break;
    }
    case 315271:
    {
        returnValue = F("Unterer Hornbergweg");
        break;
    }
    case 315272:
    {
        returnValue = F("Unterer Hornweg");
        break;
    }
    case 315273:
    {
        returnValue = F("Unterer Hostert");
        break;
    }
    case 315274:
    {
        returnValue = F("Unterer Hubweg");
        break;
    }
    case 315275:
    {
        returnValue = F("Unterer Hufenweg");
        break;
    }
    case 315276:
    {
        returnValue = F("Unterer Hufeweg");
        break;
    }
    case 315277:
    {
        returnValue = F("Unterer Hulbenweg");
        break;
    }
    case 315278:
    {
        returnValue = F("Unterer Hummelbachweg");
        break;
    }
    case 315279:
    {
        returnValue = F("Unterer Hummelberg");
        break;
    }
    case 315280:
    {
        returnValue = F("Unterer Hundemarkt");
        break;
    }
    case 315281:
    {
        returnValue = F("Unterer Hurtweg");
        break;
    }
    case 315282:
    {
        returnValue = F("Unterer Häldeweg");
        break;
    }
    case 315283:
    {
        returnValue = F("Unterer Hängerweg");
        break;
    }
    case 315284:
    {
        returnValue = F("Unterer Häuselbergweg");
        break;
    }
    case 315285:
    {
        returnValue = F("Unterer Häuselsbergweg");
        break;
    }
    case 315286:
    {
        returnValue = F("Unterer Häuslehaldenweg");
        break;
    }
    case 315287:
    {
        returnValue = F("Unterer Höhbastle");
        break;
    }
    case 315288:
    {
        returnValue = F("Unterer Höhenweg");
        break;
    }
    case 315289:
    {
        returnValue = F("Unterer Höhweg");
        break;
    }
    case 315290:
    {
        returnValue = F("Unterer Höllweg");
        break;
    }
    case 315291:
    {
        returnValue = F("Unterer Hölzlesweg");
        break;
    }
    case 315292:
    {
        returnValue = F("Unterer Hönigweg");
        break;
    }
    case 315293:
    {
        returnValue = F("Unterer Hördter Weg");
        break;
    }
    case 315294:
    {
        returnValue = F("Unterer Hörschbachweg");
        break;
    }
    case 315295:
    {
        returnValue = F("Unterer Hügel");
        break;
    }
    case 315296:
    {
        returnValue = F("Unterer Hühnerbergweg");
        break;
    }
    case 315297:
    {
        returnValue = F("Unterer Hüttenweg");
        break;
    }
    case 315298:
    {
        returnValue = F("Unterer Hüttersbacher Weg");
        break;
    }
    case 315299:
    {
        returnValue = F("Unterer Ibichweg");
        break;
    }
    case 315300:
    {
        returnValue = F("Unterer Igel");
        break;
    }
    case 315301:
    {
        returnValue = F("Unterer Ilgenbergweg");
        break;
    }
    case 315302:
    {
        returnValue = F("Unterer Ilsbergweg");
        break;
    }
    case 315303:
    {
        returnValue = F("Unterer Iltishaldenweg");
        break;
    }
    case 315304:
    {
        returnValue = F("Unterer Irlweg");
        break;
    }
    case 315305:
    {
        returnValue = F("Unterer Italienerweg");
        break;
    }
    case 315306:
    {
        returnValue = F("Unterer Jagdhausweg");
        break;
    }
    case 315307:
    {
        returnValue = F("Unterer Jagdweg");
        break;
    }
    case 315308:
    {
        returnValue = F("Unterer Jakobsweg");
        break;
    }
    case 315309:
    {
        returnValue = F("Unterer Jenneweg");
        break;
    }
    case 315310:
    {
        returnValue = F("Unterer Jesuitenweg");
        break;
    }
    case 315311:
    {
        returnValue = F("Unterer Johannes");
        break;
    }
    case 315312:
    {
        returnValue = F("Unterer Josumsattweg");
        break;
    }
    case 315313:
    {
        returnValue = F("Unterer Junghölzlesweg");
        break;
    }
    case 315314:
    {
        returnValue = F("Unterer Jurablick");
        break;
    }
    case 315315:
    {
        returnValue = F("Unterer Jägerweg");
        break;
    }
    case 315316:
    {
        returnValue = F("Unterer Kahbergsweg");
        break;
    }
    case 315317:
    {
        returnValue = F("Unterer Kahlenberg");
        break;
    }
    case 315318:
    {
        returnValue = F("Unterer Kahler Weg");
        break;
    }
    case 315319:
    {
        returnValue = F("Unterer Kalbacher Weg");
        break;
    }
    case 315320:
    {
        returnValue = F("Unterer Kalk");
        break;
    }
    case 315321:
    {
        returnValue = F("Unterer Kalkofen");
        break;
    }
    case 315322:
    {
        returnValue = F("Unterer Kalkofenweg");
        break;
    }
    case 315323:
    {
        returnValue = F("Unterer Kallmatenweg");
        break;
    }
    case 315324:
    {
        returnValue = F("Unterer Kalte Klinge Weg");
        break;
    }
    case 315325:
    {
        returnValue = F("Unterer Kaltteichweg");
        break;
    }
    case 315326:
    {
        returnValue = F("Unterer Kammerloh");
        break;
    }
    case 315327:
    {
        returnValue = F("Unterer Kammweg");
        break;
    }
    case 315328:
    {
        returnValue = F("Unterer Kamp");
        break;
    }
    case 315329:
    {
        returnValue = F("Unterer Kampacker");
        break;
    }
    case 315330:
    {
        returnValue = F("Unterer Kanal");
        break;
    }
    case 315331:
    {
        returnValue = F("Unterer Kandelgrundweg");
        break;
    }
    case 315332:
    {
        returnValue = F("Unterer Kapellberg");
        break;
    }
    case 315333:
    {
        returnValue = F("Unterer Kapellenberg");
        break;
    }
    case 315334:
    {
        returnValue = F("Unterer Karnweg");
        break;
    }
    case 315335:
    {
        returnValue = F("Unterer Kasparswald");
        break;
    }
    case 315336:
    {
        returnValue = F("Unterer Katermannshaldeweg");
        break;
    }
    case 315337:
    {
        returnValue = F("Unterer Katzenbergweg");
        break;
    }
    case 315338:
    {
        returnValue = F("Unterer Katzenhauerweg");
        break;
    }
    case 315339:
    {
        returnValue = F("Unterer Kaulberg");
        break;
    }
    case 315340:
    {
        returnValue = F("Unterer Kaulweg");
        break;
    }
    case 315341:
    {
        returnValue = F("Unterer Kayhweg");
        break;
    }
    case 315342:
    {
        returnValue = F("Unterer Kehlenweg");
        break;
    }
    case 315343:
    {
        returnValue = F("Unterer Kehlhof");
        break;
    }
    case 315344:
    {
        returnValue = F("Unterer Kelchenweg");
        break;
    }
    case 315345:
    {
        returnValue = F("Unterer Kellbachdamm");
        break;
    }
    case 315346:
    {
        returnValue = F("Unterer Kellerbergweg");
        break;
    }
    case 315347:
    {
        returnValue = F("Unterer Kellergrund Weg");
        break;
    }
    case 315348:
    {
        returnValue = F("Unterer Kellerweg");
        break;
    }
    case 315349:
    {
        returnValue = F("Unterer Kiefergrundweg");
        break;
    }
    case 315350:
    {
        returnValue = F("Unterer Kienbergweg");
        break;
    }
    case 315351:
    {
        returnValue = F("Unterer Kiesel");
        break;
    }
    case 315352:
    {
        returnValue = F("Unterer Kiesweg");
        break;
    }
    case 315353:
    {
        returnValue = F("Unterer Kieswerkweg");
        break;
    }
    case 315354:
    {
        returnValue = F("Unterer Kiliansberg");
        break;
    }
    case 315355:
    {
        returnValue = F("Unterer Kirchberg");
        break;
    }
    case 315356:
    {
        returnValue = F("Unterer Kirchbergweg");
        break;
    }
    case 315357:
    {
        returnValue = F("Unterer Kirchbuchweg");
        break;
    }
    case 315358:
    {
        returnValue = F("Unterer Kircheckweg");
        break;
    }
    case 315359:
    {
        returnValue = F("Unterer Kirchensteig");
        break;
    }
    case 315360:
    {
        returnValue = F("Unterer Kirchenweg");
        break;
    }
    case 315361:
    {
        returnValue = F("Unterer Kirchplatz");
        break;
    }
    case 315362:
    {
        returnValue = F("Unterer Kirchsteig");
        break;
    }
    case 315363:
    {
        returnValue = F("Unterer Kirchweg");
        break;
    }
    case 315364:
    {
        returnValue = F("Unterer Kirchwiesenweg");
        break;
    }
    case 315365:
    {
        returnValue = F("Unterer Kirschbaumweg");
        break;
    }
    case 315366:
    {
        returnValue = F("Unterer Kirschbäumlebuck");
        break;
    }
    case 315367:
    {
        returnValue = F("Unterer Klammenweg");
        break;
    }
    case 315368:
    {
        returnValue = F("Unterer Klebweg");
        break;
    }
    case 315369:
    {
        returnValue = F("Unterer Kleinflürleinsweg");
        break;
    }
    case 315370:
    {
        returnValue = F("Unterer Klingelbrunnen");
        break;
    }
    case 315371:
    {
        returnValue = F("Unterer Klingenbergweg");
        break;
    }
    case 315372:
    {
        returnValue = F("Unterer Klosterholzweg");
        break;
    }
    case 315373:
    {
        returnValue = F("Unterer Klosterweg");
        break;
    }
    case 315374:
    {
        returnValue = F("Unterer Klotzberg-Weg");
        break;
    }
    case 315375:
    {
        returnValue = F("Unterer Klötzbergweg");
        break;
    }
    case 315376:
    {
        returnValue = F("Unterer Knopfholzweg");
        break;
    }
    case 315377:
    {
        returnValue = F("Unterer Knpfholzweg");
        break;
    }
    case 315378:
    {
        returnValue = F("Unterer Kochbuck");
        break;
    }
    case 315379:
    {
        returnValue = F("Unterer Kohlbachweg");
        break;
    }
    case 315380:
    {
        returnValue = F("Unterer Kohlhütte Weg");
        break;
    }
    case 315381:
    {
        returnValue = F("Unterer Kohliwiesenweg");
        break;
    }
    case 315382:
    {
        returnValue = F("Unterer Kohlwasen");
        break;
    }
    case 315383:
    {
        returnValue = F("Unterer Kohlweg");
        break;
    }
    case 315384:
    {
        returnValue = F("Unterer Kolbenweg");
        break;
    }
    case 315385:
    {
        returnValue = F("Unterer Kolberg");
        break;
    }
    case 315386:
    {
        returnValue = F("Unterer Komarweg");
        break;
    }
    case 315387:
    {
        returnValue = F("Unterer Koppenhagen");
        break;
    }
    case 315388:
    {
        returnValue = F("Unterer Krautelsbergweg");
        break;
    }
    case 315389:
    {
        returnValue = F("Unterer Krautgarten");
        break;
    }
    case 315390:
    {
        returnValue = F("Unterer Krautgartenweg");
        break;
    }
    case 315391:
    {
        returnValue = F("Unterer Kreuzberg");
        break;
    }
    case 315392:
    {
        returnValue = F("Unterer Kreuzbergweg");
        break;
    }
    case 315393:
    {
        returnValue = F("Unterer Kreuzwasen");
        break;
    }
    case 315394:
    {
        returnValue = F("Unterer Kreuzweg");
        break;
    }
    case 315395:
    {
        returnValue = F("Unterer Krohenberg");
        break;
    }
    case 315396:
    {
        returnValue = F("Unterer Kuhaldenweg");
        break;
    }
    case 315397:
    {
        returnValue = F("Unterer Kuhberg");
        break;
    }
    case 315398:
    {
        returnValue = F("Unterer Kuhkopfweg");
        break;
    }
    case 315399:
    {
        returnValue = F("Unterer Kulturweg");
        break;
    }
    case 315400:
    {
        returnValue = F("Unterer Kurpark");
        break;
    }
    case 315401:
    {
        returnValue = F("Unterer Kutschenkopfweg");
        break;
    }
    case 315402:
    {
        returnValue = F("Unterer Kuxstein");
        break;
    }
    case 315403:
    {
        returnValue = F("Unterer Käfig");
        break;
    }
    case 315404:
    {
        returnValue = F("Unterer Käseweg");
        break;
    }
    case 315405:
    {
        returnValue = F("Unterer Käuzerain");
        break;
    }
    case 315406:
    {
        returnValue = F("Unterer Königsberg");
        break;
    }
    case 315407:
    {
        returnValue = F("Unterer Köpflesweg");
        break;
    }
    case 315408:
    {
        returnValue = F("Unterer Köpfleweg");
        break;
    }
    case 315409:
    {
        returnValue = F("Unterer Köppelweg");
        break;
    }
    case 315410:
    {
        returnValue = F("Unterer Küchelberg");
        break;
    }
    case 315411:
    {
        returnValue = F("Unterer Kühlenberg");
        break;
    }
    case 315412:
    {
        returnValue = F("Unterer Kühpfad");
        break;
    }
    case 315413:
    {
        returnValue = F("Unterer Kühruhweg");
        break;
    }
    case 315414:
    {
        returnValue = F("Unterer Kümmelberg");
        break;
    }
    case 315415:
    {
        returnValue = F("Unterer Küppelweg");
        break;
    }
    case 315416:
    {
        returnValue = F("Unterer Laakeweg");
        break;
    }
    case 315417:
    {
        returnValue = F("Unterer Laberberg");
        break;
    }
    case 315418:
    {
        returnValue = F("Unterer Lachenweg");
        break;
    }
    case 315419:
    {
        returnValue = F("Unterer Lagweg");
        break;
    }
    case 315420:
    {
        returnValue = F("Unterer Laiernweg");
        break;
    }
    case 315421:
    {
        returnValue = F("Unterer Langackerweg");
        break;
    }
    case 315422:
    {
        returnValue = F("Unterer Langenerdweg");
        break;
    }
    case 315423:
    {
        returnValue = F("Unterer Langer Graben");
        break;
    }
    case 315424:
    {
        returnValue = F("Unterer Langerain");
        break;
    }
    case 315425:
    {
        returnValue = F("Unterer Langewendeweg");
        break;
    }
    case 315426:
    {
        returnValue = F("Unterer Langhardweg");
        break;
    }
    case 315427:
    {
        returnValue = F("Unterer Langwaldweg");
        break;
    }
    case 315428:
    {
        returnValue = F("Unterer Lausbühlhaldeweg");
        break;
    }
    case 315429:
    {
        returnValue = F("Unterer Lautrupweg");
        break;
    }
    case 315430:
    {
        returnValue = F("Unterer Lederberg");
        break;
    }
    case 315431:
    {
        returnValue = F("Unterer Lederbergweg");
        break;
    }
    case 315432:
    {
        returnValue = F("Unterer Legel");
        break;
    }
    case 315433:
    {
        returnValue = F("Unterer Lehmweg");
        break;
    }
    case 315434:
    {
        returnValue = F("Unterer Leibachweg");
        break;
    }
    case 315435:
    {
        returnValue = F("Unterer Leichtersbergweg");
        break;
    }
    case 315436:
    {
        returnValue = F("Unterer Leierweg");
        break;
    }
    case 315437:
    {
        returnValue = F("Unterer Leimengrubenweg");
        break;
    }
    case 315438:
    {
        returnValue = F("Unterer Leineweg");
        break;
    }
    case 315439:
    {
        returnValue = F("Unterer Leitenberg");
        break;
    }
    case 315440:
    {
        returnValue = F("Unterer Leitenweg");
        break;
    }
    case 315441:
    {
        returnValue = F("Unterer Leitweg");
        break;
    }
    case 315442:
    {
        returnValue = F("Unterer Lenzenberg");
        break;
    }
    case 315443:
    {
        returnValue = F("Unterer Lerchberg");
        break;
    }
    case 315444:
    {
        returnValue = F("Unterer Lettenweg");
        break;
    }
    case 315445:
    {
        returnValue = F("Unterer Lichsenweg");
        break;
    }
    case 315446:
    {
        returnValue = F("Unterer Lichtenbergweg");
        break;
    }
    case 315447:
    {
        returnValue = F("Unterer Liebenberg");
        break;
    }
    case 315448:
    {
        returnValue = F("Unterer Liebenweg");
        break;
    }
    case 315449:
    {
        returnValue = F("Unterer Lindacher Weg");
        break;
    }
    case 315450:
    {
        returnValue = F("Unterer Lindachweg");
        break;
    }
    case 315451:
    {
        returnValue = F("Unterer Lindengraben");
        break;
    }
    case 315452:
    {
        returnValue = F("Unterer Lindenhof");
        break;
    }
    case 315453:
    {
        returnValue = F("Unterer Lindenplatz");
        break;
    }
    case 315454:
    {
        returnValue = F("Unterer Lindigsweg");
        break;
    }
    case 315455:
    {
        returnValue = F("Unterer Linienweg");
        break;
    }
    case 315456:
    {
        returnValue = F("Unterer Linngruber Weg");
        break;
    }
    case 315457:
    {
        returnValue = F("Unterer Lochweg");
        break;
    }
    case 315458:
    {
        returnValue = F("Unterer Lockersbergweg");
        break;
    }
    case 315459:
    {
        returnValue = F("Unterer Lohbuckelweg");
        break;
    }
    case 315460:
    {
        returnValue = F("Unterer Lohweg");
        break;
    }
    case 315461:
    {
        returnValue = F("Unterer Luisenpark");
        break;
    }
    case 315462:
    {
        returnValue = F("Unterer Lus");
        break;
    }
    case 315463:
    {
        returnValue = F("Unterer Lustgarten");
        break;
    }
    case 315464:
    {
        returnValue = F("Unterer Luß");
        break;
    }
    case 315465:
    {
        returnValue = F("Unterer Lußweg");
        break;
    }
    case 315466:
    {
        returnValue = F("Unterer Lämmergrund");
        break;
    }
    case 315467:
    {
        returnValue = F("Unterer Lärchenweg");
        break;
    }
    case 315468:
    {
        returnValue = F("Unterer Löschleitenweg");
        break;
    }
    case 315469:
    {
        returnValue = F("Unterer Lückenweg");
        break;
    }
    case 315470:
    {
        returnValue = F("Unterer Maasweg");
        break;
    }
    case 315471:
    {
        returnValue = F("Unterer Maienbergweg");
        break;
    }
    case 315472:
    {
        returnValue = F("Unterer Maienbühlweg");
        break;
    }
    case 315473:
    {
        returnValue = F("Unterer Mainkai");
        break;
    }
    case 315474:
    {
        returnValue = F("Unterer Malmenweg");
        break;
    }
    case 315475:
    {
        returnValue = F("Unterer Mannabachweg");
        break;
    }
    case 315476:
    {
        returnValue = F("Unterer Markt");
        break;
    }
    case 315477:
    {
        returnValue = F("Unterer Marktplatz");
        break;
    }
    case 315478:
    {
        returnValue = F("Unterer Marktsteig");
        break;
    }
    case 315479:
    {
        returnValue = F("Unterer Mattenweg");
        break;
    }
    case 315480:
    {
        returnValue = F("Unterer Maueracker");
        break;
    }
    case 315481:
    {
        returnValue = F("Unterer Mauergarten");
        break;
    }
    case 315482:
    {
        returnValue = F("Unterer Mauernweg");
        break;
    }
    case 315483:
    {
        returnValue = F("Unterer Mauerweg");
        break;
    }
    case 315484:
    {
        returnValue = F("Unterer Mausbachweg");
        break;
    }
    case 315485:
    {
        returnValue = F("Unterer Maushaldenweg");
        break;
    }
    case 315486:
    {
        returnValue = F("Unterer Mausriedweg");
        break;
    }
    case 315487:
    {
        returnValue = F("Unterer Mayenbadweg");
        break;
    }
    case 315488:
    {
        returnValue = F("Unterer Meerbergsweg");
        break;
    }
    case 315489:
    {
        returnValue = F("Unterer Mehlenweg");
        break;
    }
    case 315490:
    {
        returnValue = F("Unterer Meißnerblick");
        break;
    }
    case 315491:
    {
        returnValue = F("Unterer Michelsberg");
        break;
    }
    case 315492:
    {
        returnValue = F("Unterer Michelsbergweg");
        break;
    }
    case 315493:
    {
        returnValue = F("Unterer Misswaldweg");
        break;
    }
    case 315494:
    {
        returnValue = F("Unterer Mittelbachweg");
        break;
    }
    case 315495:
    {
        returnValue = F("Unterer Mittelberg");
        break;
    }
    case 315496:
    {
        returnValue = F("Unterer Mittelbergsweg");
        break;
    }
    case 315497:
    {
        returnValue = F("Unterer Mittelbuckweg");
        break;
    }
    case 315498:
    {
        returnValue = F("Unterer Mittelhof");
        break;
    }
    case 315499:
    {
        returnValue = F("Unterer Mittelpfad");
        break;
    }
    case 315500:
    {
        returnValue = F("Unterer Mittelweg");
        break;
    }
    case 315501:
    {
        returnValue = F("Unterer Molenpark");
        break;
    }
    case 315502:
    {
        returnValue = F("Unterer Moosweg");
        break;
    }
    case 315503:
    {
        returnValue = F("Unterer Mordklingenweg");
        break;
    }
    case 315504:
    {
        returnValue = F("Unterer Mossweg");
        break;
    }
    case 315505:
    {
        returnValue = F("Unterer Munzinger Weg");
        break;
    }
    case 315506:
    {
        returnValue = F("Unterer Murrweg");
        break;
    }
    case 315507:
    {
        returnValue = F("Unterer Märkischer Weg");
        break;
    }
    case 315508:
    {
        returnValue = F("Unterer Mönchsbrunnenweg");
        break;
    }
    case 315509:
    {
        returnValue = F("Unterer Möstweg");
        break;
    }
    case 315510:
    {
        returnValue = F("Unterer Mühlbach");
        break;
    }
    case 315511:
    {
        returnValue = F("Unterer Mühlberg");
        break;
    }
    case 315512:
    {
        returnValue = F("Unterer Mühlbergweg");
        break;
    }
    case 315513:
    {
        returnValue = F("Unterer Mühlenberg");
        break;
    }
    case 315514:
    {
        returnValue = F("Unterer Mühlenbergweg");
        break;
    }
    case 315515:
    {
        returnValue = F("Unterer Mühlenblick");
        break;
    }
    case 315516:
    {
        returnValue = F("Unterer Mühlenteich");
        break;
    }
    case 315517:
    {
        returnValue = F("Unterer Mühlenweg");
        break;
    }
    case 315518:
    {
        returnValue = F("Unterer Mühlesbergweg");
        break;
    }
    case 315519:
    {
        returnValue = F("Unterer Mühleweg");
        break;
    }
    case 315520:
    {
        returnValue = F("Unterer Mühlfeldweg");
        break;
    }
    case 315521:
    {
        returnValue = F("Unterer Mühlgraben");
        break;
    }
    case 315522:
    {
        returnValue = F("Unterer Mühlhof");
        break;
    }
    case 315523:
    {
        returnValue = F("Unterer Mühlrain");
        break;
    }
    case 315524:
    {
        returnValue = F("Unterer Mühlschied");
        break;
    }
    case 315525:
    {
        returnValue = F("Unterer Mühlsteinweg");
        break;
    }
    case 315526:
    {
        returnValue = F("Unterer Mühlwaldweg");
        break;
    }
    case 315527:
    {
        returnValue = F("Unterer Mühlweg");
        break;
    }
    case 315528:
    {
        returnValue = F("Unterer Nackenweg");
        break;
    }
    case 315529:
    {
        returnValue = F("Unterer Nagoldweg");
        break;
    }
    case 315530:
    {
        returnValue = F("Unterer Napoleonsweg");
        break;
    }
    case 315531:
    {
        returnValue = F("Unterer Natzschungweg");
        break;
    }
    case 315532:
    {
        returnValue = F("Unterer Nebenweg");
        break;
    }
    case 315533:
    {
        returnValue = F("Unterer Neckarhaldenweg");
        break;
    }
    case 315534:
    {
        returnValue = F("Unterer Neubergsweg");
        break;
    }
    case 315535:
    {
        returnValue = F("Unterer Neubergweg");
        break;
    }
    case 315536:
    {
        returnValue = F("Unterer Neubrunnenweg");
        break;
    }
    case 315537:
    {
        returnValue = F("Unterer Neue Schlägweg");
        break;
    }
    case 315538:
    {
        returnValue = F("Unterer Neuenbergweg");
        break;
    }
    case 315539:
    {
        returnValue = F("Unterer Neuer Weg");
        break;
    }
    case 315540:
    {
        returnValue = F("Unterer Neuwegsbergweg");
        break;
    }
    case 315541:
    {
        returnValue = F("Unterer Niederbergweg");
        break;
    }
    case 315542:
    {
        returnValue = F("Unterer Nistlerweg");
        break;
    }
    case 315543:
    {
        returnValue = F("Unterer Nonnenberg");
        break;
    }
    case 315544:
    {
        returnValue = F("Unterer Nonnenbrunnenweg");
        break;
    }
    case 315545:
    {
        returnValue = F("Unterer Nordendweg");
        break;
    }
    case 315546:
    {
        returnValue = F("Unterer Oderweg");
        break;
    }
    case 315547:
    {
        returnValue = F("Unterer Ohmweg");
        break;
    }
    case 315548:
    {
        returnValue = F("Unterer Ohrenbacher Weg");
        break;
    }
    case 315549:
    {
        returnValue = F("Unterer Ohrnbacher Weg");
        break;
    }
    case 315550:
    {
        returnValue = F("Unterer Orenweg");
        break;
    }
    case 315551:
    {
        returnValue = F("Unterer Ortberg");
        break;
    }
    case 315552:
    {
        returnValue = F("Unterer Ortesweg");
        break;
    }
    case 315553:
    {
        returnValue = F("Unterer Ortlochweg");
        break;
    }
    case 315554:
    {
        returnValue = F("Unterer Ottengrubenweg");
        break;
    }
    case 315555:
    {
        returnValue = F("Unterer Ottiliendobelweg");
        break;
    }
    case 315556:
    {
        returnValue = F("Unterer Ottilienweg");
        break;
    }
    case 315557:
    {
        returnValue = F("Unterer Palmenwaldweg");
        break;
    }
    case 315558:
    {
        returnValue = F("Unterer Panoramaweg");
        break;
    }
    case 315559:
    {
        returnValue = F("Unterer Parkweg");
        break;
    }
    case 315560:
    {
        returnValue = F("Unterer Pelzackerweg");
        break;
    }
    case 315561:
    {
        returnValue = F("Unterer Pelzhügel");
        break;
    }
    case 315562:
    {
        returnValue = F("Unterer Peunt");
        break;
    }
    case 315563:
    {
        returnValue = F("Unterer Pfaffenrain");
        break;
    }
    case 315564:
    {
        returnValue = F("Unterer Pfaffenteich");
        break;
    }
    case 315565:
    {
        returnValue = F("Unterer Pfannenstiel");
        break;
    }
    case 315566:
    {
        returnValue = F("Unterer Pfarracker");
        break;
    }
    case 315567:
    {
        returnValue = F("Unterer Pfarrberg");
        break;
    }
    case 315568:
    {
        returnValue = F("Unterer Pfarrwaldweg");
        break;
    }
    case 315569:
    {
        returnValue = F("Unterer Pfingstrasen");
        break;
    }
    case 315570:
    {
        returnValue = F("Unterer Pfützenweg");
        break;
    }
    case 315571:
    {
        returnValue = F("Unterer Pirminweg");
        break;
    }
    case 315572:
    {
        returnValue = F("Unterer Plan");
        break;
    }
    case 315573:
    {
        returnValue = F("Unterer Plattenberg");
        break;
    }
    case 315574:
    {
        returnValue = F("Unterer Platzer Weg");
        break;
    }
    case 315575:
    {
        returnValue = F("Unterer Plonweg");
        break;
    }
    case 315576:
    {
        returnValue = F("Unterer Plänchenweg");
        break;
    }
    case 315577:
    {
        returnValue = F("Unterer Poetenweg");
        break;
    }
    case 315578:
    {
        returnValue = F("Unterer Pollebener Weg");
        break;
    }
    case 315579:
    {
        returnValue = F("Unterer Postkellerweg");
        break;
    }
    case 315580:
    {
        returnValue = F("Unterer Prielweg");
        break;
    }
    case 315581:
    {
        returnValue = F("Unterer Prinzenweg");
        break;
    }
    case 315582:
    {
        returnValue = F("Unterer Promenadenweg");
        break;
    }
    case 315583:
    {
        returnValue = F("Unterer Prägerbödenweg");
        break;
    }
    case 315584:
    {
        returnValue = F("Unterer Pustenberg");
        break;
    }
    case 315585:
    {
        returnValue = F("Unterer Pürschweg");
        break;
    }
    case 315586:
    {
        returnValue = F("Unterer Quellberg");
        break;
    }
    case 315587:
    {
        returnValue = F("Unterer Quellenweg");
        break;
    }
    case 315588:
    {
        returnValue = F("Unterer Querweg");
        break;
    }
    case 315589:
    {
        returnValue = F("Unterer Raicherweg");
        break;
    }
    case 315590:
    {
        returnValue = F("Unterer Rain");
        break;
    }
    case 315591:
    {
        returnValue = F("Unterer Rainbrunnen");
        break;
    }
    case 315592:
    {
        returnValue = F("Unterer Ramshaldeweg");
        break;
    }
    case 315593:
    {
        returnValue = F("Unterer Ramsnackenweg");
        break;
    }
    case 315594:
    {
        returnValue = F("Unterer Rangen");
        break;
    }
    case 315595:
    {
        returnValue = F("Unterer Rappacher Weg");
        break;
    }
    case 315596:
    {
        returnValue = F("Unterer Rappeneckweg");
        break;
    }
    case 315597:
    {
        returnValue = F("Unterer Rappenhauweg");
        break;
    }
    case 315598:
    {
        returnValue = F("Unterer Rasenweg");
        break;
    }
    case 315599:
    {
        returnValue = F("Unterer Rathsteichweg");
        break;
    }
    case 315600:
    {
        returnValue = F("Unterer Ratsburgweg");
        break;
    }
    case 315601:
    {
        returnValue = F("Unterer Rebbergweg");
        break;
    }
    case 315602:
    {
        returnValue = F("Unterer Rebweg");
        break;
    }
    case 315603:
    {
        returnValue = F("Unterer Reekenweg");
        break;
    }
    case 315604:
    {
        returnValue = F("Unterer Reikweg");
        break;
    }
    case 315605:
    {
        returnValue = F("Unterer Reimertweg");
        break;
    }
    case 315606:
    {
        returnValue = F("Unterer Reitgrund");
        break;
    }
    case 315607:
    {
        returnValue = F("Unterer Renksteg");
        break;
    }
    case 315608:
    {
        returnValue = F("Unterer Rennbachbrunnenweg");
        break;
    }
    case 315609:
    {
        returnValue = F("Unterer Rennebaum");
        break;
    }
    case 315610:
    {
        returnValue = F("Unterer Rennerweg");
        break;
    }
    case 315611:
    {
        returnValue = F("Unterer Rennweg");
        break;
    }
    case 315612:
    {
        returnValue = F("Unterer Reuteweg");
        break;
    }
    case 315613:
    {
        returnValue = F("Unterer Richtweg");
        break;
    }
    case 315614:
    {
        returnValue = F("Unterer Ried");
        break;
    }
    case 315615:
    {
        returnValue = F("Unterer Riedweg");
        break;
    }
    case 315616:
    {
        returnValue = F("Unterer Riedweiler");
        break;
    }
    case 315617:
    {
        returnValue = F("Unterer Riegersbach");
        break;
    }
    case 315618:
    {
        returnValue = F("Unterer Rieselfeldgraben");
        break;
    }
    case 315619:
    {
        returnValue = F("Unterer Riesenacker");
        break;
    }
    case 315620:
    {
        returnValue = F("Unterer Riesenbergweg");
        break;
    }
    case 315621:
    {
        returnValue = F("Unterer Ring");
        break;
    }
    case 315622:
    {
        returnValue = F("Unterer Ringweg");
        break;
    }
    case 315623:
    {
        returnValue = F("Unterer Ristchenweg");
        break;
    }
    case 315624:
    {
        returnValue = F("Unterer Rod");
        break;
    }
    case 315625:
    {
        returnValue = F("Unterer Roetelweg");
        break;
    }
    case 315626:
    {
        returnValue = F("Unterer Rohrwaldweg");
        break;
    }
    case 315627:
    {
        returnValue = F("Unterer Rollbach");
        break;
    }
    case 315628:
    {
        returnValue = F("Unterer Romkerkopfweg");
        break;
    }
    case 315629:
    {
        returnValue = F("Unterer Rosberg");
        break;
    }
    case 315630:
    {
        returnValue = F("Unterer Rosengarten");
        break;
    }
    case 315631:
    {
        returnValue = F("Unterer Rossbachweg");
        break;
    }
    case 315632:
    {
        returnValue = F("Unterer Rossbergweg");
        break;
    }
    case 315633:
    {
        returnValue = F("Unterer Rossbodenweg");
        break;
    }
    case 315634:
    {
        returnValue = F("Unterer Rossrück");
        break;
    }
    case 315635:
    {
        returnValue = F("Unterer Rossweg");
        break;
    }
    case 315636:
    {
        returnValue = F("Unterer Rotebühlweg");
        break;
    }
    case 315637:
    {
        returnValue = F("Unterer Roter Rain");
        break;
    }
    case 315638:
    {
        returnValue = F("Unterer Rotlaufweg");
        break;
    }
    case 315639:
    {
        returnValue = F("Unterer Rottenbach");
        break;
    }
    case 315640:
    {
        returnValue = F("Unterer Rottlandweg");
        break;
    }
    case 315641:
    {
        returnValue = F("Unterer Rottweg");
        break;
    }
    case 315642:
    {
        returnValue = F("Unterer Rundgang");
        break;
    }
    case 315643:
    {
        returnValue = F("Unterer Rundweg");
        break;
    }
    case 315644:
    {
        returnValue = F("Unterer Rusterweg");
        break;
    }
    case 315645:
    {
        returnValue = F("Unterer Rußhofweg");
        break;
    }
    case 315646:
    {
        returnValue = F("Unterer Rödelsdellenweg");
        break;
    }
    case 315647:
    {
        returnValue = F("Unterer Röderweg");
        break;
    }
    case 315648:
    {
        returnValue = F("Unterer Römerweg");
        break;
    }
    case 315649:
    {
        returnValue = F("Unterer Röthelweg");
        break;
    }
    case 315650:
    {
        returnValue = F("Unterer Röthenweg");
        break;
    }
    case 315651:
    {
        returnValue = F("Unterer Röthlaaken");
        break;
    }
    case 315652:
    {
        returnValue = F("Unterer Rößberg");
        break;
    }
    case 315653:
    {
        returnValue = F("Unterer Rülesbergweg");
        break;
    }
    case 315654:
    {
        returnValue = F("Unterer Rüttiweg");
        break;
    }
    case 315655:
    {
        returnValue = F("Unterer Saatschulweg");
        break;
    }
    case 315656:
    {
        returnValue = F("Unterer Sackbergweg");
        break;
    }
    case 315657:
    {
        returnValue = F("Unterer Salzlackenweg");
        break;
    }
    case 315658:
    {
        returnValue = F("Unterer Salzweg");
        break;
    }
    case 315659:
    {
        returnValue = F("Unterer Sampelweg");
        break;
    }
    case 315660:
    {
        returnValue = F("Unterer Sand");
        break;
    }
    case 315661:
    {
        returnValue = F("Unterer Sandacker");
        break;
    }
    case 315662:
    {
        returnValue = F("Unterer Sandbichelweg");
        break;
    }
    case 315663:
    {
        returnValue = F("Unterer Sandbühlweg");
        break;
    }
    case 315664:
    {
        returnValue = F("Unterer Sandgrubenweg");
        break;
    }
    case 315665:
    {
        returnValue = F("Unterer Sandrech");
        break;
    }
    case 315666:
    {
        returnValue = F("Unterer Sandweg");
        break;
    }
    case 315667:
    {
        returnValue = F("Unterer Sankt Nikolausweg");
        break;
    }
    case 315668:
    {
        returnValue = F("Unterer Sattelhof");
        break;
    }
    case 315669:
    {
        returnValue = F("Unterer Saubadweg");
        break;
    }
    case 315670:
    {
        returnValue = F("Unterer Saubrunnenweg");
        break;
    }
    case 315671:
    {
        returnValue = F("Unterer Saufangweg");
        break;
    }
    case 315672:
    {
        returnValue = F("Unterer Saulachenweg");
        break;
    }
    case 315673:
    {
        returnValue = F("Unterer Saum");
        break;
    }
    case 315674:
    {
        returnValue = F("Unterer Schachbaumweg");
        break;
    }
    case 315675:
    {
        returnValue = F("Unterer Schachenmühlenweg");
        break;
    }
    case 315676:
    {
        returnValue = F("Unterer Schachenweg");
        break;
    }
    case 315677:
    {
        returnValue = F("Unterer Schafackerweg");
        break;
    }
    case 315678:
    {
        returnValue = F("Unterer Schafberg");
        break;
    }
    case 315679:
    {
        returnValue = F("Unterer Schafpferchweg");
        break;
    }
    case 315680:
    {
        returnValue = F("Unterer Schangengarten");
        break;
    }
    case 315681:
    {
        returnValue = F("Unterer Scheibenbergweg");
        break;
    }
    case 315682:
    {
        returnValue = F("Unterer Scheibenbuck");
        break;
    }
    case 315683:
    {
        returnValue = F("Unterer Scheibenweg");
        break;
    }
    case 315684:
    {
        returnValue = F("Unterer Scheithauweg");
        break;
    }
    case 315685:
    {
        returnValue = F("Unterer Schellberg");
        break;
    }
    case 315686:
    {
        returnValue = F("Unterer Schelmenrain");
        break;
    }
    case 315687:
    {
        returnValue = F("Unterer Schenkgarten");
        break;
    }
    case 315688:
    {
        returnValue = F("Unterer Schieb");
        break;
    }
    case 315689:
    {
        returnValue = F("Unterer Schieber");
        break;
    }
    case 315690:
    {
        returnValue = F("Unterer Schiedweg");
        break;
    }
    case 315691:
    {
        returnValue = F("Unterer Schießhaldenweg");
        break;
    }
    case 315692:
    {
        returnValue = F("Unterer Schirlebergweg");
        break;
    }
    case 315693:
    {
        returnValue = F("Unterer Schlangenweg");
        break;
    }
    case 315694:
    {
        returnValue = F("Unterer Schleichwaldweg");
        break;
    }
    case 315695:
    {
        returnValue = F("Unterer Schleifweg");
        break;
    }
    case 315696:
    {
        returnValue = F("Unterer Schleimweg");
        break;
    }
    case 315697:
    {
        returnValue = F("Unterer Schlichteweg");
        break;
    }
    case 315698:
    {
        returnValue = F("Unterer Schlipfweg");
        break;
    }
    case 315699:
    {
        returnValue = F("Unterer Schlosshof");
        break;
    }
    case 315700:
    {
        returnValue = F("Unterer Schloßberg");
        break;
    }
    case 315701:
    {
        returnValue = F("Unterer Schloßhang");
        break;
    }
    case 315702:
    {
        returnValue = F("Unterer Schloßkopfweg");
        break;
    }
    case 315703:
    {
        returnValue = F("Unterer Schloßplatz");
        break;
    }
    case 315704:
    {
        returnValue = F("Unterer Schloßweg");
        break;
    }
    case 315705:
    {
        returnValue = F("Unterer Schmalgarten");
        break;
    }
    case 315706:
    {
        returnValue = F("Unterer Schmiedekamp");
        break;
    }
    case 315707:
    {
        returnValue = F("Unterer Schnaithaldenweg");
        break;
    }
    case 315708:
    {
        returnValue = F("Unterer Schneckenweg");
        break;
    }
    case 315709:
    {
        returnValue = F("Unterer Schnetzweg");
        break;
    }
    case 315710:
    {
        returnValue = F("Unterer Scholbenweg");
        break;
    }
    case 315711:
    {
        returnValue = F("Unterer Schorn");
        break;
    }
    case 315712:
    {
        returnValue = F("Unterer Schornsteinweg");
        break;
    }
    case 315713:
    {
        returnValue = F("Unterer Schosenweg");
        break;
    }
    case 315714:
    {
        returnValue = F("Unterer Schoß");
        break;
    }
    case 315715:
    {
        returnValue = F("Unterer Schrannenplatz");
        break;
    }
    case 315716:
    {
        returnValue = F("Unterer Schräger Weg");
        break;
    }
    case 315717:
    {
        returnValue = F("Unterer Schuleborn");
        break;
    }
    case 315718:
    {
        returnValue = F("Unterer Schulweg");
        break;
    }
    case 315719:
    {
        returnValue = F("Unterer Schupißweg");
        break;
    }
    case 315720:
    {
        returnValue = F("Unterer Schusterberg");
        break;
    }
    case 315721:
    {
        returnValue = F("Unterer Schutz");
        break;
    }
    case 315722:
    {
        returnValue = F("Unterer Schutzhof");
        break;
    }
    case 315723:
    {
        returnValue = F("Unterer Schwalbenberg");
        break;
    }
    case 315724:
    {
        returnValue = F("Unterer Schwannweg");
        break;
    }
    case 315725:
    {
        returnValue = F("Unterer Schwarzlachenweg");
        break;
    }
    case 315726:
    {
        returnValue = F("Unterer Schweinetalweg");
        break;
    }
    case 315727:
    {
        returnValue = F("Unterer Schweineweg");
        break;
    }
    case 315728:
    {
        returnValue = F("Unterer Schweinsgrundweg");
        break;
    }
    case 315729:
    {
        returnValue = F("Unterer Schweizerbergweg");
        break;
    }
    case 315730:
    {
        returnValue = F("Unterer Schwerspatweg");
        break;
    }
    case 315731:
    {
        returnValue = F("Unterer Schwimmbadweg");
        break;
    }
    case 315732:
    {
        returnValue = F("Unterer Schwitzbergweg");
        break;
    }
    case 315733:
    {
        returnValue = F("Unterer Schwärzbach");
        break;
    }
    case 315734:
    {
        returnValue = F("Unterer Schwöllbachweg");
        break;
    }
    case 315735:
    {
        returnValue = F("Unterer Schädlerweg");
        break;
    }
    case 315736:
    {
        returnValue = F("Unterer Schädweg");
        break;
    }
    case 315737:
    {
        returnValue = F("Unterer Schömberg");
        break;
    }
    case 315738:
    {
        returnValue = F("Unterer Schömbergweg");
        break;
    }
    case 315739:
    {
        returnValue = F("Unterer Schönberger Hof");
        break;
    }
    case 315740:
    {
        returnValue = F("Unterer Schönblick");
        break;
    }
    case 315741:
    {
        returnValue = F("Unterer Schönbühlweg");
        break;
    }
    case 315742:
    {
        returnValue = F("Unterer Schützenrain");
        break;
    }
    case 315743:
    {
        returnValue = F("Unterer Sechserweg");
        break;
    }
    case 315744:
    {
        returnValue = F("Unterer See");
        break;
    }
    case 315745:
    {
        returnValue = F("Unterer Seesteig");
        break;
    }
    case 315746:
    {
        returnValue = F("Unterer Seeweg");
        break;
    }
    case 315747:
    {
        returnValue = F("Unterer Sehlemet");
        break;
    }
    case 315748:
    {
        returnValue = F("Unterer Seichter Bergweg");
        break;
    }
    case 315749:
    {
        returnValue = F("Unterer Seitelsteichweg");
        break;
    }
    case 315750:
    {
        returnValue = F("Unterer Seitenweg");
        break;
    }
    case 315751:
    {
        returnValue = F("Unterer Selzergraben");
        break;
    }
    case 315752:
    {
        returnValue = F("Unterer Semmetweg");
        break;
    }
    case 315753:
    {
        returnValue = F("Unterer Sendweg");
        break;
    }
    case 315754:
    {
        returnValue = F("Unterer Seyfriedweg");
        break;
    }
    case 315755:
    {
        returnValue = F("Unterer Sieberweg");
        break;
    }
    case 315756:
    {
        returnValue = F("Unterer Siedlungsweg");
        break;
    }
    case 315757:
    {
        returnValue = F("Unterer Siegen");
        break;
    }
    case 315758:
    {
        returnValue = F("Unterer Silberbrunnen");
        break;
    }
    case 315759:
    {
        returnValue = F("Unterer Silberbuckweg");
        break;
    }
    case 315760:
    {
        returnValue = F("Unterer Simmelsbergweg");
        break;
    }
    case 315761:
    {
        returnValue = F("Unterer Singoldweg");
        break;
    }
    case 315762:
    {
        returnValue = F("Unterer Sitterichweg");
        break;
    }
    case 315763:
    {
        returnValue = F("Unterer Sommerberg");
        break;
    }
    case 315764:
    {
        returnValue = F("Unterer Sommerfeldweg");
        break;
    }
    case 315765:
    {
        returnValue = F("Unterer Sommerwaldweg");
        break;
    }
    case 315766:
    {
        returnValue = F("Unterer Sonnenberg");
        break;
    }
    case 315767:
    {
        returnValue = F("Unterer Sonnenbrunnen");
        break;
    }
    case 315768:
    {
        returnValue = F("Unterer Sonnenbühl");
        break;
    }
    case 315769:
    {
        returnValue = F("Unterer Sonnenhang");
        break;
    }
    case 315770:
    {
        returnValue = F("Unterer Sonnenhügel");
        break;
    }
    case 315771:
    {
        returnValue = F("Unterer Sonnenweg");
        break;
    }
    case 315772:
    {
        returnValue = F("Unterer Sonthaldenweg");
        break;
    }
    case 315773:
    {
        returnValue = F("Unterer Spessartweg");
        break;
    }
    case 315774:
    {
        returnValue = F("Unterer Spiesslingweg");
        break;
    }
    case 315775:
    {
        returnValue = F("Unterer Spitalweg");
        break;
    }
    case 315776:
    {
        returnValue = F("Unterer Spreußberg");
        break;
    }
    case 315777:
    {
        returnValue = F("Unterer Staden");
        break;
    }
    case 315778:
    {
        returnValue = F("Unterer Stadtberg");
        break;
    }
    case 315779:
    {
        returnValue = F("Unterer Stadtgraben");
        break;
    }
    case 315780:
    {
        returnValue = F("Unterer Stadtplatz");
        break;
    }
    case 315781:
    {
        returnValue = F("Unterer Stadtweg");
        break;
    }
    case 315782:
    {
        returnValue = F("Unterer Staffelsweg");
        break;
    }
    case 315783:
    {
        returnValue = F("Unterer Stallgrabenweg");
        break;
    }
    case 315784:
    {
        returnValue = F("Unterer Stankertweg");
        break;
    }
    case 315785:
    {
        returnValue = F("Unterer Staumauerweg");
        break;
    }
    case 315786:
    {
        returnValue = F("Unterer Steffleinsgraben");
        break;
    }
    case 315787:
    {
        returnValue = F("Unterer Steg");
        break;
    }
    case 315788:
    {
        returnValue = F("Unterer Stegäckerweg");
        break;
    }
    case 315789:
    {
        returnValue = F("Unterer Stehling");
        break;
    }
    case 315790:
    {
        returnValue = F("Unterer Steig");
        break;
    }
    case 315791:
    {
        returnValue = F("Unterer Steigeweg");
        break;
    }
    case 315792:
    {
        returnValue = F("Unterer Steigweg");
        break;
    }
    case 315793:
    {
        returnValue = F("Unterer Stein");
        break;
    }
    case 315794:
    {
        returnValue = F("Unterer Steinacker");
        break;
    }
    case 315795:
    {
        returnValue = F("Unterer Steinbacher Weg");
        break;
    }
    case 315796:
    {
        returnValue = F("Unterer Steinbachstalweg");
        break;
    }
    case 315797:
    {
        returnValue = F("Unterer Steinbachweg");
        break;
    }
    case 315798:
    {
        returnValue = F("Unterer Steinbecker Weg");
        break;
    }
    case 315799:
    {
        returnValue = F("Unterer Steinberg");
        break;
    }
    case 315800:
    {
        returnValue = F("Unterer Steinbergweg");
        break;
    }
    case 315801:
    {
        returnValue = F("Unterer Steinbrink");
        break;
    }
    case 315802:
    {
        returnValue = F("Unterer Steinbruchweg");
        break;
    }
    case 315803:
    {
        returnValue = F("Unterer Steingatterweg");
        break;
    }
    case 315804:
    {
        returnValue = F("Unterer Steinich");
        break;
    }
    case 315805:
    {
        returnValue = F("Unterer Steinrasselweg");
        break;
    }
    case 315806:
    {
        returnValue = F("Unterer Steinriegelweg");
        break;
    }
    case 315807:
    {
        returnValue = F("Unterer Steinrütteweg");
        break;
    }
    case 315808:
    {
        returnValue = F("Unterer Steinweg");
        break;
    }
    case 315809:
    {
        returnValue = F("Unterer Stellehaldeweg");
        break;
    }
    case 315810:
    {
        returnValue = F("Unterer Stelleweg");
        break;
    }
    case 315811:
    {
        returnValue = F("Unterer Stephansberg");
        break;
    }
    case 315812:
    {
        returnValue = F("Unterer Stettberg");
        break;
    }
    case 315813:
    {
        returnValue = F("Unterer Steuchling");
        break;
    }
    case 315814:
    {
        returnValue = F("Unterer Stichweg");
        break;
    }
    case 315815:
    {
        returnValue = F("Unterer Stiftswaldweg");
        break;
    }
    case 315816:
    {
        returnValue = F("Unterer Stiller Winkel");
        break;
    }
    case 315817:
    {
        returnValue = F("Unterer Stockdorfer Geräumt");
        break;
    }
    case 315818:
    {
        returnValue = F("Unterer Stockenwaldweg");
        break;
    }
    case 315819:
    {
        returnValue = F("Unterer Stockertweg");
        break;
    }
    case 315820:
    {
        returnValue = F("Unterer Stocketweg");
        break;
    }
    case 315821:
    {
        returnValue = F("Unterer Stockplatz");
        break;
    }
    case 315822:
    {
        returnValue = F("Unterer Stockschlagweg");
        break;
    }
    case 315823:
    {
        returnValue = F("Unterer Stockweg");
        break;
    }
    case 315824:
    {
        returnValue = F("Unterer Stollen");
        break;
    }
    case 315825:
    {
        returnValue = F("Unterer Stollenmühlweg");
        break;
    }
    case 315826:
    {
        returnValue = F("Unterer Stollenweg");
        break;
    }
    case 315827:
    {
        returnValue = F("Unterer Straacher Weg");
        break;
    }
    case 315828:
    {
        returnValue = F("Unterer Straußberg");
        break;
    }
    case 315829:
    {
        returnValue = F("Unterer Streitberg");
        break;
    }
    case 315830:
    {
        returnValue = F("Unterer Struthweg");
        break;
    }
    case 315831:
    {
        returnValue = F("Unterer Studentenhüttenweg");
        break;
    }
    case 315832:
    {
        returnValue = F("Unterer Stuhlskopfweg");
        break;
    }
    case 315833:
    {
        returnValue = F("Unterer Sturz");
        break;
    }
    case 315834:
    {
        returnValue = F("Unterer Stutzweg");
        break;
    }
    case 315835:
    {
        returnValue = F("Unterer Stöbersberg");
        break;
    }
    case 315836:
    {
        returnValue = F("Unterer Stühleweg");
        break;
    }
    case 315837:
    {
        returnValue = F("Unterer Sundern");
        break;
    }
    case 315838:
    {
        returnValue = F("Unterer Suttenbuckelweg");
        break;
    }
    case 315839:
    {
        returnValue = F("Unterer Sägerweg");
        break;
    }
    case 315840:
    {
        returnValue = F("Unterer Sägeweg");
        break;
    }
    case 315841:
    {
        returnValue = F("Unterer Sägholzweg");
        break;
    }
    case 315842:
    {
        returnValue = F("Unterer Tabakmühlenweg");
        break;
    }
    case 315843:
    {
        returnValue = F("Unterer Talbergweg");
        break;
    }
    case 315844:
    {
        returnValue = F("Unterer Talweg");
        break;
    }
    case 315845:
    {
        returnValue = F("Unterer Talwiesenweg");
        break;
    }
    case 315846:
    {
        returnValue = F("Unterer Tannenwaldweg");
        break;
    }
    case 315847:
    {
        returnValue = F("Unterer Taubenherd");
        break;
    }
    case 315848:
    {
        returnValue = F("Unterer Taubentalweg");
        break;
    }
    case 315849:
    {
        returnValue = F("Unterer Teichtalsweg");
        break;
    }
    case 315850:
    {
        returnValue = F("Unterer Teichweg");
        break;
    }
    case 315851:
    {
        returnValue = F("Unterer Teppichweg");
        break;
    }
    case 315852:
    {
        returnValue = F("Unterer Teufelslochweg");
        break;
    }
    case 315853:
    {
        returnValue = F("Unterer Teufen");
        break;
    }
    case 315854:
    {
        returnValue = F("Unterer Thalerbergweg");
        break;
    }
    case 315855:
    {
        returnValue = F("Unterer Thalerfeldweg");
        break;
    }
    case 315856:
    {
        returnValue = F("Unterer Thannberg");
        break;
    }
    case 315857:
    {
        returnValue = F("Unterer Theistalweg");
        break;
    }
    case 315858:
    {
        returnValue = F("Unterer Thie");
        break;
    }
    case 315859:
    {
        returnValue = F("Unterer Tiefenweg");
        break;
    }
    case 315860:
    {
        returnValue = F("Unterer Tiegel");
        break;
    }
    case 315861:
    {
        returnValue = F("Unterer Tiergartenbergweg");
        break;
    }
    case 315862:
    {
        returnValue = F("Unterer Tobelweg");
        break;
    }
    case 315863:
    {
        returnValue = F("Unterer Todtberg");
        break;
    }
    case 315864:
    {
        returnValue = F("Unterer Toracker");
        break;
    }
    case 315865:
    {
        returnValue = F("Unterer Torackerweg");
        break;
    }
    case 315866:
    {
        returnValue = F("Unterer Torweg");
        break;
    }
    case 315867:
    {
        returnValue = F("Unterer Torweinberg");
        break;
    }
    case 315868:
    {
        returnValue = F("Unterer Trathweg");
        break;
    }
    case 315869:
    {
        returnValue = F("Unterer Traufenweg");
        break;
    }
    case 315870:
    {
        returnValue = F("Unterer Traufweg");
        break;
    }
    case 315871:
    {
        returnValue = F("Unterer Treppenweg");
        break;
    }
    case 315872:
    {
        returnValue = F("Unterer Triftweg");
        break;
    }
    case 315873:
    {
        returnValue = F("Unterer Tränkegarten");
        break;
    }
    case 315874:
    {
        returnValue = F("Unterer Tugendpfad");
        break;
    }
    case 315875:
    {
        returnValue = F("Unterer Tännlehauweg");
        break;
    }
    case 315876:
    {
        returnValue = F("Unterer Täschlesweg");
        break;
    }
    case 315877:
    {
        returnValue = F("Unterer Uferweg");
        break;
    }
    case 315878:
    {
        returnValue = F("Unterer Uffhofenweg");
        break;
    }
    case 315879:
    {
        returnValue = F("Unterer Veesenmoosweg");
        break;
    }
    case 315880:
    {
        returnValue = F("Unterer Viebig");
        break;
    }
    case 315881:
    {
        returnValue = F("Unterer Viehweg");
        break;
    }
    case 315882:
    {
        returnValue = F("Unterer Vieweg");
        break;
    }
    case 315883:
    {
        returnValue = F("Unterer Vogelsandweg");
        break;
    }
    case 315884:
    {
        returnValue = F("Unterer Vogtsbodenweg");
        break;
    }
    case 315885:
    {
        returnValue = F("Unterer Vornerweg");
        break;
    }
    case 315886:
    {
        returnValue = F("Unterer Wacholderhauweg");
        break;
    }
    case 315887:
    {
        returnValue = F("Unterer Wachtelberg");
        break;
    }
    case 315888:
    {
        returnValue = F("Unterer Wagbachweg");
        break;
    }
    case 315889:
    {
        returnValue = F("Unterer Wagenbacher Weg");
        break;
    }
    case 315890:
    {
        returnValue = F("Unterer Waldfrieden");
        break;
    }
    case 315891:
    {
        returnValue = F("Unterer Waldweg");
        break;
    }
    case 315892:
    {
        returnValue = F("Unterer Wall");
        break;
    }
    case 315893:
    {
        returnValue = F("Unterer Wandweg");
        break;
    }
    case 315894:
    {
        returnValue = F("Unterer Wannenweg");
        break;
    }
    case 315895:
    {
        returnValue = F("Unterer Wartenbergweg");
        break;
    }
    case 315896:
    {
        returnValue = F("Unterer Wasen");
        break;
    }
    case 315897:
    {
        returnValue = F("Unterer Wasenberg");
        break;
    }
    case 315898:
    {
        returnValue = F("Unterer Wasserfall");
        break;
    }
    case 315899:
    {
        returnValue = F("Unterer Wasserfallweg");
        break;
    }
    case 315900:
    {
        returnValue = F("Unterer Wassergang");
        break;
    }
    case 315901:
    {
        returnValue = F("Unterer Wassergraben");
        break;
    }
    case 315902:
    {
        returnValue = F("Unterer Weg");
        break;
    }
    case 315903:
    {
        returnValue = F("Unterer Weichselbergweg");
        break;
    }
    case 315904:
    {
        returnValue = F("Unterer Weiher");
        break;
    }
    case 315905:
    {
        returnValue = F("Unterer Weihersrain");
        break;
    }
    case 315906:
    {
        returnValue = F("Unterer Weiherweg");
        break;
    }
    case 315907:
    {
        returnValue = F("Unterer Weiler");
        break;
    }
    case 315908:
    {
        returnValue = F("Unterer Weinberg");
        break;
    }
    case 315909:
    {
        returnValue = F("Unterer Weinbergsweg");
        break;
    }
    case 315910:
    {
        returnValue = F("Unterer Weinbergweg");
        break;
    }
    case 315911:
    {
        returnValue = F("Unterer Weingartenweg");
        break;
    }
    case 315912:
    {
        returnValue = F("Unterer Weinhof");
        break;
    }
    case 315913:
    {
        returnValue = F("Unterer Weinweg");
        break;
    }
    case 315914:
    {
        returnValue = F("Unterer Weißer Weg");
        break;
    }
    case 315915:
    {
        returnValue = F("Unterer Weißröck");
        break;
    }
    case 315916:
    {
        returnValue = F("Unterer Welkershäuser Weg");
        break;
    }
    case 315917:
    {
        returnValue = F("Unterer Wellenbrock");
        break;
    }
    case 315918:
    {
        returnValue = F("Unterer Welzberg");
        break;
    }
    case 315919:
    {
        returnValue = F("Unterer Wembergweg");
        break;
    }
    case 315920:
    {
        returnValue = F("Unterer Wemensiepen");
        break;
    }
    case 315921:
    {
        returnValue = F("Unterer Wendeplattenweg");
        break;
    }
    case 315922:
    {
        returnValue = F("Unterer Wengertsbergweg");
        break;
    }
    case 315923:
    {
        returnValue = F("Unterer Wengertweg");
        break;
    }
    case 315924:
    {
        returnValue = F("Unterer Wernesgrüner Weg");
        break;
    }
    case 315925:
    {
        returnValue = F("Unterer Wetschbergweg");
        break;
    }
    case 315926:
    {
        returnValue = F("Unterer Wetzentalweg");
        break;
    }
    case 315927:
    {
        returnValue = F("Unterer Wichheimer Kirchweg");
        break;
    }
    case 315928:
    {
        returnValue = F("Unterer Wierth");
        break;
    }
    case 315929:
    {
        returnValue = F("Unterer Wiesenhaldenweg");
        break;
    }
    case 315930:
    {
        returnValue = F("Unterer Wiesenhang");
        break;
    }
    case 315931:
    {
        returnValue = F("Unterer Wiesenrech");
        break;
    }
    case 315932:
    {
        returnValue = F("Unterer Wiesenweg");
        break;
    }
    case 315933:
    {
        returnValue = F("Unterer Wiesenwegl");
        break;
    }
    case 315934:
    {
        returnValue = F("Unterer Windenweg");
        break;
    }
    case 315935:
    {
        returnValue = F("Unterer Wingerterweg");
        break;
    }
    case 315936:
    {
        returnValue = F("Unterer Wingertsberg");
        break;
    }
    case 315937:
    {
        returnValue = F("Unterer Wingertsweg");
        break;
    }
    case 315938:
    {
        returnValue = F("Unterer Wingertweg");
        break;
    }
    case 315939:
    {
        returnValue = F("Unterer Winkel");
        break;
    }
    case 315940:
    {
        returnValue = F("Unterer Winkelweg");
        break;
    }
    case 315941:
    {
        returnValue = F("Unterer Winnweg");
        break;
    }
    case 315942:
    {
        returnValue = F("Unterer Winterhaldenweg");
        break;
    }
    case 315943:
    {
        returnValue = F("Unterer Winterzugweg");
        break;
    }
    case 315944:
    {
        returnValue = F("Unterer Wolfentalweg");
        break;
    }
    case 315945:
    {
        returnValue = F("Unterer Wolfersbachweg");
        break;
    }
    case 315946:
    {
        returnValue = F("Unterer Wolfhartweg");
        break;
    }
    case 315947:
    {
        returnValue = F("Unterer Wolfsgrubenweg");
        break;
    }
    case 315948:
    {
        returnValue = F("Unterer Wolfstalweg");
        break;
    }
    case 315949:
    {
        returnValue = F("Unterer Worthhagen");
        break;
    }
    case 315950:
    {
        returnValue = F("Unterer Wörth");
        break;
    }
    case 315951:
    {
        returnValue = F("Unterer Wüster Weg");
        break;
    }
    case 315952:
    {
        returnValue = F("Unterer Zaberhaldeweg");
        break;
    }
    case 315953:
    {
        returnValue = F("Unterer Zehentbergweg");
        break;
    }
    case 315954:
    {
        returnValue = F("Unterer Zeidlerweg");
        break;
    }
    case 315955:
    {
        returnValue = F("Unterer Ziegeleiweg");
        break;
    }
    case 315956:
    {
        returnValue = F("Unterer Ziegelfeldweg");
        break;
    }
    case 315957:
    {
        returnValue = F("Unterer Ziegelweg");
        break;
    }
    case 315958:
    {
        returnValue = F("Unterer Zimmerweg");
        break;
    }
    case 315959:
    {
        returnValue = F("Unterer Zinnweg");
        break;
    }
    case 315960:
    {
        returnValue = F("Unterer Zinsbachtalweg");
        break;
    }
    case 315961:
    {
        returnValue = F("Unterer Zollweg");
        break;
    }
    case 315962:
    {
        returnValue = F("Unterer Zwerchweg");
        break;
    }
    case 315963:
    {
        returnValue = F("Unterer Zwetschgenweg");
        break;
    }
    case 315964:
    {
        returnValue = F("Unterer Zwiebelrainweg");
        break;
    }
    case 315965:
    {
        returnValue = F("Unterer Zwinger");
        break;
    }
    case 315966:
    {
        returnValue = F("Unterer Zwölferweg");
        break;
    }
    case 315967:
    {
        returnValue = F("Unterer breiter Weg");
        break;
    }
    case 315968:
    {
        returnValue = F("Unterer großer Ackerweg");
        break;
    }
    case 315969:
    {
        returnValue = F("Unterer Ölbachweg");
        break;
    }
    case 315970:
    {
        returnValue = F("Unterer Ölbergweg");
        break;
    }
    case 315971:
    {
        returnValue = F("Unterer Ölweg");
        break;
    }
    case 315972:
    {
        returnValue = F("Unterer Öschweg");
        break;
    }
    case 315973:
    {
        returnValue = F("Unterer-Albaner-Weg");
        break;
    }
    case 315974:
    {
        returnValue = F("Unterer-Hohle-Buche-Weg");
        break;
    }
    case 315975:
    {
        returnValue = F("Unterer-Seeweg");
        break;
    }
    case 315976:
    {
        returnValue = F("Untererhofweg");
        break;
    }
    case 315977:
    {
        returnValue = F("Untererlen");
        break;
    }
    case 315978:
    {
        returnValue = F("Unterersommerhaldeweg");
        break;
    }
    case 315979:
    {
        returnValue = F("Untererweg");
        break;
    }
    case 315980:
    {
        returnValue = F("Unteres Ackerloch");
        break;
    }
    case 315981:
    {
        returnValue = F("Unteres Amtsfeld");
        break;
    }
    case 315982:
    {
        returnValue = F("Unteres Apothekergässchen");
        break;
    }
    case 315983:
    {
        returnValue = F("Unteres Bachfeld");
        break;
    }
    case 315984:
    {
        returnValue = F("Unteres Bergfeld");
        break;
    }
    case 315985:
    {
        returnValue = F("Unteres Betzental");
        break;
    }
    case 315986:
    {
        returnValue = F("Unteres Bieth");
        break;
    }
    case 315987:
    {
        returnValue = F("Unteres Bopsersträßle");
        break;
    }
    case 315988:
    {
        returnValue = F("Unteres Breitle");
        break;
    }
    case 315989:
    {
        returnValue = F("Unteres Buchsträßle");
        break;
    }
    case 315990:
    {
        returnValue = F("Unteres Burgholz");
        break;
    }
    case 315991:
    {
        returnValue = F("Unteres Daufeld");
        break;
    }
    case 315992:
    {
        returnValue = F("Unteres Dorf");
        break;
    }
    case 315993:
    {
        returnValue = F("Unteres Döbele");
        break;
    }
    case 315994:
    {
        returnValue = F("Unteres Dürrbachsträßle");
        break;
    }
    case 315995:
    {
        returnValue = F("Unteres Ebenfeld");
        break;
    }
    case 315996:
    {
        returnValue = F("Unteres Eck");
        break;
    }
    case 315997:
    {
        returnValue = F("Unteres Eichertstal");
        break;
    }
    case 315998:
    {
        returnValue = F("Unteres Eichhölzchen");
        break;
    }
    case 315999:
    {
        returnValue = F("Unteres Emmatal");
        break;
    }
    case 316000:
    {
        returnValue = F("Unteres Endbergsträßchen");
        break;
    }
    case 316001:
    {
        returnValue = F("Unteres Esch");
        break;
    }
    case 316002:
    {
        returnValue = F("Unteres Eschle");
        break;
    }
    case 316003:
    {
        returnValue = F("Unteres Feld");
        break;
    }
    case 316004:
    {
        returnValue = F("Unteres Fischhäusle");
        break;
    }
    case 316005:
    {
        returnValue = F("Unteres Flürlein");
        break;
    }
    case 316006:
    {
        returnValue = F("Unteres Gaistal");
        break;
    }
    case 316007:
    {
        returnValue = F("Unteres Glasenfeld");
        break;
    }
    case 316008:
    {
        returnValue = F("Unteres Glöckle");
        break;
    }
    case 316009:
    {
        returnValue = F("Unteres Grabengäßchen");
        break;
    }
    case 316010:
    {
        returnValue = F("Unteres Greut");
        break;
    }
    case 316011:
    {
        returnValue = F("Unteres Grün");
        break;
    }
    case 316012:
    {
        returnValue = F("Unteres Grünlingsfeld");
        break;
    }
    case 316013:
    {
        returnValue = F("Unteres Gutleuthaustäle");
        break;
    }
    case 316014:
    {
        returnValue = F("Unteres Gässle");
        break;
    }
    case 316015:
    {
        returnValue = F("Unteres Hag");
        break;
    }
    case 316016:
    {
        returnValue = F("Unteres Hargental");
        break;
    }
    case 316017:
    {
        returnValue = F("Unteres Hart");
        break;
    }
    case 316018:
    {
        returnValue = F("Unteres Hasengässchen");
        break;
    }
    case 316019:
    {
        returnValue = F("Unteres Heenfeld");
        break;
    }
    case 316020:
    {
        returnValue = F("Unteres Hirschfeld");
        break;
    }
    case 316021:
    {
        returnValue = F("Unteres Hofreither Tal");
        break;
    }
    case 316022:
    {
        returnValue = F("Unteres Hohbergsträßle");
        break;
    }
    case 316023:
    {
        returnValue = F("Unteres Holz");
        break;
    }
    case 316024:
    {
        returnValue = F("Unteres Jüchen");
        break;
    }
    case 316025:
    {
        returnValue = F("Unteres Kelterfeld");
        break;
    }
    case 316026:
    {
        returnValue = F("Unteres Kirchfeld");
        break;
    }
    case 316027:
    {
        returnValue = F("Unteres Kirchwegfeld");
        break;
    }
    case 316028:
    {
        returnValue = F("Unteres Kleinodsfeld");
        break;
    }
    case 316029:
    {
        returnValue = F("Unteres Kohlgrubensträßle");
        break;
    }
    case 316030:
    {
        returnValue = F("Unteres Korngäßchen");
        break;
    }
    case 316031:
    {
        returnValue = F("Unteres Käppele");
        break;
    }
    case 316032:
    {
        returnValue = F("Unteres Lehle");
        break;
    }
    case 316033:
    {
        returnValue = F("Unteres Lindig");
        break;
    }
    case 316034:
    {
        returnValue = F("Unteres Loh");
        break;
    }
    case 316035:
    {
        returnValue = F("Unteres Lohhaus");
        break;
    }
    case 316036:
    {
        returnValue = F("Unteres Meierfeld");
        break;
    }
    case 316037:
    {
        returnValue = F("Unteres Mentwieschen");
        break;
    }
    case 316038:
    {
        returnValue = F("Unteres Metzgerle");
        break;
    }
    case 316039:
    {
        returnValue = F("Unteres Mitterfeld");
        break;
    }
    case 316040:
    {
        returnValue = F("Unteres Moos");
        break;
    }
    case 316041:
    {
        returnValue = F("Unteres Muldental");
        break;
    }
    case 316042:
    {
        returnValue = F("Unteres Neufeld");
        break;
    }
    case 316043:
    {
        returnValue = F("Unteres Paradies");
        break;
    }
    case 316044:
    {
        returnValue = F("Unteres Pfaffental");
        break;
    }
    case 316045:
    {
        returnValue = F("Unteres Rahlbruch");
        break;
    }
    case 316046:
    {
        returnValue = F("Unteres Rappenfeld");
        break;
    }
    case 316047:
    {
        returnValue = F("Unteres Ried");
        break;
    }
    case 316048:
    {
        returnValue = F("Unteres Ringgässchen");
        break;
    }
    case 316049:
    {
        returnValue = F("Unteres Rippach");
        break;
    }
    case 316050:
    {
        returnValue = F("Unteres Roth");
        break;
    }
    case 316051:
    {
        returnValue = F("Unteres Schloß");
        break;
    }
    case 316052:
    {
        returnValue = F("Unteres Schwarzviertel");
        break;
    }
    case 316053:
    {
        returnValue = F("Unteres Seebene Strässle");
        break;
    }
    case 316054:
    {
        returnValue = F("Unteres Seebenesträßle");
        break;
    }
    case 316055:
    {
        returnValue = F("Unteres Seegässchen");
        break;
    }
    case 316056:
    {
        returnValue = F("Unteres Stadelfeld");
        break;
    }
    case 316057:
    {
        returnValue = F("Unteres Stadtgäßchen");
        break;
    }
    case 316058:
    {
        returnValue = F("Unteres Staunsfeld");
        break;
    }
    case 316059:
    {
        returnValue = F("Unteres Strassl");
        break;
    }
    case 316060:
    {
        returnValue = F("Unteres Sümpfel");
        break;
    }
    case 316061:
    {
        returnValue = F("Unteres Tal");
        break;
    }
    case 316062:
    {
        returnValue = F("Unteres Tor");
        break;
    }
    case 316063:
    {
        returnValue = F("Unteres Vocherl");
        break;
    }
    case 316064:
    {
        returnValue = F("Unteres Waldtor");
        break;
    }
    case 316065:
    {
        returnValue = F("Unteres Weidenfeld");
        break;
    }
    case 316066:
    {
        returnValue = F("Unteres Weiler");
        break;
    }
    case 316067:
    {
        returnValue = F("Unteres Wiesental");
        break;
    }
    case 316068:
    {
        returnValue = F("Unteres Wochenendgebiet");
        break;
    }
    case 316069:
    {
        returnValue = F("Unteres Ziegelfeld");
        break;
    }
    case 316070:
    {
        returnValue = F("Unteres Zollnerfeld");
        break;
    }
    case 316071:
    {
        returnValue = F("Unteres Ösch");
        break;
    }
    case 316072:
    {
        returnValue = F("Unteresch");
        break;
    }
    case 316073:
    {
        returnValue = F("Untereschacher Str.");
        break;
    }
    case 316074:
    {
        returnValue = F("Untereschbacher Str.");
        break;
    }
    case 316075:
    {
        returnValue = F("Untereschenbacher Str.");
        break;
    }
    case 316076:
    {
        returnValue = F("Untereschlbach");
        break;
    }
    case 316077:
    {
        returnValue = F("Untereschsteige");
        break;
    }
    case 316078:
    {
        returnValue = F("Untereschstr.");
        break;
    }
    case 316079:
    {
        returnValue = F("Unteressendorfer Str.");
        break;
    }
    case 316080:
    {
        returnValue = F("Unterettenberg");
        break;
    }
    case 316081:
    {
        returnValue = F("Unterettinger Weg");
        break;
    }
    case 316082:
    {
        returnValue = F("Untereuerheimer Str.");
        break;
    }
    case 316083:
    {
        returnValue = F("Unterfanke");
        break;
    }
    case 316084:
    {
        returnValue = F("Unterfarrnbacher Str.");
        break;
    }
    case 316085:
    {
        returnValue = F("Unterfeld");
        break;
    }
    case 316086:
    {
        returnValue = F("Unterfelderweg");
        break;
    }
    case 316087:
    {
        returnValue = F("Unterfeldring");
        break;
    }
    case 316088:
    {
        returnValue = F("Unterfeldstr.");
        break;
    }
    case 316089:
    {
        returnValue = F("Unterfeldweg");
        break;
    }
    case 316090:
    {
        returnValue = F("Unterfellandsweg");
        break;
    }
    case 316091:
    {
        returnValue = F("Unterferriedener Str.");
        break;
    }
    case 316092:
    {
        returnValue = F("Unterferrieder Weg");
        break;
    }
    case 316093:
    {
        returnValue = F("Unterfichtenmühle");
        break;
    }
    case 316094:
    {
        returnValue = F("Unterfischbach");
        break;
    }
    case 316095:
    {
        returnValue = F("Unterfischbachweg");
        break;
    }
    case 316096:
    {
        returnValue = F("Unterfischerei");
        break;
    }
    case 316097:
    {
        returnValue = F("Unterfrankenstr.");
        break;
    }
    case 316098:
    {
        returnValue = F("Unterfrickhof");
        break;
    }
    case 316099:
    {
        returnValue = F("Unterfrohnstetten");
        break;
    }
    case 316100:
    {
        returnValue = F("Unterföhringer Str.");
        break;
    }
    case 316101:
    {
        returnValue = F("Unterführung");
        break;
    }
    case 316102:
    {
        returnValue = F("Unterführung Fuß-/Radweg zum Sportgelände");
        break;
    }
    case 316103:
    {
        returnValue = F("Unterführung Förderband");
        break;
    }
    case 316104:
    {
        returnValue = F("Unterführung Hinkelsteinschneise");
        break;
    }
    case 316105:
    {
        returnValue = F("Unterführung Mitte");
        break;
    }
    case 316106:
    {
        returnValue = F("Unterführungsstr.");
        break;
    }
    case 316107:
    {
        returnValue = F("Unterfürberger Str.");
        break;
    }
    case 316108:
    {
        returnValue = F("Untergalling");
        break;
    }
    case 316109:
    {
        returnValue = F("Untergangweg");
        break;
    }
    case 316110:
    {
        returnValue = F("Untergard");
        break;
    }
    case 316111:
    {
        returnValue = F("Untergarschagen");
        break;
    }
    case 316112:
    {
        returnValue = F("Untergarten");
        break;
    }
    case 316113:
    {
        returnValue = F("Untergartenweg");
        break;
    }
    case 316114:
    {
        returnValue = F("Untergasse");
        break;
    }
    case 316115:
    {
        returnValue = F("Untergassen");
        break;
    }
    case 316116:
    {
        returnValue = F("Untergastwall");
        break;
    }
    case 316117:
    {
        returnValue = F("Untergath");
        break;
    }
    case 316118:
    {
        returnValue = F("Untergeißendorf");
        break;
    }
    case 316119:
    {
        returnValue = F("Untergelgen");
        break;
    }
    case 316120:
    {
        returnValue = F("Untergermaringer Str.");
        break;
    }
    case 316121:
    {
        returnValue = F("Untergerstener Str.");
        break;
    }
    case 316122:
    {
        returnValue = F("Untergessenbach");
        break;
    }
    case 316123:
    {
        returnValue = F("Untergichenbach");
        break;
    }
    case 316124:
    {
        returnValue = F("Unterglaim");
        break;
    }
    case 316125:
    {
        returnValue = F("Unterglaimer Str.");
        break;
    }
    case 316126:
    {
        returnValue = F("Unterglauheimer Weg");
        break;
    }
    case 316127:
    {
        returnValue = F("Untergneus");
        break;
    }
    case 316128:
    {
        returnValue = F("Untergraben");
        break;
    }
    case 316129:
    {
        returnValue = F("Untergreißlauer Weg");
        break;
    }
    case 316130:
    {
        returnValue = F("Untergreut");
        break;
    }
    case 316131:
    {
        returnValue = F("Untergreuth");
        break;
    }
    case 316132:
    {
        returnValue = F("Untergries");
        break;
    }
    case 316133:
    {
        returnValue = F("Untergriesheimer Str.");
        break;
    }
    case 316134:
    {
        returnValue = F("Untergriesheimer Weg");
        break;
    }
    case 316135:
    {
        returnValue = F("Untergrochlitzer Str.");
        break;
    }
    case 316136:
    {
        returnValue = F("Untergrub");
        break;
    }
    case 316137:
    {
        returnValue = F("Untergrube");
        break;
    }
    case 316138:
    {
        returnValue = F("Untergruppenbacher Str.");
        break;
    }
    case 316139:
    {
        returnValue = F("Untergrünberg");
        break;
    }
    case 316140:
    {
        returnValue = F("Untergründemich");
        break;
    }
    case 316141:
    {
        returnValue = F("Untergründen");
        break;
    }
    case 316142:
    {
        returnValue = F("Untergrüner Str.");
        break;
    }
    case 316143:
    {
        returnValue = F("Untergrünewalder Str.");
        break;
    }
    case 316144:
    {
        returnValue = F("Untergschwend");
        break;
    }
    case 316145:
    {
        returnValue = F("Untergutstr.");
        break;
    }
    case 316146:
    {
        returnValue = F("Untergäßchen");
        break;
    }
    case 316147:
    {
        returnValue = F("Untergöhrener Str.");
        break;
    }
    case 316148:
    {
        returnValue = F("Untergönner Str.");
        break;
    }
    case 316149:
    {
        returnValue = F("Untergünzkofen");
        break;
    }
    case 316150:
    {
        returnValue = F("Unterhaagstr.");
        break;
    }
    case 316151:
    {
        returnValue = F("Unterhaarland");
        break;
    }
    case 316152:
    {
        returnValue = F("Unterhachinger Str.");
        break;
    }
    case 316153:
    {
        returnValue = F("Unterhadermark");
        break;
    }
    case 316154:
    {
        returnValue = F("Unterhahn");
        break;
    }
    case 316155:
    {
        returnValue = F("Unterhaid");
        break;
    }
    case 316156:
    {
        returnValue = F("Unterhaidelbacher Hauptstr.");
        break;
    }
    case 316157:
    {
        returnValue = F("Unterhaider Weg");
        break;
    }
    case 316158:
    {
        returnValue = F("Unterhaider Weide");
        break;
    }
    case 316159:
    {
        returnValue = F("Unterhain");
        break;
    }
    case 316160:
    {
        returnValue = F("Unterhainstr.");
        break;
    }
    case 316161:
    {
        returnValue = F("Unterhainweg");
        break;
    }
    case 316162:
    {
        returnValue = F("Unterhalb der Schule");
        break;
    }
    case 316163:
    {
        returnValue = F("Unterhaltungsweg");
        break;
    }
    case 316164:
    {
        returnValue = F("Unterhaltungsweg Schuttermündung");
        break;
    }
    case 316165:
    {
        returnValue = F("Unterhambach");
        break;
    }
    case 316166:
    {
        returnValue = F("Unterhammer");
        break;
    }
    case 316167:
    {
        returnValue = F("Unterhammerstr.");
        break;
    }
    case 316168:
    {
        returnValue = F("Unterhangstr.");
        break;
    }
    case 316169:
    {
        returnValue = F("Unterhangweg");
        break;
    }
    case 316170:
    {
        returnValue = F("Unterharles");
        break;
    }
    case 316171:
    {
        returnValue = F("Unterharter Str.");
        break;
    }
    case 316172:
    {
        returnValue = F("Unterhartweg");
        break;
    }
    case 316173:
    {
        returnValue = F("Unterhasel");
        break;
    }
    case 316174:
    {
        returnValue = F("Unterhaslach");
        break;
    }
    case 316175:
    {
        returnValue = F("Unterhaslacher Str.");
        break;
    }
    case 316176:
    {
        returnValue = F("Unterhaslau");
        break;
    }
    case 316177:
    {
        returnValue = F("Unterhaugstetter Str.");
        break;
    }
    case 316178:
    {
        returnValue = F("Unterhauner Str.");
        break;
    }
    case 316179:
    {
        returnValue = F("Unterhaunstädter Weg");
        break;
    }
    case 316180:
    {
        returnValue = F("Unterhausbach");
        break;
    }
    case 316181:
    {
        returnValue = F("Unterhausener Str.");
        break;
    }
    case 316182:
    {
        returnValue = F("Unterhausgasse");
        break;
    }
    case 316183:
    {
        returnValue = F("Unterhebborn");
        break;
    }
    case 316184:
    {
        returnValue = F("Unterheck");
        break;
    }
    case 316185:
    {
        returnValue = F("Unterheeg");
        break;
    }
    case 316186:
    {
        returnValue = F("Unterheide");
        break;
    }
    case 316187:
    {
        returnValue = F("Unterheider Weg");
        break;
    }
    case 316188:
    {
        returnValue = F("Unterheimbacher Str.");
        break;
    }
    case 316189:
    {
        returnValue = F("Unterheinrieter Str.");
        break;
    }
    case 316190:
    {
        returnValue = F("Unterherrnhauser Str.");
        break;
    }
    case 316191:
    {
        returnValue = F("Unterheufeld");
        break;
    }
    case 316192:
    {
        returnValue = F("Unterheydener Str.");
        break;
    }
    case 316193:
    {
        returnValue = F("Unterhof");
        break;
    }
    case 316194:
    {
        returnValue = F("Unterhofen");
        break;
    }
    case 316195:
    {
        returnValue = F("Unterhofer Str.");
        break;
    }
    case 316196:
    {
        returnValue = F("Unterhoferstr.");
        break;
    }
    case 316197:
    {
        returnValue = F("Unterhofkirchen");
        break;
    }
    case 316198:
    {
        returnValue = F("Unterhofstattweg");
        break;
    }
    case 316199:
    {
        returnValue = F("Unterhofstr.");
        break;
    }
    case 316200:
    {
        returnValue = F("Unterhofweg");
        break;
    }
    case 316201:
    {
        returnValue = F("Unterhohen");
        break;
    }
    case 316202:
    {
        returnValue = F("Unterholl");
        break;
    }
    case 316203:
    {
        returnValue = F("Unterholsbach");
        break;
    }
    case 316204:
    {
        returnValue = F("Unterholz");
        break;
    }
    case 316205:
    {
        returnValue = F("Unterholzener Str.");
        break;
    }
    case 316206:
    {
        returnValue = F("Unterholzhausen");
        break;
    }
    case 316207:
    {
        returnValue = F("Unterholzheimer Str.");
        break;
    }
    case 316208:
    {
        returnValue = F("Unterholzstr.");
        break;
    }
    case 316209:
    {
        returnValue = F("Unterholzweg");
        break;
    }
    case 316210:
    {
        returnValue = F("Unterhombach");
        break;
    }
    case 316211:
    {
        returnValue = F("Unterhomberg Trail");
        break;
    }
    case 316212:
    {
        returnValue = F("Unterhorststr. (An der Kammerschleuse)");
        break;
    }
    case 316213:
    {
        returnValue = F("Unterhorstweg");
        break;
    }
    case 316214:
    {
        returnValue = F("Unterhosenweg");
        break;
    }
    case 316215:
    {
        returnValue = F("Unterhub");
        break;
    }
    case 316216:
    {
        returnValue = F("Unterhäuser Str.");
        break;
    }
    case 316217:
    {
        returnValue = F("Unterhäusern");
        break;
    }
    case 316218:
    {
        returnValue = F("Unterhöfen");
        break;
    }
    case 316219:
    {
        returnValue = F("Unterhöfener Str.");
        break;
    }
    case 316220:
    {
        returnValue = F("Unterhöhenberg");
        break;
    }
    case 316221:
    {
        returnValue = F("Unterhöhenstetten");
        break;
    }
    case 316222:
    {
        returnValue = F("Unterhöhstr.");
        break;
    }
    case 316223:
    {
        returnValue = F("Unterhöllengrund");
        break;
    }
    case 316224:
    {
        returnValue = F("Unterhölterfelder Str.");
        break;
    }
    case 316225:
    {
        returnValue = F("Unterhölzerstr.");
        break;
    }
    case 316226:
    {
        returnValue = F("Unterhürholz");
        break;
    }
    case 316227:
    {
        returnValue = F("Unterhütt");
        break;
    }
    case 316228:
    {
        returnValue = F("Unterhütte");
        break;
    }
    case 316229:
    {
        returnValue = F("Unterhütten");
        break;
    }
    case 316230:
    {
        returnValue = F("Unterhüttener Str.");
        break;
    }
    case 316231:
    {
        returnValue = F("Unterhützer Str.");
        break;
    }
    case 316232:
    {
        returnValue = F("Unteriflinger Str.");
        break;
    }
    case 316233:
    {
        returnValue = F("Unteriglinger Str.");
        break;
    }
    case 316234:
    {
        returnValue = F("Unterilzmühle");
        break;
    }
    case 316235:
    {
        returnValue = F("Unterislinger Weg");
        break;
    }
    case 316236:
    {
        returnValue = F("Unterjacking");
        break;
    }
    case 316237:
    {
        returnValue = F("Unterjesinger Str.");
        break;
    }
    case 316238:
    {
        returnValue = F("Unterjettenberg");
        break;
    }
    case 316239:
    {
        returnValue = F("Unterjettinger Str.");
        break;
    }
    case 316240:
    {
        returnValue = F("Unterjörn");
        break;
    }
    case 316241:
    {
        returnValue = F("Unterkagn");
        break;
    }
    case 316242:
    {
        returnValue = F("Unterkaiserstr.");
        break;
    }
    case 316243:
    {
        returnValue = F("Unterkaltbrunn");
        break;
    }
    case 316244:
    {
        returnValue = F("Unterkaltbrunner Str.");
        break;
    }
    case 316245:
    {
        returnValue = F("Unterkaltenhofstr.");
        break;
    }
    case 316246:
    {
        returnValue = F("Unterkamp");
        break;
    }
    case 316247:
    {
        returnValue = F("Unterkampweg");
        break;
    }
    case 316248:
    {
        returnValue = F("Unterkastel");
        break;
    }
    case 316249:
    {
        returnValue = F("Unterkatzbach");
        break;
    }
    case 316250:
    {
        returnValue = F("Unterkatzendorfer Str.");
        break;
    }
    case 316251:
    {
        returnValue = F("Unterkessacher Str.");
        break;
    }
    case 316252:
    {
        returnValue = F("Unterkettendorf");
        break;
    }
    case 316253:
    {
        returnValue = F("Unterkirchberger Str.");
        break;
    }
    case 316254:
    {
        returnValue = F("Unterkirchen");
        break;
    }
    case 316255:
    {
        returnValue = F("Unterkirchweg");
        break;
    }
    case 316256:
    {
        returnValue = F("Unterkirnacher Str.");
        break;
    }
    case 316257:
    {
        returnValue = F("Unterklausen");
        break;
    }
    case 316258:
    {
        returnValue = F("Unterklinger");
        break;
    }
    case 316259:
    {
        returnValue = F("Unterknick");
        break;
    }
    case 316260:
    {
        returnValue = F("Unterkochen-Viadukt");
        break;
    }
    case 316261:
    {
        returnValue = F("Unterkochener Str.");
        break;
    }
    case 316262:
    {
        returnValue = F("Unterkodach");
        break;
    }
    case 316263:
    {
        returnValue = F("Unterkohlbergweg");
        break;
    }
    case 316264:
    {
        returnValue = F("Unterkohlfurth");
        break;
    }
    case 316265:
    {
        returnValue = F("Unterkolbersbach");
        break;
    }
    case 316266:
    {
        returnValue = F("Unterkollbacher Str.");
        break;
    }
    case 316267:
    {
        returnValue = F("Unterkollbacher Weg");
        break;
    }
    case 316268:
    {
        returnValue = F("Unterkornettenweg");
        break;
    }
    case 316269:
    {
        returnValue = F("Unterkoskau");
        break;
    }
    case 316270:
    {
        returnValue = F("Unterkoskau Forsthaus");
        break;
    }
    case 316271:
    {
        returnValue = F("Unterkotten");
        break;
    }
    case 316272:
    {
        returnValue = F("Unterkreuthweg");
        break;
    }
    case 316273:
    {
        returnValue = F("Unterkreuzfeld");
        break;
    }
    case 316274:
    {
        returnValue = F("Unterkrieger");
        break;
    }
    case 316275:
    {
        returnValue = F("Unterkrone");
        break;
    }
    case 316276:
    {
        returnValue = F("Unterkrug");
        break;
    }
    case 316277:
    {
        returnValue = F("Unterkrummenweg");
        break;
    }
    case 316278:
    {
        returnValue = F("Unterkuglöd");
        break;
    }
    case 316279:
    {
        returnValue = F("Unterkätzer Str.");
        break;
    }
    case 316280:
    {
        returnValue = F("Unterköditz");
        break;
    }
    case 316281:
    {
        returnValue = F("Unterköllnbach");
        break;
    }
    case 316282:
    {
        returnValue = F("Unterköst");
        break;
    }
    case 316283:
    {
        returnValue = F("Unterlaichling");
        break;
    }
    case 316284:
    {
        returnValue = F("Unterland");
        break;
    }
    case 316285:
    {
        returnValue = F("Unterlandstr.");
        break;
    }
    case 316286:
    {
        returnValue = F("Unterlangenried");
        break;
    }
    case 316287:
    {
        returnValue = F("Unterlangenstadter Str.");
        break;
    }
    case 316288:
    {
        returnValue = F("Unterlangnau");
        break;
    }
    case 316289:
    {
        returnValue = F("Unterlauenweg");
        break;
    }
    case 316290:
    {
        returnValue = F("Unterlaufstr.");
        break;
    }
    case 316291:
    {
        returnValue = F("Unterlauhernweg");
        break;
    }
    case 316292:
    {
        returnValue = F("Unterlausstr.");
        break;
    }
    case 316293:
    {
        returnValue = F("Unterlauterbacher Str.");
        break;
    }
    case 316294:
    {
        returnValue = F("Unterlehberg");
        break;
    }
    case 316295:
    {
        returnValue = F("Unterlehmbach");
        break;
    }
    case 316296:
    {
        returnValue = F("Unterleimbach");
        break;
    }
    case 316297:
    {
        returnValue = F("Unterleimbachshof");
        break;
    }
    case 316298:
    {
        returnValue = F("Unterleiten");
        break;
    }
    case 316299:
    {
        returnValue = F("Unterlemnitz");
        break;
    }
    case 316300:
    {
        returnValue = F("Unterlemnitz Bahnhofstr.");
        break;
    }
    case 316301:
    {
        returnValue = F("Unterlettenweg");
        break;
    }
    case 316302:
    {
        returnValue = F("Unterleupoldsberg");
        break;
    }
    case 316303:
    {
        returnValue = F("Unterlichtbuchetstr.");
        break;
    }
    case 316304:
    {
        returnValue = F("Unterlichtenberger Str.");
        break;
    }
    case 316305:
    {
        returnValue = F("Unterlichtenwald");
        break;
    }
    case 316306:
    {
        returnValue = F("Unterlichtinghagen");
        break;
    }
    case 316307:
    {
        returnValue = F("Unterlimpachweg");
        break;
    }
    case 316308:
    {
        returnValue = F("Unterlimpurger Str.");
        break;
    }
    case 316309:
    {
        returnValue = F("Unterlind");
        break;
    }
    case 316310:
    {
        returnValue = F("Unterlindau");
        break;
    }
    case 316311:
    {
        returnValue = F("Unterlindelbach");
        break;
    }
    case 316312:
    {
        returnValue = F("Unterlinder Str.");
        break;
    }
    case 316313:
    {
        returnValue = F("Unterlinder Weg");
        break;
    }
    case 316314:
    {
        returnValue = F("Unterlindhofstr.");
        break;
    }
    case 316315:
    {
        returnValue = F("Unterlindigweg");
        break;
    }
    case 316316:
    {
        returnValue = F("Unterlintach");
        break;
    }
    case 316317:
    {
        returnValue = F("Unterlippe");
        break;
    }
    case 316318:
    {
        returnValue = F("Unterlipper Str.");
        break;
    }
    case 316319:
    {
        returnValue = F("Unterloh");
        break;
    }
    case 316320:
    {
        returnValue = F("Unterloher Weg");
        break;
    }
    case 316321:
    {
        returnValue = F("Unterlohwies");
        break;
    }
    case 316322:
    {
        returnValue = F("Unterlomitzer Str.");
        break;
    }
    case 316323:
    {
        returnValue = F("Unterlope");
        break;
    }
    case 316324:
    {
        returnValue = F("Unterloquitzer Str.");
        break;
    }
    case 316325:
    {
        returnValue = F("Unterlosaer Str.");
        break;
    }
    case 316326:
    {
        returnValue = F("Unterlosaer Weg");
        break;
    }
    case 316327:
    {
        returnValue = F("Unterloßbruch");
        break;
    }
    case 316328:
    {
        returnValue = F("Unterländer Str.");
        break;
    }
    case 316329:
    {
        returnValue = F("Unterlüghausen");
        break;
    }
    case 316330:
    {
        returnValue = F("Unterlüsser Str.");
        break;
    }
    case 316331:
    {
        returnValue = F("Unterlüßer Str.");
        break;
    }
    case 316332:
    {
        returnValue = F("Unterm Ablaß");
        break;
    }
    case 316333:
    {
        returnValue = F("Unterm Afferberg");
        break;
    }
    case 316334:
    {
        returnValue = F("Unterm Allenberg");
        break;
    }
    case 316335:
    {
        returnValue = F("Unterm Allhorn");
        break;
    }
    case 316336:
    {
        returnValue = F("Unterm Auwer");
        break;
    }
    case 316337:
    {
        returnValue = F("Unterm Baderberg");
        break;
    }
    case 316338:
    {
        returnValue = F("Unterm Bahndamm");
        break;
    }
    case 316339:
    {
        returnValue = F("Unterm Bahnhof");
        break;
    }
    case 316340:
    {
        returnValue = F("Unterm Bamberg");
        break;
    }
    case 316341:
    {
        returnValue = F("Unterm Bangern");
        break;
    }
    case 316342:
    {
        returnValue = F("Unterm Bann");
        break;
    }
    case 316343:
    {
        returnValue = F("Unterm Barmberg");
        break;
    }
    case 316344:
    {
        returnValue = F("Unterm Bau");
        break;
    }
    case 316345:
    {
        returnValue = F("Unterm Baumhof");
        break;
    }
    case 316346:
    {
        returnValue = F("Unterm Bausenberg");
        break;
    }
    case 316347:
    {
        returnValue = F("Unterm Bautel");
        break;
    }
    case 316348:
    {
        returnValue = F("Unterm Beeder Hof");
        break;
    }
    case 316349:
    {
        returnValue = F("Unterm Beggenbeil");
        break;
    }
    case 316350:
    {
        returnValue = F("Unterm Berg");
        break;
    }
    case 316351:
    {
        returnValue = F("Unterm Berge");
        break;
    }
    case 316352:
    {
        returnValue = F("Unterm Bergfried");
        break;
    }
    case 316353:
    {
        returnValue = F("Unterm Bergschlößle");
        break;
    }
    case 316354:
    {
        returnValue = F("Unterm Beul");
        break;
    }
    case 316355:
    {
        returnValue = F("Unterm Bild");
        break;
    }
    case 316356:
    {
        returnValue = F("Unterm Bilsen");
        break;
    }
    case 316357:
    {
        returnValue = F("Unterm Birkberg");
        break;
    }
    case 316358:
    {
        returnValue = F("Unterm Bismarckturm");
        break;
    }
    case 316359:
    {
        returnValue = F("Unterm Blankenrain");
        break;
    }
    case 316360:
    {
        returnValue = F("Unterm Bockshorn");
        break;
    }
    case 316361:
    {
        returnValue = F("Unterm Bodenberg");
        break;
    }
    case 316362:
    {
        returnValue = F("Unterm Bogen");
        break;
    }
    case 316363:
    {
        returnValue = F("Unterm Bookhof");
        break;
    }
    case 316364:
    {
        returnValue = F("Unterm Born");
        break;
    }
    case 316365:
    {
        returnValue = F("Unterm Bornberg");
        break;
    }
    case 316366:
    {
        returnValue = F("Unterm Bornrain");
        break;
    }
    case 316367:
    {
        returnValue = F("Unterm Breiten Berg");
        break;
    }
    case 316368:
    {
        returnValue = F("Unterm Breiten Weg");
        break;
    }
    case 316369:
    {
        returnValue = F("Unterm Brennrodt");
        break;
    }
    case 316370:
    {
        returnValue = F("Unterm Brink");
        break;
    }
    case 316371:
    {
        returnValue = F("Unterm Bräuhaus");
        break;
    }
    case 316372:
    {
        returnValue = F("Unterm Buch");
        break;
    }
    case 316373:
    {
        returnValue = F("Unterm Buchberg");
        break;
    }
    case 316374:
    {
        returnValue = F("Unterm Buchwald");
        break;
    }
    case 316375:
    {
        returnValue = F("Unterm Burgberg");
        break;
    }
    case 316376:
    {
        returnValue = F("Unterm Busch");
        break;
    }
    case 316377:
    {
        returnValue = F("Unterm Busche");
        break;
    }
    case 316378:
    {
        returnValue = F("Unterm Bußkopf");
        break;
    }
    case 316379:
    {
        returnValue = F("Unterm Damberg");
        break;
    }
    case 316380:
    {
        returnValue = F("Unterm Damel");
        break;
    }
    case 316381:
    {
        returnValue = F("Unterm Dammfeld");
        break;
    }
    case 316382:
    {
        returnValue = F("Unterm Deich");
        break;
    }
    case 316383:
    {
        returnValue = F("Unterm Denkmal");
        break;
    }
    case 316384:
    {
        returnValue = F("Unterm Dieck");
        break;
    }
    case 316385:
    {
        returnValue = F("Unterm Dillenberg");
        break;
    }
    case 316386:
    {
        returnValue = F("Unterm Dorf");
        break;
    }
    case 316387:
    {
        returnValue = F("Unterm Dorfe");
        break;
    }
    case 316388:
    {
        returnValue = F("Unterm Dorfgarten");
        break;
    }
    case 316389:
    {
        returnValue = F("Unterm Driesch");
        break;
    }
    case 316390:
    {
        returnValue = F("Unterm Dumel");
        break;
    }
    case 316391:
    {
        returnValue = F("Unterm Dörgen");
        break;
    }
    case 316392:
    {
        returnValue = F("Unterm Dünnen Wäldchen");
        break;
    }
    case 316393:
    {
        returnValue = F("Unterm Dünnenberg");
        break;
    }
    case 316394:
    {
        returnValue = F("Unterm Düsternsiepen");
        break;
    }
    case 316395:
    {
        returnValue = F("Unterm Eberg");
        break;
    }
    case 316396:
    {
        returnValue = F("Unterm Eichberg");
        break;
    }
    case 316397:
    {
        returnValue = F("Unterm Eichen");
        break;
    }
    case 316398:
    {
        returnValue = F("Unterm Eichenberg");
        break;
    }
    case 316399:
    {
        returnValue = F("Unterm Eicher Hang");
        break;
    }
    case 316400:
    {
        returnValue = F("Unterm Eichgraben");
        break;
    }
    case 316401:
    {
        returnValue = F("Unterm Eichholz");
        break;
    }
    case 316402:
    {
        returnValue = F("Unterm Einig");
        break;
    }
    case 316403:
    {
        returnValue = F("Unterm Eisberg");
        break;
    }
    case 316404:
    {
        returnValue = F("Unterm Eiserkaulen");
        break;
    }
    case 316405:
    {
        returnValue = F("Unterm Eisvogel");
        break;
    }
    case 316406:
    {
        returnValue = F("Unterm Elmen");
        break;
    }
    case 316407:
    {
        returnValue = F("Unterm Elsterberg");
        break;
    }
    case 316408:
    {
        returnValue = F("Unterm Enschede");
        break;
    }
    case 316409:
    {
        returnValue = F("Unterm Esch");
        break;
    }
    case 316410:
    {
        returnValue = F("Unterm Espen");
        break;
    }
    case 316411:
    {
        returnValue = F("Unterm Ettersberg");
        break;
    }
    case 316412:
    {
        returnValue = F("Unterm Ewer");
        break;
    }
    case 316413:
    {
        returnValue = F("Unterm Feist");
        break;
    }
    case 316414:
    {
        returnValue = F("Unterm Feldborn");
        break;
    }
    case 316415:
    {
        returnValue = F("Unterm Felsenberg");
        break;
    }
    case 316416:
    {
        returnValue = F("Unterm Felsenschlößchen");
        break;
    }
    case 316417:
    {
        returnValue = F("Unterm Festungsberg");
        break;
    }
    case 316418:
    {
        returnValue = F("Unterm Feuerteich");
        break;
    }
    case 316419:
    {
        returnValue = F("Unterm Flechtnersberg");
        break;
    }
    case 316420:
    {
        returnValue = F("Unterm Fleck");
        break;
    }
    case 316421:
    {
        returnValue = F("Unterm Flecken");
        break;
    }
    case 316422:
    {
        returnValue = F("Unterm Forst");
        break;
    }
    case 316423:
    {
        returnValue = F("Unterm Freihof");
        break;
    }
    case 316424:
    {
        returnValue = F("Unterm Friedhof");
        break;
    }
    case 316425:
    {
        returnValue = F("Unterm Frohnstück");
        break;
    }
    case 316426:
    {
        returnValue = F("Unterm Fröndenberg");
        break;
    }
    case 316427:
    {
        returnValue = F("Unterm Galgenberg");
        break;
    }
    case 316428:
    {
        returnValue = F("Unterm Gallenlöh");
        break;
    }
    case 316429:
    {
        returnValue = F("Unterm Garten");
        break;
    }
    case 316430:
    {
        returnValue = F("Unterm Gehn");
        break;
    }
    case 316431:
    {
        returnValue = F("Unterm Georgenberg");
        break;
    }
    case 316432:
    {
        returnValue = F("Unterm Gerskamp");
        break;
    }
    case 316433:
    {
        returnValue = F("Unterm Giebel");
        break;
    }
    case 316434:
    {
        returnValue = F("Unterm Giersberg");
        break;
    }
    case 316435:
    {
        returnValue = F("Unterm Glocken");
        break;
    }
    case 316436:
    {
        returnValue = F("Unterm Gläserberg");
        break;
    }
    case 316437:
    {
        returnValue = F("Unterm Goldbachshain");
        break;
    }
    case 316438:
    {
        returnValue = F("Unterm Goldberg");
        break;
    }
    case 316439:
    {
        returnValue = F("Unterm Gottesacker");
        break;
    }
    case 316440:
    {
        returnValue = F("Unterm Grabersberg");
        break;
    }
    case 316441:
    {
        returnValue = F("Unterm Grasweg");
        break;
    }
    case 316442:
    {
        returnValue = F("Unterm Groth");
        break;
    }
    case 316443:
    {
        returnValue = F("Unterm Grund");
        break;
    }
    case 316444:
    {
        returnValue = F("Unterm Grünen Berg");
        break;
    }
    case 316445:
    {
        returnValue = F("Unterm Gänsberg");
        break;
    }
    case 316446:
    {
        returnValue = F("Unterm Gänsbrückel");
        break;
    }
    case 316447:
    {
        returnValue = F("Unterm Göseland");
        break;
    }
    case 316448:
    {
        returnValue = F("Unterm Haane");
        break;
    }
    case 316449:
    {
        returnValue = F("Unterm Hagen");
        break;
    }
    case 316450:
    {
        returnValue = F("Unterm Hahnen");
        break;
    }
    case 316451:
    {
        returnValue = F("Unterm Hahnenkamp");
        break;
    }
    case 316452:
    {
        returnValue = F("Unterm Hain");
        break;
    }
    case 316453:
    {
        returnValue = F("Unterm Haldenanger");
        break;
    }
    case 316454:
    {
        returnValue = F("Unterm Halfterteich");
        break;
    }
    case 316455:
    {
        returnValue = F("Unterm Halstenberg");
        break;
    }
    case 316456:
    {
        returnValue = F("Unterm Hamberg");
        break;
    }
    case 316457:
    {
        returnValue = F("Unterm Hampelberg");
        break;
    }
    case 316458:
    {
        returnValue = F("Unterm Hamsterberg");
        break;
    }
    case 316459:
    {
        returnValue = F("Unterm Hang");
        break;
    }
    case 316460:
    {
        returnValue = F("Unterm Hardtwäldchen");
        break;
    }
    case 316461:
    {
        returnValue = F("Unterm Hasenfeld");
        break;
    }
    case 316462:
    {
        returnValue = F("Unterm Hauwald");
        break;
    }
    case 316463:
    {
        returnValue = F("Unterm Heid");
        break;
    }
    case 316464:
    {
        returnValue = F("Unterm Heilig Kreuz");
        break;
    }
    case 316465:
    {
        returnValue = F("Unterm Heiligenberg");
        break;
    }
    case 316466:
    {
        returnValue = F("Unterm Heinig");
        break;
    }
    case 316467:
    {
        returnValue = F("Unterm Heistern");
        break;
    }
    case 316468:
    {
        returnValue = F("Unterm Henhop");
        break;
    }
    case 316469:
    {
        returnValue = F("Unterm Herrenberg");
        break;
    }
    case 316470:
    {
        returnValue = F("Unterm Herrschaftswald");
        break;
    }
    case 316471:
    {
        returnValue = F("Unterm Hertzen");
        break;
    }
    case 316472:
    {
        returnValue = F("Unterm Hessenberg");
        break;
    }
    case 316473:
    {
        returnValue = F("Unterm Hestenberg");
        break;
    }
    case 316474:
    {
        returnValue = F("Unterm Hexenberg");
        break;
    }
    case 316475:
    {
        returnValue = F("Unterm Hohen Weinberg");
        break;
    }
    case 316476:
    {
        returnValue = F("Unterm Homberg");
        break;
    }
    case 316477:
    {
        returnValue = F("Unterm Hoppenberge");
        break;
    }
    case 316478:
    {
        returnValue = F("Unterm Horn");
        break;
    }
    case 316479:
    {
        returnValue = F("Unterm Hungerpfuhl");
        break;
    }
    case 316480:
    {
        returnValue = F("Unterm Hungerrain");
        break;
    }
    case 316481:
    {
        returnValue = F("Unterm Hunnebrink");
        break;
    }
    case 316482:
    {
        returnValue = F("Unterm Häldele");
        break;
    }
    case 316483:
    {
        returnValue = F("Unterm Häsling");
        break;
    }
    case 316484:
    {
        returnValue = F("Unterm Höllscheid");
        break;
    }
    case 316485:
    {
        returnValue = F("Unterm Hölzchen");
        break;
    }
    case 316486:
    {
        returnValue = F("Unterm Hömberg");
        break;
    }
    case 316487:
    {
        returnValue = F("Unterm Hübbeln");
        break;
    }
    case 316488:
    {
        returnValue = F("Unterm Hüllenbaum");
        break;
    }
    case 316489:
    {
        returnValue = F("Unterm Hünenstein");
        break;
    }
    case 316490:
    {
        returnValue = F("Unterm Iderstolk");
        break;
    }
    case 316491:
    {
        returnValue = F("Unterm Ilser Brink");
        break;
    }
    case 316492:
    {
        returnValue = F("Unterm Junkernberg");
        break;
    }
    case 316493:
    {
        returnValue = F("Unterm Jäger");
        break;
    }
    case 316494:
    {
        returnValue = F("Unterm Kalsmunt");
        break;
    }
    case 316495:
    {
        returnValue = F("Unterm Kalvarienberg");
        break;
    }
    case 316496:
    {
        returnValue = F("Unterm Kamin");
        break;
    }
    case 316497:
    {
        returnValue = F("Unterm Kamp");
        break;
    }
    case 316498:
    {
        returnValue = F("Unterm Kapf");
        break;
    }
    case 316499:
    {
        returnValue = F("Unterm Kappenberg");
        break;
    }
    case 316500:
    {
        returnValue = F("Unterm Kastellbad");
        break;
    }
    case 316501:
    {
        returnValue = F("Unterm Katzenstein");
        break;
    }
    case 316502:
    {
        returnValue = F("Unterm Kaulenberg");
        break;
    }
    case 316503:
    {
        returnValue = F("Unterm Kiefernwald");
        break;
    }
    case 316504:
    {
        returnValue = F("Unterm Kieselstein");
        break;
    }
    case 316505:
    {
        returnValue = F("Unterm Kilbe");
        break;
    }
    case 316506:
    {
        returnValue = F("Unterm Kirchberg");
        break;
    }
    case 316507:
    {
        returnValue = F("Unterm Kirchweg");
        break;
    }
    case 316508:
    {
        returnValue = F("Unterm Kirschberg");
        break;
    }
    case 316509:
    {
        returnValue = F("Unterm Kist");
        break;
    }
    case 316510:
    {
        returnValue = F("Unterm Kitzerstein");
        break;
    }
    case 316511:
    {
        returnValue = F("Unterm Klafterberg");
        break;
    }
    case 316512:
    {
        returnValue = F("Unterm Klausknapp");
        break;
    }
    case 316513:
    {
        returnValue = F("Unterm Klein-Loh");
        break;
    }
    case 316514:
    {
        returnValue = F("Unterm Kleve");
        break;
    }
    case 316515:
    {
        returnValue = F("Unterm Klien");
        break;
    }
    case 316516:
    {
        returnValue = F("Unterm Klopp");
        break;
    }
    case 316517:
    {
        returnValue = F("Unterm Knapp");
        break;
    }
    case 316518:
    {
        returnValue = F("Unterm Kolm");
        break;
    }
    case 316519:
    {
        returnValue = F("Unterm Krankenhaus");
        break;
    }
    case 316520:
    {
        returnValue = F("Unterm Krater");
        break;
    }
    case 316521:
    {
        returnValue = F("Unterm Kreuz");
        break;
    }
    case 316522:
    {
        returnValue = F("Unterm Königshof");
        break;
    }
    case 316523:
    {
        returnValue = F("Unterm Königsplatz");
        break;
    }
    case 316524:
    {
        returnValue = F("Unterm Köpfchen");
        break;
    }
    case 316525:
    {
        returnValue = F("Unterm Kühberg");
        break;
    }
    case 316526:
    {
        returnValue = F("Unterm Kükelscheid");
        break;
    }
    case 316527:
    {
        returnValue = F("Unterm Landratsberg");
        break;
    }
    case 316528:
    {
        returnValue = F("Unterm Laufholz");
        break;
    }
    case 316529:
    {
        returnValue = F("Unterm Leisenberg");
        break;
    }
    case 316530:
    {
        returnValue = F("Unterm Lichten");
        break;
    }
    case 316531:
    {
        returnValue = F("Unterm Limberg");
        break;
    }
    case 316532:
    {
        returnValue = F("Unterm Lindchen");
        break;
    }
    case 316533:
    {
        returnValue = F("Unterm Lindenberg");
        break;
    }
    case 316534:
    {
        returnValue = F("Unterm Lippen Berg");
        break;
    }
    case 316535:
    {
        returnValue = F("Unterm Lunsenberg");
        break;
    }
    case 316536:
    {
        returnValue = F("Unterm Löhberg");
        break;
    }
    case 316537:
    {
        returnValue = F("Unterm Lüsenberg");
        break;
    }
    case 316538:
    {
        returnValue = F("Unterm Maienhölzchen");
        break;
    }
    case 316539:
    {
        returnValue = F("Unterm Markt");
        break;
    }
    case 316540:
    {
        returnValue = F("Unterm Marktplatz");
        break;
    }
    case 316541:
    {
        returnValue = F("Unterm Mastberg");
        break;
    }
    case 316542:
    {
        returnValue = F("Unterm Mattenberg");
        break;
    }
    case 316543:
    {
        returnValue = F("Unterm Mittelberg");
        break;
    }
    case 316544:
    {
        returnValue = F("Unterm Moor");
        break;
    }
    case 316545:
    {
        returnValue = F("Unterm Moosgarten");
        break;
    }
    case 316546:
    {
        returnValue = F("Unterm Mooskamp");
        break;
    }
    case 316547:
    {
        returnValue = F("Unterm Mäuseberg");
        break;
    }
    case 316548:
    {
        returnValue = F("Unterm Möhnerberg");
        break;
    }
    case 316549:
    {
        returnValue = F("Unterm Mühlberg");
        break;
    }
    case 316550:
    {
        returnValue = F("Unterm Mühlenberg");
        break;
    }
    case 316551:
    {
        returnValue = F("Unterm Neuberg");
        break;
    }
    case 316552:
    {
        returnValue = F("Unterm Nordesch");
        break;
    }
    case 316553:
    {
        returnValue = F("Unterm Nußbaum");
        break;
    }
    case 316554:
    {
        returnValue = F("Unterm Oberborn");
        break;
    }
    case 316555:
    {
        returnValue = F("Unterm Ort");
        break;
    }
    case 316556:
    {
        returnValue = F("Unterm Ortsberg");
        break;
    }
    case 316557:
    {
        returnValue = F("Unterm Osterberg");
        break;
    }
    case 316558:
    {
        returnValue = F("Unterm Osterhagen");
        break;
    }
    case 316559:
    {
        returnValue = F("Unterm Palmberg");
        break;
    }
    case 316560:
    {
        returnValue = F("Unterm Pfaffensteig");
        break;
    }
    case 316561:
    {
        returnValue = F("Unterm Prangenhof");
        break;
    }
    case 316562:
    {
        returnValue = F("Unterm Pulsberg");
        break;
    }
    case 316563:
    {
        returnValue = F("Unterm Rain");
        break;
    }
    case 316564:
    {
        returnValue = F("Unterm Rathaus");
        break;
    }
    case 316565:
    {
        returnValue = F("Unterm Ratskopf");
        break;
    }
    case 316566:
    {
        returnValue = F("Unterm Rauhen Berge");
        break;
    }
    case 316567:
    {
        returnValue = F("Unterm Rebenberg");
        break;
    }
    case 316568:
    {
        returnValue = F("Unterm Reckhahn");
        break;
    }
    case 316569:
    {
        returnValue = F("Unterm Regenbogen");
        break;
    }
    case 316570:
    {
        returnValue = F("Unterm Regenturm");
        break;
    }
    case 316571:
    {
        returnValue = F("Unterm Reinchen");
        break;
    }
    case 316572:
    {
        returnValue = F("Unterm Remseck");
        break;
    }
    case 316573:
    {
        returnValue = F("Unterm Ried");
        break;
    }
    case 316574:
    {
        returnValue = F("Unterm Ringelberg");
        break;
    }
    case 316575:
    {
        returnValue = F("Unterm Risifelsen");
        break;
    }
    case 316576:
    {
        returnValue = F("Unterm Rohland");
        break;
    }
    case 316577:
    {
        returnValue = F("Unterm Rohrer Weg");
        break;
    }
    case 316578:
    {
        returnValue = F("Unterm Rosengarten");
        break;
    }
    case 316579:
    {
        returnValue = F("Unterm Roten Berg");
        break;
    }
    case 316580:
    {
        returnValue = F("Unterm Roten Land");
        break;
    }
    case 316581:
    {
        returnValue = F("Unterm Rotenberg");
        break;
    }
    case 316582:
    {
        returnValue = F("Unterm Rotscheid");
        break;
    }
    case 316583:
    {
        returnValue = F("Unterm Roßberg");
        break;
    }
    case 316584:
    {
        returnValue = F("Unterm Ruhestein");
        break;
    }
    case 316585:
    {
        returnValue = F("Unterm Rödchen");
        break;
    }
    case 316586:
    {
        returnValue = F("Unterm Römberge");
        break;
    }
    case 316587:
    {
        returnValue = F("Unterm Rüttel");
        break;
    }
    case 316588:
    {
        returnValue = F("Unterm Saalberg");
        break;
    }
    case 316589:
    {
        returnValue = F("Unterm Saley");
        break;
    }
    case 316590:
    {
        returnValue = F("Unterm Sand");
        break;
    }
    case 316591:
    {
        returnValue = F("Unterm Sandberg");
        break;
    }
    case 316592:
    {
        returnValue = F("Unterm Sande");
        break;
    }
    case 316593:
    {
        returnValue = F("Unterm Sattel");
        break;
    }
    case 316594:
    {
        returnValue = F("Unterm Schaffeld");
        break;
    }
    case 316595:
    {
        returnValue = F("Unterm Scharfenberg");
        break;
    }
    case 316596:
    {
        returnValue = F("Unterm Schauer");
        break;
    }
    case 316597:
    {
        returnValue = F("Unterm Scheid");
        break;
    }
    case 316598:
    {
        returnValue = F("Unterm Schellhagen");
        break;
    }
    case 316599:
    {
        returnValue = F("Unterm Schieferberg");
        break;
    }
    case 316600:
    {
        returnValue = F("Unterm Schildchen");
        break;
    }
    case 316601:
    {
        returnValue = F("Unterm Schlegel");
        break;
    }
    case 316602:
    {
        returnValue = F("Unterm Schlegelsberg");
        break;
    }
    case 316603:
    {
        returnValue = F("Unterm Schloß");
        break;
    }
    case 316604:
    {
        returnValue = F("Unterm Schloßwald");
        break;
    }
    case 316605:
    {
        returnValue = F("Unterm Schlössle");
        break;
    }
    case 316606:
    {
        returnValue = F("Unterm Schmierhagen");
        break;
    }
    case 316607:
    {
        returnValue = F("Unterm Schradweg");
        break;
    }
    case 316608:
    {
        returnValue = F("Unterm Schrick");
        break;
    }
    case 316609:
    {
        returnValue = F("Unterm Schulberg");
        break;
    }
    case 316610:
    {
        returnValue = F("Unterm Schwamma");
        break;
    }
    case 316611:
    {
        returnValue = F("Unterm Schälfer Weg");
        break;
    }
    case 316612:
    {
        returnValue = F("Unterm Schützenhof");
        break;
    }
    case 316613:
    {
        returnValue = F("Unterm Seltersberg");
        break;
    }
    case 316614:
    {
        returnValue = F("Unterm Sieke");
        break;
    }
    case 316615:
    {
        returnValue = F("Unterm Sperlingsberg");
        break;
    }
    case 316616:
    {
        returnValue = F("Unterm Spielplatz");
        break;
    }
    case 316617:
    {
        returnValue = F("Unterm Spieß");
        break;
    }
    case 316618:
    {
        returnValue = F("Unterm Spittel");
        break;
    }
    case 316619:
    {
        returnValue = F("Unterm Spitzfelsen");
        break;
    }
    case 316620:
    {
        returnValue = F("Unterm Sportplatz");
        break;
    }
    case 316621:
    {
        returnValue = F("Unterm Starkeberg");
        break;
    }
    case 316622:
    {
        returnValue = F("Unterm Steeg");
        break;
    }
    case 316623:
    {
        returnValue = F("Unterm Steimel");
        break;
    }
    case 316624:
    {
        returnValue = F("Unterm Stein");
        break;
    }
    case 316625:
    {
        returnValue = F("Unterm Steinberg");
        break;
    }
    case 316626:
    {
        returnValue = F("Unterm Steinbrink");
        break;
    }
    case 316627:
    {
        returnValue = F("Unterm Steinbruch");
        break;
    }
    case 316628:
    {
        returnValue = F("Unterm Steinrücken");
        break;
    }
    case 316629:
    {
        returnValue = F("Unterm Sterl");
        break;
    }
    case 316630:
    {
        returnValue = F("Unterm Stern");
        break;
    }
    case 316631:
    {
        returnValue = F("Unterm Sternberg");
        break;
    }
    case 316632:
    {
        returnValue = F("Unterm Stierbusch");
        break;
    }
    case 316633:
    {
        returnValue = F("Unterm Stillenberg");
        break;
    }
    case 316634:
    {
        returnValue = F("Unterm Storchsberg");
        break;
    }
    case 316635:
    {
        returnValue = F("Unterm Strahn");
        break;
    }
    case 316636:
    {
        returnValue = F("Unterm Suberg");
        break;
    }
    case 316637:
    {
        returnValue = F("Unterm Talfeld");
        break;
    }
    case 316638:
    {
        returnValue = F("Unterm Talweg");
        break;
    }
    case 316639:
    {
        returnValue = F("Unterm Tann");
        break;
    }
    case 316640:
    {
        returnValue = F("Unterm Teich");
        break;
    }
    case 316641:
    {
        returnValue = F("Unterm Tempel");
        break;
    }
    case 316642:
    {
        returnValue = F("Unterm Tiedeberg");
        break;
    }
    case 316643:
    {
        returnValue = F("Unterm Tigge");
        break;
    }
    case 316644:
    {
        returnValue = F("Unterm Timmerberg");
        break;
    }
    case 316645:
    {
        returnValue = F("Unterm Tonberg");
        break;
    }
    case 316646:
    {
        returnValue = F("Unterm Trachtenberg");
        break;
    }
    case 316647:
    {
        returnValue = F("Unterm Trieb");
        break;
    }
    case 316648:
    {
        returnValue = F("Unterm Trotzbusch");
        break;
    }
    case 316649:
    {
        returnValue = F("Unterm Tälchen");
        break;
    }
    case 316650:
    {
        returnValue = F("Unterm Ufer");
        break;
    }
    case 316651:
    {
        returnValue = F("Unterm Venn");
        break;
    }
    case 316652:
    {
        returnValue = F("Unterm Vestenberg");
        break;
    }
    case 316653:
    {
        returnValue = F("Unterm Vogelberg");
        break;
    }
    case 316654:
    {
        returnValue = F("Unterm Vogelsang");
        break;
    }
    case 316655:
    {
        returnValue = F("Unterm Wachtloh");
        break;
    }
    case 316656:
    {
        returnValue = F("Unterm Wahlberg");
        break;
    }
    case 316657:
    {
        returnValue = F("Unterm Wald");
        break;
    }
    case 316658:
    {
        returnValue = F("Unterm Waldhügel");
        break;
    }
    case 316659:
    {
        returnValue = F("Unterm Waldweg");
        break;
    }
    case 316660:
    {
        returnValue = F("Unterm Warenberg");
        break;
    }
    case 316661:
    {
        returnValue = F("Unterm Wasser");
        break;
    }
    case 316662:
    {
        returnValue = F("Unterm Wehlenkopf");
        break;
    }
    case 316663:
    {
        returnValue = F("Unterm Wehr");
        break;
    }
    case 316664:
    {
        returnValue = F("Unterm Weiher");
        break;
    }
    case 316665:
    {
        returnValue = F("Unterm Weinberg");
        break;
    }
    case 316666:
    {
        returnValue = F("Unterm Weinbusch");
        break;
    }
    case 316667:
    {
        returnValue = F("Unterm Weingarten");
        break;
    }
    case 316668:
    {
        returnValue = F("Unterm Werth");
        break;
    }
    case 316669:
    {
        returnValue = F("Unterm Wiesenberg");
        break;
    }
    case 316670:
    {
        returnValue = F("Unterm Wilden Berg");
        break;
    }
    case 316671:
    {
        returnValue = F("Unterm Willem");
        break;
    }
    case 316672:
    {
        returnValue = F("Unterm Wimpel");
        break;
    }
    case 316673:
    {
        returnValue = F("Unterm Wingert");
        break;
    }
    case 316674:
    {
        returnValue = F("Unterm Wolfsberg");
        break;
    }
    case 316675:
    {
        returnValue = F("Unterm Wulfhorn");
        break;
    }
    case 316676:
    {
        returnValue = F("Unterm Wäldchen");
        break;
    }
    case 316677:
    {
        returnValue = F("Unterm Wäldle");
        break;
    }
    case 316678:
    {
        returnValue = F("Unterm Zaunacker");
        break;
    }
    case 316679:
    {
        returnValue = F("Unterm Ziegenberg");
        break;
    }
    case 316680:
    {
        returnValue = F("Unterm Ziegenbusch");
        break;
    }
    case 316681:
    {
        returnValue = F("Unterm heiligen Brunnen");
        break;
    }
    case 316682:
    {
        returnValue = F("Unterm Ölberg");
        break;
    }
    case 316683:
    {
        returnValue = F("Untermain Anlage");
        break;
    }
    case 316684:
    {
        returnValue = F("Untermainanlage");
        break;
    }
    case 316685:
    {
        returnValue = F("Untermainbacher Weg");
        break;
    }
    case 316686:
    {
        returnValue = F("Untermainbrücke");
        break;
    }
    case 316687:
    {
        returnValue = F("Untermainkai");
        break;
    }
    case 316688:
    {
        returnValue = F("Untermainsbach");
        break;
    }
    case 316689:
    {
        returnValue = F("Untermainshof");
        break;
    }
    case 316690:
    {
        returnValue = F("Untermainstr.");
        break;
    }
    case 316691:
    {
        returnValue = F("Untermarbach");
        break;
    }
    case 316692:
    {
        returnValue = F("Untermarkstr.");
        break;
    }
    case 316693:
    {
        returnValue = F("Untermarkt");
        break;
    }
    case 316694:
    {
        returnValue = F("Untermarktstr.");
        break;
    }
    case 316695:
    {
        returnValue = F("Untermarxgrüner Str.");
        break;
    }
    case 316696:
    {
        returnValue = F("Untermarxgrüner Weg");
        break;
    }
    case 316697:
    {
        returnValue = F("Untermatten");
        break;
    }
    case 316698:
    {
        returnValue = F("Untermattweg");
        break;
    }
    case 316699:
    {
        returnValue = F("Untermaubacher Str.");
        break;
    }
    case 316700:
    {
        returnValue = F("Untermauerstr.");
        break;
    }
    case 316701:
    {
        returnValue = F("Untermaurach");
        break;
    }
    case 316702:
    {
        returnValue = F("Untermausbach");
        break;
    }
    case 316703:
    {
        returnValue = F("Untermaxkron");
        break;
    }
    case 316704:
    {
        returnValue = F("Untermbergstr.");
        break;
    }
    case 316705:
    {
        returnValue = F("Untermedlinger Str.");
        break;
    }
    case 316706:
    {
        returnValue = F("Untermeedeweg");
        break;
    }
    case 316707:
    {
        returnValue = F("Untermeerweg");
        break;
    }
    case 316708:
    {
        returnValue = F("Untermeitingen Fuggerstr. Nord");
        break;
    }
    case 316709:
    {
        returnValue = F("Untermeitinger Str.");
        break;
    }
    case 316710:
    {
        returnValue = F("Untermelsendorf");
        break;
    }
    case 316711:
    {
        returnValue = F("Untermenzinger Str.");
        break;
    }
    case 316712:
    {
        returnValue = F("Untermettinger Str.");
        break;
    }
    case 316713:
    {
        returnValue = F("Untermhäuser Str.");
        break;
    }
    case 316714:
    {
        returnValue = F("Untermiethnach");
        break;
    }
    case 316715:
    {
        returnValue = F("Untermolbitzer Str.");
        break;
    }
    case 316716:
    {
        returnValue = F("Untermoorweg");
        break;
    }
    case 316717:
    {
        returnValue = F("Untermudauer Str.");
        break;
    }
    case 316718:
    {
        returnValue = F("Untermurbach");
        break;
    }
    case 316719:
    {
        returnValue = F("Untermurnthal");
        break;
    }
    case 316720:
    {
        returnValue = F("Untermättle");
        break;
    }
    case 316721:
    {
        returnValue = F("Untermöllenbronn");
        break;
    }
    case 316722:
    {
        returnValue = F("Untermühlanger");
        break;
    }
    case 316723:
    {
        returnValue = F("Untermühlaustr.");
        break;
    }
    case 316724:
    {
        returnValue = F("Untermühle");
        break;
    }
    case 316725:
    {
        returnValue = F("Untermühlenstr.");
        break;
    }
    case 316726:
    {
        returnValue = F("Untermühlenweg");
        break;
    }
    case 316727:
    {
        returnValue = F("Untermühleweg");
        break;
    }
    case 316728:
    {
        returnValue = F("Untermühlhauser Str.");
        break;
    }
    case 316729:
    {
        returnValue = F("Untermühlstr.");
        break;
    }
    case 316730:
    {
        returnValue = F("Untermühlweg");
        break;
    }
    case 316731:
    {
        returnValue = F("Untermüllerplatz");
        break;
    }
    case 316732:
    {
        returnValue = F("Untermünkheimer Str.");
        break;
    }
    case 316733:
    {
        returnValue = F("Untern Bruchgärten");
        break;
    }
    case 316734:
    {
        returnValue = F("Untern Daal");
        break;
    }
    case 316735:
    {
        returnValue = F("Untern Eichen");
        break;
    }
    case 316736:
    {
        returnValue = F("Unternaglbach");
        break;
    }
    case 316737:
    {
        returnValue = F("Unternaifermühle");
        break;
    }
    case 316738:
    {
        returnValue = F("Unternankau");
        break;
    }
    case 316739:
    {
        returnValue = F("Unternbergstr.");
        break;
    }
    case 316740:
    {
        returnValue = F("Unternbergweg");
        break;
    }
    case 316741:
    {
        returnValue = F("Unternbergweg Nr. 4");
        break;
    }
    case 316742:
    {
        returnValue = F("Unterneudorfer Mühle");
        break;
    }
    case 316743:
    {
        returnValue = F("Unterneudorfer Str.");
        break;
    }
    case 316744:
    {
        returnValue = F("Unterneugasse");
        break;
    }
    case 316745:
    {
        returnValue = F("Unterneukampweg");
        break;
    }
    case 316746:
    {
        returnValue = F("Unterneumais");
        break;
    }
    case 316747:
    {
        returnValue = F("Unterneumühle");
        break;
    }
    case 316748:
    {
        returnValue = F("Unterneustetten");
        break;
    }
    case 316749:
    {
        returnValue = F("Unterneustädter Kirchplatz");
        break;
    }
    case 316750:
    {
        returnValue = F("Unternholzstr.");
        break;
    }
    case 316751:
    {
        returnValue = F("Unternien");
        break;
    }
    case 316752:
    {
        returnValue = F("Unternordysweg");
        break;
    }
    case 316753:
    {
        returnValue = F("Unternschreezer Str.");
        break;
    }
    case 316754:
    {
        returnValue = F("Unterntiefer Weg");
        break;
    }
    case 316755:
    {
        returnValue = F("Unteroberndorfer Str.");
        break;
    }
    case 316756:
    {
        returnValue = F("Unteroblandstr.");
        break;
    }
    case 316757:
    {
        returnValue = F("Unterommer");
        break;
    }
    case 316758:
    {
        returnValue = F("Unteronnert");
        break;
    }
    case 316759:
    {
        returnValue = F("Unterortstr.");
        break;
    }
    case 316760:
    {
        returnValue = F("Unterortwang");
        break;
    }
    case 316761:
    {
        returnValue = F("Unterortwick");
        break;
    }
    case 316762:
    {
        returnValue = F("Unterosterner Weg");
        break;
    }
    case 316763:
    {
        returnValue = F("Unterpentinger Weg");
        break;
    }
    case 316764:
    {
        returnValue = F("Unterpfarrwinkel");
        break;
    }
    case 316765:
    {
        returnValue = F("Unterpferdter Weg");
        break;
    }
    case 316766:
    {
        returnValue = F("Unterpforte");
        break;
    }
    case 316767:
    {
        returnValue = F("Unterplan");
        break;
    }
    case 316768:
    {
        returnValue = F("Unterpleichfelder Str.");
        break;
    }
    case 316769:
    {
        returnValue = F("Unterpohlhausen");
        break;
    }
    case 316770:
    {
        returnValue = F("Unterpreilipp");
        break;
    }
    case 316771:
    {
        returnValue = F("Unterpreth");
        break;
    }
    case 316772:
    {
        returnValue = F("Unterpreuschwitz");
        break;
    }
    case 316773:
    {
        returnValue = F("Unterprienmühle");
        break;
    }
    case 316774:
    {
        returnValue = F("Unterprost");
        break;
    }
    case 316775:
    {
        returnValue = F("Unterpurbach");
        break;
    }
    case 316776:
    {
        returnValue = F("Unterpörlitzer Str.");
        break;
    }
    case 316777:
    {
        returnValue = F("Unterpößnach");
        break;
    }
    case 316778:
    {
        returnValue = F("Unterquast");
        break;
    }
    case 316779:
    {
        returnValue = F("Unterrain");
        break;
    }
    case 316780:
    {
        returnValue = F("Unterrainer Weg");
        break;
    }
    case 316781:
    {
        returnValue = F("Unterrappendorf");
        break;
    }
    case 316782:
    {
        returnValue = F("Unterrasen");
        break;
    }
    case 316783:
    {
        returnValue = F("Unterrather Str.");
        break;
    }
    case 316784:
    {
        returnValue = F("Unterratting");
        break;
    }
    case 316785:
    {
        returnValue = F("Unterrauher Weg");
        break;
    }
    case 316786:
    {
        returnValue = F("Unterrauschenthal");
        break;
    }
    case 316787:
    {
        returnValue = F("Unterregenwasserweg");
        break;
    }
    case 316788:
    {
        returnValue = F("Unterreichenbacher Str.");
        break;
    }
    case 316789:
    {
        returnValue = F("Unterreichenbacher Weg");
        break;
    }
    case 316790:
    {
        returnValue = F("Unterreihe");
        break;
    }
    case 316791:
    {
        returnValue = F("Unterreinshagen");
        break;
    }
    case 316792:
    {
        returnValue = F("Unterreiselberg");
        break;
    }
    case 316793:
    {
        returnValue = F("Unterreiterweg");
        break;
    }
    case 316794:
    {
        returnValue = F("Unterreitnau");
        break;
    }
    case 316795:
    {
        returnValue = F("Unterreitnauer Str.");
        break;
    }
    case 316796:
    {
        returnValue = F("Unterrer Rebruchweg");
        break;
    }
    case 316797:
    {
        returnValue = F("Unterreut");
        break;
    }
    case 316798:
    {
        returnValue = F("Unterreute");
        break;
    }
    case 316799:
    {
        returnValue = F("Unterreußener Str.");
        break;
    }
    case 316800:
    {
        returnValue = F("Unterried");
        break;
    }
    case 316801:
    {
        returnValue = F("Unterrieden");
        break;
    }
    case 316802:
    {
        returnValue = F("Unterriedener Hauptstr.");
        break;
    }
    case 316803:
    {
        returnValue = F("Unterriedstr.");
        break;
    }
    case 316804:
    {
        returnValue = F("Unterriedweg");
        break;
    }
    case 316805:
    {
        returnValue = F("Unterriethstr.");
        break;
    }
    case 316806:
    {
        returnValue = F("Unterriexinger Str.");
        break;
    }
    case 316807:
    {
        returnValue = F("Unterrießstr.");
        break;
    }
    case 316808:
    {
        returnValue = F("Unterringel");
        break;
    }
    case 316809:
    {
        returnValue = F("Unterringstr.");
        break;
    }
    case 316810:
    {
        returnValue = F("Unterrissdorfer Str.");
        break;
    }
    case 316811:
    {
        returnValue = F("Unterrißdorfer Str.");
        break;
    }
    case 316812:
    {
        returnValue = F("Unterrotenstein");
        break;
    }
    case 316813:
    {
        returnValue = F("Unterroter Str.");
        break;
    }
    case 316814:
    {
        returnValue = F("Unterrother Str.");
        break;
    }
    case 316815:
    {
        returnValue = F("Unterrothhof");
        break;
    }
    case 316816:
    {
        returnValue = F("Unterrothof");
        break;
    }
    case 316817:
    {
        returnValue = F("Unterrottmannsdorf");
        break;
    }
    case 316818:
    {
        returnValue = F("Unterrottmannsdorfer Str.");
        break;
    }
    case 316819:
    {
        returnValue = F("Unterrödel A");
        break;
    }
    case 316820:
    {
        returnValue = F("Unterrödel B");
        break;
    }
    case 316821:
    {
        returnValue = F("Unterrödel C");
        break;
    }
    case 316822:
    {
        returnValue = F("Unterrödel D");
        break;
    }
    case 316823:
    {
        returnValue = F("Unterrödel F");
        break;
    }
    case 316824:
    {
        returnValue = F("Unterrödel G");
        break;
    }
    case 316825:
    {
        returnValue = F("Unterröder Weg");
        break;
    }
    case 316826:
    {
        returnValue = F("Unterrückersbach");
        break;
    }
    case 316827:
    {
        returnValue = F("Unterrüsselbach");
        break;
    }
    case 316828:
    {
        returnValue = F("Unters Tor");
        break;
    }
    case 316829:
    {
        returnValue = F("Untersachsenberger Str.");
        break;
    }
    case 316830:
    {
        returnValue = F("Untersalen");
        break;
    }
    case 316831:
    {
        returnValue = F("Untersalhof");
        break;
    }
    case 316832:
    {
        returnValue = F("Untersambacher Str.");
        break;
    }
    case 316833:
    {
        returnValue = F("Untersandstr.");
        break;
    }
    case 316834:
    {
        returnValue = F("Untersberg");
        break;
    }
    case 316835:
    {
        returnValue = F("Untersbergstr.");
        break;
    }
    case 316836:
    {
        returnValue = F("Untersbergweg");
        break;
    }
    case 316837:
    {
        returnValue = F("Unterschafhof");
        break;
    }
    case 316838:
    {
        returnValue = F("Unterschanze");
        break;
    }
    case 316839:
    {
        returnValue = F("Unterscheffacher Str.");
        break;
    }
    case 316840:
    {
        returnValue = F("Unterscheibenrain");
        break;
    }
    case 316841:
    {
        returnValue = F("Unterscheidentaler Str.");
        break;
    }
    case 316842:
    {
        returnValue = F("Unterscheider Weg");
        break;
    }
    case 316843:
    {
        returnValue = F("Unterscheideweg");
        break;
    }
    case 316844:
    {
        returnValue = F("Unterschelmerath");
        break;
    }
    case 316845:
    {
        returnValue = F("Unterschelthof");
        break;
    }
    case 316846:
    {
        returnValue = F("Unterschiedweg");
        break;
    }
    case 316847:
    {
        returnValue = F("Unterschilding");
        break;
    }
    case 316848:
    {
        returnValue = F("Unterschlagweg");
        break;
    }
    case 316849:
    {
        returnValue = F("Unterschlauersbacher Hauptstr.");
        break;
    }
    case 316850:
    {
        returnValue = F("Unterschleuse");
        break;
    }
    case 316851:
    {
        returnValue = F("Unterschlottham");
        break;
    }
    case 316852:
    {
        returnValue = F("Unterschnaitertal");
        break;
    }
    case 316853:
    {
        returnValue = F("Unterschnatterbach");
        break;
    }
    case 316854:
    {
        returnValue = F("Unterschneidhart");
        break;
    }
    case 316855:
    {
        returnValue = F("Unterschnittenkofen");
        break;
    }
    case 316856:
    {
        returnValue = F("Unterschnitzing");
        break;
    }
    case 316857:
    {
        returnValue = F("Unterschoothorst");
        break;
    }
    case 316858:
    {
        returnValue = F("Unterschoren");
        break;
    }
    case 316859:
    {
        returnValue = F("Unterschorn");
        break;
    }
    case 316860:
    {
        returnValue = F("Unterschwaig");
        break;
    }
    case 316861:
    {
        returnValue = F("Unterschwandorf");
        break;
    }
    case 316862:
    {
        returnValue = F("Unterschwappacher Str.");
        break;
    }
    case 316863:
    {
        returnValue = F("Unterschwarzenberg");
        break;
    }
    case 316864:
    {
        returnValue = F("Unterschwarzhalden");
        break;
    }
    case 316865:
    {
        returnValue = F("Unterschweinstiege");
        break;
    }
    case 316866:
    {
        returnValue = F("Unterschweinstiegschneise");
        break;
    }
    case 316867:
    {
        returnValue = F("Unterschwenden");
        break;
    }
    case 316868:
    {
        returnValue = F("Unterschwillacher Str.");
        break;
    }
    case 316869:
    {
        returnValue = F("Unterschwöditz");
        break;
    }
    case 316870:
    {
        returnValue = F("Unterschöbling");
        break;
    }
    case 316871:
    {
        returnValue = F("Unterschöllenbacher Hauptstr.");
        break;
    }
    case 316872:
    {
        returnValue = F("Unterschöllenbacher Str.");
        break;
    }
    case 316873:
    {
        returnValue = F("Unterschömbach");
        break;
    }
    case 316874:
    {
        returnValue = F("Unterschönauer Hauptstr.");
        break;
    }
    case 316875:
    {
        returnValue = F("Unterschönauer Weg");
        break;
    }
    case 316876:
    {
        returnValue = F("Unterschönbach");
        break;
    }
    case 316877:
    {
        returnValue = F("Unterschüpfer Str.");
        break;
    }
    case 316878:
    {
        returnValue = F("Unterseestr.");
        break;
    }
    case 316879:
    {
        returnValue = F("Unterseilberg");
        break;
    }
    case 316880:
    {
        returnValue = F("Unterseite");
        break;
    }
    case 316881:
    {
        returnValue = F("Unterselighof");
        break;
    }
    case 316882:
    {
        returnValue = F("Untersiegenbühl");
        break;
    }
    case 316883:
    {
        returnValue = F("Untersiemauer Str.");
        break;
    }
    case 316884:
    {
        returnValue = F("Untersiffelhofen");
        break;
    }
    case 316885:
    {
        returnValue = F("Untersigginger Str.");
        break;
    }
    case 316886:
    {
        returnValue = F("Untersimboln");
        break;
    }
    case 316887:
    {
        returnValue = F("Untersorghof");
        break;
    }
    case 316888:
    {
        returnValue = F("Unterspechtrain");
        break;
    }
    case 316889:
    {
        returnValue = F("Unterspechtrainer Str.");
        break;
    }
    case 316890:
    {
        returnValue = F("Unterspeltacher Str.");
        break;
    }
    case 316891:
    {
        returnValue = F("Unterspiesheimer Str.");
        break;
    }
    case 316892:
    {
        returnValue = F("Unterspitzackerweg");
        break;
    }
    case 316893:
    {
        returnValue = F("Unterspitzenbacher Str.");
        break;
    }
    case 316894:
    {
        returnValue = F("Unterspredey");
        break;
    }
    case 316895:
    {
        returnValue = F("Unterspring");
        break;
    }
    case 316896:
    {
        returnValue = F("Unterst Alter");
        break;
    }
    case 316897:
    {
        returnValue = F("Unterst Flur");
        break;
    }
    case 316898:
    {
        returnValue = F("Unterstaat");
        break;
    }
    case 316899:
    {
        returnValue = F("Unterstadioner Str.");
        break;
    }
    case 316900:
    {
        returnValue = F("Unterstadt");
        break;
    }
    case 316901:
    {
        returnValue = F("Unterstadtgraben");
        break;
    }
    case 316902:
    {
        returnValue = F("Unterstadtstr.");
        break;
    }
    case 316903:
    {
        returnValue = F("Unterstaigacker");
        break;
    }
    case 316904:
    {
        returnValue = F("Unterstaller Weg");
        break;
    }
    case 316905:
    {
        returnValue = F("Unterstaudham");
        break;
    }
    case 316906:
    {
        returnValue = F("Unterste Bitze");
        break;
    }
    case 316907:
    {
        returnValue = F("Unterste Blum");
        break;
    }
    case 316908:
    {
        returnValue = F("Unterste Diembänken");
        break;
    }
    case 316909:
    {
        returnValue = F("Unterste Dillenberg");
        break;
    }
    case 316910:
    {
        returnValue = F("Unterste Eichen");
        break;
    }
    case 316911:
    {
        returnValue = F("Unterste Eisengasse");
        break;
    }
    case 316912:
    {
        returnValue = F("Unterste Feldgen");
        break;
    }
    case 316913:
    {
        returnValue = F("Unterste Gasse");
        break;
    }
    case 316914:
    {
        returnValue = F("Unterste Hardt");
        break;
    }
    case 316915:
    {
        returnValue = F("Unterste Homberg");
        break;
    }
    case 316916:
    {
        returnValue = F("Unterste Kamp");
        break;
    }
    case 316917:
    {
        returnValue = F("Unterste Mark");
        break;
    }
    case 316918:
    {
        returnValue = F("Unterste Mühle");
        break;
    }
    case 316919:
    {
        returnValue = F("Unterste Sülz");
        break;
    }
    case 316920:
    {
        returnValue = F("Unterste Wiese");
        break;
    }
    case 316921:
    {
        returnValue = F("Unterstedtener Weg");
        break;
    }
    case 316922:
    {
        returnValue = F("Unterstedter Str.");
        break;
    }
    case 316923:
    {
        returnValue = F("Untersteeg");
        break;
    }
    case 316924:
    {
        returnValue = F("Untersteenrade");
        break;
    }
    case 316925:
    {
        returnValue = F("Unterstegle");
        break;
    }
    case 316926:
    {
        returnValue = F("Untersteigweg");
        break;
    }
    case 316927:
    {
        returnValue = F("Untersteinbach");
        break;
    }
    case 316928:
    {
        returnValue = F("Untersteinbach ob Gmünd");
        break;
    }
    case 316929:
    {
        returnValue = F("Untersteinbacher Str.");
        break;
    }
    case 316930:
    {
        returnValue = F("Untersteinbacher Weg");
        break;
    }
    case 316931:
    {
        returnValue = F("Untersteinenfeld");
        break;
    }
    case 316932:
    {
        returnValue = F("Untersteiner Str.");
        break;
    }
    case 316933:
    {
        returnValue = F("Unterstelle");
        break;
    }
    case 316934:
    {
        returnValue = F("Unterstenhof");
        break;
    }
    case 316935:
    {
        returnValue = F("Unterster Bergweg");
        break;
    }
    case 316936:
    {
        returnValue = F("Unterster Garten");
        break;
    }
    case 316937:
    {
        returnValue = F("Unterster Hof");
        break;
    }
    case 316938:
    {
        returnValue = F("Unterster Holzweg");
        break;
    }
    case 316939:
    {
        returnValue = F("Unterster Kamp");
        break;
    }
    case 316940:
    {
        returnValue = F("Unterster Leekenweg");
        break;
    }
    case 316941:
    {
        returnValue = F("Unterster Sechs Morgen Weg");
        break;
    }
    case 316942:
    {
        returnValue = F("Unterster Weg");
        break;
    }
    case 316943:
    {
        returnValue = F("Unterster Zwerchweg");
        break;
    }
    case 316944:
    {
        returnValue = F("Unterstesiefen");
        break;
    }
    case 316945:
    {
        returnValue = F("Unterstkoppel");
        break;
    }
    case 316946:
    {
        returnValue = F("Unterstmatt");
        break;
    }
    case 316947:
    {
        returnValue = F("Unterstork");
        break;
    }
    case 316948:
    {
        returnValue = F("Unterstr.");
        break;
    }
    case 316949:
    {
        returnValue = F("Unterstr. Abberode");
        break;
    }
    case 316950:
    {
        returnValue = F("Unterstr. Tilkerode");
        break;
    }
    case 316951:
    {
        returnValue = F("Unterstrogner Str.");
        break;
    }
    case 316952:
    {
        returnValue = F("Unterstruth");
        break;
    }
    case 316953:
    {
        returnValue = F("Unterstuff");
        break;
    }
    case 316954:
    {
        returnValue = F("Unterstwies");
        break;
    }
    case 316955:
    {
        returnValue = F("Unterstwiese");
        break;
    }
    case 316956:
    {
        returnValue = F("Unterstätter Weg");
        break;
    }
    case 316957:
    {
        returnValue = F("Unterstöcken");
        break;
    }
    case 316958:
    {
        returnValue = F("Unterstützengrüner Grundweg");
        break;
    }
    case 316959:
    {
        returnValue = F("Unterstützengrüner Weg");
        break;
    }
    case 316960:
    {
        returnValue = F("Untersuhler Str.");
        break;
    }
    case 316961:
    {
        returnValue = F("Untersölden");
        break;
    }
    case 316962:
    {
        returnValue = F("Untertal");
        break;
    }
    case 316963:
    {
        returnValue = F("Untertalen");
        break;
    }
    case 316964:
    {
        returnValue = F("Untertalstr.");
        break;
    }
    case 316965:
    {
        returnValue = F("Untertaunusstr.");
        break;
    }
    case 316966:
    {
        returnValue = F("Untertaxetweg");
        break;
    }
    case 316967:
    {
        returnValue = F("Unterthal");
        break;
    }
    case 316968:
    {
        returnValue = F("Unterthalham");
        break;
    }
    case 316969:
    {
        returnValue = F("Unterthingauer Str.");
        break;
    }
    case 316970:
    {
        returnValue = F("Unterthölau");
        break;
    }
    case 316971:
    {
        returnValue = F("Unterthürheimer Str.");
        break;
    }
    case 316972:
    {
        returnValue = F("Untertinsbach");
        break;
    }
    case 316973:
    {
        returnValue = F("Untertinsberger Str.");
        break;
    }
    case 316974:
    {
        returnValue = F("Untertor");
        break;
    }
    case 316975:
    {
        returnValue = F("Untertorgasse");
        break;
    }
    case 316976:
    {
        returnValue = F("Untertorplatz");
        break;
    }
    case 316977:
    {
        returnValue = F("Untertorstr.");
        break;
    }
    case 316978:
    {
        returnValue = F("Untertraubenbach");
        break;
    }
    case 316979:
    {
        returnValue = F("Untertresenfeld");
        break;
    }
    case 316980:
    {
        returnValue = F("Untertresenfelder Str.");
        break;
    }
    case 316981:
    {
        returnValue = F("Untertriebweg");
        break;
    }
    case 316982:
    {
        returnValue = F("Untertrift");
        break;
    }
    case 316983:
    {
        returnValue = F("Untertriftstr.");
        break;
    }
    case 316984:
    {
        returnValue = F("Untertrogen");
        break;
    }
    case 316985:
    {
        returnValue = F("Unterturzer Weg");
        break;
    }
    case 316986:
    {
        returnValue = F("Untertürkheimer Kelterplatz");
        break;
    }
    case 316987:
    {
        returnValue = F("Untertürkheimer Str.");
        break;
    }
    case 316988:
    {
        returnValue = F("Unteruhldinger Str.");
        break;
    }
    case 316989:
    {
        returnValue = F("Unterulrichsberg");
        break;
    }
    case 316990:
    {
        returnValue = F("Unterulsenbach");
        break;
    }
    case 316991:
    {
        returnValue = F("Unterunsbach");
        break;
    }
    case 316992:
    {
        returnValue = F("Unterurbacher Weg");
        break;
    }
    case 316993:
    {
        returnValue = F("Unteruttlau");
        break;
    }
    case 316994:
    {
        returnValue = F("Unterviehhausen");
        break;
    }
    case 316995:
    {
        returnValue = F("Unterviehmoos");
        break;
    }
    case 316996:
    {
        returnValue = F("Untervogtplatz");
        break;
    }
    case 316997:
    {
        returnValue = F("Untervorstadtstr.");
        break;
    }
    case 316998:
    {
        returnValue = F("Unterwachsenberg");
        break;
    }
    case 316999:
    {
        returnValue = F("Unterwald");
        break;
    }
    case 317000:
    {
        returnValue = F("Unterwaldener Str.");
        break;
    }
    case 317001:
    {
        returnValue = F("Unterwaldenstr.");
        break;
    }
    case 317002:
    {
        returnValue = F("Unterwaldhauser Str.");
        break;
    }
    case 317003:
    {
        returnValue = F("Unterwaldhauser Weg");
        break;
    }
    case 317004:
    {
        returnValue = F("Unterwaldschneise");
        break;
    }
    case 317005:
    {
        returnValue = F("Unterwaldweg");
        break;
    }
    case 317006:
    {
        returnValue = F("Unterwall");
        break;
    }
    case 317007:
    {
        returnValue = F("Unterwallenstadter Weg");
        break;
    }
    case 317008:
    {
        returnValue = F("Unterwallstr.");
        break;
    }
    case 317009:
    {
        returnValue = F("Unterwallweg");
        break;
    }
    case 317010:
    {
        returnValue = F("Unterwangenbacher Str.");
        break;
    }
    case 317011:
    {
        returnValue = F("Unterwasser");
        break;
    }
    case 317012:
    {
        returnValue = F("Unterweg");
        break;
    }
    case 317013:
    {
        returnValue = F("Unterwegsgasse");
        break;
    }
    case 317014:
    {
        returnValue = F("Unterwegswiesenstr.");
        break;
    }
    case 317015:
    {
        returnValue = F("Unterweide");
        break;
    }
    case 317016:
    {
        returnValue = F("Unterweiden");
        break;
    }
    case 317017:
    {
        returnValue = F("Unterweidener Str.");
        break;
    }
    case 317018:
    {
        returnValue = F("Unterweidener Weg");
        break;
    }
    case 317019:
    {
        returnValue = F("Unterweigendorfer Str.");
        break;
    }
    case 317020:
    {
        returnValue = F("Unterweiler");
        break;
    }
    case 317021:
    {
        returnValue = F("Unterweiler Str.");
        break;
    }
    case 317022:
    {
        returnValue = F("Unterweilerer Weg");
        break;
    }
    case 317023:
    {
        returnValue = F("Unterweilerstr.");
        break;
    }
    case 317024:
    {
        returnValue = F("Unterweingartenfeld");
        break;
    }
    case 317025:
    {
        returnValue = F("Unterweisenborn");
        break;
    }
    case 317026:
    {
        returnValue = F("Unterweissacher Str.");
        break;
    }
    case 317027:
    {
        returnValue = F("Unterweißenbach");
        break;
    }
    case 317028:
    {
        returnValue = F("Unterweißenbacher Weg");
        break;
    }
    case 317029:
    {
        returnValue = F("Unterwellenborner Str.");
        break;
    }
    case 317030:
    {
        returnValue = F("Unterwendelsheim");
        break;
    }
    case 317031:
    {
        returnValue = F("Unterweng");
        break;
    }
    case 317032:
    {
        returnValue = F("Unterwengen");
        break;
    }
    case 317033:
    {
        returnValue = F("Unterwerkstr.");
        break;
    }
    case 317034:
    {
        returnValue = F("Unterweschnegg");
        break;
    }
    case 317035:
    {
        returnValue = F("Unterwesthausen");
        break;
    }
    case 317036:
    {
        returnValue = F("Unterwestrich");
        break;
    }
    case 317037:
    {
        returnValue = F("Unterwestrich (neu)");
        break;
    }
    case 317038:
    {
        returnValue = F("Unterwiesen");
        break;
    }
    case 317039:
    {
        returnValue = F("Unterwiesenbacher Str.");
        break;
    }
    case 317040:
    {
        returnValue = F("Unterwiesenweg");
        break;
    }
    case 317041:
    {
        returnValue = F("Unterwildenau");
        break;
    }
    case 317042:
    {
        returnValue = F("Unterwilflinger Str.");
        break;
    }
    case 317043:
    {
        returnValue = F("Unterwilzinger Str.");
        break;
    }
    case 317044:
    {
        returnValue = F("Unterwilzinger Weg");
        break;
    }
    case 317045:
    {
        returnValue = F("Unterwimpersing");
        break;
    }
    case 317046:
    {
        returnValue = F("Unterwindering");
        break;
    }
    case 317047:
    {
        returnValue = F("Unterwindsberg");
        break;
    }
    case 317048:
    {
        returnValue = F("Unterwinkel");
        break;
    }
    case 317049:
    {
        returnValue = F("Unterwinkelhausen");
        break;
    }
    case 317050:
    {
        returnValue = F("Unterwinkelhausener Str.");
        break;
    }
    case 317051:
    {
        returnValue = F("Unterwinn");
        break;
    }
    case 317052:
    {
        returnValue = F("Unterwirbacher Str.");
        break;
    }
    case 317053:
    {
        returnValue = F("Unterwirtsstr.");
        break;
    }
    case 317054:
    {
        returnValue = F("Unterwirtstr.");
        break;
    }
    case 317055:
    {
        returnValue = F("Unterwittbacher Str.");
        break;
    }
    case 317056:
    {
        returnValue = F("Unterwolkersdorf");
        break;
    }
    case 317057:
    {
        returnValue = F("Unterworbscheid");
        break;
    }
    case 317058:
    {
        returnValue = F("Unterwässer");
        break;
    }
    case 317059:
    {
        returnValue = F("Unterwässerweg");
        break;
    }
    case 317060:
    {
        returnValue = F("Unterwöhrd");
        break;
    }
    case 317061:
    {
        returnValue = F("Unterwöhrlehofweg");
        break;
    }
    case 317062:
    {
        returnValue = F("Unterwörthstr.");
        break;
    }
    case 317063:
    {
        returnValue = F("Unterwörthweg");
        break;
    }
    case 317064:
    {
        returnValue = F("Unterwürschnitzer Str.");
        break;
    }
    case 317065:
    {
        returnValue = F("Unterwürschnitzer Weg");
        break;
    }
    case 317066:
    {
        returnValue = F("Unterzaunsbach");
        break;
    }
    case 317067:
    {
        returnValue = F("Unterzaunstr.");
        break;
    }
    case 317068:
    {
        returnValue = F("Unterzeche");
        break;
    }
    case 317069:
    {
        returnValue = F("Unterzeiler Weg");
        break;
    }
    case 317070:
    {
        returnValue = F("Unterzella");
        break;
    }
    case 317071:
    {
        returnValue = F("Unterzeller Str.");
        break;
    }
    case 317072:
    {
        returnValue = F("Unterzeller Weg");
        break;
    }
    case 317073:
    {
        returnValue = F("Unterzeppenwies");
        break;
    }
    case 317074:
    {
        returnValue = F("Unterzettlitz");
        break;
    }
    case 317075:
    {
        returnValue = F("Unterzettlitzer Str.");
        break;
    }
    case 317076:
    {
        returnValue = F("Unterämtersträßchen");
        break;
    }
    case 317077:
    {
        returnValue = F("Unteröd i.Ilztal");
        break;
    }
    case 317078:
    {
        returnValue = F("Unteröd im Ilztal");
        break;
    }
    case 317079:
    {
        returnValue = F("Unteröderich");
        break;
    }
    case 317080:
    {
        returnValue = F("Unterölbach");
        break;
    }
    case 317081:
    {
        returnValue = F("Unterölschnitz");
        break;
    }
    case 317082:
    {
        returnValue = F("Unterösch");
        break;
    }
    case 317083:
    {
        returnValue = F("Unteröwisheimer Str.");
        break;
    }
    case 317084:
    {
        returnValue = F("Unteses Endbergsträsschen");
        break;
    }
    case 317085:
    {
        returnValue = F("Unthofstr.");
        break;
    }
    case 317086:
    {
        returnValue = F("Untietheide");
        break;
    }
    case 317087:
    {
        returnValue = F("Untig Mühl");
        break;
    }
    case 317088:
    {
        returnValue = F("Untitz");
        break;
    }
    case 317089:
    {
        returnValue = F("Untitzer Str.");
        break;
    }
    case 317090:
    {
        returnValue = F("Untkenbeeke");
        break;
    }
    case 317091:
    {
        returnValue = F("Untkenstr.");
        break;
    }
    case 317092:
    {
        returnValue = F("Untragestrecke");
        break;
    }
    case 317093:
    {
        returnValue = F("Untreuhauweg");
        break;
    }
    case 317094:
    {
        returnValue = F("Untschener Str.");
        break;
    }
    case 317095:
    {
        returnValue = F("Untuchtstr.");
        break;
    }
    case 317096:
    {
        returnValue = F("Unverdorbenweg");
        break;
    }
    case 317097:
    {
        returnValue = F("Unverhaustr.");
        break;
    }
    case 317098:
    {
        returnValue = F("Unverhofft");
        break;
    }
    case 317099:
    {
        returnValue = F("Unverhofft Glück");
        break;
    }
    case 317100:
    {
        returnValue = F("Unverhofftstr.");
        break;
    }
    case 317101:
    {
        returnValue = F("Unverzagt Nord");
        break;
    }
    case 317102:
    {
        returnValue = F("Unverzagtweg");
        break;
    }
    case 317103:
    {
        returnValue = F("Unwert");
        break;
    }
    case 317104:
    {
        returnValue = F("Unwerte");
        break;
    }
    case 317105:
    {
        returnValue = F("Unzhurster Str.");
        break;
    }
    case 317106:
    {
        returnValue = F("Up 'm Mersk");
        break;
    }
    case 317107:
    {
        returnValue = F("Up Achterdeck");
        break;
    }
    case 317108:
    {
        returnValue = F("Up Beckmanns Felle");
        break;
    }
    case 317109:
    {
        returnValue = F("Up Börs");
        break;
    }
    case 317110:
    {
        returnValue = F("Up De Warf");
        break;
    }
    case 317111:
    {
        returnValue = F("Up Dei Laoge");
        break;
    }
    case 317112:
    {
        returnValue = F("Up Dei Weusten");
        break;
    }
    case 317113:
    {
        returnValue = F("Up Delling");
        break;
    }
    case 317114:
    {
        returnValue = F("Up Diek");
        break;
    }
    case 317115:
    {
        returnValue = F("Up Höcht");
        break;
    }
    case 317116:
    {
        returnValue = F("Up Höchte");
        break;
    }
    case 317117:
    {
        returnValue = F("Up Schloot");
        break;
    }
    case 317118:
    {
        returnValue = F("Up Süderdün");
        break;
    }
    case 317119:
    {
        returnValue = F("Up Ver");
        break;
    }
    case 317120:
    {
        returnValue = F("Up Widder");
        break;
    }
    case 317121:
    {
        returnValue = F("Up Willmannsland");
        break;
    }
    case 317122:
    {
        returnValue = F("Up de Ahuus");
        break;
    }
    case 317123:
    {
        returnValue = F("Up de Barg");
        break;
    }
    case 317124:
    {
        returnValue = F("Up de Bookholt");
        break;
    }
    case 317125:
    {
        returnValue = F("Up de Brak");
        break;
    }
    case 317126:
    {
        returnValue = F("Up de Bree");
        break;
    }
    case 317127:
    {
        returnValue = F("Up de Breede");
        break;
    }
    case 317128:
    {
        returnValue = F("Up de Breen");
        break;
    }
    case 317129:
    {
        returnValue = F("Up de Brügg");
        break;
    }
    case 317130:
    {
        returnValue = F("Up de Bult");
        break;
    }
    case 317131:
    {
        returnValue = F("Up de Deipe");
        break;
    }
    case 317132:
    {
        returnValue = F("Up de Dohre");
        break;
    }
    case 317133:
    {
        returnValue = F("Up de Dünen");
        break;
    }
    case 317134:
    {
        returnValue = F("Up de Esch");
        break;
    }
    case 317135:
    {
        returnValue = F("Up de Gadde");
        break;
    }
    case 317136:
    {
        returnValue = F("Up de Gast");
        break;
    }
    case 317137:
    {
        returnValue = F("Up de Gehre");
        break;
    }
    case 317138:
    {
        returnValue = F("Up de Geist");
        break;
    }
    case 317139:
    {
        returnValue = F("Up de Golfplatz");
        break;
    }
    case 317140:
    {
        returnValue = F("Up de Haar");
        break;
    }
    case 317141:
    {
        returnValue = F("Up de Haare");
        break;
    }
    case 317142:
    {
        returnValue = F("Up de Hacke");
        break;
    }
    case 317143:
    {
        returnValue = F("Up de Hee");
        break;
    }
    case 317144:
    {
        returnValue = F("Up de Heede");
        break;
    }
    case 317145:
    {
        returnValue = F("Up de Heid");
        break;
    }
    case 317146:
    {
        returnValue = F("Up de Heide");
        break;
    }
    case 317147:
    {
        returnValue = F("Up de Hilgenhaar");
        break;
    }
    case 317148:
    {
        returnValue = F("Up de Hoofe");
        break;
    }
    case 317149:
    {
        returnValue = F("Up de Hoss");
        break;
    }
    case 317150:
    {
        returnValue = F("Up de Häuchte");
        break;
    }
    case 317151:
    {
        returnValue = F("Up de Höchde");
        break;
    }
    case 317152:
    {
        returnValue = F("Up de Höcht");
        break;
    }
    case 317153:
    {
        returnValue = F("Up de Höchte");
        break;
    }
    case 317154:
    {
        returnValue = F("Up de Höh");
        break;
    }
    case 317155:
    {
        returnValue = F("Up de Kiekeberg");
        break;
    }
    case 317156:
    {
        returnValue = F("Up de Koppel");
        break;
    }
    case 317157:
    {
        returnValue = F("Up de Lauge");
        break;
    }
    case 317158:
    {
        returnValue = F("Up de Linnen");
        break;
    }
    case 317159:
    {
        returnValue = F("Up de Loh");
        break;
    }
    case 317160:
    {
        returnValue = F("Up de Loog");
        break;
    }
    case 317161:
    {
        returnValue = F("Up de Lüchten");
        break;
    }
    case 317162:
    {
        returnValue = F("Up de Nebberee");
        break;
    }
    case 317163:
    {
        returnValue = F("Up de Neddeln");
        break;
    }
    case 317164:
    {
        returnValue = F("Up de Ring");
        break;
    }
    case 317165:
    {
        returnValue = F("Up de Roddick");
        break;
    }
    case 317166:
    {
        returnValue = F("Up de Ruer");
        break;
    }
    case 317167:
    {
        returnValue = F("Up de Schnur");
        break;
    }
    case 317168:
    {
        returnValue = F("Up de Vorburg");
        break;
    }
    case 317169:
    {
        returnValue = F("Up de Welle");
        break;
    }
    case 317170:
    {
        returnValue = F("Up de Wenge");
        break;
    }
    case 317171:
    {
        returnValue = F("Up de Woorden");
        break;
    }
    case 317172:
    {
        returnValue = F("Up de Woort");
        break;
    }
    case 317173:
    {
        returnValue = F("Up de Woote");
        break;
    }
    case 317174:
    {
        returnValue = F("Up de Worte");
        break;
    }
    case 317175:
    {
        returnValue = F("Up de Worth");
        break;
    }
    case 317176:
    {
        returnValue = F("Up de Wör");
        break;
    }
    case 317177:
    {
        returnValue = F("Up de Wührden");
        break;
    }
    case 317178:
    {
        returnValue = F("Up de Zaasterwisch");
        break;
    }
    case 317179:
    {
        returnValue = F("Up de hoge Luft");
        break;
    }
    case 317180:
    {
        returnValue = F("Up dem Euwer");
        break;
    }
    case 317181:
    {
        returnValue = F("Up den Barg");
        break;
    }
    case 317182:
    {
        returnValue = F("Up den Brand");
        break;
    }
    case 317183:
    {
        returnValue = F("Up den Kamp");
        break;
    }
    case 317184:
    {
        returnValue = F("Up den Lieth");
        break;
    }
    case 317185:
    {
        returnValue = F("Up den Pahl");
        break;
    }
    case 317186:
    {
        returnValue = F("Up'm Barg");
        break;
    }
    case 317187:
    {
        returnValue = F("Up'm Blaiken");
        break;
    }
    case 317188:
    {
        returnValue = F("Up'm Hoff");
        break;
    }
    case 317189:
    {
        returnValue = F("Up'm Höwel");
        break;
    }
    case 317190:
    {
        returnValue = F("Up'm Knapp");
        break;
    }
    case 317191:
    {
        returnValue = F("Up'm Schierenbrink");
        break;
    }
    case 317192:
    {
        returnValue = F("Up'me Auger");
        break;
    }
    case 317193:
    {
        returnValue = F("Up'n Ackern");
        break;
    }
    case 317194:
    {
        returnValue = F("Up'n Anhalt");
        break;
    }
    case 317195:
    {
        returnValue = F("Up'n Barg");
        break;
    }
    case 317196:
    {
        returnValue = F("Up'n Brink");
        break;
    }
    case 317197:
    {
        returnValue = F("Up'n Böhl");
        break;
    }
    case 317198:
    {
        returnValue = F("Up'n Bülten");
        break;
    }
    case 317199:
    {
        returnValue = F("Up'n Damme");
        break;
    }
    case 317200:
    {
        returnValue = F("Up'n Dauden");
        break;
    }
    case 317201:
    {
        returnValue = F("Up'n Dieck");
        break;
    }
    case 317202:
    {
        returnValue = F("Up'n Diek");
        break;
    }
    case 317203:
    {
        returnValue = F("Up'n Drösch");
        break;
    }
    case 317204:
    {
        returnValue = F("Up'n Eckernworth");
        break;
    }
    case 317205:
    {
        returnValue = F("Up'n Eschke");
        break;
    }
    case 317206:
    {
        returnValue = F("Up'n Feld");
        break;
    }
    case 317207:
    {
        returnValue = F("Up'n Felde");
        break;
    }
    case 317208:
    {
        returnValue = F("Up'n Hoff");
        break;
    }
    case 317209:
    {
        returnValue = F("Up'n Holte");
        break;
    }
    case 317210:
    {
        returnValue = F("Up'n Horn");
        break;
    }
    case 317211:
    {
        returnValue = F("Up'n Kamp");
        break;
    }
    case 317212:
    {
        returnValue = F("Up'n Kiesbarg");
        break;
    }
    case 317213:
    {
        returnValue = F("Up'n Kiwitt");
        break;
    }
    case 317214:
    {
        returnValue = F("Up'n Knust");
        break;
    }
    case 317215:
    {
        returnValue = F("Up'n Koeppen");
        break;
    }
    case 317216:
    {
        returnValue = F("Up'n Nien Esch");
        break;
    }
    case 317217:
    {
        returnValue = F("Up'n Pott");
        break;
    }
    case 317218:
    {
        returnValue = F("Up'n Riegen");
        break;
    }
    case 317219:
    {
        returnValue = F("Up'n Ruhm");
        break;
    }
    case 317220:
    {
        returnValue = F("Up'n Saal");
        break;
    }
    case 317221:
    {
        returnValue = F("Up'n Sand");
        break;
    }
    case 317222:
    {
        returnValue = F("Up'n Sande");
        break;
    }
    case 317223:
    {
        returnValue = F("Up'n Schild");
        break;
    }
    case 317224:
    {
        returnValue = F("Up'n Sondern");
        break;
    }
    case 317225:
    {
        returnValue = F("Up'n Tummel");
        break;
    }
    case 317226:
    {
        returnValue = F("Up'n Wall");
        break;
    }
    case 317227:
    {
        returnValue = F("Up'n Äckern");
        break;
    }
    case 317228:
    {
        returnValue = F("Up't Hooge");
        break;
    }
    case 317229:
    {
        returnValue = F("Up't Sandhöcht");
        break;
    }
    case 317230:
    {
        returnValue = F("Upatel");
        break;
    }
    case 317231:
    {
        returnValue = F("Upberg");
        break;
    }
    case 317232:
    {
        returnValue = F("Updorfer Str.");
        break;
    }
    case 317233:
    {
        returnValue = F("Upe Huslün");
        break;
    }
    case 317234:
    {
        returnValue = F("Upen Plass");
        break;
    }
    case 317235:
    {
        returnValue = F("Upender Str.");
        break;
    }
    case 317236:
    {
        returnValue = F("Upfeldweg");
        break;
    }
    case 317237:
    {
        returnValue = F("Upfinger Steige");
        break;
    }
    case 317238:
    {
        returnValue = F("Upfinger Str.");
        break;
    }
    case 317239:
    {
        returnValue = F("Upgangen");
        break;
    }
    case 317240:
    {
        returnValue = F("Upganter Meedeweg");
        break;
    }
    case 317241:
    {
        returnValue = F("Upganter Str.");
        break;
    }
    case 317242:
    {
        returnValue = F("Uphausener Str.");
        break;
    }
    case 317243:
    {
        returnValue = F("Uphauser Weg");
        break;
    }
    case 317244:
    {
        returnValue = F("Upheider Weg");
        break;
    }
    case 317245:
    {
        returnValue = F("Uphill Cube Rocks");
        break;
    }
    case 317246:
    {
        returnValue = F("Uphof");
        break;
    }
    case 317247:
    {
        returnValue = F("Uphoff");
        break;
    }
    case 317248:
    {
        returnValue = F("Uphoffstiege");
        break;
    }
    case 317249:
    {
        returnValue = F("Uphoffstr.");
        break;
    }
    case 317250:
    {
        returnValue = F("Uphofstr.");
        break;
    }
    case 317251:
    {
        returnValue = F("Uphok");
        break;
    }
    case 317252:
    {
        returnValue = F("Upholmdeich");
        break;
    }
    case 317253:
    {
        returnValue = F("Upholmstr.");
        break;
    }
    case 317254:
    {
        returnValue = F("Upholzweg");
        break;
    }
    case 317255:
    {
        returnValue = F("Uphovener Weg");
        break;
    }
    case 317256:
    {
        returnValue = F("Uphuesstr.");
        break;
    }
    case 317257:
    {
        returnValue = F("Uphusen");
        break;
    }
    case 317258:
    {
        returnValue = F("Uphusener Str.");
        break;
    }
    case 317259:
    {
        returnValue = F("Uphuser Heerstr.");
        break;
    }
    case 317260:
    {
        returnValue = F("Uphuser Hörn");
        break;
    }
    case 317261:
    {
        returnValue = F("Uphuser Str.");
        break;
    }
    case 317262:
    {
        returnValue = F("Uplandstr.");
        break;
    }
    case 317263:
    {
        returnValue = F("Uplandweg");
        break;
    }
    case 317264:
    {
        returnValue = F("Uplengener Str.");
        break;
    }
    case 317265:
    {
        returnValue = F("Uplewarder Landstr.");
        break;
    }
    case 317266:
    {
        returnValue = F("Uplewarder Reihe");
        break;
    }
    case 317267:
    {
        returnValue = F("Uplewarder Ring");
        break;
    }
    case 317268:
    {
        returnValue = F("Upländer Str.");
        break;
    }
    case 317269:
    {
        returnValue = F("Upm Brauke");
        break;
    }
    case 317270:
    {
        returnValue = F("Upmannstr.");
        break;
    }
    case 317271:
    {
        returnValue = F("Upmeiers Grund");
        break;
    }
    case 317272:
    {
        returnValue = F("Upmeyers Weg");
        break;
    }
    case 317273:
    {
        returnValue = F("Upn Felden");
        break;
    }
    case 317274:
    {
        returnValue = F("Upn Heidbarg");
        break;
    }
    case 317275:
    {
        returnValue = F("Upn Hoff");
        break;
    }
    case 317276:
    {
        returnValue = F("Upn Howe");
        break;
    }
    case 317277:
    {
        returnValue = F("Upn Höft");
        break;
    }
    case 317278:
    {
        returnValue = F("Upn Kampe");
        break;
    }
    case 317279:
    {
        returnValue = F("Upn Sünner");
        break;
    }
    case 317280:
    {
        returnValue = F("Upost");
        break;
    }
    case 317281:
    {
        returnValue = F("Upp'n Barg");
        break;
    }
    case 317282:
    {
        returnValue = F("Upp'n Hoff");
        break;
    }
    case 317283:
    {
        returnValue = F("Upp'n Kamp");
        break;
    }
    case 317284:
    {
        returnValue = F("Upp'n Kiel");
        break;
    }
    case 317285:
    {
        returnValue = F("Uppe Angst");
        break;
    }
    case 317286:
    {
        returnValue = F("Uppe Höchte");
        break;
    }
    case 317287:
    {
        returnValue = F("Uppen Barg");
        break;
    }
    case 317288:
    {
        returnValue = F("Uppen Brinke");
        break;
    }
    case 317289:
    {
        returnValue = F("Uppen Drohm");
        break;
    }
    case 317290:
    {
        returnValue = F("Uppen Seebargen");
        break;
    }
    case 317291:
    {
        returnValue = F("Uppenbergstr.");
        break;
    }
    case 317292:
    {
        returnValue = F("Uppenborger Weg");
        break;
    }
    case 317293:
    {
        returnValue = F("Uppenbornstr.");
        break;
    }
    case 317294:
    {
        returnValue = F("Uppenbornwerkstr.");
        break;
    }
    case 317295:
    {
        returnValue = F("Uppener Paß");
        break;
    }
    case 317296:
    {
        returnValue = F("Uppenkamp");
        break;
    }
    case 317297:
    {
        returnValue = F("Uppenkampstiege");
        break;
    }
    case 317298:
    {
        returnValue = F("Uppentalstr.");
        break;
    }
    case 317299:
    {
        returnValue = F("Upper Borg");
        break;
    }
    case 317300:
    {
        returnValue = F("Upper Venhof");
        break;
    }
    case 317301:
    {
        returnValue = F("Uppersberg");
        break;
    }
    case 317302:
    {
        returnValue = F("Uppsprunger Str.");
        break;
    }
    case 317303:
    {
        returnValue = F("Uppstall");
        break;
    }
    case 317304:
    {
        returnValue = F("Uppstallweg");
        break;
    }
    case 317305:
    {
        returnValue = F("Uprode");
        break;
    }
    case 317306:
    {
        returnValue = F("Upsalastr.");
        break;
    }
    case 317307:
    {
        returnValue = F("Upschloot Moorweg");
        break;
    }
    case 317308:
    {
        returnValue = F("Upschottenweg");
        break;
    }
    case 317309:
    {
        returnValue = F("Upschörter Moorweg");
        break;
    }
    case 317310:
    {
        returnValue = F("Upschörter Str.");
        break;
    }
    case 317311:
    {
        returnValue = F("Upsprunger Str.");
        break;
    }
    case 317312:
    {
        returnValue = F("Upsprunger Weg");
        break;
    }
    case 317313:
    {
        returnValue = F("Upstall");
        break;
    }
    case 317314:
    {
        returnValue = F("Upstallstr.");
        break;
    }
    case 317315:
    {
        returnValue = F("Upstallweg");
        break;
    }
    case 317316:
    {
        returnValue = F("Upstalsboom");
        break;
    }
    case 317317:
    {
        returnValue = F("Upstalsboomstr.");
        break;
    }
    case 317318:
    {
        returnValue = F("Upsteder Str.");
        break;
    }
    case 317319:
    {
        returnValue = F("Upstedter Str.");
        break;
    }
    case 317320:
    {
        returnValue = F("Upstreek");
        break;
    }
    case 317321:
    {
        returnValue = F("Upt Gast");
        break;
    }
    case 317322:
    {
        returnValue = F("Upt Gorn");
        break;
    }
    case 317323:
    {
        returnValue = F("Uptalweg");
        break;
    }
    case 317324:
    {
        returnValue = F("Uptmoors Mühle");
        break;
    }
    case 317325:
    {
        returnValue = F("Uptruper Weg");
        break;
    }
    case 317326:
    {
        returnValue = F("Upundalsprung");
        break;
    }
    case 317327:
    {
        returnValue = F("Upwiesenweg");
        break;
    }
    case 317328:
    {
        returnValue = F("Up´n Hoff");
        break;
    }
    case 317329:
    {
        returnValue = F("Up´n Kampe");
        break;
    }
    case 317330:
    {
        returnValue = F("Up’n Rao");
        break;
    }
    case 317331:
    {
        returnValue = F("Up’n Sünnern");
        break;
    }
    case 317332:
    {
        returnValue = F("Up’n Warnowsand");
        break;
    }
    case 317333:
    {
        returnValue = F("Uracher Str.");
        break;
    }
    case 317334:
    {
        returnValue = F("Uracher Weg");
        break;
    }
    case 317335:
    {
        returnValue = F("Urachplatz");
        break;
    }
    case 317336:
    {
        returnValue = F("Urachstr.");
        break;
    }
    case 317337:
    {
        returnValue = F("Urachtalstr.");
        break;
    }
    case 317338:
    {
        returnValue = F("Urachweg");
        break;
    }
    case 317339:
    {
        returnValue = F("Urania-Weg");
        break;
    }
    case 317340:
    {
        returnValue = F("Uraniastr.");
        break;
    }
    case 317341:
    {
        returnValue = F("Uranstr.");
        break;
    }
    case 317342:
    {
        returnValue = F("Uranus");
        break;
    }
    case 317343:
    {
        returnValue = F("Uranusbogen");
        break;
    }
    case 317344:
    {
        returnValue = F("Uranushof");
        break;
    }
    case 317345:
    {
        returnValue = F("Uranusring");
        break;
    }
    case 317346:
    {
        returnValue = F("Uranusstr.");
        break;
    }
    case 317347:
    {
        returnValue = F("Uranusweg");
        break;
    }
    case 317348:
    {
        returnValue = F("Uranweg");
        break;
    }
    case 317349:
    {
        returnValue = F("Urbach-Viadukt");
        break;
    }
    case 317350:
    {
        returnValue = F("Urbacher Str.");
        break;
    }
    case 317351:
    {
        returnValue = F("Urbacher Weg");
        break;
    }
    case 317352:
    {
        returnValue = F("Urbachfeld");
        break;
    }
    case 317353:
    {
        returnValue = F("Urbachstr.");
        break;
    }
    case 317354:
    {
        returnValue = F("Urbachweg");
        break;
    }
    case 317355:
    {
        returnValue = F("Urban Green");
        break;
    }
    case 317356:
    {
        returnValue = F("Urban-Grießer-Str.");
        break;
    }
    case 317357:
    {
        returnValue = F("Urban-Lidl-Weg");
        break;
    }
    case 317358:
    {
        returnValue = F("Urban-Lützeler-Str.");
        break;
    }
    case 317359:
    {
        returnValue = F("Urban-Schätzl-Str.");
        break;
    }
    case 317360:
    {
        returnValue = F("Urban-Ströbele-Str.");
        break;
    }
    case 317361:
    {
        returnValue = F("Urbangasse");
        break;
    }
    case 317362:
    {
        returnValue = F("Urbanistr.");
        break;
    }
    case 317363:
    {
        returnValue = F("Urbannstr.");
        break;
    }
    case 317364:
    {
        returnValue = F("Urbansberg");
        break;
    }
    case 317365:
    {
        returnValue = F("Urbansbrüderstr.");
        break;
    }
    case 317366:
    {
        returnValue = F("Urbansplatz");
        break;
    }
    case 317367:
    {
        returnValue = F("Urbanstaffel");
        break;
    }
    case 317368:
    {
        returnValue = F("Urbansteig");
        break;
    }
    case 317369:
    {
        returnValue = F("Urbanstieg");
        break;
    }
    case 317370:
    {
        returnValue = F("Urbanstr.");
        break;
    }
    case 317371:
    {
        returnValue = F("Urbansweg");
        break;
    }
    case 317372:
    {
        returnValue = F("Urbanusgründelweg");
        break;
    }
    case 317373:
    {
        returnValue = F("Urbanusplatz");
        break;
    }
    case 317374:
    {
        returnValue = F("Urbanusring");
        break;
    }
    case 317375:
    {
        returnValue = F("Urbanusstiege");
        break;
    }
    case 317376:
    {
        returnValue = F("Urbanusstr.");
        break;
    }
    case 317377:
    {
        returnValue = F("Urbanusweg");
        break;
    }
    case 317378:
    {
        returnValue = F("Urbanweg");
        break;
    }
    case 317379:
    {
        returnValue = F("Urbarer Ellig");
        break;
    }
    case 317380:
    {
        returnValue = F("Urbarer Str.");
        break;
    }
    case 317381:
    {
        returnValue = F("Urbecker Str.");
        break;
    }
    case 317382:
    {
        returnValue = F("Urbenthal");
        break;
    }
    case 317383:
    {
        returnValue = F("Urber Weg");
        break;
    }
    case 317384:
    {
        returnValue = F("Urberacher Str.");
        break;
    }
    case 317385:
    {
        returnValue = F("Urberacher Weg");
        break;
    }
    case 317386:
    {
        returnValue = F("Urberg");
        break;
    }
    case 317387:
    {
        returnValue = F("Urbergweg");
        break;
    }
    case 317388:
    {
        returnValue = F("Urberlweg");
        break;
    }
    case 317389:
    {
        returnValue = F("Urbesweg");
        break;
    }
    case 317390:
    {
        returnValue = F("Urbetalweg");
        break;
    }
    case 317391:
    {
        returnValue = F("Urbethstr.");
        break;
    }
    case 317392:
    {
        returnValue = F("Urbicher Anger");
        break;
    }
    case 317393:
    {
        returnValue = F("Urbicher Weg");
        break;
    }
    case 317394:
    {
        returnValue = F("Urbismahd");
        break;
    }
    case 317395:
    {
        returnValue = F("Urbornweg");
        break;
    }
    case 317396:
    {
        returnValue = F("Urbrecherweg");
        break;
    }
    case 317397:
    {
        returnValue = F("Urbühl");
        break;
    }
    case 317398:
    {
        returnValue = F("Urdenbacher Acker");
        break;
    }
    case 317399:
    {
        returnValue = F("Urdenbacher Allee");
        break;
    }
    case 317400:
    {
        returnValue = F("Urdenbacher Dorfstr.");
        break;
    }
    case 317401:
    {
        returnValue = F("Urdenbacher Str.");
        break;
    }
    case 317402:
    {
        returnValue = F("Urdenbacher Weg");
        break;
    }
    case 317403:
    {
        returnValue = F("Urdonautal");
        break;
    }
    case 317404:
    {
        returnValue = F("Urdonautalsteig");
        break;
    }
    case 317405:
    {
        returnValue = F("Urdonautalweg");
        break;
    }
    case 317406:
    {
        returnValue = F("Urdonauweg");
        break;
    }
    case 317407:
    {
        returnValue = F("Urdorfer Weg");
        break;
    }
    case 317408:
    {
        returnValue = F("Urdorfstr.");
        break;
    }
    case 317409:
    {
        returnValue = F("Urdweg");
        break;
    }
    case 317410:
    {
        returnValue = F("Urenbachstr.");
        break;
    }
    case 317411:
    {
        returnValue = F("Urenberg");
        break;
    }
    case 317412:
    {
        returnValue = F("Urengartensträßle");
        break;
    }
    case 317413:
    {
        returnValue = F("Urentalstr.");
        break;
    }
    case 317414:
    {
        returnValue = F("Urexweilerstr.");
        break;
    }
    case 317415:
    {
        returnValue = F("Urexweilerweg");
        break;
    }
    case 317416:
    {
        returnValue = F("Urfahrner Weg");
        break;
    }
    case 317417:
    {
        returnValue = F("Urfahrnstr.");
        break;
    }
    case 317418:
    {
        returnValue = F("Urfelder Str.");
        break;
    }
    case 317419:
    {
        returnValue = F("Urfersheimer Str.");
        break;
    }
    case 317420:
    {
        returnValue = F("Urferweg");
        break;
    }
    case 317421:
    {
        returnValue = F("Urfey");
        break;
    }
    case 317422:
    {
        returnValue = F("Urfeyer Str.");
        break;
    }
    case 317423:
    {
        returnValue = F("Urfeystr.");
        break;
    }
    case 317424:
    {
        returnValue = F("Urffstr.");
        break;
    }
    case 317425:
    {
        returnValue = F("Urffweg");
        break;
    }
    case 317426:
    {
        returnValue = F("Urftseestr.");
        break;
    }
    case 317427:
    {
        returnValue = F("Urftstr.");
        break;
    }
    case 317428:
    {
        returnValue = F("Urfttalsperre");
        break;
    }
    case 317429:
    {
        returnValue = F("Urfttalstr.");
        break;
    }
    case 317430:
    {
        returnValue = F("Urgang");
        break;
    }
    case 317431:
    {
        returnValue = F("Urgasse");
        break;
    }
    case 317432:
    {
        returnValue = F("Urgrabenstr.");
        break;
    }
    case 317433:
    {
        returnValue = F("Urho-Kekkonen-Str.");
        break;
    }
    case 317434:
    {
        returnValue = F("Urholzer Weg");
        break;
    }
    case 317435:
    {
        returnValue = F("Urians Brücke");
        break;
    }
    case 317436:
    {
        returnValue = F("Urichschneise");
        break;
    }
    case 317437:
    {
        returnValue = F("Urisbergweg");
        break;
    }
    case 317438:
    {
        returnValue = F("Urismühlgasse");
        break;
    }
    case 317439:
    {
        returnValue = F("Uristr.");
        break;
    }
    case 317440:
    {
        returnValue = F("Urkampsweg");
        break;
    }
    case 317441:
    {
        returnValue = F("Urlagen Esch");
        break;
    }
    case 317442:
    {
        returnValue = F("Urlagen Hof");
        break;
    }
    case 317443:
    {
        returnValue = F("Urlagen Kamp");
        break;
    }
    case 317444:
    {
        returnValue = F("Urlainestr.");
        break;
    }
    case 317445:
    {
        returnValue = F("Urlandstr.");
        break;
    }
    case 317446:
    {
        returnValue = F("Urlasbühl");
        break;
    }
    case 317447:
    {
        returnValue = F("Urlashöhe");
        break;
    }
    case 317448:
    {
        returnValue = F("Urlasstr.");
        break;
    }
    case 317449:
    {
        returnValue = F("Urlau Bahnhof");
        break;
    }
    case 317450:
    {
        returnValue = F("Urlauber Weg");
        break;
    }
    case 317451:
    {
        returnValue = F("Urlauberdorf");
        break;
    }
    case 317452:
    {
        returnValue = F("Urlauberstr.");
        break;
    }
    case 317453:
    {
        returnValue = F("Urlaubsgasse");
        break;
    }
    case 317454:
    {
        returnValue = F("Urlaubstr.");
        break;
    }
    case 317455:
    {
        returnValue = F("Urlaubsweg");
        break;
    }
    case 317456:
    {
        returnValue = F("Urleber Str.");
        break;
    }
    case 317457:
    {
        returnValue = F("Urleinsberg");
        break;
    }
    case 317458:
    {
        returnValue = F("Urlenweg");
        break;
    }
    case 317459:
    {
        returnValue = F("Urlesberg");
        break;
    }
    case 317460:
    {
        returnValue = F("Urlesstr.");
        break;
    }
    case 317461:
    {
        returnValue = F("Urleswiesen");
        break;
    }
    case 317462:
    {
        returnValue = F("Urlettig");
        break;
    }
    case 317463:
    {
        returnValue = F("Urloffener Str.");
        break;
    }
    case 317464:
    {
        returnValue = F("Urloffer Weg");
        break;
    }
    case 317465:
    {
        returnValue = F("Urloger Weg");
        break;
    }
    case 317466:
    {
        returnValue = F("Urlsbachstr.");
        break;
    }
    case 317467:
    {
        returnValue = F("Urlspergerstr.");
        break;
    }
    case 317468:
    {
        returnValue = F("Urlweg");
        break;
    }
    case 317469:
    {
        returnValue = F("Urmaierweg");
        break;
    }
    case 317470:
    {
        returnValue = F("Urmannweg");
        break;
    }
    case 317471:
    {
        returnValue = F("Urmeierstr.");
        break;
    }
    case 317472:
    {
        returnValue = F("Urmersbacher Str.");
        break;
    }
    case 317473:
    {
        returnValue = F("Urmetzgasse");
        break;
    }
    case 317474:
    {
        returnValue = F("Urmitzer Str.");
        break;
    }
    case 317475:
    {
        returnValue = F("Urmitzer Weg");
        break;
    }
    case 317476:
    {
        returnValue = F("Urnagold");
        break;
    }
    case 317477:
    {
        returnValue = F("Urnagolder Str.");
        break;
    }
    case 317478:
    {
        returnValue = F("Urnauerweg");
        break;
    }
    case 317479:
    {
        returnValue = F("Urnbergstr.");
        break;
    }
    case 317480:
    {
        returnValue = F("Urnbergweg");
        break;
    }
    case 317481:
    {
        returnValue = F("Urnburger Weg");
        break;
    }
    case 317482:
    {
        returnValue = F("Urneburger Feld");
        break;
    }
    case 317483:
    {
        returnValue = F("Urneburger Str.");
        break;
    }
    case 317484:
    {
        returnValue = F("Urnenfeld");
        break;
    }
    case 317485:
    {
        returnValue = F("Urnenfelderstr.");
        break;
    }
    case 317486:
    {
        returnValue = F("Urnenfelderweg");
        break;
    }
    case 317487:
    {
        returnValue = F("Urnenfeldstr.");
        break;
    }
    case 317488:
    {
        returnValue = F("Urnenfeldweg");
        break;
    }
    case 317489:
    {
        returnValue = F("Urnenfriedhof");
        break;
    }
    case 317490:
    {
        returnValue = F("Urnengräber");
        break;
    }
    case 317491:
    {
        returnValue = F("Urnenkamp");
        break;
    }
    case 317492:
    {
        returnValue = F("Urnenring");
        break;
    }
    case 317493:
    {
        returnValue = F("Urnenstr.");
        break;
    }
    case 317494:
    {
        returnValue = F("Urnenweg");
        break;
    }
    case 317495:
    {
        returnValue = F("Urnshäuser Str.");
        break;
    }
    case 317496:
    {
        returnValue = F("Uroldstr.");
        break;
    }
    case 317497:
    {
        returnValue = F("Urpharer Weg");
        break;
    }
    case 317498:
    {
        returnValue = F("Urphertshofer Str.");
        break;
    }
    case 317499:
    {
        returnValue = F("Urquell");
        break;
    }
    case 317500:
    {
        returnValue = F("Ursalring");
        break;
    }
    case 317501:
    {
        returnValue = F("Ursbachweg");
        break;
    }
    case 317502:
    {
        returnValue = F("Ursberger Str.");
        break;
    }
    case 317503:
    {
        returnValue = F("Ursbrunnenstr.");
        break;
    }
    case 317504:
    {
        returnValue = F("Urschelrainstr.");
        break;
    }
    case 317505:
    {
        returnValue = F("Urscherweg");
        break;
    }
    case 317506:
    {
        returnValue = F("Urseehaldenweg");
        break;
    }
    case 317507:
    {
        returnValue = F("Urseeweg");
        break;
    }
    case 317508:
    {
        returnValue = F("Urseler Str.");
        break;
    }
    case 317509:
    {
        returnValue = F("Urseler Weg");
        break;
    }
    case 317510:
    {
        returnValue = F("Urselstr.");
        break;
    }
    case 317511:
    {
        returnValue = F("Urselthaler Weg");
        break;
    }
    case 317512:
    {
        returnValue = F("Urselweg");
        break;
    }
    case 317513:
    {
        returnValue = F("Urselwiesenbergweg");
        break;
    }
    case 317514:
    {
        returnValue = F("Ursendorfer Str.");
        break;
    }
    case 317515:
    {
        returnValue = F("Ursentaler Str.");
        break;
    }
    case 317516:
    {
        returnValue = F("Ursentalhangweg");
        break;
    }
    case 317517:
    {
        returnValue = F("Ursentalstr.");
        break;
    }
    case 317518:
    {
        returnValue = F("Ursentalweg");
        break;
    }
    case 317519:
    {
        returnValue = F("Ursenwanger Weg");
        break;
    }
    case 317520:
    {
        returnValue = F("Ursenwangsträßchen");
        break;
    }
    case 317521:
    {
        returnValue = F("Ursfelder Str.");
        break;
    }
    case 317522:
    {
        returnValue = F("Ursheimer Str.");
        break;
    }
    case 317523:
    {
        returnValue = F("Ursheimer Weg");
        break;
    }
    case 317524:
    {
        returnValue = F("Ursinstr.");
        break;
    }
    case 317525:
    {
        returnValue = F("Ursinusstr.");
        break;
    }
    case 317526:
    {
        returnValue = F("Ursinusweg");
        break;
    }
    case 317527:
    {
        returnValue = F("Ursostr.");
        break;
    }
    case 317528:
    {
        returnValue = F("Urspring");
        break;
    }
    case 317529:
    {
        returnValue = F("Urspringer Str.");
        break;
    }
    case 317530:
    {
        returnValue = F("Urspringer Weg");
        break;
    }
    case 317531:
    {
        returnValue = F("Urspringerstr.");
        break;
    }
    case 317532:
    {
        returnValue = F("Urspringstr.");
        break;
    }
    case 317533:
    {
        returnValue = F("Ursprung");
        break;
    }
    case 317534:
    {
        returnValue = F("Ursprungau");
        break;
    }
    case 317535:
    {
        returnValue = F("Ursprunger Str.");
        break;
    }
    case 317536:
    {
        returnValue = F("Ursprungstr.");
        break;
    }
    case 317537:
    {
        returnValue = F("Ursprungweg");
        break;
    }
    case 317538:
    {
        returnValue = F("Ursrain");
        break;
    }
    case 317539:
    {
        returnValue = F("Ursrainer Ring");
        break;
    }
    case 317540:
    {
        returnValue = F("Ursrainer Weg");
        break;
    }
    case 317541:
    {
        returnValue = F("Urstall");
        break;
    }
    case 317542:
    {
        returnValue = F("Ursula-Comlossi-Weg");
        break;
    }
    case 317543:
    {
        returnValue = F("Ursula-Flick-Str.");
        break;
    }
    case 317544:
    {
        returnValue = F("Ursula-Greve-Weg");
        break;
    }
    case 317545:
    {
        returnValue = F("Ursula-Götze-Str.");
        break;
    }
    case 317546:
    {
        returnValue = F("Ursula-Haider-Str.");
        break;
    }
    case 317547:
    {
        returnValue = F("Ursula-Karmann-Weg");
        break;
    }
    case 317548:
    {
        returnValue = F("Ursula-Kley-Weg");
        break;
    }
    case 317549:
    {
        returnValue = F("Ursula-Lautner-Str.");
        break;
    }
    case 317550:
    {
        returnValue = F("Ursula-Lautner-Weg");
        break;
    }
    case 317551:
    {
        returnValue = F("Ursula-Mamlok-Str.");
        break;
    }
    case 317552:
    {
        returnValue = F("Ursula-Plake-Str.");
        break;
    }
    case 317553:
    {
        returnValue = F("Ursula-Reinecke-Stieg");
        break;
    }
    case 317554:
    {
        returnValue = F("Ursula-Trabalski-Str.");
        break;
    }
    case 317555:
    {
        returnValue = F("Ursula-Weg");
        break;
    }
    case 317556:
    {
        returnValue = F("Ursula-Winter-Str.");
        break;
    }
    case 317557:
    {
        returnValue = F("Ursula-Witting-Weg");
        break;
    }
    case 317558:
    {
        returnValue = F("Ursula-Wolfring-Str.");
        break;
    }
    case 317559:
    {
        returnValue = F("Ursula-von-Reibnitz-Str.");
        break;
    }
    case 317560:
    {
        returnValue = F("Ursula-von-Taufkirchen-Str.");
        break;
    }
    case 317561:
    {
        returnValue = F("Ursulabergtunnel");
        break;
    }
    case 317562:
    {
        returnValue = F("Ursulagasse");
        break;
    }
    case 317563:
    {
        returnValue = F("Ursulahof");
        break;
    }
    case 317564:
    {
        returnValue = F("Ursulaplatz");
        break;
    }
    case 317565:
    {
        returnValue = F("Ursulastr.");
        break;
    }
    case 317566:
    {
        returnValue = F("Ursulaweg");
        break;
    }
    case 317567:
    {
        returnValue = F("Ursulinengasse");
        break;
    }
    case 317568:
    {
        returnValue = F("Ursulinenring");
        break;
    }
    case 317569:
    {
        returnValue = F("Ursulinenstr.");
        break;
    }
    case 317570:
    {
        returnValue = F("Ursulinenweg");
        break;
    }
    case 317571:
    {
        returnValue = F("Ursulinergasse");
        break;
    }
    case 317572:
    {
        returnValue = F("Ursulinerstr.");
        break;
    }
    case 317573:
    {
        returnValue = F("Ursulum");
        break;
    }
    case 317574:
    {
        returnValue = F("Urtelengasse");
        break;
    }
    case 317575:
    {
        returnValue = F("Urtelstr.");
        break;
    }
    case 317576:
    {
        returnValue = F("Urtelweg");
        break;
    }
    case 317577:
    {
        returnValue = F("Urteläcker");
        break;
    }
    case 317578:
    {
        returnValue = F("Urthal");
        break;
    }
    case 317579:
    {
        returnValue = F("Urtlangerstr.");
        break;
    }
    case 317580:
    {
        returnValue = F("Urtlbachstr.");
        break;
    }
    case 317581:
    {
        returnValue = F("Urtlberg");
        break;
    }
    case 317582:
    {
        returnValue = F("Urtlbergstr.");
        break;
    }
    case 317583:
    {
        returnValue = F("Urtlmühlweg");
        break;
    }
    case 317584:
    {
        returnValue = F("Urtlweg");
        break;
    }
    case 317585:
    {
        returnValue = F("Urvogelweg");
        break;
    }
    case 317586:
    {
        returnValue = F("Urwahlenerstr.");
        break;
    }
    case 317587:
    {
        returnValue = F("Urwaldpfad Edersee");
        break;
    }
    case 317588:
    {
        returnValue = F("Urwaldschneise");
        break;
    }
    case 317589:
    {
        returnValue = F("Urwaldsteig");
        break;
    }
    case 317590:
    {
        returnValue = F("Urwaldstr.");
        break;
    }
    case 317591:
    {
        returnValue = F("Urweg");
        break;
    }
    case 317592:
    {
        returnValue = F("Urweilerstr.");
        break;
    }
    case 317593:
    {
        returnValue = F("Urwelle");
        break;
    }
    case 317594:
    {
        returnValue = F("Urzeitweg");
        break;
    }
    case 317595:
    {
        returnValue = F("Urzkehre");
        break;
    }
    case 317596:
    {
        returnValue = F("Usadeler Str.");
        break;
    }
    case 317597:
    {
        returnValue = F("Usagasse");
        break;
    }
    case 317598:
    {
        returnValue = F("Usambaraweg");
        break;
    }
    case 317599:
    {
        returnValue = F("Usastr.");
        break;
    }
    case 317600:
    {
        returnValue = F("Usavorstadt");
        break;
    }
    case 317601:
    {
        returnValue = F("Usaweg");
        break;
    }
    case 317602:
    {
        returnValue = F("Usbeckstr.");
        break;
    }
    case 317603:
    {
        returnValue = F("Uschbachweg");
        break;
    }
    case 317604:
    {
        returnValue = F("Uscherberg");
        break;
    }
    case 317605:
    {
        returnValue = F("Uschertsgrün");
        break;
    }
    case 317606:
    {
        returnValue = F("Uschertsgrüner Weg");
        break;
    }
    case 317607:
    {
        returnValue = F("Uschlager Str.");
        break;
    }
    case 317608:
    {
        returnValue = F("Uschlager Weg");
        break;
    }
    case 317609:
    {
        returnValue = F("Uschlberg");
        break;
    }
    case 317610:
    {
        returnValue = F("Uschweg");
        break;
    }
    case 317611:
    {
        returnValue = F("Usedomer Ring");
        break;
    }
    case 317612:
    {
        returnValue = F("Usedomer Str.");
        break;
    }
    case 317613:
    {
        returnValue = F("Usedomer Weg");
        break;
    }
    case 317614:
    {
        returnValue = F("Usedomstr.");
        break;
    }
    case 317615:
    {
        returnValue = F("Usedomweg");
        break;
    }
    case 317616:
    {
        returnValue = F("Uselhof");
        break;
    }
    case 317617:
    {
        returnValue = F("Usenborner Str.");
        break;
    }
    case 317618:
    {
        returnValue = F("Usenerstr.");
        break;
    }
    case 317619:
    {
        returnValue = F("Useriner Mühle");
        break;
    }
    case 317620:
    {
        returnValue = F("Useriner Str.");
        break;
    }
    case 317621:
    {
        returnValue = F("Ushölzliweg");
        break;
    }
    case 317622:
    {
        returnValue = F("Usinger Str.");
        break;
    }
    case 317623:
    {
        returnValue = F("Usinger Weg");
        break;
    }
    case 317624:
    {
        returnValue = F("Uslarer Str.");
        break;
    }
    case 317625:
    {
        returnValue = F("Uslarplatz");
        break;
    }
    case 317626:
    {
        returnValue = F("Uslarsche Str.");
        break;
    }
    case 317627:
    {
        returnValue = F("Uslarstr.");
        break;
    }
    case 317628:
    {
        returnValue = F("Uslauerweg");
        break;
    }
    case 317629:
    {
        returnValue = F("Usselbachstr.");
        break;
    }
    case 317630:
    {
        returnValue = F("Usselgasse");
        break;
    }
    case 317631:
    {
        returnValue = F("Usselmannstr.");
        break;
    }
    case 317632:
    {
        returnValue = F("Usselner Str.");
        break;
    }
    case 317633:
    {
        returnValue = F("Usselstr.");
        break;
    }
    case 317634:
    {
        returnValue = F("Usseltalstr.");
        break;
    }
    case 317635:
    {
        returnValue = F("Ussenhausen");
        break;
    }
    case 317636:
    {
        returnValue = F("Ussenried");
        break;
    }
    case 317637:
    {
        returnValue = F("Ustkaweg");
        break;
    }
    case 317638:
    {
        returnValue = F("Ustroner Str.");
        break;
    }
    case 317639:
    {
        returnValue = F("Ut Enden");
        break;
    }
    case 317640:
    {
        returnValue = F("Ut Rieg");
        break;
    }
    case 317641:
    {
        returnValue = F("Utahweg");
        break;
    }
    case 317642:
    {
        returnValue = F("Utarper Str.");
        break;
    }
    case 317643:
    {
        returnValue = F("Utarper Weg");
        break;
    }
    case 317644:
    {
        returnValue = F("Utastr.");
        break;
    }
    case 317645:
    {
        returnValue = F("Utaweg");
        break;
    }
    case 317646:
    {
        returnValue = F("Utbremer Grün");
        break;
    }
    case 317647:
    {
        returnValue = F("Utbremer Ring");
        break;
    }
    case 317648:
    {
        returnValue = F("Utbremer Str.");
        break;
    }
    case 317649:
    {
        returnValue = F("Utdrift");
        break;
    }
    case 317650:
    {
        returnValue = F("Ute & Ute Weg Zum SEE");
        break;
    }
    case 317651:
    {
        returnValue = F("Ute-Grobe-Weg");
        break;
    }
    case 317652:
    {
        returnValue = F("Ute-Ruhnke-Str.");
        break;
    }
    case 317653:
    {
        returnValue = F("Utechter Str.");
        break;
    }
    case 317654:
    {
        returnValue = F("Utechter Weg");
        break;
    }
    case 317655:
    {
        returnValue = F("Utenbacher Dorfstr.");
        break;
    }
    case 317656:
    {
        returnValue = F("Utenbacher Grund");
        break;
    }
    case 317657:
    {
        returnValue = F("Utenbacher Str.");
        break;
    }
    case 317658:
    {
        returnValue = F("Utende");
        break;
    }
    case 317659:
    {
        returnValue = F("Utender Ring");
        break;
    }
    case 317660:
    {
        returnValue = F("Utendorfer Str.");
        break;
    }
    case 317661:
    {
        returnValue = F("Utergadinger Str.");
        break;
    }
    case 317662:
    {
        returnValue = F("Uterhartstr.");
        break;
    }
    case 317663:
    {
        returnValue = F("Utermöhlestr.");
        break;
    }
    case 317664:
    {
        returnValue = F("Uternagelstr.");
        break;
    }
    case 317665:
    {
        returnValue = F("Utershorster Weg");
        break;
    }
    case 317666:
    {
        returnValue = F("Utestr.");
        break;
    }
    case 317667:
    {
        returnValue = F("Uteweg");
        break;
    }
    case 317668:
    {
        returnValue = F("Utgaster Str.");
        break;
    }
    case 317669:
    {
        returnValue = F("Uthausener Str.");
        break;
    }
    case 317670:
    {
        returnValue = F("Uthauweg");
        break;
    }
    case 317671:
    {
        returnValue = F("Uthavener Str.");
        break;
    }
    case 317672:
    {
        returnValue = F("Uthemannstr.");
        break;
    }
    case 317673:
    {
        returnValue = F("Uthlander Str.");
        break;
    }
    case 317674:
    {
        returnValue = F("Uthlander Weg");
        break;
    }
    case 317675:
    {
        returnValue = F("Uthlandestr.");
        break;
    }
    case 317676:
    {
        returnValue = F("Uthlandeweg");
        break;
    }
    case 317677:
    {
        returnValue = F("Uthlandstr.");
        break;
    }
    case 317678:
    {
        returnValue = F("Uthleber Str.");
        break;
    }
    case 317679:
    {
        returnValue = F("Uthleber Weg");
        break;
    }
    case 317680:
    {
        returnValue = F("Uthleder Str.");
        break;
    }
    case 317681:
    {
        returnValue = F("Uthledes neue Str.");
        break;
    }
    case 317682:
    {
        returnValue = F("Uthmannstr.");
        break;
    }
    case 317683:
    {
        returnValue = F("Uthof");
        break;
    }
    case 317684:
    {
        returnValue = F("Uthofstr.");
        break;
    }
    case 317685:
    {
        returnValue = F("Utholm");
        break;
    }
    case 317686:
    {
        returnValue = F("Utholmer Str.");
        break;
    }
    case 317687:
    {
        returnValue = F("Utholmstr.");
        break;
    }
    case 317688:
    {
        returnValue = F("Uthuiser Str.");
        break;
    }
    case 317689:
    {
        returnValue = F("Uthuser Str.");
        break;
    }
    case 317690:
    {
        returnValue = F("Uthwerdumer Meede");
        break;
    }
    case 317691:
    {
        returnValue = F("Uthwerdumer Str.");
        break;
    }
    case 317692:
    {
        returnValue = F("Uthörner Str.");
        break;
    }
    case 317693:
    {
        returnValue = F("Uthüser");
        break;
    }
    case 317694:
    {
        returnValue = F("Utkiek");
        break;
    }
    case 317695:
    {
        returnValue = F("Utlande");
        break;
    }
    case 317696:
    {
        returnValue = F("Utlander Weg");
        break;
    }
    case 317697:
    {
        returnValue = F("Utlandshörn");
        break;
    }
    case 317698:
    {
        returnValue = F("Utlandshörner Str.");
        break;
    }
    case 317699:
    {
        returnValue = F("Utlangwehrsweg");
        break;
    }
    case 317700:
    {
        returnValue = F("Utmühlenweg");
        break;
    }
    case 317701:
    {
        returnValue = F("Utpher Kirchenpfad");
        break;
    }
    case 317702:
    {
        returnValue = F("Utrechter Str.");
        break;
    }
    case 317703:
    {
        returnValue = F("Utrilloweg");
        break;
    }
    case 317704:
    {
        returnValue = F("Utschbergrundweg");
        break;
    }
    case 317705:
    {
        returnValue = F("Utsplittweg");
        break;
    }
    case 317706:
    {
        returnValue = F("Utta-Eberstein-Str.");
        break;
    }
    case 317707:
    {
        returnValue = F("Uttastr.");
        break;
    }
    case 317708:
    {
        returnValue = F("Uttendorf");
        break;
    }
    case 317709:
    {
        returnValue = F("Uttendorferstr.");
        break;
    }
    case 317710:
    {
        returnValue = F("Uttendörferweg");
        break;
    }
    case 317711:
    {
        returnValue = F("Uttengasse");
        break;
    }
    case 317712:
    {
        returnValue = F("Uttenhof");
        break;
    }
    case 317713:
    {
        returnValue = F("Uttenhofen");
        break;
    }
    case 317714:
    {
        returnValue = F("Uttenhofener Str.");
        break;
    }
    case 317715:
    {
        returnValue = F("Uttenhofer Str.");
        break;
    }
    case 317716:
    {
        returnValue = F("Uttenhofer Weg");
        break;
    }
    case 317717:
    {
        returnValue = F("Uttenkofen");
        break;
    }
    case 317718:
    {
        returnValue = F("Uttenrain");
        break;
    }
    case 317719:
    {
        returnValue = F("Uttenreuther Str.");
        break;
    }
    case 317720:
    {
        returnValue = F("Uttenschwalbstr.");
        break;
    }
    case 317721:
    {
        returnValue = F("Uttentalstr.");
        break;
    }
    case 317722:
    {
        returnValue = F("Uttenweiler Str.");
        break;
    }
    case 317723:
    {
        returnValue = F("Uttenweiler Weg");
        break;
    }
    case 317724:
    {
        returnValue = F("Utters");
        break;
    }
    case 317725:
    {
        returnValue = F("Uttersbergstr.");
        break;
    }
    case 317726:
    {
        returnValue = F("Utterser Landstr.");
        break;
    }
    case 317727:
    {
        returnValue = F("Utterser Weg");
        break;
    }
    case 317728:
    {
        returnValue = F("Uttershäuser Str.");
        break;
    }
    case 317729:
    {
        returnValue = F("Utterweg");
        break;
    }
    case 317730:
    {
        returnValue = F("Uttewalder Grund");
        break;
    }
    case 317731:
    {
        returnValue = F("Uttewalder Str.");
        break;
    }
    case 317732:
    {
        returnValue = F("Uttigkofener Str.");
        break;
    }
    case 317733:
    {
        returnValue = F("Uttinger Str.");
        break;
    }
    case 317734:
    {
        returnValue = F("Uttlauer Weg");
        break;
    }
    case 317735:
    {
        returnValue = F("Uttmannstr.");
        break;
    }
    case 317736:
    {
        returnValue = F("Uttnacher Str.");
        break;
    }
    case 317737:
    {
        returnValue = F("Uttogasse");
        break;
    }
    case 317738:
    {
        returnValue = F("Uttostr.");
        break;
    }
    case 317739:
    {
        returnValue = F("Uttrichshausener Str.");
        break;
    }
    case 317740:
    {
        returnValue = F("Uttstadter Str.");
        break;
    }
    case 317741:
    {
        returnValue = F("Uttumer Escher");
        break;
    }
    case 317742:
    {
        returnValue = F("Uttumer Reihe");
        break;
    }
    case 317743:
    {
        returnValue = F("Uttumer Str.");
        break;
    }
    case 317744:
    {
        returnValue = F("Uttumer Weg");
        break;
    }
    case 317745:
    {
        returnValue = F("Utweg");
        break;
    }
    case 317746:
    {
        returnValue = F("Utweiler Weg");
        break;
    }
    case 317747:
    {
        returnValue = F("Utzbergstr.");
        break;
    }
    case 317748:
    {
        returnValue = F("Utzedeler Str.");
        break;
    }
    case 317749:
    {
        returnValue = F("Utzenbach");
        break;
    }
    case 317750:
    {
        returnValue = F("Utzenbach Weg");
        break;
    }
    case 317751:
    {
        returnValue = F("Utzenbergblick");
        break;
    }
    case 317752:
    {
        returnValue = F("Utzenbühl");
        break;
    }
    case 317753:
    {
        returnValue = F("Utzenhofener Str.");
        break;
    }
    case 317754:
    {
        returnValue = F("Utzenrather Weg");
        break;
    }
    case 317755:
    {
        returnValue = F("Utzenstr.");
        break;
    }
    case 317756:
    {
        returnValue = F("Utzenzell");
        break;
    }
    case 317757:
    {
        returnValue = F("Utzenzeller Str.");
        break;
    }
    case 317758:
    {
        returnValue = F("Utzerather Str.");
        break;
    }
    case 317759:
    {
        returnValue = F("Utzhütte");
        break;
    }
    case 317760:
    {
        returnValue = F("Utzlebener Str.");
        break;
    }
    case 317761:
    {
        returnValue = F("Utzmannsbach");
        break;
    }
    case 317762:
    {
        returnValue = F("Utzmemminger Weg");
        break;
    }
    case 317763:
    {
        returnValue = F("Utzmühle");
        break;
    }
    case 317764:
    {
        returnValue = F("Utzmühlstr.");
        break;
    }
    case 317765:
    {
        returnValue = F("Utzmühlweg");
        break;
    }
    case 317766:
    {
        returnValue = F("Utzschneider-Geräumt");
        break;
    }
    case 317767:
    {
        returnValue = F("Utzschneiderstr.");
        break;
    }
    case 317768:
    {
        returnValue = F("Utzschneiderweg");
        break;
    }
    case 317769:
    {
        returnValue = F("Utzstetter Str.");
        break;
    }
    case 317770:
    {
        returnValue = F("Utzstr.");
        break;
    }
    case 317771:
    {
        returnValue = F("Utzweg");
        break;
    }
    case 317772:
    {
        returnValue = F("Utzwinger Str.");
        break;
    }
    case 317773:
    {
        returnValue = F("Uulenlock");
        break;
    }
    case 317774:
    {
        returnValue = F("Uulgrüpp");
        break;
    }
    case 317775:
    {
        returnValue = F("Uurt");
        break;
    }
    case 317776:
    {
        returnValue = F("Uwe-Beyer-Str.");
        break;
    }
    case 317777:
    {
        returnValue = F("Uwe-Jens-Lornsen-Wai");
        break;
    }
    case 317778:
    {
        returnValue = F("Uwe-Johnson-Str.");
        break;
    }
    case 317779:
    {
        returnValue = F("Uwe-Johnson-Weg");
        break;
    }
    case 317780:
    {
        returnValue = F("Uwe-Lichtenberg-Str.");
        break;
    }
    case 317781:
    {
        returnValue = F("Uwe-Surmann-Str.");
        break;
    }
    case 317782:
    {
        returnValue = F("Uwerweg");
        break;
    }
    case 317783:
    {
        returnValue = F("Uwes-Pad");
        break;
    }
    case 317784:
    {
        returnValue = F("Uwestr.");
        break;
    }
    case 317785:
    {
        returnValue = F("Uweweg");
        break;
    }
    case 317786:
    {
        returnValue = F("Uzenbronnen");
        break;
    }
    case 317787:
    {
        returnValue = F("Uzengasse");
        break;
    }
    case 317788:
    {
        returnValue = F("Uzstr.");
        break;
    }
    case 317789:
    {
        returnValue = F("Uzès-Kreisel");
        break;
    }
    case 317790:
    {
        returnValue = F("Uzèsring");
        break;
    }
    case 317791:
    {
        returnValue = F("Ußbergweg");
        break;
    }
    case 356523:
    {
        returnValue = F("umgestürzter Baumstamm");
        break;
    }
    case 356524:
    {
        returnValue = F("unbefestigte Str.");
        break;
    }
    case 356525:
    {
        returnValue = F("unbekannt, evtl Erlenweg");
        break;
    }
    case 356526:
    {
        returnValue = F("unbenannt");
        break;
    }
    case 356527:
    {
        returnValue = F("unsicher");
        break;
    }
    case 356528:
    {
        returnValue = F("unt. Stockermoosweg");
        break;
    }
    case 356529:
    {
        returnValue = F("unter Dünwanderweg");
        break;
    }
    case 356530:
    {
        returnValue = F("untere Bergstr.");
        break;
    }
    case 356531:
    {
        returnValue = F("untere Lehnkopfweg");
        break;
    }
    case 356532:
    {
        returnValue = F("untere Peseke");
        break;
    }
    case 356533:
    {
        returnValue = F("untere Sägbergweg");
        break;
    }
    case 356534:
    {
        returnValue = F("unterer Bruderholzweg");
        break;
    }
    case 356535:
    {
        returnValue = F("unterer Brückner-Stieg");
        break;
    }
    case 356536:
    {
        returnValue = F("unterer Burggraben");
        break;
    }
    case 356537:
    {
        returnValue = F("unterer Bärenweg");
        break;
    }
    case 356538:
    {
        returnValue = F("unterer Heilweg");
        break;
    }
    case 356539:
    {
        returnValue = F("unterer Hornweg");
        break;
    }
    case 356540:
    {
        returnValue = F("unterer Klippenweg");
        break;
    }
    case 356541:
    {
        returnValue = F("unterer Rundweg");
        break;
    }
    case 356542:
    {
        returnValue = F("unterer Schachenweg");
        break;
    }
    case 356543:
    {
        returnValue = F("unterer Schloßpark");
        break;
    }
    case 356544:
    {
        returnValue = F("unterer Steigelmeweg");
        break;
    }
    case 356545:
    {
        returnValue = F("unterer Steinweg");
        break;
    }
    case 356546:
    {
        returnValue = F("unterer Stuhl");
        break;
    }
    case 356547:
    {
        returnValue = F("unterer Trichter");
        break;
    }
    case 356548:
    {
        returnValue = F("unterer Waldweg");
        break;
    }
    case 356549:
    {
        returnValue = F("unterer Weg");
        break;
    }
    case 356550:
    {
        returnValue = F("unteres Dorf");
        break;
    }
    case 356551:
    {
        returnValue = F("unteres Recknitztal");
        break;
    }
    }
    return returnValue;
}
