#include <Arduino.h>

#include "variables.h"

String getGermanyStreetName11(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 1:
    {
        returnValue = F("1");
        break;
    }
    case 2:
    {
        returnValue = F("1 Stachelbeerweg");
        break;
    }
    case 3:
    {
        returnValue = F("1. Allee");
        break;
    }
    case 4:
    {
        returnValue = F("1. Bauackerweg");
        break;
    }
    case 5:
    {
        returnValue = F("1. Bruchweg");
        break;
    }
    case 6:
    {
        returnValue = F("1. Dammweg");
        break;
    }
    case 7:
    {
        returnValue = F("1. Dwarsweg");
        break;
    }
    case 8:
    {
        returnValue = F("1. Eckerhangweg");
        break;
    }
    case 9:
    {
        returnValue = F("1. Eheweg");
        break;
    }
    case 10:
    {
        returnValue = F("1. Eierhorstweg");
        break;
    }
    case 11:
    {
        returnValue = F("1. Feldstückenweg");
        break;
    }
    case 12:
    {
        returnValue = F("1. Feuerbahn");
        break;
    }
    case 13:
    {
        returnValue = F("1. Gartenweg");
        break;
    }
    case 14:
    {
        returnValue = F("1. Gersthof");
        break;
    }
    case 15:
    {
        returnValue = F("1. Glendweg");
        break;
    }
    case 16:
    {
        returnValue = F("1. Hammweg");
        break;
    }
    case 17:
    {
        returnValue = F("1. Hochmoorweg");
        break;
    }
    case 18:
    {
        returnValue = F("1. Industriestr.");
        break;
    }
    case 19:
    {
        returnValue = F("1. Jägerweg");
        break;
    }
    case 20:
    {
        returnValue = F("1. Kanal");
        break;
    }
    case 21:
    {
        returnValue = F("1. Kirchstr.");
        break;
    }
    case 22:
    {
        returnValue = F("1. Kompanieweg");
        break;
    }
    case 23:
    {
        returnValue = F("1. Leegmoorweg");
        break;
    }
    case 24:
    {
        returnValue = F("1. Löhner Bürgerwald");
        break;
    }
    case 25:
    {
        returnValue = F("1. Maxfeldweg");
        break;
    }
    case 26:
    {
        returnValue = F("1. Mittelweg");
        break;
    }
    case 27:
    {
        returnValue = F("1. Moorweg");
        break;
    }
    case 28:
    {
        returnValue = F("1. Nagsteige");
        break;
    }
    case 29:
    {
        returnValue = F("1. Neubruchweg");
        break;
    }
    case 30:
    {
        returnValue = F("1. Norderwieke");
        break;
    }
    case 31:
    {
        returnValue = F("1. Oberkossaer Weg");
        break;
    }
    case 32:
    {
        returnValue = F("1. Parkweg");
        break;
    }
    case 33:
    {
        returnValue = F("1. Pfarrgang");
        break;
    }
    case 34:
    {
        returnValue = F("1. Plauer Seebrücke, Schiffsanleger");
        break;
    }
    case 35:
    {
        returnValue = F("1. Querschlag");
        break;
    }
    case 36:
    {
        returnValue = F("1. Querweg");
        break;
    }
    case 37:
    {
        returnValue = F("1. Redder");
        break;
    }
    case 38:
    {
        returnValue = F("1. Richtstatt");
        break;
    }
    case 39:
    {
        returnValue = F("1. Ringstr.");
        break;
    }
    case 40:
    {
        returnValue = F("1. Sandweg");
        break;
    }
    case 41:
    {
        returnValue = F("1. Schlittweg");
        break;
    }
    case 42:
    {
        returnValue = F("1. Schneise");
        break;
    }
    case 43:
    {
        returnValue = F("1. Seitenweg");
        break;
    }
    case 44:
    {
        returnValue = F("1. Siedlungsweg");
        break;
    }
    case 45:
    {
        returnValue = F("1. Sohle");
        break;
    }
    case 46:
    {
        returnValue = F("1. St.-Jürgen-Str.");
        break;
    }
    case 47:
    {
        returnValue = F("1. Steinweg");
        break;
    }
    case 48:
    {
        returnValue = F("1. Süderwieke");
        break;
    }
    case 49:
    {
        returnValue = F("1. Südwieke");
        break;
    }
    case 50:
    {
        returnValue = F("1. Teich-Privatweg");
        break;
    }
    case 51:
    {
        returnValue = F("1. Verkoppelungsweg");
        break;
    }
    case 52:
    {
        returnValue = F("1. Waldweg");
        break;
    }
    case 53:
    {
        returnValue = F("1. Wasserstr.");
        break;
    }
    case 54:
    {
        returnValue = F("1. Wasserweg");
        break;
    }
    case 55:
    {
        returnValue = F("1. Weg");
        break;
    }
    case 56:
    {
        returnValue = F("1. Westerwieke");
        break;
    }
    case 57:
    {
        returnValue = F("1. Wiegele");
        break;
    }
    case 58:
    {
        returnValue = F("1. Ölweg");
        break;
    }
    case 59:
    {
        returnValue = F("1.Bodeweg");
        break;
    }
    case 60:
    {
        returnValue = F("1.Hintergasse");
        break;
    }
    case 61:
    {
        returnValue = F("1.Ringstr.");
        break;
    }
    case 62:
    {
        returnValue = F("1.Steepenweg");
        break;
    }
    case 63:
    {
        returnValue = F("1.Wallstr.");
        break;
    }
    case 64:
    {
        returnValue = F("1.Wendung");
        break;
    }
    case 65:
    {
        returnValue = F("1.Übergang");
        break;
    }
    case 66:
    {
        returnValue = F("1/A1");
        break;
    }
    case 67:
    {
        returnValue = F("10");
        break;
    }
    case 68:
    {
        returnValue = F("10 Entdeckerbad");
        break;
    }
    case 69:
    {
        returnValue = F("10 Pfennig-Weg");
        break;
    }
    case 70:
    {
        returnValue = F("10 Zwetschgenweg");
        break;
    }
    case 71:
    {
        returnValue = F("10-Minuten-Weg");
        break;
    }
    case 72:
    {
        returnValue = F("10. Schneise");
        break;
    }
    case 73:
    {
        returnValue = F("1000 Mark Weg");
        break;
    }
    case 74:
    {
        returnValue = F("1000m Gerade");
        break;
    }
    case 75:
    {
        returnValue = F("1000m-Weg");
        break;
    }
    case 76:
    {
        returnValue = F("100m Bahn");
        break;
    }
    case 77:
    {
        returnValue = F("1045");
        break;
    }
    case 78:
    {
        returnValue = F("107 - 116");
        break;
    }
    case 79:
    {
        returnValue = F("10th Avenue");
        break;
    }
    case 80:
    {
        returnValue = F("11");
        break;
    }
    case 81:
    {
        returnValue = F("11 Kilometerweg");
        break;
    }
    case 82:
    {
        returnValue = F("11 Kirschenweg");
        break;
    }
    case 83:
    {
        returnValue = F("11 Nord 1");
        break;
    }
    case 84:
    {
        returnValue = F("11. Schneise");
        break;
    }
    case 85:
    {
        returnValue = F("110 + 111");
        break;
    }
    case 86:
    {
        returnValue = F("112");
        break;
    }
    case 87:
    {
        returnValue = F("113");
        break;
    }
    case 88:
    {
        returnValue = F("117 - 121");
        break;
    }
    case 89:
    {
        returnValue = F("117er Ehrenhof");
        break;
    }
    case 90:
    {
        returnValue = F("12");
        break;
    }
    case 91:
    {
        returnValue = F("12 Aprikosenweg");
        break;
    }
    case 92:
    {
        returnValue = F("12. Schneise");
        break;
    }
    case 93:
    {
        returnValue = F("13");
        break;
    }
    case 94:
    {
        returnValue = F("13 Amselweg");
        break;
    }
    case 95:
    {
        returnValue = F("13. Schneise");
        break;
    }
    case 96:
    {
        returnValue = F("13.November-Weg");
        break;
    }
    case 97:
    {
        returnValue = F("14");
        break;
    }
    case 98:
    {
        returnValue = F("14 / Diebsteig");
        break;
    }
    case 99:
    {
        returnValue = F("14 Sperlingsweg");
        break;
    }
    case 100:
    {
        returnValue = F("15");
        break;
    }
    case 101:
    {
        returnValue = F("15 - Tenne Waldabfahrt");
        break;
    }
    case 102:
    {
        returnValue = F("15 Finkenweg");
        break;
    }
    case 103:
    {
        returnValue = F("16");
        break;
    }
    case 104:
    {
        returnValue = F("16 Drosselweg");
        break;
    }
    case 105:
    {
        returnValue = F("16-17-Schneise");
        break;
    }
    case 106:
    {
        returnValue = F("16-Büchles-Weg");
        break;
    }
    case 107:
    {
        returnValue = F("164-er Ring");
        break;
    }
    case 108:
    {
        returnValue = F("17");
        break;
    }
    case 109:
    {
        returnValue = F("17 Primelweg");
        break;
    }
    case 110:
    {
        returnValue = F("17-er Weg");
        break;
    }
    case 111:
    {
        returnValue = F("17er Str.");
        break;
    }
    case 112:
    {
        returnValue = F("18");
        break;
    }
    case 113:
    {
        returnValue = F("18 Minuten Weg");
        break;
    }
    case 114:
    {
        returnValue = F("18 Narzissenweg");
        break;
    }
    case 115:
    {
        returnValue = F("18 Ruten Weg");
        break;
    }
    case 116:
    {
        returnValue = F("18.-März-Str.");
        break;
    }
    case 117:
    {
        returnValue = F("1848er Str.");
        break;
    }
    case 118:
    {
        returnValue = F("19");
        break;
    }
    case 119:
    {
        returnValue = F("19 Tulpenweg");
        break;
    }
    case 120:
    {
        returnValue = F("1A Center");
        break;
    }
    }
    return returnValue;
}
