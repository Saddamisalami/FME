#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameQ1(unsigned int streetKey)
{
String returnValue = "";
switch (streetKey)
{
case 257801:
{
returnValue = F("Q-Weg");
break;
}
case 257802:
{
returnValue = F("Q29 Str.");
break;
}
case 257803:
{
returnValue = F("Q5 Passage");
break;
}
case 257804:
{
returnValue = F("Quaaler Str.");
break;
}
case 257805:
{
returnValue = F("Quabach");
break;
}
case 257806:
{
returnValue = F("Quabbe");
break;
}
case 257807:
{
returnValue = F("Quabbenstr.");
break;
}
case 257808:
{
returnValue = F("Quabecker Weg");
break;
}
case 257809:
{
returnValue = F("Quabenmoor");
break;
}
case 257810:
{
returnValue = F("Quackshof");
break;
}
case 257811:
{
returnValue = F("Quade-Foelke-Str.");
break;
}
case 257812:
{
returnValue = F("Quade-Foelke-Weg");
break;
}
case 257813:
{
returnValue = F("Quadebekstr.");
break;
}
case 257814:
{
returnValue = F("Quadegasse");
break;
}
case 257815:
{
returnValue = F("Quadendambecker Str.");
break;
}
case 257816:
{
returnValue = F("Quadenhofstr.");
break;
}
case 257817:
{
returnValue = F("Quadenschönfeld");
break;
}
case 257818:
{
returnValue = F("Quadenschönfeld Bahnhof");
break;
}
case 257819:
{
returnValue = F("Quadenstieg");
break;
}
case 257820:
{
returnValue = F("Quadenweg");
break;
}
case 257821:
{
returnValue = F("Quadestr.");
break;
}
case 257822:
{
returnValue = F("Quadfeldmühle");
break;
}
case 257823:
{
returnValue = F("Quadfenner Weg");
break;
}
case 257824:
{
returnValue = F("Quadfliegstr.");
break;
}
case 257825:
{
returnValue = F("Quadrather Ronne");
break;
}
case 257826:
{
returnValue = F("Quadrather Str.");
break;
}
case 257827:
{
returnValue = F("Quadrather Weg");
break;
}
case 257828:
{
returnValue = F("Quadtstr.");
break;
}
case 257829:
{
returnValue = F("Quadtweg");
break;
}
case 257830:
{
returnValue = F("Quaestkämpe");
break;
}
case 257831:
{
returnValue = F("Quaet-Faslem-Platz");
break;
}
case 257832:
{
returnValue = F("Quaet-Faslem-Str.");
break;
}
case 257833:
{
returnValue = F("Quagliastr.");
break;
}
case 257834:
{
returnValue = F("Quagliostr.");
break;
}
case 257835:
{
returnValue = F("Quakenbrücker Hof");
break;
}
case 257836:
{
returnValue = F("Quakenbrücker Landstr.");
break;
}
case 257837:
{
returnValue = F("Quakenbrücker Str.");
break;
}
case 257838:
{
returnValue = F("Quakenburg");
break;
}
case 257839:
{
returnValue = F("Quakenweg");
break;
}
case 257840:
{
returnValue = F("Quakmannsweg");
break;
}
case 257841:
{
returnValue = F("Qualenbrink");
break;
}
case 257842:
{
returnValue = F("Qualenriethe");
break;
}
case 257843:
{
returnValue = F("Qualisch");
break;
}
case 257844:
{
returnValue = F("Qualisch Ost");
break;
}
case 257845:
{
returnValue = F("Qualitzer Str.");
break;
}
case 257846:
{
returnValue = F("Qualmanns Gang");
break;
}
case 257847:
{
returnValue = F("Qualzow");
break;
}
case 257848:
{
returnValue = F("Qualzower Weg");
break;
}
case 257849:
{
returnValue = F("Quamorgen");
break;
}
case 257850:
{
returnValue = F("Quandlah");
break;
}
case 257851:
{
returnValue = F("Quandtstr.");
break;
}
case 257852:
{
returnValue = F("Quandtsweg");
break;
}
case 257853:
{
returnValue = F("Quanswiese");
break;
}
case 257854:
{
returnValue = F("Quantelholz");
break;
}
case 257855:
{
returnValue = F("Quantenberg");
break;
}
case 257856:
{
returnValue = F("Quanteweg");
break;
}
case 257857:
{
returnValue = F("Quanthof");
break;
}
case 257858:
{
returnValue = F("Quanthofer Str.");
break;
}
case 257859:
{
returnValue = F("Quantiusstr.");
break;
}
case 257860:
{
returnValue = F("Quantwick");
break;
}
case 257861:
{
returnValue = F("Quantwicker Str.");
break;
}
case 257862:
{
returnValue = F("Quantzstr.");
break;
}
case 257863:
{
returnValue = F("Quantzweg");
break;
}
case 257864:
{
returnValue = F("Quanzstr.");
break;
}
case 257865:
{
returnValue = F("Quappenbruch");
break;
}
case 257866:
{
returnValue = F("Quappendorfer Str.");
break;
}
case 257867:
{
returnValue = F("Quappenstieg");
break;
}
case 257868:
{
returnValue = F("Quarkensteg");
break;
}
case 257869:
{
returnValue = F("Quarksteinweg");
break;
}
case 257870:
{
returnValue = F("Quarkstr.");
break;
}
case 257871:
{
returnValue = F("Quarmbachsiedlung");
break;
}
case 257872:
{
returnValue = F("Quarnbeker Str.");
break;
}
case 257873:
{
returnValue = F("Quarnbeker Weg");
break;
}
case 257874:
{
returnValue = F("Quarnebecker Stadtweg");
break;
}
case 257875:
{
returnValue = F("Quarnebecker Str.");
break;
}
case 257876:
{
returnValue = F("Quarnstedter Str.");
break;
}
case 257877:
{
returnValue = F("Quarnstedter Weg");
break;
}
case 257878:
{
returnValue = F("Quarree");
break;
}
case 257879:
{
returnValue = F("Quarrendorfer Weg");
break;
}
case 257880:
{
returnValue = F("Quarser Str.");
break;
}
case 257881:
{
returnValue = F("Quarstedt");
break;
}
case 257882:
{
returnValue = F("Quarstedter Weg");
break;
}
case 257883:
{
returnValue = F("Quartanusstr.");
break;
}
case 257884:
{
returnValue = F("Quartbühlstr.");
break;
}
case 257885:
{
returnValue = F("Quartelkämpchen");
break;
}
case 257886:
{
returnValue = F("Quartelsweg");
break;
}
case 257887:
{
returnValue = F("Quartierpark Krongasse");
break;
}
case 257888:
{
returnValue = F("Quartierpark Mitte");
break;
}
case 257889:
{
returnValue = F("Quartierpark Nord");
break;
}
case 257890:
{
returnValue = F("Quartierplatz");
break;
}
case 257891:
{
returnValue = F("Quartiersbogen");
break;
}
case 257892:
{
returnValue = F("Quartiersgarten");
break;
}
case 257893:
{
returnValue = F("Quartiersgarten Johanngarten");
break;
}
case 257894:
{
returnValue = F("Quartierspark");
break;
}
case 257895:
{
returnValue = F("Quartierspark Am Ziesberg");
break;
}
case 257896:
{
returnValue = F("Quartiersplatz");
break;
}
case 257897:
{
returnValue = F("Quartiersplatz / Mehrzweckfläche");
break;
}
case 257898:
{
returnValue = F("Quartiersplatz zum Neckar");
break;
}
case 257899:
{
returnValue = F("Quartierstr.");
break;
}
case 257900:
{
returnValue = F("Quartlenbeckstr.");
break;
}
case 257901:
{
returnValue = F("Quarzbichl");
break;
}
case 257902:
{
returnValue = F("Quarzbruchweg");
break;
}
case 257903:
{
returnValue = F("Quarzgang");
break;
}
case 257904:
{
returnValue = F("Quarzitbruch");
break;
}
case 257905:
{
returnValue = F("Quarzitgrubenweg");
break;
}
case 257906:
{
returnValue = F("Quarzitweg");
break;
}
case 257907:
{
returnValue = F("Quarzmühlenweg");
break;
}
case 257908:
{
returnValue = F("Quarzring");
break;
}
case 257909:
{
returnValue = F("Quarzstr.");
break;
}
case 257910:
{
returnValue = F("Quarztalweg");
break;
}
case 257911:
{
returnValue = F("Quarzweg");
break;
}
case 257912:
{
returnValue = F("Quaschwitzer Weg");
break;
}
case 257913:
{
returnValue = F("Quasengrund");
break;
}
case 257914:
{
returnValue = F("Quasengrundweg");
break;
}
case 257915:
{
returnValue = F("Quasnitzer Höhe");
break;
}
case 257916:
{
returnValue = F("Quasnitzer Weg");
break;
}
case 257917:
{
returnValue = F("Quassower Weg");
break;
}
case 257918:
{
returnValue = F("Quast");
break;
}
case 257919:
{
returnValue = F("Quastenberg");
break;
}
case 257920:
{
returnValue = F("Quastenberger Damm");
break;
}
case 257921:
{
returnValue = F("Quastenberger Siedlung");
break;
}
case 257922:
{
returnValue = F("Quastenhofweg");
break;
}
case 257923:
{
returnValue = F("Quaster Weg");
break;
}
case 257924:
{
returnValue = F("Quastruper Str.");
break;
}
case 257925:
{
returnValue = F("Quaststr.");
break;
}
case 257926:
{
returnValue = F("Quastweg");
break;
}
case 257927:
{
returnValue = F("Quatermarkt");
break;
}
case 257928:
{
returnValue = F("Quatitzer Str.");
break;
}
case 257929:
{
returnValue = F("Quatzendorf");
break;
}
case 257930:
{
returnValue = F("Quatzendorfer Weg");
break;
}
case 257931:
{
returnValue = F("Quatäcker");
break;
}
case 257932:
{
returnValue = F("Quavendamm");
break;
}
case 257933:
{
returnValue = F("Quaxpfad");
break;
}
case 257934:
{
returnValue = F("Quaßliner Hof");
break;
}
case 257935:
{
returnValue = F("Quebbe");
break;
}
case 257936:
{
returnValue = F("Quebec-Str.");
break;
}
case 257937:
{
returnValue = F("Quebecallee");
break;
}
case 257938:
{
returnValue = F("Quebecstr.");
break;
}
case 257939:
{
returnValue = F("Queckbronn");
break;
}
case 257940:
{
returnValue = F("Queckenberg");
break;
}
case 257941:
{
returnValue = F("Queckenberger Str.");
break;
}
case 257942:
{
returnValue = F("Queckgasse");
break;
}
case 257943:
{
returnValue = F("Queckhagen");
break;
}
case 257944:
{
returnValue = F("Queckhagener Str.");
break;
}
case 257945:
{
returnValue = F("Queckhain");
break;
}
case 257946:
{
returnValue = F("Queckmühle");
break;
}
case 257947:
{
returnValue = F("Queckstr.");
break;
}
case 257948:
{
returnValue = F("Queckvoor");
break;
}
case 257949:
{
returnValue = F("Quedensweg");
break;
}
case 257950:
{
returnValue = F("Quedlinburger Landstr.");
break;
}
case 257951:
{
returnValue = F("Quedlinburger Str.");
break;
}
case 257952:
{
returnValue = F("Quedlinburger Tor");
break;
}
case 257953:
{
returnValue = F("Quedlinburger Weg");
break;
}
case 257954:
{
returnValue = F("Quedlinburgstr.");
break;
}
case 257955:
{
returnValue = F("Queengrundweg");
break;
}
case 257956:
{
returnValue = F("Queens Avenue");
break;
}
case 257957:
{
returnValue = F("Queerenring");
break;
}
case 257958:
{
returnValue = F("Quegmai");
break;
}
case 257959:
{
returnValue = F("Queichheimer Hauptstr.");
break;
}
case 257960:
{
returnValue = F("Queichheimer Str.");
break;
}
case 257961:
{
returnValue = F("Queichstr.");
break;
}
case 257962:
{
returnValue = F("Queichtalring");
break;
}
case 257963:
{
returnValue = F("Queichtalstr.");
break;
}
case 257964:
{
returnValue = F("Queidersbacher Str.");
break;
}
case 257965:
{
returnValue = F("Queienfelder Str.");
break;
}
case 257966:
{
returnValue = F("Queisauer Weg");
break;
}
case 257967:
{
returnValue = F("Queiser Str.");
break;
}
case 257968:
{
returnValue = F("Quelbergweg");
break;
}
case 257969:
{
returnValue = F("Quelitzer Str.");
break;
}
case 257970:
{
returnValue = F("Quelkhorner Landstr.");
break;
}
case 257971:
{
returnValue = F("Quelkhorner Mittelweg");
break;
}
case 257972:
{
returnValue = F("Quelkhorner Str.");
break;
}
case 257973:
{
returnValue = F("Quellbachweg");
break;
}
case 257974:
{
returnValue = F("Quellberg");
break;
}
case 257975:
{
returnValue = F("Quellbergsiedlung");
break;
}
case 257976:
{
returnValue = F("Quellbergweg");
break;
}
case 257977:
{
returnValue = F("Quellborn");
break;
}
case 257978:
{
returnValue = F("Quellbornstr.");
break;
}
case 257979:
{
returnValue = F("Quelle");
break;
}
case 257980:
{
returnValue = F("Quelle-Park");
break;
}
case 257981:
{
returnValue = F("Quellen-Weg");
break;
}
case 257982:
{
returnValue = F("Quellenberg");
break;
}
case 257983:
{
returnValue = F("Quellenblick");
break;
}
case 257984:
{
returnValue = F("Quellenburgstr.");
break;
}
case 257985:
{
returnValue = F("Quellendorfer Str.");
break;
}
case 257986:
{
returnValue = F("Quellendorfer Wildfuhre");
break;
}
case 257987:
{
returnValue = F("Quellengasse");
break;
}
case 257988:
{
returnValue = F("Quellengrund");
break;
}
case 257989:
{
returnValue = F("Quellenhalde");
break;
}
case 257990:
{
returnValue = F("Quellenhang");
break;
}
case 257991:
{
returnValue = F("Quellenhangweg");
break;
}
case 257992:
{
returnValue = F("Quellenhof");
break;
}
case 257993:
{
returnValue = F("Quellenhofweg");
break;
}
case 257994:
{
returnValue = F("Quellenhöhe");
break;
}
case 257995:
{
returnValue = F("Quellenkamp");
break;
}
case 257996:
{
returnValue = F("Quellenpark Kronthal");
break;
}
case 257997:
{
returnValue = F("Quellenpavillon");
break;
}
case 257998:
{
returnValue = F("Quellenpfad");
break;
}
case 257999:
{
returnValue = F("Quellenreuth");
break;
}
case 258000:
{
returnValue = F("Quellenring");
break;
}
case 258001:
{
returnValue = F("Quellensteig");
break;
}
case 258002:
{
returnValue = F("Quellensteinweg");
break;
}
case 258003:
{
returnValue = F("Quellenstr.");
break;
}
case 258004:
{
returnValue = F("Quellental");
break;
}
case 258005:
{
returnValue = F("Quellentalstr.");
break;
}
case 258006:
{
returnValue = F("Quellenthal");
break;
}
case 258007:
{
returnValue = F("Quellenweg");
break;
}
case 258008:
{
returnValue = F("Quellenweg (Traumpfad)");
break;
}
case 258009:
{
returnValue = F("Quellenweg Bad Breisig");
break;
}
case 258010:
{
returnValue = F("Quellenäckerweg");
break;
}
case 258011:
{
returnValue = F("Queller");
break;
}
case 258012:
{
returnValue = F("Queller Str.");
break;
}
case 258013:
{
returnValue = F("Quellerweg");
break;
}
case 258014:
{
returnValue = F("Quelleweg");
break;
}
case 258015:
{
returnValue = F("Quellgarten");
break;
}
case 258016:
{
returnValue = F("Quellgasse");
break;
}
case 258017:
{
returnValue = F("Quellgrund");
break;
}
case 258018:
{
returnValue = F("Quellhofstr.");
break;
}
case 258019:
{
returnValue = F("Quellhorststr.");
break;
}
case 258020:
{
returnValue = F("Quellhöfe");
break;
}
case 258021:
{
returnValue = F("Quellitzweg");
break;
}
case 258022:
{
returnValue = F("Quellmalzweg");
break;
}
case 258023:
{
returnValue = F("Quellmoor");
break;
}
case 258024:
{
returnValue = F("Quellmoos");
break;
}
case 258025:
{
returnValue = F("Quellmoosweg");
break;
}
case 258026:
{
returnValue = F("Quellner Str.");
break;
}
case 258027:
{
returnValue = F("Quellohwiesenweg");
break;
}
case 258028:
{
returnValue = F("Quellsiek");
break;
}
case 258029:
{
returnValue = F("Quellsteig");
break;
}
case 258030:
{
returnValue = F("Quellstr.");
break;
}
case 258031:
{
returnValue = F("Quellwasserpark");
break;
}
case 258032:
{
returnValue = F("Quellweg");
break;
}
case 258033:
{
returnValue = F("Quellwiese");
break;
}
case 258034:
{
returnValue = F("Quellwiesstr.");
break;
}
case 258035:
{
returnValue = F("Quembachallee");
break;
}
case 258036:
{
returnValue = F("Quembarger Weg");
break;
}
case 258037:
{
returnValue = F("Quemberwinkel");
break;
}
case 258038:
{
returnValue = F("Quemer Heide");
break;
}
case 258039:
{
returnValue = F("Quemmeller Weg");
break;
}
case 258040:
{
returnValue = F("Quendelbachstr.");
break;
}
case 258041:
{
returnValue = F("Quendelring");
break;
}
case 258042:
{
returnValue = F("Quendelstr.");
break;
}
case 258043:
{
returnValue = F("Quendelweg");
break;
}
case 258044:
{
returnValue = F("Quendorfer Str.");
break;
}
case 258045:
{
returnValue = F("Quenenberg");
break;
}
case 258046:
{
returnValue = F("Queng");
break;
}
case 258047:
{
returnValue = F("Quengelstr.");
break;
}
case 258048:
{
returnValue = F("Quenhorner Str.");
break;
}
case 258049:
{
returnValue = F("Quenstedter Str.");
break;
}
case 258050:
{
returnValue = F("Quenstedtstr.");
break;
}
case 258051:
{
returnValue = F("Quentelberg");
break;
}
case 258052:
{
returnValue = F("Quenteler Str.");
break;
}
case 258053:
{
returnValue = F("Quenteler Tor");
break;
}
case 258054:
{
returnValue = F("Quenteler Weg");
break;
}
case 258055:
{
returnValue = F("Quentelstr.");
break;
}
case 258056:
{
returnValue = F("Quentsiek");
break;
}
case 258057:
{
returnValue = F("Quentstr.");
break;
}
case 258058:
{
returnValue = F("Quenzweg");
break;
}
case 258059:
{
returnValue = F("Quer-Bahn");
break;
}
case 258060:
{
returnValue = F("Querallee");
break;
}
case 258061:
{
returnValue = F("Querbacher Str.");
break;
}
case 258062:
{
returnValue = F("Querbachshof");
break;
}
case 258063:
{
returnValue = F("Querbachshofer Str.");
break;
}
case 258064:
{
returnValue = F("Querbachsiedlung");
break;
}
case 258065:
{
returnValue = F("Querbachweg");
break;
}
case 258066:
{
returnValue = F("Querbein");
break;
}
case 258067:
{
returnValue = F("Querbergweg");
break;
}
case 258068:
{
returnValue = F("Querbrakenring");
break;
}
case 258069:
{
returnValue = F("Querbreite");
break;
}
case 258070:
{
returnValue = F("Querbülten");
break;
}
case 258071:
{
returnValue = F("Querchweg");
break;
}
case 258072:
{
returnValue = F("Querdamm");
break;
}
case 258073:
{
returnValue = F("Querenbach");
break;
}
case 258074:
{
returnValue = F("Querenberg");
break;
}
case 258075:
{
returnValue = F("Querenbergstr.");
break;
}
case 258076:
{
returnValue = F("Querenburg");
break;
}
case 258077:
{
returnValue = F("Querenburger Str.");
break;
}
case 258078:
{
returnValue = F("Querende");
break;
}
case 258079:
{
returnValue = F("Querenhorster Str.");
break;
}
case 258080:
{
returnValue = F("Querensteder Str.");
break;
}
case 258081:
{
returnValue = F("Querfeld");
break;
}
case 258082:
{
returnValue = F("Querfeldein am Rhein");
break;
}
case 258083:
{
returnValue = F("Querfeldstr.");
break;
}
case 258084:
{
returnValue = F("Querfeldweg");
break;
}
case 258085:
{
returnValue = F("Querflaggen");
break;
}
case 258086:
{
returnValue = F("Querfloßweg");
break;
}
case 258087:
{
returnValue = F("Querfurter Str.");
break;
}
case 258088:
{
returnValue = F("Querfurter Weg");
break;
}
case 258089:
{
returnValue = F("Quergang");
break;
}
case 258090:
{
returnValue = F("Quergang zum Pulverturm");
break;
}
case 258091:
{
returnValue = F("Quergartenweg");
break;
}
case 258092:
{
returnValue = F("Quergasse");
break;
}
case 258093:
{
returnValue = F("Quergraben");
break;
}
case 258094:
{
returnValue = F("Quergässchen");
break;
}
case 258095:
{
returnValue = F("Quergäßchen");
break;
}
case 258096:
{
returnValue = F("Quergäßle");
break;
}
case 258097:
{
returnValue = F("Querholz");
break;
}
case 258098:
{
returnValue = F("Queringer Weg");
break;
}
case 258099:
{
returnValue = F("Queristr.");
break;
}
case 258100:
{
returnValue = F("Queriweg");
break;
}
case 258101:
{
returnValue = F("Querkamp");
break;
}
case 258102:
{
returnValue = F("Querkampstr.");
break;
}
case 258103:
{
returnValue = F("Querkanal");
break;
}
case 258104:
{
returnValue = F("Querkoppel");
break;
}
case 258105:
{
returnValue = F("Querlachschneise");
break;
}
case 258106:
{
returnValue = F("Querland");
break;
}
case 258107:
{
returnValue = F("Querlandstr.");
break;
}
case 258108:
{
returnValue = F("Querlandweg");
break;
}
case 258109:
{
returnValue = F("Querlberg");
break;
}
case 258110:
{
returnValue = F("Querlenweg");
break;
}
case 258111:
{
returnValue = F("Quermathe");
break;
}
case 258112:
{
returnValue = F("Quermathener Weg");
break;
}
case 258113:
{
returnValue = F("Quermaße");
break;
}
case 258114:
{
returnValue = F("Quermer Weg");
break;
}
case 258115:
{
returnValue = F("Quermorgen");
break;
}
case 258116:
{
returnValue = F("Quern Dik");
break;
}
case 258117:
{
returnValue = F("Quern-Bargfeld");
break;
}
case 258118:
{
returnValue = F("Quern-Dingholz");
break;
}
case 258119:
{
returnValue = F("Querne Passage");
break;
}
case 258120:
{
returnValue = F("Quernetal");
break;
}
case 258121:
{
returnValue = F("Quernheimer Feldweg");
break;
}
case 258122:
{
returnValue = F("Quernheimer Str.");
break;
}
case 258123:
{
returnValue = F("Quernholz");
break;
}
case 258124:
{
returnValue = F("Quernstweg");
break;
}
case 258125:
{
returnValue = F("Querpfad");
break;
}
case 258126:
{
returnValue = F("Querpfahl");
break;
}
case 258127:
{
returnValue = F("Querplanie");
break;
}
case 258128:
{
returnValue = F("Querqueviller Ring");
break;
}
case 258129:
{
returnValue = F("Querrand");
break;
}
case 258130:
{
returnValue = F("Querredder");
break;
}
case 258131:
{
returnValue = F("Querreihe");
break;
}
case 258132:
{
returnValue = F("Querrothe");
break;
}
case 258133:
{
returnValue = F("Quersack");
break;
}
case 258134:
{
returnValue = F("Quersaer Str.");
break;
}
case 258135:
{
returnValue = F("Querschlag");
break;
}
case 258136:
{
returnValue = F("Querschlagstr.");
break;
}
case 258137:
{
returnValue = F("Querschneise");
break;
}
case 258138:
{
returnValue = F("Querschoppen");
break;
}
case 258139:
{
returnValue = F("Quersee");
break;
}
case 258140:
{
returnValue = F("Quersgasse");
break;
}
case 258141:
{
returnValue = F("Querspange");
break;
}
case 258142:
{
returnValue = F("Querspange Haubersbronn-Nord");
break;
}
case 258143:
{
returnValue = F("Querspange Hornboden");
break;
}
case 258144:
{
returnValue = F("Querspange Nord");
break;
}
case 258145:
{
returnValue = F("Quersprange");
break;
}
case 258146:
{
returnValue = F("Querstedter Dorfstr.");
break;
}
case 258147:
{
returnValue = F("Querstedter Weg");
break;
}
case 258148:
{
returnValue = F("Quersteg");
break;
}
case 258149:
{
returnValue = F("Quersteig");
break;
}
case 258150:
{
returnValue = F("Querstellenweg");
break;
}
case 258151:
{
returnValue = F("Querstieg");
break;
}
case 258152:
{
returnValue = F("Querstiege");
break;
}
case 258153:
{
returnValue = F("Querstr.");
break;
}
case 258154:
{
returnValue = F("Querstr. / Rundwanderweg II");
break;
}
case 258155:
{
returnValue = F("Querstr. 80");
break;
}
case 258156:
{
returnValue = F("Querstr. 85");
break;
}
case 258157:
{
returnValue = F("Querstr. 86");
break;
}
case 258158:
{
returnValue = F("Querstr. 87");
break;
}
case 258159:
{
returnValue = F("Querstr. I");
break;
}
case 258160:
{
returnValue = F("Querstr. II");
break;
}
case 258161:
{
returnValue = F("Querstraat");
break;
}
case 258162:
{
returnValue = F("Querstück");
break;
}
case 258163:
{
returnValue = F("Querstücken");
break;
}
case 258164:
{
returnValue = F("Quertrift");
break;
}
case 258165:
{
returnValue = F("Querumer Str.");
break;
}
case 258166:
{
returnValue = F("Querumer Weg");
break;
}
case 258167:
{
returnValue = F("Querung");
break;
}
case 258168:
{
returnValue = F("Querung / Franz-Grimm-Weg");
break;
}
case 258169:
{
returnValue = F("Querweg");
break;
}
case 258170:
{
returnValue = F("Querweg 2");
break;
}
case 258171:
{
returnValue = F("Querweg I");
break;
}
case 258172:
{
returnValue = F("Querweg II");
break;
}
case 258173:
{
returnValue = F("Querweg III");
break;
}
case 258174:
{
returnValue = F("Querweg in Kuhlen");
break;
}
case 258175:
{
returnValue = F("Querweg in Loyermoor");
break;
}
case 258176:
{
returnValue = F("Querweingasse");
break;
}
case 258177:
{
returnValue = F("Queräckerstr.");
break;
}
case 258178:
{
returnValue = F("Quesenbühlsgang");
break;
}
case 258179:
{
returnValue = F("Quesitzer Weg");
break;
}
case 258180:
{
returnValue = F("Quesnitzer Weg");
break;
}
case 258181:
{
returnValue = F("Quesnoy-sur-Deule-Platz");
break;
}
case 258182:
{
returnValue = F("Questenberger Dorfstr.");
break;
}
case 258183:
{
returnValue = F("Questenberger Weg");
break;
}
case 258184:
{
returnValue = F("Questenbergweg");
break;
}
case 258185:
{
returnValue = F("Questenstieg");
break;
}
case 258186:
{
returnValue = F("Questenweg");
break;
}
case 258187:
{
returnValue = F("Questiner Str.");
break;
}
case 258188:
{
returnValue = F("Questiner Weg");
break;
}
case 258189:
{
returnValue = F("Questwiesen");
break;
}
case 258190:
{
returnValue = F("Quetchen");
break;
}
case 258191:
{
returnValue = F("Queter");
break;
}
case 258192:
{
returnValue = F("Quetje");
break;
}
case 258193:
{
returnValue = F("Quetschegässl");
break;
}
case 258194:
{
returnValue = F("Quetschen");
break;
}
case 258195:
{
returnValue = F("Quetschenberg");
break;
}
case 258196:
{
returnValue = F("Quetschenbergtrail");
break;
}
case 258197:
{
returnValue = F("Quetschenhagen");
break;
}
case 258198:
{
returnValue = F("Quetschenweg");
break;
}
case 258199:
{
returnValue = F("Quettigstaffeln");
break;
}
case 258200:
{
returnValue = F("Quettigstr.");
break;
}
case 258201:
{
returnValue = F("Quettigweg");
break;
}
case 258202:
{
returnValue = F("Quettinger Str.");
break;
}
case 258203:
{
returnValue = F("Quettinghofstr.");
break;
}
case 258204:
{
returnValue = F("Quetzenbleek");
break;
}
case 258205:
{
returnValue = F("Quetzer Heide");
break;
}
case 258206:
{
returnValue = F("Quetzer Heue");
break;
}
case 258207:
{
returnValue = F("Quetzer Lehmkuhle");
break;
}
case 258208:
{
returnValue = F("Quetzer Ohr");
break;
}
case 258209:
{
returnValue = F("Quetzer Str.");
break;
}
case 258210:
{
returnValue = F("Quetzer Timpen");
break;
}
case 258211:
{
returnValue = F("Quetzer Weg");
break;
}
case 258212:
{
returnValue = F("Quetzerfeld");
break;
}
case 258213:
{
returnValue = F("Quetziner Str.");
break;
}
case 258214:
{
returnValue = F("Quevautamps-Platz");
break;
}
case 258215:
{
returnValue = F("Quezinger Feld");
break;
}
case 258216:
{
returnValue = F("Quickbaumweg");
break;
}
case 258217:
{
returnValue = F("Quickborn");
break;
}
case 258218:
{
returnValue = F("Quickborner Chaussee");
break;
}
case 258219:
{
returnValue = F("Quickborner Str.");
break;
}
case 258220:
{
returnValue = F("Quickborner Weg");
break;
}
case 258221:
{
returnValue = F("Quickbornweg");
break;
}
case 258222:
{
returnValue = F("Quickhorn");
break;
}
case 258223:
{
returnValue = F("Quickmarkt");
break;
}
case 258224:
{
returnValue = F("Quickstr.");
break;
}
case 258225:
{
returnValue = F("Quiddestr.");
break;
}
case 258226:
{
returnValue = F("Quidembaum");
break;
}
case 258227:
{
returnValue = F("Quidenusweg");
break;
}
case 258228:
{
returnValue = F("Quienstr.");
break;
}
case 258229:
{
returnValue = F("Quieraustr.");
break;
}
case 258230:
{
returnValue = F("Quierschieder Str.");
break;
}
case 258231:
{
returnValue = F("Quierschieder Weg");
break;
}
case 258232:
{
returnValue = F("Quiet");
break;
}
case 258233:
{
returnValue = F("Quiete");
break;
}
case 258234:
{
returnValue = F("Quilitzer Weg");
break;
}
case 258235:
{
returnValue = F("Quillenweg");
break;
}
case 258236:
{
returnValue = F("Quillerblick");
break;
}
case 258237:
{
returnValue = F("Quillerstr.");
break;
}
case 258238:
{
returnValue = F("Quillerwaldstr.");
break;
}
case 258239:
{
returnValue = F("Quillerweg");
break;
}
case 258240:
{
returnValue = F("Quillowstr.");
break;
}
case 258241:
{
returnValue = F("Quillschinaer Str.");
break;
}
case 258242:
{
returnValue = F("Quilltalweg");
break;
}
case 258243:
{
returnValue = F("Quilow");
break;
}
case 258244:
{
returnValue = F("Quilsweg");
break;
}
case 258245:
{
returnValue = F("Quimelweg");
break;
}
case 258246:
{
returnValue = F("Quimperléstr.");
break;
}
case 258247:
{
returnValue = F("Quimperplatz");
break;
}
case 258248:
{
returnValue = F("Quinckestr.");
break;
}
case 258249:
{
returnValue = F("Quinckeweg");
break;
}
case 258250:
{
returnValue = F("Quingel");
break;
}
case 258251:
{
returnValue = F("Quingenberg");
break;
}
case 258252:
{
returnValue = F("Quinheide");
break;
}
case 258253:
{
returnValue = F("Quinheider Eck");
break;
}
case 258254:
{
returnValue = F("Quinheider Mühle");
break;
}
case 258255:
{
returnValue = F("Quinheider Str.");
break;
}
case 258256:
{
returnValue = F("Quinheimer Str.");
break;
}
case 258257:
{
returnValue = F("Quinkelweg");
break;
}
case 258258:
{
returnValue = F("Quinkkjer");
break;
}
case 258259:
{
returnValue = F("Quintana Str.");
break;
}
case 258260:
{
returnValue = F("Quintangenweg");
break;
}
case 258261:
{
returnValue = F("Quintenzstr.");
break;
}
case 258262:
{
returnValue = F("Quinter Str.");
break;
}
case 258263:
{
returnValue = F("Quintinsstr.");
break;
}
case 258264:
{
returnValue = F("Quintschlag");
break;
}
case 258265:
{
returnValue = F("Quintusstr.");
break;
}
case 258266:
{
returnValue = F("Quintweg");
break;
}
case 258267:
{
returnValue = F("Quinxer Str.");
break;
}
case 258268:
{
returnValue = F("Quirin-Wörl-Str.");
break;
}
case 258269:
{
returnValue = F("Quirinistr.");
break;
}
case 258270:
{
returnValue = F("Quiriniuspfad");
break;
}
case 258271:
{
returnValue = F("Quiriniusplatz");
break;
}
case 258272:
{
returnValue = F("Quirinsstr.");
break;
}
case 258273:
{
returnValue = F("Quirinstr.");
break;
}
case 258274:
{
returnValue = F("Quirinsweg");
break;
}
case 258275:
{
returnValue = F("Quirinusborn");
break;
}
case 258276:
{
returnValue = F("Quirinusbrücke");
break;
}
case 258277:
{
returnValue = F("Quirinusplatz");
break;
}
case 258278:
{
returnValue = F("Quirinusstr.");
break;
}
case 258279:
{
returnValue = F("Quirinusweg");
break;
}
case 258280:
{
returnValue = F("Quirlaer Str.");
break;
}
case 258281:
{
returnValue = F("Quirlpromenade");
break;
}
case 258282:
{
returnValue = F("Quirlsberg");
break;
}
case 258283:
{
returnValue = F("Quirlweg");
break;
}
case 258284:
{
returnValue = F("Quirnbacher Str.");
break;
}
case 258285:
{
returnValue = F("Quirnbacher Weg");
break;
}
case 258286:
{
returnValue = F("Quirngasse");
break;
}
case 258287:
{
returnValue = F("Quirnheimer Str.");
break;
}
case 258288:
{
returnValue = F("Quirrestr.");
break;
}
case 258289:
{
returnValue = F("Quisdorfer Str.");
break;
}
case 258290:
{
returnValue = F("Quisdorfweg");
break;
}
case 258291:
{
returnValue = F("Quistorpweg");
break;
}
case 258292:
{
returnValue = F("Quitschenbarg");
break;
}
case 258293:
{
returnValue = F("Quitschenberg-Weg");
break;
}
case 258294:
{
returnValue = F("Quitschenbergwerg");
break;
}
case 258295:
{
returnValue = F("Quitschenhorster Damm");
break;
}
case 258296:
{
returnValue = F("Quitschenköpfe");
break;
}
case 258297:
{
returnValue = F("Quitschenredder");
break;
}
case 258298:
{
returnValue = F("Quitschenweg");
break;
}
case 258299:
{
returnValue = F("Quittelsbergstr.");
break;
}
case 258300:
{
returnValue = F("Quittelsdorf");
break;
}
case 258301:
{
returnValue = F("Quitten-Hof");
break;
}
case 258302:
{
returnValue = F("Quittenbachstr.");
break;
}
case 258303:
{
returnValue = F("Quittengarten");
break;
}
case 258304:
{
returnValue = F("Quittengasse");
break;
}
case 258305:
{
returnValue = F("Quittenhag");
break;
}
case 258306:
{
returnValue = F("Quittenhof");
break;
}
case 258307:
{
returnValue = F("Quittenstr.");
break;
}
case 258308:
{
returnValue = F("Quittensweg");
break;
}
case 258309:
{
returnValue = F("Quittenweg");
break;
}
case 258310:
{
returnValue = F("Quittstr.");
break;
}
case 258311:
{
returnValue = F("Quitzdorfer Weg");
break;
}
case 258312:
{
returnValue = F("Quitzerower Weg");
break;
}
case 258313:
{
returnValue = F("Quitzin");
break;
}
case 258314:
{
returnValue = F("Quitzower Damm");
break;
}
case 258315:
{
returnValue = F("Quitzower Str.");
break;
}
case 258316:
{
returnValue = F("Quitzowstr.");
break;
}
case 258317:
{
returnValue = F("Quitzöbeler Str.");
break;
}
case 258318:
{
returnValue = F("Quobach");
break;
}
case 258319:
{
returnValue = F("Quod");
break;
}
case 258320:
{
returnValue = F("Quodgasse");
break;
}
case 258321:
{
returnValue = F("Quodmicke");
break;
}
case 258322:
{
returnValue = F("Quohrener Str.");
break;
}
case 258323:
{
returnValue = F("Quohrener Weg");
break;
}
case 258324:
{
returnValue = F("Quolsdorfer Str.");
break;
}
case 258325:
{
returnValue = F("Quoltitzer Str.");
break;
}
case 258326:
{
returnValue = F("Quooser Str.");
break;
}
case 258327:
{
returnValue = F("Quosdorfstr.");
break;
}
case 258328:
{
returnValue = F("Quotshäuser Weg");
break;
}
case 258329:
{
returnValue = F("Quäkergracht");
break;
}
case 258330:
{
returnValue = F("Quäkerstr.");
break;
}
case 258331:
{
returnValue = F("Quälahweg");
break;
}
case 258332:
{
returnValue = F("Quälkampsweg");
break;
}
case 258333:
{
returnValue = F("Quänenburg");
break;
}
case 258334:
{
returnValue = F("Quäneweg");
break;
}
case 258335:
{
returnValue = F("Quäste");
break;
}
case 258336:
{
returnValue = F("Quät");
break;
}
case 356495:
{
returnValue = F("q");
break;
}
case 356496:
{
returnValue = F("quelläcker");
break;
}
case 356497:
{
returnValue = F("querfeldein");
break;
}
}
return returnValue;
}
