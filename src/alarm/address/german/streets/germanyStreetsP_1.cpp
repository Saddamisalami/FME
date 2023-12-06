#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameP1(unsigned int streetKey)
{
String returnValue = "";
switch (streetKey)
{
case 244931:
{
returnValue = F("P 13");
break;
}
case 244932:
{
returnValue = F("P&R");
break;
}
case 244933:
{
returnValue = F("P-Linie");
break;
}
case 244934:
{
returnValue = F("P-Weg");
break;
}
case 244935:
{
returnValue = F("P.-Bentivolius-Marxen-Str.");
break;
}
case 244936:
{
returnValue = F("P.-C.-Ettighoffer-Str.");
break;
}
case 244937:
{
returnValue = F("P.-H.-Eggers-Str.");
break;
}
case 244938:
{
returnValue = F("P.-H.-Kühl-Platz");
break;
}
case 244939:
{
returnValue = F("P.-K.-Evert-Weg");
break;
}
case 244940:
{
returnValue = F("P.-W.-Janssen-Weg");
break;
}
case 244941:
{
returnValue = F("P.H.-Albers-Str.");
break;
}
case 244942:
{
returnValue = F("P1");
break;
}
case 244943:
{
returnValue = F("P15");
break;
}
case 244944:
{
returnValue = F("P41");
break;
}
case 244945:
{
returnValue = F("P5 Premiumweg");
break;
}
case 244946:
{
returnValue = F("PA 49");
break;
}
case 244947:
{
returnValue = F("PA 95");
break;
}
case 244948:
{
returnValue = F("PA-14 - Steinhuegl");
break;
}
case 244949:
{
returnValue = F("PEE-WEE-Str.");
break;
}
case 244950:
{
returnValue = F("PEKU-Str.");
break;
}
case 244951:
{
returnValue = F("PHÖNIX-Seniorenzentrum Eichenhof");
break;
}
case 244952:
{
returnValue = F("Paalende");
break;
}
case 244953:
{
returnValue = F("Paalmoor");
break;
}
case 244954:
{
returnValue = F("Paaltjessteege");
break;
}
case 244955:
{
returnValue = F("Paalweg");
break;
}
case 244956:
{
returnValue = F("Paalzow");
break;
}
case 244957:
{
returnValue = F("Paalzower Weg");
break;
}
case 244958:
{
returnValue = F("Paalzowweg");
break;
}
case 244959:
{
returnValue = F("Paapsand");
break;
}
case 244960:
{
returnValue = F("Paarangerweg");
break;
}
case 244961:
{
returnValue = F("Paaraue");
break;
}
case 244962:
{
returnValue = F("Paarblick");
break;
}
case 244963:
{
returnValue = F("Paarener Chaussee");
break;
}
case 244964:
{
returnValue = F("Paarener Dorfstr.");
break;
}
case 244965:
{
returnValue = F("Paarener Mühlenweg");
break;
}
case 244966:
{
returnValue = F("Paarener Str.");
break;
}
case 244967:
{
returnValue = F("Paarer Str.");
break;
}
case 244968:
{
returnValue = F("Paarfeldstr.");
break;
}
case 244969:
{
returnValue = F("Paargasse");
break;
}
case 244970:
{
returnValue = F("Paarmanns Weg");
break;
}
case 244971:
{
returnValue = F("Paarmannstr.");
break;
}
case 244972:
{
returnValue = F("Paarmarktstr.");
break;
}
case 244973:
{
returnValue = F("Paarscher Weg");
break;
}
case 244974:
{
returnValue = F("Paarstadl");
break;
}
case 244975:
{
returnValue = F("Paarstr.");
break;
}
case 244976:
{
returnValue = F("Paartalpark Aichach-Nord");
break;
}
case 244977:
{
returnValue = F("Paartalpark am Flugplatz");
break;
}
case 244978:
{
returnValue = F("Paartalstr.");
break;
}
case 244979:
{
returnValue = F("Paartalweg");
break;
}
case 244980:
{
returnValue = F("Paarungsgasse");
break;
}
case 244981:
{
returnValue = F("Paarweg");
break;
}
case 244982:
{
returnValue = F("Paasch-Eyler-Platz");
break;
}
case 244983:
{
returnValue = F("Paaschbarg");
break;
}
case 244984:
{
returnValue = F("Paaschstr.");
break;
}
case 244985:
{
returnValue = F("Paaskebergweg");
break;
}
case 244986:
{
returnValue = F("Paasstr.");
break;
}
case 244987:
{
returnValue = F("Paavo-Nurmi-Weg");
break;
}
case 244988:
{
returnValue = F("Pablo-Neruda-Ring");
break;
}
case 244989:
{
returnValue = F("Pablo-Neruda-Str.");
break;
}
case 244990:
{
returnValue = F("Pablo-Picasso-Str.");
break;
}
case 244991:
{
returnValue = F("Pablo-Picasso-Weg");
break;
}
case 244992:
{
returnValue = F("Pabostr.");
break;
}
case 244993:
{
returnValue = F("Pabsberg");
break;
}
case 244994:
{
returnValue = F("Pabsdorfer Weg");
break;
}
case 244995:
{
returnValue = F("Pabst-von-Ohain-Str.");
break;
}
case 244996:
{
returnValue = F("Pabstberg");
break;
}
case 244997:
{
returnValue = F("Pabstenweg");
break;
}
case 244998:
{
returnValue = F("Pabsthofweg");
break;
}
case 244999:
{
returnValue = F("Pabstkolonie");
break;
}
case 245000:
{
returnValue = F("Pabstleithener Str.");
break;
}
case 245001:
{
returnValue = F("Pabstmühle");
break;
}
case 245002:
{
returnValue = F("Pabstorfer Weg");
break;
}
case 245003:
{
returnValue = F("Pabststr.");
break;
}
case 245004:
{
returnValue = F("Pacelliallee");
break;
}
case 245005:
{
returnValue = F("Pacellipassage");
break;
}
case 245006:
{
returnValue = F("Pacellistr.");
break;
}
case 245007:
{
returnValue = F("Pacelliufer");
break;
}
case 245008:
{
returnValue = F("Pachelbelgasse");
break;
}
case 245009:
{
returnValue = F("Pachelbelstr.");
break;
}
case 245010:
{
returnValue = F("Pachelbelweg");
break;
}
case 245011:
{
returnValue = F("Pachemstr.");
break;
}
case 245012:
{
returnValue = F("Pacherstr.");
break;
}
case 245013:
{
returnValue = F("Pachland");
break;
}
case 245014:
{
returnValue = F("Pachlinger Str.");
break;
}
case 245015:
{
returnValue = F("Pachmayrplatz");
break;
}
case 245016:
{
returnValue = F("Pachmayrweg");
break;
}
case 245017:
{
returnValue = F("Pachmeierstr.");
break;
}
case 245018:
{
returnValue = F("Pachnerstr.");
break;
}
case 245019:
{
returnValue = F("Pachtener Str.");
break;
}
case 245020:
{
returnValue = F("Pachtergasse");
break;
}
case 245021:
{
returnValue = F("Pachtgasse");
break;
}
case 245022:
{
returnValue = F("Pachthausstr.");
break;
}
case 245023:
{
returnValue = F("Pachthof");
break;
}
case 245024:
{
returnValue = F("Pachtlandweg");
break;
}
case 245025:
{
returnValue = F("Pachtweg");
break;
}
case 245026:
{
returnValue = F("Pacificusplatz");
break;
}
case 245027:
{
returnValue = F("Pacificusstr.");
break;
}
case 245028:
{
returnValue = F("Paciusweg");
break;
}
case 245029:
{
returnValue = F("Packan");
break;
}
case 245030:
{
returnValue = F("Packberg");
break;
}
case 245031:
{
returnValue = F("Packebuscher Weg");
break;
}
case 245032:
{
returnValue = F("Packeniusstr.");
break;
}
case 245033:
{
returnValue = F("Packenreiterstr.");
break;
}
case 245034:
{
returnValue = F("Packersweide");
break;
}
case 245035:
{
returnValue = F("Packertstr.");
break;
}
case 245036:
{
returnValue = F("Packhof");
break;
}
case 245037:
{
returnValue = F("Packhofgasse");
break;
}
case 245038:
{
returnValue = F("Packhofpassage");
break;
}
case 245039:
{
returnValue = F("Packhofstr.");
break;
}
case 245040:
{
returnValue = F("Packhusweg");
break;
}
case 245041:
{
returnValue = F("Packischer Str.");
break;
}
case 245042:
{
returnValue = F("Packs Buchen");
break;
}
case 245043:
{
returnValue = F("Pacotistr.");
break;
}
case 245044:
{
returnValue = F("Pacè Park");
break;
}
case 245045:
{
returnValue = F("Padasjoki Platz");
break;
}
case 245046:
{
returnValue = F("Padberger Str.");
break;
}
case 245047:
{
returnValue = F("Padbergstr.");
break;
}
case 245048:
{
returnValue = F("Padbreden");
break;
}
case 245049:
{
returnValue = F("Paddelsteg");
break;
}
case 245050:
{
returnValue = F("Paddelweg");
break;
}
case 245051:
{
returnValue = F("Paddenbett");
break;
}
case 245052:
{
returnValue = F("Paddenbrücke");
break;
}
case 245053:
{
returnValue = F("Paddengasse");
break;
}
case 245054:
{
returnValue = F("Paddenmühle");
break;
}
case 245055:
{
returnValue = F("Paddenpuhl");
break;
}
case 245056:
{
returnValue = F("Paddensteinweg");
break;
}
case 245057:
{
returnValue = F("Padegrim");
break;
}
case 245058:
{
returnValue = F("Padelackhallig");
break;
}
case 245059:
{
returnValue = F("Padelügger Weg");
break;
}
case 245060:
{
returnValue = F("Padenbergstr.");
break;
}
case 245061:
{
returnValue = F("Padenstedt Feld");
break;
}
case 245062:
{
returnValue = F("Padenstedter Landstr.");
break;
}
case 245063:
{
returnValue = F("Padenstedter Str.");
break;
}
case 245064:
{
returnValue = F("Paderberg");
break;
}
case 245065:
{
returnValue = F("Paderborner Landstr.");
break;
}
case 245066:
{
returnValue = F("Paderborner Postweg");
break;
}
case 245067:
{
returnValue = F("Paderborner Ring");
break;
}
case 245068:
{
returnValue = F("Paderborner Str.");
break;
}
case 245069:
{
returnValue = F("Paderborner Tor");
break;
}
case 245070:
{
returnValue = F("Paderborner Weg");
break;
}
case 245071:
{
returnValue = F("Paderbruch");
break;
}
case 245072:
{
returnValue = F("Padergasse");
break;
}
case 245073:
{
returnValue = F("Paderinger Str.");
break;
}
case 245074:
{
returnValue = F("Paderstr.");
break;
}
case 245075:
{
returnValue = F("Paderwall");
break;
}
case 245076:
{
returnValue = F("Paderwiesen");
break;
}
case 245077:
{
returnValue = F("Padgen");
break;
}
case 245078:
{
returnValue = F("Padies");
break;
}
case 245079:
{
returnValue = F("Padingbütteler Altendeich");
break;
}
case 245080:
{
returnValue = F("Padingbütteler Specken");
break;
}
case 245081:
{
returnValue = F("Padingbütteler Strich");
break;
}
case 245082:
{
returnValue = F("Paditzer Fußweg");
break;
}
case 245083:
{
returnValue = F("Paditzer Str.");
break;
}
case 245084:
{
returnValue = F("Padkamp");
break;
}
case 245085:
{
returnValue = F("Padlandstr.");
break;
}
case 245086:
{
returnValue = F("Padlinger Rachelweg");
break;
}
case 245087:
{
returnValue = F("Padstucker");
break;
}
case 245088:
{
returnValue = F("Padstückenweg");
break;
}
case 245089:
{
returnValue = F("Paduanostr.");
break;
}
case 245090:
{
returnValue = F("Paduastr.");
break;
}
case 245091:
{
returnValue = F("Paduaweg");
break;
}
case 245092:
{
returnValue = F("Padulusstr.");
break;
}
case 245093:
{
returnValue = F("Padweg");
break;
}
case 245094:
{
returnValue = F("Paehlerstr.");
break;
}
case 245095:
{
returnValue = F("Paenbruch");
break;
}
case 245096:
{
returnValue = F("Paepkestr.");
break;
}
case 245097:
{
returnValue = F("Paeplowstieg");
break;
}
case 245098:
{
returnValue = F("Paeplowtwiete");
break;
}
case 245099:
{
returnValue = F("Paeplowweg");
break;
}
case 245100:
{
returnValue = F("Paepnitzbruchschneise");
break;
}
case 245101:
{
returnValue = F("Paeschensdyck");
break;
}
case 245102:
{
returnValue = F("Paetowstr.");
break;
}
case 245103:
{
returnValue = F("Paetowweg");
break;
}
case 245104:
{
returnValue = F("Paetzgasse");
break;
}
case 245105:
{
returnValue = F("Paetzstr.");
break;
}
case 245106:
{
returnValue = F("Paffelsbergplatz");
break;
}
case 245107:
{
returnValue = F("Paffelsbergweg");
break;
}
case 245108:
{
returnValue = F("Paffenbach");
break;
}
case 245109:
{
returnValue = F("Paffendorfer Weg");
break;
}
case 245110:
{
returnValue = F("Paffendorfstr.");
break;
}
case 245111:
{
returnValue = F("Paffenhöhe");
break;
}
case 245112:
{
returnValue = F("Paffenkaul");
break;
}
case 245113:
{
returnValue = F("Paffenlicher Weg");
break;
}
case 245114:
{
returnValue = F("Paffenlöh");
break;
}
case 245115:
{
returnValue = F("Paffenschlade");
break;
}
case 245116:
{
returnValue = F("Paffhausen");
break;
}
case 245117:
{
returnValue = F("Paffrath");
break;
}
case 245118:
{
returnValue = F("Paffrather Mühle");
break;
}
case 245119:
{
returnValue = F("Paffrather Str.");
break;
}
case 245120:
{
returnValue = F("Paffrather Weg");
break;
}
case 245121:
{
returnValue = F("Paganinistr.");
break;
}
case 245122:
{
returnValue = F("Paganiniweg");
break;
}
case 245123:
{
returnValue = F("Paganusstr.");
break;
}
case 245124:
{
returnValue = F("Pagelreenkamp");
break;
}
case 245125:
{
returnValue = F("Pagelsdorf");
break;
}
case 245126:
{
returnValue = F("Pagenberg");
break;
}
case 245127:
{
returnValue = F("Pagenburgweg");
break;
}
case 245128:
{
returnValue = F("Pagendarmweg");
break;
}
case 245129:
{
returnValue = F("Pagenfelder Platz");
break;
}
case 245130:
{
returnValue = F("Pagenfelder Str.");
break;
}
case 245131:
{
returnValue = F("Pagenhau");
break;
}
case 245132:
{
returnValue = F("Pagenhelle");
break;
}
case 245133:
{
returnValue = F("Pagenkamp");
break;
}
case 245134:
{
returnValue = F("Pagenmarkt");
break;
}
case 245135:
{
returnValue = F("Pagenriege");
break;
}
case 245136:
{
returnValue = F("Pagensstr.");
break;
}
case 245137:
{
returnValue = F("Pagenstecher Str.");
break;
}
case 245138:
{
returnValue = F("Pagenstecherstr.");
break;
}
case 245139:
{
returnValue = F("Pagenstecherweg");
break;
}
case 245140:
{
returnValue = F("Pagenstertweg");
break;
}
case 245141:
{
returnValue = F("Pagenstr.");
break;
}
case 245142:
{
returnValue = F("Pagenstrothsweg");
break;
}
case 245143:
{
returnValue = F("Pagentorner Str.");
break;
}
case 245144:
{
returnValue = F("Pagenweg");
break;
}
case 245145:
{
returnValue = F("Pageroe");
break;
}
case 245146:
{
returnValue = F("Paggels Hof");
break;
}
case 245147:
{
returnValue = F("Paggenbend");
break;
}
case 245148:
{
returnValue = F("Pagodenburgstr.");
break;
}
case 245149:
{
returnValue = F("Pagönnienstr.");
break;
}
case 245150:
{
returnValue = F("Pahenwinkel");
break;
}
case 245151:
{
returnValue = F("Pahl Stücke");
break;
}
case 245152:
{
returnValue = F("Pahlberg");
break;
}
case 245153:
{
returnValue = F("Pahlblöckensredder");
break;
}
case 245154:
{
returnValue = F("Pahlblöckensstieg");
break;
}
case 245155:
{
returnValue = F("Pahleck");
break;
}
case 245156:
{
returnValue = F("Pahlener Str.");
break;
}
case 245157:
{
returnValue = F("Pahlenort");
break;
}
case 245158:
{
returnValue = F("Pahlenweg");
break;
}
case 245159:
{
returnValue = F("Pahlfortweg");
break;
}
case 245160:
{
returnValue = F("Pahlhorn");
break;
}
case 245161:
{
returnValue = F("Pahlhornstr.");
break;
}
case 245162:
{
returnValue = F("Pahlhöhe");
break;
}
case 245163:
{
returnValue = F("Pahlkestr.");
break;
}
case 245164:
{
returnValue = F("Pahlkrug");
break;
}
case 245165:
{
returnValue = F("Pahlmannskampweg");
break;
}
case 245166:
{
returnValue = F("Pahls Gang");
break;
}
case 245167:
{
returnValue = F("Pahls Wische");
break;
}
case 245168:
{
returnValue = F("Pahlsdorf");
break;
}
case 245169:
{
returnValue = F("Pahlshof");
break;
}
case 245170:
{
returnValue = F("Pahlstr.");
break;
}
case 245171:
{
returnValue = F("Pahlswinkel");
break;
}
case 245172:
{
returnValue = F("Pahlweg");
break;
}
case 245173:
{
returnValue = F("Pahna");
break;
}
case 245174:
{
returnValue = F("Pahnberghangweg");
break;
}
case 245175:
{
returnValue = F("Pahnsiek");
break;
}
case 245176:
{
returnValue = F("Pahrener Anger");
break;
}
case 245177:
{
returnValue = F("Pahrener Hauptstr.");
break;
}
case 245178:
{
returnValue = F("Pahreser Str.");
break;
}
case 245179:
{
returnValue = F("Paidarstr.");
break;
}
case 245180:
{
returnValue = F("Paiderweg");
break;
}
case 245181:
{
returnValue = F("Paierweg");
break;
}
case 245182:
{
returnValue = F("Paimarer Str.");
break;
}
case 245183:
{
returnValue = F("Painbreitenstr.");
break;
}
case 245184:
{
returnValue = F("Paindlkofen");
break;
}
case 245185:
{
returnValue = F("Paindlkofener Str.");
break;
}
case 245186:
{
returnValue = F("Painhofenerstr.");
break;
}
case 245187:
{
returnValue = F("Paint");
break;
}
case 245188:
{
returnValue = F("PaintballFabrik.de");
break;
}
case 245189:
{
returnValue = F("Painten");
break;
}
case 245190:
{
returnValue = F("Paintener Weg");
break;
}
case 245191:
{
returnValue = F("Paintenweg");
break;
}
case 245192:
{
returnValue = F("Paintgasse");
break;
}
case 245193:
{
returnValue = F("Paintleite");
break;
}
case 245194:
{
returnValue = F("Paintstr.");
break;
}
case 245195:
{
returnValue = F("Paintstriegel");
break;
}
case 245196:
{
returnValue = F("Paintweg");
break;
}
case 245197:
{
returnValue = F("Paiters Gässle");
break;
}
case 245198:
{
returnValue = F("Paitzdorf");
break;
}
case 245199:
{
returnValue = F("Paitzdorfer Str.");
break;
}
case 245200:
{
returnValue = F("Paitzkofener Str.");
break;
}
case 245201:
{
returnValue = F("Pajekenweg");
break;
}
case 245202:
{
returnValue = F("Pakenser Altendeich");
break;
}
case 245203:
{
returnValue = F("Pakenser Hörn");
break;
}
case 245204:
{
returnValue = F("Pakenser Str.");
break;
}
case 245205:
{
returnValue = F("Pakenstr.");
break;
}
case 245206:
{
returnValue = F("Palais");
break;
}
case 245207:
{
returnValue = F("Palaiseaustr.");
break;
}
case 245208:
{
returnValue = F("Palaisgarten");
break;
}
case 245209:
{
returnValue = F("Palaispark");
break;
}
case 245210:
{
returnValue = F("Palaisplatz");
break;
}
case 245211:
{
returnValue = F("Palaisstr.");
break;
}
case 245212:
{
returnValue = F("Palander Str.");
break;
}
case 245213:
{
returnValue = F("Palandstr.");
break;
}
case 245214:
{
returnValue = F("Palandtweg");
break;
}
case 245215:
{
returnValue = F("Palandweg");
break;
}
case 245216:
{
returnValue = F("Palanterhof");
break;
}
case 245217:
{
returnValue = F("Palanterstr.");
break;
}
case 245218:
{
returnValue = F("Palantgasse");
break;
}
case 245219:
{
returnValue = F("Palantstr.");
break;
}
case 245220:
{
returnValue = F("Palantweg");
break;
}
case 245221:
{
returnValue = F("Palastgarten");
break;
}
case 245222:
{
returnValue = F("Palaststr.");
break;
}
case 245223:
{
returnValue = F("Palastäcker");
break;
}
case 245224:
{
returnValue = F("Palatiumstr.");
break;
}
case 245225:
{
returnValue = F("Paldamusstr.");
break;
}
case 245226:
{
returnValue = F("Paldmuntstr.");
break;
}
case 245227:
{
returnValue = F("Paldoweg");
break;
}
case 245228:
{
returnValue = F("Palestrinastr.");
break;
}
case 245229:
{
returnValue = F("Palestrinaweg");
break;
}
case 245230:
{
returnValue = F("Palettenwerkstr.");
break;
}
case 245231:
{
returnValue = F("Palinger Weg");
break;
}
case 245232:
{
returnValue = F("Palisadengrabenweg");
break;
}
case 245233:
{
returnValue = F("Palisadenhauweg");
break;
}
case 245234:
{
returnValue = F("Palisadenring");
break;
}
case 245235:
{
returnValue = F("Palisadenstr.");
break;
}
case 245236:
{
returnValue = F("Palisadenweg");
break;
}
case 245237:
{
returnValue = F("Palixweg");
break;
}
case 245238:
{
returnValue = F("Pallandstr.");
break;
}
case 245239:
{
returnValue = F("Pallandsweg");
break;
}
case 245240:
{
returnValue = F("Pallandtweg");
break;
}
case 245241:
{
returnValue = F("Pallandweg");
break;
}
case 245242:
{
returnValue = F("Pallantstr.");
break;
}
case 245243:
{
returnValue = F("Pallasstr.");
break;
}
case 245244:
{
returnValue = F("Pallaststr.");
break;
}
case 245245:
{
returnValue = F("Pallasweg");
break;
}
case 245246:
{
returnValue = F("Pallaswiesenstr.");
break;
}
case 245247:
{
returnValue = F("Pallaufstr.");
break;
}
case 245248:
{
returnValue = F("Pallenbergheim");
break;
}
case 245249:
{
returnValue = F("Pallenbergstr.");
break;
}
case 245250:
{
returnValue = F("Pallerhauptweg");
break;
}
case 245251:
{
returnValue = F("Pallerkweg");
break;
}
case 245252:
{
returnValue = F("Pallerstr.");
break;
}
case 245253:
{
returnValue = F("Pallerweg");
break;
}
case 245254:
{
returnValue = F("Pallerwieke Ost");
break;
}
case 245255:
{
returnValue = F("Pallerwieke West");
break;
}
case 245256:
{
returnValue = F("Palleskestr.");
break;
}
case 245257:
{
returnValue = F("Palliener Str.");
break;
}
case 245258:
{
returnValue = F("Pallinger Str.");
break;
}
case 245259:
{
returnValue = F("Pallottinerstr.");
break;
}
case 245260:
{
returnValue = F("Pallottinerweg");
break;
}
case 245261:
{
returnValue = F("Pallottistr.");
break;
}
case 245262:
{
returnValue = F("Pallottiweg");
break;
}
case 245263:
{
returnValue = F("Pallwall");
break;
}
case 245264:
{
returnValue = F("Pallweide");
break;
}
case 245265:
{
returnValue = F("Palm-Allee");
break;
}
case 245266:
{
returnValue = F("Palmaienstr.");
break;
}
case 245267:
{
returnValue = F("Palmaille");
break;
}
case 245268:
{
returnValue = F("Palmanger");
break;
}
case 245269:
{
returnValue = F("Palmanopark");
break;
}
case 245270:
{
returnValue = F("Palmanostr.");
break;
}
case 245271:
{
returnValue = F("Palmatiusstr.");
break;
}
case 245272:
{
returnValue = F("Palmbacher Str.");
break;
}
case 245273:
{
returnValue = F("Palmbacher Weg");
break;
}
case 245274:
{
returnValue = F("Palmbachstr.");
break;
}
case 245275:
{
returnValue = F("Palmberg");
break;
}
case 245276:
{
returnValue = F("Palmberger Str.");
break;
}
case 245277:
{
returnValue = F("Palmberger Weg");
break;
}
case 245278:
{
returnValue = F("Palmbergstr.");
break;
}
case 245279:
{
returnValue = F("Palmbergweg");
break;
}
case 245280:
{
returnValue = F("Palmbrink");
break;
}
case 245281:
{
returnValue = F("Palmbuckstr.");
break;
}
case 245282:
{
returnValue = F("Palmbuschweg");
break;
}
case 245283:
{
returnValue = F("Palme-und-Walter-Weg");
break;
}
case 245284:
{
returnValue = F("Palmenbaumweg");
break;
}
case 245285:
{
returnValue = F("Palmenflecken");
break;
}
case 245286:
{
returnValue = F("Palmengabel");
break;
}
case 245287:
{
returnValue = F("Palmengartenbrücke");
break;
}
case 245288:
{
returnValue = F("Palmengartenstr.");
break;
}
case 245289:
{
returnValue = F("Palmengasse");
break;
}
case 245290:
{
returnValue = F("Palmengrundweg");
break;
}
case 245291:
{
returnValue = F("Palmenhauspark");
break;
}
case 245292:
{
returnValue = F("Palmenhof");
break;
}
case 245293:
{
returnValue = F("Palmenkamp");
break;
}
case 245294:
{
returnValue = F("Palmenstein");
break;
}
case 245295:
{
returnValue = F("Palmenstr.");
break;
}
case 245296:
{
returnValue = F("Palmental");
break;
}
case 245297:
{
returnValue = F("Palmenwaldstr.");
break;
}
case 245298:
{
returnValue = F("Palmenwaldsträßle");
break;
}
case 245299:
{
returnValue = F("Palmenweg");
break;
}
case 245300:
{
returnValue = F("Palmer Ort");
break;
}
case 245301:
{
returnValue = F("Palmersheimer Str.");
break;
}
case 245302:
{
returnValue = F("Palmerstr.");
break;
}
case 245303:
{
returnValue = F("Palmes Gasse");
break;
}
case 245304:
{
returnValue = F("Palmes Stein");
break;
}
case 245305:
{
returnValue = F("Palmesholzer Weg");
break;
}
case 245306:
{
returnValue = F("Palmgasse");
break;
}
case 245307:
{
returnValue = F("Palmhof");
break;
}
case 245308:
{
returnValue = F("Palmkamp");
break;
}
case 245309:
{
returnValue = F("Palmnickenweg");
break;
}
case 245310:
{
returnValue = F("Palmplatz");
break;
}
case 245311:
{
returnValue = F("Palmpohler Allee");
break;
}
case 245312:
{
returnValue = F("Palmpohler Str.");
break;
}
case 245313:
{
returnValue = F("Palmrainbrücke");
break;
}
case 245314:
{
returnValue = F("Palmsbergstr.");
break;
}
case 245315:
{
returnValue = F("Palmsgarten");
break;
}
case 245316:
{
returnValue = F("Palmsplan");
break;
}
case 245317:
{
returnValue = F("Palmspring");
break;
}
case 245318:
{
returnValue = F("Palmstr.");
break;
}
case 245319:
{
returnValue = F("Palmweg");
break;
}
case 245320:
{
returnValue = F("Palmweide");
break;
}
case 245321:
{
returnValue = F("Palmwiesen");
break;
}
case 245322:
{
returnValue = F("Palmäckerstr.");
break;
}
case 245323:
{
returnValue = F("Palnkam");
break;
}
case 245324:
{
returnValue = F("Palnkamer Str.");
break;
}
case 245325:
{
returnValue = F("Palnkamer Weg");
break;
}
case 245326:
{
returnValue = F("Palo-Alto-Platz");
break;
}
case 245327:
{
returnValue = F("Palombinistr.");
break;
}
case 245328:
{
returnValue = F("Palsadeweg");
break;
}
case 245329:
{
returnValue = F("Palstek");
break;
}
case 245330:
{
returnValue = F("Palsweiser Str.");
break;
}
case 245331:
{
returnValue = F("Paltenkämpenstr.");
break;
}
case 245332:
{
returnValue = F("Paltrockstr.");
break;
}
case 245333:
{
returnValue = F("Paltzschen");
break;
}
case 245334:
{
returnValue = F("Palz");
break;
}
case 245335:
{
returnValue = F("Palzerstr.");
break;
}
case 245336:
{
returnValue = F("Palzeskamp");
break;
}
case 245337:
{
returnValue = F("Palzinger Str.");
break;
}
case 245338:
{
returnValue = F("Palzinger Weg");
break;
}
case 245339:
{
returnValue = F("Palzstr.");
break;
}
case 245340:
{
returnValue = F("Pamiersring");
break;
}
case 245341:
{
returnValue = F("Pamirring");
break;
}
case 245342:
{
returnValue = F("Pamirstr.");
break;
}
case 245343:
{
returnValue = F("Pamirweg");
break;
}
case 245344:
{
returnValue = F("Pamitz");
break;
}
case 245345:
{
returnValue = F("Pampashasen");
break;
}
case 245346:
{
returnValue = F("Pampiner Weg");
break;
}
case 245347:
{
returnValue = F("Pamplonastr.");
break;
}
case 245348:
{
returnValue = F("Pampow");
break;
}
case 245349:
{
returnValue = F("Pampower Str.");
break;
}
case 245350:
{
returnValue = F("Pampower Weg");
break;
}
case 245351:
{
returnValue = F("Pamprin");
break;
}
case 245352:
{
returnValue = F("Pampriner Siedlung");
break;
}
case 245353:
{
returnValue = F("Pampriner Str.");
break;
}
case 245354:
{
returnValue = F("Pampusstr.");
break;
}
case 245355:
{
returnValue = F("Pamsendorfer Str.");
break;
}
case 245356:
{
returnValue = F("Pan-Dietrich-Str.");
break;
}
case 245357:
{
returnValue = F("Pan-Passage");
break;
}
case 245358:
{
returnValue = F("Panamastr.");
break;
}
case 245359:
{
returnValue = F("Panau");
break;
}
case 245360:
{
returnValue = F("Panaustr.");
break;
}
case 245361:
{
returnValue = F("Pandabärweg");
break;
}
case 245362:
{
returnValue = F("Pandektengasse");
break;
}
case 245363:
{
returnValue = F("Panderstr.");
break;
}
case 245364:
{
returnValue = F("Pandlerweg");
break;
}
case 245365:
{
returnValue = F("Pandurengasse");
break;
}
case 245366:
{
returnValue = F("Pandurensteig");
break;
}
case 245367:
{
returnValue = F("Pandurenweg");
break;
}
case 245368:
{
returnValue = F("Panellenweg");
break;
}
case 245369:
{
returnValue = F("Paner Weg");
break;
}
case 245370:
{
returnValue = F("Panganiweg");
break;
}
case 245371:
{
returnValue = F("Pangartenstr.");
break;
}
case 245372:
{
returnValue = F("Panger Kaltenweg");
break;
}
case 245373:
{
returnValue = F("Panger Str.");
break;
}
case 245374:
{
returnValue = F("Panger Töpferweg");
break;
}
case 245375:
{
returnValue = F("Pangerlbergstr.");
break;
}
case 245376:
{
returnValue = F("Pangesweg");
break;
}
case 245377:
{
returnValue = F("Pangmissenteich");
break;
}
case 245378:
{
returnValue = F("Panhausstr.");
break;
}
case 245379:
{
returnValue = F("Panhof");
break;
}
case 245380:
{
returnValue = F("Panhoffweg");
break;
}
case 245381:
{
returnValue = F("Panholzstr.");
break;
}
case 245382:
{
returnValue = F("Panhütterweg");
break;
}
case 245383:
{
returnValue = F("Paniersplatz");
break;
}
case 245384:
{
returnValue = F("Panitzer Hauptstr.");
break;
}
case 245385:
{
returnValue = F("Panitzscher Str.");
break;
}
case 245386:
{
returnValue = F("Panitzstr.");
break;
}
case 245387:
{
returnValue = F("Panjestr.");
break;
}
case 245388:
{
returnValue = F("Pankelower Weg");
break;
}
case 245389:
{
returnValue = F("Pankenweg");
break;
}
case 245390:
{
returnValue = F("Pankepark");
break;
}
case 245391:
{
returnValue = F("Panker");
break;
}
case 245392:
{
returnValue = F("Panker Str.");
break;
}
case 245393:
{
returnValue = F("Pankeweg");
break;
}
case 245394:
{
returnValue = F("Pankgrafenweg");
break;
}
case 245395:
{
returnValue = F("Pankofen Bahnhof");
break;
}
case 245396:
{
returnValue = F("Pankofen Dorfstr.");
break;
}
case 245397:
{
returnValue = F("Pankofen Irlwiesen");
break;
}
case 245398:
{
returnValue = F("Pankofen Moosstr.");
break;
}
case 245399:
{
returnValue = F("Pankofen Mühle");
break;
}
case 245400:
{
returnValue = F("Pankoferstr.");
break;
}
case 245401:
{
returnValue = F("Pankoken Heide");
break;
}
case 245402:
{
returnValue = F("Pankokenhügel");
break;
}
case 245403:
{
returnValue = F("Pankokenstr.");
break;
}
case 245404:
{
returnValue = F("Pankokenweg");
break;
}
case 245405:
{
returnValue = F("Pankokstr.");
break;
}
case 245406:
{
returnValue = F("Pankokweg");
break;
}
case 245407:
{
returnValue = F("Pankower Str.");
break;
}
case 245408:
{
returnValue = F("Pankower Weg");
break;
}
case 245409:
{
returnValue = F("Pankowweg");
break;
}
case 245410:
{
returnValue = F("Pankraitiusstr.");
break;
}
case 245411:
{
returnValue = F("Pankratiusgasse");
break;
}
case 245412:
{
returnValue = F("Pankratiushof");
break;
}
case 245413:
{
returnValue = F("Pankratiushofstr.");
break;
}
case 245414:
{
returnValue = F("Pankratiusplatz");
break;
}
case 245415:
{
returnValue = F("Pankratiusring");
break;
}
case 245416:
{
returnValue = F("Pankratiusstr.");
break;
}
case 245417:
{
returnValue = F("Pankratiusweg");
break;
}
case 245418:
{
returnValue = F("Pankraz-Pfeiffer-Str.");
break;
}
case 245419:
{
returnValue = F("Pankraz-Schmittlein-Str.");
break;
}
case 245420:
{
returnValue = F("Pankrazweg");
break;
}
case 245421:
{
returnValue = F("Pannacker Str.");
break;
}
case 245422:
{
returnValue = F("Panne Eichel");
break;
}
case 245423:
{
returnValue = F("Pannebakerstr.");
break;
}
case 245424:
{
returnValue = F("Pannebäckerstr.");
break;
}
case 245425:
{
returnValue = F("Pannebäckerweg");
break;
}
case 245426:
{
returnValue = F("Pannegasse");
break;
}
case 245427:
{
returnValue = F("Pannekamp");
break;
}
case 245428:
{
returnValue = F("Pannekeetstraat");
break;
}
case 245429:
{
returnValue = F("Pannekensweg");
break;
}
case 245430:
{
returnValue = F("Pannekogweg");
break;
}
case 245431:
{
returnValue = F("Pannekuk");
break;
}
case 245432:
{
returnValue = F("Pannemannstr.");
break;
}
case 245433:
{
returnValue = F("Pannenackerweg");
break;
}
case 245434:
{
returnValue = F("Pannenbekkerweg");
break;
}
case 245435:
{
returnValue = F("Pannenberg");
break;
}
case 245436:
{
returnValue = F("Pannenbergstr.");
break;
}
case 245437:
{
returnValue = F("Pannenborgstr.");
break;
}
case 245438:
{
returnValue = F("Pannenflickergang");
break;
}
case 245439:
{
returnValue = F("Pannengasse");
break;
}
case 245440:
{
returnValue = F("Pannenhofstr.");
break;
}
case 245441:
{
returnValue = F("Pannenklöpperstr.");
break;
}
case 245442:
{
returnValue = F("Pannenmühle");
break;
}
case 245443:
{
returnValue = F("Pannenmühlenweg");
break;
}
case 245444:
{
returnValue = F("Pannenschopenweg");
break;
}
case 245445:
{
returnValue = F("Pannensiefen");
break;
}
case 245446:
{
returnValue = F("Pannenweg");
break;
}
case 245447:
{
returnValue = F("Pannepad");
break;
}
case 245448:
{
returnValue = F("Panner Str.");
break;
}
case 245449:
{
returnValue = F("Pannerweg");
break;
}
case 245450:
{
returnValue = F("Panneschop");
break;
}
case 245451:
{
returnValue = F("Panneschopp");
break;
}
case 245452:
{
returnValue = F("Panneschopper Weg");
break;
}
case 245453:
{
returnValue = F("Panneschöpperstr.");
break;
}
case 245454:
{
returnValue = F("Pannesheider Str.");
break;
}
case 245455:
{
returnValue = F("Pannesser Weg");
break;
}
case 245456:
{
returnValue = F("Pannesstr.");
break;
}
case 245457:
{
returnValue = F("Pannewarf");
break;
}
case 245458:
{
returnValue = F("Panneweg");
break;
}
case 245459:
{
returnValue = F("Pannewiese");
break;
}
case 245460:
{
returnValue = F("Pannewitz");
break;
}
case 245461:
{
returnValue = F("Panngasse");
break;
}
case 245462:
{
returnValue = F("Pannhauser Str.");
break;
}
case 245463:
{
returnValue = F("Pannhauser Winkel");
break;
}
case 245464:
{
returnValue = F("Pannhof");
break;
}
case 245465:
{
returnValue = F("Pannhütte");
break;
}
case 245466:
{
returnValue = F("Pannhütter Str.");
break;
}
case 245467:
{
returnValue = F("Pannigkauer Dorfstr.");
break;
}
case 245468:
{
returnValue = F("Panningstr.");
break;
}
case 245469:
{
returnValue = F("Panningweg");
break;
}
case 245470:
{
returnValue = F("Pannkoken-Str.");
break;
}
case 245471:
{
returnValue = F("Pannofenstr.");
break;
}
case 245472:
{
returnValue = F("Pannonhalmastr.");
break;
}
case 245473:
{
returnValue = F("Pannschoppen");
break;
}
case 245474:
{
returnValue = F("Pannschoppenstr.");
break;
}
case 245475:
{
returnValue = F("Pannstieg");
break;
}
case 245476:
{
returnValue = F("Pannwitzallee");
break;
}
case 245477:
{
returnValue = F("Panofen");
break;
}
case 245478:
{
returnValue = F("Panorama");
break;
}
case 245479:
{
returnValue = F("Panorama Erlebnis Brücke");
break;
}
case 245480:
{
returnValue = F("Panorama Höhenweg");
break;
}
case 245481:
{
returnValue = F("Panorama Weg");
break;
}
case 245482:
{
returnValue = F("Panorama-Erlebnispfad");
break;
}
case 245483:
{
returnValue = F("Panorama-Kneippweg");
break;
}
case 245484:
{
returnValue = F("Panorama-Park");
break;
}
case 245485:
{
returnValue = F("Panorama-Rundweg - Frücht");
break;
}
case 245486:
{
returnValue = F("Panorama-Rundweg - Frücht (G2)");
break;
}
case 245487:
{
returnValue = F("Panorama-Weg");
break;
}
case 245488:
{
returnValue = F("Panoramaabfahrt");
break;
}
case 245489:
{
returnValue = F("Panoramablick");
break;
}
case 245490:
{
returnValue = F("Panoramabrücke überm Engelshaus");
break;
}
case 245491:
{
returnValue = F("Panoramahof");
break;
}
case 245492:
{
returnValue = F("Panoramahöhenweg");
break;
}
case 245493:
{
returnValue = F("Panoramapark");
break;
}
case 245494:
{
returnValue = F("Panoramapfad");
break;
}
case 245495:
{
returnValue = F("Panoramaplattform \"Oberkasseler Mensch");
break;
}
case 245496:
{
returnValue = F("Panoramaplatz");
break;
}
case 245497:
{
returnValue = F("Panoramaring");
break;
}
case 245498:
{
returnValue = F("Panoramarundweg");
break;
}
case 245499:
{
returnValue = F("Panoramasteg");
break;
}
case 245500:
{
returnValue = F("Panoramasteig");
break;
}
case 245501:
{
returnValue = F("Panoramastr.");
break;
}
case 245502:
{
returnValue = F("Panoramaterrasse");
break;
}
case 245503:
{
returnValue = F("Panoramawanderweg");
break;
}
case 245504:
{
returnValue = F("Panoramaweg");
break;
}
case 245505:
{
returnValue = F("Panoramaweg (KM)");
break;
}
case 245506:
{
returnValue = F("Panoramaweg / Schaarwändeweg");
break;
}
case 245507:
{
returnValue = F("Panoramaweg / Weinlehrpfad");
break;
}
case 245508:
{
returnValue = F("Panoramaweg J1");
break;
}
case 245509:
{
returnValue = F("Panoramaweg Ost");
break;
}
case 245510:
{
returnValue = F("Panoramaweg Stelle-St.Joh.Breite");
break;
}
case 245511:
{
returnValue = F("Panoramaweg Streuobst");
break;
}
case 245512:
{
returnValue = F("Panoramaweg Weilbach");
break;
}
case 245513:
{
returnValue = F("Panoramweg");
break;
}
case 245514:
{
returnValue = F("Panrasen");
break;
}
case 245515:
{
returnValue = F("Panroder Str.");
break;
}
case 245516:
{
returnValue = F("Panröder Str.");
break;
}
case 245517:
{
returnValue = F("Pans-Pad");
break;
}
case 245518:
{
returnValue = F("Panscheberg");
break;
}
case 245519:
{
returnValue = F("Pansdorf");
break;
}
case 245520:
{
returnValue = F("Pansdorfer Str.");
break;
}
case 245521:
{
returnValue = F("Pansevitz");
break;
}
case 245522:
{
returnValue = F("Pansheider Weg");
break;
}
case 245523:
{
returnValue = F("Panshäuser Str.");
break;
}
case 245524:
{
returnValue = F("Panstede");
break;
}
case 245525:
{
returnValue = F("Pansteweg");
break;
}
case 245526:
{
returnValue = F("Panstorf");
break;
}
case 245527:
{
returnValue = F("Pantaleonshof");
break;
}
case 245528:
{
returnValue = F("Pantaleonsmühlengasse");
break;
}
case 245529:
{
returnValue = F("Pantaleonsplatz");
break;
}
case 245530:
{
returnValue = F("Pantaleonsstr.");
break;
}
case 245531:
{
returnValue = F("Pantaleonstr.");
break;
}
case 245532:
{
returnValue = F("Pantaleonswall");
break;
}
case 245533:
{
returnValue = F("Pantelitz-Hauptstr.");
break;
}
case 245534:
{
returnValue = F("Pantelsweg");
break;
}
case 245535:
{
returnValue = F("Pantener Str.");
break;
}
case 245536:
{
returnValue = F("Pantenweg");
break;
}
case 245537:
{
returnValue = F("Panteraaweg");
break;
}
case 245538:
{
returnValue = F("Panthaag");
break;
}
case 245539:
{
returnValue = F("Pantherring");
break;
}
case 245540:
{
returnValue = F("Panthof");
break;
}
case 245541:
{
returnValue = F("Pantholz");
break;
}
case 245542:
{
returnValue = F("Panthöferweg");
break;
}
case 245543:
{
returnValue = F("Pantinenweg");
break;
}
case 245544:
{
returnValue = F("Pantoffelgasse");
break;
}
case 245545:
{
returnValue = F("Pantoffelweg");
break;
}
case 245546:
{
returnValue = F("Pantow");
break;
}
case 245547:
{
returnValue = F("Pantower Weg");
break;
}
case 245548:
{
returnValue = F("Pantrings Hof");
break;
}
case 245549:
{
returnValue = F("Panturensteig");
break;
}
case 245550:
{
returnValue = F("Pantzerhöhe");
break;
}
case 245551:
{
returnValue = F("Pantüffelweg");
break;
}
case 245552:
{
returnValue = F("Panzenberg");
break;
}
case 245553:
{
returnValue = F("Panzenlaake");
break;
}
case 245554:
{
returnValue = F("Panzer-Weg");
break;
}
case 245555:
{
returnValue = F("Panzerberg");
break;
}
case 245556:
{
returnValue = F("Panzerbrücke");
break;
}
case 245557:
{
returnValue = F("Panzerfuhrt");
break;
}
case 245558:
{
returnValue = F("Panzergraben");
break;
}
case 245559:
{
returnValue = F("Panzerleite");
break;
}
case 245560:
{
returnValue = F("Panzermacherstr.");
break;
}
case 245561:
{
returnValue = F("Panzerringstr.");
break;
}
case 245562:
{
returnValue = F("Panzerstr.");
break;
}
case 245563:
{
returnValue = F("Panzerteichweg");
break;
}
case 245564:
{
returnValue = F("Panzertrasse");
break;
}
case 245565:
{
returnValue = F("Panzertreck");
break;
}
case 245566:
{
returnValue = F("Panzerweg");
break;
}
case 245567:
{
returnValue = F("Panzhaus");
break;
}
case 245568:
{
returnValue = F("Panzmann");
break;
}
case 245569:
{
returnValue = F("Panzower Landweg");
break;
}
case 245570:
{
returnValue = F("Panzower Weg");
break;
}
case 245571:
{
returnValue = F("Paolaweg");
break;
}
case 245572:
{
returnValue = F("Paosostr.");
break;
}
case 245573:
{
returnValue = F("Paoters Pättken");
break;
}
case 245574:
{
returnValue = F("Paotersgängsken");
break;
}
case 245575:
{
returnValue = F("Papa-Klein-Wanderweg");
break;
}
case 245576:
{
returnValue = F("Papa-Schmid-Str.");
break;
}
case 245577:
{
returnValue = F("Papagei");
break;
}
case 245578:
{
returnValue = F("Papageien");
break;
}
case 245579:
{
returnValue = F("Papageienstr.");
break;
}
case 245580:
{
returnValue = F("Papageienweg");
break;
}
case 245581:
{
returnValue = F("Papagenoplatz");
break;
}
case 245582:
{
returnValue = F("Papagonenweg");
break;
}
case 245583:
{
returnValue = F("Papagoyenboom");
break;
}
case 245584:
{
returnValue = F("Papagoyenbrink");
break;
}
case 245585:
{
returnValue = F("Papen Ort Schneise");
break;
}
case 245586:
{
returnValue = F("Papenacker");
break;
}
case 245587:
{
returnValue = F("Papenacker Stieg");
break;
}
case 245588:
{
returnValue = F("Papenau");
break;
}
case 245589:
{
returnValue = F("Papenbeck");
break;
}
case 245590:
{
returnValue = F("Papenberg");
break;
}
case 245591:
{
returnValue = F("Papenbergallee");
break;
}
case 245592:
{
returnValue = F("Papenberger Str.");
break;
}
case 245593:
{
returnValue = F("Papenberghang");
break;
}
case 245594:
{
returnValue = F("Papenbergstr.");
break;
}
case 245595:
{
returnValue = F("Papenbergsweg");
break;
}
case 245596:
{
returnValue = F("Papenbergweg");
break;
}
case 245597:
{
returnValue = F("Papenbrede");
break;
}
case 245598:
{
returnValue = F("Papenbreede");
break;
}
case 245599:
{
returnValue = F("Papenbreite");
break;
}
case 245600:
{
returnValue = F("Papenbrink");
break;
}
case 245601:
{
returnValue = F("Papenbrook");
break;
}
case 245602:
{
returnValue = F("Papenbruch");
break;
}
case 245603:
{
returnValue = F("Papenbrucher Chaussee");
break;
}
case 245604:
{
returnValue = F("Papenbrucher Dorfstr.");
break;
}
case 245605:
{
returnValue = F("Papenbrücke");
break;
}
case 245606:
{
returnValue = F("Papenbrückstr.");
break;
}
case 245607:
{
returnValue = F("Papenburg");
break;
}
case 245608:
{
returnValue = F("Papenburg-Privatweg");
break;
}
case 245609:
{
returnValue = F("Papenburger Grenzweg");
break;
}
case 245610:
{
returnValue = F("Papenburger Str.");
break;
}
case 245611:
{
returnValue = F("Papenburger Weg");
break;
}
case 245612:
{
returnValue = F("Papenbusch");
break;
}
case 245613:
{
returnValue = F("Papenbuschstr.");
break;
}
case 245614:
{
returnValue = F("Papenbuschweg");
break;
}
case 245615:
{
returnValue = F("Papenbütteler Weg");
break;
}
case 245616:
{
returnValue = F("Papendahl");
break;
}
case 245617:
{
returnValue = F("Papendahlweg");
break;
}
case 245618:
{
returnValue = F("Papendelle");
break;
}
case 245619:
{
returnValue = F("Papendicksgäßchen");
break;
}
case 245620:
{
returnValue = F("Papendieckstr.");
break;
}
case 245621:
{
returnValue = F("Papendiek");
break;
}
case 245622:
{
returnValue = F("Papendieker Redder");
break;
}
case 245623:
{
returnValue = F("Papendieksfeld");
break;
}
case 245624:
{
returnValue = F("Papendiekstr.");
break;
}
case 245625:
{
returnValue = F("Papendoor");
break;
}
case 245626:
{
returnValue = F("Papendoren");
break;
}
case 245627:
{
returnValue = F("Papendorfer Chaussee");
break;
}
case 245628:
{
returnValue = F("Papendorfer Weg");
break;
}
case 245629:
{
returnValue = F("Papendyk");
break;
}
case 245630:
{
returnValue = F("Papeneschstr.");
break;
}
case 245631:
{
returnValue = F("Papenfeld");
break;
}
case 245632:
{
returnValue = F("Papenfeldweg");
break;
}
case 245633:
{
returnValue = F("Papengarland");
break;
}
case 245634:
{
returnValue = F("Papengasse");
break;
}
case 245635:
{
returnValue = F("Papengatt");
break;
}
case 245636:
{
returnValue = F("Papengeerenweg");
break;
}
case 245637:
{
returnValue = F("Papengestell");
break;
}
case 245638:
{
returnValue = F("Papengey");
break;
}
case 245639:
{
returnValue = F("Papengraben");
break;
}
case 245640:
{
returnValue = F("Papengrabenweg");
break;
}
case 245641:
{
returnValue = F("Papengrenze");
break;
}
case 245642:
{
returnValue = F("Papengrund");
break;
}
case 245643:
{
returnValue = F("Papengösenanger");
break;
}
case 245644:
{
returnValue = F("Papenhagen");
break;
}
case 245645:
{
returnValue = F("Papenhausen");
break;
}
case 245646:
{
returnValue = F("Papenhauser Str.");
break;
}
case 245647:
{
returnValue = F("Papenheide");
break;
}
case 245648:
{
returnValue = F("Papenheimer Str.");
break;
}
case 245649:
{
returnValue = F("Papenhoek");
break;
}
case 245650:
{
returnValue = F("Papenhof");
break;
}
case 245651:
{
returnValue = F("Papenhofskamp");
break;
}
case 245652:
{
returnValue = F("Papenholz");
break;
}
case 245653:
{
returnValue = F("Papenholzweg");
break;
}
case 245654:
{
returnValue = F("Papenhorst");
break;
}
case 245655:
{
returnValue = F("Papenhorster Str.");
break;
}
case 245656:
{
returnValue = F("Papenhusen");
break;
}
case 245657:
{
returnValue = F("Papenhäger Str.");
break;
}
case 245658:
{
returnValue = F("Papenhöhe");
break;
}
case 245659:
{
returnValue = F("Papeniusstr.");
break;
}
case 245660:
{
returnValue = F("Papenkamp");
break;
}
case 245661:
{
returnValue = F("Papenkampstr.");
break;
}
case 245662:
{
returnValue = F("Papenkampsweg");
break;
}
case 245663:
{
returnValue = F("Papenkämpe");
break;
}
case 245664:
{
returnValue = F("Papenkämpen");
break;
}
case 245665:
{
returnValue = F("Papenlah");
break;
}
case 245666:
{
returnValue = F("Papenloh");
break;
}
case 245667:
{
returnValue = F("Papenmarkt");
break;
}
case 245668:
{
returnValue = F("Papenmeierstr.");
break;
}
case 245669:
{
returnValue = F("Papenmoor");
break;
}
case 245670:
{
returnValue = F("Papenmoorlandsweg");
break;
}
case 245671:
{
returnValue = F("Papenmoorweg");
break;
}
case 245672:
{
returnValue = F("Papenriede");
break;
}
case 245673:
{
returnValue = F("Papenroder Str.");
break;
}
case 245674:
{
returnValue = F("Papensaals-Trift");
break;
}
case 245675:
{
returnValue = F("Papenschlade");
break;
}
case 245676:
{
returnValue = F("Papensiek");
break;
}
case 245677:
{
returnValue = F("Papenstegge");
break;
}
case 245678:
{
returnValue = F("Papenstieg");
break;
}
case 245679:
{
returnValue = F("Papenstiege");
break;
}
case 245680:
{
returnValue = F("Papenstr.");
break;
}
case 245681:
{
returnValue = F("Papenstuhl");
break;
}
case 245682:
{
returnValue = F("Papenstück");
break;
}
case 245683:
{
returnValue = F("Papental");
break;
}
case 245684:
{
returnValue = F("Papentalweg");
break;
}
case 245685:
{
returnValue = F("Papenteich");
break;
}
case 245686:
{
returnValue = F("Papenthal");
break;
}
case 245687:
{
returnValue = F("Papentwiete");
break;
}
case 245688:
{
returnValue = F("Papenwandweg");
break;
}
case 245689:
{
returnValue = F("Papenweg");
break;
}
case 245690:
{
returnValue = F("Papenweiden");
break;
}
case 245691:
{
returnValue = F("Papenwiese");
break;
}
case 245692:
{
returnValue = F("Papenwieser Weg");
break;
}
case 245693:
{
returnValue = F("Papenwinkel");
break;
}
case 245694:
{
returnValue = F("Papenwisch");
break;
}
case 245695:
{
returnValue = F("Paperbarg");
break;
}
case 245696:
{
returnValue = F("Papernei");
break;
}
case 245697:
{
returnValue = F("Papestr.");
break;
}
case 245698:
{
returnValue = F("Papferding");
break;
}
case 245699:
{
returnValue = F("Papiererstr.");
break;
}
case 245700:
{
returnValue = F("Papiererweg");
break;
}
case 245701:
{
returnValue = F("Papierfabrik");
break;
}
case 245702:
{
returnValue = F("Papierfabrikstr.");
break;
}
case 245703:
{
returnValue = F("Papiergarten");
break;
}
case 245704:
{
returnValue = F("Papiergasse");
break;
}
case 245705:
{
returnValue = F("Papiergraben");
break;
}
case 245706:
{
returnValue = F("Papiergäßle");
break;
}
case 245707:
{
returnValue = F("Papierholz");
break;
}
case 245708:
{
returnValue = F("Papiermacherkamp");
break;
}
case 245709:
{
returnValue = F("Papiermacherstr.");
break;
}
case 245710:
{
returnValue = F("Papiermacherweg");
break;
}
case 245711:
{
returnValue = F("Papiermühle");
break;
}
case 245712:
{
returnValue = F("Papiermühlen");
break;
}
case 245713:
{
returnValue = F("Papiermühlengasse");
break;
}
case 245714:
{
returnValue = F("Papiermühlenstr.");
break;
}
case 245715:
{
returnValue = F("Papiermühlenweg");
break;
}
case 245716:
{
returnValue = F("Papiermühlstr.");
break;
}
case 245717:
{
returnValue = F("Papiermühlweg");
break;
}
case 245718:
{
returnValue = F("Papiermüllerweg");
break;
}
case 245719:
{
returnValue = F("Papierteich");
break;
}
case 245720:
{
returnValue = F("Papierweg");
break;
}
case 245721:
{
returnValue = F("Papingastr.");
break;
}
case 245722:
{
returnValue = F("Papingsweg");
break;
}
case 245723:
{
returnValue = F("Papinplatz");
break;
}
case 245724:
{
returnValue = F("Papinstr.");
break;
}
case 245725:
{
returnValue = F("Papitzer Str.");
break;
}
case 245726:
{
returnValue = F("Paplitzer Chaussee");
break;
}
case 245727:
{
returnValue = F("Paplitzer Hauptstr.");
break;
}
case 245728:
{
returnValue = F("Paplitzer Str.");
break;
}
case 245729:
{
returnValue = F("Pappaulanlage");
break;
}
case 245730:
{
returnValue = F("Pappel-Wanderweg");
break;
}
case 245731:
{
returnValue = F("Pappelalle");
break;
}
case 245732:
{
returnValue = F("Pappelallee");
break;
}
case 245733:
{
returnValue = F("Pappelauer Str.");
break;
}
case 245734:
{
returnValue = F("Pappelauer Weg");
break;
}
case 245735:
{
returnValue = F("Pappelbachweg");
break;
}
case 245736:
{
returnValue = F("Pappelberg");
break;
}
case 245737:
{
returnValue = F("Pappelblick");
break;
}
case 245738:
{
returnValue = F("Pappelbrink");
break;
}
case 245739:
{
returnValue = F("Pappeldamm");
break;
}
case 245740:
{
returnValue = F("Pappeldyk");
break;
}
case 245741:
{
returnValue = F("Pappeleck");
break;
}
case 245742:
{
returnValue = F("Pappelfeldstr.");
break;
}
case 245743:
{
returnValue = F("Pappelgarten");
break;
}
case 245744:
{
returnValue = F("Pappelgasse");
break;
}
case 245745:
{
returnValue = F("Pappelgraben");
break;
}
case 245746:
{
returnValue = F("Pappelgrund");
break;
}
case 245747:
{
returnValue = F("Pappelhain");
break;
}
case 245748:
{
returnValue = F("Pappelhaldenweg");
break;
}
case 245749:
{
returnValue = F("Pappelhof");
break;
}
case 245750:
{
returnValue = F("Pappelhofer Weg");
break;
}
case 245751:
{
returnValue = F("Pappelhöhe");
break;
}
case 245752:
{
returnValue = F("Pappelkamp");
break;
}
case 245753:
{
returnValue = F("Pappelmühle");
break;
}
case 245754:
{
returnValue = F("Pappelnstr.");
break;
}
case 245755:
{
returnValue = F("Pappelntrift");
break;
}
case 245756:
{
returnValue = F("Pappelnweg");
break;
}
case 245757:
{
returnValue = F("Pappelpark");
break;
}
case 245758:
{
returnValue = F("Pappelpfädchen");
break;
}
case 245759:
{
returnValue = F("Pappelrain");
break;
}
case 245760:
{
returnValue = F("Pappelreihe");
break;
}
case 245761:
{
returnValue = F("Pappelring");
break;
}
case 245762:
{
returnValue = F("Pappelrondell");
break;
}
case 245763:
{
returnValue = F("Pappelschacht");
break;
}
case 245764:
{
returnValue = F("Pappelsiedlung");
break;
}
case 245765:
{
returnValue = F("Pappelsteig");
break;
}
case 245766:
{
returnValue = F("Pappelstieg");
break;
}
case 245767:
{
returnValue = F("Pappelstr.");
break;
}
case 245768:
{
returnValue = F("Pappelsweg");
break;
}
case 245769:
{
returnValue = F("Pappelteich");
break;
}
case 245770:
{
returnValue = F("Pappelwech");
break;
}
case 245771:
{
returnValue = F("Pappelweg");
break;
}
case 245772:
{
returnValue = F("Pappelweg Falkenhagen");
break;
}
case 245773:
{
returnValue = F("Pappelweidenstr.");
break;
}
case 245774:
{
returnValue = F("Pappelwende");
break;
}
case 245775:
{
returnValue = F("Pappelwiese");
break;
}
case 245776:
{
returnValue = F("Pappeläcker");
break;
}
case 245777:
{
returnValue = F("Pappenberger Str.");
break;
}
case 245778:
{
returnValue = F("Pappenberger Weg");
break;
}
case 245779:
{
returnValue = F("Pappenbergerstr.");
break;
}
case 245780:
{
returnValue = F("Pappenhaimstr.");
break;
}
case 245781:
{
returnValue = F("Pappenheimer Passage");
break;
}
case 245782:
{
returnValue = F("Pappenheimer Str.");
break;
}
case 245783:
{
returnValue = F("Pappenheimer Weg");
break;
}
case 245784:
{
returnValue = F("Pappenheimerstr.");
break;
}
case 245785:
{
returnValue = F("Pappenheimplatz");
break;
}
case 245786:
{
returnValue = F("Pappenheimring");
break;
}
case 245787:
{
returnValue = F("Pappenheimstr.");
break;
}
case 245788:
{
returnValue = F("Pappenheimweg");
break;
}
case 245789:
{
returnValue = F("Pappenholzweg");
break;
}
case 245790:
{
returnValue = F("Pappenstein");
break;
}
case 245791:
{
returnValue = F("Pappenstr.");
break;
}
case 245792:
{
returnValue = F("Papperitzstr.");
break;
}
case 245793:
{
returnValue = F("Pappermannstr.");
break;
}
case 245794:
{
returnValue = F("Pappertshainer Weg");
break;
}
case 245795:
{
returnValue = F("Pappisches Tor");
break;
}
case 245796:
{
returnValue = F("Pappmühle");
break;
}
case 245797:
{
returnValue = F("Pappritzer Str.");
break;
}
case 245798:
{
returnValue = F("Pappritzer Weg");
break;
}
case 245799:
{
returnValue = F("Papproschlinie");
break;
}
case 245800:
{
returnValue = F("Papprother Weg");
break;
}
case 245801:
{
returnValue = F("Pappstr.");
break;
}
case 245802:
{
returnValue = F("Paprikagasse");
break;
}
case 245803:
{
returnValue = F("Paprikastr.");
break;
}
case 245804:
{
returnValue = F("Papsdorfer Dorfstr.");
break;
}
case 245805:
{
returnValue = F("Papsdorfer Gasse");
break;
}
case 245806:
{
returnValue = F("Papst Benedikt XVI-Weg");
break;
}
case 245807:
{
returnValue = F("Papst-Benedikt-XVI.-Platz");
break;
}
case 245808:
{
returnValue = F("Papst-Benedikt-XVI.-Weg");
break;
}
case 245809:
{
returnValue = F("Papst-Johannes-Str.");
break;
}
case 245810:
{
returnValue = F("Papst-Leo-Str.");
break;
}
case 245811:
{
returnValue = F("Papst-Victor-Str.");
break;
}
case 245812:
{
returnValue = F("Papst-Viktor-Str.");
break;
}
case 245813:
{
returnValue = F("Papstdorfer Str.");
break;
}
case 245814:
{
returnValue = F("Papstdorfer Weg");
break;
}
case 245815:
{
returnValue = F("Papstgrund");
break;
}
case 245816:
{
returnValue = F("Papstorfer Weg");
break;
}
case 245817:
{
returnValue = F("Papyrerstr.");
break;
}
case 245818:
{
returnValue = F("Paquetstr.");
break;
}
case 245819:
{
returnValue = F("Parabutscher Weg");
break;
}
case 245820:
{
returnValue = F("Paracelsuskarree");
break;
}
case 245821:
{
returnValue = F("Paracelsuspark");
break;
}
case 245822:
{
returnValue = F("Paracelsusplatz");
break;
}
case 245823:
{
returnValue = F("Paracelsusring");
break;
}
case 245824:
{
returnValue = F("Paracelsusstr.");
break;
}
case 245825:
{
returnValue = F("Paracelsusstrasse");
break;
}
case 245826:
{
returnValue = F("Paracelsusweg");
break;
}
case 245827:
{
returnValue = F("Parade");
break;
}
case 245828:
{
returnValue = F("Paradeis");
break;
}
case 245829:
{
returnValue = F("Paradeisgasse");
break;
}
case 245830:
{
returnValue = F("Paradeisstr.");
break;
}
case 245831:
{
returnValue = F("Paradeisweg");
break;
}
case 245832:
{
returnValue = F("Paradeplatz");
break;
}
case 245833:
{
returnValue = F("Paradestr.");
break;
}
case 245834:
{
returnValue = F("Paradewall");
break;
}
case 245835:
{
returnValue = F("Paradewiese Westönnen");
break;
}
case 245836:
{
returnValue = F("Paradies");
break;
}
case 245837:
{
returnValue = F("Paradiesbenden");
break;
}
case 245838:
{
returnValue = F("Paradiesbuck");
break;
}
case 245839:
{
returnValue = F("Paradiesbuckweg");
break;
}
case 245840:
{
returnValue = F("Paradieseck");
break;
}
case 245841:
{
returnValue = F("Paradiesecke");
break;
}
case 245842:
{
returnValue = F("Paradieser Hof");
break;
}
case 245843:
{
returnValue = F("Paradieser Holzweg");
break;
}
case 245844:
{
returnValue = F("Paradieser Weg");
break;
}
case 245845:
{
returnValue = F("Paradiesfeld");
break;
}
case 245846:
{
returnValue = F("Paradiesgarten");
break;
}
case 245847:
{
returnValue = F("Paradiesgartenweg");
break;
}
case 245848:
{
returnValue = F("Paradiesgasse");
break;
}
case 245849:
{
returnValue = F("Paradiesgrund");
break;
}
case 245850:
{
returnValue = F("Paradiesgässchen");
break;
}
case 245851:
{
returnValue = F("Paradiesgäßchen");
break;
}
case 245852:
{
returnValue = F("Paradiesgäßle");
break;
}
case 245853:
{
returnValue = F("Paradieshof");
break;
}
case 245854:
{
returnValue = F("Paradiesinsel");
break;
}
case 245855:
{
returnValue = F("Paradieskoppel");
break;
}
case 245856:
{
returnValue = F("Paradieskraniche");
break;
}
case 245857:
{
returnValue = F("Paradiesmühle");
break;
}
case 245858:
{
returnValue = F("Paradiesmühlenweg");
break;
}
case 245859:
{
returnValue = F("Paradiesplatz");
break;
}
case 245860:
{
returnValue = F("Paradiesrandweg");
break;
}
case 245861:
{
returnValue = F("Paradiesrandweg (befestigt)");
break;
}
case 245862:
{
returnValue = F("Paradiesrandweg (unbefestigt)");
break;
}
case 245863:
{
returnValue = F("Paradiesring");
break;
}
case 245864:
{
returnValue = F("Paradiessiedlung");
break;
}
case 245865:
{
returnValue = F("Paradiesstr.");
break;
}
case 245866:
{
returnValue = F("Paradiestäle");
break;
}
case 245867:
{
returnValue = F("Paradiesweg");
break;
}
case 245868:
{
returnValue = F("Paradiesweg II");
break;
}
case 245869:
{
returnValue = F("Paradieswiese");
break;
}
case 245870:
{
returnValue = F("Paradiesäcker");
break;
}
case 245871:
{
returnValue = F("Paradoxweg");
break;
}
case 245872:
{
returnValue = F("Parallelstr.");
break;
}
case 245873:
{
returnValue = F("Parallelstrot");
break;
}
case 245874:
{
returnValue = F("Parallelweg");
break;
}
case 245875:
{
returnValue = F("Paraschkenmühle");
break;
}
case 245876:
{
returnValue = F("Parasolstr.");
break;
}
case 245877:
{
returnValue = F("Parasolweg");
break;
}
case 245878:
{
returnValue = F("Paravanstr.");
break;
}
case 245879:
{
returnValue = F("Paray-Str.");
break;
}
case 245880:
{
returnValue = F("Paray-le-Monial-Str.");
break;
}
case 245881:
{
returnValue = F("Parc Agricole");
break;
}
case 245882:
{
returnValue = F("Parc De Chavot Courcourt");
break;
}
case 245883:
{
returnValue = F("Parc d'Arnage");
break;
}
case 245884:
{
returnValue = F("Parc d'Issoire");
break;
}
case 245885:
{
returnValue = F("Parc de Châteaubriant");
break;
}
case 245886:
{
returnValue = F("Parc de La Garenne");
break;
}
case 245887:
{
returnValue = F("Parc de Meylan");
break;
}
case 245888:
{
returnValue = F("Parc de Rosy");
break;
}
case 245889:
{
returnValue = F("Parc de Saint Laurent du Pont - Stadtpark Herdorf");
break;
}
case 245890:
{
returnValue = F("Parc de Tarbes");
break;
}
case 245891:
{
returnValue = F("Parc du Bois");
break;
}
case 245892:
{
returnValue = F("Parc du Canton de Vibraye");
break;
}
case 245893:
{
returnValue = F("Parchamstr.");
break;
}
case 245894:
{
returnValue = F("Parchenblick");
break;
}
case 245895:
{
returnValue = F("Parchener Str.");
break;
}
case 245896:
{
returnValue = F("Parchenweg Badel");
break;
}
case 245897:
{
returnValue = F("Parchetstr.");
break;
}
case 245898:
{
returnValue = F("Parchetwiesen");
break;
}
case 245899:
{
returnValue = F("Parchimer Chaussee");
break;
}
case 245900:
{
returnValue = F("Parchimer Str.");
break;
}
case 245901:
{
returnValue = F("Parchimer Weg");
break;
}
case 245902:
{
returnValue = F("Parchow");
break;
}
case 245903:
{
returnValue = F("Parchower Landweg");
break;
}
case 245904:
{
returnValue = F("Parchwitzer Str.");
break;
}
case 245905:
{
returnValue = F("Parchwitzerstr.");
break;
}
case 245906:
{
returnValue = F("Parcours der Sinne");
break;
}
case 245907:
{
returnValue = F("Parcusstr.");
break;
}
case 245908:
{
returnValue = F("Parduin");
break;
}
case 245909:
{
returnValue = F("Parensengrund");
break;
}
case 245910:
{
returnValue = F("Parenser Str.");
break;
}
case 245911:
{
returnValue = F("Parenser Weg");
break;
}
case 245912:
{
returnValue = F("Paretzer Str.");
break;
}
case 245913:
{
returnValue = F("Paretzer Weg");
break;
}
case 245914:
{
returnValue = F("Paretzhofer Str.");
break;
}
case 245915:
{
returnValue = F("Pareyer Dorfstr.");
break;
}
case 245916:
{
returnValue = F("Pareyer Str.");
break;
}
case 245917:
{
returnValue = F("Pareyer Weg");
break;
}
case 245918:
{
returnValue = F("Pariciusstr.");
break;
}
case 245919:
{
returnValue = F("Pariner Berg");
break;
}
case 245920:
{
returnValue = F("Pariner Str.");
break;
}
case 245921:
{
returnValue = F("Paring");
break;
}
case 245922:
{
returnValue = F("Paringer Str.");
break;
}
case 245923:
{
returnValue = F("Pariser Allee");
break;
}
case 245924:
{
returnValue = F("Pariser Bahn");
break;
}
case 245925:
{
returnValue = F("Pariser Bogen");
break;
}
case 245926:
{
returnValue = F("Pariser Eck");
break;
}
case 245927:
{
returnValue = F("Pariser Gasse");
break;
}
case 245928:
{
returnValue = F("Pariser Gärten");
break;
}
case 245929:
{
returnValue = F("Pariser Hof");
break;
}
case 245930:
{
returnValue = F("Pariser Platz");
break;
}
case 245931:
{
returnValue = F("Pariser Ring");
break;
}
case 245932:
{
returnValue = F("Pariser Str.");
break;
}
case 245933:
{
returnValue = F("Pariser Weg");
break;
}
case 245934:
{
returnValue = F("Pariserweg");
break;
}
case 245935:
{
returnValue = F("Parisiusstr.");
break;
}
case 245936:
{
returnValue = F("Parisiusweg");
break;
}
case 245937:
{
returnValue = F("Parisstr.");
break;
}
case 245938:
{
returnValue = F("Park");
break;
}
case 245939:
{
returnValue = F("Park \"Alte Baumwolle");
break;
}
case 245940:
{
returnValue = F("Park \"Am Büttelseck");
break;
}
case 245941:
{
returnValue = F("Park \"An den alten Lehden");
break;
}
case 245942:
{
returnValue = F("Park \"Kleines Neckarle");
break;
}
case 245943:
{
returnValue = F("Park & Spielplatz");
break;
}
case 245944:
{
returnValue = F("Park & Spielplatz im Hinterhof");
break;
}
case 245945:
{
returnValue = F("Park Abenteuerspielplatz");
break;
}
case 245946:
{
returnValue = F("Park Ahlsdorf");
break;
}
case 245947:
{
returnValue = F("Park Alte Promenade");
break;
}
case 245948:
{
returnValue = F("Park Altkönigstift");
break;
}
case 245949:
{
returnValue = F("Park Andreaskirche");
break;
}
case 245950:
{
returnValue = F("Park Annarode");
break;
}
case 245951:
{
returnValue = F("Park Babelsberg");
break;
}
case 245952:
{
returnValue = F("Park Beerheide");
break;
}
case 245953:
{
returnValue = F("Park Berkum");
break;
}
case 245954:
{
returnValue = F("Park Bischheim");
break;
}
case 245955:
{
returnValue = F("Park Blaues Haus");
break;
}
case 245956:
{
returnValue = F("Park Brühl");
break;
}
case 245957:
{
returnValue = F("Park Büdingen");
break;
}
case 245958:
{
returnValue = F("Park Cursdorf");
break;
}
case 245959:
{
returnValue = F("Park Dammendorf");
break;
}
case 245960:
{
returnValue = F("Park Dösen");
break;
}
case 245961:
{
returnValue = F("Park Ebereschenweg");
break;
}
case 245962:
{
returnValue = F("Park Flemmingberg");
break;
}
case 245963:
{
returnValue = F("Park Fort Unterer Eselsberg");
break;
}
case 245964:
{
returnValue = F("Park Franziskuskirche");
break;
}
case 245965:
{
returnValue = F("Park Freilichtmuseum");
break;
}
case 245966:
{
returnValue = F("Park Gartenstr.");
break;
}
case 245967:
{
returnValue = F("Park Gerstetten");
break;
}
case 245968:
{
returnValue = F("Park Geräumt");
break;
}
case 245969:
{
returnValue = F("Park Glauzig");
break;
}
case 245970:
{
returnValue = F("Park Goethestr.");
break;
}
case 245971:
{
returnValue = F("Park Großwechsungen");
break;
}
case 245972:
{
returnValue = F("Park Grödel");
break;
}
case 245973:
{
returnValue = F("Park Gut Ermlitz");
break;
}
case 245974:
{
returnValue = F("Park Gut Hodenberg");
break;
}
case 245975:
{
returnValue = F("Park HEWAG-Seniorenstift");
break;
}
case 245976:
{
returnValue = F("Park Hamme");
break;
}
case 245977:
{
returnValue = F("Park Hauptplatz");
break;
}
case 245978:
{
returnValue = F("Park Haus Bachem");
break;
}
case 245979:
{
returnValue = F("Park Haus Bodelschwingh");
break;
}
case 245980:
{
returnValue = F("Park Haxtum");
break;
}
case 245981:
{
returnValue = F("Park Heikendorfer Wasserweg");
break;
}
case 245982:
{
returnValue = F("Park Heinrichslust");
break;
}
case 245983:
{
returnValue = F("Park Historisches Kraftwerk");
break;
}
case 245984:
{
returnValue = F("Park Hohenalsdorf");
break;
}
case 245985:
{
returnValue = F("Park Hohenlind");
break;
}
case 245986:
{
returnValue = F("Park Hohenrode");
break;
}
case 245987:
{
returnValue = F("Park Holdheim");
break;
}
case 245988:
{
returnValue = F("Park Horten-Hauptverwaltung");
break;
}
case 245989:
{
returnValue = F("Park Höpkens Ruh");
break;
}
case 245990:
{
returnValue = F("Park Hüle Donnstetten");
break;
}
case 245991:
{
returnValue = F("Park Jänkendorf");
break;
}
case 245992:
{
returnValue = F("Park Kattenbrook");
break;
}
case 245993:
{
returnValue = F("Park Kattenbrook IV");
break;
}
case 245994:
{
returnValue = F("Park Kleinschmalkalden");
break;
}
case 245995:
{
returnValue = F("Park Kloster St. Albert");
break;
}
case 245996:
{
returnValue = F("Park Köchstedt");
break;
}
case 245997:
{
returnValue = F("Park Laer");
break;
}
case 245998:
{
returnValue = F("Park Lesende Kinder");
break;
}
case 245999:
{
returnValue = F("Park Lessingstr.");
break;
}
case 246000:
{
returnValue = F("Park Lichtenhagen");
break;
}
case 246001:
{
returnValue = F("Park Lilienweg");
break;
}
case 246002:
{
returnValue = F("Park Lindenberg");
break;
}
case 246003:
{
returnValue = F("Park Lohmarhöhe");
break;
}
case 246004:
{
returnValue = F("Park Marien-Hospital");
break;
}
case 246005:
{
returnValue = F("Park Marienthal");
break;
}
case 246006:
{
returnValue = F("Park Martin-Luther-Kirche");
break;
}
case 246007:
{
returnValue = F("Park Melkof");
break;
}
case 246008:
{
returnValue = F("Park Mendelssohn");
break;
}
case 246009:
{
returnValue = F("Park Mitterwöhr");
break;
}
case 246010:
{
returnValue = F("Park Moneteau");
break;
}
case 246011:
{
returnValue = F("Park Monrepos");
break;
}
case 246012:
{
returnValue = F("Park Naunhof");
break;
}
case 246013:
{
returnValue = F("Park Nells Ländchen");
break;
}
case 246014:
{
returnValue = F("Park Neu Poserin");
break;
}
case 246015:
{
returnValue = F("Park Neue Welt");
break;
}
case 246016:
{
returnValue = F("Park Neulautern");
break;
}
case 246017:
{
returnValue = F("Park Niederprümer Hof");
break;
}
case 246018:
{
returnValue = F("Park Niederreichenbach");
break;
}
case 246019:
{
returnValue = F("Park Nord-Ost");
break;
}
case 246020:
{
returnValue = F("Park Nürnberger Str.");
break;
}
case 246021:
{
returnValue = F("Park Obere Stadt");
break;
}
case 246022:
{
returnValue = F("Park Oberförsterei");
break;
}
case 246023:
{
returnValue = F("Park Odenwaldhalle");
break;
}
case 246024:
{
returnValue = F("Park Ortsmitte");
break;
}
case 246025:
{
returnValue = F("Park Osterbruchwiesen");
break;
}
case 246026:
{
returnValue = F("Park Ottlar");
break;
}
case 246027:
{
returnValue = F("Park Overwegstr.");
break;
}
case 246028:
{
returnValue = F("Park Prößdorf");
break;
}
case 246029:
{
returnValue = F("Park Quellberg");
break;
}
case 246030:
{
returnValue = F("Park Reinkenheide");
break;
}
case 246031:
{
returnValue = F("Park Reitersdorf");
break;
}
case 246032:
{
returnValue = F("Park Rembrücker Weg");
break;
}
case 246033:
{
returnValue = F("Park Robert-Straube-Hof");
break;
}
case 246034:
{
returnValue = F("Park Rosenhöhe");
break;
}
case 246035:
{
returnValue = F("Park Rösa");
break;
}
case 246036:
{
returnValue = F("Park Sachsenberg");
break;
}
case 246037:
{
returnValue = F("Park Saint-Laurent-Nouan");
break;
}
case 246038:
{
returnValue = F("Park Sanssouci");
break;
}
case 246039:
{
returnValue = F("Park Saroltastr.");
break;
}
case 246040:
{
returnValue = F("Park Scheibenberg");
break;
}
case 246041:
{
returnValue = F("Park Schlanstedt");
break;
}
case 246042:
{
returnValue = F("Park Schloss Hersberg");
break;
}
case 246043:
{
returnValue = F("Park Schlosskirche");
break;
}
case 246044:
{
returnValue = F("Park Schollenweg");
break;
}
case 246045:
{
returnValue = F("Park Schöneiche");
break;
}
case 246046:
{
returnValue = F("Park Schönfeld");
break;
}
case 246047:
{
returnValue = F("Park Seniorenheim");
break;
}
case 246048:
{
returnValue = F("Park Seniorenresidenz");
break;
}
case 246049:
{
returnValue = F("Park Seniorenstift Hohenwald");
break;
}
case 246050:
{
returnValue = F("Park Shedhalle");
break;
}
case 246051:
{
returnValue = F("Park Spielplatz beim Gallusturm");
break;
}
case 246052:
{
returnValue = F("Park Spielplatz/Hartplatz");
break;
}
case 246053:
{
returnValue = F("Park St. Antonius-Klinik");
break;
}
case 246054:
{
returnValue = F("Park St. Nikola");
break;
}
case 246055:
{
returnValue = F("Park St. Ägidius");
break;
}
case 246056:
{
returnValue = F("Park Thoholte");
break;
}
case 246057:
{
returnValue = F("Park Toucy");
break;
}
case 246058:
{
returnValue = F("Park Triestewitz");
break;
}
case 246059:
{
returnValue = F("Park Unterer Kuhberg");
break;
}
case 246060:
{
returnValue = F("Park Unterlauterbach");
break;
}
case 246061:
{
returnValue = F("Park Verrières");
break;
}
case 246062:
{
returnValue = F("Park Villa Berg");
break;
}
case 246063:
{
returnValue = F("Park Villa Böhm");
break;
}
case 246064:
{
returnValue = F("Park Villa Gehben");
break;
}
case 246065:
{
returnValue = F("Park Villa Merkens");
break;
}
case 246066:
{
returnValue = F("Park Ville d’Eu");
break;
}
case 246067:
{
returnValue = F("Park Waginger Str.");
break;
}
case 246068:
{
returnValue = F("Park Wahrenbrück");
break;
}
case 246069:
{
returnValue = F("Park Wasserburger Str.");
break;
}
case 246070:
{
returnValue = F("Park Werne");
break;
}
case 246071:
{
returnValue = F("Park Westick");
break;
}
case 246072:
{
returnValue = F("Park Wiesengrund");
break;
}
case 246073:
{
returnValue = F("Park Wilhelmshöhe");
break;
}
case 246074:
{
returnValue = F("Park Wohnanlage \"Klein Venedig");
break;
}
case 246075:
{
returnValue = F("Park Wülfingerode");
break;
}
case 246076:
{
returnValue = F("Park am Abundus");
break;
}
case 246077:
{
returnValue = F("Park am Altersheim");
break;
}
case 246078:
{
returnValue = F("Park am Bahnhof");
break;
}
case 246079:
{
returnValue = F("Park am Barniner See");
break;
}
case 246080:
{
returnValue = F("Park am Bezirksamt Straßdorf");
break;
}
case 246081:
{
returnValue = F("Park am Bodelschwinghaus");
break;
}
case 246082:
{
returnValue = F("Park am Born");
break;
}
case 246083:
{
returnValue = F("Park am Brechener Turm");
break;
}
case 246084:
{
returnValue = F("Park am Brunnen");
break;
}
case 246085:
{
returnValue = F("Park am Bäumchen");
break;
}
case 246086:
{
returnValue = F("Park am Caritasheim");
break;
}
case 246087:
{
returnValue = F("Park am Dampferhaus");
break;
}
case 246088:
{
returnValue = F("Park am Denkmal");
break;
}
case 246089:
{
returnValue = F("Park am Diakonie-Zentrum");
break;
}
case 246090:
{
returnValue = F("Park am Diakonissenhaus");
break;
}
case 246091:
{
returnValue = F("Park am Dorfteich");
break;
}
case 246092:
{
returnValue = F("Park am Draisweg");
break;
}
case 246093:
{
returnValue = F("Park am Durlesbach");
break;
}
case 246094:
{
returnValue = F("Park am Ebershaldenfriedhof");
break;
}
case 246095:
{
returnValue = F("Park am Ehrenmal");
break;
}
case 246096:
{
returnValue = F("Park am Entenbach");
break;
}
case 246097:
{
returnValue = F("Park am Erichsberg");
break;
}
case 246098:
{
returnValue = F("Park am Fischerdorf");
break;
}
case 246099:
{
returnValue = F("Park am Frankengraben");
break;
}
case 246100:
{
returnValue = F("Park am Friedensplatz");
break;
}
case 246101:
{
returnValue = F("Park am Friedhof");
break;
}
case 246102:
{
returnValue = F("Park am Frosch");
break;
}
case 246103:
{
returnValue = F("Park am Fröscheteich");
break;
}
case 246104:
{
returnValue = F("Park am Fährsteg");
break;
}
case 246105:
{
returnValue = F("Park am Fürstenwall");
break;
}
case 246106:
{
returnValue = F("Park am Gedenkstein");
break;
}
case 246107:
{
returnValue = F("Park am Gradierwerk");
break;
}
case 246108:
{
returnValue = F("Park am Graulturm");
break;
}
case 246109:
{
returnValue = F("Park am Gründungsstein");
break;
}
case 246110:
{
returnValue = F("Park am Haus Columban");
break;
}
case 246111:
{
returnValue = F("Park am Haus der Armee");
break;
}
case 246112:
{
returnValue = F("Park am Haus der Stadtgeschichte");
break;
}
case 246113:
{
returnValue = F("Park am Hechtgraben");
break;
}
case 246114:
{
returnValue = F("Park am Hexenhäusle");
break;
}
case 246115:
{
returnValue = F("Park am Hockey-/Basketplatz");
break;
}
case 246116:
{
returnValue = F("Park am Kinderhort");
break;
}
case 246117:
{
returnValue = F("Park am Kirchplatz");
break;
}
case 246118:
{
returnValue = F("Park am Klein Erzgebirge");
break;
}
case 246119:
{
returnValue = F("Park am Klinggraben");
break;
}
case 246120:
{
returnValue = F("Park am Kreishaus 2");
break;
}
case 246121:
{
returnValue = F("Park am Kreuzberger Ring");
break;
}
case 246122:
{
returnValue = F("Park am Kriegerdenkmal");
break;
}
case 246123:
{
returnValue = F("Park am Kriegsdenkmal in Bürgel");
break;
}
case 246124:
{
returnValue = F("Park am Königsknoll");
break;
}
case 246125:
{
returnValue = F("Park am Mehlsack");
break;
}
case 246126:
{
returnValue = F("Park am Melkhus");
break;
}
case 246127:
{
returnValue = F("Park am Mittelteich");
break;
}
case 246128:
{
returnValue = F("Park am Museum");
break;
}
case 246129:
{
returnValue = F("Park am Mäuseturm");
break;
}
case 246130:
{
returnValue = F("Park am Mühlbach");
break;
}
case 246131:
{
returnValue = F("Park am Mühlteich");
break;
}
case 246132:
{
returnValue = F("Park am Neggenborn");
break;
}
case 246133:
{
returnValue = F("Park am Neubaugebiet");
break;
}
case 246134:
{
returnValue = F("Park am Nußbaum");
break;
}
case 246135:
{
returnValue = F("Park am Nägleinsteich");
break;
}
case 246136:
{
returnValue = F("Park am Parnaß");
break;
}
case 246137:
{
returnValue = F("Park am Pferdeteich");
break;
}
case 246138:
{
returnValue = F("Park am Pflegeheim");
break;
}
case 246139:
{
returnValue = F("Park am Planetenviertel");
break;
}
case 246140:
{
returnValue = F("Park am Rathaus");
break;
}
case 246141:
{
returnValue = F("Park am Rhein");
break;
}
case 246142:
{
returnValue = F("Park am Rittergut Knau");
break;
}
case 246143:
{
returnValue = F("Park am Rothesportplatz");
break;
}
case 246144:
{
returnValue = F("Park am Schießweiher");
break;
}
case 246145:
{
returnValue = F("Park am Schloss");
break;
}
case 246146:
{
returnValue = F("Park am Schmillenberg");
break;
}
case 246147:
{
returnValue = F("Park am Schulgelände");
break;
}
case 246148:
{
returnValue = F("Park am Schulzentrum");
break;
}
case 246149:
{
returnValue = F("Park am Schwanenteich");
break;
}
case 246150:
{
returnValue = F("Park am See");
break;
}
case 246151:
{
returnValue = F("Park am Sportplatz");
break;
}
case 246152:
{
returnValue = F("Park am Stadthof");
break;
}
case 246153:
{
returnValue = F("Park am Stadtring");
break;
}
case 246154:
{
returnValue = F("Park am Stadtweiher");
break;
}
case 246155:
{
returnValue = F("Park am Storchenturm");
break;
}
case 246156:
{
returnValue = F("Park am Südfeld");
break;
}
case 246157:
{
returnValue = F("Park am Tausendquell");
break;
}
case 246158:
{
returnValue = F("Park am Tiefenbach");
break;
}
case 246159:
{
returnValue = F("Park am Torhaus");
break;
}
case 246160:
{
returnValue = F("Park am Wall");
break;
}
case 246161:
{
returnValue = F("Park am Wasserschloss");
break;
}
case 246162:
{
returnValue = F("Park am Weichpfuhl");
break;
}
case 246163:
{
returnValue = F("Park am Wenzelsring");
break;
}
case 246164:
{
returnValue = F("Park am Wiesenberg");
break;
}
case 246165:
{
returnValue = F("Park am Wilhelmsturm");
break;
}
case 246166:
{
returnValue = F("Park am Wochinger Spitz");
break;
}
case 246167:
{
returnValue = F("Park am alten Bahndamm");
break;
}
case 246168:
{
returnValue = F("Park am alten Bahnhof");
break;
}
case 246169:
{
returnValue = F("Park am alten Friedhof");
break;
}
case 246170:
{
returnValue = F("Park am alten Spritzenhaus");
break;
}
case 246171:
{
returnValue = F("Park am alten Stützpunkt");
break;
}
case 246172:
{
returnValue = F("Park am ehemaligen Heizkraftwerk");
break;
}
case 246173:
{
returnValue = F("Park am see");
break;
}
case 246174:
{
returnValue = F("Park am Ölberg");
break;
}
case 246175:
{
returnValue = F("Park an den Fischteichen");
break;
}
case 246176:
{
returnValue = F("Park an der Blumensteiner Str.");
break;
}
case 246177:
{
returnValue = F("Park an der Eisenbach");
break;
}
case 246178:
{
returnValue = F("Park an der Etzoldschen Sandgrube");
break;
}
case 246179:
{
returnValue = F("Park an der FH");
break;
}
case 246180:
{
returnValue = F("Park an der Gehestr.");
break;
}
case 246181:
{
returnValue = F("Park an der Gemeinde");
break;
}
case 246182:
{
returnValue = F("Park an der Herkulesstr.");
break;
}
case 246183:
{
returnValue = F("Park an der Hundsburg");
break;
}
case 246184:
{
returnValue = F("Park an der Johanniskirche");
break;
}
case 246185:
{
returnValue = F("Park an der Katershöhe");
break;
}
case 246186:
{
returnValue = F("Park an der Kirche");
break;
}
case 246187:
{
returnValue = F("Park an der Kirche St. Peter");
break;
}
case 246188:
{
returnValue = F("Park an der Liebfrauenstr.");
break;
}
case 246189:
{
returnValue = F("Park an der Liebigstr.");
break;
}
case 246190:
{
returnValue = F("Park an der Loherhofstr.");
break;
}
case 246191:
{
returnValue = F("Park an der Michaelskirche");
break;
}
case 246192:
{
returnValue = F("Park an der Mühle");
break;
}
case 246193:
{
returnValue = F("Park an der Osterwaldstr. Süd");
break;
}
case 246194:
{
returnValue = F("Park an der Pferdekoppel");
break;
}
case 246195:
{
returnValue = F("Park an der Plinganserstr.");
break;
}
case 246196:
{
returnValue = F("Park an der Schleuse");
break;
}
case 246197:
{
returnValue = F("Park an der Seniorenresidenz Weismain");
break;
}
case 246198:
{
returnValue = F("Park an der Sparkasse");
break;
}
case 246199:
{
returnValue = F("Park an der Stadtmauer");
break;
}
case 246200:
{
returnValue = F("Park an der Wallanlage");
break;
}
case 246201:
{
returnValue = F("Park an der alten Burgmauer");
break;
}
case 246202:
{
returnValue = F("Park an der alten Windmühle");
break;
}
case 246203:
{
returnValue = F("Park an der neuen Ortsmitte");
break;
}
case 246204:
{
returnValue = F("Park bei T2");
break;
}
case 246205:
{
returnValue = F("Park bei der Kirche");
break;
}
case 246206:
{
returnValue = F("Park beim Altenheim");
break;
}
case 246207:
{
returnValue = F("Park beim Dorfplatz Ocholt");
break;
}
case 246208:
{
returnValue = F("Park der Alternative WohnOase");
break;
}
case 246209:
{
returnValue = F("Park der Andersdenkenden");
break;
}
case 246210:
{
returnValue = F("Park der Begegnung (Alter Friedhof)");
break;
}
case 246211:
{
returnValue = F("Park der Blockhäuser");
break;
}
case 246212:
{
returnValue = F("Park der Chemiearbeiter");
break;
}
case 246213:
{
returnValue = F("Park der Demokratie");
break;
}
case 246214:
{
returnValue = F("Park der Deutschen Einheit");
break;
}
case 246215:
{
returnValue = F("Park der Erinnerungen");
break;
}
case 246216:
{
returnValue = F("Park der Freundschaft");
break;
}
case 246217:
{
returnValue = F("Park der Generationen");
break;
}
case 246218:
{
returnValue = F("Park der Halleschen Motorenwerke");
break;
}
case 246219:
{
returnValue = F("Park der Jahreszeiten");
break;
}
case 246220:
{
returnValue = F("Park der Jugend");
break;
}
case 246221:
{
returnValue = F("Park der Kreativität");
break;
}
case 246222:
{
returnValue = F("Park der Maria-Ward");
break;
}
case 246223:
{
returnValue = F("Park der Menschenrechte");
break;
}
case 246224:
{
returnValue = F("Park der Nationen");
break;
}
case 246225:
{
returnValue = F("Park der Opfer des Faschismus");
break;
}
case 246226:
{
returnValue = F("Park der Parkklinik");
break;
}
case 246227:
{
returnValue = F("Park der Partner- und Patenstädte");
break;
}
case 246228:
{
returnValue = F("Park der Partnerstädte");
break;
}
case 246229:
{
returnValue = F("Park der Partnerstädte Gouda&Solingen");
break;
}
case 246230:
{
returnValue = F("Park der Ruhe");
break;
}
case 246231:
{
returnValue = F("Park der Sinne");
break;
}
case 246232:
{
returnValue = F("Park der Sinne - Kneippanlage - Der Barfußpfad");
break;
}
case 246233:
{
returnValue = F("Park der Solidarität");
break;
}
case 246234:
{
returnValue = F("Park der Stadtklinik Frankenthal");
break;
}
case 246235:
{
returnValue = F("Park der Villa Schaaffhausen");
break;
}
case 246236:
{
returnValue = F("Park des Caritas-Centrum St. Elisabeth");
break;
}
case 246237:
{
returnValue = F("Park des Energie Museum");
break;
}
case 246238:
{
returnValue = F("Park des Friedens");
break;
}
case 246239:
{
returnValue = F("Park des Gedenkens");
break;
}
case 246240:
{
returnValue = F("Park des Hoffens");
break;
}
case 246241:
{
returnValue = F("Park des Kraszewski-Museums");
break;
}
case 246242:
{
returnValue = F("Park des Mutterstifts");
break;
}
case 246243:
{
returnValue = F("Park des Reha-Zentrums");
break;
}
case 246244:
{
returnValue = F("Park des Rittergut Rosenthal");
break;
}
case 246245:
{
returnValue = F("Park des Wohnquartiers \"Am Eisweiher");
break;
}
case 246246:
{
returnValue = F("Park des ehemaligen Rittergutes");
break;
}
case 246247:
{
returnValue = F("Park des technischen Rathauses");
break;
}
case 246248:
{
returnValue = F("Park geplant");
break;
}
case 246249:
{
returnValue = F("Park im EKS");
break;
}
case 246250:
{
returnValue = F("Park im Eichenhof");
break;
}
case 246251:
{
returnValue = F("Park im Garten des Volksmusikarchivs");
break;
}
case 246252:
{
returnValue = F("Park im Gereut");
break;
}
case 246253:
{
returnValue = F("Park im Künstlerviertel");
break;
}
case 246254:
{
returnValue = F("Park im Paul Gerhardt Stift");
break;
}
case 246255:
{
returnValue = F("Park im Schwanengraben/Platanenallee");
break;
}
case 246256:
{
returnValue = F("Park im Zentrum Weilmünster");
break;
}
case 246257:
{
returnValue = F("Park im ehemaligen Hofgarten");
break;
}
case 246258:
{
returnValue = F("Park in Gelb");
break;
}
case 246259:
{
returnValue = F("Park in der Ritzbach");
break;
}
case 246260:
{
returnValue = F("Park mit Brunnen und Bank");
break;
}
case 246261:
{
returnValue = F("Park mit Holzkreuz");
break;
}
case 246262:
{
returnValue = F("Park mit Kriegerdenkmal");
break;
}
case 246263:
{
returnValue = F("Park mit Marienstele");
break;
}
case 246264:
{
returnValue = F("Park mit Schützenheim, Fußballplatz und Osterfeuerplatz");
break;
}
case 246265:
{
returnValue = F("Park mit Spielgeräten");
break;
}
case 246266:
{
returnValue = F("Park mit Stahlkunstwerk am Angelweiher");
break;
}
case 246267:
{
returnValue = F("Park rings um die Japane Steinlaterne");
break;
}
case 246268:
{
returnValue = F("Park rund um den Wasserturm");
break;
}
case 246269:
{
returnValue = F("Park um Kirche");
break;
}
case 246270:
{
returnValue = F("Park um Lutherkirche");
break;
}
case 246271:
{
returnValue = F("Park um den Ankumer See");
break;
}
case 246272:
{
returnValue = F("Park und Schloss Altenstein");
break;
}
case 246273:
{
returnValue = F("Park und Schloss Molsdorf");
break;
}
case 246274:
{
returnValue = F("Park und Spielplatz");
break;
}
case 246275:
{
returnValue = F("Park und Spielplatz Barnin");
break;
}
case 246276:
{
returnValue = F("Park von Haus 25");
break;
}
case 246277:
{
returnValue = F("Park von Papen");
break;
}
case 246278:
{
returnValue = F("Park zur Handwerkerbrücke");
break;
}
case 246279:
{
returnValue = F("Park-Str.");
break;
}
case 246280:
{
returnValue = F("Park-der-Sinne-Weg");
break;
}
case 246281:
{
returnValue = F("Park-klinikum");
break;
}
case 246282:
{
returnValue = F("Park-von-Nell");
break;
}
case 246283:
{
returnValue = F("Park/ Haus Bethanien");
break;
}
case 246284:
{
returnValue = F("Parkallee");
break;
}
case 246285:
{
returnValue = F("Parkallee an der Sandstr.");
break;
}
case 246286:
{
returnValue = F("Parkanlage");
break;
}
case 246287:
{
returnValue = F("Parkanlage - Potters-Bar-Platz");
break;
}
case 246288:
{
returnValue = F("Parkanlage - Spitalplatz");
break;
}
case 246289:
{
returnValue = F("Parkanlage Altenzentrum Bündelberg");
break;
}
case 246290:
{
returnValue = F("Parkanlage Am Albertplatz");
break;
}
case 246291:
{
returnValue = F("Parkanlage Am Stadtteich");
break;
}
case 246292:
{
returnValue = F("Parkanlage Berliner Ring");
break;
}
case 246293:
{
returnValue = F("Parkanlage Bickensohler Winzergenossenschaft");
break;
}
case 246294:
{
returnValue = F("Parkanlage Brunnen / Spielplatz");
break;
}
case 246295:
{
returnValue = F("Parkanlage Burgerweiher");
break;
}
case 246296:
{
returnValue = F("Parkanlage Ehrenmal");
break;
}
case 246297:
{
returnValue = F("Parkanlage Gutspark Großziethen");
break;
}
case 246298:
{
returnValue = F("Parkanlage Göggingen");
break;
}
case 246299:
{
returnValue = F("Parkanlage Haus Rodenberg");
break;
}
case 246300:
{
returnValue = F("Parkanlage Haus Wenge");
break;
}
case 246301:
{
returnValue = F("Parkanlage Hohenacker");
break;
}
case 246302:
{
returnValue = F("Parkanlage Hotel Harzresidenz");
break;
}
case 246303:
{
returnValue = F("Parkanlage Johann-Peter-Wagner-Kreuz");
break;
}
case 246304:
{
returnValue = F("Parkanlage Kastaniengarten");
break;
}
case 246305:
{
returnValue = F("Parkanlage Kirchberg");
break;
}
case 246306:
{
returnValue = F("Parkanlage Königsplatz");
break;
}
case 246307:
{
returnValue = F("Parkanlage Künstlerhaus Gasteiger");
break;
}
case 246308:
{
returnValue = F("Parkanlage Neuprüll");
break;
}
case 246309:
{
returnValue = F("Parkanlage Nizza");
break;
}
case 246310:
{
returnValue = F("Parkanlage Obststreuwiese");
break;
}
case 246311:
{
returnValue = F("Parkanlage Reha-Zentrum");
break;
}
case 246312:
{
returnValue = F("Parkanlage Rittergut Leppersdorf");
break;
}
case 246313:
{
returnValue = F("Parkanlage Seenanlagen");
break;
}
case 246314:
{
returnValue = F("Parkanlage Selmsdorf");
break;
}
case 246315:
{
returnValue = F("Parkanlage Stadtweiher");
break;
}
case 246316:
{
returnValue = F("Parkanlage Sulzbachtal");
break;
}
case 246317:
{
returnValue = F("Parkanlage Tettaustr.");
break;
}
case 246318:
{
returnValue = F("Parkanlage Wappenhensch");
break;
}
case 246319:
{
returnValue = F("Parkanlage Werre Ufer");
break;
}
case 246320:
{
returnValue = F("Parkanlage Wolfstift");
break;
}
case 246321:
{
returnValue = F("Parkanlage am Kriegerdenkmal");
break;
}
case 246322:
{
returnValue = F("Parkanlage an der Ems");
break;
}
case 246323:
{
returnValue = F("Parkanlage an der Pförtchenstr.");
break;
}
case 246324:
{
returnValue = F("Parkanlage auf dem Stadtwasserwerk");
break;
}
case 246325:
{
returnValue = F("Parkanlage auf dem Wasserwerksgelände");
break;
}
case 246326:
{
returnValue = F("Parkanlage der Fachklinik Königstuhl");
break;
}
case 246327:
{
returnValue = F("Parkanlage der Naju Pulsnitz");
break;
}
case 246328:
{
returnValue = F("Parkanlage der ehemaligen Kommende Muffendorf");
break;
}
case 246329:
{
returnValue = F("Parkanlage des Richard Martin Haus");
break;
}
case 246330:
{
returnValue = F("Parkanlage in der Wohnsiedlung");
break;
}
case 246331:
{
returnValue = F("Parkanlage zum Denkmal");
break;
}
case 246332:
{
returnValue = F("Parkanlagen Hotel St. Leonhard");
break;
}
case 246333:
{
returnValue = F("Parkau");
break;
}
case 246334:
{
returnValue = F("Parkaue");
break;
}
case 246335:
{
returnValue = F("Parkbad");
break;
}
case 246336:
{
returnValue = F("Parkbahnstr.");
break;
}
case 246337:
{
returnValue = F("Parkblick");
break;
}
case 246338:
{
returnValue = F("Parkbrücke");
break;
}
case 246339:
{
returnValue = F("Parkdeck des daHeim Indoor Camping");
break;
}
case 246340:
{
returnValue = F("Parkentiner Landweg");
break;
}
case 246341:
{
returnValue = F("Parkentiner Str.");
break;
}
case 246342:
{
returnValue = F("Parkentiner Weg");
break;
}
case 246343:
{
returnValue = F("Parkettweg");
break;
}
case 246344:
{
returnValue = F("Parkfläche");
break;
}
case 246345:
{
returnValue = F("Parkfläche Katzenbach Allee Mitte");
break;
}
case 246346:
{
returnValue = F("Parkfläche Kriegsgräberstätte");
break;
}
case 246347:
{
returnValue = F("Parkfläche am Kriegsdenkmal");
break;
}
case 246348:
{
returnValue = F("Parkfriedhof");
break;
}
case 246349:
{
returnValue = F("Parkgarten Kirche");
break;
}
case 246350:
{
returnValue = F("Parkgasse");
break;
}
case 246351:
{
returnValue = F("Parkgebiet am Wanderweg \"Unterm Esch");
break;
}
case 246352:
{
returnValue = F("Parkgelände \"Ententeich Herne-Süd");
break;
}
case 246353:
{
returnValue = F("Parkgelände der Helios Fachklinik");
break;
}
case 246354:
{
returnValue = F("Parkgelände mit Spielplatz");
break;
}
case 246355:
{
returnValue = F("Parkgrund");
break;
}
case 246356:
{
returnValue = F("Parkgäßchen");
break;
}
case 246357:
{
returnValue = F("Parkgürtel");
break;
}
case 246358:
{
returnValue = F("Parkhaus-Passage");
break;
}
case 246359:
{
returnValue = F("Parkhausstr.");
break;
}
case 246360:
{
returnValue = F("Parkhausweg");
break;
}
case 246361:
{
returnValue = F("Parkhof");
break;
}
case 246362:
{
returnValue = F("Parkhofstr.");
break;
}
case 246363:
{
returnValue = F("Parkhofweg");
break;
}
case 246364:
{
returnValue = F("Parkkamp");
break;
}
case 246365:
{
returnValue = F("Parklandschaft Friedrichstal");
break;
}
case 246366:
{
returnValue = F("Parklückenweg");
break;
}
case 246367:
{
returnValue = F("Parkmauer");
break;
}
case 246368:
{
returnValue = F("Parkmeisterstr.");
break;
}
case 246369:
{
returnValue = F("Parkpfad");
break;
}
case 246370:
{
returnValue = F("Parkplatz");
break;
}
case 246371:
{
returnValue = F("Parkplatz (L) Pferdeweg");
break;
}
case 246372:
{
returnValue = F("Parkplatz DownHaun - Trail / Tanzplatz");
break;
}
case 246373:
{
returnValue = F("Parkplatz Impfzentrum");
break;
}
case 246374:
{
returnValue = F("Parkplatz Kaiserweg");
break;
}
case 246375:
{
returnValue = F("Parkplatz Knappschaftkrankenhaus");
break;
}
case 246376:
{
returnValue = F("Parkplatz Nachtigallstr.");
break;
}
case 246377:
{
returnValue = F("Parkplatz Riesei Stadion");
break;
}
case 246378:
{
returnValue = F("Parkplatz Sternwarte");
break;
}
case 246379:
{
returnValue = F("Parkplatz Wanne");
break;
}
case 246380:
{
returnValue = F("Parkplatzstr.");
break;
}
case 246381:
{
returnValue = F("Parkplatzverbindung");
break;
}
case 246382:
{
returnValue = F("Parkplatzweg");
break;
}
case 246383:
{
returnValue = F("Parkplatzzufahrt zum Golf Club");
break;
}
case 246384:
{
returnValue = F("Parkpromenade");
break;
}
case 246385:
{
returnValue = F("Parkreihe");
break;
}
case 246386:
{
returnValue = F("Parkring");
break;
}
case 246387:
{
returnValue = F("Parks of Study and Reflection - Schlamau");
break;
}
case 246388:
{
returnValue = F("Parkschneise");
break;
}
case 246389:
{
returnValue = F("Parksee");
break;
}
case 246390:
{
returnValue = F("Parksiedlung");
break;
}
case 246391:
{
returnValue = F("Parksteiner Str.");
break;
}
case 246392:
{
returnValue = F("Parksteiner Weg");
break;
}
case 246393:
{
returnValue = F("Parkstettener Str.");
break;
}
case 246394:
{
returnValue = F("Parkstieg");
break;
}
case 246395:
{
returnValue = F("Parkstr.");
break;
}
case 246396:
{
returnValue = F("Parkstr. Ost");
break;
}
case 246397:
{
returnValue = F("Parkstr. West");
break;
}
case 246398:
{
returnValue = F("Parkstr. bei Modellflugveranstaltung(Einbahnregelung!)");
break;
}
case 246399:
{
returnValue = F("Parkstreifen Wallgraben");
break;
}
case 246400:
{
returnValue = F("Parkstädter Str.");
break;
}
case 246401:
{
returnValue = F("Parkterrasse");
break;
}
case 246402:
{
returnValue = F("Parktorweg");
break;
}
case 246403:
{
returnValue = F("Parkway EmscherRuhr");
break;
}
case 246404:
{
returnValue = F("Parkweg");
break;
}
case 246405:
{
returnValue = F("Parkwiese");
break;
}
case 246406:
{
returnValue = F("Parkwinkel");
break;
}
case 246407:
{
returnValue = F("Parkwärter");
break;
}
case 246408:
{
returnValue = F("Parkäckerstr.");
break;
}
case 246409:
{
returnValue = F("Parkähnliche Anlage");
break;
}
case 246410:
{
returnValue = F("Parlament");
break;
}
case 246411:
{
returnValue = F("Parlamentsplatz");
break;
}
case 246412:
{
returnValue = F("Parlamentsstr.");
break;
}
case 246413:
{
returnValue = F("Parlamentstr.");
break;
}
case 246414:
{
returnValue = F("Parlamentsufer");
break;
}
case 246415:
{
returnValue = F("Parlamentsweg");
break;
}
case 246416:
{
returnValue = F("Parleib");
break;
}
case 246417:
{
returnValue = F("Parleiber Str.");
break;
}
case 246418:
{
returnValue = F("Parleitener Str.");
break;
}
case 246419:
{
returnValue = F("Parlerstr.");
break;
}
case 246420:
{
returnValue = F("Parmener Str.");
break;
}
case 246421:
{
returnValue = F("Parmer Weg");
break;
}
case 246422:
{
returnValue = F("Parmestr.");
break;
}
case 246423:
{
returnValue = F("Parnaßstr.");
break;
}
case 246424:
{
returnValue = F("Parnaßweg");
break;
}
case 246425:
{
returnValue = F("Parnenaer Grund");
break;
}
case 246426:
{
returnValue = F("Parnewinkler Dorfstr.");
break;
}
case 246427:
{
returnValue = F("Parnitzberg");
break;
}
case 246428:
{
returnValue = F("Parnitzweg");
break;
}
case 246429:
{
returnValue = F("Parnkofener Str.");
break;
}
case 246430:
{
returnValue = F("Parnsberg");
break;
}
case 246431:
{
returnValue = F("Parower Chaussee");
break;
}
case 246432:
{
returnValue = F("Parower Str.");
break;
}
case 246433:
{
returnValue = F("Parreutstr.");
break;
}
case 246434:
{
returnValue = F("Parrotstr.");
break;
}
case 246435:
{
returnValue = F("Parrotweg");
break;
}
case 246436:
{
returnValue = F("Parsberger Str.");
break;
}
case 246437:
{
returnValue = F("Parsbergstr.");
break;
}
case 246438:
{
returnValue = F("Parsbergweg");
break;
}
case 246439:
{
returnValue = F("Parscheider Str.");
break;
}
case 246440:
{
returnValue = F("Parsdorfer Str.");
break;
}
case 246441:
{
returnValue = F("Parsdorfer Weg");
break;
}
case 246442:
{
returnValue = F("Parsevalplatz");
break;
}
case 246443:
{
returnValue = F("Parsevalstiege");
break;
}
case 246444:
{
returnValue = F("Parsevalstr.");
break;
}
case 246445:
{
returnValue = F("Parsickstr.");
break;
}
case 246446:
{
returnValue = F("Parsifalstr.");
break;
}
case 246447:
{
returnValue = F("Parsifalweg");
break;
}
case 246448:
{
returnValue = F("Parst");
break;
}
case 246449:
{
returnValue = F("Parsteiner Str.");
break;
}
case 246450:
{
returnValue = F("Parsteiner Weg");
break;
}
case 246451:
{
returnValue = F("Parsteinwerder");
break;
}
case 246452:
{
returnValue = F("Parststr.");
break;
}
case 246453:
{
returnValue = F("Parteikenkampstr.");
break;
}
case 246454:
{
returnValue = F("Partellenweg");
break;
}
case 246455:
{
returnValue = F("Partenhauserweg");
break;
}
case 246456:
{
returnValue = F("Partenkirchener Str.");
break;
}
case 246457:
{
returnValue = F("Partenkirchner Str.");
break;
}
case 246458:
{
returnValue = F("Partensteiner Str.");
break;
}
case 246459:
{
returnValue = F("Parterre");
break;
}
case 246460:
{
returnValue = F("Parthehof");
break;
}
case 246461:
{
returnValue = F("Parthenbrücke");
break;
}
case 246462:
{
returnValue = F("Partheneckerstr.");
break;
}
case 246463:
{
returnValue = F("Parthengrund");
break;
}
case 246464:
{
returnValue = F("Parthenstr.");
break;
}
case 246465:
{
returnValue = F("Partheterstr.");
break;
}
case 246466:
{
returnValue = F("Partikulierstr.");
break;
}
case 246467:
{
returnValue = F("Partisanenweg");
break;
}
case 246468:
{
returnValue = F("Partnachauenstr.");
break;
}
case 246469:
{
returnValue = F("Partnachplatz");
break;
}
case 246470:
{
returnValue = F("Partnachstr.");
break;
}
case 246471:
{
returnValue = F("Partnachuferweg");
break;
}
case 246472:
{
returnValue = F("Partnerschaftsgarten");
break;
}
case 246473:
{
returnValue = F("Partnerschaftskreisel");
break;
}
case 246474:
{
returnValue = F("Partnerschaftsplatz");
break;
}
case 246475:
{
returnValue = F("Partnerschaftsweg");
break;
}
case 246476:
{
returnValue = F("Partschinserstr.");
break;
}
case 246477:
{
returnValue = F("Partwitzer Str.");
break;
}
case 246478:
{
returnValue = F("Partwitzer Weg");
break;
}
case 246479:
{
returnValue = F("Parumer Str.");
break;
}
case 246480:
{
returnValue = F("Parumer Weg");
break;
}
case 246481:
{
returnValue = F("Parzelle \"Mühlstr. 14 e.V.");
break;
}
case 246482:
{
returnValue = F("Parzellenstr.");
break;
}
case 246483:
{
returnValue = F("Parzellenweg");
break;
}
case 246484:
{
returnValue = F("Parzgasse");
break;
}
case 246485:
{
returnValue = F("Parzham");
break;
}
case 246486:
{
returnValue = F("Parzingerstr.");
break;
}
case 246487:
{
returnValue = F("Parzivalplatz");
break;
}
case 246488:
{
returnValue = F("Parzivalstr.");
break;
}
case 246489:
{
returnValue = F("Pasadenaallee");
break;
}
case 246490:
{
returnValue = F("Pasbachstr.");
break;
}
case 246491:
{
returnValue = F("Pasbergstr.");
break;
}
case 246492:
{
returnValue = F("Pascal-Ackermann-Weg");
break;
}
case 246493:
{
returnValue = F("Pascalring");
break;
}
case 246494:
{
returnValue = F("Pascalstr.");
break;
}
case 246495:
{
returnValue = F("Pascalweg");
break;
}
case 246496:
{
returnValue = F("Pasch");
break;
}
case 246497:
{
returnValue = F("Paschacker");
break;
}
case 246498:
{
returnValue = F("Paschalisweg");
break;
}
case 246499:
{
returnValue = F("Paschberg");
break;
}
case 246500:
{
returnValue = F("Paschbergstr.");
break;
}
case 246501:
{
returnValue = F("Paschbrink Siedlung");
break;
}
case 246502:
{
returnValue = F("Pascheberg");
break;
}
case 246503:
{
returnValue = F("Pascheborn");
break;
}
case 246504:
{
returnValue = F("Paschebruch");
break;
}
case 246505:
{
returnValue = F("Pascheburg");
break;
}
case 246506:
{
returnValue = F("Pascheburgring");
break;
}
case 246507:
{
returnValue = F("Pascheburgstr.");
break;
}
case 246508:
{
returnValue = F("Paschenaustr.");
break;
}
case 246509:
{
returnValue = F("Paschenbergstr.");
break;
}
case 246510:
{
returnValue = F("Paschenborn");
break;
}
case 246511:
{
returnValue = F("Paschenburg");
break;
}
case 246512:
{
returnValue = F("Paschenburgstr.");
break;
}
case 246513:
{
returnValue = F("Paschenfurth");
break;
}
case 246514:
{
returnValue = F("Paschenseetrail");
break;
}
case 246515:
{
returnValue = F("Paschenstr.");
break;
}
case 246516:
{
returnValue = F("Paschenweg");
break;
}
case 246517:
{
returnValue = F("Pascherbuchenweg");
break;
}
case 246518:
{
returnValue = F("Pascherhook");
break;
}
case 246519:
{
returnValue = F("Pascherweg");
break;
}
case 246520:
{
returnValue = F("Paschestr.");
break;
}
case 246521:
{
returnValue = F("Paschewinkel");
break;
}
case 246522:
{
returnValue = F("Paschkebergstr.");
break;
}
case 246523:
{
returnValue = F("Paschkeweg");
break;
}
case 246524:
{
returnValue = F("Paschknappstr.");
break;
}
case 246525:
{
returnValue = F("Paschkystr.");
break;
}
case 246526:
{
returnValue = F("Paschlebener Str.");
break;
}
case 246527:
{
returnValue = F("Paschlewwer Anger");
break;
}
case 246528:
{
returnValue = F("Paschmannstr.");
break;
}
case 246529:
{
returnValue = F("Paschstr.");
break;
}
case 246530:
{
returnValue = F("Paschufer");
break;
}
case 246531:
{
returnValue = F("Paschweg");
break;
}
case 246532:
{
returnValue = F("Paschwitzer Landstr.");
break;
}
case 246533:
{
returnValue = F("Paschwitzer Str.");
break;
}
case 246534:
{
returnValue = F("Pasemann Passage");
break;
}
case 246535:
{
returnValue = F("Pasemannweg");
break;
}
case 246536:
{
returnValue = F("Pasenbacher Str.");
break;
}
case 246537:
{
returnValue = F("Pasendorfer Spitze");
break;
}
case 246538:
{
returnValue = F("Pasenow");
break;
}
case 246539:
{
returnValue = F("Pasenower Weg");
break;
}
case 246540:
{
returnValue = F("Paseriner Weg");
break;
}
case 246541:
{
returnValue = F("Pasewalker Allee");
break;
}
case 246542:
{
returnValue = F("Pasewalker Chaussee");
break;
}
case 246543:
{
returnValue = F("Pasewalker Landstr.");
break;
}
case 246544:
{
returnValue = F("Pasewalker Str.");
break;
}
case 246545:
{
returnValue = F("Pasewalker Str. Siedlung");
break;
}
case 246546:
{
returnValue = F("Pasinger Str.");
break;
}
case 246547:
{
returnValue = F("Paskaer Str.");
break;
}
case 246548:
{
returnValue = F("Paske");
break;
}
case 246549:
{
returnValue = F("Pasker Brücke");
break;
}
case 246550:
{
returnValue = F("Pasker Weg");
break;
}
case 246551:
{
returnValue = F("Pasleker Str.");
break;
}
case 246552:
{
returnValue = F("Pasqualini-Brücke");
break;
}
case 246553:
{
returnValue = F("Pasqualinistr.");
break;
}
case 246554:
{
returnValue = F("Pasquaystr.");
break;
}
case 246555:
{
returnValue = F("Pass");
break;
}
case 246556:
{
returnValue = F("Pass- Str.");
break;
}
case 246557:
{
returnValue = F("Passader Str.");
break;
}
case 246558:
{
returnValue = F("Passader Weg");
break;
}
case 246559:
{
returnValue = F("Passadestr.");
break;
}
case 246560:
{
returnValue = F("Passage");
break;
}
case 246561:
{
returnValue = F("Passage 2");
break;
}
case 246562:
{
returnValue = F("Passage B");
break;
}
case 246563:
{
returnValue = F("Passage Bahnhofstr. 1");
break;
}
case 246564:
{
returnValue = F("Passage Kaiserstr.");
break;
}
case 246565:
{
returnValue = F("Passage Königstr.");
break;
}
case 246566:
{
returnValue = F("Passage Max 48");
break;
}
case 246567:
{
returnValue = F("Passage No. 8");
break;
}
case 246568:
{
returnValue = F("Passage Rös");
break;
}
case 246569:
{
returnValue = F("Passage Weimarischer Hof");
break;
}
case 246570:
{
returnValue = F("Passage Zum Halben Mond");
break;
}
case 246571:
{
returnValue = F("Passage am Markt");
break;
}
case 246572:
{
returnValue = F("Passagehof");
break;
}
case 246573:
{
returnValue = F("Passagestr.");
break;
}
case 246574:
{
returnValue = F("Passageweg");
break;
}
case 246575:
{
returnValue = F("Passargeweg");
break;
}
case 246576:
{
returnValue = F("Passatring");
break;
}
case 246577:
{
returnValue = F("Passatstieg");
break;
}
case 246578:
{
returnValue = F("Passatstr.");
break;
}
case 246579:
{
returnValue = F("Passatweg");
break;
}
case 246580:
{
returnValue = F("Passauer Str.");
break;
}
case 246581:
{
returnValue = F("Passauerstr.");
break;
}
case 246582:
{
returnValue = F("Passavantstr.");
break;
}
case 246583:
{
returnValue = F("Passchendaelestr.");
break;
}
case 246584:
{
returnValue = F("Passeckweg");
break;
}
case 246585:
{
returnValue = F("Passeer Str.");
break;
}
case 246586:
{
returnValue = F("Passeider Ebene");
break;
}
case 246587:
{
returnValue = F("Passeier Steig");
break;
}
case 246588:
{
returnValue = F("Passeier Str.");
break;
}
case 246589:
{
returnValue = F("Passeier Weg");
break;
}
case 246590:
{
returnValue = F("Passein");
break;
}
case 246591:
{
returnValue = F("Passelsdorf");
break;
}
case 246592:
{
returnValue = F("Passendorfer Str.");
break;
}
case 246593:
{
returnValue = F("Passendorfer Weg");
break;
}
case 246594:
{
returnValue = F("Passenhalde");
break;
}
case 246595:
{
returnValue = F("Passenstr.");
break;
}
case 246596:
{
returnValue = F("Passentin");
break;
}
case 246597:
{
returnValue = F("Passentiner Str.");
break;
}
case 246598:
{
returnValue = F("Passerweg");
break;
}
case 246599:
{
returnValue = F("Passetstr.");
break;
}
case 246600:
{
returnValue = F("Passeweg");
break;
}
case 246601:
{
returnValue = F("Passionsgarten");
break;
}
case 246602:
{
returnValue = F("Passionsweg");
break;
}
case 246603:
{
returnValue = F("Passionswiese");
break;
}
case 246604:
{
returnValue = F("Passkamp");
break;
}
case 246605:
{
returnValue = F("Passleitenweg");
break;
}
case 246606:
{
returnValue = F("Passmannstr.");
break;
}
case 246607:
{
returnValue = F("Passmannweg");
break;
}
case 246608:
{
returnValue = F("Passopp");
break;
}
case 246609:
{
returnValue = F("Passow Ausbau");
break;
}
case 246610:
{
returnValue = F("Passower Bahnhofstr.");
break;
}
case 246611:
{
returnValue = F("Passower Chaussee");
break;
}
case 246612:
{
returnValue = F("Passower Feldrain");
break;
}
case 246613:
{
returnValue = F("Passower Mühlenberg");
break;
}
case 246614:
{
returnValue = F("Passower See Wanderweg");
break;
}
case 246615:
{
returnValue = F("Passower Str.");
break;
}
case 246616:
{
returnValue = F("Passstr.");
break;
}
case 246617:
{
returnValue = F("Passweg");
break;
}
case 246618:
{
returnValue = F("Passwiese");
break;
}
case 246619:
{
returnValue = F("Pasternakstr.");
break;
}
case 246620:
{
returnValue = F("Pasterskamp");
break;
}
case 246621:
{
returnValue = F("Pastertsstr.");
break;
}
case 246622:
{
returnValue = F("Pastertwiet");
break;
}
case 246623:
{
returnValue = F("Pasterwitzweg");
break;
}
case 246624:
{
returnValue = F("Pastettener Str.");
break;
}
case 246625:
{
returnValue = F("Pasteurallee");
break;
}
case 246626:
{
returnValue = F("Pasteurpromenade");
break;
}
case 246627:
{
returnValue = F("Pasteurschacht");
break;
}
case 246628:
{
returnValue = F("Pasteurstr.");
break;
}
case 246629:
{
returnValue = F("Pasteurweg");
break;
}
case 246630:
{
returnValue = F("Pastinakelstr.");
break;
}
case 246631:
{
returnValue = F("Pastiner Str.");
break;
}
case 246632:
{
returnValue = F("Pastitzer Dorfstr.");
break;
}
case 246633:
{
returnValue = F("Pastor Halfen Str.");
break;
}
case 246634:
{
returnValue = F("Pastor Loets Weg");
break;
}
case 246635:
{
returnValue = F("Pastor Vossing Weg");
break;
}
case 246636:
{
returnValue = F("Pastor's Garten");
break;
}
case 246637:
{
returnValue = F("Pastor-Abel-Str.");
break;
}
case 246638:
{
returnValue = F("Pastor-Aden-Weg");
break;
}
case 246639:
{
returnValue = F("Pastor-Albers-Weg");
break;
}
case 246640:
{
returnValue = F("Pastor-Albert-Clos-Str.");
break;
}
case 246641:
{
returnValue = F("Pastor-Anton-Spieker-Weg");
break;
}
case 246642:
{
returnValue = F("Pastor-August-Janssen-Straat");
break;
}
case 246643:
{
returnValue = F("Pastor-Balkenhol-Str.");
break;
}
case 246644:
{
returnValue = F("Pastor-Bangen-Weg");
break;
}
case 246645:
{
returnValue = F("Pastor-Bartels-Weg");
break;
}
case 246646:
{
returnValue = F("Pastor-Barth-Ring");
break;
}
case 246647:
{
returnValue = F("Pastor-Batsche-Weg");
break;
}
case 246648:
{
returnValue = F("Pastor-Bauer-Str.");
break;
}
case 246649:
{
returnValue = F("Pastor-Bauer-Weg");
break;
}
case 246650:
{
returnValue = F("Pastor-Becker-Weg");
break;
}
case 246651:
{
returnValue = F("Pastor-Beckmann-Weg");
break;
}
case 246652:
{
returnValue = F("Pastor-Berg-Str.");
break;
}
case 246653:
{
returnValue = F("Pastor-Bergmann-Str.");
break;
}
case 246654:
{
returnValue = F("Pastor-Biesing-Str.");
break;
}
case 246655:
{
returnValue = F("Pastor-Billker-Str.");
break;
}
case 246656:
{
returnValue = F("Pastor-Blanke-Platz");
break;
}
case 246657:
{
returnValue = F("Pastor-Bleckmann-Str.");
break;
}
case 246658:
{
returnValue = F("Pastor-Block-Weg");
break;
}
case 246659:
{
returnValue = F("Pastor-Blume-Str.");
break;
}
case 246660:
{
returnValue = F("Pastor-Blume-Weg");
break;
}
case 246661:
{
returnValue = F("Pastor-Blömer-Weg");
break;
}
case 246662:
{
returnValue = F("Pastor-Bode-Str.");
break;
}
case 246663:
{
returnValue = F("Pastor-Bode-Weg");
break;
}
case 246664:
{
returnValue = F("Pastor-Boekhoff-Weg");
break;
}
case 246665:
{
returnValue = F("Pastor-Boitmann-Str.");
break;
}
case 246666:
{
returnValue = F("Pastor-Boldt-Str.");
break;
}
case 246667:
{
returnValue = F("Pastor-Bolinius-Weg");
break;
}
case 246668:
{
returnValue = F("Pastor-Bolte-Weg");
break;
}
case 246669:
{
returnValue = F("Pastor-Brach-Str.");
break;
}
case 246670:
{
returnValue = F("Pastor-Bredo-Str.");
break;
}
case 246671:
{
returnValue = F("Pastor-Brefeld-Str.");
break;
}
case 246672:
{
returnValue = F("Pastor-Breithaupt-Weg");
break;
}
case 246673:
{
returnValue = F("Pastor-Bremer-Str.");
break;
}
case 246674:
{
returnValue = F("Pastor-Breuer-Str.");
break;
}
case 246675:
{
returnValue = F("Pastor-Bruhn-Str.");
break;
}
case 246676:
{
returnValue = F("Pastor-Bruns-Str.");
break;
}
case 246677:
{
returnValue = F("Pastor-Bröhl-Str.");
break;
}
case 246678:
{
returnValue = F("Pastor-Bufe-Weg");
break;
}
case 246679:
{
returnValue = F("Pastor-Burchardi-Str.");
break;
}
case 246680:
{
returnValue = F("Pastor-Busch-Str.");
break;
}
case 246681:
{
returnValue = F("Pastor-Busch-Weg");
break;
}
case 246682:
{
returnValue = F("Pastor-Busenbender-Str.");
break;
}
case 246683:
{
returnValue = F("Pastor-Böhm-Str.");
break;
}
case 246684:
{
returnValue = F("Pastor-Bölitz-Str.");
break;
}
case 246685:
{
returnValue = F("Pastor-Büscher-Str.");
break;
}
case 246686:
{
returnValue = F("Pastor-Clinge-Str.");
break;
}
case 246687:
{
returnValue = F("Pastor-Clodius-Str.");
break;
}
case 246688:
{
returnValue = F("Pastor-Covers-Str.");
break;
}
case 246689:
{
returnValue = F("Pastor-Czecholinski-Str.");
break;
}
case 246690:
{
returnValue = F("Pastor-Dahlmann-Str.");
break;
}
case 246691:
{
returnValue = F("Pastor-Dahm-Str.");
break;
}
case 246692:
{
returnValue = F("Pastor-Dannenmann-Weg");
break;
}
case 246693:
{
returnValue = F("Pastor-Dehnert-Str.");
break;
}
case 246694:
{
returnValue = F("Pastor-Derks-Weg");
break;
}
case 246695:
{
returnValue = F("Pastor-Deutsch-Str.");
break;
}
case 246696:
{
returnValue = F("Pastor-Diehl-Str.");
break;
}
case 246697:
{
returnValue = F("Pastor-Dillinger-Str.");
break;
}
case 246698:
{
returnValue = F("Pastor-Doktor-Fuchs-Weg");
break;
}
case 246699:
{
returnValue = F("Pastor-Doppelfeld-Platz");
break;
}
case 246700:
{
returnValue = F("Pastor-Drauschke-Weg");
break;
}
case 246701:
{
returnValue = F("Pastor-Dreyer-Str.");
break;
}
case 246702:
{
returnValue = F("Pastor-Dörr-Ring");
break;
}
case 246703:
{
returnValue = F("Pastor-Dünnwald-Str.");
break;
}
case 246704:
{
returnValue = F("Pastor-Ebbrecht-Weg");
break;
}
case 246705:
{
returnValue = F("Pastor-Eggers-Weg");
break;
}
case 246706:
{
returnValue = F("Pastor-Engel-Str.");
break;
}
case 246707:
{
returnValue = F("Pastor-Engelhard-Str.");
break;
}
case 246708:
{
returnValue = F("Pastor-Epke-Str.");
break;
}
case 246709:
{
returnValue = F("Pastor-Erhard-Bauer-Str.");
break;
}
case 246710:
{
returnValue = F("Pastor-Ernzerhof-Weg");
break;
}
case 246711:
{
returnValue = F("Pastor-Esser-Str.");
break;
}
case 246712:
{
returnValue = F("Pastor-Eyme-Str.");
break;
}
case 246713:
{
returnValue = F("Pastor-Falke-Str.");
break;
}
case 246714:
{
returnValue = F("Pastor-Faßbender-Str.");
break;
}
case 246715:
{
returnValue = F("Pastor-Felke-Str.");
break;
}
case 246716:
{
returnValue = F("Pastor-Fey-Str.");
break;
}
case 246717:
{
returnValue = F("Pastor-Fiedler-Weg");
break;
}
case 246718:
{
returnValue = F("Pastor-Finck-Weg");
break;
}
case 246719:
{
returnValue = F("Pastor-Finke-Weg");
break;
}
case 246720:
{
returnValue = F("Pastor-Fischenich-Str.");
break;
}
case 246721:
{
returnValue = F("Pastor-Fischer-Str.");
break;
}
case 246722:
{
returnValue = F("Pastor-Flemming-Str.");
break;
}
case 246723:
{
returnValue = F("Pastor-Fliedner-Weg");
break;
}
case 246724:
{
returnValue = F("Pastor-Fonck-Weg");
break;
}
case 246725:
{
returnValue = F("Pastor-Franke-Str.");
break;
}
case 246726:
{
returnValue = F("Pastor-Frankeser-Str.");
break;
}
case 246727:
{
returnValue = F("Pastor-Franz-Brauer-Str.");
break;
}
case 246728:
{
returnValue = F("Pastor-Franz-Steden-Platz");
break;
}
case 246729:
{
returnValue = F("Pastor-Franzen-Str.");
break;
}
case 246730:
{
returnValue = F("Pastor-Frembgens-Str.");
break;
}
case 246731:
{
returnValue = F("Pastor-Frembgens-Weg");
break;
}
case 246732:
{
returnValue = F("Pastor-Frerichs-Str.");
break;
}
case 246733:
{
returnValue = F("Pastor-Fritze-Str.");
break;
}
case 246734:
{
returnValue = F("Pastor-Fuchs-Str.");
break;
}
case 246735:
{
returnValue = F("Pastor-Fuhrmann-Str.");
break;
}
case 246736:
{
returnValue = F("Pastor-Geller-Weg");
break;
}
case 246737:
{
returnValue = F("Pastor-Gerhard-Dittrich-Weg");
break;
}
case 246738:
{
returnValue = F("Pastor-Giesen-Str.");
break;
}
case 246739:
{
returnValue = F("Pastor-Glesius-Str.");
break;
}
case 246740:
{
returnValue = F("Pastor-Gombert-Str.");
break;
}
case 246741:
{
returnValue = F("Pastor-Goudefroy-Str.");
break;
}
case 246742:
{
returnValue = F("Pastor-Grabe-Weg");
break;
}
case 246743:
{
returnValue = F("Pastor-Graffam-Weg");
break;
}
case 246744:
{
returnValue = F("Pastor-Grimm-Str.");
break;
}
case 246745:
{
returnValue = F("Pastor-Grothues-Str.");
break;
}
case 246746:
{
returnValue = F("Pastor-Göbel-Weg");
break;
}
case 246747:
{
returnValue = F("Pastor-Haag-Weg");
break;
}
case 246748:
{
returnValue = F("Pastor-Haarbeck-Str.");
break;
}
case 246749:
{
returnValue = F("Pastor-Hacks-Str.");
break;
}
case 246750:
{
returnValue = F("Pastor-Hagius-Weg");
break;
}
case 246751:
{
returnValue = F("Pastor-Hahnen-Str.");
break;
}
case 246752:
{
returnValue = F("Pastor-Hamer-Str.");
break;
}
case 246753:
{
returnValue = F("Pastor-Hansen-Str.");
break;
}
case 246754:
{
returnValue = F("Pastor-Harder-Str.");
break;
}
case 246755:
{
returnValue = F("Pastor-Harff-Weg");
break;
}
case 246756:
{
returnValue = F("Pastor-Hauser-Str.");
break;
}
case 246757:
{
returnValue = F("Pastor-Hausmann-Str.");
break;
}
case 246758:
{
returnValue = F("Pastor-Hayder-Weg");
break;
}
case 246759:
{
returnValue = F("Pastor-Heddenhausen-Weg");
break;
}
case 246760:
{
returnValue = F("Pastor-Hein-Str.");
break;
}
case 246761:
{
returnValue = F("Pastor-Hellen-Str.");
break;
}
case 246762:
{
returnValue = F("Pastor-Hellweg-Str.");
break;
}
case 246763:
{
returnValue = F("Pastor-Hennes-Str.");
break;
}
case 246764:
{
returnValue = F("Pastor-Henseler-Str.");
break;
}
case 246765:
{
returnValue = F("Pastor-Hessler-Str.");
break;
}
case 246766:
{
returnValue = F("Pastor-Hilling-Str.");
break;
}
case 246767:
{
returnValue = F("Pastor-Hinrichs-Weg");
break;
}
case 246768:
{
returnValue = F("Pastor-Hochhard-Str.");
break;
}
case 246769:
{
returnValue = F("Pastor-Hochherz-Str.");
break;
}
case 246770:
{
returnValue = F("Pastor-Hoeymakers-Str.");
break;
}
case 246771:
{
returnValue = F("Pastor-Hoff-Str.");
break;
}
case 246772:
{
returnValue = F("Pastor-Hoffmann-Str.");
break;
}
case 246773:
{
returnValue = F("Pastor-Hospelt-Str.");
break;
}
case 246774:
{
returnValue = F("Pastor-Houtrouw-Str.");
break;
}
case 246775:
{
returnValue = F("Pastor-Husfeldt-Park");
break;
}
case 246776:
{
returnValue = F("Pastor-Huthmacher-Str.");
break;
}
case 246777:
{
returnValue = F("Pastor-Höpken-Str.");
break;
}
case 246778:
{
returnValue = F("Pastor-Hümpel-Str.");
break;
}
case 246779:
{
returnValue = F("Pastor-Ibach-Str.");
break;
}
case 246780:
{
returnValue = F("Pastor-Isenberg-Weg");
break;
}
case 246781:
{
returnValue = F("Pastor-Jacob-Str.");
break;
}
case 246782:
{
returnValue = F("Pastor-Jakobs-Str.");
break;
}
case 246783:
{
returnValue = F("Pastor-Jansen-Str.");
break;
}
case 246784:
{
returnValue = F("Pastor-Janßen-Str.");
break;
}
case 246785:
{
returnValue = F("Pastor-Janßen-Weg");
break;
}
case 246786:
{
returnValue = F("Pastor-Jenne-Weg");
break;
}
case 246787:
{
returnValue = F("Pastor-Josef-Borgmann-Str.");
break;
}
case 246788:
{
returnValue = F("Pastor-Junkersfeld-Weg");
break;
}
case 246789:
{
returnValue = F("Pastor-Jäger-Stieg");
break;
}
case 246790:
{
returnValue = F("Pastor-Jääsch-Weg");
break;
}
case 246791:
{
returnValue = F("Pastor-Karl-Hentschel-Str.");
break;
}
case 246792:
{
returnValue = F("Pastor-Karl-Thiel-Platz");
break;
}
case 246793:
{
returnValue = F("Pastor-Kastenholz-Weg");
break;
}
case 246794:
{
returnValue = F("Pastor-Kayser-Weg");
break;
}
case 246795:
{
returnValue = F("Pastor-Keding-Weg");
break;
}
case 246796:
{
returnValue = F("Pastor-Keller-Str.");
break;
}
case 246797:
{
returnValue = F("Pastor-Kenez-Str.");
break;
}
case 246798:
{
returnValue = F("Pastor-Kersten-Str.");
break;
}
case 246799:
{
returnValue = F("Pastor-Kesten-Str.");
break;
}
case 246800:
{
returnValue = F("Pastor-Kettel-Weg");
break;
}
case 246801:
{
returnValue = F("Pastor-Kittel-Str.");
break;
}
case 246802:
{
returnValue = F("Pastor-Klein-Str.");
break;
}
case 246803:
{
returnValue = F("Pastor-Klingler-Weg");
break;
}
case 246804:
{
returnValue = F("Pastor-Koch-Str.");
break;
}
case 246805:
{
returnValue = F("Pastor-Kohne-Str.");
break;
}
case 246806:
{
returnValue = F("Pastor-Kollmann-Str.");
break;
}
case 246807:
{
returnValue = F("Pastor-Krafft-Str.");
break;
}
case 246808:
{
returnValue = F("Pastor-Kramer-Weg");
break;
}
case 246809:
{
returnValue = F("Pastor-Krayer-Str.");
break;
}
case 246810:
{
returnValue = F("Pastor-Kremers-Str.");
break;
}
case 246811:
{
returnValue = F("Pastor-Kreuser-Weg");
break;
}
case 246812:
{
returnValue = F("Pastor-Kroll-Weg");
break;
}
case 246813:
{
returnValue = F("Pastor-Krombach-Str.");
break;
}
case 246814:
{
returnValue = F("Pastor-Kruse-Str.");
break;
}
case 246815:
{
returnValue = F("Pastor-Kröner-Str.");
break;
}
case 246816:
{
returnValue = F("Pastor-Kuhlgatz-Weg");
break;
}
case 246817:
{
returnValue = F("Pastor-Königs-Weg");
break;
}
case 246818:
{
returnValue = F("Pastor-Köppen-Str.");
break;
}
case 246819:
{
returnValue = F("Pastor-Kühnen-Platz");
break;
}
case 246820:
{
returnValue = F("Pastor-Lambertz-Str.");
break;
}
case 246821:
{
returnValue = F("Pastor-Landmann-Str.");
break;
}
case 246822:
{
returnValue = F("Pastor-Lang-Str.");
break;
}
case 246823:
{
returnValue = F("Pastor-Lange-Str.");
break;
}
case 246824:
{
returnValue = F("Pastor-Leidinger-Weg");
break;
}
case 246825:
{
returnValue = F("Pastor-Leinung-Platz");
break;
}
case 246826:
{
returnValue = F("Pastor-Lennartz-Weg");
break;
}
case 246827:
{
returnValue = F("Pastor-Leo-Mertens-Platz");
break;
}
case 246828:
{
returnValue = F("Pastor-Lermen-Weg");
break;
}
case 246829:
{
returnValue = F("Pastor-Lichtenbäumer-Str.");
break;
}
case 246830:
{
returnValue = F("Pastor-Liesen-Str.");
break;
}
case 246831:
{
returnValue = F("Pastor-Lingen-Str.");
break;
}
case 246832:
{
returnValue = F("Pastor-Louis-Str.");
break;
}
case 246833:
{
returnValue = F("Pastor-Lunde-Weg");
break;
}
case 246834:
{
returnValue = F("Pastor-Lyra-Weg");
break;
}
case 246835:
{
returnValue = F("Pastor-Löh-Str.");
break;
}
case 246836:
{
returnValue = F("Pastor-Lüpschen-Str.");
break;
}
case 246837:
{
returnValue = F("Pastor-Lütkemann-Str.");
break;
}
case 246838:
{
returnValue = F("Pastor-Mader-Str.");
break;
}
case 246839:
{
returnValue = F("Pastor-Matthiesen-Str.");
break;
}
case 246840:
{
returnValue = F("Pastor-Meckel-Str.");
break;
}
case 246841:
{
returnValue = F("Pastor-Meistermann-Str.");
break;
}
case 246842:
{
returnValue = F("Pastor-Mensching-Weg");
break;
}
case 246843:
{
returnValue = F("Pastor-Mensinga-Str.");
break;
}
case 246844:
{
returnValue = F("Pastor-Mertes-Str.");
break;
}
case 246845:
{
returnValue = F("Pastor-Meyer-Pättken");
break;
}
case 246846:
{
returnValue = F("Pastor-Meyer-Weg");
break;
}
case 246847:
{
returnValue = F("Pastor-Meyers-Str.");
break;
}
case 246848:
{
returnValue = F("Pastor-Michels-Str.");
break;
}
case 246849:
{
returnValue = F("Pastor-Middendorff-Str.");
break;
}
case 246850:
{
returnValue = F("Pastor-Moritz-Str.");
break;
}
case 246851:
{
returnValue = F("Pastor-Möller-Weg");
break;
}
case 246852:
{
returnValue = F("Pastor-Müller-Str.");
break;
}
case 246853:
{
returnValue = F("Pastor-München-Str.");
break;
}
case 246854:
{
returnValue = F("Pastor-Mütter-Str.");
break;
}
case 246855:
{
returnValue = F("Pastor-Natus-Ring");
break;
}
case 246856:
{
returnValue = F("Pastor-Nellner-Str.");
break;
}
case 246857:
{
returnValue = F("Pastor-Niemöller-Str.");
break;
}
case 246858:
{
returnValue = F("Pastor-Niemöller-Weg");
break;
}
case 246859:
{
returnValue = F("Pastor-Nonne-Str.");
break;
}
case 246860:
{
returnValue = F("Pastor-Nöldeke-Weg");
break;
}
case 246861:
{
returnValue = F("Pastor-Pabst-Str.");
break;
}
case 246862:
{
returnValue = F("Pastor-Paul-Milde-Str.");
break;
}
case 246863:
{
returnValue = F("Pastor-Pauli-Str.");
break;
}
case 246864:
{
returnValue = F("Pastor-Perau-Str.");
break;
}
case 246865:
{
returnValue = F("Pastor-Petersen-Str.");
break;
}
case 246866:
{
returnValue = F("Pastor-Pfeil-Str.");
break;
}
case 246867:
{
returnValue = F("Pastor-Pfeil-Weg");
break;
}
case 246868:
{
returnValue = F("Pastor-Redecher-Str.");
break;
}
case 246869:
{
returnValue = F("Pastor-Redecker-Str.");
break;
}
case 246870:
{
returnValue = F("Pastor-Rehkopf-Weg");
break;
}
case 246871:
{
returnValue = F("Pastor-Rehorst-Weg");
break;
}
case 246872:
{
returnValue = F("Pastor-Reins-Str.");
break;
}
case 246873:
{
returnValue = F("Pastor-Rentz-Str.");
break;
}
case 246874:
{
returnValue = F("Pastor-Richter-Str.");
break;
}
case 246875:
{
returnValue = F("Pastor-Ritter-Weg");
break;
}
case 246876:
{
returnValue = F("Pastor-Rode-Weg");
break;
}
case 246877:
{
returnValue = F("Pastor-Roller-Str.");
break;
}
case 246878:
{
returnValue = F("Pastor-Rudolf-Schmidt-Weg");
break;
}
case 246879:
{
returnValue = F("Pastor-Rösner-Str.");
break;
}
case 246880:
{
returnValue = F("Pastor-Rück-Str.");
break;
}
case 246881:
{
returnValue = F("Pastor-Sander-Bogen");
break;
}
case 246882:
{
returnValue = F("Pastor-Sanders-Weg");
break;
}
case 246883:
{
returnValue = F("Pastor-Saß-Str.");
break;
}
case 246884:
{
returnValue = F("Pastor-Scheibler-Str.");
break;
}
case 246885:
{
returnValue = F("Pastor-Scheinhardt-Weg");
break;
}
case 246886:
{
returnValue = F("Pastor-Schill-Str.");
break;
}
case 246887:
{
returnValue = F("Pastor-Schleyer-Str.");
break;
}
case 246888:
{
returnValue = F("Pastor-Schlichting-Str.");
break;
}
case 246889:
{
returnValue = F("Pastor-Schlink-Str.");
break;
}
case 246890:
{
returnValue = F("Pastor-Schmedes-Str.");
break;
}
case 246891:
{
returnValue = F("Pastor-Schmidt-Str.");
break;
}
case 246892:
{
returnValue = F("Pastor-Schmitz-Str.");
break;
}
case 246893:
{
returnValue = F("Pastor-Schneider-Weg");
break;
}
case 246894:
{
returnValue = F("Pastor-Schoenenberg-Str.");
break;
}
case 246895:
{
returnValue = F("Pastor-Schröder-Ring");
break;
}
case 246896:
{
returnValue = F("Pastor-Schröder-Str.");
break;
}
case 246897:
{
returnValue = F("Pastor-Schuler-Str.");
break;
}
case 246898:
{
returnValue = F("Pastor-Schulz-Str.");
break;
}
case 246899:
{
returnValue = F("Pastor-Schulz-Weg");
break;
}
case 246900:
{
returnValue = F("Pastor-Schulze-Str.");
break;
}
case 246901:
{
returnValue = F("Pastor-Schuster-Str.");
break;
}
case 246902:
{
returnValue = F("Pastor-Schuver-Str.");
break;
}
case 246903:
{
returnValue = F("Pastor-Schwertmann-Str.");
break;
}
case 246904:
{
returnValue = F("Pastor-Schäfer-Weg");
break;
}
case 246905:
{
returnValue = F("Pastor-Seibert-Str.");
break;
}
case 246906:
{
returnValue = F("Pastor-Siebers-Str.");
break;
}
case 246907:
{
returnValue = F("Pastor-Sieverding-Str.");
break;
}
case 246908:
{
returnValue = F("Pastor-Simon-Str.");
break;
}
case 246909:
{
returnValue = F("Pastor-Simon-Weg");
break;
}
case 246910:
{
returnValue = F("Pastor-Smits-Weg");
break;
}
case 246911:
{
returnValue = F("Pastor-Spanuth-Str.");
break;
}
case 246912:
{
returnValue = F("Pastor-Spieckermann-Str.");
break;
}
case 246913:
{
returnValue = F("Pastor-Spieker-Weg");
break;
}
case 246914:
{
returnValue = F("Pastor-Stegers-Str.");
break;
}
case 246915:
{
returnValue = F("Pastor-Stein-Str.");
break;
}
case 246916:
{
returnValue = F("Pastor-Steinmetz Str.");
break;
}
case 246917:
{
returnValue = F("Pastor-Stenger-Str.");
break;
}
case 246918:
{
returnValue = F("Pastor-Strang-Str.");
break;
}
case 246919:
{
returnValue = F("Pastor-Striewe-Weg");
break;
}
case 246920:
{
returnValue = F("Pastor-Stromann-Str.");
break;
}
case 246921:
{
returnValue = F("Pastor-Sudhoff-Str.");
break;
}
case 246922:
{
returnValue = F("Pastor-Taube-Str.");
break;
}
case 246923:
{
returnValue = F("Pastor-Tegethoff-Str.");
break;
}
case 246924:
{
returnValue = F("Pastor-Temmen-Str.");
break;
}
case 246925:
{
returnValue = F("Pastor-Teuteberg-Str.");
break;
}
case 246926:
{
returnValue = F("Pastor-Thaemel-Str.");
break;
}
case 246927:
{
returnValue = F("Pastor-Theis-Str.");
break;
}
case 246928:
{
returnValue = F("Pastor-Thielen-Str.");
break;
}
case 246929:
{
returnValue = F("Pastor-Thomsen-Str.");
break;
}
case 246930:
{
returnValue = F("Pastor-Tigges-Weg");
break;
}
case 246931:
{
returnValue = F("Pastor-Tomfohrde-Str.");
break;
}
case 246932:
{
returnValue = F("Pastor-Unterberg-Str.");
break;
}
case 246933:
{
returnValue = F("Pastor-Vahlending-Str.");
break;
}
case 246934:
{
returnValue = F("Pastor-Vogt-Str.");
break;
}
case 246935:
{
returnValue = F("Pastor-Voigt-Gasse");
break;
}
case 246936:
{
returnValue = F("Pastor-Vömel-Str.");
break;
}
case 246937:
{
returnValue = F("Pastor-Wacker-Str.");
break;
}
case 246938:
{
returnValue = F("Pastor-Wahl-Str.");
break;
}
case 246939:
{
returnValue = F("Pastor-Walsdorff-Str.");
break;
}
case 246940:
{
returnValue = F("Pastor-Walzberg-Str.");
break;
}
case 246941:
{
returnValue = F("Pastor-Wasmuth-Str.");
break;
}
case 246942:
{
returnValue = F("Pastor-Weber-Str.");
break;
}
case 246943:
{
returnValue = F("Pastor-Wehr-Weg");
break;
}
case 246944:
{
returnValue = F("Pastor-Weilbach-Str.");
break;
}
case 246945:
{
returnValue = F("Pastor-Wertz-Platz");
break;
}
case 246946:
{
returnValue = F("Pastor-Wiegand-Str.");
break;
}
case 246947:
{
returnValue = F("Pastor-Wigger-Str.");
break;
}
case 246948:
{
returnValue = F("Pastor-Wilden-Str.");
break;
}
case 246949:
{
returnValue = F("Pastor-Willems-Str.");
break;
}
case 246950:
{
returnValue = F("Pastor-Winkelmann-Str.");
break;
}
case 246951:
{
returnValue = F("Pastor-Witt-Str.");
break;
}
case 246952:
{
returnValue = F("Pastor-Wittkopf-Str.");
break;
}
case 246953:
{
returnValue = F("Pastor-Wolde-Weg");
break;
}
case 246954:
{
returnValue = F("Pastor-Wolf-Str.");
break;
}
case 246955:
{
returnValue = F("Pastor-Wolff-Str.");
break;
}
case 246956:
{
returnValue = F("Pastor-Woll-Weg");
break;
}
case 246957:
{
returnValue = F("Pastor-Woltering-Weg");
break;
}
case 246958:
{
returnValue = F("Pastor-Woltmann-Str.");
break;
}
case 246959:
{
returnValue = F("Pastor-Zeiß-Weg");
break;
}
case 246960:
{
returnValue = F("Pastor-Zentis-Weg");
break;
}
case 246961:
{
returnValue = F("Pastor-Ziegler-Platz");
break;
}
case 246962:
{
returnValue = F("Pastor-Ziegler-Str.");
break;
}
case 246963:
{
returnValue = F("Pastor-van der Giet-Str.");
break;
}
case 246964:
{
returnValue = F("Pastor-van-Ooyen-Weg");
break;
}
case 246965:
{
returnValue = F("Pastor-von-Bodelschwingh-Str.");
break;
}
case 246966:
{
returnValue = F("Pastor-von-Hammel-Str.");
break;
}
case 246967:
{
returnValue = F("Pastoraleweg");
break;
}
case 246968:
{
returnValue = F("Pastorat");
break;
}
case 246969:
{
returnValue = F("Pastoratsacker");
break;
}
case 246970:
{
returnValue = F("Pastoratsbenden");
break;
}
case 246971:
{
returnValue = F("Pastoratsberg");
break;
}
case 246972:
{
returnValue = F("Pastoratsgarten");
break;
}
case 246973:
{
returnValue = F("Pastoratsgasse");
break;
}
case 246974:
{
returnValue = F("Pastoratshof");
break;
}
case 246975:
{
returnValue = F("Pastoratsstr.");
break;
}
case 246976:
{
returnValue = F("Pastoratstoft");
break;
}
case 246977:
{
returnValue = F("Pastoratstr.");
break;
}
case 246978:
{
returnValue = F("Pastoratswald");
break;
}
case 246979:
{
returnValue = F("Pastoratsweg");
break;
}
case 246980:
{
returnValue = F("Pastoratsweide");
break;
}
case 246981:
{
returnValue = F("Pastorberg");
break;
}
case 246982:
{
returnValue = F("Pastoren Heuweg");
break;
}
case 246983:
{
returnValue = F("Pastoren Meer");
break;
}
case 246984:
{
returnValue = F("Pastorenallee");
break;
}
case 246985:
{
returnValue = F("Pastorenberg");
break;
}
case 246986:
{
returnValue = F("Pastorenbirnenweg");
break;
}
case 246987:
{
returnValue = F("Pastorenbrink");
break;
}
case 246988:
{
returnValue = F("Pastorenbusch");
break;
}
case 246989:
{
returnValue = F("Pastorendamm");
break;
}
case 246990:
{
returnValue = F("Pastorenesch");
break;
}
case 246991:
{
returnValue = F("Pastorenfeld");
break;
}
case 246992:
{
returnValue = F("Pastorengang");
break;
}
case 246993:
{
returnValue = F("Pastorengarten");
break;
}
case 246994:
{
returnValue = F("Pastorengasse");
break;
}
case 246995:
{
returnValue = F("Pastorengrund");
break;
}
case 246996:
{
returnValue = F("Pastorenhang");
break;
}
case 246997:
{
returnValue = F("Pastorenkamp");
break;
}
case 246998:
{
returnValue = F("Pastorenkampsweg");
break;
}
case 246999:
{
returnValue = F("Pastorenkoppel");
break;
}
case 247000:
{
returnValue = F("Pastorenkämpe");
break;
}
case 247001:
{
returnValue = F("Pastorenland");
break;
}
case 247002:
{
returnValue = F("Pastorenpad");
break;
}
case 247003:
{
returnValue = F("Pastorenpadd");
break;
}
case 247004:
{
returnValue = F("Pastorenpark");
break;
}
case 247005:
{
returnValue = F("Pastorenpatt");
break;
}
case 247006:
{
returnValue = F("Pastorenpfad");
break;
}
case 247007:
{
returnValue = F("Pastorenstieg");
break;
}
case 247008:
{
returnValue = F("Pastorenstr.");
break;
}
case 247009:
{
returnValue = F("Pastorentrift");
break;
}
case 247010:
{
returnValue = F("Pastorentwete");
break;
}
case 247011:
{
returnValue = F("Pastorenweg");
break;
}
case 247012:
{
returnValue = F("Pastorenwiesen");
break;
}
case 247013:
{
returnValue = F("Pastorenwiesenweg");
break;
}
case 247014:
{
returnValue = F("Pastorenwäldchen");
break;
}
case 247015:
{
returnValue = F("Pastorgang");
break;
}
case 247016:
{
returnValue = F("Pastorgasse");
break;
}
case 247017:
{
returnValue = F("Pastoriusgasse");
break;
}
case 247018:
{
returnValue = F("Pastoriusstr.");
break;
}
case 247019:
{
returnValue = F("Pastorplatz");
break;
}
case 247020:
{
returnValue = F("Pastors Berge");
break;
}
case 247021:
{
returnValue = F("Pastors Busch");
break;
}
case 247022:
{
returnValue = F("Pastors Garten");
break;
}
case 247023:
{
returnValue = F("Pastors Gorden");
break;
}
case 247024:
{
returnValue = F("Pastors Gräfte");
break;
}
case 247025:
{
returnValue = F("Pastors Kamp");
break;
}
case 247026:
{
returnValue = F("Pastors Teich");
break;
}
case 247027:
{
returnValue = F("Pastors Weg");
break;
}
case 247028:
{
returnValue = F("Pastors Wellen");
break;
}
case 247029:
{
returnValue = F("Pastorsacker");
break;
}
case 247030:
{
returnValue = F("Pastorsbitze");
break;
}
case 247031:
{
returnValue = F("Pastorsbusch");
break;
}
case 247032:
{
returnValue = F("Pastorserlen");
break;
}
case 247033:
{
returnValue = F("Pastorsesch");
break;
}
case 247034:
{
returnValue = F("Pastorsfeld");
break;
}
case 247035:
{
returnValue = F("Pastorsgasse");
break;
}
case 247036:
{
returnValue = F("Pastorsgatz");
break;
}
case 247037:
{
returnValue = F("Pastorskamp");
break;
}
case 247038:
{
returnValue = F("Pastorsmoote");
break;
}
case 247039:
{
returnValue = F("Pastorsriede");
break;
}
case 247040:
{
returnValue = F("Pastorstr.");
break;
}
case 247041:
{
returnValue = F("Pastorsweide");
break;
}
case 247042:
{
returnValue = F("Pastorweg");
break;
}
case 247043:
{
returnValue = F("Pastower Weg");
break;
}
case 247044:
{
returnValue = F("Pastritzweg");
break;
}
case 247045:
{
returnValue = F("Paststr.");
break;
}
case 247046:
{
returnValue = F("Pastuninkstr.");
break;
}
case 247047:
{
returnValue = F("Pastuurs Grund");
break;
}
case 247048:
{
returnValue = F("Pat-Parker-Platz");
break;
}
case 247049:
{
returnValue = F("Patenbergstr.");
break;
}
case 247050:
{
returnValue = F("Patenbergsweg");
break;
}
case 247051:
{
returnValue = F("Patendamm");
break;
}
case 247052:
{
returnValue = F("Patentmühlenpark");
break;
}
case 247053:
{
returnValue = F("Patenweg");
break;
}
case 247054:
{
returnValue = F("Pater Markert Weg");
break;
}
case 247055:
{
returnValue = F("Pater Reinisch Weg");
break;
}
case 247056:
{
returnValue = F("Pater-A.-Götzelmann-Str.");
break;
}
case 247057:
{
returnValue = F("Pater-A.-Schnusenberg-Str.");
break;
}
case 247058:
{
returnValue = F("Pater-Alfred-Delp-Str.");
break;
}
case 247059:
{
returnValue = F("Pater-Alfred-Delp-Weg");
break;
}
case 247060:
{
returnValue = F("Pater-Alfred-Maier-Str.");
break;
}
case 247061:
{
returnValue = F("Pater-Alois-Weg");
break;
}
case 247062:
{
returnValue = F("Pater-Altmann-Str.");
break;
}
case 247063:
{
returnValue = F("Pater-Ansgar-Dreher-Str.");
break;
}
case 247064:
{
returnValue = F("Pater-Appelmann-Str.");
break;
}
case 247065:
{
returnValue = F("Pater-Arnold-Str.");
break;
}
case 247066:
{
returnValue = F("Pater-Aubele-Str.");
break;
}
case 247067:
{
returnValue = F("Pater-Augustin-Str.");
break;
}
case 247068:
{
returnValue = F("Pater-Aurelius-Platz");
break;
}
case 247069:
{
returnValue = F("Pater-Autbert-Weg");
break;
}
case 247070:
{
returnValue = F("Pater-Averberg-Str.");
break;
}
case 247071:
{
returnValue = F("Pater-Avila-Str.");
break;
}
case 247072:
{
returnValue = F("Pater-Balsliemke-Weg");
break;
}
case 247073:
{
returnValue = F("Pater-Barkholt-Weg");
break;
}
case 247074:
{
returnValue = F("Pater-Baroffio-Weg");
break;
}
case 247075:
{
returnValue = F("Pater-Bause-Weg");
break;
}
case 247076:
{
returnValue = F("Pater-Becker-Str.");
break;
}
case 247077:
{
returnValue = F("Pater-Beda-Mayr-Platz");
break;
}
case 247078:
{
returnValue = F("Pater-Beda-Weg");
break;
}
case 247079:
{
returnValue = F("Pater-Benedikt-Baumann-Str.");
break;
}
case 247080:
{
returnValue = F("Pater-Benninghaus-Str.");
break;
}
case 247081:
{
returnValue = F("Pater-Benninghaus-Weg");
break;
}
case 247082:
{
returnValue = F("Pater-Bernhard-Mayr-Str.");
break;
}
case 247083:
{
returnValue = F("Pater-Bernhard-Str.");
break;
}
case 247084:
{
returnValue = F("Pater-Berno-Weg");
break;
}
case 247085:
{
returnValue = F("Pater-Bertram-Weg");
break;
}
case 247086:
{
returnValue = F("Pater-Bley-Weg");
break;
}
case 247087:
{
returnValue = F("Pater-Bruno-Moos-Str.");
break;
}
case 247088:
{
returnValue = F("Pater-Bruno-Str.");
break;
}
case 247089:
{
returnValue = F("Pater-Celerin-Gaßl");
break;
}
case 247090:
{
returnValue = F("Pater-Cherubin-Str.");
break;
}
case 247091:
{
returnValue = F("Pater-Christoph-Höttges-Platz");
break;
}
case 247092:
{
returnValue = F("Pater-Christoph-Vogt-Str.");
break;
}
case 247093:
{
returnValue = F("Pater-Clemens-Fuhl-Platz");
break;
}
case 247094:
{
returnValue = F("Pater-Coelestin-Weg");
break;
}
case 247095:
{
returnValue = F("Pater-Cyrill-Str.");
break;
}
case 247096:
{
returnValue = F("Pater-Cyrill-Weg");
break;
}
case 247097:
{
returnValue = F("Pater-Dahlenkamp-Weg");
break;
}
case 247098:
{
returnValue = F("Pater-Deimel-Str.");
break;
}
case 247099:
{
returnValue = F("Pater-Delp-Str.");
break;
}
case 247100:
{
returnValue = F("Pater-Delp-Weg");
break;
}
case 247101:
{
returnValue = F("Pater-Dietmar-Str.");
break;
}
case 247102:
{
returnValue = F("Pater-Dietrich-Ring");
break;
}
case 247103:
{
returnValue = F("Pater-Dionys-Str.");
break;
}
case 247104:
{
returnValue = F("Pater-Dionysius-Str.");
break;
}
case 247105:
{
returnValue = F("Pater-Dr.-Franz-Konrad-Weg");
break;
}
case 247106:
{
returnValue = F("Pater-Dr.-Georg-Söll-Str.");
break;
}
case 247107:
{
returnValue = F("Pater-Dr.-Pohlen-Str.");
break;
}
case 247108:
{
returnValue = F("Pater-Dülmer-Str.");
break;
}
case 247109:
{
returnValue = F("Pater-Ell-Weg");
break;
}
case 247110:
{
returnValue = F("Pater-Engelbert-Platz");
break;
}
case 247111:
{
returnValue = F("Pater-Engelbert-Str.");
break;
}
case 247112:
{
returnValue = F("Pater-Enning-Str.");
break;
}
case 247113:
{
returnValue = F("Pater-Esser-Weg");
break;
}
case 247114:
{
returnValue = F("Pater-Eugen-Breitenstein-Str.");
break;
}
case 247115:
{
returnValue = F("Pater-Faller-Str.");
break;
}
case 247116:
{
returnValue = F("Pater-Fink-Str.");
break;
}
case 247117:
{
returnValue = F("Pater-Fischer-Str.");
break;
}
case 247118:
{
returnValue = F("Pater-Fleig-Weg");
break;
}
case 247119:
{
returnValue = F("Pater-Folger-Str.");
break;
}
case 247120:
{
returnValue = F("Pater-Fonck-Str.");
break;
}
case 247121:
{
returnValue = F("Pater-Fortunat-Str.");
break;
}
case 247122:
{
returnValue = F("Pater-Franz-Reinisch-Str.");
break;
}
case 247123:
{
returnValue = F("Pater-Franz-Reinisch-Weg");
break;
}
case 247124:
{
returnValue = F("Pater-Freitag-Str.");
break;
}
case 247125:
{
returnValue = F("Pater-Frey-Ring");
break;
}
case 247126:
{
returnValue = F("Pater-Frisse-Weg");
break;
}
case 247127:
{
returnValue = F("Pater-Frowin-Str.");
break;
}
case 247128:
{
returnValue = F("Pater-Fröhlich-Str.");
break;
}
case 247129:
{
returnValue = F("Pater-Fröschl-Str.");
break;
}
case 247130:
{
returnValue = F("Pater-Förg-Weg");
break;
}
case 247131:
{
returnValue = F("Pater-Gallus-Weg");
break;
}
case 247132:
{
returnValue = F("Pater-Gaul-Platz");
break;
}
case 247133:
{
returnValue = F("Pater-Gierg-Weg");
break;
}
case 247134:
{
returnValue = F("Pater-Gordian-Str.");
break;
}
case 247135:
{
returnValue = F("Pater-Grimm-Str.");
break;
}
case 247136:
{
returnValue = F("Pater-Haas-Weg");
break;
}
case 247137:
{
returnValue = F("Pater-Haböck-Ring");
break;
}
case 247138:
{
returnValue = F("Pater-Haimo-Weg");
break;
}
case 247139:
{
returnValue = F("Pater-Hammerschmid-Str.");
break;
}
case 247140:
{
returnValue = F("Pater-Hanne-Str.");
break;
}
case 247141:
{
returnValue = F("Pater-Hardt-Str.");
break;
}
case 247142:
{
returnValue = F("Pater-Hartmann-Str.");
break;
}
case 247143:
{
returnValue = F("Pater-Held-Str.");
break;
}
case 247144:
{
returnValue = F("Pater-Henkes-Ring");
break;
}
case 247145:
{
returnValue = F("Pater-Hermann-Bonnier-Park");
break;
}
case 247146:
{
returnValue = F("Pater-Herrgott-Weg");
break;
}
case 247147:
{
returnValue = F("Pater-Hertle-Weg");
break;
}
case 247148:
{
returnValue = F("Pater-Hilger-Str.");
break;
}
case 247149:
{
returnValue = F("Pater-Hoberg-Weg");
break;
}
case 247150:
{
returnValue = F("Pater-Hofmann-Str.");
break;
}
case 247151:
{
returnValue = F("Pater-Hohmann-Str.");
break;
}
case 247152:
{
returnValue = F("Pater-Hättig-Str.");
break;
}
case 247153:
{
returnValue = F("Pater-Ingbert-Naab-Str.");
break;
}
case 247154:
{
returnValue = F("Pater-Inigo-Str.");
break;
}
case 247155:
{
returnValue = F("Pater-Jeremias-Mayr-Str.");
break;
}
case 247156:
{
returnValue = F("Pater-Johannes-Kruse-Weg");
break;
}
case 247157:
{
returnValue = F("Pater-Jordan-Str.");
break;
}
case 247158:
{
returnValue = F("Pater-Josef-Eckstein-Str.");
break;
}
case 247159:
{
returnValue = F("Pater-Josef-Kentenich-Str.");
break;
}
case 247160:
{
returnValue = F("Pater-Josef-Mayer-Str.");
break;
}
case 247161:
{
returnValue = F("Pater-Josef-Schmid-Weg");
break;
}
case 247162:
{
returnValue = F("Pater-Josef-Str.");
break;
}
case 247163:
{
returnValue = F("Pater-Josef-Weg");
break;
}
case 247164:
{
returnValue = F("Pater-Joseph-Anton-Str.");
break;
}
case 247165:
{
returnValue = F("Pater-Joseph-Schmidt-Str.");
break;
}
case 247166:
{
returnValue = F("Pater-Kahl-Str.");
break;
}
case 247167:
{
returnValue = F("Pater-Kaspar-Kuhn-Str.");
break;
}
case 247168:
{
returnValue = F("Pater-Kentenich-Weg");
break;
}
case 247169:
{
returnValue = F("Pater-Kilian-Str.");
break;
}
case 247170:
{
returnValue = F("Pater-Kilian-Weg");
break;
}
case 247171:
{
returnValue = F("Pater-Kirchhoff-Str.");
break;
}
case 247172:
{
returnValue = F("Pater-Klepping-Str.");
break;
}
case 247173:
{
returnValue = F("Pater-Knellinger-Str.");
break;
}
case 247174:
{
returnValue = F("Pater-Kolb-Weg");
break;
}
case 247175:
{
returnValue = F("Pater-Kolbe-Str.");
break;
}
case 247176:
{
returnValue = F("Pater-Kolbe-Weg");
break;
}
case 247177:
{
returnValue = F("Pater-Koller-Str.");
break;
}
case 247178:
{
returnValue = F("Pater-Kraus-Str.");
break;
}
case 247179:
{
returnValue = F("Pater-Krottenthaler-Str.");
break;
}
case 247180:
{
returnValue = F("Pater-Kruse-Weg");
break;
}
case 247181:
{
returnValue = F("Pater-Köster-Weg");
break;
}
case 247182:
{
returnValue = F("Pater-Kürzinger-Str.");
break;
}
case 247183:
{
returnValue = F("Pater-Lacks-Weg");
break;
}
case 247184:
{
returnValue = F("Pater-Laurentius-Str.");
break;
}
case 247185:
{
returnValue = F("Pater-Lenner-Weg");
break;
}
case 247186:
{
returnValue = F("Pater-Leutfried-Weg");
break;
}
case 247187:
{
returnValue = F("Pater-Liberat-Weiß-Str.");
break;
}
case 247188:
{
returnValue = F("Pater-Linnemann-Weg");
break;
}
case 247189:
{
returnValue = F("Pater-Lippurger-Str.");
break;
}
case 247190:
{
returnValue = F("Pater-Loh-Str.");
break;
}
case 247191:
{
returnValue = F("Pater-Loher-Str.");
break;
}
case 247192:
{
returnValue = F("Pater-Lorson-Str.");
break;
}
case 247193:
{
returnValue = F("Pater-Loskyll-Weg");
break;
}
case 247194:
{
returnValue = F("Pater-Lucius-Str.");
break;
}
case 247195:
{
returnValue = F("Pater-Luig-Str.");
break;
}
case 247196:
{
returnValue = F("Pater-Lunkenbein-Platz");
break;
}
case 247197:
{
returnValue = F("Pater-Maier-Str.");
break;
}
case 247198:
{
returnValue = F("Pater-Mangold-Str.");
break;
}
case 247199:
{
returnValue = F("Pater-Marinus-Str.");
break;
}
case 247200:
{
returnValue = F("Pater-Markus-Weg");
break;
}
case 247201:
{
returnValue = F("Pater-Markötter-Promenade");
break;
}
case 247202:
{
returnValue = F("Pater-Martin-Str.");
break;
}
case 247203:
{
returnValue = F("Pater-Matthäus-Str.");
break;
}
case 247204:
{
returnValue = F("Pater-Mauritius-Str.");
break;
}
case 247205:
{
returnValue = F("Pater-Maurus-Feyerabend-Str.");
break;
}
case 247206:
{
returnValue = F("Pater-Maurus-Str.");
break;
}
case 247207:
{
returnValue = F("Pater-Maximilian-Kolbe-Weg");
break;
}
case 247208:
{
returnValue = F("Pater-Mayer-Str.");
break;
}
case 247209:
{
returnValue = F("Pater-Meier-Str.");
break;
}
case 247210:
{
returnValue = F("Pater-Mohr-Str.");
break;
}
case 247211:
{
returnValue = F("Pater-Moritz-Str.");
break;
}
case 247212:
{
returnValue = F("Pater-Moser-Str.");
break;
}
case 247213:
{
returnValue = F("Pater-Müller-Str.");
break;
}
case 247214:
{
returnValue = F("Pater-Nies-Weg");
break;
}
case 247215:
{
returnValue = F("Pater-Nikodemus-Str.");
break;
}
case 247216:
{
returnValue = F("Pater-Nilles-Str.");
break;
}
case 247217:
{
returnValue = F("Pater-Norbert-Weg");
break;
}
case 247218:
{
returnValue = F("Pater-Notker-Str.");
break;
}
case 247219:
{
returnValue = F("Pater-Olaf-Weg");
break;
}
case 247220:
{
returnValue = F("Pater-Oswald-Str.");
break;
}
case 247221:
{
returnValue = F("Pater-Otto-Gäbelein-Str.");
break;
}
case 247222:
{
returnValue = F("Pater-Otto-Hopfenmüller-Str.");
break;
}
case 247223:
{
returnValue = F("Pater-Pauels-Weg");
break;
}
case 247224:
{
returnValue = F("Pater-Paulsen-Str.");
break;
}
case 247225:
{
returnValue = F("Pater-Paulus-Weg");
break;
}
case 247226:
{
returnValue = F("Pater-Pelzer-Platz");
break;
}
case 247227:
{
returnValue = F("Pater-Peter-Grüner-Allee");
break;
}
case 247228:
{
returnValue = F("Pater-Peters-Str.");
break;
}
case 247229:
{
returnValue = F("Pater-Petrus-Heitzer-Weg");
break;
}
case 247230:
{
returnValue = F("Pater-Petrus-Str.");
break;
}
case 247231:
{
returnValue = F("Pater-Philipp-Jeningen-Platz");
break;
}
case 247232:
{
returnValue = F("Pater-Philotheus-Str.");
break;
}
case 247233:
{
returnValue = F("Pater-Pire-Weg");
break;
}
case 247234:
{
returnValue = F("Pater-Pius-Keller-Weg");
break;
}
case 247235:
{
returnValue = F("Pater-Possenti-Str.");
break;
}
case 247236:
{
returnValue = F("Pater-Prinz-Weg");
break;
}
case 247237:
{
returnValue = F("Pater-Quax-Str.");
break;
}
case 247238:
{
returnValue = F("Pater-Raes-Str.");
break;
}
case 247239:
{
returnValue = F("Pater-Rahmann-Str.");
break;
}
case 247240:
{
returnValue = F("Pater-Raskin-Str.");
break;
}
case 247241:
{
returnValue = F("Pater-Reinisch-Str.");
break;
}
case 247242:
{
returnValue = F("Pater-Reus-Str.");
break;
}
case 247243:
{
returnValue = F("Pater-Riepe-Weg");
break;
}
case 247244:
{
returnValue = F("Pater-Robert-Streit-Weg");
break;
}
case 247245:
{
returnValue = F("Pater-Roettges-Weg");
break;
}
case 247246:
{
returnValue = F("Pater-Romanus-Str.");
break;
}
case 247247:
{
returnValue = F("Pater-Rosner-Str.");
break;
}
case 247248:
{
returnValue = F("Pater-Roth-Str.");
break;
}
case 247249:
{
returnValue = F("Pater-Rupert-Mayer-Siedlung");
break;
}
case 247250:
{
returnValue = F("Pater-Rupert-Mayer-Str.");
break;
}
case 247251:
{
returnValue = F("Pater-Rupert-Mayer-Weg");
break;
}
case 247252:
{
returnValue = F("Pater-Rupert-Str.");
break;
}
case 247253:
{
returnValue = F("Pater-Rupperath-Str.");
break;
}
case 247254:
{
returnValue = F("Pater-Sabino-Weg");
break;
}
case 247255:
{
returnValue = F("Pater-Sales-Heß-Weg");
break;
}
case 247256:
{
returnValue = F("Pater-Sanders-Str.");
break;
}
case 247257:
{
returnValue = F("Pater-Schachner-Str.");
break;
}
case 247258:
{
returnValue = F("Pater-Schauff-Weg");
break;
}
case 247259:
{
returnValue = F("Pater-Schelle-Str.");
break;
}
case 247260:
{
returnValue = F("Pater-Schulte-Weg");
break;
}
case 247261:
{
returnValue = F("Pater-Schunath-Str.");
break;
}
case 247262:
{
returnValue = F("Pater-Schöneberger-Str.");
break;
}
case 247263:
{
returnValue = F("Pater-Schürmann-Str.");
break;
}
case 247264:
{
returnValue = F("Pater-Siemer-Str.");
break;
}
case 247265:
{
returnValue = F("Pater-Stefan-Str.");
break;
}
case 247266:
{
returnValue = F("Pater-Steinherr-Str.");
break;
}
case 247267:
{
returnValue = F("Pater-Steinmetzler-Str.");
break;
}
case 247268:
{
returnValue = F("Pater-Stephan-Weg");
break;
}
case 247269:
{
returnValue = F("Pater-Strobl-Weg");
break;
}
case 247270:
{
returnValue = F("Pater-Sträter-Weg");
break;
}
case 247271:
{
returnValue = F("Pater-Terörde-Weg");
break;
}
case 247272:
{
returnValue = F("Pater-Theo-Neumann-Str.");
break;
}
case 247273:
{
returnValue = F("Pater-Titus-Str.");
break;
}
case 247274:
{
returnValue = F("Pater-Trompeter-Str.");
break;
}
case 247275:
{
returnValue = F("Pater-Tölle-Str.");
break;
}
case 247276:
{
returnValue = F("Pater-Valentin-Rathgeber-Str.");
break;
}
case 247277:
{
returnValue = F("Pater-Venantius-Weg");
break;
}
case 247278:
{
returnValue = F("Pater-Versen-Str.");
break;
}
case 247279:
{
returnValue = F("Pater-Viktrizius-Weiß-Str.");
break;
}
case 247280:
{
returnValue = F("Pater-Vincenz-Str.");
break;
}
case 247281:
{
returnValue = F("Pater-Wald-Str.");
break;
}
case 247282:
{
returnValue = F("Pater-Walgenbach-Weg");
break;
}
case 247283:
{
returnValue = F("Pater-Walter-Str.");
break;
}
case 247284:
{
returnValue = F("Pater-Walther-Str.");
break;
}
case 247285:
{
returnValue = F("Pater-Weikamp-Weg");
break;
}
case 247286:
{
returnValue = F("Pater-Weissinger-Str.");
break;
}
case 247287:
{
returnValue = F("Pater-Welty-Str.");
break;
}
case 247288:
{
returnValue = F("Pater-Werny-Str.");
break;
}
case 247289:
{
returnValue = F("Pater-Wigbert-Str.");
break;
}
case 247290:
{
returnValue = F("Pater-Wilhelm-Fink-Str.");
break;
}
case 247291:
{
returnValue = F("Pater-Wilhelm-Schmidt-Weg");
break;
}
case 247292:
{
returnValue = F("Pater-Wohnhaas-Weg");
break;
}
case 247293:
{
returnValue = F("Pater-Zöller-Weg");
break;
}
case 247294:
{
returnValue = F("Paterapfelweg");
break;
}
case 247295:
{
returnValue = F("Paterberg");
break;
}
case 247296:
{
returnValue = F("Paterbusch");
break;
}
case 247297:
{
returnValue = F("Paterdamm");
break;
}
case 247298:
{
returnValue = F("Paterdammer Weg");
break;
}
case 247299:
{
returnValue = F("Paterei");
break;
}
case 247300:
{
returnValue = F("Paterhof");
break;
}
case 247301:
{
returnValue = F("Paterhofstr.");
break;
}
case 247302:
{
returnValue = F("Paterhäuser");
break;
}
case 247303:
{
returnValue = F("Paterkamp");
break;
}
case 247304:
{
returnValue = F("Patermeß");
break;
}
case 247305:
{
returnValue = F("Paternoster");
break;
}
case 247306:
{
returnValue = F("Paternosterstr.");
break;
}
case 247307:
{
returnValue = F("Paternusstr.");
break;
}
case 247308:
{
returnValue = F("Paterpatt");
break;
}
case 247309:
{
returnValue = F("Paters-Hagen-Weg");
break;
}
case 247310:
{
returnValue = F("Patersberg");
break;
}
case 247311:
{
returnValue = F("Patersbergweg");
break;
}
case 247312:
{
returnValue = F("Patersgang");
break;
}
case 247313:
{
returnValue = F("Patersgasse");
break;
}
case 247314:
{
returnValue = F("Patersgraben");
break;
}
case 247315:
{
returnValue = F("Patersholz");
break;
}
case 247316:
{
returnValue = F("Patersholzer Weg");
break;
}
case 247317:
{
returnValue = F("Patershäuser Str.");
break;
}
case 247318:
{
returnValue = F("Patershäuser Weg");
break;
}
case 247319:
{
returnValue = F("Paterskamp");
break;
}
case 247320:
{
returnValue = F("Patersteege");
break;
}
case 247321:
{
returnValue = F("Patersweg");
break;
}
case 247322:
{
returnValue = F("Patersweg-Nord");
break;
}
case 247323:
{
returnValue = F("Patersweg-Süd");
break;
}
case 247324:
{
returnValue = F("Paterswies");
break;
}
case 247325:
{
returnValue = F("Paterswolder Weg");
break;
}
case 247326:
{
returnValue = F("Paterweg");
break;
}
case 247327:
{
returnValue = F("Paterzeller Eibenpfad");
break;
}
case 247328:
{
returnValue = F("Path of beauty");
break;
}
case 247329:
{
returnValue = F("Pathen");
break;
}
case 247330:
{
returnValue = F("Patientengarten");
break;
}
case 247331:
{
returnValue = F("Patientenpark");
break;
}
case 247332:
{
returnValue = F("Patio");
break;
}
case 247333:
{
returnValue = F("Patkenbach");
break;
}
case 247334:
{
returnValue = F("Patkenheide");
break;
}
case 247335:
{
returnValue = F("Patmosstr.");
break;
}
case 247336:
{
returnValue = F("Patmosweg");
break;
}
case 247337:
{
returnValue = F("Patres-Cohausz-Str.");
break;
}
case 247338:
{
returnValue = F("Patresgarten");
break;
}
case 247339:
{
returnValue = F("Patrice-Lumumba-Str.");
break;
}
case 247340:
{
returnValue = F("Patriching");
break;
}
case 247341:
{
returnValue = F("Patrichsiedlung");
break;
}
case 247342:
{
returnValue = F("Patrichstr.");
break;
}
case 247343:
{
returnValue = F("Patrickstr.");
break;
}
case 247344:
{
returnValue = F("Patriotenweg");
break;
}
case 247345:
{
returnValue = F("Patriotischer Weg");
break;
}
case 247346:
{
returnValue = F("Patriz-Zimmer-Weg");
break;
}
case 247347:
{
returnValue = F("Patrizierplatz");
break;
}
case 247348:
{
returnValue = F("Patrizierstr.");
break;
}
case 247349:
{
returnValue = F("Patrizierweg");
break;
}
case 247350:
{
returnValue = F("Patriziusstr.");
break;
}
case 247351:
{
returnValue = F("Patriziusweg");
break;
}
case 247352:
{
returnValue = F("Patrocliweg");
break;
}
case 247353:
{
returnValue = F("Patroklistr.");
break;
}
case 247354:
{
returnValue = F("Patroklusweg");
break;
}
case 247355:
{
returnValue = F("Patronatsstr.");
break;
}
case 247356:
{
returnValue = F("Patronatstr.");
break;
}
case 247357:
{
returnValue = F("Patronatsweg");
break;
}
case 247358:
{
returnValue = F("Patronenweg");
break;
}
case 247359:
{
returnValue = F("Patrouillenweg");
break;
}
case 247360:
{
returnValue = F("Patschelstr.");
break;
}
case 247361:
{
returnValue = F("Patschensteg");
break;
}
case 247362:
{
returnValue = F("Patschenweg");
break;
}
case 247363:
{
returnValue = F("Patschkauer Str.");
break;
}
case 247364:
{
returnValue = F("Patt");
break;
}
case 247365:
{
returnValue = F("Patt ürwer'n Kirkhoff");
break;
}
case 247366:
{
returnValue = F("Pattacker");
break;
}
case 247367:
{
returnValue = F("Pattackerweg");
break;
}
case 247368:
{
returnValue = F("Pattbergstr.");
break;
}
case 247369:
{
returnValue = F("Pattbrede");
break;
}
case 247370:
{
returnValue = F("Pattbreede");
break;
}
case 247371:
{
returnValue = F("Pattburg");
break;
}
case 247372:
{
returnValue = F("Pattburger Bogen");
break;
}
case 247373:
{
returnValue = F("Pattburger Str.");
break;
}
case 247374:
{
returnValue = F("Pattenberger Str.");
break;
}
case 247375:
{
returnValue = F("Pattenbraiken");
break;
}
case 247376:
{
returnValue = F("Pattenham");
break;
}
case 247377:
{
returnValue = F("Pattenhamer Str.");
break;
}
case 247378:
{
returnValue = F("Pattenhofener Str.");
break;
}
case 247379:
{
returnValue = F("Pattenhöfen");
break;
}
case 247380:
{
returnValue = F("Pattensener Str.");
break;
}
case 247381:
{
returnValue = F("Pattenser Dorfstr.");
break;
}
case 247382:
{
returnValue = F("Pattenser Feldweg");
break;
}
case 247383:
{
returnValue = F("Pattenser Hauptstr.");
break;
}
case 247384:
{
returnValue = F("Pattenser Str.");
break;
}
case 247385:
{
returnValue = F("Patterken");
break;
}
case 247386:
{
returnValue = F("Patterner Gasse");
break;
}
case 247387:
{
returnValue = F("Patterner Hof");
break;
}
case 247388:
{
returnValue = F("Patterner Ring");
break;
}
case 247389:
{
returnValue = F("Patternhof");
break;
}
case 247390:
{
returnValue = F("Patthamm");
break;
}
case 247391:
{
returnValue = F("Patthorster Str.");
break;
}
case 247392:
{
returnValue = F("Pattingerweg");
break;
}
case 247393:
{
returnValue = F("Pattkamp");
break;
}
case 247394:
{
returnValue = F("Pattland");
break;
}
case 247395:
{
returnValue = F("Pattscheider Str.");
break;
}
case 247396:
{
returnValue = F("Pattscheider Weg");
break;
}
case 247397:
{
returnValue = F("Pattscheidt");
break;
}
case 247398:
{
returnValue = F("Pattstr.");
break;
}
case 247399:
{
returnValue = F("Pattweg");
break;
}
case 247400:
{
returnValue = F("Pattwiske");
break;
}
case 247401:
{
returnValue = F("Patty-Frank-Weg");
break;
}
case 247402:
{
returnValue = F("Patweg");
break;
}
case 247403:
{
returnValue = F("Patystr.");
break;
}
case 247404:
{
returnValue = F("Patzeltstr.");
break;
}
case 247405:
{
returnValue = F("Patzetz");
break;
}
case 247406:
{
returnValue = F("Patzetzer Str.");
break;
}
case 247407:
{
returnValue = F("Patzlarweg");
break;
}
case 247408:
{
returnValue = F("Patzschkestr.");
break;
}
case 247409:
{
returnValue = F("Patzschwig");
break;
}
case 247410:
{
returnValue = F("Pauckerstr.");
break;
}
case 247411:
{
returnValue = F("Paudritzsch");
break;
}
case 247412:
{
returnValue = F("Pauendyck");
break;
}
case 247413:
{
returnValue = F("Pauenstr.");
break;
}
case 247414:
{
returnValue = F("Pauerstr.");
break;
}
case 247415:
{
returnValue = F("Pauerweg");
break;
}
case 247416:
{
returnValue = F("Pauken-Linie");
break;
}
case 247417:
{
returnValue = F("Paukengasse");
break;
}
case 247418:
{
returnValue = F("Paukergang");
break;
}
case 247419:
{
returnValue = F("Paukskamp");
break;
}
case 247420:
{
returnValue = F("Paul Ehrlich Weg");
break;
}
case 247421:
{
returnValue = F("Paul Fehmer Platz");
break;
}
case 247422:
{
returnValue = F("Paul Heinz-Weg");
break;
}
case 247423:
{
returnValue = F("Paul Richter Str.");
break;
}
case 247424:
{
returnValue = F("Paul Schmidt Ruhe");
break;
}
case 247425:
{
returnValue = F("Paul Schneider Weg");
break;
}
case 247426:
{
returnValue = F("Paul Straube Park");
break;
}
case 247427:
{
returnValue = F("Paul und Gretel Dietrich Str.");
break;
}
case 247428:
{
returnValue = F("Paul-Abraham-Weg");
break;
}
case 247429:
{
returnValue = F("Paul-Adam-Roß-Str.");
break;
}
case 247430:
{
returnValue = F("Paul-Ahrens-Str.");
break;
}
case 247431:
{
returnValue = F("Paul-Aldinger-Str.");
break;
}
case 247432:
{
returnValue = F("Paul-Alsberg-Platz");
break;
}
case 247433:
{
returnValue = F("Paul-Andrich-Weg");
break;
}
case 247434:
{
returnValue = F("Paul-Apel-Str.");
break;
}
case 247435:
{
returnValue = F("Paul-Apitzsch-Str.");
break;
}
case 247436:
{
returnValue = F("Paul-Arnold-Str.");
break;
}
case 247437:
{
returnValue = F("Paul-Arzt-Weg");
break;
}
case 247438:
{
returnValue = F("Paul-Auer-Str.");
break;
}
case 247439:
{
returnValue = F("Paul-Auerbach-Str.");
break;
}
case 247440:
{
returnValue = F("Paul-Avon-Anlage");
break;
}
case 247441:
{
returnValue = F("Paul-Baehr-Str.");
break;
}
case 247442:
{
returnValue = F("Paul-Baethcke-Str.");
break;
}
case 247443:
{
returnValue = F("Paul-Barberot-Str.");
break;
}
case 247444:
{
returnValue = F("Paul-Baumann-Str.");
break;
}
case 247445:
{
returnValue = F("Paul-Baumann-Weg");
break;
}
case 247446:
{
returnValue = F("Paul-Becker-Str.");
break;
}
case 247447:
{
returnValue = F("Paul-Behmann-Str.");
break;
}
case 247448:
{
returnValue = F("Paul-Behncke-Str.");
break;
}
case 247449:
{
returnValue = F("Paul-Bender-Str.");
break;
}
case 247450:
{
returnValue = F("Paul-Bertz-Str.");
break;
}
case 247451:
{
returnValue = F("Paul-Bethge-Str.");
break;
}
case 247452:
{
returnValue = F("Paul-Beylich-Str.");
break;
}
case 247453:
{
returnValue = F("Paul-Birkle-Str.");
break;
}
case 247454:
{
returnValue = F("Paul-Bleisch-Str.");
break;
}
case 247455:
{
returnValue = F("Paul-Blättel-Weg");
break;
}
case 247456:
{
returnValue = F("Paul-Bode-Str.");
break;
}
case 247457:
{
returnValue = F("Paul-Bollfraß-Str.");
break;
}
case 247458:
{
returnValue = F("Paul-Bonatz-Str.");
break;
}
case 247459:
{
returnValue = F("Paul-Bonatz-Weg");
break;
}
case 247460:
{
returnValue = F("Paul-Bonnermann-Str.");
break;
}
case 247461:
{
returnValue = F("Paul-Borstelmann-Str.");
break;
}
case 247462:
{
returnValue = F("Paul-Brandi-Str.");
break;
}
case 247463:
{
returnValue = F("Paul-Brandt-Str.");
break;
}
case 247464:
{
returnValue = F("Paul-Breuer-Str.");
break;
}
case 247465:
{
returnValue = F("Paul-Breyer-Str.");
break;
}
case 247466:
{
returnValue = F("Paul-Brutscher-Str.");
break;
}
case 247467:
{
returnValue = F("Paul-Brätter-Str.");
break;
}
case 247468:
{
returnValue = F("Paul-Brümmer-Str.");
break;
}
case 247469:
{
returnValue = F("Paul-Buerschaper-Str.");
break;
}
case 247470:
{
returnValue = F("Paul-Burger-Str.");
break;
}
case 247471:
{
returnValue = F("Paul-Burkhardt-Weg");
break;
}
case 247472:
{
returnValue = F("Paul-Burtchen-Weg");
break;
}
case 247473:
{
returnValue = F("Paul-Bäumer-Str.");
break;
}
case 247474:
{
returnValue = F("Paul-Bäumer-Weg");
break;
}
case 247475:
{
returnValue = F("Paul-Böhm-Str.");
break;
}
case 247476:
{
returnValue = F("Paul-Böhringer-Str.");
break;
}
case 247477:
{
returnValue = F("Paul-Böke-Str.");
break;
}
case 247478:
{
returnValue = F("Paul-Bönner-Str.");
break;
}
case 247479:
{
returnValue = F("Paul-Böss-Str.");
break;
}
case 247480:
{
returnValue = F("Paul-Böttcher-Str.");
break;
}
case 247481:
{
returnValue = F("Paul-Bühler-Str.");
break;
}
case 247482:
{
returnValue = F("Paul-Büttner-Str.");
break;
}
case 247483:
{
returnValue = F("Paul-Cezanne-Str.");
break;
}
case 247484:
{
returnValue = F("Paul-Claußner-Str.");
break;
}
case 247485:
{
returnValue = F("Paul-Clemen-Str.");
break;
}
case 247486:
{
returnValue = F("Paul-Czellnik-Str.");
break;
}
case 247487:
{
returnValue = F("Paul-Cézanne-Weg");
break;
}
case 247488:
{
returnValue = F("Paul-Dahlke-Weg");
break;
}
case 247489:
{
returnValue = F("Paul-Dahm-Str.");
break;
}
case 247490:
{
returnValue = F("Paul-Dax-Str.");
break;
}
case 247491:
{
returnValue = F("Paul-Decker-Platz");
break;
}
case 247492:
{
returnValue = F("Paul-Decker-Str.");
break;
}
case 247493:
{
returnValue = F("Paul-Deffke-Str.");
break;
}
case 247494:
{
returnValue = F("Paul-Denis-Str.");
break;
}
case 247495:
{
returnValue = F("Paul-Desfossez-Allee");
break;
}
case 247496:
{
returnValue = F("Paul-Dessau-Str.");
break;
}
case 247497:
{
returnValue = F("Paul-Deuringer-Weg");
break;
}
case 247498:
{
returnValue = F("Paul-Deyerling-Str.");
break;
}
case 247499:
{
returnValue = F("Paul-Dickopf-Str.");
break;
}
case 247500:
{
returnValue = F("Paul-Diehl-Park");
break;
}
case 247501:
{
returnValue = F("Paul-Dietrich-Str.");
break;
}
case 247502:
{
returnValue = F("Paul-Dietz-Str.");
break;
}
case 247503:
{
returnValue = F("Paul-Dopf-Str.");
break;
}
case 247504:
{
returnValue = F("Paul-Dorn-Str.");
break;
}
case 247505:
{
returnValue = F("Paul-Dorsch-Weg");
break;
}
case 247506:
{
returnValue = F("Paul-Ducros-Str.");
break;
}
case 247507:
{
returnValue = F("Paul-Duden-Str.");
break;
}
case 247508:
{
returnValue = F("Paul-Dölz-Str.");
break;
}
case 247509:
{
returnValue = F("Paul-Dörr-Weg");
break;
}
case 247510:
{
returnValue = F("Paul-Eber-Str.");
break;
}
case 247511:
{
returnValue = F("Paul-Ecke-Str.");
break;
}
case 247512:
{
returnValue = F("Paul-Egell-Str.");
break;
}
case 247513:
{
returnValue = F("Paul-Egleder-Weg");
break;
}
case 247514:
{
returnValue = F("Paul-Ehrlich-Ring");
break;
}
case 247515:
{
returnValue = F("Paul-Ehrlich-Str.");
break;
}
case 247516:
{
returnValue = F("Paul-Ehrlich-Weg");
break;
}
case 247517:
{
returnValue = F("Paul-Eipper-Weg");
break;
}
case 247518:
{
returnValue = F("Paul-Engel-Str.");
break;
}
case 247519:
{
returnValue = F("Paul-Engelhard-Str.");
break;
}
case 247520:
{
returnValue = F("Paul-Engelhard-Weg");
break;
}
case 247521:
{
returnValue = F("Paul-Erbe-Str.");
break;
}
case 247522:
{
returnValue = F("Paul-Erdniß-Str.");
break;
}
case 247523:
{
returnValue = F("Paul-Erhlich-Str.");
break;
}
case 247524:
{
returnValue = F("Paul-Ermler-Weg");
break;
}
case 247525:
{
returnValue = F("Paul-Ernst-Str.");
break;
}
case 247526:
{
returnValue = F("Paul-Ernst-Weg");
break;
}
case 247527:
{
returnValue = F("Paul-Esch-Str.");
break;
}
case 247528:
{
returnValue = F("Paul-Esser-Str.");
break;
}
case 247529:
{
returnValue = F("Paul-Essers-Str.");
break;
}
case 247530:
{
returnValue = F("Paul-Eufinger-Platz");
break;
}
case 247531:
{
returnValue = F("Paul-Exss-Str.");
break;
}
case 247532:
{
returnValue = F("Paul-Eyferth-Str.");
break;
}
case 247533:
{
returnValue = F("Paul-Falk-Weg");
break;
}
case 247534:
{
returnValue = F("Paul-Falke-Platz");
break;
}
case 247535:
{
returnValue = F("Paul-Feldhügel-Weg");
break;
}
case 247536:
{
returnValue = F("Paul-Felix-Str.");
break;
}
case 247537:
{
returnValue = F("Paul-Fickeler-Weg");
break;
}
case 247538:
{
returnValue = F("Paul-Fiedler-Str.");
break;
}
case 247539:
{
returnValue = F("Paul-Figge-Str.");
break;
}
case 247540:
{
returnValue = F("Paul-Finger-Str.");
break;
}
case 247541:
{
returnValue = F("Paul-Finkler-Str.");
break;
}
case 247542:
{
returnValue = F("Paul-Fischer-Str.");
break;
}
case 247543:
{
returnValue = F("Paul-Fischer-Weg");
break;
}
case 247544:
{
returnValue = F("Paul-Flechsig-Str.");
break;
}
case 247545:
{
returnValue = F("Paul-Fleming-Gasse");
break;
}
case 247546:
{
returnValue = F("Paul-Fleming-Str.");
break;
}
case 247547:
{
returnValue = F("Paul-Flocke-Weg");
break;
}
case 247548:
{
returnValue = F("Paul-Forbach-Str.");
break;
}
case 247549:
{
returnValue = F("Paul-Francke-Str.");
break;
}
case 247550:
{
returnValue = F("Paul-Franke-Str.");
break;
}
case 247551:
{
returnValue = F("Paul-Frankfurth-Str.");
break;
}
case 247552:
{
returnValue = F("Paul-Frankl-Weg");
break;
}
case 247553:
{
returnValue = F("Paul-Franz-Str.");
break;
}
case 247554:
{
returnValue = F("Paul-Freye-Str.");
break;
}
case 247555:
{
returnValue = F("Paul-Friedl-Str.");
break;
}
case 247556:
{
returnValue = F("Paul-Friedländer-Str.");
break;
}
case 247557:
{
returnValue = F("Paul-Fritzsching-Str.");
break;
}
case 247558:
{
returnValue = F("Paul-Frost-Ring");
break;
}
case 247559:
{
returnValue = F("Paul-Fuchs-Str.");
break;
}
case 247560:
{
returnValue = F("Paul-Fuhr-Str.");
break;
}
case 247561:
{
returnValue = F("Paul-Fuß-Str.");
break;
}
case 247562:
{
returnValue = F("Paul-Fähnle-Str.");
break;
}
case 247563:
{
returnValue = F("Paul-Fürstenberg-Str.");
break;
}
case 247564:
{
returnValue = F("Paul-Gauguin-Str.");
break;
}
case 247565:
{
returnValue = F("Paul-Gaupp-Str.");
break;
}
case 247566:
{
returnValue = F("Paul-Gedler-Str.");
break;
}
case 247567:
{
returnValue = F("Paul-Geipel-Str.");
break;
}
case 247568:
{
returnValue = F("Paul-Geisendörfer-Weg");
break;
}
case 247569:
{
returnValue = F("Paul-Geisler-Weg");
break;
}
case 247570:
{
returnValue = F("Paul-Geißler-Str.");
break;
}
case 247571:
{
returnValue = F("Paul-Gerards-Str.");
break;
}
case 247572:
{
returnValue = F("Paul-Gerhard-Str.");
break;
}
case 247573:
{
returnValue = F("Paul-Gerhard-Weg");
break;
}
case 247574:
{
returnValue = F("Paul-Gerhardt-Allee");
break;
}
case 247575:
{
returnValue = F("Paul-Gerhardt-Gemeinde");
break;
}
case 247576:
{
returnValue = F("Paul-Gerhardt-Platz");
break;
}
case 247577:
{
returnValue = F("Paul-Gerhardt-Ring");
break;
}
case 247578:
{
returnValue = F("Paul-Gerhardt-Str.");
break;
}
case 247579:
{
returnValue = F("Paul-Gerhardt-Weg");
break;
}
case 247580:
{
returnValue = F("Paul-Gerkens-Ring");
break;
}
case 247581:
{
returnValue = F("Paul-Gey-Str.");
break;
}
case 247582:
{
returnValue = F("Paul-Gillet-Platz");
break;
}
case 247583:
{
returnValue = F("Paul-Gimmler-Str.");
break;
}
case 247584:
{
returnValue = F("Paul-Ginthum-Str.");
break;
}
case 247585:
{
returnValue = F("Paul-Gloede-Str.");
break;
}
case 247586:
{
returnValue = F("Paul-Goerens-Str.");
break;
}
case 247587:
{
returnValue = F("Paul-Goosmann-Str.");
break;
}
case 247588:
{
returnValue = F("Paul-Goppelt-Str.");
break;
}
case 247589:
{
returnValue = F("Paul-Gordan-Str.");
break;
}
case 247590:
{
returnValue = F("Paul-Gossen-Str.");
break;
}
case 247591:
{
returnValue = F("Paul-Greifzu-Str.");
break;
}
case 247592:
{
returnValue = F("Paul-Grelot-Str.");
break;
}
case 247593:
{
returnValue = F("Paul-Greuel-Weg");
break;
}
case 247594:
{
returnValue = F("Paul-Griesser-Str.");
break;
}
case 247595:
{
returnValue = F("Paul-Groh-Str.");
break;
}
case 247596:
{
returnValue = F("Paul-Gronemeyer-Str.");
break;
}
case 247597:
{
returnValue = F("Paul-Grosse-Passage");
break;
}
case 247598:
{
returnValue = F("Paul-Gruner-Str.");
break;
}
case 247599:
{
returnValue = F("Paul-Gräb-Str.");
break;
}
case 247600:
{
returnValue = F("Paul-Guenther-Platz");
break;
}
case 247601:
{
returnValue = F("Paul-Göbel-Brücke");
break;
}
case 247602:
{
returnValue = F("Paul-Göbel-Str.");
break;
}
case 247603:
{
returnValue = F("Paul-Haegele-Weg");
break;
}
case 247604:
{
returnValue = F("Paul-Haertl-Str.");
break;
}
case 247605:
{
returnValue = F("Paul-Haffner-Str.");
break;
}
case 247606:
{
returnValue = F("Paul-Hahn-Weg");
break;
}
case 247607:
{
returnValue = F("Paul-Hallmann-Str.");
break;
}
case 247608:
{
returnValue = F("Paul-Haltenhof-Platz");
break;
}
case 247609:
{
returnValue = F("Paul-Hartmann-Str.");
break;
}
case 247610:
{
returnValue = F("Paul-Haucke-Str.");
break;
}
case 247611:
{
returnValue = F("Paul-Heidelbach-Str.");
break;
}
case 247612:
{
returnValue = F("Paul-Heidelbauer-Str.");
break;
}
case 247613:
{
returnValue = F("Paul-Heilig-Str.");
break;
}
case 247614:
{
returnValue = F("Paul-Heimen-Str.");
break;
}
case 247615:
{
returnValue = F("Paul-Heinemann-Str.");
break;
}
case 247616:
{
returnValue = F("Paul-Heinrich-Weg");
break;
}
case 247617:
{
returnValue = F("Paul-Helbich-Str.");
break;
}
case 247618:
{
returnValue = F("Paul-Henri-Spaak-Str.");
break;
}
case 247619:
{
returnValue = F("Paul-Henri-Spaak-Weg");
break;
}
case 247620:
{
returnValue = F("Paul-Henze-Str.");
break;
}
case 247621:
{
returnValue = F("Paul-Herberger-Str.");
break;
}
case 247622:
{
returnValue = F("Paul-Herbst-Weg");
break;
}
case 247623:
{
returnValue = F("Paul-Herger-Str.");
break;
}
case 247624:
{
returnValue = F("Paul-Hessemer-Str.");
break;
}
case 247625:
{
returnValue = F("Paul-Hexemer-Str.");
break;
}
case 247626:
{
returnValue = F("Paul-Hey-Str.");
break;
}
case 247627:
{
returnValue = F("Paul-Heyse-Ring");
break;
}
case 247628:
{
returnValue = F("Paul-Heyse-Str.");
break;
}
case 247629:
{
returnValue = F("Paul-Heyse-Weg");
break;
}
case 247630:
{
returnValue = F("Paul-Hildebrandt-Str.");
break;
}
case 247631:
{
returnValue = F("Paul-Hindemith-Anlage");
break;
}
case 247632:
{
returnValue = F("Paul-Hindemith-Ring");
break;
}
case 247633:
{
returnValue = F("Paul-Hindemith-Str.");
break;
}
case 247634:
{
returnValue = F("Paul-Hindemith-Weg");
break;
}
case 247635:
{
returnValue = F("Paul-Hoffmann-Str.");
break;
}
case 247636:
{
returnValue = F("Paul-Hohe-Str.");
break;
}
case 247637:
{
returnValue = F("Paul-Holz-Ring");
break;
}
case 247638:
{
returnValue = F("Paul-Holz-Str.");
break;
}
case 247639:
{
returnValue = F("Paul-Horst-Str.");
break;
}
case 247640:
{
returnValue = F("Paul-Hoyer-Str.");
break;
}
case 247641:
{
returnValue = F("Paul-Huber-Str.");
break;
}
case 247642:
{
returnValue = F("Paul-Hubert-Pesch-Str.");
break;
}
case 247643:
{
returnValue = F("Paul-Hug-Str.");
break;
}
case 247644:
{
returnValue = F("Paul-Huisgen-Str.");
break;
}
case 247645:
{
returnValue = F("Paul-Humburg-Str.");
break;
}
case 247646:
{
returnValue = F("Paul-Hutten-Ring");
break;
}
case 247647:
{
returnValue = F("Paul-Högelheimer-Str.");
break;
}
case 247648:
{
returnValue = F("Paul-Hübner-Str.");
break;
}
case 247649:
{
returnValue = F("Paul-Illhardt-Str.");
break;
}
case 247650:
{
returnValue = F("Paul-Jacob-Bruns-Weg");
break;
}
case 247651:
{
returnValue = F("Paul-Jaeger-Weg");
break;
}
case 247652:
{
returnValue = F("Paul-Jaich-Weg");
break;
}
case 247653:
{
returnValue = F("Paul-Jascke-Weg");
break;
}
case 247654:
{
returnValue = F("Paul-Jauch-Str.");
break;
}
case 247655:
{
returnValue = F("Paul-Jauch-Weg");
break;
}
case 247656:
{
returnValue = F("Paul-Jerchel-Str.");
break;
}
case 247657:
{
returnValue = F("Paul-Jonas-Meier-Str.");
break;
}
case 247658:
{
returnValue = F("Paul-Jordan-Str.");
break;
}
case 247659:
{
returnValue = F("Paul-Jordery-Str.");
break;
}
case 247660:
{
returnValue = F("Paul-Josef-Nardini-Platz");
break;
}
case 247661:
{
returnValue = F("Paul-Josef-Weg");
break;
}
case 247662:
{
returnValue = F("Paul-Joseph-Str.");
break;
}
case 247663:
{
returnValue = F("Paul-Junge-Str.");
break;
}
case 247664:
{
returnValue = F("Paul-Junghans-Str.");
break;
}
case 247665:
{
returnValue = F("Paul-Jäger-Str.");
break;
}
case 247666:
{
returnValue = F("Paul-Jäger-Weg");
break;
}
case 247667:
{
returnValue = F("Paul-Jäkel-Str.");
break;
}
case 247668:
{
returnValue = F("Paul-Jülke-Str.");
break;
}
case 247669:
{
returnValue = F("Paul-Kaiser-Reka-Platz");
break;
}
case 247670:
{
returnValue = F("Paul-Kaiser-Str.");
break;
}
case 247671:
{
returnValue = F("Paul-Kannapke-Weg");
break;
}
case 247672:
{
returnValue = F("Paul-Kauzmann-Str.");
break;
}
case 247673:
{
returnValue = F("Paul-Kauzmann-Weg");
break;
}
case 247674:
{
returnValue = F("Paul-Kauzmann-Winkel");
break;
}
case 247675:
{
returnValue = F("Paul-Kaußen-Str.");
break;
}
case 247676:
{
returnValue = F("Paul-Kegel-Weg");
break;
}
case 247677:
{
returnValue = F("Paul-Keim-Str.");
break;
}
case 247678:
{
returnValue = F("Paul-Keith-Str.");
break;
}
case 247679:
{
returnValue = F("Paul-Keller-Ring");
break;
}
case 247680:
{
returnValue = F("Paul-Keller-Str.");
break;
}
case 247681:
{
returnValue = F("Paul-Keller-Weg");
break;
}
case 247682:
{
returnValue = F("Paul-Kemp-Str.");
break;
}
case 247683:
{
returnValue = F("Paul-Kienle-Weg");
break;
}
case 247684:
{
returnValue = F("Paul-Kieselmann-Str.");
break;
}
case 247685:
{
returnValue = F("Paul-Kircheis-Str.");
break;
}
case 247686:
{
returnValue = F("Paul-Kirchhof-Platz");
break;
}
case 247687:
{
returnValue = F("Paul-Kiß-Str.");
break;
}
case 247688:
{
returnValue = F("Paul-Klee-Hof");
break;
}
case 247689:
{
returnValue = F("Paul-Klee-Platz");
break;
}
case 247690:
{
returnValue = F("Paul-Klee-Ring");
break;
}
case 247691:
{
returnValue = F("Paul-Klee-Str.");
break;
}
case 247692:
{
returnValue = F("Paul-Klee-Weg");
break;
}
case 247693:
{
returnValue = F("Paul-Kleist-Weg");
break;
}
case 247694:
{
returnValue = F("Paul-Klinger-Str.");
break;
}
case 247695:
{
returnValue = F("Paul-Klose-Str.");
break;
}
case 247696:
{
returnValue = F("Paul-Kluth-Str.");
break;
}
case 247697:
{
returnValue = F("Paul-Klöpsch-Str.");
break;
}
case 247698:
{
returnValue = F("Paul-Klüber-Str.");
break;
}
case 247699:
{
returnValue = F("Paul-Kmiec-Str.");
break;
}
case 247700:
{
returnValue = F("Paul-Kock-Str.");
break;
}
case 247701:
{
returnValue = F("Paul-Koepff-Weg");
break;
}
case 247702:
{
returnValue = F("Paul-Kolb-Str.");
break;
}
case 247703:
{
returnValue = F("Paul-Korff-Allee");
break;
}
case 247704:
{
returnValue = F("Paul-Korff-Str.");
break;
}
case 247705:
{
returnValue = F("Paul-Kornfeld-Weg");
break;
}
case 247706:
{
returnValue = F("Paul-Kosmalla-Str.");
break;
}
case 247707:
{
returnValue = F("Paul-Kottenkamp-Weg");
break;
}
case 247708:
{
returnValue = F("Paul-Kottsieper-Str.");
break;
}
case 247709:
{
returnValue = F("Paul-Krause-Str.");
break;
}
case 247710:
{
returnValue = F("Paul-Krebs-Str.");
break;
}
case 247711:
{
returnValue = F("Paul-Kreuzer-Str.");
break;
}
case 247712:
{
returnValue = F("Paul-Krey-Str.");
break;
}
case 247713:
{
returnValue = F("Paul-Krüger-Pfad");
break;
}
case 247714:
{
returnValue = F("Paul-Kuhlmann-Weg");
break;
}
case 247715:
{
returnValue = F("Paul-Kulisch-Str.");
break;
}
case 247716:
{
returnValue = F("Paul-Kälberer-Weg");
break;
}
case 247717:
{
returnValue = F("Paul-Käsmaier-Str.");
break;
}
case 247718:
{
returnValue = F("Paul-Käßer-Weg");
break;
}
case 247719:
{
returnValue = F("Paul-Kölbel-Weg");
break;
}
case 247720:
{
returnValue = F("Paul-Königer-Str.");
break;
}
case 247721:
{
returnValue = F("Paul-Körber-Str.");
break;
}
case 247722:
{
returnValue = F("Paul-Körber-Weg");
break;
}
case 247723:
{
returnValue = F("Paul-Körschgen-Str.");
break;
}
case 247724:
{
returnValue = F("Paul-Kühne-Str.");
break;
}
case 247725:
{
returnValue = F("Paul-Küster-Str.");
break;
}
case 247726:
{
returnValue = F("Paul-Küstner-Str.");
break;
}
case 247727:
{
returnValue = F("Paul-Lakämper-Str.");
break;
}
case 247728:
{
returnValue = F("Paul-Landwehr-Str.");
break;
}
case 247729:
{
returnValue = F("Paul-Lange-Bey-Str.");
break;
}
case 247730:
{
returnValue = F("Paul-Langen-Str.");
break;
}
case 247731:
{
returnValue = F("Paul-Langheinrich-Str.");
break;
}
case 247732:
{
returnValue = F("Paul-Laufenberg-Str.");
break;
}
case 247733:
{
returnValue = F("Paul-Lazarus-Str.");
break;
}
case 247734:
{
returnValue = F("Paul-Leberecht-König-Str.");
break;
}
case 247735:
{
returnValue = F("Paul-Lechler-Passage");
break;
}
case 247736:
{
returnValue = F("Paul-Lechler-Str.");
break;
}
case 247737:
{
returnValue = F("Paul-Lechler-Weg");
break;
}
case 247738:
{
returnValue = F("Paul-Lehmann-Str.");
break;
}
case 247739:
{
returnValue = F("Paul-Leistritz-Str.");
break;
}
case 247740:
{
returnValue = F("Paul-Leitner-Str.");
break;
}
case 247741:
{
returnValue = F("Paul-Lemberger-Str.");
break;
}
case 247742:
{
returnValue = F("Paul-Lemmerz-Str.");
break;
}
case 247743:
{
returnValue = F("Paul-Leo-Str.");
break;
}
case 247744:
{
returnValue = F("Paul-Leonhardt-Str.");
break;
}
case 247745:
{
returnValue = F("Paul-Lieberknecht-Weg");
break;
}
case 247746:
{
returnValue = F("Paul-Lincke-Platz");
break;
}
case 247747:
{
returnValue = F("Paul-Lincke-Staffel");
break;
}
case 247748:
{
returnValue = F("Paul-Lincke-Str.");
break;
}
case 247749:
{
returnValue = F("Paul-Lincke-Weg");
break;
}
case 247750:
{
returnValue = F("Paul-Linder-Weg");
break;
}
case 247751:
{
returnValue = F("Paul-Linke-Str.");
break;
}
case 247752:
{
returnValue = F("Paul-List-Str.");
break;
}
case 247753:
{
returnValue = F("Paul-Loebe-Str.");
break;
}
case 247754:
{
returnValue = F("Paul-Lorenz-Str.");
break;
}
case 247755:
{
returnValue = F("Paul-Löbe-Str.");
break;
}
case 247756:
{
returnValue = F("Paul-Löbe-Weg");
break;
}
case 247757:
{
returnValue = F("Paul-Löffler-Weg");
break;
}
case 247758:
{
returnValue = F("Paul-Lörcher-Str.");
break;
}
case 247759:
{
returnValue = F("Paul-Löwe-Str.");
break;
}
case 247760:
{
returnValue = F("Paul-Lücke-Str.");
break;
}
case 247761:
{
returnValue = F("Paul-Lükewille-Platz");
break;
}
case 247762:
{
returnValue = F("Paul-Lürmann-Str.");
break;
}
case 247763:
{
returnValue = F("Paul-Lüth-Str.");
break;
}
case 247764:
{
returnValue = F("Paul-Magar-Platz");
break;
}
case 247765:
{
returnValue = F("Paul-Magar-Str.");
break;
}
case 247766:
{
returnValue = F("Paul-Mahringer-Weg");
break;
}
case 247767:
{
returnValue = F("Paul-Mai-Weg");
break;
}
case 247768:
{
returnValue = F("Paul-Malzahn-Str.");
break;
}
case 247769:
{
returnValue = F("Paul-Maria-van-Aaken-Str.");
break;
}
case 247770:
{
returnValue = F("Paul-Marien-Str.");
break;
}
case 247771:
{
returnValue = F("Paul-Martin-Ufer");
break;
}
case 247772:
{
returnValue = F("Paul-Martini-Str.");
break;
}
case 247773:
{
returnValue = F("Paul-Mathis-Str.");
break;
}
case 247774:
{
returnValue = F("Paul-Matthey-Str.");
break;
}
case 247775:
{
returnValue = F("Paul-Maurer-Str.");
break;
}
case 247776:
{
returnValue = F("Paul-Mayer-Str.");
break;
}
case 247777:
{
returnValue = F("Paul-Meimberg-Str.");
break;
}
case 247778:
{
returnValue = F("Paul-Meisinger-Str.");
break;
}
case 247779:
{
returnValue = F("Paul-Meißner-Brücke");
break;
}
case 247780:
{
returnValue = F("Paul-Melchers-Str.");
break;
}
case 247781:
{
returnValue = F("Paul-Merker-Str.");
break;
}
case 247782:
{
returnValue = F("Paul-Mertgen-Str.");
break;
}
case 247783:
{
returnValue = F("Paul-Mertin-Str.");
break;
}
case 247784:
{
returnValue = F("Paul-Metz-Brücke");
break;
}
case 247785:
{
returnValue = F("Paul-Metz-Str.");
break;
}
case 247786:
{
returnValue = F("Paul-Mewes-Damm");
break;
}
case 247787:
{
returnValue = F("Paul-Meyer-Str.");
break;
}
case 247788:
{
returnValue = F("Paul-Meyerkamp-Str.");
break;
}
case 247789:
{
returnValue = F("Paul-Michael-Str.");
break;
}
case 247790:
{
returnValue = F("Paul-Michels-Weg");
break;
}
case 247791:
{
returnValue = F("Paul-Mischke-Allee");
break;
}
case 247792:
{
returnValue = F("Paul-Moderson-Becker-Weg");
break;
}
case 247793:
{
returnValue = F("Paul-Moog-Str.");
break;
}
case 247794:
{
returnValue = F("Paul-Moor-Weg");
break;
}
case 247795:
{
returnValue = F("Paul-Morant-Allee");
break;
}
case 247796:
{
returnValue = F("Paul-Moser-Str.");
break;
}
case 247797:
{
returnValue = F("Paul-Motz-Str.");
break;
}
case 247798:
{
returnValue = F("Paul-Motz-Weg");
break;
}
case 247799:
{
returnValue = F("Paul-Mustroph-Weg");
break;
}
case 247800:
{
returnValue = F("Paul-Möhrer-Weg");
break;
}
case 247801:
{
returnValue = F("Paul-Mühsam-Str.");
break;
}
case 247802:
{
returnValue = F("Paul-Müller-Kaempff-Weg");
break;
}
case 247803:
{
returnValue = F("Paul-Müller-Str.");
break;
}
case 247804:
{
returnValue = F("Paul-Müller-Weg");
break;
}
case 247805:
{
returnValue = F("Paul-Münch-Str.");
break;
}
case 247806:
{
returnValue = F("Paul-Münch-Weg");
break;
}
case 247807:
{
returnValue = F("Paul-Münsterer-Str.");
break;
}
case 247808:
{
returnValue = F("Paul-Nagel-Str.");
break;
}
case 247809:
{
returnValue = F("Paul-Nappenbach-Str.");
break;
}
case 247810:
{
returnValue = F("Paul-Natorp-Str.");
break;
}
case 247811:
{
returnValue = F("Paul-Neck-Str.");
break;
}
case 247812:
{
returnValue = F("Paul-Neese-Platz");
break;
}
case 247813:
{
returnValue = F("Paul-Neumann-Str.");
break;
}
case 247814:
{
returnValue = F("Paul-Nießen-Str.");
break;
}
case 247815:
{
returnValue = F("Paul-Nikusch-Str.");
break;
}
case 247816:
{
returnValue = F("Paul-Nillert-Str.");
break;
}
case 247817:
{
returnValue = F("Paul-Nipkow-Weg");
break;
}
case 247818:
{
returnValue = F("Paul-Norz-Str.");
break;
}
case 247819:
{
returnValue = F("Paul-Oestreich-Str.");
break;
}
case 247820:
{
returnValue = F("Paul-Oestreicher-Platz");
break;
}
case 247821:
{
returnValue = F("Paul-Oventrop-Str.");
break;
}
case 247822:
{
returnValue = F("Paul-Padua-Str.");
break;
}
case 247823:
{
returnValue = F("Paul-Paede-Str.");
break;
}
case 247824:
{
returnValue = F("Paul-Pagendarm-Str.");
break;
}
case 247825:
{
returnValue = F("Paul-Pausinger-Weg");
break;
}
case 247826:
{
returnValue = F("Paul-Pfaff-Str.");
break;
}
case 247827:
{
returnValue = F("Paul-Pfiel-Weg");
break;
}
case 247828:
{
returnValue = F("Paul-Pfizer-Str.");
break;
}
case 247829:
{
returnValue = F("Paul-Pfleiderer-Str.");
break;
}
case 247830:
{
returnValue = F("Paul-Pieper-Str.");
break;
}
case 247831:
{
returnValue = F("Paul-Piwowarsky-Str.");
break;
}
case 247832:
{
returnValue = F("Paul-Polster-Weg");
break;
}
case 247833:
{
returnValue = F("Paul-Polzenberg-Weg");
break;
}
case 247834:
{
returnValue = F("Paul-Preiss-Str.");
break;
}
case 247835:
{
returnValue = F("Paul-Priem-Str.");
break;
}
case 247836:
{
returnValue = F("Paul-Quensel-Weg");
break;
}
case 247837:
{
returnValue = F("Paul-R.-Kraemer-Allee");
break;
}
case 247838:
{
returnValue = F("Paul-Radack-Str.");
break;
}
case 247839:
{
returnValue = F("Paul-Rauscher-Str.");
break;
}
case 247840:
{
returnValue = F("Paul-Rebhuhn-Str.");
break;
}
case 247841:
{
returnValue = F("Paul-Reichardt-Str.");
break;
}
case 247842:
{
returnValue = F("Paul-Rein-Str.");
break;
}
case 247843:
{
returnValue = F("Paul-Reinhard-Beierlein-Str.");
break;
}
case 247844:
{
returnValue = F("Paul-Reiss-Str.");
break;
}
case 247845:
{
returnValue = F("Paul-Reusch-Str.");
break;
}
case 247846:
{
returnValue = F("Paul-Reusche-Weg");
break;
}
case 247847:
{
returnValue = F("Paul-Richter-Str.");
break;
}
case 247848:
{
returnValue = F("Paul-Riebeck-Str.");
break;
}
case 247849:
{
returnValue = F("Paul-Riedel-Str.");
break;
}
case 247850:
{
returnValue = F("Paul-Rieder-Str.");
break;
}
case 247851:
{
returnValue = F("Paul-Riepp-Str.");
break;
}
case 247852:
{
returnValue = F("Paul-Rilla-Str.");
break;
}
case 247853:
{
returnValue = F("Paul-Rippert-Str.");
break;
}
case 247854:
{
returnValue = F("Paul-Ritter-Str.");
break;
}
case 247855:
{
returnValue = F("Paul-Rohland-Str.");
break;
}
case 247856:
{
returnValue = F("Paul-Roitzsch-Str.");
break;
}
case 247857:
{
returnValue = F("Paul-Ronczka-Str.");
break;
}
case 247858:
{
returnValue = F("Paul-Rosa-Str.");
break;
}
case 247859:
{
returnValue = F("Paul-Rosenkranz-Str.");
break;
}
case 247860:
{
returnValue = F("Paul-Rummert-Ring");
break;
}
case 247861:
{
returnValue = F("Paul-Rutgat-Platz");
break;
}
case 247862:
{
returnValue = F("Paul-Röder-Str.");
break;
}
case 247863:
{
returnValue = F("Paul-Rödiger-Str.");
break;
}
case 247864:
{
returnValue = F("Paul-Röhrle-Str.");
break;
}
case 247865:
{
returnValue = F("Paul-Röltgen-Str.");
break;
}
case 247866:
{
returnValue = F("Paul-Röntgen-Str.");
break;
}
case 247867:
{
returnValue = F("Paul-Rössel-Weg");
break;
}
case 247868:
{
returnValue = F("Paul-Röstel-Str.");
break;
}
case 247869:
{
returnValue = F("Paul-Rücker-Str.");
break;
}
case 247870:
{
returnValue = F("Paul-Rücklein-Str.");
break;
}
case 247871:
{
returnValue = F("Paul-Rüttchen-Str.");
break;
}
case 247872:
{
returnValue = F("Paul-Sattler-Weg");
break;
}
case 247873:
{
returnValue = F("Paul-Schaaff-Str.");
break;
}
case 247874:
{
returnValue = F("Paul-Schaefer-Weg");
break;
}
case 247875:
{
returnValue = F("Paul-Schallück-Str.");
break;
}
case 247876:
{
returnValue = F("Paul-Scharf-Str.");
break;
}
case 247877:
{
returnValue = F("Paul-Schedius-Weg");
break;
}
case 247878:
{
returnValue = F("Paul-Scheibe-Platz");
break;
}
case 247879:
{
returnValue = F("Paul-Schempp-Web");
break;
}
case 247880:
{
returnValue = F("Paul-Scherz-Str.");
break;
}
case 247881:
{
returnValue = F("Paul-Schiebel-Str.");
break;
}
case 247882:
{
returnValue = F("Paul-Schiedt-Str.");
break;
}
case 247883:
{
returnValue = F("Paul-Schilder-Weg");
break;
}
case 247884:
{
returnValue = F("Paul-Schindel-Park");
break;
}
case 247885:
{
returnValue = F("Paul-Schipper-Ring");
break;
}
case 247886:
{
returnValue = F("Paul-Schlack-Str.");
break;
}
case 247887:
{
returnValue = F("Paul-Schlesiger-Str.");
break;
}
case 247888:
{
returnValue = F("Paul-Schmetkamp-Str.");
break;
}
case 247889:
{
returnValue = F("Paul-Schmid-Weg");
break;
}
case 247890:
{
returnValue = F("Paul-Schmidt-Str.");
break;
}
case 247891:
{
returnValue = F("Paul-Schmitthenner-Str.");
break;
}
case 247892:
{
returnValue = F("Paul-Schmitz-Str.");
break;
}
case 247893:
{
returnValue = F("Paul-Schmook-Str.");
break;
}
case 247894:
{
returnValue = F("Paul-Schneider Str.");
break;
}
case 247895:
{
returnValue = F("Paul-Schneider-Siedlung");
break;
}
case 247896:
{
returnValue = F("Paul-Schneider-Str.");
break;
}
case 247897:
{
returnValue = F("Paul-Schneider-Weg");
break;
}
case 247898:
{
returnValue = F("Paul-Schnitzer-Weg");
break;
}
case 247899:
{
returnValue = F("Paul-Scholpp-Str.");
break;
}
case 247900:
{
returnValue = F("Paul-Scholze-Weg");
break;
}
case 247901:
{
returnValue = F("Paul-Schreck-Platz");
break;
}
case 247902:
{
returnValue = F("Paul-Schreiber-Str.");
break;
}
case 247903:
{
returnValue = F("Paul-Schreier-Platz");
break;
}
case 247904:
{
returnValue = F("Paul-Schreier-Str.");
break;
}
case 247905:
{
returnValue = F("Paul-Schrievers-Str.");
break;
}
case 247906:
{
returnValue = F("Paul-Schröder-Str.");
break;
}
case 247907:
{
returnValue = F("Paul-Schulenburg-Str.");
break;
}
case 247908:
{
returnValue = F("Paul-Schulte-Str.");
break;
}
case 247909:
{
returnValue = F("Paul-Schumacher-Str.");
break;
}
case 247910:
{
returnValue = F("Paul-Schurek-Weg");
break;
}
case 247911:
{
returnValue = F("Paul-Schuster-Str.");
break;
}
case 247912:
{
returnValue = F("Paul-Schwarz-Str.");
break;
}
case 247913:
{
returnValue = F("Paul-Schwarze-Str.");
break;
}
case 247914:
{
returnValue = F("Paul-Schwarzer-Str.");
break;
}
case 247915:
{
returnValue = F("Paul-Schwerin-Str.");
break;
}
case 247916:
{
returnValue = F("Paul-Schäfer-Str.");
break;
}
case 247917:
{
returnValue = F("Paul-Schäffer-Weg");
break;
}
case 247918:
{
returnValue = F("Paul-Schürholz-Str.");
break;
}
case 247919:
{
returnValue = F("Paul-Schütz-Str.");
break;
}
case 247920:
{
returnValue = F("Paul-Seifert-Str.");
break;
}
case 247921:
{
returnValue = F("Paul-Seitz-Weg");
break;
}
case 247922:
{
returnValue = F("Paul-Selke-Str.");
break;
}
case 247923:
{
returnValue = F("Paul-Seydel-Str.");
break;
}
case 247924:
{
returnValue = F("Paul-Sieben-Weg");
break;
}
case 247925:
{
returnValue = F("Paul-Siebert-Str.");
break;
}
case 247926:
{
returnValue = F("Paul-Siebold-Str.");
break;
}
case 247927:
{
returnValue = F("Paul-Sievers-Str.");
break;
}
case 247928:
{
returnValue = F("Paul-Silverberg-Str.");
break;
}
case 247929:
{
returnValue = F("Paul-Simmel-Weg");
break;
}
case 247930:
{
returnValue = F("Paul-Simon-Weg");
break;
}
case 247931:
{
returnValue = F("Paul-Singer-Str.");
break;
}
case 247932:
{
returnValue = F("Paul-Solbach-Str.");
break;
}
case 247933:
{
returnValue = F("Paul-Speck-Str.");
break;
}
case 247934:
{
returnValue = F("Paul-Speratus-Weg");
break;
}
case 247935:
{
returnValue = F("Paul-Spiegel-Str.");
break;
}
case 247936:
{
returnValue = F("Paul-Spindler-Str.");
break;
}
case 247937:
{
returnValue = F("Paul-Sporrer-Str.");
break;
}
case 247938:
{
returnValue = F("Paul-Stecker-Weg");
break;
}
case 247939:
{
returnValue = F("Paul-Steen-Str.");
break;
}
case 247940:
{
returnValue = F("Paul-Steffen-Str.");
break;
}
case 247941:
{
returnValue = F("Paul-Steinbrenner-Str.");
break;
}
case 247942:
{
returnValue = F("Paul-Steinert-Weg");
break;
}
case 247943:
{
returnValue = F("Paul-Straub-Str.");
break;
}
case 247944:
{
returnValue = F("Paul-Strauß-Str.");
break;
}
case 247945:
{
returnValue = F("Paul-Strian-Str.");
break;
}
case 247946:
{
returnValue = F("Paul-Strähle-Str.");
break;
}
case 247947:
{
returnValue = F("Paul-Strößner-Str.");
break;
}
case 247948:
{
returnValue = F("Paul-Stöckel-Str.");
break;
}
case 247949:
{
returnValue = F("Paul-Suhr-Str.");
break;
}
case 247950:
{
returnValue = F("Paul-Swiridoff-Str.");
break;
}
case 247951:
{
returnValue = F("Paul-Szillat-Str.");
break;
}
case 247952:
{
returnValue = F("Paul-Sättele-Weg");
break;
}
case 247953:
{
returnValue = F("Paul-Söllner-Str.");
break;
}
case 247954:
{
returnValue = F("Paul-Tantzen-Str.");
break;
}
case 247955:
{
returnValue = F("Paul-Taubadel-Str.");
break;
}
case 247956:
{
returnValue = F("Paul-Taube-Ring");
break;
}
case 247957:
{
returnValue = F("Paul-Teichgräber-Str.");
break;
}
case 247958:
{
returnValue = F("Paul-Theile-Weg");
break;
}
case 247959:
{
returnValue = F("Paul-Theresia-Str.");
break;
}
case 247960:
{
returnValue = F("Paul-Therstappen-Str.");
break;
}
case 247961:
{
returnValue = F("Paul-Thiem-Weg");
break;
}
case 247962:
{
returnValue = F("Paul-Thierfelder-Str.");
break;
}
case 247963:
{
returnValue = F("Paul-Thiersch-Str.");
break;
}
case 247964:
{
returnValue = F("Paul-Thomas-Str.");
break;
}
case 247965:
{
returnValue = F("Paul-Thöne-Str.");
break;
}
case 247966:
{
returnValue = F("Paul-Tiede-Str.");
break;
}
case 247967:
{
returnValue = F("Paul-Tillich-Str.");
break;
}
case 247968:
{
returnValue = F("Paul-Tillmann-Str.");
break;
}
case 247969:
{
returnValue = F("Paul-Tilly-Weg");
break;
}
case 247970:
{
returnValue = F("Paul-Trappen-Str.");
break;
}
case 247971:
{
returnValue = F("Paul-Trede-Str.");
break;
}
case 247972:
{
returnValue = F("Paul-Trenn-Str.");
break;
}
case 247973:
{
returnValue = F("Paul-Trunetz-Str.");
break;
}
case 247974:
{
returnValue = F("Paul-Uhlenhuth-Str.");
break;
}
case 247975:
{
returnValue = F("Paul-Urban-Siedlung");
break;
}
case 247976:
{
returnValue = F("Paul-Vahle-Str.");
break;
}
case 247977:
{
returnValue = F("Paul-Vallon-Str.");
break;
}
case 247978:
{
returnValue = F("Paul-Vater-Str.");
break;
}
case 247979:
{
returnValue = F("Paul-Verhoeven-Str.");
break;
}
case 247980:
{
returnValue = F("Paul-Viehmann-Allee");
break;
}
case 247981:
{
returnValue = F("Paul-Vogl-Str.");
break;
}
case 247982:
{
returnValue = F("Paul-Voigt-Str.");
break;
}
case 247983:
{
returnValue = F("Paul-Volz-Weg");
break;
}
case 247984:
{
returnValue = F("Paul-Waeldin-Str.");
break;
}
case 247985:
{
returnValue = F("Paul-Wagner-Str.");
break;
}
case 247986:
{
returnValue = F("Paul-Waldmann-Weg");
break;
}
case 247987:
{
returnValue = F("Paul-Wallat-Weg");
break;
}
case 247988:
{
returnValue = F("Paul-Wallot-Platz");
break;
}
case 247989:
{
returnValue = F("Paul-Wann-Str.");
break;
}
case 247990:
{
returnValue = F("Paul-Warmuth-Str.");
break;
}
case 247991:
{
returnValue = F("Paul-Warnecke-Platz");
break;
}
case 247992:
{
returnValue = F("Paul-Weber-Str.");
break;
}
case 247993:
{
returnValue = F("Paul-Weg");
break;
}
case 247994:
{
returnValue = F("Paul-Wegener-Str.");
break;
}
case 247995:
{
returnValue = F("Paul-Wegmann-Str.");
break;
}
case 247996:
{
returnValue = F("Paul-Weinzierl-Str.");
break;
}
case 247997:
{
returnValue = F("Paul-Weitbrecht-Str.");
break;
}
case 247998:
{
returnValue = F("Paul-Wellershaus-Weg");
break;
}
case 247999:
{
returnValue = F("Paul-Wempe-Allee");
break;
}
case 248000:
{
returnValue = F("Paul-Weniger-Str.");
break;
}
case 248001:
{
returnValue = F("Paul-Werner-Kohns-Str.");
break;
}
case 248002:
{
returnValue = F("Paul-Werth-Weg");
break;
}
case 248003:
{
returnValue = F("Paul-Wertheim-Str.");
break;
}
case 248004:
{
returnValue = F("Paul-Wesjohann-Str.");
break;
}
case 248005:
{
returnValue = F("Paul-Weth-Str.");
break;
}
case 248006:
{
returnValue = F("Paul-Wicke-Str.");
break;
}
case 248007:
{
returnValue = F("Paul-Wiegand-Str.");
break;
}
case 248008:
{
returnValue = F("Paul-Wiegler-Str.");
break;
}
case 248009:
{
returnValue = F("Paul-Wierich-Platz");
break;
}
case 248010:
{
returnValue = F("Paul-Wigand-Str.");
break;
}
case 248011:
{
returnValue = F("Paul-Wilhelm-Keppler-Str.");
break;
}
case 248012:
{
returnValue = F("Paul-Windgassen-Str.");
break;
}
case 248013:
{
returnValue = F("Paul-Winter-Str.");
break;
}
case 248014:
{
returnValue = F("Paul-Winter-Weg");
break;
}
case 248015:
{
returnValue = F("Paul-Wittsack-Str.");
break;
}
case 248016:
{
returnValue = F("Paul-Wulz-Str.");
break;
}
case 248017:
{
returnValue = F("Paul-Wäge-Str.");
break;
}
case 248018:
{
returnValue = F("Paul-Wöhrle-Ring");
break;
}
case 248019:
{
returnValue = F("Paul-Zander-Str.");
break;
}
case 248020:
{
returnValue = F("Paul-Zech-Str.");
break;
}
case 248021:
{
returnValue = F("Paul-Zeidler-Str.");
break;
}
case 248022:
{
returnValue = F("Paul-Zeitler-Str.");
break;
}
case 248023:
{
returnValue = F("Paul-Zenetti-Str.");
break;
}
case 248024:
{
returnValue = F("Paul-Ziegler-Str.");
break;
}
case 248025:
{
returnValue = F("Paul-Zierold-Str.");
break;
}
case 248026:
{
returnValue = F("Paul-Zipp-Str.");
break;
}
case 248027:
{
returnValue = F("Paul-Zoll-Str.");
break;
}
case 248028:
{
returnValue = F("Paul-Zweigart-Str.");
break;
}
case 248029:
{
returnValue = F("Paul-du-Ry-Str.");
break;
}
case 248030:
{
returnValue = F("Paul-von-Denis-Str.");
break;
}
case 248031:
{
returnValue = F("Paul-von-Hase-Str.");
break;
}
case 248032:
{
returnValue = F("Paul-von-Heyse-Weg");
break;
}
case 248033:
{
returnValue = F("Paul-von-Ruestorf-Str.");
break;
}
case 248034:
{
returnValue = F("Paul-von-Schanz-Weg");
break;
}
case 248035:
{
returnValue = F("Paul-von-Stetten-Str.");
break;
}
case 248036:
{
returnValue = F("Paula-Becker-Modersohn-Weg");
break;
}
case 248037:
{
returnValue = F("Paula-Becker-Str.");
break;
}
case 248038:
{
returnValue = F("Paula-Deppe-Str.");
break;
}
case 248039:
{
returnValue = F("Paula-Echter-Str.");
break;
}
case 248040:
{
returnValue = F("Paula-Fuchs-Allee");
break;
}
case 248041:
{
returnValue = F("Paula-Hertwig-Str.");
break;
}
case 248042:
{
returnValue = F("Paula-Hollenweger-Str.");
break;
}
case 248043:
{
returnValue = F("Paula-Königheim-Str.");
break;
}
case 248044:
{
returnValue = F("Paula-Modersohn-Becker-Steg");
break;
}
case 248045:
{
returnValue = F("Paula-Modersohn-Becker-Str.");
break;
}
case 248046:
{
returnValue = F("Paula-Modersohn-Becker-Weg");
break;
}
case 248047:
{
returnValue = F("Paula-Modersohn-Ring");
break;
}
case 248048:
{
returnValue = F("Paula-Modersohn-Str.");
break;
}
case 248049:
{
returnValue = F("Paula-Modersohn-Weg");
break;
}
case 248050:
{
returnValue = F("Paula-Nordhoff-Str.");
break;
}
case 248051:
{
returnValue = F("Paula-Schlier-Str.");
break;
}
case 248052:
{
returnValue = F("Paula-Schwichtenhövel-Str.");
break;
}
case 248053:
{
returnValue = F("Paula-Stebel-Str.");
break;
}
case 248054:
{
returnValue = F("Paula-Stern-Str.");
break;
}
case 248055:
{
returnValue = F("Paula-Straub-Str.");
break;
}
case 248056:
{
returnValue = F("Paula-Wilken-Str.");
break;
}
case 248057:
{
returnValue = F("Paula-Wimmer-Str.");
break;
}
case 248058:
{
returnValue = F("Paulahof");
break;
}
case 248059:
{
returnValue = F("Paulanergasse");
break;
}
case 248060:
{
returnValue = F("Paulanerplatz");
break;
}
case 248061:
{
returnValue = F("Paulanerweg");
break;
}
case 248062:
{
returnValue = F("Paulas Gaarnpadd");
break;
}
case 248063:
{
returnValue = F("Paulas Garten");
break;
}
case 248064:
{
returnValue = F("Paulas Höh");
break;
}
case 248065:
{
returnValue = F("Paulastr.");
break;
}
case 248066:
{
returnValue = F("Paulbrink");
break;
}
case 248067:
{
returnValue = F("Paulengrund");
break;
}
case 248068:
{
returnValue = F("Paulengrunder Str.");
break;
}
case 248069:
{
returnValue = F("Paulengäßchen");
break;
}
case 248070:
{
returnValue = F("Paulerwiesenweg");
break;
}
case 248071:
{
returnValue = F("Paulesweg");
break;
}
case 248072:
{
returnValue = F("Paulgasse");
break;
}
case 248073:
{
returnValue = F("Paulhuberweg");
break;
}
case 248074:
{
returnValue = F("Paulibrücke");
break;
}
case 248075:
{
returnValue = F("Paulienenstr.");
break;
}
case 248076:
{
returnValue = F("Paulihof");
break;
}
case 248077:
{
returnValue = F("Pauline-Bünhove-Str.");
break;
}
case 248078:
{
returnValue = F("Pauline-Christmann-Str.");
break;
}
case 248079:
{
returnValue = F("Pauline-Dichtl-Str.");
break;
}
case 248080:
{
returnValue = F("Pauline-Graf-Str.");
break;
}
case 248081:
{
returnValue = F("Pauline-Gutjahr-Weg");
break;
}
case 248082:
{
returnValue = F("Pauline-Herber-Weg");
break;
}
case 248083:
{
returnValue = F("Pauline-Kindler-Str.");
break;
}
case 248084:
{
returnValue = F("Pauline-Löwenstein-Str.");
break;
}
case 248085:
{
returnValue = F("Pauline-Maier-Str.");
break;
}
case 248086:
{
returnValue = F("Pauline-Mohr-Str.");
break;
}
case 248087:
{
returnValue = F("Pauline-Nöthig-Str.");
break;
}
case 248088:
{
returnValue = F("Pauline-von-Mallinckrodt-Platz");
break;
}
case 248089:
{
returnValue = F("Pauline-von-Mallinckrodt-Weg");
break;
}
case 248090:
{
returnValue = F("Paulinenauer Str.");
break;
}
case 248091:
{
returnValue = F("Paulinenbrücke");
break;
}
case 248092:
{
returnValue = F("Paulinengasse");
break;
}
case 248093:
{
returnValue = F("Paulinengrund");
break;
}
case 248094:
{
returnValue = F("Paulinenhof");
break;
}
case 248095:
{
returnValue = F("Paulinenhofstr.");
break;
}
case 248096:
{
returnValue = F("Paulinenhöhe");
break;
}
case 248097:
{
returnValue = F("Paulinenpark");
break;
}
case 248098:
{
returnValue = F("Paulinenplatz");
break;
}
case 248099:
{
returnValue = F("Paulinenstr.");
break;
}
case 248100:
{
returnValue = F("Paulinenweg");
break;
}
case 248101:
{
returnValue = F("Paulinerstr.");
break;
}
case 248102:
{
returnValue = F("Paulinerweg");
break;
}
case 248103:
{
returnValue = F("Paulingstr.");
break;
}
case 248104:
{
returnValue = F("Paulinstr.");
break;
}
case 248105:
{
returnValue = F("Paulinus-Fröhlich-Str.");
break;
}
case 248106:
{
returnValue = F("Paulinus-Junker-Str.");
break;
}
case 248107:
{
returnValue = F("Paulinusgasse");
break;
}
case 248108:
{
returnValue = F("Paulinusplatz");
break;
}
case 248109:
{
returnValue = F("Paulinusring");
break;
}
case 248110:
{
returnValue = F("Paulinusstr.");
break;
}
case 248111:
{
returnValue = F("Paulinzella");
break;
}
case 248112:
{
returnValue = F("Paulinzellaer Str.");
break;
}
case 248113:
{
returnValue = F("Paulinzeller Weg");
break;
}
case 248114:
{
returnValue = F("Pauliplatz");
break;
}
case 248115:
{
returnValue = F("Paulistr.");
break;
}
case 248116:
{
returnValue = F("Paulisweg");
break;
}
case 248117:
{
returnValue = F("Pauliszinnen");
break;
}
case 248118:
{
returnValue = F("Pauliweg");
break;
}
case 248119:
{
returnValue = F("Paulkamp");
break;
}
case 248120:
{
returnValue = F("Paulmannshavekost");
break;
}
case 248121:
{
returnValue = F("Paulmannshöher Str.");
break;
}
case 248122:
{
returnValue = F("Paulmannsweg");
break;
}
case 248123:
{
returnValue = F("Pauls Brink");
break;
}
case 248124:
{
returnValue = F("Pauls Pfad");
break;
}
case 248125:
{
returnValue = F("Pauls-Passage");
break;
}
case 248126:
{
returnValue = F("Paulsberg");
break;
}
case 248127:
{
returnValue = F("Paulsbergstr.");
break;
}
case 248128:
{
returnValue = F("Paulsbergweg");
break;
}
case 248129:
{
returnValue = F("Paulsburg");
break;
}
case 248130:
{
returnValue = F("Paulsburgstr.");
break;
}
case 248131:
{
returnValue = F("Paulsdamm");
break;
}
case 248132:
{
returnValue = F("Paulsdammer Weg");
break;
}
case 248133:
{
returnValue = F("Paulsdorfer Str.");
break;
}
case 248134:
{
returnValue = F("Paulsdorferstr.");
break;
}
case 248135:
{
returnValue = F("Paulsdorferweg");
break;
}
case 248136:
{
returnValue = F("Paulsenstr.");
break;
}
case 248137:
{
returnValue = F("Paulsgaberweg");
break;
}
case 248138:
{
returnValue = F("Paulsgarten");
break;
}
case 248139:
{
returnValue = F("Paulsgasse");
break;
}
case 248140:
{
returnValue = F("Paulshainer Str.");
break;
}
case 248141:
{
returnValue = F("Paulshau");
break;
}
case 248142:
{
returnValue = F("Paulshof");
break;
}
case 248143:
{
returnValue = F("Paulshorster Str.");
break;
}
case 248144:
{
returnValue = F("Paulshöhe");
break;
}
case 248145:
{
returnValue = F("Paulshöher Ring");
break;
}
case 248146:
{
returnValue = F("Paulshöher Weg");
break;
}
case 248147:
{
returnValue = F("Paulshüttengrenzweg");
break;
}
case 248148:
{
returnValue = F("Paulskamp");
break;
}
case 248149:
{
returnValue = F("Paulskampstr.");
break;
}
case 248150:
{
returnValue = F("Paulsmühle");
break;
}
case 248151:
{
returnValue = F("Paulsmühlenstr.");
break;
}
case 248152:
{
returnValue = F("Paulsort");
break;
}
case 248153:
{
returnValue = F("Paulsplan");
break;
}
case 248154:
{
returnValue = F("Paulsplatz");
break;
}
case 248155:
{
returnValue = F("Paulsstr.");
break;
}
case 248156:
{
returnValue = F("Paulssträßchen");
break;
}
case 248157:
{
returnValue = F("Paulstr.");
break;
}
case 248158:
{
returnValue = F("Paulsweg");
break;
}
case 248159:
{
returnValue = F("Paulswiese");
break;
}
case 248160:
{
returnValue = F("Paulsörter");
break;
}
case 248161:
{
returnValue = F("Paulter Weg");
break;
}
case 248162:
{
returnValue = F("Paulus-Alt-Weg");
break;
}
case 248163:
{
returnValue = F("Paulus-Gmainer-Str.");
break;
}
case 248164:
{
returnValue = F("Paulus-Hetzel-Str.");
break;
}
case 248165:
{
returnValue = F("Paulus-Jenisius-Str.");
break;
}
case 248166:
{
returnValue = F("Paulus-Rieger-Str.");
break;
}
case 248167:
{
returnValue = F("Paulus-Tillmann-Platz");
break;
}
case 248168:
{
returnValue = F("Paulusanger");
break;
}
case 248169:
{
returnValue = F("Paulusbergstr.");
break;
}
case 248170:
{
returnValue = F("Paulusbogen");
break;
}
case 248171:
{
returnValue = F("Paulusbruch");
break;
}
case 248172:
{
returnValue = F("Paulusbrunner Str.");
break;
}
case 248173:
{
returnValue = F("Paulusbrunner Weg");
break;
}
case 248174:
{
returnValue = F("Paulusgarten");
break;
}
case 248175:
{
returnValue = F("Paulusgasse");
break;
}
case 248176:
{
returnValue = F("Paulushof");
break;
}
case 248177:
{
returnValue = F("Pauluskirchplatz");
break;
}
case 248178:
{
returnValue = F("Pauluskirchstr.");
break;
}
case 248179:
{
returnValue = F("Pauluspfad");
break;
}
case 248180:
{
returnValue = F("Paulusplatz");
break;
}
case 248181:
{
returnValue = F("Pauluspromenade");
break;
}
case 248182:
{
returnValue = F("Paulussenstr.");
break;
}
case 248183:
{
returnValue = F("Paulusstr.");
break;
}
case 248184:
{
returnValue = F("Paulustor");
break;
}
case 248185:
{
returnValue = F("Paulusweg");
break;
}
case 248186:
{
returnValue = F("Pauluswiese");
break;
}
case 248187:
{
returnValue = F("Paulweg");
break;
}
case 248188:
{
returnValue = F("Paulwiesenweg");
break;
}
case 248189:
{
returnValue = F("Paulystr.");
break;
}
case 248190:
{
returnValue = F("Paumannstr.");
break;
}
case 248191:
{
returnValue = F("Paumgartenweg");
break;
}
case 248192:
{
returnValue = F("Paumgarterweg");
break;
}
case 248193:
{
returnValue = F("Paumgartnerstr.");
break;
}
case 248194:
{
returnValue = F("Paunsdorfer Allee");
break;
}
case 248195:
{
returnValue = F("Paunsdorfer Str.");
break;
}
case 248196:
{
returnValue = F("Paupelswiese");
break;
}
case 248197:
{
returnValue = F("Paupitzscher Str.");
break;
}
case 248198:
{
returnValue = F("Pauritzer Platz");
break;
}
case 248199:
{
returnValue = F("Pauritzer Str.");
break;
}
case 248200:
{
returnValue = F("Paus Gorden");
break;
}
case 248201:
{
returnValue = F("Pausaer Steig");
break;
}
case 248202:
{
returnValue = F("Pausaer Str.");
break;
}
case 248203:
{
returnValue = F("Pausalastr.");
break;
}
case 248204:
{
returnValue = F("Pauschaer Kirchweg");
break;
}
case 248205:
{
returnValue = F("Pauschenberger Mühle");
break;
}
case 248206:
{
returnValue = F("Pauschendorf");
break;
}
case 248207:
{
returnValue = F("Pauschwitzer Str.");
break;
}
case 248208:
{
returnValue = F("Pausdorf");
break;
}
case 248209:
{
returnValue = F("Pausdorfer Weg");
break;
}
case 248210:
{
returnValue = F("Pausengarten Eichenschule");
break;
}
case 248211:
{
returnValue = F("Pausenhof");
break;
}
case 248212:
{
returnValue = F("Pausenhof - Eduard-Spranger-Schule");
break;
}
case 248213:
{
returnValue = F("Pausenweg");
break;
}
case 248214:
{
returnValue = F("Pauseweg");
break;
}
case 248215:
{
returnValue = F("Pausheide");
break;
}
case 248216:
{
returnValue = F("Pausiner Chaussee");
break;
}
case 248217:
{
returnValue = F("Pausiner Str.");
break;
}
case 248218:
{
returnValue = F("Pausiner Weg");
break;
}
case 248219:
{
returnValue = F("Pausitzer Str.");
break;
}
case 248220:
{
returnValue = F("Pausmühlenhegge");
break;
}
case 248221:
{
returnValue = F("Pausmühlenkamp");
break;
}
case 248222:
{
returnValue = F("Pausmühlenstr.");
break;
}
case 248223:
{
returnValue = F("Paussing");
break;
}
case 248224:
{
returnValue = F("Pausstr.");
break;
}
case 248225:
{
returnValue = F("Paustenbacher Str.");
break;
}
case 248226:
{
returnValue = F("Paustian-Ring");
break;
}
case 248227:
{
returnValue = F("Pautzfelder Str.");
break;
}
case 248228:
{
returnValue = F("Pauweg");
break;
}
case 248229:
{
returnValue = F("Pauwelsstr.");
break;
}
case 248230:
{
returnValue = F("Paußnitzer Str.");
break;
}
case 248231:
{
returnValue = F("Paußnitzstr.");
break;
}
case 248232:
{
returnValue = F("Pavelsbacher Str.");
break;
}
case 248233:
{
returnValue = F("Pavenzinger Str.");
break;
}
case 248234:
{
returnValue = F("Paviane");
break;
}
case 248235:
{
returnValue = F("Pavilionpfad");
break;
}
case 248236:
{
returnValue = F("Paviljonweg");
break;
}
case 248237:
{
returnValue = F("Pavillionweg");
break;
}
case 248238:
{
returnValue = F("Pavillon Park");
break;
}
case 248239:
{
returnValue = F("Pavillonstr.");
break;
}
case 248240:
{
returnValue = F("Pavillonweg");
break;
}
case 248241:
{
returnValue = F("Pavilly-Str.");
break;
}
case 248242:
{
returnValue = F("Paw Patrol Adventure Bay");
break;
}
case 248243:
{
returnValue = F("Pawel-Adamowicz-Str.");
break;
}
case 248244:
{
returnValue = F("Pawel-Duwanow-Str.");
break;
}
case 248245:
{
returnValue = F("Pawelstr.");
break;
}
case 248246:
{
returnValue = F("Pawiker Str.");
break;
}
case 248247:
{
returnValue = F("Pawlowallee");
break;
}
case 248248:
{
returnValue = F("Pawlowstr.");
break;
}
case 248249:
{
returnValue = F("Paxmannstr.");
break;
}
case 248250:
{
returnValue = F("Payerstoft");
break;
}
case 248251:
{
returnValue = F("Payerstr.");
break;
}
case 248252:
{
returnValue = F("Payrstr.");
break;
}
case 248253:
{
returnValue = F("Pays-de-Gallie-Str.");
break;
}
case 248254:
{
returnValue = F("Pazifikstr.");
break;
}
case 248255:
{
returnValue = F("Paß");
break;
}
case 248256:
{
returnValue = F("Paß Op");
break;
}
case 248257:
{
returnValue = F("Paßberg");
break;
}
case 248258:
{
returnValue = F("Paßbruch");
break;
}
case 248259:
{
returnValue = F("Paßbrucher Weg");
break;
}
case 248260:
{
returnValue = F("Paßgoarden");
break;
}
case 248261:
{
returnValue = F("Paßhausen");
break;
}
case 248262:
{
returnValue = F("Paßkamp");
break;
}
case 248263:
{
returnValue = F("Paßkath");
break;
}
case 248264:
{
returnValue = F("Paßlinienweg");
break;
}
case 248265:
{
returnValue = F("Paßmannstr.");
break;
}
case 248266:
{
returnValue = F("Paßop");
break;
}
case 248267:
{
returnValue = F("Paßstiege");
break;
}
case 248268:
{
returnValue = F("Paßstr.");
break;
}
case 248269:
{
returnValue = F("Paßter Weg");
break;
}
case 248270:
{
returnValue = F("Paßtrift");
break;
}
case 248271:
{
returnValue = F("Paßweg");
break;
}
case 248272:
{
returnValue = F("Peach Street");
break;
}
case 248273:
{
returnValue = F("Peanstr.");
break;
}
case 248274:
{
returnValue = F("Pear Street");
break;
}
case 248275:
{
returnValue = F("Pearl-S.-Buck-Str.");
break;
}
case 248276:
{
returnValue = F("Pearl-Str.");
break;
}
case 248277:
{
returnValue = F("Pebenhauserstr.");
break;
}
case 248278:
{
returnValue = F("Pechackerstr.");
break;
}
case 248279:
{
returnValue = F("Pechanstr.");
break;
}
case 248280:
{
returnValue = F("Pechauer Platz");
break;
}
case 248281:
{
returnValue = F("Pechauer Str.");
break;
}
case 248282:
{
returnValue = F("Pecheiche");
break;
}
case 248283:
{
returnValue = F("Pecher Hauptstr.");
break;
}
case 248284:
{
returnValue = F("Pecher Str.");
break;
}
case 248285:
{
returnValue = F("Pecher Waldstr.");
break;
}
case 248286:
{
returnValue = F("Pecherweg");
break;
}
case 248287:
{
returnValue = F("Pechfennenweg");
break;
}
case 248288:
{
returnValue = F("Pechgraben");
break;
}
case 248289:
{
returnValue = F("Pechgrabenbrücke");
break;
}
case 248290:
{
returnValue = F("Pechgrund");
break;
}
case 248291:
{
returnValue = F("Pechhansenstr.");
break;
}
case 248292:
{
returnValue = F("Pechhofer Str.");
break;
}
case 248293:
{
returnValue = F("Pechhofer Strässl");
break;
}
case 248294:
{
returnValue = F("Pechhofer Weg");
break;
}
case 248295:
{
returnValue = F("Pechhütte");
break;
}
case 248296:
{
returnValue = F("Pechhütten");
break;
}
case 248297:
{
returnValue = F("Pechhüttenflügel");
break;
}
case 248298:
{
returnValue = F("Pechhüttenhau");
break;
}
case 248299:
{
returnValue = F("Pechhüttenschneise");
break;
}
case 248300:
{
returnValue = F("Pechhüttenstr.");
break;
}
case 248301:
{
returnValue = F("Pechhüttenweg");
break;
}
case 248302:
{
returnValue = F("Pechhütter Weg");
break;
}
case 248303:
{
returnValue = F("Pechhüttner Weg");
break;
}
case 248304:
{
returnValue = F("Pechleite");
break;
}
case 248305:
{
returnValue = F("Pechleraustr.");
break;
}
case 248306:
{
returnValue = F("Pechlerberg");
break;
}
case 248307:
{
returnValue = F("Pechlerbergstr.");
break;
}
case 248308:
{
returnValue = F("Pechlergasse");
break;
}
case 248309:
{
returnValue = F("Pechlergräumtweg");
break;
}
case 248310:
{
returnValue = F("Pechlerstr.");
break;
}
case 248311:
{
returnValue = F("Pechlerweg");
break;
}
case 248312:
{
returnValue = F("Pechmannstr.");
break;
}
case 248313:
{
returnValue = F("Pechmattweg");
break;
}
case 248314:
{
returnValue = F("Pechmännelweg");
break;
}
case 248315:
{
returnValue = F("Pechmühle");
break;
}
case 248316:
{
returnValue = F("Pechofen");
break;
}
case 248317:
{
returnValue = F("Pechofener Str.");
break;
}
case 248318:
{
returnValue = F("Pechofenschneise");
break;
}
case 248319:
{
returnValue = F("Pechofenwaldweg");
break;
}
case 248320:
{
returnValue = F("Pechofenweg");
break;
}
case 248321:
{
returnValue = F("Pechpfuhlweg");
break;
}
case 248322:
{
returnValue = F("Pechrenne");
break;
}
case 248323:
{
returnValue = F("Pechreuth");
break;
}
case 248324:
{
returnValue = F("Pechreuther Weg");
break;
}
case 248325:
{
returnValue = F("Pechriede");
break;
}
case 248326:
{
returnValue = F("Pechschneise");
break;
}
case 248327:
{
returnValue = F("Pechschwarte");
break;
}
case 248328:
{
returnValue = F("Pechseifen");
break;
}
case 248329:
{
returnValue = F("Pechsiefen");
break;
}
case 248330:
{
returnValue = F("Pechsteinhof");
break;
}
case 248331:
{
returnValue = F("Pechsteinstr.");
break;
}
case 248332:
{
returnValue = F("Pechteich");
break;
}
case 248333:
{
returnValue = F("Pechtelsgrüner Hauptstr.");
break;
}
case 248334:
{
returnValue = F("Pechtelsgrüner Str.");
break;
}
case 248335:
{
returnValue = F("Pechtrogstr.");
break;
}
case 248336:
{
returnValue = F("Pechumerweg");
break;
}
case 248337:
{
returnValue = F("Pechwallersweg");
break;
}
case 248338:
{
returnValue = F("Pechweg");
break;
}
case 248339:
{
returnValue = F("Pechweiherstr.");
break;
}
case 248340:
{
returnValue = F("Pechwiese");
break;
}
case 248341:
{
returnValue = F("Pechwiesenweg");
break;
}
case 248342:
{
returnValue = F("Pechüler Dorfstr.");
break;
}
case 248343:
{
returnValue = F("Peckatel");
break;
}
case 248344:
{
returnValue = F("Peckateler Str.");
break;
}
case 248345:
{
returnValue = F("Peckateler Weg");
break;
}
case 248346:
{
returnValue = F("Peckeloh");
break;
}
case 248347:
{
returnValue = F("Peckeloher Str.");
break;
}
case 248348:
{
returnValue = F("Peckelsheimer Str.");
break;
}
case 248349:
{
returnValue = F("Peckelsheimer Weg");
break;
}
case 248350:
{
returnValue = F("Peckensener Str.");
break;
}
case 248351:
{
returnValue = F("Peckenweg");
break;
}
case 248352:
{
returnValue = F("Peckfitzer Str.");
break;
}
case 248353:
{
returnValue = F("Peckhauser Str.");
break;
}
case 248354:
{
returnValue = F("Peckhausweg");
break;
}
case 248355:
{
returnValue = F("Peckhöbenweg");
break;
}
case 248356:
{
returnValue = F("Pecklohweg");
break;
}
case 248357:
{
returnValue = F("Peckower Weg");
break;
}
case 248358:
{
returnValue = F("Peckrenne");
break;
}
case 248359:
{
returnValue = F("Peckwischreihe");
break;
}
case 248360:
{
returnValue = F("Pecos Court");
break;
}
case 248361:
{
returnValue = F("Pecser Str.");
break;
}
case 248362:
{
returnValue = F("Peddenberger Str.");
break;
}
case 248363:
{
returnValue = F("Peddenbrink");
break;
}
case 248364:
{
returnValue = F("Peddenkamp");
break;
}
case 248365:
{
returnValue = F("Peddenpohl");
break;
}
case 248366:
{
returnValue = F("Peddenöde");
break;
}
case 248367:
{
returnValue = F("Peddinghausstr.");
break;
}
case 248368:
{
returnValue = F("Pedellweg");
break;
}
case 248369:
{
returnValue = F("Pedettistr.");
break;
}
case 248370:
{
returnValue = F("Pedinghauser Markt");
break;
}
case 248371:
{
returnValue = F("Pedingworth");
break;
}
case 248372:
{
returnValue = F("Pedostr.");
break;
}
case 248373:
{
returnValue = F("Pedro-Jung-Park");
break;
}
case 248374:
{
returnValue = F("Peedsche");
break;
}
case 248375:
{
returnValue = F("Peehsbarg");
break;
}
case 248376:
{
returnValue = F("Peel");
break;
}
case 248377:
{
returnValue = F("Peelwatt");
break;
}
case 248378:
{
returnValue = F("Peemöller Allee");
break;
}
case 248379:
{
returnValue = F("Peene-Tor-Brücke");
break;
}
case 248380:
{
returnValue = F("Peeneberg");
break;
}
case 248381:
{
returnValue = F("Peeneblick");
break;
}
case 248382:
{
returnValue = F("Peenebrücke");
break;
}
case 248383:
{
returnValue = F("Peenebrücke Loitz");
break;
}
case 248384:
{
returnValue = F("Peenekamp");
break;
}
case 248385:
{
returnValue = F("Peenemünder Str.");
break;
}
case 248386:
{
returnValue = F("Peeneplatz");
break;
}
case 248387:
{
returnValue = F("Peenesteig");
break;
}
case 248388:
{
returnValue = F("Peenestieg");
break;
}
case 248389:
{
returnValue = F("Peenestr.");
break;
}
case 248390:
{
returnValue = F("Peeneweg");
break;
}
case 248391:
{
returnValue = F("Peenhäuser");
break;
}
case 248392:
{
returnValue = F("Peenstr.");
break;
}
case 248393:
{
returnValue = F("Peepenhörn");
break;
}
case 248394:
{
returnValue = F("Peerborm");
break;
}
case 248395:
{
returnValue = F("Peerborn");
break;
}
case 248396:
{
returnValue = F("Peerekopp");
break;
}
case 248397:
{
returnValue = F("Peerhagen");
break;
}
case 248398:
{
returnValue = F("Peerhop");
break;
}
case 248399:
{
returnValue = F("Peerhorn");
break;
}
case 248400:
{
returnValue = F("Peerkamp");
break;
}
case 248401:
{
returnValue = F("Peerkoppel");
break;
}
case 248402:
{
returnValue = F("Peerkuhl");
break;
}
case 248403:
{
returnValue = F("Peermoor");
break;
}
case 248404:
{
returnValue = F("Peerort");
break;
}
case 248405:
{
returnValue = F("Peerstall");
break;
}
case 248406:
{
returnValue = F("Peerstieg");
break;
}
case 248407:
{
returnValue = F("Peersweg");
break;
}
case 248408:
{
returnValue = F("Peertz");
break;
}
case 248409:
{
returnValue = F("Peertzer Weg");
break;
}
case 248410:
{
returnValue = F("Peerweg");
break;
}
case 248411:
{
returnValue = F("Pees");
break;
}
case 248412:
{
returnValue = F("Peeselin");
break;
}
case 248413:
{
returnValue = F("Peesten");
break;
}
case 248414:
{
returnValue = F("Peeterspark");
break;
}
case 248415:
{
returnValue = F("Peets-Allee");
break;
}
case 248416:
{
returnValue = F("Peetsch");
break;
}
case 248417:
{
returnValue = F("Peetscher Weg");
break;
}
case 248418:
{
returnValue = F("Peetzweg");
break;
}
case 248419:
{
returnValue = F("Peez");
break;
}
case 248420:
{
returnValue = F("Peezer Weg");
break;
}
case 248421:
{
returnValue = F("Peffekoven");
break;
}
case 248422:
{
returnValue = F("Peffinger Str.");
break;
}
case 248423:
{
returnValue = F("Pegasusgasse");
break;
}
case 248424:
{
returnValue = F("Pegasusstr.");
break;
}
case 248425:
{
returnValue = F("Pegasusweg");
break;
}
case 248426:
{
returnValue = F("Pegauer Str.");
break;
}
case 248427:
{
returnValue = F("Pegauer Weg");
break;
}
case 248428:
{
returnValue = F("Pegelarm");
break;
}
case 248429:
{
returnValue = F("Pegelaustr.");
break;
}
case 248430:
{
returnValue = F("Pegelbrücke");
break;
}
case 248431:
{
returnValue = F("Pegelbusch");
break;
}
case 248432:
{
returnValue = F("Pegelgasse");
break;
}
case 248433:
{
returnValue = F("Pegelmessstelle Nette Andernach");
break;
}
case 248434:
{
returnValue = F("Pegelsberg");
break;
}
case 248435:
{
returnValue = F("Pegelsweg");
break;
}
case 248436:
{
returnValue = F("Pegelweg");
break;
}
case 248437:
{
returnValue = F("Pegenauer Str.");
break;
}
case 248438:
{
returnValue = F("Pegens Weg");
break;
}
case 248439:
{
returnValue = F("Peggy-March-Brücke");
break;
}
case 248440:
{
returnValue = F("Pegnitzer Str.");
break;
}
case 248441:
{
returnValue = F("Pegnitzgrund");
break;
}
case 248442:
{
returnValue = F("Pegnitzstr.");
break;
}
case 248443:
{
returnValue = F("Pegnitztalstr.");
break;
}
case 248444:
{
returnValue = F("Pegnitzweg");
break;
}
case 248445:
{
returnValue = F("Pegoskamp");
break;
}
case 248446:
{
returnValue = F("Peheimer Str.");
break;
}
case 248447:
{
returnValue = F("Pehlengarten");
break;
}
case 248448:
{
returnValue = F("Pehlenstr.");
break;
}
case 248449:
{
returnValue = F("Pehler Feldchen");
break;
}
case 248450:
{
returnValue = F("Pehler Hülle");
break;
}
case 248451:
{
returnValue = F("Pehlmann-Ring");
break;
}
case 248452:
{
returnValue = F("Pehlrimover Str.");
break;
}
case 248453:
{
returnValue = F("Pehlstr.");
break;
}
case 248454:
{
returnValue = F("Pehmen");
break;
}
case 248455:
{
returnValue = F("Pehmertanger Damm");
break;
}
case 248456:
{
returnValue = F("Pehrackerweg");
break;
}
case 248457:
{
returnValue = F("Pehritzscher Str.");
break;
}
case 248458:
{
returnValue = F("Pehritzscher Weg");
break;
}
case 248459:
{
returnValue = F("Pehrskoppel");
break;
}
case 248460:
{
returnValue = F("Pehrstr.");
break;
}
case 248461:
{
returnValue = F("Peickskamp");
break;
}
case 248462:
{
returnValue = F("Peifersbusch");
break;
}
case 248463:
{
returnValue = F("Peiferwiese");
break;
}
case 248464:
{
returnValue = F("Peigener Str.");
break;
}
case 248465:
{
returnValue = F("Peigertinger Str.");
break;
}
case 248466:
{
returnValue = F("Peikskamp");
break;
}
case 248467:
{
returnValue = F("Peile");
break;
}
case 248468:
{
returnValue = F("Peilenbachstr.");
break;
}
case 248469:
{
returnValue = F("Peilnsteiner Str.");
break;
}
case 248470:
{
returnValue = F("Peilschneise");
break;
}
case 248471:
{
returnValue = F("Peilsgasse");
break;
}
case 248472:
{
returnValue = F("Peilstein");
break;
}
case 248473:
{
returnValue = F("Peilsteiner Str.");
break;
}
case 248474:
{
returnValue = F("Peilsteiner Weg");
break;
}
case 248475:
{
returnValue = F("Peilsteinstr.");
break;
}
case 248476:
{
returnValue = F("Peilsweg");
break;
}
case 248477:
{
returnValue = F("Peimannsgasse");
break;
}
case 248478:
{
returnValue = F("Peimbachstr.");
break;
}
case 248479:
{
returnValue = F("Peiner Feld");
break;
}
case 248480:
{
returnValue = F("Peiner Hag");
break;
}
case 248481:
{
returnValue = F("Peiner Heerstr.");
break;
}
case 248482:
{
returnValue = F("Peiner Landstr.");
break;
}
case 248483:
{
returnValue = F("Peiner Str.");
break;
}
case 248484:
{
returnValue = F("Peiner Tor");
break;
}
case 248485:
{
returnValue = F("Peiner Weg");
break;
}
case 248486:
{
returnValue = F("Peinerweg");
break;
}
case 248487:
{
returnValue = F("Peingdorfer Str.");
break;
}
case 248488:
{
returnValue = F("Peinkoferstr.");
break;
}
case 248489:
{
returnValue = F("Peinscher Gang");
break;
}
case 248490:
{
returnValue = F("Peinsinselweg");
break;
}
case 248491:
{
returnValue = F("Peiperleweg");
break;
}
case 248492:
{
returnValue = F("Peipers Halde");
break;
}
case 248493:
{
returnValue = F("Peipertweg");
break;
}
case 248494:
{
returnValue = F("Peisberg");
break;
}
case 248495:
{
returnValue = F("Peischweg");
break;
}
case 248496:
{
returnValue = F("Peisel");
break;
}
case 248497:
{
returnValue = F("Peisinger Str.");
break;
}
case 248498:
{
returnValue = F("Peisker-Weg");
break;
}
case 248499:
{
returnValue = F("Peissener Pohl");
break;
}
case 248500:
{
returnValue = F("Peisser-Geräumt");
break;
}
case 248501:
{
returnValue = F("Peisserstr.");
break;
}
case 248502:
{
returnValue = F("Peitermans Damm");
break;
}
case 248503:
{
returnValue = F("Peitershof");
break;
}
case 248504:
{
returnValue = F("Peiterstr.");
break;
}
case 248505:
{
returnValue = F("Peitinger Str.");
break;
}
case 248506:
{
returnValue = F("Peitmannstr.");
break;
}
case 248507:
{
returnValue = F("Peitnachstr.");
break;
}
case 248508:
{
returnValue = F("Peitskamp");
break;
}
case 248509:
{
returnValue = F("Peitzendorf");
break;
}
case 248510:
{
returnValue = F("Peitzer Str.");
break;
}
case 248511:
{
returnValue = F("Peitzweg");
break;
}
case 248512:
{
returnValue = F("Peißenberger Str.");
break;
}
case 248513:
{
returnValue = F("Peißenbergstr.");
break;
}
case 248514:
{
returnValue = F("Peißenbergweg");
break;
}
case 248515:
{
returnValue = F("Peißener Str.");
break;
}
case 248516:
{
returnValue = F("Peißener Weg");
break;
}
case 248517:
{
returnValue = F("Peißer Kirchweg");
break;
}
case 248518:
{
returnValue = F("Peißer Str.");
break;
}
case 248519:
{
returnValue = F("Peißer Straßl");
break;
}
case 248520:
{
returnValue = F("Peißer Weg");
break;
}
case 248521:
{
returnValue = F("Peißing");
break;
}
case 248522:
{
returnValue = F("Peißinger Weg");
break;
}
case 248523:
{
returnValue = F("Peißnitz");
break;
}
case 248524:
{
returnValue = F("Peißnitzstr.");
break;
}
case 248525:
{
returnValue = F("Pekelheringer Weg");
break;
}
case 248526:
{
returnValue = F("Pekenbergweg");
break;
}
case 248527:
{
returnValue = F("Peking");
break;
}
case 248528:
{
returnValue = F("Pekinger Str.");
break;
}
case 248529:
{
returnValue = F("Pelagiusgasse");
break;
}
case 248530:
{
returnValue = F("Pelagiusweg");
break;
}
case 248531:
{
returnValue = F("Pelargusstr.");
break;
}
case 248532:
{
returnValue = F("Pelarstr.");
break;
}
case 248533:
{
returnValue = F("Pelchenhofener Str.");
break;
}
case 248534:
{
returnValue = F("Peldener Str.");
break;
}
case 248535:
{
returnValue = F("Peldenhofweg");
break;
}
case 248536:
{
returnValue = F("Peldenweg");
break;
}
case 248537:
{
returnValue = F("Pelderweg");
break;
}
case 248538:
{
returnValue = F("Pelerinentreppe");
break;
}
case 248539:
{
returnValue = F("Pelham");
break;
}
case 248540:
{
returnValue = F("Pelhamerseestr.");
break;
}
case 248541:
{
returnValue = F("Pelheimerstr.");
break;
}
case 248542:
{
returnValue = F("Pelikangasse");
break;
}
case 248543:
{
returnValue = F("Pelikanplatz");
break;
}
case 248544:
{
returnValue = F("Pelikanstr.");
break;
}
case 248545:
{
returnValue = F("Pelikanweg");
break;
}
case 248546:
{
returnValue = F("Peliserkerstr.");
break;
}
case 248547:
{
returnValue = F("Pelizaeusstr.");
break;
}
case 248548:
{
returnValue = F("Pelkmanns Feld");
break;
}
case 248549:
{
returnValue = F("Pelkovenstr.");
break;
}
case 248550:
{
returnValue = F("Pelkoverstr.");
break;
}
case 248551:
{
returnValue = F("Pelkumer Kirchplatz");
break;
}
case 248552:
{
returnValue = F("Pelkumer Platz");
break;
}
case 248553:
{
returnValue = F("Pelkumer Str.");
break;
}
case 248554:
{
returnValue = F("Pelkwitzer Dorfaue");
break;
}
case 248555:
{
returnValue = F("Pellaweg");
break;
}
case 248556:
{
returnValue = F("Pellenberg");
break;
}
case 248557:
{
returnValue = F("Pellenbreite");
break;
}
case 248558:
{
returnValue = F("Pellens Park");
break;
}
case 248559:
{
returnValue = F("Pellensstr.");
break;
}
case 248560:
{
returnValue = F("Pellenzstr.");
break;
}
case 248561:
{
returnValue = F("Pellenäckern");
break;
}
case 248562:
{
returnValue = F("Pellergasse");
break;
}
case 248563:
{
returnValue = F("Pellerweg");
break;
}
case 248564:
{
returnValue = F("Pellhammerstr.");
break;
}
case 248565:
{
returnValue = F("Pellhausen");
break;
}
case 248566:
{
returnValue = F("Pellheimer Str.");
break;
}
case 248567:
{
returnValue = F("Pellinger Str.");
break;
}
case 248568:
{
returnValue = F("Pelllinger Mühle");
break;
}
case 248569:
{
returnValue = F("Pellmannssteg");
break;
}
case 248570:
{
returnValue = F("Pellndorf");
break;
}
case 248571:
{
returnValue = F("Pellstr.");
break;
}
case 248572:
{
returnValue = F("Pellweg");
break;
}
case 248573:
{
returnValue = F("Pellwormer Str.");
break;
}
case 248574:
{
returnValue = F("Pellwormer Weg");
break;
}
case 248575:
{
returnValue = F("Pellwormstieg");
break;
}
case 248576:
{
returnValue = F("Pellwormstr.");
break;
}
case 248577:
{
returnValue = F("Pellwormweg");
break;
}
case 248578:
{
returnValue = F("Pelmanstr.");
break;
}
case 248579:
{
returnValue = F("Pelmig");
break;
}
case 248580:
{
returnValue = F("Pelsin");
break;
}
case 248581:
{
returnValue = F("Pelsiner Weg");
break;
}
case 248582:
{
returnValue = F("Pelsrade");
break;
}
case 248583:
{
returnValue = F("Pelsstr.");
break;
}
case 248584:
{
returnValue = F("Pelsters Weg");
break;
}
case 248585:
{
returnValue = F("Pelton-Str.");
break;
}
case 248586:
{
returnValue = F("Peltzerberg");
break;
}
case 248587:
{
returnValue = F("Peltzerstr.");
break;
}
case 248588:
{
returnValue = F("Peltzerweg");
break;
}
case 248589:
{
returnValue = F("Pelzacker");
break;
}
case 248590:
{
returnValue = F("Pelzberg");
break;
}
case 248591:
{
returnValue = F("Pelzbrüchenweg");
break;
}
case 248592:
{
returnValue = F("Pelzer Berg");
break;
}
case 248593:
{
returnValue = F("Pelzer Hof");
break;
}
case 248594:
{
returnValue = F("Pelzer Wald");
break;
}
case 248595:
{
returnValue = F("Pelzer-Gang");
break;
}
case 248596:
{
returnValue = F("Pelzeresch");
break;
}
case 248597:
{
returnValue = F("Pelzergasse");
break;
}
case 248598:
{
returnValue = F("Pelzerhakener Str.");
break;
}
case 248599:
{
returnValue = F("Pelzers");
break;
}
case 248600:
{
returnValue = F("Pelzerseit");
break;
}
case 248601:
{
returnValue = F("Pelzersgasse");
break;
}
case 248602:
{
returnValue = F("Pelzerstr.");
break;
}
case 248603:
{
returnValue = F("Pelzerweg");
break;
}
case 248604:
{
returnValue = F("Pelzestr.");
break;
}
case 248605:
{
returnValue = F("Pelzetleite");
break;
}
case 248606:
{
returnValue = F("Pelzgarten");
break;
}
case 248607:
{
returnValue = F("Pelzgartenstr.");
break;
}
case 248608:
{
returnValue = F("Pelzgartenweg");
break;
}
case 248609:
{
returnValue = F("Pelzgasse");
break;
}
case 248610:
{
returnValue = F("Pelzleinstr.");
break;
}
case 248611:
{
returnValue = F("Pelzmühlenstr.");
break;
}
case 248612:
{
returnValue = F("Pelzmühlweg");
break;
}
case 248613:
{
returnValue = F("Pelzrainstr.");
break;
}
case 248614:
{
returnValue = F("Pelzseeweg");
break;
}
case 248615:
{
returnValue = F("Pelzstr.");
break;
}
case 248616:
{
returnValue = F("Pelzwiesenweg");
break;
}
case 248617:
{
returnValue = F("Pelzwinkel");
break;
}
case 248618:
{
returnValue = F("Pembastr.");
break;
}
case 248619:
{
returnValue = F("Pembroke Crescent");
break;
}
case 248620:
{
returnValue = F("Pemeln-Feld");
break;
}
case 248621:
{
returnValue = F("Pemelnweg");
break;
}
case 248622:
{
returnValue = F("Pemelöd");
break;
}
case 248623:
{
returnValue = F("Pemmeringer Str.");
break;
}
case 248624:
{
returnValue = F("Pemmlerstr.");
break;
}
case 248625:
{
returnValue = F("Pempelforter Str.");
break;
}
case 248626:
{
returnValue = F("Pempelfurtstr.");
break;
}
case 248627:
{
returnValue = F("Pemöllers Weg");
break;
}
case 248628:
{
returnValue = F("Penckweg");
break;
}
case 248629:
{
returnValue = F("Pencoed-Ring");
break;
}
case 248630:
{
returnValue = F("Pendelinweg");
break;
}
case 248631:
{
returnValue = F("Pendelweg");
break;
}
case 248632:
{
returnValue = F("Pendergasse");
break;
}
case 248633:
{
returnValue = F("Pendesbachweg");
break;
}
case 248634:
{
returnValue = F("Pendeweg");
break;
}
case 248635:
{
returnValue = F("Pending-Allee");
break;
}
case 248636:
{
returnValue = F("Pendlingstr.");
break;
}
case 248637:
{
returnValue = F("Peneslohweg");
break;
}
case 248638:
{
returnValue = F("Peniger Str.");
break;
}
case 248639:
{
returnValue = F("Penken Ecke");
break;
}
case 248640:
{
returnValue = F("Penkerstr.");
break;
}
case 248641:
{
returnValue = F("Penkhusener Str.");
break;
}
case 248642:
{
returnValue = F("Penkower Str.");
break;
}
case 248643:
{
returnValue = F("Penkuner Chaussee");
break;
}
case 248644:
{
returnValue = F("Penkuner Str.");
break;
}
case 248645:
{
returnValue = F("Penkwitzer Dorfstr.");
break;
}
case 248646:
{
returnValue = F("Penkwitzer Weg");
break;
}
case 248647:
{
returnValue = F("Pennackerweg");
break;
}
case 248648:
{
returnValue = F("Pennbargweg");
break;
}
case 248649:
{
returnValue = F("Pennberg");
break;
}
case 248650:
{
returnValue = F("Pennbräh");
break;
}
case 248651:
{
returnValue = F("Penndieck");
break;
}
case 248652:
{
returnValue = F("Pennefeldsweg");
break;
}
case 248653:
{
returnValue = F("Pennehy");
break;
}
case 248654:
{
returnValue = F("Pennekamp");
break;
}
case 248655:
{
returnValue = F("Pennewitt");
break;
}
case 248656:
{
returnValue = F("Pennewitter Str.");
break;
}
case 248657:
{
returnValue = F("Pennewitzer Hauptstr.");
break;
}
case 248658:
{
returnValue = F("Pennhop");
break;
}
case 248659:
{
returnValue = F("Pennickental");
break;
}
case 248660:
{
returnValue = F("Pennigbütteler Heide");
break;
}
case 248661:
{
returnValue = F("Pennigbütteler Str.");
break;
}
case 248662:
{
returnValue = F("Pennigsehler Str.");
break;
}
case 248663:
{
returnValue = F("Pennigstiege");
break;
}
case 248664:
{
returnValue = F("Penninckweg");
break;
}
case 248665:
{
returnValue = F("Penniner Damm");
break;
}
case 248666:
{
returnValue = F("Penningheuers Kamp");
break;
}
case 248667:
{
returnValue = F("Penningrode");
break;
}
case 248668:
{
returnValue = F("Pennings Kolken");
break;
}
case 248669:
{
returnValue = F("Penningskamp");
break;
}
case 248670:
{
returnValue = F("Penningsstr.");
break;
}
case 248671:
{
returnValue = F("Penningstr.");
break;
}
case 248672:
{
returnValue = F("Pennmeistergang");
break;
}
case 248673:
{
returnValue = F("Pennmoor");
break;
}
case 248674:
{
returnValue = F("Pennricher Feldrain");
break;
}
case 248675:
{
returnValue = F("Pennricher Höhe");
break;
}
case 248676:
{
returnValue = F("Pennricher Ring");
break;
}
case 248677:
{
returnValue = F("Pennricher Weg");
break;
}
case 248678:
{
returnValue = F("Pennrichstr.");
break;
}
case 248679:
{
returnValue = F("Pennskuhle");
break;
}
case 248680:
{
returnValue = F("Pennsylvaniastr.");
break;
}
case 248681:
{
returnValue = F("Penny");
break;
}
case 248682:
{
returnValue = F("Pennywisch");
break;
}
case 248683:
{
returnValue = F("Pensebusch");
break;
}
case 248684:
{
returnValue = F("Penselfeld");
break;
}
case 248685:
{
returnValue = F("Penselstr.");
break;
}
case 248686:
{
returnValue = F("Pensin");
break;
}
case 248687:
{
returnValue = F("Pensiner Siedlung");
break;
}
case 248688:
{
returnValue = F("Pensiner Weg");
break;
}
case 248689:
{
returnValue = F("Pensionatstr.");
break;
}
case 248690:
{
returnValue = F("Pensionsstr.");
break;
}
case 248691:
{
returnValue = F("Pensionsweg");
break;
}
case 248692:
{
returnValue = F("Penta-Park");
break;
}
case 248693:
{
returnValue = F("Pentahotel");
break;
}
case 248694:
{
returnValue = F("Pentelingstr.");
break;
}
case 248695:
{
returnValue = F("Pentenrieder Str.");
break;
}
case 248696:
{
returnValue = F("Pentenrieder Weg");
break;
}
case 248697:
{
returnValue = F("Pentenriederstr.");
break;
}
case 248698:
{
returnValue = F("Penter Str.");
break;
}
case 248699:
{
returnValue = F("Penter Weg");
break;
}
case 248700:
{
returnValue = F("Penting");
break;
}
case 248701:
{
returnValue = F("Pentinger Steig");
break;
}
case 248702:
{
returnValue = F("Pentinger Str.");
break;
}
case 248703:
{
returnValue = F("Pentlbergweg");
break;
}
case 248704:
{
returnValue = F("Pentlhofstr.");
break;
}
case 248705:
{
returnValue = F("Pentlinger Str.");
break;
}
case 248706:
{
returnValue = F("Pentz");
break;
}
case 248707:
{
returnValue = F("Pentzer Tor");
break;
}
case 248708:
{
returnValue = F("Pentzstr.");
break;
}
case 248709:
{
returnValue = F("Penzancer Platz");
break;
}
case 248710:
{
returnValue = F("Penzberger Str.");
break;
}
case 248711:
{
returnValue = F("Penzbergweg");
break;
}
case 248712:
{
returnValue = F("Penzendorfer Hauptstr.");
break;
}
case 248713:
{
returnValue = F("Penzendorfer Str.");
break;
}
case 248714:
{
returnValue = F("Penzenhof");
break;
}
case 248715:
{
returnValue = F("Penzenhofener Hauptstr.");
break;
}
case 248716:
{
returnValue = F("Penzenhofener Str.");
break;
}
case 248717:
{
returnValue = F("Penzenmühle");
break;
}
case 248718:
{
returnValue = F("Penzenreuther Str.");
break;
}
case 248719:
{
returnValue = F("Penzgasse");
break;
}
case 248720:
{
returnValue = F("Penziger Str.");
break;
}
case 248721:
{
returnValue = F("Penzigstr.");
break;
}
case 248722:
{
returnValue = F("Penziner Str.");
break;
}
case 248723:
{
returnValue = F("Penzliner Damm");
break;
}
case 248724:
{
returnValue = F("Penzliner Str.");
break;
}
case 248725:
{
returnValue = F("Penzling");
break;
}
case 248726:
{
returnValue = F("Penzlinger Str.");
break;
}
case 248727:
{
returnValue = F("Penzoldtstr.");
break;
}
case 248728:
{
returnValue = F("Penzstr.");
break;
}
case 248729:
{
returnValue = F("Peoriastr.");
break;
}
case 248730:
{
returnValue = F("Peperdieksberg");
break;
}
case 248731:
{
returnValue = F("Peperdiekshöhe");
break;
}
case 248732:
{
returnValue = F("Peperfeld");
break;
}
case 248733:
{
returnValue = F("Peperhof");
break;
}
case 248734:
{
returnValue = F("Peperhorst");
break;
}
case 248735:
{
returnValue = F("Peperlingstal");
break;
}
case 248736:
{
returnValue = F("Pepernweg");
break;
}
case 248737:
{
returnValue = F("Peperriedenweg");
break;
}
case 248738:
{
returnValue = F("Pepersberg");
break;
}
case 248739:
{
returnValue = F("Pepersmarker Weg");
break;
}
case 248740:
{
returnValue = F("Pepersweg");
break;
}
case 248741:
{
returnValue = F("Peperweg");
break;
}
case 248742:
{
returnValue = F("Pepi-Huith-Str.");
break;
}
case 248743:
{
returnValue = F("Peppenhoven");
break;
}
case 248744:
{
returnValue = F("Peppenhovener Str.");
break;
}
case 248745:
{
returnValue = F("Peppenkumer Str.");
break;
}
case 248746:
{
returnValue = F("Pepper Str.");
break;
}
case 248747:
{
returnValue = F("Peppermühl");
break;
}
case 248748:
{
returnValue = F("Pepperstr.");
break;
}
case 248749:
{
returnValue = F("Pepperworth");
break;
}
case 248750:
{
returnValue = F("Peppmeierssiek");
break;
}
case 248751:
{
returnValue = F("Per-Günther-Weg");
break;
}
case 248752:
{
returnValue = F("Peracher Str.");
break;
}
case 248753:
{
returnValue = F("Perading");
break;
}
case 248754:
{
returnValue = F("Perba");
break;
}
case 248755:
{
returnValue = F("Perbaler Str.");
break;
}
case 248756:
{
returnValue = F("Perbinger Str.");
break;
}
case 248757:
{
returnValue = F("Percevalstr.");
break;
}
case 248758:
{
returnValue = F("Perchastr.");
break;
}
case 248759:
{
returnValue = F("Perchstetten");
break;
}
case 248760:
{
returnValue = F("Perchtinger Str.");
break;
}
case 248761:
{
returnValue = F("Perchtoldsdorfer Str.");
break;
}
case 248762:
{
returnValue = F("Perdebände");
break;
}
case 248763:
{
returnValue = F("Perdekamp");
break;
}
case 248764:
{
returnValue = F("Perdekampsheide");
break;
}
case 248765:
{
returnValue = F("Perdenbacher Weg");
break;
}
case 248766:
{
returnValue = F("Perdeweg");
break;
}
case 248767:
{
returnValue = F("Perdoel");
break;
}
case 248768:
{
returnValue = F("Perdt");
break;
}
case 248769:
{
returnValue = F("Perdöhler Chaussee");
break;
}
case 248770:
{
returnValue = F("Perdöhler Weg");
break;
}
case 248771:
{
returnValue = F("Perdöl");
break;
}
case 248772:
{
returnValue = F("Perdöler Mühle");
break;
}
case 248773:
{
returnValue = F("Perdöler Weg");
break;
}
case 248774:
{
returnValue = F("Peregrinastr.");
break;
}
case 248775:
{
returnValue = F("Perelsweg");
break;
}
case 248776:
{
returnValue = F("Pereser Str.");
break;
}
case 248777:
{
returnValue = F("Peresstr.");
break;
}
case 248778:
{
returnValue = F("Peretkundstr.");
break;
}
case 248779:
{
returnValue = F("Perfallstr.");
break;
}
case 248780:
{
returnValue = F("Perfinkenhorstschneise");
break;
}
case 248781:
{
returnValue = F("Perfstr.");
break;
}
case 248782:
{
returnValue = F("Pergamentergasse");
break;
}
case 248783:
{
returnValue = F("Pergamentmachergang");
break;
}
case 248784:
{
returnValue = F("Pergamentstr.");
break;
}
case 248785:
{
returnValue = F("Pergamentweg");
break;
}
case 248786:
{
returnValue = F("Pergamonweg");
break;
}
case 248787:
{
returnValue = F("Pergenrother Str.");
break;
}
case 248788:
{
returnValue = F("Perger Platz");
break;
}
case 248789:
{
returnValue = F("Pergerstr.");
break;
}
case 248790:
{
returnValue = F("Pergestr.");
break;
}
case 248791:
{
returnValue = F("Perghoferstr.");
break;
}
case 248792:
{
returnValue = F("Perglasstr.");
break;
}
case 248793:
{
returnValue = F("Pergmoor");
break;
}
case 248794:
{
returnValue = F("Pergolagarten");
break;
}
case 248795:
{
returnValue = F("Pergweg");
break;
}
case 248796:
{
returnValue = F("Perigerhof");
break;
}
case 248797:
{
returnValue = F("Perimeter Road");
break;
}
case 248798:
{
returnValue = F("Peringerstr.");
break;
}
case 248799:
{
returnValue = F("Peringser Str.");
break;
}
case 248800:
{
returnValue = F("Peringsseeallee");
break;
}
case 248801:
{
returnValue = F("Peritzer Str.");
break;
}
case 248802:
{
returnValue = F("Perkaer Str.");
break;
}
case 248803:
{
returnValue = F("Perkaer Weg");
break;
}
case 248804:
{
returnValue = F("Perkamer Str.");
break;
}
case 248805:
{
returnValue = F("Perkamer Weg");
break;
}
case 248806:
{
returnValue = F("Perkampsweg");
break;
}
case 248807:
{
returnValue = F("Perker Str.");
break;
}
case 248808:
{
returnValue = F("Perkerhof");
break;
}
case 248809:
{
returnValue = F("Perkhoferstr.");
break;
}
case 248810:
{
returnValue = F("Perkstr.");
break;
}
case 248811:
{
returnValue = F("Perkuhl");
break;
}
case 248812:
{
returnValue = F("Perkwall");
break;
}
case 248813:
{
returnValue = F("Perla");
break;
}
case 248814:
{
returnValue = F("Perlach-Geräumt");
break;
}
case 248815:
{
returnValue = F("Perlacher Forstweg");
break;
}
case 248816:
{
returnValue = F("Perlacher Str.");
break;
}
case 248817:
{
returnValue = F("Perlachstr.");
break;
}
case 248818:
{
returnValue = F("Perlachweg");
break;
}
case 248819:
{
returnValue = F("Perlas");
break;
}
case 248820:
{
returnValue = F("Perlasberger Str.");
break;
}
case 248821:
{
returnValue = F("Perlaser Str.");
break;
}
case 248822:
{
returnValue = F("Perlaser Weg");
break;
}
case 248823:
{
returnValue = F("Perlbachstr.");
break;
}
case 248824:
{
returnValue = F("Perlbachweg");
break;
}
case 248825:
{
returnValue = F("Perlberg 2");
break;
}
case 248826:
{
returnValue = F("Perlbergweg");
break;
}
case 248827:
{
returnValue = F("Perlblumenweg");
break;
}
case 248828:
{
returnValue = F("Perlbrunner Weg");
break;
}
case 248829:
{
returnValue = F("Perleberg");
break;
}
case 248830:
{
returnValue = F("Perleberger Chaussee");
break;
}
case 248831:
{
returnValue = F("Perleberger Str.");
break;
}
case 248832:
{
returnValue = F("Perleberger Tor");
break;
}
case 248833:
{
returnValue = F("Perleberger Weg");
break;
}
case 248834:
{
returnValue = F("Perlebucht");
break;
}
case 248835:
{
returnValue = F("Perlefeld");
break;
}
case 248836:
{
returnValue = F("Perlenbachstr.");
break;
}
case 248837:
{
returnValue = F("Perlenbachweg");
break;
}
case 248838:
{
returnValue = F("Perlenbergstr.");
break;
}
case 248839:
{
returnValue = F("Perlengasse");
break;
}
case 248840:
{
returnValue = F("Perlenkrautstr.");
break;
}
case 248841:
{
returnValue = F("Perlenspitzstr.");
break;
}
case 248842:
{
returnValue = F("Perlenweg");
break;
}
case 248843:
{
returnValue = F("Perler Str.");
break;
}
case 248844:
{
returnValue = F("Perlesreuter Str.");
break;
}
case 248845:
{
returnValue = F("Perletzhofen");
break;
}
case 248846:
{
returnValue = F("Perlfischerweg");
break;
}
case 248847:
{
returnValue = F("Perlgrasweg");
break;
}
case 248848:
{
returnValue = F("Perlheckenweg");
break;
}
case 248849:
{
returnValue = F("Perlhof");
break;
}
case 248850:
{
returnValue = F("Perlhuhnweg");
break;
}
case 248851:
{
returnValue = F("Perliner Str.");
break;
}
case 248852:
{
returnValue = F("Perling");
break;
}
case 248853:
{
returnValue = F("Perlinger Str.");
break;
}
case 248854:
{
returnValue = F("Perlingerweg");
break;
}
case 248855:
{
returnValue = F("Perlinkesgrund");
break;
}
case 248856:
{
returnValue = F("Perlmuttbirnenweg");
break;
}
case 248857:
{
returnValue = F("Perlpilzweg");
break;
}
case 248858:
{
returnValue = F("Perlquellenweg");
break;
}
case 248859:
{
returnValue = F("Perlseestr.");
break;
}
case 248860:
{
returnValue = F("Perlsteinring");
break;
}
case 248861:
{
returnValue = F("Perlstr.");
break;
}
case 248862:
{
returnValue = F("Perlthal");
break;
}
case 248863:
{
returnValue = F("Perläckerstr.");
break;
}
case 248864:
{
returnValue = F("Perlöd");
break;
}
case 248865:
{
returnValue = F("Permakultur-Mitmachgarten");
break;
}
case 248866:
{
returnValue = F("Permanederstr.");
break;
}
case 248867:
{
returnValue = F("Permecke");
break;
}
case 248868:
{
returnValue = F("Permer Damm");
break;
}
case 248869:
{
returnValue = F("Permer Stollen");
break;
}
case 248870:
{
returnValue = F("Permer Str.");
break;
}
case 248871:
{
returnValue = F("Permering");
break;
}
case 248872:
{
returnValue = F("Permoserstr.");
break;
}
case 248873:
{
returnValue = F("Permoserweg");
break;
}
case 248874:
{
returnValue = F("Permweg");
break;
}
case 248875:
{
returnValue = F("Pernauerstr.");
break;
}
case 248876:
{
returnValue = F("Pernauweg");
break;
}
case 248877:
{
returnValue = F("Perne");
break;
}
case 248878:
{
returnValue = F("Pernegger Weg");
break;
}
case 248879:
{
returnValue = F("Pernhartstr.");
break;
}
case 248880:
{
returnValue = F("Pernieker Str.");
break;
}
case 248881:
{
returnValue = F("Pernitzer Str.");
break;
}
case 248882:
{
returnValue = F("Pernsdörfer");
break;
}
case 248883:
{
returnValue = F("Pernzestr.");
break;
}
case 248884:
{
returnValue = F("Peronner Str.");
break;
}
case 248885:
{
returnValue = F("Perouser Str.");
break;
}
case 248886:
{
returnValue = F("Perpignan-Weg");
break;
}
case 248887:
{
returnValue = F("Perreiterstr.");
break;
}
case 248888:
{
returnValue = F("Perreystr.");
break;
}
case 248889:
{
returnValue = F("Perricher Kirchweg");
break;
}
case 248890:
{
returnValue = F("Perricher Weg");
break;
}
case 248891:
{
returnValue = F("Perrignyweg");
break;
}
case 248892:
{
returnValue = F("Perrocke");
break;
}
case 248893:
{
returnValue = F("Perronstr.");
break;
}
case 248894:
{
returnValue = F("Perrotsweg");
break;
}
case 248895:
{
returnValue = F("Persaustr.");
break;
}
case 248896:
{
returnValue = F("Perscheider Str.");
break;
}
case 248897:
{
returnValue = F("Perschen");
break;
}
case 248898:
{
returnValue = F("Perschener Str.");
break;
}
case 248899:
{
returnValue = F("Perschener Weg");
break;
}
case 248900:
{
returnValue = F("Perschenstr.");
break;
}
case 248901:
{
returnValue = F("Persebecker Str.");
break;
}
case 248902:
{
returnValue = F("Perseifener Str.");
break;
}
case 248903:
{
returnValue = F("Perseusweg");
break;
}
case 248904:
{
returnValue = F("Pershore Park");
break;
}
case 248905:
{
returnValue = F("Persickweg");
break;
}
case 248906:
{
returnValue = F("Persiusstr.");
break;
}
case 248907:
{
returnValue = F("Perskamp");
break;
}
case 248908:
{
returnValue = F("Personalstr.");
break;
}
case 248909:
{
returnValue = F("Personenbahnhof Untertürkheim");
break;
}
case 248910:
{
returnValue = F("Personstr.");
break;
}
case 248911:
{
returnValue = F("Persring");
break;
}
case 248912:
{
returnValue = F("Persterstr.");
break;
}
case 248913:
{
returnValue = F("Pertelgasse");
break;
}
case 248914:
{
returnValue = F("Perthelmstr.");
break;
}
case 248915:
{
returnValue = F("Perthenecke");
break;
}
case 248916:
{
returnValue = F("Perthes Ring");
break;
}
case 248917:
{
returnValue = F("Perthesanlage");
break;
}
case 248918:
{
returnValue = F("Perthesstr.");
break;
}
case 248919:
{
returnValue = F("Perthesweg");
break;
}
case 248920:
{
returnValue = F("Pertolzhofener Str.");
break;
}
case 248921:
{
returnValue = F("Pertrichplatz");
break;
}
case 248922:
{
returnValue = F("Pertuis-Platz");
break;
}
case 248923:
{
returnValue = F("Pertzstr.");
break;
}
case 248924:
{
returnValue = F("Perugiaplatz");
break;
}
case 248925:
{
returnValue = F("Perusastr.");
break;
}
case 248926:
{
returnValue = F("Perusaweg");
break;
}
case 248927:
{
returnValue = F("Perwenitzer Chaussee");
break;
}
case 248928:
{
returnValue = F("Perwenitzer Dorfstr.");
break;
}
case 248929:
{
returnValue = F("Perwenitzer Str.");
break;
}
case 248930:
{
returnValue = F("Perwenitzer Weg");
break;
}
case 248931:
{
returnValue = F("Perwolfinger Str.");
break;
}
case 248932:
{
returnValue = F("Perzheimstr.");
break;
}
case 248933:
{
returnValue = F("Perzlmühle");
break;
}
case 248934:
{
returnValue = F("Pesch");
break;
}
case 248935:
{
returnValue = F("Pescheckstr.");
break;
}
case 248936:
{
returnValue = F("Peschelstr.");
break;
}
case 248937:
{
returnValue = F("Peschenstr.");
break;
}
case 248938:
{
returnValue = F("Pescher Busch");
break;
}
case 248939:
{
returnValue = F("Pescher Kamp");
break;
}
case 248940:
{
returnValue = F("Pescher Str.");
break;
}
case 248941:
{
returnValue = F("Pescher Str. -neu-");
break;
}
case 248942:
{
returnValue = F("Pescher Weg");
break;
}
case 248943:
{
returnValue = F("Pescherweg");
break;
}
case 248944:
{
returnValue = F("Peschkenbloß");
break;
}
case 248945:
{
returnValue = F("Peschkengrundweg");
break;
}
case 248946:
{
returnValue = F("Peschkenstr.");
break;
}
case 248947:
{
returnValue = F("Peschmannstr.");
break;
}
case 248948:
{
returnValue = F("Peschstr.");
break;
}
case 248949:
{
returnValue = F("Peschweg");
break;
}
case 248950:
{
returnValue = F("Peseckendorfer Str.");
break;
}
case 248951:
{
returnValue = F("Peseliner Damm");
break;
}
case 248952:
{
returnValue = F("Pesenlern");
break;
}
case 248953:
{
returnValue = F("Pesenlerner Str.");
break;
}
case 248954:
{
returnValue = F("Pesmesstr.");
break;
}
case 248955:
{
returnValue = F("Pesnitzerstr.");
break;
}
case 248956:
{
returnValue = F("Pessenburgheimer Str.");
break;
}
case 248957:
{
returnValue = F("Pesserlstr.");
break;
}
case 248958:
{
returnValue = F("Pessiner Weg");
break;
}
case 248959:
{
returnValue = F("Pessingerstr.");
break;
}
case 248960:
{
returnValue = F("Pestalozistr.");
break;
}
case 248961:
{
returnValue = F("Pestalozzi-Ring");
break;
}
case 248962:
{
returnValue = F("Pestalozzi-Str.");
break;
}
case 248963:
{
returnValue = F("Pestalozziallee");
break;
}
case 248964:
{
returnValue = F("Pestalozzianlage");
break;
}
case 248965:
{
returnValue = F("Pestalozzidorf");
break;
}
case 248966:
{
returnValue = F("Pestalozzieplatz");
break;
}
case 248967:
{
returnValue = F("Pestalozziestr.");
break;
}
case 248968:
{
returnValue = F("Pestalozzipark");
break;
}
case 248969:
{
returnValue = F("Pestalozziplatz");
break;
}
case 248970:
{
returnValue = F("Pestalozziring");
break;
}
case 248971:
{
returnValue = F("Pestalozzistr.");
break;
}
case 248972:
{
returnValue = F("Pestalozziweg");
break;
}
case 248973:
{
returnValue = F("Pestberg");
break;
}
case 248974:
{
returnValue = F("Pestelstr.");
break;
}
case 248975:
{
returnValue = F("Pestenacker Str.");
break;
}
case 248976:
{
returnValue = F("Pestendorf");
break;
}
case 248977:
{
returnValue = F("Pestendorfer Str.");
break;
}
case 248978:
{
returnValue = F("Pesterwitz");
break;
}
case 248979:
{
returnValue = F("Pesterwitzer Höhe");
break;
}
case 248980:
{
returnValue = F("Pesterwitzer Schulweg");
break;
}
case 248981:
{
returnValue = F("Pesterwitzer Str.");
break;
}
case 248982:
{
returnValue = F("Pestfriedhof");
break;
}
case 248983:
{
returnValue = F("Pestfriedhofstr.");
break;
}
case 248984:
{
returnValue = F("Pestgässchen");
break;
}
case 248985:
{
returnValue = F("Pesthof");
break;
}
case 248986:
{
returnValue = F("Pestilenzsteig");
break;
}
case 248987:
{
returnValue = F("Pestinghausen");
break;
}
case 248988:
{
returnValue = F("Pestitzer Str.");
break;
}
case 248989:
{
returnValue = F("Pestitzer Weg");
break;
}
case 248990:
{
returnValue = F("Pestkapelle");
break;
}
case 248991:
{
returnValue = F("Pestkapellenstr.");
break;
}
case 248992:
{
returnValue = F("Pestruper Str.");
break;
}
case 248993:
{
returnValue = F("Pestruper Weg");
break;
}
case 248994:
{
returnValue = F("Pestrupsweg");
break;
}
case 248995:
{
returnValue = F("Pestweg");
break;
}
case 248996:
{
returnValue = F("Petah-Tikva-Platz");
break;
}
case 248997:
{
returnValue = F("Petalumaweg");
break;
}
case 248998:
{
returnValue = F("Petchen");
break;
}
case 248999:
{
returnValue = F("Petelgasse");
break;
}
case 249000:
{
returnValue = F("Petelstr.");
break;
}
case 249001:
{
returnValue = F("Petenweg");
break;
}
case 249002:
{
returnValue = F("Peter Hartung Str.");
break;
}
case 249003:
{
returnValue = F("Peter Lübke Brücke");
break;
}
case 249004:
{
returnValue = F("Peter Muus Bogen");
break;
}
case 249005:
{
returnValue = F("Peter Paul Weg");
break;
}
case 249006:
{
returnValue = F("Peter Schanz Weg");
break;
}
case 249007:
{
returnValue = F("Peter de Buhr Pad");
break;
}
case 249008:
{
returnValue = F("Peter und Paul Str.");
break;
}
case 249009:
{
returnValue = F("Peter und Paul Weg");
break;
}
case 249010:
{
returnValue = F("Peter-Achnitz-Str.");
break;
}
case 249011:
{
returnValue = F("Peter-Adam-Str.");
break;
}
case 249012:
{
returnValue = F("Peter-Adler-Park");
break;
}
case 249013:
{
returnValue = F("Peter-Adolphs-Str.");
break;
}
case 249014:
{
returnValue = F("Peter-Alfs-Str.");
break;
}
case 249015:
{
returnValue = F("Peter-Allwang-Str.");
break;
}
case 249016:
{
returnValue = F("Peter-Almer-Str.");
break;
}
case 249017:
{
returnValue = F("Peter-Altmann-Str.");
break;
}
case 249018:
{
returnValue = F("Peter-Altmeier-Allee");
break;
}
case 249019:
{
returnValue = F("Peter-Altmeier-Brücke");
break;
}
case 249020:
{
returnValue = F("Peter-Altmeier-Platz");
break;
}
case 249021:
{
returnValue = F("Peter-Altmeier-Ring");
break;
}
case 249022:
{
returnValue = F("Peter-Altmeier-Str.");
break;
}
case 249023:
{
returnValue = F("Peter-Altmeier-Ufer");
break;
}
case 249024:
{
returnValue = F("Peter-Andresen-Wai");
break;
}
case 249025:
{
returnValue = F("Peter-Anton-Str.");
break;
}
case 249026:
{
returnValue = F("Peter-Anton-Tholen-Weg");
break;
}
case 249027:
{
returnValue = F("Peter-Apian-Platz");
break;
}
case 249028:
{
returnValue = F("Peter-Arens-Str.");
break;
}
case 249029:
{
returnValue = F("Peter-Arnold-Str.");
break;
}
case 249030:
{
returnValue = F("Peter-Arnold-Weg");
break;
}
case 249031:
{
returnValue = F("Peter-Arns-Str.");
break;
}
case 249032:
{
returnValue = F("Peter-Aumüller-Weg");
break;
}
case 249033:
{
returnValue = F("Peter-Bardens-Str.");
break;
}
case 249034:
{
returnValue = F("Peter-Barfs-Str.");
break;
}
case 249035:
{
returnValue = F("Peter-Bauer Str.");
break;
}
case 249036:
{
returnValue = F("Peter-Baur-Weg");
break;
}
case 249037:
{
returnValue = F("Peter-Beck-Str.");
break;
}
case 249038:
{
returnValue = F("Peter-Behrens-Str.");
break;
}
case 249039:
{
returnValue = F("Peter-Behrens-Weg");
break;
}
case 249040:
{
returnValue = F("Peter-Beier-Platz");
break;
}
case 249041:
{
returnValue = F("Peter-Beier-Str.");
break;
}
case 249042:
{
returnValue = F("Peter-Bendixen-Weg");
break;
}
case 249043:
{
returnValue = F("Peter-Berten-Str.");
break;
}
case 249044:
{
returnValue = F("Peter-Beuscher-Weg");
break;
}
case 249045:
{
returnValue = F("Peter-Bieber-Str.");
break;
}
case 249046:
{
returnValue = F("Peter-Biebl-Park");
break;
}
case 249047:
{
returnValue = F("Peter-Bied-Str.");
break;
}
case 249048:
{
returnValue = F("Peter-Birk-Str.");
break;
}
case 249049:
{
returnValue = F("Peter-Bischof-Str.");
break;
}
case 249050:
{
returnValue = F("Peter-Blab-Weg");
break;
}
case 249051:
{
returnValue = F("Peter-Blome-Str.");
break;
}
case 249052:
{
returnValue = F("Peter-Boldt-Str.");
break;
}
case 249053:
{
returnValue = F("Peter-Borsch-Platz");
break;
}
case 249054:
{
returnValue = F("Peter-Braun-Str.");
break;
}
case 249055:
{
returnValue = F("Peter-Breu-Str.");
break;
}
case 249056:
{
returnValue = F("Peter-Breuer-Str.");
break;
}
case 249057:
{
returnValue = F("Peter-Brix-Weg");
break;
}
case 249058:
{
returnValue = F("Peter-Broelemann-Weg");
break;
}
case 249059:
{
returnValue = F("Peter-Bruckmann-Brücke");
break;
}
case 249060:
{
returnValue = F("Peter-Brüning-Platz");
break;
}
case 249061:
{
returnValue = F("Peter-Buck-Str.");
break;
}
case 249062:
{
returnValue = F("Peter-Burggraf-Weg");
break;
}
case 249063:
{
returnValue = F("Peter-Busch-Str.");
break;
}
case 249064:
{
returnValue = F("Peter-Butz-Str.");
break;
}
case 249065:
{
returnValue = F("Peter-Böckner-Str.");
break;
}
case 249066:
{
returnValue = F("Peter-Böhler-Str.");
break;
}
case 249067:
{
returnValue = F("Peter-Böhm-Str.");
break;
}
case 249068:
{
returnValue = F("Peter-Bücken-Str.");
break;
}
case 249069:
{
returnValue = F("Peter-Bürling-Passage");
break;
}
case 249070:
{
returnValue = F("Peter-Büttner-Str.");
break;
}
case 249071:
{
returnValue = F("Peter-Cathrein-Str.");
break;
}
case 249072:
{
returnValue = F("Peter-Christian-Hansen-Weg");
break;
}
case 249073:
{
returnValue = F("Peter-Christiansen-Gang");
break;
}
case 249074:
{
returnValue = F("Peter-Claußen-Weg");
break;
}
case 249075:
{
returnValue = F("Peter-Claßen-Weg");
break;
}
case 249076:
{
returnValue = F("Peter-Clever-Str.");
break;
}
case 249077:
{
returnValue = F("Peter-Cordes-Weg");
break;
}
case 249078:
{
returnValue = F("Peter-Cornelius-Platz");
break;
}
case 249079:
{
returnValue = F("Peter-Cornelius-Str.");
break;
}
case 249080:
{
returnValue = F("Peter-Dassis-Ring");
break;
}
case 249081:
{
returnValue = F("Peter-Dausenau-Str.");
break;
}
case 249082:
{
returnValue = F("Peter-Davids-Str.");
break;
}
case 249083:
{
returnValue = F("Peter-Debye-Stieg");
break;
}
case 249084:
{
returnValue = F("Peter-Deuring-Str.");
break;
}
case 249085:
{
returnValue = F("Peter-Develich-Str.");
break;
}
case 249086:
{
returnValue = F("Peter-Diederich-Weg");
break;
}
case 249087:
{
returnValue = F("Peter-Dietrich-Ring");
break;
}
case 249088:
{
returnValue = F("Peter-Dolger-Str.");
break;
}
case 249089:
{
returnValue = F("Peter-Dornier-Str.");
break;
}
case 249090:
{
returnValue = F("Peter-Drach-Str.");
break;
}
case 249091:
{
returnValue = F("Peter-Dörfler-Platz");
break;
}
case 249092:
{
returnValue = F("Peter-Dörfler-Str.");
break;
}
case 249093:
{
returnValue = F("Peter-Dörfler-Weg");
break;
}
case 249094:
{
returnValue = F("Peter-Dümler-Str.");
break;
}
case 249095:
{
returnValue = F("Peter-E.-Erichson-Weg");
break;
}
case 249096:
{
returnValue = F("Peter-Eberle-Str.");
break;
}
case 249097:
{
returnValue = F("Peter-Eckermann-Str.");
break;
}
case 249098:
{
returnValue = F("Peter-Eggenmüller-Weg");
break;
}
case 249099:
{
returnValue = F("Peter-Eggerath-Str.");
break;
}
case 249100:
{
returnValue = F("Peter-Eich-Str.");
break;
}
case 249101:
{
returnValue = F("Peter-Eichert-Str.");
break;
}
case 249102:
{
returnValue = F("Peter-Endres-Str.");
break;
}
case 249103:
{
returnValue = F("Peter-Engels-Str.");
break;
}
case 249104:
{
returnValue = F("Peter-Eschels-Weg");
break;
}
case 249105:
{
returnValue = F("Peter-Esser-Dyk");
break;
}
case 249106:
{
returnValue = F("Peter-Esser-Platz");
break;
}
case 249107:
{
returnValue = F("Peter-Etzenbach-Str.");
break;
}
case 249108:
{
returnValue = F("Peter-Falkenstein-Str.");
break;
}
case 249109:
{
returnValue = F("Peter-Fechter-Str.");
break;
}
case 249110:
{
returnValue = F("Peter-Fechter-Weg");
break;
}
case 249111:
{
returnValue = F("Peter-Feddersen-Ring");
break;
}
case 249112:
{
returnValue = F("Peter-Ferdinand-Steinheimer-Str.");
break;
}
case 249113:
{
returnValue = F("Peter-Ferger-Str.");
break;
}
case 249114:
{
returnValue = F("Peter-Fink-Str.");
break;
}
case 249115:
{
returnValue = F("Peter-Fischer-Allee");
break;
}
case 249116:
{
returnValue = F("Peter-Fischer-Str.");
break;
}
case 249117:
{
returnValue = F("Peter-Fix-Str.");
break;
}
case 249118:
{
returnValue = F("Peter-Fleischhauer-Str.");
break;
}
case 249119:
{
returnValue = F("Peter-Fleischmann-Str.");
break;
}
case 249120:
{
returnValue = F("Peter-Florenz-Weddigen-Str.");
break;
}
case 249121:
{
returnValue = F("Peter-Flöck-Str.");
break;
}
case 249122:
{
returnValue = F("Peter-Flötner-Str.");
break;
}
case 249123:
{
returnValue = F("Peter-Folger-Str.");
break;
}
case 249124:
{
returnValue = F("Peter-Frank-Str.");
break;
}
case 249125:
{
returnValue = F("Peter-Franz-Adt-Ring");
break;
}
case 249126:
{
returnValue = F("Peter-Freisl-Str.");
break;
}
case 249127:
{
returnValue = F("Peter-Friedhofen-Str.");
break;
}
case 249128:
{
returnValue = F("Peter-Früh-Weg");
break;
}
case 249129:
{
returnValue = F("Peter-Fuchs-Str.");
break;
}
case 249130:
{
returnValue = F("Peter-Funcke-Weg");
break;
}
case 249131:
{
returnValue = F("Peter-Fühner-Str.");
break;
}
case 249132:
{
returnValue = F("Peter-Gantner-Str.");
break;
}
case 249133:
{
returnValue = F("Peter-Garten");
break;
}
case 249134:
{
returnValue = F("Peter-Gast-Str.");
break;
}
case 249135:
{
returnValue = F("Peter-Gehlen-Str.");
break;
}
case 249136:
{
returnValue = F("Peter-Geibel-Str.");
break;
}
case 249137:
{
returnValue = F("Peter-Gens-Str.");
break;
}
case 249138:
{
returnValue = F("Peter-Geuer-Str.");
break;
}
case 249139:
{
returnValue = F("Peter-Gieser-Str.");
break;
}
case 249140:
{
returnValue = F("Peter-Gleim-Str.");
break;
}
case 249141:
{
returnValue = F("Peter-Gleßner-Str.");
break;
}
case 249142:
{
returnValue = F("Peter-Goessler-Str.");
break;
}
case 249143:
{
returnValue = F("Peter-Graeber-Str.");
break;
}
case 249144:
{
returnValue = F("Peter-Graf-Str.");
break;
}
case 249145:
{
returnValue = F("Peter-Grah-Str.");
break;
}
case 249146:
{
returnValue = F("Peter-Grams-Str.");
break;
}
case 249147:
{
returnValue = F("Peter-Grave-Str.");
break;
}
case 249148:
{
returnValue = F("Peter-Graßmann-Str.");
break;
}
case 249149:
{
returnValue = F("Peter-Greiner-Weg");
break;
}
case 249150:
{
returnValue = F("Peter-Greven-Str.");
break;
}
case 249151:
{
returnValue = F("Peter-Griesbacher-Gasse");
break;
}
case 249152:
{
returnValue = F("Peter-Griesbacher-Str.");
break;
}
case 249153:
{
returnValue = F("Peter-Griesbacher-Weg");
break;
}
case 249154:
{
returnValue = F("Peter-Grieß-Str.");
break;
}
case 249155:
{
returnValue = F("Peter-Groh-Weg");
break;
}
case 249156:
{
returnValue = F("Peter-Grubert-Str.");
break;
}
case 249157:
{
returnValue = F("Peter-Grünberg-Platz");
break;
}
case 249158:
{
returnValue = F("Peter-Gypken-Weg");
break;
}
case 249159:
{
returnValue = F("Peter-Gärtner-Str.");
break;
}
case 249160:
{
returnValue = F("Peter-Göring-Str.");
break;
}
case 249161:
{
returnValue = F("Peter-Göttsche-Str.");
break;
}
case 249162:
{
returnValue = F("Peter-Götz-Str.");
break;
}
case 249163:
{
returnValue = F("Peter-Günther-Str.");
break;
}
case 249164:
{
returnValue = F("Peter-Hachmann-Weg");
break;
}
case 249165:
{
returnValue = F("Peter-Hahn-Weg");
break;
}
case 249166:
{
returnValue = F("Peter-Hammer-Weg");
break;
}
case 249167:
{
returnValue = F("Peter-Hannweg-Str.");
break;
}
case 249168:
{
returnValue = F("Peter-Hans-Str.");
break;
}
case 249169:
{
returnValue = F("Peter-Hans-Weg");
break;
}
case 249170:
{
returnValue = F("Peter-Hansen-Platz");
break;
}
case 249171:
{
returnValue = F("Peter-Hansen-Str.");
break;
}
case 249172:
{
returnValue = F("Peter-Hardt-Str.");
break;
}
case 249173:
{
returnValue = F("Peter-Hartmann-Allee");
break;
}
case 249174:
{
returnValue = F("Peter-Haseney-Str.");
break;
}
case 249175:
{
returnValue = F("Peter-Hauprich-Weg");
break;
}
case 249176:
{
returnValue = F("Peter-Haupt-Str.");
break;
}
case 249177:
{
returnValue = F("Peter-Haus-Str.");
break;
}
case 249178:
{
returnValue = F("Peter-Hebel-Weg");
break;
}
case 249179:
{
returnValue = F("Peter-Hecker-Str.");
break;
}
case 249180:
{
returnValue = F("Peter-Heel-Str.");
break;
}
case 249181:
{
returnValue = F("Peter-Heider-Str.");
break;
}
case 249182:
{
returnValue = F("Peter-Heil-Str.");
break;
}
case 249183:
{
returnValue = F("Peter-Heim-Str.");
break;
}
case 249184:
{
returnValue = F("Peter-Heinle-Weg");
break;
}
case 249185:
{
returnValue = F("Peter-Heinrich-Merckle-Str.");
break;
}
case 249186:
{
returnValue = F("Peter-Heinrich-Str.");
break;
}
case 249187:
{
returnValue = F("Peter-Heisel-Weg");
break;
}
case 249188:
{
returnValue = F("Peter-Hellinghausen-Str.");
break;
}
case 249189:
{
returnValue = F("Peter-Henlein-Str.");
break;
}
case 249190:
{
returnValue = F("Peter-Henlein-Weg");
break;
}
case 249191:
{
returnValue = F("Peter-Hensen-Str.");
break;
}
case 249192:
{
returnValue = F("Peter-Hermann-Nickertz-Weg");
break;
}
case 249193:
{
returnValue = F("Peter-Herrlein-Str.");
break;
}
case 249194:
{
returnValue = F("Peter-Herrschaft-Str.");
break;
}
case 249195:
{
returnValue = F("Peter-Hess-Str.");
break;
}
case 249196:
{
returnValue = F("Peter-Hett-Str.");
break;
}
case 249197:
{
returnValue = F("Peter-Heuser-Str.");
break;
}
case 249198:
{
returnValue = F("Peter-Hille-Str.");
break;
}
case 249199:
{
returnValue = F("Peter-Hille-Weg");
break;
}
case 249200:
{
returnValue = F("Peter-Hofer-Str.");
break;
}
case 249201:
{
returnValue = F("Peter-Hofmann-Str.");
break;
}
case 249202:
{
returnValue = F("Peter-Hofmann-Weg");
break;
}
case 249203:
{
returnValue = F("Peter-Holzmann-Allee");
break;
}
case 249204:
{
returnValue = F("Peter-Holzmann-Str.");
break;
}
case 249205:
{
returnValue = F("Peter-Honsberg-Str.");
break;
}
case 249206:
{
returnValue = F("Peter-Huber-Str.");
break;
}
case 249207:
{
returnValue = F("Peter-Hubmaier-Str.");
break;
}
case 249208:
{
returnValue = F("Peter-Huchel-Chaussee");
break;
}
case 249209:
{
returnValue = F("Peter-Huchel-Str.");
break;
}
case 249210:
{
returnValue = F("Peter-Huchel-Weg");
break;
}
case 249211:
{
returnValue = F("Peter-Huperz-Str.");
break;
}
case 249212:
{
returnValue = F("Peter-Händel-Str.");
break;
}
case 249213:
{
returnValue = F("Peter-Härtling-Str.");
break;
}
case 249214:
{
returnValue = F("Peter-Höfer-Platz");
break;
}
case 249215:
{
returnValue = F("Peter-Imhoff-Str.");
break;
}
case 249216:
{
returnValue = F("Peter-Irmen-Str.");
break;
}
case 249217:
{
returnValue = F("Peter-J.-Mayer-Str.");
break;
}
case 249218:
{
returnValue = F("Peter-Jacobs-Str.");
break;
}
case 249219:
{
returnValue = F("Peter-Jahnke-Str.");
break;
}
case 249220:
{
returnValue = F("Peter-Jakob-Schober-Str.");
break;
}
case 249221:
{
returnValue = F("Peter-Jansen-Str.");
break;
}
case 249222:
{
returnValue = F("Peter-Janssen-Lohne");
break;
}
case 249223:
{
returnValue = F("Peter-Janssens-Weg");
break;
}
case 249224:
{
returnValue = F("Peter-Jordan-Weg");
break;
}
case 249225:
{
returnValue = F("Peter-Josef-Kreuzberg-Str.");
break;
}
case 249226:
{
returnValue = F("Peter-Josef-Wohlmeiner-Str.");
break;
}
case 249227:
{
returnValue = F("Peter-Joseph-Fey-Str.");
break;
}
case 249228:
{
returnValue = F("Peter-Joseph-Krahe-Str.");
break;
}
case 249229:
{
returnValue = F("Peter-Joseph-Lenné-Str.");
break;
}
case 249230:
{
returnValue = F("Peter-Joseph-Rottmann-Str.");
break;
}
case 249231:
{
returnValue = F("Peter-Jäckel-Str.");
break;
}
case 249232:
{
returnValue = F("Peter-Kalff-Str.");
break;
}
case 249233:
{
returnValue = F("Peter-Kallenbach-Str.");
break;
}
case 249234:
{
returnValue = F("Peter-Kauertz-Platz");
break;
}
case 249235:
{
returnValue = F("Peter-Kaufinger-Str.");
break;
}
case 249236:
{
returnValue = F("Peter-Klein-Str.");
break;
}
case 249237:
{
returnValue = F("Peter-Klöckner-Str.");
break;
}
case 249238:
{
returnValue = F("Peter-Knaden-Str.");
break;
}
case 249239:
{
returnValue = F("Peter-Knecht-Str.");
break;
}
case 249240:
{
returnValue = F("Peter-Koch-Str.");
break;
}
case 249241:
{
returnValue = F("Peter-Kolb-Str.");
break;
}
case 249242:
{
returnValue = F("Peter-Konrad-Str.");
break;
}
case 249243:
{
returnValue = F("Peter-Koof-Str.");
break;
}
case 249244:
{
returnValue = F("Peter-Kraft-Str.");
break;
}
case 249245:
{
returnValue = F("Peter-Krall-Str.");
break;
}
case 249246:
{
returnValue = F("Peter-Kramer-Str.");
break;
}
case 249247:
{
returnValue = F("Peter-Krammer-Str.");
break;
}
case 249248:
{
returnValue = F("Peter-Kremer-Weg");
break;
}
case 249249:
{
returnValue = F("Peter-Krenkel-Str.");
break;
}
case 249250:
{
returnValue = F("Peter-Krüger-Weg");
break;
}
case 249251:
{
returnValue = F("Peter-Kurzeck-Platz / Hof des Heimatmuseums");
break;
}
case 249252:
{
returnValue = F("Peter-Kwasny-Str.");
break;
}
case 249253:
{
returnValue = F("Peter-Käuser-Str.");
break;
}
case 249254:
{
returnValue = F("Peter-Köferler-Str.");
break;
}
case 249255:
{
returnValue = F("Peter-Köhle-Str.");
break;
}
case 249256:
{
returnValue = F("Peter-Köhr-Str.");
break;
}
case 249257:
{
returnValue = F("Peter-Kölln-Str.");
break;
}
case 249258:
{
returnValue = F("Peter-König-Str.");
break;
}
case 249259:
{
returnValue = F("Peter-Köster-Str.");
break;
}
case 249260:
{
returnValue = F("Peter-Kötzer-Gasse");
break;
}
case 249261:
{
returnValue = F("Peter-Kühne-Siedlung");
break;
}
case 249262:
{
returnValue = F("Peter-Lambert-Str.");
break;
}
case 249263:
{
returnValue = F("Peter-Landwehr-Str.");
break;
}
case 249264:
{
returnValue = F("Peter-Lang-Str.");
break;
}
case 249265:
{
returnValue = F("Peter-Lauten-Str.");
break;
}
case 249266:
{
returnValue = F("Peter-Lemmer-Weg");
break;
}
case 249267:
{
returnValue = F("Peter-Lentzen-Weg");
break;
}
case 249268:
{
returnValue = F("Peter-Leyerer-Str.");
break;
}
case 249269:
{
returnValue = F("Peter-Liebig-Hof");
break;
}
case 249270:
{
returnValue = F("Peter-Liebig-Weg");
break;
}
case 249271:
{
returnValue = F("Peter-Liesen-Str.");
break;
}
case 249272:
{
returnValue = F("Peter-Lieser-Str.");
break;
}
case 249273:
{
returnValue = F("Peter-Link-Str.");
break;
}
case 249274:
{
returnValue = F("Peter-Linnartz-Str.");
break;
}
case 249275:
{
returnValue = F("Peter-Lippert-Str.");
break;
}
case 249276:
{
returnValue = F("Peter-Loer-Str.");
break;
}
case 249277:
{
returnValue = F("Peter-Loetz-Weg");
break;
}
case 249278:
{
returnValue = F("Peter-Lohse-Weg");
break;
}
case 249279:
{
returnValue = F("Peter-Ludwig-Str.");
break;
}
case 249280:
{
returnValue = F("Peter-Lunding-Weg");
break;
}
case 249281:
{
returnValue = F("Peter-Lurenz-Weg");
break;
}
case 249282:
{
returnValue = F("Peter-Maal-Weg");
break;
}
case 249283:
{
returnValue = F("Peter-Maas-Str.");
break;
}
case 249284:
{
returnValue = F("Peter-Maeth-Str.");
break;
}
case 249285:
{
returnValue = F("Peter-Maier-Str.");
break;
}
case 249286:
{
returnValue = F("Peter-Martens-Weg");
break;
}
case 249287:
{
returnValue = F("Peter-Matthias-Reimers-Str.");
break;
}
case 249288:
{
returnValue = F("Peter-May-Str.");
break;
}
case 249289:
{
returnValue = F("Peter-Mayer-Str.");
break;
}
case 249290:
{
returnValue = F("Peter-Meier-Str.");
break;
}
case 249291:
{
returnValue = F("Peter-Meisenberger-Weg");
break;
}
case 249292:
{
returnValue = F("Peter-Melander-Str.");
break;
}
case 249293:
{
returnValue = F("Peter-Mergen-Str.");
break;
}
case 249294:
{
returnValue = F("Peter-Mergener-Weg");
break;
}
case 249295:
{
returnValue = F("Peter-Meyer-Str.");
break;
}
case 249296:
{
returnValue = F("Peter-Meyn-Str.");
break;
}
case 249297:
{
returnValue = F("Peter-Michely-Str.");
break;
}
case 249298:
{
returnValue = F("Peter-Micke-Str.");
break;
}
case 249299:
{
returnValue = F("Peter-Milz-Str.");
break;
}
case 249300:
{
returnValue = F("Peter-Minnig-Str.");
break;
}
case 249301:
{
returnValue = F("Peter-Mitterhofer-Str.");
break;
}
case 249302:
{
returnValue = F("Peter-Model-Str.");
break;
}
case 249303:
{
returnValue = F("Peter-Molineus-Str.");
break;
}
case 249304:
{
returnValue = F("Peter-Moll-Weg");
break;
}
case 249305:
{
returnValue = F("Peter-Molz-Str.");
break;
}
case 249306:
{
returnValue = F("Peter-Monnik-Weg");
break;
}
case 249307:
{
returnValue = F("Peter-Mordhorst-Str.");
break;
}
case 249308:
{
returnValue = F("Peter-Morio-Str.");
break;
}
case 249309:
{
returnValue = F("Peter-Mähler-Weg");
break;
}
case 249310:
{
returnValue = F("Peter-Möller-Weg");
break;
}
case 249311:
{
returnValue = F("Peter-Mönch-Weg");
break;
}
case 249312:
{
returnValue = F("Peter-Mück-Weg");
break;
}
case 249313:
{
returnValue = F("Peter-Müller-Str.");
break;
}
case 249314:
{
returnValue = F("Peter-Müllritter-Str.");
break;
}
case 249315:
{
returnValue = F("Peter-Nagl-Str.");
break;
}
case 249316:
{
returnValue = F("Peter-Neis-Brücke");
break;
}
case 249317:
{
returnValue = F("Peter-Nettekoven-Str.");
break;
}
case 249318:
{
returnValue = F("Peter-Neuber-Allee");
break;
}
case 249319:
{
returnValue = F("Peter-Neuenheuser-Str.");
break;
}
case 249320:
{
returnValue = F("Peter-Neugebauer-Str.");
break;
}
case 249321:
{
returnValue = F("Peter-Nickel-Str.");
break;
}
case 249322:
{
returnValue = F("Peter-Nonnenmühlen-Allee");
break;
}
case 249323:
{
returnValue = F("Peter-Ohlenhardt-Str.");
break;
}
case 249324:
{
returnValue = F("Peter-Ostermayr-Str.");
break;
}
case 249325:
{
returnValue = F("Peter-Otten-Str.");
break;
}
case 249326:
{
returnValue = F("Peter-Ox-Str.");
break;
}
case 249327:
{
returnValue = F("Peter-Pan-Insel");
break;
}
case 249328:
{
returnValue = F("Peter-Panzer-Str.");
break;
}
case 249329:
{
returnValue = F("Peter-Parler-Str.");
break;
}
case 249330:
{
returnValue = F("Peter-Parler-Weg");
break;
}
case 249331:
{
returnValue = F("Peter-Paul-Rubens-Str.");
break;
}
case 249332:
{
returnValue = F("Peter-Paul-Schmitz-Str.");
break;
}
case 249333:
{
returnValue = F("Peter-Paul-Str.");
break;
}
case 249334:
{
returnValue = F("Peter-Paul-Weg");
break;
}
case 249335:
{
returnValue = F("Peter-Paulus-Weg");
break;
}
case 249336:
{
returnValue = F("Peter-Pesch-Weg");
break;
}
case 249337:
{
returnValue = F("Peter-Philippi-Weg");
break;
}
case 249338:
{
returnValue = F("Peter-Polheim-Str.");
break;
}
case 249339:
{
returnValue = F("Peter-Pütz-Str.");
break;
}
case 249340:
{
returnValue = F("Peter-Rainer-Weg");
break;
}
case 249341:
{
returnValue = F("Peter-Rasspe-Str.");
break;
}
case 249342:
{
returnValue = F("Peter-Raths-Weg");
break;
}
case 249343:
{
returnValue = F("Peter-Reif-Str.");
break;
}
case 249344:
{
returnValue = F("Peter-Reuter-Weg");
break;
}
case 249345:
{
returnValue = F("Peter-Rickmers-Wiese");
break;
}
case 249346:
{
returnValue = F("Peter-Riedel-Str.");
break;
}
case 249347:
{
returnValue = F("Peter-Rommel-Weg");
break;
}
case 249348:
{
returnValue = F("Peter-Rosegger-Str.");
break;
}
case 249349:
{
returnValue = F("Peter-Rosegger-Weg");
break;
}
case 249350:
{
returnValue = F("Peter-Rosseger-Str.");
break;
}
case 249351:
{
returnValue = F("Peter-Roth-Platz");
break;
}
case 249352:
{
returnValue = F("Peter-Ruster-Str.");
break;
}
case 249353:
{
returnValue = F("Peter-Röttgen-Platz");
break;
}
case 249354:
{
returnValue = F("Peter-Savelsberg-Str.");
break;
}
case 249355:
{
returnValue = F("Peter-Sax-Str.");
break;
}
case 249356:
{
returnValue = F("Peter-Schall-Str.");
break;
}
case 249357:
{
returnValue = F("Peter-Schaufler-Str.");
break;
}
case 249358:
{
returnValue = F("Peter-Schegg-Str.");
break;
}
case 249359:
{
returnValue = F("Peter-Schemmer-Str.");
break;
}
case 249360:
{
returnValue = F("Peter-Scherer-Str.");
break;
}
case 249361:
{
returnValue = F("Peter-Schilling-Str.");
break;
}
case 249362:
{
returnValue = F("Peter-Schlack-Str.");
break;
}
case 249363:
{
returnValue = F("Peter-Schlösser-Str.");
break;
}
case 249364:
{
returnValue = F("Peter-Schmidt-Gasse");
break;
}
case 249365:
{
returnValue = F("Peter-Schmidts-Weg");
break;
}
case 249366:
{
returnValue = F("Peter-Schmitt-Weg");
break;
}
case 249367:
{
returnValue = F("Peter-Schmitter-Str.");
break;
}
case 249368:
{
returnValue = F("Peter-Schmohl-Str.");
break;
}
case 249369:
{
returnValue = F("Peter-Schmoll-Str.");
break;
}
case 249370:
{
returnValue = F("Peter-Schneider-Str.");
break;
}
case 249371:
{
returnValue = F("Peter-Schneider-Weg");
break;
}
case 249372:
{
returnValue = F("Peter-Schnellbach-Str.");
break;
}
case 249373:
{
returnValue = F("Peter-Scholzen-Str.");
break;
}
case 249374:
{
returnValue = F("Peter-Schreiber-Weg");
break;
}
case 249375:
{
returnValue = F("Peter-Schroeder-Str.");
break;
}
case 249376:
{
returnValue = F("Peter-Schröder-Platz");
break;
}
case 249377:
{
returnValue = F("Peter-Schulz-Str.");
break;
}
case 249378:
{
returnValue = F("Peter-Schumacher-Platz");
break;
}
case 249379:
{
returnValue = F("Peter-Schumacher-Str.");
break;
}
case 249380:
{
returnValue = F("Peter-Schuster-Weg");
break;
}
case 249381:
{
returnValue = F("Peter-Schwalb-Str.");
break;
}
case 249382:
{
returnValue = F("Peter-Schwenk-Str.");
break;
}
case 249383:
{
returnValue = F("Peter-Schwingen-Str.");
break;
}
case 249384:
{
returnValue = F("Peter-Schüller-Weg");
break;
}
case 249385:
{
returnValue = F("Peter-Schütz-Platz");
break;
}
case 249386:
{
returnValue = F("Peter-Schütze-Weg");
break;
}
case 249387:
{
returnValue = F("Peter-Seifert-Str.");
break;
}
case 249388:
{
returnValue = F("Peter-Sengl-Str.");
break;
}
case 249389:
{
returnValue = F("Peter-Sickler-Str.");
break;
}
case 249390:
{
returnValue = F("Peter-Siebert-Str.");
break;
}
case 249391:
{
returnValue = F("Peter-Siegel-Gasse");
break;
}
case 249392:
{
returnValue = F("Peter-Siemeister-Str.");
break;
}
case 249393:
{
returnValue = F("Peter-Simons-Str.");
break;
}
case 249394:
{
returnValue = F("Peter-Soemer-Str.");
break;
}
case 249395:
{
returnValue = F("Peter-Soemer-Weg");
break;
}
case 249396:
{
returnValue = F("Peter-Sonnenschein-Str.");
break;
}
case 249397:
{
returnValue = F("Peter-Spahn-Str.");
break;
}
case 249398:
{
returnValue = F("Peter-Spielberg-Str.");
break;
}
case 249399:
{
returnValue = F("Peter-Spies-Str.");
break;
}
case 249400:
{
returnValue = F("Peter-Spieß-Weg");
break;
}
case 249401:
{
returnValue = F("Peter-Spring-Str.");
break;
}
case 249402:
{
returnValue = F("Peter-Springer-Str.");
break;
}
case 249403:
{
returnValue = F("Peter-Sprung-Str.");
break;
}
case 249404:
{
returnValue = F("Peter-Staas-Str.");
break;
}
case 249405:
{
returnValue = F("Peter-Staffel-Platz");
break;
}
case 249406:
{
returnValue = F("Peter-Staffel-Str.");
break;
}
case 249407:
{
returnValue = F("Peter-Stahs-Str.");
break;
}
case 249408:
{
returnValue = F("Peter-Stein-Str.");
break;
}
case 249409:
{
returnValue = F("Peter-Steinmetzler-Str.");
break;
}
case 249410:
{
returnValue = F("Peter-Stoffels-Str.");
break;
}
case 249411:
{
returnValue = F("Peter-Stommen-Str.");
break;
}
case 249412:
{
returnValue = F("Peter-Str.");
break;
}
case 249413:
{
returnValue = F("Peter-Strasser-Platz");
break;
}
case 249414:
{
returnValue = F("Peter-Suhrkamp-Weg");
break;
}
case 249415:
{
returnValue = F("Peter-Sutter-Str.");
break;
}
case 249416:
{
returnValue = F("Peter-Swyn-Str.");
break;
}
case 249417:
{
returnValue = F("Peter-Tews-Platz");
break;
}
case 249418:
{
returnValue = F("Peter-Thomas-Str.");
break;
}
case 249419:
{
returnValue = F("Peter-Thumb-Str.");
break;
}
case 249420:
{
returnValue = F("Peter-Thumb-Weg");
break;
}
case 249421:
{
returnValue = F("Peter-Trimpler-Str.");
break;
}
case 249422:
{
returnValue = F("Peter-Trumm-Weg");
break;
}
case 249423:
{
returnValue = F("Peter-Tschaikowski-Str.");
break;
}
case 249424:
{
returnValue = F("Peter-Ulsch-Str.");
break;
}
case 249425:
{
returnValue = F("Peter-Ury-Weg");
break;
}
case 249426:
{
returnValue = F("Peter-Vaßen-Str.");
break;
}
case 249427:
{
returnValue = F("Peter-Vey-Str.");
break;
}
case 249428:
{
returnValue = F("Peter-Vischer-Ring");
break;
}
case 249429:
{
returnValue = F("Peter-Vischer-Str.");
break;
}
case 249430:
{
returnValue = F("Peter-Vischer-Weg");
break;
}
case 249431:
{
returnValue = F("Peter-Vogt-Str.");
break;
}
case 249432:
{
returnValue = F("Peter-Voussem-Weg");
break;
}
case 249433:
{
returnValue = F("Peter-Voß-Weg");
break;
}
case 249434:
{
returnValue = F("Peter-Wagner-Str.");
break;
}
case 249435:
{
returnValue = F("Peter-Wahl-Weg");
break;
}
case 249436:
{
returnValue = F("Peter-Wallenborn-Str.");
break;
}
case 249437:
{
returnValue = F("Peter-Walterscheidt-Str.");
break;
}
case 249438:
{
returnValue = F("Peter-Warschow-Str.");
break;
}
case 249439:
{
returnValue = F("Peter-Weibel-Str.");
break;
}
case 249440:
{
returnValue = F("Peter-Weier-Str.");
break;
}
case 249441:
{
returnValue = F("Peter-Weil-Str.");
break;
}
case 249442:
{
returnValue = F("Peter-Weiler-Str.");
break;
}
case 249443:
{
returnValue = F("Peter-Weiss-Platz");
break;
}
case 249444:
{
returnValue = F("Peter-Weiss-Str.");
break;
}
case 249445:
{
returnValue = F("Peter-Weitz-Platz");
break;
}
case 249446:
{
returnValue = F("Peter-Weller-Str.");
break;
}
case 249447:
{
returnValue = F("Peter-Wenzel-Weg");
break;
}
case 249448:
{
returnValue = F("Peter-Werner-Str.");
break;
}
case 249449:
{
returnValue = F("Peter-Weyer-Str.");
break;
}
case 249450:
{
returnValue = F("Peter-Weyers-Str.");
break;
}
case 249451:
{
returnValue = F("Peter-Weyler-Str.");
break;
}
case 249452:
{
returnValue = F("Peter-Wiese-Str.");
break;
}
case 249453:
{
returnValue = F("Peter-Wilhelm-Behrends-Str.");
break;
}
case 249454:
{
returnValue = F("Peter-Wilhelm-Johannsen-Str.");
break;
}
case 249455:
{
returnValue = F("Peter-Wilhelm-Kallen-Str.");
break;
}
case 249456:
{
returnValue = F("Peter-Willems-Str.");
break;
}
case 249457:
{
returnValue = F("Peter-Wimar-Weg");
break;
}
case 249458:
{
returnValue = F("Peter-Wolff-Str.");
break;
}
case 249459:
{
returnValue = F("Peter-Wolfram-Str.");
break;
}
case 249460:
{
returnValue = F("Peter-Wruck-Weg");
break;
}
case 249461:
{
returnValue = F("Peter-Wust-Str.");
break;
}
case 249462:
{
returnValue = F("Peter-Zadek-Str.");
break;
}
case 249463:
{
returnValue = F("Peter-Zenger-Str.");
break;
}
case 249464:
{
returnValue = F("Peter-Zepp-Str.");
break;
}
case 249465:
{
returnValue = F("Peter-Zilliken-Str.");
break;
}
case 249466:
{
returnValue = F("Peter-Zimmer-Str.");
break;
}
case 249467:
{
returnValue = F("Peter-Zimmermann-Str.");
break;
}
case 249468:
{
returnValue = F("Peter-Zimmermann-Weg");
break;
}
case 249469:
{
returnValue = F("Peter-Zink-Weg");
break;
}
case 249470:
{
returnValue = F("Peter-Zirbes-Str.");
break;
}
case 249471:
{
returnValue = F("Peter-und-Paul-Gasse");
break;
}
case 249472:
{
returnValue = F("Peter-und-Paul-Platz");
break;
}
case 249473:
{
returnValue = F("Peter-und-Paul-Str.");
break;
}
case 249474:
{
returnValue = F("Peter-und-Paul-Weg");
break;
}
case 249475:
{
returnValue = F("Peter-van-de-Flierdt-Str.");
break;
}
case 249476:
{
returnValue = F("Peter-von-Aspelt-Str.");
break;
}
case 249477:
{
returnValue = F("Peter-von-Binsfeld-Str.");
break;
}
case 249478:
{
returnValue = F("Peter-von-Koblenz-Str.");
break;
}
case 249479:
{
returnValue = F("Peter-von-Wederath-Weg");
break;
}
case 249480:
{
returnValue = F("Peterangerstr.");
break;
}
case 249481:
{
returnValue = F("Peterbache");
break;
}
case 249482:
{
returnValue = F("Peterbachstr.");
break;
}
case 249483:
{
returnValue = F("Peterbauerweg");
break;
}
case 249484:
{
returnValue = F("Peterbergstr.");
break;
}
case 249485:
{
returnValue = F("Peterbornweg");
break;
}
case 249486:
{
returnValue = F("Peterbrücke");
break;
}
case 249487:
{
returnValue = F("Peterdörfelstr.");
break;
}
case 249488:
{
returnValue = F("Petergasse");
break;
}
case 249489:
{
returnValue = F("Petergraben");
break;
}
case 249490:
{
returnValue = F("Peterhaldenweg");
break;
}
case 249491:
{
returnValue = F("Peterheide");
break;
}
case 249492:
{
returnValue = F("Peterhof");
break;
}
case 249493:
{
returnValue = F("Peterhof-Passage");
break;
}
case 249494:
{
returnValue = F("Peterhofer Str.");
break;
}
case 249495:
{
returnValue = F("Peterhofstr.");
break;
}
case 249496:
{
returnValue = F("Peterhofweg");
break;
}
case 249497:
{
returnValue = F("Peterholzhang");
break;
}
case 249498:
{
returnValue = F("Peterholzstr.");
break;
}
case 249499:
{
returnValue = F("Peterhüsenberg");
break;
}
case 249500:
{
returnValue = F("Peterleinsbuck");
break;
}
case 249501:
{
returnValue = F("Peterleshagweg");
break;
}
case 249502:
{
returnValue = F("Peterlesmorgen");
break;
}
case 249503:
{
returnValue = F("Peterlhöhe");
break;
}
case 249504:
{
returnValue = F("Peterlinen Weg");
break;
}
case 249505:
{
returnValue = F("Peterlinggasse");
break;
}
case 249506:
{
returnValue = F("Peterlingsgasse");
break;
}
case 249507:
{
returnValue = F("Petermannsgäßchen");
break;
}
case 249508:
{
returnValue = F("Petermannstr.");
break;
}
case 249509:
{
returnValue = F("Petermannsweg");
break;
}
case 249510:
{
returnValue = F("Petermannweg");
break;
}
case 249511:
{
returnValue = F("Petermax-Müller-Str.");
break;
}
case 249512:
{
returnValue = F("Petermeierweg");
break;
}
case 249513:
{
returnValue = F("Petermuellerweg");
break;
}
case 249514:
{
returnValue = F("Petermännleswaldweg");
break;
}
case 249515:
{
returnValue = F("Petermühler Weg");
break;
}
case 249516:
{
returnValue = F("Petermühlweg");
break;
}
case 249517:
{
returnValue = F("Peterpfarrgasse");
break;
}
case 249518:
{
returnValue = F("Peterplatz");
break;
}
case 249519:
{
returnValue = F("Peterpäddl");
break;
}
case 249520:
{
returnValue = F("Peters Bergelchen");
break;
}
case 249521:
{
returnValue = F("Peters Gärten");
break;
}
case 249522:
{
returnValue = F("Peters Hübel");
break;
}
case 249523:
{
returnValue = F("Peters Mühle");
break;
}
case 249524:
{
returnValue = F("Peters Werder");
break;
}
case 249525:
{
returnValue = F("Petersackerhof");
break;
}
case 249526:
{
returnValue = F("Petersau");
break;
}
case 249527:
{
returnValue = F("Petersauer Str.");
break;
}
case 249528:
{
returnValue = F("Petersauer Weg");
break;
}
case 249529:
{
returnValue = F("Petersauracher Str.");
break;
}
case 249530:
{
returnValue = F("Petersauracher Weg");
break;
}
case 249531:
{
returnValue = F("Petersbach");
break;
}
case 249532:
{
returnValue = F("Petersbacher Str.");
break;
}
case 249533:
{
returnValue = F("Petersbacherweg");
break;
}
case 249534:
{
returnValue = F("Petersbachstr.");
break;
}
case 249535:
{
returnValue = F("Petersbachweg");
break;
}
case 249536:
{
returnValue = F("Petersberg");
break;
}
case 249537:
{
returnValue = F("Petersberger Bittweg");
break;
}
case 249538:
{
returnValue = F("Petersberger Gartenstr.");
break;
}
case 249539:
{
returnValue = F("Petersberger Hof");
break;
}
case 249540:
{
returnValue = F("Petersberger Ringweg");
break;
}
case 249541:
{
returnValue = F("Petersberger Siedlung");
break;
}
case 249542:
{
returnValue = F("Petersberger Str.");
break;
}
case 249543:
{
returnValue = F("Petersberger Trift");
break;
}
case 249544:
{
returnValue = F("Petersberger Weg");
break;
}
case 249545:
{
returnValue = F("Petersbergstr.");
break;
}
case 249546:
{
returnValue = F("Petersbergtreppe");
break;
}
case 249547:
{
returnValue = F("Petersbergweg");
break;
}
case 249548:
{
returnValue = F("Petersborn");
break;
}
case 249549:
{
returnValue = F("Petersborner Weg");
break;
}
case 249550:
{
returnValue = F("Petersbredde");
break;
}
case 249551:
{
returnValue = F("Petersbruchweg");
break;
}
case 249552:
{
returnValue = F("Petersbrunn");
break;
}
case 249553:
{
returnValue = F("Petersbrunnen");
break;
}
case 249554:
{
returnValue = F("Petersbrunnenstr.");
break;
}
case 249555:
{
returnValue = F("Petersbrunner Str.");
break;
}
case 249556:
{
returnValue = F("Petersbrücke");
break;
}
case 249557:
{
returnValue = F("Petersburg");
break;
}
case 249558:
{
returnValue = F("Petersburg-Mühle");
break;
}
case 249559:
{
returnValue = F("Petersburger Str.");
break;
}
case 249560:
{
returnValue = F("Petersburger Wall");
break;
}
case 249561:
{
returnValue = F("Petersburger Weg");
break;
}
case 249562:
{
returnValue = F("Petersburgstr.");
break;
}
case 249563:
{
returnValue = F("Petersbächler Str.");
break;
}
case 249564:
{
returnValue = F("Petersdorf");
break;
}
case 249565:
{
returnValue = F("Petersdorf-Sanitzer Str.");
break;
}
case 249566:
{
returnValue = F("Petersdorfer Landweg");
break;
}
case 249567:
{
returnValue = F("Petersdorfer Seetrail");
break;
}
case 249568:
{
returnValue = F("Petersdorfer Siedlung");
break;
}
case 249569:
{
returnValue = F("Petersdorfer Str.");
break;
}
case 249570:
{
returnValue = F("Petersdorfer Weg");
break;
}
case 249571:
{
returnValue = F("Petersdorfer weg");
break;
}
case 249572:
{
returnValue = F("Peterseck");
break;
}
case 249573:
{
returnValue = F("Petersens Gang");
break;
}
case 249574:
{
returnValue = F("Petersenstr.");
break;
}
case 249575:
{
returnValue = F("Petersenweg");
break;
}
case 249576:
{
returnValue = F("Petersfehn-Ofen Karkpadd");
break;
}
case 249577:
{
returnValue = F("Petersfeld");
break;
}
case 249578:
{
returnValue = F("Petersfelde");
break;
}
case 249579:
{
returnValue = F("Petersfelder Str.");
break;
}
case 249580:
{
returnValue = F("Petersfelder Weg");
break;
}
case 249581:
{
returnValue = F("Petersfeldstr.");
break;
}
case 249582:
{
returnValue = F("Petersfelsstr.");
break;
}
case 249583:
{
returnValue = F("Petersgarten");
break;
}
case 249584:
{
returnValue = F("Petersgartenweg");
break;
}
case 249585:
{
returnValue = F("Petersgasse");
break;
}
case 249586:
{
returnValue = F("Petersgewann");
break;
}
case 249587:
{
returnValue = F("Petersgewanne");
break;
}
case 249588:
{
returnValue = F("Petersglaimer Str.");
break;
}
case 249589:
{
returnValue = F("Petersgmünder Str.");
break;
}
case 249590:
{
returnValue = F("Petersgmünder Weg");
break;
}
case 249591:
{
returnValue = F("Petersgroden");
break;
}
case 249592:
{
returnValue = F("Petersgrund");
break;
}
case 249593:
{
returnValue = F("Petersgärten");
break;
}
case 249594:
{
returnValue = F("Petersgässchen");
break;
}
case 249595:
{
returnValue = F("Petersgässle");
break;
}
case 249596:
{
returnValue = F("Petershagener Chaussee");
break;
}
case 249597:
{
returnValue = F("Petershagener Str.");
break;
}
case 249598:
{
returnValue = F("Petershagenstr.");
break;
}
case 249599:
{
returnValue = F("Petershainer Str.");
break;
}
case 249600:
{
returnValue = F("Petershausener Str.");
break;
}
case 249601:
{
returnValue = F("Petershauser Park");
break;
}
case 249602:
{
returnValue = F("Petershauser Str.");
break;
}
case 249603:
{
returnValue = F("Petersheckstr.");
break;
}
case 249604:
{
returnValue = F("Petersheide");
break;
}
case 249605:
{
returnValue = F("Petershof");
break;
}
case 249606:
{
returnValue = F("Petershofgasse");
break;
}
case 249607:
{
returnValue = F("Petershäger Weg");
break;
}
case 249608:
{
returnValue = F("Petershöfe");
break;
}
case 249609:
{
returnValue = F("Petershöhe");
break;
}
case 249610:
{
returnValue = F("Petershöher Str.");
break;
}
case 249611:
{
returnValue = F("Petershörner Siel");
break;
}
case 249612:
{
returnValue = F("Petershüttenweg");
break;
}
case 249613:
{
returnValue = F("Petershütter Allee");
break;
}
case 249614:
{
returnValue = F("Petersilienberg");
break;
}
case 249615:
{
returnValue = F("Petersiliengasse");
break;
}
case 249616:
{
returnValue = F("Petersilienstr.");
break;
}
case 249617:
{
returnValue = F("Petersilienwasser");
break;
}
case 249618:
{
returnValue = F("Petersilienweg");
break;
}
case 249619:
{
returnValue = F("Peterskamp");
break;
}
case 249620:
{
returnValue = F("Peterskampweg");
break;
}
case 249621:
{
returnValue = F("Peterskaul");
break;
}
case 249622:
{
returnValue = F("Peterskirchener Feldweg");
break;
}
case 249623:
{
returnValue = F("Peterskirchenweg");
break;
}
case 249624:
{
returnValue = F("Peterskirchhof");
break;
}
case 249625:
{
returnValue = F("Peterskopfstr.");
break;
}
case 249626:
{
returnValue = F("Peterskopfweg");
break;
}
case 249627:
{
returnValue = F("Petersland");
break;
}
case 249628:
{
returnValue = F("Peterslehne");
break;
}
case 249629:
{
returnValue = F("Petersleite");
break;
}
case 249630:
{
returnValue = F("Petersmannweg");
break;
}
case 249631:
{
returnValue = F("Petersmauer");
break;
}
case 249632:
{
returnValue = F("Petersmoorer Hof");
break;
}
case 249633:
{
returnValue = F("Petersmühlenweg");
break;
}
case 249634:
{
returnValue = F("Petersmühlweg");
break;
}
case 249635:
{
returnValue = F("Peterson Lane");
break;
}
case 249636:
{
returnValue = F("Peterspark");
break;
}
case 249637:
{
returnValue = F("Peterspforte");
break;
}
case 249638:
{
returnValue = F("Petersplatz");
break;
}
case 249639:
{
returnValue = F("Petersplatz (Forum)");
break;
}
case 249640:
{
returnValue = F("Petersrodaer Str.");
break;
}
case 249641:
{
returnValue = F("Petersrodaer Weg");
break;
}
case 249642:
{
returnValue = F("Petersruh");
break;
}
case 249643:
{
returnValue = F("Petersruhstr.");
break;
}
case 249644:
{
returnValue = F("Petersstr.");
break;
}
case 249645:
{
returnValue = F("Petersstück");
break;
}
case 249646:
{
returnValue = F("Peterstal");
break;
}
case 249647:
{
returnValue = F("Peterstaler Str.");
break;
}
case 249648:
{
returnValue = F("Peterstalstr.");
break;
}
case 249649:
{
returnValue = F("Peterstalweg");
break;
}
case 249650:
{
returnValue = F("Petersteichweg");
break;
}
case 249651:
{
returnValue = F("Peterstichel");
break;
}
case 249652:
{
returnValue = F("Peterstieg");
break;
}
case 249653:
{
returnValue = F("Peterstoft");
break;
}
case 249654:
{
returnValue = F("Peterstor");
break;
}
case 249655:
{
returnValue = F("Peterstorstr.");
break;
}
case 249656:
{
returnValue = F("Peterstr.");
break;
}
case 249657:
{
returnValue = F("Peterstreppe");
break;
}
case 249658:
{
returnValue = F("Peterswahl");
break;
}
case 249659:
{
returnValue = F("Peterswalde");
break;
}
case 249660:
{
returnValue = F("Peterswalder Str.");
break;
}
case 249661:
{
returnValue = F("Peterswaldstr.");
break;
}
case 249662:
{
returnValue = F("Peterswaldweg");
break;
}
case 249663:
{
returnValue = F("Petersweg");
break;
}
case 249664:
{
returnValue = F("Petersweiher");
break;
}
case 249665:
{
returnValue = F("Peterswiesenweg");
break;
}
case 249666:
{
returnValue = F("Peterswolder Str.");
break;
}
case 249667:
{
returnValue = F("Peterswolder Weg");
break;
}
case 249668:
{
returnValue = F("Peterswälder Str.");
break;
}
case 249669:
{
returnValue = F("Peterswörther Str.");
break;
}
case 249670:
{
returnValue = F("Petersäcker");
break;
}
case 249671:
{
returnValue = F("Peterwald");
break;
}
case 249672:
{
returnValue = F("Peterweg");
break;
}
case 249673:
{
returnValue = F("Peterwinkeln");
break;
}
case 249674:
{
returnValue = F("Peterwitzer Str.");
break;
}
case 249675:
{
returnValue = F("Peterzeller Str.");
break;
}
case 249676:
{
returnValue = F("Peteräcker");
break;
}
case 249677:
{
returnValue = F("Peteweg");
break;
}
case 249678:
{
returnValue = F("Petit-Couronne-Str.");
break;
}
case 249679:
{
returnValue = F("Petit-Landau Str.");
break;
}
case 249680:
{
returnValue = F("Petitsweg");
break;
}
case 249681:
{
returnValue = F("Petjesweg");
break;
}
case 249682:
{
returnValue = F("Petkumer Münte");
break;
}
case 249683:
{
returnValue = F("Petkumer Str.");
break;
}
case 249684:
{
returnValue = F("Petkumer-Münte-Weg");
break;
}
case 249685:
{
returnValue = F("Petkuser Hauptstr.");
break;
}
case 249686:
{
returnValue = F("Petkuser Siedlung");
break;
}
case 249687:
{
returnValue = F("Petkuser Weg");
break;
}
case 249688:
{
returnValue = F("Petkuserweg");
break;
}
case 249689:
{
returnValue = F("Petra-Kelly-Allee");
break;
}
case 249690:
{
returnValue = F("Petra-Kelly-Platz");
break;
}
case 249691:
{
returnValue = F("Petra-Kelly-Str.");
break;
}
case 249692:
{
returnValue = F("Petra-Kelly-Weg");
break;
}
case 249693:
{
returnValue = F("Petra-Mönnigmann-Str.");
break;
}
case 249694:
{
returnValue = F("Petrastr.");
break;
}
case 249695:
{
returnValue = F("Petraweg");
break;
}
case 249696:
{
returnValue = F("Petrejusstr.");
break;
}
case 249697:
{
returnValue = F("Petreusbogen");
break;
}
case 249698:
{
returnValue = F("Petri Str.");
break;
}
case 249699:
{
returnValue = F("Petri-Park");
break;
}
case 249700:
{
returnValue = F("Petriberg");
break;
}
case 249701:
{
returnValue = F("Petriblick");
break;
}
case 249702:
{
returnValue = F("Petridamm");
break;
}
case 249703:
{
returnValue = F("Petriförder");
break;
}
case 249704:
{
returnValue = F("Petrigang");
break;
}
case 249705:
{
returnValue = F("Petrigasse");
break;
}
case 249706:
{
returnValue = F("Petriholz");
break;
}
case 249707:
{
returnValue = F("Petrikirchhof");
break;
}
case 249708:
{
returnValue = F("Petrikirchhofplatz");
break;
}
case 249709:
{
returnValue = F("Petrikirchhofstr.");
break;
}
case 249710:
{
returnValue = F("Petrikirchplatz");
break;
}
case 249711:
{
returnValue = F("Petrikirchstr.");
break;
}
case 249712:
{
returnValue = F("Petrikirchweg");
break;
}
case 249713:
{
returnValue = F("Petrinistr.");
break;
}
case 249714:
{
returnValue = F("Petripark");
break;
}
case 249715:
{
returnValue = F("Petriplatz");
break;
}
case 249716:
{
returnValue = F("Petrirodaer Str.");
break;
}
case 249717:
{
returnValue = F("Petristeinweg");
break;
}
case 249718:
{
returnValue = F("Petristift");
break;
}
case 249719:
{
returnValue = F("Petristr.");
break;
}
case 249720:
{
returnValue = F("Petritor");
break;
}
case 249721:
{
returnValue = F("Petritorwall");
break;
}
case 249722:
{
returnValue = F("Petriweg");
break;
}
case 249723:
{
returnValue = F("Petriwinkel");
break;
}
case 249724:
{
returnValue = F("Petronellastr.");
break;
}
case 249725:
{
returnValue = F("Petronia-Steiner-Str.");
break;
}
case 249726:
{
returnValue = F("Petrosawodsker Str.");
break;
}
case 249727:
{
returnValue = F("Petrosilienstr.");
break;
}
case 249728:
{
returnValue = F("Petrus-Borne-Str.");
break;
}
case 249729:
{
returnValue = F("Petrus-Borne-Weg");
break;
}
case 249730:
{
returnValue = F("Petrus-Canisius-Str.");
break;
}
case 249731:
{
returnValue = F("Petrus-Claver-Weg");
break;
}
case 249732:
{
returnValue = F("Petrus-Cramer-Str.");
break;
}
case 249733:
{
returnValue = F("Petrus-Dorn-Str.");
break;
}
case 249734:
{
returnValue = F("Petrus-Jacobi-Weg");
break;
}
case 249735:
{
returnValue = F("Petrus-Klausener-Weg");
break;
}
case 249736:
{
returnValue = F("Petrus-Koch-Str.");
break;
}
case 249737:
{
returnValue = F("Petrus-Kregenow-Str.");
break;
}
case 249738:
{
returnValue = F("Petrus-Legge-Weg");
break;
}
case 249739:
{
returnValue = F("Petrus-Mosellanus-Str.");
break;
}
case 249740:
{
returnValue = F("Petrus-Muskulus-Str.");
break;
}
case 249741:
{
returnValue = F("Petrus-Sinzig-Str.");
break;
}
case 249742:
{
returnValue = F("Petrus-Waldus-Str.");
break;
}
case 249743:
{
returnValue = F("Petrus-Zweidler-Str.");
break;
}
case 249744:
{
returnValue = F("Petruspark");
break;
}
case 249745:
{
returnValue = F("Petrusstr.");
break;
}
case 249746:
{
returnValue = F("Petrusweg");
break;
}
case 249747:
{
returnValue = F("Petrystr.");
break;
}
case 249748:
{
returnValue = F("Petryweg");
break;
}
case 249749:
{
returnValue = F("Petsaer Weg");
break;
}
case 249750:
{
returnValue = F("Petscheltweg");
break;
}
case 249751:
{
returnValue = F("Petschengasse");
break;
}
case 249752:
{
returnValue = F("Petschgasse");
break;
}
case 249753:
{
returnValue = F("Petschkebergstr.");
break;
}
case 249754:
{
returnValue = F("Petschwiesen");
break;
}
case 249755:
{
returnValue = F("Pettackersweg");
break;
}
case 249756:
{
returnValue = F("Pettenacker");
break;
}
case 249757:
{
returnValue = F("Pettenbacher Str.");
break;
}
case 249758:
{
returnValue = F("Pettenbeckweg");
break;
}
case 249759:
{
returnValue = F("Pettenbrunn");
break;
}
case 249760:
{
returnValue = F("Pettendorf");
break;
}
case 249761:
{
returnValue = F("Pettendorfer Str.");
break;
}
case 249762:
{
returnValue = F("Pettenhahnweg");
break;
}
case 249763:
{
returnValue = F("Pettenhof");
break;
}
case 249764:
{
returnValue = F("Pettenhofen");
break;
}
case 249765:
{
returnValue = F("Pettenhofener Weg");
break;
}
case 249766:
{
returnValue = F("Pettenkoferallee");
break;
}
case 249767:
{
returnValue = F("Pettenkoferbrücke");
break;
}
case 249768:
{
returnValue = F("Pettenkoferring");
break;
}
case 249769:
{
returnValue = F("Pettenkoferstr.");
break;
}
case 249770:
{
returnValue = F("Pettenkoferweg");
break;
}
case 249771:
{
returnValue = F("Pettenpohlstr.");
break;
}
case 249772:
{
returnValue = F("Pettensiedel");
break;
}
case 249773:
{
returnValue = F("Pettensiedler Str.");
break;
}
case 249774:
{
returnValue = F("Pettenweg");
break;
}
case 249775:
{
returnValue = F("Petternicher Str.");
break;
}
case 249776:
{
returnValue = F("Petterstr.");
break;
}
case 249777:
{
returnValue = F("Petterweiler Holzweg");
break;
}
case 249778:
{
returnValue = F("Petterweiler Str.");
break;
}
case 249779:
{
returnValue = F("Petterweiler Weg");
break;
}
case 249780:
{
returnValue = F("Petterweilstr.");
break;
}
case 249781:
{
returnValue = F("Pettinger Str.");
break;
}
case 249782:
{
returnValue = F("Pettlinger Str.");
break;
}
case 249783:
{
returnValue = F("Pettmecke");
break;
}
case 249784:
{
returnValue = F("Pettostr.");
break;
}
case 249785:
{
returnValue = F("Pettseifener Str.");
break;
}
case 249786:
{
returnValue = F("Pettstadter Grund");
break;
}
case 249787:
{
returnValue = F("Petuelstr.");
break;
}
case 249788:
{
returnValue = F("Petunienstr.");
break;
}
case 249789:
{
returnValue = F("Petunienweg");
break;
}
case 249790:
{
returnValue = F("Petzenberg");
break;
}
case 249791:
{
returnValue = F("Petzenbergstr.");
break;
}
case 249792:
{
returnValue = F("Petzenbichl");
break;
}
case 249793:
{
returnValue = F("Petzenhofen");
break;
}
case 249794:
{
returnValue = F("Petzenhofener Str.");
break;
}
case 249795:
{
returnValue = F("Petzer Kerkweg");
break;
}
case 249796:
{
returnValue = F("Petzer Stieg");
break;
}
case 249797:
{
returnValue = F("Petzer Str.");
break;
}
case 249798:
{
returnValue = F("Petzerberg");
break;
}
case 249799:
{
returnValue = F("Petzestr.");
break;
}
case 249800:
{
returnValue = F("Petzinstr.");
break;
}
case 249801:
{
returnValue = F("Petzkofen");
break;
}
case 249802:
{
returnValue = F("Petzlarstr.");
break;
}
case 249803:
{
returnValue = F("Petzlberg");
break;
}
case 249804:
{
returnValue = F("Petzlberger Str.");
break;
}
case 249805:
{
returnValue = F("Petzmannsberg");
break;
}
case 249806:
{
returnValue = F("Petzmannsberger Str.");
break;
}
case 249807:
{
returnValue = F("Petzoldstr.");
break;
}
case 249808:
{
returnValue = F("Petzoldtstr.");
break;
}
case 249809:
{
returnValue = F("Petzoldweg");
break;
}
case 249810:
{
returnValue = F("Petzoltstr.");
break;
}
case 249811:
{
returnValue = F("Petzower Str.");
break;
}
case 249812:
{
returnValue = F("Petzschwitz");
break;
}
case 249813:
{
returnValue = F("Petzvalstr.");
break;
}
case 249814:
{
returnValue = F("Peuerlstr.");
break;
}
case 249815:
{
returnValue = F("Peugeotstr.");
break;
}
case 249816:
{
returnValue = F("Peukers Sackgasse");
break;
}
case 249817:
{
returnValue = F("Peukinger Weg");
break;
}
case 249818:
{
returnValue = F("Peulers Hof");
break;
}
case 249819:
{
returnValue = F("Peulingen");
break;
}
case 249820:
{
returnValue = F("Peulinger Bahnhof");
break;
}
case 249821:
{
returnValue = F("Peulinger Nachtweide");
break;
}
case 249822:
{
returnValue = F("Peulinger Weg");
break;
}
case 249823:
{
returnValue = F("Peulinger Winkel");
break;
}
case 249824:
{
returnValue = F("Peumannweg");
break;
}
case 249825:
{
returnValue = F("Peunt");
break;
}
case 249826:
{
returnValue = F("Peuntenweg");
break;
}
case 249827:
{
returnValue = F("Peuntgasse");
break;
}
case 249828:
{
returnValue = F("Peunthe");
break;
}
case 249829:
{
returnValue = F("Peunthgasse");
break;
}
case 249830:
{
returnValue = F("Peunting");
break;
}
case 249831:
{
returnValue = F("Peuntlein");
break;
}
case 249832:
{
returnValue = F("Peuntring");
break;
}
case 249833:
{
returnValue = F("Peuntstr.");
break;
}
case 249834:
{
returnValue = F("Peuntweg");
break;
}
case 249835:
{
returnValue = F("Peuntäcker");
break;
}
case 249836:
{
returnValue = F("Peusstr.");
break;
}
case 249837:
{
returnValue = F("Peutenweg");
break;
}
case 249838:
{
returnValue = F("Peutingerstr.");
break;
}
case 249839:
{
returnValue = F("Peutingerweg");
break;
}
case 249840:
{
returnValue = F("Pevelingstr.");
break;
}
case 249841:
{
returnValue = F("Pewsumer Landstr.");
break;
}
case 249842:
{
returnValue = F("Pewsumer Reihe");
break;
}
case 249843:
{
returnValue = F("Pexenfelderstr.");
break;
}
case 249844:
{
returnValue = F("Pexenfelderweg");
break;
}
case 249845:
{
returnValue = F("Peyckesweg");
break;
}
case 249846:
{
returnValue = F("Peyerstr.");
break;
}
case 249847:
{
returnValue = F("Peyrerstr.");
break;
}
case 249848:
{
returnValue = F("Pezoldstr.");
break;
}
case 249849:
{
returnValue = F("Pf.-Dickinger-Str.");
break;
}
case 249850:
{
returnValue = F("Pf.-Kern-Str.");
break;
}
case 249851:
{
returnValue = F("Pf.-Unsin-Str.");
break;
}
case 249852:
{
returnValue = F("Pfaben");
break;
}
case 249853:
{
returnValue = F("Pfad");
break;
}
case 249854:
{
returnValue = F("Pfad Richtung Autobahn");
break;
}
case 249855:
{
returnValue = F("Pfad am Brennofen");
break;
}
case 249856:
{
returnValue = F("Pfad am Damm");
break;
}
case 249857:
{
returnValue = F("Pfad der Artenvielfalt");
break;
}
case 249858:
{
returnValue = F("Pfad der Liebe");
break;
}
case 249859:
{
returnValue = F("Pfad der Natur");
break;
}
case 249860:
{
returnValue = F("Pfad der Poesie");
break;
}
case 249861:
{
returnValue = F("Pfad der Qual");
break;
}
case 249862:
{
returnValue = F("Pfad der Sinne");
break;
}
case 249863:
{
returnValue = F("Pfad zu Schrebergärten");
break;
}
case 249864:
{
returnValue = F("Pfad zu den Schrebergärten");
break;
}
case 249865:
{
returnValue = F("Pfad zum Aussichtsturm");
break;
}
case 249866:
{
returnValue = F("Pfad zum Bildstein");
break;
}
case 249867:
{
returnValue = F("Pfad zum Heinerberg bei Wörnitz");
break;
}
case 249868:
{
returnValue = F("Pfad zum Sekretariats-Fenster");
break;
}
case 249869:
{
returnValue = F("Pfad zum Wildpark MV");
break;
}
case 249870:
{
returnValue = F("Pfad zur Wandaquelle");
break;
}
case 249871:
{
returnValue = F("Pfad über Spielplatz");
break;
}
case 249872:
{
returnValue = F("Pfadacker");
break;
}
case 249873:
{
returnValue = F("Pfadackerweg");
break;
}
case 249874:
{
returnValue = F("Pfaden");
break;
}
case 249875:
{
returnValue = F("Pfaderstr.");
break;
}
case 249876:
{
returnValue = F("Pfadfinderkreuz");
break;
}
case 249877:
{
returnValue = F("Pfadfinderweg");
break;
}
case 249878:
{
returnValue = F("Pfadgarten");
break;
}
case 249879:
{
returnValue = F("Pfadgasse");
break;
}
case 249880:
{
returnValue = F("Pfadsiedlung");
break;
}
case 249881:
{
returnValue = F("Pfadstr.");
break;
}
case 249882:
{
returnValue = F("Pfadsweg");
break;
}
case 249883:
{
returnValue = F("Pfadweg");
break;
}
case 249884:
{
returnValue = F("Pfadwiese");
break;
}
case 249885:
{
returnValue = F("Pfadwiesen");
break;
}
case 249886:
{
returnValue = F("Pfadwiesenstr.");
break;
}
case 249887:
{
returnValue = F("Pfadäcker");
break;
}
case 249888:
{
returnValue = F("Pfadäckerstr.");
break;
}
case 249889:
{
returnValue = F("Pfadäckerweg");
break;
}
case 249890:
{
returnValue = F("Pfaff-Florian-Weg");
break;
}
case 249891:
{
returnValue = F("Pfaffangerweg");
break;
}
case 249892:
{
returnValue = F("Pfaffelbach");
break;
}
case 249893:
{
returnValue = F("Pfaffen-Peter-Str.");
break;
}
case 249894:
{
returnValue = F("Pfaffenacker");
break;
}
case 249895:
{
returnValue = F("Pfaffenackersackweg");
break;
}
case 249896:
{
returnValue = F("Pfaffenackerstr.");
break;
}
case 249897:
{
returnValue = F("Pfaffenauweg");
break;
}
case 249898:
{
returnValue = F("Pfaffenbach");
break;
}
case 249899:
{
returnValue = F("Pfaffenbachweg");
break;
}
case 249900:
{
returnValue = F("Pfaffenberg");
break;
}
case 249901:
{
returnValue = F("Pfaffenberg- Weg");
break;
}
case 249902:
{
returnValue = F("Pfaffenberger Str.");
break;
}
case 249903:
{
returnValue = F("Pfaffenberger Weg");
break;
}
case 249904:
{
returnValue = F("Pfaffenbergergasse");
break;
}
case 249905:
{
returnValue = F("Pfaffenberghorizontale");
break;
}
case 249906:
{
returnValue = F("Pfaffenbergstr.");
break;
}
case 249907:
{
returnValue = F("Pfaffenbergsträßle");
break;
}
case 249908:
{
returnValue = F("Pfaffenbergweg");
break;
}
case 249909:
{
returnValue = F("Pfaffenbeund");
break;
}
case 249910:
{
returnValue = F("Pfaffenbichelweg");
break;
}
case 249911:
{
returnValue = F("Pfaffenbogen");
break;
}
case 249912:
{
returnValue = F("Pfaffenbreite");
break;
}
case 249913:
{
returnValue = F("Pfaffenbrochweg");
break;
}
case 249914:
{
returnValue = F("Pfaffenbrunnen");
break;
}
case 249915:
{
returnValue = F("Pfaffenbrunnenstr.");
break;
}
case 249916:
{
returnValue = F("Pfaffenbrunnenweg");
break;
}
case 249917:
{
returnValue = F("Pfaffenbrückleweg");
break;
}
case 249918:
{
returnValue = F("Pfaffenbrünnleweg");
break;
}
case 249919:
{
returnValue = F("Pfaffenbuck");
break;
}
case 249920:
{
returnValue = F("Pfaffenbusch");
break;
}
case 249921:
{
returnValue = F("Pfaffenbuschweg");
break;
}
case 249922:
{
returnValue = F("Pfaffenbühler Str.");
break;
}
case 249923:
{
returnValue = F("Pfaffendelle");
break;
}
case 249924:
{
returnValue = F("Pfaffendobelstr.");
break;
}
case 249925:
{
returnValue = F("Pfaffendobelweg");
break;
}
case 249926:
{
returnValue = F("Pfaffendorf");
break;
}
case 249927:
{
returnValue = F("Pfaffendorfer Chaussee");
break;
}
case 249928:
{
returnValue = F("Pfaffendorfer Gasse");
break;
}
case 249929:
{
returnValue = F("Pfaffendorfer Hauptstr.");
break;
}
case 249930:
{
returnValue = F("Pfaffendorfer Str.");
break;
}
case 249931:
{
returnValue = F("Pfaffendorfer Weg");
break;
}
case 249932:
{
returnValue = F("Pfaffendorfstr.");
break;
}
case 249933:
{
returnValue = F("Pfaffendriesch");
break;
}
case 249934:
{
returnValue = F("Pfaffeneckschleifweg");
break;
}
case 249935:
{
returnValue = F("Pfaffeneckweg");
break;
}
case 249936:
{
returnValue = F("Pfaffeneichenweg");
break;
}
case 249937:
{
returnValue = F("Pfaffeneller");
break;
}
case 249938:
{
returnValue = F("Pfaffenfeld");
break;
}
case 249939:
{
returnValue = F("Pfaffenfeldstr.");
break;
}
case 249940:
{
returnValue = F("Pfaffenfeldweg");
break;
}
case 249941:
{
returnValue = F("Pfaffenfelsstr.");
break;
}
case 249942:
{
returnValue = F("Pfaffenfleck");
break;
}
case 249943:
{
returnValue = F("Pfaffenflur");
break;
}
case 249944:
{
returnValue = F("Pfaffenfurtweg");
break;
}
case 249945:
{
returnValue = F("Pfaffengarten");
break;
}
case 249946:
{
returnValue = F("Pfaffengasse");
break;
}
case 249947:
{
returnValue = F("Pfaffengraben");
break;
}
case 249948:
{
returnValue = F("Pfaffengreuth");
break;
}
case 249949:
{
returnValue = F("Pfaffengreuther Berg");
break;
}
case 249950:
{
returnValue = F("Pfaffengrund");
break;
}
case 249951:
{
returnValue = F("Pfaffengrunder Platte");
break;
}
case 249952:
{
returnValue = F("Pfaffengrunder Terrasse");
break;
}
case 249953:
{
returnValue = F("Pfaffengrundstr.");
break;
}
case 249954:
{
returnValue = F("Pfaffengrundweg");
break;
}
case 249955:
{
returnValue = F("Pfaffengründchen");
break;
}
case 249956:
{
returnValue = F("Pfaffengrüner Str.");
break;
}
case 249957:
{
returnValue = F("Pfaffengutstr.");
break;
}
case 249958:
{
returnValue = F("Pfaffengässle");
break;
}
case 249959:
{
returnValue = F("Pfaffengäßle");
break;
}
case 249960:
{
returnValue = F("Pfaffenhainer Str.");
break;
}
case 249961:
{
returnValue = F("Pfaffenhalde");
break;
}
case 249962:
{
returnValue = F("Pfaffenhaldenweg");
break;
}
case 249963:
{
returnValue = F("Pfaffenhalder Weg");
break;
}
case 249964:
{
returnValue = F("Pfaffenhaldeweg");
break;
}
case 249965:
{
returnValue = F("Pfaffenham");
break;
}
case 249966:
{
returnValue = F("Pfaffenhaus");
break;
}
case 249967:
{
returnValue = F("Pfaffenhausener Str.");
break;
}
case 249968:
{
returnValue = F("Pfaffenhauser Str.");
break;
}
case 249969:
{
returnValue = F("Pfaffenhaustr.");
break;
}
case 249970:
{
returnValue = F("Pfaffenhauweg");
break;
}
case 249971:
{
returnValue = F("Pfaffenhecke");
break;
}
case 249972:
{
returnValue = F("Pfaffenheckenweg");
break;
}
case 249973:
{
returnValue = F("Pfaffenherdstr.");
break;
}
case 249974:
{
returnValue = F("Pfaffenhof");
break;
}
case 249975:
{
returnValue = F("Pfaffenhofen");
break;
}
case 249976:
{
returnValue = F("Pfaffenhofener Str.");
break;
}
case 249977:
{
returnValue = F("Pfaffenhofener Weg");
break;
}
case 249978:
{
returnValue = F("Pfaffenhofer Str.");
break;
}
case 249979:
{
returnValue = F("Pfaffenhofer Weg");
break;
}
case 249980:
{
returnValue = F("Pfaffenhoffenstr.");
break;
}
case 249981:
{
returnValue = F("Pfaffenhofstr.");
break;
}
case 249982:
{
returnValue = F("Pfaffenhohl");
break;
}
case 249983:
{
returnValue = F("Pfaffenholz");
break;
}
case 249984:
{
returnValue = F("Pfaffenholzstr.");
break;
}
case 249985:
{
returnValue = F("Pfaffenholzweg");
break;
}
case 249986:
{
returnValue = F("Pfaffenhude");
break;
}
case 249987:
{
returnValue = F("Pfaffenhueleweg");
break;
}
case 249988:
{
returnValue = F("Pfaffenhufe");
break;
}
case 249989:
{
returnValue = F("Pfaffenhutweg");
break;
}
case 249990:
{
returnValue = F("Pfaffenhäulesallee");
break;
}
case 249991:
{
returnValue = F("Pfaffenhäuser Str.");
break;
}
case 249992:
{
returnValue = F("Pfaffenhöfer Str.");
break;
}
case 249993:
{
returnValue = F("Pfaffenhölle");
break;
}
case 249994:
{
returnValue = F("Pfaffenhölzle");
break;
}
case 249995:
{
returnValue = F("Pfaffenhölzlesweg");
break;
}
case 249996:
{
returnValue = F("Pfaffenhütchen");
break;
}
case 249997:
{
returnValue = F("Pfaffenhütchenweg");
break;
}
case 249998:
{
returnValue = F("Pfaffenkamer Str.");
break;
}
case 249999:
{
returnValue = F("Pfaffenklinge");
break;
}
case 250000:
{
returnValue = F("Pfaffenklingen");
break;
}
case 250001:
{
returnValue = F("Pfaffenklingenweg");
break;
}
case 250002:
{
returnValue = F("Pfaffenkopfhaldenweg");
break;
}
case 250003:
{
returnValue = F("Pfaffenkopfstr.");
break;
}
case 250004:
{
returnValue = F("Pfaffenkopfweg");
break;
}
case 250005:
{
returnValue = F("Pfaffenkreben");
break;
}
case 250006:
{
returnValue = F("Pfaffenkreuz");
break;
}
case 250007:
{
returnValue = F("Pfaffenleite");
break;
}
case 250008:
{
returnValue = F("Pfaffenleitenweg");
break;
}
case 250009:
{
returnValue = F("Pfaffenleithe");
break;
}
case 250010:
{
returnValue = F("Pfaffenliede");
break;
}
case 250011:
{
returnValue = F("Pfaffenloch");
break;
}
case 250012:
{
returnValue = F("Pfaffenlochweg");
break;
}
case 250013:
{
returnValue = F("Pfaffenlohe");
break;
}
case 250014:
{
returnValue = F("Pfaffenlohweg");
break;
}
case 250015:
{
returnValue = F("Pfaffenmattweg");
break;
}
case 250016:
{
returnValue = F("Pfaffenmorgen");
break;
}
case 250017:
{
returnValue = F("Pfaffenmühlerweg");
break;
}
case 250018:
{
returnValue = F("Pfaffenmühlweg");
break;
}
case 250019:
{
returnValue = F("Pfaffenmünsterstr.");
break;
}
case 250020:
{
returnValue = F("Pfaffenmütze");
break;
}
case 250021:
{
returnValue = F("Pfaffennutzenhölzleweg");
break;
}
case 250022:
{
returnValue = F("Pfaffenpfad");
break;
}
case 250023:
{
returnValue = F("Pfaffenpoint");
break;
}
case 250024:
{
returnValue = F("Pfaffenrain");
break;
}
case 356487:
{
returnValue = F("panzertreck");
break;
}
case 356488:
{
returnValue = F("park1");
break;
}
case 356489:
{
returnValue = F("parkgarten");
break;
}
case 356490:
{
returnValue = F("pf");
break;
}
case 356491:
{
returnValue = F("privat Evangelische Pfarrgemeinde");
break;
}
case 356492:
{
returnValue = F("privat Weg keine FzG");
break;
}
case 356493:
{
returnValue = F("private footpath and bike path");
break;
}
case 356494:
{
returnValue = F("private property");
break;
}
}
return returnValue;
}
