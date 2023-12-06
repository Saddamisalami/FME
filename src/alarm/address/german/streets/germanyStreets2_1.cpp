#include <Arduino.h>

#include "variables.h"

String getGermanyStreetName21(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 121:
    {
        returnValue = F("2");
        break;
    }
    case 122:
    {
        returnValue = F("2 Johannisbeerweg");
        break;
    }
    case 123:
    {
        returnValue = F("2-Pfennig-Brücke");
        break;
    }
    case 124:
    {
        returnValue = F("2. Allee");
        break;
    }
    case 125:
    {
        returnValue = F("2. Bauackerweg");
        break;
    }
    case 126:
    {
        returnValue = F("2. Bruchweg");
        break;
    }
    case 127:
    {
        returnValue = F("2. Dammweg");
        break;
    }
    case 128:
    {
        returnValue = F("2. Dwarsweg");
        break;
    }
    case 129:
    {
        returnValue = F("2. Ebene");
        break;
    }
    case 130:
    {
        returnValue = F("2. Eheweg");
        break;
    }
    case 131:
    {
        returnValue = F("2. Eierhorstweg");
        break;
    }
    case 132:
    {
        returnValue = F("2. Fernmeldeweg");
        break;
    }
    case 133:
    {
        returnValue = F("2. Feuerweg");
        break;
    }
    case 134:
    {
        returnValue = F("2. Gartenweg");
        break;
    }
    case 135:
    {
        returnValue = F("2. Gersthof");
        break;
    }
    case 136:
    {
        returnValue = F("2. Glendweg");
        break;
    }
    case 137:
    {
        returnValue = F("2. Kanal");
        break;
    }
    case 138:
    {
        returnValue = F("2. Kirchstr.");
        break;
    }
    case 139:
    {
        returnValue = F("2. Klingenweg");
        break;
    }
    case 140:
    {
        returnValue = F("2. Kompanieweg");
        break;
    }
    case 141:
    {
        returnValue = F("2. Koppelweg");
        break;
    }
    case 142:
    {
        returnValue = F("2. Landwehrdamm");
        break;
    }
    case 143:
    {
        returnValue = F("2. Leegmoorweg");
        break;
    }
    case 144:
    {
        returnValue = F("2. Löhner Bürgerwald");
        break;
    }
    case 145:
    {
        returnValue = F("2. Maxfeldweg");
        break;
    }
    case 146:
    {
        returnValue = F("2. Mittelweg");
        break;
    }
    case 147:
    {
        returnValue = F("2. Moorriege");
        break;
    }
    case 148:
    {
        returnValue = F("2. Moorweg");
        break;
    }
    case 149:
    {
        returnValue = F("2. Nagsteige");
        break;
    }
    case 150:
    {
        returnValue = F("2. Neubruchweg");
        break;
    }
    case 151:
    {
        returnValue = F("2. Norderwieke");
        break;
    }
    case 152:
    {
        returnValue = F("2. Oberkossaer Weg");
        break;
    }
    case 153:
    {
        returnValue = F("2. Pfarrgang");
        break;
    }
    case 154:
    {
        returnValue = F("2. Querschlag");
        break;
    }
    case 155:
    {
        returnValue = F("2. Querstr.");
        break;
    }
    case 156:
    {
        returnValue = F("2. Querweg");
        break;
    }
    case 157:
    {
        returnValue = F("2. Redder");
        break;
    }
    case 158:
    {
        returnValue = F("2. Rheinstr.");
        break;
    }
    case 159:
    {
        returnValue = F("2. Richtstatt");
        break;
    }
    case 160:
    {
        returnValue = F("2. Richtweg");
        break;
    }
    case 161:
    {
        returnValue = F("2. Roger Weg");
        break;
    }
    case 162:
    {
        returnValue = F("2. Sandweg");
        break;
    }
    case 163:
    {
        returnValue = F("2. Schlittweg");
        break;
    }
    case 164:
    {
        returnValue = F("2. Schneise");
        break;
    }
    case 165:
    {
        returnValue = F("2. Siedlungsweg");
        break;
    }
    case 166:
    {
        returnValue = F("2. Sohle");
        break;
    }
    case 167:
    {
        returnValue = F("2. St.-Jürgen-Str.");
        break;
    }
    case 168:
    {
        returnValue = F("2. Steinweg");
        break;
    }
    case 169:
    {
        returnValue = F("2. Süderwieke");
        break;
    }
    case 170:
    {
        returnValue = F("2. Südwieke");
        break;
    }
    case 171:
    {
        returnValue = F("2. Teich-Privatweg");
        break;
    }
    case 172:
    {
        returnValue = F("2. Tillhäuser Weg");
        break;
    }
    case 173:
    {
        returnValue = F("2. Tillweg");
        break;
    }
    case 174:
    {
        returnValue = F("2. Verkoppelungsweg");
        break;
    }
    case 175:
    {
        returnValue = F("2. Waldlehrpfad");
        break;
    }
    case 176:
    {
        returnValue = F("2. Waldweg");
        break;
    }
    case 177:
    {
        returnValue = F("2. Wasserstr.");
        break;
    }
    case 178:
    {
        returnValue = F("2. Wasserweg");
        break;
    }
    case 179:
    {
        returnValue = F("2. Weg");
        break;
    }
    case 180:
    {
        returnValue = F("2. Westerwieke");
        break;
    }
    case 181:
    {
        returnValue = F("2. Übergang");
        break;
    }
    case 182:
    {
        returnValue = F("2.Ausfallstr.");
        break;
    }
    case 183:
    {
        returnValue = F("2.Bodeweg");
        break;
    }
    case 184:
    {
        returnValue = F("2.Hintergasse");
        break;
    }
    case 185:
    {
        returnValue = F("2.Ringstr.");
        break;
    }
    case 186:
    {
        returnValue = F("2.Steepenweg");
        break;
    }
    case 187:
    {
        returnValue = F("2.Wallstr.");
        break;
    }
    case 188:
    {
        returnValue = F("2.Wendung");
        break;
    }
    case 189:
    {
        returnValue = F("2.Werderstr.");
        break;
    }
    case 190:
    {
        returnValue = F("20");
        break;
    }
    case 191:
    {
        returnValue = F("20 Rosenweg");
        break;
    }
    case 192:
    {
        returnValue = F("2015");
        break;
    }
    case 193:
    {
        returnValue = F("21 Dahlienweg");
        break;
    }
    case 194:
    {
        returnValue = F("21,22,K");
        break;
    }
    case 195:
    {
        returnValue = F("22er Str.");
        break;
    }
    case 196:
    {
        returnValue = F("23");
        break;
    }
    case 197:
    {
        returnValue = F("231");
        break;
    }
    case 198:
    {
        returnValue = F("24 Stunden 2009");
        break;
    }
    case 199:
    {
        returnValue = F("25");
        break;
    }
    case 200:
    {
        returnValue = F("251/252");
        break;
    }
    case 201:
    {
        returnValue = F("255");
        break;
    }
    case 202:
    {
        returnValue = F("26");
        break;
    }
    case 203:
    {
        returnValue = F("27");
        break;
    }
    case 204:
    {
        returnValue = F("28");
        break;
    }
    case 205:
    {
        returnValue = F("29 - 38");
        break;
    }
    case 206:
    {
        returnValue = F("2N");
        break;
    }
    case 207:
    {
        returnValue = F("2er Weg");
        break;
    }
    }
    return returnValue;
}
