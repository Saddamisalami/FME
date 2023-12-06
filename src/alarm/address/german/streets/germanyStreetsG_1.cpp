#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameG1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 110799:
    {
        returnValue = F("G");
        break;
    }
    case 110800:
    {
        returnValue = F("G 2");
        break;
    }
    case 110801:
    {
        returnValue = F("G'häuweg");
        break;
    }
    case 110802:
    {
        returnValue = F("G'schichtenweg");
        break;
    }
    case 110803:
    {
        returnValue = F("G'steinigt");
        break;
    }
    case 110804:
    {
        returnValue = F("G'striehl");
        break;
    }
    case 110805:
    {
        returnValue = F("G- Flügel");
        break;
    }
    case 110806:
    {
        returnValue = F("G-Flügel");
        break;
    }
    case 110807:
    {
        returnValue = F("G-Weg");
        break;
    }
    case 110808:
    {
        returnValue = F("G.-Braun-Str.");
        break;
    }
    case 110809:
    {
        returnValue = F("G.-F.-Händel-Str.");
        break;
    }
    case 110810:
    {
        returnValue = F("G.-Hubert-Neidhart-Str.");
        break;
    }
    case 110811:
    {
        returnValue = F("G.-Händel-Str.");
        break;
    }
    case 110812:
    {
        returnValue = F("G.-M.-Eisenlohr-Str.");
        break;
    }
    case 110813:
    {
        returnValue = F("G3");
        break;
    }
    case 110814:
    {
        returnValue = F("G4");
        break;
    }
    case 110815:
    {
        returnValue = F("GA Am Salinengraben");
        break;
    }
    case 110816:
    {
        returnValue = F("GA Auf dem Sandhügel");
        break;
    }
    case 110817:
    {
        returnValue = F("GA Im Langen Garten");
        break;
    }
    case 110818:
    {
        returnValue = F("GA Saline");
        break;
    }
    case 110819:
    {
        returnValue = F("GEPA-Weg");
        break;
    }
    case 110820:
    {
        returnValue = F("GLS-Germany-Str.");
        break;
    }
    case 110821:
    {
        returnValue = F("GLS-Str.");
        break;
    }
    case 110822:
    {
        returnValue = F("GV-Str.");
        break;
    }
    case 110823:
    {
        returnValue = F("GVS Meischendorf - Altenhammer");
        break;
    }
    case 110824:
    {
        returnValue = F("Gaabstr.");
        break;
    }
    case 110825:
    {
        returnValue = F("Gaabweg");
        break;
    }
    case 110826:
    {
        returnValue = F("Gaade");
        break;
    }
    case 110827:
    {
        returnValue = F("Gaadeberg");
        break;
    }
    case 110828:
    {
        returnValue = F("Gaadt");
        break;
    }
    case 110829:
    {
        returnValue = F("Gaardener Ring");
        break;
    }
    case 110830:
    {
        returnValue = F("Gaardeweg");
        break;
    }
    case 110831:
    {
        returnValue = F("Gaardshalligweg");
        break;
    }
    case 110832:
    {
        returnValue = F("Gaarlandstr.");
        break;
    }
    case 110833:
    {
        returnValue = F("Gaarnweg");
        break;
    }
    case 110834:
    {
        returnValue = F("Gaartzer Damm");
        break;
    }
    case 110835:
    {
        returnValue = F("Gaarwang");
        break;
    }
    case 110836:
    {
        returnValue = F("Gaarzer Weg");
        break;
    }
    case 110837:
    {
        returnValue = F("Gaarzerfelde");
        break;
    }
    case 110838:
    {
        returnValue = F("Gaasebrickelsche");
        break;
    }
    case 110839:
    {
        returnValue = F("Gaasemaad");
        break;
    }
    case 110840:
    {
        returnValue = F("Gaat");
        break;
    }
    case 110841:
    {
        returnValue = F("Gabainstr.");
        break;
    }
    case 110842:
    {
        returnValue = F("Gabbelweg");
        break;
    }
    case 110843:
    {
        returnValue = F("Gabe Gottes");
        break;
    }
    case 110844:
    {
        returnValue = F("Gabe-Gottes-Weg");
        break;
    }
    case 110845:
    {
        returnValue = F("Gabel");
        break;
    }
    case 110846:
    {
        returnValue = F("Gabel-Schaffen-Str.");
        break;
    }
    case 110847:
    {
        returnValue = F("Gabelbachstr.");
        break;
    }
    case 110848:
    {
        returnValue = F("Gabelberg");
        break;
    }
    case 110849:
    {
        returnValue = F("Gabeldobelweg");
        break;
    }
    case 110850:
    {
        returnValue = F("Gabeleck");
        break;
    }
    case 110851:
    {
        returnValue = F("Gabeleichenweg");
        break;
    }
    case 110852:
    {
        returnValue = F("Gabeleichweg");
        break;
    }
    case 110853:
    {
        returnValue = F("Gabelentzstr.");
        break;
    }
    case 110854:
    {
        returnValue = F("Gabeler Str.");
        break;
    }
    case 110855:
    {
        returnValue = F("Gabelfeichechaussee");
        break;
    }
    case 110856:
    {
        returnValue = F("Gabelgasse");
        break;
    }
    case 110857:
    {
        returnValue = F("Gabelhaurundweg");
        break;
    }
    case 110858:
    {
        returnValue = F("Gabelholzstr.");
        break;
    }
    case 110859:
    {
        returnValue = F("Gabelhorst");
        break;
    }
    case 110860:
    {
        returnValue = F("Gabelinckstr.");
        break;
    }
    case 110861:
    {
        returnValue = F("Gabeliner Weg");
        break;
    }
    case 110862:
    {
        returnValue = F("Gabelkannenweg");
        break;
    }
    case 110863:
    {
        returnValue = F("Gabellinie");
        break;
    }
    case 110864:
    {
        returnValue = F("Gabelmannsplatz");
        break;
    }
    case 110865:
    {
        returnValue = F("Gabelmissweg");
        break;
    }
    case 110866:
    {
        returnValue = F("Gabelplatz");
        break;
    }
    case 110867:
    {
        returnValue = F("Gabelsbach");
        break;
    }
    case 110868:
    {
        returnValue = F("Gabelsberg");
        break;
    }
    case 110869:
    {
        returnValue = F("Gabelsberger Platz");
        break;
    }
    case 110870:
    {
        returnValue = F("Gabelsberger Str.");
        break;
    }
    case 110871:
    {
        returnValue = F("Gabelsberger Weg");
        break;
    }
    case 110872:
    {
        returnValue = F("Gabelsbergerhofstr.");
        break;
    }
    case 110873:
    {
        returnValue = F("Gabelsbergerplatz");
        break;
    }
    case 110874:
    {
        returnValue = F("Gabelsbergerstr.");
        break;
    }
    case 110875:
    {
        returnValue = F("Gabelsbergerweg");
        break;
    }
    case 110876:
    {
        returnValue = F("Gabelsbergstr.");
        break;
    }
    case 110877:
    {
        returnValue = F("Gabelsbergweg");
        break;
    }
    case 110878:
    {
        returnValue = F("Gabelsbornstr.");
        break;
    }
    case 110879:
    {
        returnValue = F("Gabelschrofenweg");
        break;
    }
    case 110880:
    {
        returnValue = F("Gabelseckenweg");
        break;
    }
    case 110881:
    {
        returnValue = F("Gabelskamp");
        break;
    }
    case 110882:
    {
        returnValue = F("Gabelsmühler Weg");
        break;
    }
    case 110883:
    {
        returnValue = F("Gabelstr.");
        break;
    }
    case 110884:
    {
        returnValue = F("Gabelweg");
        break;
    }
    case 110885:
    {
        returnValue = F("Gabelweihenweg");
        break;
    }
    case 110886:
    {
        returnValue = F("Gabeläcker");
        break;
    }
    case 110887:
    {
        returnValue = F("Gabenshauweg");
        break;
    }
    case 110888:
    {
        returnValue = F("Gabergasse");
        break;
    }
    case 110889:
    {
        returnValue = F("Gaberlplatz");
        break;
    }
    case 110890:
    {
        returnValue = F("Gaberlstr.");
        break;
    }
    case 110891:
    {
        returnValue = F("Gaberlsägstr.");
        break;
    }
    case 110892:
    {
        returnValue = F("Gabermühlweg");
        break;
    }
    case 110893:
    {
        returnValue = F("Gabersbergstr.");
        break;
    }
    case 110894:
    {
        returnValue = F("Gabersee");
        break;
    }
    case 110895:
    {
        returnValue = F("Gabersrankweg");
        break;
    }
    case 110896:
    {
        returnValue = F("Gaberstallgasse");
        break;
    }
    case 110897:
    {
        returnValue = F("Gabes");
        break;
    }
    case 110898:
    {
        returnValue = F("Gabingerweg");
        break;
    }
    case 110899:
    {
        returnValue = F("Gabion-Brücke");
        break;
    }
    case 110900:
    {
        returnValue = F("Gabis");
        break;
    }
    case 110901:
    {
        returnValue = F("Gabisheck");
        break;
    }
    case 110902:
    {
        returnValue = F("Gabisweg");
        break;
    }
    case 110903:
    {
        returnValue = F("Gablenberg");
        break;
    }
    case 110904:
    {
        returnValue = F("Gablenberger Hauptstr.");
        break;
    }
    case 110905:
    {
        returnValue = F("Gablenberger Weg");
        break;
    }
    case 110906:
    {
        returnValue = F("Gablenzer Dorfstr.");
        break;
    }
    case 110907:
    {
        returnValue = F("Gablenzer Hauptstr.");
        break;
    }
    case 110908:
    {
        returnValue = F("Gablenzer Str.");
        break;
    }
    case 110909:
    {
        returnValue = F("Gablenzer Waldweg");
        break;
    }
    case 110910:
    {
        returnValue = F("Gablenzer Weg");
        break;
    }
    case 110911:
    {
        returnValue = F("Gablenzstr.");
        break;
    }
    case 110912:
    {
        returnValue = F("Gablenzweg");
        break;
    }
    case 110913:
    {
        returnValue = F("Gabler Str.");
        break;
    }
    case 110914:
    {
        returnValue = F("Gablergasse");
        break;
    }
    case 110915:
    {
        returnValue = F("Gablerstr.");
        break;
    }
    case 110916:
    {
        returnValue = F("Gablinger Str.");
        break;
    }
    case 110917:
    {
        returnValue = F("Gablinger Weg");
        break;
    }
    case 110918:
    {
        returnValue = F("Gablonzer Platz");
        break;
    }
    case 110919:
    {
        returnValue = F("Gablonzer Str.");
        break;
    }
    case 110920:
    {
        returnValue = F("Gablonzer Weg");
        break;
    }
    case 110921:
    {
        returnValue = F("Gablonzstr.");
        break;
    }
    case 110922:
    {
        returnValue = F("Gabor Park");
        break;
    }
    case 110923:
    {
        returnValue = F("Gaborplatz");
        break;
    }
    case 110924:
    {
        returnValue = F("Gabow");
        break;
    }
    case 110925:
    {
        returnValue = F("Gabrechter Weg");
        break;
    }
    case 110926:
    {
        returnValue = F("Gabriel Wackers Weg");
        break;
    }
    case 110927:
    {
        returnValue = F("Gabriel-Baumann-Str.");
        break;
    }
    case 110928:
    {
        returnValue = F("Gabriel-Biel-Platz");
        break;
    }
    case 110929:
    {
        returnValue = F("Gabriel-Biel-Str.");
        break;
    }
    case 110930:
    {
        returnValue = F("Gabriel-Bock-Weg");
        break;
    }
    case 110931:
    {
        returnValue = F("Gabriel-Grupello-Weg");
        break;
    }
    case 110932:
    {
        returnValue = F("Gabriel-Lämmle-Str.");
        break;
    }
    case 110933:
    {
        returnValue = F("Gabriel-Löwenstein-Str.");
        break;
    }
    case 110934:
    {
        returnValue = F("Gabriel-Max-Str.");
        break;
    }
    case 110935:
    {
        returnValue = F("Gabriel-Mayer-Str.");
        break;
    }
    case 110936:
    {
        returnValue = F("Gabriel-Seidl-Str.");
        break;
    }
    case 110937:
    {
        returnValue = F("Gabriel-Sonntag-Str.");
        break;
    }
    case 110938:
    {
        returnValue = F("Gabriel-Vogt-Str.");
        break;
    }
    case 110939:
    {
        returnValue = F("Gabriel-von-Eyb-Str.");
        break;
    }
    case 110940:
    {
        returnValue = F("Gabriel-von-Seidl-Platz");
        break;
    }
    case 110941:
    {
        returnValue = F("Gabriel-von-Seidl-Str.");
        break;
    }
    case 110942:
    {
        returnValue = F("Gabriele-Faust-Str.");
        break;
    }
    case 110943:
    {
        returnValue = F("Gabriele-Fries-Str.");
        break;
    }
    case 110944:
    {
        returnValue = F("Gabriele-Münter-Hof");
        break;
    }
    case 110945:
    {
        returnValue = F("Gabriele-Münter-Str.");
        break;
    }
    case 110946:
    {
        returnValue = F("Gabriele-Münter-Weg");
        break;
    }
    case 110947:
    {
        returnValue = F("Gabriele-Wohmann-Weg");
        break;
    }
    case 110948:
    {
        returnValue = F("Gabriele-von-Fechenbach-Str.");
        break;
    }
    case 110949:
    {
        returnValue = F("Gabriele-von-Glasow-Weg");
        break;
    }
    case 110950:
    {
        returnValue = F("Gabrielenstr.");
        break;
    }
    case 110951:
    {
        returnValue = F("Gabrielenweg");
        break;
    }
    case 110952:
    {
        returnValue = F("Gabrieliplatz");
        break;
    }
    case 110953:
    {
        returnValue = F("Gabrieliring");
        break;
    }
    case 110954:
    {
        returnValue = F("Gabrielistr.");
        break;
    }
    case 110955:
    {
        returnValue = F("Gabrielkirchplatz");
        break;
    }
    case 110956:
    {
        returnValue = F("Gabrielstr.");
        break;
    }
    case 110957:
    {
        returnValue = F("Gabrielswarft");
        break;
    }
    case 110958:
    {
        returnValue = F("Gabrielsweg");
        break;
    }
    case 110959:
    {
        returnValue = F("Gabrielweg");
        break;
    }
    case 110960:
    {
        returnValue = F("Gabschmühle");
        break;
    }
    case 110961:
    {
        returnValue = F("Gabsheimer Weg");
        break;
    }
    case 110962:
    {
        returnValue = F("Gabweg");
        break;
    }
    case 110963:
    {
        returnValue = F("Gabäckerweg");
        break;
    }
    case 110964:
    {
        returnValue = F("Gachelsweg");
        break;
    }
    case 110965:
    {
        returnValue = F("Gachenaustr.");
        break;
    }
    case 110966:
    {
        returnValue = F("Gachenbacher Str.");
        break;
    }
    case 110967:
    {
        returnValue = F("Gachensolden");
        break;
    }
    case 110968:
    {
        returnValue = F("Gachenweg");
        break;
    }
    case 110969:
    {
        returnValue = F("Gachenwinkelweg");
        break;
    }
    case 110970:
    {
        returnValue = F("Gackauer Str.");
        break;
    }
    case 110971:
    {
        returnValue = F("Gackenhof");
        break;
    }
    case 110972:
    {
        returnValue = F("Gackenmühle");
        break;
    }
    case 110973:
    {
        returnValue = F("Gackensteinweg");
        break;
    }
    case 110974:
    {
        returnValue = F("Gadamerplatz");
        break;
    }
    case 110975:
    {
        returnValue = F("Gadastr.");
        break;
    }
    case 110976:
    {
        returnValue = F("Gadderbaumer Str.");
        break;
    }
    case 110977:
    {
        returnValue = F("Gadebuscher Chaussee");
        break;
    }
    case 110978:
    {
        returnValue = F("Gadebuscher Str.");
        break;
    }
    case 110979:
    {
        returnValue = F("Gadebuscher Str. Paetrow");
        break;
    }
    case 110980:
    {
        returnValue = F("Gadebuscher Str. Passow");
        break;
    }
    case 110981:
    {
        returnValue = F("Gadebuscher Weg");
        break;
    }
    case 110982:
    {
        returnValue = F("Gadebuschweg");
        break;
    }
    case 110983:
    {
        returnValue = F("Gadegast");
        break;
    }
    case 110984:
    {
        returnValue = F("Gadegastweg");
        break;
    }
    case 110985:
    {
        returnValue = F("Gadelander Str.");
        break;
    }
    case 110986:
    {
        returnValue = F("Gadelheimer Mühle");
        break;
    }
    case 110987:
    {
        returnValue = F("Gadelsdorfer Weg");
        break;
    }
    case 110988:
    {
        returnValue = F("Gademannstr.");
        break;
    }
    case 110989:
    {
        returnValue = F("Gaden");
        break;
    }
    case 110990:
    {
        returnValue = F("Gadendorfer Weg");
        break;
    }
    case 110991:
    {
        returnValue = F("Gadener Str.");
        break;
    }
    case 110992:
    {
        returnValue = F("Gadener Weg");
        break;
    }
    case 110993:
    {
        returnValue = F("Gadengasse");
        break;
    }
    case 110994:
    {
        returnValue = F("Gadenstedter Str.");
        break;
    }
    case 110995:
    {
        returnValue = F("Gadenstedter Weg");
        break;
    }
    case 110996:
    {
        returnValue = F("Gadenweg");
        break;
    }
    case 110997:
    {
        returnValue = F("Gaderner Str.");
        break;
    }
    case 110998:
    {
        returnValue = F("Gaderner Weg");
        break;
    }
    case 110999:
    {
        returnValue = F("Gadernheimer Str.");
        break;
    }
    case 111000:
    {
        returnValue = F("Gaderother Str.");
        break;
    }
    case 111001:
    {
        returnValue = F("Gaderstr.");
        break;
    }
    case 111002:
    {
        returnValue = F("Gadesbünden");
        break;
    }
    case 111003:
    {
        returnValue = F("Gadesbündener Damm");
        break;
    }
    case 111004:
    {
        returnValue = F("Gadewitz");
        break;
    }
    case 111005:
    {
        returnValue = F("Gadewitzer Weg");
        break;
    }
    case 111006:
    {
        returnValue = F("Gadham");
        break;
    }
    case 111007:
    {
        returnValue = F("Gadheimer Str.");
        break;
    }
    case 111008:
    {
        returnValue = F("Gadheimer Weg");
        break;
    }
    case 111009:
    {
        returnValue = F("Gaditzer Str.");
        break;
    }
    case 111010:
    {
        returnValue = F("Gadmundstr.");
        break;
    }
    case 111011:
    {
        returnValue = F("Gadollastr.");
        break;
    }
    case 111012:
    {
        returnValue = F("Gadostr.");
        break;
    }
    case 111013:
    {
        returnValue = F("Gadow Nord");
        break;
    }
    case 111014:
    {
        returnValue = F("Gadower Damm");
        break;
    }
    case 111015:
    {
        returnValue = F("Gadower Dorfstr.");
        break;
    }
    case 111016:
    {
        returnValue = F("Gadower Landstr.");
        break;
    }
    case 111017:
    {
        returnValue = F("Gadower Str.");
        break;
    }
    case 111018:
    {
        returnValue = F("Gadsdorfer Str.");
        break;
    }
    case 111019:
    {
        returnValue = F("Gadsdorfer Weg");
        break;
    }
    case 111020:
    {
        returnValue = F("Gadsenstr.");
        break;
    }
    case 111021:
    {
        returnValue = F("Gadumerstr.");
        break;
    }
    case 111022:
    {
        returnValue = F("Gaedechensweg");
        break;
    }
    case 111023:
    {
        returnValue = F("Gaedertzstr.");
        break;
    }
    case 111024:
    {
        returnValue = F("Gaedestr.");
        break;
    }
    case 111025:
    {
        returnValue = F("Gaehtjestr.");
        break;
    }
    case 111026:
    {
        returnValue = F("Gaemsgasse");
        break;
    }
    case 111027:
    {
        returnValue = F("Gaengele");
        break;
    }
    case 111028:
    {
        returnValue = F("Gaertnerbrücke");
        break;
    }
    case 111029:
    {
        returnValue = F("Gaertnerstr.");
        break;
    }
    case 111030:
    {
        returnValue = F("Gaesdoncker Str.");
        break;
    }
    case 111031:
    {
        returnValue = F("Gaetgartenweg");
        break;
    }
    case 111032:
    {
        returnValue = F("Gaffel");
        break;
    }
    case 111033:
    {
        returnValue = F("Gaffelschonerweg");
        break;
    }
    case 111034:
    {
        returnValue = F("Gaffelstadt");
        break;
    }
    case 111035:
    {
        returnValue = F("Gaffelweg");
        break;
    }
    case 111036:
    {
        returnValue = F("Gaffenhaldenweg");
        break;
    }
    case 111037:
    {
        returnValue = F("Gaffental");
        break;
    }
    case 111038:
    {
        returnValue = F("Gaffkystr.");
        break;
    }
    case 111039:
    {
        returnValue = F("Gaffkyweg");
        break;
    }
    case 111040:
    {
        returnValue = F("Gagarinplatz");
        break;
    }
    case 111041:
    {
        returnValue = F("Gagarinring");
        break;
    }
    case 111042:
    {
        returnValue = F("Gagarinstr.");
        break;
    }
    case 111043:
    {
        returnValue = F("Gageldonk");
        break;
    }
    case 111044:
    {
        returnValue = F("Gagelstr.");
        break;
    }
    case 111045:
    {
        returnValue = F("Gagelstrauchweg");
        break;
    }
    case 111046:
    {
        returnValue = F("Gagelweg");
        break;
    }
    case 111047:
    {
        returnValue = F("Gagenhardtweg");
        break;
    }
    case 111048:
    {
        returnValue = F("Gagern");
        break;
    }
    case 111049:
    {
        returnValue = F("Gagernbergweg");
        break;
    }
    case 111050:
    {
        returnValue = F("Gagernring");
        break;
    }
    case 111051:
    {
        returnValue = F("Gagernstr.");
        break;
    }
    case 111052:
    {
        returnValue = F("Gagernweg");
        break;
    }
    case 111053:
    {
        returnValue = F("Gagers");
        break;
    }
    case 111054:
    {
        returnValue = F("Gagershöhe");
        break;
    }
    case 111055:
    {
        returnValue = F("Gagersstr.");
        break;
    }
    case 111056:
    {
        returnValue = F("Gaggenauer Str.");
        break;
    }
    case 111057:
    {
        returnValue = F("Gaggenaystr.");
        break;
    }
    case 111058:
    {
        returnValue = F("Gaggers Str.");
        break;
    }
    case 111059:
    {
        returnValue = F("Gaggstatter Str.");
        break;
    }
    case 111060:
    {
        returnValue = F("Gaggstr.");
        break;
    }
    case 111061:
    {
        returnValue = F("Gaglower Landstr.");
        break;
    }
    case 111062:
    {
        returnValue = F("Gaglower Str.");
        break;
    }
    case 111063:
    {
        returnValue = F("Gagnyweg");
        break;
    }
    case 111064:
    {
        returnValue = F("Gahenstr.");
        break;
    }
    case 111065:
    {
        returnValue = F("Gahlendorf");
        break;
    }
    case 111066:
    {
        returnValue = F("Gahlendorfer Weg");
        break;
    }
    case 111067:
    {
        returnValue = F("Gahlener Dorfstr.");
        break;
    }
    case 111068:
    {
        returnValue = F("Gahlener Str.");
        break;
    }
    case 111069:
    {
        returnValue = F("Gahlener Weg");
        break;
    }
    case 111070:
    {
        returnValue = F("Gahlener Ziegelei");
        break;
    }
    case 111071:
    {
        returnValue = F("Gahlensche Str.");
        break;
    }
    case 111072:
    {
        returnValue = F("Gahlenstr.");
        break;
    }
    case 111073:
    {
        returnValue = F("Gahlenzer Hohle");
        break;
    }
    case 111074:
    {
        returnValue = F("Gahlenzer Siedlung");
        break;
    }
    case 111075:
    {
        returnValue = F("Gahlenzer Str.");
        break;
    }
    case 111076:
    {
        returnValue = F("Gahlingspfad");
        break;
    }
    case 111077:
    {
        returnValue = F("Gahlkower Weg");
        break;
    }
    case 111078:
    {
        returnValue = F("Gahlkower Wende");
        break;
    }
    case 111079:
    {
        returnValue = F("Gahlstorf");
        break;
    }
    case 111080:
    {
        returnValue = F("Gahma");
        break;
    }
    case 111081:
    {
        returnValue = F("Gahmener Kamp");
        break;
    }
    case 111082:
    {
        returnValue = F("Gahmener Str.");
        break;
    }
    case 111083:
    {
        returnValue = F("Gahmweg");
        break;
    }
    case 111084:
    {
        returnValue = F("Gahrenberger Str.");
        break;
    }
    case 111085:
    {
        returnValue = F("Gahrenbergstr.");
        break;
    }
    case 111086:
    {
        returnValue = F("Gahrenfeld");
        break;
    }
    case 111087:
    {
        returnValue = F("Gahrenknick");
        break;
    }
    case 111088:
    {
        returnValue = F("Gahroer Weg");
        break;
    }
    case 111089:
    {
        returnValue = F("Gahryer Hauptstr.");
        break;
    }
    case 111090:
    {
        returnValue = F("Gaiackerweg");
        break;
    }
    case 111091:
    {
        returnValue = F("Gaibacher Str.");
        break;
    }
    case 111092:
    {
        returnValue = F("Gaiberger Str.");
        break;
    }
    case 111093:
    {
        returnValue = F("Gaiberger Weg");
        break;
    }
    case 111094:
    {
        returnValue = F("Gaibergweg");
        break;
    }
    case 111095:
    {
        returnValue = F("Gaierleshauweg");
        break;
    }
    case 111096:
    {
        returnValue = F("Gaiernstr.");
        break;
    }
    case 111097:
    {
        returnValue = F("Gaiernweg");
        break;
    }
    case 111098:
    {
        returnValue = F("Gaiersäcker");
        break;
    }
    case 111099:
    {
        returnValue = F("Gaierweg");
        break;
    }
    case 111100:
    {
        returnValue = F("Gaifweg");
        break;
    }
    case 111101:
    {
        returnValue = F("Gaiganzer Hauptstr.");
        break;
    }
    case 111102:
    {
        returnValue = F("Gaiganzer Str.");
        break;
    }
    case 111103:
    {
        returnValue = F("Gaiganzer Weg");
        break;
    }
    case 111104:
    {
        returnValue = F("Gaigaß");
        break;
    }
    case 111105:
    {
        returnValue = F("Gaigelderweg");
        break;
    }
    case 111106:
    {
        returnValue = F("Gaiglstr.");
        break;
    }
    case 111107:
    {
        returnValue = F("Gaihofstr.");
        break;
    }
    case 111108:
    {
        returnValue = F("Gaikebüll");
        break;
    }
    case 111109:
    {
        returnValue = F("Gail'scher Park");
        break;
    }
    case 111110:
    {
        returnValue = F("Gailachstr.");
        break;
    }
    case 111111:
    {
        returnValue = F("Gailachweg");
        break;
    }
    case 111112:
    {
        returnValue = F("Gailbacher Str.");
        break;
    }
    case 111113:
    {
        returnValue = F("Gailbacher Weg");
        break;
    }
    case 111114:
    {
        returnValue = F("Gailberg");
        break;
    }
    case 111115:
    {
        returnValue = F("Gaildorfer Fußweg");
        break;
    }
    case 111116:
    {
        returnValue = F("Gaildorfer Str.");
        break;
    }
    case 111117:
    {
        returnValue = F("Gailenbacher Weg");
        break;
    }
    case 111118:
    {
        returnValue = F("Gailenbachweg");
        break;
    }
    case 111119:
    {
        returnValue = F("Gailenbergstr.");
        break;
    }
    case 111120:
    {
        returnValue = F("Gailenbühlweg");
        break;
    }
    case 111121:
    {
        returnValue = F("Gailenreuther Str.");
        break;
    }
    case 111122:
    {
        returnValue = F("Gailerweg");
        break;
    }
    case 111123:
    {
        returnValue = F("Gailhausen");
        break;
    }
    case 111124:
    {
        returnValue = F("Gailhofer Str.");
        break;
    }
    case 111125:
    {
        returnValue = F("Gailhöfe");
        break;
    }
    case 111126:
    {
        returnValue = F("Gailingener Str.");
        break;
    }
    case 111127:
    {
        returnValue = F("Gailinger Str.");
        break;
    }
    case 111128:
    {
        returnValue = F("Gailingerstr.");
        break;
    }
    case 111129:
    {
        returnValue = F("Gailingsweg");
        break;
    }
    case 111130:
    {
        returnValue = F("Gailkircherstr.");
        break;
    }
    case 111131:
    {
        returnValue = F("Gailling");
        break;
    }
    case 111132:
    {
        returnValue = F("Gaillstr.");
        break;
    }
    case 111133:
    {
        returnValue = F("Gailnauer Str.");
        break;
    }
    case 111134:
    {
        returnValue = F("Gailoher Hauptstr.");
        break;
    }
    case 111135:
    {
        returnValue = F("Gailoher Weg");
        break;
    }
    case 111136:
    {
        returnValue = F("Gailrother Str.");
        break;
    }
    case 111137:
    {
        returnValue = F("Gailrother Weg");
        break;
    }
    case 111138:
    {
        returnValue = F("Gailsbacher Str.");
        break;
    }
    case 111139:
    {
        returnValue = F("Gailsbacher Weg");
        break;
    }
    case 111140:
    {
        returnValue = F("Gaimersheimer Mitterweg");
        break;
    }
    case 111141:
    {
        returnValue = F("Gaimersheimer Str.");
        break;
    }
    case 111142:
    {
        returnValue = F("Gaimersheimer Weg");
        break;
    }
    case 111143:
    {
        returnValue = F("Gaimweg");
        break;
    }
    case 111144:
    {
        returnValue = F("Gaimühler Str.");
        break;
    }
    case 111145:
    {
        returnValue = F("Gaindorf");
        break;
    }
    case 111146:
    {
        returnValue = F("Gainhartinger Sreaße");
        break;
    }
    case 111147:
    {
        returnValue = F("Gainstorfer Str.");
        break;
    }
    case 111148:
    {
        returnValue = F("Gaintalsträßle");
        break;
    }
    case 111149:
    {
        returnValue = F("Gairen Sträßchen");
        break;
    }
    case 111150:
    {
        returnValue = F("Gairengasse");
        break;
    }
    case 111151:
    {
        returnValue = F("Gairenstr.");
        break;
    }
    case 111152:
    {
        returnValue = F("Gairentraufweg");
        break;
    }
    case 111153:
    {
        returnValue = F("Gairenweg");
        break;
    }
    case 111154:
    {
        returnValue = F("Gairenwieseweg");
        break;
    }
    case 111155:
    {
        returnValue = F("Gairleweg");
        break;
    }
    case 111156:
    {
        returnValue = F("Gaisackerweg");
        break;
    }
    case 111157:
    {
        returnValue = F("Gaisbach");
        break;
    }
    case 111158:
    {
        returnValue = F("Gaisbacher Str.");
        break;
    }
    case 111159:
    {
        returnValue = F("Gaisbachpfad");
        break;
    }
    case 111160:
    {
        returnValue = F("Gaisbachstr.");
        break;
    }
    case 111161:
    {
        returnValue = F("Gaisbachweg");
        break;
    }
    case 111162:
    {
        returnValue = F("Gaisberg");
        break;
    }
    case 111163:
    {
        returnValue = F("Gaisberger Weg");
        break;
    }
    case 111164:
    {
        returnValue = F("Gaisbergring");
        break;
    }
    case 111165:
    {
        returnValue = F("Gaisbergstr.");
        break;
    }
    case 111166:
    {
        returnValue = F("Gaisbergsträßle");
        break;
    }
    case 111167:
    {
        returnValue = F("Gaisbergturmweg");
        break;
    }
    case 111168:
    {
        returnValue = F("Gaisbergweg");
        break;
    }
    case 111169:
    {
        returnValue = F("Gaisbergweg / Gaisberg");
        break;
    }
    case 111170:
    {
        returnValue = F("Gaisbeurer Str.");
        break;
    }
    case 111171:
    {
        returnValue = F("Gaisbornstr.");
        break;
    }
    case 111172:
    {
        returnValue = F("Gaisbrunnensträßle");
        break;
    }
    case 111173:
    {
        returnValue = F("Gaisbrunnenweg");
        break;
    }
    case 111174:
    {
        returnValue = F("Gaisburgstr.");
        break;
    }
    case 111175:
    {
        returnValue = F("Gaisböhlweg");
        break;
    }
    case 111176:
    {
        returnValue = F("Gaisbühl");
        break;
    }
    case 111177:
    {
        returnValue = F("Gaisbühl Hofgut");
        break;
    }
    case 111178:
    {
        returnValue = F("Gaisbühler Ortsstr.");
        break;
    }
    case 111179:
    {
        returnValue = F("Gaisbühlstr.");
        break;
    }
    case 111180:
    {
        returnValue = F("Gaisbühlweg");
        break;
    }
    case 111181:
    {
        returnValue = F("Gaisbürde");
        break;
    }
    case 111182:
    {
        returnValue = F("Gaischberg");
        break;
    }
    case 111183:
    {
        returnValue = F("Gaisdorf");
        break;
    }
    case 111184:
    {
        returnValue = F("Gaisdorfer Str.");
        break;
    }
    case 111185:
    {
        returnValue = F("Gaisenbergstr.");
        break;
    }
    case 111186:
    {
        returnValue = F("Gaisengasse");
        break;
    }
    case 111187:
    {
        returnValue = F("Gaisenrain");
        break;
    }
    case 111188:
    {
        returnValue = F("Gaisentalstr.");
        break;
    }
    case 111189:
    {
        returnValue = F("Gaiser Str.");
        break;
    }
    case 111190:
    {
        returnValue = F("Gaisergasse");
        break;
    }
    case 111191:
    {
        returnValue = F("Gaiserplatz");
        break;
    }
    case 111192:
    {
        returnValue = F("Gaiserstr.");
        break;
    }
    case 111193:
    {
        returnValue = F("Gaisfeldweg");
        break;
    }
    case 111194:
    {
        returnValue = F("Gaisgasse");
        break;
    }
    case 111195:
    {
        returnValue = F("Gaisgraben");
        break;
    }
    case 111196:
    {
        returnValue = F("Gaisgurgelweg");
        break;
    }
    case 111197:
    {
        returnValue = F("Gaishackener Str.");
        break;
    }
    case 111198:
    {
        returnValue = F("Gaishaldenweg");
        break;
    }
    case 111199:
    {
        returnValue = F("Gaishardter Hauptstr.");
        break;
    }
    case 111200:
    {
        returnValue = F("Gaishaselweg");
        break;
    }
    case 111201:
    {
        returnValue = F("Gaishausen");
        break;
    }
    case 111202:
    {
        returnValue = F("Gaisheim");
        break;
    }
    case 111203:
    {
        returnValue = F("Gaishof");
        break;
    }
    case 111204:
    {
        returnValue = F("Gaishofer Str.");
        break;
    }
    case 111205:
    {
        returnValue = F("Gaishoferstr.");
        break;
    }
    case 111206:
    {
        returnValue = F("Gaishornstr.");
        break;
    }
    case 111207:
    {
        returnValue = F("Gaishornweg");
        break;
    }
    case 111208:
    {
        returnValue = F("Gaishämmerstr.");
        break;
    }
    case 111209:
    {
        returnValue = F("Gaishölle");
        break;
    }
    case 111210:
    {
        returnValue = F("Gaishöllpark");
        break;
    }
    case 111211:
    {
        returnValue = F("Gaisirlach");
        break;
    }
    case 111212:
    {
        returnValue = F("Gaiskopfweg");
        break;
    }
    case 111213:
    {
        returnValue = F("Gaislochweg");
        break;
    }
    case 111214:
    {
        returnValue = F("Gaismahdweg");
        break;
    }
    case 111215:
    {
        returnValue = F("Gaismannshofstr.");
        break;
    }
    case 111216:
    {
        returnValue = F("Gaismarkter Str.");
        break;
    }
    case 111217:
    {
        returnValue = F("Gaismarkter Weg");
        break;
    }
    case 111218:
    {
        returnValue = F("Gaismühlring");
        break;
    }
    case 111219:
    {
        returnValue = F("Gaismühlweg");
        break;
    }
    case 111220:
    {
        returnValue = F("Gaisrain");
        break;
    }
    case 111221:
    {
        returnValue = F("Gaisrainweg");
        break;
    }
    case 111222:
    {
        returnValue = F("Gaisstallweg");
        break;
    }
    case 111223:
    {
        returnValue = F("Gaistalstr.");
        break;
    }
    case 111224:
    {
        returnValue = F("Gaistalweg");
        break;
    }
    case 111225:
    {
        returnValue = F("Gaisthaler Str.");
        break;
    }
    case 111226:
    {
        returnValue = F("Gaisträgerweg");
        break;
    }
    case 111227:
    {
        returnValue = F("Gaisweg");
        break;
    }
    case 111228:
    {
        returnValue = F("Gaisweiler");
        break;
    }
    case 111229:
    {
        returnValue = F("Gaiswieslesweg");
        break;
    }
    case 111230:
    {
        returnValue = F("Gaiswinkelgasse");
        break;
    }
    case 111231:
    {
        returnValue = F("Gaisäcker");
        break;
    }
    case 111232:
    {
        returnValue = F("Gaitlingstiege");
        break;
    }
    case 111233:
    {
        returnValue = F("Gaitlingweg");
        break;
    }
    case 111234:
    {
        returnValue = F("Gaizen");
        break;
    }
    case 111235:
    {
        returnValue = F("Gaißa");
        break;
    }
    case 111236:
    {
        returnValue = F("Gaißabrücke");
        break;
    }
    case 111237:
    {
        returnValue = F("Gaißacher Str.");
        break;
    }
    case 111238:
    {
        returnValue = F("Gaißaweg");
        break;
    }
    case 111239:
    {
        returnValue = F("Gaißbergweg");
        break;
    }
    case 111240:
    {
        returnValue = F("Gaißbrunnenweg");
        break;
    }
    case 111241:
    {
        returnValue = F("Gaißbühlstr.");
        break;
    }
    case 111242:
    {
        returnValue = F("Gaißhofweg");
        break;
    }
    case 111243:
    {
        returnValue = F("Gaißhornstr.");
        break;
    }
    case 111244:
    {
        returnValue = F("Gala-Metzner-Platz");
        break;
    }
    case 111245:
    {
        returnValue = F("Galappmühler Str.");
        break;
    }
    case 111246:
    {
        returnValue = F("Galateaweg");
        break;
    }
    case 111247:
    {
        returnValue = F("Galater Weg");
        break;
    }
    case 111248:
    {
        returnValue = F("Galaterstr.");
        break;
    }
    case 111249:
    {
        returnValue = F("Galaxienring");
        break;
    }
    case 111250:
    {
        returnValue = F("Galaystr.");
        break;
    }
    case 111251:
    {
        returnValue = F("Galbergstr.");
        break;
    }
    case 111252:
    {
        returnValue = F("Galbergweg");
        break;
    }
    case 111253:
    {
        returnValue = F("Galbrinkstr.");
        break;
    }
    case 111254:
    {
        returnValue = F("Galbrunnrichstatt");
        break;
    }
    case 111255:
    {
        returnValue = F("Galbächer Warte");
        break;
    }
    case 111256:
    {
        returnValue = F("Galchinger Weg");
        break;
    }
    case 111257:
    {
        returnValue = F("Galeerengasse");
        break;
    }
    case 111258:
    {
        returnValue = F("Galenbeck");
        break;
    }
    case 111259:
    {
        returnValue = F("Galenbecker Str.");
        break;
    }
    case 111260:
    {
        returnValue = F("Galenberger Weg");
        break;
    }
    case 111261:
    {
        returnValue = F("Galenstr.");
        break;
    }
    case 111262:
    {
        returnValue = F("Galenusstr.");
        break;
    }
    case 111263:
    {
        returnValue = F("Galeonenweg");
        break;
    }
    case 111264:
    {
        returnValue = F("Galeottensträßchen");
        break;
    }
    case 111265:
    {
        returnValue = F("Galerie Am Ring");
        break;
    }
    case 111266:
    {
        returnValue = F("Galerie des Duftenden Wassers");
        break;
    }
    case 111267:
    {
        returnValue = F("Galerieplatz");
        break;
    }
    case 111268:
    {
        returnValue = F("Galeriestr.");
        break;
    }
    case 111269:
    {
        returnValue = F("Galerieweg");
        break;
    }
    case 111270:
    {
        returnValue = F("Galetschweg");
        break;
    }
    case 111271:
    {
        returnValue = F("Galgbrunnen");
        break;
    }
    case 111272:
    {
        returnValue = F("Galgebergbrücke");
        break;
    }
    case 111273:
    {
        returnValue = F("Galgen");
        break;
    }
    case 111274:
    {
        returnValue = F("Galgenacker");
        break;
    }
    case 111275:
    {
        returnValue = F("Galgenackerweg");
        break;
    }
    case 111276:
    {
        returnValue = F("Galgenanger");
        break;
    }
    case 111277:
    {
        returnValue = F("Galgenbachstr.");
        break;
    }
    case 111278:
    {
        returnValue = F("Galgenbachweg");
        break;
    }
    case 111279:
    {
        returnValue = F("Galgenbargweg");
        break;
    }
    case 111280:
    {
        returnValue = F("Galgenberg");
        break;
    }
    case 111281:
    {
        returnValue = F("Galgenberg Weg");
        break;
    }
    case 111282:
    {
        returnValue = F("Galgenberg-Ost");
        break;
    }
    case 111283:
    {
        returnValue = F("Galgenberg-Weg");
        break;
    }
    case 111284:
    {
        returnValue = F("Galgenberg-West");
        break;
    }
    case 111285:
    {
        returnValue = F("Galgenbergblick");
        break;
    }
    case 111286:
    {
        returnValue = F("Galgenbergbrücke");
        break;
    }
    case 111287:
    {
        returnValue = F("Galgenberghang");
        break;
    }
    case 111288:
    {
        returnValue = F("Galgenbergring");
        break;
    }
    case 111289:
    {
        returnValue = F("Galgenbergsfeld");
        break;
    }
    case 111290:
    {
        returnValue = F("Galgenbergsheide");
        break;
    }
    case 111291:
    {
        returnValue = F("Galgenbergsteige");
        break;
    }
    case 111292:
    {
        returnValue = F("Galgenbergstr.");
        break;
    }
    case 111293:
    {
        returnValue = F("Galgenbergsträßchen");
        break;
    }
    case 111294:
    {
        returnValue = F("Galgenbergsträßle");
        break;
    }
    case 111295:
    {
        returnValue = F("Galgenbergsweg");
        break;
    }
    case 111296:
    {
        returnValue = F("Galgenbergweg");
        break;
    }
    case 111297:
    {
        returnValue = F("Galgenbichlweg");
        break;
    }
    case 111298:
    {
        returnValue = F("Galgenbreite");
        break;
    }
    case 111299:
    {
        returnValue = F("Galgenbruch");
        break;
    }
    case 111300:
    {
        returnValue = F("Galgenbruckweg");
        break;
    }
    case 111301:
    {
        returnValue = F("Galgenbuck");
        break;
    }
    case 111302:
    {
        returnValue = F("Galgenbuckel");
        break;
    }
    case 111303:
    {
        returnValue = F("Galgenbuckelweg");
        break;
    }
    case 111304:
    {
        returnValue = F("Galgenbuckstr.");
        break;
    }
    case 111305:
    {
        returnValue = F("Galgenbuckweg");
        break;
    }
    case 111306:
    {
        returnValue = F("Galgenbusch");
        break;
    }
    case 111307:
    {
        returnValue = F("Galgenbuschweg");
        break;
    }
    case 111308:
    {
        returnValue = F("Galgenbühl");
        break;
    }
    case 111309:
    {
        returnValue = F("Galgenbühl-Schleifweg");
        break;
    }
    case 111310:
    {
        returnValue = F("Galgenbühlstr.");
        break;
    }
    case 111311:
    {
        returnValue = F("Galgenbühlweg");
        break;
    }
    case 111312:
    {
        returnValue = F("Galgendobelweg");
        break;
    }
    case 111313:
    {
        returnValue = F("Galgeneckweg");
        break;
    }
    case 111314:
    {
        returnValue = F("Galgenfeld");
        break;
    }
    case 111315:
    {
        returnValue = F("Galgenfeldstr.");
        break;
    }
    case 111316:
    {
        returnValue = F("Galgenfeldweg");
        break;
    }
    case 111317:
    {
        returnValue = F("Galgenflügel");
        break;
    }
    case 111318:
    {
        returnValue = F("Galgengartenstr.");
        break;
    }
    case 111319:
    {
        returnValue = F("Galgengasse");
        break;
    }
    case 111320:
    {
        returnValue = F("Galgengraben");
        break;
    }
    case 111321:
    {
        returnValue = F("Galgengrabenweg");
        break;
    }
    case 111322:
    {
        returnValue = F("Galgengrund");
        break;
    }
    case 111323:
    {
        returnValue = F("Galgenhalde");
        break;
    }
    case 111324:
    {
        returnValue = F("Galgenhaldenweg");
        break;
    }
    case 111325:
    {
        returnValue = F("Galgenhangweg");
        break;
    }
    case 111326:
    {
        returnValue = F("Galgenheck");
        break;
    }
    case 111327:
    {
        returnValue = F("Galgenheide");
        break;
    }
    case 111328:
    {
        returnValue = F("Galgenheider Str.");
        break;
    }
    case 111329:
    {
        returnValue = F("Galgenheider Weg");
        break;
    }
    case 111330:
    {
        returnValue = F("Galgenhofer Str.");
        break;
    }
    case 111331:
    {
        returnValue = F("Galgenhofstr.");
        break;
    }
    case 111332:
    {
        returnValue = F("Galgenhohle");
        break;
    }
    case 111333:
    {
        returnValue = F("Galgenhöhe");
        break;
    }
    case 111334:
    {
        returnValue = F("Galgenhübelstr.");
        break;
    }
    case 111335:
    {
        returnValue = F("Galgenhügelstr.");
        break;
    }
    case 111336:
    {
        returnValue = F("Galgenkamp");
        break;
    }
    case 111337:
    {
        returnValue = F("Galgenkampstr.");
        break;
    }
    case 111338:
    {
        returnValue = F("Galgenkatherlweg");
        break;
    }
    case 111339:
    {
        returnValue = F("Galgenkopfstr.");
        break;
    }
    case 111340:
    {
        returnValue = F("Galgenkopfweg");
        break;
    }
    case 111341:
    {
        returnValue = F("Galgenkämpen");
        break;
    }
    case 111342:
    {
        returnValue = F("Galgenleite");
        break;
    }
    case 111343:
    {
        returnValue = F("Galgenmatten");
        break;
    }
    case 111344:
    {
        returnValue = F("Galgenmähder");
        break;
    }
    case 111345:
    {
        returnValue = F("Galgenmühle");
        break;
    }
    case 111346:
    {
        returnValue = F("Galgenpfad");
        break;
    }
    case 111347:
    {
        returnValue = F("Galgenrain");
        break;
    }
    case 111348:
    {
        returnValue = F("Galgenrair");
        break;
    }
    case 111349:
    {
        returnValue = F("Galgenrasen");
        break;
    }
    case 111350:
    {
        returnValue = F("Galgenraunweg");
        break;
    }
    case 111351:
    {
        returnValue = F("Galgenredder");
        break;
    }
    case 111352:
    {
        returnValue = F("Galgenschlucht");
        break;
    }
    case 111353:
    {
        returnValue = F("Galgenschlößle");
        break;
    }
    case 111354:
    {
        returnValue = F("Galgenschneise");
        break;
    }
    case 111355:
    {
        returnValue = F("Galgensteeg");
        break;
    }
    case 111356:
    {
        returnValue = F("Galgensteege");
        break;
    }
    case 111357:
    {
        returnValue = F("Galgensteg");
        break;
    }
    case 111358:
    {
        returnValue = F("Galgensteig");
        break;
    }
    case 111359:
    {
        returnValue = F("Galgensteig-Traufweg");
        break;
    }
    case 111360:
    {
        returnValue = F("Galgensteige");
        break;
    }
    case 111361:
    {
        returnValue = F("Galgenstieg");
        break;
    }
    case 111362:
    {
        returnValue = F("Galgenstr.");
        break;
    }
    case 111363:
    {
        returnValue = F("Galgensträßle");
        break;
    }
    case 111364:
    {
        returnValue = F("Galgenstückweg");
        break;
    }
    case 111365:
    {
        returnValue = F("Galgental");
        break;
    }
    case 111366:
    {
        returnValue = F("Galgentalstr.");
        break;
    }
    case 111367:
    {
        returnValue = F("Galgenteich");
        break;
    }
    case 111368:
    {
        returnValue = F("Galgenwarfsweg");
        break;
    }
    case 111369:
    {
        returnValue = F("Galgenwasen");
        break;
    }
    case 111370:
    {
        returnValue = F("Galgenweg");
        break;
    }
    case 111371:
    {
        returnValue = F("Galgenweiherweg");
        break;
    }
    case 111372:
    {
        returnValue = F("Galgenäcker");
        break;
    }
    case 111373:
    {
        returnValue = F("Galgerweg");
        break;
    }
    case 111374:
    {
        returnValue = F("Galgheide");
        break;
    }
    case 111375:
    {
        returnValue = F("Galgheitstr.");
        break;
    }
    case 111376:
    {
        returnValue = F("Galgweiser Str.");
        break;
    }
    case 111377:
    {
        returnValue = F("Galileihof");
        break;
    }
    case 111378:
    {
        returnValue = F("Galileiplatz");
        break;
    }
    case 111379:
    {
        returnValue = F("Galileistr.");
        break;
    }
    case 111380:
    {
        returnValue = F("Galileiweg");
        break;
    }
    case 111381:
    {
        returnValue = F("Galileo-Galilei-Str.");
        break;
    }
    case 111382:
    {
        returnValue = F("Galileostr.");
        break;
    }
    case 111383:
    {
        returnValue = F("Galiläa");
        break;
    }
    case 111384:
    {
        returnValue = F("Galiläaer Weg");
        break;
    }
    case 111385:
    {
        returnValue = F("Galina-Romanowa-Str.");
        break;
    }
    case 111386:
    {
        returnValue = F("Galiotweg");
        break;
    }
    case 111387:
    {
        returnValue = F("Galkhausener Str.");
        break;
    }
    case 111388:
    {
        returnValue = F("Galksiepen");
        break;
    }
    case 111389:
    {
        returnValue = F("Gallaberg");
        break;
    }
    case 111390:
    {
        returnValue = F("Gallafilz 1");
        break;
    }
    case 111391:
    {
        returnValue = F("Gallandring");
        break;
    }
    case 111392:
    {
        returnValue = F("Gallandstr.");
        break;
    }
    case 111393:
    {
        returnValue = F("Gallasiniring");
        break;
    }
    case 111394:
    {
        returnValue = F("Gallasstr.");
        break;
    }
    case 111395:
    {
        returnValue = F("Gallberg");
        break;
    }
    case 111396:
    {
        returnValue = F("Gallberger Weg");
        break;
    }
    case 111397:
    {
        returnValue = F("Gallberghöhe");
        break;
    }
    case 111398:
    {
        returnValue = F("Gallbergring");
        break;
    }
    case 111399:
    {
        returnValue = F("Gallbergstieg");
        break;
    }
    case 111400:
    {
        returnValue = F("Gallbergstr.");
        break;
    }
    case 111401:
    {
        returnValue = F("Gallbergweg");
        break;
    }
    case 111402:
    {
        returnValue = F("Gallbronnenweg");
        break;
    }
    case 111403:
    {
        returnValue = F("Gallbrook");
        break;
    }
    case 111404:
    {
        returnValue = F("Gallbrunnenplatz");
        break;
    }
    case 111405:
    {
        returnValue = F("Galle");
        break;
    }
    case 111406:
    {
        returnValue = F("Galle-Berger-Weg");
        break;
    }
    case 111407:
    {
        returnValue = F("Galleck");
        break;
    }
    case 111408:
    {
        returnValue = F("Gallehuskoppel");
        break;
    }
    case 111409:
    {
        returnValue = F("Galleien");
        break;
    }
    case 111410:
    {
        returnValue = F("Gallekampsweg");
        break;
    }
    case 111411:
    {
        returnValue = F("Gallenbach");
        break;
    }
    case 111412:
    {
        returnValue = F("Gallenbacher Str.");
        break;
    }
    case 111413:
    {
        returnValue = F("Gallenbachweg");
        break;
    }
    case 111414:
    {
        returnValue = F("Gallenbachwegli");
        break;
    }
    case 111415:
    {
        returnValue = F("Gallenberg");
        break;
    }
    case 111416:
    {
        returnValue = F("Gallenbergweg");
        break;
    }
    case 111417:
    {
        returnValue = F("Gallenbünd");
        break;
    }
    case 111418:
    {
        returnValue = F("Galleneck");
        break;
    }
    case 111419:
    {
        returnValue = F("Gallener Landstr.");
        break;
    }
    case 111420:
    {
        returnValue = F("Gallener Str.");
        break;
    }
    case 111421:
    {
        returnValue = F("Gallengehren");
        break;
    }
    case 111422:
    {
        returnValue = F("Gallengäßle");
        break;
    }
    case 111423:
    {
        returnValue = F("Gallenhaldeweg");
        break;
    }
    case 111424:
    {
        returnValue = F("Gallenkamp");
        break;
    }
    case 111425:
    {
        returnValue = F("Gallenkampstr.");
        break;
    }
    case 111426:
    {
        returnValue = F("Gallenklingenstr.");
        break;
    }
    case 111427:
    {
        returnValue = F("Gallenmichel");
        break;
    }
    case 111428:
    {
        returnValue = F("Gallenmichelgasse");
        break;
    }
    case 111429:
    {
        returnValue = F("Gallenrainweg");
        break;
    }
    case 111430:
    {
        returnValue = F("Gallenstr.");
        break;
    }
    case 111431:
    {
        returnValue = F("Gallentiner Chaussee");
        break;
    }
    case 111432:
    {
        returnValue = F("Gallenwaldweg");
        break;
    }
    case 111433:
    {
        returnValue = F("Gallenweg");
        break;
    }
    case 111434:
    {
        returnValue = F("Gallenweiler Weg");
        break;
    }
    case 111435:
    {
        returnValue = F("Gallering");
        break;
    }
    case 111436:
    {
        returnValue = F("Gallersberg");
        break;
    }
    case 111437:
    {
        returnValue = F("Gallersöd");
        break;
    }
    case 111438:
    {
        returnValue = F("Gallertalweg");
        break;
    }
    case 111439:
    {
        returnValue = F("Gallertergrundweg");
        break;
    }
    case 111440:
    {
        returnValue = F("Gallertstr.");
        break;
    }
    case 111441:
    {
        returnValue = F("Gallerweg");
        break;
    }
    case 111442:
    {
        returnValue = F("Gallettistr.");
        break;
    }
    case 111443:
    {
        returnValue = F("Galleyenstr.");
        break;
    }
    case 111444:
    {
        returnValue = F("Gallgattweg");
        break;
    }
    case 111445:
    {
        returnValue = F("Gallhof");
        break;
    }
    case 111446:
    {
        returnValue = F("Gallhofen");
        break;
    }
    case 111447:
    {
        returnValue = F("Gallhorner Flatt");
        break;
    }
    case 111448:
    {
        returnValue = F("Gallhorner Weg");
        break;
    }
    case 111449:
    {
        returnValue = F("Gallhöfer Allee");
        break;
    }
    case 111450:
    {
        returnValue = F("Gallhöfer Weide");
        break;
    }
    case 111451:
    {
        returnValue = F("Galli-Str.");
        break;
    }
    case 111452:
    {
        returnValue = F("Gallichweg");
        break;
    }
    case 111453:
    {
        returnValue = F("Gallienstr.");
        break;
    }
    case 111454:
    {
        returnValue = F("Gallierring");
        break;
    }
    case 111455:
    {
        returnValue = F("Gallierstr.");
        break;
    }
    case 111456:
    {
        returnValue = F("Gallierweg");
        break;
    }
    case 111457:
    {
        returnValue = F("Gallin");
        break;
    }
    case 111458:
    {
        returnValue = F("Gallin-Hof");
        break;
    }
    case 111459:
    {
        returnValue = F("Gallinchener Hauptstr.");
        break;
    }
    case 111460:
    {
        returnValue = F("Gallinchener Str.");
        break;
    }
    case 111461:
    {
        returnValue = F("Gallinchener Weg");
        break;
    }
    case 111462:
    {
        returnValue = F("Galliner Chaussee");
        break;
    }
    case 111463:
    {
        returnValue = F("Galliner Damm");
        break;
    }
    case 111464:
    {
        returnValue = F("Galliner Mühle");
        break;
    }
    case 111465:
    {
        returnValue = F("Galliner Str.");
        break;
    }
    case 111466:
    {
        returnValue = F("Gallinger Weg");
        break;
    }
    case 111467:
    {
        returnValue = F("Gallingerstr.");
        break;
    }
    case 111468:
    {
        returnValue = F("Gallingkofen");
        break;
    }
    case 111469:
    {
        returnValue = F("Gallische Str.");
        break;
    }
    case 111470:
    {
        returnValue = F("Gallismoosweg");
        break;
    }
    case 111471:
    {
        returnValue = F("Gallitzinstr.");
        break;
    }
    case 111472:
    {
        returnValue = F("Galliwech");
        break;
    }
    case 111473:
    {
        returnValue = F("Gallmattenstr.");
        break;
    }
    case 111474:
    {
        returnValue = F("Gallmayerstr.");
        break;
    }
    case 111475:
    {
        returnValue = F("Gallmeierstr.");
        break;
    }
    case 111476:
    {
        returnValue = F("Gallmünz");
        break;
    }
    case 111477:
    {
        returnValue = F("Gallnerstr.");
        break;
    }
    case 111478:
    {
        returnValue = F("Gallnerweg");
        break;
    }
    case 111479:
    {
        returnValue = F("Gallneukirchner Kreisel");
        break;
    }
    case 111480:
    {
        returnValue = F("Gallostr.");
        break;
    }
    case 111481:
    {
        returnValue = F("Galloway-Rinder");
        break;
    }
    case 111482:
    {
        returnValue = F("Gallowaygasse");
        break;
    }
    case 111483:
    {
        returnValue = F("Gallscheider Str.");
        break;
    }
    case 111484:
    {
        returnValue = F("Gallschütz");
        break;
    }
    case 111485:
    {
        returnValue = F("Gallschützer Str.");
        break;
    }
    case 111486:
    {
        returnValue = F("Gallstr.");
        break;
    }
    case 111487:
    {
        returnValue = F("Gallumweg");
        break;
    }
    case 111488:
    {
        returnValue = F("Galluner Chaussee");
        break;
    }
    case 111489:
    {
        returnValue = F("Galluner Müllerhaus");
        break;
    }
    case 111490:
    {
        returnValue = F("Galluner Str.");
        break;
    }
    case 111491:
    {
        returnValue = F("Galluner Weg");
        break;
    }
    case 111492:
    {
        returnValue = F("Gallus-Has-Weg");
        break;
    }
    case 111493:
    {
        returnValue = F("Gallus-Homberg-Weg");
        break;
    }
    case 111494:
    {
        returnValue = F("Gallus-Oheim-Weg");
        break;
    }
    case 111495:
    {
        returnValue = F("Gallus-Zeiler-Str.");
        break;
    }
    case 111496:
    {
        returnValue = F("Gallus-Zembroth-Str.");
        break;
    }
    case 111497:
    {
        returnValue = F("Gallusanlage");
        break;
    }
    case 111498:
    {
        returnValue = F("Gallusbergle");
        break;
    }
    case 111499:
    {
        returnValue = F("Gallusbrücke");
        break;
    }
    case 111500:
    {
        returnValue = F("Gallusgarten");
        break;
    }
    case 111501:
    {
        returnValue = F("Gallusgarten 1");
        break;
    }
    case 111502:
    {
        returnValue = F("Gallusgarten 2");
        break;
    }
    case 111503:
    {
        returnValue = F("Gallusgasse");
        break;
    }
    case 111504:
    {
        returnValue = F("Gallusmühle");
        break;
    }
    case 111505:
    {
        returnValue = F("Gallusplatz");
        break;
    }
    case 111506:
    {
        returnValue = F("Gallusstr.");
        break;
    }
    case 111507:
    {
        returnValue = F("Gallusweg");
        break;
    }
    case 111508:
    {
        returnValue = F("Gallweg");
        break;
    }
    case 111509:
    {
        returnValue = F("Gallwiese");
        break;
    }
    case 111510:
    {
        returnValue = F("Gallwieserweg");
        break;
    }
    case 111511:
    {
        returnValue = F("Galmbacher Weg");
        break;
    }
    case 111512:
    {
        returnValue = F("Galmbacherstr.");
        break;
    }
    case 111513:
    {
        returnValue = F("Galmeistr.");
        break;
    }
    case 111514:
    {
        returnValue = F("Galmeiweg");
        break;
    }
    case 111515:
    {
        returnValue = F("Galmer Str.");
        break;
    }
    case 111516:
    {
        returnValue = F("Galmerstr.");
        break;
    }
    case 111517:
    {
        returnValue = F("Galmesweg");
        break;
    }
    case 111518:
    {
        returnValue = F("Galmsbüllkoog");
        break;
    }
    case 111519:
    {
        returnValue = F("Galmutshöfer Steige");
        break;
    }
    case 111520:
    {
        returnValue = F("Galopp");
        break;
    }
    case 111521:
    {
        returnValue = F("Galopp-Schneise");
        break;
    }
    case 111522:
    {
        returnValue = F("Galoppbahn");
        break;
    }
    case 111523:
    {
        returnValue = F("Galopperberg");
        break;
    }
    case 111524:
    {
        returnValue = F("Galopperstr.");
        break;
    }
    case 111525:
    {
        returnValue = F("Galoppgasse");
        break;
    }
    case 111526:
    {
        returnValue = F("Galoppsprung");
        break;
    }
    case 111527:
    {
        returnValue = F("Galoppstr.");
        break;
    }
    case 111528:
    {
        returnValue = F("Galoppweg");
        break;
    }
    case 111529:
    {
        returnValue = F("Galottenstich");
        break;
    }
    case 111530:
    {
        returnValue = F("Galottenweg");
        break;
    }
    case 111531:
    {
        returnValue = F("Galower Str.");
        break;
    }
    case 111532:
    {
        returnValue = F("Galper Weg");
        break;
    }
    case 111533:
    {
        returnValue = F("Galtenbrunnerweg");
        break;
    }
    case 111534:
    {
        returnValue = F("Galtener Str.");
        break;
    }
    case 111535:
    {
        returnValue = F("Galthausstr.");
        break;
    }
    case 111536:
    {
        returnValue = F("Galtürer Weg");
        break;
    }
    case 111537:
    {
        returnValue = F("Galumweg");
        break;
    }
    case 111538:
    {
        returnValue = F("Galurastr.");
        break;
    }
    case 111539:
    {
        returnValue = F("Galvanistr.");
        break;
    }
    case 111540:
    {
        returnValue = F("Galvanoweg");
        break;
    }
    case 111541:
    {
        returnValue = F("Galwik-Park");
        break;
    }
    case 111542:
    {
        returnValue = F("Galäerweg");
        break;
    }
    case 111543:
    {
        returnValue = F("Gamaler Siedlung");
        break;
    }
    case 111544:
    {
        returnValue = F("Gamanderweg");
        break;
    }
    case 111545:
    {
        returnValue = F("Gambach");
        break;
    }
    case 111546:
    {
        returnValue = F("Gambacher Str.");
        break;
    }
    case 111547:
    {
        returnValue = F("Gambacher Weg");
        break;
    }
    case 111548:
    {
        returnValue = F("Gambachschneise");
        break;
    }
    case 111549:
    {
        returnValue = F("Gambachstr.");
        break;
    }
    case 111550:
    {
        returnValue = F("Gambachsweg");
        break;
    }
    case 111551:
    {
        returnValue = F("Gambachweg");
        break;
    }
    case 111552:
    {
        returnValue = F("Gamberslaurundweg");
        break;
    }
    case 111553:
    {
        returnValue = F("Gambrinus");
        break;
    }
    case 111554:
    {
        returnValue = F("Gambrinushof");
        break;
    }
    case 111555:
    {
        returnValue = F("Gambrinusstr.");
        break;
    }
    case 111556:
    {
        returnValue = F("Gambsweg");
        break;
    }
    case 111557:
    {
        returnValue = F("Gamburger Str.");
        break;
    }
    case 111558:
    {
        returnValue = F("Gamburger Weg");
        break;
    }
    case 111559:
    {
        returnValue = F("Gamehl");
        break;
    }
    case 111560:
    {
        returnValue = F("Gamelbertstr.");
        break;
    }
    case 111561:
    {
        returnValue = F("Gameritweg");
        break;
    }
    case 111562:
    {
        returnValue = F("Gamersbügel");
        break;
    }
    case 111563:
    {
        returnValue = F("Gamerschwanger Str.");
        break;
    }
    case 111564:
    {
        returnValue = F("Gamhartstr.");
        break;
    }
    case 111565:
    {
        returnValue = F("Gamig");
        break;
    }
    case 111566:
    {
        returnValue = F("Gamiger Str.");
        break;
    }
    case 111567:
    {
        returnValue = F("Gamigstr.");
        break;
    }
    case 111568:
    {
        returnValue = F("Gamlener Str.");
        break;
    }
    case 111569:
    {
        returnValue = F("Gamlinger Str.");
        break;
    }
    case 111570:
    {
        returnValue = F("Gamlingweg");
        break;
    }
    case 111571:
    {
        returnValue = F("Gamm");
        break;
    }
    case 111572:
    {
        returnValue = F("Gammelau");
        break;
    }
    case 111573:
    {
        returnValue = F("Gammelby");
        break;
    }
    case 111574:
    {
        returnValue = F("Gammelbyer Kirchenweg");
        break;
    }
    case 111575:
    {
        returnValue = F("Gammelbyer Weg");
        break;
    }
    case 111576:
    {
        returnValue = F("Gammeldamm");
        break;
    }
    case 111577:
    {
        returnValue = F("Gammelengweg");
        break;
    }
    case 111578:
    {
        returnValue = F("Gammeliner Str.");
        break;
    }
    case 111579:
    {
        returnValue = F("Gammeliner Weg");
        break;
    }
    case 111580:
    {
        returnValue = F("Gammellunder Str.");
        break;
    }
    case 111581:
    {
        returnValue = F("Gammellück");
        break;
    }
    case 111582:
    {
        returnValue = F("Gammelsbacher Str.");
        break;
    }
    case 111583:
    {
        returnValue = F("Gammelsbacher Weg");
        break;
    }
    case 111584:
    {
        returnValue = F("Gammelsdorfer Str.");
        break;
    }
    case 111585:
    {
        returnValue = F("Gammelshauser Str.");
        break;
    }
    case 111586:
    {
        returnValue = F("Gammeltoft");
        break;
    }
    case 111587:
    {
        returnValue = F("Gammendorf");
        break;
    }
    case 111588:
    {
        returnValue = F("Gammendorfer Str.");
        break;
    }
    case 111589:
    {
        returnValue = F("Gammenfeld");
        break;
    }
    case 111590:
    {
        returnValue = F("Gammenteil");
        break;
    }
    case 111591:
    {
        returnValue = F("Gammer Berg");
        break;
    }
    case 111592:
    {
        returnValue = F("Gammersbach");
        break;
    }
    case 111593:
    {
        returnValue = F("Gammersbacher Weg");
        break;
    }
    case 111594:
    {
        returnValue = F("Gammersbachweg");
        break;
    }
    case 111595:
    {
        returnValue = F("Gammersfelder Weg");
        break;
    }
    case 111596:
    {
        returnValue = F("Gammersham");
        break;
    }
    case 111597:
    {
        returnValue = F("Gammertal");
        break;
    }
    case 111598:
    {
        returnValue = F("Gammertinger Str.");
        break;
    }
    case 111599:
    {
        returnValue = F("Gammertinger Weg");
        break;
    }
    case 111600:
    {
        returnValue = F("Gammertstalweg");
        break;
    }
    case 111601:
    {
        returnValue = F("Gammeräckerweg");
        break;
    }
    case 111602:
    {
        returnValue = F("Gammesfelder Str.");
        break;
    }
    case 111603:
    {
        returnValue = F("Gampelweg");
        break;
    }
    case 111604:
    {
        returnValue = F("Gampenstein");
        break;
    }
    case 111605:
    {
        returnValue = F("Gamperlmühlstr.");
        break;
    }
    case 111606:
    {
        returnValue = F("Gamsangerweg");
        break;
    }
    case 111607:
    {
        returnValue = F("Gamsbockweg");
        break;
    }
    case 111608:
    {
        returnValue = F("Gamsener Str.");
        break;
    }
    case 111609:
    {
        returnValue = F("Gamsener Weg");
        break;
    }
    case 111610:
    {
        returnValue = F("Gamser Deich");
        break;
    }
    case 111611:
    {
        returnValue = F("Gamser Weg");
        break;
    }
    case 111612:
    {
        returnValue = F("Gamshornweg");
        break;
    }
    case 111613:
    {
        returnValue = F("Gamskogelstr.");
        break;
    }
    case 111614:
    {
        returnValue = F("Gamssteige");
        break;
    }
    case 111615:
    {
        returnValue = F("Gamsstr.");
        break;
    }
    case 111616:
    {
        returnValue = F("Gamstr.");
        break;
    }
    case 111617:
    {
        returnValue = F("Gamstädter Feld");
        break;
    }
    case 111618:
    {
        returnValue = F("Gamstädter Landstr.");
        break;
    }
    case 111619:
    {
        returnValue = F("Gamstädter Weg");
        break;
    }
    case 111620:
    {
        returnValue = F("Gamsweg");
        break;
    }
    case 111621:
    {
        returnValue = F("Gamundisweg");
        break;
    }
    case 111622:
    {
        returnValue = F("Gandenitzer Dorfstr.");
        break;
    }
    case 111623:
    {
        returnValue = F("Gandenitzer Weg");
        break;
    }
    case 111624:
    {
        returnValue = F("Gander");
        break;
    }
    case 111625:
    {
        returnValue = F("Ganderberg");
        break;
    }
    case 111626:
    {
        returnValue = F("Ganderkeseer Weg");
        break;
    }
    case 111627:
    {
        returnValue = F("Gandersheimer Str.");
        break;
    }
    case 111628:
    {
        returnValue = F("Gandersheimer Weg");
        break;
    }
    case 111629:
    {
        returnValue = F("Gandershofen");
        break;
    }
    case 111630:
    {
        returnValue = F("Gandershofer Str.");
        break;
    }
    case 111631:
    {
        returnValue = F("Gandersumer Str.");
        break;
    }
    case 111632:
    {
        returnValue = F("Gandestr.");
        break;
    }
    case 111633:
    {
        returnValue = F("Gandhistr.");
        break;
    }
    case 111634:
    {
        returnValue = F("Gandorfer Str.");
        break;
    }
    case 111635:
    {
        returnValue = F("Gandorferberg");
        break;
    }
    case 111636:
    {
        returnValue = F("Gandower Weg");
        break;
    }
    case 111637:
    {
        returnValue = F("Gandweg");
        break;
    }
    case 111638:
    {
        returnValue = F("Ganerbenstr.");
        break;
    }
    case 111639:
    {
        returnValue = F("Ganertshausen");
        break;
    }
    case 111640:
    {
        returnValue = F("Ganertshausener Str.");
        break;
    }
    case 111641:
    {
        returnValue = F("Gang");
        break;
    }
    case 111642:
    {
        returnValue = F("Gang 1");
        break;
    }
    case 111643:
    {
        returnValue = F("Gang 10");
        break;
    }
    case 111644:
    {
        returnValue = F("Gang 2");
        break;
    }
    case 111645:
    {
        returnValue = F("Gang 3");
        break;
    }
    case 111646:
    {
        returnValue = F("Gang 4");
        break;
    }
    case 111647:
    {
        returnValue = F("Gang 5");
        break;
    }
    case 111648:
    {
        returnValue = F("Gang 6");
        break;
    }
    case 111649:
    {
        returnValue = F("Gang 7");
        break;
    }
    case 111650:
    {
        returnValue = F("Gang 8");
        break;
    }
    case 111651:
    {
        returnValue = F("Gang 9");
        break;
    }
    case 111652:
    {
        returnValue = F("Gangelplatz");
        break;
    }
    case 111653:
    {
        returnValue = F("Gangelsbergblick");
        break;
    }
    case 111654:
    {
        returnValue = F("Gangelsgarten");
        break;
    }
    case 111655:
    {
        returnValue = F("Gangelshauser Weg");
        break;
    }
    case 111656:
    {
        returnValue = F("Gangelter Str.");
        break;
    }
    case 111657:
    {
        returnValue = F("Gangelter Weg");
        break;
    }
    case 111658:
    {
        returnValue = F("Gangelweiher");
        break;
    }
    case 111659:
    {
        returnValue = F("Gangerbauerstr.");
        break;
    }
    case 111660:
    {
        returnValue = F("Gangerl");
        break;
    }
    case 111661:
    {
        returnValue = F("Gangerschild");
        break;
    }
    case 111662:
    {
        returnValue = F("Gangerschildstr.");
        break;
    }
    case 111663:
    {
        returnValue = F("Gangesallee");
        break;
    }
    case 111664:
    {
        returnValue = F("Ganghofer Siedlung");
        break;
    }
    case 111665:
    {
        returnValue = F("Ganghofer Str.");
        break;
    }
    case 111666:
    {
        returnValue = F("Ganghofer-Str.");
        break;
    }
    case 111667:
    {
        returnValue = F("Ganghoferstr.");
        break;
    }
    case 111668:
    {
        returnValue = F("Ganghoferweg");
        break;
    }
    case 111669:
    {
        returnValue = F("Gangilusstr.");
        break;
    }
    case 111670:
    {
        returnValue = F("Gangkofener Str.");
        break;
    }
    case 111671:
    {
        returnValue = F("Gangloffsömmerner Ring");
        break;
    }
    case 111672:
    {
        returnValue = F("Gangolfer Str.");
        break;
    }
    case 111673:
    {
        returnValue = F("Gangolfsberg");
        break;
    }
    case 111674:
    {
        returnValue = F("Gangolfsbergstr.");
        break;
    }
    case 111675:
    {
        returnValue = F("Gangolfshof");
        break;
    }
    case 111676:
    {
        returnValue = F("Gangolfstr.");
        break;
    }
    case 111677:
    {
        returnValue = F("Gangolfswald");
        break;
    }
    case 111678:
    {
        returnValue = F("Gangolfsweg");
        break;
    }
    case 111679:
    {
        returnValue = F("Gangolfusstr.");
        break;
    }
    case 111680:
    {
        returnValue = F("Gangolfusweg");
        break;
    }
    case 111681:
    {
        returnValue = F("Gangsteig");
        break;
    }
    case 111682:
    {
        returnValue = F("Gangsteigweg");
        break;
    }
    case 111683:
    {
        returnValue = F("Gangstr.");
        break;
    }
    case 111684:
    {
        returnValue = F("Gannenbacherstr.");
        break;
    }
    case 111685:
    {
        returnValue = F("Gannerbarg");
        break;
    }
    case 111686:
    {
        returnValue = F("Gannerkamp");
        break;
    }
    case 111687:
    {
        returnValue = F("Gannertshofener Str.");
        break;
    }
    case 111688:
    {
        returnValue = F("Gannerwinkel");
        break;
    }
    case 111689:
    {
        returnValue = F("Gans");
        break;
    }
    case 111690:
    {
        returnValue = F("Gansacker");
        break;
    }
    case 111691:
    {
        returnValue = F("Gansackerstr.");
        break;
    }
    case 111692:
    {
        returnValue = F("Gansackerweg");
        break;
    }
    case 111693:
    {
        returnValue = F("Gansahrweg");
        break;
    }
    case 111694:
    {
        returnValue = F("Gansanger");
        break;
    }
    case 111695:
    {
        returnValue = F("Gansau");
        break;
    }
    case 111696:
    {
        returnValue = F("Gansauer Str.");
        break;
    }
    case 111697:
    {
        returnValue = F("Gansauweg");
        break;
    }
    case 111698:
    {
        returnValue = F("Gansbacher Weg");
        break;
    }
    case 111699:
    {
        returnValue = F("Gansberg");
        break;
    }
    case 111700:
    {
        returnValue = F("Gansbergstr.");
        break;
    }
    case 111701:
    {
        returnValue = F("Gansberweg");
        break;
    }
    case 111702:
    {
        returnValue = F("Gansbichlstr.");
        break;
    }
    case 111703:
    {
        returnValue = F("Gansbuckel");
        break;
    }
    case 111704:
    {
        returnValue = F("Gansbusch");
        break;
    }
    case 111705:
    {
        returnValue = F("Gansbühl");
        break;
    }
    case 111706:
    {
        returnValue = F("Gansbühlstr.");
        break;
    }
    case 111707:
    {
        returnValue = F("Gansbühlweg");
        break;
    }
    case 111708:
    {
        returnValue = F("Ganschendorf");
        break;
    }
    case 111709:
    {
        returnValue = F("Ganschower Str.");
        break;
    }
    case 111710:
    {
        returnValue = F("Ganschvitz");
        break;
    }
    case 111711:
    {
        returnValue = F("Gansdonksweg");
        break;
    }
    case 111712:
    {
        returnValue = F("Gansebrook");
        break;
    }
    case 111713:
    {
        returnValue = F("Gansecke");
        break;
    }
    case 111714:
    {
        returnValue = F("Gansenbergweg");
        break;
    }
    case 111715:
    {
        returnValue = F("Ganser");
        break;
    }
    case 111716:
    {
        returnValue = F("Ganserstr.");
        break;
    }
    case 111717:
    {
        returnValue = F("Gansertweg");
        break;
    }
    case 111718:
    {
        returnValue = F("Gansewei");
        break;
    }
    case 111719:
    {
        returnValue = F("Gansfeldstr.");
        break;
    }
    case 111720:
    {
        returnValue = F("Gansgasse");
        break;
    }
    case 111721:
    {
        returnValue = F("Gansgrabenweg");
        break;
    }
    case 111722:
    {
        returnValue = F("Gansgrüner Str.");
        break;
    }
    case 111723:
    {
        returnValue = F("Gansinger Platz");
        break;
    }
    case 111724:
    {
        returnValue = F("Ganslberg");
        break;
    }
    case 111725:
    {
        returnValue = F("Ganslberger Str.");
        break;
    }
    case 111726:
    {
        returnValue = F("Gansleite");
        break;
    }
    case 111727:
    {
        returnValue = F("Gansleitestr.");
        break;
    }
    case 111728:
    {
        returnValue = F("Gansmaldtstr.");
        break;
    }
    case 111729:
    {
        returnValue = F("Gansmannshof");
        break;
    }
    case 111730:
    {
        returnValue = F("Gansmecker Weg");
        break;
    }
    case 111731:
    {
        returnValue = F("Gansnest");
        break;
    }
    case 111732:
    {
        returnValue = F("Gansnest Weg");
        break;
    }
    case 111733:
    {
        returnValue = F("Gansper Helmer");
        break;
    }
    case 111734:
    {
        returnValue = F("Ganspohler Str.");
        break;
    }
    case 111735:
    {
        returnValue = F("Gansseeweg");
        break;
    }
    case 111736:
    {
        returnValue = F("Ganswasenweg");
        break;
    }
    case 111737:
    {
        returnValue = F("Gansweg");
        break;
    }
    case 111738:
    {
        returnValue = F("Gansweid");
        break;
    }
    case 111739:
    {
        returnValue = F("Gansweide");
        break;
    }
    case 111740:
    {
        returnValue = F("Gansweidweg");
        break;
    }
    case 111741:
    {
        returnValue = F("Ganswiesenweg");
        break;
    }
    case 111742:
    {
        returnValue = F("Ganswindstr.");
        break;
    }
    case 111743:
    {
        returnValue = F("Gansäcker");
        break;
    }
    case 111744:
    {
        returnValue = F("Gansäckerstr.");
        break;
    }
    case 111745:
    {
        returnValue = F("Gansäckerweg");
        break;
    }
    case 111746:
    {
        returnValue = F("Gantenaiweg");
        break;
    }
    case 111747:
    {
        returnValue = F("Gantenbach");
        break;
    }
    case 111748:
    {
        returnValue = F("Gantenbergstr.");
        break;
    }
    case 111749:
    {
        returnValue = F("Gantenbergsweg");
        break;
    }
    case 111750:
    {
        returnValue = F("Gantenbergweg");
        break;
    }
    case 111751:
    {
        returnValue = F("Gantenbleek");
        break;
    }
    case 111752:
    {
        returnValue = F("Gantengabel");
        break;
    }
    case 111753:
    {
        returnValue = F("Gantenhals");
        break;
    }
    case 111754:
    {
        returnValue = F("Gantenkamp");
        break;
    }
    case 111755:
    {
        returnValue = F("Gantenstr.");
        break;
    }
    case 111756:
    {
        returnValue = F("Gantepoth");
        break;
    }
    case 111757:
    {
        returnValue = F("Ganter");
        break;
    }
    case 111758:
    {
        returnValue = F("Ganter Campus");
        break;
    }
    case 111759:
    {
        returnValue = F("Ganterbarg");
        break;
    }
    case 111760:
    {
        returnValue = F("Ganterhals");
        break;
    }
    case 111761:
    {
        returnValue = F("Ganterheide");
        break;
    }
    case 111762:
    {
        returnValue = F("Ganterhofstr.");
        break;
    }
    case 111763:
    {
        returnValue = F("Ganterhöhenweg");
        break;
    }
    case 111764:
    {
        returnValue = F("Ganterplatz");
        break;
    }
    case 111765:
    {
        returnValue = F("Gantersbachhangweg");
        break;
    }
    case 111766:
    {
        returnValue = F("Ganterstattweg");
        break;
    }
    case 111767:
    {
        returnValue = F("Ganterstr.");
        break;
    }
    case 111768:
    {
        returnValue = F("Ganterstrat");
        break;
    }
    case 111769:
    {
        returnValue = F("Ganterweg");
        break;
    }
    case 111770:
    {
        returnValue = F("Ganterwinkel");
        break;
    }
    case 111771:
    {
        returnValue = F("Gantestr.");
        break;
    }
    case 111772:
    {
        returnValue = F("Gantesweiler");
        break;
    }
    case 111773:
    {
        returnValue = F("Gantesweilerstr.");
        break;
    }
    case 111774:
    {
        returnValue = F("Ganteweg");
        break;
    }
    case 111775:
    {
        returnValue = F("Gantweger Kley");
        break;
    }
    case 111776:
    {
        returnValue = F("Gantweger Str.");
        break;
    }
    case 111777:
    {
        returnValue = F("Ganzenmühle");
        break;
    }
    case 111778:
    {
        returnValue = F("Ganzenmüllerstr.");
        break;
    }
    case 111779:
    {
        returnValue = F("Ganzenstr.");
        break;
    }
    case 111780:
    {
        returnValue = F("Ganzer Str.");
        break;
    }
    case 111781:
    {
        returnValue = F("Ganzer Weg");
        break;
    }
    case 111782:
    {
        returnValue = F("Ganzersgasse");
        break;
    }
    case 111783:
    {
        returnValue = F("Ganzhornstr.");
        break;
    }
    case 111784:
    {
        returnValue = F("Ganzhornweg");
        break;
    }
    case 111785:
    {
        returnValue = F("Ganziger Str.");
        break;
    }
    case 111786:
    {
        returnValue = F("Ganzkower Weg");
        break;
    }
    case 111787:
    {
        returnValue = F("Ganzliner Str.");
        break;
    }
    case 111788:
    {
        returnValue = F("Ganzow");
        break;
    }
    case 111789:
    {
        returnValue = F("Ganzower Str.");
        break;
    }
    case 111790:
    {
        returnValue = F("Ganzwingert");
        break;
    }
    case 111791:
    {
        returnValue = F("Gapel");
        break;
    }
    case 111792:
    {
        returnValue = F("Gappenacher Str.");
        break;
    }
    case 111793:
    {
        returnValue = F("Gapperschlaweg");
        break;
    }
    case 111794:
    {
        returnValue = F("Gapstr.");
        break;
    }
    case 111795:
    {
        returnValue = F("Garagenstr.");
        break;
    }
    case 111796:
    {
        returnValue = F("Garagenweg");
        break;
    }
    case 111797:
    {
        returnValue = F("Garamattiweg");
        break;
    }
    case 111798:
    {
        returnValue = F("Garather Schlosspark");
        break;
    }
    case 111799:
    {
        returnValue = F("Garather Str.");
        break;
    }
    case 111800:
    {
        returnValue = F("Garather Weg");
        break;
    }
    case 111801:
    {
        returnValue = F("Garatshausener Str.");
        break;
    }
    case 111802:
    {
        returnValue = F("Garatshauser Str.");
        break;
    }
    case 111803:
    {
        returnValue = F("Garbecker Kirchweg");
        break;
    }
    case 111804:
    {
        returnValue = F("Garbecker Str.");
        break;
    }
    case 111805:
    {
        returnValue = F("Garbenbinderweg");
        break;
    }
    case 111806:
    {
        returnValue = F("Garbenheimer Str.");
        break;
    }
    case 111807:
    {
        returnValue = F("Garbenstr.");
        break;
    }
    case 111808:
    {
        returnValue = F("Garbenteicher Str.");
        break;
    }
    case 111809:
    {
        returnValue = F("Garbenteicher Weg");
        break;
    }
    case 111810:
    {
        returnValue = F("Garbenweg");
        break;
    }
    case 111811:
    {
        returnValue = F("Garbepfad");
        break;
    }
    case 111812:
    {
        returnValue = F("Garbereiter-Gang");
        break;
    }
    case 111813:
    {
        returnValue = F("Garbershoff");
        break;
    }
    case 111814:
    {
        returnValue = F("Garbertsbusch");
        break;
    }
    case 111815:
    {
        returnValue = F("Garbetalweg");
        break;
    }
    case 111816:
    {
        returnValue = F("Garbeweg");
        break;
    }
    case 111817:
    {
        returnValue = F("Garbmühlstr.");
        break;
    }
    case 111818:
    {
        returnValue = F("Garbodenhagen");
        break;
    }
    case 111819:
    {
        returnValue = F("Garbolzumer Str.");
        break;
    }
    case 111820:
    {
        returnValue = F("Garbräterstr.");
        break;
    }
    case 111821:
    {
        returnValue = F("Garbs-Str.");
        break;
    }
    case 111822:
    {
        returnValue = F("Garbsbruchweg");
        break;
    }
    case 111823:
    {
        returnValue = F("Garbsener Landstr.");
        break;
    }
    case 111824:
    {
        returnValue = F("Garbsener Schweiz");
        break;
    }
    case 111825:
    {
        returnValue = F("Garbsener Str.");
        break;
    }
    case 111826:
    {
        returnValue = F("Garchinger Str.");
        break;
    }
    case 111827:
    {
        returnValue = F("Garckestr.");
        break;
    }
    case 111828:
    {
        returnValue = F("Garde-du-Corps-Str.");
        break;
    }
    case 111829:
    {
        returnValue = F("Gardekürassierstr.");
        break;
    }
    case 111830:
    {
        returnValue = F("Gardelegener Stadtweg");
        break;
    }
    case 111831:
    {
        returnValue = F("Gardelegener Str.");
        break;
    }
    case 111832:
    {
        returnValue = F("Gardelegener Weg");
        break;
    }
    case 111833:
    {
        returnValue = F("Gardeleger Str.");
        break;
    }
    case 111834:
    {
        returnValue = F("Gardelenbergstr.");
        break;
    }
    case 111835:
    {
        returnValue = F("Gardelerweg");
        break;
    }
    case 111836:
    {
        returnValue = F("Garden-City-Str.");
        break;
    }
    case 111837:
    {
        returnValue = F("Gardeng");
        break;
    }
    case 111838:
    {
        returnValue = F("Garder Mühle");
        break;
    }
    case 111839:
    {
        returnValue = F("Garder Str.");
        break;
    }
    case 111840:
    {
        returnValue = F("Gardersweg");
        break;
    }
    case 111841:
    {
        returnValue = F("Gardessen, Im Meere");
        break;
    }
    case 111842:
    {
        returnValue = F("Gardessener Str.");
        break;
    }
    case 111843:
    {
        returnValue = F("Gardestr.");
        break;
    }
    case 111844:
    {
        returnValue = F("Gardeweg");
        break;
    }
    case 111845:
    {
        returnValue = F("Gardinenstr.");
        break;
    }
    case 111846:
    {
        returnValue = F("Gardinenweg");
        break;
    }
    case 111847:
    {
        returnValue = F("Gardinger Chaussee");
        break;
    }
    case 111848:
    {
        returnValue = F("Gardinger Str.");
        break;
    }
    case 111849:
    {
        returnValue = F("Gardistenstr.");
        break;
    }
    case 111850:
    {
        returnValue = F("Gardolostr.");
        break;
    }
    case 111851:
    {
        returnValue = F("Gareisstr.");
        break;
    }
    case 111852:
    {
        returnValue = F("Garener Ring");
        break;
    }
    case 111853:
    {
        returnValue = F("Garener Str.");
        break;
    }
    case 111854:
    {
        returnValue = F("Garfelner Str.");
        break;
    }
    case 111855:
    {
        returnValue = F("Garhamer Str.");
        break;
    }
    case 111856:
    {
        returnValue = F("Garhammerweg");
        break;
    }
    case 111857:
    {
        returnValue = F("Garhamstr.");
        break;
    }
    case 111858:
    {
        returnValue = F("Garibaldiweg");
        break;
    }
    case 111859:
    {
        returnValue = F("Garibaldstr.");
        break;
    }
    case 111860:
    {
        returnValue = F("Garitzer Str.");
        break;
    }
    case 111861:
    {
        returnValue = F("Garke-Privatweg");
        break;
    }
    case 111862:
    {
        returnValue = F("Garkenburgstr.");
        break;
    }
    case 111863:
    {
        returnValue = F("Garkofen");
        break;
    }
    case 111864:
    {
        returnValue = F("Garkosche Brücke");
        break;
    }
    case 111865:
    {
        returnValue = F("Garküche");
        break;
    }
    case 111866:
    {
        returnValue = F("Garlandstr.");
        break;
    }
    case 111867:
    {
        returnValue = F("Garlebsen");
        break;
    }
    case 111868:
    {
        returnValue = F("Garlebser Str.");
        break;
    }
    case 111869:
    {
        returnValue = F("Garlesstr.");
        break;
    }
    case 111870:
    {
        returnValue = F("Garlesweg");
        break;
    }
    case 111871:
    {
        returnValue = F("Garlieb");
        break;
    }
    case 111872:
    {
        returnValue = F("Garliner Dorfstr.");
        break;
    }
    case 111873:
    {
        returnValue = F("Garlitzer Dorfstr.");
        break;
    }
    case 111874:
    {
        returnValue = F("Garlitzer Str.");
        break;
    }
    case 111875:
    {
        returnValue = F("Garlopstr.");
        break;
    }
    case 111876:
    {
        returnValue = F("Garlstedter Kirchweg");
        break;
    }
    case 111877:
    {
        returnValue = F("Garlstedter Str.");
        break;
    }
    case 111878:
    {
        returnValue = F("Garlstedter Weg");
        break;
    }
    case 111879:
    {
        returnValue = F("Garlstorfer Str.");
        break;
    }
    case 111880:
    {
        returnValue = F("Garmannstr.");
        break;
    }
    case 111881:
    {
        returnValue = F("Garmanstr.");
        break;
    }
    case 111882:
    {
        returnValue = F("Garmer Str.");
        break;
    }
    case 111883:
    {
        returnValue = F("Garmersreuth");
        break;
    }
    case 111884:
    {
        returnValue = F("Garmerstr.");
        break;
    }
    case 111885:
    {
        returnValue = F("Garmerweg");
        break;
    }
    case 111886:
    {
        returnValue = F("Garmischer Allee");
        break;
    }
    case 111887:
    {
        returnValue = F("Garmischer Str.");
        break;
    }
    case 111888:
    {
        returnValue = F("Garmisser Str.");
        break;
    }
    case 111889:
    {
        returnValue = F("Garmser Str.");
        break;
    }
    case 111890:
    {
        returnValue = F("Garmser Tief");
        break;
    }
    case 111891:
    {
        returnValue = F("Garmsstr.");
        break;
    }
    case 111892:
    {
        returnValue = F("Garnaustr.");
        break;
    }
    case 111893:
    {
        returnValue = F("Garnbacher Str.");
        break;
    }
    case 111894:
    {
        returnValue = F("Garnbachstr.");
        break;
    }
    case 111895:
    {
        returnValue = F("Garnbleiche");
        break;
    }
    case 111896:
    {
        returnValue = F("Garner Weg");
        break;
    }
    case 111897:
    {
        returnValue = F("Garnfeld");
        break;
    }
    case 111898:
    {
        returnValue = F("Garngartenstr.");
        break;
    }
    case 111899:
    {
        returnValue = F("Garnholter Str.");
        break;
    }
    case 111900:
    {
        returnValue = F("Garnholterdamm");
        break;
    }
    case 111901:
    {
        returnValue = F("Garnisons Park");
        break;
    }
    case 111902:
    {
        returnValue = F("Garnisonsgalerie");
        break;
    }
    case 111903:
    {
        returnValue = F("Garnisonsplatz");
        break;
    }
    case 111904:
    {
        returnValue = F("Garnisonsring");
        break;
    }
    case 111905:
    {
        returnValue = F("Garnisonsstr.");
        break;
    }
    case 111906:
    {
        returnValue = F("Garnisonstr.");
        break;
    }
    case 111907:
    {
        returnValue = F("Garnkorb");
        break;
    }
    case 111908:
    {
        returnValue = F("Garnmarktgasse");
        break;
    }
    case 111909:
    {
        returnValue = F("Garnrockenweg");
        break;
    }
    case 111910:
    {
        returnValue = F("Garnsack");
        break;
    }
    case 111911:
    {
        returnValue = F("Garnschneise");
        break;
    }
    case 111912:
    {
        returnValue = F("Garnsdorfer Hauptstr.");
        break;
    }
    case 111913:
    {
        returnValue = F("Garnsdorfer Str.");
        break;
    }
    case 111914:
    {
        returnValue = F("Garnseeweg");
        break;
    }
    case 111915:
    {
        returnValue = F("Garnsiederweg");
        break;
    }
    case 111916:
    {
        returnValue = F("Garnsteig");
        break;
    }
    case 111917:
    {
        returnValue = F("Garnstr.");
        break;
    }
    case 111918:
    {
        returnValue = F("Garnweg");
        break;
    }
    case 111919:
    {
        returnValue = F("Garnweide");
        break;
    }
    case 111920:
    {
        returnValue = F("Garnzell");
        break;
    }
    case 111921:
    {
        returnValue = F("Garrantenweg");
        break;
    }
    case 111922:
    {
        returnValue = F("Garreler Str.");
        break;
    }
    case 111923:
    {
        returnValue = F("Garreler Weg");
        break;
    }
    case 111924:
    {
        returnValue = F("Garrelsstr.");
        break;
    }
    case 111925:
    {
        returnValue = F("Garrelts Kamp");
        break;
    }
    case 111926:
    {
        returnValue = F("Garrelts Land");
        break;
    }
    case 111927:
    {
        returnValue = F("Garrenchen");
        break;
    }
    case 111928:
    {
        returnValue = F("Garreyer Str.");
        break;
    }
    case 111929:
    {
        returnValue = F("Garreyer Weg");
        break;
    }
    case 111930:
    {
        returnValue = F("Garrstr.");
        break;
    }
    case 111931:
    {
        returnValue = F("Garréstr.");
        break;
    }
    case 111932:
    {
        returnValue = F("Garsbeck");
        break;
    }
    case 111933:
    {
        returnValue = F("Garschager Heide");
        break;
    }
    case 111934:
    {
        returnValue = F("Garschager Str.");
        break;
    }
    case 111935:
    {
        returnValue = F("Garsdorfer Str.");
        break;
    }
    case 111936:
    {
        returnValue = F("Garsdorfer Tal");
        break;
    }
    case 111937:
    {
        returnValue = F("Garsebacher Weg");
        break;
    }
    case 111938:
    {
        returnValue = F("Garsedower Dorfstr.");
        break;
    }
    case 111939:
    {
        returnValue = F("Garsena");
        break;
    }
    case 111940:
    {
        returnValue = F("Garsitz");
        break;
    }
    case 111941:
    {
        returnValue = F("Garsitzer Str.");
        break;
    }
    case 111942:
    {
        returnValue = F("Garskestr.");
        break;
    }
    case 111943:
    {
        returnValue = F("Garstedter Feldstr.");
        break;
    }
    case 111944:
    {
        returnValue = F("Garstedter Str.");
        break;
    }
    case 111945:
    {
        returnValue = F("Garstedter Weg");
        break;
    }
    case 111946:
    {
        returnValue = F("Garswoodstr.");
        break;
    }
    case 111947:
    {
        returnValue = F("Gartachgaustr.");
        break;
    }
    case 111948:
    {
        returnValue = F("Gartau");
        break;
    }
    case 111949:
    {
        returnValue = F("Gartbecke");
        break;
    }
    case 111950:
    {
        returnValue = F("Gartbrink");
        break;
    }
    case 111951:
    {
        returnValue = F("Gartel");
        break;
    }
    case 111952:
    {
        returnValue = F("Garteler Weg");
        break;
    }
    case 111953:
    {
        returnValue = F("Garteler Weiden");
        break;
    }
    case 111954:
    {
        returnValue = F("Gartelweg");
        break;
    }
    case 111955:
    {
        returnValue = F("Gartemühle");
        break;
    }
    case 111956:
    {
        returnValue = F("Garten");
        break;
    }
    case 111957:
    {
        returnValue = F("Garten Eden");
        break;
    }
    case 111958:
    {
        returnValue = F("Garten Haus Hartmann");
        break;
    }
    case 111959:
    {
        returnValue = F("Garten Himmelblau");
        break;
    }
    case 111960:
    {
        returnValue = F("Garten Industriemuseum");
        break;
    }
    case 111961:
    {
        returnValue = F("Garten Kardinal-Galen-Heim");
        break;
    }
    case 111962:
    {
        returnValue = F("Garten Moorriem");
        break;
    }
    case 111963:
    {
        returnValue = F("Garten Pfarrzentrum Steinweiler");
        break;
    }
    case 111964:
    {
        returnValue = F("Garten Rudolf Pagenstecher");
        break;
    }
    case 111965:
    {
        returnValue = F("Garten Schloß Klippenstein");
        break;
    }
    case 111966:
    {
        returnValue = F("Garten St. Franziskus");
        break;
    }
    case 111967:
    {
        returnValue = F("Garten Thouaré");
        break;
    }
    case 111968:
    {
        returnValue = F("Garten Weg");
        break;
    }
    case 111969:
    {
        returnValue = F("Garten auf der Brücke");
        break;
    }
    case 111970:
    {
        returnValue = F("Garten der Begegnung");
        break;
    }
    case 111971:
    {
        returnValue = F("Garten der Besinnung");
        break;
    }
    case 111972:
    {
        returnValue = F("Garten der Erinnerung");
        break;
    }
    case 111973:
    {
        returnValue = F("Garten der Freundschaft");
        break;
    }
    case 111974:
    {
        returnValue = F("Garten der Generationen");
        break;
    }
    case 111975:
    {
        returnValue = F("Garten der Künste");
        break;
    }
    case 111976:
    {
        returnValue = F("Garten der Nationen");
        break;
    }
    case 111977:
    {
        returnValue = F("Garten der Ruhe");
        break;
    }
    case 111978:
    {
        returnValue = F("Garten der Sankt Bonifatius Kirche");
        break;
    }
    case 111979:
    {
        returnValue = F("Garten der Schmetterlinge");
        break;
    }
    case 111980:
    {
        returnValue = F("Garten der Seniorenresistenz");
        break;
    }
    case 111981:
    {
        returnValue = F("Garten der Sinne");
        break;
    }
    case 111982:
    {
        returnValue = F("Garten der Sinne - ehemaliger Friedhof");
        break;
    }
    case 111983:
    {
        returnValue = F("Garten der Stadt Voltera");
        break;
    }
    case 111984:
    {
        returnValue = F("Garten der Stille");
        break;
    }
    case 111985:
    {
        returnValue = F("Garten der Triangulation");
        break;
    }
    case 111986:
    {
        returnValue = F("Garten der barmherzigen Schwestern vom hl. Vinzenz von Paul");
        break;
    }
    case 111987:
    {
        returnValue = F("Garten der zwei Ufer");
        break;
    }
    case 111988:
    {
        returnValue = F("Garten der Ökologiestation");
        break;
    }
    case 111989:
    {
        returnValue = F("Garten des Friedens");
        break;
    }
    case 111990:
    {
        returnValue = F("Garten des Georgianums");
        break;
    }
    case 111991:
    {
        returnValue = F("Garten des Kaisersaals");
        break;
    }
    case 111992:
    {
        returnValue = F("Garten des Stadtschlosses");
        break;
    }
    case 111993:
    {
        returnValue = F("Garten des Wandels am \"Hugenotten- und Waldenserpfad");
        break;
    }
    case 111994:
    {
        returnValue = F("Garten des himmlischen Friedens");
        break;
    }
    case 111995:
    {
        returnValue = F("Garten evangelische Kirche");
        break;
    }
    case 111996:
    {
        returnValue = F("Garten in der Lemmergrube");
        break;
    }
    case 111997:
    {
        returnValue = F("Garten katholische Kirche");
        break;
    }
    case 111998:
    {
        returnValue = F("Garten von Prof. Roland Doschka");
        break;
    }
    case 111999:
    {
        returnValue = F("Garten von St.-Berthevin");
        break;
    }
    case 112000:
    {
        returnValue = F("Garten, Anstaltsfriedhof, Gedenkort");
        break;
    }
    case 112001:
    {
        returnValue = F("Gartenacker");
        break;
    }
    case 112002:
    {
        returnValue = F("Gartenackerstr.");
        break;
    }
    case 112003:
    {
        returnValue = F("Gartenackerweg");
        break;
    }
    case 112004:
    {
        returnValue = F("Gartenallee");
        break;
    }
    case 112005:
    {
        returnValue = F("Gartenanger");
        break;
    }
    case 112006:
    {
        returnValue = F("Gartenanlage");
        break;
    }
    case 112007:
    {
        returnValue = F("Gartenanlage \"Schöne Aussicht");
        break;
    }
    case 112008:
    {
        returnValue = F("Gartenanlage An der Festwiese");
        break;
    }
    case 112009:
    {
        returnValue = F("Gartenanlage Archenweg");
        break;
    }
    case 112010:
    {
        returnValue = F("Gartenanlage Dolscht, Nähe Wolfsrath");
        break;
    }
    case 112011:
    {
        returnValue = F("Gartenanlage Ehrgarten");
        break;
    }
    case 112012:
    {
        returnValue = F("Gartenanlage Erholung");
        break;
    }
    case 112013:
    {
        returnValue = F("Gartenanlage Fennerstr.");
        break;
    }
    case 112014:
    {
        returnValue = F("Gartenanlage Galtonia");
        break;
    }
    case 112015:
    {
        returnValue = F("Gartenanlage Kuhzer See");
        break;
    }
    case 112016:
    {
        returnValue = F("Gartenanlage Schloss Brake");
        break;
    }
    case 112017:
    {
        returnValue = F("Gartenanlage Schöneck");
        break;
    }
    case 112018:
    {
        returnValue = F("Gartenanlage am Fanggarten");
        break;
    }
    case 112019:
    {
        returnValue = F("Gartenanlage am Schloßpark");
        break;
    }
    case 112020:
    {
        returnValue = F("Gartenau");
        break;
    }
    case 112021:
    {
        returnValue = F("Gartenaustr.");
        break;
    }
    case 112022:
    {
        returnValue = F("Gartenbach");
        break;
    }
    case 112023:
    {
        returnValue = F("Gartenbahn Börrstadt");
        break;
    }
    case 112024:
    {
        returnValue = F("Gartenbau");
        break;
    }
    case 112025:
    {
        returnValue = F("Gartenbausiedlung");
        break;
    }
    case 112026:
    {
        returnValue = F("Gartenbauverein Lohberg");
        break;
    }
    case 112027:
    {
        returnValue = F("Gartenbeetstr.");
        break;
    }
    case 112028:
    {
        returnValue = F("Gartenberg");
        break;
    }
    case 112029:
    {
        returnValue = F("Gartenbergle");
        break;
    }
    case 112030:
    {
        returnValue = F("Gartenbergstr.");
        break;
    }
    case 112031:
    {
        returnValue = F("Gartenbergweg");
        break;
    }
    case 112032:
    {
        returnValue = F("Gartenblick");
        break;
    }
    case 112033:
    {
        returnValue = F("Gartenbogen");
        break;
    }
    case 112034:
    {
        returnValue = F("Gartenborn");
        break;
    }
    case 112035:
    {
        returnValue = F("Gartenbreede");
        break;
    }
    case 112036:
    {
        returnValue = F("Gartenbreie");
        break;
    }
    case 112037:
    {
        returnValue = F("Gartenbreite");
        break;
    }
    case 112038:
    {
        returnValue = F("Gartenbrunnenstr.");
        break;
    }
    case 112039:
    {
        returnValue = F("Gartenbrunnenweg");
        break;
    }
    case 112040:
    {
        returnValue = F("Gartenbrücke");
        break;
    }
    case 112041:
    {
        returnValue = F("Gartenbühlstr.");
        break;
    }
    case 112042:
    {
        returnValue = F("Gartenchaussee");
        break;
    }
    case 112043:
    {
        returnValue = F("Garteneck");
        break;
    }
    case 112044:
    {
        returnValue = F("Gartenecke");
        break;
    }
    case 112045:
    {
        returnValue = F("Gartenfeld");
        break;
    }
    case 112046:
    {
        returnValue = F("Gartenfelderstr.");
        break;
    }
    case 112047:
    {
        returnValue = F("Gartenfeldgasse");
        break;
    }
    case 112048:
    {
        returnValue = F("Gartenfeldplatz");
        break;
    }
    case 112049:
    {
        returnValue = F("Gartenfeldring");
        break;
    }
    case 112050:
    {
        returnValue = F("Gartenfeldstr.");
        break;
    }
    case 112051:
    {
        returnValue = F("Gartenfeldweg");
        break;
    }
    case 112052:
    {
        returnValue = F("Gartenfließstr.");
        break;
    }
    case 112053:
    {
        returnValue = F("Gartengang");
        break;
    }
    case 112054:
    {
        returnValue = F("Gartengasse");
        break;
    }
    case 112055:
    {
        returnValue = F("Gartengebiet");
        break;
    }
    case 112056:
    {
        returnValue = F("Gartengrund");
        break;
    }
    case 112057:
    {
        returnValue = F("Gartengrundweg");
        break;
    }
    case 112058:
    {
        returnValue = F("Gartengwenderweg");
        break;
    }
    case 112059:
    {
        returnValue = F("Gartengässchen");
        break;
    }
    case 112060:
    {
        returnValue = F("Gartengässel");
        break;
    }
    case 112061:
    {
        returnValue = F("Gartengässle");
        break;
    }
    case 112062:
    {
        returnValue = F("Gartengäßchen");
        break;
    }
    case 112063:
    {
        returnValue = F("Gartenhain");
        break;
    }
    case 112064:
    {
        returnValue = F("Gartenhalde");
        break;
    }
    case 112065:
    {
        returnValue = F("Gartenhaus");
        break;
    }
    case 112066:
    {
        returnValue = F("Gartenhauser Str.");
        break;
    }
    case 112067:
    {
        returnValue = F("Gartenhausweg");
        break;
    }
    case 112068:
    {
        returnValue = F("Gartenhauweg");
        break;
    }
    case 112069:
    {
        returnValue = F("Gartenheim");
        break;
    }
    case 112070:
    {
        returnValue = F("Gartenheimallee");
        break;
    }
    case 112071:
    {
        returnValue = F("Gartenheimsteg");
        break;
    }
    case 112072:
    {
        returnValue = F("Gartenheimstr.");
        break;
    }
    case 112073:
    {
        returnValue = F("Gartenheimweg");
        break;
    }
    case 112074:
    {
        returnValue = F("Gartenhof");
        break;
    }
    case 112075:
    {
        returnValue = F("Gartenhofstr.");
        break;
    }
    case 112076:
    {
        returnValue = F("Gartenholz");
        break;
    }
    case 112077:
    {
        returnValue = F("Gartenhute");
        break;
    }
    case 112078:
    {
        returnValue = F("Gartenhäuser");
        break;
    }
    case 112079:
    {
        returnValue = F("Gartenhäuser Weg");
        break;
    }
    case 112080:
    {
        returnValue = F("Gartenhäuslweg");
        break;
    }
    case 112081:
    {
        returnValue = F("Gartenhöh");
        break;
    }
    case 112082:
    {
        returnValue = F("Gartenhöhe");
        break;
    }
    case 112083:
    {
        returnValue = F("Gartenhütte");
        break;
    }
    case 112084:
    {
        returnValue = F("Gartenkamp");
        break;
    }
    case 112085:
    {
        returnValue = F("Gartenkampsweg");
        break;
    }
    case 112086:
    {
        returnValue = F("Gartenkolonie");
        break;
    }
    case 112087:
    {
        returnValue = F("Gartenkoppel");
        break;
    }
    case 112088:
    {
        returnValue = F("Gartenkulturzentrum Park der Gärten");
        break;
    }
    case 112089:
    {
        returnValue = F("Gartenleite");
        break;
    }
    case 112090:
    {
        returnValue = F("Gartenleiten");
        break;
    }
    case 112091:
    {
        returnValue = F("Gartenmahd");
        break;
    }
    case 112092:
    {
        returnValue = F("Gartenmeister-Beese-Weg");
        break;
    }
    case 112093:
    {
        returnValue = F("Gartenmühle");
        break;
    }
    case 112094:
    {
        returnValue = F("Gartenoasen");
        break;
    }
    case 112095:
    {
        returnValue = F("Gartenpark Haus Meer");
        break;
    }
    case 112096:
    {
        returnValue = F("Gartenpark am Rüssel");
        break;
    }
    case 112097:
    {
        returnValue = F("Gartenpfad");
        break;
    }
    case 112098:
    {
        returnValue = F("Gartenplan");
        break;
    }
    case 112099:
    {
        returnValue = F("Gartenplatz");
        break;
    }
    case 112100:
    {
        returnValue = F("Gartenpromenade");
        break;
    }
    case 112101:
    {
        returnValue = F("Gartenrain");
        break;
    }
    case 112102:
    {
        returnValue = F("Gartenried");
        break;
    }
    case 112103:
    {
        returnValue = F("Gartenring");
        break;
    }
    case 112104:
    {
        returnValue = F("Gartenringstr.");
        break;
    }
    case 112105:
    {
        returnValue = F("Gartenschau Bad Lippspringe");
        break;
    }
    case 112106:
    {
        returnValue = F("Gartenschau Eppingen – Areal \"Bachwegle");
        break;
    }
    case 112107:
    {
        returnValue = F("Gartenschau Eppingen – Areal \"Festwiesen");
        break;
    }
    case 112108:
    {
        returnValue = F("Gartenschau Eppingen – Areal \"Weiherpark");
        break;
    }
    case 112109:
    {
        returnValue = F("Gartenschaubrücke");
        break;
    }
    case 112110:
    {
        returnValue = F("Gartenschaugelände");
        break;
    }
    case 112111:
    {
        returnValue = F("Gartenschaupark");
        break;
    }
    case 112112:
    {
        returnValue = F("Gartenschläferweg");
        break;
    }
    case 112113:
    {
        returnValue = F("Gartenschneise");
        break;
    }
    case 112114:
    {
        returnValue = F("Gartenseeweg");
        break;
    }
    case 112115:
    {
        returnValue = F("Gartensiedlung");
        break;
    }
    case 112116:
    {
        returnValue = F("Gartenstadt");
        break;
    }
    case 112117:
    {
        returnValue = F("Gartenstadt Briesethal");
        break;
    }
    case 112118:
    {
        returnValue = F("Gartenstadtallee");
        break;
    }
    case 112119:
    {
        returnValue = F("Gartenstadtstr.");
        break;
    }
    case 112120:
    {
        returnValue = F("Gartenstadtweg");
        break;
    }
    case 112121:
    {
        returnValue = F("Gartensteg");
        break;
    }
    case 112122:
    {
        returnValue = F("Gartenstege");
        break;
    }
    case 112123:
    {
        returnValue = F("Gartensteig");
        break;
    }
    case 112124:
    {
        returnValue = F("Gartensteige");
        break;
    }
    case 112125:
    {
        returnValue = F("Gartenstieg");
        break;
    }
    case 112126:
    {
        returnValue = F("Gartenstiege");
        break;
    }
    case 112127:
    {
        returnValue = F("Gartenstr.");
        break;
    }
    case 112128:
    {
        returnValue = F("Gartenstr. 30 A bis 32 B");
        break;
    }
    case 112129:
    {
        returnValue = F("Gartenstr. 64-66");
        break;
    }
    case 112130:
    {
        returnValue = F("Gartenstrasse");
        break;
    }
    case 112131:
    {
        returnValue = F("Gartenstädter Markt");
        break;
    }
    case 112132:
    {
        returnValue = F("Gartenstück");
        break;
    }
    case 112133:
    {
        returnValue = F("Gartensweg");
        break;
    }
    case 112134:
    {
        returnValue = F("Gartentalstr.");
        break;
    }
    case 112135:
    {
        returnValue = F("Gartenterrasse");
        break;
    }
    case 112136:
    {
        returnValue = F("Gartentorstr.");
        break;
    }
    case 112137:
    {
        returnValue = F("Gartenviertel");
        break;
    }
    case 112138:
    {
        returnValue = F("Gartenweg");
        break;
    }
    case 112139:
    {
        returnValue = F("Gartenweg am Westplatz");
        break;
    }
    case 112140:
    {
        returnValue = F("Gartenwegle");
        break;
    }
    case 112141:
    {
        returnValue = F("Gartenwegle Luchsweg");
        break;
    }
    case 112142:
    {
        returnValue = F("Gartenwegle Riedbachweg");
        break;
    }
    case 112143:
    {
        returnValue = F("Gartenwegle Schnitzweg");
        break;
    }
    case 112144:
    {
        returnValue = F("Gartenweinberge");
        break;
    }
    case 112145:
    {
        returnValue = F("Gartenwelt - Schaugärten");
        break;
    }
    case 112146:
    {
        returnValue = F("Gartenwiese");
        break;
    }
    case 112147:
    {
        returnValue = F("Gartenwiesen");
        break;
    }
    case 112148:
    {
        returnValue = F("Gartenwiesenpfad");
        break;
    }
    case 112149:
    {
        returnValue = F("Gartenwinkel");
        break;
    }
    case 112150:
    {
        returnValue = F("Gartenzeile");
        break;
    }
    case 112151:
    {
        returnValue = F("Gartenzell");
        break;
    }
    case 112152:
    {
        returnValue = F("Gartenäcker");
        break;
    }
    case 112153:
    {
        returnValue = F("Gartenäckerring");
        break;
    }
    case 112154:
    {
        returnValue = F("Gartenäckerstr.");
        break;
    }
    case 112155:
    {
        returnValue = F("Gartenäckerweg");
        break;
    }
    case 112156:
    {
        returnValue = F("Garterlaie");
        break;
    }
    case 112157:
    {
        returnValue = F("Gartesteg");
        break;
    }
    case 112158:
    {
        returnValue = F("Gartestr.");
        break;
    }
    case 112159:
    {
        returnValue = F("Gartetalbahn");
        break;
    }
    case 112160:
    {
        returnValue = F("Gartfeld");
        break;
    }
    case 112161:
    {
        returnValue = F("Garthausen");
        break;
    }
    case 112162:
    {
        returnValue = F("Garthausstr.");
        break;
    }
    case 112163:
    {
        returnValue = F("Garther Heide");
        break;
    }
    case 112164:
    {
        returnValue = F("Garther Str.");
        break;
    }
    case 112165:
    {
        returnValue = F("Garthestr.");
        break;
    }
    case 112166:
    {
        returnValue = F("Garthof");
        break;
    }
    case 112167:
    {
        returnValue = F("Garthofstr.");
        break;
    }
    case 112168:
    {
        returnValue = F("Garting");
        break;
    }
    case 112169:
    {
        returnValue = F("Gartinger Str.");
        break;
    }
    case 112170:
    {
        returnValue = F("Gartlager Weg");
        break;
    }
    case 112171:
    {
        returnValue = F("Gartlberg");
        break;
    }
    case 112172:
    {
        returnValue = F("Gartlbergstr.");
        break;
    }
    case 112173:
    {
        returnValue = F("Gartlingen");
        break;
    }
    case 112174:
    {
        returnValue = F("Gartlinger Weg");
        break;
    }
    case 112175:
    {
        returnValue = F("Gartmannshof");
        break;
    }
    case 112176:
    {
        returnValue = F("Gartmannstr.");
        break;
    }
    case 112177:
    {
        returnValue = F("Gartnersiedlung");
        break;
    }
    case 112178:
    {
        returnValue = F("Gartnerstr.");
        break;
    }
    case 112179:
    {
        returnValue = F("Gartnerweg");
        break;
    }
    case 112180:
    {
        returnValue = F("Gartnischer Weg");
        break;
    }
    case 112181:
    {
        returnValue = F("Gartnischkamp");
        break;
    }
    case 112182:
    {
        returnValue = F("Gartower Str.");
        break;
    }
    case 112183:
    {
        returnValue = F("Gartower Weg");
        break;
    }
    case 112184:
    {
        returnValue = F("Gartroper Str.");
        break;
    }
    case 112185:
    {
        returnValue = F("Gartroper Weg");
        break;
    }
    case 112186:
    {
        returnValue = F("Gartsträucherstr.");
        break;
    }
    case 112187:
    {
        returnValue = F("Gartzemer Str.");
        break;
    }
    case 112188:
    {
        returnValue = F("Gartzemer Weg");
        break;
    }
    case 112189:
    {
        returnValue = F("Gartzenweg");
        break;
    }
    case 112190:
    {
        returnValue = F("Gartzer Ring");
        break;
    }
    case 112191:
    {
        returnValue = F("Gartzer Str.");
        break;
    }
    case 112192:
    {
        returnValue = F("Gartzer Weg");
        break;
    }
    case 112193:
    {
        returnValue = F("Gartzstr.");
        break;
    }
    case 112194:
    {
        returnValue = F("Gartzweg");
        break;
    }
    case 112195:
    {
        returnValue = F("Gartzweilerstr.");
        break;
    }
    case 112196:
    {
        returnValue = F("Garvensdorfer Dorfstr.");
        break;
    }
    case 112197:
    {
        returnValue = F("Garvensdorfer Feldrain");
        break;
    }
    case 112198:
    {
        returnValue = F("Garvensdorfer Hofstr.");
        break;
    }
    case 112199:
    {
        returnValue = F("Garvensdorfer Weg");
        break;
    }
    case 112200:
    {
        returnValue = F("Garvensstr.");
        break;
    }
    case 112201:
    {
        returnValue = F("Garveshellmer");
        break;
    }
    case 112202:
    {
        returnValue = F("Garveshörner Weg");
        break;
    }
    case 112203:
    {
        returnValue = F("Garvesser Ring");
        break;
    }
    case 112204:
    {
        returnValue = F("Garvestr.");
        break;
    }
    case 112205:
    {
        returnValue = F("Garwiedenweg");
        break;
    }
    case 112206:
    {
        returnValue = F("Garwitzer Weg");
        break;
    }
    case 112207:
    {
        returnValue = F("Garzauer Chaussee");
        break;
    }
    case 112208:
    {
        returnValue = F("Garzauer Str.");
        break;
    }
    case 112209:
    {
        returnValue = F("Garzauer Weg");
        break;
    }
    case 112210:
    {
        returnValue = F("Garzenhaus");
        break;
    }
    case 112211:
    {
        returnValue = F("Garzer Str.");
        break;
    }
    case 112212:
    {
        returnValue = F("Garzer Weg");
        break;
    }
    case 112213:
    {
        returnValue = F("Garziner Str.");
        break;
    }
    case 112214:
    {
        returnValue = F("Garziner Weg");
        break;
    }
    case 112215:
    {
        returnValue = F("Garzweg");
        break;
    }
    case 112216:
    {
        returnValue = F("Garzweiler Allee");
        break;
    }
    case 112217:
    {
        returnValue = F("Garzweiler Hof");
        break;
    }
    case 112218:
    {
        returnValue = F("Garzweilerweg");
        break;
    }
    case 112219:
    {
        returnValue = F("Garßener Str.");
        break;
    }
    case 112220:
    {
        returnValue = F("Garßener Weg");
        break;
    }
    case 112221:
    {
        returnValue = F("Garßenhof");
        break;
    }
    case 112222:
    {
        returnValue = F("Garßloh");
        break;
    }
    case 112223:
    {
        returnValue = F("Gasanstalt");
        break;
    }
    case 112224:
    {
        returnValue = F("Gasanstaltstr.");
        break;
    }
    case 112225:
    {
        returnValue = F("Gasanstaltsweg");
        break;
    }
    case 112226:
    {
        returnValue = F("Gasberg");
        break;
    }
    case 112227:
    {
        returnValue = F("Gasbitze");
        break;
    }
    case 112228:
    {
        returnValue = F("Gasborn");
        break;
    }
    case 112229:
    {
        returnValue = F("Gaschlerwiese");
        break;
    }
    case 112230:
    {
        returnValue = F("Gaschurner Weg");
        break;
    }
    case 112231:
    {
        returnValue = F("Gaschwitzer Str.");
        break;
    }
    case 112232:
    {
        returnValue = F("Gaselbogen");
        break;
    }
    case 112233:
    {
        returnValue = F("Gaselhorn");
        break;
    }
    case 112234:
    {
        returnValue = F("Gasenbergstr.");
        break;
    }
    case 112235:
    {
        returnValue = F("Gaserei");
        break;
    }
    case 112236:
    {
        returnValue = F("Gasern");
        break;
    }
    case 112237:
    {
        returnValue = F("Gasernberg");
        break;
    }
    case 112238:
    {
        returnValue = F("Gasfabrikgäßchen");
        break;
    }
    case 112239:
    {
        returnValue = F("Gasfabrikstr.");
        break;
    }
    case 112240:
    {
        returnValue = F("Gasgasse");
        break;
    }
    case 112241:
    {
        returnValue = F("Gashausweg");
        break;
    }
    case 112242:
    {
        returnValue = F("Gasland");
        break;
    }
    case 112243:
    {
        returnValue = F("Gasleitung");
        break;
    }
    case 112244:
    {
        returnValue = F("Gasleitungsschneise");
        break;
    }
    case 112245:
    {
        returnValue = F("Gasleitungsweg");
        break;
    }
    case 112246:
    {
        returnValue = F("Gasleitungweg");
        break;
    }
    case 112247:
    {
        returnValue = F("Gasmert");
        break;
    }
    case 112248:
    {
        returnValue = F("Gasolinweg");
        break;
    }
    case 112249:
    {
        returnValue = F("Gasometerweg");
        break;
    }
    case 112250:
    {
        returnValue = F("Gasparistr.");
        break;
    }
    case 112251:
    {
        returnValue = F("Gaspelshof");
        break;
    }
    case 112252:
    {
        returnValue = F("Gaspelsweg");
        break;
    }
    case 112253:
    {
        returnValue = F("Gasperswinkel");
        break;
    }
    case 112254:
    {
        returnValue = F("Gass");
        break;
    }
    case 112255:
    {
        returnValue = F("Gassackerstr.");
        break;
    }
    case 112256:
    {
        returnValue = F("Gassau");
        break;
    }
    case 112257:
    {
        returnValue = F("Gasschneise");
        break;
    }
    case 112258:
    {
        returnValue = F("Gasse");
        break;
    }
    case 112259:
    {
        returnValue = F("Gasse Triftgang-Teichstätte");
        break;
    }
    case 112260:
    {
        returnValue = F("Gasse Zur Neustadt");
        break;
    }
    case 112261:
    {
        returnValue = F("Gasse zwischen den Gärten");
        break;
    }
    case 112262:
    {
        returnValue = F("Gassebrehe");
        break;
    }
    case 112263:
    {
        returnValue = F("Gassegarten");
        break;
    }
    case 112264:
    {
        returnValue = F("Gasseldorfer Str.");
        break;
    }
    case 112265:
    {
        returnValue = F("Gasselstiege");
        break;
    }
    case 112266:
    {
        returnValue = F("Gasselstr.");
        break;
    }
    case 112267:
    {
        returnValue = F("Gasseltshausen");
        break;
    }
    case 112268:
    {
        returnValue = F("Gasselweg");
        break;
    }
    case 112269:
    {
        returnValue = F("Gassen");
        break;
    }
    case 112270:
    {
        returnValue = F("Gassen Geräumt");
        break;
    }
    case 112271:
    {
        returnValue = F("Gassenacker");
        break;
    }
    case 112272:
    {
        returnValue = F("Gassenackerstr.");
        break;
    }
    case 112273:
    {
        returnValue = F("Gassenackerweg");
        break;
    }
    case 112274:
    {
        returnValue = F("Gassenau");
        break;
    }
    case 112275:
    {
        returnValue = F("Gassenbarg");
        break;
    }
    case 112276:
    {
        returnValue = F("Gassenberg");
        break;
    }
    case 112277:
    {
        returnValue = F("Gassenbichl");
        break;
    }
    case 112278:
    {
        returnValue = F("Gassendresch");
        break;
    }
    case 112279:
    {
        returnValue = F("Gassendriesch");
        break;
    }
    case 112280:
    {
        returnValue = F("Gassenfeld");
        break;
    }
    case 112281:
    {
        returnValue = F("Gassenfeldstr.");
        break;
    }
    case 112282:
    {
        returnValue = F("Gassenfeldweg");
        break;
    }
    case 112283:
    {
        returnValue = F("Gassenfleckl");
        break;
    }
    case 112284:
    {
        returnValue = F("Gassenflur");
        break;
    }
    case 112285:
    {
        returnValue = F("Gassengarten");
        break;
    }
    case 112286:
    {
        returnValue = F("Gassengrund");
        break;
    }
    case 112287:
    {
        returnValue = F("Gassengrundweg");
        break;
    }
    case 112288:
    {
        returnValue = F("Gassengärten");
        break;
    }
    case 112289:
    {
        returnValue = F("Gassenhagen");
        break;
    }
    case 112290:
    {
        returnValue = F("Gassenhausener Weg");
        break;
    }
    case 112291:
    {
        returnValue = F("Gassenhof");
        break;
    }
    case 112292:
    {
        returnValue = F("Gassenhäuser");
        break;
    }
    case 112293:
    {
        returnValue = F("Gassenkamp");
        break;
    }
    case 112294:
    {
        returnValue = F("Gassenkreuz");
        break;
    }
    case 112295:
    {
        returnValue = F("Gassenmühle");
        break;
    }
    case 112296:
    {
        returnValue = F("Gassenpfad");
        break;
    }
    case 112297:
    {
        returnValue = F("Gassenseppen");
        break;
    }
    case 112298:
    {
        returnValue = F("Gassenstr.");
        break;
    }
    case 112299:
    {
        returnValue = F("Gassentalgraben");
        break;
    }
    case 112300:
    {
        returnValue = F("Gassentor");
        break;
    }
    case 112301:
    {
        returnValue = F("Gassentorstr.");
        break;
    }
    case 112302:
    {
        returnValue = F("Gassenweg");
        break;
    }
    case 112303:
    {
        returnValue = F("Gassenwiese");
        break;
    }
    case 112304:
    {
        returnValue = F("Gassenwiesen");
        break;
    }
    case 112305:
    {
        returnValue = F("Gassenwiesenweg");
        break;
    }
    case 112306:
    {
        returnValue = F("Gassenäcker");
        break;
    }
    case 112307:
    {
        returnValue = F("Gassenäckerstr.");
        break;
    }
    case 112308:
    {
        returnValue = F("Gassenäckerweg");
        break;
    }
    case 112309:
    {
        returnValue = F("Gasser Weg");
        break;
    }
    case 112310:
    {
        returnValue = F("Gasserl");
        break;
    }
    case 112311:
    {
        returnValue = F("Gasserstr.");
        break;
    }
    case 112312:
    {
        returnValue = F("Gasserswies");
        break;
    }
    case 112313:
    {
        returnValue = F("Gassert");
        break;
    }
    case 112314:
    {
        returnValue = F("Gasserweg");
        break;
    }
    case 112315:
    {
        returnValue = F("Gasseweg");
        break;
    }
    case 112316:
    {
        returnValue = F("Gassewies");
        break;
    }
    case 112317:
    {
        returnValue = F("Gassfeldstr.");
        break;
    }
    case 112318:
    {
        returnValue = F("Gassgarten");
        break;
    }
    case 112319:
    {
        returnValue = F("Gassgartenstr.");
        break;
    }
    case 112320:
    {
        returnValue = F("Gasskamp");
        break;
    }
    case 112321:
    {
        returnValue = F("Gassl");
        break;
    }
    case 112322:
    {
        returnValue = F("Gasslerweg");
        break;
    }
    case 112323:
    {
        returnValue = F("Gasslweg");
        break;
    }
    case 112324:
    {
        returnValue = F("Gassnerfeld");
        break;
    }
    case 112325:
    {
        returnValue = F("Gassnergasse");
        break;
    }
    case 112326:
    {
        returnValue = F("Gassnerstr.");
        break;
    }
    case 112327:
    {
        returnValue = F("Gasstr.");
        break;
    }
    case 112328:
    {
        returnValue = F("Gassweg");
        break;
    }
    case 112329:
    {
        returnValue = F("Gassäcker");
        break;
    }
    case 112330:
    {
        returnValue = F("Gast");
        break;
    }
    case 112331:
    {
        returnValue = F("Gastackersweg");
        break;
    }
    case 112332:
    {
        returnValue = F("Gastager Feld");
        break;
    }
    case 112333:
    {
        returnValue = F("Gastagweg");
        break;
    }
    case 112334:
    {
        returnValue = F("Gastallee");
        break;
    }
    case 112335:
    {
        returnValue = F("Gaste");
        break;
    }
    case 112336:
    {
        returnValue = F("Gasteig");
        break;
    }
    case 112337:
    {
        returnValue = F("Gasteiger Str.");
        break;
    }
    case 112338:
    {
        returnValue = F("Gasteigerweg");
        break;
    }
    case 112339:
    {
        returnValue = F("Gasteigweg");
        break;
    }
    case 112340:
    {
        returnValue = F("Gasteiner Str.");
        break;
    }
    case 112341:
    {
        returnValue = F("Gastellstr.");
        break;
    }
    case 112342:
    {
        returnValue = F("Gastelshofer Weg");
        break;
    }
    case 112343:
    {
        returnValue = F("Gastendonker Weg");
        break;
    }
    case 112344:
    {
        returnValue = F("Gastendonkstr.");
        break;
    }
    case 112345:
    {
        returnValue = F("Gastenfeldener Str.");
        break;
    }
    case 112346:
    {
        returnValue = F("Gastenkamp");
        break;
    }
    case 112347:
    {
        returnValue = F("Gastenlandweg");
        break;
    }
    case 112348:
    {
        returnValue = F("Gastenstückenweg");
        break;
    }
    case 112349:
    {
        returnValue = F("Gastenweg");
        break;
    }
    case 112350:
    {
        returnValue = F("Gaster Kirchweg");
        break;
    }
    case 112351:
    {
        returnValue = F("Gaster Landweg");
        break;
    }
    case 112352:
    {
        returnValue = F("Gaster Str.");
        break;
    }
    case 112353:
    {
        returnValue = F("Gaster Weg");
        break;
    }
    case 112354:
    {
        returnValue = F("Gaster-Äcker-Weg");
        break;
    }
    case 112355:
    {
        returnValue = F("Gasteriege");
        break;
    }
    case 112356:
    {
        returnValue = F("Gastering");
        break;
    }
    case 112357:
    {
        returnValue = F("Gasterstädtweg");
        break;
    }
    case 112358:
    {
        returnValue = F("Gasteröder Str.");
        break;
    }
    case 112359:
    {
        returnValue = F("Gastespitzweg");
        break;
    }
    case 112360:
    {
        returnValue = F("Gastesweg");
        break;
    }
    case 112361:
    {
        returnValue = F("Gasteweg");
        break;
    }
    case 112362:
    {
        returnValue = F("Gastewitzer Str.");
        break;
    }
    case 112363:
    {
        returnValue = F("Gastfeldstr.");
        break;
    }
    case 112364:
    {
        returnValue = F("Gasthausberg");
        break;
    }
    case 112365:
    {
        returnValue = F("Gasthausdurchgang");
        break;
    }
    case 112366:
    {
        returnValue = F("Gasthaushelmer");
        break;
    }
    case 112367:
    {
        returnValue = F("Gasthauskanal");
        break;
    }
    case 112368:
    {
        returnValue = F("Gasthauslohne");
        break;
    }
    case 112369:
    {
        returnValue = F("Gasthausplatz");
        break;
    }
    case 112370:
    {
        returnValue = F("Gasthausstege");
        break;
    }
    case 112371:
    {
        returnValue = F("Gasthausstr.");
        break;
    }
    case 112372:
    {
        returnValue = F("Gasthausweg");
        break;
    }
    case 112373:
    {
        returnValue = F("Gasthofsberg");
        break;
    }
    case 112374:
    {
        returnValue = F("Gasthofsgasse");
        break;
    }
    case 112375:
    {
        returnValue = F("Gasthofsplatz");
        break;
    }
    case 112376:
    {
        returnValue = F("Gasthofstr.");
        break;
    }
    case 112377:
    {
        returnValue = F("Gasthofsweg");
        break;
    }
    case 112378:
    {
        returnValue = F("Gasthofweg");
        break;
    }
    case 112379:
    {
        returnValue = F("Gasthuslohne");
        break;
    }
    case 112380:
    {
        returnValue = F("Gastkamp");
        break;
    }
    case 112381:
    {
        returnValue = F("Gastland");
        break;
    }
    case 112382:
    {
        returnValue = F("Gastlstr.");
        break;
    }
    case 112383:
    {
        returnValue = F("Gastmeedeweg");
        break;
    }
    case 112384:
    {
        returnValue = F("Gastoniastr.");
        break;
    }
    case 112385:
    {
        returnValue = F("Gastriege");
        break;
    }
    case 112386:
    {
        returnValue = F("Gastring");
        break;
    }
    case 112387:
    {
        returnValue = F("Gaststiege");
        break;
    }
    case 112388:
    {
        returnValue = F("Gaststr.");
        break;
    }
    case 112389:
    {
        returnValue = F("Gastweg");
        break;
    }
    case 112390:
    {
        returnValue = F("Gastwies");
        break;
    }
    case 112391:
    {
        returnValue = F("Gastäckerstr.");
        break;
    }
    case 112392:
    {
        returnValue = F("Gasweg");
        break;
    }
    case 112393:
    {
        returnValue = F("Gaswerkstr.");
        break;
    }
    case 112394:
    {
        returnValue = F("Gaswerksweg");
        break;
    }
    case 112395:
    {
        returnValue = F("Gaswerkweg");
        break;
    }
    case 112396:
    {
        returnValue = F("Gasötzweg");
        break;
    }
    case 112397:
    {
        returnValue = F("Gate");
        break;
    }
    case 112398:
    {
        returnValue = F("Gate Teiche");
        break;
    }
    case 112399:
    {
        returnValue = F("Gatermannshof");
        break;
    }
    case 112400:
    {
        returnValue = F("Gaterslebener Str.");
        break;
    }
    case 112401:
    {
        returnValue = F("Gaterstr.");
        break;
    }
    case 112402:
    {
        returnValue = F("Gaterweg");
        break;
    }
    case 112403:
    {
        returnValue = F("Gateway Garden");
        break;
    }
    case 112404:
    {
        returnValue = F("Gath");
        break;
    }
    case 112405:
    {
        returnValue = F("Gathe");
        break;
    }
    case 112406:
    {
        returnValue = F("Gather Landstr.");
        break;
    }
    case 112407:
    {
        returnValue = F("Gatherbueschen");
        break;
    }
    case 112408:
    {
        returnValue = F("Gathergang");
        break;
    }
    case 112409:
    {
        returnValue = F("Gatherhofstr.");
        break;
    }
    case 112410:
    {
        returnValue = F("Gatherskamp");
        break;
    }
    case 112411:
    {
        returnValue = F("Gatherstr.");
        break;
    }
    case 112412:
    {
        returnValue = F("Gathersweg");
        break;
    }
    case 112413:
    {
        returnValue = F("Gatherweg");
        break;
    }
    case 112414:
    {
        returnValue = F("Gathestr.");
        break;
    }
    case 112415:
    {
        returnValue = F("Gathmannstr.");
        break;
    }
    case 112416:
    {
        returnValue = F("Gathmannweg");
        break;
    }
    case 112417:
    {
        returnValue = F("Gathstr.");
        break;
    }
    case 112418:
    {
        returnValue = F("Gathwiese");
        break;
    }
    case 112419:
    {
        returnValue = F("Gatjebogen");
        break;
    }
    case 112420:
    {
        returnValue = F("Gatjeweg");
        break;
    }
    case 112421:
    {
        returnValue = F("Gatondeweg");
        break;
    }
    case 112422:
    {
        returnValue = F("Gatower Dorfstr.");
        break;
    }
    case 112423:
    {
        returnValue = F("Gatower Str.");
        break;
    }
    case 112424:
    {
        returnValue = F("Gatower Weg");
        break;
    }
    case 112425:
    {
        returnValue = F("Gatowweg");
        break;
    }
    case 112426:
    {
        returnValue = F("Gatrenstr.");
        break;
    }
    case 112427:
    {
        returnValue = F("Gatscher Damm");
        break;
    }
    case 112428:
    {
        returnValue = F("Gatschina Park");
        break;
    }
    case 112429:
    {
        returnValue = F("Gatschow");
        break;
    }
    case 112430:
    {
        returnValue = F("Gattau");
        break;
    }
    case 112431:
    {
        returnValue = F("Gattenhofer Weg");
        break;
    }
    case 112432:
    {
        returnValue = F("Gattenhofstr.");
        break;
    }
    case 112433:
    {
        returnValue = F("Gatterallee");
        break;
    }
    case 112434:
    {
        returnValue = F("Gatterausfahrt");
        break;
    }
    case 112435:
    {
        returnValue = F("Gattererweg");
        break;
    }
    case 112436:
    {
        returnValue = F("Gattergasse");
        break;
    }
    case 112437:
    {
        returnValue = F("Gatteringer Str.");
        break;
    }
    case 112438:
    {
        returnValue = F("Gattern - Berg");
        break;
    }
    case 112439:
    {
        returnValue = F("Gatterslebener Str.");
        break;
    }
    case 112440:
    {
        returnValue = F("Gattersleber Str.");
        break;
    }
    case 112441:
    {
        returnValue = F("Gatterstr.");
        break;
    }
    case 112442:
    {
        returnValue = F("Gatterstädter Str.");
        break;
    }
    case 112443:
    {
        returnValue = F("Gatterstädter Weg");
        break;
    }
    case 112444:
    {
        returnValue = F("Gatterwaldweg");
        break;
    }
    case 112445:
    {
        returnValue = F("Gatterweg");
        break;
    }
    case 112446:
    {
        returnValue = F("Gattfeld");
        break;
    }
    case 112447:
    {
        returnValue = F("Gattgarten");
        break;
    }
    case 112448:
    {
        returnValue = F("Gatthauer Halde");
        break;
    }
    case 112449:
    {
        returnValue = F("Gattingerstr.");
        break;
    }
    case 112450:
    {
        returnValue = F("Gattingerweg");
        break;
    }
    case 112451:
    {
        returnValue = F("Gattje");
        break;
    }
    case 112452:
    {
        returnValue = F("Gattnauer Halde");
        break;
    }
    case 112453:
    {
        returnValue = F("Gattnauer Str.");
        break;
    }
    case 112454:
    {
        returnValue = F("Gattopskamp");
        break;
    }
    case 112455:
    {
        returnValue = F("Gattrütte");
        break;
    }
    case 112456:
    {
        returnValue = F("Gatze");
        break;
    }
    case 112457:
    {
        returnValue = F("Gatzen");
        break;
    }
    case 112458:
    {
        returnValue = F("Gatzenberg");
        break;
    }
    case 112459:
    {
        returnValue = F("Gatzenborn");
        break;
    }
    case 112460:
    {
        returnValue = F("Gatzenhöfe");
        break;
    }
    case 112461:
    {
        returnValue = F("Gatzenkamp");
        break;
    }
    case 112462:
    {
        returnValue = F("Gatzenstr.");
        break;
    }
    case 112463:
    {
        returnValue = F("Gatzenweg");
        break;
    }
    case 112464:
    {
        returnValue = F("Gatzweg");
        break;
    }
    case 112465:
    {
        returnValue = F("Gatzweiler");
        break;
    }
    case 112466:
    {
        returnValue = F("Gau Dör");
        break;
    }
    case 112467:
    {
        returnValue = F("Gau-Algesheimer Str.");
        break;
    }
    case 112468:
    {
        returnValue = F("Gau-Algesheimer-Str.");
        break;
    }
    case 112469:
    {
        returnValue = F("Gau-Bickelheimer Str.");
        break;
    }
    case 112470:
    {
        returnValue = F("Gau-Bickelheimer Weg");
        break;
    }
    case 112471:
    {
        returnValue = F("Gau-Bickelheimer-Weg");
        break;
    }
    case 112472:
    {
        returnValue = F("Gau-Heppenheimer Str.");
        break;
    }
    case 112473:
    {
        returnValue = F("Gau-Odernheimer Str.");
        break;
    }
    case 112474:
    {
        returnValue = F("Gau-Odernheimer Weg");
        break;
    }
    case 112475:
    {
        returnValue = F("Gau-Weinheimer Str.");
        break;
    }
    case 112476:
    {
        returnValue = F("Gauangellocher Weg");
        break;
    }
    case 112477:
    {
        returnValue = F("Gauaschacher Str.");
        break;
    }
    case 112478:
    {
        returnValue = F("Gaubaldstr.");
        break;
    }
    case 112479:
    {
        returnValue = F("Gaubenschöchle");
        break;
    }
    case 112480:
    {
        returnValue = F("Gauberg");
        break;
    }
    case 112481:
    {
        returnValue = F("Gaubergstr.");
        break;
    }
    case 112482:
    {
        returnValue = F("Gaubrunnenweg");
        break;
    }
    case 112483:
    {
        returnValue = F("Gaubüttelbrunner Str.");
        break;
    }
    case 112484:
    {
        returnValue = F("Gauchachstr.");
        break;
    }
    case 112485:
    {
        returnValue = F("Gauchachweg");
        break;
    }
    case 112486:
    {
        returnValue = F("Gaucherstr.");
        break;
    }
    case 112487:
    {
        returnValue = F("Gauchhalde");
        break;
    }
    case 112488:
    {
        returnValue = F("Gauchhalden");
        break;
    }
    case 112489:
    {
        returnValue = F("Gauchhauser Sträßle");
        break;
    }
    case 112490:
    {
        returnValue = F("Gauchhälde");
        break;
    }
    case 112491:
    {
        returnValue = F("Gauchhäldenweg");
        break;
    }
    case 112492:
    {
        returnValue = F("Gauchmattenweg");
        break;
    }
    case 112493:
    {
        returnValue = F("Gauchsdorfer Hauptstr.");
        break;
    }
    case 112494:
    {
        returnValue = F("Gauchsdorfer Weg");
        break;
    }
    case 112495:
    {
        returnValue = F("Gaudenz-Breuer-Str.");
        break;
    }
    case 112496:
    {
        returnValue = F("Gauder Pfad");
        break;
    }
    case 112497:
    {
        returnValue = F("Gaudernbacher Str.");
        break;
    }
    case 112498:
    {
        returnValue = F("Gaudernbacher Weg");
        break;
    }
    case 112499:
    {
        returnValue = F("Gaudichsroda");
        break;
    }
    case 112500:
    {
        returnValue = F("Gaudigplatz");
        break;
    }
    case 112501:
    {
        returnValue = F("Gaudigstr.");
        break;
    }
    case 112502:
    {
        returnValue = F("Gaudigweg");
        break;
    }
    case 112503:
    {
        returnValue = F("Gaudlitzer Weg");
        break;
    }
    case 112504:
    {
        returnValue = F("Gaue");
        break;
    }
    case 112505:
    {
        returnValue = F("Gaue Ort");
        break;
    }
    case 112506:
    {
        returnValue = F("Gaueler Weg");
        break;
    }
    case 112507:
    {
        returnValue = F("Gauensieker Feldstr.");
        break;
    }
    case 112508:
    {
        returnValue = F("Gauensieker Hafenstr.");
        break;
    }
    case 112509:
    {
        returnValue = F("Gauensieker Schleusenfleth");
        break;
    }
    case 112510:
    {
        returnValue = F("Gauensieker Str.");
        break;
    }
    case 112511:
    {
        returnValue = F("Gauensiekersand");
        break;
    }
    case 112512:
    {
        returnValue = F("Gauern");
        break;
    }
    case 112513:
    {
        returnValue = F("Gauernitzer Allee");
        break;
    }
    case 112514:
    {
        returnValue = F("Gauernitzer Str.");
        break;
    }
    case 112515:
    {
        returnValue = F("Gauersche Str.");
        break;
    }
    case 112516:
    {
        returnValue = F("Gauersheimer Str.");
        break;
    }
    case 112517:
    {
        returnValue = F("Gauerstadter Berg");
        break;
    }
    case 112518:
    {
        returnValue = F("Gauertstr.");
        break;
    }
    case 112519:
    {
        returnValue = F("Gaugasse");
        break;
    }
    case 112520:
    {
        returnValue = F("Gaugenfeldstr.");
        break;
    }
    case 112521:
    {
        returnValue = F("Gaugerstr.");
        break;
    }
    case 112522:
    {
        returnValue = F("Gauglgasse");
        break;
    }
    case 112523:
    {
        returnValue = F("Gaugraf-Zeisolf-Str.");
        break;
    }
    case 112524:
    {
        returnValue = F("Gaugrafenstr.");
        break;
    }
    case 112525:
    {
        returnValue = F("Gaugrafenweg");
        break;
    }
    case 112526:
    {
        returnValue = F("Gaugrevestr.");
        break;
    }
    case 112527:
    {
        returnValue = F("Gaugshausener Str.");
        break;
    }
    case 112528:
    {
        returnValue = F("Gauguinweg");
        break;
    }
    case 112529:
    {
        returnValue = F("Gaugäßchen");
        break;
    }
    case 112530:
    {
        returnValue = F("Gauinger Weg");
        break;
    }
    case 112531:
    {
        returnValue = F("Gaukenbrinkweg");
        break;
    }
    case 112532:
    {
        returnValue = F("Gaulbach");
        break;
    }
    case 112533:
    {
        returnValue = F("Gaulbachweg");
        break;
    }
    case 112534:
    {
        returnValue = F("Gaulenbergergasse");
        break;
    }
    case 112535:
    {
        returnValue = F("Gaulental");
        break;
    }
    case 112536:
    {
        returnValue = F("Gauler Höhe");
        break;
    }
    case 112537:
    {
        returnValue = F("Gauleweg");
        break;
    }
    case 112538:
    {
        returnValue = F("Gaulgasse");
        break;
    }
    case 112539:
    {
        returnValue = F("Gaulhimmelweg");
        break;
    }
    case 112540:
    {
        returnValue = F("Gauliser Str.");
        break;
    }
    case 112541:
    {
        returnValue = F("Gaulnhofer Str.");
        break;
    }
    case 112542:
    {
        returnValue = F("Gaulsheimer Str.");
        break;
    }
    case 112543:
    {
        returnValue = F("Gaulsheimer Weg");
        break;
    }
    case 112544:
    {
        returnValue = F("Gaulskopf");
        break;
    }
    case 112545:
    {
        returnValue = F("Gaulstr.");
        break;
    }
    case 112546:
    {
        returnValue = F("Gaulsweg");
        break;
    }
    case 112547:
    {
        returnValue = F("Gauläckerweg");
        break;
    }
    case 112548:
    {
        returnValue = F("Gaumnitzer Str.");
        break;
    }
    case 112549:
    {
        returnValue = F("Gaunitzer Str.");
        break;
    }
    case 112550:
    {
        returnValue = F("Gaunkofen");
        break;
    }
    case 112551:
    {
        returnValue = F("Gaurettersheimer Str.");
        break;
    }
    case 112552:
    {
        returnValue = F("Gausburg");
        break;
    }
    case 112553:
    {
        returnValue = F("Gauschwangweg");
        break;
    }
    case 112554:
    {
        returnValue = F("Gausebreede");
        break;
    }
    case 112555:
    {
        returnValue = F("Gausebrink");
        break;
    }
    case 112556:
    {
        returnValue = F("Gausebrok");
        break;
    }
    case 112557:
    {
        returnValue = F("Gauseende");
        break;
    }
    case 112558:
    {
        returnValue = F("Gausekamp");
        break;
    }
    case 112559:
    {
        returnValue = F("Gausekampweg");
        break;
    }
    case 112560:
    {
        returnValue = F("Gauseköte");
        break;
    }
    case 112561:
    {
        returnValue = F("Gauselfinger Str.");
        break;
    }
    case 112562:
    {
        returnValue = F("Gauselmannskamp");
        break;
    }
    case 112563:
    {
        returnValue = F("Gausepatt");
        break;
    }
    case 112564:
    {
        returnValue = F("Gausepohl");
        break;
    }
    case 112565:
    {
        returnValue = F("Gausepohlweg");
        break;
    }
    case 112566:
    {
        returnValue = F("Gauseworth");
        break;
    }
    case 112567:
    {
        returnValue = F("Gaushorner Str.");
        break;
    }
    case 112568:
    {
        returnValue = F("Gauskopfweg");
        break;
    }
    case 112569:
    {
        returnValue = F("Gauskrog");
        break;
    }
    case 112570:
    {
        returnValue = F("Gausmannsweiler");
        break;
    }
    case 112571:
    {
        returnValue = F("Gausmarkt");
        break;
    }
    case 112572:
    {
        returnValue = F("Gausnarv");
        break;
    }
    case 112573:
    {
        returnValue = F("Gauspad");
        break;
    }
    case 112574:
    {
        returnValue = F("Gauspännestr.");
        break;
    }
    case 112575:
    {
        returnValue = F("Gauspänneweg");
        break;
    }
    case 112576:
    {
        returnValue = F("Gauss-Allee");
        break;
    }
    case 112577:
    {
        returnValue = F("Gausstr.");
        break;
    }
    case 112578:
    {
        returnValue = F("Gaustadter Hauptstr.");
        break;
    }
    case 112579:
    {
        returnValue = F("Gaustadter Weg");
        break;
    }
    case 112580:
    {
        returnValue = F("Gaustr.");
        break;
    }
    case 112581:
    {
        returnValue = F("Gaustritzer Str.");
        break;
    }
    case 112582:
    {
        returnValue = F("Gausweg");
        break;
    }
    case 112583:
    {
        returnValue = F("Gauswisch");
        break;
    }
    case 112584:
    {
        returnValue = F("Gauthierstr.");
        break;
    }
    case 112585:
    {
        returnValue = F("Gautiers Wiesen");
        break;
    }
    case 112586:
    {
        returnValue = F("Gautinger Geräumt");
        break;
    }
    case 112587:
    {
        returnValue = F("Gautinger Landstr.");
        break;
    }
    case 112588:
    {
        returnValue = F("Gautinger Str.");
        break;
    }
    case 112589:
    {
        returnValue = F("Gautinger Weg");
        break;
    }
    case 112590:
    {
        returnValue = F("Gautscheichsträßle");
        break;
    }
    case 112591:
    {
        returnValue = F("Gautscheneichenweg");
        break;
    }
    case 112592:
    {
        returnValue = F("Gautschenkopfweg");
        break;
    }
    case 112593:
    {
        returnValue = F("Gautschgrabenweg");
        break;
    }
    case 112594:
    {
        returnValue = F("Gautschweg");
        break;
    }
    case 112595:
    {
        returnValue = F("Gautsgarten");
        break;
    }
    case 112596:
    {
        returnValue = F("Gauweg");
        break;
    }
    case 112597:
    {
        returnValue = F("Gauxbachweg");
        break;
    }
    case 112598:
    {
        returnValue = F("Gauzolfstr.");
        break;
    }
    case 112599:
    {
        returnValue = F("Gauß-Weber-Anlagen");
        break;
    }
    case 112600:
    {
        returnValue = F("Gaußberg");
        break;
    }
    case 112601:
    {
        returnValue = F("Gaußhof");
        break;
    }
    case 112602:
    {
        returnValue = F("Gaußiger Weg");
        break;
    }
    case 112603:
    {
        returnValue = F("Gaußring");
        break;
    }
    case 112604:
    {
        returnValue = F("Gaußstr.");
        break;
    }
    case 112605:
    {
        returnValue = F("Gaußstr. / Von-Guericke-Allee");
        break;
    }
    case 112606:
    {
        returnValue = F("Gaußweg");
        break;
    }
    case 112607:
    {
        returnValue = F("Gavendorf");
        break;
    }
    case 112608:
    {
        returnValue = F("Gaxberger Weg");
        break;
    }
    case 112609:
    {
        returnValue = F("Gaxel");
        break;
    }
    case 112610:
    {
        returnValue = F("Gaydoulstr.");
        break;
    }
    case 112611:
    {
        returnValue = F("Gayen");
        break;
    }
    case 112612:
    {
        returnValue = F("Gayernstr.");
        break;
    }
    case 112613:
    {
        returnValue = F("Gayernweg");
        break;
    }
    case 112614:
    {
        returnValue = F("Gayerstr.");
        break;
    }
    case 112615:
    {
        returnValue = F("Gayerweg");
        break;
    }
    case 112616:
    {
        returnValue = F("Gaylerstr.");
        break;
    }
    case 112617:
    {
        returnValue = F("Gaylingsgasse");
        break;
    }
    case 112618:
    {
        returnValue = F("Gaylingstr.");
        break;
    }
    case 112619:
    {
        returnValue = F("Gaylingweg");
        break;
    }
    case 112620:
    {
        returnValue = F("Gaymannstr.");
        break;
    }
    case 112621:
    {
        returnValue = F("Gaymühle");
        break;
    }
    case 112622:
    {
        returnValue = F("Gaytalstr.");
        break;
    }
    case 112623:
    {
        returnValue = F("Gaytalweg");
        break;
    }
    case 112624:
    {
        returnValue = F("Gazellenstr.");
        break;
    }
    case 112625:
    {
        returnValue = F("Gazellenweg");
        break;
    }
    case 112626:
    {
        returnValue = F("Gazellestr.");
        break;
    }
    case 112627:
    {
        returnValue = F("Gazenweg");
        break;
    }
    case 112628:
    {
        returnValue = F("Gaßackerweg");
        break;
    }
    case 112629:
    {
        returnValue = F("Gaßbacher Weg");
        break;
    }
    case 112630:
    {
        returnValue = F("Gaßberg");
        break;
    }
    case 112631:
    {
        returnValue = F("Gaßecke");
        break;
    }
    case 112632:
    {
        returnValue = F("Gaßl");
        break;
    }
    case 112633:
    {
        returnValue = F("Gaßlweg");
        break;
    }
    case 112634:
    {
        returnValue = F("Gaßmannstr.");
        break;
    }
    case 112635:
    {
        returnValue = F("Gaßnerallee");
        break;
    }
    case 112636:
    {
        returnValue = F("Gaßnerplatz");
        break;
    }
    case 112637:
    {
        returnValue = F("Gaßnerstr.");
        break;
    }
    case 112638:
    {
        returnValue = F("Gaßpforte");
        break;
    }
    case 112639:
    {
        returnValue = F("Gaßrain");
        break;
    }
    case 112640:
    {
        returnValue = F("Gaßweg");
        break;
    }
    case 112641:
    {
        returnValue = F("Gaßäckerstr.");
        break;
    }
    case 112642:
    {
        returnValue = F("Gaßäckerweg");
        break;
    }
    case 112643:
    {
        returnValue = F("Gdansker Str.");
        break;
    }
    case 112644:
    {
        returnValue = F("Gdingener Str.");
        break;
    }
    case 112645:
    {
        returnValue = F("Geaseweg");
        break;
    }
    case 112646:
    {
        returnValue = F("Gebackene Birnstr.");
        break;
    }
    case 112647:
    {
        returnValue = F("Gebackenebirnstr.");
        break;
    }
    case 112648:
    {
        returnValue = F("Gebaer Str.");
        break;
    }
    case 112649:
    {
        returnValue = F("Gebath-Hang");
        break;
    }
    case 112650:
    {
        returnValue = F("Gebatstr.");
        break;
    }
    case 112651:
    {
        returnValue = F("Gebauers Ruh");
        break;
    }
    case 112652:
    {
        returnValue = F("Gebauerstr.");
        break;
    }
    case 112653:
    {
        returnValue = F("Gebauerweg");
        break;
    }
    case 112654:
    {
        returnValue = F("Gebauter Kannenhenkel");
        break;
    }
    case 112655:
    {
        returnValue = F("Gebbertstr.");
        break;
    }
    case 112656:
    {
        returnValue = F("Gebeckstr.");
        break;
    }
    case 112657:
    {
        returnValue = F("Gebehardstr.");
        break;
    }
    case 112658:
    {
        returnValue = F("Gebelestr.");
        break;
    }
    case 112659:
    {
        returnValue = F("Gebelkofener Str.");
        break;
    }
    case 112660:
    {
        returnValue = F("Gebelkofener Weg");
        break;
    }
    case 112661:
    {
        returnValue = F("Gebelsbergstr.");
        break;
    }
    case 112662:
    {
        returnValue = F("Gebelstr.");
        break;
    }
    case 112663:
    {
        returnValue = F("Gebelwies");
        break;
    }
    case 112664:
    {
        returnValue = F("Gebenbacher Str.");
        break;
    }
    case 112665:
    {
        returnValue = F("Gebenbachweg");
        break;
    }
    case 112666:
    {
        returnValue = F("Gebenhofener Str.");
        break;
    }
    case 112667:
    {
        returnValue = F("Gebenstr.");
        break;
    }
    case 112668:
    {
        returnValue = F("Gebenweiler Sägmühle");
        break;
    }
    case 112669:
    {
        returnValue = F("Gebergasse");
        break;
    }
    case 112670:
    {
        returnValue = F("Gebergrund");
        break;
    }
    case 112671:
    {
        returnValue = F("Gebergrundblick");
        break;
    }
    case 112672:
    {
        returnValue = F("Gebergrundweg");
        break;
    }
    case 112673:
    {
        returnValue = F("Geberichstr.");
        break;
    }
    case 112674:
    {
        returnValue = F("Gebersbacher Str.");
        break;
    }
    case 112675:
    {
        returnValue = F("Gebersbergstr.");
        break;
    }
    case 112676:
    {
        returnValue = F("Gebersdorf");
        break;
    }
    case 112677:
    {
        returnValue = F("Gebersdorfer Str.");
        break;
    }
    case 112678:
    {
        returnValue = F("Gebersdorfer Weg");
        break;
    }
    case 112679:
    {
        returnValue = F("Gebersheimer Str.");
        break;
    }
    case 112680:
    {
        returnValue = F("Gebersheimer Weg");
        break;
    }
    case 112681:
    {
        returnValue = F("Geberskirchen");
        break;
    }
    case 112682:
    {
        returnValue = F("Gebersreuth");
        break;
    }
    case 112683:
    {
        returnValue = F("Geberstr.");
        break;
    }
    case 112684:
    {
        returnValue = F("Gebertshof");
        break;
    }
    case 112685:
    {
        returnValue = F("Gebertshäuser Weg");
        break;
    }
    case 112686:
    {
        returnValue = F("Gebertstr.");
        break;
    }
    case 112687:
    {
        returnValue = F("Gebertweg");
        break;
    }
    case 112688:
    {
        returnValue = F("Gebeschusstr.");
        break;
    }
    case 112689:
    {
        returnValue = F("Gebeseer Str.");
        break;
    }
    case 112690:
    {
        returnValue = F("Gebetsberg für die Nationen");
        break;
    }
    case 112691:
    {
        returnValue = F("Gebgernstr.");
        break;
    }
    case 112692:
    {
        returnValue = F("Gebhard-Eckler-Str.");
        break;
    }
    case 112693:
    {
        returnValue = F("Gebhard-Fugel-Str.");
        break;
    }
    case 112694:
    {
        returnValue = F("Gebhard-Fugel-Weg");
        break;
    }
    case 112695:
    {
        returnValue = F("Gebhard-Huber-Str.");
        break;
    }
    case 112696:
    {
        returnValue = F("Gebhard-Kirchmann-Weg");
        break;
    }
    case 112697:
    {
        returnValue = F("Gebhard-Kromer-Str.");
        break;
    }
    case 112698:
    {
        returnValue = F("Gebhard-Müller-Allee");
        break;
    }
    case 112699:
    {
        returnValue = F("Gebhard-Müller-Platz");
        break;
    }
    case 112700:
    {
        returnValue = F("Gebhard-Müller-Str.");
        break;
    }
    case 112701:
    {
        returnValue = F("Gebhard-Ott-Str.");
        break;
    }
    case 112702:
    {
        returnValue = F("Gebhard-von-Alvensleben-Weg");
        break;
    }
    case 112703:
    {
        returnValue = F("Gebhard-von-Bortfelde-Weg");
        break;
    }
    case 112704:
    {
        returnValue = F("Gebharden Brunnen");
        break;
    }
    case 112705:
    {
        returnValue = F("Gebhardiweg");
        break;
    }
    case 112706:
    {
        returnValue = F("Gebhardshagen");
        break;
    }
    case 112707:
    {
        returnValue = F("Gebhardsreuth");
        break;
    }
    case 112708:
    {
        returnValue = F("Gebhardstr.");
        break;
    }
    case 112709:
    {
        returnValue = F("Gebhardsweiler");
        break;
    }
    case 112710:
    {
        returnValue = F("Gebhardsweilerstr.");
        break;
    }
    case 112711:
    {
        returnValue = F("Gebhardtsiedlung");
        break;
    }
    case 112712:
    {
        returnValue = F("Gebhardtstr.");
        break;
    }
    case 112713:
    {
        returnValue = F("Gebhardtweg");
        break;
    }
    case 112714:
    {
        returnValue = F("Gebhardweg");
        break;
    }
    case 112715:
    {
        returnValue = F("Gebhartgasse");
        break;
    }
    case 112716:
    {
        returnValue = F("Gebhartstr.");
        break;
    }
    case 112717:
    {
        returnValue = F("Gebickestr.");
        break;
    }
    case 112718:
    {
        returnValue = F("Gebind");
        break;
    }
    case 112719:
    {
        returnValue = F("Gebindsiedlung");
        break;
    }
    case 112720:
    {
        returnValue = F("Gebindstr.");
        break;
    }
    case 112721:
    {
        returnValue = F("Gebinger Weg");
        break;
    }
    case 112722:
    {
        returnValue = F("Gebirgsblick");
        break;
    }
    case 112723:
    {
        returnValue = F("Gebirgsjägerstr.");
        break;
    }
    case 112724:
    {
        returnValue = F("Gebirgspionierstr.");
        break;
    }
    case 112725:
    {
        returnValue = F("Gebirgsstr.");
        break;
    }
    case 112726:
    {
        returnValue = F("Gebirgstr.");
        break;
    }
    case 112727:
    {
        returnValue = F("Gebizostr.");
        break;
    }
    case 112728:
    {
        returnValue = F("Gebkenkamp");
        break;
    }
    case 112729:
    {
        returnValue = F("Gebkenweg");
        break;
    }
    case 112730:
    {
        returnValue = F("Gebkestr.");
        break;
    }
    case 112731:
    {
        returnValue = F("Geblatsrieder Str.");
        break;
    }
    case 112732:
    {
        returnValue = F("Geblerstr.");
        break;
    }
    case 112733:
    {
        returnValue = F("Geblerweg");
        break;
    }
    case 112734:
    {
        returnValue = F("Gebletsbronn");
        break;
    }
    case 112735:
    {
        returnValue = F("Gebmannsweg");
        break;
    }
    case 112736:
    {
        returnValue = F("Gebohlter Weg");
        break;
    }
    case 112737:
    {
        returnValue = F("Gebr.- Schmidt-Str.");
        break;
    }
    case 112738:
    {
        returnValue = F("Gebr.-Dufner-Str.");
        break;
    }
    case 112739:
    {
        returnValue = F("Gebr.-Grimm-Platz");
        break;
    }
    case 112740:
    {
        returnValue = F("Gebr.-Grimm-Str.");
        break;
    }
    case 112741:
    {
        returnValue = F("Gebr.-Lemke-Weg");
        break;
    }
    case 112742:
    {
        returnValue = F("Gebr.-Walther-Weg");
        break;
    }
    case 112743:
    {
        returnValue = F("Gebr.-Wright-Str.");
        break;
    }
    case 112744:
    {
        returnValue = F("Gebr.-Zürn-Weg");
        break;
    }
    case 112745:
    {
        returnValue = F("Gebrachinger Weg");
        break;
    }
    case 112746:
    {
        returnValue = F("Gebrandstr.");
        break;
    }
    case 112747:
    {
        returnValue = F("Gebrannte Mauerstr.");
        break;
    }
    case 112748:
    {
        returnValue = F("Gebrannte Schneise");
        break;
    }
    case 112749:
    {
        returnValue = F("Gebrannte Str.");
        break;
    }
    case 112750:
    {
        returnValue = F("Gebrannter Baum");
        break;
    }
    case 112751:
    {
        returnValue = F("Gebrannter Bergschlag-Weg");
        break;
    }
    case 112752:
    {
        returnValue = F("Gebrannter Kopfweg");
        break;
    }
    case 112753:
    {
        returnValue = F("Gebrannter Rainweg");
        break;
    }
    case 112754:
    {
        returnValue = F("Gebranntes Eichental");
        break;
    }
    case 112755:
    {
        returnValue = F("Gebrauchtwagen");
        break;
    }
    case 112756:
    {
        returnValue = F("Gebrazhofer Str.");
        break;
    }
    case 112757:
    {
        returnValue = F("Gebreite");
        break;
    }
    case 112758:
    {
        returnValue = F("Gebrüder Grimm Str.");
        break;
    }
    case 112759:
    {
        returnValue = F("Gebrüder-Ackermann-Str.");
        break;
    }
    case 112760:
    {
        returnValue = F("Gebrüder-Asam-Str.");
        break;
    }
    case 112761:
    {
        returnValue = F("Gebrüder-Bachert-Str.");
        break;
    }
    case 112762:
    {
        returnValue = F("Gebrüder-Baruch-Str.");
        break;
    }
    case 112763:
    {
        returnValue = F("Gebrüder-Batscheider-Str.");
        break;
    }
    case 112764:
    {
        returnValue = F("Gebrüder-Bethmann-Str.");
        break;
    }
    case 112765:
    {
        returnValue = F("Gebrüder-Boll-Str.");
        break;
    }
    case 112766:
    {
        returnValue = F("Gebrüder-Bongard-Str.");
        break;
    }
    case 112767:
    {
        returnValue = F("Gebrüder-Bölts-Str.");
        break;
    }
    case 112768:
    {
        returnValue = F("Gebrüder-Carlone-Str.");
        break;
    }
    case 112769:
    {
        returnValue = F("Gebrüder-Coblenz-Str.");
        break;
    }
    case 112770:
    {
        returnValue = F("Gebrüder-Dommermuth-Weg");
        break;
    }
    case 112771:
    {
        returnValue = F("Gebrüder-Dorner-Str.");
        break;
    }
    case 112772:
    {
        returnValue = F("Gebrüder-Dötschel-Str.");
        break;
    }
    case 112773:
    {
        returnValue = F("Gebrüder-Eicher-Ring");
        break;
    }
    case 112774:
    {
        returnValue = F("Gebrüder-Engelhardt-Str.");
        break;
    }
    case 112775:
    {
        returnValue = F("Gebrüder-Freitag-Str.");
        break;
    }
    case 112776:
    {
        returnValue = F("Gebrüder-Frisch-Str.");
        break;
    }
    case 112777:
    {
        returnValue = F("Gebrüder-Funcken-Str.");
        break;
    }
    case 112778:
    {
        returnValue = F("Gebrüder-Geisel-Str.");
        break;
    }
    case 112779:
    {
        returnValue = F("Gebrüder-Graun-Str.");
        break;
    }
    case 112780:
    {
        returnValue = F("Gebrüder-Grimm-Allee");
        break;
    }
    case 112781:
    {
        returnValue = F("Gebrüder-Grimm-Hof");
        break;
    }
    case 112782:
    {
        returnValue = F("Gebrüder-Grimm-Platz");
        break;
    }
    case 112783:
    {
        returnValue = F("Gebrüder-Grimm-Str.");
        break;
    }
    case 112784:
    {
        returnValue = F("Gebrüder-Grimm-Weg");
        break;
    }
    case 112785:
    {
        returnValue = F("Gebrüder-Gross-Str.");
        break;
    }
    case 112786:
    {
        returnValue = F("Gebrüder-Grütter-Str.");
        break;
    }
    case 112787:
    {
        returnValue = F("Gebrüder-Harsch-Weg");
        break;
    }
    case 112788:
    {
        returnValue = F("Gebrüder-Hartmann-Str.");
        break;
    }
    case 112789:
    {
        returnValue = F("Gebrüder-Helfmann-Str.");
        break;
    }
    case 112790:
    {
        returnValue = F("Gebrüder-Heller-Str.");
        break;
    }
    case 112791:
    {
        returnValue = F("Gebrüder-Heyn-Str.");
        break;
    }
    case 112792:
    {
        returnValue = F("Gebrüder-Himmelheber-Str.");
        break;
    }
    case 112793:
    {
        returnValue = F("Gebrüder-Hoffmann-Str.");
        break;
    }
    case 112794:
    {
        returnValue = F("Gebrüder-Hofmann-Ring");
        break;
    }
    case 112795:
    {
        returnValue = F("Gebrüder-Hommel-Anlage");
        break;
    }
    case 112796:
    {
        returnValue = F("Gebrüder-Häußler-Str.");
        break;
    }
    case 112797:
    {
        returnValue = F("Gebrüder-Johann-Str.");
        break;
    }
    case 112798:
    {
        returnValue = F("Gebrüder-John-Str.");
        break;
    }
    case 112799:
    {
        returnValue = F("Gebrüder-Kall-Str.");
        break;
    }
    case 112800:
    {
        returnValue = F("Gebrüder-Kastner-Str.");
        break;
    }
    case 112801:
    {
        returnValue = F("Gebrüder-Keller-Weg");
        break;
    }
    case 112802:
    {
        returnValue = F("Gebrüder-Kerkmann-Platz");
        break;
    }
    case 112803:
    {
        returnValue = F("Gebrüder-Kreßmann-Str.");
        break;
    }
    case 112804:
    {
        returnValue = F("Gebrüder-Künnemeyer-Str.");
        break;
    }
    case 112805:
    {
        returnValue = F("Gebrüder-Lang-Str.");
        break;
    }
    case 112806:
    {
        returnValue = F("Gebrüder-Lange-Weg");
        break;
    }
    case 112807:
    {
        returnValue = F("Gebrüder-Laumans-Weg");
        break;
    }
    case 112808:
    {
        returnValue = F("Gebrüder-Lay-Str.");
        break;
    }
    case 112809:
    {
        returnValue = F("Gebrüder-Lazarus-Str.");
        break;
    }
    case 112810:
    {
        returnValue = F("Gebrüder-Lein-Str.");
        break;
    }
    case 112811:
    {
        returnValue = F("Gebrüder-Leisner-Str.");
        break;
    }
    case 112812:
    {
        returnValue = F("Gebrüder-Lerff-Weg");
        break;
    }
    case 112813:
    {
        returnValue = F("Gebrüder-Lodes-Str.");
        break;
    }
    case 112814:
    {
        returnValue = F("Gebrüder-Loewe-Str.");
        break;
    }
    case 112815:
    {
        returnValue = F("Gebrüder-Meier-Weg");
        break;
    }
    case 112816:
    {
        returnValue = F("Gebrüder-Metz-Str.");
        break;
    }
    case 112817:
    {
        returnValue = F("Gebrüder-Meyer-Str.");
        break;
    }
    case 112818:
    {
        returnValue = F("Gebrüder-Mörchel-Weg");
        break;
    }
    case 112819:
    {
        returnValue = F("Gebrüder-Münch-Str.");
        break;
    }
    case 112820:
    {
        returnValue = F("Gebrüder-Netzsch-Str.");
        break;
    }
    case 112821:
    {
        returnValue = F("Gebrüder-Porstmann-Str.");
        break;
    }
    case 112822:
    {
        returnValue = F("Gebrüder-Rehse-Str.");
        break;
    }
    case 112823:
    {
        returnValue = F("Gebrüder-Reifenhäuser-Platz");
        break;
    }
    case 112824:
    {
        returnValue = F("Gebrüder-Reusch-Str.");
        break;
    }
    case 112825:
    {
        returnValue = F("Gebrüder-Reutter-Str.");
        break;
    }
    case 112826:
    {
        returnValue = F("Gebrüder-Ruppel-Str.");
        break;
    }
    case 112827:
    {
        returnValue = F("Gebrüder-Räuchle-Str.");
        break;
    }
    case 112828:
    {
        returnValue = F("Gebrüder-Rösle-Str.");
        break;
    }
    case 112829:
    {
        returnValue = F("Gebrüder-Rüther-Str.");
        break;
    }
    case 112830:
    {
        returnValue = F("Gebrüder-Schmid-Weg");
        break;
    }
    case 112831:
    {
        returnValue = F("Gebrüder-Schnack-Str.");
        break;
    }
    case 112832:
    {
        returnValue = F("Gebrüder-Schwab-Weg");
        break;
    }
    case 112833:
    {
        returnValue = F("Gebrüder-Schönthal-Str.");
        break;
    }
    case 112834:
    {
        returnValue = F("Gebrüder-Seibel-Ring");
        break;
    }
    case 112835:
    {
        returnValue = F("Gebrüder-Silbermann-Str.");
        break;
    }
    case 112836:
    {
        returnValue = F("Gebrüder-Stöber-Brücke");
        break;
    }
    case 112837:
    {
        returnValue = F("Gebrüder-Sus-Weg");
        break;
    }
    case 112838:
    {
        returnValue = F("Gebrüder-Teeuwen-Str.");
        break;
    }
    case 112839:
    {
        returnValue = F("Gebrüder-Thalheimer-Str.");
        break;
    }
    case 112840:
    {
        returnValue = F("Gebrüder-Theysohn-Str.");
        break;
    }
    case 112841:
    {
        returnValue = F("Gebrüder-Uekermann-Str.");
        break;
    }
    case 112842:
    {
        returnValue = F("Gebrüder-Ulrich-Str.");
        break;
    }
    case 112843:
    {
        returnValue = F("Gebrüder-Waasner-Weg");
        break;
    }
    case 112844:
    {
        returnValue = F("Gebrüder-Wahl-Str.");
        break;
    }
    case 112845:
    {
        returnValue = F("Gebrüder-Walker-Weg");
        break;
    }
    case 112846:
    {
        returnValue = F("Gebrüder-Warburg-Platz");
        break;
    }
    case 112847:
    {
        returnValue = F("Gebrüder-Watt-Str.");
        break;
    }
    case 112848:
    {
        returnValue = F("Gebrüder-Weber-Weg");
        break;
    }
    case 112849:
    {
        returnValue = F("Gebrüder-Wedde-Str.");
        break;
    }
    case 112850:
    {
        returnValue = F("Gebrüder-Welger-Str.");
        break;
    }
    case 112851:
    {
        returnValue = F("Gebrüder-Weltring-Str.");
        break;
    }
    case 112852:
    {
        returnValue = F("Gebrüder-Witte-Str.");
        break;
    }
    case 112853:
    {
        returnValue = F("Gebrüder-Woge-Str.");
        break;
    }
    case 112854:
    {
        returnValue = F("Gebrüder-Wright-Str.");
        break;
    }
    case 112855:
    {
        returnValue = F("Gebrüder-Zeuner-Str.");
        break;
    }
    case 112856:
    {
        returnValue = F("Gebrüder-van-Eyk-Str.");
        break;
    }
    case 112857:
    {
        returnValue = F("Gebrüder-von-Wedel-Str.");
        break;
    }
    case 112858:
    {
        returnValue = F("Gebrüderstr.");
        break;
    }
    case 112859:
    {
        returnValue = F("Gebsattelstr.");
        break;
    }
    case 112860:
    {
        returnValue = F("Gebsattelweg");
        break;
    }
    case 112861:
    {
        returnValue = F("Gebsattler Str.");
        break;
    }
    case 112862:
    {
        returnValue = F("Gebsensteinstr.");
        break;
    }
    case 112863:
    {
        returnValue = F("Gebstedt");
        break;
    }
    case 112864:
    {
        returnValue = F("Gebstedter Str.");
        break;
    }
    case 112865:
    {
        returnValue = F("Gebweilerstr.");
        break;
    }
    case 112866:
    {
        returnValue = F("Gebwinstr.");
        break;
    }
    case 112867:
    {
        returnValue = F("Gebäudeplatz");
        break;
    }
    case 112868:
    {
        returnValue = F("Gebösestr.");
        break;
    }
    case 112869:
    {
        returnValue = F("Gebückpfad");
        break;
    }
    case 112870:
    {
        returnValue = F("Gebückstr.");
        break;
    }
    case 112871:
    {
        returnValue = F("Gebückweg");
        break;
    }
    case 112872:
    {
        returnValue = F("Gebüger Str.");
        break;
    }
    case 112873:
    {
        returnValue = F("Gechbach");
        break;
    }
    case 112874:
    {
        returnValue = F("Gechinger Str.");
        break;
    }
    case 112875:
    {
        returnValue = F("Gechtstr.");
        break;
    }
    case 112876:
    {
        returnValue = F("Geckelerweg");
        break;
    }
    case 112877:
    {
        returnValue = F("Geckenheimer Steig");
        break;
    }
    case 112878:
    {
        returnValue = F("Geckenheimer Str.");
        break;
    }
    case 112879:
    {
        returnValue = F("Geckesberg");
        break;
    }
    case 112880:
    {
        returnValue = F("Geckoweg");
        break;
    }
    case 112881:
    {
        returnValue = F("Gecks Heide");
        break;
    }
    case 112882:
    {
        returnValue = F("Gecksbachstr.");
        break;
    }
    case 112883:
    {
        returnValue = F("Gecksberg");
        break;
    }
    case 112884:
    {
        returnValue = F("Gecksbergstr.");
        break;
    }
    case 112885:
    {
        returnValue = F("Gecksburg");
        break;
    }
    case 112886:
    {
        returnValue = F("Gecksheide");
        break;
    }
    case 112887:
    {
        returnValue = F("Geckstr.");
        break;
    }
    case 112888:
    {
        returnValue = F("Geckswinkel");
        break;
    }
    case 112889:
    {
        returnValue = F("Geckweg");
        break;
    }
    case 112890:
    {
        returnValue = F("Geddelsbacher Str.");
        break;
    }
    case 112891:
    {
        returnValue = F("Geddenberger Str.");
        break;
    }
    case 112892:
    {
        returnValue = F("Gedeckter Weg");
        break;
    }
    case 112893:
    {
        returnValue = F("Gedelerstr.");
        break;
    }
    case 112894:
    {
        returnValue = F("Gedelitz");
        break;
    }
    case 112895:
    {
        returnValue = F("Gedelitzer Str.");
        break;
    }
    case 112896:
    {
        returnValue = F("Gedelitzer Weg");
        break;
    }
    case 112897:
    {
        returnValue = F("Gedembergstr.");
        break;
    }
    case 112898:
    {
        returnValue = F("Gedenk-Park (ehem. Frauenheim-Friedhof)");
        break;
    }
    case 112899:
    {
        returnValue = F("Gedenkpark");
        break;
    }
    case 112900:
    {
        returnValue = F("Gedenkplatz für die Opfer des 1. Weltkriegs");
        break;
    }
    case 112901:
    {
        returnValue = F("Gedenkstätte \"Deutsche Teilung");
        break;
    }
    case 112902:
    {
        returnValue = F("Gedenkstätte Groß Lieskow");
        break;
    }
    case 112903:
    {
        returnValue = F("Gedenkstätte Grubenunglück");
        break;
    }
    case 112904:
    {
        returnValue = F("Gedenkstätte I. WK");
        break;
    }
    case 112905:
    {
        returnValue = F("Gedenkstätte Kesselsdorf");
        break;
    }
    case 112906:
    {
        returnValue = F("Gedenkstätte Lager Rollwald");
        break;
    }
    case 112907:
    {
        returnValue = F("Gedenkstätte Stolzenbach");
        break;
    }
    case 112908:
    {
        returnValue = F("Gedenkstätte Synagoge");
        break;
    }
    case 112909:
    {
        returnValue = F("Gedenkstätte Triebenberg");
        break;
    }
    case 112910:
    {
        returnValue = F("Gedenkstätte Waldbrand 1975");
        break;
    }
    case 112911:
    {
        returnValue = F("Gedenkstätte Zugunglück Eschede");
        break;
    }
    case 112912:
    {
        returnValue = F("Gedenkstätte für die Gefallenen der Windhunddivision");
        break;
    }
    case 112913:
    {
        returnValue = F("Gedenkstätten Park");
        break;
    }
    case 112914:
    {
        returnValue = F("Gedenkstättentour");
        break;
    }
    case 112915:
    {
        returnValue = F("Gedeonstr.");
        break;
    }
    case 112916:
    {
        returnValue = F("Gederbachweg");
        break;
    }
    case 112917:
    {
        returnValue = F("Gedererstr.");
        break;
    }
    case 112918:
    {
        returnValue = F("Gedererweg");
        break;
    }
    case 112919:
    {
        returnValue = F("Gederfeldweg");
        break;
    }
    case 112920:
    {
        returnValue = F("Gederner Str.");
        break;
    }
    case 112921:
    {
        returnValue = F("Gederner Weg");
        break;
    }
    case 112922:
    {
        returnValue = F("Gedichtpfad");
        break;
    }
    case 112923:
    {
        returnValue = F("Gedikestr.");
        break;
    }
    case 112924:
    {
        returnValue = F("Gedingeweg");
        break;
    }
    case 112925:
    {
        returnValue = F("Gedingstr.");
        break;
    }
    case 112926:
    {
        returnValue = F("Gedrathof");
        break;
    }
    case 112927:
    {
        returnValue = F("Gedrängeweg");
        break;
    }
    case 112928:
    {
        returnValue = F("Gedser Str.");
        break;
    }
    case 112929:
    {
        returnValue = F("Gedserring");
        break;
    }
    case 112930:
    {
        returnValue = F("Gedulderweg");
        break;
    }
    case 112931:
    {
        returnValue = F("Gedächtnisallee");
        break;
    }
    case 112932:
    {
        returnValue = F("Gedächtnisplatz");
        break;
    }
    case 112933:
    {
        returnValue = F("Gedächtnisring");
        break;
    }
    case 112934:
    {
        returnValue = F("Gedächtnisstr.");
        break;
    }
    case 112935:
    {
        returnValue = F("Gedühren");
        break;
    }
    case 112936:
    {
        returnValue = F("Geefacker");
        break;
    }
    case 112937:
    {
        returnValue = F("Geelbeksdamm");
        break;
    }
    case 112938:
    {
        returnValue = F("Geele Goarn");
        break;
    }
    case 112939:
    {
        returnValue = F("Geeler Weg");
        break;
    }
    case 112940:
    {
        returnValue = F("Geelstr.");
        break;
    }
    case 112941:
    {
        returnValue = F("Geen Valmestr., maar Valme");
        break;
    }
    case 112942:
    {
        returnValue = F("Geenenstr.");
        break;
    }
    case 112943:
    {
        returnValue = F("Geer");
        break;
    }
    case 112944:
    {
        returnValue = F("Geeracker");
        break;
    }
    case 112945:
    {
        returnValue = F("Geerdshabe");
        break;
    }
    case 112946:
    {
        returnValue = F("Geerdswehrstr.");
        break;
    }
    case 112947:
    {
        returnValue = F("Geeren");
        break;
    }
    case 112948:
    {
        returnValue = F("Geeren Esch");
        break;
    }
    case 112949:
    {
        returnValue = F("Geerenstr.");
        break;
    }
    case 112950:
    {
        returnValue = F("Geerinks-Kamp");
        break;
    }
    case 112951:
    {
        returnValue = F("Geerkensteg");
        break;
    }
    case 112952:
    {
        returnValue = F("Geerkenweg");
        break;
    }
    case 112953:
    {
        returnValue = F("Geers Weide");
        break;
    }
    case 112954:
    {
        returnValue = F("Geersbüschke");
        break;
    }
    case 112955:
    {
        returnValue = F("Geersstr.");
        break;
    }
    case 112956:
    {
        returnValue = F("Geerstr.");
        break;
    }
    case 112957:
    {
        returnValue = F("Geersweg");
        break;
    }
    case 112958:
    {
        returnValue = F("Geert-Bakker-Str.");
        break;
    }
    case 112959:
    {
        returnValue = F("Geertsfeld");
        break;
    }
    case 112960:
    {
        returnValue = F("Geertskamp");
        break;
    }
    case 112961:
    {
        returnValue = F("Geeschering");
        break;
    }
    case 112962:
    {
        returnValue = F("Geescheweg");
        break;
    }
    case 112963:
    {
        returnValue = F("Geesdorfer Str.");
        break;
    }
    case 112964:
    {
        returnValue = F("Geesenweg");
        break;
    }
    case 112965:
    {
        returnValue = F("Geeser Str.");
        break;
    }
    case 112966:
    {
        returnValue = F("Geeser Weg");
        break;
    }
    case 112967:
    {
        returnValue = F("Geeskenweg");
        break;
    }
    case 112968:
    {
        returnValue = F("Geesmanns Kotten");
        break;
    }
    case 112969:
    {
        returnValue = F("Geest");
        break;
    }
    case 112970:
    {
        returnValue = F("Geest Anger");
        break;
    }
    case 112971:
    {
        returnValue = F("Geest Höfe");
        break;
    }
    case 112972:
    {
        returnValue = F("Geestbarg");
        break;
    }
    case 112973:
    {
        returnValue = F("Geestberg");
        break;
    }
    case 112974:
    {
        returnValue = F("Geestblick");
        break;
    }
    case 112975:
    {
        returnValue = F("Geestbogen");
        break;
    }
    case 112976:
    {
        returnValue = F("Geestdorfer Ring");
        break;
    }
    case 112977:
    {
        returnValue = F("Geestdorfer Str.");
        break;
    }
    case 112978:
    {
        returnValue = F("Geeste");
        break;
    }
    case 112979:
    {
        returnValue = F("Geesteallee");
        break;
    }
    case 112980:
    {
        returnValue = F("Geestedeich");
        break;
    }
    case 112981:
    {
        returnValue = F("Geestefelder Weg");
        break;
    }
    case 112982:
    {
        returnValue = F("Geestehöhe");
        break;
    }
    case 112983:
    {
        returnValue = F("Geestemünder Str.");
        break;
    }
    case 112984:
    {
        returnValue = F("Geestemünder Weg");
        break;
    }
    case 112985:
    {
        returnValue = F("Geestensether Str.");
        break;
    }
    case 112986:
    {
        returnValue = F("Geester Brücke");
        break;
    }
    case 112987:
    {
        returnValue = F("Geester Esch");
        break;
    }
    case 112988:
    {
        returnValue = F("Geester Str.");
        break;
    }
    case 112989:
    {
        returnValue = F("Geestestr.");
        break;
    }
    case 112990:
    {
        returnValue = F("Geestewanderweg");
        break;
    }
    case 112991:
    {
        returnValue = F("Geesteweg");
        break;
    }
    case 112992:
    {
        returnValue = F("Geestfeld");
        break;
    }
    case 112993:
    {
        returnValue = F("Geestfurth");
        break;
    }
    case 112994:
    {
        returnValue = F("Geestgraben");
        break;
    }
    case 112995:
    {
        returnValue = F("Geesthachter Str.");
        break;
    }
    case 112996:
    {
        returnValue = F("Geestheller Damm");
        break;
    }
    case 112997:
    {
        returnValue = F("Geesthofer Weg");
        break;
    }
    case 112998:
    {
        returnValue = F("Geesthöhe");
        break;
    }
    case 112999:
    {
        returnValue = F("Geesthölzchen");
        break;
    }
    case 113000:
    {
        returnValue = F("Geesthörn");
        break;
    }
    case 113001:
    {
        returnValue = F("Geestkamp");
        break;
    }
    case 113002:
    {
        returnValue = F("Geestloh");
        break;
    }
    case 113003:
    {
        returnValue = F("Geestmoor");
        break;
    }
    case 113004:
    {
        returnValue = F("Geestmoordamm");
        break;
    }
    case 113005:
    {
        returnValue = F("Geestrand");
        break;
    }
    case 113006:
    {
        returnValue = F("Geestrandstr.");
        break;
    }
    case 113007:
    {
        returnValue = F("Geestrandweg");
        break;
    }
    case 113008:
    {
        returnValue = F("Geestring");
        break;
    }
    case 113009:
    {
        returnValue = F("Geeststr.");
        break;
    }
    case 113010:
    {
        returnValue = F("Geestweg");
        break;
    }
    case 113011:
    {
        returnValue = F("Geestwiesenweg");
        break;
    }
    case 113012:
    {
        returnValue = F("Geesweg");
        break;
    }
    case 113013:
    {
        returnValue = F("Gefallenen Denkmal");
        break;
    }
    case 113014:
    {
        returnValue = F("Gefallenenmahnmal Siedlergemeinschaft");
        break;
    }
    case 113015:
    {
        returnValue = F("Gefangenenberg");
        break;
    }
    case 113016:
    {
        returnValue = F("Gefeller Str.");
        break;
    }
    case 113017:
    {
        returnValue = F("Gefeller Weg");
        break;
    }
    case 113018:
    {
        returnValue = F("Geffelbachstr.");
        break;
    }
    case 113019:
    {
        returnValue = F("Geffelmoor");
        break;
    }
    case 113020:
    {
        returnValue = F("Gefilde");
        break;
    }
    case 113021:
    {
        returnValue = F("Gefilderstr.");
        break;
    }
    case 113022:
    {
        returnValue = F("Gefildeweg");
        break;
    }
    case 113023:
    {
        returnValue = F("Gefionstr.");
        break;
    }
    case 113024:
    {
        returnValue = F("Gefirtkreuzweg");
        break;
    }
    case 113025:
    {
        returnValue = F("Gefkensweg");
        break;
    }
    case 113026:
    {
        returnValue = F("Gefluderstr.");
        break;
    }
    case 113027:
    {
        returnValue = F("Geflügelfarm");
        break;
    }
    case 113028:
    {
        returnValue = F("Geflügelzuchtverein");
        break;
    }
    case 113029:
    {
        returnValue = F("Gefrastr.");
        break;
    }
    case 113030:
    {
        returnValue = F("Gefreeser Str.");
        break;
    }
    case 113031:
    {
        returnValue = F("Gefreeser-Sträßchen");
        break;
    }
    case 113032:
    {
        returnValue = F("Gefährlicher Weg");
        break;
    }
    case 113033:
    {
        returnValue = F("Gefäll");
        break;
    }
    case 113034:
    {
        returnValue = F("Gefällerweg");
        break;
    }
    case 113035:
    {
        returnValue = F("Gefällhaldenweg");
        break;
    }
    case 113036:
    {
        returnValue = F("Gefällholzstr.");
        break;
    }
    case 113037:
    {
        returnValue = F("Gefällsbruchweg");
        break;
    }
    case 113038:
    {
        returnValue = F("Gefällstr.");
        break;
    }
    case 113039:
    {
        returnValue = F("Gefällweg");
        break;
    }
    case 113040:
    {
        returnValue = F("Gefängnisgässchen");
        break;
    }
    case 113041:
    {
        returnValue = F("Gefängnispark");
        break;
    }
    case 113042:
    {
        returnValue = F("Gefängnisstaffel");
        break;
    }
    case 113043:
    {
        returnValue = F("Gefängnisweg");
        break;
    }
    case 113044:
    {
        returnValue = F("Gefühlsweg");
        break;
    }
    case 113045:
    {
        returnValue = F("Gegelstr.");
        break;
    }
    case 113046:
    {
        returnValue = F("Gegen Berled");
        break;
    }
    case 113047:
    {
        returnValue = F("Gegen Eich");
        break;
    }
    case 113048:
    {
        returnValue = F("Gegen Schornbach");
        break;
    }
    case 113049:
    {
        returnValue = F("Gegen den Diek");
        break;
    }
    case 113050:
    {
        returnValue = F("Gegen den Galgen");
        break;
    }
    case 113051:
    {
        returnValue = F("Gegen den Woog");
        break;
    }
    case 113052:
    {
        returnValue = F("Gegen die lange Allmend");
        break;
    }
    case 113053:
    {
        returnValue = F("Gegenbachstr.");
        break;
    }
    case 113054:
    {
        returnValue = F("Gegenbauersweg");
        break;
    }
    case 113055:
    {
        returnValue = F("Gegenbaurstr.");
        break;
    }
    case 113056:
    {
        returnValue = F("Gegenbühlweg");
        break;
    }
    case 113057:
    {
        returnValue = F("Gegendrumweg");
        break;
    }
    case 113058:
    {
        returnValue = F("Gegenhardtweg");
        break;
    }
    case 113059:
    {
        returnValue = F("Gegenhoopt");
        break;
    }
    case 113060:
    {
        returnValue = F("Gegenminenstollen");
        break;
    }
    case 113061:
    {
        returnValue = F("Gegenpointstr.");
        break;
    }
    case 113062:
    {
        returnValue = F("Gegensee");
        break;
    }
    case 113063:
    {
        returnValue = F("Gegentalstr.");
        break;
    }
    case 113064:
    {
        returnValue = F("Geggenauweg");
        break;
    }
    case 113065:
    {
        returnValue = F("Gehabertsweg");
        break;
    }
    case 113066:
    {
        returnValue = F("Gehaborner Str.");
        break;
    }
    case 113067:
    {
        returnValue = F("Gehaborner Weg");
        break;
    }
    case 113068:
    {
        returnValue = F("Gehagstr.");
        break;
    }
    case 113069:
    {
        returnValue = F("Gehainstr.");
        break;
    }
    case 113070:
    {
        returnValue = F("Gehastr.");
        break;
    }
    case 113071:
    {
        returnValue = F("Gehau");
        break;
    }
    case 113072:
    {
        returnValue = F("Gehauser Schulstr.");
        break;
    }
    case 113073:
    {
        returnValue = F("Gehauser Str.");
        break;
    }
    case 113074:
    {
        returnValue = F("Gehausweg");
        break;
    }
    case 113075:
    {
        returnValue = F("Gehauweg");
        break;
    }
    case 113076:
    {
        returnValue = F("Geheege");
        break;
    }
    case 113077:
    {
        returnValue = F("Geheeger Weg");
        break;
    }
    case 113078:
    {
        returnValue = F("Gehegde");
        break;
    }
    case 113079:
    {
        returnValue = F("Gehegder Weg");
        break;
    }
    case 113080:
    {
        returnValue = F("Gehege");
        break;
    }
    case 113081:
    {
        returnValue = F("Gehegemühle");
        break;
    }
    case 113082:
    {
        returnValue = F("Gehegenwiesenweg");
        break;
    }
    case 113083:
    {
        returnValue = F("Geheger Weg");
        break;
    }
    case 113084:
    {
        returnValue = F("Gehegestr.");
        break;
    }
    case 113085:
    {
        returnValue = F("Gehegeweg");
        break;
    }
    case 113086:
    {
        returnValue = F("Gehegewiese");
        break;
    }
    case 113087:
    {
        returnValue = F("Gehegsweg");
        break;
    }
    case 113088:
    {
        returnValue = F("Geheime Gasse");
        break;
    }
    case 113089:
    {
        returnValue = F("Geheime Gärten Rolandswerth");
        break;
    }
    case 113090:
    {
        returnValue = F("Geheime Mühle");
        break;
    }
    case 113091:
    {
        returnValue = F("Geheimnisvoller Weg");
        break;
    }
    case 113092:
    {
        returnValue = F("Geheimrat-Baumgartner-Str.");
        break;
    }
    case 113093:
    {
        returnValue = F("Geheimrat-Brandes-Str.");
        break;
    }
    case 113094:
    {
        returnValue = F("Geheimrat-Brügmann-Str.");
        break;
    }
    case 113095:
    {
        returnValue = F("Geheimrat-Dr.-Schaedel-Str.");
        break;
    }
    case 113096:
    {
        returnValue = F("Geheimrat-Ebert-Str.");
        break;
    }
    case 113097:
    {
        returnValue = F("Geheimrat-Frank-Str.");
        break;
    }
    case 113098:
    {
        returnValue = F("Geheimrat-Fries-Str.");
        break;
    }
    case 113099:
    {
        returnValue = F("Geheimrat-Gerster-Str.");
        break;
    }
    case 113100:
    {
        returnValue = F("Geheimrat-Goethe-Str.");
        break;
    }
    case 113101:
    {
        returnValue = F("Geheimrat-Günther-Anlage");
        break;
    }
    case 113102:
    {
        returnValue = F("Geheimrat-Haas-Platz");
        break;
    }
    case 113103:
    {
        returnValue = F("Geheimrat-Heindl-Weg");
        break;
    }
    case 113104:
    {
        returnValue = F("Geheimrat-Helferich-Weg");
        break;
    }
    case 113105:
    {
        returnValue = F("Geheimrat-Heß-Ring");
        break;
    }
    case 113106:
    {
        returnValue = F("Geheimrat-Irl-Str.");
        break;
    }
    case 113107:
    {
        returnValue = F("Geheimrat-Leuschner-Str.");
        break;
    }
    case 113108:
    {
        returnValue = F("Geheimrat-Püls-Str.");
        break;
    }
    case 113109:
    {
        returnValue = F("Geheimrat-Schmitz-Str.");
        break;
    }
    case 113110:
    {
        returnValue = F("Geheimrat-Schott-Str.");
        break;
    }
    case 113111:
    {
        returnValue = F("Geheimrat-Schultz-Weg");
        break;
    }
    case 113112:
    {
        returnValue = F("Geheimrat-Seebohm-Str.");
        break;
    }
    case 113113:
    {
        returnValue = F("Geheimrat-Seitz-Weg");
        break;
    }
    case 113114:
    {
        returnValue = F("Geheimrat-Stoß-Str.");
        break;
    }
    case 113115:
    {
        returnValue = F("Geheimrat-Weber-Str.");
        break;
    }
    case 113116:
    {
        returnValue = F("Gehenbühlstr.");
        break;
    }
    case 113117:
    {
        returnValue = F("Geheringer Str.");
        break;
    }
    case 113118:
    {
        returnValue = F("Gehertsham");
        break;
    }
    case 113119:
    {
        returnValue = F("Gehespitzer Schneise");
        break;
    }
    case 113120:
    {
        returnValue = F("Gehestr.");
        break;
    }
    case 113121:
    {
        returnValue = F("Geheusteige");
        break;
    }
    case 113122:
    {
        returnValue = F("Gehfeldstr.");
        break;
    }
    case 113123:
    {
        returnValue = F("Gehilfersberger Weg");
        break;
    }
    case 113124:
    {
        returnValue = F("Gehilfersbergstr.");
        break;
    }
    case 113125:
    {
        returnValue = F("Gehlbacherhof");
        break;
    }
    case 113126:
    {
        returnValue = F("Gehlbachstr.");
        break;
    }
    case 113127:
    {
        returnValue = F("Gehlberg");
        break;
    }
    case 113128:
    {
        returnValue = F("Gehlbergen");
        break;
    }
    case 113129:
    {
        returnValue = F("Gehlberger Bergstr.");
        break;
    }
    case 113130:
    {
        returnValue = F("Gehlberger Hauptstr.");
        break;
    }
    case 113131:
    {
        returnValue = F("Gehlberger Str.");
        break;
    }
    case 113132:
    {
        returnValue = F("Gehlberger Waldstr.");
        break;
    }
    case 113133:
    {
        returnValue = F("Gehlbruch");
        break;
    }
    case 113134:
    {
        returnValue = F("Gehlenbecker Str.");
        break;
    }
    case 113135:
    {
        returnValue = F("Gehlenberger Hauptstr.");
        break;
    }
    case 113136:
    {
        returnValue = F("Gehlenberger Kirchstr.");
        break;
    }
    case 113137:
    {
        returnValue = F("Gehlenberger Str.");
        break;
    }
    case 113138:
    {
        returnValue = F("Gehlenberger Weg");
        break;
    }
    case 113139:
    {
        returnValue = F("Gehlenbergstr.");
        break;
    }
    case 113140:
    {
        returnValue = F("Gehlenbrink");
        break;
    }
    case 113141:
    {
        returnValue = F("Gehlenbrunnenstr.");
        break;
    }
    case 113142:
    {
        returnValue = F("Gehlenfeldsweg");
        break;
    }
    case 113143:
    {
        returnValue = F("Gehlengasse");
        break;
    }
    case 113144:
    {
        returnValue = F("Gehlenkampstr.");
        break;
    }
    case 113145:
    {
        returnValue = F("Gehlensiel");
        break;
    }
    case 113146:
    {
        returnValue = F("Gehlenstr.");
        break;
    }
    case 113147:
    {
        returnValue = F("Gehlenweg");
        break;
    }
    case 113148:
    {
        returnValue = F("Gehlerter Weg");
        break;
    }
    case 113149:
    {
        returnValue = F("Gehlhalde");
        break;
    }
    case 113150:
    {
        returnValue = F("Gehlheidstr.");
        break;
    }
    case 113151:
    {
        returnValue = F("Gehlhäuser");
        break;
    }
    case 113152:
    {
        returnValue = F("Gehlingbülten");
        break;
    }
    case 113153:
    {
        returnValue = F("Gehlingsstr.");
        break;
    }
    case 113154:
    {
        returnValue = F("Gehlingsweg");
        break;
    }
    case 113155:
    {
        returnValue = F("Gehlsdorfer Weg");
        break;
    }
    case 113156:
    {
        returnValue = F("Gehlsen-Suhn-Siedlung");
        break;
    }
    case 113157:
    {
        returnValue = F("Gehlsheimer Str.");
        break;
    }
    case 113158:
    {
        returnValue = F("Gehm");
        break;
    }
    case 113159:
    {
        returnValue = F("Gehmen-Axiener Str.");
        break;
    }
    case 113160:
    {
        returnValue = F("Gehmen-Elbstr.");
        break;
    }
    case 113161:
    {
        returnValue = F("Gehmen-Im Felde");
        break;
    }
    case 113162:
    {
        returnValue = F("Gehmen-Lindenstr.");
        break;
    }
    case 113163:
    {
        returnValue = F("Gehmener Str.");
        break;
    }
    case 113164:
    {
        returnValue = F("Gehmerweg");
        break;
    }
    case 113165:
    {
        returnValue = F("Gehmkendorf");
        break;
    }
    case 113166:
    {
        returnValue = F("Gehmkendorf Ausbau");
        break;
    }
    case 113167:
    {
        returnValue = F("Gehmkow");
        break;
    }
    case 113168:
    {
        returnValue = F("Gehmkower Weg");
        break;
    }
    case 113169:
    {
        returnValue = F("Gehmsweg");
        break;
    }
    case 113170:
    {
        returnValue = F("Gehmweg");
        break;
    }
    case 113171:
    {
        returnValue = F("Gehnbachstr.");
        break;
    }
    case 113172:
    {
        returnValue = F("Gehnbergsiedlung");
        break;
    }
    case 113173:
    {
        returnValue = F("Gehnbergstr.");
        break;
    }
    case 113174:
    {
        returnValue = F("Gehnbergstrift");
        break;
    }
    case 113175:
    {
        returnValue = F("Gehnenkat");
        break;
    }
    case 113176:
    {
        returnValue = F("Gehner Str.");
        break;
    }
    case 113177:
    {
        returnValue = F("Gehnhookstr.");
        break;
    }
    case 113178:
    {
        returnValue = F("Gehnstr.");
        break;
    }
    case 113179:
    {
        returnValue = F("Gehocksäcker");
        break;
    }
    case 113180:
    {
        returnValue = F("Gehofscher Grund");
        break;
    }
    case 113181:
    {
        returnValue = F("Gehrberg");
        break;
    }
    case 113182:
    {
        returnValue = F("Gehrbergstr.");
        break;
    }
    case 113183:
    {
        returnValue = F("Gehrbergsweg");
        break;
    }
    case 113184:
    {
        returnValue = F("Gehrbreite");
        break;
    }
    case 113185:
    {
        returnValue = F("Gehrbreiten");
        break;
    }
    case 113186:
    {
        returnValue = F("Gehrbusch");
        break;
    }
    case 113187:
    {
        returnValue = F("Gehrden");
        break;
    }
    case 113188:
    {
        returnValue = F("Gehrdenbergweg");
        break;
    }
    case 113189:
    {
        returnValue = F("Gehrdener Damm");
        break;
    }
    case 113190:
    {
        returnValue = F("Gehrdener Deich");
        break;
    }
    case 113191:
    {
        returnValue = F("Gehrdener Kirchweg");
        break;
    }
    case 113192:
    {
        returnValue = F("Gehrdener Str.");
        break;
    }
    case 113193:
    {
        returnValue = F("Gehrdener Weg");
        break;
    }
    case 113194:
    {
        returnValue = F("Gehrder Str.");
        break;
    }
    case 113195:
    {
        returnValue = F("Gehren");
        break;
    }
    case 113196:
    {
        returnValue = F("Gehren An der Waldbühne");
        break;
    }
    case 113197:
    {
        returnValue = F("Gehren Bergstr.");
        break;
    }
    case 113198:
    {
        returnValue = F("Gehren Gerostr.");
        break;
    }
    case 113199:
    {
        returnValue = F("Gehren Grünswalder Str.");
        break;
    }
    case 113200:
    {
        returnValue = F("Gehren Waldhaus");
        break;
    }
    case 113201:
    {
        returnValue = F("Gehrenbachstr.");
        break;
    }
    case 113202:
    {
        returnValue = F("Gehrenbachweg");
        break;
    }
    case 113203:
    {
        returnValue = F("Gehrenbecker Weg");
        break;
    }
    case 113204:
    {
        returnValue = F("Gehrenberg");
        break;
    }
    case 113205:
    {
        returnValue = F("Gehrenberger Str.");
        break;
    }
    case 113206:
    {
        returnValue = F("Gehrenbergstr.");
        break;
    }
    case 113207:
    {
        returnValue = F("Gehrenbergweg");
        break;
    }
    case 113208:
    {
        returnValue = F("Gehrenbrücke");
        break;
    }
    case 113209:
    {
        returnValue = F("Gehrendorfer Str.");
        break;
    }
    case 113210:
    {
        returnValue = F("Gehrendorfer Weg");
        break;
    }
    case 113211:
    {
        returnValue = F("Gehrendshalde");
        break;
    }
    case 113212:
    {
        returnValue = F("Gehrener Chaussee");
        break;
    }
    case 113213:
    {
        returnValue = F("Gehrener Ring");
        break;
    }
    case 113214:
    {
        returnValue = F("Gehrener Sietwende");
        break;
    }
    case 113215:
    {
        returnValue = F("Gehrener Str.");
        break;
    }
    case 113216:
    {
        returnValue = F("Gehrener Wiesenweg");
        break;
    }
    case 113217:
    {
        returnValue = F("Gehrengrabenstr.");
        break;
    }
    case 113218:
    {
        returnValue = F("Gehrengrund");
        break;
    }
    case 113219:
    {
        returnValue = F("Gehrengässle");
        break;
    }
    case 113220:
    {
        returnValue = F("Gehrenhof");
        break;
    }
    case 113221:
    {
        returnValue = F("Gehrenkamp");
        break;
    }
    case 113222:
    {
        returnValue = F("Gehrenkampstr.");
        break;
    }
    case 113223:
    {
        returnValue = F("Gehrenkopfweg");
        break;
    }
    case 113224:
    {
        returnValue = F("Gehrenplan");
        break;
    }
    case 113225:
    {
        returnValue = F("Gehrenring");
        break;
    }
    case 113226:
    {
        returnValue = F("Gehrenrode");
        break;
    }
    case 113227:
    {
        returnValue = F("Gehrenspitzstr.");
        break;
    }
    case 113228:
    {
        returnValue = F("Gehrenstr.");
        break;
    }
    case 113229:
    {
        returnValue = F("Gehrensträssle");
        break;
    }
    case 113230:
    {
        returnValue = F("Gehrentalstr.");
        break;
    }
    case 113231:
    {
        returnValue = F("Gehrenwald");
        break;
    }
    case 113232:
    {
        returnValue = F("Gehrenwaldstr.");
        break;
    }
    case 113233:
    {
        returnValue = F("Gehrenweg");
        break;
    }
    case 113234:
    {
        returnValue = F("Gehrenäcker");
        break;
    }
    case 113235:
    {
        returnValue = F("Gehrerstr.");
        break;
    }
    case 113236:
    {
        returnValue = F("Gehrestalstr.");
        break;
    }
    case 113237:
    {
        returnValue = F("Gehretäcker");
        break;
    }
    case 113238:
    {
        returnValue = F("Gehrhof");
        break;
    }
    case 113239:
    {
        returnValue = F("Gehrhufenweg");
        break;
    }
    case 113240:
    {
        returnValue = F("Gehrichstr.");
        break;
    }
    case 113241:
    {
        returnValue = F("Gehrigsgasse");
        break;
    }
    case 113242:
    {
        returnValue = F("Gehring");
        break;
    }
    case 113243:
    {
        returnValue = F("Gehring 13 , 20, 21");
        break;
    }
    case 113244:
    {
        returnValue = F("Gehringer Schlade");
        break;
    }
    case 113245:
    {
        returnValue = F("Gehringsberg");
        break;
    }
    case 113246:
    {
        returnValue = F("Gehringsbergweg");
        break;
    }
    case 113247:
    {
        returnValue = F("Gehringshof");
        break;
    }
    case 113248:
    {
        returnValue = F("Gehringshäuser Str.");
        break;
    }
    case 113249:
    {
        returnValue = F("Gehringstr.");
        break;
    }
    case 113250:
    {
        returnValue = F("Gehrkamp");
        break;
    }
    case 113251:
    {
        returnValue = F("Gehrken Hof");
        break;
    }
    case 113252:
    {
        returnValue = F("Gehrken Patt");
        break;
    }
    case 113253:
    {
        returnValue = F("Gehrken Törn");
        break;
    }
    case 113254:
    {
        returnValue = F("Gehrken Wiese");
        break;
    }
    case 113255:
    {
        returnValue = F("Gehrkengasse");
        break;
    }
    case 113256:
    {
        returnValue = F("Gehrkenweg");
        break;
    }
    case 113257:
    {
        returnValue = F("Gehrkuhlenweg");
        break;
    }
    case 113258:
    {
        returnValue = F("Gehrland");
        break;
    }
    case 113259:
    {
        returnValue = F("Gehrlandsweg");
        break;
    }
    case 113260:
    {
        returnValue = F("Gehrn");
        break;
    }
    case 113261:
    {
        returnValue = F("Gehrnstr.");
        break;
    }
    case 113262:
    {
        returnValue = F("Gehrnweg");
        break;
    }
    case 113263:
    {
        returnValue = F("Gehrnäcker");
        break;
    }
    case 113264:
    {
        returnValue = F("Gehrsitz Str.");
        break;
    }
    case 113265:
    {
        returnValue = F("Gehrsmannweg");
        break;
    }
    case 113266:
    {
        returnValue = F("Gehrsstr.");
        break;
    }
    case 113267:
    {
        returnValue = F("Gehrstr.");
        break;
    }
    case 113268:
    {
        returnValue = F("Gehrstücken");
        break;
    }
    case 113269:
    {
        returnValue = F("Gehrtsstr.");
        break;
    }
    case 113270:
    {
        returnValue = F("Gehrumer Str.");
        break;
    }
    case 113271:
    {
        returnValue = F("Gehrweg");
        break;
    }
    case 113272:
    {
        returnValue = F("Gehsbergweg");
        break;
    }
    case 113273:
    {
        returnValue = F("Gehsenweg");
        break;
    }
    case 113274:
    {
        returnValue = F("Gehspitz");
        break;
    }
    case 113275:
    {
        returnValue = F("Gehsteeg");
        break;
    }
    case 113276:
    {
        returnValue = F("Gehstorf");
        break;
    }
    case 113277:
    {
        returnValue = F("Gehstorfer Altwiesen");
        break;
    }
    case 113278:
    {
        returnValue = F("Gehstorfer Berg");
        break;
    }
    case 113279:
    {
        returnValue = F("Gehstorfer Hochweg");
        break;
    }
    case 113280:
    {
        returnValue = F("Gehstr.");
        break;
    }
    case 113281:
    {
        returnValue = F("Gehweg");
        break;
    }
    case 113282:
    {
        returnValue = F("Gehweg an der Bahn");
        break;
    }
    case 113283:
    {
        returnValue = F("Gehweg zur Erlenstr.");
        break;
    }
    case 113284:
    {
        returnValue = F("Gehwege Maria-von-Linden-Gymnasium");
        break;
    }
    case 113285:
    {
        returnValue = F("Gehweilerstr.");
        break;
    }
    case 113286:
    {
        returnValue = F("Gehweilerweg");
        break;
    }
    case 113287:
    {
        returnValue = F("Gehäge");
        break;
    }
    case 113288:
    {
        returnValue = F("Gehägestr.");
        break;
    }
    case 113289:
    {
        returnValue = F("Gehägsweg");
        break;
    }
    case 113290:
    {
        returnValue = F("Gehäuerweg");
        break;
    }
    case 113291:
    {
        returnValue = F("Gehäuhöhe");
        break;
    }
    case 113292:
    {
        returnValue = F("Gehäumahdweg");
        break;
    }
    case 113293:
    {
        returnValue = F("Gehöft Weinsheim");
        break;
    }
    case 113294:
    {
        returnValue = F("Gehöftweg");
        break;
    }
    case 113295:
    {
        returnValue = F("Gehöllweg");
        break;
    }
    case 113296:
    {
        returnValue = F("Gehölzgarten");
        break;
    }
    case 113297:
    {
        returnValue = F("Gehölzlehrpfad");
        break;
    }
    case 113298:
    {
        returnValue = F("Gehürd");
        break;
    }
    case 113299:
    {
        returnValue = F("Geibach");
        break;
    }
    case 113300:
    {
        returnValue = F("Geibelallee");
        break;
    }
    case 113301:
    {
        returnValue = F("Geibelpfad");
        break;
    }
    case 113302:
    {
        returnValue = F("Geibelplatz");
        break;
    }
    case 113303:
    {
        returnValue = F("Geibelseck");
        break;
    }
    case 113304:
    {
        returnValue = F("Geibelstr.");
        break;
    }
    case 113305:
    {
        returnValue = F("Geibeltstr.");
        break;
    }
    case 113306:
    {
        returnValue = F("Geibelweg");
        break;
    }
    case 113307:
    {
        returnValue = F("Geibitzstr.");
        break;
    }
    case 113308:
    {
        returnValue = F("Geibitzweg");
        break;
    }
    case 113309:
    {
        returnValue = F("Geibring");
        break;
    }
    case 113310:
    {
        returnValue = F("Geibstr.");
        break;
    }
    case 113311:
    {
        returnValue = F("Geicher Gasse");
        break;
    }
    case 113312:
    {
        returnValue = F("Geichlinger Str.");
        break;
    }
    case 113313:
    {
        returnValue = F("Geichsenhofstr.");
        break;
    }
    case 113314:
    {
        returnValue = F("Geidelbachweg");
        break;
    }
    case 113315:
    {
        returnValue = F("Geierberg");
        break;
    }
    case 113316:
    {
        returnValue = F("Geierfeld");
        break;
    }
    case 113317:
    {
        returnValue = F("Geiergasse");
        break;
    }
    case 113318:
    {
        returnValue = F("Geierhorst");
        break;
    }
    case 113319:
    {
        returnValue = F("Geierhäuser");
        break;
    }
    case 113320:
    {
        returnValue = F("Geierhütten");
        break;
    }
    case 113321:
    {
        returnValue = F("Geierlay-Hängeseilbrücke");
        break;
    }
    case 113322:
    {
        returnValue = F("Geierlohweg");
        break;
    }
    case 113323:
    {
        returnValue = F("Geiersberg");
        break;
    }
    case 113324:
    {
        returnValue = F("Geiersberger Weg");
        break;
    }
    case 113325:
    {
        returnValue = F("Geiersbergsiedlung");
        break;
    }
    case 113326:
    {
        returnValue = F("Geiersbergstr.");
        break;
    }
    case 113327:
    {
        returnValue = F("Geiersbergweg");
        break;
    }
    case 113328:
    {
        returnValue = F("Geiersbergweg 1");
        break;
    }
    case 113329:
    {
        returnValue = F("Geiersbergweg 2");
        break;
    }
    case 113330:
    {
        returnValue = F("Geiersbergweg 3");
        break;
    }
    case 113331:
    {
        returnValue = F("Geiersbergweg 4");
        break;
    }
    case 113332:
    {
        returnValue = F("Geiersbergweg West");
        break;
    }
    case 113333:
    {
        returnValue = F("Geiersbühn");
        break;
    }
    case 113334:
    {
        returnValue = F("Geierschell");
        break;
    }
    case 113335:
    {
        returnValue = F("Geiersgasse");
        break;
    }
    case 113336:
    {
        returnValue = F("Geiersgraben");
        break;
    }
    case 113337:
    {
        returnValue = F("Geiersgrund");
        break;
    }
    case 113338:
    {
        returnValue = F("Geiersgräbenweg");
        break;
    }
    case 113339:
    {
        returnValue = F("Geiersknappen");
        break;
    }
    case 113340:
    {
        returnValue = F("Geierskopfweg");
        break;
    }
    case 113341:
    {
        returnValue = F("Geiersköppelweg");
        break;
    }
    case 113342:
    {
        returnValue = F("Geiersleite");
        break;
    }
    case 113343:
    {
        returnValue = F("Geiersnester Str.");
        break;
    }
    case 113344:
    {
        returnValue = F("Geiersnestweg");
        break;
    }
    case 113345:
    {
        returnValue = F("Geiersrainweg");
        break;
    }
    case 113346:
    {
        returnValue = F("Geierstallweg");
        break;
    }
    case 113347:
    {
        returnValue = F("Geiersteinstr.");
        break;
    }
    case 113348:
    {
        returnValue = F("Geiersthaler Str.");
        break;
    }
    case 113349:
    {
        returnValue = F("Geierstoß");
        break;
    }
    case 113350:
    {
        returnValue = F("Geierstr.");
        break;
    }
    case 113351:
    {
        returnValue = F("Geierswacht");
        break;
    }
    case 113352:
    {
        returnValue = F("Geiersweg");
        break;
    }
    case 113353:
    {
        returnValue = F("Geierswies");
        break;
    }
    case 113354:
    {
        returnValue = F("Geiertal");
        break;
    }
    case 113355:
    {
        returnValue = F("Geierweg");
        break;
    }
    case 113356:
    {
        returnValue = F("Geier´s Autobahn");
        break;
    }
    case 113357:
    {
        returnValue = F("Geifenpesch");
        break;
    }
    case 113358:
    {
        returnValue = F("Geifertshofer Str.");
        break;
    }
    case 113359:
    {
        returnValue = F("Geifize");
        break;
    }
    case 113360:
    {
        returnValue = F("Geiganter Str.");
        break;
    }
    case 113361:
    {
        returnValue = F("Geigelbergweg");
        break;
    }
    case 113362:
    {
        returnValue = F("Geigelsbergweg");
        break;
    }
    case 113363:
    {
        returnValue = F("Geigelsteinstr.");
        break;
    }
    case 113364:
    {
        returnValue = F("Geigelsteinweg");
        break;
    }
    case 113365:
    {
        returnValue = F("Geigenbauerstr.");
        break;
    }
    case 113366:
    {
        returnValue = F("Geigenbauerweg");
        break;
    }
    case 113367:
    {
        returnValue = F("Geigenbergerstr.");
        break;
    }
    case 113368:
    {
        returnValue = F("Geigenbergweg");
        break;
    }
    case 113369:
    {
        returnValue = F("Geigenbuckweg");
        break;
    }
    case 113370:
    {
        returnValue = F("Geigengasse");
        break;
    }
    case 113371:
    {
        returnValue = F("Geigenhalsweg");
        break;
    }
    case 113372:
    {
        returnValue = F("Geigenheckenweg");
        break;
    }
    case 113373:
    {
        returnValue = F("Geigenkofen");
        break;
    }
    case 113374:
    {
        returnValue = F("Geigenkofer Str.");
        break;
    }
    case 113375:
    {
        returnValue = F("Geigenköpfleweg");
        break;
    }
    case 113376:
    {
        returnValue = F("Geigenloher Weg");
        break;
    }
    case 113377:
    {
        returnValue = F("Geigenmachergäßchen");
        break;
    }
    case 113378:
    {
        returnValue = F("Geigenmühle");
        break;
    }
    case 113379:
    {
        returnValue = F("Geigenrain");
        break;
    }
    case 113380:
    {
        returnValue = F("Geigensteg");
        break;
    }
    case 113381:
    {
        returnValue = F("Geigensteinstr.");
        break;
    }
    case 113382:
    {
        returnValue = F("Geigenstr.");
        break;
    }
    case 113383:
    {
        returnValue = F("Geigenweg");
        break;
    }
    case 113384:
    {
        returnValue = F("Geigenäcker");
        break;
    }
    case 113385:
    {
        returnValue = F("Geiger");
        break;
    }
    case 113386:
    {
        returnValue = F("Geigerbachweg");
        break;
    }
    case 113387:
    {
        returnValue = F("Geigerfilz");
        break;
    }
    case 113388:
    {
        returnValue = F("Geigergasse");
        break;
    }
    case 113389:
    {
        returnValue = F("Geigergässchen");
        break;
    }
    case 113390:
    {
        returnValue = F("Geigerheckenweg");
        break;
    }
    case 113391:
    {
        returnValue = F("Geigerle");
        break;
    }
    case 113392:
    {
        returnValue = F("Geigersbachweg");
        break;
    }
    case 113393:
    {
        returnValue = F("Geigersberg");
        break;
    }
    case 113394:
    {
        returnValue = F("Geigersbergstr.");
        break;
    }
    case 113395:
    {
        returnValue = F("Geigersbergweg");
        break;
    }
    case 113396:
    {
        returnValue = F("Geigersbühlweg");
        break;
    }
    case 113397:
    {
        returnValue = F("Geigershallenweg");
        break;
    }
    case 113398:
    {
        returnValue = F("Geigersheidsattelweg");
        break;
    }
    case 113399:
    {
        returnValue = F("Geigerslochweg");
        break;
    }
    case 113400:
    {
        returnValue = F("Geigersnest-Weg");
        break;
    }
    case 113401:
    {
        returnValue = F("Geigersteige");
        break;
    }
    case 113402:
    {
        returnValue = F("Geigerstr.");
        break;
    }
    case 113403:
    {
        returnValue = F("Geigerweg");
        break;
    }
    case 113404:
    {
        returnValue = F("Geigeräckerstr.");
        break;
    }
    case 113405:
    {
        returnValue = F("Geiging");
        break;
    }
    case 113406:
    {
        returnValue = F("Geiglbergstr.");
        break;
    }
    case 113407:
    {
        returnValue = F("Geiglerstr.");
        break;
    }
    case 113408:
    {
        returnValue = F("Geigässla");
        break;
    }
    case 113409:
    {
        returnValue = F("Geilberg");
        break;
    }
    case 113410:
    {
        returnValue = F("Geildorfer Bach");
        break;
    }
    case 113411:
    {
        returnValue = F("Geildorfer Str.");
        break;
    }
    case 113412:
    {
        returnValue = F("Geilebachweg");
        break;
    }
    case 113413:
    {
        returnValue = F("Geilenbacher Str.");
        break;
    }
    case 113414:
    {
        returnValue = F("Geilenbacher Weg");
        break;
    }
    case 113415:
    {
        returnValue = F("Geilenberg");
        break;
    }
    case 113416:
    {
        returnValue = F("Geilenberger Weg");
        break;
    }
    case 113417:
    {
        returnValue = F("Geilenkausener Str.");
        break;
    }
    case 113418:
    {
        returnValue = F("Geilenkirchener Kreisbahn");
        break;
    }
    case 113419:
    {
        returnValue = F("Geilenkirchener Str.");
        break;
    }
    case 113420:
    {
        returnValue = F("Geilenkircher Str.");
        break;
    }
    case 113421:
    {
        returnValue = F("Geilertshausen");
        break;
    }
    case 113422:
    {
        returnValue = F("Geilingsgasse");
        break;
    }
    case 113423:
    {
        returnValue = F("Geilingshausweg");
        break;
    }
    case 113424:
    {
        returnValue = F("Geilingstr.");
        break;
    }
    case 113425:
    {
        returnValue = F("Geilingsweg");
        break;
    }
    case 113426:
    {
        returnValue = F("Geilischbergweg");
        break;
    }
    case 113427:
    {
        returnValue = F("Geilnauer Weg");
        break;
    }
    case 113428:
    {
        returnValue = F("Geilrath");
        break;
    }
    case 113429:
    {
        returnValue = F("Geilrather Weg");
        break;
    }
    case 113430:
    {
        returnValue = F("Geilsdorf");
        break;
    }
    case 113431:
    {
        returnValue = F("Geilsdorfer Str.");
        break;
    }
    case 113432:
    {
        returnValue = F("Geilsdorfer Weg");
        break;
    }
    case 113433:
    {
        returnValue = F("Geilsgasse");
        break;
    }
    case 113434:
    {
        returnValue = F("Geilsheim");
        break;
    }
    case 113435:
    {
        returnValue = F("Geilsheimer Str.");
        break;
    }
    case 113436:
    {
        returnValue = F("Geilshäuser Weg");
        break;
    }
    case 113437:
    {
        returnValue = F("Geilsweg");
        break;
    }
    case 113438:
    {
        returnValue = F("Geilwanger Str.");
        break;
    }
    case 113439:
    {
        returnValue = F("Geilweg");
        break;
    }
    case 113440:
    {
        returnValue = F("Geinegge");
        break;
    }
    case 113441:
    {
        returnValue = F("Geiningen");
        break;
    }
    case 113442:
    {
        returnValue = F("Geininger Str.");
        break;
    }
    case 113443:
    {
        returnValue = F("Geinitzstr.");
        break;
    }
    case 113444:
    {
        returnValue = F("Geinitzstr./Westsachsenstadion");
        break;
    }
    case 113445:
    {
        returnValue = F("Geinsheimer Str.");
        break;
    }
    case 113446:
    {
        returnValue = F("Geirenbadstr.");
        break;
    }
    case 113447:
    {
        returnValue = F("Geisacker");
        break;
    }
    case 113448:
    {
        returnValue = F("Geisaer Str.");
        break;
    }
    case 113449:
    {
        returnValue = F("Geisaer Tor");
        break;
    }
    case 113450:
    {
        returnValue = F("Geisaer Weg");
        break;
    }
    case 113451:
    {
        returnValue = F("Geisbachstr.");
        break;
    }
    case 113452:
    {
        returnValue = F("Geisbeck");
        break;
    }
    case 113453:
    {
        returnValue = F("Geisberg");
        break;
    }
    case 113454:
    {
        returnValue = F("Geisbergblick");
        break;
    }
    case 113455:
    {
        returnValue = F("Geisberger Weg");
        break;
    }
    case 113456:
    {
        returnValue = F("Geisbergstr.");
        break;
    }
    case 113457:
    {
        returnValue = F("Geisbergweg");
        break;
    }
    case 113458:
    {
        returnValue = F("Geisbornweg");
        break;
    }
    case 113459:
    {
        returnValue = F("Geisbrinkstr.");
        break;
    }
    case 113460:
    {
        returnValue = F("Geisbruchstr.");
        break;
    }
    case 113461:
    {
        returnValue = F("Geisbuckweg");
        break;
    }
    case 113462:
    {
        returnValue = F("Geisbusch");
        break;
    }
    case 113463:
    {
        returnValue = F("Geisbächleweg");
        break;
    }
    case 113464:
    {
        returnValue = F("Geisbüchel");
        break;
    }
    case 113465:
    {
        returnValue = F("Geisbühl");
        break;
    }
    case 113466:
    {
        returnValue = F("Geisbühlstr.");
        break;
    }
    case 113467:
    {
        returnValue = F("Geisbühlweg");
        break;
    }
    case 113468:
    {
        returnValue = F("Geisbüsch");
        break;
    }
    case 113469:
    {
        returnValue = F("Geischbergweg");
        break;
    }
    case 113470:
    {
        returnValue = F("Geisdörfle");
        break;
    }
    case 113471:
    {
        returnValue = F("Geisebrink");
        break;
    }
    case 113472:
    {
        returnValue = F("Geisebrückchen");
        break;
    }
    case 113473:
    {
        returnValue = F("Geiseck");
        break;
    }
    case 113474:
    {
        returnValue = F("Geisecker Talstr.");
        break;
    }
    case 113475:
    {
        returnValue = F("Geiseckstr.");
        break;
    }
    case 113476:
    {
        returnValue = F("Geisel");
        break;
    }
    case 113477:
    {
        returnValue = F("Geiselanger");
        break;
    }
    case 113478:
    {
        returnValue = F("Geiselbacher Str.");
        break;
    }
    case 113479:
    {
        returnValue = F("Geiselbachstr.");
        break;
    }
    case 113480:
    {
        returnValue = F("Geiselberg");
        break;
    }
    case 113481:
    {
        returnValue = F("Geiselbergstr.");
        break;
    }
    case 113482:
    {
        returnValue = F("Geiselbergweg");
        break;
    }
    case 113483:
    {
        returnValue = F("Geiselbrechting");
        break;
    }
    case 113484:
    {
        returnValue = F("Geiselbrunnweg");
        break;
    }
    case 113485:
    {
        returnValue = F("Geiselbullacher Str.");
        break;
    }
    case 113486:
    {
        returnValue = F("Geiseler Heide");
        break;
    }
    case 113487:
    {
        returnValue = F("Geiselerstr.");
        break;
    }
    case 113488:
    {
        returnValue = F("Geiselfing");
        break;
    }
    case 113489:
    {
        returnValue = F("Geiselgasteig-Geräumt");
        break;
    }
    case 113490:
    {
        returnValue = F("Geiselgasteigstr.");
        break;
    }
    case 113491:
    {
        returnValue = F("Geiselgrund");
        break;
    }
    case 113492:
    {
        returnValue = F("Geiselharting");
        break;
    }
    case 113493:
    {
        returnValue = F("Geiselhartstr.");
        break;
    }
    case 113494:
    {
        returnValue = F("Geiselhof");
        break;
    }
    case 113495:
    {
        returnValue = F("Geiselhofer Str.");
        break;
    }
    case 113496:
    {
        returnValue = F("Geiselhofstr.");
        break;
    }
    case 113497:
    {
        returnValue = F("Geiselhöringer Str.");
        break;
    }
    case 113498:
    {
        returnValue = F("Geiselring");
        break;
    }
    case 113499:
    {
        returnValue = F("Geiselrot");
        break;
    }
    case 113500:
    {
        returnValue = F("Geiselroter Heidle");
        break;
    }
    case 113501:
    {
        returnValue = F("Geiselröhlitzer Str.");
        break;
    }
    case 113502:
    {
        returnValue = F("Geiselsberger Str.");
        break;
    }
    case 113503:
    {
        returnValue = F("Geiselsbergweg");
        break;
    }
    case 113504:
    {
        returnValue = F("Geiselsdorf");
        break;
    }
    case 113505:
    {
        returnValue = F("Geiselsdorfer Weg");
        break;
    }
    case 113506:
    {
        returnValue = F("Geiselspielweg");
        break;
    }
    case 113507:
    {
        returnValue = F("Geiselsteinstr.");
        break;
    }
    case 113508:
    {
        returnValue = F("Geiselsteinweg");
        break;
    }
    case 113509:
    {
        returnValue = F("Geiselstr.");
        break;
    }
    case 113510:
    {
        returnValue = F("Geiseltalstr.");
        break;
    }
    case 113511:
    {
        returnValue = F("Geiselwanger Steige");
        break;
    }
    case 113512:
    {
        returnValue = F("Geiselweg");
        break;
    }
    case 113513:
    {
        returnValue = F("Geiselwieser Str.");
        break;
    }
    case 113514:
    {
        returnValue = F("Geiselwieslach");
        break;
    }
    case 113515:
    {
        returnValue = F("Geiselwinder Str.");
        break;
    }
    case 113516:
    {
        returnValue = F("Geisenbach");
        break;
    }
    case 113517:
    {
        returnValue = F("Geisenbacher Weg");
        break;
    }
    case 113518:
    {
        returnValue = F("Geisenbachstr.");
        break;
    }
    case 113519:
    {
        returnValue = F("Geisenbachweg");
        break;
    }
    case 113520:
    {
        returnValue = F("Geisenberg");
        break;
    }
    case 113521:
    {
        returnValue = F("Geisenbergstr.");
        break;
    }
    case 113522:
    {
        returnValue = F("Geisenbergweg");
        break;
    }
    case 113523:
    {
        returnValue = F("Geisenbrunner Weg");
        break;
    }
    case 113524:
    {
        returnValue = F("Geisenfelder Stadt Oasen");
        break;
    }
    case 113525:
    {
        returnValue = F("Geisenfelder Str.");
        break;
    }
    case 113526:
    {
        returnValue = F("Geisenfelder Weg");
        break;
    }
    case 113527:
    {
        returnValue = F("Geisengrunder Rangen");
        break;
    }
    case 113528:
    {
        returnValue = F("Geisengrunder Str.");
        break;
    }
    case 113529:
    {
        returnValue = F("Geisengrunder Weg");
        break;
    }
    case 113530:
    {
        returnValue = F("Geisengrundweg");
        break;
    }
    case 113531:
    {
        returnValue = F("Geisenhausener Str.");
        break;
    }
    case 113532:
    {
        returnValue = F("Geisenheimer Str.");
        break;
    }
    case 113533:
    {
        returnValue = F("Geisenheimer Weg");
        break;
    }
    case 113534:
    {
        returnValue = F("Geisenhof");
        break;
    }
    case 113535:
    {
        returnValue = F("Geisenhofen");
        break;
    }
    case 113536:
    {
        returnValue = F("Geisenhofener Str.");
        break;
    }
    case 113537:
    {
        returnValue = F("Geisenhofer Weg");
        break;
    }
    case 113538:
    {
        returnValue = F("Geisenhofstr.");
        break;
    }
    case 113539:
    {
        returnValue = F("Geisenhöfer Str.");
        break;
    }
    case 113540:
    {
        returnValue = F("Geisenhöhner Weg");
        break;
    }
    case 113541:
    {
        returnValue = F("Geisenhöll");
        break;
    }
    case 113542:
    {
        returnValue = F("Geisenkam");
        break;
    }
    case 113543:
    {
        returnValue = F("Geisenkopf");
        break;
    }
    case 113544:
    {
        returnValue = F("Geisenmarkt");
        break;
    }
    case 113545:
    {
        returnValue = F("Geisenmoos");
        break;
    }
    case 113546:
    {
        returnValue = F("Geisenmooser Weg");
        break;
    }
    case 113547:
    {
        returnValue = F("Geisenmühlenweg");
        break;
    }
    case 113548:
    {
        returnValue = F("Geisenrieder Str.");
        break;
    }
    case 113549:
    {
        returnValue = F("Geisenstr.");
        break;
    }
    case 113550:
    {
        returnValue = F("Geisersweg");
        break;
    }
    case 113551:
    {
        returnValue = F("Geisertstr.");
        break;
    }
    case 113552:
    {
        returnValue = F("Geisertweg");
        break;
    }
    case 113553:
    {
        returnValue = F("Geisespitze");
        break;
    }
    case 113554:
    {
        returnValue = F("Geisestr.");
        break;
    }
    case 113555:
    {
        returnValue = F("Geiset");
        break;
    }
    case 113556:
    {
        returnValue = F("Geiseweg");
        break;
    }
    case 113557:
    {
        returnValue = F("Geisfelder Str.");
        break;
    }
    case 113558:
    {
        returnValue = F("Geisfeldkreisel");
        break;
    }
    case 113559:
    {
        returnValue = F("Geisfußstr.");
        break;
    }
    case 113560:
    {
        returnValue = F("Geisgieblweg");
        break;
    }
    case 113561:
    {
        returnValue = F("Geisgraben");
        break;
    }
    case 113562:
    {
        returnValue = F("Geisgries");
        break;
    }
    case 113563:
    {
        returnValue = F("Geisgrube");
        break;
    }
    case 113564:
    {
        returnValue = F("Geisgrün");
        break;
    }
    case 113565:
    {
        returnValue = F("Geishaldenweg");
        break;
    }
    case 113566:
    {
        returnValue = F("Geishardtstr.");
        break;
    }
    case 113567:
    {
        returnValue = F("Geishausweg");
        break;
    }
    case 113568:
    {
        returnValue = F("Geishauweg");
        break;
    }
    case 113569:
    {
        returnValue = F("Geisheckenweg");
        break;
    }
    case 113570:
    {
        returnValue = F("Geisheckweg");
        break;
    }
    case 113571:
    {
        returnValue = F("Geishofweg");
        break;
    }
    case 113572:
    {
        returnValue = F("Geishornstr.");
        break;
    }
    case 113573:
    {
        returnValue = F("Geishöhe");
        break;
    }
    case 113574:
    {
        returnValue = F("Geisinger Steig");
        break;
    }
    case 113575:
    {
        returnValue = F("Geisinger Str.");
        break;
    }
    case 113576:
    {
        returnValue = F("Geisinger Weg");
        break;
    }
    case 113577:
    {
        returnValue = F("Geisingstr.");
        break;
    }
    case 113578:
    {
        returnValue = F("Geisinkstr.");
        break;
    }
    case 113579:
    {
        returnValue = F("Geiskanzelweg");
        break;
    }
    case 113580:
    {
        returnValue = F("Geiske");
        break;
    }
    case 113581:
    {
        returnValue = F("Geislarer Str.");
        break;
    }
    case 113582:
    {
        returnValue = F("Geislarstr.");
        break;
    }
    case 113583:
    {
        returnValue = F("Geislatsrieder Str.");
        break;
    }
    case 113584:
    {
        returnValue = F("Geislayweg");
        break;
    }
    case 113585:
    {
        returnValue = F("Geisleder Tor");
        break;
    }
    case 113586:
    {
        returnValue = F("Geisleithenstr.");
        break;
    }
    case 113587:
    {
        returnValue = F("Geislerweg");
        break;
    }
    case 113588:
    {
        returnValue = F("Geisletrüttenweg");
        break;
    }
    case 113589:
    {
        returnValue = F("Geislinger Linde");
        break;
    }
    case 113590:
    {
        returnValue = F("Geislinger Str.");
        break;
    }
    case 113591:
    {
        returnValue = F("Geislinger Weg");
        break;
    }
    case 113592:
    {
        returnValue = F("Geislitzer Str.");
        break;
    }
    case 113593:
    {
        returnValue = F("Geislmayrstr.");
        break;
    }
    case 113594:
    {
        returnValue = F("Geisloherweg");
        break;
    }
    case 113595:
    {
        returnValue = F("Geismar Landstr.");
        break;
    }
    case 113596:
    {
        returnValue = F("Geismarer Hof");
        break;
    }
    case 113597:
    {
        returnValue = F("Geismarer Str.");
        break;
    }
    case 113598:
    {
        returnValue = F("Geismarrain");
        break;
    }
    case 113599:
    {
        returnValue = F("Geismarscher Weg");
        break;
    }
    case 113600:
    {
        returnValue = F("Geismarstr.");
        break;
    }
    case 113601:
    {
        returnValue = F("Geismarweg");
        break;
    }
    case 113602:
    {
        returnValue = F("Geismerg");
        break;
    }
    case 113603:
    {
        returnValue = F("Geismühle");
        break;
    }
    case 113604:
    {
        returnValue = F("Geismühlenweg");
        break;
    }
    case 113605:
    {
        returnValue = F("Geisnacherweg");
        break;
    }
    case 113606:
    {
        returnValue = F("Geisnangstr.");
        break;
    }
    case 113607:
    {
        returnValue = F("Geisrain");
        break;
    }
    case 113608:
    {
        returnValue = F("Geisrückenweg");
        break;
    }
    case 113609:
    {
        returnValue = F("Geissackerweg");
        break;
    }
    case 113610:
    {
        returnValue = F("Geissberg");
        break;
    }
    case 113611:
    {
        returnValue = F("Geissbergstr.");
        break;
    }
    case 113612:
    {
        returnValue = F("Geissbergweg");
        break;
    }
    case 113613:
    {
        returnValue = F("Geissbühlweg");
        break;
    }
    case 113614:
    {
        returnValue = F("Geisschleif");
        break;
    }
    case 113615:
    {
        returnValue = F("Geisschneise");
        break;
    }
    case 113616:
    {
        returnValue = F("Geisseestr.");
        break;
    }
    case 113617:
    {
        returnValue = F("Geisselpfad");
        break;
    }
    case 113618:
    {
        returnValue = F("Geisselscher Garten");
        break;
    }
    case 113619:
    {
        returnValue = F("Geisselstr.");
        break;
    }
    case 113620:
    {
        returnValue = F("Geissenstallweg");
        break;
    }
    case 113621:
    {
        returnValue = F("Geissental");
        break;
    }
    case 113622:
    {
        returnValue = F("Geissgrube");
        break;
    }
    case 113623:
    {
        returnValue = F("Geisshornweg");
        break;
    }
    case 113624:
    {
        returnValue = F("Geisskopfstr.");
        break;
    }
    case 113625:
    {
        returnValue = F("Geissrainweg");
        break;
    }
    case 113626:
    {
        returnValue = F("Geissteigweg");
        break;
    }
    case 113627:
    {
        returnValue = F("Geissweg");
        break;
    }
    case 113628:
    {
        returnValue = F("Geissweiden");
        break;
    }
    case 113629:
    {
        returnValue = F("Geistalstr.");
        break;
    }
    case 113630:
    {
        returnValue = F("Geistalweg");
        break;
    }
    case 113631:
    {
        returnValue = F("Geistbeckstr.");
        break;
    }
    case 113632:
    {
        returnValue = F("Geistberg");
        break;
    }
    case 113633:
    {
        returnValue = F("Geistbergstr.");
        break;
    }
    case 113634:
    {
        returnValue = F("Geistbichlstr.");
        break;
    }
    case 113635:
    {
        returnValue = F("Geistbühelstr.");
        break;
    }
    case 113636:
    {
        returnValue = F("Geisteichstr.");
        break;
    }
    case 113637:
    {
        returnValue = F("Geistenbecker Feld");
        break;
    }
    case 113638:
    {
        returnValue = F("Geistenbecker Ring");
        break;
    }
    case 113639:
    {
        returnValue = F("Geistenbecker Str.");
        break;
    }
    case 113640:
    {
        returnValue = F("Geistenstr.");
        break;
    }
    case 113641:
    {
        returnValue = F("Geistergässchen");
        break;
    }
    case 113642:
    {
        returnValue = F("Geisterwald Harlachberg");
        break;
    }
    case 113643:
    {
        returnValue = F("Geisterweg");
        break;
    }
    case 113644:
    {
        returnValue = F("Geisterwegle");
        break;
    }
    case 113645:
    {
        returnValue = F("Geistgarten");
        break;
    }
    case 113646:
    {
        returnValue = F("Geistgasse");
        break;
    }
    case 113647:
    {
        returnValue = F("Geisthof");
        break;
    }
    case 113648:
    {
        returnValue = F("Geisthofskönig");
        break;
    }
    case 113649:
    {
        returnValue = F("Geistkamp");
        break;
    }
    case 113650:
    {
        returnValue = F("Geistkircher Hof");
        break;
    }
    case 113651:
    {
        returnValue = F("Geistklinge");
        break;
    }
    case 113652:
    {
        returnValue = F("Geistl.-Rat-Bachmaier-Str.");
        break;
    }
    case 113653:
    {
        returnValue = F("Geistl.-Rat-Gruber-Weg");
        break;
    }
    case 113654:
    {
        returnValue = F("Geistlicher-Rat-Hösl-Str.");
        break;
    }
    case 113655:
    {
        returnValue = F("Geistlicher-Rat-Ingerl-Weg");
        break;
    }
    case 113656:
    {
        returnValue = F("Geistlicher-Rat-Quinger-Str.");
        break;
    }
    case 113657:
    {
        returnValue = F("Geistlicher-Rat-Zieglersche Gasse");
        break;
    }
    case 113658:
    {
        returnValue = F("Geistmarkt");
        break;
    }
    case 113659:
    {
        returnValue = F("Geistmoosweg");
        break;
    }
    case 113660:
    {
        returnValue = F("Geiststr.");
        break;
    }
    case 113661:
    {
        returnValue = F("Geistwall");
        break;
    }
    case 113662:
    {
        returnValue = F("Geistweg");
        break;
    }
    case 113663:
    {
        returnValue = F("Geisweg");
        break;
    }
    case 113664:
    {
        returnValue = F("Geisweider Str.");
        break;
    }
    case 113665:
    {
        returnValue = F("Geisweilerweg");
        break;
    }
    case 113666:
    {
        returnValue = F("Geiswinkel");
        break;
    }
    case 113667:
    {
        returnValue = F("Geisäcker");
        break;
    }
    case 113668:
    {
        returnValue = F("Geisäckerweg");
        break;
    }
    case 113669:
    {
        returnValue = F("Geitau");
        break;
    }
    case 113670:
    {
        returnValue = F("Geitbecke");
        break;
    }
    case 113671:
    {
        returnValue = F("Geitelder Berg");
        break;
    }
    case 113672:
    {
        returnValue = F("Geitelder Weg");
        break;
    }
    case 113673:
    {
        returnValue = F("Geiteldestr.");
        break;
    }
    case 113674:
    {
        returnValue = F("Geitelplatz");
        break;
    }
    case 113675:
    {
        returnValue = F("Geitenbergstr.");
        break;
    }
    case 113676:
    {
        returnValue = F("Geitenfeld");
        break;
    }
    case 113677:
    {
        returnValue = F("Geitersdorf");
        break;
    }
    case 113678:
    {
        returnValue = F("Geitgiebel");
        break;
    }
    case 113679:
    {
        returnValue = F("Geithainer Allee");
        break;
    }
    case 113680:
    {
        returnValue = F("Geithainer Str.");
        break;
    }
    case 113681:
    {
        returnValue = F("Geitherstr.");
        break;
    }
    case 113682:
    {
        returnValue = F("Geithes Passage");
        break;
    }
    case 113683:
    {
        returnValue = F("Geitheweg");
        break;
    }
    case 113684:
    {
        returnValue = F("Geitling");
        break;
    }
    case 113685:
    {
        returnValue = F("Geitlingstr.");
        break;
    }
    case 113686:
    {
        returnValue = F("Geitlingstr. 2");
        break;
    }
    case 113687:
    {
        returnValue = F("Geitlingsweg");
        break;
    }
    case 113688:
    {
        returnValue = F("Geitlingweg");
        break;
    }
    case 113689:
    {
        returnValue = F("Geitnerskoppe");
        break;
    }
    case 113690:
    {
        returnValue = F("Geitnerstr.");
        break;
    }
    case 113691:
    {
        returnValue = F("Geitschelweg");
        break;
    }
    case 113692:
    {
        returnValue = F("Geiwitzenweg");
        break;
    }
    case 113693:
    {
        returnValue = F("Geiwiz");
        break;
    }
    case 113694:
    {
        returnValue = F("Geiwizweg");
        break;
    }
    case 113695:
    {
        returnValue = F("Geizenberg");
        break;
    }
    case 113696:
    {
        returnValue = F("Geizkoflerstr.");
        break;
    }
    case 113697:
    {
        returnValue = F("Geiß-Niddaerweg");
        break;
    }
    case 113698:
    {
        returnValue = F("Geißbachsteig");
        break;
    }
    case 113699:
    {
        returnValue = F("Geißbachstr.");
        break;
    }
    case 113700:
    {
        returnValue = F("Geißbachweg");
        break;
    }
    case 113701:
    {
        returnValue = F("Geißberg");
        break;
    }
    case 113702:
    {
        returnValue = F("Geißbergköple Weg");
        break;
    }
    case 113703:
    {
        returnValue = F("Geißbergring");
        break;
    }
    case 113704:
    {
        returnValue = F("Geißbergstr.");
        break;
    }
    case 113705:
    {
        returnValue = F("Geißbergweg");
        break;
    }
    case 113706:
    {
        returnValue = F("Geißbichl");
        break;
    }
    case 113707:
    {
        returnValue = F("Geißbichlweg");
        break;
    }
    case 113708:
    {
        returnValue = F("Geißblattpfad");
        break;
    }
    case 113709:
    {
        returnValue = F("Geißblattstr.");
        break;
    }
    case 113710:
    {
        returnValue = F("Geißblattweg");
        break;
    }
    case 113711:
    {
        returnValue = F("Geißbrunnenweg");
        break;
    }
    case 113712:
    {
        returnValue = F("Geißbrünneleweg");
        break;
    }
    case 113713:
    {
        returnValue = F("Geißbuck");
        break;
    }
    case 113714:
    {
        returnValue = F("Geißbuckweg");
        break;
    }
    case 113715:
    {
        returnValue = F("Geißburgweg");
        break;
    }
    case 113716:
    {
        returnValue = F("Geißbühl");
        break;
    }
    case 113717:
    {
        returnValue = F("Geißbühlstr.");
        break;
    }
    case 113718:
    {
        returnValue = F("Geißbühlweg");
        break;
    }
    case 113719:
    {
        returnValue = F("Geißegrundhohl");
        break;
    }
    case 113720:
    {
        returnValue = F("Geißelbachweg");
        break;
    }
    case 113721:
    {
        returnValue = F("Geißelgasse");
        break;
    }
    case 113722:
    {
        returnValue = F("Geißelhadter Str.");
        break;
    }
    case 113723:
    {
        returnValue = F("Geißelhardter Str.");
        break;
    }
    case 113724:
    {
        returnValue = F("Geißen");
        break;
    }
    case 113725:
    {
        returnValue = F("Geißenbrücke");
        break;
    }
    case 113726:
    {
        returnValue = F("Geißenbrünnchen");
        break;
    }
    case 113727:
    {
        returnValue = F("Geißenbuckel");
        break;
    }
    case 113728:
    {
        returnValue = F("Geißengasse");
        break;
    }
    case 113729:
    {
        returnValue = F("Geißengrundweg");
        break;
    }
    case 113730:
    {
        returnValue = F("Geißenmarkt");
        break;
    }
    case 113731:
    {
        returnValue = F("Geißenrainweg");
        break;
    }
    case 113732:
    {
        returnValue = F("Geißental");
        break;
    }
    case 113733:
    {
        returnValue = F("Geißenweg");
        break;
    }
    case 113734:
    {
        returnValue = F("Geißenwegle");
        break;
    }
    case 113735:
    {
        returnValue = F("Geißertweg");
        break;
    }
    case 113736:
    {
        returnValue = F("Geißfurt");
        break;
    }
    case 113737:
    {
        returnValue = F("Geißfußweg");
        break;
    }
    case 113738:
    {
        returnValue = F("Geißgasse");
        break;
    }
    case 113739:
    {
        returnValue = F("Geißgraben");
        break;
    }
    case 113740:
    {
        returnValue = F("Geißgrabenstr.");
        break;
    }
    case 113741:
    {
        returnValue = F("Geißgräben");
        break;
    }
    case 113742:
    {
        returnValue = F("Geißgäßchen");
        break;
    }
    case 113743:
    {
        returnValue = F("Geißhalde");
        break;
    }
    case 113744:
    {
        returnValue = F("Geißhaldenstr.");
        break;
    }
    case 113745:
    {
        returnValue = F("Geißheide");
        break;
    }
    case 113746:
    {
        returnValue = F("Geißholz nb");
        break;
    }
    case 113747:
    {
        returnValue = F("Geißhornstr.");
        break;
    }
    case 113748:
    {
        returnValue = F("Geißhornweg");
        break;
    }
    case 113749:
    {
        returnValue = F("Geißhäuserstr.");
        break;
    }
    case 113750:
    {
        returnValue = F("Geißhölzle");
        break;
    }
    case 113751:
    {
        returnValue = F("Geißhügel");
        break;
    }
    case 113752:
    {
        returnValue = F("Geißinger Str.");
        break;
    }
    case 113753:
    {
        returnValue = F("Geißkleestr.");
        break;
    }
    case 113754:
    {
        returnValue = F("Geißklinge");
        break;
    }
    case 113755:
    {
        returnValue = F("Geißklingensträßchen");
        break;
    }
    case 113756:
    {
        returnValue = F("Geißkopfstr.");
        break;
    }
    case 113757:
    {
        returnValue = F("Geißkopfweg");
        break;
    }
    case 113758:
    {
        returnValue = F("Geißleinweg");
        break;
    }
    case 113759:
    {
        returnValue = F("Geißleite");
        break;
    }
    case 113760:
    {
        returnValue = F("Geißlerstr.");
        break;
    }
    case 113761:
    {
        returnValue = F("Geißlerweg");
        break;
    }
    case 113762:
    {
        returnValue = F("Geißlesweg");
        break;
    }
    case 113763:
    {
        returnValue = F("Geißlinger Str.");
        break;
    }
    case 113764:
    {
        returnValue = F("Geißlinger Weg");
        break;
    }
    case 113765:
    {
        returnValue = F("Geißlingersteige");
        break;
    }
    case 113766:
    {
        returnValue = F("Geißlitzer Str.");
        break;
    }
    case 113767:
    {
        returnValue = F("Geißlitzweg");
        break;
    }
    case 113768:
    {
        returnValue = F("Geißlung");
        break;
    }
    case 113769:
    {
        returnValue = F("Geißlweg");
        break;
    }
    case 113770:
    {
        returnValue = F("Geißmannsdorfer Str.");
        break;
    }
    case 113771:
    {
        returnValue = F("Geißmarstr.");
        break;
    }
    case 113772:
    {
        returnValue = F("Geißmattweg");
        break;
    }
    case 113773:
    {
        returnValue = F("Geißrain");
        break;
    }
    case 113774:
    {
        returnValue = F("Geißspitzweg");
        break;
    }
    case 113775:
    {
        returnValue = F("Geißstein");
        break;
    }
    case 113776:
    {
        returnValue = F("Geißstr.");
        break;
    }
    case 113777:
    {
        returnValue = F("Geißtal");
        break;
    }
    case 113778:
    {
        returnValue = F("Geißtrat");
        break;
    }
    case 113779:
    {
        returnValue = F("Geißviertel");
        break;
    }
    case 113780:
    {
        returnValue = F("Geißweg");
        break;
    }
    case 113781:
    {
        returnValue = F("Geißweide");
        break;
    }
    case 113782:
    {
        returnValue = F("Geißwiesen");
        break;
    }
    case 113783:
    {
        returnValue = F("Geißwiesenstr.");
        break;
    }
    case 113784:
    {
        returnValue = F("Geißäcker");
        break;
    }
    case 113785:
    {
        returnValue = F("Geißäckerstr.");
        break;
    }
    case 113786:
    {
        returnValue = F("Geißäckerweg");
        break;
    }
    case 113787:
    {
        returnValue = F("Gelagweg");
        break;
    }
    case 113788:
    {
        returnValue = F("Gelastr.");
        break;
    }
    case 113789:
    {
        returnValue = F("Gelaweg");
        break;
    }
    case 113790:
    {
        returnValue = F("Gelbach");
        break;
    }
    case 113791:
    {
        returnValue = F("Gelbachstr.");
        break;
    }
    case 113792:
    {
        returnValue = F("Gelbbach");
        break;
    }
    case 113793:
    {
        returnValue = F("Gelbbauchunkenweg");
        break;
    }
    case 113794:
    {
        returnValue = F("Gelbchenweg");
        break;
    }
    case 113795:
    {
        returnValue = F("Gelbe Brede");
        break;
    }
    case 113796:
    {
        returnValue = F("Gelbe Buind");
        break;
    }
    case 113797:
    {
        returnValue = F("Gelbe Gate");
        break;
    }
    case 113798:
    {
        returnValue = F("Gelbe Grundschneise");
        break;
    }
    case 113799:
    {
        returnValue = F("Gelbe Hohle");
        break;
    }
    case 113800:
    {
        returnValue = F("Gelbe Loh");
        break;
    }
    case 113801:
    {
        returnValue = F("Gelbe Passage");
        break;
    }
    case 113802:
    {
        returnValue = F("Gelbe Raute / Rundweg 3 und 4");
        break;
    }
    case 113803:
    {
        returnValue = F("Gelbe Riede");
        break;
    }
    case 113804:
    {
        returnValue = F("Gelbe Weiden");
        break;
    }
    case 113805:
    {
        returnValue = F("Gelbe-Bürg-Str.");
        break;
    }
    case 113806:
    {
        returnValue = F("Gelbe-Grund-Schneise");
        break;
    }
    case 113807:
    {
        returnValue = F("Gelbe-Mühlenzwinger");
        break;
    }
    case 113808:
    {
        returnValue = F("Gelbe-Rose Park");
        break;
    }
    case 113809:
    {
        returnValue = F("Gelbe-Tränk-Schneise");
        break;
    }
    case 113810:
    {
        returnValue = F("Gelbehirschstr.");
        break;
    }
    case 113811:
    {
        returnValue = F("Gelbeichweg");
        break;
    }
    case 113812:
    {
        returnValue = F("Gelber Balken; Blau-Weißer Balken; Gelb-Roter Balken; Roter Balken; Blauer Balken");
        break;
    }
    case 113813:
    {
        returnValue = F("Gelber Berg");
        break;
    }
    case 113814:
    {
        returnValue = F("Gelber Damm");
        break;
    }
    case 113815:
    {
        returnValue = F("Gelber Hof");
        break;
    }
    case 113816:
    {
        returnValue = F("Gelber Kreidebusen");
        break;
    }
    case 113817:
    {
        returnValue = F("Gelber Plattenweg");
        break;
    }
    case 113818:
    {
        returnValue = F("Gelber Sand");
        break;
    }
    case 113819:
    {
        returnValue = F("Gelber Stein");
        break;
    }
    case 113820:
    {
        returnValue = F("Gelber Stern");
        break;
    }
    case 113821:
    {
        returnValue = F("Gelber Strich");
        break;
    }
    case 113822:
    {
        returnValue = F("Gelber Weg");
        break;
    }
    case 113823:
    {
        returnValue = F("Gelber Weg: Alternative Kamm");
        break;
    }
    case 113824:
    {
        returnValue = F("Gelber-Grund-Str.");
        break;
    }
    case 113825:
    {
        returnValue = F("Gelbersdorf");
        break;
    }
    case 113826:
    {
        returnValue = F("Gelbes Gwänd Steig");
        break;
    }
    case 113827:
    {
        returnValue = F("Gelbes Schloss");
        break;
    }
    case 113828:
    {
        returnValue = F("Gelbes Wasser");
        break;
    }
    case 113829:
    {
        returnValue = F("Gelbes-Loch-Weg");
        break;
    }
    case 113830:
    {
        returnValue = F("Gelbinger Gasse");
        break;
    }
    case 113831:
    {
        returnValue = F("Gelbke-Hain");
        break;
    }
    case 113832:
    {
        returnValue = F("Gelbmöstlerweg");
        break;
    }
    case 113833:
    {
        returnValue = F("Gelbrichtstr.");
        break;
    }
    case 113834:
    {
        returnValue = F("Gelbrieder Gasse");
        break;
    }
    case 113835:
    {
        returnValue = F("Gelbrink");
        break;
    }
    case 113836:
    {
        returnValue = F("Gelbsand");
        break;
    }
    case 113837:
    {
        returnValue = F("Gelbschlade");
        break;
    }
    case 113838:
    {
        returnValue = F("Gelbsgrabenweg");
        break;
    }
    case 113839:
    {
        returnValue = F("Gelbspötterweg");
        break;
    }
    case 113840:
    {
        returnValue = F("Gelbsreuther Weg");
        break;
    }
    case 113841:
    {
        returnValue = F("Gelbsternweg");
        break;
    }
    case 113842:
    {
        returnValue = F("Gelbwärts");
        break;
    }
    case 113843:
    {
        returnValue = F("Gelchsheimer Str.");
        break;
    }
    case 113844:
    {
        returnValue = F("Geldbeutel");
        break;
    }
    case 113845:
    {
        returnValue = F("Geldenberg");
        break;
    }
    case 113846:
    {
        returnValue = F("Geldenweg");
        break;
    }
    case 113847:
    {
        returnValue = F("Gelder Dyck");
        break;
    }
    case 113848:
    {
        returnValue = F("Gelderblomstr.");
        break;
    }
    case 113849:
    {
        returnValue = F("Gelderland-Ring");
        break;
    }
    case 113850:
    {
        returnValue = F("Gelderlandstr.");
        break;
    }
    case 113851:
    {
        returnValue = F("Geldermannstr.");
        break;
    }
    case 113852:
    {
        returnValue = F("Geldern`sche Kay");
        break;
    }
    case 113853:
    {
        returnValue = F("Gelderner Str.");
        break;
    }
    case 113854:
    {
        returnValue = F("Gelderner Weg");
        break;
    }
    case 113855:
    {
        returnValue = F("Geldernsche Str.");
        break;
    }
    case 113856:
    {
        returnValue = F("Geldernstr.");
        break;
    }
    case 113857:
    {
        returnValue = F("Gelderse Weg");
        break;
    }
    case 113858:
    {
        returnValue = F("Geldersheimer Str.");
        break;
    }
    case 113859:
    {
        returnValue = F("Geldersheimer Weg");
        break;
    }
    case 113860:
    {
        returnValue = F("Gelderstr.");
        break;
    }
    case 113861:
    {
        returnValue = F("Geldertor");
        break;
    }
    case 113862:
    {
        returnValue = F("Geldhauserweg");
        break;
    }
    case 113863:
    {
        returnValue = F("Geldkuhlenfeld");
        break;
    }
    case 113864:
    {
        returnValue = F("Geldloch");
        break;
    }
    case 113865:
    {
        returnValue = F("Geldmachersklingenweg");
        break;
    }
    case 113866:
    {
        returnValue = F("Geldolfstr.");
        break;
    }
    case 113867:
    {
        returnValue = F("Geldorpstr.");
        break;
    }
    case 113868:
    {
        returnValue = F("Geldrische Str.");
        break;
    }
    case 113869:
    {
        returnValue = F("Geldrischer Weg");
        break;
    }
    case 113870:
    {
        returnValue = F("Geleener Str.");
        break;
    }
    case 113871:
    {
        returnValue = F("Gelegegasse");
        break;
    }
    case 113872:
    {
        returnValue = F("Geleitberg");
        break;
    }
    case 113873:
    {
        returnValue = F("Geleitbrückle");
        break;
    }
    case 113874:
    {
        returnValue = F("Geleitsgasse");
        break;
    }
    case 113875:
    {
        returnValue = F("Geleitshäuser");
        break;
    }
    case 113876:
    {
        returnValue = F("Geleitsstr.");
        break;
    }
    case 113877:
    {
        returnValue = F("Geleitstr.");
        break;
    }
    case 113878:
    {
        returnValue = F("Geleitsweg");
        break;
    }
    case 113879:
    {
        returnValue = F("Geleitweg");
        break;
    }
    case 113880:
    {
        returnValue = F("Gelenauer Str.");
        break;
    }
    case 113881:
    {
        returnValue = F("Gelenauer Weg");
        break;
    }
    case 113882:
    {
        returnValue = F("Gelenberger Weg");
        break;
    }
    case 113883:
    {
        returnValue = F("Gelenderweg");
        break;
    }
    case 113884:
    {
        returnValue = F("Gelendigweg");
        break;
    }
    case 113885:
    {
        returnValue = F("Gelendweg");
        break;
    }
    case 113886:
    {
        returnValue = F("Gelengenweg");
        break;
    }
    case 113887:
    {
        returnValue = F("Geleniusstr.");
        break;
    }
    case 113888:
    {
        returnValue = F("Gelenker Weg");
        break;
    }
    case 113889:
    {
        returnValue = F("Gelenkwellenstr.");
        break;
    }
    case 113890:
    {
        returnValue = F("Gelenn");
        break;
    }
    case 113891:
    {
        returnValue = F("Gelersbusch");
        break;
    }
    case 113892:
    {
        returnValue = F("Gelgööskenweg");
        break;
    }
    case 113893:
    {
        returnValue = F("Gelhaldenweg");
        break;
    }
    case 113894:
    {
        returnValue = F("Gelidkamp");
        break;
    }
    case 113895:
    {
        returnValue = F("Gelindeweg");
        break;
    }
    case 113896:
    {
        returnValue = F("Gelißstr.");
        break;
    }
    case 113897:
    {
        returnValue = F("Gell'sche Str.");
        break;
    }
    case 113898:
    {
        returnValue = F("Gellbachweg");
        break;
    }
    case 113899:
    {
        returnValue = F("Gelldorfer Weg");
        break;
    }
    case 113900:
    {
        returnValue = F("Gelle Breite");
        break;
    }
    case 113901:
    {
        returnValue = F("Gelleberg");
        break;
    }
    case 113902:
    {
        returnValue = F("Gellenbecker Esch");
        break;
    }
    case 113903:
    {
        returnValue = F("Gellenbecker Str.");
        break;
    }
    case 113904:
    {
        returnValue = F("Gellenbeckstr.");
        break;
    }
    case 113905:
    {
        returnValue = F("Gellenbeckweg");
        break;
    }
    case 113906:
    {
        returnValue = F("Gellenbergstr.");
        break;
    }
    case 113907:
    {
        returnValue = F("Gellendin");
        break;
    }
    case 113908:
    {
        returnValue = F("Gellendiner Landstr.");
        break;
    }
    case 113909:
    {
        returnValue = F("Gellendiner Weg");
        break;
    }
    case 113910:
    {
        returnValue = F("Gellendyck");
        break;
    }
    case 113911:
    {
        returnValue = F("Gellener Damm");
        break;
    }
    case 113912:
    {
        returnValue = F("Gellener Helmer");
        break;
    }
    case 113913:
    {
        returnValue = F("Gellener Str.");
        break;
    }
    case 113914:
    {
        returnValue = F("Gellenerhörne");
        break;
    }
    case 113915:
    {
        returnValue = F("Gellengasse");
        break;
    }
    case 113916:
    {
        returnValue = F("Gellengässchen");
        break;
    }
    case 113917:
    {
        returnValue = F("Gellenthin");
        break;
    }
    case 113918:
    {
        returnValue = F("Gellenweg");
        break;
    }
    case 113919:
    {
        returnValue = F("Gelleper Str.");
        break;
    }
    case 113920:
    {
        returnValue = F("Gellernweg");
        break;
    }
    case 113921:
    {
        returnValue = F("Gellersbreede");
        break;
    }
    case 113922:
    {
        returnValue = F("Gellerser Str.");
        break;
    }
    case 113923:
    {
        returnValue = F("Gellershagenhof");
        break;
    }
    case 113924:
    {
        returnValue = F("Gellershagenpark");
        break;
    }
    case 113925:
    {
        returnValue = F("Gellershäuser Dorfstr.");
        break;
    }
    case 113926:
    {
        returnValue = F("Gellershäuser Str.");
        break;
    }
    case 113927:
    {
        returnValue = F("Gellersstr.");
        break;
    }
    case 113928:
    {
        returnValue = F("Gellerstr.");
        break;
    }
    case 113929:
    {
        returnValue = F("Gellerstück");
        break;
    }
    case 113930:
    {
        returnValue = F("Gellert Weg");
        break;
    }
    case 113931:
    {
        returnValue = F("Gellertallee");
        break;
    }
    case 113932:
    {
        returnValue = F("Gellertplatz");
        break;
    }
    case 113933:
    {
        returnValue = F("Gellertskamp");
        break;
    }
    case 113934:
    {
        returnValue = F("Gellertstr.");
        break;
    }
    case 113935:
    {
        returnValue = F("Gellertweg");
        break;
    }
    case 113936:
    {
        returnValue = F("Gellestatt");
        break;
    }
    case 113937:
    {
        returnValue = F("Gellgasse");
        break;
    }
    case 113938:
    {
        returnValue = F("Gellhäuserhof");
        break;
    }
    case 113939:
    {
        returnValue = F("Gelliehäuser Str.");
        break;
    }
    case 113940:
    {
        returnValue = F("Gelliehäuser Weg");
        break;
    }
    case 113941:
    {
        returnValue = F("Gellin");
        break;
    }
    case 113942:
    {
        returnValue = F("Gellinghausen");
        break;
    }
    case 113943:
    {
        returnValue = F("Gellmersbacher Str.");
        break;
    }
    case 113944:
    {
        returnValue = F("Gellmersdorfer Str.");
        break;
    }
    case 113945:
    {
        returnValue = F("Gellndorfstr.");
        break;
    }
    case 113946:
    {
        returnValue = F("Gellsol");
        break;
    }
    case 113947:
    {
        returnValue = F("Gelmer Weg");
        break;
    }
    case 113948:
    {
        returnValue = F("Gelmerstr.");
        break;
    }
    case 113949:
    {
        returnValue = F("Gelnhausenweg");
        break;
    }
    case 113950:
    {
        returnValue = F("Gelnhäuser Str.");
        break;
    }
    case 113951:
    {
        returnValue = F("Gelnhäuser Tal");
        break;
    }
    case 113952:
    {
        returnValue = F("Gelnhäuserschneise");
        break;
    }
    case 113953:
    {
        returnValue = F("Gelobtland");
        break;
    }
    case 113954:
    {
        returnValue = F("Gelobtweg");
        break;
    }
    case 113955:
    {
        returnValue = F("Gelochweg");
        break;
    }
    case 113956:
    {
        returnValue = F("Gelpestr.");
        break;
    }
    case 113957:
    {
        returnValue = F("Gelpetal");
        break;
    }
    case 113958:
    {
        returnValue = F("Gelsbach");
        break;
    }
    case 113959:
    {
        returnValue = F("Gelsdorfer Str.");
        break;
    }
    case 113960:
    {
        returnValue = F("Gelsdorfer Weg");
        break;
    }
    case 113961:
    {
        returnValue = F("Gelsdorfstr.");
        break;
    }
    case 113962:
    {
        returnValue = F("Gelsenkirchener Allee");
        break;
    }
    case 113963:
    {
        returnValue = F("Gelsenkirchener Str.");
        break;
    }
    case 113964:
    {
        returnValue = F("Gelsenkirchenstr.");
        break;
    }
    case 113965:
    {
        returnValue = F("Gelsenkircher Str.");
        break;
    }
    case 113966:
    {
        returnValue = F("Gelsenkirchner Str.");
        break;
    }
    case 113967:
    {
        returnValue = F("Gelshof");
        break;
    }
    case 113968:
    {
        returnValue = F("Gelsingstr.");
        break;
    }
    case 113969:
    {
        returnValue = F("Gelslinger Str.");
        break;
    }
    case 113970:
    {
        returnValue = F("Gelslinger Weg");
        break;
    }
    case 113971:
    {
        returnValue = F("Gelsterburgstr.");
        break;
    }
    case 113972:
    {
        returnValue = F("Gelstern");
        break;
    }
    case 113973:
    {
        returnValue = F("Gelsterstr.");
        break;
    }
    case 113974:
    {
        returnValue = F("Geltendorfer Str.");
        break;
    }
    case 113975:
    {
        returnValue = F("Geltengasse");
        break;
    }
    case 113976:
    {
        returnValue = F("Geltermeierberg");
        break;
    }
    case 113977:
    {
        returnValue = F("Geltermeiergasse");
        break;
    }
    case 113978:
    {
        returnValue = F("Geltermeierweg");
        break;
    }
    case 113979:
    {
        returnValue = F("Gelterswoog");
        break;
    }
    case 113980:
    {
        returnValue = F("Gelthari-Ring");
        break;
    }
    case 113981:
    {
        returnValue = F("Geltinger Au");
        break;
    }
    case 113982:
    {
        returnValue = F("Geltinger Landstr.");
        break;
    }
    case 113983:
    {
        returnValue = F("Geltinger Str.");
        break;
    }
    case 113984:
    {
        returnValue = F("Geltinger Weg");
        break;
    }
    case 113985:
    {
        returnValue = F("Geltingerstr.");
        break;
    }
    case 113986:
    {
        returnValue = F("Geltnachbrücke");
        break;
    }
    case 113987:
    {
        returnValue = F("Geltnachstr.");
        break;
    }
    case 113988:
    {
        returnValue = F("Geltnachweg");
        break;
    }
    case 113989:
    {
        returnValue = F("Geltolfinger Anger");
        break;
    }
    case 113990:
    {
        returnValue = F("Geltolfinger Rennweg");
        break;
    }
    case 113991:
    {
        returnValue = F("Geltorfstr.");
        break;
    }
    case 113992:
    {
        returnValue = F("Geltoweg");
        break;
    }
    case 113993:
    {
        returnValue = F("Geltower Chaussee");
        break;
    }
    case 113994:
    {
        returnValue = F("Gelvenweg");
        break;
    }
    case 113995:
    {
        returnValue = F("Gelände Grünzug");
        break;
    }
    case 113996:
    {
        returnValue = F("Gelände Lernstrecke");
        break;
    }
    case 113997:
    {
        returnValue = F("Gelände der Jugendbildungsstätte");
        break;
    }
    case 113998:
    {
        returnValue = F("Gelände des ehemaligen Freibads Freistatt");
        break;
    }
    case 113999:
    {
        returnValue = F("Geländeackerweg");
        break;
    }
    case 114000:
    {
        returnValue = F("Geländer im Wassertretbecken");
        break;
    }
    case 114001:
    {
        returnValue = F("Geländeweg");
        break;
    }
    case 114002:
    {
        returnValue = F("Gelängenweg");
        break;
    }
    case 114003:
    {
        returnValue = F("Gelängeweg");
        break;
    }
    case 114004:
    {
        returnValue = F("Gelöschtes Gäßle");
        break;
    }
    case 114005:
    {
        returnValue = F("Gemarkenstr.");
        break;
    }
    case 114006:
    {
        returnValue = F("Gemarkenweg");
        break;
    }
    case 114007:
    {
        returnValue = F("Gemarker Str.");
        break;
    }
    case 114008:
    {
        returnValue = F("Gemarker Ufer");
        break;
    }
    case 114009:
    {
        returnValue = F("Gemarkungsgrenze");
        break;
    }
    case 114010:
    {
        returnValue = F("Gembachau");
        break;
    }
    case 114011:
    {
        returnValue = F("Gembdental");
        break;
    }
    case 114012:
    {
        returnValue = F("Gembdentaler Weg");
        break;
    }
    case 114013:
    {
        returnValue = F("Gembecker Str.");
        break;
    }
    case 114014:
    {
        returnValue = F("Gembrisweg");
        break;
    }
    case 114015:
    {
        returnValue = F("Gemein");
        break;
    }
    case 114016:
    {
        returnValue = F("Gemeinde Park Twist Siedlung");
        break;
    }
    case 114017:
    {
        returnValue = F("Gemeinde Riesenweg");
        break;
    }
    case 114018:
    {
        returnValue = F("Gemeinde Wald");
        break;
    }
    case 114019:
    {
        returnValue = F("Gemeinde-Länder-Weg");
        break;
    }
    case 114020:
    {
        returnValue = F("Gemeinde-Park");
        break;
    }
    case 114021:
    {
        returnValue = F("Gemeindeamtsstr.");
        break;
    }
    case 114022:
    {
        returnValue = F("Gemeindeangerweg");
        break;
    }
    case 114023:
    {
        returnValue = F("Gemeindebadestelle Breiholz");
        break;
    }
    case 114024:
    {
        returnValue = F("Gemeindeberg");
        break;
    }
    case 114025:
    {
        returnValue = F("Gemeindebergstr.");
        break;
    }
    case 114026:
    {
        returnValue = F("Gemeindebergweg");
        break;
    }
    case 114027:
    {
        returnValue = F("Gemeindedamm");
        break;
    }
    case 114028:
    {
        returnValue = F("Gemeindedinger Str.");
        break;
    }
    case 114029:
    {
        returnValue = F("Gemeindeeck");
        break;
    }
    case 114030:
    {
        returnValue = F("Gemeindefeld");
        break;
    }
    case 114031:
    {
        returnValue = F("Gemeindegarten");
        break;
    }
    case 114032:
    {
        returnValue = F("Gemeindegarten Park");
        break;
    }
    case 114033:
    {
        returnValue = F("Gemeindegartenweg");
        break;
    }
    case 114034:
    {
        returnValue = F("Gemeindegasse");
        break;
    }
    case 114035:
    {
        returnValue = F("Gemeindegert");
        break;
    }
    case 114036:
    {
        returnValue = F("Gemeindegrabenweg");
        break;
    }
    case 114037:
    {
        returnValue = F("Gemeindegut");
        break;
    }
    case 114038:
    {
        returnValue = F("Gemeindegässle");
        break;
    }
    case 114039:
    {
        returnValue = F("Gemeindehausstr.");
        break;
    }
    case 114040:
    {
        returnValue = F("Gemeindehausweg");
        break;
    }
    case 114041:
    {
        returnValue = F("Gemeindehof");
        break;
    }
    case 114042:
    {
        returnValue = F("Gemeindehohl");
        break;
    }
    case 114043:
    {
        returnValue = F("Gemeindeholplatz");
        break;
    }
    case 114044:
    {
        returnValue = F("Gemeindeholzstr.");
        break;
    }
    case 114045:
    {
        returnValue = F("Gemeindehäuser");
        break;
    }
    case 114046:
    {
        returnValue = F("Gemeindekern");
        break;
    }
    case 114047:
    {
        returnValue = F("Gemeindemühlenweg");
        break;
    }
    case 114048:
    {
        returnValue = F("Gemeindeneck");
        break;
    }
    case 114049:
    {
        returnValue = F("Gemeindepark");
        break;
    }
    case 114050:
    {
        returnValue = F("Gemeindepark Röhrsdorf");
        break;
    }
    case 114051:
    {
        returnValue = F("Gemeindeplatz");
        break;
    }
    case 114052:
    {
        returnValue = F("Gemeindeplatz der Kunstgemeinde Pampsee");
        break;
    }
    case 114053:
    {
        returnValue = F("Gemeindesteig");
        break;
    }
    case 114054:
    {
        returnValue = F("Gemeindestr.");
        break;
    }
    case 114055:
    {
        returnValue = F("Gemeindesträssle");
        break;
    }
    case 114056:
    {
        returnValue = F("Gemeindesträßle");
        break;
    }
    case 114057:
    {
        returnValue = F("Gemeindetwete");
        break;
    }
    case 114058:
    {
        returnValue = F("Gemeindeverbindungsstr. 10");
        break;
    }
    case 114059:
    {
        returnValue = F("Gemeindeverbindungsstr. Obermotzing-Rain");
        break;
    }
    case 114060:
    {
        returnValue = F("Gemeindeverbindungsstr. Pfatter-Gmünd");
        break;
    }
    case 114061:
    {
        returnValue = F("Gemeindeverbindungsweg");
        break;
    }
    case 114062:
    {
        returnValue = F("Gemeindeverwaltung");
        break;
    }
    case 114063:
    {
        returnValue = F("Gemeindewald");
        break;
    }
    case 114064:
    {
        returnValue = F("Gemeindewaldstr.");
        break;
    }
    case 114065:
    {
        returnValue = F("Gemeindewaldweg");
        break;
    }
    case 114066:
    {
        returnValue = F("Gemeindeweg");
        break;
    }
    case 114067:
    {
        returnValue = F("Gemeindewiese");
        break;
    }
    case 114068:
    {
        returnValue = F("Gemeindewiesen");
        break;
    }
    case 114069:
    {
        returnValue = F("Gemeindewiesenweg");
        break;
    }
    case 114070:
    {
        returnValue = F("Gemeindewiesweg");
        break;
    }
    case 114071:
    {
        returnValue = F("Gemeindezentrum");
        break;
    }
    case 114072:
    {
        returnValue = F("Gemeindeäckerlen");
        break;
    }
    case 114073:
    {
        returnValue = F("Gemeindsäcker");
        break;
    }
    case 114074:
    {
        returnValue = F("Gemeiner-Acker-Weg");
        break;
    }
    case 114075:
    {
        returnValue = F("Gemeinerstr.");
        break;
    }
    case 114076:
    {
        returnValue = F("Gemeines Mark");
        break;
    }
    case 114077:
    {
        returnValue = F("Gemeines Reis");
        break;
    }
    case 114078:
    {
        returnValue = F("Gemeinfeld");
        break;
    }
    case 114079:
    {
        returnValue = F("Gemeinfelder Str.");
        break;
    }
    case 114080:
    {
        returnValue = F("Gemeinhardt's Weg");
        break;
    }
    case 114081:
    {
        returnValue = F("Gemeinmerkweg");
        break;
    }
    case 114082:
    {
        returnValue = F("Gemeinreuth");
        break;
    }
    case 114083:
    {
        returnValue = F("Gemeinsamer Geh- und Radweg");
        break;
    }
    case 114084:
    {
        returnValue = F("Gemeinschaft");
        break;
    }
    case 114085:
    {
        returnValue = F("Gemeinschafts-Gang");
        break;
    }
    case 114086:
    {
        returnValue = F("Gemeinschaftsanlage");
        break;
    }
    case 114087:
    {
        returnValue = F("Gemeinschaftsgarten");
        break;
    }
    case 114088:
    {
        returnValue = F("Gemeinschaftsgarten Pödelwitz");
        break;
    }
    case 114089:
    {
        returnValue = F("Gemeinschaftsstr.");
        break;
    }
    case 114090:
    {
        returnValue = F("Gemeinschaftsweg");
        break;
    }
    case 114091:
    {
        returnValue = F("Gemeintalsträßle");
        break;
    }
    case 114092:
    {
        returnValue = F("Gemeinweg");
        break;
    }
    case 114093:
    {
        returnValue = F("Gemener Str.");
        break;
    }
    case 114094:
    {
        returnValue = F("Gemengeweg");
        break;
    }
    case 114095:
    {
        returnValue = F("Geminiweg");
        break;
    }
    case 114096:
    {
        returnValue = F("Gemmekestr.");
        break;
    }
    case 114097:
    {
        returnValue = F("Gemmelweg");
        break;
    }
    case 114098:
    {
        returnValue = F("Gemmingen-Str.");
        break;
    }
    case 114099:
    {
        returnValue = F("Gemmingenstr.");
        break;
    }
    case 114100:
    {
        returnValue = F("Gemminger Str.");
        break;
    }
    case 114101:
    {
        returnValue = F("Gemminger Weg");
        break;
    }
    case 114102:
    {
        returnValue = F("Gemmingergasse");
        break;
    }
    case 114103:
    {
        returnValue = F("Gemmingerstr.");
        break;
    }
    case 114104:
    {
        returnValue = F("Gemmiweg");
        break;
    }
    case 114105:
    {
        returnValue = F("Gemmrigheimer Str.");
        break;
    }
    case 114106:
    {
        returnValue = F("Gemmstr.");
        break;
    }
    case 114107:
    {
        returnValue = F("Gempenblick");
        break;
    }
    case 114108:
    {
        returnValue = F("Gempenstr.");
        break;
    }
    case 114109:
    {
        returnValue = F("Gempfinger Str.");
        break;
    }
    case 114110:
    {
        returnValue = F("Gempfinger Weg");
        break;
    }
    case 114111:
    {
        returnValue = F("Gemsbühl");
        break;
    }
    case 114112:
    {
        returnValue = F("Gemsenstr.");
        break;
    }
    case 114113:
    {
        returnValue = F("Gemsenweg");
        break;
    }
    case 114114:
    {
        returnValue = F("Gemswandweg");
        break;
    }
    case 114115:
    {
        returnValue = F("Gemsweg");
        break;
    }
    case 114116:
    {
        returnValue = F("Gemswändweg");
        break;
    }
    case 114117:
    {
        returnValue = F("Gemündaer Str.");
        break;
    }
    case 114118:
    {
        returnValue = F("Gemündener Str.");
        break;
    }
    case 114119:
    {
        returnValue = F("Gemündener Tal");
        break;
    }
    case 114120:
    {
        returnValue = F("Gemündener Tor");
        break;
    }
    case 114121:
    {
        returnValue = F("Gemündener Weg");
        break;
    }
    case 114122:
    {
        returnValue = F("Gemünder Str.");
        break;
    }
    case 114123:
    {
        returnValue = F("Gemünder Weg");
        break;
    }
    case 114124:
    {
        returnValue = F("Gemünderstr.");
        break;
    }
    case 114125:
    {
        returnValue = F("Gemüsegarten");
        break;
    }
    case 114126:
    {
        returnValue = F("Gemüsemarkt");
        break;
    }
    case 114127:
    {
        returnValue = F("Gemüseweg");
        break;
    }
    case 114128:
    {
        returnValue = F("Gen Hoefke");
        break;
    }
    case 114129:
    {
        returnValue = F("Gen-Leder");
        break;
    }
    case 114130:
    {
        returnValue = F("Genauer Peter");
        break;
    }
    case 114131:
    {
        returnValue = F("Gencayer Str.");
        break;
    }
    case 114132:
    {
        returnValue = F("Gendalweg");
        break;
    }
    case 114133:
    {
        returnValue = F("Gendarmengasse");
        break;
    }
    case 114134:
    {
        returnValue = F("Gendarmenweg");
        break;
    }
    case 114135:
    {
        returnValue = F("Gendarmeriestr.");
        break;
    }
    case 114136:
    {
        returnValue = F("Gendarmerieweg");
        break;
    }
    case 114137:
    {
        returnValue = F("Gendarmsweg");
        break;
    }
    case 114138:
    {
        returnValue = F("Gendering");
        break;
    }
    case 114139:
    {
        returnValue = F("Gendohr");
        break;
    }
    case 114140:
    {
        returnValue = F("Gendorfer Str.");
        break;
    }
    case 114141:
    {
        returnValue = F("Gendringer Str.");
        break;
    }
    case 114142:
    {
        returnValue = F("Genegelstr.");
        break;
    }
    case 114143:
    {
        returnValue = F("Genehen");
        break;
    }
    case 114144:
    {
        returnValue = F("Geneickener Str.");
        break;
    }
    case 114145:
    {
        returnValue = F("Geneicker Weg");
        break;
    }
    case 114146:
    {
        returnValue = F("Geneigenhütte");
        break;
    }
    case 114147:
    {
        returnValue = F("Geneikener Str.");
        break;
    }
    case 114148:
    {
        returnValue = F("Genender Platz");
        break;
    }
    case 114149:
    {
        returnValue = F("Genender Weg");
        break;
    }
    case 114150:
    {
        returnValue = F("Genenderstr.");
        break;
    }
    case 114151:
    {
        returnValue = F("General-Allen-Str.");
        break;
    }
    case 114152:
    {
        returnValue = F("General-Aster-Weg");
        break;
    }
    case 114153:
    {
        returnValue = F("General-Beck-Str.");
        break;
    }
    case 114154:
    {
        returnValue = F("General-Clay-Str.");
        break;
    }
    case 114155:
    {
        returnValue = F("General-Colin-Powell-Str.");
        break;
    }
    case 114156:
    {
        returnValue = F("General-Hoffmann-Str.");
        break;
    }
    case 114157:
    {
        returnValue = F("General-Hopf-Str.");
        break;
    }
    case 114158:
    {
        returnValue = F("General-Horn-Str.");
        break;
    }
    case 114159:
    {
        returnValue = F("General-Kullmer-Str.");
        break;
    }
    case 114160:
    {
        returnValue = F("General-Morand-Weg");
        break;
    }
    case 114161:
    {
        returnValue = F("General-Moreau-Str.");
        break;
    }
    case 114162:
    {
        returnValue = F("General-Moser-Weg");
        break;
    }
    case 114163:
    {
        returnValue = F("General-Mudra-Str.");
        break;
    }
    case 114164:
    {
        returnValue = F("General-Patton-Str.");
        break;
    }
    case 114165:
    {
        returnValue = F("General-Philipp-Weg");
        break;
    }
    case 114166:
    {
        returnValue = F("General-Ritter-von-Mann-Str.");
        break;
    }
    case 114167:
    {
        returnValue = F("General-Sigel-Str.");
        break;
    }
    case 114168:
    {
        returnValue = F("General-Stephan-Str.");
        break;
    }
    case 114169:
    {
        returnValue = F("General-von-Bülow-Allee");
        break;
    }
    case 114170:
    {
        returnValue = F("General-von-Holzing-Str.");
        break;
    }
    case 114171:
    {
        returnValue = F("General-von-Nagel-Str.");
        break;
    }
    case 114172:
    {
        returnValue = F("General-von-Stein-Str.");
        break;
    }
    case 114173:
    {
        returnValue = F("General-von-Tauentzien-Weg");
        break;
    }
    case 114174:
    {
        returnValue = F("Generalkonsul-von-Weiß-Str.");
        break;
    }
    case 114175:
    {
        returnValue = F("Generaloberst-Beck-Str.");
        break;
    }
    case 114176:
    {
        returnValue = F("Generalsgasse");
        break;
    }
    case 114177:
    {
        returnValue = F("Generalstr.");
        break;
    }
    case 114178:
    {
        returnValue = F("Generalsweg");
        break;
    }
    case 114179:
    {
        returnValue = F("Generalvikar-Dr. Drüke-Weg");
        break;
    }
    case 114180:
    {
        returnValue = F("Generationengarten");
        break;
    }
    case 114181:
    {
        returnValue = F("Generationengarten am Wartberg");
        break;
    }
    case 114182:
    {
        returnValue = F("Generationenpark");
        break;
    }
    case 114183:
    {
        returnValue = F("Generationenpark \"Villa Burckhardt");
        break;
    }
    case 114184:
    {
        returnValue = F("Generationenpark Darfeld");
        break;
    }
    case 114185:
    {
        returnValue = F("Generationenpark Lütkerlinde");
        break;
    }
    case 114186:
    {
        returnValue = F("Generationenpark Marienbachtal");
        break;
    }
    case 114187:
    {
        returnValue = F("Generationenpark Pfiingsthalde");
        break;
    }
    case 114188:
    {
        returnValue = F("Generationenplatz");
        break;
    }
    case 114189:
    {
        returnValue = F("Generationenplatz Baasem");
        break;
    }
    case 114190:
    {
        returnValue = F("Generationenplatz am Pulverturm");
        break;
    }
    case 114191:
    {
        returnValue = F("Generationentreff \"Bahnhofstr.");
        break;
    }
    case 114192:
    {
        returnValue = F("Generationenweg");
        break;
    }
    case 114193:
    {
        returnValue = F("Generationenübergreifender Themenpark");
        break;
    }
    case 114194:
    {
        returnValue = F("Generosus-Kramer-Weg");
        break;
    }
    case 114195:
    {
        returnValue = F("Generotzky-Weg");
        break;
    }
    case 114196:
    {
        returnValue = F("Geneschen");
        break;
    }
    case 114197:
    {
        returnValue = F("Genfbachstr.");
        break;
    }
    case 114198:
    {
        returnValue = F("Genfeld");
        break;
    }
    case 114199:
    {
        returnValue = F("Genfelder Str.");
        break;
    }
    case 114200:
    {
        returnValue = F("Genfer Klause");
        break;
    }
    case 114201:
    {
        returnValue = F("Genfer Platz");
        break;
    }
    case 114202:
    {
        returnValue = F("Genfer Str.");
        break;
    }
    case 114203:
    {
        returnValue = F("Genfer Weg");
        break;
    }
    case 114204:
    {
        returnValue = F("Genfstr.");
        break;
    }
    case 114205:
    {
        returnValue = F("Gengenbacher Str.");
        break;
    }
    case 114206:
    {
        returnValue = F("Gengenbachweg");
        break;
    }
    case 114207:
    {
        returnValue = F("Gengentalweg");
        break;
    }
    case 114208:
    {
        returnValue = F("Gengerstr.");
        break;
    }
    case 114209:
    {
        returnValue = F("Gengesfeld");
        break;
    }
    case 114210:
    {
        returnValue = F("Gengham");
        break;
    }
    case 114211:
    {
        returnValue = F("Genglerstr.");
        break;
    }
    case 114212:
    {
        returnValue = F("Genhahner Hött");
        break;
    }
    case 114213:
    {
        returnValue = F("Genhausen");
        break;
    }
    case 114214:
    {
        returnValue = F("Genheimer Str.");
        break;
    }
    case 114215:
    {
        returnValue = F("Genheimer Weg");
        break;
    }
    case 114216:
    {
        returnValue = F("Genhodder");
        break;
    }
    case 114217:
    {
        returnValue = F("Genhodderheide");
        break;
    }
    case 114218:
    {
        returnValue = F("Genhof");
        break;
    }
    case 114219:
    {
        returnValue = F("Genhofen");
        break;
    }
    case 114220:
    {
        returnValue = F("Genhofer Brunnenweg");
        break;
    }
    case 114221:
    {
        returnValue = F("Genhofer Mühlenweg");
        break;
    }
    case 114222:
    {
        returnValue = F("Genholland");
        break;
    }
    case 114223:
    {
        returnValue = F("Genholter Str.");
        break;
    }
    case 114224:
    {
        returnValue = F("Genhover Weg");
        break;
    }
    case 114225:
    {
        returnValue = F("Genhülsen");
        break;
    }
    case 114226:
    {
        returnValue = F("Genickel");
        break;
    }
    case 114227:
    {
        returnValue = F("Genieler Str.");
        break;
    }
    case 114228:
    {
        returnValue = F("Geniestr.");
        break;
    }
    case 114229:
    {
        returnValue = F("Geniner Dorfstr.");
        break;
    }
    case 114230:
    {
        returnValue = F("Geniner Str.");
        break;
    }
    case 114231:
    {
        returnValue = F("Geniner Ufer");
        break;
    }
    case 114232:
    {
        returnValue = F("Geniusbankstr.");
        break;
    }
    case 114233:
    {
        returnValue = F("Geniusstr.");
        break;
    }
    case 114234:
    {
        returnValue = F("Genkel");
        break;
    }
    case 114235:
    {
        returnValue = F("Genkeler Str.");
        break;
    }
    case 114236:
    {
        returnValue = F("Genkeler-Weg");
        break;
    }
    case 114237:
    {
        returnValue = F("Genkelsperre");
        break;
    }
    case 114238:
    {
        returnValue = F("Genker Str.");
        break;
    }
    case 114239:
    {
        returnValue = F("Genklerhardt");
        break;
    }
    case 114240:
    {
        returnValue = F("Genlisstr.");
        break;
    }
    case 114241:
    {
        returnValue = F("Gennacher Str.");
        break;
    }
    case 114242:
    {
        returnValue = F("Gennachhausener Str.");
        break;
    }
    case 114243:
    {
        returnValue = F("Gennachstr.");
        break;
    }
    case 114244:
    {
        returnValue = F("Gennachweg");
        break;
    }
    case 114245:
    {
        returnValue = F("Gennaer Str.");
        break;
    }
    case 114246:
    {
        returnValue = F("Gennebrecker Str.");
        break;
    }
    case 114247:
    {
        returnValue = F("Gennenbach");
        break;
    }
    case 114248:
    {
        returnValue = F("Gennenbacherweg");
        break;
    }
    case 114249:
    {
        returnValue = F("Gennenweg");
        break;
    }
    case 114250:
    {
        returnValue = F("Genneper Str.");
        break;
    }
    case 114251:
    {
        returnValue = F("Gennerich");
        break;
    }
    case 114252:
    {
        returnValue = F("Gennericher Str.");
        break;
    }
    case 114253:
    {
        returnValue = F("Gennericher Weg");
        break;
    }
    case 114254:
    {
        returnValue = F("Gennernbach");
        break;
    }
    case 114255:
    {
        returnValue = F("Gennersbrunnerstrasse");
        break;
    }
    case 114256:
    {
        returnValue = F("Gennerstr.");
        break;
    }
    case 114257:
    {
        returnValue = F("Genningerweg");
        break;
    }
    case 114258:
    {
        returnValue = F("Gennweilerstr.");
        break;
    }
    case 114259:
    {
        returnValue = F("Genor");
        break;
    }
    case 114260:
    {
        returnValue = F("Genossenschaftsplatz");
        break;
    }
    case 114261:
    {
        returnValue = F("Genossenschaftsstr.");
        break;
    }
    case 114262:
    {
        returnValue = F("Genossenschaftsstr., Ispringen");
        break;
    }
    case 114263:
    {
        returnValue = F("Genossenschaftstr.");
        break;
    }
    case 114264:
    {
        returnValue = F("Genossenschaftsweg");
        break;
    }
    case 114265:
    {
        returnValue = F("Genoveva-Brenner-Weg");
        break;
    }
    case 114266:
    {
        returnValue = F("Genovevastr.");
        break;
    }
    case 114267:
    {
        returnValue = F("Genovevaweg");
        break;
    }
    case 114268:
    {
        returnValue = F("Genroher Str.");
        break;
    }
    case 114269:
    {
        returnValue = F("Gensbacher Str.");
        break;
    }
    case 114270:
    {
        returnValue = F("Gensberg");
        break;
    }
    case 114271:
    {
        returnValue = F("Gensbergerstr.");
        break;
    }
    case 114272:
    {
        returnValue = F("Gensch");
        break;
    }
    case 114273:
    {
        returnValue = F("Genscherallee");
        break;
    }
    case 114274:
    {
        returnValue = F("Genschmarer Chaussee");
        break;
    }
    case 114275:
    {
        returnValue = F("Genschmarer Str.");
        break;
    }
    case 114276:
    {
        returnValue = F("Gensemer Gasse");
        break;
    }
    case 114277:
    {
        returnValue = F("Gensemer Str.");
        break;
    }
    case 114278:
    {
        returnValue = F("Gensfelderweg");
        break;
    }
    case 114279:
    {
        returnValue = F("Gensfleischstr.");
        break;
    }
    case 114280:
    {
        returnValue = F("Genshagener Dorfstr.");
        break;
    }
    case 114281:
    {
        returnValue = F("Genshagener Str.");
        break;
    }
    case 114282:
    {
        returnValue = F("Genshaldeweg");
        break;
    }
    case 114283:
    {
        returnValue = F("Gensinger Str.");
        break;
    }
    case 114284:
    {
        returnValue = F("Gensinger Weg");
        break;
    }
    case 114285:
    {
        returnValue = F("Genslerweg");
        break;
    }
    case 114286:
    {
        returnValue = F("Gensstr.");
        break;
    }
    case 114287:
    {
        returnValue = F("Genstr.");
        break;
    }
    case 114288:
    {
        returnValue = F("Gensunger Str.");
        break;
    }
    case 114289:
    {
        returnValue = F("Gensöderstr.");
        break;
    }
    case 114290:
    {
        returnValue = F("Gentach");
        break;
    }
    case 114291:
    {
        returnValue = F("Gentenriedweg");
        break;
    }
    case 114292:
    {
        returnValue = F("Genter Str.");
        break;
    }
    case 114293:
    {
        returnValue = F("Genterstr.");
        break;
    }
    case 114294:
    {
        returnValue = F("Genterweg");
        break;
    }
    case 114295:
    {
        returnValue = F("Genthengäßle");
        break;
    }
    case 114296:
    {
        returnValue = F("Genthiner Str.");
        break;
    }
    case 114297:
    {
        returnValue = F("Genthstr.");
        break;
    }
    case 114298:
    {
        returnValue = F("Gentilstr.");
        break;
    }
    case 114299:
    {
        returnValue = F("Gentishof");
        break;
    }
    case 114300:
    {
        returnValue = F("Gentnerstr.");
        break;
    }
    case 114301:
    {
        returnValue = F("Gentzkowstr.");
        break;
    }
    case 114302:
    {
        returnValue = F("Gentzstr.");
        break;
    }
    case 114303:
    {
        returnValue = F("Gentzweg");
        break;
    }
    case 114304:
    {
        returnValue = F("Genuitstr.");
        break;
    }
    case 114305:
    {
        returnValue = F("Genzanoer Str.");
        break;
    }
    case 114306:
    {
        returnValue = F("Genzkow");
        break;
    }
    case 114307:
    {
        returnValue = F("Genzkower Str.");
        break;
    }
    case 114308:
    {
        returnValue = F("Genzmerweg");
        break;
    }
    case 114309:
    {
        returnValue = F("Genzowstr.");
        break;
    }
    case 114310:
    {
        returnValue = F("Genzweg");
        break;
    }
    case 114311:
    {
        returnValue = F("Genügsamkeitstr.");
        break;
    }
    case 114312:
    {
        returnValue = F("Geo Route");
        break;
    }
    case 114313:
    {
        returnValue = F("Geo-Lehrpfad Houbirg");
        break;
    }
    case 114314:
    {
        returnValue = F("Geologieweg");
        break;
    }
    case 114315:
    {
        returnValue = F("Geologischer Dienst Vorpark");
        break;
    }
    case 114316:
    {
        returnValue = F("Geologischer Garten");
        break;
    }
    case 114317:
    {
        returnValue = F("Geologischer Garten Münzenberg");
        break;
    }
    case 114318:
    {
        returnValue = F("Geologischer Lehrgarten");
        break;
    }
    case 114319:
    {
        returnValue = F("Geologischer Lehrpfad");
        break;
    }
    case 114320:
    {
        returnValue = F("Geometergaßl");
        break;
    }
    case 114321:
    {
        returnValue = F("Geometerweg");
        break;
    }
    case 114322:
    {
        returnValue = F("Geopark");
        break;
    }
    case 114323:
    {
        returnValue = F("Geopark Dachsberg");
        break;
    }
    case 114324:
    {
        returnValue = F("Geopark Dormagen");
        break;
    }
    case 114325:
    {
        returnValue = F("Geopark Eiszeitland am Oderrand Sperlingsherberge");
        break;
    }
    case 114326:
    {
        returnValue = F("Geopark Porphyrland");
        break;
    }
    case 114327:
    {
        returnValue = F("Geopfad");
        break;
    }
    case 114328:
    {
        returnValue = F("Georg - Schumann - Platz");
        break;
    }
    case 114329:
    {
        returnValue = F("Georg Bauer Weg");
        break;
    }
    case 114330:
    {
        returnValue = F("Georg Elser Anlage");
        break;
    }
    case 114331:
    {
        returnValue = F("Georg Mayer Weg");
        break;
    }
    case 114332:
    {
        returnValue = F("Georg Mutz Anlage");
        break;
    }
    case 114333:
    {
        returnValue = F("Georg Ruhland Weg");
        break;
    }
    case 114334:
    {
        returnValue = F("Georg Schneider Brücke");
        break;
    }
    case 114335:
    {
        returnValue = F("Georg Spang Anlage");
        break;
    }
    case 114336:
    {
        returnValue = F("Georg-Abröll-Str.");
        break;
    }
    case 114337:
    {
        returnValue = F("Georg-Achziger-Ring");
        break;
    }
    case 114338:
    {
        returnValue = F("Georg-Ackermann-Str.");
        break;
    }
    case 114339:
    {
        returnValue = F("Georg-Adam-Lang-Str.");
        break;
    }
    case 114340:
    {
        returnValue = F("Georg-Adam-Reinhard-Str.");
        break;
    }
    case 114341:
    {
        returnValue = F("Georg-Adden-Str.");
        break;
    }
    case 114342:
    {
        returnValue = F("Georg-Adolf-Demmler-Str.");
        break;
    }
    case 114343:
    {
        returnValue = F("Georg-Agricola-Weg");
        break;
    }
    case 114344:
    {
        returnValue = F("Georg-Aicher-Str.");
        break;
    }
    case 114345:
    {
        returnValue = F("Georg-Aichinger-Str.");
        break;
    }
    case 114346:
    {
        returnValue = F("Georg-Alber-Str.");
        break;
    }
    case 114347:
    {
        returnValue = F("Georg-Albers-Weg");
        break;
    }
    case 114348:
    {
        returnValue = F("Georg-Albinius-Str.");
        break;
    }
    case 114349:
    {
        returnValue = F("Georg-Albinus-Str.");
        break;
    }
    case 114350:
    {
        returnValue = F("Georg-Allgaier-Str.");
        break;
    }
    case 114351:
    {
        returnValue = F("Georg-Alois-Rink-Str.");
        break;
    }
    case 114352:
    {
        returnValue = F("Georg-Althaus-Str.");
        break;
    }
    case 114353:
    {
        returnValue = F("Georg-Amend-Str.");
        break;
    }
    case 114354:
    {
        returnValue = F("Georg-Andorfer-Weg");
        break;
    }
    case 114355:
    {
        returnValue = F("Georg-Andreas-Hanewacker-Str.");
        break;
    }
    case 114356:
    {
        returnValue = F("Georg-Andreas-Sorge-Weg");
        break;
    }
    case 114357:
    {
        returnValue = F("Georg-Anthes-Str.");
        break;
    }
    case 114358:
    {
        returnValue = F("Georg-Anton-Fischer-Str.");
        break;
    }
    case 114359:
    {
        returnValue = F("Georg-Antoni-Str.");
        break;
    }
    case 114360:
    {
        returnValue = F("Georg-Arends-Weg");
        break;
    }
    case 114361:
    {
        returnValue = F("Georg-Arnold-Str.");
        break;
    }
    case 114362:
    {
        returnValue = F("Georg-Asmussen-Weg");
        break;
    }
    case 114363:
    {
        returnValue = F("Georg-August-Christ-Str.");
        break;
    }
    case 114364:
    {
        returnValue = F("Georg-August-Moeller-Str.");
        break;
    }
    case 114365:
    {
        returnValue = F("Georg-August-Str.");
        break;
    }
    case 114366:
    {
        returnValue = F("Georg-August-Zinn-Allee");
        break;
    }
    case 114367:
    {
        returnValue = F("Georg-August-Zinn-Str.");
        break;
    }
    case 114368:
    {
        returnValue = F("Georg-August-Zinn-Weg");
        break;
    }
    case 114369:
    {
        returnValue = F("Georg-Axt-Str.");
        break;
    }
    case 114370:
    {
        returnValue = F("Georg-Bader-Str.");
        break;
    }
    case 114371:
    {
        returnValue = F("Georg-Bartels-Str.");
        break;
    }
    case 114372:
    {
        returnValue = F("Georg-Bauer-Str.");
        break;
    }
    case 114373:
    {
        returnValue = F("Georg-Baumann-Str.");
        break;
    }
    case 114374:
    {
        returnValue = F("Georg-Baumeister-Str.");
        break;
    }
    case 114375:
    {
        returnValue = F("Georg-Baumgarten-Str.");
        break;
    }
    case 114376:
    {
        returnValue = F("Georg-Bauschmann-Str.");
        break;
    }
    case 114377:
    {
        returnValue = F("Georg-Beck-Str.");
        break;
    }
    case 114378:
    {
        returnValue = F("Georg-Becker-Str.");
        break;
    }
    case 114379:
    {
        returnValue = F("Georg-Bednorz-Str.");
        break;
    }
    case 114380:
    {
        returnValue = F("Georg-Beer-Str.");
        break;
    }
    case 114381:
    {
        returnValue = F("Georg-Beer-Weg");
        break;
    }
    case 114382:
    {
        returnValue = F("Georg-Bellmann-Weg");
        break;
    }
    case 114383:
    {
        returnValue = F("Georg-Benda-Str.");
        break;
    }
    case 114384:
    {
        returnValue = F("Georg-Benjamin-Str.");
        break;
    }
    case 114385:
    {
        returnValue = F("Georg-Beringer-Str.");
        break;
    }
    case 114386:
    {
        returnValue = F("Georg-Bermeter-Str.");
        break;
    }
    case 114387:
    {
        returnValue = F("Georg-Bernd-Str.");
        break;
    }
    case 114388:
    {
        returnValue = F("Georg-Berz-Str.");
        break;
    }
    case 114389:
    {
        returnValue = F("Georg-Besold-Str.");
        break;
    }
    case 114390:
    {
        returnValue = F("Georg-Beutler-Str.");
        break;
    }
    case 114391:
    {
        returnValue = F("Georg-Beyer-Str.");
        break;
    }
    case 114392:
    {
        returnValue = F("Georg-Bezler-Str.");
        break;
    }
    case 114393:
    {
        returnValue = F("Georg-Bichler-Str.");
        break;
    }
    case 114394:
    {
        returnValue = F("Georg-Bickel-Str.");
        break;
    }
    case 114395:
    {
        returnValue = F("Georg-Biehler-Weg");
        break;
    }
    case 114396:
    {
        returnValue = F("Georg-Birkmann-Str.");
        break;
    }
    case 114397:
    {
        returnValue = F("Georg-Bitter-Str.");
        break;
    }
    case 114398:
    {
        returnValue = F("Georg-Biundo-Str.");
        break;
    }
    case 114399:
    {
        returnValue = F("Georg-Blasel-Str.");
        break;
    }
    case 114400:
    {
        returnValue = F("Georg-Blass-Str.");
        break;
    }
    case 114401:
    {
        returnValue = F("Georg-Blaum-Weg");
        break;
    }
    case 114402:
    {
        returnValue = F("Georg-Bleibtreu-Str.");
        break;
    }
    case 114403:
    {
        returnValue = F("Georg-Bleif-Str.");
        break;
    }
    case 114404:
    {
        returnValue = F("Georg-Blume-Hof");
        break;
    }
    case 114405:
    {
        returnValue = F("Georg-Bock-Str.");
        break;
    }
    case 114406:
    {
        returnValue = F("Georg-Bode-Platz");
        break;
    }
    case 114407:
    {
        returnValue = F("Georg-Bodenheim-Str.");
        break;
    }
    case 114408:
    {
        returnValue = F("Georg-Boehringer-Weg");
        break;
    }
    case 114409:
    {
        returnValue = F("Georg-Bonsack-Str.");
        break;
    }
    case 114410:
    {
        returnValue = F("Georg-Brach-Str.");
        break;
    }
    case 114411:
    {
        returnValue = F("Georg-Brandstätter-Str.");
        break;
    }
    case 114412:
    {
        returnValue = F("Georg-Brandt-Weg");
        break;
    }
    case 114413:
    {
        returnValue = F("Georg-Brenninger-Str.");
        break;
    }
    case 114414:
    {
        returnValue = F("Georg-Breusing-Promenade");
        break;
    }
    case 114415:
    {
        returnValue = F("Georg-Brinke-Weg");
        break;
    }
    case 114416:
    {
        returnValue = F("Georg-Brinkmann-Str.");
        break;
    }
    case 114417:
    {
        returnValue = F("Georg-Britting-Str.");
        break;
    }
    case 114418:
    {
        returnValue = F("Georg-Britting-Weg");
        break;
    }
    case 114419:
    {
        returnValue = F("Georg-Bruns-Ring");
        break;
    }
    case 114420:
    {
        returnValue = F("Georg-Brötz-Str.");
        break;
    }
    case 114421:
    {
        returnValue = F("Georg-Brüssel-Str.");
        break;
    }
    case 114422:
    {
        returnValue = F("Georg-Buchner-Str.");
        break;
    }
    case 114423:
    {
        returnValue = F("Georg-Budke-Str.");
        break;
    }
    case 114424:
    {
        returnValue = F("Georg-Burkhardt-Str.");
        break;
    }
    case 114425:
    {
        returnValue = F("Georg-Busch-Str.");
        break;
    }
    case 114426:
    {
        returnValue = F("Georg-Bärsch-Str.");
        break;
    }
    case 114427:
    {
        returnValue = F("Georg-Bäumel-Str.");
        break;
    }
    case 114428:
    {
        returnValue = F("Georg-Bögel-Str.");
        break;
    }
    case 114429:
    {
        returnValue = F("Georg-Böhm-Str.");
        break;
    }
    case 114430:
    {
        returnValue = F("Georg-Böhringer-Weg");
        break;
    }
    case 114431:
    {
        returnValue = F("Georg-Bölts-Str.");
        break;
    }
    case 114432:
    {
        returnValue = F("Georg-Bönning-Str.");
        break;
    }
    case 114433:
    {
        returnValue = F("Georg-Bücherl-Str.");
        break;
    }
    case 114434:
    {
        returnValue = F("Georg-Büchner-Ring");
        break;
    }
    case 114435:
    {
        returnValue = F("Georg-Büchner-Str.");
        break;
    }
    case 114436:
    {
        returnValue = F("Georg-Büchner-Weg");
        break;
    }
    case 114437:
    {
        returnValue = F("Georg-Büttel-Str.");
        break;
    }
    case 114438:
    {
        returnValue = F("Georg-Calixt-Platz");
        break;
    }
    case 114439:
    {
        returnValue = F("Georg-Cantor-Str.");
        break;
    }
    case 114440:
    {
        returnValue = F("Georg-Carsted-Str.");
        break;
    }
    case 114441:
    {
        returnValue = F("Georg-Chors-Weg");
        break;
    }
    case 114442:
    {
        returnValue = F("Georg-Christian-Dieffenbach-Str.");
        break;
    }
    case 114443:
    {
        returnValue = F("Georg-Christian-von-Kessler-Platz");
        break;
    }
    case 114444:
    {
        returnValue = F("Georg-Christians-Str.");
        break;
    }
    case 114445:
    {
        returnValue = F("Georg-Christoph-Bach-Str.");
        break;
    }
    case 114446:
    {
        returnValue = F("Georg-Christoph-Neller-Str.");
        break;
    }
    case 114447:
    {
        returnValue = F("Georg-Clauss-Str.");
        break;
    }
    case 114448:
    {
        returnValue = F("Georg-Coldewey-Pad");
        break;
    }
    case 114449:
    {
        returnValue = F("Georg-Daniel-Teutsch-Str.");
        break;
    }
    case 114450:
    {
        returnValue = F("Georg-Danzer-Weg");
        break;
    }
    case 114451:
    {
        returnValue = F("Georg-Dascher-Str.");
        break;
    }
    case 114452:
    {
        returnValue = F("Georg-Dehio-Weg");
        break;
    }
    case 114453:
    {
        returnValue = F("Georg-Dengler-Str.");
        break;
    }
    case 114454:
    {
        returnValue = F("Georg-Deusch-Str.");
        break;
    }
    case 114455:
    {
        returnValue = F("Georg-Deuschle-Str.");
        break;
    }
    case 114456:
    {
        returnValue = F("Georg-Dewald-Str.");
        break;
    }
    case 114457:
    {
        returnValue = F("Georg-Diederichs-Ring");
        break;
    }
    case 114458:
    {
        returnValue = F("Georg-Diegritz-Str.");
        break;
    }
    case 114459:
    {
        returnValue = F("Georg-Diehl-Str.");
        break;
    }
    case 114460:
    {
        returnValue = F("Georg-Dientzenhofer-Str.");
        break;
    }
    case 114461:
    {
        returnValue = F("Georg-Diermeier-Str.");
        break;
    }
    case 114462:
    {
        returnValue = F("Georg-Dietl-Str.");
        break;
    }
    case 114463:
    {
        returnValue = F("Georg-Dietrich-Bücking-Str.");
        break;
    }
    case 114464:
    {
        returnValue = F("Georg-Doppelhammer-Weg");
        break;
    }
    case 114465:
    {
        returnValue = F("Georg-Dorrer-Str.");
        break;
    }
    case 114466:
    {
        returnValue = F("Georg-Dreke-Ring");
        break;
    }
    case 114467:
    {
        returnValue = F("Georg-Drewsen-Weg");
        break;
    }
    case 114468:
    {
        returnValue = F("Georg-Droste-Str.");
        break;
    }
    case 114469:
    {
        returnValue = F("Georg-Droste-Weg");
        break;
    }
    case 114470:
    {
        returnValue = F("Georg-Dörtenbach-Weg");
        break;
    }
    case 114471:
    {
        returnValue = F("Georg-Eberl-Ring");
        break;
    }
    case 114472:
    {
        returnValue = F("Georg-Eberl-Weg");
        break;
    }
    case 114473:
    {
        returnValue = F("Georg-Eberlein-Str.");
        break;
    }
    case 114474:
    {
        returnValue = F("Georg-Eckert-Str.");
        break;
    }
    case 114475:
    {
        returnValue = F("Georg-Eckl-Str.");
        break;
    }
    case 114476:
    {
        returnValue = F("Georg-Edward-Str.");
        break;
    }
    case 114477:
    {
        returnValue = F("Georg-Eger-Str.");
        break;
    }
    case 114478:
    {
        returnValue = F("Georg-Ehnes-Platz");
        break;
    }
    case 114479:
    {
        returnValue = F("Georg-Ehrenthaler-Str.");
        break;
    }
    case 114480:
    {
        returnValue = F("Georg-Ehret-Str.");
        break;
    }
    case 114481:
    {
        returnValue = F("Georg-Eidmann-Weg");
        break;
    }
    case 114482:
    {
        returnValue = F("Georg-Eisenreich-Str.");
        break;
    }
    case 114483:
    {
        returnValue = F("Georg-Ellenberger-Str.");
        break;
    }
    case 114484:
    {
        returnValue = F("Georg-Elser-Kreisel");
        break;
    }
    case 114485:
    {
        returnValue = F("Georg-Elser-Park");
        break;
    }
    case 114486:
    {
        returnValue = F("Georg-Elser-Platz");
        break;
    }
    case 114487:
    {
        returnValue = F("Georg-Elser-Ring");
        break;
    }
    case 114488:
    {
        returnValue = F("Georg-Elser-Steg");
        break;
    }
    case 114489:
    {
        returnValue = F("Georg-Elser-Str.");
        break;
    }
    case 114490:
    {
        returnValue = F("Georg-Elser-Weg");
        break;
    }
    case 114491:
    {
        returnValue = F("Georg-Engel-Str.");
        break;
    }
    case 114492:
    {
        returnValue = F("Georg-Ernst-Stahl-Str.");
        break;
    }
    case 114493:
    {
        returnValue = F("Georg-Ernst-Str.");
        break;
    }
    case 114494:
    {
        returnValue = F("Georg-Ertel-Str.");
        break;
    }
    case 114495:
    {
        returnValue = F("Georg-Escherich-Str.");
        break;
    }
    case 114496:
    {
        returnValue = F("Georg-Esser-Anlage");
        break;
    }
    case 114497:
    {
        returnValue = F("Georg-Estler-Str.");
        break;
    }
    case 114498:
    {
        returnValue = F("Georg-Ettlinger-Str.");
        break;
    }
    case 114499:
    {
        returnValue = F("Georg-Eucken-Str.");
        break;
    }
    case 114500:
    {
        returnValue = F("Georg-Eydel-Str.");
        break;
    }
    case 114501:
    {
        returnValue = F("Georg-F.-Händel-Weg");
        break;
    }
    case 114502:
    {
        returnValue = F("Georg-Fahrbach-Str.");
        break;
    }
    case 114503:
    {
        returnValue = F("Georg-Falck-Weg");
        break;
    }
    case 114504:
    {
        returnValue = F("Georg-Farbach-Weg");
        break;
    }
    case 114505:
    {
        returnValue = F("Georg-Faustner-Weg");
        break;
    }
    case 114506:
    {
        returnValue = F("Georg-Feil-Str.");
        break;
    }
    case 114507:
    {
        returnValue = F("Georg-Felber-Gasse");
        break;
    }
    case 114508:
    {
        returnValue = F("Georg-Feldmeier-Str.");
        break;
    }
    case 114509:
    {
        returnValue = F("Georg-Fendt-Str.");
        break;
    }
    case 114510:
    {
        returnValue = F("Georg-Feuerbacher-Str.");
        break;
    }
    case 114511:
    {
        returnValue = F("Georg-Feuerstein-Str.");
        break;
    }
    case 114512:
    {
        returnValue = F("Georg-Fey-Str.");
        break;
    }
    case 114513:
    {
        returnValue = F("Georg-Feydt-Weg");
        break;
    }
    case 114514:
    {
        returnValue = F("Georg-Fieseler-Weg");
        break;
    }
    case 114515:
    {
        returnValue = F("Georg-Fischer-Str.");
        break;
    }
    case 114516:
    {
        returnValue = F("Georg-Fischer-Weg");
        break;
    }
    case 114517:
    {
        returnValue = F("Georg-Fitz-Str.");
        break;
    }
    case 114518:
    {
        returnValue = F("Georg-Fladung-Str.");
        break;
    }
    case 114519:
    {
        returnValue = F("Georg-Fleischer-Str.");
        break;
    }
    case 114520:
    {
        returnValue = F("Georg-Flemmig-Str.");
        break;
    }
    case 114521:
    {
        returnValue = F("Georg-Flory-Str.");
        break;
    }
    case 114522:
    {
        returnValue = F("Georg-Forster-Str.");
        break;
    }
    case 114523:
    {
        returnValue = F("Georg-Frank-Str.");
        break;
    }
    case 114524:
    {
        returnValue = F("Georg-Fraunhofer-Str.");
        break;
    }
    case 114525:
    {
        returnValue = F("Georg-Freitag-Str.");
        break;
    }
    case 114526:
    {
        returnValue = F("Georg-Friedmann-Str.");
        break;
    }
    case 114527:
    {
        returnValue = F("Georg-Friedrich-Dentzel-Str.");
        break;
    }
    case 114528:
    {
        returnValue = F("Georg-Friedrich-Hegel-Str.");
        break;
    }
    case 114529:
    {
        returnValue = F("Georg-Friedrich-Händel-Str.");
        break;
    }
    case 114530:
    {
        returnValue = F("Georg-Friedrich-Händel-Weg");
        break;
    }
    case 114531:
    {
        returnValue = F("Georg-Friedrich-Steinmeyer-Str.");
        break;
    }
    case 114532:
    {
        returnValue = F("Georg-Friedrich-Str.");
        break;
    }
    case 114533:
    {
        returnValue = F("Georg-Fröba-Str.");
        break;
    }
    case 114534:
    {
        returnValue = F("Georg-Fröhder-Str.");
        break;
    }
    case 114535:
    {
        returnValue = F("Georg-Fuchs-Str.");
        break;
    }
    case 114536:
    {
        returnValue = F("Georg-Fugmann-Str.");
        break;
    }
    case 114537:
    {
        returnValue = F("Georg-Fuhg-Str.");
        break;
    }
    case 114538:
    {
        returnValue = F("Georg-Färber-Str.");
        break;
    }
    case 114539:
    {
        returnValue = F("Georg-Fürst-Str.");
        break;
    }
    case 114540:
    {
        returnValue = F("Georg-Füßl-Str.");
        break;
    }
    case 114541:
    {
        returnValue = F("Georg-Garst-Str.");
        break;
    }
    case 114542:
    {
        returnValue = F("Georg-Gehring-Str.");
        break;
    }
    case 114543:
    {
        returnValue = F("Georg-Gerbig-Str.");
        break;
    }
    case 114544:
    {
        returnValue = F("Georg-Gerhard-Str.");
        break;
    }
    case 114545:
    {
        returnValue = F("Georg-Geyer-Ring");
        break;
    }
    case 114546:
    {
        returnValue = F("Georg-Giesler-Str.");
        break;
    }
    case 114547:
    {
        returnValue = F("Georg-Gleistein-Str.");
        break;
    }
    case 114548:
    {
        returnValue = F("Georg-Glenz-Str.");
        break;
    }
    case 114549:
    {
        returnValue = F("Georg-Glock-Str.");
        break;
    }
    case 114550:
    {
        returnValue = F("Georg-Glötzl-Str.");
        break;
    }
    case 114551:
    {
        returnValue = F("Georg-Goebel-Str.");
        break;
    }
    case 114552:
    {
        returnValue = F("Georg-Graber-Str.");
        break;
    }
    case 114553:
    {
        returnValue = F("Georg-Graf-Str.");
        break;
    }
    case 114554:
    {
        returnValue = F("Georg-Grahammer-Str.");
        break;
    }
    case 114555:
    {
        returnValue = F("Georg-Graml-Str.");
        break;
    }
    case 114556:
    {
        returnValue = F("Georg-Grammer-Str.");
        break;
    }
    case 114557:
    {
        returnValue = F("Georg-Grashorn-Str.");
        break;
    }
    case 114558:
    {
        returnValue = F("Georg-Grasser-Str.");
        break;
    }
    case 114559:
    {
        returnValue = F("Georg-Grauer-Str.");
        break;
    }
    case 114560:
    {
        returnValue = F("Georg-Greiss-Weg");
        break;
    }
    case 114561:
    {
        returnValue = F("Georg-Greve-Weg");
        break;
    }
    case 114562:
    {
        returnValue = F("Georg-Gries-Str.");
        break;
    }
    case 114563:
    {
        returnValue = F("Georg-Groha-Str.");
        break;
    }
    case 114564:
    {
        returnValue = F("Georg-Grosser-Str.");
        break;
    }
    case 114565:
    {
        returnValue = F("Georg-Große-Str.");
        break;
    }
    case 114566:
    {
        returnValue = F("Georg-Gröbl-Str.");
        break;
    }
    case 114567:
    {
        returnValue = F("Georg-Gröning-Str.");
        break;
    }
    case 114568:
    {
        returnValue = F("Georg-Guggenmoos-Str.");
        break;
    }
    case 114569:
    {
        returnValue = F("Georg-Gugler-Weg");
        break;
    }
    case 114570:
    {
        returnValue = F("Georg-Göpfert-Str.");
        break;
    }
    case 114571:
    {
        returnValue = F("Georg-Görtler-Str.");
        break;
    }
    case 114572:
    {
        returnValue = F("Georg-H.-Macheleid-Str.");
        break;
    }
    case 114573:
    {
        returnValue = F("Georg-Haake-Str.");
        break;
    }
    case 114574:
    {
        returnValue = F("Georg-Haar-Str.");
        break;
    }
    case 114575:
    {
        returnValue = F("Georg-Haas-Str.");
        break;
    }
    case 114576:
    {
        returnValue = F("Georg-Haberland-Str.");
        break;
    }
    case 114577:
    {
        returnValue = F("Georg-Habighorst-Str.");
        break;
    }
    case 114578:
    {
        returnValue = F("Georg-Haccius-Str.");
        break;
    }
    case 114579:
    {
        returnValue = F("Georg-Hacker-Str.");
        break;
    }
    case 114580:
    {
        returnValue = F("Georg-Hafner-Str.");
        break;
    }
    case 114581:
    {
        returnValue = F("Georg-Hagen-Str.");
        break;
    }
    case 114582:
    {
        returnValue = F("Georg-Hagenhoff-Weg");
        break;
    }
    case 114583:
    {
        returnValue = F("Georg-Hager-Str.");
        break;
    }
    case 114584:
    {
        returnValue = F("Georg-Haider-Str.");
        break;
    }
    case 114585:
    {
        returnValue = F("Georg-Haindl-Str.");
        break;
    }
    case 114586:
    {
        returnValue = F("Georg-Hammerl-Str.");
        break;
    }
    case 114587:
    {
        returnValue = F("Georg-Handl-Str.");
        break;
    }
    case 114588:
    {
        returnValue = F("Georg-Hansen-Str.");
        break;
    }
    case 114589:
    {
        returnValue = F("Georg-Hansen-Weg");
        break;
    }
    case 114590:
    {
        returnValue = F("Georg-Hanßmann-Str.");
        break;
    }
    case 114591:
    {
        returnValue = F("Georg-Hardt-Str.");
        break;
    }
    case 114592:
    {
        returnValue = F("Georg-Hartmann-Str.");
        break;
    }
    case 114593:
    {
        returnValue = F("Georg-Hauser-Str.");
        break;
    }
    case 114594:
    {
        returnValue = F("Georg-Hausner-Str.");
        break;
    }
    case 114595:
    {
        returnValue = F("Georg-Heckel-Str.");
        break;
    }
    case 114596:
    {
        returnValue = F("Georg-Hegenauer-Park");
        break;
    }
    case 114597:
    {
        returnValue = F("Georg-Hegenauer-Ring");
        break;
    }
    case 114598:
    {
        returnValue = F("Georg-Heidler-Str.");
        break;
    }
    case 114599:
    {
        returnValue = F("Georg-Heieck-Str.");
        break;
    }
    case 114600:
    {
        returnValue = F("Georg-Heigl-Weg");
        break;
    }
    case 114601:
    {
        returnValue = F("Georg-Heim-Str.");
        break;
    }
    case 114602:
    {
        returnValue = F("Georg-Heinemann-Str.");
        break;
    }
    case 114603:
    {
        returnValue = F("Georg-Heinlein-Str.");
        break;
    }
    case 114604:
    {
        returnValue = F("Georg-Heinrich-Tischbein-Weg");
        break;
    }
    case 114605:
    {
        returnValue = F("Georg-Heiß-Str.");
        break;
    }
    case 114606:
    {
        returnValue = F("Georg-Held-Str.");
        break;
    }
    case 114607:
    {
        returnValue = F("Georg-Heller-Str.");
        break;
    }
    case 114608:
    {
        returnValue = F("Georg-Hemmerlein-Str.");
        break;
    }
    case 114609:
    {
        returnValue = F("Georg-Hennch-Str.");
        break;
    }
    case 114610:
    {
        returnValue = F("Georg-Henning-Str.");
        break;
    }
    case 114611:
    {
        returnValue = F("Georg-Hensel-Weg");
        break;
    }
    case 114612:
    {
        returnValue = F("Georg-Heppel-Str.");
        break;
    }
    case 114613:
    {
        returnValue = F("Georg-Herbert-Str.");
        break;
    }
    case 114614:
    {
        returnValue = F("Georg-Herbst-Str.");
        break;
    }
    case 114615:
    {
        returnValue = F("Georg-Hermann-Allee");
        break;
    }
    case 114616:
    {
        returnValue = F("Georg-Herpich-Platz");
        break;
    }
    case 114617:
    {
        returnValue = F("Georg-Herrmannsdörfer-Ring");
        break;
    }
    case 114618:
    {
        returnValue = F("Georg-Herwegh-Str.");
        break;
    }
    case 114619:
    {
        returnValue = F("Georg-Hettenkofer-Str.");
        break;
    }
    case 114620:
    {
        returnValue = F("Georg-Hetzelein-Str.");
        break;
    }
    case 114621:
    {
        returnValue = F("Georg-Hillker-Str.");
        break;
    }
    case 114622:
    {
        returnValue = F("Georg-Hillmann-Ring");
        break;
    }
    case 114623:
    {
        returnValue = F("Georg-Hipp-Str.");
        break;
    }
    case 114624:
    {
        returnValue = F("Georg-Hirschmann-Anlage");
        break;
    }
    case 114625:
    {
        returnValue = F("Georg-Hirth-Str.");
        break;
    }
    case 114626:
    {
        returnValue = F("Georg-Hitl-Str.");
        break;
    }
    case 114627:
    {
        returnValue = F("Georg-Hoes-Str.");
        break;
    }
    case 114628:
    {
        returnValue = F("Georg-Hofer-Weg");
        break;
    }
    case 114629:
    {
        returnValue = F("Georg-Hoffmann-Str.");
        break;
    }
    case 114630:
    {
        returnValue = F("Georg-Hofmacher-Platz");
        break;
    }
    case 114631:
    {
        returnValue = F("Georg-Hofmann-Str.");
        break;
    }
    case 114632:
    {
        returnValue = F("Georg-Hogen-Ring");
        break;
    }
    case 114633:
    {
        returnValue = F("Georg-Holzbauer-Str.");
        break;
    }
    case 114634:
    {
        returnValue = F("Georg-Holzmüller-Str.");
        break;
    }
    case 114635:
    {
        returnValue = F("Georg-Horn-Str.");
        break;
    }
    case 114636:
    {
        returnValue = F("Georg-Horn-Weg");
        break;
    }
    case 114637:
    {
        returnValue = F("Georg-Horner-Str.");
        break;
    }
    case 114638:
    {
        returnValue = F("Georg-Hosenfeld-Weg");
        break;
    }
    case 114639:
    {
        returnValue = F("Georg-Huber-Str.");
        break;
    }
    case 114640:
    {
        returnValue = F("Georg-Hufnagel-Weg");
        break;
    }
    case 114641:
    {
        returnValue = F("Georg-Hummel-Str.");
        break;
    }
    case 114642:
    {
        returnValue = F("Georg-Huober-Str.");
        break;
    }
    case 114643:
    {
        returnValue = F("Georg-Häfner-Platz");
        break;
    }
    case 114644:
    {
        returnValue = F("Georg-Höcht-Str.");
        break;
    }
    case 114645:
    {
        returnValue = F("Georg-Höfler-Weg");
        break;
    }
    case 114646:
    {
        returnValue = F("Georg-Hörterich-Weg");
        break;
    }
    case 114647:
    {
        returnValue = F("Georg-Hüttner-Platz");
        break;
    }
    case 114648:
    {
        returnValue = F("Georg-Ignatius-Baur-Str.");
        break;
    }
    case 114649:
    {
        returnValue = F("Georg-Ilse-Str.");
        break;
    }
    case 114650:
    {
        returnValue = F("Georg-Itter-Str.");
        break;
    }
    case 114651:
    {
        returnValue = F("Georg-Janßen-Str.");
        break;
    }
    case 114652:
    {
        returnValue = F("Georg-Jedurny-Str.");
        break;
    }
    case 114653:
    {
        returnValue = F("Georg-Jobst-Gasse");
        break;
    }
    case 114654:
    {
        returnValue = F("Georg-Josef-Str.");
        break;
    }
    case 114655:
    {
        returnValue = F("Georg-Judersleben-Str.");
        break;
    }
    case 114656:
    {
        returnValue = F("Georg-Jung-Str.");
        break;
    }
    case 114657:
    {
        returnValue = F("Georg-Jäger-Str.");
        break;
    }
    case 114658:
    {
        returnValue = F("Georg-K.-Glaser-Str.");
        break;
    }
    case 114659:
    {
        returnValue = F("Georg-Kaeß-Str.");
        break;
    }
    case 114660:
    {
        returnValue = F("Georg-Kaffer-Str.");
        break;
    }
    case 114661:
    {
        returnValue = F("Georg-Kaindl-Str.");
        break;
    }
    case 114662:
    {
        returnValue = F("Georg-Kaiser-Platz");
        break;
    }
    case 114663:
    {
        returnValue = F("Georg-Kaiser-Str.");
        break;
    }
    case 114664:
    {
        returnValue = F("Georg-Kandenwein-Str.");
        break;
    }
    case 114665:
    {
        returnValue = F("Georg-Kappus-Str.");
        break;
    }
    case 114666:
    {
        returnValue = F("Georg-Karcher-Str.");
        break;
    }
    case 114667:
    {
        returnValue = F("Georg-Karg-Anlagen");
        break;
    }
    case 114668:
    {
        returnValue = F("Georg-Karg-Weg");
        break;
    }
    case 114669:
    {
        returnValue = F("Georg-Keil-Str.");
        break;
    }
    case 114670:
    {
        returnValue = F("Georg-Kellner-Str.");
        break;
    }
    case 114671:
    {
        returnValue = F("Georg-Kelnhofer-Str.");
        break;
    }
    case 114672:
    {
        returnValue = F("Georg-Kempt-Str.");
        break;
    }
    case 114673:
    {
        returnValue = F("Georg-Kerner-Str.");
        break;
    }
    case 114674:
    {
        returnValue = F("Georg-Kerschensteiner-Str.");
        break;
    }
    case 114675:
    {
        returnValue = F("Georg-Kerschensteiner-Weg");
        break;
    }
    case 114676:
    {
        returnValue = F("Georg-Kiendl-Str.");
        break;
    }
    case 114677:
    {
        returnValue = F("Georg-Kieser-Weg");
        break;
    }
    case 114678:
    {
        returnValue = F("Georg-Kilian-Str.");
        break;
    }
    case 114679:
    {
        returnValue = F("Georg-Kind-Str.");
        break;
    }
    case 114680:
    {
        returnValue = F("Georg-Kirchgäßner-Weg");
        break;
    }
    case 114681:
    {
        returnValue = F("Georg-Klasmann-Str.");
        break;
    }
    case 114682:
    {
        returnValue = F("Georg-Klingenberg-Ufer");
        break;
    }
    case 114683:
    {
        returnValue = F("Georg-Klink-Str.");
        break;
    }
    case 114684:
    {
        returnValue = F("Georg-Kneißl-Str.");
        break;
    }
    case 114685:
    {
        returnValue = F("Georg-Knobeloch-Weg");
        break;
    }
    case 114686:
    {
        returnValue = F("Georg-Knon-Str.");
        break;
    }
    case 114687:
    {
        returnValue = F("Georg-Koberer-Weg");
        break;
    }
    case 114688:
    {
        returnValue = F("Georg-Koch-Str.");
        break;
    }
    case 114689:
    {
        returnValue = F("Georg-Kohl-Str.");
        break;
    }
    case 114690:
    {
        returnValue = F("Georg-Kolb-Str.");
        break;
    }
    case 114691:
    {
        returnValue = F("Georg-Kolbe-Stieg");
        break;
    }
    case 114692:
    {
        returnValue = F("Georg-Kolbe-Str.");
        break;
    }
    case 114693:
    {
        returnValue = F("Georg-Kolbe-Weg");
        break;
    }
    case 114694:
    {
        returnValue = F("Georg-Kollmannsberger-Str.");
        break;
    }
    case 114695:
    {
        returnValue = F("Georg-Kopp-Platz");
        break;
    }
    case 114696:
    {
        returnValue = F("Georg-Krafft-Str.");
        break;
    }
    case 114697:
    {
        returnValue = F("Georg-Kraft-Weg");
        break;
    }
    case 114698:
    {
        returnValue = F("Georg-Kramer-Str.");
        break;
    }
    case 114699:
    {
        returnValue = F("Georg-Krammel-Str.");
        break;
    }
    case 114700:
    {
        returnValue = F("Georg-Kraushaar-Str.");
        break;
    }
    case 114701:
    {
        returnValue = F("Georg-Krauß-Str.");
        break;
    }
    case 114702:
    {
        returnValue = F("Georg-Kresse-Weg");
        break;
    }
    case 114703:
    {
        returnValue = F("Georg-Kreupl-Weg");
        break;
    }
    case 114704:
    {
        returnValue = F("Georg-Kreuzberg-Str.");
        break;
    }
    case 114705:
    {
        returnValue = F("Georg-Kreuzberg-Weg");
        break;
    }
    case 114706:
    {
        returnValue = F("Georg-Kropp-Str.");
        break;
    }
    case 114707:
    {
        returnValue = F("Georg-Krug-Str.");
        break;
    }
    case 114708:
    {
        returnValue = F("Georg-Krämer-Weg");
        break;
    }
    case 114709:
    {
        returnValue = F("Georg-Krücke-Str.");
        break;
    }
    case 114710:
    {
        returnValue = F("Georg-Kurtze-Str.");
        break;
    }
    case 114711:
    {
        returnValue = F("Georg-Käß-Platz");
        break;
    }
    case 114712:
    {
        returnValue = F("Georg-Käß-Str.");
        break;
    }
    case 114713:
    {
        returnValue = F("Georg-Köhl-Str.");
        break;
    }
    case 114714:
    {
        returnValue = F("Georg-Kölbl-Steg");
        break;
    }
    case 114715:
    {
        returnValue = F("Georg-König-Str.");
        break;
    }
    case 114716:
    {
        returnValue = F("Georg-Köpf-Weg");
        break;
    }
    case 114717:
    {
        returnValue = F("Georg-Kühberger-Str.");
        break;
    }
    case 114718:
    {
        returnValue = F("Georg-Kühne-Str.");
        break;
    }
    case 114719:
    {
        returnValue = F("Georg-Kürzinger-Str.");
        break;
    }
    case 114720:
    {
        returnValue = F("Georg-Lacher-Str.");
        break;
    }
    case 114721:
    {
        returnValue = F("Georg-Lammers-Str.");
        break;
    }
    case 114722:
    {
        returnValue = F("Georg-Lammers-Weg");
        break;
    }
    case 114723:
    {
        returnValue = F("Georg-Landgraf-Platz");
        break;
    }
    case 114724:
    {
        returnValue = F("Georg-Landgraf-Str.");
        break;
    }
    case 114725:
    {
        returnValue = F("Georg-Lang-Str.");
        break;
    }
    case 114726:
    {
        returnValue = F("Georg-Langheinrich-Str.");
        break;
    }
    case 114727:
    {
        returnValue = F("Georg-Lauber-Str.");
        break;
    }
    case 114728:
    {
        returnValue = F("Georg-Lauer-Str.");
        break;
    }
    case 114729:
    {
        returnValue = F("Georg-Lechleiter-Platz");
        break;
    }
    case 114730:
    {
        returnValue = F("Georg-Ledebour-Str.");
        break;
    }
    case 114731:
    {
        returnValue = F("Georg-Leder-Str.");
        break;
    }
    case 114732:
    {
        returnValue = F("Georg-Lehmann-Bogen");
        break;
    }
    case 114733:
    {
        returnValue = F("Georg-Leinfelder-Str.");
        break;
    }
    case 114734:
    {
        returnValue = F("Georg-Leipold-Str.");
        break;
    }
    case 114735:
    {
        returnValue = F("Georg-Leisgang-Str.");
        break;
    }
    case 114736:
    {
        returnValue = F("Georg-Leißner-Str.");
        break;
    }
    case 114737:
    {
        returnValue = F("Georg-Lengler-Str.");
        break;
    }
    case 114738:
    {
        returnValue = F("Georg-Leppien-Str.");
        break;
    }
    case 114739:
    {
        returnValue = F("Georg-Leubuscher-Str.");
        break;
    }
    case 114740:
    {
        returnValue = F("Georg-Linner-Weg");
        break;
    }
    case 114741:
    {
        returnValue = F("Georg-Loher-Str.");
        break;
    }
    case 114742:
    {
        returnValue = F("Georg-Lohmann-Str.");
        break;
    }
    case 114743:
    {
        returnValue = F("Georg-Louis-Ring");
        break;
    }
    case 114744:
    {
        returnValue = F("Georg-Ludwig-Hartig Park");
        break;
    }
    case 114745:
    {
        returnValue = F("Georg-Ludwig-Krebs-Str.");
        break;
    }
    case 114746:
    {
        returnValue = F("Georg-Ludwig-Menzer-Str.");
        break;
    }
    case 114747:
    {
        returnValue = F("Georg-Ludwig-Str.");
        break;
    }
    case 114748:
    {
        returnValue = F("Georg-Löffler-Weg");
        break;
    }
    case 114749:
    {
        returnValue = F("Georg-Löhlein-Str.");
        break;
    }
    case 114750:
    {
        returnValue = F("Georg-Löwel-Str.");
        break;
    }
    case 114751:
    {
        returnValue = F("Georg-Mader-Str.");
        break;
    }
    case 114752:
    {
        returnValue = F("Georg-Mall-Brücke");
        break;
    }
    case 114753:
    {
        returnValue = F("Georg-Mangold-Str.");
        break;
    }
    case 114754:
    {
        returnValue = F("Georg-Mann-Str.");
        break;
    }
    case 114755:
    {
        returnValue = F("Georg-Mark-Str.");
        break;
    }
    case 114756:
    {
        returnValue = F("Georg-Martin-Kober-Str.");
        break;
    }
    case 114757:
    {
        returnValue = F("Georg-Marwede-Str.");
        break;
    }
    case 114758:
    {
        returnValue = F("Georg-Masel-Str.");
        break;
    }
    case 114759:
    {
        returnValue = F("Georg-Matern-Weg");
        break;
    }
    case 114760:
    {
        returnValue = F("Georg-Mathes-Str.");
        break;
    }
    case 114761:
    {
        returnValue = F("Georg-Maurer-Str.");
        break;
    }
    case 114762:
    {
        returnValue = F("Georg-Maus-Str.");
        break;
    }
    case 114763:
    {
        returnValue = F("Georg-Mayer-Str.");
        break;
    }
    case 114764:
    {
        returnValue = F("Georg-Mayr-Str.");
        break;
    }
    case 114765:
    {
        returnValue = F("Georg-Mayr-Weg");
        break;
    }
    case 114766:
    {
        returnValue = F("Georg-Mechtersheimer-Str.");
        break;
    }
    case 114767:
    {
        returnValue = F("Georg-Meier-Str.");
        break;
    }
    case 114768:
    {
        returnValue = F("Georg-Meilinger-Str.");
        break;
    }
    case 114769:
    {
        returnValue = F("Georg-Meister-Str.");
        break;
    }
    case 114770:
    {
        returnValue = F("Georg-Meistermann-Str.");
        break;
    }
    case 114771:
    {
        returnValue = F("Georg-Menz-Weg");
        break;
    }
    case 114772:
    {
        returnValue = F("Georg-Merz-Str.");
        break;
    }
    case 114773:
    {
        returnValue = F("Georg-Messmer-Str.");
        break;
    }
    case 114774:
    {
        returnValue = F("Georg-Metz-Str.");
        break;
    }
    case 114775:
    {
        returnValue = F("Georg-Metzler-Str.");
        break;
    }
    case 114776:
    {
        returnValue = F("Georg-Minner-Str.");
        break;
    }
    case 114777:
    {
        returnValue = F("Georg-Mischlich-Platz");
        break;
    }
    case 114778:
    {
        returnValue = F("Georg-Moll-Weg");
        break;
    }
    case 114779:
    {
        returnValue = F("Georg-Monsch-Anlage");
        break;
    }
    case 114780:
    {
        returnValue = F("Georg-Moritz-Stöcker-Str.");
        break;
    }
    case 114781:
    {
        returnValue = F("Georg-Morlok-Str.");
        break;
    }
    case 114782:
    {
        returnValue = F("Georg-Moser-Str.");
        break;
    }
    case 114783:
    {
        returnValue = F("Georg-Muche-Platz");
        break;
    }
    case 114784:
    {
        returnValue = F("Georg-Muche-Str.");
        break;
    }
    case 114785:
    {
        returnValue = F("Georg-Muche-Weg");
        break;
    }
    case 114786:
    {
        returnValue = F("Georg-Mummenthey-Weg");
        break;
    }
    case 114787:
    {
        returnValue = F("Georg-Murmann-Str.");
        break;
    }
    case 114788:
    {
        returnValue = F("Georg-Möller-Weg");
        break;
    }
    case 114789:
    {
        returnValue = F("Georg-Mühleisen-Str.");
        break;
    }
    case 114790:
    {
        returnValue = F("Georg-Müller-Str.");
        break;
    }
    case 114791:
    {
        returnValue = F("Georg-Müller-Weg");
        break;
    }
    case 114792:
    {
        returnValue = F("Georg-Münch-Str.");
        break;
    }
    case 114793:
    {
        returnValue = F("Georg-Nachtmann-Weg");
        break;
    }
    case 114794:
    {
        returnValue = F("Georg-Nadler-Str.");
        break;
    }
    case 114795:
    {
        returnValue = F("Georg-Nagler-Str.");
        break;
    }
    case 114796:
    {
        returnValue = F("Georg-Nave-Str.");
        break;
    }
    case 114797:
    {
        returnValue = F("Georg-Neidlinger-Str.");
        break;
    }
    case 114798:
    {
        returnValue = F("Georg-Neuhäusler-Weg");
        break;
    }
    case 114799:
    {
        returnValue = F("Georg-Neumaier-Str.");
        break;
    }
    case 114800:
    {
        returnValue = F("Georg-Neumann-Platz");
        break;
    }
    case 114801:
    {
        returnValue = F("Georg-Neumann-Str.");
        break;
    }
    case 114802:
    {
        returnValue = F("Georg-Neumark-Str.");
        break;
    }
    case 114803:
    {
        returnValue = F("Georg-Nickel-Str.");
        break;
    }
    case 114804:
    {
        returnValue = F("Georg-Nikol-Str.");
        break;
    }
    case 114805:
    {
        returnValue = F("Georg-Nozon-Weg");
        break;
    }
    case 114806:
    {
        returnValue = F("Georg-Nuß-Str.");
        break;
    }
    case 114807:
    {
        returnValue = F("Georg-Nützel-Str.");
        break;
    }
    case 114808:
    {
        returnValue = F("Georg-Oberer-Weg");
        break;
    }
    case 114809:
    {
        returnValue = F("Georg-Oberhäußer-Str.");
        break;
    }
    case 114810:
    {
        returnValue = F("Georg-Odemer-Str.");
        break;
    }
    case 114811:
    {
        returnValue = F("Georg-Oegg-Str.");
        break;
    }
    case 114812:
    {
        returnValue = F("Georg-Oeggl-Str.");
        break;
    }
    case 114813:
    {
        returnValue = F("Georg-Oest-Str.");
        break;
    }
    case 114814:
    {
        returnValue = F("Georg-Ohm-Str.");
        break;
    }
    case 114815:
    {
        returnValue = F("Georg-Ohm-Weg");
        break;
    }
    case 114816:
    {
        returnValue = F("Georg-Opel-Str.");
        break;
    }
    case 114817:
    {
        returnValue = F("Georg-Opper-Str.");
        break;
    }
    case 114818:
    {
        returnValue = F("Georg-Ostermeyer-Str.");
        break;
    }
    case 114819:
    {
        returnValue = F("Georg-Osterried-Str.");
        break;
    }
    case 114820:
    {
        returnValue = F("Georg-Otterbein-Str.");
        break;
    }
    case 114821:
    {
        returnValue = F("Georg-Pabst-Str.");
        break;
    }
    case 114822:
    {
        returnValue = F("Georg-Pacher-Str.");
        break;
    }
    case 114823:
    {
        returnValue = F("Georg-Pacher-Weg");
        break;
    }
    case 114824:
    {
        returnValue = F("Georg-Penning-Platz");
        break;
    }
    case 114825:
    {
        returnValue = F("Georg-Peter-Süß-Str.");
        break;
    }
    case 114826:
    {
        returnValue = F("Georg-Peter-Weimar-Str.");
        break;
    }
    case 114827:
    {
        returnValue = F("Georg-Pfaff-Str.");
        break;
    }
    case 114828:
    {
        returnValue = F("Georg-Pfahler-Str.");
        break;
    }
    case 114829:
    {
        returnValue = F("Georg-Pfandzelter-Str.");
        break;
    }
    case 114830:
    {
        returnValue = F("Georg-Pfeffer-Str.");
        break;
    }
    case 114831:
    {
        returnValue = F("Georg-Pfingsten-Str.");
        break;
    }
    case 114832:
    {
        returnValue = F("Georg-Pfingsten-Weg");
        break;
    }
    case 114833:
    {
        returnValue = F("Georg-Pfotzer-Str.");
        break;
    }
    case 114834:
    {
        returnValue = F("Georg-Pfründt-Str.");
        break;
    }
    case 114835:
    {
        returnValue = F("Georg-Pfäfflin-Weg");
        break;
    }
    case 114836:
    {
        returnValue = F("Georg-Philipp-Gail-Str.");
        break;
    }
    case 114837:
    {
        returnValue = F("Georg-Philipp-Telemann-Platz");
        break;
    }
    case 114838:
    {
        returnValue = F("Georg-Philipp-Telemann-Str.");
        break;
    }
    case 114839:
    {
        returnValue = F("Georg-Philipp-Wörlen-Str.");
        break;
    }
    case 114840:
    {
        returnValue = F("Georg-Pingler-Str.");
        break;
    }
    case 114841:
    {
        returnValue = F("Georg-Pohl-Str.");
        break;
    }
    case 114842:
    {
        returnValue = F("Georg-Popp-Str.");
        break;
    }
    case 114843:
    {
        returnValue = F("Georg-Poppe-Str.");
        break;
    }
    case 114844:
    {
        returnValue = F("Georg-Pressmar-Str.");
        break;
    }
    case 114845:
    {
        returnValue = F("Georg-Preu-Str.");
        break;
    }
    case 114846:
    {
        returnValue = F("Georg-Pröbst-Weg");
        break;
    }
    case 114847:
    {
        returnValue = F("Georg-Pöschl-Str.");
        break;
    }
    case 114848:
    {
        returnValue = F("Georg-Queri-Ring");
        break;
    }
    case 114849:
    {
        returnValue = F("Georg-Queri-Str.");
        break;
    }
    case 114850:
    {
        returnValue = F("Georg-Queri-Weg");
        break;
    }
    case 114851:
    {
        returnValue = F("Georg-Raab-Str.");
        break;
    }
    case 114852:
    {
        returnValue = F("Georg-Rapp-Str.");
        break;
    }
    case 114853:
    {
        returnValue = F("Georg-Rascher-Str.");
        break;
    }
    case 114854:
    {
        returnValue = F("Georg-Rauchenberger-Str.");
        break;
    }
    case 114855:
    {
        returnValue = F("Georg-Rauser-Str.");
        break;
    }
    case 114856:
    {
        returnValue = F("Georg-Rawe-Str.");
        break;
    }
    case 114857:
    {
        returnValue = F("Georg-Regel-Str.");
        break;
    }
    case 114858:
    {
        returnValue = F("Georg-Regler-Weg");
        break;
    }
    case 114859:
    {
        returnValue = F("Georg-Rehfuß-Weg");
        break;
    }
    case 114860:
    {
        returnValue = F("Georg-Reichardt-Str.");
        break;
    }
    case 114861:
    {
        returnValue = F("Georg-Reimann-Str.");
        break;
    }
    case 114862:
    {
        returnValue = F("Georg-Reimer-Str.");
        break;
    }
    case 114863:
    {
        returnValue = F("Georg-Reinecke-Str.");
        break;
    }
    case 114864:
    {
        returnValue = F("Georg-Reinhold-Kerner-Platz");
        break;
    }
    case 114865:
    {
        returnValue = F("Georg-Reinke-Str.");
        break;
    }
    case 114866:
    {
        returnValue = F("Georg-Reiser-Str.");
        break;
    }
    case 114867:
    {
        returnValue = F("Georg-Reiter-Str.");
        break;
    }
    case 114868:
    {
        returnValue = F("Georg-Reiß-Str.");
        break;
    }
    case 114869:
    {
        returnValue = F("Georg-Richard-Roeß-Str.");
        break;
    }
    case 114870:
    {
        returnValue = F("Georg-Richard-Röß-Str.");
        break;
    }
    case 114871:
    {
        returnValue = F("Georg-Riedel-Str.");
        break;
    }
    case 114872:
    {
        returnValue = F("Georg-Rieder-Str.");
        break;
    }
    case 114873:
    {
        returnValue = F("Georg-Riedl-Weg");
        break;
    }
    case 114874:
    {
        returnValue = F("Georg-Rieger-Str.");
        break;
    }
    case 114875:
    {
        returnValue = F("Georg-Rieser-Str.");
        break;
    }
    case 114876:
    {
        returnValue = F("Georg-Ring-Weg");
        break;
    }
    case 114877:
    {
        returnValue = F("Georg-Rinser-Weg");
        break;
    }
    case 114878:
    {
        returnValue = F("Georg-Ritter-Str.");
        break;
    }
    case 114879:
    {
        returnValue = F("Georg-Rose-Str.");
        break;
    }
    case 114880:
    {
        returnValue = F("Georg-Rost-Str.");
        break;
    }
    case 114881:
    {
        returnValue = F("Georg-Roth-Str.");
        break;
    }
    case 114882:
    {
        returnValue = F("Georg-Rothgiesser-Park");
        break;
    }
    case 114883:
    {
        returnValue = F("Georg-Rothgießer-Str.");
        break;
    }
    case 114884:
    {
        returnValue = F("Georg-Rott-Str.");
        break;
    }
    case 114885:
    {
        returnValue = F("Georg-Ruhland-Str.");
        break;
    }
    case 114886:
    {
        returnValue = F("Georg-Ruseler-Str.");
        break;
    }
    case 114887:
    {
        returnValue = F("Georg-Röder-Str.");
        break;
    }
    case 114888:
    {
        returnValue = F("Georg-Röhm-Str.");
        break;
    }
    case 114889:
    {
        returnValue = F("Georg-Rötzer-Str.");
        break;
    }
    case 114890:
    {
        returnValue = F("Georg-Rückert-Str.");
        break;
    }
    case 114891:
    {
        returnValue = F("Georg-Rückert-Weg");
        break;
    }
    case 114892:
    {
        returnValue = F("Georg-Rümpler-Weg");
        break;
    }
    case 114893:
    {
        returnValue = F("Georg-Sachse-Str.");
        break;
    }
    case 114894:
    {
        returnValue = F("Georg-Sagstetter-Str.");
        break;
    }
    case 114895:
    {
        returnValue = F("Georg-Sander-Ring");
        break;
    }
    case 114896:
    {
        returnValue = F("Georg-Sandmann-Str.");
        break;
    }
    case 114897:
    {
        returnValue = F("Georg-Sasse-Str.");
        break;
    }
    case 114898:
    {
        returnValue = F("Georg-Schacht-Str.");
        break;
    }
    case 114899:
    {
        returnValue = F("Georg-Schaeffler-Str.");
        break;
    }
    case 114900:
    {
        returnValue = F("Georg-Schambeck-Str.");
        break;
    }
    case 114901:
    {
        returnValue = F("Georg-Schantz-Str.");
        break;
    }
    case 114902:
    {
        returnValue = F("Georg-Scharfenberg-Platz");
        break;
    }
    case 114903:
    {
        returnValue = F("Georg-Schauer-Weg");
        break;
    }
    case 114904:
    {
        returnValue = F("Georg-Scheerer-Str.");
        break;
    }
    case 114905:
    {
        returnValue = F("Georg-Scheffler-Str.");
        break;
    }
    case 114906:
    {
        returnValue = F("Georg-Scheller-Str.");
        break;
    }
    case 114907:
    {
        returnValue = F("Georg-Scherber-Str.");
        break;
    }
    case 114908:
    {
        returnValue = F("Georg-Scherer-Str.");
        break;
    }
    case 114909:
    {
        returnValue = F("Georg-Scheu-Str.");
        break;
    }
    case 114910:
    {
        returnValue = F("Georg-Scheuing-Str.");
        break;
    }
    case 114911:
    {
        returnValue = F("Georg-Scheßl-Weg");
        break;
    }
    case 114912:
    {
        returnValue = F("Georg-Schienlin-Weg");
        break;
    }
    case 114913:
    {
        returnValue = F("Georg-Schiffer-Str.");
        break;
    }
    case 114914:
    {
        returnValue = F("Georg-Schinbain-Str.");
        break;
    }
    case 114915:
    {
        returnValue = F("Georg-Schipper-Str.");
        break;
    }
    case 114916:
    {
        returnValue = F("Georg-Schirmer-Str.");
        break;
    }
    case 114917:
    {
        returnValue = F("Georg-Schlaegel-Str.");
        break;
    }
    case 114918:
    {
        returnValue = F("Georg-Schlagbauer-Str.");
        break;
    }
    case 114919:
    {
        returnValue = F("Georg-Schlatter-Str.");
        break;
    }
    case 114920:
    {
        returnValue = F("Georg-Schlesinger-Str.");
        break;
    }
    case 114921:
    {
        returnValue = F("Georg-Schlosser-Str.");
        break;
    }
    case 114922:
    {
        returnValue = F("Georg-Schlösser-Str.");
        break;
    }
    case 114923:
    {
        returnValue = F("Georg-Schmid-Ring");
        break;
    }
    case 114924:
    {
        returnValue = F("Georg-Schmid-Weg");
        break;
    }
    case 114925:
    {
        returnValue = F("Georg-Schmider-Str.");
        break;
    }
    case 114926:
    {
        returnValue = F("Georg-Schmitt-Platz");
        break;
    }
    case 114927:
    {
        returnValue = F("Georg-Schmitt-Weg");
        break;
    }
    case 114928:
    {
        returnValue = F("Georg-Schmitz-Str.");
        break;
    }
    case 114929:
    {
        returnValue = F("Georg-Schnadel-Weg");
        break;
    }
    case 114930:
    {
        returnValue = F("Georg-Schneider-Str.");
        break;
    }
    case 114931:
    {
        returnValue = F("Georg-Schollmayer-Weg");
        break;
    }
    case 114932:
    {
        returnValue = F("Georg-Scholtheis-Weg");
        break;
    }
    case 114933:
    {
        returnValue = F("Georg-Scholz-Str.");
        break;
    }
    case 114934:
    {
        returnValue = F("Georg-Schorpp-Str.");
        break;
    }
    case 114935:
    {
        returnValue = F("Georg-Schrank-Str.");
        break;
    }
    case 114936:
    {
        returnValue = F("Georg-Schrankl-Ring");
        break;
    }
    case 114937:
    {
        returnValue = F("Georg-Schröbel-Weg");
        break;
    }
    case 114938:
    {
        returnValue = F("Georg-Schudt-Str.");
        break;
    }
    case 114939:
    {
        returnValue = F("Georg-Schuhmann-Str.");
        break;
    }
    case 114940:
    {
        returnValue = F("Georg-Schultz-Str.");
        break;
    }
    case 114941:
    {
        returnValue = F("Georg-Schumacher-Str.");
        break;
    }
    case 114942:
    {
        returnValue = F("Georg-Schumann-/Lindenthaler Str.");
        break;
    }
    case 114943:
    {
        returnValue = F("Georg-Schumann-Platz");
        break;
    }
    case 114944:
    {
        returnValue = F("Georg-Schumann-Str.");
        break;
    }
    case 114945:
    {
        returnValue = F("Georg-Schumann-Weg");
        break;
    }
    case 114946:
    {
        returnValue = F("Georg-Schurr-Str.");
        break;
    }
    case 114947:
    {
        returnValue = F("Georg-Schuster-Str.");
        break;
    }
    case 114948:
    {
        returnValue = F("Georg-Schwab-Str.");
        break;
    }
    case 114949:
    {
        returnValue = F("Georg-Schwaighofer-Str.");
        break;
    }
    case 114950:
    {
        returnValue = F("Georg-Schwank-Weg");
        break;
    }
    case 114951:
    {
        returnValue = F("Georg-Schwarz-Str.");
        break;
    }
    case 114952:
    {
        returnValue = F("Georg-Schweiger-Str.");
        break;
    }
    case 114953:
    {
        returnValue = F("Georg-Schweiger-Weg");
        break;
    }
    case 114954:
    {
        returnValue = F("Georg-Schweinfurth-Str.");
        break;
    }
    case 114955:
    {
        returnValue = F("Georg-Schwemann-Str.");
        break;
    }
    case 114956:
    {
        returnValue = F("Georg-Schwendemann-Str.");
        break;
    }
    case 114957:
    {
        returnValue = F("Georg-Schyd-Weg");
        break;
    }
    case 114958:
    {
        returnValue = F("Georg-Schäfer-Str.");
        break;
    }
    case 114959:
    {
        returnValue = F("Georg-Schäffer-Str.");
        break;
    }
    case 114960:
    {
        returnValue = F("Georg-Schöner-Str.");
        break;
    }
    case 114961:
    {
        returnValue = F("Georg-Schüler-Platz");
        break;
    }
    case 114962:
    {
        returnValue = F("Georg-Schütte-Platz");
        break;
    }
    case 114963:
    {
        returnValue = F("Georg-Seebeck-Str.");
        break;
    }
    case 114964:
    {
        returnValue = F("Georg-Seidel-Str.");
        break;
    }
    case 114965:
    {
        returnValue = F("Georg-Seip-Str.");
        break;
    }
    case 114966:
    {
        returnValue = F("Georg-Seitz-Str.");
        break;
    }
    case 114967:
    {
        returnValue = F("Georg-Sello-Weg");
        break;
    }
    case 114968:
    {
        returnValue = F("Georg-Sennert-Platz");
        break;
    }
    case 114969:
    {
        returnValue = F("Georg-Seyfang-Str.");
        break;
    }
    case 114970:
    {
        returnValue = F("Georg-Siemer-Str.");
        break;
    }
    case 114971:
    {
        returnValue = F("Georg-Silberhorn-Str.");
        break;
    }
    case 114972:
    {
        returnValue = F("Georg-Simler-Str.");
        break;
    }
    case 114973:
    {
        returnValue = F("Georg-Simon-Ohm-Str.");
        break;
    }
    case 114974:
    {
        returnValue = F("Georg-Simon-Ohm-Weg");
        break;
    }
    case 114975:
    {
        returnValue = F("Georg-Singer-Str.");
        break;
    }
    case 114976:
    {
        returnValue = F("Georg-Sippel-Weg");
        break;
    }
    case 114977:
    {
        returnValue = F("Georg-Sittig-Str.");
        break;
    }
    case 114978:
    {
        returnValue = F("Georg-Sitzenstuhl-Str.");
        break;
    }
    case 114979:
    {
        returnValue = F("Georg-Soltwedel-Str.");
        break;
    }
    case 114980:
    {
        returnValue = F("Georg-Spackeler-Str.");
        break;
    }
    case 114981:
    {
        returnValue = F("Georg-Spang-Str.");
        break;
    }
    case 114982:
    {
        returnValue = F("Georg-Spengler-Str.");
        break;
    }
    case 114983:
    {
        returnValue = F("Georg-Speyer-Str.");
        break;
    }
    case 114984:
    {
        returnValue = F("Georg-Spillner-Weg");
        break;
    }
    case 114985:
    {
        returnValue = F("Georg-Spohn-Str.");
        break;
    }
    case 114986:
    {
        returnValue = F("Georg-Spohr-Str.");
        break;
    }
    case 114987:
    {
        returnValue = F("Georg-Staab-Str.");
        break;
    }
    case 114988:
    {
        returnValue = F("Georg-Staber-Ring");
        break;
    }
    case 114989:
    {
        returnValue = F("Georg-Stadler-Str.");
        break;
    }
    case 114990:
    {
        returnValue = F("Georg-Stang Ring");
        break;
    }
    case 114991:
    {
        returnValue = F("Georg-Stefan-Str.");
        break;
    }
    case 114992:
    {
        returnValue = F("Georg-Stegschuster-Str.");
        break;
    }
    case 114993:
    {
        returnValue = F("Georg-Stein-Str.");
        break;
    }
    case 114994:
    {
        returnValue = F("Georg-Steinbrenner-Str.");
        break;
    }
    case 114995:
    {
        returnValue = F("Georg-Steinhart-Str.");
        break;
    }
    case 114996:
    {
        returnValue = F("Georg-Stelling-Str.");
        break;
    }
    case 114997:
    {
        returnValue = F("Georg-Steuler-Str.");
        break;
    }
    case 114998:
    {
        returnValue = F("Georg-Stieler-Str.");
        break;
    }
    case 114999:
    {
        returnValue = F("Georg-Stieß-Str.");
        break;
    }
    case 115000:
    {
        returnValue = F("Georg-Storm-Str.");
        break;
    }
    case 115001:
    {
        returnValue = F("Georg-Strobel-Str.");
        break;
    }
    case 115002:
    {
        returnValue = F("Georg-Strohmeier-Str.");
        break;
    }
    case 115003:
    {
        returnValue = F("Georg-Strube-Str.");
        break;
    }
    case 115004:
    {
        returnValue = F("Georg-Sturm-Str.");
        break;
    }
    case 115005:
    {
        returnValue = F("Georg-Stöckel-Str.");
        break;
    }
    case 115006:
    {
        returnValue = F("Georg-Stöver-Weg");
        break;
    }
    case 115007:
    {
        returnValue = F("Georg-Stütz-Str.");
        break;
    }
    case 115008:
    {
        returnValue = F("Georg-Tanner-Str.");
        break;
    }
    case 115009:
    {
        returnValue = F("Georg-Tannstätter-Str.");
        break;
    }
    case 115010:
    {
        returnValue = F("Georg-Tappert-Weg");
        break;
    }
    case 115011:
    {
        returnValue = F("Georg-Taulke-Allee");
        break;
    }
    case 115012:
    {
        returnValue = F("Georg-Textor-Weg");
        break;
    }
    case 115013:
    {
        returnValue = F("Georg-Theilmann-Str.");
        break;
    }
    case 115014:
    {
        returnValue = F("Georg-Thiel-Str.");
        break;
    }
    case 115015:
    {
        returnValue = F("Georg-Thorn-Str.");
        break;
    }
    case 115016:
    {
        returnValue = F("Georg-Thöne-Str.");
        break;
    }
    case 115017:
    {
        returnValue = F("Georg-Tischner-Str.");
        break;
    }
    case 115018:
    {
        returnValue = F("Georg-Todt-Str.");
        break;
    }
    case 115019:
    {
        returnValue = F("Georg-Traute-Ring");
        break;
    }
    case 115020:
    {
        returnValue = F("Georg-Treber-Str.");
        break;
    }
    case 115021:
    {
        returnValue = F("Georg-Treu-Weg");
        break;
    }
    case 115022:
    {
        returnValue = F("Georg-Türk-Str.");
        break;
    }
    case 115023:
    {
        returnValue = F("Georg-Unkelhäußer-Str.");
        break;
    }
    case 115024:
    {
        returnValue = F("Georg-Urban-Str.");
        break;
    }
    case 115025:
    {
        returnValue = F("Georg-Utz-Kreisel");
        break;
    }
    case 115026:
    {
        returnValue = F("Georg-Vahrenhorst-Weg");
        break;
    }
    case 115027:
    {
        returnValue = F("Georg-Vetter-Str.");
        break;
    }
    case 115028:
    {
        returnValue = F("Georg-Viktor-Str.");
        break;
    }
    case 115029:
    {
        returnValue = F("Georg-Viktor-Weber-Str.");
        break;
    }
    case 115030:
    {
        returnValue = F("Georg-Vogel-Str.");
        break;
    }
    case 115031:
    {
        returnValue = F("Georg-Voigt-Str.");
        break;
    }
    case 115032:
    {
        returnValue = F("Georg-Voß-Weg");
        break;
    }
    case 115033:
    {
        returnValue = F("Georg-Wagner-Str.");
        break;
    }
    case 115034:
    {
        returnValue = F("Georg-Wagner-Weg");
        break;
    }
    case 115035:
    {
        returnValue = F("Georg-Waldau-Str.");
        break;
    }
    case 115036:
    {
        returnValue = F("Georg-Walter-Str.");
        break;
    }
    case 115037:
    {
        returnValue = F("Georg-Walther-Str.");
        break;
    }
    case 115038:
    {
        returnValue = F("Georg-Warneke-Weg");
        break;
    }
    case 115039:
    {
        returnValue = F("Georg-Warring-Str.");
        break;
    }
    case 115040:
    {
        returnValue = F("Georg-Weber-Str.");
        break;
    }
    case 115041:
    {
        returnValue = F("Georg-Weerth-Str.");
        break;
    }
    case 115042:
    {
        returnValue = F("Georg-Wehsarg-Str.");
        break;
    }
    case 115043:
    {
        returnValue = F("Georg-Weibhauser-Str.");
        break;
    }
    case 115044:
    {
        returnValue = F("Georg-Weidner-Str.");
        break;
    }
    case 115045:
    {
        returnValue = F("Georg-Weierbacher-Str.");
        break;
    }
    case 115046:
    {
        returnValue = F("Georg-Weingardt-Str.");
        break;
    }
    case 115047:
    {
        returnValue = F("Georg-Weinhart-Str.");
        break;
    }
    case 115048:
    {
        returnValue = F("Georg-Weinmann-Weg");
        break;
    }
    case 115049:
    {
        returnValue = F("Georg-Weissinger-Str.");
        break;
    }
    case 115050:
    {
        returnValue = F("Georg-Weist-Str.");
        break;
    }
    case 115051:
    {
        returnValue = F("Georg-Weiß-Str.");
        break;
    }
    case 115052:
    {
        returnValue = F("Georg-Weiß-Weg");
        break;
    }
    case 115053:
    {
        returnValue = F("Georg-Well-Str.");
        break;
    }
    case 115054:
    {
        returnValue = F("Georg-Wendtland-Weg");
        break;
    }
    case 115055:
    {
        returnValue = F("Georg-Wenzel-Str.");
        break;
    }
    case 115056:
    {
        returnValue = F("Georg-Wernecke-Str.");
        break;
    }
    case 115057:
    {
        returnValue = F("Georg-Werner-Str.");
        break;
    }
    case 115058:
    {
        returnValue = F("Georg-Werthmann-Str.");
        break;
    }
    case 115059:
    {
        returnValue = F("Georg-Wesener-Str.");
        break;
    }
    case 115060:
    {
        returnValue = F("Georg-Westermann-Allee");
        break;
    }
    case 115061:
    {
        returnValue = F("Georg-Wichtermann-Platz");
        break;
    }
    case 115062:
    {
        returnValue = F("Georg-Wickram-Str.");
        break;
    }
    case 115063:
    {
        returnValue = F("Georg-Wiesböck-Ring");
        break;
    }
    case 115064:
    {
        returnValue = F("Georg-Wilde-Weg");
        break;
    }
    case 115065:
    {
        returnValue = F("Georg-Wilhelm-Horlebein-Str.");
        break;
    }
    case 115066:
    {
        returnValue = F("Georg-Wilhelm-Steig");
        break;
    }
    case 115067:
    {
        returnValue = F("Georg-Wilhelm-Str.");
        break;
    }
    case 115068:
    {
        returnValue = F("Georg-Wilhelm-Weg");
        break;
    }
    case 115069:
    {
        returnValue = F("Georg-Will-Str.");
        break;
    }
    case 115070:
    {
        returnValue = F("Georg-Wimmer-Ring");
        break;
    }
    case 115071:
    {
        returnValue = F("Georg-Wimmer-Str.");
        break;
    }
    case 115072:
    {
        returnValue = F("Georg-Winkler-Str.");
        break;
    }
    case 115073:
    {
        returnValue = F("Georg-Wittig-Str.");
        break;
    }
    case 115074:
    {
        returnValue = F("Georg-Witzel-Str.");
        break;
    }
    case 115075:
    {
        returnValue = F("Georg-Wißmiller-Str.");
        break;
    }
    case 115076:
    {
        returnValue = F("Georg-Wolf-Str.");
        break;
    }
    case 115077:
    {
        returnValue = F("Georg-Wolff-Str.");
        break;
    }
    case 115078:
    {
        returnValue = F("Georg-Wolgast-Weg");
        break;
    }
    case 115079:
    {
        returnValue = F("Georg-Wolpers-Str.");
        break;
    }
    case 115080:
    {
        returnValue = F("Georg-Wolters-Str.");
        break;
    }
    case 115081:
    {
        returnValue = F("Georg-Wrede-Park");
        break;
    }
    case 115082:
    {
        returnValue = F("Georg-Wrede-Platz");
        break;
    }
    case 115083:
    {
        returnValue = F("Georg-Wrede-Str.");
        break;
    }
    case 115084:
    {
        returnValue = F("Georg-Wulf-Str.");
        break;
    }
    case 115085:
    {
        returnValue = F("Georg-Wurzer-Weg");
        break;
    }
    case 115086:
    {
        returnValue = F("Georg-Wörner-Str.");
        break;
    }
    case 115087:
    {
        returnValue = F("Georg-Wössner-Ring");
        break;
    }
    case 115088:
    {
        returnValue = F("Georg-Würth-Str.");
        break;
    }
    case 115089:
    {
        returnValue = F("Georg-Zeitler-Str.");
        break;
    }
    case 115090:
    {
        returnValue = F("Georg-Zeller-Str.");
        break;
    }
    case 115091:
    {
        returnValue = F("Georg-Zilker-Str.");
        break;
    }
    case 115092:
    {
        returnValue = F("Georg-Zimmer-Weg");
        break;
    }
    case 115093:
    {
        returnValue = F("Georg-Zimmerer-Str.");
        break;
    }
    case 115094:
    {
        returnValue = F("Georg-Zimmermann-Str.");
        break;
    }
    case 115095:
    {
        returnValue = F("Georg-Zink-Str.");
        break;
    }
    case 115096:
    {
        returnValue = F("Georg-Zoller-Str.");
        break;
    }
    case 115097:
    {
        returnValue = F("Georg-Zorn-Str.");
        break;
    }
    case 115098:
    {
        returnValue = F("Georg-von-Bach-Str.");
        break;
    }
    case 115099:
    {
        returnValue = F("Georg-von-Boeselager-Str.");
        break;
    }
    case 115100:
    {
        returnValue = F("Georg-von-Dillis-Siedlung");
        break;
    }
    case 115101:
    {
        returnValue = F("Georg-von-Engelbrechten-Str.");
        break;
    }
    case 115102:
    {
        returnValue = F("Georg-von-Krauß-Str.");
        break;
    }
    case 115103:
    {
        returnValue = F("Georg-von-Lindern-Weg");
        break;
    }
    case 115104:
    {
        returnValue = F("Georg-von-Loe-Str.");
        break;
    }
    case 115105:
    {
        returnValue = F("Georg-von-Nagel-Weg");
        break;
    }
    case 115106:
    {
        returnValue = F("Georg-von-Opel-Str.");
        break;
    }
    case 115107:
    {
        returnValue = F("Georg-von-Siemens-Str.");
        break;
    }
    case 115108:
    {
        returnValue = F("Georg-von-Vollmar-Str.");
        break;
    }
    case 115109:
    {
        returnValue = F("Georg-von-der-Vring-Str.");
        break;
    }
    case 115110:
    {
        returnValue = F("Georg-Ühlin-Str.");
        break;
    }
    case 115111:
    {
        returnValue = F("Georgbrunnenstr.");
        break;
    }
    case 115112:
    {
        returnValue = F("Georgbrücke");
        break;
    }
    case 115113:
    {
        returnValue = F("George-Albrecht-Str.");
        break;
    }
    case 115114:
    {
        returnValue = F("George-Beck-Str.");
        break;
    }
    case 115115:
    {
        returnValue = F("George-Boole-Weg");
        break;
    }
    case 115116:
    {
        returnValue = F("George-Bähr-Str.");
        break;
    }
    case 115117:
    {
        returnValue = F("George-Bähr-Weg");
        break;
    }
    case 115118:
    {
        returnValue = F("George-C.-Marshall-Platz");
        break;
    }
    case 115119:
    {
        returnValue = F("George-C.-Marshall-Str.");
        break;
    }
    case 115120:
    {
        returnValue = F("George-Gershwin-Str.");
        break;
    }
    case 115121:
    {
        returnValue = F("George-Gershwin-Weg");
        break;
    }
    case 115122:
    {
        returnValue = F("George-Grosz-Str.");
        break;
    }
    case 115123:
    {
        returnValue = F("George-Hans-Str.");
        break;
    }
    case 115124:
    {
        returnValue = F("George-Harrison-Str.");
        break;
    }
    case 115125:
    {
        returnValue = F("George-Hollender-Str.");
        break;
    }
    case 115126:
    {
        returnValue = F("George-Marshall-Ring");
        break;
    }
    case 115127:
    {
        returnValue = F("George-Marshall-Str.");
        break;
    }
    case 115128:
    {
        returnValue = F("George-Muhle-Str.");
        break;
    }
    case 115129:
    {
        returnValue = F("George-Sand-Weg");
        break;
    }
    case 115130:
    {
        returnValue = F("George-Schreiber-Str.");
        break;
    }
    case 115131:
    {
        returnValue = F("George-Stephenson-Str.");
        break;
    }
    case 115132:
    {
        returnValue = F("George-Sullivan-Ring");
        break;
    }
    case 115133:
    {
        returnValue = F("George-Washington-Str.");
        break;
    }
    case 115134:
    {
        returnValue = F("George-Williams-Str.");
        break;
    }
    case 115135:
    {
        returnValue = F("George-de-Hevesy-Weg");
        break;
    }
    case 115136:
    {
        returnValue = F("Georgenallee");
        break;
    }
    case 115137:
    {
        returnValue = F("Georgenbachweg");
        break;
    }
    case 115138:
    {
        returnValue = F("Georgenbadstr.");
        break;
    }
    case 115139:
    {
        returnValue = F("Georgenbahn");
        break;
    }
    case 115140:
    {
        returnValue = F("Georgenberg");
        break;
    }
    case 115141:
    {
        returnValue = F("Georgenbergstr.");
        break;
    }
    case 115142:
    {
        returnValue = F("Georgenbergtunnel");
        break;
    }
    case 115143:
    {
        returnValue = F("Georgenbergweg");
        break;
    }
    case 115144:
    {
        returnValue = F("Georgenborner Str.");
        break;
    }
    case 115145:
    {
        returnValue = F("Georgenborner Weg");
        break;
    }
    case 115146:
    {
        returnValue = F("Georgendellweg");
        break;
    }
    case 115147:
    {
        returnValue = F("Georgenfeld");
        break;
    }
    case 115148:
    {
        returnValue = F("Georgenfelder Hochmoor");
        break;
    }
    case 115149:
    {
        returnValue = F("Georgenfelder Weg");
        break;
    }
    case 115150:
    {
        returnValue = F("Georgengarten");
        break;
    }
    case 115151:
    {
        returnValue = F("Georgengasse");
        break;
    }
    case 115152:
    {
        returnValue = F("Georgengrüner Str.");
        break;
    }
    case 115153:
    {
        returnValue = F("Georgenhof");
        break;
    }
    case 115154:
    {
        returnValue = F("Georgenhofstr.");
        break;
    }
    case 115155:
    {
        returnValue = F("Georgenhäuser Str.");
        break;
    }
    case 115156:
    {
        returnValue = F("Georgenhäuser Weg");
        break;
    }
    case 115157:
    {
        returnValue = F("Georgenhöhe");
        break;
    }
    case 115158:
    {
        returnValue = F("Georgenkamp");
        break;
    }
    case 115159:
    {
        returnValue = F("Georgenkirchweg");
        break;
    }
    case 115160:
    {
        returnValue = F("Georgenmauer");
        break;
    }
    case 115161:
    {
        returnValue = F("Georgenplatz");
        break;
    }
    case 115162:
    {
        returnValue = F("Georgenpromenade");
        break;
    }
    case 115163:
    {
        returnValue = F("Georgenring");
        break;
    }
    case 115164:
    {
        returnValue = F("Georgenschlaue");
        break;
    }
    case 115165:
    {
        returnValue = F("Georgenschwimmbach");
        break;
    }
    case 115166:
    {
        returnValue = F("Georgenstr.");
        break;
    }
    case 115167:
    {
        returnValue = F("Georgentalweg");
        break;
    }
    case 115168:
    {
        returnValue = F("Georgenthal");
        break;
    }
    case 115169:
    {
        returnValue = F("Georgenthaler Str.");
        break;
    }
    case 115170:
    {
        returnValue = F("Georgenthaler Weg");
        break;
    }
    case 115171:
    {
        returnValue = F("Georgentorgasse");
        break;
    }
    case 115172:
    {
        returnValue = F("Georgenweg");
        break;
    }
    case 115173:
    {
        returnValue = F("Georgenzell");
        break;
    }
    case 115174:
    {
        returnValue = F("Georges-Brassens-Platz");
        break;
    }
    case 115175:
    {
        returnValue = F("Georges-Dupont-Str.");
        break;
    }
    case 115176:
    {
        returnValue = F("Georges-Girard-Ring");
        break;
    }
    case 115177:
    {
        returnValue = F("Georges-Goffart-Weg");
        break;
    }
    case 115178:
    {
        returnValue = F("Georges-Imbert-Str.");
        break;
    }
    case 115179:
    {
        returnValue = F("Georges-Köhler-Allee");
        break;
    }
    case 115180:
    {
        returnValue = F("Georges-Köhler-Str.");
        break;
    }
    case 115181:
    {
        returnValue = F("Georges-Lemoine-Platz");
        break;
    }
    case 115182:
    {
        returnValue = F("Georges-Lenne-Weg");
        break;
    }
    case 115183:
    {
        returnValue = F("Georges-Levillain-Anlage");
        break;
    }
    case 115184:
    {
        returnValue = F("Georgestr.");
        break;
    }
    case 115185:
    {
        returnValue = F("Georgeweg");
        break;
    }
    case 115186:
    {
        returnValue = F("Georgewitzer Str.");
        break;
    }
    case 115187:
    {
        returnValue = F("Georghausen");
        break;
    }
    case 115188:
    {
        returnValue = F("Georgi Kurpark");
        break;
    }
    case 115189:
    {
        returnValue = F("Georgi Panoramaweg");
        break;
    }
    case 115190:
    {
        returnValue = F("Georgi-Dimitroff-Str.");
        break;
    }
    case 115191:
    {
        returnValue = F("Georgi-Dobrowolski-Str.");
        break;
    }
    case 115192:
    {
        returnValue = F("Georgia Avenue");
        break;
    }
    case 115193:
    {
        returnValue = F("Georgia Circle");
        break;
    }
    case 115194:
    {
        returnValue = F("Georgiastr.");
        break;
    }
    case 115195:
    {
        returnValue = F("Georgibergstr.");
        break;
    }
    case 115196:
    {
        returnValue = F("Georgienstr.");
        break;
    }
    case 115197:
    {
        returnValue = F("Georgii-von-Georgenau-Str.");
        break;
    }
    case 115198:
    {
        returnValue = F("Georgiistr.");
        break;
    }
    case 115199:
    {
        returnValue = F("Georgiiweg");
        break;
    }
    case 115200:
    {
        returnValue = F("Georginenau");
        break;
    }
    case 115201:
    {
        returnValue = F("Georginenplatz");
        break;
    }
    case 115202:
    {
        returnValue = F("Georginenstr.");
        break;
    }
    case 115203:
    {
        returnValue = F("Georginenweg");
        break;
    }
    case 115204:
    {
        returnValue = F("Georginestr.");
        break;
    }
    case 115205:
    {
        returnValue = F("Georgipass");
        break;
    }
    case 115206:
    {
        returnValue = F("Georgiplatz");
        break;
    }
    case 115207:
    {
        returnValue = F("Georgiring");
        break;
    }
    case 115208:
    {
        returnValue = F("Georgishof");
        break;
    }
    case 115209:
    {
        returnValue = F("Georgistr.");
        break;
    }
    case 115210:
    {
        returnValue = F("Georgius-Agricola-Str.");
        break;
    }
    case 115211:
    {
        returnValue = F("Georgiusstr.");
        break;
    }
    case 115212:
    {
        returnValue = F("Georgiusweg");
        break;
    }
    case 115213:
    {
        returnValue = F("Georgiweg");
        break;
    }
    case 115214:
    {
        returnValue = F("Georgplatz");
        break;
    }
    case 115215:
    {
        returnValue = F("Georgsberg");
        break;
    }
    case 115216:
    {
        returnValue = F("Georgschneise");
        break;
    }
    case 115217:
    {
        returnValue = F("Georgsdorfer Str.");
        break;
    }
    case 115218:
    {
        returnValue = F("Georgsfelder Weg");
        break;
    }
    case 115219:
    {
        returnValue = F("Georgsgarten");
        break;
    }
    case 115220:
    {
        returnValue = F("Georgsgasse");
        break;
    }
    case 115221:
    {
        returnValue = F("Georgsheiler Weg");
        break;
    }
    case 115222:
    {
        returnValue = F("Georgshof");
        break;
    }
    case 115223:
    {
        returnValue = F("Georgshöhe");
        break;
    }
    case 115224:
    {
        returnValue = F("Georgshöhstr.");
        break;
    }
    case 115225:
    {
        returnValue = F("Georgshüttenstr.");
        break;
    }
    case 115226:
    {
        returnValue = F("Georgskommende");
        break;
    }
    case 115227:
    {
        returnValue = F("Georgsmarienhütter Str.");
        break;
    }
    case 115228:
    {
        returnValue = F("Georgsmarienstr.");
        break;
    }
    case 115229:
    {
        returnValue = F("Georgsmoorweg");
        break;
    }
    case 115230:
    {
        returnValue = F("Georgspassage");
        break;
    }
    case 115231:
    {
        returnValue = F("Georgspfad");
        break;
    }
    case 115232:
    {
        returnValue = F("Georgsplatz");
        break;
    }
    case 115233:
    {
        returnValue = F("Georgsstr.");
        break;
    }
    case 115234:
    {
        returnValue = F("Georgstr.");
        break;
    }
    case 115235:
    {
        returnValue = F("Georgswalder Str.");
        break;
    }
    case 115236:
    {
        returnValue = F("Georgswalder Weg");
        break;
    }
    case 115237:
    {
        returnValue = F("Georgswall");
        break;
    }
    case 115238:
    {
        returnValue = F("Georgsweg");
        break;
    }
    case 115239:
    {
        returnValue = F("Georgsweiler Str.");
        break;
    }
    case 115240:
    {
        returnValue = F("Georgswieke");
        break;
    }
    case 115241:
    {
        returnValue = F("Georgswiese");
        break;
    }
    case 115242:
    {
        returnValue = F("Georgswäldchen");
        break;
    }
    case 115243:
    {
        returnValue = F("Georgweg");
        break;
    }
    case 115244:
    {
        returnValue = F("Geothermiestr.");
        break;
    }
    case 115245:
    {
        returnValue = F("Gepaplatz");
        break;
    }
    case 115246:
    {
        returnValue = F("Geparde");
        break;
    }
    case 115247:
    {
        returnValue = F("Gepkerweg");
        break;
    }
    case 115248:
    {
        returnValue = F("Geppertstr.");
        break;
    }
    case 115249:
    {
        returnValue = F("Geppinger Str.");
        break;
    }
    case 115250:
    {
        returnValue = F("Gepülziger Str.");
        break;
    }
    case 115251:
    {
        returnValue = F("Gera-Ufer");
        break;
    }
    case 115252:
    {
        returnValue = F("Geraaue");
        break;
    }
    case 115253:
    {
        returnValue = F("Gerabacher Str.");
        break;
    }
    case 115254:
    {
        returnValue = F("Geraberger Platz");
        break;
    }
    case 115255:
    {
        returnValue = F("Geraberger Str.");
        break;
    }
    case 115256:
    {
        returnValue = F("Geraberger Weg");
        break;
    }
    case 115257:
    {
        returnValue = F("Gerabronner Str.");
        break;
    }
    case 115258:
    {
        returnValue = F("Geracher Pfad");
        break;
    }
    case 115259:
    {
        returnValue = F("Geracher Str.");
        break;
    }
    case 115260:
    {
        returnValue = F("Geracher Weg");
        break;
    }
    case 115261:
    {
        returnValue = F("Gerade Allee");
        break;
    }
    case 115262:
    {
        returnValue = F("Gerade Gasse");
        break;
    }
    case 115263:
    {
        returnValue = F("Gerade Lutter");
        break;
    }
    case 115264:
    {
        returnValue = F("Gerade Lutterstr.");
        break;
    }
    case 115265:
    {
        returnValue = F("Gerade Querstr.");
        break;
    }
    case 115266:
    {
        returnValue = F("Gerade Seerichtstatt");
        break;
    }
    case 115267:
    {
        returnValue = F("Gerade Steige");
        break;
    }
    case 115268:
    {
        returnValue = F("Gerade Str.");
        break;
    }
    case 115269:
    {
        returnValue = F("Gerader Weg");
        break;
    }
    case 115270:
    {
        returnValue = F("Gerader Weg / Judenmoorweg");
        break;
    }
    case 115271:
    {
        returnValue = F("Gerader-Weg");
        break;
    }
    case 115272:
    {
        returnValue = F("Geradlinigweg");
        break;
    }
    case 115273:
    {
        returnValue = F("Geradstettener Str.");
        break;
    }
    case 115274:
    {
        returnValue = F("Geraer Landstr.");
        break;
    }
    case 115275:
    {
        returnValue = F("Geraer Str.");
        break;
    }
    case 115276:
    {
        returnValue = F("Geraer Weg");
        break;
    }
    case 115277:
    {
        returnValue = F("Geragasse");
        break;
    }
    case 115278:
    {
        returnValue = F("Geraische Str.");
        break;
    }
    case 115279:
    {
        returnValue = F("Gerald-Ford-Str.");
        break;
    }
    case 115280:
    {
        returnValue = F("Geranienstr.");
        break;
    }
    case 115281:
    {
        returnValue = F("Geranienweg");
        break;
    }
    case 115282:
    {
        returnValue = F("Gerard-Carll-Str.");
        break;
    }
    case 115283:
    {
        returnValue = F("Gerard-Mortier-Platz");
        break;
    }
    case 115284:
    {
        returnValue = F("Gerardstr.");
        break;
    }
    case 115285:
    {
        returnValue = F("Gerart-von-Bure-Str.");
        break;
    }
    case 115286:
    {
        returnValue = F("Gerasteg");
        break;
    }
    case 115287:
    {
        returnValue = F("Gerastr.");
        break;
    }
    case 115288:
    {
        returnValue = F("Geratalstr.");
        break;
    }
    case 115289:
    {
        returnValue = F("Gerats");
        break;
    }
    case 115290:
    {
        returnValue = F("Geratsberger Str.");
        break;
    }
    case 115291:
    {
        returnValue = F("Geratshof");
        break;
    }
    case 115292:
    {
        returnValue = F("Geratshofen");
        break;
    }
    case 115293:
    {
        returnValue = F("Geratsrieder Str.");
        break;
    }
    case 115294:
    {
        returnValue = F("Gerauer Str.");
        break;
    }
    case 115295:
    {
        returnValue = F("Gerauer Weg");
        break;
    }
    case 115296:
    {
        returnValue = F("Geraweg");
        break;
    }
    case 115297:
    {
        returnValue = F("Gerazharz Ausf.");
        break;
    }
    case 115298:
    {
        returnValue = F("Gerbacher Str.");
        break;
    }
    case 115299:
    {
        returnValue = F("Gerbelstr.");
        break;
    }
    case 115300:
    {
        returnValue = F("Gerber-Fischer-Str.");
        break;
    }
    case 115301:
    {
        returnValue = F("Gerber-Ufer");
        break;
    }
    case 115302:
    {
        returnValue = F("Gerberannental");
        break;
    }
    case 115303:
    {
        returnValue = F("Gerberannentäle");
        break;
    }
    case 115304:
    {
        returnValue = F("Gerberastr.");
        break;
    }
    case 115305:
    {
        returnValue = F("Gerberau");
        break;
    }
    case 115306:
    {
        returnValue = F("Gerberaweg");
        break;
    }
    case 115307:
    {
        returnValue = F("Gerberberg");
        break;
    }
    case 115308:
    {
        returnValue = F("Gerberbruch");
        break;
    }
    case 115309:
    {
        returnValue = F("Gerberdamm");
        break;
    }
    case 115310:
    {
        returnValue = F("Gerberei");
        break;
    }
    case 115311:
    {
        returnValue = F("Gerbereigasse");
        break;
    }
    case 115312:
    {
        returnValue = F("Gerbereistr.");
        break;
    }
    case 115313:
    {
        returnValue = F("Gerbereiunterführung");
        break;
    }
    case 115314:
    {
        returnValue = F("Gerbereiweg");
        break;
    }
    case 115315:
    {
        returnValue = F("Gerberfahrt");
        break;
    }
    case 115316:
    {
        returnValue = F("Gerbergang");
        break;
    }
    case 115317:
    {
        returnValue = F("Gerbergasse");
        break;
    }
    case 115318:
    {
        returnValue = F("Gerbergisstr.");
        break;
    }
    case 115319:
    {
        returnValue = F("Gerbergrabenweg");
        break;
    }
    case 115320:
    {
        returnValue = F("Gerbergärten");
        break;
    }
    case 115321:
    {
        returnValue = F("Gerbergäßchen");
        break;
    }
    case 115322:
    {
        returnValue = F("Gerbergäßle");
        break;
    }
    case 115323:
    {
        returnValue = F("Gerberhof");
        break;
    }
    case 115324:
    {
        returnValue = F("Gerberhäule Weg");
        break;
    }
    case 115325:
    {
        returnValue = F("Gerberhölzle");
        break;
    }
    case 115326:
    {
        returnValue = F("Gerberlohe");
        break;
    }
    case 115327:
    {
        returnValue = F("Gerberpassage");
        break;
    }
    case 115328:
    {
        returnValue = F("Gerberplan");
        break;
    }
    case 115329:
    {
        returnValue = F("Gerberplatz");
        break;
    }
    case 115330:
    {
        returnValue = F("Gerberring");
        break;
    }
    case 115331:
    {
        returnValue = F("Gerberschanze");
        break;
    }
    case 115332:
    {
        returnValue = F("Gerbersdorf");
        break;
    }
    case 115333:
    {
        returnValue = F("Gerbersgasse");
        break;
    }
    case 115334:
    {
        returnValue = F("Gerbersgipfel");
        break;
    }
    case 115335:
    {
        returnValue = F("Gerbershauweg");
        break;
    }
    case 115336:
    {
        returnValue = F("Gerbershäuser Str.");
        break;
    }
    case 115337:
    {
        returnValue = F("Gerbersiedlung");
        break;
    }
    case 115338:
    {
        returnValue = F("Gerbersknock");
        break;
    }
    case 115339:
    {
        returnValue = F("Gerbersleite");
        break;
    }
    case 115340:
    {
        returnValue = F("Gerbersruhpark");
        break;
    }
    case 115341:
    {
        returnValue = F("Gerbersruhstr.");
        break;
    }
    case 115342:
    {
        returnValue = F("Gerbersteg");
        break;
    }
    case 115343:
    {
        returnValue = F("Gerbersteig");
        break;
    }
    case 115344:
    {
        returnValue = F("Gerberstr.");
        break;
    }
    case 115345:
    {
        returnValue = F("Gerberstr. Marktplatz");
        break;
    }
    case 115346:
    {
        returnValue = F("Gerbertshofer Str.");
        break;
    }
    case 115347:
    {
        returnValue = F("Gerbertshohl");
        break;
    }
    case 115348:
    {
        returnValue = F("Gerbertstr.");
        break;
    }
    case 115349:
    {
        returnValue = F("Gerberweg");
        break;
    }
    case 115350:
    {
        returnValue = F("Gerberwiesen");
        break;
    }
    case 115351:
    {
        returnValue = F("Gerberzwinger");
        break;
    }
    case 115352:
    {
        returnValue = F("Gerbeswarte");
        break;
    }
    case 115353:
    {
        returnValue = F("Gerbhausstr.");
        break;
    }
    case 115354:
    {
        returnValue = F("Gerbhausweg");
        break;
    }
    case 115355:
    {
        returnValue = F("Gerbirgisstr.");
        break;
    }
    case 115356:
    {
        returnValue = F("Gerblingeröder Str.");
        break;
    }
    case 115357:
    {
        returnValue = F("Gerblinghauser Weg");
        break;
    }
    case 115358:
    {
        returnValue = F("Gerblkellerpark");
        break;
    }
    case 115359:
    {
        returnValue = F("Gerbodoweg");
        break;
    }
    case 115360:
    {
        returnValue = F("Gerbrandstr.");
        break;
    }
    case 115361:
    {
        returnValue = F("Gerbrunner Str.");
        break;
    }
    case 115362:
    {
        returnValue = F("Gerbrunner Weg");
        break;
    }
    case 115363:
    {
        returnValue = F("Gerbstedter Chaussee");
        break;
    }
    case 115364:
    {
        returnValue = F("Gerbstedter Landstr.");
        break;
    }
    case 115365:
    {
        returnValue = F("Gerbstedter Str.");
        break;
    }
    case 115366:
    {
        returnValue = F("Gerbstedterstr.");
        break;
    }
    case 115367:
    {
        returnValue = F("Gerburgisstr.");
        break;
    }
    case 115368:
    {
        returnValue = F("Gerchsheimer Str.");
        break;
    }
    case 115369:
    {
        returnValue = F("Gerd Kleist Weg");
        break;
    }
    case 115370:
    {
        returnValue = F("Gerd-Achgelis-Weg");
        break;
    }
    case 115371:
    {
        returnValue = F("Gerd-Baumann-Str.");
        break;
    }
    case 115372:
    {
        returnValue = F("Gerd-Dehof-Platz");
        break;
    }
    case 115373:
    {
        returnValue = F("Gerd-Dirks-Weg");
        break;
    }
    case 115374:
    {
        returnValue = F("Gerd-Gaiser-Str.");
        break;
    }
    case 115375:
    {
        returnValue = F("Gerd-Gerdes-Platz");
        break;
    }
    case 115376:
    {
        returnValue = F("Gerd-Gieseler-Weg");
        break;
    }
    case 115377:
    {
        returnValue = F("Gerd-Heinssen-Str.");
        break;
    }
    case 115378:
    {
        returnValue = F("Gerd-Heinz-Schilling-Str.");
        break;
    }
    case 115379:
    {
        returnValue = F("Gerd-Horseling-Str.");
        break;
    }
    case 115380:
    {
        returnValue = F("Gerd-Jansen-Platz");
        break;
    }
    case 115381:
    {
        returnValue = F("Gerd-Lüpke-Str.");
        break;
    }
    case 115382:
    {
        returnValue = F("Gerd-Mensen-Str.");
        break;
    }
    case 115383:
    {
        returnValue = F("Gerd-Mosca-Str.");
        break;
    }
    case 115384:
    {
        returnValue = F("Gerd-Müller-Platz");
        break;
    }
    case 115385:
    {
        returnValue = F("Gerd-Rogasch-Weg");
        break;
    }
    case 115386:
    {
        returnValue = F("Gerd-Schaidt-Str.");
        break;
    }
    case 115387:
    {
        returnValue = F("Gerd-Stiefel-Allee");
        break;
    }
    case 115388:
    {
        returnValue = F("Gerda-Boenke-Str.");
        break;
    }
    case 115389:
    {
        returnValue = F("Gerda-Dreiser-Str.");
        break;
    }
    case 115390:
    {
        returnValue = F("Gerda-Helmann-Platz");
        break;
    }
    case 115391:
    {
        returnValue = F("Gerda-Herf-Str.");
        break;
    }
    case 115392:
    {
        returnValue = F("Gerda-Krüger-Nieland-Str.");
        break;
    }
    case 115393:
    {
        returnValue = F("Gerda-Laufer-Str.");
        break;
    }
    case 115394:
    {
        returnValue = F("Gerda-Maßmann-Weg");
        break;
    }
    case 115395:
    {
        returnValue = F("Gerda-Penzel-Str.");
        break;
    }
    case 115396:
    {
        returnValue = F("Gerda-Rabe-Str.");
        break;
    }
    case 115397:
    {
        returnValue = F("Gerda-Weiler-Str.");
        break;
    }
    case 115398:
    {
        returnValue = F("Gerdagstr.");
        break;
    }
    case 115399:
    {
        returnValue = F("Gerdastr.");
        break;
    }
    case 115400:
    {
        returnValue = F("Gerdauener Str.");
        break;
    }
    case 115401:
    {
        returnValue = F("Gerdauer Str.");
        break;
    }
    case 115402:
    {
        returnValue = F("Gerdaufurt");
        break;
    }
    case 115403:
    {
        returnValue = F("Gerdehaus");
        break;
    }
    case 115404:
    {
        returnValue = F("Gerdehäuser Weg");
        break;
    }
    case 115405:
    {
        returnValue = F("Gerdehöh");
        break;
    }
    case 115406:
    {
        returnValue = F("Gerdener Str.");
        break;
    }
    case 115407:
    {
        returnValue = F("Gerdenkampstr.");
        break;
    }
    case 115408:
    {
        returnValue = F("Gerdensiek");
        break;
    }
    case 115409:
    {
        returnValue = F("Gerderather Burgstr.");
        break;
    }
    case 115410:
    {
        returnValue = F("Gerderather Landstr.");
        break;
    }
    case 115411:
    {
        returnValue = F("Gerderather Mühle");
        break;
    }
    case 115412:
    {
        returnValue = F("Gerderhahner Str.");
        break;
    }
    case 115413:
    {
        returnValue = F("Gerdes' Feld");
        break;
    }
    case 115414:
    {
        returnValue = F("Gerdesstr.");
        break;
    }
    case 115415:
    {
        returnValue = F("Gerdeswalde");
        break;
    }
    case 115416:
    {
        returnValue = F("Gerdesweg");
        break;
    }
    case 115417:
    {
        returnValue = F("Gerdings Feld");
        break;
    }
    case 115418:
    {
        returnValue = F("Gerdingstr.");
        break;
    }
    case 115419:
    {
        returnValue = F("Gerdingweg");
        break;
    }
    case 115420:
    {
        returnValue = F("Gerdkamp");
        break;
    }
    case 115421:
    {
        returnValue = F("Gerdshagen");
        break;
    }
    case 115422:
    {
        returnValue = F("Gerdshütteweg");
        break;
    }
    case 115423:
    {
        returnValue = F("Gerdstr.");
        break;
    }
    case 115424:
    {
        returnValue = F("Gerdsweg");
        break;
    }
    case 115425:
    {
        returnValue = F("Gerdt-Hane-Str.");
        break;
    }
    case 115426:
    {
        returnValue = F("Gerdtsstr.");
        break;
    }
    case 115427:
    {
        returnValue = F("Gerdtweg");
        break;
    }
    case 115428:
    {
        returnValue = F("Gerdwissingweg");
        break;
    }
    case 115429:
    {
        returnValue = F("Gerechtigkeitsweg");
        break;
    }
    case 115430:
    {
        returnValue = F("Gerechweg");
        break;
    }
    case 115431:
    {
        returnValue = F("Gerega");
        break;
    }
    case 115432:
    {
        returnValue = F("Gerenortsweg");
        break;
    }
    case 115433:
    {
        returnValue = F("Gerenotstr.");
        break;
    }
    case 115434:
    {
        returnValue = F("Gerenstr.");
        break;
    }
    case 115435:
    {
        returnValue = F("Gerenweg");
        break;
    }
    case 115436:
    {
        returnValue = F("Gereon-Motyka-Siedlung");
        break;
    }
    case 115437:
    {
        returnValue = F("Gereonsplatz");
        break;
    }
    case 115438:
    {
        returnValue = F("Gereonstr.");
        break;
    }
    case 115439:
    {
        returnValue = F("Gereonsweg");
        break;
    }
    case 115440:
    {
        returnValue = F("Gereonsweilerstr.");
        break;
    }
    case 115441:
    {
        returnValue = F("Geretsrieder Str.");
        break;
    }
    case 115442:
    {
        returnValue = F("Geretstalstr.");
        break;
    }
    case 115443:
    {
        returnValue = F("Gereut");
        break;
    }
    case 115444:
    {
        returnValue = F("Gereutertalstr.");
        break;
    }
    case 115445:
    {
        returnValue = F("Gereuther Str.");
        break;
    }
    case 115446:
    {
        returnValue = F("Gereuther Weg");
        break;
    }
    case 115447:
    {
        returnValue = F("Gereuthof");
        break;
    }
    case 115448:
    {
        returnValue = F("Gereuthstr.");
        break;
    }
    case 115449:
    {
        returnValue = F("Gereuthweg");
        break;
    }
    case 115450:
    {
        returnValue = F("Gereutstr.");
        break;
    }
    case 115451:
    {
        returnValue = F("Gereutweg");
        break;
    }
    case 115452:
    {
        returnValue = F("Gereutäcker");
        break;
    }
    case 115453:
    {
        returnValue = F("Gergarten");
        break;
    }
    case 115454:
    {
        returnValue = F("Gergenbusch");
        break;
    }
    case 115455:
    {
        returnValue = F("Gergerloh");
        break;
    }
    case 115456:
    {
        returnValue = F("Gergraben");
        break;
    }
    case 115457:
    {
        returnValue = F("Gerh.-Hauptmann-Weg");
        break;
    }
    case 115458:
    {
        returnValue = F("Gerhaldeweg");
        break;
    }
    case 115459:
    {
        returnValue = F("Gerhard Gerdes Str.");
        break;
    }
    case 115460:
    {
        returnValue = F("Gerhard Lödige Str.");
        break;
    }
    case 115461:
    {
        returnValue = F("Gerhard-Adolf-Str.");
        break;
    }
    case 115462:
    {
        returnValue = F("Gerhard-Altenbourg-Str.");
        break;
    }
    case 115463:
    {
        returnValue = F("Gerhard-Arlt-Str.");
        break;
    }
    case 115464:
    {
        returnValue = F("Gerhard-Bacher-Str.");
        break;
    }
    case 115465:
    {
        returnValue = F("Gerhard-Bachmann-Ring");
        break;
    }
    case 115466:
    {
        returnValue = F("Gerhard-Becker-Str.");
        break;
    }
    case 115467:
    {
        returnValue = F("Gerhard-Benzing-Str.");
        break;
    }
    case 115468:
    {
        returnValue = F("Gerhard-Bergmann-Str.");
        break;
    }
    case 115469:
    {
        returnValue = F("Gerhard-Boeden-Str.");
        break;
    }
    case 115470:
    {
        returnValue = F("Gerhard-Boes-Str.");
        break;
    }
    case 115471:
    {
        returnValue = F("Gerhard-Bold-Weg");
        break;
    }
    case 115472:
    {
        returnValue = F("Gerhard-Bombös-Weg");
        break;
    }
    case 115473:
    {
        returnValue = F("Gerhard-Borchers-Str.");
        break;
    }
    case 115474:
    {
        returnValue = F("Gerhard-Bornefeld-Ettmann-Str.");
        break;
    }
    case 115475:
    {
        returnValue = F("Gerhard-Brumund-Weg");
        break;
    }
    case 115476:
    {
        returnValue = F("Gerhard-Brökel-Weg");
        break;
    }
    case 115477:
    {
        returnValue = F("Gerhard-Bunjes-Str.");
        break;
    }
    case 115478:
    {
        returnValue = F("Gerhard-Cremer-Str.");
        break;
    }
    case 115479:
    {
        returnValue = F("Gerhard-Dahm-Str.");
        break;
    }
    case 115480:
    {
        returnValue = F("Gerhard-Dall-Str.");
        break;
    }
    case 115481:
    {
        returnValue = F("Gerhard-De Buhr-Ring");
        break;
    }
    case 115482:
    {
        returnValue = F("Gerhard-Dessel-Str.");
        break;
    }
    case 115483:
    {
        returnValue = F("Gerhard-Diedrich-Böhlje-Str.");
        break;
    }
    case 115484:
    {
        returnValue = F("Gerhard-Doemich-Weg");
        break;
    }
    case 115485:
    {
        returnValue = F("Gerhard-Domagk-Str.");
        break;
    }
    case 115486:
    {
        returnValue = F("Gerhard-Dorsch-Platz");
        break;
    }
    case 115487:
    {
        returnValue = F("Gerhard-Drescher-Str.");
        break;
    }
    case 115488:
    {
        returnValue = F("Gerhard-Ebeler-Str.");
        break;
    }
    case 115489:
    {
        returnValue = F("Gerhard-Eimers-Str.");
        break;
    }
    case 115490:
    {
        returnValue = F("Gerhard-Eisler-Str.");
        break;
    }
    case 115491:
    {
        returnValue = F("Gerhard-Enters-Str.");
        break;
    }
    case 115492:
    {
        returnValue = F("Gerhard-Faber-Str.");
        break;
    }
    case 115493:
    {
        returnValue = F("Gerhard-Fey-Str.");
        break;
    }
    case 115494:
    {
        returnValue = F("Gerhard-Fieseler-Str.");
        break;
    }
    case 115495:
    {
        returnValue = F("Gerhard-Fieseler-Weg");
        break;
    }
    case 115496:
    {
        returnValue = F("Gerhard-Frede-Str.");
        break;
    }
    case 115497:
    {
        returnValue = F("Gerhard-Friedrich-Müller-Str.");
        break;
    }
    case 115498:
    {
        returnValue = F("Gerhard-Fritz-Str.");
        break;
    }
    case 115499:
    {
        returnValue = F("Gerhard-Fritz-Weg");
        break;
    }
    case 115500:
    {
        returnValue = F("Gerhard-Fuchs-Str.");
        break;
    }
    case 115501:
    {
        returnValue = F("Gerhard-Fuß-Str.");
        break;
    }
    case 115502:
    {
        returnValue = F("Gerhard-Gerdes-Str.");
        break;
    }
    case 115503:
    {
        returnValue = F("Gerhard-Gertheinrich-Str.");
        break;
    }
    case 115504:
    {
        returnValue = F("Gerhard-Geyer-Weg");
        break;
    }
    case 115505:
    {
        returnValue = F("Gerhard-Gölz-Str.");
        break;
    }
    case 115506:
    {
        returnValue = F("Gerhard-Haas-Str.");
        break;
    }
    case 115507:
    {
        returnValue = F("Gerhard-Hansen-Str.");
        break;
    }
    case 115508:
    {
        returnValue = F("Gerhard-Hauptmann-Weg");
        break;
    }
    case 115509:
    {
        returnValue = F("Gerhard-Hebborn-Str.");
        break;
    }
    case 115510:
    {
        returnValue = F("Gerhard-Hellmers-Weg");
        break;
    }
    case 115511:
    {
        returnValue = F("Gerhard-Henniger-Str.");
        break;
    }
    case 115512:
    {
        returnValue = F("Gerhard-Heusch-Platz");
        break;
    }
    case 115513:
    {
        returnValue = F("Gerhard-Heyde-Weg");
        break;
    }
    case 115514:
    {
        returnValue = F("Gerhard-Hilgendorf-Str.");
        break;
    }
    case 115515:
    {
        returnValue = F("Gerhard-Hilling-Str.");
        break;
    }
    case 115516:
    {
        returnValue = F("Gerhard-Hirschfelder-Weg");
        break;
    }
    case 115517:
    {
        returnValue = F("Gerhard-Hoehme-Allee");
        break;
    }
    case 115518:
    {
        returnValue = F("Gerhard-Hohendahl-Str.");
        break;
    }
    case 115519:
    {
        returnValue = F("Gerhard-Hugenberg-Str.");
        break;
    }
    case 115520:
    {
        returnValue = F("Gerhard-Husmann-Str.");
        break;
    }
    case 115521:
    {
        returnValue = F("Gerhard-Höllerich-Ring");
        break;
    }
    case 115522:
    {
        returnValue = F("Gerhard-Höltje-Str.");
        break;
    }
    case 115523:
    {
        returnValue = F("Gerhard-Jenczyk-Str.");
        break;
    }
    case 115524:
    {
        returnValue = F("Gerhard-Jung-Platz");
        break;
    }
    case 115525:
    {
        returnValue = F("Gerhard-Jung-Str.");
        break;
    }
    case 115526:
    {
        returnValue = F("Gerhard-Jüttner-Weg");
        break;
    }
    case 115527:
    {
        returnValue = F("Gerhard-Kalkhof-Weg");
        break;
    }
    case 115528:
    {
        returnValue = F("Gerhard-Kamm-Str.");
        break;
    }
    case 115529:
    {
        returnValue = F("Gerhard-Kienle-Weg");
        break;
    }
    case 115530:
    {
        returnValue = F("Gerhard-Klotz-Str.");
        break;
    }
    case 115531:
    {
        returnValue = F("Gerhard-Koch-Str.");
        break;
    }
    case 115532:
    {
        returnValue = F("Gerhard-Koppelmann-Str.");
        break;
    }
    case 115533:
    {
        returnValue = F("Gerhard-Korthaus-Str.");
        break;
    }
    case 115534:
    {
        returnValue = F("Gerhard-Krampe-Str.");
        break;
    }
    case 115535:
    {
        returnValue = F("Gerhard-Krause-Weg");
        break;
    }
    case 115536:
    {
        returnValue = F("Gerhard-Küchen-Str.");
        break;
    }
    case 115537:
    {
        returnValue = F("Gerhard-Kühn-Str.");
        break;
    }
    case 115538:
    {
        returnValue = F("Gerhard-Leibholz-Str.");
        break;
    }
    case 115539:
    {
        returnValue = F("Gerhard-Lemke-Ring");
        break;
    }
    case 115540:
    {
        returnValue = F("Gerhard-Lichtenfeld-Weg");
        break;
    }
    case 115541:
    {
        returnValue = F("Gerhard-Liesegang-Str.");
        break;
    }
    case 115542:
    {
        returnValue = F("Gerhard-Lisken-Weg");
        break;
    }
    case 115543:
    {
        returnValue = F("Gerhard-Lossin-Str.");
        break;
    }
    case 115544:
    {
        returnValue = F("Gerhard-Lucas-Meyer-Str.");
        break;
    }
    case 115545:
    {
        returnValue = F("Gerhard-Lukas-Str.");
        break;
    }
    case 115546:
    {
        returnValue = F("Gerhard-Löddige-Str.");
        break;
    }
    case 115547:
    {
        returnValue = F("Gerhard-Madaus-Str.");
        break;
    }
    case 115548:
    {
        returnValue = F("Gerhard-Maier-Str.");
        break;
    }
    case 115549:
    {
        returnValue = F("Gerhard-Malina-Str.");
        break;
    }
    case 115550:
    {
        returnValue = F("Gerhard-Marcks-Str.");
        break;
    }
    case 115551:
    {
        returnValue = F("Gerhard-Marcks-Weg");
        break;
    }
    case 115552:
    {
        returnValue = F("Gerhard-Meiß-Str.");
        break;
    }
    case 115553:
    {
        returnValue = F("Gerhard-Mercator-Str.");
        break;
    }
    case 115554:
    {
        returnValue = F("Gerhard-Mesenkamp-Weg");
        break;
    }
    case 115555:
    {
        returnValue = F("Gerhard-Mewes-Str.");
        break;
    }
    case 115556:
    {
        returnValue = F("Gerhard-Muntink-Str.");
        break;
    }
    case 115557:
    {
        returnValue = F("Gerhard-Neuhaus-Str.");
        break;
    }
    case 115558:
    {
        returnValue = F("Gerhard-Nunnenmacher-Weg");
        break;
    }
    case 115559:
    {
        returnValue = F("Gerhard-Ortmeyer-Str.");
        break;
    }
    case 115560:
    {
        returnValue = F("Gerhard-Ost-Str.");
        break;
    }
    case 115561:
    {
        returnValue = F("Gerhard-Pape-Platz");
        break;
    }
    case 115562:
    {
        returnValue = F("Gerhard-Pape-Str.");
        break;
    }
    case 115563:
    {
        returnValue = F("Gerhard-Pardall-Weg");
        break;
    }
    case 115564:
    {
        returnValue = F("Gerhard-Peters-Str.");
        break;
    }
    case 115565:
    {
        returnValue = F("Gerhard-Pfeiffer-Str.");
        break;
    }
    case 115566:
    {
        returnValue = F("Gerhard-Radke-Str.");
        break;
    }
    case 115567:
    {
        returnValue = F("Gerhard-Rieger-Weg");
        break;
    }
    case 115568:
    {
        returnValue = F("Gerhard-Ringeling-Str.");
        break;
    }
    case 115569:
    {
        returnValue = F("Gerhard-Rohlfs-Str.");
        break;
    }
    case 115570:
    {
        returnValue = F("Gerhard-Rottländer-Str.");
        break;
    }
    case 115571:
    {
        returnValue = F("Gerhard-Rudolf-Twelbeck-Str.");
        break;
    }
    case 115572:
    {
        returnValue = F("Gerhard-Samuel-Str.");
        break;
    }
    case 115573:
    {
        returnValue = F("Gerhard-Schnitger-Str.");
        break;
    }
    case 115574:
    {
        returnValue = F("Gerhard-Schoeller-Str.");
        break;
    }
    case 115575:
    {
        returnValue = F("Gerhard-Schridde-Weg");
        break;
    }
    case 115576:
    {
        returnValue = F("Gerhard-Schröder-Str.");
        break;
    }
    case 115577:
    {
        returnValue = F("Gerhard-Schuirmann-Weg");
        break;
    }
    case 115578:
    {
        returnValue = F("Gerhard-Schümmer-Str.");
        break;
    }
    case 115579:
    {
        returnValue = F("Gerhard-Shiffel-Weg");
        break;
    }
    case 115580:
    {
        returnValue = F("Gerhard-Sonnenberg-Str.");
        break;
    }
    case 115581:
    {
        returnValue = F("Gerhard-Stache-Str.");
        break;
    }
    case 115582:
    {
        returnValue = F("Gerhard-Stalling-Str.");
        break;
    }
    case 115583:
    {
        returnValue = F("Gerhard-Stern-Str.");
        break;
    }
    case 115584:
    {
        returnValue = F("Gerhard-Storm-Stiege");
        break;
    }
    case 115585:
    {
        returnValue = F("Gerhard-Storm-Str.");
        break;
    }
    case 115586:
    {
        returnValue = F("Gerhard-Storz-Str.");
        break;
    }
    case 115587:
    {
        returnValue = F("Gerhard-Storz-Weg");
        break;
    }
    case 115588:
    {
        returnValue = F("Gerhard-Sturm-Str.");
        break;
    }
    case 115589:
    {
        returnValue = F("Gerhard-Taxis-Str.");
        break;
    }
    case 115590:
    {
        returnValue = F("Gerhard-Teriet-Weg");
        break;
    }
    case 115591:
    {
        returnValue = F("Gerhard-Tjarks-Str.");
        break;
    }
    case 115592:
    {
        returnValue = F("Gerhard-Unland-Str.");
        break;
    }
    case 115593:
    {
        returnValue = F("Gerhard-Wacher-Weg");
        break;
    }
    case 115594:
    {
        returnValue = F("Gerhard-Weber-Weg");
        break;
    }
    case 115595:
    {
        returnValue = F("Gerhard-Weck-Str.");
        break;
    }
    case 115596:
    {
        returnValue = F("Gerhard-Weiser-Ring");
        break;
    }
    case 115597:
    {
        returnValue = F("Gerhard-Welter-Str.");
        break;
    }
    case 115598:
    {
        returnValue = F("Gerhard-Wendig-Str.");
        break;
    }
    case 115599:
    {
        returnValue = F("Gerhard-Wetzel-Str.");
        break;
    }
    case 115600:
    {
        returnValue = F("Gerhard-Wilhelm-Vogts-Str.");
        break;
    }
    case 115601:
    {
        returnValue = F("Gerhard-Willrodt-Park");
        break;
    }
    case 115602:
    {
        returnValue = F("Gerhard-Wollnik-Str.");
        break;
    }
    case 115603:
    {
        returnValue = F("Gerhard-Wurst-Weg");
        break;
    }
    case 115604:
    {
        returnValue = F("Gerhard-Zillich-Str.");
        break;
    }
    case 115605:
    {
        returnValue = F("Gerhard-Zimmermann-Weg");
        break;
    }
    case 115606:
    {
        returnValue = F("Gerhard-Zwerenz-Weg");
        break;
    }
    case 115607:
    {
        returnValue = F("Gerhard-van-Clev-Str.");
        break;
    }
    case 115608:
    {
        returnValue = F("Gerhard-van-der-Poll-Str.");
        break;
    }
    case 115609:
    {
        returnValue = F("Gerhard-vom-Brugh-Str.");
        break;
    }
    case 115610:
    {
        returnValue = F("Gerhard-von-Dietz-Str.");
        break;
    }
    case 115611:
    {
        returnValue = F("Gerhard-von-Gehrden-Weg");
        break;
    }
    case 115612:
    {
        returnValue = F("Gerhard-von-Scharnhorst-Str.");
        break;
    }
    case 115613:
    {
        returnValue = F("Gerhardhof");
        break;
    }
    case 115614:
    {
        returnValue = F("Gerhardinger-Str.");
        break;
    }
    case 115615:
    {
        returnValue = F("Gerhardingerstr.");
        break;
    }
    case 115616:
    {
        returnValue = F("Gerhardingerweg");
        break;
    }
    case 115617:
    {
        returnValue = F("Gerhardplatz");
        break;
    }
    case 115618:
    {
        returnValue = F("Gerhards Wasen");
        break;
    }
    case 115619:
    {
        returnValue = F("Gerhardsbruch");
        break;
    }
    case 115620:
    {
        returnValue = F("Gerhardsbühl");
        break;
    }
    case 115621:
    {
        returnValue = F("Gerhardsfeld");
        break;
    }
    case 115622:
    {
        returnValue = F("Gerhardshahn");
        break;
    }
    case 115623:
    {
        returnValue = F("Gerhardshainer Str.");
        break;
    }
    case 115624:
    {
        returnValue = F("Gerhardshöfer Weg");
        break;
    }
    case 115625:
    {
        returnValue = F("Gerhardshöhe");
        break;
    }
    case 115626:
    {
        returnValue = F("Gerhardsiefen");
        break;
    }
    case 115627:
    {
        returnValue = F("Gerhardsklinge");
        break;
    }
    case 115628:
    {
        returnValue = F("Gerhardsplatz");
        break;
    }
    case 115629:
    {
        returnValue = F("Gerhardstr.");
        break;
    }
    case 115630:
    {
        returnValue = F("Gerhardsweg");
        break;
    }
    case 115631:
    {
        returnValue = F("Gerhardt-Hauptmann-Str.");
        break;
    }
    case 115632:
    {
        returnValue = F("Gerhardt-Katsch-Str.");
        break;
    }
    case 115633:
    {
        returnValue = F("Gerhardtstr.");
        break;
    }
    case 115634:
    {
        returnValue = F("Gerhardus-von-Wassenburg-Str.");
        break;
    }
    case 115635:
    {
        returnValue = F("Gerhardusstr.");
        break;
    }
    case 115636:
    {
        returnValue = F("Gerhardweg");
        break;
    }
    case 115637:
    {
        returnValue = F("Gerhardyweg");
        break;
    }
    case 115638:
    {
        returnValue = F("Gerhart-Eisler-Str.");
        break;
    }
    case 115639:
    {
        returnValue = F("Gerhart-Hauptmann-Allee");
        break;
    }
    case 115640:
    {
        returnValue = F("Gerhart-Hauptmann-Anger");
        break;
    }
    case 115641:
    {
        returnValue = F("Gerhart-Hauptmann-Bogen");
        break;
    }
    case 115642:
    {
        returnValue = F("Gerhart-Hauptmann-Hof");
        break;
    }
    case 115643:
    {
        returnValue = F("Gerhart-Hauptmann-Pfad");
        break;
    }
    case 115644:
    {
        returnValue = F("Gerhart-Hauptmann-Platz");
        break;
    }
    case 115645:
    {
        returnValue = F("Gerhart-Hauptmann-Ring");
        break;
    }
    case 115646:
    {
        returnValue = F("Gerhart-Hauptmann-Str.");
        break;
    }
    case 115647:
    {
        returnValue = F("Gerhart-Hauptmann-Weg");
        break;
    }
    case 115648:
    {
        returnValue = F("Gerhart-Hautpmann-Str.");
        break;
    }
    case 115649:
    {
        returnValue = F("Gerhart-Schubert-Platz");
        break;
    }
    case 115650:
    {
        returnValue = F("Gerhart-Wessell-Str.");
        break;
    }
    case 115651:
    {
        returnValue = F("Gerhartsreit");
        break;
    }
    case 115652:
    {
        returnValue = F("Gerhartsreiter Feld");
        break;
    }
    case 115653:
    {
        returnValue = F("Gerhartsreiter Str.");
        break;
    }
    case 115654:
    {
        returnValue = F("Gerhartstr.");
        break;
    }
    case 115655:
    {
        returnValue = F("Gerhartusstr.");
        break;
    }
    case 115656:
    {
        returnValue = F("Gerhauser Str.");
        break;
    }
    case 115657:
    {
        returnValue = F("Gerhauserstr.");
        break;
    }
    case 115658:
    {
        returnValue = F("Gerhochstr.");
        break;
    }
    case 115659:
    {
        returnValue = F("Gerhof");
        break;
    }
    case 115660:
    {
        returnValue = F("Gerhofweg");
        break;
    }
    case 115661:
    {
        returnValue = F("Gerholling");
        break;
    }
    case 115662:
    {
        returnValue = F("Gerichsee");
        break;
    }
    case 115663:
    {
        returnValue = F("Gerichshainer Str.");
        break;
    }
    case 115664:
    {
        returnValue = F("Gerichtberg");
        break;
    }
    case 115665:
    {
        returnValue = F("Gerichtenstr.");
        break;
    }
    case 115666:
    {
        returnValue = F("Gerichtsbankweg");
        break;
    }
    case 115667:
    {
        returnValue = F("Gerichtsberg");
        break;
    }
    case 115668:
    {
        returnValue = F("Gerichtsfuhlke");
        break;
    }
    case 115669:
    {
        returnValue = F("Gerichtsgasse");
        break;
    }
    case 115670:
    {
        returnValue = F("Gerichtsherrenweg");
        break;
    }
    case 115671:
    {
        returnValue = F("Gerichtshof");
        break;
    }
    case 115672:
    {
        returnValue = F("Gerichtspfad");
        break;
    }
    case 115673:
    {
        returnValue = F("Gerichtsplatz");
        break;
    }
    case 115674:
    {
        returnValue = F("Gerichtsplatzstr.");
        break;
    }
    case 115675:
    {
        returnValue = F("Gerichtsrain");
        break;
    }
    case 115676:
    {
        returnValue = F("Gerichtsrainchen");
        break;
    }
    case 115677:
    {
        returnValue = F("Gerichtsring");
        break;
    }
    case 115678:
    {
        returnValue = F("Gerichtsschreibergassl");
        break;
    }
    case 115679:
    {
        returnValue = F("Gerichtsschreiberweg");
        break;
    }
    case 115680:
    {
        returnValue = F("Gerichtsspitz");
        break;
    }
    case 115681:
    {
        returnValue = F("Gerichtssteig");
        break;
    }
    case 115682:
    {
        returnValue = F("Gerichtsstr.");
        break;
    }
    case 115683:
    {
        returnValue = F("Gerichtstetter Str.");
        break;
    }
    case 115684:
    {
        returnValue = F("Gerichtstr.");
        break;
    }
    case 115685:
    {
        returnValue = F("Gerichtstwete");
        break;
    }
    case 115686:
    {
        returnValue = F("Gerichtswall");
        break;
    }
    case 115687:
    {
        returnValue = F("Gerichtsweg");
        break;
    }
    case 115688:
    {
        returnValue = F("Gerichtswiese");
        break;
    }
    case 115689:
    {
        returnValue = F("Gerichtweg");
        break;
    }
    case 115690:
    {
        returnValue = F("Gerickensberg");
        break;
    }
    case 115691:
    {
        returnValue = F("Gerickestr.");
        break;
    }
    case 115692:
    {
        returnValue = F("Geriethweg");
        break;
    }
    case 115693:
    {
        returnValue = F("Gerikestr.");
        break;
    }
    case 115694:
    {
        returnValue = F("Geringer Str.");
        break;
    }
    case 115695:
    {
        returnValue = F("Geringer Weg");
        break;
    }
    case 115696:
    {
        returnValue = F("Geringer Winkel");
        break;
    }
    case 115697:
    {
        returnValue = F("Geringhausener Str.");
        break;
    }
    case 115698:
    {
        returnValue = F("Geringhauser Mühle");
        break;
    }
    case 115699:
    {
        returnValue = F("Geringhusener Damm");
        break;
    }
    case 115700:
    {
        returnValue = F("Geringhusener Str.");
        break;
    }
    case 115701:
    {
        returnValue = F("Geringsberg");
        break;
    }
    case 115702:
    {
        returnValue = F("Geringstlandstr.");
        break;
    }
    case 115703:
    {
        returnValue = F("Geringswalder Str.");
        break;
    }
    case 115704:
    {
        returnValue = F("Geringsweg");
        break;
    }
    case 115705:
    {
        returnValue = F("Geringweg");
        break;
    }
    case 115706:
    {
        returnValue = F("Gerinneweg");
        break;
    }
    case 115707:
    {
        returnValue = F("Gerisch Skulpturenpark");
        break;
    }
    case 115708:
    {
        returnValue = F("Gerixer Weg");
        break;
    }
    case 115709:
    {
        returnValue = F("Gerk-sin-Spoor");
        break;
    }
    case 115710:
    {
        returnValue = F("Gerkecke");
        break;
    }
    case 115711:
    {
        returnValue = F("Gerken Busch");
        break;
    }
    case 115712:
    {
        returnValue = F("Gerken Gang");
        break;
    }
    case 115713:
    {
        returnValue = F("Gerkenberg");
        break;
    }
    case 115714:
    {
        returnValue = F("Gerkendahler Weg");
        break;
    }
    case 115715:
    {
        returnValue = F("Gerkenhof");
        break;
    }
    case 115716:
    {
        returnValue = F("Gerkenloher Weg");
        break;
    }
    case 115717:
    {
        returnValue = F("Gerkens Busch");
        break;
    }
    case 115718:
    {
        returnValue = F("Gerkens Hof");
        break;
    }
    case 115719:
    {
        returnValue = F("Gerkens Hoff");
        break;
    }
    case 115720:
    {
        returnValue = F("Gerkens-Flatt-Weg");
        break;
    }
    case 115721:
    {
        returnValue = F("Gerkensrode");
        break;
    }
    case 115722:
    {
        returnValue = F("Gerkentorsweg");
        break;
    }
    case 115723:
    {
        returnValue = F("Gerkenweg");
        break;
    }
    case 115724:
    {
        returnValue = F("Gerkerath");
        break;
    }
    case 115725:
    {
        returnValue = F("Gerkerather Mühle");
        break;
    }
    case 115726:
    {
        returnValue = F("Gerkerather Weg");
        break;
    }
    case 115727:
    {
        returnValue = F("Gerkerathwinkel");
        break;
    }
    case 115728:
    {
        returnValue = F("Gerkeswiese");
        break;
    }
    case 115729:
    {
        returnValue = F("Gerkinglohstr.");
        break;
    }
    case 115730:
    {
        returnValue = F("Gerkostr.");
        break;
    }
    case 115731:
    {
        returnValue = F("Gerlach-Weg");
        break;
    }
    case 115732:
    {
        returnValue = F("Gerlach-von-Hohenlohe-Str.");
        break;
    }
    case 115733:
    {
        returnValue = F("Gerlachsgraben");
        break;
    }
    case 115734:
    {
        returnValue = F("Gerlachsheimer Str.");
        break;
    }
    case 115735:
    {
        returnValue = F("Gerlachshof");
        break;
    }
    case 115736:
    {
        returnValue = F("Gerlachshöhe");
        break;
    }
    case 115737:
    {
        returnValue = F("Gerlachstr.");
        break;
    }
    case 115738:
    {
        returnValue = F("Gerlachweg");
        break;
    }
    case 115739:
    {
        returnValue = F("Gerlager Str.");
        break;
    }
    case 115740:
    {
        returnValue = F("Gerlandstr.");
        break;
    }
    case 115741:
    {
        returnValue = F("Gerlandweg");
        break;
    }
    case 115742:
    {
        returnValue = F("Gerleinsstr.");
        break;
    }
    case 115743:
    {
        returnValue = F("Gerlenhofer Str.");
        break;
    }
    case 115744:
    {
        returnValue = F("Gerleserb");
        break;
    }
    case 115745:
    {
        returnValue = F("Gerlesgasse");
        break;
    }
    case 115746:
    {
        returnValue = F("Gerlesreuth");
        break;
    }
    case 115747:
    {
        returnValue = F("Gerleve");
        break;
    }
    case 115748:
    {
        returnValue = F("Gerlever Weg");
        break;
    }
    case 115749:
    {
        returnValue = F("Gerlfanger Str.");
        break;
    }
    case 115750:
    {
        returnValue = F("Gerlhausener Str.");
        break;
    }
    case 115751:
    {
        returnValue = F("Gerlichstr.");
        break;
    }
    case 115752:
    {
        returnValue = F("Gerlinde-Beck-Ring");
        break;
    }
    case 115753:
    {
        returnValue = F("Gerlinde-Beck-Str.");
        break;
    }
    case 115754:
    {
        returnValue = F("Gerlindstr.");
        break;
    }
    case 115755:
    {
        returnValue = F("Gerlinger Str.");
        break;
    }
    case 115756:
    {
        returnValue = F("Gerlinger Weg");
        break;
    }
    case 115757:
    {
        returnValue = F("Gerlinghausen");
        break;
    }
    case 115758:
    {
        returnValue = F("Gerlingser Weg");
        break;
    }
    case 115759:
    {
        returnValue = F("Gerlingsheimer Str.");
        break;
    }
    case 115760:
    {
        returnValue = F("Gerlingstr.");
        break;
    }
    case 115761:
    {
        returnValue = F("Gerlingsweg");
        break;
    }
    case 115762:
    {
        returnValue = F("Gerlingweg");
        break;
    }
    case 115763:
    {
        returnValue = F("Gerlitzenstr.");
        break;
    }
    case 115764:
    {
        returnValue = F("Gerloser Weg");
        break;
    }
    case 115765:
    {
        returnValue = F("Germakehre");
        break;
    }
    case 115766:
    {
        returnValue = F("German-Götz-Str.");
        break;
    }
    case 115767:
    {
        returnValue = F("German-Titow-Str.");
        break;
    }
    case 115768:
    {
        returnValue = F("Germanenallee");
        break;
    }
    case 115769:
    {
        returnValue = F("Germanenpfad");
        break;
    }
    case 115770:
    {
        returnValue = F("Germanenplatz");
        break;
    }
    case 115771:
    {
        returnValue = F("Germanenring");
        break;
    }
    case 115772:
    {
        returnValue = F("Germanenstr.");
        break;
    }
    case 115773:
    {
        returnValue = F("Germanenweg");
        break;
    }
    case 115774:
    {
        returnValue = F("Germania");
        break;
    }
    case 115775:
    {
        returnValue = F("Germaniahof");
        break;
    }
    case 115776:
    {
        returnValue = F("Germaniaplatz");
        break;
    }
    case 115777:
    {
        returnValue = F("Germaniaring");
        break;
    }
    case 115778:
    {
        returnValue = F("Germaniastr.");
        break;
    }
    case 115779:
    {
        returnValue = F("Germaniaweg");
        break;
    }
    case 115780:
    {
        returnValue = F("Germanicusweg");
        break;
    }
    case 115781:
    {
        returnValue = F("Germanikusstr.");
        break;
    }
    case 115782:
    {
        returnValue = F("Germannsberger Str.");
        break;
    }
    case 115783:
    {
        returnValue = F("Germannsbergstr.");
        break;
    }
    case 115784:
    {
        returnValue = F("Germannstr.");
        break;
    }
    case 115785:
    {
        returnValue = F("Germanstr.");
        break;
    }
    case 115786:
    {
        returnValue = F("Germanswiese");
        break;
    }
    case 115787:
    {
        returnValue = F("Germanusstr.");
        break;
    }
    case 115788:
    {
        returnValue = F("Germanweg");
        break;
    }
    case 115789:
    {
        returnValue = F("Germaringer Str.");
        break;
    }
    case 115790:
    {
        returnValue = F("Germarstr.");
        break;
    }
    case 115791:
    {
        returnValue = F("Germelin");
        break;
    }
    case 115792:
    {
        returnValue = F("Germelmannstr.");
        break;
    }
    case 115793:
    {
        returnValue = F("Germelshausen");
        break;
    }
    case 115794:
    {
        returnValue = F("Germenauer Str.");
        break;
    }
    case 115795:
    {
        returnValue = F("Germenauer Winkel");
        break;
    }
    case 115796:
    {
        returnValue = F("Germendonks Kamp");
        break;
    }
    case 115797:
    {
        returnValue = F("Germendorfer Allee");
        break;
    }
    case 115798:
    {
        returnValue = F("Germendorfer Chaussee");
        break;
    }
    case 115799:
    {
        returnValue = F("Germendorfer Dorfstr.");
        break;
    }
    case 115800:
    {
        returnValue = F("Germendorfer Str.");
        break;
    }
    case 115801:
    {
        returnValue = F("Germendorfer Weg");
        break;
    }
    case 115802:
    {
        returnValue = F("Germerdonkstr.");
        break;
    }
    case 115803:
    {
        returnValue = F("Germeringer Str.");
        break;
    }
    case 115804:
    {
        returnValue = F("Germersberger Hauptstr.");
        break;
    }
    case 115805:
    {
        returnValue = F("Germersheimer Landstr.");
        break;
    }
    case 115806:
    {
        returnValue = F("Germersheimer Str.");
        break;
    }
    case 115807:
    {
        returnValue = F("Germersheimstr.");
        break;
    }
    case 115808:
    {
        returnValue = F("Germershäuser Str.");
        break;
    }
    case 115809:
    {
        returnValue = F("Germersweg");
        break;
    }
    case 115810:
    {
        returnValue = F("Germeröder Str.");
        break;
    }
    case 115811:
    {
        returnValue = F("Germeshain");
        break;
    }
    case 115812:
    {
        returnValue = F("Germesheimer Str.");
        break;
    }
    case 115813:
    {
        returnValue = F("Germeter");
        break;
    }
    case 115814:
    {
        returnValue = F("Germetsbachweg");
        break;
    }
    case 115815:
    {
        returnValue = F("Germillerstr.");
        break;
    }
    case 115816:
    {
        returnValue = F("Germinghauser Weg");
        break;
    }
    case 115817:
    {
        returnValue = F("Gern");
        break;
    }
    case 115818:
    {
        returnValue = F("Gern-Weg");
        break;
    }
    case 115819:
    {
        returnValue = F("Gernacher Str.");
        break;
    }
    case 115820:
    {
        returnValue = F("Gernacher Weg");
        break;
    }
    case 115821:
    {
        returnValue = F("Gernackerstr.");
        break;
    }
    case 115822:
    {
        returnValue = F("Gernackerweg");
        break;
    }
    case 115823:
    {
        returnValue = F("Gernandstr.");
        break;
    }
    case 115824:
    {
        returnValue = F("Gernbachweg");
        break;
    }
    case 115825:
    {
        returnValue = F("Gernbeckstr.");
        break;
    }
    case 115826:
    {
        returnValue = F("Gernbergweg");
        break;
    }
    case 115827:
    {
        returnValue = F("Gernbreite");
        break;
    }
    case 115828:
    {
        returnValue = F("Gerndorf");
        break;
    }
    case 115829:
    {
        returnValue = F("Gerndorfer Drömling");
        break;
    }
    case 115830:
    {
        returnValue = F("Gerndorferhöhe");
        break;
    }
    case 115831:
    {
        returnValue = F("Gernelsweg");
        break;
    }
    case 115832:
    {
        returnValue = F("Gerner Allee");
        break;
    }
    case 115833:
    {
        returnValue = F("Gerner Höhenweg");
        break;
    }
    case 115834:
    {
        returnValue = F("Gerner Platz");
        break;
    }
    case 115835:
    {
        returnValue = F("Gerner Ring");
        break;
    }
    case 115836:
    {
        returnValue = F("Gerner Str.");
        break;
    }
    case 115837:
    {
        returnValue = F("Gernerationenpark Kemper Graben");
        break;
    }
    case 115838:
    {
        returnValue = F("Gernerstr.");
        break;
    }
    case 115839:
    {
        returnValue = F("Gernerweg");
        break;
    }
    case 115840:
    {
        returnValue = F("Gernewitzer Str.");
        break;
    }
    case 115841:
    {
        returnValue = F("Gernfeldstr.");
        break;
    }
    case 115842:
    {
        returnValue = F("Gernfeldweg");
        break;
    }
    case 115843:
    {
        returnValue = F("Gerngraben");
        break;
    }
    case 115844:
    {
        returnValue = F("Gerngärten");
        break;
    }
    case 115845:
    {
        returnValue = F("Gernhaldenweg");
        break;
    }
    case 115846:
    {
        returnValue = F("Gernheim");
        break;
    }
    case 115847:
    {
        returnValue = F("Gernheimer Heide");
        break;
    }
    case 115848:
    {
        returnValue = F("Gernholtweg");
        break;
    }
    case 115849:
    {
        returnValue = F("Gernholzweg");
        break;
    }
    case 115850:
    {
        returnValue = F("Gernika-Brücke");
        break;
    }
    case 115851:
    {
        returnValue = F("Gernlandstr.");
        break;
    }
    case 115852:
    {
        returnValue = F("Gernleitenweg");
        break;
    }
    case 115853:
    {
        returnValue = F("Gernlindener Str.");
        break;
    }
    case 115854:
    {
        returnValue = F("Gernlindener Weg");
        break;
    }
    case 115855:
    {
        returnValue = F("Gernmühl");
        break;
    }
    case 115856:
    {
        returnValue = F("Gernoldskamp");
        break;
    }
    case 115857:
    {
        returnValue = F("Gernot-Kopp-Weg");
        break;
    }
    case 115858:
    {
        returnValue = F("Gernotstr.");
        break;
    }
    case 115859:
    {
        returnValue = F("Gernotweg");
        break;
    }
    case 115860:
    {
        returnValue = F("Gernroder Str.");
        break;
    }
    case 115861:
    {
        returnValue = F("Gernröder Chaussee");
        break;
    }
    case 115862:
    {
        returnValue = F("Gernröder Gartenstr.");
        break;
    }
    case 115863:
    {
        returnValue = F("Gernröder Str.");
        break;
    }
    case 115864:
    {
        returnValue = F("Gernröder Weg");
        break;
    }
    case 115865:
    {
        returnValue = F("Gernsbach");
        break;
    }
    case 115866:
    {
        returnValue = F("Gernsbacher Steige");
        break;
    }
    case 115867:
    {
        returnValue = F("Gernsbacher Str.");
        break;
    }
    case 115868:
    {
        returnValue = F("Gernsdorfer Str.");
        break;
    }
    case 115869:
    {
        returnValue = F("Gernsheimer Fahrt");
        break;
    }
    case 115870:
    {
        returnValue = F("Gernsheimer Landstr.");
        break;
    }
    case 115871:
    {
        returnValue = F("Gernsheimer Str.");
        break;
    }
    case 115872:
    {
        returnValue = F("Gernsheimer Weg");
        break;
    }
    case 115873:
    {
        returnValue = F("Gernspitzstr.");
        break;
    }
    case 115874:
    {
        returnValue = F("Gernstedter Str.");
        break;
    }
    case 115875:
    {
        returnValue = F("Gernstein");
        break;
    }
    case 115876:
    {
        returnValue = F("Gernstr.");
        break;
    }
    case 115877:
    {
        returnValue = F("Gernsweg");
        break;
    }
    case 115878:
    {
        returnValue = F("Gernweg");
        break;
    }
    case 115879:
    {
        returnValue = F("Gernwegbrücke");
        break;
    }
    case 115880:
    {
        returnValue = F("Gernäcker");
        break;
    }
    case 115881:
    {
        returnValue = F("Gernäckerweg");
        break;
    }
    case 115882:
    {
        returnValue = F("Gero's Hof Twete");
        break;
    }
    case 115883:
    {
        returnValue = F("Gerodaer Str.");
        break;
    }
    case 115884:
    {
        returnValue = F("Gerodigsberge");
        break;
    }
    case 115885:
    {
        returnValue = F("Gerokstr.");
        break;
    }
    case 115886:
    {
        returnValue = F("Gerokweg");
        break;
    }
    case 115887:
    {
        returnValue = F("Gerold");
        break;
    }
    case 115888:
    {
        returnValue = F("Gerold Damm");
        break;
    }
    case 115889:
    {
        returnValue = F("Gerold-Hellmers-Str.");
        break;
    }
    case 115890:
    {
        returnValue = F("Gerold-Otten-Weg");
        break;
    }
    case 115891:
    {
        returnValue = F("Geroldring");
        break;
    }
    case 115892:
    {
        returnValue = F("Geroldsauer Str.");
        break;
    }
    case 115893:
    {
        returnValue = F("Geroldsecker Str.");
        break;
    }
    case 115894:
    {
        returnValue = F("Geroldsecker Vorstadt");
        break;
    }
    case 115895:
    {
        returnValue = F("Geroldseckstr.");
        break;
    }
    case 115896:
    {
        returnValue = F("Geroldseer Str.");
        break;
    }
    case 115897:
    {
        returnValue = F("Geroldsgasse");
        break;
    }
    case 115898:
    {
        returnValue = F("Geroldsgrund");
        break;
    }
    case 115899:
    {
        returnValue = F("Geroldsgrüner Str.");
        break;
    }
    case 115900:
    {
        returnValue = F("Geroldshauser Str.");
        break;
    }
    case 115901:
    {
        returnValue = F("Geroldshäuser Str.");
        break;
    }
    case 115902:
    {
        returnValue = F("Geroldsreuth");
        break;
    }
    case 115903:
    {
        returnValue = F("Geroldsreuther Str.");
        break;
    }
    case 115904:
    {
        returnValue = F("Geroldstalstr.");
        break;
    }
    case 115905:
    {
        returnValue = F("Geroldsteiner Weg");
        break;
    }
    case 115906:
    {
        returnValue = F("Geroldstr.");
        break;
    }
    case 115907:
    {
        returnValue = F("Geroldswinder Höhe");
        break;
    }
    case 115908:
    {
        returnValue = F("Gerolfinger Str.");
        break;
    }
    case 115909:
    {
        returnValue = F("Gerolfstr.");
        break;
    }
    case 115910:
    {
        returnValue = F("Gerolinger Str.");
        break;
    }
    case 115911:
    {
        returnValue = F("Gerolsbacher Str.");
        break;
    }
    case 115912:
    {
        returnValue = F("Gerolsheimer Str.");
        break;
    }
    case 115913:
    {
        returnValue = F("Gerolsteiner Str.");
        break;
    }
    case 115914:
    {
        returnValue = F("Gerolstr.");
        break;
    }
    case 115915:
    {
        returnValue = F("Geroltzhäuser Weg");
        break;
    }
    case 115916:
    {
        returnValue = F("Gerolzahner Str.");
        break;
    }
    case 115917:
    {
        returnValue = F("Gerolzahner Weg");
        break;
    }
    case 115918:
    {
        returnValue = F("Gerolzhofer Str.");
        break;
    }
    case 115919:
    {
        returnValue = F("Gerolzhäuser Weg");
        break;
    }
    case 115920:
    {
        returnValue = F("Gerolzhöfer Str.");
        break;
    }
    case 115921:
    {
        returnValue = F("Geropark");
        break;
    }
    case 115922:
    {
        returnValue = F("Geroplatz");
        break;
    }
    case 115923:
    {
        returnValue = F("Gerorg-Wolfgang-Wedel-Str.");
        break;
    }
    case 115924:
    {
        returnValue = F("Gerostr.");
        break;
    }
    case 115925:
    {
        returnValue = F("Gerottener Weg");
        break;
    }
    case 115926:
    {
        returnValue = F("Geroweg");
        break;
    }
    case 115927:
    {
        returnValue = F("Gerrenweg");
        break;
    }
    case 115928:
    {
        returnValue = F("Gerresheimer Landstr.");
        break;
    }
    case 115929:
    {
        returnValue = F("Gerresheimer Str.");
        break;
    }
    case 115930:
    {
        returnValue = F("Gerresheimer Weg");
        break;
    }
    case 115931:
    {
        returnValue = F("Gerressener Str.");
        break;
    }
    case 115932:
    {
        returnValue = F("Gerretsfeld");
        break;
    }
    case 115933:
    {
        returnValue = F("Gerretshöfelweg");
        break;
    }
    case 115934:
    {
        returnValue = F("Gerrickstr.");
        break;
    }
    case 115935:
    {
        returnValue = F("Gerricusplatz");
        break;
    }
    case 115936:
    {
        returnValue = F("Gerricusstr.");
        break;
    }
    case 115937:
    {
        returnValue = F("Gerriet-Taddiken-Str.");
        break;
    }
    case 115938:
    {
        returnValue = F("Gerringhausen");
        break;
    }
    case 115939:
    {
        returnValue = F("Gerrit-Engelke-Str.");
        break;
    }
    case 115940:
    {
        returnValue = F("Gerrit-Engelke-Weg");
        break;
    }
    case 115941:
    {
        returnValue = F("Gerrit-Evers-Str.");
        break;
    }
    case 115942:
    {
        returnValue = F("Gerrit-Herlyn-Str.");
        break;
    }
    case 115943:
    {
        returnValue = F("Gerrit-de-Haas-Str.");
        break;
    }
    case 115944:
    {
        returnValue = F("Gerrits Diek");
        break;
    }
    case 115945:
    {
        returnValue = F("Gerritzenweg");
        break;
    }
    case 115946:
    {
        returnValue = F("Gersbach-Au");
        break;
    }
    case 115947:
    {
        returnValue = F("Gersbacher Str.");
        break;
    }
    case 115948:
    {
        returnValue = F("Gersbacher Weg");
        break;
    }
    case 115949:
    {
        returnValue = F("Gersbachtalbrücke");
        break;
    }
    case 115950:
    {
        returnValue = F("Gersbachtalstr.");
        break;
    }
    case 115951:
    {
        returnValue = F("Gersbachweg");
        break;
    }
    case 115952:
    {
        returnValue = F("Gersbeckstr.");
        break;
    }
    case 115953:
    {
        returnValue = F("Gersbergerhofstr.");
        break;
    }
    case 115954:
    {
        returnValue = F("Gersbeuler Str.");
        break;
    }
    case 115955:
    {
        returnValue = F("Gerschweiler Str.");
        break;
    }
    case 115956:
    {
        returnValue = F("Gersdorf");
        break;
    }
    case 115957:
    {
        returnValue = F("Gersdorf Ausbau");
        break;
    }
    case 115958:
    {
        returnValue = F("Gersdorfer Burgweg");
        break;
    }
    case 115959:
    {
        returnValue = F("Gersdorfer Fußweg");
        break;
    }
    case 115960:
    {
        returnValue = F("Gersdorfer Gasse");
        break;
    }
    case 115961:
    {
        returnValue = F("Gersdorfer Hauptstr.");
        break;
    }
    case 115962:
    {
        returnValue = F("Gersdorfer Str.");
        break;
    }
    case 115963:
    {
        returnValue = F("Gersdorfer Weg");
        break;
    }
    case 115964:
    {
        returnValue = F("Gersdorffstr.");
        break;
    }
    case 115965:
    {
        returnValue = F("Gersdorfstr.");
        break;
    }
    case 115966:
    {
        returnValue = F("Gersfelder Str.");
        break;
    }
    case 115967:
    {
        returnValue = F("Gersfelder Weg");
        break;
    }
    case 115968:
    {
        returnValue = F("Gersheimer Str.");
        break;
    }
    case 115969:
    {
        returnValue = F("Gershofstr.");
        break;
    }
    case 115970:
    {
        returnValue = F("Gershwinring");
        break;
    }
    case 115971:
    {
        returnValue = F("Gershwinstr.");
        break;
    }
    case 115972:
    {
        returnValue = F("Gershäuser Hof");
        break;
    }
    case 115973:
    {
        returnValue = F("Gershäuser Str.");
        break;
    }
    case 115974:
    {
        returnValue = F("Gerskamp");
        break;
    }
    case 115975:
    {
        returnValue = F("Gersnethe");
        break;
    }
    case 115976:
    {
        returnValue = F("Gersonstr.");
        break;
    }
    case 115977:
    {
        returnValue = F("Gerspoint");
        break;
    }
    case 115978:
    {
        returnValue = F("Gersprenzbrücke");
        break;
    }
    case 115979:
    {
        returnValue = F("Gersprenzstr.");
        break;
    }
    case 115980:
    {
        returnValue = F("Gersprenztalstr.");
        break;
    }
    case 115981:
    {
        returnValue = F("Gersprenzweg");
        break;
    }
    case 115982:
    {
        returnValue = F("Gerstackerstr.");
        break;
    }
    case 115983:
    {
        returnValue = F("Gerstau");
        break;
    }
    case 115984:
    {
        returnValue = F("Gerstbuschstr.");
        break;
    }
    case 115985:
    {
        returnValue = F("Gerstedter Weg");
        break;
    }
    case 115986:
    {
        returnValue = F("Gersteinring");
        break;
    }
    case 115987:
    {
        returnValue = F("Gersteinstr.");
        break;
    }
    case 115988:
    {
        returnValue = F("Gerstekamp");
        break;
    }
    case 115989:
    {
        returnValue = F("Gerstekühl");
        break;
    }
    case 115990:
    {
        returnValue = F("Gerstel&Bubenrech");
        break;
    }
    case 115991:
    {
        returnValue = F("Gerstelsweg");
        break;
    }
    case 115992:
    {
        returnValue = F("Gerstelweg");
        break;
    }
    case 115993:
    {
        returnValue = F("Gerstenacker");
        break;
    }
    case 115994:
    {
        returnValue = F("Gerstenackerstr.");
        break;
    }
    case 115995:
    {
        returnValue = F("Gerstenberg");
        break;
    }
    case 115996:
    {
        returnValue = F("Gerstenberger Str.");
        break;
    }
    case 115997:
    {
        returnValue = F("Gerstenbergerstr.");
        break;
    }
    case 115998:
    {
        returnValue = F("Gerstenbergkpromenade");
        break;
    }
    case 115999:
    {
        returnValue = F("Gerstenbergstr.");
        break;
    }
    case 116000:
    {
        returnValue = F("Gerstenbergweg");
        break;
    }
    case 116001:
    {
        returnValue = F("Gerstenblöcke");
        break;
    }
    case 116002:
    {
        returnValue = F("Gerstenblöcken");
        break;
    }
    case 116003:
    {
        returnValue = F("Gerstenbreiten");
        break;
    }
    case 116004:
    {
        returnValue = F("Gerstenbrink");
        break;
    }
    case 116005:
    {
        returnValue = F("Gerstenecke");
        break;
    }
    case 116006:
    {
        returnValue = F("Gerstener Str.");
        break;
    }
    case 116007:
    {
        returnValue = F("Gerstenfeld");
        break;
    }
    case 116008:
    {
        returnValue = F("Gerstenfeldstr.");
        break;
    }
    case 116009:
    {
        returnValue = F("Gerstenfeldweg");
        break;
    }
    case 116010:
    {
        returnValue = F("Gerstengarten");
        break;
    }
    case 116011:
    {
        returnValue = F("Gerstengrund");
        break;
    }
    case 116012:
    {
        returnValue = F("Gerstengrundhöhe");
        break;
    }
    case 116013:
    {
        returnValue = F("Gerstengründe");
        break;
    }
    case 116014:
    {
        returnValue = F("Gerstengärten");
        break;
    }
    case 116015:
    {
        returnValue = F("Gerstenhagen");
        break;
    }
    case 116016:
    {
        returnValue = F("Gerstenhalmstr.");
        break;
    }
    case 116017:
    {
        returnValue = F("Gerstenhalmweg");
        break;
    }
    case 116018:
    {
        returnValue = F("Gerstenhof");
        break;
    }
    case 116019:
    {
        returnValue = F("Gerstenhofstr.");
        break;
    }
    case 116020:
    {
        returnValue = F("Gerstenkamp");
        break;
    }
    case 116021:
    {
        returnValue = F("Gerstenkamper Weg");
        break;
    }
    case 116022:
    {
        returnValue = F("Gerstenkampstr.");
        break;
    }
    case 116023:
    {
        returnValue = F("Gerstenlandsweg");
        break;
    }
    case 116024:
    {
        returnValue = F("Gerstenlandweg");
        break;
    }
    case 116025:
    {
        returnValue = F("Gerstenländer");
        break;
    }
    case 116026:
    {
        returnValue = F("Gerstenmühlstr.");
        break;
    }
    case 116027:
    {
        returnValue = F("Gerstenrain");
        break;
    }
    case 116028:
    {
        returnValue = F("Gerstenreuteweg");
        break;
    }
    case 116029:
    {
        returnValue = F("Gerstenring");
        break;
    }
    case 116030:
    {
        returnValue = F("Gerstenschlag");
        break;
    }
    case 116031:
    {
        returnValue = F("Gerstenstieg");
        break;
    }
    case 116032:
    {
        returnValue = F("Gerstenstiege");
        break;
    }
    case 116033:
    {
        returnValue = F("Gerstenstr.");
        break;
    }
    case 116034:
    {
        returnValue = F("Gerstentwiete");
        break;
    }
    case 116035:
    {
        returnValue = F("Gerstenweg");
        break;
    }
    case 116036:
    {
        returnValue = F("Gerstenwinkel");
        break;
    }
    case 116037:
    {
        returnValue = F("Gerstenäcker");
        break;
    }
    case 116038:
    {
        returnValue = F("Gerstenäckerweg");
        break;
    }
    case 116039:
    {
        returnValue = F("Gersterter Weg");
        break;
    }
    case 116040:
    {
        returnValue = F("Gerstettener Weg");
        break;
    }
    case 116041:
    {
        returnValue = F("Gerstetter Str.");
        break;
    }
    case 116042:
    {
        returnValue = F("Gersteweg");
        break;
    }
    case 116043:
    {
        returnValue = F("Gerstewitzer Weg");
        break;
    }
    case 116044:
    {
        returnValue = F("Gerstgarten");
        break;
    }
    case 116045:
    {
        returnValue = F("Gerstgrund");
        break;
    }
    case 116046:
    {
        returnValue = F("Gersthagen");
        break;
    }
    case 116047:
    {
        returnValue = F("Gersthofener Str.");
        break;
    }
    case 116048:
    {
        returnValue = F("Gersthofer Str.");
        break;
    }
    case 116049:
    {
        returnValue = F("Gersthofweg");
        break;
    }
    case 116050:
    {
        returnValue = F("Gerstkamp");
        break;
    }
    case 116051:
    {
        returnValue = F("Gerstkampstr.");
        break;
    }
    case 116052:
    {
        returnValue = F("Gerstlacher Weg");
        break;
    }
    case 116053:
    {
        returnValue = F("Gerstlaich");
        break;
    }
    case 116054:
    {
        returnValue = F("Gerstlandstr.");
        break;
    }
    case 116055:
    {
        returnValue = F("Gerstlandweg");
        break;
    }
    case 116056:
    {
        returnValue = F("Gerstlestr.");
        break;
    }
    case 116057:
    {
        returnValue = F("Gerstleweg");
        break;
    }
    case 116058:
    {
        returnValue = F("Gerstlinger Str.");
        break;
    }
    case 116059:
    {
        returnValue = F("Gerstmayrstr.");
        break;
    }
    case 116060:
    {
        returnValue = F("Gerstnerstr.");
        break;
    }
    case 116061:
    {
        returnValue = F("Gerstr.");
        break;
    }
    case 116062:
    {
        returnValue = F("Gerstunger Allee");
        break;
    }
    case 116063:
    {
        returnValue = F("Gerstunger Str.");
        break;
    }
    case 116064:
    {
        returnValue = F("Gerstäckenweg");
        break;
    }
    case 116065:
    {
        returnValue = F("Gerstäckerstr.");
        break;
    }
    case 116066:
    {
        returnValue = F("Gerstäckerweg");
        break;
    }
    case 116067:
    {
        returnValue = F("Gerswalder Weg");
        break;
    }
    case 116068:
    {
        returnValue = F("Gersweilerbrücke");
        break;
    }
    case 116069:
    {
        returnValue = F("Gersweilerstr.");
        break;
    }
    case 116070:
    {
        returnValue = F("Gersweilerweg");
        break;
    }
    case 116071:
    {
        returnValue = F("Gert-Bülsinck-Str.");
        break;
    }
    case 116072:
    {
        returnValue = F("Gert-Engels-Platz");
        break;
    }
    case 116073:
    {
        returnValue = F("Gert-Fröbe-Str.");
        break;
    }
    case 116074:
    {
        returnValue = F("Gert-Hofmann-Str.");
        break;
    }
    case 116075:
    {
        returnValue = F("Gert-Magnus-Platz");
        break;
    }
    case 116076:
    {
        returnValue = F("Gert-W.-Schulze-Str.");
        break;
    }
    case 116077:
    {
        returnValue = F("Gerta-Overbeck-Ring");
        break;
    }
    case 116078:
    {
        returnValue = F("Gerta-Overbeck-Str.");
        break;
    }
    case 116079:
    {
        returnValue = F("Gerta-Overbeck-Weg");
        break;
    }
    case 116080:
    {
        returnValue = F("Gertaudenweg");
        break;
    }
    case 116081:
    {
        returnValue = F("Gertbergstr.");
        break;
    }
    case 116082:
    {
        returnValue = F("Gerteisenstr.");
        break;
    }
    case 116083:
    {
        returnValue = F("Gertelbachstr.");
        break;
    }
    case 116084:
    {
        returnValue = F("Gertelsklingen");
        break;
    }
    case 116085:
    {
        returnValue = F("Gertenbacher Str.");
        break;
    }
    case 116086:
    {
        returnValue = F("Gertenbachstr.");
        break;
    }
    case 116087:
    {
        returnValue = F("Gertenberg-Rundweg");
        break;
    }
    case 116088:
    {
        returnValue = F("Gertenstieg");
        break;
    }
    case 116089:
    {
        returnValue = F("Gertenstr.");
        break;
    }
    case 116090:
    {
        returnValue = F("Gertentalweg");
        break;
    }
    case 116091:
    {
        returnValue = F("Gerteröder Str.");
        break;
    }
    case 116092:
    {
        returnValue = F("Gerteröder Weg");
        break;
    }
    case 116093:
    {
        returnValue = F("Gertewitzer Str.");
        break;
    }
    case 116094:
    {
        returnValue = F("Gerther Dahl");
        break;
    }
    case 116095:
    {
        returnValue = F("Gerther Heide");
        break;
    }
    case 116096:
    {
        returnValue = F("Gerther Landwehr");
        break;
    }
    case 116097:
    {
        returnValue = F("Gerther Str.");
        break;
    }
    case 116098:
    {
        returnValue = F("Gerthofsteige");
        break;
    }
    case 116099:
    {
        returnValue = F("Gertholzweg");
        break;
    }
    case 116100:
    {
        returnValue = F("Gerthäuser Str.");
        break;
    }
    case 116101:
    {
        returnValue = F("Gerthäuser Weg");
        break;
    }
    case 116102:
    {
        returnValue = F("Gerti-Jung-Weg");
        break;
    }
    case 116103:
    {
        returnValue = F("Gertitzer Weg");
        break;
    }
    case 116104:
    {
        returnValue = F("Gertitzscher Str.");
        break;
    }
    case 116105:
    {
        returnValue = F("Gertkenstr.");
        break;
    }
    case 116106:
    {
        returnValue = F("Gertmicke");
        break;
    }
    case 116107:
    {
        returnValue = F("Gertraud-Kaltenecker-Str.");
        break;
    }
    case 116108:
    {
        returnValue = F("Gertraud-Kölbl-Str.");
        break;
    }
    case 116109:
    {
        returnValue = F("Gertraud-Rostosky-Str.");
        break;
    }
    case 116110:
    {
        returnValue = F("Gertraudenpark");
        break;
    }
    case 116111:
    {
        returnValue = F("Gertraudenstr.");
        break;
    }
    case 116112:
    {
        returnValue = F("Gertraudenweg");
        break;
    }
    case 116113:
    {
        returnValue = F("Gertraudgasse");
        break;
    }
    case 116114:
    {
        returnValue = F("Gertraudstr.");
        break;
    }
    case 116115:
    {
        returnValue = F("Gertraudtenstr.");
        break;
    }
    case 116116:
    {
        returnValue = F("Gertrud-Bartels-Weg");
        break;
    }
    case 116117:
    {
        returnValue = F("Gertrud-Barthel-Str.");
        break;
    }
    case 116118:
    {
        returnValue = F("Gertrud-Beinling-Weg");
        break;
    }
    case 116119:
    {
        returnValue = F("Gertrud-Bäumer-Allee");
        break;
    }
    case 116120:
    {
        returnValue = F("Gertrud-Bäumer-Str.");
        break;
    }
    case 116121:
    {
        returnValue = F("Gertrud-Bäumer-Weg");
        break;
    }
    case 116122:
    {
        returnValue = F("Gertrud-Droste-Platz");
        break;
    }
    case 116123:
    {
        returnValue = F("Gertrud-Ehrle-Weg");
        break;
    }
    case 116124:
    {
        returnValue = F("Gertrud-Eysoldt-Str.");
        break;
    }
    case 116125:
    {
        returnValue = F("Gertrud-Feiertag-Str.");
        break;
    }
    case 116126:
    {
        returnValue = F("Gertrud-Feiertag-Weg");
        break;
    }
    case 116127:
    {
        returnValue = F("Gertrud-Gaedt-Str.");
        break;
    }
    case 116128:
    {
        returnValue = F("Gertrud-Groth-Ring");
        break;
    }
    case 116129:
    {
        returnValue = F("Gertrud-Grunow-Str.");
        break;
    }
    case 116130:
    {
        returnValue = F("Gertrud-Gröninger-Str.");
        break;
    }
    case 116131:
    {
        returnValue = F("Gertrud-Herz-Str.");
        break;
    }
    case 116132:
    {
        returnValue = F("Gertrud-Icks-Weg");
        break;
    }
    case 116133:
    {
        returnValue = F("Gertrud-Jaspers-Weg");
        break;
    }
    case 116134:
    {
        returnValue = F("Gertrud-Koch-Str.");
        break;
    }
    case 116135:
    {
        returnValue = F("Gertrud-Kochanowski-Weg");
        break;
    }
    case 116136:
    {
        returnValue = F("Gertrud-Kolmar-Str.");
        break;
    }
    case 116137:
    {
        returnValue = F("Gertrud-Kolmar-Weg");
        break;
    }
    case 116138:
    {
        returnValue = F("Gertrud-Küpper-Str.");
        break;
    }
    case 116139:
    {
        returnValue = F("Gertrud-Luckner-Str.");
        break;
    }
    case 116140:
    {
        returnValue = F("Gertrud-Luckner-Weg");
        break;
    }
    case 116141:
    {
        returnValue = F("Gertrud-Ludwig-Weg");
        break;
    }
    case 116142:
    {
        returnValue = F("Gertrud-Noch-Str.");
        break;
    }
    case 116143:
    {
        returnValue = F("Gertrud-Pieter-Platz");
        break;
    }
    case 116144:
    {
        returnValue = F("Gertrud-Piter-Platz");
        break;
    }
    case 116145:
    {
        returnValue = F("Gertrud-Reichardt-Str.");
        break;
    }
    case 116146:
    {
        returnValue = F("Gertrud-Savelsberg-Weg");
        break;
    }
    case 116147:
    {
        returnValue = F("Gertrud-Scheene-Str.");
        break;
    }
    case 116148:
    {
        returnValue = F("Gertrud-Schloss-Str.");
        break;
    }
    case 116149:
    {
        returnValue = F("Gertrud-Schmitz-Str.");
        break;
    }
    case 116150:
    {
        returnValue = F("Gertrud-Seele-Weg");
        break;
    }
    case 116151:
    {
        returnValue = F("Gertrud-Steinhauser-Str.");
        break;
    }
    case 116152:
    {
        returnValue = F("Gertrud-Storm-Str.");
        break;
    }
    case 116153:
    {
        returnValue = F("Gertrud-Thyssen-Str.");
        break;
    }
    case 116154:
    {
        returnValue = F("Gertrud-Ulmann-Str.");
        break;
    }
    case 116155:
    {
        returnValue = F("Gertrud-Weber-Gässchen");
        break;
    }
    case 116156:
    {
        returnValue = F("Gertrud-Weiler-Str.");
        break;
    }
    case 116157:
    {
        returnValue = F("Gertrud-Weinhold-Weg");
        break;
    }
    case 116158:
    {
        returnValue = F("Gertrud-Woker-Str.");
        break;
    }
    case 116159:
    {
        returnValue = F("Gertrud-Zillbach-Str.");
        break;
    }
    case 116160:
    {
        returnValue = F("Gertrud-van-Calker-Str.");
        break;
    }
    case 116161:
    {
        returnValue = F("Gertrud-von-Le Fort-Weg");
        break;
    }
    case 116162:
    {
        returnValue = F("Gertrud-von-Le-Fort-Str.");
        break;
    }
    case 116163:
    {
        returnValue = F("Gertrud-von-Le-Fort-Weg");
        break;
    }
    case 116164:
    {
        returnValue = F("Gertrud-von-Sickingen-Weg");
        break;
    }
    case 116165:
    {
        returnValue = F("Gertrud-von-le-Fort-Str.");
        break;
    }
    case 116166:
    {
        returnValue = F("Gertrud-von-le-Fort-Weg");
        break;
    }
    case 116167:
    {
        returnValue = F("Gertrude-Blanch-Str.");
        break;
    }
    case 116168:
    {
        returnValue = F("Gertrude-Stein-Str.");
        break;
    }
    case 116169:
    {
        returnValue = F("Gertrude-von-Ubisch-Str.");
        break;
    }
    case 116170:
    {
        returnValue = F("Gertruden-Schneise");
        break;
    }
    case 116171:
    {
        returnValue = F("Gertrudenhof");
        break;
    }
    case 116172:
    {
        returnValue = F("Gertrudenpark");
        break;
    }
    case 116173:
    {
        returnValue = F("Gertrudenplatz");
        break;
    }
    case 116174:
    {
        returnValue = F("Gertrudenring");
        break;
    }
    case 116175:
    {
        returnValue = F("Gertrudenstieg");
        break;
    }
    case 116176:
    {
        returnValue = F("Gertrudenstr.");
        break;
    }
    case 116177:
    {
        returnValue = F("Gertrudenweg");
        break;
    }
    case 116178:
    {
        returnValue = F("Gertrudis Weg");
        break;
    }
    case 116179:
    {
        returnValue = F("Gertrudisgärten");
        break;
    }
    case 116180:
    {
        returnValue = F("Gertrudisplatz");
        break;
    }
    case 116181:
    {
        returnValue = F("Gertrudisstr.");
        break;
    }
    case 116182:
    {
        returnValue = F("Gertrudisweg");
        break;
    }
    case 116183:
    {
        returnValue = F("Gertrudstr.");
        break;
    }
    case 116184:
    {
        returnValue = F("Gertrund-von-le-Fort-Weg");
        break;
    }
    case 116185:
    {
        returnValue = F("Gertschenbühlweg");
        break;
    }
    case 116186:
    {
        returnValue = F("Gertsheckenstr.");
        break;
    }
    case 116187:
    {
        returnValue = F("Gertskamp");
        break;
    }
    case 116188:
    {
        returnValue = F("Gertweiler");
        break;
    }
    case 116189:
    {
        returnValue = F("Gerty-Cori-Str.");
        break;
    }
    case 116190:
    {
        returnValue = F("Gerty-Spies-Str.");
        break;
    }
    case 116191:
    {
        returnValue = F("Gertzweg");
        break;
    }
    case 116192:
    {
        returnValue = F("Gerundweg");
        break;
    }
    case 116193:
    {
        returnValue = F("Gervaisstr.");
        break;
    }
    case 116194:
    {
        returnValue = F("Gervasiusstr.");
        break;
    }
    case 116195:
    {
        returnValue = F("Gerverotstr.");
        break;
    }
    case 116196:
    {
        returnValue = F("Gerverotweg");
        break;
    }
    case 116197:
    {
        returnValue = F("Gervershagener Str.");
        break;
    }
    case 116198:
    {
        returnValue = F("Gervinusstr.");
        break;
    }
    case 116199:
    {
        returnValue = F("Gervinusweg");
        break;
    }
    case 116200:
    {
        returnValue = F("Gerwerbegebiet Natzing 9-11");
        break;
    }
    case 116201:
    {
        returnValue = F("Gerwersweg");
        break;
    }
    case 116202:
    {
        returnValue = F("Gerwiesenstr.");
        break;
    }
    case 116203:
    {
        returnValue = F("Gerwigstr.");
        break;
    }
    case 116204:
    {
        returnValue = F("Gerwik-Blarer-Str.");
        break;
    }
    case 116205:
    {
        returnValue = F("Gerwinghook");
        break;
    }
    case 116206:
    {
        returnValue = F("Gerwinnstr.");
        break;
    }
    case 116207:
    {
        returnValue = F("Gerwins Hof");
        break;
    }
    case 116208:
    {
        returnValue = F("Gerwinweg");
        break;
    }
    case 116209:
    {
        returnValue = F("Gerwischer Str.");
        break;
    }
    case 116210:
    {
        returnValue = F("Gerwischer Weg");
        break;
    }
    case 116211:
    {
        returnValue = F("Gerxeweg");
        break;
    }
    case 116212:
    {
        returnValue = F("Gerzener Str.");
        break;
    }
    case 116213:
    {
        returnValue = F("Gerzer Schlag");
        break;
    }
    case 116214:
    {
        returnValue = F("Gerzer Str.");
        break;
    }
    case 116215:
    {
        returnValue = F("Gerämmestr.");
        break;
    }
    case 116216:
    {
        returnValue = F("Geränkstr.");
        break;
    }
    case 116217:
    {
        returnValue = F("Gerätehausweg");
        break;
    }
    case 116218:
    {
        returnValue = F("Geräthengasse");
        break;
    }
    case 116219:
    {
        returnValue = F("Geräuschmeßstrecke Fa. Bastuck");
        break;
    }
    case 116220:
    {
        returnValue = F("Geräuthweg");
        break;
    }
    case 116221:
    {
        returnValue = F("Geröder Str.");
        break;
    }
    case 116222:
    {
        returnValue = F("Geröderweg");
        break;
    }
    case 116223:
    {
        returnValue = F("Gerölleweg");
        break;
    }
    case 116224:
    {
        returnValue = F("Geröllstr.");
        break;
    }
    case 116225:
    {
        returnValue = F("Geröllweg");
        break;
    }
    case 116226:
    {
        returnValue = F("Gerüstbauerring");
        break;
    }
    case 116227:
    {
        returnValue = F("Gerüststr.");
        break;
    }
    case 116228:
    {
        returnValue = F("Gesandtenstr.");
        break;
    }
    case 116229:
    {
        returnValue = F("Gesastr.");
        break;
    }
    case 116230:
    {
        returnValue = F("Geschamp");
        break;
    }
    case 116231:
    {
        returnValue = F("Gesche Köllers Weg");
        break;
    }
    case 116232:
    {
        returnValue = F("Gescheidstr.");
        break;
    }
    case 116233:
    {
        returnValue = F("Gescheidt");
        break;
    }
    case 116234:
    {
        returnValue = F("Geschenberger Weg");
        break;
    }
    case 116235:
    {
        returnValue = F("Gescher Damm");
        break;
    }
    case 116236:
    {
        returnValue = F("Gescher Dyk");
        break;
    }
    case 116237:
    {
        returnValue = F("Gescherer Str.");
        break;
    }
    case 116238:
    {
        returnValue = F("Geschermannweg");
        break;
    }
    case 116239:
    {
        returnValue = F("Geschichtsinsel");
        break;
    }
    case 116240:
    {
        returnValue = F("Geschichtspark Falkensee - Gedenkstätte KZ-Außenlager");
        break;
    }
    case 116241:
    {
        returnValue = F("Geschichtspfad");
        break;
    }
    case 116242:
    {
        returnValue = F("Geschiebeweg");
        break;
    }
    case 116243:
    {
        returnValue = F("Geschindhaldeweg");
        break;
    }
    case 116244:
    {
        returnValue = F("Geschkestr.");
        break;
    }
    case 116245:
    {
        returnValue = F("Geschlagenes Sträßchen");
        break;
    }
    case 116246:
    {
        returnValue = F("Geschlagenes Wegle");
        break;
    }
    case 116247:
    {
        returnValue = F("Geschleide");
        break;
    }
    case 116248:
    {
        returnValue = F("Geschlossenheck");
        break;
    }
    case 116249:
    {
        returnValue = F("Geschossweg");
        break;
    }
    case 116250:
    {
        returnValue = F("Geschrei");
        break;
    }
    case 116251:
    {
        returnValue = F("Geschw.-Scholl-Str.");
        break;
    }
    case 116252:
    {
        returnValue = F("Geschwand");
        break;
    }
    case 116253:
    {
        returnValue = F("Geschweihweg");
        break;
    }
    case 116254:
    {
        returnValue = F("Geschwendaer Gasse");
        break;
    }
    case 116255:
    {
        returnValue = F("Geschwendaer Str.");
        break;
    }
    case 116256:
    {
        returnValue = F("Geschwindstr.");
        break;
    }
    case 116257:
    {
        returnValue = F("Geschwister Scholl-Str.");
        break;
    }
    case 116258:
    {
        returnValue = F("Geschwister-Aufricht-Str.");
        break;
    }
    case 116259:
    {
        returnValue = F("Geschwister-Bentheuer-Str.");
        break;
    }
    case 116260:
    {
        returnValue = F("Geschwister-Birklein-Weg");
        break;
    }
    case 116261:
    {
        returnValue = F("Geschwister-Buller-Str.");
        break;
    }
    case 116262:
    {
        returnValue = F("Geschwister-Burch-Str.");
        break;
    }
    case 116263:
    {
        returnValue = F("Geschwister-Crößmann-Weg");
        break;
    }
    case 116264:
    {
        returnValue = F("Geschwister-Fromm-Str.");
        break;
    }
    case 116265:
    {
        returnValue = F("Geschwister-Fuhrmann-Str.");
        break;
    }
    case 116266:
    {
        returnValue = F("Geschwister-Gerrits-Str.");
        break;
    }
    case 116267:
    {
        returnValue = F("Geschwister-Graf-Str.");
        break;
    }
    case 116268:
    {
        returnValue = F("Geschwister-Große-Weg");
        break;
    }
    case 116269:
    {
        returnValue = F("Geschwister-Gruber-Weg");
        break;
    }
    case 116270:
    {
        returnValue = F("Geschwister-Grünbaum-Str.");
        break;
    }
    case 116271:
    {
        returnValue = F("Geschwister-Haeusler-Weg");
        break;
    }
    case 116272:
    {
        returnValue = F("Geschwister-Heinefetter-Platz");
        break;
    }
    case 116273:
    {
        returnValue = F("Geschwister-Herschel-Str.");
        break;
    }
    case 116274:
    {
        returnValue = F("Geschwister-Hirsch-Str.");
        break;
    }
    case 116275:
    {
        returnValue = F("Geschwister-Krauss-Str.");
        break;
    }
    case 116276:
    {
        returnValue = F("Geschwister-Lorenzen-Ring");
        break;
    }
    case 116277:
    {
        returnValue = F("Geschwister-Lorenzen-Weg");
        break;
    }
    case 116278:
    {
        returnValue = F("Geschwister-Möhlig-Str.");
        break;
    }
    case 116279:
    {
        returnValue = F("Geschwister-Pruszkowski-Gang");
        break;
    }
    case 116280:
    {
        returnValue = F("Geschwister-Reiß-Str.");
        break;
    }
    case 116281:
    {
        returnValue = F("Geschwister-Rommer-Weg");
        break;
    }
    case 116282:
    {
        returnValue = F("Geschwister-Roth-Str.");
        break;
    }
    case 116283:
    {
        returnValue = F("Geschwister-Schabel-Str.");
        break;
    }
    case 116284:
    {
        returnValue = F("Geschwister-Schieffer-Str.");
        break;
    }
    case 116285:
    {
        returnValue = F("Geschwister-Scholl-Allee");
        break;
    }
    case 116286:
    {
        returnValue = F("Geschwister-Scholl-Park");
        break;
    }
    case 116287:
    {
        returnValue = F("Geschwister-Scholl-Platz");
        break;
    }
    case 116288:
    {
        returnValue = F("Geschwister-Scholl-Ring");
        break;
    }
    case 116289:
    {
        returnValue = F("Geschwister-Scholl-Siedlung");
        break;
    }
    case 116290:
    {
        returnValue = F("Geschwister-Scholl-Str.");
        break;
    }
    case 116291:
    {
        returnValue = F("Geschwister-Scholl-Weg");
        break;
    }
    case 116292:
    {
        returnValue = F("Geschwister-Schönert-Str.");
        break;
    }
    case 116293:
    {
        returnValue = F("Geschwister-Stock-Platz");
        break;
    }
    case 116294:
    {
        returnValue = F("Geschwister-Tenkhoff-Str.");
        break;
    }
    case 116295:
    {
        returnValue = F("Geschwister-Voß-Str.");
        break;
    }
    case 116296:
    {
        returnValue = F("Geschwister-Vömel-Weg");
        break;
    }
    case 116297:
    {
        returnValue = F("Geschwister-Waßmuth-Weg");
        break;
    }
    case 116298:
    {
        returnValue = F("Geschwister-Wenig-Ring");
        break;
    }
    case 116299:
    {
        returnValue = F("Geschwister-Zorn-Str.");
        break;
    }
    case 116300:
    {
        returnValue = F("Geschwister-ten-Brink-Str.");
        break;
    }
    case 116301:
    {
        returnValue = F("Geschwisterstr.");
        break;
    }
    case 116302:
    {
        returnValue = F("Geschwitzstr.");
        break;
    }
    case 116303:
    {
        returnValue = F("Geschworenen Garten");
        break;
    }
    case 116304:
    {
        returnValue = F("Geschworenenholzweg");
        break;
    }
    case 116305:
    {
        returnValue = F("Geschützte Obstbaumallee");
        break;
    }
    case 116306:
    {
        returnValue = F("Geseeser Str.");
        break;
    }
    case 116307:
    {
        returnValue = F("Geseeser Weg");
        break;
    }
    case 116308:
    {
        returnValue = F("Gesehrweg");
        break;
    }
    case 116309:
    {
        returnValue = F("Geseker Str.");
        break;
    }
    case 116310:
    {
        returnValue = F("Geseker Weg");
        break;
    }
    case 116311:
    {
        returnValue = F("Geselbrachtstr.");
        break;
    }
    case 116312:
    {
        returnValue = F("Gesellengasse");
        break;
    }
    case 116313:
    {
        returnValue = F("Gesellenhausweg");
        break;
    }
    case 116314:
    {
        returnValue = F("Gesellensteig");
        break;
    }
    case 116315:
    {
        returnValue = F("Gesellenstr.");
        break;
    }
    case 116316:
    {
        returnValue = F("Gesellenweg");
        break;
    }
    case 116317:
    {
        returnValue = F("Gesellgenstr.");
        break;
    }
    case 116318:
    {
        returnValue = F("Gesellschaftsstr.");
        break;
    }
    case 116319:
    {
        returnValue = F("Gesellscher Park");
        break;
    }
    case 116320:
    {
        returnValue = F("Gesellstr.");
        break;
    }
    case 116321:
    {
        returnValue = F("Gesemannstr.");
        break;
    }
    case 116322:
    {
        returnValue = F("Gesenberg");
        break;
    }
    case 116323:
    {
        returnValue = F("Geseniusstr.");
        break;
    }
    case 116324:
    {
        returnValue = F("Gesichter- oder Fratzenweg");
        break;
    }
    case 116325:
    {
        returnValue = F("Gesindeweg");
        break;
    }
    case 116326:
    {
        returnValue = F("Gesine-Koch-Str.");
        break;
    }
    case 116327:
    {
        returnValue = F("Gesine-Wencke-Weg");
        break;
    }
    case 116328:
    {
        returnValue = F("Gesinenweg");
        break;
    }
    case 116329:
    {
        returnValue = F("Geskensweg");
        break;
    }
    case 116330:
    {
        returnValue = F("Geskestr.");
        break;
    }
    case 116331:
    {
        returnValue = F("Geskeweg");
        break;
    }
    case 116332:
    {
        returnValue = F("Geslauer Str.");
        break;
    }
    case 116333:
    {
        returnValue = F("Gesmecke");
        break;
    }
    case 116334:
    {
        returnValue = F("Gesmolder Str.");
        break;
    }
    case 116335:
    {
        returnValue = F("Gesnerstr.");
        break;
    }
    case 116336:
    {
        returnValue = F("Gesoleistr.");
        break;
    }
    case 116337:
    {
        returnValue = F("Gesotz");
        break;
    }
    case 116338:
    {
        returnValue = F("Gespeckwiesen");
        break;
    }
    case 116339:
    {
        returnValue = F("Gespemsterbrücke");
        break;
    }
    case 116340:
    {
        returnValue = F("Gespreiweg");
        break;
    }
    case 116341:
    {
        returnValue = F("Gespringweg");
        break;
    }
    case 116342:
    {
        returnValue = F("Gesseler Kämpe");
        break;
    }
    case 116343:
    {
        returnValue = F("Gesselner Str.");
        break;
    }
    case 116344:
    {
        returnValue = F("Gesseltweg");
        break;
    }
    case 116345:
    {
        returnValue = F("Gesselweg");
        break;
    }
    case 116346:
    {
        returnValue = F("Gessendorfer Str.");
        break;
    }
    case 116347:
    {
        returnValue = F("Gessenhart");
        break;
    }
    case 116348:
    {
        returnValue = F("Gessenried");
        break;
    }
    case 116349:
    {
        returnValue = F("Gessentalstr.");
        break;
    }
    case 116350:
    {
        returnValue = F("Gessentalweg");
        break;
    }
    case 116351:
    {
        returnValue = F("Gessertshausener Str.");
        break;
    }
    case 116352:
    {
        returnValue = F("Gesseweg");
        break;
    }
    case 116353:
    {
        returnValue = F("Gessin");
        break;
    }
    case 116354:
    {
        returnValue = F("Gessiner Str.");
        break;
    }
    case 116355:
    {
        returnValue = F("Gessingplatz");
        break;
    }
    case 116356:
    {
        returnValue = F("Gessnerstr.");
        break;
    }
    case 116357:
    {
        returnValue = F("Gest");
        break;
    }
    case 116358:
    {
        returnValue = F("Gestade");
        break;
    }
    case 116359:
    {
        returnValue = F("Gestadestr.");
        break;
    }
    case 116360:
    {
        returnValue = F("Gesteig");
        break;
    }
    case 116361:
    {
        returnValue = F("Gesteinachweg");
        break;
    }
    case 116362:
    {
        returnValue = F("Gesteinerstr.");
        break;
    }
    case 116363:
    {
        returnValue = F("Gesteinsgarten Gommern");
        break;
    }
    case 116364:
    {
        returnValue = F("Gestell H");
        break;
    }
    case 116365:
    {
        returnValue = F("Gestell I");
        break;
    }
    case 116366:
    {
        returnValue = F("Gestell K");
        break;
    }
    case 116367:
    {
        returnValue = F("Gestell L");
        break;
    }
    case 116368:
    {
        returnValue = F("Gestell P");
        break;
    }
    case 116369:
    {
        returnValue = F("Gestell Q");
        break;
    }
    case 116370:
    {
        returnValue = F("Gestell S");
        break;
    }
    case 116371:
    {
        returnValue = F("Gestell T");
        break;
    }
    case 116372:
    {
        returnValue = F("Gestell U");
        break;
    }
    case 116373:
    {
        returnValue = F("Gestell V");
        break;
    }
    case 116374:
    {
        returnValue = F("Gestell l");
        break;
    }
    case 116375:
    {
        returnValue = F("Gestell m");
        break;
    }
    case 116376:
    {
        returnValue = F("Gestell tz");
        break;
    }
    case 116377:
    {
        returnValue = F("Gestell w");
        break;
    }
    case 116378:
    {
        returnValue = F("Gestell x");
        break;
    }
    case 116379:
    {
        returnValue = F("Gestell y");
        break;
    }
    case 116380:
    {
        returnValue = F("Gestell z");
        break;
    }
    case 116381:
    {
        returnValue = F("Gestellweg");
        break;
    }
    case 116382:
    {
        returnValue = F("Gester Str.");
        break;
    }
    case 116383:
    {
        returnValue = F("Gester Weg");
        break;
    }
    case 116384:
    {
        returnValue = F("Gesterdingstr.");
        break;
    }
    case 116385:
    {
        returnValue = F("Gestermannstr.");
        break;
    }
    case 116386:
    {
        returnValue = F("Gestewitzer Dorfstr.");
        break;
    }
    case 116387:
    {
        returnValue = F("Gestewitzer Str.");
        break;
    }
    case 116388:
    {
        returnValue = F("Gestfeldstr.");
        break;
    }
    case 116389:
    {
        returnValue = F("Gesthuyser Str.");
        break;
    }
    case 116390:
    {
        returnValue = F("Gestorfer Str.");
        break;
    }
    case 116391:
    {
        returnValue = F("Gestratzer Str.");
        break;
    }
    case 116392:
    {
        returnValue = F("Gestringer Str.");
        break;
    }
    case 116393:
    {
        returnValue = F("Gestöckweg");
        break;
    }
    case 116394:
    {
        returnValue = F("Gestückte Allee");
        break;
    }
    case 116395:
    {
        returnValue = F("Gestühlstr.");
        break;
    }
    case 116396:
    {
        returnValue = F("Gestüt");
        break;
    }
    case 116397:
    {
        returnValue = F("Gestütsallee");
        break;
    }
    case 116398:
    {
        returnValue = F("Gestütspark Redefin");
        break;
    }
    case 116399:
    {
        returnValue = F("Gestütsstr.");
        break;
    }
    case 116400:
    {
        returnValue = F("Gestütstr.");
        break;
    }
    case 116401:
    {
        returnValue = F("Gestütsweg");
        break;
    }
    case 116402:
    {
        returnValue = F("Gestütsweg Neustadt-Redefin");
        break;
    }
    case 116403:
    {
        returnValue = F("Gesundbrunnen");
        break;
    }
    case 116404:
    {
        returnValue = F("Gesundbrunnenplatz");
        break;
    }
    case 116405:
    {
        returnValue = F("Gesundbrunnenring");
        break;
    }
    case 116406:
    {
        returnValue = F("Gesundbrunnenstr.");
        break;
    }
    case 116407:
    {
        returnValue = F("Gesundbrunnenweg");
        break;
    }
    case 116408:
    {
        returnValue = F("Gesundheitscampus");
        break;
    }
    case 116409:
    {
        returnValue = F("Gesundheitscampus-Süd");
        break;
    }
    case 116410:
    {
        returnValue = F("Gesundheitsgarten");
        break;
    }
    case 116411:
    {
        returnValue = F("Gesundheitsgarten Erftstadt-Frauenthal");
        break;
    }
    case 116412:
    {
        returnValue = F("Gesundheitsgarten Retzbach");
        break;
    }
    case 116413:
    {
        returnValue = F("Gesundheitstr.");
        break;
    }
    case 116414:
    {
        returnValue = F("Gesäßweg");
        break;
    }
    case 116415:
    {
        returnValue = F("Geteloer Str.");
        break;
    }
    case 116416:
    {
        returnValue = F("Geteloweg");
        break;
    }
    case 116417:
    {
        returnValue = F("Gethgasse");
        break;
    }
    case 116418:
    {
        returnValue = F("Gethleser Str.");
        break;
    }
    case 116419:
    {
        returnValue = F("Gethmannscher Garten");
        break;
    }
    case 116420:
    {
        returnValue = F("Gethsemanestr.");
        break;
    }
    case 116421:
    {
        returnValue = F("Getreideesch");
        break;
    }
    case 116422:
    {
        returnValue = F("Getreidegasse");
        break;
    }
    case 116423:
    {
        returnValue = F("Getreidekästen");
        break;
    }
    case 116424:
    {
        returnValue = F("Getreidemarkt");
        break;
    }
    case 116425:
    {
        returnValue = F("Getreidering");
        break;
    }
    case 116426:
    {
        returnValue = F("Getreidestr.");
        break;
    }
    case 116427:
    {
        returnValue = F("Getreideweg");
        break;
    }
    case 116428:
    {
        returnValue = F("Getränke-Einflugschneise");
        break;
    }
    case 116429:
    {
        returnValue = F("Gettelborn");
        break;
    }
    case 116430:
    {
        returnValue = F("Gettenauer Str.");
        break;
    }
    case 116431:
    {
        returnValue = F("Gettenbacher Str.");
        break;
    }
    case 116432:
    {
        returnValue = F("Gettengrüner Str.");
        break;
    }
    case 116433:
    {
        returnValue = F("Gettorfer Landstr.");
        break;
    }
    case 116434:
    {
        returnValue = F("Gettorfer Str.");
        break;
    }
    case 116435:
    {
        returnValue = F("Gettorfer Weg");
        break;
    }
    case 116436:
    {
        returnValue = F("Gettrup");
        break;
    }
    case 116437:
    {
        returnValue = F("Gettruper Str.");
        break;
    }
    case 116438:
    {
        returnValue = F("Gettysburg Avenue");
        break;
    }
    case 116439:
    {
        returnValue = F("Getzelauer Str.");
        break;
    }
    case 116440:
    {
        returnValue = F("Getzelauer Weg");
        break;
    }
    case 116441:
    {
        returnValue = F("Getzinger Weg");
        break;
    }
    case 116442:
    {
        returnValue = F("Geubelsgasse");
        break;
    }
    case 116443:
    {
        returnValue = F("Geubelsäcker");
        break;
    }
    case 116444:
    {
        returnValue = F("Geuchter Feldweg");
        break;
    }
    case 116445:
    {
        returnValue = F("Geuchter Weg");
        break;
    }
    case 116446:
    {
        returnValue = F("Geuckestr.");
        break;
    }
    case 116447:
    {
        returnValue = F("Geuderstr.");
        break;
    }
    case 116448:
    {
        returnValue = F("Geuelweg");
        break;
    }
    case 116449:
    {
        returnValue = F("Geuenicher Str.");
        break;
    }
    case 116450:
    {
        returnValue = F("Geuernrain");
        break;
    }
    case 116451:
    {
        returnValue = F("Geulenstr.");
        break;
    }
    case 116452:
    {
        returnValue = F("Geunitz");
        break;
    }
    case 116453:
    {
        returnValue = F("Geuppertgasse");
        break;
    }
    case 116454:
    {
        returnValue = F("Geurdenweg");
        break;
    }
    case 116455:
    {
        returnValue = F("Geusaer Str.");
        break;
    }
    case 116456:
    {
        returnValue = F("Geusbleek");
        break;
    }
    case 116457:
    {
        returnValue = F("Geusenkamp");
        break;
    }
    case 116458:
    {
        returnValue = F("Geusenstr.");
        break;
    }
    case 116459:
    {
        returnValue = F("Geusenweg");
        break;
    }
    case 116460:
    {
        returnValue = F("Geusfelder Str.");
        break;
    }
    case 116461:
    {
        returnValue = F("Geusfelderweg");
        break;
    }
    case 116462:
    {
        returnValue = F("Geusmanns");
        break;
    }
    case 116463:
    {
        returnValue = F("Geutenreuther Str.");
        break;
    }
    case 116464:
    {
        returnValue = F("Geutingshof");
        break;
    }
    case 116465:
    {
        returnValue = F("Geutschenstr.");
        break;
    }
    case 116466:
    {
        returnValue = F("Geußnitzer Str.");
        break;
    }
    case 116467:
    {
        returnValue = F("Gevastr.");
        break;
    }
    case 116468:
    {
        returnValue = F("Gevattermannsgasse");
        break;
    }
    case 116469:
    {
        returnValue = F("Gevaweg");
        break;
    }
    case 116470:
    {
        returnValue = F("Gevekotstr.");
        break;
    }
    case 116471:
    {
        returnValue = F("Gevelinghauser Str.");
        break;
    }
    case 116472:
    {
        returnValue = F("Gevelndorfer Str.");
        break;
    }
    case 116473:
    {
        returnValue = F("Gevelsberg");
        break;
    }
    case 116474:
    {
        returnValue = F("Gevelsberger Str.");
        break;
    }
    case 116475:
    {
        returnValue = F("Gevelsbergstr.");
        break;
    }
    case 116476:
    {
        returnValue = F("Gevelsdorfer Str.");
        break;
    }
    case 116477:
    {
        returnValue = F("Gevelskamp");
        break;
    }
    case 116478:
    {
        returnValue = F("Gevelsnestweg");
        break;
    }
    case 116479:
    {
        returnValue = F("Gevener Weg");
        break;
    }
    case 116480:
    {
        returnValue = F("Gevenicher Str.");
        break;
    }
    case 116481:
    {
        returnValue = F("Geverdesstr.");
        break;
    }
    case 116482:
    {
        returnValue = F("Gevers Weg");
        break;
    }
    case 116483:
    {
        returnValue = F("Geversberg");
        break;
    }
    case 116484:
    {
        returnValue = F("Geversdorfer Deich");
        break;
    }
    case 116485:
    {
        returnValue = F("Geveshauser Höhe");
        break;
    }
    case 116486:
    {
        returnValue = F("Geveshauser Weg");
        break;
    }
    case 116487:
    {
        returnValue = F("Gewalt");
        break;
    }
    case 116488:
    {
        returnValue = F("Gewand");
        break;
    }
    case 116489:
    {
        returnValue = F("Gewand Hermannsberg");
        break;
    }
    case 116490:
    {
        returnValue = F("Gewand Rems");
        break;
    }
    case 116491:
    {
        returnValue = F("Gewandhausgässchen");
        break;
    }
    case 116492:
    {
        returnValue = F("Gewandhausstr.");
        break;
    }
    case 116493:
    {
        returnValue = F("Gewandsgasse");
        break;
    }
    case 116494:
    {
        returnValue = F("Gewandweg");
        break;
    }
    case 116495:
    {
        returnValue = F("Gewandäckerstr.");
        break;
    }
    case 116496:
    {
        returnValue = F("Gewann Asang");
        break;
    }
    case 116497:
    {
        returnValue = F("Gewann Haagen");
        break;
    }
    case 116498:
    {
        returnValue = F("Gewann Husarenäcker");
        break;
    }
    case 116499:
    {
        returnValue = F("Gewann Hühnerpfad");
        break;
    }
    case 116500:
    {
        returnValue = F("Gewann Im Viehtrieb");
        break;
    }
    case 116501:
    {
        returnValue = F("Gewann Krähenflügel");
        break;
    }
    case 116502:
    {
        returnValue = F("Gewann Lachäcker");
        break;
    }
    case 116503:
    {
        returnValue = F("Gewann Pfriemenäcker");
        break;
    }
    case 116504:
    {
        returnValue = F("Gewann Saubad");
        break;
    }
    case 116505:
    {
        returnValue = F("Gewann Spitzäcker");
        break;
    }
    case 116506:
    {
        returnValue = F("Gewann Wiesenäcker");
        break;
    }
    case 116507:
    {
        returnValue = F("Gewann gegen Schornbach");
        break;
    }
    case 116508:
    {
        returnValue = F("Gewannenweg");
        break;
    }
    case 116509:
    {
        returnValue = F("Gewannlinie");
        break;
    }
    case 116510:
    {
        returnValue = F("Gewannstr.");
        break;
    }
    case 116511:
    {
        returnValue = F("Gewannweg");
        break;
    }
    case 116512:
    {
        returnValue = F("Geweckenhorst");
        break;
    }
    case 116513:
    {
        returnValue = F("Gewend");
        break;
    }
    case 116514:
    {
        returnValue = F("Gewendeweg");
        break;
    }
    case 116515:
    {
        returnValue = F("Gewendewiesen");
        break;
    }
    case 116516:
    {
        returnValue = F("Gewendtweg");
        break;
    }
    case 116517:
    {
        returnValue = F("Gewendweg");
        break;
    }
    case 116518:
    {
        returnValue = F("Gewenn");
        break;
    }
    case 116519:
    {
        returnValue = F("Gewerbe-Kreisel");
        break;
    }
    case 116520:
    {
        returnValue = F("Gewerbeallee");
        break;
    }
    case 116521:
    {
        returnValue = F("Gewerbeanger");
        break;
    }
    case 116522:
    {
        returnValue = F("Gewerbebogen");
        break;
    }
    case 116523:
    {
        returnValue = F("Gewerbedamm");
        break;
    }
    case 116524:
    {
        returnValue = F("Gewerbedorf");
        break;
    }
    case 116525:
    {
        returnValue = F("Gewerbefeld");
        break;
    }
    case 116526:
    {
        returnValue = F("Gewerbegasse");
        break;
    }
    case 116527:
    {
        returnValue = F("Gewerbegebiet");
        break;
    }
    case 116528:
    {
        returnValue = F("Gewerbegebiet 1");
        break;
    }
    case 116529:
    {
        returnValue = F("Gewerbegebiet 2");
        break;
    }
    case 116530:
    {
        returnValue = F("Gewerbegebiet A 31");
        break;
    }
    case 116531:
    {
        returnValue = F("Gewerbegebiet Altenrodaer Str.");
        break;
    }
    case 116532:
    {
        returnValue = F("Gewerbegebiet Am Bahnhof");
        break;
    }
    case 116533:
    {
        returnValue = F("Gewerbegebiet Am Kirchsteig");
        break;
    }
    case 116534:
    {
        returnValue = F("Gewerbegebiet Auchsesheim");
        break;
    }
    case 116535:
    {
        returnValue = F("Gewerbegebiet Bernried");
        break;
    }
    case 116536:
    {
        returnValue = F("Gewerbegebiet Bitzen");
        break;
    }
    case 116537:
    {
        returnValue = F("Gewerbegebiet Buchwies");
        break;
    }
    case 116538:
    {
        returnValue = F("Gewerbegebiet Dirnaich");
        break;
    }
    case 116539:
    {
        returnValue = F("Gewerbegebiet Dorfbach");
        break;
    }
    case 116540:
    {
        returnValue = F("Gewerbegebiet Echternhagen");
        break;
    }
    case 116541:
    {
        returnValue = F("Gewerbegebiet Energiefeld");
        break;
    }
    case 116542:
    {
        returnValue = F("Gewerbegebiet Gersweiler");
        break;
    }
    case 116543:
    {
        returnValue = F("Gewerbegebiet Gässle");
        break;
    }
    case 116544:
    {
        returnValue = F("Gewerbegebiet Hanacker");
        break;
    }
    case 116545:
    {
        returnValue = F("Gewerbegebiet Heidekorn");
        break;
    }
    case 116546:
    {
        returnValue = F("Gewerbegebiet Heiligenwies");
        break;
    }
    case 116547:
    {
        returnValue = F("Gewerbegebiet Herzfeld");
        break;
    }
    case 116548:
    {
        returnValue = F("Gewerbegebiet Hofbreite");
        break;
    }
    case 116549:
    {
        returnValue = F("Gewerbegebiet Kalkofen");
        break;
    }
    case 116550:
    {
        returnValue = F("Gewerbegebiet Karlshof");
        break;
    }
    case 116551:
    {
        returnValue = F("Gewerbegebiet Keltenweg");
        break;
    }
    case 116552:
    {
        returnValue = F("Gewerbegebiet Kiesberg");
        break;
    }
    case 116553:
    {
        returnValue = F("Gewerbegebiet Kirchgass");
        break;
    }
    case 116554:
    {
        returnValue = F("Gewerbegebiet Knockäcker");
        break;
    }
    case 116555:
    {
        returnValue = F("Gewerbegebiet Kröpsch");
        break;
    }
    case 116556:
    {
        returnValue = F("Gewerbegebiet Kämpe");
        break;
    }
    case 116557:
    {
        returnValue = F("Gewerbegebiet Lachen");
        break;
    }
    case 116558:
    {
        returnValue = F("Gewerbegebiet Limbach");
        break;
    }
    case 116559:
    {
        returnValue = F("Gewerbegebiet Lippoldsruh");
        break;
    }
    case 116560:
    {
        returnValue = F("Gewerbegebiet Mitterhof");
        break;
    }
    case 116561:
    {
        returnValue = F("Gewerbegebiet Natzing");
        break;
    }
    case 116562:
    {
        returnValue = F("Gewerbegebiet Neuteile");
        break;
    }
    case 116563:
    {
        returnValue = F("Gewerbegebiet Nord");
        break;
    }
    case 116564:
    {
        returnValue = F("Gewerbegebiet Ost");
        break;
    }
    case 116565:
    {
        returnValue = F("Gewerbegebiet Peheimer Str.");
        break;
    }
    case 116566:
    {
        returnValue = F("Gewerbegebiet Pflug");
        break;
    }
    case 116567:
    {
        returnValue = F("Gewerbegebiet Primstalstr.");
        break;
    }
    case 116568:
    {
        returnValue = F("Gewerbegebiet Querkanal");
        break;
    }
    case 116569:
    {
        returnValue = F("Gewerbegebiet Rothenschirmbach");
        break;
    }
    case 116570:
    {
        returnValue = F("Gewerbegebiet Schobüllhuus");
        break;
    }
    case 116571:
    {
        returnValue = F("Gewerbegebiet Süd");
        break;
    }
    case 116572:
    {
        returnValue = F("Gewerbegebiet Südstr.");
        break;
    }
    case 116573:
    {
        returnValue = F("Gewerbegebiet Tiefenhäusern");
        break;
    }
    case 116574:
    {
        returnValue = F("Gewerbegebiet Unterlemnitz");
        break;
    }
    case 116575:
    {
        returnValue = F("Gewerbegebiet Waldstr.");
        break;
    }
    case 116576:
    {
        returnValue = F("Gewerbegebiet Wallfeld");
        break;
    }
    case 116577:
    {
        returnValue = F("Gewerbegebiet West");
        break;
    }
    case 116578:
    {
        returnValue = F("Gewerbegebiet Wiehekrug");
        break;
    }
    case 116579:
    {
        returnValue = F("Gewerbegebiet Zingsheim-Süd");
        break;
    }
    case 116580:
    {
        returnValue = F("Gewerbegebiet Zossener Str.");
        break;
    }
    case 116581:
    {
        returnValue = F("Gewerbegebiet am Bahnhof");
        break;
    }
    case 116582:
    {
        returnValue = F("Gewerbegebiet am Betonwerk");
        break;
    }
    case 116583:
    {
        returnValue = F("Gewerbegebiet am Mastweg");
        break;
    }
    case 116584:
    {
        returnValue = F("Gewerbegebiet am Sandfeld");
        break;
    }
    case 116585:
    {
        returnValue = F("Gewerbegebiet am Schmidbach");
        break;
    }
    case 116586:
    {
        returnValue = F("Gewerbegebiet an der B 95");
        break;
    }
    case 116587:
    {
        returnValue = F("Gewerbegebiet-Ost");
        break;
    }
    case 116588:
    {
        returnValue = F("Gewerbegebietsstr.");
        break;
    }
    case 116589:
    {
        returnValue = F("Gewerbegedorf Petraching");
        break;
    }
    case 116590:
    {
        returnValue = F("Gewerbegrund");
        break;
    }
    case 116591:
    {
        returnValue = F("Gewerbehallestr.");
        break;
    }
    case 116592:
    {
        returnValue = F("Gewerbehof");
        break;
    }
    case 116593:
    {
        returnValue = F("Gewerbekamp");
        break;
    }
    case 116594:
    {
        returnValue = F("Gewerbekanal");
        break;
    }
    case 116595:
    {
        returnValue = F("Gewerbepark");
        break;
    }
    case 116596:
    {
        returnValue = F("Gewerbepark A");
        break;
    }
    case 116597:
    {
        returnValue = F("Gewerbepark Am Höhenweg");
        break;
    }
    case 116598:
    {
        returnValue = F("Gewerbepark Am Wald");
        break;
    }
    case 116599:
    {
        returnValue = F("Gewerbepark Au-Ost");
        break;
    }
    case 116600:
    {
        returnValue = F("Gewerbepark B");
        break;
    }
    case 116601:
    {
        returnValue = F("Gewerbepark BAB 1");
        break;
    }
    case 116602:
    {
        returnValue = F("Gewerbepark BWB");
        break;
    }
    case 116603:
    {
        returnValue = F("Gewerbepark Birkenhain");
        break;
    }
    case 116604:
    {
        returnValue = F("Gewerbepark Borna-Ost");
        break;
    }
    case 116605:
    {
        returnValue = F("Gewerbepark Chammünster Nord");
        break;
    }
    case 116606:
    {
        returnValue = F("Gewerbepark Chammünster Nord A");
        break;
    }
    case 116607:
    {
        returnValue = F("Gewerbepark Chammünster Nord C");
        break;
    }
    case 116608:
    {
        returnValue = F("Gewerbepark Cité");
        break;
    }
    case 116609:
    {
        returnValue = F("Gewerbepark Edelweiß");
        break;
    }
    case 116610:
    {
        returnValue = F("Gewerbepark Egerstr.");
        break;
    }
    case 116611:
    {
        returnValue = F("Gewerbepark Euzenberg");
        break;
    }
    case 116612:
    {
        returnValue = F("Gewerbepark Garham");
        break;
    }
    case 116613:
    {
        returnValue = F("Gewerbepark Grüner Weg");
        break;
    }
    case 116614:
    {
        returnValue = F("Gewerbepark H.A.U.");
        break;
    }
    case 116615:
    {
        returnValue = F("Gewerbepark Hardtwald");
        break;
    }
    case 116616:
    {
        returnValue = F("Gewerbepark Hibernia");
        break;
    }
    case 116617:
    {
        returnValue = F("Gewerbepark Kaserne");
        break;
    }
    case 116618:
    {
        returnValue = F("Gewerbepark Lindach A");
        break;
    }
    case 116619:
    {
        returnValue = F("Gewerbepark Lindach B");
        break;
    }
    case 116620:
    {
        returnValue = F("Gewerbepark Lindach C");
        break;
    }
    case 116621:
    {
        returnValue = F("Gewerbepark Lindach D");
        break;
    }
    case 116622:
    {
        returnValue = F("Gewerbepark Lindach E");
        break;
    }
    case 116623:
    {
        returnValue = F("Gewerbepark Meißen");
        break;
    }
    case 116624:
    {
        returnValue = F("Gewerbepark Meyenburg");
        break;
    }
    case 116625:
    {
        returnValue = F("Gewerbepark Mitte");
        break;
    }
    case 116626:
    {
        returnValue = F("Gewerbepark Neudahn 1");
        break;
    }
    case 116627:
    {
        returnValue = F("Gewerbepark Nord");
        break;
    }
    case 116628:
    {
        returnValue = F("Gewerbepark Nord-Ost");
        break;
    }
    case 116629:
    {
        returnValue = F("Gewerbepark Odenwald");
        break;
    }
    case 116630:
    {
        returnValue = F("Gewerbepark Rahlmühle");
        break;
    }
    case 116631:
    {
        returnValue = F("Gewerbepark Seelingstädt");
        break;
    }
    case 116632:
    {
        returnValue = F("Gewerbepark Siebenkofen");
        break;
    }
    case 116633:
    {
        returnValue = F("Gewerbepark Siebenmorgen");
        break;
    }
    case 116634:
    {
        returnValue = F("Gewerbepark Süd");
        break;
    }
    case 116635:
    {
        returnValue = F("Gewerbepark Weihenbronn");
        break;
    }
    case 116636:
    {
        returnValue = F("Gewerbepark Weiten");
        break;
    }
    case 116637:
    {
        returnValue = F("Gewerbepark Wispertal");
        break;
    }
    case 116638:
    {
        returnValue = F("Gewerbeparkring");
        break;
    }
    case 116639:
    {
        returnValue = F("Gewerbeparkstr.");
        break;
    }
    case 116640:
    {
        returnValue = F("Gewerbering");
        break;
    }
    case 116641:
    {
        returnValue = F("Gewerbering / Gewerbegrund");
        break;
    }
    case 116642:
    {
        returnValue = F("Gewerbering Nord");
        break;
    }
    case 116643:
    {
        returnValue = F("Gewerbering Ost");
        break;
    }
    case 116644:
    {
        returnValue = F("Gewerbering Süd");
        break;
    }
    case 116645:
    {
        returnValue = F("Gewerbering am Brand");
        break;
    }
    case 116646:
    {
        returnValue = F("Gewerbering-Nord");
        break;
    }
    case 116647:
    {
        returnValue = F("Gewerbeschulstr.");
        break;
    }
    case 116648:
    {
        returnValue = F("Gewerbesiedlung");
        break;
    }
    case 116649:
    {
        returnValue = F("Gewerbestr.");
        break;
    }
    case 116650:
    {
        returnValue = F("Gewerbestr. Herfeld");
        break;
    }
    case 116651:
    {
        returnValue = F("Gewerbestr. Linden");
        break;
    }
    case 116652:
    {
        returnValue = F("Gewerbestr. Ost");
        break;
    }
    case 116653:
    {
        returnValue = F("Gewerbestr. Süd");
        break;
    }
    case 116654:
    {
        returnValue = F("Gewerbestr. rechts");
        break;
    }
    case 116655:
    {
        returnValue = F("Gewerbestr.-Süd");
        break;
    }
    case 116656:
    {
        returnValue = F("Gewerbeweg");
        break;
    }
    case 116657:
    {
        returnValue = F("Gewerbewohnpark Isernhagen");
        break;
    }
    case 116658:
    {
        returnValue = F("Gewerbstr.");
        break;
    }
    case 116659:
    {
        returnValue = F("Gewerkenstr.");
        break;
    }
    case 116660:
    {
        returnValue = F("Gewerkschaft");
        break;
    }
    case 116661:
    {
        returnValue = F("Gewerkschaftsstr.");
        break;
    }
    case 116662:
    {
        returnValue = F("Gewertsweg");
        break;
    }
    case 116663:
    {
        returnValue = F("Gewettstr.");
        break;
    }
    case 116664:
    {
        returnValue = F("Gewittereichenschneise");
        break;
    }
    case 116665:
    {
        returnValue = F("Gewoldstr.");
        break;
    }
    case 116666:
    {
        returnValue = F("Gewolfstr.");
        break;
    }
    case 116667:
    {
        returnValue = F("Gewährhau");
        break;
    }
    case 116668:
    {
        returnValue = F("Gewässer-Lehrpfad");
        break;
    }
    case 116669:
    {
        returnValue = F("Gewässerlehrpfad");
        break;
    }
    case 116670:
    {
        returnValue = F("Gewässerpark Günzaue");
        break;
    }
    case 116671:
    {
        returnValue = F("Gewölb");
        break;
    }
    case 116672:
    {
        returnValue = F("Gewölbegasse");
        break;
    }
    case 116673:
    {
        returnValue = F("Gewürzapfelweg");
        break;
    }
    case 116674:
    {
        returnValue = F("Gewürzgarten");
        break;
    }
    case 116675:
    {
        returnValue = F("Gewürzgasse");
        break;
    }
    case 116676:
    {
        returnValue = F("Gewürzstr.");
        break;
    }
    case 116677:
    {
        returnValue = F("Gewürztraminer-Str.");
        break;
    }
    case 116678:
    {
        returnValue = F("Gexbachstr.");
        break;
    }
    case 116679:
    {
        returnValue = F("Geyd-Schneise");
        break;
    }
    case 116680:
    {
        returnValue = F("Geyener Berg");
        break;
    }
    case 116681:
    {
        returnValue = F("Geyener Str.");
        break;
    }
    case 116682:
    {
        returnValue = F("Geyer-zu-Lauf-Str.");
        break;
    }
    case 116683:
    {
        returnValue = F("Geyerbad");
        break;
    }
    case 116684:
    {
        returnValue = F("Geyerburgweg");
        break;
    }
    case 116685:
    {
        returnValue = F("Geyerer Str.");
        break;
    }
    case 116686:
    {
        returnValue = F("Geyerer Weg");
        break;
    }
    case 116687:
    {
        returnValue = F("Geyergäßchen");
        break;
    }
    case 116688:
    {
        returnValue = F("Geyerner Str.");
        break;
    }
    case 116689:
    {
        returnValue = F("Geyersberg");
        break;
    }
    case 116690:
    {
        returnValue = F("Geyersberger Str.");
        break;
    }
    case 116691:
    {
        returnValue = F("Geyersbergerhof");
        break;
    }
    case 116692:
    {
        returnValue = F("Geyersbergstr.");
        break;
    }
    case 116693:
    {
        returnValue = F("Geyersche Str.");
        break;
    }
    case 116694:
    {
        returnValue = F("Geyerscher Weg");
        break;
    }
    case 116695:
    {
        returnValue = F("Geyerschloss");
        break;
    }
    case 116696:
    {
        returnValue = F("Geyersdorfer Hauptstr.");
        break;
    }
    case 116697:
    {
        returnValue = F("Geyersdorfer Rathausweg");
        break;
    }
    case 116698:
    {
        returnValue = F("Geyersdorfer Str.");
        break;
    }
    case 116699:
    {
        returnValue = F("Geyerstr.");
        break;
    }
    case 116700:
    {
        returnValue = F("Geyerswörth");
        break;
    }
    case 116701:
    {
        returnValue = F("Geyerswörthstr.");
        break;
    }
    case 116702:
    {
        returnValue = F("Geyerweg");
        break;
    }
    case 116703:
    {
        returnValue = F("Geykenholzstr.");
        break;
    }
    case 116704:
    {
        returnValue = F("Geyr-von-Schweppenburg-Str.");
        break;
    }
    case 116705:
    {
        returnValue = F("Geysostr.");
        break;
    }
    case 116706:
    {
        returnValue = F("Gezeitenweg");
        break;
    }
    case 116707:
    {
        returnValue = F("Gezelinallee");
        break;
    }
    case 116708:
    {
        returnValue = F("Gezinge");
        break;
    }
    case 116709:
    {
        returnValue = F("Geßbachstr.");
        break;
    }
    case 116710:
    {
        returnValue = F("Geßelestr.");
        break;
    }
    case 116711:
    {
        returnValue = F("Geßlerstr.");
        break;
    }
    case 116712:
    {
        returnValue = F("Geßlerweg");
        break;
    }
    case 116713:
    {
        returnValue = F("Geßweinstr.");
        break;
    }
    case 116714:
    {
        returnValue = F("Gfaellweg");
        break;
    }
    case 116715:
    {
        returnValue = F("Gferchweg");
        break;
    }
    case 116716:
    {
        returnValue = F("Gflossdeichweg");
        break;
    }
    case 116717:
    {
        returnValue = F("Gfloßweg");
        break;
    }
    case 116718:
    {
        returnValue = F("Gfrörerstr.");
        break;
    }
    case 116719:
    {
        returnValue = F("Gfäll");
        break;
    }
    case 116720:
    {
        returnValue = F("Gfällachstr.");
        break;
    }
    case 116721:
    {
        returnValue = F("Gfällackerweg");
        break;
    }
    case 116722:
    {
        returnValue = F("Gfälleistr.");
        break;
    }
    case 116723:
    {
        returnValue = F("Gfällhaldenweg");
        break;
    }
    case 116724:
    {
        returnValue = F("Gfällmatte");
        break;
    }
    case 116725:
    {
        returnValue = F("Gfällwaldweg");
        break;
    }
    case 116726:
    {
        returnValue = F("Gfällweg");
        break;
    }
    case 116727:
    {
        returnValue = F("Gföhret");
        break;
    }
    case 116728:
    {
        returnValue = F("Ghagbergstr.");
        break;
    }
    case 116729:
    {
        returnValue = F("Ghagstr.");
        break;
    }
    case 116730:
    {
        returnValue = F("Ghagweg");
        break;
    }
    case 116731:
    {
        returnValue = F("Ghagäckerweg");
        break;
    }
    case 116732:
    {
        returnValue = F("Ghaibrunnenweg");
        break;
    }
    case 116733:
    {
        returnValue = F("Ghaigässle");
        break;
    }
    case 116734:
    {
        returnValue = F("Ghaistr.");
        break;
    }
    case 116735:
    {
        returnValue = F("Ghaiweg");
        break;
    }
    case 116736:
    {
        returnValue = F("Ghaiwiesenweg");
        break;
    }
    case 116737:
    {
        returnValue = F("Ghauweg");
        break;
    }
    case 116738:
    {
        returnValue = F("Ghersburgstr.");
        break;
    }
    case 116739:
    {
        returnValue = F("Gheuertal");
        break;
    }
    case 116740:
    {
        returnValue = F("Ghibellinenstr.");
        break;
    }
    case 116741:
    {
        returnValue = F("Ghäule");
        break;
    }
    case 116742:
    {
        returnValue = F("Gibachstr.");
        break;
    }
    case 116743:
    {
        returnValue = F("Gibacht");
        break;
    }
    case 116744:
    {
        returnValue = F("Gibachter Weg");
        break;
    }
    case 116745:
    {
        returnValue = F("Gibachtstr.");
        break;
    }
    case 116746:
    {
        returnValue = F("Gibber Str.");
        break;
    }
    case 116747:
    {
        returnValue = F("Gibbinghausen");
        break;
    }
    case 116748:
    {
        returnValue = F("Gibbons");
        break;
    }
    case 116749:
    {
        returnValue = F("Gibeliusweg");
        break;
    }
    case 116750:
    {
        returnValue = F("Gibichostr.");
        break;
    }
    case 116751:
    {
        returnValue = F("Gibichstr.");
        break;
    }
    case 116752:
    {
        returnValue = F("Gibitzenhofstr.");
        break;
    }
    case 116753:
    {
        returnValue = F("Gibraltarstr.");
        break;
    }
    case 116754:
    {
        returnValue = F("Gichenbach");
        break;
    }
    case 116755:
    {
        returnValue = F("Gichenbacher Str.");
        break;
    }
    case 116756:
    {
        returnValue = F("Gichenbachshof");
        break;
    }
    case 116757:
    {
        returnValue = F("Gichenbachstr.");
        break;
    }
    case 116758:
    {
        returnValue = F("Gichtel");
        break;
    }
    case 116759:
    {
        returnValue = F("Gichterstr.");
        break;
    }
    case 116760:
    {
        returnValue = F("Gichtlgasse");
        break;
    }
    case 116761:
    {
        returnValue = F("Gickelfelsen");
        break;
    }
    case 116762:
    {
        returnValue = F("Gickelhof");
        break;
    }
    case 116763:
    {
        returnValue = F("Gickelsberg");
        break;
    }
    case 116764:
    {
        returnValue = F("Gickelsbergstr.");
        break;
    }
    case 116765:
    {
        returnValue = F("Gickelsbergweg");
        break;
    }
    case 116766:
    {
        returnValue = F("Gickelsburg");
        break;
    }
    case 116767:
    {
        returnValue = F("Gickelsburgweg");
        break;
    }
    case 116768:
    {
        returnValue = F("Giddendorfer Weg");
        break;
    }
    case 116769:
    {
        returnValue = F("Gideonstr.");
        break;
    }
    case 116770:
    {
        returnValue = F("Gidesweg");
        break;
    }
    case 116771:
    {
        returnValue = F("Gieba");
        break;
    }
    case 116772:
    {
        returnValue = F("Giebaer Str.");
        break;
    }
    case 116773:
    {
        returnValue = F("Giebauer Weg");
        break;
    }
    case 116774:
    {
        returnValue = F("Giebel");
        break;
    }
    case 116775:
    {
        returnValue = F("Giebelau");
        break;
    }
    case 116776:
    {
        returnValue = F("Giebelbachstr.");
        break;
    }
    case 116777:
    {
        returnValue = F("Giebelberg");
        break;
    }
    case 116778:
    {
        returnValue = F("Giebelgasse");
        break;
    }
    case 116779:
    {
        returnValue = F("Giebelhalde");
        break;
    }
    case 116780:
    {
        returnValue = F("Giebelhardtsweg");
        break;
    }
    case 116781:
    {
        returnValue = F("Giebelkamp");
        break;
    }
    case 116782:
    {
        returnValue = F("Giebelmattstr.");
        break;
    }
    case 116783:
    {
        returnValue = F("Giebelmoos");
        break;
    }
    case 116784:
    {
        returnValue = F("Giebelortsdamm");
        break;
    }
    case 116785:
    {
        returnValue = F("Giebelrainer Weg");
        break;
    }
    case 116786:
    {
        returnValue = F("Giebelroth");
        break;
    }
    case 116787:
    {
        returnValue = F("Giebelrundweg");
        break;
    }
    case 116788:
    {
        returnValue = F("Giebelsberg");
        break;
    }
    case 116789:
    {
        returnValue = F("Giebelsbergweg");
        break;
    }
    case 116790:
    {
        returnValue = F("Giebelscheidstr.");
        break;
    }
    case 116791:
    {
        returnValue = F("Giebelsiek");
        break;
    }
    case 116792:
    {
        returnValue = F("Giebelspitz");
        break;
    }
    case 116793:
    {
        returnValue = F("Giebelstadter Weg");
        break;
    }
    case 116794:
    {
        returnValue = F("Giebelstiegstr.");
        break;
    }
    case 116795:
    {
        returnValue = F("Giebelstr.");
        break;
    }
    case 116796:
    {
        returnValue = F("Giebelstädter Steige");
        break;
    }
    case 116797:
    {
        returnValue = F("Giebelwaldstr.");
        break;
    }
    case 116798:
    {
        returnValue = F("Giebelwaldweg");
        break;
    }
    case 116799:
    {
        returnValue = F("Giebelwandstr.");
        break;
    }
    case 116800:
    {
        returnValue = F("Giebelweg");
        break;
    }
    case 116801:
    {
        returnValue = F("Giebelwiesenweg");
        break;
    }
    case 116802:
    {
        returnValue = F("Giebing");
        break;
    }
    case 116803:
    {
        returnValue = F("Giebinger Str.");
        break;
    }
    case 116804:
    {
        returnValue = F("Giebscher Weg");
        break;
    }
    case 116805:
    {
        returnValue = F("Giechburgblick");
        break;
    }
    case 116806:
    {
        returnValue = F("Giecher Str.");
        break;
    }
    case 116807:
    {
        returnValue = F("Giechkröttendorf");
        break;
    }
    case 116808:
    {
        returnValue = F("Gieckenloch");
        break;
    }
    case 116809:
    {
        returnValue = F("Giedenhof");
        break;
    }
    case 116810:
    {
        returnValue = F("Giedeweg");
        break;
    }
    case 116811:
    {
        returnValue = F("Giefersstr.");
        break;
    }
    case 116812:
    {
        returnValue = F("Giefersweg");
        break;
    }
    case 116813:
    {
        returnValue = F("Giegelsberg");
        break;
    }
    case 116814:
    {
        returnValue = F("Giegelstr.");
        break;
    }
    case 116815:
    {
        returnValue = F("Giegelweg");
        break;
    }
    case 116816:
    {
        returnValue = F("Giegelöd");
        break;
    }
    case 116817:
    {
        returnValue = F("Giegengrün");
        break;
    }
    case 116818:
    {
        returnValue = F("Giegengrüner Str.");
        break;
    }
    case 116819:
    {
        returnValue = F("Giegenhausener Str.");
        break;
    }
    case 116820:
    {
        returnValue = F("Giegenweg");
        break;
    }
    case 116821:
    {
        returnValue = F("Giegerweg");
        break;
    }
    case 116822:
    {
        returnValue = F("Giegler-Pascha-Str.");
        break;
    }
    case 116823:
    {
        returnValue = F("Giehler Str.");
        break;
    }
    case 116824:
    {
        returnValue = F("Giehlermoorer Str.");
        break;
    }
    case 116825:
    {
        returnValue = F("Giehlstr.");
        break;
    }
    case 116826:
    {
        returnValue = F("Giekauer Hauptstr.");
        break;
    }
    case 116827:
    {
        returnValue = F("Giekersgasse");
        break;
    }
    case 116828:
    {
        returnValue = F("Gielandstr.");
        break;
    }
    case 116829:
    {
        returnValue = F("Gielder Str.");
        break;
    }
    case 116830:
    {
        returnValue = F("Gielenstr.");
        break;
    }
    case 116831:
    {
        returnValue = F("Gielerspfädchen");
        break;
    }
    case 116832:
    {
        returnValue = F("Gielgenstr.");
        break;
    }
    case 116833:
    {
        returnValue = F("Gielow-Ausbau");
        break;
    }
    case 116834:
    {
        returnValue = F("Gielower Chaussee");
        break;
    }
    case 116835:
    {
        returnValue = F("Gielsbergweg");
        break;
    }
    case 116836:
    {
        returnValue = F("Gielsdorf");
        break;
    }
    case 116837:
    {
        returnValue = F("Gielsdorfer Chaussee");
        break;
    }
    case 116838:
    {
        returnValue = F("Gielsdorfer Str.");
        break;
    }
    case 116839:
    {
        returnValue = F("Gielsdorfer Weg");
        break;
    }
    case 116840:
    {
        returnValue = F("Gielsdorfweg");
        break;
    }
    case 116841:
    {
        returnValue = F("Gielsgasse");
        break;
    }
    case 116842:
    {
        returnValue = F("Gielster Stück");
        break;
    }
    case 116843:
    {
        returnValue = F("Giemesstr.");
        break;
    }
    case 116844:
    {
        returnValue = F("Gienanth-Weg");
        break;
    }
    case 116845:
    {
        returnValue = F("Gienanthstr.");
        break;
    }
    case 116846:
    {
        returnValue = F("Gienauer Weg");
        break;
    }
    case 116847:
    {
        returnValue = F("Giengener Steig");
        break;
    }
    case 116848:
    {
        returnValue = F("Giengener Str.");
        break;
    }
    case 116849:
    {
        returnValue = F("Giengener Weg");
        break;
    }
    case 116850:
    {
        returnValue = F("Gier");
        break;
    }
    case 116851:
    {
        returnValue = F("Gierath");
        break;
    }
    case 116852:
    {
        returnValue = F("Gierather Mühlenweg");
        break;
    }
    case 116853:
    {
        returnValue = F("Gierather Str.");
        break;
    }
    case 116854:
    {
        returnValue = F("Gierather Wald");
        break;
    }
    case 116855:
    {
        returnValue = F("Gierather Weg");
        break;
    }
    case 116856:
    {
        returnValue = F("Gierather Wiese");
        break;
    }
    case 116857:
    {
        returnValue = F("Gierbachstr.");
        break;
    }
    case 116858:
    {
        returnValue = F("Gierenberg");
        break;
    }
    case 116859:
    {
        returnValue = F("Gierenberg 17, 17a, 17b");
        break;
    }
    case 116860:
    {
        returnValue = F("Gierendsweg");
        break;
    }
    case 116861:
    {
        returnValue = F("Gierener Weg");
        break;
    }
    case 116862:
    {
        returnValue = F("Gierenhorstweg");
        break;
    }
    case 116863:
    {
        returnValue = F("Gierenstr.");
        break;
    }
    case 116864:
    {
        returnValue = F("Gierenweg");
        break;
    }
    case 116865:
    {
        returnValue = F("Gierenzheimer Str.");
        break;
    }
    case 116866:
    {
        returnValue = F("Gierer Str.");
        break;
    }
    case 116867:
    {
        returnValue = F("Gierer Str. - Am Norfbach");
        break;
    }
    case 116868:
    {
        returnValue = F("Gierersberg");
        break;
    }
    case 116869:
    {
        returnValue = F("Gieretsberg");
        break;
    }
    case 116870:
    {
        returnValue = F("Giergasse");
        break;
    }
    case 116871:
    {
        returnValue = F("Gierhalde");
        break;
    }
    case 116872:
    {
        returnValue = F("Gierlgasse");
        break;
    }
    case 116873:
    {
        returnValue = F("Gierlichsstr.");
        break;
    }
    case 116874:
    {
        returnValue = F("Gierlichstr.");
        break;
    }
    case 116875:
    {
        returnValue = F("Gierlingsgasse");
        break;
    }
    case 116876:
    {
        returnValue = F("Giermaarstr.");
        break;
    }
    case 116877:
    {
        returnValue = F("Gierolstr.");
        break;
    }
    case 116878:
    {
        returnValue = F("Giers-Schanzendorf");
        break;
    }
    case 116879:
    {
        returnValue = F("Giersbach");
        break;
    }
    case 116880:
    {
        returnValue = F("Giersberg");
        break;
    }
    case 116881:
    {
        returnValue = F("Giersberger Str.");
        break;
    }
    case 116882:
    {
        returnValue = F("Giersberger Weg");
        break;
    }
    case 116883:
    {
        returnValue = F("Giersbergstr.");
        break;
    }
    case 116884:
    {
        returnValue = F("Giersbergweg");
        break;
    }
    case 116885:
    {
        returnValue = F("Giersbühlstr.");
        break;
    }
    case 116886:
    {
        returnValue = F("Gierscheider Weg");
        break;
    }
    case 116887:
    {
        returnValue = F("Gierschlader Str.");
        break;
    }
    case 116888:
    {
        returnValue = F("Giersdorf");
        break;
    }
    case 116889:
    {
        returnValue = F("Giersdorfer Damm");
        break;
    }
    case 116890:
    {
        returnValue = F("Giersdorfer Weg");
        break;
    }
    case 116891:
    {
        returnValue = F("Giersfeldweg");
        break;
    }
    case 116892:
    {
        returnValue = F("Giershagener Str.");
        break;
    }
    case 116893:
    {
        returnValue = F("Giershagener Weg");
        break;
    }
    case 116894:
    {
        returnValue = F("Giershausener Weg");
        break;
    }
    case 116895:
    {
        returnValue = F("Giershütte");
        break;
    }
    case 116896:
    {
        returnValue = F("Gierskopper Str.");
        break;
    }
    case 116897:
    {
        returnValue = F("Gierslebener Str.");
        break;
    }
    case 116898:
    {
        returnValue = F("Gierslinger Str.");
        break;
    }
    case 116899:
    {
        returnValue = F("Giersmattstr.");
        break;
    }
    case 116900:
    {
        returnValue = F("Giersmauer");
        break;
    }
    case 116901:
    {
        returnValue = F("Giersstr.");
        break;
    }
    case 116902:
    {
        returnValue = F("Giersteinstr.");
        break;
    }
    case 116903:
    {
        returnValue = F("Giersteinweg");
        break;
    }
    case 116904:
    {
        returnValue = F("Gierstr.");
        break;
    }
    case 116905:
    {
        returnValue = F("Gierstädter Str.");
        break;
    }
    case 116906:
    {
        returnValue = F("Gierswall");
        break;
    }
    case 116907:
    {
        returnValue = F("Gierthmühlenweg");
        break;
    }
    case 116908:
    {
        returnValue = F("Giertzenbergstr.");
        break;
    }
    case 116909:
    {
        returnValue = F("Gierweg");
        break;
    }
    case 116910:
    {
        returnValue = F("Gierzhagen");
        break;
    }
    case 116911:
    {
        returnValue = F("Gierzhagener Str.");
        break;
    }
    case 116912:
    {
        returnValue = F("Giesbertsstr.");
        break;
    }
    case 116913:
    {
        returnValue = F("Giesbertstr.");
        break;
    }
    case 116914:
    {
        returnValue = F("Giesbethweg");
        break;
    }
    case 116915:
    {
        returnValue = F("Giescheid");
        break;
    }
    case 116916:
    {
        returnValue = F("Giescheider Weg");
        break;
    }
    case 116917:
    {
        returnValue = F("Gieschenhagen");
        break;
    }
    case 116918:
    {
        returnValue = F("Giesebelweg");
        break;
    }
    case 116919:
    {
        returnValue = F("Giesebergstr.");
        break;
    }
    case 116920:
    {
        returnValue = F("Giesebertstr.");
        break;
    }
    case 116921:
    {
        returnValue = F("Giesebrechtstr.");
        break;
    }
    case 116922:
    {
        returnValue = F("Giesecke-Weg");
        break;
    }
    case 116923:
    {
        returnValue = F("Gieseckenbrink");
        break;
    }
    case 116924:
    {
        returnValue = F("Gieseckenkamp");
        break;
    }
    case 116925:
    {
        returnValue = F("Gieseckenweg");
        break;
    }
    case 116926:
    {
        returnValue = F("Gieseckestr.");
        break;
    }
    case 116927:
    {
        returnValue = F("Giesegrundweg");
        break;
    }
    case 116928:
    {
        returnValue = F("Giesekengasse");
        break;
    }
    case 116929:
    {
        returnValue = F("Giesekenhäger Reihe");
        break;
    }
    case 116930:
    {
        returnValue = F("Giesekenstr.");
        break;
    }
    case 116931:
    {
        returnValue = F("Giesekestr.");
        break;
    }
    case 116932:
    {
        returnValue = F("Gieselbachstr.");
        break;
    }
    case 116933:
    {
        returnValue = F("Gieselbachweg");
        break;
    }
    case 116934:
    {
        returnValue = F("Gieseler");
        break;
    }
    case 116935:
    {
        returnValue = F("Gieseler Str.");
        break;
    }
    case 116936:
    {
        returnValue = F("Gieseler Weg");
        break;
    }
    case 116937:
    {
        returnValue = F("Gieselerwall");
        break;
    }
    case 116938:
    {
        returnValue = F("Gieselerweg");
        break;
    }
    case 116939:
    {
        returnValue = F("Gieselgasse");
        break;
    }
    case 116940:
    {
        returnValue = F("Gieselkamp");
        break;
    }
    case 116941:
    {
        returnValue = F("Gieselmann-Kreisel");
        break;
    }
    case 116942:
    {
        returnValue = F("Gieselradweg");
        break;
    }
    case 116943:
    {
        returnValue = F("Gieselsberg");
        break;
    }
    case 116944:
    {
        returnValue = F("Gieseltalradweg");
        break;
    }
    case 116945:
    {
        returnValue = F("Gieselweg");
        break;
    }
    case 116946:
    {
        returnValue = F("Gieselwerder Str.");
        break;
    }
    case 116947:
    {
        returnValue = F("Giesen");
        break;
    }
    case 116948:
    {
        returnValue = F("Giesenau");
        break;
    }
    case 116949:
    {
        returnValue = F("Giesenbach");
        break;
    }
    case 116950:
    {
        returnValue = F("Giesenbachstr.");
        break;
    }
    case 116951:
    {
        returnValue = F("Giesenbachweg");
        break;
    }
    case 116952:
    {
        returnValue = F("Giesenberg");
        break;
    }
    case 116953:
    {
        returnValue = F("Giesenbergstr.");
        break;
    }
    case 116954:
    {
        returnValue = F("Giesendorf");
        break;
    }
    case 116955:
    {
        returnValue = F("Giesendorfer Str.");
        break;
    }
    case 116956:
    {
        returnValue = F("Giesendorfer Weg");
        break;
    }
    case 116957:
    {
        returnValue = F("Giesendyck");
        break;
    }
    case 116958:
    {
        returnValue = F("Gieseneck");
        break;
    }
    case 116959:
    {
        returnValue = F("Gieseneck - Kohlplatz (übers Köpfle)");
        break;
    }
    case 116960:
    {
        returnValue = F("Giesenend");
        break;
    }
    case 116961:
    {
        returnValue = F("Giesenender Kirchweg");
        break;
    }
    case 116962:
    {
        returnValue = F("Giesener Str.");
        break;
    }
    case 116963:
    {
        returnValue = F("Giesenfort");
        break;
    }
    case 116964:
    {
        returnValue = F("Giesenhainer Str.");
        break;
    }
    case 116965:
    {
        returnValue = F("Giesenhausener Str.");
        break;
    }
    case 116966:
    {
        returnValue = F("Giesenheck");
        break;
    }
    case 116967:
    {
        returnValue = F("Giesenheide");
        break;
    }
    case 116968:
    {
        returnValue = F("Giesenhof");
        break;
    }
    case 116969:
    {
        returnValue = F("Giesenhofstr.");
        break;
    }
    case 116970:
    {
        returnValue = F("Giesenkamp");
        break;
    }
    case 116971:
    {
        returnValue = F("Giesenkirchener Str.");
        break;
    }
    case 116972:
    {
        returnValue = F("Giesenkirchener Weg");
        break;
    }
    case 116973:
    {
        returnValue = F("Giesensdorfer Weg");
        break;
    }
    case 116974:
    {
        returnValue = F("Giesenstein");
        break;
    }
    case 116975:
    {
        returnValue = F("Giesensteiner Str.");
        break;
    }
    case 116976:
    {
        returnValue = F("Giesenstr.");
        break;
    }
    case 116977:
    {
        returnValue = F("Giesental");
        break;
    }
    case 116978:
    {
        returnValue = F("Giesentriesch");
        break;
    }
    case 116979:
    {
        returnValue = F("Giesenweg");
        break;
    }
    case 116980:
    {
        returnValue = F("Giesenwiese");
        break;
    }
    case 116981:
    {
        returnValue = F("Giesenwinkel");
        break;
    }
    case 116982:
    {
        returnValue = F("Gieseritzer Str.");
        break;
    }
    case 116983:
    {
        returnValue = F("Gieseritzer Weg");
        break;
    }
    case 116984:
    {
        returnValue = F("Giesesteig");
        break;
    }
    case 116985:
    {
        returnValue = F("Gieseweg");
        break;
    }
    case 116986:
    {
        returnValue = F("Giesgesheide");
        break;
    }
    case 116987:
    {
        returnValue = F("Giesgrabenweg");
        break;
    }
    case 116988:
    {
        returnValue = F("Gieshofer Hauptstr.");
        break;
    }
    case 116989:
    {
        returnValue = F("Gieshügeler Str.");
        break;
    }
    case 116990:
    {
        returnValue = F("Giesinger Geräumt");
        break;
    }
    case 116991:
    {
        returnValue = F("Giesingerstr.");
        break;
    }
    case 116992:
    {
        returnValue = F("Giesinweg");
        break;
    }
    case 116993:
    {
        returnValue = F("Giesken Eicken");
        break;
    }
    case 116994:
    {
        returnValue = F("Gieskenmoorweg");
        break;
    }
    case 116995:
    {
        returnValue = F("Gieslenberger Str.");
        break;
    }
    case 116996:
    {
        returnValue = F("Giess");
        break;
    }
    case 116997:
    {
        returnValue = F("Giessbachweg");
        break;
    }
    case 116998:
    {
        returnValue = F("Giessberg");
        break;
    }
    case 116999:
    {
        returnValue = F("Giessenbachstr.");
        break;
    }
    case 117000:
    {
        returnValue = F("Giessereistr.");
        break;
    }
    case 117001:
    {
        returnValue = F("Giesswasenweg");
        break;
    }
    case 117002:
    {
        returnValue = F("Giessübel");
        break;
    }
    case 117003:
    {
        returnValue = F("Giesweg");
        break;
    }
    case 117004:
    {
        returnValue = F("Gietherstr.");
        break;
    }
    case 117005:
    {
        returnValue = F("Giethgasse");
        break;
    }
    case 117006:
    {
        returnValue = F("Gietlhausen");
        break;
    }
    case 117007:
    {
        returnValue = F("Gietlhausener Str.");
        break;
    }
    case 117008:
    {
        returnValue = F("Gietlingsweg");
        break;
    }
    case 117009:
    {
        returnValue = F("Gietlingswiese");
        break;
    }
    case 117010:
    {
        returnValue = F("Gietsche Weg");
        break;
    }
    case 117011:
    {
        returnValue = F("Gieveningsweg");
        break;
    }
    case 117012:
    {
        returnValue = F("Gievitzer Weg");
        break;
    }
    case 117013:
    {
        returnValue = F("Gießbacherkopfweg");
        break;
    }
    case 117014:
    {
        returnValue = F("Gießbachstr.");
        break;
    }
    case 117015:
    {
        returnValue = F("Gießbachweg");
        break;
    }
    case 117016:
    {
        returnValue = F("Gießbeckplatz");
        break;
    }
    case 117017:
    {
        returnValue = F("Gießbergstr.");
        break;
    }
    case 117018:
    {
        returnValue = F("Gießbrücke");
        break;
    }
    case 117019:
    {
        returnValue = F("Gießelbach");
        break;
    }
    case 117020:
    {
        returnValue = F("Gießelbachhof");
        break;
    }
    case 117021:
    {
        returnValue = F("Gießelbachstr.");
        break;
    }
    case 117022:
    {
        returnValue = F("Gießelhorster Kirchweg");
        break;
    }
    case 117023:
    {
        returnValue = F("Gießen");
        break;
    }
    case 117024:
    {
        returnValue = F("Gießenbacherweg");
        break;
    }
    case 117025:
    {
        returnValue = F("Gießenbachstr.");
        break;
    }
    case 117026:
    {
        returnValue = F("Gießenburgweg");
        break;
    }
    case 117027:
    {
        returnValue = F("Gießener Landstr.");
        break;
    }
    case 117028:
    {
        returnValue = F("Gießener Pforte");
        break;
    }
    case 117029:
    {
        returnValue = F("Gießener Str.");
        break;
    }
    case 117030:
    {
        returnValue = F("Gießener Weg");
        break;
    }
    case 117031:
    {
        returnValue = F("Gießenstr.");
        break;
    }
    case 117032:
    {
        returnValue = F("Gießenweg");
        break;
    }
    case 117033:
    {
        returnValue = F("Gießer Weg");
        break;
    }
    case 117034:
    {
        returnValue = F("Gießerallee");
        break;
    }
    case 117035:
    {
        returnValue = F("Gießereistr.");
        break;
    }
    case 117036:
    {
        returnValue = F("Gießereiweg");
        break;
    }
    case 117037:
    {
        returnValue = F("Gießergasse");
        break;
    }
    case 117038:
    {
        returnValue = F("Gießerpfad");
        break;
    }
    case 117039:
    {
        returnValue = F("Gießerstr.");
        break;
    }
    case 117040:
    {
        returnValue = F("Gießerweg");
        break;
    }
    case 117041:
    {
        returnValue = F("Gießestr.");
        break;
    }
    case 117042:
    {
        returnValue = F("Gießeturm");
        break;
    }
    case 117043:
    {
        returnValue = F("Gießeweg");
        break;
    }
    case 117044:
    {
        returnValue = F("Gießgasse");
        break;
    }
    case 117045:
    {
        returnValue = F("Gießgraben");
        break;
    }
    case 117046:
    {
        returnValue = F("Gießgrabenweg");
        break;
    }
    case 117047:
    {
        returnValue = F("Gießhaus-Steg");
        break;
    }
    case 117048:
    {
        returnValue = F("Gießhübelmühle");
        break;
    }
    case 117049:
    {
        returnValue = F("Gießhübelstr.");
        break;
    }
    case 117050:
    {
        returnValue = F("Gießhübelweg");
        break;
    }
    case 117051:
    {
        returnValue = F("Gießingsriege");
        break;
    }
    case 117052:
    {
        returnValue = F("Gießmühler Str.");
        break;
    }
    case 117053:
    {
        returnValue = F("Gießnaustr.");
        break;
    }
    case 117054:
    {
        returnValue = F("Gießnauweg");
        break;
    }
    case 117055:
    {
        returnValue = F("Gießnerfeld");
        break;
    }
    case 117056:
    {
        returnValue = F("Gießpfannenplatz");
        break;
    }
    case 117057:
    {
        returnValue = F("Gießrechenstr.");
        break;
    }
    case 117058:
    {
        returnValue = F("Gießsteinstr.");
        break;
    }
    case 117059:
    {
        returnValue = F("Gießsteinweg");
        break;
    }
    case 117060:
    {
        returnValue = F("Gießstr.");
        break;
    }
    case 117061:
    {
        returnValue = F("Gießweg");
        break;
    }
    case 117062:
    {
        returnValue = F("Gießübel");
        break;
    }
    case 117063:
    {
        returnValue = F("Gießübelgasse");
        break;
    }
    case 117064:
    {
        returnValue = F("Gießübl");
        break;
    }
    case 117065:
    {
        returnValue = F("Gießübler Str.");
        break;
    }
    case 117066:
    {
        returnValue = F("Giffelsberger Weg");
        break;
    }
    case 117067:
    {
        returnValue = F("Gifhorner Str.");
        break;
    }
    case 117068:
    {
        returnValue = F("Gifhorner Weg");
        break;
    }
    case 117069:
    {
        returnValue = F("Gifiz-Rundweg");
        break;
    }
    case 117070:
    {
        returnValue = F("Gifizenmoos");
        break;
    }
    case 117071:
    {
        returnValue = F("Gifkendorf");
        break;
    }
    case 117072:
    {
        returnValue = F("Gifkendorfer Weg");
        break;
    }
    case 117073:
    {
        returnValue = F("Giflitzer Str.");
        break;
    }
    case 117074:
    {
        returnValue = F("Giftener Str.");
        break;
    }
    case 117075:
    {
        returnValue = F("Gifthaler Feld");
        break;
    }
    case 117076:
    {
        returnValue = F("Gifthüttenstr.");
        break;
    }
    case 117077:
    {
        returnValue = F("Gifthüttenweg");
        break;
    }
    case 117078:
    {
        returnValue = F("Giftigstr.");
        break;
    }
    case 117079:
    {
        returnValue = F("Giftmehlweg");
        break;
    }
    case 117080:
    {
        returnValue = F("Gigasweg");
        break;
    }
    case 117081:
    {
        returnValue = F("Gigelberg");
        break;
    }
    case 117082:
    {
        returnValue = F("Gigelbergstr.");
        break;
    }
    case 117083:
    {
        returnValue = F("Gigelestr.");
        break;
    }
    case 117084:
    {
        returnValue = F("Gigelesweg");
        break;
    }
    case 117085:
    {
        returnValue = F("Gigeläcker");
        break;
    }
    case 117086:
    {
        returnValue = F("Gigergässle");
        break;
    }
    case 117087:
    {
        returnValue = F("Gigertsgasse");
        break;
    }
    case 117088:
    {
        returnValue = F("Giggegasse");
        break;
    }
    case 117089:
    {
        returnValue = F("Giggenbachstr.");
        break;
    }
    case 117090:
    {
        returnValue = F("Giggenhauser Str.");
        break;
    }
    case 117091:
    {
        returnValue = F("Gigging");
        break;
    }
    case 117092:
    {
        returnValue = F("Gigginger Str.");
        break;
    }
    case 117093:
    {
        returnValue = F("Gigglerskopfweg");
        break;
    }
    case 117094:
    {
        returnValue = F("Giggling");
        break;
    }
    case 117095:
    {
        returnValue = F("Gigglinger Weg");
        break;
    }
    case 117096:
    {
        returnValue = F("Giglberg");
        break;
    }
    case 117097:
    {
        returnValue = F("Giglberger Weg");
        break;
    }
    case 117098:
    {
        returnValue = F("Giglweg");
        break;
    }
    case 117099:
    {
        returnValue = F("Gihrenstr.");
        break;
    }
    case 117100:
    {
        returnValue = F("Gihrsteinstr.");
        break;
    }
    case 117101:
    {
        returnValue = F("Gilardistr.");
        break;
    }
    case 117102:
    {
        returnValue = F("Gilbachstr.");
        break;
    }
    case 117103:
    {
        returnValue = F("Gilbachweg");
        break;
    }
    case 117104:
    {
        returnValue = F("Gilberg");
        break;
    }
    case 117105:
    {
        returnValue = F("Gilbergstr.");
        break;
    }
    case 117106:
    {
        returnValue = F("Gilbersweg");
        break;
    }
    case 117107:
    {
        returnValue = F("Gilbert Schneise");
        break;
    }
    case 117108:
    {
        returnValue = F("Gilbertstr.");
        break;
    }
    case 117109:
    {
        returnValue = F("Gilborn");
        break;
    }
    case 117110:
    {
        returnValue = F("Gilcherweg");
        break;
    }
    case 117111:
    {
        returnValue = F("Gilchinger Str.");
        break;
    }
    case 117112:
    {
        returnValue = F("Gilchinger Weg");
        break;
    }
    case 117113:
    {
        returnValue = F("Gilchriststr.");
        break;
    }
    case 117114:
    {
        returnValue = F("Gildastr.");
        break;
    }
    case 117115:
    {
        returnValue = F("Gildeacker");
        break;
    }
    case 117116:
    {
        returnValue = F("Gildeallee");
        break;
    }
    case 117117:
    {
        returnValue = F("Gildebrede");
        break;
    }
    case 117118:
    {
        returnValue = F("Gildegang");
        break;
    }
    case 117119:
    {
        returnValue = F("Gildegartenweg");
        break;
    }
    case 117120:
    {
        returnValue = F("Gildegrund");
        break;
    }
    case 117121:
    {
        returnValue = F("Gildehauser Esch");
        break;
    }
    case 117122:
    {
        returnValue = F("Gildehauser Str.");
        break;
    }
    case 117123:
    {
        returnValue = F("Gildehauser Weg");
        break;
    }
    case 117124:
    {
        returnValue = F("Gildehufeweg");
        break;
    }
    case 117125:
    {
        returnValue = F("Gildehusweg");
        break;
    }
    case 117126:
    {
        returnValue = F("Gildekamp");
        break;
    }
    case 117127:
    {
        returnValue = F("Gildelandstr.");
        break;
    }
    case 117128:
    {
        returnValue = F("Gildemeisterstr.");
        break;
    }
    case 117129:
    {
        returnValue = F("Gildenhaller Allee");
        break;
    }
    case 117130:
    {
        returnValue = F("Gildenhook");
        break;
    }
    case 117131:
    {
        returnValue = F("Gildenhörn");
        break;
    }
    case 117132:
    {
        returnValue = F("Gildenplatz");
        break;
    }
    case 117133:
    {
        returnValue = F("Gildenstr.");
        break;
    }
    case 117134:
    {
        returnValue = F("Gildenwaldstr.");
        break;
    }
    case 117135:
    {
        returnValue = F("Gildenweg");
        break;
    }
    case 117136:
    {
        returnValue = F("Gildeplatz");
        break;
    }
    case 117137:
    {
        returnValue = F("Gilder Weg");
        break;
    }
    case 117138:
    {
        returnValue = F("Gildering");
        break;
    }
    case 117139:
    {
        returnValue = F("Gildestr.");
        break;
    }
    case 117140:
    {
        returnValue = F("Gildesweg");
        break;
    }
    case 117141:
    {
        returnValue = F("Gildewart");
        break;
    }
    case 117142:
    {
        returnValue = F("Gildeweg");
        break;
    }
    case 117143:
    {
        returnValue = F("Gildeworth");
        break;
    }
    case 117144:
    {
        returnValue = F("Gildhaus Esch");
        break;
    }
    case 117145:
    {
        returnValue = F("Gildkamp");
        break;
    }
    case 117146:
    {
        returnValue = F("Gilfershäuser Str.");
        break;
    }
    case 117147:
    {
        returnValue = F("Gilgaustr.");
        break;
    }
    case 117148:
    {
        returnValue = F("Gilgenborn");
        break;
    }
    case 117149:
    {
        returnValue = F("Gilgenburger Str.");
        break;
    }
    case 117150:
    {
        returnValue = F("Gilgener Heide");
        break;
    }
    case 117151:
    {
        returnValue = F("Gilgener Str.");
        break;
    }
    case 117152:
    {
        returnValue = F("Gilgenhöfe");
        break;
    }
    case 117153:
    {
        returnValue = F("Gilgenkordel");
        break;
    }
    case 117154:
    {
        returnValue = F("Gilgenmatten");
        break;
    }
    case 117155:
    {
        returnValue = F("Gilgenstr.");
        break;
    }
    case 117156:
    {
        returnValue = F("Gilkamp");
        break;
    }
    case 117157:
    {
        returnValue = F("Gilkenwerder");
        break;
    }
    case 117158:
    {
        returnValue = F("Gillbachstr.");
        break;
    }
    case 117159:
    {
        returnValue = F("Gilldonk");
        break;
    }
    case 117160:
    {
        returnValue = F("Gillenbeurener Weg");
        break;
    }
    case 117161:
    {
        returnValue = F("Gillenfelder Str.");
        break;
    }
    case 117162:
    {
        returnValue = F("Gillenfelder Weg");
        break;
    }
    case 117163:
    {
        returnValue = F("Gillenmoor");
        break;
    }
    case 117164:
    {
        returnValue = F("Gillenstr.");
        break;
    }
    case 117165:
    {
        returnValue = F("Gillenweg");
        break;
    }
    case 117166:
    {
        returnValue = F("Giller Höhe");
        break;
    }
    case 117167:
    {
        returnValue = F("Giller Str.");
        break;
    }
    case 117168:
    {
        returnValue = F("Gillerbergstr.");
        break;
    }
    case 117169:
    {
        returnValue = F("Gillergasse");
        break;
    }
    case 117170:
    {
        returnValue = F("Gillersdorfer Hauptstr.");
        break;
    }
    case 117171:
    {
        returnValue = F("Gillersgasse");
        break;
    }
    case 117172:
    {
        returnValue = F("Gillesbever");
        break;
    }
    case 117173:
    {
        returnValue = F("Gilleshütte");
        break;
    }
    case 117174:
    {
        returnValue = F("Gillestr.");
        break;
    }
    case 117175:
    {
        returnValue = F("Gillesweg");
        break;
    }
    case 117176:
    {
        returnValue = F("Gilletstr.");
        break;
    }
    case 117177:
    {
        returnValue = F("Gillgarten");
        break;
    }
    case 117178:
    {
        returnValue = F("Gillhau");
        break;
    }
    case 117179:
    {
        returnValue = F("Gillhoffstr.");
        break;
    }
    case 117180:
    {
        returnValue = F("Gillhorstschneise");
        break;
    }
    case 117181:
    {
        returnValue = F("Gillhuberweg");
        break;
    }
    case 117182:
    {
        returnValue = F("Gillich");
        break;
    }
    case 117183:
    {
        returnValue = F("Gillicher Str.");
        break;
    }
    case 117184:
    {
        returnValue = F("Gilling");
        break;
    }
    case 117185:
    {
        returnValue = F("Gillingsweg");
        break;
    }
    case 117186:
    {
        returnValue = F("Gillis-Grafström-Str.");
        break;
    }
    case 117187:
    {
        returnValue = F("Gillitzerstr.");
        break;
    }
    case 117188:
    {
        returnValue = F("Gillmannstr.");
        break;
    }
    case 117189:
    {
        returnValue = F("Gillmoor");
        break;
    }
    case 117190:
    {
        returnValue = F("Gillrather Str.");
        break;
    }
    case 117191:
    {
        returnValue = F("Gillstr.");
        break;
    }
    case 117192:
    {
        returnValue = F("Gillweg");
        break;
    }
    case 117193:
    {
        returnValue = F("Gillwiese");
        break;
    }
    case 117194:
    {
        returnValue = F("Gilmerdingen");
        break;
    }
    case 117195:
    {
        returnValue = F("Gilmerich");
        break;
    }
    case 117196:
    {
        returnValue = F("Gilnweg");
        break;
    }
    case 117197:
    {
        returnValue = F("Gilsahaag");
        break;
    }
    case 117198:
    {
        returnValue = F("Gilsarteich");
        break;
    }
    case 117199:
    {
        returnValue = F("Gilsastr.");
        break;
    }
    case 117200:
    {
        returnValue = F("Gilsatalstr.");
        break;
    }
    case 117201:
    {
        returnValue = F("Gilsaweg");
        break;
    }
    case 117202:
    {
        returnValue = F("Gilsbach NW1");
        break;
    }
    case 117203:
    {
        returnValue = F("Gilsbacher Str.");
        break;
    }
    case 117204:
    {
        returnValue = F("Gilsbachweg");
        break;
    }
    case 117205:
    {
        returnValue = F("Gilsberg");
        break;
    }
    case 117206:
    {
        returnValue = F("Gilsbergstr.");
        break;
    }
    case 117207:
    {
        returnValue = F("Gilsdorfer Weg");
        break;
    }
    case 117208:
    {
        returnValue = F("Gilsenöder Str.");
        break;
    }
    case 117209:
    {
        returnValue = F("Gilsingstr.");
        break;
    }
    case 117210:
    {
        returnValue = F("Giltener Str.");
        break;
    }
    case 117211:
    {
        returnValue = F("Giltener Weg");
        break;
    }
    case 117212:
    {
        returnValue = F("Giltjesweg");
        break;
    }
    case 117213:
    {
        returnValue = F("Giltwingertstr.");
        break;
    }
    case 117214:
    {
        returnValue = F("Gilverather Str.");
        break;
    }
    case 117215:
    {
        returnValue = F("Gilze-Rijen-Str.");
        break;
    }
    case 117216:
    {
        returnValue = F("Gilzemer Str.");
        break;
    }
    case 117217:
    {
        returnValue = F("Gilzenweg");
        break;
    }
    case 117218:
    {
        returnValue = F("Gimbacher Str.");
        break;
    }
    case 117219:
    {
        returnValue = F("Gimbacher Weg");
        break;
    }
    case 117220:
    {
        returnValue = F("Gimbachweg");
        break;
    }
    case 117221:
    {
        returnValue = F("Gimbelsgasse");
        break;
    }
    case 117222:
    {
        returnValue = F("Gimborner Kirchweg");
        break;
    }
    case 117223:
    {
        returnValue = F("Gimborner Str.");
        break;
    }
    case 117224:
    {
        returnValue = F("Gimbornstr.");
        break;
    }
    case 117225:
    {
        returnValue = F("Gimbsheimer Str.");
        break;
    }
    case 117226:
    {
        returnValue = F("Gimbter Heide");
        break;
    }
    case 117227:
    {
        returnValue = F("Gimbter Str.");
        break;
    }
    case 117228:
    {
        returnValue = F("Gimbweiler Str.");
        break;
    }
    case 117229:
    {
        returnValue = F("Gimbweilerstr.");
        break;
    }
    case 117230:
    {
        returnValue = F("Gimmeldinger Str.");
        break;
    }
    case 117231:
    {
        returnValue = F("Gimmeler Weg");
        break;
    }
    case 117232:
    {
        returnValue = F("Gimmerichstr.");
        break;
    }
    case 117233:
    {
        returnValue = F("Gimmersdorfer Str.");
        break;
    }
    case 117234:
    {
        returnValue = F("Gimmersdorfer Weg");
        break;
    }
    case 117235:
    {
        returnValue = F("Gimmicker Weg");
        break;
    }
    case 117236:
    {
        returnValue = F("Gimmiger Str.");
        break;
    }
    case 117237:
    {
        returnValue = F("Gimmlitztal");
        break;
    }
    case 117238:
    {
        returnValue = F("Gimmundstr.");
        break;
    }
    case 117239:
    {
        returnValue = F("Gimpelgasse");
        break;
    }
    case 117240:
    {
        returnValue = F("Gimpelsteg");
        break;
    }
    case 117241:
    {
        returnValue = F("Gimpelsteig");
        break;
    }
    case 117242:
    {
        returnValue = F("Gimpelstr.");
        break;
    }
    case 117243:
    {
        returnValue = F("Gimpelweg");
        break;
    }
    case 117244:
    {
        returnValue = F("Gimperner Weg");
        break;
    }
    case 117245:
    {
        returnValue = F("Gimpertshausener Str.");
        break;
    }
    case 117246:
    {
        returnValue = F("Gimritzer Damm");
        break;
    }
    case 117247:
    {
        returnValue = F("Gimritzer Hauptstr.");
        break;
    }
    case 117248:
    {
        returnValue = F("Gimritzer Park");
        break;
    }
    case 117249:
    {
        returnValue = F("Gimritzer Str.");
        break;
    }
    case 117250:
    {
        returnValue = F("Gimter Kirchweg");
        break;
    }
    case 117251:
    {
        returnValue = F("Gimter Str.");
        break;
    }
    case 117252:
    {
        returnValue = F("Gindelalm");
        break;
    }
    case 117253:
    {
        returnValue = F("Gindelalmstr.");
        break;
    }
    case 117254:
    {
        returnValue = F("Gindelalmweg");
        break;
    }
    case 117255:
    {
        returnValue = F("Gindericher Str.");
        break;
    }
    case 117256:
    {
        returnValue = F("Gindlstr.");
        break;
    }
    case 117257:
    {
        returnValue = F("Gindorfer Str.");
        break;
    }
    case 117258:
    {
        returnValue = F("Gingelwald");
        break;
    }
    case 117259:
    {
        returnValue = F("Gingener Weg");
        break;
    }
    case 117260:
    {
        returnValue = F("Ginger Str.");
        break;
    }
    case 117261:
    {
        returnValue = F("Gingfeld");
        break;
    }
    case 117262:
    {
        returnValue = F("Ginggasse");
        break;
    }
    case 117263:
    {
        returnValue = F("Ginggäßlein");
        break;
    }
    case 117264:
    {
        returnValue = F("Ginghartinger Str.");
        break;
    }
    case 117265:
    {
        returnValue = F("Ginglkofen");
        break;
    }
    case 117266:
    {
        returnValue = F("Ginglmühler Weg");
        break;
    }
    case 117267:
    {
        returnValue = F("Gingster Chaussee");
        break;
    }
    case 117268:
    {
        returnValue = F("Gingster Str.");
        break;
    }
    case 117269:
    {
        returnValue = F("Gingterkamp");
        break;
    }
    case 117270:
    {
        returnValue = F("Gingweg");
        break;
    }
    case 117271:
    {
        returnValue = F("Gingässlein");
        break;
    }
    case 117272:
    {
        returnValue = F("Ginhart");
        break;
    }
    case 117273:
    {
        returnValue = F("Ginhofer Str.");
        break;
    }
    case 117274:
    {
        returnValue = F("Gink");
        break;
    }
    case 117275:
    {
        returnValue = F("Ginkgoring");
        break;
    }
    case 117276:
    {
        returnValue = F("Ginkgoterasse");
        break;
    }
    case 117277:
    {
        returnValue = F("Ginkgoweg");
        break;
    }
    case 117278:
    {
        returnValue = F("Ginkopark");
        break;
    }
    case 117279:
    {
        returnValue = F("Ginneberger Str.");
        break;
    }
    case 117280:
    {
        returnValue = F("Ginnerbach");
        break;
    }
    case 117281:
    {
        returnValue = F("Ginnerstr.");
        break;
    }
    case 117282:
    {
        returnValue = F("Ginnerting");
        break;
    }
    case 117283:
    {
        returnValue = F("Ginngasse");
        break;
    }
    case 117284:
    {
        returnValue = F("Ginnheimer Str.");
        break;
    }
    case 117285:
    {
        returnValue = F("Ginnizweilerstr.");
        break;
    }
    case 117286:
    {
        returnValue = F("Ginnstr.");
        break;
    }
    case 117287:
    {
        returnValue = F("Ginolfser Weg");
        break;
    }
    case 117288:
    {
        returnValue = F("Ginsbacher Str.");
        break;
    }
    case 117289:
    {
        returnValue = F("Ginsbacher Weg");
        break;
    }
    case 117290:
    {
        returnValue = F("Ginsburgstr.");
        break;
    }
    case 117291:
    {
        returnValue = F("Ginseldorfer Weg");
        break;
    }
    case 117292:
    {
        returnValue = F("Ginselsried");
        break;
    }
    case 117293:
    {
        returnValue = F("Ginselsrieder Str.");
        break;
    }
    case 117294:
    {
        returnValue = F("Ginshamer Str.");
        break;
    }
    case 117295:
    {
        returnValue = F("Ginshausermühle");
        break;
    }
    case 117296:
    {
        returnValue = F("Ginsheimer Landstr.");
        break;
    }
    case 117297:
    {
        returnValue = F("Ginsheimer Str.");
        break;
    }
    case 117298:
    {
        returnValue = F("Ginsterackerschneise");
        break;
    }
    case 117299:
    {
        returnValue = F("Ginsterallee");
        break;
    }
    case 117300:
    {
        returnValue = F("Ginsterberg");
        break;
    }
    case 117301:
    {
        returnValue = F("Ginsterbergstr.");
        break;
    }
    case 117302:
    {
        returnValue = F("Ginsterbergweg");
        break;
    }
    case 117303:
    {
        returnValue = F("Ginsterbreite");
        break;
    }
    case 117304:
    {
        returnValue = F("Ginsterbrücksweg");
        break;
    }
    case 117305:
    {
        returnValue = F("Ginsterbusch");
        break;
    }
    case 117306:
    {
        returnValue = F("Ginsterfeldstr.");
        break;
    }
    case 117307:
    {
        returnValue = F("Ginstergrund");
        break;
    }
    case 117308:
    {
        returnValue = F("Ginsterhain");
        break;
    }
    case 117309:
    {
        returnValue = F("Ginsterhalde");
        break;
    }
    case 117310:
    {
        returnValue = F("Ginsterhang");
        break;
    }
    case 117311:
    {
        returnValue = F("Ginsterheide");
        break;
    }
    case 117312:
    {
        returnValue = F("Ginsterhof");
        break;
    }
    case 117313:
    {
        returnValue = F("Ginsterkamp");
        break;
    }
    case 117314:
    {
        returnValue = F("Ginsterkopf");
        break;
    }
    case 117315:
    {
        returnValue = F("Ginsterley");
        break;
    }
    case 117316:
    {
        returnValue = F("Ginsterpfad");
        break;
    }
    case 117317:
    {
        returnValue = F("Ginsterplatz");
        break;
    }
    case 117318:
    {
        returnValue = F("Ginsterring");
        break;
    }
    case 117319:
    {
        returnValue = F("Ginsterstaffel");
        break;
    }
    case 117320:
    {
        returnValue = F("Ginstersteg");
        break;
    }
    case 117321:
    {
        returnValue = F("Ginstersteig");
        break;
    }
    case 117322:
    {
        returnValue = F("Ginsterstieg");
        break;
    }
    case 117323:
    {
        returnValue = F("Ginsterstr.");
        break;
    }
    case 117324:
    {
        returnValue = F("Ginstertwiete");
        break;
    }
    case 117325:
    {
        returnValue = F("Ginsterweg");
        break;
    }
    case 117326:
    {
        returnValue = F("Ginsterwinkel");
        break;
    }
    case 117327:
    {
        returnValue = F("Gintoft");
        break;
    }
    case 117328:
    {
        returnValue = F("Gintofter Str.");
        break;
    }
    case 117329:
    {
        returnValue = F("Gintzbach");
        break;
    }
    case 117330:
    {
        returnValue = F("Ginzelberger Weg");
        break;
    }
    case 117331:
    {
        returnValue = F("Gionstr.");
        break;
    }
    case 117332:
    {
        returnValue = F("Giordano-Bruno-Weg");
        break;
    }
    case 117333:
    {
        returnValue = F("Gipfelkreuzweg");
        break;
    }
    case 117334:
    {
        returnValue = F("Gipfelsberg");
        break;
    }
    case 117335:
    {
        returnValue = F("Gipfelstr.");
        break;
    }
    case 117336:
    {
        returnValue = F("Gipfeltreffen");
        break;
    }
    case 117337:
    {
        returnValue = F("Gipfelwanderweg");
        break;
    }
    case 117338:
    {
        returnValue = F("Gipfelweg");
        break;
    }
    case 117339:
    {
        returnValue = F("Gippe");
        break;
    }
    case 117340:
    {
        returnValue = F("Gippenweg");
        break;
    }
    case 117341:
    {
        returnValue = F("Gippenzaun");
        break;
    }
    case 117342:
    {
        returnValue = F("Gippes");
        break;
    }
    case 117343:
    {
        returnValue = F("Gipsbrink");
        break;
    }
    case 117344:
    {
        returnValue = F("Gipsbruchweg");
        break;
    }
    case 117345:
    {
        returnValue = F("Gipsdielenweg");
        break;
    }
    case 117346:
    {
        returnValue = F("Gipsenweg");
        break;
    }
    case 117347:
    {
        returnValue = F("Gipserstr.");
        break;
    }
    case 117348:
    {
        returnValue = F("Gipserweg");
        break;
    }
    case 117349:
    {
        returnValue = F("Gipsgrube");
        break;
    }
    case 117350:
    {
        returnValue = F("Gipsgrubenweg");
        break;
    }
    case 117351:
    {
        returnValue = F("Gipshalden");
        break;
    }
    case 117352:
    {
        returnValue = F("Gipshaldenweg");
        break;
    }
    case 117353:
    {
        returnValue = F("Gipshütte");
        break;
    }
    case 117354:
    {
        returnValue = F("Gipshüttenstr.");
        break;
    }
    case 117355:
    {
        returnValue = F("Gipshüttenweg");
        break;
    }
    case 117356:
    {
        returnValue = F("Gipskuhlenweg");
        break;
    }
    case 117357:
    {
        returnValue = F("Gipsmühle");
        break;
    }
    case 117358:
    {
        returnValue = F("Gipsmühlenweg");
        break;
    }
    case 117359:
    {
        returnValue = F("Gipsmühlweg");
        break;
    }
    case 117360:
    {
        returnValue = F("Gipsstr.");
        break;
    }
    case 117361:
    {
        returnValue = F("Gipsweg");
        break;
    }
    case 117362:
    {
        returnValue = F("Gipswerkstr.");
        break;
    }
    case 117363:
    {
        returnValue = F("Giraffe");
        break;
    }
    case 117364:
    {
        returnValue = F("Giraffen, Straußen, Zebras");
        break;
    }
    case 117365:
    {
        returnValue = F("Giraffenweg");
        break;
    }
    case 117366:
    {
        returnValue = F("Girardetallee");
        break;
    }
    case 117367:
    {
        returnValue = F("Girardetbrücke");
        break;
    }
    case 117368:
    {
        returnValue = F("Girardetstr.");
        break;
    }
    case 117369:
    {
        returnValue = F("Giratsmoosweg");
        break;
    }
    case 117370:
    {
        returnValue = F("Girbelsrather Str.");
        break;
    }
    case 117371:
    {
        returnValue = F("Girbigsdorfer Str.");
        break;
    }
    case 117372:
    {
        returnValue = F("Girbigsdorfer Weg");
        break;
    }
    case 117373:
    {
        returnValue = F("Girchinger Str.");
        break;
    }
    case 117374:
    {
        returnValue = F("Girgenrath");
        break;
    }
    case 117375:
    {
        returnValue = F("Girishalde");
        break;
    }
    case 117376:
    {
        returnValue = F("Girkenrother Str.");
        break;
    }
    case 117377:
    {
        returnValue = F("Girkhausen");
        break;
    }
    case 117378:
    {
        returnValue = F("Girkhausener Str.");
        break;
    }
    case 117379:
    {
        returnValue = F("Girkhäuser Weg");
        break;
    }
    case 117380:
    {
        returnValue = F("Girlachsgraben");
        break;
    }
    case 117381:
    {
        returnValue = F("Girlitzstr.");
        break;
    }
    case 117382:
    {
        returnValue = F("Girlitzweg");
        break;
    }
    case 117383:
    {
        returnValue = F("Girmes-Kreuz-Str.");
        break;
    }
    case 117384:
    {
        returnValue = F("Girmesdyk");
        break;
    }
    case 117385:
    {
        returnValue = F("Girmesgath");
        break;
    }
    case 117386:
    {
        returnValue = F("Girmeskamp");
        break;
    }
    case 117387:
    {
        returnValue = F("Girnbachtal");
        break;
    }
    case 117388:
    {
        returnValue = F("Girner Weg");
        break;
    }
    case 117389:
    {
        returnValue = F("Girnhecker Weg");
        break;
    }
    case 117390:
    {
        returnValue = F("Girnitz");
        break;
    }
    case 117391:
    {
        returnValue = F("Girnweg");
        break;
    }
    case 117392:
    {
        returnValue = F("Giromagnystr.");
        break;
    }
    case 117393:
    {
        returnValue = F("Girondelle");
        break;
    }
    case 117394:
    {
        returnValue = F("Girondeller Str.");
        break;
    }
    case 117395:
    {
        returnValue = F("Girondellestr.");
        break;
    }
    case 117396:
    {
        returnValue = F("Girrlenweg");
        break;
    }
    case 117397:
    {
        returnValue = F("Girshalde");
        break;
    }
    case 117398:
    {
        returnValue = F("Girststr.");
        break;
    }
    case 117399:
    {
        returnValue = F("Girvelscheider Schneise");
        break;
    }
    case 117400:
    {
        returnValue = F("Gisbert-Cremer-Str.");
        break;
    }
    case 117401:
    {
        returnValue = F("Gisbert-Fluck-Str.");
        break;
    }
    case 117402:
    {
        returnValue = F("Gisbert-Lensing-Park");
        break;
    }
    case 117403:
    {
        returnValue = F("Gisbert-Lieber-Str.");
        break;
    }
    case 117404:
    {
        returnValue = F("Gisbertstr.");
        break;
    }
    case 117405:
    {
        returnValue = F("Gisbertzstr.");
        break;
    }
    case 117406:
    {
        returnValue = F("Gisbodusstr.");
        break;
    }
    case 117407:
    {
        returnValue = F("Gischensweg");
        break;
    }
    case 117408:
    {
        returnValue = F("Gischower Hauptstr.");
        break;
    }
    case 117409:
    {
        returnValue = F("Gischower Str.");
        break;
    }
    case 117410:
    {
        returnValue = F("Gischower Weg");
        break;
    }
    case 117411:
    {
        returnValue = F("Gisela-Bär-Str.");
        break;
    }
    case 117412:
    {
        returnValue = F("Gisela-Franke-Weg");
        break;
    }
    case 117413:
    {
        returnValue = F("Gisela-Mauermayer-Weg");
        break;
    }
    case 117414:
    {
        returnValue = F("Gisela-Ring");
        break;
    }
    case 117415:
    {
        returnValue = F("Gisela-Stephan-Weg");
        break;
    }
    case 117416:
    {
        returnValue = F("Gisela-und-Hans-Ruland-Str.");
        break;
    }
    case 117417:
    {
        returnValue = F("Giselastr.");
        break;
    }
    case 117418:
    {
        returnValue = F("Giselaweg");
        break;
    }
    case 117419:
    {
        returnValue = F("Giselbertstr.");
        break;
    }
    case 117420:
    {
        returnValue = F("Gisele-Freund-Str.");
        break;
    }
    case 117421:
    {
        returnValue = F("Giselhalden");
        break;
    }
    case 117422:
    {
        returnValue = F("Giselherplatz");
        break;
    }
    case 117423:
    {
        returnValue = F("Giselherstr.");
        break;
    }
    case 117424:
    {
        returnValue = F("Giselherweg");
        break;
    }
    case 117425:
    {
        returnValue = F("Gisenburgweg");
        break;
    }
    case 117426:
    {
        returnValue = F("Gisilastr.");
        break;
    }
    case 117427:
    {
        returnValue = F("Gisilostr.");
        break;
    }
    case 117428:
    {
        returnValue = F("Gisinger Str.");
        break;
    }
    case 117429:
    {
        returnValue = F("Gisinger Weg");
        break;
    }
    case 117430:
    {
        returnValue = F("Gisiweg");
        break;
    }
    case 117431:
    {
        returnValue = F("Giso-Ring");
        break;
    }
    case 117432:
    {
        returnValue = F("Gisonenweg");
        break;
    }
    case 117433:
    {
        returnValue = F("Gisorsstr.");
        break;
    }
    case 117434:
    {
        returnValue = F("Gisostr.");
        break;
    }
    case 117435:
    {
        returnValue = F("Gispelstr.");
        break;
    }
    case 117436:
    {
        returnValue = F("Gisperslebener Anger");
        break;
    }
    case 117437:
    {
        returnValue = F("Gisperslebener Str.");
        break;
    }
    case 117438:
    {
        returnValue = F("Gisperslebener Weg");
        break;
    }
    case 117439:
    {
        returnValue = F("Gisselberger Str.");
        break;
    }
    case 117440:
    {
        returnValue = F("Gisselstr.");
        break;
    }
    case 117441:
    {
        returnValue = F("Gissenstr.");
        break;
    }
    case 117442:
    {
        returnValue = F("Gissestr.");
        break;
    }
    case 117443:
    {
        returnValue = F("Gissigheimer Str.");
        break;
    }
    case 117444:
    {
        returnValue = F("Gisteler Str.");
        break;
    }
    case 117445:
    {
        returnValue = F("Gisèle-Freund-Weg");
        break;
    }
    case 117446:
    {
        returnValue = F("Gitlberger Str.");
        break;
    }
    case 117447:
    {
        returnValue = F("Gitschweg");
        break;
    }
    case 117448:
    {
        returnValue = F("Gitstapper Hof");
        break;
    }
    case 117449:
    {
        returnValue = F("Gitstapper Weg");
        break;
    }
    case 117450:
    {
        returnValue = F("Gittenbach");
        break;
    }
    case 117451:
    {
        returnValue = F("Gittensdorfer Str.");
        break;
    }
    case 117452:
    {
        returnValue = F("Gitterbrücke");
        break;
    }
    case 117453:
    {
        returnValue = F("Gitterdamm");
        break;
    }
    case 117454:
    {
        returnValue = F("Gitterle");
        break;
    }
    case 117455:
    {
        returnValue = F("Gittersberggasse");
        break;
    }
    case 117456:
    {
        returnValue = F("Gitterseer Str.");
        break;
    }
    case 117457:
    {
        returnValue = F("Gittertor");
        break;
    }
    case 117458:
    {
        returnValue = F("Gitterweg");
        break;
    }
    case 117459:
    {
        returnValue = F("Gitteweg");
        break;
    }
    case 117460:
    {
        returnValue = F("Gittihaldenweg");
        break;
    }
    case 117461:
    {
        returnValue = F("Gittinger Str.");
        break;
    }
    case 117462:
    {
        returnValue = F("Gittinger Weg");
        break;
    }
    case 117463:
    {
        returnValue = F("Gittingerweg");
        break;
    }
    case 117464:
    {
        returnValue = F("Gittiweg");
        break;
    }
    case 117465:
    {
        returnValue = F("Gittruper Str.");
        break;
    }
    case 117466:
    {
        returnValue = F("Gitzenflur");
        break;
    }
    case 117467:
    {
        returnValue = F("Gitzenhofen");
        break;
    }
    case 117468:
    {
        returnValue = F("Gitzental");
        break;
    }
    case 117469:
    {
        returnValue = F("Gitzhörn");
        break;
    }
    case 117470:
    {
        returnValue = F("Giuliniplatz");
        break;
    }
    case 117471:
    {
        returnValue = F("Giulio-Perotti-Weg");
        break;
    }
    case 117472:
    {
        returnValue = F("Giuseppe-Verdi-Str.");
        break;
    }
    case 117473:
    {
        returnValue = F("Giveonstr.");
        break;
    }
    case 117474:
    {
        returnValue = F("Givorser Str.");
        break;
    }
    case 117475:
    {
        returnValue = F("Givry-Allee");
        break;
    }
    case 117476:
    {
        returnValue = F("Gißhibl");
        break;
    }
    case 117477:
    {
        returnValue = F("Gißiebelweg");
        break;
    }
    case 117478:
    {
        returnValue = F("Gißlenberg");
        break;
    }
    case 117479:
    {
        returnValue = F("Glaadter Str.");
        break;
    }
    case 117480:
    {
        returnValue = F("Glaamer Str.");
        break;
    }
    case 117481:
    {
        returnValue = F("Glabacher Ecke");
        break;
    }
    case 117482:
    {
        returnValue = F("Glabbach");
        break;
    }
    case 117483:
    {
        returnValue = F("Glabiplatz");
        break;
    }
    case 117484:
    {
        returnValue = F("Glacis");
        break;
    }
    case 117485:
    {
        returnValue = F("Glacisbrücke");
        break;
    }
    case 117486:
    {
        returnValue = F("Glacispark Ost");
        break;
    }
    case 117487:
    {
        returnValue = F("Glacisstr.");
        break;
    }
    case 117488:
    {
        returnValue = F("Glacisweg");
        break;
    }
    case 117489:
    {
        returnValue = F("Gladbacher Hof");
        break;
    }
    case 117490:
    {
        returnValue = F("Gladbacher Str.");
        break;
    }
    case 117491:
    {
        returnValue = F("Gladbachstr.");
        break;
    }
    case 117492:
    {
        returnValue = F("Gladbeck");
        break;
    }
    case 117493:
    {
        returnValue = F("Gladbecker Str.");
        break;
    }
    case 117494:
    {
        returnValue = F("Gladdenstedter Str.");
        break;
    }
    case 117495:
    {
        returnValue = F("Gladebecker Str.");
        break;
    }
    case 117496:
    {
        returnValue = F("Gladebecker Weg");
        break;
    }
    case 117497:
    {
        returnValue = F("Gladebergsweg");
        break;
    }
    case 117498:
    {
        returnValue = F("Gladeburg");
        break;
    }
    case 117499:
    {
        returnValue = F("Gladeichenschneise");
        break;
    }
    case 117500:
    {
        returnValue = F("Gladenbacher Str.");
        break;
    }
    case 117501:
    {
        returnValue = F("Gladenbacher Weg");
        break;
    }
    case 117502:
    {
        returnValue = F("Gladenbruch");
        break;
    }
    case 117503:
    {
        returnValue = F("Gladeweg");
        break;
    }
    case 117504:
    {
        returnValue = F("Gladiatorenring");
        break;
    }
    case 117505:
    {
        returnValue = F("Gladiolenstr.");
        break;
    }
    case 117506:
    {
        returnValue = F("Gladiolenweg");
        break;
    }
    case 117507:
    {
        returnValue = F("Gladitschstr.");
        break;
    }
    case 117508:
    {
        returnValue = F("Gladitzer Weg");
        break;
    }
    case 117509:
    {
        returnValue = F("Gladowshöher Bergstr.");
        break;
    }
    case 117510:
    {
        returnValue = F("Gladowshöher Fliederweg");
        break;
    }
    case 117511:
    {
        returnValue = F("Gladowshöher Goethestr.");
        break;
    }
    case 117512:
    {
        returnValue = F("Gladowshöher Grenzweg");
        break;
    }
    case 117513:
    {
        returnValue = F("Gladowshöher Lessingstr.");
        break;
    }
    case 117514:
    {
        returnValue = F("Gladowshöher Mittelstr.");
        break;
    }
    case 117515:
    {
        returnValue = F("Gladowshöher Schillerweg");
        break;
    }
    case 117516:
    {
        returnValue = F("Gladowshöher Str.");
        break;
    }
    case 117517:
    {
        returnValue = F("Gladrower Weg");
        break;
    }
    case 117518:
    {
        returnValue = F("Gladsaxer Str.");
        break;
    }
    case 117519:
    {
        returnValue = F("Glaeserweg");
        break;
    }
    case 117520:
    {
        returnValue = F("Glaffenäcker");
        break;
    }
    case 117521:
    {
        returnValue = F("Glain");
        break;
    }
    case 117522:
    {
        returnValue = F("Glaipfenweg");
        break;
    }
    case 117523:
    {
        returnValue = F("Glaisinstr.");
        break;
    }
    case 117524:
    {
        returnValue = F("Glaitstr.");
        break;
    }
    case 117525:
    {
        returnValue = F("Glambeck");
        break;
    }
    case 117526:
    {
        returnValue = F("Glambecker Mühle");
        break;
    }
    case 117527:
    {
        returnValue = F("Glambecker Nebenstr.");
        break;
    }
    case 117528:
    {
        returnValue = F("Glambecker Str.");
        break;
    }
    case 117529:
    {
        returnValue = F("Glambecker Weg");
        break;
    }
    case 117530:
    {
        returnValue = F("Glan-Münchweilerer Str.");
        break;
    }
    case 117531:
    {
        returnValue = F("Glanblick");
        break;
    }
    case 117532:
    {
        returnValue = F("Glandergasse");
        break;
    }
    case 117533:
    {
        returnValue = F("Glandorfer Damm");
        break;
    }
    case 117534:
    {
        returnValue = F("Glandorfer Str.");
        break;
    }
    case 117535:
    {
        returnValue = F("Glandorps Gang");
        break;
    }
    case 117536:
    {
        returnValue = F("Glandorps Hof");
        break;
    }
    case 117537:
    {
        returnValue = F("Glandorpstr.");
        break;
    }
    case 117538:
    {
        returnValue = F("Glaner Str.");
        break;
    }
    case 117539:
    {
        returnValue = F("Glaner Weg");
        break;
    }
    case 117540:
    {
        returnValue = F("Glanerstr.");
        break;
    }
    case 117541:
    {
        returnValue = F("Glaneweg");
        break;
    }
    case 117542:
    {
        returnValue = F("Glanstr.");
        break;
    }
    case 117543:
    {
        returnValue = F("Glantalbahn");
        break;
    }
    case 117544:
    {
        returnValue = F("Glantalstr.");
        break;
    }
    case 117545:
    {
        returnValue = F("Glantzhof");
        break;
    }
    case 117546:
    {
        returnValue = F("Glanweg");
        break;
    }
    case 117547:
    {
        returnValue = F("Glanzengarten");
        break;
    }
    case 117548:
    {
        returnValue = F("Glanzkrautstr.");
        break;
    }
    case 117549:
    {
        returnValue = F("Glanzweg");
        break;
    }
    case 117550:
    {
        returnValue = F("Glapfenberger Str.");
        break;
    }
    case 117551:
    {
        returnValue = F("Glareanstr.");
        break;
    }
    case 117552:
    {
        returnValue = F("Glarenstr.");
        break;
    }
    case 117553:
    {
        returnValue = F("Glarnerstr.");
        break;
    }
    case 117554:
    {
        returnValue = F("Glarum");
        break;
    }
    case 117555:
    {
        returnValue = F("Glarusstr.");
        break;
    }
    case 117556:
    {
        returnValue = F("Glas Steige");
        break;
    }
    case 117557:
    {
        returnValue = F("Glasackerweg");
        break;
    }
    case 117558:
    {
        returnValue = F("Glasauer Weg");
        break;
    }
    case 117559:
    {
        returnValue = F("Glasbach");
        break;
    }
    case 117560:
    {
        returnValue = F("Glasbacher Weg");
        break;
    }
    case 117561:
    {
        returnValue = F("Glasbachkurve");
        break;
    }
    case 117562:
    {
        returnValue = F("Glasbachstr.");
        break;
    }
    case 117563:
    {
        returnValue = F("Glasbachweg");
        break;
    }
    case 117564:
    {
        returnValue = F("Glasbauerweg");
        break;
    }
    case 117565:
    {
        returnValue = F("Glasberg");
        break;
    }
    case 117566:
    {
        returnValue = F("Glasberger Weg");
        break;
    }
    case 117567:
    {
        returnValue = F("Glasbergstr.");
        break;
    }
    case 117568:
    {
        returnValue = F("Glasbergweg");
        break;
    }
    case 117569:
    {
        returnValue = F("Glasbläserstr.");
        break;
    }
    case 117570:
    {
        returnValue = F("Glasbläserweg");
        break;
    }
    case 117571:
    {
        returnValue = F("Glasbrennergasse");
        break;
    }
    case 117572:
    {
        returnValue = F("Glasbrennerstr.");
        break;
    }
    case 117573:
    {
        returnValue = F("Glasbronnenstr.");
        break;
    }
    case 117574:
    {
        returnValue = F("Glasbrunnenweg");
        break;
    }
    case 117575:
    {
        returnValue = F("Glasbrücke");
        break;
    }
    case 117576:
    {
        returnValue = F("Glasbühlstr.");
        break;
    }
    case 117577:
    {
        returnValue = F("Glasbühlweg");
        break;
    }
    case 117578:
    {
        returnValue = F("Glasdielenweg");
        break;
    }
    case 117579:
    {
        returnValue = F("Glasebachstr.");
        break;
    }
    case 117580:
    {
        returnValue = F("Glasebachweg");
        break;
    }
    case 117581:
    {
        returnValue = F("Glaseberg");
        break;
    }
    case 117582:
    {
        returnValue = F("Glasehäuser Str.");
        break;
    }
    case 117583:
    {
        returnValue = F("Glasehäuser Weg");
        break;
    }
    case 117584:
    {
        returnValue = F("Glasenappweg");
        break;
    }
    case 117585:
    {
        returnValue = F("Glasenapweg");
        break;
    }
    case 117586:
    {
        returnValue = F("Glasenberg");
        break;
    }
    case 117587:
    {
        returnValue = F("Glasenleite");
        break;
    }
    case 117588:
    {
        returnValue = F("Glaser Gangsteig");
        break;
    }
    case 117589:
    {
        returnValue = F("Glaser Weg");
        break;
    }
    case 117590:
    {
        returnValue = F("Glaserbergweg");
        break;
    }
    case 117591:
    {
        returnValue = F("Glaserbornweg");
        break;
    }
    case 117592:
    {
        returnValue = F("Glaserbühl");
        break;
    }
    case 117593:
    {
        returnValue = F("Glasererweg");
        break;
    }
    case 117594:
    {
        returnValue = F("Glaserfleck");
        break;
    }
    case 117595:
    {
        returnValue = F("Glasergasse");
        break;
    }
    case 117596:
    {
        returnValue = F("Glasergrundweg");
        break;
    }
    case 117597:
    {
        returnValue = F("Glasergässle");
        break;
    }
    case 117598:
    {
        returnValue = F("Glasergäßchen");
        break;
    }
    case 117599:
    {
        returnValue = F("Glasergäßle");
        break;
    }
    case 117600:
    {
        returnValue = F("Glaserhansenhofweg");
        break;
    }
    case 117601:
    {
        returnValue = F("Glaserhauer Str.");
        break;
    }
    case 117602:
    {
        returnValue = F("Glaserhofweg");
        break;
    }
    case 117603:
    {
        returnValue = F("Glaserhohle");
        break;
    }
    case 117604:
    {
        returnValue = F("Glaserhäuser");
        break;
    }
    case 117605:
    {
        returnValue = F("Glaserhäusleweg");
        break;
    }
    case 117606:
    {
        returnValue = F("Glaserhüttenheide");
        break;
    }
    case 117607:
    {
        returnValue = F("Glaserkopfweg");
        break;
    }
    case 117608:
    {
        returnValue = F("Glasern");
        break;
    }
    case 117609:
    {
        returnValue = F("Glaserplatz");
        break;
    }
    case 117610:
    {
        returnValue = F("Glaserschlagweg");
        break;
    }
    case 117611:
    {
        returnValue = F("Glaserstalweg");
        break;
    }
    case 117612:
    {
        returnValue = F("Glasersteig");
        break;
    }
    case 117613:
    {
        returnValue = F("Glaserstr.");
        break;
    }
    case 117614:
    {
        returnValue = F("Glaserstätte");
        break;
    }
    case 117615:
    {
        returnValue = F("Glaserteichsträßle");
        break;
    }
    case 117616:
    {
        returnValue = F("Glaserweg");
        break;
    }
    case 117617:
    {
        returnValue = F("Glaserwinkel");
        break;
    }
    case 117618:
    {
        returnValue = F("Glasewaldstr.");
        break;
    }
    case 117619:
    {
        returnValue = F("Glaseweg");
        break;
    }
    case 117620:
    {
        returnValue = F("Glasewitzer Chaussee");
        break;
    }
    case 117621:
    {
        returnValue = F("Glasewitzer Str.");
        break;
    }
    case 117622:
    {
        returnValue = F("Glasfaserstr.");
        break;
    }
    case 117623:
    {
        returnValue = F("Glasgowring");
        break;
    }
    case 117624:
    {
        returnValue = F("Glashagen");
        break;
    }
    case 117625:
    {
        returnValue = F("Glashagener Weg");
        break;
    }
    case 117626:
    {
        returnValue = F("Glashau-Weg");
        break;
    }
    case 117627:
    {
        returnValue = F("Glashausträßle");
        break;
    }
    case 117628:
    {
        returnValue = F("Glashausweg");
        break;
    }
    case 117629:
    {
        returnValue = F("Glashauweg");
        break;
    }
    case 117630:
    {
        returnValue = F("Glashof");
        break;
    }
    case 117631:
    {
        returnValue = F("Glashofener Str.");
        break;
    }
    case 117632:
    {
        returnValue = F("Glashofkamp");
        break;
    }
    case 117633:
    {
        returnValue = F("Glasholz");
        break;
    }
    case 117634:
    {
        returnValue = F("Glasholzweg");
        break;
    }
    case 117635:
    {
        returnValue = F("Glashäger Str.");
        break;
    }
    case 117636:
    {
        returnValue = F("Glashäuserstr.");
        break;
    }
    case 117637:
    {
        returnValue = F("Glashügel");
        break;
    }
    case 117638:
    {
        returnValue = F("Glashütt");
        break;
    }
    case 117639:
    {
        returnValue = F("Glashütte");
        break;
    }
    case 117640:
    {
        returnValue = F("Glashütten");
        break;
    }
    case 117641:
    {
        returnValue = F("Glashüttenbodenweg");
        break;
    }
    case 117642:
    {
        returnValue = F("Glashüttener Str.");
        break;
    }
    case 117643:
    {
        returnValue = F("Glashüttener Weg");
        break;
    }
    case 117644:
    {
        returnValue = F("Glashüttenplatz");
        break;
    }
    case 117645:
    {
        returnValue = F("Glashüttenring");
        break;
    }
    case 117646:
    {
        returnValue = F("Glashüttensteig");
        break;
    }
    case 117647:
    {
        returnValue = F("Glashüttenstr.");
        break;
    }
    case 117648:
    {
        returnValue = F("Glashüttenweg");
        break;
    }
    case 117649:
    {
        returnValue = F("Glashütter Damm");
        break;
    }
    case 117650:
    {
        returnValue = F("Glashütter Kirchenweg");
        break;
    }
    case 117651:
    {
        returnValue = F("Glashütter Landstr.");
        break;
    }
    case 117652:
    {
        returnValue = F("Glashütter Str.");
        break;
    }
    case 117653:
    {
        returnValue = F("Glashütter Täle");
        break;
    }
    case 117654:
    {
        returnValue = F("Glashütter Weg");
        break;
    }
    case 117655:
    {
        returnValue = F("Glasig");
        break;
    }
    case 117656:
    {
        returnValue = F("Glasiger Weg");
        break;
    }
    case 117657:
    {
        returnValue = F("Glaskampstr.");
        break;
    }
    case 117658:
    {
        returnValue = F("Glaskopf");
        break;
    }
    case 117659:
    {
        returnValue = F("Glaskopf Rundweg");
        break;
    }
    case 117660:
    {
        returnValue = F("Glaskopfweg");
        break;
    }
    case 117661:
    {
        returnValue = F("Glaskoppel");
        break;
    }
    case 117662:
    {
        returnValue = F("Glaskunststr.");
        break;
    }
    case 117663:
    {
        returnValue = F("Glaslstr.");
        break;
    }
    case 117664:
    {
        returnValue = F("Glaslweg");
        break;
    }
    case 117665:
    {
        returnValue = F("Glasmacherring");
        break;
    }
    case 117666:
    {
        returnValue = F("Glasmacherstr.");
        break;
    }
    case 117667:
    {
        returnValue = F("Glasmacherweg");
        break;
    }
    case 117668:
    {
        returnValue = F("Glasmannstr.");
        break;
    }
    case 117669:
    {
        returnValue = F("Glasmattenweg");
        break;
    }
    case 117670:
    {
        returnValue = F("Glasmattweg");
        break;
    }
    case 117671:
    {
        returnValue = F("Glasmeister-Heinz-Str.");
        break;
    }
    case 117672:
    {
        returnValue = F("Glasmeisterstr.");
        break;
    }
    case 117673:
    {
        returnValue = F("Glasmerweg");
        break;
    }
    case 117674:
    {
        returnValue = F("Glasmißstr.");
        break;
    }
    case 117675:
    {
        returnValue = F("Glasmoorstr.");
        break;
    }
    case 117676:
    {
        returnValue = F("Glasmühlstr.");
        break;
    }
    case 117677:
    {
        returnValue = F("Glasow");
        break;
    }
    case 117678:
    {
        returnValue = F("Glasower Allee");
        break;
    }
    case 117679:
    {
        returnValue = F("Glasower Damm");
        break;
    }
    case 117680:
    {
        returnValue = F("Glasower Str.");
        break;
    }
    case 117681:
    {
        returnValue = F("Glasower Weg");
        break;
    }
    case 117682:
    {
        returnValue = F("Glasowgestell");
        break;
    }
    case 117683:
    {
        returnValue = F("Glaspalast");
        break;
    }
    case 117684:
    {
        returnValue = F("Glasscherben");
        break;
    }
    case 117685:
    {
        returnValue = F("Glasschleiferstr.");
        break;
    }
    case 117686:
    {
        returnValue = F("Glasschmelzerweg");
        break;
    }
    case 117687:
    {
        returnValue = F("Glasshüttenallee");
        break;
    }
    case 117688:
    {
        returnValue = F("Glasshüttenstr.");
        break;
    }
    case 117689:
    {
        returnValue = F("Glassiepen");
        break;
    }
    case 117690:
    {
        returnValue = F("Glassinistr.");
        break;
    }
    case 117691:
    {
        returnValue = F("Glasstr.");
        break;
    }
    case 117692:
    {
        returnValue = F("Glasstreckerweg");
        break;
    }
    case 117693:
    {
        returnValue = F("Glassträßle");
        break;
    }
    case 117694:
    {
        returnValue = F("Glastal");
        break;
    }
    case 117695:
    {
        returnValue = F("Glastalstr.");
        break;
    }
    case 117696:
    {
        returnValue = F("Glastener Str.");
        break;
    }
    case 117697:
    {
        returnValue = F("Glastener Weg");
        break;
    }
    case 117698:
    {
        returnValue = F("Glasträgerweg");
        break;
    }
    case 117699:
    {
        returnValue = F("Glasurwasen");
        break;
    }
    case 117700:
    {
        returnValue = F("Glasurweg");
        break;
    }
    case 117701:
    {
        returnValue = F("Glaswaldstr.");
        break;
    }
    case 117702:
    {
        returnValue = F("Glaswandstr.");
        break;
    }
    case 117703:
    {
        returnValue = F("Glasweg");
        break;
    }
    case 117704:
    {
        returnValue = F("Glaswerk");
        break;
    }
    case 117705:
    {
        returnValue = F("Glaswerkstr.");
        break;
    }
    case 117706:
    {
        returnValue = F("Glaswiesenstr.");
        break;
    }
    case 117707:
    {
        returnValue = F("Glaswiesenweg");
        break;
    }
    case 117708:
    {
        returnValue = F("Glasäckerstr.");
        break;
    }
    case 117709:
    {
        returnValue = F("Glattackerweg");
        break;
    }
    case 117710:
    {
        returnValue = F("Glattalstr.");
        break;
    }
    case 117711:
    {
        returnValue = F("Glattbach");
        break;
    }
    case 117712:
    {
        returnValue = F("Glattbacher Str.");
        break;
    }
    case 117713:
    {
        returnValue = F("Glattbacher Weg");
        break;
    }
    case 117714:
    {
        returnValue = F("Glattbacher Überfahrt");
        break;
    }
    case 117715:
    {
        returnValue = F("Glattberglesweg");
        break;
    }
    case 117716:
    {
        returnValue = F("Glatteneichener Weg");
        break;
    }
    case 117717:
    {
        returnValue = F("Glattener Str.");
        break;
    }
    case 117718:
    {
        returnValue = F("Glatter Aal");
        break;
    }
    case 117719:
    {
        returnValue = F("Glatter Weg");
        break;
    }
    case 117720:
    {
        returnValue = F("Glattsteige");
        break;
    }
    case 117721:
    {
        returnValue = F("Glattsteina");
        break;
    }
    case 117722:
    {
        returnValue = F("Glattstr.");
        break;
    }
    case 117723:
    {
        returnValue = F("Glatzensteinstr.");
        break;
    }
    case 117724:
    {
        returnValue = F("Glatzer Garten");
        break;
    }
    case 117725:
    {
        returnValue = F("Glatzer Ring");
        break;
    }
    case 117726:
    {
        returnValue = F("Glatzer Str.");
        break;
    }
    case 117727:
    {
        returnValue = F("Glatzer Weg");
        break;
    }
    case 117728:
    {
        returnValue = F("Glatzmühle");
        break;
    }
    case 117729:
    {
        returnValue = F("Glatzweg");
        break;
    }
    case 117730:
    {
        returnValue = F("Glatzöd");
        break;
    }
    case 117731:
    {
        returnValue = F("Glaubensberg");
        break;
    }
    case 117732:
    {
        returnValue = F("Glaubensweg");
        break;
    }
    case 117733:
    {
        returnValue = F("Glaubenwies");
        break;
    }
    case 117734:
    {
        returnValue = F("Glaubenwieser Str.");
        break;
    }
    case 117735:
    {
        returnValue = F("Glauberger Str.");
        break;
    }
    case 117736:
    {
        returnValue = F("Glauberger Weg");
        break;
    }
    case 117737:
    {
        returnValue = F("Glaubergstr.");
        break;
    }
    case 117738:
    {
        returnValue = F("Glauberstr.");
        break;
    }
    case 117739:
    {
        returnValue = F("Glaubitzer Str.");
        break;
    }
    case 117740:
    {
        returnValue = F("Glaubitzer Weg");
        break;
    }
    case 117741:
    {
        returnValue = F("Glaubrechtstr.");
        break;
    }
    case 117742:
    {
        returnValue = F("Glauburgstr.");
        break;
    }
    case 117743:
    {
        returnValue = F("Glaubzahler Str.");
        break;
    }
    case 117744:
    {
        returnValue = F("Glauchaer Str.");
        break;
    }
    case 117745:
    {
        returnValue = F("Glauchaer Weg");
        break;
    }
    case 117746:
    {
        returnValue = F("Glauchauer Gasse");
        break;
    }
    case 117747:
    {
        returnValue = F("Glauchauer Landstr.");
        break;
    }
    case 117748:
    {
        returnValue = F("Glauchauer Str.");
        break;
    }
    case 117749:
    {
        returnValue = F("Glauchauer Weg");
        break;
    }
    case 117750:
    {
        returnValue = F("Glauer Bergstr.");
        break;
    }
    case 117751:
    {
        returnValue = F("Glauer Chaussee");
        break;
    }
    case 117752:
    {
        returnValue = F("Glauer Dorfstr.");
        break;
    }
    case 117753:
    {
        returnValue = F("Glauer Weg");
        break;
    }
    case 117754:
    {
        returnValue = F("Glauschnitzer Str.");
        break;
    }
    case 117755:
    {
        returnValue = F("Glaßdorfer Str.");
        break;
    }
    case 117756:
    {
        returnValue = F("Glaßentrempel");
        break;
    }
    case 117757:
    {
        returnValue = F("Glaßstr.");
        break;
    }
    case 117758:
    {
        returnValue = F("Glaßweg");
        break;
    }
    case 117759:
    {
        returnValue = F("Glebbe");
        break;
    }
    case 117760:
    {
        returnValue = F("Glebitzscher Str.");
        break;
    }
    case 117761:
    {
        returnValue = F("Gledeberg");
        break;
    }
    case 117762:
    {
        returnValue = F("Gleesbergstr.");
        break;
    }
    case 117763:
    {
        returnValue = F("Gleeser Str.");
        break;
    }
    case 117764:
    {
        returnValue = F("Glefsweilerstr.");
        break;
    }
    case 117765:
    {
        returnValue = F("Glehenweg");
        break;
    }
    case 117766:
    {
        returnValue = F("Glehner Heide");
        break;
    }
    case 117767:
    {
        returnValue = F("Glehner Str.");
        break;
    }
    case 117768:
    {
        returnValue = F("Glehner Weg");
        break;
    }
    case 117769:
    {
        returnValue = F("Gleibachweg");
        break;
    }
    case 117770:
    {
        returnValue = F("Gleiberger Weg");
        break;
    }
    case 117771:
    {
        returnValue = F("Gleibergring");
        break;
    }
    case 117772:
    {
        returnValue = F("Gleibergstr.");
        break;
    }
    case 117773:
    {
        returnValue = F("Gleichamberger Str.");
        break;
    }
    case 117774:
    {
        returnValue = F("Gleichbergstr.");
        break;
    }
    case 117775:
    {
        returnValue = F("Gleichbergweg");
        break;
    }
    case 117776:
    {
        returnValue = F("Gleichenblick");
        break;
    }
    case 117777:
    {
        returnValue = F("Gleichener Str.");
        break;
    }
    case 117778:
    {
        returnValue = F("Gleichenhof");
        break;
    }
    case 117779:
    {
        returnValue = F("Gleichenstr.");
        break;
    }
    case 117780:
    {
        returnValue = F("Gleichenweg");
        break;
    }
    case 117781:
    {
        returnValue = F("Gleicher Str.");
        break;
    }
    case 117782:
    {
        returnValue = F("Gleicher Weg");
        break;
    }
    case 117783:
    {
        returnValue = F("Gleicherwieser Str.");
        break;
    }
    case 117784:
    {
        returnValue = F("Gleicheröder Weg");
        break;
    }
    case 117785:
    {
        returnValue = F("Gleichmannstr.");
        break;
    }
    case 117786:
    {
        returnValue = F("Gleidinger Str.");
        break;
    }
    case 117787:
    {
        returnValue = F("Gleierbach");
        break;
    }
    case 117788:
    {
        returnValue = F("Gleierstr.");
        break;
    }
    case 117789:
    {
        returnValue = F("Gleima");
        break;
    }
    case 117790:
    {
        returnValue = F("Gleimershäuser Str.");
        break;
    }
    case 117791:
    {
        returnValue = F("Gleimstr.");
        break;
    }
    case 117792:
    {
        returnValue = F("Gleimweg");
        break;
    }
    case 117793:
    {
        returnValue = F("Gleina");
        break;
    }
    case 117794:
    {
        returnValue = F("Gleinaer Str.");
        break;
    }
    case 117795:
    {
        returnValue = F("Gleinaer Weg");
        break;
    }
    case 117796:
    {
        returnValue = F("Gleinagrund");
        break;
    }
    case 117797:
    {
        returnValue = F("Gleinermühlenweg");
        break;
    }
    case 117798:
    {
        returnValue = F("Gleinkendamm");
        break;
    }
    case 117799:
    {
        returnValue = F("Gleiritscher Str.");
        break;
    }
    case 117800:
    {
        returnValue = F("Gleis 3 und 8");
        break;
    }
    case 117801:
    {
        returnValue = F("Gleis 9 und 10");
        break;
    }
    case 117802:
    {
        returnValue = F("Gleisberger Str.");
        break;
    }
    case 117803:
    {
        returnValue = F("Gleisberger Weg");
        break;
    }
    case 117804:
    {
        returnValue = F("Gleisbergweg");
        break;
    }
    case 117805:
    {
        returnValue = F("Gleisdammstr.");
        break;
    }
    case 117806:
    {
        returnValue = F("Gleisdorfer Platz");
        break;
    }
    case 117807:
    {
        returnValue = F("Gleisdreieck");
        break;
    }
    case 117808:
    {
        returnValue = F("Gleisenauer Str.");
        break;
    }
    case 117809:
    {
        returnValue = F("Gleisenbach");
        break;
    }
    case 117810:
    {
        returnValue = F("Gleisendamm");
        break;
    }
    case 117811:
    {
        returnValue = F("Gleisengasse");
        break;
    }
    case 117812:
    {
        returnValue = F("Gleisenhof");
        break;
    }
    case 117813:
    {
        returnValue = F("Gleisenhofer Str.");
        break;
    }
    case 117814:
    {
        returnValue = F("Gleiserstr.");
        break;
    }
    case 117815:
    {
        returnValue = F("Gleishüttenweg");
        break;
    }
    case 117816:
    {
        returnValue = F("Gleisinger Str.");
        break;
    }
    case 117817:
    {
        returnValue = F("Gleislhofstr.");
        break;
    }
    case 117818:
    {
        returnValue = F("Gleislmühle");
        break;
    }
    case 117819:
    {
        returnValue = F("Gleismuthausen");
        break;
    }
    case 117820:
    {
        returnValue = F("Gleismuthhausen");
        break;
    }
    case 117821:
    {
        returnValue = F("Gleisnach");
        break;
    }
    case 117822:
    {
        returnValue = F("Gleisners Park");
        break;
    }
    case 117823:
    {
        returnValue = F("Gleisstr.");
        break;
    }
    case 117824:
    {
        returnValue = F("Gleisweg");
        break;
    }
    case 117825:
    {
        returnValue = F("Gleisweilerer Str.");
        break;
    }
    case 117826:
    {
        returnValue = F("Gleisweilerweg");
        break;
    }
    case 117827:
    {
        returnValue = F("Gleiter");
        break;
    }
    case 117828:
    {
        returnValue = F("Gleitsweg");
        break;
    }
    case 117829:
    {
        returnValue = F("Gleiwitzer Hof");
        break;
    }
    case 117830:
    {
        returnValue = F("Gleiwitzer Kehre");
        break;
    }
    case 117831:
    {
        returnValue = F("Gleiwitzer Str.");
        break;
    }
    case 117832:
    {
        returnValue = F("Gleiwitzer Weg");
        break;
    }
    case 117833:
    {
        returnValue = F("Gleiwitzerstr.");
        break;
    }
    case 117834:
    {
        returnValue = F("Gleiwitzstr.");
        break;
    }
    case 117835:
    {
        returnValue = F("Gleixnerstr.");
        break;
    }
    case 117836:
    {
        returnValue = F("Gleißachweg");
        break;
    }
    case 117837:
    {
        returnValue = F("Gleißenbach");
        break;
    }
    case 117838:
    {
        returnValue = F("Gleißenbachstr.");
        break;
    }
    case 117839:
    {
        returnValue = F("Gleißenburger Weg");
        break;
    }
    case 117840:
    {
        returnValue = F("Gleißende Marter");
        break;
    }
    case 117841:
    {
        returnValue = F("Gleißenhal");
        break;
    }
    case 117842:
    {
        returnValue = F("Gleißental");
        break;
    }
    case 117843:
    {
        returnValue = F("Gleißentalstr.");
        break;
    }
    case 117844:
    {
        returnValue = F("Gleißenthal");
        break;
    }
    case 117845:
    {
        returnValue = F("Gleißenthaler Str.");
        break;
    }
    case 117846:
    {
        returnValue = F("Gleißlestr.");
        break;
    }
    case 117847:
    {
        returnValue = F("Gleißmuthausen");
        break;
    }
    case 117848:
    {
        returnValue = F("Gleißnergasse");
        break;
    }
    case 117849:
    {
        returnValue = F("Glemsbachweg");
        break;
    }
    case 117850:
    {
        returnValue = F("Glemseckstr.");
        break;
    }
    case 117851:
    {
        returnValue = F("Glemser Gasse");
        break;
    }
    case 117852:
    {
        returnValue = F("Glemser Str.");
        break;
    }
    case 117853:
    {
        returnValue = F("Glemser Sträßchen");
        break;
    }
    case 117854:
    {
        returnValue = F("Glemser Weg");
        break;
    }
    case 117855:
    {
        returnValue = F("Glemser-Weg");
        break;
    }
    case 117856:
    {
        returnValue = F("Glemsgaustr.");
        break;
    }
    case 117857:
    {
        returnValue = F("Glemsstr.");
        break;
    }
    case 117858:
    {
        returnValue = F("Glemstalweg");
        break;
    }
    case 117859:
    {
        returnValue = F("Glemsweg");
        break;
    }
    case 117860:
    {
        returnValue = F("Glendelin");
        break;
    }
    case 117861:
    {
        returnValue = F("Glender Str.");
        break;
    }
    case 117862:
    {
        returnValue = F("Glender Weg");
        break;
    }
    case 117863:
    {
        returnValue = F("Glenetalstr.");
        break;
    }
    case 117864:
    {
        returnValue = F("Glenfield");
        break;
    }
    case 117865:
    {
        returnValue = F("Glenkstr.");
        break;
    }
    case 117866:
    {
        returnValue = F("Glenn-Miller-Str.");
        break;
    }
    case 117867:
    {
        returnValue = F("Glenn-Miller-Weg");
        break;
    }
    case 117868:
    {
        returnValue = F("Glennestr.");
        break;
    }
    case 117869:
    {
        returnValue = F("Glenneweg");
        break;
    }
    case 117870:
    {
        returnValue = F("Glenrothes Str.");
        break;
    }
    case 117871:
    {
        returnValue = F("Glentleiten");
        break;
    }
    case 117872:
    {
        returnValue = F("Glentorfer Str.");
        break;
    }
    case 117873:
    {
        returnValue = F("Glentorfer Weg");
        break;
    }
    case 117874:
    {
        returnValue = F("Glenzburg");
        break;
    }
    case 117875:
    {
        returnValue = F("Glenzenberg");
        break;
    }
    case 117876:
    {
        returnValue = F("Gleschendorfer Weg");
        break;
    }
    case 117877:
    {
        returnValue = F("Glescher Str.");
        break;
    }
    case 117878:
    {
        returnValue = F("Glescher Weg");
        break;
    }
    case 117879:
    {
        returnValue = F("Glesekerstr.");
        break;
    }
    case 117880:
    {
        returnValue = F("Glesengasse");
        break;
    }
    case 117881:
    {
        returnValue = F("Glesiener Str.");
        break;
    }
    case 117882:
    {
        returnValue = F("Glesse");
        break;
    }
    case 117883:
    {
        returnValue = F("Glessener Str.");
        break;
    }
    case 117884:
    {
        returnValue = F("Glessener Weg");
        break;
    }
    case 117885:
    {
        returnValue = F("Glesser Str.");
        break;
    }
    case 117886:
    {
        returnValue = F("Glessiker Str.");
        break;
    }
    case 117887:
    {
        returnValue = F("Gletscherbogen");
        break;
    }
    case 117888:
    {
        returnValue = F("Gletscherstr.");
        break;
    }
    case 117889:
    {
        returnValue = F("Gletscherweg");
        break;
    }
    case 117890:
    {
        returnValue = F("Glettkauer Weg");
        break;
    }
    case 117891:
    {
        returnValue = F("Gletzow Ausbau");
        break;
    }
    case 117892:
    {
        returnValue = F("Gletzower Dorfstr.");
        break;
    }
    case 117893:
    {
        returnValue = F("Gletzower Landstr.");
        break;
    }
    case 117894:
    {
        returnValue = F("Gletzower Str.");
        break;
    }
    case 117895:
    {
        returnValue = F("Gleueler Str.");
        break;
    }
    case 117896:
    {
        returnValue = F("Gleuenhof");
        break;
    }
    case 117897:
    {
        returnValue = F("Gleusdorfer Str.");
        break;
    }
    case 117898:
    {
        returnValue = F("Gleviner Burg");
        break;
    }
    case 117899:
    {
        returnValue = F("Gleviner Mauer");
        break;
    }
    case 117900:
    {
        returnValue = F("Gleviner Platz");
        break;
    }
    case 117901:
    {
        returnValue = F("Gleviner Str.");
        break;
    }
    case 117902:
    {
        returnValue = F("Glewe");
        break;
    }
    case 117903:
    {
        returnValue = F("Glewitz");
        break;
    }
    case 117904:
    {
        returnValue = F("Gliedenbachweg");
        break;
    }
    case 117905:
    {
        returnValue = F("Gliederbachstr.");
        break;
    }
    case 117906:
    {
        returnValue = F("Gliemenbachweg");
        break;
    }
    case 117907:
    {
        returnValue = F("Gliemenhaldeweg");
        break;
    }
    case 117908:
    {
        returnValue = F("Glien");
        break;
    }
    case 117909:
    {
        returnValue = F("Glienallee");
        break;
    }
    case 117910:
    {
        returnValue = F("Glienbergweg");
        break;
    }
    case 117911:
    {
        returnValue = F("Gliener Str.");
        break;
    }
    case 117912:
    {
        returnValue = F("Glienfeld");
        break;
    }
    case 117913:
    {
        returnValue = F("Glienholzweg");
        break;
    }
    case 117914:
    {
        returnValue = F("Glienhorststr.");
        break;
    }
    case 117915:
    {
        returnValue = F("Glienicker Brücke");
        break;
    }
    case 117916:
    {
        returnValue = F("Glienicker Chaussee");
        break;
    }
    case 117917:
    {
        returnValue = F("Glienicker Dorfstr.");
        break;
    }
    case 117918:
    {
        returnValue = F("Glienicker Str.");
        break;
    }
    case 117919:
    {
        returnValue = F("Glienicker Weg");
        break;
    }
    case 117920:
    {
        returnValue = F("Glieningweg");
        break;
    }
    case 117921:
    {
        returnValue = F("Glienker Dorfstr.");
        break;
    }
    case 117922:
    {
        returnValue = F("Gliersteig");
        break;
    }
    case 117923:
    {
        returnValue = F("Gliesdamm");
        break;
    }
    case 117924:
    {
        returnValue = F("Glieshamm");
        break;
    }
    case 117925:
    {
        returnValue = F("Glimbacher Str.");
        break;
    }
    case 117926:
    {
        returnValue = F("Glimbachstr.");
        break;
    }
    case 117927:
    {
        returnValue = F("Glimbornstr.");
        break;
    }
    case 117928:
    {
        returnValue = F("Glimmannsgasse");
        break;
    }
    case 117929:
    {
        returnValue = F("Glimmeshorn");
        break;
    }
    case 117930:
    {
        returnValue = F("Glimmesweg");
        break;
    }
    case 117931:
    {
        returnValue = F("Glimpenheimer Str.");
        break;
    }
    case 117932:
    {
        returnValue = F("Glind");
        break;
    }
    case 117933:
    {
        returnValue = F("Glindam");
        break;
    }
    case 117934:
    {
        returnValue = F("Glinde");
        break;
    }
    case 117935:
    {
        returnValue = F("Glindegrund");
        break;
    }
    case 117936:
    {
        returnValue = F("Glindenberg");
        break;
    }
    case 117937:
    {
        returnValue = F("Glindenberger Chaussee");
        break;
    }
    case 117938:
    {
        returnValue = F("Glindenberger Str.");
        break;
    }
    case 117939:
    {
        returnValue = F("Glindenberger Weg");
        break;
    }
    case 117940:
    {
        returnValue = F("Glindenkamp");
        break;
    }
    case 117941:
    {
        returnValue = F("Glindeplatz");
        break;
    }
    case 117942:
    {
        returnValue = F("Glinder Brücke");
        break;
    }
    case 117943:
    {
        returnValue = F("Glinder Redder");
        break;
    }
    case 117944:
    {
        returnValue = F("Glinder Str.");
        break;
    }
    case 117945:
    {
        returnValue = F("Glinder Weg");
        break;
    }
    case 117946:
    {
        returnValue = F("Glinderhagen");
        break;
    }
    case 117947:
    {
        returnValue = F("Glinderweg");
        break;
    }
    case 117948:
    {
        returnValue = F("Glindesmoor");
        break;
    }
    case 117949:
    {
        returnValue = F("Glindfeld");
        break;
    }
    case 117950:
    {
        returnValue = F("Glindfelder Weg");
        break;
    }
    case 117951:
    {
        returnValue = F("Glindhof");
        break;
    }
    case 117952:
    {
        returnValue = F("Glindholzstr.");
        break;
    }
    case 117953:
    {
        returnValue = F("Glindhorn");
        break;
    }
    case 117954:
    {
        returnValue = F("Glindkamp");
        break;
    }
    case 117955:
    {
        returnValue = F("Glindmoorstr.");
        break;
    }
    case 117956:
    {
        returnValue = F("Glindower Chausseestr.");
        break;
    }
    case 117957:
    {
        returnValue = F("Glindower Dorfstr.");
        break;
    }
    case 117958:
    {
        returnValue = F("Glindower Gartenstr.");
        break;
    }
    case 117959:
    {
        returnValue = F("Glindower Mühlenstr.");
        break;
    }
    case 117960:
    {
        returnValue = F("Glindower Rosenstr.");
        break;
    }
    case 117961:
    {
        returnValue = F("Glindower Seestr.");
        break;
    }
    case 117962:
    {
        returnValue = F("Glindower Str.");
        break;
    }
    case 117963:
    {
        returnValue = F("Glindower Weg");
        break;
    }
    case 117964:
    {
        returnValue = F("Glindskoppelweg");
        break;
    }
    case 117965:
    {
        returnValue = F("Glindweg");
        break;
    }
    case 117966:
    {
        returnValue = F("Glinekestr.");
        break;
    }
    case 117967:
    {
        returnValue = F("Gliner Str.");
        break;
    }
    case 117968:
    {
        returnValue = F("Glinge");
        break;
    }
    case 117969:
    {
        returnValue = F("Glingestr.");
        break;
    }
    case 117970:
    {
        returnValue = F("Glinkamp");
        break;
    }
    case 117971:
    {
        returnValue = F("Glinz");
        break;
    }
    case 117972:
    {
        returnValue = F("Glinzeweg");
        break;
    }
    case 117973:
    {
        returnValue = F("Glismuotstr.");
        break;
    }
    case 117974:
    {
        returnValue = F("Glissenberg");
        break;
    }
    case 117975:
    {
        returnValue = F("Glissenweg");
        break;
    }
    case 117976:
    {
        returnValue = F("Glisser Bruch");
        break;
    }
    case 117977:
    {
        returnValue = F("Glisser Dorfstr.");
        break;
    }
    case 117978:
    {
        returnValue = F("Glisser Heide");
        break;
    }
    case 117979:
    {
        returnValue = F("Glisser Landstr.");
        break;
    }
    case 117980:
    {
        returnValue = F("Glisser Mitte");
        break;
    }
    case 117981:
    {
        returnValue = F("Glisser Riede");
        break;
    }
    case 117982:
    {
        returnValue = F("Glisser Weg");
        break;
    }
    case 117983:
    {
        returnValue = F("Glitschergasse");
        break;
    }
    case 117984:
    {
        returnValue = F("Glitten");
        break;
    }
    case 117985:
    {
        returnValue = F("Glittenbergstr.");
        break;
    }
    case 117986:
    {
        returnValue = F("Glitzerburg");
        break;
    }
    case 117987:
    {
        returnValue = F("Gliwicer Str.");
        break;
    }
    case 117988:
    {
        returnValue = F("Glizmudisstr.");
        break;
    }
    case 117989:
    {
        returnValue = F("Glißmannstr.");
        break;
    }
    case 117990:
    {
        returnValue = F("Globiger Gartenstr.");
        break;
    }
    case 117991:
    {
        returnValue = F("Globiger Str.");
        break;
    }
    case 117992:
    {
        returnValue = F("Globusallee");
        break;
    }
    case 117993:
    {
        returnValue = F("Globusring");
        break;
    }
    case 117994:
    {
        returnValue = F("Glochener Weg");
        break;
    }
    case 117995:
    {
        returnValue = F("Glochstr.");
        break;
    }
    case 117996:
    {
        returnValue = F("Glockanger");
        break;
    }
    case 117997:
    {
        returnValue = F("Glockbergstr.");
        break;
    }
    case 117998:
    {
        returnValue = F("Glockborn");
        break;
    }
    case 117999:
    {
        returnValue = F("Glockekreisel");
        break;
    }
    case 118000:
    {
        returnValue = F("Glockenanger");
        break;
    }
    case 118001:
    {
        returnValue = F("Glockenapfel-Ring");
        break;
    }
    case 118002:
    {
        returnValue = F("Glockenapfelweg");
        break;
    }
    case 118003:
    {
        returnValue = F("Glockenbecherring");
        break;
    }
    case 118004:
    {
        returnValue = F("Glockenbecherstr.");
        break;
    }
    case 118005:
    {
        returnValue = F("Glockenbecherweg");
        break;
    }
    case 118006:
    {
        returnValue = F("Glockenberg");
        break;
    }
    case 118007:
    {
        returnValue = F("Glockenbergstr.");
        break;
    }
    case 118008:
    {
        returnValue = F("Glockenbergweg");
        break;
    }
    case 118009:
    {
        returnValue = F("Glockenblumenstr.");
        break;
    }
    case 118010:
    {
        returnValue = F("Glockenblumenweg");
        break;
    }
    case 118011:
    {
        returnValue = F("Glockenborn");
        break;
    }
    case 118012:
    {
        returnValue = F("Glockenborner Weg");
        break;
    }
    case 118013:
    {
        returnValue = F("Glockenbornstr.");
        break;
    }
    case 118014:
    {
        returnValue = F("Glockenbreede");
        break;
    }
    case 118015:
    {
        returnValue = F("Glockenbreite");
        break;
    }
    case 118016:
    {
        returnValue = F("Glockenbrink");
        break;
    }
    case 118017:
    {
        returnValue = F("Glockenbrinkstr.");
        break;
    }
    case 118018:
    {
        returnValue = F("Glockenbruchweg");
        break;
    }
    case 118019:
    {
        returnValue = F("Glockenbrunnenstr.");
        break;
    }
    case 118020:
    {
        returnValue = F("Glockenbrunnenweg");
        break;
    }
    case 118021:
    {
        returnValue = F("Glockenbuckelstr.");
        break;
    }
    case 118022:
    {
        returnValue = F("Glockenbächleweg");
        break;
    }
    case 118023:
    {
        returnValue = F("Glockenbühlweg");
        break;
    }
    case 118024:
    {
        returnValue = F("Glockeneichenstr.");
        break;
    }
    case 118025:
    {
        returnValue = F("Glockeneichweg");
        break;
    }
    case 118026:
    {
        returnValue = F("Glockenfeld");
        break;
    }
    case 118027:
    {
        returnValue = F("Glockengarten");
        break;
    }
    case 118028:
    {
        returnValue = F("Glockengartenweg");
        break;
    }
    case 118029:
    {
        returnValue = F("Glockengasse");
        break;
    }
    case 118030:
    {
        returnValue = F("Glockengiesserhof");
        break;
    }
    case 118031:
    {
        returnValue = F("Glockengießereistr.");
        break;
    }
    case 118032:
    {
        returnValue = F("Glockengießergasse");
        break;
    }
    case 118033:
    {
        returnValue = F("Glockengießerhof");
        break;
    }
    case 118034:
    {
        returnValue = F("Glockengießers Kamp");
        break;
    }
    case 118035:
    {
        returnValue = F("Glockengießerstr.");
        break;
    }
    case 118036:
    {
        returnValue = F("Glockengießerwall");
        break;
    }
    case 118037:
    {
        returnValue = F("Glockengießerweg");
        break;
    }
    case 118038:
    {
        returnValue = F("Glockengraben");
        break;
    }
    case 118039:
    {
        returnValue = F("Glockengrube");
        break;
    }
    case 118040:
    {
        returnValue = F("Glockengrund");
        break;
    }
    case 118041:
    {
        returnValue = F("Glockengässchen");
        break;
    }
    case 118042:
    {
        returnValue = F("Glockenhag");
        break;
    }
    case 118043:
    {
        returnValue = F("Glockenheide");
        break;
    }
    case 118044:
    {
        returnValue = F("Glockenheidering");
        break;
    }
    case 118045:
    {
        returnValue = F("Glockenheideweg");
        break;
    }
    case 118046:
    {
        returnValue = F("Glockenhof");
        break;
    }
    case 118047:
    {
        returnValue = F("Glockenhof Urexweiler");
        break;
    }
    case 118048:
    {
        returnValue = F("Glockenhofsweg");
        break;
    }
    case 118049:
    {
        returnValue = F("Glockenhofweg");
        break;
    }
    case 118050:
    {
        returnValue = F("Glockenhäuschen");
        break;
    }
    case 118051:
    {
        returnValue = F("Glockenhütte");
        break;
    }
    case 118052:
    {
        returnValue = F("Glockenkamp");
        break;
    }
    case 118053:
    {
        returnValue = F("Glockenklanger Str.");
        break;
    }
    case 118054:
    {
        returnValue = F("Glockenkling");
        break;
    }
    case 118055:
    {
        returnValue = F("Glockenkreuz");
        break;
    }
    case 118056:
    {
        returnValue = F("Glockenkuhle");
        break;
    }
    case 118057:
    {
        returnValue = F("Glockenlandstr.");
        break;
    }
    case 118058:
    {
        returnValue = F("Glockenliede");
        break;
    }
    case 118059:
    {
        returnValue = F("Glockenloch");
        break;
    }
    case 118060:
    {
        returnValue = F("Glockenlohne");
        break;
    }
    case 118061:
    {
        returnValue = F("Glockenmeyergang");
        break;
    }
    case 118062:
    {
        returnValue = F("Glockenmuseumstr.");
        break;
    }
    case 118063:
    {
        returnValue = F("Glockennmoos");
        break;
    }
    case 118064:
    {
        returnValue = F("Glockenpassage");
        break;
    }
    case 118065:
    {
        returnValue = F("Glockenpfad");
        break;
    }
    case 118066:
    {
        returnValue = F("Glockenpfuhl");
        break;
    }
    case 118067:
    {
        returnValue = F("Glockenplatz");
        break;
    }
    case 118068:
    {
        returnValue = F("Glockenpohl");
        break;
    }
    case 118069:
    {
        returnValue = F("Glockenquergasse");
        break;
    }
    case 118070:
    {
        returnValue = F("Glockenrain");
        break;
    }
    case 118071:
    {
        returnValue = F("Glockenrainweg");
        break;
    }
    case 118072:
    {
        returnValue = F("Glockenreute");
        break;
    }
    case 118073:
    {
        returnValue = F("Glockenring");
        break;
    }
    case 118074:
    {
        returnValue = F("Glockenschäferweg");
        break;
    }
    case 118075:
    {
        returnValue = F("Glockenspitz");
        break;
    }
    case 118076:
    {
        returnValue = F("Glockensprung");
        break;
    }
    case 118077:
    {
        returnValue = F("Glockensprung (neu)");
        break;
    }
    case 118078:
    {
        returnValue = F("Glockenstahlstr.");
        break;
    }
    case 118079:
    {
        returnValue = F("Glockensteg");
        break;
    }
    case 118080:
    {
        returnValue = F("Glockenstiege");
        break;
    }
    case 118081:
    {
        returnValue = F("Glockenstr.");
        break;
    }
    case 118082:
    {
        returnValue = F("Glockenstuhlweg");
        break;
    }
    case 118083:
    {
        returnValue = F("Glockenteichstr.");
        break;
    }
    case 118084:
    {
        returnValue = F("Glockentor");
        break;
    }
    case 118085:
    {
        returnValue = F("Glockenturmgestell");
        break;
    }
    case 118086:
    {
        returnValue = F("Glockenturmstr.");
        break;
    }
    case 118087:
    {
        returnValue = F("Glockenturmweg");
        break;
    }
    case 118088:
    {
        returnValue = F("Glockenwaldweg");
        break;
    }
    case 118089:
    {
        returnValue = F("Glockenwall");
        break;
    }
    case 118090:
    {
        returnValue = F("Glockenweg");
        break;
    }
    case 118091:
    {
        returnValue = F("Glockenwiese");
        break;
    }
    case 118092:
    {
        returnValue = F("Glockenwiesenstr.");
        break;
    }
    case 118093:
    {
        returnValue = F("Glockenwiesenweg");
        break;
    }
    case 118094:
    {
        returnValue = F("Glockenwinkel");
        break;
    }
    case 118095:
    {
        returnValue = F("Glockenzehnten");
        break;
    }
    case 118096:
    {
        returnValue = F("Glockenäckerstr.");
        break;
    }
    case 118097:
    {
        returnValue = F("Glockeraustr.");
        break;
    }
    case 118098:
    {
        returnValue = F("Glockergasse");
        break;
    }
    case 118099:
    {
        returnValue = F("Glockerweg");
        break;
    }
    case 118100:
    {
        returnValue = F("Glockfeldstr.");
        break;
    }
    case 118101:
    {
        returnValue = F("Glockführeweg");
        break;
    }
    case 118102:
    {
        returnValue = F("Glockgäßle");
        break;
    }
    case 118103:
    {
        returnValue = F("Glockhammer");
        break;
    }
    case 118104:
    {
        returnValue = F("Glocknerhofstr.");
        break;
    }
    case 118105:
    {
        returnValue = F("Glocknerweg");
        break;
    }
    case 118106:
    {
        returnValue = F("Glockruthenallee");
        break;
    }
    case 118107:
    {
        returnValue = F("Glockscheider Weg");
        break;
    }
    case 118108:
    {
        returnValue = F("Glockwiesen");
        break;
    }
    case 118109:
    {
        returnValue = F("Glockwiesenstr.");
        break;
    }
    case 118110:
    {
        returnValue = F("Glockwiesenweg");
        break;
    }
    case 118111:
    {
        returnValue = F("Glockäcker");
        break;
    }
    case 118112:
    {
        returnValue = F("Gloecklesweg");
        break;
    }
    case 118113:
    {
        returnValue = F("Gloedenstr.");
        break;
    }
    case 118114:
    {
        returnValue = F("Gloelstr.");
        break;
    }
    case 118115:
    {
        returnValue = F("Glogauer Steg");
        break;
    }
    case 118116:
    {
        returnValue = F("Glogauer Str.");
        break;
    }
    case 118117:
    {
        returnValue = F("Glogauer Weg");
        break;
    }
    case 118118:
    {
        returnValue = F("Glogaustr.");
        break;
    }
    case 118119:
    {
        returnValue = F("Gloggerberg");
        break;
    }
    case 118120:
    {
        returnValue = F("Glogower Ring");
        break;
    }
    case 118121:
    {
        returnValue = F("Gloineweg");
        break;
    }
    case 118122:
    {
        returnValue = F("Glojenbarg");
        break;
    }
    case 118123:
    {
        returnValue = F("Glojenbarg Grünanlage");
        break;
    }
    case 118124:
    {
        returnValue = F("Gloneck");
        break;
    }
    case 118125:
    {
        returnValue = F("Glonnanger");
        break;
    }
    case 118126:
    {
        returnValue = F("Glonnblick");
        break;
    }
    case 118127:
    {
        returnValue = F("Glonner Str.");
        break;
    }
    case 118128:
    {
        returnValue = F("Glonner Weg");
        break;
    }
    case 118129:
    {
        returnValue = F("Glonnerstr.");
        break;
    }
    case 118130:
    {
        returnValue = F("Glonngasse");
        break;
    }
    case 118131:
    {
        returnValue = F("Glonnstr.");
        break;
    }
    case 118132:
    {
        returnValue = F("Glonntalstr.");
        break;
    }
    case 118133:
    {
        returnValue = F("Glonntalweg");
        break;
    }
    case 118134:
    {
        returnValue = F("Glonnweg");
        break;
    }
    case 118135:
    {
        returnValue = F("Gloriastr.");
        break;
    }
    case 118136:
    {
        returnValue = F("Glorstr.");
        break;
    }
    case 118137:
    {
        returnValue = F("Glosberg");
        break;
    }
    case 118138:
    {
        returnValue = F("Glosberger Str.");
        break;
    }
    case 118139:
    {
        returnValue = F("Glosemeyersgasse");
        break;
    }
    case 118140:
    {
        returnValue = F("Glossener Str.");
        break;
    }
    case 118141:
    {
        returnValue = F("Glossop-Ring");
        break;
    }
    case 118142:
    {
        returnValue = F("Glosterkamp");
        break;
    }
    case 118143:
    {
        returnValue = F("Glosterstr.");
        break;
    }
    case 118144:
    {
        returnValue = F("Glosterweg");
        break;
    }
    case 118145:
    {
        returnValue = F("Glosweg");
        break;
    }
    case 118146:
    {
        returnValue = F("Glotterpfad");
        break;
    }
    case 118147:
    {
        returnValue = F("Glotterrainwaldweg");
        break;
    }
    case 118148:
    {
        returnValue = F("Glotterstr.");
        break;
    }
    case 118149:
    {
        returnValue = F("Glottertalstr.");
        break;
    }
    case 118150:
    {
        returnValue = F("Glotterweg");
        break;
    }
    case 118151:
    {
        returnValue = F("Glotzing");
        break;
    }
    case 118152:
    {
        returnValue = F("Gloucester-Str.");
        break;
    }
    case 118153:
    {
        returnValue = F("Glowe");
        break;
    }
    case 118154:
    {
        returnValue = F("Glower Str.");
        break;
    }
    case 118155:
    {
        returnValue = F("Gloxinienstr.");
        break;
    }
    case 118156:
    {
        returnValue = F("Gloxinstr.");
        break;
    }
    case 118157:
    {
        returnValue = F("Gloysteinstr.");
        break;
    }
    case 118158:
    {
        returnValue = F("Gloysteinsweg");
        break;
    }
    case 118159:
    {
        returnValue = F("Gloysteinweg");
        break;
    }
    case 118160:
    {
        returnValue = F("Gloßbergstr.");
        break;
    }
    case 118161:
    {
        returnValue = F("Gluckallee");
        break;
    }
    case 118162:
    {
        returnValue = F("Gluckensteinweg");
        break;
    }
    case 118163:
    {
        returnValue = F("Gluckplatz");
        break;
    }
    case 118164:
    {
        returnValue = F("Glucksberg");
        break;
    }
    case 118165:
    {
        returnValue = F("Gluckstr.");
        break;
    }
    case 118166:
    {
        returnValue = F("Gluckstrasse");
        break;
    }
    case 118167:
    {
        returnValue = F("Gluckweg");
        break;
    }
    case 118168:
    {
        returnValue = F("Glue Winkel");
        break;
    }
    case 118169:
    {
        returnValue = F("Glue-Bues-Weg");
        break;
    }
    case 118170:
    {
        returnValue = F("Glumestr.");
        break;
    }
    case 118171:
    {
        returnValue = F("Glumker Weg");
        break;
    }
    case 118172:
    {
        returnValue = F("Glumstr.");
        break;
    }
    case 118173:
    {
        returnValue = F("Glumweg");
        break;
    }
    case 118174:
    {
        returnValue = F("Glupe");
        break;
    }
    case 118175:
    {
        returnValue = F("Glupen");
        break;
    }
    case 118176:
    {
        returnValue = F("Glupenstr.");
        break;
    }
    case 118177:
    {
        returnValue = F("Glurenstieg");
        break;
    }
    case 118178:
    {
        returnValue = F("Glutzow Hof");
        break;
    }
    case 118179:
    {
        returnValue = F("Glutzow Siedlung");
        break;
    }
    case 118180:
    {
        returnValue = F("Glyngöre");
        break;
    }
    case 118181:
    {
        returnValue = F("Glächterbachstr.");
        break;
    }
    case 118182:
    {
        returnValue = F("Glähnsäd-Schneise");
        break;
    }
    case 118183:
    {
        returnValue = F("Gländerweg");
        break;
    }
    case 118184:
    {
        returnValue = F("Gländstr.");
        break;
    }
    case 118185:
    {
        returnValue = F("Glänsädschneise");
        break;
    }
    case 118186:
    {
        returnValue = F("Glänzenberg");
        break;
    }
    case 118187:
    {
        returnValue = F("Glänzerweg");
        break;
    }
    case 118188:
    {
        returnValue = F("Glärbach");
        break;
    }
    case 118189:
    {
        returnValue = F("Glärnischstr.");
        break;
    }
    case 118190:
    {
        returnValue = F("Gläseckental");
        break;
    }
    case 118191:
    {
        returnValue = F("Gläsener Str.");
        break;
    }
    case 118192:
    {
        returnValue = F("Gläsener Weg");
        break;
    }
    case 118193:
    {
        returnValue = F("Gläserbergweg");
        break;
    }
    case 118194:
    {
        returnValue = F("Gläserkoppel");
        break;
    }
    case 118195:
    {
        returnValue = F("Gläserland");
        break;
    }
    case 118196:
    {
        returnValue = F("Gläserner Steig");
        break;
    }
    case 118197:
    {
        returnValue = F("Gläserpforte");
        break;
    }
    case 118198:
    {
        returnValue = F("Gläsersdorfer Str.");
        break;
    }
    case 118199:
    {
        returnValue = F("Gläserstr.");
        break;
    }
    case 118200:
    {
        returnValue = F("Gläserswende");
        break;
    }
    case 118201:
    {
        returnValue = F("Gläserwandstr.");
        break;
    }
    case 118202:
    {
        returnValue = F("Gläserweg");
        break;
    }
    case 118203:
    {
        returnValue = F("Gläserzeller Str.");
        break;
    }
    case 118204:
    {
        returnValue = F("Gläsnerweg");
        break;
    }
    case 118205:
    {
        returnValue = F("Glässers Feldweg");
        break;
    }
    case 118206:
    {
        returnValue = F("Gläsweg");
        break;
    }
    case 118207:
    {
        returnValue = F("Glätteweg");
        break;
    }
    case 118208:
    {
        returnValue = F("Glätzlstr.");
        break;
    }
    case 118209:
    {
        returnValue = F("Gläßnerstr.");
        break;
    }
    case 118210:
    {
        returnValue = F("Glöckchenwinkel");
        break;
    }
    case 118211:
    {
        returnValue = F("Glöckelsberg");
        break;
    }
    case 118212:
    {
        returnValue = F("Glöckelweg");
        break;
    }
    case 118213:
    {
        returnValue = F("Glöckenbergweg");
        break;
    }
    case 118214:
    {
        returnValue = F("Glöckerlweg");
        break;
    }
    case 118215:
    {
        returnValue = F("Glöcklaweg");
        break;
    }
    case 118216:
    {
        returnValue = F("Glöcklehofplatz");
        break;
    }
    case 118217:
    {
        returnValue = F("Glöcklehofweg");
        break;
    }
    case 118218:
    {
        returnValue = F("Glöcklergasse");
        break;
    }
    case 118219:
    {
        returnValue = F("Glöcklerstr.");
        break;
    }
    case 118220:
    {
        returnValue = F("Glöcklswieser Str.");
        break;
    }
    case 118221:
    {
        returnValue = F("Glöcknergasse");
        break;
    }
    case 118222:
    {
        returnValue = F("Glöcknerpfad");
        break;
    }
    case 118223:
    {
        returnValue = F("Glöcknersgarten");
        break;
    }
    case 118224:
    {
        returnValue = F("Glöcknerstr.");
        break;
    }
    case 118225:
    {
        returnValue = F("Glöckstr.");
        break;
    }
    case 118226:
    {
        returnValue = F("Glödekoppel");
        break;
    }
    case 118227:
    {
        returnValue = F("Glödenhofer Weg");
        break;
    }
    case 118228:
    {
        returnValue = F("Glörpark");
        break;
    }
    case 118229:
    {
        returnValue = F("Glörstr.");
        break;
    }
    case 118230:
    {
        returnValue = F("Glörtalsperre");
        break;
    }
    case 118231:
    {
        returnValue = F("Glösaer Weg");
        break;
    }
    case 118232:
    {
        returnValue = F("Glösinger Feld");
        break;
    }
    case 118233:
    {
        returnValue = F("Glösinger Str.");
        break;
    }
    case 118234:
    {
        returnValue = F("Glösinghauser Str.");
        break;
    }
    case 118235:
    {
        returnValue = F("Glösinghauser Weg");
        break;
    }
    case 118236:
    {
        returnValue = F("Glöther Str.");
        break;
    }
    case 118237:
    {
        returnValue = F("Glöther Weg");
        break;
    }
    case 118238:
    {
        returnValue = F("Glöthescher Weg");
        break;
    }
    case 118239:
    {
        returnValue = F("Glöttstr.");
        break;
    }
    case 118240:
    {
        returnValue = F("Glövziner Str.");
        break;
    }
    case 118241:
    {
        returnValue = F("Glöwener Str.");
        break;
    }
    case 118242:
    {
        returnValue = F("Glöwener Weg");
        break;
    }
    case 118243:
    {
        returnValue = F("Glöwitz");
        break;
    }
    case 118244:
    {
        returnValue = F("Glück Auf");
        break;
    }
    case 118245:
    {
        returnValue = F("Glück auf");
        break;
    }
    case 118246:
    {
        returnValue = F("Glück im Winkel");
        break;
    }
    case 118247:
    {
        returnValue = F("Glück-Auf Str.");
        break;
    }
    case 118248:
    {
        returnValue = F("Glück-Auf-Allee");
        break;
    }
    case 118249:
    {
        returnValue = F("Glück-Auf-Brücke");
        break;
    }
    case 118250:
    {
        returnValue = F("Glück-Auf-Gasse");
        break;
    }
    case 118251:
    {
        returnValue = F("Glück-Auf-Park");
        break;
    }
    case 118252:
    {
        returnValue = F("Glück-Auf-Park Josef Thelen");
        break;
    }
    case 118253:
    {
        returnValue = F("Glück-Auf-Platz");
        break;
    }
    case 118254:
    {
        returnValue = F("Glück-Auf-Ring");
        break;
    }
    case 118255:
    {
        returnValue = F("Glück-Auf-Siedlung");
        break;
    }
    case 118256:
    {
        returnValue = F("Glück-Auf-Str.");
        break;
    }
    case 118257:
    {
        returnValue = F("Glück-Auf-Weg");
        break;
    }
    case 118258:
    {
        returnValue = F("Glück-auf-Platz");
        break;
    }
    case 118259:
    {
        returnValue = F("Glück-auf-Schulhof");
        break;
    }
    case 118260:
    {
        returnValue = F("Glück-auf-Siedlung");
        break;
    }
    case 118261:
    {
        returnValue = F("Glück-auf-Str.");
        break;
    }
    case 118262:
    {
        returnValue = F("Glückauf");
        break;
    }
    case 118263:
    {
        returnValue = F("Glückauf I");
        break;
    }
    case 118264:
    {
        returnValue = F("Glückauf II");
        break;
    }
    case 118265:
    {
        returnValue = F("Glückauf III");
        break;
    }
    case 118266:
    {
        returnValue = F("Glückauf IV");
        break;
    }
    case 118267:
    {
        returnValue = F("Glückauf Park Hassel");
        break;
    }
    case 118268:
    {
        returnValue = F("Glückauf Str.");
        break;
    }
    case 118269:
    {
        returnValue = F("Glückauf V");
        break;
    }
    case 118270:
    {
        returnValue = F("Glückauf VI");
        break;
    }
    case 118271:
    {
        returnValue = F("Glückauf Weg");
        break;
    }
    case 118272:
    {
        returnValue = F("Glückauf-Ring");
        break;
    }
    case 118273:
    {
        returnValue = F("Glückauf-Str.");
        break;
    }
    case 118274:
    {
        returnValue = F("Glückauf-Weg");
        break;
    }
    case 118275:
    {
        returnValue = F("Glückaufgasse");
        break;
    }
    case 118276:
    {
        returnValue = F("Glückaufplatz");
        break;
    }
    case 118277:
    {
        returnValue = F("Glückaufschacht-Str.");
        break;
    }
    case 118278:
    {
        returnValue = F("Glückaufstr.");
        break;
    }
    case 118279:
    {
        returnValue = F("Glückaufsweg");
        break;
    }
    case 118280:
    {
        returnValue = F("Glückaufweg");
        break;
    }
    case 118281:
    {
        returnValue = F("Glückergasse");
        break;
    }
    case 118282:
    {
        returnValue = F("Glücksallee");
        break;
    }
    case 118283:
    {
        returnValue = F("Glücksbaumallee");
        break;
    }
    case 118284:
    {
        returnValue = F("Glücksbrunn");
        break;
    }
    case 118285:
    {
        returnValue = F("Glücksbrunner Str.");
        break;
    }
    case 118286:
    {
        returnValue = F("Glücksburger Chaussee");
        break;
    }
    case 118287:
    {
        returnValue = F("Glücksburger Str.");
        break;
    }
    case 118288:
    {
        returnValue = F("Glücksburger Weg");
        break;
    }
    case 118289:
    {
        returnValue = F("Glücksgasse");
        break;
    }
    case 118290:
    {
        returnValue = F("Glücksgängle");
        break;
    }
    case 118291:
    {
        returnValue = F("Glücksmühlenweg");
        break;
    }
    case 118292:
    {
        returnValue = F("Glücksteinallee");
        break;
    }
    case 118293:
    {
        returnValue = F("Glücksthalstr.");
        break;
    }
    case 118294:
    {
        returnValue = F("Glückstr.");
        break;
    }
    case 118295:
    {
        returnValue = F("Glückstädter Str.");
        break;
    }
    case 118296:
    {
        returnValue = F("Glücksweg");
        break;
    }
    case 118297:
    {
        returnValue = F("Glückswiese");
        break;
    }
    case 118298:
    {
        returnValue = F("Glückswinkel");
        break;
    }
    case 118299:
    {
        returnValue = F("Glüder");
        break;
    }
    case 118300:
    {
        returnValue = F("Glüderstr.");
        break;
    }
    case 118301:
    {
        returnValue = F("Glühwürmchenweg");
        break;
    }
    case 118302:
    {
        returnValue = F("Glükhergasse");
        break;
    }
    case 118303:
    {
        returnValue = F("Glümerstr.");
        break;
    }
    case 118304:
    {
        returnValue = F("Glümmel");
        break;
    }
    case 118305:
    {
        returnValue = F("Glünnerweg");
        break;
    }
    case 118306:
    {
        returnValue = F("Glüsiger Weg");
        break;
    }
    case 118307:
    {
        returnValue = F("Glüsing");
        break;
    }
    case 118308:
    {
        returnValue = F("Glüsingen");
        break;
    }
    case 118309:
    {
        returnValue = F("Glüsinger Grund");
        break;
    }
    case 118310:
    {
        returnValue = F("Glüsinger Helmer");
        break;
    }
    case 118311:
    {
        returnValue = F("Glüsinger Ring");
        break;
    }
    case 118312:
    {
        returnValue = F("Glüsinger Str.");
        break;
    }
    case 118313:
    {
        returnValue = F("Glüsinger Weg");
        break;
    }
    case 118314:
    {
        returnValue = F("Glüsingerbergen");
        break;
    }
    case 118315:
    {
        returnValue = F("Glüsingweg");
        break;
    }
    case 118316:
    {
        returnValue = F("Gmain");
        break;
    }
    case 118317:
    {
        returnValue = F("Gmaind");
        break;
    }
    case 118318:
    {
        returnValue = F("Gmainer Str.");
        break;
    }
    case 118319:
    {
        returnValue = F("Gmainweg");
        break;
    }
    case 118320:
    {
        returnValue = F("Gmeimertweg");
        break;
    }
    case 118321:
    {
        returnValue = F("Gmeinaustr.");
        break;
    }
    case 118322:
    {
        returnValue = F("Gmeinbühl");
        break;
    }
    case 118323:
    {
        returnValue = F("Gmeingässel");
        break;
    }
    case 118324:
    {
        returnValue = F("Gmeiniweg");
        break;
    }
    case 118325:
    {
        returnValue = F("Gmeinschwenden");
        break;
    }
    case 118326:
    {
        returnValue = F("Gmeinsrieth");
        break;
    }
    case 118327:
    {
        returnValue = F("Gmeinwieser Str.");
        break;
    }
    case 118328:
    {
        returnValue = F("Gmeiwiesweg");
        break;
    }
    case 118329:
    {
        returnValue = F("Gmelchstr.");
        break;
    }
    case 118330:
    {
        returnValue = F("Gmelinstr.");
        break;
    }
    case 118331:
    {
        returnValue = F("Gmelinweg");
        break;
    }
    case 118332:
    {
        returnValue = F("Gmerk");
        break;
    }
    case 118333:
    {
        returnValue = F("Gminder Weg");
        break;
    }
    case 118334:
    {
        returnValue = F("Gminderstr.");
        break;
    }
    case 118335:
    {
        returnValue = F("Gmoastr.");
        break;
    }
    case 118336:
    {
        returnValue = F("Gmoaweg");
        break;
    }
    case 118337:
    {
        returnValue = F("Gmoosweg");
        break;
    }
    case 118338:
    {
        returnValue = F("Gmundberg");
        break;
    }
    case 118339:
    {
        returnValue = F("Gmunder Weg");
        break;
    }
    case 118340:
    {
        returnValue = F("Gmünd");
        break;
    }
    case 118341:
    {
        returnValue = F("Gmünder Str.");
        break;
    }
    case 118342:
    {
        returnValue = F("Gmünder Torplatz");
        break;
    }
    case 118343:
    {
        returnValue = F("Gmünder Weg");
        break;
    }
    case 118344:
    {
        returnValue = F("Gmündweg");
        break;
    }
    case 118345:
    {
        returnValue = F("Gnadauer Str.");
        break;
    }
    case 118346:
    {
        returnValue = F("Gnadenauweg");
        break;
    }
    case 118347:
    {
        returnValue = F("Gnadenberg");
        break;
    }
    case 118348:
    {
        returnValue = F("Gnadenberger Str.");
        break;
    }
    case 118349:
    {
        returnValue = F("Gnadenberger Weg");
        break;
    }
    case 118350:
    {
        returnValue = F("Gnadenfreier Str.");
        break;
    }
    case 118351:
    {
        returnValue = F("Gnadengasse");
        break;
    }
    case 118352:
    {
        returnValue = F("Gnadenhof");
        break;
    }
    case 118353:
    {
        returnValue = F("Gnadenleite");
        break;
    }
    case 118354:
    {
        returnValue = F("Gnadenseeblick");
        break;
    }
    case 118355:
    {
        returnValue = F("Gnadenseestr.");
        break;
    }
    case 118356:
    {
        returnValue = F("Gnadenseeweg");
        break;
    }
    case 118357:
    {
        returnValue = F("Gnadental");
        break;
    }
    case 118358:
    {
        returnValue = F("Gnadentaler Allee");
        break;
    }
    case 118359:
    {
        returnValue = F("Gnadentaler Weg");
        break;
    }
    case 118360:
    {
        returnValue = F("Gnadentalstr.");
        break;
    }
    case 118361:
    {
        returnValue = F("Gnadentalweg");
        break;
    }
    case 118362:
    {
        returnValue = F("Gnadenthal");
        break;
    }
    case 118363:
    {
        returnValue = F("Gnadenthaler Weg");
        break;
    }
    case 118364:
    {
        returnValue = F("Gnadenweg");
        break;
    }
    case 118365:
    {
        returnValue = F("Gnadenweiler Str.");
        break;
    }
    case 118366:
    {
        returnValue = F("Gnadschützer Ring");
        break;
    }
    case 118367:
    {
        returnValue = F("Gnadschützer Weg");
        break;
    }
    case 118368:
    {
        returnValue = F("Gnaglbergstr.");
        break;
    }
    case 118369:
    {
        returnValue = F("Gnaig");
        break;
    }
    case 118370:
    {
        returnValue = F("Gnaileser Str.");
        break;
    }
    case 118371:
    {
        returnValue = F("Gnandorfer Str.");
        break;
    }
    case 118372:
    {
        returnValue = F("Gnandsteiner Hauptstr.");
        break;
    }
    case 118373:
    {
        returnValue = F("Gnandsteiner Str.");
        break;
    }
    case 118374:
    {
        returnValue = F("Gnannenburrenweg");
        break;
    }
    case 118375:
    {
        returnValue = F("Gnannenkopfweg");
        break;
    }
    case 118376:
    {
        returnValue = F("Gnannenweiler");
        break;
    }
    case 118377:
    {
        returnValue = F("Gnarrenburger Str.");
        break;
    }
    case 118378:
    {
        returnValue = F("Gnattenbergstr.");
        break;
    }
    case 118379:
    {
        returnValue = F("Gnatzkoppweg");
        break;
    }
    case 118380:
    {
        returnValue = F("Gnauck-Kühne-Str.");
        break;
    }
    case 118381:
    {
        returnValue = F("Gnauckstr.");
        break;
    }
    case 118382:
    {
        returnValue = F("Gnauthstr.");
        break;
    }
    case 118383:
    {
        returnValue = F("Gneidingerhart");
        break;
    }
    case 118384:
    {
        returnValue = F("Gneigweg");
        break;
    }
    case 118385:
    {
        returnValue = F("Gneisdorf");
        break;
    }
    case 118386:
    {
        returnValue = F("Gneisenau");
        break;
    }
    case 118387:
    {
        returnValue = F("Gneisenauring");
        break;
    }
    case 118388:
    {
        returnValue = F("Gneisenaustr.");
        break;
    }
    case 118389:
    {
        returnValue = F("Gneisenauweg");
        break;
    }
    case 118390:
    {
        returnValue = F("Gneishof");
        break;
    }
    case 118391:
    {
        returnValue = F("Gneisstr.");
        break;
    }
    case 118392:
    {
        returnValue = F("Gneisweg");
        break;
    }
    case 118393:
    {
        returnValue = F("Gnemersche Str.");
        break;
    }
    case 118394:
    {
        returnValue = F("Gnesener Str.");
        break;
    }
    case 118395:
    {
        returnValue = F("Gnetscher Str.");
        break;
    }
    case 118396:
    {
        returnValue = F("Gneuser Str.");
        break;
    }
    case 118397:
    {
        returnValue = F("Gneventhin");
        break;
    }
    case 118398:
    {
        returnValue = F("Gneversdorfer Kamp");
        break;
    }
    case 118399:
    {
        returnValue = F("Gneversdorfer Weg");
        break;
    }
    case 118400:
    {
        returnValue = F("Gnevezin");
        break;
    }
    case 118401:
    {
        returnValue = F("Gneveziner Damm");
        break;
    }
    case 118402:
    {
        returnValue = F("Gneveziner Weg");
        break;
    }
    case 118403:
    {
        returnValue = F("Gnevezow");
        break;
    }
    case 118404:
    {
        returnValue = F("Gnevsdorf-Reppentiner Landweg");
        break;
    }
    case 118405:
    {
        returnValue = F("Gnevsdorfer Dorfstr.");
        break;
    }
    case 118406:
    {
        returnValue = F("Gnevsdorfer Weg");
        break;
    }
    case 118407:
    {
        returnValue = F("Gnewitzer Str.");
        break;
    }
    case 118408:
    {
        returnValue = F("Gniddenborg");
        break;
    }
    case 118409:
    {
        returnValue = F("Gniebeler Str.");
        break;
    }
    case 118410:
    {
        returnValue = F("Gniesbreite");
        break;
    }
    case 118411:
    {
        returnValue = F("Gnieser Str.");
        break;
    }
    case 118412:
    {
        returnValue = F("Gnissanastr.");
        break;
    }
    case 118413:
    {
        returnValue = F("Gnitzer Weg");
        break;
    }
    case 118414:
    {
        returnValue = F("Gnodstadter Str.");
        break;
    }
    case 118415:
    {
        returnValue = F("Gnoiener Chaussee");
        break;
    }
    case 118416:
    {
        returnValue = F("Gnoiener Platz");
        break;
    }
    case 118417:
    {
        returnValue = F("Gnoiener Str.");
        break;
    }
    case 118418:
    {
        returnValue = F("Gnoiener Weg");
        break;
    }
    case 118419:
    {
        returnValue = F("Gnomenweg");
        break;
    }
    case 118420:
    {
        returnValue = F("Gnutzer Furt");
        break;
    }
    case 118421:
    {
        returnValue = F("Gnutzer Klön-Eck");
        break;
    }
    case 118422:
    {
        returnValue = F("Gnutzer Str.");
        break;
    }
    case 118423:
    {
        returnValue = F("Gnädigspark");
        break;
    }
    case 118424:
    {
        returnValue = F("Gnäditz");
        break;
    }
    case 118425:
    {
        returnValue = F("Gnädlingstr.");
        break;
    }
    case 118426:
    {
        returnValue = F("Gnäterkuhlenweg");
        break;
    }
    case 118427:
    {
        returnValue = F("Gnötzheim");
        break;
    }
    case 118428:
    {
        returnValue = F("Goal");
        break;
    }
    case 118429:
    {
        returnValue = F("Goardenbree");
        break;
    }
    case 118430:
    {
        returnValue = F("Goarstal");
        break;
    }
    case 118431:
    {
        returnValue = F("Goarstr.");
        break;
    }
    case 118432:
    {
        returnValue = F("Gobbelinstr.");
        break;
    }
    case 118433:
    {
        returnValue = F("Gobbin");
        break;
    }
    case 118434:
    {
        returnValue = F("Gobbinstr.");
        break;
    }
    case 118435:
    {
        returnValue = F("Gobelinstr.");
        break;
    }
    case 118436:
    {
        returnValue = F("Gobelinusstr.");
        break;
    }
    case 118437:
    {
        returnValue = F("Gobeliusstr.");
        break;
    }
    case 118438:
    {
        returnValue = F("Gobelweg");
        break;
    }
    case 118439:
    {
        returnValue = F("Goben");
        break;
    }
    case 118440:
    {
        returnValue = F("Gobener Str.");
        break;
    }
    case 118441:
    {
        returnValue = F("Gobener Weg");
        break;
    }
    case 118442:
    {
        returnValue = F("Gobertring");
        break;
    }
    case 118443:
    {
        returnValue = F("Gobertstr.");
        break;
    }
    case 118444:
    {
        returnValue = F("Gobschweg");
        break;
    }
    case 118445:
    {
        returnValue = F("Gocher Feld");
        break;
    }
    case 118446:
    {
        returnValue = F("Gocher Landstr.");
        break;
    }
    case 118447:
    {
        returnValue = F("Gocher Ring");
        break;
    }
    case 118448:
    {
        returnValue = F("Gocher Str.");
        break;
    }
    case 118449:
    {
        returnValue = F("Gocher Weg");
        break;
    }
    case 118450:
    {
        returnValue = F("Gochermannsweg");
        break;
    }
    case 118451:
    {
        returnValue = F("Gochfortzberg");
        break;
    }
    case 118452:
    {
        returnValue = F("Gochsedijk");
        break;
    }
    case 118453:
    {
        returnValue = F("Gochsener Str.");
        break;
    }
    case 118454:
    {
        returnValue = F("Gochsheimer Pfad");
        break;
    }
    case 118455:
    {
        returnValue = F("Gochsheimer Str.");
        break;
    }
    case 118456:
    {
        returnValue = F("Gochsheimer Weg");
        break;
    }
    case 118457:
    {
        returnValue = F("Gochtstr.");
        break;
    }
    case 118458:
    {
        returnValue = F("Gockel-Böhner-Weg");
        break;
    }
    case 118459:
    {
        returnValue = F("Gockelersklingenweg");
        break;
    }
    case 118460:
    {
        returnValue = F("Gockelersteig");
        break;
    }
    case 118461:
    {
        returnValue = F("Gockelgasse");
        break;
    }
    case 118462:
    {
        returnValue = F("Gockelhof");
        break;
    }
    case 118463:
    {
        returnValue = F("Gockelnstr.");
        break;
    }
    case 118464:
    {
        returnValue = F("Gockelpadd");
        break;
    }
    case 118465:
    {
        returnValue = F("Gockelshütte");
        break;
    }
    case 118466:
    {
        returnValue = F("Gockelstr.");
        break;
    }
    case 118467:
    {
        returnValue = F("Gockelsweg");
        break;
    }
    case 118468:
    {
        returnValue = F("Gockelwiese");
        break;
    }
    case 118469:
    {
        returnValue = F("Gockenholzer Weg");
        break;
    }
    case 118470:
    {
        returnValue = F("Gocklerweg");
        break;
    }
    case 118471:
    {
        returnValue = F("Godaser Str.");
        break;
    }
    case 118472:
    {
        returnValue = F("Godaser Str. (TIR 8)");
        break;
    }
    case 118473:
    {
        returnValue = F("Godastr.");
        break;
    }
    case 118474:
    {
        returnValue = F("Godbersenweg");
        break;
    }
    case 118475:
    {
        returnValue = F("Godbersweg");
        break;
    }
    case 118476:
    {
        returnValue = F("Goddelauer Str.");
        break;
    }
    case 118477:
    {
        returnValue = F("Goddelauer Weg");
        break;
    }
    case 118478:
    {
        returnValue = F("Goddelsbach");
        break;
    }
    case 118479:
    {
        returnValue = F("Goddelsheimer Str.");
        break;
    }
    case 118480:
    {
        returnValue = F("Godderter Landstr.");
        break;
    }
    case 118481:
    {
        returnValue = F("Godderter Weg");
        break;
    }
    case 118482:
    {
        returnValue = F("Godefridusstr.");
        break;
    }
    case 118483:
    {
        returnValue = F("Godefriedstr.");
        break;
    }
    case 118484:
    {
        returnValue = F("Godehardistr.");
        break;
    }
    case 118485:
    {
        returnValue = F("Godehardkamp");
        break;
    }
    case 118486:
    {
        returnValue = F("Godehardsplatz");
        break;
    }
    case 118487:
    {
        returnValue = F("Godehardstr.");
        break;
    }
    case 118488:
    {
        returnValue = F("Godehardweg");
        break;
    }
    case 118489:
    {
        returnValue = F("Godeke-Michels-Weg");
        break;
    }
    case 118490:
    {
        returnValue = F("Godeke-von-Wickede-Str.");
        break;
    }
    case 118491:
    {
        returnValue = F("Godeldorf");
        break;
    }
    case 118492:
    {
        returnValue = F("Godelheimer Str.");
        break;
    }
    case 118493:
    {
        returnValue = F("Godelhof");
        break;
    }
    case 118494:
    {
        returnValue = F("Godelsberg");
        break;
    }
    case 118495:
    {
        returnValue = F("Godelstatt");
        break;
    }
    case 118496:
    {
        returnValue = F("Godelstr.");
        break;
    }
    case 118497:
    {
        returnValue = F("Godemser Str.");
        break;
    }
    case 118498:
    {
        returnValue = F("Godemser Weg");
        break;
    }
    case 118499:
    {
        returnValue = F("Goden Wind");
        break;
    }
    case 118500:
    {
        returnValue = F("Godenbergredder");
        break;
    }
    case 118501:
    {
        returnValue = F("Godenbergstr.");
        break;
    }
    case 118502:
    {
        returnValue = F("Godendorfer Papiermühle");
        break;
    }
    case 118503:
    {
        returnValue = F("Godenelterweg");
        break;
    }
    case 118504:
    {
        returnValue = F("Godensholter Str.");
        break;
    }
    case 118505:
    {
        returnValue = F("Godenstedter Str.");
        break;
    }
    case 118506:
    {
        returnValue = F("Godensweger Str.");
        break;
    }
    case 118507:
    {
        returnValue = F("Godentwiete");
        break;
    }
    case 118508:
    {
        returnValue = F("Godenweg");
        break;
    }
    case 118509:
    {
        returnValue = F("Godenwindstieg");
        break;
    }
    case 118510:
    {
        returnValue = F("Godert-Haes-Str.");
        break;
    }
    case 118511:
    {
        returnValue = F("Godertstr.");
        break;
    }
    case 118512:
    {
        returnValue = F("Godesberger Str.");
        break;
    }
    case 118513:
    {
        returnValue = F("Godesberger Weg");
        break;
    }
    case 118514:
    {
        returnValue = F("Godetietweg");
        break;
    }
    case 118515:
    {
        returnValue = F("Godeweg");
        break;
    }
    case 118516:
    {
        returnValue = F("Godewindweg");
        break;
    }
    case 118517:
    {
        returnValue = F("Godfried-Bueren-Str.");
        break;
    }
    case 118518:
    {
        returnValue = F("Godfried-Meyer-Str.");
        break;
    }
    case 118519:
    {
        returnValue = F("Godfroydstr.");
        break;
    }
    case 118520:
    {
        returnValue = F("Godilda-Platz");
        break;
    }
    case 118521:
    {
        returnValue = F("Godimstr.");
        break;
    }
    case 118522:
    {
        returnValue = F("Godinstr.");
        break;
    }
    case 118523:
    {
        returnValue = F("Godlbrunnweg");
        break;
    }
    case 118524:
    {
        returnValue = F("Godlricht");
        break;
    }
    case 118525:
    {
        returnValue = F("Godlshamer Str.");
        break;
    }
    case 118526:
    {
        returnValue = F("Godmanchesterring");
        break;
    }
    case 118527:
    {
        returnValue = F("Godobertusweg");
        break;
    }
    case 118528:
    {
        returnValue = F("Godorfer Burg");
        break;
    }
    case 118529:
    {
        returnValue = F("Godorfer Weg");
        break;
    }
    case 118530:
    {
        returnValue = F("Godostr.");
        break;
    }
    case 118531:
    {
        returnValue = F("Godow");
        break;
    }
    case 118532:
    {
        returnValue = F("Godramsteiner Hauptstr.");
        break;
    }
    case 118533:
    {
        returnValue = F("Godramsteiner Str.");
        break;
    }
    case 118534:
    {
        returnValue = F("Godshorner Str.");
        break;
    }
    case 118535:
    {
        returnValue = F("Goebel-Styes-Weg");
        break;
    }
    case 118536:
    {
        returnValue = F("Goebelbeckerstr.");
        break;
    }
    case 118537:
    {
        returnValue = F("Goebelstr.");
        break;
    }
    case 118538:
    {
        returnValue = F("Goebelweg");
        break;
    }
    case 118539:
    {
        returnValue = F("Goebenplatz");
        break;
    }
    case 118540:
    {
        returnValue = F("Goebensiedlung");
        break;
    }
    case 118541:
    {
        returnValue = F("Goebenstr.");
        break;
    }
    case 118542:
    {
        returnValue = F("Goeckestr.");
        break;
    }
    case 118543:
    {
        returnValue = F("Goeckingkstr.");
        break;
    }
    case 118544:
    {
        returnValue = F("Goedeckekamp");
        break;
    }
    case 118545:
    {
        returnValue = F("Goedeckestr.");
        break;
    }
    case 118546:
    {
        returnValue = F("Goedeke-Micheel-Hof");
        break;
    }
    case 118547:
    {
        returnValue = F("Goedeke-Michel-Str.");
        break;
    }
    case 118548:
    {
        returnValue = F("Goedeke-Michels-Str.");
        break;
    }
    case 118549:
    {
        returnValue = F("Goedekestr.");
        break;
    }
    case 118550:
    {
        returnValue = F("Goedekingstr.");
        break;
    }
    case 118551:
    {
        returnValue = F("Goedenser Weg");
        break;
    }
    case 118552:
    {
        returnValue = F("Goeggstr.");
        break;
    }
    case 118553:
    {
        returnValue = F("Goehlweg");
        break;
    }
    case 118554:
    {
        returnValue = F("Goekenbrede");
        break;
    }
    case 118555:
    {
        returnValue = F("Goekenheide");
        break;
    }
    case 118556:
    {
        returnValue = F("Goekenhof");
        break;
    }
    case 118557:
    {
        returnValue = F("Goekenstr.");
        break;
    }
    case 118558:
    {
        returnValue = F("Goekersgrabenstr.");
        break;
    }
    case 118559:
    {
        returnValue = F("Goemannsweg");
        break;
    }
    case 118560:
    {
        returnValue = F("Goeppert-Mayer-Str.");
        break;
    }
    case 118561:
    {
        returnValue = F("Goerdeler Park");
        break;
    }
    case 118562:
    {
        returnValue = F("Goerdeler Str.");
        break;
    }
    case 118563:
    {
        returnValue = F("Goerdeler-Weg");
        break;
    }
    case 118564:
    {
        returnValue = F("Goerdelerhof");
        break;
    }
    case 118565:
    {
        returnValue = F("Goerdelerplatz");
        break;
    }
    case 118566:
    {
        returnValue = F("Goerdelerring");
        break;
    }
    case 118567:
    {
        returnValue = F("Goerdelerstr.");
        break;
    }
    case 118568:
    {
        returnValue = F("Goerdelerweg");
        break;
    }
    case 118569:
    {
        returnValue = F("Goerdtpark");
        break;
    }
    case 118570:
    {
        returnValue = F("Goerdtstr.");
        break;
    }
    case 118571:
    {
        returnValue = F("Goertzbrunnstr.");
        break;
    }
    case 118572:
    {
        returnValue = F("Goeschelstr.");
        break;
    }
    case 118573:
    {
        returnValue = F("Goesmannstr.");
        break;
    }
    case 118574:
    {
        returnValue = F("Goesmannsweg");
        break;
    }
    case 118575:
    {
        returnValue = F("Goesweg");
        break;
    }
    case 118576:
    {
        returnValue = F("Goetendyk");
        break;
    }
    case 118577:
    {
        returnValue = F("Goetenkamp");
        break;
    }
    case 118578:
    {
        returnValue = F("Goetersstr.");
        break;
    }
    case 118579:
    {
        returnValue = F("Goethe Str.");
        break;
    }
    case 118580:
    {
        returnValue = F("Goethe-Allee");
        break;
    }
    case 118581:
    {
        returnValue = F("Goethe-Anlagen");
        break;
    }
    case 118582:
    {
        returnValue = F("Goethe-Garten");
        break;
    }
    case 118583:
    {
        returnValue = F("Goethe-Gärten");
        break;
    }
    case 118584:
    {
        returnValue = F("Goethe-Park");
        break;
    }
    case 118585:
    {
        returnValue = F("Goethe-Platz");
        break;
    }
    case 118586:
    {
        returnValue = F("Goethe-Ring");
        break;
    }
    case 118587:
    {
        returnValue = F("Goethe-Siedlung");
        break;
    }
    case 118588:
    {
        returnValue = F("Goetheallee");
        break;
    }
    case 118589:
    {
        returnValue = F("Goetheanlage");
        break;
    }
    case 118590:
    {
        returnValue = F("Goethebahn");
        break;
    }
    case 118591:
    {
        returnValue = F("Goetheblick");
        break;
    }
    case 118592:
    {
        returnValue = F("Goethebrücke");
        break;
    }
    case 118593:
    {
        returnValue = F("Goethegarten");
        break;
    }
    case 118594:
    {
        returnValue = F("Goethehain");
        break;
    }
    case 118595:
    {
        returnValue = F("Goethenebenstr.");
        break;
    }
    case 118596:
    {
        returnValue = F("Goethepark");
        break;
    }
    case 118597:
    {
        returnValue = F("Goetheplatz");
        break;
    }
    case 118598:
    {
        returnValue = F("Goethepromenade");
        break;
    }
    case 118599:
    {
        returnValue = F("Goethering");
        break;
    }
    case 118600:
    {
        returnValue = F("Goethes Ruh'");
        break;
    }
    case 118601:
    {
        returnValue = F("Goethestern");
        break;
    }
    case 118602:
    {
        returnValue = F("Goethestr.");
        break;
    }
    case 118603:
    {
        returnValue = F("Goethestr. 15a 17a-c");
        break;
    }
    case 118604:
    {
        returnValue = F("Goetheweg");
        break;
    }
    case 118605:
    {
        returnValue = F("Goethewinkel");
        break;
    }
    case 118606:
    {
        returnValue = F("Goetzestr.");
        break;
    }
    case 118607:
    {
        returnValue = F("Goetzstr.");
        break;
    }
    case 118608:
    {
        returnValue = F("Goezestr.");
        break;
    }
    case 118609:
    {
        returnValue = F("Goffartstr.");
        break;
    }
    case 118610:
    {
        returnValue = F("Goffauxstr.");
        break;
    }
    case 118611:
    {
        returnValue = F("Goffineweg");
        break;
    }
    case 118612:
    {
        returnValue = F("Goffmannweg");
        break;
    }
    case 118613:
    {
        returnValue = F("Gogeislstr.");
        break;
    }
    case 118614:
    {
        returnValue = F("Gogelhopfengasse");
        break;
    }
    case 118615:
    {
        returnValue = F("Gogerichtstr.");
        break;
    }
    case 118616:
    {
        returnValue = F("Goggenleithe");
        break;
    }
    case 118617:
    {
        returnValue = F("Goggenschnabelweg");
        break;
    }
    case 118618:
    {
        returnValue = F("Goggerhofstr.");
        break;
    }
    case 118619:
    {
        returnValue = F("Goggersreut");
        break;
    }
    case 118620:
    {
        returnValue = F("Gogler Weg");
        break;
    }
    case 118621:
    {
        returnValue = F("Goglweg");
        break;
    }
    case 118622:
    {
        returnValue = F("Gografenstr.");
        break;
    }
    case 118623:
    {
        returnValue = F("Gografenweg");
        break;
    }
    case 118624:
    {
        returnValue = F("Gografstr.");
        break;
    }
    case 118625:
    {
        returnValue = F("Gogrevenstr.");
        break;
    }
    case 118626:
    {
        returnValue = F("Gohbeck");
        break;
    }
    case 118627:
    {
        returnValue = F("Gohfelder Weg");
        break;
    }
    case 118628:
    {
        returnValue = F("Gohgräfenberg");
        break;
    }
    case 118629:
    {
        returnValue = F("Gohla");
        break;
    }
    case 118630:
    {
        returnValue = F("Gohlau");
        break;
    }
    case 118631:
    {
        returnValue = F("Gohlauer Weg");
        break;
    }
    case 118632:
    {
        returnValue = F("Gohlefanz");
        break;
    }
    case 118633:
    {
        returnValue = F("Gohliser Gasse");
        break;
    }
    case 118634:
    {
        returnValue = F("Gohliser Str.");
        break;
    }
    case 118635:
    {
        returnValue = F("Gohliser Weg");
        break;
    }
    case 118636:
    {
        returnValue = F("Gohlitzer Dorfstr.");
        break;
    }
    case 118637:
    {
        returnValue = F("Gohlitzer Str.");
        break;
    }
    case 118638:
    {
        returnValue = F("Gohlwerder");
        break;
    }
    case 118639:
    {
        returnValue = F("Gohrauer Str.");
        break;
    }
    case 118640:
    {
        returnValue = F("Gohrer Chausseestr.");
        break;
    }
    case 118641:
    {
        returnValue = F("Gohrer Gartenstr.");
        break;
    }
    case 118642:
    {
        returnValue = F("Gohrer Str.");
        break;
    }
    case 118643:
    {
        returnValue = F("Gohrer Weg");
        break;
    }
    case 118644:
    {
        returnValue = F("Gohrer Wiesenweg");
        break;
    }
    case 118645:
    {
        returnValue = F("Gohrerberg");
        break;
    }
    case 118646:
    {
        returnValue = F("Gohrische Str.");
        break;
    }
    case 118647:
    {
        returnValue = F("Gohrischer Steig");
        break;
    }
    case 118648:
    {
        returnValue = F("Gohrischer Str.");
        break;
    }
    case 118649:
    {
        returnValue = F("Gohrischheide Rundweg");
        break;
    }
    case 118650:
    {
        returnValue = F("Gohriser Weg");
        break;
    }
    case 118651:
    {
        returnValue = F("Gohrstr.");
        break;
    }
    case 118652:
    {
        returnValue = F("Gohrweide");
        break;
    }
    case 118653:
    {
        returnValue = F("Gohweg");
        break;
    }
    case 118654:
    {
        returnValue = F("Goidertweg");
        break;
    }
    case 118655:
    {
        returnValue = F("Gojenberg");
        break;
    }
    case 118656:
    {
        returnValue = F("Gokesberg");
        break;
    }
    case 118657:
    {
        returnValue = F("Golaweg");
        break;
    }
    case 118658:
    {
        returnValue = F("Golbacher Weg");
        break;
    }
    case 118659:
    {
        returnValue = F("Golben");
        break;
    }
    case 118660:
    {
        returnValue = F("Golbergstr.");
        break;
    }
    case 118661:
    {
        returnValue = F("Golberoder Str.");
        break;
    }
    case 118662:
    {
        returnValue = F("Golbitzer Str.");
        break;
    }
    case 118663:
    {
        returnValue = F("Golchener Weg");
        break;
    }
    case 118664:
    {
        returnValue = F("Goldacher Str.");
        break;
    }
    case 118665:
    {
        returnValue = F("Goldachring");
        break;
    }
    case 118666:
    {
        returnValue = F("Goldachstr.");
        break;
    }
    case 118667:
    {
        returnValue = F("Goldachweg");
        break;
    }
    case 118668:
    {
        returnValue = F("Goldacker");
        break;
    }
    case 118669:
    {
        returnValue = F("Goldackerstr.");
        break;
    }
    case 118670:
    {
        returnValue = F("Goldackerweg");
        break;
    }
    case 118671:
    {
        returnValue = F("Goldadlergasse");
        break;
    }
    case 118672:
    {
        returnValue = F("Goldammer");
        break;
    }
    case 118673:
    {
        returnValue = F("Goldammerallee");
        break;
    }
    case 118674:
    {
        returnValue = F("Goldammergässchen");
        break;
    }
    case 118675:
    {
        returnValue = F("Goldammernweg");
        break;
    }
    case 118676:
    {
        returnValue = F("Goldammerplatz");
        break;
    }
    case 118677:
    {
        returnValue = F("Goldammerstieg");
        break;
    }
    case 118678:
    {
        returnValue = F("Goldammerstr.");
        break;
    }
    case 118679:
    {
        returnValue = F("Goldammerweg");
        break;
    }
    case 118680:
    {
        returnValue = F("Goldamselweg");
        break;
    }
    case 118681:
    {
        returnValue = F("Goldangelweg");
        break;
    }
    case 118682:
    {
        returnValue = F("Goldanger");
        break;
    }
    case 118683:
    {
        returnValue = F("Goldaper Str.");
        break;
    }
    case 118684:
    {
        returnValue = F("Goldaper Weg");
        break;
    }
    case 118685:
    {
        returnValue = F("Goldaue");
        break;
    }
    case 118686:
    {
        returnValue = F("Goldbach");
        break;
    }
    case 118687:
    {
        returnValue = F("Goldbachaue");
        break;
    }
    case 118688:
    {
        returnValue = F("Goldbacher Feld");
        break;
    }
    case 118689:
    {
        returnValue = F("Goldbacher Haupstr.");
        break;
    }
    case 118690:
    {
        returnValue = F("Goldbacher Hauptstr.");
        break;
    }
    case 118691:
    {
        returnValue = F("Goldbacher Landstr.");
        break;
    }
    case 118692:
    {
        returnValue = F("Goldbacher Mühle");
        break;
    }
    case 118693:
    {
        returnValue = F("Goldbacher Steige");
        break;
    }
    case 118694:
    {
        returnValue = F("Goldbacher Str.");
        break;
    }
    case 118695:
    {
        returnValue = F("Goldbacher Weg");
        break;
    }
    case 118696:
    {
        returnValue = F("Goldbachgasse");
        break;
    }
    case 118697:
    {
        returnValue = F("Goldbachmühle");
        break;
    }
    case 118698:
    {
        returnValue = F("Goldbachsiedlung");
        break;
    }
    case 118699:
    {
        returnValue = F("Goldbachstr.");
        break;
    }
    case 118700:
    {
        returnValue = F("Goldbachsweg");
        break;
    }
    case 118701:
    {
        returnValue = F("Goldbachtal");
        break;
    }
    case 118702:
    {
        returnValue = F("Goldbachtalweg");
        break;
    }
    case 118703:
    {
        returnValue = F("Goldbachweg");
        break;
    }
    case 118704:
    {
        returnValue = F("Goldbachwiesen");
        break;
    }
    case 118705:
    {
        returnValue = F("Goldbahnweg");
        break;
    }
    case 118706:
    {
        returnValue = F("Goldbarg");
        break;
    }
    case 118707:
    {
        returnValue = F("Goldbaumweg");
        break;
    }
    case 118708:
    {
        returnValue = F("Goldbeck");
        break;
    }
    case 118709:
    {
        returnValue = F("Goldbecker Burgstr.");
        break;
    }
    case 118710:
    {
        returnValue = F("Goldbecker Mühle");
        break;
    }
    case 118711:
    {
        returnValue = F("Goldbecker Str.");
        break;
    }
    case 118712:
    {
        returnValue = F("Goldbecker Weg");
        break;
    }
    case 118713:
    {
        returnValue = F("Goldbekstr.");
        break;
    }
    case 118714:
    {
        returnValue = F("Goldberg");
        break;
    }
    case 118715:
    {
        returnValue = F("Goldberg Schneise");
        break;
    }
    case 118716:
    {
        returnValue = F("Goldberg Weg");
        break;
    }
    case 118717:
    {
        returnValue = F("Goldberg-Rundwanderweg");
        break;
    }
    case 118718:
    {
        returnValue = F("Goldbergblick");
        break;
    }
    case 118719:
    {
        returnValue = F("Goldberger Chaussee");
        break;
    }
    case 118720:
    {
        returnValue = F("Goldberger Str.");
        break;
    }
    case 118721:
    {
        returnValue = F("Goldberger Weg");
        break;
    }
    case 118722:
    {
        returnValue = F("Goldberggässchen");
        break;
    }
    case 118723:
    {
        returnValue = F("Goldberglein");
        break;
    }
    case 118724:
    {
        returnValue = F("Goldberglstr.");
        break;
    }
    case 118725:
    {
        returnValue = F("Goldbergpark");
        break;
    }
    case 118726:
    {
        returnValue = F("Goldbergplatz");
        break;
    }
    case 118727:
    {
        returnValue = F("Goldbergring");
        break;
    }
    case 118728:
    {
        returnValue = F("Goldbergsring");
        break;
    }
    case 118729:
    {
        returnValue = F("Goldbergstr.");
        break;
    }
    case 118730:
    {
        returnValue = F("Goldbergsweg");
        break;
    }
    case 118731:
    {
        returnValue = F("Goldbergweg");
        break;
    }
    case 118732:
    {
        returnValue = F("Goldbiegelgasse");
        break;
    }
    case 118733:
    {
        returnValue = F("Goldbinnen");
        break;
    }
    case 118734:
    {
        returnValue = F("Goldblöcken");
        break;
    }
    case 118735:
    {
        returnValue = F("Goldbogen");
        break;
    }
    case 118736:
    {
        returnValue = F("Goldborn");
        break;
    }
    case 118737:
    {
        returnValue = F("Goldbornstr.");
        break;
    }
    case 118738:
    {
        returnValue = F("Goldborntal");
        break;
    }
    case 118739:
    {
        returnValue = F("Goldbornweg");
        break;
    }
    case 118740:
    {
        returnValue = F("Goldbredde");
        break;
    }
    case 118741:
    {
        returnValue = F("Goldbrede");
        break;
    }
    case 118742:
    {
        returnValue = F("Goldbreede");
        break;
    }
    case 118743:
    {
        returnValue = F("Goldbreite");
        break;
    }
    case 118744:
    {
        returnValue = F("Goldbrink");
        break;
    }
    case 118745:
    {
        returnValue = F("Goldbrinkstr.");
        break;
    }
    case 118746:
    {
        returnValue = F("Goldbronnenstr.");
        break;
    }
    case 118747:
    {
        returnValue = F("Goldbrunnbachstr.");
        break;
    }
    case 118748:
    {
        returnValue = F("Goldbrunnbogenweg");
        break;
    }
    case 118749:
    {
        returnValue = F("Goldbrunnenstr.");
        break;
    }
    case 118750:
    {
        returnValue = F("Goldbrunnweg");
        break;
    }
    case 118751:
    {
        returnValue = F("Goldbuhlweg");
        break;
    }
    case 118752:
    {
        returnValue = F("Goldburg");
        break;
    }
    case 118753:
    {
        returnValue = F("Goldburghauser Str.");
        break;
    }
    case 118754:
    {
        returnValue = F("Goldbuschstr.");
        break;
    }
    case 118755:
    {
        returnValue = F("Goldbuschweg");
        break;
    }
    case 118756:
    {
        returnValue = F("Goldbäumchenstr.");
        break;
    }
    case 118757:
    {
        returnValue = F("Goldböhlstr.");
        break;
    }
    case 118758:
    {
        returnValue = F("Goldbühlein");
        break;
    }
    case 118759:
    {
        returnValue = F("Golddistelweg");
        break;
    }
    case 118760:
    {
        returnValue = F("Golddorfstr.");
        break;
    }
    case 118761:
    {
        returnValue = F("Goldebee");
        break;
    }
    case 118762:
    {
        returnValue = F("Goldebeker Str.");
        break;
    }
    case 118763:
    {
        returnValue = F("Goldebergstr.");
        break;
    }
    case 118764:
    {
        returnValue = F("Goldebühl");
        break;
    }
    case 118765:
    {
        returnValue = F("Goldecke");
        break;
    }
    case 118766:
    {
        returnValue = F("Goldeibenweg");
        break;
    }
    case 118767:
    {
        returnValue = F("Goldellern");
        break;
    }
    case 118768:
    {
        returnValue = F("Goldelunder Str.");
        break;
    }
    case 118769:
    {
        returnValue = F("Golden Gate Drive");
        break;
    }
    case 118770:
    {
        returnValue = F("Golden Gels Bridge");
        break;
    }
    case 118771:
    {
        returnValue = F("Goldenbaum");
        break;
    }
    case 118772:
    {
        returnValue = F("Goldenbaumer Damm");
        break;
    }
    case 118773:
    {
        returnValue = F("Goldenbaumer Landstr.");
        break;
    }
    case 118774:
    {
        returnValue = F("Goldenbaumer Str.");
        break;
    }
    case 118775:
    {
        returnValue = F("Goldenberg");
        break;
    }
    case 118776:
    {
        returnValue = F("Goldenbergstr.");
        break;
    }
    case 118777:
    {
        returnValue = F("Goldenbock");
        break;
    }
    case 118778:
    {
        returnValue = F("Goldenbower Weg");
        break;
    }
    case 118779:
    {
        returnValue = F("Goldenbrunnengasse");
        break;
    }
    case 118780:
    {
        returnValue = F("Goldenbühlstr.");
        break;
    }
    case 118781:
    {
        returnValue = F("Goldene Anhöhe");
        break;
    }
    case 118782:
    {
        returnValue = F("Goldene Au");
        break;
    }
    case 118783:
    {
        returnValue = F("Goldene Aue");
        break;
    }
    case 118784:
    {
        returnValue = F("Goldene Aussicht");
        break;
    }
    case 118785:
    {
        returnValue = F("Goldene Brücke");
        break;
    }
    case 118786:
    {
        returnValue = F("Goldene Ecke");
        break;
    }
    case 118787:
    {
        returnValue = F("Goldene Gasse");
        break;
    }
    case 118788:
    {
        returnValue = F("Goldene Hufe");
        break;
    }
    case 118789:
    {
        returnValue = F("Goldene Höh");
        break;
    }
    case 118790:
    {
        returnValue = F("Goldene Höhe");
        break;
    }
    case 118791:
    {
        returnValue = F("Goldene Linie");
        break;
    }
    case 118792:
    {
        returnValue = F("Goldene Meile");
        break;
    }
    case 118793:
    {
        returnValue = F("Goldene Perle");
        break;
    }
    case 118794:
    {
        returnValue = F("Goldene Reihe");
        break;
    }
    case 118795:
    {
        returnValue = F("Goldene Ringgasse");
        break;
    }
    case 118796:
    {
        returnValue = F("Goldene Ringsgasse");
        break;
    }
    case 118797:
    {
        returnValue = F("Goldene-Au-Str.");
        break;
    }
    case 118798:
    {
        returnValue = F("Goldene-Bären-Str.");
        break;
    }
    case 118799:
    {
        returnValue = F("Goldene-Horn-Str.");
        break;
    }
    case 118800:
    {
        returnValue = F("Goldene-Kreuz-Gasse");
        break;
    }
    case 118801:
    {
        returnValue = F("Goldener Anker");
        break;
    }
    case 118802:
    {
        returnValue = F("Goldener Grund");
        break;
    }
    case 118803:
    {
        returnValue = F("Goldener Hahn");
        break;
    }
    case 118804:
    {
        returnValue = F("Goldener Höhenweg");
        break;
    }
    case 118805:
    {
        returnValue = F("Goldener Rain");
        break;
    }
    case 118806:
    {
        returnValue = F("Goldener Rand");
        break;
    }
    case 118807:
    {
        returnValue = F("Goldener Ring");
        break;
    }
    case 118808:
    {
        returnValue = F("Goldener Spiegel");
        break;
    }
    case 118809:
    {
        returnValue = F("Goldener Steig");
        break;
    }
    case 118810:
    {
        returnValue = F("Goldener Winkel");
        break;
    }
    case 118811:
    {
        returnValue = F("Goldener Ärmel");
        break;
    }
    case 118812:
    {
        returnValue = F("Goldener-Kopf-Weg");
        break;
    }
    case 118813:
    {
        returnValue = F("Goldenes Eck");
        break;
    }
    case 118814:
    {
        returnValue = F("Goldenes Rändchen");
        break;
    }
    case 118815:
    {
        returnValue = F("Goldenes Straßl");
        break;
    }
    case 118816:
    {
        returnValue = F("Goldengasse");
        break;
    }
    case 118817:
    {
        returnValue = F("Goldenitzer Weg");
        break;
    }
    case 118818:
    {
        returnValue = F("Goldenke");
        break;
    }
    case 118819:
    {
        returnValue = F("Goldenluftgasse");
        break;
    }
    case 118820:
    {
        returnValue = F("Goldenort");
        break;
    }
    case 118821:
    {
        returnValue = F("Goldenring");
        break;
    }
    case 118822:
    {
        returnValue = F("Goldensee");
        break;
    }
    case 118823:
    {
        returnValue = F("Goldenseer Str.");
        break;
    }
    case 118824:
    {
        returnValue = F("Goldenstedter Damm");
        break;
    }
    case 118825:
    {
        returnValue = F("Goldenstedter Str.");
        break;
    }
    case 118826:
    {
        returnValue = F("Goldenstedter Weg");
        break;
    }
    case 118827:
    {
        returnValue = F("Goldensteinsweg");
        break;
    }
    case 118828:
    {
        returnValue = F("Goldenstädter Damm");
        break;
    }
    case 118829:
    {
        returnValue = F("Goldenstädter Str.");
        break;
    }
    case 118830:
    {
        returnValue = F("Goldenstädter Weg");
        break;
    }
    case 118831:
    {
        returnValue = F("Goldern");
        break;
    }
    case 118832:
    {
        returnValue = F("Goldersbachstr.");
        break;
    }
    case 118833:
    {
        returnValue = F("Goldersbachtalstr.");
        break;
    }
    case 118834:
    {
        returnValue = F("Goldersbachtalweg");
        break;
    }
    case 118835:
    {
        returnValue = F("Goldersbachweg");
        break;
    }
    case 118836:
    {
        returnValue = F("Goldersbergstr.");
        break;
    }
    case 118837:
    {
        returnValue = F("Golderstr.");
        break;
    }
    case 118838:
    {
        returnValue = F("Goldeselweg");
        break;
    }
    case 118839:
    {
        returnValue = F("Goldewin");
        break;
    }
    case 118840:
    {
        returnValue = F("Goldewin Ausbau");
        break;
    }
    case 118841:
    {
        returnValue = F("Goldfasanenweg");
        break;
    }
    case 118842:
    {
        returnValue = F("Goldfeldstr.");
        break;
    }
    case 118843:
    {
        returnValue = F("Goldfeldweg");
        break;
    }
    case 118844:
    {
        returnValue = F("Goldfinkweg");
        break;
    }
    case 118845:
    {
        returnValue = F("Goldfischplatz");
        break;
    }
    case 118846:
    {
        returnValue = F("Goldfischstr.");
        break;
    }
    case 118847:
    {
        returnValue = F("Goldflegge");
        break;
    }
    case 118848:
    {
        returnValue = F("Goldforstweg");
        break;
    }
    case 118849:
    {
        returnValue = F("Goldfuß");
        break;
    }
    case 118850:
    {
        returnValue = F("Goldfußstr.");
        break;
    }
    case 118851:
    {
        returnValue = F("Goldgasse");
        break;
    }
    case 118852:
    {
        returnValue = F("Goldgipfel");
        break;
    }
    case 118853:
    {
        returnValue = F("Goldgraben");
        break;
    }
    case 118854:
    {
        returnValue = F("Goldgrabenstr.");
        break;
    }
    case 118855:
    {
        returnValue = F("Goldgrabenweg");
        break;
    }
    case 118856:
    {
        returnValue = F("Goldgrube");
        break;
    }
    case 118857:
    {
        returnValue = F("Goldgruben");
        break;
    }
    case 118858:
    {
        returnValue = F("Goldgrubengasse");
        break;
    }
    case 118859:
    {
        returnValue = F("Goldgrubenstr.");
        break;
    }
    case 118860:
    {
        returnValue = F("Goldgrubenweg");
        break;
    }
    case 118861:
    {
        returnValue = F("Goldgrund");
        break;
    }
    case 118862:
    {
        returnValue = F("Goldgrundring");
        break;
    }
    case 118863:
    {
        returnValue = F("Goldgrundweg");
        break;
    }
    case 118864:
    {
        returnValue = F("Goldgräberpfad");
        break;
    }
    case 118865:
    {
        returnValue = F("Goldgräberstr.");
        break;
    }
    case 118866:
    {
        returnValue = F("Goldguldenweg");
        break;
    }
    case 118867:
    {
        returnValue = F("Goldhafer");
        break;
    }
    case 118868:
    {
        returnValue = F("Goldhaferweg");
        break;
    }
    case 118869:
    {
        returnValue = F("Goldhagweg");
        break;
    }
    case 118870:
    {
        returnValue = F("Goldhahnweg");
        break;
    }
    case 118871:
    {
        returnValue = F("Goldhainweg");
        break;
    }
    case 118872:
    {
        returnValue = F("Goldhasen");
        break;
    }
    case 118873:
    {
        returnValue = F("Goldhausener Str.");
        break;
    }
    case 118874:
    {
        returnValue = F("Goldhecke");
        break;
    }
    case 118875:
    {
        returnValue = F("Goldhelg");
        break;
    }
    case 118876:
    {
        returnValue = F("Goldhelm");
        break;
    }
    case 118877:
    {
        returnValue = F("Goldhoferweg");
        break;
    }
    case 118878:
    {
        returnValue = F("Goldhofstr.");
        break;
    }
    case 118879:
    {
        returnValue = F("Goldhohlstr.");
        break;
    }
    case 118880:
    {
        returnValue = F("Goldhook");
        break;
    }
    case 118881:
    {
        returnValue = F("Goldhutstr.");
        break;
    }
    case 118882:
    {
        returnValue = F("Goldhähnchen");
        break;
    }
    case 118883:
    {
        returnValue = F("Goldhähnchenweg");
        break;
    }
    case 118884:
    {
        returnValue = F("Goldhäuser Str.");
        break;
    }
    case 118885:
    {
        returnValue = F("Goldhübel");
        break;
    }
    case 118886:
    {
        returnValue = F("Goldhügelstr.");
        break;
    }
    case 118887:
    {
        returnValue = F("Golding");
        break;
    }
    case 118888:
    {
        returnValue = F("Goldinger Str.");
        break;
    }
    case 118889:
    {
        returnValue = F("Goldinsel");
        break;
    }
    case 118890:
    {
        returnValue = F("Goldkamp");
        break;
    }
    case 118891:
    {
        returnValue = F("Goldkampstr.");
        break;
    }
    case 118892:
    {
        returnValue = F("Goldkaul");
        break;
    }
    case 118893:
    {
        returnValue = F("Goldkaute");
        break;
    }
    case 118894:
    {
        returnValue = F("Goldklingenweg");
        break;
    }
    case 118895:
    {
        returnValue = F("Goldknopfgasse");
        break;
    }
    case 118896:
    {
        returnValue = F("Goldkronacher Pfad");
        break;
    }
    case 118897:
    {
        returnValue = F("Goldkronacher Str.");
        break;
    }
    case 118898:
    {
        returnValue = F("Goldkronacher Weg");
        break;
    }
    case 118899:
    {
        returnValue = F("Goldkronacher-Sträßchen");
        break;
    }
    case 118900:
    {
        returnValue = F("Goldkuhl");
        break;
    }
    case 118901:
    {
        returnValue = F("Goldkuhle");
        break;
    }
    case 118902:
    {
        returnValue = F("Goldkuhlenkamp");
        break;
    }
    case 118903:
    {
        returnValue = F("Goldkuhlestr.");
        break;
    }
    case 118904:
    {
        returnValue = F("Goldkuppstr.");
        break;
    }
    case 118905:
    {
        returnValue = F("Goldkäferweg");
        break;
    }
    case 118906:
    {
        returnValue = F("Goldlackstr.");
        break;
    }
    case 118907:
    {
        returnValue = F("Goldlackweg");
        break;
    }
    case 118908:
    {
        returnValue = F("Goldland");
        break;
    }
    case 118909:
    {
        returnValue = F("Goldlauter Rundwanderweg");
        break;
    }
    case 118910:
    {
        returnValue = F("Goldlauter-Heidersbach-Rundwanderweg");
        break;
    }
    case 118911:
    {
        returnValue = F("Goldlehrpfad");
        break;
    }
    case 118912:
    {
        returnValue = F("Goldleite");
        break;
    }
    case 118913:
    {
        returnValue = F("Goldloch");
        break;
    }
    case 118914:
    {
        returnValue = F("Goldlochweg");
        break;
    }
    case 118915:
    {
        returnValue = F("Goldmaasstr.");
        break;
    }
    case 118916:
    {
        returnValue = F("Goldmacherweg");
        break;
    }
    case 118917:
    {
        returnValue = F("Goldmann-Brücke");
        break;
    }
    case 118918:
    {
        returnValue = F("Goldmannstr.");
        break;
    }
    case 118919:
    {
        returnValue = F("Goldmarienweg");
        break;
    }
    case 118920:
    {
        returnValue = F("Goldmarieweg");
        break;
    }
    case 118921:
    {
        returnValue = F("Goldmayerstr.");
        break;
    }
    case 118922:
    {
        returnValue = F("Goldmoorstr.");
        break;
    }
    case 118923:
    {
        returnValue = F("Goldmorgenstr.");
        break;
    }
    case 118924:
    {
        returnValue = F("Goldmorgenweg");
        break;
    }
    case 118925:
    {
        returnValue = F("Goldmühlestr.");
        break;
    }
    case 118926:
    {
        returnValue = F("Goldnesselweg");
        break;
    }
    case 118927:
    {
        returnValue = F("Goldparmänenweg");
        break;
    }
    case 118928:
    {
        returnValue = F("Goldpfad");
        break;
    }
    case 118929:
    {
        returnValue = F("Goldpohl");
        break;
    }
    case 118930:
    {
        returnValue = F("Goldrainstr.");
        break;
    }
    case 118931:
    {
        returnValue = F("Goldrautenweg");
        break;
    }
    case 118932:
    {
        returnValue = F("Goldregenbrink");
        break;
    }
    case 118933:
    {
        returnValue = F("Goldregenholz");
        break;
    }
    case 118934:
    {
        returnValue = F("Goldregenplatz");
        break;
    }
    case 118935:
    {
        returnValue = F("Goldregenstr.");
        break;
    }
    case 118936:
    {
        returnValue = F("Goldregenweg");
        break;
    }
    case 118937:
    {
        returnValue = F("Goldrenettenweg");
        break;
    }
    case 118938:
    {
        returnValue = F("Goldrutengang");
        break;
    }
    case 118939:
    {
        returnValue = F("Goldrutenstr.");
        break;
    }
    case 118940:
    {
        returnValue = F("Goldrutenweg");
        break;
    }
    case 118941:
    {
        returnValue = F("Goldrändchen");
        break;
    }
    case 118942:
    {
        returnValue = F("Goldsbachweg");
        break;
    }
    case 118943:
    {
        returnValue = F("Goldsbergstr.");
        break;
    }
    case 118944:
    {
        returnValue = F("Goldschau");
        break;
    }
    case 118945:
    {
        returnValue = F("Goldscheuerstr.");
        break;
    }
    case 118946:
    {
        returnValue = F("Goldschlag");
        break;
    }
    case 118947:
    {
        returnValue = F("Goldschlägerstr.");
        break;
    }
    case 118948:
    {
        returnValue = F("Goldschmidtpark");
        break;
    }
    case 118949:
    {
        returnValue = F("Goldschmidtring");
        break;
    }
    case 118950:
    {
        returnValue = F("Goldschmidts-Park");
        break;
    }
    case 118951:
    {
        returnValue = F("Goldschmidtstr.");
        break;
    }
    case 118952:
    {
        returnValue = F("Goldschmidtweg");
        break;
    }
    case 118953:
    {
        returnValue = F("Goldschmiedebrücke");
        break;
    }
    case 118954:
    {
        returnValue = F("Goldschmiedenstr.");
        break;
    }
    case 118955:
    {
        returnValue = F("Goldschmiedeschulstr.");
        break;
    }
    case 118956:
    {
        returnValue = F("Goldschmiedesteg");
        break;
    }
    case 118957:
    {
        returnValue = F("Goldschmiedeweg");
        break;
    }
    case 118958:
    {
        returnValue = F("Goldschmiedgasse");
        break;
    }
    case 118959:
    {
        returnValue = F("Goldschmiedingstr.");
        break;
    }
    case 118960:
    {
        returnValue = F("Goldschmiedsborn");
        break;
    }
    case 118961:
    {
        returnValue = F("Goldschmiedssträßle");
        break;
    }
    case 118962:
    {
        returnValue = F("Goldschmiedstr.");
        break;
    }
    case 118963:
    {
        returnValue = F("Goldschmiedsweg");
        break;
    }
    case 118964:
    {
        returnValue = F("Goldschmiedweg");
        break;
    }
    case 118965:
    {
        returnValue = F("Goldschmittstr.");
        break;
    }
    case 118966:
    {
        returnValue = F("Goldshaldenstr.");
        break;
    }
    case 118967:
    {
        returnValue = F("Goldshofenstr.");
        break;
    }
    case 118968:
    {
        returnValue = F("Goldshöfe");
        break;
    }
    case 118969:
    {
        returnValue = F("Goldshöfer Bahnhof");
        break;
    }
    case 118970:
    {
        returnValue = F("Goldshöfer Str.");
        break;
    }
    case 118971:
    {
        returnValue = F("Goldsiepen");
        break;
    }
    case 118972:
    {
        returnValue = F("Goldspitze");
        break;
    }
    case 118973:
    {
        returnValue = F("Goldsteege");
        break;
    }
    case 118974:
    {
        returnValue = F("Goldsteig");
        break;
    }
    case 118975:
    {
        returnValue = F("Goldsteig / Themenwanderweg");
        break;
    }
    case 118976:
    {
        returnValue = F("Goldsteig Nordvariante");
        break;
    }
    case 118977:
    {
        returnValue = F("Goldsteinpark");
        break;
    }
    case 118978:
    {
        returnValue = F("Goldsteinstr.");
        break;
    }
    case 118979:
    {
        returnValue = F("Goldsteinweg");
        break;
    }
    case 118980:
    {
        returnValue = F("Goldsternstr.");
        break;
    }
    case 118981:
    {
        returnValue = F("Goldsternweg");
        break;
    }
    case 118982:
    {
        returnValue = F("Goldstr.");
        break;
    }
    case 118983:
    {
        returnValue = F("Goldtalstr.");
        break;
    }
    case 118984:
    {
        returnValue = F("Goldtimpen");
        break;
    }
    case 118985:
    {
        returnValue = F("Goldulmenstr.");
        break;
    }
    case 118986:
    {
        returnValue = F("Goldweg");
        break;
    }
    case 118987:
    {
        returnValue = F("Goldwies");
        break;
    }
    case 118988:
    {
        returnValue = F("Goldwiese");
        break;
    }
    case 118989:
    {
        returnValue = F("Goldwiesenstr.");
        break;
    }
    case 118990:
    {
        returnValue = F("Goldwiesenweg");
        break;
    }
    case 118991:
    {
        returnValue = F("Goldwinkel");
        break;
    }
    case 118992:
    {
        returnValue = F("Goldwitzerstr.");
        break;
    }
    case 118993:
    {
        returnValue = F("Goldwäscherstr.");
        break;
    }
    case 118994:
    {
        returnValue = F("Goldwäscherweg");
        break;
    }
    case 118995:
    {
        returnValue = F("Goldäcker");
        break;
    }
    case 118996:
    {
        returnValue = F("Goldäckerstr.");
        break;
    }
    case 118997:
    {
        returnValue = F("Goldäckerweg");
        break;
    }
    case 118998:
    {
        returnValue = F("Goldöschstr.");
        break;
    }
    case 118999:
    {
        returnValue = F("Golembek-Weg");
        break;
    }
    case 119000:
    {
        returnValue = F("Goleszower Str.");
        break;
    }
    case 119001:
    {
        returnValue = F("Golf Club Teck");
        break;
    }
    case 119002:
    {
        returnValue = F("Golf-Abschläge");
        break;
    }
    case 119003:
    {
        returnValue = F("Golfcart Pfad");
        break;
    }
    case 119004:
    {
        returnValue = F("Golfparcours");
        break;
    }
    case 119005:
    {
        returnValue = F("Golfparkallee");
        break;
    }
    case 119006:
    {
        returnValue = F("Golfplatz");
        break;
    }
    case 119007:
    {
        returnValue = F("Golfplatz-Weg");
        break;
    }
    case 119008:
    {
        returnValue = F("Golfplatzstr.");
        break;
    }
    case 119009:
    {
        returnValue = F("Golfplatzwanderweg");
        break;
    }
    case 119010:
    {
        returnValue = F("Golfplatzweg");
        break;
    }
    case 119011:
    {
        returnValue = F("Golfstieg");
        break;
    }
    case 119012:
    {
        returnValue = F("Golfstr.");
        break;
    }
    case 119013:
    {
        returnValue = F("Golfweg");
        break;
    }
    case 119014:
    {
        returnValue = F("Golgatha");
        break;
    }
    case 119015:
    {
        returnValue = F("Goliathstr.");
        break;
    }
    case 119016:
    {
        returnValue = F("Golker Str.");
        break;
    }
    case 119017:
    {
        returnValue = F("Golkrather Bruch");
        break;
    }
    case 119018:
    {
        returnValue = F("Golkrather Str.");
        break;
    }
    case 119019:
    {
        returnValue = F("Gollachostheimer Weg");
        break;
    }
    case 119020:
    {
        returnValue = F("Gollachweg");
        break;
    }
    case 119021:
    {
        returnValue = F("Gollacker");
        break;
    }
    case 119022:
    {
        returnValue = F("Gollau");
        break;
    }
    case 119023:
    {
        returnValue = F("Gollauer Bergstr.");
        break;
    }
    case 119024:
    {
        returnValue = F("Gollauer Neue Str.");
        break;
    }
    case 119025:
    {
        returnValue = F("Gollauer Weg");
        break;
    }
    case 119026:
    {
        returnValue = F("Gollbergstr.");
        break;
    }
    case 119027:
    {
        returnValue = F("Gollellerstr.");
        break;
    }
    case 119028:
    {
        returnValue = F("Gollenberger Str.");
        break;
    }
    case 119029:
    {
        returnValue = F("Gollenberger Weg");
        break;
    }
    case 119030:
    {
        returnValue = F("Gollenbergstr.");
        break;
    }
    case 119031:
    {
        returnValue = F("Gollenhof");
        break;
    }
    case 119032:
    {
        returnValue = F("Gollenhofer Str.");
        break;
    }
    case 119033:
    {
        returnValue = F("Gollenhoferstr.");
        break;
    }
    case 119034:
    {
        returnValue = F("Gollenhofweg");
        break;
    }
    case 119035:
    {
        returnValue = F("Gollenholzweg");
        break;
    }
    case 119036:
    {
        returnValue = F("Gollensdorf");
        break;
    }
    case 119037:
    {
        returnValue = F("Gollenseifen");
        break;
    }
    case 119038:
    {
        returnValue = F("Gollenshausener Str.");
        break;
    }
    case 119039:
    {
        returnValue = F("Gollenstr.");
        break;
    }
    case 119040:
    {
        returnValue = F("Gollenäcker");
        break;
    }
    case 119041:
    {
        returnValue = F("Gollepark");
        break;
    }
    case 119042:
    {
        returnValue = F("Gollergarten");
        break;
    }
    case 119043:
    {
        returnValue = F("Gollern");
        break;
    }
    case 119044:
    {
        returnValue = F("Gollerner Weg");
        break;
    }
    case 119045:
    {
        returnValue = F("Gollersberg");
        break;
    }
    case 119046:
    {
        returnValue = F("Gollerweiher");
        break;
    }
    case 119047:
    {
        returnValue = F("Gollgarten");
        break;
    }
    case 119048:
    {
        returnValue = F("Golliner Dorfstr.");
        break;
    }
    case 119049:
    {
        returnValue = F("Golliner Str.");
        break;
    }
    case 119050:
    {
        returnValue = F("Gollinger Feld");
        break;
    }
    case 119051:
    {
        returnValue = F("Gollinger Str.");
        break;
    }
    case 119052:
    {
        returnValue = F("Gollinggäßchen");
        break;
    }
    case 119053:
    {
        returnValue = F("Gollingkreuter Weg");
        break;
    }
    case 119054:
    {
        returnValue = F("Gollingstr.");
        break;
    }
    case 119055:
    {
        returnValue = F("Gollmerstr.");
        break;
    }
    case 119056:
    {
        returnValue = F("Gollmich");
        break;
    }
    case 119057:
    {
        returnValue = F("Gollmitzer Str.");
        break;
    }
    case 119058:
    {
        returnValue = F("Gollmuthhäuser Str.");
        break;
    }
    case 119059:
    {
        returnValue = F("Gollnower Str.");
        break;
    }
    case 119060:
    {
        returnValue = F("Gollnowstr.");
        break;
    }
    case 119061:
    {
        returnValue = F("Gollwies");
        break;
    }
    case 119062:
    {
        returnValue = F("Gollwitz");
        break;
    }
    case 119063:
    {
        returnValue = F("Gollwitzer Dorfstr.");
        break;
    }
    case 119064:
    {
        returnValue = F("Gollwitzer Weg");
        break;
    }
    case 119065:
    {
        returnValue = F("Gollwitzerstr.");
        break;
    }
    case 119066:
    {
        returnValue = F("Gollwitzerweg");
        break;
    }
    case 119067:
    {
        returnValue = F("Golmbacher Str.");
        break;
    }
    case 119068:
    {
        returnValue = F("Golmckesgraben");
        break;
    }
    case 119069:
    {
        returnValue = F("Golmekeweg");
        break;
    }
    case 119070:
    {
        returnValue = F("Golmer Chaussee");
        break;
    }
    case 119071:
    {
        returnValue = F("Golmer Damm");
        break;
    }
    case 119072:
    {
        returnValue = F("Golmer Dorfstr.");
        break;
    }
    case 119073:
    {
        returnValue = F("Golmer Fichten");
        break;
    }
    case 119074:
    {
        returnValue = F("Golmer Str.");
        break;
    }
    case 119075:
    {
        returnValue = F("Golmer Weg");
        break;
    }
    case 119076:
    {
        returnValue = F("Golmsdorfer Str.");
        break;
    }
    case 119077:
    {
        returnValue = F("Golmweg");
        break;
    }
    case 119078:
    {
        returnValue = F("Golnerstr.");
        break;
    }
    case 119079:
    {
        returnValue = F("Golo-Mann-Str.");
        break;
    }
    case 119080:
    {
        returnValue = F("Golocher Weg");
        break;
    }
    case 119081:
    {
        returnValue = F("Golostr.");
        break;
    }
    case 119082:
    {
        returnValue = F("Golpaer Str.");
        break;
    }
    case 119083:
    {
        returnValue = F("Golster Str.");
        break;
    }
    case 119084:
    {
        returnValue = F("Goltenkamp");
        break;
    }
    case 119085:
    {
        returnValue = F("Goltermannstr.");
        break;
    }
    case 119086:
    {
        returnValue = F("Golterner Str.");
        break;
    }
    case 119087:
    {
        returnValue = F("Golterstr.");
        break;
    }
    case 119088:
    {
        returnValue = F("Goltewitzer Str.");
        break;
    }
    case 119089:
    {
        returnValue = F("Goltsteinstr.");
        break;
    }
    case 119090:
    {
        returnValue = F("Goltzenburg");
        break;
    }
    case 119091:
    {
        returnValue = F("Goltzschaer Str.");
        break;
    }
    case 119092:
    {
        returnValue = F("Goltzstr.");
        break;
    }
    case 119093:
    {
        returnValue = F("Golzener Bahnhofstr.");
        break;
    }
    case 119094:
    {
        returnValue = F("Golzener Str.");
        break;
    }
    case 119095:
    {
        returnValue = F("Golzener Weg");
        break;
    }
    case 119096:
    {
        returnValue = F("Golzerner Str.");
        break;
    }
    case 119097:
    {
        returnValue = F("Golzheimer Str.");
        break;
    }
    case 119098:
    {
        returnValue = F("Golzheimer Weg");
        break;
    }
    case 119099:
    {
        returnValue = F("Golzower Ende");
        break;
    }
    case 119100:
    {
        returnValue = F("Golzower Str.");
        break;
    }
    case 119101:
    {
        returnValue = F("Golzower Weg");
        break;
    }
    case 119102:
    {
        returnValue = F("Golzwarder Str.");
        break;
    }
    case 119103:
    {
        returnValue = F("Golßener Str.");
        break;
    }
    case 119104:
    {
        returnValue = F("Gomadinger Str.");
        break;
    }
    case 119105:
    {
        returnValue = F("Gomaringer Str.");
        break;
    }
    case 119106:
    {
        returnValue = F("Gombertsgasse");
        break;
    }
    case 119107:
    {
        returnValue = F("Gombether Str.");
        break;
    }
    case 119108:
    {
        returnValue = F("Gombsener Str.");
        break;
    }
    case 119109:
    {
        returnValue = F("Gomfritz");
        break;
    }
    case 119110:
    {
        returnValue = F("Gommeraner Str.");
        break;
    }
    case 119111:
    {
        returnValue = F("Gommernstr.");
        break;
    }
    case 119112:
    {
        returnValue = F("Gommersberger Str.");
        break;
    }
    case 119113:
    {
        returnValue = F("Gommerscheider Str.");
        break;
    }
    case 119114:
    {
        returnValue = F("Gommersdorfer Str.");
        break;
    }
    case 119115:
    {
        returnValue = F("Gommersdorfer Weg");
        break;
    }
    case 119116:
    {
        returnValue = F("Gommersheimer Str.");
        break;
    }
    case 119117:
    {
        returnValue = F("Gommersheimer Weg");
        break;
    }
    case 119118:
    {
        returnValue = F("Gommershoven");
        break;
    }
    case 119119:
    {
        returnValue = F("Gommershovener Weg");
        break;
    }
    case 119120:
    {
        returnValue = F("Gommerstedter Gasse");
        break;
    }
    case 119121:
    {
        returnValue = F("Gommerstiege");
        break;
    }
    case 119122:
    {
        returnValue = F("Gommersweg");
        break;
    }
    case 119123:
    {
        returnValue = F("Gommertweg");
        break;
    }
    case 119124:
    {
        returnValue = F("Gommlaer Berg");
        break;
    }
    case 119125:
    {
        returnValue = F("Gommlaer Weg");
        break;
    }
    case 119126:
    {
        returnValue = F("Gommlichstr.");
        break;
    }
    case 119127:
    {
        returnValue = F("Gommloer Str.");
        break;
    }
    case 119128:
    {
        returnValue = F("Gommsmühle");
        break;
    }
    case 119129:
    {
        returnValue = F("Gompertshäuser Str.");
        break;
    }
    case 119130:
    {
        returnValue = F("Gomstelstr.");
        break;
    }
    case 119131:
    {
        returnValue = F("Gonbacher Str.");
        break;
    }
    case 119132:
    {
        returnValue = F("Gondeldamm");
        break;
    }
    case 119133:
    {
        returnValue = F("Gondelsheimer Str.");
        break;
    }
    case 119134:
    {
        returnValue = F("Gondelstation Stadt Zwickau");
        break;
    }
    case 119135:
    {
        returnValue = F("Gondenbretter Weg");
        break;
    }
    case 119136:
    {
        returnValue = F("Gondolfstr.");
        break;
    }
    case 119137:
    {
        returnValue = F("Gondorfer Str.");
        break;
    }
    case 119138:
    {
        returnValue = F("Gondorfstr.");
        break;
    }
    case 119139:
    {
        returnValue = F("Gondsrother Str.");
        break;
    }
    case 119140:
    {
        returnValue = F("Gonellastr.");
        break;
    }
    case 119141:
    {
        returnValue = F("Gonfrevillestr.");
        break;
    }
    case 119142:
    {
        returnValue = F("Gongacker");
        break;
    }
    case 119143:
    {
        returnValue = F("Gonheide");
        break;
    }
    case 119144:
    {
        returnValue = F("Gonnaer Hauptstr.");
        break;
    }
    case 119145:
    {
        returnValue = F("Gonnatalstr.");
        break;
    }
    case 119146:
    {
        returnValue = F("Gonnaufer");
        break;
    }
    case 119147:
    {
        returnValue = F("Gonnersdorf");
        break;
    }
    case 119148:
    {
        returnValue = F("Gonnersdorfer Weg");
        break;
    }
    case 119149:
    {
        returnValue = F("Gonsbachblick");
        break;
    }
    case 119150:
    {
        returnValue = F("Gonsbachgärten");
        break;
    }
    case 119151:
    {
        returnValue = F("Gonsbachstr.");
        break;
    }
    case 119152:
    {
        returnValue = F("Gonsenheimer Höhe");
        break;
    }
    case 119153:
    {
        returnValue = F("Gonsenheimer Str.");
        break;
    }
    case 119154:
    {
        returnValue = F("Gonseweg");
        break;
    }
    case 119155:
    {
        returnValue = F("Gonsstr.");
        break;
    }
    case 119156:
    {
        returnValue = F("Gontardstr.");
        break;
    }
    case 119157:
    {
        returnValue = F("Gontermannstr.");
        break;
    }
    case 119158:
    {
        returnValue = F("Gontershäuser Str.");
        break;
    }
    case 119159:
    {
        returnValue = F("Gonterskirchener Str.");
        break;
    }
    case 119160:
    {
        returnValue = F("Gonzenheimer Landstr.");
        break;
    }
    case 119161:
    {
        returnValue = F("Goodyearstr.");
        break;
    }
    case 119162:
    {
        returnValue = F("Gooiker Platz");
        break;
    }
    case 119163:
    {
        returnValue = F("Goor");
        break;
    }
    case 119164:
    {
        returnValue = F("Goorackerweg");
        break;
    }
    case 119165:
    {
        returnValue = F("Goorbenden");
        break;
    }
    case 119166:
    {
        returnValue = F("Goorshof");
        break;
    }
    case 119167:
    {
        returnValue = F("Goorstiege");
        break;
    }
    case 119168:
    {
        returnValue = F("Goorstorfer Str.");
        break;
    }
    case 119169:
    {
        returnValue = F("Goorweg");
        break;
    }
    case 119170:
    {
        returnValue = F("Goos");
        break;
    }
    case 119171:
    {
        returnValue = F("Goosacker");
        break;
    }
    case 119172:
    {
        returnValue = F("Goosbarg");
        break;
    }
    case 119173:
    {
        returnValue = F("Goosdiek");
        break;
    }
    case 119174:
    {
        returnValue = F("Goosekamp");
        break;
    }
    case 119175:
    {
        returnValue = F("Goosemeerweg");
        break;
    }
    case 119176:
    {
        returnValue = F("Goosend");
        break;
    }
    case 119177:
    {
        returnValue = F("Goosestegge");
        break;
    }
    case 119178:
    {
        returnValue = F("Gooseweg");
        break;
    }
    case 119179:
    {
        returnValue = F("Gooseweide");
        break;
    }
    case 119180:
    {
        returnValue = F("Goosfeld");
        break;
    }
    case 119181:
    {
        returnValue = F("Goosgang");
        break;
    }
    case 119182:
    {
        returnValue = F("Goosgasse");
        break;
    }
    case 119183:
    {
        returnValue = F("Gooshalsweg");
        break;
    }
    case 119184:
    {
        returnValue = F("Goosherweg");
        break;
    }
    case 119185:
    {
        returnValue = F("Gooshoff");
        break;
    }
    case 119186:
    {
        returnValue = F("Goosholmer Weg");
        break;
    }
    case 119187:
    {
        returnValue = F("Goosholz");
        break;
    }
    case 119188:
    {
        returnValue = F("Goosholzer Str.");
        break;
    }
    case 119189:
    {
        returnValue = F("Gooshornweg");
        break;
    }
    case 119190:
    {
        returnValue = F("Gooshören");
        break;
    }
    case 119191:
    {
        returnValue = F("Gooskamp");
        break;
    }
    case 119192:
    {
        returnValue = F("Goosmannstr.");
        break;
    }
    case 119193:
    {
        returnValue = F("Goosmoortwiete");
        break;
    }
    case 119194:
    {
        returnValue = F("Goospool");
        break;
    }
    case 119195:
    {
        returnValue = F("Goosstraat");
        break;
    }
    case 119196:
    {
        returnValue = F("Goosstroot");
        break;
    }
    case 119197:
    {
        returnValue = F("Goosthöhe");
        break;
    }
    case 119198:
    {
        returnValue = F("Goosweg");
        break;
    }
    case 119199:
    {
        returnValue = F("Goppelner Hauptstr.");
        break;
    }
    case 119200:
    {
        returnValue = F("Goppelner Str.");
        break;
    }
    case 119201:
    {
        returnValue = F("Goppelsgasse");
        break;
    }
    case 119202:
    {
        returnValue = F("Goppelsstr.");
        break;
    }
    case 119203:
    {
        returnValue = F("Goppeltsriederstr.");
        break;
    }
    case 119204:
    {
        returnValue = F("Goppeltstr.");
        break;
    }
    case 119205:
    {
        returnValue = F("Goppertshofen");
        break;
    }
    case 119206:
    {
        returnValue = F("Goppertshofer Str.");
        break;
    }
    case 119207:
    {
        returnValue = F("Goppertshäusern");
        break;
    }
    case 119208:
    {
        returnValue = F("Goppertsweiler Halde");
        break;
    }
    case 119209:
    {
        returnValue = F("Gopplasgrün");
        break;
    }
    case 119210:
    {
        returnValue = F("Gopplasgrüner Str.");
        break;
    }
    case 119211:
    {
        returnValue = F("Goppoltsried");
        break;
    }
    case 119212:
    {
        returnValue = F("Gorackerweg");
        break;
    }
    case 119213:
    {
        returnValue = F("Gorbi Weg");
        break;
    }
    case 119214:
    {
        returnValue = F("Gorch-Fock-Kehre");
        break;
    }
    case 119215:
    {
        returnValue = F("Gorch-Fock-Platz");
        break;
    }
    case 119216:
    {
        returnValue = F("Gorch-Fock-Ring");
        break;
    }
    case 119217:
    {
        returnValue = F("Gorch-Fock-Str.");
        break;
    }
    case 119218:
    {
        returnValue = F("Gorch-Fock-Straat");
        break;
    }
    case 119219:
    {
        returnValue = F("Gorch-Fock-Weg");
        break;
    }
    case 119220:
    {
        returnValue = F("Gordener Str.");
        break;
    }
    case 119221:
    {
        returnValue = F("Gordener Weg");
        break;
    }
    case 119222:
    {
        returnValue = F("Gordenkamp");
        break;
    }
    case 119223:
    {
        returnValue = F("Gordenstraat");
        break;
    }
    case 119224:
    {
        returnValue = F("Gordian-Guckh-Str.");
        break;
    }
    case 119225:
    {
        returnValue = F("Gordian-Scherrich-Str.");
        break;
    }
    case 119226:
    {
        returnValue = F("Gordianusstr.");
        break;
    }
    case 119227:
    {
        returnValue = F("Gordulagasse");
        break;
    }
    case 119228:
    {
        returnValue = F("Goredsmattstr.");
        break;
    }
    case 119229:
    {
        returnValue = F("Goren");
        break;
    }
    case 119230:
    {
        returnValue = F("Gorenweg");
        break;
    }
    case 119231:
    {
        returnValue = F("Gorering");
        break;
    }
    case 119232:
    {
        returnValue = F("Gorettiweg");
        break;
    }
    case 119233:
    {
        returnValue = F("Gorfeldstr.");
        break;
    }
    case 119234:
    {
        returnValue = F("Gorgas Avenue");
        break;
    }
    case 119235:
    {
        returnValue = F("Gorgaster Chaussee");
        break;
    }
    case 119236:
    {
        returnValue = F("Gorgaster Str.");
        break;
    }
    case 119237:
    {
        returnValue = F("Gorgaster Weg");
        break;
    }
    case 119238:
    {
        returnValue = F("Gorgonzolaweg");
        break;
    }
    case 119239:
    {
        returnValue = F("Gorheimer Allee");
        break;
    }
    case 119240:
    {
        returnValue = F("Gorheimer Str.");
        break;
    }
    case 119241:
    {
        returnValue = F("Gori Geräumt");
        break;
    }
    case 119242:
    {
        returnValue = F("Gorigasse");
        break;
    }
    case 119243:
    {
        returnValue = F("Goristraßl");
        break;
    }
    case 119244:
    {
        returnValue = F("Goriweg");
        break;
    }
    case 119245:
    {
        returnValue = F("Gorki-Park");
        break;
    }
    case 119246:
    {
        returnValue = F("Gorkiring");
        break;
    }
    case 119247:
    {
        returnValue = F("Gorkistr.");
        break;
    }
    case 119248:
    {
        returnValue = F("Gorkiweg");
        break;
    }
    case 119249:
    {
        returnValue = F("Gorknitzer Str.");
        break;
    }
    case 119250:
    {
        returnValue = F("Gorknitzer Weg");
        break;
    }
    case 119251:
    {
        returnValue = F("Gorkow");
        break;
    }
    case 119252:
    {
        returnValue = F("Gorkower Weg");
        break;
    }
    case 119253:
    {
        returnValue = F("Gorksstraat");
        break;
    }
    case 119254:
    {
        returnValue = F("Gorlebener Str.");
        break;
    }
    case 119255:
    {
        returnValue = F("Gorleber Bahn");
        break;
    }
    case 119256:
    {
        returnValue = F("Gorlecke");
        break;
    }
    case 119257:
    {
        returnValue = F("Gormaer Str.");
        break;
    }
    case 119258:
    {
        returnValue = F("Gormweg");
        break;
    }
    case 119259:
    {
        returnValue = F("Gornbusch");
        break;
    }
    case 119260:
    {
        returnValue = F("Gorndorfer Anger");
        break;
    }
    case 119261:
    {
        returnValue = F("Gorndorfer Str.");
        break;
    }
    case 119262:
    {
        returnValue = F("Gornerstr.");
        break;
    }
    case 119263:
    {
        returnValue = F("Gornewitz");
        break;
    }
    case 119264:
    {
        returnValue = F("Gornewitzer Str.");
        break;
    }
    case 119265:
    {
        returnValue = F("Gornhausener Weg");
        break;
    }
    case 119266:
    {
        returnValue = F("Gornhofener Str.");
        break;
    }
    case 119267:
    {
        returnValue = F("Gornsdorfer Str.");
        break;
    }
    case 119268:
    {
        returnValue = F("Gornstr.");
        break;
    }
    case 119269:
    {
        returnValue = F("Gornöttenweg");
        break;
    }
    case 119270:
    {
        returnValue = F("Gorrenberg");
        break;
    }
    case 119271:
    {
        returnValue = F("Gorreweg");
        break;
    }
    case 119272:
    {
        returnValue = F("Gorroner Platz");
        break;
    }
    case 119273:
    {
        returnValue = F("Gorsbachweg");
        break;
    }
    case 119274:
    {
        returnValue = F("Gorschmitz");
        break;
    }
    case 119275:
    {
        returnValue = F("Gorschmitzer Gasse");
        break;
    }
    case 119276:
    {
        returnValue = F("Gorschmitzer Weg");
        break;
    }
    case 119277:
    {
        returnValue = F("Gorslebener Hauptstr.");
        break;
    }
    case 119278:
    {
        returnValue = F("Gorslebener Weg");
        break;
    }
    case 119279:
    {
        returnValue = F("Gorsleber Weg");
        break;
    }
    case 119280:
    {
        returnValue = F("Gorsper Höfe");
        break;
    }
    case 119281:
    {
        returnValue = F("Gorsper Str.");
        break;
    }
    case 119282:
    {
        returnValue = F("Gortzer Dorfstr.");
        break;
    }
    case 119283:
    {
        returnValue = F("Gortzer Str.");
        break;
    }
    case 119284:
    {
        returnValue = F("Gortzer Weg");
        break;
    }
    case 119285:
    {
        returnValue = F("Gorxheimer Talstr.");
        break;
    }
    case 119286:
    {
        returnValue = F("Gorxheimer Weg");
        break;
    }
    case 119287:
    {
        returnValue = F("Gorzer Weg");
        break;
    }
    case 119288:
    {
        returnValue = F("Gosbacher Str.");
        break;
    }
    case 119289:
    {
        returnValue = F("Gosbarg");
        break;
    }
    case 119290:
    {
        returnValue = F("Gosbecke");
        break;
    }
    case 119291:
    {
        returnValue = F("Gosberger Str.");
        break;
    }
    case 119292:
    {
        returnValue = F("Gosbertsteige");
        break;
    }
    case 119293:
    {
        returnValue = F("Gosbertstr.");
        break;
    }
    case 119294:
    {
        returnValue = F("Goschenstr.");
        break;
    }
    case 119295:
    {
        returnValue = F("Goschentor");
        break;
    }
    case 119296:
    {
        returnValue = F("Goschmeersweg");
        break;
    }
    case 119297:
    {
        returnValue = F("Goschotte");
        break;
    }
    case 119298:
    {
        returnValue = F("Goschwitzstr.");
        break;
    }
    case 119299:
    {
        returnValue = F("Gosdaer Str.");
        break;
    }
    case 119300:
    {
        returnValue = F("Gosdaer Weg");
        break;
    }
    case 119301:
    {
        returnValue = F("Goseberg");
        break;
    }
    case 119302:
    {
        returnValue = F("Gosebrede");
        break;
    }
    case 119303:
    {
        returnValue = F("Gosebrinks Eck");
        break;
    }
    case 119304:
    {
        returnValue = F("Gosebruch");
        break;
    }
    case 119305:
    {
        returnValue = F("Goseburg");
        break;
    }
    case 119306:
    {
        returnValue = F("Goseburgstr.");
        break;
    }
    case 119307:
    {
        returnValue = F("Gosecker Str.");
        break;
    }
    case 119308:
    {
        returnValue = F("Gosecker Weg");
        break;
    }
    case 119309:
    {
        returnValue = F("Gosehus");
        break;
    }
    case 119310:
    {
        returnValue = F("Gosekamp");
        break;
    }
    case 119311:
    {
        returnValue = F("Gosel");
        break;
    }
    case 119312:
    {
        returnValue = F("Goselake");
        break;
    }
    case 119313:
    {
        returnValue = F("Gosemark");
        break;
    }
    case 119314:
    {
        returnValue = F("Gosemühlenweg");
        break;
    }
    case 119315:
    {
        returnValue = F("Gosenbacher Hütte");
        break;
    }
    case 119316:
    {
        returnValue = F("Gosenbacher Str.");
        break;
    }
    case 119317:
    {
        returnValue = F("Gosener Str.");
        break;
    }
    case 119318:
    {
        returnValue = F("Gosengasse");
        break;
    }
    case 119319:
    {
        returnValue = F("Gosenkamp");
        break;
    }
    case 119320:
    {
        returnValue = F("Gosenstr.");
        break;
    }
    case 119321:
    {
        returnValue = F("Gosenweg");
        break;
    }
    case 119322:
    {
        returnValue = F("Gosepathweg");
        break;
    }
    case 119323:
    {
        returnValue = F("Goseriede");
        break;
    }
    case 119324:
    {
        returnValue = F("Gosestr.");
        break;
    }
    case 119325:
    {
        returnValue = F("Goseweg");
        break;
    }
    case 119326:
    {
        returnValue = F("Gosewehr");
        break;
    }
    case 119327:
    {
        returnValue = F("Gosewende");
        break;
    }
    case 119328:
    {
        returnValue = F("Gosewinkel");
        break;
    }
    case 119329:
    {
        returnValue = F("Gosewinkler Weg");
        break;
    }
    case 119330:
    {
        returnValue = F("Gosewischs Garten");
        break;
    }
    case 119331:
    {
        returnValue = F("Gosewischstr.");
        break;
    }
    case 119332:
    {
        returnValue = F("Gosheimer Str.");
        break;
    }
    case 119333:
    {
        returnValue = F("Gosheimer Weg");
        break;
    }
    case 119334:
    {
        returnValue = F("Gosheimer-Bühl-Weg");
        break;
    }
    case 119335:
    {
        returnValue = F("Goshen-Ring");
        break;
    }
    case 119336:
    {
        returnValue = F("Goslareck");
        break;
    }
    case 119337:
    {
        returnValue = F("Goslarer Ring");
        break;
    }
    case 119338:
    {
        returnValue = F("Goslarer Stadtstieg");
        break;
    }
    case 119339:
    {
        returnValue = F("Goslarer Stadtweg");
        break;
    }
    case 119340:
    {
        returnValue = F("Goslarer Str.");
        break;
    }
    case 119341:
    {
        returnValue = F("Goslarsche Gleie");
        break;
    }
    case 119342:
    {
        returnValue = F("Goslarsche Heerstr.");
        break;
    }
    case 119343:
    {
        returnValue = F("Goslarsche Landstr.");
        break;
    }
    case 119344:
    {
        returnValue = F("Goslarsche Str.");
        break;
    }
    case 119345:
    {
        returnValue = F("Goslarscher Weg");
        break;
    }
    case 119346:
    {
        returnValue = F("Gosnell Avenue");
        break;
    }
    case 119347:
    {
        returnValue = F("Gospersgrün");
        break;
    }
    case 119348:
    {
        returnValue = F("Gospersgrüner Str.");
        break;
    }
    case 119349:
    {
        returnValue = F("Gospersgrüner Weg");
        break;
    }
    case 119350:
    {
        returnValue = F("Gosperter Str.");
        break;
    }
    case 119351:
    {
        returnValue = F("Gospiterodaer Str.");
        break;
    }
    case 119352:
    {
        returnValue = F("Gospoldshofer Str.");
        break;
    }
    case 119353:
    {
        returnValue = F("Gossaer Str.");
        break;
    }
    case 119354:
    {
        returnValue = F("Gossebacher Weg");
        break;
    }
    case 119355:
    {
        returnValue = F("Gosselding");
        break;
    }
    case 119356:
    {
        returnValue = F("Gosseler Str.");
        break;
    }
    case 119357:
    {
        returnValue = F("Gosseler Weg");
        break;
    }
    case 119358:
    {
        returnValue = F("Gosselsheimer Str.");
        break;
    }
    case 119359:
    {
        returnValue = F("Gossenberger Str.");
        break;
    }
    case 119360:
    {
        returnValue = F("Gossenbrodstr.");
        break;
    }
    case 119361:
    {
        returnValue = F("Gossenbrunnenweg");
        break;
    }
    case 119362:
    {
        returnValue = F("Gossenbusch");
        break;
    }
    case 119363:
    {
        returnValue = F("Gossengrüner Str.");
        break;
    }
    case 119364:
    {
        returnValue = F("Gossenhof");
        break;
    }
    case 119365:
    {
        returnValue = F("Gossenhöfe");
        break;
    }
    case 119366:
    {
        returnValue = F("Gossenreuth");
        break;
    }
    case 119367:
    {
        returnValue = F("Gossensdeich");
        break;
    }
    case 119368:
    {
        returnValue = F("Gossenstr.");
        break;
    }
    case 119369:
    {
        returnValue = F("Gossenweg");
        break;
    }
    case 119370:
    {
        returnValue = F("Gosser Berg");
        break;
    }
    case 119371:
    {
        returnValue = F("Gosserau");
        break;
    }
    case 119372:
    {
        returnValue = F("Gossersdorf");
        break;
    }
    case 119373:
    {
        returnValue = F("Gossestr.");
        break;
    }
    case 119374:
    {
        returnValue = F("Gosseweg");
        break;
    }
    case 119375:
    {
        returnValue = F("Gossgassl");
        break;
    }
    case 119376:
    {
        returnValue = F("Gossmannring");
        break;
    }
    case 119377:
    {
        returnValue = F("Gossnerweg");
        break;
    }
    case 119378:
    {
        returnValue = F("Gostauer Str.");
        break;
    }
    case 119379:
    {
        returnValue = F("Gostauer Weg");
        break;
    }
    case 119380:
    {
        returnValue = F("Gostemitzer Ring");
        break;
    }
    case 119381:
    {
        returnValue = F("Gostenhof");
        break;
    }
    case 119382:
    {
        returnValue = F("Gostenhofer Str.");
        break;
    }
    case 119383:
    {
        returnValue = F("Gostenhofgasse");
        break;
    }
    case 119384:
    {
        returnValue = F("Gosterstr.");
        break;
    }
    case 119385:
    {
        returnValue = F("Gostewitzer Str.");
        break;
    }
    case 119386:
    {
        returnValue = F("Gostewitzer Weg");
        break;
    }
    case 119387:
    {
        returnValue = F("Gosting");
        break;
    }
    case 119388:
    {
        returnValue = F("Gostyniner Str.");
        break;
    }
    case 119389:
    {
        returnValue = F("Goswin-Schönberg-Weg");
        break;
    }
    case 119390:
    {
        returnValue = F("Goswin-de-Nickel-Str.");
        break;
    }
    case 119391:
    {
        returnValue = F("Goswinstr.");
        break;
    }
    case 119392:
    {
        returnValue = F("Gotefridstr.");
        break;
    }
    case 119393:
    {
        returnValue = F("Gotelindstr.");
        break;
    }
    case 119394:
    {
        returnValue = F("Gotengasse");
        break;
    }
    case 119395:
    {
        returnValue = F("Gotenhof");
        break;
    }
    case 119396:
    {
        returnValue = F("Gotenring");
        break;
    }
    case 119397:
    {
        returnValue = F("Gotensteg");
        break;
    }
    case 119398:
    {
        returnValue = F("Gotenstr.");
        break;
    }
    case 119399:
    {
        returnValue = F("Gotenweg");
        break;
    }
    case 119400:
    {
        returnValue = F("Gothaer Chaussee");
        break;
    }
    case 119401:
    {
        returnValue = F("Gothaer Landstr.");
        break;
    }
    case 119402:
    {
        returnValue = F("Gothaer Ring");
        break;
    }
    case 119403:
    {
        returnValue = F("Gothaer Str.");
        break;
    }
    case 119404:
    {
        returnValue = F("Gothaer Tor");
        break;
    }
    case 119405:
    {
        returnValue = F("Gothaer Weg");
        break;
    }
    case 119406:
    {
        returnValue = F("Gothardstr.");
        break;
    }
    case 119407:
    {
        returnValue = F("Gothastr.");
        break;
    }
    case 119408:
    {
        returnValue = F("Gothaweg");
        break;
    }
    case 119409:
    {
        returnValue = F("Gotheinstr.");
        break;
    }
    case 119410:
    {
        returnValue = F("Gothel");
        break;
    }
    case 119411:
    {
        returnValue = F("Gothendorfer Weg");
        break;
    }
    case 119412:
    {
        returnValue = F("Gothener Landweg");
        break;
    }
    case 119413:
    {
        returnValue = F("Gothensteinweg");
        break;
    }
    case 119414:
    {
        returnValue = F("Gothenweg");
        break;
    }
    case 119415:
    {
        returnValue = F("Gotherpfad");
        break;
    }
    case 119416:
    {
        returnValue = F("Gothische Brücke");
        break;
    }
    case 119417:
    {
        returnValue = F("Gotische Allee");
        break;
    }
    case 119418:
    {
        returnValue = F("Gotische Brücke");
        break;
    }
    case 119419:
    {
        returnValue = F("Gotjeweg");
        break;
    }
    case 119420:
    {
        returnValue = F("Gotlandstr.");
        break;
    }
    case 119421:
    {
        returnValue = F("Gotlandweg");
        break;
    }
    case 119422:
    {
        returnValue = F("Gotlandwinkel");
        break;
    }
    case 119423:
    {
        returnValue = F("Gottberger Dorfstr.");
        break;
    }
    case 119424:
    {
        returnValue = F("Gottbillstr.");
        break;
    }
    case 119425:
    {
        returnValue = F("Gottbrodweg");
        break;
    }
    case 119426:
    {
        returnValue = F("Gottelhof");
        break;
    }
    case 119427:
    {
        returnValue = F("Gottels");
        break;
    }
    case 119428:
    {
        returnValue = F("Gottengasse");
        break;
    }
    case 119429:
    {
        returnValue = F("Gottenheimer Str.");
        break;
    }
    case 119430:
    {
        returnValue = F("Gottenpfad");
        break;
    }
    case 119431:
    {
        returnValue = F("Gottenzer Anger");
        break;
    }
    case 119432:
    {
        returnValue = F("Gottenzer Str.");
        break;
    }
    case 119433:
    {
        returnValue = F("Gottenzer Weg");
        break;
    }
    case 119434:
    {
        returnValue = F("Gotter-Nes-Weg");
        break;
    }
    case 119435:
    {
        returnValue = F("Gotterbach");
        break;
    }
    case 119436:
    {
        returnValue = F("Gotterflur");
        break;
    }
    case 119437:
    {
        returnValue = F("Gottersche Str.");
        break;
    }
    case 119438:
    {
        returnValue = F("Gottersdorf");
        break;
    }
    case 119439:
    {
        returnValue = F("Gottersdorfer Weg");
        break;
    }
    case 119440:
    {
        returnValue = F("Gotterstr.");
        break;
    }
    case 119441:
    {
        returnValue = F("Gottes-Segen-Schacht-Str.");
        break;
    }
    case 119442:
    {
        returnValue = F("Gottesacker");
        break;
    }
    case 119443:
    {
        returnValue = F("Gottesacker-Pädel");
        break;
    }
    case 119444:
    {
        returnValue = F("Gottesackerallee");
        break;
    }
    case 119445:
    {
        returnValue = F("Gottesackerangerweg");
        break;
    }
    case 119446:
    {
        returnValue = F("Gottesackergasse");
        break;
    }
    case 119447:
    {
        returnValue = F("Gottesackerstr.");
        break;
    }
    case 119448:
    {
        returnValue = F("Gottesackerweg");
        break;
    }
    case 119449:
    {
        returnValue = F("Gottesaubachweg");
        break;
    }
    case 119450:
    {
        returnValue = F("Gottesauer Str.");
        break;
    }
    case 119451:
    {
        returnValue = F("Gottesberg");
        break;
    }
    case 119452:
    {
        returnValue = F("Gottesberger Str.");
        break;
    }
    case 119453:
    {
        returnValue = F("Gottesbergstr.");
        break;
    }
    case 119454:
    {
        returnValue = F("Gottesbergweg");
        break;
    }
    case 119455:
    {
        returnValue = F("Gottesbrücker Weg");
        break;
    }
    case 119456:
    {
        returnValue = F("Gottesforth");
        break;
    }
    case 119457:
    {
        returnValue = F("Gottesgab");
        break;
    }
    case 119458:
    {
        returnValue = F("Gottesgabe");
        break;
    }
    case 119459:
    {
        returnValue = F("Gottesgabener Str.");
        break;
    }
    case 119460:
    {
        returnValue = F("Gottesgarten");
        break;
    }
    case 119461:
    {
        returnValue = F("Gottesgelänge");
        break;
    }
    case 119462:
    {
        returnValue = F("Gottesgrüner Str.");
        break;
    }
    case 119463:
    {
        returnValue = F("Gotteshofener Park");
        break;
    }
    case 119464:
    {
        returnValue = F("Gotteshofner Str.");
        break;
    }
    case 119465:
    {
        returnValue = F("Gotteshütte");
        break;
    }
    case 119466:
    {
        returnValue = F("Gotteskamp");
        break;
    }
    case 119467:
    {
        returnValue = F("Gotteskoogdeich");
        break;
    }
    case 119468:
    {
        returnValue = F("Gotteskoogstr.");
        break;
    }
    case 119469:
    {
        returnValue = F("Gotteslager");
        break;
    }
    case 119470:
    {
        returnValue = F("Gottesnamengasse");
        break;
    }
    case 119471:
    {
        returnValue = F("Gottesort");
        break;
    }
    case 119472:
    {
        returnValue = F("Gottessegen");
        break;
    }
    case 119473:
    {
        returnValue = F("Gottestal");
        break;
    }
    case 119474:
    {
        returnValue = F("Gottesthaler Str.");
        break;
    }
    case 119475:
    {
        returnValue = F("Gottesweg");
        break;
    }
    case 119476:
    {
        returnValue = F("Gotteszeller Str.");
        break;
    }
    case 119477:
    {
        returnValue = F("Gotteszeller Weg");
        break;
    }
    case 119478:
    {
        returnValue = F("Gottesäckerstr.");
        break;
    }
    case 119479:
    {
        returnValue = F("Gottfried Linde");
        break;
    }
    case 119480:
    {
        returnValue = F("Gottfried Maier Weg");
        break;
    }
    case 119481:
    {
        returnValue = F("Gottfried-Angerer-Str.");
        break;
    }
    case 119482:
    {
        returnValue = F("Gottfried-Arnold-Str.");
        break;
    }
    case 119483:
    {
        returnValue = F("Gottfried-August-Bürger-Str.");
        break;
    }
    case 119484:
    {
        returnValue = F("Gottfried-Bauer-Str.");
        break;
    }
    case 119485:
    {
        returnValue = F("Gottfried-Beck-Ring");
        break;
    }
    case 119486:
    {
        returnValue = F("Gottfried-Benn-Steige");
        break;
    }
    case 119487:
    {
        returnValue = F("Gottfried-Benn-Str.");
        break;
    }
    case 119488:
    {
        returnValue = F("Gottfried-Benn-Weg");
        break;
    }
    case 119489:
    {
        returnValue = F("Gottfried-Benner-Weg");
        break;
    }
    case 119490:
    {
        returnValue = F("Gottfried-Beyenburg-Str.");
        break;
    }
    case 119491:
    {
        returnValue = F("Gottfried-Blendinger-Str.");
        break;
    }
    case 119492:
    {
        returnValue = F("Gottfried-Breuer-Str.");
        break;
    }
    case 119493:
    {
        returnValue = F("Gottfried-Buhr-Weg");
        break;
    }
    case 119494:
    {
        returnValue = F("Gottfried-Busse-Str.");
        break;
    }
    case 119495:
    {
        returnValue = F("Gottfried-Büren-Weg");
        break;
    }
    case 119496:
    {
        returnValue = F("Gottfried-Bürger-Str.");
        break;
    }
    case 119497:
    {
        returnValue = F("Gottfried-Corbach-Str.");
        break;
    }
    case 119498:
    {
        returnValue = F("Gottfried-Dachs-Str.");
        break;
    }
    case 119499:
    {
        returnValue = F("Gottfried-Dichtl-Str.");
        break;
    }
    case 119500:
    {
        returnValue = F("Gottfried-Disse-Str.");
        break;
    }
    case 119501:
    {
        returnValue = F("Gottfried-Dossing-Platz");
        break;
    }
    case 119502:
    {
        returnValue = F("Gottfried-Eißner-Str.");
        break;
    }
    case 119503:
    {
        returnValue = F("Gottfried-Erich-Rosenthal-Str.");
        break;
    }
    case 119504:
    {
        returnValue = F("Gottfried-Fessmann-Str.");
        break;
    }
    case 119505:
    {
        returnValue = F("Gottfried-Frank-Weg");
        break;
    }
    case 119506:
    {
        returnValue = F("Gottfried-Glanz-Str.");
        break;
    }
    case 119507:
    {
        returnValue = F("Gottfried-Graf-Weg");
        break;
    }
    case 119508:
    {
        returnValue = F("Gottfried-Greschbach-Str.");
        break;
    }
    case 119509:
    {
        returnValue = F("Gottfried-Gruber-Str.");
        break;
    }
    case 119510:
    {
        returnValue = F("Gottfried-Hart-Str.");
        break;
    }
    case 119511:
    {
        returnValue = F("Gottfried-Hausmann-Weg");
        break;
    }
    case 119512:
    {
        returnValue = F("Gottfried-Herder-Str.");
        break;
    }
    case 119513:
    {
        returnValue = F("Gottfried-Hesselmann-Platz");
        break;
    }
    case 119514:
    {
        returnValue = F("Gottfried-Jakob-Str.");
        break;
    }
    case 119515:
    {
        returnValue = F("Gottfried-Joos-Str.");
        break;
    }
    case 119516:
    {
        returnValue = F("Gottfried-Kaneel-Str.");
        break;
    }
    case 119517:
    {
        returnValue = F("Gottfried-Kapp-Str.");
        break;
    }
    case 119518:
    {
        returnValue = F("Gottfried-Kappen-Weg");
        break;
    }
    case 119519:
    {
        returnValue = F("Gottfried-Keller-Str.");
        break;
    }
    case 119520:
    {
        returnValue = F("Gottfried-Keller-Weg");
        break;
    }
    case 119521:
    {
        returnValue = F("Gottfried-Kiesow-Platz");
        break;
    }
    case 119522:
    {
        returnValue = F("Gottfried-Kinkel-Str.");
        break;
    }
    case 119523:
    {
        returnValue = F("Gottfried-Kittel-Weg");
        break;
    }
    case 119524:
    {
        returnValue = F("Gottfried-Kolditz-Weg");
        break;
    }
    case 119525:
    {
        returnValue = F("Gottfried-Kruß-Str.");
        break;
    }
    case 119526:
    {
        returnValue = F("Gottfried-Krönert-Steig");
        break;
    }
    case 119527:
    {
        returnValue = F("Gottfried-Krüger-Str.");
        break;
    }
    case 119528:
    {
        returnValue = F("Gottfried-Kölwel-Platz");
        break;
    }
    case 119529:
    {
        returnValue = F("Gottfried-Kölwel-Str.");
        break;
    }
    case 119530:
    {
        returnValue = F("Gottfried-Könzgen-Str.");
        break;
    }
    case 119531:
    {
        returnValue = F("Gottfried-Leibniz-Str.");
        break;
    }
    case 119532:
    {
        returnValue = F("Gottfried-Maier-Str.");
        break;
    }
    case 119533:
    {
        returnValue = F("Gottfried-Michael-Str.");
        break;
    }
    case 119534:
    {
        returnValue = F("Gottfried-Müller-Str.");
        break;
    }
    case 119535:
    {
        returnValue = F("Gottfried-Nadler-Str.");
        break;
    }
    case 119536:
    {
        returnValue = F("Gottfried-Neukam-Str.");
        break;
    }
    case 119537:
    {
        returnValue = F("Gottfried-Niermann-Str.");
        break;
    }
    case 119538:
    {
        returnValue = F("Gottfried-Pabst-von-Ohain-Str.");
        break;
    }
    case 119539:
    {
        returnValue = F("Gottfried-Piegler-Str.");
        break;
    }
    case 119540:
    {
        returnValue = F("Gottfried-Plaum-Str.");
        break;
    }
    case 119541:
    {
        returnValue = F("Gottfried-Polysius-Str.");
        break;
    }
    case 119542:
    {
        returnValue = F("Gottfried-Pressel-Weg");
        break;
    }
    case 119543:
    {
        returnValue = F("Gottfried-Renn-Weg");
        break;
    }
    case 119544:
    {
        returnValue = F("Gottfried-Resl-Weg");
        break;
    }
    case 119545:
    {
        returnValue = F("Gottfried-Richter-Str.");
        break;
    }
    case 119546:
    {
        returnValue = F("Gottfried-Salz-Str.");
        break;
    }
    case 119547:
    {
        returnValue = F("Gottfried-Schafbuch-Str.");
        break;
    }
    case 119548:
    {
        returnValue = F("Gottfried-Schaider-Str.");
        break;
    }
    case 119549:
    {
        returnValue = F("Gottfried-Schenker-Str.");
        break;
    }
    case 119550:
    {
        returnValue = F("Gottfried-Schmitz-Weg");
        break;
    }
    case 119551:
    {
        returnValue = F("Gottfried-Schneider-Str.");
        break;
    }
    case 119552:
    {
        returnValue = F("Gottfried-Schulz-Str.");
        break;
    }
    case 119553:
    {
        returnValue = F("Gottfried-Schäffer-Str.");
        break;
    }
    case 119554:
    {
        returnValue = F("Gottfried-Seibold-Str.");
        break;
    }
    case 119555:
    {
        returnValue = F("Gottfried-Semper-Weg");
        break;
    }
    case 119556:
    {
        returnValue = F("Gottfried-Silbermann-Str.");
        break;
    }
    case 119557:
    {
        returnValue = F("Gottfried-Smidt-Str.");
        break;
    }
    case 119558:
    {
        returnValue = F("Gottfried-Spranger-Str.");
        break;
    }
    case 119559:
    {
        returnValue = F("Gottfried-Stahl-Str.");
        break;
    }
    case 119560:
    {
        returnValue = F("Gottfried-Stahlschmidt-Str.");
        break;
    }
    case 119561:
    {
        returnValue = F("Gottfried-Stammler-Str.");
        break;
    }
    case 119562:
    {
        returnValue = F("Gottfried-Str.");
        break;
    }
    case 119563:
    {
        returnValue = F("Gottfried-Thielsen-Str.");
        break;
    }
    case 119564:
    {
        returnValue = F("Gottfried-Tulla-Str.");
        break;
    }
    case 119565:
    {
        returnValue = F("Gottfried-Ullrich-Str.");
        break;
    }
    case 119566:
    {
        returnValue = F("Gottfried-Wacker-Str.");
        break;
    }
    case 119567:
    {
        returnValue = F("Gottfried-Weber-Str.");
        break;
    }
    case 119568:
    {
        returnValue = F("Gottfried-Weigle-Str.");
        break;
    }
    case 119569:
    {
        returnValue = F("Gottfried-Werner-von-Zimmern-Str.");
        break;
    }
    case 119570:
    {
        returnValue = F("Gottfried-Wetzel-Str.");
        break;
    }
    case 119571:
    {
        returnValue = F("Gottfried-Wilhelm-Lehmann-Str.");
        break;
    }
    case 119572:
    {
        returnValue = F("Gottfried-Ziegler-Str.");
        break;
    }
    case 119573:
    {
        returnValue = F("Gottfried-von-Böhm-Weg");
        break;
    }
    case 119574:
    {
        returnValue = F("Gottfried-von-Cramm-Str.");
        break;
    }
    case 119575:
    {
        returnValue = F("Gottfried-von-Cramm-Weg");
        break;
    }
    case 119576:
    {
        returnValue = F("Gottfried-von-Herder-Str.");
        break;
    }
    case 119577:
    {
        returnValue = F("Gottfried-von-Herder-Weg");
        break;
    }
    case 119578:
    {
        returnValue = F("Gottfried-von-Reifenberg-Str.");
        break;
    }
    case 119579:
    {
        returnValue = F("Gottfried-von-Straßburg-Str.");
        break;
    }
    case 119580:
    {
        returnValue = F("Gottfriedinger Str.");
        break;
    }
    case 119581:
    {
        returnValue = F("Gottfriedstr.");
        break;
    }
    case 119582:
    {
        returnValue = F("Gottfriedweg");
        break;
    }
    case 119583:
    {
        returnValue = F("Gottgau");
        break;
    }
    case 119584:
    {
        returnValue = F("Gottgauer Str.");
        break;
    }
    case 119585:
    {
        returnValue = F("Gottgetreuer Weg");
        break;
    }
    case 119586:
    {
        returnValue = F("Gotthard-Bauer-Str.");
        break;
    }
    case 119587:
    {
        returnValue = F("Gotthard-Buchner-Str.");
        break;
    }
    case 119588:
    {
        returnValue = F("Gotthard-Heigl-Str.");
        break;
    }
    case 119589:
    {
        returnValue = F("Gotthard-Müller-Str.");
        break;
    }
    case 119590:
    {
        returnValue = F("Gotthard-Neumann-Str.");
        break;
    }
    case 119591:
    {
        returnValue = F("Gotthard-Schuler-Str.");
        break;
    }
    case 119592:
    {
        returnValue = F("Gotthard-Schüll-Str.");
        break;
    }
    case 119593:
    {
        returnValue = F("Gotthardser Str.");
        break;
    }
    case 119594:
    {
        returnValue = F("Gotthardstr.");
        break;
    }
    case 119595:
    {
        returnValue = F("Gotthardsweg");
        break;
    }
    case 119596:
    {
        returnValue = F("Gotthardtkirchplatz");
        break;
    }
    case 119597:
    {
        returnValue = F("Gotthardtwinkel");
        break;
    }
    case 119598:
    {
        returnValue = F("Gotthardusweg");
        break;
    }
    case 119599:
    {
        returnValue = F("Gotthardweg");
        break;
    }
    case 119600:
    {
        returnValue = F("Gotthelf-Greiner-Str.");
        break;
    }
    case 119601:
    {
        returnValue = F("Gotthelf-Leimbach-Str.");
        break;
    }
    case 119602:
    {
        returnValue = F("Gotthelf-Mey-Str.");
        break;
    }
    case 119603:
    {
        returnValue = F("Gotthelfstr.");
        break;
    }
    case 119604:
    {
        returnValue = F("Gotthilf-Bay-Weg");
        break;
    }
    case 119605:
    {
        returnValue = F("Gotthilf-Bayh-Str.");
        break;
    }
    case 119606:
    {
        returnValue = F("Gotthilf-Dorn-Str.");
        break;
    }
    case 119607:
    {
        returnValue = F("Gotthilf-Salzmann-Str.");
        break;
    }
    case 119608:
    {
        returnValue = F("Gotthilf-Volzer-Weg");
        break;
    }
    case 119609:
    {
        returnValue = F("Gotthilf-Weeber-Weg");
        break;
    }
    case 119610:
    {
        returnValue = F("Gotthilf-Wolf-Str.");
        break;
    }
    case 119611:
    {
        returnValue = F("Gotthold");
        break;
    }
    case 119612:
    {
        returnValue = F("Gotthold-Ege-Str.");
        break;
    }
    case 119613:
    {
        returnValue = F("Gotthold-Ephraim-Lessing-Str.");
        break;
    }
    case 119614:
    {
        returnValue = F("Gotthold-Fischer-Str.");
        break;
    }
    case 119615:
    {
        returnValue = F("Gotthold-Kindler-Str.");
        break;
    }
    case 119616:
    {
        returnValue = F("Gotthold-Lessing-Str.");
        break;
    }
    case 119617:
    {
        returnValue = F("Gotthold-Roth-Str.");
        break;
    }
    case 119618:
    {
        returnValue = F("Gotthold-Schlusser-Weg");
        break;
    }
    case 119619:
    {
        returnValue = F("Gotthold-Schwela-Str.");
        break;
    }
    case 119620:
    {
        returnValue = F("Gotthold-Stettner-Weg");
        break;
    }
    case 119621:
    {
        returnValue = F("Gottholdseck");
        break;
    }
    case 119622:
    {
        returnValue = F("Gottholdstr.");
        break;
    }
    case 119623:
    {
        returnValue = F("Gotthunskamp");
        break;
    }
    case 119624:
    {
        returnValue = F("Gottiner Weg");
        break;
    }
    case 119625:
    {
        returnValue = F("Gottinger Str.");
        break;
    }
    case 119626:
    {
        returnValue = F("Gottjes Drenk");
        break;
    }
    case 119627:
    {
        returnValue = F("Gottkenweg");
        break;
    }
    case 119628:
    {
        returnValue = F("Gottleubaer Str.");
        break;
    }
    case 119629:
    {
        returnValue = F("Gottlieb-August-Richter-Weg");
        break;
    }
    case 119630:
    {
        returnValue = F("Gottlieb-Braun-Str.");
        break;
    }
    case 119631:
    {
        returnValue = F("Gottlieb-Buck-Weg");
        break;
    }
    case 119632:
    {
        returnValue = F("Gottlieb-Bögner-Str.");
        break;
    }
    case 119633:
    {
        returnValue = F("Gottlieb-Daimler-Brücke");
        break;
    }
    case 119634:
    {
        returnValue = F("Gottlieb-Daimler-Str.");
        break;
    }
    case 119635:
    {
        returnValue = F("Gottlieb-Dilger-Str.");
        break;
    }
    case 119636:
    {
        returnValue = F("Gottlieb-Drechsler-Str.");
        break;
    }
    case 119637:
    {
        returnValue = F("Gottlieb-Duttenhöfer-Str.");
        break;
    }
    case 119638:
    {
        returnValue = F("Gottlieb-Eisele-Str.");
        break;
    }
    case 119639:
    {
        returnValue = F("Gottlieb-Fecht-Str.");
        break;
    }
    case 119640:
    {
        returnValue = F("Gottlieb-Fichte-Str.");
        break;
    }
    case 119641:
    {
        returnValue = F("Gottlieb-Friedrich-Klopstock-Str.");
        break;
    }
    case 119642:
    {
        returnValue = F("Gottlieb-Genzmer-Str.");
        break;
    }
    case 119643:
    {
        returnValue = F("Gottlieb-Gnannt-Str.");
        break;
    }
    case 119644:
    {
        returnValue = F("Gottlieb-Gräf-Str.");
        break;
    }
    case 119645:
    {
        returnValue = F("Gottlieb-Guth-Str.");
        break;
    }
    case 119646:
    {
        returnValue = F("Gottlieb-Göz-Str.");
        break;
    }
    case 119647:
    {
        returnValue = F("Gottlieb-Harzer-Weg");
        break;
    }
    case 119648:
    {
        returnValue = F("Gottlieb-Haug-Str.");
        break;
    }
    case 119649:
    {
        returnValue = F("Gottlieb-Heinrich-Dietz-Str.");
        break;
    }
    case 119650:
    {
        returnValue = F("Gottlieb-Henssler-Str.");
        break;
    }
    case 119651:
    {
        returnValue = F("Gottlieb-Hess-Str.");
        break;
    }
    case 119652:
    {
        returnValue = F("Gottlieb-Holzwarth-Weg");
        break;
    }
    case 119653:
    {
        returnValue = F("Gottlieb-Härle-Str.");
        break;
    }
    case 119654:
    {
        returnValue = F("Gottlieb-Klumpp-Str.");
        break;
    }
    case 119655:
    {
        returnValue = F("Gottlieb-Klumpp-Weg");
        break;
    }
    case 119656:
    {
        returnValue = F("Gottlieb-Kurz-Weg");
        break;
    }
    case 119657:
    {
        returnValue = F("Gottlieb-Lenz-Str.");
        break;
    }
    case 119658:
    {
        returnValue = F("Gottlieb-Manz-Str.");
        break;
    }
    case 119659:
    {
        returnValue = F("Gottlieb-Mohnike-Weg");
        break;
    }
    case 119660:
    {
        returnValue = F("Gottlieb-Olpp-Str.");
        break;
    }
    case 119661:
    {
        returnValue = F("Gottlieb-Rau-Str.");
        break;
    }
    case 119662:
    {
        returnValue = F("Gottlieb-Sauer-Str.");
        break;
    }
    case 119663:
    {
        returnValue = F("Gottlieb-Schill-Weg");
        break;
    }
    case 119664:
    {
        returnValue = F("Gottlieb-Schmid-Str.");
        break;
    }
    case 119665:
    {
        returnValue = F("Gottlieb-Schulz-Str.");
        break;
    }
    case 119666:
    {
        returnValue = F("Gottlieb-Soeder-Weg");
        break;
    }
    case 119667:
    {
        returnValue = F("Gottlieb-Stoll-Str.");
        break;
    }
    case 119668:
    {
        returnValue = F("Gottlieb-Storz-Str.");
        break;
    }
    case 119669:
    {
        returnValue = F("Gottlieb-Thümmler-Weg");
        break;
    }
    case 119670:
    {
        returnValue = F("Gottlieb-Wagner-Str.");
        break;
    }
    case 119671:
    {
        returnValue = F("Gottlieb-Wenz-Str.");
        break;
    }
    case 119672:
    {
        returnValue = F("Gottlieb-Wolfer-Str.");
        break;
    }
    case 119673:
    {
        returnValue = F("Gottlieb-von-Langen-Str.");
        break;
    }
    case 119674:
    {
        returnValue = F("Gottliebenstr.");
        break;
    }
    case 119675:
    {
        returnValue = F("Gottlieber Str.");
        break;
    }
    case 119676:
    {
        returnValue = F("Gottlieber Weg");
        break;
    }
    case 119677:
    {
        returnValue = F("Gottliebin-Mayer-Str.");
        break;
    }
    case 119678:
    {
        returnValue = F("Gottliebsgasse");
        break;
    }
    case 119679:
    {
        returnValue = F("Gottliebstalstr.");
        break;
    }
    case 119680:
    {
        returnValue = F("Gottliebstr.");
        break;
    }
    case 119681:
    {
        returnValue = F("Gottliebweg");
        break;
    }
    case 119682:
    {
        returnValue = F("Gottlob-Ansel-Str.");
        break;
    }
    case 119683:
    {
        returnValue = F("Gottlob-Armbrust-Str.");
        break;
    }
    case 119684:
    {
        returnValue = F("Gottlob-Auwärter-Str.");
        break;
    }
    case 119685:
    {
        returnValue = F("Gottlob-Banzhaf-Str.");
        break;
    }
    case 119686:
    {
        returnValue = F("Gottlob-Bauknecht-Platz");
        break;
    }
    case 119687:
    {
        returnValue = F("Gottlob-Bauknecht-Str.");
        break;
    }
    case 119688:
    {
        returnValue = F("Gottlob-Beck-Str.");
        break;
    }
    case 119689:
    {
        returnValue = F("Gottlob-Braeuning-Str.");
        break;
    }
    case 119690:
    {
        returnValue = F("Gottlob-Egelhaaf-Ring");
        break;
    }
    case 119691:
    {
        returnValue = F("Gottlob-Ernst-Str.");
        break;
    }
    case 119692:
    {
        returnValue = F("Gottlob-Frick-Platz");
        break;
    }
    case 119693:
    {
        returnValue = F("Gottlob-Frick-Weg");
        break;
    }
    case 119694:
    {
        returnValue = F("Gottlob-Grotz-Str.");
        break;
    }
    case 119695:
    {
        returnValue = F("Gottlob-Günther-Str.");
        break;
    }
    case 119696:
    {
        returnValue = F("Gottlob-Hauser-Str.");
        break;
    }
    case 119697:
    {
        returnValue = F("Gottlob-Hees-Platz");
        break;
    }
    case 119698:
    {
        returnValue = F("Gottlob-Himmel-Str.");
        break;
    }
    case 119699:
    {
        returnValue = F("Gottlob-Honold-Str.");
        break;
    }
    case 119700:
    {
        returnValue = F("Gottlob-Hummel-Str.");
        break;
    }
    case 119701:
    {
        returnValue = F("Gottlob-Kamm-Str.");
        break;
    }
    case 119702:
    {
        returnValue = F("Gottlob-Keller-Str.");
        break;
    }
    case 119703:
    {
        returnValue = F("Gottlob-König-Str.");
        break;
    }
    case 119704:
    {
        returnValue = F("Gottlob-Lang-Weg");
        break;
    }
    case 119705:
    {
        returnValue = F("Gottlob-Linck-Str.");
        break;
    }
    case 119706:
    {
        returnValue = F("Gottlob-Link-Weg");
        break;
    }
    case 119707:
    {
        returnValue = F("Gottlob-Molt-Str.");
        break;
    }
    case 119708:
    {
        returnValue = F("Gottlob-Mutz-Str.");
        break;
    }
    case 119709:
    {
        returnValue = F("Gottlob-Müller-Str.");
        break;
    }
    case 119710:
    {
        returnValue = F("Gottlob-Obenland-Str.");
        break;
    }
    case 119711:
    {
        returnValue = F("Gottlob-Pfander-Weg");
        break;
    }
    case 119712:
    {
        returnValue = F("Gottlob-Rau-Str.");
        break;
    }
    case 119713:
    {
        returnValue = F("Gottlob-Schneider-Str.");
        break;
    }
    case 119714:
    {
        returnValue = F("Gottlob-Spiess-Str.");
        break;
    }
    case 119715:
    {
        returnValue = F("Gottlob-Steinmetz-Str.");
        break;
    }
    case 119716:
    {
        returnValue = F("Gottlob-Stierle-Str.");
        break;
    }
    case 119717:
    {
        returnValue = F("Gottlob-Wagner-Str.");
        break;
    }
    case 119718:
    {
        returnValue = F("Gottlob-Weiler-Str.");
        break;
    }
    case 119719:
    {
        returnValue = F("Gottlobsbach");
        break;
    }
    case 119720:
    {
        returnValue = F("Gottlobsweg");
        break;
    }
    case 119721:
    {
        returnValue = F("Gottmadinger Str.");
        break;
    }
    case 119722:
    {
        returnValue = F("Gottmannsberg");
        break;
    }
    case 119723:
    {
        returnValue = F("Gottmannsdorf");
        break;
    }
    case 119724:
    {
        returnValue = F("Gottmannsdorfer Str.");
        break;
    }
    case 119725:
    {
        returnValue = F("Gottmannsdorfer Weg");
        break;
    }
    case 119726:
    {
        returnValue = F("Gottmannsgasse");
        break;
    }
    case 119727:
    {
        returnValue = F("Gottmannshofer Str.");
        break;
    }
    case 119728:
    {
        returnValue = F("Gottmatt");
        break;
    }
    case 119729:
    {
        returnValue = F("Gottmecke");
        break;
    }
    case 119730:
    {
        returnValue = F("Gottmecker Weg");
        break;
    }
    case 119731:
    {
        returnValue = F("Gottorfer Damm");
        break;
    }
    case 119732:
    {
        returnValue = F("Gottorfstr.");
        break;
    }
    case 119733:
    {
        returnValue = F("Gottorpstr.");
        break;
    }
    case 119734:
    {
        returnValue = F("Gottower Chaussee");
        break;
    }
    case 119735:
    {
        returnValue = F("Gottower Str.");
        break;
    }
    case 119736:
    {
        returnValue = F("Gottower Weg");
        break;
    }
    case 119737:
    {
        returnValue = F("Gottrazhofen");
        break;
    }
    case 119738:
    {
        returnValue = F("Gottsacker");
        break;
    }
    case 119739:
    {
        returnValue = F("Gottsackerweg");
        break;
    }
    case 119740:
    {
        returnValue = F("Gottsackerwegli");
        break;
    }
    case 119741:
    {
        returnValue = F("Gottsberg");
        break;
    }
    case 119742:
    {
        returnValue = F("Gottsbürener Str.");
        break;
    }
    case 119743:
    {
        returnValue = F("Gottschaldstr.");
        break;
    }
    case 119744:
    {
        returnValue = F("Gottschaldweg");
        break;
    }
    case 119745:
    {
        returnValue = F("Gottschalk");
        break;
    }
    case 119746:
    {
        returnValue = F("Gottschalkenstr.");
        break;
    }
    case 119747:
    {
        returnValue = F("Gottschalksmühlenweg");
        break;
    }
    case 119748:
    {
        returnValue = F("Gottschalkstr.");
        break;
    }
    case 119749:
    {
        returnValue = F("Gottschalkweg");
        break;
    }
    case 119750:
    {
        returnValue = F("Gottschalling");
        break;
    }
    case 119751:
    {
        returnValue = F("Gottschallinger Str.");
        break;
    }
    case 119752:
    {
        returnValue = F("Gottschedstr.");
        break;
    }
    case 119753:
    {
        returnValue = F("Gottscheer Str.");
        break;
    }
    case 119754:
    {
        returnValue = F("Gottscheinaer Str.");
        break;
    }
    case 119755:
    {
        returnValue = F("Gottscheinaer Weg");
        break;
    }
    case 119756:
    {
        returnValue = F("Gottschower Dorfstr.");
        break;
    }
    case 119757:
    {
        returnValue = F("Gottsdorfer Str.");
        break;
    }
    case 119758:
    {
        returnValue = F("Gottsdorfer Weg");
        break;
    }
    case 119759:
    {
        returnValue = F("Gottsfelder Str.");
        break;
    }
    case 119760:
    {
        returnValue = F("Gottsmannsgrüner Weg");
        break;
    }
    case 119761:
    {
        returnValue = F("Gottsmannstr.");
        break;
    }
    case 119762:
    {
        returnValue = F("Gottstreu, Mitte");
        break;
    }
    case 119763:
    {
        returnValue = F("Gottstreuer Str.");
        break;
    }
    case 119764:
    {
        returnValue = F("Gottswaldstr.");
        break;
    }
    case 119765:
    {
        returnValue = F("Gottvaterberg");
        break;
    }
    case 119766:
    {
        returnValue = F("Gottwaldmühle");
        break;
    }
    case 119767:
    {
        returnValue = F("Gottwaldsgasse");
        break;
    }
    case 119768:
    {
        returnValue = F("Gottwaldstr.");
        break;
    }
    case 119769:
    {
        returnValue = F("Gottwerthstr.");
        break;
    }
    case 119770:
    {
        returnValue = F("Gottwollshäuser Steige");
        break;
    }
    case 119771:
    {
        returnValue = F("Gotzbertstr.");
        break;
    }
    case 119772:
    {
        returnValue = F("Gotzenberger Str.");
        break;
    }
    case 119773:
    {
        returnValue = F("Gotzenberger Weg");
        break;
    }
    case 119774:
    {
        returnValue = F("Gotzendorf");
        break;
    }
    case 119775:
    {
        returnValue = F("Gotzenstr.");
        break;
    }
    case 119776:
    {
        returnValue = F("Gotzinger Str.");
        break;
    }
    case 119777:
    {
        returnValue = F("Gotzmannstr.");
        break;
    }
    case 119778:
    {
        returnValue = F("Gouleypark");
        break;
    }
    case 119779:
    {
        returnValue = F("Gouleystr.");
        break;
    }
    case 119780:
    {
        returnValue = F("Gouvereur- Hahl- Platz");
        break;
    }
    case 119781:
    {
        returnValue = F("Gouvernementsberg");
        break;
    }
    case 119782:
    {
        returnValue = F("Gouverneurstr.");
        break;
    }
    case 119783:
    {
        returnValue = F("Gouvieuxstr.");
        break;
    }
    case 119784:
    {
        returnValue = F("Gouvy-Platz");
        break;
    }
    case 119785:
    {
        returnValue = F("Govelin");
        break;
    }
    case 119786:
    {
        returnValue = F("Gowenser Str.");
        break;
    }
    case 119787:
    {
        returnValue = F("Gowenser Weg");
        break;
    }
    case 119788:
    {
        returnValue = F("Gowische Park");
        break;
    }
    case 119789:
    {
        returnValue = F("Goxel");
        break;
    }
    case 119790:
    {
        returnValue = F("Goyastr.");
        break;
    }
    case 119791:
    {
        returnValue = F("Goyatzer Str.");
        break;
    }
    case 119792:
    {
        returnValue = F("Goylagrabenweg");
        break;
    }
    case 119793:
    {
        returnValue = F("Gozboldstr.");
        break;
    }
    case 119794:
    {
        returnValue = F("Gozmarstr.");
        break;
    }
    case 119795:
    {
        returnValue = F("Gozratstr.");
        break;
    }
    case 119796:
    {
        returnValue = F("Gozzoltstr.");
        break;
    }
    case 119797:
    {
        returnValue = F("Goßacker");
        break;
    }
    case 119798:
    {
        returnValue = F("Goßbachstr.");
        break;
    }
    case 119799:
    {
        returnValue = F("Goßberger Str.");
        break;
    }
    case 119800:
    {
        returnValue = F("Goßbergstr.");
        break;
    }
    case 119801:
    {
        returnValue = F("Goßbitze");
        break;
    }
    case 119802:
    {
        returnValue = F("Goßborngasse");
        break;
    }
    case 119803:
    {
        returnValue = F("Goßbrechtstr.");
        break;
    }
    case 119804:
    {
        returnValue = F("Goßenforchstr.");
        break;
    }
    case 119805:
    {
        returnValue = F("Goßfeldener Allee");
        break;
    }
    case 119806:
    {
        returnValue = F("Goßfeldener Str.");
        break;
    }
    case 119807:
    {
        returnValue = F("Goßfeldener Weg");
        break;
    }
    case 119808:
    {
        returnValue = F("Goßholz");
        break;
    }
    case 119809:
    {
        returnValue = F("Goßholzer Str.");
        break;
    }
    case 119810:
    {
        returnValue = F("Goßlerstr.");
        break;
    }
    case 119811:
    {
        returnValue = F("Goßlerweg");
        break;
    }
    case 119812:
    {
        returnValue = F("Goßmaning");
        break;
    }
    case 119813:
    {
        returnValue = F("Goßmannsdorfer Str.");
        break;
    }
    case 119814:
    {
        returnValue = F("Goßmannsroder Str.");
        break;
    }
    case 119815:
    {
        returnValue = F("Goßmannsröder Str.");
        break;
    }
    case 119816:
    {
        returnValue = F("Goßmar");
        break;
    }
    case 119817:
    {
        returnValue = F("Goßmarer Str.");
        break;
    }
    case 119818:
    {
        returnValue = F("Goßnerhalde");
        break;
    }
    case 119819:
    {
        returnValue = F("Goßraer Forststr.");
        break;
    }
    case 119820:
    {
        returnValue = F("Goßweg");
        break;
    }
    case 119821:
    {
        returnValue = F("Goßweilerstr.");
        break;
    }
    case 119822:
    {
        returnValue = F("Goßwitz");
        break;
    }
    case 119823:
    {
        returnValue = F("Goßwitzer Str.");
        break;
    }
    case 119824:
    {
        returnValue = F("Goßwitzer Weg");
        break;
    }
    case 119825:
    {
        returnValue = F("Gr");
        break;
    }
    case 119826:
    {
        returnValue = F("Gr. Pretzier");
        break;
    }
    case 119827:
    {
        returnValue = F("Gr. Rabental");
        break;
    }
    case 119828:
    {
        returnValue = F("Graacher Str.");
        break;
    }
    case 119829:
    {
        returnValue = F("Graacher Weg");
        break;
    }
    case 119830:
    {
        returnValue = F("Graal-Müritzer Str.");
        break;
    }
    case 119831:
    {
        returnValue = F("Graal-Müritzer-Str.");
        break;
    }
    case 119832:
    {
        returnValue = F("Graaler Landweg");
        break;
    }
    case 119833:
    {
        returnValue = F("Graanesch");
        break;
    }
    case 119834:
    {
        returnValue = F("Grabaer Str.");
        break;
    }
    case 119835:
    {
        returnValue = F("Grabastr.");
        break;
    }
    case 119836:
    {
        returnValue = F("Grabauer Diek");
        break;
    }
    case 119837:
    {
        returnValue = F("Grabauer Str.");
        break;
    }
    case 119838:
    {
        returnValue = F("Grabbehof");
        break;
    }
    case 119839:
    {
        returnValue = F("Grabbengasse");
        break;
    }
    case 119840:
    {
        returnValue = F("Grabbenweg");
        break;
    }
    case 119841:
    {
        returnValue = F("Grabbestr.");
        break;
    }
    case 119842:
    {
        returnValue = F("Grabbeweg");
        break;
    }
    case 119843:
    {
        returnValue = F("Grabborn");
        break;
    }
    case 119844:
    {
        returnValue = F("Grabbrunnen");
        break;
    }
    case 119845:
    {
        returnValue = F("Grabbrunnenstr.");
        break;
    }
    case 119846:
    {
        returnValue = F("Grabegasse");
        break;
    }
    case 119847:
    {
        returnValue = F("Grabeinstr.");
        break;
    }
    case 119848:
    {
        returnValue = F("Graben");
        break;
    }
    case 119849:
    {
        returnValue = F("Graben Weg");
        break;
    }
    case 119850:
    {
        returnValue = F("Graben-Gewerbepark");
        break;
    }
    case 119851:
    {
        returnValue = F("Grabenacker");
        break;
    }
    case 119852:
    {
        returnValue = F("Grabenackerweg");
        break;
    }
    case 119853:
    {
        returnValue = F("Grabenallee");
        break;
    }
    case 119854:
    {
        returnValue = F("Grabenanger");
        break;
    }
    case 119855:
    {
        returnValue = F("Grabenauer Weg");
        break;
    }
    case 119856:
    {
        returnValue = F("Grabenbachgasse");
        break;
    }
    case 119857:
    {
        returnValue = F("Grabenbachstr.");
        break;
    }
    case 119858:
    {
        returnValue = F("Grabenberg");
        break;
    }
    case 119859:
    {
        returnValue = F("Grabenbergweg");
        break;
    }
    case 119860:
    {
        returnValue = F("Grabenbitze");
        break;
    }
    case 119861:
    {
        returnValue = F("Grabenblick");
        break;
    }
    case 119862:
    {
        returnValue = F("Grabenborn");
        break;
    }
    case 119863:
    {
        returnValue = F("Grabenbreite");
        break;
    }
    case 119864:
    {
        returnValue = F("Grabenbruch");
        break;
    }
    case 119865:
    {
        returnValue = F("Grabenbrunnenweg");
        break;
    }
    case 119866:
    {
        returnValue = F("Grabenbäume");
        break;
    }
    case 119867:
    {
        returnValue = F("Grabener Allee");
        break;
    }
    case 119868:
    {
        returnValue = F("Grabener Str.");
        break;
    }
    case 119869:
    {
        returnValue = F("Grabener Weg");
        break;
    }
    case 119870:
    {
        returnValue = F("Grabenfeld");
        break;
    }
    case 119871:
    {
        returnValue = F("Grabenfeldstr.");
        break;
    }
    case 119872:
    {
        returnValue = F("Grabengarten");
        break;
    }
    case 119873:
    {
        returnValue = F("Grabengartenweg");
        break;
    }
    case 119874:
    {
        returnValue = F("Grabengasse");
        break;
    }
    case 119875:
    {
        returnValue = F("Grabengasse (\"Sambagässje\")");
        break;
    }
    case 119876:
    {
        returnValue = F("Grabengrundstr.");
        break;
    }
    case 119877:
    {
        returnValue = F("Grabengärten");
        break;
    }
    case 119878:
    {
        returnValue = F("Grabengässchen");
        break;
    }
    case 119879:
    {
        returnValue = F("Grabengäßchen");
        break;
    }
    case 119880:
    {
        returnValue = F("Grabenhaldenweg");
        break;
    }
    case 119881:
    {
        returnValue = F("Grabenheckerstr.");
        break;
    }
    case 119882:
    {
        returnValue = F("Grabenhof");
        break;
    }
    case 119883:
    {
        returnValue = F("Grabenhofer Str.");
        break;
    }
    case 119884:
    {
        returnValue = F("Grabenhöfchen");
        break;
    }
    case 119885:
    {
        returnValue = F("Grabenitzer Weg");
        break;
    }
    case 119886:
    {
        returnValue = F("Grabenkamp");
        break;
    }
    case 119887:
    {
        returnValue = F("Grabenkampsredder");
        break;
    }
    case 119888:
    {
        returnValue = F("Grabenköpfel");
        break;
    }
    case 119889:
    {
        returnValue = F("Grabenlos");
        break;
    }
    case 119890:
    {
        returnValue = F("Grabenpassage");
        break;
    }
    case 119891:
    {
        returnValue = F("Grabenpfädchen");
        break;
    }
    case 119892:
    {
        returnValue = F("Grabenpromenade");
        break;
    }
    case 119893:
    {
        returnValue = F("Grabenrain");
        break;
    }
    case 119894:
    {
        returnValue = F("Grabenrangen");
        break;
    }
    case 119895:
    {
        returnValue = F("Grabenring");
        break;
    }
    case 119896:
    {
        returnValue = F("Grabensberg");
        break;
    }
    case 119897:
    {
        returnValue = F("Grabenschied");
        break;
    }
    case 119898:
    {
        returnValue = F("Grabenschmiede");
        break;
    }
    case 119899:
    {
        returnValue = F("Grabenschneise");
        break;
    }
    case 119900:
    {
        returnValue = F("Grabenschustergasse");
        break;
    }
    case 119901:
    {
        returnValue = F("Grabensee");
        break;
    }
    case 119902:
    {
        returnValue = F("Grabenseer Weg");
        break;
    }
    case 119903:
    {
        returnValue = F("Grabenseestr.");
        break;
    }
    case 119904:
    {
        returnValue = F("Grabensepperlweg");
        break;
    }
    case 119905:
    {
        returnValue = F("Grabenser Str.");
        break;
    }
    case 119906:
    {
        returnValue = F("Grabenser Weg");
        break;
    }
    case 119907:
    {
        returnValue = F("Grabenstetter Str.");
        break;
    }
    case 119908:
    {
        returnValue = F("Grabenstieg");
        break;
    }
    case 119909:
    {
        returnValue = F("Grabenstiege");
        break;
    }
    case 119910:
    {
        returnValue = F("Grabenstoffl");
        break;
    }
    case 119911:
    {
        returnValue = F("Grabenstr.");
        break;
    }
    case 119912:
    {
        returnValue = F("Grabenstr. (privat)");
        break;
    }
    case 119913:
    {
        returnValue = F("Grabenstätter Str.");
        break;
    }
    case 119914:
    {
        returnValue = F("Grabenstätter Weg");
        break;
    }
    case 119915:
    {
        returnValue = F("Grabensöder");
        break;
    }
    case 119916:
    {
        returnValue = F("Grabental");
        break;
    }
    case 119917:
    {
        returnValue = F("Grabenteichstr.");
        break;
    }
    case 119918:
    {
        returnValue = F("Grabenteichweg");
        break;
    }
    case 119919:
    {
        returnValue = F("Grabenteilweg");
        break;
    }
    case 119920:
    {
        returnValue = F("Grabentor");
        break;
    }
    case 119921:
    {
        returnValue = F("Grabenweg");
        break;
    }
    case 119922:
    {
        returnValue = F("Grabenwiese");
        break;
    }
    case 119923:
    {
        returnValue = F("Grabenwiesenstr.");
        break;
    }
    case 119924:
    {
        returnValue = F("Grabenwiesenweg");
        break;
    }
    case 119925:
    {
        returnValue = F("Grabenzellweg");
        break;
    }
    case 119926:
    {
        returnValue = F("Grabenäcker");
        break;
    }
    case 119927:
    {
        returnValue = F("Grabenäckerstr.");
        break;
    }
    case 119928:
    {
        returnValue = F("Grabenäckerweg");
        break;
    }
    case 119929:
    {
        returnValue = F("Grabersweg");
        break;
    }
    case 119930:
    {
        returnValue = F("Grabesweg");
        break;
    }
    case 119931:
    {
        returnValue = F("Grabettstr.");
        break;
    }
    case 119932:
    {
        returnValue = F("Grabfeldstr.");
        break;
    }
    case 119933:
    {
        returnValue = F("Grabhofweg");
        break;
    }
    case 119934:
    {
        returnValue = F("Grabhorner Weg");
        break;
    }
    case 119935:
    {
        returnValue = F("Grabhügelweg");
        break;
    }
    case 119936:
    {
        returnValue = F("Grabig");
        break;
    }
    case 119937:
    {
        returnValue = F("Grabiger Weg");
        break;
    }
    case 119938:
    {
        returnValue = F("Grabigsweg");
        break;
    }
    case 119939:
    {
        returnValue = F("Grabigweg");
        break;
    }
    case 119940:
    {
        returnValue = F("Grabischau");
        break;
    }
    case 119941:
    {
        returnValue = F("Grabitz");
        break;
    }
    case 119942:
    {
        returnValue = F("Grabitzer Str.");
        break;
    }
    case 119943:
    {
        returnValue = F("Grablhangweg");
        break;
    }
    case 119944:
    {
        returnValue = F("Grabmairstr.");
        break;
    }
    case 119945:
    {
        returnValue = F("Grabmannstr.");
        break;
    }
    case 119946:
    {
        returnValue = F("Grabmeirstr.");
        break;
    }
    case 119947:
    {
        returnValue = F("Grabmühler Str.");
        break;
    }
    case 119948:
    {
        returnValue = F("Grabmühlweg");
        break;
    }
    case 119949:
    {
        returnValue = F("Grabo");
        break;
    }
    case 119950:
    {
        returnValue = F("Graboer Str.");
        break;
    }
    case 119951:
    {
        returnValue = F("Graboer Weg");
        break;
    }
    case 119952:
    {
        returnValue = F("Grabow");
        break;
    }
    case 119953:
    {
        returnValue = F("Grabower Allee");
        break;
    }
    case 119954:
    {
        returnValue = F("Grabower Chaussee");
        break;
    }
    case 119955:
    {
        returnValue = F("Grabower Dorfstr.");
        break;
    }
    case 119956:
    {
        returnValue = F("Grabower Str.");
        break;
    }
    case 119957:
    {
        returnValue = F("Grabower Weg");
        break;
    }
    case 119958:
    {
        returnValue = F("Grabower Wiesenweg");
        break;
    }
    case 119959:
    {
        returnValue = F("Grabowseebrücke");
        break;
    }
    case 119960:
    {
        returnValue = F("Grabowseestr.");
        break;
    }
    case 119961:
    {
        returnValue = F("Grabowseeweg");
        break;
    }
    case 119962:
    {
        returnValue = F("Grabowskistr.");
        break;
    }
    case 119963:
    {
        returnValue = F("Grabowstr.");
        break;
    }
    case 119964:
    {
        returnValue = F("Grabpointstr.");
        break;
    }
    case 119965:
    {
        returnValue = F("Grabschützer Str.");
        break;
    }
    case 119966:
    {
        returnValue = F("Grabschützer Weg");
        break;
    }
    case 119967:
    {
        returnValue = F("Grabsdorf");
        break;
    }
    case 119968:
    {
        returnValue = F("Grabsleber Str.");
        break;
    }
    case 119969:
    {
        returnValue = F("Grabsleber Weg");
        break;
    }
    case 119970:
    {
        returnValue = F("Grabsteder Str.");
        break;
    }
    case 119971:
    {
        returnValue = F("Grabsteder Weg");
        break;
    }
    case 119972:
    {
        returnValue = F("Grabsteinweg");
        break;
    }
    case 119973:
    {
        returnValue = F("Grabstr.");
        break;
    }
    case 119974:
    {
        returnValue = F("Grabtal");
        break;
    }
    case 119975:
    {
        returnValue = F("Graburgsweg");
        break;
    }
    case 119976:
    {
        returnValue = F("Grabweg");
        break;
    }
    case 119977:
    {
        returnValue = F("Grabäckerstr.");
        break;
    }
    case 119978:
    {
        returnValue = F("Gracht");
        break;
    }
    case 119979:
    {
        returnValue = F("Grachtenhofstr.");
        break;
    }
    case 119980:
    {
        returnValue = F("Grachtstr.");
        break;
    }
    case 119981:
    {
        returnValue = F("Grachtweg");
        break;
    }
    case 119982:
    {
        returnValue = F("Gradanger");
        break;
    }
    case 119983:
    {
        returnValue = F("Gradberg");
        break;
    }
    case 119984:
    {
        returnValue = F("Grade Eiche");
        break;
    }
    case 119985:
    {
        returnValue = F("Gradeberg");
        break;
    }
    case 119986:
    {
        returnValue = F("Gradebergstr.");
        break;
    }
    case 119987:
    {
        returnValue = F("Gradenhofstr.");
        break;
    }
    case 119988:
    {
        returnValue = F("Grader Weg");
        break;
    }
    case 119989:
    {
        returnValue = F("Graderkopfweg");
        break;
    }
    case 119990:
    {
        returnValue = F("Gradeschneise");
        break;
    }
    case 119991:
    {
        returnValue = F("Gradestr.");
        break;
    }
    case 119992:
    {
        returnValue = F("Gradhofstr.");
        break;
    }
    case 119993:
    {
        returnValue = F("Gradhöhe");
        break;
    }
    case 119994:
    {
        returnValue = F("Gradignan Str.");
        break;
    }
    case 119995:
    {
        returnValue = F("Graditzer Damm");
        break;
    }
    case 119996:
    {
        returnValue = F("Graditzer Str.");
        break;
    }
    case 119997:
    {
        returnValue = F("Graditzer Weg");
        break;
    }
    case 119998:
    {
        returnValue = F("Gradlstr.");
        break;
    }
    case 119999:
    {
        returnValue = F("Gradlweg");
        break;
    }
    case 120000:
    {
        returnValue = F("Gradläckerstr.");
        break;
    }
    case 120001:
    {
        returnValue = F("Gradmannstr.");
        break;
    }
    case 120002:
    {
        returnValue = F("Gradmannweg");
        break;
    }
    case 120003:
    {
        returnValue = F("Gradnauerstr.");
        break;
    }
    case 120004:
    {
        returnValue = F("Gradnerstr.");
        break;
    }
    case 120005:
    {
        returnValue = F("Gradsteg");
        break;
    }
    case 120006:
    {
        returnValue = F("Gradstr.");
        break;
    }
    case 120007:
    {
        returnValue = F("Gradweg");
        break;
    }
    case 120008:
    {
        returnValue = F("Gradwegle");
        break;
    }
    case 120009:
    {
        returnValue = F("Graebestr.");
        break;
    }
    case 120010:
    {
        returnValue = F("Graebeweg");
        break;
    }
    case 120011:
    {
        returnValue = F("Graefenstein-Weg");
        break;
    }
    case 356360:
    {
        returnValue = F("g");
        break;
    }
    case 356361:
    {
        returnValue = F("g-Gestell");
        break;
    }
    case 356362:
    {
        returnValue = F("gelb markiert");
        break;
    }
    case 356363:
    {
        returnValue = F("geo Route");
        break;
    }
    case 356364:
    {
        returnValue = F("geol. Freilichtmuseum");
        break;
    }
    case 356365:
    {
        returnValue = F("geologischer Lehrpfad");
        break;
    }
    case 356366:
    {
        returnValue = F("gepflasterter Rundweg");
        break;
    }
    case 356367:
    {
        returnValue = F("gepflasterter Verbindungsweg");
        break;
    }
    case 356368:
    {
        returnValue = F("geplante Grün, Spielfläche");
        break;
    }
    case 356369:
    {
        returnValue = F("geplante Grünbrücke");
        break;
    }
    case 356370:
    {
        returnValue = F("gerade 26 - 40");
        break;
    }
    case 356371:
    {
        returnValue = F("gesperrt");
        break;
    }
    case 356372:
    {
        returnValue = F("gläserner Steig");
        break;
    }
    case 356373:
    {
        returnValue = F("grasiger Weg");
        break;
    }
    case 356374:
    {
        returnValue = F("große Hecke");
        break;
    }
    }
    return returnValue;
}
