#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameA2(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 10001:
    {
        returnValue = F("Am Adelsbach");
        break;
    }
    case 10002:
    {
        returnValue = F("Am Adelsberg");
        break;
    }
    case 10003:
    {
        returnValue = F("Am Adelsheimer Hof");
        break;
    }
    case 10004:
    {
        returnValue = F("Am Adelstedter Berg");
        break;
    }
    case 10005:
    {
        returnValue = F("Am Adenauerpark");
        break;
    }
    case 10006:
    {
        returnValue = F("Am Aderbach");
        break;
    }
    case 10007:
    {
        returnValue = F("Am Adler");
        break;
    }
    case 10008:
    {
        returnValue = F("Am Adlerberg");
        break;
    }
    case 10009:
    {
        returnValue = F("Am Adlerbrunnen");
        break;
    }
    case 10010:
    {
        returnValue = F("Am Adlergarten");
        break;
    }
    case 10011:
    {
        returnValue = F("Am Adlerhorst");
        break;
    }
    case 10012:
    {
        returnValue = F("Am Adlerhügel");
        break;
    }
    case 10013:
    {
        returnValue = F("Am Adlerpark");
        break;
    }
    case 10014:
    {
        returnValue = F("Am Adlersberg");
        break;
    }
    case 10015:
    {
        returnValue = F("Am Adlerteich");
        break;
    }
    case 10016:
    {
        returnValue = F("Am Adlerturm");
        break;
    }
    case 10017:
    {
        returnValue = F("Am Adlmannsberg");
        break;
    }
    case 10018:
    {
        returnValue = F("Am Adlungsgarten");
        break;
    }
    case 10019:
    {
        returnValue = F("Am Adlwanger Platz");
        break;
    }
    case 10020:
    {
        returnValue = F("Am Adolfschacht");
        break;
    }
    case 10021:
    {
        returnValue = F("Am Aelkerswald");
        break;
    }
    case 10022:
    {
        returnValue = F("Am Aeschenbaum");
        break;
    }
    case 10023:
    {
        returnValue = F("Am Afelrad");
        break;
    }
    case 10024:
    {
        returnValue = F("Am Afelskreuz");
        break;
    }
    case 10025:
    {
        returnValue = F("Am Affenberg");
        break;
    }
    case 10026:
    {
        returnValue = F("Am Afferder Mühlbach");
        break;
    }
    case 10027:
    {
        returnValue = F("Am Affinger Bach");
        break;
    }
    case 10028:
    {
        returnValue = F("Am Aggerberg");
        break;
    }
    case 10029:
    {
        returnValue = F("Am Aggerbogen");
        break;
    }
    case 10030:
    {
        returnValue = F("Am Aggersteg");
        break;
    }
    case 10031:
    {
        returnValue = F("Am Agnesfeld");
        break;
    }
    case 10032:
    {
        returnValue = F("Am Agnetenhof");
        break;
    }
    case 10033:
    {
        returnValue = F("Am Agrarmuseum");
        break;
    }
    case 10034:
    {
        returnValue = F("Am Ahbach");
        break;
    }
    case 10035:
    {
        returnValue = F("Am Ahebach");
        break;
    }
    case 10036:
    {
        returnValue = F("Am Ahl");
        break;
    }
    case 10037:
    {
        returnValue = F("Am Ahlberg");
        break;
    }
    case 10038:
    {
        returnValue = F("Am Ahlborn");
        break;
    }
    case 10039:
    {
        returnValue = F("Am Ahlersgraben");
        break;
    }
    case 10040:
    {
        returnValue = F("Am Ahlmannkai");
        break;
    }
    case 10041:
    {
        returnValue = F("Am Ahlsberg");
        break;
    }
    case 10042:
    {
        returnValue = F("Am Ahmerkamp");
        break;
    }
    case 10043:
    {
        returnValue = F("Am Ahnenberg");
        break;
    }
    case 10044:
    {
        returnValue = F("Am Ahnenplatz");
        break;
    }
    case 10045:
    {
        returnValue = F("Am Ahorn");
        break;
    }
    case 10046:
    {
        returnValue = F("Am Ahornbachel");
        break;
    }
    case 10047:
    {
        returnValue = F("Am Ahorneck");
        break;
    }
    case 10048:
    {
        returnValue = F("Am Ahornhof");
        break;
    }
    case 10049:
    {
        returnValue = F("Am Ahornplatz");
        break;
    }
    case 10050:
    {
        returnValue = F("Am Ahornrain");
        break;
    }
    case 10051:
    {
        returnValue = F("Am Ahornring");
        break;
    }
    case 10052:
    {
        returnValue = F("Am Ahornstich");
        break;
    }
    case 10053:
    {
        returnValue = F("Am Ahornweg");
        break;
    }
    case 10054:
    {
        returnValue = F("Am Ahrbach");
        break;
    }
    case 10055:
    {
        returnValue = F("Am Ahrberg");
        break;
    }
    case 10056:
    {
        returnValue = F("Am Ahrenbach");
        break;
    }
    case 10057:
    {
        returnValue = F("Am Ahrenberge");
        break;
    }
    case 10058:
    {
        returnValue = F("Am Ahrendfeld");
        break;
    }
    case 10059:
    {
        returnValue = F("Am Ahrendsberg");
        break;
    }
    case 10060:
    {
        returnValue = F("Am Ahrenfeld");
        break;
    }
    case 10061:
    {
        returnValue = F("Am Ahrensberg");
        break;
    }
    case 10062:
    {
        returnValue = F("Am Ahrensberge");
        break;
    }
    case 10063:
    {
        returnValue = F("Am Ahrensbraken");
        break;
    }
    case 10064:
    {
        returnValue = F("Am Ahrensbusch");
        break;
    }
    case 10065:
    {
        returnValue = F("Am Ahrensdorfer Bahnhof");
        break;
    }
    case 10066:
    {
        returnValue = F("Am Ahrensfeld");
        break;
    }
    case 10067:
    {
        returnValue = F("Am Ahrenstein");
        break;
    }
    case 10068:
    {
        returnValue = F("Am Aichbach");
        break;
    }
    case 10069:
    {
        returnValue = F("Am Aichberg");
        break;
    }
    case 10070:
    {
        returnValue = F("Am Aichen");
        break;
    }
    case 10071:
    {
        returnValue = F("Am Aichetholz");
        break;
    }
    case 10072:
    {
        returnValue = F("Am Aichig");
        break;
    }
    case 10073:
    {
        returnValue = F("Am Aichinger Feld");
        break;
    }
    case 10074:
    {
        returnValue = F("Am Aigen");
        break;
    }
    case 10075:
    {
        returnValue = F("Am Aigreplatz");
        break;
    }
    case 10076:
    {
        returnValue = F("Am Airpark");
        break;
    }
    case 10077:
    {
        returnValue = F("Am Airport");
        break;
    }
    case 10078:
    {
        returnValue = F("Am Aischbach");
        break;
    }
    case 10079:
    {
        returnValue = F("Am Aischpark");
        break;
    }
    case 10080:
    {
        returnValue = F("Am Aisinger Moos");
        break;
    }
    case 10081:
    {
        returnValue = F("Am Aispach");
        break;
    }
    case 10082:
    {
        returnValue = F("Am Akazienbusch");
        break;
    }
    case 10083:
    {
        returnValue = F("Am Akazienplatz");
        break;
    }
    case 10084:
    {
        returnValue = F("Am Akazienschlag");
        break;
    }
    case 10085:
    {
        returnValue = F("Am Akazienweg");
        break;
    }
    case 10086:
    {
        returnValue = F("Am Aktiengarten");
        break;
    }
    case 10087:
    {
        returnValue = F("Am Aktienhof");
        break;
    }
    case 10088:
    {
        returnValue = F("Am Aktienwald");
        break;
    }
    case 10089:
    {
        returnValue = F("Am Akzisenrain");
        break;
    }
    case 10090:
    {
        returnValue = F("Am Alamannenfeld");
        break;
    }
    case 10091:
    {
        returnValue = F("Am Alatsee");
        break;
    }
    case 10092:
    {
        returnValue = F("Am Albanusweinberg");
        break;
    }
    case 10093:
    {
        returnValue = F("Am Albblick");
        break;
    }
    case 10094:
    {
        returnValue = F("Am Albergätter");
        break;
    }
    case 10095:
    {
        returnValue = F("Am Alberichsberg");
        break;
    }
    case 10096:
    {
        returnValue = F("Am Albersbach");
        break;
    }
    case 10097:
    {
        returnValue = F("Am Albertsberg");
        break;
    }
    case 10098:
    {
        returnValue = F("Am Albertsbrunnen");
        break;
    }
    case 10099:
    {
        returnValue = F("Am Albertschacht");
        break;
    }
    case 10100:
    {
        returnValue = F("Am Albhang");
        break;
    }
    case 10101:
    {
        returnValue = F("Am Albrechtsbach");
        break;
    }
    case 10102:
    {
        returnValue = F("Am Albstein");
        break;
    }
    case 10103:
    {
        returnValue = F("Am Albtrauf");
        break;
    }
    case 10104:
    {
        returnValue = F("Am Alcher Berg");
        break;
    }
    case 10105:
    {
        returnValue = F("Am Aldenhovener Weg");
        break;
    }
    case 10106:
    {
        returnValue = F("Am Aldenkampshof");
        break;
    }
    case 10107:
    {
        returnValue = F("Am Alefeldchen");
        break;
    }
    case 10108:
    {
        returnValue = F("Am Alemaniaplatz");
        break;
    }
    case 10109:
    {
        returnValue = F("Am Alemannenbuck");
        break;
    }
    case 10110:
    {
        returnValue = F("Am Alenberg");
        break;
    }
    case 10111:
    {
        returnValue = F("Am Alertsberg");
        break;
    }
    case 10112:
    {
        returnValue = F("Am Aletshauser Weg");
        break;
    }
    case 10113:
    {
        returnValue = F("Am Alexanderplatz");
        break;
    }
    case 10114:
    {
        returnValue = F("Am Aliserbett");
        break;
    }
    case 10115:
    {
        returnValue = F("Am Alkenbach");
        break;
    }
    case 10116:
    {
        returnValue = F("Am Alkenrain");
        break;
    }
    case 10117:
    {
        returnValue = F("Am Alkun");
        break;
    }
    case 10118:
    {
        returnValue = F("Am Allbusch");
        break;
    }
    case 10119:
    {
        returnValue = F("Am Allebach");
        break;
    }
    case 10120:
    {
        returnValue = F("Am Alleesaal");
        break;
    }
    case 10121:
    {
        returnValue = F("Am Allemannsberg");
        break;
    }
    case 10122:
    {
        returnValue = F("Am Allen");
        break;
    }
    case 10123:
    {
        returnValue = F("Am Allenberg");
        break;
    }
    case 10124:
    {
        returnValue = F("Am Allenricht");
        break;
    }
    case 10125:
    {
        returnValue = F("Am Aller");
        break;
    }
    case 10126:
    {
        returnValue = F("Am Allerbeek");
        break;
    }
    case 10127:
    {
        returnValue = F("Am Allerberg");
        break;
    }
    case 10128:
    {
        returnValue = F("Am Allerbusch");
        break;
    }
    case 10129:
    {
        returnValue = F("Am Allerdamm");
        break;
    }
    case 10130:
    {
        returnValue = F("Am Allerhang");
        break;
    }
    case 10131:
    {
        returnValue = F("Am Allerheiligenberg");
        break;
    }
    case 10132:
    {
        returnValue = F("Am Allerholz");
        break;
    }
    case 10133:
    {
        returnValue = F("Am Allerkanal");
        break;
    }
    case 10134:
    {
        returnValue = F("Am Allermoor");
        break;
    }
    case 10135:
    {
        returnValue = F("Am Allernkamp");
        break;
    }
    case 10136:
    {
        returnValue = F("Am Allersbach");
        break;
    }
    case 10137:
    {
        returnValue = F("Am Allerswald");
        break;
    }
    case 10138:
    {
        returnValue = F("Am Allerufer");
        break;
    }
    case 10139:
    {
        returnValue = F("Am Alleweg");
        break;
    }
    case 10140:
    {
        returnValue = F("Am Allhagen");
        break;
    }
    case 10141:
    {
        returnValue = F("Am Allmai");
        break;
    }
    case 10142:
    {
        returnValue = F("Am Allstedter Gleis");
        break;
    }
    case 10143:
    {
        returnValue = F("Am Almberg");
        break;
    }
    case 10144:
    {
        returnValue = F("Am Almehang");
        break;
    }
    case 10145:
    {
        returnValue = F("Am Almerfeld");
        break;
    }
    case 10146:
    {
        returnValue = F("Am Almeshofen");
        break;
    }
    case 10147:
    {
        returnValue = F("Am Almrausch");
        break;
    }
    case 10148:
    {
        returnValue = F("Am Aloisius");
        break;
    }
    case 10149:
    {
        returnValue = F("Am Alpenblick");
        break;
    }
    case 10150:
    {
        returnValue = F("Am Alpengarten");
        break;
    }
    case 10151:
    {
        returnValue = F("Am Alpenkamp");
        break;
    }
    case 10152:
    {
        returnValue = F("Am Alperbach");
        break;
    }
    case 10153:
    {
        returnValue = F("Am Alpersberg");
        break;
    }
    case 10154:
    {
        returnValue = F("Am Alpinersteig");
        break;
    }
    case 10155:
    {
        returnValue = F("Am Alsbach");
        break;
    }
    case 10156:
    {
        returnValue = F("Am Alsbachberg");
        break;
    }
    case 10157:
    {
        returnValue = F("Am Alsberg");
        break;
    }
    case 10158:
    {
        returnValue = F("Am Alsenplatz");
        break;
    }
    case 10159:
    {
        returnValue = F("Am Alsenzer Weg");
        break;
    }
    case 10160:
    {
        returnValue = F("Am Alsterbach");
        break;
    }
    case 10161:
    {
        returnValue = F("Am Alsterberg");
        break;
    }
    case 10162:
    {
        returnValue = F("Am Alstergrund");
        break;
    }
    case 10163:
    {
        returnValue = F("Am Alt Bleyener Deich");
        break;
    }
    case 10164:
    {
        returnValue = F("Am Altanger");
        break;
    }
    case 10165:
    {
        returnValue = F("Am Altarm");
        break;
    }
    case 10166:
    {
        returnValue = F("Am Altbach");
        break;
    }
    case 10167:
    {
        returnValue = F("Am Altbecker");
        break;
    }
    case 10168:
    {
        returnValue = F("Am Altberg");
        break;
    }
    case 10169:
    {
        returnValue = F("Am Altdorfer See");
        break;
    }
    case 10170:
    {
        returnValue = F("Am Alten Acker");
        break;
    }
    case 10171:
    {
        returnValue = F("Am Alten Alsterkanal");
        break;
    }
    case 10172:
    {
        returnValue = F("Am Alten Amt");
        break;
    }
    case 10173:
    {
        returnValue = F("Am Alten Amtsgericht");
        break;
    }
    case 10174:
    {
        returnValue = F("Am Alten Anger");
        break;
    }
    case 10175:
    {
        returnValue = F("Am Alten Apothekergarten");
        break;
    }
    case 10176:
    {
        returnValue = F("Am Alten Auearm");
        break;
    }
    case 10177:
    {
        returnValue = F("Am Alten Bach");
        break;
    }
    case 10178:
    {
        returnValue = F("Am Alten Backhaus");
        break;
    }
    case 10179:
    {
        returnValue = F("Am Alten Bad");
        break;
    }
    case 10180:
    {
        returnValue = F("Am Alten Bahndamm");
        break;
    }
    case 10181:
    {
        returnValue = F("Am Alten Bahnhof");
        break;
    }
    case 10182:
    {
        returnValue = F("Am Alten Bann");
        break;
    }
    case 10183:
    {
        returnValue = F("Am Alten Bassin");
        break;
    }
    case 10184:
    {
        returnValue = F("Am Alten Bauhof");
        break;
    }
    case 10185:
    {
        returnValue = F("Am Alten Beckhof");
        break;
    }
    case 10186:
    {
        returnValue = F("Am Alten Berg");
        break;
    }
    case 10187:
    {
        returnValue = F("Am Alten Berge");
        break;
    }
    case 10188:
    {
        returnValue = F("Am Alten Bierkeller");
        break;
    }
    case 10189:
    {
        returnValue = F("Am Alten Birnbaum");
        break;
    }
    case 10190:
    {
        returnValue = F("Am Alten Born");
        break;
    }
    case 10191:
    {
        returnValue = F("Am Alten Braken");
        break;
    }
    case 10192:
    {
        returnValue = F("Am Alten Brande");
        break;
    }
    case 10193:
    {
        returnValue = F("Am Alten Brauhaus");
        break;
    }
    case 10194:
    {
        returnValue = F("Am Alten Brennhaus");
        break;
    }
    case 10195:
    {
        returnValue = F("Am Alten Broich");
        break;
    }
    case 10196:
    {
        returnValue = F("Am Alten Brunnen");
        break;
    }
    case 10197:
    {
        returnValue = F("Am Alten Burghof");
        break;
    }
    case 10198:
    {
        returnValue = F("Am Alten Busch");
        break;
    }
    case 10199:
    {
        returnValue = F("Am Alten Butzen");
        break;
    }
    case 10200:
    {
        returnValue = F("Am Alten Celluloidwerk");
        break;
    }
    case 10201:
    {
        returnValue = F("Am Alten Deich");
        break;
    }
    case 10202:
    {
        returnValue = F("Am Alten Depot");
        break;
    }
    case 10203:
    {
        returnValue = F("Am Alten Diek");
        break;
    }
    case 10204:
    {
        returnValue = F("Am Alten Dillufer");
        break;
    }
    case 10205:
    {
        returnValue = F("Am Alten Dorf");
        break;
    }
    case 10206:
    {
        returnValue = F("Am Alten Dorfgraben");
        break;
    }
    case 10207:
    {
        returnValue = F("Am Alten Dorfteich");
        break;
    }
    case 10208:
    {
        returnValue = F("Am Alten Dorfweiher");
        break;
    }
    case 10209:
    {
        returnValue = F("Am Alten Dreisch");
        break;
    }
    case 10210:
    {
        returnValue = F("Am Alten Dreschplatz");
        break;
    }
    case 10211:
    {
        returnValue = F("Am Alten E-Werk");
        break;
    }
    case 10212:
    {
        returnValue = F("Am Alten Eisenwerk");
        break;
    }
    case 10213:
    {
        returnValue = F("Am Alten Eisplatz");
        break;
    }
    case 10214:
    {
        returnValue = F("Am Alten Feld");
        break;
    }
    case 10215:
    {
        returnValue = F("Am Alten Feldchen");
        break;
    }
    case 10216:
    {
        returnValue = F("Am Alten Festplatz");
        break;
    }
    case 10217:
    {
        returnValue = F("Am Alten Feuerwehrhaus");
        break;
    }
    case 10218:
    {
        returnValue = F("Am Alten Fließ");
        break;
    }
    case 10219:
    {
        returnValue = F("Am Alten Flugfeld");
        break;
    }
    case 10220:
    {
        returnValue = F("Am Alten Flughafen");
        break;
    }
    case 10221:
    {
        returnValue = F("Am Alten Flugplatz");
        break;
    }
    case 10222:
    {
        returnValue = F("Am Alten Flöz");
        break;
    }
    case 10223:
    {
        returnValue = F("Am Alten Forsthaus");
        break;
    }
    case 10224:
    {
        returnValue = F("Am Alten Forsthof");
        break;
    }
    case 10225:
    {
        returnValue = F("Am Alten Freibad");
        break;
    }
    case 10226:
    {
        returnValue = F("Am Alten Freyhof");
        break;
    }
    case 10227:
    {
        returnValue = F("Am Alten Friedhof");
        break;
    }
    case 10228:
    {
        returnValue = F("Am Alten Friesoyther Kanal");
        break;
    }
    case 10229:
    {
        returnValue = F("Am Alten Fuhrweg");
        break;
    }
    case 10230:
    {
        returnValue = F("Am Alten Fährhaus");
        break;
    }
    case 10231:
    {
        returnValue = F("Am Alten Galgen");
        break;
    }
    case 10232:
    {
        returnValue = F("Am Alten Garten");
        break;
    }
    case 10233:
    {
        returnValue = F("Am Alten Gaswerk");
        break;
    }
    case 10234:
    {
        returnValue = F("Am Alten Gehau");
        break;
    }
    case 10235:
    {
        returnValue = F("Am Alten General");
        break;
    }
    case 10236:
    {
        returnValue = F("Am Alten Gerauer Weg");
        break;
    }
    case 10237:
    {
        returnValue = F("Am Alten Gericht");
        break;
    }
    case 10238:
    {
        returnValue = F("Am Alten Gestüt");
        break;
    }
    case 10239:
    {
        returnValue = F("Am Alten Glockenturm");
        break;
    }
    case 10240:
    {
        returnValue = F("Am Alten Gothaer Weg");
        break;
    }
    case 10241:
    {
        returnValue = F("Am Alten Graben");
        break;
    }
    case 10242:
    {
        returnValue = F("Am Alten Grenzgraben");
        break;
    }
    case 10243:
    {
        returnValue = F("Am Alten Gut");
        break;
    }
    case 10244:
    {
        returnValue = F("Am Alten Gutshof");
        break;
    }
    case 10245:
    {
        returnValue = F("Am Alten Gymnasium");
        break;
    }
    case 10246:
    {
        returnValue = F("Am Alten Güterbahnhof");
        break;
    }
    case 10247:
    {
        returnValue = F("Am Alten Güterboden");
        break;
    }
    case 10248:
    {
        returnValue = F("Am Alten Haagweg");
        break;
    }
    case 10249:
    {
        returnValue = F("Am Alten Hafen");
        break;
    }
    case 10250:
    {
        returnValue = F("Am Alten Hahn");
        break;
    }
    case 10251:
    {
        returnValue = F("Am Alten Hammer");
        break;
    }
    case 10252:
    {
        returnValue = F("Am Alten Handelsplatz");
        break;
    }
    case 10253:
    {
        returnValue = F("Am Alten Heck");
        break;
    }
    case 10254:
    {
        returnValue = F("Am Alten Hellweg");
        break;
    }
    case 10255:
    {
        returnValue = F("Am Alten Hestern");
        break;
    }
    case 10256:
    {
        returnValue = F("Am Alten Hof");
        break;
    }
    case 10257:
    {
        returnValue = F("Am Alten Hofe");
        break;
    }
    case 10258:
    {
        returnValue = F("Am Alten Horn");
        break;
    }
    case 10259:
    {
        returnValue = F("Am Alten Hospital");
        break;
    }
    case 10260:
    {
        returnValue = F("Am Alten Hügel");
        break;
    }
    case 10261:
    {
        returnValue = F("Am Alten Jagdstern");
        break;
    }
    case 10262:
    {
        returnValue = F("Am Alten Kabelwerk");
        break;
    }
    case 10263:
    {
        returnValue = F("Am Alten Kalkwerk");
        break;
    }
    case 10264:
    {
        returnValue = F("Am Alten Kamp");
        break;
    }
    case 10265:
    {
        returnValue = F("Am Alten Kanal");
        break;
    }
    case 10266:
    {
        returnValue = F("Am Alten Keller");
        break;
    }
    case 10267:
    {
        returnValue = F("Am Alten Kirchenpfad");
        break;
    }
    case 10268:
    {
        returnValue = F("Am Alten Kirchenweg");
        break;
    }
    case 10269:
    {
        returnValue = F("Am Alten Kirchhof");
        break;
    }
    case 10270:
    {
        returnValue = F("Am Alten Kirchplatz");
        break;
    }
    case 10271:
    {
        returnValue = F("Am Alten Kirchsteig");
        break;
    }
    case 10272:
    {
        returnValue = F("Am Alten Kirchweg");
        break;
    }
    case 10273:
    {
        returnValue = F("Am Alten Kloster");
        break;
    }
    case 10274:
    {
        returnValue = F("Am Alten Klärwerk");
        break;
    }
    case 10275:
    {
        returnValue = F("Am Alten Knapp");
        break;
    }
    case 10276:
    {
        returnValue = F("Am Alten Kostheimer Weg");
        break;
    }
    case 10277:
    {
        returnValue = F("Am Alten Krankenhaus");
        break;
    }
    case 10278:
    {
        returnValue = F("Am Alten Kreishaus");
        break;
    }
    case 10279:
    {
        returnValue = F("Am Alten Kreuz");
        break;
    }
    case 10280:
    {
        returnValue = F("Am Alten Krug");
        break;
    }
    case 10281:
    {
        returnValue = F("Am Alten Kurbad");
        break;
    }
    case 10282:
    {
        returnValue = F("Am Alten Kurpark");
        break;
    }
    case 10283:
    {
        returnValue = F("Am Alten Königsweg");
        break;
    }
    case 10284:
    {
        returnValue = F("Am Alten Lager");
        break;
    }
    case 10285:
    {
        returnValue = F("Am Alten Land");
        break;
    }
    case 10286:
    {
        returnValue = F("Am Alten Landratsamt");
        break;
    }
    case 10287:
    {
        returnValue = F("Am Alten Landweg");
        break;
    }
    case 10288:
    {
        returnValue = F("Am Alten Leuchtfeuer");
        break;
    }
    case 10289:
    {
        returnValue = F("Am Alten Limes");
        break;
    }
    case 10290:
    {
        returnValue = F("Am Alten Lindenwald");
        break;
    }
    case 10291:
    {
        returnValue = F("Am Alten Lokschuppen");
        break;
    }
    case 10292:
    {
        returnValue = F("Am Alten Maar");
        break;
    }
    case 10293:
    {
        returnValue = F("Am Alten Malzhaus");
        break;
    }
    case 10294:
    {
        returnValue = F("Am Alten Marinehafen");
        break;
    }
    case 10295:
    {
        returnValue = F("Am Alten Markt");
        break;
    }
    case 10296:
    {
        returnValue = F("Am Alten Marstall");
        break;
    }
    case 10297:
    {
        returnValue = F("Am Alten Meßplatz");
        break;
    }
    case 10298:
    {
        returnValue = F("Am Alten Moor");
        break;
    }
    case 10299:
    {
        returnValue = F("Am Alten Mühlberge");
        break;
    }
    case 10300:
    {
        returnValue = F("Am Alten Mühlenbach");
        break;
    }
    case 10301:
    {
        returnValue = F("Am Alten Mühlenberg");
        break;
    }
    case 10302:
    {
        returnValue = F("Am Alten Mühlgraben");
        break;
    }
    case 10303:
    {
        returnValue = F("Am Alten Neckarbett");
        break;
    }
    case 10304:
    {
        returnValue = F("Am Alten Neckarufer");
        break;
    }
    case 10305:
    {
        returnValue = F("Am Alten Nordkanal");
        break;
    }
    case 10306:
    {
        returnValue = F("Am Alten Obstgarten");
        break;
    }
    case 10307:
    {
        returnValue = F("Am Alten Ortsdamm");
        break;
    }
    case 10308:
    {
        returnValue = F("Am Alten Osthofener Weg");
        break;
    }
    case 10309:
    {
        returnValue = F("Am Alten Park");
        break;
    }
    case 10310:
    {
        returnValue = F("Am Alten Pastorat");
        break;
    }
    case 10311:
    {
        returnValue = F("Am Alten Pfarrhaus");
        break;
    }
    case 10312:
    {
        returnValue = F("Am Alten Pfarrhof");
        break;
    }
    case 10313:
    {
        returnValue = F("Am Alten Pflaster");
        break;
    }
    case 10314:
    {
        returnValue = F("Am Alten Posthof");
        break;
    }
    case 10315:
    {
        returnValue = F("Am Alten Postweg");
        break;
    }
    case 10316:
    {
        returnValue = F("Am Alten Pulverschuppen");
        break;
    }
    case 10317:
    {
        returnValue = F("Am Alten Pütt");
        break;
    }
    case 10318:
    {
        returnValue = F("Am Alten Rain");
        break;
    }
    case 10319:
    {
        returnValue = F("Am Alten Rasen");
        break;
    }
    case 10320:
    {
        returnValue = F("Am Alten Rathaus");
        break;
    }
    case 10321:
    {
        returnValue = F("Am Alten Rathausbogen");
        break;
    }
    case 10322:
    {
        returnValue = F("Am Alten Raunheimer Weg");
        break;
    }
    case 10323:
    {
        returnValue = F("Am Alten Reitplatz");
        break;
    }
    case 10324:
    {
        returnValue = F("Am Alten Riefensbeek");
        break;
    }
    case 10325:
    {
        returnValue = F("Am Alten Rodenberg");
        break;
    }
    case 10326:
    {
        returnValue = F("Am Alten Römerpfad");
        break;
    }
    case 10327:
    {
        returnValue = F("Am Alten Salzwerk");
        break;
    }
    case 10328:
    {
        returnValue = F("Am Alten Schacht");
        break;
    }
    case 10329:
    {
        returnValue = F("Am Alten Schafstall");
        break;
    }
    case 10330:
    {
        returnValue = F("Am Alten Schießplatz");
        break;
    }
    case 10331:
    {
        returnValue = F("Am Alten Schießstand");
        break;
    }
    case 10332:
    {
        returnValue = F("Am Alten Schlachthof");
        break;
    }
    case 10333:
    {
        returnValue = F("Am Alten Schlag");
        break;
    }
    case 10334:
    {
        returnValue = F("Am Alten Schlagbaum");
        break;
    }
    case 10335:
    {
        returnValue = F("Am Alten Schleizer Weg");
        break;
    }
    case 10336:
    {
        returnValue = F("Am Alten Schloss");
        break;
    }
    case 10337:
    {
        returnValue = F("Am Alten Schloß");
        break;
    }
    case 10338:
    {
        returnValue = F("Am Alten Schulgarten");
        break;
    }
    case 10339:
    {
        returnValue = F("Am Alten Schulhaus");
        break;
    }
    case 10340:
    {
        returnValue = F("Am Alten Schulplatz");
        break;
    }
    case 10341:
    {
        returnValue = F("Am Alten Schulsportplatz");
        break;
    }
    case 10342:
    {
        returnValue = F("Am Alten Schulweg");
        break;
    }
    case 10343:
    {
        returnValue = F("Am Alten Schutzdeich");
        break;
    }
    case 10344:
    {
        returnValue = F("Am Alten Schwimmbad");
        break;
    }
    case 10345:
    {
        returnValue = F("Am Alten Schützenhof");
        break;
    }
    case 10346:
    {
        returnValue = F("Am Alten Schützenplatz");
        break;
    }
    case 10347:
    {
        returnValue = F("Am Alten See");
        break;
    }
    case 10348:
    {
        returnValue = F("Am Alten Seedeich");
        break;
    }
    case 10349:
    {
        returnValue = F("Am Alten Siel");
        break;
    }
    case 10350:
    {
        returnValue = F("Am Alten Sod");
        break;
    }
    case 10351:
    {
        returnValue = F("Am Alten Speicher");
        break;
    }
    case 10352:
    {
        returnValue = F("Am Alten Spielplatz");
        break;
    }
    case 10353:
    {
        returnValue = F("Am Alten Spitz");
        break;
    }
    case 10354:
    {
        returnValue = F("Am Alten Sportplatz");
        break;
    }
    case 10355:
    {
        returnValue = F("Am Alten Spritzenhaus");
        break;
    }
    case 10356:
    {
        returnValue = F("Am Alten Stadion");
        break;
    }
    case 10357:
    {
        returnValue = F("Am Alten Stadtgraben");
        break;
    }
    case 10358:
    {
        returnValue = F("Am Alten Stadtpark");
        break;
    }
    case 10359:
    {
        returnValue = F("Am Alten Stadtplatz");
        break;
    }
    case 10360:
    {
        returnValue = F("Am Alten Stadtweg");
        break;
    }
    case 10361:
    {
        returnValue = F("Am Alten Stahlbergschacht");
        break;
    }
    case 10362:
    {
        returnValue = F("Am Alten Stauwehr");
        break;
    }
    case 10363:
    {
        returnValue = F("Am Alten Steinbruch");
        break;
    }
    case 10364:
    {
        returnValue = F("Am Alten Steinhaus");
        break;
    }
    case 10365:
    {
        returnValue = F("Am Alten Stellwerk");
        break;
    }
    case 10366:
    {
        returnValue = F("Am Alten Stolberg");
        break;
    }
    case 10367:
    {
        returnValue = F("Am Alten Strom");
        break;
    }
    case 10368:
    {
        returnValue = F("Am Alten Stück");
        break;
    }
    case 10369:
    {
        returnValue = F("Am Alten Sägewerk");
        break;
    }
    case 10370:
    {
        returnValue = F("Am Alten Sägwerk");
        break;
    }
    case 10371:
    {
        returnValue = F("Am Alten Südbahnhof");
        break;
    }
    case 10372:
    {
        returnValue = F("Am Alten Teich");
        break;
    }
    case 10373:
    {
        returnValue = F("Am Alten Tennisplatz");
        break;
    }
    case 10374:
    {
        returnValue = F("Am Alten Theater");
        break;
    }
    case 10375:
    {
        returnValue = F("Am Alten Tief");
        break;
    }
    case 10376:
    {
        returnValue = F("Am Alten Tor");
        break;
    }
    case 10377:
    {
        returnValue = F("Am Alten Tore");
        break;
    }
    case 10378:
    {
        returnValue = F("Am Alten Turm");
        break;
    }
    case 10379:
    {
        returnValue = F("Am Alten Turnplatz");
        break;
    }
    case 10380:
    {
        returnValue = F("Am Alten Umspannwerk");
        break;
    }
    case 10381:
    {
        returnValue = F("Am Alten Versuchsfeld");
        break;
    }
    case 10382:
    {
        returnValue = F("Am Alten Viadukt");
        break;
    }
    case 10383:
    {
        returnValue = F("Am Alten Viehmarkt");
        break;
    }
    case 10384:
    {
        returnValue = F("Am Alten Vorhafen");
        break;
    }
    case 10385:
    {
        returnValue = F("Am Alten Vorwerk");
        break;
    }
    case 10386:
    {
        returnValue = F("Am Alten Wahlbrink");
        break;
    }
    case 10387:
    {
        returnValue = F("Am Alten Waldschlösschen");
        break;
    }
    case 10388:
    {
        returnValue = F("Am Alten Wall");
        break;
    }
    case 10389:
    {
        returnValue = F("Am Alten Walzwerk");
        break;
    }
    case 10390:
    {
        returnValue = F("Am Alten Wasserhaus");
        break;
    }
    case 10391:
    {
        returnValue = F("Am Alten Wasserturm");
        break;
    }
    case 10392:
    {
        returnValue = F("Am Alten Wasserwerk");
        break;
    }
    case 10393:
    {
        returnValue = F("Am Alten Weg");
        break;
    }
    case 10394:
    {
        returnValue = F("Am Alten Wehr");
        break;
    }
    case 10395:
    {
        returnValue = F("Am Alten Wehrturm");
        break;
    }
    case 10396:
    {
        returnValue = F("Am Alten Weiher");
        break;
    }
    case 10397:
    {
        returnValue = F("Am Alten Weinberg");
        break;
    }
    case 10398:
    {
        returnValue = F("Am Alten Weinheimer Weg");
        break;
    }
    case 10399:
    {
        returnValue = F("Am Alten Werk");
        break;
    }
    case 10400:
    {
        returnValue = F("Am Alten Wiesenbach");
        break;
    }
    case 10401:
    {
        returnValue = F("Am Alten Windrad");
        break;
    }
    case 10402:
    {
        returnValue = F("Am Alten Wingert");
        break;
    }
    case 10403:
    {
        returnValue = F("Am Alten Wirtsfeld");
        break;
    }
    case 10404:
    {
        returnValue = F("Am Alten Wolf");
        break;
    }
    case 10405:
    {
        returnValue = F("Am Alten Zimmerplatz");
        break;
    }
    case 10406:
    {
        returnValue = F("Am Alten Zoll");
        break;
    }
    case 10407:
    {
        returnValue = F("Am Alten Zollamt");
        break;
    }
    case 10408:
    {
        returnValue = F("Am Alten Zollhaus");
        break;
    }
    case 10409:
    {
        returnValue = F("Am Alten Ämmerle");
        break;
    }
    case 10410:
    {
        returnValue = F("Am Altenacker");
        break;
    }
    case 10411:
    {
        returnValue = F("Am Altenaugraben");
        break;
    }
    case 10412:
    {
        returnValue = F("Am Altenbach");
        break;
    }
    case 10413:
    {
        returnValue = F("Am Altenbaum");
        break;
    }
    case 10414:
    {
        returnValue = F("Am Altenberg");
        break;
    }
    case 10415:
    {
        returnValue = F("Am Altenbruch");
        break;
    }
    case 10416:
    {
        returnValue = F("Am Altenbrucher Markt");
        break;
    }
    case 10417:
    {
        returnValue = F("Am Altenbrücker Ziegelhof");
        break;
    }
    case 10418:
    {
        returnValue = F("Am Altendeich");
        break;
    }
    case 10419:
    {
        returnValue = F("Am Altendorfer Berg");
        break;
    }
    case 10420:
    {
        returnValue = F("Am Altenfelder Kreuz");
        break;
    }
    case 10421:
    {
        returnValue = F("Am Altenfeldsdeich");
        break;
    }
    case 10422:
    {
        returnValue = F("Am Altengarten");
        break;
    }
    case 10423:
    {
        returnValue = F("Am Altengraben");
        break;
    }
    case 10424:
    {
        returnValue = F("Am Altenheim");
        break;
    }
    case 10425:
    {
        returnValue = F("Am Altenhof");
        break;
    }
    case 10426:
    {
        returnValue = F("Am Altenkamp");
        break;
    }
    case 10427:
    {
        returnValue = F("Am Altenlande");
        break;
    }
    case 10428:
    {
        returnValue = F("Am Altenoer Weg");
        break;
    }
    case 10429:
    {
        returnValue = F("Am Altenrain");
        break;
    }
    case 10430:
    {
        returnValue = F("Am Altenrod");
        break;
    }
    case 10431:
    {
        returnValue = F("Am Altenroth");
        break;
    }
    case 10432:
    {
        returnValue = F("Am Altensberg");
        break;
    }
    case 10433:
    {
        returnValue = F("Am Altensee");
        break;
    }
    case 10434:
    {
        returnValue = F("Am Altensteg");
        break;
    }
    case 10435:
    {
        returnValue = F("Am Altenwalder Bahnhof");
        break;
    }
    case 10436:
    {
        returnValue = F("Am Altenweg");
        break;
    }
    case 10437:
    {
        returnValue = F("Am Altenweiher");
        break;
    }
    case 10438:
    {
        returnValue = F("Am Altenwoog");
        break;
    }
    case 10439:
    {
        returnValue = F("Am Altenzentrum");
        break;
    }
    case 10440:
    {
        returnValue = F("Am Alter");
        break;
    }
    case 10441:
    {
        returnValue = F("Am Alteroth");
        break;
    }
    case 10442:
    {
        returnValue = F("Am Altersheim");
        break;
    }
    case 10443:
    {
        returnValue = F("Am Alterstedter Weg");
        break;
    }
    case 10444:
    {
        returnValue = F("Am Alterstein");
        break;
    }
    case 10445:
    {
        returnValue = F("Am Altewingert");
        break;
    }
    case 10446:
    {
        returnValue = F("Am Althausgarten");
        break;
    }
    case 10447:
    {
        returnValue = F("Am Altheimer Feld");
        break;
    }
    case 10448:
    {
        returnValue = F("Am Althäuser Weg");
        break;
    }
    case 10449:
    {
        returnValue = F("Am Altland");
        break;
    }
    case 10450:
    {
        returnValue = F("Am Altmerberg");
        break;
    }
    case 10451:
    {
        returnValue = F("Am Altmühlfeld");
        break;
    }
    case 10452:
    {
        returnValue = F("Am Altneckar");
        break;
    }
    case 10453:
    {
        returnValue = F("Am Altpörtel");
        break;
    }
    case 10454:
    {
        returnValue = F("Am Altrhein");
        break;
    }
    case 10455:
    {
        returnValue = F("Am Altrheinhafen");
        break;
    }
    case 10456:
    {
        returnValue = F("Am Altriper Schleim");
        break;
    }
    case 10457:
    {
        returnValue = F("Am Altrohlauer Platz");
        break;
    }
    case 10458:
    {
        returnValue = F("Am Altwasser");
        break;
    }
    case 10459:
    {
        returnValue = F("Am Altweg");
        break;
    }
    case 10460:
    {
        returnValue = F("Am Altwege");
        break;
    }
    case 10461:
    {
        returnValue = F("Am Altwoog");
        break;
    }
    case 10462:
    {
        returnValue = F("Am Altzberg");
        break;
    }
    case 10463:
    {
        returnValue = F("Am Altärchen");
        break;
    }
    case 10464:
    {
        returnValue = F("Am Alumnat");
        break;
    }
    case 10465:
    {
        returnValue = F("Am Alvensholz");
        break;
    }
    case 10466:
    {
        returnValue = F("Am Alzenköppel");
        break;
    }
    case 10467:
    {
        returnValue = F("Am Alzeyer Berg");
        break;
    }
    case 10468:
    {
        returnValue = F("Am Alzeyer Tor");
        break;
    }
    case 10469:
    {
        returnValue = F("Am Alzeyer Weg");
        break;
    }
    case 10470:
    {
        returnValue = F("Am Amalienbad");
        break;
    }
    case 10471:
    {
        returnValue = F("Am Amandusbach");
        break;
    }
    case 10472:
    {
        returnValue = F("Am Amazonenwerk");
        break;
    }
    case 10473:
    {
        returnValue = F("Am Ambetbrunnen");
        break;
    }
    case 10474:
    {
        returnValue = F("Am Amburger Berg");
        break;
    }
    case 10475:
    {
        returnValue = F("Am Ameisenacker");
        break;
    }
    case 10476:
    {
        returnValue = F("Am Ameisenberg");
        break;
    }
    case 10477:
    {
        returnValue = F("Am Ameisenbrunnen");
        break;
    }
    case 10478:
    {
        returnValue = F("Am Ameisenhübel");
        break;
    }
    case 10479:
    {
        returnValue = F("Am Ameisenhügel");
        break;
    }
    case 10480:
    {
        returnValue = F("Am Amelsberg");
        break;
    }
    case 10481:
    {
        returnValue = F("Am Amelungsbach");
        break;
    }
    case 10482:
    {
        returnValue = F("Am Ammelbach");
        break;
    }
    case 10483:
    {
        returnValue = F("Am Ammelgraben");
        break;
    }
    case 10484:
    {
        returnValue = F("Am Ammer");
        break;
    }
    case 10485:
    {
        returnValue = F("Am Ammerbach");
        break;
    }
    case 10486:
    {
        returnValue = F("Am Ammerbeek");
        break;
    }
    case 10487:
    {
        returnValue = F("Am Ammerfelde");
        break;
    }
    case 10488:
    {
        returnValue = F("Am Ammertal");
        break;
    }
    case 10489:
    {
        returnValue = F("Am Ammweiher");
        break;
    }
    case 10490:
    {
        returnValue = F("Am Amnger");
        break;
    }
    case 10491:
    {
        returnValue = F("Am Amorbach");
        break;
    }
    case 10492:
    {
        returnValue = F("Am Ampel");
        break;
    }
    case 10493:
    {
        returnValue = F("Am Amperberg");
        break;
    }
    case 10494:
    {
        returnValue = F("Am Amperkanal");
        break;
    }
    case 10495:
    {
        returnValue = F("Am Amperknie");
        break;
    }
    case 10496:
    {
        returnValue = F("Am Ampfrachgrund");
        break;
    }
    case 10497:
    {
        returnValue = F("Am Ampfurther Weg");
        break;
    }
    case 10498:
    {
        returnValue = F("Am Amphitheater");
        break;
    }
    case 10499:
    {
        returnValue = F("Am Amrichen Rasen");
        break;
    }
    case 10500:
    {
        returnValue = F("Am Amselberg");
        break;
    }
    case 10501:
    {
        returnValue = F("Am Amselhof");
        break;
    }
    case 10502:
    {
        returnValue = F("Am Amselsang");
        break;
    }
    case 10503:
    {
        returnValue = F("Am Amselstieg");
        break;
    }
    case 10504:
    {
        returnValue = F("Am Amselweg");
        break;
    }
    case 10505:
    {
        returnValue = F("Am Amsenhügel");
        break;
    }
    case 10506:
    {
        returnValue = F("Am Amtenstieg");
        break;
    }
    case 10507:
    {
        returnValue = F("Am Amtgarten");
        break;
    }
    case 10508:
    {
        returnValue = F("Am Amthof");
        break;
    }
    case 10509:
    {
        returnValue = F("Am Amtmannshof");
        break;
    }
    case 10510:
    {
        returnValue = F("Am Amtmannsteich");
        break;
    }
    case 10511:
    {
        returnValue = F("Am Amtsacker");
        break;
    }
    case 10512:
    {
        returnValue = F("Am Amtsberg");
        break;
    }
    case 10513:
    {
        returnValue = F("Am Amtsbrunnen");
        break;
    }
    case 10514:
    {
        returnValue = F("Am Amtsgarten");
        break;
    }
    case 10515:
    {
        returnValue = F("Am Amtsgericht");
        break;
    }
    case 10516:
    {
        returnValue = F("Am Amtsgraben");
        break;
    }
    case 10517:
    {
        returnValue = F("Am Amtshaus");
        break;
    }
    case 10518:
    {
        returnValue = F("Am Amtshof");
        break;
    }
    case 10519:
    {
        returnValue = F("Am Amtsholz");
        break;
    }
    case 10520:
    {
        returnValue = F("Am Amtssteinbruch");
        break;
    }
    case 10521:
    {
        returnValue = F("Am Amtsteich");
        break;
    }
    case 10522:
    {
        returnValue = F("Am Amtsweg");
        break;
    }
    case 10523:
    {
        returnValue = F("Am Amöneburger Tor");
        break;
    }
    case 10524:
    {
        returnValue = F("Am Anbau");
        break;
    }
    case 10525:
    {
        returnValue = F("Am Anberg");
        break;
    }
    case 10526:
    {
        returnValue = F("Am Andachtsplatz");
        break;
    }
    case 10527:
    {
        returnValue = F("Am Andelsbach");
        break;
    }
    case 10528:
    {
        returnValue = F("Am Andelsberg");
        break;
    }
    case 10529:
    {
        returnValue = F("Am Andreas Kloster");
        break;
    }
    case 10530:
    {
        returnValue = F("Am Andreasberg");
        break;
    }
    case 10531:
    {
        returnValue = F("Am Andreaskreuz");
        break;
    }
    case 10532:
    {
        returnValue = F("Am Andreastor");
        break;
    }
    case 10533:
    {
        returnValue = F("Am Anfall");
        break;
    }
    case 10534:
    {
        returnValue = F("Am Anfang");
        break;
    }
    case 10535:
    {
        returnValue = F("Am Angel");
        break;
    }
    case 10536:
    {
        returnValue = F("Am Angelbach");
        break;
    }
    case 10537:
    {
        returnValue = F("Am Angelhaken");
        break;
    }
    case 10538:
    {
        returnValue = F("Am Angelkamp");
        break;
    }
    case 10539:
    {
        returnValue = F("Am Angelsdorn");
        break;
    }
    case 10540:
    {
        returnValue = F("Am Angelteich");
        break;
    }
    case 10541:
    {
        returnValue = F("Am Angelweiher");
        break;
    }
    case 10542:
    {
        returnValue = F("Am Anger");
        break;
    }
    case 10543:
    {
        returnValue = F("Am Anger Dornbock");
        break;
    }
    case 10544:
    {
        returnValue = F("Am Angerbach");
        break;
    }
    case 10545:
    {
        returnValue = F("Am Angerberg");
        break;
    }
    case 10546:
    {
        returnValue = F("Am Angerfeld");
        break;
    }
    case 10547:
    {
        returnValue = F("Am Angergraben");
        break;
    }
    case 10548:
    {
        returnValue = F("Am Angerhof");
        break;
    }
    case 10549:
    {
        returnValue = F("Am Angerholz");
        break;
    }
    case 10550:
    {
        returnValue = F("Am Angerkamp");
        break;
    }
    case 10551:
    {
        returnValue = F("Am Angerl");
        break;
    }
    case 10552:
    {
        returnValue = F("Am Angerpark");
        break;
    }
    case 10553:
    {
        returnValue = F("Am Angerrain");
        break;
    }
    case 10554:
    {
        returnValue = F("Am Angersbach");
        break;
    }
    case 10555:
    {
        returnValue = F("Am Angerteich");
        break;
    }
    case 10556:
    {
        returnValue = F("Am Angertor");
        break;
    }
    case 10557:
    {
        returnValue = F("Am Angerweg");
        break;
    }
    case 10558:
    {
        returnValue = F("Am Angespann");
        break;
    }
    case 10559:
    {
        returnValue = F("Am Anglerheim");
        break;
    }
    case 10560:
    {
        returnValue = F("Am Anglerteich");
        break;
    }
    case 10561:
    {
        returnValue = F("Am Anhalt");
        break;
    }
    case 10562:
    {
        returnValue = F("Am Anhaltsberg");
        break;
    }
    case 10563:
    {
        returnValue = F("Am Anis");
        break;
    }
    case 10564:
    {
        returnValue = F("Am Ankeleberg");
        break;
    }
    case 10565:
    {
        returnValue = F("Am Anker");
        break;
    }
    case 10566:
    {
        returnValue = F("Am Ankerglasplatz");
        break;
    }
    case 10567:
    {
        returnValue = F("Am Ankerplatz");
        break;
    }
    case 10568:
    {
        returnValue = F("Am Anleger");
        break;
    }
    case 10569:
    {
        returnValue = F("Am Annaberg");
        break;
    }
    case 10570:
    {
        returnValue = F("Am Annafließ");
        break;
    }
    case 10571:
    {
        returnValue = F("Am Annagraben");
        break;
    }
    case 10572:
    {
        returnValue = F("Am Annahof");
        break;
    }
    case 10573:
    {
        returnValue = F("Am Annapark");
        break;
    }
    case 10574:
    {
        returnValue = F("Am Annaschacht");
        break;
    }
    case 10575:
    {
        returnValue = F("Am Annatal");
        break;
    }
    case 10576:
    {
        returnValue = F("Am Annaweiher");
        break;
    }
    case 10577:
    {
        returnValue = F("Am Annenberg");
        break;
    }
    case 10578:
    {
        returnValue = F("Am Annenhof");
        break;
    }
    case 10579:
    {
        returnValue = F("Am Annenried");
        break;
    }
    case 10580:
    {
        returnValue = F("Am Annonisbach");
        break;
    }
    case 10581:
    {
        returnValue = F("Am Anraths-Kendel");
        break;
    }
    case 10582:
    {
        returnValue = F("Am Anriß");
        break;
    }
    case 10583:
    {
        returnValue = F("Am Ansbach");
        break;
    }
    case 10584:
    {
        returnValue = F("Am Anscharpark");
        break;
    }
    case 10585:
    {
        returnValue = F("Am Anschenkel");
        break;
    }
    case 10586:
    {
        returnValue = F("Am Anschlag");
        break;
    }
    case 10587:
    {
        returnValue = F("Am Anschlußgleis");
        break;
    }
    case 10588:
    {
        returnValue = F("Am Ansgaribusch");
        break;
    }
    case 10589:
    {
        returnValue = F("Am Ansitz");
        break;
    }
    case 10590:
    {
        returnValue = F("Am Anspann");
        break;
    }
    case 10591:
    {
        returnValue = F("Am Anstand");
        break;
    }
    case 10592:
    {
        returnValue = F("Am Anstieg");
        break;
    }
    case 10593:
    {
        returnValue = F("Am Anthügel");
        break;
    }
    case 10594:
    {
        returnValue = F("Am Antoinettengarten");
        break;
    }
    case 10595:
    {
        returnValue = F("Am Antonifeld");
        break;
    }
    case 10596:
    {
        returnValue = F("Am Antoniushof");
        break;
    }
    case 10597:
    {
        returnValue = F("Am Antoniushügel");
        break;
    }
    case 10598:
    {
        returnValue = F("Am Antoniuswald");
        break;
    }
    case 10599:
    {
        returnValue = F("Am Antoniweiher");
        break;
    }
    case 10600:
    {
        returnValue = F("Am Antonsberg");
        break;
    }
    case 10601:
    {
        returnValue = F("Am Antritt");
        break;
    }
    case 10602:
    {
        returnValue = F("Am Antzweg");
        break;
    }
    case 10603:
    {
        returnValue = F("Am Anwander");
        break;
    }
    case 10604:
    {
        returnValue = F("Am Anwender");
        break;
    }
    case 10605:
    {
        returnValue = F("Am Anwer");
        break;
    }
    case 10606:
    {
        returnValue = F("Am Anzenbachfeld");
        break;
    }
    case 10607:
    {
        returnValue = F("Am Apfelbach");
        break;
    }
    case 10608:
    {
        returnValue = F("Am Apfelbaum");
        break;
    }
    case 10609:
    {
        returnValue = F("Am Apfelberg");
        break;
    }
    case 10610:
    {
        returnValue = F("Am Apfelbäumchen");
        break;
    }
    case 10611:
    {
        returnValue = F("Am Apfelgarten");
        break;
    }
    case 10612:
    {
        returnValue = F("Am Apfelgraben");
        break;
    }
    case 10613:
    {
        returnValue = F("Am Apfelgärtchen");
        break;
    }
    case 10614:
    {
        returnValue = F("Am Apfelhof");
        break;
    }
    case 10615:
    {
        returnValue = F("Am Apfelhügel");
        break;
    }
    case 10616:
    {
        returnValue = F("Am Apfelsberg");
        break;
    }
    case 10617:
    {
        returnValue = F("Am Apfelweg");
        break;
    }
    case 10618:
    {
        returnValue = F("Am Aphover Steg");
        break;
    }
    case 10619:
    {
        returnValue = F("Am Apostelberg");
        break;
    }
    case 10620:
    {
        returnValue = F("Am Apostelhof");
        break;
    }
    case 10621:
    {
        returnValue = F("Am Apothekengarten");
        break;
    }
    case 10622:
    {
        returnValue = F("Am Appelbach");
        break;
    }
    case 10623:
    {
        returnValue = F("Am Appeldamm");
        break;
    }
    case 10624:
    {
        returnValue = F("Am Appelgraben");
        break;
    }
    case 10625:
    {
        returnValue = F("Am Appelhügel");
        break;
    }
    case 10626:
    {
        returnValue = F("Am Appelsberg");
        break;
    }
    case 10627:
    {
        returnValue = F("Am Appenberg");
        break;
    }
    case 10628:
    {
        returnValue = F("Am Appenheimer Pfad");
        break;
    }
    case 10629:
    {
        returnValue = F("Am Appenstedter Wäldchen");
        break;
    }
    case 10630:
    {
        returnValue = F("Am Aquadrom");
        break;
    }
    case 10631:
    {
        returnValue = F("Am Aquarium");
        break;
    }
    case 10632:
    {
        returnValue = F("Am Arboretum");
        break;
    }
    case 10633:
    {
        returnValue = F("Am Archiv");
        break;
    }
    case 10634:
    {
        returnValue = F("Am Archäopark");
        break;
    }
    case 10635:
    {
        returnValue = F("Am Ardlingsfeld");
        break;
    }
    case 10636:
    {
        returnValue = F("Am Arenberg");
        break;
    }
    case 10637:
    {
        returnValue = F("Am Arenberge");
        break;
    }
    case 10638:
    {
        returnValue = F("Am Arenskampe");
        break;
    }
    case 10639:
    {
        returnValue = F("Am Arenzberg");
        break;
    }
    case 10640:
    {
        returnValue = F("Am Argenwuhr");
        break;
    }
    case 10641:
    {
        returnValue = F("Am Arheilger Weg");
        break;
    }
    case 10642:
    {
        returnValue = F("Am Arkenberg");
        break;
    }
    case 10643:
    {
        returnValue = F("Am Armenberg");
        break;
    }
    case 10644:
    {
        returnValue = F("Am Armenholz");
        break;
    }
    case 10645:
    {
        returnValue = F("Am Armenkamp");
        break;
    }
    case 10646:
    {
        returnValue = F("Am Armsberg");
        break;
    }
    case 10647:
    {
        returnValue = F("Am Armtje");
        break;
    }
    case 10648:
    {
        returnValue = F("Am Arnold");
        break;
    }
    case 10649:
    {
        returnValue = F("Am Arnoldpark");
        break;
    }
    case 10650:
    {
        returnValue = F("Am Arnoldsee");
        break;
    }
    case 10651:
    {
        returnValue = F("Am Arnoldsgrund");
        break;
    }
    case 10652:
    {
        returnValue = F("Am Arnsbach");
        break;
    }
    case 10653:
    {
        returnValue = F("Am Arnsbacher Pfad");
        break;
    }
    case 10654:
    {
        returnValue = F("Am Arnsberg");
        break;
    }
    case 10655:
    {
        returnValue = F("Am Arnsee");
        break;
    }
    case 10656:
    {
        returnValue = F("Am Arnsgraben");
        break;
    }
    case 10657:
    {
        returnValue = F("Am Arnstein");
        break;
    }
    case 10658:
    {
        returnValue = F("Am Arntegraben");
        break;
    }
    case 10659:
    {
        returnValue = F("Am Arolsbach");
        break;
    }
    case 10660:
    {
        returnValue = F("Am Arolser Holz");
        break;
    }
    case 10661:
    {
        returnValue = F("Am Arrasgraben");
        break;
    }
    case 10662:
    {
        returnValue = F("Am Arrenberg");
        break;
    }
    case 10663:
    {
        returnValue = F("Am Arsberg");
        break;
    }
    case 10664:
    {
        returnValue = F("Am Artfeld");
        break;
    }
    case 10665:
    {
        returnValue = F("Am Artweg");
        break;
    }
    case 10666:
    {
        returnValue = F("Am Arzberg");
        break;
    }
    case 10667:
    {
        returnValue = F("Am Arzberg / Steinbacher Weg");
        break;
    }
    case 10668:
    {
        returnValue = F("Am Arzerbach");
        break;
    }
    case 10669:
    {
        returnValue = F("Am Asamblick");
        break;
    }
    case 10670:
    {
        returnValue = F("Am Asang");
        break;
    }
    case 10671:
    {
        returnValue = F("Am Asbach");
        break;
    }
    case 10672:
    {
        returnValue = F("Am Asberg");
        break;
    }
    case 10673:
    {
        returnValue = F("Am Aschbach");
        break;
    }
    case 10674:
    {
        returnValue = F("Am Aschbacherhof");
        break;
    }
    case 10675:
    {
        returnValue = F("Am Aschberg");
        break;
    }
    case 10676:
    {
        returnValue = F("Am Aschborn");
        break;
    }
    case 10677:
    {
        returnValue = F("Am Aschenbach");
        break;
    }
    case 10678:
    {
        returnValue = F("Am Aschenbacher Steg");
        break;
    }
    case 10679:
    {
        returnValue = F("Am Aschenberg");
        break;
    }
    case 10680:
    {
        returnValue = F("Am Aschenfeld");
        break;
    }
    case 10681:
    {
        returnValue = F("Am Aschenhügel");
        break;
    }
    case 10682:
    {
        returnValue = F("Am Aschenkrug");
        break;
    }
    case 10683:
    {
        returnValue = F("Am Aschenpöhl");
        break;
    }
    case 10684:
    {
        returnValue = F("Am Aschenweg");
        break;
    }
    case 10685:
    {
        returnValue = F("Am Aschergraben");
        break;
    }
    case 10686:
    {
        returnValue = F("Am Aschweg");
        break;
    }
    case 10687:
    {
        returnValue = F("Am Asdorfer Weiher");
        break;
    }
    case 10688:
    {
        returnValue = F("Am Asenberg");
        break;
    }
    case 10689:
    {
        returnValue = F("Am Asenbühl");
        break;
    }
    case 10690:
    {
        returnValue = F("Am Askonchen");
        break;
    }
    case 10691:
    {
        returnValue = F("Am Aspe");
        break;
    }
    case 10692:
    {
        returnValue = F("Am Aspen");
        break;
    }
    case 10693:
    {
        returnValue = F("Am Aspenacker");
        break;
    }
    case 10694:
    {
        returnValue = F("Am Aspenbach");
        break;
    }
    case 10695:
    {
        returnValue = F("Am Aspenborn");
        break;
    }
    case 10696:
    {
        returnValue = F("Am Aspenbächle");
        break;
    }
    case 10697:
    {
        returnValue = F("Am Aspengarten");
        break;
    }
    case 10698:
    {
        returnValue = F("Am Aspengraben");
        break;
    }
    case 10699:
    {
        returnValue = F("Am Aspenhaag");
        break;
    }
    case 10700:
    {
        returnValue = F("Am Aspenrain");
        break;
    }
    case 10701:
    {
        returnValue = F("Am Aspentrog");
        break;
    }
    case 10702:
    {
        returnValue = F("Am Aspenwald");
        break;
    }
    case 10703:
    {
        returnValue = F("Am Asper");
        break;
    }
    case 10704:
    {
        returnValue = F("Am Asperstück");
        break;
    }
    case 10705:
    {
        returnValue = F("Am Asperteich");
        break;
    }
    case 10706:
    {
        returnValue = F("Am Aspl");
        break;
    }
    case 10707:
    {
        returnValue = F("Am Assebach");
        break;
    }
    case 10708:
    {
        returnValue = F("Am Assebad");
        break;
    }
    case 10709:
    {
        returnValue = F("Am Asseler Fleet");
        break;
    }
    case 10710:
    {
        returnValue = F("Am Asselgraben");
        break;
    }
    case 10711:
    {
        returnValue = F("Am Assengrund");
        break;
    }
    case 10712:
    {
        returnValue = F("Am Astenacker");
        break;
    }
    case 10713:
    {
        returnValue = F("Am Asterstein");
        break;
    }
    case 10714:
    {
        returnValue = F("Am Asterter Feld");
        break;
    }
    case 10715:
    {
        returnValue = F("Am Atlaswerk");
        break;
    }
    case 10716:
    {
        returnValue = F("Am Attenberg");
        break;
    }
    case 10717:
    {
        returnValue = F("Am Attenbühl");
        break;
    }
    case 10718:
    {
        returnValue = F("Am Attichsbach");
        break;
    }
    case 10719:
    {
        returnValue = F("Am Atzelberg");
        break;
    }
    case 10720:
    {
        returnValue = F("Am Atzelhorst");
        break;
    }
    case 10721:
    {
        returnValue = F("Am Atzelsgraben");
        break;
    }
    case 10722:
    {
        returnValue = F("Am Atzenbach");
        break;
    }
    case 10723:
    {
        returnValue = F("Am Atzmann");
        break;
    }
    case 10724:
    {
        returnValue = F("Am Atzumer Busch");
        break;
    }
    case 10725:
    {
        returnValue = F("Am Atzumer Weg");
        break;
    }
    case 10726:
    {
        returnValue = F("Am Auacker");
        break;
    }
    case 10727:
    {
        returnValue = F("Am Aubach");
        break;
    }
    case 10728:
    {
        returnValue = F("Am Aubachgraben");
        break;
    }
    case 10729:
    {
        returnValue = F("Am Aubachsee");
        break;
    }
    case 10730:
    {
        returnValue = F("Am Auberg");
        break;
    }
    case 10731:
    {
        returnValue = F("Am Aubichl");
        break;
    }
    case 10732:
    {
        returnValue = F("Am Aubuckel");
        break;
    }
    case 10733:
    {
        returnValue = F("Am Auchtberg");
        break;
    }
    case 10734:
    {
        returnValue = F("Am Audeich");
        break;
    }
    case 10735:
    {
        returnValue = F("Am Audorfer See");
        break;
    }
    case 10736:
    {
        returnValue = F("Am Auebach");
        break;
    }
    case 10737:
    {
        returnValue = F("Am Aueberg");
        break;
    }
    case 10738:
    {
        returnValue = F("Am Auebogen");
        break;
    }
    case 10739:
    {
        returnValue = F("Am Auefeld");
        break;
    }
    case 10740:
    {
        returnValue = F("Am Auel");
        break;
    }
    case 10741:
    {
        returnValue = F("Am Auelsbach");
        break;
    }
    case 10742:
    {
        returnValue = F("Am Auelterberg");
        break;
    }
    case 10743:
    {
        returnValue = F("Am Auenbach");
        break;
    }
    case 10744:
    {
        returnValue = F("Am Auenberg");
        break;
    }
    case 10745:
    {
        returnValue = F("Am Auenblick");
        break;
    }
    case 10746:
    {
        returnValue = F("Am Auenhain");
        break;
    }
    case 10747:
    {
        returnValue = F("Am Auensee");
        break;
    }
    case 10748:
    {
        returnValue = F("Am Auenwald");
        break;
    }
    case 10749:
    {
        returnValue = F("Am Auenweg");
        break;
    }
    case 10750:
    {
        returnValue = F("Am Auer Bichl");
        break;
    }
    case 10751:
    {
        returnValue = F("Am Auerbach");
        break;
    }
    case 10752:
    {
        returnValue = F("Am Auerberg");
        break;
    }
    case 10753:
    {
        returnValue = F("Am Auergraben");
        break;
    }
    case 10754:
    {
        returnValue = F("Am Auerhahn");
        break;
    }
    case 10755:
    {
        returnValue = F("Am Auernberg");
        break;
    }
    case 10756:
    {
        returnValue = F("Am Auersberg");
        break;
    }
    case 10757:
    {
        returnValue = F("Am Auetal");
        break;
    }
    case 10758:
    {
        returnValue = F("Am Aueteich");
        break;
    }
    case 10759:
    {
        returnValue = F("Am Auewald");
        break;
    }
    case 10760:
    {
        returnValue = F("Am Auewäldchen");
        break;
    }
    case 10761:
    {
        returnValue = F("Am Aufeld");
        break;
    }
    case 10762:
    {
        returnValue = F("Am Aufleck");
        break;
    }
    case 10763:
    {
        returnValue = F("Am Aufschlussgraben");
        break;
    }
    case 10764:
    {
        returnValue = F("Am Aufspringbach");
        break;
    }
    case 10765:
    {
        returnValue = F("Am Aufstieg");
        break;
    }
    case 10766:
    {
        returnValue = F("Am Aufzug");
        break;
    }
    case 10767:
    {
        returnValue = F("Am Augarten");
        break;
    }
    case 10768:
    {
        returnValue = F("Am Augraben");
        break;
    }
    case 10769:
    {
        returnValue = F("Am Augustabad");
        break;
    }
    case 10770:
    {
        returnValue = F("Am Augustendorfer Weg");
        break;
    }
    case 10771:
    {
        returnValue = F("Am Augustenhof");
        break;
    }
    case 10772:
    {
        returnValue = F("Am Augustinerberg");
        break;
    }
    case 10773:
    {
        returnValue = F("Am Augustinerhof");
        break;
    }
    case 10774:
    {
        returnValue = F("Am Augustushof");
        break;
    }
    case 10775:
    {
        returnValue = F("Am Auhof");
        break;
    }
    case 10776:
    {
        returnValue = F("Am Auholz");
        break;
    }
    case 10777:
    {
        returnValue = F("Am Auhorn");
        break;
    }
    case 10778:
    {
        returnValue = F("Am Auhölzle");
        break;
    }
    case 10779:
    {
        returnValue = F("Am Aukopf");
        break;
    }
    case 10780:
    {
        returnValue = F("Am Auland");
        break;
    }
    case 10781:
    {
        returnValue = F("Am Aulenberg");
        break;
    }
    case 10782:
    {
        returnValue = F("Am Aulsberg");
        break;
    }
    case 10783:
    {
        returnValue = F("Am Aulweg");
        break;
    }
    case 10784:
    {
        returnValue = F("Am Aumaischen Berg");
        break;
    }
    case 10785:
    {
        returnValue = F("Am Aunhamer Berg");
        break;
    }
    case 10786:
    {
        returnValue = F("Am Aupitzbachweg");
        break;
    }
    case 10787:
    {
        returnValue = F("Am Aurachgrund");
        break;
    }
    case 10788:
    {
        returnValue = F("Am Aurain");
        break;
    }
    case 10789:
    {
        returnValue = F("Am Ausblick");
        break;
    }
    case 10790:
    {
        returnValue = F("Am Ausfall");
        break;
    }
    case 10791:
    {
        returnValue = F("Am Ausgleichbecken");
        break;
    }
    case 10792:
    {
        returnValue = F("Am Ausguck");
        break;
    }
    case 10793:
    {
        returnValue = F("Am Ausjagbogen");
        break;
    }
    case 10794:
    {
        returnValue = F("Am Aussichtsberg");
        break;
    }
    case 10795:
    {
        returnValue = F("Am Aussichtsturm");
        break;
    }
    case 10796:
    {
        returnValue = F("Am Austelpark");
        break;
    }
    case 10797:
    {
        returnValue = F("Am Autal");
        break;
    }
    case 10798:
    {
        returnValue = F("Am Autobahnkreuz");
        break;
    }
    case 10799:
    {
        returnValue = F("Am Autobahnzubringer");
        break;
    }
    case 10800:
    {
        returnValue = F("Am Autohof");
        break;
    }
    case 10801:
    {
        returnValue = F("Am Autuch");
        break;
    }
    case 10802:
    {
        returnValue = F("Am Auwald");
        break;
    }
    case 10803:
    {
        returnValue = F("Am Auwaldsee");
        break;
    }
    case 10804:
    {
        returnValue = F("Am Auweg");
        break;
    }
    case 10805:
    {
        returnValue = F("Am Außenhafen");
        break;
    }
    case 10806:
    {
        returnValue = F("Am AvH");
        break;
    }
    case 10807:
    {
        returnValue = F("Am Awer");
        break;
    }
    case 10808:
    {
        returnValue = F("Am Axknöpfchen");
        break;
    }
    case 10809:
    {
        returnValue = F("Am Axtesberg");
        break;
    }
    case 10810:
    {
        returnValue = F("Am Azlenberg");
        break;
    }
    case 10811:
    {
        returnValue = F("Am Aßbach");
        break;
    }
    case 10812:
    {
        returnValue = F("Am Aßberg");
        break;
    }
    case 10813:
    {
        returnValue = F("Am BUrgmannenhaus");
        break;
    }
    case 10814:
    {
        returnValue = F("Am Baackeshof");
        break;
    }
    case 10815:
    {
        returnValue = F("Am Baaken");
        break;
    }
    case 10816:
    {
        returnValue = F("Am Baalbusch");
        break;
    }
    case 10817:
    {
        returnValue = F("Am Babel");
        break;
    }
    case 10818:
    {
        returnValue = F("Am Babelsberg");
        break;
    }
    case 10819:
    {
        returnValue = F("Am Babenhorst");
        break;
    }
    case 10820:
    {
        returnValue = F("Am Bach");
        break;
    }
    case 10821:
    {
        returnValue = F("Am Bach vorbei");
        break;
    }
    case 10822:
    {
        returnValue = F("Am Bachacker");
        break;
    }
    case 10823:
    {
        returnValue = F("Am Bachberg");
        break;
    }
    case 10824:
    {
        returnValue = F("Am Bachbrunnen");
        break;
    }
    case 10825:
    {
        returnValue = F("Am Bachdamm");
        break;
    }
    case 10826:
    {
        returnValue = F("Am Bache");
        break;
    }
    case 10827:
    {
        returnValue = F("Am Bacheck");
        break;
    }
    case 10828:
    {
        returnValue = F("Am Bachemer Pfädchen");
        break;
    }
    case 10829:
    {
        returnValue = F("Am Bachenhof");
        break;
    }
    case 10830:
    {
        returnValue = F("Am Bacherbusch");
        break;
    }
    case 10831:
    {
        returnValue = F("Am Bacherl");
        break;
    }
    case 10832:
    {
        returnValue = F("Am Bacherlgraben");
        break;
    }
    case 10833:
    {
        returnValue = F("Am Bachersiefen");
        break;
    }
    case 10834:
    {
        returnValue = F("Am Bacherweg");
        break;
    }
    case 10835:
    {
        returnValue = F("Am Bachfeld");
        break;
    }
    case 10836:
    {
        returnValue = F("Am Bachgarten");
        break;
    }
    case 10837:
    {
        returnValue = F("Am Bachgewann");
        break;
    }
    case 10838:
    {
        returnValue = F("Am Bachgraben");
        break;
    }
    case 10839:
    {
        returnValue = F("Am Bachgrund");
        break;
    }
    case 10840:
    {
        returnValue = F("Am Bachhof");
        break;
    }
    case 10841:
    {
        returnValue = F("Am Bachholz");
        break;
    }
    case 10842:
    {
        returnValue = F("Am Bachkreuz");
        break;
    }
    case 10843:
    {
        returnValue = F("Am Bachl");
        break;
    }
    case 10844:
    {
        returnValue = F("Am Bachlanger");
        break;
    }
    case 10845:
    {
        returnValue = F("Am Bachlauf");
        break;
    }
    case 10846:
    {
        returnValue = F("Am Bachmann");
        break;
    }
    case 10847:
    {
        returnValue = F("Am Bachmannsgraben");
        break;
    }
    case 10848:
    {
        returnValue = F("Am Bachrain");
        break;
    }
    case 10849:
    {
        returnValue = F("Am Bachranken");
        break;
    }
    case 10850:
    {
        returnValue = F("Am Bachschemm");
        break;
    }
    case 10851:
    {
        returnValue = F("Am Bachsteg");
        break;
    }
    case 10852:
    {
        returnValue = F("Am Bachsteig");
        break;
    }
    case 10853:
    {
        returnValue = F("Am Bachstein");
        break;
    }
    case 10854:
    {
        returnValue = F("Am Bachteil");
        break;
    }
    case 10855:
    {
        returnValue = F("Am Bachtrompeter");
        break;
    }
    case 10856:
    {
        returnValue = F("Am Bachufer");
        break;
    }
    case 10857:
    {
        returnValue = F("Am Bachwasen");
        break;
    }
    case 10858:
    {
        returnValue = F("Am Bachweg");
        break;
    }
    case 10859:
    {
        returnValue = F("Am Bachwinkel");
        break;
    }
    case 10860:
    {
        returnValue = F("Am Backelgraben");
        break;
    }
    case 10861:
    {
        returnValue = F("Am Backeltrog");
        break;
    }
    case 10862:
    {
        returnValue = F("Am Backenbach");
        break;
    }
    case 10863:
    {
        returnValue = F("Am Backenberg");
        break;
    }
    case 10864:
    {
        returnValue = F("Am Backenschlag");
        break;
    }
    case 10865:
    {
        returnValue = F("Am Backensteen");
        break;
    }
    case 10866:
    {
        returnValue = F("Am Backes");
        break;
    }
    case 10867:
    {
        returnValue = F("Am Backesberg");
        break;
    }
    case 10868:
    {
        returnValue = F("Am Backesgarten");
        break;
    }
    case 10869:
    {
        returnValue = F("Am Backeshof");
        break;
    }
    case 10870:
    {
        returnValue = F("Am Backesplatz");
        break;
    }
    case 10871:
    {
        returnValue = F("Am Backhaus");
        break;
    }
    case 10872:
    {
        returnValue = F("Am Backhausgarten");
        break;
    }
    case 10873:
    {
        returnValue = F("Am Backhus");
        break;
    }
    case 10874:
    {
        returnValue = F("Am Backhäusle");
        break;
    }
    case 10875:
    {
        returnValue = F("Am Backleitenweg");
        break;
    }
    case 10876:
    {
        returnValue = F("Am Backmuldpfad");
        break;
    }
    case 10877:
    {
        returnValue = F("Am Backofen");
        break;
    }
    case 10878:
    {
        returnValue = F("Am Backofenberg");
        break;
    }
    case 10879:
    {
        returnValue = F("Am Backofensteig");
        break;
    }
    case 10880:
    {
        returnValue = F("Am Backrain");
        break;
    }
    case 10881:
    {
        returnValue = F("Am Backs");
        break;
    }
    case 10882:
    {
        returnValue = F("Am Backsgarten");
        break;
    }
    case 10883:
    {
        returnValue = F("Am Backsplan");
        break;
    }
    case 10884:
    {
        returnValue = F("Am Backsteinbrand");
        break;
    }
    case 10885:
    {
        returnValue = F("Am Backsteinfeld");
        break;
    }
    case 10886:
    {
        returnValue = F("Am Backteich");
        break;
    }
    case 10887:
    {
        returnValue = F("Am Bad");
        break;
    }
    case 10888:
    {
        returnValue = F("Am Badanger");
        break;
    }
    case 10889:
    {
        returnValue = F("Am Badberg");
        break;
    }
    case 10890:
    {
        returnValue = F("Am Badbergsand");
        break;
    }
    case 10891:
    {
        returnValue = F("Am Badbrunnen");
        break;
    }
    case 10892:
    {
        returnValue = F("Am Bade");
        break;
    }
    case 10893:
    {
        returnValue = F("Am Badeborn");
        break;
    }
    case 10894:
    {
        returnValue = F("Am Badebrunnen");
        break;
    }
    case 10895:
    {
        returnValue = F("Am Badedeich");
        break;
    }
    case 10896:
    {
        returnValue = F("Am Badegarten");
        break;
    }
    case 10897:
    {
        returnValue = F("Am Badehaus");
        break;
    }
    case 10898:
    {
        returnValue = F("Am Badeholz");
        break;
    }
    case 10899:
    {
        returnValue = F("Am Badenberg");
        break;
    }
    case 10900:
    {
        returnValue = F("Am Badener Bahnhof");
        break;
    }
    case 10901:
    {
        returnValue = F("Am Badenwerk");
        break;
    }
    case 10902:
    {
        returnValue = F("Am Badepark");
        break;
    }
    case 10903:
    {
        returnValue = F("Am Badeplatz");
        break;
    }
    case 10904:
    {
        returnValue = F("Am Baderberg");
        break;
    }
    case 10905:
    {
        returnValue = F("Am Baderhölzle");
        break;
    }
    case 10906:
    {
        returnValue = F("Am Badersberg");
        break;
    }
    case 10907:
    {
        returnValue = F("Am Baderteich");
        break;
    }
    case 10908:
    {
        returnValue = F("Am Baderwinkel");
        break;
    }
    case 10909:
    {
        returnValue = F("Am Badesbach");
        break;
    }
    case 10910:
    {
        returnValue = F("Am Badesee");
        break;
    }
    case 10911:
    {
        returnValue = F("Am Badesteig");
        break;
    }
    case 10912:
    {
        returnValue = F("Am Badestich");
        break;
    }
    case 10913:
    {
        returnValue = F("Am Badestrand");
        break;
    }
    case 10914:
    {
        returnValue = F("Am Badeteich");
        break;
    }
    case 10915:
    {
        returnValue = F("Am Badetor");
        break;
    }
    case 10916:
    {
        returnValue = F("Am Badeweiher");
        break;
    }
    case 10917:
    {
        returnValue = F("Am Badezentrum");
        break;
    }
    case 10918:
    {
        returnValue = F("Am Badfeld");
        break;
    }
    case 10919:
    {
        returnValue = F("Am Badgraben");
        break;
    }
    case 10920:
    {
        returnValue = F("Am Badhaus");
        break;
    }
    case 10921:
    {
        returnValue = F("Am Badhäusl");
        break;
    }
    case 10922:
    {
        returnValue = F("Am Badischen Hof");
        break;
    }
    case 10923:
    {
        returnValue = F("Am Badstaven");
        break;
    }
    case 10924:
    {
        returnValue = F("Am Badsteig");
        break;
    }
    case 10925:
    {
        returnValue = F("Am Badstein");
        break;
    }
    case 10926:
    {
        returnValue = F("Am Badstubenberg");
        break;
    }
    case 10927:
    {
        returnValue = F("Am Badweg");
        break;
    }
    case 10928:
    {
        returnValue = F("Am Badwoog");
        break;
    }
    case 10929:
    {
        returnValue = F("Am Bagbander Tief");
        break;
    }
    case 10930:
    {
        returnValue = F("Am Bagehl");
        break;
    }
    case 10931:
    {
        returnValue = F("Am Bagger");
        break;
    }
    case 10932:
    {
        returnValue = F("Am Baggerfeld");
        break;
    }
    case 10933:
    {
        returnValue = F("Am Baggersee");
        break;
    }
    case 10934:
    {
        returnValue = F("Am Bagno");
        break;
    }
    case 10935:
    {
        returnValue = F("Am Bahhof");
        break;
    }
    case 10936:
    {
        returnValue = F("Am Bahlsbach");
        break;
    }
    case 10937:
    {
        returnValue = F("Am Bahnacker");
        break;
    }
    case 10938:
    {
        returnValue = F("Am Bahnberg");
        break;
    }
    case 10939:
    {
        returnValue = F("Am Bahnbergle");
        break;
    }
    case 10940:
    {
        returnValue = F("Am Bahnbetriebswerk");
        break;
    }
    case 10941:
    {
        returnValue = F("Am Bahnbogen");
        break;
    }
    case 10942:
    {
        returnValue = F("Am Bahnbrink");
        break;
    }
    case 10943:
    {
        returnValue = F("Am Bahnbrüch");
        break;
    }
    case 10944:
    {
        returnValue = F("Am Bahndam");
        break;
    }
    case 10945:
    {
        returnValue = F("Am Bahndamm");
        break;
    }
    case 10946:
    {
        returnValue = F("Am Bahneberg");
        break;
    }
    case 10947:
    {
        returnValue = F("Am Bahneinschnitt");
        break;
    }
    case 10948:
    {
        returnValue = F("Am Bahnerstiege");
        break;
    }
    case 10949:
    {
        returnValue = F("Am Bahngarten");
        break;
    }
    case 10950:
    {
        returnValue = F("Am Bahngleis");
        break;
    }
    case 10951:
    {
        returnValue = F("Am Bahngraben");
        break;
    }
    case 10952:
    {
        returnValue = F("Am Bahnhaus");
        break;
    }
    case 10953:
    {
        returnValue = F("Am Bahnhof");
        break;
    }
    case 10954:
    {
        returnValue = F("Am Bahnhof Bertsdorf");
        break;
    }
    case 10955:
    {
        returnValue = F("Am Bahnhof Broich");
        break;
    }
    case 10956:
    {
        returnValue = F("Am Bahnhof Bölzke");
        break;
    }
    case 10957:
    {
        returnValue = F("Am Bahnhof Fortuna");
        break;
    }
    case 10958:
    {
        returnValue = F("Am Bahnhof Frauendorf");
        break;
    }
    case 10959:
    {
        returnValue = F("Am Bahnhof Karthaus");
        break;
    }
    case 10960:
    {
        returnValue = F("Am Bahnhof Klasdorf");
        break;
    }
    case 10961:
    {
        returnValue = F("Am Bahnhof Lancken");
        break;
    }
    case 10962:
    {
        returnValue = F("Am Bahnhof Lienewitz");
        break;
    }
    case 10963:
    {
        returnValue = F("Am Bahnhof Melkendorf");
        break;
    }
    case 10964:
    {
        returnValue = F("Am Bahnhof Minden Stadt");
        break;
    }
    case 10965:
    {
        returnValue = F("Am Bahnhof Mistorf");
        break;
    }
    case 10966:
    {
        returnValue = F("Am Bahnhof Mulmshorn");
        break;
    }
    case 10967:
    {
        returnValue = F("Am Bahnhof Neuhof");
        break;
    }
    case 10968:
    {
        returnValue = F("Am Bahnhof Oegeln");
        break;
    }
    case 10969:
    {
        returnValue = F("Am Bahnhof Rehagen");
        break;
    }
    case 10970:
    {
        returnValue = F("Am Bahnhof Rettmer");
        break;
    }
    case 10971:
    {
        returnValue = F("Am Bahnhof Reuden");
        break;
    }
    case 10972:
    {
        returnValue = F("Am Bahnhof Rohlsdorf");
        break;
    }
    case 10973:
    {
        returnValue = F("Am Bahnhof Schutzbach");
        break;
    }
    case 10974:
    {
        returnValue = F("Am Bahnhof Süd");
        break;
    }
    case 10975:
    {
        returnValue = F("Am Bahnhof Wandelhof");
        break;
    }
    case 10976:
    {
        returnValue = F("Am Bahnhof Weinhübel");
        break;
    }
    case 10977:
    {
        returnValue = F("Am Bahnhof-Süd");
        break;
    }
    case 10978:
    {
        returnValue = F("Am Bahnhofsberg");
        break;
    }
    case 10979:
    {
        returnValue = F("Am Bahnhofsbusch");
        break;
    }
    case 10980:
    {
        returnValue = F("Am Bahnhofsesch");
        break;
    }
    case 10981:
    {
        returnValue = F("Am Bahnhofsplatz");
        break;
    }
    case 10982:
    {
        returnValue = F("Am Bahnhofsvorplatz");
        break;
    }
    case 10983:
    {
        returnValue = F("Am Bahnhofsweg");
        break;
    }
    case 10984:
    {
        returnValue = F("Am Bahnholz");
        break;
    }
    case 10985:
    {
        returnValue = F("Am Bahnhöfle");
        break;
    }
    case 10986:
    {
        returnValue = F("Am Bahnland");
        break;
    }
    case 10987:
    {
        returnValue = F("Am Bahnposten");
        break;
    }
    case 10988:
    {
        returnValue = F("Am Bahnrain");
        break;
    }
    case 10989:
    {
        returnValue = F("Am Bahnsteg");
        break;
    }
    case 10990:
    {
        returnValue = F("Am Bahnsteig");
        break;
    }
    case 10991:
    {
        returnValue = F("Am Bahnweg");
        break;
    }
    case 10992:
    {
        returnValue = F("Am Bahnweiher");
        break;
    }
    case 10993:
    {
        returnValue = F("Am Bahnübergang");
        break;
    }
    case 10994:
    {
        returnValue = F("Am Bahrenberg");
        break;
    }
    case 10995:
    {
        returnValue = F("Am Bahrenkamp");
        break;
    }
    case 10996:
    {
        returnValue = F("Am Bahrensdorfer See");
        break;
    }
    case 10997:
    {
        returnValue = F("Am Bahricht");
        break;
    }
    case 10998:
    {
        returnValue = F("Am Baierlhof");
        break;
    }
    case 10999:
    {
        returnValue = F("Am Baiersbach");
        break;
    }
    case 11000:
    {
        returnValue = F("Am Baierweg");
        break;
    }
    case 11001:
    {
        returnValue = F("Am Bailey-Park");
        break;
    }
    case 11002:
    {
        returnValue = F("Am Bairafeld");
        break;
    }
    case 11003:
    {
        returnValue = F("Am Baisenpoth");
        break;
    }
    case 11004:
    {
        returnValue = F("Am Bakenberg");
        break;
    }
    case 11005:
    {
        returnValue = F("Am Bakerloch");
        break;
    }
    case 11006:
    {
        returnValue = F("Am Bakersberg");
        break;
    }
    case 11007:
    {
        returnValue = F("Am Baldenberg");
        break;
    }
    case 11008:
    {
        returnValue = F("Am Balderscheid");
        break;
    }
    case 11009:
    {
        returnValue = F("Am Baldhof");
        break;
    }
    case 11010:
    {
        returnValue = F("Am Balduinstor");
        break;
    }
    case 11011:
    {
        returnValue = F("Am Balgfeld");
        break;
    }
    case 11012:
    {
        returnValue = F("Am Balkenbach");
        break;
    }
    case 11013:
    {
        returnValue = F("Am Balkenstrick");
        break;
    }
    case 11014:
    {
        returnValue = F("Am Ballenpeter");
        break;
    }
    case 11015:
    {
        returnValue = F("Am Ballenrain");
        break;
    }
    case 11016:
    {
        returnValue = F("Am Ballhaus");
        break;
    }
    case 11017:
    {
        returnValue = F("Am Ballo");
        break;
    }
    case 11018:
    {
        returnValue = F("Am Ballplatz");
        break;
    }
    case 11019:
    {
        returnValue = F("Am Balmen");
        break;
    }
    case 11020:
    {
        returnValue = F("Am Balmer See");
        break;
    }
    case 11021:
    {
        returnValue = F("Am Balseberg");
        break;
    }
    case 11022:
    {
        returnValue = F("Am Balthasarkreuz");
        break;
    }
    case 11023:
    {
        returnValue = F("Am Balz");
        break;
    }
    case 11024:
    {
        returnValue = F("Am Balzerskreuz");
        break;
    }
    case 11025:
    {
        returnValue = F("Am Bamberg");
        break;
    }
    case 11026:
    {
        returnValue = F("Am Bammerbach");
        break;
    }
    case 11027:
    {
        returnValue = F("Am Banden");
        break;
    }
    case 11028:
    {
        returnValue = F("Am Bandenfeld");
        break;
    }
    case 11029:
    {
        returnValue = F("Am Bandlberg");
        break;
    }
    case 11030:
    {
        returnValue = F("Am Bandsbusch");
        break;
    }
    case 11031:
    {
        returnValue = F("Am Bandweidenweg");
        break;
    }
    case 11032:
    {
        returnValue = F("Am Bangert");
        break;
    }
    case 11033:
    {
        returnValue = F("Am Banggarten");
        break;
    }
    case 11034:
    {
        returnValue = F("Am Bangraben");
        break;
    }
    case 11035:
    {
        returnValue = F("Am Bankkamp");
        break;
    }
    case 11036:
    {
        returnValue = F("Am Bann");
        break;
    }
    case 11037:
    {
        returnValue = F("Am Bannacker");
        break;
    }
    case 11038:
    {
        returnValue = F("Am Bannelsberg");
        break;
    }
    case 11039:
    {
        returnValue = F("Am Bannenberg");
        break;
    }
    case 11040:
    {
        returnValue = F("Am Banngarten");
        break;
    }
    case 11041:
    {
        returnValue = F("Am Banngraben");
        break;
    }
    case 11042:
    {
        returnValue = F("Am Bannholz");
        break;
    }
    case 11043:
    {
        returnValue = F("Am Bannstein");
        break;
    }
    case 11044:
    {
        returnValue = F("Am Bannwald");
        break;
    }
    case 11045:
    {
        returnValue = F("Am Bannzaun");
        break;
    }
    case 11046:
    {
        returnValue = F("Am Bansapark");
        break;
    }
    case 11047:
    {
        returnValue = F("Am Barbarossabrunnen");
        break;
    }
    case 11048:
    {
        returnValue = F("Am Barbarossagarten");
        break;
    }
    case 11049:
    {
        returnValue = F("Am Barbelberg");
        break;
    }
    case 11050:
    {
        returnValue = F("Am Barberg");
        break;
    }
    case 11051:
    {
        returnValue = F("Am Barbüschen I");
        break;
    }
    case 11052:
    {
        returnValue = F("Am Barbüschen II");
        break;
    }
    case 11053:
    {
        returnValue = F("Am Barchembach");
        break;
    }
    case 11054:
    {
        returnValue = F("Am Bareisl");
        break;
    }
    case 11055:
    {
        returnValue = F("Am Barenbach");
        break;
    }
    case 11056:
    {
        returnValue = F("Am Barenburg");
        break;
    }
    case 11057:
    {
        returnValue = F("Am Barenkamp");
        break;
    }
    case 11058:
    {
        returnValue = F("Am Barg");
        break;
    }
    case 11059:
    {
        returnValue = F("Am Bargacker");
        break;
    }
    case 11060:
    {
        returnValue = F("Am Bargauer Horn");
        break;
    }
    case 11061:
    {
        returnValue = F("Am Bargenturm");
        break;
    }
    case 11062:
    {
        returnValue = F("Am Barger Schöpfwerkstief");
        break;
    }
    case 11063:
    {
        returnValue = F("Am Bargfeld");
        break;
    }
    case 11064:
    {
        returnValue = F("Am Barkenkamp");
        break;
    }
    case 11065:
    {
        returnValue = F("Am Barkenmoor");
        break;
    }
    case 11066:
    {
        returnValue = F("Am Barkhagen");
        break;
    }
    case 11067:
    {
        returnValue = F("Am Barkhauser Berg");
        break;
    }
    case 11068:
    {
        returnValue = F("Am Barkhof");
        break;
    }
    case 11069:
    {
        returnValue = F("Am Barloh");
        break;
    }
    case 11070:
    {
        returnValue = F("Am Barmannshof");
        break;
    }
    case 11071:
    {
        returnValue = F("Am Barmereck");
        break;
    }
    case 11072:
    {
        returnValue = F("Am Barmscheidsgrund");
        break;
    }
    case 11073:
    {
        returnValue = F("Am Barmsee");
        break;
    }
    case 11074:
    {
        returnValue = F("Am Barnberg");
        break;
    }
    case 11075:
    {
        returnValue = F("Am Barockgarten");
        break;
    }
    case 11076:
    {
        returnValue = F("Am Baron");
        break;
    }
    case 11077:
    {
        returnValue = F("Am Barrenbach");
        break;
    }
    case 11078:
    {
        returnValue = F("Am Barsberg");
        break;
    }
    case 11079:
    {
        returnValue = F("Am Barschsee");
        break;
    }
    case 11080:
    {
        returnValue = F("Am Barschseemoor");
        break;
    }
    case 11081:
    {
        returnValue = F("Am Bartelsacker");
        break;
    }
    case 11082:
    {
        returnValue = F("Am Bartelsborn");
        break;
    }
    case 11083:
    {
        returnValue = F("Am Bartelsbusch");
        break;
    }
    case 11084:
    {
        returnValue = F("Am Bartelshorn");
        break;
    }
    case 11085:
    {
        returnValue = F("Am Bartelskamp");
        break;
    }
    case 11086:
    {
        returnValue = F("Am Bartelssteinweg");
        break;
    }
    case 11087:
    {
        returnValue = F("Am Bartenberg");
        break;
    }
    case 11088:
    {
        returnValue = F("Am Barthelsbaum");
        break;
    }
    case 11089:
    {
        returnValue = F("Am Barthelwald");
        break;
    }
    case 11090:
    {
        returnValue = F("Am Barthgrund");
        break;
    }
    case 11091:
    {
        returnValue = F("Am Bartholomäus");
        break;
    }
    case 11092:
    {
        returnValue = F("Am Bartlwald");
        break;
    }
    case 11093:
    {
        returnValue = F("Am Bartmannfeld");
        break;
    }
    case 11094:
    {
        returnValue = F("Am Baruther Tor");
        break;
    }
    case 11095:
    {
        returnValue = F("Am Barwinkel");
        break;
    }
    case 11096:
    {
        returnValue = F("Am Basaltbrecher");
        break;
    }
    case 11097:
    {
        returnValue = F("Am Basaltbruch");
        break;
    }
    case 11098:
    {
        returnValue = F("Am Basaltkegel");
        break;
    }
    case 11099:
    {
        returnValue = F("Am Basaltpark");
        break;
    }
    case 11100:
    {
        returnValue = F("Am Basaltwerk");
        break;
    }
    case 11101:
    {
        returnValue = F("Am Baselweg");
        break;
    }
    case 11102:
    {
        returnValue = F("Am Bassin");
        break;
    }
    case 11103:
    {
        returnValue = F("Am Bast");
        break;
    }
    case 11104:
    {
        returnValue = F("Am Bastelberg");
        break;
    }
    case 11105:
    {
        returnValue = F("Am Bastenberg");
        break;
    }
    case 11106:
    {
        returnValue = F("Am Bastenkamp");
        break;
    }
    case 11107:
    {
        returnValue = F("Am Basterfeld");
        break;
    }
    case 11108:
    {
        returnValue = F("Am Basterpohl");
        break;
    }
    case 11109:
    {
        returnValue = F("Am Basthorst");
        break;
    }
    case 11110:
    {
        returnValue = F("Am Bastianplatz");
        break;
    }
    case 11111:
    {
        returnValue = F("Am Batardeau");
        break;
    }
    case 11112:
    {
        returnValue = F("Am Batzenberg");
        break;
    }
    case 11113:
    {
        returnValue = F("Am Batzerberg");
        break;
    }
    case 11114:
    {
        returnValue = F("Am Bau");
        break;
    }
    case 11115:
    {
        returnValue = F("Am Baubelsacker");
        break;
    }
    case 11116:
    {
        returnValue = F("Am Bauberg");
        break;
    }
    case 11117:
    {
        returnValue = F("Am Bauchborn");
        break;
    }
    case 11118:
    {
        returnValue = F("Am Bauchgrund");
        break;
    }
    case 11119:
    {
        returnValue = F("Am Bauckberg");
        break;
    }
    case 11120:
    {
        returnValue = F("Am Bauckhahn");
        break;
    }
    case 11121:
    {
        returnValue = F("Am Bauenhag");
        break;
    }
    case 11122:
    {
        returnValue = F("Am Bauerberg");
        break;
    }
    case 11123:
    {
        returnValue = F("Am Bauergarten");
        break;
    }
    case 11124:
    {
        returnValue = F("Am Bauerkamp");
        break;
    }
    case 11125:
    {
        returnValue = F("Am Bauernberg");
        break;
    }
    case 11126:
    {
        returnValue = F("Am Bauernbruch");
        break;
    }
    case 11127:
    {
        returnValue = F("Am Bauernbusch");
        break;
    }
    case 11128:
    {
        returnValue = F("Am Bauerndamm");
        break;
    }
    case 11129:
    {
        returnValue = F("Am Bauernfeind");
        break;
    }
    case 11130:
    {
        returnValue = F("Am Bauernfeld");
        break;
    }
    case 11131:
    {
        returnValue = F("Am Bauerngarten");
        break;
    }
    case 11132:
    {
        returnValue = F("Am Bauerngehau");
        break;
    }
    case 11133:
    {
        returnValue = F("Am Bauerngraben");
        break;
    }
    case 11134:
    {
        returnValue = F("Am Bauernhaus");
        break;
    }
    case 11135:
    {
        returnValue = F("Am Bauernhof");
        break;
    }
    case 11136:
    {
        returnValue = F("Am Bauernholz");
        break;
    }
    case 11137:
    {
        returnValue = F("Am Bauernholze");
        break;
    }
    case 11138:
    {
        returnValue = F("Am Bauernmarkt");
        break;
    }
    case 11139:
    {
        returnValue = F("Am Bauernmuseum");
        break;
    }
    case 11140:
    {
        returnValue = F("Am Bauernschlag");
        break;
    }
    case 11141:
    {
        returnValue = F("Am Bauernsee");
        break;
    }
    case 11142:
    {
        returnValue = F("Am Bauernstein");
        break;
    }
    case 11143:
    {
        returnValue = F("Am Bauernstück");
        break;
    }
    case 11144:
    {
        returnValue = F("Am Bauerntann");
        break;
    }
    case 11145:
    {
        returnValue = F("Am Bauernteich");
        break;
    }
    case 11146:
    {
        returnValue = F("Am Bauernwald");
        break;
    }
    case 11147:
    {
        returnValue = F("Am Bauernweg");
        break;
    }
    case 11148:
    {
        returnValue = F("Am Bauernwehr");
        break;
    }
    case 11149:
    {
        returnValue = F("Am Bauersberg");
        break;
    }
    case 11150:
    {
        returnValue = F("Am Bauersee");
        break;
    }
    case 11151:
    {
        returnValue = F("Am Bauershof");
        break;
    }
    case 11152:
    {
        returnValue = F("Am Bauerskamp");
        break;
    }
    case 11153:
    {
        returnValue = F("Am Bauert");
        break;
    }
    case 11154:
    {
        returnValue = F("Am Bauerweg");
        break;
    }
    case 11155:
    {
        returnValue = F("Am Bauhof");
        break;
    }
    case 11156:
    {
        returnValue = F("Am Bauholz");
        break;
    }
    case 11157:
    {
        returnValue = F("Am Bauken");
        break;
    }
    case 11158:
    {
        returnValue = F("Am Baukenberg");
        break;
    }
    case 11159:
    {
        returnValue = F("Am Baukhahn");
        break;
    }
    case 11160:
    {
        returnValue = F("Am Baukhan");
        break;
    }
    case 11161:
    {
        returnValue = F("Am Baukhop");
        break;
    }
    case 11162:
    {
        returnValue = F("Am Baukler");
        break;
    }
    case 11163:
    {
        returnValue = F("Am Bauland");
        break;
    }
    case 11164:
    {
        returnValue = F("Am Bauloh");
        break;
    }
    case 11165:
    {
        returnValue = F("Am Baum");
        break;
    }
    case 11166:
    {
        returnValue = F("Am Baumacker");
        break;
    }
    case 11167:
    {
        returnValue = F("Am Baumanns Wäldchen");
        break;
    }
    case 11168:
    {
        returnValue = F("Am Baumarkt");
        break;
    }
    case 11169:
    {
        returnValue = F("Am Baumbach");
        break;
    }
    case 11170:
    {
        returnValue = F("Am Baumberg");
        break;
    }
    case 11171:
    {
        returnValue = F("Am Baumbrunnen");
        break;
    }
    case 11172:
    {
        returnValue = F("Am Baumfeld");
        break;
    }
    case 11173:
    {
        returnValue = F("Am Baumgarten");
        break;
    }
    case 11174:
    {
        returnValue = F("Am Baumgraben");
        break;
    }
    case 11175:
    {
        returnValue = F("Am Baumgärtle");
        break;
    }
    case 11176:
    {
        returnValue = F("Am Baumhaus");
        break;
    }
    case 11177:
    {
        returnValue = F("Am Baumhof");
        break;
    }
    case 11178:
    {
        returnValue = F("Am Baumland");
        break;
    }
    case 11179:
    {
        returnValue = F("Am Baumlehrpfad");
        break;
    }
    case 11180:
    {
        returnValue = F("Am Baumolus");
        break;
    }
    case 11181:
    {
        returnValue = F("Am Baumort");
        break;
    }
    case 11182:
    {
        returnValue = F("Am Baumpfad");
        break;
    }
    case 11183:
    {
        returnValue = F("Am Baumrain");
        break;
    }
    case 11184:
    {
        returnValue = F("Am Baumrasen");
        break;
    }
    case 11185:
    {
        returnValue = F("Am Baumsacker");
        break;
    }
    case 11186:
    {
        returnValue = F("Am Baumstück");
        break;
    }
    case 11187:
    {
        returnValue = F("Am Baumtor");
        break;
    }
    case 11188:
    {
        returnValue = F("Am Baumwolf");
        break;
    }
    case 11189:
    {
        returnValue = F("Am Baunsberg");
        break;
    }
    case 11190:
    {
        returnValue = F("Am Bauplatz");
        break;
    }
    case 11191:
    {
        returnValue = F("Am Bauschbergle");
        break;
    }
    case 11192:
    {
        returnValue = F("Am Bauschheimer Weg");
        break;
    }
    case 11193:
    {
        returnValue = F("Am Bausenberg");
        break;
    }
    case 11194:
    {
        returnValue = F("Am Bausgarten");
        break;
    }
    case 11195:
    {
        returnValue = F("Am Bautzenwald");
        break;
    }
    case 11196:
    {
        returnValue = F("Am Bauwald");
        break;
    }
    case 11197:
    {
        returnValue = F("Am Baviersacker");
        break;
    }
    case 11198:
    {
        returnValue = F("Am Bayerfeld");
        break;
    }
    case 11199:
    {
        returnValue = F("Am Bayerhaus");
        break;
    }
    case 11200:
    {
        returnValue = F("Am Bayerngraben");
        break;
    }
    case 11201:
    {
        returnValue = F("Am Bayersberg");
        break;
    }
    case 11202:
    {
        returnValue = F("Am Baylerberg");
        break;
    }
    case 11203:
    {
        returnValue = F("Am Bayrischen Hof");
        break;
    }
    case 11204:
    {
        returnValue = F("Am Baßberg");
        break;
    }
    case 11205:
    {
        returnValue = F("Am Baßgarten");
        break;
    }
    case 11206:
    {
        returnValue = F("Am Beamtenhaus");
        break;
    }
    case 11207:
    {
        returnValue = F("Am Beberbach");
        break;
    }
    case 11208:
    {
        returnValue = F("Am Beberbusch");
        break;
    }
    case 11209:
    {
        returnValue = F("Am Becher");
        break;
    }
    case 11210:
    {
        returnValue = F("Am Becher Busch");
        break;
    }
    case 11211:
    {
        returnValue = F("Am Becherweg");
        break;
    }
    case 11212:
    {
        returnValue = F("Am Bechtrain");
        break;
    }
    case 11213:
    {
        returnValue = F("Am Beck");
        break;
    }
    case 11214:
    {
        returnValue = F("Am Beckenacker");
        break;
    }
    case 11215:
    {
        returnValue = F("Am Beckenberg");
        break;
    }
    case 11216:
    {
        returnValue = F("Am Beckenbühl");
        break;
    }
    case 11217:
    {
        returnValue = F("Am Beckenhaupt");
        break;
    }
    case 11218:
    {
        returnValue = F("Am Beckenpfad");
        break;
    }
    case 11219:
    {
        returnValue = F("Am Beckenweiher");
        break;
    }
    case 11220:
    {
        returnValue = F("Am Becker");
        break;
    }
    case 11221:
    {
        returnValue = F("Am Becker Teich");
        break;
    }
    case 11222:
    {
        returnValue = F("Am Beckeracker");
        break;
    }
    case 11223:
    {
        returnValue = F("Am Beckerbruch");
        break;
    }
    case 11224:
    {
        returnValue = F("Am Beckersbaum");
        break;
    }
    case 11225:
    {
        returnValue = F("Am Beckersberg");
        break;
    }
    case 11226:
    {
        returnValue = F("Am Beckerswäldchen");
        break;
    }
    case 11227:
    {
        returnValue = F("Am Beckerwald");
        break;
    }
    case 11228:
    {
        returnValue = F("Am Becketal");
        break;
    }
    case 11229:
    {
        returnValue = F("Am Beckfeld");
        break;
    }
    case 11230:
    {
        returnValue = F("Am Beckmannplatz");
        break;
    }
    case 11231:
    {
        returnValue = F("Am Beckshof");
        break;
    }
    case 11232:
    {
        returnValue = F("Am Beeck");
        break;
    }
    case 11233:
    {
        returnValue = F("Am Beeckfließ");
        break;
    }
    case 11234:
    {
        returnValue = F("Am Beeholt");
        break;
    }
    case 11235:
    {
        returnValue = F("Am Beek");
        break;
    }
    case 11236:
    {
        returnValue = F("Am Beeke");
        break;
    }
    case 11237:
    {
        returnValue = F("Am Beekebach");
        break;
    }
    case 11238:
    {
        returnValue = F("Am Beekeberg");
        break;
    }
    case 11239:
    {
        returnValue = F("Am Beekerkamp");
        break;
    }
    case 11240:
    {
        returnValue = F("Am Beekeufer");
        break;
    }
    case 11241:
    {
        returnValue = F("Am Beekfeld");
        break;
    }
    case 11242:
    {
        returnValue = F("Am Beekmoor");
        break;
    }
    case 11243:
    {
        returnValue = F("Am Beekschen Feld");
        break;
    }
    case 11244:
    {
        returnValue = F("Am Beektal");
        break;
    }
    case 11245:
    {
        returnValue = F("Am Beel");
        break;
    }
    case 11246:
    {
        returnValue = F("Am Beelertskotten");
        break;
    }
    case 11247:
    {
        returnValue = F("Am Beerberg");
        break;
    }
    case 11248:
    {
        returnValue = F("Am Beerenberg");
        break;
    }
    case 11249:
    {
        returnValue = F("Am Beerenbrünnlein");
        break;
    }
    case 11250:
    {
        returnValue = F("Am Beerenbühl");
        break;
    }
    case 11251:
    {
        returnValue = F("Am Beerenfeld");
        break;
    }
    case 11252:
    {
        returnValue = F("Am Beerengraben");
        break;
    }
    case 11253:
    {
        returnValue = F("Am Beerenhag");
        break;
    }
    case 11254:
    {
        returnValue = F("Am Beerenmoosgraben");
        break;
    }
    case 11255:
    {
        returnValue = F("Am Beerholz");
        break;
    }
    case 11256:
    {
        returnValue = F("Am Beerhübel");
        break;
    }
    case 11257:
    {
        returnValue = F("Am Beermannshaus");
        break;
    }
    case 11258:
    {
        returnValue = F("Am Beerrain");
        break;
    }
    case 11259:
    {
        returnValue = F("Am Beerweiher");
        break;
    }
    case 11260:
    {
        returnValue = F("Am Beesekolk");
        break;
    }
    case 11261:
    {
        returnValue = F("Am Beetacker");
        break;
    }
    case 11262:
    {
        returnValue = F("Am Beete");
        break;
    }
    case 11263:
    {
        returnValue = F("Am Beetenbusch");
        break;
    }
    case 11264:
    {
        returnValue = F("Am Beginenhof");
        break;
    }
    case 11265:
    {
        returnValue = F("Am Beginnenkamp");
        break;
    }
    case 11266:
    {
        returnValue = F("Am Begrabenholz");
        break;
    }
    case 11267:
    {
        returnValue = F("Am Behl");
        break;
    }
    case 11268:
    {
        returnValue = F("Am Behlersee");
        break;
    }
    case 11269:
    {
        returnValue = F("Am Behnckenhof");
        break;
    }
    case 11270:
    {
        returnValue = F("Am Behrenberg");
        break;
    }
    case 11271:
    {
        returnValue = F("Am Behrenhof");
        break;
    }
    case 11272:
    {
        returnValue = F("Am Behrenteich");
        break;
    }
    case 11273:
    {
        returnValue = F("Am Behringshof");
        break;
    }
    case 11274:
    {
        returnValue = F("Am Behälterberg");
        break;
    }
    case 11275:
    {
        returnValue = F("Am Behälterweiher");
        break;
    }
    case 11276:
    {
        returnValue = F("Am Beiberg");
        break;
    }
    case 11277:
    {
        returnValue = F("Am Beibert");
        break;
    }
    case 11278:
    {
        returnValue = F("Am Beiderwand");
        break;
    }
    case 11279:
    {
        returnValue = F("Am Beierfeld");
        break;
    }
    case 11280:
    {
        returnValue = F("Am Beierpöhl");
        break;
    }
    case 11281:
    {
        returnValue = F("Am Beiersberg");
        break;
    }
    case 11282:
    {
        returnValue = F("Am Beiese");
        break;
    }
    case 11283:
    {
        returnValue = F("Am Beigut");
        break;
    }
    case 11284:
    {
        returnValue = F("Am Beiksoll");
        break;
    }
    case 11285:
    {
        returnValue = F("Am Beil");
        break;
    }
    case 11286:
    {
        returnValue = F("Am Beilstein");
        break;
    }
    case 11287:
    {
        returnValue = F("Am Beinestein");
        break;
    }
    case 11288:
    {
        returnValue = F("Am Beinker");
        break;
    }
    case 11289:
    {
        returnValue = F("Am Beinschuh");
        break;
    }
    case 11290:
    {
        returnValue = F("Am Beisebach");
        break;
    }
    case 11291:
    {
        returnValue = F("Am Beisenbusch");
        break;
    }
    case 11292:
    {
        returnValue = F("Am Beispring");
        break;
    }
    case 11293:
    {
        returnValue = F("Am Beistensoll");
        break;
    }
    case 11294:
    {
        returnValue = F("Am Beistück");
        break;
    }
    case 11295:
    {
        returnValue = F("Am Beißberg");
        break;
    }
    case 11296:
    {
        returnValue = F("Am Beißel");
        break;
    }
    case 11297:
    {
        returnValue = F("Am Bek");
        break;
    }
    case 11298:
    {
        returnValue = F("Am Bekampsberg");
        break;
    }
    case 11299:
    {
        returnValue = F("Am Bekbrook");
        break;
    }
    case 11300:
    {
        returnValue = F("Am Bekeshoop");
        break;
    }
    case 11301:
    {
        returnValue = F("Am Belfastpark");
        break;
    }
    case 11302:
    {
        returnValue = F("Am Belleklauer");
        break;
    }
    case 11303:
    {
        returnValue = F("Am Bellenbaum");
        break;
    }
    case 11304:
    {
        returnValue = F("Am Bellenplatz");
        break;
    }
    case 11305:
    {
        returnValue = F("Am Bellensee");
        break;
    }
    case 11306:
    {
        returnValue = F("Am Bellenweg");
        break;
    }
    case 11307:
    {
        returnValue = F("Am Beller Bach");
        break;
    }
    case 11308:
    {
        returnValue = F("Am Beller Berg");
        break;
    }
    case 11309:
    {
        returnValue = F("Am Beller Weg");
        break;
    }
    case 11310:
    {
        returnValue = F("Am Beller Wehr");
        break;
    }
    case 11311:
    {
        returnValue = F("Am Bellerbek");
        break;
    }
    case 11312:
    {
        returnValue = F("Am Bellersheimer Fußweg");
        break;
    }
    case 11313:
    {
        returnValue = F("Am Bellershof");
        break;
    }
    case 11314:
    {
        returnValue = F("Am Bellerstein");
        break;
    }
    case 11315:
    {
        returnValue = F("Am Bellevue");
        break;
    }
    case 11316:
    {
        returnValue = F("Am Bellingholz");
        break;
    }
    case 11317:
    {
        returnValue = F("Am Belmermoor");
        break;
    }
    case 11318:
    {
        returnValue = F("Am Belmsdorfer Berg");
        break;
    }
    case 11319:
    {
        returnValue = F("Am Belowberg");
        break;
    }
    case 11320:
    {
        returnValue = F("Am Belt");
        break;
    }
    case 11321:
    {
        returnValue = F("Am Belvedere");
        break;
    }
    case 11322:
    {
        returnValue = F("Am Belzappel");
        break;
    }
    case 11323:
    {
        returnValue = F("Am Belzbecker");
        break;
    }
    case 11324:
    {
        returnValue = F("Am Belzer");
        break;
    }
    case 11325:
    {
        returnValue = F("Am Bemberg");
        break;
    }
    case 11326:
    {
        returnValue = F("Am Bendacker");
        break;
    }
    case 11327:
    {
        returnValue = F("Am Bendel");
        break;
    }
    case 11328:
    {
        returnValue = F("Am Bendelstein");
        break;
    }
    case 11329:
    {
        returnValue = F("Am Benden");
        break;
    }
    case 11330:
    {
        returnValue = F("Am Bendenbusch");
        break;
    }
    case 11331:
    {
        returnValue = F("Am Bendenpütz");
        break;
    }
    case 11332:
    {
        returnValue = F("Am Bendersbach");
        break;
    }
    case 11333:
    {
        returnValue = F("Am Benderskothen");
        break;
    }
    case 11334:
    {
        returnValue = F("Am Bendgraben");
        break;
    }
    case 11335:
    {
        returnValue = F("Am Bendmannsfeld");
        break;
    }
    case 11336:
    {
        returnValue = F("Am Bengelsbusch");
        break;
    }
    case 11337:
    {
        returnValue = F("Am Bengst");
        break;
    }
    case 11338:
    {
        returnValue = F("Am Bengt");
        break;
    }
    case 11339:
    {
        returnValue = F("Am Benitz");
        break;
    }
    case 11340:
    {
        returnValue = F("Am Benndorfer Park");
        break;
    }
    case 11341:
    {
        returnValue = F("Am Bennecken");
        break;
    }
    case 11342:
    {
        returnValue = F("Am Bennenberg");
        break;
    }
    case 11343:
    {
        returnValue = F("Am Bennenbruch");
        break;
    }
    case 11344:
    {
        returnValue = F("Am Bennertor");
        break;
    }
    case 11345:
    {
        returnValue = F("Am Bennevoß");
        break;
    }
    case 11346:
    {
        returnValue = F("Am Bensengärtle");
        break;
    }
    case 11347:
    {
        returnValue = F("Am Benser Tief");
        break;
    }
    case 11348:
    {
        returnValue = F("Am Benthal");
        break;
    }
    case 11349:
    {
        returnValue = F("Am Bentheim");
        break;
    }
    case 11350:
    {
        returnValue = F("Am Bentinkshof");
        break;
    }
    case 11351:
    {
        returnValue = F("Am Benzenbergel");
        break;
    }
    case 11352:
    {
        returnValue = F("Am Benzrain");
        break;
    }
    case 11353:
    {
        returnValue = F("Am Bequemen Weg");
        break;
    }
    case 11354:
    {
        returnValue = F("Am Berber");
        break;
    }
    case 11355:
    {
        returnValue = F("Am Bereler Berg");
        break;
    }
    case 11356:
    {
        returnValue = F("Am Berenbach");
        break;
    }
    case 11357:
    {
        returnValue = F("Am Berendsborn");
        break;
    }
    case 11358:
    {
        returnValue = F("Am Berg");
        break;
    }
    case 11359:
    {
        returnValue = F("Am Berg beim Gartenhaus");
        break;
    }
    case 11360:
    {
        returnValue = F("Am Bergacker");
        break;
    }
    case 11361:
    {
        returnValue = F("Am Berganger");
        break;
    }
    case 11362:
    {
        returnValue = F("Am Bergbach");
        break;
    }
    case 11363:
    {
        returnValue = F("Am Bergbad");
        break;
    }
    case 11364:
    {
        returnValue = F("Am Bergbaumuseum");
        break;
    }
    case 11365:
    {
        returnValue = F("Am Bergblick");
        break;
    }
    case 11366:
    {
        returnValue = F("Am Bergborn");
        break;
    }
    case 11367:
    {
        returnValue = F("Am Bergcafe");
        break;
    }
    case 11368:
    {
        returnValue = F("Am Bergdahle");
        break;
    }
    case 11369:
    {
        returnValue = F("Am Berge");
        break;
    }
    case 11370:
    {
        returnValue = F("Am Bergedorfer Schiffgraben");
        break;
    }
    case 11371:
    {
        returnValue = F("Am Bergei");
        break;
    }
    case 11372:
    {
        returnValue = F("Am Bergel");
        break;
    }
    case 11373:
    {
        returnValue = F("Am Bergelchen");
        break;
    }
    case 11374:
    {
        returnValue = F("Am Bergele");
        break;
    }
    case 11375:
    {
        returnValue = F("Am Bergenfeld");
        break;
    }
    case 11376:
    {
        returnValue = F("Am Bergenholz");
        break;
    }
    case 11377:
    {
        returnValue = F("Am Bergensee");
        break;
    }
    case 11378:
    {
        returnValue = F("Am Berger Feld");
        break;
    }
    case 11379:
    {
        returnValue = F("Am Bergeracker");
        break;
    }
    case 11380:
    {
        returnValue = F("Am Bergerfeld");
        break;
    }
    case 11381:
    {
        returnValue = F("Am Bergerhof");
        break;
    }
    case 11382:
    {
        returnValue = F("Am Bergerot");
        break;
    }
    case 11383:
    {
        returnValue = F("Am Bergerpesch");
        break;
    }
    case 11384:
    {
        returnValue = F("Am Bergers Rücken");
        break;
    }
    case 11385:
    {
        returnValue = F("Am Bergesch");
        break;
    }
    case 11386:
    {
        returnValue = F("Am Bergeshof");
        break;
    }
    case 11387:
    {
        returnValue = F("Am Bergesweg");
        break;
    }
    case 11388:
    {
        returnValue = F("Am Bergfeld");
        break;
    }
    case 11389:
    {
        returnValue = F("Am Bergfelde");
        break;
    }
    case 11390:
    {
        returnValue = F("Am Bergfriedhof");
        break;
    }
    case 11391:
    {
        returnValue = F("Am Bergfürst");
        break;
    }
    case 11392:
    {
        returnValue = F("Am Berggarten");
        break;
    }
    case 11393:
    {
        returnValue = F("Am Berggraben");
        break;
    }
    case 11394:
    {
        returnValue = F("Am Berggrüble");
        break;
    }
    case 11395:
    {
        returnValue = F("Am Berggut");
        break;
    }
    case 11396:
    {
        returnValue = F("Am Berghain");
        break;
    }
    case 11397:
    {
        returnValue = F("Am Berghang");
        break;
    }
    case 11398:
    {
        returnValue = F("Am Berghaus");
        break;
    }
    case 11399:
    {
        returnValue = F("Am Berghof");
        break;
    }
    case 11400:
    {
        returnValue = F("Am Berghofe");
        break;
    }
    case 11401:
    {
        returnValue = F("Am Bergholz");
        break;
    }
    case 11402:
    {
        returnValue = F("Am Berghölzchen");
        break;
    }
    case 11403:
    {
        returnValue = F("Am Bergischen Hof");
        break;
    }
    case 11404:
    {
        returnValue = F("Am Bergkamp");
        break;
    }
    case 11405:
    {
        returnValue = F("Am Bergkeller");
        break;
    }
    case 11406:
    {
        returnValue = F("Am Bergkloster");
        break;
    }
    case 11407:
    {
        returnValue = F("Am Bergl");
        break;
    }
    case 11408:
    {
        returnValue = F("Am Bergland");
        break;
    }
    case 11409:
    {
        returnValue = F("Am Bergle");
        break;
    }
    case 11410:
    {
        returnValue = F("Am Berglein");
        break;
    }
    case 11411:
    {
        returnValue = F("Am Berglesfeld");
        break;
    }
    case 11412:
    {
        returnValue = F("Am Berglesgraben");
        break;
    }
    case 11413:
    {
        returnValue = F("Am Bergleweg");
        break;
    }
    case 11414:
    {
        returnValue = F("Am Bergmahd");
        break;
    }
    case 11415:
    {
        returnValue = F("Am Bergmann");
        break;
    }
    case 11416:
    {
        returnValue = F("Am Bergmannspfad");
        break;
    }
    case 11417:
    {
        returnValue = F("Am Bergmoos");
        break;
    }
    case 11418:
    {
        returnValue = F("Am Bergmorgen");
        break;
    }
    case 11419:
    {
        returnValue = F("Am Bergnerfeld");
        break;
    }
    case 11420:
    {
        returnValue = F("Am Bergob");
        break;
    }
    case 11421:
    {
        returnValue = F("Am Bergpark");
        break;
    }
    case 11422:
    {
        returnValue = F("Am Bergpfad");
        break;
    }
    case 11423:
    {
        returnValue = F("Am Bergquell");
        break;
    }
    case 11424:
    {
        returnValue = F("Am Bergrain");
        break;
    }
    case 11425:
    {
        returnValue = F("Am Bergring");
        break;
    }
    case 11426:
    {
        returnValue = F("Am Bergrund");
        break;
    }
    case 11427:
    {
        returnValue = F("Am Bergrücken");
        break;
    }
    case 11428:
    {
        returnValue = F("Am Bergschlag");
        break;
    }
    case 11429:
    {
        returnValue = F("Am Bergschlößchen");
        break;
    }
    case 11430:
    {
        returnValue = F("Am Bergsee");
        break;
    }
    case 11431:
    {
        returnValue = F("Am Bergsiefen");
        break;
    }
    case 11432:
    {
        returnValue = F("Am Bergsiek");
        break;
    }
    case 11433:
    {
        returnValue = F("Am Bergsportplatz");
        break;
    }
    case 11434:
    {
        returnValue = F("Am Bergstall");
        break;
    }
    case 11435:
    {
        returnValue = F("Am Bergsteig");
        break;
    }
    case 11436:
    {
        returnValue = F("Am Bergstein");
        break;
    }
    case 11437:
    {
        returnValue = F("Am Bergstollen");
        break;
    }
    case 11438:
    {
        returnValue = F("Am Bergstöffel");
        break;
    }
    case 11439:
    {
        returnValue = F("Am Bergstück");
        break;
    }
    case 11440:
    {
        returnValue = F("Am Bergteich");
        break;
    }
    case 11441:
    {
        returnValue = F("Am Bergwald");
        break;
    }
    case 11442:
    {
        returnValue = F("Am Bergwasen");
        break;
    }
    case 11443:
    {
        returnValue = F("Am Bergwasser");
        break;
    }
    case 11444:
    {
        returnValue = F("Am Bergweg");
        break;
    }
    case 11445:
    {
        returnValue = F("Am Bergweiher");
        break;
    }
    case 11446:
    {
        returnValue = F("Am Bergwerk");
        break;
    }
    case 11447:
    {
        returnValue = F("Am Bergwerk Reden");
        break;
    }
    case 11448:
    {
        returnValue = F("Am Bergwerkswald");
        break;
    }
    case 11449:
    {
        returnValue = F("Am Bergwinkel");
        break;
    }
    case 11450:
    {
        returnValue = F("Am Bergwäldchen");
        break;
    }
    case 11451:
    {
        returnValue = F("Am Bergäcker");
        break;
    }
    case 11452:
    {
        returnValue = F("Am Bergösch");
        break;
    }
    case 11453:
    {
        returnValue = F("Am Bericher Holz");
        break;
    }
    case 11454:
    {
        returnValue = F("Am Berishof");
        break;
    }
    case 11455:
    {
        returnValue = F("Am Berkeibach");
        break;
    }
    case 11456:
    {
        returnValue = F("Am Berkelbogen");
        break;
    }
    case 11457:
    {
        returnValue = F("Am Berkelsee");
        break;
    }
    case 11458:
    {
        returnValue = F("Am Berkholzer Wald");
        break;
    }
    case 11459:
    {
        returnValue = F("Am Berkhöpen");
        break;
    }
    case 11460:
    {
        returnValue = F("Am Berkmansgraben");
        break;
    }
    case 11461:
    {
        returnValue = F("Am Berliner Platz");
        break;
    }
    case 11462:
    {
        returnValue = F("Am Berliner Ring");
        break;
    }
    case 11463:
    {
        returnValue = F("Am Berliner Tor");
        break;
    }
    case 11464:
    {
        returnValue = F("Am Berlinger Bach");
        break;
    }
    case 11465:
    {
        returnValue = F("Am Bermberg");
        break;
    }
    case 11466:
    {
        returnValue = F("Am Bermerich");
        break;
    }
    case 11467:
    {
        returnValue = F("Am Berndebach");
        break;
    }
    case 11468:
    {
        returnValue = F("Am Bernebrock");
        break;
    }
    case 11469:
    {
        returnValue = F("Am Bernester Feld");
        break;
    }
    case 11470:
    {
        returnValue = F("Am Bernhardsberg");
        break;
    }
    case 11471:
    {
        returnValue = F("Am Bernhardsgraben");
        break;
    }
    case 11472:
    {
        returnValue = F("Am Bernhardspfad");
        break;
    }
    case 11473:
    {
        returnValue = F("Am Bernhardstein");
        break;
    }
    case 11474:
    {
        returnValue = F("Am Bernichenberg");
        break;
    }
    case 11475:
    {
        returnValue = F("Am Bernlohe");
        break;
    }
    case 11476:
    {
        returnValue = F("Am Bernrieder Holz");
        break;
    }
    case 11477:
    {
        returnValue = F("Am Bernstein");
        break;
    }
    case 11478:
    {
        returnValue = F("Am Bernsteinsee");
        break;
    }
    case 11479:
    {
        returnValue = F("Am Bersberg");
        break;
    }
    case 11480:
    {
        returnValue = F("Am Bertelsweiher");
        break;
    }
    case 11481:
    {
        returnValue = F("Am Bertenberg");
        break;
    }
    case 11482:
    {
        returnValue = F("Am Berthaschacht");
        break;
    }
    case 11483:
    {
        returnValue = F("Am Bertram");
        break;
    }
    case 11484:
    {
        returnValue = F("Am Bertrams");
        break;
    }
    case 11485:
    {
        returnValue = F("Am Bertrams Weiher");
        break;
    }
    case 11486:
    {
        returnValue = F("Am Bertramshof");
        break;
    }
    case 11487:
    {
        returnValue = F("Am Berumerfehnkanal");
        break;
    }
    case 11488:
    {
        returnValue = F("Am Berzdorfer See");
        break;
    }
    case 11489:
    {
        returnValue = F("Am Besan");
        break;
    }
    case 11490:
    {
        returnValue = F("Am Beschert Glück");
        break;
    }
    case 11491:
    {
        returnValue = F("Am Beschlag");
        break;
    }
    case 11492:
    {
        returnValue = F("Am Beschlächt");
        break;
    }
    case 11493:
    {
        returnValue = F("Am Besebach");
        break;
    }
    case 11494:
    {
        returnValue = F("Am Besenbeker Moor");
        break;
    }
    case 11495:
    {
        returnValue = F("Am Besenberg");
        break;
    }
    case 11496:
    {
        returnValue = F("Am Besendorfer Berg");
        break;
    }
    case 11497:
    {
        returnValue = F("Am Bessunger Forst");
        break;
    }
    case 11498:
    {
        returnValue = F("Am Bessunger Forsthaus");
        break;
    }
    case 11499:
    {
        returnValue = F("Am Bestenborn");
        break;
    }
    case 11500:
    {
        returnValue = F("Am Betberg");
        break;
    }
    case 11501:
    {
        returnValue = F("Am Betelsberg");
        break;
    }
    case 11502:
    {
        returnValue = F("Am Bethof");
        break;
    }
    case 11503:
    {
        returnValue = F("Am Betonwerk");
        break;
    }
    case 11504:
    {
        returnValue = F("Am Betschkamp");
        break;
    }
    case 11505:
    {
        returnValue = F("Am Bettacker");
        break;
    }
    case 11506:
    {
        returnValue = F("Am Bettelfeld");
        break;
    }
    case 11507:
    {
        returnValue = F("Am Bettelmannsbaum");
        break;
    }
    case 11508:
    {
        returnValue = F("Am Bettelstein");
        break;
    }
    case 11509:
    {
        returnValue = F("Am Bettelweg");
        break;
    }
    case 11510:
    {
        returnValue = F("Am Bettenacker");
        break;
    }
    case 11511:
    {
        returnValue = F("Am Bettenberg");
        break;
    }
    case 11512:
    {
        returnValue = F("Am Bettenheimer Hof");
        break;
    }
    case 11513:
    {
        returnValue = F("Am Bettenser Berg");
        break;
    }
    case 11514:
    {
        returnValue = F("Am Bettikumer Hof");
        break;
    }
    case 11515:
    {
        returnValue = F("Am Bettler");
        break;
    }
    case 11516:
    {
        returnValue = F("Am Betzen");
        break;
    }
    case 11517:
    {
        returnValue = F("Am Betzenberg");
        break;
    }
    case 11518:
    {
        returnValue = F("Am Betzenfeld");
        break;
    }
    case 11519:
    {
        returnValue = F("Am Betzenloch");
        break;
    }
    case 11520:
    {
        returnValue = F("Am Betzenröder Weg");
        break;
    }
    case 11521:
    {
        returnValue = F("Am Betzenstein");
        break;
    }
    case 11522:
    {
        returnValue = F("Am Betzigeröder Weg");
        break;
    }
    case 11523:
    {
        returnValue = F("Am Beu");
        break;
    }
    case 11524:
    {
        returnValue = F("Am Beuchlitzer Teich");
        break;
    }
    case 11525:
    {
        returnValue = F("Am Beuditzer Weg");
        break;
    }
    case 11526:
    {
        returnValue = F("Am Beuel");
        break;
    }
    case 11527:
    {
        returnValue = F("Am Beuelsbach");
        break;
    }
    case 11528:
    {
        returnValue = F("Am Beuernholz");
        break;
    }
    case 11529:
    {
        returnValue = F("Am Beuhof");
        break;
    }
    case 11530:
    {
        returnValue = F("Am Beul");
        break;
    }
    case 11531:
    {
        returnValue = F("Am Beulardstein");
        break;
    }
    case 11532:
    {
        returnValue = F("Am Beulchen");
        break;
    }
    case 11533:
    {
        returnValue = F("Am Beule");
        break;
    }
    case 11534:
    {
        returnValue = F("Am Beunefeld");
        break;
    }
    case 11535:
    {
        returnValue = F("Am Beurenberg");
        break;
    }
    case 11536:
    {
        returnValue = F("Am Beustschacht");
        break;
    }
    case 11537:
    {
        returnValue = F("Am Beutelweg");
        break;
    }
    case 11538:
    {
        returnValue = F("Am Beutenbach");
        break;
    }
    case 11539:
    {
        returnValue = F("Am Beutig");
        break;
    }
    case 11540:
    {
        returnValue = F("Am Bevertal");
        break;
    }
    case 11541:
    {
        returnValue = F("Am Bewegungsbad");
        break;
    }
    case 11542:
    {
        returnValue = F("Am Bexaddetal");
        break;
    }
    case 11543:
    {
        returnValue = F("Am Bexterholz");
        break;
    }
    case 11544:
    {
        returnValue = F("Am Beyenkamp");
        break;
    }
    case 11545:
    {
        returnValue = F("Am Beyerteich");
        break;
    }
    case 11546:
    {
        returnValue = F("Am Beyertzhof");
        break;
    }
    case 11547:
    {
        returnValue = F("Am Biberbach");
        break;
    }
    case 11548:
    {
        returnValue = F("Am Biberbau");
        break;
    }
    case 11549:
    {
        returnValue = F("Am Biberberg");
        break;
    }
    case 11550:
    {
        returnValue = F("Am Biberdamm");
        break;
    }
    case 11551:
    {
        returnValue = F("Am Biberfeld");
        break;
    }
    case 11552:
    {
        returnValue = F("Am Bibergarten");
        break;
    }
    case 11553:
    {
        returnValue = F("Am Biberhaus");
        break;
    }
    case 11554:
    {
        returnValue = F("Am Biberholz");
        break;
    }
    case 11555:
    {
        returnValue = F("Am Bibis");
        break;
    }
    case 11556:
    {
        returnValue = F("Am Biblus");
        break;
    }
    case 11557:
    {
        returnValue = F("Am Bibrasberg");
        break;
    }
    case 11558:
    {
        returnValue = F("Am Bichel");
        break;
    }
    case 11559:
    {
        returnValue = F("Am Bichele");
        break;
    }
    case 11560:
    {
        returnValue = F("Am Bichelfeld");
        break;
    }
    case 11561:
    {
        returnValue = F("Am Bichkamp");
        break;
    }
    case 11562:
    {
        returnValue = F("Am Bichl");
        break;
    }
    case 11563:
    {
        returnValue = F("Am Bichlberg");
        break;
    }
    case 11564:
    {
        returnValue = F("Am Bichlerhof");
        break;
    }
    case 11565:
    {
        returnValue = F("Am Bichlgraben");
        break;
    }
    case 11566:
    {
        returnValue = F("Am Bichlhof");
        break;
    }
    case 11567:
    {
        returnValue = F("Am Bickeberg");
        break;
    }
    case 11568:
    {
        returnValue = F("Am Bickelacker");
        break;
    }
    case 11569:
    {
        returnValue = F("Am Bickeler");
        break;
    }
    case 11570:
    {
        returnValue = F("Am Bickplecken");
        break;
    }
    case 11571:
    {
        returnValue = F("Am Biddersbach");
        break;
    }
    case 11572:
    {
        returnValue = F("Am Bidi");
        break;
    }
    case 11573:
    {
        returnValue = F("Am Bieberbach");
        break;
    }
    case 11574:
    {
        returnValue = F("Am Bieberbau");
        break;
    }
    case 11575:
    {
        returnValue = F("Am Bieberbrunnen");
        break;
    }
    case 11576:
    {
        returnValue = F("Am Bieberlein");
        break;
    }
    case 11577:
    {
        returnValue = F("Am Biebesberg");
        break;
    }
    case 11578:
    {
        returnValue = F("Am Biebrichsbach");
        break;
    }
    case 11579:
    {
        returnValue = F("Am Biederitzer Busch");
        break;
    }
    case 11580:
    {
        returnValue = F("Am Biefel");
        break;
    }
    case 11581:
    {
        returnValue = F("Am Biegel");
        break;
    }
    case 11582:
    {
        returnValue = F("Am Biegen");
        break;
    }
    case 11583:
    {
        returnValue = F("Am Biegenbach");
        break;
    }
    case 11584:
    {
        returnValue = F("Am Biehl");
        break;
    }
    case 11585:
    {
        returnValue = F("Am Biehler");
        break;
    }
    case 11586:
    {
        returnValue = F("Am Biekenkamp");
        break;
    }
    case 11587:
    {
        returnValue = F("Am Biel");
        break;
    }
    case 11588:
    {
        returnValue = F("Am Bielbach");
        break;
    }
    case 11589:
    {
        returnValue = F("Am Bielebornring");
        break;
    }
    case 11590:
    {
        returnValue = F("Am Bielenberg");
        break;
    }
    case 11591:
    {
        returnValue = F("Am Bielstein");
        break;
    }
    case 11592:
    {
        returnValue = F("Am Biemerhof");
        break;
    }
    case 11593:
    {
        returnValue = F("Am Biemker Bach");
        break;
    }
    case 11594:
    {
        returnValue = F("Am Bienapfel");
        break;
    }
    case 11595:
    {
        returnValue = F("Am Bienbach");
        break;
    }
    case 11596:
    {
        returnValue = F("Am Bienberg");
        break;
    }
    case 11597:
    {
        returnValue = F("Am Bienenberg");
        break;
    }
    case 11598:
    {
        returnValue = F("Am Bienenbuckel");
        break;
    }
    case 11599:
    {
        returnValue = F("Am Bienenbusch");
        break;
    }
    case 11600:
    {
        returnValue = F("Am Bienengarten");
        break;
    }
    case 11601:
    {
        returnValue = F("Am Bienengäßchen");
        break;
    }
    case 11602:
    {
        returnValue = F("Am Bienenhang");
        break;
    }
    case 11603:
    {
        returnValue = F("Am Bienenhaus");
        break;
    }
    case 11604:
    {
        returnValue = F("Am Bienenhof");
        break;
    }
    case 11605:
    {
        returnValue = F("Am Bienenkorb");
        break;
    }
    case 11606:
    {
        returnValue = F("Am Bienenpfad");
        break;
    }
    case 11607:
    {
        returnValue = F("Am Bienensaug");
        break;
    }
    case 11608:
    {
        returnValue = F("Am Bienenschauer");
        break;
    }
    case 11609:
    {
        returnValue = F("Am Bienenstock");
        break;
    }
    case 11610:
    {
        returnValue = F("Am Bienenweg");
        break;
    }
    case 11611:
    {
        returnValue = F("Am Bienenzaun");
        break;
    }
    case 11612:
    {
        returnValue = F("Am Biengarten");
        break;
    }
    case 11613:
    {
        returnValue = F("Am Biengärtlein");
        break;
    }
    case 11614:
    {
        returnValue = F("Am Bienigrain");
        break;
    }
    case 11615:
    {
        returnValue = F("Am Bienrain");
        break;
    }
    case 11616:
    {
        returnValue = F("Am Bienrodsberg");
        break;
    }
    case 11617:
    {
        returnValue = F("Am Bienwald");
        break;
    }
    case 11618:
    {
        returnValue = F("Am Bierbach");
        break;
    }
    case 11619:
    {
        returnValue = F("Am Bierbaum");
        break;
    }
    case 11620:
    {
        returnValue = F("Am Bierberg");
        break;
    }
    case 11621:
    {
        returnValue = F("Am Bierbäumchen");
        break;
    }
    case 11622:
    {
        returnValue = F("Am Bierenbonnen");
        break;
    }
    case 11623:
    {
        returnValue = F("Am Biergarten");
        break;
    }
    case 11624:
    {
        returnValue = F("Am Bierhaus");
        break;
    }
    case 11625:
    {
        returnValue = F("Am Bierhues");
        break;
    }
    case 11626:
    {
        returnValue = F("Am Bierkeller");
        break;
    }
    case 11627:
    {
        returnValue = F("Am Bierl");
        break;
    }
    case 11628:
    {
        returnValue = F("Am Bierlichtbach");
        break;
    }
    case 11629:
    {
        returnValue = F("Am Biermannskothen");
        break;
    }
    case 11630:
    {
        returnValue = F("Am Biersiedersee");
        break;
    }
    case 11631:
    {
        returnValue = F("Am Biertappen");
        break;
    }
    case 11632:
    {
        returnValue = F("Am Bierweg");
        break;
    }
    case 11633:
    {
        returnValue = F("Am Bieselbach");
        break;
    }
    case 11634:
    {
        returnValue = F("Am Biesem");
        break;
    }
    case 11635:
    {
        returnValue = F("Am Biesenberg");
        break;
    }
    case 11636:
    {
        returnValue = F("Am Biesengrund");
        break;
    }
    case 11637:
    {
        returnValue = F("Am Biesinger Berg");
        break;
    }
    case 11638:
    {
        returnValue = F("Am Biesingsrain");
        break;
    }
    case 11639:
    {
        returnValue = F("Am Biesteln");
        break;
    }
    case 11640:
    {
        returnValue = F("Am Biestenkamp");
        break;
    }
    case 11641:
    {
        returnValue = F("Am Biesterbach");
        break;
    }
    case 11642:
    {
        returnValue = F("Am Biet");
        break;
    }
    case 11643:
    {
        returnValue = F("Am Bietigheimer Weg");
        break;
    }
    case 11644:
    {
        returnValue = F("Am Bietricher Holz");
        break;
    }
    case 11645:
    {
        returnValue = F("Am Bifang");
        break;
    }
    case 11646:
    {
        returnValue = F("Am Biggeufer");
        break;
    }
    case 11647:
    {
        returnValue = F("Am Bikowsee");
        break;
    }
    case 11648:
    {
        returnValue = F("Am Bild");
        break;
    }
    case 11649:
    {
        returnValue = F("Am Bildacker");
        break;
    }
    case 11650:
    {
        returnValue = F("Am Bildbach");
        break;
    }
    case 11651:
    {
        returnValue = F("Am Bildbaum");
        break;
    }
    case 11652:
    {
        returnValue = F("Am Bildberg");
        break;
    }
    case 11653:
    {
        returnValue = F("Am Bildchen");
        break;
    }
    case 11654:
    {
        returnValue = F("Am Bilderstock");
        break;
    }
    case 11655:
    {
        returnValue = F("Am Bilderstöckchen");
        break;
    }
    case 11656:
    {
        returnValue = F("Am Bilderweg");
        break;
    }
    case 11657:
    {
        returnValue = F("Am Bildgesbaum");
        break;
    }
    case 11658:
    {
        returnValue = F("Am Bildhäusle");
        break;
    }
    case 11659:
    {
        returnValue = F("Am Bildlein");
        break;
    }
    case 11660:
    {
        returnValue = F("Am Bildschnitzer");
        break;
    }
    case 11661:
    {
        returnValue = F("Am Bildstein");
        break;
    }
    case 11662:
    {
        returnValue = F("Am Bildstock");
        break;
    }
    case 11663:
    {
        returnValue = F("Am Bildstöckel");
        break;
    }
    case 11664:
    {
        returnValue = F("Am Bildstöckle");
        break;
    }
    case 11665:
    {
        returnValue = F("Am Bildwasen");
        break;
    }
    case 11666:
    {
        returnValue = F("Am Bill");
        break;
    }
    case 11667:
    {
        returnValue = F("Am Billacker");
        break;
    }
    case 11668:
    {
        returnValue = F("Am Billehang");
        break;
    }
    case 11669:
    {
        returnValue = F("Am Billerberge");
        break;
    }
    case 11670:
    {
        returnValue = F("Am Billgraben");
        break;
    }
    case 11671:
    {
        returnValue = F("Am Billig");
        break;
    }
    case 11672:
    {
        returnValue = F("Am Billingsborn");
        break;
    }
    case 11673:
    {
        returnValue = F("Am Bilsedorn");
        break;
    }
    case 11674:
    {
        returnValue = F("Am Bilstein");
        break;
    }
    case 11675:
    {
        returnValue = F("Am Bilten");
        break;
    }
    case 11676:
    {
        returnValue = F("Am Bilzacker");
        break;
    }
    case 11677:
    {
        returnValue = F("Am Bimbach");
        break;
    }
    case 11678:
    {
        returnValue = F("Am Bimmelbaum");
        break;
    }
    case 11679:
    {
        returnValue = F("Am Bimmig");
        break;
    }
    case 11680:
    {
        returnValue = F("Am Binderbach");
        break;
    }
    case 11681:
    {
        returnValue = F("Am Binderfeld");
        break;
    }
    case 11682:
    {
        returnValue = F("Am Binderholz");
        break;
    }
    case 11683:
    {
        returnValue = F("Am Bindersee");
        break;
    }
    case 11684:
    {
        returnValue = F("Am Bindes");
        break;
    }
    case 11685:
    {
        returnValue = F("Am Bindfeld");
        break;
    }
    case 11686:
    {
        returnValue = F("Am Bindling");
        break;
    }
    case 11687:
    {
        returnValue = F("Am Binger Tor");
        break;
    }
    case 11688:
    {
        returnValue = F("Am Bingerhof");
        break;
    }
    case 11689:
    {
        returnValue = F("Am Bingraben");
        break;
    }
    case 11690:
    {
        returnValue = F("Am Bingumer Deich");
        break;
    }
    case 11691:
    {
        returnValue = F("Am Bingumer Tief");
        break;
    }
    case 11692:
    {
        returnValue = F("Am Binisch");
        break;
    }
    case 11693:
    {
        returnValue = F("Am Binkenweg");
        break;
    }
    case 11694:
    {
        returnValue = F("Am Binnendamm");
        break;
    }
    case 11695:
    {
        returnValue = F("Am Binnenhafen");
        break;
    }
    case 11696:
    {
        returnValue = F("Am Binnensee");
        break;
    }
    case 11697:
    {
        returnValue = F("Am Binnentief");
        break;
    }
    case 11698:
    {
        returnValue = F("Am Binnenwasser");
        break;
    }
    case 11699:
    {
        returnValue = F("Am Binnerhagen");
        break;
    }
    case 11700:
    {
        returnValue = F("Am Binning");
        break;
    }
    case 11701:
    {
        returnValue = F("Am Binselberg");
        break;
    }
    case 11702:
    {
        returnValue = F("Am Binsenberg");
        break;
    }
    case 11703:
    {
        returnValue = F("Am Binsenbuck");
        break;
    }
    case 11704:
    {
        returnValue = F("Am Binsenrain");
        break;
    }
    case 11705:
    {
        returnValue = F("Am Binsenrasen");
        break;
    }
    case 11706:
    {
        returnValue = F("Am Binsenteich");
        break;
    }
    case 11707:
    {
        returnValue = F("Am Binsig");
        break;
    }
    case 11708:
    {
        returnValue = F("Am Binsweg");
        break;
    }
    case 11709:
    {
        returnValue = F("Am Binzelberg");
        break;
    }
    case 11710:
    {
        returnValue = F("Am Biopark");
        break;
    }
    case 11711:
    {
        returnValue = F("Am Biotop");
        break;
    }
    case 11712:
    {
        returnValue = F("Am Bippbach");
        break;
    }
    case 11713:
    {
        returnValue = F("Am Birbet");
        break;
    }
    case 11714:
    {
        returnValue = F("Am Birka");
        break;
    }
    case 11715:
    {
        returnValue = F("Am Birkacker");
        break;
    }
    case 11716:
    {
        returnValue = F("Am Birkehe");
        break;
    }
    case 11717:
    {
        returnValue = F("Am Birkel");
        break;
    }
    case 11718:
    {
        returnValue = F("Am Birkele");
        break;
    }
    case 11719:
    {
        returnValue = F("Am Birkelsberg");
        break;
    }
    case 11720:
    {
        returnValue = F("Am Birken");
        break;
    }
    case 11721:
    {
        returnValue = F("Am Birkenacker");
        break;
    }
    case 11722:
    {
        returnValue = F("Am Birkenbach");
        break;
    }
    case 11723:
    {
        returnValue = F("Am Birkenberg");
        break;
    }
    case 11724:
    {
        returnValue = F("Am Birkenberge");
        break;
    }
    case 11725:
    {
        returnValue = F("Am Birkenbleek");
        break;
    }
    case 11726:
    {
        returnValue = F("Am Birkenbrink");
        break;
    }
    case 11727:
    {
        returnValue = F("Am Birkenbruch");
        break;
    }
    case 11728:
    {
        returnValue = F("Am Birkenbrunnen");
        break;
    }
    case 11729:
    {
        returnValue = F("Am Birkenbuckel");
        break;
    }
    case 11730:
    {
        returnValue = F("Am Birkenbusch");
        break;
    }
    case 11731:
    {
        returnValue = F("Am Birkeneck");
        break;
    }
    case 11732:
    {
        returnValue = F("Am Birkenfeld");
        break;
    }
    case 11733:
    {
        returnValue = F("Am Birkengarten");
        break;
    }
    case 11734:
    {
        returnValue = F("Am Birkengraben");
        break;
    }
    case 11735:
    {
        returnValue = F("Am Birkengrund");
        break;
    }
    case 11736:
    {
        returnValue = F("Am Birkengrundbach");
        break;
    }
    case 11737:
    {
        returnValue = F("Am Birkengrün");
        break;
    }
    case 11738:
    {
        returnValue = F("Am Birkenhain");
        break;
    }
    case 11739:
    {
        returnValue = F("Am Birkenhang");
        break;
    }
    case 11740:
    {
        returnValue = F("Am Birkenhof");
        break;
    }
    case 11741:
    {
        returnValue = F("Am Birkenholz");
        break;
    }
    case 11742:
    {
        returnValue = F("Am Birkenhölzl");
        break;
    }
    case 11743:
    {
        returnValue = F("Am Birkenhübel");
        break;
    }
    case 11744:
    {
        returnValue = F("Am Birkenhügel");
        break;
    }
    case 11745:
    {
        returnValue = F("Am Birkenkamp");
        break;
    }
    case 11746:
    {
        returnValue = F("Am Birkenlohe");
        break;
    }
    case 11747:
    {
        returnValue = F("Am Birkenmoor");
        break;
    }
    case 11748:
    {
        returnValue = F("Am Birkenmoos");
        break;
    }
    case 11749:
    {
        returnValue = F("Am Birkenrain");
        break;
    }
    case 11750:
    {
        returnValue = F("Am Birkenrevier");
        break;
    }
    case 11751:
    {
        returnValue = F("Am Birkenschlag");
        break;
    }
    case 11752:
    {
        returnValue = F("Am Birkenschrötlein");
        break;
    }
    case 11753:
    {
        returnValue = F("Am Birkensee");
        break;
    }
    case 11754:
    {
        returnValue = F("Am Birkensteig");
        break;
    }
    case 11755:
    {
        returnValue = F("Am Birkenstein");
        break;
    }
    case 11756:
    {
        returnValue = F("Am Birkenstock");
        break;
    }
    case 11757:
    {
        returnValue = F("Am Birkenstrauch");
        break;
    }
    case 11758:
    {
        returnValue = F("Am Birkenstuhl");
        break;
    }
    case 11759:
    {
        returnValue = F("Am Birkenstück");
        break;
    }
    case 11760:
    {
        returnValue = F("Am Birkental");
        break;
    }
    case 11761:
    {
        returnValue = F("Am Birkenteich");
        break;
    }
    case 11762:
    {
        returnValue = F("Am Birkenwald");
        break;
    }
    case 11763:
    {
        returnValue = F("Am Birkenweg");
        break;
    }
    case 11764:
    {
        returnValue = F("Am Birkenwege");
        break;
    }
    case 11765:
    {
        returnValue = F("Am Birkenweiher");
        break;
    }
    case 11766:
    {
        returnValue = F("Am Birkenwäldchen");
        break;
    }
    case 11767:
    {
        returnValue = F("Am Birkerlberg");
        break;
    }
    case 11768:
    {
        returnValue = F("Am Birkes");
        break;
    }
    case 11769:
    {
        returnValue = F("Am Birkeshaus");
        break;
    }
    case 11770:
    {
        returnValue = F("Am Birket");
        break;
    }
    case 11771:
    {
        returnValue = F("Am Birketfeld");
        break;
    }
    case 11772:
    {
        returnValue = F("Am Birketle");
        break;
    }
    case 11773:
    {
        returnValue = F("Am Birkfeld");
        break;
    }
    case 11774:
    {
        returnValue = F("Am Birkhau");
        break;
    }
    case 11775:
    {
        returnValue = F("Am Birkhecker Berg");
        break;
    }
    case 11776:
    {
        returnValue = F("Am Birkhof");
        break;
    }
    case 11777:
    {
        returnValue = F("Am Birkholz");
        break;
    }
    case 11778:
    {
        returnValue = F("Am Birkich");
        break;
    }
    case 11779:
    {
        returnValue = F("Am Birkicht");
        break;
    }
    case 11780:
    {
        returnValue = F("Am Birkig");
        break;
    }
    case 11781:
    {
        returnValue = F("Am Birkl");
        break;
    }
    case 11782:
    {
        returnValue = F("Am Birkldobl");
        break;
    }
    case 11783:
    {
        returnValue = F("Am Birkle");
        break;
    }
    case 11784:
    {
        returnValue = F("Am Birkler");
        break;
    }
    case 11785:
    {
        returnValue = F("Am Birkli");
        break;
    }
    case 11786:
    {
        returnValue = F("Am Birkloch");
        break;
    }
    case 11787:
    {
        returnValue = F("Am Birkmahd");
        break;
    }
    case 11788:
    {
        returnValue = F("Am Birks");
        break;
    }
    case 11789:
    {
        returnValue = F("Am Birkshof");
        break;
    }
    case 11790:
    {
        returnValue = F("Am Birkwald");
        break;
    }
    case 11791:
    {
        returnValue = F("Am Birnbach");
        break;
    }
    case 11792:
    {
        returnValue = F("Am Birnbaum");
        break;
    }
    case 11793:
    {
        returnValue = F("Am Birnberg");
        break;
    }
    case 11794:
    {
        returnValue = F("Am Birnbusch");
        break;
    }
    case 11795:
    {
        returnValue = F("Am Birnbäumchen");
        break;
    }
    case 11796:
    {
        returnValue = F("Am Birnenacker");
        break;
    }
    case 11797:
    {
        returnValue = F("Am Birnengarten");
        break;
    }
    case 11798:
    {
        returnValue = F("Am Birnenweg");
        break;
    }
    case 11799:
    {
        returnValue = F("Am Birngarten");
        break;
    }
    case 11800:
    {
        returnValue = F("Am Birngraben");
        break;
    }
    case 11801:
    {
        returnValue = F("Am Birnstiel");
        break;
    }
    case 11802:
    {
        returnValue = F("Am Birresweg");
        break;
    }
    case 11803:
    {
        returnValue = F("Am Bisberg");
        break;
    }
    case 11804:
    {
        returnValue = F("Am Bischof");
        break;
    }
    case 11805:
    {
        returnValue = F("Am Bischoffsacker");
        break;
    }
    case 11806:
    {
        returnValue = F("Am Bischoffsberg");
        break;
    }
    case 11807:
    {
        returnValue = F("Am Bischofsacker");
        break;
    }
    case 11808:
    {
        returnValue = F("Am Bischofsberg");
        break;
    }
    case 11809:
    {
        returnValue = F("Am Bischofskreuz");
        break;
    }
    case 11810:
    {
        returnValue = F("Am Bischofsteich");
        break;
    }
    case 11811:
    {
        returnValue = F("Am Bischofswald");
        break;
    }
    case 11812:
    {
        returnValue = F("Am Bischofswasser");
        break;
    }
    case 11813:
    {
        returnValue = F("Am Bisgeshof");
        break;
    }
    case 11814:
    {
        returnValue = F("Am Bismarckpark");
        break;
    }
    case 11815:
    {
        returnValue = F("Am Bismarckstein");
        break;
    }
    case 11816:
    {
        returnValue = F("Am Bismarckturm");
        break;
    }
    case 11817:
    {
        returnValue = F("Am Bispinger Weg");
        break;
    }
    case 11818:
    {
        returnValue = F("Am Bissenberg");
        break;
    }
    case 11819:
    {
        returnValue = F("Am Bist");
        break;
    }
    case 11820:
    {
        returnValue = F("Am Bitschberg");
        break;
    }
    case 11821:
    {
        returnValue = F("Am Bitschle");
        break;
    }
    case 11822:
    {
        returnValue = F("Am Bittborn");
        break;
    }
    case 11823:
    {
        returnValue = F("Am Bittelgut");
        break;
    }
    case 11824:
    {
        returnValue = F("Am Bittenbach");
        break;
    }
    case 11825:
    {
        returnValue = F("Am Bitterbach");
        break;
    }
    case 11826:
    {
        returnValue = F("Am Bitterberg");
        break;
    }
    case 11827:
    {
        returnValue = F("Am Bittkreuz");
        break;
    }
    case 11828:
    {
        returnValue = F("Am Bittmorgen");
        break;
    }
    case 11829:
    {
        returnValue = F("Am Bitzeberg");
        break;
    }
    case 11830:
    {
        returnValue = F("Am Bitzen");
        break;
    }
    case 11831:
    {
        returnValue = F("Am Bitzenberg");
        break;
    }
    case 11832:
    {
        returnValue = F("Am Bitzenkamp");
        break;
    }
    case 11833:
    {
        returnValue = F("Am Bitzenloh");
        break;
    }
    case 11834:
    {
        returnValue = F("Am Bitzenweiher");
        break;
    }
    case 11835:
    {
        returnValue = F("Am Bladen");
        break;
    }
    case 11836:
    {
        returnValue = F("Am Blaffertsberg");
        break;
    }
    case 11837:
    {
        returnValue = F("Am Blagschenberge");
        break;
    }
    case 11838:
    {
        returnValue = F("Am Blaichberg");
        break;
    }
    case 11839:
    {
        returnValue = F("Am Blandikower Weg");
        break;
    }
    case 11840:
    {
        returnValue = F("Am Blanken Boom");
        break;
    }
    case 11841:
    {
        returnValue = F("Am Blanken Ende");
        break;
    }
    case 11842:
    {
        returnValue = F("Am Blanken Lande");
        break;
    }
    case 11843:
    {
        returnValue = F("Am Blanken Moor");
        break;
    }
    case 11844:
    {
        returnValue = F("Am Blanken Pohle");
        break;
    }
    case 11845:
    {
        returnValue = F("Am Blanken Weg");
        break;
    }
    case 11846:
    {
        returnValue = F("Am Blankenauer");
        break;
    }
    case 11847:
    {
        returnValue = F("Am Blankenberg");
        break;
    }
    case 11848:
    {
        returnValue = F("Am Blankenburger Tor");
        break;
    }
    case 11849:
    {
        returnValue = F("Am Blankenfeld");
        break;
    }
    case 11850:
    {
        returnValue = F("Am Blankenmoor");
        break;
    }
    case 11851:
    {
        returnValue = F("Am Blankenrain");
        break;
    }
    case 11852:
    {
        returnValue = F("Am Blankensee");
        break;
    }
    case 11853:
    {
        returnValue = F("Am Blankenwasser");
        break;
    }
    case 11854:
    {
        returnValue = F("Am Blankgarten");
        break;
    }
    case 11855:
    {
        returnValue = F("Am Blanksee");
        break;
    }
    case 11856:
    {
        returnValue = F("Am Blann");
        break;
    }
    case 11857:
    {
        returnValue = F("Am Blanschen");
        break;
    }
    case 11858:
    {
        returnValue = F("Am Blasenberg");
        break;
    }
    case 11859:
    {
        returnValue = F("Am Blasiwald");
        break;
    }
    case 11860:
    {
        returnValue = F("Am Blassenberg");
        break;
    }
    case 11861:
    {
        returnValue = F("Am Blassenpfad");
        break;
    }
    case 11862:
    {
        returnValue = F("Am Blaubeerbusch");
        break;
    }
    case 11863:
    {
        returnValue = F("Am Blaubrunnen");
        break;
    }
    case 11864:
    {
        returnValue = F("Am Blauen Berg");
        break;
    }
    case 11865:
    {
        returnValue = F("Am Blauen Born");
        break;
    }
    case 11866:
    {
        returnValue = F("Am Blauen Bruch");
        break;
    }
    case 11867:
    {
        returnValue = F("Am Blauen Camp");
        break;
    }
    case 11868:
    {
        returnValue = F("Am Blauen Hahn");
        break;
    }
    case 11869:
    {
        returnValue = F("Am Blauen Kreuz");
        break;
    }
    case 11870:
    {
        returnValue = F("Am Blauen Meer");
        break;
    }
    case 11871:
    {
        returnValue = F("Am Blauen Rock");
        break;
    }
    case 11872:
    {
        returnValue = F("Am Blauen See");
        break;
    }
    case 11873:
    {
        returnValue = F("Am Blauen Stein");
        break;
    }
    case 11874:
    {
        returnValue = F("Am Blauen Turm");
        break;
    }
    case 11875:
    {
        returnValue = F("Am Blauen Wunder");
        break;
    }
    case 11876:
    {
        returnValue = F("Am Blauenberg");
        break;
    }
    case 11877:
    {
        returnValue = F("Am Blauenblick");
        break;
    }
    case 11878:
    {
        returnValue = F("Am Blauenstein");
        break;
    }
    case 11879:
    {
        returnValue = F("Am Blaufuß");
        break;
    }
    case 11880:
    {
        returnValue = F("Am Blaugarten");
        break;
    }
    case 11881:
    {
        returnValue = F("Am Blauraine");
        break;
    }
    case 11882:
    {
        returnValue = F("Am Blauwasser");
        break;
    }
    case 11883:
    {
        returnValue = F("Am Bleckeder Bahnhof");
        break;
    }
    case 11884:
    {
        returnValue = F("Am Bleckeder Weg");
        break;
    }
    case 11885:
    {
        returnValue = F("Am Bleckwerk");
        break;
    }
    case 11886:
    {
        returnValue = F("Am Bleek");
        break;
    }
    case 11887:
    {
        returnValue = F("Am Bleeke");
        break;
    }
    case 11888:
    {
        returnValue = F("Am Bleeken");
        break;
    }
    case 11889:
    {
        returnValue = F("Am Bleiberg");
        break;
    }
    case 11890:
    {
        returnValue = F("Am Bleichacker");
        break;
    }
    case 11891:
    {
        returnValue = F("Am Bleichanger");
        break;
    }
    case 11892:
    {
        returnValue = F("Am Bleichbach");
        break;
    }
    case 11893:
    {
        returnValue = F("Am Bleichberg");
        break;
    }
    case 11894:
    {
        returnValue = F("Am Bleichdamm");
        break;
    }
    case 11895:
    {
        returnValue = F("Am Bleicheberg");
        break;
    }
    case 11896:
    {
        returnValue = F("Am Bleichehof");
        break;
    }
    case 11897:
    {
        returnValue = F("Am Bleichenturm");
        break;
    }
    case 11898:
    {
        returnValue = F("Am Bleicher Berg");
        break;
    }
    case 11899:
    {
        returnValue = F("Am Bleicherdewerk");
        break;
    }
    case 11900:
    {
        returnValue = F("Am Bleichertbach");
        break;
    }
    case 11901:
    {
        returnValue = F("Am Bleicheröder Wege");
        break;
    }
    case 11902:
    {
        returnValue = F("Am Bleichewall");
        break;
    }
    case 11903:
    {
        returnValue = F("Am Bleichgarten");
        break;
    }
    case 11904:
    {
        returnValue = F("Am Bleichgraben");
        break;
    }
    case 11905:
    {
        returnValue = F("Am Bleichhof");
        break;
    }
    case 11906:
    {
        returnValue = F("Am Bleichplan");
        break;
    }
    case 11907:
    {
        returnValue = F("Am Bleichplatz");
        break;
    }
    case 11908:
    {
        returnValue = F("Am Bleichwasen");
        break;
    }
    case 11909:
    {
        returnValue = F("Am Bleidenbach");
        break;
    }
    case 11910:
    {
        returnValue = F("Am Bleischacht");
        break;
    }
    case 11911:
    {
        returnValue = F("Am Bleitweg");
        break;
    }
    case 11912:
    {
        returnValue = F("Am Bleißmer");
        break;
    }
    case 11913:
    {
        returnValue = F("Am Blendlein");
        break;
    }
    case 11914:
    {
        returnValue = F("Am Blenter");
        break;
    }
    case 11915:
    {
        returnValue = F("Am Bleyener Weg");
        break;
    }
    case 11916:
    {
        returnValue = F("Am Bleysteig");
        break;
    }
    case 11917:
    {
        returnValue = F("Am Blick");
        break;
    }
    case 11918:
    {
        returnValue = F("Am Bliesathsberg");
        break;
    }
    case 11919:
    {
        returnValue = F("Am Bliesdorfer Kanal");
        break;
    }
    case 11920:
    {
        returnValue = F("Am Blindenbaum");
        break;
    }
    case 11921:
    {
        returnValue = F("Am Blindetal");
        break;
    }
    case 11922:
    {
        returnValue = F("Am Blindgraben");
        break;
    }
    case 11923:
    {
        returnValue = F("Am Blink");
        break;
    }
    case 11924:
    {
        returnValue = F("Am Blinker");
        break;
    }
    case 11925:
    {
        returnValue = F("Am Blinkfür");
        break;
    }
    case 11926:
    {
        returnValue = F("Am Blissenberg");
        break;
    }
    case 11927:
    {
        returnValue = F("Am Blitzberg");
        break;
    }
    case 11928:
    {
        returnValue = F("Am Bloberlberg");
        break;
    }
    case 11929:
    {
        returnValue = F("Am Bloch");
        break;
    }
    case 11930:
    {
        returnValue = F("Am Block");
        break;
    }
    case 11931:
    {
        returnValue = F("Am Block Roggenthal");
        break;
    }
    case 11932:
    {
        returnValue = F("Am Blockacker");
        break;
    }
    case 11933:
    {
        returnValue = F("Am Blockhaus");
        break;
    }
    case 11934:
    {
        returnValue = F("Am Blockhausberg");
        break;
    }
    case 11935:
    {
        returnValue = F("Am Blocksberg");
        break;
    }
    case 11936:
    {
        returnValue = F("Am Blockshornberg");
        break;
    }
    case 11937:
    {
        returnValue = F("Am Blockswinkel");
        break;
    }
    case 11938:
    {
        returnValue = F("Am Bloher Forst");
        break;
    }
    case 11939:
    {
        returnValue = F("Am Blohn");
        break;
    }
    case 11940:
    {
        returnValue = F("Am Blomberg");
        break;
    }
    case 11941:
    {
        returnValue = F("Am Blonsberg");
        break;
    }
    case 11942:
    {
        returnValue = F("Am Blosenberg");
        break;
    }
    case 11943:
    {
        returnValue = F("Am Blotzrain");
        break;
    }
    case 11944:
    {
        returnValue = F("Am Bloßenberg (KM)");
        break;
    }
    case 11945:
    {
        returnValue = F("Am Blumberg");
        break;
    }
    case 11946:
    {
        returnValue = F("Am Blumenacker");
        break;
    }
    case 11947:
    {
        returnValue = F("Am Blumenberg");
        break;
    }
    case 11948:
    {
        returnValue = F("Am Blumenborn");
        break;
    }
    case 11949:
    {
        returnValue = F("Am Blumeneck");
        break;
    }
    case 11950:
    {
        returnValue = F("Am Blumenfeld");
        break;
    }
    case 11951:
    {
        returnValue = F("Am Blumengarten");
        break;
    }
    case 11952:
    {
        returnValue = F("Am Blumengraben");
        break;
    }
    case 11953:
    {
        returnValue = F("Am Blumengrund");
        break;
    }
    case 11954:
    {
        returnValue = F("Am Blumenhang");
        break;
    }
    case 11955:
    {
        returnValue = F("Am Blumenhaus");
        break;
    }
    case 11956:
    {
        returnValue = F("Am Blumenhof");
        break;
    }
    case 11957:
    {
        returnValue = F("Am Blumenkamp");
        break;
    }
    case 11958:
    {
        returnValue = F("Am Blumenpfad");
        break;
    }
    case 11959:
    {
        returnValue = F("Am Blumenrain");
        break;
    }
    case 11960:
    {
        returnValue = F("Am Blumenstein");
        break;
    }
    case 11961:
    {
        returnValue = F("Am Blumenstrich");
        break;
    }
    case 11962:
    {
        returnValue = F("Am Blumenstück");
        break;
    }
    case 11963:
    {
        returnValue = F("Am Blumental");
        break;
    }
    case 11964:
    {
        returnValue = F("Am Blumerich");
        break;
    }
    case 11965:
    {
        returnValue = F("Am Blutacker");
        break;
    }
    case 11966:
    {
        returnValue = F("Am Blutbach");
        break;
    }
    case 11967:
    {
        returnValue = F("Am Blutgraben");
        break;
    }
    case 11968:
    {
        returnValue = F("Am Blutrain");
        break;
    }
    case 11969:
    {
        returnValue = F("Am Blänkebach");
        break;
    }
    case 11970:
    {
        returnValue = F("Am Bläsiberg");
        break;
    }
    case 11971:
    {
        returnValue = F("Am Bläsistock");
        break;
    }
    case 11972:
    {
        returnValue = F("Am Blätterborn");
        break;
    }
    case 11973:
    {
        returnValue = F("Am Blöcherhof");
        break;
    }
    case 11974:
    {
        returnValue = F("Am Blöcken");
        break;
    }
    case 11975:
    {
        returnValue = F("Am Blöckenkamp");
        break;
    }
    case 11976:
    {
        returnValue = F("Am Blömerbach");
        break;
    }
    case 11977:
    {
        returnValue = F("Am Blömers-Hof");
        break;
    }
    case 11978:
    {
        returnValue = F("Am Blömkenberg");
        break;
    }
    case 11979:
    {
        returnValue = F("Am Blösberg");
        break;
    }
    case 11980:
    {
        returnValue = F("Am Blümersberg");
        break;
    }
    case 11981:
    {
        returnValue = F("Am Blümlberg");
        break;
    }
    case 11982:
    {
        returnValue = F("Am Blümlingspfad");
        break;
    }
    case 11983:
    {
        returnValue = F("Am Blütenanger");
        break;
    }
    case 11984:
    {
        returnValue = F("Am Blütengrund");
        break;
    }
    case 11985:
    {
        returnValue = F("Am Blütenhang");
        break;
    }
    case 11986:
    {
        returnValue = F("Am Blütenring");
        break;
    }
    case 11987:
    {
        returnValue = F("Am Blütenweg");
        break;
    }
    case 11988:
    {
        returnValue = F("Am Bobenhäuser");
        break;
    }
    case 11989:
    {
        returnValue = F("Am Bobenwald");
        break;
    }
    case 11990:
    {
        returnValue = F("Am Boberg");
        break;
    }
    case 11991:
    {
        returnValue = F("Am Bobersberg");
        break;
    }
    case 11992:
    {
        returnValue = F("Am Bobinger Bergl");
        break;
    }
    case 11993:
    {
        returnValue = F("Am Bocherich");
        break;
    }
    case 11994:
    {
        returnValue = F("Am Bock");
        break;
    }
    case 11995:
    {
        returnValue = F("Am Bockberg");
        break;
    }
    case 11996:
    {
        returnValue = F("Am Bockeler Berg");
        break;
    }
    case 11997:
    {
        returnValue = F("Am Bockelfeld");
        break;
    }
    case 11998:
    {
        returnValue = F("Am Bockelsfelde");
        break;
    }
    case 11999:
    {
        returnValue = F("Am Bockensberg");
        break;
    }
    case 12000:
    {
        returnValue = F("Am Bockholt");
        break;
    }
    case 12001:
    {
        returnValue = F("Am Bockholz");
        break;
    }
    case 12002:
    {
        returnValue = F("Am Bockhorn");
        break;
    }
    case 12003:
    {
        returnValue = F("Am Bockmühlenberg");
        break;
    }
    case 12004:
    {
        returnValue = F("Am Bocksberg");
        break;
    }
    case 12005:
    {
        returnValue = F("Am Bocksberg-Brünnlein");
        break;
    }
    case 12006:
    {
        returnValue = F("Am Bocksborn");
        break;
    }
    case 12007:
    {
        returnValue = F("Am Bocksbühl");
        break;
    }
    case 12008:
    {
        returnValue = F("Am Bockseifer Wald");
        break;
    }
    case 12009:
    {
        returnValue = F("Am Bocksgraben");
        break;
    }
    case 12010:
    {
        returnValue = F("Am Bockshof");
        break;
    }
    case 12011:
    {
        returnValue = F("Am Bockshorn");
        break;
    }
    case 12012:
    {
        returnValue = F("Am Bocksrangen");
        break;
    }
    case 12013:
    {
        returnValue = F("Am Bockstor");
        break;
    }
    case 12014:
    {
        returnValue = F("Am Bockzahl");
        break;
    }
    case 12015:
    {
        returnValue = F("Am Bodden");
        break;
    }
    case 12016:
    {
        returnValue = F("Am Boddengraben");
        break;
    }
    case 12017:
    {
        returnValue = F("Am Boddenkamp");
        break;
    }
    case 12018:
    {
        returnValue = F("Am Boddenmarkt");
        break;
    }
    case 12019:
    {
        returnValue = F("Am Bodefall");
        break;
    }
    case 12020:
    {
        returnValue = F("Am Boden");
        break;
    }
    case 12021:
    {
        returnValue = F("Am Bodenacker");
        break;
    }
    case 12022:
    {
        returnValue = F("Am Bodenbach");
        break;
    }
    case 12023:
    {
        returnValue = F("Am Bodenberg");
        break;
    }
    case 12024:
    {
        returnValue = F("Am Bodendenkmal");
        break;
    }
    case 12025:
    {
        returnValue = F("Am Bodenfeld");
        break;
    }
    case 12026:
    {
        returnValue = F("Am Bodenheimer Weg");
        break;
    }
    case 12027:
    {
        returnValue = F("Am Bodenholz");
        break;
    }
    case 12028:
    {
        returnValue = F("Am Bodenloh");
        break;
    }
    case 12029:
    {
        returnValue = F("Am Bodensteig");
        break;
    }
    case 12030:
    {
        returnValue = F("Am Bodental");
        break;
    }
    case 12031:
    {
        returnValue = F("Am Bodenteicher Steg");
        break;
    }
    case 12032:
    {
        returnValue = F("Am Bodenwald");
        break;
    }
    case 12033:
    {
        returnValue = F("Am Bodenweg");
        break;
    }
    case 12034:
    {
        returnValue = F("Am Bodethof");
        break;
    }
    case 12035:
    {
        returnValue = F("Am Bodeufer");
        break;
    }
    case 12036:
    {
        returnValue = F("Am Boekenhagen");
        break;
    }
    case 12037:
    {
        returnValue = F("Am Boeltenschlag");
        break;
    }
    case 12038:
    {
        returnValue = F("Am Bogen");
        break;
    }
    case 12039:
    {
        returnValue = F("Am Bogendreieck");
        break;
    }
    case 12040:
    {
        returnValue = F("Am Bogenplatz");
        break;
    }
    case 12041:
    {
        returnValue = F("Am Bohl");
        break;
    }
    case 12042:
    {
        returnValue = F("Am Bohldamm");
        break;
    }
    case 12043:
    {
        returnValue = F("Am Bohlen");
        break;
    }
    case 12044:
    {
        returnValue = F("Am Bohlenbach");
        break;
    }
    case 12045:
    {
        returnValue = F("Am Bohlenhorst");
        break;
    }
    case 12046:
    {
        returnValue = F("Am Bohlenkamp");
        break;
    }
    case 12047:
    {
        returnValue = F("Am Bohlenweg");
        break;
    }
    case 12048:
    {
        returnValue = F("Am Bohlgarten");
        break;
    }
    case 12049:
    {
        returnValue = F("Am Bohlkamp");
        break;
    }
    case 12050:
    {
        returnValue = F("Am Bohlwald");
        break;
    }
    case 12051:
    {
        returnValue = F("Am Bohlweg");
        break;
    }
    case 12052:
    {
        returnValue = F("Am Bohmter Bach");
        break;
    }
    case 12053:
    {
        returnValue = F("Am Bohnenbaum");
        break;
    }
    case 12054:
    {
        returnValue = F("Am Bohnenberg");
        break;
    }
    case 12055:
    {
        returnValue = F("Am Bohnenfeld");
        break;
    }
    case 12056:
    {
        returnValue = F("Am Bohnengarten");
        break;
    }
    case 12057:
    {
        returnValue = F("Am Bohnengrund");
        break;
    }
    case 12058:
    {
        returnValue = F("Am Bohnenkamp");
        break;
    }
    case 12059:
    {
        returnValue = F("Am Bohnenland");
        break;
    }
    case 12060:
    {
        returnValue = F("Am Bohnenpfad");
        break;
    }
    case 12061:
    {
        returnValue = F("Am Bohnenrain");
        break;
    }
    case 12062:
    {
        returnValue = F("Am Bohnental");
        break;
    }
    case 12063:
    {
        returnValue = F("Am Bohnenteich");
        break;
    }
    case 12064:
    {
        returnValue = F("Am Bohnrech");
        break;
    }
    case 12065:
    {
        returnValue = F("Am Bohnstein");
        break;
    }
    case 12066:
    {
        returnValue = F("Am Bohrberg");
        break;
    }
    case 12067:
    {
        returnValue = F("Am Bohrerbach");
        break;
    }
    case 12068:
    {
        returnValue = F("Am Bohrfeld");
        break;
    }
    case 12069:
    {
        returnValue = F("Am Bohrgrund");
        break;
    }
    case 12070:
    {
        returnValue = F("Am Bohrturm");
        break;
    }
    case 12071:
    {
        returnValue = F("Am Boirenbusch");
        break;
    }
    case 12072:
    {
        returnValue = F("Am Bojernsteg");
        break;
    }
    case 12073:
    {
        returnValue = F("Am Bojerweg");
        break;
    }
    case 12074:
    {
        returnValue = F("Am Bokel");
        break;
    }
    case 12075:
    {
        returnValue = F("Am Bokenbeck");
        break;
    }
    case 12076:
    {
        returnValue = F("Am Bokholt");
        break;
    }
    case 12077:
    {
        returnValue = F("Am Boksberg");
        break;
    }
    case 12078:
    {
        returnValue = F("Am Bokusbach");
        break;
    }
    case 12079:
    {
        returnValue = F("Am Bol");
        break;
    }
    case 12080:
    {
        returnValue = F("Am Bolenzergraben");
        break;
    }
    case 12081:
    {
        returnValue = F("Am Bolk");
        break;
    }
    case 12082:
    {
        returnValue = F("Am Boll");
        break;
    }
    case 12083:
    {
        returnValue = F("Am Bollberg");
        break;
    }
    case 12084:
    {
        returnValue = F("Am Bollenbach");
        break;
    }
    case 12085:
    {
        returnValue = F("Am Bollenberg");
        break;
    }
    case 12086:
    {
        returnValue = F("Am Bollerbach");
        break;
    }
    case 12087:
    {
        returnValue = F("Am Bollerloch");
        break;
    }
    case 12088:
    {
        returnValue = F("Am Bolles");
        break;
    }
    case 12089:
    {
        returnValue = F("Am Bollgraben");
        break;
    }
    case 12090:
    {
        returnValue = F("Am Bollhäger Fließ");
        break;
    }
    case 12091:
    {
        returnValue = F("Am Bollplatz");
        break;
    }
    case 12092:
    {
        returnValue = F("Am Bollrain");
        break;
    }
    case 12093:
    {
        returnValue = F("Am Bollscheid");
        break;
    }
    case 12094:
    {
        returnValue = F("Am Bollwall");
        break;
    }
    case 12095:
    {
        returnValue = F("Am Bollweg");
        break;
    }
    case 12096:
    {
        returnValue = F("Am Bollwerk");
        break;
    }
    case 12097:
    {
        returnValue = F("Am Bolritt");
        break;
    }
    case 12098:
    {
        returnValue = F("Am Boltenhof");
        break;
    }
    case 12099:
    {
        returnValue = F("Am Bolzberg");
        break;
    }
    case 12100:
    {
        returnValue = F("Am Bolzenbacher Kreuz");
        break;
    }
    case 12101:
    {
        returnValue = F("Am Bolzenberg");
        break;
    }
    case 12102:
    {
        returnValue = F("Am Bolzenkamp");
        break;
    }
    case 12103:
    {
        returnValue = F("Am Bolzgraben");
        break;
    }
    case 12104:
    {
        returnValue = F("Am Bolzplatz");
        break;
    }
    case 12105:
    {
        returnValue = F("Am Bomberg");
        break;
    }
    case 12106:
    {
        returnValue = F("Am Bomhof");
        break;
    }
    case 12107:
    {
        returnValue = F("Am Bommelsberg");
        break;
    }
    case 12108:
    {
        returnValue = F("Am Bommerichshof");
        break;
    }
    case 12109:
    {
        returnValue = F("Am Bommerlesberg");
        break;
    }
    case 12110:
    {
        returnValue = F("Am Bommersbacher Hof");
        break;
    }
    case 12111:
    {
        returnValue = F("Am Bommersberg");
        break;
    }
    case 12112:
    {
        returnValue = F("Am Bommert");
        break;
    }
    case 12113:
    {
        returnValue = F("Am Bonapart");
        break;
    }
    case 12114:
    {
        returnValue = F("Am Bondenholz");
        break;
    }
    case 12115:
    {
        returnValue = F("Am Bonfeld");
        break;
    }
    case 12116:
    {
        returnValue = F("Am Bongartzhof");
        break;
    }
    case 12117:
    {
        returnValue = F("Am Bongert");
        break;
    }
    case 12118:
    {
        returnValue = F("Am Bonland");
        break;
    }
    case 12119:
    {
        returnValue = F("Am Bonneberg");
        break;
    }
    case 12120:
    {
        returnValue = F("Am Bonnensiefen");
        break;
    }
    case 12121:
    {
        returnValue = F("Am Bonnenweg");
        break;
    }
    case 12122:
    {
        returnValue = F("Am Bonner");
        break;
    }
    case 12123:
    {
        returnValue = F("Am Bonner Graben");
        break;
    }
    case 12124:
    {
        returnValue = F("Am Bonnewitzer Rundling");
        break;
    }
    case 12125:
    {
        returnValue = F("Am Bonnhöfchen");
        break;
    }
    case 12126:
    {
        returnValue = F("Am Bonsbusch");
        break;
    }
    case 12127:
    {
        returnValue = F("Am Bontjesweg");
        break;
    }
    case 12128:
    {
        returnValue = F("Am Bookensteen");
        break;
    }
    case 12129:
    {
        returnValue = F("Am Bookholzberg");
        break;
    }
    case 12130:
    {
        returnValue = F("Am Boomkamp");
        break;
    }
    case 12131:
    {
        returnValue = F("Am Boormfeld");
        break;
    }
    case 12132:
    {
        returnValue = F("Am Booshof");
        break;
    }
    case 12133:
    {
        returnValue = F("Am Bootsgraben");
        break;
    }
    case 12134:
    {
        returnValue = F("Am Bootshafen");
        break;
    }
    case 12135:
    {
        returnValue = F("Am Bootshaus");
        break;
    }
    case 12136:
    {
        returnValue = F("Am Bootssteg");
        break;
    }
    case 12137:
    {
        returnValue = F("Am Boppengraben");
        break;
    }
    case 12138:
    {
        returnValue = F("Am Boppler");
        break;
    }
    case 12139:
    {
        returnValue = F("Am Borauer Teich");
        break;
    }
    case 12140:
    {
        returnValue = F("Am Borbach");
        break;
    }
    case 12141:
    {
        returnValue = F("Am Borberg");
        break;
    }
    case 12142:
    {
        returnValue = F("Am Borbergsbach");
        break;
    }
    case 12143:
    {
        returnValue = F("Am Borbig");
        break;
    }
    case 12144:
    {
        returnValue = F("Am Borchel");
        break;
    }
    case 12145:
    {
        returnValue = F("Am Borg");
        break;
    }
    case 12146:
    {
        returnValue = F("Am Borgberg");
        break;
    }
    case 12147:
    {
        returnValue = F("Am Borgkamp");
        break;
    }
    case 12148:
    {
        returnValue = F("Am Borgsberg");
        break;
    }
    case 12149:
    {
        returnValue = F("Am Borgwall");
        break;
    }
    case 12150:
    {
        returnValue = F("Am Borkeberg");
        break;
    }
    case 12151:
    {
        returnValue = F("Am Borm");
        break;
    }
    case 12152:
    {
        returnValue = F("Am Bormbrook");
        break;
    }
    case 12153:
    {
        returnValue = F("Am Born");
        break;
    }
    case 12154:
    {
        returnValue = F("Am Bornacker");
        break;
    }
    case 12155:
    {
        returnValue = F("Am Bornanger");
        break;
    }
    case 12156:
    {
        returnValue = F("Am Bornbach");
        break;
    }
    case 12157:
    {
        returnValue = F("Am Bornbek");
        break;
    }
    case 12158:
    {
        returnValue = F("Am Bornberg");
        break;
    }
    case 12159:
    {
        returnValue = F("Am Bornberge");
        break;
    }
    case 12160:
    {
        returnValue = F("Am Bornbruch");
        break;
    }
    case 12161:
    {
        returnValue = F("Am Bornbrunnen");
        break;
    }
    case 12162:
    {
        returnValue = F("Am Bornbusch");
        break;
    }
    case 12163:
    {
        returnValue = F("Am Borndrusch");
        break;
    }
    case 12164:
    {
        returnValue = F("Am Borne");
        break;
    }
    case 12165:
    {
        returnValue = F("Am Borneck");
        break;
    }
    case 12166:
    {
        returnValue = F("Am Bornende");
        break;
    }
    case 12167:
    {
        returnValue = F("Am Bornfeld");
        break;
    }
    case 12168:
    {
        returnValue = F("Am Bornfloß");
        break;
    }
    case 12169:
    {
        returnValue = F("Am Borngarten");
        break;
    }
    case 12170:
    {
        returnValue = F("Am Borngelände");
        break;
    }
    case 12171:
    {
        returnValue = F("Am Borngraben");
        break;
    }
    case 12172:
    {
        returnValue = F("Am Borngrund");
        break;
    }
    case 12173:
    {
        returnValue = F("Am Bornheimer Bach");
        break;
    }
    case 12174:
    {
        returnValue = F("Am Bornhennrich");
        break;
    }
    case 12175:
    {
        returnValue = F("Am Bornhof");
        break;
    }
    case 12176:
    {
        returnValue = F("Am Bornholdsberg");
        break;
    }
    case 12177:
    {
        returnValue = F("Am Bornholz");
        break;
    }
    case 12178:
    {
        returnValue = F("Am Bornhäuschen");
        break;
    }
    case 12179:
    {
        returnValue = F("Am Bornhöfchen");
        break;
    }
    case 12180:
    {
        returnValue = F("Am Bornhög");
        break;
    }
    case 12181:
    {
        returnValue = F("Am Bornhügel");
        break;
    }
    case 12182:
    {
        returnValue = F("Am Bornkamp");
        break;
    }
    case 12183:
    {
        returnValue = F("Am Bornmühlenweg");
        break;
    }
    case 12184:
    {
        returnValue = F("Am Bornpfad");
        break;
    }
    case 12185:
    {
        returnValue = F("Am Bornpflaster");
        break;
    }
    case 12186:
    {
        returnValue = F("Am Bornplacken");
        break;
    }
    case 12187:
    {
        returnValue = F("Am Bornrain");
        break;
    }
    case 12188:
    {
        returnValue = F("Am Bornrasen");
        break;
    }
    case 12189:
    {
        returnValue = F("Am Bornrech");
        break;
    }
    case 12190:
    {
        returnValue = F("Am Bornsattel");
        break;
    }
    case 12191:
    {
        returnValue = F("Am Bornsberg");
        break;
    }
    case 12192:
    {
        returnValue = F("Am Bornschen Berg");
        break;
    }
    case 12193:
    {
        returnValue = F("Am Bornsiek");
        break;
    }
    case 12194:
    {
        returnValue = F("Am Bornsoll");
        break;
    }
    case 12195:
    {
        returnValue = F("Am Bornsprengel");
        break;
    }
    case 12196:
    {
        returnValue = F("Am Bornstück");
        break;
    }
    case 12197:
    {
        returnValue = F("Am Borntal");
        break;
    }
    case 12198:
    {
        returnValue = F("Am Bornteich");
        break;
    }
    case 12199:
    {
        returnValue = F("Am Bornthal");
        break;
    }
    case 12200:
    {
        returnValue = F("Am Bornwald");
        break;
    }
    case 12201:
    {
        returnValue = F("Am Bornweg");
        break;
    }
    case 12202:
    {
        returnValue = F("Am Bornwiesenteich");
        break;
    }
    case 12203:
    {
        returnValue = F("Am Borren");
        break;
    }
    case 12204:
    {
        returnValue = F("Am Borrenbach");
        break;
    }
    case 12205:
    {
        returnValue = F("Am Borrwege");
        break;
    }
    case 12206:
    {
        returnValue = F("Am Borsberg");
        break;
    }
    case 12207:
    {
        returnValue = F("Am Borsiek");
        break;
    }
    case 12208:
    {
        returnValue = F("Am Borsig");
        break;
    }
    case 12209:
    {
        returnValue = F("Am Borst");
        break;
    }
    case 12210:
    {
        returnValue = F("Am Borstel");
        break;
    }
    case 12211:
    {
        returnValue = F("Am Borsteler Bahnhof");
        break;
    }
    case 12212:
    {
        returnValue = F("Am Borstenbach");
        break;
    }
    case 12213:
    {
        returnValue = F("Am Borstenwieschen");
        break;
    }
    case 12214:
    {
        returnValue = F("Am Borstig");
        break;
    }
    case 12215:
    {
        returnValue = F("Am Borxlebener Weg");
        break;
    }
    case 12216:
    {
        returnValue = F("Am Boschhof");
        break;
    }
    case 12217:
    {
        returnValue = F("Am Boschhorn");
        break;
    }
    case 12218:
    {
        returnValue = F("Am Bosenberg");
        break;
    }
    case 12219:
    {
        returnValue = F("Am Bosquet");
        break;
    }
    case 12220:
    {
        returnValue = F("Am Bossacker");
        break;
    }
    case 12221:
    {
        returnValue = F("Am Bosserhof");
        break;
    }
    case 12222:
    {
        returnValue = F("Am Bostelberg");
        break;
    }
    case 12223:
    {
        returnValue = F("Am Bostelberge");
        break;
    }
    case 12224:
    {
        returnValue = F("Am Bostenberg");
        break;
    }
    case 12225:
    {
        returnValue = F("Am Bosthorstgraben");
        break;
    }
    case 12226:
    {
        returnValue = F("Am Botanischen Garten");
        break;
    }
    case 12227:
    {
        returnValue = F("Am Boten");
        break;
    }
    case 12228:
    {
        returnValue = F("Am Botschert");
        break;
    }
    case 12229:
    {
        returnValue = F("Am Bottenberger Wald");
        break;
    }
    case 12230:
    {
        returnValue = F("Am Bottichberg");
        break;
    }
    case 12231:
    {
        returnValue = F("Am Bouser Weg");
        break;
    }
    case 12232:
    {
        returnValue = F("Am Bowenberg");
        break;
    }
    case 12233:
    {
        returnValue = F("Am Bowengarten");
        break;
    }
    case 12234:
    {
        returnValue = F("Am Boxacker");
        break;
    }
    case 12235:
    {
        returnValue = F("Am Boxberg");
        break;
    }
    case 12236:
    {
        returnValue = F("Am Boxhof");
        break;
    }
    case 12237:
    {
        returnValue = F("Am Boxwald");
        break;
    }
    case 12238:
    {
        returnValue = F("Am Boßelkamp");
        break;
    }
    case 12239:
    {
        returnValue = F("Am Braakgraben");
        break;
    }
    case 12240:
    {
        returnValue = F("Am Braakkamp");
        break;
    }
    case 12241:
    {
        returnValue = F("Am Brachberg");
        break;
    }
    case 12242:
    {
        returnValue = F("Am Brachfeld");
        break;
    }
    case 12243:
    {
        returnValue = F("Am Brachfelde");
        break;
    }
    case 12244:
    {
        returnValue = F("Am Brachland");
        break;
    }
    case 12245:
    {
        returnValue = F("Am Brachthof");
        break;
    }
    case 12246:
    {
        returnValue = F("Am Brachtsberge");
        break;
    }
    case 12247:
    {
        returnValue = F("Am Brack");
        break;
    }
    case 12248:
    {
        returnValue = F("Am Brackelsberg");
        break;
    }
    case 12249:
    {
        returnValue = F("Am Bracken");
        break;
    }
    case 12250:
    {
        returnValue = F("Am Brackufer");
        break;
    }
    case 12251:
    {
        returnValue = F("Am Brahm");
        break;
    }
    case 12252:
    {
        returnValue = F("Am Brahmacker");
        break;
    }
    case 12253:
    {
        returnValue = F("Am Brahmberg");
        break;
    }
    case 12254:
    {
        returnValue = F("Am Brahmbusch");
        break;
    }
    case 12255:
    {
        returnValue = F("Am Brahmhof");
        break;
    }
    case 12256:
    {
        returnValue = F("Am Brain");
        break;
    }
    case 12257:
    {
        returnValue = F("Am Braintal");
        break;
    }
    case 12258:
    {
        returnValue = F("Am Braiten Stög");
        break;
    }
    case 12259:
    {
        returnValue = F("Am Braken");
        break;
    }
    case 12260:
    {
        returnValue = F("Am Brakenkamp");
        break;
    }
    case 12261:
    {
        returnValue = F("Am Braker Sand");
        break;
    }
    case 12262:
    {
        returnValue = F("Am Bramberg");
        break;
    }
    case 12263:
    {
        returnValue = F("Am Brambusch");
        break;
    }
    case 12264:
    {
        returnValue = F("Am Bramenrain");
        break;
    }
    case 12265:
    {
        returnValue = F("Am Bramerhof");
        break;
    }
    case 12266:
    {
        returnValue = F("Am Braminsee");
        break;
    }
    case 12267:
    {
        returnValue = F("Am Bramkamp");
        break;
    }
    case 12268:
    {
        returnValue = F("Am Brammer");
        break;
    }
    case 12269:
    {
        returnValue = F("Am Brammerberg");
        break;
    }
    case 12270:
    {
        returnValue = F("Am Brammerkampe");
        break;
    }
    case 12271:
    {
        returnValue = F("Am Bramort");
        break;
    }
    case 12272:
    {
        returnValue = F("Am Bramvirst");
        break;
    }
    case 12273:
    {
        returnValue = F("Am Bramwald");
        break;
    }
    case 12274:
    {
        returnValue = F("Am Brand");
        break;
    }
    case 12275:
    {
        returnValue = F("Am Brandanger");
        break;
    }
    case 12276:
    {
        returnValue = F("Am Brandbach");
        break;
    }
    case 12277:
    {
        returnValue = F("Am Brandbaum");
        break;
    }
    case 12278:
    {
        returnValue = F("Am Brandberg");
        break;
    }
    case 12279:
    {
        returnValue = F("Am Branddorn");
        break;
    }
    case 12280:
    {
        returnValue = F("Am Brande");
        break;
    }
    case 12281:
    {
        returnValue = F("Am Branden");
        break;
    }
    case 12282:
    {
        returnValue = F("Am Brandenbach");
        break;
    }
    case 12283:
    {
        returnValue = F("Am Brandenberg");
        break;
    }
    case 12284:
    {
        returnValue = F("Am Brandende");
        break;
    }
    case 12285:
    {
        returnValue = F("Am Brandenfeld");
        break;
    }
    case 12286:
    {
        returnValue = F("Am Brandenholz");
        break;
    }
    case 12287:
    {
        returnValue = F("Am Brandenmoor");
        break;
    }
    case 12288:
    {
        returnValue = F("Am Brandenstein");
        break;
    }
    case 12289:
    {
        returnValue = F("Am Brandeswinkel");
        break;
    }
    case 12290:
    {
        returnValue = F("Am Brandfeld");
        break;
    }
    case 12291:
    {
        returnValue = F("Am Brandgraben");
        break;
    }
    case 12292:
    {
        returnValue = F("Am Brandhagen");
        break;
    }
    case 12293:
    {
        returnValue = F("Am Brandhahn");
        break;
    }
    case 12294:
    {
        returnValue = F("Am Brandhai");
        break;
    }
    case 12295:
    {
        returnValue = F("Am Brandhof");
        break;
    }
    case 12296:
    {
        returnValue = F("Am Brandholz");
        break;
    }
    case 12297:
    {
        returnValue = F("Am Brandigberg");
        break;
    }
    case 12298:
    {
        returnValue = F("Am Brandkamp");
        break;
    }
    case 12299:
    {
        returnValue = F("Am Brandkopf");
        break;
    }
    case 12300:
    {
        returnValue = F("Am Brandl");
        break;
    }
    case 12301:
    {
        returnValue = F("Am Brandlberg");
        break;
    }
    case 12302:
    {
        returnValue = F("Am Brandrain");
        break;
    }
    case 12303:
    {
        returnValue = F("Am Brandrücken");
        break;
    }
    case 12304:
    {
        returnValue = F("Am Brandschloot");
        break;
    }
    case 12305:
    {
        returnValue = F("Am Brandshagen");
        break;
    }
    case 12306:
    {
        returnValue = F("Am Brandsloot");
        break;
    }
    case 12307:
    {
        returnValue = F("Am Brandsoll");
        break;
    }
    case 12308:
    {
        returnValue = F("Am Brandt");
        break;
    }
    case 12309:
    {
        returnValue = F("Am Brandteich");
        break;
    }
    case 12310:
    {
        returnValue = F("Am Brandteichgraben");
        break;
    }
    case 12311:
    {
        returnValue = F("Am Brandtor");
        break;
    }
    case 12312:
    {
        returnValue = F("Am Brandweg");
        break;
    }
    case 12313:
    {
        returnValue = F("Am Brandweiher");
        break;
    }
    case 12314:
    {
        returnValue = F("Am Brangenberg");
        break;
    }
    case 12315:
    {
        returnValue = F("Am Braskamp");
        break;
    }
    case 12316:
    {
        returnValue = F("Am Brassenhaus");
        break;
    }
    case 12317:
    {
        returnValue = F("Am Brater");
        break;
    }
    case 12318:
    {
        returnValue = F("Am Bratzkopf");
        break;
    }
    case 12319:
    {
        returnValue = F("Am Brauberg");
        break;
    }
    case 12320:
    {
        returnValue = F("Am Brauchenwald");
        break;
    }
    case 12321:
    {
        returnValue = F("Am Brauck");
        break;
    }
    case 12322:
    {
        returnValue = F("Am Brauckhoff");
        break;
    }
    case 12323:
    {
        returnValue = F("Am Brauereiknapp");
        break;
    }
    case 12324:
    {
        returnValue = F("Am Brauereiteich");
        break;
    }
    case 12325:
    {
        returnValue = F("Am Brauereiwald");
        break;
    }
    case 12326:
    {
        returnValue = F("Am Brauersgraben");
        break;
    }
    case 12327:
    {
        returnValue = F("Am Brauerteiche");
        break;
    }
    case 12328:
    {
        returnValue = F("Am Braugarten");
        break;
    }
    case 12329:
    {
        returnValue = F("Am Brauhaus");
        break;
    }
    case 12330:
    {
        returnValue = F("Am Brauhausberg");
        break;
    }
    case 12331:
    {
        returnValue = F("Am Brauhausbrunnen");
        break;
    }
    case 12332:
    {
        returnValue = F("Am Brauhäuschen");
        break;
    }
    case 12333:
    {
        returnValue = F("Am Brauhügel");
        break;
    }
    case 12334:
    {
        returnValue = F("Am Brauk");
        break;
    }
    case 12335:
    {
        returnValue = F("Am Braukamp");
        break;
    }
    case 12336:
    {
        returnValue = F("Am Brauksweg");
        break;
    }
    case 12337:
    {
        returnValue = F("Am Braumkamp");
        break;
    }
    case 12338:
    {
        returnValue = F("Am Braunacker");
        break;
    }
    case 12339:
    {
        returnValue = F("Am Brauneberg");
        break;
    }
    case 12340:
    {
        returnValue = F("Am Braunen Berg");
        break;
    }
    case 12341:
    {
        returnValue = F("Am Braunen Hirsch");
        break;
    }
    case 12342:
    {
        returnValue = F("Am Braunen Stall");
        break;
    }
    case 12343:
    {
        returnValue = F("Am Braunhansen");
        break;
    }
    case 12344:
    {
        returnValue = F("Am Braunwasser");
        break;
    }
    case 12345:
    {
        returnValue = F("Am Brauplatz");
        break;
    }
    case 12346:
    {
        returnValue = F("Am Braurangen");
        break;
    }
    case 12347:
    {
        returnValue = F("Am Brausewehr");
        break;
    }
    case 12348:
    {
        returnValue = F("Am Brausteg");
        break;
    }
    case 12349:
    {
        returnValue = F("Am Brauteich");
        break;
    }
    case 12350:
    {
        returnValue = F("Am Brautplatz");
        break;
    }
    case 12351:
    {
        returnValue = F("Am Brautsee");
        break;
    }
    case 12352:
    {
        returnValue = F("Am Brauweg");
        break;
    }
    case 12353:
    {
        returnValue = F("Am Brauweiler Pfädchen");
        break;
    }
    case 12354:
    {
        returnValue = F("Am Breberg");
        break;
    }
    case 12355:
    {
        returnValue = F("Am Brechelsdorf");
        break;
    }
    case 12356:
    {
        returnValue = F("Am Brechenloch");
        break;
    }
    case 12357:
    {
        returnValue = F("Am Brecher");
        break;
    }
    case 12358:
    {
        returnValue = F("Am Brechetweg");
        break;
    }
    case 12359:
    {
        returnValue = F("Am Brechfeld");
        break;
    }
    case 12360:
    {
        returnValue = F("Am Brechgraben");
        break;
    }
    case 12361:
    {
        returnValue = F("Am Brechhaus");
        break;
    }
    case 12362:
    {
        returnValue = F("Am Brechtor");
        break;
    }
    case 12363:
    {
        returnValue = F("Am Brechwasen");
        break;
    }
    case 12364:
    {
        returnValue = F("Am Bredberg");
        break;
    }
    case 12365:
    {
        returnValue = F("Am Bredenberg");
        break;
    }
    case 12366:
    {
        returnValue = F("Am Bredendorn");
        break;
    }
    case 12367:
    {
        returnValue = F("Am Bredenmoor");
        break;
    }
    case 12368:
    {
        returnValue = F("Am Brederborn");
        break;
    }
    case 12369:
    {
        returnValue = F("Am Brederek");
        break;
    }
    case 12370:
    {
        returnValue = F("Am Bredschlag");
        break;
    }
    case 12371:
    {
        returnValue = F("Am Breeden");
        break;
    }
    case 12372:
    {
        returnValue = F("Am Breekamp");
        break;
    }
    case 12373:
    {
        returnValue = F("Am Breenbach");
        break;
    }
    case 12374:
    {
        returnValue = F("Am Breetz");
        break;
    }
    case 12375:
    {
        returnValue = F("Am Breetzer Bodden");
        break;
    }
    case 12376:
    {
        returnValue = F("Am Brehmenacker");
        break;
    }
    case 12377:
    {
        returnValue = F("Am Breiberg");
        break;
    }
    case 12378:
    {
        returnValue = F("Am Breidel");
        break;
    }
    case 12379:
    {
        returnValue = F("Am Breienacker");
        break;
    }
    case 12380:
    {
        returnValue = F("Am Breil");
        break;
    }
    case 12381:
    {
        returnValue = F("Am Breilingsweg");
        break;
    }
    case 12382:
    {
        returnValue = F("Am Breilsgraben");
        break;
    }
    case 12383:
    {
        returnValue = F("Am Breimbach");
        break;
    }
    case 12384:
    {
        returnValue = F("Am Breindlbach");
        break;
    }
    case 12385:
    {
        returnValue = F("Am Breitacker");
        break;
    }
    case 12386:
    {
        returnValue = F("Am Breitanger");
        break;
    }
    case 12387:
    {
        returnValue = F("Am Breiteberg");
        break;
    }
    case 12388:
    {
        returnValue = F("Am Breitekamp");
        break;
    }
    case 12389:
    {
        returnValue = F("Am Breitele");
        break;
    }
    case 12390:
    {
        returnValue = F("Am Breiten");
        break;
    }
    case 12391:
    {
        returnValue = F("Am Breiten Acker");
        break;
    }
    case 12392:
    {
        returnValue = F("Am Breiten Anger");
        break;
    }
    case 12393:
    {
        returnValue = F("Am Breiten Bach");
        break;
    }
    case 12394:
    {
        returnValue = F("Am Breiten Berg");
        break;
    }
    case 12395:
    {
        returnValue = F("Am Breiten Berge");
        break;
    }
    case 12396:
    {
        returnValue = F("Am Breiten Block");
        break;
    }
    case 12397:
    {
        returnValue = F("Am Breiten Born");
        break;
    }
    case 12398:
    {
        returnValue = F("Am Breiten Bruch");
        break;
    }
    case 12399:
    {
        returnValue = F("Am Breiten Busch");
        break;
    }
    case 12400:
    {
        returnValue = F("Am Breiten Bäumchen");
        break;
    }
    case 12401:
    {
        returnValue = F("Am Breiten Deich");
        break;
    }
    case 12402:
    {
        returnValue = F("Am Breiten Feld");
        break;
    }
    case 12403:
    {
        returnValue = F("Am Breiten Holz");
        break;
    }
    case 12404:
    {
        returnValue = F("Am Breiten Pfuhl");
        break;
    }
    case 12405:
    {
        returnValue = F("Am Breiten Rain");
        break;
    }
    case 12406:
    {
        returnValue = F("Am Breiten Rasen");
        break;
    }
    case 12407:
    {
        returnValue = F("Am Breiten Sand");
        break;
    }
    case 12408:
    {
        returnValue = F("Am Breiten Schem");
        break;
    }
    case 12409:
    {
        returnValue = F("Am Breiten Steig");
        break;
    }
    case 12410:
    {
        returnValue = F("Am Breiten Stein");
        break;
    }
    case 12411:
    {
        returnValue = F("Am Breiten Stück");
        break;
    }
    case 12412:
    {
        returnValue = F("Am Breiten Teich");
        break;
    }
    case 12413:
    {
        returnValue = F("Am Breiten Tor");
        break;
    }
    case 12414:
    {
        returnValue = F("Am Breiten Wasen");
        break;
    }
    case 12415:
    {
        returnValue = F("Am Breiten Weg");
        break;
    }
    case 12416:
    {
        returnValue = F("Am Breiten Weiher");
        break;
    }
    case 12417:
    {
        returnValue = F("Am Breiten Wiesenweg");
        break;
    }
    case 12418:
    {
        returnValue = F("Am Breitenacker");
        break;
    }
    case 12419:
    {
        returnValue = F("Am Breitenbach");
        break;
    }
    case 12420:
    {
        returnValue = F("Am Breitenbaum");
        break;
    }
    case 12421:
    {
        returnValue = F("Am Breitenberg");
        break;
    }
    case 12422:
    {
        returnValue = F("Am Breitenberghang");
        break;
    }
    case 12423:
    {
        returnValue = F("Am Breitenborn");
        break;
    }
    case 12424:
    {
        returnValue = F("Am Breitenfeld");
        break;
    }
    case 12425:
    {
        returnValue = F("Am Breitengrad");
        break;
    }
    case 12426:
    {
        returnValue = F("Am Breitenhagen");
        break;
    }
    case 12427:
    {
        returnValue = F("Am Breitenhorn");
        break;
    }
    case 12428:
    {
        returnValue = F("Am Breitenloh");
        break;
    }
    case 12429:
    {
        returnValue = F("Am Breitenlohberg");
        break;
    }
    case 12430:
    {
        returnValue = F("Am Breitenrain");
        break;
    }
    case 12431:
    {
        returnValue = F("Am Breitenstein");
        break;
    }
    case 12432:
    {
        returnValue = F("Am Breitenweg");
        break;
    }
    case 12433:
    {
        returnValue = F("Am Breitfeld");
        break;
    }
    case 12434:
    {
        returnValue = F("Am Breitgarten");
        break;
    }
    case 12435:
    {
        returnValue = F("Am Breithammer");
        break;
    }
    case 12436:
    {
        returnValue = F("Am Breithardt");
        break;
    }
    case 12437:
    {
        returnValue = F("Am Breithof");
        break;
    }
    case 12438:
    {
        returnValue = F("Am Breitling");
        break;
    }
    case 12439:
    {
        returnValue = F("Am Breitmösl");
        break;
    }
    case 12440:
    {
        returnValue = F("Am Breitschlag");
        break;
    }
    case 12441:
    {
        returnValue = F("Am Breitschoß");
        break;
    }
    case 12442:
    {
        returnValue = F("Am Breitstein");
        break;
    }
    case 12443:
    {
        returnValue = F("Am Breitstück");
        break;
    }
    case 12444:
    {
        returnValue = F("Am Breitunger Rennweg");
        break;
    }
    case 12445:
    {
        returnValue = F("Am Breitwiesenberg");
        break;
    }
    case 12446:
    {
        returnValue = F("Am Brekenbarg");
        break;
    }
    case 12447:
    {
        returnValue = F("Am Brellin");
        break;
    }
    case 12448:
    {
        returnValue = F("Am Brelo");
        break;
    }
    case 12449:
    {
        returnValue = F("Am Bremberg");
        break;
    }
    case 12450:
    {
        returnValue = F("Am Brembtsberg");
        break;
    }
    case 12451:
    {
        returnValue = F("Am Bremelsberg");
        break;
    }
    case 12452:
    {
        returnValue = F("Am Bremer Schullandheim");
        break;
    }
    case 12453:
    {
        returnValue = F("Am Bremer Weg");
        break;
    }
    case 12454:
    {
        returnValue = F("Am Bremerhof");
        break;
    }
    case 12455:
    {
        returnValue = F("Am Bremerhorst");
        break;
    }
    case 12456:
    {
        returnValue = F("Am Bremerkopf");
        break;
    }
    case 12457:
    {
        returnValue = F("Am Bremig");
        break;
    }
    case 12458:
    {
        returnValue = F("Am Bremker Bach");
        break;
    }
    case 12459:
    {
        returnValue = F("Am Bremmrich");
        break;
    }
    case 12460:
    {
        returnValue = F("Am Bremsberg");
        break;
    }
    case 12461:
    {
        returnValue = F("Am Bremschenberg");
        break;
    }
    case 12462:
    {
        returnValue = F("Am Bremsenfeld");
        break;
    }
    case 12463:
    {
        returnValue = F("Am Brendelsgarten");
        break;
    }
    case 12464:
    {
        returnValue = F("Am Brenkelberg");
        break;
    }
    case 12465:
    {
        returnValue = F("Am Brenkenbach");
        break;
    }
    case 12466:
    {
        returnValue = F("Am Brenkerberg");
        break;
    }
    case 12467:
    {
        returnValue = F("Am Brennacker");
        break;
    }
    case 12468:
    {
        returnValue = F("Am Brenneckschen Borm");
        break;
    }
    case 12469:
    {
        returnValue = F("Am Brenner");
        break;
    }
    case 12470:
    {
        returnValue = F("Am Brennereigraben");
        break;
    }
    case 12471:
    {
        returnValue = F("Am Brennerfeld");
        break;
    }
    case 12472:
    {
        returnValue = F("Am Brennerle");
        break;
    }
    case 12473:
    {
        returnValue = F("Am Brennermoor");
        break;
    }
    case 12474:
    {
        returnValue = F("Am Brennerwasser");
        break;
    }
    case 12475:
    {
        returnValue = F("Am Brenneweg");
        break;
    }
    case 12476:
    {
        returnValue = F("Am Brennhäusle");
        break;
    }
    case 12477:
    {
        returnValue = F("Am Brennhütter Pfad");
        break;
    }
    case 12478:
    {
        returnValue = F("Am Brennigen");
        break;
    }
    case 12479:
    {
        returnValue = F("Am Brennofen");
        break;
    }
    case 12480:
    {
        returnValue = F("Am Brennofenberg");
        break;
    }
    case 12481:
    {
        returnValue = F("Am Brennplatz");
        break;
    }
    case 12482:
    {
        returnValue = F("Am Brenschelt");
        break;
    }
    case 12483:
    {
        returnValue = F("Am Brenselberg");
        break;
    }
    case 12484:
    {
        returnValue = F("Am Brentenberg");
        break;
    }
    case 12485:
    {
        returnValue = F("Am Brenter Fließ");
        break;
    }
    case 12486:
    {
        returnValue = F("Am Brenzer Kanal");
        break;
    }
    case 12487:
    {
        returnValue = F("Am Brenzweg");
        break;
    }
    case 12488:
    {
        returnValue = F("Am Brerehmen");
        break;
    }
    case 12489:
    {
        returnValue = F("Am Breschturm");
        break;
    }
    case 12490:
    {
        returnValue = F("Am Breselberg");
        break;
    }
    case 12491:
    {
        returnValue = F("Am Bresserhof");
        break;
    }
    case 12492:
    {
        returnValue = F("Am Brestenberg");
        break;
    }
    case 12493:
    {
        returnValue = F("Am Breter");
        break;
    }
    case 12494:
    {
        returnValue = F("Am Brethaus");
        break;
    }
    case 12495:
    {
        returnValue = F("Am Brett");
        break;
    }
    case 12496:
    {
        returnValue = F("Am Bretterschen Graben");
        break;
    }
    case 12497:
    {
        returnValue = F("Am Brettweg");
        break;
    }
    case 12498:
    {
        returnValue = F("Am Breuersberg");
        break;
    }
    case 12499:
    {
        returnValue = F("Am Breuershof");
        break;
    }
    case 12500:
    {
        returnValue = F("Am Breuershäuschen");
        break;
    }
    case 12501:
    {
        returnValue = F("Am Breul");
        break;
    }
    case 12502:
    {
        returnValue = F("Am Brichelberg");
        break;
    }
    case 12503:
    {
        returnValue = F("Am Briebel");
        break;
    }
    case 12504:
    {
        returnValue = F("Am Briel");
        break;
    }
    case 12505:
    {
        returnValue = F("Am Briemengarten");
        break;
    }
    case 12506:
    {
        returnValue = F("Am Briesewald");
        break;
    }
    case 12507:
    {
        returnValue = F("Am Brigacker");
        break;
    }
    case 12508:
    {
        returnValue = F("Am Brillteich");
        break;
    }
    case 12509:
    {
        returnValue = F("Am Brimmenhorst");
        break;
    }
    case 12510:
    {
        returnValue = F("Am Brinck");
        break;
    }
    case 12511:
    {
        returnValue = F("Am Bringenbusch");
        break;
    }
    case 12512:
    {
        returnValue = F("Am Brink");
        break;
    }
    case 12513:
    {
        returnValue = F("Am Brink Eisten");
        break;
    }
    case 12514:
    {
        returnValue = F("Am Brinkacker");
        break;
    }
    case 12515:
    {
        returnValue = F("Am Brinke");
        break;
    }
    case 12516:
    {
        returnValue = F("Am Brinker Ort");
        break;
    }
    case 12517:
    {
        returnValue = F("Am Brinkfeld");
        break;
    }
    case 12518:
    {
        returnValue = F("Am Brinkgarten");
        break;
    }
    case 12519:
    {
        returnValue = F("Am Brinkhof");
        break;
    }
    case 12520:
    {
        returnValue = F("Am Brinkkamp");
        break;
    }
    case 12521:
    {
        returnValue = F("Am Brinkmannsbusch");
        break;
    }
    case 12522:
    {
        returnValue = F("Am Britzenberg");
        break;
    }
    case 12523:
    {
        returnValue = F("Am Brixener Hof");
        break;
    }
    case 12524:
    {
        returnValue = F("Am Brock");
        break;
    }
    case 12525:
    {
        returnValue = F("Am Brockbusch");
        break;
    }
    case 12526:
    {
        returnValue = F("Am Brockenblick");
        break;
    }
    case 12527:
    {
        returnValue = F("Am Brockerberg");
        break;
    }
    case 12528:
    {
        returnValue = F("Am Brockeswalder Friedhof");
        break;
    }
    case 12529:
    {
        returnValue = F("Am Brockhauser Quell");
        break;
    }
    case 12530:
    {
        returnValue = F("Am Brockhof");
        break;
    }
    case 12531:
    {
        returnValue = F("Am Brocksberg");
        break;
    }
    case 12532:
    {
        returnValue = F("Am Brodberg");
        break;
    }
    case 12533:
    {
        returnValue = F("Am Brodelbrunnenplatz");
        break;
    }
    case 12534:
    {
        returnValue = F("Am Broderle");
        break;
    }
    case 12535:
    {
        returnValue = F("Am Brodersberg");
        break;
    }
    case 12536:
    {
        returnValue = F("Am Brohmhof");
        break;
    }
    case 12537:
    {
        returnValue = F("Am Broich");
        break;
    }
    case 12538:
    {
        returnValue = F("Am Broicher Weg");
        break;
    }
    case 12539:
    {
        returnValue = F("Am Broichshäuschen");
        break;
    }
    case 12540:
    {
        returnValue = F("Am Broinsken");
        break;
    }
    case 12541:
    {
        returnValue = F("Am Brokenkamp");
        break;
    }
    case 12542:
    {
        returnValue = F("Am Broker Bach");
        break;
    }
    case 12543:
    {
        returnValue = F("Am Brokhof");
        break;
    }
    case 12544:
    {
        returnValue = F("Am Brombach");
        break;
    }
    case 12545:
    {
        returnValue = F("Am Brombacher Berg");
        break;
    }
    case 12546:
    {
        returnValue = F("Am Brombeerberg");
        break;
    }
    case 12547:
    {
        returnValue = F("Am Brombeergarten");
        break;
    }
    case 12548:
    {
        returnValue = F("Am Brombeergraben");
        break;
    }
    case 12549:
    {
        returnValue = F("Am Bromberg");
        break;
    }
    case 12550:
    {
        returnValue = F("Am Bromenhieb");
        break;
    }
    case 12551:
    {
        returnValue = F("Am Brommerfeld");
        break;
    }
    case 12552:
    {
        returnValue = F("Am Brommerkamp");
        break;
    }
    case 12553:
    {
        returnValue = F("Am Bromsberg");
        break;
    }
    case 12554:
    {
        returnValue = F("Am Bronnbach");
        break;
    }
    case 12555:
    {
        returnValue = F("Am Bronnen");
        break;
    }
    case 12556:
    {
        returnValue = F("Am Bronnenberg");
        break;
    }
    case 12557:
    {
        returnValue = F("Am Bronnenbühl");
        break;
    }
    case 12558:
    {
        returnValue = F("Am Brontalgraben");
        break;
    }
    case 12559:
    {
        returnValue = F("Am Broock");
        break;
    }
    case 12560:
    {
        returnValue = F("Am Broocken");
        break;
    }
    case 12561:
    {
        returnValue = F("Am Broockkamp");
        break;
    }
    case 12562:
    {
        returnValue = F("Am Brook");
        break;
    }
    case 12563:
    {
        returnValue = F("Am Brookbach");
        break;
    }
    case 12564:
    {
        returnValue = F("Am Brooken");
        break;
    }
    case 12565:
    {
        returnValue = F("Am Brookeweg");
        break;
    }
    case 12566:
    {
        returnValue = F("Am Brookhoff");
        break;
    }
    case 12567:
    {
        returnValue = F("Am Brookkamp");
        break;
    }
    case 12568:
    {
        returnValue = F("Am Brooksberg");
        break;
    }
    case 12569:
    {
        returnValue = F("Am Brooksborn");
        break;
    }
    case 12570:
    {
        returnValue = F("Am Brookwehr");
        break;
    }
    case 12571:
    {
        returnValue = F("Am Brotacker");
        break;
    }
    case 12572:
    {
        returnValue = F("Am Brotkorb");
        break;
    }
    case 12573:
    {
        returnValue = F("Am Broägel");
        break;
    }
    case 12574:
    {
        returnValue = F("Am Broägeler Wald");
        break;
    }
    case 12575:
    {
        returnValue = F("Am Bruch");
        break;
    }
    case 12576:
    {
        returnValue = F("Am Bruchacker");
        break;
    }
    case 12577:
    {
        returnValue = F("Am Bruchbach");
        break;
    }
    case 12578:
    {
        returnValue = F("Am Bruchberg");
        break;
    }
    case 12579:
    {
        returnValue = F("Am Bruchbitzgarten");
        break;
    }
    case 12580:
    {
        returnValue = F("Am Bruchborn");
        break;
    }
    case 12581:
    {
        returnValue = F("Am Bruchdamm");
        break;
    }
    case 12582:
    {
        returnValue = F("Am Bruche");
        break;
    }
    case 12583:
    {
        returnValue = F("Am Brucher Sportplatz");
        break;
    }
    case 12584:
    {
        returnValue = F("Am Bruchfeld");
        break;
    }
    case 12585:
    {
        returnValue = F("Am Bruchfelde");
        break;
    }
    case 12586:
    {
        returnValue = F("Am Bruchflügel");
        break;
    }
    case 12587:
    {
        returnValue = F("Am Bruchgarten");
        break;
    }
    case 12588:
    {
        returnValue = F("Am Bruchgraben");
        break;
    }
    case 12589:
    {
        returnValue = F("Am Bruchhauser Kamp");
        break;
    }
    case 12590:
    {
        returnValue = F("Am Bruchhof");
        break;
    }
    case 12591:
    {
        returnValue = F("Am Bruchhopsgraben");
        break;
    }
    case 12592:
    {
        returnValue = F("Am Bruchkamp");
        break;
    }
    case 12593:
    {
        returnValue = F("Am Bruchpütz");
        break;
    }
    case 12594:
    {
        returnValue = F("Am Bruchrain");
        break;
    }
    case 12595:
    {
        returnValue = F("Am Bruchsberg");
        break;
    }
    case 12596:
    {
        returnValue = F("Am Bruchstamm");
        break;
    }
    case 12597:
    {
        returnValue = F("Am Bruchtor");
        break;
    }
    case 12598:
    {
        returnValue = F("Am Bruchtorfer weg");
        break;
    }
    case 12599:
    {
        returnValue = F("Am Bruchwald");
        break;
    }
    case 12600:
    {
        returnValue = F("Am Bruchweg");
        break;
    }
    case 12601:
    {
        returnValue = F("Am Bruchwege");
        break;
    }
    case 12602:
    {
        returnValue = F("Am Bruchweiher");
        break;
    }
    case 12603:
    {
        returnValue = F("Am Bruchzaun");
        break;
    }
    case 12604:
    {
        returnValue = F("Am Bruckbach");
        break;
    }
    case 12605:
    {
        returnValue = F("Am Bruckberg");
        break;
    }
    case 12606:
    {
        returnValue = F("Am Bruckenbach");
        break;
    }
    case 12607:
    {
        returnValue = F("Am Bruckenberg");
        break;
    }
    case 12608:
    {
        returnValue = F("Am Bruckend");
        break;
    }
    case 12609:
    {
        returnValue = F("Am Brucker Bahnhof");
        break;
    }
    case 12610:
    {
        returnValue = F("Am Brucker Seela");
        break;
    }
    case 12611:
    {
        returnValue = F("Am Bruckerberg");
        break;
    }
    case 12612:
    {
        returnValue = F("Am Bruckerfeld");
        break;
    }
    case 12613:
    {
        returnValue = F("Am Bruckespan");
        break;
    }
    case 12614:
    {
        returnValue = F("Am Bruckfeld");
        break;
    }
    case 12615:
    {
        returnValue = F("Am Bruckgraben");
        break;
    }
    case 12616:
    {
        returnValue = F("Am Bruckhaus");
        break;
    }
    case 12617:
    {
        returnValue = F("Am Bruckler Filz");
        break;
    }
    case 12618:
    {
        returnValue = F("Am Brucksaum");
        break;
    }
    case 12619:
    {
        returnValue = F("Am Bruckwald");
        break;
    }
    case 12620:
    {
        returnValue = F("Am Bruderberg");
        break;
    }
    case 12621:
    {
        returnValue = F("Am Bruderhaus");
        break;
    }
    case 12622:
    {
        returnValue = F("Am Bruderhof");
        break;
    }
    case 12623:
    {
        returnValue = F("Am Brudersrain");
        break;
    }
    case 12624:
    {
        returnValue = F("Am Bruderstieg");
        break;
    }
    case 12625:
    {
        returnValue = F("Am Bruderweg");
        break;
    }
    case 12626:
    {
        returnValue = F("Am Bruggacker");
        break;
    }
    case 12627:
    {
        returnValue = F("Am Bruhrain");
        break;
    }
    case 12628:
    {
        returnValue = F("Am Bruk");
        break;
    }
    case 12629:
    {
        returnValue = F("Am Brullfeld");
        break;
    }
    case 12630:
    {
        returnValue = F("Am Brumberg");
        break;
    }
    case 12631:
    {
        returnValue = F("Am Brumidik");
        break;
    }
    case 12632:
    {
        returnValue = F("Am Brummelbeerbusch");
        break;
    }
    case 12633:
    {
        returnValue = F("Am Brummenberg");
        break;
    }
    case 12634:
    {
        returnValue = F("Am Brummochsenloch");
        break;
    }
    case 12635:
    {
        returnValue = F("Am Brunbarg");
        break;
    }
    case 12636:
    {
        returnValue = F("Am Brungen");
        break;
    }
    case 12637:
    {
        returnValue = F("Am Brungshof");
        break;
    }
    case 12638:
    {
        returnValue = F("Am Brunkel");
        break;
    }
    case 12639:
    {
        returnValue = F("Am Brunkelsberg");
        break;
    }
    case 12640:
    {
        returnValue = F("Am Brunkelskeller");
        break;
    }
    case 12641:
    {
        returnValue = F("Am Brunkelt");
        break;
    }
    case 12642:
    {
        returnValue = F("Am Brunnacker");
        break;
    }
    case 12643:
    {
        returnValue = F("Am Brunnanger");
        break;
    }
    case 12644:
    {
        returnValue = F("Am Brunnbach");
        break;
    }
    case 12645:
    {
        returnValue = F("Am Brunnberg");
        break;
    }
    case 12646:
    {
        returnValue = F("Am Brunnen");
        break;
    }
    case 12647:
    {
        returnValue = F("Am Brunnenacker");
        break;
    }
    case 12648:
    {
        returnValue = F("Am Brunnenbach");
        break;
    }
    case 12649:
    {
        returnValue = F("Am Brunnenberg");
        break;
    }
    case 12650:
    {
        returnValue = F("Am Brunnenberge");
        break;
    }
    case 12651:
    {
        returnValue = F("Am Brunnenbichl");
        break;
    }
    case 12652:
    {
        returnValue = F("Am Brunnenbuck");
        break;
    }
    case 12653:
    {
        returnValue = F("Am Brunnenbuckel");
        break;
    }
    case 12654:
    {
        returnValue = F("Am Brunnenbühl");
        break;
    }
    case 12655:
    {
        returnValue = F("Am Brunneneck");
        break;
    }
    case 12656:
    {
        returnValue = F("Am Brunnenfeld");
        break;
    }
    case 12657:
    {
        returnValue = F("Am Brunnengarten");
        break;
    }
    case 12658:
    {
        returnValue = F("Am Brunnengraben");
        break;
    }
    case 12659:
    {
        returnValue = F("Am Brunnengrund");
        break;
    }
    case 12660:
    {
        returnValue = F("Am Brunnenhaag");
        break;
    }
    case 12661:
    {
        returnValue = F("Am Brunnenhang");
        break;
    }
    case 12662:
    {
        returnValue = F("Am Brunnenhaus");
        break;
    }
    case 12663:
    {
        returnValue = F("Am Brunnenhof");
        break;
    }
    case 12664:
    {
        returnValue = F("Am Brunnenholz");
        break;
    }
    case 12665:
    {
        returnValue = F("Am Brunnenhäusel");
        break;
    }
    case 12666:
    {
        returnValue = F("Am Brunnenhäusle");
        break;
    }
    case 12667:
    {
        returnValue = F("Am Brunnenkamp");
        break;
    }
    case 12668:
    {
        returnValue = F("Am Brunnenkiel");
        break;
    }
    case 12669:
    {
        returnValue = F("Am Brunnenpfad");
        break;
    }
    case 12670:
    {
        returnValue = F("Am Brunnenplatz");
        break;
    }
    case 12671:
    {
        returnValue = F("Am Brunnenplatzl");
        break;
    }
    case 12672:
    {
        returnValue = F("Am Brunnenquell");
        break;
    }
    case 12673:
    {
        returnValue = F("Am Brunnenrain");
        break;
    }
    case 12674:
    {
        returnValue = F("Am Brunnenried");
        break;
    }
    case 12675:
    {
        returnValue = F("Am Brunnenschlag");
        break;
    }
    case 12676:
    {
        returnValue = F("Am Brunnensteig");
        break;
    }
    case 12677:
    {
        returnValue = F("Am Brunnenstieg");
        break;
    }
    case 12678:
    {
        returnValue = F("Am Brunnenstübchen");
        break;
    }
    case 12679:
    {
        returnValue = F("Am Brunnenstück");
        break;
    }
    case 12680:
    {
        returnValue = F("Am Brunnenweg");
        break;
    }
    case 12681:
    {
        returnValue = F("Am Brunnenwiesbach");
        break;
    }
    case 12682:
    {
        returnValue = F("Am Brunnenwäldchen");
        break;
    }
    case 12683:
    {
        returnValue = F("Am Brunnenwässerle");
        break;
    }
    case 12684:
    {
        returnValue = F("Am Brunnerfeld");
        break;
    }
    case 12685:
    {
        returnValue = F("Am Brunnfeld");
        break;
    }
    case 12686:
    {
        returnValue = F("Am Brunngraben");
        break;
    }
    case 12687:
    {
        returnValue = F("Am Brunngrund");
        break;
    }
    case 12688:
    {
        returnValue = F("Am Brunnhaus");
        break;
    }
    case 12689:
    {
        returnValue = F("Am Brunnholz");
        break;
    }
    case 12690:
    {
        returnValue = F("Am Brunnhäusl");
        break;
    }
    case 12691:
    {
        returnValue = F("Am Brunnhölzl");
        break;
    }
    case 12692:
    {
        returnValue = F("Am Brunnhölzlein");
        break;
    }
    case 12693:
    {
        returnValue = F("Am Brunning");
        break;
    }
    case 12694:
    {
        returnValue = F("Am Brunnquell");
        break;
    }
    case 12695:
    {
        returnValue = F("Am Brunnsteig");
        break;
    }
    case 12696:
    {
        returnValue = F("Am Brunntor");
        break;
    }
    case 12697:
    {
        returnValue = F("Am Brunnweg");
        break;
    }
    case 12698:
    {
        returnValue = F("Am Brunsberg");
        break;
    }
    case 12699:
    {
        returnValue = F("Am Brunseborn");
        break;
    }
    case 12700:
    {
        returnValue = F("Am Brunskamp");
        break;
    }
    case 12701:
    {
        returnValue = F("Am Brurain");
        break;
    }
    case 12702:
    {
        returnValue = F("Am Brustert");
        break;
    }
    case 12703:
    {
        returnValue = F("Am Brutberg");
        break;
    }
    case 12704:
    {
        returnValue = F("Am Brutenberg");
        break;
    }
    case 12705:
    {
        returnValue = F("Am Brutslehen");
        break;
    }
    case 12706:
    {
        returnValue = F("Am Bruxbaum");
        break;
    }
    case 12707:
    {
        returnValue = F("Am Brächl");
        break;
    }
    case 12708:
    {
        returnValue = F("Am Brämelnberg");
        break;
    }
    case 12709:
    {
        returnValue = F("Am Brändlein");
        break;
    }
    case 12710:
    {
        returnValue = F("Am Bräuanger");
        break;
    }
    case 12711:
    {
        returnValue = F("Am Bräuberg");
        break;
    }
    case 12712:
    {
        returnValue = F("Am Bräucher");
        break;
    }
    case 12713:
    {
        returnValue = F("Am Bräucken");
        break;
    }
    case 12714:
    {
        returnValue = F("Am Bräugraben");
        break;
    }
    case 12715:
    {
        returnValue = F("Am Bräukeller");
        break;
    }
    case 12716:
    {
        returnValue = F("Am Bräunchesberg");
        break;
    }
    case 12717:
    {
        returnValue = F("Am Bräunling");
        break;
    }
    case 12718:
    {
        returnValue = F("Am Bräurain");
        break;
    }
    case 12719:
    {
        returnValue = F("Am Bräutigamsstück");
        break;
    }
    case 12720:
    {
        returnValue = F("Am Bräuweiher");
        break;
    }
    case 12721:
    {
        returnValue = F("Am Bröckelken");
        break;
    }
    case 12722:
    {
        returnValue = F("Am Bröckelsberg");
        break;
    }
    case 12723:
    {
        returnValue = F("Am Brödelgraben");
        break;
    }
    case 12724:
    {
        returnValue = F("Am Bröhlhof");
        break;
    }
    case 12725:
    {
        returnValue = F("Am Bröhling");
        break;
    }
    case 12726:
    {
        returnValue = F("Am Bröhn");
        break;
    }
    case 12727:
    {
        returnValue = F("Am Brökel");
        break;
    }
    case 12728:
    {
        returnValue = F("Am Brölskamp");
        break;
    }
    case 12729:
    {
        returnValue = F("Am Brömderhof");
        break;
    }
    case 12730:
    {
        returnValue = F("Am Brömmelkamp");
        break;
    }
    case 12731:
    {
        returnValue = F("Am Brönnchen");
        break;
    }
    case 12732:
    {
        returnValue = F("Am Brösen");
        break;
    }
    case 12733:
    {
        returnValue = F("Am Brübel");
        break;
    }
    case 12734:
    {
        returnValue = F("Am Brüchelsteg");
        break;
    }
    case 12735:
    {
        returnValue = F("Am Brüchen");
        break;
    }
    case 12736:
    {
        returnValue = F("Am Brüchfeld");
        break;
    }
    case 12737:
    {
        returnValue = F("Am Brüchsken");
        break;
    }
    case 12738:
    {
        returnValue = F("Am Brückberg");
        break;
    }
    case 12739:
    {
        returnValue = F("Am Brückbusch");
        break;
    }
    case 12740:
    {
        returnValue = F("Am Brückchen");
        break;
    }
    case 12741:
    {
        returnValue = F("Am Brückebach");
        break;
    }
    case 12742:
    {
        returnValue = F("Am Brückel");
        break;
    }
    case 12743:
    {
        returnValue = F("Am Brückelchen");
        break;
    }
    case 12744:
    {
        returnValue = F("Am Brückelgraben");
        break;
    }
    case 12745:
    {
        returnValue = F("Am Brückelsee");
        break;
    }
    case 12746:
    {
        returnValue = F("Am Brückenacker");
        break;
    }
    case 12747:
    {
        returnValue = F("Am Brückenbach");
        break;
    }
    case 12748:
    {
        returnValue = F("Am Brückenbasar");
        break;
    }
    case 12749:
    {
        returnValue = F("Am Brückenberg");
        break;
    }
    case 12750:
    {
        returnValue = F("Am Brückenbergle");
        break;
    }
    case 12751:
    {
        returnValue = F("Am Brückenborn");
        break;
    }
    case 12752:
    {
        returnValue = F("Am Brückenbrink");
        break;
    }
    case 12753:
    {
        returnValue = F("Am Brückenfeldweg");
        break;
    }
    case 12754:
    {
        returnValue = F("Am Brückenfuß");
        break;
    }
    case 12755:
    {
        returnValue = F("Am Brückengarten");
        break;
    }
    case 12756:
    {
        returnValue = F("Am Brückengraben");
        break;
    }
    case 12757:
    {
        returnValue = F("Am Brückengut");
        break;
    }
    case 12758:
    {
        returnValue = F("Am Brückenhau");
        break;
    }
    case 12759:
    {
        returnValue = F("Am Brückenhof");
        break;
    }
    case 12760:
    {
        returnValue = F("Am Brückenkopf");
        break;
    }
    case 12761:
    {
        returnValue = F("Am Brückenpark");
        break;
    }
    case 12762:
    {
        returnValue = F("Am Brückenrangen");
        break;
    }
    case 12763:
    {
        returnValue = F("Am Brückenrasen");
        break;
    }
    case 12764:
    {
        returnValue = F("Am Brückensteg");
        break;
    }
    case 12765:
    {
        returnValue = F("Am Brückenstein");
        break;
    }
    case 12766:
    {
        returnValue = F("Am Brückentor");
        break;
    }
    case 12767:
    {
        returnValue = F("Am Brückenweg");
        break;
    }
    case 12768:
    {
        returnValue = F("Am Brückenwehr");
        break;
    }
    case 12769:
    {
        returnValue = F("Am Brücker Bach");
        break;
    }
    case 12770:
    {
        returnValue = F("Am Brücker Tor");
        break;
    }
    case 12771:
    {
        returnValue = F("Am Brückfeldgraben");
        break;
    }
    case 12772:
    {
        returnValue = F("Am Brückhorst");
        break;
    }
    case 12773:
    {
        returnValue = F("Am Brückisch");
        break;
    }
    case 12774:
    {
        returnValue = F("Am Brückl");
        break;
    }
    case 12775:
    {
        returnValue = F("Am Brücklasberg");
        break;
    }
    case 12776:
    {
        returnValue = F("Am Brückle");
        break;
    }
    case 12777:
    {
        returnValue = F("Am Brücklein");
        break;
    }
    case 12778:
    {
        returnValue = F("Am Brücklesbach");
        break;
    }
    case 12779:
    {
        returnValue = F("Am Brücklfeld");
        break;
    }
    case 12780:
    {
        returnValue = F("Am Brückmann");
        break;
    }
    case 12781:
    {
        returnValue = F("Am Brückschlag");
        break;
    }
    case 12782:
    {
        returnValue = F("Am Brücksken");
        break;
    }
    case 12783:
    {
        returnValue = F("Am Brückweg");
        break;
    }
    case 12784:
    {
        returnValue = F("Am Brückweiherhof");
        break;
    }
    case 12785:
    {
        returnValue = F("Am Brüdenrain");
        break;
    }
    case 12786:
    {
        returnValue = F("Am Brüderberg");
        break;
    }
    case 12787:
    {
        returnValue = F("Am Brüderbund");
        break;
    }
    case 12788:
    {
        returnValue = F("Am Brügel");
        break;
    }
    case 12789:
    {
        returnValue = F("Am Brügelbach");
        break;
    }
    case 12790:
    {
        returnValue = F("Am Brüggeberge");
        break;
    }
    case 12791:
    {
        returnValue = F("Am Brüggel");
        break;
    }
    case 12792:
    {
        returnValue = F("Am Brüggen");
        break;
    }
    case 12793:
    {
        returnValue = F("Am Brüggenbach");
        break;
    }
    case 12794:
    {
        returnValue = F("Am Brügger Bahnhof");
        break;
    }
    case 12795:
    {
        returnValue = F("Am Brühl");
        break;
    }
    case 12796:
    {
        returnValue = F("Am Brühlbach");
        break;
    }
    case 12797:
    {
        returnValue = F("Am Brühlfeld");
        break;
    }
    case 12798:
    {
        returnValue = F("Am Brühlgraben");
        break;
    }
    case 12799:
    {
        returnValue = F("Am Brühlsberg");
        break;
    }
    case 12800:
    {
        returnValue = F("Am Brühlweg");
        break;
    }
    case 12801:
    {
        returnValue = F("Am Brüll");
        break;
    }
    case 12802:
    {
        returnValue = F("Am Brümmer");
        break;
    }
    case 12803:
    {
        returnValue = F("Am Bründel");
        break;
    }
    case 12804:
    {
        returnValue = F("Am Bründl");
        break;
    }
    case 12805:
    {
        returnValue = F("Am Bründlerfeld");
        break;
    }
    case 12806:
    {
        returnValue = F("Am Bründlfeld");
        break;
    }
    case 12807:
    {
        returnValue = F("Am Bründlhof");
        break;
    }
    case 12808:
    {
        returnValue = F("Am Brüngersbroich");
        break;
    }
    case 12809:
    {
        returnValue = F("Am Brüningsberg");
        break;
    }
    case 12810:
    {
        returnValue = F("Am Brünk");
        break;
    }
    case 12811:
    {
        returnValue = F("Am Brünkel");
        break;
    }
    case 12812:
    {
        returnValue = F("Am Brünnchen");
        break;
    }
    case 12813:
    {
        returnValue = F("Am Brünnel");
        break;
    }
    case 12814:
    {
        returnValue = F("Am Brünnele");
        break;
    }
    case 12815:
    {
        returnValue = F("Am Brünnelesberg");
        break;
    }
    case 12816:
    {
        returnValue = F("Am Brünnerl");
        break;
    }
    case 12817:
    {
        returnValue = F("Am Brünnerle");
        break;
    }
    case 12818:
    {
        returnValue = F("Am Brünnfeld");
        break;
    }
    case 12819:
    {
        returnValue = F("Am Brünnhügel");
        break;
    }
    case 12820:
    {
        returnValue = F("Am Brünnl");
        break;
    }
    case 12821:
    {
        returnValue = F("Am Brünnlanger");
        break;
    }
    case 12822:
    {
        returnValue = F("Am Brünnle");
        break;
    }
    case 12823:
    {
        returnValue = F("Am Brünnlein");
        break;
    }
    case 12824:
    {
        returnValue = F("Am Brünstberg");
        break;
    }
    case 12825:
    {
        returnValue = F("Am Brüsselberg");
        break;
    }
    case 12826:
    {
        returnValue = F("Am Brüstfeld");
        break;
    }
    case 12827:
    {
        returnValue = F("Am Bsonderfeld");
        break;
    }
    case 12828:
    {
        returnValue = F("Am Buacker");
        break;
    }
    case 12829:
    {
        returnValue = F("Am Bubach");
        break;
    }
    case 12830:
    {
        returnValue = F("Am Bubacher Weg");
        break;
    }
    case 12831:
    {
        returnValue = F("Am Bubberg");
        break;
    }
    case 12832:
    {
        returnValue = F("Am Bubenberg");
        break;
    }
    case 12833:
    {
        returnValue = F("Am Bubengarten");
        break;
    }
    case 12834:
    {
        returnValue = F("Am Bubenlauf");
        break;
    }
    case 12835:
    {
        returnValue = F("Am Bubenrain");
        break;
    }
    case 12836:
    {
        returnValue = F("Am Bubenrech");
        break;
    }
    case 12837:
    {
        returnValue = F("Am Bubental");
        break;
    }
    case 12838:
    {
        returnValue = F("Am Bubenweiher");
        break;
    }
    case 12839:
    {
        returnValue = F("Am Buberg");
        break;
    }
    case 12840:
    {
        returnValue = F("Am Buch");
        break;
    }
    case 12841:
    {
        returnValue = F("Am Buchacker");
        break;
    }
    case 12842:
    {
        returnValue = F("Am Buchanger");
        break;
    }
    case 12843:
    {
        returnValue = F("Am Buchardianger");
        break;
    }
    case 12844:
    {
        returnValue = F("Am Buchauer Berg");
        break;
    }
    case 12845:
    {
        returnValue = F("Am Buchaugraben");
        break;
    }
    case 12846:
    {
        returnValue = F("Am Buchbach");
        break;
    }
    case 12847:
    {
        returnValue = F("Am Buchberg");
        break;
    }
    case 12848:
    {
        returnValue = F("Am Buchborn");
        break;
    }
    case 12849:
    {
        returnValue = F("Am Buchbrunnen");
        break;
    }
    case 12850:
    {
        returnValue = F("Am Buchbühl");
        break;
    }
    case 12851:
    {
        returnValue = F("Am Buchebonne");
        break;
    }
    case 12852:
    {
        returnValue = F("Am Buchen");
        break;
    }
    case 12853:
    {
        returnValue = F("Am Buchenacker");
        break;
    }
    case 12854:
    {
        returnValue = F("Am Buchenbach");
        break;
    }
    case 12855:
    {
        returnValue = F("Am Buchenbaum");
        break;
    }
    case 12856:
    {
        returnValue = F("Am Buchenberg");
        break;
    }
    case 12857:
    {
        returnValue = F("Am Buchenberge");
        break;
    }
    case 12858:
    {
        returnValue = F("Am Buchenbrink");
        break;
    }
    case 12859:
    {
        returnValue = F("Am Buchenbusch");
        break;
    }
    case 12860:
    {
        returnValue = F("Am Buchenbühl");
        break;
    }
    case 12861:
    {
        returnValue = F("Am Bucheneck");
        break;
    }
    case 12862:
    {
        returnValue = F("Am Buchenfeld");
        break;
    }
    case 12863:
    {
        returnValue = F("Am Buchengraben");
        break;
    }
    case 12864:
    {
        returnValue = F("Am Buchengrund");
        break;
    }
    case 12865:
    {
        returnValue = F("Am Buchenhag");
        break;
    }
    case 12866:
    {
        returnValue = F("Am Buchenhain");
        break;
    }
    case 12867:
    {
        returnValue = F("Am Buchenhang");
        break;
    }
    case 12868:
    {
        returnValue = F("Am Buchenhof");
        break;
    }
    case 12869:
    {
        returnValue = F("Am Buchenholze");
        break;
    }
    case 12870:
    {
        returnValue = F("Am Buchenkamp");
        break;
    }
    case 12871:
    {
        returnValue = F("Am Buchenkampe");
        break;
    }
    case 12872:
    {
        returnValue = F("Am Buchenknick");
        break;
    }
    case 12873:
    {
        returnValue = F("Am Buchenkopf");
        break;
    }
    case 12874:
    {
        returnValue = F("Am Buchenmaar");
        break;
    }
    case 12875:
    {
        returnValue = F("Am Buchenpark");
        break;
    }
    case 12876:
    {
        returnValue = F("Am Buchenrain");
        break;
    }
    case 12877:
    {
        returnValue = F("Am Buchenried");
        break;
    }
    case 12878:
    {
        returnValue = F("Am Buchenring");
        break;
    }
    case 12879:
    {
        returnValue = F("Am Buchenschlag");
        break;
    }
    case 12880:
    {
        returnValue = F("Am Buchensteg");
        break;
    }
    case 12881:
    {
        returnValue = F("Am Buchenstein");
        break;
    }
    case 12882:
    {
        returnValue = F("Am Buchenstock");
        break;
    }
    case 12883:
    {
        returnValue = F("Am Buchenstück");
        break;
    }
    case 12884:
    {
        returnValue = F("Am Buchenwald");
        break;
    }
    case 12885:
    {
        returnValue = F("Am Buchenweg");
        break;
    }
    case 12886:
    {
        returnValue = F("Am Buchenwäldchen");
        break;
    }
    case 12887:
    {
        returnValue = F("Am Buchert");
        break;
    }
    case 12888:
    {
        returnValue = F("Am Buchet");
        break;
    }
    case 12889:
    {
        returnValue = F("Am Buchgraben");
        break;
    }
    case 12890:
    {
        returnValue = F("Am Buchhagen");
        break;
    }
    case 12891:
    {
        returnValue = F("Am Buchhaldenberg");
        break;
    }
    case 12892:
    {
        returnValue = F("Am Buchhof");
        break;
    }
    case 12893:
    {
        returnValue = F("Am Buchholz");
        break;
    }
    case 12894:
    {
        returnValue = F("Am Buchholzberg");
        break;
    }
    case 12895:
    {
        returnValue = F("Am Buchholzer Busch");
        break;
    }
    case 12896:
    {
        returnValue = F("Am Buchholzer Feldweg");
        break;
    }
    case 12897:
    {
        returnValue = F("Am Buchholzer Teich");
        break;
    }
    case 12898:
    {
        returnValue = F("Am Buchholzplatz");
        break;
    }
    case 12899:
    {
        returnValue = F("Am Buchhorn");
        break;
    }
    case 12900:
    {
        returnValue = F("Am Buchhorst");
        break;
    }
    case 12901:
    {
        returnValue = F("Am Buchhölzl");
        break;
    }
    case 12902:
    {
        returnValue = F("Am Buchhölzle");
        break;
    }
    case 12903:
    {
        returnValue = F("Am Buchhügel");
        break;
    }
    case 12904:
    {
        returnValue = F("Am Buchkopf");
        break;
    }
    case 12905:
    {
        returnValue = F("Am Buchlicht");
        break;
    }
    case 12906:
    {
        returnValue = F("Am Buchner Feld");
        break;
    }
    case 12907:
    {
        returnValue = F("Am Buchrain");
        break;
    }
    case 12908:
    {
        returnValue = F("Am Buchrech");
        break;
    }
    case 12909:
    {
        returnValue = F("Am Buchs");
        break;
    }
    case 12910:
    {
        returnValue = F("Am Buchsbaum");
        break;
    }
    case 12911:
    {
        returnValue = F("Am Buchschlag");
        break;
    }
    case 12912:
    {
        returnValue = F("Am Buchschollen");
        break;
    }
    case 12913:
    {
        returnValue = F("Am Buchstein");
        break;
    }
    case 12914:
    {
        returnValue = F("Am Buchstück");
        break;
    }
    case 12915:
    {
        returnValue = F("Am Buchteil");
        break;
    }
    case 12916:
    {
        returnValue = F("Am Buchwald");
        break;
    }
    case 12917:
    {
        returnValue = F("Am Buchwaldskopf");
        break;
    }
    case 12918:
    {
        returnValue = F("Am Buchwedel");
        break;
    }
    case 12919:
    {
        returnValue = F("Am Buchweg");
        break;
    }
    case 12920:
    {
        returnValue = F("Am Buchweizenberg");
        break;
    }
    case 12921:
    {
        returnValue = F("Am Buchweizenfeld");
        break;
    }
    case 12922:
    {
        returnValue = F("Am Buchwäldchen");
        break;
    }
    case 12923:
    {
        returnValue = F("Am Buchwäldle");
        break;
    }
    case 12924:
    {
        returnValue = F("Am Buchzagl");
        break;
    }
    case 12925:
    {
        returnValue = F("Am Buck");
        break;
    }
    case 12926:
    {
        returnValue = F("Am Buck / Im Grund");
        break;
    }
    case 12927:
    {
        returnValue = F("Am Buckacker");
        break;
    }
    case 12928:
    {
        returnValue = F("Am Buckberg");
        break;
    }
    case 12929:
    {
        returnValue = F("Am Bucke");
        break;
    }
    case 12930:
    {
        returnValue = F("Am Buckel");
        break;
    }
    case 12931:
    {
        returnValue = F("Am Buckelfeld");
        break;
    }
    case 12932:
    {
        returnValue = F("Am Buckhansen");
        break;
    }
    case 12933:
    {
        returnValue = F("Am Buckhoff");
        break;
    }
    case 12934:
    {
        returnValue = F("Am Buckhorn");
        break;
    }
    case 12935:
    {
        returnValue = F("Am Buckl");
        break;
    }
    case 12936:
    {
        returnValue = F("Am Bucklberg");
        break;
    }
    case 12937:
    {
        returnValue = F("Am Buckrich");
        break;
    }
    case 12938:
    {
        returnValue = F("Am Bucksberg");
        break;
    }
    case 12939:
    {
        returnValue = F("Am Budberg");
        break;
    }
    case 12940:
    {
        returnValue = F("Am Budberger Bach");
        break;
    }
    case 12941:
    {
        returnValue = F("Am Budberger Pfad");
        break;
    }
    case 12942:
    {
        returnValue = F("Am Buddenbach");
        break;
    }
    case 12943:
    {
        returnValue = F("Am Buddenberg");
        break;
    }
    case 12944:
    {
        returnValue = F("Am Budenkamp");
        break;
    }
    case 12945:
    {
        returnValue = F("Am Budwichen");
        break;
    }
    case 12946:
    {
        returnValue = F("Am Bue");
        break;
    }
    case 12947:
    {
        returnValue = F("Am Buer Moor");
        break;
    }
    case 12948:
    {
        returnValue = F("Am Buerbrink");
        break;
    }
    case 12949:
    {
        returnValue = F("Am Buernbarg");
        break;
    }
    case 12950:
    {
        returnValue = F("Am Buerndiek");
        break;
    }
    case 12951:
    {
        returnValue = F("Am Buerschen Feld");
        break;
    }
    case 12952:
    {
        returnValue = F("Am Buetzgeshof");
        break;
    }
    case 12953:
    {
        returnValue = F("Am Bug");
        break;
    }
    case 12954:
    {
        returnValue = F("Am Bugapark");
        break;
    }
    case 12955:
    {
        returnValue = F("Am Bugdahl");
        break;
    }
    case 12956:
    {
        returnValue = F("Am Bugenkamp");
        break;
    }
    case 12957:
    {
        returnValue = F("Am Buhl'schen Park");
        break;
    }
    case 12958:
    {
        returnValue = F("Am Buhr");
        break;
    }
    case 12959:
    {
        returnValue = F("Am Buhrfelde");
        break;
    }
    case 12960:
    {
        returnValue = F("Am Buir");
        break;
    }
    case 12961:
    {
        returnValue = F("Am Buirer Fließ");
        break;
    }
    case 12962:
    {
        returnValue = F("Am Buksot");
        break;
    }
    case 12963:
    {
        returnValue = F("Am Bulgersgarten");
        break;
    }
    case 12964:
    {
        returnValue = F("Am Bullenberg");
        break;
    }
    case 12965:
    {
        returnValue = F("Am Bullenhof");
        break;
    }
    case 12966:
    {
        returnValue = F("Am Bullenkopf");
        break;
    }
    case 12967:
    {
        returnValue = F("Am Bullenworth");
        break;
    }
    case 12968:
    {
        returnValue = F("Am Bullerbach");
        break;
    }
    case 12969:
    {
        returnValue = F("Am Bullerberg");
        break;
    }
    case 12970:
    {
        returnValue = F("Am Bullergraben");
        break;
    }
    case 12971:
    {
        returnValue = F("Am Bullhamm");
        break;
    }
    case 12972:
    {
        returnValue = F("Am Bullweg");
        break;
    }
    case 12973:
    {
        returnValue = F("Am Bulskamp");
        break;
    }
    case 12974:
    {
        returnValue = F("Am Bulsmoor");
        break;
    }
    case 12975:
    {
        returnValue = F("Am Bulster");
        break;
    }
    case 12976:
    {
        returnValue = F("Am Bulsterdeich");
        break;
    }
    case 12977:
    {
        returnValue = F("Am Bultbach");
        break;
    }
    case 12978:
    {
        returnValue = F("Am Bultberg");
        break;
    }
    case 12979:
    {
        returnValue = F("Am Bulte");
        break;
    }
    case 12980:
    {
        returnValue = F("Am Bummelsberg");
        break;
    }
    case 12981:
    {
        returnValue = F("Am Bundesbahnhof");
        break;
    }
    case 12982:
    {
        returnValue = F("Am Bundleshof");
        break;
    }
    case 12983:
    {
        returnValue = F("Am Bungartsberg");
        break;
    }
    case 12984:
    {
        returnValue = F("Am Bungental");
        break;
    }
    case 12985:
    {
        returnValue = F("Am Bungert");
        break;
    }
    case 12986:
    {
        returnValue = F("Am Bungertspfad");
        break;
    }
    case 12987:
    {
        returnValue = F("Am Bungsberg");
        break;
    }
    case 12988:
    {
        returnValue = F("Am Bunhövel");
        break;
    }
    case 12989:
    {
        returnValue = F("Am Bunitz");
        break;
    }
    case 12990:
    {
        returnValue = F("Am Bunken");
        break;
    }
    case 12991:
    {
        returnValue = F("Am Bunker");
        break;
    }
    case 12992:
    {
        returnValue = F("Am Bunne");
        break;
    }
    case 12993:
    {
        returnValue = F("Am Bunsberg");
        break;
    }
    case 12994:
    {
        returnValue = F("Am Buntacker");
        break;
    }
    case 12995:
    {
        returnValue = F("Am Bunten Bock");
        break;
    }
    case 12996:
    {
        returnValue = F("Am Buntengraben");
        break;
    }
    case 12997:
    {
        returnValue = F("Am Bunzelberg");
        break;
    }
    case 12998:
    {
        returnValue = F("Am Bunzenberg");
        break;
    }
    case 12999:
    {
        returnValue = F("Am Bur");
        break;
    }
    case 13000:
    {
        returnValue = F("Am Burbach");
        break;
    }
    case 13001:
    {
        returnValue = F("Am Burbalken");
        break;
    }
    case 13002:
    {
        returnValue = F("Am Burbels");
        break;
    }
    case 13003:
    {
        returnValue = F("Am Burberg");
        break;
    }
    case 13004:
    {
        returnValue = F("Am Burcharditor");
        break;
    }
    case 13005:
    {
        returnValue = F("Am Burdiek");
        break;
    }
    case 13006:
    {
        returnValue = F("Am Burenweg");
        break;
    }
    case 13007:
    {
        returnValue = F("Am Burg");
        break;
    }
    case 13008:
    {
        returnValue = F("Am Burgacker");
        break;
    }
    case 13009:
    {
        returnValue = F("Am Burgauer Busch");
        break;
    }
    case 13010:
    {
        returnValue = F("Am Burgbach");
        break;
    }
    case 13011:
    {
        returnValue = F("Am Burgberg");
        break;
    }
    case 13012:
    {
        returnValue = F("Am Burgberge");
        break;
    }
    case 13013:
    {
        returnValue = F("Am Burgbichl");
        break;
    }
    case 13014:
    {
        returnValue = F("Am Burgblick");
        break;
    }
    case 13015:
    {
        returnValue = F("Am Burgbusch");
        break;
    }
    case 13016:
    {
        returnValue = F("Am Burger Platz");
        break;
    }
    case 13017:
    {
        returnValue = F("Am Burger Teich");
        break;
    }
    case 13018:
    {
        returnValue = F("Am Burger Weg");
        break;
    }
    case 13019:
    {
        returnValue = F("Am Burgerberg");
        break;
    }
    case 13020:
    {
        returnValue = F("Am Burgerfeld");
        break;
    }
    case 13021:
    {
        returnValue = F("Am Burgergraben");
        break;
    }
    case 13022:
    {
        returnValue = F("Am Burgerhof");
        break;
    }
    case 13023:
    {
        returnValue = F("Am Burgersberg");
        break;
    }
    case 13024:
    {
        returnValue = F("Am Burgersee");
        break;
    }
    case 13025:
    {
        returnValue = F("Am Burgerwald");
        break;
    }
    case 13026:
    {
        returnValue = F("Am Burgesch");
        break;
    }
    case 13027:
    {
        returnValue = F("Am Burgfeld");
        break;
    }
    case 13028:
    {
        returnValue = F("Am Burgfelsen");
        break;
    }
    case 13029:
    {
        returnValue = F("Am Burgfried");
        break;
    }
    case 13030:
    {
        returnValue = F("Am Burgfrieden");
        break;
    }
    case 13031:
    {
        returnValue = F("Am Burggarten");
        break;
    }
    case 13032:
    {
        returnValue = F("Am Burggipfel");
        break;
    }
    case 13033:
    {
        returnValue = F("Am Burggraben");
        break;
    }
    case 13034:
    {
        returnValue = F("Am Burggrafenhain");
        break;
    }
    case 13035:
    {
        returnValue = F("Am Burggut");
        break;
    }
    case 13036:
    {
        returnValue = F("Am Burghain");
        break;
    }
    case 13037:
    {
        returnValue = F("Am Burghals");
        break;
    }
    case 13038:
    {
        returnValue = F("Am Burghang");
        break;
    }
    case 13039:
    {
        returnValue = F("Am Burghardsberg");
        break;
    }
    case 13040:
    {
        returnValue = F("Am Burghaus");
        break;
    }
    case 13041:
    {
        returnValue = F("Am Burghof");
        break;
    }
    case 13042:
    {
        returnValue = F("Am Burgholz");
        break;
    }
    case 13043:
    {
        returnValue = F("Am Burghügel");
        break;
    }
    case 13044:
    {
        returnValue = F("Am Burgkamp");
        break;
    }
    case 13045:
    {
        returnValue = F("Am Burgknopp");
        break;
    }
    case 13046:
    {
        returnValue = F("Am Burglehen");
        break;
    }
    case 13047:
    {
        returnValue = F("Am Burglindchen");
        break;
    }
    case 13048:
    {
        returnValue = F("Am Burgmannenhaus");
        break;
    }
    case 13049:
    {
        returnValue = F("Am Burgmannshof");
        break;
    }
    case 13050:
    {
        returnValue = F("Am Burgmühlgraben");
        break;
    }
    case 13051:
    {
        returnValue = F("Am Burgpark");
        break;
    }
    case 13052:
    {
        returnValue = F("Am Burgplatz");
        break;
    }
    case 13053:
    {
        returnValue = F("Am Burgrain");
        break;
    }
    case 13054:
    {
        returnValue = F("Am Burgring");
        break;
    }
    case 13055:
    {
        returnValue = F("Am Burgsberg");
        break;
    }
    case 13056:
    {
        returnValue = F("Am Burgser");
        break;
    }
    case 13057:
    {
        returnValue = F("Am Burgsgraben");
        break;
    }
    case 13058:
    {
        returnValue = F("Am Burgstadl");
        break;
    }
    case 13059:
    {
        returnValue = F("Am Burgstall");
        break;
    }
    case 13060:
    {
        returnValue = F("Am Burgstalltobel");
        break;
    }
    case 13061:
    {
        returnValue = F("Am Burgsteg");
        break;
    }
    case 13062:
    {
        returnValue = F("Am Burgstein");
        break;
    }
    case 13063:
    {
        returnValue = F("Am Burgstock");
        break;
    }
    case 13064:
    {
        returnValue = F("Am Burgstor");
        break;
    }
    case 13065:
    {
        returnValue = F("Am Burgstädtel");
        break;
    }
    case 13066:
    {
        returnValue = F("Am Burgstädtl");
        break;
    }
    case 13067:
    {
        returnValue = F("Am Burgtor");
        break;
    }
    case 13068:
    {
        returnValue = F("Am Burgturm");
        break;
    }
    case 13069:
    {
        returnValue = F("Am Burgunderweg");
        break;
    }
    case 13070:
    {
        returnValue = F("Am Burgwald");
        break;
    }
    case 13071:
    {
        returnValue = F("Am Burgwall");
        break;
    }
    case 13072:
    {
        returnValue = F("Am Burgwartsberg");
        break;
    }
    case 13073:
    {
        returnValue = F("Am Burgwartsblick");
        break;
    }
    case 13074:
    {
        returnValue = F("Am Burgweg");
        break;
    }
    case 13075:
    {
        returnValue = F("Am Burgweierle");
        break;
    }
    case 13076:
    {
        returnValue = F("Am Burgweiher");
        break;
    }
    case 13077:
    {
        returnValue = F("Am Burgwerksrain");
        break;
    }
    case 13078:
    {
        returnValue = F("Am Burhagen");
        break;
    }
    case 13079:
    {
        returnValue = F("Am Burhaver Sieltief");
        break;
    }
    case 13080:
    {
        returnValue = F("Am Burkardstuhl");
        break;
    }
    case 13081:
    {
        returnValue = F("Am Burkhardtsberg");
        break;
    }
    case 13082:
    {
        returnValue = F("Am Burkhardtsgrund");
        break;
    }
    case 13083:
    {
        returnValue = F("Am Burkhardtswald");
        break;
    }
    case 13084:
    {
        returnValue = F("Am Burndahl");
        break;
    }
    case 13085:
    {
        returnValue = F("Am Burren");
        break;
    }
    case 13086:
    {
        returnValue = F("Am Burrenkeller");
        break;
    }
    case 13087:
    {
        returnValue = F("Am Burscheid");
        break;
    }
    case 13088:
    {
        returnValue = F("Am Burschel");
        break;
    }
    case 13089:
    {
        returnValue = F("Am Burshof");
        break;
    }
    case 13090:
    {
        returnValue = F("Am Bus");
        break;
    }
    case 13091:
    {
        returnValue = F("Am Busbahnhof");
        break;
    }
    case 13092:
    {
        returnValue = F("Am Busberg");
        break;
    }
    case 13093:
    {
        returnValue = F("Am Busch");
        break;
    }
    case 13094:
    {
        returnValue = F("Am Buschacker");
        break;
    }
    case 13095:
    {
        returnValue = F("Am Buschbach");
        break;
    }
    case 13096:
    {
        returnValue = F("Am Buschbad");
        break;
    }
    case 13097:
    {
        returnValue = F("Am Buschberg");
        break;
    }
    case 13098:
    {
        returnValue = F("Am Busche");
        break;
    }
    case 13099:
    {
        returnValue = F("Am Buscheberg");
        break;
    }
    case 13100:
    {
        returnValue = F("Am Buscheid");
        break;
    }
    case 13101:
    {
        returnValue = F("Am Buschel");
        break;
    }
    case 13102:
    {
        returnValue = F("Am Buschelberg");
        break;
    }
    case 13103:
    {
        returnValue = F("Am Buschend");
        break;
    }
    case 13104:
    {
        returnValue = F("Am Buschengässle");
        break;
    }
    case 13105:
    {
        returnValue = F("Am Buschenweg");
        break;
    }
    case 13106:
    {
        returnValue = F("Am Buscherhof");
        break;
    }
    case 13107:
    {
        returnValue = F("Am Buschfeld");
        break;
    }
    case 13108:
    {
        returnValue = F("Am Buschgarten");
        break;
    }
    case 13109:
    {
        returnValue = F("Am Buschgraben");
        break;
    }
    case 13110:
    {
        returnValue = F("Am Buschhausen");
        break;
    }
    case 13111:
    {
        returnValue = F("Am Buschhof");
        break;
    }
    case 13112:
    {
        returnValue = F("Am Buschhoff");
        break;
    }
    case 13113:
    {
        returnValue = F("Am Buschhorn");
        break;
    }
    case 13114:
    {
        returnValue = F("Am Buschkamp");
        break;
    }
    case 13115:
    {
        returnValue = F("Am Buschkopf");
        break;
    }
    case 13116:
    {
        returnValue = F("Am Buschkothen");
        break;
    }
    case 13117:
    {
        returnValue = F("Am Buschlein");
        break;
    }
    case 13118:
    {
        returnValue = F("Am Buschsiepen");
        break;
    }
    case 13119:
    {
        returnValue = F("Am Buschteich");
        break;
    }
    case 13120:
    {
        returnValue = F("Am Buschufer");
        break;
    }
    case 13121:
    {
        returnValue = F("Am Buschwald");
        break;
    }
    case 13122:
    {
        returnValue = F("Am Buschweg");
        break;
    }
    case 13123:
    {
        returnValue = F("Am Busdorfer Teich");
        break;
    }
    case 13124:
    {
        returnValue = F("Am Busenberg");
        break;
    }
    case 13125:
    {
        returnValue = F("Am Bushof");
        break;
    }
    case 13126:
    {
        returnValue = F("Am Buss");
        break;
    }
    case 13127:
    {
        returnValue = F("Am Bussenberg");
        break;
    }
    case 13128:
    {
        returnValue = F("Am Bussenblick");
        break;
    }
    case 13129:
    {
        returnValue = F("Am Bussenhang");
        break;
    }
    case 13130:
    {
        returnValue = F("Am Busskolk");
        break;
    }
    case 13131:
    {
        returnValue = F("Am Butendahlacker");
        break;
    }
    case 13132:
    {
        returnValue = F("Am Butendiek");
        break;
    }
    case 13133:
    {
        returnValue = F("Am Butengarten");
        break;
    }
    case 13134:
    {
        returnValue = F("Am Butenwall");
        break;
    }
    case 13135:
    {
        returnValue = F("Am Butjenter");
        break;
    }
    case 13136:
    {
        returnValue = F("Am Buttegraben");
        break;
    }
    case 13137:
    {
        returnValue = F("Am Buttenberg");
        break;
    }
    case 13138:
    {
        returnValue = F("Am Buttendick");
        break;
    }
    case 13139:
    {
        returnValue = F("Am Buttenkrug");
        break;
    }
    case 13140:
    {
        returnValue = F("Am Butterberg");
        break;
    }
    case 13141:
    {
        returnValue = F("Am Butterberge");
        break;
    }
    case 13142:
    {
        returnValue = F("Am Butterborn");
        break;
    }
    case 13143:
    {
        returnValue = F("Am Butterbusch");
        break;
    }
    case 13144:
    {
        returnValue = F("Am Buttergraben");
        break;
    }
    case 13145:
    {
        returnValue = F("Am Buttergrund");
        break;
    }
    case 13146:
    {
        returnValue = F("Am Butterhübel");
        break;
    }
    case 13147:
    {
        returnValue = F("Am Butterkamp");
        break;
    }
    case 13148:
    {
        returnValue = F("Am Buttermarkt");
        break;
    }
    case 13149:
    {
        returnValue = F("Am Buttermilchsteig");
        break;
    }
    case 13150:
    {
        returnValue = F("Am Butterstein");
        break;
    }
    case 13151:
    {
        returnValue = F("Am Butterteich");
        break;
    }
    case 13152:
    {
        returnValue = F("Am Butterturm");
        break;
    }
    case 13153:
    {
        returnValue = F("Am Butterwasser");
        break;
    }
    case 13154:
    {
        returnValue = F("Am Butterweck");
        break;
    }
    case 13155:
    {
        returnValue = F("Am Buttgraben");
        break;
    }
    case 13156:
    {
        returnValue = F("Am Butzbach");
        break;
    }
    case 13157:
    {
        returnValue = F("Am Butzenberg");
        break;
    }
    case 13158:
    {
        returnValue = F("Am Butzenweg");
        break;
    }
    case 13159:
    {
        returnValue = F("Am Butzerbach");
        break;
    }
    case 13160:
    {
        returnValue = F("Am Butzerberg");
        break;
    }
    case 13161:
    {
        returnValue = F("Am Buursood");
        break;
    }
    case 13162:
    {
        returnValue = F("Am Buxbaum");
        break;
    }
    case 13163:
    {
        returnValue = F("Am Buxborn");
        break;
    }
    case 13164:
    {
        returnValue = F("Am Buxholz");
        break;
    }
    case 13165:
    {
        returnValue = F("Am Buxot");
        break;
    }
    case 13166:
    {
        returnValue = F("Am Bußbach");
        break;
    }
    case 13167:
    {
        returnValue = F("Am Bußberg");
        break;
    }
    case 13168:
    {
        returnValue = F("Am Bußkreuz");
        break;
    }
    case 13169:
    {
        returnValue = F("Am Bächel");
        break;
    }
    case 13170:
    {
        returnValue = F("Am Bächelsberg");
        break;
    }
    case 13171:
    {
        returnValue = F("Am Bächelsgraben");
        break;
    }
    case 13172:
    {
        returnValue = F("Am Bächenbuckel");
        break;
    }
    case 13173:
    {
        returnValue = F("Am Bächle");
        break;
    }
    case 13174:
    {
        returnValue = F("Am Bächlein");
        break;
    }
    case 13175:
    {
        returnValue = F("Am Bächweg");
        break;
    }
    case 13176:
    {
        returnValue = F("Am Bäcker Janns Kreuz");
        break;
    }
    case 13177:
    {
        returnValue = F("Am Bäckeranger");
        break;
    }
    case 13178:
    {
        returnValue = F("Am Bäckerberg");
        break;
    }
    case 13179:
    {
        returnValue = F("Am Bäckerbichl");
        break;
    }
    case 13180:
    {
        returnValue = F("Am Bäckerbrink");
        break;
    }
    case 13181:
    {
        returnValue = F("Am Bäckerfeld");
        break;
    }
    case 13182:
    {
        returnValue = F("Am Bäckergütl");
        break;
    }
    case 13183:
    {
        returnValue = F("Am Bäckerholz");
        break;
    }
    case 13184:
    {
        returnValue = F("Am Bäckerhörn");
        break;
    }
    case 13185:
    {
        returnValue = F("Am Bäckermorgen");
        break;
    }
    case 13186:
    {
        returnValue = F("Am Bäckerplatz");
        break;
    }
    case 13187:
    {
        returnValue = F("Am Bäckerrain");
        break;
    }
    case 13188:
    {
        returnValue = F("Am Bäckersacker");
        break;
    }
    case 13189:
    {
        returnValue = F("Am Bäckersberg");
        break;
    }
    case 13190:
    {
        returnValue = F("Am Bäckersgarten");
        break;
    }
    case 13191:
    {
        returnValue = F("Am Bäckerstieg");
        break;
    }
    case 13192:
    {
        returnValue = F("Am Bäckerteich");
        break;
    }
    case 13193:
    {
        returnValue = F("Am Bäckerweg");
        break;
    }
    case 13194:
    {
        returnValue = F("Am Bäckerweiher");
        break;
    }
    case 13195:
    {
        returnValue = F("Am Bäckfeld");
        break;
    }
    case 13196:
    {
        returnValue = F("Am Bäders");
        break;
    }
    case 13197:
    {
        returnValue = F("Am Bählbusch");
        break;
    }
    case 13198:
    {
        returnValue = F("Am Bähnchen");
        break;
    }
    case 13199:
    {
        returnValue = F("Am Bähnken");
        break;
    }
    case 13200:
    {
        returnValue = F("Am Bähnle");
        break;
    }
    case 13201:
    {
        returnValue = F("Am Bäker");
        break;
    }
    case 13202:
    {
        returnValue = F("Am Bändlein");
        break;
    }
    case 13203:
    {
        returnValue = F("Am Bänksgen");
        break;
    }
    case 13204:
    {
        returnValue = F("Am Bär");
        break;
    }
    case 13205:
    {
        returnValue = F("Am Bäracker");
        break;
    }
    case 13206:
    {
        returnValue = F("Am Bären");
        break;
    }
    case 13207:
    {
        returnValue = F("Am Bärenacker");
        break;
    }
    case 13208:
    {
        returnValue = F("Am Bärenbach");
        break;
    }
    case 13209:
    {
        returnValue = F("Am Bärenberg");
        break;
    }
    case 13210:
    {
        returnValue = F("Am Bärenberge");
        break;
    }
    case 13211:
    {
        returnValue = F("Am Bärenblau");
        break;
    }
    case 13212:
    {
        returnValue = F("Am Bärenbroich");
        break;
    }
    case 13213:
    {
        returnValue = F("Am Bärenbruch");
        break;
    }
    case 13214:
    {
        returnValue = F("Am Bärenbühl");
        break;
    }
    case 13215:
    {
        returnValue = F("Am Bärendenkmal");
        break;
    }
    case 13216:
    {
        returnValue = F("Am Bärengarten");
        break;
    }
    case 13217:
    {
        returnValue = F("Am Bärengraben");
        break;
    }
    case 13218:
    {
        returnValue = F("Am Bärengrund");
        break;
    }
    case 13219:
    {
        returnValue = F("Am Bärenkamp");
        break;
    }
    case 13220:
    {
        returnValue = F("Am Bärenklingengraben");
        break;
    }
    case 13221:
    {
        returnValue = F("Am Bärenplatz");
        break;
    }
    case 13222:
    {
        returnValue = F("Am Bärenstein");
        break;
    }
    case 13223:
    {
        returnValue = F("Am Bärental");
        break;
    }
    case 13224:
    {
        returnValue = F("Am Bärenwald");
        break;
    }
    case 13225:
    {
        returnValue = F("Am Bärenweg");
        break;
    }
    case 13226:
    {
        returnValue = F("Am Bärling");
        break;
    }
    case 13227:
    {
        returnValue = F("Am Bärloch");
        break;
    }
    case 13228:
    {
        returnValue = F("Am Bärn");
        break;
    }
    case 13229:
    {
        returnValue = F("Am Bärnbach");
        break;
    }
    case 13230:
    {
        returnValue = F("Am Bärngraben");
        break;
    }
    case 13231:
    {
        returnValue = F("Am Bärnhäuter");
        break;
    }
    case 13232:
    {
        returnValue = F("Am Bärnroth");
        break;
    }
    case 13233:
    {
        returnValue = F("Am Bärwinkel");
        break;
    }
    case 13234:
    {
        returnValue = F("Am Bätjerplatz");
        break;
    }
    case 13235:
    {
        returnValue = F("Am Bäuerleinsberg");
        break;
    }
    case 13236:
    {
        returnValue = F("Am Bäumchen");
        break;
    }
    case 13237:
    {
        returnValue = F("Am Bäumelfeld");
        break;
    }
    case 13238:
    {
        returnValue = F("Am Bäumerteich");
        break;
    }
    case 13239:
    {
        returnValue = F("Am Bäumle");
        break;
    }
    case 13240:
    {
        returnValue = F("Am Bäumlesberg");
        break;
    }
    case 13241:
    {
        returnValue = F("Am Bäuweg");
        break;
    }
    case 13242:
    {
        returnValue = F("Am Böbbing");
        break;
    }
    case 13243:
    {
        returnValue = F("Am Böckelhof");
        break;
    }
    case 13244:
    {
        returnValue = F("Am Böckelsacker");
        break;
    }
    case 13245:
    {
        returnValue = F("Am Böckelsmeerfeld");
        break;
    }
    case 13246:
    {
        returnValue = F("Am Böckenberg");
        break;
    }
    case 13247:
    {
        returnValue = F("Am Böckenbusch");
        break;
    }
    case 13248:
    {
        returnValue = F("Am Böckenstück");
        break;
    }
    case 13249:
    {
        returnValue = F("Am Böckler");
        break;
    }
    case 13250:
    {
        returnValue = F("Am Böddenstedter Weg");
        break;
    }
    case 13251:
    {
        returnValue = F("Am Bödelein");
        break;
    }
    case 13252:
    {
        returnValue = F("Am Bödingsfeld");
        break;
    }
    case 13253:
    {
        returnValue = F("Am Bödjebarg");
        break;
    }
    case 13254:
    {
        returnValue = F("Am Böggerkamp");
        break;
    }
    case 13255:
    {
        returnValue = F("Am Bögle");
        break;
    }
    case 13256:
    {
        returnValue = F("Am Böhl");
        break;
    }
    case 13257:
    {
        returnValue = F("Am Böhlacker");
        break;
    }
    case 13258:
    {
        returnValue = F("Am Böhler Pfad");
        break;
    }
    case 13259:
    {
        returnValue = F("Am Böhler Wald");
        break;
    }
    case 13260:
    {
        returnValue = F("Am Böhlgraben");
        break;
    }
    case 13261:
    {
        returnValue = F("Am Böhlitzberg");
        break;
    }
    case 13262:
    {
        returnValue = F("Am Böhlweg");
        break;
    }
    case 13263:
    {
        returnValue = F("Am Böhm");
        break;
    }
    case 13264:
    {
        returnValue = F("Am Böhmengäßchen");
        break;
    }
    case 13265:
    {
        returnValue = F("Am Böhmerberg");
        break;
    }
    case 13266:
    {
        returnValue = F("Am Böhmerfeld");
        break;
    }
    case 13267:
    {
        returnValue = F("Am Böhmerwald");
        break;
    }
    case 13268:
    {
        returnValue = F("Am Böhmeufer");
        break;
    }
    case 13269:
    {
        returnValue = F("Am Böhmischen Tor");
        break;
    }
    case 13270:
    {
        returnValue = F("Am Böhnanger");
        break;
    }
    case 13271:
    {
        returnValue = F("Am Böhneberg");
        break;
    }
    case 13272:
    {
        returnValue = F("Am Böhnenbusch");
        break;
    }
    case 13273:
    {
        returnValue = F("Am Böhnerfeld");
        break;
    }
    case 13274:
    {
        returnValue = F("Am Böhnlich");
        break;
    }
    case 13275:
    {
        returnValue = F("Am Böhnäckernstrom");
        break;
    }
    case 13276:
    {
        returnValue = F("Am Bökel");
        break;
    }
    case 13277:
    {
        returnValue = F("Am Bökelern");
        break;
    }
    case 13278:
    {
        returnValue = F("Am Bökenbarg");
        break;
    }
    case 13279:
    {
        returnValue = F("Am Bökenberg");
        break;
    }
    case 13280:
    {
        returnValue = F("Am Bökenhoff");
        break;
    }
    case 13281:
    {
        returnValue = F("Am Böker Grund");
        break;
    }
    case 13282:
    {
        returnValue = F("Am Bölgen");
        break;
    }
    case 13283:
    {
        returnValue = F("Am Bölkumer Busch");
        break;
    }
    case 13284:
    {
        returnValue = F("Am Böll");
        break;
    }
    case 13285:
    {
        returnValue = F("Am Böllenmoor");
        break;
    }
    case 13286:
    {
        returnValue = F("Am Böllerschlag");
        break;
    }
    case 13287:
    {
        returnValue = F("Am Böllershof");
        break;
    }
    case 13288:
    {
        returnValue = F("Am Bölsbach");
        break;
    }
    case 13289:
    {
        returnValue = F("Am Bölt");
        break;
    }
    case 13290:
    {
        returnValue = F("Am Böltbach");
        break;
    }
    case 13291:
    {
        returnValue = F("Am Bölzker Bahnhof");
        break;
    }
    case 13292:
    {
        returnValue = F("Am Bönhübel");
        break;
    }
    case 13293:
    {
        returnValue = F("Am Bönseberg");
        break;
    }
    case 13294:
    {
        returnValue = F("Am Bördegarten");
        break;
    }
    case 13295:
    {
        returnValue = F("Am Börn");
        break;
    }
    case 13296:
    {
        returnValue = F("Am Börnchen");
        break;
    }
    case 13297:
    {
        returnValue = F("Am Börnchengrund");
        break;
    }
    case 13298:
    {
        returnValue = F("Am Börnecken");
        break;
    }
    case 13299:
    {
        returnValue = F("Am Börnecker");
        break;
    }
    case 13300:
    {
        returnValue = F("Am Börnteich");
        break;
    }
    case 13301:
    {
        returnValue = F("Am Börstig");
        break;
    }
    case 13302:
    {
        returnValue = F("Am Bösebach");
        break;
    }
    case 13303:
    {
        returnValue = F("Am Böseberg");
        break;
    }
    case 13304:
    {
        returnValue = F("Am Bösel");
        break;
    }
    case 13305:
    {
        returnValue = F("Am Bösen Born");
        break;
    }
    case 13306:
    {
        returnValue = F("Am Bösenberg");
        break;
    }
    case 13307:
    {
        returnValue = F("Am Bösselberg");
        break;
    }
    case 13308:
    {
        returnValue = F("Am Bötschenberg");
        break;
    }
    case 13309:
    {
        returnValue = F("Am Böttchen");
        break;
    }
    case 13310:
    {
        returnValue = F("Am Böttcherberg");
        break;
    }
    case 13311:
    {
        returnValue = F("Am Böttchersberg");
        break;
    }
    case 13312:
    {
        returnValue = F("Am Böttcherstück");
        break;
    }
    case 13313:
    {
        returnValue = F("Am Böttershof");
        break;
    }
    case 13314:
    {
        returnValue = F("Am Böttgen");
        break;
    }
    case 13315:
    {
        returnValue = F("Am Bötzel");
        break;
    }
    case 13316:
    {
        returnValue = F("Am Bötzelberg");
        break;
    }
    case 13317:
    {
        returnValue = F("Am Bötzenrasen");
        break;
    }
    case 13318:
    {
        returnValue = F("Am Bötzower Stadtgraben");
        break;
    }
    case 13319:
    {
        returnValue = F("Am Böwing");
        break;
    }
    case 13320:
    {
        returnValue = F("Am Büchel");
        break;
    }
    case 13321:
    {
        returnValue = F("Am Büchelberg");
        break;
    }
    case 13322:
    {
        returnValue = F("Am Büchelchen");
        break;
    }
    case 13323:
    {
        returnValue = F("Am Büchele");
        break;
    }
    case 13324:
    {
        returnValue = F("Am Büchelsberg");
        break;
    }
    case 13325:
    {
        returnValue = F("Am Büchelsfeld");
        break;
    }
    case 13326:
    {
        returnValue = F("Am Büchelter Hof");
        break;
    }
    case 13327:
    {
        returnValue = F("Am Büchelterhof");
        break;
    }
    case 13328:
    {
        returnValue = F("Am Büchenberg");
        break;
    }
    case 13329:
    {
        returnValue = F("Am Büchenbergskamp");
        break;
    }
    case 13330:
    {
        returnValue = F("Am Büchenfeld");
        break;
    }
    case 13331:
    {
        returnValue = F("Am Büchenkamp");
        break;
    }
    case 13332:
    {
        returnValue = F("Am Büchenstock");
        break;
    }
    case 13333:
    {
        returnValue = F("Am Büchert");
        break;
    }
    case 13334:
    {
        returnValue = F("Am Büchl");
        break;
    }
    case 13335:
    {
        returnValue = F("Am Büchsenackerhang");
        break;
    }
    case 13336:
    {
        returnValue = F("Am Büchsenberg");
        break;
    }
    case 13337:
    {
        returnValue = F("Am Büchsenschütz");
        break;
    }
    case 13338:
    {
        returnValue = F("Am Bückeberg");
        break;
    }
    case 13339:
    {
        returnValue = F("Am Bückebruch");
        break;
    }
    case 13340:
    {
        returnValue = F("Am Bückelesweg");
        break;
    }
    case 13341:
    {
        returnValue = F("Am Bückelewall");
        break;
    }
    case 13342:
    {
        returnValue = F("Am Bückersberg");
        break;
    }
    case 13343:
    {
        returnValue = F("Am Bücking");
        break;
    }
    case 13344:
    {
        returnValue = F("Am Bückle");
        break;
    }
    case 13345:
    {
        returnValue = F("Am Bücklein");
        break;
    }
    case 13346:
    {
        returnValue = F("Am Bückling");
        break;
    }
    case 13347:
    {
        returnValue = F("Am Bückmann");
        break;
    }
    case 13348:
    {
        returnValue = F("Am Büddenberg");
        break;
    }
    case 13349:
    {
        returnValue = F("Am Büe");
        break;
    }
    case 13350:
    {
        returnValue = F("Am Büffel");
        break;
    }
    case 13351:
    {
        returnValue = F("Am Büfing");
        break;
    }
    case 13352:
    {
        returnValue = F("Am Bügel");
        break;
    }
    case 13353:
    {
        returnValue = F("Am Bügele");
        break;
    }
    case 13354:
    {
        returnValue = F("Am Bügerl");
        break;
    }
    case 13355:
    {
        returnValue = F("Am Bügerzentrum");
        break;
    }
    case 13356:
    {
        returnValue = F("Am Büh");
        break;
    }
    case 13357:
    {
        returnValue = F("Am Bühberg");
        break;
    }
    case 13358:
    {
        returnValue = F("Am Bühel");
        break;
    }
    case 13359:
    {
        returnValue = F("Am Bühgraben");
        break;
    }
    case 13360:
    {
        returnValue = F("Am Bühl");
        break;
    }
    case 13361:
    {
        returnValue = F("Am Bühlacker");
        break;
    }
    case 13362:
    {
        returnValue = F("Am Bühlbach");
        break;
    }
    case 13363:
    {
        returnValue = F("Am Bühlberg");
        break;
    }
    case 13364:
    {
        returnValue = F("Am Bühlbrunnen");
        break;
    }
    case 13365:
    {
        returnValue = F("Am Bühlbuck");
        break;
    }
    case 13366:
    {
        returnValue = F("Am Bühlbusch");
        break;
    }
    case 13367:
    {
        returnValue = F("Am Bühlchen");
        break;
    }
    case 13368:
    {
        returnValue = F("Am Bühlen");
        break;
    }
    case 13369:
    {
        returnValue = F("Am Bühler");
        break;
    }
    case 13370:
    {
        returnValue = F("Am Bühlet");
        break;
    }
    case 13371:
    {
        returnValue = F("Am Bühlfeld");
        break;
    }
    case 13372:
    {
        returnValue = F("Am Bühlhof");
        break;
    }
    case 13373:
    {
        returnValue = F("Am Bühlhölzle");
        break;
    }
    case 13374:
    {
        returnValue = F("Am Bühlig");
        break;
    }
    case 13375:
    {
        returnValue = F("Am Bühlrain");
        break;
    }
    case 13376:
    {
        returnValue = F("Am Bühlsbach");
        break;
    }
    case 13377:
    {
        returnValue = F("Am Bühlskopf");
        break;
    }
    case 13378:
    {
        returnValue = F("Am Bühlweiher");
        break;
    }
    case 13379:
    {
        returnValue = F("Am Bühnenbach");
        break;
    }
    case 13380:
    {
        returnValue = F("Am Bühnenbuckel");
        break;
    }
    case 13381:
    {
        returnValue = F("Am Bühner Bach");
        break;
    }
    case 13382:
    {
        returnValue = F("Am Büll");
        break;
    }
    case 13383:
    {
        returnValue = F("Am Büllenhof");
        break;
    }
    case 13384:
    {
        returnValue = F("Am Bült");
        break;
    }
    case 13385:
    {
        returnValue = F("Am Bülten");
        break;
    }
    case 13386:
    {
        returnValue = F("Am Bültenbrink");
        break;
    }
    case 13387:
    {
        returnValue = F("Am Bültenmoor");
        break;
    }
    case 13388:
    {
        returnValue = F("Am Bülzgraben");
        break;
    }
    case 13389:
    {
        returnValue = F("Am Bünberg");
        break;
    }
    case 13390:
    {
        returnValue = F("Am Bündelberg");
        break;
    }
    case 13391:
    {
        returnValue = F("Am Büngerhof");
        break;
    }
    case 13392:
    {
        returnValue = F("Am Bünnen");
        break;
    }
    case 13393:
    {
        returnValue = F("Am Bürenbach");
        break;
    }
    case 13394:
    {
        returnValue = F("Am Bürener Berg");
        break;
    }
    case 13395:
    {
        returnValue = F("Am Bürgel");
        break;
    }
    case 13396:
    {
        returnValue = F("Am Bürgelgrund");
        break;
    }
    case 13397:
    {
        returnValue = F("Am Bürgerboden");
        break;
    }
    case 13398:
    {
        returnValue = F("Am Bürgerbusch");
        break;
    }
    case 13399:
    {
        returnValue = F("Am Bürgergarten");
        break;
    }
    case 13400:
    {
        returnValue = F("Am Bürgergraben");
        break;
    }
    case 13401:
    {
        returnValue = F("Am Bürgerhaus");
        break;
    }
    case 13402:
    {
        returnValue = F("Am Bürgerheim");
        break;
    }
    case 13403:
    {
        returnValue = F("Am Bürgerhof");
        break;
    }
    case 13404:
    {
        returnValue = F("Am Bürgerholz");
        break;
    }
    case 13405:
    {
        returnValue = F("Am Bürgerkarree");
        break;
    }
    case 13406:
    {
        returnValue = F("Am Bürgerl");
        break;
    }
    case 13407:
    {
        returnValue = F("Am Bürgermeisteramt");
        break;
    }
    case 13408:
    {
        returnValue = F("Am Bürgermeistergarten");
        break;
    }
    case 13409:
    {
        returnValue = F("Am Bürgerpark");
        break;
    }
    case 13410:
    {
        returnValue = F("Am Bürgerplatz");
        break;
    }
    case 13411:
    {
        returnValue = F("Am Bürgersee");
        break;
    }
    case 13412:
    {
        returnValue = F("Am Bürgerteich");
        break;
    }
    case 13413:
    {
        returnValue = F("Am Bürgerturm");
        break;
    }
    case 13414:
    {
        returnValue = F("Am Bürgerwald");
        break;
    }
    case 13415:
    {
        returnValue = F("Am Bürgerweiher");
        break;
    }
    case 13416:
    {
        returnValue = F("Am Bürgerwäldchen");
        break;
    }
    case 13417:
    {
        returnValue = F("Am Bürgerzentrum");
        break;
    }
    case 13418:
    {
        returnValue = F("Am Bürgl");
        break;
    }
    case 13419:
    {
        returnValue = F("Am Bürgle");
        break;
    }
    case 13420:
    {
        returnValue = F("Am Bürkle");
        break;
    }
    case 13421:
    {
        returnValue = F("Am Bürschel");
        break;
    }
    case 13422:
    {
        returnValue = F("Am Bürschling");
        break;
    }
    case 13423:
    {
        returnValue = F("Am Bürsteler Brachland");
        break;
    }
    case 13424:
    {
        returnValue = F("Am Bürsteler Feldschlatt");
        break;
    }
    case 13425:
    {
        returnValue = F("Am Bürstlich");
        break;
    }
    case 13426:
    {
        returnValue = F("Am Bürstling");
        break;
    }
    case 13427:
    {
        returnValue = F("Am Bürtel");
        break;
    }
    case 13428:
    {
        returnValue = F("Am Bürzel");
        break;
    }
    case 13429:
    {
        returnValue = F("Am Büschchen");
        break;
    }
    case 13430:
    {
        returnValue = F("Am Büschel");
        break;
    }
    case 13431:
    {
        returnValue = F("Am Büschelberg");
        break;
    }
    case 13432:
    {
        returnValue = F("Am Büschelchen");
        break;
    }
    case 13433:
    {
        returnValue = F("Am Büschele");
        break;
    }
    case 13434:
    {
        returnValue = F("Am Büschen");
        break;
    }
    case 13435:
    {
        returnValue = F("Am Büscher Berg");
        break;
    }
    case 13436:
    {
        returnValue = F("Am Büscher Kiel");
        break;
    }
    case 13437:
    {
        returnValue = F("Am Büscherhof");
        break;
    }
    case 13438:
    {
        returnValue = F("Am Büscherkamp");
        break;
    }
    case 13439:
    {
        returnValue = F("Am Büschgen");
        break;
    }
    case 13440:
    {
        returnValue = F("Am Büschken");
        break;
    }
    case 13441:
    {
        returnValue = F("Am Büschlein");
        break;
    }
    case 13442:
    {
        returnValue = F("Am Büsenbach");
        break;
    }
    case 13443:
    {
        returnValue = F("Am Büsenerb");
        break;
    }
    case 13444:
    {
        returnValue = F("Am Büskemoor");
        break;
    }
    case 13445:
    {
        returnValue = F("Am Büttel");
        break;
    }
    case 13446:
    {
        returnValue = F("Am Büttelhandfaßgraben");
        break;
    }
    case 13447:
    {
        returnValue = F("Am Büttelholz");
        break;
    }
    case 13448:
    {
        returnValue = F("Am Büttelsberg");
        break;
    }
    case 13449:
    {
        returnValue = F("Am Büttelskamp");
        break;
    }
    case 13450:
    {
        returnValue = F("Am Bützeberg");
        break;
    }
    case 13451:
    {
        returnValue = F("Am Bützsee");
        break;
    }
    case 13452:
    {
        returnValue = F("Am Calbeschen Weg");
        break;
    }
    case 13453:
    {
        returnValue = F("Am Callenberg");
        break;
    }
    case 13454:
    {
        returnValue = F("Am Caller Bach");
        break;
    }
    case 13455:
    {
        returnValue = F("Am Calversbach");
        break;
    }
    case 13456:
    {
        returnValue = F("Am Camp");
        break;
    }
    case 13457:
    {
        returnValue = F("Am Campe");
        break;
    }
    case 13458:
    {
        returnValue = F("Am Camping");
        break;
    }
    case 13459:
    {
        returnValue = F("Am Campingplatz");
        break;
    }
    case 13460:
    {
        returnValue = F("Am Camps");
        break;
    }
    case 13461:
    {
        returnValue = F("Am Campus");
        break;
    }
    case 13462:
    {
        returnValue = F("Am Canisiusplatz");
        break;
    }
    case 13463:
    {
        returnValue = F("Am Canower See");
        break;
    }
    case 13464:
    {
        returnValue = F("Am Capellshof");
        break;
    }
    case 13465:
    {
        returnValue = F("Am Capitol");
        break;
    }
    case 13466:
    {
        returnValue = F("Am Cappelberg");
        break;
    }
    case 13467:
    {
        returnValue = F("Am Cappeler Freistuhl");
        break;
    }
    case 13468:
    {
        returnValue = F("Am Cappelner Esch");
        break;
    }
    case 13469:
    {
        returnValue = F("Am Cappelrain");
        break;
    }
    case 13470:
    {
        returnValue = F("Am Caputher See");
        break;
    }
    case 13471:
    {
        returnValue = F("Am Carl-Dewes-Platz");
        break;
    }
    case 13472:
    {
        returnValue = F("Am Carlsbrunnen");
        break;
    }
    case 13473:
    {
        returnValue = F("Am Carlusbaum");
        break;
    }
    case 13474:
    {
        returnValue = F("Am Carmen-Sylva-Garten");
        break;
    }
    case 13475:
    {
        returnValue = F("Am Carolagarten");
        break;
    }
    case 13476:
    {
        returnValue = F("Am Carolapark");
        break;
    }
    case 13477:
    {
        returnValue = F("Am Carolinenfeld");
        break;
    }
    case 13478:
    {
        returnValue = F("Am Carolinenstift");
        break;
    }
    case 13479:
    {
        returnValue = F("Am Carolus");
        break;
    }
    case 13480:
    {
        returnValue = F("Am Casino");
        break;
    }
    case 13481:
    {
        returnValue = F("Am Casinopark");
        break;
    }
    case 13482:
    {
        returnValue = F("Am Casparstein");
        break;
    }
    case 13483:
    {
        returnValue = F("Am Cassebusch");
        break;
    }
    case 13484:
    {
        returnValue = F("Am Castellbach");
        break;
    }
    case 13485:
    {
        returnValue = F("Am Castellchen");
        break;
    }
    case 13486:
    {
        returnValue = F("Am Castello");
        break;
    }
    case 13487:
    {
        returnValue = F("Am Castrum");
        break;
    }
    case 13488:
    {
        returnValue = F("Am Cavelin");
        break;
    }
    case 13489:
    {
        returnValue = F("Am Cecilienstift");
        break;
    }
    case 13490:
    {
        returnValue = F("Am Centhof");
        break;
    }
    case 13491:
    {
        returnValue = F("Am Centner");
        break;
    }
    case 13492:
    {
        returnValue = F("Am Centwald");
        break;
    }
    case 13493:
    {
        returnValue = F("Am Charlottenbusch");
        break;
    }
    case 13494:
    {
        returnValue = F("Am Charlottenheim");
        break;
    }
    case 13495:
    {
        returnValue = F("Am Charlottenhof");
        break;
    }
    case 13496:
    {
        returnValue = F("Am Charlottenschloot");
        break;
    }
    case 13497:
    {
        returnValue = F("Am Charlottenschlössle");
        break;
    }
    case 13498:
    {
        returnValue = F("Am Charlottensee");
        break;
    }
    case 13499:
    {
        returnValue = F("Am Chattenberg");
        break;
    }
    case 13500:
    {
        returnValue = F("Am Chattenborn");
        break;
    }
    case 13501:
    {
        returnValue = F("Am Chaussee");
        break;
    }
    case 13502:
    {
        returnValue = F("Am Chausseehaus");
        break;
    }
    case 13503:
    {
        returnValue = F("Am Chemnitzberg");
        break;
    }
    case 13504:
    {
        returnValue = F("Am Chemnitzer Heim");
        break;
    }
    case 13505:
    {
        returnValue = F("Am Chiemseepark");
        break;
    }
    case 13506:
    {
        returnValue = F("Am Cholera-Kerchhoff");
        break;
    }
    case 13507:
    {
        returnValue = F("Am Chor");
        break;
    }
    case 13508:
    {
        returnValue = F("Am Chorberg");
        break;
    }
    case 13509:
    {
        returnValue = F("Am Chorbusch");
        break;
    }
    case 13510:
    {
        returnValue = F("Am Christ");
        break;
    }
    case 13511:
    {
        returnValue = F("Am Christberger");
        break;
    }
    case 13512:
    {
        returnValue = F("Am Christelfelsen");
        break;
    }
    case 13513:
    {
        returnValue = F("Am Christengarten");
        break;
    }
    case 13514:
    {
        returnValue = F("Am Christenrain");
        break;
    }
    case 13515:
    {
        returnValue = F("Am Christensee");
        break;
    }
    case 13516:
    {
        returnValue = F("Am Christhäuschen");
        break;
    }
    case 13517:
    {
        returnValue = F("Am Christiansborn");
        break;
    }
    case 13518:
    {
        returnValue = F("Am Christiansbrunnen");
        break;
    }
    case 13519:
    {
        returnValue = F("Am Christinenbach");
        break;
    }
    case 13520:
    {
        returnValue = F("Am Christinenberg");
        break;
    }
    case 13521:
    {
        returnValue = F("Am Christinenhof");
        break;
    }
    case 13522:
    {
        returnValue = F("Am Christusgraben");
        break;
    }
    case 13523:
    {
        returnValue = F("Am Chüdenwall");
        break;
    }
    case 13524:
    {
        returnValue = F("Am Cithert");
        break;
    }
    case 13525:
    {
        returnValue = F("Am Claassee");
        break;
    }
    case 13526:
    {
        returnValue = F("Am Clasberg");
        break;
    }
    case 13527:
    {
        returnValue = F("Am Clausberg");
        break;
    }
    case 13528:
    {
        returnValue = F("Am Clemenshof");
        break;
    }
    case 13529:
    {
        returnValue = F("Am Clemensstein");
        break;
    }
    case 13530:
    {
        returnValue = F("Am Clementinenhof");
        break;
    }
    case 13531:
    {
        returnValue = F("Am Clubhaus");
        break;
    }
    case 13532:
    {
        returnValue = F("Am Coesfeld");
        break;
    }
    case 13533:
    {
        returnValue = F("Am Collinger Berg");
        break;
    }
    case 13534:
    {
        returnValue = F("Am Collmar");
        break;
    }
    case 13535:
    {
        returnValue = F("Am Colm");
        break;
    }
    case 13536:
    {
        returnValue = F("Am Compagniehaus");
        break;
    }
    case 13537:
    {
        returnValue = F("Am Connefeld");
        break;
    }
    case 13538:
    {
        returnValue = F("Am Consrader Berg");
        break;
    }
    case 13539:
    {
        returnValue = F("Am Constantiadeich");
        break;
    }
    case 13540:
    {
        returnValue = F("Am Contersiegel");
        break;
    }
    case 13541:
    {
        returnValue = F("Am Conventer See");
        break;
    }
    case 13542:
    {
        returnValue = F("Am Cordsbusch");
        break;
    }
    case 13543:
    {
        returnValue = F("Am Cordtskamp");
        break;
    }
    case 13544:
    {
        returnValue = F("Am Corveyer Hof");
        break;
    }
    case 13545:
    {
        returnValue = F("Am Courtenbachshof");
        break;
    }
    case 13546:
    {
        returnValue = F("Am Crammen Berg");
        break;
    }
    case 13547:
    {
        returnValue = F("Am Cremitzberg");
        break;
    }
    case 13548:
    {
        returnValue = F("Am Crinitzberg");
        break;
    }
    case 13549:
    {
        returnValue = F("Am Crome");
        break;
    }
    case 13550:
    {
        returnValue = F("Am Cromerg");
        break;
    }
    case 13551:
    {
        returnValue = F("Am Cronsbach");
        break;
    }
    case 13552:
    {
        returnValue = F("Am Cronsbruch");
        break;
    }
    case 13553:
    {
        returnValue = F("Am Cröberteich");
        break;
    }
    case 13554:
    {
        returnValue = F("Am Cröstener Weg");
        break;
    }
    case 13555:
    {
        returnValue = F("Am Cuxhof");
        break;
    }
    case 13556:
    {
        returnValue = F("Am Cölnhöfen");
        break;
    }
    case 13557:
    {
        returnValue = F("Am Daasberg");
        break;
    }
    case 13558:
    {
        returnValue = F("Am Daberg");
        break;
    }
    case 13559:
    {
        returnValue = F("Am Daberge");
        break;
    }
    case 13560:
    {
        returnValue = F("Am Daberger Hof");
        break;
    }
    case 13561:
    {
        returnValue = F("Am Dachental");
        break;
    }
    case 13562:
    {
        returnValue = F("Am Dachsacker");
        break;
    }
    case 13563:
    {
        returnValue = F("Am Dachsbach");
        break;
    }
    case 13564:
    {
        returnValue = F("Am Dachsbau");
        break;
    }
    case 13565:
    {
        returnValue = F("Am Dachsberg");
        break;
    }
    case 13566:
    {
        returnValue = F("Am Dachsbusch");
        break;
    }
    case 13567:
    {
        returnValue = F("Am Dachsgraben");
        break;
    }
    case 13568:
    {
        returnValue = F("Am Dachskamp");
        break;
    }
    case 13569:
    {
        returnValue = F("Am Dachspfad");
        break;
    }
    case 13570:
    {
        returnValue = F("Am Dachsrain");
        break;
    }
    case 13571:
    {
        returnValue = F("Am Dachswald");
        break;
    }
    case 13572:
    {
        returnValue = F("Am Daens");
        break;
    }
    case 13573:
    {
        returnValue = F("Am Dagelsberg");
        break;
    }
    case 13574:
    {
        returnValue = F("Am Dagowsee");
        break;
    }
    case 13575:
    {
        returnValue = F("Am Dahl");
        break;
    }
    case 13576:
    {
        returnValue = F("Am Dahlberg");
        break;
    }
    case 13577:
    {
        returnValue = F("Am Dahlbrink");
        break;
    }
    case 13578:
    {
        returnValue = F("Am Dahlbusch");
        break;
    }
    case 13579:
    {
        returnValue = F("Am Dahleck");
        break;
    }
    case 13580:
    {
        returnValue = F("Am Dahnbach");
        break;
    }
    case 13581:
    {
        returnValue = F("Am Dahrsberg");
        break;
    }
    case 13582:
    {
        returnValue = F("Am Daiacker");
        break;
    }
    case 13583:
    {
        returnValue = F("Am Daimergarten");
        break;
    }
    case 13584:
    {
        returnValue = F("Am Daiwesweg");
        break;
    }
    case 13585:
    {
        returnValue = F("Am Dalberger");
        break;
    }
    case 13586:
    {
        returnValue = F("Am Dalberger Schloss");
        break;
    }
    case 13587:
    {
        returnValue = F("Am Dalldorfer Weg");
        break;
    }
    case 13588:
    {
        returnValue = F("Am Dallen");
        break;
    }
    case 13589:
    {
        returnValue = F("Am Dallenberg");
        break;
    }
    case 13590:
    {
        returnValue = F("Am Dalles");
        break;
    }
    case 13591:
    {
        returnValue = F("Am Dallkamp");
        break;
    }
    case 13592:
    {
        returnValue = F("Am Dalmusberg");
        break;
    }
    case 13593:
    {
        returnValue = F("Am Dalsterberg");
        break;
    }
    case 13594:
    {
        returnValue = F("Am Dalweg");
        break;
    }
    case 13595:
    {
        returnValue = F("Am Damberg");
        break;
    }
    case 13596:
    {
        returnValue = F("Am Damerower Wald");
        break;
    }
    case 13597:
    {
        returnValue = F("Am Damm");
        break;
    }
    case 13598:
    {
        returnValue = F("Am Dammberg");
        break;
    }
    case 13599:
    {
        returnValue = F("Am Dammbruch");
        break;
    }
    case 13600:
    {
        returnValue = F("Am Damme");
        break;
    }
    case 13601:
    {
        returnValue = F("Am Dammeierbrink");
        break;
    }
    case 13602:
    {
        returnValue = F("Am Dammel");
        break;
    }
    case 13603:
    {
        returnValue = F("Am Dammgarten");
        break;
    }
    case 13604:
    {
        returnValue = F("Am Dammgraben");
        break;
    }
    case 13605:
    {
        returnValue = F("Am Dammhof");
        break;
    }
    case 13606:
    {
        returnValue = F("Am Dammholz");
        break;
    }
    case 13607:
    {
        returnValue = F("Am Dammkrug");
        break;
    }
    case 13608:
    {
        returnValue = F("Am Dammrasen");
        break;
    }
    case 13609:
    {
        returnValue = F("Am Dammsee");
        break;
    }
    case 13610:
    {
        returnValue = F("Am Dammshof");
        break;
    }
    case 13611:
    {
        returnValue = F("Am Dammteich");
        break;
    }
    case 13612:
    {
        returnValue = F("Am Dammtor");
        break;
    }
    case 13613:
    {
        returnValue = F("Am Dampfersteg");
        break;
    }
    case 13614:
    {
        returnValue = F("Am Damschenpfad");
        break;
    }
    case 13615:
    {
        returnValue = F("Am Damwildgatter");
        break;
    }
    case 13616:
    {
        returnValue = F("Am Damwildgehege");
        break;
    }
    case 13617:
    {
        returnValue = F("Am Dandelberg");
        break;
    }
    case 13618:
    {
        returnValue = F("Am Danglfeld");
        break;
    }
    case 13619:
    {
        returnValue = F("Am Daniel");
        break;
    }
    case 13620:
    {
        returnValue = F("Am Danielsbrunnen");
        break;
    }
    case 13621:
    {
        returnValue = F("Am Dannebusch");
        break;
    }
    case 13622:
    {
        returnValue = F("Am Dannenbarg");
        break;
    }
    case 13623:
    {
        returnValue = F("Am Dannenberg");
        break;
    }
    case 13624:
    {
        returnValue = F("Am Danneracker");
        break;
    }
    case 13625:
    {
        returnValue = F("Am Dannergarten");
        break;
    }
    case 13626:
    {
        returnValue = F("Am Dannigskamp");
        break;
    }
    case 13627:
    {
        returnValue = F("Am Dansenberg");
        break;
    }
    case 13628:
    {
        returnValue = F("Am Danteswald");
        break;
    }
    case 13629:
    {
        returnValue = F("Am Darenberg");
        break;
    }
    case 13630:
    {
        returnValue = F("Am Darloh");
        break;
    }
    case 13631:
    {
        returnValue = F("Am Darmstädter Schloß");
        break;
    }
    case 13632:
    {
        returnValue = F("Am Darrplan");
        break;
    }
    case 13633:
    {
        returnValue = F("Am Darrweg");
        break;
    }
    case 13634:
    {
        returnValue = F("Am Darsberger Pfad");
        break;
    }
    case 13635:
    {
        returnValue = F("Am Dasbrauck");
        break;
    }
    case 13636:
    {
        returnValue = F("Am Daschberg");
        break;
    }
    case 13637:
    {
        returnValue = F("Am Daschendorfer Weg");
        break;
    }
    case 13638:
    {
        returnValue = F("Am Daspel");
        break;
    }
    case 13639:
    {
        returnValue = F("Am Datacenter-Park");
        break;
    }
    case 13640:
    {
        returnValue = F("Am Dathepark");
        break;
    }
    case 13641:
    {
        returnValue = F("Am Dattelner Meer");
        break;
    }
    case 13642:
    {
        returnValue = F("Am Dattenbach");
        break;
    }
    case 13643:
    {
        returnValue = F("Am Dattenberg");
        break;
    }
    case 13644:
    {
        returnValue = F("Am Datzeberg");
        break;
    }
    case 13645:
    {
        returnValue = F("Am Datzmann");
        break;
    }
    case 13646:
    {
        returnValue = F("Am Daubhaus");
        break;
    }
    case 13647:
    {
        returnValue = F("Am Daudiek");
        break;
    }
    case 13648:
    {
        returnValue = F("Am Daumelbach");
        break;
    }
    case 13649:
    {
        returnValue = F("Am Daumoor");
        break;
    }
    case 13650:
    {
        returnValue = F("Am Daumrich");
        break;
    }
    case 13651:
    {
        returnValue = F("Am Dauren");
        break;
    }
    case 13652:
    {
        returnValue = F("Am Dautenberg");
        break;
    }
    case 13653:
    {
        returnValue = F("Am Dauwen Hof");
        break;
    }
    case 13654:
    {
        returnValue = F("Am David");
        break;
    }
    case 13655:
    {
        returnValue = F("Am Davos");
        break;
    }
    case 13656:
    {
        returnValue = F("Am Daxenbühel");
        break;
    }
    case 13657:
    {
        returnValue = F("Am Daxerbachl");
        break;
    }
    case 13658:
    {
        returnValue = F("Am Daßberg");
        break;
    }
    case 13659:
    {
        returnValue = F("Am Daßte");
        break;
    }
    case 13660:
    {
        returnValue = F("Am Deauvilleplatz");
        break;
    }
    case 13661:
    {
        returnValue = F("Am Debrock");
        break;
    }
    case 13662:
    {
        returnValue = F("Am Dechantsberg");
        break;
    }
    case 13663:
    {
        returnValue = F("Am Dechtenberg");
        break;
    }
    case 13664:
    {
        returnValue = F("Am Deckelsbach");
        break;
    }
    case 13665:
    {
        returnValue = F("Am Decker");
        break;
    }
    case 13666:
    {
        returnValue = F("Am Deckersweiher");
        break;
    }
    case 13667:
    {
        returnValue = F("Am Dedenborn");
        break;
    }
    case 13668:
    {
        returnValue = F("Am Deel");
        break;
    }
    case 13669:
    {
        returnValue = F("Am Deelen");
        break;
    }
    case 13670:
    {
        returnValue = F("Am Deepenbrook");
        break;
    }
    case 13671:
    {
        returnValue = F("Am Deepenpool");
        break;
    }
    case 13672:
    {
        returnValue = F("Am Deepert");
        break;
    }
    case 13673:
    {
        returnValue = F("Am Deepstück");
        break;
    }
    case 13674:
    {
        returnValue = F("Am Deersheimer Weg");
        break;
    }
    case 13675:
    {
        returnValue = F("Am Deert");
        break;
    }
    case 13676:
    {
        returnValue = F("Am Degelbach");
        break;
    }
    case 13677:
    {
        returnValue = F("Am Degelberg");
        break;
    }
    case 13678:
    {
        returnValue = F("Am Degelfeld");
        break;
    }
    case 13679:
    {
        returnValue = F("Am Degenberg");
        break;
    }
    case 13680:
    {
        returnValue = F("Am Degenried");
        break;
    }
    case 13681:
    {
        returnValue = F("Am Deglweiher");
        break;
    }
    case 13682:
    {
        returnValue = F("Am Dehlbach");
        break;
    }
    case 13683:
    {
        returnValue = F("Am Dehlinger Weg");
        break;
    }
    case 13684:
    {
        returnValue = F("Am Dehmsee");
        break;
    }
    case 13685:
    {
        returnValue = F("Am Dehnberg");
        break;
    }
    case 13686:
    {
        returnValue = F("Am Dehnenberg");
        break;
    }
    case 13687:
    {
        returnValue = F("Am Dehnhof");
        break;
    }
    case 13688:
    {
        returnValue = F("Am Dehrner Hafen");
        break;
    }
    case 13689:
    {
        returnValue = F("Am Deibach");
        break;
    }
    case 13690:
    {
        returnValue = F("Am Deibaum");
        break;
    }
    case 13691:
    {
        returnValue = F("Am Deich");
        break;
    }
    case 13692:
    {
        returnValue = F("Am Deichblick");
        break;
    }
    case 13693:
    {
        returnValue = F("Am Deichfeld");
        break;
    }
    case 13694:
    {
        returnValue = F("Am Deichschart");
        break;
    }
    case 13695:
    {
        returnValue = F("Am Deichselbach");
        break;
    }
    case 13696:
    {
        returnValue = F("Am Deilen");
        break;
    }
    case 13697:
    {
        returnValue = F("Am Deimelberg");
        break;
    }
    case 13698:
    {
        returnValue = F("Am Deinberg");
        break;
    }
    case 13699:
    {
        returnValue = F("Am Deinsberg");
        break;
    }
    case 13700:
    {
        returnValue = F("Am Deipensiek");
        break;
    }
    case 13701:
    {
        returnValue = F("Am Deipeturm");
        break;
    }
    case 13702:
    {
        returnValue = F("Am Deisterbahnhof");
        break;
    }
    case 13703:
    {
        returnValue = F("Am Delf");
        break;
    }
    case 13704:
    {
        returnValue = F("Am Delfen");
        break;
    }
    case 13705:
    {
        returnValue = F("Am Delft");
        break;
    }
    case 13706:
    {
        returnValue = F("Am Dell");
        break;
    }
    case 13707:
    {
        returnValue = F("Am Dellacker");
        break;
    }
    case 13708:
    {
        returnValue = F("Am Dellbach");
        break;
    }
    case 13709:
    {
        returnValue = F("Am Dellesberg");
        break;
    }
    case 13710:
    {
        returnValue = F("Am Dellkamp");
        break;
    }
    case 13711:
    {
        returnValue = F("Am Dellpfad");
        break;
    }
    case 13712:
    {
        returnValue = F("Am Dellweg");
        break;
    }
    case 13713:
    {
        returnValue = F("Am Delmequell");
        break;
    }
    case 13714:
    {
        returnValue = F("Am Demener Bach");
        break;
    }
    case 13715:
    {
        returnValue = F("Am Demmberg");
        break;
    }
    case 13716:
    {
        returnValue = F("Am Demmelt");
        break;
    }
    case 13717:
    {
        returnValue = F("Am Denghoog");
        break;
    }
    case 13718:
    {
        returnValue = F("Am Denkers Weg");
        break;
    }
    case 13719:
    {
        returnValue = F("Am Denkmal");
        break;
    }
    case 13720:
    {
        returnValue = F("Am Denkmalplatz");
        break;
    }
    case 13721:
    {
        returnValue = F("Am Dennenberg");
        break;
    }
    case 13722:
    {
        returnValue = F("Am Denscheid");
        break;
    }
    case 13723:
    {
        returnValue = F("Am Dentberg");
        break;
    }
    case 13724:
    {
        returnValue = F("Am Dentelberg");
        break;
    }
    case 13725:
    {
        returnValue = F("Am Depenbrock");
        break;
    }
    case 13726:
    {
        returnValue = F("Am Depenbruch");
        break;
    }
    case 13727:
    {
        returnValue = F("Am Depeskreuz");
        break;
    }
    case 13728:
    {
        returnValue = F("Am Depot");
        break;
    }
    case 13729:
    {
        returnValue = F("Am Deputantenbruch");
        break;
    }
    case 13730:
    {
        returnValue = F("Am Derikumer Hof");
        break;
    }
    case 13731:
    {
        returnValue = F("Am Derker Tor");
        break;
    }
    case 13732:
    {
        returnValue = F("Am Derkerstein");
        break;
    }
    case 13733:
    {
        returnValue = F("Am Derkmannsstück");
        break;
    }
    case 13734:
    {
        returnValue = F("Am Desenbach");
        break;
    }
    case 13735:
    {
        returnValue = F("Am Desenberg");
        break;
    }
    case 13736:
    {
        returnValue = F("Am Despel");
        break;
    }
    case 13737:
    {
        returnValue = F("Am Dester");
        break;
    }
    case 13738:
    {
        returnValue = F("Am Dettberg");
        break;
    }
    case 13739:
    {
        returnValue = F("Am Dettenbach");
        break;
    }
    case 13740:
    {
        returnValue = F("Am Detterbach");
        break;
    }
    case 13741:
    {
        returnValue = F("Am Dettingerberg");
        break;
    }
    case 13742:
    {
        returnValue = F("Am Dettmers Bach");
        break;
    }
    case 13743:
    {
        returnValue = F("Am Dettmersberg");
        break;
    }
    case 13744:
    {
        returnValue = F("Am Deumersbach");
        break;
    }
    case 13745:
    {
        returnValue = F("Am Deutelsberg");
        break;
    }
    case 13746:
    {
        returnValue = F("Am Deutenbach");
        break;
    }
    case 13747:
    {
        returnValue = F("Am Deutenhof");
        break;
    }
    case 13748:
    {
        returnValue = F("Am Deutergraben");
        break;
    }
    case 13749:
    {
        returnValue = F("Am Deutschen Bann");
        break;
    }
    case 13750:
    {
        returnValue = F("Am Deutschen Haus");
        break;
    }
    case 13751:
    {
        returnValue = F("Am Deutschen Roten Kreuz");
        break;
    }
    case 13752:
    {
        returnValue = F("Am Deutschherrenberg");
        break;
    }
    case 13753:
    {
        returnValue = F("Am Deutschhof");
        break;
    }
    case 13754:
    {
        returnValue = F("Am Deutschordensplatz");
        break;
    }
    case 13755:
    {
        returnValue = F("Am Deußtal");
        break;
    }
    case 13756:
    {
        returnValue = F("Am Deviner Bach");
        break;
    }
    case 13757:
    {
        returnValue = F("Am Dewesberg");
        break;
    }
    case 13758:
    {
        returnValue = F("Am Dewesstieg");
        break;
    }
    case 13759:
    {
        returnValue = F("Am Deyekamp");
        break;
    }
    case 13760:
    {
        returnValue = F("Am Dhronbach");
        break;
    }
    case 13761:
    {
        returnValue = F("Am Diakonissenhaus");
        break;
    }
    case 13762:
    {
        returnValue = F("Am Dianenwald");
        break;
    }
    case 13763:
    {
        returnValue = F("Am Dicheln");
        break;
    }
    case 13764:
    {
        returnValue = F("Am Dichterviertel");
        break;
    }
    case 13765:
    {
        returnValue = F("Am Dichtlacker");
        break;
    }
    case 13766:
    {
        returnValue = F("Am Dichtlfeld");
        break;
    }
    case 13767:
    {
        returnValue = F("Am Dickbusch");
        break;
    }
    case 13768:
    {
        returnValue = F("Am Dickelsbach");
        break;
    }
    case 13769:
    {
        returnValue = F("Am Dicken Busch");
        break;
    }
    case 13770:
    {
        returnValue = F("Am Dicken Stein");
        break;
    }
    case 13771:
    {
        returnValue = F("Am Dicken Sünder");
        break;
    }
    case 13772:
    {
        returnValue = F("Am Dicken Turm");
        break;
    }
    case 13773:
    {
        returnValue = F("Am Dickenberg");
        break;
    }
    case 13774:
    {
        returnValue = F("Am Dickenbühl");
        break;
    }
    case 13775:
    {
        returnValue = F("Am Dickend");
        break;
    }
    case 13776:
    {
        returnValue = F("Am Dickenstein");
        break;
    }
    case 13777:
    {
        returnValue = F("Am Dickersberg");
        break;
    }
    case 13778:
    {
        returnValue = F("Am Dickert");
        break;
    }
    case 13779:
    {
        returnValue = F("Am Dickhaus");
        break;
    }
    case 13780:
    {
        returnValue = F("Am Dickhäuterplatz");
        break;
    }
    case 13781:
    {
        returnValue = F("Am Dickopsbach");
        break;
    }
    case 13782:
    {
        returnValue = F("Am Dicktberg");
        break;
    }
    case 13783:
    {
        returnValue = F("Am Dickteberg");
        break;
    }
    case 13784:
    {
        returnValue = F("Am Dieb");
        break;
    }
    case 13785:
    {
        returnValue = F("Am Diebach");
        break;
    }
    case 13786:
    {
        returnValue = F("Am Diebesfeld");
        break;
    }
    case 13787:
    {
        returnValue = F("Am Diebesturm");
        break;
    }
    case 13788:
    {
        returnValue = F("Am Diebsgraben");
        break;
    }
    case 13789:
    {
        returnValue = F("Am Diebsturm");
        break;
    }
    case 13790:
    {
        returnValue = F("Am Diebsweg");
        break;
    }
    case 13791:
    {
        returnValue = F("Am Dieburger Berg");
        break;
    }
    case 13792:
    {
        returnValue = F("Am Diechbornsgraben");
        break;
    }
    case 13793:
    {
        returnValue = F("Am Dieck");
        break;
    }
    case 13794:
    {
        returnValue = F("Am Dieckacker");
        break;
    }
    case 13795:
    {
        returnValue = F("Am Dieckhoff");
        break;
    }
    case 13796:
    {
        returnValue = F("Am Diecksbarg");
        break;
    }
    case 13797:
    {
        returnValue = F("Am Diecksberg");
        break;
    }
    case 13798:
    {
        returnValue = F("Am Dieckweg");
        break;
    }
    case 13799:
    {
        returnValue = F("Am Diedenborn");
        break;
    }
    case 13800:
    {
        returnValue = F("Am Dieffenbach");
        break;
    }
    case 13801:
    {
        returnValue = F("Am Diehlengarten");
        break;
    }
    case 13802:
    {
        returnValue = F("Am Diehlgarten");
        break;
    }
    case 13803:
    {
        returnValue = F("Am Diehlrain");
        break;
    }
    case 13804:
    {
        returnValue = F("Am Diek");
        break;
    }
    case 13805:
    {
        returnValue = F("Am Diekberg");
        break;
    }
    case 13806:
    {
        returnValue = F("Am Diekbrook");
        break;
    }
    case 13807:
    {
        returnValue = F("Am Dieken");
        break;
    }
    case 13808:
    {
        returnValue = F("Am Diekhoop");
        break;
    }
    case 13809:
    {
        returnValue = F("Am Diekkamp");
        break;
    }
    case 13810:
    {
        returnValue = F("Am Diekpoal");
        break;
    }
    case 13811:
    {
        returnValue = F("Am Diekpohl");
        break;
    }
    case 13812:
    {
        returnValue = F("Am Dieksee");
        break;
    }
    case 13813:
    {
        returnValue = F("Am Diekshagen");
        break;
    }
    case 13814:
    {
        returnValue = F("Am Diekstücken");
        break;
    }
    case 13815:
    {
        returnValue = F("Am Diekweg");
        break;
    }
    case 13816:
    {
        returnValue = F("Am Dieland");
        break;
    }
    case 13817:
    {
        returnValue = F("Am Dielenberg");
        break;
    }
    case 13818:
    {
        returnValue = F("Am Dielesken");
        break;
    }
    case 13819:
    {
        returnValue = F("Am Dielkopf");
        break;
    }
    case 13820:
    {
        returnValue = F("Am Diemardener Thie");
        break;
    }
    case 13821:
    {
        returnValue = F("Am Diemel");
        break;
    }
    case 13822:
    {
        returnValue = F("Am Diengholt");
        break;
    }
    case 13823:
    {
        returnValue = F("Am Diepebrock");
        break;
    }
    case 13824:
    {
        returnValue = F("Am Diependal");
        break;
    }
    case 13825:
    {
        returnValue = F("Am Dieperzberg");
        break;
    }
    case 13826:
    {
        returnValue = F("Am Diepoldshofer Weg");
        break;
    }
    case 13827:
    {
        returnValue = F("Am Diersmoor");
        break;
    }
    case 13828:
    {
        returnValue = F("Am Dieserbach");
        break;
    }
    case 13829:
    {
        returnValue = F("Am Diestelbach");
        break;
    }
    case 13830:
    {
        returnValue = F("Am Diestelkamp");
        break;
    }
    case 13831:
    {
        returnValue = F("Am Diesterkamp");
        break;
    }
    case 13832:
    {
        returnValue = F("Am Dietenberg");
        break;
    }
    case 13833:
    {
        returnValue = F("Am Dietersberg");
        break;
    }
    case 13834:
    {
        returnValue = F("Am Dieterswald");
        break;
    }
    case 13835:
    {
        returnValue = F("Am Dieterswoog");
        break;
    }
    case 13836:
    {
        returnValue = F("Am Dietkirchener Hof");
        break;
    }
    case 13837:
    {
        returnValue = F("Am Dietlmeierhof");
        break;
    }
    case 13838:
    {
        returnValue = F("Am Dietrain");
        break;
    }
    case 13839:
    {
        returnValue = F("Am Dietrich");
        break;
    }
    case 13840:
    {
        returnValue = F("Am Dietrichsberg");
        break;
    }
    case 13841:
    {
        returnValue = F("Am Dietzelberg");
        break;
    }
    case 13842:
    {
        returnValue = F("Am Dietzenhügel");
        break;
    }
    case 13843:
    {
        returnValue = F("Am Dießelfeld");
        break;
    }
    case 13844:
    {
        returnValue = F("Am Dillacker");
        break;
    }
    case 13845:
    {
        returnValue = F("Am Dillbach");
        break;
    }
    case 13846:
    {
        returnValue = F("Am Dillberg");
        break;
    }
    case 13847:
    {
        returnValue = F("Am Dillchesberg");
        break;
    }
    case 13848:
    {
        returnValue = F("Am Dillenberg");
        break;
    }
    case 13849:
    {
        returnValue = F("Am Dillfeld");
        break;
    }
    case 13850:
    {
        returnValue = F("Am Dillhof");
        break;
    }
    case 13851:
    {
        returnValue = F("Am Dillngarten");
        break;
    }
    case 13852:
    {
        returnValue = F("Am Dillsbach");
        break;
    }
    case 13853:
    {
        returnValue = F("Am Dillstein");
        break;
    }
    case 13854:
    {
        returnValue = F("Am Dilsgraben");
        break;
    }
    case 13855:
    {
        returnValue = F("Am Dimberg");
        break;
    }
    case 13856:
    {
        returnValue = F("Am Dingerhof");
        break;
    }
    case 13857:
    {
        returnValue = F("Am Dingesberg");
        break;
    }
    case 13858:
    {
        returnValue = F("Am Dinghaus");
        break;
    }
    case 13859:
    {
        returnValue = F("Am Dingstock");
        break;
    }
    case 13860:
    {
        returnValue = F("Am Dingstuhl");
        break;
    }
    case 13861:
    {
        returnValue = F("Am Dinkelberg");
        break;
    }
    case 13862:
    {
        returnValue = F("Am Dinkelfeld");
        break;
    }
    case 13863:
    {
        returnValue = F("Am Dinkelsbach");
        break;
    }
    case 13864:
    {
        returnValue = F("Am Dinkelshaak");
        break;
    }
    case 13865:
    {
        returnValue = F("Am Dinschelt");
        break;
    }
    case 13866:
    {
        returnValue = F("Am Dipbacher Weg");
        break;
    }
    case 13867:
    {
        returnValue = F("Am Dippertsroth");
        break;
    }
    case 13868:
    {
        returnValue = F("Am Direktorberg");
        break;
    }
    case 13869:
    {
        returnValue = F("Am Dirkelberg");
        break;
    }
    case 13870:
    {
        returnValue = F("Am Dirlitzenberg");
        break;
    }
    case 13871:
    {
        returnValue = F("Am Disselberg");
        break;
    }
    case 13872:
    {
        returnValue = F("Am Distelacker");
        break;
    }
    case 13873:
    {
        returnValue = F("Am Distelberg");
        break;
    }
    case 13874:
    {
        returnValue = F("Am Distelbock");
        break;
    }
    case 13875:
    {
        returnValue = F("Am Distelborn");
        break;
    }
    case 13876:
    {
        returnValue = F("Am Distelgraben");
        break;
    }
    case 13877:
    {
        returnValue = F("Am Distelkamp");
        break;
    }
    case 13878:
    {
        returnValue = F("Am Dithmarsberg");
        break;
    }
    case 13879:
    {
        returnValue = F("Am Dittelberg");
        break;
    }
    case 13880:
    {
        returnValue = F("Am Dittwarer Bahnhof");
        break;
    }
    case 13881:
    {
        returnValue = F("Am Dixhof");
        break;
    }
    case 13882:
    {
        returnValue = F("Am Dobben");
        break;
    }
    case 13883:
    {
        returnValue = F("Am Dobbenacker");
        break;
    }
    case 13884:
    {
        returnValue = F("Am Dobbertiner See");
        break;
    }
    case 13885:
    {
        returnValue = F("Am Dobelbach");
        break;
    }
    case 13886:
    {
        returnValue = F("Am Dobelberg");
        break;
    }
    case 13887:
    {
        returnValue = F("Am Dobelblick");
        break;
    }
    case 13888:
    {
        returnValue = F("Am Dobl");
        break;
    }
    case 13889:
    {
        returnValue = F("Am Dobrabach");
        break;
    }
    case 13890:
    {
        returnValue = F("Am Dock");
        break;
    }
    case 13891:
    {
        returnValue = F("Am Dockel");
        break;
    }
    case 13892:
    {
        returnValue = F("Am Dockfüßchen");
        break;
    }
    case 13893:
    {
        returnValue = F("Am Doctorborn");
        break;
    }
    case 13894:
    {
        returnValue = F("Am Dodenkamp");
        break;
    }
    case 13895:
    {
        returnValue = F("Am Dofferlacker");
        break;
    }
    case 13896:
    {
        returnValue = F("Am Doggenwasen");
        break;
    }
    case 13897:
    {
        returnValue = F("Am Doggersbuckel");
        break;
    }
    case 13898:
    {
        returnValue = F("Am Dohl");
        break;
    }
    case 13899:
    {
        returnValue = F("Am Dohlberg");
        break;
    }
    case 13900:
    {
        returnValue = F("Am Dohlenbach");
        break;
    }
    case 13901:
    {
        returnValue = F("Am Dohlenberg");
        break;
    }
    case 13902:
    {
        returnValue = F("Am Dohlhof");
        break;
    }
    case 13903:
    {
        returnValue = F("Am Dohrbaum");
        break;
    }
    case 13904:
    {
        returnValue = F("Am Dohrenberg");
        break;
    }
    case 13905:
    {
        returnValue = F("Am Doktorberg");
        break;
    }
    case 13906:
    {
        returnValue = F("Am Doktorgraben");
        break;
    }
    case 13907:
    {
        returnValue = F("Am Doktorkamp");
        break;
    }
    case 13908:
    {
        returnValue = F("Am Doktorsbrunnen");
        break;
    }
    case 13909:
    {
        returnValue = F("Am Doktorteich");
        break;
    }
    case 13910:
    {
        returnValue = F("Am Doktorweg");
        break;
    }
    case 13911:
    {
        returnValue = F("Am Dolbergsbusch");
        break;
    }
    case 13912:
    {
        returnValue = F("Am Dolderbach");
        break;
    }
    case 13913:
    {
        returnValue = F("Am Dolgenhorst");
        break;
    }
    case 13914:
    {
        returnValue = F("Am Dolgowitzer Weg");
        break;
    }
    case 13915:
    {
        returnValue = F("Am Doll");
        break;
    }
    case 13916:
    {
        returnValue = F("Am Dollacker");
        break;
    }
    case 13917:
    {
        returnValue = F("Am Dollberg");
        break;
    }
    case 13918:
    {
        returnValue = F("Am Dollfeld");
        break;
    }
    case 13919:
    {
        returnValue = F("Am Dolmen");
        break;
    }
    case 13920:
    {
        returnValue = F("Am Dolmengrab");
        break;
    }
    case 13921:
    {
        returnValue = F("Am Dolzerteich");
        break;
    }
    case 13922:
    {
        returnValue = F("Am Dom");
        break;
    }
    case 13923:
    {
        returnValue = F("Am Domacker");
        break;
    }
    case 13924:
    {
        returnValue = F("Am Dombach");
        break;
    }
    case 13925:
    {
        returnValue = F("Am Domberg");
        break;
    }
    case 13926:
    {
        returnValue = F("Am Domblick");
        break;
    }
    case 13927:
    {
        returnValue = F("Am Dombogen");
        break;
    }
    case 13928:
    {
        returnValue = F("Am Domherrnwald");
        break;
    }
    case 13929:
    {
        returnValue = F("Am Domhof");
        break;
    }
    case 13930:
    {
        returnValue = F("Am Dominger Weg");
        break;
    }
    case 13931:
    {
        returnValue = F("Am Domjüchsee");
        break;
    }
    case 13932:
    {
        returnValue = F("Am Domkreuz");
        break;
    }
    case 13933:
    {
        returnValue = F("Am Domperberg");
        break;
    }
    case 13934:
    {
        returnValue = F("Am Domplatz");
        break;
    }
    case 13935:
    {
        returnValue = F("Am Domricher Graben");
        break;
    }
    case 13936:
    {
        returnValue = F("Am Domsdorfer Anger");
        break;
    }
    case 13937:
    {
        returnValue = F("Am Domstein");
        break;
    }
    case 13938:
    {
        returnValue = F("Am Domänengarten");
        break;
    }
    case 13939:
    {
        returnValue = F("Am Domänenhof");
        break;
    }
    case 13940:
    {
        returnValue = F("Am Donacker");
        break;
    }
    case 13941:
    {
        returnValue = F("Am Donaufeld");
        break;
    }
    case 13942:
    {
        returnValue = F("Am Donaugraben");
        break;
    }
    case 13943:
    {
        returnValue = F("Am Donaukraftwerk");
        break;
    }
    case 13944:
    {
        returnValue = F("Am Doniswald");
        break;
    }
    case 13945:
    {
        returnValue = F("Am Donndiek");
        break;
    }
    case 13946:
    {
        returnValue = F("Am Donnerberg");
        break;
    }
    case 13947:
    {
        returnValue = F("Am Donneresch");
        break;
    }
    case 13948:
    {
        returnValue = F("Am Donnersberg");
        break;
    }
    case 13949:
    {
        returnValue = F("Am Donnersgraben");
        break;
    }
    case 13950:
    {
        returnValue = F("Am Doolsberg");
        break;
    }
    case 13951:
    {
        returnValue = F("Am Dooracker");
        break;
    }
    case 13952:
    {
        returnValue = F("Am Doosberg");
        break;
    }
    case 13953:
    {
        returnValue = F("Am Doppelberg");
        break;
    }
    case 13954:
    {
        returnValue = F("Am Doppelfeld");
        break;
    }
    case 13955:
    {
        returnValue = F("Am Doppl");
        break;
    }
    case 13956:
    {
        returnValue = F("Am Doracker");
        break;
    }
    case 13957:
    {
        returnValue = F("Am Dorbach");
        break;
    }
    case 13958:
    {
        returnValue = F("Am Dorf");
        break;
    }
    case 13959:
    {
        returnValue = F("Am Dorfacker");
        break;
    }
    case 13960:
    {
        returnValue = F("Am Dorfanger");
        break;
    }
    case 13961:
    {
        returnValue = F("Am Dorfbach");
        break;
    }
    case 13962:
    {
        returnValue = F("Am Dorfberg");
        break;
    }
    case 13963:
    {
        returnValue = F("Am Dorfbogen");
        break;
    }
    case 13964:
    {
        returnValue = F("Am Dorfborn");
        break;
    }
    case 13965:
    {
        returnValue = F("Am Dorfbrink");
        break;
    }
    case 13966:
    {
        returnValue = F("Am Dorfbrunnen");
        break;
    }
    case 13967:
    {
        returnValue = F("Am Dorfdeich Süd");
        break;
    }
    case 13968:
    {
        returnValue = F("Am Dorfe");
        break;
    }
    case 13969:
    {
        returnValue = F("Am Dorfend");
        break;
    }
    case 13970:
    {
        returnValue = F("Am Dorfer Bach");
        break;
    }
    case 13971:
    {
        returnValue = F("Am Dorffeld");
        break;
    }
    case 13972:
    {
        returnValue = F("Am Dorffelde");
        break;
    }
    case 13973:
    {
        returnValue = F("Am Dorffleth");
        break;
    }
    case 13974:
    {
        returnValue = F("Am Dorfgarten");
        break;
    }
    case 13975:
    {
        returnValue = F("Am Dorfgemeinschaftshaus");
        break;
    }
    case 13976:
    {
        returnValue = F("Am Dorfgraben");
        break;
    }
    case 13977:
    {
        returnValue = F("Am Dorfgrund");
        break;
    }
    case 13978:
    {
        returnValue = F("Am Dorfheim");
        break;
    }
    case 13979:
    {
        returnValue = F("Am Dorfkamp");
        break;
    }
    case 13980:
    {
        returnValue = F("Am Dorfkreuz");
        break;
    }
    case 13981:
    {
        returnValue = F("Am Dorfkrug");
        break;
    }
    case 13982:
    {
        returnValue = F("Am Dorfmuseum");
        break;
    }
    case 13983:
    {
        returnValue = F("Am Dorfpark");
        break;
    }
    case 13984:
    {
        returnValue = F("Am Dorfplatz");
        break;
    }
    case 13985:
    {
        returnValue = F("Am Dorfrain");
        break;
    }
    case 13986:
    {
        returnValue = F("Am Dorfrand");
        break;
    }
    case 13987:
    {
        returnValue = F("Am Dorfring");
        break;
    }
    case 13988:
    {
        returnValue = F("Am Dorfsee");
        break;
    }
    case 13989:
    {
        returnValue = F("Am Dorfsfeld");
        break;
    }
    case 13990:
    {
        returnValue = F("Am Dorfstadel");
        break;
    }
    case 13991:
    {
        returnValue = F("Am Dorfstellsberg");
        break;
    }
    case 13992:
    {
        returnValue = F("Am Dorfteich");
        break;
    }
    case 13993:
    {
        returnValue = F("Am Dorftor");
        break;
    }
    case 13994:
    {
        returnValue = F("Am Dorftriesch");
        break;
    }
    case 13995:
    {
        returnValue = F("Am Dorfwall");
        break;
    }
    case 13996:
    {
        returnValue = F("Am Dorfwasser");
        break;
    }
    case 13997:
    {
        returnValue = F("Am Dorfweg");
        break;
    }
    case 13998:
    {
        returnValue = F("Am Dorfweiher");
        break;
    }
    case 13999:
    {
        returnValue = F("Am Dorfwingert");
        break;
    }
    case 14000:
    {
        returnValue = F("Am Dorfzaun");
        break;
    }
    case 14001:
    {
        returnValue = F("Am Dorfzentrum");
        break;
    }
    case 14002:
    {
        returnValue = F("Am Dormannsbusch");
        break;
    }
    case 14003:
    {
        returnValue = F("Am Dorn");
        break;
    }
    case 14004:
    {
        returnValue = F("Am Dornacker");
        break;
    }
    case 14005:
    {
        returnValue = F("Am Dornbach");
        break;
    }
    case 14006:
    {
        returnValue = F("Am Dornbaum");
        break;
    }
    case 14007:
    {
        returnValue = F("Am Dornberg");
        break;
    }
    case 14008:
    {
        returnValue = F("Am Dornbrook");
        break;
    }
    case 14009:
    {
        returnValue = F("Am Dornbuckel");
        break;
    }
    case 14010:
    {
        returnValue = F("Am Dornburger Weg");
        break;
    }
    case 14011:
    {
        returnValue = F("Am Dornbusch");
        break;
    }
    case 14012:
    {
        returnValue = F("Am Dornbuschhag");
        break;
    }
    case 14013:
    {
        returnValue = F("Am Dornbühl");
        break;
    }
    case 14014:
    {
        returnValue = F("Am Dorneichersee");
        break;
    }
    case 14015:
    {
        returnValue = F("Am Dornenbusch");
        break;
    }
    case 14016:
    {
        returnValue = F("Am Dornengrund");
        break;
    }
    case 14017:
    {
        returnValue = F("Am Dornenkreuz");
        break;
    }
    case 14018:
    {
        returnValue = F("Am Dornet");
        break;
    }
    case 14019:
    {
        returnValue = F("Am Dornfeld");
        break;
    }
    case 14020:
    {
        returnValue = F("Am Dorngarten");
        break;
    }
    case 14021:
    {
        returnValue = F("Am Dorngraben");
        break;
    }
    case 14022:
    {
        returnValue = F("Am Dornhaag");
        break;
    }
    case 14023:
    {
        returnValue = F("Am Dornheimer Berg");
        break;
    }
    case 14024:
    {
        returnValue = F("Am Dornkamp");
        break;
    }
    case 14025:
    {
        returnValue = F("Am Dornlandl");
        break;
    }
    case 14026:
    {
        returnValue = F("Am Dornrain");
        break;
    }
    case 14027:
    {
        returnValue = F("Am Dornröschen");
        break;
    }
    case 14028:
    {
        returnValue = F("Am Dornsbach");
        break;
    }
    case 14029:
    {
        returnValue = F("Am Dornsenberg");
        break;
    }
    case 14030:
    {
        returnValue = F("Am Dornstadter Weg");
        break;
    }
    case 14031:
    {
        returnValue = F("Am Dornstiegel");
        break;
    }
    case 14032:
    {
        returnValue = F("Am Dornstück");
        break;
    }
    case 14033:
    {
        returnValue = F("Am Dornzaun");
        break;
    }
    case 14034:
    {
        returnValue = F("Am Dorplatz");
        break;
    }
    case 14035:
    {
        returnValue = F("Am Dorsberg");
        break;
    }
    case 14036:
    {
        returnValue = F("Am Dorstenberg");
        break;
    }
    case 14037:
    {
        returnValue = F("Am Dorsterhof");
        break;
    }
    case 14038:
    {
        returnValue = F("Am Dortenbach");
        break;
    }
    case 14039:
    {
        returnValue = F("Am Dosenbek");
        break;
    }
    case 14040:
    {
        returnValue = F("Am Dotz");
        break;
    }
    case 14041:
    {
        returnValue = F("Am Dovel");
        break;
    }
    case 14042:
    {
        returnValue = F("Am Dr. Herrmann-Eicher-Platz");
        break;
    }
    case 14043:
    {
        returnValue = F("Am Dr.-Dittes-Denkmal");
        break;
    }
    case 14044:
    {
        returnValue = F("Am Dr.-Güldenapfel-Ring");
        break;
    }
    case 14045:
    {
        returnValue = F("Am Drachenberg");
        break;
    }
    case 14046:
    {
        returnValue = F("Am Drachenfels");
        break;
    }
    case 14047:
    {
        returnValue = F("Am Drachenhain");
        break;
    }
    case 14048:
    {
        returnValue = F("Am Drachenstein");
        break;
    }
    case 14049:
    {
        returnValue = F("Am Drachenturm");
        break;
    }
    case 14050:
    {
        returnValue = F("Am Drachselfeld");
        break;
    }
    case 14051:
    {
        returnValue = F("Am Dragoneranger");
        break;
    }
    case 14052:
    {
        returnValue = F("Am Dragonergarten");
        break;
    }
    case 14053:
    {
        returnValue = F("Am Drahthammer");
        break;
    }
    case 14054:
    {
        returnValue = F("Am Drais");
        break;
    }
    case 14055:
    {
        returnValue = F("Am Draisdorfer Weg");
        break;
    }
    case 14056:
    {
        returnValue = F("Am Drakenberg");
        break;
    }
    case 14057:
    {
        returnValue = F("Am Draun");
        break;
    }
    case 14058:
    {
        returnValue = F("Am Drebbefeld");
        break;
    }
    case 14059:
    {
        returnValue = F("Am Drebber Wege");
        break;
    }
    case 14060:
    {
        returnValue = F("Am Drebenholt");
        break;
    }
    case 14061:
    {
        returnValue = F("Am Drechselberg");
        break;
    }
    case 14062:
    {
        returnValue = F("Am Drechselsgarten");
        break;
    }
    case 14063:
    {
        returnValue = F("Am Drechslerberg");
        break;
    }
    case 14064:
    {
        returnValue = F("Am Dreesbrunnen");
        break;
    }
    case 14065:
    {
        returnValue = F("Am Dreesch");
        break;
    }
    case 14066:
    {
        returnValue = F("Am Dreeshof");
        break;
    }
    case 14067:
    {
        returnValue = F("Am Dreetz");
        break;
    }
    case 14068:
    {
        returnValue = F("Am Drehbarg");
        break;
    }
    case 14069:
    {
        returnValue = F("Am Drehmannshof");
        break;
    }
    case 14070:
    {
        returnValue = F("Am Drei");
        break;
    }
    case 14071:
    {
        returnValue = F("Am Drei-Heinrichs-Platz");
        break;
    }
    case 14072:
    {
        returnValue = F("Am Dreiacker");
        break;
    }
    case 14073:
    {
        returnValue = F("Am Dreiangel");
        break;
    }
    case 14074:
    {
        returnValue = F("Am Dreiblatt");
        break;
    }
    case 14075:
    {
        returnValue = F("Am Dreibrüderhof");
        break;
    }
    case 14076:
    {
        returnValue = F("Am Dreibrüderschacht");
        break;
    }
    case 14077:
    {
        returnValue = F("Am Dreieck");
        break;
    }
    case 14078:
    {
        returnValue = F("Am Dreifaltigkeitsberg");
        break;
    }
    case 14079:
    {
        returnValue = F("Am Dreifaltigkeitskloster");
        break;
    }
    case 14080:
    {
        returnValue = F("Am Dreifingerbach");
        break;
    }
    case 14081:
    {
        returnValue = F("Am Dreifuß");
        break;
    }
    case 14082:
    {
        returnValue = F("Am Dreiherrenstein");
        break;
    }
    case 14083:
    {
        returnValue = F("Am Dreiherrnsteinplatz");
        break;
    }
    case 14084:
    {
        returnValue = F("Am Dreiknick");
        break;
    }
    case 14085:
    {
        returnValue = F("Am Dreikreuzberg");
        break;
    }
    case 14086:
    {
        returnValue = F("Am Dreiländereck");
        break;
    }
    case 14087:
    {
        returnValue = F("Am Dreisamgarten");
        break;
    }
    case 14088:
    {
        returnValue = F("Am Dreisbach");
        break;
    }
    case 14089:
    {
        returnValue = F("Am Dreisberg");
        break;
    }
    case 14090:
    {
        returnValue = F("Am Dreisch");
        break;
    }
    case 14091:
    {
        returnValue = F("Am Dreischen");
        break;
    }
    case 14092:
    {
        returnValue = F("Am Dreispitz");
        break;
    }
    case 14093:
    {
        returnValue = F("Am Dreistein");
        break;
    }
    case 14094:
    {
        returnValue = F("Am Dreistock");
        break;
    }
    case 14095:
    {
        returnValue = F("Am Dreistück");
        break;
    }
    case 14096:
    {
        returnValue = F("Am Dreitannenbichl");
        break;
    }
    case 14097:
    {
        returnValue = F("Am Dreißig");
        break;
    }
    case 14098:
    {
        returnValue = F("Am Drenkerweg");
        break;
    }
    case 14099:
    {
        returnValue = F("Am Drens");
        break;
    }
    case 14100:
    {
        returnValue = F("Am Dreschacker");
        break;
    }
    case 14101:
    {
        returnValue = F("Am Dreschopf");
        break;
    }
    case 14102:
    {
        returnValue = F("Am Dreschplatz");
        break;
    }
    case 14103:
    {
        returnValue = F("Am Dreschschopf");
        break;
    }
    case 14104:
    {
        returnValue = F("Am Dreschschuppen");
        break;
    }
    case 14105:
    {
        returnValue = F("Am Dresdener Berg");
        break;
    }
    case 14106:
    {
        returnValue = F("Am Dresselbach");
        break;
    }
    case 14107:
    {
        returnValue = F("Am Dreswinkel");
        break;
    }
    case 14108:
    {
        returnValue = F("Am Drewensee");
        break;
    }
    case 14109:
    {
        returnValue = F("Am Dreßlerhof");
        break;
    }
    case 14110:
    {
        returnValue = F("Am Driborn");
        break;
    }
    case 14111:
    {
        returnValue = F("Am Drieangel");
        break;
    }
    case 14112:
    {
        returnValue = F("Am Driebenberg");
        break;
    }
    case 14113:
    {
        returnValue = F("Am Driesch");
        break;
    }
    case 14114:
    {
        returnValue = F("Am Drieschgarten");
        break;
    }
    case 14115:
    {
        returnValue = F("Am Drift");
        break;
    }
    case 14116:
    {
        returnValue = F("Am Drillbach");
        break;
    }
    case 14117:
    {
        returnValue = F("Am Drillenbusch");
        break;
    }
    case 14118:
    {
        returnValue = F("Am Drillmen");
        break;
    }
    case 14119:
    {
        returnValue = F("Am Drinkpütz");
        break;
    }
    case 14120:
    {
        returnValue = F("Am Drisch");
        break;
    }
    case 14121:
    {
        returnValue = F("Am Drispenstedter Brink");
        break;
    }
    case 14122:
    {
        returnValue = F("Am Droh");
        break;
    }
    case 14123:
    {
        returnValue = F("Am Drohen");
        break;
    }
    case 14124:
    {
        returnValue = F("Am Drohn");
        break;
    }
    case 14125:
    {
        returnValue = F("Am Droiacker");
        break;
    }
    case 14126:
    {
        returnValue = F("Am Drompütz");
        break;
    }
    case 14127:
    {
        returnValue = F("Am Dronenberg");
        break;
    }
    case 14128:
    {
        returnValue = F("Am Droneweg");
        break;
    }
    case 14129:
    {
        returnValue = F("Am Drosendorfer Weg");
        break;
    }
    case 14130:
    {
        returnValue = F("Am Drosener Weg");
        break;
    }
    case 14131:
    {
        returnValue = F("Am Drosselbusch");
        break;
    }
    case 14132:
    {
        returnValue = F("Am Drosselhain");
        break;
    }
    case 14133:
    {
        returnValue = F("Am Drosselsang");
        break;
    }
    case 14134:
    {
        returnValue = F("Am Drosselschlag");
        break;
    }
    case 14135:
    {
        returnValue = F("Am Drosteipark");
        break;
    }
    case 14136:
    {
        returnValue = F("Am Drostenesch");
        break;
    }
    case 14137:
    {
        returnValue = F("Am Drostenhof");
        break;
    }
    case 14138:
    {
        returnValue = F("Am Drostenplatz");
        break;
    }
    case 14139:
    {
        returnValue = F("Am Drostenstück");
        break;
    }
    case 14140:
    {
        returnValue = F("Am Drostgraben");
        break;
    }
    case 14141:
    {
        returnValue = F("Am Drouvenhof");
        break;
    }
    case 14142:
    {
        returnValue = F("Am Drudenbogen");
        break;
    }
    case 14143:
    {
        returnValue = F("Am Druidenstein");
        break;
    }
    case 14144:
    {
        returnValue = F("Am Drumlin");
        break;
    }
    case 14145:
    {
        returnValue = F("Am Druschplatz");
        break;
    }
    case 14146:
    {
        returnValue = F("Am Drusenbrink");
        break;
    }
    case 14147:
    {
        returnValue = F("Am Druvendriesch");
        break;
    }
    case 14148:
    {
        returnValue = F("Am Dröbel");
        break;
    }
    case 14149:
    {
        returnValue = F("Am Dröbischauer Weg");
        break;
    }
    case 14150:
    {
        returnValue = F("Am Drögeholz");
        break;
    }
    case 14151:
    {
        returnValue = F("Am Dröhnen");
        break;
    }
    case 14152:
    {
        returnValue = F("Am Drömling");
        break;
    }
    case 14153:
    {
        returnValue = F("Am Drömlingstadion");
        break;
    }
    case 14154:
    {
        returnValue = F("Am Drössel");
        break;
    }
    case 14155:
    {
        returnValue = F("Am Drübel");
        break;
    }
    case 14156:
    {
        returnValue = F("Am Drüerberg");
        break;
    }
    case 14157:
    {
        returnValue = F("Am Drüfel");
        break;
    }
    case 14158:
    {
        returnValue = F("Am Dubben");
        break;
    }
    case 14159:
    {
        returnValue = F("Am Dudel");
        break;
    }
    case 14160:
    {
        returnValue = F("Am Dudelteich");
        break;
    }
    case 14161:
    {
        returnValue = F("Am Dudenbach");
        break;
    }
    case 14162:
    {
        returnValue = F("Am Duffes-Pohl");
        break;
    }
    case 14163:
    {
        returnValue = F("Am Duftwald");
        break;
    }
    case 14164:
    {
        returnValue = F("Am Duhl");
        break;
    }
    case 14165:
    {
        returnValue = F("Am Duike");
        break;
    }
    case 14166:
    {
        returnValue = F("Am Dukatenacker");
        break;
    }
    case 14167:
    {
        returnValue = F("Am Duldenfeld");
        break;
    }
    case 14168:
    {
        returnValue = F("Am Dullbach");
        break;
    }
    case 14169:
    {
        returnValue = F("Am Dullenberg");
        break;
    }
    case 14170:
    {
        returnValue = F("Am Dullert");
        break;
    }
    case 14171:
    {
        returnValue = F("Am Dulmer Acker");
        break;
    }
    case 14172:
    {
        returnValue = F("Am Dulshorn");
        break;
    }
    case 14173:
    {
        returnValue = F("Am Dummelsmoos");
        break;
    }
    case 14174:
    {
        returnValue = F("Am Dummersberg");
        break;
    }
    case 14175:
    {
        returnValue = F("Am Dummetsweiher");
        break;
    }
    case 14176:
    {
        returnValue = F("Am Dumpf");
        break;
    }
    case 14177:
    {
        returnValue = F("Am Dumpfgraben");
        break;
    }
    case 14178:
    {
        returnValue = F("Am Dunger");
        break;
    }
    case 14179:
    {
        returnValue = F("Am Dunkelschlag");
        break;
    }
    case 14180:
    {
        returnValue = F("Am Dunstberg");
        break;
    }
    case 14181:
    {
        returnValue = F("Am Dunsteg");
        break;
    }
    case 14182:
    {
        returnValue = F("Am Durbach");
        break;
    }
    case 14183:
    {
        returnValue = F("Am Durchbruch");
        break;
    }
    case 14184:
    {
        returnValue = F("Am Durchgang");
        break;
    }
    case 14185:
    {
        returnValue = F("Am Durchlaß");
        break;
    }
    case 14186:
    {
        returnValue = F("Am Durlacher Berg");
        break;
    }
    case 14187:
    {
        returnValue = F("Am Durland");
        break;
    }
    case 14188:
    {
        returnValue = F("Am Durlei");
        break;
    }
    case 14189:
    {
        returnValue = F("Am Duschlanger");
        break;
    }
    case 14190:
    {
        returnValue = F("Am Dutenbach");
        break;
    }
    case 14191:
    {
        returnValue = F("Am Dux");
        break;
    }
    case 14192:
    {
        returnValue = F("Am Duxbach");
        break;
    }
    case 14193:
    {
        returnValue = F("Am Dwarstief");
        break;
    }
    case 14194:
    {
        returnValue = F("Am Dwergter Meer");
        break;
    }
    case 14195:
    {
        returnValue = F("Am Dwoberg");
        break;
    }
    case 14196:
    {
        returnValue = F("Am Dyck");
        break;
    }
    case 14197:
    {
        returnValue = F("Am Dycke-Haus");
        break;
    }
    case 14198:
    {
        returnValue = F("Am Dyckerholz");
        break;
    }
    case 14199:
    {
        returnValue = F("Am Dyckershof");
        break;
    }
    case 14200:
    {
        returnValue = F("Am Dyckhuser Baum");
        break;
    }
    case 14201:
    {
        returnValue = F("Am Dyxmannshof");
        break;
    }
    case 14202:
    {
        returnValue = F("Am Däferberg");
        break;
    }
    case 14203:
    {
        returnValue = F("Am Dählenschloot");
        break;
    }
    case 14204:
    {
        returnValue = F("Am Dämeritzsee");
        break;
    }
    case 14205:
    {
        returnValue = F("Am Dämmchen");
        break;
    }
    case 14206:
    {
        returnValue = F("Am Dämmig");
        break;
    }
    case 14207:
    {
        returnValue = F("Am Dämmken");
        break;
    }
    case 14208:
    {
        returnValue = F("Am Dämmlesgraben");
        break;
    }
    case 14209:
    {
        returnValue = F("Am Dänenberg");
        break;
    }
    case 14210:
    {
        returnValue = F("Am Dännekamp");
        break;
    }
    case 14211:
    {
        returnValue = F("Am Dättele");
        break;
    }
    case 14212:
    {
        returnValue = F("Am Döbele");
        break;
    }
    case 14213:
    {
        returnValue = F("Am Döbertenbach");
        break;
    }
    case 14214:
    {
        returnValue = F("Am Döbldobl");
        break;
    }
    case 14215:
    {
        returnValue = F("Am Döbraberg");
        break;
    }
    case 14216:
    {
        returnValue = F("Am Döbritzhügel");
        break;
    }
    case 14217:
    {
        returnValue = F("Am Döhlener Weg");
        break;
    }
    case 14218:
    {
        returnValue = F("Am Döhren");
        break;
    }
    case 14219:
    {
        returnValue = F("Am Döl");
        break;
    }
    case 14220:
    {
        returnValue = F("Am Dölchen");
        break;
    }
    case 14221:
    {
        returnValue = F("Am Döle");
        break;
    }
    case 14222:
    {
        returnValue = F("Am Dölhof");
        break;
    }
    case 14223:
    {
        returnValue = F("Am Dölitz");
        break;
    }
    case 14224:
    {
        returnValue = F("Am Döllenberg");
        break;
    }
    case 14225:
    {
        returnValue = F("Am Döllengraben");
        break;
    }
    case 14226:
    {
        returnValue = F("Am Döllenpfad");
        break;
    }
    case 14227:
    {
        returnValue = F("Am Döllgraben");
        break;
    }
    case 14228:
    {
        returnValue = F("Am Dölling");
        break;
    }
    case 14229:
    {
        returnValue = F("Am Döllstedter Weg");
        break;
    }
    case 14230:
    {
        returnValue = F("Am Dönnekenberg");
        break;
    }
    case 14231:
    {
        returnValue = F("Am Dördelmannshof");
        break;
    }
    case 14232:
    {
        returnValue = F("Am Dören");
        break;
    }
    case 14233:
    {
        returnValue = F("Am Dörenberg");
        break;
    }
    case 14234:
    {
        returnValue = F("Am Dörengarten");
        break;
    }
    case 14235:
    {
        returnValue = F("Am Dörenkamp");
        break;
    }
    case 14236:
    {
        returnValue = F("Am Dörfel");
        break;
    }
    case 14237:
    {
        returnValue = F("Am Dörflas");
        break;
    }
    case 14238:
    {
        returnValue = F("Am Dörfle");
        break;
    }
    case 14239:
    {
        returnValue = F("Am Döritzbach");
        break;
    }
    case 14240:
    {
        returnValue = F("Am Dörlen");
        break;
    }
    case 14241:
    {
        returnValue = F("Am Dörnberg");
        break;
    }
    case 14242:
    {
        returnValue = F("Am Dörnchesweg");
        break;
    }
    case 14243:
    {
        returnValue = F("Am Dörne");
        break;
    }
    case 14244:
    {
        returnValue = F("Am Dörnenkamp");
        break;
    }
    case 14245:
    {
        returnValue = F("Am Dörngraben");
        break;
    }
    case 14246:
    {
        returnValue = F("Am Dörnig");
        break;
    }
    case 14247:
    {
        returnValue = F("Am Dörniggraben");
        break;
    }
    case 14248:
    {
        returnValue = F("Am Dörnsberg");
        break;
    }
    case 14249:
    {
        returnValue = F("Am Dörpe");
        break;
    }
    case 14250:
    {
        returnValue = F("Am Dörphus");
        break;
    }
    case 14251:
    {
        returnValue = F("Am Dörpsdiek");
        break;
    }
    case 14252:
    {
        returnValue = F("Am Dörpshus");
        break;
    }
    case 14253:
    {
        returnValue = F("Am Dörrbach");
        break;
    }
    case 14254:
    {
        returnValue = F("Am Dörrbangert");
        break;
    }
    case 14255:
    {
        returnValue = F("Am Dörrchen");
        break;
    }
    case 14256:
    {
        returnValue = F("Am Dörrebungert");
        break;
    }
    case 14257:
    {
        returnValue = F("Am Dörrenbach");
        break;
    }
    case 14258:
    {
        returnValue = F("Am Dörrenböhl");
        break;
    }
    case 14259:
    {
        returnValue = F("Am Dörrenhof");
        break;
    }
    case 14260:
    {
        returnValue = F("Am Dörrenrain");
        break;
    }
    case 14261:
    {
        returnValue = F("Am Dörrhäusle");
        break;
    }
    case 14262:
    {
        returnValue = F("Am Dörrlein");
        break;
    }
    case 14263:
    {
        returnValue = F("Am Dörrling");
        break;
    }
    case 14264:
    {
        returnValue = F("Am Dörrwald");
        break;
    }
    case 14265:
    {
        returnValue = F("Am Dötel");
        break;
    }
    case 14266:
    {
        returnValue = F("Am Dücker");
        break;
    }
    case 14267:
    {
        returnValue = F("Am Düdenbüttler Bach");
        break;
    }
    case 14268:
    {
        returnValue = F("Am Düker");
        break;
    }
    case 14269:
    {
        returnValue = F("Am Düllanger");
        break;
    }
    case 14270:
    {
        returnValue = F("Am Dümel");
        break;
    }
    case 14271:
    {
        returnValue = F("Am Dümmer");
        break;
    }
    case 14272:
    {
        returnValue = F("Am Dümmerbach");
        break;
    }
    case 14273:
    {
        returnValue = F("Am Dümmersberg");
        break;
    }
    case 14274:
    {
        returnValue = F("Am Dümpel");
        break;
    }
    case 14275:
    {
        returnValue = F("Am Dümpelbach");
        break;
    }
    case 14276:
    {
        returnValue = F("Am Dümpelmanns Kamp");
        break;
    }
    case 14277:
    {
        returnValue = F("Am Dümpfelbach");
        break;
    }
    case 14278:
    {
        returnValue = F("Am Dünenberg");
        break;
    }
    case 14279:
    {
        returnValue = F("Am Dünenwald");
        break;
    }
    case 14280:
    {
        returnValue = F("Am Düngberg");
        break;
    }
    case 14281:
    {
        returnValue = F("Am Düngel");
        break;
    }
    case 14282:
    {
        returnValue = F("Am Düngelbruch");
        break;
    }
    case 14283:
    {
        returnValue = F("Am Düngelshof");
        break;
    }
    case 14284:
    {
        returnValue = F("Am Dünkelacker");
        break;
    }
    case 14285:
    {
        returnValue = F("Am Dünkelsloh");
        break;
    }
    case 14286:
    {
        returnValue = F("Am Dünneckenberg");
        break;
    }
    case 14287:
    {
        returnValue = F("Am Dünnen Sünder");
        break;
    }
    case 14288:
    {
        returnValue = F("Am Dünsberg");
        break;
    }
    case 14289:
    {
        returnValue = F("Am Dürenbach");
        break;
    }
    case 14290:
    {
        returnValue = F("Am Dürenberg");
        break;
    }
    case 14291:
    {
        returnValue = F("Am Dürener Weg");
        break;
    }
    case 14292:
    {
        returnValue = F("Am Dürerheim");
        break;
    }
    case 14293:
    {
        returnValue = F("Am Dürngarten");
        break;
    }
    case 14294:
    {
        returnValue = F("Am Dürrach");
        break;
    }
    case 14295:
    {
        returnValue = F("Am Dürrbach");
        break;
    }
    case 14296:
    {
        returnValue = F("Am Dürrbachgraben");
        break;
    }
    case 14297:
    {
        returnValue = F("Am Dürrbuckel");
        break;
    }
    case 14298:
    {
        returnValue = F("Am Dürren Bach");
        break;
    }
    case 14299:
    {
        returnValue = F("Am Dürren Berg");
        break;
    }
    case 14300:
    {
        returnValue = F("Am Dürren Grund");
        break;
    }
    case 14301:
    {
        returnValue = F("Am Dürrenbach");
        break;
    }
    case 14302:
    {
        returnValue = F("Am Dürrenberg");
        break;
    }
    case 14303:
    {
        returnValue = F("Am Dürrenbühl");
        break;
    }
    case 14304:
    {
        returnValue = F("Am Dürrenpfad");
        break;
    }
    case 14305:
    {
        returnValue = F("Am Dürrgrund");
        break;
    }
    case 14306:
    {
        returnValue = F("Am Dürrnhof");
        break;
    }
    case 14307:
    {
        returnValue = F("Am Dürrnschlag");
        break;
    }
    case 14308:
    {
        returnValue = F("Am Dürrstein");
        break;
    }
    case 14309:
    {
        returnValue = F("Am Dürstenbach");
        break;
    }
    case 14310:
    {
        returnValue = F("Am Düsselufer");
        break;
    }
    case 14311:
    {
        returnValue = F("Am Düsterbarg");
        break;
    }
    case 14312:
    {
        returnValue = F("Am Düsterbäumchen");
        break;
    }
    case 14313:
    {
        returnValue = F("Am Düstergäßchen");
        break;
    }
    case 14314:
    {
        returnValue = F("Am Düsterland");
        break;
    }
    case 14315:
    {
        returnValue = F("Am Düsternbusch");
        break;
    }
    case 14316:
    {
        returnValue = F("Am Dützer Sportplatz");
        break;
    }
    case 14317:
    {
        returnValue = F("Am Düwelshop");
        break;
    }
    case 14318:
    {
        returnValue = F("Am Düwelsknick");
        break;
    }
    case 14319:
    {
        returnValue = F("Am E-Werk");
        break;
    }
    case 14320:
    {
        returnValue = F("Am ERO-Werk");
        break;
    }
    case 14321:
    {
        returnValue = F("Am Ebbeblick");
        break;
    }
    case 14322:
    {
        returnValue = F("Am Ebbel");
        break;
    }
    case 14323:
    {
        returnValue = F("Am Ebberg");
        break;
    }
    case 14324:
    {
        returnValue = F("Am Ebelfeld");
        break;
    }
    case 14325:
    {
        returnValue = F("Am Ebelhof");
        break;
    }
    case 14326:
    {
        returnValue = F("Am Ebenbach");
        break;
    }
    case 14327:
    {
        returnValue = F("Am Ebeneck");
        break;
    }
    case 14328:
    {
        returnValue = F("Am Ebenesch");
        break;
    }
    case 14329:
    {
        returnValue = F("Am Ebenfeld");
        break;
    }
    case 14330:
    {
        returnValue = F("Am Ebenholz");
        break;
    }
    case 14331:
    {
        returnValue = F("Am Ebenkamp");
        break;
    }
    case 14332:
    {
        returnValue = F("Am Ebenrain");
        break;
    }
    case 14333:
    {
        returnValue = F("Am Ebensberg");
        break;
    }
    case 14334:
    {
        returnValue = F("Am Eber");
        break;
    }
    case 14335:
    {
        returnValue = F("Am Eberborn");
        break;
    }
    case 14336:
    {
        returnValue = F("Am Eberbühl");
        break;
    }
    case 14337:
    {
        returnValue = F("Am Eberge");
        break;
    }
    case 14338:
    {
        returnValue = F("Am Eberhard");
        break;
    }
    case 14339:
    {
        returnValue = F("Am Eberhardt-Stollen");
        break;
    }
    case 14340:
    {
        returnValue = F("Am Eberling");
        break;
    }
    case 14341:
    {
        returnValue = F("Am Eberner Weg");
        break;
    }
    case 14342:
    {
        returnValue = F("Am Ebernhölzl");
        break;
    }
    case 14343:
    {
        returnValue = F("Am Ebersbach");
        break;
    }
    case 14344:
    {
        returnValue = F("Am Ebersbacher Weg");
        break;
    }
    case 14345:
    {
        returnValue = F("Am Ebersberg");
        break;
    }
    case 14346:
    {
        returnValue = F("Am Ebersbrink");
        break;
    }
    case 14347:
    {
        returnValue = F("Am Ebersoll");
        break;
    }
    case 14348:
    {
        returnValue = F("Am Ebert");
        break;
    }
    case 14349:
    {
        returnValue = F("Am Ebertle");
        break;
    }
    case 14350:
    {
        returnValue = F("Am Ebertsberg");
        break;
    }
    case 14351:
    {
        returnValue = F("Am Ebertsgarten");
        break;
    }
    case 14352:
    {
        returnValue = F("Am Ebertshäuschen");
        break;
    }
    case 14353:
    {
        returnValue = F("Am Ebertsrott");
        break;
    }
    case 14354:
    {
        returnValue = F("Am Ebertswald");
        break;
    }
    case 14355:
    {
        returnValue = F("Am Ebig");
        break;
    }
    case 14356:
    {
        returnValue = F("Am Ebshang");
        break;
    }
    case 14357:
    {
        returnValue = F("Am Echazufer");
        break;
    }
    case 14358:
    {
        returnValue = F("Am Echelnstein");
        break;
    }
    case 14359:
    {
        returnValue = F("Am Echerlein");
        break;
    }
    case 14360:
    {
        returnValue = F("Am Echsenring");
        break;
    }
    case 14361:
    {
        returnValue = F("Am Echtenhoff");
        break;
    }
    case 14362:
    {
        returnValue = F("Am Echterhof");
        break;
    }
    case 14363:
    {
        returnValue = F("Am Eck");
        break;
    }
    case 14364:
    {
        returnValue = F("Am Eckardshof");
        break;
    }
    case 14365:
    {
        returnValue = F("Am Eckartsbach");
        break;
    }
    case 14366:
    {
        returnValue = F("Am Eckartsberg");
        break;
    }
    case 14367:
    {
        returnValue = F("Am Eckartsrot");
        break;
    }
    case 14368:
    {
        returnValue = F("Am Eckartswäldchen");
        break;
    }
    case 14369:
    {
        returnValue = F("Am Eckbach");
        break;
    }
    case 14370:
    {
        returnValue = F("Am Eckberg");
        break;
    }
    case 14371:
    {
        returnValue = F("Am Eckeberg");
        break;
    }
    case 14372:
    {
        returnValue = F("Am Eckelgarten");
        break;
    }
    case 14373:
    {
        returnValue = F("Am Eckenacker");
        break;
    }
    case 14374:
    {
        returnValue = F("Am Eckenbach");
        break;
    }
    case 14375:
    {
        returnValue = F("Am Eckenberg");
        break;
    }
    case 14376:
    {
        returnValue = F("Am Eckenhaider Schloß");
        break;
    }
    case 14377:
    {
        returnValue = F("Am Ecker");
        break;
    }
    case 14378:
    {
        returnValue = F("Am Eckerberg");
        break;
    }
    case 14379:
    {
        returnValue = F("Am Eckergarten");
        break;
    }
    case 14380:
    {
        returnValue = F("Am Eckerkamp");
        break;
    }
    case 14381:
    {
        returnValue = F("Am Eckernbusch");
        break;
    }
    case 14382:
    {
        returnValue = F("Am Eckerngarten");
        break;
    }
    case 14383:
    {
        returnValue = F("Am Eckernkamp");
        break;
    }
    case 14384:
    {
        returnValue = F("Am Eckert");
        break;
    }
    case 14385:
    {
        returnValue = F("Am Eckertsberg");
        break;
    }
    case 14386:
    {
        returnValue = F("Am Eckey");
        break;
    }
    case 14387:
    {
        returnValue = F("Am Eckfeld");
        break;
    }
    case 14388:
    {
        returnValue = F("Am Eckfleck");
        break;
    }
    case 14389:
    {
        returnValue = F("Am Eckhardsbach");
        break;
    }
    case 14390:
    {
        returnValue = F("Am Eckholz");
        break;
    }
    case 14391:
    {
        returnValue = F("Am Eckinghof");
        break;
    }
    case 14392:
    {
        returnValue = F("Am Eckland");
        break;
    }
    case 14393:
    {
        returnValue = F("Am Eckle");
        break;
    }
    case 14394:
    {
        returnValue = F("Am Ecklentor");
        break;
    }
    case 14395:
    {
        returnValue = F("Am Eckpfad");
        break;
    }
    case 14396:
    {
        returnValue = F("Am Eckrain");
        break;
    }
    case 14397:
    {
        returnValue = F("Am Ecksand");
        break;
    }
    case 14398:
    {
        returnValue = F("Am Ecksberg");
        break;
    }
    case 14399:
    {
        returnValue = F("Am Eckschenberg");
        break;
    }
    case 14400:
    {
        returnValue = F("Am Ecksoll");
        break;
    }
    case 14401:
    {
        returnValue = F("Am Eckstein");
        break;
    }
    case 14402:
    {
        returnValue = F("Am Eckteich");
        break;
    }
    case 14403:
    {
        returnValue = F("Am Eckturm");
        break;
    }
    case 14404:
    {
        returnValue = F("Am Eckwald");
        break;
    }
    case 14405:
    {
        returnValue = F("Am Eckweg");
        break;
    }
    case 14406:
    {
        returnValue = F("Am Eckwege");
        break;
    }
    case 14407:
    {
        returnValue = F("Am Edelberg");
        break;
    }
    case 14408:
    {
        returnValue = F("Am Edelberge");
        break;
    }
    case 14409:
    {
        returnValue = F("Am Edelborn");
        break;
    }
    case 14410:
    {
        returnValue = F("Am Edelgarten");
        break;
    }
    case 14411:
    {
        returnValue = F("Am Edelhaus");
        break;
    }
    case 14412:
    {
        returnValue = F("Am Edelhof");
        break;
    }
    case 14413:
    {
        returnValue = F("Am Edelkamp");
        break;
    }
    case 14414:
    {
        returnValue = F("Am Edelmannshof");
        break;
    }
    case 14415:
    {
        returnValue = F("Am Edelsberg");
        break;
    }
    case 14416:
    {
        returnValue = F("Am Edelspfad");
        break;
    }
    case 14417:
    {
        returnValue = F("Am Edelstein");
        break;
    }
    case 14418:
    {
        returnValue = F("Am Edenhauser Bach");
        break;
    }
    case 14419:
    {
        returnValue = F("Am Ederberg");
        break;
    }
    case 14420:
    {
        returnValue = F("Am Ederer Weg");
        break;
    }
    case 14421:
    {
        returnValue = F("Am Ederhölzl");
        break;
    }
    case 14422:
    {
        returnValue = F("Am Eekenhoff");
        break;
    }
    case 14423:
    {
        returnValue = F("Am Eekewehr");
        break;
    }
    case 14424:
    {
        returnValue = F("Am Eekhorst");
        break;
    }
    case 14425:
    {
        returnValue = F("Am Eetzteich");
        break;
    }
    case 14426:
    {
        returnValue = F("Am Effig");
        break;
    }
    case 14427:
    {
        returnValue = F("Am Efing");
        break;
    }
    case 14428:
    {
        returnValue = F("Am Egart");
        break;
    }
    case 14429:
    {
        returnValue = F("Am Egaublick");
        break;
    }
    case 14430:
    {
        returnValue = F("Am Egelbusch");
        break;
    }
    case 14431:
    {
        returnValue = F("Am Egelingsberg");
        break;
    }
    case 14432:
    {
        returnValue = F("Am Egelmoos");
        break;
    }
    case 14433:
    {
        returnValue = F("Am Egelpfuhl");
        break;
    }
    case 14434:
    {
        returnValue = F("Am Egelsbach");
        break;
    }
    case 14435:
    {
        returnValue = F("Am Egelsberg");
        break;
    }
    case 14436:
    {
        returnValue = F("Am Egelsbruch");
        break;
    }
    case 14437:
    {
        returnValue = F("Am Egelsee");
        break;
    }
    case 14438:
    {
        returnValue = F("Am Egelseebach");
        break;
    }
    case 14439:
    {
        returnValue = F("Am Egelseefeld");
        break;
    }
    case 14440:
    {
        returnValue = F("Am Egelser Wald");
        break;
    }
    case 14441:
    {
        returnValue = F("Am Egen");
        break;
    }
    case 14442:
    {
        returnValue = F("Am Egg");
        break;
    }
    case 14443:
    {
        returnValue = F("Am Eggarten");
        break;
    }
    case 14444:
    {
        returnValue = F("Am Eggberg");
        break;
    }
    case 14445:
    {
        returnValue = F("Am Eggeberg");
        break;
    }
    case 14446:
    {
        returnValue = F("Am Eggenberg");
        break;
    }
    case 14447:
    {
        returnValue = F("Am Eggenkamp");
        break;
    }
    case 14448:
    {
        returnValue = F("Am Eggenkopf");
        break;
    }
    case 14449:
    {
        returnValue = F("Am Eggerkamp");
        break;
    }
    case 14450:
    {
        returnValue = F("Am Eggersdorfener Feld");
        break;
    }
    case 14451:
    {
        returnValue = F("Am Eggershof");
        break;
    }
    case 14452:
    {
        returnValue = F("Am Eggert");
        break;
    }
    case 14453:
    {
        returnValue = F("Am Eggestadion");
        break;
    }
    case 14454:
    {
        returnValue = F("Am Eggwald");
        break;
    }
    case 14455:
    {
        returnValue = F("Am Eggärtle");
        break;
    }
    case 14456:
    {
        returnValue = F("Am Eglenbach");
        break;
    }
    case 14457:
    {
        returnValue = F("Am Eglental");
        break;
    }
    case 14458:
    {
        returnValue = F("Am Eglsee");
        break;
    }
    case 14459:
    {
        returnValue = F("Am Ehberg");
        break;
    }
    case 14460:
    {
        returnValue = F("Am Ehbrauk");
        break;
    }
    case 14461:
    {
        returnValue = F("Am Eheberg");
        break;
    }
    case 14462:
    {
        returnValue = F("Am Ehen");
        break;
    }
    case 14463:
    {
        returnValue = F("Am Ehestetter Weg");
        break;
    }
    case 14464:
    {
        returnValue = F("Am Ehetief");
        break;
    }
    case 14465:
    {
        returnValue = F("Am Ehfleck");
        break;
    }
    case 14466:
    {
        returnValue = F("Am Ehgarten");
        break;
    }
    case 14467:
    {
        returnValue = F("Am Ehlenberg");
        break;
    }
    case 14468:
    {
        returnValue = F("Am Ehmbruch");
        break;
    }
    case 14469:
    {
        returnValue = F("Am Ehmesberg");
        break;
    }
    case 14470:
    {
        returnValue = F("Am Ehrberg");
        break;
    }
    case 14471:
    {
        returnValue = F("Am Ehrenbach");
        break;
    }
    case 14472:
    {
        returnValue = F("Am Ehrenberg");
        break;
    }
    case 14473:
    {
        returnValue = F("Am Ehrenfeldchen");
        break;
    }
    case 14474:
    {
        returnValue = F("Am Ehrenfelsen");
        break;
    }
    case 14475:
    {
        returnValue = F("Am Ehrenfriedhof");
        break;
    }
    case 14476:
    {
        returnValue = F("Am Ehrenhain");
        break;
    }
    case 14477:
    {
        returnValue = F("Am Ehrenmal");
        break;
    }
    case 14478:
    {
        returnValue = F("Am Ehrkamper Bruch");
        break;
    }
    case 14479:
    {
        returnValue = F("Am Ehrlein");
        break;
    }
    case 14480:
    {
        returnValue = F("Am Ehrlich");
        break;
    }
    case 14481:
    {
        returnValue = F("Am Ehrlichgraben");
        break;
    }
    case 14482:
    {
        returnValue = F("Am Eibenberg");
        break;
    }
    case 14483:
    {
        returnValue = F("Am Eibenbrink");
        break;
    }
    case 14484:
    {
        returnValue = F("Am Eibenweg");
        break;
    }
    case 14485:
    {
        returnValue = F("Am Eiberg");
        break;
    }
    case 14486:
    {
        returnValue = F("Am Eibinger Markt");
        break;
    }
    case 14487:
    {
        returnValue = F("Am Eibinger Tor");
        break;
    }
    case 14488:
    {
        returnValue = F("Am Eibusch");
        break;
    }
    case 14489:
    {
        returnValue = F("Am Eich");
        break;
    }
    case 14490:
    {
        returnValue = F("Am Eichaberg");
        break;
    }
    case 14491:
    {
        returnValue = F("Am Eichacker");
        break;
    }
    case 14492:
    {
        returnValue = F("Am Eichamt");
        break;
    }
    case 14493:
    {
        returnValue = F("Am Eichanger");
        break;
    }
    case 14494:
    {
        returnValue = F("Am Eichbach");
        break;
    }
    case 14495:
    {
        returnValue = F("Am Eichbacher Weg");
        break;
    }
    case 14496:
    {
        returnValue = F("Am Eichbaum");
        break;
    }
    case 14497:
    {
        returnValue = F("Am Eichbaumeck");
        break;
    }
    case 14498:
    {
        returnValue = F("Am Eichberg");
        break;
    }
    case 14499:
    {
        returnValue = F("Am Eichbergfeld");
        break;
    }
    case 14500:
    {
        returnValue = F("Am Eichbichl");
        break;
    }
    case 14501:
    {
        returnValue = F("Am Eichborn");
        break;
    }
    case 14502:
    {
        returnValue = F("Am Eichbrunnen");
        break;
    }
    case 14503:
    {
        returnValue = F("Am Eichbuckel");
        break;
    }
    case 14504:
    {
        returnValue = F("Am Eichbusch");
        break;
    }
    case 14505:
    {
        returnValue = F("Am Eichbächle");
        break;
    }
    case 14506:
    {
        returnValue = F("Am Eichbüchl");
        break;
    }
    case 14507:
    {
        returnValue = F("Am Eichbühel");
        break;
    }
    case 14508:
    {
        returnValue = F("Am Eichbühl");
        break;
    }
    case 14509:
    {
        returnValue = F("Am Eiche-Wäldchen");
        break;
    }
    case 14510:
    {
        returnValue = F("Am Eichelacker");
        break;
    }
    case 14511:
    {
        returnValue = F("Am Eichelanger");
        break;
    }
    case 14512:
    {
        returnValue = F("Am Eichelbach");
        break;
    }
    case 14513:
    {
        returnValue = F("Am Eichelbaum");
        break;
    }
    case 14514:
    {
        returnValue = F("Am Eichelberg");
        break;
    }
    case 14515:
    {
        returnValue = F("Am Eichelbusch");
        break;
    }
    case 14516:
    {
        returnValue = F("Am Eichele");
        break;
    }
    case 14517:
    {
        returnValue = F("Am Eichelein");
        break;
    }
    case 14518:
    {
        returnValue = F("Am Eicheler Eck");
        break;
    }
    case 14519:
    {
        returnValue = F("Am Eichelgarten");
        break;
    }
    case 14520:
    {
        returnValue = F("Am Eichelgärtchen");
        break;
    }
    case 14521:
    {
        returnValue = F("Am Eichelhof");
        break;
    }
    case 14522:
    {
        returnValue = F("Am Eichelkamp");
        break;
    }
    case 14523:
    {
        returnValue = F("Am Eichelkämpchen");
        break;
    }
    case 14524:
    {
        returnValue = F("Am Eichelnbusch");
        break;
    }
    case 14525:
    {
        returnValue = F("Am Eichelngraben");
        break;
    }
    case 14526:
    {
        returnValue = F("Am Eichelrangen");
        break;
    }
    case 14527:
    {
        returnValue = F("Am Eichelsberg");
        break;
    }
    case 14528:
    {
        returnValue = F("Am Eichelschlag");
        break;
    }
    case 14529:
    {
        returnValue = F("Am Eichelsgrund");
        break;
    }
    case 14530:
    {
        returnValue = F("Am Eichelskopf");
        break;
    }
    case 14531:
    {
        returnValue = F("Am Eichelstück");
        break;
    }
    case 14532:
    {
        returnValue = F("Am Eichelteich");
        break;
    }
    case 14533:
    {
        returnValue = F("Am Eichelweg");
        break;
    }
    case 14534:
    {
        returnValue = F("Am Eichemer Garten");
        break;
    }
    case 14535:
    {
        returnValue = F("Am Eichenacker");
        break;
    }
    case 14536:
    {
        returnValue = F("Am Eichenanger");
        break;
    }
    case 14537:
    {
        returnValue = F("Am Eichenbaum");
        break;
    }
    case 14538:
    {
        returnValue = F("Am Eichenberg");
        break;
    }
    case 14539:
    {
        returnValue = F("Am Eichenborn");
        break;
    }
    case 14540:
    {
        returnValue = F("Am Eichenbrink");
        break;
    }
    case 14541:
    {
        returnValue = F("Am Eichenbroich");
        break;
    }
    case 14542:
    {
        returnValue = F("Am Eichenbruch");
        break;
    }
    case 14543:
    {
        returnValue = F("Am Eichenbrunnen");
        break;
    }
    case 14544:
    {
        returnValue = F("Am Eichenbuckl");
        break;
    }
    case 14545:
    {
        returnValue = F("Am Eichenbusch");
        break;
    }
    case 14546:
    {
        returnValue = F("Am Eichenbüchel");
        break;
    }
    case 14547:
    {
        returnValue = F("Am Eichenbühl");
        break;
    }
    case 14548:
    {
        returnValue = F("Am Eicheneck");
        break;
    }
    case 14549:
    {
        returnValue = F("Am Eichenesch");
        break;
    }
    case 14550:
    {
        returnValue = F("Am Eichenfeld");
        break;
    }
    case 14551:
    {
        returnValue = F("Am Eichengarten");
        break;
    }
    case 14552:
    {
        returnValue = F("Am Eichengraben");
        break;
    }
    case 14553:
    {
        returnValue = F("Am Eichengrund");
        break;
    }
    case 14554:
    {
        returnValue = F("Am Eichenhag");
        break;
    }
    case 14555:
    {
        returnValue = F("Am Eichenhain");
        break;
    }
    case 14556:
    {
        returnValue = F("Am Eichenhang");
        break;
    }
    case 14557:
    {
        returnValue = F("Am Eichenhof");
        break;
    }
    case 14558:
    {
        returnValue = F("Am Eichenholz");
        break;
    }
    case 14559:
    {
        returnValue = F("Am Eichenhügel");
        break;
    }
    case 14560:
    {
        returnValue = F("Am Eichenkamp");
        break;
    }
    case 14561:
    {
        returnValue = F("Am Eichenkratt");
        break;
    }
    case 14562:
    {
        returnValue = F("Am Eichenkreuz");
        break;
    }
    case 14563:
    {
        returnValue = F("Am Eichenkrug");
        break;
    }
    case 14564:
    {
        returnValue = F("Am Eichenköppel");
        break;
    }
    case 14565:
    {
        returnValue = F("Am Eichenpark");
        break;
    }
    case 14566:
    {
        returnValue = F("Am Eichenpfad");
        break;
    }
    case 14567:
    {
        returnValue = F("Am Eichenpohl");
        break;
    }
    case 14568:
    {
        returnValue = F("Am Eichenrain");
        break;
    }
    case 14569:
    {
        returnValue = F("Am Eichenrasen");
        break;
    }
    case 14570:
    {
        returnValue = F("Am Eichenring");
        break;
    }
    case 14571:
    {
        returnValue = F("Am Eichenschlag");
        break;
    }
    case 14572:
    {
        returnValue = F("Am Eichenstieg");
        break;
    }
    case 14573:
    {
        returnValue = F("Am Eichenwald");
        break;
    }
    case 14574:
    {
        returnValue = F("Am Eichenwall");
        break;
    }
    case 14575:
    {
        returnValue = F("Am Eichenweg");
        break;
    }
    case 14576:
    {
        returnValue = F("Am Eichenwäldchen");
        break;
    }
    case 14577:
    {
        returnValue = F("Am Eichenzeller Weg");
        break;
    }
    case 14578:
    {
        returnValue = F("Am Eicher Hang");
        break;
    }
    case 14579:
    {
        returnValue = F("Am Eichert");
        break;
    }
    case 14580:
    {
        returnValue = F("Am Eichertswald");
        break;
    }
    case 14581:
    {
        returnValue = F("Am Eicherwald");
        break;
    }
    case 14582:
    {
        returnValue = F("Am Eichet");
        break;
    }
    case 14583:
    {
        returnValue = F("Am Eichfeld");
        break;
    }
    case 14584:
    {
        returnValue = F("Am Eichförstchen");
        break;
    }
    case 14585:
    {
        returnValue = F("Am Eichgarten");
        break;
    }
    case 14586:
    {
        returnValue = F("Am Eichgraben");
        break;
    }
    case 14587:
    {
        returnValue = F("Am Eichhag");
        break;
    }
    case 14588:
    {
        returnValue = F("Am Eichhagen");
        break;
    }
    case 14589:
    {
        returnValue = F("Am Eichhahn");
        break;
    }
    case 14590:
    {
        returnValue = F("Am Eichhain");
        break;
    }
    case 14591:
    {
        returnValue = F("Am Eichhardt");
        break;
    }
    case 14592:
    {
        returnValue = F("Am Eichhaus");
        break;
    }
    case 14593:
    {
        returnValue = F("Am Eichhof");
        break;
    }
    case 14594:
    {
        returnValue = F("Am Eichhofe");
        break;
    }
    case 14595:
    {
        returnValue = F("Am Eichholz");
        break;
    }
    case 14596:
    {
        returnValue = F("Am Eichhornpark");
        break;
    }
    case 14597:
    {
        returnValue = F("Am Eichhäuschen");
        break;
    }
    case 14598:
    {
        returnValue = F("Am Eichhölzchen");
        break;
    }
    case 14599:
    {
        returnValue = F("Am Eichhölzle");
        break;
    }
    case 14600:
    {
        returnValue = F("Am Eichhügel");
        break;
    }
    case 14601:
    {
        returnValue = F("Am Eichicht");
        break;
    }
    case 14602:
    {
        returnValue = F("Am Eichig");
        break;
    }
    case 14603:
    {
        returnValue = F("Am Eichkamp");
        break;
    }
    case 14604:
    {
        returnValue = F("Am Eichkobel");
        break;
    }
    case 14605:
    {
        returnValue = F("Am Eichkopf");
        break;
    }
    case 14606:
    {
        returnValue = F("Am Eichler");
        break;
    }
    case 14607:
    {
        returnValue = F("Am Eichler Stich");
        break;
    }
    case 14608:
    {
        returnValue = F("Am Eichpfad");
        break;
    }
    case 14609:
    {
        returnValue = F("Am Eichpold");
        break;
    }
    case 14610:
    {
        returnValue = F("Am Eichrain");
        break;
    }
    case 14611:
    {
        returnValue = F("Am Eichsaal");
        break;
    }
    case 14612:
    {
        returnValue = F("Am Eichsberg");
        break;
    }
    case 14613:
    {
        returnValue = F("Am Eichsfeld");
        break;
    }
    case 14614:
    {
        returnValue = F("Am Eichstieg");
        break;
    }
    case 14615:
    {
        returnValue = F("Am Eichstock");
        break;
    }
    case 14616:
    {
        returnValue = F("Am Eichtal");
        break;
    }
    case 14617:
    {
        returnValue = F("Am Eichwald");
        break;
    }
    case 14618:
    {
        returnValue = F("Am Eichwall");
        break;
    }
    case 14619:
    {
        returnValue = F("Am Eichwasen");
        break;
    }
    case 14620:
    {
        returnValue = F("Am Eichweg");
        break;
    }
    case 14621:
    {
        returnValue = F("Am Eichweier");
        break;
    }
    case 14622:
    {
        returnValue = F("Am Eichwerder");
        break;
    }
    case 14623:
    {
        returnValue = F("Am Eichwiesenfeld");
        break;
    }
    case 14624:
    {
        returnValue = F("Am Eichwäldchen");
        break;
    }
    case 14625:
    {
        returnValue = F("Am Eichwäldle");
        break;
    }
    case 14626:
    {
        returnValue = F("Am Eick");
        break;
    }
    case 14627:
    {
        returnValue = F("Am Eickacker");
        break;
    }
    case 14628:
    {
        returnValue = F("Am Eickberg");
        break;
    }
    case 14629:
    {
        returnValue = F("Am Eickboom");
        break;
    }
    case 14630:
    {
        returnValue = F("Am Eicken");
        break;
    }
    case 14631:
    {
        returnValue = F("Am Eickenhahn");
        break;
    }
    case 14632:
    {
        returnValue = F("Am Eickerhof");
        break;
    }
    case 14633:
    {
        returnValue = F("Am Eickhagen");
        break;
    }
    case 14634:
    {
        returnValue = F("Am Eickheister");
        break;
    }
    case 14635:
    {
        returnValue = F("Am Eickhof");
        break;
    }
    case 14636:
    {
        returnValue = F("Am Eickhoff");
        break;
    }
    case 14637:
    {
        returnValue = F("Am Eickholtshof");
        break;
    }
    case 14638:
    {
        returnValue = F("Am Eiderberg");
        break;
    }
    case 14639:
    {
        returnValue = F("Am Eiderdeich");
        break;
    }
    case 14640:
    {
        returnValue = F("Am Eidinghäuser Berge");
        break;
    }
    case 14641:
    {
        returnValue = F("Am Eidring");
        break;
    }
    case 14642:
    {
        returnValue = F("Am Eierbach");
        break;
    }
    case 14643:
    {
        returnValue = F("Am Eierberg");
        break;
    }
    case 14644:
    {
        returnValue = F("Am Eiermarkt");
        break;
    }
    case 14645:
    {
        returnValue = F("Am Eiersberg");
        break;
    }
    case 14646:
    {
        returnValue = F("Am Eiershagener Feld");
        break;
    }
    case 14647:
    {
        returnValue = F("Am Eifelsteig");
        break;
    }
    case 14648:
    {
        returnValue = F("Am Eigenholz");
        break;
    }
    case 14649:
    {
        returnValue = F("Am Eikborn");
        break;
    }
    case 14650:
    {
        returnValue = F("Am Eikel");
        break;
    }
    case 14651:
    {
        returnValue = F("Am Eikelnberg");
        break;
    }
    case 14652:
    {
        returnValue = F("Am Eikerberg");
        break;
    }
    case 14653:
    {
        returnValue = F("Am Eikern");
        break;
    }
    case 14654:
    {
        returnValue = F("Am Eikhof");
        break;
    }
    case 14655:
    {
        returnValue = F("Am Eiland");
        break;
    }
    case 14656:
    {
        returnValue = F("Am Eilenberg");
        break;
    }
    case 14657:
    {
        returnValue = F("Am Eilertsberg");
        break;
    }
    case 14658:
    {
        returnValue = F("Am Eilingswald");
        break;
    }
    case 14659:
    {
        returnValue = F("Am Eilser Minchen");
        break;
    }
    case 14660:
    {
        returnValue = F("Am Eimberg");
        break;
    }
    case 14661:
    {
        returnValue = F("Am Eimelsturm");
        break;
    }
    case 14662:
    {
        returnValue = F("Am Einberg");
        break;
    }
    case 14663:
    {
        returnValue = F("Am Einbäumchen");
        break;
    }
    case 14664:
    {
        returnValue = F("Am Einfang");
        break;
    }
    case 14665:
    {
        returnValue = F("Am Einfeld");
        break;
    }
    case 14666:
    {
        returnValue = F("Am Einhamer Kreuz");
        break;
    }
    case 14667:
    {
        returnValue = F("Am Einheit");
        break;
    }
    case 14668:
    {
        returnValue = F("Am Einhorn");
        break;
    }
    case 14669:
    {
        returnValue = F("Am Einkaufszentrum");
        break;
    }
    case 14670:
    {
        returnValue = F("Am Einlaß");
        break;
    }
    case 14671:
    {
        returnValue = F("Am Einmal");
        break;
    }
    case 14672:
    {
        returnValue = F("Am Einsberg");
        break;
    }
    case 14673:
    {
        returnValue = F("Am Einschnitt");
        break;
    }
    case 14674:
    {
        returnValue = F("Am Einsiedel");
        break;
    }
    case 14675:
    {
        returnValue = F("Am Einspann");
        break;
    }
    case 14676:
    {
        returnValue = F("Am Einstich");
        break;
    }
    case 14677:
    {
        returnValue = F("Am Eintrachtsplatz");
        break;
    }
    case 14678:
    {
        returnValue = F("Am Einweg");
        break;
    }
    case 14679:
    {
        returnValue = F("Am Eisbach");
        break;
    }
    case 14680:
    {
        returnValue = F("Am Eisberg");
        break;
    }
    case 14681:
    {
        returnValue = F("Am Eisbergkopf");
        break;
    }
    case 14682:
    {
        returnValue = F("Am Eisborn");
        break;
    }
    case 14683:
    {
        returnValue = F("Am Eisbuck");
        break;
    }
    case 14684:
    {
        returnValue = F("Am Eiselberg");
        break;
    }
    case 14685:
    {
        returnValue = F("Am Eisenacher Weg");
        break;
    }
    case 14686:
    {
        returnValue = F("Am Eisenacker");
        break;
    }
    case 14687:
    {
        returnValue = F("Am Eisenbach");
        break;
    }
    case 14688:
    {
        returnValue = F("Am Eisenbahndamm");
        break;
    }
    case 14689:
    {
        returnValue = F("Am Eisenbahndock");
        break;
    }
    case 14690:
    {
        returnValue = F("Am Eisenbahnerheim");
        break;
    }
    case 14691:
    {
        returnValue = F("Am Eisenbahnschacht");
        break;
    }
    case 14692:
    {
        returnValue = F("Am Eisenbahnweiher");
        break;
    }
    case 14693:
    {
        returnValue = F("Am Eisenbau");
        break;
    }
    case 14694:
    {
        returnValue = F("Am Eisenberg");
        break;
    }
    case 14695:
    {
        returnValue = F("Am Eisenbichl");
        break;
    }
    case 14696:
    {
        returnValue = F("Am Eisenborn");
        break;
    }
    case 14697:
    {
        returnValue = F("Am Eisenbrand");
        break;
    }
    case 14698:
    {
        returnValue = F("Am Eisenbrunnen");
        break;
    }
    case 14699:
    {
        returnValue = F("Am Eisenbühl");
        break;
    }
    case 14700:
    {
        returnValue = F("Am Eisengraben");
        break;
    }
    case 14701:
    {
        returnValue = F("Am Eisenhammer");
        break;
    }
    case 14702:
    {
        returnValue = F("Am Eisenherd");
        break;
    }
    case 14703:
    {
        returnValue = F("Am Eisenknopf");
        break;
    }
    case 14704:
    {
        returnValue = F("Am Eisenstein");
        break;
    }
    case 14705:
    {
        returnValue = F("Am Eisenwald");
        break;
    }
    case 14706:
    {
        returnValue = F("Am Eisenwerk");
        break;
    }
    case 14707:
    {
        returnValue = F("Am Eiserhorstweg");
        break;
    }
    case 14708:
    {
        returnValue = F("Am Eisernen Birnbaum");
        break;
    }
    case 14709:
    {
        returnValue = F("Am Eisernen Kreuz");
        break;
    }
    case 14710:
    {
        returnValue = F("Am Eisernen Mann");
        break;
    }
    case 14711:
    {
        returnValue = F("Am Eisernen Steg");
        break;
    }
    case 14712:
    {
        returnValue = F("Am Eisertsfeld");
        break;
    }
    case 14713:
    {
        returnValue = F("Am Eisfeld");
        break;
    }
    case 14714:
    {
        returnValue = F("Am Eisgrübl");
        break;
    }
    case 14715:
    {
        returnValue = F("Am Eisick");
        break;
    }
    case 14716:
    {
        returnValue = F("Am Eiskeller");
        break;
    }
    case 14717:
    {
        returnValue = F("Am Eiskellerberg");
        break;
    }
    case 14718:
    {
        returnValue = F("Am Eiskellerplatz");
        break;
    }
    case 14719:
    {
        returnValue = F("Am Eiskellerwald");
        break;
    }
    case 14720:
    {
        returnValue = F("Am Eiskutenberg");
        break;
    }
    case 14721:
    {
        returnValue = F("Am Eispalast");
        break;
    }
    case 14722:
    {
        returnValue = F("Am Eispen");
        break;
    }
    case 14723:
    {
        returnValue = F("Am Eispfad");
        break;
    }
    case 14724:
    {
        returnValue = F("Am Eissee");
        break;
    }
    case 14725:
    {
        returnValue = F("Am Eisstadion");
        break;
    }
    case 14726:
    {
        returnValue = F("Am Eisstollen");
        break;
    }
    case 14727:
    {
        returnValue = F("Am Eisteich");
        break;
    }
    case 14728:
    {
        returnValue = F("Am Eisweiher");
        break;
    }
    case 14729:
    {
        returnValue = F("Am Eiten");
        break;
    }
    case 14730:
    {
        returnValue = F("Am Eitzberg");
        break;
    }
    case 14731:
    {
        returnValue = F("Am Eiweg");
        break;
    }
    case 14732:
    {
        returnValue = F("Am Eixelberg");
        break;
    }
    case 14733:
    {
        returnValue = F("Am Eixlberg");
        break;
    }
    case 14734:
    {
        returnValue = F("Am Eksol");
        break;
    }
    case 14735:
    {
        returnValue = F("Am Elbach");
        break;
    }
    case 14736:
    {
        returnValue = F("Am Elbbach");
        break;
    }
    case 14737:
    {
        returnValue = F("Am Elbbachufer");
        break;
    }
    case 14738:
    {
        returnValue = F("Am Elbdamm");
        break;
    }
    case 14739:
    {
        returnValue = F("Am Elbdeich");
        break;
    }
    case 14740:
    {
        returnValue = F("Am Elbeblick");
        break;
    }
    case 14741:
    {
        returnValue = F("Am Elbener Weg");
        break;
    }
    case 14742:
    {
        returnValue = F("Am Elbepark");
        break;
    }
    case 14743:
    {
        returnValue = F("Am Elber");
        break;
    }
    case 14744:
    {
        returnValue = F("Am Elbersacker");
        break;
    }
    case 14745:
    {
        returnValue = F("Am Elbpavillon");
        break;
    }
    case 14746:
    {
        returnValue = F("Am Elbufer");
        break;
    }
    case 14747:
    {
        returnValue = F("Am Elchgrund");
        break;
    }
    case 14748:
    {
        returnValue = F("Am Elder");
        break;
    }
    case 14749:
    {
        returnValue = F("Am Eldetal");
        break;
    }
    case 14750:
    {
        returnValue = F("Am Eldeufer");
        break;
    }
    case 14751:
    {
        returnValue = F("Am Elektronsportplatz");
        break;
    }
    case 14752:
    {
        returnValue = F("Am Elendsbruch");
        break;
    }
    case 14753:
    {
        returnValue = F("Am Elfengrund");
        break;
    }
    case 14754:
    {
        returnValue = F("Am Elfenholt");
        break;
    }
    case 14755:
    {
        returnValue = F("Am Elfenstein");
        break;
    }
    case 14756:
    {
        returnValue = F("Am Elfentor");
        break;
    }
    case 14757:
    {
        returnValue = F("Am Elgenland");
        break;
    }
    case 14758:
    {
        returnValue = F("Am Elger");
        break;
    }
    case 14759:
    {
        returnValue = F("Am Eligiusbrunnen");
        break;
    }
    case 14760:
    {
        returnValue = F("Am Elimberg");
        break;
    }
    case 14761:
    {
        returnValue = F("Am Elisabethenbrunnen");
        break;
    }
    case 14762:
    {
        returnValue = F("Am Elisabethenpfad");
        break;
    }
    case 14763:
    {
        returnValue = F("Am Elisabethhof");
        break;
    }
    case 14764:
    {
        returnValue = F("Am Elisabethplatz");
        break;
    }
    case 14765:
    {
        returnValue = F("Am Elisabethstein");
        break;
    }
    case 14766:
    {
        returnValue = F("Am Elisenberg");
        break;
    }
    case 14767:
    {
        returnValue = F("Am Elisenpark");
        break;
    }
    case 14768:
    {
        returnValue = F("Am Elkenturm");
        break;
    }
    case 14769:
    {
        returnValue = F("Am Ellasprudel");
        break;
    }
    case 14770:
    {
        returnValue = F("Am Ellbach");
        break;
    }
    case 14771:
    {
        returnValue = F("Am Ellbogen");
        break;
    }
    case 14772:
    {
        returnValue = F("Am Ellbogensee");
        break;
    }
    case 14773:
    {
        returnValue = F("Am Ellbrunnen");
        break;
    }
    case 14774:
    {
        returnValue = F("Am Ellenberg");
        break;
    }
    case 14775:
    {
        returnValue = F("Am Ellenborn");
        break;
    }
    case 14776:
    {
        returnValue = F("Am Ellenbühl");
        break;
    }
    case 14777:
    {
        returnValue = F("Am Eller");
        break;
    }
    case 14778:
    {
        returnValue = F("Am Ellerbach");
        break;
    }
    case 14779:
    {
        returnValue = F("Am Ellerberg");
        break;
    }
    case 14780:
    {
        returnValue = F("Am Ellerblock");
        break;
    }
    case 14781:
    {
        returnValue = F("Am Ellerbruch");
        break;
    }
    case 14782:
    {
        returnValue = F("Am Ellerbusch");
        break;
    }
    case 14783:
    {
        returnValue = F("Am Ellergarten");
        break;
    }
    case 14784:
    {
        returnValue = F("Am Ellerhang");
        break;
    }
    case 14785:
    {
        returnValue = F("Am Ellerholz");
        break;
    }
    case 14786:
    {
        returnValue = F("Am Ellerhoop");
        break;
    }
    case 14787:
    {
        returnValue = F("Am Ellerich");
        break;
    }
    case 14788:
    {
        returnValue = F("Am Ellernberg");
        break;
    }
    case 14789:
    {
        returnValue = F("Am Ellernbrook");
        break;
    }
    case 14790:
    {
        returnValue = F("Am Ellernbruch");
        break;
    }
    case 14791:
    {
        returnValue = F("Am Ellernbusch");
        break;
    }
    case 14792:
    {
        returnValue = F("Am Ellerngraben");
        break;
    }
    case 14793:
    {
        returnValue = F("Am Ellernkamp");
        break;
    }
    case 14794:
    {
        returnValue = F("Am Ellernpark");
        break;
    }
    case 14795:
    {
        returnValue = F("Am Ellerrehm");
        break;
    }
    case 14796:
    {
        returnValue = F("Am Ellersdahl");
        break;
    }
    case 14797:
    {
        returnValue = F("Am Ellersgraben");
        break;
    }
    case 14798:
    {
        returnValue = F("Am Ellershof");
        break;
    }
    case 14799:
    {
        returnValue = F("Am Ellerspfad");
        break;
    }
    case 14800:
    {
        returnValue = F("Am Ellichlebener Weg");
        break;
    }
    case 14801:
    {
        returnValue = F("Am Elllerberg");
        break;
    }
    case 14802:
    {
        returnValue = F("Am Ellrich");
        break;
    }
    case 14803:
    {
        returnValue = F("Am Elm");
        break;
    }
    case 14804:
    {
        returnValue = F("Am Elmacker");
        break;
    }
    case 14805:
    {
        returnValue = F("Am Elme");
        break;
    }
    case 14806:
    {
        returnValue = F("Am Elmen");
        break;
    }
    case 14807:
    {
        returnValue = F("Am Elmich");
        break;
    }
    case 14808:
    {
        returnValue = F("Am Elpel");
        break;
    }
    case 14809:
    {
        returnValue = F("Am Elsachufer");
        break;
    }
    case 14810:
    {
        returnValue = F("Am Elsawäldchen");
        break;
    }
    case 14811:
    {
        returnValue = F("Am Elsbach");
        break;
    }
    case 14812:
    {
        returnValue = F("Am Elsberg");
        break;
    }
    case 14813:
    {
        returnValue = F("Am Elsbusch");
        break;
    }
    case 14814:
    {
        returnValue = F("Am Elschberg");
        break;
    }
    case 14815:
    {
        returnValue = F("Am Elsebad");
        break;
    }
    case 14816:
    {
        returnValue = F("Am Elsebruch");
        break;
    }
    case 14817:
    {
        returnValue = F("Am Elsenberg");
        break;
    }
    case 14818:
    {
        returnValue = F("Am Elsenbruch");
        break;
    }
    case 14819:
    {
        returnValue = F("Am Elsenbrunnen");
        break;
    }
    case 14820:
    {
        returnValue = F("Am Elsenbuck");
        break;
    }
    case 14821:
    {
        returnValue = F("Am Elsenbusch");
        break;
    }
    case 14822:
    {
        returnValue = F("Am Elseneck");
        break;
    }
    case 14823:
    {
        returnValue = F("Am Elsenfeld");
        break;
    }
    case 14824:
    {
        returnValue = F("Am Elsestück");
        break;
    }
    case 14825:
    {
        returnValue = F("Am Elsgraben");
        break;
    }
    case 14826:
    {
        returnValue = F("Am Elsheimer Tor");
        break;
    }
    case 14827:
    {
        returnValue = F("Am Elsluch");
        break;
    }
    case 14828:
    {
        returnValue = F("Am Elsteich");
        break;
    }
    case 14829:
    {
        returnValue = F("Am Elsteranger");
        break;
    }
    case 14830:
    {
        returnValue = F("Am Elsterbach");
        break;
    }
    case 14831:
    {
        returnValue = F("Am Elsterbad");
        break;
    }
    case 14832:
    {
        returnValue = F("Am Elsterberg");
        break;
    }
    case 14833:
    {
        returnValue = F("Am Elsterbogen");
        break;
    }
    case 14834:
    {
        returnValue = F("Am Elsterbusch");
        break;
    }
    case 14835:
    {
        returnValue = F("Am Elsterdamm");
        break;
    }
    case 14836:
    {
        returnValue = F("Am Elsterfeld");
        break;
    }
    case 14837:
    {
        returnValue = F("Am Elstergrund");
        break;
    }
    case 14838:
    {
        returnValue = F("Am Elsterhang");
        break;
    }
    case 14839:
    {
        returnValue = F("Am Elsternbeul");
        break;
    }
    case 14840:
    {
        returnValue = F("Am Elsternbusch");
        break;
    }
    case 14841:
    {
        returnValue = F("Am Elsterstrand");
        break;
    }
    case 14842:
    {
        returnValue = F("Am Elstätter");
        break;
    }
    case 14843:
    {
        returnValue = F("Am Elsunger Weg");
        break;
    }
    case 14844:
    {
        returnValue = F("Am Elteich");
        break;
    }
    case 14845:
    {
        returnValue = F("Am Eltergraben");
        break;
    }
    case 14846:
    {
        returnValue = F("Am Eltwerk");
        break;
    }
    case 14847:
    {
        returnValue = F("Am Elvis Terminal");
        break;
    }
    case 14848:
    {
        returnValue = F("Am Elzbachtal");
        break;
    }
    case 14849:
    {
        returnValue = F("Am Elzdamm");
        break;
    }
    case 14850:
    {
        returnValue = F("Am Elzegraben");
        break;
    }
    case 14851:
    {
        returnValue = F("Am Elzengraben");
        break;
    }
    case 14852:
    {
        returnValue = F("Am Elzufer");
        break;
    }
    case 14853:
    {
        returnValue = F("Am Emaillierwerk");
        break;
    }
    case 14854:
    {
        returnValue = F("Am Emberg");
        break;
    }
    case 14855:
    {
        returnValue = F("Am Emel");
        break;
    }
    case 14856:
    {
        returnValue = F("Am Emersberg");
        break;
    }
    case 14857:
    {
        returnValue = F("Am Emetsberger Hof");
        break;
    }
    case 14858:
    {
        returnValue = F("Am Emetsberger Weg");
        break;
    }
    case 14859:
    {
        returnValue = F("Am Emmerfeld");
        break;
    }
    case 14860:
    {
        returnValue = F("Am Emmerling-Park");
        break;
    }
    case 14861:
    {
        returnValue = F("Am Emmersberg");
        break;
    }
    case 14862:
    {
        returnValue = F("Am Emmler");
        break;
    }
    case 14863:
    {
        returnValue = F("Am Ems-Center");
        break;
    }
    case 14864:
    {
        returnValue = F("Am Ems-Jade-Kanal");
        break;
    }
    case 14865:
    {
        returnValue = F("Am Ems-Vechte-Kanal");
        break;
    }
    case 14866:
    {
        returnValue = F("Am Emsbach");
        break;
    }
    case 14867:
    {
        returnValue = F("Am Emscherpark");
        break;
    }
    case 14868:
    {
        returnValue = F("Am Emsdeich");
        break;
    }
    case 14869:
    {
        returnValue = F("Am Emser Berg");
        break;
    }
    case 14870:
    {
        returnValue = F("Am Emspark");
        break;
    }
    case 14871:
    {
        returnValue = F("Am Emspfad");
        break;
    }
    case 14872:
    {
        returnValue = F("Am Emsradweg");
        break;
    }
    case 14873:
    {
        returnValue = F("Am Emstal");
        break;
    }
    case 14874:
    {
        returnValue = F("Am Emstor");
        break;
    }
    case 14875:
    {
        returnValue = F("Am Emsufer");
        break;
    }
    case 14876:
    {
        returnValue = F("Am End");
        break;
    }
    case 14877:
    {
        returnValue = F("Am Ende");
        break;
    }
    case 14878:
    {
        returnValue = F("Am Ende-Str.");
        break;
    }
    case 14879:
    {
        returnValue = F("Am Endeberg");
        break;
    }
    case 14880:
    {
        returnValue = F("Am Endel");
        break;
    }
    case 14881:
    {
        returnValue = F("Am Endelsbach");
        break;
    }
    case 14882:
    {
        returnValue = F("Am Endentore");
        break;
    }
    case 14883:
    {
        returnValue = F("Am Ender");
        break;
    }
    case 14884:
    {
        returnValue = F("Am Endern");
        break;
    }
    case 14885:
    {
        returnValue = F("Am Endersbach");
        break;
    }
    case 14886:
    {
        returnValue = F("Am Endgarten");
        break;
    }
    case 14887:
    {
        returnValue = F("Am Endleinshof");
        break;
    }
    case 14888:
    {
        returnValue = F("Am Engel");
        break;
    }
    case 14889:
    {
        returnValue = F("Am Engelbach");
        break;
    }
    case 14890:
    {
        returnValue = F("Am Engelberg");
        break;
    }
    case 14891:
    {
        returnValue = F("Am Engelborn");
        break;
    }
    case 14892:
    {
        returnValue = F("Am Engelbuckel");
        break;
    }
    case 14893:
    {
        returnValue = F("Am Engelgrund");
        break;
    }
    case 14894:
    {
        returnValue = F("Am Engelhop");
        break;
    }
    case 14895:
    {
        returnValue = F("Am Engelloh");
        break;
    }
    case 14896:
    {
        returnValue = F("Am Engelradingbach");
        break;
    }
    case 14897:
    {
        returnValue = F("Am Engelrath");
        break;
    }
    case 14898:
    {
        returnValue = F("Am Engelsberg");
        break;
    }
    case 14899:
    {
        returnValue = F("Am Engelsgraben");
        break;
    }
    case 14900:
    {
        returnValue = F("Am Engelshof");
        break;
    }
    case 14901:
    {
        returnValue = F("Am Engelsholz");
        break;
    }
    case 14902:
    {
        returnValue = F("Am Engelsmeer");
        break;
    }
    case 14903:
    {
        returnValue = F("Am Engelspfad");
        break;
    }
    case 14904:
    {
        returnValue = F("Am Engelsstück");
        break;
    }
    case 14905:
    {
        returnValue = F("Am Engelstein");
        break;
    }
    case 14906:
    {
        returnValue = F("Am Engenberg");
        break;
    }
    case 14907:
    {
        returnValue = F("Am Engerend");
        break;
    }
    case 14908:
    {
        returnValue = F("Am Engergraben");
        break;
    }
    case 14909:
    {
        returnValue = F("Am Engerlein");
        break;
    }
    case 14910:
    {
        returnValue = F("Am Engersbrunn");
        break;
    }
    case 14911:
    {
        returnValue = F("Am Englischen Friedhof");
        break;
    }
    case 14912:
    {
        returnValue = F("Am Englischen Garten");
        break;
    }
    case 14913:
    {
        returnValue = F("Am Englischen Hügel");
        break;
    }
    case 14914:
    {
        returnValue = F("Am Engsberg");
        break;
    }
    case 14915:
    {
        returnValue = F("Am Enlensberg");
        break;
    }
    case 14916:
    {
        returnValue = F("Am Ennenpfuhl");
        break;
    }
    case 14917:
    {
        returnValue = F("Am Ennepebogen");
        break;
    }
    case 14918:
    {
        returnValue = F("Am Ennest");
        break;
    }
    case 14919:
    {
        returnValue = F("Am Enselberg");
        break;
    }
    case 14920:
    {
        returnValue = F("Am Enskeberg");
        break;
    }
    case 14921:
    {
        returnValue = F("Am Entenbach");
        break;
    }
    case 14922:
    {
        returnValue = F("Am Entenberg");
        break;
    }
    case 14923:
    {
        returnValue = F("Am Entenbusch");
        break;
    }
    case 14924:
    {
        returnValue = F("Am Entenfang");
        break;
    }
    case 14925:
    {
        returnValue = F("Am Entengraben");
        break;
    }
    case 14926:
    {
        returnValue = F("Am Entengrund");
        break;
    }
    case 14927:
    {
        returnValue = F("Am Entenmoor");
        break;
    }
    case 14928:
    {
        returnValue = F("Am Entenmoos");
        break;
    }
    case 14929:
    {
        returnValue = F("Am Entenpfad");
        break;
    }
    case 14930:
    {
        returnValue = F("Am Entenpfuhl");
        break;
    }
    case 14931:
    {
        returnValue = F("Am Entenpiller");
        break;
    }
    case 14932:
    {
        returnValue = F("Am Entenplatz");
        break;
    }
    case 14933:
    {
        returnValue = F("Am Entensee");
        break;
    }
    case 14934:
    {
        returnValue = F("Am Entensoll");
        break;
    }
    case 14935:
    {
        returnValue = F("Am Entenspiel");
        break;
    }
    case 14936:
    {
        returnValue = F("Am Entenstein");
        break;
    }
    case 14937:
    {
        returnValue = F("Am Ententeich");
        break;
    }
    case 14938:
    {
        returnValue = F("Am Ententrat");
        break;
    }
    case 14939:
    {
        returnValue = F("Am Entenweiher");
        break;
    }
    case 14940:
    {
        returnValue = F("Am Entepol");
        break;
    }
    case 14941:
    {
        returnValue = F("Am Entlastungspolder");
        break;
    }
    case 14942:
    {
        returnValue = F("Am Entlesbach");
        break;
    }
    case 14943:
    {
        returnValue = F("Am Enzberg");
        break;
    }
    case 14944:
    {
        returnValue = F("Am Enzenberg");
        break;
    }
    case 14945:
    {
        returnValue = F("Am Enzenloch");
        break;
    }
    case 14946:
    {
        returnValue = F("Am Enzgraben");
        break;
    }
    case 14947:
    {
        returnValue = F("Am Enzkofer Berg");
        break;
    }
    case 14948:
    {
        returnValue = F("Am Enzweihinger Tor");
        break;
    }
    case 14949:
    {
        returnValue = F("Am Epberg");
        break;
    }
    case 14950:
    {
        returnValue = F("Am Epelberg");
        break;
    }
    case 14951:
    {
        returnValue = F("Am Epper Wege");
        break;
    }
    case 14952:
    {
        returnValue = F("Am Epplingser Bach");
        break;
    }
    case 14953:
    {
        returnValue = F("Am Eppstein");
        break;
    }
    case 14954:
    {
        returnValue = F("Am Erasmusfeld");
        break;
    }
    case 14955:
    {
        returnValue = F("Am Erb");
        break;
    }
    case 14956:
    {
        returnValue = F("Am Erbbach");
        break;
    }
    case 14957:
    {
        returnValue = F("Am Erbbusch");
        break;
    }
    case 14958:
    {
        returnValue = F("Am Erbel");
        break;
    }
    case 14959:
    {
        returnValue = F("Am Erbenberg");
        break;
    }
    case 14960:
    {
        returnValue = F("Am Erbeskamp");
        break;
    }
    case 14961:
    {
        returnValue = F("Am Erbgericht");
        break;
    }
    case 14962:
    {
        returnValue = F("Am Erbhof");
        break;
    }
    case 14963:
    {
        returnValue = F("Am Erbrain");
        break;
    }
    case 14964:
    {
        returnValue = F("Am Erbsborne");
        break;
    }
    case 14965:
    {
        returnValue = F("Am Erbsenbach");
        break;
    }
    case 14966:
    {
        returnValue = F("Am Erbsenborn");
        break;
    }
    case 14967:
    {
        returnValue = F("Am Erbsenbrunnen");
        break;
    }
    case 14968:
    {
        returnValue = F("Am Erbsengarten");
        break;
    }
    case 14969:
    {
        returnValue = F("Am Erbsgarten");
        break;
    }
    case 14970:
    {
        returnValue = F("Am Erbshäuser Bach");
        break;
    }
    case 14971:
    {
        returnValue = F("Am Erbstal");
        break;
    }
    case 14972:
    {
        returnValue = F("Am Erbstollen");
        break;
    }
    case 14973:
    {
        returnValue = F("Am Erch");
        break;
    }
    case 14974:
    {
        returnValue = F("Am Erdbach");
        break;
    }
    case 14975:
    {
        returnValue = F("Am Erdbeeracker");
        break;
    }
    case 14976:
    {
        returnValue = F("Am Erdbeerbrink");
        break;
    }
    case 14977:
    {
        returnValue = F("Am Erdbeerbusch");
        break;
    }
    case 14978:
    {
        returnValue = F("Am Erdbeerenberg");
        break;
    }
    case 14979:
    {
        returnValue = F("Am Erdbeerfeld");
        break;
    }
    case 14980:
    {
        returnValue = F("Am Erdbeerfeld 8 - 22");
        break;
    }
    case 14981:
    {
        returnValue = F("Am Erdbeerhof");
        break;
    }
    case 14982:
    {
        returnValue = F("Am Erdbeerstein");
        break;
    }
    case 14983:
    {
        returnValue = F("Am Erdberg");
        break;
    }
    case 14984:
    {
        returnValue = F("Am Erdbrand");
        break;
    }
    case 14985:
    {
        returnValue = F("Am Erdeloch");
        break;
    }
    case 14986:
    {
        returnValue = F("Am Erdeplatz");
        break;
    }
    case 14987:
    {
        returnValue = F("Am Erdfall");
        break;
    }
    case 14988:
    {
        returnValue = F("Am Erdmannsbach");
        break;
    }
    case 14989:
    {
        returnValue = F("Am Erdwall");
        break;
    }
    case 14990:
    {
        returnValue = F("Am Erdwerk");
        break;
    }
    case 14991:
    {
        returnValue = F("Am Erdäpfelgarten");
        break;
    }
    case 14992:
    {
        returnValue = F("Am Erfsiek");
        break;
    }
    case 14993:
    {
        returnValue = F("Am Erftmühlenbach");
        break;
    }
    case 14994:
    {
        returnValue = F("Am Erftverband");
        break;
    }
    case 14995:
    {
        returnValue = F("Am Ergatshauser Hof");
        break;
    }
    case 14996:
    {
        returnValue = F("Am Eribaplatz");
        break;
    }
    case 14997:
    {
        returnValue = F("Am Erkelsbach");
        break;
    }
    case 14998:
    {
        returnValue = F("Am Erl-Anger");
        break;
    }
    case 14999:
    {
        returnValue = F("Am Erlach");
        break;
    }
    case 15000:
    {
        returnValue = F("Am Erlachsbrunnen");
        break;
    }
    case 15001:
    {
        returnValue = F("Am Erlanger");
        break;
    }
    case 15002:
    {
        returnValue = F("Am Erlanger Weg");
        break;
    }
    case 15003:
    {
        returnValue = F("Am Erlbach");
        break;
    }
    case 15004:
    {
        returnValue = F("Am Erlberg");
        break;
    }
    case 15005:
    {
        returnValue = F("Am Erlbusch");
        break;
    }
    case 15006:
    {
        returnValue = F("Am Erlchberg");
        break;
    }
    case 15007:
    {
        returnValue = F("Am Erlein");
        break;
    }
    case 15008:
    {
        returnValue = F("Am Erlen");
        break;
    }
    case 15009:
    {
        returnValue = F("Am Erlenbach");
        break;
    }
    case 15010:
    {
        returnValue = F("Am Erlenberg");
        break;
    }
    case 15011:
    {
        returnValue = F("Am Erlenborn");
        break;
    }
    case 15012:
    {
        returnValue = F("Am Erlenbruch");
        break;
    }
    case 15013:
    {
        returnValue = F("Am Erlenbruchgraben");
        break;
    }
    case 15014:
    {
        returnValue = F("Am Erlenbrunnen");
        break;
    }
    case 15015:
    {
        returnValue = F("Am Erlenbuck");
        break;
    }
    case 15016:
    {
        returnValue = F("Am Erlenbusch");
        break;
    }
    case 15017:
    {
        returnValue = F("Am Erlenfeld");
        break;
    }
    case 15018:
    {
        returnValue = F("Am Erlengewann");
        break;
    }
    case 15019:
    {
        returnValue = F("Am Erlengraben");
        break;
    }
    case 15020:
    {
        returnValue = F("Am Erlengrund");
        break;
    }
    case 15021:
    {
        returnValue = F("Am Erlenhaan");
        break;
    }
    case 15022:
    {
        returnValue = F("Am Erlenhahn");
        break;
    }
    case 15023:
    {
        returnValue = F("Am Erlenhain");
        break;
    }
    case 15024:
    {
        returnValue = F("Am Erlenhang");
        break;
    }
    case 15025:
    {
        returnValue = F("Am Erlenhof");
        break;
    }
    case 15026:
    {
        returnValue = F("Am Erlenkamp");
        break;
    }
    case 15027:
    {
        returnValue = F("Am Erlenpark");
        break;
    }
    case 15028:
    {
        returnValue = F("Am Erlenschlag");
        break;
    }
    case 15029:
    {
        returnValue = F("Am Erlensee");
        break;
    }
    case 15030:
    {
        returnValue = F("Am Erlensteg");
        break;
    }
    case 15031:
    {
        returnValue = F("Am Erlenteich");
        break;
    }
    case 15032:
    {
        returnValue = F("Am Erlenwald");
        break;
    }
    case 15033:
    {
        returnValue = F("Am Erlenweg");
        break;
    }
    case 15034:
    {
        returnValue = F("Am Erlenwiesenweg");
        break;
    }
    case 15035:
    {
        returnValue = F("Am Erlenwäldchen");
        break;
    }
    case 15036:
    {
        returnValue = F("Am Erlenwörth");
        break;
    }
    case 15037:
    {
        returnValue = F("Am Erlesgraben");
        break;
    }
    case 15038:
    {
        returnValue = F("Am Erlich");
        break;
    }
    case 15039:
    {
        returnValue = F("Am Erlicht");
        break;
    }
    case 15040:
    {
        returnValue = F("Am Erlisrain");
        break;
    }
    case 15041:
    {
        returnValue = F("Am Erlkönig");
        break;
    }
    case 15042:
    {
        returnValue = F("Am Erlsberg");
        break;
    }
    case 15043:
    {
        returnValue = F("Am Ermle");
        break;
    }
    case 15044:
    {
        returnValue = F("Am Ermskanal");
        break;
    }
    case 15045:
    {
        returnValue = F("Am Ernsdorfbach");
        break;
    }
    case 15046:
    {
        returnValue = F("Am Ernst-Schacht");
        break;
    }
    case 15047:
    {
        returnValue = F("Am Ernst-Thälmann-Hain");
        break;
    }
    case 15048:
    {
        returnValue = F("Am Ernst-Thälmann-Heim");
        break;
    }
    case 15049:
    {
        returnValue = F("Am Ernstberg");
        break;
    }
    case 15050:
    {
        returnValue = F("Am Erntebringer");
        break;
    }
    case 15051:
    {
        returnValue = F("Am Erntegarten");
        break;
    }
    case 15052:
    {
        returnValue = F("Am Ernteplatz");
        break;
    }
    case 15053:
    {
        returnValue = F("Am Erpel");
        break;
    }
    case 15054:
    {
        returnValue = F("Am Erpelrain");
        break;
    }
    case 15055:
    {
        returnValue = F("Am Erprather Weg");
        break;
    }
    case 15056:
    {
        returnValue = F("Am Errlich");
        break;
    }
    case 15057:
    {
        returnValue = F("Am Ersbach");
        break;
    }
    case 15058:
    {
        returnValue = F("Am Ersberg");
        break;
    }
    case 15059:
    {
        returnValue = F("Am Erschberg");
        break;
    }
    case 15060:
    {
        returnValue = F("Am Ersdorfer Bach");
        break;
    }
    case 15061:
    {
        returnValue = F("Am Ersfeld");
        break;
    }
    case 15062:
    {
        returnValue = F("Am Ersten Rasen");
        break;
    }
    case 15063:
    {
        returnValue = F("Am Ersten Sportplatz");
        break;
    }
    case 15064:
    {
        returnValue = F("Am Ertekamp");
        break;
    }
    case 15065:
    {
        returnValue = F("Am Ertel");
        break;
    }
    case 15066:
    {
        returnValue = F("Am Erzberg");
        break;
    }
    case 15067:
    {
        returnValue = F("Am Erzborn");
        break;
    }
    case 15068:
    {
        returnValue = F("Am Erzbuck");
        break;
    }
    case 15069:
    {
        returnValue = F("Am Erzschacht");
        break;
    }
    case 15070:
    {
        returnValue = F("Am Erzstollen");
        break;
    }
    case 15071:
    {
        returnValue = F("Am Erzweg");
        break;
    }
    case 15072:
    {
        returnValue = F("Am Esbaum");
        break;
    }
    case 15073:
    {
        returnValue = F("Am Esch");
        break;
    }
    case 15074:
    {
        returnValue = F("Am Eschbach");
        break;
    }
    case 15075:
    {
        returnValue = F("Am Eschbachfeld");
        break;
    }
    case 15076:
    {
        returnValue = F("Am Eschbaum");
        break;
    }
    case 15077:
    {
        returnValue = F("Am Eschdorfer Berge");
        break;
    }
    case 15078:
    {
        returnValue = F("Am Escheberger Weg");
        break;
    }
    case 15079:
    {
        returnValue = F("Am Eschelbach");
        break;
    }
    case 15080:
    {
        returnValue = F("Am Eschelberg");
        break;
    }
    case 15081:
    {
        returnValue = F("Am Eschelborn");
        break;
    }
    case 15082:
    {
        returnValue = F("Am Eschelsberg");
        break;
    }
    case 15083:
    {
        returnValue = F("Am Eschenacker");
        break;
    }
    case 15084:
    {
        returnValue = F("Am Eschenausteg");
        break;
    }
    case 15085:
    {
        returnValue = F("Am Eschenbach");
        break;
    }
    case 15086:
    {
        returnValue = F("Am Eschenbarg");
        break;
    }
    case 15087:
    {
        returnValue = F("Am Eschenberg");
        break;
    }
    case 15088:
    {
        returnValue = F("Am Eschenbornrasen");
        break;
    }
    case 15089:
    {
        returnValue = F("Am Eschenbrunnen");
        break;
    }
    case 15090:
    {
        returnValue = F("Am Eschengrund");
        break;
    }
    case 15091:
    {
        returnValue = F("Am Eschenhang");
        break;
    }
    case 15092:
    {
        returnValue = F("Am Eschenhof");
        break;
    }
    case 15093:
    {
        returnValue = F("Am Eschenhorst");
        break;
    }
    case 15094:
    {
        returnValue = F("Am Eschenschlag");
        break;
    }
    case 15095:
    {
        returnValue = F("Am Eschenwald");
        break;
    }
    case 15096:
    {
        returnValue = F("Am Eschenweg");
        break;
    }
    case 15097:
    {
        returnValue = F("Am Escher");
        break;
    }
    case 15098:
    {
        returnValue = F("Am Escher Weg");
        break;
    }
    case 15099:
    {
        returnValue = F("Am Escheugraben");
        break;
    }
    case 15100:
    {
        returnValue = F("Am Eschgatter");
        break;
    }
    case 15101:
    {
        returnValue = F("Am Eschhang");
        break;
    }
    case 15102:
    {
        returnValue = F("Am Eschholz");
        break;
    }
    case 15103:
    {
        returnValue = F("Am Eschhuesbach");
        break;
    }
    case 15104:
    {
        returnValue = F("Am Eschkamp");
        break;
    }
    case 15105:
    {
        returnValue = F("Am Eschle");
        break;
    }
    case 15106:
    {
        returnValue = F("Am Eschtor");
        break;
    }
    case 15107:
    {
        returnValue = F("Am Eschweg");
        break;
    }
    case 15108:
    {
        returnValue = F("Am Esel");
        break;
    }
    case 15109:
    {
        returnValue = F("Am Eselbusch");
        break;
    }
    case 15110:
    {
        returnValue = F("Am Eselhof");
        break;
    }
    case 15111:
    {
        returnValue = F("Am Eselköpfchen");
        break;
    }
    case 15112:
    {
        returnValue = F("Am Eselsbach");
        break;
    }
    case 15113:
    {
        returnValue = F("Am Eselsberg");
        break;
    }
    case 15114:
    {
        returnValue = F("Am Eselsborn");
        break;
    }
    case 15115:
    {
        returnValue = F("Am Eselsbusch");
        break;
    }
    case 15116:
    {
        returnValue = F("Am Eselsdamm");
        break;
    }
    case 15117:
    {
        returnValue = F("Am Eselsgraben");
        break;
    }
    case 15118:
    {
        returnValue = F("Am Eselshög");
        break;
    }
    case 15119:
    {
        returnValue = F("Am Eselsmarkt");
        break;
    }
    case 15120:
    {
        returnValue = F("Am Eselspfad");
        break;
    }
    case 15121:
    {
        returnValue = F("Am Eselspfade");
        break;
    }
    case 15122:
    {
        returnValue = F("Am Eselsstieg");
        break;
    }
    case 15123:
    {
        returnValue = F("Am Eselstanz");
        break;
    }
    case 15124:
    {
        returnValue = F("Am Eselstieg");
        break;
    }
    case 15125:
    {
        returnValue = F("Am Eselsweg");
        break;
    }
    case 15126:
    {
        returnValue = F("Am Eselwinkel");
        break;
    }
    case 15127:
    {
        returnValue = F("Am Espach");
        break;
    }
    case 15128:
    {
        returnValue = F("Am Espan");
        break;
    }
    case 15129:
    {
        returnValue = F("Am Espen");
        break;
    }
    case 15130:
    {
        returnValue = F("Am Espenhain");
        break;
    }
    case 15131:
    {
        returnValue = F("Am Espenhübel");
        break;
    }
    case 15132:
    {
        returnValue = F("Am Espenrain");
        break;
    }
    case 15133:
    {
        returnValue = F("Am Esper");
        break;
    }
    case 15134:
    {
        returnValue = F("Am Espet");
        break;
    }
    case 15135:
    {
        returnValue = F("Am Espich");
        break;
    }
    case 15136:
    {
        returnValue = F("Am Espichbach");
        break;
    }
    case 15137:
    {
        returnValue = F("Am Essbach");
        break;
    }
    case 15138:
    {
        returnValue = F("Am Esselbach");
        break;
    }
    case 15139:
    {
        returnValue = F("Am Esselberg");
        break;
    }
    case 15140:
    {
        returnValue = F("Am Essenscheid");
        break;
    }
    case 15141:
    {
        returnValue = F("Am Essigberg");
        break;
    }
    case 15142:
    {
        returnValue = F("Am Essigsteig");
        break;
    }
    case 15143:
    {
        returnValue = F("Am Essinghof");
        break;
    }
    case 15144:
    {
        returnValue = F("Am Esslinger Tor");
        break;
    }
    case 15145:
    {
        returnValue = F("Am Essmannshof");
        break;
    }
    case 15146:
    {
        returnValue = F("Am Estedeich");
        break;
    }
    case 15147:
    {
        returnValue = F("Am Esterholz");
        break;
    }
    case 15148:
    {
        returnValue = F("Am Etelser Bahnhof");
        break;
    }
    case 15149:
    {
        returnValue = F("Am Etlingsbrunnen");
        break;
    }
    case 15150:
    {
        returnValue = F("Am Etschberg");
        break;
    }
    case 15151:
    {
        returnValue = F("Am Ettelsberg");
        break;
    }
    case 15152:
    {
        returnValue = F("Am Ettenbach");
        break;
    }
    case 15153:
    {
        returnValue = F("Am Ettenberg");
        break;
    }
    case 15154:
    {
        returnValue = F("Am Ettenbund");
        break;
    }
    case 15155:
    {
        returnValue = F("Am Etterweg");
        break;
    }
    case 15156:
    {
        returnValue = F("Am Etzart");
        break;
    }
    case 15157:
    {
        returnValue = F("Am Etzel");
        break;
    }
    case 15158:
    {
        returnValue = F("Am Etzelberg");
        break;
    }
    case 15159:
    {
        returnValue = F("Am Etzelsberg");
        break;
    }
    case 15160:
    {
        returnValue = F("Am Etzenweg");
        break;
    }
    case 15161:
    {
        returnValue = F("Am Etzerschlößl");
        break;
    }
    case 15162:
    {
        returnValue = F("Am Etzfeld");
        break;
    }
    case 15163:
    {
        returnValue = F("Am Etzgarten");
        break;
    }
    case 15164:
    {
        returnValue = F("Am Etzhäusl");
        break;
    }
    case 15165:
    {
        returnValue = F("Am Euber");
        break;
    }
    case 15166:
    {
        returnValue = F("Am Euchariusberg");
        break;
    }
    case 15167:
    {
        returnValue = F("Am Eulenbach");
        break;
    }
    case 15168:
    {
        returnValue = F("Am Eulenberg");
        break;
    }
    case 15169:
    {
        returnValue = F("Am Eulenbruch");
        break;
    }
    case 15170:
    {
        returnValue = F("Am Eulenbuck");
        break;
    }
    case 15171:
    {
        returnValue = F("Am Eulendyck");
        break;
    }
    case 15172:
    {
        returnValue = F("Am Eulenflug");
        break;
    }
    case 15173:
    {
        returnValue = F("Am Eulengrund");
        break;
    }
    case 15174:
    {
        returnValue = F("Am Eulenguck");
        break;
    }
    case 15175:
    {
        returnValue = F("Am Eulenhof");
        break;
    }
    case 15176:
    {
        returnValue = F("Am Eulenhorst");
        break;
    }
    case 15177:
    {
        returnValue = F("Am Eulenhügel");
        break;
    }
    case 15178:
    {
        returnValue = F("Am Eulenpark");
        break;
    }
    case 15179:
    {
        returnValue = F("Am Eulenrech");
        break;
    }
    case 15180:
    {
        returnValue = F("Am Eulenschlag");
        break;
    }
    case 15181:
    {
        returnValue = F("Am Eulensteg");
        break;
    }
    case 15182:
    {
        returnValue = F("Am Eulenstein");
        break;
    }
    case 15183:
    {
        returnValue = F("Am Eulental");
        break;
    }
    case 15184:
    {
        returnValue = F("Am Eulenteil");
        break;
    }
    case 15185:
    {
        returnValue = F("Am Eulenturm");
        break;
    }
    case 15186:
    {
        returnValue = F("Am Eulenwald");
        break;
    }
    case 15187:
    {
        returnValue = F("Am Eulenwäldchen");
        break;
    }
    case 15188:
    {
        returnValue = F("Am Euler");
        break;
    }
    case 15189:
    {
        returnValue = F("Am Eulersfeld");
        break;
    }
    case 15190:
    {
        returnValue = F("Am Eulhack");
        break;
    }
    case 15191:
    {
        returnValue = F("Am Eulige");
        break;
    }
    case 15192:
    {
        returnValue = F("Am Eulitzbach");
        break;
    }
    case 15193:
    {
        returnValue = F("Am Euresbergweg");
        break;
    }
    case 15194:
    {
        returnValue = F("Am Europadorf");
        break;
    }
    case 15195:
    {
        returnValue = F("Am Europakanal");
        break;
    }
    case 15196:
    {
        returnValue = F("Am Eusternbach");
        break;
    }
    case 15197:
    {
        returnValue = F("Am Eutschenpfuhl");
        break;
    }
    case 15198:
    {
        returnValue = F("Am Eutschützgrund");
        break;
    }
    case 15199:
    {
        returnValue = F("Am Euwer");
        break;
    }
    case 15200:
    {
        returnValue = F("Am Euwerig");
        break;
    }
    case 15201:
    {
        returnValue = F("Am Euzenberg");
        break;
    }
    case 15202:
    {
        returnValue = F("Am Eußerthaler Platz");
        break;
    }
    case 15203:
    {
        returnValue = F("Am Evangelienstein");
        break;
    }
    case 15204:
    {
        returnValue = F("Am Evangelischen Gemeindehaus");
        break;
    }
    case 15205:
    {
        returnValue = F("Am Evenkamp");
        break;
    }
    case 15206:
    {
        returnValue = F("Am Eventpark");
        break;
    }
    case 15207:
    {
        returnValue = F("Am Everkamp");
        break;
    }
    case 15208:
    {
        returnValue = F("Am Eversberg");
        break;
    }
    case 15209:
    {
        returnValue = F("Am Eversburger Bahnhof");
        break;
    }
    case 15210:
    {
        returnValue = F("Am Everstein");
        break;
    }
    case 15211:
    {
        returnValue = F("Am Exberg");
        break;
    }
    case 15212:
    {
        returnValue = F("Am Exer");
        break;
    }
    case 15213:
    {
        returnValue = F("Am Exerzierplatz");
        break;
    }
    case 15214:
    {
        returnValue = F("Am Exterbach");
        break;
    }
    case 15215:
    {
        returnValue = F("Am Exterberg");
        break;
    }
    case 15216:
    {
        returnValue = F("Am Eybelshof");
        break;
    }
    case 15217:
    {
        returnValue = F("Am Eßfeld");
        break;
    }
    case 15218:
    {
        returnValue = F("Am Fabersbruch");
        break;
    }
    case 15219:
    {
        returnValue = F("Am Faberswald");
        break;
    }
    case 15220:
    {
        returnValue = F("Am Fabesberg");
        break;
    }
    case 15221:
    {
        returnValue = F("Am Fabiansteich");
        break;
    }
    case 15222:
    {
        returnValue = F("Am Fablhof");
        break;
    }
    case 15223:
    {
        returnValue = F("Am Fabrikberg");
        break;
    }
    case 15224:
    {
        returnValue = F("Am Fabrikhof");
        break;
    }
    case 15225:
    {
        returnValue = F("Am Fachreche");
        break;
    }
    case 15226:
    {
        returnValue = F("Am Fackelberg");
        break;
    }
    case 15227:
    {
        returnValue = F("Am Fackelesberg");
        break;
    }
    case 15228:
    {
        returnValue = F("Am Fackelstein");
        break;
    }
    case 15229:
    {
        returnValue = F("Am Faden Grund");
        break;
    }
    case 15230:
    {
        returnValue = F("Am Fahlen Kamp");
        break;
    }
    case 15231:
    {
        returnValue = F("Am Fahlenberg");
        break;
    }
    case 15232:
    {
        returnValue = F("Am Fahnen");
        break;
    }
    case 15233:
    {
        returnValue = F("Am Fahnenberg");
        break;
    }
    case 15234:
    {
        returnValue = F("Am Fahnenweg");
        break;
    }
    case 15235:
    {
        returnValue = F("Am Fahnerweg");
        break;
    }
    case 15236:
    {
        returnValue = F("Am Fahr");
        break;
    }
    case 15237:
    {
        returnValue = F("Am Fahracker");
        break;
    }
    case 15238:
    {
        returnValue = F("Am Fahrbach");
        break;
    }
    case 15239:
    {
        returnValue = F("Am Fahrberg");
        break;
    }
    case 15240:
    {
        returnValue = F("Am Fahrenbach");
        break;
    }
    case 15241:
    {
        returnValue = F("Am Fahrenberg");
        break;
    }
    case 15242:
    {
        returnValue = F("Am Fahrenbusch");
        break;
    }
    case 15243:
    {
        returnValue = F("Am Fahrenbühl");
        break;
    }
    case 15244:
    {
        returnValue = F("Am Fahrenhorster Damm");
        break;
    }
    case 15245:
    {
        returnValue = F("Am Fahrenkrog");
        break;
    }
    case 15246:
    {
        returnValue = F("Am Fahrenplatz");
        break;
    }
    case 15247:
    {
        returnValue = F("Am Fahrenstück");
        break;
    }
    case 15248:
    {
        returnValue = F("Am Fahrlöh");
        break;
    }
    case 15249:
    {
        returnValue = F("Am Fahrnberg");
        break;
    }
    case 15250:
    {
        returnValue = F("Am Fahrst");
        break;
    }
    case 15251:
    {
        returnValue = F("Am Fahrt");
        break;
    }
    case 15252:
    {
        returnValue = F("Am Fahrwald");
        break;
    }
    case 15253:
    {
        returnValue = F("Am Fahrweg");
        break;
    }
    case 15254:
    {
        returnValue = F("Am Falbenholzweg");
        break;
    }
    case 15255:
    {
        returnValue = F("Am Falchen");
        break;
    }
    case 15256:
    {
        returnValue = F("Am Falder");
        break;
    }
    case 15257:
    {
        returnValue = F("Am Falke-Grund");
        break;
    }
    case 15258:
    {
        returnValue = F("Am Falkenberg");
        break;
    }
    case 15259:
    {
        returnValue = F("Am Falkenflug");
        break;
    }
    case 15260:
    {
        returnValue = F("Am Falkenholz");
        break;
    }
    case 15261:
    {
        returnValue = F("Am Falkenhorst");
        break;
    }
    case 15262:
    {
        returnValue = F("Am Falkenstein");
        break;
    }
    case 15263:
    {
        returnValue = F("Am Falkentann");
        break;
    }
    case 15264:
    {
        returnValue = F("Am Falkert");
        break;
    }
    case 15265:
    {
        returnValue = F("Am Fall");
        break;
    }
    case 15266:
    {
        returnValue = F("Am Falle");
        break;
    }
    case 15267:
    {
        returnValue = F("Am Fallenbach");
        break;
    }
    case 15268:
    {
        returnValue = F("Am Fallenholz");
        break;
    }
    case 15269:
    {
        returnValue = F("Am Fallenweg");
        break;
    }
    case 15270:
    {
        returnValue = F("Am Fallerberg");
        break;
    }
    case 15271:
    {
        returnValue = F("Am Fallgarten");
        break;
    }
    case 15272:
    {
        returnValue = F("Am Fallgatter");
        break;
    }
    case 15273:
    {
        returnValue = F("Am Fallhaus");
        break;
    }
    case 15274:
    {
        returnValue = F("Am Fallsteinblick");
        break;
    }
    case 15275:
    {
        returnValue = F("Am Fallthor");
        break;
    }
    case 15276:
    {
        returnValue = F("Am Falltor");
        break;
    }
    case 15277:
    {
        returnValue = F("Am Falltorgraben");
        break;
    }
    case 15278:
    {
        returnValue = F("Am Falltorweg");
        break;
    }
    case 15279:
    {
        returnValue = F("Am Faltenbach");
        break;
    }
    case 15280:
    {
        returnValue = F("Am Falter");
        break;
    }
    case 15281:
    {
        returnValue = F("Am Faltergarten");
        break;
    }
    case 15282:
    {
        returnValue = F("Am Faltergrund");
        break;
    }
    case 15283:
    {
        returnValue = F("Am Falterhölzl");
        break;
    }
    case 15284:
    {
        returnValue = F("Am Faltertor");
        break;
    }
    case 15285:
    {
        returnValue = F("Am Famberg");
        break;
    }
    case 15286:
    {
        returnValue = F("Am Familien Campus");
        break;
    }
    case 15287:
    {
        returnValue = F("Am Fangberg");
        break;
    }
    case 15288:
    {
        returnValue = F("Am Fangegraben");
        break;
    }
    case 15289:
    {
        returnValue = F("Am Fanggraben");
        break;
    }
    case 15290:
    {
        returnValue = F("Am Farenhorst");
        break;
    }
    case 15291:
    {
        returnValue = F("Am Farn");
        break;
    }
    case 15292:
    {
        returnValue = F("Am Farnacker");
        break;
    }
    case 15293:
    {
        returnValue = F("Am Farnbach");
        break;
    }
    case 15294:
    {
        returnValue = F("Am Farnberg");
        break;
    }
    case 15295:
    {
        returnValue = F("Am Farnbuck");
        break;
    }
    case 15296:
    {
        returnValue = F("Am Farnröder Wege");
        break;
    }
    case 15297:
    {
        returnValue = F("Am Farrenberg");
        break;
    }
    case 15298:
    {
        returnValue = F("Am Farrenrott");
        break;
    }
    case 15299:
    {
        returnValue = F("Am Farrenstall");
        break;
    }
    case 15300:
    {
        returnValue = F("Am Farrnbach");
        break;
    }
    case 15301:
    {
        returnValue = F("Am Farrod");
        break;
    }
    case 15302:
    {
        returnValue = F("Am Fasanenacker");
        break;
    }
    case 15303:
    {
        returnValue = F("Am Fasanenberg");
        break;
    }
    case 15304:
    {
        returnValue = F("Am Fasanengarten");
        break;
    }
    case 15305:
    {
        returnValue = F("Am Fasanenhang");
        break;
    }
    case 15306:
    {
        returnValue = F("Am Fasanenhof");
        break;
    }
    case 15307:
    {
        returnValue = F("Am Fasanenholz");
        break;
    }
    case 15308:
    {
        returnValue = F("Am Fasanenhügel");
        break;
    }
    case 15309:
    {
        returnValue = F("Am Fasanenpfad");
        break;
    }
    case 15310:
    {
        returnValue = F("Am Fasanenschacht");
        break;
    }
    case 15311:
    {
        returnValue = F("Am Fasanenweg");
        break;
    }
    case 15312:
    {
        returnValue = F("Am Fasanenwinkel");
        break;
    }
    case 15313:
    {
        returnValue = F("Am Faschinad");
        break;
    }
    case 15314:
    {
        returnValue = F("Am Fassenberg");
        break;
    }
    case 15315:
    {
        returnValue = F("Am Fastenberg");
        break;
    }
    case 15316:
    {
        returnValue = F("Am Fasthagen");
        break;
    }
    case 15317:
    {
        returnValue = F("Am Fauerbach");
        break;
    }
    case 15318:
    {
        returnValue = F("Am Fauerbacher Rain");
        break;
    }
    case 15319:
    {
        returnValue = F("Am Faulbusch");
        break;
    }
    case 15320:
    {
        returnValue = F("Am Faulenbach");
        break;
    }
    case 15321:
    {
        returnValue = F("Am Faulenberg");
        break;
    }
    case 15322:
    {
        returnValue = F("Am Faulgraben");
        break;
    }
    case 15323:
    {
        returnValue = F("Am Faust");
        break;
    }
    case 15324:
    {
        returnValue = F("Am Faustacker");
        break;
    }
    case 15325:
    {
        returnValue = F("Am Faustenberg");
        break;
    }
    case 15326:
    {
        returnValue = F("Am Faustweg");
        break;
    }
    case 15327:
    {
        returnValue = F("Am Faß");
        break;
    }
    case 15328:
    {
        returnValue = F("Am Faßholzwerk");
        break;
    }
    case 15329:
    {
        returnValue = F("Am Feckinger Berg");
        break;
    }
    case 15330:
    {
        returnValue = F("Am Federacker");
        break;
    }
    case 15331:
    {
        returnValue = F("Am Federbach");
        break;
    }
    case 15332:
    {
        returnValue = F("Am Federnwerk");
        break;
    }
    case 15333:
    {
        returnValue = F("Am Feger");
        break;
    }
    case 15334:
    {
        returnValue = F("Am Fehdenberg");
        break;
    }
    case 15335:
    {
        returnValue = F("Am Fehlbach");
        break;
    }
    case 15336:
    {
        returnValue = F("Am Fehlberg");
        break;
    }
    case 15337:
    {
        returnValue = F("Am Fehltmoor");
        break;
    }
    case 15338:
    {
        returnValue = F("Am Fehn");
        break;
    }
    case 15339:
    {
        returnValue = F("Am Fehntjer Tief");
        break;
    }
    case 15340:
    {
        returnValue = F("Am Fehnweg");
        break;
    }
    case 15341:
    {
        returnValue = F("Am Fehrbelliner Tor");
        break;
    }
    case 15342:
    {
        returnValue = F("Am Fehrborn");
        break;
    }
    case 15343:
    {
        returnValue = F("Am Fehrenberg");
        break;
    }
    case 15344:
    {
        returnValue = F("Am Feichtbaum");
        break;
    }
    case 15345:
    {
        returnValue = F("Am Feichtlberg");
        break;
    }
    case 15346:
    {
        returnValue = F("Am Feierabendheim");
        break;
    }
    case 15347:
    {
        returnValue = F("Am Feiglbichl");
        break;
    }
    case 15348:
    {
        returnValue = F("Am Feilbacher Hang");
        break;
    }
    case 15349:
    {
        returnValue = F("Am Feilenkreuz");
        break;
    }
    case 15350:
    {
        returnValue = F("Am Feiler");
        break;
    }
    case 15351:
    {
        returnValue = F("Am Feilnbacher Bahnhof");
        break;
    }
    case 15352:
    {
        returnValue = F("Am Felber");
        break;
    }
    case 15353:
    {
        returnValue = F("Am Felbersteig");
        break;
    }
    case 15354:
    {
        returnValue = F("Am Felchtaer Bach");
        break;
    }
    case 15355:
    {
        returnValue = F("Am Feld");
        break;
    }
    case 15356:
    {
        returnValue = F("Am Feldahorn");
        break;
    }
    case 15357:
    {
        returnValue = F("Am Feldanger");
        break;
    }
    case 15358:
    {
        returnValue = F("Am Feldbach");
        break;
    }
    case 15359:
    {
        returnValue = F("Am Feldberg");
        break;
    }
    case 15360:
    {
        returnValue = F("Am Feldberge");
        break;
    }
    case 15361:
    {
        returnValue = F("Am Feldborn");
        break;
    }
    case 15362:
    {
        returnValue = F("Am Feldbrand");
        break;
    }
    case 15363:
    {
        returnValue = F("Am Feldbrunn");
        break;
    }
    case 15364:
    {
        returnValue = F("Am Feldchen");
        break;
    }
    case 15365:
    {
        returnValue = F("Am Felde");
        break;
    }
    case 15366:
    {
        returnValue = F("Am Felder");
        break;
    }
    case 15367:
    {
        returnValue = F("Am Felder Hof");
        break;
    }
    case 15368:
    {
        returnValue = F("Am Felderfeld");
        break;
    }
    case 15369:
    {
        returnValue = F("Am Feldergraben");
        break;
    }
    case 15370:
    {
        returnValue = F("Am Felderhölzle");
        break;
    }
    case 15371:
    {
        returnValue = F("Am Feldesch");
        break;
    }
    case 15372:
    {
        returnValue = F("Am Feldfrieden");
        break;
    }
    case 15373:
    {
        returnValue = F("Am Feldgarten");
        break;
    }
    case 15374:
    {
        returnValue = F("Am Feldgen");
        break;
    }
    case 15375:
    {
        returnValue = F("Am Feldgraben");
        break;
    }
    case 15376:
    {
        returnValue = F("Am Feldhain");
        break;
    }
    case 15377:
    {
        returnValue = F("Am Feldhaus");
        break;
    }
    case 15378:
    {
        returnValue = F("Am Feldhof");
        break;
    }
    case 15379:
    {
        returnValue = F("Am Feldhofe");
        break;
    }
    case 15380:
    {
        returnValue = F("Am Feldkamp");
        break;
    }
    case 15381:
    {
        returnValue = F("Am Feldkothen");
        break;
    }
    case 15382:
    {
        returnValue = F("Am Feldkreuz");
        break;
    }
    case 15383:
    {
        returnValue = F("Am Feldl");
        break;
    }
    case 15384:
    {
        returnValue = F("Am Feldlager");
        break;
    }
    case 15385:
    {
        returnValue = F("Am Feldle");
        break;
    }
    case 15386:
    {
        returnValue = F("Am Feldlein");
        break;
    }
    case 15387:
    {
        returnValue = F("Am Feldner");
        break;
    }
    case 15388:
    {
        returnValue = F("Am Feldpütz");
        break;
    }
    case 15389:
    {
        returnValue = F("Am Feldrain");
        break;
    }
    case 15390:
    {
        returnValue = F("Am Feldrand");
        break;
    }
    case 15391:
    {
        returnValue = F("Am Feldsaum");
        break;
    }
    case 15392:
    {
        returnValue = F("Am Feldscheunenweg");
        break;
    }
    case 15393:
    {
        returnValue = F("Am Feldschlösschen");
        break;
    }
    case 15394:
    {
        returnValue = F("Am Feldschlössel");
        break;
    }
    case 15395:
    {
        returnValue = F("Am Feldschlößchen");
        break;
    }
    case 15396:
    {
        returnValue = F("Am Feldsteig");
        break;
    }
    case 15397:
    {
        returnValue = F("Am Feldstein");
        break;
    }
    case 15398:
    {
        returnValue = F("Am Feldtor");
        break;
    }
    case 15399:
    {
        returnValue = F("Am Feldweg");
        break;
    }
    case 15400:
    {
        returnValue = F("Am Feldweinberg");
        break;
    }
    case 15401:
    {
        returnValue = F("Am Feldwiesenbach");
        break;
    }
    case 15402:
    {
        returnValue = F("Am Feldwuhr");
        break;
    }
    case 15403:
    {
        returnValue = F("Am Fellchen");
        break;
    }
    case 15404:
    {
        returnValue = F("Am Feller");
        break;
    }
    case 15405:
    {
        returnValue = F("Am Fels");
        break;
    }
    case 15406:
    {
        returnValue = F("Am Felsacker");
        break;
    }
    case 15407:
    {
        returnValue = F("Am Felsberg");
        break;
    }
    case 15408:
    {
        returnValue = F("Am Felsblick");
        break;
    }
    case 15409:
    {
        returnValue = F("Am Felsbusch");
        break;
    }
    case 15410:
    {
        returnValue = F("Am Felsen");
        break;
    }
    case 15411:
    {
        returnValue = F("Am Felsenberg");
        break;
    }
    case 15412:
    {
        returnValue = F("Am Felsenblick");
        break;
    }
    case 15413:
    {
        returnValue = F("Am Felsenbrunnen");
        break;
    }
    case 15414:
    {
        returnValue = F("Am Felsenbusch");
        break;
    }
    case 15415:
    {
        returnValue = F("Am Felseneck");
        break;
    }
    case 15416:
    {
        returnValue = F("Am Felsengarten");
        break;
    }
    case 15417:
    {
        returnValue = F("Am Felsenhau");
        break;
    }
    case 15418:
    {
        returnValue = F("Am Felsenkeller");
        break;
    }
    case 15419:
    {
        returnValue = F("Am Felsenpfad");
        break;
    }
    case 15420:
    {
        returnValue = F("Am Felsenring");
        break;
    }
    case 15421:
    {
        returnValue = F("Am Felsenwehr");
        break;
    }
    case 15422:
    {
        returnValue = F("Am Felsenwäldele");
        break;
    }
    case 15423:
    {
        returnValue = F("Am Felsrücken");
        break;
    }
    case 15424:
    {
        returnValue = F("Am Felswäldchen");
        break;
    }
    case 15425:
    {
        returnValue = F("Am Femischberg");
        break;
    }
    case 15426:
    {
        returnValue = F("Am Fendlbach");
        break;
    }
    case 15427:
    {
        returnValue = F("Am Fenekamp");
        break;
    }
    case 15428:
    {
        returnValue = F("Am Fengel");
        break;
    }
    case 15429:
    {
        returnValue = F("Am Fenn");
        break;
    }
    case 15430:
    {
        returnValue = F("Am Fennbach");
        break;
    }
    case 15431:
    {
        returnValue = F("Am Fenneck");
        break;
    }
    case 15432:
    {
        returnValue = F("Am Fensternhof");
        break;
    }
    case 15433:
    {
        returnValue = F("Am Ferchenholz");
        break;
    }
    case 15434:
    {
        returnValue = F("Am Ferdinand-Schlez-Platz");
        break;
    }
    case 15435:
    {
        returnValue = F("Am Feriendorf");
        break;
    }
    case 15436:
    {
        returnValue = F("Am Feriengebiet");
        break;
    }
    case 15437:
    {
        returnValue = F("Am Ferienheim");
        break;
    }
    case 15438:
    {
        returnValue = F("Am Ferienpark");
        break;
    }
    case 15439:
    {
        returnValue = F("Am Ferlgarten");
        break;
    }
    case 15440:
    {
        returnValue = F("Am Ferling");
        break;
    }
    case 15441:
    {
        returnValue = F("Am Fernblick");
        break;
    }
    case 15442:
    {
        returnValue = F("Am Ferngaswerk");
        break;
    }
    case 15443:
    {
        returnValue = F("Am Fernmeldeturm");
        break;
    }
    case 15444:
    {
        returnValue = F("Am Fernsehturm");
        break;
    }
    case 15445:
    {
        returnValue = F("Am Fers");
        break;
    }
    case 15446:
    {
        returnValue = F("Am Fertenbach");
        break;
    }
    case 15447:
    {
        returnValue = F("Am Fesenberg");
        break;
    }
    case 15448:
    {
        returnValue = F("Am Fesenbuckel");
        break;
    }
    case 15449:
    {
        returnValue = F("Am Fesenfeld");
        break;
    }
    case 15450:
    {
        returnValue = F("Am Festanger");
        break;
    }
    case 15451:
    {
        returnValue = F("Am Festegraben");
        break;
    }
    case 15452:
    {
        returnValue = F("Am Festenberg");
        break;
    }
    case 15453:
    {
        returnValue = F("Am Festplatz");
        break;
    }
    case 15454:
    {
        returnValue = F("Am Festungsgraben");
        break;
    }
    case 15455:
    {
        returnValue = F("Am Fetscherbach");
        break;
    }
    case 15456:
    {
        returnValue = F("Am Fetten Kampe");
        break;
    }
    case 15457:
    {
        returnValue = F("Am Fettloch");
        break;
    }
    case 15458:
    {
        returnValue = F("Am Feuerbach");
        break;
    }
    case 15459:
    {
        returnValue = F("Am Feuerbache");
        break;
    }
    case 15460:
    {
        returnValue = F("Am Feuerberg");
        break;
    }
    case 15461:
    {
        returnValue = F("Am Feuerborn");
        break;
    }
    case 15462:
    {
        returnValue = F("Am Feuerbrunnen");
        break;
    }
    case 15463:
    {
        returnValue = F("Am Feuergraben");
        break;
    }
    case 15464:
    {
        returnValue = F("Am Feuerhaus");
        break;
    }
    case 15465:
    {
        returnValue = F("Am Feuerhof");
        break;
    }
    case 15466:
    {
        returnValue = F("Am Feuerlöschbrunnen");
        break;
    }
    case 15467:
    {
        returnValue = F("Am Feuerlöschteich");
        break;
    }
    case 15468:
    {
        returnValue = F("Am Feuerschlößchen");
        break;
    }
    case 15469:
    {
        returnValue = F("Am Feuerschwanden");
        break;
    }
    case 15470:
    {
        returnValue = F("Am Feuersee");
        break;
    }
    case 15471:
    {
        returnValue = F("Am Feuerstein");
        break;
    }
    case 15472:
    {
        returnValue = F("Am Feuersteinle");
        break;
    }
    case 15473:
    {
        returnValue = F("Am Feuerteich");
        break;
    }
    case 15474:
    {
        returnValue = F("Am Feuerteiche");
        break;
    }
    case 15475:
    {
        returnValue = F("Am Feuertor");
        break;
    }
    case 15476:
    {
        returnValue = F("Am Feuerwachturm");
        break;
    }
    case 15477:
    {
        returnValue = F("Am Feuerwehrdepot");
        break;
    }
    case 15478:
    {
        returnValue = F("Am Feuerwehrgerätehaus");
        break;
    }
    case 15479:
    {
        returnValue = F("Am Feuerwehrhaus");
        break;
    }
    case 15480:
    {
        returnValue = F("Am Feuerwehrheim");
        break;
    }
    case 15481:
    {
        returnValue = F("Am Feuerwehrplatz");
        break;
    }
    case 15482:
    {
        returnValue = F("Am Feuerwehrturm");
        break;
    }
    case 15483:
    {
        returnValue = F("Am Feuerweiher");
        break;
    }
    case 15484:
    {
        returnValue = F("Am Feuerwerkslaboratorium");
        break;
    }
    case 15485:
    {
        returnValue = F("Am Feybach");
        break;
    }
    case 15486:
    {
        returnValue = F("Am Feyhof");
        break;
    }
    case 15487:
    {
        returnValue = F("Am Ficht");
        break;
    }
    case 15488:
    {
        returnValue = F("Am Fichtacher Berg");
        break;
    }
    case 15489:
    {
        returnValue = F("Am Fichtberg");
        break;
    }
    case 15490:
    {
        returnValue = F("Am Fichtbusch");
        break;
    }
    case 15491:
    {
        returnValue = F("Am Fichtel");
        break;
    }
    case 15492:
    {
        returnValue = F("Am Fichtelberg");
        break;
    }
    case 15493:
    {
        returnValue = F("Am Fichtelsee");
        break;
    }
    case 15494:
    {
        returnValue = F("Am Fichtenbach");
        break;
    }
    case 15495:
    {
        returnValue = F("Am Fichtenberg");
        break;
    }
    case 15496:
    {
        returnValue = F("Am Fichtenbrünnlein");
        break;
    }
    case 15497:
    {
        returnValue = F("Am Fichtenbusch");
        break;
    }
    case 15498:
    {
        returnValue = F("Am Fichteneck");
        break;
    }
    case 15499:
    {
        returnValue = F("Am Fichtengrund");
        break;
    }
    case 15500:
    {
        returnValue = F("Am Fichtenhain");
        break;
    }
    case 15501:
    {
        returnValue = F("Am Fichtenhang");
        break;
    }
    case 15502:
    {
        returnValue = F("Am Fichtenhof");
        break;
    }
    case 15503:
    {
        returnValue = F("Am Fichtenholz");
        break;
    }
    case 15504:
    {
        returnValue = F("Am Fichtenkamp");
        break;
    }
    case 15505:
    {
        returnValue = F("Am Fichtenkopf");
        break;
    }
    case 15506:
    {
        returnValue = F("Am Fichtenplatz");
        break;
    }
    case 15507:
    {
        returnValue = F("Am Fichtenrain");
        break;
    }
    case 15508:
    {
        returnValue = F("Am Fichtenring");
        break;
    }
    case 15509:
    {
        returnValue = F("Am Fichtensee");
        break;
    }
    case 15510:
    {
        returnValue = F("Am Fichtenthal");
        break;
    }
    case 15511:
    {
        returnValue = F("Am Fichtenwald");
        break;
    }
    case 15512:
    {
        returnValue = F("Am Fichtenwäldchen");
        break;
    }
    case 15513:
    {
        returnValue = F("Am Fichtig");
        break;
    }
    case 15514:
    {
        returnValue = F("Am Fiebich");
        break;
    }
    case 15515:
    {
        returnValue = F("Am Fiebig");
        break;
    }
    case 15516:
    {
        returnValue = F("Am Fiedeler");
        break;
    }
    case 15517:
    {
        returnValue = F("Am Fienacker");
        break;
    }
    case 15518:
    {
        returnValue = F("Am Fienberg");
        break;
    }
    case 15519:
    {
        returnValue = F("Am Fieseler Werk");
        break;
    }
    case 15520:
    {
        returnValue = F("Am Fiesteler Bach");
        break;
    }
    case 15521:
    {
        returnValue = F("Am Fievhuck");
        break;
    }
    case 15522:
    {
        returnValue = F("Am Figurberg");
        break;
    }
    case 15523:
    {
        returnValue = F("Am Fildeken");
        break;
    }
    case 15524:
    {
        returnValue = F("Am Fillerberg");
        break;
    }
    case 15525:
    {
        returnValue = F("Am Fillerschloß");
        break;
    }
    case 15526:
    {
        returnValue = F("Am Fillerstein");
        break;
    }
    case 15527:
    {
        returnValue = F("Am Film");
        break;
    }
    case 15528:
    {
        returnValue = F("Am Filmstudio");
        break;
    }
    case 15529:
    {
        returnValue = F("Am Filoort");
        break;
    }
    case 15530:
    {
        returnValue = F("Am Filswehr");
        break;
    }
    case 15531:
    {
        returnValue = F("Am Filz");
        break;
    }
    case 15532:
    {
        returnValue = F("Am Filzbach");
        break;
    }
    case 15533:
    {
        returnValue = F("Am Filzhauck");
        break;
    }
    case 15534:
    {
        returnValue = F("Am Filzteich");
        break;
    }
    case 15535:
    {
        returnValue = F("Am Finanzamt");
        break;
    }
    case 15536:
    {
        returnValue = F("Am Findberg");
        break;
    }
    case 15537:
    {
        returnValue = F("Am Findling");
        break;
    }
    case 15538:
    {
        returnValue = F("Am Findorffhof");
        break;
    }
    case 15539:
    {
        returnValue = F("Am Finkelbach");
        break;
    }
    case 15540:
    {
        returnValue = F("Am Finkelsrain");
        break;
    }
    case 15541:
    {
        returnValue = F("Am Finkenacker");
        break;
    }
    case 15542:
    {
        returnValue = F("Am Finkenbach");
        break;
    }
    case 15543:
    {
        returnValue = F("Am Finkenberg");
        break;
    }
    case 15544:
    {
        returnValue = F("Am Finkenbrink");
        break;
    }
    case 15545:
    {
        returnValue = F("Am Finkenbuck");
        break;
    }
    case 15546:
    {
        returnValue = F("Am Finkenbusch");
        break;
    }
    case 15547:
    {
        returnValue = F("Am Finkenbühl");
        break;
    }
    case 15548:
    {
        returnValue = F("Am Finkenflug");
        break;
    }
    case 15549:
    {
        returnValue = F("Am Finkenhagen");
        break;
    }
    case 15550:
    {
        returnValue = F("Am Finkenhain");
        break;
    }
    case 15551:
    {
        returnValue = F("Am Finkenherd");
        break;
    }
    case 15552:
    {
        returnValue = F("Am Finkenhimmel");
        break;
    }
    case 15553:
    {
        returnValue = F("Am Finkenhof");
        break;
    }
    case 15554:
    {
        returnValue = F("Am Finkenhügel");
        break;
    }
    case 15555:
    {
        returnValue = F("Am Finkenmoor");
        break;
    }
    case 15556:
    {
        returnValue = F("Am Finkennest");
        break;
    }
    case 15557:
    {
        returnValue = F("Am Finkenrain");
        break;
    }
    case 15558:
    {
        returnValue = F("Am Finkenschlag");
        break;
    }
    case 15559:
    {
        returnValue = F("Am Finkenspring");
        break;
    }
    case 15560:
    {
        returnValue = F("Am Finkenstein");
        break;
    }
    case 15561:
    {
        returnValue = F("Am Finkenweg");
        break;
    }
    case 15562:
    {
        returnValue = F("Am Finnberg");
        break;
    }
    case 15563:
    {
        returnValue = F("Am Finnenbach");
        break;
    }
    case 15564:
    {
        returnValue = F("Am Finnenberg");
        break;
    }
    case 15565:
    {
        returnValue = F("Am Finnenkamp");
        break;
    }
    case 15566:
    {
        returnValue = F("Am Finnenlöh");
        break;
    }
    case 15567:
    {
        returnValue = F("Am Finowkanal");
        break;
    }
    case 15568:
    {
        returnValue = F("Am Fintausee");
        break;
    }
    case 15569:
    {
        returnValue = F("Am Firmerich");
        break;
    }
    case 15570:
    {
        returnValue = F("Am Firschweg");
        break;
    }
    case 15571:
    {
        returnValue = F("Am First");
        break;
    }
    case 15572:
    {
        returnValue = F("Am Firstberg");
        break;
    }
    case 15573:
    {
        returnValue = F("Am Firstenweg");
        break;
    }
    case 15574:
    {
        returnValue = F("Am Fischbach");
        break;
    }
    case 15575:
    {
        returnValue = F("Am Fischbacher Weg");
        break;
    }
    case 15576:
    {
        returnValue = F("Am Fischbahnhof");
        break;
    }
    case 15577:
    {
        returnValue = F("Am Fischberg");
        break;
    }
    case 15578:
    {
        returnValue = F("Am Fischbergele");
        break;
    }
    case 15579:
    {
        returnValue = F("Am Fischbühl");
        break;
    }
    case 15580:
    {
        returnValue = F("Am Fischelteich");
        break;
    }
    case 15581:
    {
        returnValue = F("Am Fischer");
        break;
    }
    case 15582:
    {
        returnValue = F("Am Fischerbeek");
        break;
    }
    case 15583:
    {
        returnValue = F("Am Fischerberg");
        break;
    }
    case 15584:
    {
        returnValue = F("Am Fischerbügel");
        break;
    }
    case 15585:
    {
        returnValue = F("Am Fischerbühl");
        break;
    }
    case 15586:
    {
        returnValue = F("Am Fischerdamm");
        break;
    }
    case 15587:
    {
        returnValue = F("Am Fischerdorf");
        break;
    }
    case 15588:
    {
        returnValue = F("Am Fischereihafen");
        break;
    }
    case 15589:
    {
        returnValue = F("Am Fischerende");
        break;
    }
    case 15590:
    {
        returnValue = F("Am Fischerfeld");
        break;
    }
    case 15591:
    {
        returnValue = F("Am Fischergraben");
        break;
    }
    case 15592:
    {
        returnValue = F("Am Fischergries");
        break;
    }
    case 15593:
    {
        returnValue = F("Am Fischerhafen");
        break;
    }
    case 15594:
    {
        returnValue = F("Am Fischerhaus");
        break;
    }
    case 15595:
    {
        returnValue = F("Am Fischerheim");
        break;
    }
    case 15596:
    {
        returnValue = F("Am Fischerhof");
        break;
    }
    case 15597:
    {
        returnValue = F("Am Fischerkietz");
        break;
    }
    case 15598:
    {
        returnValue = F("Am Fischerklink");
        break;
    }
    case 15599:
    {
        returnValue = F("Am Fischerkreuz");
        break;
    }
    case 15600:
    {
        returnValue = F("Am Fischernetz");
        break;
    }
    case 15601:
    {
        returnValue = F("Am Fischerplatz");
        break;
    }
    case 15602:
    {
        returnValue = F("Am Fischerrain");
        break;
    }
    case 15603:
    {
        returnValue = F("Am Fischerrück");
        break;
    }
    case 15604:
    {
        returnValue = F("Am Fischersberg");
        break;
    }
    case 15605:
    {
        returnValue = F("Am Fischersrain");
        break;
    }
    case 15606:
    {
        returnValue = F("Am Fischersteg");
        break;
    }
    case 15607:
    {
        returnValue = F("Am Fischersteich");
        break;
    }
    case 15608:
    {
        returnValue = F("Am Fischersteig");
        break;
    }
    case 15609:
    {
        returnValue = F("Am Fischerstieg");
        break;
    }
    case 15610:
    {
        returnValue = F("Am Fischertal");
        break;
    }
    case 15611:
    {
        returnValue = F("Am Fischerteich");
        break;
    }
    case 15612:
    {
        returnValue = F("Am Fischerweg");
        break;
    }
    case 15613:
    {
        returnValue = F("Am Fischerwinkel");
        break;
    }
    case 15614:
    {
        returnValue = F("Am Fischfang");
        break;
    }
    case 15615:
    {
        returnValue = F("Am Fischgrund");
        break;
    }
    case 15616:
    {
        returnValue = F("Am Fischgärtle");
        break;
    }
    case 15617:
    {
        returnValue = F("Am Fischhaber Berg");
        break;
    }
    case 15618:
    {
        returnValue = F("Am Fischhaus");
        break;
    }
    case 15619:
    {
        returnValue = F("Am Fischhof");
        break;
    }
    case 15620:
    {
        returnValue = F("Am Fischhäuschen");
        break;
    }
    case 15621:
    {
        returnValue = F("Am Fischkalter");
        break;
    }
    case 15622:
    {
        returnValue = F("Am Fischkasten");
        break;
    }
    case 15623:
    {
        returnValue = F("Am Fischlein");
        break;
    }
    case 15624:
    {
        returnValue = F("Am Fischloch");
        break;
    }
    case 15625:
    {
        returnValue = F("Am Fischmal");
        break;
    }
    case 15626:
    {
        returnValue = F("Am Fischmarkt");
        break;
    }
    case 15627:
    {
        returnValue = F("Am Fischrain");
        break;
    }
    case 15628:
    {
        returnValue = F("Am Fischteich");
        break;
    }
    case 15629:
    {
        returnValue = F("Am Fischteiche");
        break;
    }
    case 15630:
    {
        returnValue = F("Am Fischwasser");
        break;
    }
    case 15631:
    {
        returnValue = F("Am Fischweg");
        break;
    }
    case 15632:
    {
        returnValue = F("Am Fischweier");
        break;
    }
    case 15633:
    {
        returnValue = F("Am Fischweiher");
        break;
    }
    case 15634:
    {
        returnValue = F("Am Fixberg");
        break;
    }
    case 15635:
    {
        returnValue = F("Am Flach");
        break;
    }
    case 15636:
    {
        returnValue = F("Am Flachen Broich");
        break;
    }
    case 15637:
    {
        returnValue = F("Am Flachen Hahn");
        break;
    }
    case 15638:
    {
        returnValue = F("Am Flachhof");
        break;
    }
    case 15639:
    {
        returnValue = F("Am Flachmoor");
        break;
    }
    case 15640:
    {
        returnValue = F("Am Flachsacker");
        break;
    }
    case 15641:
    {
        returnValue = F("Am Flachsbach");
        break;
    }
    case 15642:
    {
        returnValue = F("Am Flachsberg");
        break;
    }
    case 15643:
    {
        returnValue = F("Am Flachsbuck");
        break;
    }
    case 15644:
    {
        returnValue = F("Am Flachsenberge");
        break;
    }
    case 15645:
    {
        returnValue = F("Am Flachsfeld");
        break;
    }
    case 15646:
    {
        returnValue = F("Am Flachsgraben");
        break;
    }
    case 15647:
    {
        returnValue = F("Am Flachsgrund");
        break;
    }
    case 15648:
    {
        returnValue = F("Am Flachshof");
        break;
    }
    case 15649:
    {
        returnValue = F("Am Flachskamp");
        break;
    }
    case 15650:
    {
        returnValue = F("Am Flachslande");
        break;
    }
    case 15651:
    {
        returnValue = F("Am Flachsmoor");
        break;
    }
    case 15652:
    {
        returnValue = F("Am Flachsteich");
        break;
    }
    case 15653:
    {
        returnValue = F("Am Flachswasser");
        break;
    }
    case 15654:
    {
        returnValue = F("Am Flachsweiher");
        break;
    }
    case 15655:
    {
        returnValue = F("Am Flachswerk");
        break;
    }
    case 15656:
    {
        returnValue = F("Am Flachtenstiegel");
        break;
    }
    case 15657:
    {
        returnValue = F("Am Flachter Pfad");
        break;
    }
    case 15658:
    {
        returnValue = F("Am Fladder");
        break;
    }
    case 15659:
    {
        returnValue = F("Am Fladerlach");
        break;
    }
    case 15660:
    {
        returnValue = F("Am Flage");
        break;
    }
    case 15661:
    {
        returnValue = F("Am Flagg");
        break;
    }
    case 15662:
    {
        returnValue = F("Am Flamarium");
        break;
    }
    case 15663:
    {
        returnValue = F("Am Flammborn");
        break;
    }
    case 15664:
    {
        returnValue = F("Am Flassbarg");
        break;
    }
    case 15665:
    {
        returnValue = F("Am Flassland");
        break;
    }
    case 15666:
    {
        returnValue = F("Am Flatt");
        break;
    }
    case 15667:
    {
        returnValue = F("Am Flatthaus");
        break;
    }
    case 15668:
    {
        returnValue = F("Am Flauer");
        break;
    }
    case 15669:
    {
        returnValue = F("Am Flaßhof");
        break;
    }
    case 15670:
    {
        returnValue = F("Am Flaßpohl");
        break;
    }
    case 15671:
    {
        returnValue = F("Am Flechtenberg");
        break;
    }
    case 15672:
    {
        returnValue = F("Am Flechtlein");
        break;
    }
    case 15673:
    {
        returnValue = F("Am Fleck");
        break;
    }
    case 15674:
    {
        returnValue = F("Am Fleckacker");
        break;
    }
    case 15675:
    {
        returnValue = F("Am Flecken");
        break;
    }
    case 15676:
    {
        returnValue = F("Am Fleckenbach");
        break;
    }
    case 15677:
    {
        returnValue = F("Am Fleckenbornsch");
        break;
    }
    case 15678:
    {
        returnValue = F("Am Fleckenhaus");
        break;
    }
    case 15679:
    {
        returnValue = F("Am Fleckkamp");
        break;
    }
    case 15680:
    {
        returnValue = F("Am Fleckle");
        break;
    }
    case 15681:
    {
        returnValue = F("Am Flecklein");
        break;
    }
    case 15682:
    {
        returnValue = F("Am Flederberg");
        break;
    }
    case 15683:
    {
        returnValue = F("Am Fleer");
        break;
    }
    case 15684:
    {
        returnValue = F("Am Fleesensee");
        break;
    }
    case 15685:
    {
        returnValue = F("Am Fleet");
        break;
    }
    case 15686:
    {
        returnValue = F("Am Fleeth");
        break;
    }
    case 15687:
    {
        returnValue = F("Am Flehkamp");
        break;
    }
    case 15688:
    {
        returnValue = F("Am Flehmebach");
        break;
    }
    case 15689:
    {
        returnValue = F("Am Fleinsbach");
        break;
    }
    case 15690:
    {
        returnValue = F("Am Fleischberg");
        break;
    }
    case 15691:
    {
        returnValue = F("Am Fleischerberg");
        break;
    }
    case 15692:
    {
        returnValue = F("Am Fleischerteich");
        break;
    }
    case 15693:
    {
        returnValue = F("Am Fleit");
        break;
    }
    case 15694:
    {
        returnValue = F("Am Fleitgraben");
        break;
    }
    case 15695:
    {
        returnValue = F("Am Fleith");
        break;
    }
    case 15696:
    {
        returnValue = F("Am Flembach");
        break;
    }
    case 15697:
    {
        returnValue = F("Am Flemming");
        break;
    }
    case 15698:
    {
        returnValue = F("Am Flemmingberg");
        break;
    }
    case 15699:
    {
        returnValue = F("Am Flemminger Anger");
        break;
    }
    case 15700:
    {
        returnValue = F("Am Flensunger Hof");
        break;
    }
    case 15701:
    {
        returnValue = F("Am Fleschenkamp");
        break;
    }
    case 15702:
    {
        returnValue = F("Am Fleth");
        break;
    }
    case 15703:
    {
        returnValue = F("Am Flidderberg");
        break;
    }
    case 15704:
    {
        returnValue = F("Am Fliederacker");
        break;
    }
    case 15705:
    {
        returnValue = F("Am Fliederberg");
        break;
    }
    case 15706:
    {
        returnValue = F("Am Fliederbogen");
        break;
    }
    case 15707:
    {
        returnValue = F("Am Fliederbusch");
        break;
    }
    case 15708:
    {
        returnValue = F("Am Fliederbäumchen");
        break;
    }
    case 15709:
    {
        returnValue = F("Am Fliederhof");
        break;
    }
    case 15710:
    {
        returnValue = F("Am Fliederkamp");
        break;
    }
    case 15711:
    {
        returnValue = F("Am Fliederwall");
        break;
    }
    case 15712:
    {
        returnValue = F("Am Fliederweg");
        break;
    }
    case 15713:
    {
        returnValue = F("Am Fliegelskamp");
        break;
    }
    case 15714:
    {
        returnValue = F("Am Fliegen");
        break;
    }
    case 15715:
    {
        returnValue = F("Am Fliegenbaum");
        break;
    }
    case 15716:
    {
        returnValue = F("Am Fliegenberg");
        break;
    }
    case 15717:
    {
        returnValue = F("Am Fliegental");
        break;
    }
    case 15718:
    {
        returnValue = F("Am Fliegerhorst");
        break;
    }
    case 15719:
    {
        returnValue = F("Am Fliesenpadd");
        break;
    }
    case 15720:
    {
        returnValue = F("Am Fliethbach");
        break;
    }
    case 15721:
    {
        returnValue = F("Am Fließ");
        break;
    }
    case 15722:
    {
        returnValue = F("Am Fließgraben");
        break;
    }
    case 15723:
    {
        returnValue = F("Am Fließhorn");
        break;
    }
    case 15724:
    {
        returnValue = F("Am Fließweg");
        break;
    }
    case 15725:
    {
        returnValue = F("Am Flinsch");
        break;
    }
    case 15726:
    {
        returnValue = F("Am Flinthang");
        break;
    }
    case 15727:
    {
        returnValue = F("Am Flinthörn");
        break;
    }
    case 15728:
    {
        returnValue = F("Am Flintlein");
        break;
    }
    case 15729:
    {
        returnValue = F("Am Flipsbach");
        break;
    }
    case 15730:
    {
        returnValue = F("Am Flissert");
        break;
    }
    case 15731:
    {
        returnValue = F("Am Flitterwochenbarg");
        break;
    }
    case 15732:
    {
        returnValue = F("Am Flitz");
        break;
    }
    case 15733:
    {
        returnValue = F("Am Floas");
        break;
    }
    case 15734:
    {
        returnValue = F("Am Flockengrund");
        break;
    }
    case 15735:
    {
        returnValue = F("Am Flockenhaus");
        break;
    }
    case 15736:
    {
        returnValue = F("Am Flockenhof");
        break;
    }
    case 15737:
    {
        returnValue = F("Am Flohberg");
        break;
    }
    case 15738:
    {
        returnValue = F("Am Flomengraben");
        break;
    }
    case 15739:
    {
        returnValue = F("Am Flootgarten");
        break;
    }
    case 15740:
    {
        returnValue = F("Am Flootwerk");
        break;
    }
    case 15741:
    {
        returnValue = F("Am Florenberg");
        break;
    }
    case 15742:
    {
        returnValue = F("Am Florianigraben");
        break;
    }
    case 15743:
    {
        returnValue = F("Am Floschen");
        break;
    }
    case 15744:
    {
        returnValue = F("Am Flotthafen");
        break;
    }
    case 15745:
    {
        returnValue = F("Am Flottmannpark");
        break;
    }
    case 15746:
    {
        returnValue = F("Am Flottmoorpark");
        break;
    }
    case 15747:
    {
        returnValue = F("Am Flotz");
        break;
    }
    case 15748:
    {
        returnValue = F("Am Floß");
        break;
    }
    case 15749:
    {
        returnValue = F("Am Floßbach");
        break;
    }
    case 15750:
    {
        returnValue = F("Am Floßgarten");
        break;
    }
    case 15751:
    {
        returnValue = F("Am Floßgraben");
        break;
    }
    case 15752:
    {
        returnValue = F("Am Floßhafen");
        break;
    }
    case 15753:
    {
        returnValue = F("Am Floßholzer Berg");
        break;
    }
    case 15754:
    {
        returnValue = F("Am Floßkanal");
        break;
    }
    case 15755:
    {
        returnValue = F("Am Floßplatz");
        break;
    }
    case 15756:
    {
        returnValue = F("Am Floßsteig");
        break;
    }
    case 15757:
    {
        returnValue = F("Am Fluchsberg");
        break;
    }
    case 15758:
    {
        returnValue = F("Am Fludderdeich");
        break;
    }
    case 15759:
    {
        returnValue = F("Am Fluderbuckel");
        break;
    }
    case 15760:
    {
        returnValue = F("Am Fludern");
        break;
    }
    case 15761:
    {
        returnValue = F("Am Flugfeld");
        break;
    }
    case 15762:
    {
        returnValue = F("Am Flughafen");
        break;
    }
    case 15763:
    {
        returnValue = F("Am Flugplatz");
        break;
    }
    case 15764:
    {
        returnValue = F("Am Flugrain");
        break;
    }
    case 15765:
    {
        returnValue = F("Am Flugsand");
        break;
    }
    case 15766:
    {
        returnValue = F("Am Fluit");
        break;
    }
    case 15767:
    {
        returnValue = F("Am Flur");
        break;
    }
    case 15768:
    {
        returnValue = F("Am Fluracker");
        break;
    }
    case 15769:
    {
        returnValue = F("Am Flurbuck");
        break;
    }
    case 15770:
    {
        returnValue = F("Am Flurdenkmal");
        break;
    }
    case 15771:
    {
        returnValue = F("Am Flurenberg");
        break;
    }
    case 15772:
    {
        returnValue = F("Am Flurersflecken");
        break;
    }
    case 15773:
    {
        returnValue = F("Am Flurgraben");
        break;
    }
    case 15774:
    {
        returnValue = F("Am Flurgrabenweg");
        break;
    }
    case 15775:
    {
        returnValue = F("Am Flurrasen");
        break;
    }
    case 15776:
    {
        returnValue = F("Am Flurscheid");
        break;
    }
    case 15777:
    {
        returnValue = F("Am Flurzaun");
        break;
    }
    case 15778:
    {
        returnValue = F("Am Flussufer");
        break;
    }
    case 15779:
    {
        returnValue = F("Am Flutgraben");
        break;
    }
    case 15780:
    {
        returnValue = F("Am Flutkanal");
        break;
    }
    case 15781:
    {
        returnValue = F("Am Flutter");
        break;
    }
    case 15782:
    {
        returnValue = F("Am Flußgraben");
        break;
    }
    case 15783:
    {
        returnValue = F("Am Fläminghang");
        break;
    }
    case 15784:
    {
        returnValue = F("Am Flämmerbach");
        break;
    }
    case 15785:
    {
        returnValue = F("Am Fläßchen");
        break;
    }
    case 15786:
    {
        returnValue = F("Am Flöddert");
        break;
    }
    case 15787:
    {
        returnValue = F("Am Flögelshof");
        break;
    }
    case 15788:
    {
        returnValue = F("Am Flöhbach");
        break;
    }
    case 15789:
    {
        returnValue = F("Am Flöhberg");
        break;
    }
    case 15790:
    {
        returnValue = F("Am Flöhnberg");
        break;
    }
    case 15791:
    {
        returnValue = F("Am Flössel");
        break;
    }
    case 15792:
    {
        returnValue = F("Am Flössle");
        break;
    }
    case 15793:
    {
        returnValue = F("Am Flötebach");
        break;
    }
    case 15794:
    {
        returnValue = F("Am Flötenkiel");
        break;
    }
    case 15795:
    {
        returnValue = F("Am Flöth");
        break;
    }
    case 15796:
    {
        returnValue = F("Am Flöthgraben");
        break;
    }
    case 15797:
    {
        returnValue = F("Am Flötzbach");
        break;
    }
    case 15798:
    {
        returnValue = F("Am Flöz");
        break;
    }
    case 15799:
    {
        returnValue = F("Am Flößbach");
        break;
    }
    case 15800:
    {
        returnValue = F("Am Flößchen");
        break;
    }
    case 15801:
    {
        returnValue = F("Am Flößgraben");
        break;
    }
    case 15802:
    {
        returnValue = F("Am Flößiggraben");
        break;
    }
    case 15803:
    {
        returnValue = F("Am Flößlein");
        break;
    }
    case 15804:
    {
        returnValue = F("Am Flößrasen");
        break;
    }
    case 15805:
    {
        returnValue = F("Am Flüchttor");
        break;
    }
    case 15806:
    {
        returnValue = F("Am Flüddert");
        break;
    }
    case 15807:
    {
        returnValue = F("Am Flügelbahnhof");
        break;
    }
    case 15808:
    {
        returnValue = F("Am Flügeldeich");
        break;
    }
    case 15809:
    {
        returnValue = F("Am Flügelgraben");
        break;
    }
    case 15810:
    {
        returnValue = F("Am Flügelsbach");
        break;
    }
    case 15811:
    {
        returnValue = F("Am Flürchen");
        break;
    }
    case 15812:
    {
        returnValue = F("Am Flürlein");
        break;
    }
    case 15813:
    {
        returnValue = F("Am Flüt");
        break;
    }
    case 15814:
    {
        returnValue = F("Am Flüth");
        break;
    }
    case 15815:
    {
        returnValue = F("Am Flütheberg");
        break;
    }
    case 15816:
    {
        returnValue = F("Am Flüthedamm");
        break;
    }
    case 15817:
    {
        returnValue = F("Am Flüßchen");
        break;
    }
    case 15818:
    {
        returnValue = F("Am Foches");
        break;
    }
    case 15819:
    {
        returnValue = F("Am Fockenberg");
        break;
    }
    case 15820:
    {
        returnValue = F("Am Fockensteinchen");
        break;
    }
    case 15821:
    {
        returnValue = F("Am Focker Strom");
        break;
    }
    case 15822:
    {
        returnValue = F("Am Fohlenbach");
        break;
    }
    case 15823:
    {
        returnValue = F("Am Fohlengarten");
        break;
    }
    case 15824:
    {
        returnValue = F("Am Fohlenhof");
        break;
    }
    case 15825:
    {
        returnValue = F("Am Fohlenmarkt");
        break;
    }
    case 15826:
    {
        returnValue = F("Am Fohlenstall");
        break;
    }
    case 15827:
    {
        returnValue = F("Am Fohrenberg");
        break;
    }
    case 15828:
    {
        returnValue = F("Am Fohrenbühl");
        break;
    }
    case 15829:
    {
        returnValue = F("Am Fohrenhäule");
        break;
    }
    case 15830:
    {
        returnValue = F("Am Fohrenwald");
        break;
    }
    case 15831:
    {
        returnValue = F("Am Fonderschen");
        break;
    }
    case 15832:
    {
        returnValue = F("Am Forchenwald");
        break;
    }
    case 15833:
    {
        returnValue = F("Am Forchenwäldle");
        break;
    }
    case 15834:
    {
        returnValue = F("Am Forchet");
        break;
    }
    case 15835:
    {
        returnValue = F("Am Forellenbach");
        break;
    }
    case 15836:
    {
        returnValue = F("Am Forellensteg");
        break;
    }
    case 15837:
    {
        returnValue = F("Am Forellenteich");
        break;
    }
    case 15838:
    {
        returnValue = F("Am Foret");
        break;
    }
    case 15839:
    {
        returnValue = F("Am Forhnauer Weiher");
        break;
    }
    case 15840:
    {
        returnValue = F("Am Forlenspitzen");
        break;
    }
    case 15841:
    {
        returnValue = F("Am Forlenwald");
        break;
    }
    case 15842:
    {
        returnValue = F("Am Forschheimer See");
        break;
    }
    case 15843:
    {
        returnValue = F("Am Forst");
        break;
    }
    case 15844:
    {
        returnValue = F("Am Forst Spießingshol");
        break;
    }
    case 15845:
    {
        returnValue = F("Am Forstacker");
        break;
    }
    case 15846:
    {
        returnValue = F("Am Forstamt");
        break;
    }
    case 15847:
    {
        returnValue = F("Am Forstanger");
        break;
    }
    case 15848:
    {
        returnValue = F("Am Forstbach");
        break;
    }
    case 15849:
    {
        returnValue = F("Am Forstbann");
        break;
    }
    case 15850:
    {
        returnValue = F("Am Forstberg");
        break;
    }
    case 15851:
    {
        returnValue = F("Am Forstblock");
        break;
    }
    case 15852:
    {
        returnValue = F("Am Forstbrunnen");
        break;
    }
    case 15853:
    {
        returnValue = F("Am Forstdenkmal");
        break;
    }
    case 15854:
    {
        returnValue = F("Am Forsteckweiher");
        break;
    }
    case 15855:
    {
        returnValue = F("Am Forsten");
        break;
    }
    case 15856:
    {
        returnValue = F("Am Forstenberg");
        break;
    }
    case 15857:
    {
        returnValue = F("Am Forster Kreuz");
        break;
    }
    case 15858:
    {
        returnValue = F("Am Forsteracker");
        break;
    }
    case 15859:
    {
        returnValue = F("Am Forsterbach");
        break;
    }
    case 15860:
    {
        returnValue = F("Am Forsterweiher");
        break;
    }
    case 15861:
    {
        returnValue = F("Am Forstfeld");
        break;
    }
    case 15862:
    {
        returnValue = F("Am Forstgarten");
        break;
    }
    case 15863:
    {
        returnValue = F("Am Forstgraben");
        break;
    }
    case 15864:
    {
        returnValue = F("Am Forstgrund");
        break;
    }
    case 15865:
    {
        returnValue = F("Am Forsthaus");
        break;
    }
    case 15866:
    {
        returnValue = F("Am Forsthaus Gravenbruch");
        break;
    }
    case 15867:
    {
        returnValue = F("Am Forsthaus Streek");
        break;
    }
    case 15868:
    {
        returnValue = F("Am Forsthaus Wittland");
        break;
    }
    case 15869:
    {
        returnValue = F("Am Forsthause");
        break;
    }
    case 15870:
    {
        returnValue = F("Am Forsthausgarten");
        break;
    }
    case 15871:
    {
        returnValue = F("Am Forsthof");
        break;
    }
    case 15872:
    {
        returnValue = F("Am Forstkamp");
        break;
    }
    case 15873:
    {
        returnValue = F("Am Forstkreuz");
        break;
    }
    case 15874:
    {
        returnValue = F("Am Forstland");
        break;
    }
    case 15875:
    {
        returnValue = F("Am Forstplatz");
        break;
    }
    case 15876:
    {
        returnValue = F("Am Forstpoint");
        break;
    }
    case 15877:
    {
        returnValue = F("Am Forstrand");
        break;
    }
    case 15878:
    {
        returnValue = F("Am Forstteich");
        break;
    }
    case 15879:
    {
        returnValue = F("Am Forstweg");
        break;
    }
    case 15880:
    {
        returnValue = F("Am Fort");
        break;
    }
    case 15881:
    {
        returnValue = F("Am Fort Konstantin");
        break;
    }
    case 15882:
    {
        returnValue = F("Am Fort Schaar");
        break;
    }
    case 15883:
    {
        returnValue = F("Am Fort Zinna");
        break;
    }
    case 15884:
    {
        returnValue = F("Am Fortbach");
        break;
    }
    case 15885:
    {
        returnValue = F("Am Fortberg");
        break;
    }
    case 15886:
    {
        returnValue = F("Am Forthof");
        break;
    }
    case 15887:
    {
        returnValue = F("Am Forum");
        break;
    }
    case 15888:
    {
        returnValue = F("Am Fossgraben");
        break;
    }
    case 15889:
    {
        returnValue = F("Am Fosshall");
        break;
    }
    case 15890:
    {
        returnValue = F("Am Fosteberg");
        break;
    }
    case 15891:
    {
        returnValue = F("Am Foßacker");
        break;
    }
    case 15892:
    {
        returnValue = F("Am Frankenbach");
        break;
    }
    case 15893:
    {
        returnValue = F("Am Frankenberg");
        break;
    }
    case 15894:
    {
        returnValue = F("Am Frankenbrink");
        break;
    }
    case 15895:
    {
        returnValue = F("Am Frankenbühl");
        break;
    }
    case 15896:
    {
        returnValue = F("Am Frankenfeld");
        break;
    }
    case 15897:
    {
        returnValue = F("Am Frankenförder Weg");
        break;
    }
    case 15898:
    {
        returnValue = F("Am Frankengarten");
        break;
    }
    case 15899:
    {
        returnValue = F("Am Frankengrund");
        break;
    }
    case 15900:
    {
        returnValue = F("Am Frankenhain");
        break;
    }
    case 15901:
    {
        returnValue = F("Am Frankenhaus");
        break;
    }
    case 15902:
    {
        returnValue = F("Am Frankenhof");
        break;
    }
    case 15903:
    {
        returnValue = F("Am Frankenkamp");
        break;
    }
    case 15904:
    {
        returnValue = F("Am Frankenschacht");
        break;
    }
    case 15905:
    {
        returnValue = F("Am Frankenstein");
        break;
    }
    case 15906:
    {
        returnValue = F("Am Frankenweiher");
        break;
    }
    case 15907:
    {
        returnValue = F("Am Frankershäuser Weg");
        break;
    }
    case 15908:
    {
        returnValue = F("Am Frankfurter Tor");
        break;
    }
    case 15909:
    {
        returnValue = F("Am Frankfurter Weg");
        break;
    }
    case 15910:
    {
        returnValue = F("Am Franz-Graben");
        break;
    }
    case 15911:
    {
        returnValue = F("Am Franzenacker");
        break;
    }
    case 15912:
    {
        returnValue = F("Am Franzenbach");
        break;
    }
    case 15913:
    {
        returnValue = F("Am Franzenberg");
        break;
    }
    case 15914:
    {
        returnValue = F("Am Franzenhölzle");
        break;
    }
    case 15915:
    {
        returnValue = F("Am Franzenstein");
        break;
    }
    case 15916:
    {
        returnValue = F("Am Franzgarten");
        break;
    }
    case 15917:
    {
        returnValue = F("Am Franzosenbach");
        break;
    }
    case 15918:
    {
        returnValue = F("Am Franzosenberg");
        break;
    }
    case 15919:
    {
        returnValue = F("Am Franzosenbruch");
        break;
    }
    case 15920:
    {
        returnValue = F("Am Franzosenbrunnen");
        break;
    }
    case 15921:
    {
        returnValue = F("Am Franzosenfriedhof");
        break;
    }
    case 15922:
    {
        returnValue = F("Am Franzosengraben");
        break;
    }
    case 15923:
    {
        returnValue = F("Am Franzosenhut");
        break;
    }
    case 15924:
    {
        returnValue = F("Am Franzosenkopf");
        break;
    }
    case 15925:
    {
        returnValue = F("Am Franzosenstein");
        break;
    }
    case 15926:
    {
        returnValue = F("Am Franzschacht");
        break;
    }
    case 15927:
    {
        returnValue = F("Am Franzwingert");
        break;
    }
    case 15928:
    {
        returnValue = F("Am Französischen Garten");
        break;
    }
    case 15929:
    {
        returnValue = F("Am Fratzenstein");
        break;
    }
    case 15930:
    {
        returnValue = F("Am Fraubach");
        break;
    }
    case 15931:
    {
        returnValue = F("Am Frauenanger");
        break;
    }
    case 15932:
    {
        returnValue = F("Am Frauenberg");
        break;
    }
    case 15933:
    {
        returnValue = F("Am Frauenbrunn");
        break;
    }
    case 15934:
    {
        returnValue = F("Am Frauenbrunnen");
        break;
    }
    case 15935:
    {
        returnValue = F("Am Frauenbusch");
        break;
    }
    case 15936:
    {
        returnValue = F("Am Frauenbuschacker");
        break;
    }
    case 15937:
    {
        returnValue = F("Am Frauendorfer Holz");
        break;
    }
    case 15938:
    {
        returnValue = F("Am Frauenfeld");
        break;
    }
    case 15939:
    {
        returnValue = F("Am Frauengarten");
        break;
    }
    case 15940:
    {
        returnValue = F("Am Frauengebind");
        break;
    }
    case 15941:
    {
        returnValue = F("Am Frauengraben");
        break;
    }
    case 15942:
    {
        returnValue = F("Am Frauenhofgut");
        break;
    }
    case 15943:
    {
        returnValue = F("Am Frauenholz");
        break;
    }
    case 15944:
    {
        returnValue = F("Am Frauenmarkt");
        break;
    }
    case 15945:
    {
        returnValue = F("Am Frauenpfuhl");
        break;
    }
    case 15946:
    {
        returnValue = F("Am Frauenplan");
        break;
    }
    case 15947:
    {
        returnValue = F("Am Frauenstück");
        break;
    }
    case 15948:
    {
        returnValue = F("Am Frauentor");
        break;
    }
    case 15949:
    {
        returnValue = F("Am Frauenwald");
        break;
    }
    case 15950:
    {
        returnValue = F("Am Frauländchen");
        break;
    }
    case 15951:
    {
        returnValue = F("Am Fraumersberg");
        break;
    }
    case 15952:
    {
        returnValue = F("Am Frauwald");
        break;
    }
    case 15953:
    {
        returnValue = F("Am Frechenrieder Weg");
        break;
    }
    case 15954:
    {
        returnValue = F("Am Freden");
        break;
    }
    case 15955:
    {
        returnValue = F("Am Fredenbaum");
        break;
    }
    case 15956:
    {
        returnValue = F("Am Fredesteen");
        break;
    }
    case 15957:
    {
        returnValue = F("Am Freepsumer Meer");
        break;
    }
    case 15958:
    {
        returnValue = F("Am Freibach");
        break;
    }
    case 15959:
    {
        returnValue = F("Am Freibad");
        break;
    }
    case 15960:
    {
        returnValue = F("Am Freiberg");
        break;
    }
    case 15961:
    {
        returnValue = F("Am Freidelbrunnen");
        break;
    }
    case 15962:
    {
        returnValue = F("Am Freien Hof");
        break;
    }
    case 15963:
    {
        returnValue = F("Am Freien Koben");
        break;
    }
    case 15964:
    {
        returnValue = F("Am Freien Stein");
        break;
    }
    case 15965:
    {
        returnValue = F("Am Freien Stuhl");
        break;
    }
    case 15966:
    {
        returnValue = F("Am Freiergraben");
        break;
    }
    case 15967:
    {
        returnValue = F("Am Freigericht");
        break;
    }
    case 15968:
    {
        returnValue = F("Am Freigrafenkamp");
        break;
    }
    case 15969:
    {
        returnValue = F("Am Freigut");
        break;
    }
    case 15970:
    {
        returnValue = F("Am Freiheitsplatz");
        break;
    }
    case 15971:
    {
        returnValue = F("Am Freiheitsweg");
        break;
    }
    case 15972:
    {
        returnValue = F("Am Freihof");
        break;
    }
    case 15973:
    {
        returnValue = F("Am Freikamp");
        break;
    }
    case 15974:
    {
        returnValue = F("Am Freilos");
        break;
    }
    case 15975:
    {
        returnValue = F("Am Freising");
        break;
    }
    case 15976:
    {
        returnValue = F("Am Freistein");
        break;
    }
    case 15977:
    {
        returnValue = F("Am Freistuhl");
        break;
    }
    case 15978:
    {
        returnValue = F("Am Freitagsbach");
        break;
    }
    case 15979:
    {
        returnValue = F("Am Freitagshof");
        break;
    }
    case 15980:
    {
        returnValue = F("Am Freizeitbad");
        break;
    }
    case 15981:
    {
        returnValue = F("Am Freizeitgelände");
        break;
    }
    case 15982:
    {
        returnValue = F("Am Freizeitpark");
        break;
    }
    case 15983:
    {
        returnValue = F("Am Freizeitzentrum");
        break;
    }
    case 15984:
    {
        returnValue = F("Am Frenzelberg");
        break;
    }
    case 15985:
    {
        returnValue = F("Am Fresenberg");
        break;
    }
    case 15986:
    {
        returnValue = F("Am Fresendorfer Weg");
        break;
    }
    case 15987:
    {
        returnValue = F("Am Frett");
        break;
    }
    case 15988:
    {
        returnValue = F("Am Frettholz");
        break;
    }
    case 15989:
    {
        returnValue = F("Am Fretz");
        break;
    }
    case 15990:
    {
        returnValue = F("Am Freudenberg");
        break;
    }
    case 15991:
    {
        returnValue = F("Am Freudenstein");
        break;
    }
    case 15992:
    {
        returnValue = F("Am Freudhof");
        break;
    }
    case 15993:
    {
        returnValue = F("Am Freyersee");
        break;
    }
    case 15994:
    {
        returnValue = F("Am Fridolin");
        break;
    }
    case 15995:
    {
        returnValue = F("Am Fridolinsdamm");
        break;
    }
    case 15996:
    {
        returnValue = F("Am Fried");
        break;
    }
    case 15997:
    {
        returnValue = F("Am Friedbruchgraben");
        break;
    }
    case 15998:
    {
        returnValue = F("Am Friedebrink");
        break;
    }
    case 15999:
    {
        returnValue = F("Am Friedeholz");
        break;
    }
    case 16000:
    {
        returnValue = F("Am Friedensacker");
        break;
    }
    case 16001:
    {
        returnValue = F("Am Friedensanger");
        break;
    }
    case 16002:
    {
        returnValue = F("Am Friedensberg");
        break;
    }
    case 16003:
    {
        returnValue = F("Am Friedenseck");
        break;
    }
    case 16004:
    {
        returnValue = F("Am Friedensgarten");
        break;
    }
    case 16005:
    {
        returnValue = F("Am Friedenshain");
        break;
    }
    case 16006:
    {
        returnValue = F("Am Friedenshang");
        break;
    }
    case 16007:
    {
        returnValue = F("Am Friedenshof");
        break;
    }
    case 16008:
    {
        returnValue = F("Am Friedenshügel");
        break;
    }
    case 16009:
    {
        returnValue = F("Am Friedenskreuz");
        break;
    }
    case 16010:
    {
        returnValue = F("Am Friedenspark");
        break;
    }
    case 16011:
    {
        returnValue = F("Am Friedensplatz");
        break;
    }
    case 16012:
    {
        returnValue = F("Am Friedenstal");
        break;
    }
    case 16013:
    {
        returnValue = F("Am Friedensteich");
        break;
    }
    case 16014:
    {
        returnValue = F("Am Friedenstein");
        break;
    }
    case 16015:
    {
        returnValue = F("Am Friederikenholz");
        break;
    }
    case 16016:
    {
        returnValue = F("Am Friedfeld");
        break;
    }
    case 16017:
    {
        returnValue = F("Am Friedhag");
        break;
    }
    case 16018:
    {
        returnValue = F("Am Friedhahn");
        break;
    }
    case 16019:
    {
        returnValue = F("Am Friedheimer See");
        break;
    }
    case 16020:
    {
        returnValue = F("Am Friedhof");
        break;
    }
    case 16021:
    {
        returnValue = F("Am Friedhofe");
        break;
    }
    case 16022:
    {
        returnValue = F("Am Friedhofsweg");
        break;
    }
    case 16023:
    {
        returnValue = F("Am Friedleshof");
        break;
    }
    case 16024:
    {
        returnValue = F("Am Friedrich-Ebert-Park");
        break;
    }
    case 16025:
    {
        returnValue = F("Am Friedrichsbach");
        break;
    }
    case 16026:
    {
        returnValue = F("Am Friedrichsbad");
        break;
    }
    case 16027:
    {
        returnValue = F("Am Friedrichsberg");
        break;
    }
    case 16028:
    {
        returnValue = F("Am Friedrichsbrunnen");
        break;
    }
    case 16029:
    {
        returnValue = F("Am Friedrichsdamm");
        break;
    }
    case 16030:
    {
        returnValue = F("Am Friedrichsee");
        break;
    }
    case 16031:
    {
        returnValue = F("Am Friedrichsfeld");
        break;
    }
    case 16032:
    {
        returnValue = F("Am Friedrichsgarten");
        break;
    }
    case 16033:
    {
        returnValue = F("Am Friedrichshain");
        break;
    }
    case 16034:
    {
        returnValue = F("Am Friedrichspark");
        break;
    }
    case 16035:
    {
        returnValue = F("Am Friedrichsplatz");
        break;
    }
    case 16036:
    {
        returnValue = F("Am Friedrichstein");
        break;
    }
    case 16037:
    {
        returnValue = F("Am Friedstein");
        break;
    }
    case 16038:
    {
        returnValue = F("Am Friesenbach");
        break;
    }
    case 16039:
    {
        returnValue = F("Am Friesenberg");
        break;
    }
    case 16040:
    {
        returnValue = F("Am Friesenkamp");
        break;
    }
    case 16041:
    {
        returnValue = F("Am Friesenkirchhof");
        break;
    }
    case 16042:
    {
        returnValue = F("Am Friesenpark");
        break;
    }
    case 16043:
    {
        returnValue = F("Am Friesenplatz");
        break;
    }
    case 16044:
    {
        returnValue = F("Am Friesental");
        break;
    }
    case 16045:
    {
        returnValue = F("Am Friesoyther Kanal II");
        break;
    }
    case 16046:
    {
        returnValue = F("Am Frießelsbach");
        break;
    }
    case 16047:
    {
        returnValue = F("Am Frischanger");
        break;
    }
    case 16048:
    {
        returnValue = F("Am Frischen Brunnen");
        break;
    }
    case 16049:
    {
        returnValue = F("Am Frischenstein");
        break;
    }
    case 16050:
    {
        returnValue = F("Am Fritzenberg");
        break;
    }
    case 16051:
    {
        returnValue = F("Am Fritzschgut");
        break;
    }
    case 16052:
    {
        returnValue = F("Am Frohberg");
        break;
    }
    case 16053:
    {
        returnValue = F("Am Frohen Busch");
        break;
    }
    case 16054:
    {
        returnValue = F("Am Frohnacker");
        break;
    }
    case 16055:
    {
        returnValue = F("Am Frohnbach");
        break;
    }
    case 16056:
    {
        returnValue = F("Am Frohnberg");
        break;
    }
    case 16057:
    {
        returnValue = F("Am Frohnbügel");
        break;
    }
    case 16058:
    {
        returnValue = F("Am Frohndberg");
        break;
    }
    case 16059:
    {
        returnValue = F("Am Frohnen Wenden");
        break;
    }
    case 16060:
    {
        returnValue = F("Am Frohnenhof");
        break;
    }
    case 16061:
    {
        returnValue = F("Am Frohngraben");
        break;
    }
    case 16062:
    {
        returnValue = F("Am Frohnhof");
        break;
    }
    case 16063:
    {
        returnValue = F("Am Frohnpfad");
        break;
    }
    case 16064:
    {
        returnValue = F("Am Fronacker");
        break;
    }
    case 16065:
    {
        returnValue = F("Am Fronberg");
        break;
    }
    case 16066:
    {
        returnValue = F("Am Fronhof");
        break;
    }
    case 16067:
    {
        returnValue = F("Am Fronhofpfad");
        break;
    }
    case 16068:
    {
        returnValue = F("Am Fronhofsgarten");
        break;
    }
    case 16069:
    {
        returnValue = F("Am Froniberg");
        break;
    }
    case 16070:
    {
        returnValue = F("Am Fronweg");
        break;
    }
    case 16071:
    {
        returnValue = F("Am Froschacker");
        break;
    }
    case 16072:
    {
        returnValue = F("Am Froschbach");
        break;
    }
    case 16073:
    {
        returnValue = F("Am Froschcafe");
        break;
    }
    case 16074:
    {
        returnValue = F("Am Froschenpfuhl");
        break;
    }
    case 16075:
    {
        returnValue = F("Am Froschfelde");
        break;
    }
    case 16076:
    {
        returnValue = F("Am Froschgraben");
        break;
    }
    case 16077:
    {
        returnValue = F("Am Froschletten");
        break;
    }
    case 16078:
    {
        returnValue = F("Am Froschteich");
        break;
    }
    case 16079:
    {
        returnValue = F("Am Froschweiher");
        break;
    }
    case 16080:
    {
        returnValue = F("Am Frumech");
        break;
    }
    case 16081:
    {
        returnValue = F("Am Fräuleinsgarten");
        break;
    }
    case 16082:
    {
        returnValue = F("Am Fräuleinsgraben");
        break;
    }
    case 16083:
    {
        returnValue = F("Am Fröbbel");
        break;
    }
    case 16084:
    {
        returnValue = F("Am Fröbelturm");
        break;
    }
    case 16085:
    {
        returnValue = F("Am Fröhlichen Mann");
        break;
    }
    case 16086:
    {
        returnValue = F("Am Fröhner Pfad");
        break;
    }
    case 16087:
    {
        returnValue = F("Am Frölichwald");
        break;
    }
    case 16088:
    {
        returnValue = F("Am Fröschelbach");
        break;
    }
    case 16089:
    {
        returnValue = F("Am Fröschengraben");
        break;
    }
    case 16090:
    {
        returnValue = F("Am Fröschepuhl");
        break;
    }
    case 16091:
    {
        returnValue = F("Am Fröschgraben");
        break;
    }
    case 16092:
    {
        returnValue = F("Am Fröschloch");
        break;
    }
    case 16093:
    {
        returnValue = F("Am Frühanger");
        break;
    }
    case 16094:
    {
        returnValue = F("Am Frühlingsberg");
        break;
    }
    case 16095:
    {
        returnValue = F("Am Frühlingstor");
        break;
    }
    case 16096:
    {
        returnValue = F("Am Frühzaun");
        break;
    }
    case 16097:
    {
        returnValue = F("Am Fuchs");
        break;
    }
    case 16098:
    {
        returnValue = F("Am Fuchsacker");
        break;
    }
    case 16099:
    {
        returnValue = F("Am Fuchsbach");
        break;
    }
    case 16100:
    {
        returnValue = F("Am Fuchsbau");
        break;
    }
    case 16101:
    {
        returnValue = F("Am Fuchsberg");
        break;
    }
    case 16102:
    {
        returnValue = F("Am Fuchsberge");
        break;
    }
    case 16103:
    {
        returnValue = F("Am Fuchsberggraben");
        break;
    }
    case 16104:
    {
        returnValue = F("Am Fuchsbichl");
        break;
    }
    case 16105:
    {
        returnValue = F("Am Fuchsbogen");
        break;
    }
    case 16106:
    {
        returnValue = F("Am Fuchsborn");
        break;
    }
    case 16107:
    {
        returnValue = F("Am Fuchsbrunnen");
        break;
    }
    case 16108:
    {
        returnValue = F("Am Fuchsbuckel");
        break;
    }
    case 16109:
    {
        returnValue = F("Am Fuchsbühl");
        break;
    }
    case 16110:
    {
        returnValue = F("Am Fuchsenanger");
        break;
    }
    case 16111:
    {
        returnValue = F("Am Fuchsenbrunnen");
        break;
    }
    case 16112:
    {
        returnValue = F("Am Fuchsengraben");
        break;
    }
    case 16113:
    {
        returnValue = F("Am Fuchsenkeller");
        break;
    }
    case 16114:
    {
        returnValue = F("Am Fuchsfeld");
        break;
    }
    case 16115:
    {
        returnValue = F("Am Fuchsgarten");
        break;
    }
    case 16116:
    {
        returnValue = F("Am Fuchsgraben");
        break;
    }
    case 16117:
    {
        returnValue = F("Am Fuchsgrund");
        break;
    }
    case 16118:
    {
        returnValue = F("Am Fuchshang");
        break;
    }
    case 16119:
    {
        returnValue = F("Am Fuchsheck");
        break;
    }
    case 16120:
    {
        returnValue = F("Am Fuchsholz");
        break;
    }
    case 16121:
    {
        returnValue = F("Am Fuchskaul");
        break;
    }
    case 16122:
    {
        returnValue = F("Am Fuchsloch");
        break;
    }
    case 16123:
    {
        returnValue = F("Am Fuchsort");
        break;
    }
    case 16124:
    {
        returnValue = F("Am Fuchspfad");
        break;
    }
    case 16125:
    {
        returnValue = F("Am Fuchsrain");
        break;
    }
    case 16126:
    {
        returnValue = F("Am Fuchsschlag");
        break;
    }
    case 16127:
    {
        returnValue = F("Am Fuchsschwanz");
        break;
    }
    case 16128:
    {
        returnValue = F("Am Fuchsschübel");
        break;
    }
    case 16129:
    {
        returnValue = F("Am Fuchssteig");
        break;
    }
    case 16130:
    {
        returnValue = F("Am Fuchsstein");
        break;
    }
    case 16131:
    {
        returnValue = F("Am Fuchssteinach");
        break;
    }
    case 16132:
    {
        returnValue = F("Am Fuchstal");
        break;
    }
    case 16133:
    {
        returnValue = F("Am Fuchstanz");
        break;
    }
    case 16134:
    {
        returnValue = F("Am Fuchswald");
        break;
    }
    case 16135:
    {
        returnValue = F("Am Fuchsweg");
        break;
    }
    case 16136:
    {
        returnValue = F("Am Fuchszagl");
        break;
    }
    case 16137:
    {
        returnValue = F("Am Fuggereck");
        break;
    }
    case 16138:
    {
        returnValue = F("Am Fuhrbach");
        break;
    }
    case 16139:
    {
        returnValue = F("Am Fuhrenberg");
        break;
    }
    case 16140:
    {
        returnValue = F("Am Fuhrenkamp");
        break;
    }
    case 16141:
    {
        returnValue = F("Am Fuhrmannskamp");
        break;
    }
    case 16142:
    {
        returnValue = F("Am Fuhrmannsweg");
        break;
    }
    case 16143:
    {
        returnValue = F("Am Fuhrpark");
        break;
    }
    case 16144:
    {
        returnValue = F("Am Fuhrweg");
        break;
    }
    case 16145:
    {
        returnValue = F("Am Fuhsegraben");
        break;
    }
    case 16146:
    {
        returnValue = F("Am Fuhsekanal");
        break;
    }
    case 16147:
    {
        returnValue = F("Am Fuldaberg");
        break;
    }
    case 16148:
    {
        returnValue = F("Am Fuldaer Berg");
        break;
    }
    case 16149:
    {
        returnValue = F("Am Fulgenbach");
        break;
    }
    case 16150:
    {
        returnValue = F("Am Fulgensgraben");
        break;
    }
    case 16151:
    {
        returnValue = F("Am Fullacker");
        break;
    }
    case 16152:
    {
        returnValue = F("Am Funder");
        break;
    }
    case 16153:
    {
        returnValue = F("Am Fungerhof");
        break;
    }
    case 16154:
    {
        returnValue = F("Am Funkamt");
        break;
    }
    case 16155:
    {
        returnValue = F("Am Funkberg");
        break;
    }
    case 16156:
    {
        returnValue = F("Am Funken");
        break;
    }
    case 16157:
    {
        returnValue = F("Am Funkenberg");
        break;
    }
    case 16158:
    {
        returnValue = F("Am Funkenbusch");
        break;
    }
    case 16159:
    {
        returnValue = F("Am Funkenhof");
        break;
    }
    case 16160:
    {
        returnValue = F("Am Funkenplatz");
        break;
    }
    case 16161:
    {
        returnValue = F("Am Funkhaus");
        break;
    }
    case 16162:
    {
        returnValue = F("Am Funkturm");
        break;
    }
    case 16163:
    {
        returnValue = F("Am Furlbach");
        break;
    }
    case 16164:
    {
        returnValue = F("Am Furt");
        break;
    }
    case 16165:
    {
        returnValue = F("Am Furtfeld");
        break;
    }
    case 16166:
    {
        returnValue = F("Am Furth");
        break;
    }
    case 16167:
    {
        returnValue = F("Am Further Feld");
        break;
    }
    case 16168:
    {
        returnValue = F("Am Furthweg");
        break;
    }
    case 16169:
    {
        returnValue = F("Am Fusseloch");
        break;
    }
    case 16170:
    {
        returnValue = F("Am Futteracker");
        break;
    }
    case 16171:
    {
        returnValue = F("Am Futtergarten");
        break;
    }
    case 16172:
    {
        returnValue = F("Am Fußberg");
        break;
    }
    case 16173:
    {
        returnValue = F("Am Fußenbühl");
        break;
    }
    case 16174:
    {
        returnValue = F("Am Fußfall");
        break;
    }
    case 16175:
    {
        returnValue = F("Am Fußgraben");
        break;
    }
    case 16176:
    {
        returnValue = F("Am Fußpfad");
        break;
    }
    case 16177:
    {
        returnValue = F("Am Fußweg");
        break;
    }
    case 16178:
    {
        returnValue = F("Am Fußweg nach Auerbach");
        break;
    }
    case 16179:
    {
        returnValue = F("Am Fähranleger");
        break;
    }
    case 16180:
    {
        returnValue = F("Am Fährberg");
        break;
    }
    case 16181:
    {
        returnValue = F("Am Fährdorfer Berg");
        break;
    }
    case 16182:
    {
        returnValue = F("Am Fährkanal");
        break;
    }
    case 16183:
    {
        returnValue = F("Am Fährsee");
        break;
    }
    case 16184:
    {
        returnValue = F("Am Fährsteig");
        break;
    }
    case 16185:
    {
        returnValue = F("Am Fährturm");
        break;
    }
    case 16186:
    {
        returnValue = F("Am Fährweg");
        break;
    }
    case 16187:
    {
        returnValue = F("Am Fälltor");
        break;
    }
    case 16188:
    {
        returnValue = F("Am Fänger");
        break;
    }
    case 16189:
    {
        returnValue = F("Am Färberbach");
        break;
    }
    case 16190:
    {
        returnValue = F("Am Färberhof");
        break;
    }
    case 16191:
    {
        returnValue = F("Am Färberweg");
        break;
    }
    case 16192:
    {
        returnValue = F("Am Färberwerder");
        break;
    }
    case 16193:
    {
        returnValue = F("Am Färbgraben");
        break;
    }
    case 16194:
    {
        returnValue = F("Am Fäßlesgrund");
        break;
    }
    case 16195:
    {
        returnValue = F("Am Föhr");
        break;
    }
    case 16196:
    {
        returnValue = F("Am Föhrden");
        break;
    }
    case 16197:
    {
        returnValue = F("Am Föhrenanger");
        break;
    }
    case 16198:
    {
        returnValue = F("Am Föhrenberg");
        break;
    }
    case 16199:
    {
        returnValue = F("Am Föhrenbusch");
        break;
    }
    case 16200:
    {
        returnValue = F("Am Föhrenhang");
        break;
    }
    case 16201:
    {
        returnValue = F("Am Föhrenried");
        break;
    }
    case 16202:
    {
        returnValue = F("Am Föhrenwald");
        break;
    }
    case 16203:
    {
        returnValue = F("Am Föhrenweg");
        break;
    }
    case 16204:
    {
        returnValue = F("Am Föhringer Hang");
        break;
    }
    case 16205:
    {
        returnValue = F("Am Föllbach");
        break;
    }
    case 16206:
    {
        returnValue = F("Am Föllenpool");
        break;
    }
    case 16207:
    {
        returnValue = F("Am Förchensee");
        break;
    }
    case 16208:
    {
        returnValue = F("Am Förchet");
        break;
    }
    case 16209:
    {
        returnValue = F("Am Fördehang");
        break;
    }
    case 16210:
    {
        returnValue = F("Am Förderturm");
        break;
    }
    case 16211:
    {
        returnValue = F("Am Fördewald");
        break;
    }
    case 16212:
    {
        returnValue = F("Am Föritzgrund");
        break;
    }
    case 16213:
    {
        returnValue = F("Am Förstchen");
        break;
    }
    case 16214:
    {
        returnValue = F("Am Försteracker");
        break;
    }
    case 16215:
    {
        returnValue = F("Am Försterahl");
        break;
    }
    case 16216:
    {
        returnValue = F("Am Försterbach");
        break;
    }
    case 16217:
    {
        returnValue = F("Am Försterberg");
        break;
    }
    case 16218:
    {
        returnValue = F("Am Försterborn");
        break;
    }
    case 16219:
    {
        returnValue = F("Am Försterbrink");
        break;
    }
    case 16220:
    {
        returnValue = F("Am Försterbrunnen");
        break;
    }
    case 16221:
    {
        returnValue = F("Am Förstereck");
        break;
    }
    case 16222:
    {
        returnValue = F("Am Förstergarten");
        break;
    }
    case 16223:
    {
        returnValue = F("Am Försterhain");
        break;
    }
    case 16224:
    {
        returnValue = F("Am Försterhof");
        break;
    }
    case 16225:
    {
        returnValue = F("Am Försterholz");
        break;
    }
    case 16226:
    {
        returnValue = F("Am Försterhäuschen");
        break;
    }
    case 16227:
    {
        returnValue = F("Am Försterkamp");
        break;
    }
    case 16228:
    {
        returnValue = F("Am Försterkopf");
        break;
    }
    case 16229:
    {
        returnValue = F("Am Försterland");
        break;
    }
    case 16230:
    {
        returnValue = F("Am Försterplan");
        break;
    }
    case 16231:
    {
        returnValue = F("Am Förstersteig");
        break;
    }
    case 16232:
    {
        returnValue = F("Am Försterteich");
        break;
    }
    case 16233:
    {
        returnValue = F("Am Försterweg");
        break;
    }
    case 16234:
    {
        returnValue = F("Am Förstle");
        break;
    }
    case 16235:
    {
        returnValue = F("Am Förtgesgraben");
        break;
    }
    case 16236:
    {
        returnValue = F("Am Förthacker");
        break;
    }
    case 16237:
    {
        returnValue = F("Am Föscherberg");
        break;
    }
    case 16238:
    {
        returnValue = F("Am Fössebarg");
        break;
    }
    case 16239:
    {
        returnValue = F("Am Füerboll");
        break;
    }
    case 16240:
    {
        returnValue = F("Am Fügenberg");
        break;
    }
    case 16241:
    {
        returnValue = F("Am Fügweg");
        break;
    }
    case 16242:
    {
        returnValue = F("Am Führring");
        break;
    }
    case 16243:
    {
        returnValue = F("Am Füllbach");
        break;
    }
    case 16244:
    {
        returnValue = F("Am Füllbusch");
        break;
    }
    case 16245:
    {
        returnValue = F("Am Füllenberg");
        break;
    }
    case 16246:
    {
        returnValue = F("Am Füllenfeld");
        break;
    }
    case 16247:
    {
        returnValue = F("Am Füllengarten");
        break;
    }
    case 16248:
    {
        returnValue = F("Am Füllenhof");
        break;
    }
    case 16249:
    {
        returnValue = F("Am Füllenstall");
        break;
    }
    case 16250:
    {
        returnValue = F("Am Füllgarten");
        break;
    }
    case 16251:
    {
        returnValue = F("Am Füllgraben");
        break;
    }
    case 16252:
    {
        returnValue = F("Am Füllort");
        break;
    }
    case 16253:
    {
        returnValue = F("Am Fümmelsee");
        break;
    }
    case 16254:
    {
        returnValue = F("Am Fünderich");
        break;
    }
    case 16255:
    {
        returnValue = F("Am Fündgraben");
        break;
    }
    case 16256:
    {
        returnValue = F("Am Fünfruthenberg");
        break;
    }
    case 16257:
    {
        returnValue = F("Am Fünftdiemenland");
        break;
    }
    case 16258:
    {
        returnValue = F("Am Fünneken");
        break;
    }
    case 16259:
    {
        returnValue = F("Am Fürbek");
        break;
    }
    case 16260:
    {
        returnValue = F("Am Fürberg");
        break;
    }
    case 16261:
    {
        returnValue = F("Am Fürgebrüchsweg");
        break;
    }
    case 16262:
    {
        returnValue = F("Am Fürgenbach");
        break;
    }
    case 16263:
    {
        returnValue = F("Am Fürholz");
        break;
    }
    case 16264:
    {
        returnValue = F("Am Fürst");
        break;
    }
    case 16265:
    {
        returnValue = F("Am Fürstberg");
        break;
    }
    case 16266:
    {
        returnValue = F("Am Fürstenberg");
        break;
    }
    case 16267:
    {
        returnValue = F("Am Fürstenbrunnen");
        break;
    }
    case 16268:
    {
        returnValue = F("Am Fürstenbrünnchen");
        break;
    }
    case 16269:
    {
        returnValue = F("Am Fürstenburgwall");
        break;
    }
    case 16270:
    {
        returnValue = F("Am Fürstenfeld");
        break;
    }
    case 16271:
    {
        returnValue = F("Am Fürstengarten");
        break;
    }
    case 16272:
    {
        returnValue = F("Am Fürstengrab");
        break;
    }
    case 16273:
    {
        returnValue = F("Am Fürstenhof");
        break;
    }
    case 16274:
    {
        returnValue = F("Am Fürstenholz");
        break;
    }
    case 16275:
    {
        returnValue = F("Am Fürstenhuther Stollen");
        break;
    }
    case 16276:
    {
        returnValue = F("Am Fürstenwald");
        break;
    }
    case 16277:
    {
        returnValue = F("Am Fürstenwall");
        break;
    }
    case 16278:
    {
        returnValue = F("Am Fürstenweg");
        break;
    }
    case 16279:
    {
        returnValue = F("Am Fürterfeld");
        break;
    }
    case 16280:
    {
        returnValue = F("Am Füsseberg");
        break;
    }
    case 16281:
    {
        returnValue = F("Am Füssig");
        break;
    }
    case 16282:
    {
        returnValue = F("Am G'haubach");
        break;
    }
    case 16283:
    {
        returnValue = F("Am Gabelacker");
        break;
    }
    case 16284:
    {
        returnValue = F("Am Gabelsee");
        break;
    }
    case 16285:
    {
        returnValue = F("Am Gabis");
        break;
    }
    case 16286:
    {
        returnValue = F("Am Gabler");
        break;
    }
    case 16287:
    {
        returnValue = F("Am Gagelstrauch");
        break;
    }
    case 16288:
    {
        returnValue = F("Am Gahlenzbach");
        break;
    }
    case 16289:
    {
        returnValue = F("Am Gahlert");
        break;
    }
    case 16290:
    {
        returnValue = F("Am Gaiberg");
        break;
    }
    case 16291:
    {
        returnValue = F("Am Gailberg");
        break;
    }
    case 16292:
    {
        returnValue = F("Am Gailbergle");
        break;
    }
    case 16293:
    {
        returnValue = F("Am Gailer");
        break;
    }
    case 16294:
    {
        returnValue = F("Am Gailing");
        break;
    }
    case 16295:
    {
        returnValue = F("Am Gaisbach");
        break;
    }
    case 16296:
    {
        returnValue = F("Am Gaisberg");
        break;
    }
    case 16297:
    {
        returnValue = F("Am Gaisbügel");
        break;
    }
    case 16298:
    {
        returnValue = F("Am Gaisbühl");
        break;
    }
    case 16299:
    {
        returnValue = F("Am Gaishof");
        break;
    }
    case 16300:
    {
        returnValue = F("Am Gaisspitzen");
        break;
    }
    case 16301:
    {
        returnValue = F("Am Gaißberg");
        break;
    }
    case 16302:
    {
        returnValue = F("Am Galenberg");
        break;
    }
    case 16303:
    {
        returnValue = F("Am Galenhof");
        break;
    }
    case 16304:
    {
        returnValue = F("Am Galetschbach");
        break;
    }
    case 16305:
    {
        returnValue = F("Am Galgbrunnen");
        break;
    }
    case 16306:
    {
        returnValue = F("Am Galgen");
        break;
    }
    case 16307:
    {
        returnValue = F("Am Galgenacker");
        break;
    }
    case 16308:
    {
        returnValue = F("Am Galgenanger");
        break;
    }
    case 16309:
    {
        returnValue = F("Am Galgenbach");
        break;
    }
    case 16310:
    {
        returnValue = F("Am Galgenberg");
        break;
    }
    case 16311:
    {
        returnValue = F("Am Galgenberg Dorf 11");
        break;
    }
    case 16312:
    {
        returnValue = F("Am Galgenbrink");
        break;
    }
    case 16313:
    {
        returnValue = F("Am Galgenbrunnen");
        break;
    }
    case 16314:
    {
        returnValue = F("Am Galgenbuck");
        break;
    }
    case 16315:
    {
        returnValue = F("Am Galgenbuckel");
        break;
    }
    case 16316:
    {
        returnValue = F("Am Galgenbusch");
        break;
    }
    case 16317:
    {
        returnValue = F("Am Galgenbühl");
        break;
    }
    case 16318:
    {
        returnValue = F("Am Galgendriesch");
        break;
    }
    case 16319:
    {
        returnValue = F("Am Galgendyck");
        break;
    }
    case 16320:
    {
        returnValue = F("Am Galgenfeld");
        break;
    }
    case 16321:
    {
        returnValue = F("Am Galgengraben");
        break;
    }
    case 16322:
    {
        returnValue = F("Am Galgengrund");
        break;
    }
    case 16323:
    {
        returnValue = F("Am Galgengrüble");
        break;
    }
    case 16324:
    {
        returnValue = F("Am Galgenhagen");
        break;
    }
    case 16325:
    {
        returnValue = F("Am Galgenholz");
        break;
    }
    case 16326:
    {
        returnValue = F("Am Galgenhölzl");
        break;
    }
    case 16327:
    {
        returnValue = F("Am Galgenhügel");
        break;
    }
    case 16328:
    {
        returnValue = F("Am Galgenkamp");
        break;
    }
    case 16329:
    {
        returnValue = F("Am Galgenköppel");
        break;
    }
    case 16330:
    {
        returnValue = F("Am Galgenküppel");
        break;
    }
    case 16331:
    {
        returnValue = F("Am Galgenmoor");
        break;
    }
    case 16332:
    {
        returnValue = F("Am Galgenrangen");
        break;
    }
    case 16333:
    {
        returnValue = F("Am Galgensberg");
        break;
    }
    case 16334:
    {
        returnValue = F("Am Galgensee");
        break;
    }
    case 16335:
    {
        returnValue = F("Am Galgental");
        break;
    }
    case 16336:
    {
        returnValue = F("Am Galgenturm");
        break;
    }
    case 16337:
    {
        returnValue = F("Am Galgenwald");
        break;
    }
    case 16338:
    {
        returnValue = F("Am Galgesch");
        break;
    }
    case 16339:
    {
        returnValue = F("Am Galget");
        break;
    }
    case 16340:
    {
        returnValue = F("Am Galgsberg");
        break;
    }
    case 16341:
    {
        returnValue = F("Am Gallberg");
        break;
    }
    case 16342:
    {
        returnValue = F("Am Gallbrunnen");
        break;
    }
    case 16343:
    {
        returnValue = F("Am Gallekamp");
        break;
    }
    case 16344:
    {
        returnValue = F("Am Gallenbach");
        break;
    }
    case 16345:
    {
        returnValue = F("Am Gallenberg");
        break;
    }
    case 16346:
    {
        returnValue = F("Am Gallengraben");
        break;
    }
    case 16347:
    {
        returnValue = F("Am Gallenkamp");
        break;
    }
    case 16348:
    {
        returnValue = F("Am Gallerberg");
        break;
    }
    case 16349:
    {
        returnValue = F("Am Gallichten");
        break;
    }
    case 16350:
    {
        returnValue = F("Am Galling");
        break;
    }
    case 16351:
    {
        returnValue = F("Am Gallun");
        break;
    }
    case 16352:
    {
        returnValue = F("Am Galluswiesle");
        break;
    }
    case 16353:
    {
        returnValue = F("Am Gallweg");
        break;
    }
    case 16354:
    {
        returnValue = F("Am Gambachsweiher");
        break;
    }
    case 16355:
    {
        returnValue = F("Am Gamberg");
        break;
    }
    case 16356:
    {
        returnValue = F("Am Gamelberg");
        break;
    }
    case 16357:
    {
        returnValue = F("Am Gamensee");
        break;
    }
    case 16358:
    {
        returnValue = F("Am Gammelfeld");
        break;
    }
    case 16359:
    {
        returnValue = F("Am Gammertinger Weg");
        break;
    }
    case 16360:
    {
        returnValue = F("Am Gang");
        break;
    }
    case 16361:
    {
        returnValue = F("Am Gange");
        break;
    }
    case 16362:
    {
        returnValue = F("Am Gangelweiher");
        break;
    }
    case 16363:
    {
        returnValue = F("Am Gangolfiberg");
        break;
    }
    case 16364:
    {
        returnValue = F("Am Gangolfsberg");
        break;
    }
    case 16365:
    {
        returnValue = F("Am Gangsteig");
        break;
    }
    case 16366:
    {
        returnValue = F("Am Gannaberg");
        break;
    }
    case 16367:
    {
        returnValue = F("Am Gansacker");
        break;
    }
    case 16368:
    {
        returnValue = F("Am Gansberg");
        break;
    }
    case 16369:
    {
        returnValue = F("Am Gansbuck");
        break;
    }
    case 16370:
    {
        returnValue = F("Am Gansgraben");
        break;
    }
    case 16371:
    {
        returnValue = F("Am Gansiegen");
        break;
    }
    case 16372:
    {
        returnValue = F("Am Gansper Deich");
        break;
    }
    case 16373:
    {
        returnValue = F("Am Gansreis");
        break;
    }
    case 16374:
    {
        returnValue = F("Am Ganswasen");
        break;
    }
    case 16375:
    {
        returnValue = F("Am Gansweg");
        break;
    }
    case 16376:
    {
        returnValue = F("Am Ganter");
        break;
    }
    case 16377:
    {
        returnValue = F("Am Ganzacker");
        break;
    }
    case 16378:
    {
        returnValue = F("Am Garbbichl");
        break;
    }
    case 16379:
    {
        returnValue = F("Am Gardumshof");
        break;
    }
    case 16380:
    {
        returnValue = F("Am Garnisonsplatz");
        break;
    }
    case 16381:
    {
        returnValue = F("Am Gart");
        break;
    }
    case 16382:
    {
        returnValue = F("Am Garten");
        break;
    }
    case 16383:
    {
        returnValue = F("Am Gartenacker");
        break;
    }
    case 16384:
    {
        returnValue = F("Am Gartenbach");
        break;
    }
    case 16385:
    {
        returnValue = F("Am Gartenbad");
        break;
    }
    case 16386:
    {
        returnValue = F("Am Gartenbau");
        break;
    }
    case 16387:
    {
        returnValue = F("Am Gartenberg");
        break;
    }
    case 16388:
    {
        returnValue = F("Am Gartenbusch");
        break;
    }
    case 16389:
    {
        returnValue = F("Am Garteneck");
        break;
    }
    case 16390:
    {
        returnValue = F("Am Gartenfeld");
        break;
    }
    case 16391:
    {
        returnValue = F("Am Gartenhang");
        break;
    }
    case 16392:
    {
        returnValue = F("Am Gartenheim");
        break;
    }
    case 16393:
    {
        returnValue = F("Am Gartenhügel");
        break;
    }
    case 16394:
    {
        returnValue = F("Am Gartenkeller");
        break;
    }
    case 16395:
    {
        returnValue = F("Am Gartennest");
        break;
    }
    case 16396:
    {
        returnValue = F("Am Gartenpfad");
        break;
    }
    case 16397:
    {
        returnValue = F("Am Gartenrain");
        break;
    }
    case 16398:
    {
        returnValue = F("Am Gartenschwimmbad");
        break;
    }
    case 16399:
    {
        returnValue = F("Am Gartensteig");
        break;
    }
    case 16400:
    {
        returnValue = F("Am Gartenstück");
        break;
    }
    case 16401:
    {
        returnValue = F("Am Gartenteich");
        break;
    }
    case 16402:
    {
        returnValue = F("Am Gartenweg");
        break;
    }
    case 16403:
    {
        returnValue = F("Am Gartenwinkel");
        break;
    }
    case 16404:
    {
        returnValue = F("Am Gasberg");
        break;
    }
    case 16405:
    {
        returnValue = F("Am Gashof");
        break;
    }
    case 16406:
    {
        returnValue = F("Am Gaskessel");
        break;
    }
    case 16407:
    {
        returnValue = F("Am Gasometer");
        break;
    }
    case 16408:
    {
        returnValue = F("Am Gassacker");
        break;
    }
    case 16409:
    {
        returnValue = F("Am Gasselberge");
        break;
    }
    case 16410:
    {
        returnValue = F("Am Gasselfeld");
        break;
    }
    case 16411:
    {
        returnValue = F("Am Gassenacker");
        break;
    }
    case 16412:
    {
        returnValue = F("Am Gassenbrunnen");
        break;
    }
    case 16413:
    {
        returnValue = F("Am Gassenfeld");
        break;
    }
    case 16414:
    {
        returnValue = F("Am Gassengarten");
        break;
    }
    case 16415:
    {
        returnValue = F("Am Gassenkopf");
        break;
    }
    case 16416:
    {
        returnValue = F("Am Gassenrain");
        break;
    }
    case 16417:
    {
        returnValue = F("Am Gassensee");
        break;
    }
    case 16418:
    {
        returnValue = F("Am Gassenteich");
        break;
    }
    case 16419:
    {
        returnValue = F("Am Gassenweg");
        break;
    }
    case 16420:
    {
        returnValue = F("Am Gassl");
        break;
    }
    case 16421:
    {
        returnValue = F("Am Gasteig");
        break;
    }
    case 16422:
    {
        returnValue = F("Am Gastenkamp");
        break;
    }
    case 16423:
    {
        returnValue = F("Am Gaster Berg");
        break;
    }
    case 16424:
    {
        returnValue = F("Am Gasterfelderholz");
        break;
    }
    case 16425:
    {
        returnValue = F("Am Gastes");
        break;
    }
    case 16426:
    {
        returnValue = F("Am Gasthaus");
        break;
    }
    case 16427:
    {
        returnValue = F("Am Gasthausbach");
        break;
    }
    case 16428:
    {
        returnValue = F("Am Gasthof");
        break;
    }
    case 16429:
    {
        returnValue = F("Am Gasthofe");
        break;
    }
    case 16430:
    {
        returnValue = F("Am Gastland");
        break;
    }
    case 16431:
    {
        returnValue = F("Am Gaswerk");
        break;
    }
    case 16432:
    {
        returnValue = F("Am Gather Hof");
        break;
    }
    case 16433:
    {
        returnValue = F("Am Gatherfeld");
        break;
    }
    case 16434:
    {
        returnValue = F("Am Gatter");
        break;
    }
    case 16435:
    {
        returnValue = F("Am Gatterberg");
        break;
    }
    case 16436:
    {
        returnValue = F("Am Gatterlosenberg");
        break;
    }
    case 16437:
    {
        returnValue = F("Am Gatterltürl");
        break;
    }
    case 16438:
    {
        returnValue = F("Am Gattertor");
        break;
    }
    case 16439:
    {
        returnValue = F("Am Gau");
        break;
    }
    case 16440:
    {
        returnValue = F("Am Gaubach");
        break;
    }
    case 16441:
    {
        returnValue = F("Am Gaubert");
        break;
    }
    case 16442:
    {
        returnValue = F("Am Gauger");
        break;
    }
    case 16443:
    {
        returnValue = F("Am Gaukesberg");
        break;
    }
    case 16444:
    {
        returnValue = F("Am Gaulbach");
        break;
    }
    case 16445:
    {
        returnValue = F("Am Gaulskopf");
        break;
    }
    case 16446:
    {
        returnValue = F("Am Gaurech");
        break;
    }
    case 16447:
    {
        returnValue = F("Am Gausediek");
        break;
    }
    case 16448:
    {
        returnValue = F("Am Gausepohl");
        break;
    }
    case 16449:
    {
        returnValue = F("Am Gauzer Tor");
        break;
    }
    case 16450:
    {
        returnValue = F("Am Gaxberg");
        break;
    }
    case 16451:
    {
        returnValue = F("Am Gaßfeld");
        break;
    }
    case 16452:
    {
        returnValue = F("Am Gaßl");
        break;
    }
    case 16453:
    {
        returnValue = F("Am Geberschfeld");
        break;
    }
    case 16454:
    {
        returnValue = F("Am Gebersfeld");
        break;
    }
    case 16455:
    {
        returnValue = F("Am Gebersthal");
        break;
    }
    case 16456:
    {
        returnValue = F("Am Gebhardsberg");
        break;
    }
    case 16457:
    {
        returnValue = F("Am Gebind");
        break;
    }
    case 16458:
    {
        returnValue = F("Am Gebirge");
        break;
    }
    case 16459:
    {
        returnValue = F("Am Gebr.-Walther-Weg");
        break;
    }
    case 16460:
    {
        returnValue = F("Am Gebrannten Hof");
        break;
    }
    case 16461:
    {
        returnValue = F("Am Gebrannten Holz");
        break;
    }
    case 16462:
    {
        returnValue = F("Am Gebreite");
        break;
    }
    case 16463:
    {
        returnValue = F("Am Gebräun");
        break;
    }
    case 16464:
    {
        returnValue = F("Am Gebörn");
        break;
    }
    case 16465:
    {
        returnValue = F("Am Gebück");
        break;
    }
    case 16466:
    {
        returnValue = F("Am Gecksbach");
        break;
    }
    case 16467:
    {
        returnValue = F("Am Gedenkstein");
        break;
    }
    case 16468:
    {
        returnValue = F("Am Gedersberg");
        break;
    }
    case 16469:
    {
        returnValue = F("Am Geelen");
        break;
    }
    case 16470:
    {
        returnValue = F("Am Geelkamp");
        break;
    }
    case 16471:
    {
        returnValue = F("Am Geenenforst");
        break;
    }
    case 16472:
    {
        returnValue = F("Am Geeren");
        break;
    }
    case 16473:
    {
        returnValue = F("Am Geeschendamm");
        break;
    }
    case 16474:
    {
        returnValue = F("Am Geestebogen");
        break;
    }
    case 16475:
    {
        returnValue = F("Am Geestefelder Weg");
        break;
    }
    case 16476:
    {
        returnValue = F("Am Geesthang");
        break;
    }
    case 16477:
    {
        returnValue = F("Am Geesthof");
        break;
    }
    case 16478:
    {
        returnValue = F("Am Geestkamp");
        break;
    }
    case 16479:
    {
        returnValue = F("Am Geestrand");
        break;
    }
    case 16480:
    {
        returnValue = F("Am Geestrandgraben");
        break;
    }
    case 16481:
    {
        returnValue = F("Am Geesttor");
        break;
    }
    case 16482:
    {
        returnValue = F("Am Geestweg");
        break;
    }
    case 16483:
    {
        returnValue = F("Am Gefach");
        break;
    }
    case 16484:
    {
        returnValue = F("Am Geflügelhof");
        break;
    }
    case 16485:
    {
        returnValue = F("Am Gefrierhaus");
        break;
    }
    case 16486:
    {
        returnValue = F("Am Gefäll");
        break;
    }
    case 16487:
    {
        returnValue = F("Am Gefängnishof");
        break;
    }
    case 16488:
    {
        returnValue = F("Am Gehag");
        break;
    }
    case 16489:
    {
        returnValue = F("Am Gehaid");
        break;
    }
    case 16490:
    {
        returnValue = F("Am Geheeg");
        break;
    }
    case 16491:
    {
        returnValue = F("Am Geheegberg");
        break;
    }
    case 16492:
    {
        returnValue = F("Am Geheg");
        break;
    }
    case 16493:
    {
        returnValue = F("Am Gehege");
        break;
    }
    case 16494:
    {
        returnValue = F("Am Gehegeteich");
        break;
    }
    case 16495:
    {
        returnValue = F("Am Gehenberg");
        break;
    }
    case 16496:
    {
        returnValue = F("Am Gehlberg");
        break;
    }
    case 16497:
    {
        returnValue = F("Am Gehlenbach");
        break;
    }
    case 16498:
    {
        returnValue = F("Am Gehnesch");
        break;
    }
    case 16499:
    {
        returnValue = F("Am Gehracker");
        break;
    }
    case 16500:
    {
        returnValue = F("Am Gehre");
        break;
    }
    case 16501:
    {
        returnValue = F("Am Gehren");
        break;
    }
    case 16502:
    {
        returnValue = F("Am Gehren Anger");
        break;
    }
    case 16503:
    {
        returnValue = F("Am Gehrenbach");
        break;
    }
    case 16504:
    {
        returnValue = F("Am Gehrenberg");
        break;
    }
    case 16505:
    {
        returnValue = F("Am Gehrenfeld");
        break;
    }
    case 16506:
    {
        returnValue = F("Am Gehrengraben");
        break;
    }
    case 16507:
    {
        returnValue = F("Am Gehrenhof");
        break;
    }
    case 16508:
    {
        returnValue = F("Am Gehrenkamp");
        break;
    }
    case 16509:
    {
        returnValue = F("Am Gehrenrain");
        break;
    }
    case 16510:
    {
        returnValue = F("Am Gehring");
        break;
    }
    case 16511:
    {
        returnValue = F("Am Gehrkamp");
        break;
    }
    case 16512:
    {
        returnValue = F("Am Gehädrich");
        break;
    }
    case 16513:
    {
        returnValue = F("Am Gehäg");
        break;
    }
    case 16514:
    {
        returnValue = F("Am Gehäge");
        break;
    }
    case 16515:
    {
        returnValue = F("Am Gehäu");
        break;
    }
    case 16516:
    {
        returnValue = F("Am Gehäule");
        break;
    }
    case 16517:
    {
        returnValue = F("Am Gehäuwald");
        break;
    }
    case 16518:
    {
        returnValue = F("Am Gehöft");
        break;
    }
    case 16519:
    {
        returnValue = F("Am Gehölz");
        break;
    }
    case 16520:
    {
        returnValue = F("Am Geierberg");
        break;
    }
    case 16521:
    {
        returnValue = F("Am Geierbusch");
        break;
    }
    case 16522:
    {
        returnValue = F("Am Geiersbach");
        break;
    }
    case 16523:
    {
        returnValue = F("Am Geiersberg");
        break;
    }
    case 16524:
    {
        returnValue = F("Am Geiersbrunnen");
        break;
    }
    case 16525:
    {
        returnValue = F("Am Geiersbühl");
        break;
    }
    case 16526:
    {
        returnValue = F("Am Geiersgraben");
        break;
    }
    case 16527:
    {
        returnValue = F("Am Geigenberg");
        break;
    }
    case 16528:
    {
        returnValue = F("Am Geigenbüchel");
        break;
    }
    case 16529:
    {
        returnValue = F("Am Geigenrain");
        break;
    }
    case 16530:
    {
        returnValue = F("Am Geiger");
        break;
    }
    case 16531:
    {
        returnValue = F("Am Geigersberg");
        break;
    }
    case 16532:
    {
        returnValue = F("Am Geigersbuck");
        break;
    }
    case 16533:
    {
        returnValue = F("Am Geijtenhögel");
        break;
    }
    case 16534:
    {
        returnValue = F("Am Geilenbek");
        break;
    }
    case 16535:
    {
        returnValue = F("Am Geisbaum");
        break;
    }
    case 16536:
    {
        returnValue = F("Am Geisberg");
        break;
    }
    case 16537:
    {
        returnValue = F("Am Geisbichel");
        break;
    }
    case 16538:
    {
        returnValue = F("Am Geiselbach");
        break;
    }
    case 16539:
    {
        returnValue = F("Am Geiselstein");
        break;
    }
    case 16540:
    {
        returnValue = F("Am Geisenberg");
        break;
    }
    case 16541:
    {
        returnValue = F("Am Geisenfeld");
        break;
    }
    case 16542:
    {
        returnValue = F("Am Geisert");
        break;
    }
    case 16543:
    {
        returnValue = F("Am Geisfeld");
        break;
    }
    case 16544:
    {
        returnValue = F("Am Geisgalgen");
        break;
    }
    case 16545:
    {
        returnValue = F("Am Geisgen");
        break;
    }
    case 16546:
    {
        returnValue = F("Am Geisgraben");
        break;
    }
    case 16547:
    {
        returnValue = F("Am Geisheckenwald");
        break;
    }
    case 16548:
    {
        returnValue = F("Am Geishof");
        break;
    }
    case 16549:
    {
        returnValue = F("Am Geisküppel");
        break;
    }
    case 16550:
    {
        returnValue = F("Am Geislbacher Feld");
        break;
    }
    case 16551:
    {
        returnValue = F("Am Geislerberg");
        break;
    }
    case 16552:
    {
        returnValue = F("Am Geislinger Weg");
        break;
    }
    case 16553:
    {
        returnValue = F("Am Geispitzheimer Hof");
        break;
    }
    case 16554:
    {
        returnValue = F("Am Geisrain");
        break;
    }
    case 16555:
    {
        returnValue = F("Am Geisrech");
        break;
    }
    case 16556:
    {
        returnValue = F("Am Geissberg");
        break;
    }
    case 16557:
    {
        returnValue = F("Am Geissbühl");
        break;
    }
    case 16558:
    {
        returnValue = F("Am Geissler");
        break;
    }
    case 16559:
    {
        returnValue = F("Am Geist");
        break;
    }
    case 16560:
    {
        returnValue = F("Am Geistbaum");
        break;
    }
    case 16561:
    {
        returnValue = F("Am Geistbäumle");
        break;
    }
    case 16562:
    {
        returnValue = F("Am Geistfeld");
        break;
    }
    case 16563:
    {
        returnValue = F("Am Geisthof");
        break;
    }
    case 16564:
    {
        returnValue = F("Am Geisweg");
        break;
    }
    case 16565:
    {
        returnValue = F("Am Geiswiesenfeld");
        break;
    }
    case 16566:
    {
        returnValue = F("Am Geißacker");
        break;
    }
    case 16567:
    {
        returnValue = F("Am Geißberg");
        break;
    }
    case 16568:
    {
        returnValue = F("Am Geißbuck");
        break;
    }
    case 16569:
    {
        returnValue = F("Am Geißbuckel");
        break;
    }
    case 16570:
    {
        returnValue = F("Am Geißbusch");
        break;
    }
    case 16571:
    {
        returnValue = F("Am Geißbühl");
        break;
    }
    case 16572:
    {
        returnValue = F("Am Geißert");
        break;
    }
    case 16573:
    {
        returnValue = F("Am Geißet");
        break;
    }
    case 16574:
    {
        returnValue = F("Am Geißgarten");
        break;
    }
    case 16575:
    {
        returnValue = F("Am Geißgraben");
        break;
    }
    case 16576:
    {
        returnValue = F("Am Geißleitenbuck");
        break;
    }
    case 16577:
    {
        returnValue = F("Am Geißler");
        break;
    }
    case 16578:
    {
        returnValue = F("Am Geißlerbach");
        break;
    }
    case 16579:
    {
        returnValue = F("Am Geißrain");
        break;
    }
    case 16580:
    {
        returnValue = F("Am Geißrech");
        break;
    }
    case 16581:
    {
        returnValue = F("Am Gelbbrunnen");
        break;
    }
    case 16582:
    {
        returnValue = F("Am Gelben Berg");
        break;
    }
    case 16583:
    {
        returnValue = F("Am Gelben Brunnen");
        break;
    }
    case 16584:
    {
        returnValue = F("Am Gelben Haus");
        break;
    }
    case 16585:
    {
        returnValue = F("Am Gelben Wasser");
        break;
    }
    case 16586:
    {
        returnValue = F("Am Gelbenstein");
        break;
    }
    case 16587:
    {
        returnValue = F("Am Geldacker");
        break;
    }
    case 16588:
    {
        returnValue = F("Am Geldermannshof");
        break;
    }
    case 16589:
    {
        returnValue = F("Am Geldloch");
        break;
    }
    case 16590:
    {
        returnValue = F("Am Geleise");
        break;
    }
    case 16591:
    {
        returnValue = F("Am Gelenn");
        break;
    }
    case 16592:
    {
        returnValue = F("Am Gelinde");
        break;
    }
    case 16593:
    {
        returnValue = F("Am Gelleborn");
        break;
    }
    case 16594:
    {
        returnValue = F("Am Gellenbach");
        break;
    }
    case 16595:
    {
        returnValue = F("Am Geller");
        break;
    }
    case 16596:
    {
        returnValue = F("Am Gellert");
        break;
    }
    case 16597:
    {
        returnValue = F("Am Gellmannsrödchen");
        break;
    }
    case 16598:
    {
        returnValue = F("Am Gelskamp");
        break;
    }
    case 16599:
    {
        returnValue = F("Am Gelände");
        break;
    }
    case 16600:
    {
        returnValue = F("Am Gemeindeamt");
        break;
    }
    case 16601:
    {
        returnValue = F("Am Gemeindebad");
        break;
    }
    case 16602:
    {
        returnValue = F("Am Gemeindebeet");
        break;
    }
    case 16603:
    {
        returnValue = F("Am Gemeindeberg");
        break;
    }
    case 16604:
    {
        returnValue = F("Am Gemeindebirnbaum");
        break;
    }
    case 16605:
    {
        returnValue = F("Am Gemeindebrunnen");
        break;
    }
    case 16606:
    {
        returnValue = F("Am Gemeindebusch");
        break;
    }
    case 16607:
    {
        returnValue = F("Am Gemeindebüro");
        break;
    }
    case 16608:
    {
        returnValue = F("Am Gemeindegarten");
        break;
    }
    case 16609:
    {
        returnValue = F("Am Gemeindegehren");
        break;
    }
    case 16610:
    {
        returnValue = F("Am Gemeindegraben");
        break;
    }
    case 16611:
    {
        returnValue = F("Am Gemeindegut");
        break;
    }
    case 16612:
    {
        returnValue = F("Am Gemeindehaus");
        break;
    }
    case 16613:
    {
        returnValue = F("Am Gemeindehof");
        break;
    }
    case 16614:
    {
        returnValue = F("Am Gemeindeholz");
        break;
    }
    case 16615:
    {
        returnValue = F("Am Gemeindekamp");
        break;
    }
    case 16616:
    {
        returnValue = F("Am Gemeinderasen");
        break;
    }
    case 16617:
    {
        returnValue = F("Am Gemeindeteich");
        break;
    }
    case 16618:
    {
        returnValue = F("Am Gemeindeteich 1, 3, 5");
        break;
    }
    case 16619:
    {
        returnValue = F("Am Gemeindewald");
        break;
    }
    case 16620:
    {
        returnValue = F("Am Gemeindeweg");
        break;
    }
    case 16621:
    {
        returnValue = F("Am Gemeindewehr");
        break;
    }
    case 16622:
    {
        returnValue = F("Am Gemeindeweiher");
        break;
    }
    case 16623:
    {
        returnValue = F("Am Gemeindezaun");
        break;
    }
    case 16624:
    {
        returnValue = F("Am Gemeindezentrum");
        break;
    }
    case 16625:
    {
        returnValue = F("Am Gemeinenberg");
        break;
    }
    case 16626:
    {
        returnValue = F("Am Gemeinschaftshaus");
        break;
    }
    case 16627:
    {
        returnValue = F("Am Gemeinweg");
        break;
    }
    case 16628:
    {
        returnValue = F("Am Gemmerich");
        break;
    }
    case 16629:
    {
        returnValue = F("Am Gemsenberg");
        break;
    }
    case 16630:
    {
        returnValue = F("Am Gemsholz");
        break;
    }
    case 16631:
    {
        returnValue = F("Am Gemäuer");
        break;
    }
    case 16632:
    {
        returnValue = F("Am Gemäuret");
        break;
    }
    case 16633:
    {
        returnValue = F("Am Gemüsegarten");
        break;
    }
    case 16634:
    {
        returnValue = F("Am Gendarmenhut");
        break;
    }
    case 16635:
    {
        returnValue = F("Am Gendarmenmarkt");
        break;
    }
    case 16636:
    {
        returnValue = F("Am Genesungsheim");
        break;
    }
    case 16637:
    {
        returnValue = F("Am Genkinger Weg");
        break;
    }
    case 16638:
    {
        returnValue = F("Am Gennachblick");
        break;
    }
    case 16639:
    {
        returnValue = F("Am Genor");
        break;
    }
    case 16640:
    {
        returnValue = F("Am Gensberg");
        break;
    }
    case 16641:
    {
        returnValue = F("Am Gentersberg");
        break;
    }
    case 16642:
    {
        returnValue = F("Am Georg-Heinrichs-Tal");
        break;
    }
    case 16643:
    {
        returnValue = F("Am Georgenbach");
        break;
    }
    case 16644:
    {
        returnValue = F("Am Georgenberg");
        break;
    }
    case 16645:
    {
        returnValue = F("Am Georgenborn");
        break;
    }
    case 16646:
    {
        returnValue = F("Am Georgeneck");
        break;
    }
    case 16647:
    {
        returnValue = F("Am Georgengarten");
        break;
    }
    case 16648:
    {
        returnValue = F("Am Georgengraben");
        break;
    }
    case 16649:
    {
        returnValue = F("Am Georgenstein");
        break;
    }
    case 16650:
    {
        returnValue = F("Am Georgentor");
        break;
    }
    case 16651:
    {
        returnValue = F("Am Georgenwald");
        break;
    }
    case 16652:
    {
        returnValue = F("Am Georgschacht");
        break;
    }
    case 16653:
    {
        returnValue = F("Am Georgsmoor");
        break;
    }
    case 16654:
    {
        returnValue = F("Am Georgstollen");
        break;
    }
    case 16655:
    {
        returnValue = F("Am Gerafeld");
        break;
    }
    case 16656:
    {
        returnValue = F("Am Gerauer Weg");
        break;
    }
    case 16657:
    {
        returnValue = F("Am Gerbach");
        break;
    }
    case 16658:
    {
        returnValue = F("Am Gerberbach");
        break;
    }
    case 16659:
    {
        returnValue = F("Am Gerberbächle");
        break;
    }
    case 16660:
    {
        returnValue = F("Am Gerberg");
        break;
    }
    case 16661:
    {
        returnValue = F("Am Gerbergraben");
        break;
    }
    case 16662:
    {
        returnValue = F("Am Gerberhaus");
        break;
    }
    case 16663:
    {
        returnValue = F("Am Gerbersberg");
        break;
    }
    case 16664:
    {
        returnValue = F("Am Gerbersgarten");
        break;
    }
    case 16665:
    {
        returnValue = F("Am Gerbertürle");
        break;
    }
    case 16666:
    {
        returnValue = F("Am Gerd-Gerdes-Platz");
        break;
    }
    case 16667:
    {
        returnValue = F("Am Gerdtbach");
        break;
    }
    case 16668:
    {
        returnValue = F("Am Gerechtigkeitswald");
        break;
    }
    case 16669:
    {
        returnValue = F("Am Geren");
        break;
    }
    case 16670:
    {
        returnValue = F("Am Gerer");
        break;
    }
    case 16671:
    {
        returnValue = F("Am Geretsfeld");
        break;
    }
    case 16672:
    {
        returnValue = F("Am Gereut");
        break;
    }
    case 16673:
    {
        returnValue = F("Am Gerhardsdamm");
        break;
    }
    case 16674:
    {
        returnValue = F("Am Gerhardsfelsen");
        break;
    }
    case 16675:
    {
        returnValue = F("Am Gerhardshain");
        break;
    }
    case 16676:
    {
        returnValue = F("Am Gerhardsteich");
        break;
    }
    case 16677:
    {
        returnValue = F("Am Gerhardsweiler");
        break;
    }
    case 16678:
    {
        returnValue = F("Am Gerhardtsgraben");
        break;
    }
    case 16679:
    {
        returnValue = F("Am Gericht");
        break;
    }
    case 16680:
    {
        returnValue = F("Am Gerichtsberg");
        break;
    }
    case 16681:
    {
        returnValue = F("Am Gerichtsfeld");
        break;
    }
    case 16682:
    {
        returnValue = F("Am Gerichtsfelde");
        break;
    }
    case 16683:
    {
        returnValue = F("Am Gerichtsköppel");
        break;
    }
    case 16684:
    {
        returnValue = F("Am Gerichtspfad");
        break;
    }
    case 16685:
    {
        returnValue = F("Am Gerichtsplatz");
        break;
    }
    case 16686:
    {
        returnValue = F("Am Geriethpark");
        break;
    }
    case 16687:
    {
        returnValue = F("Am Geritz");
        break;
    }
    case 16688:
    {
        returnValue = F("Am Gerkenstein");
        break;
    }
    case 16689:
    {
        returnValue = F("Am Gerlet");
        break;
    }
    case 16690:
    {
        returnValue = F("Am Gerlingbach");
        break;
    }
    case 16691:
    {
        returnValue = F("Am Gerlinger Tor");
        break;
    }
    case 16692:
    {
        returnValue = F("Am Germ");
        break;
    }
    case 16693:
    {
        returnValue = F("Am Germanenring");
        break;
    }
    case 16694:
    {
        returnValue = F("Am Germansberg");
        break;
    }
    case 16695:
    {
        returnValue = F("Am Gern");
        break;
    }
    case 16696:
    {
        returnValue = F("Am Gernböhl");
        break;
    }
    case 16697:
    {
        returnValue = F("Am Gerneberg");
        break;
    }
    case 16698:
    {
        returnValue = F("Am Gernegraben");
        break;
    }
    case 16699:
    {
        returnValue = F("Am Gerner Keller");
        break;
    }
    case 16700:
    {
        returnValue = F("Am Gerngarten");
        break;
    }
    case 16701:
    {
        returnValue = F("Am Gersberg");
        break;
    }
    case 16702:
    {
        returnValue = F("Am Gersnacken");
        break;
    }
    case 16703:
    {
        returnValue = F("Am Gerspel");
        break;
    }
    case 16704:
    {
        returnValue = F("Am Gerstenacker");
        break;
    }
    case 16705:
    {
        returnValue = F("Am Gerstenbach");
        break;
    }
    case 16706:
    {
        returnValue = F("Am Gerstenberg");
        break;
    }
    case 16707:
    {
        returnValue = F("Am Gerstenbergweg");
        break;
    }
    case 16708:
    {
        returnValue = F("Am Gerstenfeld");
        break;
    }
    case 16709:
    {
        returnValue = F("Am Gerstenkamp");
        break;
    }
    case 16710:
    {
        returnValue = F("Am Gerstenstück");
        break;
    }
    case 16711:
    {
        returnValue = F("Am Gerstewitzer Anger");
        break;
    }
    case 16712:
    {
        returnValue = F("Am Gersthof");
        break;
    }
    case 16713:
    {
        returnValue = F("Am Gerstholz");
        break;
    }
    case 16714:
    {
        returnValue = F("Am Gerstnerweiher");
        break;
    }
    case 16715:
    {
        returnValue = F("Am Gertenberg");
        break;
    }
    case 16716:
    {
        returnValue = F("Am Gerth-Turm");
        break;
    }
    case 16717:
    {
        returnValue = F("Am Gertrudenberg");
        break;
    }
    case 16718:
    {
        returnValue = F("Am Gertrudenhof");
        break;
    }
    case 16719:
    {
        returnValue = F("Am Gerätehaus");
        break;
    }
    case 16720:
    {
        returnValue = F("Am Geräumtweg");
        break;
    }
    case 16721:
    {
        returnValue = F("Am Gesehr");
        break;
    }
    case 16722:
    {
        returnValue = F("Am Gesellenhaus");
        break;
    }
    case 16723:
    {
        returnValue = F("Am Gesetz");
        break;
    }
    case 16724:
    {
        returnValue = F("Am Gespensterwald");
        break;
    }
    case 16725:
    {
        returnValue = F("Am Gespring");
        break;
    }
    case 16726:
    {
        returnValue = F("Am Gespringrain");
        break;
    }
    case 16727:
    {
        returnValue = F("Am Gessert");
        break;
    }
    case 16728:
    {
        returnValue = F("Am Gessingplatz");
        break;
    }
    case 16729:
    {
        returnValue = F("Am Gessner");
        break;
    }
    case 16730:
    {
        returnValue = F("Am Gestad");
        break;
    }
    case 16731:
    {
        returnValue = F("Am Gestade");
        break;
    }
    case 16732:
    {
        returnValue = F("Am Gesteiger");
        break;
    }
    case 16733:
    {
        returnValue = F("Am Gestein");
        break;
    }
    case 16734:
    {
        returnValue = F("Am Gesteinet");
        break;
    }
    case 16735:
    {
        returnValue = F("Am Gesteinse");
        break;
    }
    case 16736:
    {
        returnValue = F("Am Gestocker");
        break;
    }
    case 16737:
    {
        returnValue = F("Am Gestüt");
        break;
    }
    case 16738:
    {
        returnValue = F("Am Gesundbrunnen");
        break;
    }
    case 16739:
    {
        returnValue = F("Am Gesundheitspark");
        break;
    }
    case 16740:
    {
        returnValue = F("Am Getau");
        break;
    }
    case 16741:
    {
        returnValue = F("Am Gethfeld");
        break;
    }
    case 16742:
    {
        returnValue = F("Am Getreidespeicher");
        break;
    }
    case 16743:
    {
        returnValue = F("Am Gettenbach");
        break;
    }
    case 16744:
    {
        returnValue = F("Am Getzer Acker");
        break;
    }
    case 16745:
    {
        returnValue = F("Am Geudeberg");
        break;
    }
    case 16746:
    {
        returnValue = F("Am Geuder");
        break;
    }
    case 16747:
    {
        returnValue = F("Am Geuen");
        break;
    }
    case 16748:
    {
        returnValue = F("Am Geus Garten");
        break;
    }
    case 16749:
    {
        returnValue = F("Am Geusfelde");
        break;
    }
    case 16750:
    {
        returnValue = F("Am Gewandenfeld");
        break;
    }
    case 16751:
    {
        returnValue = F("Am Gewann");
        break;
    }
    case 16752:
    {
        returnValue = F("Am Gewanne");
        break;
    }
    case 16753:
    {
        returnValue = F("Am Gewannenpfad");
        break;
    }
    case 16754:
    {
        returnValue = F("Am Gewannenweg");
        break;
    }
    case 16755:
    {
        returnValue = F("Am Gewend");
        break;
    }
    case 16756:
    {
        returnValue = F("Am Gewende");
        break;
    }
    case 16757:
    {
        returnValue = F("Am Gewenn");
        break;
    }
    case 16758:
    {
        returnValue = F("Am Gewerbebogen");
        break;
    }
    case 16759:
    {
        returnValue = F("Am Gewerbegebiet");
        break;
    }
    case 16760:
    {
        returnValue = F("Am Gewerbehof");
        break;
    }
    case 16761:
    {
        returnValue = F("Am Gewerbekanal");
        break;
    }
    case 16762:
    {
        returnValue = F("Am Gewerbepark");
        break;
    }
    case 16763:
    {
        returnValue = F("Am Gewerbering");
        break;
    }
    case 16764:
    {
        returnValue = F("Am Gewächshaus");
        break;
    }
    case 16765:
    {
        returnValue = F("Am Gewände");
        break;
    }
    case 16766:
    {
        returnValue = F("Am Gewölb");
        break;
    }
    case 16767:
    {
        returnValue = F("Am Gexberg");
        break;
    }
    case 16768:
    {
        returnValue = F("Am Geyersberg");
        break;
    }
    case 16769:
    {
        returnValue = F("Am Geyersbühl");
        break;
    }
    case 16770:
    {
        returnValue = F("Am Geyerschloß");
        break;
    }
    case 16771:
    {
        returnValue = F("Am Geyersgrund");
        break;
    }
    case 16772:
    {
        returnValue = F("Am Geßhübel");
        break;
    }
    case 16773:
    {
        returnValue = F("Am Gfängbach");
        break;
    }
    case 16774:
    {
        returnValue = F("Am Gföhret");
        break;
    }
    case 16775:
    {
        returnValue = F("Am Gfüll");
        break;
    }
    case 16776:
    {
        returnValue = F("Am Ghaiberg");
        break;
    }
    case 16777:
    {
        returnValue = F("Am Ghäuberg");
        break;
    }
    case 16778:
    {
        returnValue = F("Am Gickelsberg");
        break;
    }
    case 16779:
    {
        returnValue = F("Am Gickelsgraben");
        break;
    }
    case 16780:
    {
        returnValue = F("Am Giebel");
        break;
    }
    case 16781:
    {
        returnValue = F("Am Gieberg");
        break;
    }
    case 16782:
    {
        returnValue = F("Am Giechburgblick");
        break;
    }
    case 16783:
    {
        returnValue = F("Am Giedenfels");
        break;
    }
    case 16784:
    {
        returnValue = F("Am Giedenplatz");
        break;
    }
    case 16785:
    {
        returnValue = F("Am Giegel");
        break;
    }
    case 16786:
    {
        returnValue = F("Am Giegenberg");
        break;
    }
    case 16787:
    {
        returnValue = F("Am Giehls");
        break;
    }
    case 16788:
    {
        returnValue = F("Am Giehren");
        break;
    }
    case 16789:
    {
        returnValue = F("Am Gielbrunnen");
        break;
    }
    case 16790:
    {
        returnValue = F("Am Gielenstein");
        break;
    }
    case 16791:
    {
        returnValue = F("Am Giener");
        break;
    }
    case 16792:
    {
        returnValue = F("Am Giengener Weg");
        break;
    }
    case 16793:
    {
        returnValue = F("Am Gierath");
        break;
    }
    case 16794:
    {
        returnValue = F("Am Gierbusch");
        break;
    }
    case 16795:
    {
        returnValue = F("Am Gieren");
        break;
    }
    case 16796:
    {
        returnValue = F("Am Gierensberg");
        break;
    }
    case 16797:
    {
        returnValue = F("Am Gieresberg");
        break;
    }
    case 16798:
    {
        returnValue = F("Am Giersberg");
        break;
    }
    case 16799:
    {
        returnValue = F("Am Giesberg");
        break;
    }
    case 16800:
    {
        returnValue = F("Am Gieseberg");
        break;
    }
    case 16801:
    {
        returnValue = F("Am Giesebrink");
        break;
    }
    case 16802:
    {
        returnValue = F("Am Gieseckenberg");
        break;
    }
    case 16803:
    {
        returnValue = F("Am Giesekenbrunnen");
        break;
    }
    case 16804:
    {
        returnValue = F("Am Gieselberg");
        break;
    }
    case 16805:
    {
        returnValue = F("Am Gieselspfad");
        break;
    }
    case 16806:
    {
        returnValue = F("Am Gieselteich");
        break;
    }
    case 16807:
    {
        returnValue = F("Am Giesen");
        break;
    }
    case 16808:
    {
        returnValue = F("Am Giesenanger");
        break;
    }
    case 16809:
    {
        returnValue = F("Am Giesenbach");
        break;
    }
    case 16810:
    {
        returnValue = F("Am Giesenberg");
        break;
    }
    case 16811:
    {
        returnValue = F("Am Giesgraben");
        break;
    }
    case 16812:
    {
        returnValue = F("Am Giessen");
        break;
    }
    case 16813:
    {
        returnValue = F("Am Giessgraben");
        break;
    }
    case 16814:
    {
        returnValue = F("Am Giezenbach");
        break;
    }
    case 16815:
    {
        returnValue = F("Am Gießbach");
        break;
    }
    case 16816:
    {
        returnValue = F("Am Gießelbach");
        break;
    }
    case 16817:
    {
        returnValue = F("Am Gießen");
        break;
    }
    case 16818:
    {
        returnValue = F("Am Gießenbach");
        break;
    }
    case 16819:
    {
        returnValue = F("Am Gießgraben");
        break;
    }
    case 16820:
    {
        returnValue = F("Am Gießhübel");
        break;
    }
    case 16821:
    {
        returnValue = F("Am Gießübel");
        break;
    }
    case 16822:
    {
        returnValue = F("Am Gigele");
        break;
    }
    case 16823:
    {
        returnValue = F("Am Gigelesberg");
        break;
    }
    case 16824:
    {
        returnValue = F("Am Gigl");
        break;
    }
    case 16825:
    {
        returnValue = F("Am Giglberg");
        break;
    }
    case 16826:
    {
        returnValue = F("Am Gilchbach");
        break;
    }
    case 16827:
    {
        returnValue = F("Am Gildekamp");
        break;
    }
    case 16828:
    {
        returnValue = F("Am Gildenkamp");
        break;
    }
    case 16829:
    {
        returnValue = F("Am Gilgenberg");
        break;
    }
    case 16830:
    {
        returnValue = F("Am Gilgesborn");
        break;
    }
    case 16831:
    {
        returnValue = F("Am Gillbach");
        break;
    }
    case 16832:
    {
        returnValue = F("Am Gillbiger");
        break;
    }
    case 16833:
    {
        returnValue = F("Am Gillenbach");
        break;
    }
    case 16834:
    {
        returnValue = F("Am Gillenbrink");
        break;
    }
    case 16835:
    {
        returnValue = F("Am Gillenbüsch");
        break;
    }
    case 16836:
    {
        returnValue = F("Am Gillesbach");
        break;
    }
    case 16837:
    {
        returnValue = F("Am Gilligert");
        break;
    }
    case 16838:
    {
        returnValue = F("Am Giltholz");
        break;
    }
    case 16839:
    {
        returnValue = F("Am Gimpeleck");
        break;
    }
    case 16840:
    {
        returnValue = F("Am Gimpelrhein");
        break;
    }
    case 16841:
    {
        returnValue = F("Am Gimsberg");
        break;
    }
    case 16842:
    {
        returnValue = F("Am Ginster");
        break;
    }
    case 16843:
    {
        returnValue = F("Am Ginsterberg");
        break;
    }
    case 16844:
    {
        returnValue = F("Am Ginsterbusch");
        break;
    }
    case 16845:
    {
        returnValue = F("Am Ginsterhahn");
        break;
    }
    case 16846:
    {
        returnValue = F("Am Ginsterhang");
        break;
    }
    case 16847:
    {
        returnValue = F("Am Ginsterhübel");
        break;
    }
    case 16848:
    {
        returnValue = F("Am Ginsterkopf");
        break;
    }
    case 16849:
    {
        returnValue = F("Am Gipfel");
        break;
    }
    case 16850:
    {
        returnValue = F("Am Gipfelsberg");
        break;
    }
    case 16851:
    {
        returnValue = F("Am Gipsbruch");
        break;
    }
    case 16852:
    {
        returnValue = F("Am Gipshügel");
        break;
    }
    case 16853:
    {
        returnValue = F("Am Girlitzer Weiher");
        break;
    }
    case 16854:
    {
        returnValue = F("Am Girnitztal");
        break;
    }
    case 16855:
    {
        returnValue = F("Am Girrenbach");
        break;
    }
    case 16856:
    {
        returnValue = F("Am Gittelberg");
        break;
    }
    case 16857:
    {
        returnValue = F("Am Glaadtbach");
        break;
    }
    case 16858:
    {
        returnValue = F("Am Glacispark");
        break;
    }
    case 16859:
    {
        returnValue = F("Am Gladbach");
        break;
    }
    case 16860:
    {
        returnValue = F("Am Gladebach");
        break;
    }
    case 16861:
    {
        returnValue = F("Am Gladeberg");
        break;
    }
    case 16862:
    {
        returnValue = F("Am Glaitenbach");
        break;
    }
    case 16863:
    {
        returnValue = F("Am Glammsee");
        break;
    }
    case 16864:
    {
        returnValue = F("Am Glanzbuckel");
        break;
    }
    case 16865:
    {
        returnValue = F("Am Glanzenberg");
        break;
    }
    case 16866:
    {
        returnValue = F("Am Glanzenrain");
        break;
    }
    case 16867:
    {
        returnValue = F("Am Glapfgraben");
        break;
    }
    case 16868:
    {
        returnValue = F("Am Glasanger");
        break;
    }
    case 16869:
    {
        returnValue = F("Am Glasbach");
        break;
    }
    case 16870:
    {
        returnValue = F("Am Glasberg");
        break;
    }
    case 16871:
    {
        returnValue = F("Am Glasbusch");
        break;
    }
    case 16872:
    {
        returnValue = F("Am Glasesch");
        break;
    }
    case 16873:
    {
        returnValue = F("Am Glasgraben");
        break;
    }
    case 16874:
    {
        returnValue = F("Am Glaskopf");
        break;
    }
    case 16875:
    {
        returnValue = F("Am Glaswerk");
        break;
    }
    case 16876:
    {
        returnValue = F("Am Glattenzainbach");
        break;
    }
    case 16877:
    {
        returnValue = F("Am Glauben");
        break;
    }
    case 16878:
    {
        returnValue = F("Am Glauberg");
        break;
    }
    case 16879:
    {
        returnValue = F("Am Glauer Hof");
        break;
    }
    case 16880:
    {
        returnValue = F("Am Gleesberg");
        break;
    }
    case 16881:
    {
        returnValue = F("Am Gleis");
        break;
    }
    case 16882:
    {
        returnValue = F("Am Gleisbauhof");
        break;
    }
    case 16883:
    {
        returnValue = F("Am Gleisberg");
        break;
    }
    case 16884:
    {
        returnValue = F("Am Gleisdreieck");
        break;
    }
    case 16885:
    {
        returnValue = F("Am Gleise");
        break;
    }
    case 16886:
    {
        returnValue = F("Am Gleisweg");
        break;
    }
    case 16887:
    {
        returnValue = F("Am Gleitsch");
        break;
    }
    case 16888:
    {
        returnValue = F("Am Gleizenberg");
        break;
    }
    case 16889:
    {
        returnValue = F("Am Glenklein");
        break;
    }
    case 16890:
    {
        returnValue = F("Am Glescher Hof");
        break;
    }
    case 16891:
    {
        returnValue = F("Am Gletschergarten");
        break;
    }
    case 16892:
    {
        returnValue = F("Am Gleueler Bach");
        break;
    }
    case 16893:
    {
        returnValue = F("Am Gleuensee");
        break;
    }
    case 16894:
    {
        returnValue = F("Am Glienicksee");
        break;
    }
    case 16895:
    {
        returnValue = F("Am Gligger");
        break;
    }
    case 16896:
    {
        returnValue = F("Am Glind");
        break;
    }
    case 16897:
    {
        returnValue = F("Am Glinder Weg");
        break;
    }
    case 16898:
    {
        returnValue = F("Am Glindhorst");
        break;
    }
    case 16899:
    {
        returnValue = F("Am Glinsboll");
        break;
    }
    case 16900:
    {
        returnValue = F("Am Glitzberg");
        break;
    }
    case 16901:
    {
        returnValue = F("Am Globus");
        break;
    }
    case 16902:
    {
        returnValue = F("Am Glockborn");
        break;
    }
    case 16903:
    {
        returnValue = F("Am Glocken");
        break;
    }
    case 16904:
    {
        returnValue = F("Am Glockenbaum");
        break;
    }
    case 16905:
    {
        returnValue = F("Am Glockenberg");
        break;
    }
    case 16906:
    {
        returnValue = F("Am Glockenborn");
        break;
    }
    case 16907:
    {
        returnValue = F("Am Glockenbuckel");
        break;
    }
    case 16908:
    {
        returnValue = F("Am Glockengarten");
        break;
    }
    case 16909:
    {
        returnValue = F("Am Glockengießer");
        break;
    }
    case 16910:
    {
        returnValue = F("Am Glockenhof");
        break;
    }
    case 16911:
    {
        returnValue = F("Am Glockenhorn");
        break;
    }
    case 16912:
    {
        returnValue = F("Am Glockenkamp");
        break;
    }
    case 16913:
    {
        returnValue = F("Am Glockenkolk");
        break;
    }
    case 16914:
    {
        returnValue = F("Am Glockenloch");
        break;
    }
    case 16915:
    {
        returnValue = F("Am Glockenort");
        break;
    }
    case 16916:
    {
        returnValue = F("Am Glockenpfuhl");
        break;
    }
    case 16917:
    {
        returnValue = F("Am Glockenpütz");
        break;
    }
    case 16918:
    {
        returnValue = F("Am Glockenrain");
        break;
    }
    case 16919:
    {
        returnValue = F("Am Glockenschlag");
        break;
    }
    case 16920:
    {
        returnValue = F("Am Glockensiek");
        break;
    }
    case 16921:
    {
        returnValue = F("Am Glockenspiel");
        break;
    }
    case 16922:
    {
        returnValue = F("Am Glockensprung");
        break;
    }
    case 16923:
    {
        returnValue = F("Am Glockenstein");
        break;
    }
    case 16924:
    {
        returnValue = F("Am Glockenstrang");
        break;
    }
    case 16925:
    {
        returnValue = F("Am Glockenstrauch");
        break;
    }
    case 16926:
    {
        returnValue = F("Am Glockenstuhl");
        break;
    }
    case 16927:
    {
        returnValue = F("Am Glockenteich");
        break;
    }
    case 16928:
    {
        returnValue = F("Am Glockenturm");
        break;
    }
    case 16929:
    {
        returnValue = F("Am Glockgarten");
        break;
    }
    case 16930:
    {
        returnValue = F("Am Glocklappen");
        break;
    }
    case 16931:
    {
        returnValue = F("Am Gloria");
        break;
    }
    case 16932:
    {
        returnValue = F("Am Glosebusch");
        break;
    }
    case 16933:
    {
        returnValue = F("Am Glubigsee");
        break;
    }
    case 16934:
    {
        returnValue = F("Am Glunzbusch");
        break;
    }
    case 16935:
    {
        returnValue = F("Am Glupenthül");
        break;
    }
    case 16936:
    {
        returnValue = F("Am Glus");
        break;
    }
    case 16937:
    {
        returnValue = F("Am Gläserbach");
        break;
    }
    case 16938:
    {
        returnValue = F("Am Gläserberg");
        break;
    }
    case 16939:
    {
        returnValue = F("Am Gläserkrug");
        break;
    }
    case 16940:
    {
        returnValue = F("Am Gläsernen Bild");
        break;
    }
    case 16941:
    {
        returnValue = F("Am Glöckelshof");
        break;
    }
    case 16942:
    {
        returnValue = F("Am Glöckenberg");
        break;
    }
    case 16943:
    {
        returnValue = F("Am Glöckle");
        break;
    }
    case 16944:
    {
        returnValue = F("Am Glöcknersberg");
        break;
    }
    case 16945:
    {
        returnValue = F("Am Glösberg");
        break;
    }
    case 16946:
    {
        returnValue = F("Am Glöttrain");
        break;
    }
    case 16947:
    {
        returnValue = F("Am Glückauf");
        break;
    }
    case 16948:
    {
        returnValue = F("Am Glückgraben");
        break;
    }
    case 16949:
    {
        returnValue = F("Am Glücksberg");
        break;
    }
    case 16950:
    {
        returnValue = F("Am Glüsig");
        break;
    }
    case 16951:
    {
        returnValue = F("Am Gmaisberg");
        break;
    }
    case 16952:
    {
        returnValue = F("Am Gnadenberg");
        break;
    }
    case 16953:
    {
        returnValue = F("Am Gnock");
        break;
    }
    case 16954:
    {
        returnValue = F("Am Gnädigspark");
        break;
    }
    case 16955:
    {
        returnValue = F("Am Gocher Berg");
        break;
    }
    case 16956:
    {
        returnValue = F("Am Gock");
        break;
    }
    case 16957:
    {
        returnValue = F("Am Gockelberg");
        break;
    }
    case 16958:
    {
        returnValue = F("Am Gockert");
        break;
    }
    case 16959:
    {
        returnValue = F("Am Goddelbusch");
        break;
    }
    case 16960:
    {
        returnValue = F("Am Goddelsberg");
        break;
    }
    case 16961:
    {
        returnValue = F("Am Goddenhof");
        break;
    }
    case 16962:
    {
        returnValue = F("Am Goethehain");
        break;
    }
    case 16963:
    {
        returnValue = F("Am Goethehaus");
        break;
    }
    case 16964:
    {
        returnValue = F("Am Goethepark");
        break;
    }
    case 16965:
    {
        returnValue = F("Am Goetheplatz");
        break;
    }
    case 16966:
    {
        returnValue = F("Am Gogenkrog");
        break;
    }
    case 16967:
    {
        returnValue = F("Am Gogericht");
        break;
    }
    case 16968:
    {
        returnValue = F("Am Gografenhaus");
        break;
    }
    case 16969:
    {
        returnValue = F("Am Gografenhof");
        break;
    }
    case 16970:
    {
        returnValue = F("Am Gohbach");
        break;
    }
    case 16971:
    {
        returnValue = F("Am Gohlitzsee");
        break;
    }
    case 16972:
    {
        returnValue = F("Am Gohlk");
        break;
    }
    case 16973:
    {
        returnValue = F("Am Goitzscherand");
        break;
    }
    case 16974:
    {
        returnValue = F("Am Goißebuckel");
        break;
    }
    case 16975:
    {
        returnValue = F("Am Goldacker");
        break;
    }
    case 16976:
    {
        returnValue = F("Am Goldackerweg");
        break;
    }
    case 16977:
    {
        returnValue = F("Am Goldanger");
        break;
    }
    case 16978:
    {
        returnValue = F("Am Goldbach");
        break;
    }
    case 16979:
    {
        returnValue = F("Am Goldbacher Berg");
        break;
    }
    case 16980:
    {
        returnValue = F("Am Goldbachgrund");
        break;
    }
    case 16981:
    {
        returnValue = F("Am Goldbachtal");
        break;
    }
    case 16982:
    {
        returnValue = F("Am Goldbarg");
        break;
    }
    case 16983:
    {
        returnValue = F("Am Goldberg");
        break;
    }
    case 16984:
    {
        returnValue = F("Am Goldberganger");
        break;
    }
    case 16985:
    {
        returnValue = F("Am Goldberge");
        break;
    }
    case 16986:
    {
        returnValue = F("Am Goldbichl");
        break;
    }
    case 16987:
    {
        returnValue = F("Am Goldborn");
        break;
    }
    case 16988:
    {
        returnValue = F("Am Goldbrink");
        break;
    }
    case 16989:
    {
        returnValue = F("Am Goldbronnenbach");
        break;
    }
    case 16990:
    {
        returnValue = F("Am Goldbrunnen");
        break;
    }
    case 16991:
    {
        returnValue = F("Am Goldbuckel");
        break;
    }
    case 16992:
    {
        returnValue = F("Am Goldbühl");
        break;
    }
    case 16993:
    {
        returnValue = F("Am Goldenbach");
        break;
    }
    case 16994:
    {
        returnValue = F("Am Goldenen Acker");
        break;
    }
    case 16995:
    {
        returnValue = F("Am Goldenen Berge");
        break;
    }
    case 16996:
    {
        returnValue = F("Am Goldenen Eck");
        break;
    }
    case 16997:
    {
        returnValue = F("Am Goldenen Feld");
        break;
    }
    case 16998:
    {
        returnValue = F("Am Goldenen Lamm");
        break;
    }
    case 16999:
    {
        returnValue = F("Am Goldenen Löwen");
        break;
    }
    case 17000:
    {
        returnValue = F("Am Goldenen Steig");
        break;
    }
    case 17001:
    {
        returnValue = F("Am Goldenen Wagen");
        break;
    }
    case 17002:
    {
        returnValue = F("Am Goldersbach");
        break;
    }
    case 17003:
    {
        returnValue = F("Am Goldfeld");
        break;
    }
    case 17004:
    {
        returnValue = F("Am Goldfloß");
        break;
    }
    case 17005:
    {
        returnValue = F("Am Goldgraben");
        break;
    }
    case 17006:
    {
        returnValue = F("Am Goldhähnchen");
        break;
    }
    case 17007:
    {
        returnValue = F("Am Goldhübel");
        break;
    }
    case 17008:
    {
        returnValue = F("Am Goldhügel");
        break;
    }
    case 17009:
    {
        returnValue = F("Am Goldkindstein");
        break;
    }
    case 17010:
    {
        returnValue = F("Am Goldklumpen");
        break;
    }
    case 17011:
    {
        returnValue = F("Am Goldloch");
        break;
    }
    case 17012:
    {
        returnValue = F("Am Goldmorgen");
        break;
    }
    case 17013:
    {
        returnValue = F("Am Goldrain");
        break;
    }
    case 17014:
    {
        returnValue = F("Am Goldregen");
        break;
    }
    case 17015:
    {
        returnValue = F("Am Goldrändel");
        break;
    }
    case 17016:
    {
        returnValue = F("Am Goldsiek");
        break;
    }
    case 17017:
    {
        returnValue = F("Am Goldstein");
        break;
    }
    case 17018:
    {
        returnValue = F("Am Goldstück");
        break;
    }
    case 17019:
    {
        returnValue = F("Am Golfpark");
        break;
    }
    case 17020:
    {
        returnValue = F("Am Golfplatz");
        break;
    }
    case 17021:
    {
        returnValue = F("Am Gollenberg");
        break;
    }
    case 17022:
    {
        returnValue = F("Am Gollersrasen");
        break;
    }
    case 17023:
    {
        returnValue = F("Am Gollheimer");
        break;
    }
    case 17024:
    {
        returnValue = F("Am Gollnfeld");
        break;
    }
    case 17025:
    {
        returnValue = F("Am Goltenhof");
        break;
    }
    case 17026:
    {
        returnValue = F("Am Gombach");
        break;
    }
    case 17027:
    {
        returnValue = F("Am Gommersbach");
        break;
    }
    case 17028:
    {
        returnValue = F("Am Gondelteich");
        break;
    }
    case 17029:
    {
        returnValue = F("Am Gongler");
        break;
    }
    case 17030:
    {
        returnValue = F("Am Gonterskircher Weg");
        break;
    }
    case 17031:
    {
        returnValue = F("Am Goode Bur");
        break;
    }
    case 17032:
    {
        returnValue = F("Am Goosberg");
        break;
    }
    case 17033:
    {
        returnValue = F("Am Goosfang");
        break;
    }
    case 17034:
    {
        returnValue = F("Am Gooskamp");
        break;
    }
    case 17035:
    {
        returnValue = F("Am Goosmoor");
        break;
    }
    case 17036:
    {
        returnValue = F("Am Goosort");
        break;
    }
    case 17037:
    {
        returnValue = F("Am Gorbach");
        break;
    }
    case 17038:
    {
        returnValue = F("Am Goring");
        break;
    }
    case 17039:
    {
        returnValue = F("Am Gorn");
        break;
    }
    case 17040:
    {
        returnValue = F("Am Gorrenberg");
        break;
    }
    case 17041:
    {
        returnValue = F("Am Gorzberg");
        break;
    }
    case 17042:
    {
        returnValue = F("Am Gosebach");
        break;
    }
    case 17043:
    {
        returnValue = F("Am Gosebrinke");
        break;
    }
    case 17044:
    {
        returnValue = F("Am Gosedoor");
        break;
    }
    case 17045:
    {
        returnValue = F("Am Gosekamp");
        break;
    }
    case 17046:
    {
        returnValue = F("Am Gosenbach");
        break;
    }
    case 17047:
    {
        returnValue = F("Am Gossenborn");
        break;
    }
    case 17048:
    {
        returnValue = F("Am Gossenhof");
        break;
    }
    case 17049:
    {
        returnValue = F("Am Gotengraben");
        break;
    }
    case 17050:
    {
        returnValue = F("Am Gothensee");
        break;
    }
    case 17051:
    {
        returnValue = F("Am Gottbach");
        break;
    }
    case 17052:
    {
        returnValue = F("Am Gottelsberg");
        break;
    }
    case 17053:
    {
        returnValue = F("Am Gottesacker");
        break;
    }
    case 17054:
    {
        returnValue = F("Am Gottesackertor");
        break;
    }
    case 17055:
    {
        returnValue = F("Am Gottesauer Hof");
        break;
    }
    case 17056:
    {
        returnValue = F("Am Gottesberg");
        break;
    }
    case 17057:
    {
        returnValue = F("Am Gotteseller");
        break;
    }
    case 17058:
    {
        returnValue = F("Am Gottesgraben");
        break;
    }
    case 17059:
    {
        returnValue = F("Am Gotteshäuschen");
        break;
    }
    case 17060:
    {
        returnValue = F("Am Gottlob");
        break;
    }
    case 17061:
    {
        returnValue = F("Am Gottstuhl");
        break;
    }
    case 17062:
    {
        returnValue = F("Am Gottvaterberg");
        break;
    }
    case 17063:
    {
        returnValue = F("Am Goßbühl");
        break;
    }
    case 17064:
    {
        returnValue = F("Am Goßmarer Fließ");
        break;
    }
    case 17065:
    {
        returnValue = F("Am Graad");
        break;
    }
    case 17066:
    {
        returnValue = F("Am Graalwall");
        break;
    }
    case 17067:
    {
        returnValue = F("Am Grabborn");
        break;
    }
    case 17068:
    {
        returnValue = F("Am Graben");
        break;
    }
    case 17069:
    {
        returnValue = F("Am Grabenacker");
        break;
    }
    case 17070:
    {
        returnValue = F("Am Grabenberg");
        break;
    }
    case 17071:
    {
        returnValue = F("Am Grabenbrunnen");
        break;
    }
    case 17072:
    {
        returnValue = F("Am Grabenfeld");
        break;
    }
    case 17073:
    {
        returnValue = F("Am Grabengarten");
        break;
    }
    case 17074:
    {
        returnValue = F("Am Grabengässchen");
        break;
    }
    case 17075:
    {
        returnValue = F("Am Grabenhügel");
        break;
    }
    case 17076:
    {
        returnValue = F("Am Grabenland");
        break;
    }
    case 17077:
    {
        returnValue = F("Am Grabenrain");
        break;
    }
    case 17078:
    {
        returnValue = F("Am Grabensprung");
        break;
    }
    case 17079:
    {
        returnValue = F("Am Grabensteg");
        break;
    }
    case 17080:
    {
        returnValue = F("Am Grabenstück");
        break;
    }
    case 17081:
    {
        returnValue = F("Am Grabentürchen");
        break;
    }
    case 17082:
    {
        returnValue = F("Am Grabenweg");
        break;
    }
    case 17083:
    {
        returnValue = F("Am Grabfeld");
        break;
    }
    case 17084:
    {
        returnValue = F("Am Grabitzer Berg");
        break;
    }
    case 17085:
    {
        returnValue = F("Am Grabungsfeld");
        break;
    }
    case 17086:
    {
        returnValue = F("Am Grachenturm");
        break;
    }
    case 17087:
    {
        returnValue = F("Am Gradeberg");
        break;
    }
    case 17088:
    {
        returnValue = F("Am Gradhof");
        break;
    }
    case 17089:
    {
        returnValue = F("Am Gradierwerk");
        break;
    }
    case 17090:
    {
        returnValue = F("Am Grafacker");
        break;
    }
    case 17091:
    {
        returnValue = F("Am Grafenberg");
        break;
    }
    case 17092:
    {
        returnValue = F("Am Grafenfeld");
        break;
    }
    case 17093:
    {
        returnValue = F("Am Grafenholz");
        break;
    }
    case 17094:
    {
        returnValue = F("Am Grafenkreuz");
        break;
    }
    case 17095:
    {
        returnValue = F("Am Grafenplatz");
        break;
    }
    case 17096:
    {
        returnValue = F("Am Grafensteigle");
        break;
    }
    case 17097:
    {
        returnValue = F("Am Grafenstein");
        break;
    }
    case 17098:
    {
        returnValue = F("Am Grafenstück");
        break;
    }
    case 17099:
    {
        returnValue = F("Am Grafental");
        break;
    }
    case 17100:
    {
        returnValue = F("Am Grafenwald");
        break;
    }
    case 17101:
    {
        returnValue = F("Am Grafenwinkel");
        break;
    }
    case 17102:
    {
        returnValue = F("Am Grafinger Steig");
        break;
    }
    case 17103:
    {
        returnValue = F("Am Grafschen Hof");
        break;
    }
    case 17104:
    {
        returnValue = F("Am Grafweg");
        break;
    }
    case 17105:
    {
        returnValue = F("Am Grahlen");
        break;
    }
    case 17106:
    {
        returnValue = F("Am Grainchen");
        break;
    }
    case 17107:
    {
        returnValue = F("Am Grainersberg");
        break;
    }
    case 17108:
    {
        returnValue = F("Am Graitzer Tor");
        break;
    }
    case 17109:
    {
        returnValue = F("Am Gramelower See");
        break;
    }
    case 17110:
    {
        returnValue = F("Am Gramen");
        break;
    }
    case 17111:
    {
        returnValue = F("Am Gramerich");
        break;
    }
    case 17112:
    {
        returnValue = F("Am Granberg");
        break;
    }
    case 17113:
    {
        returnValue = F("Am Grandberg");
        break;
    }
    case 17114:
    {
        returnValue = F("Am Granitwerk");
        break;
    }
    case 17115:
    {
        returnValue = F("Am Grapenhof");
        break;
    }
    case 17116:
    {
        returnValue = F("Am Grarock");
        break;
    }
    case 17117:
    {
        returnValue = F("Am Gras");
        break;
    }
    case 17118:
    {
        returnValue = F("Am Grasacker");
        break;
    }
    case 17119:
    {
        returnValue = F("Am Grasbach");
        break;
    }
    case 17120:
    {
        returnValue = F("Am Grasbeet");
        break;
    }
    case 17121:
    {
        returnValue = F("Am Grasberg");
        break;
    }
    case 17122:
    {
        returnValue = F("Am Graseberg");
        break;
    }
    case 17123:
    {
        returnValue = F("Am Graseteich");
        break;
    }
    case 17124:
    {
        returnValue = F("Am Graseweg");
        break;
    }
    case 17125:
    {
        returnValue = F("Am Grasewege");
        break;
    }
    case 17126:
    {
        returnValue = F("Am Grasfeld");
        break;
    }
    case 17127:
    {
        returnValue = F("Am Grasflecken");
        break;
    }
    case 17128:
    {
        returnValue = F("Am Grasgarten");
        break;
    }
    case 17129:
    {
        returnValue = F("Am Grashaus");
        break;
    }
    case 17130:
    {
        returnValue = F("Am Grashof");
        break;
    }
    case 17131:
    {
        returnValue = F("Am Grashoff");
        break;
    }
    case 17132:
    {
        returnValue = F("Am Grasholz");
        break;
    }
    case 17133:
    {
        returnValue = F("Am Grashorn");
        break;
    }
    case 17134:
    {
        returnValue = F("Am Grasigen Weg");
        break;
    }
    case 17135:
    {
        returnValue = F("Am Grasinger Weg");
        break;
    }
    case 17136:
    {
        returnValue = F("Am Graskamp");
        break;
    }
    case 17137:
    {
        returnValue = F("Am Graspoint");
        break;
    }
    case 17138:
    {
        returnValue = F("Am Grasrain");
        break;
    }
    case 17139:
    {
        returnValue = F("Am Grassee");
        break;
    }
    case 17140:
    {
        returnValue = F("Am Grassenberg");
        break;
    }
    case 17141:
    {
        returnValue = F("Am Grasstieg");
        break;
    }
    case 17142:
    {
        returnValue = F("Am Graswald");
        break;
    }
    case 17143:
    {
        returnValue = F("Am Grasweg");
        break;
    }
    case 17144:
    {
        returnValue = F("Am Graswege");
        break;
    }
    case 17145:
    {
        returnValue = F("Am Grat");
        break;
    }
    case 17146:
    {
        returnValue = F("Am Gratenpoet");
        break;
    }
    case 17147:
    {
        returnValue = F("Am Gratz");
        break;
    }
    case 17148:
    {
        returnValue = F("Am Grauacker");
        break;
    }
    case 17149:
    {
        returnValue = F("Am Grauberg");
        break;
    }
    case 17150:
    {
        returnValue = F("Am Grauen Bannstein");
        break;
    }
    case 17151:
    {
        returnValue = F("Am Grauen Berg");
        break;
    }
    case 17152:
    {
        returnValue = F("Am Grauen Felsen");
        break;
    }
    case 17153:
    {
        returnValue = F("Am Grauen Hof");
        break;
    }
    case 17154:
    {
        returnValue = F("Am Grauen Kreuz");
        break;
    }
    case 17155:
    {
        returnValue = F("Am Grauen Mann");
        break;
    }
    case 17156:
    {
        returnValue = F("Am Grauen Stein");
        break;
    }
    case 17157:
    {
        returnValue = F("Am Grauen Tor");
        break;
    }
    case 17158:
    {
        returnValue = F("Am Grauen Turm");
        break;
    }
    case 17159:
    {
        returnValue = F("Am Grauen Wolf");
        break;
    }
    case 17160:
    {
        returnValue = F("Am Grauenstein");
        break;
    }
    case 17161:
    {
        returnValue = F("Am Grauhöfer Holz");
        break;
    }
    case 17162:
    {
        returnValue = F("Am Grauwall");
        break;
    }
    case 17163:
    {
        returnValue = F("Am Gravenland");
        break;
    }
    case 17164:
    {
        returnValue = F("Am Grazilbach");
        break;
    }
    case 17165:
    {
        returnValue = F("Am Graßdorfer Wäldchen");
        break;
    }
    case 17166:
    {
        returnValue = F("Am Grebenberg");
        break;
    }
    case 17167:
    {
        returnValue = F("Am Greckenhof");
        break;
    }
    case 17168:
    {
        returnValue = F("Am Grefekebruch");
        break;
    }
    case 17169:
    {
        returnValue = F("Am Greifenkeller");
        break;
    }
    case 17170:
    {
        returnValue = F("Am Greiling");
        break;
    }
    case 17171:
    {
        returnValue = F("Am Greimberg");
        break;
    }
    case 17172:
    {
        returnValue = F("Am Grein");
        break;
    }
    case 17173:
    {
        returnValue = F("Am Greinberg");
        break;
    }
    case 17174:
    {
        returnValue = F("Am Greiner");
        break;
    }
    case 17175:
    {
        returnValue = F("Am Greinerweg");
        break;
    }
    case 17176:
    {
        returnValue = F("Am Greinshof");
        break;
    }
    case 17177:
    {
        returnValue = F("Am Greit");
        break;
    }
    case 17178:
    {
        returnValue = F("Am Greithof");
        break;
    }
    case 17179:
    {
        returnValue = F("Am Greißelbach");
        break;
    }
    case 17180:
    {
        returnValue = F("Am Grell");
        break;
    }
    case 17181:
    {
        returnValue = F("Am Gremberg");
        break;
    }
    case 17182:
    {
        returnValue = F("Am Grendel");
        break;
    }
    case 17183:
    {
        returnValue = F("Am Grensing");
        break;
    }
    case 17184:
    {
        returnValue = F("Am Grenzadler");
        break;
    }
    case 17185:
    {
        returnValue = F("Am Grenzbach");
        break;
    }
    case 17186:
    {
        returnValue = F("Am Grenzberg");
        break;
    }
    case 17187:
    {
        returnValue = F("Am Grenzbuck");
        break;
    }
    case 17188:
    {
        returnValue = F("Am Grenzgraben");
        break;
    }
    case 17189:
    {
        returnValue = F("Am Grenzhals");
        break;
    }
    case 17190:
    {
        returnValue = F("Am Grenzhang");
        break;
    }
    case 17191:
    {
        returnValue = F("Am Grenzkrug");
        break;
    }
    case 17192:
    {
        returnValue = F("Am Grenzlandheim");
        break;
    }
    case 17193:
    {
        returnValue = F("Am Grenzpfahle");
        break;
    }
    case 17194:
    {
        returnValue = F("Am Grenzrain");
        break;
    }
    case 17195:
    {
        returnValue = F("Am Grenzrasen");
        break;
    }
    case 17196:
    {
        returnValue = F("Am Grenzschloot");
        break;
    }
    case 17197:
    {
        returnValue = F("Am Grenzstein");
        break;
    }
    case 17198:
    {
        returnValue = F("Am Grenzstück");
        break;
    }
    case 17199:
    {
        returnValue = F("Am Grenzwald");
        break;
    }
    case 17200:
    {
        returnValue = F("Am Grenzwall");
        break;
    }
    case 17201:
    {
        returnValue = F("Am Grenzweg");
        break;
    }
    case 17202:
    {
        returnValue = F("Am Greppenfeld");
        break;
    }
    case 17203:
    {
        returnValue = F("Am Gresfeld");
        break;
    }
    case 17204:
    {
        returnValue = F("Am Gresselberg");
        break;
    }
    case 17205:
    {
        returnValue = F("Am Gresshoff");
        break;
    }
    case 17206:
    {
        returnValue = F("Am Gressinger Berg");
        break;
    }
    case 17207:
    {
        returnValue = F("Am Gretchenbach");
        break;
    }
    case 17208:
    {
        returnValue = F("Am Gretchenkopf");
        break;
    }
    case 17209:
    {
        returnValue = F("Am Gretchenweg");
        break;
    }
    case 17210:
    {
        returnValue = F("Am Gretchesgarten");
        break;
    }
    case 17211:
    {
        returnValue = F("Am Gretzenbühl");
        break;
    }
    case 17212:
    {
        returnValue = F("Am Greut");
        break;
    }
    case 17213:
    {
        returnValue = F("Am Grevenberg");
        break;
    }
    case 17214:
    {
        returnValue = F("Am Grevenholt");
        break;
    }
    case 17215:
    {
        returnValue = F("Am Grevingsberg");
        break;
    }
    case 17216:
    {
        returnValue = F("Am Grewinghof");
        break;
    }
    case 17217:
    {
        returnValue = F("Am Gribesgraben");
        break;
    }
    case 17218:
    {
        returnValue = F("Am Grieboer Bahnhof");
        break;
    }
    case 17219:
    {
        returnValue = F("Am Griemel");
        break;
    }
    case 17220:
    {
        returnValue = F("Am Griemmerich");
        break;
    }
    case 17221:
    {
        returnValue = F("Am Griengraben");
        break;
    }
    case 17222:
    {
        returnValue = F("Am Grieps");
        break;
    }
    case 17223:
    {
        returnValue = F("Am Griepsberg");
        break;
    }
    case 17224:
    {
        returnValue = F("Am Griepshop");
        break;
    }
    case 17225:
    {
        returnValue = F("Am Gries");
        break;
    }
    case 17226:
    {
        returnValue = F("Am Griesacker");
        break;
    }
    case 17227:
    {
        returnValue = F("Am Griesbach");
        break;
    }
    case 17228:
    {
        returnValue = F("Am Griesbacherl");
        break;
    }
    case 17229:
    {
        returnValue = F("Am Griesbaum");
        break;
    }
    case 17230:
    {
        returnValue = F("Am Griesberg");
        break;
    }
    case 17231:
    {
        returnValue = F("Am Griesbichl");
        break;
    }
    case 17232:
    {
        returnValue = F("Am Griesböhl");
        break;
    }
    case 17233:
    {
        returnValue = F("Am Griesbühl");
        break;
    }
    case 17234:
    {
        returnValue = F("Am Griesen Stein");
        break;
    }
    case 17235:
    {
        returnValue = F("Am Griesenbötel");
        break;
    }
    case 17236:
    {
        returnValue = F("Am Griesenmoor");
        break;
    }
    case 17237:
    {
        returnValue = F("Am Griesenrain");
        break;
    }
    case 17238:
    {
        returnValue = F("Am Griesetorn");
        break;
    }
    case 17239:
    {
        returnValue = F("Am Griesfeld");
        break;
    }
    case 17240:
    {
        returnValue = F("Am Griesgraben");
        break;
    }
    case 17241:
    {
        returnValue = F("Am Grieshauptgraben");
        break;
    }
    case 17242:
    {
        returnValue = F("Am Grieshof");
        break;
    }
    case 17243:
    {
        returnValue = F("Am Grieskirchner Feld");
        break;
    }
    case 17244:
    {
        returnValue = F("Am Griesweiher");
        break;
    }
    case 17245:
    {
        returnValue = F("Am Grießborn");
        break;
    }
    case 17246:
    {
        returnValue = F("Am Grießebach");
        break;
    }
    case 17247:
    {
        returnValue = F("Am Griffelmarkt");
        break;
    }
    case 17248:
    {
        returnValue = F("Am Grillenberg");
        break;
    }
    case 17249:
    {
        returnValue = F("Am Grillgraben");
        break;
    }
    case 17250:
    {
        returnValue = F("Am Grillplatz");
        break;
    }
    case 17251:
    {
        returnValue = F("Am Grimberg");
        break;
    }
    case 17252:
    {
        returnValue = F("Am Grimmen");
        break;
    }
    case 17253:
    {
        returnValue = F("Am Grimmerlandl");
        break;
    }
    case 17254:
    {
        returnValue = F("Am Grimnitzsee");
        break;
    }
    case 17255:
    {
        returnValue = F("Am Grindel");
        break;
    }
    case 17256:
    {
        returnValue = F("Am Grindrasen");
        break;
    }
    case 17257:
    {
        returnValue = F("Am Gringel");
        break;
    }
    case 17258:
    {
        returnValue = F("Am Gripshof");
        break;
    }
    case 17259:
    {
        returnValue = F("Am Grobet");
        break;
    }
    case 17260:
    {
        returnValue = F("Am Groeneskamp");
        break;
    }
    case 17261:
    {
        returnValue = F("Am Grohacker");
        break;
    }
    case 17262:
    {
        returnValue = F("Am Grohbangert");
        break;
    }
    case 17263:
    {
        returnValue = F("Am Grohberg");
        break;
    }
    case 17264:
    {
        returnValue = F("Am Grohenstein");
        break;
    }
    case 17265:
    {
        returnValue = F("Am Grohrain");
        break;
    }
    case 17266:
    {
        returnValue = F("Am Groitlfeld");
        break;
    }
    case 17267:
    {
        returnValue = F("Am Grollbach");
        break;
    }
    case 17268:
    {
        returnValue = F("Am Grollhamm");
        break;
    }
    case 17269:
    {
        returnValue = F("Am Gromberg");
        break;
    }
    case 17270:
    {
        returnValue = F("Am Gromet");
        break;
    }
    case 17271:
    {
        returnValue = F("Am Gronacker");
        break;
    }
    case 17272:
    {
        returnValue = F("Am Gronaris Sprudel");
        break;
    }
    case 17273:
    {
        returnValue = F("Am Grooten Kamp");
        break;
    }
    case 17274:
    {
        returnValue = F("Am Grooten Steen");
        break;
    }
    case 17275:
    {
        returnValue = F("Am Grootes");
        break;
    }
    case 17276:
    {
        returnValue = F("Am Gropenberg");
        break;
    }
    case 17277:
    {
        returnValue = F("Am Gropenmarkt");
        break;
    }
    case 17278:
    {
        returnValue = F("Am Grops");
        break;
    }
    case 17279:
    {
        returnValue = F("Am Groschenbrink");
        break;
    }
    case 17280:
    {
        returnValue = F("Am Groschenteich");
        break;
    }
    case 17281:
    {
        returnValue = F("Am Gross Bütt");
        break;
    }
    case 17282:
    {
        returnValue = F("Am Grotegersberg");
        break;
    }
    case 17283:
    {
        returnValue = F("Am Groten Hof");
        break;
    }
    case 17284:
    {
        returnValue = F("Am Grotenhof");
        break;
    }
    case 17285:
    {
        returnValue = F("Am Grotensahl");
        break;
    }
    case 17286:
    {
        returnValue = F("Am Grothenbaum");
        break;
    }
    case 17287:
    {
        returnValue = F("Am Grottsteig");
        break;
    }
    case 17288:
    {
        returnValue = F("Am Groweg");
        break;
    }
    case 17289:
    {
        returnValue = F("Am Grozbuckel");
        break;
    }
    case 17290:
    {
        returnValue = F("Am Groß Ilseder Holz");
        break;
    }
    case 17291:
    {
        returnValue = F("Am Großacker");
        break;
    }
    case 17292:
    {
        returnValue = F("Am Großauweiher");
        break;
    }
    case 17293:
    {
        returnValue = F("Am Großbach");
        break;
    }
    case 17294:
    {
        returnValue = F("Am Großbaum");
        break;
    }
    case 17295:
    {
        returnValue = F("Am Großborn");
        break;
    }
    case 17296:
    {
        returnValue = F("Am Großeibstädter Weg");
        break;
    }
    case 17297:
    {
        returnValue = F("Am Großen Acker");
        break;
    }
    case 17298:
    {
        returnValue = F("Am Großen Bach");
        break;
    }
    case 17299:
    {
        returnValue = F("Am Großen Baum");
        break;
    }
    case 17300:
    {
        returnValue = F("Am Großen Berg");
        break;
    }
    case 17301:
    {
        returnValue = F("Am Großen Bleek");
        break;
    }
    case 17302:
    {
        returnValue = F("Am Großen Brink");
        break;
    }
    case 17303:
    {
        returnValue = F("Am Großen Bruchfeld");
        break;
    }
    case 17304:
    {
        returnValue = F("Am Großen Buckowsee");
        break;
    }
    case 17305:
    {
        returnValue = F("Am Großen Bullensee");
        break;
    }
    case 17306:
    {
        returnValue = F("Am Großen Busch");
        break;
    }
    case 17307:
    {
        returnValue = F("Am Großen Esch");
        break;
    }
    case 17308:
    {
        returnValue = F("Am Großen Falltor");
        break;
    }
    case 17309:
    {
        returnValue = F("Am Großen Feld");
        break;
    }
    case 17310:
    {
        returnValue = F("Am Großen Garten");
        break;
    }
    case 17311:
    {
        returnValue = F("Am Großen Gehölz");
        break;
    }
    case 17312:
    {
        returnValue = F("Am Großen Gleichberg");
        break;
    }
    case 17313:
    {
        returnValue = F("Am Großen Graben");
        break;
    }
    case 17314:
    {
        returnValue = F("Am Großen Grunde");
        break;
    }
    case 17315:
    {
        returnValue = F("Am Großen Hafen");
        break;
    }
    case 17316:
    {
        returnValue = F("Am Großen Hagen");
        break;
    }
    case 17317:
    {
        returnValue = F("Am Großen Heerweg");
        break;
    }
    case 17318:
    {
        returnValue = F("Am Großen Herrgott");
        break;
    }
    case 17319:
    {
        returnValue = F("Am Großen Holz");
        break;
    }
    case 17320:
    {
        returnValue = F("Am Großen Kamp");
        break;
    }
    case 17321:
    {
        returnValue = F("Am Großen Knappe");
        break;
    }
    case 17322:
    {
        returnValue = F("Am Großen Köppel");
        break;
    }
    case 17323:
    {
        returnValue = F("Am Großen Meer");
        break;
    }
    case 17324:
    {
        returnValue = F("Am Großen Moor");
        break;
    }
    case 17325:
    {
        returnValue = F("Am Großen Parsick");
        break;
    }
    case 17326:
    {
        returnValue = F("Am Großen Pfahl");
        break;
    }
    case 17327:
    {
        returnValue = F("Am Großen Scheid");
        break;
    }
    case 17328:
    {
        returnValue = F("Am Großen Schmiedekamp");
        break;
    }
    case 17329:
    {
        returnValue = F("Am Großen Selberg");
        break;
    }
    case 17330:
    {
        returnValue = F("Am Großen Sieke");
        break;
    }
    case 17331:
    {
        returnValue = F("Am Großen Soll");
        break;
    }
    case 17332:
    {
        returnValue = F("Am Großen Specken");
        break;
    }
    case 17333:
    {
        returnValue = F("Am Großen Stein");
        break;
    }
    case 17334:
    {
        returnValue = F("Am Großen Stich");
        break;
    }
    case 17335:
    {
        returnValue = F("Am Großen Stiege");
        break;
    }
    case 17336:
    {
        returnValue = F("Am Großen Stück");
        break;
    }
    case 17337:
    {
        returnValue = F("Am Großen Teich");
        break;
    }
    case 17338:
    {
        returnValue = F("Am Großen Teichfeld");
        break;
    }
    case 17339:
    {
        returnValue = F("Am Großen Tief");
        break;
    }
    case 17340:
    {
        returnValue = F("Am Großen Tor");
        break;
    }
    case 17341:
    {
        returnValue = F("Am Großen Unland");
        break;
    }
    case 17342:
    {
        returnValue = F("Am Großen Wald");
        break;
    }
    case 17343:
    {
        returnValue = F("Am Großen Wallgraben");
        break;
    }
    case 17344:
    {
        returnValue = F("Am Großen Wasser");
        break;
    }
    case 17345:
    {
        returnValue = F("Am Großen Weg");
        break;
    }
    case 17346:
    {
        returnValue = F("Am Großen Wege");
        break;
    }
    case 17347:
    {
        returnValue = F("Am Großen Wehr");
        break;
    }
    case 17348:
    {
        returnValue = F("Am Großen Weichweg");
        break;
    }
    case 17349:
    {
        returnValue = F("Am Großen Weserbogen");
        break;
    }
    case 17350:
    {
        returnValue = F("Am Großen Zug");
        break;
    }
    case 17351:
    {
        returnValue = F("Am Großenbach");
        break;
    }
    case 17352:
    {
        returnValue = F("Am Großfeld");
        break;
    }
    case 17353:
    {
        returnValue = F("Am Großgarten");
        break;
    }
    case 17354:
    {
        returnValue = F("Am Großhausberg");
        break;
    }
    case 17355:
    {
        returnValue = F("Am Großholz");
        break;
    }
    case 17356:
    {
        returnValue = F("Am Großlappen");
        break;
    }
    case 17357:
    {
        returnValue = F("Am Großmarkt");
        break;
    }
    case 17358:
    {
        returnValue = F("Am Großschabel");
        break;
    }
    case 17359:
    {
        returnValue = F("Am Großschock");
        break;
    }
    case 17360:
    {
        returnValue = F("Am Großsegel");
        break;
    }
    case 17361:
    {
        returnValue = F("Am Großsoll");
        break;
    }
    case 17362:
    {
        returnValue = F("Am Großsteig");
        break;
    }
    case 17363:
    {
        returnValue = F("Am Großteich");
        break;
    }
    case 17364:
    {
        returnValue = F("Am Grubebach");
        break;
    }
    case 17365:
    {
        returnValue = F("Am Grubenacker");
        break;
    }
    case 17366:
    {
        returnValue = F("Am Grubenbahnhof");
        break;
    }
    case 17367:
    {
        returnValue = F("Am Grubenberg");
        break;
    }
    case 17368:
    {
        returnValue = F("Am Grubener Weg");
        break;
    }
    case 17369:
    {
        returnValue = F("Am Grubenfeld");
        break;
    }
    case 17370:
    {
        returnValue = F("Am Grubengraben");
        break;
    }
    case 17371:
    {
        returnValue = F("Am Grubenpfad");
        break;
    }
    case 17372:
    {
        returnValue = F("Am Grubenstollen");
        break;
    }
    case 17373:
    {
        returnValue = F("Am Grubenteich");
        break;
    }
    case 17374:
    {
        returnValue = F("Am Grubenweg");
        break;
    }
    case 17375:
    {
        returnValue = F("Am Gruberbach");
        break;
    }
    case 17376:
    {
        returnValue = F("Am Gruberfeld");
        break;
    }
    case 17377:
    {
        returnValue = F("Am Grubfeld");
        break;
    }
    case 17378:
    {
        returnValue = F("Am Grubgarten");
        break;
    }
    case 17379:
    {
        returnValue = F("Am Grubig");
        break;
    }
    case 17380:
    {
        returnValue = F("Am Grubusch");
        break;
    }
    case 17381:
    {
        returnValue = F("Am Gruggelbusch");
        break;
    }
    case 17382:
    {
        returnValue = F("Am Gruithüs");
        break;
    }
    case 17383:
    {
        returnValue = F("Am Grumbach");
        break;
    }
    case 17384:
    {
        returnValue = F("Am Grumberg");
        break;
    }
    case 17385:
    {
        returnValue = F("Am Grummacker");
        break;
    }
    case 17386:
    {
        returnValue = F("Am Grunauer Berg");
        break;
    }
    case 17387:
    {
        returnValue = F("Am Grund");
        break;
    }
    case 17388:
    {
        returnValue = F("Am Grundacker");
        break;
    }
    case 17389:
    {
        returnValue = F("Am Grundbach");
        break;
    }
    case 17390:
    {
        returnValue = F("Am Grundberg");
        break;
    }
    case 17391:
    {
        returnValue = F("Am Grundbruch");
        break;
    }
    case 17392:
    {
        returnValue = F("Am Grundbächle");
        break;
    }
    case 17393:
    {
        returnValue = F("Am Grunde");
        break;
    }
    case 17394:
    {
        returnValue = F("Am Grunderfeld");
        break;
    }
    case 17395:
    {
        returnValue = F("Am Grunderhang");
        break;
    }
    case 17396:
    {
        returnValue = F("Am Grundfeld");
        break;
    }
    case 17397:
    {
        returnValue = F("Am Grundgarten");
        break;
    }
    case 17398:
    {
        returnValue = F("Am Grundgraben");
        break;
    }
    case 17399:
    {
        returnValue = F("Am Grundhof");
        break;
    }
    case 17400:
    {
        returnValue = F("Am Grundlehn");
        break;
    }
    case 17401:
    {
        returnValue = F("Am Grundlosen Kolk");
        break;
    }
    case 17402:
    {
        returnValue = F("Am Grundpütz");
        break;
    }
    case 17403:
    {
        returnValue = F("Am Grundrain");
        break;
    }
    case 17404:
    {
        returnValue = F("Am Grundsrain");
        break;
    }
    case 17405:
    {
        returnValue = F("Am Grundwasen");
        break;
    }
    case 17406:
    {
        returnValue = F("Am Grundwasser");
        break;
    }
    case 17407:
    {
        returnValue = F("Am Grundwassersee");
        break;
    }
    case 17408:
    {
        returnValue = F("Am Grundweiher");
        break;
    }
    case 17409:
    {
        returnValue = F("Am Gruneberg");
        break;
    }
    case 17410:
    {
        returnValue = F("Am Grunichsberg");
        break;
    }
    case 17411:
    {
        returnValue = F("Am Grunstedter Rain");
        break;
    }
    case 17412:
    {
        returnValue = F("Am Gruthölter");
        break;
    }
    case 17413:
    {
        returnValue = F("Am Gräbchen");
        break;
    }
    case 17414:
    {
        returnValue = F("Am Gräbel");
        break;
    }
    case 17415:
    {
        returnValue = F("Am Gräben");
        break;
    }
    case 17416:
    {
        returnValue = F("Am Gräbenbach");
        break;
    }
    case 17417:
    {
        returnValue = F("Am Gräbenwald");
        break;
    }
    case 17418:
    {
        returnValue = F("Am Gräberfeld");
        break;
    }
    case 17419:
    {
        returnValue = F("Am Gräbicht");
        break;
    }
    case 17420:
    {
        returnValue = F("Am Gräfenbach");
        break;
    }
    case 17421:
    {
        returnValue = F("Am Gräfenberg");
        break;
    }
    case 17422:
    {
        returnValue = F("Am Gräfengericht");
        break;
    }
    case 17423:
    {
        returnValue = F("Am Gräfenteich");
        break;
    }
    case 17424:
    {
        returnValue = F("Am Gräfenweiher");
        break;
    }
    case 17425:
    {
        returnValue = F("Am Gräfkreuz");
        break;
    }
    case 17426:
    {
        returnValue = F("Am Grättengarten");
        break;
    }
    case 17427:
    {
        returnValue = F("Am Gräulesberg");
        break;
    }
    case 17428:
    {
        returnValue = F("Am Grävenhorst");
        break;
    }
    case 17429:
    {
        returnValue = F("Am Grävenhäuschen");
        break;
    }
    case 17430:
    {
        returnValue = F("Am Gröben");
        break;
    }
    case 17431:
    {
        returnValue = F("Am Gröbziger Weg");
        break;
    }
    case 17432:
    {
        returnValue = F("Am Gröllsgraben");
        break;
    }
    case 17433:
    {
        returnValue = F("Am Gröning");
        break;
    }
    case 17434:
    {
        returnValue = F("Am Gröningskreuz");
        break;
    }
    case 17435:
    {
        returnValue = F("Am Grönland");
        break;
    }
    case 17436:
    {
        returnValue = F("Am Gröpelsberg");
        break;
    }
    case 17437:
    {
        returnValue = F("Am Grössinsee");
        break;
    }
    case 17438:
    {
        returnValue = F("Am Grötschenbach");
        break;
    }
    case 17439:
    {
        returnValue = F("Am Grübchen");
        break;
    }
    case 17440:
    {
        returnValue = F("Am Grübl");
        break;
    }
    case 17441:
    {
        returnValue = F("Am Grüble");
        break;
    }
    case 17442:
    {
        returnValue = F("Am Grüfter Wald");
        break;
    }
    case 17443:
    {
        returnValue = F("Am Grüggelgraben");
        break;
    }
    case 17444:
    {
        returnValue = F("Am Grün");
        break;
    }
    case 17445:
    {
        returnValue = F("Am Grünanger");
        break;
    }
    case 17446:
    {
        returnValue = F("Am Grünbach");
        break;
    }
    case 17447:
    {
        returnValue = F("Am Grünberg");
        break;
    }
    case 17448:
    {
        returnValue = F("Am Grünborn");
        break;
    }
    case 17449:
    {
        returnValue = F("Am Grünbühel");
        break;
    }
    case 17450:
    {
        returnValue = F("Am Grünbühl");
        break;
    }
    case 17451:
    {
        returnValue = F("Am Gründberg");
        break;
    }
    case 17452:
    {
        returnValue = F("Am Gründchen");
        break;
    }
    case 17453:
    {
        returnValue = F("Am Gründel");
        break;
    }
    case 17454:
    {
        returnValue = F("Am Gründelbach");
        break;
    }
    case 17455:
    {
        returnValue = F("Am Gründelgraben");
        break;
    }
    case 17456:
    {
        returnValue = F("Am Gründerweg");
        break;
    }
    case 17457:
    {
        returnValue = F("Am Gründerzentrum");
        break;
    }
    case 17458:
    {
        returnValue = F("Am Gründl");
        break;
    }
    case 17459:
    {
        returnValue = F("Am Gründla");
        break;
    }
    case 17460:
    {
        returnValue = F("Am Gründle");
        break;
    }
    case 17461:
    {
        returnValue = F("Am Gründlein");
        break;
    }
    case 17462:
    {
        returnValue = F("Am Gründleinsbach");
        break;
    }
    case 17463:
    {
        returnValue = F("Am Gründlesbuck");
        break;
    }
    case 17464:
    {
        returnValue = F("Am Grüneberg");
        break;
    }
    case 17465:
    {
        returnValue = F("Am Grüneck");
        break;
    }
    case 17466:
    {
        returnValue = F("Am Grünen");
        break;
    }
    case 17467:
    {
        returnValue = F("Am Grünen Anger");
        break;
    }
    case 17468:
    {
        returnValue = F("Am Grünen Baum");
        break;
    }
    case 17469:
    {
        returnValue = F("Am Grünen Berg");
        break;
    }
    case 17470:
    {
        returnValue = F("Am Grünen Bug");
        break;
    }
    case 17471:
    {
        returnValue = F("Am Grünen Eck");
        break;
    }
    case 17472:
    {
        returnValue = F("Am Grünen Feld");
        break;
    }
    case 17473:
    {
        returnValue = F("Am Grünen Fink");
        break;
    }
    case 17474:
    {
        returnValue = F("Am Grünen Gäßchen");
        break;
    }
    case 17475:
    {
        returnValue = F("Am Grünen Hain");
        break;
    }
    case 17476:
    {
        returnValue = F("Am Grünen Hang");
        break;
    }
    case 17477:
    {
        returnValue = F("Am Grünen Herrenweg");
        break;
    }
    case 17478:
    {
        returnValue = F("Am Grünen Häuschen");
        break;
    }
    case 17479:
    {
        returnValue = F("Am Grünen Kamp");
        break;
    }
    case 17480:
    {
        returnValue = F("Am Grünen Kranz");
        break;
    }
    case 17481:
    {
        returnValue = F("Am Grünen Kranze");
        break;
    }
    case 17482:
    {
        returnValue = F("Am Grünen Loch");
        break;
    }
    case 17483:
    {
        returnValue = F("Am Grünen Markt");
        break;
    }
    case 17484:
    {
        returnValue = F("Am Grünen Meer");
        break;
    }
    case 17485:
    {
        returnValue = F("Am Grünen Mühlenweg");
        break;
    }
    case 17486:
    {
        returnValue = F("Am Grünen Platz");
        break;
    }
    case 17487:
    {
        returnValue = F("Am Grünen Revier");
        break;
    }
    case 17488:
    {
        returnValue = F("Am Grünen Ring");
        break;
    }
    case 17489:
    {
        returnValue = F("Am Grünen Rock");
        break;
    }
    case 17490:
    {
        returnValue = F("Am Grünen See");
        break;
    }
    case 17491:
    {
        returnValue = F("Am Grünen Steig");
        break;
    }
    case 17492:
    {
        returnValue = F("Am Grünen Stück");
        break;
    }
    case 17493:
    {
        returnValue = F("Am Grünen Tal");
        break;
    }
    case 17494:
    {
        returnValue = F("Am Grünen Topf");
        break;
    }
    case 17495:
    {
        returnValue = F("Am Grünen Tor");
        break;
    }
    case 17496:
    {
        returnValue = F("Am Grünen Tälchen");
        break;
    }
    case 17497:
    {
        returnValue = F("Am Grünen Ufer");
        break;
    }
    case 17498:
    {
        returnValue = F("Am Grünen Wald");
        break;
    }
    case 17499:
    {
        returnValue = F("Am Grünen Weg");
        break;
    }
    case 17500:
    {
        returnValue = F("Am Grünen Wege");
        break;
    }
    case 17501:
    {
        returnValue = F("Am Grünen Wehr");
        break;
    }
    case 17502:
    {
        returnValue = F("Am Grünen Weiher");
        break;
    }
    case 17503:
    {
        returnValue = F("Am Grünen Winkel");
        break;
    }
    case 17504:
    {
        returnValue = F("Am Grünen Wäldchen");
        break;
    }
    case 17505:
    {
        returnValue = F("Am Grünen Zentrum");
        break;
    }
    case 17506:
    {
        returnValue = F("Am Grünen Zipfel");
        break;
    }
    case 17507:
    {
        returnValue = F("Am Grünen Zweig");
        break;
    }
    case 17508:
    {
        returnValue = F("Am Grünenberg");
        break;
    }
    case 17509:
    {
        returnValue = F("Am Grünewald");
        break;
    }
    case 17510:
    {
        returnValue = F("Am Grünfeld");
        break;
    }
    case 17511:
    {
        returnValue = F("Am Grüngürtel");
        break;
    }
    case 17512:
    {
        returnValue = F("Am Grünhaus");
        break;
    }
    case 17513:
    {
        returnValue = F("Am Grünholz");
        break;
    }
    case 17514:
    {
        returnValue = F("Am Grünhufer Teich");
        break;
    }
    case 17515:
    {
        returnValue = F("Am Grünhut");
        break;
    }
    case 17516:
    {
        returnValue = F("Am Grüning");
        break;
    }
    case 17517:
    {
        returnValue = F("Am Grünland");
        break;
    }
    case 17518:
    {
        returnValue = F("Am Grünlingsbaum");
        break;
    }
    case 17519:
    {
        returnValue = F("Am Grünloch");
        break;
    }
    case 17520:
    {
        returnValue = F("Am Grünnigkengraben");
        break;
    }
    case 17521:
    {
        returnValue = F("Am Grünower See");
        break;
    }
    case 17522:
    {
        returnValue = F("Am Grünsberg");
        break;
    }
    case 17523:
    {
        returnValue = F("Am Grünsee");
        break;
    }
    case 17524:
    {
        returnValue = F("Am Grünsfelder Weg");
        break;
    }
    case 17525:
    {
        returnValue = F("Am Grünstein");
        break;
    }
    case 17526:
    {
        returnValue = F("Am Grünstreifen");
        break;
    }
    case 17527:
    {
        returnValue = F("Am Grünten");
        break;
    }
    case 17528:
    {
        returnValue = F("Am Grünzug");
        break;
    }
    case 17529:
    {
        returnValue = F("Am Grüppental");
        break;
    }
    case 17530:
    {
        returnValue = F("Am Grüsselbach");
        break;
    }
    case 17531:
    {
        returnValue = F("Am Grütherhof");
        break;
    }
    case 17532:
    {
        returnValue = F("Am Grützteich");
        break;
    }
    case 17533:
    {
        returnValue = F("Am Gschaitbichl");
        break;
    }
    case 17534:
    {
        returnValue = F("Am Gscheierbichl");
        break;
    }
    case 17535:
    {
        returnValue = F("Am Gschilch");
        break;
    }
    case 17536:
    {
        returnValue = F("Am Gschlag");
        break;
    }
    case 17537:
    {
        returnValue = F("Am Gschlatt");
        break;
    }
    case 17538:
    {
        returnValue = F("Am Gschwend");
        break;
    }
    case 17539:
    {
        returnValue = F("Am Gschwendfeld");
        break;
    }
    case 17540:
    {
        returnValue = F("Am Gschwendt");
        break;
    }
    case 17541:
    {
        returnValue = F("Am Gseng");
        break;
    }
    case 17542:
    {
        returnValue = F("Am Gstad");
        break;
    }
    case 17543:
    {
        returnValue = F("Am Gstadlhof");
        break;
    }
    case 17544:
    {
        returnValue = F("Am Gstadthof");
        break;
    }
    case 17545:
    {
        returnValue = F("Am Gstaudach");
        break;
    }
    case 17546:
    {
        returnValue = F("Am Gsteig");
        break;
    }
    case 17547:
    {
        returnValue = F("Am Gsteigacker");
        break;
    }
    case 17548:
    {
        returnValue = F("Am Gsteinert");
        break;
    }
    case 17549:
    {
        returnValue = F("Am Gstocket");
        break;
    }
    case 17550:
    {
        returnValue = F("Am Gstöggert");
        break;
    }
    case 17551:
    {
        returnValue = F("Am Gstütt");
        break;
    }
    case 17552:
    {
        returnValue = F("Am Guaitapark");
        break;
    }
    case 17553:
    {
        returnValue = F("Am Guckberg");
        break;
    }
    case 17554:
    {
        returnValue = F("Am Guckelsberg");
        break;
    }
    case 17555:
    {
        returnValue = F("Am Guckenberg");
        break;
    }
    case 17556:
    {
        returnValue = F("Am Guckenbühl");
        break;
    }
    case 17557:
    {
        returnValue = F("Am Gucklitz");
        break;
    }
    case 17558:
    {
        returnValue = F("Am Guckrain");
        break;
    }
    case 17559:
    {
        returnValue = F("Am Gudenberg");
        break;
    }
    case 17560:
    {
        returnValue = F("Am Gudensberger Feld");
        break;
    }
    case 17561:
    {
        returnValue = F("Am Gudiberg");
        break;
    }
    case 17562:
    {
        returnValue = F("Am Guggenbühl");
        break;
    }
    case 17563:
    {
        returnValue = F("Am Guggenloch");
        break;
    }
    case 17564:
    {
        returnValue = F("Am Guhligsberg");
        break;
    }
    case 17565:
    {
        returnValue = F("Am Guldenacker");
        break;
    }
    case 17566:
    {
        returnValue = F("Am Guldenbach");
        break;
    }
    case 17567:
    {
        returnValue = F("Am Guldenort");
        break;
    }
    case 17568:
    {
        returnValue = F("Am Gumbert");
        break;
    }
    case 17569:
    {
        returnValue = F("Am Gummel");
        break;
    }
    case 17570:
    {
        returnValue = F("Am Gumpen");
        break;
    }
    case 17571:
    {
        returnValue = F("Am Gumpertzhof");
        break;
    }
    case 17572:
    {
        returnValue = F("Am Gundhof");
        break;
    }
    case 17573:
    {
        returnValue = F("Am Gunterbach");
        break;
    }
    case 17574:
    {
        returnValue = F("Am Guntramshügel");
        break;
    }
    case 17575:
    {
        returnValue = F("Am Gupfen");
        break;
    }
    case 17576:
    {
        returnValue = F("Am Guppenloch");
        break;
    }
    case 17577:
    {
        returnValue = F("Am Gurgeskamp");
        break;
    }
    case 17578:
    {
        returnValue = F("Am Gusswerk");
        break;
    }
    case 17579:
    {
        returnValue = F("Am Gustav-Freytag-Park");
        break;
    }
    case 17580:
    {
        returnValue = F("Am Gut");
        break;
    }
    case 17581:
    {
        returnValue = F("Am Gut Baarking");
        break;
    }
    case 17582:
    {
        returnValue = F("Am Gut Beinrode");
        break;
    }
    case 17583:
    {
        returnValue = F("Am Gut Erichshof");
        break;
    }
    case 17584:
    {
        returnValue = F("Am Gut Heideck");
        break;
    }
    case 17585:
    {
        returnValue = F("Am Gut Sanderbusch");
        break;
    }
    case 17586:
    {
        returnValue = F("Am Gut Slavanien");
        break;
    }
    case 17587:
    {
        returnValue = F("Am Gutberg");
        break;
    }
    case 17588:
    {
        returnValue = F("Am Gute");
        break;
    }
    case 17589:
    {
        returnValue = F("Am Guten Leitpfad");
        break;
    }
    case 17590:
    {
        returnValue = F("Am Guten Strauch");
        break;
    }
    case 17591:
    {
        returnValue = F("Am Gutenbrunnen");
        break;
    }
    case 17592:
    {
        returnValue = F("Am Gutleuthaus");
        break;
    }
    case 17593:
    {
        returnValue = F("Am Gutort");
        break;
    }
    case 17594:
    {
        returnValue = F("Am Gutsacker");
        break;
    }
    case 17595:
    {
        returnValue = F("Am Gutsberg");
        break;
    }
    case 17596:
    {
        returnValue = F("Am Gutschbach");
        break;
    }
    case 17597:
    {
        returnValue = F("Am Gutsfeld");
        break;
    }
    case 17598:
    {
        returnValue = F("Am Gutsgarten");
        break;
    }
    case 17599:
    {
        returnValue = F("Am Gutshaus");
        break;
    }
    case 17600:
    {
        returnValue = F("Am Gutshof");
        break;
    }
    case 17601:
    {
        returnValue = F("Am Gutspark");
        break;
    }
    case 17602:
    {
        returnValue = F("Am Gutsteich");
        break;
    }
    case 17603:
    {
        returnValue = F("Am Gutsweg");
        break;
    }
    case 17604:
    {
        returnValue = F("Am Gweis");
        break;
    }
    case 17605:
    {
        returnValue = F("Am Gwend");
        break;
    }
    case 17606:
    {
        returnValue = F("Am Gwendt");
        break;
    }
    case 17607:
    {
        returnValue = F("Am Gwändenplatz");
        break;
    }
    case 17608:
    {
        returnValue = F("Am Gwändle");
        break;
    }
    case 17609:
    {
        returnValue = F("Am Gymnasium");
        break;
    }
    case 17610:
    {
        returnValue = F("Am Gähn");
        break;
    }
    case 17611:
    {
        returnValue = F("Am Gälgesberg");
        break;
    }
    case 17612:
    {
        returnValue = F("Am Gängele");
        break;
    }
    case 17613:
    {
        returnValue = F("Am Gängle");
        break;
    }
    case 17614:
    {
        returnValue = F("Am Gänglein");
        break;
    }
    case 17615:
    {
        returnValue = F("Am Gänsacker");
        break;
    }
    case 17616:
    {
        returnValue = F("Am Gänsanger");
        break;
    }
    case 17617:
    {
        returnValue = F("Am Gänsbach");
        break;
    }
    case 17618:
    {
        returnValue = F("Am Gänsberg");
        break;
    }
    case 17619:
    {
        returnValue = F("Am Gänsborn");
        break;
    }
    case 17620:
    {
        returnValue = F("Am Gänsbrunnen");
        break;
    }
    case 17621:
    {
        returnValue = F("Am Gänsbuck");
        break;
    }
    case 17622:
    {
        returnValue = F("Am Gänsbuckel");
        break;
    }
    case 17623:
    {
        returnValue = F("Am Gänsbuckl");
        break;
    }
    case 17624:
    {
        returnValue = F("Am Gänsbügl");
        break;
    }
    case 17625:
    {
        returnValue = F("Am Gänsbühl");
        break;
    }
    case 17626:
    {
        returnValue = F("Am Gänschenwald");
        break;
    }
    case 17627:
    {
        returnValue = F("Am Gänseacker");
        break;
    }
    case 17628:
    {
        returnValue = F("Am Gänseanger");
        break;
    }
    case 17629:
    {
        returnValue = F("Am Gänsebach");
        break;
    }
    case 17630:
    {
        returnValue = F("Am Gänseberg");
        break;
    }
    case 17631:
    {
        returnValue = F("Am Gänsebleek");
        break;
    }
    case 17632:
    {
        returnValue = F("Am Gänseborn");
        break;
    }
    case 17633:
    {
        returnValue = F("Am Gänsebrink");
        break;
    }
    case 17634:
    {
        returnValue = F("Am Gänsebruch");
        break;
    }
    case 17635:
    {
        returnValue = F("Am Gänsedörfchen");
        break;
    }
    case 17636:
    {
        returnValue = F("Am Gänsefleck");
        break;
    }
    case 17637:
    {
        returnValue = F("Am Gänsefuß");
        break;
    }
    case 17638:
    {
        returnValue = F("Am Gänsegarten");
        break;
    }
    case 17639:
    {
        returnValue = F("Am Gänsegraben");
        break;
    }
    case 17640:
    {
        returnValue = F("Am Gänsegrund");
        break;
    }
    case 17641:
    {
        returnValue = F("Am Gänsehals");
        break;
    }
    case 17642:
    {
        returnValue = F("Am Gänsehorn");
        break;
    }
    case 17643:
    {
        returnValue = F("Am Gänsei");
        break;
    }
    case 17644:
    {
        returnValue = F("Am Gänsekamp");
        break;
    }
    case 17645:
    {
        returnValue = F("Am Gänsekampe");
        break;
    }
    case 17646:
    {
        returnValue = F("Am Gänseloh");
        break;
    }
    case 17647:
    {
        returnValue = F("Am Gänsemarkt");
        break;
    }
    case 17648:
    {
        returnValue = F("Am Gänsemorgen");
        break;
    }
    case 17649:
    {
        returnValue = F("Am Gänseort");
        break;
    }
    case 17650:
    {
        returnValue = F("Am Gänsepark");
        break;
    }
    case 17651:
    {
        returnValue = F("Am Gänsepfad");
        break;
    }
    case 17652:
    {
        returnValue = F("Am Gänseplan");
        break;
    }
    case 17653:
    {
        returnValue = F("Am Gänseplatz");
        break;
    }
    case 17654:
    {
        returnValue = F("Am Gänsepütz");
        break;
    }
    case 17655:
    {
        returnValue = F("Am Gänserasen");
        break;
    }
    case 17656:
    {
        returnValue = F("Am Gänseried");
        break;
    }
    case 17657:
    {
        returnValue = F("Am Gänsertsberg");
        break;
    }
    case 17658:
    {
        returnValue = F("Am Gänseteich");
        break;
    }
    case 17659:
    {
        returnValue = F("Am Gänsewasen");
        break;
    }
    case 17660:
    {
        returnValue = F("Am Gänseweg");
        break;
    }
    case 17661:
    {
        returnValue = F("Am Gänseweiher");
        break;
    }
    case 17662:
    {
        returnValue = F("Am Gänsfleckenweg");
        break;
    }
    case 17663:
    {
        returnValue = F("Am Gänsfuß");
        break;
    }
    case 17664:
    {
        returnValue = F("Am Gänsgarten");
        break;
    }
    case 17665:
    {
        returnValue = F("Am Gänsgraben");
        break;
    }
    case 17666:
    {
        returnValue = F("Am Gänsgries");
        break;
    }
    case 17667:
    {
        returnValue = F("Am Gänsgrund");
        break;
    }
    case 17668:
    {
        returnValue = F("Am Gänskragen");
        break;
    }
    case 17669:
    {
        returnValue = F("Am Gänsrain");
        break;
    }
    case 17670:
    {
        returnValue = F("Am Gänsrasen");
        break;
    }
    case 17671:
    {
        returnValue = F("Am Gänssee");
        break;
    }
    case 17672:
    {
        returnValue = F("Am Gänssteg");
        break;
    }
    case 17673:
    {
        returnValue = F("Am Gänsteich");
        break;
    }
    case 17674:
    {
        returnValue = F("Am Gänstrieb");
        break;
    }
    case 17675:
    {
        returnValue = F("Am Gänsturm");
        break;
    }
    case 17676:
    {
        returnValue = F("Am Gänswasen");
        break;
    }
    case 17677:
    {
        returnValue = F("Am Gänsweiher");
        break;
    }
    case 17678:
    {
        returnValue = F("Am Gärk");
        break;
    }
    case 17679:
    {
        returnValue = F("Am Gärtchen");
        break;
    }
    case 17680:
    {
        returnValue = F("Am Gärtenich");
        break;
    }
    case 17681:
    {
        returnValue = F("Am Gärtla");
        break;
    }
    case 17682:
    {
        returnValue = F("Am Gärtlesberg");
        break;
    }
    case 17683:
    {
        returnValue = F("Am Gärtling");
        break;
    }
    case 17684:
    {
        returnValue = F("Am Gärtnerbruch");
        break;
    }
    case 17685:
    {
        returnValue = F("Am Gärtnergarten");
        break;
    }
    case 17686:
    {
        returnValue = F("Am Gärtnergrund");
        break;
    }
    case 17687:
    {
        returnValue = F("Am Gärtnerkrug");
        break;
    }
    case 17688:
    {
        returnValue = F("Am Gäsbach");
        break;
    }
    case 17689:
    {
        returnValue = F("Am Gäsekeborn");
        break;
    }
    case 17690:
    {
        returnValue = F("Am Gässchen");
        break;
    }
    case 17691:
    {
        returnValue = F("Am Gässel");
        break;
    }
    case 17692:
    {
        returnValue = F("Am Gässele");
        break;
    }
    case 17693:
    {
        returnValue = F("Am Gässelebach");
        break;
    }
    case 17694:
    {
        returnValue = F("Am Gässerl");
        break;
    }
    case 17695:
    {
        returnValue = F("Am Gässle");
        break;
    }
    case 17696:
    {
        returnValue = F("Am Gäulsbach");
        break;
    }
    case 17697:
    {
        returnValue = F("Am Gäßchen");
        break;
    }
    case 17698:
    {
        returnValue = F("Am Gäßle");
        break;
    }
    case 17699:
    {
        returnValue = F("Am Gäßlein");
        break;
    }
    case 17700:
    {
        returnValue = F("Am Göbel");
        break;
    }
    case 17701:
    {
        returnValue = F("Am Göbitzer Teich");
        break;
    }
    case 17702:
    {
        returnValue = F("Am Göbricher Pfad");
        break;
    }
    case 17703:
    {
        returnValue = F("Am Göckel");
        break;
    }
    case 17704:
    {
        returnValue = F("Am Göckenteich");
        break;
    }
    case 17705:
    {
        returnValue = F("Am Göfet");
        break;
    }
    case 17706:
    {
        returnValue = F("Am Gögelhof");
        break;
    }
    case 17707:
    {
        returnValue = F("Am Gögerl");
        break;
    }
    case 17708:
    {
        returnValue = F("Am Göhlenbach");
        break;
    }
    case 17709:
    {
        returnValue = F("Am Göhren");
        break;
    }
    case 17710:
    {
        returnValue = F("Am Göhrenanger");
        break;
    }
    case 17711:
    {
        returnValue = F("Am Göhrkenberg");
        break;
    }
    case 17712:
    {
        returnValue = F("Am Gökelsgarten");
        break;
    }
    case 17713:
    {
        returnValue = F("Am Göldner");
        break;
    }
    case 17714:
    {
        returnValue = F("Am Gölling");
        break;
    }
    case 17715:
    {
        returnValue = F("Am Gönnabach");
        break;
    }
    case 17716:
    {
        returnValue = F("Am Gönnenicht");
        break;
    }
    case 17717:
    {
        returnValue = F("Am Göpelteich");
        break;
    }
    case 17718:
    {
        returnValue = F("Am Göppenbüchl");
        break;
    }
    case 17719:
    {
        returnValue = F("Am Görberg");
        break;
    }
    case 17720:
    {
        returnValue = F("Am Gördensee");
        break;
    }
    case 17721:
    {
        returnValue = F("Am Gördenwald");
        break;
    }
    case 17722:
    {
        returnValue = F("Am Görgestor");
        break;
    }
    case 17723:
    {
        returnValue = F("Am Görmarschen Kreuz");
        break;
    }
    case 17724:
    {
        returnValue = F("Am Görneweg");
        break;
    }
    case 17725:
    {
        returnValue = F("Am Görnsee");
        break;
    }
    case 17726:
    {
        returnValue = F("Am Görresberg");
        break;
    }
    case 17727:
    {
        returnValue = F("Am Görzenberg");
        break;
    }
    case 17728:
    {
        returnValue = F("Am Göslings Siek");
        break;
    }
    case 17729:
    {
        returnValue = F("Am Göterberg");
        break;
    }
    case 17730:
    {
        returnValue = F("Am Götschel");
        break;
    }
    case 17731:
    {
        returnValue = F("Am Göttgenberg");
        break;
    }
    case 17732:
    {
        returnValue = F("Am Göttlesbrunn");
        break;
    }
    case 17733:
    {
        returnValue = F("Am Göttwitzsee");
        break;
    }
    case 17734:
    {
        returnValue = F("Am Götzberg");
        break;
    }
    case 17735:
    {
        returnValue = F("Am Götzenbach");
        break;
    }
    case 17736:
    {
        returnValue = F("Am Götzenfels");
        break;
    }
    case 17737:
    {
        returnValue = F("Am Götzengarten");
        break;
    }
    case 17738:
    {
        returnValue = F("Am Götzenstein");
        break;
    }
    case 17739:
    {
        returnValue = F("Am Götzplatz");
        break;
    }
    case 17740:
    {
        returnValue = F("Am Götzschkenberg");
        break;
    }
    case 17741:
    {
        returnValue = F("Am Güdecken");
        break;
    }
    case 17742:
    {
        returnValue = F("Am Gühlen");
        break;
    }
    case 17743:
    {
        returnValue = F("Am Güllenacker");
        break;
    }
    case 17744:
    {
        returnValue = F("Am Güller");
        break;
    }
    case 17745:
    {
        returnValue = F("Am Güllhof");
        break;
    }
    case 17746:
    {
        returnValue = F("Am Gülser Weg");
        break;
    }
    case 17747:
    {
        returnValue = F("Am Gültum");
        break;
    }
    case 17748:
    {
        returnValue = F("Am Gülzer Wald");
        break;
    }
    case 17749:
    {
        returnValue = F("Am Gümmekanal");
        break;
    }
    case 17750:
    {
        returnValue = F("Am Günnemoor");
        break;
    }
    case 17751:
    {
        returnValue = F("Am Günster");
        break;
    }
    case 17752:
    {
        returnValue = F("Am Güntershof");
        break;
    }
    case 17753:
    {
        returnValue = F("Am Güntherberg");
        break;
    }
    case 17754:
    {
        returnValue = F("Am Güntherteich");
        break;
    }
    case 17755:
    {
        returnValue = F("Am Güssgraben");
        break;
    }
    case 17756:
    {
        returnValue = F("Am Güstrower Tor");
        break;
    }
    case 17757:
    {
        returnValue = F("Am Güterbahnhof");
        break;
    }
    case 17758:
    {
        returnValue = F("Am Güterboden");
        break;
    }
    case 17759:
    {
        returnValue = F("Am Güthlein");
        break;
    }
    case 17760:
    {
        returnValue = F("Am Gütle");
        break;
    }
    case 17761:
    {
        returnValue = F("Am Gütterwieschen");
        break;
    }
    case 17762:
    {
        returnValue = F("Am Güßgraben");
        break;
    }
    case 17763:
    {
        returnValue = F("Am Haag");
        break;
    }
    case 17764:
    {
        returnValue = F("Am Haagen");
        break;
    }
    case 17765:
    {
        returnValue = F("Am Haagenpfädchen");
        break;
    }
    case 17766:
    {
        returnValue = F("Am Haager Feld");
        break;
    }
    case 17767:
    {
        returnValue = F("Am Haaggarten");
        break;
    }
    case 17768:
    {
        returnValue = F("Am Haagrain");
        break;
    }
    case 17769:
    {
        returnValue = F("Am Haaksen");
        break;
    }
    case 17770:
    {
        returnValue = F("Am Haanes");
        break;
    }
    case 17771:
    {
        returnValue = F("Am Haar");
        break;
    }
    case 17772:
    {
        returnValue = F("Am Haaranger");
        break;
    }
    case 17773:
    {
        returnValue = F("Am Haarbach");
        break;
    }
    case 17774:
    {
        returnValue = F("Am Haarberg");
        break;
    }
    case 17775:
    {
        returnValue = F("Am Haarborn");
        break;
    }
    case 17776:
    {
        returnValue = F("Am Haardtblick");
        break;
    }
    case 17777:
    {
        returnValue = F("Am Haardtchen");
        break;
    }
    case 17778:
    {
        returnValue = F("Am Haardtstadion");
        break;
    }
    case 17779:
    {
        returnValue = F("Am Haardtwald");
        break;
    }
    case 17780:
    {
        returnValue = F("Am Haarhaus");
        break;
    }
    case 17781:
    {
        returnValue = F("Am Haarkamp");
        break;
    }
    case 17782:
    {
        returnValue = F("Am Haarland");
        break;
    }
    case 17783:
    {
        returnValue = F("Am Haarplatz");
        break;
    }
    case 17784:
    {
        returnValue = F("Am Haarstrang");
        break;
    }
    case 17785:
    {
        returnValue = F("Am Haas");
        break;
    }
    case 17786:
    {
        returnValue = F("Am Haasberg");
        break;
    }
    case 17787:
    {
        returnValue = F("Am Haasehof");
        break;
    }
    case 17788:
    {
        returnValue = F("Am Habach");
        break;
    }
    case 17789:
    {
        returnValue = F("Am Habberg");
        break;
    }
    case 17790:
    {
        returnValue = F("Am Habel");
        break;
    }
    case 17791:
    {
        returnValue = F("Am Habelbach");
        break;
    }
    case 17792:
    {
        returnValue = F("Am Habenberg");
        break;
    }
    case 17793:
    {
        returnValue = F("Am Habenhauser Moor");
        break;
    }
    case 17794:
    {
        returnValue = F("Am Haberacker");
        break;
    }
    case 17795:
    {
        returnValue = F("Am Haberberg");
        break;
    }
    case 17796:
    {
        returnValue = F("Am Haberbrünnchen");
        break;
    }
    case 17797:
    {
        returnValue = F("Am Haberkamp");
        break;
    }
    case 17798:
    {
        returnValue = F("Am Haberland");
        break;
    }
    case 17799:
    {
        returnValue = F("Am Haberort");
        break;
    }
    case 17800:
    {
        returnValue = F("Am Habersberg");
        break;
    }
    case 17801:
    {
        returnValue = F("Am Haberstroh");
        break;
    }
    case 17802:
    {
        returnValue = F("Am Habertäle");
        break;
    }
    case 17803:
    {
        returnValue = F("Am Habichtfang");
        break;
    }
    case 17804:
    {
        returnValue = F("Am Habichtsbach");
        break;
    }
    case 17805:
    {
        returnValue = F("Am Habichtsberg");
        break;
    }
    case 17806:
    {
        returnValue = F("Am Habichtsfang");
        break;
    }
    case 17807:
    {
        returnValue = F("Am Habichtshof");
        break;
    }
    case 17808:
    {
        returnValue = F("Am Habichtshorst");
        break;
    }
    case 17809:
    {
        returnValue = F("Am Habichtskamp");
        break;
    }
    case 17810:
    {
        returnValue = F("Am Habichtsschloot");
        break;
    }
    case 17811:
    {
        returnValue = F("Am Habichtstal");
        break;
    }
    case 17812:
    {
        returnValue = F("Am Habichtswald");
        break;
    }
    case 17813:
    {
        returnValue = F("Am Habsberg");
        break;
    }
    case 17814:
    {
        returnValue = F("Am Habuch");
        break;
    }
    case 17815:
    {
        returnValue = F("Am Hach");
        break;
    }
    case 17816:
    {
        returnValue = F("Am Hachberg");
        break;
    }
    case 17817:
    {
        returnValue = F("Am Hachehof");
        break;
    }
    case 17818:
    {
        returnValue = F("Am Hachelbach");
        break;
    }
    case 17819:
    {
        returnValue = F("Am Hachen");
        break;
    }
    case 17820:
    {
        returnValue = F("Am Hachenbruch");
        break;
    }
    case 17821:
    {
        returnValue = F("Am Hachengarten");
        break;
    }
    case 17822:
    {
        returnValue = F("Am Hacheufer");
        break;
    }
    case 17823:
    {
        returnValue = F("Am Hachinger Bach");
        break;
    }
    case 17824:
    {
        returnValue = F("Am Hackberg");
        break;
    }
    case 17825:
    {
        returnValue = F("Am Hackebeil");
        break;
    }
    case 17826:
    {
        returnValue = F("Am Hackeberg");
        break;
    }
    case 17827:
    {
        returnValue = F("Am Hackeland");
        break;
    }
    case 17828:
    {
        returnValue = F("Am Hackelbach");
        break;
    }
    case 17829:
    {
        returnValue = F("Am Hackelberg");
        break;
    }
    case 17830:
    {
        returnValue = F("Am Hackelfeld");
        break;
    }
    case 17831:
    {
        returnValue = F("Am Hacken");
        break;
    }
    case 17832:
    {
        returnValue = F("Am Hackenbach");
        break;
    }
    case 17833:
    {
        returnValue = F("Am Hackenberg");
        break;
    }
    case 17834:
    {
        returnValue = F("Am Hackenborn");
        break;
    }
    case 17835:
    {
        returnValue = F("Am Hackenzaun");
        break;
    }
    case 17836:
    {
        returnValue = F("Am Hackerfeld");
        break;
    }
    case 17837:
    {
        returnValue = F("Am Hackfeld");
        break;
    }
    case 17838:
    {
        returnValue = F("Am Hackkamp");
        break;
    }
    case 17839:
    {
        returnValue = F("Am Hackland");
        break;
    }
    case 17840:
    {
        returnValue = F("Am Hacklochsberg");
        break;
    }
    case 17841:
    {
        returnValue = F("Am Hadamarer Berg");
        break;
    }
    case 17842:
    {
        returnValue = F("Am Haddebyer Noor");
        break;
    }
    case 17843:
    {
        returnValue = F("Am Hader");
        break;
    }
    case 17844:
    {
        returnValue = F("Am Haderbaum");
        break;
    }
    case 17845:
    {
        returnValue = F("Am Haderner Winkel");
        break;
    }
    case 17846:
    {
        returnValue = F("Am Hadersberg");
        break;
    }
    case 17847:
    {
        returnValue = F("Am Hafen");
        break;
    }
    case 17848:
    {
        returnValue = F("Am Hafen Ost");
        break;
    }
    case 17849:
    {
        returnValue = F("Am Hafen West");
        break;
    }
    case 17850:
    {
        returnValue = F("Am Hafen links");
        break;
    }
    case 17851:
    {
        returnValue = F("Am Hafen rechts");
        break;
    }
    case 17852:
    {
        returnValue = F("Am Hafenbrunnenbach");
        break;
    }
    case 17853:
    {
        returnValue = F("Am Hafendeck");
        break;
    }
    case 17854:
    {
        returnValue = F("Am Hafendorf");
        break;
    }
    case 17855:
    {
        returnValue = F("Am Hafensteig");
        break;
    }
    case 17856:
    {
        returnValue = F("Am Haferbach");
        break;
    }
    case 17857:
    {
        returnValue = F("Am Haferberg");
        break;
    }
    case 17858:
    {
        returnValue = F("Am Haferbründl");
        break;
    }
    case 17859:
    {
        returnValue = F("Am Hafereck");
        break;
    }
    case 17860:
    {
        returnValue = F("Am Haferfeld");
        break;
    }
    case 17861:
    {
        returnValue = F("Am Haferhaus");
        break;
    }
    case 17862:
    {
        returnValue = F("Am Haferhof");
        break;
    }
    case 17863:
    {
        returnValue = F("Am Haferkamp");
        break;
    }
    case 17864:
    {
        returnValue = F("Am Hafersiek");
        break;
    }
    case 17865:
    {
        returnValue = F("Am Haferstück");
        break;
    }
    case 17866:
    {
        returnValue = F("Am Haferteich");
        break;
    }
    case 17867:
    {
        returnValue = F("Am Haferweg");
        break;
    }
    case 17868:
    {
        returnValue = F("Am Haff");
        break;
    }
    case 17869:
    {
        returnValue = F("Am Haffeld");
        break;
    }
    case 17870:
    {
        returnValue = F("Am Haflingerhof");
        break;
    }
    case 17871:
    {
        returnValue = F("Am Hafnerfeld");
        break;
    }
    case 17872:
    {
        returnValue = F("Am Hafnerring");
        break;
    }
    case 17873:
    {
        returnValue = F("Am Hafnerskreuz");
        break;
    }
    case 17874:
    {
        returnValue = F("Am Hag");
        break;
    }
    case 17875:
    {
        returnValue = F("Am Hagay");
        break;
    }
    case 17876:
    {
        returnValue = F("Am Hagberg");
        break;
    }
    case 17877:
    {
        returnValue = F("Am Hagbügerl");
        break;
    }
    case 17878:
    {
        returnValue = F("Am Hagdorn");
        break;
    }
    case 17879:
    {
        returnValue = F("Am Hagedorn");
        break;
    }
    case 17880:
    {
        returnValue = F("Am Hagedornsknapp");
        break;
    }
    case 17881:
    {
        returnValue = F("Am Hagedörnchen");
        break;
    }
    case 17882:
    {
        returnValue = F("Am Hagekamp");
        break;
    }
    case 17883:
    {
        returnValue = F("Am Hagelberg");
        break;
    }
    case 17884:
    {
        returnValue = F("Am Hagelholz");
        break;
    }
    case 17885:
    {
        returnValue = F("Am Hagelkreuz");
        break;
    }
    case 17886:
    {
        returnValue = F("Am Hagelschlag");
        break;
    }
    case 17887:
    {
        returnValue = F("Am Hagelsrech");
        break;
    }
    case 17888:
    {
        returnValue = F("Am Hagen");
        break;
    }
    case 17889:
    {
        returnValue = F("Am Hagenacker");
        break;
    }
    case 17890:
    {
        returnValue = F("Am Hagenau");
        break;
    }
    case 17891:
    {
        returnValue = F("Am Hagenbach");
        break;
    }
    case 17892:
    {
        returnValue = F("Am Hagenbeck");
        break;
    }
    case 17893:
    {
        returnValue = F("Am Hagenberg");
        break;
    }
    case 17894:
    {
        returnValue = F("Am Hagenblech");
        break;
    }
    case 17895:
    {
        returnValue = F("Am Hagenbrink");
        break;
    }
    case 17896:
    {
        returnValue = F("Am Hagengraben");
        break;
    }
    case 17897:
    {
        returnValue = F("Am Hagenholz");
        break;
    }
    case 17898:
    {
        returnValue = F("Am Hagenkamp");
        break;
    }
    case 17899:
    {
        returnValue = F("Am Hagenkotten");
        break;
    }
    case 17900:
    {
        returnValue = F("Am Hagenpad");
        break;
    }
    case 17901:
    {
        returnValue = F("Am Hagenrein");
        break;
    }
    case 17902:
    {
        returnValue = F("Am Hagenweg");
        break;
    }
    case 17903:
    {
        returnValue = F("Am Hager");
        break;
    }
    case 17904:
    {
        returnValue = F("Am Hager Bichel");
        break;
    }
    case 17905:
    {
        returnValue = F("Am Hager Hof");
        break;
    }
    case 17906:
    {
        returnValue = F("Am Hagetun");
        break;
    }
    case 17907:
    {
        returnValue = F("Am Hagfeld");
        break;
    }
    case 17908:
    {
        returnValue = F("Am Haggarten");
        break;
    }
    case 17909:
    {
        returnValue = F("Am Hagmättle");
        break;
    }
    case 17910:
    {
        returnValue = F("Am Hagnfeld");
        break;
    }
    case 17911:
    {
        returnValue = F("Am Hagsbrink");
        break;
    }
    case 17912:
    {
        returnValue = F("Am Hagschutz");
        break;
    }
    case 17913:
    {
        returnValue = F("Am Hagwall");
        break;
    }
    case 17914:
    {
        returnValue = F("Am Hahkamp");
        break;
    }
    case 17915:
    {
        returnValue = F("Am Hahlacker");
        break;
    }
    case 17916:
    {
        returnValue = F("Am Hahn");
        break;
    }
    case 17917:
    {
        returnValue = F("Am Hahnacker");
        break;
    }
    case 17918:
    {
        returnValue = F("Am Hahnberg");
        break;
    }
    case 17919:
    {
        returnValue = F("Am Hahnbeul");
        break;
    }
    case 17920:
    {
        returnValue = F("Am Hahndorn");
        break;
    }
    case 17921:
    {
        returnValue = F("Am Hahndriesch");
        break;
    }
    case 17922:
    {
        returnValue = F("Am Hahnebargsmoor");
        break;
    }
    case 17923:
    {
        returnValue = F("Am Hahneberg");
        break;
    }
    case 17924:
    {
        returnValue = F("Am Hahneberge");
        break;
    }
    case 17925:
    {
        returnValue = F("Am Hahnen");
        break;
    }
    case 17926:
    {
        returnValue = F("Am Hahnenberg");
        break;
    }
    case 17927:
    {
        returnValue = F("Am Hahnenborn");
        break;
    }
    case 17928:
    {
        returnValue = F("Am Hahnenbuch");
        break;
    }
    case 17929:
    {
        returnValue = F("Am Hahnenbusch");
        break;
    }
    case 17930:
    {
        returnValue = F("Am Hahnenbühl");
        break;
    }
    case 17931:
    {
        returnValue = F("Am Hahnenfeld");
        break;
    }
    case 17932:
    {
        returnValue = F("Am Hahnengraben");
        break;
    }
    case 17933:
    {
        returnValue = F("Am Hahnenhof");
        break;
    }
    case 17934:
    {
        returnValue = F("Am Hahnenholz");
        break;
    }
    case 17935:
    {
        returnValue = F("Am Hahnenhübel");
        break;
    }
    case 17936:
    {
        returnValue = F("Am Hahnenkamp");
        break;
    }
    case 17937:
    {
        returnValue = F("Am Hahnenklau");
        break;
    }
    case 17938:
    {
        returnValue = F("Am Hahnenkleer Berg");
        break;
    }
    case 17939:
    {
        returnValue = F("Am Hahnenkopf");
        break;
    }
    case 17940:
    {
        returnValue = F("Am Hahnenkreuz");
        break;
    }
    case 17941:
    {
        returnValue = F("Am Hahnenkräher");
        break;
    }
    case 17942:
    {
        returnValue = F("Am Hahnenmoor");
        break;
    }
    case 17943:
    {
        returnValue = F("Am Hahnenpohl");
        break;
    }
    case 17944:
    {
        returnValue = F("Am Hahnenrech");
        break;
    }
    case 17945:
    {
        returnValue = F("Am Hahnenschnabel");
        break;
    }
    case 17946:
    {
        returnValue = F("Am Hahnenstück");
        break;
    }
    case 17947:
    {
        returnValue = F("Am Hahnenwall");
        break;
    }
    case 17948:
    {
        returnValue = F("Am Hahnenweg");
        break;
    }
    case 17949:
    {
        returnValue = F("Am Hahnenwege");
        break;
    }
    case 17950:
    {
        returnValue = F("Am Hahnenweiher");
        break;
    }
    case 17951:
    {
        returnValue = F("Am Hahnenwinkel");
        break;
    }
    case 17952:
    {
        returnValue = F("Am Hahner Busch");
        break;
    }
    case 17953:
    {
        returnValue = F("Am Hahnewald");
        break;
    }
    case 17954:
    {
        returnValue = F("Am Hahnfeld");
        break;
    }
    case 17955:
    {
        returnValue = F("Am Hahngarten");
        break;
    }
    case 17956:
    {
        returnValue = F("Am Hahngraben");
        break;
    }
    case 17957:
    {
        returnValue = F("Am Hahnrain");
        break;
    }
    case 17958:
    {
        returnValue = F("Am Hahnsberg");
        break;
    }
    case 17959:
    {
        returnValue = F("Am Hahnscheid");
        break;
    }
    case 17960:
    {
        returnValue = F("Am Hahnstein");
        break;
    }
    case 17961:
    {
        returnValue = F("Am Hahnwald");
        break;
    }
    case 17962:
    {
        returnValue = F("Am Hahnweg");
        break;
    }
    case 17963:
    {
        returnValue = F("Am Haibelt");
        break;
    }
    case 17964:
    {
        returnValue = F("Am Haiberg");
        break;
    }
    case 17965:
    {
        returnValue = F("Am Haiberhaag");
        break;
    }
    case 17966:
    {
        returnValue = F("Am Haibierl");
        break;
    }
    case 17967:
    {
        returnValue = F("Am Haid");
        break;
    }
    case 17968:
    {
        returnValue = F("Am Haid Park");
        break;
    }
    case 17969:
    {
        returnValue = F("Am Haidacker");
        break;
    }
    case 17970:
    {
        returnValue = F("Am Haidberg");
        break;
    }
    case 17971:
    {
        returnValue = F("Am Haidbuckel");
        break;
    }
    case 17972:
    {
        returnValue = F("Am Haidchensberg");
        break;
    }
    case 17973:
    {
        returnValue = F("Am Haideberg");
        break;
    }
    case 17974:
    {
        returnValue = F("Am Haidenburger Berg");
        break;
    }
    case 17975:
    {
        returnValue = F("Am Haidenkopf");
        break;
    }
    case 17976:
    {
        returnValue = F("Am Haideplacken");
        break;
    }
    case 17977:
    {
        returnValue = F("Am Haider-Feld");
        break;
    }
    case 17978:
    {
        returnValue = F("Am Haiderberg");
        break;
    }
    case 17979:
    {
        returnValue = F("Am Haiderholz");
        break;
    }
    case 17980:
    {
        returnValue = F("Am Haidesand");
        break;
    }
    case 17981:
    {
        returnValue = F("Am Haidfeld");
        break;
    }
    case 17982:
    {
        returnValue = F("Am Haidgauer Berg");
        break;
    }
    case 17983:
    {
        returnValue = F("Am Haidhof");
        break;
    }
    case 17984:
    {
        returnValue = F("Am Haidholz");
        break;
    }
    case 17985:
    {
        returnValue = F("Am Haidhäusl");
        break;
    }
    case 17986:
    {
        returnValue = F("Am Haidhügel");
        break;
    }
    case 17987:
    {
        returnValue = F("Am Haidknapp");
        break;
    }
    case 17988:
    {
        returnValue = F("Am Haidkrug");
        break;
    }
    case 17989:
    {
        returnValue = F("Am Haidlandsacker");
        break;
    }
    case 17990:
    {
        returnValue = F("Am Haidschlag");
        break;
    }
    case 17991:
    {
        returnValue = F("Am Haidstrauch");
        break;
    }
    case 17992:
    {
        returnValue = F("Am Haienpoth");
        break;
    }
    case 17993:
    {
        returnValue = F("Am Haierberg");
        break;
    }
    case 17994:
    {
        returnValue = F("Am Haiger");
        break;
    }
    case 17995:
    {
        returnValue = F("Am Hain");
        break;
    }
    case 17996:
    {
        returnValue = F("Am Hainach");
        break;
    }
    case 17997:
    {
        returnValue = F("Am Hainacker");
        break;
    }
    case 17998:
    {
        returnValue = F("Am Hainbach");
        break;
    }
    case 17999:
    {
        returnValue = F("Am Hainberg");
        break;
    }
    case 18000:
    {
        returnValue = F("Am Hainbirnbaum");
        break;
    }
    case 18001:
    {
        returnValue = F("Am Hainborn");
        break;
    }
    case 18002:
    {
        returnValue = F("Am Hainbrunnen");
        break;
    }
    case 18003:
    {
        returnValue = F("Am Hainbuchenbrunnen");
        break;
    }
    case 18004:
    {
        returnValue = F("Am Hainbüchlein");
        break;
    }
    case 18005:
    {
        returnValue = F("Am Hainchen");
        break;
    }
    case 18006:
    {
        returnValue = F("Am Hainchesberg");
        break;
    }
    case 18007:
    {
        returnValue = F("Am Haindörnchen");
        break;
    }
    case 18008:
    {
        returnValue = F("Am Haineberg");
        break;
    }
    case 18009:
    {
        returnValue = F("Am Hainebuch");
        break;
    }
    case 18010:
    {
        returnValue = F("Am Hainer Berg");
        break;
    }
    case 18011:
    {
        returnValue = F("Am Hainerberg");
        break;
    }
    case 18012:
    {
        returnValue = F("Am Hainfeld");
        break;
    }
    case 18013:
    {
        returnValue = F("Am Haingarten");
        break;
    }
    case 18014:
    {
        returnValue = F("Am Haingraben");
        break;
    }
    case 18015:
    {
        returnValue = F("Am Hainholz");
        break;
    }
    case 18016:
    {
        returnValue = F("Am Hainhop");
        break;
    }
    case 18017:
    {
        returnValue = F("Am Hainisch");
        break;
    }
    case 18018:
    {
        returnValue = F("Am Hainkamp");
        break;
    }
    case 18019:
    {
        returnValue = F("Am Hainkopf");
        break;
    }
    case 18020:
    {
        returnValue = F("Am Hainpark");
        break;
    }
    case 18021:
    {
        returnValue = F("Am Hainpfad");
        break;
    }
    case 18022:
    {
        returnValue = F("Am Hainrich");
        break;
    }
    case 18023:
    {
        returnValue = F("Am Hainroth");
        break;
    }
    case 18024:
    {
        returnValue = F("Am Hainsacker");
        break;
    }
    case 18025:
    {
        returnValue = F("Am Hainstein");
        break;
    }
    case 18026:
    {
        returnValue = F("Am Hainstieg");
        break;
    }
    case 18027:
    {
        returnValue = F("Am Hainstück");
        break;
    }
    case 18028:
    {
        returnValue = F("Am Hainszaun");
        break;
    }
    case 18029:
    {
        returnValue = F("Am Haintor");
        break;
    }
    case 18030:
    {
        returnValue = F("Am Haintriesch");
        break;
    }
    case 18031:
    {
        returnValue = F("Am Hainwald");
        break;
    }
    case 18032:
    {
        returnValue = F("Am Hainweg");
        break;
    }
    case 18033:
    {
        returnValue = F("Am Hainwinkel");
        break;
    }
    case 18034:
    {
        returnValue = F("Am Hainzenberg");
        break;
    }
    case 18035:
    {
        returnValue = F("Am Hainzenstück");
        break;
    }
    case 18036:
    {
        returnValue = F("Am Haischbachtal");
        break;
    }
    case 18037:
    {
        returnValue = F("Am Haischbaum");
        break;
    }
    case 18038:
    {
        returnValue = F("Am Haisel");
        break;
    }
    case 18039:
    {
        returnValue = F("Am Haisterbach");
        break;
    }
    case 18040:
    {
        returnValue = F("Am Hakeberge");
        break;
    }
    case 18041:
    {
        returnValue = F("Am Haken");
        break;
    }
    case 18042:
    {
        returnValue = F("Am Hakenberg");
        break;
    }
    case 18043:
    {
        returnValue = F("Am Hakentempel");
        break;
    }
    case 18044:
    {
        returnValue = F("Am Hakesbach");
        break;
    }
    case 18045:
    {
        returnValue = F("Am Halbach");
        break;
    }
    case 18046:
    {
        returnValue = F("Am Halben Born");
        break;
    }
    case 18047:
    {
        returnValue = F("Am Halben Mond");
        break;
    }
    case 18048:
    {
        returnValue = F("Am Halben Morgen");
        break;
    }
    case 18049:
    {
        returnValue = F("Am Halberg");
        break;
    }
    case 18050:
    {
        returnValue = F("Am Halbstein");
        break;
    }
    case 18051:
    {
        returnValue = F("Am Haldeberg");
        break;
    }
    case 18052:
    {
        returnValue = F("Am Haldenacker");
        break;
    }
    case 18053:
    {
        returnValue = F("Am Haldenbach");
        break;
    }
    case 18054:
    {
        returnValue = F("Am Haldenberg");
        break;
    }
    case 18055:
    {
        returnValue = F("Am Haldenhang");
        break;
    }
    case 18056:
    {
        returnValue = F("Am Haldenhau");
        break;
    }
    case 18057:
    {
        returnValue = F("Am Haldenholz");
        break;
    }
    case 18058:
    {
        returnValue = F("Am Haldenloh");
        break;
    }
    case 18059:
    {
        returnValue = F("Am Haldenmoos");
        break;
    }
    case 18060:
    {
        returnValue = F("Am Haldenrain");
        break;
    }
    case 18061:
    {
        returnValue = F("Am Halderner Bach");
        break;
    }
    case 18062:
    {
        returnValue = F("Am Haldorfer Weg");
        break;
    }
    case 18063:
    {
        returnValue = F("Am Halfenberg");
        break;
    }
    case 18064:
    {
        returnValue = F("Am Halfter");
        break;
    }
    case 18065:
    {
        returnValue = F("Am Halifax");
        break;
    }
    case 18066:
    {
        returnValue = F("Am Hallaubusch");
        break;
    }
    case 18067:
    {
        returnValue = F("Am Hallberg");
        break;
    }
    case 18068:
    {
        returnValue = F("Am Halleberg");
        break;
    }
    case 18069:
    {
        returnValue = F("Am Hallegraben");
        break;
    }
    case 18070:
    {
        returnValue = F("Am Hallenacker");
        break;
    }
    case 18071:
    {
        returnValue = F("Am Hallenbad");
        break;
    }
    case 18072:
    {
        returnValue = F("Am Hallenbaum");
        break;
    }
    case 18073:
    {
        returnValue = F("Am Hallenberg");
        break;
    }
    case 18074:
    {
        returnValue = F("Am Haller");
        break;
    }
    case 18075:
    {
        returnValue = F("Am Hallergarten");
        break;
    }
    case 18076:
    {
        returnValue = F("Am Hallerhof");
        break;
    }
    case 18077:
    {
        returnValue = F("Am Hallersberg");
        break;
    }
    case 18078:
    {
        returnValue = F("Am Hallertürlein");
        break;
    }
    case 18079:
    {
        returnValue = F("Am Hallfeld");
        break;
    }
    case 18080:
    {
        returnValue = F("Am Hallgarten");
        break;
    }
    case 18081:
    {
        returnValue = F("Am Halloh");
        break;
    }
    case 18082:
    {
        returnValue = F("Am Hallstattfeld");
        break;
    }
    case 18083:
    {
        returnValue = F("Am Hallöh");
        break;
    }
    case 18084:
    {
        returnValue = F("Am Hals");
        break;
    }
    case 18085:
    {
        returnValue = F("Am Halsbach");
        break;
    }
    case 18086:
    {
        returnValue = F("Am Halsberg");
        break;
    }
    case 18087:
    {
        returnValue = F("Am Halse");
        break;
    }
    case 18088:
    {
        returnValue = F("Am Halsen");
        break;
    }
    case 18089:
    {
        returnValue = F("Am Halswick");
        break;
    }
    case 18090:
    {
        returnValue = F("Am Haltepunkt");
        break;
    }
    case 18091:
    {
        returnValue = F("Am Ham");
        break;
    }
    case 18092:
    {
        returnValue = F("Am Hamannsgarten");
        break;
    }
    case 18093:
    {
        returnValue = F("Am Hambacher Weg");
        break;
    }
    case 18094:
    {
        returnValue = F("Am Hamberg");
        break;
    }
    case 18095:
    {
        returnValue = F("Am Hambkebach");
        break;
    }
    case 18096:
    {
        returnValue = F("Am Hamboken");
        break;
    }
    case 18097:
    {
        returnValue = F("Am Hambornbache");
        break;
    }
    case 18098:
    {
        returnValue = F("Am Hambrock");
        break;
    }
    case 18099:
    {
        returnValue = F("Am Hambuch");
        break;
    }
    case 18100:
    {
        returnValue = F("Am Hamburger Berg");
        break;
    }
    case 18101:
    {
        returnValue = F("Am Hambörn");
        break;
    }
    case 18102:
    {
        returnValue = F("Am Hamenberg");
        break;
    }
    case 18103:
    {
        returnValue = F("Am Hamert");
        break;
    }
    case 18104:
    {
        returnValue = F("Am Hamfeld");
        break;
    }
    case 18105:
    {
        returnValue = F("Am Hamjebusch");
        break;
    }
    case 18106:
    {
        returnValue = F("Am Hamm");
        break;
    }
    case 18107:
    {
        returnValue = F("Am Hammbach");
        break;
    }
    case 18108:
    {
        returnValue = F("Am Hammbuschkotten");
        break;
    }
    case 18109:
    {
        returnValue = F("Am Hammbügel");
        break;
    }
    case 18110:
    {
        returnValue = F("Am Hammelbach");
        break;
    }
    case 18111:
    {
        returnValue = F("Am Hammelberg");
        break;
    }
    case 18112:
    {
        returnValue = F("Am Hammelsbach");
        break;
    }
    case 18113:
    {
        returnValue = F("Am Hammelsberg");
        break;
    }
    case 18114:
    {
        returnValue = F("Am Hammelsgraben");
        break;
    }
    case 18115:
    {
        returnValue = F("Am Hammelstein");
        break;
    }
    case 18116:
    {
        returnValue = F("Am Hammelturm");
        break;
    }
    case 18117:
    {
        returnValue = F("Am Hammer");
        break;
    }
    case 18118:
    {
        returnValue = F("Am Hammeranger");
        break;
    }
    case 18119:
    {
        returnValue = F("Am Hammerbach");
        break;
    }
    case 18120:
    {
        returnValue = F("Am Hammerbachweg");
        break;
    }
    case 18121:
    {
        returnValue = F("Am Hammerberg");
        break;
    }
    case 18122:
    {
        returnValue = F("Am Hammerfließ");
        break;
    }
    case 18123:
    {
        returnValue = F("Am Hammergraben");
        break;
    }
    case 18124:
    {
        returnValue = F("Am Hammerloch");
        break;
    }
    case 18125:
    {
        returnValue = F("Am Hammermühlbach");
        break;
    }
    case 18126:
    {
        returnValue = F("Am Hammerrain");
        break;
    }
    case 18127:
    {
        returnValue = F("Am Hammerrech");
        break;
    }
    case 18128:
    {
        returnValue = F("Am Hammersberg");
        break;
    }
    case 18129:
    {
        returnValue = F("Am Hammerscheid");
        break;
    }
    case 18130:
    {
        returnValue = F("Am Hammerschlag");
        break;
    }
    case 18131:
    {
        returnValue = F("Am Hammersee");
        break;
    }
    case 18132:
    {
        returnValue = F("Am Hammersteig");
        break;
    }
    case 18133:
    {
        returnValue = F("Am Hammerstein");
        break;
    }
    case 18134:
    {
        returnValue = F("Am Hammerstrom");
        break;
    }
    case 18135:
    {
        returnValue = F("Am Hammerstättchen");
        break;
    }
    case 18136:
    {
        returnValue = F("Am Hammertal");
        break;
    }
    case 18137:
    {
        returnValue = F("Am Hammerteich");
        break;
    }
    case 18138:
    {
        returnValue = F("Am Hammerwald");
        break;
    }
    case 18139:
    {
        returnValue = F("Am Hammerweg");
        break;
    }
    case 18140:
    {
        returnValue = F("Am Hammerweiher");
        break;
    }
    case 18141:
    {
        returnValue = F("Am Hammerwerk");
        break;
    }
    case 18142:
    {
        returnValue = F("Am Hammerwäldchen");
        break;
    }
    case 18143:
    {
        returnValue = F("Am Hammerwäldle");
        break;
    }
    case 18144:
    {
        returnValue = F("Am Hammfeld");
        break;
    }
    case 18145:
    {
        returnValue = F("Am Hammoor");
        break;
    }
    case 18146:
    {
        returnValue = F("Am Hampfad");
        break;
    }
    case 18147:
    {
        returnValue = F("Am Hampfberg");
        break;
    }
    case 18148:
    {
        returnValue = F("Am Hamster");
        break;
    }
    case 18149:
    {
        returnValue = F("Am Hamsterteich");
        break;
    }
    case 18150:
    {
        returnValue = F("Am Hanach");
        break;
    }
    case 18151:
    {
        returnValue = F("Am Hanauer Weg");
        break;
    }
    case 18152:
    {
        returnValue = F("Am Hanbusch");
        break;
    }
    case 18153:
    {
        returnValue = F("Am Handballplatz");
        break;
    }
    case 18154:
    {
        returnValue = F("Am Handbeil");
        break;
    }
    case 18155:
    {
        returnValue = F("Am Handelshafen");
        break;
    }
    case 18156:
    {
        returnValue = F("Am Handelshof");
        break;
    }
    case 18157:
    {
        returnValue = F("Am Handelspark");
        break;
    }
    case 18158:
    {
        returnValue = F("Am Handelszentrum");
        break;
    }
    case 18159:
    {
        returnValue = F("Am Handsgraben");
        break;
    }
    case 18160:
    {
        returnValue = F("Am Handwege");
        break;
    }
    case 18161:
    {
        returnValue = F("Am Handweiser");
        break;
    }
    case 18162:
    {
        returnValue = F("Am Handweiser Berg");
        break;
    }
    case 18163:
    {
        returnValue = F("Am Handweisergraben");
        break;
    }
    case 18164:
    {
        returnValue = F("Am Handwerkerhof");
        break;
    }
    case 18165:
    {
        returnValue = F("Am Handwerkerzentrum");
        break;
    }
    case 18166:
    {
        returnValue = F("Am Hanekenberg");
        break;
    }
    case 18167:
    {
        returnValue = F("Am Hanekipperweg");
        break;
    }
    case 18168:
    {
        returnValue = F("Am Hanenbeek");
        break;
    }
    case 18169:
    {
        returnValue = F("Am Hanewinkel");
        break;
    }
    case 18170:
    {
        returnValue = F("Am Hanfberg");
        break;
    }
    case 18171:
    {
        returnValue = F("Am Hanfgarten");
        break;
    }
    case 18172:
    {
        returnValue = F("Am Hanfgraben");
        break;
    }
    case 18173:
    {
        returnValue = F("Am Hanfland");
        break;
    }
    case 18174:
    {
        returnValue = F("Am Hanfmarkt");
        break;
    }
    case 18175:
    {
        returnValue = F("Am Hanfsack");
        break;
    }
    case 18176:
    {
        returnValue = F("Am Hanftal");
        break;
    }
    case 18177:
    {
        returnValue = F("Am Hang");
        break;
    }
    case 18178:
    {
        returnValue = F("Am Hange");
        break;
    }
    case 18179:
    {
        returnValue = F("Am Hangelberg");
        break;
    }
    case 18180:
    {
        returnValue = F("Am Hangelstein");
        break;
    }
    case 18181:
    {
        returnValue = F("Am Hangenbach");
        break;
    }
    case 18182:
    {
        returnValue = F("Am Hangenbrunnen");
        break;
    }
    case 18183:
    {
        returnValue = F("Am Hangenden");
        break;
    }
    case 18184:
    {
        returnValue = F("Am Hanger");
        break;
    }
    case 18185:
    {
        returnValue = F("Am Hangesch");
        break;
    }
    case 18186:
    {
        returnValue = F("Am Hangeshaus");
        break;
    }
    case 18187:
    {
        returnValue = F("Am Hangfeld");
        break;
    }
    case 18188:
    {
        returnValue = F("Am Hanggarten");
        break;
    }
    case 18189:
    {
        returnValue = F("Am Hangkamp");
        break;
    }
    case 18190:
    {
        returnValue = F("Am Hangstein");
        break;
    }
    case 18191:
    {
        returnValue = F("Am Hangufer");
        break;
    }
    case 18192:
    {
        returnValue = F("Am Hangwerbusch");
        break;
    }
    case 18193:
    {
        returnValue = F("Am Hanholz");
        break;
    }
    case 18194:
    {
        returnValue = F("Am Hanig");
        break;
    }
    case 18195:
    {
        returnValue = F("Am Hankelsberg");
        break;
    }
    case 18196:
    {
        returnValue = F("Am Hankenberg");
        break;
    }
    case 18197:
    {
        returnValue = F("Am Hankenhof");
        break;
    }
    case 18198:
    {
        returnValue = F("Am Hankhauser Busch");
        break;
    }
    case 18199:
    {
        returnValue = F("Am Hanloh");
        break;
    }
    case 18200:
    {
        returnValue = F("Am Hannaberg");
        break;
    }
    case 18201:
    {
        returnValue = F("Am Hannenberg");
        break;
    }
    case 18202:
    {
        returnValue = F("Am Hannenbühl");
        break;
    }
    case 18203:
    {
        returnValue = F("Am Hannenhof");
        break;
    }
    case 18204:
    {
        returnValue = F("Am Hans-Ottenberg");
        break;
    }
    case 18205:
    {
        returnValue = F("Am Hans-Teich");
        break;
    }
    case 18206:
    {
        returnValue = F("Am Hansberg");
        break;
    }
    case 18207:
    {
        returnValue = F("Am Hansdorfer See");
        break;
    }
    case 18208:
    {
        returnValue = F("Am Hansehof");
        break;
    }
    case 18209:
    {
        returnValue = F("Am Hanselaer Tor");
        break;
    }
    case 18210:
    {
        returnValue = F("Am Hanselbrunn");
        break;
    }
    case 18211:
    {
        returnValue = F("Am Hansenberg");
        break;
    }
    case 18212:
    {
        returnValue = F("Am Hansenbusch");
        break;
    }
    case 18213:
    {
        returnValue = F("Am Hansenhof");
        break;
    }
    case 18214:
    {
        returnValue = F("Am Hansenhohl");
        break;
    }
    case 18215:
    {
        returnValue = F("Am Hansenhügel");
        break;
    }
    case 18216:
    {
        returnValue = F("Am Hansenkreuz");
        break;
    }
    case 18217:
    {
        returnValue = F("Am Hansenrain");
        break;
    }
    case 18218:
    {
        returnValue = F("Am Hansgraben");
        break;
    }
    case 18219:
    {
        returnValue = F("Am Hanstein");
        break;
    }
    case 18220:
    {
        returnValue = F("Am Hanstorfer Landweg");
        break;
    }
    case 18221:
    {
        returnValue = F("Am Hapkenberge");
        break;
    }
    case 18222:
    {
        returnValue = F("Am Happach");
        break;
    }
    case 18223:
    {
        returnValue = F("Am Harberg");
        break;
    }
    case 18224:
    {
        returnValue = F("Am Harbruch");
        break;
    }
    case 18225:
    {
        returnValue = F("Am Harburger Wege");
        break;
    }
    case 18226:
    {
        returnValue = F("Am Hard");
        break;
    }
    case 18227:
    {
        returnValue = F("Am Hardberg");
        break;
    }
    case 18228:
    {
        returnValue = F("Am Hardchen");
        break;
    }
    case 18229:
    {
        returnValue = F("Am Hardenberg");
        break;
    }
    case 18230:
    {
        returnValue = F("Am Hardenberger Hof");
        break;
    }
    case 18231:
    {
        returnValue = F("Am Harderberg");
        break;
    }
    case 18232:
    {
        returnValue = F("Am Hardt");
        break;
    }
    case 18233:
    {
        returnValue = F("Am Hardtanger");
        break;
    }
    case 18234:
    {
        returnValue = F("Am Hardtbach");
        break;
    }
    case 18235:
    {
        returnValue = F("Am Hardtberg");
        break;
    }
    case 18236:
    {
        returnValue = F("Am Hardtfeld");
        break;
    }
    case 18237:
    {
        returnValue = F("Am Hardtkopf");
        break;
    }
    case 18238:
    {
        returnValue = F("Am Hardtkreuz");
        break;
    }
    case 18239:
    {
        returnValue = F("Am Hardtköppel");
        break;
    }
    case 18240:
    {
        returnValue = F("Am Hardtpark");
        break;
    }
    case 18241:
    {
        returnValue = F("Am Hardtrain");
        break;
    }
    case 18242:
    {
        returnValue = F("Am Hardtskopf");
        break;
    }
    case 18243:
    {
        returnValue = F("Am Hardtwald");
        break;
    }
    case 18244:
    {
        returnValue = F("Am Hardtweg");
        break;
    }
    case 18245:
    {
        returnValue = F("Am Hardwald");
        break;
    }
    case 18246:
    {
        returnValue = F("Am Hardweg");
        break;
    }
    case 18247:
    {
        returnValue = F("Am Harenzacken");
        break;
    }
    case 18248:
    {
        returnValue = F("Am Harffer Kreuz");
        break;
    }
    case 18249:
    {
        returnValue = F("Am Hargartener Hügel");
        break;
    }
    case 18250:
    {
        returnValue = F("Am Harich");
        break;
    }
    case 18251:
    {
        returnValue = F("Am Haringer Berg");
        break;
    }
    case 18252:
    {
        returnValue = F("Am Harkenberg");
        break;
    }
    case 18253:
    {
        returnValue = F("Am Harker");
        break;
    }
    case 18254:
    {
        returnValue = F("Am Harkort");
        break;
    }
    case 18255:
    {
        returnValue = F("Am Harlasgraben");
        break;
    }
    case 18256:
    {
        returnValue = F("Am Harlebogen");
        break;
    }
    case 18257:
    {
        returnValue = F("Am Harlesiel");
        break;
    }
    case 18258:
    {
        returnValue = F("Am Harling");
        break;
    }
    case 18259:
    {
        returnValue = F("Am Harmer Berg");
        break;
    }
    case 18260:
    {
        returnValue = F("Am Harmer Holz");
        break;
    }
    case 18261:
    {
        returnValue = F("Am Harmsloh");
        break;
    }
    case 18262:
    {
        returnValue = F("Am Harranger");
        break;
    }
    case 18263:
    {
        returnValue = F("Am Harrasgraben");
        break;
    }
    case 18264:
    {
        returnValue = F("Am Harres");
        break;
    }
    case 18265:
    {
        returnValue = F("Am Harrl");
        break;
    }
    case 18266:
    {
        returnValue = F("Am Harschenberg");
        break;
    }
    case 18267:
    {
        returnValue = F("Am Hart");
        break;
    }
    case 18268:
    {
        returnValue = F("Am Hartebeuer");
        break;
    }
    case 18269:
    {
        returnValue = F("Am Harten Zeichen");
        break;
    }
    case 18270:
    {
        returnValue = F("Am Hartenauer Feld");
        break;
    }
    case 18271:
    {
        returnValue = F("Am Hartenbauer");
        break;
    }
    case 18272:
    {
        returnValue = F("Am Hartenberg");
        break;
    }
    case 18273:
    {
        returnValue = F("Am Hartenbuch");
        break;
    }
    case 18274:
    {
        returnValue = F("Am Hartenknapp");
        break;
    }
    case 18275:
    {
        returnValue = F("Am Hartenstein");
        break;
    }
    case 18276:
    {
        returnValue = F("Am Hartfeld");
        break;
    }
    case 18277:
    {
        returnValue = F("Am Hartgraben");
        break;
    }
    case 18278:
    {
        returnValue = F("Am Harthaus");
        break;
    }
    case 18279:
    {
        returnValue = F("Am Harthberg");
        break;
    }
    case 18280:
    {
        returnValue = F("Am Hartheberg");
        break;
    }
    case 18281:
    {
        returnValue = F("Am Hartheimer Weg");
        break;
    }
    case 18282:
    {
        returnValue = F("Am Hartholz");
        break;
    }
    case 18283:
    {
        returnValue = F("Am Harthsee");
        break;
    }
    case 18284:
    {
        returnValue = F("Am Hartlberg");
        break;
    }
    case 18285:
    {
        returnValue = F("Am Hartlhof");
        break;
    }
    case 18286:
    {
        returnValue = F("Am Hartpappenwerk");
        break;
    }
    case 18287:
    {
        returnValue = F("Am Hartrain");
        break;
    }
    case 18288:
    {
        returnValue = F("Am Hartschenfeld");
        break;
    }
    case 18289:
    {
        returnValue = F("Am Hartsteinwerk");
        break;
    }
    case 18290:
    {
        returnValue = F("Am Hartstück");
        break;
    }
    case 18291:
    {
        returnValue = F("Am Hartwald");
        break;
    }
    case 18292:
    {
        returnValue = F("Am Hartweg");
        break;
    }
    case 18293:
    {
        returnValue = F("Am Hartwege");
        break;
    }
    case 18294:
    {
        returnValue = F("Am Hartzberg");
        break;
    }
    case 18295:
    {
        returnValue = F("Am Harwald");
        break;
    }
    case 18296:
    {
        returnValue = F("Am Harweh");
        break;
    }
    case 18297:
    {
        returnValue = F("Am Harzberg");
        break;
    }
    case 18298:
    {
        returnValue = F("Am Harzenberg");
        break;
    }
    case 18299:
    {
        returnValue = F("Am Harzofen");
        break;
    }
    case 18300:
    {
        returnValue = F("Am Harzwald");
        break;
    }
    case 18301:
    {
        returnValue = F("Am Hasberg");
        break;
    }
    case 18302:
    {
        returnValue = F("Am Hascherkeller");
        break;
    }
    case 18303:
    {
        returnValue = F("Am Haseberg");
        break;
    }
    case 18304:
    {
        returnValue = F("Am Hasebrink");
        break;
    }
    case 18305:
    {
        returnValue = F("Am Haseknie");
        break;
    }
    case 18306:
    {
        returnValue = F("Am Hasel");
        break;
    }
    case 18307:
    {
        returnValue = F("Am Haselbach");
        break;
    }
    case 18308:
    {
        returnValue = F("Am Haselberg");
        break;
    }
    case 18309:
    {
        returnValue = F("Am Haselbrunn");
        break;
    }
    case 18310:
    {
        returnValue = F("Am Haselbusch");
        break;
    }
    case 18311:
    {
        returnValue = F("Am Haselbüschken");
        break;
    }
    case 18312:
    {
        returnValue = F("Am Haselgraben");
        break;
    }
    case 18313:
    {
        returnValue = F("Am Haselhang");
        break;
    }
    case 18314:
    {
        returnValue = F("Am Haselholz");
        break;
    }
    case 18315:
    {
        returnValue = F("Am Haselhorn");
        break;
    }
    case 18316:
    {
        returnValue = F("Am Haselknick");
        break;
    }
    case 18317:
    {
        returnValue = F("Am Haselnussberg");
        break;
    }
    case 18318:
    {
        returnValue = F("Am Haselnußstrauch");
        break;
    }
    case 18319:
    {
        returnValue = F("Am Haseloh");
        break;
    }
    case 18320:
    {
        returnValue = F("Am Haselrain");
        break;
    }
    case 18321:
    {
        returnValue = F("Am Haselrech");
        break;
    }
    case 18322:
    {
        returnValue = F("Am Haselstein");
        break;
    }
    case 18323:
    {
        returnValue = F("Am Haselstrauch");
        break;
    }
    case 18324:
    {
        returnValue = F("Am Haselweg");
        break;
    }
    case 18325:
    {
        returnValue = F("Am Haselweiher");
        break;
    }
    case 18326:
    {
        returnValue = F("Am Hasenacker");
        break;
    }
    case 18327:
    {
        returnValue = F("Am Hasenbach");
        break;
    }
    case 18328:
    {
        returnValue = F("Am Hasenbalken");
        break;
    }
    case 18329:
    {
        returnValue = F("Am Hasenberg");
        break;
    }
    case 18330:
    {
        returnValue = F("Am Hasenberge");
        break;
    }
    case 18331:
    {
        returnValue = F("Am Hasenbergl");
        break;
    }
    case 18332:
    {
        returnValue = F("Am Hasenbichel");
        break;
    }
    case 18333:
    {
        returnValue = F("Am Hasenbichl");
        break;
    }
    case 18334:
    {
        returnValue = F("Am Hasenbiel");
        break;
    }
    case 18335:
    {
        returnValue = F("Am Hasenborn");
        break;
    }
    case 18336:
    {
        returnValue = F("Am Hasenbruch");
        break;
    }
    case 18337:
    {
        returnValue = F("Am Hasenbrunnen");
        break;
    }
    case 18338:
    {
        returnValue = F("Am Hasenbuck");
        break;
    }
    case 18339:
    {
        returnValue = F("Am Hasenbuckel");
        break;
    }
    case 18340:
    {
        returnValue = F("Am Hasenbusch");
        break;
    }
    case 18341:
    {
        returnValue = F("Am Hasenböhl");
        break;
    }
    case 18342:
    {
        returnValue = F("Am Hasenbühl");
        break;
    }
    case 18343:
    {
        returnValue = F("Am Hasenbüsch");
        break;
    }
    case 18344:
    {
        returnValue = F("Am Hasenclev");
        break;
    }
    case 18345:
    {
        returnValue = F("Am Haseneck");
        break;
    }
    case 18346:
    {
        returnValue = F("Am Hasenfeld");
        break;
    }
    case 18347:
    {
        returnValue = F("Am Hasengarten");
        break;
    }
    case 18348:
    {
        returnValue = F("Am Hasengraben");
        break;
    }
    case 18349:
    {
        returnValue = F("Am Hasengrund");
        break;
    }
    case 18350:
    {
        returnValue = F("Am Hasengründel");
        break;
    }
    case 18351:
    {
        returnValue = F("Am Hasenhof");
        break;
    }
    case 18352:
    {
        returnValue = F("Am Hasenholz");
        break;
    }
    case 18353:
    {
        returnValue = F("Am Hasenhübel");
        break;
    }
    case 18354:
    {
        returnValue = F("Am Hasenhügel");
        break;
    }
    case 18355:
    {
        returnValue = F("Am Hasenkamp");
        break;
    }
    case 18356:
    {
        returnValue = F("Am Hasenkopf");
        break;
    }
    case 18357:
    {
        returnValue = F("Am Hasenkrug");
        break;
    }
    case 18358:
    {
        returnValue = F("Am Hasenköppel");
        break;
    }
    case 18359:
    {
        returnValue = F("Am Hasenküppel");
        break;
    }
    case 18360:
    {
        returnValue = F("Am Hasenlauf");
        break;
    }
    case 18361:
    {
        returnValue = F("Am Hasenleister");
        break;
    }
    case 18362:
    {
        returnValue = F("Am Hasenloch");
        break;
    }
    case 18363:
    {
        returnValue = F("Am Hasenläger");
        break;
    }
    case 18364:
    {
        returnValue = F("Am Hasenlöhle");
        break;
    }
    case 18365:
    {
        returnValue = F("Am Hasenmeer");
        break;
    }
    case 18366:
    {
        returnValue = F("Am Hasenmoor");
        break;
    }
    case 18367:
    {
        returnValue = F("Am Hasenmorgen");
        break;
    }
    case 18368:
    {
        returnValue = F("Am Hasenpaß");
        break;
    }
    case 18369:
    {
        returnValue = F("Am Hasenpfad");
        break;
    }
    case 18370:
    {
        returnValue = F("Am Hasenpfahl");
        break;
    }
    case 18371:
    {
        returnValue = F("Am Hasenpfuhl");
        break;
    }
    case 18372:
    {
        returnValue = F("Am Hasenpohl");
        break;
    }
    case 18373:
    {
        returnValue = F("Am Hasenrain");
        break;
    }
    case 18374:
    {
        returnValue = F("Am Hasenschweiß");
        break;
    }
    case 18375:
    {
        returnValue = F("Am Hasenspiel");
        break;
    }
    case 18376:
    {
        returnValue = F("Am Hasensprung");
        break;
    }
    case 18377:
    {
        returnValue = F("Am Hasensteg");
        break;
    }
    case 18378:
    {
        returnValue = F("Am Hasensteig");
        break;
    }
    case 18379:
    {
        returnValue = F("Am Hasenstein");
        break;
    }
    case 18380:
    {
        returnValue = F("Am Hasenstrauch");
        break;
    }
    case 18381:
    {
        returnValue = F("Am Hasental");
        break;
    }
    case 18382:
    {
        returnValue = F("Am Hasentanz");
        break;
    }
    case 18383:
    {
        returnValue = F("Am Hasentobel");
        break;
    }
    case 18384:
    {
        returnValue = F("Am Hasenwald");
        break;
    }
    case 18385:
    {
        returnValue = F("Am Hasenwinkel");
        break;
    }
    case 18386:
    {
        returnValue = F("Am Hasenwäldchen");
        break;
    }
    case 18387:
    {
        returnValue = F("Am Hasenöder Feld");
        break;
    }
    case 18388:
    {
        returnValue = F("Am Hasenöver");
        break;
    }
    case 18389:
    {
        returnValue = F("Am Haseufer");
        break;
    }
    case 18390:
    {
        returnValue = F("Am Haskamp");
        break;
    }
    case 18391:
    {
        returnValue = F("Am Hasken");
        break;
    }
    case 18392:
    {
        returnValue = F("Am Haslach");
        break;
    }
    case 18393:
    {
        returnValue = F("Am Haslberg");
        break;
    }
    case 18394:
    {
        returnValue = F("Am Haslenbach");
        break;
    }
    case 18395:
    {
        returnValue = F("Am Haslochberg");
        break;
    }
    case 18396:
    {
        returnValue = F("Am Hasloegen");
        break;
    }
    case 18397:
    {
        returnValue = F("Am Hasloth");
        break;
    }
    case 18398:
    {
        returnValue = F("Am Haspel");
        break;
    }
    case 18399:
    {
        returnValue = F("Am Haspelkamp");
        break;
    }
    case 18400:
    {
        returnValue = F("Am Haspelweg");
        break;
    }
    case 18401:
    {
        returnValue = F("Am Hasportsee");
        break;
    }
    case 18402:
    {
        returnValue = F("Am Hassel");
        break;
    }
    case 18403:
    {
        returnValue = F("Am Hasselacker");
        break;
    }
    case 18404:
    {
        returnValue = F("Am Hasselbach");
        break;
    }
    case 18405:
    {
        returnValue = F("Am Hasselbarg");
        break;
    }
    case 18406:
    {
        returnValue = F("Am Hasselberg");
        break;
    }
    case 18407:
    {
        returnValue = F("Am Hasselbusch");
        break;
    }
    case 18408:
    {
        returnValue = F("Am Hasseleich");
        break;
    }
    case 18409:
    {
        returnValue = F("Am Hasseler Moor");
        break;
    }
    case 18410:
    {
        returnValue = F("Am Hasselfeld");
        break;
    }
    case 18411:
    {
        returnValue = F("Am Hasselhof");
        break;
    }
    case 18412:
    {
        returnValue = F("Am Hasselholt");
        break;
    }
    case 18413:
    {
        returnValue = F("Am Hasselsiefen");
        break;
    }
    case 18414:
    {
        returnValue = F("Am Hasselsort");
        break;
    }
    case 18415:
    {
        returnValue = F("Am Hasselsweg");
        break;
    }
    case 18416:
    {
        returnValue = F("Am Hasselt");
        break;
    }
    case 18417:
    {
        returnValue = F("Am Hasseltal");
        break;
    }
    case 18418:
    {
        returnValue = F("Am Hasselteich");
        break;
    }
    case 18419:
    {
        returnValue = F("Am Hassenbruch");
        break;
    }
    case 18420:
    {
        returnValue = F("Am Hastebach");
        break;
    }
    case 18421:
    {
        returnValue = F("Am Hastelbach");
        break;
    }
    case 18422:
    {
        returnValue = F("Am Hastenrather Fließ");
        break;
    }
    case 18423:
    {
        returnValue = F("Am Haster Bach");
        break;
    }
    case 18424:
    {
        returnValue = F("Am Hattenberg");
        break;
    }
    case 18425:
    {
        returnValue = F("Am Hattenleh");
        break;
    }
    case 18426:
    {
        returnValue = F("Am Hattinger Weg");
        break;
    }
    case 18427:
    {
        returnValue = F("Am Hatzberg");
        break;
    }
    case 18428:
    {
        returnValue = F("Am Hatzenberg");
        break;
    }
    case 18429:
    {
        returnValue = F("Am Haubach");
        break;
    }
    case 18430:
    {
        returnValue = F("Am Haubarg");
        break;
    }
    case 18431:
    {
        returnValue = F("Am Hauben");
        break;
    }
    case 18432:
    {
        returnValue = F("Am Haubenfels");
        break;
    }
    case 18433:
    {
        returnValue = F("Am Haubenflug");
        break;
    }
    case 18434:
    {
        returnValue = F("Am Haubenlöchlein");
        break;
    }
    case 18435:
    {
        returnValue = F("Am Hauberg");
        break;
    }
    case 18436:
    {
        returnValue = F("Am Hauborn");
        break;
    }
    case 18437:
    {
        returnValue = F("Am Hauch");
        break;
    }
    case 18438:
    {
        returnValue = F("Am Hauchen");
        break;
    }
    case 18439:
    {
        returnValue = F("Am Hauck");
        break;
    }
    case 18440:
    {
        returnValue = F("Am Haue");
        break;
    }
    case 18441:
    {
        returnValue = F("Am Hauenboden");
        break;
    }
    case 18442:
    {
        returnValue = F("Am Hauengrund");
        break;
    }
    case 18443:
    {
        returnValue = F("Am Hauenstein");
        break;
    }
    case 18444:
    {
        returnValue = F("Am Haufensteinberg");
        break;
    }
    case 18445:
    {
        returnValue = F("Am Haufer Bahnhof");
        break;
    }
    case 18446:
    {
        returnValue = F("Am Haugk");
        break;
    }
    case 18447:
    {
        returnValue = F("Am Haulingbach");
        break;
    }
    case 18448:
    {
        returnValue = F("Am Haullenbach");
        break;
    }
    case 18449:
    {
        returnValue = F("Am Haumbach");
        break;
    }
    case 18450:
    {
        returnValue = F("Am Haunstrauch");
        break;
    }
    case 18451:
    {
        returnValue = F("Am Hauplatz");
        break;
    }
    case 18452:
    {
        returnValue = F("Am Hauptbahnhof");
        break;
    }
    case 18453:
    {
        returnValue = F("Am Hauptbahnhofe");
        break;
    }
    case 18454:
    {
        returnValue = F("Am Hauptbrunnen");
        break;
    }
    case 18455:
    {
        returnValue = F("Am Hauptbühl");
        break;
    }
    case 18456:
    {
        returnValue = F("Am Hauptdiek");
        break;
    }
    case 18457:
    {
        returnValue = F("Am Hauptfriedhof");
        break;
    }
    case 18458:
    {
        returnValue = F("Am Hauptgraben");
        break;
    }
    case 18459:
    {
        returnValue = F("Am Haupthügel");
        break;
    }
    case 18460:
    {
        returnValue = F("Am Hauptkanal");
        break;
    }
    case 18461:
    {
        returnValue = F("Am Hauptmanns Garten");
        break;
    }
    case 18462:
    {
        returnValue = F("Am Hauptner");
        break;
    }
    case 18463:
    {
        returnValue = F("Am Hauptschacht");
        break;
    }
    case 18464:
    {
        returnValue = F("Am Haupttor");
        break;
    }
    case 18465:
    {
        returnValue = F("Am Hauptvorfluter");
        break;
    }
    case 18466:
    {
        returnValue = F("Am Hauptweg");
        break;
    }
    case 18467:
    {
        returnValue = F("Am Haus Asselt");
        break;
    }
    case 18468:
    {
        returnValue = F("Am Haus Bimmen");
        break;
    }
    case 18469:
    {
        returnValue = F("Am Haus Borg");
        break;
    }
    case 18470:
    {
        returnValue = F("Am Haus Langen");
        break;
    }
    case 18471:
    {
        returnValue = F("Am Haus Letmathe");
        break;
    }
    case 18472:
    {
        returnValue = F("Am Haus Lette");
        break;
    }
    case 18473:
    {
        returnValue = F("Am Haus Vogelsang");
        break;
    }
    case 18474:
    {
        returnValue = F("Am Haus der Stille");
        break;
    }
    case 18475:
    {
        returnValue = F("Am Haus der Vereine");
        break;
    }
    case 18476:
    {
        returnValue = F("Am Hausacker");
        break;
    }
    case 18477:
    {
        returnValue = F("Am Hausanger");
        break;
    }
    case 18478:
    {
        returnValue = F("Am Hausbach");
        break;
    }
    case 18479:
    {
        returnValue = F("Am Hausberg");
        break;
    }
    case 18480:
    {
        returnValue = F("Am Hausberg Ost");
        break;
    }
    case 18481:
    {
        returnValue = F("Am Hausberge");
        break;
    }
    case 18482:
    {
        returnValue = F("Am Hausbruch");
        break;
    }
    case 18483:
    {
        returnValue = F("Am Hausbusch");
        break;
    }
    case 18484:
    {
        returnValue = F("Am Hausener Feld");
        break;
    }
    case 18485:
    {
        returnValue = F("Am Hausener Weg");
        break;
    }
    case 18486:
    {
        returnValue = F("Am Hauserbach");
        break;
    }
    case 18487:
    {
        returnValue = F("Am Hauserberg");
        break;
    }
    case 18488:
    {
        returnValue = F("Am Hauserbusch");
        break;
    }
    case 18489:
    {
        returnValue = F("Am Hausfeld");
        break;
    }
    case 18490:
    {
        returnValue = F("Am Hausgarten");
        break;
    }
    case 18491:
    {
        returnValue = F("Am Haushof");
        break;
    }
    case 18492:
    {
        returnValue = F("Am Hauskamp");
        break;
    }
    case 18493:
    {
        returnValue = F("Am Hausplatz");
        break;
    }
    case 18494:
    {
        returnValue = F("Am Haussee");
        break;
    }
    case 18495:
    {
        returnValue = F("Am Hausteich");
        break;
    }
    case 18496:
    {
        returnValue = F("Am Hauswalder Bach");
        break;
    }
    case 18497:
    {
        returnValue = F("Am Hausweinberg");
        break;
    }
    case 18498:
    {
        returnValue = F("Am Hauswengert");
        break;
    }
    case 18499:
    {
        returnValue = F("Am Hauswinkel");
        break;
    }
    case 18500:
    {
        returnValue = F("Am Hautenbach");
        break;
    }
    case 18501:
    {
        returnValue = F("Am Hautzenbuckel");
        break;
    }
    case 18502:
    {
        returnValue = F("Am Hauweg");
        break;
    }
    case 18503:
    {
        returnValue = F("Am Havelbogen");
        break;
    }
    case 18504:
    {
        returnValue = F("Am Havelgut");
        break;
    }
    case 18505:
    {
        returnValue = F("Am Havelkanal");
        break;
    }
    case 18506:
    {
        returnValue = F("Am Havelufer");
        break;
    }
    case 18507:
    {
        returnValue = F("Am Havelweg");
        break;
    }
    case 18508:
    {
        returnValue = F("Am Haverkamp");
        break;
    }
    case 18509:
    {
        returnValue = F("Am Haxberg");
        break;
    }
    case 18510:
    {
        returnValue = F("Am Hayckenstift");
        break;
    }
    case 18511:
    {
        returnValue = F("Am Hayn");
        break;
    }
    case 18512:
    {
        returnValue = F("Am Hayungshof");
        break;
    }
    case 18513:
    {
        returnValue = F("Am Haßlach");
        break;
    }
    case 18514:
    {
        returnValue = F("Am Haßlocher Fußpfad");
        break;
    }
    case 18515:
    {
        returnValue = F("Am Haßlocher Weg");
        break;
    }
    case 18516:
    {
        returnValue = F("Am Hebach");
        break;
    }
    case 18517:
    {
        returnValue = F("Am Hebberg");
        break;
    }
    case 18518:
    {
        returnValue = F("Am Hebeberg");
        break;
    }
    case 18519:
    {
        returnValue = F("Am Hebel");
        break;
    }
    case 18520:
    {
        returnValue = F("Am Hebelpark");
        break;
    }
    case 18521:
    {
        returnValue = F("Am Heber");
        break;
    }
    case 18522:
    {
        returnValue = F("Am Hebersfeld");
        break;
    }
    case 18523:
    {
        returnValue = F("Am Hebestumpf");
        break;
    }
    case 18524:
    {
        returnValue = F("Am Hebewerk");
        break;
    }
    case 18525:
    {
        returnValue = F("Am Hecherried");
        break;
    }
    case 18526:
    {
        returnValue = F("Am Hechlerbrunnen");
        break;
    }
    case 18527:
    {
        returnValue = F("Am Hechtenfeld");
        break;
    }
    case 18528:
    {
        returnValue = F("Am Hechtgraben");
        break;
    }
    case 18529:
    {
        returnValue = F("Am Hechtkamp");
        break;
    }
    case 18530:
    {
        returnValue = F("Am Hechtsoll");
        break;
    }
    case 18531:
    {
        returnValue = F("Am Hechtteich");
        break;
    }
    case 18532:
    {
        returnValue = F("Am Heck");
        break;
    }
    case 18533:
    {
        returnValue = F("Am Heckacker");
        break;
    }
    case 18534:
    {
        returnValue = F("Am Heckberg");
        break;
    }
    case 18535:
    {
        returnValue = F("Am Heckborn");
        break;
    }
    case 18536:
    {
        returnValue = F("Am Heckchen");
        break;
    }
    case 18537:
    {
        returnValue = F("Am Heckel");
        break;
    }
    case 18538:
    {
        returnValue = F("Am Heckelbaum");
        break;
    }
    case 18539:
    {
        returnValue = F("Am Heckelchen");
        break;
    }
    case 18540:
    {
        returnValue = F("Am Heckelsberg");
        break;
    }
    case 18541:
    {
        returnValue = F("Am Heckelsmaar");
        break;
    }
    case 18542:
    {
        returnValue = F("Am Heckenacker");
        break;
    }
    case 18543:
    {
        returnValue = F("Am Heckenberg");
        break;
    }
    case 18544:
    {
        returnValue = F("Am Heckenborn");
        break;
    }
    case 18545:
    {
        returnValue = F("Am Heckenbrink");
        break;
    }
    case 18546:
    {
        returnValue = F("Am Heckenbusch");
        break;
    }
    case 18547:
    {
        returnValue = F("Am Heckenfeld");
        break;
    }
    case 18548:
    {
        returnValue = F("Am Heckengarten");
        break;
    }
    case 18549:
    {
        returnValue = F("Am Heckenkamp");
        break;
    }
    case 18550:
    {
        returnValue = F("Am Heckenkopf");
        break;
    }
    case 18551:
    {
        returnValue = F("Am Heckenpfad");
        break;
    }
    case 18552:
    {
        returnValue = F("Am Heckenrain");
        break;
    }
    case 18553:
    {
        returnValue = F("Am Heckenweg");
        break;
    }
    case 18554:
    {
        returnValue = F("Am Heckenzaun");
        break;
    }
    case 18555:
    {
        returnValue = F("Am Hecker Banden");
        break;
    }
    case 18556:
    {
        returnValue = F("Am Heckerfeld");
        break;
    }
    case 18557:
    {
        returnValue = F("Am Heckershof");
        break;
    }
    case 18558:
    {
        returnValue = F("Am Heckerstieg");
        break;
    }
    case 18559:
    {
        returnValue = F("Am Heckfeld");
        break;
    }
    case 18560:
    {
        returnValue = F("Am Hecklehamm");
        break;
    }
    case 18561:
    {
        returnValue = F("Am Hecklein");
        break;
    }
    case 18562:
    {
        returnValue = F("Am Heckmannshof");
        break;
    }
    case 18563:
    {
        returnValue = F("Am Heckmorgen");
        break;
    }
    case 18564:
    {
        returnValue = F("Am Hecksken");
        break;
    }
    case 18565:
    {
        returnValue = F("Am Heckstück");
        break;
    }
    case 18566:
    {
        returnValue = F("Am Heckweg");
        break;
    }
    case 18567:
    {
        returnValue = F("Am Hedberg");
        break;
    }
    case 18568:
    {
        returnValue = F("Am Heddesbacher Weg");
        break;
    }
    case 18569:
    {
        returnValue = F("Am Heddrich");
        break;
    }
    case 18570:
    {
        returnValue = F("Am Hedelberger Weg");
        break;
    }
    case 18571:
    {
        returnValue = F("Am Hederfeld");
        break;
    }
    case 18572:
    {
        returnValue = F("Am Hedgesberg");
        break;
    }
    case 18573:
    {
        returnValue = F("Am Hedrichsee");
        break;
    }
    case 18574:
    {
        returnValue = F("Am Hedwigsheim");
        break;
    }
    case 18575:
    {
        returnValue = F("Am Heednocken");
        break;
    }
    case 18576:
    {
        returnValue = F("Am Heedufer");
        break;
    }
    case 18577:
    {
        returnValue = F("Am Heegeberg");
        break;
    }
    case 18578:
    {
        returnValue = F("Am Heegen");
        break;
    }
    case 18579:
    {
        returnValue = F("Am Heegersgraben");
        break;
    }
    case 18580:
    {
        returnValue = F("Am Heeggraben");
        break;
    }
    case 18581:
    {
        returnValue = F("Am Heegholz");
        break;
    }
    case 18582:
    {
        returnValue = F("Am Heegring");
        break;
    }
    case 18583:
    {
        returnValue = F("Am Heegstock");
        break;
    }
    case 18584:
    {
        returnValue = F("Am Heegwald");
        break;
    }
    case 18585:
    {
        returnValue = F("Am Heegweg");
        break;
    }
    case 18586:
    {
        returnValue = F("Am Heekeren");
        break;
    }
    case 18587:
    {
        returnValue = F("Am Heelweg");
        break;
    }
    case 18588:
    {
        returnValue = F("Am Heem");
        break;
    }
    case 18589:
    {
        returnValue = F("Am Heerbach");
        break;
    }
    case 18590:
    {
        returnValue = F("Am Heerberg");
        break;
    }
    case 18591:
    {
        returnValue = F("Am Heerberge");
        break;
    }
    case 18592:
    {
        returnValue = F("Am Heerbeutel");
        break;
    }
    case 18593:
    {
        returnValue = F("Am Heerbruch");
        break;
    }
    case 18594:
    {
        returnValue = F("Am Heerenkamp");
        break;
    }
    case 18595:
    {
        returnValue = F("Am Heergarten");
        break;
    }
    case 18596:
    {
        returnValue = F("Am Heerhaus");
        break;
    }
    case 18597:
    {
        returnValue = F("Am Heerhof");
        break;
    }
    case 18598:
    {
        returnValue = F("Am Heersberg");
        break;
    }
    case 18599:
    {
        returnValue = F("Am Heerstall");
        break;
    }
    case 18600:
    {
        returnValue = F("Am Heerweg");
        break;
    }
    case 18601:
    {
        returnValue = F("Am Heerwege");
        break;
    }
    case 18602:
    {
        returnValue = F("Am Heesbach");
        break;
    }
    case 18603:
    {
        returnValue = F("Am Heesberg");
        break;
    }
    case 18604:
    {
        returnValue = F("Am Heeschberg");
        break;
    }
    case 18605:
    {
        returnValue = F("Am Heeseberg");
        break;
    }
    case 18606:
    {
        returnValue = F("Am Heesekamp");
        break;
    }
    case 18607:
    {
        returnValue = F("Am Heesen");
        break;
    }
    case 18608:
    {
        returnValue = F("Am Heesenhof");
        break;
    }
    case 18609:
    {
        returnValue = F("Am Heeser Wald");
        break;
    }
    case 18610:
    {
        returnValue = F("Am Heestern");
        break;
    }
    case 18611:
    {
        returnValue = F("Am Hefelmann-Park");
        break;
    }
    case 18612:
    {
        returnValue = F("Am Heg");
        break;
    }
    case 18613:
    {
        returnValue = F("Am Hegbach");
        break;
    }
    case 18614:
    {
        returnValue = F("Am Hegbachsee");
        break;
    }
    case 18615:
    {
        returnValue = F("Am Hegbaum");
        break;
    }
    case 18616:
    {
        returnValue = F("Am Hegberg");
        break;
    }
    case 18617:
    {
        returnValue = F("Am Hegeanger");
        break;
    }
    case 18618:
    {
        returnValue = F("Am Hegeberg");
        break;
    }
    case 18619:
    {
        returnValue = F("Am Hegeborn");
        break;
    }
    case 18620:
    {
        returnValue = F("Am Hegebruch");
        break;
    }
    case 18621:
    {
        returnValue = F("Am Hegede");
        break;
    }
    case 18622:
    {
        returnValue = F("Am Hegefeld");
        break;
    }
    case 18623:
    {
        returnValue = F("Am Hegehof");
        break;
    }
    case 18624:
    {
        returnValue = F("Am Hegekamp");
        break;
    }
    case 18625:
    {
        returnValue = F("Am Hegelesberg");
        break;
    }
    case 18626:
    {
        returnValue = F("Am Hegelsberg");
        break;
    }
    case 18627:
    {
        returnValue = F("Am Hegenholz");
        break;
    }
    case 18628:
    {
        returnValue = F("Am Hegensteinbach");
        break;
    }
    case 18629:
    {
        returnValue = F("Am Heger");
        break;
    }
    case 18630:
    {
        returnValue = F("Am Hegerath");
        break;
    }
    case 18631:
    {
        returnValue = F("Am Hegestrauch");
        break;
    }
    case 18632:
    {
        returnValue = F("Am Heggeströper");
        break;
    }
    case 18633:
    {
        returnValue = F("Am Hegholz");
        break;
    }
    case 18634:
    {
        returnValue = F("Am Hegibrunnen");
        break;
    }
    case 18635:
    {
        returnValue = F("Am Hegkopf");
        break;
    }
    case 18636:
    {
        returnValue = F("Am Hegt");
        break;
    }
    case 18637:
    {
        returnValue = F("Am Hegwald");
        break;
    }
    case 18638:
    {
        returnValue = F("Am Hehl");
        break;
    }
    case 18639:
    {
        returnValue = F("Am Hehlberg");
        break;
    }
    case 18640:
    {
        returnValue = F("Am Heibeek");
        break;
    }
    case 18641:
    {
        returnValue = F("Am Heiberg");
        break;
    }
    case 18642:
    {
        returnValue = F("Am Heibertstein");
        break;
    }
    case 18643:
    {
        returnValue = F("Am Heick");
        break;
    }
    case 18644:
    {
        returnValue = F("Am Heicken");
        break;
    }
    case 18645:
    {
        returnValue = F("Am Heid");
        break;
    }
    case 18646:
    {
        returnValue = F("Am Heidacker");
        break;
    }
    case 18647:
    {
        returnValue = F("Am Heidanger");
        break;
    }
    case 18648:
    {
        returnValue = F("Am Heidbach");
        break;
    }
    case 18649:
    {
        returnValue = F("Am Heidbarg");
        break;
    }
    case 18650:
    {
        returnValue = F("Am Heidberg");
        break;
    }
    case 18651:
    {
        returnValue = F("Am Heidbergdamm");
        break;
    }
    case 18652:
    {
        returnValue = F("Am Heidbleeck");
        break;
    }
    case 18653:
    {
        returnValue = F("Am Heidbüchel");
        break;
    }
    case 18654:
    {
        returnValue = F("Am Heidbühl");
        break;
    }
    case 18655:
    {
        returnValue = F("Am Heidchen");
        break;
    }
    case 18656:
    {
        returnValue = F("Am Heiddiek");
        break;
    }
    case 18657:
    {
        returnValue = F("Am Heidebad");
        break;
    }
    case 18658:
    {
        returnValue = F("Am Heideberg");
        break;
    }
    case 18659:
    {
        returnValue = F("Am Heidebogen");
        break;
    }
    case 18660:
    {
        returnValue = F("Am Heideborn");
        break;
    }
    case 18661:
    {
        returnValue = F("Am Heidebrunnen");
        break;
    }
    case 18662:
    {
        returnValue = F("Am Heidebuckel");
        break;
    }
    case 18663:
    {
        returnValue = F("Am Heidebusch");
        break;
    }
    case 18664:
    {
        returnValue = F("Am Heideeck");
        break;
    }
    case 18665:
    {
        returnValue = F("Am Heidefeld");
        break;
    }
    case 18666:
    {
        returnValue = F("Am Heidegarten");
        break;
    }
    case 18667:
    {
        returnValue = F("Am Heidegericht");
        break;
    }
    case 18668:
    {
        returnValue = F("Am Heidegraben");
        break;
    }
    case 18669:
    {
        returnValue = F("Am Heidegrund");
        break;
    }
    case 18670:
    {
        returnValue = F("Am Heidehang");
        break;
    }
    case 18671:
    {
        returnValue = F("Am Heidehaus");
        break;
    }
    case 18672:
    {
        returnValue = F("Am Heidehof");
        break;
    }
    case 18673:
    {
        returnValue = F("Am Heidehofteich");
        break;
    }
    case 18674:
    {
        returnValue = F("Am Heidehügel");
        break;
    }
    case 18675:
    {
        returnValue = F("Am Heidekamp");
        break;
    }
    case 18676:
    {
        returnValue = F("Am Heidekopf");
        break;
    }
    case 18677:
    {
        returnValue = F("Am Heidekrug");
        break;
    }
    case 18678:
    {
        returnValue = F("Am Heideköpfchen");
        break;
    }
    case 18679:
    {
        returnValue = F("Am Heideland");
        break;
    }
    case 18680:
    {
        returnValue = F("Am Heidelbach");
        break;
    }
    case 18681:
    {
        returnValue = F("Am Heidelbeerweg");
        break;
    }
    case 18682:
    {
        returnValue = F("Am Heidelberg");
        break;
    }
    case 18683:
    {
        returnValue = F("Am Heidelborn");
        break;
    }
    case 18684:
    {
        returnValue = F("Am Heideloch");
        break;
    }
    case 18685:
    {
        returnValue = F("Am Heidelsberg");
        break;
    }
    case 18686:
    {
        returnValue = F("Am Heidelsteig");
        break;
    }
    case 18687:
    {
        returnValue = F("Am Heidenbach");
        break;
    }
    case 18688:
    {
        returnValue = F("Am Heidenbaum");
        break;
    }
    case 18689:
    {
        returnValue = F("Am Heidenbaumberg");
        break;
    }
    case 18690:
    {
        returnValue = F("Am Heidenberg");
        break;
    }
    case 18691:
    {
        returnValue = F("Am Heidenborn");
        break;
    }
    case 18692:
    {
        returnValue = F("Am Heidenbrockacker");
        break;
    }
    case 18693:
    {
        returnValue = F("Am Heidenbuckel");
        break;
    }
    case 18694:
    {
        returnValue = F("Am Heidenbühl");
        break;
    }
    case 18695:
    {
        returnValue = F("Am Heidendolch");
        break;
    }
    case 18696:
    {
        returnValue = F("Am Heideneck");
        break;
    }
    case 18697:
    {
        returnValue = F("Am Heidenfeld");
        break;
    }
    case 18698:
    {
        returnValue = F("Am Heidengarten");
        break;
    }
    case 18699:
    {
        returnValue = F("Am Heidengraben");
        break;
    }
    case 18700:
    {
        returnValue = F("Am Heidengress");
        break;
    }
    case 18701:
    {
        returnValue = F("Am Heidenhübel");
        break;
    }
    case 18702:
    {
        returnValue = F("Am Heidenkeller");
        break;
    }
    case 18703:
    {
        returnValue = F("Am Heidenknock");
        break;
    }
    case 18704:
    {
        returnValue = F("Am Heidenpfad");
        break;
    }
    case 18705:
    {
        returnValue = F("Am Heidenpfahl");
        break;
    }
    case 18706:
    {
        returnValue = F("Am Heidenpost");
        break;
    }
    case 18707:
    {
        returnValue = F("Am Heidensee");
        break;
    }
    case 18708:
    {
        returnValue = F("Am Heidenstock");
        break;
    }
    case 18709:
    {
        returnValue = F("Am Heidental");
        break;
    }
    case 18710:
    {
        returnValue = F("Am Heidenturm");
        break;
    }
    case 18711:
    {
        returnValue = F("Am Heidenwall");
        break;
    }
    case 18712:
    {
        returnValue = F("Am Heidenweg");
        break;
    }
    case 18713:
    {
        returnValue = F("Am Heidenwäldchen");
        break;
    }
    case 18714:
    {
        returnValue = F("Am Heidepark");
        break;
    }
    case 18715:
    {
        returnValue = F("Am Heidepfad");
        break;
    }
    case 18716:
    {
        returnValue = F("Am Heideplacken");
        break;
    }
    case 18717:
    {
        returnValue = F("Am Heideplatz");
        break;
    }
    case 18718:
    {
        returnValue = F("Am Heider Kopf");
        break;
    }
    case 18719:
    {
        returnValue = F("Am Heider Teich");
        break;
    }
    case 18720:
    {
        returnValue = F("Am Heiderand");
        break;
    }
    case 18721:
    {
        returnValue = F("Am Heiderfeld");
        break;
    }
    case 18722:
    {
        returnValue = F("Am Heiderhof");
        break;
    }
    case 18723:
    {
        returnValue = F("Am Heidering");
        break;
    }
    case 18724:
    {
        returnValue = F("Am Heiderstein");
        break;
    }
    case 18725:
    {
        returnValue = F("Am Heideschloot");
        break;
    }
    case 18726:
    {
        returnValue = F("Am Heidesee");
        break;
    }
    case 18727:
    {
        returnValue = F("Am Heidesheimer Weg");
        break;
    }
    case 18728:
    {
        returnValue = F("Am Heidestock");
        break;
    }
    case 18729:
    {
        returnValue = F("Am Heideteich");
        break;
    }
    case 18730:
    {
        returnValue = F("Am Heidetor");
        break;
    }
    case 18731:
    {
        returnValue = F("Am Heideufer");
        break;
    }
    case 18732:
    {
        returnValue = F("Am Heidewald");
        break;
    }
    case 18733:
    {
        returnValue = F("Am Heideweg");
        break;
    }
    case 18734:
    {
        returnValue = F("Am Heidewinkel");
        break;
    }
    case 18735:
    {
        returnValue = F("Am Heidfeld");
        break;
    }
    case 18736:
    {
        returnValue = F("Am Heidfuchsberg");
        break;
    }
    case 18737:
    {
        returnValue = F("Am Heidhagen");
        break;
    }
    case 18738:
    {
        returnValue = F("Am Heidhof");
        break;
    }
    case 18739:
    {
        returnValue = F("Am Heidhornberg");
        break;
    }
    case 18740:
    {
        returnValue = F("Am Heidhügel");
        break;
    }
    case 18741:
    {
        returnValue = F("Am Heidiek");
        break;
    }
    case 18742:
    {
        returnValue = F("Am Heidig");
        break;
    }
    case 18743:
    {
        returnValue = F("Am Heidkamp");
        break;
    }
    case 18744:
    {
        returnValue = F("Am Heidknüppel");
        break;
    }
    case 18745:
    {
        returnValue = F("Am Heidkopf");
        break;
    }
    case 18746:
    {
        returnValue = F("Am Heidland");
        break;
    }
    case 18747:
    {
        returnValue = F("Am Heidmoor");
        break;
    }
    case 18748:
    {
        returnValue = F("Am Heidnocken");
        break;
    }
    case 18749:
    {
        returnValue = F("Am Heidorn");
        break;
    }
    case 18750:
    {
        returnValue = F("Am Heidplacken");
        break;
    }
    case 18751:
    {
        returnValue = F("Am Heidsee");
        break;
    }
    case 18752:
    {
        returnValue = F("Am Heidstock");
        break;
    }
    case 18753:
    {
        returnValue = F("Am Heidstroh");
        break;
    }
    case 18754:
    {
        returnValue = F("Am Heidstück");
        break;
    }
    case 18755:
    {
        returnValue = F("Am Heidt");
        break;
    }
    case 18756:
    {
        returnValue = F("Am Heidufer");
        break;
    }
    case 18757:
    {
        returnValue = F("Am Heidweg");
        break;
    }
    case 18758:
    {
        returnValue = F("Am Heidwinkel");
        break;
    }
    case 18759:
    {
        returnValue = F("Am Heienbruch");
        break;
    }
    case 18760:
    {
        returnValue = F("Am Heier");
        break;
    }
    case 18761:
    {
        returnValue = F("Am Heierpfuhl");
        break;
    }
    case 18762:
    {
        returnValue = F("Am Heierstück");
        break;
    }
    case 18763:
    {
        returnValue = F("Am Heiferbach");
        break;
    }
    case 18764:
    {
        returnValue = F("Am Heigele");
        break;
    }
    case 18765:
    {
        returnValue = F("Am Heigelsbach");
        break;
    }
    case 18766:
    {
        returnValue = F("Am Heigenberg");
        break;
    }
    case 18767:
    {
        returnValue = F("Am Heigenkamer Steig");
        break;
    }
    case 18768:
    {
        returnValue = F("Am Heikenberg");
        break;
    }
    case 18769:
    {
        returnValue = F("Am Heikeschloot");
        break;
    }
    case 18770:
    {
        returnValue = F("Am Heilbad");
        break;
    }
    case 18771:
    {
        returnValue = F("Am Heilborn");
        break;
    }
    case 18772:
    {
        returnValue = F("Am Heilbrunnen");
        break;
    }
    case 18773:
    {
        returnValue = F("Am Heile");
        break;
    }
    case 18774:
    {
        returnValue = F("Am Heilen Berge");
        break;
    }
    case 18775:
    {
        returnValue = F("Am Heilgenstock");
        break;
    }
    case 18776:
    {
        returnValue = F("Am Heilholz");
        break;
    }
    case 18777:
    {
        returnValue = F("Am Heilig Blut");
        break;
    }
    case 18778:
    {
        returnValue = F("Am Heilig Kreuz");
        break;
    }
    case 18779:
    {
        returnValue = F("Am Heilig Land");
        break;
    }
    case 18780:
    {
        returnValue = F("Am Heiligen");
        break;
    }
    case 18781:
    {
        returnValue = F("Am Heiligen Abend");
        break;
    }
    case 18782:
    {
        returnValue = F("Am Heiligen Baum");
        break;
    }
    case 18783:
    {
        returnValue = F("Am Heiligen Berg");
        break;
    }
    case 18784:
    {
        returnValue = F("Am Heiligen Blutberg");
        break;
    }
    case 18785:
    {
        returnValue = F("Am Heiligen Born");
        break;
    }
    case 18786:
    {
        returnValue = F("Am Heiligen Brunnen");
        break;
    }
    case 18787:
    {
        returnValue = F("Am Heiligen Damm");
        break;
    }
    case 18788:
    {
        returnValue = F("Am Heiligen Forst");
        break;
    }
    case 18789:
    {
        returnValue = F("Am Heiligen Garten");
        break;
    }
    case 18790:
    {
        returnValue = F("Am Heiligen Graben");
        break;
    }
    case 18791:
    {
        returnValue = F("Am Heiligen Hain");
        break;
    }
    case 18792:
    {
        returnValue = F("Am Heiligen Haus");
        break;
    }
    case 18793:
    {
        returnValue = F("Am Heiligen Holz");
        break;
    }
    case 18794:
    {
        returnValue = F("Am Heiligen Häuschen");
        break;
    }
    case 18795:
    {
        returnValue = F("Am Heiligen Krappen");
        break;
    }
    case 18796:
    {
        returnValue = F("Am Heiligen Kreuz");
        break;
    }
    case 18797:
    {
        returnValue = F("Am Heiligen Stock");
        break;
    }
    case 18798:
    {
        returnValue = F("Am Heiligen Weg");
        break;
    }
    case 18799:
    {
        returnValue = F("Am Heiligenberg");
        break;
    }
    case 18800:
    {
        returnValue = F("Am Heiligenbergtunnel");
        break;
    }
    case 18801:
    {
        returnValue = F("Am Heiligenborn");
        break;
    }
    case 18802:
    {
        returnValue = F("Am Heiligenbrunnen");
        break;
    }
    case 18803:
    {
        returnValue = F("Am Heiligenbuck");
        break;
    }
    case 18804:
    {
        returnValue = F("Am Heiligenbuckel");
        break;
    }
    case 18805:
    {
        returnValue = F("Am Heiligenfeld");
        break;
    }
    case 18806:
    {
        returnValue = F("Am Heiligengarten");
        break;
    }
    case 18807:
    {
        returnValue = F("Am Heiligenhaus");
        break;
    }
    case 18808:
    {
        returnValue = F("Am Heiligenholz");
        break;
    }
    case 18809:
    {
        returnValue = F("Am Heiligenhäuschen");
        break;
    }
    case 18810:
    {
        returnValue = F("Am Heiligenkopf");
        break;
    }
    case 18811:
    {
        returnValue = F("Am Heiligenpfad");
        break;
    }
    case 18812:
    {
        returnValue = F("Am Heiligenpütz");
        break;
    }
    case 18813:
    {
        returnValue = F("Am Heiligenrain");
        break;
    }
    case 18814:
    {
        returnValue = F("Am Heiligenrasen");
        break;
    }
    case 18815:
    {
        returnValue = F("Am Heiligenrech");
        break;
    }
    case 18816:
    {
        returnValue = F("Am Heiligenstein");
        break;
    }
    case 18817:
    {
        returnValue = F("Am Heiligenstock");
        break;
    }
    case 18818:
    {
        returnValue = F("Am Heiligenstück");
        break;
    }
    case 18819:
    {
        returnValue = F("Am Heiligenteich");
        break;
    }
    case 18820:
    {
        returnValue = F("Am Heiligenwald");
        break;
    }
    case 18821:
    {
        returnValue = F("Am Heiligenweg");
        break;
    }
    case 18822:
    {
        returnValue = F("Am Heiligenwoog");
        break;
    }
    case 18823:
    {
        returnValue = F("Am Heiligenwäldchen");
        break;
    }
    case 18824:
    {
        returnValue = F("Am Heiliggrund");
        break;
    }
    case 18825:
    {
        returnValue = F("Am Heiligholz");
        break;
    }
    case 18826:
    {
        returnValue = F("Am Heilmannsrain");
        break;
    }
    case 18827:
    {
        returnValue = F("Am Heilmerberg");
        break;
    }
    case 18828:
    {
        returnValue = F("Am Heim");
        break;
    }
    case 18829:
    {
        returnValue = F("Am Heimannshof");
        break;
    }
    case 18830:
    {
        returnValue = F("Am Heimathaus");
        break;
    }
    case 18831:
    {
        returnValue = F("Am Heimathof");
        break;
    }
    case 18832:
    {
        returnValue = F("Am Heimatmuseum");
        break;
    }
    case 18833:
    {
        returnValue = F("Am Heimbach");
        break;
    }
    case 18834:
    {
        returnValue = F("Am Heimbacher Pfad");
        break;
    }
    case 18835:
    {
        returnValue = F("Am Heimberg");
        break;
    }
    case 18836:
    {
        returnValue = F("Am Heimbergsflur");
        break;
    }
    case 18837:
    {
        returnValue = F("Am Heimchen");
        break;
    }
    case 18838:
    {
        returnValue = F("Am Heimchenberg");
        break;
    }
    case 18839:
    {
        returnValue = F("Am Heimekesberg");
        break;
    }
    case 18840:
    {
        returnValue = F("Am Heimelchen");
        break;
    }
    case 18841:
    {
        returnValue = F("Am Heimensteig");
        break;
    }
    case 18842:
    {
        returnValue = F("Am Heimersrech");
        break;
    }
    case 18843:
    {
        returnValue = F("Am Heimesod");
        break;
    }
    case 18844:
    {
        returnValue = F("Am Heimethues");
        break;
    }
    case 18845:
    {
        returnValue = F("Am Heimgarten");
        break;
    }
    case 18846:
    {
        returnValue = F("Am Heimgesberg");
        break;
    }
    case 18847:
    {
        returnValue = F("Am Heimig");
        break;
    }
    case 18848:
    {
        returnValue = F("Am Heimkenberg");
        break;
    }
    case 18849:
    {
        returnValue = F("Am Heimlichen Eck");
        break;
    }
    case 18850:
    {
        returnValue = F("Am Heimlichen Grund");
        break;
    }
    case 18851:
    {
        returnValue = F("Am Heimpfad");
        break;
    }
    case 18852:
    {
        returnValue = F("Am Heimsang");
        break;
    }
    case 18853:
    {
        returnValue = F("Am Heimweg");
        break;
    }
    case 18854:
    {
        returnValue = F("Am Heinberg");
        break;
    }
    case 18855:
    {
        returnValue = F("Am Heindlfeld");
        break;
    }
    case 18856:
    {
        returnValue = F("Am Heindlweiher");
        break;
    }
    case 18857:
    {
        returnValue = F("Am Heineberg");
        break;
    }
    case 18858:
    {
        returnValue = F("Am Heinebruch");
        break;
    }
    case 18859:
    {
        returnValue = F("Am Heinebühl");
        break;
    }
    case 18860:
    {
        returnValue = F("Am Heinengarten");
        break;
    }
    case 18861:
    {
        returnValue = F("Am Heinichenberg");
        break;
    }
    case 18862:
    {
        returnValue = F("Am Heinig");
        break;
    }
    case 18863:
    {
        returnValue = F("Am Heinrich-Kruse-Hof");
        break;
    }
    case 18864:
    {
        returnValue = F("Am Heinrichhaus");
        break;
    }
    case 18865:
    {
        returnValue = F("Am Heinrichsberg");
        break;
    }
    case 18866:
    {
        returnValue = F("Am Heinrichsgrund");
        break;
    }
    case 18867:
    {
        returnValue = F("Am Heinrichsschacht");
        break;
    }
    case 18868:
    {
        returnValue = F("Am Heinrichstollen");
        break;
    }
    case 18869:
    {
        returnValue = F("Am Heintges");
        break;
    }
    case 18870:
    {
        returnValue = F("Am Heinzberg");
        break;
    }
    case 18871:
    {
        returnValue = F("Am Heinzeacker");
        break;
    }
    case 18872:
    {
        returnValue = F("Am Heinzelberg");
        break;
    }
    case 18873:
    {
        returnValue = F("Am Heinzelmännchen");
        break;
    }
    case 18874:
    {
        returnValue = F("Am Heinzenberg");
        break;
    }
    case 18875:
    {
        returnValue = F("Am Heinzenhang");
        break;
    }
    case 18876:
    {
        returnValue = F("Am Heinzrain");
        break;
    }
    case 18877:
    {
        returnValue = F("Am Heinzteich");
        break;
    }
    case 18878:
    {
        returnValue = F("Am Heiriet");
        break;
    }
    case 18879:
    {
        returnValue = F("Am Heisch");
        break;
    }
    case 18880:
    {
        returnValue = F("Am Heischberg");
        break;
    }
    case 18881:
    {
        returnValue = F("Am Heisel");
        break;
    }
    case 18882:
    {
        returnValue = F("Am Heisenberg");
        break;
    }
    case 18883:
    {
        returnValue = F("Am Heiserbusch");
        break;
    }
    case 18884:
    {
        returnValue = F("Am Heister");
        break;
    }
    case 18885:
    {
        returnValue = F("Am Heisterberg");
        break;
    }
    case 18886:
    {
        returnValue = F("Am Heisterbusch");
        break;
    }
    case 18887:
    {
        returnValue = F("Am Heisterdahl");
        break;
    }
    case 18888:
    {
        returnValue = F("Am Heisterfeld");
        break;
    }
    case 18889:
    {
        returnValue = F("Am Heisterholz");
        break;
    }
    case 18890:
    {
        returnValue = F("Am Heisterkamp");
        break;
    }
    case 18891:
    {
        returnValue = F("Am Heistermannshof");
        break;
    }
    case 18892:
    {
        returnValue = F("Am Heistersiek");
        break;
    }
    case 18893:
    {
        returnValue = F("Am Heistück");
        break;
    }
    case 18894:
    {
        returnValue = F("Am Heiteren Blick");
        break;
    }
    case 18895:
    {
        returnValue = F("Am Heitkamp");
        break;
    }
    case 18896:
    {
        returnValue = F("Am Heizhaus");
        break;
    }
    case 18897:
    {
        returnValue = F("Am Heizkraftwerk");
        break;
    }
    case 18898:
    {
        returnValue = F("Am Heizwerk");
        break;
    }
    case 18899:
    {
        returnValue = F("Am Heißanger");
        break;
    }
    case 18900:
    {
        returnValue = F("Am Heißen Stein");
        break;
    }
    case 18901:
    {
        returnValue = F("Am Heißenanger");
        break;
    }
    case 18902:
    {
        returnValue = F("Am Heißgraben");
        break;
    }
    case 18903:
    {
        returnValue = F("Am Heken");
        break;
    }
    case 18904:
    {
        returnValue = F("Am Heldberg");
        break;
    }
    case 18905:
    {
        returnValue = F("Am Heldenberg");
        break;
    }
    case 18906:
    {
        returnValue = F("Am Heldenhain");
        break;
    }
    case 18907:
    {
        returnValue = F("Am Helderbach");
        break;
    }
    case 18908:
    {
        returnValue = F("Am Heldhansenhof");
        break;
    }
    case 18909:
    {
        returnValue = F("Am Helenenhof");
        break;
    }
    case 18910:
    {
        returnValue = F("Am Helenental");
        break;
    }
    case 18911:
    {
        returnValue = F("Am Helferichheim");
        break;
    }
    case 18912:
    {
        returnValue = F("Am Helfersbach");
        break;
    }
    case 18913:
    {
        returnValue = F("Am Helfersgrund");
        break;
    }
    case 18914:
    {
        returnValue = F("Am Helftaer Anger");
        break;
    }
    case 18915:
    {
        returnValue = F("Am Helgehaus");
        break;
    }
    case 18916:
    {
        returnValue = F("Am Helgenacker");
        break;
    }
    case 18917:
    {
        returnValue = F("Am Helgenberg");
        break;
    }
    case 18918:
    {
        returnValue = F("Am Helgengraben");
        break;
    }
    case 18919:
    {
        returnValue = F("Am Helgenhaus");
        break;
    }
    case 18920:
    {
        returnValue = F("Am Helgenhof");
        break;
    }
    case 18921:
    {
        returnValue = F("Am Helgenhäuschen");
        break;
    }
    case 18922:
    {
        returnValue = F("Am Helgenstock");
        break;
    }
    case 18923:
    {
        returnValue = F("Am Helgenstück");
        break;
    }
    case 18924:
    {
        returnValue = F("Am Heliken");
        break;
    }
    case 18925:
    {
        returnValue = F("Am Helk");
        break;
    }
    case 18926:
    {
        returnValue = F("Am Hellbach");
        break;
    }
    case 18927:
    {
        returnValue = F("Am Hellberg");
        break;
    }
    case 18928:
    {
        returnValue = F("Am Hellberge");
        break;
    }
    case 18929:
    {
        returnValue = F("Am Hellbrunn");
        break;
    }
    case 18930:
    {
        returnValue = F("Am Hellebach");
        break;
    }
    case 18931:
    {
        returnValue = F("Am Hellebleek");
        break;
    }
    case 18932:
    {
        returnValue = F("Am Hellefelder Bach");
        break;
    }
    case 18933:
    {
        returnValue = F("Am Hellegarten");
        break;
    }
    case 18934:
    {
        returnValue = F("Am Hellen Hahn");
        break;
    }
    case 18935:
    {
        returnValue = F("Am Hellenberg");
        break;
    }
    case 18936:
    {
        returnValue = F("Am Hellenbrink");
        break;
    }
    case 18937:
    {
        returnValue = F("Am Hellenfeld");
        break;
    }
    case 18938:
    {
        returnValue = F("Am Hellengraben");
        break;
    }
    case 18939:
    {
        returnValue = F("Am Hellenkamp");
        break;
    }
    case 18940:
    {
        returnValue = F("Am Hellenrain");
        break;
    }
    case 18941:
    {
        returnValue = F("Am Hellenstein");
        break;
    }
    case 18942:
    {
        returnValue = F("Am Hellenteich");
        break;
    }
    case 18943:
    {
        returnValue = F("Am Hellepädchen");
        break;
    }
    case 18944:
    {
        returnValue = F("Am Heller");
        break;
    }
    case 18945:
    {
        returnValue = F("Am Heller Kasten");
        break;
    }
    case 18946:
    {
        returnValue = F("Am Helleracker");
        break;
    }
    case 18947:
    {
        returnValue = F("Am Hellerberg");
        break;
    }
    case 18948:
    {
        returnValue = F("Am Hellerberge");
        break;
    }
    case 18949:
    {
        returnValue = F("Am Hellerpfad");
        break;
    }
    case 18950:
    {
        returnValue = F("Am Hellerrain");
        break;
    }
    case 18951:
    {
        returnValue = F("Am Hellerrücken");
        break;
    }
    case 18952:
    {
        returnValue = F("Am Hellersgraben");
        break;
    }
    case 18953:
    {
        returnValue = F("Am Hellersteg");
        break;
    }
    case 18954:
    {
        returnValue = F("Am Hellertal");
        break;
    }
    case 18955:
    {
        returnValue = F("Am Helleweg");
        break;
    }
    case 18956:
    {
        returnValue = F("Am Hellfeld");
        break;
    }
    case 18957:
    {
        returnValue = F("Am Hellgen");
        break;
    }
    case 18958:
    {
        returnValue = F("Am Hellholz");
        break;
    }
    case 18959:
    {
        returnValue = F("Am Helling");
        break;
    }
    case 18960:
    {
        returnValue = F("Am Hellingbach");
        break;
    }
    case 18961:
    {
        returnValue = F("Am Hellingel");
        break;
    }
    case 18962:
    {
        returnValue = F("Am Hellinger");
        break;
    }
    case 18963:
    {
        returnValue = F("Am Hellinger Bach");
        break;
    }
    case 18964:
    {
        returnValue = F("Am Hellmannsgrund");
        break;
    }
    case 18965:
    {
        returnValue = F("Am Hellrain");
        break;
    }
    case 18966:
    {
        returnValue = F("Am Hellsee");
        break;
    }
    case 18967:
    {
        returnValue = F("Am Hellteich");
        break;
    }
    case 18968:
    {
        returnValue = F("Am Hellweg");
        break;
    }
    case 18969:
    {
        returnValue = F("Am Helmeberg");
        break;
    }
    case 18970:
    {
        returnValue = F("Am Helmelsberg");
        break;
    }
    case 18971:
    {
        returnValue = F("Am Helmerbach");
        break;
    }
    case 18972:
    {
        returnValue = F("Am Helmerfeld");
        break;
    }
    case 18973:
    {
        returnValue = F("Am Helmeshof");
        break;
    }
    case 18974:
    {
        returnValue = F("Am Helmholtzring");
        break;
    }
    case 18975:
    {
        returnValue = F("Am Helmig");
        break;
    }
    case 18976:
    {
        returnValue = F("Am Helmsberg");
        break;
    }
    case 18977:
    {
        returnValue = F("Am Helmshäger Berg");
        break;
    }
    case 18978:
    {
        returnValue = F("Am Helmskamp");
        break;
    }
    case 18979:
    {
        returnValue = F("Am Helmstein");
        break;
    }
    case 18980:
    {
        returnValue = F("Am Helmwartsturm");
        break;
    }
    case 18981:
    {
        returnValue = F("Am Helschenfleht");
        break;
    }
    case 18982:
    {
        returnValue = F("Am Helsengrundbach");
        break;
    }
    case 18983:
    {
        returnValue = F("Am Helsunger Weg");
        break;
    }
    case 18984:
    {
        returnValue = F("Am Heltenberg");
        break;
    }
    case 18985:
    {
        returnValue = F("Am Helvetiushügel");
        break;
    }
    case 18986:
    {
        returnValue = F("Am Helweg");
        break;
    }
    case 18987:
    {
        returnValue = F("Am Helzenbach");
        break;
    }
    case 18988:
    {
        returnValue = F("Am Hemberg");
        break;
    }
    case 18989:
    {
        returnValue = F("Am Hembser Berg");
        break;
    }
    case 18990:
    {
        returnValue = F("Am Hemelberg");
        break;
    }
    case 18991:
    {
        returnValue = F("Am Hemels");
        break;
    }
    case 18992:
    {
        returnValue = F("Am Hemelter Bach");
        break;
    }
    case 18993:
    {
        returnValue = F("Am Hemeringer Bach");
        break;
    }
    case 18994:
    {
        returnValue = F("Am Hemgesberg");
        break;
    }
    case 18995:
    {
        returnValue = F("Am Hemmel");
        break;
    }
    case 18996:
    {
        returnValue = F("Am Hemmerich");
        break;
    }
    case 18997:
    {
        returnValue = F("Am Hempberg");
        break;
    }
    case 18998:
    {
        returnValue = F("Am Hempel");
        break;
    }
    case 18999:
    {
        returnValue = F("Am Hemsdorfer Weg");
        break;
    }
    case 19000:
    {
        returnValue = F("Am Hendelberg");
        break;
    }
    case 19001:
    {
        returnValue = F("Am Henger Kühanger");
        break;
    }
    case 19002:
    {
        returnValue = F("Am Hengsbach");
        break;
    }
    case 19003:
    {
        returnValue = F("Am Hengsberg");
        break;
    }
    case 19004:
    {
        returnValue = F("Am Hengstbach");
        break;
    }
    case 19005:
    {
        returnValue = F("Am Hengstberg");
        break;
    }
    case 19006:
    {
        returnValue = F("Am Hengstenberg");
        break;
    }
    case 19007:
    {
        returnValue = F("Am Hengstenplatz");
        break;
    }
    case 19008:
    {
        returnValue = F("Am Hengstgarten");
        break;
    }
    case 19009:
    {
        returnValue = F("Am Hengstkamp");
        break;
    }
    case 19010:
    {
        returnValue = F("Am Henig");
        break;
    }
    case 19011:
    {
        returnValue = F("Am Henkelsee");
        break;
    }
    case 19012:
    {
        returnValue = F("Am Henkelweg");
        break;
    }
    case 19013:
    {
        returnValue = F("Am Hennaboch");
        break;
    }
    case 19014:
    {
        returnValue = F("Am Hennebach");
        break;
    }
    case 19015:
    {
        returnValue = F("Am Hennenbach");
        break;
    }
    case 19016:
    {
        returnValue = F("Am Hennenberg");
        break;
    }
    case 19017:
    {
        returnValue = F("Am Hennenbichl");
        break;
    }
    case 19018:
    {
        returnValue = F("Am Hennengärtchen");
        break;
    }
    case 19019:
    {
        returnValue = F("Am Hennigbach");
        break;
    }
    case 19020:
    {
        returnValue = F("Am Hensberg");
        break;
    }
    case 19021:
    {
        returnValue = F("Am Henschel");
        break;
    }
    case 19022:
    {
        returnValue = F("Am Henschelberg");
        break;
    }
    case 19023:
    {
        returnValue = F("Am Henselsgraben");
        break;
    }
    case 19024:
    {
        returnValue = F("Am Henskes Hof");
        break;
    }
    case 19025:
    {
        returnValue = F("Am Hepel");
        break;
    }
    case 19026:
    {
        returnValue = F("Am Heppberg");
        break;
    }
    case 19027:
    {
        returnValue = F("Am Hepper");
        break;
    }
    case 19028:
    {
        returnValue = F("Am Heppfeld");
        break;
    }
    case 19029:
    {
        returnValue = F("Am Herberg");
        break;
    }
    case 19030:
    {
        returnValue = F("Am Herbigsbach");
        break;
    }
    case 19031:
    {
        returnValue = F("Am Herbstberg");
        break;
    }
    case 19032:
    {
        returnValue = F("Am Herbstfeld");
        break;
    }
    case 19033:
    {
        returnValue = F("Am Herchenstück");
        break;
    }
    case 19034:
    {
        returnValue = F("Am Herdchen");
        break;
    }
    case 19035:
    {
        returnValue = F("Am Herderfeld");
        break;
    }
    case 19036:
    {
        returnValue = F("Am Herdle");
        break;
    }
    case 19037:
    {
        returnValue = F("Am Herdpfad");
        break;
    }
    case 19038:
    {
        returnValue = F("Am Herdrain");
        break;
    }
    case 19039:
    {
        returnValue = F("Am Herdry");
        break;
    }
    case 19040:
    {
        returnValue = F("Am Herdweg");
        break;
    }
    case 19041:
    {
        returnValue = F("Am Herforder Tor");
        break;
    }
    case 19042:
    {
        returnValue = F("Am Hergel");
        break;
    }
    case 19043:
    {
        returnValue = F("Am Hergert");
        break;
    }
    case 19044:
    {
        returnValue = F("Am Hergertsbaum");
        break;
    }
    case 19045:
    {
        returnValue = F("Am Hergesgrund");
        break;
    }
    case 19046:
    {
        returnValue = F("Am Hergethof");
        break;
    }
    case 19047:
    {
        returnValue = F("Am Hergraben");
        break;
    }
    case 19048:
    {
        returnValue = F("Am Herhagen");
        break;
    }
    case 19049:
    {
        returnValue = F("Am Heriaden");
        break;
    }
    case 19050:
    {
        returnValue = F("Am Herich");
        break;
    }
    case 19051:
    {
        returnValue = F("Am Hering");
        break;
    }
    case 19052:
    {
        returnValue = F("Am Heringsee");
        break;
    }
    case 19053:
    {
        returnValue = F("Am Heringskopf");
        break;
    }
    case 19054:
    {
        returnValue = F("Am Herkenbusch");
        break;
    }
    case 19055:
    {
        returnValue = F("Am Herlinger Wald");
        break;
    }
    case 19056:
    {
        returnValue = F("Am Herlingsen");
        break;
    }
    case 19057:
    {
        returnValue = F("Am Hermanns-Hain");
        break;
    }
    case 19058:
    {
        returnValue = F("Am Hermannsberg");
        break;
    }
    case 19059:
    {
        returnValue = F("Am Hermannsbrunnen");
        break;
    }
    case 19060:
    {
        returnValue = F("Am Hermannshof");
        break;
    }
    case 19061:
    {
        returnValue = F("Am Hermannstein");
        break;
    }
    case 19062:
    {
        returnValue = F("Am Hermannstempel");
        break;
    }
    case 19063:
    {
        returnValue = F("Am Hermelinghof");
        break;
    }
    case 19064:
    {
        returnValue = F("Am Hermertsberg");
        break;
    }
    case 19065:
    {
        returnValue = F("Am Hermerzaun");
        break;
    }
    case 19066:
    {
        returnValue = F("Am Hermesacker");
        break;
    }
    case 19067:
    {
        returnValue = F("Am Hermesbach");
        break;
    }
    case 19068:
    {
        returnValue = F("Am Hermesgarten");
        break;
    }
    case 19069:
    {
        returnValue = F("Am Hermeshof");
        break;
    }
    case 19070:
    {
        returnValue = F("Am Hermesturm");
        break;
    }
    case 19071:
    {
        returnValue = F("Am Hermeswald");
        break;
    }
    case 19072:
    {
        returnValue = F("Am Hermetzacker");
        break;
    }
    case 19073:
    {
        returnValue = F("Am Herminghauspark");
        break;
    }
    case 19074:
    {
        returnValue = F("Am Heroldsberg");
        break;
    }
    case 19075:
    {
        returnValue = F("Am Heroldsrain");
        break;
    }
    case 19076:
    {
        returnValue = F("Am Heroldstein");
        break;
    }
    case 19077:
    {
        returnValue = F("Am Herpelbach");
        break;
    }
    case 19078:
    {
        returnValue = F("Am Herplatz");
        break;
    }
    case 19079:
    {
        returnValue = F("Am Herr Rain");
        break;
    }
    case 19080:
    {
        returnValue = F("Am Herrbach");
        break;
    }
    case 19081:
    {
        returnValue = F("Am Herreder Bach");
        break;
    }
    case 19082:
    {
        returnValue = F("Am Herren Höck");
        break;
    }
    case 19083:
    {
        returnValue = F("Am Herrenacker");
        break;
    }
    case 19084:
    {
        returnValue = F("Am Herrenalber Hof");
        break;
    }
    case 19085:
    {
        returnValue = F("Am Herrenanger");
        break;
    }
    case 19086:
    {
        returnValue = F("Am Herrenberg");
        break;
    }
    case 19087:
    {
        returnValue = F("Am Herrenbichl");
        break;
    }
    case 19088:
    {
        returnValue = F("Am Herrenborn");
        break;
    }
    case 19089:
    {
        returnValue = F("Am Herrenbrunnen");
        break;
    }
    case 19090:
    {
        returnValue = F("Am Herrenbrünnchen");
        break;
    }
    case 19091:
    {
        returnValue = F("Am Herrenbusch");
        break;
    }
    case 19092:
    {
        returnValue = F("Am Herrenbühl");
        break;
    }
    case 19093:
    {
        returnValue = F("Am Herrendamm");
        break;
    }
    case 19094:
    {
        returnValue = F("Am Herrenfeld");
        break;
    }
    case 19095:
    {
        returnValue = F("Am Herrengang");
        break;
    }
    case 19096:
    {
        returnValue = F("Am Herrengarten");
        break;
    }
    case 19097:
    {
        returnValue = F("Am Herrengartenweg");
        break;
    }
    case 19098:
    {
        returnValue = F("Am Herrengraben");
        break;
    }
    case 19099:
    {
        returnValue = F("Am Herrengrund");
        break;
    }
    case 19100:
    {
        returnValue = F("Am Herrengärtchen");
        break;
    }
    case 19101:
    {
        returnValue = F("Am Herrenhaus");
        break;
    }
    case 19102:
    {
        returnValue = F("Am Herrenhof");
        break;
    }
    case 19103:
    {
        returnValue = F("Am Herrenholz");
        break;
    }
    case 19104:
    {
        returnValue = F("Am Herrenhöfchen");
        break;
    }
    case 19105:
    {
        returnValue = F("Am Herrenhölzl");
        break;
    }
    case 19106:
    {
        returnValue = F("Am Herrenkamp");
        break;
    }
    case 19107:
    {
        returnValue = F("Am Herrenkopf");
        break;
    }
    case 19108:
    {
        returnValue = F("Am Herrenland");
        break;
    }
    case 19109:
    {
        returnValue = F("Am Herrenlandpark");
        break;
    }
    case 19110:
    {
        returnValue = F("Am Herrenmarkt");
        break;
    }
    case 19111:
    {
        returnValue = F("Am Herrenmoor");
        break;
    }
    case 19112:
    {
        returnValue = F("Am Herrenpfad");
        break;
    }
    case 19113:
    {
        returnValue = F("Am Herrenrödchen");
        break;
    }
    case 19114:
    {
        returnValue = F("Am Herrensand");
        break;
    }
    case 19115:
    {
        returnValue = F("Am Herrenschlag");
        break;
    }
    case 19116:
    {
        returnValue = F("Am Herrensee");
        break;
    }
    case 19117:
    {
        returnValue = F("Am Herrensköpfchen");
        break;
    }
    case 19118:
    {
        returnValue = F("Am Herrensoll");
        break;
    }
    case 19119:
    {
        returnValue = F("Am Herrensteig");
        break;
    }
    case 19120:
    {
        returnValue = F("Am Herrenstück");
        break;
    }
    case 19121:
    {
        returnValue = F("Am Herrental");
        break;
    }
    case 19122:
    {
        returnValue = F("Am Herrenteich");
        break;
    }
    case 19123:
    {
        returnValue = F("Am Herrentisch");
        break;
    }
    case 19124:
    {
        returnValue = F("Am Herrentor");
        break;
    }
    case 19125:
    {
        returnValue = F("Am Herrentorswall");
        break;
    }
    case 19126:
    {
        returnValue = F("Am Herrenwald");
        break;
    }
    case 19127:
    {
        returnValue = F("Am Herrenwasser");
        break;
    }
    case 19128:
    {
        returnValue = F("Am Herrenweg");
        break;
    }
    case 19129:
    {
        returnValue = F("Am Herrenweiher");
        break;
    }
    case 19130:
    {
        returnValue = F("Am Herrenwäldle");
        break;
    }
    case 19131:
    {
        returnValue = F("Am Herresbacher Bahnhof");
        break;
    }
    case 19132:
    {
        returnValue = F("Am Herrgottsacker");
        break;
    }
    case 19133:
    {
        returnValue = F("Am Herrgottsbaum");
        break;
    }
    case 19134:
    {
        returnValue = F("Am Herrgottsberg");
        break;
    }
    case 19135:
    {
        returnValue = F("Am Herrgottsbächle");
        break;
    }
    case 19136:
    {
        returnValue = F("Am Herrgottschrofen");
        break;
    }
    case 19137:
    {
        returnValue = F("Am Herrgottsfeld");
        break;
    }
    case 19138:
    {
        returnValue = F("Am Herrhai");
        break;
    }
    case 19139:
    {
        returnValue = F("Am Herrkamp");
        break;
    }
    case 19140:
    {
        returnValue = F("Am Herrlebühl");
        break;
    }
    case 19141:
    {
        returnValue = F("Am Herrlesberg");
        break;
    }
    case 19142:
    {
        returnValue = F("Am Herrmannsberg");
        break;
    }
    case 19143:
    {
        returnValue = F("Am Herrmannschacht");
        break;
    }
    case 19144:
    {
        returnValue = F("Am Herrmannsweiher");
        break;
    }
    case 19145:
    {
        returnValue = F("Am Herrnacker");
        break;
    }
    case 19146:
    {
        returnValue = F("Am Herrnbaum");
        break;
    }
    case 19147:
    {
        returnValue = F("Am Herrnberg");
        break;
    }
    case 19148:
    {
        returnValue = F("Am Herrnbühl");
        break;
    }
    case 19149:
    {
        returnValue = F("Am Herrngarten");
        break;
    }
    case 19150:
    {
        returnValue = F("Am Herrngraben");
        break;
    }
    case 19151:
    {
        returnValue = F("Am Herrngreut");
        break;
    }
    case 19152:
    {
        returnValue = F("Am Herrnhof");
        break;
    }
    case 19153:
    {
        returnValue = F("Am Herrnholz");
        break;
    }
    case 19154:
    {
        returnValue = F("Am Herrnkopf");
        break;
    }
    case 19155:
    {
        returnValue = F("Am Herrnsitz");
        break;
    }
    case 19156:
    {
        returnValue = F("Am Herrnweiher");
        break;
    }
    case 19157:
    {
        returnValue = F("Am Herrnzaun");
        break;
    }
    case 19158:
    {
        returnValue = F("Am Herroth");
        break;
    }
    case 19159:
    {
        returnValue = F("Am Herrschaftsacker");
        break;
    }
    case 19160:
    {
        returnValue = F("Am Herrschaftsanger");
        break;
    }
    case 19161:
    {
        returnValue = F("Am Herrschaftsbuckel");
        break;
    }
    case 19162:
    {
        returnValue = F("Am Herrschaftsstück");
        break;
    }
    case 19163:
    {
        returnValue = F("Am Herrschaftswald");
        break;
    }
    case 19164:
    {
        returnValue = F("Am Herrstpfad");
        break;
    }
    case 19165:
    {
        returnValue = F("Am Herrwald");
        break;
    }
    case 19166:
    {
        returnValue = F("Am Herrweg");
        break;
    }
    case 19167:
    {
        returnValue = F("Am Herrwege");
        break;
    }
    case 19168:
    {
        returnValue = F("Am Herschbach");
        break;
    }
    case 19169:
    {
        returnValue = F("Am Hertelsberg");
        break;
    }
    case 19170:
    {
        returnValue = F("Am Herterfeld");
        break;
    }
    case 19171:
    {
        returnValue = F("Am Herthasee");
        break;
    }
    case 19172:
    {
        returnValue = F("Am Hertinger Tor");
        break;
    }
    case 19173:
    {
        returnValue = F("Am Hertl");
        break;
    }
    case 19174:
    {
        returnValue = F("Am Hertweg");
        break;
    }
    case 19175:
    {
        returnValue = F("Am Hertwigswäldchen");
        break;
    }
    case 19176:
    {
        returnValue = F("Am Herweg");
        break;
    }
    case 19177:
    {
        returnValue = F("Am Herzbach");
        break;
    }
    case 19178:
    {
        returnValue = F("Am Herzberg");
        break;
    }
    case 19179:
    {
        returnValue = F("Am Herzberge");
        break;
    }
    case 19180:
    {
        returnValue = F("Am Herzborn");
        break;
    }
    case 19181:
    {
        returnValue = F("Am Herzel");
        break;
    }
    case 19182:
    {
        returnValue = F("Am Herzenberg");
        break;
    }
    case 19183:
    {
        returnValue = F("Am Herzesch");
        break;
    }
    case 19184:
    {
        returnValue = F("Am Herzfelder Weg");
        break;
    }
    case 19185:
    {
        returnValue = F("Am Herzgarten");
        break;
    }
    case 19186:
    {
        returnValue = F("Am Herzhain");
        break;
    }
    case 19187:
    {
        returnValue = F("Am Herzhügel");
        break;
    }
    case 19188:
    {
        returnValue = F("Am Herzleiterbach");
        break;
    }
    case 19189:
    {
        returnValue = F("Am Herzog");
        break;
    }
    case 19190:
    {
        returnValue = F("Am Herzogberg");
        break;
    }
    case 19191:
    {
        returnValue = F("Am Herzogkeller");
        break;
    }
    case 19192:
    {
        returnValue = F("Am Herzogsberg");
        break;
    }
    case 19193:
    {
        returnValue = F("Am Herzogtore");
        break;
    }
    case 19194:
    {
        returnValue = F("Am Herzrain");
        break;
    }
    case 19195:
    {
        returnValue = F("Am Herßmer Kamp");
        break;
    }
    case 19196:
    {
        returnValue = F("Am Hesberg");
        break;
    }
    case 19197:
    {
        returnValue = F("Am Heschen");
        break;
    }
    case 19198:
    {
        returnValue = F("Am Heseberg");
        break;
    }
    case 19199:
    {
        returnValue = F("Am Hesebusch");
        break;
    }
    case 19200:
    {
        returnValue = F("Am Hesegrund");
        break;
    }
    case 19201:
    {
        returnValue = F("Am Hesekamp");
        break;
    }
    case 19202:
    {
        returnValue = F("Am Heselbarg");
        break;
    }
    case 19203:
    {
        returnValue = F("Am Heselberg");
        break;
    }
    case 19204:
    {
        returnValue = F("Am Heselkamp");
        break;
    }
    case 19205:
    {
        returnValue = F("Am Heselrech");
        break;
    }
    case 19206:
    {
        returnValue = F("Am Heselsberg");
        break;
    }
    case 19207:
    {
        returnValue = F("Am Heselsweg");
        break;
    }
    case 19208:
    {
        returnValue = F("Am Heshahn");
        break;
    }
    case 19209:
    {
        returnValue = F("Am Hesseberg");
        break;
    }
    case 19210:
    {
        returnValue = F("Am Hessebusch");
        break;
    }
    case 19211:
    {
        returnValue = F("Am Hesselbach");
        break;
    }
    case 19212:
    {
        returnValue = F("Am Hesselberg");
        break;
    }
    case 19213:
    {
        returnValue = F("Am Hesselborn");
        break;
    }
    case 19214:
    {
        returnValue = F("Am Hesselswald");
        break;
    }
    case 19215:
    {
        returnValue = F("Am Hessenberg");
        break;
    }
    case 19216:
    {
        returnValue = F("Am Hessenbusch");
        break;
    }
    case 19217:
    {
        returnValue = F("Am Hesseneck");
        break;
    }
    case 19218:
    {
        returnValue = F("Am Hessenfeld");
        break;
    }
    case 19219:
    {
        returnValue = F("Am Hessenkamp");
        break;
    }
    case 19220:
    {
        returnValue = F("Am Hessenrain");
        break;
    }
    case 19221:
    {
        returnValue = F("Am Hessenstein");
        break;
    }
    case 19222:
    {
        returnValue = F("Am Hessental");
        break;
    }
    case 19223:
    {
        returnValue = F("Am Hessentuch");
        break;
    }
    case 19224:
    {
        returnValue = F("Am Hessenwald");
        break;
    }
    case 19225:
    {
        returnValue = F("Am Hessenwehr");
        break;
    }
    case 19226:
    {
        returnValue = F("Am Hessepött");
        break;
    }
    case 19227:
    {
        returnValue = F("Am Hessing");
        break;
    }
    case 19228:
    {
        returnValue = F("Am Hessinggraben");
        break;
    }
    case 19229:
    {
        returnValue = F("Am Hesterberg");
        break;
    }
    case 19230:
    {
        returnValue = F("Am Hesterkamp");
        break;
    }
    case 19231:
    {
        returnValue = F("Am Hestern");
        break;
    }
    case 19232:
    {
        returnValue = F("Am Hesternberg");
        break;
    }
    case 19233:
    {
        returnValue = F("Am Hetgesborn");
        break;
    }
    case 19234:
    {
        returnValue = F("Am Hetlinger Moor");
        break;
    }
    case 19235:
    {
        returnValue = F("Am Hetschbacher Weg");
        break;
    }
    case 19236:
    {
        returnValue = F("Am Hetschenbach");
        break;
    }
    case 19237:
    {
        returnValue = F("Am Hetschenberg");
        break;
    }
    case 19238:
    {
        returnValue = F("Am Hettberg");
        break;
    }
    case 19239:
    {
        returnValue = F("Am Hettmecker Teich");
        break;
    }
    case 19240:
    {
        returnValue = F("Am Hetzbach");
        break;
    }
    case 19241:
    {
        returnValue = F("Am Hetzberg");
        break;
    }
    case 19242:
    {
        returnValue = F("Am Hetzelberg");
        break;
    }
    case 19243:
    {
        returnValue = F("Am Hetzenborn");
        break;
    }
    case 19244:
    {
        returnValue = F("Am Hetzenhof");
        break;
    }
    case 19245:
    {
        returnValue = F("Am Hetzennest");
        break;
    }
    case 19246:
    {
        returnValue = F("Am Hetzling");
        break;
    }
    case 19247:
    {
        returnValue = F("Am Heuanger");
        break;
    }
    case 19248:
    {
        returnValue = F("Am Heubach");
        break;
    }
    case 19249:
    {
        returnValue = F("Am Heuberg");
        break;
    }
    case 19250:
    {
        returnValue = F("Am Heubrunnen");
        break;
    }
    case 19251:
    {
        returnValue = F("Am Heubächle");
        break;
    }
    case 19252:
    {
        returnValue = F("Am Heubühl");
        break;
    }
    case 19253:
    {
        returnValue = F("Am Heuchel");
        break;
    }
    case 19254:
    {
        returnValue = F("Am Heudamm");
        break;
    }
    case 19255:
    {
        returnValue = F("Am Heudorfer Kreuz");
        break;
    }
    case 19256:
    {
        returnValue = F("Am Heuerberg");
        break;
    }
    case 19257:
    {
        returnValue = F("Am Heuerskamp");
        break;
    }
    case 19258:
    {
        returnValue = F("Am Heuert");
        break;
    }
    case 19259:
    {
        returnValue = F("Am Heugarten");
        break;
    }
    case 19260:
    {
        returnValue = F("Am Heugraben");
        break;
    }
    case 19261:
    {
        returnValue = F("Am Heugärtle");
        break;
    }
    case 19262:
    {
        returnValue = F("Am Heukenberg");
        break;
    }
    case 19263:
    {
        returnValue = F("Am Heulenberg");
        break;
    }
    case 19264:
    {
        returnValue = F("Am Heumahdenweg");
        break;
    }
    case 19265:
    {
        returnValue = F("Am Heumoor");
        break;
    }
    case 19266:
    {
        returnValue = F("Am Heuplatz");
        break;
    }
    case 19267:
    {
        returnValue = F("Am Heurech");
        break;
    }
    case 19268:
    {
        returnValue = F("Am Heusack");
        break;
    }
    case 19269:
    {
        returnValue = F("Am Heuselbach");
        break;
    }
    case 19270:
    {
        returnValue = F("Am Heusling");
        break;
    }
    case 19271:
    {
        returnValue = F("Am Heusteig");
        break;
    }
    case 19272:
    {
        returnValue = F("Am Heustädele");
        break;
    }
    case 19273:
    {
        returnValue = F("Am Heutor");
        break;
    }
    case 19274:
    {
        returnValue = F("Am Heuwasen");
        break;
    }
    case 19275:
    {
        returnValue = F("Am Heuweg");
        break;
    }
    case 19276:
    {
        returnValue = F("Am Heuwege");
        break;
    }
    case 19277:
    {
        returnValue = F("Am Heuzwinger");
        break;
    }
    case 19278:
    {
        returnValue = F("Am Heuäcker");
        break;
    }
    case 19279:
    {
        returnValue = F("Am Heven");
        break;
    }
    case 19280:
    {
        returnValue = F("Am Hewe");
        break;
    }
    case 19281:
    {
        returnValue = F("Am Hewenegg");
        break;
    }
    case 19282:
    {
        returnValue = F("Am Hewig");
        break;
    }
    case 19283:
    {
        returnValue = F("Am Hexenberg");
        break;
    }
    case 19284:
    {
        returnValue = F("Am Hexenboll");
        break;
    }
    case 19285:
    {
        returnValue = F("Am Hexenbrünnlein");
        break;
    }
    case 19286:
    {
        returnValue = F("Am Hexenbuckel");
        break;
    }
    case 19287:
    {
        returnValue = F("Am Hexendeich");
        break;
    }
    case 19288:
    {
        returnValue = F("Am Hexenholz");
        break;
    }
    case 19289:
    {
        returnValue = F("Am Hexenkessel");
        break;
    }
    case 19290:
    {
        returnValue = F("Am Hexenpfad");
        break;
    }
    case 19291:
    {
        returnValue = F("Am Hexenplatz");
        break;
    }
    case 19292:
    {
        returnValue = F("Am Hexenstein");
        break;
    }
    case 19293:
    {
        returnValue = F("Am Hexenstock");
        break;
    }
    case 19294:
    {
        returnValue = F("Am Hexenteich");
        break;
    }
    case 19295:
    {
        returnValue = F("Am Hexenturm");
        break;
    }
    case 19296:
    {
        returnValue = F("Am Hexentänzchen");
        break;
    }
    case 19297:
    {
        returnValue = F("Am Hey");
        break;
    }
    case 19298:
    {
        returnValue = F("Am Heydacker");
        break;
    }
    case 19299:
    {
        returnValue = F("Am Heydelberg");
        break;
    }
    case 19300:
    {
        returnValue = F("Am Heydevelthof");
        break;
    }
    case 19301:
    {
        returnValue = F("Am Heydwolf");
        break;
    }
    case 19302:
    {
        returnValue = F("Am Heyer");
        break;
    }
    case 19303:
    {
        returnValue = F("Am Heyerberg");
        break;
    }
    case 19304:
    {
        returnValue = F("Am Heyerhof");
        break;
    }
    case 19305:
    {
        returnValue = F("Am Heynburger Weg");
        break;
    }
    case 19306:
    {
        returnValue = F("Am Heyrings");
        break;
    }
    case 19307:
    {
        returnValue = F("Am Heytgraben");
        break;
    }
    case 19308:
    {
        returnValue = F("Am Heßlaberg");
        break;
    }
    case 19309:
    {
        returnValue = F("Am Heßlach");
        break;
    }
    case 19310:
    {
        returnValue = F("Am Heßlar");
        break;
    }
    case 19311:
    {
        returnValue = F("Am Heßufer");
        break;
    }
    case 19312:
    {
        returnValue = F("Am Hickenstein");
        break;
    }
    case 19313:
    {
        returnValue = F("Am Hickicker");
        break;
    }
    case 19314:
    {
        returnValue = F("Am Hiddelk");
        break;
    }
    case 19315:
    {
        returnValue = F("Am Hidding");
        break;
    }
    case 19316:
    {
        returnValue = F("Am Hiendl");
        break;
    }
    case 19317:
    {
        returnValue = F("Am Hierespfädchen");
        break;
    }
    case 19318:
    {
        returnValue = F("Am Hierlbach");
        break;
    }
    case 19319:
    {
        returnValue = F("Am Hieronymus");
        break;
    }
    case 19320:
    {
        returnValue = F("Am Hierscheider Graben");
        break;
    }
    case 19321:
    {
        returnValue = F("Am Hiesberg");
        break;
    }
    case 19322:
    {
        returnValue = F("Am Hiest");
        break;
    }
    case 19323:
    {
        returnValue = F("Am Hilber");
        break;
    }
    case 19324:
    {
        returnValue = F("Am Hilborn");
        break;
    }
    case 19325:
    {
        returnValue = F("Am Hilchenbach");
        break;
    }
    case 19326:
    {
        returnValue = F("Am Hildegardisberg");
        break;
    }
    case 19327:
    {
        returnValue = F("Am Hildegardisquell");
        break;
    }
    case 19328:
    {
        returnValue = F("Am Hilgen Hof");
        break;
    }
    case 19329:
    {
        returnValue = F("Am Hilgenacker");
        break;
    }
    case 19330:
    {
        returnValue = F("Am Hilgenbach");
        break;
    }
    case 19331:
    {
        returnValue = F("Am Hilgenberg");
        break;
    }
    case 19332:
    {
        returnValue = F("Am Hilgenfeld");
        break;
    }
    case 19333:
    {
        returnValue = F("Am Hilgenhaus");
        break;
    }
    case 19334:
    {
        returnValue = F("Am Hilgenhop");
        break;
    }
    case 19335:
    {
        returnValue = F("Am Hilgenhövel");
        break;
    }
    case 19336:
    {
        returnValue = F("Am Hilgenland");
        break;
    }
    case 19337:
    {
        returnValue = F("Am Hilgenlandsacker");
        break;
    }
    case 19338:
    {
        returnValue = F("Am Hilgenschlopp");
        break;
    }
    case 19339:
    {
        returnValue = F("Am Hilgenstein");
        break;
    }
    case 19340:
    {
        returnValue = F("Am Hilgenstock");
        break;
    }
    case 19341:
    {
        returnValue = F("Am Hilgenstrauch");
        break;
    }
    case 19342:
    {
        returnValue = F("Am Hilgersberg");
        break;
    }
    case 19343:
    {
        returnValue = F("Am Hilgerspfad");
        break;
    }
    case 19344:
    {
        returnValue = F("Am Hilgnerfeld");
        break;
    }
    case 19345:
    {
        returnValue = F("Am Hilkenberg");
        break;
    }
    case 19346:
    {
        returnValue = F("Am Hillebach");
        break;
    }
    case 19347:
    {
        returnValue = F("Am Hillebachsee");
        break;
    }
    case 19348:
    {
        returnValue = F("Am Hillebrand");
        break;
    }
    case 19349:
    {
        returnValue = F("Am Hillenberg");
        break;
    }
    case 19350:
    {
        returnValue = F("Am Hillenhof");
        break;
    }
    case 19351:
    {
        returnValue = F("Am Hiller");
        break;
    }
    case 19352:
    {
        returnValue = F("Am Hillerasen");
        break;
    }
    case 19353:
    {
        returnValue = F("Am Hillerbach");
        break;
    }
    case 19354:
    {
        returnValue = F("Am Hillernsen Hamm");
        break;
    }
    case 19355:
    {
        returnValue = F("Am Hillerweg");
        break;
    }
    case 19356:
    {
        returnValue = F("Am Hillesheimer Weg");
        break;
    }
    case 19357:
    {
        returnValue = F("Am Hilligbornfeld");
        break;
    }
    case 19358:
    {
        returnValue = F("Am Hilm");
        break;
    }
    case 19359:
    {
        returnValue = F("Am Hilpernstein");
        break;
    }
    case 19360:
    {
        returnValue = F("Am Hilpert");
        break;
    }
    case 19361:
    {
        returnValue = F("Am Hilpertsbrunnen");
        break;
    }
    case 19362:
    {
        returnValue = F("Am Hilsbach");
        break;
    }
    case 19363:
    {
        returnValue = F("Am Hilsberg");
        break;
    }
    case 19364:
    {
        returnValue = F("Am Hilschberg");
        break;
    }
    case 19365:
    {
        returnValue = F("Am Hilteken");
        break;
    }
    case 19366:
    {
        returnValue = F("Am Himbeeracker");
        break;
    }
    case 19367:
    {
        returnValue = F("Am Himberg");
        break;
    }
    case 19368:
    {
        returnValue = F("Am Himberger See");
        break;
    }
    case 19369:
    {
        returnValue = F("Am Himmel");
        break;
    }
    case 19370:
    {
        returnValue = F("Am Himmelacker");
        break;
    }
    case 19371:
    {
        returnValue = F("Am Himmelbrückl");
        break;
    }
    case 19372:
    {
        returnValue = F("Am Himmelchen");
        break;
    }
    case 19373:
    {
        returnValue = F("Am Himmeldieck");
        break;
    }
    case 19374:
    {
        returnValue = F("Am Himmelfeld");
        break;
    }
    case 19375:
    {
        returnValue = F("Am Himmelkamp");
        break;
    }
    case 19376:
    {
        returnValue = F("Am Himmelmoor");
        break;
    }
    case 19377:
    {
        returnValue = F("Am Himmelreich");
        break;
    }
    case 19378:
    {
        returnValue = F("Am Himmelsacker");
        break;
    }
    case 19379:
    {
        returnValue = F("Am Himmelsberg");
        break;
    }
    case 19380:
    {
        returnValue = F("Am Himmelsbirnbaum");
        break;
    }
    case 19381:
    {
        returnValue = F("Am Himmelschachen");
        break;
    }
    case 19382:
    {
        returnValue = F("Am Himmelsgarten");
        break;
    }
    case 19383:
    {
        returnValue = F("Am Himmelsgärtle");
        break;
    }
    case 19384:
    {
        returnValue = F("Am Himmelspfad");
        break;
    }
    case 19385:
    {
        returnValue = F("Am Himmelstein");
        break;
    }
    case 19386:
    {
        returnValue = F("Am Himmler");
        break;
    }
    case 19387:
    {
        returnValue = F("Am Himmlischen Heer");
        break;
    }
    case 19388:
    {
        returnValue = F("Am Himpberg");
        break;
    }
    case 19389:
    {
        returnValue = F("Am Hindenburgpark");
        break;
    }
    case 19390:
    {
        returnValue = F("Am Hingstkamp");
        break;
    }
    case 19391:
    {
        returnValue = F("Am Hinkamp");
        break;
    }
    case 19392:
    {
        returnValue = F("Am Hinkelacker");
        break;
    }
    case 19393:
    {
        returnValue = F("Am Hinkeln");
        break;
    }
    case 19394:
    {
        returnValue = F("Am Hinkelstein");
        break;
    }
    case 19395:
    {
        returnValue = F("Am Hinkenberg");
        break;
    }
    case 19396:
    {
        returnValue = F("Am Hinkenkamp");
        break;
    }
    case 19397:
    {
        returnValue = F("Am Hinnig");
        break;
    }
    case 19398:
    {
        returnValue = F("Am Hinter Tief");
        break;
    }
    case 19399:
    {
        returnValue = F("Am Hinteracker");
        break;
    }
    case 19400:
    {
        returnValue = F("Am Hinteranger");
        break;
    }
    case 19401:
    {
        returnValue = F("Am Hinterbach");
        break;
    }
    case 19402:
    {
        returnValue = F("Am Hinterbann");
        break;
    }
    case 19403:
    {
        returnValue = F("Am Hinterberg");
        break;
    }
    case 19404:
    {
        returnValue = F("Am Hinterborn");
        break;
    }
    case 19405:
    {
        returnValue = F("Am Hinterbusch");
        break;
    }
    case 19406:
    {
        returnValue = F("Am Hinterdeich");
        break;
    }
    case 19407:
    {
        returnValue = F("Am Hinteren Berg");
        break;
    }
    case 19408:
    {
        returnValue = F("Am Hinteren Feld");
        break;
    }
    case 19409:
    {
        returnValue = F("Am Hinteren Kamp");
        break;
    }
    case 19410:
    {
        returnValue = F("Am Hinteren Schloß");
        break;
    }
    case 19411:
    {
        returnValue = F("Am Hinteren Schloßberg");
        break;
    }
    case 19412:
    {
        returnValue = F("Am Hinteren Tor");
        break;
    }
    case 19413:
    {
        returnValue = F("Am Hinterfeld");
        break;
    }
    case 19414:
    {
        returnValue = F("Am Hinterforst");
        break;
    }
    case 19415:
    {
        returnValue = F("Am Hintergraben");
        break;
    }
    case 19416:
    {
        returnValue = F("Am Hinterhof");
        break;
    }
    case 19417:
    {
        returnValue = F("Am Hinterholz");
        break;
    }
    case 19418:
    {
        returnValue = F("Am Hintern Hof");
        break;
    }
    case 19419:
    {
        returnValue = F("Am Hinterrain");
        break;
    }
    case 19420:
    {
        returnValue = F("Am Hinterrasen");
        break;
    }
    case 19421:
    {
        returnValue = F("Am Hinterroth");
        break;
    }
    case 19422:
    {
        returnValue = F("Am Hintersand");
        break;
    }
    case 19423:
    {
        returnValue = F("Am Hintersee");
        break;
    }
    case 19424:
    {
        returnValue = F("Am Hinterteich");
        break;
    }
    case 19425:
    {
        returnValue = F("Am Hintertor");
        break;
    }
    case 19426:
    {
        returnValue = F("Am Hinterwald");
        break;
    }
    case 19427:
    {
        returnValue = F("Am Hinterweglein");
        break;
    }
    case 19428:
    {
        returnValue = F("Am Hintzenböhl");
        break;
    }
    case 19429:
    {
        returnValue = F("Am Hinzenacker");
        break;
    }
    case 19430:
    {
        returnValue = F("Am Hinzenbusch");
        break;
    }
    case 19431:
    {
        returnValue = F("Am Hippersbach");
        break;
    }
    case 19432:
    {
        returnValue = F("Am Hipppfad");
        break;
    }
    case 19433:
    {
        returnValue = F("Am Hirnach");
        break;
    }
    case 19434:
    {
        returnValue = F("Am Hirsch");
        break;
    }
    case 19435:
    {
        returnValue = F("Am Hirschanger");
        break;
    }
    case 19436:
    {
        returnValue = F("Am Hirschbach");
        break;
    }
    case 19437:
    {
        returnValue = F("Am Hirschberg");
        break;
    }
    case 19438:
    {
        returnValue = F("Am Hirschbichl");
        break;
    }
    case 19439:
    {
        returnValue = F("Am Hirschborn");
        break;
    }
    case 19440:
    {
        returnValue = F("Am Hirschbrünnele");
        break;
    }
    case 19441:
    {
        returnValue = F("Am Hirschbusch");
        break;
    }
    case 19442:
    {
        returnValue = F("Am Hirschbühl");
        break;
    }
    case 19443:
    {
        returnValue = F("Am Hirschelheck");
        break;
    }
    case 19444:
    {
        returnValue = F("Am Hirschen");
        break;
    }
    case 19445:
    {
        returnValue = F("Am Hirschenacker");
        break;
    }
    case 19446:
    {
        returnValue = F("Am Hirschenbuck");
        break;
    }
    case 19447:
    {
        returnValue = F("Am Hirschenhübel");
        break;
    }
    case 19448:
    {
        returnValue = F("Am Hirschfeld");
        break;
    }
    case 19449:
    {
        returnValue = F("Am Hirschgarten");
        break;
    }
    case 19450:
    {
        returnValue = F("Am Hirschgraben");
        break;
    }
    case 19451:
    {
        returnValue = F("Am Hirschgrund");
        break;
    }
    case 19452:
    {
        returnValue = F("Am Hirschhorn");
        break;
    }
    case 19453:
    {
        returnValue = F("Am Hirschhügel");
        break;
    }
    case 19454:
    {
        returnValue = F("Am Hirschkamp");
        break;
    }
    case 19455:
    {
        returnValue = F("Am Hirschkeller");
        break;
    }
    case 19456:
    {
        returnValue = F("Am Hirschknock");
        break;
    }
    case 19457:
    {
        returnValue = F("Am Hirschling");
        break;
    }
    case 19458:
    {
        returnValue = F("Am Hirschpark");
        break;
    }
    case 19459:
    {
        returnValue = F("Am Hirschplatz");
        break;
    }
    case 19460:
    {
        returnValue = F("Am Hirschsprung");
        break;
    }
    case 19461:
    {
        returnValue = F("Am Hirschsteig");
        break;
    }
    case 19462:
    {
        returnValue = F("Am Hirschstein");
        break;
    }
    case 19463:
    {
        returnValue = F("Am Hirschwald");
        break;
    }
    case 19464:
    {
        returnValue = F("Am Hirschwang");
        break;
    }
    case 19465:
    {
        returnValue = F("Am Hirschwechsel");
        break;
    }
    case 19466:
    {
        returnValue = F("Am Hirschweg");
        break;
    }
    case 19467:
    {
        returnValue = F("Am Hirschwinkel");
        break;
    }
    case 19468:
    {
        returnValue = F("Am Hirstekamp");
        break;
    }
    case 19469:
    {
        returnValue = F("Am Hirtacker");
        break;
    }
    case 19470:
    {
        returnValue = F("Am Hirtberg");
        break;
    }
    case 19471:
    {
        returnValue = F("Am Hirtenacker");
        break;
    }
    case 19472:
    {
        returnValue = F("Am Hirtenanger");
        break;
    }
    case 19473:
    {
        returnValue = F("Am Hirtenbach");
        break;
    }
    case 19474:
    {
        returnValue = F("Am Hirtenberg");
        break;
    }
    case 19475:
    {
        returnValue = F("Am Hirtenborn");
        break;
    }
    case 19476:
    {
        returnValue = F("Am Hirtenbrunnen");
        break;
    }
    case 19477:
    {
        returnValue = F("Am Hirtenbuck");
        break;
    }
    case 19478:
    {
        returnValue = F("Am Hirtenbuckel");
        break;
    }
    case 19479:
    {
        returnValue = F("Am Hirtenbühl");
        break;
    }
    case 19480:
    {
        returnValue = F("Am Hirtenfeld");
        break;
    }
    case 19481:
    {
        returnValue = F("Am Hirtengarten");
        break;
    }
    case 19482:
    {
        returnValue = F("Am Hirtengraben");
        break;
    }
    case 19483:
    {
        returnValue = F("Am Hirtengärtle");
        break;
    }
    case 19484:
    {
        returnValue = F("Am Hirtenhain");
        break;
    }
    case 19485:
    {
        returnValue = F("Am Hirtenhaus");
        break;
    }
    case 19486:
    {
        returnValue = F("Am Hirtenhausberg");
        break;
    }
    case 19487:
    {
        returnValue = F("Am Hirtenholz");
        break;
    }
    case 19488:
    {
        returnValue = F("Am Hirtenhäusle");
        break;
    }
    case 19489:
    {
        returnValue = F("Am Hirtenhügel");
        break;
    }
    case 19490:
    {
        returnValue = F("Am Hirtenpfad");
        break;
    }
    case 19491:
    {
        returnValue = F("Am Hirtenplatz");
        break;
    }
    case 19492:
    {
        returnValue = F("Am Hirtenrain");
        break;
    }
    case 19493:
    {
        returnValue = F("Am Hirtenrech");
        break;
    }
    case 19494:
    {
        returnValue = F("Am Hirtenschild");
        break;
    }
    case 19495:
    {
        returnValue = F("Am Hirtenstieg");
        break;
    }
    case 19496:
    {
        returnValue = F("Am Hirtenteich");
        break;
    }
    case 19497:
    {
        returnValue = F("Am Hirtentor");
        break;
    }
    case 19498:
    {
        returnValue = F("Am Hirtenturm");
        break;
    }
    case 19499:
    {
        returnValue = F("Am Hirtenweg");
        break;
    }
    case 19500:
    {
        returnValue = F("Am Hirtenäckerle");
        break;
    }
    case 19501:
    {
        returnValue = F("Am Hirtgarten");
        break;
    }
    case 19502:
    {
        returnValue = F("Am Hirthaus");
        break;
    }
    case 19503:
    {
        returnValue = F("Am Hirtsberg");
        break;
    }
    case 19504:
    {
        returnValue = F("Am Hirtsgarten");
        break;
    }
    case 19505:
    {
        returnValue = F("Am Hirtsgraben");
        break;
    }
    case 19506:
    {
        returnValue = F("Am Hirtsrain");
        break;
    }
    case 19507:
    {
        returnValue = F("Am Hirzacker");
        break;
    }
    case 19508:
    {
        returnValue = F("Am Hirzbach");
        break;
    }
    case 19509:
    {
        returnValue = F("Am Hirzberg");
        break;
    }
    case 19510:
    {
        returnValue = F("Am Hirzberg-Bungalow");
        break;
    }
    case 19511:
    {
        returnValue = F("Am Hirzenberg");
        break;
    }
    case 19512:
    {
        returnValue = F("Am Hirzenkopf");
        break;
    }
    case 19513:
    {
        returnValue = F("Am Hirzrain");
        break;
    }
    case 19514:
    {
        returnValue = F("Am Hirzstein");
        break;
    }
    case 19515:
    {
        returnValue = F("Am Hirztriesch");
        break;
    }
    case 19516:
    {
        returnValue = F("Am Hischberg");
        break;
    }
    case 19517:
    {
        returnValue = F("Am Hisgen");
        break;
    }
    case 19518:
    {
        returnValue = F("Am Hisselsberg");
        break;
    }
    case 19519:
    {
        returnValue = F("Am Hissenberg");
        break;
    }
    case 19520:
    {
        returnValue = F("Am Hisserchen");
        break;
    }
    case 19521:
    {
        returnValue = F("Am Hisskamp");
        break;
    }
    case 19522:
    {
        returnValue = F("Am Hittel");
        break;
    }
    case 19523:
    {
        returnValue = F("Am Hittenufer");
        break;
    }
    case 19524:
    {
        returnValue = F("Am Hitzeberg");
        break;
    }
    case 19525:
    {
        returnValue = F("Am Hitzenhof");
        break;
    }
    case 19526:
    {
        returnValue = F("Am Hitzigenrot");
        break;
    }
    case 19527:
    {
        returnValue = F("Am Hitzpfad");
        break;
    }
    case 19528:
    {
        returnValue = F("Am Hixterwald");
        break;
    }
    case 19529:
    {
        returnValue = F("Am Hißholz");
        break;
    }
    case 19530:
    {
        returnValue = F("Am Hobborn");
        break;
    }
    case 19531:
    {
        returnValue = F("Am Hobelbach");
        break;
    }
    case 19532:
    {
        returnValue = F("Am Hoben");
        break;
    }
    case 19533:
    {
        returnValue = F("Am Hoch");
        break;
    }
    case 19534:
    {
        returnValue = F("Am Hochacker");
        break;
    }
    case 19535:
    {
        returnValue = F("Am Hochanger");
        break;
    }
    case 19536:
    {
        returnValue = F("Am Hochbaum");
        break;
    }
    case 19537:
    {
        returnValue = F("Am Hochbehälter");
        break;
    }
    case 19538:
    {
        returnValue = F("Am Hochberg");
        break;
    }
    case 19539:
    {
        returnValue = F("Am Hochbichl");
        break;
    }
    case 19540:
    {
        returnValue = F("Am Hochbord");
        break;
    }
    case 19541:
    {
        returnValue = F("Am Hochbrunnen");
        break;
    }
    case 19542:
    {
        returnValue = F("Am Hoche");
        break;
    }
    case 19543:
    {
        returnValue = F("Am Hochfeld");
        break;
    }
    case 19544:
    {
        returnValue = F("Am Hochfürst");
        break;
    }
    case 19545:
    {
        returnValue = F("Am Hochgarten");
        break;
    }
    case 19546:
    {
        returnValue = F("Am Hochgericht");
        break;
    }
    case 19547:
    {
        returnValue = F("Am Hochgerichtswald");
        break;
    }
    case 19548:
    {
        returnValue = F("Am Hochgestade");
        break;
    }
    case 19549:
    {
        returnValue = F("Am Hochgraben");
        break;
    }
    case 19550:
    {
        returnValue = F("Am Hochhaus");
        break;
    }
    case 19551:
    {
        returnValue = F("Am Hochheim");
        break;
    }
    case 19552:
    {
        returnValue = F("Am Hochholz");
        break;
    }
    case 19553:
    {
        returnValue = F("Am Hochholzergraben");
        break;
    }
    case 19554:
    {
        returnValue = F("Am Hochkamp");
        break;
    }
    case 19555:
    {
        returnValue = F("Am Hochkreuz");
        break;
    }
    case 19556:
    {
        returnValue = F("Am Hochmoor");
        break;
    }
    case 19557:
    {
        returnValue = F("Am Hochofen");
        break;
    }
    case 19558:
    {
        returnValue = F("Am Hochpegel");
        break;
    }
    case 19559:
    {
        returnValue = F("Am Hochrain");
        break;
    }
    case 19560:
    {
        returnValue = F("Am Hochried");
        break;
    }
    case 19561:
    {
        returnValue = F("Am Hochriß");
        break;
    }
    case 19562:
    {
        returnValue = F("Am Hochschuldorf");
        break;
    }
    case 19563:
    {
        returnValue = F("Am Hochsiek");
        break;
    }
    case 19564:
    {
        returnValue = F("Am Hochsitz");
        break;
    }
    case 19565:
    {
        returnValue = F("Am Hochstaad");
        break;
    }
    case 19566:
    {
        returnValue = F("Am Hochstadel");
        break;
    }
    case 19567:
    {
        returnValue = F("Am Hochstand");
        break;
    }
    case 19568:
    {
        returnValue = F("Am Hochstedter Bach");
        break;
    }
    case 19569:
    {
        returnValue = F("Am Hochsteg");
        break;
    }
    case 19570:
    {
        returnValue = F("Am Hochsteige");
        break;
    }
    case 19571:
    {
        returnValue = F("Am Hochstein");
        break;
    }
    case 19572:
    {
        returnValue = F("Am Hochstock");
        break;
    }
    case 19573:
    {
        returnValue = F("Am Hochstädter Rain");
        break;
    }
    case 19574:
    {
        returnValue = F("Am Hocht");
        break;
    }
    case 19575:
    {
        returnValue = F("Am Hochtal");
        break;
    }
    case 19576:
    {
        returnValue = F("Am Hochufer");
        break;
    }
    case 19577:
    {
        returnValue = F("Am Hochwald");
        break;
    }
    case 19578:
    {
        returnValue = F("Am Hochwasen");
        break;
    }
    case 19579:
    {
        returnValue = F("Am Hochwasserdamm");
        break;
    }
    case 19580:
    {
        returnValue = F("Am Hochweg");
        break;
    }
    case 19581:
    {
        returnValue = F("Am Hochzeitshain");
        break;
    }
    case 19582:
    {
        returnValue = F("Am Hochzeitshaus");
        break;
    }
    case 19583:
    {
        returnValue = F("Am Hochzeitswald");
        break;
    }
    case 19584:
    {
        returnValue = F("Am Hock");
        break;
    }
    case 19585:
    {
        returnValue = F("Am Hockenberg");
        break;
    }
    case 19586:
    {
        returnValue = F("Am Hockenborn");
        break;
    }
    case 19587:
    {
        returnValue = F("Am Hockenbuck");
        break;
    }
    case 19588:
    {
        returnValue = F("Am Hockenbusch");
        break;
    }
    case 19589:
    {
        returnValue = F("Am Hockenloch");
        break;
    }
    case 19590:
    {
        returnValue = F("Am Hockeyplatz");
        break;
    }
    case 19591:
    {
        returnValue = F("Am Hocksfels");
        break;
    }
    case 19592:
    {
        returnValue = F("Am Hodbach");
        break;
    }
    case 19593:
    {
        returnValue = F("Am Hodelder");
        break;
    }
    case 19594:
    {
        returnValue = F("Am Hoeg");
        break;
    }
    case 19595:
    {
        returnValue = F("Am Hoelchen");
        break;
    }
    case 19596:
    {
        returnValue = F("Am Hoerenbroich");
        break;
    }
    case 19597:
    {
        returnValue = F("Am Hoesberg");
        break;
    }
    case 19598:
    {
        returnValue = F("Am Hof");
        break;
    }
    case 19599:
    {
        returnValue = F("Am Hof Johannstorf");
        break;
    }
    case 19600:
    {
        returnValue = F("Am Hof Kisker");
        break;
    }
    case 19601:
    {
        returnValue = F("Am Hof Koch");
        break;
    }
    case 19602:
    {
        returnValue = F("Am Hof Möllenpage");
        break;
    }
    case 19603:
    {
        returnValue = F("Am Hof Sander");
        break;
    }
    case 19604:
    {
        returnValue = F("Am Hof Stubben");
        break;
    }
    case 19605:
    {
        returnValue = F("Am Hof Urlage");
        break;
    }
    case 19606:
    {
        returnValue = F("Am Hof Westmeyer");
        break;
    }
    case 19607:
    {
        returnValue = F("Am Hofacker");
        break;
    }
    case 19608:
    {
        returnValue = F("Am Hofanger");
        break;
    }
    case 19609:
    {
        returnValue = F("Am Hofbach");
        break;
    }
    case 19610:
    {
        returnValue = F("Am Hofbau");
        break;
    }
    case 19611:
    {
        returnValue = F("Am Hofbauernfeld");
        break;
    }
    case 19612:
    {
        returnValue = F("Am Hofberg");
        break;
    }
    case 19613:
    {
        returnValue = F("Am Hofborn");
        break;
    }
    case 19614:
    {
        returnValue = F("Am Hofbrunnen");
        break;
    }
    case 19615:
    {
        returnValue = F("Am Hofbuchet");
        break;
    }
    case 19616:
    {
        returnValue = F("Am Hofbuck");
        break;
    }
    case 19617:
    {
        returnValue = F("Am Hofbusch");
        break;
    }
    case 19618:
    {
        returnValue = F("Am Hofböhl");
        break;
    }
    case 19619:
    {
        returnValue = F("Am Hofbühl");
        break;
    }
    case 19620:
    {
        returnValue = F("Am Hofe");
        break;
    }
    case 19621:
    {
        returnValue = F("Am Hofeberg");
        break;
    }
    case 19622:
    {
        returnValue = F("Am Hofebusch");
        break;
    }
    case 19623:
    {
        returnValue = F("Am Hofefeld");
        break;
    }
    case 19624:
    {
        returnValue = F("Am Hofegarten");
        break;
    }
    case 19625:
    {
        returnValue = F("Am Hofegrund");
        break;
    }
    case 19626:
    {
        returnValue = F("Am Hofende");
        break;
    }
    case 19627:
    {
        returnValue = F("Am Hofener Wäldle");
        break;
    }
    case 19628:
    {
        returnValue = F("Am Hofeteich");
        break;
    }
    case 19629:
    {
        returnValue = F("Am Hoff");
        break;
    }
    case 19630:
    {
        returnValue = F("Am Hoffacker");
        break;
    }
    case 19631:
    {
        returnValue = F("Am Hoffeld");
        break;
    }
    case 19632:
    {
        returnValue = F("Am Hoffeldsgraben");
        break;
    }
    case 19633:
    {
        returnValue = F("Am Hoffenbach");
        break;
    }
    case 19634:
    {
        returnValue = F("Am Hoffkühl");
        break;
    }
    case 19635:
    {
        returnValue = F("Am Hofgarten");
        break;
    }
    case 19636:
    {
        returnValue = F("Am Hofgraben");
        break;
    }
    case 19637:
    {
        returnValue = F("Am Hofgrund");
        break;
    }
    case 19638:
    {
        returnValue = F("Am Hofgut");
        break;
    }
    case 19639:
    {
        returnValue = F("Am Hofhaus");
        break;
    }
    case 19640:
    {
        returnValue = F("Am Hofkamp");
        break;
    }
    case 19641:
    {
        returnValue = F("Am Hofmannsgarten");
        break;
    }
    case 19642:
    {
        returnValue = F("Am Hofpesch");
        break;
    }
    case 19643:
    {
        returnValue = F("Am Hofplatz");
        break;
    }
    case 19644:
    {
        returnValue = F("Am Hofrain");
        break;
    }
    case 19645:
    {
        returnValue = F("Am Hofrasen");
        break;
    }
    case 19646:
    {
        returnValue = F("Am Hofriethsgarten");
        break;
    }
    case 19647:
    {
        returnValue = F("Am Hofschulzenberg");
        break;
    }
    case 19648:
    {
        returnValue = F("Am Hofsee");
        break;
    }
    case 19649:
    {
        returnValue = F("Am Hofsrech");
        break;
    }
    case 19650:
    {
        returnValue = F("Am Hofstatt");
        break;
    }
    case 19651:
    {
        returnValue = F("Am Hofsteg");
        break;
    }
    case 19652:
    {
        returnValue = F("Am Hofstädter Moor");
        break;
    }
    case 19653:
    {
        returnValue = F("Am Hofstättle");
        break;
    }
    case 19654:
    {
        returnValue = F("Am Hofstück");
        break;
    }
    case 19655:
    {
        returnValue = F("Am Hofteich");
        break;
    }
    case 19656:
    {
        returnValue = F("Am Hofwall");
        break;
    }
    case 19657:
    {
        returnValue = F("Am Hofweg");
        break;
    }
    case 19658:
    {
        returnValue = F("Am Hofweiher");
        break;
    }
    case 19659:
    {
        returnValue = F("Am Hofwiesbach");
        break;
    }
    case 19660:
    {
        returnValue = F("Am Hofzell");
        break;
    }
    case 19661:
    {
        returnValue = F("Am Hogen Esch");
        break;
    }
    case 19662:
    {
        returnValue = F("Am Hogen Hagen");
        break;
    }
    case 19663:
    {
        returnValue = F("Am Hogenberg");
        break;
    }
    case 19664:
    {
        returnValue = F("Am Hogenesch");
        break;
    }
    case 19665:
    {
        returnValue = F("Am Hogenkamp");
        break;
    }
    case 19666:
    {
        returnValue = F("Am Hoggeweiher");
        break;
    }
    case 19667:
    {
        returnValue = F("Am Hohacker");
        break;
    }
    case 19668:
    {
        returnValue = F("Am Hohbach");
        break;
    }
    case 19669:
    {
        returnValue = F("Am Hohberg");
        break;
    }
    case 19670:
    {
        returnValue = F("Am Hohbrunnen");
        break;
    }
    case 19671:
    {
        returnValue = F("Am Hohbuck");
        break;
    }
    case 19672:
    {
        returnValue = F("Am Hohbühl");
        break;
    }
    case 19673:
    {
        returnValue = F("Am Hohejohlster Busch");
        break;
    }
    case 19674:
    {
        returnValue = F("Am Hohen Anger");
        break;
    }
    case 19675:
    {
        returnValue = F("Am Hohen Baum");
        break;
    }
    case 19676:
    {
        returnValue = F("Am Hohen Berg");
        break;
    }
    case 19677:
    {
        returnValue = F("Am Hohen Bild");
        break;
    }
    case 19678:
    {
        returnValue = F("Am Hohen Bogen");
        break;
    }
    case 19679:
    {
        returnValue = F("Am Hohen Brink");
        break;
    }
    case 19680:
    {
        returnValue = F("Am Hohen Bruch");
        break;
    }
    case 19681:
    {
        returnValue = F("Am Hohen Busch");
        break;
    }
    case 19682:
    {
        returnValue = F("Am Hohen Deich");
        break;
    }
    case 19683:
    {
        returnValue = F("Am Hohen Ende");
        break;
    }
    case 19684:
    {
        returnValue = F("Am Hohen Esch");
        break;
    }
    case 19685:
    {
        returnValue = F("Am Hohen Feld");
        break;
    }
    case 19686:
    {
        returnValue = F("Am Hohen Felde");
        break;
    }
    case 19687:
    {
        returnValue = F("Am Hohen Felsen");
        break;
    }
    case 19688:
    {
        returnValue = F("Am Hohen Forst");
        break;
    }
    case 19689:
    {
        returnValue = F("Am Hohen Garten");
        break;
    }
    case 19690:
    {
        returnValue = F("Am Hohen Gericht");
        break;
    }
    case 19691:
    {
        returnValue = F("Am Hohen Graben");
        break;
    }
    case 19692:
    {
        returnValue = F("Am Hohen Gstad");
        break;
    }
    case 19693:
    {
        returnValue = F("Am Hohen Hagen");
        break;
    }
    case 19694:
    {
        returnValue = F("Am Hohen Hain");
        break;
    }
    case 19695:
    {
        returnValue = F("Am Hohen Haus");
        break;
    }
    case 19696:
    {
        returnValue = F("Am Hohen Hof");
        break;
    }
    case 19697:
    {
        returnValue = F("Am Hohen Holze");
        break;
    }
    case 19698:
    {
        returnValue = F("Am Hohen Hügel");
        break;
    }
    case 19699:
    {
        returnValue = F("Am Hohen Kamp");
        break;
    }
    case 19700:
    {
        returnValue = F("Am Hohen Kreuz");
        break;
    }
    case 19701:
    {
        returnValue = F("Am Hohen Loh");
        break;
    }
    case 19702:
    {
        returnValue = F("Am Hohen Malberg");
        break;
    }
    case 19703:
    {
        returnValue = F("Am Hohen Most");
        break;
    }
    case 19704:
    {
        returnValue = F("Am Hohen Ofen");
        break;
    }
    case 19705:
    {
        returnValue = F("Am Hohen Pfad");
        break;
    }
    case 19706:
    {
        returnValue = F("Am Hohen Rad");
        break;
    }
    case 19707:
    {
        returnValue = F("Am Hohen Rain");
        break;
    }
    case 19708:
    {
        returnValue = F("Am Hohen Rand");
        break;
    }
    case 19709:
    {
        returnValue = F("Am Hohen Ranken");
        break;
    }
    case 19710:
    {
        returnValue = F("Am Hohen Rhein");
        break;
    }
    case 19711:
    {
        returnValue = F("Am Hohen Rott");
        break;
    }
    case 19712:
    {
        returnValue = F("Am Hohen Sand");
        break;
    }
    case 19713:
    {
        returnValue = F("Am Hohen Schuß");
        break;
    }
    case 19714:
    {
        returnValue = F("Am Hohen Steig");
        break;
    }
    case 19715:
    {
        returnValue = F("Am Hohen Stein");
        break;
    }
    case 19716:
    {
        returnValue = F("Am Hohen Tor");
        break;
    }
    case 19717:
    {
        returnValue = F("Am Hohen Turm");
        break;
    }
    case 19718:
    {
        returnValue = F("Am Hohen Ufer");
        break;
    }
    case 19719:
    {
        returnValue = F("Am Hohen Wald");
        break;
    }
    case 19720:
    {
        returnValue = F("Am Hohen Weg");
        break;
    }
    case 19721:
    {
        returnValue = F("Am Hohen Wege");
        break;
    }
    case 19722:
    {
        returnValue = F("Am Hohen Zorn");
        break;
    }
    case 19723:
    {
        returnValue = F("Am Hohenberg");
        break;
    }
    case 19724:
    {
        returnValue = F("Am Hohenbogen");
        break;
    }
    case 19725:
    {
        returnValue = F("Am Hohenbuchen");
        break;
    }
    case 19726:
    {
        returnValue = F("Am Hohenbühl");
        break;
    }
    case 19727:
    {
        returnValue = F("Am Hohendodeleber Weg");
        break;
    }
    case 19728:
    {
        returnValue = F("Am Hohendorn");
        break;
    }
    case 19729:
    {
        returnValue = F("Am Hoheneck");
        break;
    }
    case 19730:
    {
        returnValue = F("Am Hohenfelsen");
        break;
    }
    case 19731:
    {
        returnValue = F("Am Hohenhainsgarten");
        break;
    }
    case 19732:
    {
        returnValue = F("Am Hohenkamp");
        break;
    }
    case 19733:
    {
        returnValue = F("Am Hohenlohe");
        break;
    }
    case 19734:
    {
        returnValue = F("Am Hohenmoor");
        break;
    }
    case 19735:
    {
        returnValue = F("Am Hohennauener See");
        break;
    }
    case 19736:
    {
        returnValue = F("Am Hohenrade");
        break;
    }
    case 19737:
    {
        returnValue = F("Am Hohenrain");
        break;
    }
    case 19738:
    {
        returnValue = F("Am Hohenrech");
        break;
    }
    case 19739:
    {
        returnValue = F("Am Hohenreisach");
        break;
    }
    case 19740:
    {
        returnValue = F("Am Hohenrod");
        break;
    }
    case 19741:
    {
        returnValue = F("Am Hohenroth");
        break;
    }
    case 19742:
    {
        returnValue = F("Am Hohensand");
        break;
    }
    case 19743:
    {
        returnValue = F("Am Hohenschlag");
        break;
    }
    case 19744:
    {
        returnValue = F("Am Hohenstein");
        break;
    }
    case 19745:
    {
        returnValue = F("Am Hohenwedel");
        break;
    }
    case 19746:
    {
        returnValue = F("Am Hohenweg");
        break;
    }
    case 19747:
    {
        returnValue = F("Am Hohenwiesenweg");
        break;
    }
    case 19748:
    {
        returnValue = F("Am Hohfeld");
        break;
    }
    case 19749:
    {
        returnValue = F("Am Hohlach");
        break;
    }
    case 19750:
    {
        returnValue = F("Am Hohlberg");
        break;
    }
    case 19751:
    {
        returnValue = F("Am Hohlborn");
        break;
    }
    case 19752:
    {
        returnValue = F("Am Hohlbusch");
        break;
    }
    case 19753:
    {
        returnValue = F("Am Hohlbügelsteig");
        break;
    }
    case 19754:
    {
        returnValue = F("Am Hohlebaum");
        break;
    }
    case 19755:
    {
        returnValue = F("Am Hohleberg");
        break;
    }
    case 19756:
    {
        returnValue = F("Am Hohlegraben");
        break;
    }
    case 19757:
    {
        returnValue = F("Am Hohlen Fels");
        break;
    }
    case 19758:
    {
        returnValue = F("Am Hohlen Graben");
        break;
    }
    case 19759:
    {
        returnValue = F("Am Hohlen Stein");
        break;
    }
    case 19760:
    {
        returnValue = F("Am Hohlen Weg");
        break;
    }
    case 19761:
    {
        returnValue = F("Am Hohlen Wege");
        break;
    }
    case 19762:
    {
        returnValue = F("Am Hohlenbach");
        break;
    }
    case 19763:
    {
        returnValue = F("Am Hohlenborn");
        break;
    }
    case 19764:
    {
        returnValue = F("Am Hohlenweg");
        break;
    }
    case 19765:
    {
        returnValue = F("Am Hohleplatz");
        break;
    }
    case 19766:
    {
        returnValue = F("Am Hohler");
        break;
    }
    case 19767:
    {
        returnValue = F("Am Hohlgraben");
        break;
    }
    case 19768:
    {
        returnValue = F("Am Hohlrain");
        break;
    }
    case 19769:
    {
        returnValue = F("Am Hohlstedter Weg");
        break;
    }
    case 19770:
    {
        returnValue = F("Am Hohlweg");
        break;
    }
    case 19771:
    {
        returnValue = F("Am Hohmeyer");
        break;
    }
    case 19772:
    {
        returnValue = F("Am Hohn");
        break;
    }
    case 19773:
    {
        returnValue = F("Am Hohnberg");
        break;
    }
    case 19774:
    {
        returnValue = F("Am Hohnekirchhof");
        break;
    }
    case 19775:
    {
        returnValue = F("Am Hohner Hof");
        break;
    }
    case 19776:
    {
        returnValue = F("Am Hohnersberg");
        break;
    }
    case 19777:
    {
        returnValue = F("Am Hohnert");
        break;
    }
    case 19778:
    {
        returnValue = F("Am Hohnholz");
        break;
    }
    case 19779:
    {
        returnValue = F("Am Hohnshäuschen");
        break;
    }
    case 19780:
    {
        returnValue = F("Am Hohrain");
        break;
    }
    case 19781:
    {
        returnValue = F("Am Hohrech");
        break;
    }
    case 19782:
    {
        returnValue = F("Am Hohrkamp");
        break;
    }
    case 19783:
    {
        returnValue = F("Am Hohscheid");
        break;
    }
    case 19784:
    {
        returnValue = F("Am Hohstatt");
        break;
    }
    case 19785:
    {
        returnValue = F("Am Hohstetter");
        break;
    }
    case 19786:
    {
        returnValue = F("Am Hohwald");
        break;
    }
    case 19787:
    {
        returnValue = F("Am Hohweg");
        break;
    }
    case 19788:
    {
        returnValue = F("Am Hohwiel");
        break;
    }
    case 19789:
    {
        returnValue = F("Am Hohwinkel");
        break;
    }
    case 19790:
    {
        returnValue = F("Am Holderbach");
        break;
    }
    case 19791:
    {
        returnValue = F("Am Holderberg");
        break;
    }
    case 19792:
    {
        returnValue = F("Am Holderbuck");
        break;
    }
    case 19793:
    {
        returnValue = F("Am Holderbusch");
        break;
    }
    case 19794:
    {
        returnValue = F("Am Holderbühl");
        break;
    }
    case 19795:
    {
        returnValue = F("Am Holdersberg");
        break;
    }
    case 19796:
    {
        returnValue = F("Am Holderstein");
        break;
    }
    case 19797:
    {
        returnValue = F("Am Holderstock");
        break;
    }
    case 19798:
    {
        returnValue = F("Am Holderstrauch");
        break;
    }
    case 19799:
    {
        returnValue = F("Am Holderstäudle");
        break;
    }
    case 19800:
    {
        returnValue = F("Am Holdorf");
        break;
    }
    case 19801:
    {
        returnValue = F("Am Holing");
        break;
    }
    case 19802:
    {
        returnValue = F("Am Holl");
        break;
    }
    case 19803:
    {
        returnValue = F("Am Hollager Berg");
        break;
    }
    case 19804:
    {
        returnValue = F("Am Holland");
        break;
    }
    case 19805:
    {
        returnValue = F("Am Hollbrock");
        break;
    }
    case 19806:
    {
        returnValue = F("Am Hollbusch");
        break;
    }
    case 19807:
    {
        returnValue = F("Am Holldorn");
        break;
    }
    case 19808:
    {
        returnValue = F("Am Hollemann");
        break;
    }
    case 19809:
    {
        returnValue = F("Am Hollen");
        break;
    }
    case 19810:
    {
        returnValue = F("Am Hollenberg");
        break;
    }
    case 19811:
    {
        returnValue = F("Am Hollengraben");
        break;
    }
    case 19812:
    {
        returnValue = F("Am Hollenkamp");
        break;
    }
    case 19813:
    {
        returnValue = F("Am Hollenloch");
        break;
    }
    case 19814:
    {
        returnValue = F("Am Hollensiek");
        break;
    }
    case 19815:
    {
        returnValue = F("Am Holler");
        break;
    }
    case 19816:
    {
        returnValue = F("Am Holleracker");
        break;
    }
    case 19817:
    {
        returnValue = F("Am Hollerbach");
        break;
    }
    case 19818:
    {
        returnValue = F("Am Hollerberg");
        break;
    }
    case 19819:
    {
        returnValue = F("Am Hollerborn");
        break;
    }
    case 19820:
    {
        returnValue = F("Am Hollerbroch");
        break;
    }
    case 19821:
    {
        returnValue = F("Am Hollerbrunn");
        break;
    }
    case 19822:
    {
        returnValue = F("Am Hollerbrunnen");
        break;
    }
    case 19823:
    {
        returnValue = F("Am Hollerbusch");
        break;
    }
    case 19824:
    {
        returnValue = F("Am Hollerbusk");
        break;
    }
    case 19825:
    {
        returnValue = F("Am Hollerfeld");
        break;
    }
    case 19826:
    {
        returnValue = F("Am Hollergraben");
        break;
    }
    case 19827:
    {
        returnValue = F("Am Hollergrund");
        break;
    }
    case 19828:
    {
        returnValue = F("Am Hollermorgen");
        break;
    }
    case 19829:
    {
        returnValue = F("Am Hollerrain");
        break;
    }
    case 19830:
    {
        returnValue = F("Am Hollersbach");
        break;
    }
    case 19831:
    {
        returnValue = F("Am Hollersgarten");
        break;
    }
    case 19832:
    {
        returnValue = F("Am Hollerstock");
        break;
    }
    case 19833:
    {
        returnValue = F("Am Hollerstrauch");
        break;
    }
    case 19834:
    {
        returnValue = F("Am Hollerstück");
        break;
    }
    case 19835:
    {
        returnValue = F("Am Hollerweiher");
        break;
    }
    case 19836:
    {
        returnValue = F("Am Hollgraben");
        break;
    }
    case 19837:
    {
        returnValue = F("Am Hollhorn");
        break;
    }
    case 19838:
    {
        returnValue = F("Am Holligraben");
        break;
    }
    case 19839:
    {
        returnValue = F("Am Holling");
        break;
    }
    case 19840:
    {
        returnValue = F("Am Hollm");
        break;
    }
    case 19841:
    {
        returnValue = F("Am Hollmoor");
        break;
    }
    case 19842:
    {
        returnValue = F("Am Hollmuthhang");
        break;
    }
    case 19843:
    {
        returnValue = F("Am Holln");
        break;
    }
    case 19844:
    {
        returnValue = F("Am Hollsand");
        break;
    }
    case 19845:
    {
        returnValue = F("Am Hollschen Bruch");
        break;
    }
    case 19846:
    {
        returnValue = F("Am Hollstein");
        break;
    }
    case 19847:
    {
        returnValue = F("Am Holländer");
        break;
    }
    case 19848:
    {
        returnValue = F("Am Holländer See");
        break;
    }
    case 19849:
    {
        returnValue = F("Am Holländerberg");
        break;
    }
    case 19850:
    {
        returnValue = F("Am Holländersteig");
        break;
    }
    case 19851:
    {
        returnValue = F("Am Holm");
        break;
    }
    case 19852:
    {
        returnValue = F("Am Holmbach");
        break;
    }
    case 19853:
    {
        returnValue = F("Am Holscheidsberg");
        break;
    }
    case 19854:
    {
        returnValue = F("Am Holstentor");
        break;
    }
    case 19855:
    {
        returnValue = F("Am Holsterberg");
        break;
    }
    case 19856:
    {
        returnValue = F("Am Holt");
        break;
    }
    case 19857:
    {
        returnValue = F("Am Holtacker");
        break;
    }
    case 19858:
    {
        returnValue = F("Am Holtappel");
        break;
    }
    case 19859:
    {
        returnValue = F("Am Holtberg");
        break;
    }
    case 19860:
    {
        returnValue = F("Am Holte");
        break;
    }
    case 19861:
    {
        returnValue = F("Am Holtebach");
        break;
    }
    case 19862:
    {
        returnValue = F("Am Holterhöfchen");
        break;
    }
    case 19863:
    {
        returnValue = F("Am Holtkamp");
        break;
    }
    case 19864:
    {
        returnValue = F("Am Holtkebach");
        break;
    }
    case 19865:
    {
        returnValue = F("Am Holtmannsgarten");
        break;
    }
    case 19866:
    {
        returnValue = F("Am Holtsaut");
        break;
    }
    case 19867:
    {
        returnValue = F("Am Holtumer Moor");
        break;
    }
    case 19868:
    {
        returnValue = F("Am Holtumer Schulhof");
        break;
    }
    case 19869:
    {
        returnValue = F("Am Holtwicker Bach");
        break;
    }
    case 19870:
    {
        returnValue = F("Am Holtwicker Ei");
        break;
    }
    case 19871:
    {
        returnValue = F("Am Holtwischdamm");
        break;
    }
    case 19872:
    {
        returnValue = F("Am Holunder");
        break;
    }
    case 19873:
    {
        returnValue = F("Am Holunderbusch");
        break;
    }
    case 19874:
    {
        returnValue = F("Am Holunderhang");
        break;
    }
    case 19875:
    {
        returnValue = F("Am Holunderrain");
        break;
    }
    case 19876:
    {
        returnValue = F("Am Holunderstrauch");
        break;
    }
    case 19877:
    {
        returnValue = F("Am Holunderweg");
        break;
    }
    case 19878:
    {
        returnValue = F("Am Holungsbügel");
        break;
    }
    case 19879:
    {
        returnValue = F("Am Holz");
        break;
    }
    case 19880:
    {
        returnValue = F("Am Holzacker");
        break;
    }
    case 19881:
    {
        returnValue = F("Am Holzanger");
        break;
    }
    case 19882:
    {
        returnValue = F("Am Holzapfel");
        break;
    }
    case 19883:
    {
        returnValue = F("Am Holzapfelbaum");
        break;
    }
    case 19884:
    {
        returnValue = F("Am Holzbach");
        break;
    }
    case 19885:
    {
        returnValue = F("Am Holzbeck");
        break;
    }
    case 19886:
    {
        returnValue = F("Am Holzberg");
        break;
    }
    case 19887:
    {
        returnValue = F("Am Holzbichl");
        break;
    }
    case 19888:
    {
        returnValue = F("Am Holzborn");
        break;
    }
    case 19889:
    {
        returnValue = F("Am Holzbrunn");
        break;
    }
    case 19890:
    {
        returnValue = F("Am Holzbrunnen");
        break;
    }
    case 19891:
    {
        returnValue = F("Am Holzbrückerweg");
        break;
    }
    case 19892:
    {
        returnValue = F("Am Holzbuckel");
        break;
    }
    case 19893:
    {
        returnValue = F("Am Holzbürgel");
        break;
    }
    case 19894:
    {
        returnValue = F("Am Holzbüttger Haus");
        break;
    }
    case 19895:
    {
        returnValue = F("Am Holzdorfer Bahnhof");
        break;
    }
    case 19896:
    {
        returnValue = F("Am Holze");
        break;
    }
    case 19897:
    {
        returnValue = F("Am Holzer Knoten");
        break;
    }
    case 19898:
    {
        returnValue = F("Am Holzer Weg");
        break;
    }
    case 19899:
    {
        returnValue = F("Am Holzfeld");
        break;
    }
    case 19900:
    {
        returnValue = F("Am Holzgarten");
        break;
    }
    case 19901:
    {
        returnValue = F("Am Holzgraben");
        break;
    }
    case 19902:
    {
        returnValue = F("Am Holzgrund");
        break;
    }
    case 19903:
    {
        returnValue = F("Am Holzhafen");
        break;
    }
    case 19904:
    {
        returnValue = F("Am Holzhauser Berg");
        break;
    }
    case 19905:
    {
        returnValue = F("Am Holzhof");
        break;
    }
    case 19906:
    {
        returnValue = F("Am Holzkamp");
        break;
    }
    case 19907:
    {
        returnValue = F("Am Holzlachgraben");
        break;
    }
    case 19908:
    {
        returnValue = F("Am Holzmaierfeld");
        break;
    }
    case 19909:
    {
        returnValue = F("Am Holzner Graben");
        break;
    }
    case 19910:
    {
        returnValue = F("Am Holzplan");
        break;
    }
    case 19911:
    {
        returnValue = F("Am Holzplatz");
        break;
    }
    case 19912:
    {
        returnValue = F("Am Holzpütz");
        break;
    }
    case 19913:
    {
        returnValue = F("Am Holzrain");
        break;
    }
    case 19914:
    {
        returnValue = F("Am Holzscheunenberg");
        break;
    }
    case 19915:
    {
        returnValue = F("Am Holzteich");
        break;
    }
    case 19916:
    {
        returnValue = F("Am Holztor");
        break;
    }
    case 19917:
    {
        returnValue = F("Am Holzvehn");
        break;
    }
    case 19918:
    {
        returnValue = F("Am Holzweg");
        break;
    }
    case 19919:
    {
        returnValue = F("Am Holzwickeder Bach");
        break;
    }
    case 19920:
    {
        returnValue = F("Am Holzzipfel");
        break;
    }
    case 19921:
    {
        returnValue = F("Am Hombach");
        break;
    }
    case 19922:
    {
        returnValue = F("Am Homberg");
        break;
    }
    case 19923:
    {
        returnValue = F("Am Homberge");
        break;
    }
    case 19924:
    {
        returnValue = F("Am Hombiegel");
        break;
    }
    case 19925:
    {
        returnValue = F("Am Hombösch");
        break;
    }
    case 19926:
    {
        returnValue = F("Am Homerich");
        break;
    }
    case 19927:
    {
        returnValue = F("Am Hommelsberg");
        break;
    }
    case 19928:
    {
        returnValue = F("Am Hommelshof");
        break;
    }
    case 19929:
    {
        returnValue = F("Am Hommerich");
        break;
    }
    case 19930:
    {
        returnValue = F("Am Honbach");
        break;
    }
    case 19931:
    {
        returnValue = F("Am Honhauk");
        break;
    }
    case 19932:
    {
        returnValue = F("Am Honigacker");
        break;
    }
    case 19933:
    {
        returnValue = F("Am Honigbach");
        break;
    }
    case 19934:
    {
        returnValue = F("Am Honigbaum");
        break;
    }
    case 19935:
    {
        returnValue = F("Am Honigberg");
        break;
    }
    case 19936:
    {
        returnValue = F("Am Honigbirnbaum");
        break;
    }
    case 19937:
    {
        returnValue = F("Am Honigholz");
        break;
    }
    case 19938:
    {
        returnValue = F("Am Honigshuck");
        break;
    }
    case 19939:
    {
        returnValue = F("Am Honnefer Kreuz");
        break;
    }
    case 19940:
    {
        returnValue = F("Am Honnigsol");
        break;
    }
    case 19941:
    {
        returnValue = F("Am Honsbergpark");
        break;
    }
    case 19942:
    {
        returnValue = F("Am Hoog");
        break;
    }
    case 19943:
    {
        returnValue = F("Am Hooge Weg");
        break;
    }
    case 19944:
    {
        returnValue = F("Am Hoogen Kamp");
        break;
    }
    case 19945:
    {
        returnValue = F("Am Hook");
        break;
    }
    case 19946:
    {
        returnValue = F("Am Hoop");
        break;
    }
    case 19947:
    {
        returnValue = F("Am Hootmannsmeer");
        break;
    }
    case 19948:
    {
        returnValue = F("Am Hoover Diggen");
        break;
    }
    case 19949:
    {
        returnValue = F("Am Hopelser Wald");
        break;
    }
    case 19950:
    {
        returnValue = F("Am Hoper Bahnhof");
        break;
    }
    case 19951:
    {
        returnValue = F("Am Hopfacker");
        break;
    }
    case 19952:
    {
        returnValue = F("Am Hopfberg");
        break;
    }
    case 19953:
    {
        returnValue = F("Am Hopfberge");
        break;
    }
    case 19954:
    {
        returnValue = F("Am Hopfen");
        break;
    }
    case 19955:
    {
        returnValue = F("Am Hopfenacker");
        break;
    }
    case 19956:
    {
        returnValue = F("Am Hopfenbach");
        break;
    }
    case 19957:
    {
        returnValue = F("Am Hopfenberg");
        break;
    }
    case 19958:
    {
        returnValue = F("Am Hopfenberge");
        break;
    }
    case 19959:
    {
        returnValue = F("Am Hopfenbrink");
        break;
    }
    case 19960:
    {
        returnValue = F("Am Hopfenbruch");
        break;
    }
    case 19961:
    {
        returnValue = F("Am Hopfenbühl");
        break;
    }
    case 19962:
    {
        returnValue = F("Am Hopfendamm");
        break;
    }
    case 19963:
    {
        returnValue = F("Am Hopfenfeld");
        break;
    }
    case 19964:
    {
        returnValue = F("Am Hopfengarten");
        break;
    }
    case 19965:
    {
        returnValue = F("Am Hopfenhof");
        break;
    }
    case 19966:
    {
        returnValue = F("Am Hopfenkreuzlein");
        break;
    }
    case 19967:
    {
        returnValue = F("Am Hopfenort");
        break;
    }
    case 19968:
    {
        returnValue = F("Am Hopfenrain");
        break;
    }
    case 19969:
    {
        returnValue = F("Am Hopfenranken");
        break;
    }
    case 19970:
    {
        returnValue = F("Am Hopfenstein");
        break;
    }
    case 19971:
    {
        returnValue = F("Am Hopfenstück");
        break;
    }
    case 19972:
    {
        returnValue = F("Am Hopfenteich");
        break;
    }
    case 19973:
    {
        returnValue = F("Am Hopfenweg");
        break;
    }
    case 19974:
    {
        returnValue = F("Am Hopfgarten");
        break;
    }
    case 19975:
    {
        returnValue = F("Am Hopfgäßla");
        break;
    }
    case 19976:
    {
        returnValue = F("Am Hopfnerberg");
        break;
    }
    case 19977:
    {
        returnValue = F("Am Hoppbruch");
        break;
    }
    case 19978:
    {
        returnValue = F("Am Hoppeberg");
        break;
    }
    case 19979:
    {
        returnValue = F("Am Hoppegang");
        break;
    }
    case 19980:
    {
        returnValue = F("Am Hoppelberg");
        break;
    }
    case 19981:
    {
        returnValue = F("Am Hoppenberg");
        break;
    }
    case 19982:
    {
        returnValue = F("Am Hoppenhof");
        break;
    }
    case 19983:
    {
        returnValue = F("Am Hoppenhoff");
        break;
    }
    case 19984:
    {
        returnValue = F("Am Hopperain");
        break;
    }
    case 19985:
    {
        returnValue = F("Am Hoppern");
        break;
    }
    case 19986:
    {
        returnValue = F("Am Horbach");
        break;
    }
    case 19987:
    {
        returnValue = F("Am Horbacher Stutz");
        break;
    }
    case 19988:
    {
        returnValue = F("Am Horbbrunnen");
        break;
    }
    case 19989:
    {
        returnValue = F("Am Horber Wald");
        break;
    }
    case 19990:
    {
        returnValue = F("Am Horberg");
        break;
    }
    case 19991:
    {
        returnValue = F("Am Horch");
        break;
    }
    case 19992:
    {
        returnValue = F("Am Horech");
        break;
    }
    case 19993:
    {
        returnValue = F("Am Horenberg");
        break;
    }
    case 19994:
    {
        returnValue = F("Am Horeth");
        break;
    }
    case 19995:
    {
        returnValue = F("Am Horgenbach");
        break;
    }
    case 19996:
    {
        returnValue = F("Am Horiberg");
        break;
    }
    case 19997:
    {
        returnValue = F("Am Horkenberg");
        break;
    }
    case 19998:
    {
        returnValue = F("Am Horn");
        break;
    }
    case 19999:
    {
        returnValue = F("Am Hornacker");
        break;
    }
    case 20000:
    {
        returnValue = F("Am Hornauerweg");
        break;
    }
    case 20001:
    {
        returnValue = F("Am Hornberg");
        break;
    }
    }
    return returnValue;
}
