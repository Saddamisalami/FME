#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameZ2(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 350035:
    {
        returnValue = F("Zum Rheintal");
        break;
    }
    case 350036:
    {
        returnValue = F("Zum Rheinufer");
        break;
    }
    case 350037:
    {
        returnValue = F("Zum Rheinwärterhaus");
        break;
    }
    case 350038:
    {
        returnValue = F("Zum Rhien");
        break;
    }
    case 350039:
    {
        returnValue = F("Zum Rhin");
        break;
    }
    case 350040:
    {
        returnValue = F("Zum Rhuethstein");
        break;
    }
    case 350041:
    {
        returnValue = F("Zum Rhumetor");
        break;
    }
    case 350042:
    {
        returnValue = F("Zum Rhön");
        break;
    }
    case 350043:
    {
        returnValue = F("Zum Rhönblick");
        break;
    }
    case 350044:
    {
        returnValue = F("Zum Richelnberg");
        break;
    }
    case 350045:
    {
        returnValue = F("Zum Richterbach");
        break;
    }
    case 350046:
    {
        returnValue = F("Zum Rickelsberg");
        break;
    }
    case 350047:
    {
        returnValue = F("Zum Riddebrocks Busch");
        break;
    }
    case 350048:
    {
        returnValue = F("Zum Riden");
        break;
    }
    case 350049:
    {
        returnValue = F("Zum Ried");
        break;
    }
    case 350050:
    {
        returnValue = F("Zum Riedbrunnen");
        break;
    }
    case 350051:
    {
        returnValue = F("Zum Rieden");
        break;
    }
    case 350052:
    {
        returnValue = F("Zum Riedensee");
        break;
    }
    case 350053:
    {
        returnValue = F("Zum Riedfeld");
        break;
    }
    case 350054:
    {
        returnValue = F("Zum Riedgraben");
        break;
    }
    case 350055:
    {
        returnValue = F("Zum Riedhof");
        break;
    }
    case 350056:
    {
        returnValue = F("Zum Riedlein");
        break;
    }
    case 350057:
    {
        returnValue = F("Zum Riegel");
        break;
    }
    case 350058:
    {
        returnValue = F("Zum Riegelsgraben");
        break;
    }
    case 350059:
    {
        returnValue = F("Zum Riemental");
        break;
    }
    case 350060:
    {
        returnValue = F("Zum Riepelhof");
        break;
    }
    case 350061:
    {
        returnValue = F("Zum Riepen");
        break;
    }
    case 350062:
    {
        returnValue = F("Zum Ries");
        break;
    }
    case 350063:
    {
        returnValue = F("Zum Riesbach");
        break;
    }
    case 350064:
    {
        returnValue = F("Zum Rieseberg");
        break;
    }
    case 350065:
    {
        returnValue = F("Zum Rieselfeld");
        break;
    }
    case 350066:
    {
        returnValue = F("Zum Riesenberg");
        break;
    }
    case 350067:
    {
        returnValue = F("Zum Riesenhaupt");
        break;
    }
    case 350068:
    {
        returnValue = F("Zum Riesensprung");
        break;
    }
    case 350069:
    {
        returnValue = F("Zum Riesenstein");
        break;
    }
    case 350070:
    {
        returnValue = F("Zum Riet");
        break;
    }
    case 350071:
    {
        returnValue = F("Zum Riet (neu)");
        break;
    }
    case 350072:
    {
        returnValue = F("Zum Rieth");
        break;
    }
    case 350073:
    {
        returnValue = F("Zum Rießen");
        break;
    }
    case 350074:
    {
        returnValue = F("Zum Rillenstein");
        break;
    }
    case 350075:
    {
        returnValue = F("Zum Rimberg");
        break;
    }
    case 350076:
    {
        returnValue = F("Zum Ring");
        break;
    }
    case 350077:
    {
        returnValue = F("Zum Ringelgraben");
        break;
    }
    case 350078:
    {
        returnValue = F("Zum Ringergraben");
        break;
    }
    case 350079:
    {
        returnValue = F("Zum Ringgraben");
        break;
    }
    case 350080:
    {
        returnValue = F("Zum Ringkanal");
        break;
    }
    case 350081:
    {
        returnValue = F("Zum Ringofen");
        break;
    }
    case 350082:
    {
        returnValue = F("Zum Ringwall");
        break;
    }
    case 350083:
    {
        returnValue = F("Zum Rinnbach");
        break;
    }
    case 350084:
    {
        returnValue = F("Zum Rinnebach");
        break;
    }
    case 350085:
    {
        returnValue = F("Zum Risch");
        break;
    }
    case 350086:
    {
        returnValue = F("Zum Rischanger");
        break;
    }
    case 350087:
    {
        returnValue = F("Zum Rischen");
        break;
    }
    case 350088:
    {
        returnValue = F("Zum Rislöh");
        break;
    }
    case 350089:
    {
        returnValue = F("Zum Rittbruch");
        break;
    }
    case 350090:
    {
        returnValue = F("Zum Rittelberg");
        break;
    }
    case 350091:
    {
        returnValue = F("Zum Ritterbusch");
        break;
    }
    case 350092:
    {
        returnValue = F("Zum Rittergut");
        break;
    }
    case 350093:
    {
        returnValue = F("Zum Rittersbach");
        break;
    }
    case 350094:
    {
        returnValue = F("Zum Rittersberg");
        break;
    }
    case 350095:
    {
        returnValue = F("Zum Ritterswald");
        break;
    }
    case 350096:
    {
        returnValue = F("Zum Rittertal");
        break;
    }
    case 350097:
    {
        returnValue = F("Zum Rittstein");
        break;
    }
    case 350098:
    {
        returnValue = F("Zum Ritzenberg");
        break;
    }
    case 350099:
    {
        returnValue = F("Zum Ritzhagen");
        break;
    }
    case 350100:
    {
        returnValue = F("Zum Rißbrink");
        break;
    }
    case 350101:
    {
        returnValue = F("Zum Rochus");
        break;
    }
    case 350102:
    {
        returnValue = F("Zum Rochusberg");
        break;
    }
    case 350103:
    {
        returnValue = F("Zum Rockenhübel");
        break;
    }
    case 350104:
    {
        returnValue = F("Zum Rod");
        break;
    }
    case 350105:
    {
        returnValue = F("Zum Rodachtal");
        break;
    }
    case 350106:
    {
        returnValue = F("Zum Rodderbruch");
        break;
    }
    case 350107:
    {
        returnValue = F("Zum Rode Moor");
        break;
    }
    case 350108:
    {
        returnValue = F("Zum Rodeland");
        break;
    }
    case 350109:
    {
        returnValue = F("Zum Rodelberg");
        break;
    }
    case 350110:
    {
        returnValue = F("Zum Roden");
        break;
    }
    case 350111:
    {
        returnValue = F("Zum Rodenbusch");
        break;
    }
    case 350112:
    {
        returnValue = F("Zum Rodensberg");
        break;
    }
    case 350113:
    {
        returnValue = F("Zum Rodenwald");
        break;
    }
    case 350114:
    {
        returnValue = F("Zum Roesch");
        break;
    }
    case 350115:
    {
        returnValue = F("Zum Rogge-Busch");
        break;
    }
    case 350116:
    {
        returnValue = F("Zum Roggenfeld");
        break;
    }
    case 350117:
    {
        returnValue = F("Zum Roggenhof");
        break;
    }
    case 350118:
    {
        returnValue = F("Zum Rohkamp");
        break;
    }
    case 350119:
    {
        returnValue = F("Zum Rohland");
        break;
    }
    case 350120:
    {
        returnValue = F("Zum Rohnberg");
        break;
    }
    case 350121:
    {
        returnValue = F("Zum Rohngraben");
        break;
    }
    case 350122:
    {
        returnValue = F("Zum Rohnstrauch");
        break;
    }
    case 350123:
    {
        returnValue = F("Zum Rohrbach");
        break;
    }
    case 350124:
    {
        returnValue = F("Zum Rohrer Holz");
        break;
    }
    case 350125:
    {
        returnValue = F("Zum Rohrfeld");
        break;
    }
    case 350126:
    {
        returnValue = F("Zum Rohrmeier");
        break;
    }
    case 350127:
    {
        returnValue = F("Zum Rohrtal");
        break;
    }
    case 350128:
    {
        returnValue = F("Zum Roidhof");
        break;
    }
    case 350129:
    {
        returnValue = F("Zum Roland");
        break;
    }
    case 350130:
    {
        returnValue = F("Zum Rollberg");
        break;
    }
    case 350131:
    {
        returnValue = F("Zum Rollhof");
        break;
    }
    case 350132:
    {
        returnValue = F("Zum Rollkopf");
        break;
    }
    case 350133:
    {
        returnValue = F("Zum Rollsberg");
        break;
    }
    case 350134:
    {
        returnValue = F("Zum Romberg");
        break;
    }
    case 350135:
    {
        returnValue = F("Zum Rommelsberg");
        break;
    }
    case 350136:
    {
        returnValue = F("Zum Rommelschläger");
        break;
    }
    case 350137:
    {
        returnValue = F("Zum Rommelteich");
        break;
    }
    case 350138:
    {
        returnValue = F("Zum Rondell");
        break;
    }
    case 350139:
    {
        returnValue = F("Zum Roppertsborn");
        break;
    }
    case 350140:
    {
        returnValue = F("Zum Rorichumer Tief");
        break;
    }
    case 350141:
    {
        returnValue = F("Zum Rosenacker");
        break;
    }
    case 350142:
    {
        returnValue = F("Zum Rosenberg");
        break;
    }
    case 350143:
    {
        returnValue = F("Zum Rosenborn");
        break;
    }
    case 350144:
    {
        returnValue = F("Zum Rosenbusch");
        break;
    }
    case 350145:
    {
        returnValue = F("Zum Rosenbörnchen");
        break;
    }
    case 350146:
    {
        returnValue = F("Zum Rosengarten");
        break;
    }
    case 350147:
    {
        returnValue = F("Zum Rosengärtchen");
        break;
    }
    case 350148:
    {
        returnValue = F("Zum Rosenheim");
        break;
    }
    case 350149:
    {
        returnValue = F("Zum Rosenhof");
        break;
    }
    case 350150:
    {
        returnValue = F("Zum Rosenmorgen");
        break;
    }
    case 350151:
    {
        returnValue = F("Zum Rosenrangen");
        break;
    }
    case 350152:
    {
        returnValue = F("Zum Rosensiefen");
        break;
    }
    case 350153:
    {
        returnValue = F("Zum Rosental");
        break;
    }
    case 350154:
    {
        returnValue = F("Zum Rosenteich");
        break;
    }
    case 350155:
    {
        returnValue = F("Zum Rosenthal");
        break;
    }
    case 350156:
    {
        returnValue = F("Zum Rosenthälchen");
        break;
    }
    case 350157:
    {
        returnValue = F("Zum Rosenwinkel");
        break;
    }
    case 350158:
    {
        returnValue = F("Zum Rossbach");
        break;
    }
    case 350159:
    {
        returnValue = F("Zum Rossweg");
        break;
    }
    case 350160:
    {
        returnValue = F("Zum Rot");
        break;
    }
    case 350161:
    {
        returnValue = F("Zum Rotacker");
        break;
    }
    case 350162:
    {
        returnValue = F("Zum Rotbrunnen");
        break;
    }
    case 350163:
    {
        returnValue = F("Zum Rotehornblick");
        break;
    }
    case 350164:
    {
        returnValue = F("Zum Roten Acker");
        break;
    }
    case 350165:
    {
        returnValue = F("Zum Roten Bach");
        break;
    }
    case 350166:
    {
        returnValue = F("Zum Roten Baum");
        break;
    }
    case 350167:
    {
        returnValue = F("Zum Roten Berg");
        break;
    }
    case 350168:
    {
        returnValue = F("Zum Roten Berge");
        break;
    }
    case 350169:
    {
        returnValue = F("Zum Roten Busch");
        break;
    }
    case 350170:
    {
        returnValue = F("Zum Roten Bühl");
        break;
    }
    case 350171:
    {
        returnValue = F("Zum Roten Grund");
        break;
    }
    case 350172:
    {
        returnValue = F("Zum Roten Gut");
        break;
    }
    case 350173:
    {
        returnValue = F("Zum Roten Hahn");
        break;
    }
    case 350174:
    {
        returnValue = F("Zum Roten Igel");
        break;
    }
    case 350175:
    {
        returnValue = F("Zum Roten Kreuz");
        break;
    }
    case 350176:
    {
        returnValue = F("Zum Roten Peter");
        break;
    }
    case 350177:
    {
        returnValue = F("Zum Roten Rain");
        break;
    }
    case 350178:
    {
        returnValue = F("Zum Roten Rangen");
        break;
    }
    case 350179:
    {
        returnValue = F("Zum Roten Seifen");
        break;
    }
    case 350180:
    {
        returnValue = F("Zum Roten Stein");
        break;
    }
    case 350181:
    {
        returnValue = F("Zum Roten Stück");
        break;
    }
    case 350182:
    {
        returnValue = F("Zum Roten Torkel");
        break;
    }
    case 350183:
    {
        returnValue = F("Zum Roten Wasser");
        break;
    }
    case 350184:
    {
        returnValue = F("Zum Rotenberg");
        break;
    }
    case 350185:
    {
        returnValue = F("Zum Rotenfels");
        break;
    }
    case 350186:
    {
        returnValue = F("Zum Rotenknopf");
        break;
    }
    case 350187:
    {
        returnValue = F("Zum Rotering");
        break;
    }
    case 350188:
    {
        returnValue = F("Zum Roth");
        break;
    }
    case 350189:
    {
        returnValue = F("Zum Rothberg");
        break;
    }
    case 350190:
    {
        returnValue = F("Zum Rothenberg");
        break;
    }
    case 350191:
    {
        returnValue = F("Zum Rothenstein");
        break;
    }
    case 350192:
    {
        returnValue = F("Zum Rotherberg");
        break;
    }
    case 350193:
    {
        returnValue = F("Zum Rothesfeld");
        break;
    }
    case 350194:
    {
        returnValue = F("Zum Rothsoll");
        break;
    }
    case 350195:
    {
        returnValue = F("Zum Rothvorwerk");
        break;
    }
    case 350196:
    {
        returnValue = F("Zum Rothölzle");
        break;
    }
    case 350197:
    {
        returnValue = F("Zum Rotstein");
        break;
    }
    case 350198:
    {
        returnValue = F("Zum Rotstücken");
        break;
    }
    case 350199:
    {
        returnValue = F("Zum Rott");
        break;
    }
    case 350200:
    {
        returnValue = F("Zum Rottberg");
        break;
    }
    case 350201:
    {
        returnValue = F("Zum Rottenbach");
        break;
    }
    case 350202:
    {
        returnValue = F("Zum Rottenföhr");
        break;
    }
    case 350203:
    {
        returnValue = F("Zum Rottfeld");
        break;
    }
    case 350204:
    {
        returnValue = F("Zum Rottkamp");
        break;
    }
    case 350205:
    {
        returnValue = F("Zum Rottland");
        break;
    }
    case 350206:
    {
        returnValue = F("Zum Rotwasser");
        break;
    }
    case 350207:
    {
        returnValue = F("Zum Rotwäldchen");
        break;
    }
    case 350208:
    {
        returnValue = F("Zum Rousten");
        break;
    }
    case 350209:
    {
        returnValue = F("Zum Roßbach");
        break;
    }
    case 350210:
    {
        returnValue = F("Zum Roßberg");
        break;
    }
    case 350211:
    {
        returnValue = F("Zum Roßbusch");
        break;
    }
    case 350212:
    {
        returnValue = F("Zum Roßhimmel");
        break;
    }
    case 350213:
    {
        returnValue = F("Zum Roßteich");
        break;
    }
    case 350214:
    {
        returnValue = F("Zum Rubel");
        break;
    }
    case 350215:
    {
        returnValue = F("Zum Rudert");
        break;
    }
    case 350216:
    {
        returnValue = F("Zum Rugenbarg");
        break;
    }
    case 350217:
    {
        returnValue = F("Zum Ruhbrunnen");
        break;
    }
    case 350218:
    {
        returnValue = F("Zum Ruhdall");
        break;
    }
    case 350219:
    {
        returnValue = F("Zum Ruhland");
        break;
    }
    case 350220:
    {
        returnValue = F("Zum Ruhlaub");
        break;
    }
    case 350221:
    {
        returnValue = F("Zum Ruhlsdorfer Feld");
        break;
    }
    case 350222:
    {
        returnValue = F("Zum Ruhr");
        break;
    }
    case 350223:
    {
        returnValue = F("Zum Ruhrblick");
        break;
    }
    case 350224:
    {
        returnValue = F("Zum Ruhstein");
        break;
    }
    case 350225:
    {
        returnValue = F("Zum Ruhwald");
        break;
    }
    case 350226:
    {
        returnValue = F("Zum Rummelsbach");
        break;
    }
    case 350227:
    {
        returnValue = F("Zum Rundblick");
        break;
    }
    case 350228:
    {
        returnValue = F("Zum Runddielchen");
        break;
    }
    case 350229:
    {
        returnValue = F("Zum Runden Baum");
        break;
    }
    case 350230:
    {
        returnValue = F("Zum Runden Bruch");
        break;
    }
    case 350231:
    {
        returnValue = F("Zum Rundesahl");
        break;
    }
    case 350232:
    {
        returnValue = F("Zum Rundling");
        break;
    }
    case 350233:
    {
        returnValue = F("Zum Rundshorn");
        break;
    }
    case 350234:
    {
        returnValue = F("Zum Rungenberg");
        break;
    }
    case 350235:
    {
        returnValue = F("Zum Rusch");
        break;
    }
    case 350236:
    {
        returnValue = F("Zum Ruschpohl");
        break;
    }
    case 350237:
    {
        returnValue = F("Zum Rusteberg");
        break;
    }
    case 350238:
    {
        returnValue = F("Zum Rusterholz");
        break;
    }
    case 350239:
    {
        returnValue = F("Zum Ruthein");
        break;
    }
    case 350240:
    {
        returnValue = F("Zum Rutschestein");
        break;
    }
    case 350241:
    {
        returnValue = F("Zum Ruttert");
        break;
    }
    case 350242:
    {
        returnValue = F("Zum Ruum");
        break;
    }
    case 350243:
    {
        returnValue = F("Zum Ruwerbach");
        break;
    }
    case 350244:
    {
        returnValue = F("Zum Ruwertal");
        break;
    }
    case 350245:
    {
        returnValue = F("Zum Ryckwäldchen");
        break;
    }
    case 350246:
    {
        returnValue = F("Zum Rädchen");
        break;
    }
    case 350247:
    {
        returnValue = F("Zum Rähnbach");
        break;
    }
    case 350248:
    {
        returnValue = F("Zum Rödchen");
        break;
    }
    case 350249:
    {
        returnValue = F("Zum Rödebusch");
        break;
    }
    case 350250:
    {
        returnValue = F("Zum Rödel");
        break;
    }
    case 350251:
    {
        returnValue = F("Zum Rödert");
        break;
    }
    case 350252:
    {
        returnValue = F("Zum Röderwald");
        break;
    }
    case 350253:
    {
        returnValue = F("Zum Rödgen");
        break;
    }
    case 350254:
    {
        returnValue = F("Zum Rödgestal");
        break;
    }
    case 350255:
    {
        returnValue = F("Zum Rögen");
        break;
    }
    case 350256:
    {
        returnValue = F("Zum Rögnitztal");
        break;
    }
    case 350257:
    {
        returnValue = F("Zum Röhlingswald");
        break;
    }
    case 350258:
    {
        returnValue = F("Zum Röhrberg");
        break;
    }
    case 350259:
    {
        returnValue = F("Zum Röhrbrunnen");
        break;
    }
    case 350260:
    {
        returnValue = F("Zum Röhrersbach");
        break;
    }
    case 350261:
    {
        returnValue = F("Zum Röhrichtsiefen");
        break;
    }
    case 350262:
    {
        returnValue = F("Zum Röhrig");
        break;
    }
    case 350263:
    {
        returnValue = F("Zum Röhrl");
        break;
    }
    case 350264:
    {
        returnValue = F("Zum Röhtlein");
        break;
    }
    case 350265:
    {
        returnValue = F("Zum Röllengarten");
        break;
    }
    case 350266:
    {
        returnValue = F("Zum Röltgenhof");
        break;
    }
    case 350267:
    {
        returnValue = F("Zum Römberg");
        break;
    }
    case 350268:
    {
        returnValue = F("Zum Römerbad");
        break;
    }
    case 350269:
    {
        returnValue = F("Zum Römerberg");
        break;
    }
    case 350270:
    {
        returnValue = F("Zum Römerbrunnen");
        break;
    }
    case 350271:
    {
        returnValue = F("Zum Römerfeld");
        break;
    }
    case 350272:
    {
        returnValue = F("Zum Römergrund");
        break;
    }
    case 350273:
    {
        returnValue = F("Zum Römerhügel");
        break;
    }
    case 350274:
    {
        returnValue = F("Zum Römerkastell");
        break;
    }
    case 350275:
    {
        returnValue = F("Zum Römersprudel");
        break;
    }
    case 350276:
    {
        returnValue = F("Zum Römersteig");
        break;
    }
    case 350277:
    {
        returnValue = F("Zum Römerturm");
        break;
    }
    case 350278:
    {
        returnValue = F("Zum Römerwall");
        break;
    }
    case 350279:
    {
        returnValue = F("Zum Rönpohl");
        break;
    }
    case 350280:
    {
        returnValue = F("Zum Röresberg");
        break;
    }
    case 350281:
    {
        returnValue = F("Zum Röselhof");
        break;
    }
    case 350282:
    {
        returnValue = F("Zum Rösselsgraben");
        break;
    }
    case 350283:
    {
        returnValue = F("Zum Rössle");
        break;
    }
    case 350284:
    {
        returnValue = F("Zum Röthberg");
        break;
    }
    case 350285:
    {
        returnValue = F("Zum Röthchen");
        break;
    }
    case 350286:
    {
        returnValue = F("Zum Röthelstal");
        break;
    }
    case 350287:
    {
        returnValue = F("Zum Röthepfuhl");
        break;
    }
    case 350288:
    {
        returnValue = F("Zum Röthof");
        break;
    }
    case 350289:
    {
        returnValue = F("Zum Röthpool");
        break;
    }
    case 350290:
    {
        returnValue = F("Zum Röthsoll");
        break;
    }
    case 350291:
    {
        returnValue = F("Zum Rötig");
        break;
    }
    case 350292:
    {
        returnValue = F("Zum Rübenacker");
        break;
    }
    case 350293:
    {
        returnValue = F("Zum Rübenberg");
        break;
    }
    case 350294:
    {
        returnValue = F("Zum Rübenfeld");
        break;
    }
    case 350295:
    {
        returnValue = F("Zum Rübenkamp");
        break;
    }
    case 350296:
    {
        returnValue = F("Zum Rübholz");
        break;
    }
    case 350297:
    {
        returnValue = F("Zum Rückeberg");
        break;
    }
    case 350298:
    {
        returnValue = F("Zum Rückkopf");
        break;
    }
    case 350299:
    {
        returnValue = F("Zum Rüddelhermen");
        break;
    }
    case 350300:
    {
        returnValue = F("Zum Rügenzubringer");
        break;
    }
    case 350301:
    {
        returnValue = F("Zum Rüschenmoor");
        break;
    }
    case 350302:
    {
        returnValue = F("Zum Rüskenmoor");
        break;
    }
    case 350303:
    {
        returnValue = F("Zum Rüsperwald");
        break;
    }
    case 350304:
    {
        returnValue = F("Zum Saal");
        break;
    }
    case 350305:
    {
        returnValue = F("Zum Saaleblick");
        break;
    }
    case 350306:
    {
        returnValue = F("Zum Saarberg");
        break;
    }
    case 350307:
    {
        returnValue = F("Zum Saargau");
        break;
    }
    case 350308:
    {
        returnValue = F("Zum Saarpfalz-Park");
        break;
    }
    case 350309:
    {
        returnValue = F("Zum Saatfeld");
        break;
    }
    case 350310:
    {
        returnValue = F("Zum Sabel");
        break;
    }
    case 350311:
    {
        returnValue = F("Zum Sachsenhof");
        break;
    }
    case 350312:
    {
        returnValue = F("Zum Sachsenweg");
        break;
    }
    case 350313:
    {
        returnValue = F("Zum Sackschacht");
        break;
    }
    case 350314:
    {
        returnValue = F("Zum Safranfeld");
        break;
    }
    case 350315:
    {
        returnValue = F("Zum Saibling");
        break;
    }
    case 350316:
    {
        returnValue = F("Zum Sailer");
        break;
    }
    case 350317:
    {
        returnValue = F("Zum Sallrögen");
        break;
    }
    case 350318:
    {
        returnValue = F("Zum Salm");
        break;
    }
    case 350319:
    {
        returnValue = F("Zum Salvusbrunnen");
        break;
    }
    case 350320:
    {
        returnValue = F("Zum Salzbach");
        break;
    }
    case 350321:
    {
        returnValue = F("Zum Salzberg");
        break;
    }
    case 350322:
    {
        returnValue = F("Zum Salzgittersee");
        break;
    }
    case 350323:
    {
        returnValue = F("Zum Salzhaus");
        break;
    }
    case 350324:
    {
        returnValue = F("Zum Salzsee");
        break;
    }
    case 350325:
    {
        returnValue = F("Zum Salzteilchen");
        break;
    }
    case 350326:
    {
        returnValue = F("Zum Samithsee");
        break;
    }
    case 350327:
    {
        returnValue = F("Zum Sand");
        break;
    }
    case 350328:
    {
        returnValue = F("Zum Sandacker");
        break;
    }
    case 350329:
    {
        returnValue = F("Zum Sandbach");
        break;
    }
    case 350330:
    {
        returnValue = F("Zum Sandberg");
        break;
    }
    case 350331:
    {
        returnValue = F("Zum Sandberge");
        break;
    }
    case 350332:
    {
        returnValue = F("Zum Sandborn");
        break;
    }
    case 350333:
    {
        returnValue = F("Zum Sandbrink");
        break;
    }
    case 350334:
    {
        returnValue = F("Zum Sande");
        break;
    }
    case 350335:
    {
        returnValue = F("Zum Sandesch");
        break;
    }
    case 350336:
    {
        returnValue = F("Zum Sandfeld");
        break;
    }
    case 350337:
    {
        returnValue = F("Zum Sandgraben");
        break;
    }
    case 350338:
    {
        returnValue = F("Zum Sandknapp");
        break;
    }
    case 350339:
    {
        returnValue = F("Zum Sandkolk");
        break;
    }
    case 350340:
    {
        returnValue = F("Zum Sandkrug");
        break;
    }
    case 350341:
    {
        returnValue = F("Zum Sandplatz");
        break;
    }
    case 350342:
    {
        returnValue = F("Zum Sandseele");
        break;
    }
    case 350343:
    {
        returnValue = F("Zum Sandstich");
        break;
    }
    case 350344:
    {
        returnValue = F("Zum Sankt Jörgen");
        break;
    }
    case 350345:
    {
        returnValue = F("Zum Sarkbrunnen");
        break;
    }
    case 350346:
    {
        returnValue = F("Zum Sassel");
        break;
    }
    case 350347:
    {
        returnValue = F("Zum Sassenborn");
        break;
    }
    case 350348:
    {
        returnValue = F("Zum Sattel");
        break;
    }
    case 350349:
    {
        returnValue = F("Zum Sattelkopf");
        break;
    }
    case 350350:
    {
        returnValue = F("Zum Sattelwald");
        break;
    }
    case 350351:
    {
        returnValue = F("Zum Satzenberg");
        break;
    }
    case 350352:
    {
        returnValue = F("Zum Sauerbach");
        break;
    }
    case 350353:
    {
        returnValue = F("Zum Sauerberg");
        break;
    }
    case 350354:
    {
        returnValue = F("Zum Sauerborn");
        break;
    }
    case 350355:
    {
        returnValue = F("Zum Sauerbrunnen");
        break;
    }
    case 350356:
    {
        returnValue = F("Zum Sauerland");
        break;
    }
    case 350357:
    {
        returnValue = F("Zum Sauersack");
        break;
    }
    case 350358:
    {
        returnValue = F("Zum Sauertal");
        break;
    }
    case 350359:
    {
        returnValue = F("Zum Sauerwerder");
        break;
    }
    case 350360:
    {
        returnValue = F("Zum Saupark");
        break;
    }
    case 350361:
    {
        returnValue = F("Zum Sauren Tal");
        break;
    }
    case 350362:
    {
        returnValue = F("Zum Schaarheck");
        break;
    }
    case 350363:
    {
        returnValue = F("Zum Schachen");
        break;
    }
    case 350364:
    {
        returnValue = F("Zum Schachergraben");
        break;
    }
    case 350365:
    {
        returnValue = F("Zum Schacht");
        break;
    }
    case 350366:
    {
        returnValue = F("Zum Schacht III");
        break;
    }
    case 350367:
    {
        returnValue = F("Zum Schacht Kuckuck");
        break;
    }
    case 350368:
    {
        returnValue = F("Zum Schachtberg");
        break;
    }
    case 350369:
    {
        returnValue = F("Zum Schachthaus");
        break;
    }
    case 350370:
    {
        returnValue = F("Zum Schackberg");
        break;
    }
    case 350371:
    {
        returnValue = F("Zum Schackenteich");
        break;
    }
    case 350372:
    {
        returnValue = F("Zum Schafbach");
        break;
    }
    case 350373:
    {
        returnValue = F("Zum Schafgarten");
        break;
    }
    case 350374:
    {
        returnValue = F("Zum Schafhof");
        break;
    }
    case 350375:
    {
        returnValue = F("Zum Schafrain");
        break;
    }
    case 350376:
    {
        returnValue = F("Zum Schafstall");
        break;
    }
    case 350377:
    {
        returnValue = F("Zum Schafstallberg");
        break;
    }
    case 350378:
    {
        returnValue = F("Zum Schafsteg");
        break;
    }
    case 350379:
    {
        returnValue = F("Zum Schafsweg");
        break;
    }
    case 350380:
    {
        returnValue = F("Zum Schafwasen");
        break;
    }
    case 350381:
    {
        returnValue = F("Zum Schankstor");
        break;
    }
    case 350382:
    {
        returnValue = F("Zum Schanzberg");
        break;
    }
    case 350383:
    {
        returnValue = F("Zum Schanzengraben");
        break;
    }
    case 350384:
    {
        returnValue = F("Zum Schanzl");
        break;
    }
    case 350385:
    {
        returnValue = F("Zum Schaperplatz");
        break;
    }
    case 350386:
    {
        returnValue = F("Zum Scharfenberg");
        break;
    }
    case 350387:
    {
        returnValue = F("Zum Scharfenstein");
        break;
    }
    case 350388:
    {
        returnValue = F("Zum Scharing");
        break;
    }
    case 350389:
    {
        returnValue = F("Zum Schatthütle");
        break;
    }
    case 350390:
    {
        returnValue = F("Zum Schatzberg");
        break;
    }
    case 350391:
    {
        returnValue = F("Zum Schauinsland");
        break;
    }
    case 350392:
    {
        returnValue = F("Zum Schaulkamp");
        break;
    }
    case 350393:
    {
        returnValue = F("Zum Schaumbergblick");
        break;
    }
    case 350394:
    {
        returnValue = F("Zum Schaumbergkreuz");
        break;
    }
    case 350395:
    {
        returnValue = F("Zum Schaumbergturm");
        break;
    }
    case 350396:
    {
        returnValue = F("Zum Schaumburger Klinikum");
        break;
    }
    case 350397:
    {
        returnValue = F("Zum Schebbruch");
        break;
    }
    case 350398:
    {
        returnValue = F("Zum Scheckenbach");
        break;
    }
    case 350399:
    {
        returnValue = F("Zum Schee");
        break;
    }
    case 350400:
    {
        returnValue = F("Zum Scheerenberg");
        break;
    }
    case 350401:
    {
        returnValue = F("Zum Scheffelhof");
        break;
    }
    case 350402:
    {
        returnValue = F("Zum Scheibelberg");
        break;
    }
    case 350403:
    {
        returnValue = F("Zum Scheibenbuck");
        break;
    }
    case 350404:
    {
        returnValue = F("Zum Scheibental");
        break;
    }
    case 350405:
    {
        returnValue = F("Zum Scheid");
        break;
    }
    case 350406:
    {
        returnValue = F("Zum Scheidberg");
        break;
    }
    case 350407:
    {
        returnValue = F("Zum Scheider Feld");
        break;
    }
    case 350408:
    {
        returnValue = F("Zum Scheidertal");
        break;
    }
    case 350409:
    {
        returnValue = F("Zum Scheiderwald");
        break;
    }
    case 350410:
    {
        returnValue = F("Zum Scheidsgarten");
        break;
    }
    case 350411:
    {
        returnValue = F("Zum Scheidt");
        break;
    }
    case 350412:
    {
        returnValue = F("Zum Scheidtfeld");
        break;
    }
    case 350413:
    {
        returnValue = F("Zum Scheidtweg");
        break;
    }
    case 350414:
    {
        returnValue = F("Zum Scheidwald");
        break;
    }
    case 350415:
    {
        returnValue = F("Zum Scheidweg");
        break;
    }
    case 350416:
    {
        returnValue = F("Zum Schelderhof");
        break;
    }
    case 350417:
    {
        returnValue = F("Zum Schelderhoff");
        break;
    }
    case 350418:
    {
        returnValue = F("Zum Schelland");
        break;
    }
    case 350419:
    {
        returnValue = F("Zum Schellberg");
        break;
    }
    case 350420:
    {
        returnValue = F("Zum Schellenberg");
        break;
    }
    case 350421:
    {
        returnValue = F("Zum Schellenborn");
        break;
    }
    case 350422:
    {
        returnValue = F("Zum Schellhorn");
        break;
    }
    case 350423:
    {
        returnValue = F("Zum Schelmenrod");
        break;
    }
    case 350424:
    {
        returnValue = F("Zum Schelmenwasen");
        break;
    }
    case 350425:
    {
        returnValue = F("Zum Schelpberg");
        break;
    }
    case 350426:
    {
        returnValue = F("Zum Schemel");
        break;
    }
    case 350427:
    {
        returnValue = F("Zum Schemmergrund");
        break;
    }
    case 350428:
    {
        returnValue = F("Zum Schenkteich");
        break;
    }
    case 350429:
    {
        returnValue = F("Zum Scherbusch");
        break;
    }
    case 350430:
    {
        returnValue = F("Zum Scherbüchel");
        break;
    }
    case 350431:
    {
        returnValue = F("Zum Scherengraben");
        break;
    }
    case 350432:
    {
        returnValue = F("Zum Scherpenberg");
        break;
    }
    case 350433:
    {
        returnValue = F("Zum Schevenkamp");
        break;
    }
    case 350434:
    {
        returnValue = F("Zum Schewenbarg");
        break;
    }
    case 350435:
    {
        returnValue = F("Zum Schickerhof");
        break;
    }
    case 350436:
    {
        returnValue = F("Zum Schiebberg");
        break;
    }
    case 350437:
    {
        returnValue = F("Zum Schiebenscheid");
        break;
    }
    case 350438:
    {
        returnValue = F("Zum Schieberg");
        break;
    }
    case 350439:
    {
        returnValue = F("Zum Schiefen Berg");
        break;
    }
    case 350440:
    {
        returnValue = F("Zum Schiefen Tal");
        break;
    }
    case 350441:
    {
        returnValue = F("Zum Schiefer");
        break;
    }
    case 350442:
    {
        returnValue = F("Zum Schieferberg");
        break;
    }
    case 350443:
    {
        returnValue = F("Zum Schieferfeld");
        break;
    }
    case 350444:
    {
        returnValue = F("Zum Schieferstein");
        break;
    }
    case 350445:
    {
        returnValue = F("Zum Schienerberg");
        break;
    }
    case 350446:
    {
        returnValue = F("Zum Schierenfeld");
        break;
    }
    case 350447:
    {
        returnValue = F("Zum Schierey");
        break;
    }
    case 350448:
    {
        returnValue = F("Zum Schierholzberg");
        break;
    }
    case 350449:
    {
        returnValue = F("Zum Schiersteiner Grund");
        break;
    }
    case 350450:
    {
        returnValue = F("Zum Schießberg");
        break;
    }
    case 350451:
    {
        returnValue = F("Zum Schießplatz");
        break;
    }
    case 350452:
    {
        returnValue = F("Zum Schießstand");
        break;
    }
    case 350453:
    {
        returnValue = F("Zum Schießwasen");
        break;
    }
    case 350454:
    {
        returnValue = F("Zum Schiffgrund");
        break;
    }
    case 350455:
    {
        returnValue = F("Zum Schifftal");
        break;
    }
    case 350456:
    {
        returnValue = F("Zum Schilbengrund");
        break;
    }
    case 350457:
    {
        returnValue = F("Zum Schildetal");
        break;
    }
    case 350458:
    {
        returnValue = F("Zum Schilf");
        break;
    }
    case 350459:
    {
        returnValue = F("Zum Schilfgürtel");
        break;
    }
    case 350460:
    {
        returnValue = F("Zum Schillergrund");
        break;
    }
    case 350461:
    {
        returnValue = F("Zum Schillert");
        break;
    }
    case 350462:
    {
        returnValue = F("Zum Schilzkopf");
        break;
    }
    case 350463:
    {
        returnValue = F("Zum Schimberg");
        break;
    }
    case 350464:
    {
        returnValue = F("Zum Schindertal");
        break;
    }
    case 350465:
    {
        returnValue = F("Zum Schindsattel");
        break;
    }
    case 350466:
    {
        returnValue = F("Zum Schindwald");
        break;
    }
    case 350467:
    {
        returnValue = F("Zum Schirumer Leegmoor");
        break;
    }
    case 350468:
    {
        returnValue = F("Zum Schlachtfeld");
        break;
    }
    case 350469:
    {
        returnValue = F("Zum Schlachthof");
        break;
    }
    case 350470:
    {
        returnValue = F("Zum Schlackenberg");
        break;
    }
    case 350471:
    {
        returnValue = F("Zum Schlackenbölt");
        break;
    }
    case 350472:
    {
        returnValue = F("Zum Schlafbühl");
        break;
    }
    case 350473:
    {
        returnValue = F("Zum Schlag");
        break;
    }
    case 350474:
    {
        returnValue = F("Zum Schlagacker");
        break;
    }
    case 350475:
    {
        returnValue = F("Zum Schlagbaum");
        break;
    }
    case 350476:
    {
        returnValue = F("Zum Schlage");
        break;
    }
    case 350477:
    {
        returnValue = F("Zum Schlagen");
        break;
    }
    case 350478:
    {
        returnValue = F("Zum Schlahn");
        break;
    }
    case 350479:
    {
        returnValue = F("Zum Schlangenbrunn");
        break;
    }
    case 350480:
    {
        returnValue = F("Zum Schlangengraben");
        break;
    }
    case 350481:
    {
        returnValue = F("Zum Schlangenwühl");
        break;
    }
    case 350482:
    {
        returnValue = F("Zum Schlankerberg");
        break;
    }
    case 350483:
    {
        returnValue = F("Zum Schlatt");
        break;
    }
    case 350484:
    {
        returnValue = F("Zum Schlattberg");
        break;
    }
    case 350485:
    {
        returnValue = F("Zum Schlegel");
        break;
    }
    case 350486:
    {
        returnValue = F("Zum Schlegelhof");
        break;
    }
    case 350487:
    {
        returnValue = F("Zum Schlehenberg");
        break;
    }
    case 350488:
    {
        returnValue = F("Zum Schlehenbusch");
        break;
    }
    case 350489:
    {
        returnValue = F("Zum Schleiderweg");
        break;
    }
    case 350490:
    {
        returnValue = F("Zum Schleifbach");
        break;
    }
    case 350491:
    {
        returnValue = F("Zum Schleifweiher");
        break;
    }
    case 350492:
    {
        returnValue = F("Zum Schleusengrund");
        break;
    }
    case 350493:
    {
        returnValue = F("Zum Schleusenkolk");
        break;
    }
    case 350494:
    {
        returnValue = F("Zum Schleusenpark");
        break;
    }
    case 350495:
    {
        returnValue = F("Zum Schleypenhof");
        break;
    }
    case 350496:
    {
        returnValue = F("Zum Schlichshof");
        break;
    }
    case 350497:
    {
        returnValue = F("Zum Schlicksacker");
        break;
    }
    case 350498:
    {
        returnValue = F("Zum Schlieffenberger See");
        break;
    }
    case 350499:
    {
        returnValue = F("Zum Schlingenbach");
        break;
    }
    case 350500:
    {
        returnValue = F("Zum Schlinkenborn");
        break;
    }
    case 350501:
    {
        returnValue = F("Zum Schlinkenwinkel");
        break;
    }
    case 350502:
    {
        returnValue = F("Zum Schlittental");
        break;
    }
    case 350503:
    {
        returnValue = F("Zum Schlittweg");
        break;
    }
    case 350504:
    {
        returnValue = F("Zum Schloff");
        break;
    }
    case 350505:
    {
        returnValue = F("Zum Schloss");
        break;
    }
    case 350506:
    {
        returnValue = F("Zum Schlossberg");
        break;
    }
    case 350507:
    {
        returnValue = F("Zum Schlossblick");
        break;
    }
    case 350508:
    {
        returnValue = F("Zum Schlossgrund");
        break;
    }
    case 350509:
    {
        returnValue = F("Zum Schlosspark");
        break;
    }
    case 350510:
    {
        returnValue = F("Zum Schlossturm");
        break;
    }
    case 350511:
    {
        returnValue = F("Zum Schlott");
        break;
    }
    case 350512:
    {
        returnValue = F("Zum Schloß");
        break;
    }
    case 350513:
    {
        returnValue = F("Zum Schloß Oberwerries");
        break;
    }
    case 350514:
    {
        returnValue = F("Zum Schloßberg");
        break;
    }
    case 350515:
    {
        returnValue = F("Zum Schloßblick");
        break;
    }
    case 350516:
    {
        returnValue = F("Zum Schloßloh");
        break;
    }
    case 350517:
    {
        returnValue = F("Zum Schloßpark");
        break;
    }
    case 350518:
    {
        returnValue = F("Zum Schloßteich");
        break;
    }
    case 350519:
    {
        returnValue = F("Zum Schluchtor");
        break;
    }
    case 350520:
    {
        returnValue = F("Zum Schlösschen");
        break;
    }
    case 350521:
    {
        returnValue = F("Zum Schlösserblick");
        break;
    }
    case 350522:
    {
        returnValue = F("Zum Schlössle");
        break;
    }
    case 350523:
    {
        returnValue = F("Zum Schlössli");
        break;
    }
    case 350524:
    {
        returnValue = F("Zum Schlößchen");
        break;
    }
    case 350525:
    {
        returnValue = F("Zum Schlößle");
        break;
    }
    case 350526:
    {
        returnValue = F("Zum Schlüchtern");
        break;
    }
    case 350527:
    {
        returnValue = F("Zum Schlüchttal");
        break;
    }
    case 350528:
    {
        returnValue = F("Zum Schlüsbeker Moor");
        break;
    }
    case 350529:
    {
        returnValue = F("Zum Schlüssel");
        break;
    }
    case 350530:
    {
        returnValue = F("Zum Schlüsselberg");
        break;
    }
    case 350531:
    {
        returnValue = F("Zum Schlüsselbrink");
        break;
    }
    case 350532:
    {
        returnValue = F("Zum Schlüsselstein");
        break;
    }
    case 350533:
    {
        returnValue = F("Zum Schmale Behl");
        break;
    }
    case 350534:
    {
        returnValue = F("Zum Schmalhans");
        break;
    }
    case 350535:
    {
        returnValue = F("Zum Schmalzfels");
        break;
    }
    case 350536:
    {
        returnValue = F("Zum Schmandsack");
        break;
    }
    case 350537:
    {
        returnValue = F("Zum Schmarloh");
        break;
    }
    case 350538:
    {
        returnValue = F("Zum Schmelitz");
        break;
    }
    case 350539:
    {
        returnValue = F("Zum Schmelzhof");
        break;
    }
    case 350540:
    {
        returnValue = F("Zum Schmelztiegel");
        break;
    }
    case 350541:
    {
        returnValue = F("Zum Schmerberg");
        break;
    }
    case 350542:
    {
        returnValue = F("Zum Schmied");
        break;
    }
    case 350543:
    {
        returnValue = F("Zum Schmiedeberg");
        break;
    }
    case 350544:
    {
        returnValue = F("Zum Schmiedebrink");
        break;
    }
    case 350545:
    {
        returnValue = F("Zum Schmiedefeuer");
        break;
    }
    case 350546:
    {
        returnValue = F("Zum Schmiedeplatz");
        break;
    }
    case 350547:
    {
        returnValue = F("Zum Schmiedetor");
        break;
    }
    case 350548:
    {
        returnValue = F("Zum Schmiedeweg");
        break;
    }
    case 350549:
    {
        returnValue = F("Zum Schmittenberg");
        break;
    }
    case 350550:
    {
        returnValue = F("Zum Schmittenfeld");
        break;
    }
    case 350551:
    {
        returnValue = F("Zum Schmitterberg");
        break;
    }
    case 350552:
    {
        returnValue = F("Zum Schmitzbusch");
        break;
    }
    case 350553:
    {
        returnValue = F("Zum Schmitzpohl");
        break;
    }
    case 350554:
    {
        returnValue = F("Zum Schmoofeld");
        break;
    }
    case 350555:
    {
        returnValue = F("Zum Schmooksberg");
        break;
    }
    case 350556:
    {
        returnValue = F("Zum Schmuttertal");
        break;
    }
    case 350557:
    {
        returnValue = F("Zum Schmälzling");
        break;
    }
    case 350558:
    {
        returnValue = F("Zum Schnakenpohl");
        break;
    }
    case 350559:
    {
        returnValue = F("Zum Schnakenwinkel");
        break;
    }
    case 350560:
    {
        returnValue = F("Zum Schneckenacker");
        break;
    }
    case 350561:
    {
        returnValue = F("Zum Schneckenberg");
        break;
    }
    case 350562:
    {
        returnValue = F("Zum Schneckenbühl");
        break;
    }
    case 350563:
    {
        returnValue = F("Zum Schneckenstein");
        break;
    }
    case 350564:
    {
        returnValue = F("Zum Schneebach");
        break;
    }
    case 350565:
    {
        returnValue = F("Zum Schneekasten");
        break;
    }
    case 350566:
    {
        returnValue = F("Zum Schneiderkamp");
        break;
    }
    case 350567:
    {
        returnValue = F("Zum Schnellberg");
        break;
    }
    case 350568:
    {
        returnValue = F("Zum Schnellenhof");
        break;
    }
    case 350569:
    {
        returnValue = F("Zum Schnellert");
        break;
    }
    case 350570:
    {
        returnValue = F("Zum Schnepfenberg");
        break;
    }
    case 350571:
    {
        returnValue = F("Zum Schnepfenflug");
        break;
    }
    case 350572:
    {
        returnValue = F("Zum Schnepfenhain");
        break;
    }
    case 350573:
    {
        returnValue = F("Zum Schnepfenstein");
        break;
    }
    case 350574:
    {
        returnValue = F("Zum Schnüffel");
        break;
    }
    case 350575:
    {
        returnValue = F("Zum Schoerk");
        break;
    }
    case 350576:
    {
        returnValue = F("Zum Schohfelder");
        break;
    }
    case 350577:
    {
        returnValue = F("Zum Schollberg");
        break;
    }
    case 350578:
    {
        returnValue = F("Zum Schombert");
        break;
    }
    case 350579:
    {
        returnValue = F("Zum Schondratal");
        break;
    }
    case 350580:
    {
        returnValue = F("Zum Schoofmoor");
        break;
    }
    case 350581:
    {
        returnValue = F("Zum Schoolbrink");
        break;
    }
    case 350582:
    {
        returnValue = F("Zum Schoppenbrink");
        break;
    }
    case 350583:
    {
        returnValue = F("Zum Schorer");
        break;
    }
    case 350584:
    {
        returnValue = F("Zum Schorfhagen");
        break;
    }
    case 350585:
    {
        returnValue = F("Zum Schornstein");
        break;
    }
    case 350586:
    {
        returnValue = F("Zum Schorrberg");
        break;
    }
    case 350587:
    {
        returnValue = F("Zum Schorren");
        break;
    }
    case 350588:
    {
        returnValue = F("Zum Schottengrund");
        break;
    }
    case 350589:
    {
        returnValue = F("Zum Schotzberg");
        break;
    }
    case 350590:
    {
        returnValue = F("Zum Schreibeberg");
        break;
    }
    case 350591:
    {
        returnValue = F("Zum Schreibersgraben");
        break;
    }
    case 350592:
    {
        returnValue = F("Zum Schroteblick");
        break;
    }
    case 350593:
    {
        returnValue = F("Zum Schräg");
        break;
    }
    case 350594:
    {
        returnValue = F("Zum Schulacker");
        break;
    }
    case 350595:
    {
        returnValue = F("Zum Schulberg");
        break;
    }
    case 350596:
    {
        returnValue = F("Zum Schulbusch");
        break;
    }
    case 350597:
    {
        returnValue = F("Zum Schuldthof");
        break;
    }
    case 350598:
    {
        returnValue = F("Zum Schulgarten");
        break;
    }
    case 350599:
    {
        returnValue = F("Zum Schulgraben");
        break;
    }
    case 350600:
    {
        returnValue = F("Zum Schulhof");
        break;
    }
    case 350601:
    {
        returnValue = F("Zum Schulkamp");
        break;
    }
    case 350602:
    {
        returnValue = F("Zum Schullandheim");
        break;
    }
    case 350603:
    {
        returnValue = F("Zum Schulmeisterweg");
        break;
    }
    case 350604:
    {
        returnValue = F("Zum Schulpatt");
        break;
    }
    case 350605:
    {
        returnValue = F("Zum Schulplatz");
        break;
    }
    case 350606:
    {
        returnValue = F("Zum Schulsberg");
        break;
    }
    case 350607:
    {
        returnValue = F("Zum Schultengrund");
        break;
    }
    case 350608:
    {
        returnValue = F("Zum Schultenhof");
        break;
    }
    case 350609:
    {
        returnValue = F("Zum Schultenhook");
        break;
    }
    case 350610:
    {
        returnValue = F("Zum Schulwald");
        break;
    }
    case 350611:
    {
        returnValue = F("Zum Schulzenberg");
        break;
    }
    case 350612:
    {
        returnValue = F("Zum Schulzenhof");
        break;
    }
    case 350613:
    {
        returnValue = F("Zum Schulzentrum");
        break;
    }
    case 350614:
    {
        returnValue = F("Zum Schuntertal");
        break;
    }
    case 350615:
    {
        returnValue = F("Zum Schussenursprung");
        break;
    }
    case 350616:
    {
        returnValue = F("Zum Schusterberg");
        break;
    }
    case 350617:
    {
        returnValue = F("Zum Schusterwald");
        break;
    }
    case 350618:
    {
        returnValue = F("Zum Schusterwehr");
        break;
    }
    case 350619:
    {
        returnValue = F("Zum Schutzengel");
        break;
    }
    case 350620:
    {
        returnValue = F("Zum Schwalbenherd");
        break;
    }
    case 350621:
    {
        returnValue = F("Zum Schwalbenhof");
        break;
    }
    case 350622:
    {
        returnValue = F("Zum Schwalbennest");
        break;
    }
    case 350623:
    {
        returnValue = F("Zum Schwalenberg");
        break;
    }
    case 350624:
    {
        returnValue = F("Zum Schwalmblick");
        break;
    }
    case 350625:
    {
        returnValue = F("Zum Schwanberg");
        break;
    }
    case 350626:
    {
        returnValue = F("Zum Schwanenborn");
        break;
    }
    case 350627:
    {
        returnValue = F("Zum Schwanenhals");
        break;
    }
    case 350628:
    {
        returnValue = F("Zum Schwanenteich");
        break;
    }
    case 350629:
    {
        returnValue = F("Zum Schwanenufer");
        break;
    }
    case 350630:
    {
        returnValue = F("Zum Schwarzachtal");
        break;
    }
    case 350631:
    {
        returnValue = F("Zum Schwarzbach");
        break;
    }
    case 350632:
    {
        returnValue = F("Zum Schwarzebruch");
        break;
    }
    case 350633:
    {
        returnValue = F("Zum Schwarzen Acker");
        break;
    }
    case 350634:
    {
        returnValue = F("Zum Schwarzen Baum");
        break;
    }
    case 350635:
    {
        returnValue = F("Zum Schwarzen Berg");
        break;
    }
    case 350636:
    {
        returnValue = F("Zum Schwarzen Brunnen");
        break;
    }
    case 350637:
    {
        returnValue = F("Zum Schwarzen Kamp");
        break;
    }
    case 350638:
    {
        returnValue = F("Zum Schwarzen Mann");
        break;
    }
    case 350639:
    {
        returnValue = F("Zum Schwarzen See");
        break;
    }
    case 350640:
    {
        returnValue = F("Zum Schwarzen Vehn");
        break;
    }
    case 350641:
    {
        returnValue = F("Zum Schwarzenberg");
        break;
    }
    case 350642:
    {
        returnValue = F("Zum Schwarzhof");
        break;
    }
    case 350643:
    {
        returnValue = F("Zum Schwarzwaldblick");
        break;
    }
    case 350644:
    {
        returnValue = F("Zum Schwedenfelsen");
        break;
    }
    case 350645:
    {
        returnValue = F("Zum Schwedenstein");
        break;
    }
    case 350646:
    {
        returnValue = F("Zum Schwedenturm");
        break;
    }
    case 350647:
    {
        returnValue = F("Zum Schweigelsee");
        break;
    }
    case 350648:
    {
        returnValue = F("Zum Schweigert");
        break;
    }
    case 350649:
    {
        returnValue = F("Zum Schweineberg");
        break;
    }
    case 350650:
    {
        returnValue = F("Zum Schweinesand");
        break;
    }
    case 350651:
    {
        returnValue = F("Zum Schweizerhaus");
        break;
    }
    case 350652:
    {
        returnValue = F("Zum Schwimmbad");
        break;
    }
    case 350653:
    {
        returnValue = F("Zum Schwingetal");
        break;
    }
    case 350654:
    {
        returnValue = F("Zum Schwärmshof");
        break;
    }
    case 350655:
    {
        returnValue = F("Zum Schwärzelsberg");
        break;
    }
    case 350656:
    {
        returnValue = F("Zum Schwärzesee");
        break;
    }
    case 350657:
    {
        returnValue = F("Zum Schäferberg");
        break;
    }
    case 350658:
    {
        returnValue = F("Zum Schäferborn");
        break;
    }
    case 350659:
    {
        returnValue = F("Zum Schäfergarten");
        break;
    }
    case 350660:
    {
        returnValue = F("Zum Schäferhof");
        break;
    }
    case 350661:
    {
        returnValue = F("Zum Schäferkaten");
        break;
    }
    case 350662:
    {
        returnValue = F("Zum Schäferkreuz");
        break;
    }
    case 350663:
    {
        returnValue = F("Zum Schäferköppel");
        break;
    }
    case 350664:
    {
        returnValue = F("Zum Schäferort");
        break;
    }
    case 350665:
    {
        returnValue = F("Zum Schäfersbuckel");
        break;
    }
    case 350666:
    {
        returnValue = F("Zum Schäfersfeld");
        break;
    }
    case 350667:
    {
        returnValue = F("Zum Schäferstein");
        break;
    }
    case 350668:
    {
        returnValue = F("Zum Schäferstuhl");
        break;
    }
    case 350669:
    {
        returnValue = F("Zum Schäferteich");
        break;
    }
    case 350670:
    {
        returnValue = F("Zum Schänkenbrünnle");
        break;
    }
    case 350671:
    {
        returnValue = F("Zum Schöffengrund");
        break;
    }
    case 350672:
    {
        returnValue = F("Zum Schöffenstuhl");
        break;
    }
    case 350673:
    {
        returnValue = F("Zum Schöllkopf");
        break;
    }
    case 350674:
    {
        returnValue = F("Zum Schönauer Holz");
        break;
    }
    case 350675:
    {
        returnValue = F("Zum Schönberg");
        break;
    }
    case 350676:
    {
        returnValue = F("Zum Schönbichl");
        break;
    }
    case 350677:
    {
        returnValue = F("Zum Schönblick");
        break;
    }
    case 350678:
    {
        returnValue = F("Zum Schöneberg");
        break;
    }
    case 350679:
    {
        returnValue = F("Zum Schönemarkt");
        break;
    }
    case 350680:
    {
        returnValue = F("Zum Schönen Stein");
        break;
    }
    case 350681:
    {
        returnValue = F("Zum Schönenfelde");
        break;
    }
    case 350682:
    {
        returnValue = F("Zum Schönfeld");
        break;
    }
    case 350683:
    {
        returnValue = F("Zum Schönholz");
        break;
    }
    case 350684:
    {
        returnValue = F("Zum Schönsfelde");
        break;
    }
    case 350685:
    {
        returnValue = F("Zum Schöpfwerk");
        break;
    }
    case 350686:
    {
        returnValue = F("Zum Schöttelbach");
        break;
    }
    case 350687:
    {
        returnValue = F("Zum Schöttelbruch");
        break;
    }
    case 350688:
    {
        returnValue = F("Zum Schünenkamp");
        break;
    }
    case 350689:
    {
        returnValue = F("Zum Schürbusch");
        break;
    }
    case 350690:
    {
        returnValue = F("Zum Schürenbrink");
        break;
    }
    case 350691:
    {
        returnValue = F("Zum Schürmannsgraben");
        break;
    }
    case 350692:
    {
        returnValue = F("Zum Schürsiek");
        break;
    }
    case 350693:
    {
        returnValue = F("Zum Schütterle");
        break;
    }
    case 350694:
    {
        returnValue = F("Zum Schützenberg");
        break;
    }
    case 350695:
    {
        returnValue = F("Zum Schützenbruch");
        break;
    }
    case 350696:
    {
        returnValue = F("Zum Schützenfeld");
        break;
    }
    case 350697:
    {
        returnValue = F("Zum Schützengrund");
        break;
    }
    case 350698:
    {
        returnValue = F("Zum Schützenhaus");
        break;
    }
    case 350699:
    {
        returnValue = F("Zum Schützenheim");
        break;
    }
    case 350700:
    {
        returnValue = F("Zum Schützenhof");
        break;
    }
    case 350701:
    {
        returnValue = F("Zum Schützenplatz");
        break;
    }
    case 350702:
    {
        returnValue = F("Zum Schützenwald");
        break;
    }
    case 350703:
    {
        returnValue = F("Zum Sebaldsbrücker Bahnhof");
        break;
    }
    case 350704:
    {
        returnValue = F("Zum Sebaldushof");
        break;
    }
    case 350705:
    {
        returnValue = F("Zum Sechsacker");
        break;
    }
    case 350706:
    {
        returnValue = F("Zum See");
        break;
    }
    case 350707:
    {
        returnValue = F("Zum Seeanger");
        break;
    }
    case 350708:
    {
        returnValue = F("Zum Seebach");
        break;
    }
    case 350709:
    {
        returnValue = F("Zum Seebad");
        break;
    }
    case 350710:
    {
        returnValue = F("Zum Seeberg");
        break;
    }
    case 350711:
    {
        returnValue = F("Zum Seebisch");
        break;
    }
    case 350712:
    {
        returnValue = F("Zum Seeblick");
        break;
    }
    case 350713:
    {
        returnValue = F("Zum Seebruch");
        break;
    }
    case 350714:
    {
        returnValue = F("Zum Seebügl");
        break;
    }
    case 350715:
    {
        returnValue = F("Zum Seebühl");
        break;
    }
    case 350716:
    {
        returnValue = F("Zum Seechen");
        break;
    }
    case 350717:
    {
        returnValue = F("Zum Seefeld");
        break;
    }
    case 350718:
    {
        returnValue = F("Zum Seeg");
        break;
    }
    case 350719:
    {
        returnValue = F("Zum Seegarten");
        break;
    }
    case 350720:
    {
        returnValue = F("Zum Seegen");
        break;
    }
    case 350721:
    {
        returnValue = F("Zum Seegestell");
        break;
    }
    case 350722:
    {
        returnValue = F("Zum Seegraben");
        break;
    }
    case 350723:
    {
        returnValue = F("Zum Seegrund");
        break;
    }
    case 350724:
    {
        returnValue = F("Zum Seehaus");
        break;
    }
    case 350725:
    {
        returnValue = F("Zum Seehof");
        break;
    }
    case 350726:
    {
        returnValue = F("Zum Seehöfer Weg");
        break;
    }
    case 350727:
    {
        returnValue = F("Zum Seeleshof");
        break;
    }
    case 350728:
    {
        returnValue = F("Zum Seeloch");
        break;
    }
    case 350729:
    {
        returnValue = F("Zum Seemenbach");
        break;
    }
    case 350730:
    {
        returnValue = F("Zum Seemoor");
        break;
    }
    case 350731:
    {
        returnValue = F("Zum Seerabenberg");
        break;
    }
    case 350732:
    {
        returnValue = F("Zum Seesen");
        break;
    }
    case 350733:
    {
        returnValue = F("Zum Seesteg");
        break;
    }
    case 350734:
    {
        returnValue = F("Zum Seestellchen");
        break;
    }
    case 350735:
    {
        returnValue = F("Zum Seeteich");
        break;
    }
    case 350736:
    {
        returnValue = F("Zum Seeweg");
        break;
    }
    case 350737:
    {
        returnValue = F("Zum Seeweiher");
        break;
    }
    case 350738:
    {
        returnValue = F("Zum Segen Gottes");
        break;
    }
    case 350739:
    {
        returnValue = F("Zum Segengraben");
        break;
    }
    case 350740:
    {
        returnValue = F("Zum Seglerblick");
        break;
    }
    case 350741:
    {
        returnValue = F("Zum Seglerhafen");
        break;
    }
    case 350742:
    {
        returnValue = F("Zum Seibelsbach");
        break;
    }
    case 350743:
    {
        returnValue = F("Zum Seidengarten");
        break;
    }
    case 350744:
    {
        returnValue = F("Zum Seifen");
        break;
    }
    case 350745:
    {
        returnValue = F("Zum Seifenbach");
        break;
    }
    case 350746:
    {
        returnValue = F("Zum Seifengraben");
        break;
    }
    case 350747:
    {
        returnValue = F("Zum Seifer Wald");
        break;
    }
    case 350748:
    {
        returnValue = F("Zum Seilbahnberg");
        break;
    }
    case 350749:
    {
        returnValue = F("Zum Seilergraben");
        break;
    }
    case 350750:
    {
        returnValue = F("Zum Seilfahrtschacht");
        break;
    }
    case 350751:
    {
        returnValue = F("Zum Seinitzer Moor");
        break;
    }
    case 350752:
    {
        returnValue = F("Zum Seitersberg");
        break;
    }
    case 350753:
    {
        returnValue = F("Zum Selgenberg");
        break;
    }
    case 350754:
    {
        returnValue = F("Zum Seligmacher");
        break;
    }
    case 350755:
    {
        returnValue = F("Zum Selsberg");
        break;
    }
    case 350756:
    {
        returnValue = F("Zum Seltengraben");
        break;
    }
    case 350757:
    {
        returnValue = F("Zum Sender");
        break;
    }
    case 350758:
    {
        returnValue = F("Zum Senftenberg");
        break;
    }
    case 350759:
    {
        returnValue = F("Zum Sengbachtal");
        break;
    }
    case 350760:
    {
        returnValue = F("Zum Sengel");
        break;
    }
    case 350761:
    {
        returnValue = F("Zum Sengeswald");
        break;
    }
    case 350762:
    {
        returnValue = F("Zum Sengscheider Tal");
        break;
    }
    case 350763:
    {
        returnValue = F("Zum Senkenberg");
        break;
    }
    case 350764:
    {
        returnValue = F("Zum Sernitzbruch");
        break;
    }
    case 350765:
    {
        returnValue = F("Zum Sesselsgraben");
        break;
    }
    case 350766:
    {
        returnValue = F("Zum Seth");
        break;
    }
    case 350767:
    {
        returnValue = F("Zum Setzer");
        break;
    }
    case 350768:
    {
        returnValue = F("Zum Sevenicher Kreuz");
        break;
    }
    case 350769:
    {
        returnValue = F("Zum Sickenhöfer See");
        break;
    }
    case 350770:
    {
        returnValue = F("Zum Sickeröder Berg");
        break;
    }
    case 350771:
    {
        returnValue = F("Zum Sickler Teich");
        break;
    }
    case 350772:
    {
        returnValue = F("Zum Siebenborn");
        break;
    }
    case 350773:
    {
        returnValue = F("Zum Siebetal");
        break;
    }
    case 350774:
    {
        returnValue = F("Zum Siechbach");
        break;
    }
    case 350775:
    {
        returnValue = F("Zum Siechenbach");
        break;
    }
    case 350776:
    {
        returnValue = F("Zum Siedehaus");
        break;
    }
    case 350777:
    {
        returnValue = F("Zum Siedlerhof");
        break;
    }
    case 350778:
    {
        returnValue = F("Zum Siedlungshof");
        break;
    }
    case 350779:
    {
        returnValue = F("Zum Siefen");
        break;
    }
    case 350780:
    {
        returnValue = F("Zum Siegblick");
        break;
    }
    case 350781:
    {
        returnValue = F("Zum Siegen");
        break;
    }
    case 350782:
    {
        returnValue = F("Zum Siek");
        break;
    }
    case 350783:
    {
        returnValue = F("Zum Siekberg");
        break;
    }
    case 350784:
    {
        returnValue = F("Zum Sieken");
        break;
    }
    case 350785:
    {
        returnValue = F("Zum Siekweg");
        break;
    }
    case 350786:
    {
        returnValue = F("Zum Siel");
        break;
    }
    case 350787:
    {
        returnValue = F("Zum Siemenshop");
        break;
    }
    case 350788:
    {
        returnValue = F("Zum Sienerweg");
        break;
    }
    case 350789:
    {
        returnValue = F("Zum Siepen");
        break;
    }
    case 350790:
    {
        returnValue = F("Zum Sietels");
        break;
    }
    case 350791:
    {
        returnValue = F("Zum Silberacker");
        break;
    }
    case 350792:
    {
        returnValue = F("Zum Silberberg");
        break;
    }
    case 350793:
    {
        returnValue = F("Zum Silberblick");
        break;
    }
    case 350794:
    {
        returnValue = F("Zum Silberbusch");
        break;
    }
    case 350795:
    {
        returnValue = F("Zum Silberkamp");
        break;
    }
    case 350796:
    {
        returnValue = F("Zum Silbermoor");
        break;
    }
    case 350797:
    {
        returnValue = F("Zum Silbernagel");
        break;
    }
    case 350798:
    {
        returnValue = F("Zum Silberrain");
        break;
    }
    case 350799:
    {
        returnValue = F("Zum Silbersee");
        break;
    }
    case 350800:
    {
        returnValue = F("Zum Silbersiefen");
        break;
    }
    case 350801:
    {
        returnValue = F("Zum Silberstein");
        break;
    }
    case 350802:
    {
        returnValue = F("Zum Silberwald");
        break;
    }
    case 350803:
    {
        returnValue = F("Zum Silixer Hagen");
        break;
    }
    case 350804:
    {
        returnValue = F("Zum Silverberg");
        break;
    }
    case 350805:
    {
        returnValue = F("Zum Simmel");
        break;
    }
    case 350806:
    {
        returnValue = F("Zum Simmig");
        break;
    }
    case 350807:
    {
        returnValue = F("Zum Simonsbusch");
        break;
    }
    case 350808:
    {
        returnValue = F("Zum Singenden Tal");
        break;
    }
    case 350809:
    {
        returnValue = F("Zum Singer Berg");
        break;
    }
    case 350810:
    {
        returnValue = F("Zum Sinterbühl");
        break;
    }
    case 350811:
    {
        returnValue = F("Zum Sitroth");
        break;
    }
    case 350812:
    {
        returnValue = F("Zum Sitters");
        break;
    }
    case 350813:
    {
        returnValue = F("Zum Sixbach");
        break;
    }
    case 350814:
    {
        returnValue = F("Zum Slip");
        break;
    }
    case 350815:
    {
        returnValue = F("Zum Soagberg");
        break;
    }
    case 350816:
    {
        returnValue = F("Zum Sobertsbrunnen");
        break;
    }
    case 350817:
    {
        returnValue = F("Zum Soden");
        break;
    }
    case 350818:
    {
        returnValue = F("Zum Soesteufer");
        break;
    }
    case 350819:
    {
        returnValue = F("Zum Sohl");
        break;
    }
    case 350820:
    {
        returnValue = F("Zum Solarkraftwerk");
        break;
    }
    case 350821:
    {
        returnValue = F("Zum Solarwerk");
        break;
    }
    case 350822:
    {
        returnValue = F("Zum Solbad");
        break;
    }
    case 350823:
    {
        returnValue = F("Zum Soll");
        break;
    }
    case 350824:
    {
        returnValue = F("Zum Soltborn");
        break;
    }
    case 350825:
    {
        returnValue = F("Zum Solterberg");
        break;
    }
    case 350826:
    {
        returnValue = F("Zum Sommerbach");
        break;
    }
    case 350827:
    {
        returnValue = F("Zum Sommerberg");
        break;
    }
    case 350828:
    {
        returnValue = F("Zum Sommerbrink");
        break;
    }
    case 350829:
    {
        returnValue = F("Zum Sommerfeld");
        break;
    }
    case 350830:
    {
        returnValue = F("Zum Sommerkeller");
        break;
    }
    case 350831:
    {
        returnValue = F("Zum Sommersberg");
        break;
    }
    case 350832:
    {
        returnValue = F("Zum Sonneberg");
        break;
    }
    case 350833:
    {
        returnValue = F("Zum Sonneborn");
        break;
    }
    case 350834:
    {
        returnValue = F("Zum Sonnenbach");
        break;
    }
    case 350835:
    {
        returnValue = F("Zum Sonnenberg");
        break;
    }
    case 350836:
    {
        returnValue = F("Zum Sonnenbergle");
        break;
    }
    case 350837:
    {
        returnValue = F("Zum Sonnenblick");
        break;
    }
    case 350838:
    {
        returnValue = F("Zum Sonnenborn");
        break;
    }
    case 350839:
    {
        returnValue = F("Zum Sonnenbrink");
        break;
    }
    case 350840:
    {
        returnValue = F("Zum Sonnenfeld");
        break;
    }
    case 350841:
    {
        returnValue = F("Zum Sonnenfelsen");
        break;
    }
    case 350842:
    {
        returnValue = F("Zum Sonnengarten");
        break;
    }
    case 350843:
    {
        returnValue = F("Zum Sonnenhang");
        break;
    }
    case 350844:
    {
        returnValue = F("Zum Sonnenhof");
        break;
    }
    case 350845:
    {
        returnValue = F("Zum Sonnenhügel");
        break;
    }
    case 350846:
    {
        returnValue = F("Zum Sonnenpark");
        break;
    }
    case 350847:
    {
        returnValue = F("Zum Sonnenrödchen");
        break;
    }
    case 350848:
    {
        returnValue = F("Zum Sonnenschein");
        break;
    }
    case 350849:
    {
        returnValue = F("Zum Sonnensee");
        break;
    }
    case 350850:
    {
        returnValue = F("Zum Sonnentau");
        break;
    }
    case 350851:
    {
        returnValue = F("Zum Sonnenufer");
        break;
    }
    case 350852:
    {
        returnValue = F("Zum Sonnenuntergang");
        break;
    }
    case 350853:
    {
        returnValue = F("Zum Sonnenwald");
        break;
    }
    case 350854:
    {
        returnValue = F("Zum Sonnenweg");
        break;
    }
    case 350855:
    {
        returnValue = F("Zum Sonnenwinkel");
        break;
    }
    case 350856:
    {
        returnValue = F("Zum Sonnerhauf");
        break;
    }
    case 350857:
    {
        returnValue = F("Zum Sonsfelde");
        break;
    }
    case 350858:
    {
        returnValue = F("Zum Sool");
        break;
    }
    case 350859:
    {
        returnValue = F("Zum Soonwaldblick");
        break;
    }
    case 350860:
    {
        returnValue = F("Zum Sorger Pfad");
        break;
    }
    case 350861:
    {
        returnValue = F("Zum Sorpetal");
        break;
    }
    case 350862:
    {
        returnValue = F("Zum Sowelaken");
        break;
    }
    case 350863:
    {
        returnValue = F("Zum Spargelland");
        break;
    }
    case 350864:
    {
        returnValue = F("Zum Sparrenberg");
        break;
    }
    case 350865:
    {
        returnValue = F("Zum Spatzenberg");
        break;
    }
    case 350866:
    {
        returnValue = F("Zum Spatzenhaus");
        break;
    }
    case 350867:
    {
        returnValue = F("Zum Specht");
        break;
    }
    case 350868:
    {
        returnValue = F("Zum Speckberg");
        break;
    }
    case 350869:
    {
        returnValue = F("Zum Speckbuck");
        break;
    }
    case 350870:
    {
        returnValue = F("Zum Specken");
        break;
    }
    case 350871:
    {
        returnValue = F("Zum Specksteich");
        break;
    }
    case 350872:
    {
        returnValue = F("Zum Speicher");
        break;
    }
    case 350873:
    {
        returnValue = F("Zum Spellbrink");
        break;
    }
    case 350874:
    {
        returnValue = F("Zum Sperber");
        break;
    }
    case 350875:
    {
        returnValue = F("Zum Sperberwäldchen");
        break;
    }
    case 350876:
    {
        returnValue = F("Zum Sperlasberg");
        break;
    }
    case 350877:
    {
        returnValue = F("Zum Sperlingsfeld");
        break;
    }
    case 350878:
    {
        returnValue = F("Zum Spermel");
        break;
    }
    case 350879:
    {
        returnValue = F("Zum Spichrain");
        break;
    }
    case 350880:
    {
        returnValue = F("Zum Spieker");
        break;
    }
    case 350881:
    {
        returnValue = F("Zum Spieksee");
        break;
    }
    case 350882:
    {
        returnValue = F("Zum Spielpark");
        break;
    }
    case 350883:
    {
        returnValue = F("Zum Spielplatz");
        break;
    }
    case 350884:
    {
        returnValue = F("Zum Spieß");
        break;
    }
    case 350885:
    {
        returnValue = F("Zum Spießkopf");
        break;
    }
    case 350886:
    {
        returnValue = F("Zum Spitzberg");
        break;
    }
    case 350887:
    {
        returnValue = F("Zum Spitzen");
        break;
    }
    case 350888:
    {
        returnValue = F("Zum Spitzen Baum");
        break;
    }
    case 350889:
    {
        returnValue = F("Zum Spitzen Land");
        break;
    }
    case 350890:
    {
        returnValue = F("Zum Spitzen Stein");
        break;
    }
    case 350891:
    {
        returnValue = F("Zum Spitzenberg");
        break;
    }
    case 350892:
    {
        returnValue = F("Zum Spitzenhorst");
        break;
    }
    case 350893:
    {
        returnValue = F("Zum Spitzenort");
        break;
    }
    case 350894:
    {
        returnValue = F("Zum Spitzhörn");
        break;
    }
    case 350895:
    {
        returnValue = F("Zum Sport- und Freizeitzentrum");
        break;
    }
    case 350896:
    {
        returnValue = F("Zum Sportfeld");
        break;
    }
    case 350897:
    {
        returnValue = F("Zum Sportgebiet");
        break;
    }
    case 350898:
    {
        returnValue = F("Zum Sportgelände");
        break;
    }
    case 350899:
    {
        returnValue = F("Zum Sporthaus");
        break;
    }
    case 350900:
    {
        returnValue = F("Zum Sportheim");
        break;
    }
    case 350901:
    {
        returnValue = F("Zum Sportlerheim");
        break;
    }
    case 350902:
    {
        returnValue = F("Zum Sportpark");
        break;
    }
    case 350903:
    {
        returnValue = F("Zum Sportplatz");
        break;
    }
    case 350904:
    {
        returnValue = F("Zum Sportzentrum");
        break;
    }
    case 350905:
    {
        returnValue = F("Zum Spreedamm");
        break;
    }
    case 350906:
    {
        returnValue = F("Zum Spreit");
        break;
    }
    case 350907:
    {
        returnValue = F("Zum Sprengbüchel");
        break;
    }
    case 350908:
    {
        returnValue = F("Zum Sprickel");
        break;
    }
    case 350909:
    {
        returnValue = F("Zum Sprietchen");
        break;
    }
    case 350910:
    {
        returnValue = F("Zum Spring");
        break;
    }
    case 350911:
    {
        returnValue = F("Zum Springbruch");
        break;
    }
    case 350912:
    {
        returnValue = F("Zum Springer");
        break;
    }
    case 350913:
    {
        returnValue = F("Zum Springerbach");
        break;
    }
    case 350914:
    {
        returnValue = F("Zum Spritzenhaus");
        break;
    }
    case 350915:
    {
        returnValue = F("Zum Spritzenplatz");
        break;
    }
    case 350916:
    {
        returnValue = F("Zum Sprudelfeld");
        break;
    }
    case 350917:
    {
        returnValue = F("Zum Sprötzloh");
        break;
    }
    case 350918:
    {
        returnValue = F("Zum Spürklenberg");
        break;
    }
    case 350919:
    {
        returnValue = F("Zum St. Annahaus");
        break;
    }
    case 350920:
    {
        returnValue = F("Zum Staaren");
        break;
    }
    case 350921:
    {
        returnValue = F("Zum Staatsforst");
        break;
    }
    case 350922:
    {
        returnValue = F("Zum Staberl");
        break;
    }
    case 350923:
    {
        returnValue = F("Zum Stadion");
        break;
    }
    case 350924:
    {
        returnValue = F("Zum Stadtbad");
        break;
    }
    case 350925:
    {
        returnValue = F("Zum Stadtberg");
        break;
    }
    case 350926:
    {
        returnValue = F("Zum Stadtblick");
        break;
    }
    case 350927:
    {
        returnValue = F("Zum Stadtbrunnen");
        break;
    }
    case 350928:
    {
        returnValue = F("Zum Stadtgarten");
        break;
    }
    case 350929:
    {
        returnValue = F("Zum Stadtgraben");
        break;
    }
    case 350930:
    {
        returnValue = F("Zum Stadtknick");
        break;
    }
    case 350931:
    {
        returnValue = F("Zum Stadtpark");
        break;
    }
    case 350932:
    {
        returnValue = F("Zum Stadttor");
        break;
    }
    case 350933:
    {
        returnValue = F("Zum Stadtturm");
        break;
    }
    case 350934:
    {
        returnValue = F("Zum Stadtwald");
        break;
    }
    case 350935:
    {
        returnValue = F("Zum Stadtweg");
        break;
    }
    case 350936:
    {
        returnValue = F("Zum Stahlberg");
        break;
    }
    case 350937:
    {
        returnValue = F("Zum Stahlbühl");
        break;
    }
    case 350938:
    {
        returnValue = F("Zum Stallberg");
        break;
    }
    case 350939:
    {
        returnValue = F("Zum Stammfeld");
        break;
    }
    case 350940:
    {
        returnValue = F("Zum Stampf");
        break;
    }
    case 350941:
    {
        returnValue = F("Zum Stangenwald");
        break;
    }
    case 350942:
    {
        returnValue = F("Zum Stapeler Wald");
        break;
    }
    case 350943:
    {
        returnValue = F("Zum Stau");
        break;
    }
    case 350944:
    {
        returnValue = F("Zum Staudamm");
        break;
    }
    case 350945:
    {
        returnValue = F("Zum Staudchen");
        break;
    }
    case 350946:
    {
        returnValue = F("Zum Stausee");
        break;
    }
    case 350947:
    {
        returnValue = F("Zum Stauwerk");
        break;
    }
    case 350948:
    {
        returnValue = F("Zum Steckengarten");
        break;
    }
    case 350949:
    {
        returnValue = F("Zum Stecker");
        break;
    }
    case 350950:
    {
        returnValue = F("Zum Steeg");
        break;
    }
    case 350951:
    {
        returnValue = F("Zum Steegenblick");
        break;
    }
    case 350952:
    {
        returnValue = F("Zum Steeger");
        break;
    }
    case 350953:
    {
        returnValue = F("Zum Steenshoop");
        break;
    }
    case 350954:
    {
        returnValue = F("Zum Steg");
        break;
    }
    case 350955:
    {
        returnValue = F("Zum Stegacker");
        break;
    }
    case 350956:
    {
        returnValue = F("Zum Stegeberg");
        break;
    }
    case 350957:
    {
        returnValue = F("Zum Stegel");
        break;
    }
    case 350958:
    {
        returnValue = F("Zum Stegen");
        break;
    }
    case 350959:
    {
        returnValue = F("Zum Stegepfuhl");
        break;
    }
    case 350960:
    {
        returnValue = F("Zum Steggrund");
        break;
    }
    case 350961:
    {
        returnValue = F("Zum Stegweg");
        break;
    }
    case 350962:
    {
        returnValue = F("Zum Steig");
        break;
    }
    case 350963:
    {
        returnValue = F("Zum Steiger");
        break;
    }
    case 350964:
    {
        returnValue = F("Zum Steigerhaus");
        break;
    }
    case 350965:
    {
        returnValue = F("Zum Steigeturm");
        break;
    }
    case 350966:
    {
        returnValue = F("Zum Steilen");
        break;
    }
    case 350967:
    {
        returnValue = F("Zum Steilert");
        break;
    }
    case 350968:
    {
        returnValue = F("Zum Steilufer");
        break;
    }
    case 350969:
    {
        returnValue = F("Zum Steimel");
        break;
    }
    case 350970:
    {
        returnValue = F("Zum Steimerich");
        break;
    }
    case 350971:
    {
        returnValue = F("Zum Stein");
        break;
    }
    case 350972:
    {
        returnValue = F("Zum Steinacker");
        break;
    }
    case 350973:
    {
        returnValue = F("Zum Steinanger");
        break;
    }
    case 350974:
    {
        returnValue = F("Zum Steinbach");
        break;
    }
    case 350975:
    {
        returnValue = F("Zum Steinbachwald");
        break;
    }
    case 350976:
    {
        returnValue = F("Zum Steinberg");
        break;
    }
    case 350977:
    {
        returnValue = F("Zum Steinbock");
        break;
    }
    case 350978:
    {
        returnValue = F("Zum Steinborn");
        break;
    }
    case 350979:
    {
        returnValue = F("Zum Steinbruch");
        break;
    }
    case 350980:
    {
        returnValue = F("Zum Steinbrunnen");
        break;
    }
    case 350981:
    {
        returnValue = F("Zum Steinbuckel");
        break;
    }
    case 350982:
    {
        returnValue = F("Zum Steinbusch");
        break;
    }
    case 350983:
    {
        returnValue = F("Zum Steinbüchel");
        break;
    }
    case 350984:
    {
        returnValue = F("Zum Steinbügel");
        break;
    }
    case 350985:
    {
        returnValue = F("Zum Steinbühl");
        break;
    }
    case 350986:
    {
        returnValue = F("Zum Steinbülz");
        break;
    }
    case 350987:
    {
        returnValue = F("Zum Steinchen");
        break;
    }
    case 350988:
    {
        returnValue = F("Zum Steinchesbach");
        break;
    }
    case 350989:
    {
        returnValue = F("Zum Steineck");
        break;
    }
    case 350990:
    {
        returnValue = F("Zum Steinenbach");
        break;
    }
    case 350991:
    {
        returnValue = F("Zum Steinenpitter");
        break;
    }
    case 350992:
    {
        returnValue = F("Zum Steiner Wald");
        break;
    }
    case 350993:
    {
        returnValue = F("Zum Steinernen Gaul");
        break;
    }
    case 350994:
    {
        returnValue = F("Zum Steinernen Kreuz");
        break;
    }
    case 350995:
    {
        returnValue = F("Zum Steinerother Kopf");
        break;
    }
    case 350996:
    {
        returnValue = F("Zum Steinerwald");
        break;
    }
    case 350997:
    {
        returnValue = F("Zum Steineshof");
        break;
    }
    case 350998:
    {
        returnValue = F("Zum Steinfeld");
        break;
    }
    case 350999:
    {
        returnValue = F("Zum Steingarten");
        break;
    }
    case 351000:
    {
        returnValue = F("Zum Steingau");
        break;
    }
    case 351001:
    {
        returnValue = F("Zum Steingraben");
        break;
    }
    case 351002:
    {
        returnValue = F("Zum Steingrund");
        break;
    }
    case 351003:
    {
        returnValue = F("Zum Steingrüble");
        break;
    }
    case 351004:
    {
        returnValue = F("Zum Steinhauck");
        break;
    }
    case 351005:
    {
        returnValue = F("Zum Steinhauer");
        break;
    }
    case 351006:
    {
        returnValue = F("Zum Steinhauk");
        break;
    }
    case 351007:
    {
        returnValue = F("Zum Steinhaus");
        break;
    }
    case 351008:
    {
        returnValue = F("Zum Steinhof");
        break;
    }
    case 351009:
    {
        returnValue = F("Zum Steinhäuser Graben");
        break;
    }
    case 351010:
    {
        returnValue = F("Zum Steinhörnle");
        break;
    }
    case 351011:
    {
        returnValue = F("Zum Steinhübel");
        break;
    }
    case 351012:
    {
        returnValue = F("Zum Steinhügel");
        break;
    }
    case 351013:
    {
        returnValue = F("Zum Steinich");
        break;
    }
    case 351014:
    {
        returnValue = F("Zum Steinig");
        break;
    }
    case 351015:
    {
        returnValue = F("Zum Steinigt");
        break;
    }
    case 351016:
    {
        returnValue = F("Zum Steinkamp");
        break;
    }
    case 351017:
    {
        returnValue = F("Zum Steinkauz");
        break;
    }
    case 351018:
    {
        returnValue = F("Zum Steinknapp");
        break;
    }
    case 351019:
    {
        returnValue = F("Zum Steinknickle");
        break;
    }
    case 351020:
    {
        returnValue = F("Zum Steinknock");
        break;
    }
    case 351021:
    {
        returnValue = F("Zum Steinkopf");
        break;
    }
    case 351022:
    {
        returnValue = F("Zum Steinkreis");
        break;
    }
    case 351023:
    {
        returnValue = F("Zum Steinkreuz");
        break;
    }
    case 351024:
    {
        returnValue = F("Zum Steinkäulchen");
        break;
    }
    case 351025:
    {
        returnValue = F("Zum Steinköpfl");
        break;
    }
    case 351026:
    {
        returnValue = F("Zum Steinköppel");
        break;
    }
    case 351027:
    {
        returnValue = F("Zum Steinland");
        break;
    }
    case 351028:
    {
        returnValue = F("Zum Steinmorgen");
        break;
    }
    case 351029:
    {
        returnValue = F("Zum Steinofen");
        break;
    }
    case 351030:
    {
        returnValue = F("Zum Steinpleiser Bahnhof");
        break;
    }
    case 351031:
    {
        returnValue = F("Zum Steinrutsch");
        break;
    }
    case 351032:
    {
        returnValue = F("Zum Steinrücken");
        break;
    }
    case 351033:
    {
        returnValue = F("Zum Steinschmätzer");
        break;
    }
    case 351034:
    {
        returnValue = F("Zum Steinsee");
        break;
    }
    case 351035:
    {
        returnValue = F("Zum Steinstück");
        break;
    }
    case 351036:
    {
        returnValue = F("Zum Steintisch");
        break;
    }
    case 351037:
    {
        returnValue = F("Zum Steinwingert");
        break;
    }
    case 351038:
    {
        returnValue = F("Zum Steinäcker");
        break;
    }
    case 351039:
    {
        returnValue = F("Zum Steinäscher");
        break;
    }
    case 351040:
    {
        returnValue = F("Zum Steller Bahnhof");
        break;
    }
    case 351041:
    {
        returnValue = F("Zum Stellwerk");
        break;
    }
    case 351042:
    {
        returnValue = F("Zum Stemmberg");
        break;
    }
    case 351043:
    {
        returnValue = F("Zum Stempel");
        break;
    }
    case 351044:
    {
        returnValue = F("Zum Stengweiher");
        break;
    }
    case 351045:
    {
        returnValue = F("Zum Stenn");
        break;
    }
    case 351046:
    {
        returnValue = F("Zum Stephansberg");
        break;
    }
    case 351047:
    {
        returnValue = F("Zum Stephansbichl");
        break;
    }
    case 351048:
    {
        returnValue = F("Zum Stern");
        break;
    }
    case 351049:
    {
        returnValue = F("Zum Sternenbusch");
        break;
    }
    case 351050:
    {
        returnValue = F("Zum Sternplatz");
        break;
    }
    case 351051:
    {
        returnValue = F("Zum Stettelberg");
        break;
    }
    case 351052:
    {
        returnValue = F("Zum Stettenbuck");
        break;
    }
    case 351053:
    {
        returnValue = F("Zum Stetteritz");
        break;
    }
    case 351054:
    {
        returnValue = F("Zum Steumel");
        break;
    }
    case 351055:
    {
        returnValue = F("Zum Stevertal");
        break;
    }
    case 351056:
    {
        returnValue = F("Zum Stich");
        break;
    }
    case 351057:
    {
        returnValue = F("Zum Stichling");
        break;
    }
    case 351058:
    {
        returnValue = F("Zum Stickelgarten");
        break;
    }
    case 351059:
    {
        returnValue = F("Zum Stickelsteich");
        break;
    }
    case 351060:
    {
        returnValue = F("Zum Stiefel");
        break;
    }
    case 351061:
    {
        returnValue = F("Zum Stieg");
        break;
    }
    case 351062:
    {
        returnValue = F("Zum Stiegel");
        break;
    }
    case 351063:
    {
        returnValue = F("Zum Stiegemeer");
        break;
    }
    case 351064:
    {
        returnValue = F("Zum Stierenberg");
        break;
    }
    case 351065:
    {
        returnValue = F("Zum Stiffel");
        break;
    }
    case 351066:
    {
        returnValue = F("Zum Stiftsgut");
        break;
    }
    case 351067:
    {
        returnValue = F("Zum Stiftswald");
        break;
    }
    case 351068:
    {
        returnValue = F("Zum Stiftungspark");
        break;
    }
    case 351069:
    {
        returnValue = F("Zum Stig");
        break;
    }
    case 351070:
    {
        returnValue = F("Zum Stillen Frieden");
        break;
    }
    case 351071:
    {
        returnValue = F("Zum Stillen Winkel");
        break;
    }
    case 351072:
    {
        returnValue = F("Zum Stintfeld");
        break;
    }
    case 351073:
    {
        returnValue = F("Zum Stobenbrunnen");
        break;
    }
    case 351074:
    {
        returnValue = F("Zum Stock");
        break;
    }
    case 351075:
    {
        returnValue = F("Zum Stockach");
        break;
    }
    case 351076:
    {
        returnValue = F("Zum Stockberg");
        break;
    }
    case 351077:
    {
        returnValue = F("Zum Stockborner");
        break;
    }
    case 351078:
    {
        returnValue = F("Zum Stockbrunnen");
        break;
    }
    case 351079:
    {
        returnValue = F("Zum Stocksiefen");
        break;
    }
    case 351080:
    {
        returnValue = F("Zum Stockäckerweg");
        break;
    }
    case 351081:
    {
        returnValue = F("Zum Stofer");
        break;
    }
    case 351082:
    {
        returnValue = F("Zum Stollen");
        break;
    }
    case 351083:
    {
        returnValue = F("Zum Stollengang");
        break;
    }
    case 351084:
    {
        returnValue = F("Zum Stolpsee");
        break;
    }
    case 351085:
    {
        returnValue = F("Zum Stolzenberg");
        break;
    }
    case 351086:
    {
        returnValue = F("Zum Stoppelberg");
        break;
    }
    case 351087:
    {
        returnValue = F("Zum Stoppelfeld");
        break;
    }
    case 351088:
    {
        returnValue = F("Zum Storchberg");
        break;
    }
    case 351089:
    {
        returnValue = F("Zum Storchenblick");
        break;
    }
    case 351090:
    {
        returnValue = F("Zum Storchenbrünnlein");
        break;
    }
    case 351091:
    {
        returnValue = F("Zum Storchenhof");
        break;
    }
    case 351092:
    {
        returnValue = F("Zum Storchenhorst");
        break;
    }
    case 351093:
    {
        returnValue = F("Zum Storchennest");
        break;
    }
    case 351094:
    {
        returnValue = F("Zum Storkelsgrund");
        break;
    }
    case 351095:
    {
        returnValue = F("Zum Storksfeld");
        break;
    }
    case 351096:
    {
        returnValue = F("Zum Stotternheimer See");
        break;
    }
    case 351097:
    {
        returnValue = F("Zum Stoßberg");
        break;
    }
    case 351098:
    {
        returnValue = F("Zum Strahlenkamp");
        break;
    }
    case 351099:
    {
        returnValue = F("Zum Strahn");
        break;
    }
    case 351100:
    {
        returnValue = F("Zum Strand");
        break;
    }
    case 351101:
    {
        returnValue = F("Zum Strandbad");
        break;
    }
    case 351102:
    {
        returnValue = F("Zum Strande");
        break;
    }
    case 351103:
    {
        returnValue = F("Zum Strang");
        break;
    }
    case 351104:
    {
        returnValue = F("Zum Strassweiher");
        break;
    }
    case 351105:
    {
        returnValue = F("Zum Straubinger Haus");
        break;
    }
    case 351106:
    {
        returnValue = F("Zum Strauch");
        break;
    }
    case 351107:
    {
        returnValue = F("Zum Strauchberg");
        break;
    }
    case 351108:
    {
        returnValue = F("Zum Strauß");
        break;
    }
    case 351109:
    {
        returnValue = F("Zum Streb");
        break;
    }
    case 351110:
    {
        returnValue = F("Zum Strebelsberg");
        break;
    }
    case 351111:
    {
        returnValue = F("Zum Strebental");
        break;
    }
    case 351112:
    {
        returnValue = F("Zum Streich");
        break;
    }
    case 351113:
    {
        returnValue = F("Zum Streichfeld");
        break;
    }
    case 351114:
    {
        returnValue = F("Zum Streitbaum");
        break;
    }
    case 351115:
    {
        returnValue = F("Zum Streitberg");
        break;
    }
    case 351116:
    {
        returnValue = F("Zum Streitert");
        break;
    }
    case 351117:
    {
        returnValue = F("Zum Streitwald");
        break;
    }
    case 351118:
    {
        returnValue = F("Zum Stremel");
        break;
    }
    case 351119:
    {
        returnValue = F("Zum Strengenberg");
        break;
    }
    case 351120:
    {
        returnValue = F("Zum Streufling");
        break;
    }
    case 351121:
    {
        returnValue = F("Zum Striedt");
        break;
    }
    case 351122:
    {
        returnValue = F("Zum Strohberg");
        break;
    }
    case 351123:
    {
        returnValue = F("Zum Strohhaus");
        break;
    }
    case 351124:
    {
        returnValue = F("Zum Strohkamp");
        break;
    }
    case 351125:
    {
        returnValue = F("Zum Strom");
        break;
    }
    case 351126:
    {
        returnValue = F("Zum Stroodebusch");
        break;
    }
    case 351127:
    {
        returnValue = F("Zum Strothebach");
        break;
    }
    case 351128:
    {
        returnValue = F("Zum Strotkamp");
        break;
    }
    case 351129:
    {
        returnValue = F("Zum Struffelt");
        break;
    }
    case 351130:
    {
        returnValue = F("Zum Struthwald");
        break;
    }
    case 351131:
    {
        returnValue = F("Zum Struttal");
        break;
    }
    case 351132:
    {
        returnValue = F("Zum Struwwelpeter");
        break;
    }
    case 351133:
    {
        returnValue = F("Zum Sträßle");
        break;
    }
    case 351134:
    {
        returnValue = F("Zum Strötgesfeld");
        break;
    }
    case 351135:
    {
        returnValue = F("Zum Strüken");
        break;
    }
    case 351136:
    {
        returnValue = F("Zum Strüpfelgraben");
        break;
    }
    case 351137:
    {
        returnValue = F("Zum Strütchen");
        break;
    }
    case 351138:
    {
        returnValue = F("Zum Stucken");
        break;
    }
    case 351139:
    {
        returnValue = F("Zum Stuckental");
        break;
    }
    case 351140:
    {
        returnValue = F("Zum Stucks");
        break;
    }
    case 351141:
    {
        returnValue = F("Zum Stuifen");
        break;
    }
    case 351142:
    {
        returnValue = F("Zum Stuken");
        break;
    }
    case 351143:
    {
        returnValue = F("Zum Stumpf");
        break;
    }
    case 351144:
    {
        returnValue = F("Zum Stunga");
        break;
    }
    case 351145:
    {
        returnValue = F("Zum Sturmsberg");
        break;
    }
    case 351146:
    {
        returnValue = F("Zum Stutenbaum");
        break;
    }
    case 351147:
    {
        returnValue = F("Zum Stutenkamp");
        break;
    }
    case 351148:
    {
        returnValue = F("Zum Stutenkerl");
        break;
    }
    case 351149:
    {
        returnValue = F("Zum Stutz");
        break;
    }
    case 351150:
    {
        returnValue = F("Zum Stutzwinkel");
        break;
    }
    case 351151:
    {
        returnValue = F("Zum Stöcker Hof");
        break;
    }
    case 351152:
    {
        returnValue = F("Zum Stöckerberg");
        break;
    }
    case 351153:
    {
        returnValue = F("Zum Stöckerhof");
        break;
    }
    case 351154:
    {
        returnValue = F("Zum Stöckicht");
        break;
    }
    case 351155:
    {
        returnValue = F("Zum Stöckig");
        break;
    }
    case 351156:
    {
        returnValue = F("Zum Stöffel");
        break;
    }
    case 351157:
    {
        returnValue = F("Zum Stöntor");
        break;
    }
    case 351158:
    {
        returnValue = F("Zum Störtebeker");
        break;
    }
    case 351159:
    {
        returnValue = F("Zum Stüber");
        break;
    }
    case 351160:
    {
        returnValue = F("Zum Stück");
        break;
    }
    case 351161:
    {
        returnValue = F("Zum Stücke");
        break;
    }
    case 351162:
    {
        returnValue = F("Zum Stüh");
        break;
    }
    case 351163:
    {
        returnValue = F("Zum Stührfeld");
        break;
    }
    case 351164:
    {
        returnValue = F("Zum Stünzertal");
        break;
    }
    case 351165:
    {
        returnValue = F("Zum Stüttie");
        break;
    }
    case 351166:
    {
        returnValue = F("Zum Stützel");
        break;
    }
    case 351167:
    {
        returnValue = F("Zum Stützpunkt");
        break;
    }
    case 351168:
    {
        returnValue = F("Zum Stüvelhagen");
        break;
    }
    case 351169:
    {
        returnValue = F("Zum Suhlbruch");
        break;
    }
    case 351170:
    {
        returnValue = F("Zum Suhrfeld");
        break;
    }
    case 351171:
    {
        returnValue = F("Zum Sulzbach");
        break;
    }
    case 351172:
    {
        returnValue = F("Zum Sulzenberg");
        break;
    }
    case 351173:
    {
        returnValue = F("Zum Sunder");
        break;
    }
    case 351174:
    {
        returnValue = F("Zum Sunderhügel");
        break;
    }
    case 351175:
    {
        returnValue = F("Zum Sundern");
        break;
    }
    case 351176:
    {
        returnValue = F("Zum Surgrund");
        break;
    }
    case 351177:
    {
        returnValue = F("Zum Suthfeld");
        break;
    }
    case 351178:
    {
        returnValue = F("Zum Suumoor");
        break;
    }
    case 351179:
    {
        returnValue = F("Zum Sägebühl");
        break;
    }
    case 351180:
    {
        returnValue = F("Zum Sägemühlenfeld");
        break;
    }
    case 351181:
    {
        returnValue = F("Zum Sägerain");
        break;
    }
    case 351182:
    {
        returnValue = F("Zum Sägewerk");
        break;
    }
    case 351183:
    {
        returnValue = F("Zum Sängegraben");
        break;
    }
    case 351184:
    {
        returnValue = F("Zum Sängerhain");
        break;
    }
    case 351185:
    {
        returnValue = F("Zum Säntisblick");
        break;
    }
    case 351186:
    {
        returnValue = F("Zum Söhlbruch");
        break;
    }
    case 351187:
    {
        returnValue = F("Zum Söhler");
        break;
    }
    case 351188:
    {
        returnValue = F("Zum Sölg");
        break;
    }
    case 351189:
    {
        returnValue = F("Zum Söll");
        break;
    }
    case 351190:
    {
        returnValue = F("Zum Südbahnhof");
        break;
    }
    case 351191:
    {
        returnValue = F("Zum Süderholz");
        break;
    }
    case 351192:
    {
        returnValue = F("Zum Süderschlag");
        break;
    }
    case 351193:
    {
        returnValue = F("Zum Südfeld");
        break;
    }
    case 351194:
    {
        returnValue = F("Zum Südfriedhof");
        break;
    }
    case 351195:
    {
        returnValue = F("Zum Südhang");
        break;
    }
    case 351196:
    {
        returnValue = F("Zum Südholz");
        break;
    }
    case 351197:
    {
        returnValue = F("Zum Südkai");
        break;
    }
    case 351198:
    {
        returnValue = F("Zum Südlichen See");
        break;
    }
    case 351199:
    {
        returnValue = F("Zum Südstrand");
        break;
    }
    case 351200:
    {
        returnValue = F("Zum Südtor");
        break;
    }
    case 351201:
    {
        returnValue = F("Zum Südufer");
        break;
    }
    case 351202:
    {
        returnValue = F("Zum Süldsberg");
        break;
    }
    case 351203:
    {
        returnValue = F("Zum Süllmoor");
        break;
    }
    case 351204:
    {
        returnValue = F("Zum Sülzufer");
        break;
    }
    case 351205:
    {
        returnValue = F("Zum Süntel");
        break;
    }
    case 351206:
    {
        returnValue = F("Zum Sürendahl");
        break;
    }
    case 351207:
    {
        returnValue = F("Zum Süßen Grund");
        break;
    }
    case 351208:
    {
        returnValue = F("Zum Süßen See");
        break;
    }
    case 351209:
    {
        returnValue = F("Zum Süßen Wasen");
        break;
    }
    case 351210:
    {
        returnValue = F("Zum Süßer Berg");
        break;
    }
    case 351211:
    {
        returnValue = F("Zum Tafelholz");
        break;
    }
    case 351212:
    {
        returnValue = F("Zum Tagberg");
        break;
    }
    case 351213:
    {
        returnValue = F("Zum Taggenbrock");
        break;
    }
    case 351214:
    {
        returnValue = F("Zum Tal");
        break;
    }
    case 351215:
    {
        returnValue = F("Zum Talberg");
        break;
    }
    case 351216:
    {
        returnValue = F("Zum Talblick");
        break;
    }
    case 351217:
    {
        returnValue = F("Zum Tale");
        break;
    }
    case 351218:
    {
        returnValue = F("Zum Talfeld");
        break;
    }
    case 351219:
    {
        returnValue = F("Zum Tamberg");
        break;
    }
    case 351220:
    {
        returnValue = F("Zum Tannacker");
        break;
    }
    case 351221:
    {
        returnValue = F("Zum Tannenberg");
        break;
    }
    case 351222:
    {
        returnValue = F("Zum Tannenbruch");
        break;
    }
    case 351223:
    {
        returnValue = F("Zum Tannenbuckel");
        break;
    }
    case 351224:
    {
        returnValue = F("Zum Tanneneck");
        break;
    }
    case 351225:
    {
        returnValue = F("Zum Tannenesch");
        break;
    }
    case 351226:
    {
        returnValue = F("Zum Tannengarten");
        break;
    }
    case 351227:
    {
        returnValue = F("Zum Tannengrund");
        break;
    }
    case 351228:
    {
        returnValue = F("Zum Tannenhof");
        break;
    }
    case 351229:
    {
        returnValue = F("Zum Tannenkamp");
        break;
    }
    case 351230:
    {
        returnValue = F("Zum Tannenkopf");
        break;
    }
    case 351231:
    {
        returnValue = F("Zum Tannensteg");
        break;
    }
    case 351232:
    {
        returnValue = F("Zum Tannenwald");
        break;
    }
    case 351233:
    {
        returnValue = F("Zum Tannenwäldchen");
        break;
    }
    case 351234:
    {
        returnValue = F("Zum Tannhof");
        break;
    }
    case 351235:
    {
        returnValue = F("Zum Taubenbrünnlein");
        break;
    }
    case 351236:
    {
        returnValue = F("Zum Taubengarten");
        break;
    }
    case 351237:
    {
        returnValue = F("Zum Taubenheim");
        break;
    }
    case 351238:
    {
        returnValue = F("Zum Taubenherd");
        break;
    }
    case 351239:
    {
        returnValue = F("Zum Taubenschlag");
        break;
    }
    case 351240:
    {
        returnValue = F("Zum Tauerngrund");
        break;
    }
    case 351241:
    {
        returnValue = F("Zum Taufstein");
        break;
    }
    case 351242:
    {
        returnValue = F("Zum Tauhügel");
        break;
    }
    case 351243:
    {
        returnValue = F("Zum Taunusblick");
        break;
    }
    case 351244:
    {
        returnValue = F("Zum Teerofen");
        break;
    }
    case 351245:
    {
        returnValue = F("Zum Tegelkamp");
        break;
    }
    case 351246:
    {
        returnValue = F("Zum Tegernsee");
        break;
    }
    case 351247:
    {
        returnValue = F("Zum Teich");
        break;
    }
    case 351248:
    {
        returnValue = F("Zum Teichbach");
        break;
    }
    case 351249:
    {
        returnValue = F("Zum Teichdamm");
        break;
    }
    case 351250:
    {
        returnValue = F("Zum Teiche");
        break;
    }
    case 351251:
    {
        returnValue = F("Zum Teichhaus");
        break;
    }
    case 351252:
    {
        returnValue = F("Zum Teichhof");
        break;
    }
    case 351253:
    {
        returnValue = F("Zum Teichtal");
        break;
    }
    case 351254:
    {
        returnValue = F("Zum Telegraf");
        break;
    }
    case 351255:
    {
        returnValue = F("Zum Telegrafenberg");
        break;
    }
    case 351256:
    {
        returnValue = F("Zum Telgenbusch");
        break;
    }
    case 351257:
    {
        returnValue = F("Zum Tellbusch");
        break;
    }
    case 351258:
    {
        returnValue = F("Zum Teller Hof");
        break;
    }
    case 351259:
    {
        returnValue = F("Zum Tempel");
        break;
    }
    case 351260:
    {
        returnValue = F("Zum Tempelberg");
        break;
    }
    case 351261:
    {
        returnValue = F("Zum Tempelbroich");
        break;
    }
    case 351262:
    {
        returnValue = F("Zum Tengen");
        break;
    }
    case 351263:
    {
        returnValue = F("Zum Tennenbach");
        break;
    }
    case 351264:
    {
        returnValue = F("Zum Tennisplatz");
        break;
    }
    case 351265:
    {
        returnValue = F("Zum Tenterling");
        break;
    }
    case 351266:
    {
        returnValue = F("Zum Terrazzo");
        break;
    }
    case 351267:
    {
        returnValue = F("Zum Teufelsberg");
        break;
    }
    case 351268:
    {
        returnValue = F("Zum Teufelsmoor");
        break;
    }
    case 351269:
    {
        returnValue = F("Zum Teufelssee");
        break;
    }
    case 351270:
    {
        returnValue = F("Zum Teufelssiepen");
        break;
    }
    case 351271:
    {
        returnValue = F("Zum Teufelsstein");
        break;
    }
    case 351272:
    {
        returnValue = F("Zum Teufelstein");
        break;
    }
    case 351273:
    {
        returnValue = F("Zum Teutonenweg");
        break;
    }
    case 351274:
    {
        returnValue = F("Zum Texas");
        break;
    }
    case 351275:
    {
        returnValue = F("Zum Theestück");
        break;
    }
    case 351276:
    {
        returnValue = F("Zum Thelenkreuz");
        break;
    }
    case 351277:
    {
        returnValue = F("Zum Theresienhain");
        break;
    }
    case 351278:
    {
        returnValue = F("Zum Thermalbad");
        break;
    }
    case 351279:
    {
        returnValue = F("Zum Thie");
        break;
    }
    case 351280:
    {
        returnValue = F("Zum Thielensiefen");
        break;
    }
    case 351281:
    {
        returnValue = F("Zum Thiesenhof");
        break;
    }
    case 351282:
    {
        returnValue = F("Zum Thiestein");
        break;
    }
    case 351283:
    {
        returnValue = F("Zum Thing");
        break;
    }
    case 351284:
    {
        returnValue = F("Zum Thingplatz");
        break;
    }
    case 351285:
    {
        returnValue = F("Zum Thomasberg");
        break;
    }
    case 351286:
    {
        returnValue = F("Zum Thomeshof");
        break;
    }
    case 351287:
    {
        returnValue = F("Zum Thonhügel");
        break;
    }
    case 351288:
    {
        returnValue = F("Zum Thoracker");
        break;
    }
    case 351289:
    {
        returnValue = F("Zum Thäle");
        break;
    }
    case 351290:
    {
        returnValue = F("Zum Thörenberg");
        break;
    }
    case 351291:
    {
        returnValue = F("Zum Tick");
        break;
    }
    case 351292:
    {
        returnValue = F("Zum Tief");
        break;
    }
    case 351293:
    {
        returnValue = F("Zum Tiefen Eck");
        break;
    }
    case 351294:
    {
        returnValue = F("Zum Tiefen Graben");
        break;
    }
    case 351295:
    {
        returnValue = F("Zum Tiefen Reck");
        break;
    }
    case 351296:
    {
        returnValue = F("Zum Tiefen Tal");
        break;
    }
    case 351297:
    {
        returnValue = F("Zum Tiefen Weg");
        break;
    }
    case 351298:
    {
        returnValue = F("Zum Tiefen Wege");
        break;
    }
    case 351299:
    {
        returnValue = F("Zum Tiefen Ziest");
        break;
    }
    case 351300:
    {
        returnValue = F("Zum Tiefenbach");
        break;
    }
    case 351301:
    {
        returnValue = F("Zum Tiefengraben");
        break;
    }
    case 351302:
    {
        returnValue = F("Zum Tiefengrund");
        break;
    }
    case 351303:
    {
        returnValue = F("Zum Tiefenhahn");
        break;
    }
    case 351304:
    {
        returnValue = F("Zum Tiefental");
        break;
    }
    case 351305:
    {
        returnValue = F("Zum Tiefenweg");
        break;
    }
    case 351306:
    {
        returnValue = F("Zum Tiefsteg");
        break;
    }
    case 351307:
    {
        returnValue = F("Zum Tienenbach");
        break;
    }
    case 351308:
    {
        returnValue = F("Zum Tiergarten");
        break;
    }
    case 351309:
    {
        returnValue = F("Zum Tiergartentor");
        break;
    }
    case 351310:
    {
        returnValue = F("Zum Tiergehege");
        break;
    }
    case 351311:
    {
        returnValue = F("Zum Tiergärtner Teich");
        break;
    }
    case 351312:
    {
        returnValue = F("Zum Tierhagen");
        break;
    }
    case 351313:
    {
        returnValue = F("Zum Tierheim");
        break;
    }
    case 351314:
    {
        returnValue = F("Zum Tierpark");
        break;
    }
    case 351315:
    {
        returnValue = F("Zum Tierseifen");
        break;
    }
    case 351316:
    {
        returnValue = F("Zum Tietschensee");
        break;
    }
    case 351317:
    {
        returnValue = F("Zum Tilo");
        break;
    }
    case 351318:
    {
        returnValue = F("Zum Timberg");
        break;
    }
    case 351319:
    {
        returnValue = F("Zum Timmeler Meer");
        break;
    }
    case 351320:
    {
        returnValue = F("Zum Tivoli");
        break;
    }
    case 351321:
    {
        returnValue = F("Zum Tobelhölzle");
        break;
    }
    case 351322:
    {
        returnValue = F("Zum Toedtfeld");
        break;
    }
    case 351323:
    {
        returnValue = F("Zum Toffental");
        break;
    }
    case 351324:
    {
        returnValue = F("Zum Tollberg");
        break;
    }
    case 351325:
    {
        returnValue = F("Zum Tonloch");
        break;
    }
    case 351326:
    {
        returnValue = F("Zum Tonstich");
        break;
    }
    case 351327:
    {
        returnValue = F("Zum Tonteich");
        break;
    }
    case 351328:
    {
        returnValue = F("Zum Tor");
        break;
    }
    case 351329:
    {
        returnValue = F("Zum Toracker");
        break;
    }
    case 351330:
    {
        returnValue = F("Zum Torbogen");
        break;
    }
    case 351331:
    {
        returnValue = F("Zum Torfbruch");
        break;
    }
    case 351332:
    {
        returnValue = F("Zum Torfkanal");
        break;
    }
    case 351333:
    {
        returnValue = F("Zum Torfmoor");
        break;
    }
    case 351334:
    {
        returnValue = F("Zum Torfring");
        break;
    }
    case 351335:
    {
        returnValue = F("Zum Torfstich");
        break;
    }
    case 351336:
    {
        returnValue = F("Zum Torgarten");
        break;
    }
    case 351337:
    {
        returnValue = F("Zum Torhaus");
        break;
    }
    case 351338:
    {
        returnValue = F("Zum Torkel");
        break;
    }
    case 351339:
    {
        returnValue = F("Zum Torksfeld");
        break;
    }
    case 351340:
    {
        returnValue = F("Zum Toten Arm");
        break;
    }
    case 351341:
    {
        returnValue = F("Zum Tower");
        break;
    }
    case 351342:
    {
        returnValue = F("Zum Trappenberg");
        break;
    }
    case 351343:
    {
        returnValue = F("Zum Trappenboom");
        break;
    }
    case 351344:
    {
        returnValue = F("Zum Traroth");
        break;
    }
    case 351345:
    {
        returnValue = F("Zum Trauberg");
        break;
    }
    case 351346:
    {
        returnValue = F("Zum Trauf");
        break;
    }
    case 351347:
    {
        returnValue = F("Zum Traumsee");
        break;
    }
    case 351348:
    {
        returnValue = F("Zum Trebbower Hof");
        break;
    }
    case 351349:
    {
        returnValue = F("Zum Trebelgrund");
        break;
    }
    case 351350:
    {
        returnValue = F("Zum Trechwitzer Berg");
        break;
    }
    case 351351:
    {
        returnValue = F("Zum Treidelpfad");
        break;
    }
    case 351352:
    {
        returnValue = F("Zum Treis");
        break;
    }
    case 351353:
    {
        returnValue = F("Zum Treisberg");
        break;
    }
    case 351354:
    {
        returnValue = F("Zum Trenntsee");
        break;
    }
    case 351355:
    {
        returnValue = F("Zum Treppchen");
        break;
    }
    case 351356:
    {
        returnValue = F("Zum Treptower See");
        break;
    }
    case 351357:
    {
        returnValue = F("Zum Trieb");
        break;
    }
    case 351358:
    {
        returnValue = F("Zum Triemoor");
        break;
    }
    case 351359:
    {
        returnValue = F("Zum Triesch");
        break;
    }
    case 351360:
    {
        returnValue = F("Zum Trimbach");
        break;
    }
    case 351361:
    {
        returnValue = F("Zum Trindel");
        break;
    }
    case 351362:
    {
        returnValue = F("Zum Trinkborn");
        break;
    }
    case 351363:
    {
        returnValue = F("Zum Trinkbrunnen");
        break;
    }
    case 351364:
    {
        returnValue = F("Zum Trinkgut");
        break;
    }
    case 351365:
    {
        returnValue = F("Zum Trintel");
        break;
    }
    case 351366:
    {
        returnValue = F("Zum Trockenen Ende");
        break;
    }
    case 351367:
    {
        returnValue = F("Zum Trollhof");
        break;
    }
    case 351368:
    {
        returnValue = F("Zum Trompeter");
        break;
    }
    case 351369:
    {
        returnValue = F("Zum Trostholz");
        break;
    }
    case 351370:
    {
        returnValue = F("Zum Truckenthal");
        break;
    }
    case 351371:
    {
        returnValue = F("Zum Trucktal");
        break;
    }
    case 351372:
    {
        returnValue = F("Zum Trägerfeld");
        break;
    }
    case 351373:
    {
        returnValue = F("Zum Tränkebrunnen");
        break;
    }
    case 351374:
    {
        returnValue = F("Zum Trösterbrünnele");
        break;
    }
    case 351375:
    {
        returnValue = F("Zum Trüpfhaus");
        break;
    }
    case 351376:
    {
        returnValue = F("Zum Tuddental");
        break;
    }
    case 351377:
    {
        returnValue = F("Zum Tuffsteinbruch");
        break;
    }
    case 351378:
    {
        returnValue = F("Zum Tummelplatz");
        break;
    }
    case 351379:
    {
        returnValue = F("Zum Tunnel");
        break;
    }
    case 351380:
    {
        returnValue = F("Zum Turm");
        break;
    }
    case 351381:
    {
        returnValue = F("Zum Turmholz");
        break;
    }
    case 351382:
    {
        returnValue = F("Zum Turnerheim");
        break;
    }
    case 351383:
    {
        returnValue = F("Zum Turnplatz");
        break;
    }
    case 351384:
    {
        returnValue = F("Zum Turnverein");
        break;
    }
    case 351385:
    {
        returnValue = F("Zum Tusculum");
        break;
    }
    case 351386:
    {
        returnValue = F("Zum Twiestel");
        break;
    }
    case 351387:
    {
        returnValue = F("Zum Twilen");
        break;
    }
    case 351388:
    {
        returnValue = F("Zum Twistgrund");
        break;
    }
    case 351389:
    {
        returnValue = F("Zum Täckenfeld");
        break;
    }
    case 351390:
    {
        returnValue = F("Zum Tälchen");
        break;
    }
    case 351391:
    {
        returnValue = F("Zum Täle");
        break;
    }
    case 351392:
    {
        returnValue = F("Zum Tännicht");
        break;
    }
    case 351393:
    {
        returnValue = F("Zum Tännig");
        break;
    }
    case 351394:
    {
        returnValue = F("Zum Töfatt");
        break;
    }
    case 351395:
    {
        returnValue = F("Zum Tönnisbach");
        break;
    }
    case 351396:
    {
        returnValue = F("Zum Töpfergarten");
        break;
    }
    case 351397:
    {
        returnValue = F("Zum Töpfermarkt");
        break;
    }
    case 351398:
    {
        returnValue = F("Zum Töpperberg");
        break;
    }
    case 351399:
    {
        returnValue = F("Zum Töterberg");
        break;
    }
    case 351400:
    {
        returnValue = F("Zum Tüdick");
        break;
    }
    case 351401:
    {
        returnValue = F("Zum Tümchen");
        break;
    }
    case 351402:
    {
        returnValue = F("Zum Tümmelberg");
        break;
    }
    case 351403:
    {
        returnValue = F("Zum Tümpel");
        break;
    }
    case 351404:
    {
        returnValue = F("Zum Türkengraben");
        break;
    }
    case 351405:
    {
        returnValue = F("Zum Türling");
        break;
    }
    case 351406:
    {
        returnValue = F("Zum Türmchen");
        break;
    }
    case 351407:
    {
        returnValue = F("Zum Tüschenbrook");
        break;
    }
    case 351408:
    {
        returnValue = F("Zum Tüssen Brand");
        break;
    }
    case 351409:
    {
        returnValue = F("Zum Tütenhof");
        break;
    }
    case 351410:
    {
        returnValue = F("Zum Ueltgesforthof");
        break;
    }
    case 351411:
    {
        returnValue = F("Zum Ueser Schafkoven");
        break;
    }
    case 351412:
    {
        returnValue = F("Zum Ueßbach");
        break;
    }
    case 351413:
    {
        returnValue = F("Zum Ufer");
        break;
    }
    case 351414:
    {
        returnValue = F("Zum Uhlenberg");
        break;
    }
    case 351415:
    {
        returnValue = F("Zum Uhlenbrauck");
        break;
    }
    case 351416:
    {
        returnValue = F("Zum Uhlenbrink");
        break;
    }
    case 351417:
    {
        returnValue = F("Zum Uhlenbusch");
        break;
    }
    case 351418:
    {
        returnValue = F("Zum Uhlengrund");
        break;
    }
    case 351419:
    {
        returnValue = F("Zum Uhlenhof");
        break;
    }
    case 351420:
    {
        returnValue = F("Zum Uhlenhorst");
        break;
    }
    case 351421:
    {
        returnValue = F("Zum Uhlenloch");
        break;
    }
    case 351422:
    {
        returnValue = F("Zum Uhlenmoor");
        break;
    }
    case 351423:
    {
        returnValue = F("Zum Uhlenwinkel");
        break;
    }
    case 351424:
    {
        returnValue = F("Zum Uhlerkopf");
        break;
    }
    case 351425:
    {
        returnValue = F("Zum Ukleisee");
        break;
    }
    case 351426:
    {
        returnValue = F("Zum Ulmer");
        break;
    }
    case 351427:
    {
        returnValue = F("Zum Ulrichstein");
        break;
    }
    case 351428:
    {
        returnValue = F("Zum Ulsterberg");
        break;
    }
    case 351429:
    {
        returnValue = F("Zum Umsetzer");
        break;
    }
    case 351430:
    {
        returnValue = F("Zum Umspannwerk");
        break;
    }
    case 351431:
    {
        returnValue = F("Zum Unstruttal");
        break;
    }
    case 351432:
    {
        returnValue = F("Zum Unterberg");
        break;
    }
    case 351433:
    {
        returnValue = F("Zum Unterdorf");
        break;
    }
    case 351434:
    {
        returnValue = F("Zum Unteren Gut");
        break;
    }
    case 351435:
    {
        returnValue = F("Zum Unteren Tal");
        break;
    }
    case 351436:
    {
        returnValue = F("Zum Unteren Tunnel");
        break;
    }
    case 351437:
    {
        returnValue = F("Zum Unterfeld");
        break;
    }
    case 351438:
    {
        returnValue = F("Zum Unterhain");
        break;
    }
    case 351439:
    {
        returnValue = F("Zum Unterhammer");
        break;
    }
    case 351440:
    {
        returnValue = F("Zum Untermoor");
        break;
    }
    case 351441:
    {
        returnValue = F("Zum Untersten Wäldchen");
        break;
    }
    case 351442:
    {
        returnValue = F("Zum Untertriesch");
        break;
    }
    case 351443:
    {
        returnValue = F("Zum Uphof");
        break;
    }
    case 351444:
    {
        returnValue = F("Zum Upholz");
        break;
    }
    case 351445:
    {
        returnValue = F("Zum Upjever Forst");
        break;
    }
    case 351446:
    {
        returnValue = F("Zum Upland");
        break;
    }
    case 351447:
    {
        returnValue = F("Zum Uppstallpfuhl");
        break;
    }
    case 351448:
    {
        returnValue = F("Zum Urlauf");
        break;
    }
    case 351449:
    {
        returnValue = F("Zum Urnenfriedhof");
        break;
    }
    case 351450:
    {
        returnValue = F("Zum Ursprung");
        break;
    }
    case 351451:
    {
        returnValue = F("Zum Urwäldele");
        break;
    }
    case 351452:
    {
        returnValue = F("Zum Uthoff");
        break;
    }
    case 351453:
    {
        returnValue = F("Zum Vechtetal");
        break;
    }
    case 351454:
    {
        returnValue = F("Zum Veilchenbrunnen");
        break;
    }
    case 351455:
    {
        returnValue = F("Zum Veilchental");
        break;
    }
    case 351456:
    {
        returnValue = F("Zum Veilchenweg");
        break;
    }
    case 351457:
    {
        returnValue = F("Zum Veitskopf");
        break;
    }
    case 351458:
    {
        returnValue = F("Zum Vele");
        break;
    }
    case 351459:
    {
        returnValue = F("Zum Veltheimstollen");
        break;
    }
    case 351460:
    {
        returnValue = F("Zum Venn");
        break;
    }
    case 351461:
    {
        returnValue = F("Zum Vennblick");
        break;
    }
    case 351462:
    {
        returnValue = F("Zum Venner Busch");
        break;
    }
    case 351463:
    {
        returnValue = F("Zum Verdel");
        break;
    }
    case 351464:
    {
        returnValue = F("Zum Verdis");
        break;
    }
    case 351465:
    {
        returnValue = F("Zum Vereinsglückschacht");
        break;
    }
    case 351466:
    {
        returnValue = F("Zum Vereinshaus");
        break;
    }
    case 351467:
    {
        returnValue = F("Zum Verkehrshof");
        break;
    }
    case 351468:
    {
        returnValue = F("Zum Verlaat");
        break;
    }
    case 351469:
    {
        returnValue = F("Zum Vessertal");
        break;
    }
    case 351470:
    {
        returnValue = F("Zum Vestiaturm");
        break;
    }
    case 351471:
    {
        returnValue = F("Zum Vetterberg");
        break;
    }
    case 351472:
    {
        returnValue = F("Zum Viadukt");
        break;
    }
    case 351473:
    {
        returnValue = F("Zum Viebig");
        break;
    }
    case 351474:
    {
        returnValue = F("Zum Viehfartweg");
        break;
    }
    case 351475:
    {
        returnValue = F("Zum Viehgraben");
        break;
    }
    case 351476:
    {
        returnValue = F("Zum Vierberg");
        break;
    }
    case 351477:
    {
        returnValue = F("Zum Vierseenblick");
        break;
    }
    case 351478:
    {
        returnValue = F("Zum Vierseithof");
        break;
    }
    case 351479:
    {
        returnValue = F("Zum Viertelsberg");
        break;
    }
    case 351480:
    {
        returnValue = F("Zum Vilssteg");
        break;
    }
    case 351481:
    {
        returnValue = F("Zum Visoh");
        break;
    }
    case 351482:
    {
        returnValue = F("Zum Visswinkel");
        break;
    }
    case 351483:
    {
        returnValue = F("Zum Vitalpark");
        break;
    }
    case 351484:
    {
        returnValue = F("Zum Vitzberg");
        break;
    }
    case 351485:
    {
        returnValue = F("Zum Vockenberg");
        break;
    }
    case 351486:
    {
        returnValue = F("Zum Vogelacker");
        break;
    }
    case 351487:
    {
        returnValue = F("Zum Vogelberg");
        break;
    }
    case 351488:
    {
        returnValue = F("Zum Vogelborn");
        break;
    }
    case 351489:
    {
        returnValue = F("Zum Vogelbusch");
        break;
    }
    case 351490:
    {
        returnValue = F("Zum Vogelgesang");
        break;
    }
    case 351491:
    {
        returnValue = F("Zum Vogelherd");
        break;
    }
    case 351492:
    {
        returnValue = F("Zum Vogelhof");
        break;
    }
    case 351493:
    {
        returnValue = F("Zum Vogelnest");
        break;
    }
    case 351494:
    {
        returnValue = F("Zum Vogelpohl");
        break;
    }
    case 351495:
    {
        returnValue = F("Zum Vogelrain");
        break;
    }
    case 351496:
    {
        returnValue = F("Zum Vogelrutherfeld");
        break;
    }
    case 351497:
    {
        returnValue = F("Zum Vogelsang");
        break;
    }
    case 351498:
    {
        returnValue = F("Zum Vogelsberg");
        break;
    }
    case 351499:
    {
        returnValue = F("Zum Vogelsborn");
        break;
    }
    case 351500:
    {
        returnValue = F("Zum Vogelsgesang");
        break;
    }
    case 351501:
    {
        returnValue = F("Zum Vogelsgrund");
        break;
    }
    case 351502:
    {
        returnValue = F("Zum Vogelteich");
        break;
    }
    case 351503:
    {
        returnValue = F("Zum Vogtlandsee");
        break;
    }
    case 351504:
    {
        returnValue = F("Zum Volksgarten");
        break;
    }
    case 351505:
    {
        returnValue = F("Zum Volkspark");
        break;
    }
    case 351506:
    {
        returnValue = F("Zum Vorbecker See");
        break;
    }
    case 351507:
    {
        returnValue = F("Zum Vorberg");
        break;
    }
    case 351508:
    {
        returnValue = F("Zum Vorbusch");
        break;
    }
    case 351509:
    {
        returnValue = F("Zum Vordamm");
        break;
    }
    case 351510:
    {
        returnValue = F("Zum Vorderwald");
        break;
    }
    case 351511:
    {
        returnValue = F("Zum Vorlingen");
        break;
    }
    case 351512:
    {
        returnValue = F("Zum Vorwerk");
        break;
    }
    case 351513:
    {
        returnValue = F("Zum Voshövel");
        break;
    }
    case 351514:
    {
        returnValue = F("Zum Vossberg");
        break;
    }
    case 351515:
    {
        returnValue = F("Zum Vossenbarg");
        break;
    }
    case 351516:
    {
        returnValue = F("Zum Vosswinkel");
        break;
    }
    case 351517:
    {
        returnValue = F("Zum Voßberg");
        break;
    }
    case 351518:
    {
        returnValue = F("Zum Voßfelde");
        break;
    }
    case 351519:
    {
        returnValue = F("Zum Voßmeyer");
        break;
    }
    case 351520:
    {
        returnValue = F("Zum Voßort");
        break;
    }
    case 351521:
    {
        returnValue = F("Zum Voßwinkel");
        break;
    }
    case 351522:
    {
        returnValue = F("Zum Vulting");
        break;
    }
    case 351523:
    {
        returnValue = F("Zum Wachberg");
        break;
    }
    case 351524:
    {
        returnValue = F("Zum Wachental");
        break;
    }
    case 351525:
    {
        returnValue = F("Zum Wachhügel");
        break;
    }
    case 351526:
    {
        returnValue = F("Zum Wachkopf");
        break;
    }
    case 351527:
    {
        returnValue = F("Zum Wacholder");
        break;
    }
    case 351528:
    {
        returnValue = F("Zum Wacholderberg");
        break;
    }
    case 351529:
    {
        returnValue = F("Zum Wacholderbusch");
        break;
    }
    case 351530:
    {
        returnValue = F("Zum Wachsenburgblick");
        break;
    }
    case 351531:
    {
        returnValue = F("Zum Wachtberg");
        break;
    }
    case 351532:
    {
        returnValue = F("Zum Wachtelberg");
        break;
    }
    case 351533:
    {
        returnValue = F("Zum Wachtfels");
        break;
    }
    case 351534:
    {
        returnValue = F("Zum Wachtgipfel");
        break;
    }
    case 351535:
    {
        returnValue = F("Zum Wachwisch");
        break;
    }
    case 351536:
    {
        returnValue = F("Zum Wackers");
        break;
    }
    case 351537:
    {
        returnValue = F("Zum Wadelborn");
        break;
    }
    case 351538:
    {
        returnValue = F("Zum Wagenstall");
        break;
    }
    case 351539:
    {
        returnValue = F("Zum Wagner");
        break;
    }
    case 351540:
    {
        returnValue = F("Zum Wahlenberg");
        break;
    }
    case 351541:
    {
        returnValue = F("Zum Wahler Grund");
        break;
    }
    case 351542:
    {
        returnValue = F("Zum Wahnbach");
        break;
    }
    case 351543:
    {
        returnValue = F("Zum Wahnenbusch");
        break;
    }
    case 351544:
    {
        returnValue = F("Zum Wakelsacker");
        break;
    }
    case 351545:
    {
        returnValue = F("Zum Walberg");
        break;
    }
    case 351546:
    {
        returnValue = F("Zum Wald");
        break;
    }
    case 351547:
    {
        returnValue = F("Zum Waldbach");
        break;
    }
    case 351548:
    {
        returnValue = F("Zum Waldbad");
        break;
    }
    case 351549:
    {
        returnValue = F("Zum Waldblick");
        break;
    }
    case 351550:
    {
        returnValue = F("Zum Waldborn");
        break;
    }
    case 351551:
    {
        returnValue = F("Zum Walde");
        break;
    }
    case 351552:
    {
        returnValue = F("Zum Waldeck");
        break;
    }
    case 351553:
    {
        returnValue = F("Zum Waldeskühl");
        break;
    }
    case 351554:
    {
        returnValue = F("Zum Waldesrand");
        break;
    }
    case 351555:
    {
        returnValue = F("Zum Waldfreibad");
        break;
    }
    case 351556:
    {
        returnValue = F("Zum Waldfrieden");
        break;
    }
    case 351557:
    {
        returnValue = F("Zum Waldfriedhof");
        break;
    }
    case 351558:
    {
        returnValue = F("Zum Waldgarten");
        break;
    }
    case 351559:
    {
        returnValue = F("Zum Waldgraben");
        break;
    }
    case 351560:
    {
        returnValue = F("Zum Waldgut");
        break;
    }
    case 351561:
    {
        returnValue = F("Zum Waldhaus");
        break;
    }
    case 351562:
    {
        returnValue = F("Zum Waldhof");
        break;
    }
    case 351563:
    {
        returnValue = F("Zum Waldlehrpfad");
        break;
    }
    case 351564:
    {
        returnValue = F("Zum Waldpark");
        break;
    }
    case 351565:
    {
        returnValue = F("Zum Waldrand");
        break;
    }
    case 351566:
    {
        returnValue = F("Zum Waldschlösschen");
        break;
    }
    case 351567:
    {
        returnValue = F("Zum Waldschlößchen");
        break;
    }
    case 351568:
    {
        returnValue = F("Zum Waldsee");
        break;
    }
    case 351569:
    {
        returnValue = F("Zum Waldspielplatz");
        break;
    }
    case 351570:
    {
        returnValue = F("Zum Waldsportplatz");
        break;
    }
    case 351571:
    {
        returnValue = F("Zum Waldstadion");
        break;
    }
    case 351572:
    {
        returnValue = F("Zum Waldstollen");
        break;
    }
    case 351573:
    {
        returnValue = F("Zum Waldteich");
        break;
    }
    case 351574:
    {
        returnValue = F("Zum Waldwinkel");
        break;
    }
    case 351575:
    {
        returnValue = F("Zum Walfisch");
        break;
    }
    case 351576:
    {
        returnValue = F("Zum Walkerbach");
        break;
    }
    case 351577:
    {
        returnValue = F("Zum Walkhäuschen");
        break;
    }
    case 351578:
    {
        returnValue = F("Zum Wall");
        break;
    }
    case 351579:
    {
        returnValue = F("Zum Wallacker");
        break;
    }
    case 351580:
    {
        returnValue = F("Zum Wallbach");
        break;
    }
    case 351581:
    {
        returnValue = F("Zum Wallberg");
        break;
    }
    case 351582:
    {
        returnValue = F("Zum Wallenstein");
        break;
    }
    case 351583:
    {
        returnValue = F("Zum Wallensteingraben");
        break;
    }
    case 351584:
    {
        returnValue = F("Zum Wallenteich");
        break;
    }
    case 351585:
    {
        returnValue = F("Zum Wallgraben");
        break;
    }
    case 351586:
    {
        returnValue = F("Zum Wallstein");
        break;
    }
    case 351587:
    {
        returnValue = F("Zum Walmen");
        break;
    }
    case 351588:
    {
        returnValue = F("Zum Walnusshof");
        break;
    }
    case 351589:
    {
        returnValue = F("Zum Walzenberg");
        break;
    }
    case 351590:
    {
        returnValue = F("Zum Wandelnsberg");
        break;
    }
    case 351591:
    {
        returnValue = F("Zum Wandermichel");
        break;
    }
    case 351592:
    {
        returnValue = F("Zum Wanderweg");
        break;
    }
    case 351593:
    {
        returnValue = F("Zum Wannbachsteg");
        break;
    }
    case 351594:
    {
        returnValue = F("Zum Warburger Tor");
        break;
    }
    case 351595:
    {
        returnValue = F("Zum Warndtstadion");
        break;
    }
    case 351596:
    {
        returnValue = F("Zum Warnowtal");
        break;
    }
    case 351597:
    {
        returnValue = F("Zum Wart");
        break;
    }
    case 351598:
    {
        returnValue = F("Zum Wartberg");
        break;
    }
    case 351599:
    {
        returnValue = F("Zum Warte Turm");
        break;
    }
    case 351600:
    {
        returnValue = F("Zum Wartenberg");
        break;
    }
    case 351601:
    {
        returnValue = F("Zum Warteturm");
        break;
    }
    case 351602:
    {
        returnValue = F("Zum Wartheberg");
        break;
    }
    case 351603:
    {
        returnValue = F("Zum Warthügel");
        break;
    }
    case 351604:
    {
        returnValue = F("Zum Wartstein");
        break;
    }
    case 351605:
    {
        returnValue = F("Zum Wartturm");
        break;
    }
    case 351606:
    {
        returnValue = F("Zum Warwer Sand");
        break;
    }
    case 351607:
    {
        returnValue = F("Zum Waschbach");
        break;
    }
    case 351608:
    {
        returnValue = F("Zum Waschenberg");
        break;
    }
    case 351609:
    {
        returnValue = F("Zum Waschhof");
        break;
    }
    case 351610:
    {
        returnValue = F("Zum Waschsee");
        break;
    }
    case 351611:
    {
        returnValue = F("Zum Wasem");
        break;
    }
    case 351612:
    {
        returnValue = F("Zum Wasen");
        break;
    }
    case 351613:
    {
        returnValue = F("Zum Wasser");
        break;
    }
    case 351614:
    {
        returnValue = F("Zum Wasserbaum");
        break;
    }
    case 351615:
    {
        returnValue = F("Zum Wasserberg");
        break;
    }
    case 351616:
    {
        returnValue = F("Zum Wasserblöcken");
        break;
    }
    case 351617:
    {
        returnValue = F("Zum Wasserfall");
        break;
    }
    case 351618:
    {
        returnValue = F("Zum Wasserfeld");
        break;
    }
    case 351619:
    {
        returnValue = F("Zum Wassergut");
        break;
    }
    case 351620:
    {
        returnValue = F("Zum Wasserhaus");
        break;
    }
    case 351621:
    {
        returnValue = F("Zum Wasserhäusl");
        break;
    }
    case 351622:
    {
        returnValue = F("Zum Wasserhäusle");
        break;
    }
    case 351623:
    {
        returnValue = F("Zum Wasserkamp");
        break;
    }
    case 351624:
    {
        returnValue = F("Zum Wasserkoog");
        break;
    }
    case 351625:
    {
        returnValue = F("Zum Wasserkreuz");
        break;
    }
    case 351626:
    {
        returnValue = F("Zum Wasserland");
        break;
    }
    case 351627:
    {
        returnValue = F("Zum Wassermangel");
        break;
    }
    case 351628:
    {
        returnValue = F("Zum Wasserquell");
        break;
    }
    case 351629:
    {
        returnValue = F("Zum Wasserreservoir");
        break;
    }
    case 351630:
    {
        returnValue = F("Zum Wasserschloß");
        break;
    }
    case 351631:
    {
        returnValue = F("Zum Wasserspeicher");
        break;
    }
    case 351632:
    {
        returnValue = F("Zum Wasserstein");
        break;
    }
    case 351633:
    {
        returnValue = F("Zum Wasserthal");
        break;
    }
    case 351634:
    {
        returnValue = F("Zum Wasserturm");
        break;
    }
    case 351635:
    {
        returnValue = F("Zum Wasserwerk");
        break;
    }
    case 351636:
    {
        returnValue = F("Zum Wasserwäldchen");
        break;
    }
    case 351637:
    {
        returnValue = F("Zum Wasthof");
        break;
    }
    case 351638:
    {
        returnValue = F("Zum Waterland");
        break;
    }
    case 351639:
    {
        returnValue = F("Zum Waterstaken");
        break;
    }
    case 351640:
    {
        returnValue = F("Zum Webergraben");
        break;
    }
    case 351641:
    {
        returnValue = F("Zum Weberhaus");
        break;
    }
    case 351642:
    {
        returnValue = F("Zum Weddenfeld");
        break;
    }
    case 351643:
    {
        returnValue = F("Zum Wedehof");
        break;
    }
    case 351644:
    {
        returnValue = F("Zum Wedemhof");
        break;
    }
    case 351645:
    {
        returnValue = F("Zum Wedingschlag");
        break;
    }
    case 351646:
    {
        returnValue = F("Zum Weedgarten");
        break;
    }
    case 351647:
    {
        returnValue = F("Zum Wegebild");
        break;
    }
    case 351648:
    {
        returnValue = F("Zum Weggental");
        break;
    }
    case 351649:
    {
        returnValue = F("Zum Wegweiher");
        break;
    }
    case 351650:
    {
        returnValue = F("Zum Weh");
        break;
    }
    case 351651:
    {
        returnValue = F("Zum Wehberg");
        break;
    }
    case 351652:
    {
        returnValue = F("Zum Wehklag");
        break;
    }
    case 351653:
    {
        returnValue = F("Zum Wehlen");
        break;
    }
    case 351654:
    {
        returnValue = F("Zum Wehlertsberg");
        break;
    }
    case 351655:
    {
        returnValue = F("Zum Wehmers Weg");
        break;
    }
    case 351656:
    {
        returnValue = F("Zum Wehnser See");
        break;
    }
    case 351657:
    {
        returnValue = F("Zum Wehr");
        break;
    }
    case 351658:
    {
        returnValue = F("Zum Wehracker");
        break;
    }
    case 351659:
    {
        returnValue = F("Zum Wehrenteich");
        break;
    }
    case 351660:
    {
        returnValue = F("Zum Wehrgarten");
        break;
    }
    case 351661:
    {
        returnValue = F("Zum Wehrgraben");
        break;
    }
    case 351662:
    {
        returnValue = F("Zum Wehrholz");
        break;
    }
    case 351663:
    {
        returnValue = F("Zum Wehrhöfchen");
        break;
    }
    case 351664:
    {
        returnValue = F("Zum Weibersgrund");
        break;
    }
    case 351665:
    {
        returnValue = F("Zum Weidchen");
        break;
    }
    case 351666:
    {
        returnValue = F("Zum Weidegut");
        break;
    }
    case 351667:
    {
        returnValue = F("Zum Weidenbusch");
        break;
    }
    case 351668:
    {
        returnValue = F("Zum Weidenpesch");
        break;
    }
    case 351669:
    {
        returnValue = F("Zum Weidental");
        break;
    }
    case 351670:
    {
        returnValue = F("Zum Weidenteich");
        break;
    }
    case 351671:
    {
        returnValue = F("Zum Weidentor");
        break;
    }
    case 351672:
    {
        returnValue = F("Zum Weidetrieb");
        break;
    }
    case 351673:
    {
        returnValue = F("Zum Weidig");
        break;
    }
    case 351674:
    {
        returnValue = F("Zum Weidling");
        break;
    }
    case 351675:
    {
        returnValue = F("Zum Weierdamm");
        break;
    }
    case 351676:
    {
        returnValue = F("Zum Weiergraben");
        break;
    }
    case 351677:
    {
        returnValue = F("Zum Weierle");
        break;
    }
    case 351678:
    {
        returnValue = F("Zum Weihen");
        break;
    }
    case 351679:
    {
        returnValue = F("Zum Weiher");
        break;
    }
    case 351680:
    {
        returnValue = F("Zum Weiherbach");
        break;
    }
    case 351681:
    {
        returnValue = F("Zum Weiherberg");
        break;
    }
    case 351682:
    {
        returnValue = F("Zum Weiherbusch");
        break;
    }
    case 351683:
    {
        returnValue = F("Zum Weiherchen");
        break;
    }
    case 351684:
    {
        returnValue = F("Zum Weiherdamm");
        break;
    }
    case 351685:
    {
        returnValue = F("Zum Weihergrund");
        break;
    }
    case 351686:
    {
        returnValue = F("Zum Weiherholz");
        break;
    }
    case 351687:
    {
        returnValue = F("Zum Weiherhügel");
        break;
    }
    case 351688:
    {
        returnValue = F("Zum Weiherle");
        break;
    }
    case 351689:
    {
        returnValue = F("Zum Weiherlein");
        break;
    }
    case 351690:
    {
        returnValue = F("Zum Weihertal");
        break;
    }
    case 351691:
    {
        returnValue = F("Zum Weiherwald");
        break;
    }
    case 351692:
    {
        returnValue = F("Zum Weiler");
        break;
    }
    case 351693:
    {
        returnValue = F("Zum Weim");
        break;
    }
    case 351694:
    {
        returnValue = F("Zum Weinacker");
        break;
    }
    case 351695:
    {
        returnValue = F("Zum Weinbach");
        break;
    }
    case 351696:
    {
        returnValue = F("Zum Weinberg");
        break;
    }
    case 351697:
    {
        returnValue = F("Zum Weinbergweg");
        break;
    }
    case 351698:
    {
        returnValue = F("Zum Weinbrunnen");
        break;
    }
    case 351699:
    {
        returnValue = F("Zum Weingarten");
        break;
    }
    case 351700:
    {
        returnValue = F("Zum Weinstock");
        break;
    }
    case 351701:
    {
        returnValue = F("Zum Weintal");
        break;
    }
    case 351702:
    {
        returnValue = F("Zum Weismichsbach");
        break;
    }
    case 351703:
    {
        returnValue = F("Zum Weissdorn");
        break;
    }
    case 351704:
    {
        returnValue = F("Zum Weissen Kreuz");
        break;
    }
    case 351705:
    {
        returnValue = F("Zum Weissenstein");
        break;
    }
    case 351706:
    {
        returnValue = F("Zum Weitblick");
        break;
    }
    case 351707:
    {
        returnValue = F("Zum Weiten");
        break;
    }
    case 351708:
    {
        returnValue = F("Zum Weiten Brunnen");
        break;
    }
    case 351709:
    {
        returnValue = F("Zum Weiter Bruch");
        break;
    }
    case 351710:
    {
        returnValue = F("Zum Weitersberg");
        break;
    }
    case 351711:
    {
        returnValue = F("Zum Weitstein");
        break;
    }
    case 351712:
    {
        returnValue = F("Zum Weizenring");
        break;
    }
    case 351713:
    {
        returnValue = F("Zum Weizenweg");
        break;
    }
    case 351714:
    {
        returnValue = F("Zum Weißen Berg");
        break;
    }
    case 351715:
    {
        returnValue = F("Zum Weißen Bild");
        break;
    }
    case 351716:
    {
        returnValue = F("Zum Weißen Feld");
        break;
    }
    case 351717:
    {
        returnValue = F("Zum Weißen Grund");
        break;
    }
    case 351718:
    {
        returnValue = F("Zum Weißen Haus");
        break;
    }
    case 351719:
    {
        returnValue = F("Zum Weißen Helm");
        break;
    }
    case 351720:
    {
        returnValue = F("Zum Weißen Holz");
        break;
    }
    case 351721:
    {
        returnValue = F("Zum Weißen Moor");
        break;
    }
    case 351722:
    {
        returnValue = F("Zum Weißen Pferd");
        break;
    }
    case 351723:
    {
        returnValue = F("Zum Weißen Rain");
        break;
    }
    case 351724:
    {
        returnValue = F("Zum Weißen Schacht");
        break;
    }
    case 351725:
    {
        returnValue = F("Zum Weißen See");
        break;
    }
    case 351726:
    {
        returnValue = F("Zum Weißen Soll");
        break;
    }
    case 351727:
    {
        returnValue = F("Zum Weißen Stein");
        break;
    }
    case 351728:
    {
        returnValue = F("Zum Weißen Weg");
        break;
    }
    case 351729:
    {
        returnValue = F("Zum Weißenberg");
        break;
    }
    case 351730:
    {
        returnValue = F("Zum Weißenborn");
        break;
    }
    case 351731:
    {
        returnValue = F("Zum Weißenstein");
        break;
    }
    case 351732:
    {
        returnValue = F("Zum Weißeritztal");
        break;
    }
    case 351733:
    {
        returnValue = F("Zum Weißgut");
        break;
    }
    case 351734:
    {
        returnValue = F("Zum Weißiger Kirchsteig");
        break;
    }
    case 351735:
    {
        returnValue = F("Zum Weißkopf");
        break;
    }
    case 351736:
    {
        returnValue = F("Zum Welft");
        break;
    }
    case 351737:
    {
        returnValue = F("Zum Wellborn");
        break;
    }
    case 351738:
    {
        returnValue = F("Zum Welleken");
        break;
    }
    case 351739:
    {
        returnValue = F("Zum Wellenbad");
        break;
    }
    case 351740:
    {
        returnValue = F("Zum Weller");
        break;
    }
    case 351741:
    {
        returnValue = F("Zum Wellerstal");
        break;
    }
    case 351742:
    {
        returnValue = F("Zum Wellmer");
        break;
    }
    case 351743:
    {
        returnValue = F("Zum Welsburger Holz");
        break;
    }
    case 351744:
    {
        returnValue = F("Zum Welschenacker");
        break;
    }
    case 351745:
    {
        returnValue = F("Zum Welsengraben");
        break;
    }
    case 351746:
    {
        returnValue = F("Zum Welzegraben");
        break;
    }
    case 351747:
    {
        returnValue = F("Zum Welzer Grund");
        break;
    }
    case 351748:
    {
        returnValue = F("Zum Welzgraben");
        break;
    }
    case 351749:
    {
        returnValue = F("Zum Wemmerfeld");
        break;
    }
    case 351750:
    {
        returnValue = F("Zum Wendebecken");
        break;
    }
    case 351751:
    {
        returnValue = F("Zum Wendehammer");
        break;
    }
    case 351752:
    {
        returnValue = F("Zum Wendelberg");
        break;
    }
    case 351753:
    {
        returnValue = F("Zum Wendelinus");
        break;
    }
    case 351754:
    {
        returnValue = F("Zum Wendelsberg");
        break;
    }
    case 351755:
    {
        returnValue = F("Zum Wendelstein");
        break;
    }
    case 351756:
    {
        returnValue = F("Zum Wenden");
        break;
    }
    case 351757:
    {
        returnValue = F("Zum Wendenkamp");
        break;
    }
    case 351758:
    {
        returnValue = F("Zum Wendeplatz");
        break;
    }
    case 351759:
    {
        returnValue = F("Zum Wendesser Moor");
        break;
    }
    case 351760:
    {
        returnValue = F("Zum Wendfeld");
        break;
    }
    case 351761:
    {
        returnValue = F("Zum Wengenwald");
        break;
    }
    case 351762:
    {
        returnValue = F("Zum Wengesberge");
        break;
    }
    case 351763:
    {
        returnValue = F("Zum Wenigenberg");
        break;
    }
    case 351764:
    {
        returnValue = F("Zum Wennigerloh");
        break;
    }
    case 351765:
    {
        returnValue = F("Zum Wenten Hof");
        break;
    }
    case 351766:
    {
        returnValue = F("Zum Wentowsee");
        break;
    }
    case 351767:
    {
        returnValue = F("Zum Wenzelnberg");
        break;
    }
    case 351768:
    {
        returnValue = F("Zum Wenzenholz");
        break;
    }
    case 351769:
    {
        returnValue = F("Zum Werder");
        break;
    }
    case 351770:
    {
        returnValue = F("Zum Werderkamp");
        break;
    }
    case 351771:
    {
        returnValue = F("Zum Werferstein");
        break;
    }
    case 351772:
    {
        returnValue = F("Zum Werhahn");
        break;
    }
    case 351773:
    {
        returnValue = F("Zum Werkgarten");
        break;
    }
    case 351774:
    {
        returnValue = F("Zum Werrablick");
        break;
    }
    case 351775:
    {
        returnValue = F("Zum Wertfeld");
        break;
    }
    case 351776:
    {
        returnValue = F("Zum Werth");
        break;
    }
    case 351777:
    {
        returnValue = F("Zum Werthelstein");
        break;
    }
    case 351778:
    {
        returnValue = F("Zum Weselbach");
        break;
    }
    case 351779:
    {
        returnValue = F("Zum Wesenitzbogen");
        break;
    }
    case 351780:
    {
        returnValue = F("Zum Weseranger");
        break;
    }
    case 351781:
    {
        returnValue = F("Zum Weserblick");
        break;
    }
    case 351782:
    {
        returnValue = F("Zum Weserstrand");
        break;
    }
    case 351783:
    {
        returnValue = F("Zum Wesertal");
        break;
    }
    case 351784:
    {
        returnValue = F("Zum Wessenblick");
        break;
    }
    case 351785:
    {
        returnValue = F("Zum Westbach");
        break;
    }
    case 351786:
    {
        returnValue = F("Zum Westberg");
        break;
    }
    case 351787:
    {
        returnValue = F("Zum Westblick");
        break;
    }
    case 351788:
    {
        returnValue = F("Zum Westerberg");
        break;
    }
    case 351789:
    {
        returnValue = F("Zum Westerfeld");
        break;
    }
    case 351790:
    {
        returnValue = F("Zum Westergrund");
        break;
    }
    case 351791:
    {
        returnValue = F("Zum Westerholter Feld");
        break;
    }
    case 351792:
    {
        returnValue = F("Zum Westerholz");
        break;
    }
    case 351793:
    {
        returnValue = F("Zum Westermoor");
        break;
    }
    case 351794:
    {
        returnValue = F("Zum Westerwald");
        break;
    }
    case 351795:
    {
        returnValue = F("Zum Westhof");
        break;
    }
    case 351796:
    {
        returnValue = F("Zum Westhölzchen");
        break;
    }
    case 351797:
    {
        returnValue = F("Zum Westkanal");
        break;
    }
    case 351798:
    {
        returnValue = F("Zum Westtal");
        break;
    }
    case 351799:
    {
        returnValue = F("Zum Westturm");
        break;
    }
    case 351800:
    {
        returnValue = F("Zum Wettenbach");
        break;
    }
    case 351801:
    {
        returnValue = F("Zum Wetterbach");
        break;
    }
    case 351802:
    {
        returnValue = F("Zum Wetterbrunnen");
        break;
    }
    case 351803:
    {
        returnValue = F("Zum Wetterhäuschen");
        break;
    }
    case 351804:
    {
        returnValue = F("Zum Wetternweg");
        break;
    }
    case 351805:
    {
        returnValue = F("Zum Wetterschacht");
        break;
    }
    case 351806:
    {
        returnValue = F("Zum Wetztal");
        break;
    }
    case 351807:
    {
        returnValue = F("Zum Weyerdamm");
        break;
    }
    case 351808:
    {
        returnValue = F("Zum Weyerhof");
        break;
    }
    case 351809:
    {
        returnValue = F("Zum Wibbelrusch");
        break;
    }
    case 351810:
    {
        returnValue = F("Zum Wickchen");
        break;
    }
    case 351811:
    {
        returnValue = F("Zum Wickenberg");
        break;
    }
    case 351812:
    {
        returnValue = F("Zum Wickenstein");
        break;
    }
    case 351813:
    {
        returnValue = F("Zum Widacker");
        break;
    }
    case 351814:
    {
        returnValue = F("Zum Widdem");
        break;
    }
    case 351815:
    {
        returnValue = F("Zum Widenbach");
        break;
    }
    case 351816:
    {
        returnValue = F("Zum Wiebusch");
        break;
    }
    case 351817:
    {
        returnValue = F("Zum Wiedel");
        break;
    }
    case 351818:
    {
        returnValue = F("Zum Wiegele");
        break;
    }
    case 351819:
    {
        returnValue = F("Zum Wieh");
        break;
    }
    case 351820:
    {
        returnValue = F("Zum Wiehegraben");
        break;
    }
    case 351821:
    {
        returnValue = F("Zum Wiehof");
        break;
    }
    case 351822:
    {
        returnValue = F("Zum Wieloh");
        break;
    }
    case 351823:
    {
        returnValue = F("Zum Wiemland");
        break;
    }
    case 351824:
    {
        returnValue = F("Zum Wienberg");
        break;
    }
    case 351825:
    {
        returnValue = F("Zum Wienbrei");
        break;
    }
    case 351826:
    {
        returnValue = F("Zum Wieninger Bach");
        break;
    }
    case 351827:
    {
        returnValue = F("Zum Wiesborn");
        break;
    }
    case 351828:
    {
        returnValue = F("Zum Wieseacker");
        break;
    }
    case 351829:
    {
        returnValue = F("Zum Wiesenbach");
        break;
    }
    case 351830:
    {
        returnValue = F("Zum Wiesenberg");
        break;
    }
    case 351831:
    {
        returnValue = F("Zum Wiesenblick");
        break;
    }
    case 351832:
    {
        returnValue = F("Zum Wiesenbogen");
        break;
    }
    case 351833:
    {
        returnValue = F("Zum Wiesenfeld");
        break;
    }
    case 351834:
    {
        returnValue = F("Zum Wiesenfleck");
        break;
    }
    case 351835:
    {
        returnValue = F("Zum Wiesengarten");
        break;
    }
    case 351836:
    {
        returnValue = F("Zum Wiesengraben");
        break;
    }
    case 351837:
    {
        returnValue = F("Zum Wiesengrund");
        break;
    }
    case 351838:
    {
        returnValue = F("Zum Wiesengrunde");
        break;
    }
    case 351839:
    {
        returnValue = F("Zum Wiesenhof");
        break;
    }
    case 351840:
    {
        returnValue = F("Zum Wiesenland");
        break;
    }
    case 351841:
    {
        returnValue = F("Zum Wiesenrain");
        break;
    }
    case 351842:
    {
        returnValue = F("Zum Wiesensee");
        break;
    }
    case 351843:
    {
        returnValue = F("Zum Wiesental");
        break;
    }
    case 351844:
    {
        returnValue = F("Zum Wiesenteich");
        break;
    }
    case 351845:
    {
        returnValue = F("Zum Wiesenthal");
        break;
    }
    case 351846:
    {
        returnValue = F("Zum Wiesenweg");
        break;
    }
    case 351847:
    {
        returnValue = F("Zum Wieser Bruch");
        break;
    }
    case 351848:
    {
        returnValue = F("Zum Wiesgen");
        break;
    }
    case 351849:
    {
        returnValue = F("Zum Wiesle");
        break;
    }
    case 351850:
    {
        returnValue = F("Zum Wiesmet");
        break;
    }
    case 351851:
    {
        returnValue = F("Zum Wiesplacken");
        break;
    }
    case 351852:
    {
        returnValue = F("Zum Wietborn");
        break;
    }
    case 351853:
    {
        returnValue = F("Zum Wietgen");
        break;
    }
    case 351854:
    {
        returnValue = F("Zum Wietingsmoor");
        break;
    }
    case 351855:
    {
        returnValue = F("Zum Wietkamp");
        break;
    }
    case 351856:
    {
        returnValue = F("Zum Wietzenbruch");
        break;
    }
    case 351857:
    {
        returnValue = F("Zum Wiggenberg");
        break;
    }
    case 351858:
    {
        returnValue = F("Zum Wiggercke");
        break;
    }
    case 351859:
    {
        returnValue = F("Zum Wikinger");
        break;
    }
    case 351860:
    {
        returnValue = F("Zum Wilbersloog");
        break;
    }
    case 351861:
    {
        returnValue = F("Zum Wildacker");
        break;
    }
    case 351862:
    {
        returnValue = F("Zum Wilden Graben");
        break;
    }
    case 351863:
    {
        returnValue = F("Zum Wilden Grund");
        break;
    }
    case 351864:
    {
        returnValue = F("Zum Wilden Moor");
        break;
    }
    case 351865:
    {
        returnValue = F("Zum Wilden Schmied");
        break;
    }
    case 351866:
    {
        returnValue = F("Zum Wilden Stein");
        break;
    }
    case 351867:
    {
        returnValue = F("Zum Wildenstein");
        break;
    }
    case 351868:
    {
        returnValue = F("Zum Wildgehege");
        break;
    }
    case 351869:
    {
        returnValue = F("Zum Wildhag");
        break;
    }
    case 351870:
    {
        returnValue = F("Zum Wildhagen");
        break;
    }
    case 351871:
    {
        returnValue = F("Zum Wildkamp");
        break;
    }
    case 351872:
    {
        returnValue = F("Zum Wildmeisterhaus");
        break;
    }
    case 351873:
    {
        returnValue = F("Zum Wildpark");
        break;
    }
    case 351874:
    {
        returnValue = F("Zum Wildwasser");
        break;
    }
    case 351875:
    {
        returnValue = F("Zum Wildwechsel");
        break;
    }
    case 351876:
    {
        returnValue = F("Zum Wilhelmsblick");
        break;
    }
    case 351877:
    {
        returnValue = F("Zum Willand");
        break;
    }
    case 351878:
    {
        returnValue = F("Zum Willinger Berg");
        break;
    }
    case 351879:
    {
        returnValue = F("Zum Willkommen");
        break;
    }
    case 351880:
    {
        returnValue = F("Zum Willmsgroden");
        break;
    }
    case 351881:
    {
        returnValue = F("Zum Wilpertskopf");
        break;
    }
    case 351882:
    {
        returnValue = F("Zum Wilsamtal");
        break;
    }
    case 351883:
    {
        returnValue = F("Zum Wilsberg");
        break;
    }
    case 351884:
    {
        returnValue = F("Zum Wilscheider Hof");
        break;
    }
    case 351885:
    {
        returnValue = F("Zum Windberg");
        break;
    }
    case 351886:
    {
        returnValue = F("Zum Winderhitzer");
        break;
    }
    case 351887:
    {
        returnValue = F("Zum Windfang");
        break;
    }
    case 351888:
    {
        returnValue = F("Zum Windfeld");
        break;
    }
    case 351889:
    {
        returnValue = F("Zum Windgraben");
        break;
    }
    case 351890:
    {
        returnValue = F("Zum Windhoch");
        break;
    }
    case 351891:
    {
        returnValue = F("Zum Windhöfchen");
        break;
    }
    case 351892:
    {
        returnValue = F("Zum Windmühlenberg");
        break;
    }
    case 351893:
    {
        returnValue = F("Zum Windorf");
        break;
    }
    case 351894:
    {
        returnValue = F("Zum Windpark");
        break;
    }
    case 351895:
    {
        returnValue = F("Zum Windrad");
        break;
    }
    case 351896:
    {
        returnValue = F("Zum Wingerberg");
        break;
    }
    case 351897:
    {
        returnValue = F("Zum Wingert");
        break;
    }
    case 351898:
    {
        returnValue = F("Zum Wingertsbaum");
        break;
    }
    case 351899:
    {
        returnValue = F("Zum Wingertsberg");
        break;
    }
    case 351900:
    {
        returnValue = F("Zum Wingertsgrund");
        break;
    }
    case 351901:
    {
        returnValue = F("Zum Winkel");
        break;
    }
    case 351902:
    {
        returnValue = F("Zum Winkelacker");
        break;
    }
    case 351903:
    {
        returnValue = F("Zum Winkeler Berg");
        break;
    }
    case 351904:
    {
        returnValue = F("Zum Winkelplatz");
        break;
    }
    case 351905:
    {
        returnValue = F("Zum Winkelteich");
        break;
    }
    case 351906:
    {
        returnValue = F("Zum Winterberg");
        break;
    }
    case 351907:
    {
        returnValue = F("Zum Winterblöcker");
        break;
    }
    case 351908:
    {
        returnValue = F("Zum Winterborn");
        break;
    }
    case 351909:
    {
        returnValue = F("Zum Winterhagen");
        break;
    }
    case 351910:
    {
        returnValue = F("Zum Winterhölzle");
        break;
    }
    case 351911:
    {
        returnValue = F("Zum Winterkasten");
        break;
    }
    case 351912:
    {
        returnValue = F("Zum Wintersberg");
        break;
    }
    case 351913:
    {
        returnValue = F("Zum Winterstrauch");
        break;
    }
    case 351914:
    {
        returnValue = F("Zum Winzelt");
        break;
    }
    case 351915:
    {
        returnValue = F("Zum Winzerhaus");
        break;
    }
    case 351916:
    {
        returnValue = F("Zum Wipperberg");
        break;
    }
    case 351917:
    {
        returnValue = F("Zum Wipperstein");
        break;
    }
    case 351918:
    {
        returnValue = F("Zum Wipperteich");
        break;
    }
    case 351919:
    {
        returnValue = F("Zum Wirbel");
        break;
    }
    case 351920:
    {
        returnValue = F("Zum Wirchensee");
        break;
    }
    case 351921:
    {
        returnValue = F("Zum Wirkrieg");
        break;
    }
    case 351922:
    {
        returnValue = F("Zum Wirtheimer Grund");
        break;
    }
    case 351923:
    {
        returnValue = F("Zum Wirtsberg");
        break;
    }
    case 351924:
    {
        returnValue = F("Zum Wirtsbuck");
        break;
    }
    case 351925:
    {
        returnValue = F("Zum Wirtsgarten");
        break;
    }
    case 351926:
    {
        returnValue = F("Zum Wirtsspezarder Hof");
        break;
    }
    case 351927:
    {
        returnValue = F("Zum Wisch");
        break;
    }
    case 351928:
    {
        returnValue = F("Zum Wischfeld");
        break;
    }
    case 351929:
    {
        returnValue = F("Zum Wischkamp");
        break;
    }
    case 351930:
    {
        returnValue = F("Zum Wismar");
        break;
    }
    case 351931:
    {
        returnValue = F("Zum Wispertal");
        break;
    }
    case 351932:
    {
        returnValue = F("Zum Wisseler See");
        break;
    }
    case 351933:
    {
        returnValue = F("Zum Wisserbach");
        break;
    }
    case 351934:
    {
        returnValue = F("Zum Wittemoor");
        break;
    }
    case 351935:
    {
        returnValue = F("Zum Wittenbrink");
        break;
    }
    case 351936:
    {
        returnValue = F("Zum Wittenrien");
        break;
    }
    case 351937:
    {
        returnValue = F("Zum Wittensand");
        break;
    }
    case 351938:
    {
        returnValue = F("Zum Witthage");
        break;
    }
    case 351939:
    {
        returnValue = F("Zum Wittkopfstein");
        break;
    }
    case 351940:
    {
        returnValue = F("Zum Wittlicher Pfädchen");
        break;
    }
    case 351941:
    {
        returnValue = F("Zum Wittrocksee");
        break;
    }
    case 351942:
    {
        returnValue = F("Zum Wittum");
        break;
    }
    case 351943:
    {
        returnValue = F("Zum Wißberg");
        break;
    }
    case 351944:
    {
        returnValue = F("Zum Wochenend");
        break;
    }
    case 351945:
    {
        returnValue = F("Zum Wohlbach");
        break;
    }
    case 351946:
    {
        returnValue = F("Zum Wohld");
        break;
    }
    case 351947:
    {
        returnValue = F("Zum Wohlenberg");
        break;
    }
    case 351948:
    {
        returnValue = F("Zum Wohlt");
        break;
    }
    case 351949:
    {
        returnValue = F("Zum Wohltfeld");
        break;
    }
    case 351950:
    {
        returnValue = F("Zum Wohnpark");
        break;
    }
    case 351951:
    {
        returnValue = F("Zum Woldberg");
        break;
    }
    case 351952:
    {
        returnValue = F("Zum Wolfental");
        break;
    }
    case 351953:
    {
        returnValue = F("Zum Wolfhagen");
        break;
    }
    case 351954:
    {
        returnValue = F("Zum Wolfholz");
        break;
    }
    case 351955:
    {
        returnValue = F("Zum Wolfsberg");
        break;
    }
    case 351956:
    {
        returnValue = F("Zum Wolfsbusch");
        break;
    }
    case 351957:
    {
        returnValue = F("Zum Wolfsfeld");
        break;
    }
    case 351958:
    {
        returnValue = F("Zum Wolfsgang");
        break;
    }
    case 351959:
    {
        returnValue = F("Zum Wolfsgraben");
        break;
    }
    case 351960:
    {
        returnValue = F("Zum Wolfshagen");
        break;
    }
    case 351961:
    {
        returnValue = F("Zum Wolfskreuz");
        break;
    }
    case 351962:
    {
        returnValue = F("Zum Wolfsloch");
        break;
    }
    case 351963:
    {
        returnValue = F("Zum Wolfsloh");
        break;
    }
    case 351964:
    {
        returnValue = F("Zum Wolfsmeer");
        break;
    }
    case 351965:
    {
        returnValue = F("Zum Wolfstal");
        break;
    }
    case 351966:
    {
        returnValue = F("Zum Wolfswald");
        break;
    }
    case 351967:
    {
        returnValue = F("Zum Wolkenbrunnen");
        break;
    }
    case 351968:
    {
        returnValue = F("Zum Wollenberg");
        break;
    }
    case 351969:
    {
        returnValue = F("Zum Woltershof");
        break;
    }
    case 351970:
    {
        returnValue = F("Zum Woog");
        break;
    }
    case 351971:
    {
        returnValue = F("Zum Woogacker");
        break;
    }
    case 351972:
    {
        returnValue = F("Zum Wulfenschwanz");
        break;
    }
    case 351973:
    {
        returnValue = F("Zum Wulfertal");
        break;
    }
    case 351974:
    {
        returnValue = F("Zum Wullboom");
        break;
    }
    case 351975:
    {
        returnValue = F("Zum Wulzenteich");
        break;
    }
    case 351976:
    {
        returnValue = F("Zum Wurmtal");
        break;
    }
    case 351977:
    {
        returnValue = F("Zum Wuzenfelsen");
        break;
    }
    case 351978:
    {
        returnValue = F("Zum Wyler Meer");
        break;
    }
    case 351979:
    {
        returnValue = F("Zum Wächs");
        break;
    }
    case 351980:
    {
        returnValue = F("Zum Wäldchen");
        break;
    }
    case 351981:
    {
        returnValue = F("Zum Wäldele");
        break;
    }
    case 351982:
    {
        returnValue = F("Zum Wäldle");
        break;
    }
    case 351983:
    {
        returnValue = F("Zum Wälenwald");
        break;
    }
    case 351984:
    {
        returnValue = F("Zum Wöhrden");
        break;
    }
    case 351985:
    {
        returnValue = F("Zum Wöhren");
        break;
    }
    case 351986:
    {
        returnValue = F("Zum Wölschberg");
        break;
    }
    case 351987:
    {
        returnValue = F("Zum Wörth");
        break;
    }
    case 351988:
    {
        returnValue = F("Zum Würmel");
        break;
    }
    case 351989:
    {
        returnValue = F("Zum Würtzenacker");
        break;
    }
    case 351990:
    {
        returnValue = F("Zum Wüstenhof");
        break;
    }
    case 351991:
    {
        returnValue = F("Zum Yachthafen");
        break;
    }
    case 351992:
    {
        returnValue = F("Zum Zahnweber");
        break;
    }
    case 351993:
    {
        returnValue = F("Zum Zander");
        break;
    }
    case 351994:
    {
        returnValue = F("Zum Zankelberg");
        break;
    }
    case 351995:
    {
        returnValue = F("Zum Zapfsgraben");
        break;
    }
    case 351996:
    {
        returnValue = F("Zum Zarth");
        break;
    }
    case 351997:
    {
        returnValue = F("Zum Zeckenstein");
        break;
    }
    case 351998:
    {
        returnValue = F("Zum Zehntgarten");
        break;
    }
    case 351999:
    {
        returnValue = F("Zum Zehnthof");
        break;
    }
    case 352000:
    {
        returnValue = F("Zum Zeitzer Blick");
        break;
    }
    case 352001:
    {
        returnValue = F("Zum Zelgle");
        break;
    }
    case 352002:
    {
        returnValue = F("Zum Zellweg");
        break;
    }
    case 352003:
    {
        returnValue = F("Zum Zeltplatz");
        break;
    }
    case 352004:
    {
        returnValue = F("Zum Zickenpuhl");
        break;
    }
    case 352005:
    {
        returnValue = F("Zum Ziegeleiteich");
        break;
    }
    case 352006:
    {
        returnValue = F("Zum Ziegelmeister");
        break;
    }
    case 352007:
    {
        returnValue = F("Zum Ziegelteich");
        break;
    }
    case 352008:
    {
        returnValue = F("Zum Ziegelweiher");
        break;
    }
    case 352009:
    {
        returnValue = F("Zum Ziegenberg");
        break;
    }
    case 352010:
    {
        returnValue = F("Zum Ziegenbusch");
        break;
    }
    case 352011:
    {
        returnValue = F("Zum Ziegenhals");
        break;
    }
    case 352012:
    {
        returnValue = F("Zum Ziegenkopf");
        break;
    }
    case 352013:
    {
        returnValue = F("Zum Ziegental");
        break;
    }
    case 352014:
    {
        returnValue = F("Zum Zieglermoor");
        break;
    }
    case 352015:
    {
        returnValue = F("Zum Ziehberg");
        break;
    }
    case 352016:
    {
        returnValue = F("Zum Ziemberg");
        break;
    }
    case 352017:
    {
        returnValue = F("Zum Zierschberg");
        break;
    }
    case 352018:
    {
        returnValue = F("Zum Ziestsee");
        break;
    }
    case 352019:
    {
        returnValue = F("Zum Zimmergrund");
        break;
    }
    case 352020:
    {
        returnValue = F("Zum Zimmermannsplatz");
        break;
    }
    case 352021:
    {
        returnValue = F("Zum Zimmerplatz");
        break;
    }
    case 352022:
    {
        returnValue = F("Zum Zinkenschlag");
        break;
    }
    case 352023:
    {
        returnValue = F("Zum Zipfelteich");
        break;
    }
    case 352024:
    {
        returnValue = F("Zum Ziskauer Tal");
        break;
    }
    case 352025:
    {
        returnValue = F("Zum Zollamt");
        break;
    }
    case 352026:
    {
        returnValue = F("Zum Zollhaus");
        break;
    }
    case 352027:
    {
        returnValue = F("Zum Zollstock");
        break;
    }
    case 352028:
    {
        returnValue = F("Zum Zottbach");
        break;
    }
    case 352029:
    {
        returnValue = F("Zum Zschopautal");
        break;
    }
    case 352030:
    {
        returnValue = F("Zum Zuckerkamp");
        break;
    }
    case 352031:
    {
        returnValue = F("Zum Zuckmantel");
        break;
    }
    case 352032:
    {
        returnValue = F("Zum Zungenkai");
        break;
    }
    case 352033:
    {
        returnValue = F("Zum Zungerhof");
        break;
    }
    case 352034:
    {
        returnValue = F("Zum Zuschlag");
        break;
    }
    case 352035:
    {
        returnValue = F("Zum Zwerchgraben");
        break;
    }
    case 352036:
    {
        returnValue = F("Zum Zwergberg");
        break;
    }
    case 352037:
    {
        returnValue = F("Zum Zwickel");
        break;
    }
    case 352038:
    {
        returnValue = F("Zum alten Backhaus");
        break;
    }
    case 352039:
    {
        returnValue = F("Zum alten Bahndamm");
        break;
    }
    case 352040:
    {
        returnValue = F("Zum alten Bahnhof");
        break;
    }
    case 352041:
    {
        returnValue = F("Zum alten Berg");
        break;
    }
    case 352042:
    {
        returnValue = F("Zum alten Brauhaus");
        break;
    }
    case 352043:
    {
        returnValue = F("Zum alten Brunnen");
        break;
    }
    case 352044:
    {
        returnValue = F("Zum alten Dorf");
        break;
    }
    case 352045:
    {
        returnValue = F("Zum alten Dreifrankenstein");
        break;
    }
    case 352046:
    {
        returnValue = F("Zum alten Eschbach");
        break;
    }
    case 352047:
    {
        returnValue = F("Zum alten Felde");
        break;
    }
    case 352048:
    {
        returnValue = F("Zum alten Flugplatz");
        break;
    }
    case 352049:
    {
        returnValue = F("Zum alten Forstamt");
        break;
    }
    case 352050:
    {
        returnValue = F("Zum alten Forsthaus");
        break;
    }
    case 352051:
    {
        returnValue = F("Zum alten Friedhof");
        break;
    }
    case 352052:
    {
        returnValue = F("Zum alten Gaswerk");
        break;
    }
    case 352053:
    {
        returnValue = F("Zum alten Gut");
        break;
    }
    case 352054:
    {
        returnValue = F("Zum alten Gutshaus");
        break;
    }
    case 352055:
    {
        returnValue = F("Zum alten Gutshof");
        break;
    }
    case 352056:
    {
        returnValue = F("Zum alten Haltepunkt");
        break;
    }
    case 352057:
    {
        returnValue = F("Zum alten Heck");
        break;
    }
    case 352058:
    {
        returnValue = F("Zum alten Hof");
        break;
    }
    case 352059:
    {
        returnValue = F("Zum alten Lager");
        break;
    }
    case 352060:
    {
        returnValue = F("Zum alten Mühlenweg");
        break;
    }
    case 352061:
    {
        returnValue = F("Zum alten Mühlgraben");
        break;
    }
    case 352062:
    {
        returnValue = F("Zum alten Obstgarten");
        break;
    }
    case 352063:
    {
        returnValue = F("Zum alten Park");
        break;
    }
    case 352064:
    {
        returnValue = F("Zum alten Roth");
        break;
    }
    case 352065:
    {
        returnValue = F("Zum alten Schießstand");
        break;
    }
    case 352066:
    {
        returnValue = F("Zum alten Schulgarten");
        break;
    }
    case 352067:
    {
        returnValue = F("Zum alten Schulhof");
        break;
    }
    case 352068:
    {
        returnValue = F("Zum alten Schöpfwerk");
        break;
    }
    case 352069:
    {
        returnValue = F("Zum alten Sportplatz");
        break;
    }
    case 352070:
    {
        returnValue = F("Zum alten Steinbruch");
        break;
    }
    case 352071:
    {
        returnValue = F("Zum alten Strichen");
        break;
    }
    case 352072:
    {
        returnValue = F("Zum alten Strässli");
        break;
    }
    case 352073:
    {
        returnValue = F("Zum alten Stützpunkt");
        break;
    }
    case 352074:
    {
        returnValue = F("Zum alten Sägewerk");
        break;
    }
    case 352075:
    {
        returnValue = F("Zum alten Teich");
        break;
    }
    case 352076:
    {
        returnValue = F("Zum alten Vorwerk");
        break;
    }
    case 352077:
    {
        returnValue = F("Zum alten Wasserturm");
        break;
    }
    case 352078:
    {
        returnValue = F("Zum alten Wasserwerk");
        break;
    }
    case 352079:
    {
        returnValue = F("Zum alten Wehr");
        break;
    }
    case 352080:
    {
        returnValue = F("Zum alten Weiher");
        break;
    }
    case 352081:
    {
        returnValue = F("Zum alten Zoll");
        break;
    }
    case 352082:
    {
        returnValue = F("Zum baierischen Feld");
        break;
    }
    case 352083:
    {
        returnValue = F("Zum blauen Berg");
        break;
    }
    case 352084:
    {
        returnValue = F("Zum breiten Riep");
        break;
    }
    case 352085:
    {
        returnValue = F("Zum feuchten Grund");
        break;
    }
    case 352086:
    {
        returnValue = F("Zum goldenen Horn");
        break;
    }
    case 352087:
    {
        returnValue = F("Zum großen Berg");
        break;
    }
    case 352088:
    {
        returnValue = F("Zum großen Feld");
        break;
    }
    case 352089:
    {
        returnValue = F("Zum großen Garten");
        break;
    }
    case 352090:
    {
        returnValue = F("Zum großen Holz");
        break;
    }
    case 352091:
    {
        returnValue = F("Zum grünen Herz");
        break;
    }
    case 352092:
    {
        returnValue = F("Zum grünen Weiher");
        break;
    }
    case 352093:
    {
        returnValue = F("Zum guten Hirten");
        break;
    }
    case 352094:
    {
        returnValue = F("Zum halben Mond");
        break;
    }
    case 352095:
    {
        returnValue = F("Zum hohen Dreisch");
        break;
    }
    case 352096:
    {
        returnValue = F("Zum hohen Feld");
        break;
    }
    case 352097:
    {
        returnValue = F("Zum hohen Felde");
        break;
    }
    case 352098:
    {
        returnValue = F("Zum hohen Graben");
        break;
    }
    case 352099:
    {
        returnValue = F("Zum hohen Rain");
        break;
    }
    case 352100:
    {
        returnValue = F("Zum hohen Wichel");
        break;
    }
    case 352101:
    {
        returnValue = F("Zum kalten Tal");
        break;
    }
    case 352102:
    {
        returnValue = F("Zum kleinen Berg");
        break;
    }
    case 352103:
    {
        returnValue = F("Zum kleinen Feldchen");
        break;
    }
    case 352104:
    {
        returnValue = F("Zum kleinen Holz");
        break;
    }
    case 352105:
    {
        returnValue = F("Zum kleinen Holze");
        break;
    }
    case 352106:
    {
        returnValue = F("Zum kleinen Muck");
        break;
    }
    case 352107:
    {
        returnValue = F("Zum kurzen Felde");
        break;
    }
    case 352108:
    {
        returnValue = F("Zum kühlen Grund");
        break;
    }
    case 352109:
    {
        returnValue = F("Zum kühlen Grunde");
        break;
    }
    case 352110:
    {
        returnValue = F("Zum langen Anger");
        break;
    }
    case 352111:
    {
        returnValue = F("Zum langen Berg");
        break;
    }
    case 352112:
    {
        returnValue = F("Zum langen Lauch");
        break;
    }
    case 352113:
    {
        returnValue = F("Zum langen Stein");
        break;
    }
    case 352114:
    {
        returnValue = F("Zum langen Strang");
        break;
    }
    case 352115:
    {
        returnValue = F("Zum langen Tal");
        break;
    }
    case 352116:
    {
        returnValue = F("Zum langen Weg");
        break;
    }
    case 352117:
    {
        returnValue = F("Zum lieblichen Nieplitzblick");
        break;
    }
    case 352118:
    {
        returnValue = F("Zum neuen Damm");
        break;
    }
    case 352119:
    {
        returnValue = F("Zum neuen Friedhof");
        break;
    }
    case 352120:
    {
        returnValue = F("Zum neuen Schloß");
        break;
    }
    case 352121:
    {
        returnValue = F("Zum neuen See");
        break;
    }
    case 352122:
    {
        returnValue = F("Zum schwarzen Pohl");
        break;
    }
    case 352123:
    {
        returnValue = F("Zum schönen Bild");
        break;
    }
    case 352124:
    {
        returnValue = F("Zum schönen Werder");
        break;
    }
    case 352125:
    {
        returnValue = F("Zum singenden Tal");
        break;
    }
    case 352126:
    {
        returnValue = F("Zum stillen Winkel");
        break;
    }
    case 352127:
    {
        returnValue = F("Zum tiefen Weg");
        break;
    }
    case 352128:
    {
        returnValue = F("Zum vorderen Weinberg");
        break;
    }
    case 352129:
    {
        returnValue = F("Zum weißen Kreuz");
        break;
    }
    case 352130:
    {
        returnValue = F("Zum Äfel");
        break;
    }
    case 352131:
    {
        returnValue = F("Zum Ährenfeld");
        break;
    }
    case 352132:
    {
        returnValue = F("Zum Änger");
        break;
    }
    case 352133:
    {
        returnValue = F("Zum Öhlchen");
        break;
    }
    case 352134:
    {
        returnValue = F("Zum Öhmd");
        break;
    }
    case 352135:
    {
        returnValue = F("Zum Öhr");
        break;
    }
    case 352136:
    {
        returnValue = F("Zum Öhrbach");
        break;
    }
    case 352137:
    {
        returnValue = F("Zum Ölbahnhof");
        break;
    }
    case 352138:
    {
        returnValue = F("Zum Ölberg");
        break;
    }
    case 352139:
    {
        returnValue = F("Zum Ölgrund");
        break;
    }
    case 352140:
    {
        returnValue = F("Zum Ölhafen");
        break;
    }
    case 352141:
    {
        returnValue = F("Zum Ölper");
        break;
    }
    case 352142:
    {
        returnValue = F("Zum Ölpersee");
        break;
    }
    case 352143:
    {
        returnValue = F("Zum Ölsbach");
        break;
    }
    case 352144:
    {
        returnValue = F("Zum Ölteich");
        break;
    }
    case 352145:
    {
        returnValue = F("Zum Örtlinger Kreuz");
        break;
    }
    case 352146:
    {
        returnValue = F("Zum Ösch");
        break;
    }
    case 352147:
    {
        returnValue = F("Zum Österbach");
        break;
    }
    case 352148:
    {
        returnValue = F("Zum Österreich");
        break;
    }
    case 352149:
    {
        returnValue = F("Zum Östertal");
        break;
    }
    case 352150:
    {
        returnValue = F("Zum Ötterstal");
        break;
    }
    case 352151:
    {
        returnValue = F("Zum Übergang");
        break;
    }
    case 352152:
    {
        returnValue = F("Zum Ülkeweg");
        break;
    }
    case 352153:
    {
        returnValue = F("Zum Ülkmeer");
        break;
    }
    case 352154:
    {
        returnValue = F("Zum Ützenkeller");
        break;
    }
    case 352155:
    {
        returnValue = F("Zum-Jungen-Str.");
        break;
    }
    case 352156:
    {
        returnValue = F("ZumSodhof");
        break;
    }
    case 352157:
    {
        returnValue = F("Zumach-Gärtchen");
        break;
    }
    case 352158:
    {
        returnValue = F("Zumbroockstr.");
        break;
    }
    case 352159:
    {
        returnValue = F("Zumbuschstr.");
        break;
    }
    case 352160:
    {
        returnValue = F("Zumdahl");
        break;
    }
    case 352161:
    {
        returnValue = F("Zumdiekskamp");
        break;
    }
    case 352162:
    {
        returnValue = F("Zumdreschstr.");
        break;
    }
    case 352163:
    {
        returnValue = F("Zumhagen Hof");
        break;
    }
    case 352164:
    {
        returnValue = F("Zumhofer Str.");
        break;
    }
    case 352165:
    {
        returnValue = F("Zumlohpark");
        break;
    }
    case 352166:
    {
        returnValue = F("Zumlohstr.");
        break;
    }
    case 352167:
    {
        returnValue = F("Zumpestr.");
        break;
    }
    case 352168:
    {
        returnValue = F("Zumpeweg");
        break;
    }
    case 352169:
    {
        returnValue = F("Zumpweg");
        break;
    }
    case 352170:
    {
        returnValue = F("Zumriederstr.");
        break;
    }
    case 352171:
    {
        returnValue = F("Zumroda");
        break;
    }
    case 352172:
    {
        returnValue = F("Zumsandestr.");
        break;
    }
    case 352173:
    {
        returnValue = F("Zumsandeweg");
        break;
    }
    case 352174:
    {
        returnValue = F("Zumsteegstr.");
        break;
    }
    case 352175:
    {
        returnValue = F("Zumsteinstr.");
        break;
    }
    case 352176:
    {
        returnValue = F("Zumwaldestr.");
        break;
    }
    case 352177:
    {
        returnValue = F("Zumweiler Str.");
        break;
    }
    case 352178:
    {
        returnValue = F("Zundelberghaldenweg");
        break;
    }
    case 352179:
    {
        returnValue = F("Zundelbergsteige");
        break;
    }
    case 352180:
    {
        returnValue = F("Zundelbergstr.");
        break;
    }
    case 352181:
    {
        returnValue = F("Zundelbergweg");
        break;
    }
    case 352182:
    {
        returnValue = F("Zundelweg");
        break;
    }
    case 352183:
    {
        returnValue = F("Zundlerweg");
        break;
    }
    case 352184:
    {
        returnValue = F("Zunftgasse");
        break;
    }
    case 352185:
    {
        returnValue = F("Zunfthausgasse");
        break;
    }
    case 352186:
    {
        returnValue = F("Zunftmeisterstr.");
        break;
    }
    case 352187:
    {
        returnValue = F("Zunftstr.");
        break;
    }
    case 352188:
    {
        returnValue = F("Zunftweg");
        break;
    }
    case 352189:
    {
        returnValue = F("Zunftwiese");
        break;
    }
    case 352190:
    {
        returnValue = F("Zunftwinkel");
        break;
    }
    case 352191:
    {
        returnValue = F("Zungenstr.");
        break;
    }
    case 352192:
    {
        returnValue = F("Zunham");
        break;
    }
    case 352193:
    {
        returnValue = F("Zunhammerweg");
        break;
    }
    case 352194:
    {
        returnValue = F("Zunkenstr.");
        break;
    }
    case 352195:
    {
        returnValue = F("Zunsweirerweg");
        break;
    }
    case 352196:
    {
        returnValue = F("Zunzinger Str.");
        break;
    }
    case 352197:
    {
        returnValue = F("Zuoltestr.");
        break;
    }
    case 352198:
    {
        returnValue = F("Zuppinger Str.");
        break;
    }
    case 352199:
    {
        returnValue = F("Zuppingerstr.");
        break;
    }
    case 352200:
    {
        returnValue = F("Zuppingerweg");
        break;
    }
    case 352201:
    {
        returnValue = F("Zur Aab");
        break;
    }
    case 352202:
    {
        returnValue = F("Zur Aabrücke");
        break;
    }
    case 352203:
    {
        returnValue = F("Zur Aacherwiese");
        break;
    }
    case 352204:
    {
        returnValue = F("Zur Aalräucherei");
        break;
    }
    case 352205:
    {
        returnValue = F("Zur Abensfurt");
        break;
    }
    case 352206:
    {
        returnValue = F("Zur Abgunst");
        break;
    }
    case 352207:
    {
        returnValue = F("Zur Ablage");
        break;
    }
    case 352208:
    {
        returnValue = F("Zur Abtei");
        break;
    }
    case 352209:
    {
        returnValue = F("Zur Abtsküche");
        break;
    }
    case 352210:
    {
        returnValue = F("Zur Ach");
        break;
    }
    case 352211:
    {
        returnValue = F("Zur Achimer Marsch");
        break;
    }
    case 352212:
    {
        returnValue = F("Zur Achmühle");
        break;
    }
    case 352213:
    {
        returnValue = F("Zur Acht");
        break;
    }
    case 352214:
    {
        returnValue = F("Zur Achtel");
        break;
    }
    case 352215:
    {
        returnValue = F("Zur Addinggaste");
        break;
    }
    case 352216:
    {
        returnValue = F("Zur Adelburg");
        break;
    }
    case 352217:
    {
        returnValue = F("Zur Adelbybek");
        break;
    }
    case 352218:
    {
        returnValue = F("Zur Adelgrube");
        break;
    }
    case 352219:
    {
        returnValue = F("Zur Adelsklinge");
        break;
    }
    case 352220:
    {
        returnValue = F("Zur Adlerseige");
        break;
    }
    case 352221:
    {
        returnValue = F("Zur Affenschlucht");
        break;
    }
    case 352222:
    {
        returnValue = F("Zur Aftepforte");
        break;
    }
    case 352223:
    {
        returnValue = F("Zur Agatha");
        break;
    }
    case 352224:
    {
        returnValue = F("Zur Aggerhalle");
        break;
    }
    case 352225:
    {
        returnValue = F("Zur Agrippastr.");
        break;
    }
    case 352226:
    {
        returnValue = F("Zur Agro");
        break;
    }
    case 352227:
    {
        returnValue = F("Zur Ahe");
        break;
    }
    case 352228:
    {
        returnValue = F("Zur Ahlsburg");
        break;
    }
    case 352229:
    {
        returnValue = F("Zur Ahlwiese");
        break;
    }
    case 352230:
    {
        returnValue = F("Zur Ahnenstätte");
        break;
    }
    case 352231:
    {
        returnValue = F("Zur Ahrensdorfer Heide");
        break;
    }
    case 352232:
    {
        returnValue = F("Zur Ahrtalstr.");
        break;
    }
    case 352233:
    {
        returnValue = F("Zur Aisch");
        break;
    }
    case 352234:
    {
        returnValue = F("Zur Akelei");
        break;
    }
    case 352235:
    {
        returnValue = F("Zur Aktien");
        break;
    }
    case 352236:
    {
        returnValue = F("Zur Alche");
        break;
    }
    case 352237:
    {
        returnValue = F("Zur Alexanderburg");
        break;
    }
    case 352238:
    {
        returnValue = F("Zur Alhuser Ahe");
        break;
    }
    case 352239:
    {
        returnValue = F("Zur Alkenkuhke");
        break;
    }
    case 352240:
    {
        returnValue = F("Zur Allee");
        break;
    }
    case 352241:
    {
        returnValue = F("Zur Aller");
        break;
    }
    case 352242:
    {
        returnValue = F("Zur Allerhaube");
        break;
    }
    case 352243:
    {
        returnValue = F("Zur Allerwelle");
        break;
    }
    case 352244:
    {
        returnValue = F("Zur Allmannshöhe");
        break;
    }
    case 352245:
    {
        returnValue = F("Zur Allmende");
        break;
    }
    case 352246:
    {
        returnValue = F("Zur Alm");
        break;
    }
    case 352247:
    {
        returnValue = F("Zur Almeke");
        break;
    }
    case 352248:
    {
        returnValue = F("Zur Alsenz");
        break;
    }
    case 352249:
    {
        returnValue = F("Zur Alten Bahn");
        break;
    }
    case 352250:
    {
        returnValue = F("Zur Alten Baumschule");
        break;
    }
    case 352251:
    {
        returnValue = F("Zur Alten Brauerei");
        break;
    }
    case 352252:
    {
        returnValue = F("Zur Alten Brauquelle");
        break;
    }
    case 352253:
    {
        returnValue = F("Zur Alten Brücke");
        break;
    }
    case 352254:
    {
        returnValue = F("Zur Alten Burg");
        break;
    }
    case 352255:
    {
        returnValue = F("Zur Alten Bäckerei");
        break;
    }
    case 352256:
    {
        returnValue = F("Zur Alten Donau");
        break;
    }
    case 352257:
    {
        returnValue = F("Zur Alten Dorfstr.");
        break;
    }
    case 352258:
    {
        returnValue = F("Zur Alten Dorfstätte");
        break;
    }
    case 352259:
    {
        returnValue = F("Zur Alten Eiche");
        break;
    }
    case 352260:
    {
        returnValue = F("Zur Alten Elbe");
        break;
    }
    case 352261:
    {
        returnValue = F("Zur Alten Elektrowärme");
        break;
    }
    case 352262:
    {
        returnValue = F("Zur Alten Else");
        break;
    }
    case 352263:
    {
        returnValue = F("Zur Alten Elster");
        break;
    }
    case 352264:
    {
        returnValue = F("Zur Alten Ems");
        break;
    }
    case 352265:
    {
        returnValue = F("Zur Alten Feldsaline");
        break;
    }
    case 352266:
    {
        returnValue = F("Zur Alten Feuerwache");
        break;
    }
    case 352267:
    {
        returnValue = F("Zur Alten Fähre");
        break;
    }
    case 352268:
    {
        returnValue = F("Zur Alten Färberei");
        break;
    }
    case 352269:
    {
        returnValue = F("Zur Alten Försterei");
        break;
    }
    case 352270:
    {
        returnValue = F("Zur Alten Geeste");
        break;
    }
    case 352271:
    {
        returnValue = F("Zur Alten Gießerei");
        break;
    }
    case 352272:
    {
        returnValue = F("Zur Alten Glashütte");
        break;
    }
    case 352273:
    {
        returnValue = F("Zur Alten Gärtnerei");
        break;
    }
    case 352274:
    {
        returnValue = F("Zur Alten Havel");
        break;
    }
    case 352275:
    {
        returnValue = F("Zur Alten Heeresstr.");
        break;
    }
    case 352276:
    {
        returnValue = F("Zur Alten Heerstr.");
        break;
    }
    case 352277:
    {
        returnValue = F("Zur Alten Hege");
        break;
    }
    case 352278:
    {
        returnValue = F("Zur Alten Heide");
        break;
    }
    case 352279:
    {
        returnValue = F("Zur Alten Hohle");
        break;
    }
    case 352280:
    {
        returnValue = F("Zur Alten Kaserne");
        break;
    }
    case 352281:
    {
        returnValue = F("Zur Alten Kate");
        break;
    }
    case 352282:
    {
        returnValue = F("Zur Alten Kirche");
        break;
    }
    case 352283:
    {
        returnValue = F("Zur Alten Kirchstelle");
        break;
    }
    case 352284:
    {
        returnValue = F("Zur Alten Kolonie");
        break;
    }
    case 352285:
    {
        returnValue = F("Zur Alten Linde");
        break;
    }
    case 352286:
    {
        returnValue = F("Zur Alten Maar");
        break;
    }
    case 352287:
    {
        returnValue = F("Zur Alten Malzfabrik");
        break;
    }
    case 352288:
    {
        returnValue = F("Zur Alten Manslagter Schmiede");
        break;
    }
    case 352289:
    {
        returnValue = F("Zur Alten Molkerei");
        break;
    }
    case 352290:
    {
        returnValue = F("Zur Alten Mutter");
        break;
    }
    case 352291:
    {
        returnValue = F("Zur Alten Mühle");
        break;
    }
    case 352292:
    {
        returnValue = F("Zur Alten Niers");
        break;
    }
    case 352293:
    {
        returnValue = F("Zur Alten Niers (neu)");
        break;
    }
    case 352294:
    {
        returnValue = F("Zur Alten Oder");
        break;
    }
    case 352295:
    {
        returnValue = F("Zur Alten Post");
        break;
    }
    case 352296:
    {
        returnValue = F("Zur Alten Poststr.");
        break;
    }
    case 352297:
    {
        returnValue = F("Zur Alten Pumpe");
        break;
    }
    case 352298:
    {
        returnValue = F("Zur Alten Rott");
        break;
    }
    case 352299:
    {
        returnValue = F("Zur Alten Sandkuhle");
        break;
    }
    case 352300:
    {
        returnValue = F("Zur Alten Schanze");
        break;
    }
    case 352301:
    {
        returnValue = F("Zur Alten Scheune");
        break;
    }
    case 352302:
    {
        returnValue = F("Zur Alten Schießstatt");
        break;
    }
    case 352303:
    {
        returnValue = F("Zur Alten Schleuse");
        break;
    }
    case 352304:
    {
        returnValue = F("Zur Alten Schmiede");
        break;
    }
    case 352305:
    {
        returnValue = F("Zur Alten Schule");
        break;
    }
    case 352306:
    {
        returnValue = F("Zur Alten Schäferei");
        break;
    }
    case 352307:
    {
        returnValue = F("Zur Alten Seite");
        break;
    }
    case 352308:
    {
        returnValue = F("Zur Alten Sellerschule");
        break;
    }
    case 352309:
    {
        returnValue = F("Zur Alten Siedlung");
        break;
    }
    case 352310:
    {
        returnValue = F("Zur Alten Stadtgärtnerei");
        break;
    }
    case 352311:
    {
        returnValue = F("Zur Alten Sternwarte");
        break;
    }
    case 352312:
    {
        returnValue = F("Zur Alten Säge");
        break;
    }
    case 352313:
    {
        returnValue = F("Zur Alten Tongrube");
        break;
    }
    case 352314:
    {
        returnValue = F("Zur Alten Verzinkerei");
        break;
    }
    case 352315:
    {
        returnValue = F("Zur Alten Vogelstange");
        break;
    }
    case 352316:
    {
        returnValue = F("Zur Alten Wassermühle");
        break;
    }
    case 352317:
    {
        returnValue = F("Zur Alten Weberei");
        break;
    }
    case 352318:
    {
        returnValue = F("Zur Alten Wehr");
        break;
    }
    case 352319:
    {
        returnValue = F("Zur Alten Weide");
        break;
    }
    case 352320:
    {
        returnValue = F("Zur Alten Wiese");
        break;
    }
    case 352321:
    {
        returnValue = F("Zur Alten Windmühle");
        break;
    }
    case 352322:
    {
        returnValue = F("Zur Alten Ziegelei");
        break;
    }
    case 352323:
    {
        returnValue = F("Zur Alten Zimmerei");
        break;
    }
    case 352324:
    {
        returnValue = F("Zur Alten Zollbrücke");
        break;
    }
    case 352325:
    {
        returnValue = F("Zur Alten Ölmühle");
        break;
    }
    case 352326:
    {
        returnValue = F("Zur Altenau");
        break;
    }
    case 352327:
    {
        returnValue = F("Zur Altenauquelle");
        break;
    }
    case 352328:
    {
        returnValue = F("Zur Altenheimstätte");
        break;
    }
    case 352329:
    {
        returnValue = F("Zur Altmühl");
        break;
    }
    case 352330:
    {
        returnValue = F("Zur Altscheuer");
        break;
    }
    case 352331:
    {
        returnValue = F("Zur Altwicke");
        break;
    }
    case 352332:
    {
        returnValue = F("Zur Altwiese");
        break;
    }
    case 352333:
    {
        returnValue = F("Zur Alwine");
        break;
    }
    case 352334:
    {
        returnValue = F("Zur Ammelshelle");
        break;
    }
    case 352335:
    {
        returnValue = F("Zur Amper");
        break;
    }
    case 352336:
    {
        returnValue = F("Zur Amperau");
        break;
    }
    case 352337:
    {
        returnValue = F("Zur Amperschlucht");
        break;
    }
    case 352338:
    {
        returnValue = F("Zur Amtmannskluft");
        break;
    }
    case 352339:
    {
        returnValue = F("Zur Amtmannswiese");
        break;
    }
    case 352340:
    {
        returnValue = F("Zur Amtsheide");
        break;
    }
    case 352341:
    {
        returnValue = F("Zur Amtsschlade");
        break;
    }
    case 352342:
    {
        returnValue = F("Zur Angel");
        break;
    }
    case 352343:
    {
        returnValue = F("Zur Anger");
        break;
    }
    case 352344:
    {
        returnValue = F("Zur Anhöhe");
        break;
    }
    case 352345:
    {
        returnValue = F("Zur Anneliese");
        break;
    }
    case 352346:
    {
        returnValue = F("Zur Antoniusquelle");
        break;
    }
    case 352347:
    {
        returnValue = F("Zur Antreff");
        break;
    }
    case 352348:
    {
        returnValue = F("Zur Antrift");
        break;
    }
    case 352349:
    {
        returnValue = F("Zur Apfelallee");
        break;
    }
    case 352350:
    {
        returnValue = F("Zur Apfelwiese");
        break;
    }
    case 352351:
    {
        returnValue = F("Zur Apotheke");
        break;
    }
    case 352352:
    {
        returnValue = F("Zur Appelallee");
        break;
    }
    case 352353:
    {
        returnValue = F("Zur Arbeiterturnhalle");
        break;
    }
    case 352354:
    {
        returnValue = F("Zur Arche");
        break;
    }
    case 352355:
    {
        returnValue = F("Zur Arnewand");
        break;
    }
    case 352356:
    {
        returnValue = F("Zur Arnsburg");
        break;
    }
    case 352357:
    {
        returnValue = F("Zur Arscharre");
        break;
    }
    case 352358:
    {
        returnValue = F("Zur Asbeck");
        break;
    }
    case 352359:
    {
        returnValue = F("Zur Aschachquelle");
        break;
    }
    case 352360:
    {
        returnValue = F("Zur Aselbucht");
        break;
    }
    case 352361:
    {
        returnValue = F("Zur Aseler Gaste");
        break;
    }
    case 352362:
    {
        returnValue = F("Zur Ath");
        break;
    }
    case 352363:
    {
        returnValue = F("Zur Atzeltrift");
        break;
    }
    case 352364:
    {
        returnValue = F("Zur Atzelwiese");
        break;
    }
    case 352365:
    {
        returnValue = F("Zur Au");
        break;
    }
    case 352366:
    {
        returnValue = F("Zur Aubinger Lohe");
        break;
    }
    case 352367:
    {
        returnValue = F("Zur Audell");
        break;
    }
    case 352368:
    {
        returnValue = F("Zur Aue");
        break;
    }
    case 352369:
    {
        returnValue = F("Zur Auelsley");
        break;
    }
    case 352370:
    {
        returnValue = F("Zur Auerbach");
        break;
    }
    case 352371:
    {
        returnValue = F("Zur Aumühle");
        break;
    }
    case 352372:
    {
        returnValue = F("Zur Aussicht");
        break;
    }
    case 352373:
    {
        returnValue = F("Zur Aussichtswarte");
        break;
    }
    case 352374:
    {
        returnValue = F("Zur Austria");
        break;
    }
    case 352375:
    {
        returnValue = F("Zur Autobahn");
        break;
    }
    case 352376:
    {
        returnValue = F("Zur Auwiese");
        break;
    }
    case 352377:
    {
        returnValue = F("Zur Außengrube");
        break;
    }
    case 352378:
    {
        returnValue = F("Zur Axels Höhe");
        break;
    }
    case 352379:
    {
        returnValue = F("Zur Axt");
        break;
    }
    case 352380:
    {
        returnValue = F("Zur Baar");
        break;
    }
    case 352381:
    {
        returnValue = F("Zur Bacher Mühle");
        break;
    }
    case 352382:
    {
        returnValue = F("Zur Bachschänke");
        break;
    }
    case 352383:
    {
        returnValue = F("Zur Bachstr.");
        break;
    }
    case 352384:
    {
        returnValue = F("Zur Bachwiese");
        break;
    }
    case 352385:
    {
        returnValue = F("Zur Badeanstalt");
        break;
    }
    case 352386:
    {
        returnValue = F("Zur Badestelle");
        break;
    }
    case 352387:
    {
        returnValue = F("Zur Baeyerhöhe");
        break;
    }
    case 352388:
    {
        returnValue = F("Zur Bahn");
        break;
    }
    case 352389:
    {
        returnValue = F("Zur Bahnbäke");
        break;
    }
    case 352390:
    {
        returnValue = F("Zur Bahnmeisterei");
        break;
    }
    case 352391:
    {
        returnValue = F("Zur Bahnschau");
        break;
    }
    case 352392:
    {
        returnValue = F("Zur Bahnsiedlung");
        break;
    }
    case 352393:
    {
        returnValue = F("Zur Baldenau");
        break;
    }
    case 352394:
    {
        returnValue = F("Zur Ballersleite");
        break;
    }
    case 352395:
    {
        returnValue = F("Zur Ballonbuche");
        break;
    }
    case 352396:
    {
        returnValue = F("Zur Banheide");
        break;
    }
    case 352397:
    {
        returnValue = F("Zur Bannheck");
        break;
    }
    case 352398:
    {
        returnValue = F("Zur Barbe");
        break;
    }
    case 352399:
    {
        returnValue = F("Zur Barenburg");
        break;
    }
    case 352400:
    {
        returnValue = F("Zur Bargeriede");
        break;
    }
    case 352401:
    {
        returnValue = F("Zur Barlage");
        break;
    }
    case 352402:
    {
        returnValue = F("Zur Barriere");
        break;
    }
    case 352403:
    {
        returnValue = F("Zur Barthe");
        break;
    }
    case 352404:
    {
        returnValue = F("Zur Basilika");
        break;
    }
    case 352405:
    {
        returnValue = F("Zur Bauernbrücke");
        break;
    }
    case 352406:
    {
        returnValue = F("Zur Bauernmühle");
        break;
    }
    case 352407:
    {
        returnValue = F("Zur Bauernsiedlung");
        break;
    }
    case 352408:
    {
        returnValue = F("Zur Bauernstelle");
        break;
    }
    case 352409:
    {
        returnValue = F("Zur Bauernwiese");
        break;
    }
    case 352410:
    {
        returnValue = F("Zur Bauerschaft");
        break;
    }
    case 352411:
    {
        returnValue = F("Zur Baumschule");
        break;
    }
    case 352412:
    {
        returnValue = F("Zur Baumwolle");
        break;
    }
    case 352413:
    {
        returnValue = F("Zur Baumzeile");
        break;
    }
    case 352414:
    {
        returnValue = F("Zur Bauschule");
        break;
    }
    case 352415:
    {
        returnValue = F("Zur Baut");
        break;
    }
    case 352416:
    {
        returnValue = F("Zur Bayrischen Grenze");
        break;
    }
    case 352417:
    {
        returnValue = F("Zur Beckenmühle");
        break;
    }
    case 352418:
    {
        returnValue = F("Zur Beckersmühle");
        break;
    }
    case 352419:
    {
        returnValue = F("Zur Beeder Mühle");
        break;
    }
    case 352420:
    {
        returnValue = F("Zur Beek");
        break;
    }
    case 352421:
    {
        returnValue = F("Zur Beeke");
        break;
    }
    case 352422:
    {
        returnValue = F("Zur Beekwiese");
        break;
    }
    case 352423:
    {
        returnValue = F("Zur Beens");
        break;
    }
    case 352424:
    {
        returnValue = F("Zur Beerbeeke");
        break;
    }
    case 352425:
    {
        returnValue = F("Zur Behrenhorst");
        break;
    }
    case 352426:
    {
        returnValue = F("Zur Behrensburg");
        break;
    }
    case 352427:
    {
        returnValue = F("Zur Beichel");
        break;
    }
    case 352428:
    {
        returnValue = F("Zur Bek");
        break;
    }
    case 352429:
    {
        returnValue = F("Zur Beke");
        break;
    }
    case 352430:
    {
        returnValue = F("Zur Bellevue");
        break;
    }
    case 352431:
    {
        returnValue = F("Zur Belsmühle");
        break;
    }
    case 352432:
    {
        returnValue = F("Zur Bendermühle");
        break;
    }
    case 352433:
    {
        returnValue = F("Zur Bengener Heide");
        break;
    }
    case 352434:
    {
        returnValue = F("Zur Bennauer Mühle");
        break;
    }
    case 352435:
    {
        returnValue = F("Zur Bennewitz");
        break;
    }
    case 352436:
    {
        returnValue = F("Zur Bergbrauerei");
        break;
    }
    case 352437:
    {
        returnValue = F("Zur Bergehalde");
        break;
    }
    case 352438:
    {
        returnValue = F("Zur Bergerflur");
        break;
    }
    case 352439:
    {
        returnValue = F("Zur Bergermühle");
        break;
    }
    case 352440:
    {
        returnValue = F("Zur Bergeshöhe");
        break;
    }
    case 352441:
    {
        returnValue = F("Zur Bergheck");
        break;
    }
    case 352442:
    {
        returnValue = F("Zur Bergkirche");
        break;
    }
    case 352443:
    {
        returnValue = F("Zur Berglust");
        break;
    }
    case 352444:
    {
        returnValue = F("Zur Bergmark");
        break;
    }
    case 352445:
    {
        returnValue = F("Zur Bergmauer");
        break;
    }
    case 352446:
    {
        returnValue = F("Zur Bergmeierei");
        break;
    }
    case 352447:
    {
        returnValue = F("Zur Bergmühle");
        break;
    }
    case 352448:
    {
        returnValue = F("Zur Bergpflege");
        break;
    }
    case 352449:
    {
        returnValue = F("Zur Bergresidenz");
        break;
    }
    case 352450:
    {
        returnValue = F("Zur Bergschänke");
        break;
    }
    case 352451:
    {
        returnValue = F("Zur Bergstr.");
        break;
    }
    case 352452:
    {
        returnValue = F("Zur Bergwiese");
        break;
    }
    case 352453:
    {
        returnValue = F("Zur Berkelquelle");
        break;
    }
    case 352454:
    {
        returnValue = F("Zur Bernstadt");
        break;
    }
    case 352455:
    {
        returnValue = F("Zur Berschebach");
        break;
    }
    case 352456:
    {
        returnValue = F("Zur Berufsschule");
        break;
    }
    case 352457:
    {
        returnValue = F("Zur Bethlehemer Höhe");
        break;
    }
    case 352458:
    {
        returnValue = F("Zur Bettfedernfabrik");
        break;
    }
    case 352459:
    {
        returnValue = F("Zur Beuditzmühle");
        break;
    }
    case 352460:
    {
        returnValue = F("Zur Beuggen");
        break;
    }
    case 352461:
    {
        returnValue = F("Zur Beule");
        break;
    }
    case 352462:
    {
        returnValue = F("Zur Beunde");
        break;
    }
    case 352463:
    {
        returnValue = F("Zur Beundt");
        break;
    }
    case 352464:
    {
        returnValue = F("Zur Bever");
        break;
    }
    case 352465:
    {
        returnValue = F("Zur Biber");
        break;
    }
    case 352466:
    {
        returnValue = F("Zur Biberau");
        break;
    }
    case 352467:
    {
        returnValue = F("Zur Biberburg");
        break;
    }
    case 352468:
    {
        returnValue = F("Zur Biberkampfbahn");
        break;
    }
    case 352469:
    {
        returnValue = F("Zur Biederburg");
        break;
    }
    case 352470:
    {
        returnValue = F("Zur Biene");
        break;
    }
    case 352471:
    {
        returnValue = F("Zur Bienenweide");
        break;
    }
    case 352472:
    {
        returnValue = F("Zur Biggequelle");
        break;
    }
    case 352473:
    {
        returnValue = F("Zur Bildeiche");
        break;
    }
    case 352474:
    {
        returnValue = F("Zur Bindestelle");
        break;
    }
    case 352475:
    {
        returnValue = F("Zur Binnendüne");
        break;
    }
    case 352476:
    {
        returnValue = F("Zur Biogasanlage");
        break;
    }
    case 352477:
    {
        returnValue = F("Zur Birk");
        break;
    }
    case 352478:
    {
        returnValue = F("Zur Birke");
        break;
    }
    case 352479:
    {
        returnValue = F("Zur Birkenhecke");
        break;
    }
    case 352480:
    {
        returnValue = F("Zur Birkeshöh");
        break;
    }
    case 352481:
    {
        returnValue = F("Zur Birnreeke");
        break;
    }
    case 352482:
    {
        returnValue = F("Zur Bischofsmühle");
        break;
    }
    case 352483:
    {
        returnValue = F("Zur Bitz");
        break;
    }
    case 352484:
    {
        returnValue = F("Zur Bitze");
        break;
    }
    case 352485:
    {
        returnValue = F("Zur Bitzenmatte");
        break;
    }
    case 352486:
    {
        returnValue = F("Zur Blankenburg");
        break;
    }
    case 352487:
    {
        returnValue = F("Zur Blaue");
        break;
    }
    case 352488:
    {
        returnValue = F("Zur Blaufärberei");
        break;
    }
    case 352489:
    {
        returnValue = F("Zur Blecherdell");
        break;
    }
    case 352490:
    {
        returnValue = F("Zur Bleckhorst");
        break;
    }
    case 352491:
    {
        returnValue = F("Zur Bleeke");
        break;
    }
    case 352492:
    {
        returnValue = F("Zur Bleiche");
        break;
    }
    case 352493:
    {
        returnValue = F("Zur Bleichwiese");
        break;
    }
    case 352494:
    {
        returnValue = F("Zur Blenser Mühle");
        break;
    }
    case 352495:
    {
        returnValue = F("Zur Blumenstr.");
        break;
    }
    case 352496:
    {
        returnValue = F("Zur Blöße");
        break;
    }
    case 352497:
    {
        returnValue = F("Zur Bobbahn");
        break;
    }
    case 352498:
    {
        returnValue = F("Zur Bockenmühle");
        break;
    }
    case 352499:
    {
        returnValue = F("Zur Bockhole");
        break;
    }
    case 352500:
    {
        returnValue = F("Zur Bockholter Emsfähre");
        break;
    }
    case 352501:
    {
        returnValue = F("Zur Bockmühle");
        break;
    }
    case 352502:
    {
        returnValue = F("Zur Bockstadter Mühle");
        break;
    }
    case 352503:
    {
        returnValue = F("Zur Bockumer Linde");
        break;
    }
    case 352504:
    {
        returnValue = F("Zur Bockwiese");
        break;
    }
    case 352505:
    {
        returnValue = F("Zur Bockwindmühle");
        break;
    }
    case 352506:
    {
        returnValue = F("Zur Bockwitz");
        break;
    }
    case 352507:
    {
        returnValue = F("Zur Bodmark");
        break;
    }
    case 352508:
    {
        returnValue = F("Zur Boeckelt");
        break;
    }
    case 352509:
    {
        returnValue = F("Zur Bohler Heide");
        break;
    }
    case 352510:
    {
        returnValue = F("Zur Bohlingsäule");
        break;
    }
    case 352511:
    {
        returnValue = F("Zur Bohnenmühle");
        break;
    }
    case 352512:
    {
        returnValue = F("Zur Bohnenwies");
        break;
    }
    case 352513:
    {
        returnValue = F("Zur Boikenhorst");
        break;
    }
    case 352514:
    {
        returnValue = F("Zur Boize");
        break;
    }
    case 352515:
    {
        returnValue = F("Zur Bokeler Mühle");
        break;
    }
    case 352516:
    {
        returnValue = F("Zur Bokelerburg");
        break;
    }
    case 352517:
    {
        returnValue = F("Zur Bokemühle");
        break;
    }
    case 352518:
    {
        returnValue = F("Zur Bollerbrücke");
        break;
    }
    case 352519:
    {
        returnValue = F("Zur Bollhäuser Wiese");
        break;
    }
    case 352520:
    {
        returnValue = F("Zur Bombeeke");
        break;
    }
    case 352521:
    {
        returnValue = F("Zur Bonnekoh");
        break;
    }
    case 352522:
    {
        returnValue = F("Zur Bonnheck");
        break;
    }
    case 352523:
    {
        returnValue = F("Zur Borg");
        break;
    }
    case 352524:
    {
        returnValue = F("Zur Borgstedt");
        break;
    }
    case 352525:
    {
        returnValue = F("Zur Borgwisch");
        break;
    }
    case 352526:
    {
        returnValue = F("Zur Bork");
        break;
    }
    case 352527:
    {
        returnValue = F("Zur Borkener Brücke");
        break;
    }
    case 352528:
    {
        returnValue = F("Zur Bormig");
        break;
    }
    case 352529:
    {
        returnValue = F("Zur Bornheimer Mühle");
        break;
    }
    case 352530:
    {
        returnValue = F("Zur Bornspringe");
        break;
    }
    case 352531:
    {
        returnValue = F("Zur Bornwiese");
        break;
    }
    case 352532:
    {
        returnValue = F("Zur Borrestubb");
        break;
    }
    case 352533:
    {
        returnValue = F("Zur Borwiese");
        break;
    }
    case 352534:
    {
        returnValue = F("Zur Boscherleite");
        break;
    }
    case 352535:
    {
        returnValue = F("Zur Boyneburg");
        break;
    }
    case 352536:
    {
        returnValue = F("Zur Braake");
        break;
    }
    case 352537:
    {
        returnValue = F("Zur Braaskate");
        break;
    }
    case 352538:
    {
        returnValue = F("Zur Brache");
        break;
    }
    case 352539:
    {
        returnValue = F("Zur Bracht");
        break;
    }
    case 352540:
    {
        returnValue = F("Zur Brack");
        break;
    }
    case 352541:
    {
        returnValue = F("Zur Bradtmühle");
        break;
    }
    case 352542:
    {
        returnValue = F("Zur Brake");
        break;
    }
    case 352543:
    {
        returnValue = F("Zur Brandeiche");
        break;
    }
    case 352544:
    {
        returnValue = F("Zur Brandenburg");
        break;
    }
    case 352545:
    {
        returnValue = F("Zur Brandheide");
        break;
    }
    case 352546:
    {
        returnValue = F("Zur Brandkoppel");
        break;
    }
    case 352547:
    {
        returnValue = F("Zur Brauerei");
        break;
    }
    case 352548:
    {
        returnValue = F("Zur Braunbach");
        break;
    }
    case 352549:
    {
        returnValue = F("Zur Brautwiese");
        break;
    }
    case 352550:
    {
        returnValue = F("Zur Brechkaul");
        break;
    }
    case 352551:
    {
        returnValue = F("Zur Brecht");
        break;
    }
    case 352552:
    {
        returnValue = F("Zur Bredde");
        break;
    }
    case 352553:
    {
        returnValue = F("Zur Brede");
        break;
    }
    case 352554:
    {
        returnValue = F("Zur Bredharter Heide");
        break;
    }
    case 352555:
    {
        returnValue = F("Zur Breetz");
        break;
    }
    case 352556:
    {
        returnValue = F("Zur Brehmgedenkstätte");
        break;
    }
    case 352557:
    {
        returnValue = F("Zur Breit");
        break;
    }
    case 352558:
    {
        returnValue = F("Zur Breite");
        break;
    }
    case 352559:
    {
        returnValue = F("Zur Breiteeller");
        break;
    }
    case 352560:
    {
        returnValue = F("Zur Breiten Str.");
        break;
    }
    case 352561:
    {
        returnValue = F("Zur Breiten Wiese");
        break;
    }
    case 352562:
    {
        returnValue = F("Zur Breitenlohe");
        break;
    }
    case 352563:
    {
        returnValue = F("Zur Breitenwiese");
        break;
    }
    case 352564:
    {
        returnValue = F("Zur Breitung");
        break;
    }
    case 352565:
    {
        returnValue = F("Zur Brennerei");
        break;
    }
    case 352566:
    {
        returnValue = F("Zur Bretschlade");
        break;
    }
    case 352567:
    {
        returnValue = F("Zur Brettach");
        break;
    }
    case 352568:
    {
        returnValue = F("Zur Brettmühle");
        break;
    }
    case 352569:
    {
        returnValue = F("Zur Breulwiese");
        break;
    }
    case 352570:
    {
        returnValue = F("Zur Brinkwiese");
        break;
    }
    case 352571:
    {
        returnValue = F("Zur Brockenkuhle");
        break;
    }
    case 352572:
    {
        returnValue = F("Zur Brodje");
        break;
    }
    case 352573:
    {
        returnValue = F("Zur Brodwies");
        break;
    }
    case 352574:
    {
        returnValue = F("Zur Brookbäke");
        break;
    }
    case 352575:
    {
        returnValue = F("Zur Brotkammer");
        break;
    }
    case 352576:
    {
        returnValue = F("Zur Brotkiste");
        break;
    }
    case 352577:
    {
        returnValue = F("Zur Bruchstr.");
        break;
    }
    case 352578:
    {
        returnValue = F("Zur Bruchwiese");
        break;
    }
    case 352579:
    {
        returnValue = F("Zur Bruckmühle");
        break;
    }
    case 352580:
    {
        returnValue = F("Zur Bruckwies'n");
        break;
    }
    case 352581:
    {
        returnValue = F("Zur Bruderschaft");
        break;
    }
    case 352582:
    {
        returnValue = F("Zur Brumlage");
        break;
    }
    case 352583:
    {
        returnValue = F("Zur Brunau");
        break;
    }
    case 352584:
    {
        returnValue = F("Zur Brunnenstr.");
        break;
    }
    case 352585:
    {
        returnValue = F("Zur Brunnenstube");
        break;
    }
    case 352586:
    {
        returnValue = F("Zur Brunnenwiese");
        break;
    }
    case 352587:
    {
        returnValue = F("Zur Brunnleite");
        break;
    }
    case 352588:
    {
        returnValue = F("Zur Brusenbeck");
        break;
    }
    case 352589:
    {
        returnValue = F("Zur Brände");
        break;
    }
    case 352590:
    {
        returnValue = F("Zur Bröl");
        break;
    }
    case 352591:
    {
        returnValue = F("Zur Bröltalarena");
        break;
    }
    case 352592:
    {
        returnValue = F("Zur Brüche");
        break;
    }
    case 352593:
    {
        returnValue = F("Zur Brückbreite");
        break;
    }
    case 352594:
    {
        returnValue = F("Zur Brücke");
        break;
    }
    case 352595:
    {
        returnValue = F("Zur Brückenmühle");
        break;
    }
    case 352596:
    {
        returnValue = F("Zur Brückenschmiede");
        break;
    }
    case 352597:
    {
        returnValue = F("Zur Brücker Aue");
        break;
    }
    case 352598:
    {
        returnValue = F("Zur Brückwiese");
        break;
    }
    case 352599:
    {
        returnValue = F("Zur Brüdergemeinde");
        break;
    }
    case 352600:
    {
        returnValue = F("Zur Bubenecke");
        break;
    }
    case 352601:
    {
        returnValue = F("Zur Buch");
        break;
    }
    case 352602:
    {
        returnValue = F("Zur Buche");
        break;
    }
    case 352603:
    {
        returnValue = F("Zur Buchholzheide");
        break;
    }
    case 352604:
    {
        returnValue = F("Zur Buchhorst");
        break;
    }
    case 352605:
    {
        returnValue = F("Zur Buchley");
        break;
    }
    case 352606:
    {
        returnValue = F("Zur Bucht");
        break;
    }
    case 352607:
    {
        returnValue = F("Zur Buchtal");
        break;
    }
    case 352608:
    {
        returnValue = F("Zur Buckstammhütung");
        break;
    }
    case 352609:
    {
        returnValue = F("Zur Buhne");
        break;
    }
    case 352610:
    {
        returnValue = F("Zur Buirer Ley");
        break;
    }
    case 352611:
    {
        returnValue = F("Zur Bullenweide");
        break;
    }
    case 352612:
    {
        returnValue = F("Zur Bullenwiese");
        break;
    }
    case 352613:
    {
        returnValue = F("Zur Bullerbäke");
        break;
    }
    case 352614:
    {
        returnValue = F("Zur Bultwiese");
        break;
    }
    case 352615:
    {
        returnValue = F("Zur Bundesstr.");
        break;
    }
    case 352616:
    {
        returnValue = F("Zur Bungalowsiedlung");
        break;
    }
    case 352617:
    {
        returnValue = F("Zur Bungertshecke");
        break;
    }
    case 352618:
    {
        returnValue = F("Zur Bunne");
        break;
    }
    case 352619:
    {
        returnValue = F("Zur Bunten Brücke");
        break;
    }
    case 352620:
    {
        returnValue = F("Zur Burg");
        break;
    }
    case 352621:
    {
        returnValue = F("Zur Burg Raben");
        break;
    }
    case 352622:
    {
        returnValue = F("Zur Burgaß");
        break;
    }
    case 352623:
    {
        returnValue = F("Zur Burgfried");
        break;
    }
    case 352624:
    {
        returnValue = F("Zur Burghart");
        break;
    }
    case 352625:
    {
        returnValue = F("Zur Burghofwiese");
        break;
    }
    case 352626:
    {
        returnValue = F("Zur Burglay");
        break;
    }
    case 352627:
    {
        returnValue = F("Zur Burgleite");
        break;
    }
    case 352628:
    {
        returnValue = F("Zur Burgmühle");
        break;
    }
    case 352629:
    {
        returnValue = F("Zur Burgruine");
        break;
    }
    case 352630:
    {
        returnValue = F("Zur Burgspitze");
        break;
    }
    case 352631:
    {
        returnValue = F("Zur Burgwaller Brücke");
        break;
    }
    case 352632:
    {
        returnValue = F("Zur Burgwiese");
        break;
    }
    case 352633:
    {
        returnValue = F("Zur Burkuhle");
        break;
    }
    case 352634:
    {
        returnValue = F("Zur Burmecke");
        break;
    }
    case 352635:
    {
        returnValue = F("Zur Buschkate");
        break;
    }
    case 352636:
    {
        returnValue = F("Zur Buschkoppel");
        break;
    }
    case 352637:
    {
        returnValue = F("Zur Bussard-Klause");
        break;
    }
    case 352638:
    {
        returnValue = F("Zur Busse");
        break;
    }
    case 352639:
    {
        returnValue = F("Zur Bussenmühle");
        break;
    }
    case 352640:
    {
        returnValue = F("Zur Butjadinger Bahn");
        break;
    }
    case 352641:
    {
        returnValue = F("Zur Butterbüchse");
        break;
    }
    case 352642:
    {
        returnValue = F("Zur Butterleithe");
        break;
    }
    case 352643:
    {
        returnValue = F("Zur Buxtermühle");
        break;
    }
    case 352644:
    {
        returnValue = F("Zur Bäch");
        break;
    }
    case 352645:
    {
        returnValue = F("Zur Bäck");
        break;
    }
    case 352646:
    {
        returnValue = F("Zur Bäckerschule");
        break;
    }
    case 352647:
    {
        returnValue = F("Zur Bäk");
        break;
    }
    case 352648:
    {
        returnValue = F("Zur Bäke");
        break;
    }
    case 352649:
    {
        returnValue = F("Zur Bärenschlied");
        break;
    }
    case 352650:
    {
        returnValue = F("Zur Bögge");
        break;
    }
    case 352651:
    {
        returnValue = F("Zur Bökenwiese");
        break;
    }
    case 352652:
    {
        returnValue = F("Zur Bökerhöhe");
        break;
    }
    case 352653:
    {
        returnValue = F("Zur Börne");
        break;
    }
    case 352654:
    {
        returnValue = F("Zur Bücherei");
        break;
    }
    case 352655:
    {
        returnValue = F("Zur Bückling");
        break;
    }
    case 352656:
    {
        returnValue = F("Zur Bülte");
        break;
    }
    case 352657:
    {
        returnValue = F("Zur Bünd");
        break;
    }
    case 352658:
    {
        returnValue = F("Zur Bündt");
        break;
    }
    case 352659:
    {
        returnValue = F("Zur Bünte");
        break;
    }
    case 352660:
    {
        returnValue = F("Zur Bürgerallee");
        break;
    }
    case 352661:
    {
        returnValue = F("Zur Bürgermeisterbrücke");
        break;
    }
    case 352662:
    {
        returnValue = F("Zur Büscher Mühle");
        break;
    }
    case 352663:
    {
        returnValue = F("Zur Büschkapelle");
        break;
    }
    case 352664:
    {
        returnValue = F("Zur Bütenheide");
        break;
    }
    case 352665:
    {
        returnValue = F("Zur Bützi");
        break;
    }
    case 352666:
    {
        returnValue = F("Zur Caenheide");
        break;
    }
    case 352667:
    {
        returnValue = F("Zur Campagnemühle");
        break;
    }
    case 352668:
    {
        returnValue = F("Zur Carbäk");
        break;
    }
    case 352669:
    {
        returnValue = F("Zur Carlsburg");
        break;
    }
    case 352670:
    {
        returnValue = F("Zur Caroley");
        break;
    }
    case 352671:
    {
        returnValue = F("Zur Casselheck");
        break;
    }
    case 352672:
    {
        returnValue = F("Zur Centrale");
        break;
    }
    case 352673:
    {
        returnValue = F("Zur Centralwerkstätte");
        break;
    }
    case 352674:
    {
        returnValue = F("Zur Chaussee");
        break;
    }
    case 352675:
    {
        returnValue = F("Zur Cheiner Mühle");
        break;
    }
    case 352676:
    {
        returnValue = F("Zur Christinenhütte");
        break;
    }
    case 352677:
    {
        returnValue = F("Zur Claraquelle");
        break;
    }
    case 352678:
    {
        returnValue = F("Zur Claus");
        break;
    }
    case 352679:
    {
        returnValue = F("Zur Clemenshöhe");
        break;
    }
    case 352680:
    {
        returnValue = F("Zur Coburg");
        break;
    }
    case 352681:
    {
        returnValue = F("Zur Cottenburg");
        break;
    }
    case 352682:
    {
        returnValue = F("Zur Crusnitz");
        break;
    }
    case 352683:
    {
        returnValue = F("Zur Dachshöhe");
        break;
    }
    case 352684:
    {
        returnValue = F("Zur Dachsschneise");
        break;
    }
    case 352685:
    {
        returnValue = F("Zur Dahler Hardt");
        break;
    }
    case 352686:
    {
        returnValue = F("Zur Dahlgrund");
        break;
    }
    case 352687:
    {
        returnValue = F("Zur Dahlmühle");
        break;
    }
    case 352688:
    {
        returnValue = F("Zur Dahne");
        break;
    }
    case 352689:
    {
        returnValue = F("Zur Dakel");
        break;
    }
    case 352690:
    {
        returnValue = F("Zur Dalbeck");
        break;
    }
    case 352691:
    {
        returnValue = F("Zur Dalbek");
        break;
    }
    case 352692:
    {
        returnValue = F("Zur Dammbrücke");
        break;
    }
    case 352693:
    {
        returnValue = F("Zur Dammheck");
        break;
    }
    case 352694:
    {
        returnValue = F("Zur Damnitz");
        break;
    }
    case 352695:
    {
        returnValue = F("Zur Dampfmühle");
        break;
    }
    case 352696:
    {
        returnValue = F("Zur Dannheide");
        break;
    }
    case 352697:
    {
        returnValue = F("Zur Darre");
        break;
    }
    case 352698:
    {
        returnValue = F("Zur Dasselkuhle");
        break;
    }
    case 352699:
    {
        returnValue = F("Zur Datze");
        break;
    }
    case 352700:
    {
        returnValue = F("Zur Daukuhle");
        break;
    }
    case 352701:
    {
        returnValue = F("Zur Dauster Greth");
        break;
    }
    case 352702:
    {
        returnValue = F("Zur Degensmühle");
        break;
    }
    case 352703:
    {
        returnValue = F("Zur Deitmicke");
        break;
    }
    case 352704:
    {
        returnValue = F("Zur Dell");
        break;
    }
    case 352705:
    {
        returnValue = F("Zur Delle");
        break;
    }
    case 352706:
    {
        returnValue = F("Zur Delme");
        break;
    }
    case 352707:
    {
        returnValue = F("Zur Demmingbrücke");
        break;
    }
    case 352708:
    {
        returnValue = F("Zur Demnitz");
        break;
    }
    case 352709:
    {
        returnValue = F("Zur Denkstätte");
        break;
    }
    case 352710:
    {
        returnValue = F("Zur Denne");
        break;
    }
    case 352711:
    {
        returnValue = F("Zur Deponie");
        break;
    }
    case 352712:
    {
        returnValue = F("Zur Derneitze");
        break;
    }
    case 352713:
    {
        returnValue = F("Zur Dick Eich");
        break;
    }
    case 352714:
    {
        returnValue = F("Zur Dicken Buche");
        break;
    }
    case 352715:
    {
        returnValue = F("Zur Dicken Eiche");
        break;
    }
    case 352716:
    {
        returnValue = F("Zur Dicken Linde");
        break;
    }
    case 352717:
    {
        returnValue = F("Zur Dicken Tanne");
        break;
    }
    case 352718:
    {
        returnValue = F("Zur Diemelmühle");
        break;
    }
    case 352719:
    {
        returnValue = F("Zur Dietzenley");
        break;
    }
    case 352720:
    {
        returnValue = F("Zur Dilleniusstr.");
        break;
    }
    case 352721:
    {
        returnValue = F("Zur Dinneike");
        break;
    }
    case 352722:
    {
        returnValue = F("Zur Dipplinge");
        break;
    }
    case 352723:
    {
        returnValue = F("Zur Distel");
        break;
    }
    case 352724:
    {
        returnValue = F("Zur Dithmarscher Schweiz");
        break;
    }
    case 352725:
    {
        returnValue = F("Zur Diwelie");
        break;
    }
    case 352726:
    {
        returnValue = F("Zur Docterey");
        break;
    }
    case 352727:
    {
        returnValue = F("Zur Doctorey");
        break;
    }
    case 352728:
    {
        returnValue = F("Zur Dollbrücke");
        break;
    }
    case 352729:
    {
        returnValue = F("Zur Dollnhöhe");
        break;
    }
    case 352730:
    {
        returnValue = F("Zur Domburg");
        break;
    }
    case 352731:
    {
        returnValue = F("Zur Dommelmühle");
        break;
    }
    case 352732:
    {
        returnValue = F("Zur Domäne");
        break;
    }
    case 352733:
    {
        returnValue = F("Zur Donarquelle");
        break;
    }
    case 352734:
    {
        returnValue = F("Zur Donaubrücke");
        break;
    }
    case 352735:
    {
        returnValue = F("Zur Donitz");
        break;
    }
    case 352736:
    {
        returnValue = F("Zur Dorfaue");
        break;
    }
    case 352737:
    {
        returnValue = F("Zur Dorfbreite");
        break;
    }
    case 352738:
    {
        returnValue = F("Zur Dorfeiche");
        break;
    }
    case 352739:
    {
        returnValue = F("Zur Dorfen");
        break;
    }
    case 352740:
    {
        returnValue = F("Zur Dorfkirche");
        break;
    }
    case 352741:
    {
        returnValue = F("Zur Dorfkrone");
        break;
    }
    case 352742:
    {
        returnValue = F("Zur Dorflinde");
        break;
    }
    case 352743:
    {
        returnValue = F("Zur Dorfmitte");
        break;
    }
    case 352744:
    {
        returnValue = F("Zur Dorfmühle");
        break;
    }
    case 352745:
    {
        returnValue = F("Zur Dorfschule");
        break;
    }
    case 352746:
    {
        returnValue = F("Zur Dorfstr.");
        break;
    }
    case 352747:
    {
        returnValue = F("Zur Dorfwies");
        break;
    }
    case 352748:
    {
        returnValue = F("Zur Dorfwiese");
        break;
    }
    case 352749:
    {
        returnValue = F("Zur Dorfwurt");
        break;
    }
    case 352750:
    {
        returnValue = F("Zur Dorfwäsche");
        break;
    }
    case 352751:
    {
        returnValue = F("Zur Dorhecke");
        break;
    }
    case 352752:
    {
        returnValue = F("Zur Dornaue");
        break;
    }
    case 352753:
    {
        returnValue = F("Zur Dornenhecke");
        break;
    }
    case 352754:
    {
        returnValue = F("Zur Dornheck");
        break;
    }
    case 352755:
    {
        returnValue = F("Zur Dornhecke");
        break;
    }
    case 352756:
    {
        returnValue = F("Zur Dornheide");
        break;
    }
    case 352757:
    {
        returnValue = F("Zur Dose");
        break;
    }
    case 352758:
    {
        returnValue = F("Zur Dossehalle");
        break;
    }
    case 352759:
    {
        returnValue = F("Zur Doven Elbe");
        break;
    }
    case 352760:
    {
        returnValue = F("Zur Drachenleithe");
        break;
    }
    case 352761:
    {
        returnValue = F("Zur Drahtseilbahn");
        break;
    }
    case 352762:
    {
        returnValue = F("Zur Drebber Höhe");
        break;
    }
    case 352763:
    {
        returnValue = F("Zur Drehbrücke");
        break;
    }
    case 352764:
    {
        returnValue = F("Zur Drehscheibe");
        break;
    }
    case 352765:
    {
        returnValue = F("Zur Dreikant");
        break;
    }
    case 352766:
    {
        returnValue = F("Zur Dreispitz");
        break;
    }
    case 352767:
    {
        returnValue = F("Zur Dreispitze");
        break;
    }
    case 352768:
    {
        returnValue = F("Zur Drenke");
        break;
    }
    case 352769:
    {
        returnValue = F("Zur Drexlerschleife");
        break;
    }
    case 352770:
    {
        returnValue = F("Zur Drift");
        break;
    }
    case 352771:
    {
        returnValue = F("Zur Dringe");
        break;
    }
    case 352772:
    {
        returnValue = F("Zur Drögemühle");
        break;
    }
    case 352773:
    {
        returnValue = F("Zur Durach");
        break;
    }
    case 352774:
    {
        returnValue = F("Zur Dynamitfabrik");
        break;
    }
    case 352775:
    {
        returnValue = F("Zur Döllnitzhöhe");
        break;
    }
    case 352776:
    {
        returnValue = F("Zur Döllnitzwiese");
        break;
    }
    case 352777:
    {
        returnValue = F("Zur Dölpe");
        break;
    }
    case 352778:
    {
        returnValue = F("Zur Dörnbach");
        break;
    }
    case 352779:
    {
        returnValue = F("Zur Dörne");
        break;
    }
    case 352780:
    {
        returnValue = F("Zur Dörner Brücke");
        break;
    }
    case 352781:
    {
        returnValue = F("Zur Dörre");
        break;
    }
    case 352782:
    {
        returnValue = F("Zur Dörrhöhe");
        break;
    }
    case 352783:
    {
        returnValue = F("Zur Düke");
        break;
    }
    case 352784:
    {
        returnValue = F("Zur Düne");
        break;
    }
    case 352785:
    {
        returnValue = F("Zur Dünenbake");
        break;
    }
    case 352786:
    {
        returnValue = F("Zur Dünnen Hegge");
        break;
    }
    case 352787:
    {
        returnValue = F("Zur Düpenau");
        break;
    }
    case 352788:
    {
        returnValue = F("Zur Düppelsmühle");
        break;
    }
    case 352789:
    {
        returnValue = F("Zur Düssel");
        break;
    }
    case 352790:
    {
        returnValue = F("Zur Düsselaue");
        break;
    }
    case 352791:
    {
        returnValue = F("Zur Düte");
        break;
    }
    case 352792:
    {
        returnValue = F("Zur Ebe");
        break;
    }
    case 352793:
    {
        returnValue = F("Zur Ebene");
        break;
    }
    case 352794:
    {
        returnValue = F("Zur Ebnet");
        break;
    }
    case 352795:
    {
        returnValue = F("Zur Ecke");
        break;
    }
    case 352796:
    {
        returnValue = F("Zur Eckelbach");
        break;
    }
    case 352797:
    {
        returnValue = F("Zur Eckenau");
        break;
    }
    case 352798:
    {
        returnValue = F("Zur Eckstr.");
        break;
    }
    case 352799:
    {
        returnValue = F("Zur Ederau");
        break;
    }
    case 352800:
    {
        returnValue = F("Zur Effenmühle");
        break;
    }
    case 352801:
    {
        returnValue = F("Zur Egert");
        break;
    }
    case 352802:
    {
        returnValue = F("Zur Egge");
        break;
    }
    case 352803:
    {
        returnValue = F("Zur Egoldstanne");
        break;
    }
    case 352804:
    {
        returnValue = F("Zur Ehehelle");
        break;
    }
    case 352805:
    {
        returnValue = F("Zur Ehle");
        break;
    }
    case 352806:
    {
        returnValue = F("Zur Ehreneiche");
        break;
    }
    case 352807:
    {
        returnValue = F("Zur Eibe");
        break;
    }
    case 352808:
    {
        returnValue = F("Zur Eiche");
        break;
    }
    case 352809:
    {
        returnValue = F("Zur Eicheleite");
        break;
    }
    case 352810:
    {
        returnValue = F("Zur Eichenallee");
        break;
    }
    case 352811:
    {
        returnValue = F("Zur Eichenburg");
        break;
    }
    case 352812:
    {
        returnValue = F("Zur Eichengruppe");
        break;
    }
    case 352813:
    {
        returnValue = F("Zur Eichenhard");
        break;
    }
    case 352814:
    {
        returnValue = F("Zur Eichkapelle");
        break;
    }
    case 352815:
    {
        returnValue = F("Zur Eichleite");
        break;
    }
    case 352816:
    {
        returnValue = F("Zur Eichleithe");
        break;
    }
    case 352817:
    {
        returnValue = F("Zur Eichtweide");
        break;
    }
    case 352818:
    {
        returnValue = F("Zur Eichwiese");
        break;
    }
    case 352819:
    {
        returnValue = F("Zur Eidechsmauer");
        break;
    }
    case 352820:
    {
        returnValue = F("Zur Eider");
        break;
    }
    case 352821:
    {
        returnValue = F("Zur Eifelbach");
        break;
    }
    case 352822:
    {
        returnValue = F("Zur Eigenen Scholle");
        break;
    }
    case 352823:
    {
        returnValue = F("Zur Einecker Vöhde");
        break;
    }
    case 352824:
    {
        returnValue = F("Zur Einigkeit");
        break;
    }
    case 352825:
    {
        returnValue = F("Zur Eintracht");
        break;
    }
    case 352826:
    {
        returnValue = F("Zur Eisenbahnbrücke");
        break;
    }
    case 352827:
    {
        returnValue = F("Zur Eisengrube");
        break;
    }
    case 352828:
    {
        returnValue = F("Zur Eisenhardt");
        break;
    }
    case 352829:
    {
        returnValue = F("Zur Eisenheld");
        break;
    }
    case 352830:
    {
        returnValue = F("Zur Eisenhütte");
        break;
    }
    case 352831:
    {
        returnValue = F("Zur Eisenkaute");
        break;
    }
    case 352832:
    {
        returnValue = F("Zur Eisenleite");
        break;
    }
    case 352833:
    {
        returnValue = F("Zur Eiserlake");
        break;
    }
    case 352834:
    {
        returnValue = F("Zur Eisernen Hand");
        break;
    }
    case 352835:
    {
        returnValue = F("Zur Eisgrube");
        break;
    }
    case 352836:
    {
        returnValue = F("Zur Eishöhle");
        break;
    }
    case 352837:
    {
        returnValue = F("Zur Eistei");
        break;
    }
    case 352838:
    {
        returnValue = F("Zur Eisweide");
        break;
    }
    case 352839:
    {
        returnValue = F("Zur Elbaussicht");
        break;
    }
    case 352840:
    {
        returnValue = F("Zur Elbe");
        break;
    }
    case 352841:
    {
        returnValue = F("Zur Elde");
        break;
    }
    case 352842:
    {
        returnValue = F("Zur Elektrisch");
        break;
    }
    case 352843:
    {
        returnValue = F("Zur Elisenhöhe");
        break;
    }
    case 352844:
    {
        returnValue = F("Zur Elka-Werft");
        break;
    }
    case 352845:
    {
        returnValue = F("Zur Elle");
        break;
    }
    case 352846:
    {
        returnValue = F("Zur Ellertskrepp");
        break;
    }
    case 352847:
    {
        returnValue = F("Zur Elschwiese");
        break;
    }
    case 352848:
    {
        returnValue = F("Zur Elsekämp");
        break;
    }
    case 352849:
    {
        returnValue = F("Zur Elsmühle");
        break;
    }
    case 352850:
    {
        returnValue = F("Zur Elsteraue");
        break;
    }
    case 352851:
    {
        returnValue = F("Zur Eltzer Mühle");
        break;
    }
    case 352852:
    {
        returnValue = F("Zur Elzbachquelle");
        break;
    }
    case 352853:
    {
        returnValue = F("Zur Emmer");
        break;
    }
    case 352854:
    {
        returnValue = F("Zur Emmerspitze");
        break;
    }
    case 352855:
    {
        returnValue = F("Zur Ems");
        break;
    }
    case 352856:
    {
        returnValue = F("Zur Emsaue");
        break;
    }
    case 352857:
    {
        returnValue = F("Zur Emschermulde");
        break;
    }
    case 352858:
    {
        returnValue = F("Zur Emsfähre");
        break;
    }
    case 352859:
    {
        returnValue = F("Zur Emsschleuse");
        break;
    }
    case 352860:
    {
        returnValue = F("Zur Endingerwies");
        break;
    }
    case 352861:
    {
        returnValue = F("Zur Enge");
        break;
    }
    case 352862:
    {
        returnValue = F("Zur Engelsbeeke");
        break;
    }
    case 352863:
    {
        returnValue = F("Zur Engelsburg");
        break;
    }
    case 352864:
    {
        returnValue = F("Zur Engelsgrube");
        break;
    }
    case 352865:
    {
        returnValue = F("Zur Engelsklamm");
        break;
    }
    case 352866:
    {
        returnValue = F("Zur Ennert");
        break;
    }
    case 352867:
    {
        returnValue = F("Zur Entenbucht");
        break;
    }
    case 352868:
    {
        returnValue = F("Zur Enzianwiese");
        break;
    }
    case 352869:
    {
        returnValue = F("Zur Erbachswiese");
        break;
    }
    case 352870:
    {
        returnValue = F("Zur Erbenmühle");
        break;
    }
    case 352871:
    {
        returnValue = F("Zur Eremitage");
        break;
    }
    case 352872:
    {
        returnValue = F("Zur Eremitenklause");
        break;
    }
    case 352873:
    {
        returnValue = F("Zur Erholung");
        break;
    }
    case 352874:
    {
        returnValue = F("Zur Erinnerung");
        break;
    }
    case 352875:
    {
        returnValue = F("Zur Erlenwies");
        break;
    }
    case 352876:
    {
        returnValue = F("Zur Erwitter Warte");
        break;
    }
    case 352877:
    {
        returnValue = F("Zur Erzgrube");
        break;
    }
    case 352878:
    {
        returnValue = F("Zur Erzhecke");
        break;
    }
    case 352879:
    {
        returnValue = F("Zur Erzkaul");
        break;
    }
    case 352880:
    {
        returnValue = F("Zur Erzleite");
        break;
    }
    case 352881:
    {
        returnValue = F("Zur Esche");
        break;
    }
    case 352882:
    {
        returnValue = F("Zur Eschenau");
        break;
    }
    case 352883:
    {
        returnValue = F("Zur Eselsdelle");
        break;
    }
    case 352884:
    {
        returnValue = F("Zur Eselshöhle");
        break;
    }
    case 352885:
    {
        returnValue = F("Zur Eselswiese");
        break;
    }
    case 352886:
    {
        returnValue = F("Zur Espelage");
        break;
    }
    case 352887:
    {
        returnValue = F("Zur Espergöhler Bäke");
        break;
    }
    case 352888:
    {
        returnValue = F("Zur Esse");
        break;
    }
    case 352889:
    {
        returnValue = F("Zur Essenthoer Mühle");
        break;
    }
    case 352890:
    {
        returnValue = F("Zur Eulenbecke");
        break;
    }
    case 352891:
    {
        returnValue = F("Zur Eulenbuche");
        break;
    }
    case 352892:
    {
        returnValue = F("Zur Eulenburg");
        break;
    }
    case 352893:
    {
        returnValue = F("Zur Eulenflucht");
        break;
    }
    case 352894:
    {
        returnValue = F("Zur Eulenmühle");
        break;
    }
    case 352895:
    {
        returnValue = F("Zur Exe");
        break;
    }
    case 352896:
    {
        returnValue = F("Zur Fahlen Schlade");
        break;
    }
    case 352897:
    {
        returnValue = F("Zur Fahn");
        break;
    }
    case 352898:
    {
        returnValue = F("Zur Fahrt");
        break;
    }
    case 352899:
    {
        returnValue = F("Zur Faitsche");
        break;
    }
    case 352900:
    {
        returnValue = F("Zur Falkenlay");
        break;
    }
    case 352901:
    {
        returnValue = F("Zur Falkenstruth");
        break;
    }
    case 352902:
    {
        returnValue = F("Zur Farbe");
        break;
    }
    case 352903:
    {
        returnValue = F("Zur Farm");
        break;
    }
    case 352904:
    {
        returnValue = F("Zur Farrwies");
        break;
    }
    case 352905:
    {
        returnValue = F("Zur Fasanerie");
        break;
    }
    case 352906:
    {
        returnValue = F("Zur Faulen Wiese");
        break;
    }
    case 352907:
    {
        returnValue = F("Zur Faustheck");
        break;
    }
    case 352908:
    {
        returnValue = F("Zur Fechenmühle");
        break;
    }
    case 352909:
    {
        returnValue = F("Zur Feilenfabrik");
        break;
    }
    case 352910:
    {
        returnValue = F("Zur Feldaaue");
        break;
    }
    case 352911:
    {
        returnValue = F("Zur Feldheck");
        break;
    }
    case 352912:
    {
        returnValue = F("Zur Feldhorst");
        break;
    }
    case 352913:
    {
        returnValue = F("Zur Feldlücke");
        break;
    }
    case 352914:
    {
        returnValue = F("Zur Feldmark");
        break;
    }
    case 352915:
    {
        returnValue = F("Zur Feldmühle");
        break;
    }
    case 352916:
    {
        returnValue = F("Zur Feldscheid");
        break;
    }
    case 352917:
    {
        returnValue = F("Zur Feldscheuer");
        break;
    }
    case 352918:
    {
        returnValue = F("Zur Feldscheune");
        break;
    }
    case 352919:
    {
        returnValue = F("Zur Feldstr.");
        break;
    }
    case 352920:
    {
        returnValue = F("Zur Feldswiese");
        break;
    }
    case 352921:
    {
        returnValue = F("Zur Feldwiese");
        break;
    }
    case 352922:
    {
        returnValue = F("Zur Fellermühle");
        break;
    }
    case 352923:
    {
        returnValue = F("Zur Fels");
        break;
    }
    case 352924:
    {
        returnValue = F("Zur Felsenmühle");
        break;
    }
    case 352925:
    {
        returnValue = F("Zur Felsenquelle");
        break;
    }
    case 352926:
    {
        returnValue = F("Zur Femlinde");
        break;
    }
    case 352927:
    {
        returnValue = F("Zur Fenne");
        break;
    }
    case 352928:
    {
        returnValue = F("Zur Ferte");
        break;
    }
    case 352929:
    {
        returnValue = F("Zur Feste");
        break;
    }
    case 352930:
    {
        returnValue = F("Zur Festerling");
        break;
    }
    case 352931:
    {
        returnValue = F("Zur Festhalle");
        break;
    }
    case 352932:
    {
        returnValue = F("Zur Festung");
        break;
    }
    case 352933:
    {
        returnValue = F("Zur Festwiese");
        break;
    }
    case 352934:
    {
        returnValue = F("Zur Fettweide");
        break;
    }
    case 352935:
    {
        returnValue = F("Zur Feuerkuppe");
        break;
    }
    case 352936:
    {
        returnValue = F("Zur Feuerlosen");
        break;
    }
    case 352937:
    {
        returnValue = F("Zur Feuerwache");
        break;
    }
    case 352938:
    {
        returnValue = F("Zur Feuerwehr");
        break;
    }
    case 352939:
    {
        returnValue = F("Zur Fichte");
        break;
    }
    case 352940:
    {
        returnValue = F("Zur Fichtenbank");
        break;
    }
    case 352941:
    {
        returnValue = F("Zur Fichtensiedlung");
        break;
    }
    case 352942:
    {
        returnValue = F("Zur Fichtzig");
        break;
    }
    case 352943:
    {
        returnValue = F("Zur Fielbecke");
        break;
    }
    case 352944:
    {
        returnValue = F("Zur Fierwand");
        break;
    }
    case 352945:
    {
        returnValue = F("Zur Finie");
        break;
    }
    case 352946:
    {
        returnValue = F("Zur Finkenburg");
        break;
    }
    case 352947:
    {
        returnValue = F("Zur Finkenhecke");
        break;
    }
    case 352948:
    {
        returnValue = F("Zur Finkenkuhle");
        break;
    }
    case 352949:
    {
        returnValue = F("Zur Finkenmühle");
        break;
    }
    case 352950:
    {
        returnValue = F("Zur Finker");
        break;
    }
    case 352951:
    {
        returnValue = F("Zur Finstersee");
        break;
    }
    case 352952:
    {
        returnValue = F("Zur Finterei");
        break;
    }
    case 352953:
    {
        returnValue = F("Zur First");
        break;
    }
    case 352954:
    {
        returnValue = F("Zur Fischbachhöhe");
        break;
    }
    case 352955:
    {
        returnValue = F("Zur Fischerei");
        break;
    }
    case 352956:
    {
        returnValue = F("Zur Fischerschütt");
        break;
    }
    case 352957:
    {
        returnValue = F("Zur Fischerwurt");
        break;
    }
    case 352958:
    {
        returnValue = F("Zur Flaage");
        break;
    }
    case 352959:
    {
        returnValue = F("Zur Flachsdörre");
        break;
    }
    case 352960:
    {
        returnValue = F("Zur Flachsheide");
        break;
    }
    case 352961:
    {
        returnValue = F("Zur Flachsrose");
        break;
    }
    case 352962:
    {
        returnValue = F("Zur Flachsröde");
        break;
    }
    case 352963:
    {
        returnValue = F("Zur Flachsröte");
        break;
    }
    case 352964:
    {
        returnValue = F("Zur Flammenmühle");
        break;
    }
    case 352965:
    {
        returnValue = F("Zur Fleete");
        break;
    }
    case 352966:
    {
        returnValue = F("Zur Fleether Brücke");
        break;
    }
    case 352967:
    {
        returnValue = F("Zur Fleischmehlfabrik");
        break;
    }
    case 352968:
    {
        returnValue = F("Zur Flentjenburg");
        break;
    }
    case 352969:
    {
        returnValue = F("Zur Fletschemich");
        break;
    }
    case 352970:
    {
        returnValue = F("Zur Fliegerwiese");
        break;
    }
    case 352971:
    {
        returnValue = F("Zur Fliehburg");
        break;
    }
    case 352972:
    {
        returnValue = F("Zur Fliethe");
        break;
    }
    case 352973:
    {
        returnValue = F("Zur Flinsbrücke");
        break;
    }
    case 352974:
    {
        returnValue = F("Zur Flitsch");
        break;
    }
    case 352975:
    {
        returnValue = F("Zur Flossach");
        break;
    }
    case 352976:
    {
        returnValue = F("Zur Flughalle");
        break;
    }
    case 352977:
    {
        returnValue = F("Zur Flur");
        break;
    }
    case 352978:
    {
        returnValue = F("Zur Flügelau");
        break;
    }
    case 352979:
    {
        returnValue = F("Zur Flürchen");
        break;
    }
    case 352980:
    {
        returnValue = F("Zur Flüthe");
        break;
    }
    case 352981:
    {
        returnValue = F("Zur Folge");
        break;
    }
    case 352982:
    {
        returnValue = F("Zur Forelle");
        break;
    }
    case 352983:
    {
        returnValue = F("Zur Forst");
        break;
    }
    case 352984:
    {
        returnValue = F("Zur Forstermühle");
        break;
    }
    case 352985:
    {
        returnValue = F("Zur Forstmühle");
        break;
    }
    case 352986:
    {
        returnValue = F("Zur Forstquelle");
        break;
    }
    case 352987:
    {
        returnValue = F("Zur Forstsiedlung");
        break;
    }
    case 352988:
    {
        returnValue = F("Zur Forstwiese");
        break;
    }
    case 352989:
    {
        returnValue = F("Zur Frack");
        break;
    }
    case 352990:
    {
        returnValue = F("Zur Frankenbach");
        break;
    }
    case 352991:
    {
        returnValue = F("Zur Französichen Kapelle");
        break;
    }
    case 352992:
    {
        returnValue = F("Zur Frauenwiese");
        break;
    }
    case 352993:
    {
        returnValue = F("Zur Freiheit");
        break;
    }
    case 352994:
    {
        returnValue = F("Zur Freilichtbühne");
        break;
    }
    case 352995:
    {
        returnValue = F("Zur Freiweide");
        break;
    }
    case 352996:
    {
        returnValue = F("Zur Freizeit");
        break;
    }
    case 352997:
    {
        returnValue = F("Zur Freizeithalle");
        break;
    }
    case 352998:
    {
        returnValue = F("Zur Fremouthswarf");
        break;
    }
    case 352999:
    {
        returnValue = F("Zur Friedenseiche");
        break;
    }
    case 353000:
    {
        returnValue = F("Zur Friedenskirche");
        break;
    }
    case 353001:
    {
        returnValue = F("Zur Friedenslinde");
        break;
    }
    case 353002:
    {
        returnValue = F("Zur Friedhofshalle");
        break;
    }
    case 353003:
    {
        returnValue = F("Zur Friedolinsheck");
        break;
    }
    case 353004:
    {
        returnValue = F("Zur Friedrich-Grasow-Str.");
        break;
    }
    case 353005:
    {
        returnValue = F("Zur Friedrichfeste");
        break;
    }
    case 353006:
    {
        returnValue = F("Zur Friedrichshöhe");
        break;
    }
    case 353007:
    {
        returnValue = F("Zur Friesenweide");
        break;
    }
    case 353008:
    {
        returnValue = F("Zur Frohen Zukunft");
        break;
    }
    case 353009:
    {
        returnValue = F("Zur Froschau");
        break;
    }
    case 353010:
    {
        returnValue = F("Zur Froschmühle");
        break;
    }
    case 353011:
    {
        returnValue = F("Zur Fränke");
        break;
    }
    case 353012:
    {
        returnValue = F("Zur Fröhlichkeit");
        break;
    }
    case 353013:
    {
        returnValue = F("Zur Fröhn");
        break;
    }
    case 353014:
    {
        returnValue = F("Zur Fröhne");
        break;
    }
    case 353015:
    {
        returnValue = F("Zur Fuchseiche");
        break;
    }
    case 353016:
    {
        returnValue = F("Zur Fuchsfalle");
        break;
    }
    case 353017:
    {
        returnValue = F("Zur Fuchsfarm");
        break;
    }
    case 353018:
    {
        returnValue = F("Zur Fuchshalde");
        break;
    }
    case 353019:
    {
        returnValue = F("Zur Fuchshütte");
        break;
    }
    case 353020:
    {
        returnValue = F("Zur Fuchskaul");
        break;
    }
    case 353021:
    {
        returnValue = F("Zur Fuchskaule");
        break;
    }
    case 353022:
    {
        returnValue = F("Zur Fuchskaute");
        break;
    }
    case 353023:
    {
        returnValue = F("Zur Fuchssteige");
        break;
    }
    case 353024:
    {
        returnValue = F("Zur Fuhne");
        break;
    }
    case 353025:
    {
        returnValue = F("Zur Fulda");
        break;
    }
    case 353026:
    {
        returnValue = F("Zur Fuldamühle");
        break;
    }
    case 353027:
    {
        returnValue = F("Zur Furt");
        break;
    }
    case 353028:
    {
        returnValue = F("Zur Futra");
        break;
    }
    case 353029:
    {
        returnValue = F("Zur Fußmühle");
        break;
    }
    case 353030:
    {
        returnValue = F("Zur Fähre");
        break;
    }
    case 353031:
    {
        returnValue = F("Zur Förbeeke");
        break;
    }
    case 353032:
    {
        returnValue = F("Zur Försterei");
        break;
    }
    case 353033:
    {
        returnValue = F("Zur Försterlaube");
        break;
    }
    case 353034:
    {
        returnValue = F("Zur Füllscheuer");
        break;
    }
    case 353035:
    {
        returnValue = F("Zur Fürstenstr.");
        break;
    }
    case 353036:
    {
        returnValue = F("Zur Gabjei");
        break;
    }
    case 353037:
    {
        returnValue = F("Zur Galeria");
        break;
    }
    case 353038:
    {
        returnValue = F("Zur Galerie");
        break;
    }
    case 353039:
    {
        returnValue = F("Zur Galgenvogelhütte");
        break;
    }
    case 353040:
    {
        returnValue = F("Zur Gambachshöhe");
        break;
    }
    case 353041:
    {
        returnValue = F("Zur Gantenburg");
        break;
    }
    case 353042:
    {
        returnValue = F("Zur Gartenanlage");
        break;
    }
    case 353043:
    {
        returnValue = F("Zur Gartenkolonie");
        break;
    }
    case 353044:
    {
        returnValue = F("Zur Gartenlaube");
        break;
    }
    case 353045:
    {
        returnValue = F("Zur Gartensiedlung");
        break;
    }
    case 353046:
    {
        returnValue = F("Zur Gartenstr.");
        break;
    }
    case 353047:
    {
        returnValue = F("Zur Gartenwiese");
        break;
    }
    case 353048:
    {
        returnValue = F("Zur Gartequelle");
        break;
    }
    case 353049:
    {
        returnValue = F("Zur Gartetalschule");
        break;
    }
    case 353050:
    {
        returnValue = F("Zur Gass");
        break;
    }
    case 353051:
    {
        returnValue = F("Zur Gasse");
        break;
    }
    case 353052:
    {
        returnValue = F("Zur Gassenheck");
        break;
    }
    case 353053:
    {
        returnValue = F("Zur Gaste");
        break;
    }
    case 353054:
    {
        returnValue = F("Zur Gatze");
        break;
    }
    case 353055:
    {
        returnValue = F("Zur Gaulshütte");
        break;
    }
    case 353056:
    {
        returnValue = F("Zur Geba");
        break;
    }
    case 353057:
    {
        returnValue = F("Zur Geest");
        break;
    }
    case 353058:
    {
        returnValue = F("Zur Geierglocke");
        break;
    }
    case 353059:
    {
        returnValue = F("Zur Geisley");
        break;
    }
    case 353060:
    {
        returnValue = F("Zur Geizefurt");
        break;
    }
    case 353061:
    {
        returnValue = F("Zur Geißdell");
        break;
    }
    case 353062:
    {
        returnValue = F("Zur Gelben Struth");
        break;
    }
    case 353063:
    {
        returnValue = F("Zur Gerbe");
        break;
    }
    case 353064:
    {
        returnValue = F("Zur Gerberei");
        break;
    }
    case 353065:
    {
        returnValue = F("Zur Gers");
        break;
    }
    case 353066:
    {
        returnValue = F("Zur Gerstenwuhne");
        break;
    }
    case 353067:
    {
        returnValue = F("Zur Gesamtschule");
        break;
    }
    case 353068:
    {
        returnValue = F("Zur Gewann");
        break;
    }
    case 353069:
    {
        returnValue = F("Zur Gickelsburg");
        break;
    }
    case 353070:
    {
        returnValue = F("Zur Gietlingsmühle");
        break;
    }
    case 353071:
    {
        returnValue = F("Zur Gießhalle");
        break;
    }
    case 353072:
    {
        returnValue = F("Zur Gilde");
        break;
    }
    case 353073:
    {
        returnValue = F("Zur Gindlalm");
        break;
    }
    case 353074:
    {
        returnValue = F("Zur Ginsterburg");
        break;
    }
    case 353075:
    {
        returnValue = F("Zur Gipsmühle");
        break;
    }
    case 353076:
    {
        returnValue = F("Zur Glashütte");
        break;
    }
    case 353077:
    {
        returnValue = F("Zur Glassägmühle");
        break;
    }
    case 353078:
    {
        returnValue = F("Zur Glessener Höhe");
        break;
    }
    case 353079:
    {
        returnValue = F("Zur Glippe");
        break;
    }
    case 353080:
    {
        returnValue = F("Zur Glocke");
        break;
    }
    case 353081:
    {
        returnValue = F("Zur Glockenbreite");
        break;
    }
    case 353082:
    {
        returnValue = F("Zur Glockenkuhle");
        break;
    }
    case 353083:
    {
        returnValue = F("Zur Glockenwiese");
        break;
    }
    case 353084:
    {
        returnValue = F("Zur Gloria");
        break;
    }
    case 353085:
    {
        returnValue = F("Zur Goldbrede");
        break;
    }
    case 353086:
    {
        returnValue = F("Zur Goldenen Glucke");
        break;
    }
    case 353087:
    {
        returnValue = F("Zur Goldenen Höhe");
        break;
    }
    case 353088:
    {
        returnValue = F("Zur Goldensteinbrücke");
        break;
    }
    case 353089:
    {
        returnValue = F("Zur Goldgrube");
        break;
    }
    case 353090:
    {
        returnValue = F("Zur Goldklinge");
        break;
    }
    case 353091:
    {
        returnValue = F("Zur Goldmannbank");
        break;
    }
    case 353092:
    {
        returnValue = F("Zur Gonzlay");
        break;
    }
    case 353093:
    {
        returnValue = F("Zur Goor");
        break;
    }
    case 353094:
    {
        returnValue = F("Zur Goost");
        break;
    }
    case 353095:
    {
        returnValue = F("Zur Gottesgabe");
        break;
    }
    case 353096:
    {
        returnValue = F("Zur Gotteshülfe");
        break;
    }
    case 353097:
    {
        returnValue = F("Zur Gottwies");
        break;
    }
    case 353098:
    {
        returnValue = F("Zur Gowiese");
        break;
    }
    case 353099:
    {
        returnValue = F("Zur Grabener Höhe");
        break;
    }
    case 353100:
    {
        returnValue = F("Zur Grabenschlucht");
        break;
    }
    case 353101:
    {
        returnValue = F("Zur Grabow");
        break;
    }
    case 353102:
    {
        returnValue = F("Zur Gradhöhe");
        break;
    }
    case 353103:
    {
        returnValue = F("Zur Gradlhöhe");
        break;
    }
    case 353104:
    {
        returnValue = F("Zur Grafenburg");
        break;
    }
    case 353105:
    {
        returnValue = F("Zur Grafenmühle");
        break;
    }
    case 353106:
    {
        returnValue = F("Zur Grafentafel");
        break;
    }
    case 353107:
    {
        returnValue = F("Zur Graflage");
        break;
    }
    case 353108:
    {
        returnValue = F("Zur Grafschaft");
        break;
    }
    case 353109:
    {
        returnValue = F("Zur Graft");
        break;
    }
    case 353110:
    {
        returnValue = F("Zur Grandkuhle");
        break;
    }
    case 353111:
    {
        returnValue = F("Zur Granetalsperre");
        break;
    }
    case 353112:
    {
        returnValue = F("Zur Grauburg");
        break;
    }
    case 353113:
    {
        returnValue = F("Zur Grebbe");
        break;
    }
    case 353114:
    {
        returnValue = F("Zur Grenzau");
        break;
    }
    case 353115:
    {
        returnValue = F("Zur Grenze");
        break;
    }
    case 353116:
    {
        returnValue = F("Zur Grenzmühle");
        break;
    }
    case 353117:
    {
        returnValue = F("Zur Grillhütte");
        break;
    }
    case 353118:
    {
        returnValue = F("Zur Grotte");
        break;
    }
    case 353119:
    {
        returnValue = F("Zur Großen Angelkuhle");
        break;
    }
    case 353120:
    {
        returnValue = F("Zur Großen Bleiche");
        break;
    }
    case 353121:
    {
        returnValue = F("Zur Großen Halle");
        break;
    }
    case 353122:
    {
        returnValue = F("Zur Großen Heide");
        break;
    }
    case 353123:
    {
        returnValue = F("Zur Großen Höhe");
        break;
    }
    case 353124:
    {
        returnValue = F("Zur Großen Loh");
        break;
    }
    case 353125:
    {
        returnValue = F("Zur Großen Maate");
        break;
    }
    case 353126:
    {
        returnValue = F("Zur Großen Meede");
        break;
    }
    case 353127:
    {
        returnValue = F("Zur Großen Wiese");
        break;
    }
    case 353128:
    {
        returnValue = F("Zur Großhanserei");
        break;
    }
    case 353129:
    {
        returnValue = F("Zur Großwies");
        break;
    }
    case 353130:
    {
        returnValue = F("Zur Grube");
        break;
    }
    case 353131:
    {
        returnValue = F("Zur Grube Carl");
        break;
    }
    case 353132:
    {
        returnValue = F("Zur Grube Versöhnung");
        break;
    }
    case 353133:
    {
        returnValue = F("Zur Grumbtwiese");
        break;
    }
    case 353134:
    {
        returnValue = F("Zur Grummetswiese");
        break;
    }
    case 353135:
    {
        returnValue = F("Zur Grund");
        break;
    }
    case 353136:
    {
        returnValue = F("Zur Grundel");
        break;
    }
    case 353137:
    {
        returnValue = F("Zur Grundschule");
        break;
    }
    case 353138:
    {
        returnValue = F("Zur Grundwiese");
        break;
    }
    case 353139:
    {
        returnValue = F("Zur Grundzelle");
        break;
    }
    case 353140:
    {
        returnValue = F("Zur Gräfte");
        break;
    }
    case 353141:
    {
        returnValue = F("Zur Gräth");
        break;
    }
    case 353142:
    {
        returnValue = F("Zur Grönbachquelle");
        break;
    }
    case 353143:
    {
        returnValue = F("Zur Grünen Au");
        break;
    }
    case 353144:
    {
        returnValue = F("Zur Grünen Flur");
        break;
    }
    case 353145:
    {
        returnValue = F("Zur Grünen Linde");
        break;
    }
    case 353146:
    {
        returnValue = F("Zur Grünen Oase");
        break;
    }
    case 353147:
    {
        returnValue = F("Zur Grünen Tanne");
        break;
    }
    case 353148:
    {
        returnValue = F("Zur Grünichte");
        break;
    }
    case 353149:
    {
        returnValue = F("Zur Grüsener Hecke");
        break;
    }
    case 353150:
    {
        returnValue = F("Zur Grüte");
        break;
    }
    case 353151:
    {
        returnValue = F("Zur Gummershardt");
        break;
    }
    case 353152:
    {
        returnValue = F("Zur Gutehoffnungshütte");
        break;
    }
    case 353153:
    {
        returnValue = F("Zur Guten");
        break;
    }
    case 353154:
    {
        returnValue = F("Zur Gänsewiese");
        break;
    }
    case 353155:
    {
        returnValue = F("Zur Gänsweide");
        break;
    }
    case 353156:
    {
        returnValue = F("Zur Gänswiese");
        break;
    }
    case 353157:
    {
        returnValue = F("Zur Gärte");
        break;
    }
    case 353158:
    {
        returnValue = F("Zur Gärtnerei");
        break;
    }
    case 353159:
    {
        returnValue = F("Zur Göckelmühle");
        break;
    }
    case 353160:
    {
        returnValue = F("Zur Göselmündung");
        break;
    }
    case 353161:
    {
        returnValue = F("Zur Götscher Mühle");
        break;
    }
    case 353162:
    {
        returnValue = F("Zur Güggelsburg");
        break;
    }
    case 353163:
    {
        returnValue = F("Zur Güldengewann");
        break;
    }
    case 353164:
    {
        returnValue = F("Zur Günne");
        break;
    }
    case 353165:
    {
        returnValue = F("Zur Günze");
        break;
    }
    case 353166:
    {
        returnValue = F("Zur Haar");
        break;
    }
    case 353167:
    {
        returnValue = F("Zur Haardt");
        break;
    }
    case 353168:
    {
        returnValue = F("Zur Haartmühle");
        break;
    }
    case 353169:
    {
        returnValue = F("Zur Habekost");
        break;
    }
    case 353170:
    {
        returnValue = F("Zur Haberwiese");
        break;
    }
    case 353171:
    {
        returnValue = F("Zur Habichthorst");
        break;
    }
    case 353172:
    {
        returnValue = F("Zur Hache");
        break;
    }
    case 353173:
    {
        returnValue = F("Zur Hachgrund");
        break;
    }
    case 353174:
    {
        returnValue = F("Zur Haderhöhe");
        break;
    }
    case 353175:
    {
        returnValue = F("Zur Hafenspitze");
        break;
    }
    case 353176:
    {
        returnValue = F("Zur Hagelsburg");
        break;
    }
    case 353177:
    {
        returnValue = F("Zur Hagelschonung");
        break;
    }
    case 353178:
    {
        returnValue = F("Zur Hagener Str.");
        break;
    }
    case 353179:
    {
        returnValue = F("Zur Hagenriede");
        break;
    }
    case 353180:
    {
        returnValue = F("Zur Hahnenbrücke");
        break;
    }
    case 353181:
    {
        returnValue = F("Zur Hahnenkoppel");
        break;
    }
    case 353182:
    {
        returnValue = F("Zur Hahnmühle");
        break;
    }
    case 353183:
    {
        returnValue = F("Zur Haid");
        break;
    }
    case 353184:
    {
        returnValue = F("Zur Haie");
        break;
    }
    case 353185:
    {
        returnValue = F("Zur Haimburg");
        break;
    }
    case 353186:
    {
        returnValue = F("Zur Hainbachsmühle");
        break;
    }
    case 353187:
    {
        returnValue = F("Zur Hainbuche");
        break;
    }
    case 353188:
    {
        returnValue = F("Zur Hainerde");
        break;
    }
    case 353189:
    {
        returnValue = F("Zur Hainholzmühle");
        break;
    }
    case 353190:
    {
        returnValue = F("Zur Hainquelle");
        break;
    }
    case 353191:
    {
        returnValue = F("Zur Hainroeder Linde");
        break;
    }
    case 353192:
    {
        returnValue = F("Zur Hainsburg");
        break;
    }
    case 353193:
    {
        returnValue = F("Zur Hainseite");
        break;
    }
    case 353194:
    {
        returnValue = F("Zur Hainstermühle");
        break;
    }
    case 353195:
    {
        returnValue = F("Zur Halben Hufe");
        break;
    }
    case 353196:
    {
        returnValue = F("Zur Halbinsel");
        break;
    }
    case 353197:
    {
        returnValue = F("Zur Halde");
        break;
    }
    case 353198:
    {
        returnValue = F("Zur Halfenwiese");
        break;
    }
    case 353199:
    {
        returnValue = F("Zur Hall");
        break;
    }
    case 353200:
    {
        returnValue = F("Zur Halle");
        break;
    }
    case 353201:
    {
        returnValue = F("Zur Hallermühle");
        break;
    }
    case 353202:
    {
        returnValue = F("Zur Halsbreche");
        break;
    }
    case 353203:
    {
        returnValue = F("Zur Halsmecke");
        break;
    }
    case 353204:
    {
        returnValue = F("Zur Haltestelle");
        break;
    }
    case 353205:
    {
        returnValue = F("Zur Hambitz");
        break;
    }
    case 353206:
    {
        returnValue = F("Zur Hambrücke");
        break;
    }
    case 353207:
    {
        returnValue = F("Zur Hamelquelle");
        break;
    }
    case 353208:
    {
        returnValue = F("Zur Hamey");
        break;
    }
    case 353209:
    {
        returnValue = F("Zur Hamme");
        break;
    }
    case 353210:
    {
        returnValue = F("Zur Hammecke");
        break;
    }
    case 353211:
    {
        returnValue = F("Zur Hammerau");
        break;
    }
    case 353212:
    {
        returnValue = F("Zur Hammerbrücke");
        break;
    }
    case 353213:
    {
        returnValue = F("Zur Hammerhöhe");
        break;
    }
    case 353214:
    {
        returnValue = F("Zur Hammerleite");
        break;
    }
    case 353215:
    {
        returnValue = F("Zur Hammerplatte");
        break;
    }
    case 353216:
    {
        returnValue = F("Zur Hammerschmiede");
        break;
    }
    case 353217:
    {
        returnValue = F("Zur Hammhöhe");
        break;
    }
    case 353218:
    {
        returnValue = F("Zur Handelsschule");
        break;
    }
    case 353219:
    {
        returnValue = F("Zur Hansa");
        break;
    }
    case 353220:
    {
        returnValue = F("Zur Hansheide");
        break;
    }
    case 353221:
    {
        returnValue = F("Zur Harbecke");
        break;
    }
    case 353222:
    {
        returnValue = F("Zur Hardt");
        break;
    }
    case 353223:
    {
        returnValue = F("Zur Hardthöhe");
        break;
    }
    case 353224:
    {
        returnValue = F("Zur Harlebucht");
        break;
    }
    case 353225:
    {
        returnValue = F("Zur Hart");
        break;
    }
    case 353226:
    {
        returnValue = F("Zur Harth");
        break;
    }
    case 353227:
    {
        returnValue = F("Zur Hartling");
        break;
    }
    case 353228:
    {
        returnValue = F("Zur Hartwiese");
        break;
    }
    case 353229:
    {
        returnValue = F("Zur Hase");
        break;
    }
    case 353230:
    {
        returnValue = F("Zur Hasebrücke");
        break;
    }
    case 353231:
    {
        returnValue = F("Zur Hasengrube");
        break;
    }
    case 353232:
    {
        returnValue = F("Zur Hasenheide");
        break;
    }
    case 353233:
    {
        returnValue = F("Zur Hasenkapelle");
        break;
    }
    case 353234:
    {
        returnValue = F("Zur Hasenkuhle");
        break;
    }
    case 353235:
    {
        returnValue = F("Zur Hasenlay");
        break;
    }
    case 353236:
    {
        returnValue = F("Zur Hasenweide");
        break;
    }
    case 353237:
    {
        returnValue = F("Zur Hasenwiese");
        break;
    }
    case 353238:
    {
        returnValue = F("Zur Hassel");
        break;
    }
    case 353239:
    {
        returnValue = F("Zur Hasselbachquelle");
        break;
    }
    case 353240:
    {
        returnValue = F("Zur Hasselklink");
        break;
    }
    case 353241:
    {
        returnValue = F("Zur Hattstadt");
        break;
    }
    case 353242:
    {
        returnValue = F("Zur Haube");
        break;
    }
    case 353243:
    {
        returnValue = F("Zur Haudersmühle");
        break;
    }
    case 353244:
    {
        returnValue = F("Zur Hauener Hooge");
        break;
    }
    case 353245:
    {
        returnValue = F("Zur Hauptschule");
        break;
    }
    case 353246:
    {
        returnValue = F("Zur Hauptstr.");
        break;
    }
    case 353247:
    {
        returnValue = F("Zur Hausener Hute");
        break;
    }
    case 353248:
    {
        returnValue = F("Zur Hausstedte");
        break;
    }
    case 353249:
    {
        returnValue = F("Zur Hebammenwiese");
        break;
    }
    case 353250:
    {
        returnValue = F("Zur Hebe");
        break;
    }
    case 353251:
    {
        returnValue = F("Zur Heck");
        break;
    }
    case 353252:
    {
        returnValue = F("Zur Heckenrose");
        break;
    }
    case 353253:
    {
        returnValue = F("Zur Hederaue");
        break;
    }
    case 353254:
    {
        returnValue = F("Zur Heeg");
        break;
    }
    case 353255:
    {
        returnValue = F("Zur Heerpauke");
        break;
    }
    case 353256:
    {
        returnValue = F("Zur Heerstr.");
        break;
    }
    case 353257:
    {
        returnValue = F("Zur Hege");
        break;
    }
    case 353258:
    {
        returnValue = F("Zur Hehrmühle");
        break;
    }
    case 353259:
    {
        returnValue = F("Zur Heid");
        break;
    }
    case 353260:
    {
        returnValue = F("Zur Heide");
        break;
    }
    case 353261:
    {
        returnValue = F("Zur Heideblume");
        break;
    }
    case 353262:
    {
        returnValue = F("Zur Heidekoppel");
        break;
    }
    case 353263:
    {
        returnValue = F("Zur Heidepromenade");
        break;
    }
    case 353264:
    {
        returnValue = F("Zur Heidewiese");
        break;
    }
    case 353265:
    {
        returnValue = F("Zur Heidkoppel");
        break;
    }
    case 353266:
    {
        returnValue = F("Zur Heidmühle");
        break;
    }
    case 353267:
    {
        returnValue = F("Zur Heidstr.");
        break;
    }
    case 353268:
    {
        returnValue = F("Zur Heidwiese");
        break;
    }
    case 353269:
    {
        returnValue = F("Zur Heienharth");
        break;
    }
    case 353270:
    {
        returnValue = F("Zur Heiligen Eiche");
        break;
    }
    case 353271:
    {
        returnValue = F("Zur Heiligen Heid");
        break;
    }
    case 353272:
    {
        returnValue = F("Zur Heiligenrieke");
        break;
    }
    case 353273:
    {
        returnValue = F("Zur Heiligenwiese");
        break;
    }
    case 353274:
    {
        returnValue = F("Zur Heilquelle");
        break;
    }
    case 353275:
    {
        returnValue = F("Zur Heimscholle");
        break;
    }
    case 353276:
    {
        returnValue = F("Zur Heimstätte");
        break;
    }
    case 353277:
    {
        returnValue = F("Zur Heimöde");
        break;
    }
    case 353278:
    {
        returnValue = F("Zur Heinrichsbürg");
        break;
    }
    case 353279:
    {
        returnValue = F("Zur Heinrichshöhe");
        break;
    }
    case 353280:
    {
        returnValue = F("Zur Heisterbacher Talbahn");
        break;
    }
    case 353281:
    {
        returnValue = F("Zur Heisterburg");
        break;
    }
    case 353282:
    {
        returnValue = F("Zur Heistershöhe");
        break;
    }
    case 353283:
    {
        returnValue = F("Zur Held");
        break;
    }
    case 353284:
    {
        returnValue = F("Zur Helde");
        break;
    }
    case 353285:
    {
        returnValue = F("Zur Helenenruh");
        break;
    }
    case 353286:
    {
        returnValue = F("Zur Hell");
        break;
    }
    case 353287:
    {
        returnValue = F("Zur Helle");
        break;
    }
    case 353288:
    {
        returnValue = F("Zur Hellebarde");
        break;
    }
    case 353289:
    {
        returnValue = F("Zur Hellewiese");
        break;
    }
    case 353290:
    {
        returnValue = F("Zur Hellweghalle");
        break;
    }
    case 353291:
    {
        returnValue = F("Zur Hellwies");
        break;
    }
    case 353292:
    {
        returnValue = F("Zur Helmahütte");
        break;
    }
    case 353293:
    {
        returnValue = F("Zur Hemmecke");
        break;
    }
    case 353294:
    {
        returnValue = F("Zur Hengelesmühle");
        break;
    }
    case 353295:
    {
        returnValue = F("Zur Hengstenkoppel");
        break;
    }
    case 353296:
    {
        returnValue = F("Zur Hepper Höhe");
        break;
    }
    case 353297:
    {
        returnValue = F("Zur Herberge");
        break;
    }
    case 353298:
    {
        returnValue = F("Zur Hergottsmühle");
        break;
    }
    case 353299:
    {
        returnValue = F("Zur Herl");
        break;
    }
    case 353300:
    {
        returnValue = F("Zur Hermannsmühle");
        break;
    }
    case 353301:
    {
        returnValue = F("Zur Herrenmühle");
        break;
    }
    case 353302:
    {
        returnValue = F("Zur Herrenwiese");
        break;
    }
    case 353303:
    {
        returnValue = F("Zur Herrgottsruhe");
        break;
    }
    case 353304:
    {
        returnValue = F("Zur Herrlichkeit");
        break;
    }
    case 353305:
    {
        returnValue = F("Zur Herrnwiese");
        break;
    }
    case 353306:
    {
        returnValue = F("Zur Hessel");
        break;
    }
    case 353307:
    {
        returnValue = F("Zur Hessenliede");
        break;
    }
    case 353308:
    {
        returnValue = F("Zur Hessenschanze");
        break;
    }
    case 353309:
    {
        returnValue = F("Zur Hessenspitze");
        break;
    }
    case 353310:
    {
        returnValue = F("Zur Hesterei");
        break;
    }
    case 353311:
    {
        returnValue = F("Zur Hetzbach");
        break;
    }
    case 353312:
    {
        returnValue = F("Zur Heubrücke");
        break;
    }
    case 353313:
    {
        returnValue = F("Zur Heupresse");
        break;
    }
    case 353314:
    {
        returnValue = F("Zur Heuring");
        break;
    }
    case 353315:
    {
        returnValue = F("Zur Heusteige");
        break;
    }
    case 353316:
    {
        returnValue = F("Zur Heuwiese");
        break;
    }
    case 353317:
    {
        returnValue = F("Zur Hexenlinde");
        break;
    }
    case 353318:
    {
        returnValue = F("Zur Heyde");
        break;
    }
    case 353319:
    {
        returnValue = F("Zur Heßmühle");
        break;
    }
    case 353320:
    {
        returnValue = F("Zur Heßwiese");
        break;
    }
    case 353321:
    {
        returnValue = F("Zur Hild");
        break;
    }
    case 353322:
    {
        returnValue = F("Zur Himmelspforte");
        break;
    }
    case 353323:
    {
        returnValue = F("Zur Himmelwies");
        break;
    }
    case 353324:
    {
        returnValue = F("Zur Hindenburgschleuse");
        break;
    }
    case 353325:
    {
        returnValue = F("Zur Hindenburgshöhe");
        break;
    }
    case 353326:
    {
        returnValue = F("Zur Hinsel");
        break;
    }
    case 353327:
    {
        returnValue = F("Zur Hinterecke");
        break;
    }
    case 353328:
    {
        returnValue = F("Zur Hintermühle");
        break;
    }
    case 353329:
    {
        returnValue = F("Zur Hinterpütz");
        break;
    }
    case 353330:
    {
        returnValue = F("Zur Hirschecke");
        break;
    }
    case 353331:
    {
        returnValue = F("Zur Hirschkammer");
        break;
    }
    case 353332:
    {
        returnValue = F("Zur Hirschruh");
        break;
    }
    case 353333:
    {
        returnValue = F("Zur Hirst");
        break;
    }
    case 353334:
    {
        returnValue = F("Zur Hirtengrube");
        break;
    }
    case 353335:
    {
        returnValue = F("Zur Hirtenhohle");
        break;
    }
    case 353336:
    {
        returnValue = F("Zur Hirtenkuhle");
        break;
    }
    case 353337:
    {
        returnValue = F("Zur Hirtenwies");
        break;
    }
    case 353338:
    {
        returnValue = F("Zur Hirzgabel");
        break;
    }
    case 353339:
    {
        returnValue = F("Zur Historischen Innenstadt");
        break;
    }
    case 353340:
    {
        returnValue = F("Zur Historischen Mühle");
        break;
    }
    case 353341:
    {
        returnValue = F("Zur Hochgerichtsheide");
        break;
    }
    case 353342:
    {
        returnValue = F("Zur Hochmühle");
        break;
    }
    case 353343:
    {
        returnValue = F("Zur Hochstatt");
        break;
    }
    case 353344:
    {
        returnValue = F("Zur Hochstr.");
        break;
    }
    case 353345:
    {
        returnValue = F("Zur Hockenhecke");
        break;
    }
    case 353346:
    {
        returnValue = F("Zur Hoffbecke");
        break;
    }
    case 353347:
    {
        returnValue = F("Zur Hoffnung");
        break;
    }
    case 353348:
    {
        returnValue = F("Zur Hofhell");
        break;
    }
    case 353349:
    {
        returnValue = F("Zur Hofkoppel");
        break;
    }
    case 353350:
    {
        returnValue = F("Zur Hofmark");
        break;
    }
    case 353351:
    {
        returnValue = F("Zur Hofmühle");
        break;
    }
    case 353352:
    {
        returnValue = F("Zur Hofstadt");
        break;
    }
    case 353353:
    {
        returnValue = F("Zur Hofstatt");
        break;
    }
    case 353354:
    {
        returnValue = F("Zur Hofweide");
        break;
    }
    case 353355:
    {
        returnValue = F("Zur Hofwiese");
        break;
    }
    case 353356:
    {
        returnValue = F("Zur Hoge");
        break;
    }
    case 353357:
    {
        returnValue = F("Zur Hohe Hell");
        break;
    }
    case 353358:
    {
        returnValue = F("Zur Hohen Eich");
        break;
    }
    case 353359:
    {
        returnValue = F("Zur Hohen Fenne");
        break;
    }
    case 353360:
    {
        returnValue = F("Zur Hohen Flur");
        break;
    }
    case 353361:
    {
        returnValue = F("Zur Hohen Hase");
        break;
    }
    case 353362:
    {
        returnValue = F("Zur Hohen Heck");
        break;
    }
    case 353363:
    {
        returnValue = F("Zur Hohen Heide");
        break;
    }
    case 353364:
    {
        returnValue = F("Zur Hohen Lieth");
        break;
    }
    case 353365:
    {
        returnValue = F("Zur Hohen Linde");
        break;
    }
    case 353366:
    {
        returnValue = F("Zur Hohen Linie");
        break;
    }
    case 353367:
    {
        returnValue = F("Zur Hohen Mark");
        break;
    }
    case 353368:
    {
        returnValue = F("Zur Hohen Meile");
        break;
    }
    case 353369:
    {
        returnValue = F("Zur Hohen Mühle");
        break;
    }
    case 353370:
    {
        returnValue = F("Zur Hohen Plate");
        break;
    }
    case 353371:
    {
        returnValue = F("Zur Hohen Schanze");
        break;
    }
    case 353372:
    {
        returnValue = F("Zur Hohen Sieben");
        break;
    }
    case 353373:
    {
        returnValue = F("Zur Hohen Sonne");
        break;
    }
    case 353374:
    {
        returnValue = F("Zur Hohen Str.");
        break;
    }
    case 353375:
    {
        returnValue = F("Zur Hohen Tanne");
        break;
    }
    case 353376:
    {
        returnValue = F("Zur Hohen Waag");
        break;
    }
    case 353377:
    {
        returnValue = F("Zur Hohen Wart");
        break;
    }
    case 353378:
    {
        returnValue = F("Zur Hohen Warte");
        break;
    }
    case 353379:
    {
        returnValue = F("Zur Hohenmarkt");
        break;
    }
    case 353380:
    {
        returnValue = F("Zur Hohl");
        break;
    }
    case 353381:
    {
        returnValue = F("Zur Hohle");
        break;
    }
    case 353382:
    {
        returnValue = F("Zur Hohley");
        break;
    }
    case 353383:
    {
        returnValue = F("Zur Hohlgasse");
        break;
    }
    case 353384:
    {
        returnValue = F("Zur Hohlwies");
        break;
    }
    case 353385:
    {
        returnValue = F("Zur Hohscheid");
        break;
    }
    case 353386:
    {
        returnValue = F("Zur Holderhecke");
        break;
    }
    case 353387:
    {
        returnValue = F("Zur Holderquelle");
        break;
    }
    case 353388:
    {
        returnValue = F("Zur Holdinghauser Hütte");
        break;
    }
    case 353389:
    {
        returnValue = F("Zur Hole");
        break;
    }
    case 353390:
    {
        returnValue = F("Zur Holl");
        break;
    }
    case 353391:
    {
        returnValue = F("Zur Holsteinsmühle");
        break;
    }
    case 353392:
    {
        returnValue = F("Zur Holstenau");
        break;
    }
    case 353393:
    {
        returnValue = F("Zur Holsterburg");
        break;
    }
    case 353394:
    {
        returnValue = F("Zur Holter Höhe");
        break;
    }
    case 353395:
    {
        returnValue = F("Zur Holter Mühle");
        break;
    }
    case 353396:
    {
        returnValue = F("Zur Holtwisch");
        break;
    }
    case 353397:
    {
        returnValue = F("Zur Holzbachschlucht");
        break;
    }
    case 353398:
    {
        returnValue = F("Zur Holzgrube");
        break;
    }
    case 353399:
    {
        returnValue = F("Zur Holzmarsch");
        break;
    }
    case 353400:
    {
        returnValue = F("Zur Holzmühle");
        break;
    }
    case 353401:
    {
        returnValue = F("Zur Holzschleife");
        break;
    }
    case 353402:
    {
        returnValue = F("Zur Holzseefe");
        break;
    }
    case 353403:
    {
        returnValue = F("Zur Holzwiese");
        break;
    }
    case 353404:
    {
        returnValue = F("Zur Homesmühle");
        break;
    }
    case 353405:
    {
        returnValue = F("Zur Hoor");
        break;
    }
    case 353406:
    {
        returnValue = F("Zur Hoorwiss");
        break;
    }
    case 353407:
    {
        returnValue = F("Zur Hopfenwiese");
        break;
    }
    case 353408:
    {
        returnValue = F("Zur Hoppecke");
        break;
    }
    case 353409:
    {
        returnValue = F("Zur Hoppensee");
        break;
    }
    case 353410:
    {
        returnValue = F("Zur Horburg");
        break;
    }
    case 353411:
    {
        returnValue = F("Zur Hornau");
        break;
    }
    case 353412:
    {
        returnValue = F("Zur Horst");
        break;
    }
    case 353413:
    {
        returnValue = F("Zur Horstert");
        break;
    }
    case 353414:
    {
        returnValue = F("Zur Horstmühle");
        break;
    }
    case 353415:
    {
        returnValue = F("Zur Hosenmühle");
        break;
    }
    case 353416:
    {
        returnValue = F("Zur Hottenburg");
        break;
    }
    case 353417:
    {
        returnValue = F("Zur Hotzepar");
        break;
    }
    case 353418:
    {
        returnValue = F("Zur Howe");
        break;
    }
    case 353419:
    {
        returnValue = F("Zur Hub");
        break;
    }
    case 353420:
    {
        returnValue = F("Zur Hubbrücke");
        break;
    }
    case 353421:
    {
        returnValue = F("Zur Hube");
        break;
    }
    case 353422:
    {
        returnValue = F("Zur Hubermühle");
        break;
    }
    case 353423:
    {
        returnValue = F("Zur Hubertusquelle");
        break;
    }
    case 353424:
    {
        returnValue = F("Zur Hude");
        break;
    }
    case 353425:
    {
        returnValue = F("Zur Huf");
        break;
    }
    case 353426:
    {
        returnValue = F("Zur Hufe");
        break;
    }
    case 353427:
    {
        returnValue = F("Zur Huhle");
        break;
    }
    case 353428:
    {
        returnValue = F("Zur Huk");
        break;
    }
    case 353429:
    {
        returnValue = F("Zur Hummelburg");
        break;
    }
    case 353430:
    {
        returnValue = F("Zur Hummerei");
        break;
    }
    case 353431:
    {
        returnValue = F("Zur Hunnenburg");
        break;
    }
    case 353432:
    {
        returnValue = F("Zur Hunte");
        break;
    }
    case 353433:
    {
        returnValue = F("Zur Hute");
        break;
    }
    case 353434:
    {
        returnValue = F("Zur Hutschmühle");
        break;
    }
    case 353435:
    {
        returnValue = F("Zur Hälde");
        break;
    }
    case 353436:
    {
        returnValue = F("Zur Hämelei");
        break;
    }
    case 353437:
    {
        returnValue = F("Zur Hämmermark");
        break;
    }
    case 353438:
    {
        returnValue = F("Zur Häsel");
        break;
    }
    case 353439:
    {
        returnValue = F("Zur Häusler-Reihe");
        break;
    }
    case 353440:
    {
        returnValue = F("Zur Häuslerei");
        break;
    }
    case 353441:
    {
        returnValue = F("Zur Höchst");
        break;
    }
    case 353442:
    {
        returnValue = F("Zur Höchte");
        break;
    }
    case 353443:
    {
        returnValue = F("Zur Höckersau");
        break;
    }
    case 353444:
    {
        returnValue = F("Zur Höft");
        break;
    }
    case 353445:
    {
        returnValue = F("Zur Höh");
        break;
    }
    case 353446:
    {
        returnValue = F("Zur Höhe");
        break;
    }
    case 353447:
    {
        returnValue = F("Zur Höhle");
        break;
    }
    case 353448:
    {
        returnValue = F("Zur Hölle");
        break;
    }
    case 353449:
    {
        returnValue = F("Zur Höllenmühle");
        break;
    }
    case 353450:
    {
        returnValue = F("Zur Höllmühle");
        break;
    }
    case 353451:
    {
        returnValue = F("Zur Hörnau");
        break;
    }
    case 353452:
    {
        returnValue = F("Zur Hörspe");
        break;
    }
    case 353453:
    {
        returnValue = F("Zur Hörst");
        break;
    }
    case 353454:
    {
        returnValue = F("Zur Höte");
        break;
    }
    case 353455:
    {
        returnValue = F("Zur Hückersheide");
        break;
    }
    case 353456:
    {
        returnValue = F("Zur Hüder Masch");
        break;
    }
    case 353457:
    {
        returnValue = F("Zur Hüffe");
        break;
    }
    case 353458:
    {
        returnValue = F("Zur Hüggelschlucht");
        break;
    }
    case 353459:
    {
        returnValue = F("Zur Hühle");
        break;
    }
    case 353460:
    {
        returnValue = F("Zur Hühnerfarm");
        break;
    }
    case 353461:
    {
        returnValue = F("Zur Hüllbuche");
        break;
    }
    case 353462:
    {
        returnValue = F("Zur Hünenburg");
        break;
    }
    case 353463:
    {
        returnValue = F("Zur Hünschen Burg");
        break;
    }
    case 353464:
    {
        returnValue = F("Zur Hütt-Weg");
        break;
    }
    case 353465:
    {
        returnValue = F("Zur Hütte");
        break;
    }
    case 353466:
    {
        returnValue = F("Zur Hüttenmühle");
        break;
    }
    case 353467:
    {
        returnValue = F("Zur Ibrakuppe");
        break;
    }
    case 353468:
    {
        returnValue = F("Zur Ihle");
        break;
    }
    case 353469:
    {
        returnValue = F("Zur Ikel");
        break;
    }
    case 353470:
    {
        returnValue = F("Zur Ilkahöhe");
        break;
    }
    case 353471:
    {
        returnValue = F("Zur Illerau");
        break;
    }
    case 353472:
    {
        returnValue = F("Zur Ilm");
        break;
    }
    case 353473:
    {
        returnValue = F("Zur Ilmenau");
        break;
    }
    case 353474:
    {
        returnValue = F("Zur Ils");
        break;
    }
    case 353475:
    {
        returnValue = F("Zur Ilsenburg");
        break;
    }
    case 353476:
    {
        returnValue = F("Zur Imburg");
        break;
    }
    case 353477:
    {
        returnValue = F("Zur Imkehörne");
        break;
    }
    case 353478:
    {
        returnValue = F("Zur Imweiler Wies");
        break;
    }
    case 353479:
    {
        returnValue = F("Zur Inde");
        break;
    }
    case 353480:
    {
        returnValue = F("Zur Ingendorfer Burg");
        break;
    }
    case 353481:
    {
        returnValue = F("Zur Inmatt");
        break;
    }
    case 353482:
    {
        returnValue = F("Zur Inninger Mühle");
        break;
    }
    case 353483:
    {
        returnValue = F("Zur Insel");
        break;
    }
    case 353484:
    {
        returnValue = F("Zur Insel Rott");
        break;
    }
    case 353485:
    {
        returnValue = F("Zur Ipfstr.");
        break;
    }
    case 353486:
    {
        returnValue = F("Zur Isar");
        break;
    }
    case 353487:
    {
        returnValue = F("Zur Isaraue");
        break;
    }
    case 353488:
    {
        returnValue = F("Zur Itterquelle");
        break;
    }
    case 353489:
    {
        returnValue = F("Zur Itzquelle");
        break;
    }
    case 353490:
    {
        returnValue = F("Zur Jabachbrücke");
        break;
    }
    case 353491:
    {
        returnValue = F("Zur Jade");
        break;
    }
    case 353492:
    {
        returnValue = F("Zur Jagdhütte");
        break;
    }
    case 353493:
    {
        returnValue = F("Zur Jahnaquelle");
        break;
    }
    case 353494:
    {
        returnValue = F("Zur Jahneiche");
        break;
    }
    case 353495:
    {
        returnValue = F("Zur Jahnhöhe");
        break;
    }
    case 353496:
    {
        returnValue = F("Zur Jakobsruhe");
        break;
    }
    case 353497:
    {
        returnValue = F("Zur Jakobuskirche");
        break;
    }
    case 353498:
    {
        returnValue = F("Zur Jakobuslinde");
        break;
    }
    case 353499:
    {
        returnValue = F("Zur Jannowitzbrücke");
        break;
    }
    case 353500:
    {
        returnValue = F("Zur Jansenhecke");
        break;
    }
    case 353501:
    {
        returnValue = F("Zur Jaske");
        break;
    }
    case 353502:
    {
        returnValue = F("Zur Jaspers Bank");
        break;
    }
    case 353503:
    {
        returnValue = F("Zur Johann-Adams-Mühle");
        break;
    }
    case 353504:
    {
        returnValue = F("Zur Johanneswiese");
        break;
    }
    case 353505:
    {
        returnValue = F("Zur Johanniskirche");
        break;
    }
    case 353506:
    {
        returnValue = F("Zur Johannismühle");
        break;
    }
    case 353507:
    {
        returnValue = F("Zur Josefschule");
        break;
    }
    case 353508:
    {
        returnValue = F("Zur Josefslinde");
        break;
    }
    case 353509:
    {
        returnValue = F("Zur Jugendherberge");
        break;
    }
    case 353510:
    {
        returnValue = F("Zur Jungviehweide");
        break;
    }
    case 353511:
    {
        returnValue = F("Zur Junkerswiese");
        break;
    }
    case 353512:
    {
        returnValue = F("Zur Jägerei");
        break;
    }
    case 353513:
    {
        returnValue = F("Zur Jägereiche");
        break;
    }
    case 353514:
    {
        returnValue = F("Zur Jägerkuhle");
        break;
    }
    case 353515:
    {
        returnValue = F("Zur Jägersmühle");
        break;
    }
    case 353516:
    {
        returnValue = F("Zur Jägersruh");
        break;
    }
    case 353517:
    {
        returnValue = F("Zur Jägerwiese");
        break;
    }
    case 353518:
    {
        returnValue = F("Zur Jürse");
        break;
    }
    case 353519:
    {
        returnValue = F("Zur K1155");
        break;
    }
    case 353520:
    {
        returnValue = F("Zur Kahlhambuche");
        break;
    }
    case 353521:
    {
        returnValue = F("Zur Kahlleite");
        break;
    }
    case 353522:
    {
        returnValue = F("Zur Kaiser-Wilhelm-Brücke");
        break;
    }
    case 353523:
    {
        returnValue = F("Zur Kaisereiche");
        break;
    }
    case 353524:
    {
        returnValue = F("Zur Kaisertanne");
        break;
    }
    case 353525:
    {
        returnValue = F("Zur Kaiserwiese");
        break;
    }
    case 353526:
    {
        returnValue = F("Zur Kakushöhle");
        break;
    }
    case 353527:
    {
        returnValue = F("Zur Kalbachquelle");
        break;
    }
    case 353528:
    {
        returnValue = F("Zur Kalkbahn");
        break;
    }
    case 353529:
    {
        returnValue = F("Zur Kalkhecke");
        break;
    }
    case 353530:
    {
        returnValue = F("Zur Kalkkaute");
        break;
    }
    case 353531:
    {
        returnValue = F("Zur Kalkreise");
        break;
    }
    case 353532:
    {
        returnValue = F("Zur Kalkrösecke");
        break;
    }
    case 353533:
    {
        returnValue = F("Zur Kalluzen");
        break;
    }
    case 353534:
    {
        returnValue = F("Zur Kalten Kirche");
        break;
    }
    case 353535:
    {
        returnValue = F("Zur Kalten Staude");
        break;
    }
    case 353536:
    {
        returnValue = F("Zur Kaltenbach");
        break;
    }
    case 353537:
    {
        returnValue = F("Zur Kammersenne");
        break;
    }
    case 353538:
    {
        returnValue = F("Zur Kammgarnspinnerei");
        break;
    }
    case 353539:
    {
        returnValue = F("Zur Kampelbrücke");
        break;
    }
    case 353540:
    {
        returnValue = F("Zur Kamper Wiese");
        break;
    }
    case 353541:
    {
        returnValue = F("Zur Kanalbrücke");
        break;
    }
    case 353542:
    {
        returnValue = F("Zur Kanalinsel");
        break;
    }
    case 353543:
    {
        returnValue = F("Zur Kandelstr.");
        break;
    }
    case 353544:
    {
        returnValue = F("Zur Kanzel");
        break;
    }
    case 353545:
    {
        returnValue = F("Zur Kaoline");
        break;
    }
    case 353546:
    {
        returnValue = F("Zur Kapelle");
        break;
    }
    case 353547:
    {
        returnValue = F("Zur Kapellerheck");
        break;
    }
    case 353548:
    {
        returnValue = F("Zur Kaplanei");
        break;
    }
    case 353549:
    {
        returnValue = F("Zur Kappe");
        break;
    }
    case 353550:
    {
        returnValue = F("Zur Kappel");
        break;
    }
    case 353551:
    {
        returnValue = F("Zur Kapsmühle");
        break;
    }
    case 353552:
    {
        returnValue = F("Zur Karlshöhe");
        break;
    }
    case 353553:
    {
        returnValue = F("Zur Karrienecke");
        break;
    }
    case 353554:
    {
        returnValue = F("Zur Kartause");
        break;
    }
    case 353555:
    {
        returnValue = F("Zur Karthane");
        break;
    }
    case 353556:
    {
        returnValue = F("Zur Karthause");
        break;
    }
    case 353557:
    {
        returnValue = F("Zur Kaserne");
        break;
    }
    case 353558:
    {
        returnValue = F("Zur Kastanie");
        break;
    }
    case 353559:
    {
        returnValue = F("Zur Kastanienallee");
        break;
    }
    case 353560:
    {
        returnValue = F("Zur Kastanieninsel");
        break;
    }
    case 353561:
    {
        returnValue = F("Zur Katharine");
        break;
    }
    case 353562:
    {
        returnValue = F("Zur Katharinenwiese");
        break;
    }
    case 353563:
    {
        returnValue = F("Zur Kattbek");
        break;
    }
    case 353564:
    {
        returnValue = F("Zur Katzbach");
        break;
    }
    case 353565:
    {
        returnValue = F("Zur Katzenmühle");
        break;
    }
    case 353566:
    {
        returnValue = F("Zur Kaufhalle");
        break;
    }
    case 353567:
    {
        returnValue = F("Zur Kaulay");
        break;
    }
    case 353568:
    {
        returnValue = F("Zur Kaute");
        break;
    }
    case 353569:
    {
        returnValue = F("Zur Kavelstorfer Kirche");
        break;
    }
    case 353570:
    {
        returnValue = F("Zur Kegelbahn");
        break;
    }
    case 353571:
    {
        returnValue = F("Zur Keglitz");
        break;
    }
    case 353572:
    {
        returnValue = F("Zur Kehligsquelle");
        break;
    }
    case 353573:
    {
        returnValue = F("Zur Kehr");
        break;
    }
    case 353574:
    {
        returnValue = F("Zur Kehrmühle");
        break;
    }
    case 353575:
    {
        returnValue = F("Zur Kellerecke");
        break;
    }
    case 353576:
    {
        returnValue = F("Zur Kellerheide");
        break;
    }
    case 353577:
    {
        returnValue = F("Zur Kellerkuhle");
        break;
    }
    case 353578:
    {
        returnValue = F("Zur Kellerwiese");
        break;
    }
    case 353579:
    {
        returnValue = F("Zur Keltenrast");
        break;
    }
    case 353580:
    {
        returnValue = F("Zur Keltenschanze");
        break;
    }
    case 353581:
    {
        returnValue = F("Zur Keltenschmiede");
        break;
    }
    case 353582:
    {
        returnValue = F("Zur Keltensiedlung");
        break;
    }
    case 353583:
    {
        returnValue = F("Zur Kelter");
        break;
    }
    case 353584:
    {
        returnValue = F("Zur Kelterburg");
        break;
    }
    case 353585:
    {
        returnValue = F("Zur Kelterei");
        break;
    }
    case 353586:
    {
        returnValue = F("Zur Kemnade");
        break;
    }
    case 353587:
    {
        returnValue = F("Zur Kemnitz");
        break;
    }
    case 353588:
    {
        returnValue = F("Zur Kempe");
        break;
    }
    case 353589:
    {
        returnValue = F("Zur Kerne");
        break;
    }
    case 353590:
    {
        returnValue = F("Zur Kesselkaul");
        break;
    }
    case 353591:
    {
        returnValue = F("Zur Kesselschmiede");
        break;
    }
    case 353592:
    {
        returnValue = F("Zur Ketschendorfer Feldmark");
        break;
    }
    case 353593:
    {
        returnValue = F("Zur Kettenheimer Kumme");
        break;
    }
    case 353594:
    {
        returnValue = F("Zur Kettenschmiede");
        break;
    }
    case 353595:
    {
        returnValue = F("Zur Keuchinger Flur");
        break;
    }
    case 353596:
    {
        returnValue = F("Zur Kiebitzheide");
        break;
    }
    case 353597:
    {
        returnValue = F("Zur Kiefer");
        break;
    }
    case 353598:
    {
        returnValue = F("Zur Kiefernhöhe");
        break;
    }
    case 353599:
    {
        returnValue = F("Zur Kiesgrube");
        break;
    }
    case 353600:
    {
        returnValue = F("Zur Kieskuhle");
        break;
    }
    case 353601:
    {
        returnValue = F("Zur Killmecke");
        break;
    }
    case 353602:
    {
        returnValue = F("Zur Kindelburg");
        break;
    }
    case 353603:
    {
        returnValue = F("Zur Kindertagesstätte");
        break;
    }
    case 353604:
    {
        returnValue = F("Zur Kinzigau");
        break;
    }
    case 353605:
    {
        returnValue = F("Zur Kipp");
        break;
    }
    case 353606:
    {
        returnValue = F("Zur Kirchbreite");
        break;
    }
    case 353607:
    {
        returnValue = F("Zur Kirche");
        break;
    }
    case 353608:
    {
        returnValue = F("Zur Kirchenburg");
        break;
    }
    case 353609:
    {
        returnValue = F("Zur Kirchenmühle");
        break;
    }
    case 353610:
    {
        returnValue = F("Zur Kirchgasse");
        break;
    }
    case 353611:
    {
        returnValue = F("Zur Kirchstaße");
        break;
    }
    case 353612:
    {
        returnValue = F("Zur Kirchstr.");
        break;
    }
    case 353613:
    {
        returnValue = F("Zur Kirchtreppe");
        break;
    }
    case 353614:
    {
        returnValue = F("Zur Kirchwiese");
        break;
    }
    case 353615:
    {
        returnValue = F("Zur Kirschblüte");
        break;
    }
    case 353616:
    {
        returnValue = F("Zur Kirschenhell");
        break;
    }
    case 353617:
    {
        returnValue = F("Zur Kirschenhohle");
        break;
    }
    case 353618:
    {
        returnValue = F("Zur Kirschgasse");
        break;
    }
    case 353619:
    {
        returnValue = F("Zur Klanhorst");
        break;
    }
    case 353620:
    {
        returnValue = F("Zur Klappbrücke");
        break;
    }
    case 353621:
    {
        returnValue = F("Zur Klaster");
        break;
    }
    case 353622:
    {
        returnValue = F("Zur Klauert");
        break;
    }
    case 353623:
    {
        returnValue = F("Zur Klaus");
        break;
    }
    case 353624:
    {
        returnValue = F("Zur Klause");
        break;
    }
    case 353625:
    {
        returnValue = F("Zur Klauskirche");
        break;
    }
    case 353626:
    {
        returnValue = F("Zur Klausur");
        break;
    }
    case 353627:
    {
        returnValue = F("Zur Kleeburg");
        break;
    }
    case 353628:
    {
        returnValue = F("Zur Kleehecke");
        break;
    }
    case 353629:
    {
        returnValue = F("Zur Kleigrube");
        break;
    }
    case 353630:
    {
        returnValue = F("Zur Kleinbahn");
        break;
    }
    case 353631:
    {
        returnValue = F("Zur Kleinen Bastei");
        break;
    }
    case 353632:
    {
        returnValue = F("Zur Kleinen Bleiche");
        break;
    }
    case 353633:
    {
        returnValue = F("Zur Kleinen Höhe");
        break;
    }
    case 353634:
    {
        returnValue = F("Zur Kleinen Triebisch");
        break;
    }
    case 353635:
    {
        returnValue = F("Zur Kleinen Örtze");
        break;
    }
    case 353636:
    {
        returnValue = F("Zur Klenkerei");
        break;
    }
    case 353637:
    {
        returnValue = F("Zur Kliebe");
        break;
    }
    case 353638:
    {
        returnValue = F("Zur Kliewe");
        break;
    }
    case 353639:
    {
        returnValue = F("Zur Klinge");
        break;
    }
    case 353640:
    {
        returnValue = F("Zur Klingelsbach");
        break;
    }
    case 353641:
    {
        returnValue = F("Zur Klingelsmühle");
        break;
    }
    case 353642:
    {
        returnValue = F("Zur Klingenbergsiedlung");
        break;
    }
    case 353643:
    {
        returnValue = F("Zur Klinke");
        break;
    }
    case 353644:
    {
        returnValue = F("Zur Klinkenmühle");
        break;
    }
    case 353645:
    {
        returnValue = F("Zur Klinkschlade");
        break;
    }
    case 353646:
    {
        returnValue = F("Zur Klipp");
        break;
    }
    case 353647:
    {
        returnValue = F("Zur Klippe");
        break;
    }
    case 353648:
    {
        returnValue = F("Zur Klippmühle");
        break;
    }
    case 353649:
    {
        returnValue = F("Zur Kloer");
        break;
    }
    case 353650:
    {
        returnValue = F("Zur Kloppenburg");
        break;
    }
    case 353651:
    {
        returnValue = F("Zur Klosterforst");
        break;
    }
    case 353652:
    {
        returnValue = F("Zur Klostermühle");
        break;
    }
    case 353653:
    {
        returnValue = F("Zur Klosterquelle");
        break;
    }
    case 353654:
    {
        returnValue = F("Zur Klosterschenke");
        break;
    }
    case 353655:
    {
        returnValue = F("Zur Kläranlage");
        break;
    }
    case 353656:
    {
        returnValue = F("Zur Knappmühle");
        break;
    }
    case 353657:
    {
        returnValue = F("Zur Knappschaft");
        break;
    }
    case 353658:
    {
        returnValue = F("Zur Knautheiche");
        break;
    }
    case 353659:
    {
        returnValue = F("Zur Knebelhalde");
        break;
    }
    case 353660:
    {
        returnValue = F("Zur Knochenmühle");
        break;
    }
    case 353661:
    {
        returnValue = F("Zur Knolke");
        break;
    }
    case 353662:
    {
        returnValue = F("Zur Knopsmühle");
        break;
    }
    case 353663:
    {
        returnValue = F("Zur Knüllhöhe");
        break;
    }
    case 353664:
    {
        returnValue = F("Zur Kogge");
        break;
    }
    case 353665:
    {
        returnValue = F("Zur Kohleiche");
        break;
    }
    case 353666:
    {
        returnValue = F("Zur Kohlengrube");
        break;
    }
    case 353667:
    {
        returnValue = F("Zur Kohlenstr.");
        break;
    }
    case 353668:
    {
        returnValue = F("Zur Kohlerbreite");
        break;
    }
    case 353669:
    {
        returnValue = F("Zur Kohlgrub");
        break;
    }
    case 353670:
    {
        returnValue = F("Zur Kohlstatt");
        break;
    }
    case 353671:
    {
        returnValue = F("Zur Kohlstätte");
        break;
    }
    case 353672:
    {
        returnValue = F("Zur Kohlung");
        break;
    }
    case 353673:
    {
        returnValue = F("Zur Kohlwiese");
        break;
    }
    case 353674:
    {
        returnValue = F("Zur Kokemühle");
        break;
    }
    case 353675:
    {
        returnValue = F("Zur Kokenheide");
        break;
    }
    case 353676:
    {
        returnValue = F("Zur Kokerei");
        break;
    }
    case 353677:
    {
        returnValue = F("Zur Kolkbrügge");
        break;
    }
    case 353678:
    {
        returnValue = F("Zur Kollesleuker Schweiz");
        break;
    }
    case 353679:
    {
        returnValue = F("Zur Kolmeshöh");
        break;
    }
    case 353680:
    {
        returnValue = F("Zur Kolonie");
        break;
    }
    case 353681:
    {
        returnValue = F("Zur Kolpingklus");
        break;
    }
    case 353682:
    {
        returnValue = F("Zur Kondeler Mühle");
        break;
    }
    case 353683:
    {
        returnValue = F("Zur Konradswüste");
        break;
    }
    case 353684:
    {
        returnValue = F("Zur Kophelle");
        break;
    }
    case 353685:
    {
        returnValue = F("Zur Kopp");
        break;
    }
    case 353686:
    {
        returnValue = F("Zur Koppel");
        break;
    }
    case 353687:
    {
        returnValue = F("Zur Koppenburgs Mühle");
        break;
    }
    case 353688:
    {
        returnValue = F("Zur Koppenheide");
        break;
    }
    case 353689:
    {
        returnValue = F("Zur Kordel");
        break;
    }
    case 353690:
    {
        returnValue = F("Zur Kornbitze");
        break;
    }
    case 353691:
    {
        returnValue = F("Zur Korngrube");
        break;
    }
    case 353692:
    {
        returnValue = F("Zur Kornmühle");
        break;
    }
    case 353693:
    {
        returnValue = F("Zur Korrbäke");
        break;
    }
    case 353694:
    {
        returnValue = F("Zur Kotzschbarhöhe");
        break;
    }
    case 353695:
    {
        returnValue = F("Zur Kracht");
        break;
    }
    case 353696:
    {
        returnValue = F("Zur Krahna");
        break;
    }
    case 353697:
    {
        returnValue = F("Zur Krakau");
        break;
    }
    case 353698:
    {
        returnValue = F("Zur Krakenburg");
        break;
    }
    case 353699:
    {
        returnValue = F("Zur Krambs");
        break;
    }
    case 353700:
    {
        returnValue = F("Zur Kranichau");
        break;
    }
    case 353701:
    {
        returnValue = F("Zur Kranichweide");
        break;
    }
    case 353702:
    {
        returnValue = F("Zur Kratzau");
        break;
    }
    case 353703:
    {
        returnValue = F("Zur Krautmauer");
        break;
    }
    case 353704:
    {
        returnValue = F("Zur Kreidemühle");
        break;
    }
    case 353705:
    {
        returnValue = F("Zur Kreipe");
        break;
    }
    case 353706:
    {
        returnValue = F("Zur Kreissandgrube");
        break;
    }
    case 353707:
    {
        returnValue = F("Zur Krepp");
        break;
    }
    case 353708:
    {
        returnValue = F("Zur Kreppe");
        break;
    }
    case 353709:
    {
        returnValue = F("Zur Kreptitzer Heide");
        break;
    }
    case 353710:
    {
        returnValue = F("Zur Kreuzbergkapelle");
        break;
    }
    case 353711:
    {
        returnValue = F("Zur Kreuzburg");
        break;
    }
    case 353712:
    {
        returnValue = F("Zur Kreuzdelle");
        break;
    }
    case 353713:
    {
        returnValue = F("Zur Kreuzeiche");
        break;
    }
    case 353714:
    {
        returnValue = F("Zur Kreuzhohle");
        break;
    }
    case 353715:
    {
        returnValue = F("Zur Kreuzhorst");
        break;
    }
    case 353716:
    {
        returnValue = F("Zur Kreuzkapelle");
        break;
    }
    case 353717:
    {
        returnValue = F("Zur Kreuzkirche");
        break;
    }
    case 353718:
    {
        returnValue = F("Zur Kreuzleshöhe");
        break;
    }
    case 353719:
    {
        returnValue = F("Zur Kreuzschlade");
        break;
    }
    case 353720:
    {
        returnValue = F("Zur Kreuzstr.");
        break;
    }
    case 353721:
    {
        returnValue = F("Zur Kreuzung");
        break;
    }
    case 353722:
    {
        returnValue = F("Zur Kreuzwiese");
        break;
    }
    case 353723:
    {
        returnValue = F("Zur Kreßmatt");
        break;
    }
    case 353724:
    {
        returnValue = F("Zur Kriegsgräberstätte");
        break;
    }
    case 353725:
    {
        returnValue = F("Zur Krim");
        break;
    }
    case 353726:
    {
        returnValue = F("Zur Kringsmühle");
        break;
    }
    case 353727:
    {
        returnValue = F("Zur Krone");
        break;
    }
    case 353728:
    {
        returnValue = F("Zur Kroneneiche");
        break;
    }
    case 353729:
    {
        returnValue = F("Zur Kronsau");
        break;
    }
    case 353730:
    {
        returnValue = F("Zur Krugbrücke");
        break;
    }
    case 353731:
    {
        returnValue = F("Zur Krulsmühle");
        break;
    }
    case 353732:
    {
        returnValue = F("Zur Krumke");
        break;
    }
    case 353733:
    {
        returnValue = F("Zur Krummel");
        break;
    }
    case 353734:
    {
        returnValue = F("Zur Krummen Ulme");
        break;
    }
    case 353735:
    {
        returnValue = F("Zur Krummen Wand");
        break;
    }
    case 353736:
    {
        returnValue = F("Zur Kränke");
        break;
    }
    case 353737:
    {
        returnValue = F("Zur Kräuterwiese");
        break;
    }
    case 353738:
    {
        returnValue = F("Zur Krücke");
        break;
    }
    case 353739:
    {
        returnValue = F("Zur Krüh");
        break;
    }
    case 353740:
    {
        returnValue = F("Zur Krümme");
        break;
    }
    case 353741:
    {
        returnValue = F("Zur Krüne");
        break;
    }
    case 353742:
    {
        returnValue = F("Zur Kuckuckshecke");
        break;
    }
    case 353743:
    {
        returnValue = F("Zur Kuckucksmühle");
        break;
    }
    case 353744:
    {
        returnValue = F("Zur Kuckumer Festwiese");
        break;
    }
    case 353745:
    {
        returnValue = F("Zur Kuckumer Mühle");
        break;
    }
    case 353746:
    {
        returnValue = F("Zur Kufe");
        break;
    }
    case 353747:
    {
        returnValue = F("Zur Kuhbrücke");
        break;
    }
    case 353748:
    {
        returnValue = F("Zur Kuhdrift");
        break;
    }
    case 353749:
    {
        returnValue = F("Zur Kuhle");
        break;
    }
    case 353750:
    {
        returnValue = F("Zur Kuhmannsheide");
        break;
    }
    case 353751:
    {
        returnValue = F("Zur Kuhtrade");
        break;
    }
    case 353752:
    {
        returnValue = F("Zur Kullmannsgrube");
        break;
    }
    case 353753:
    {
        returnValue = F("Zur Kulm");
        break;
    }
    case 353754:
    {
        returnValue = F("Zur Kumeckerhütte");
        break;
    }
    case 353755:
    {
        returnValue = F("Zur Kumm");
        break;
    }
    case 353756:
    {
        returnValue = F("Zur Kunn");
        break;
    }
    case 353757:
    {
        returnValue = F("Zur Kunst");
        break;
    }
    case 353758:
    {
        returnValue = F("Zur Kunstmühle");
        break;
    }
    case 353759:
    {
        returnValue = F("Zur Kunzenbach");
        break;
    }
    case 353760:
    {
        returnValue = F("Zur Kupfergrube");
        break;
    }
    case 353761:
    {
        returnValue = F("Zur Kupfermühle");
        break;
    }
    case 353762:
    {
        returnValue = F("Zur Kupferzeche");
        break;
    }
    case 353763:
    {
        returnValue = F("Zur Kuppe");
        break;
    }
    case 353764:
    {
        returnValue = F("Zur Kuppelzen");
        break;
    }
    case 353765:
    {
        returnValue = F("Zur Kurklinik");
        break;
    }
    case 353766:
    {
        returnValue = F("Zur Kurve");
        break;
    }
    case 353767:
    {
        returnValue = F("Zur KÜS");
        break;
    }
    case 353768:
    {
        returnValue = F("Zur Kälberweide");
        break;
    }
    case 353769:
    {
        returnValue = F("Zur Kältsche");
        break;
    }
    case 353770:
    {
        returnValue = F("Zur Kämpe");
        break;
    }
    case 353771:
    {
        returnValue = F("Zur Köhlerhütte");
        break;
    }
    case 353772:
    {
        returnValue = F("Zur Köhlermühle");
        break;
    }
    case 353773:
    {
        returnValue = F("Zur Kölke");
        break;
    }
    case 353774:
    {
        returnValue = F("Zur Köllenbruchmühle");
        break;
    }
    case 353775:
    {
        returnValue = F("Zur Kölner Gasse");
        break;
    }
    case 353776:
    {
        returnValue = F("Zur Königlichen Hofbrauerei");
        break;
    }
    case 353777:
    {
        returnValue = F("Zur Königsbitze");
        break;
    }
    case 353778:
    {
        returnValue = F("Zur Königseiche");
        break;
    }
    case 353779:
    {
        returnValue = F("Zur Königslaube");
        break;
    }
    case 353780:
    {
        returnValue = F("Zur Königslay");
        break;
    }
    case 353781:
    {
        returnValue = F("Zur Königsmühle");
        break;
    }
    case 353782:
    {
        returnValue = F("Zur Königsscheune");
        break;
    }
    case 353783:
    {
        returnValue = F("Zur Königstanne");
        break;
    }
    case 353784:
    {
        returnValue = F("Zur Kösterbeck");
        break;
    }
    case 353785:
    {
        returnValue = F("Zur Kösterwiese");
        break;
    }
    case 353786:
    {
        returnValue = F("Zur Kötzenmühle");
        break;
    }
    case 353787:
    {
        returnValue = F("Zur Küchenhelle");
        break;
    }
    case 353788:
    {
        returnValue = F("Zur Küchenschelle");
        break;
    }
    case 353789:
    {
        returnValue = F("Zur Kühle");
        break;
    }
    case 353790:
    {
        returnValue = F("Zur Kühschanze");
        break;
    }
    case 353791:
    {
        returnValue = F("Zur Künstlerzeche");
        break;
    }
    case 353792:
    {
        returnValue = F("Zur Kütte");
        break;
    }
    case 353793:
    {
        returnValue = F("Zur Laach");
        break;
    }
    case 353794:
    {
        returnValue = F("Zur Laache");
        break;
    }
    case 353795:
    {
        returnValue = F("Zur Laage");
        break;
    }
    case 353796:
    {
        returnValue = F("Zur Laake");
        break;
    }
    case 353797:
    {
        returnValue = F("Zur Laberau");
        break;
    }
    case 353798:
    {
        returnValue = F("Zur Lach");
        break;
    }
    case 353799:
    {
        returnValue = F("Zur Ladengasse");
        break;
    }
    case 353800:
    {
        returnValue = F("Zur Lage");
        break;
    }
    case 353801:
    {
        returnValue = F("Zur Lahmekaut");
        break;
    }
    case 353802:
    {
        returnValue = F("Zur Lahn");
        break;
    }
    case 353803:
    {
        returnValue = F("Zur Lahnaue");
        break;
    }
    case 353804:
    {
        returnValue = F("Zur Lake");
        break;
    }
    case 353805:
    {
        returnValue = F("Zur Lambertstr.");
        break;
    }
    case 353806:
    {
        returnValue = F("Zur Lammerswiese");
        break;
    }
    case 353807:
    {
        returnValue = F("Zur Lammert");
        break;
    }
    case 353808:
    {
        returnValue = F("Zur Lamper");
        break;
    }
    case 353809:
    {
        returnValue = F("Zur Lampfert");
        break;
    }
    case 353810:
    {
        returnValue = F("Zur Landermühle");
        break;
    }
    case 353811:
    {
        returnValue = F("Zur Landesbahn");
        break;
    }
    case 353812:
    {
        returnValue = F("Zur Landesgartenschau");
        break;
    }
    case 353813:
    {
        returnValue = F("Zur Landesgrenze");
        break;
    }
    case 353814:
    {
        returnValue = F("Zur Landgrafenheck");
        break;
    }
    case 353815:
    {
        returnValue = F("Zur Landhecke");
        break;
    }
    case 353816:
    {
        returnValue = F("Zur Landhege");
        break;
    }
    case 353817:
    {
        returnValue = F("Zur Landhöhe");
        break;
    }
    case 353818:
    {
        returnValue = F("Zur Landriehe");
        break;
    }
    case 353819:
    {
        returnValue = F("Zur Landsburg");
        break;
    }
    case 353820:
    {
        returnValue = F("Zur Landwehr");
        break;
    }
    case 353821:
    {
        returnValue = F("Zur Landwiese");
        break;
    }
    case 353822:
    {
        returnValue = F("Zur Langeck");
        break;
    }
    case 353823:
    {
        returnValue = F("Zur Langelänge");
        break;
    }
    case 353824:
    {
        returnValue = F("Zur Langen Brücke");
        break;
    }
    case 353825:
    {
        returnValue = F("Zur Langen Fuhr");
        break;
    }
    case 353826:
    {
        returnValue = F("Zur Langen Grund");
        break;
    }
    case 353827:
    {
        returnValue = F("Zur Langen Hecke");
        break;
    }
    case 353828:
    {
        returnValue = F("Zur Langen Leite");
        break;
    }
    case 353829:
    {
        returnValue = F("Zur Langen Meile");
        break;
    }
    case 353830:
    {
        returnValue = F("Zur Langen Sohl");
        break;
    }
    case 353831:
    {
        returnValue = F("Zur Langenberger Höhe");
        break;
    }
    case 353832:
    {
        returnValue = F("Zur Langheck");
        break;
    }
    case 353833:
    {
        returnValue = F("Zur Langmauer");
        break;
    }
    case 353834:
    {
        returnValue = F("Zur Langwies");
        break;
    }
    case 353835:
    {
        returnValue = F("Zur Langwiese");
        break;
    }
    case 353836:
    {
        returnValue = F("Zur Lanz");
        break;
    }
    case 353837:
    {
        returnValue = F("Zur Lasterbach");
        break;
    }
    case 353838:
    {
        returnValue = F("Zur Laubach");
        break;
    }
    case 353839:
    {
        returnValue = F("Zur Laube");
        break;
    }
    case 353840:
    {
        returnValue = F("Zur Laubenheimer Höhe");
        break;
    }
    case 353841:
    {
        returnValue = F("Zur Laubwiese");
        break;
    }
    case 353842:
    {
        returnValue = F("Zur Laucha");
        break;
    }
    case 353843:
    {
        returnValue = F("Zur Laue");
        break;
    }
    case 353844:
    {
        returnValue = F("Zur Lauge");
        break;
    }
    case 353845:
    {
        returnValue = F("Zur Laura");
        break;
    }
    case 353846:
    {
        returnValue = F("Zur Lauterhecke");
        break;
    }
    case 353847:
    {
        returnValue = F("Zur Lay");
        break;
    }
    case 353848:
    {
        returnValue = F("Zur Laykaul");
        break;
    }
    case 353849:
    {
        returnValue = F("Zur Lee");
        break;
    }
    case 353850:
    {
        returnValue = F("Zur Leegde");
        break;
    }
    case 353851:
    {
        returnValue = F("Zur Leek");
        break;
    }
    case 353852:
    {
        returnValue = F("Zur Leesenbrücker Schleuse");
        break;
    }
    case 353853:
    {
        returnValue = F("Zur Legge");
        break;
    }
    case 353854:
    {
        returnValue = F("Zur Lehde");
        break;
    }
    case 353855:
    {
        returnValue = F("Zur Lehmgrube");
        break;
    }
    case 353856:
    {
        returnValue = F("Zur Lehmkaul");
        break;
    }
    case 353857:
    {
        returnValue = F("Zur Lehmkaut");
        break;
    }
    case 353858:
    {
        returnValue = F("Zur Lehmkaute");
        break;
    }
    case 353859:
    {
        returnValue = F("Zur Lehmkuhle");
        break;
    }
    case 353860:
    {
        returnValue = F("Zur Lehnern");
        break;
    }
    case 353861:
    {
        returnValue = F("Zur Lehnmarke");
        break;
    }
    case 353862:
    {
        returnValue = F("Zur Lei");
        break;
    }
    case 353863:
    {
        returnValue = F("Zur Leimengrube");
        break;
    }
    case 353864:
    {
        returnValue = F("Zur Leimkaul");
        break;
    }
    case 353865:
    {
        returnValue = F("Zur Leinemühle");
        break;
    }
    case 353866:
    {
        returnValue = F("Zur Leinwand");
        break;
    }
    case 353867:
    {
        returnValue = F("Zur Leite");
        break;
    }
    case 353868:
    {
        returnValue = F("Zur Leiten");
        break;
    }
    case 353869:
    {
        returnValue = F("Zur Leithe");
        break;
    }
    case 353870:
    {
        returnValue = F("Zur Leithen");
        break;
    }
    case 353871:
    {
        returnValue = F("Zur Leitn");
        break;
    }
    case 353872:
    {
        returnValue = F("Zur Lemse");
        break;
    }
    case 353873:
    {
        returnValue = F("Zur Lengder Burg");
        break;
    }
    case 353874:
    {
        returnValue = F("Zur Lenneplätze");
        break;
    }
    case 353875:
    {
        returnValue = F("Zur Lennhelle");
        break;
    }
    case 353876:
    {
        returnValue = F("Zur Lenzenmarter");
        break;
    }
    case 353877:
    {
        returnValue = F("Zur Lenzer Höh");
        break;
    }
    case 353878:
    {
        returnValue = F("Zur Leopoldfeste");
        break;
    }
    case 353879:
    {
        returnValue = F("Zur Leopoldshütte");
        break;
    }
    case 353880:
    {
        returnValue = F("Zur Lerchenhaube");
        break;
    }
    case 353881:
    {
        returnValue = F("Zur Lerchenheide");
        break;
    }
    case 353882:
    {
        returnValue = F("Zur Lerchenhöhe");
        break;
    }
    case 353883:
    {
        returnValue = F("Zur Lermecke");
        break;
    }
    case 353884:
    {
        returnValue = F("Zur Lessingschule");
        break;
    }
    case 353885:
    {
        returnValue = F("Zur Lewitz");
        break;
    }
    case 353886:
    {
        returnValue = F("Zur Ley");
        break;
    }
    case 353887:
    {
        returnValue = F("Zur Leye");
        break;
    }
    case 353888:
    {
        returnValue = F("Zur Liasgrube");
        break;
    }
    case 353889:
    {
        returnValue = F("Zur Licht");
        break;
    }
    case 353890:
    {
        returnValue = F("Zur Lichteneck");
        break;
    }
    case 353891:
    {
        returnValue = F("Zur Lichtenhardt");
        break;
    }
    case 353892:
    {
        returnValue = F("Zur Lichtung");
        break;
    }
    case 353893:
    {
        returnValue = F("Zur Liebeslay");
        break;
    }
    case 353894:
    {
        returnValue = F("Zur Liebesschlucht");
        break;
    }
    case 353895:
    {
        returnValue = F("Zur Liede");
        break;
    }
    case 353896:
    {
        returnValue = F("Zur Liemecke");
        break;
    }
    case 353897:
    {
        returnValue = F("Zur Lieserhöhe");
        break;
    }
    case 353898:
    {
        returnValue = F("Zur Liete");
        break;
    }
    case 353899:
    {
        returnValue = F("Zur Lieth");
        break;
    }
    case 353900:
    {
        returnValue = F("Zur Liethe");
        break;
    }
    case 353901:
    {
        returnValue = F("Zur Limburg");
        break;
    }
    case 353902:
    {
        returnValue = F("Zur Linde");
        break;
    }
    case 353903:
    {
        returnValue = F("Zur Linden");
        break;
    }
    case 353904:
    {
        returnValue = F("Zur Lindenallee");
        break;
    }
    case 353905:
    {
        returnValue = F("Zur Lindenburg");
        break;
    }
    case 353906:
    {
        returnValue = F("Zur Lindenhart");
        break;
    }
    case 353907:
    {
        returnValue = F("Zur Lindenhöhe");
        break;
    }
    case 353908:
    {
        returnValue = F("Zur Lindenmühle");
        break;
    }
    case 353909:
    {
        returnValue = F("Zur Lindenstr.");
        break;
    }
    case 353910:
    {
        returnValue = F("Zur Lindenwiese");
        break;
    }
    case 353911:
    {
        returnValue = F("Zur Lindung");
        break;
    }
    case 353912:
    {
        returnValue = F("Zur Lindwiese");
        break;
    }
    case 353913:
    {
        returnValue = F("Zur Linge");
        break;
    }
    case 353914:
    {
        returnValue = F("Zur Linienstr.");
        break;
    }
    case 353915:
    {
        returnValue = F("Zur Linnbek");
        break;
    }
    case 353916:
    {
        returnValue = F("Zur Linner Bauerschaft");
        break;
    }
    case 353917:
    {
        returnValue = F("Zur Linse");
        break;
    }
    case 353918:
    {
        returnValue = F("Zur Linspher");
        break;
    }
    case 353919:
    {
        returnValue = F("Zur Linxbach");
        break;
    }
    case 353920:
    {
        returnValue = F("Zur Lippe");
        break;
    }
    case 353921:
    {
        returnValue = F("Zur List");
        break;
    }
    case 353922:
    {
        returnValue = F("Zur Litzend");
        break;
    }
    case 353923:
    {
        returnValue = F("Zur Lobbecke");
        break;
    }
    case 353924:
    {
        returnValue = F("Zur Lobige");
        break;
    }
    case 353925:
    {
        returnValue = F("Zur Lochmühle");
        break;
    }
    case 353926:
    {
        returnValue = F("Zur Lochwiese");
        break;
    }
    case 353927:
    {
        returnValue = F("Zur Loev");
        break;
    }
    case 353928:
    {
        returnValue = F("Zur Loge");
        break;
    }
    case 353929:
    {
        returnValue = F("Zur Loh");
        break;
    }
    case 353930:
    {
        returnValue = F("Zur Lohe");
        break;
    }
    case 353931:
    {
        returnValue = F("Zur Lohmühle");
        break;
    }
    case 353932:
    {
        returnValue = F("Zur Lohne");
        break;
    }
    case 353933:
    {
        returnValue = F("Zur Lohrer Böll");
        break;
    }
    case 353934:
    {
        returnValue = F("Zur Loose");
        break;
    }
    case 353935:
    {
        returnValue = F("Zur Loreley");
        break;
    }
    case 353936:
    {
        returnValue = F("Zur Lotsenbrüderschaft");
        break;
    }
    case 353937:
    {
        returnValue = F("Zur Lotsenstelle 68");
        break;
    }
    case 353938:
    {
        returnValue = F("Zur Lottenmühle");
        break;
    }
    case 353939:
    {
        returnValue = F("Zur Lotusblüte");
        break;
    }
    case 353940:
    {
        returnValue = F("Zur Louis-Mühle");
        break;
    }
    case 353941:
    {
        returnValue = F("Zur Lourdesgrotte");
        break;
    }
    case 353942:
    {
        returnValue = F("Zur Lucie");
        break;
    }
    case 353943:
    {
        returnValue = F("Zur Ludenbach");
        break;
    }
    case 353944:
    {
        returnValue = F("Zur Ludwigsau");
        break;
    }
    case 353945:
    {
        returnValue = F("Zur Ludwigshöhe");
        break;
    }
    case 353946:
    {
        returnValue = F("Zur Ludwigshütte");
        break;
    }
    case 353947:
    {
        returnValue = F("Zur Luftschiffhalle");
        break;
    }
    case 353948:
    {
        returnValue = F("Zur Luhmühle");
        break;
    }
    case 353949:
    {
        returnValue = F("Zur Luhne");
        break;
    }
    case 353950:
    {
        returnValue = F("Zur Luit");
        break;
    }
    case 353951:
    {
        returnValue = F("Zur Luitpoldhöhe");
        break;
    }
    case 353952:
    {
        returnValue = F("Zur Lummwiese");
        break;
    }
    case 353953:
    {
        returnValue = F("Zur Luppmühle");
        break;
    }
    case 353954:
    {
        returnValue = F("Zur Lust");
        break;
    }
    case 353955:
    {
        returnValue = F("Zur Lustgartenbreite");
        break;
    }
    case 353956:
    {
        returnValue = F("Zur Lustheide");
        break;
    }
    case 353957:
    {
        returnValue = F("Zur Luther Linde");
        break;
    }
    case 353958:
    {
        returnValue = F("Zur Lutherbuche");
        break;
    }
    case 353959:
    {
        returnValue = F("Zur Luthereiche");
        break;
    }
    case 353960:
    {
        returnValue = F("Zur Lutherlinde");
        break;
    }
    case 353961:
    {
        returnValue = F("Zur Lutternschen Egge");
        break;
    }
    case 353962:
    {
        returnValue = F("Zur Lämmerlaide");
        break;
    }
    case 353963:
    {
        returnValue = F("Zur Lände");
        break;
    }
    case 353964:
    {
        returnValue = F("Zur Lärche");
        break;
    }
    case 353965:
    {
        returnValue = F("Zur Lärchenhöhe");
        break;
    }
    case 353966:
    {
        returnValue = F("Zur Löchte");
        break;
    }
    case 353967:
    {
        returnValue = F("Zur Löckerheide");
        break;
    }
    case 353968:
    {
        returnValue = F("Zur Löhnhorst");
        break;
    }
    case 353969:
    {
        returnValue = F("Zur Löp");
        break;
    }
    case 353970:
    {
        returnValue = F("Zur Löv");
        break;
    }
    case 353971:
    {
        returnValue = F("Zur Löwenhöhe");
        break;
    }
    case 353972:
    {
        returnValue = F("Zur Löwenmühle");
        break;
    }
    case 353973:
    {
        returnValue = F("Zur Lüchte");
        break;
    }
    case 353974:
    {
        returnValue = F("Zur Lück");
        break;
    }
    case 353975:
    {
        returnValue = F("Zur Lücke");
        break;
    }
    case 353976:
    {
        returnValue = F("Zur Lükeschen Stiftung");
        break;
    }
    case 353977:
    {
        returnValue = F("Zur Lüre");
        break;
    }
    case 353978:
    {
        returnValue = F("Zur Lüsser Brücke");
        break;
    }
    case 353979:
    {
        returnValue = F("Zur Lütgenheide");
        break;
    }
    case 353980:
    {
        returnValue = F("Zur Lüttmecke");
        break;
    }
    case 353981:
    {
        returnValue = F("Zur Maasbeck");
        break;
    }
    case 353982:
    {
        returnValue = F("Zur Maase");
        break;
    }
    case 353983:
    {
        returnValue = F("Zur Maaskat");
        break;
    }
    case 353984:
    {
        returnValue = F("Zur Maate");
        break;
    }
    case 353985:
    {
        returnValue = F("Zur Mader Heide");
        break;
    }
    case 353986:
    {
        returnValue = F("Zur Maderquelle");
        break;
    }
    case 353987:
    {
        returnValue = F("Zur Magdeburger Str.");
        break;
    }
    case 353988:
    {
        returnValue = F("Zur Mahlsteig");
        break;
    }
    case 353989:
    {
        returnValue = F("Zur Mai-Kuhle");
        break;
    }
    case 353990:
    {
        returnValue = F("Zur Maibolte");
        break;
    }
    case 353991:
    {
        returnValue = F("Zur Mailinde");
        break;
    }
    case 353992:
    {
        returnValue = F("Zur Mainfähre");
        break;
    }
    case 353993:
    {
        returnValue = F("Zur Maisbach");
        break;
    }
    case 353994:
    {
        returnValue = F("Zur Malsch");
        break;
    }
    case 353995:
    {
        returnValue = F("Zur Malse");
        break;
    }
    case 353996:
    {
        returnValue = F("Zur Marbach");
        break;
    }
    case 353997:
    {
        returnValue = F("Zur Marbeck");
        break;
    }
    case 353998:
    {
        returnValue = F("Zur March");
        break;
    }
    case 353999:
    {
        returnValue = F("Zur Margarethenmühle");
        break;
    }
    case 354000:
    {
        returnValue = F("Zur Marienau");
        break;
    }
    case 354001:
    {
        returnValue = F("Zur Marieneiche");
        break;
    }
    case 354002:
    {
        returnValue = F("Zur Mariengrotte");
        break;
    }
    case 354003:
    {
        returnValue = F("Zur Marienhöhe");
        break;
    }
    case 354004:
    {
        returnValue = F("Zur Marienkapelle");
        break;
    }
    case 354005:
    {
        returnValue = F("Zur Marienkirche");
        break;
    }
    case 354006:
    {
        returnValue = F("Zur Marienruhe");
        break;
    }
    case 354007:
    {
        returnValue = F("Zur Mark");
        break;
    }
    case 354008:
    {
        returnValue = F("Zur Markwiese");
        break;
    }
    case 354009:
    {
        returnValue = F("Zur Marler Höhe");
        break;
    }
    case 354010:
    {
        returnValue = F("Zur Marsch");
        break;
    }
    case 354011:
    {
        returnValue = F("Zur Marter");
        break;
    }
    case 354012:
    {
        returnValue = F("Zur Marterkapelle");
        break;
    }
    case 354013:
    {
        returnValue = F("Zur Martingsnück");
        break;
    }
    case 354014:
    {
        returnValue = F("Zur Martinshütte");
        break;
    }
    case 354015:
    {
        returnValue = F("Zur Martinskirche");
        break;
    }
    case 354016:
    {
        returnValue = F("Zur Masch");
        break;
    }
    case 354017:
    {
        returnValue = F("Zur Masche");
        break;
    }
    case 354018:
    {
        returnValue = F("Zur Masselbach");
        break;
    }
    case 354019:
    {
        returnValue = F("Zur Massenei");
        break;
    }
    case 354020:
    {
        returnValue = F("Zur Massener Mühle");
        break;
    }
    case 354021:
    {
        returnValue = F("Zur Mauer");
        break;
    }
    case 354022:
    {
        returnValue = F("Zur Mauerley");
        break;
    }
    case 354023:
    {
        returnValue = F("Zur Mauerschleuse");
        break;
    }
    case 354024:
    {
        returnValue = F("Zur Mausmecke");
        break;
    }
    case 354025:
    {
        returnValue = F("Zur Meent");
        break;
    }
    case 354026:
    {
        returnValue = F("Zur Meerpfanne");
        break;
    }
    case 354027:
    {
        returnValue = F("Zur Meesche");
        break;
    }
    case 354028:
    {
        returnValue = F("Zur Meesenburg");
        break;
    }
    case 354029:
    {
        returnValue = F("Zur Megmecke");
        break;
    }
    case 354030:
    {
        returnValue = F("Zur Mehrwiese");
        break;
    }
    case 354031:
    {
        returnValue = F("Zur Mehrzweckhalle");
        break;
    }
    case 354032:
    {
        returnValue = F("Zur Meierei");
        break;
    }
    case 354033:
    {
        returnValue = F("Zur Meisenwiese");
        break;
    }
    case 354034:
    {
        returnValue = F("Zur Meithe");
        break;
    }
    case 354035:
    {
        returnValue = F("Zur Melberöd");
        break;
    }
    case 354036:
    {
        returnValue = F("Zur Melchersmühle");
        break;
    }
    case 354037:
    {
        returnValue = F("Zur Melkerei");
        break;
    }
    case 354038:
    {
        returnValue = F("Zur Melm");
        break;
    }
    case 354039:
    {
        returnValue = F("Zur Mennau");
        break;
    }
    case 354040:
    {
        returnValue = F("Zur Mergelkuhle");
        break;
    }
    case 354041:
    {
        returnValue = F("Zur Mergelmühle");
        break;
    }
    case 354042:
    {
        returnValue = F("Zur Merhardt");
        break;
    }
    case 354043:
    {
        returnValue = F("Zur Mersch");
        break;
    }
    case 354044:
    {
        returnValue = F("Zur Mesche");
        break;
    }
    case 354045:
    {
        returnValue = F("Zur Mesnerkapelle");
        break;
    }
    case 354046:
    {
        returnValue = F("Zur Metabank");
        break;
    }
    case 354047:
    {
        returnValue = F("Zur Mickow");
        break;
    }
    case 354048:
    {
        returnValue = F("Zur Miebach");
        break;
    }
    case 354049:
    {
        returnValue = F("Zur Milde");
        break;
    }
    case 354050:
    {
        returnValue = F("Zur Mindel");
        break;
    }
    case 354051:
    {
        returnValue = F("Zur Minnich");
        break;
    }
    case 354052:
    {
        returnValue = F("Zur Mischanlage");
        break;
    }
    case 354053:
    {
        returnValue = F("Zur Missebene");
        break;
    }
    case 354054:
    {
        returnValue = F("Zur Mittelau");
        break;
    }
    case 354055:
    {
        returnValue = F("Zur Mittelflur");
        break;
    }
    case 354056:
    {
        returnValue = F("Zur Mittelgasse");
        break;
    }
    case 354057:
    {
        returnValue = F("Zur Mittelmühle");
        break;
    }
    case 354058:
    {
        returnValue = F("Zur Mittelpunktschule");
        break;
    }
    case 354059:
    {
        returnValue = F("Zur Mittelwiese");
        break;
    }
    case 354060:
    {
        returnValue = F("Zur Mittleren Alp");
        break;
    }
    case 354061:
    {
        returnValue = F("Zur Mittleren Brücke");
        break;
    }
    case 354062:
    {
        returnValue = F("Zur Mjön");
        break;
    }
    case 354063:
    {
        returnValue = F("Zur Mohrenmühle");
        break;
    }
    case 354064:
    {
        returnValue = F("Zur Molberger Dose");
        break;
    }
    case 354065:
    {
        returnValue = F("Zur Molchkuhle");
        break;
    }
    case 354066:
    {
        returnValue = F("Zur Mole");
        break;
    }
    case 354067:
    {
        returnValue = F("Zur Molkerei");
        break;
    }
    case 354068:
    {
        returnValue = F("Zur Molle");
        break;
    }
    case 354069:
    {
        returnValue = F("Zur Montesorischule");
        break;
    }
    case 354070:
    {
        returnValue = F("Zur Moorburg");
        break;
    }
    case 354071:
    {
        returnValue = F("Zur Moorheide");
        break;
    }
    case 354072:
    {
        returnValue = F("Zur Moorkate");
        break;
    }
    case 354073:
    {
        returnValue = F("Zur Moorwiese");
        break;
    }
    case 354074:
    {
        returnValue = F("Zur Mooskuhle");
        break;
    }
    case 354075:
    {
        returnValue = F("Zur Moosmatt");
        break;
    }
    case 354076:
    {
        returnValue = F("Zur Moosmühle");
        break;
    }
    case 354077:
    {
        returnValue = F("Zur Morgenröte");
        break;
    }
    case 354078:
    {
        returnValue = F("Zur Moselbrücke");
        break;
    }
    case 354079:
    {
        returnValue = F("Zur Mosser");
        break;
    }
    case 354080:
    {
        returnValue = F("Zur Mosterei");
        break;
    }
    case 354081:
    {
        returnValue = F("Zur Motte");
        break;
    }
    case 354082:
    {
        returnValue = F("Zur Mulde");
        break;
    }
    case 354083:
    {
        returnValue = F("Zur Muldenaue");
        break;
    }
    case 354084:
    {
        returnValue = F("Zur Muldenterrasse");
        break;
    }
    case 354085:
    {
        returnValue = F("Zur Munte");
        break;
    }
    case 354086:
    {
        returnValue = F("Zur Muschel");
        break;
    }
    case 354087:
    {
        returnValue = F("Zur Musikantenwiese");
        break;
    }
    case 354088:
    {
        returnValue = F("Zur Muttereiche");
        break;
    }
    case 354089:
    {
        returnValue = F("Zur Mutzenwiese");
        break;
    }
    case 354090:
    {
        returnValue = F("Zur Märbelmühle");
        break;
    }
    case 354091:
    {
        returnValue = F("Zur Märchenmühle");
        break;
    }
    case 354092:
    {
        returnValue = F("Zur Märk");
        break;
    }
    case 354093:
    {
        returnValue = F("Zur Märzenquelle");
        break;
    }
    case 354094:
    {
        returnValue = F("Zur Mönchswiese");
        break;
    }
    case 354095:
    {
        returnValue = F("Zur Mühe");
        break;
    }
    case 354096:
    {
        returnValue = F("Zur Mühlau");
        break;
    }
    case 354097:
    {
        returnValue = F("Zur Mühle");
        break;
    }
    case 354098:
    {
        returnValue = F("Zur Mühlegge");
        break;
    }
    case 354099:
    {
        returnValue = F("Zur Mühlen");
        break;
    }
    case 354100:
    {
        returnValue = F("Zur Mühlenau");
        break;
    }
    case 354101:
    {
        returnValue = F("Zur Mühlenscheib");
        break;
    }
    case 354102:
    {
        returnValue = F("Zur Mühlheide");
        break;
    }
    case 354103:
    {
        returnValue = F("Zur Mühlheim");
        break;
    }
    case 354104:
    {
        returnValue = F("Zur Mühlleite");
        break;
    }
    case 354105:
    {
        returnValue = F("Zur Mühlliede");
        break;
    }
    case 354106:
    {
        returnValue = F("Zur Mühlwiese");
        break;
    }
    case 354107:
    {
        returnValue = F("Zur Müllerecke");
        break;
    }
    case 354108:
    {
        returnValue = F("Zur Münterburg");
        break;
    }
    case 354109:
    {
        returnValue = F("Zur Münzbach");
        break;
    }
    case 354110:
    {
        returnValue = F("Zur Münzstätte");
        break;
    }
    case 354111:
    {
        returnValue = F("Zur Müße");
        break;
    }
    case 354112:
    {
        returnValue = F("Zur Nachthütung");
        break;
    }
    case 354113:
    {
        returnValue = F("Zur Nachtigall");
        break;
    }
    case 354114:
    {
        returnValue = F("Zur Nachtwacht");
        break;
    }
    case 354115:
    {
        returnValue = F("Zur Nachtweid");
        break;
    }
    case 354116:
    {
        returnValue = F("Zur Nachtweide");
        break;
    }
    case 354117:
    {
        returnValue = F("Zur Nahequelle");
        break;
    }
    case 354118:
    {
        returnValue = F("Zur Napoleonnase");
        break;
    }
    case 354119:
    {
        returnValue = F("Zur Napoleonsnase");
        break;
    }
    case 354120:
    {
        returnValue = F("Zur Nattenheimer Barriere");
        break;
    }
    case 354121:
    {
        returnValue = F("Zur Naubrücke");
        break;
    }
    case 354122:
    {
        returnValue = F("Zur Nautheilung");
        break;
    }
    case 354123:
    {
        returnValue = F("Zur Nauwies");
        break;
    }
    case 354124:
    {
        returnValue = F("Zur Nette");
        break;
    }
    case 354125:
    {
        returnValue = F("Zur Nettequelle");
        break;
    }
    case 354126:
    {
        returnValue = F("Zur Netzebander Heide");
        break;
    }
    case 354127:
    {
        returnValue = F("Zur Neubrücke");
        break;
    }
    case 354128:
    {
        returnValue = F("Zur Neuen Aue");
        break;
    }
    case 354129:
    {
        returnValue = F("Zur Neuen Breite");
        break;
    }
    case 354130:
    {
        returnValue = F("Zur Neuen Hoffnung");
        break;
    }
    case 354131:
    {
        returnValue = F("Zur Neuen Lune");
        break;
    }
    case 354132:
    {
        returnValue = F("Zur Neuen Meede");
        break;
    }
    case 354133:
    {
        returnValue = F("Zur Neuen Mühle");
        break;
    }
    case 354134:
    {
        returnValue = F("Zur Neuen Nieplitzbrücke");
        break;
    }
    case 354135:
    {
        returnValue = F("Zur Neuen Schule");
        break;
    }
    case 354136:
    {
        returnValue = F("Zur Neuen Siedlung");
        break;
    }
    case 354137:
    {
        returnValue = F("Zur Neuen Sorge");
        break;
    }
    case 354138:
    {
        returnValue = F("Zur Neumühle");
        break;
    }
    case 354139:
    {
        returnValue = F("Zur Neusitz");
        break;
    }
    case 354140:
    {
        returnValue = F("Zur Neuwiese");
        break;
    }
    case 354141:
    {
        returnValue = F("Zur Nickelsmühle");
        break;
    }
    case 354142:
    {
        returnValue = F("Zur Niebymole");
        break;
    }
    case 354143:
    {
        returnValue = F("Zur Niederhaardt");
        break;
    }
    case 354144:
    {
        returnValue = F("Zur Niedermasch");
        break;
    }
    case 354145:
    {
        returnValue = F("Zur Niedermühle");
        break;
    }
    case 354146:
    {
        returnValue = F("Zur Niederstruth");
        break;
    }
    case 354147:
    {
        returnValue = F("Zur Niederweserbahn");
        break;
    }
    case 354148:
    {
        returnValue = F("Zur Niedtalhalle");
        break;
    }
    case 354149:
    {
        returnValue = F("Zur Nieplitz");
        break;
    }
    case 354150:
    {
        returnValue = F("Zur Niersquelle");
        break;
    }
    case 354151:
    {
        returnValue = F("Zur Nieste");
        break;
    }
    case 354152:
    {
        returnValue = F("Zur Nordhelle");
        break;
    }
    case 354153:
    {
        returnValue = F("Zur Nordspange");
        break;
    }
    case 354154:
    {
        returnValue = F("Zur Nordstr.");
        break;
    }
    case 354155:
    {
        returnValue = F("Zur Nordwiese");
        break;
    }
    case 354156:
    {
        returnValue = F("Zur Nore");
        break;
    }
    case 354157:
    {
        returnValue = F("Zur Normandie");
        break;
    }
    case 354158:
    {
        returnValue = F("Zur Nothelle");
        break;
    }
    case 354159:
    {
        returnValue = F("Zur Nuthe");
        break;
    }
    case 354160:
    {
        returnValue = F("Zur Nußinsel");
        break;
    }
    case 354161:
    {
        returnValue = F("Zur Näsch");
        break;
    }
    case 354162:
    {
        returnValue = F("Zur Nöck");
        break;
    }
    case 354163:
    {
        returnValue = F("Zur Nühr");
        break;
    }
    case 354164:
    {
        returnValue = F("Zur Oberacht");
        break;
    }
    case 354165:
    {
        returnValue = F("Zur Oberau");
        break;
    }
    case 354166:
    {
        returnValue = F("Zur Oberen Heide");
        break;
    }
    case 354167:
    {
        returnValue = F("Zur Oberen Mühle");
        break;
    }
    case 354168:
    {
        returnValue = F("Zur Obergasse");
        break;
    }
    case 354169:
    {
        returnValue = F("Zur Obermühle");
        break;
    }
    case 354170:
    {
        returnValue = F("Zur Obersburg");
        break;
    }
    case 354171:
    {
        returnValue = F("Zur Obstweinschänke");
        break;
    }
    case 354172:
    {
        returnValue = F("Zur Obstwiese");
        break;
    }
    case 354173:
    {
        returnValue = F("Zur Ocht");
        break;
    }
    case 354174:
    {
        returnValue = F("Zur Ockergrube");
        break;
    }
    case 354175:
    {
        returnValue = F("Zur Offenen Tür");
        break;
    }
    case 354176:
    {
        returnValue = F("Zur Ohe");
        break;
    }
    case 354177:
    {
        returnValue = F("Zur Ohlig");
        break;
    }
    case 354178:
    {
        returnValue = F("Zur Ohmbach");
        break;
    }
    case 354179:
    {
        returnValue = F("Zur Ohreaue");
        break;
    }
    case 354180:
    {
        returnValue = F("Zur Oie");
        break;
    }
    case 354181:
    {
        returnValue = F("Zur Oker");
        break;
    }
    case 354182:
    {
        returnValue = F("Zur Ollen");
        break;
    }
    case 354183:
    {
        returnValue = F("Zur Orkequelle");
        break;
    }
    case 354184:
    {
        returnValue = F("Zur Ortbeeke");
        break;
    }
    case 354185:
    {
        returnValue = F("Zur Ortsloge");
        break;
    }
    case 354186:
    {
        returnValue = F("Zur Oschütz");
        break;
    }
    case 354187:
    {
        returnValue = F("Zur Ostaue");
        break;
    }
    case 354188:
    {
        returnValue = F("Zur Oste");
        break;
    }
    case 354189:
    {
        returnValue = F("Zur Osterbach Mühle");
        break;
    }
    case 354190:
    {
        returnValue = F("Zur Osterheide");
        break;
    }
    case 354191:
    {
        returnValue = F("Zur Osterquelle");
        break;
    }
    case 354192:
    {
        returnValue = F("Zur Osterstr.");
        break;
    }
    case 354193:
    {
        returnValue = F("Zur Osterwies");
        break;
    }
    case 354194:
    {
        returnValue = F("Zur Osterwiese");
        break;
    }
    case 354195:
    {
        returnValue = F("Zur Ostsee");
        break;
    }
    case 354196:
    {
        returnValue = F("Zur Ostspange");
        break;
    }
    case 354197:
    {
        returnValue = F("Zur Otterbäke");
        break;
    }
    case 354198:
    {
        returnValue = F("Zur Ovelgönne");
        break;
    }
    case 354199:
    {
        returnValue = F("Zur Padbeck");
        break;
    }
    case 354200:
    {
        returnValue = F("Zur Painten");
        break;
    }
    case 354201:
    {
        returnValue = F("Zur Pannhütt");
        break;
    }
    case 354202:
    {
        returnValue = F("Zur Papenkuhle");
        break;
    }
    case 354203:
    {
        returnValue = F("Zur Papenrecke");
        break;
    }
    case 354204:
    {
        returnValue = F("Zur Papierfabrik");
        break;
    }
    case 354205:
    {
        returnValue = F("Zur Papiermühle");
        break;
    }
    case 354206:
    {
        returnValue = F("Zur Pappel");
        break;
    }
    case 354207:
    {
        returnValue = F("Zur Pappelallee");
        break;
    }
    case 354208:
    {
        returnValue = F("Zur Pariser Str.");
        break;
    }
    case 354209:
    {
        returnValue = F("Zur Parmke");
        break;
    }
    case 354210:
    {
        returnValue = F("Zur Paschenburg");
        break;
    }
    case 354211:
    {
        returnValue = F("Zur Paulinenaue");
        break;
    }
    case 354212:
    {
        returnValue = F("Zur Pechhütte");
        break;
    }
    case 354213:
    {
        returnValue = F("Zur Peckelbrücke");
        break;
    }
    case 354214:
    {
        returnValue = F("Zur Peene");
        break;
    }
    case 354215:
    {
        returnValue = F("Zur Persch");
        break;
    }
    case 354216:
    {
        returnValue = F("Zur Petersburg");
        break;
    }
    case 354217:
    {
        returnValue = F("Zur Petersdell");
        break;
    }
    case 354218:
    {
        returnValue = F("Zur Petershöhe");
        break;
    }
    case 354219:
    {
        returnValue = F("Zur Peterskirche");
        break;
    }
    case 354220:
    {
        returnValue = F("Zur Peterslay");
        break;
    }
    case 354221:
    {
        returnValue = F("Zur Pfaffengrube");
        break;
    }
    case 354222:
    {
        returnValue = F("Zur Pfaffenmach");
        break;
    }
    case 354223:
    {
        returnValue = F("Zur Pfalz");
        break;
    }
    case 354224:
    {
        returnValue = F("Zur Pfannenschmiede");
        break;
    }
    case 354225:
    {
        returnValue = F("Zur Pfefferlache");
        break;
    }
    case 354226:
    {
        returnValue = F("Zur Pfefferwiese");
        break;
    }
    case 354227:
    {
        returnValue = F("Zur Pferdehutung");
        break;
    }
    case 354228:
    {
        returnValue = F("Zur Pferdekoppel");
        break;
    }
    case 354229:
    {
        returnValue = F("Zur Pferdeweide");
        break;
    }
    case 354230:
    {
        returnValue = F("Zur Pfingstfraße");
        break;
    }
    case 354231:
    {
        returnValue = F("Zur Pfingstweide");
        break;
    }
    case 354232:
    {
        returnValue = F("Zur Pfingstwiese");
        break;
    }
    case 354233:
    {
        returnValue = F("Zur Pflaumenallee");
        break;
    }
    case 354234:
    {
        returnValue = F("Zur Pflaumenplantage");
        break;
    }
    case 354235:
    {
        returnValue = F("Zur Pforte");
        break;
    }
    case 354236:
    {
        returnValue = F("Zur Pfrille");
        break;
    }
    case 354237:
    {
        returnValue = F("Zur Philippsburg");
        break;
    }
    case 354238:
    {
        returnValue = F("Zur Pichobaude");
        break;
    }
    case 354239:
    {
        returnValue = F("Zur Pill");
        break;
    }
    case 354240:
    {
        returnValue = F("Zur Pinnau");
        break;
    }
    case 354241:
    {
        returnValue = F("Zur Pinnekuhle");
        break;
    }
    case 354242:
    {
        returnValue = F("Zur Pirkmühle");
        break;
    }
    case 354243:
    {
        returnValue = F("Zur Pirminiusschule");
        break;
    }
    case 354244:
    {
        returnValue = F("Zur Pirschheide");
        break;
    }
    case 354245:
    {
        returnValue = F("Zur Plagbreite");
        break;
    }
    case 354246:
    {
        returnValue = F("Zur Plak");
        break;
    }
    case 354247:
    {
        returnValue = F("Zur Plantage");
        break;
    }
    case 354248:
    {
        returnValue = F("Zur Platane");
        break;
    }
    case 354249:
    {
        returnValue = F("Zur Platt");
        break;
    }
    case 354250:
    {
        returnValue = F("Zur Platte");
        break;
    }
    case 354251:
    {
        returnValue = F("Zur Platzmühle");
        break;
    }
    case 354252:
    {
        returnValue = F("Zur Pleiner Mühle");
        break;
    }
    case 354253:
    {
        returnValue = F("Zur Pleiße");
        break;
    }
    case 354254:
    {
        returnValue = F("Zur Plätsch");
        break;
    }
    case 354255:
    {
        returnValue = F("Zur Plätte");
        break;
    }
    case 354256:
    {
        returnValue = F("Zur Plötze");
        break;
    }
    case 354257:
    {
        returnValue = F("Zur Poggenburg");
        break;
    }
    case 354258:
    {
        returnValue = F("Zur Poggenmühle");
        break;
    }
    case 354259:
    {
        returnValue = F("Zur Pohlstadt");
        break;
    }
    case 354260:
    {
        returnValue = F("Zur Point");
        break;
    }
    case 354261:
    {
        returnValue = F("Zur Pointnermühle");
        break;
    }
    case 354262:
    {
        returnValue = F("Zur Polizeischule");
        break;
    }
    case 354263:
    {
        returnValue = F("Zur Pollau");
        break;
    }
    case 354264:
    {
        returnValue = F("Zur Polterkuhle");
        break;
    }
    case 354265:
    {
        returnValue = F("Zur Ponicke");
        break;
    }
    case 354266:
    {
        returnValue = F("Zur Ponywiese");
        break;
    }
    case 354267:
    {
        returnValue = F("Zur Porta");
        break;
    }
    case 354268:
    {
        returnValue = F("Zur Portheide");
        break;
    }
    case 354269:
    {
        returnValue = F("Zur Posswisch");
        break;
    }
    case 354270:
    {
        returnValue = F("Zur Post");
        break;
    }
    case 354271:
    {
        returnValue = F("Zur Postwiese");
        break;
    }
    case 354272:
    {
        returnValue = F("Zur Potmere");
        break;
    }
    case 354273:
    {
        returnValue = F("Zur Pottaschhütte");
        break;
    }
    case 354274:
    {
        returnValue = F("Zur Pottschütt");
        break;
    }
    case 354275:
    {
        returnValue = F("Zur Preiselbeerbrücke");
        break;
    }
    case 354276:
    {
        returnValue = F("Zur Preußenquelle");
        break;
    }
    case 354277:
    {
        returnValue = F("Zur Primshalle");
        break;
    }
    case 354278:
    {
        returnValue = F("Zur Probstei");
        break;
    }
    case 354279:
    {
        returnValue = F("Zur Promenade");
        break;
    }
    case 354280:
    {
        returnValue = F("Zur Pudelmütz");
        break;
    }
    case 354281:
    {
        returnValue = F("Zur Pulverhütte");
        break;
    }
    case 354282:
    {
        returnValue = F("Zur Pulvermühle");
        break;
    }
    case 354283:
    {
        returnValue = F("Zur Pumpstation");
        break;
    }
    case 354284:
    {
        returnValue = F("Zur Pünte");
        break;
    }
    case 354285:
    {
        returnValue = F("Zur Quart");
        break;
    }
    case 354286:
    {
        returnValue = F("Zur Quelle");
        break;
    }
    case 354287:
    {
        returnValue = F("Zur Quellge");
        break;
    }
    case 354288:
    {
        returnValue = F("Zur Querfahrt");
        break;
    }
    case 354289:
    {
        returnValue = F("Zur Quernst");
        break;
    }
    case 354290:
    {
        returnValue = F("Zur Querstr.");
        break;
    }
    case 354291:
    {
        returnValue = F("Zur Quetsche");
        break;
    }
    case 354292:
    {
        returnValue = F("Zur Quäne");
        break;
    }
    case 354293:
    {
        returnValue = F("Zur Rabinke");
        break;
    }
    case 354294:
    {
        returnValue = F("Zur Racklburg");
        break;
    }
    case 354295:
    {
        returnValue = F("Zur Radde");
        break;
    }
    case 354296:
    {
        returnValue = F("Zur Ragöse");
        break;
    }
    case 354297:
    {
        returnValue = F("Zur Rahe");
        break;
    }
    case 354298:
    {
        returnValue = F("Zur Rainleiten");
        break;
    }
    case 354299:
    {
        returnValue = F("Zur Rampe");
        break;
    }
    case 354300:
    {
        returnValue = F("Zur Ramsiekquelle");
        break;
    }
    case 354301:
    {
        returnValue = F("Zur Randow");
        break;
    }
    case 354302:
    {
        returnValue = F("Zur Randsiedlung");
        break;
    }
    case 354303:
    {
        returnValue = F("Zur Rann");
        break;
    }
    case 354304:
    {
        returnValue = F("Zur Rasemühle");
        break;
    }
    case 354305:
    {
        returnValue = F("Zur Rasenwiese");
        break;
    }
    case 354306:
    {
        returnValue = F("Zur Rast");
        break;
    }
    case 354307:
    {
        returnValue = F("Zur Ratzenburg");
        break;
    }
    case 354308:
    {
        returnValue = F("Zur Rau");
        break;
    }
    case 354309:
    {
        returnValue = F("Zur Rauhen Eiche");
        break;
    }
    case 354310:
    {
        returnValue = F("Zur Rausch");
        break;
    }
    case 354311:
    {
        returnValue = F("Zur Rauschenburg");
        break;
    }
    case 354312:
    {
        returnValue = F("Zur Raute");
        break;
    }
    case 354313:
    {
        returnValue = F("Zur Ravenswiede");
        break;
    }
    case 354314:
    {
        returnValue = F("Zur Reege");
        break;
    }
    case 354315:
    {
        returnValue = F("Zur Reeh-Quelle");
        break;
    }
    case 354316:
    {
        returnValue = F("Zur Reffenstr.");
        break;
    }
    case 354317:
    {
        returnValue = F("Zur Regentenhöhe");
        break;
    }
    case 354318:
    {
        returnValue = F("Zur Rehbachstr.");
        break;
    }
    case 354319:
    {
        returnValue = F("Zur Rehhecke");
        break;
    }
    case 354320:
    {
        returnValue = F("Zur Rehlbieke");
        break;
    }
    case 354321:
    {
        returnValue = F("Zur Rehmecke");
        break;
    }
    case 354322:
    {
        returnValue = F("Zur Rehpicke");
        break;
    }
    case 354323:
    {
        returnValue = F("Zur Rehwiese");
        break;
    }
    case 354324:
    {
        returnValue = F("Zur Reihe");
        break;
    }
    case 354325:
    {
        returnValue = F("Zur Reiherhalde");
        break;
    }
    case 354326:
    {
        returnValue = F("Zur Reismühle");
        break;
    }
    case 354327:
    {
        returnValue = F("Zur Reitbahn");
        break;
    }
    case 354328:
    {
        returnValue = F("Zur Reite");
        break;
    }
    case 354329:
    {
        returnValue = F("Zur Reiterheide");
        break;
    }
    case 354330:
    {
        returnValue = F("Zur Reith");
        break;
    }
    case 354331:
    {
        returnValue = F("Zur Reithalle");
        break;
    }
    case 354332:
    {
        returnValue = F("Zur Reißigmühle");
        break;
    }
    case 354333:
    {
        returnValue = F("Zur Rellau");
        break;
    }
    case 354334:
    {
        returnValue = F("Zur Remise");
        break;
    }
    case 354335:
    {
        returnValue = F("Zur Rennbahn");
        break;
    }
    case 354336:
    {
        returnValue = F("Zur Rentrischer Kirche");
        break;
    }
    case 354337:
    {
        returnValue = F("Zur Residenz");
        break;
    }
    case 354338:
    {
        returnValue = F("Zur Reute");
        break;
    }
    case 354339:
    {
        returnValue = F("Zur Reuthschaft");
        break;
    }
    case 354340:
    {
        returnValue = F("Zur Rhein-Sieg-Halle");
        break;
    }
    case 354341:
    {
        returnValue = F("Zur Rheinbrücke");
        break;
    }
    case 354342:
    {
        returnValue = F("Zur Rheinfähre");
        break;
    }
    case 354343:
    {
        returnValue = F("Zur Rhinbrücke");
        break;
    }
    case 354344:
    {
        returnValue = F("Zur Rhinschleuse");
        break;
    }
    case 354345:
    {
        returnValue = F("Zur Rhön");
        break;
    }
    case 354346:
    {
        returnValue = F("Zur Richt");
        break;
    }
    case 354347:
    {
        returnValue = F("Zur Riede");
        break;
    }
    case 354348:
    {
        returnValue = F("Zur Riederhalde");
        break;
    }
    case 354349:
    {
        returnValue = F("Zur Riedhalde");
        break;
    }
    case 354350:
    {
        returnValue = F("Zur Riedkapelle");
        break;
    }
    case 354351:
    {
        returnValue = F("Zur Riehleeiche");
        break;
    }
    case 354352:
    {
        returnValue = F("Zur Rieselwiese");
        break;
    }
    case 354353:
    {
        returnValue = F("Zur Riesenburg");
        break;
    }
    case 354354:
    {
        returnValue = F("Zur Riete");
        break;
    }
    case 354355:
    {
        returnValue = F("Zur Riethrather Mühle");
        break;
    }
    case 354356:
    {
        returnValue = F("Zur Riez");
        break;
    }
    case 354357:
    {
        returnValue = F("Zur Rießwarte");
        break;
    }
    case 354358:
    {
        returnValue = F("Zur Rimmert");
        break;
    }
    case 354359:
    {
        returnValue = F("Zur Ring");
        break;
    }
    case 354360:
    {
        returnValue = F("Zur Ringmauer");
        break;
    }
    case 354361:
    {
        returnValue = F("Zur Rinne");
        break;
    }
    case 354362:
    {
        returnValue = F("Zur Rippersmühle");
        break;
    }
    case 354363:
    {
        returnValue = F("Zur Rittermühle");
        break;
    }
    case 354364:
    {
        returnValue = F("Zur Ritterschlucht");
        break;
    }
    case 354365:
    {
        returnValue = F("Zur Robertshöhe");
        break;
    }
    case 354366:
    {
        returnValue = F("Zur Rochau");
        break;
    }
    case 354367:
    {
        returnValue = F("Zur Roda");
        break;
    }
    case 354368:
    {
        returnValue = F("Zur Roddergrube");
        break;
    }
    case 354369:
    {
        returnValue = F("Zur Rodelbahn");
        break;
    }
    case 354370:
    {
        returnValue = F("Zur Rohrlach");
        break;
    }
    case 354371:
    {
        returnValue = F("Zur Rohrwiese");
        break;
    }
    case 354372:
    {
        returnValue = F("Zur Roleye");
        break;
    }
    case 354373:
    {
        returnValue = F("Zur Rolle");
        break;
    }
    case 354374:
    {
        returnValue = F("Zur Rollersau");
        break;
    }
    case 354375:
    {
        returnValue = F("Zur Romanei");
        break;
    }
    case 354376:
    {
        returnValue = F("Zur Ronneburg");
        break;
    }
    case 354377:
    {
        returnValue = F("Zur Ronnheck");
        break;
    }
    case 354378:
    {
        returnValue = F("Zur Rosenau");
        break;
    }
    case 354379:
    {
        returnValue = F("Zur Rosenheck");
        break;
    }
    case 354380:
    {
        returnValue = F("Zur Rosenhecke");
        break;
    }
    case 354381:
    {
        returnValue = F("Zur Rosenkoppel");
        break;
    }
    case 354382:
    {
        returnValue = F("Zur Rosenmühle");
        break;
    }
    case 354383:
    {
        returnValue = F("Zur Rossel");
        break;
    }
    case 354384:
    {
        returnValue = F("Zur Rosselmühle");
        break;
    }
    case 354385:
    {
        returnValue = F("Zur Rotachsäge");
        break;
    }
    case 354386:
    {
        returnValue = F("Zur Rotbuche");
        break;
    }
    case 354387:
    {
        returnValue = F("Zur Rotburg");
        break;
    }
    case 354388:
    {
        returnValue = F("Zur Roten Brücke");
        break;
    }
    case 354389:
    {
        returnValue = F("Zur Roten Löwenmühle");
        break;
    }
    case 354390:
    {
        returnValue = F("Zur Roten Marter");
        break;
    }
    case 354391:
    {
        returnValue = F("Zur Roten Mühle");
        break;
    }
    case 354392:
    {
        returnValue = F("Zur Roten Riede");
        break;
    }
    case 354393:
    {
        returnValue = F("Zur Roten Seite");
        break;
    }
    case 354394:
    {
        returnValue = F("Zur Rothell");
        break;
    }
    case 354395:
    {
        returnValue = F("Zur Rothheck");
        break;
    }
    case 354396:
    {
        returnValue = F("Zur Rothspitze");
        break;
    }
    case 354397:
    {
        returnValue = F("Zur Rothwiese");
        break;
    }
    case 354398:
    {
        returnValue = F("Zur Rothöhe");
        break;
    }
    case 354399:
    {
        returnValue = F("Zur Rotlay");
        break;
    }
    case 354400:
    {
        returnValue = F("Zur Rottenbeeke");
        break;
    }
    case 354401:
    {
        returnValue = F("Zur Rottkuhle");
        break;
    }
    case 354402:
    {
        returnValue = F("Zur Roßweide");
        break;
    }
    case 354403:
    {
        returnValue = F("Zur Rudolfshöhe");
        break;
    }
    case 354404:
    {
        returnValue = F("Zur Ruh");
        break;
    }
    case 354405:
    {
        returnValue = F("Zur Rumplmühle");
        break;
    }
    case 354406:
    {
        returnValue = F("Zur Ruppertsklamm");
        break;
    }
    case 354407:
    {
        returnValue = F("Zur Ruppertsmühle");
        break;
    }
    case 354408:
    {
        returnValue = F("Zur Ruppwiese");
        break;
    }
    case 354409:
    {
        returnValue = F("Zur Rur");
        break;
    }
    case 354410:
    {
        returnValue = F("Zur Ruraue");
        break;
    }
    case 354411:
    {
        returnValue = F("Zur Russeer Au");
        break;
    }
    case 354412:
    {
        returnValue = F("Zur Ruthenaar");
        break;
    }
    case 354413:
    {
        returnValue = F("Zur Rutsche");
        break;
    }
    case 354414:
    {
        returnValue = F("Zur Rutzgewann");
        break;
    }
    case 354415:
    {
        returnValue = F("Zur Ruwenburg");
        break;
    }
    case 354416:
    {
        returnValue = F("Zur Rußbutte");
        break;
    }
    case 354417:
    {
        returnValue = F("Zur Räuberschänke");
        break;
    }
    case 354418:
    {
        returnValue = F("Zur Röderburg");
        break;
    }
    case 354419:
    {
        returnValue = F("Zur Röderinsel");
        break;
    }
    case 354420:
    {
        returnValue = F("Zur Rölsdorfer Burg");
        break;
    }
    case 354421:
    {
        returnValue = F("Zur Römerbergschule");
        break;
    }
    case 354422:
    {
        returnValue = F("Zur Römerbrücke");
        break;
    }
    case 354423:
    {
        returnValue = F("Zur Römerhöhe");
        break;
    }
    case 354424:
    {
        returnValue = F("Zur Römerschanze");
        break;
    }
    case 354425:
    {
        returnValue = F("Zur Römerschmelze");
        break;
    }
    case 354426:
    {
        returnValue = F("Zur Römerstr.");
        break;
    }
    case 354427:
    {
        returnValue = F("Zur Römervilla");
        break;
    }
    case 354428:
    {
        returnValue = F("Zur Rönnwettern");
        break;
    }
    case 354429:
    {
        returnValue = F("Zur Röte");
        break;
    }
    case 354430:
    {
        returnValue = F("Zur Röthe");
        break;
    }
    case 354431:
    {
        returnValue = F("Zur Röthenbachklamm");
        break;
    }
    case 354432:
    {
        returnValue = F("Zur Röttere");
        break;
    }
    case 354433:
    {
        returnValue = F("Zur Rühler Schweiz");
        break;
    }
    case 354434:
    {
        returnValue = F("Zur Rühm");
        break;
    }
    case 354435:
    {
        returnValue = F("Zur Rütze");
        break;
    }
    case 354436:
    {
        returnValue = F("Zur S-Bahn");
        break;
    }
    case 354437:
    {
        returnValue = F("Zur Saale");
        break;
    }
    case 354438:
    {
        returnValue = F("Zur Saalegge");
        break;
    }
    case 354439:
    {
        returnValue = F("Zur Saalkirche");
        break;
    }
    case 354440:
    {
        returnValue = F("Zur Saarmühle");
        break;
    }
    case 354441:
    {
        returnValue = F("Zur Sackgasse");
        break;
    }
    case 354442:
    {
        returnValue = F("Zur Sager Heide");
        break;
    }
    case 354443:
    {
        returnValue = F("Zur Sahne");
        break;
    }
    case 354444:
    {
        returnValue = F("Zur Sahrtalsicht");
        break;
    }
    case 354445:
    {
        returnValue = F("Zur Salderwiese");
        break;
    }
    case 354446:
    {
        returnValue = F("Zur Salze");
        break;
    }
    case 354447:
    {
        returnValue = F("Zur Salzhaube");
        break;
    }
    case 354448:
    {
        returnValue = F("Zur Salzleck");
        break;
    }
    case 354449:
    {
        returnValue = F("Zur Salzstr.");
        break;
    }
    case 354450:
    {
        returnValue = F("Zur Salztrift");
        break;
    }
    case 354451:
    {
        returnValue = F("Zur Samsruhe");
        break;
    }
    case 354452:
    {
        returnValue = F("Zur Sandbank");
        break;
    }
    case 354453:
    {
        returnValue = F("Zur Sandbreite");
        break;
    }
    case 354454:
    {
        returnValue = F("Zur Sandgrub");
        break;
    }
    case 354455:
    {
        returnValue = F("Zur Sandgrube");
        break;
    }
    case 354456:
    {
        returnValue = F("Zur Sandhordt");
        break;
    }
    case 354457:
    {
        returnValue = F("Zur Sandkaul");
        break;
    }
    case 354458:
    {
        returnValue = F("Zur Sandkaule");
        break;
    }
    case 354459:
    {
        returnValue = F("Zur Sandkuhle");
        break;
    }
    case 354460:
    {
        returnValue = F("Zur Sandleite");
        break;
    }
    case 354461:
    {
        returnValue = F("Zur Sandmühle");
        break;
    }
    case 354462:
    {
        returnValue = F("Zur Sandscholle");
        break;
    }
    case 354463:
    {
        returnValue = F("Zur Sandstroth");
        break;
    }
    case 354464:
    {
        returnValue = F("Zur Sang");
        break;
    }
    case 354465:
    {
        returnValue = F("Zur Sangmühle");
        break;
    }
    case 354466:
    {
        returnValue = F("Zur Sasselbach");
        break;
    }
    case 354467:
    {
        returnValue = F("Zur Satten Eiche");
        break;
    }
    case 354468:
    {
        returnValue = F("Zur Sauerlandhalle");
        break;
    }
    case 354469:
    {
        returnValue = F("Zur Sauerlandtherme");
        break;
    }
    case 354470:
    {
        returnValue = F("Zur Sauerwiese");
        break;
    }
    case 354471:
    {
        returnValue = F("Zur Schachthalde");
        break;
    }
    case 354472:
    {
        returnValue = F("Zur Schaddelmühle");
        break;
    }
    case 354473:
    {
        returnValue = F("Zur Schafbrücke");
        break;
    }
    case 354474:
    {
        returnValue = F("Zur Schafsbrücke");
        break;
    }
    case 354475:
    {
        returnValue = F("Zur Schafshöhe");
        break;
    }
    case 354476:
    {
        returnValue = F("Zur Schafskoppel");
        break;
    }
    case 354477:
    {
        returnValue = F("Zur Schafstränke");
        break;
    }
    case 354478:
    {
        returnValue = F("Zur Schaftrift");
        break;
    }
    case 354479:
    {
        returnValue = F("Zur Schaftränke");
        break;
    }
    case 354480:
    {
        returnValue = F("Zur Schafweide");
        break;
    }
    case 354481:
    {
        returnValue = F("Zur Schafwiese");
        break;
    }
    case 354482:
    {
        returnValue = F("Zur Schafwäsche");
        break;
    }
    case 354483:
    {
        returnValue = F("Zur Schalksmühle");
        break;
    }
    case 354484:
    {
        returnValue = F("Zur Schalzmühle");
        break;
    }
    case 354485:
    {
        returnValue = F("Zur Schambach");
        break;
    }
    case 354486:
    {
        returnValue = F("Zur Schanz");
        break;
    }
    case 354487:
    {
        returnValue = F("Zur Schanze");
        break;
    }
    case 354488:
    {
        returnValue = F("Zur Scharfmühle");
        break;
    }
    case 354489:
    {
        returnValue = F("Zur Schaufel");
        break;
    }
    case 354490:
    {
        returnValue = F("Zur Schefflenz");
        break;
    }
    case 354491:
    {
        returnValue = F("Zur Scheib");
        break;
    }
    case 354492:
    {
        returnValue = F("Zur Scheibe");
        break;
    }
    case 354493:
    {
        returnValue = F("Zur Scheidmühle");
        break;
    }
    case 354494:
    {
        returnValue = F("Zur Scheierlmühle");
        break;
    }
    case 354495:
    {
        returnValue = F("Zur Schelle");
        break;
    }
    case 354496:
    {
        returnValue = F("Zur Schellgasse");
        break;
    }
    case 354497:
    {
        returnValue = F("Zur Schellkaul");
        break;
    }
    case 354498:
    {
        returnValue = F("Zur Schemmergrund");
        break;
    }
    case 354499:
    {
        returnValue = F("Zur Schenke");
        break;
    }
    case 354500:
    {
        returnValue = F("Zur Schermicke");
        break;
    }
    case 354501:
    {
        returnValue = F("Zur Scherwiese");
        break;
    }
    case 354502:
    {
        returnValue = F("Zur Scheuerwies");
        break;
    }
    case 354503:
    {
        returnValue = F("Zur Scheune");
        break;
    }
    case 354504:
    {
        returnValue = F("Zur Scheuren");
        break;
    }
    case 354505:
    {
        returnValue = F("Zur Schicht");
        break;
    }
    case 354506:
    {
        returnValue = F("Zur Schiefergrube");
        break;
    }
    case 354507:
    {
        returnValue = F("Zur Schieferkaut");
        break;
    }
    case 354508:
    {
        returnValue = F("Zur Schieferley");
        break;
    }
    case 354509:
    {
        returnValue = F("Zur Schiefermühle");
        break;
    }
    case 354510:
    {
        returnValue = F("Zur Schiere");
        break;
    }
    case 354511:
    {
        returnValue = F("Zur Schießhütte");
        break;
    }
    case 354512:
    {
        returnValue = F("Zur Schießmauer");
        break;
    }
    case 354513:
    {
        returnValue = F("Zur Schießstatt");
        break;
    }
    case 354514:
    {
        returnValue = F("Zur Schiffländi");
        break;
    }
    case 354515:
    {
        returnValue = F("Zur Schiffslände");
        break;
    }
    case 354516:
    {
        returnValue = F("Zur Schiffstede");
        break;
    }
    case 354517:
    {
        returnValue = F("Zur Schilda");
        break;
    }
    case 354518:
    {
        returnValue = F("Zur Schilde");
        break;
    }
    case 354519:
    {
        returnValue = F("Zur Schildwache");
        break;
    }
    case 354520:
    {
        returnValue = F("Zur Schildwacht");
        break;
    }
    case 354521:
    {
        returnValue = F("Zur Schilflache");
        break;
    }
    case 354522:
    {
        returnValue = F("Zur Schilfmatte");
        break;
    }
    case 354523:
    {
        returnValue = F("Zur Schille");
        break;
    }
    case 354524:
    {
        returnValue = F("Zur Schillereiche");
        break;
    }
    case 354525:
    {
        returnValue = F("Zur Schindskuhl");
        break;
    }
    case 354526:
    {
        returnValue = F("Zur Schirmke");
        break;
    }
    case 354527:
    {
        returnValue = F("Zur Schirp");
        break;
    }
    case 354528:
    {
        returnValue = F("Zur Schlacke");
        break;
    }
    case 354529:
    {
        returnValue = F("Zur Schlackenmühle");
        break;
    }
    case 354530:
    {
        returnValue = F("Zur Schlade");
        break;
    }
    case 354531:
    {
        returnValue = F("Zur Schladedell");
        break;
    }
    case 354532:
    {
        returnValue = F("Zur Schlagd");
        break;
    }
    case 354533:
    {
        returnValue = F("Zur Schlage");
        break;
    }
    case 354534:
    {
        returnValue = F("Zur Schlagge");
        break;
    }
    case 354535:
    {
        returnValue = F("Zur Schlagmühle");
        break;
    }
    case 354536:
    {
        returnValue = F("Zur Schlangenau");
        break;
    }
    case 354537:
    {
        returnValue = F("Zur Schleife");
        break;
    }
    case 354538:
    {
        returnValue = F("Zur Schleifmühle");
        break;
    }
    case 354539:
    {
        returnValue = F("Zur Schlemm");
        break;
    }
    case 354540:
    {
        returnValue = F("Zur Schlenke");
        break;
    }
    case 354541:
    {
        returnValue = F("Zur Schlenkhecke");
        break;
    }
    case 354542:
    {
        returnValue = F("Zur Schlerre");
        break;
    }
    case 354543:
    {
        returnValue = F("Zur Schleuse");
        break;
    }
    case 354544:
    {
        returnValue = F("Zur Schlicht");
        break;
    }
    case 354545:
    {
        returnValue = F("Zur Schlimmeich");
        break;
    }
    case 354546:
    {
        returnValue = F("Zur Schlink");
        break;
    }
    case 354547:
    {
        returnValue = F("Zur Schlinke");
        break;
    }
    case 354548:
    {
        returnValue = F("Zur Schlippe");
        break;
    }
    case 354549:
    {
        returnValue = F("Zur Schlossallee");
        break;
    }
    case 354550:
    {
        returnValue = F("Zur Schlossmühle");
        break;
    }
    case 354551:
    {
        returnValue = F("Zur Schlott");
        break;
    }
    case 354552:
    {
        returnValue = F("Zur Schloßfabrik");
        break;
    }
    case 354553:
    {
        returnValue = F("Zur Schloßmauer");
        break;
    }
    case 354554:
    {
        returnValue = F("Zur Schloßmühle");
        break;
    }
    case 354555:
    {
        returnValue = F("Zur Schloßquelle");
        break;
    }
    case 354556:
    {
        returnValue = F("Zur Schloßtränke");
        break;
    }
    case 354557:
    {
        returnValue = F("Zur Schloßwiese");
        break;
    }
    case 354558:
    {
        returnValue = F("Zur Schlucht");
        break;
    }
    case 354559:
    {
        returnValue = F("Zur Schmalburg");
        break;
    }
    case 354560:
    {
        returnValue = F("Zur Schmalen Gehre");
        break;
    }
    case 354561:
    {
        returnValue = F("Zur Schmalen Heide");
        break;
    }
    case 354562:
    {
        returnValue = F("Zur Schmalwiese");
        break;
    }
    case 354563:
    {
        returnValue = F("Zur Schmalzgrube");
        break;
    }
    case 354564:
    {
        returnValue = F("Zur Schmalzwies");
        break;
    }
    case 354565:
    {
        returnValue = F("Zur Schmelz");
        break;
    }
    case 354566:
    {
        returnValue = F("Zur Schmelze");
        break;
    }
    case 354567:
    {
        returnValue = F("Zur Schmiede");
        break;
    }
    case 354568:
    {
        returnValue = F("Zur Schmiedegasse");
        break;
    }
    case 354569:
    {
        returnValue = F("Zur Schmitzwies");
        break;
    }
    case 354570:
    {
        returnValue = F("Zur Schmohlhöhe");
        break;
    }
    case 354571:
    {
        returnValue = F("Zur Schnapphahner Dell");
        break;
    }
    case 354572:
    {
        returnValue = F("Zur Schnau");
        break;
    }
    case 354573:
    {
        returnValue = F("Zur Schnede");
        break;
    }
    case 354574:
    {
        returnValue = F("Zur Schneekaut");
        break;
    }
    case 354575:
    {
        returnValue = F("Zur Schneid");
        break;
    }
    case 354576:
    {
        returnValue = F("Zur Schneidemühle");
        break;
    }
    case 354577:
    {
        returnValue = F("Zur Schnellen Havel");
        break;
    }
    case 354578:
    {
        returnValue = F("Zur Schnellstr.");
        break;
    }
    case 354579:
    {
        returnValue = F("Zur Schnetemicke");
        break;
    }
    case 354580:
    {
        returnValue = F("Zur Schnittenriede");
        break;
    }
    case 354581:
    {
        returnValue = F("Zur Schnuckenheide");
        break;
    }
    case 354582:
    {
        returnValue = F("Zur Schockenkammer");
        break;
    }
    case 354583:
    {
        returnValue = F("Zur Schockenmühle");
        break;
    }
    case 354584:
    {
        returnValue = F("Zur Schoritzer Wiek");
        break;
    }
    case 354585:
    {
        returnValue = F("Zur Schorr");
        break;
    }
    case 354586:
    {
        returnValue = F("Zur Schranke");
        break;
    }
    case 354587:
    {
        returnValue = F("Zur Schraube");
        break;
    }
    case 354588:
    {
        returnValue = F("Zur Schrecke");
        break;
    }
    case 354589:
    {
        returnValue = F("Zur Schule");
        break;
    }
    case 354590:
    {
        returnValue = F("Zur Schulheide");
        break;
    }
    case 354591:
    {
        returnValue = F("Zur Schulkoppel");
        break;
    }
    case 354592:
    {
        returnValue = F("Zur Schulmeisterwiese");
        break;
    }
    case 354593:
    {
        returnValue = F("Zur Schulstr.");
        break;
    }
    case 354594:
    {
        returnValue = F("Zur Schultenwiese");
        break;
    }
    case 354595:
    {
        returnValue = F("Zur Schulwiese");
        break;
    }
    case 354596:
    {
        returnValue = F("Zur Schustermühle");
        break;
    }
    case 354597:
    {
        returnValue = F("Zur Schutenmühle");
        break;
    }
    case 354598:
    {
        returnValue = F("Zur Schutzbrücke");
        break;
    }
    case 354599:
    {
        returnValue = F("Zur Schwabenau");
        break;
    }
    case 354600:
    {
        returnValue = F("Zur Schwafheimer Heide");
        break;
    }
    case 354601:
    {
        returnValue = F("Zur Schwaige");
        break;
    }
    case 354602:
    {
        returnValue = F("Zur Schwale");
        break;
    }
    case 354603:
    {
        returnValue = F("Zur Schwalmau");
        break;
    }
    case 354604:
    {
        returnValue = F("Zur Schwane");
        break;
    }
    case 354605:
    {
        returnValue = F("Zur Schwanenburg");
        break;
    }
    case 354606:
    {
        returnValue = F("Zur Schwanenkirche");
        break;
    }
    case 354607:
    {
        returnValue = F("Zur Schwanenley");
        break;
    }
    case 354608:
    {
        returnValue = F("Zur Schwartau");
        break;
    }
    case 354609:
    {
        returnValue = F("Zur Schwarza Quelle");
        break;
    }
    case 354610:
    {
        returnValue = F("Zur Schwarzbachmündung");
        break;
    }
    case 354611:
    {
        returnValue = F("Zur Schwarzen Brücke");
        break;
    }
    case 354612:
    {
        returnValue = F("Zur Schwarzen Erde");
        break;
    }
    case 354613:
    {
        returnValue = F("Zur Schwarzen Heide");
        break;
    }
    case 354614:
    {
        returnValue = F("Zur Schwarzen Kuhle");
        break;
    }
    case 354615:
    {
        returnValue = F("Zur Schwarzen Muttergottes");
        break;
    }
    case 354616:
    {
        returnValue = F("Zur Schwarzen Mühle");
        break;
    }
    case 354617:
    {
        returnValue = F("Zur Schwarzrinne");
        break;
    }
    case 354618:
    {
        returnValue = F("Zur Schwedeneiche");
        break;
    }
    case 354619:
    {
        returnValue = F("Zur Schwedenhaussiedlung");
        break;
    }
    case 354620:
    {
        returnValue = F("Zur Schwedenschanz");
        break;
    }
    case 354621:
    {
        returnValue = F("Zur Schwedenschanze");
        break;
    }
    case 354622:
    {
        returnValue = F("Zur Schweimecke");
        break;
    }
    case 354623:
    {
        returnValue = F("Zur Schweineweide");
        break;
    }
    case 354624:
    {
        returnValue = F("Zur Schweiz");
        break;
    }
    case 354625:
    {
        returnValue = F("Zur Schweizer Höhe");
        break;
    }
    case 354626:
    {
        returnValue = F("Zur Schwelge");
        break;
    }
    case 354627:
    {
        returnValue = F("Zur Schwelle");
        break;
    }
    case 354628:
    {
        returnValue = F("Zur Schwemm");
        break;
    }
    case 354629:
    {
        returnValue = F("Zur Schwemme");
        break;
    }
    case 354630:
    {
        returnValue = F("Zur Schwentine");
        break;
    }
    case 354631:
    {
        returnValue = F("Zur Schwimmhalle");
        break;
    }
    case 354632:
    {
        returnValue = F("Zur Schwindequelle");
        break;
    }
    case 354633:
    {
        returnValue = F("Zur Schwinge");
        break;
    }
    case 354634:
    {
        returnValue = F("Zur Schwämme");
        break;
    }
    case 354635:
    {
        returnValue = F("Zur Schwärz");
        break;
    }
    case 354636:
    {
        returnValue = F("Zur Schwärze");
        break;
    }
    case 354637:
    {
        returnValue = F("Zur Schäferei");
        break;
    }
    case 354638:
    {
        returnValue = F("Zur Schäfersmühle");
        break;
    }
    case 354639:
    {
        returnValue = F("Zur Schäferswiese");
        break;
    }
    case 354640:
    {
        returnValue = F("Zur Schön");
        break;
    }
    case 354641:
    {
        returnValue = F("Zur Schönbuche");
        break;
    }
    case 354642:
    {
        returnValue = F("Zur Schönen Aussicht");
        break;
    }
    case 354643:
    {
        returnValue = F("Zur Schöpfemühle");
        break;
    }
    case 354644:
    {
        returnValue = F("Zur Schützenhalle");
        break;
    }
    case 354645:
    {
        returnValue = F("Zur Schützenstr.");
        break;
    }
    case 354646:
    {
        returnValue = F("Zur Seckelkünde");
        break;
    }
    case 354647:
    {
        returnValue = F("Zur Seebecke");
        break;
    }
    case 354648:
    {
        returnValue = F("Zur Seebrücke");
        break;
    }
    case 354649:
    {
        returnValue = F("Zur Seeburg");
        break;
    }
    case 354650:
    {
        returnValue = F("Zur Seeidylle");
        break;
    }
    case 354651:
    {
        returnValue = F("Zur Seeklinge");
        break;
    }
    case 354652:
    {
        returnValue = F("Zur Seemich");
        break;
    }
    case 354653:
    {
        returnValue = F("Zur Seemühle");
        break;
    }
    case 354654:
    {
        returnValue = F("Zur Seeplatte");
        break;
    }
    case 354655:
    {
        returnValue = F("Zur Seeschleuse");
        break;
    }
    case 354656:
    {
        returnValue = F("Zur Seetreppe");
        break;
    }
    case 354657:
    {
        returnValue = F("Zur Seewiese");
        break;
    }
    case 354658:
    {
        returnValue = F("Zur Seewisch");
        break;
    }
    case 354659:
    {
        returnValue = F("Zur Sefferhäng");
        break;
    }
    case 354660:
    {
        returnValue = F("Zur Sehlwiese");
        break;
    }
    case 354661:
    {
        returnValue = F("Zur Seige");
        break;
    }
    case 354662:
    {
        returnValue = F("Zur Seilbach");
        break;
    }
    case 354663:
    {
        returnValue = F("Zur Seilbahn");
        break;
    }
    case 354664:
    {
        returnValue = F("Zur Seilfahrt");
        break;
    }
    case 354665:
    {
        returnValue = F("Zur Seilscheibe");
        break;
    }
    case 354666:
    {
        returnValue = F("Zur Seiters");
        break;
    }
    case 354667:
    {
        returnValue = F("Zur Selgenbach");
        break;
    }
    case 354668:
    {
        returnValue = F("Zur Selkeaue");
        break;
    }
    case 354669:
    {
        returnValue = F("Zur Semkenfahrt");
        break;
    }
    case 354670:
    {
        returnValue = F("Zur Senke");
        break;
    }
    case 354671:
    {
        returnValue = F("Zur Sennigshöhe");
        break;
    }
    case 354672:
    {
        returnValue = F("Zur Serr");
        break;
    }
    case 354673:
    {
        returnValue = F("Zur Sette");
        break;
    }
    case 354674:
    {
        returnValue = F("Zur Setze");
        break;
    }
    case 354675:
    {
        returnValue = F("Zur Siechenkirche");
        break;
    }
    case 354676:
    {
        returnValue = F("Zur Siede");
        break;
    }
    case 354677:
    {
        returnValue = F("Zur Siedewurt");
        break;
    }
    case 354678:
    {
        returnValue = F("Zur Siedlung");
        break;
    }
    case 354679:
    {
        returnValue = F("Zur Siedlung Reform");
        break;
    }
    case 354680:
    {
        returnValue = F("Zur Siegaue");
        break;
    }
    case 354681:
    {
        returnValue = F("Zur Siegfähre");
        break;
    }
    case 354682:
    {
        returnValue = F("Zur Siekbachaue");
        break;
    }
    case 354683:
    {
        returnValue = F("Zur Siekwiese");
        break;
    }
    case 354684:
    {
        returnValue = F("Zur Sielwiese");
        break;
    }
    case 354685:
    {
        returnValue = F("Zur Siemerei");
        break;
    }
    case 354686:
    {
        returnValue = F("Zur Sietwende");
        break;
    }
    case 354687:
    {
        returnValue = F("Zur Sigge");
        break;
    }
    case 354688:
    {
        returnValue = F("Zur Signaltanne");
        break;
    }
    case 354689:
    {
        returnValue = F("Zur Silbecke");
        break;
    }
    case 354690:
    {
        returnValue = F("Zur Silberecke");
        break;
    }
    case 354691:
    {
        returnValue = F("Zur Silbereiche");
        break;
    }
    case 354692:
    {
        returnValue = F("Zur Silbergrube");
        break;
    }
    case 354693:
    {
        returnValue = F("Zur Silberhecke");
        break;
    }
    case 354694:
    {
        returnValue = F("Zur Silberkuhle");
        break;
    }
    case 354695:
    {
        returnValue = F("Zur Silbermühle");
        break;
    }
    case 354696:
    {
        returnValue = F("Zur Silberquelle");
        break;
    }
    case 354697:
    {
        returnValue = F("Zur Silberschmelze");
        break;
    }
    case 354698:
    {
        returnValue = F("Zur Silberweide");
        break;
    }
    case 354699:
    {
        returnValue = F("Zur Silberwies");
        break;
    }
    case 354700:
    {
        returnValue = F("Zur Sillenser Brake");
        break;
    }
    case 354701:
    {
        returnValue = F("Zur Skihütte");
        break;
    }
    case 354702:
    {
        returnValue = F("Zur Soeste");
        break;
    }
    case 354703:
    {
        returnValue = F("Zur Solequelle");
        break;
    }
    case 354704:
    {
        returnValue = F("Zur Solge");
        break;
    }
    case 354705:
    {
        returnValue = F("Zur Sommer-Winter-Hohl");
        break;
    }
    case 354706:
    {
        returnValue = F("Zur Sommerau");
        break;
    }
    case 354707:
    {
        returnValue = F("Zur Sommerhälde");
        break;
    }
    case 354708:
    {
        returnValue = F("Zur Sommerlust");
        break;
    }
    case 354709:
    {
        returnValue = F("Zur Sommerseite");
        break;
    }
    case 354710:
    {
        returnValue = F("Zur Sommersmühle");
        break;
    }
    case 354711:
    {
        returnValue = F("Zur Sonne");
        break;
    }
    case 354712:
    {
        returnValue = F("Zur Sonnenau");
        break;
    }
    case 354713:
    {
        returnValue = F("Zur Sonnenblume");
        break;
    }
    case 354714:
    {
        returnValue = F("Zur Sonnenburg");
        break;
    }
    case 354715:
    {
        returnValue = F("Zur Sonnenhöhe");
        break;
    }
    case 354716:
    {
        returnValue = F("Zur Sonnenleite");
        break;
    }
    case 354717:
    {
        returnValue = F("Zur Sonnenseite");
        break;
    }
    case 354718:
    {
        returnValue = F("Zur Sonnenuhr");
        break;
    }
    case 354719:
    {
        returnValue = F("Zur Sonnenwiese");
        break;
    }
    case 354720:
    {
        returnValue = F("Zur Sonnleiten");
        break;
    }
    case 354721:
    {
        returnValue = F("Zur Sophienhöhe");
        break;
    }
    case 354722:
    {
        returnValue = F("Zur Sparensheide");
        break;
    }
    case 354723:
    {
        returnValue = F("Zur Specke");
        break;
    }
    case 354724:
    {
        returnValue = F("Zur Speiche");
        break;
    }
    case 354725:
    {
        returnValue = F("Zur Speile");
        break;
    }
    case 354726:
    {
        returnValue = F("Zur Sperrmauer");
        break;
    }
    case 354727:
    {
        returnValue = F("Zur Sperrschleuse");
        break;
    }
    case 354728:
    {
        returnValue = F("Zur Spessarthütte");
        break;
    }
    case 354729:
    {
        returnValue = F("Zur Spetze");
        break;
    }
    case 354730:
    {
        returnValue = F("Zur Spicherer Str.");
        break;
    }
    case 354731:
    {
        returnValue = F("Zur Spicke");
        break;
    }
    case 354732:
    {
        returnValue = F("Zur Spieckerswiese");
        break;
    }
    case 354733:
    {
        returnValue = F("Zur Spiegelglasfabrik");
        break;
    }
    case 354734:
    {
        returnValue = F("Zur Spieleick");
        break;
    }
    case 354735:
    {
        returnValue = F("Zur Spielwiese");
        break;
    }
    case 354736:
    {
        returnValue = F("Zur Spinnbahn");
        break;
    }
    case 354737:
    {
        returnValue = F("Zur Spinne");
        break;
    }
    case 354738:
    {
        returnValue = F("Zur Spinnerei");
        break;
    }
    case 354739:
    {
        returnValue = F("Zur Spitalöd");
        break;
    }
    case 354740:
    {
        returnValue = F("Zur Spitze");
        break;
    }
    case 354741:
    {
        returnValue = F("Zur Spitzeich");
        break;
    }
    case 354742:
    {
        returnValue = F("Zur Spitzenkapelle");
        break;
    }
    case 354743:
    {
        returnValue = F("Zur Sporthalle");
        break;
    }
    case 354744:
    {
        returnValue = F("Zur Sportinsel");
        break;
    }
    case 354745:
    {
        returnValue = F("Zur Sportwiese");
        break;
    }
    case 354746:
    {
        returnValue = F("Zur Sprang");
        break;
    }
    case 354747:
    {
        returnValue = F("Zur Spredaer Mühle");
        break;
    }
    case 354748:
    {
        returnValue = F("Zur Spreeaue");
        break;
    }
    case 354749:
    {
        returnValue = F("Zur Springe");
        break;
    }
    case 354750:
    {
        returnValue = F("Zur Springröhre");
        break;
    }
    case 354751:
    {
        returnValue = F("Zur Spritz");
        break;
    }
    case 354752:
    {
        returnValue = F("Zur Sprotte");
        break;
    }
    case 354753:
    {
        returnValue = F("Zur St. Georg-Kapelle");
        break;
    }
    case 354754:
    {
        returnValue = F("Zur Staatsforst");
        break;
    }
    case 354755:
    {
        returnValue = F("Zur Stadtbahn");
        break;
    }
    case 354756:
    {
        returnValue = F("Zur Stadtgärtnerei");
        break;
    }
    case 354757:
    {
        returnValue = F("Zur Stadtmauer");
        break;
    }
    case 354758:
    {
        returnValue = F("Zur Stadtwaage");
        break;
    }
    case 354759:
    {
        returnValue = F("Zur Stahlgasse");
        break;
    }
    case 354760:
    {
        returnValue = F("Zur Stampfmühle");
        break;
    }
    case 354761:
    {
        returnValue = F("Zur Startbahn");
        break;
    }
    case 354762:
    {
        returnValue = F("Zur Statt");
        break;
    }
    case 354763:
    {
        returnValue = F("Zur Staubkequelle");
        break;
    }
    case 354764:
    {
        returnValue = F("Zur Staustufe");
        break;
    }
    case 354765:
    {
        returnValue = F("Zur Steckwies");
        break;
    }
    case 354766:
    {
        returnValue = F("Zur Stedtenmühle");
        break;
    }
    case 354767:
    {
        returnValue = F("Zur Steete");
        break;
    }
    case 354768:
    {
        returnValue = F("Zur Stege");
        break;
    }
    case 354769:
    {
        returnValue = F("Zur Stegge");
        break;
    }
    case 354770:
    {
        returnValue = F("Zur Steig");
        break;
    }
    case 354771:
    {
        returnValue = F("Zur Steige");
        break;
    }
    case 354772:
    {
        returnValue = F("Zur Steilküste");
        break;
    }
    case 354773:
    {
        returnValue = F("Zur Steinagger");
        break;
    }
    case 354774:
    {
        returnValue = F("Zur Steinballe");
        break;
    }
    case 354775:
    {
        returnValue = F("Zur Steinbank");
        break;
    }
    case 354776:
    {
        returnValue = F("Zur Steinbeck");
        break;
    }
    case 354777:
    {
        returnValue = F("Zur Steinbell");
        break;
    }
    case 354778:
    {
        returnValue = F("Zur Steinbreche");
        break;
    }
    case 354779:
    {
        returnValue = F("Zur Steinbrechen");
        break;
    }
    case 354780:
    {
        returnValue = F("Zur Steinbreede");
        break;
    }
    case 354781:
    {
        returnValue = F("Zur Steinbreite");
        break;
    }
    case 354782:
    {
        returnValue = F("Zur Steinbrücke");
        break;
    }
    case 354783:
    {
        returnValue = F("Zur Steinbäck");
        break;
    }
    case 354784:
    {
        returnValue = F("Zur Steinebreche");
        break;
    }
    case 354785:
    {
        returnValue = F("Zur Steinermühle");
        break;
    }
    case 354786:
    {
        returnValue = F("Zur Steinfirst");
        break;
    }
    case 354787:
    {
        returnValue = F("Zur Steinfurt");
        break;
    }
    case 354788:
    {
        returnValue = F("Zur Steingrube");
        break;
    }
    case 354789:
    {
        returnValue = F("Zur Steinhardt");
        break;
    }
    case 354790:
    {
        returnValue = F("Zur Steinhecke");
        break;
    }
    case 354791:
    {
        returnValue = F("Zur Steinheide");
        break;
    }
    case 354792:
    {
        returnValue = F("Zur Steinhelle");
        break;
    }
    case 354793:
    {
        returnValue = F("Zur Steinhöhe");
        break;
    }
    case 354794:
    {
        returnValue = F("Zur Steinigheck");
        break;
    }
    case 354795:
    {
        returnValue = F("Zur Steinkaul");
        break;
    }
    case 354796:
    {
        returnValue = F("Zur Steinkaut");
        break;
    }
    case 354797:
    {
        returnValue = F("Zur Steinkaute");
        break;
    }
    case 354798:
    {
        returnValue = F("Zur Steinkiste");
        break;
    }
    case 354799:
    {
        returnValue = F("Zur Steinkuhle");
        break;
    }
    case 354800:
    {
        returnValue = F("Zur Steinlegge");
        break;
    }
    case 354801:
    {
        returnValue = F("Zur Steinleite");
        break;
    }
    case 354802:
    {
        returnValue = F("Zur Steinmauer");
        break;
    }
    case 354803:
    {
        returnValue = F("Zur Steinmühle");
        break;
    }
    case 354804:
    {
        returnValue = F("Zur Steinplatte");
        break;
    }
    case 354805:
    {
        returnValue = F("Zur Steinpuppe");
        break;
    }
    case 354806:
    {
        returnValue = F("Zur Steinrausche");
        break;
    }
    case 354807:
    {
        returnValue = F("Zur Steinriede");
        break;
    }
    case 354808:
    {
        returnValue = F("Zur Steinritz");
        break;
    }
    case 354809:
    {
        returnValue = F("Zur Steinsburg");
        break;
    }
    case 354810:
    {
        returnValue = F("Zur Steinschneiderin");
        break;
    }
    case 354811:
    {
        returnValue = F("Zur Steinwand");
        break;
    }
    case 354812:
    {
        returnValue = F("Zur Steinwelle");
        break;
    }
    case 354813:
    {
        returnValue = F("Zur Steinwäsche");
        break;
    }
    case 354814:
    {
        returnValue = F("Zur Steinzeit");
        break;
    }
    case 354815:
    {
        returnValue = F("Zur Stephansbitze");
        break;
    }
    case 354816:
    {
        returnValue = F("Zur Sternisch");
        break;
    }
    case 354817:
    {
        returnValue = F("Zur Sternkoppel");
        break;
    }
    case 354818:
    {
        returnValue = F("Zur Sternquell");
        break;
    }
    case 354819:
    {
        returnValue = F("Zur Sternschanze");
        break;
    }
    case 354820:
    {
        returnValue = F("Zur Sternwarte");
        break;
    }
    case 354821:
    {
        returnValue = F("Zur Stettenburg");
        break;
    }
    case 354822:
    {
        returnValue = F("Zur Stichl");
        break;
    }
    case 354823:
    {
        returnValue = F("Zur Stiefelhöhe");
        break;
    }
    case 354824:
    {
        returnValue = F("Zur Stiege");
        break;
    }
    case 354825:
    {
        returnValue = F("Zur Stiegl");
        break;
    }
    case 354826:
    {
        returnValue = F("Zur Stiftseiche");
        break;
    }
    case 354827:
    {
        returnValue = F("Zur Stocka-Tanne");
        break;
    }
    case 354828:
    {
        returnValue = F("Zur Stockert");
        break;
    }
    case 354829:
    {
        returnValue = F("Zur Stockwiese");
        break;
    }
    case 354830:
    {
        returnValue = F("Zur Stollenhalde");
        break;
    }
    case 354831:
    {
        returnValue = F("Zur Stoppelkuppe");
        break;
    }
    case 354832:
    {
        returnValue = F("Zur Storchengasse");
        break;
    }
    case 354833:
    {
        returnValue = F("Zur Storchenwiese");
        break;
    }
    case 354834:
    {
        returnValue = F("Zur Storchskuhle");
        break;
    }
    case 354835:
    {
        returnValue = F("Zur Storcker Hütte");
        break;
    }
    case 354836:
    {
        returnValue = F("Zur Str. Klippe");
        break;
    }
    case 354837:
    {
        returnValue = F("Zur Str.nmeisterei");
        break;
    }
    case 354838:
    {
        returnValue = F("Zur Strachau");
        break;
    }
    case 354839:
    {
        returnValue = F("Zur Strandpromenade");
        break;
    }
    case 354840:
    {
        returnValue = F("Zur Streitheide");
        break;
    }
    case 354841:
    {
        returnValue = F("Zur Streuobstwiese");
        break;
    }
    case 354842:
    {
        returnValue = F("Zur Striegisquelle");
        break;
    }
    case 354843:
    {
        returnValue = F("Zur Strud");
        break;
    }
    case 354844:
    {
        returnValue = F("Zur Stuckwiese");
        break;
    }
    case 354845:
    {
        returnValue = F("Zur Stumpfen Eiche");
        break;
    }
    case 354846:
    {
        returnValue = F("Zur Stuwicke");
        break;
    }
    case 354847:
    {
        returnValue = F("Zur Stätte");
        break;
    }
    case 354848:
    {
        returnValue = F("Zur Stöpe");
        break;
    }
    case 354849:
    {
        returnValue = F("Zur Stör");
        break;
    }
    case 354850:
    {
        returnValue = F("Zur Stützmühle");
        break;
    }
    case 354851:
    {
        returnValue = F("Zur Sude");
        break;
    }
    case 354852:
    {
        returnValue = F("Zur Sudwiese");
        break;
    }
    case 354853:
    {
        returnValue = F("Zur Sulz");
        break;
    }
    case 354854:
    {
        returnValue = F("Zur Sunder");
        break;
    }
    case 354855:
    {
        returnValue = F("Zur Sunderburg");
        break;
    }
    case 354856:
    {
        returnValue = F("Zur Synagoge");
        break;
    }
    case 354857:
    {
        returnValue = F("Zur Säge");
        break;
    }
    case 354858:
    {
        returnValue = F("Zur Sägemühle");
        break;
    }
    case 354859:
    {
        returnValue = F("Zur Sägmühle");
        break;
    }
    case 354860:
    {
        returnValue = F("Zur Sälzerschule");
        break;
    }
    case 354861:
    {
        returnValue = F("Zur Sängerlinde");
        break;
    }
    case 354862:
    {
        returnValue = F("Zur Sängerwiese");
        break;
    }
    case 354863:
    {
        returnValue = F("Zur Süderwaterlöse");
        break;
    }
    case 354864:
    {
        returnValue = F("Zur Südschleife");
        break;
    }
    case 354865:
    {
        returnValue = F("Zur Südsee");
        break;
    }
    case 354866:
    {
        returnValue = F("Zur Sülz");
        break;
    }
    case 354867:
    {
        returnValue = F("Zur Süntelbuche");
        break;
    }
    case 354868:
    {
        returnValue = F("Zur Tafel");
        break;
    }
    case 354869:
    {
        returnValue = F("Zur Taldelle");
        break;
    }
    case 354870:
    {
        returnValue = F("Zur Talmühle");
        break;
    }
    case 354871:
    {
        returnValue = F("Zur Talsperre");
        break;
    }
    case 354872:
    {
        returnValue = F("Zur Talstr.");
        break;
    }
    case 354873:
    {
        returnValue = F("Zur Talwiese");
        break;
    }
    case 354874:
    {
        returnValue = F("Zur Tann");
        break;
    }
    case 354875:
    {
        returnValue = F("Zur Tanne");
        break;
    }
    case 354876:
    {
        returnValue = F("Zur Tannenburg");
        break;
    }
    case 354877:
    {
        returnValue = F("Zur Tannmühle");
        break;
    }
    case 354878:
    {
        returnValue = F("Zur Tanzlinde");
        break;
    }
    case 354879:
    {
        returnValue = F("Zur Taschengrube");
        break;
    }
    case 354880:
    {
        returnValue = F("Zur Taubaldsmühle");
        break;
    }
    case 354881:
    {
        returnValue = F("Zur Taubenbreite");
        break;
    }
    case 354882:
    {
        returnValue = F("Zur Taubenecke");
        break;
    }
    case 354883:
    {
        returnValue = F("Zur Taubenstr.");
        break;
    }
    case 354884:
    {
        returnValue = F("Zur Tauberquelle");
        break;
    }
    case 354885:
    {
        returnValue = F("Zur Technik");
        break;
    }
    case 354886:
    {
        returnValue = F("Zur Teebkerei");
        break;
    }
    case 354887:
    {
        returnValue = F("Zur Teichmühle");
        break;
    }
    case 354888:
    {
        returnValue = F("Zur Teichstr.");
        break;
    }
    case 354889:
    {
        returnValue = F("Zur Teichwiese");
        break;
    }
    case 354890:
    {
        returnValue = F("Zur Telke");
        break;
    }
    case 354891:
    {
        returnValue = F("Zur Tennisanlage");
        break;
    }
    case 354892:
    {
        returnValue = F("Zur Tettelwarte");
        break;
    }
    case 354893:
    {
        returnValue = F("Zur Teufelsschlucht");
        break;
    }
    case 354894:
    {
        returnValue = F("Zur Thalmühle");
        break;
    }
    case 354895:
    {
        returnValue = F("Zur Theateraula");
        break;
    }
    case 354896:
    {
        returnValue = F("Zur Therme");
        break;
    }
    case 354897:
    {
        returnValue = F("Zur Thingstätte");
        break;
    }
    case 354898:
    {
        returnValue = F("Zur Thomas-Müntzer-Siedlung");
        break;
    }
    case 354899:
    {
        returnValue = F("Zur Thomaslinde");
        break;
    }
    case 354900:
    {
        returnValue = F("Zur Tiefen Fuhr");
        break;
    }
    case 354901:
    {
        returnValue = F("Zur Tiefen Str.");
        break;
    }
    case 354902:
    {
        returnValue = F("Zur Tiefen Wiese");
        break;
    }
    case 354903:
    {
        returnValue = F("Zur Tiefenbach");
        break;
    }
    case 354904:
    {
        returnValue = F("Zur Tiefenriede");
        break;
    }
    case 354905:
    {
        returnValue = F("Zur Tiefgasse");
        break;
    }
    case 354906:
    {
        returnValue = F("Zur Tiefmatte");
        break;
    }
    case 354907:
    {
        returnValue = F("Zur Tielenau");
        break;
    }
    case 354908:
    {
        returnValue = F("Zur Tiene");
        break;
    }
    case 354909:
    {
        returnValue = F("Zur Tietzowsiedlung");
        break;
    }
    case 354910:
    {
        returnValue = F("Zur Tigge");
        break;
    }
    case 354911:
    {
        returnValue = F("Zur Tintenmühle");
        break;
    }
    case 354912:
    {
        returnValue = F("Zur Tischbrücke");
        break;
    }
    case 354913:
    {
        returnValue = F("Zur Tiwecke");
        break;
    }
    case 354914:
    {
        returnValue = F("Zur Toft");
        break;
    }
    case 354915:
    {
        returnValue = F("Zur Tollmaid");
        break;
    }
    case 354916:
    {
        returnValue = F("Zur Tomberger Mühle");
        break;
    }
    case 354917:
    {
        returnValue = F("Zur Tomburg");
        break;
    }
    case 354918:
    {
        returnValue = F("Zur Ton Weide");
        break;
    }
    case 354919:
    {
        returnValue = F("Zur Tongrube");
        break;
    }
    case 354920:
    {
        returnValue = F("Zur Tonkuhle");
        break;
    }
    case 354921:
    {
        returnValue = F("Zur Tonne");
        break;
    }
    case 354922:
    {
        returnValue = F("Zur Torfgrube");
        break;
    }
    case 354923:
    {
        returnValue = F("Zur Torgasse");
        break;
    }
    case 354924:
    {
        returnValue = F("Zur Torkel");
        break;
    }
    case 354925:
    {
        returnValue = F("Zur Trad");
        break;
    }
    case 354926:
    {
        returnValue = F("Zur Trahe");
        break;
    }
    case 354927:
    {
        returnValue = F("Zur Traktorenwerkstatt");
        break;
    }
    case 354928:
    {
        returnValue = F("Zur Tratt");
        break;
    }
    case 354929:
    {
        returnValue = F("Zur Traubenmühle");
        break;
    }
    case 354930:
    {
        returnValue = F("Zur Trave");
        break;
    }
    case 354931:
    {
        returnValue = F("Zur Treene");
        break;
    }
    case 354932:
    {
        returnValue = F("Zur Treeneschleife");
        break;
    }
    case 354933:
    {
        returnValue = F("Zur Treibe");
        break;
    }
    case 354934:
    {
        returnValue = F("Zur Treise");
        break;
    }
    case 354935:
    {
        returnValue = F("Zur Treppe");
        break;
    }
    case 354936:
    {
        returnValue = F("Zur Treu");
        break;
    }
    case 354937:
    {
        returnValue = F("Zur Trifft");
        break;
    }
    case 354938:
    {
        returnValue = F("Zur Trift");
        break;
    }
    case 354939:
    {
        returnValue = F("Zur Tropfenwiese");
        break;
    }
    case 354940:
    {
        returnValue = F("Zur Trotzburg");
        break;
    }
    case 354941:
    {
        returnValue = F("Zur Träf");
        break;
    }
    case 354942:
    {
        returnValue = F("Zur Tränke");
        break;
    }
    case 354943:
    {
        returnValue = F("Zur Trüsche");
        break;
    }
    case 354944:
    {
        returnValue = F("Zur Tuchbleiche");
        break;
    }
    case 354945:
    {
        returnValue = F("Zur Turbine");
        break;
    }
    case 354946:
    {
        returnValue = F("Zur Turnhalle");
        break;
    }
    case 354947:
    {
        returnValue = F("Zur Tweete");
        break;
    }
    case 354948:
    {
        returnValue = F("Zur Töpferei");
        break;
    }
    case 354949:
    {
        returnValue = F("Zur Töte");
        break;
    }
    case 354950:
    {
        returnValue = F("Zur Tütenburg");
        break;
    }
    case 354951:
    {
        returnValue = F("Zur Uecker");
        break;
    }
    case 354952:
    {
        returnValue = F("Zur Uferaue");
        break;
    }
    case 354953:
    {
        returnValue = F("Zur Uhlandstr.");
        break;
    }
    case 354954:
    {
        returnValue = F("Zur Uhleck");
        break;
    }
    case 354955:
    {
        returnValue = F("Zur Uhlenburg");
        break;
    }
    case 354956:
    {
        returnValue = F("Zur Ulbarger Weide");
        break;
    }
    case 354957:
    {
        returnValue = F("Zur Ulme");
        break;
    }
    case 354958:
    {
        returnValue = F("Zur Ulmenstr.");
        break;
    }
    case 354959:
    {
        returnValue = F("Zur Ulrichskapelle");
        break;
    }
    case 354960:
    {
        returnValue = F("Zur Umgehungsstr.");
        break;
    }
    case 354961:
    {
        returnValue = F("Zur Umkehr");
        break;
    }
    case 354962:
    {
        returnValue = F("Zur Umspannanlage");
        break;
    }
    case 354963:
    {
        returnValue = F("Zur Unk");
        break;
    }
    case 354964:
    {
        returnValue = F("Zur Unner");
        break;
    }
    case 354965:
    {
        returnValue = F("Zur Unstrut");
        break;
    }
    case 354966:
    {
        returnValue = F("Zur Unteren Alp");
        break;
    }
    case 354967:
    {
        returnValue = F("Zur Unteren Leite");
        break;
    }
    case 354968:
    {
        returnValue = F("Zur Unteren Mühle");
        break;
    }
    case 354969:
    {
        returnValue = F("Zur Unteren Reuth");
        break;
    }
    case 354970:
    {
        returnValue = F("Zur Unterführung");
        break;
    }
    case 354971:
    {
        returnValue = F("Zur Unterhöh");
        break;
    }
    case 354972:
    {
        returnValue = F("Zur Untermühle");
        break;
    }
    case 354973:
    {
        returnValue = F("Zur Unterst Mühl");
        break;
    }
    case 354974:
    {
        returnValue = F("Zur Untken");
        break;
    }
    case 354975:
    {
        returnValue = F("Zur Urff");
        break;
    }
    case 354976:
    {
        returnValue = F("Zur Urselsbach");
        break;
    }
    case 354977:
    {
        returnValue = F("Zur Uwe Düne");
        break;
    }
    case 354978:
    {
        returnValue = F("Zur Vechte");
        break;
    }
    case 354979:
    {
        returnValue = F("Zur Vegesacker Fähre");
        break;
    }
    case 354980:
    {
        returnValue = F("Zur Veitskapelle");
        break;
    }
    case 354981:
    {
        returnValue = F("Zur Veitsmühle");
        break;
    }
    case 354982:
    {
        returnValue = F("Zur Veltheimer Fähre");
        break;
    }
    case 354983:
    {
        returnValue = F("Zur Verlach");
        break;
    }
    case 354984:
    {
        returnValue = F("Zur Verschönerung");
        break;
    }
    case 354985:
    {
        returnValue = F("Zur Via Belgica");
        break;
    }
    case 354986:
    {
        returnValue = F("Zur Viehweide");
        break;
    }
    case 354987:
    {
        returnValue = F("Zur Viktorwiese");
        break;
    }
    case 354988:
    {
        returnValue = F("Zur Villa");
        break;
    }
    case 354989:
    {
        returnValue = F("Zur Villa Rothenburg");
        break;
    }
    case 354990:
    {
        returnValue = F("Zur Villa Rustica");
        break;
    }
    case 354991:
    {
        returnValue = F("Zur Ville");
        break;
    }
    case 354992:
    {
        returnValue = F("Zur Vilsenheide");
        break;
    }
    case 354993:
    {
        returnValue = F("Zur Vilsquelle");
        break;
    }
    case 354994:
    {
        returnValue = F("Zur Vincentmühle");
        break;
    }
    case 354995:
    {
        returnValue = F("Zur Vitico");
        break;
    }
    case 354996:
    {
        returnValue = F("Zur Vituskapelle");
        break;
    }
    case 354997:
    {
        returnValue = F("Zur Vogelaue");
        break;
    }
    case 354998:
    {
        returnValue = F("Zur Vogelbeere");
        break;
    }
    case 354999:
    {
        returnValue = F("Zur Vogelhecke");
        break;
    }
    case 355000:
    {
        returnValue = F("Zur Vogelrute");
        break;
    }
    case 355001:
    {
        returnValue = F("Zur Vogelruthe");
        break;
    }
    case 355002:
    {
        returnValue = F("Zur Vogelsburg");
        break;
    }
    case 355003:
    {
        returnValue = F("Zur Vogelschar");
        break;
    }
    case 355004:
    {
        returnValue = F("Zur Vogelsheck");
        break;
    }
    case 355005:
    {
        returnValue = F("Zur Vogelsmühle");
        break;
    }
    case 355006:
    {
        returnValue = F("Zur Vogelsrute");
        break;
    }
    case 355007:
    {
        returnValue = F("Zur Vogelstange");
        break;
    }
    case 355008:
    {
        returnValue = F("Zur Vogelwarte");
        break;
    }
    case 355009:
    {
        returnValue = F("Zur Vogelwiese");
        break;
    }
    case 355010:
    {
        returnValue = F("Zur Vogtmühle");
        break;
    }
    case 355011:
    {
        returnValue = F("Zur Voigtsmühle");
        break;
    }
    case 355012:
    {
        returnValue = F("Zur Volkach");
        break;
    }
    case 355013:
    {
        returnValue = F("Zur Vollmühle");
        break;
    }
    case 355014:
    {
        returnValue = F("Zur Vorburg");
        break;
    }
    case 355015:
    {
        returnValue = F("Zur Vorheck");
        break;
    }
    case 355016:
    {
        returnValue = F("Zur Vorstadt");
        break;
    }
    case 355017:
    {
        returnValue = F("Zur Vorstatt");
        break;
    }
    case 355018:
    {
        returnValue = F("Zur Voßbrake");
        break;
    }
    case 355019:
    {
        returnValue = F("Zur Voßkuhle");
        break;
    }
    case 355020:
    {
        returnValue = F("Zur Vreed");
        break;
    }
    case 355021:
    {
        returnValue = F("Zur Waage");
        break;
    }
    case 355022:
    {
        returnValue = F("Zur Wabe");
        break;
    }
    case 355023:
    {
        returnValue = F("Zur Wach");
        break;
    }
    case 355024:
    {
        returnValue = F("Zur Wache");
        break;
    }
    case 355025:
    {
        returnValue = F("Zur Wacholderheide");
        break;
    }
    case 355026:
    {
        returnValue = F("Zur Wacht");
        break;
    }
    case 355027:
    {
        returnValue = F("Zur Wackelbrücke");
        break;
    }
    case 355028:
    {
        returnValue = F("Zur Wackenmühle");
        break;
    }
    case 355029:
    {
        returnValue = F("Zur Wagenremise");
        break;
    }
    case 355030:
    {
        returnValue = F("Zur Wagensaß");
        break;
    }
    case 355031:
    {
        returnValue = F("Zur Wagensonn");
        break;
    }
    case 355032:
    {
        returnValue = F("Zur Wahlert");
        break;
    }
    case 355033:
    {
        returnValue = F("Zur Wahr");
        break;
    }
    case 355034:
    {
        returnValue = F("Zur Waidmühle");
        break;
    }
    case 355035:
    {
        returnValue = F("Zur Waist");
        break;
    }
    case 355036:
    {
        returnValue = F("Zur Waldau");
        break;
    }
    case 355037:
    {
        returnValue = F("Zur Waldbahn");
        break;
    }
    case 355038:
    {
        returnValue = F("Zur Waldburg");
        break;
    }
    case 355039:
    {
        returnValue = F("Zur Waldbühne");
        break;
    }
    case 355040:
    {
        returnValue = F("Zur Waldecke");
        break;
    }
    case 355041:
    {
        returnValue = F("Zur Waldenau");
        break;
    }
    case 355042:
    {
        returnValue = F("Zur Waldesruh");
        break;
    }
    case 355043:
    {
        returnValue = F("Zur Waldesruhe");
        break;
    }
    case 355044:
    {
        returnValue = F("Zur Waldesstille");
        break;
    }
    case 355045:
    {
        returnValue = F("Zur Waldflur");
        break;
    }
    case 355046:
    {
        returnValue = F("Zur Waldheide");
        break;
    }
    case 355047:
    {
        returnValue = F("Zur Waldhohl");
        break;
    }
    case 355048:
    {
        returnValue = F("Zur Waldkampfbahn");
        break;
    }
    case 355049:
    {
        returnValue = F("Zur Waldkapelle");
        break;
    }
    case 355050:
    {
        returnValue = F("Zur Waldkirche");
        break;
    }
    case 355051:
    {
        returnValue = F("Zur Waldpromenade");
        break;
    }
    case 355052:
    {
        returnValue = F("Zur Waldrast");
        break;
    }
    case 355053:
    {
        returnValue = F("Zur Waldschmiede");
        break;
    }
    case 355054:
    {
        returnValue = F("Zur Waldschänke");
        break;
    }
    case 355055:
    {
        returnValue = F("Zur Waldsiedlung");
        break;
    }
    case 355056:
    {
        returnValue = F("Zur Waldspitze");
        break;
    }
    case 355057:
    {
        returnValue = F("Zur Waldstr.");
        break;
    }
    case 355058:
    {
        returnValue = F("Zur Waldtreppe");
        break;
    }
    case 355059:
    {
        returnValue = F("Zur Waldwiese");
        break;
    }
    case 355060:
    {
        returnValue = F("Zur Waldzeche");
        break;
    }
    case 355061:
    {
        returnValue = F("Zur Walkenmühle");
        break;
    }
    case 355062:
    {
        returnValue = F("Zur Walkmühle");
        break;
    }
    case 355063:
    {
        returnValue = F("Zur Wallbrede");
        break;
    }
    case 355064:
    {
        returnValue = F("Zur Wallerwarte");
        break;
    }
    case 355065:
    {
        returnValue = F("Zur Wallfahrtskapelle");
        break;
    }
    case 355066:
    {
        returnValue = F("Zur Wallfahrtskirche");
        break;
    }
    case 355067:
    {
        returnValue = F("Zur Wallhecke");
        break;
    }
    case 355068:
    {
        returnValue = F("Zur Wallmauer");
        break;
    }
    case 355069:
    {
        returnValue = F("Zur Wallstroot");
        break;
    }
    case 355070:
    {
        returnValue = F("Zur Walzenmühle");
        break;
    }
    case 355071:
    {
        returnValue = F("Zur Wanderhütte");
        break;
    }
    case 355072:
    {
        returnValue = F("Zur Wanderreitstation");
        break;
    }
    case 355073:
    {
        returnValue = F("Zur Wandsbeck");
        break;
    }
    case 355074:
    {
        returnValue = F("Zur Wann");
        break;
    }
    case 355075:
    {
        returnValue = F("Zur Wanne");
        break;
    }
    case 355076:
    {
        returnValue = F("Zur Wapel");
        break;
    }
    case 355077:
    {
        returnValue = F("Zur Wappenschmiede");
        break;
    }
    case 355078:
    {
        returnValue = F("Zur Warmloge");
        break;
    }
    case 355079:
    {
        returnValue = F("Zur Warndtwiese");
        break;
    }
    case 355080:
    {
        returnValue = F("Zur Warnow");
        break;
    }
    case 355081:
    {
        returnValue = F("Zur Wart");
        break;
    }
    case 355082:
    {
        returnValue = F("Zur Warte");
        break;
    }
    case 355083:
    {
        returnValue = F("Zur Warthburg");
        break;
    }
    case 355084:
    {
        returnValue = F("Zur Warthe");
        break;
    }
    case 355085:
    {
        returnValue = F("Zur Wasch");
        break;
    }
    case 355086:
    {
        returnValue = F("Zur Wasenmühle");
        break;
    }
    case 355087:
    {
        returnValue = F("Zur Wassemühle");
        break;
    }
    case 355088:
    {
        returnValue = F("Zur Wasserburg");
        break;
    }
    case 355089:
    {
        returnValue = F("Zur Wasserfuhr");
        break;
    }
    case 355090:
    {
        returnValue = F("Zur Wasserfurche");
        break;
    }
    case 355091:
    {
        returnValue = F("Zur Wasserleitung");
        break;
    }
    case 355092:
    {
        returnValue = F("Zur Wasserlöse");
        break;
    }
    case 355093:
    {
        returnValue = F("Zur Wassermühle");
        break;
    }
    case 355094:
    {
        returnValue = F("Zur Wasserquelle");
        break;
    }
    case 355095:
    {
        returnValue = F("Zur Wasserreserve");
        break;
    }
    case 355096:
    {
        returnValue = F("Zur Wasserscheide");
        break;
    }
    case 355097:
    {
        returnValue = F("Zur Wasserschöppe");
        break;
    }
    case 355098:
    {
        returnValue = F("Zur Wasserstadt");
        break;
    }
    case 355099:
    {
        returnValue = F("Zur Waterfuhr");
        break;
    }
    case 355100:
    {
        returnValue = F("Zur Waur");
        break;
    }
    case 355101:
    {
        returnValue = F("Zur Weberei");
        break;
    }
    case 355102:
    {
        returnValue = F("Zur Wechmarer Hütte");
        break;
    }
    case 355103:
    {
        returnValue = F("Zur Wedderling");
        break;
    }
    case 355104:
    {
        returnValue = F("Zur Weding");
        break;
    }
    case 355105:
    {
        returnValue = F("Zur Wegscheide");
        break;
    }
    case 355106:
    {
        returnValue = F("Zur Wegschere");
        break;
    }
    case 355107:
    {
        returnValue = F("Zur Wehme");
        break;
    }
    case 355108:
    {
        returnValue = F("Zur Wehrheck");
        break;
    }
    case 355109:
    {
        returnValue = F("Zur Wehrholzseite");
        break;
    }
    case 355110:
    {
        returnValue = F("Zur Wehrkirche");
        break;
    }
    case 355111:
    {
        returnValue = F("Zur Wehrstroot");
        break;
    }
    case 355112:
    {
        returnValue = F("Zur Wehrwiese");
        break;
    }
    case 355113:
    {
        returnValue = F("Zur Weide");
        break;
    }
    case 355114:
    {
        returnValue = F("Zur Weidelache");
        break;
    }
    case 355115:
    {
        returnValue = F("Zur Weidenheck");
        break;
    }
    case 355116:
    {
        returnValue = F("Zur Weidenschule");
        break;
    }
    case 355117:
    {
        returnValue = F("Zur Weiherhalde");
        break;
    }
    case 355118:
    {
        returnValue = F("Zur Weihersenke");
        break;
    }
    case 355119:
    {
        returnValue = F("Zur Weiherwies");
        break;
    }
    case 355120:
    {
        returnValue = F("Zur Weiherwiese");
        break;
    }
    case 355121:
    {
        returnValue = F("Zur Weihwiese");
        break;
    }
    case 355122:
    {
        returnValue = F("Zur Weilersiedlung");
        break;
    }
    case 355123:
    {
        returnValue = F("Zur Weinbergmühle");
        break;
    }
    case 355124:
    {
        returnValue = F("Zur Weinhalde");
        break;
    }
    case 355125:
    {
        returnValue = F("Zur Weinhöhe");
        break;
    }
    case 355126:
    {
        returnValue = F("Zur Weinleite");
        break;
    }
    case 355127:
    {
        returnValue = F("Zur Weinspitze");
        break;
    }
    case 355128:
    {
        returnValue = F("Zur Weinstr.");
        break;
    }
    case 355129:
    {
        returnValue = F("Zur Weisach");
        break;
    }
    case 355130:
    {
        returnValue = F("Zur Weisacht");
        break;
    }
    case 355131:
    {
        returnValue = F("Zur Weissen Mauer");
        break;
    }
    case 355132:
    {
        returnValue = F("Zur Weitershell");
        break;
    }
    case 355133:
    {
        returnValue = F("Zur Weißen Brücke");
        break;
    }
    case 355134:
    {
        returnValue = F("Zur Weißen Elster");
        break;
    }
    case 355135:
    {
        returnValue = F("Zur Weißen Frau");
        break;
    }
    case 355136:
    {
        returnValue = F("Zur Weißen Marter");
        break;
    }
    case 355137:
    {
        returnValue = F("Zur Weißen Wiese");
        break;
    }
    case 355138:
    {
        returnValue = F("Zur Weißerd");
        break;
    }
    case 355139:
    {
        returnValue = F("Zur Welle");
        break;
    }
    case 355140:
    {
        returnValue = F("Zur Wellenwiese");
        break;
    }
    case 355141:
    {
        returnValue = F("Zur Welsauer Mühle");
        break;
    }
    case 355142:
    {
        returnValue = F("Zur Welse");
        break;
    }
    case 355143:
    {
        returnValue = F("Zur Welzbachhalle");
        break;
    }
    case 355144:
    {
        returnValue = F("Zur Wende");
        break;
    }
    case 355145:
    {
        returnValue = F("Zur Wendstädt");
        break;
    }
    case 355146:
    {
        returnValue = F("Zur Wenning");
        break;
    }
    case 355147:
    {
        returnValue = F("Zur Weperkante");
        break;
    }
    case 355148:
    {
        returnValue = F("Zur Werft");
        break;
    }
    case 355149:
    {
        returnValue = F("Zur Wermsburg");
        break;
    }
    case 355150:
    {
        returnValue = F("Zur Werner Heide");
        break;
    }
    case 355151:
    {
        returnValue = F("Zur Werra");
        break;
    }
    case 355152:
    {
        returnValue = F("Zur Werraquelle");
        break;
    }
    case 355153:
    {
        returnValue = F("Zur Werre");
        break;
    }
    case 355154:
    {
        returnValue = F("Zur Werrehude");
        break;
    }
    case 355155:
    {
        returnValue = F("Zur Werremündung");
        break;
    }
    case 355156:
    {
        returnValue = F("Zur Werretalhalle");
        break;
    }
    case 355157:
    {
        returnValue = F("Zur Werseaue");
        break;
    }
    case 355158:
    {
        returnValue = F("Zur Werther Brücke");
        break;
    }
    case 355159:
    {
        returnValue = F("Zur Wesenitzaue");
        break;
    }
    case 355160:
    {
        returnValue = F("Zur Weser");
        break;
    }
    case 355161:
    {
        returnValue = F("Zur Weskede");
        break;
    }
    case 355162:
    {
        returnValue = F("Zur Wespe");
        break;
    }
    case 355163:
    {
        returnValue = F("Zur Westzipfelhalle");
        break;
    }
    case 355164:
    {
        returnValue = F("Zur Wettau");
        break;
    }
    case 355165:
    {
        returnValue = F("Zur Wettelbach");
        break;
    }
    case 355166:
    {
        returnValue = F("Zur Wettern");
        break;
    }
    case 355167:
    {
        returnValue = F("Zur Wetterwarte");
        break;
    }
    case 355168:
    {
        returnValue = F("Zur Wetzge");
        break;
    }
    case 355169:
    {
        returnValue = F("Zur Widum");
        break;
    }
    case 355170:
    {
        returnValue = F("Zur Wied");
        break;
    }
    case 355171:
    {
        returnValue = F("Zur Wieden");
        break;
    }
    case 355172:
    {
        returnValue = F("Zur Wiederitz");
        break;
    }
    case 355173:
    {
        returnValue = F("Zur Wiedlinge");
        break;
    }
    case 355174:
    {
        returnValue = F("Zur Wiege");
        break;
    }
    case 355175:
    {
        returnValue = F("Zur Wiek");
        break;
    }
    case 355176:
    {
        returnValue = F("Zur Wiemark");
        break;
    }
    case 355177:
    {
        returnValue = F("Zur Wienbeck");
        break;
    }
    case 355178:
    {
        returnValue = F("Zur Wienecke");
        break;
    }
    case 355179:
    {
        returnValue = F("Zur Wiera");
        break;
    }
    case 355180:
    {
        returnValue = F("Zur Wierde");
        break;
    }
    case 355181:
    {
        returnValue = F("Zur Wies");
        break;
    }
    case 355182:
    {
        returnValue = F("Zur Wiese");
        break;
    }
    case 355183:
    {
        returnValue = F("Zur Wiesenmühle");
        break;
    }
    case 355184:
    {
        returnValue = F("Zur Wiesethquelle");
        break;
    }
    case 355185:
    {
        returnValue = F("Zur Wieskapelle");
        break;
    }
    case 355186:
    {
        returnValue = F("Zur Wieske");
        break;
    }
    case 355187:
    {
        returnValue = F("Zur Wietze");
        break;
    }
    case 355188:
    {
        returnValue = F("Zur Wildbahn");
        break;
    }
    case 355189:
    {
        returnValue = F("Zur Wilde");
        break;
    }
    case 355190:
    {
        returnValue = F("Zur Wildfuhr");
        break;
    }
    case 355191:
    {
        returnValue = F("Zur Wildkirsche");
        break;
    }
    case 355192:
    {
        returnValue = F("Zur Wildsecke");
        break;
    }
    case 355193:
    {
        returnValue = F("Zur Wildtränke");
        break;
    }
    case 355194:
    {
        returnValue = F("Zur Wildwiese");
        break;
    }
    case 355195:
    {
        returnValue = F("Zur Wildzähnecke");
        break;
    }
    case 355196:
    {
        returnValue = F("Zur Wilhelmsbrücke");
        break;
    }
    case 355197:
    {
        returnValue = F("Zur Wilhelmshöhe");
        break;
    }
    case 355198:
    {
        returnValue = F("Zur Wilhelmsruh");
        break;
    }
    case 355199:
    {
        returnValue = F("Zur Wilhelmswalze");
        break;
    }
    case 355200:
    {
        returnValue = F("Zur Wilke");
        break;
    }
    case 355201:
    {
        returnValue = F("Zur Windbreite");
        break;
    }
    case 355202:
    {
        returnValue = F("Zur Windfahrt");
        break;
    }
    case 355203:
    {
        returnValue = F("Zur Windflöte");
        break;
    }
    case 355204:
    {
        returnValue = F("Zur Windhorst");
        break;
    }
    case 355205:
    {
        returnValue = F("Zur Windmühle");
        break;
    }
    case 355206:
    {
        returnValue = F("Zur Windrose");
        break;
    }
    case 355207:
    {
        returnValue = F("Zur Windschnur");
        break;
    }
    case 355208:
    {
        returnValue = F("Zur Wingbermühle");
        break;
    }
    case 355209:
    {
        returnValue = F("Zur Wingertsley");
        break;
    }
    case 355210:
    {
        returnValue = F("Zur Winkelgasse");
        break;
    }
    case 355211:
    {
        returnValue = F("Zur Winnschla");
        break;
    }
    case 355212:
    {
        returnValue = F("Zur Winterhelle");
        break;
    }
    case 355213:
    {
        returnValue = F("Zur Winterhelte");
        break;
    }
    case 355214:
    {
        returnValue = F("Zur Winterhälde");
        break;
    }
    case 355215:
    {
        returnValue = F("Zur Winterleiten");
        break;
    }
    case 355216:
    {
        returnValue = F("Zur Winterliede");
        break;
    }
    case 355217:
    {
        returnValue = F("Zur Winterseite");
        break;
    }
    case 355218:
    {
        returnValue = F("Zur Winterwelt");
        break;
    }
    case 355219:
    {
        returnValue = F("Zur Winzelt");
        break;
    }
    case 355220:
    {
        returnValue = F("Zur Winzerdelle");
        break;
    }
    case 355221:
    {
        returnValue = F("Zur Wippenharth");
        break;
    }
    case 355222:
    {
        returnValue = F("Zur Wipperaller");
        break;
    }
    case 355223:
    {
        returnValue = F("Zur Wipperau");
        break;
    }
    case 355224:
    {
        returnValue = F("Zur Wisch");
        break;
    }
    case 355225:
    {
        returnValue = F("Zur Wische");
        break;
    }
    case 355226:
    {
        returnValue = F("Zur Wischmühle");
        break;
    }
    case 355227:
    {
        returnValue = F("Zur Wittekindsburg");
        break;
    }
    case 355228:
    {
        returnValue = F("Zur Wohbeckaue");
        break;
    }
    case 355229:
    {
        returnValue = F("Zur Wolfer Mühle");
        break;
    }
    case 355230:
    {
        returnValue = F("Zur Wolferburg");
        break;
    }
    case 355231:
    {
        returnValue = F("Zur Wolfhardt");
        break;
    }
    case 355232:
    {
        returnValue = F("Zur Wolfsburg");
        break;
    }
    case 355233:
    {
        returnValue = F("Zur Wolfsfels");
        break;
    }
    case 355234:
    {
        returnValue = F("Zur Wolfsforder Mühle");
        break;
    }
    case 355235:
    {
        returnValue = F("Zur Wolfsgrube");
        break;
    }
    case 355236:
    {
        returnValue = F("Zur Wolfsheck");
        break;
    }
    case 355237:
    {
        returnValue = F("Zur Wolfshöhe");
        break;
    }
    case 355238:
    {
        returnValue = F("Zur Wolfshöhle");
        break;
    }
    case 355239:
    {
        returnValue = F("Zur Wolfskammer");
        break;
    }
    case 355240:
    {
        returnValue = F("Zur Wolfskaul");
        break;
    }
    case 355241:
    {
        returnValue = F("Zur Wolfskaut");
        break;
    }
    case 355242:
    {
        returnValue = F("Zur Wolfskaute");
        break;
    }
    case 355243:
    {
        returnValue = F("Zur Wolfskuhle");
        break;
    }
    case 355244:
    {
        returnValue = F("Zur Wolfsmühle");
        break;
    }
    case 355245:
    {
        returnValue = F("Zur Wolfsschlade");
        break;
    }
    case 355246:
    {
        returnValue = F("Zur Wolfsschlucht");
        break;
    }
    case 355247:
    {
        returnValue = F("Zur Wolfswiese");
        break;
    }
    case 355248:
    {
        returnValue = F("Zur Wollwicke");
        break;
    }
    case 355249:
    {
        returnValue = F("Zur Wolschbach");
        break;
    }
    case 355250:
    {
        returnValue = F("Zur Worbelsheide");
        break;
    }
    case 355251:
    {
        returnValue = F("Zur Wormei");
        break;
    }
    case 355252:
    {
        returnValue = F("Zur Worte");
        break;
    }
    case 355253:
    {
        returnValue = F("Zur Worth");
        break;
    }
    case 355254:
    {
        returnValue = F("Zur Woy");
        break;
    }
    case 355255:
    {
        returnValue = F("Zur Wuerde");
        break;
    }
    case 355256:
    {
        returnValue = F("Zur Wuhle");
        break;
    }
    case 355257:
    {
        returnValue = F("Zur Wuhr");
        break;
    }
    case 355258:
    {
        returnValue = F("Zur Wulfskammer");
        break;
    }
    case 355259:
    {
        returnValue = F("Zur Wulwerkuhle");
        break;
    }
    case 355260:
    {
        returnValue = F("Zur Wupperquelle");
        break;
    }
    case 355261:
    {
        returnValue = F("Zur Wurth");
        break;
    }
    case 355262:
    {
        returnValue = F("Zur Währungseiche");
        break;
    }
    case 355263:
    {
        returnValue = F("Zur Wälschenbek");
        break;
    }
    case 355264:
    {
        returnValue = F("Zur Wäsch");
        break;
    }
    case 355265:
    {
        returnValue = F("Zur Wäschbach");
        break;
    }
    case 355266:
    {
        returnValue = F("Zur Wäsche");
        break;
    }
    case 355267:
    {
        returnValue = F("Zur Wässer");
        break;
    }
    case 355268:
    {
        returnValue = F("Zur Wöhr");
        break;
    }
    case 355269:
    {
        returnValue = F("Zur Wölschwiese");
        break;
    }
    case 355270:
    {
        returnValue = F("Zur Wörth");
        break;
    }
    case 355271:
    {
        returnValue = F("Zur Wörthspitze");
        break;
    }
    case 355272:
    {
        returnValue = F("Zur Wümmediele");
        break;
    }
    case 355273:
    {
        returnValue = F("Zur Wünnau");
        break;
    }
    case 355274:
    {
        returnValue = F("Zur Wünne");
        break;
    }
    case 355275:
    {
        returnValue = F("Zur Würzburger Mehle");
        break;
    }
    case 355276:
    {
        returnValue = F("Zur Würzhölle");
        break;
    }
    case 355277:
    {
        returnValue = F("Zur Wüstenei");
        break;
    }
    case 355278:
    {
        returnValue = F("Zur Wüstung");
        break;
    }
    case 355279:
    {
        returnValue = F("Zur Wüstung Hörnchen");
        break;
    }
    case 355280:
    {
        returnValue = F("Zur Yachtwerft");
        break;
    }
    case 355281:
    {
        returnValue = F("Zur Zarge");
        break;
    }
    case 355282:
    {
        returnValue = F("Zur Zaubernuß");
        break;
    }
    case 355283:
    {
        returnValue = F("Zur Zauntwiese");
        break;
    }
    case 355284:
    {
        returnValue = F("Zur Zeche Hugo");
        break;
    }
    case 355285:
    {
        returnValue = F("Zur Zehntscheune");
        break;
    }
    case 355286:
    {
        returnValue = F("Zur Zeilbuche");
        break;
    }
    case 355287:
    {
        returnValue = F("Zur Zeile");
        break;
    }
    case 355288:
    {
        returnValue = F("Zur Zementbrücke");
        break;
    }
    case 355289:
    {
        returnValue = F("Zur Ziegelbergstr.");
        break;
    }
    case 355290:
    {
        returnValue = F("Zur Ziegelei");
        break;
    }
    case 355291:
    {
        returnValue = F("Zur Ziegelhütte");
        break;
    }
    case 355292:
    {
        returnValue = F("Zur Ziegelwiese");
        break;
    }
    case 355293:
    {
        returnValue = F("Zur Ziep");
        break;
    }
    case 355294:
    {
        returnValue = F("Zur Ziese");
        break;
    }
    case 355295:
    {
        returnValue = F("Zur Ziethe");
        break;
    }
    case 355296:
    {
        returnValue = F("Zur Zigeunerfichte");
        break;
    }
    case 355297:
    {
        returnValue = F("Zur Zimmerei");
        break;
    }
    case 355298:
    {
        returnValue = F("Zur Zinnhöhe");
        break;
    }
    case 355299:
    {
        returnValue = F("Zur Zinsenbach");
        break;
    }
    case 355300:
    {
        returnValue = F("Zur Zippegosse");
        break;
    }
    case 355301:
    {
        returnValue = F("Zur Zollstange");
        break;
    }
    case 355302:
    {
        returnValue = F("Zur Zollstation");
        break;
    }
    case 355303:
    {
        returnValue = F("Zur Zolltafel");
        break;
    }
    case 355304:
    {
        returnValue = F("Zur Zuckerfabrik");
        break;
    }
    case 355305:
    {
        returnValue = F("Zur Zugbrücke");
        break;
    }
    case 355306:
    {
        returnValue = F("Zur Zweere");
        break;
    }
    case 355307:
    {
        returnValue = F("Zur Zweiten Verschönerung");
        break;
    }
    case 355308:
    {
        returnValue = F("Zur Zwergenhöhle");
        break;
    }
    case 355309:
    {
        returnValue = F("Zur Zwier");
        break;
    }
    case 355310:
    {
        returnValue = F("Zur Zwillingslinde");
        break;
    }
    case 355311:
    {
        returnValue = F("Zur Zäuner Hardt");
        break;
    }
    case 355312:
    {
        returnValue = F("Zur alten Bandstr.");
        break;
    }
    case 355313:
    {
        returnValue = F("Zur alten Brennerei");
        break;
    }
    case 355314:
    {
        returnValue = F("Zur alten Buche");
        break;
    }
    case 355315:
    {
        returnValue = F("Zur alten Burg");
        break;
    }
    case 355316:
    {
        returnValue = F("Zur alten Chaussee");
        break;
    }
    case 355317:
    {
        returnValue = F("Zur alten Eiche");
        break;
    }
    case 355318:
    {
        returnValue = F("Zur alten Exerzierhalle");
        break;
    }
    case 355319:
    {
        returnValue = F("Zur alten Feuerwache");
        break;
    }
    case 355320:
    {
        returnValue = F("Zur alten Fischerhütte");
        break;
    }
    case 355321:
    {
        returnValue = F("Zur alten Fähre");
        break;
    }
    case 355322:
    {
        returnValue = F("Zur alten Försterei");
        break;
    }
    case 355323:
    {
        returnValue = F("Zur alten Gerberei");
        break;
    }
    case 355324:
    {
        returnValue = F("Zur alten Gesenkschmiede");
        break;
    }
    case 355325:
    {
        returnValue = F("Zur alten Gießerei");
        break;
    }
    case 355326:
    {
        returnValue = F("Zur alten Glashütte");
        break;
    }
    case 355327:
    {
        returnValue = F("Zur alten Gärtnerei");
        break;
    }
    case 355328:
    {
        returnValue = F("Zur alten Horl");
        break;
    }
    case 355329:
    {
        returnValue = F("Zur alten Kapelle");
        break;
    }
    case 355330:
    {
        returnValue = F("Zur alten Kartbahn");
        break;
    }
    case 355331:
    {
        returnValue = F("Zur alten Kaserne");
        break;
    }
    case 355332:
    {
        returnValue = F("Zur alten Kelter");
        break;
    }
    case 355333:
    {
        returnValue = F("Zur alten Kirche");
        break;
    }
    case 355334:
    {
        returnValue = F("Zur alten Linde");
        break;
    }
    case 355335:
    {
        returnValue = F("Zur alten Luhe");
        break;
    }
    case 355336:
    {
        returnValue = F("Zur alten Molkerei");
        break;
    }
    case 355337:
    {
        returnValue = F("Zur alten Mühle");
        break;
    }
    case 355338:
    {
        returnValue = F("Zur alten Ohre");
        break;
    }
    case 355339:
    {
        returnValue = F("Zur alten Parksauna");
        break;
    }
    case 355340:
    {
        returnValue = F("Zur alten Post");
        break;
    }
    case 355341:
    {
        returnValue = F("Zur alten Rennbahn");
        break;
    }
    case 355342:
    {
        returnValue = F("Zur alten Salzstr.");
        break;
    }
    case 355343:
    {
        returnValue = F("Zur alten Schmiede");
        break;
    }
    case 355344:
    {
        returnValue = F("Zur alten Schranke");
        break;
    }
    case 355345:
    {
        returnValue = F("Zur alten Schule");
        break;
    }
    case 355346:
    {
        returnValue = F("Zur alten Schäferei");
        break;
    }
    case 355347:
    {
        returnValue = F("Zur alten Spree");
        break;
    }
    case 355348:
    {
        returnValue = F("Zur alten Str.");
        break;
    }
    case 355349:
    {
        returnValue = F("Zur alten Trift");
        break;
    }
    case 355350:
    {
        returnValue = F("Zur alten Tränke");
        break;
    }
    case 355351:
    {
        returnValue = F("Zur alten Villa");
        break;
    }
    case 355352:
    {
        returnValue = F("Zur alten Weide");
        break;
    }
    case 355353:
    {
        returnValue = F("Zur alten Werrabrücke");
        break;
    }
    case 355354:
    {
        returnValue = F("Zur alten Wiese");
        break;
    }
    case 355355:
    {
        returnValue = F("Zur alten Windmühle");
        break;
    }
    case 355356:
    {
        returnValue = F("Zur alten Wörpe");
        break;
    }
    case 355357:
    {
        returnValue = F("Zur alten Ziegelei");
        break;
    }
    case 355358:
    {
        returnValue = F("Zur alten Zimmerei");
        break;
    }
    case 355359:
    {
        returnValue = F("Zur alten Ölmühle");
        break;
    }
    case 355360:
    {
        returnValue = F("Zur angenehmen Gegend");
        break;
    }
    case 355361:
    {
        returnValue = F("Zur breiten Wiese");
        break;
    }
    case 355362:
    {
        returnValue = F("Zur dicken Linde");
        break;
    }
    case 355363:
    {
        returnValue = F("Zur ehemaligen Porzellanfabrik");
        break;
    }
    case 355364:
    {
        returnValue = F("Zur ehemaligen Post");
        break;
    }
    case 355365:
    {
        returnValue = F("Zur goldenen Aue");
        break;
    }
    case 355366:
    {
        returnValue = F("Zur großen Heide");
        break;
    }
    case 355367:
    {
        returnValue = F("Zur großen Wiese");
        break;
    }
    case 355368:
    {
        returnValue = F("Zur grünen Brücke");
        break;
    }
    case 355369:
    {
        returnValue = F("Zur guten Hoffnung");
        break;
    }
    case 355370:
    {
        returnValue = F("Zur guten Laune");
        break;
    }
    case 355371:
    {
        returnValue = F("Zur hohen Brücke");
        break;
    }
    case 355372:
    {
        returnValue = F("Zur hohen Furche");
        break;
    }
    case 355373:
    {
        returnValue = F("Zur hohen Linde");
        break;
    }
    case 355374:
    {
        returnValue = F("Zur hohen Lith");
        break;
    }
    case 355375:
    {
        returnValue = F("Zur hohen Str.");
        break;
    }
    case 355376:
    {
        returnValue = F("Zur hohen Warte");
        break;
    }
    case 355377:
    {
        returnValue = F("Zur hohlen Grube");
        break;
    }
    case 355378:
    {
        returnValue = F("Zur kalten Klinge");
        break;
    }
    case 355379:
    {
        returnValue = F("Zur kalten Lüder");
        break;
    }
    case 355380:
    {
        returnValue = F("Zur kleinen Aue");
        break;
    }
    case 355381:
    {
        returnValue = F("Zur kleinen Dhron");
        break;
    }
    case 355382:
    {
        returnValue = F("Zur kleinen Heide");
        break;
    }
    case 355383:
    {
        returnValue = F("Zur kleinen Schleuse");
        break;
    }
    case 355384:
    {
        returnValue = F("Zur langen Hecke");
        break;
    }
    case 355385:
    {
        returnValue = F("Zur neuen Siedlung");
        break;
    }
    case 355386:
    {
        returnValue = F("Zur neuen Str.");
        break;
    }
    case 355387:
    {
        returnValue = F("Zur oberen Höhe");
        break;
    }
    case 355388:
    {
        returnValue = F("Zur oberen Mühle");
        break;
    }
    case 355389:
    {
        returnValue = F("Zur roten Marter");
        break;
    }
    case 355390:
    {
        returnValue = F("Zur schönen Aussicht");
        break;
    }
    case 355391:
    {
        returnValue = F("Zur unteren Au");
        break;
    }
    case 355392:
    {
        returnValue = F("Zur Äsche");
        break;
    }
    case 355393:
    {
        returnValue = F("Zur Öhmdwiesen");
        break;
    }
    case 355394:
    {
        returnValue = F("Zur Öle");
        break;
    }
    case 355395:
    {
        returnValue = F("Zur Ölmühle");
        break;
    }
    case 355396:
    {
        returnValue = F("Zur Örtze");
        break;
    }
    case 355397:
    {
        returnValue = F("Zur Ösenklinge");
        break;
    }
    case 355398:
    {
        returnValue = F("Zur Ösperquelle");
        break;
    }
    case 355399:
    {
        returnValue = F("Zur Österwiese");
        break;
    }
    case 355400:
    {
        returnValue = F("Zur-Nieden-Str.");
        break;
    }
    case 355401:
    {
        returnValue = F("Zur-Nieden-Weg");
        break;
    }
    case 355402:
    {
        returnValue = F("Zur-Windmühlen-Str.");
        break;
    }
    case 355403:
    {
        returnValue = F("Zurheiden");
        break;
    }
    case 355404:
    {
        returnValue = F("Zurlaubener Ufer");
        break;
    }
    case 355405:
    {
        returnValue = F("Zurmaiener Str.");
        break;
    }
    case 355406:
    {
        returnValue = F("Zurmühle");
        break;
    }
    case 355407:
    {
        returnValue = F("Zurmühlenstr.");
        break;
    }
    case 355408:
    {
        returnValue = F("Zurmühlenweg");
        break;
    }
    case 355409:
    {
        returnValue = F("Zurnhausen");
        break;
    }
    case 355410:
    {
        returnValue = F("Zurstr.nweg");
        break;
    }
    case 355411:
    {
        returnValue = F("Zurzacher Str.");
        break;
    }
    case 355412:
    {
        returnValue = F("Zusamaue");
        break;
    }
    case 355413:
    {
        returnValue = F("Zusambauerweg");
        break;
    }
    case 355414:
    {
        returnValue = F("Zusamblick");
        break;
    }
    case 355415:
    {
        returnValue = F("Zusameckstr.");
        break;
    }
    case 355416:
    {
        returnValue = F("Zusamleite");
        break;
    }
    case 355417:
    {
        returnValue = F("Zusamschneiderstr.");
        break;
    }
    case 355418:
    {
        returnValue = F("Zusamstr.");
        break;
    }
    case 355419:
    {
        returnValue = F("Zusamweg");
        break;
    }
    case 355420:
    {
        returnValue = F("Zusamzeller Str.");
        break;
    }
    case 355421:
    {
        returnValue = F("Zuschentalweg");
        break;
    }
    case 355422:
    {
        returnValue = F("Zuschka");
        break;
    }
    case 355423:
    {
        returnValue = F("Zuschlag");
        break;
    }
    case 355424:
    {
        returnValue = F("Zuschlagdamm");
        break;
    }
    case 355425:
    {
        returnValue = F("Zuschlagsdamm");
        break;
    }
    case 355426:
    {
        returnValue = F("Zuschlagstr.");
        break;
    }
    case 355427:
    {
        returnValue = F("Zuschlagsweg");
        break;
    }
    case 355428:
    {
        returnValue = F("Zuschlagweg");
        break;
    }
    case 355429:
    {
        returnValue = F("Zuschläge");
        break;
    }
    case 355430:
    {
        returnValue = F("Zusebogen");
        break;
    }
    case 355431:
    {
        returnValue = F("Zusenbühlweg");
        break;
    }
    case 355432:
    {
        returnValue = F("Zusenhofener Str.");
        break;
    }
    case 355433:
    {
        returnValue = F("Zusestr.");
        break;
    }
    case 355434:
    {
        returnValue = F("Zusmarshauser Str.");
        break;
    }
    case 355435:
    {
        returnValue = F("Zusmarshauser Weg");
        break;
    }
    case 355436:
    {
        returnValue = F("Zusserfeldstr.");
        break;
    }
    case 355437:
    {
        returnValue = F("Zustieg");
        break;
    }
    case 355438:
    {
        returnValue = F("Zustorfer Str.");
        break;
    }
    case 355439:
    {
        returnValue = F("Zuthenstr.");
        break;
    }
    case 355440:
    {
        returnValue = F("Zutphener Str.");
        break;
    }
    case 355441:
    {
        returnValue = F("Zutrift");
        break;
    }
    case 355442:
    {
        returnValue = F("Zuweg");
        break;
    }
    case 355443:
    {
        returnValue = F("Zuweg Schießstand");
        break;
    }
    case 355444:
    {
        returnValue = F("Zuweg zum Bahnsteig");
        break;
    }
    case 355445:
    {
        returnValue = F("Zuwegerfeld");
        break;
    }
    case 355446:
    {
        returnValue = F("Zuwegung Immenbusch");
        break;
    }
    case 355447:
    {
        returnValue = F("Zuwegung Parkplatz zur Strandpromenade");
        break;
    }
    case 355448:
    {
        returnValue = F("Zuwegung zur Einkaufsmeile");
        break;
    }
    case 355449:
    {
        returnValue = F("Zuzenhausener Str.");
        break;
    }
    case 355450:
    {
        returnValue = F("Zuzenhausener Weg");
        break;
    }
    case 355451:
    {
        returnValue = F("Zuzenhäuser Str.");
        break;
    }
    case 355452:
    {
        returnValue = F("Zußdorfer Str.");
        break;
    }
    case 355453:
    {
        returnValue = F("Zwabitz");
        break;
    }
    case 355454:
    {
        returnValue = F("Zwabitzer Tal");
        break;
    }
    case 355455:
    {
        returnValue = F("Zwackau");
        break;
    }
    case 355456:
    {
        returnValue = F("Zwalbacher Str.");
        break;
    }
    case 355457:
    {
        returnValue = F("Zwalmstr.");
        break;
    }
    case 355458:
    {
        returnValue = F("Zwang-Reute-Weg");
        break;
    }
    case 355459:
    {
        returnValue = F("Zwanzig Morgen");
        break;
    }
    case 355460:
    {
        returnValue = F("Zwanzig-Morgen-Weg");
        break;
    }
    case 355461:
    {
        returnValue = F("Zwanzigacker");
        break;
    }
    case 355462:
    {
        returnValue = F("Zwanzigerstr.");
        break;
    }
    case 355463:
    {
        returnValue = F("Zwebendorfer Str.");
        break;
    }
    case 355464:
    {
        returnValue = F("Zwebendorfer Weg");
        break;
    }
    case 355465:
    {
        returnValue = F("Zwechte");
        break;
    }
    case 355466:
    {
        returnValue = F("Zweckeler Str.");
        break;
    }
    case 355467:
    {
        returnValue = F("Zweckfeld");
        break;
    }
    case 355468:
    {
        returnValue = F("Zweckleberg");
        break;
    }
    case 355469:
    {
        returnValue = F("Zweedorfer Park");
        break;
    }
    case 355470:
    {
        returnValue = F("Zweedorfer Str.");
        break;
    }
    case 355471:
    {
        returnValue = F("Zweedorfer Tannen");
        break;
    }
    case 355472:
    {
        returnValue = F("Zweendamm");
        break;
    }
    case 355473:
    {
        returnValue = F("Zweenfurther Str.");
        break;
    }
    case 355474:
    {
        returnValue = F("Zweftje");
        break;
    }
    case 355475:
    {
        returnValue = F("Zwehrenbühl");
        break;
    }
    case 355476:
    {
        returnValue = F("Zwehrenbühlstr.");
        break;
    }
    case 355477:
    {
        returnValue = F("Zwehrener Weg");
        break;
    }
    case 355478:
    {
        returnValue = F("Zwei");
        break;
    }
    case 355479:
    {
        returnValue = F("Zwei Birken");
        break;
    }
    case 355480:
    {
        returnValue = F("Zwei Buchen Weg");
        break;
    }
    case 355481:
    {
        returnValue = F("Zwei Eichen");
        break;
    }
    case 355482:
    {
        returnValue = F("Zwei Grenzen");
        break;
    }
    case 355483:
    {
        returnValue = F("Zwei Linden");
        break;
    }
    case 355484:
    {
        returnValue = F("Zwei Mühlen");
        break;
    }
    case 355485:
    {
        returnValue = F("Zwei-Linden-Weg");
        break;
    }
    case 355486:
    {
        returnValue = F("Zwei-Morgen-Weg");
        break;
    }
    case 355487:
    {
        returnValue = F("Zwei-Männer-Brücke");
        break;
    }
    case 355488:
    {
        returnValue = F("Zwei-Schlösser-Allee");
        break;
    }
    case 355489:
    {
        returnValue = F("Zweibachstr.");
        break;
    }
    case 355490:
    {
        returnValue = F("Zweiberger Weg");
        break;
    }
    case 355491:
    {
        returnValue = F("Zweibronnhaustr.");
        break;
    }
    case 355492:
    {
        returnValue = F("Zweibrückener Str.");
        break;
    }
    case 355493:
    {
        returnValue = F("Zweibrückenstr.");
        break;
    }
    case 355494:
    {
        returnValue = F("Zweibrückenweg");
        break;
    }
    case 355495:
    {
        returnValue = F("Zweibrücker Hof");
        break;
    }
    case 355496:
    {
        returnValue = F("Zweibrücker Str.");
        break;
    }
    case 355497:
    {
        returnValue = F("Zweibrückerstr.");
        break;
    }
    case 355498:
    {
        returnValue = F("Zweibrüggen");
        break;
    }
    case 355499:
    {
        returnValue = F("Zweiburgenweg");
        break;
    }
    case 355500:
    {
        returnValue = F("Zweibächen");
        break;
    }
    case 355501:
    {
        returnValue = F("Zweibörnstr.");
        break;
    }
    case 355502:
    {
        returnValue = F("Zweidlerweg");
        break;
    }
    case 355503:
    {
        returnValue = F("Zweidobelweg");
        break;
    }
    case 355504:
    {
        returnValue = F("Zweidorfer Ring");
        break;
    }
    case 355505:
    {
        returnValue = F("Zweienweg");
        break;
    }
    case 355506:
    {
        returnValue = F("Zweiertannenweg");
        break;
    }
    case 355507:
    {
        returnValue = F("Zweierweg");
        break;
    }
    case 355508:
    {
        returnValue = F("Zweifaller Schneise");
        break;
    }
    case 355509:
    {
        returnValue = F("Zweifaller Str.");
        break;
    }
    case 355510:
    {
        returnValue = F("Zweifaller Weg");
        break;
    }
    case 355511:
    {
        returnValue = F("Zweifalltorweg");
        break;
    }
    case 355512:
    {
        returnValue = F("Zweifelauer Str.");
        break;
    }
    case 355513:
    {
        returnValue = F("Zweifelbergstr.");
        break;
    }
    case 355514:
    {
        returnValue = F("Zweifelhardtweg");
        break;
    }
    case 355515:
    {
        returnValue = F("Zweifelmut");
        break;
    }
    case 355516:
    {
        returnValue = F("Zweifelsheimer Str.");
        break;
    }
    case 355517:
    {
        returnValue = F("Zweifelsheimer Weg");
        break;
    }
    case 355518:
    {
        returnValue = F("Zweiflinger Str.");
        break;
    }
    case 355519:
    {
        returnValue = F("Zweiflinger Weg");
        break;
    }
    case 355520:
    {
        returnValue = F("Zweigbahn");
        break;
    }
    case 355521:
    {
        returnValue = F("Zweigeltstr.");
        break;
    }
    case 355522:
    {
        returnValue = F("Zweiggasse");
        break;
    }
    case 355523:
    {
        returnValue = F("Zweigrabenweg");
        break;
    }
    case 355524:
    {
        returnValue = F("Zweigstr.");
        break;
    }
    case 355525:
    {
        returnValue = F("Zweigweg");
        break;
    }
    case 355526:
    {
        returnValue = F("Zweihausen");
        break;
    }
    case 355527:
    {
        returnValue = F("Zweiheckenstr.");
        break;
    }
    case 355528:
    {
        returnValue = F("Zweihäuserweg");
        break;
    }
    case 355529:
    {
        returnValue = F("Zweihöfe");
        break;
    }
    case 355530:
    {
        returnValue = F("Zweihüttenweg");
        break;
    }
    case 355531:
    {
        returnValue = F("Zweikirchener Str.");
        break;
    }
    case 355532:
    {
        returnValue = F("Zweikreuzenweg");
        break;
    }
    case 355533:
    {
        returnValue = F("Zweilinden");
        break;
    }
    case 355534:
    {
        returnValue = F("Zweilingsweg");
        break;
    }
    case 355535:
    {
        returnValue = F("Zweilshäuschen");
        break;
    }
    case 355536:
    {
        returnValue = F("Zweimanngasse");
        break;
    }
    case 355537:
    {
        returnValue = F("Zweimen");
        break;
    }
    case 355538:
    {
        returnValue = F("Zweimühlenweg");
        break;
    }
    case 355539:
    {
        returnValue = F("Zweiseenblickweg");
        break;
    }
    case 355540:
    {
        returnValue = F("Zweisetensträßchen");
        break;
    }
    case 355541:
    {
        returnValue = F("Zweisimmenstr.");
        break;
    }
    case 355542:
    {
        returnValue = F("Zweistapfenweg");
        break;
    }
    case 355543:
    {
        returnValue = F("Zweisteinweg");
        break;
    }
    case 355544:
    {
        returnValue = F("Zweitannenweg");
        break;
    }
    case 355545:
    {
        returnValue = F("Zweite Brand-Schneise");
        break;
    }
    case 355546:
    {
        returnValue = F("Zweite Düne");
        break;
    }
    case 355547:
    {
        returnValue = F("Zweite Felsengasse");
        break;
    }
    case 355548:
    {
        returnValue = F("Zweite Fährgasse");
        break;
    }
    case 355549:
    {
        returnValue = F("Zweite Gewanne");
        break;
    }
    case 355550:
    {
        returnValue = F("Zweite Grundstr.");
        break;
    }
    case 355551:
    {
        returnValue = F("Zweite Hohl");
        break;
    }
    case 355552:
    {
        returnValue = F("Zweite Industriestr.");
        break;
    }
    case 355553:
    {
        returnValue = F("Zweite Neugasse");
        break;
    }
    case 355554:
    {
        returnValue = F("Zweite Ochsenkoppel");
        break;
    }
    case 355555:
    {
        returnValue = F("Zweite Reihe");
        break;
    }
    case 355556:
    {
        returnValue = F("Zweite Richtstatt");
        break;
    }
    case 355557:
    {
        returnValue = F("Zweite Siedlung");
        break;
    }
    case 355558:
    {
        returnValue = F("Zweite Str.");
        break;
    }
    case 355559:
    {
        returnValue = F("Zweite Wasserstr.");
        break;
    }
    case 355560:
    {
        returnValue = F("Zweite Wiesengasse");
        break;
    }
    case 355561:
    {
        returnValue = F("Zweiter Bruchweg");
        break;
    }
    case 355562:
    {
        returnValue = F("Zweiter Buschhorstweg");
        break;
    }
    case 355563:
    {
        returnValue = F("Zweiter Eggeweg");
        break;
    }
    case 355564:
    {
        returnValue = F("Zweiter Galgenberger Weg");
        break;
    }
    case 355565:
    {
        returnValue = F("Zweiter Gang");
        break;
    }
    case 355566:
    {
        returnValue = F("Zweiter Geräumtweg");
        break;
    }
    case 355567:
    {
        returnValue = F("Zweiter Höftenweg");
        break;
    }
    case 355568:
    {
        returnValue = F("Zweiter Meedeweg");
        break;
    }
    case 355569:
    {
        returnValue = F("Zweiter Moordamm");
        break;
    }
    case 355570:
    {
        returnValue = F("Zweiter Moorrieger Weg");
        break;
    }
    case 355571:
    {
        returnValue = F("Zweiter Mühlenbruchdamm");
        break;
    }
    case 355572:
    {
        returnValue = F("Zweiter Polderweg");
        break;
    }
    case 355573:
    {
        returnValue = F("Zweiter Querweg");
        break;
    }
    case 355574:
    {
        returnValue = F("Zweiter Rundweg");
        break;
    }
    case 355575:
    {
        returnValue = F("Zweiter Sandweg");
        break;
    }
    case 355576:
    {
        returnValue = F("Zweiter Schierlohweg");
        break;
    }
    case 355577:
    {
        returnValue = F("Zweiter Seckbruchdamm");
        break;
    }
    case 355578:
    {
        returnValue = F("Zweiter Siedlungsweg");
        break;
    }
    case 355579:
    {
        returnValue = F("Zweiter Steg");
        break;
    }
    case 355580:
    {
        returnValue = F("Zweiter Stufenweg");
        break;
    }
    case 355581:
    {
        returnValue = F("Zweiter Tillweg");
        break;
    }
    case 355582:
    {
        returnValue = F("Zweiter Torfweg");
        break;
    }
    case 355583:
    {
        returnValue = F("Zweiter Weg");
        break;
    }
    case 355584:
    {
        returnValue = F("Zweites Fabrikgäßchen");
        break;
    }
    case 355585:
    {
        returnValue = F("Zweites Quergäßchen");
        break;
    }
    case 355586:
    {
        returnValue = F("Zweites Quersächsengäßchen");
        break;
    }
    case 355587:
    {
        returnValue = F("Zweites Täle");
        break;
    }
    case 355588:
    {
        returnValue = F("Zweites-Häusle-Weg");
        break;
    }
    case 355589:
    {
        returnValue = F("Zweitorstr.");
        break;
    }
    case 355590:
    {
        returnValue = F("Zweitschen");
        break;
    }
    case 355591:
    {
        returnValue = F("Zweiweg");
        break;
    }
    case 355592:
    {
        returnValue = F("Zweiweiherweg");
        break;
    }
    case 355593:
    {
        returnValue = F("Zwelle");
        break;
    }
    case 355594:
    {
        returnValue = F("Zwengelpfad");
        break;
    }
    case 355595:
    {
        returnValue = F("Zwengenberger Str.");
        break;
    }
    case 355596:
    {
        returnValue = F("Zwenkauer Str.");
        break;
    }
    case 355597:
    {
        returnValue = F("Zwenkestr.");
        break;
    }
    case 355598:
    {
        returnValue = F("Zwentendorfer Str.");
        break;
    }
    case 355599:
    {
        returnValue = F("Zwentiboldstr.");
        break;
    }
    case 355600:
    {
        returnValue = F("Zwenzow");
        break;
    }
    case 355601:
    {
        returnValue = F("Zwenzower Ufer");
        break;
    }
    case 355602:
    {
        returnValue = F("Zwenzower Weg");
        break;
    }
    case 355603:
    {
        returnValue = F("Zwerbachstr.");
        break;
    }
    case 355604:
    {
        returnValue = F("Zwerch-Geräumt");
        break;
    }
    case 355605:
    {
        returnValue = F("Zwerchallee");
        break;
    }
    case 355606:
    {
        returnValue = F("Zwerchberg");
        break;
    }
    case 355607:
    {
        returnValue = F("Zwerchbergweg");
        break;
    }
    case 355608:
    {
        returnValue = F("Zwerchecker Steig");
        break;
    }
    case 355609:
    {
        returnValue = F("Zwerchgasse");
        break;
    }
    case 355610:
    {
        returnValue = F("Zwerchgraben");
        break;
    }
    case 355611:
    {
        returnValue = F("Zwerchgässle");
        break;
    }
    case 355612:
    {
        returnValue = F("Zwerchklamm");
        break;
    }
    case 355613:
    {
        returnValue = F("Zwerchlüß");
        break;
    }
    case 355614:
    {
        returnValue = F("Zwerchmaingasse");
        break;
    }
    case 355615:
    {
        returnValue = F("Zwerchpaintstr.");
        break;
    }
    case 355616:
    {
        returnValue = F("Zwerchstr.");
        break;
    }
    case 355617:
    {
        returnValue = F("Zwerchstückweg");
        break;
    }
    case 355618:
    {
        returnValue = F("Zwerchsäckle");
        break;
    }
    case 355619:
    {
        returnValue = F("Zwerchweg");
        break;
    }
    case 355620:
    {
        returnValue = F("Zwerchwiesenweg");
        break;
    }
    case 355621:
    {
        returnValue = F("Zwerchäcker");
        break;
    }
    case 355622:
    {
        returnValue = F("Zwerchäckerstr.");
        break;
    }
    case 355623:
    {
        returnValue = F("Zwerenbacher Weg");
        break;
    }
    case 355624:
    {
        returnValue = F("Zwerenberg");
        break;
    }
    case 355625:
    {
        returnValue = F("Zwerenbergauffahrt");
        break;
    }
    case 355626:
    {
        returnValue = F("Zwerenberger Str.");
        break;
    }
    case 355627:
    {
        returnValue = F("Zwerenberger Weg");
        break;
    }
    case 355628:
    {
        returnValue = F("Zwerenbergstr.");
        break;
    }
    case 355629:
    {
        returnValue = F("Zwerenbergweg");
        break;
    }
    case 355630:
    {
        returnValue = F("Zwerenbuchweg");
        break;
    }
    case 355631:
    {
        returnValue = F("Zwerenweg");
        break;
    }
    case 355632:
    {
        returnValue = F("Zwergallee");
        break;
    }
    case 355633:
    {
        returnValue = F("Zwergau");
        break;
    }
    case 355634:
    {
        returnValue = F("Zwergau (TIR 32)");
        break;
    }
    case 355635:
    {
        returnValue = F("Zwergauer Str.");
        break;
    }
    case 355636:
    {
        returnValue = F("Zwergbachstr.");
        break;
    }
    case 355637:
    {
        returnValue = F("Zwergenfußweg");
        break;
    }
    case 355638:
    {
        returnValue = F("Zwergengasse");
        break;
    }
    case 355639:
    {
        returnValue = F("Zwergenkreisel");
        break;
    }
    case 355640:
    {
        returnValue = F("Zwergenpfad");
        break;
    }
    case 355641:
    {
        returnValue = F("Zwergensteg");
        break;
    }
    case 355642:
    {
        returnValue = F("Zwergenstieg");
        break;
    }
    case 355643:
    {
        returnValue = F("Zwergenstr.");
        break;
    }
    case 355644:
    {
        returnValue = F("Zwergenwald");
        break;
    }
    case 355645:
    {
        returnValue = F("Zwergenweg");
        break;
    }
    case 355646:
    {
        returnValue = F("Zwerger Weg");
        break;
    }
    case 355647:
    {
        returnValue = F("Zwergerstr.");
        break;
    }
    case 355648:
    {
        returnValue = F("Zwergerweg");
        break;
    }
    case 355649:
    {
        returnValue = F("Zwergeselweg");
        break;
    }
    case 355650:
    {
        returnValue = F("Zwergfelderstr.");
        break;
    }
    case 355651:
    {
        returnValue = F("Zwerggasse");
        break;
    }
    case 355652:
    {
        returnValue = F("Zwerggewann");
        break;
    }
    case 355653:
    {
        returnValue = F("Zwergkuhle");
        break;
    }
    case 355654:
    {
        returnValue = F("Zwergmispelweg");
        break;
    }
    case 355655:
    {
        returnValue = F("Zwergotter, Felsenhörnchen, Rotluchse");
        break;
    }
    case 355656:
    {
        returnValue = F("Zwergschneise");
        break;
    }
    case 355657:
    {
        returnValue = F("Zwergsteigstr.");
        break;
    }
    case 355658:
    {
        returnValue = F("Zwergstr.");
        break;
    }
    case 355659:
    {
        returnValue = F("Zwergtaucherweg");
        break;
    }
    case 355660:
    {
        returnValue = F("Zwergweg");
        break;
    }
    case 355661:
    {
        returnValue = F("Zweribachweg");
        break;
    }
    case 355662:
    {
        returnValue = F("Zwerisberg");
        break;
    }
    case 355663:
    {
        returnValue = F("Zwerkeweg");
        break;
    }
    case 355664:
    {
        returnValue = F("Zwerlenbachstr.");
        break;
    }
    case 355665:
    {
        returnValue = F("Zwernigstr.");
        break;
    }
    case 355666:
    {
        returnValue = F("Zwerrenbergweg");
        break;
    }
    case 355667:
    {
        returnValue = F("Zwerstaller Weg");
        break;
    }
    case 355668:
    {
        returnValue = F("Zwerstr.");
        break;
    }
    case 355669:
    {
        returnValue = F("Zwerstück");
        break;
    }
    case 355670:
    {
        returnValue = F("Zwerweg");
        break;
    }
    case 355671:
    {
        returnValue = F("Zwerwes");
        break;
    }
    case 355672:
    {
        returnValue = F("Zwestener Weg");
        break;
    }
    case 355673:
    {
        returnValue = F("Zwester-Ohm-Str.");
        break;
    }
    case 355674:
    {
        returnValue = F("Zwester-Ohm-Weg");
        break;
    }
    case 355675:
    {
        returnValue = F("Zwete");
        break;
    }
    case 355676:
    {
        returnValue = F("Zwethauer Str.");
        break;
    }
    case 355677:
    {
        returnValue = F("Zwetschenallee");
        break;
    }
    case 355678:
    {
        returnValue = F("Zwetschenberg");
        break;
    }
    case 355679:
    {
        returnValue = F("Zwetschenbergweg");
        break;
    }
    case 355680:
    {
        returnValue = F("Zwetschengasse");
        break;
    }
    case 355681:
    {
        returnValue = F("Zwetschenstr.");
        break;
    }
    case 355682:
    {
        returnValue = F("Zwetschenweg");
        break;
    }
    case 355683:
    {
        returnValue = F("Zwetschenwinkel");
        break;
    }
    case 355684:
    {
        returnValue = F("Zwetschgenallee");
        break;
    }
    case 355685:
    {
        returnValue = F("Zwetschgenbaumweg");
        break;
    }
    case 355686:
    {
        returnValue = F("Zwetschgendrift");
        break;
    }
    case 355687:
    {
        returnValue = F("Zwetschgengasse");
        break;
    }
    case 355688:
    {
        returnValue = F("Zwetschgengässle");
        break;
    }
    case 355689:
    {
        returnValue = F("Zwetschgenrain");
        break;
    }
    case 355690:
    {
        returnValue = F("Zwetschgenweg");
        break;
    }
    case 355691:
    {
        returnValue = F("Zwettler Weg");
        break;
    }
    case 355692:
    {
        returnValue = F("Zwevegemer Str.");
        break;
    }
    case 355693:
    {
        returnValue = F("Zwick");
        break;
    }
    case 355694:
    {
        returnValue = F("Zwickauer Str.");
        break;
    }
    case 355695:
    {
        returnValue = F("Zwickauer Weg");
        break;
    }
    case 355696:
    {
        returnValue = F("Zwickel");
        break;
    }
    case 355697:
    {
        returnValue = F("Zwickelweg");
        break;
    }
    case 355698:
    {
        returnValue = F("Zwickenbergl");
        break;
    }
    case 355699:
    {
        returnValue = F("Zwickenmühle");
        break;
    }
    case 355700:
    {
        returnValue = F("Zwickerstr.");
        break;
    }
    case 355701:
    {
        returnValue = F("Zwickertstr.");
        break;
    }
    case 355702:
    {
        returnValue = F("Zwickerweg");
        break;
    }
    case 355703:
    {
        returnValue = F("Zwickeshalde");
        break;
    }
    case 355704:
    {
        returnValue = F("Zwickmantel");
        break;
    }
    case 355705:
    {
        returnValue = F("Zwickmoor");
        break;
    }
    case 355706:
    {
        returnValue = F("Zwickmöhlen");
        break;
    }
    case 355707:
    {
        returnValue = F("Zwickmühle");
        break;
    }
    case 355708:
    {
        returnValue = F("Zwicksdamm");
        break;
    }
    case 355709:
    {
        returnValue = F("Zwickstr.");
        break;
    }
    case 355710:
    {
        returnValue = F("Zwickweg");
        break;
    }
    case 355711:
    {
        returnValue = F("Zwiebelbergweg");
        break;
    }
    case 355712:
    {
        returnValue = F("Zwiebelbühndstr.");
        break;
    }
    case 355713:
    {
        returnValue = F("Zwiebelgasse");
        break;
    }
    case 355714:
    {
        returnValue = F("Zwiebelmarkt");
        break;
    }
    case 355715:
    {
        returnValue = F("Zwiebels Garten");
        break;
    }
    case 355716:
    {
        returnValue = F("Zwiebelsfelder Weg");
        break;
    }
    case 355717:
    {
        returnValue = F("Zwiebelstückschneise");
        break;
    }
    case 355718:
    {
        returnValue = F("Zwiedorf");
        break;
    }
    case 355719:
    {
        returnValue = F("Zwiefaltener Str.");
        break;
    }
    case 355720:
    {
        returnValue = F("Zwiefalter Str.");
        break;
    }
    case 355721:
    {
        returnValue = F("Zwiegabelweg");
        break;
    }
    case 355722:
    {
        returnValue = F("Zwiegerackerweg");
        break;
    }
    case 355723:
    {
        returnValue = F("Zwielwäldle");
        break;
    }
    case 355724:
    {
        returnValue = F("Zwierenstr.");
        break;
    }
    case 355725:
    {
        returnValue = F("Zwieselauer Str.");
        break;
    }
    case 355726:
    {
        returnValue = F("Zwieselberg");
        break;
    }
    case 355727:
    {
        returnValue = F("Zwieselberger Str.");
        break;
    }
    case 355728:
    {
        returnValue = F("Zwieselbergsiedlung");
        break;
    }
    case 355729:
    {
        returnValue = F("Zwieseler Str.");
        break;
    }
    case 355730:
    {
        returnValue = F("Zwieselerwaldhausstr.");
        break;
    }
    case 355731:
    {
        returnValue = F("Zwieselgrund");
        break;
    }
    case 355732:
    {
        returnValue = F("Zwieselhang");
        break;
    }
    case 355733:
    {
        returnValue = F("Zwieselhof");
        break;
    }
    case 355734:
    {
        returnValue = F("Zwieselholzstr.");
        break;
    }
    case 355735:
    {
        returnValue = F("Zwieselsbergerstr.");
        break;
    }
    case 355736:
    {
        returnValue = F("Zwieselstr.");
        break;
    }
    case 355737:
    {
        returnValue = F("Zwieselweg");
        break;
    }
    case 355738:
    {
        returnValue = F("Zwiesler Weg");
        break;
    }
    case 355739:
    {
        returnValue = F("Zwieslerbruck");
        break;
    }
    case 355740:
    {
        returnValue = F("Zwietzau");
        break;
    }
    case 355741:
    {
        returnValue = F("Zwijndrechter Str.");
        break;
    }
    case 355742:
    {
        returnValue = F("Zwijndrechtring");
        break;
    }
    case 355743:
    {
        returnValue = F("Zwillberg");
        break;
    }
    case 355744:
    {
        returnValue = F("Zwillbrocker Str.");
        break;
    }
    case 355745:
    {
        returnValue = F("Zwilling");
        break;
    }
    case 355746:
    {
        returnValue = F("Zwillingeweg");
        break;
    }
    case 355747:
    {
        returnValue = F("Zwillingseichenweg");
        break;
    }
    case 355748:
    {
        returnValue = F("Zwillingslinde");
        break;
    }
    case 355749:
    {
        returnValue = F("Zwillingsquellenweg");
        break;
    }
    case 355750:
    {
        returnValue = F("Zwillingstr.");
        break;
    }
    case 355751:
    {
        returnValue = F("Zwillingsweg");
        break;
    }
    case 355752:
    {
        returnValue = F("Zwillstr.");
        break;
    }
    case 355753:
    {
        returnValue = F("Zwingel");
        break;
    }
    case 355754:
    {
        returnValue = F("Zwingelgasse");
        break;
    }
    case 355755:
    {
        returnValue = F("Zwingelhäuser Str.");
        break;
    }
    case 355756:
    {
        returnValue = F("Zwingenberger Str.");
        break;
    }
    case 355757:
    {
        returnValue = F("Zwingenberger Weg");
        break;
    }
    case 355758:
    {
        returnValue = F("Zwingenbergstr.");
        break;
    }
    case 355759:
    {
        returnValue = F("Zwinger");
        break;
    }
    case 355760:
    {
        returnValue = F("Zwinger Dorfstr.");
        break;
    }
    case 355761:
    {
        returnValue = F("Zwinger Winkel");
        break;
    }
    case 355762:
    {
        returnValue = F("Zwingergasse");
        break;
    }
    case 355763:
    {
        returnValue = F("Zwingergäßchen");
        break;
    }
    case 355764:
    {
        returnValue = F("Zwingerhof");
        break;
    }
    case 355765:
    {
        returnValue = F("Zwingerpark");
        break;
    }
    case 355766:
    {
        returnValue = F("Zwingerplatz");
        break;
    }
    case 355767:
    {
        returnValue = F("Zwingerstr.");
        break;
    }
    case 355768:
    {
        returnValue = F("Zwingertgasse");
        break;
    }
    case 355769:
    {
        returnValue = F("Zwingerwall");
        break;
    }
    case 355770:
    {
        returnValue = F("Zwingerweg");
        break;
    }
    case 355771:
    {
        returnValue = F("Zwingeräcker");
        break;
    }
    case 355772:
    {
        returnValue = F("Zwinggasse");
        break;
    }
    case 355773:
    {
        returnValue = F("Zwinghofstr.");
        break;
    }
    case 355774:
    {
        returnValue = F("Zwingli-Weg");
        break;
    }
    case 355775:
    {
        returnValue = F("Zwinglistr.");
        break;
    }
    case 355776:
    {
        returnValue = F("Zwingweg");
        break;
    }
    case 355777:
    {
        returnValue = F("Zwinkelweg");
        break;
    }
    case 355778:
    {
        returnValue = F("Zwinkenstr.");
        break;
    }
    case 355779:
    {
        returnValue = F("Zwintschönaer Str.");
        break;
    }
    case 355780:
    {
        returnValue = F("Zwire");
        break;
    }
    case 355781:
    {
        returnValue = F("Zwirgabel");
        break;
    }
    case 355782:
    {
        returnValue = F("Zwirgenweg");
        break;
    }
    case 355783:
    {
        returnValue = F("Zwirleinstr.");
        break;
    }
    case 355784:
    {
        returnValue = F("Zwirne");
        break;
    }
    case 355785:
    {
        returnValue = F("Zwirnen");
        break;
    }
    case 355786:
    {
        returnValue = F("Zwirnerei");
        break;
    }
    case 355787:
    {
        returnValue = F("Zwirnereistr.");
        break;
    }
    case 355788:
    {
        returnValue = F("Zwirnerstr.");
        break;
    }
    case 355789:
    {
        returnValue = F("Zwirnerweg");
        break;
    }
    case 355790:
    {
        returnValue = F("Zwirngang");
        break;
    }
    case 355791:
    {
        returnValue = F("Zwirnsgasse");
        break;
    }
    case 355792:
    {
        returnValue = F("Zwirnstr.");
        break;
    }
    case 355793:
    {
        returnValue = F("Zwirrenweg");
        break;
    }
    case 355794:
    {
        returnValue = F("Zwirtzschen");
        break;
    }
    case 355795:
    {
        returnValue = F("Zwischen Beiden Bleichen");
        break;
    }
    case 355796:
    {
        returnValue = F("Zwischen Bergen");
        break;
    }
    case 355797:
    {
        returnValue = F("Zwischen Damm");
        break;
    }
    case 355798:
    {
        returnValue = F("Zwischen Graben");
        break;
    }
    case 355799:
    {
        returnValue = F("Zwischen Landwehr");
        break;
    }
    case 355800:
    {
        returnValue = F("Zwischen Stadt und Burg");
        break;
    }
    case 355801:
    {
        returnValue = F("Zwischen Wasser");
        break;
    }
    case 355802:
    {
        returnValue = F("Zwischen Zelgen Außer Ort");
        break;
    }
    case 355803:
    {
        returnValue = F("Zwischen Zäunen");
        break;
    }
    case 355804:
    {
        returnValue = F("Zwischen beiden Wieken");
        break;
    }
    case 355805:
    {
        returnValue = F("Zwischen de Baumschulen");
        break;
    }
    case 355806:
    {
        returnValue = F("Zwischen dem Dorfe");
        break;
    }
    case 355807:
    {
        returnValue = F("Zwischen den Alleen");
        break;
    }
    case 355808:
    {
        returnValue = F("Zwischen den Bahnen");
        break;
    }
    case 355809:
    {
        returnValue = F("Zwischen den Bergen");
        break;
    }
    case 355810:
    {
        returnValue = F("Zwischen den Birken");
        break;
    }
    case 355811:
    {
        returnValue = F("Zwischen den Brücken");
        break;
    }
    case 355812:
    {
        returnValue = F("Zwischen den Bächen");
        break;
    }
    case 355813:
    {
        returnValue = F("Zwischen den Dörfern");
        break;
    }
    case 355814:
    {
        returnValue = F("Zwischen den Eichen");
        break;
    }
    case 355815:
    {
        returnValue = F("Zwischen den Emsbrücken");
        break;
    }
    case 355816:
    {
        returnValue = F("Zwischen den Gassen");
        break;
    }
    case 355817:
    {
        returnValue = F("Zwischen den Gräben");
        break;
    }
    case 355818:
    {
        returnValue = F("Zwischen den Gärten");
        break;
    }
    case 355819:
    {
        returnValue = F("Zwischen den Hedigen");
        break;
    }
    case 355820:
    {
        returnValue = F("Zwischen den Hestern");
        break;
    }
    case 355821:
    {
        returnValue = F("Zwischen den Häusern");
        break;
    }
    case 355822:
    {
        returnValue = F("Zwischen den Höfen");
        break;
    }
    case 355823:
    {
        returnValue = F("Zwischen den Hölzern");
        break;
    }
    case 355824:
    {
        returnValue = F("Zwischen den Hüllen");
        break;
    }
    case 355825:
    {
        returnValue = F("Zwischen den Kapellenwegen");
        break;
    }
    case 355826:
    {
        returnValue = F("Zwischen den Kiefern");
        break;
    }
    case 355827:
    {
        returnValue = F("Zwischen den Kirchen");
        break;
    }
    case 355828:
    {
        returnValue = F("Zwischen den Kreiseln");
        break;
    }
    case 355829:
    {
        returnValue = F("Zwischen den Krämen");
        break;
    }
    case 355830:
    {
        returnValue = F("Zwischen den Kämpen");
        break;
    }
    case 355831:
    {
        returnValue = F("Zwischen den Linden");
        break;
    }
    case 355832:
    {
        returnValue = F("Zwischen den Mauern");
        break;
    }
    case 355833:
    {
        returnValue = F("Zwischen den Mehläckern");
        break;
    }
    case 355834:
    {
        returnValue = F("Zwischen den Pfuhlen");
        break;
    }
    case 355835:
    {
        returnValue = F("Zwischen den Rainen");
        break;
    }
    case 355836:
    {
        returnValue = F("Zwischen den Sandgruben");
        break;
    }
    case 355837:
    {
        returnValue = F("Zwischen den Scheunen");
        break;
    }
    case 355838:
    {
        returnValue = F("Zwischen den Seen");
        break;
    }
    case 355839:
    {
        returnValue = F("Zwischen den Sieken");
        break;
    }
    case 355840:
    {
        returnValue = F("Zwischen den Stodl'n");
        break;
    }
    case 355841:
    {
        returnValue = F("Zwischen den Str.n");
        break;
    }
    case 355842:
    {
        returnValue = F("Zwischen den Strömen");
        break;
    }
    case 355843:
    {
        returnValue = F("Zwischen den Städten");
        break;
    }
    case 355844:
    {
        returnValue = F("Zwischen den Tiewänden");
        break;
    }
    case 355845:
    {
        returnValue = F("Zwischen den Toren");
        break;
    }
    case 355846:
    {
        returnValue = F("Zwischen den Wegen");
        break;
    }
    case 355847:
    {
        returnValue = F("Zwischen den Weiden");
        break;
    }
    case 355848:
    {
        returnValue = F("Zwischen den Wellen");
        break;
    }
    case 355849:
    {
        returnValue = F("Zwischen den Wieken");
        break;
    }
    case 355850:
    {
        returnValue = F("Zwischen den Wiesen");
        break;
    }
    case 355851:
    {
        returnValue = F("Zwischen den Wällen");
        break;
    }
    case 355852:
    {
        returnValue = F("Zwischen den Zwei Mühlen");
        break;
    }
    case 355853:
    {
        returnValue = F("Zwischen den Zäunen");
        break;
    }
    case 355854:
    {
        returnValue = F("Zwischen-Wegen-Str.");
        break;
    }
    case 355855:
    {
        returnValue = F("Zwischenahner Damm");
        break;
    }
    case 355856:
    {
        returnValue = F("Zwischenahner Str.");
        break;
    }
    case 355857:
    {
        returnValue = F("Zwischenberger Weg");
        break;
    }
    case 355858:
    {
        returnValue = F("Zwischenbrücken");
        break;
    }
    case 355859:
    {
        returnValue = F("Zwischendeichsweg");
        break;
    }
    case 355860:
    {
        returnValue = F("Zwischendorfer Weg");
        break;
    }
    case 355861:
    {
        returnValue = F("Zwischendörfer");
        break;
    }
    case 355862:
    {
        returnValue = F("Zwischengasse");
        break;
    }
    case 355863:
    {
        returnValue = F("Zwischengraben");
        break;
    }
    case 355864:
    {
        returnValue = F("Zwischenhausen");
        break;
    }
    case 355865:
    {
        returnValue = F("Zwischenkämpen");
        break;
    }
    case 355866:
    {
        returnValue = F("Zwischenmarkt");
        break;
    }
    case 355867:
    {
        returnValue = F("Zwischenmoorsweg");
        break;
    }
    case 355868:
    {
        returnValue = F("Zwischenstr.");
        break;
    }
    case 355869:
    {
        returnValue = F("Zwischenwasser");
        break;
    }
    case 355870:
    {
        returnValue = F("Zwischenweg");
        break;
    }
    case 355871:
    {
        returnValue = F("Zwischenäcker");
        break;
    }
    case 355872:
    {
        returnValue = F("Zwischenäckerle");
        break;
    }
    case 355873:
    {
        returnValue = F("Zwisslerstr.");
        break;
    }
    case 355874:
    {
        returnValue = F("Zwister Weg");
        break;
    }
    case 355875:
    {
        returnValue = F("Zwisäcker");
        break;
    }
    case 355876:
    {
        returnValue = F("Zwittauer Gasse");
        break;
    }
    case 355877:
    {
        returnValue = F("Zwittauer Str.");
        break;
    }
    case 355878:
    {
        returnValue = F("Zwittauer Weg");
        break;
    }
    case 355879:
    {
        returnValue = F("Zwitterweg");
        break;
    }
    case 355880:
    {
        returnValue = F("Zwitzgrundweg");
        break;
    }
    case 355881:
    {
        returnValue = F("Zwochau");
        break;
    }
    case 355882:
    {
        returnValue = F("Zwochauer Schulstr.");
        break;
    }
    case 355883:
    {
        returnValue = F("Zwochauer Str.");
        break;
    }
    case 355884:
    {
        returnValue = F("Zwochauer Weg");
        break;
    }
    case 355885:
    {
        returnValue = F("Zwolle Allee");
        break;
    }
    case 355886:
    {
        returnValue = F("Zwoller Str.");
        break;
    }
    case 355887:
    {
        returnValue = F("Zwoschwitzer Str.");
        break;
    }
    case 355888:
    {
        returnValue = F("Zwoschwitzer Weg");
        break;
    }
    case 355889:
    {
        returnValue = F("Zwotaer Kirchsteig");
        break;
    }
    case 355890:
    {
        returnValue = F("Zwotaer Str.");
        break;
    }
    case 355891:
    {
        returnValue = F("Zwängweg");
        break;
    }
    case 355892:
    {
        returnValue = F("Zwätzengasse");
        break;
    }
    case 355893:
    {
        returnValue = F("Zwölf Apostel");
        break;
    }
    case 355894:
    {
        returnValue = F("Zwölf Apostel Weg");
        break;
    }
    case 355895:
    {
        returnValue = F("Zwölf Berge");
        break;
    }
    case 355896:
    {
        returnValue = F("Zwölf Äcker");
        break;
    }
    case 355897:
    {
        returnValue = F("Zwölf-Apostel-Weg");
        break;
    }
    case 355898:
    {
        returnValue = F("Zwölfackerweg");
        break;
    }
    case 355899:
    {
        returnValue = F("Zwölfbeetweg");
        break;
    }
    case 355900:
    {
        returnValue = F("Zwölfbogenweg");
        break;
    }
    case 355901:
    {
        returnValue = F("Zwölfer Schneise");
        break;
    }
    case 355902:
    {
        returnValue = F("Zwölferkopfstr.");
        break;
    }
    case 355903:
    {
        returnValue = F("Zwölferkopfweg");
        break;
    }
    case 355904:
    {
        returnValue = F("Zwölferstr.");
        break;
    }
    case 355905:
    {
        returnValue = F("Zwölferweg");
        break;
    }
    case 355906:
    {
        returnValue = F("Zwölfhöferweg");
        break;
    }
    case 355907:
    {
        returnValue = F("Zwölfling");
        break;
    }
    case 355908:
    {
        returnValue = F("Zwölfmorgen");
        break;
    }
    case 355909:
    {
        returnValue = F("Zwölfmorgental");
        break;
    }
    case 355910:
    {
        returnValue = F("Zwönitzer Gasse");
        break;
    }
    case 355911:
    {
        returnValue = F("Zwönitzer Str.");
        break;
    }
    case 355912:
    {
        returnValue = F("Zwönitzer Weg");
        break;
    }
    case 355913:
    {
        returnValue = F("Zwönitzstr.");
        break;
    }
    case 355914:
    {
        returnValue = F("Zwönitztalstr.");
        break;
    }
    case 355915:
    {
        returnValue = F("Zwönitztalweg");
        break;
    }
    case 355916:
    {
        returnValue = F("Zwötzener Anger");
        break;
    }
    case 355917:
    {
        returnValue = F("Zwötzener Brücke");
        break;
    }
    case 355918:
    {
        returnValue = F("Zwötzener Str.");
        break;
    }
    case 355919:
    {
        returnValue = F("Zwötzener Weg");
        break;
    }
    case 355920:
    {
        returnValue = F("Zyfflicher Str.");
        break;
    }
    case 355921:
    {
        returnValue = F("Zyklamenweg");
        break;
    }
    case 355922:
    {
        returnValue = F("Zylinderberg");
        break;
    }
    case 355923:
    {
        returnValue = F("Zylindergasse");
        break;
    }
    case 355924:
    {
        returnValue = F("Zyllnhard-Geräumt");
        break;
    }
    case 355925:
    {
        returnValue = F("Zyllnhardt Geräumt");
        break;
    }
    case 355926:
    {
        returnValue = F("Zyllnhardtweg");
        break;
    }
    case 355927:
    {
        returnValue = F("Zypressenstr.");
        break;
    }
    case 355928:
    {
        returnValue = F("Zypressenweg");
        break;
    }
    case 355929:
    {
        returnValue = F("Zyriakusweg");
        break;
    }
    case 355930:
    {
        returnValue = F("Zywiecstr.");
        break;
    }
    case 355931:
    {
        returnValue = F("Zäckericker Loose");
        break;
    }
    case 355932:
    {
        returnValue = F("Zäher Wille");
        break;
    }
    case 355933:
    {
        returnValue = F("Zähgasse");
        break;
    }
    case 355934:
    {
        returnValue = F("Zählmannstr.");
        break;
    }
    case 355935:
    {
        returnValue = F("Zählweg");
        break;
    }
    case 355936:
    {
        returnValue = F("Zähmerkaul");
        break;
    }
    case 355937:
    {
        returnValue = F("Zähringen");
        break;
    }
    case 355938:
    {
        returnValue = F("Zähringer Mattle");
        break;
    }
    case 355939:
    {
        returnValue = F("Zähringer Str.");
        break;
    }
    case 355940:
    {
        returnValue = F("Zähringer Weg");
        break;
    }
    case 355941:
    {
        returnValue = F("Zähringeracker");
        break;
    }
    case 355942:
    {
        returnValue = F("Zähringerallee");
        break;
    }
    case 355943:
    {
        returnValue = F("Zähringerbrücke");
        break;
    }
    case 355944:
    {
        returnValue = F("Zähringergasse");
        break;
    }
    case 355945:
    {
        returnValue = F("Zähringerplatz");
        break;
    }
    case 355946:
    {
        returnValue = F("Zähringerstr.");
        break;
    }
    case 355947:
    {
        returnValue = F("Zähringerweg");
        break;
    }
    case 355948:
    {
        returnValue = F("Zähstr.");
        break;
    }
    case 355949:
    {
        returnValue = F("Zängerlestr.");
        break;
    }
    case 355950:
    {
        returnValue = F("Zänglweg");
        break;
    }
    case 355951:
    {
        returnValue = F("Zänklfeld");
        break;
    }
    case 355952:
    {
        returnValue = F("Zänkwiesenanger");
        break;
    }
    case 355953:
    {
        returnValue = F("Zäunchen");
        break;
    }
    case 355954:
    {
        returnValue = F("Zäunchensweg");
        break;
    }
    case 355955:
    {
        returnValue = F("Zäune");
        break;
    }
    case 355956:
    {
        returnValue = F("Zäunenstr.");
        break;
    }
    case 355957:
    {
        returnValue = F("Zäunenweg");
        break;
    }
    case 355958:
    {
        returnValue = F("Zäunerstr.");
        break;
    }
    case 355959:
    {
        returnValue = F("Zäuneweg");
        break;
    }
    case 355960:
    {
        returnValue = F("Zäunstr.");
        break;
    }
    case 355961:
    {
        returnValue = F("Zäunteweg");
        break;
    }
    case 355962:
    {
        returnValue = F("Zäunweg");
        break;
    }
    case 355963:
    {
        returnValue = F("Zöbbenitzer Str.");
        break;
    }
    case 355964:
    {
        returnValue = F("Zöberitzer Str.");
        break;
    }
    case 355965:
    {
        returnValue = F("Zöberitzer Weg");
        break;
    }
    case 355966:
    {
        returnValue = F("Zöberner Str.");
        break;
    }
    case 355967:
    {
        returnValue = F("Zöbigker Weg");
        break;
    }
    case 355968:
    {
        returnValue = F("Zöbigkerstr.");
        break;
    }
    case 355969:
    {
        returnValue = F("Zöbinger Str.");
        break;
    }
    case 355970:
    {
        returnValue = F("Zöblitzer Lindenstr.");
        break;
    }
    case 355971:
    {
        returnValue = F("Zöblitzer Schulstr.");
        break;
    }
    case 355972:
    {
        returnValue = F("Zöblitzer Siedlung");
        break;
    }
    case 355973:
    {
        returnValue = F("Zöblitzer Str.");
        break;
    }
    case 355974:
    {
        returnValue = F("Zöcklerweg");
        break;
    }
    case 355975:
    {
        returnValue = F("Zölestinstr.");
        break;
    }
    case 355976:
    {
        returnValue = F("Zölkower Weg");
        break;
    }
    case 355977:
    {
        returnValue = F("Zöller");
        break;
    }
    case 355978:
    {
        returnValue = F("Zöllergasse");
        break;
    }
    case 355979:
    {
        returnValue = F("Zöllerhöfstr.");
        break;
    }
    case 355980:
    {
        returnValue = F("Zöllerpforte");
        break;
    }
    case 355981:
    {
        returnValue = F("Zöllerplatz");
        break;
    }
    case 355982:
    {
        returnValue = F("Zöllerring");
        break;
    }
    case 355983:
    {
        returnValue = F("Zöllers_Förchlesweg");
        break;
    }
    case 355984:
    {
        returnValue = F("Zöllersberg");
        break;
    }
    case 355985:
    {
        returnValue = F("Zöllershöhe");
        break;
    }
    case 355986:
    {
        returnValue = F("Zöllerstr.");
        break;
    }
    case 355987:
    {
        returnValue = F("Zöllerweg");
        break;
    }
    case 355988:
    {
        returnValue = F("Zöllinplatz");
        break;
    }
    case 355989:
    {
        returnValue = F("Zöllmener Ring");
        break;
    }
    case 355990:
    {
        returnValue = F("Zöllmener Str.");
        break;
    }
    case 355991:
    {
        returnValue = F("Zöllmersdorfer Dorfstr.");
        break;
    }
    case 355992:
    {
        returnValue = F("Zöllmersdorfer Gartenweg");
        break;
    }
    case 355993:
    {
        returnValue = F("Zöllnergasse");
        break;
    }
    case 355994:
    {
        returnValue = F("Zöllnerplatz");
        break;
    }
    case 355995:
    {
        returnValue = F("Zöllners Hof");
        break;
    }
    case 355996:
    {
        returnValue = F("Zöllnersgasse");
        break;
    }
    case 355997:
    {
        returnValue = F("Zöllnerskamp");
        break;
    }
    case 355998:
    {
        returnValue = F("Zöllnerstr.");
        break;
    }
    case 355999:
    {
        returnValue = F("Zöllnersweg");
        break;
    }
    case 356000:
    {
        returnValue = F("Zöllnertorstr.");
        break;
    }
    case 356001:
    {
        returnValue = F("Zöllnerweg");
        break;
    }
    case 356002:
    {
        returnValue = F("Zöllnerwies-Geräumt");
        break;
    }
    case 356003:
    {
        returnValue = F("Zöllnitzer Str.");
        break;
    }
    case 356004:
    {
        returnValue = F("Zöllsdorfer Str.");
        break;
    }
    case 356005:
    {
        returnValue = F("Zömpel Weg");
        break;
    }
    case 356006:
    {
        returnValue = F("Zöpener Seewiesen");
        break;
    }
    case 356007:
    {
        returnValue = F("Zöpener Str.");
        break;
    }
    case 356008:
    {
        returnValue = F("Zöper Weg");
        break;
    }
    case 356009:
    {
        returnValue = F("Zöpfelsteig");
        break;
    }
    case 356010:
    {
        returnValue = F("Zöpfiwasenweg");
        break;
    }
    case 356011:
    {
        returnValue = F("Zöpflgarten");
        break;
    }
    case 356012:
    {
        returnValue = F("Zöpfstr.");
        break;
    }
    case 356013:
    {
        returnValue = F("Zörbiger Str.");
        break;
    }
    case 356014:
    {
        returnValue = F("Zörbitzer Str.");
        break;
    }
    case 356015:
    {
        returnValue = F("Zörgiebelstr.");
        break;
    }
    case 356016:
    {
        returnValue = F("Zörnigaller Landstr.");
        break;
    }
    case 356017:
    {
        returnValue = F("Zörnigaller Str.");
        break;
    }
    case 356018:
    {
        returnValue = F("Zörnitzer Berg");
        break;
    }
    case 356019:
    {
        returnValue = F("Zörnitzer Weg");
        break;
    }
    case 356020:
    {
        returnValue = F("Zörstr.");
        break;
    }
    case 356021:
    {
        returnValue = F("Zöschener Dorfstr.");
        break;
    }
    case 356022:
    {
        returnValue = F("Zöschener Starße");
        break;
    }
    case 356023:
    {
        returnValue = F("Zöschener Str.");
        break;
    }
    case 356024:
    {
        returnValue = F("Zöschinger Str.");
        break;
    }
    case 356025:
    {
        returnValue = F("Zöschinger Weg");
        break;
    }
    case 356026:
    {
        returnValue = F("Zöschlingsweiler Str.");
        break;
    }
    case 356027:
    {
        returnValue = F("Zöthain");
        break;
    }
    case 356028:
    {
        returnValue = F("Zöthainer Leichenweg");
        break;
    }
    case 356029:
    {
        returnValue = F("Zöthainer Str.");
        break;
    }
    case 356030:
    {
        returnValue = F("Zöthen");
        break;
    }
    case 356031:
    {
        returnValue = F("Zöttnitz");
        break;
    }
    case 356032:
    {
        returnValue = F("Züchnerhügel");
        break;
    }
    case 356033:
    {
        returnValue = F("Züchnerstr.");
        break;
    }
    case 356034:
    {
        returnValue = F("Züchterweg");
        break;
    }
    case 356035:
    {
        returnValue = F("Zückenberg");
        break;
    }
    case 356036:
    {
        returnValue = F("Zückenpfühlweg");
        break;
    }
    case 356037:
    {
        returnValue = F("Zückshuter Str.");
        break;
    }
    case 356038:
    {
        returnValue = F("Zückwolfstr.");
        break;
    }
    case 356039:
    {
        returnValue = F("Zügelstr.");
        break;
    }
    case 356040:
    {
        returnValue = F("Zügernbergstr.");
        break;
    }
    case 356041:
    {
        returnValue = F("Zühlener Ausbau");
        break;
    }
    case 356042:
    {
        returnValue = F("Zühlener Dorfstr.");
        break;
    }
    case 356043:
    {
        returnValue = F("Zühlener Siedlung");
        break;
    }
    case 356044:
    {
        returnValue = F("Zühlener Weg");
        break;
    }
    case 356045:
    {
        returnValue = F("Zühlener Winkel");
        break;
    }
    case 356046:
    {
        returnValue = F("Zühlitz");
        break;
    }
    case 356047:
    {
        returnValue = F("Zühlsdorfer Chaussee");
        break;
    }
    case 356048:
    {
        returnValue = F("Zühlsdorfer Str.");
        break;
    }
    case 356049:
    {
        returnValue = F("Zühlsdorfer Weg");
        break;
    }
    case 356050:
    {
        returnValue = F("Zührer Str.");
        break;
    }
    case 356051:
    {
        returnValue = F("Zührer Weg");
        break;
    }
    case 356052:
    {
        returnValue = F("Zülbsgasse");
        break;
    }
    case 356053:
    {
        returnValue = F("Zülchgasse");
        break;
    }
    case 356054:
    {
        returnValue = F("Zülichendorfer Landstr.");
        break;
    }
    case 356055:
    {
        returnValue = F("Zülichendorfer Weg");
        break;
    }
    case 356056:
    {
        returnValue = F("Züllighovener Str.");
        break;
    }
    case 356057:
    {
        returnValue = F("Züllighovener Weg");
        break;
    }
    case 356058:
    {
        returnValue = F("Züllnhardt-Geräumt");
        break;
    }
    case 356059:
    {
        returnValue = F("Züllsdorfer Str.");
        break;
    }
    case 356060:
    {
        returnValue = F("Zülowkanal");
        break;
    }
    case 356061:
    {
        returnValue = F("Zülowpromenade");
        break;
    }
    case 356062:
    {
        returnValue = F("Zülowstr.");
        break;
    }
    case 356063:
    {
        returnValue = F("Zülpicher Gasse");
        break;
    }
    case 356064:
    {
        returnValue = F("Zülpicher Platz");
        break;
    }
    case 356065:
    {
        returnValue = F("Zülpicher Str.");
        break;
    }
    case 356066:
    {
        returnValue = F("Zülpicher Str./Gürtel");
        break;
    }
    case 356067:
    {
        returnValue = F("Zülpicher Wall");
        break;
    }
    case 356068:
    {
        returnValue = F("Zülpicher Weg");
        break;
    }
    case 356069:
    {
        returnValue = F("Zünderstr.");
        break;
    }
    case 356070:
    {
        returnValue = F("Zündhölzlberg");
        break;
    }
    case 356071:
    {
        returnValue = F("Zündhütchenweg");
        break;
    }
    case 356072:
    {
        returnValue = F("Zündhütle Weg");
        break;
    }
    case 356073:
    {
        returnValue = F("Zündorfer Weg");
        break;
    }
    case 356074:
    {
        returnValue = F("Zünftestr.");
        break;
    }
    case 356075:
    {
        returnValue = F("Züntersbacher Str.");
        break;
    }
    case 356076:
    {
        returnValue = F("Züntersbacher Weg");
        break;
    }
    case 356077:
    {
        returnValue = F("Zürbacher Weg");
        break;
    }
    case 356078:
    {
        returnValue = F("Zürch");
        break;
    }
    case 356079:
    {
        returnValue = F("Zürchau");
        break;
    }
    case 356080:
    {
        returnValue = F("Zürcher Str.");
        break;
    }
    case 356081:
    {
        returnValue = F("Zürcher Weg");
        break;
    }
    case 356082:
    {
        returnValue = F("Zürcherplatz");
        break;
    }
    case 356083:
    {
        returnValue = F("Züricher Str.");
        break;
    }
    case 356084:
    {
        returnValue = F("Züricher Weg");
        break;
    }
    case 356085:
    {
        returnValue = F("Zürichseestr.");
        break;
    }
    case 356086:
    {
        returnValue = F("Zürkvitzer Str.");
        break;
    }
    case 356087:
    {
        returnValue = F("Zürnerstr.");
        break;
    }
    case 356088:
    {
        returnValue = F("Zürnhaldeweg");
        break;
    }
    case 356089:
    {
        returnValue = F("Zürnkamp");
        break;
    }
    case 356090:
    {
        returnValue = F("Zürnstr.");
        break;
    }
    case 356091:
    {
        returnValue = F("Zürnweg");
        break;
    }
    case 356092:
    {
        returnValue = F("Züsch");
        break;
    }
    case 356093:
    {
        returnValue = F("Züschener Str.");
        break;
    }
    case 356094:
    {
        returnValue = F("Züscher Str.");
        break;
    }
    case 356095:
    {
        returnValue = F("Züscherwaldstr.");
        break;
    }
    case 356096:
    {
        returnValue = F("Züscherwies");
        break;
    }
    case 356097:
    {
        returnValue = F("Züsedomer Str.");
        break;
    }
    case 356098:
    {
        returnValue = F("Zütphener Str.");
        break;
    }
    case 356099:
    {
        returnValue = F("Zütphenstr.");
        break;
    }
    case 356100:
    {
        returnValue = F("Züttlinger Str.");
        break;
    }
    case 356101:
    {
        returnValue = F("Zützener Dorfstr.");
        break;
    }
    case 356102:
    {
        returnValue = F("Zützschendorfer Str.");
        break;
    }
    case 356103:
    {
        returnValue = F("Züwerinks Kamp");
        break;
    }
    }
    return returnValue;
}
