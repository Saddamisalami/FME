#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameI3(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 170017:
    {
        returnValue = F("In der Schleifwiese");
        break;
    }
    case 170018:
    {
        returnValue = F("In der Schleit");
        break;
    }
    case 170019:
    {
        returnValue = F("In der Schlemmwiese");
        break;
    }
    case 170020:
    {
        returnValue = F("In der Schlenke");
        break;
    }
    case 170021:
    {
        returnValue = F("In der Schley");
        break;
    }
    case 170022:
    {
        returnValue = F("In der Schlicht");
        break;
    }
    case 170023:
    {
        returnValue = F("In der Schliem");
        break;
    }
    case 170024:
    {
        returnValue = F("In der Schlimt");
        break;
    }
    case 170025:
    {
        returnValue = F("In der Schloßdelle");
        break;
    }
    case 170026:
    {
        returnValue = F("In der Schloßwiese");
        break;
    }
    case 170027:
    {
        returnValue = F("In der Schlucht");
        break;
    }
    case 170028:
    {
        returnValue = F("In der Schlung");
        break;
    }
    case 170029:
    {
        returnValue = F("In der Schläthe");
        break;
    }
    case 170030:
    {
        returnValue = F("In der Schlöte");
        break;
    }
    case 170031:
    {
        returnValue = F("In der Schmalau");
        break;
    }
    case 170032:
    {
        returnValue = F("In der Schmalbach");
        break;
    }
    case 170033:
    {
        returnValue = F("In der Schmalmke");
        break;
    }
    case 170034:
    {
        returnValue = F("In der Schmalnau");
        break;
    }
    case 170035:
    {
        returnValue = F("In der Schmelz");
        break;
    }
    case 170036:
    {
        returnValue = F("In der Schmelze");
        break;
    }
    case 170037:
    {
        returnValue = F("In der Schmidwies");
        break;
    }
    case 170038:
    {
        returnValue = F("In der Schmiede");
        break;
    }
    case 170039:
    {
        returnValue = F("In der Schmiedinghausen");
        break;
    }
    case 170040:
    {
        returnValue = F("In der Schmiedsmatt");
        break;
    }
    case 170041:
    {
        returnValue = F("In der Schmucken");
        break;
    }
    case 170042:
    {
        returnValue = F("In der Schmälze");
        break;
    }
    case 170043:
    {
        returnValue = F("In der Schnappendose");
        break;
    }
    case 170044:
    {
        returnValue = F("In der Schnat");
        break;
    }
    case 170045:
    {
        returnValue = F("In der Schneekaule");
        break;
    }
    case 170046:
    {
        returnValue = F("In der Schneisenbach");
        break;
    }
    case 170047:
    {
        returnValue = F("In der Schneithohl");
        break;
    }
    case 170048:
    {
        returnValue = F("In der Schnepf");
        break;
    }
    case 170049:
    {
        returnValue = F("In der Schnette");
        break;
    }
    case 170050:
    {
        returnValue = F("In der Schnitzerin");
        break;
    }
    case 170051:
    {
        returnValue = F("In der Schorbach");
        break;
    }
    case 170052:
    {
        returnValue = F("In der Schorr");
        break;
    }
    case 170053:
    {
        returnValue = F("In der Schrai");
        break;
    }
    case 170054:
    {
        returnValue = F("In der Schrand");
        break;
    }
    case 170055:
    {
        returnValue = F("In der Schrapheide");
        break;
    }
    case 170056:
    {
        returnValue = F("In der Schratwanne");
        break;
    }
    case 170057:
    {
        returnValue = F("In der Schrei");
        break;
    }
    case 170058:
    {
        returnValue = F("In der Schreitwag");
        break;
    }
    case 170059:
    {
        returnValue = F("In der Schremsche");
        break;
    }
    case 170060:
    {
        returnValue = F("In der Schulgasse");
        break;
    }
    case 170061:
    {
        returnValue = F("In der Schultelle");
        break;
    }
    case 170062:
    {
        returnValue = F("In der Schwaige");
        break;
    }
    case 170063:
    {
        returnValue = F("In der Schwartmecke");
        break;
    }
    case 170064:
    {
        returnValue = F("In der Schwarzenbach");
        break;
    }
    case 170065:
    {
        returnValue = F("In der Schweiz");
        break;
    }
    case 170066:
    {
        returnValue = F("In der Schweng");
        break;
    }
    case 170067:
    {
        returnValue = F("In der Schwenk");
        break;
    }
    case 170068:
    {
        returnValue = F("In der Schwärz");
        break;
    }
    case 170069:
    {
        returnValue = F("In der Schwärze");
        break;
    }
    case 170070:
    {
        returnValue = F("In der Schwärzgrub");
        break;
    }
    case 170071:
    {
        returnValue = F("In der Schäferbreite");
        break;
    }
    case 170072:
    {
        returnValue = F("In der Schäferei");
        break;
    }
    case 170073:
    {
        returnValue = F("In der Schöge");
        break;
    }
    case 170074:
    {
        returnValue = F("In der Schönauer Aue");
        break;
    }
    case 170075:
    {
        returnValue = F("In der Seebricht");
        break;
    }
    case 170076:
    {
        returnValue = F("In der Seege");
        break;
    }
    case 170077:
    {
        returnValue = F("In der Seegrube");
        break;
    }
    case 170078:
    {
        returnValue = F("In der Seehalde");
        break;
    }
    case 170079:
    {
        returnValue = F("In der Seehecke");
        break;
    }
    case 170080:
    {
        returnValue = F("In der Seekoppel");
        break;
    }
    case 170081:
    {
        returnValue = F("In der Seel");
        break;
    }
    case 170082:
    {
        returnValue = F("In der Seelacht");
        break;
    }
    case 170083:
    {
        returnValue = F("In der Seelbach");
        break;
    }
    case 170084:
    {
        returnValue = F("In der Seewiese");
        break;
    }
    case 170085:
    {
        returnValue = F("In der Sehl");
        break;
    }
    case 170086:
    {
        returnValue = F("In der Seibertsklinge");
        break;
    }
    case 170087:
    {
        returnValue = F("In der Seife");
        break;
    }
    case 170088:
    {
        returnValue = F("In der Seifwies");
        break;
    }
    case 170089:
    {
        returnValue = F("In der Seilmecke");
        break;
    }
    case 170090:
    {
        returnValue = F("In der Seit");
        break;
    }
    case 170091:
    {
        returnValue = F("In der Seite");
        break;
    }
    case 170092:
    {
        returnValue = F("In der Seiters");
        break;
    }
    case 170093:
    {
        returnValue = F("In der Selau");
        break;
    }
    case 170094:
    {
        returnValue = F("In der Selig");
        break;
    }
    case 170095:
    {
        returnValue = F("In der Selle");
        break;
    }
    case 170096:
    {
        returnValue = F("In der Sengenau");
        break;
    }
    case 170097:
    {
        returnValue = F("In der Senke");
        break;
    }
    case 170098:
    {
        returnValue = F("In der Servine");
        break;
    }
    case 170099:
    {
        returnValue = F("In der Setz");
        break;
    }
    case 170100:
    {
        returnValue = F("In der Setzelbach");
        break;
    }
    case 170101:
    {
        returnValue = F("In der Seufze");
        break;
    }
    case 170102:
    {
        returnValue = F("In der Seugn");
        break;
    }
    case 170103:
    {
        returnValue = F("In der Siedlerruh");
        break;
    }
    case 170104:
    {
        returnValue = F("In der Siedlung");
        break;
    }
    case 170105:
    {
        returnValue = F("In der Sieke");
        break;
    }
    case 170106:
    {
        returnValue = F("In der Sieken");
        break;
    }
    case 170107:
    {
        returnValue = F("In der Silbergrube");
        break;
    }
    case 170108:
    {
        returnValue = F("In der Silberhellen");
        break;
    }
    case 170109:
    {
        returnValue = F("In der Silberkuhle");
        break;
    }
    case 170110:
    {
        returnValue = F("In der Silbert");
        break;
    }
    case 170111:
    {
        returnValue = F("In der Sillwecke");
        break;
    }
    case 170112:
    {
        returnValue = F("In der Silz");
        break;
    }
    case 170113:
    {
        returnValue = F("In der Simmete");
        break;
    }
    case 170114:
    {
        returnValue = F("In der Sohlbach");
        break;
    }
    case 170115:
    {
        returnValue = F("In der Sohle");
        break;
    }
    case 170116:
    {
        returnValue = F("In der Sohlriede");
        break;
    }
    case 170117:
    {
        returnValue = F("In der Sold");
        break;
    }
    case 170118:
    {
        returnValue = F("In der Sommerbach");
        break;
    }
    case 170119:
    {
        returnValue = F("In der Sommerhalde");
        break;
    }
    case 170120:
    {
        returnValue = F("In der Sommerwiese");
        break;
    }
    case 170121:
    {
        returnValue = F("In der Sonne");
        break;
    }
    case 170122:
    {
        returnValue = F("In der Sonnenleite");
        break;
    }
    case 170123:
    {
        returnValue = F("In der Sonnheil");
        break;
    }
    case 170124:
    {
        returnValue = F("In der Soolweid");
        break;
    }
    case 170125:
    {
        returnValue = F("In der Sorg");
        break;
    }
    case 170126:
    {
        returnValue = F("In der Spaltanlage");
        break;
    }
    case 170127:
    {
        returnValue = F("In der Spann");
        break;
    }
    case 170128:
    {
        returnValue = F("In der Spaule");
        break;
    }
    case 170129:
    {
        returnValue = F("In der Speiche");
        break;
    }
    case 170130:
    {
        returnValue = F("In der Speidt");
        break;
    }
    case 170131:
    {
        returnValue = F("In der Sperr");
        break;
    }
    case 170132:
    {
        returnValue = F("In der Spichwiese");
        break;
    }
    case 170133:
    {
        returnValue = F("In der Spilsit");
        break;
    }
    case 170134:
    {
        returnValue = F("In der Spitz");
        break;
    }
    case 170135:
    {
        returnValue = F("In der Spitzbreite");
        break;
    }
    case 170136:
    {
        returnValue = F("In der Spitze");
        break;
    }
    case 170137:
    {
        returnValue = F("In der Spreiz");
        break;
    }
    case 170138:
    {
        returnValue = F("In der Spreng");
        break;
    }
    case 170139:
    {
        returnValue = F("In der Springheide");
        break;
    }
    case 170140:
    {
        returnValue = F("In der Spöck");
        break;
    }
    case 170141:
    {
        returnValue = F("In der Spöcke");
        break;
    }
    case 170142:
    {
        returnValue = F("In der Staar");
        break;
    }
    case 170143:
    {
        returnValue = F("In der Stadt");
        break;
    }
    case 170144:
    {
        returnValue = F("In der Stammecke");
        break;
    }
    case 170145:
    {
        returnValue = F("In der Staring");
        break;
    }
    case 170146:
    {
        returnValue = F("In der Stark");
        break;
    }
    case 170147:
    {
        returnValue = F("In der Staudriede");
        break;
    }
    case 170148:
    {
        returnValue = F("In der Steegwiese");
        break;
    }
    case 170149:
    {
        returnValue = F("In der Steggel");
        break;
    }
    case 170150:
    {
        returnValue = F("In der Stegwiese");
        break;
    }
    case 170151:
    {
        returnValue = F("In der Stehl");
        break;
    }
    case 170152:
    {
        returnValue = F("In der Stehle");
        break;
    }
    case 170153:
    {
        returnValue = F("In der Steide");
        break;
    }
    case 170154:
    {
        returnValue = F("In der Steier");
        break;
    }
    case 170155:
    {
        returnValue = F("In der Steig");
        break;
    }
    case 170156:
    {
        returnValue = F("In der Steige");
        break;
    }
    case 170157:
    {
        returnValue = F("In der Steighalde");
        break;
    }
    case 170158:
    {
        returnValue = F("In der Steinau");
        break;
    }
    case 170159:
    {
        returnValue = F("In der Steinbach");
        break;
    }
    case 170160:
    {
        returnValue = F("In der Steinbachswiese");
        break;
    }
    case 170161:
    {
        returnValue = F("In der Steinbreche");
        break;
    }
    case 170162:
    {
        returnValue = F("In der Steinbrede");
        break;
    }
    case 170163:
    {
        returnValue = F("In der Steinbreite");
        break;
    }
    case 170164:
    {
        returnValue = F("In der Steinbäckerei");
        break;
    }
    case 170165:
    {
        returnValue = F("In der Steine");
        break;
    }
    case 170166:
    {
        returnValue = F("In der Steinengass");
        break;
    }
    case 170167:
    {
        returnValue = F("In der Steinfurche");
        break;
    }
    case 170168:
    {
        returnValue = F("In der Steingrube");
        break;
    }
    case 170169:
    {
        returnValue = F("In der Steinhalde");
        break;
    }
    case 170170:
    {
        returnValue = F("In der Steinheck");
        break;
    }
    case 170171:
    {
        returnValue = F("In der Steinhecke");
        break;
    }
    case 170172:
    {
        returnValue = F("In der Steinheide");
        break;
    }
    case 170173:
    {
        returnValue = F("In der Steinhuf");
        break;
    }
    case 170174:
    {
        returnValue = F("In der Steinhöhle");
        break;
    }
    case 170175:
    {
        returnValue = F("In der Steiniger Heide");
        break;
    }
    case 170176:
    {
        returnValue = F("In der Steinkaul");
        break;
    }
    case 170177:
    {
        returnValue = F("In der Steinkaut");
        break;
    }
    case 170178:
    {
        returnValue = F("In der Steinkaute");
        break;
    }
    case 170179:
    {
        returnValue = F("In der Steinkuhle");
        break;
    }
    case 170180:
    {
        returnValue = F("In der Steinriede");
        break;
    }
    case 170181:
    {
        returnValue = F("In der Steinshecke");
        break;
    }
    case 170182:
    {
        returnValue = F("In der Steinwiese");
        break;
    }
    case 170183:
    {
        returnValue = F("In der Steip");
        break;
    }
    case 170184:
    {
        returnValue = F("In der Stelle");
        break;
    }
    case 170185:
    {
        returnValue = F("In der Stellohe");
        break;
    }
    case 170186:
    {
        returnValue = F("In der Stennert");
        break;
    }
    case 170187:
    {
        returnValue = F("In der Stesse");
        break;
    }
    case 170188:
    {
        returnValue = F("In der Stetbach");
        break;
    }
    case 170189:
    {
        returnValue = F("In der Steubach");
        break;
    }
    case 170190:
    {
        returnValue = F("In der Steverau");
        break;
    }
    case 170191:
    {
        returnValue = F("In der Stieg");
        break;
    }
    case 170192:
    {
        returnValue = F("In der Stiege");
        break;
    }
    case 170193:
    {
        returnValue = F("In der Stier");
        break;
    }
    case 170194:
    {
        returnValue = F("In der Stockath");
        break;
    }
    case 170195:
    {
        returnValue = F("In der Stockbreite");
        break;
    }
    case 170196:
    {
        returnValue = F("In der Stockleiten");
        break;
    }
    case 170197:
    {
        returnValue = F("In der Stockmatt");
        break;
    }
    case 170198:
    {
        returnValue = F("In der Stockwiese");
        break;
    }
    case 170199:
    {
        returnValue = F("In der Stolle");
        break;
    }
    case 170200:
    {
        returnValue = F("In der Stolzgewann");
        break;
    }
    case 170201:
    {
        returnValue = F("In der Stolzwiese");
        break;
    }
    case 170202:
    {
        returnValue = F("In der Str.");
        break;
    }
    case 170203:
    {
        returnValue = F("In der Straut");
        break;
    }
    case 170204:
    {
        returnValue = F("In der Straßheck");
        break;
    }
    case 170205:
    {
        returnValue = F("In der Straßwies");
        break;
    }
    case 170206:
    {
        returnValue = F("In der Strecke");
        break;
    }
    case 170207:
    {
        returnValue = F("In der Streitau");
        break;
    }
    case 170208:
    {
        returnValue = F("In der Streng");
        break;
    }
    case 170209:
    {
        returnValue = F("In der Strenge");
        break;
    }
    case 170210:
    {
        returnValue = F("In der Striet");
        break;
    }
    case 170211:
    {
        returnValue = F("In der Strieth");
        break;
    }
    case 170212:
    {
        returnValue = F("In der Stritt");
        break;
    }
    case 170213:
    {
        returnValue = F("In der Strodtholzsiedlung");
        break;
    }
    case 170214:
    {
        returnValue = F("In der Stroot");
        break;
    }
    case 170215:
    {
        returnValue = F("In der Stroote");
        break;
    }
    case 170216:
    {
        returnValue = F("In der Stroth");
        break;
    }
    case 170217:
    {
        returnValue = F("In der Strothe");
        break;
    }
    case 170218:
    {
        returnValue = F("In der Strupp");
        break;
    }
    case 170219:
    {
        returnValue = F("In der Strut");
        break;
    }
    case 170220:
    {
        returnValue = F("In der Struth");
        break;
    }
    case 170221:
    {
        returnValue = F("In der Strutt");
        break;
    }
    case 170222:
    {
        returnValue = F("In der Strutwies");
        break;
    }
    case 170223:
    {
        returnValue = F("In der Strünkede");
        break;
    }
    case 170224:
    {
        returnValue = F("In der Strütt");
        break;
    }
    case 170225:
    {
        returnValue = F("In der Stube");
        break;
    }
    case 170226:
    {
        returnValue = F("In der Stubicke");
        break;
    }
    case 170227:
    {
        returnValue = F("In der Stöck");
        break;
    }
    case 170228:
    {
        returnValue = F("In der Stübbecke");
        break;
    }
    case 170229:
    {
        returnValue = F("In der Stüfke");
        break;
    }
    case 170230:
    {
        returnValue = F("In der Stühe");
        break;
    }
    case 170231:
    {
        returnValue = F("In der Stühheide");
        break;
    }
    case 170232:
    {
        returnValue = F("In der Sue");
        break;
    }
    case 170233:
    {
        returnValue = F("In der Suhle");
        break;
    }
    case 170234:
    {
        returnValue = F("In der Sylbach");
        break;
    }
    case 170235:
    {
        returnValue = F("In der Sägmatt");
        break;
    }
    case 170236:
    {
        returnValue = F("In der Sölz");
        break;
    }
    case 170237:
    {
        returnValue = F("In der Südfeldmark");
        break;
    }
    case 170238:
    {
        returnValue = F("In der Sühne");
        break;
    }
    case 170239:
    {
        returnValue = F("In der Süll");
        break;
    }
    case 170240:
    {
        returnValue = F("In der Sülte");
        break;
    }
    case 170241:
    {
        returnValue = F("In der Sülzaue");
        break;
    }
    case 170242:
    {
        returnValue = F("In der Sülze");
        break;
    }
    case 170243:
    {
        returnValue = F("In der Süppich");
        break;
    }
    case 170244:
    {
        returnValue = F("In der Sürsch");
        break;
    }
    case 170245:
    {
        returnValue = F("In der Sürst");
        break;
    }
    case 170246:
    {
        returnValue = F("In der Süßen Heide");
        break;
    }
    case 170247:
    {
        returnValue = F("In der Tafel");
        break;
    }
    case 170248:
    {
        returnValue = F("In der Tagweide");
        break;
    }
    case 170249:
    {
        returnValue = F("In der Talau");
        break;
    }
    case 170250:
    {
        returnValue = F("In der Talaue");
        break;
    }
    case 170251:
    {
        returnValue = F("In der Talklinge");
        break;
    }
    case 170252:
    {
        returnValue = F("In der Talsbach");
        break;
    }
    case 170253:
    {
        returnValue = F("In der Talwiese");
        break;
    }
    case 170254:
    {
        returnValue = F("In der Tannenkoppel");
        break;
    }
    case 170255:
    {
        returnValue = F("In der Taus");
        break;
    }
    case 170256:
    {
        returnValue = F("In der Techt");
        break;
    }
    case 170257:
    {
        returnValue = F("In der Teichgewann");
        break;
    }
    case 170258:
    {
        returnValue = F("In der Teichmatt");
        break;
    }
    case 170259:
    {
        returnValue = F("In der Teichwiese");
        break;
    }
    case 170260:
    {
        returnValue = F("In der Teilung");
        break;
    }
    case 170261:
    {
        returnValue = F("In der Telle");
        break;
    }
    case 170262:
    {
        returnValue = F("In der Tennscheuer");
        break;
    }
    case 170263:
    {
        returnValue = F("In der Tente");
        break;
    }
    case 170264:
    {
        returnValue = F("In der Thal");
        break;
    }
    case 170265:
    {
        returnValue = F("In der Thalen");
        break;
    }
    case 170266:
    {
        returnValue = F("In der Theiswies");
        break;
    }
    case 170267:
    {
        returnValue = F("In der Thiebrei");
        break;
    }
    case 170268:
    {
        returnValue = F("In der Threidt");
        break;
    }
    case 170269:
    {
        returnValue = F("In der Thunhorst");
        break;
    }
    case 170270:
    {
        returnValue = F("In der Thält");
        break;
    }
    case 170271:
    {
        returnValue = F("In der Thürn");
        break;
    }
    case 170272:
    {
        returnValue = F("In der Tiefenbach");
        break;
    }
    case 170273:
    {
        returnValue = F("In der Tiefenlake");
        break;
    }
    case 170274:
    {
        returnValue = F("In der Tiefgewann");
        break;
    }
    case 170275:
    {
        returnValue = F("In der Tiefschley");
        break;
    }
    case 170276:
    {
        returnValue = F("In der Tieftrift");
        break;
    }
    case 170277:
    {
        returnValue = F("In der Tilke");
        break;
    }
    case 170278:
    {
        returnValue = F("In der Toffel");
        break;
    }
    case 170279:
    {
        returnValue = F("In der Trabe");
        break;
    }
    case 170280:
    {
        returnValue = F("In der Traf");
        break;
    }
    case 170281:
    {
        returnValue = F("In der Trahe");
        break;
    }
    case 170282:
    {
        returnValue = F("In der Traten");
        break;
    }
    case 170283:
    {
        returnValue = F("In der Trebe");
        break;
    }
    case 170284:
    {
        returnValue = F("In der Treef");
        break;
    }
    case 170285:
    {
        returnValue = F("In der Tref");
        break;
    }
    case 170286:
    {
        returnValue = F("In der Treff");
        break;
    }
    case 170287:
    {
        returnValue = F("In der Trefft");
        break;
    }
    case 170288:
    {
        returnValue = F("In der Treft");
        break;
    }
    case 170289:
    {
        returnValue = F("In der Treib");
        break;
    }
    case 170290:
    {
        returnValue = F("In der Treibe");
        break;
    }
    case 170291:
    {
        returnValue = F("In der Treif");
        break;
    }
    case 170292:
    {
        returnValue = F("In der Tried");
        break;
    }
    case 170293:
    {
        returnValue = F("In der Trierheck");
        break;
    }
    case 170294:
    {
        returnValue = F("In der Trifft");
        break;
    }
    case 170295:
    {
        returnValue = F("In der Trift");
        break;
    }
    case 170296:
    {
        returnValue = F("In der Tripp");
        break;
    }
    case 170297:
    {
        returnValue = F("In der Trubach");
        break;
    }
    case 170298:
    {
        returnValue = F("In der Trudlu");
        break;
    }
    case 170299:
    {
        returnValue = F("In der Träb");
        break;
    }
    case 170300:
    {
        returnValue = F("In der Träf");
        break;
    }
    case 170301:
    {
        returnValue = F("In der Tränk");
        break;
    }
    case 170302:
    {
        returnValue = F("In der Tränke");
        break;
    }
    case 170303:
    {
        returnValue = F("In der Tuchbleiche");
        break;
    }
    case 170304:
    {
        returnValue = F("In der Twacht");
        break;
    }
    case 170305:
    {
        returnValue = F("In der Tweer");
        break;
    }
    case 170306:
    {
        returnValue = F("In der Tweetje");
        break;
    }
    case 170307:
    {
        returnValue = F("In der Twegte");
        break;
    }
    case 170308:
    {
        returnValue = F("In der Twete");
        break;
    }
    case 170309:
    {
        returnValue = F("In der Twiet");
        break;
    }
    case 170310:
    {
        returnValue = F("In der Twiete");
        break;
    }
    case 170311:
    {
        returnValue = F("In der Twissel");
        break;
    }
    case 170312:
    {
        returnValue = F("In der Täsch");
        break;
    }
    case 170313:
    {
        returnValue = F("In der Täschen");
        break;
    }
    case 170314:
    {
        returnValue = F("In der Töngeswiese");
        break;
    }
    case 170315:
    {
        returnValue = F("In der Türkei");
        break;
    }
    case 170316:
    {
        returnValue = F("In der Türkengewanne");
        break;
    }
    case 170317:
    {
        returnValue = F("In der Uhrgasse");
        break;
    }
    case 170318:
    {
        returnValue = F("In der Ulm");
        break;
    }
    case 170319:
    {
        returnValue = F("In der Union");
        break;
    }
    case 170320:
    {
        returnValue = F("In der Unteren Rabenau");
        break;
    }
    case 170321:
    {
        returnValue = F("In der Unteren Rombach");
        break;
    }
    case 170322:
    {
        returnValue = F("In der Untermatt");
        break;
    }
    case 170323:
    {
        returnValue = F("In der Urwies");
        break;
    }
    case 170324:
    {
        returnValue = F("In der Vechte");
        break;
    }
    case 170325:
    {
        returnValue = F("In der Veenhey");
        break;
    }
    case 170326:
    {
        returnValue = F("In der Vieth");
        break;
    }
    case 170327:
    {
        returnValue = F("In der Vietiheide");
        break;
    }
    case 170328:
    {
        returnValue = F("In der Villwies");
        break;
    }
    case 170329:
    {
        returnValue = F("In der Vlötz");
        break;
    }
    case 170330:
    {
        returnValue = F("In der Vogelau");
        break;
    }
    case 170331:
    {
        returnValue = F("In der Vogelstang");
        break;
    }
    case 170332:
    {
        returnValue = F("In der Vogelweide");
        break;
    }
    case 170333:
    {
        returnValue = F("In der Vohlswiese");
        break;
    }
    case 170334:
    {
        returnValue = F("In der Vollmersbach");
        break;
    }
    case 170335:
    {
        returnValue = F("In der Vorderecke");
        break;
    }
    case 170336:
    {
        returnValue = F("In der Vore");
        break;
    }
    case 170337:
    {
        returnValue = F("In der Vorstadt");
        break;
    }
    case 170338:
    {
        returnValue = F("In der Waag");
        break;
    }
    case 170339:
    {
        returnValue = F("In der Waage");
        break;
    }
    case 170340:
    {
        returnValue = F("In der Wacholder");
        break;
    }
    case 170341:
    {
        returnValue = F("In der Wahrbach");
        break;
    }
    case 170342:
    {
        returnValue = F("In der Waid");
        break;
    }
    case 170343:
    {
        returnValue = F("In der Walch");
        break;
    }
    case 170344:
    {
        returnValue = F("In der Waldemei");
        break;
    }
    case 170345:
    {
        returnValue = F("In der Waldemey");
        break;
    }
    case 170346:
    {
        returnValue = F("In der Waldklause");
        break;
    }
    case 170347:
    {
        returnValue = F("In der Waldlust");
        break;
    }
    case 170348:
    {
        returnValue = F("In der Waldsiedlung");
        break;
    }
    case 170349:
    {
        returnValue = F("In der Waldwies");
        break;
    }
    case 170350:
    {
        returnValue = F("In der Waldwiese");
        break;
    }
    case 170351:
    {
        returnValue = F("In der Wallgis");
        break;
    }
    case 170352:
    {
        returnValue = F("In der Walmecke");
        break;
    }
    case 170353:
    {
        returnValue = F("In der Walsbach");
        break;
    }
    case 170354:
    {
        returnValue = F("In der Walsterwiese");
        break;
    }
    case 170355:
    {
        returnValue = F("In der Waltersbach");
        break;
    }
    case 170356:
    {
        returnValue = F("In der Wann");
        break;
    }
    case 170357:
    {
        returnValue = F("In der Wanne");
        break;
    }
    case 170358:
    {
        returnValue = F("In der Warfe");
        break;
    }
    case 170359:
    {
        returnValue = F("In der Wart");
        break;
    }
    case 170360:
    {
        returnValue = F("In der Warth");
        break;
    }
    case 170361:
    {
        returnValue = F("In der Warthütte");
        break;
    }
    case 170362:
    {
        returnValue = F("In der Wasch");
        break;
    }
    case 170363:
    {
        returnValue = F("In der Waschwiese");
        break;
    }
    case 170364:
    {
        returnValue = F("In der Wasserecke");
        break;
    }
    case 170365:
    {
        returnValue = F("In der Wasserfalle");
        break;
    }
    case 170366:
    {
        returnValue = F("In der Wassergall");
        break;
    }
    case 170367:
    {
        returnValue = F("In der Wasserstadt");
        break;
    }
    case 170368:
    {
        returnValue = F("In der Wasserstube");
        break;
    }
    case 170369:
    {
        returnValue = F("In der Wasserwiese");
        break;
    }
    case 170370:
    {
        returnValue = F("In der Webel");
        break;
    }
    case 170371:
    {
        returnValue = F("In der Wechinger Dell");
        break;
    }
    case 170372:
    {
        returnValue = F("In der Weed");
        break;
    }
    case 170373:
    {
        returnValue = F("In der Wehm");
        break;
    }
    case 170374:
    {
        returnValue = F("In der Wehme");
        break;
    }
    case 170375:
    {
        returnValue = F("In der Wehr");
        break;
    }
    case 170376:
    {
        returnValue = F("In der Weid");
        break;
    }
    case 170377:
    {
        returnValue = F("In der Weidbach");
        break;
    }
    case 170378:
    {
        returnValue = F("In der Weide");
        break;
    }
    case 170379:
    {
        returnValue = F("In der Weidenbach");
        break;
    }
    case 170380:
    {
        returnValue = F("In der Weidenklinge");
        break;
    }
    case 170381:
    {
        returnValue = F("In der Weidenwies");
        break;
    }
    case 170382:
    {
        returnValue = F("In der Weiding");
        break;
    }
    case 170383:
    {
        returnValue = F("In der Weidwiese");
        break;
    }
    case 170384:
    {
        returnValue = F("In der Weidwäsch");
        break;
    }
    case 170385:
    {
        returnValue = F("In der Weiersbach");
        break;
    }
    case 170386:
    {
        returnValue = F("In der Weierwiese");
        break;
    }
    case 170387:
    {
        returnValue = F("In der Weiherdell");
        break;
    }
    case 170388:
    {
        returnValue = F("In der Weiherwies");
        break;
    }
    case 170389:
    {
        returnValue = F("In der Weilbach");
        break;
    }
    case 170390:
    {
        returnValue = F("In der Weimannsbach");
        break;
    }
    case 170391:
    {
        returnValue = F("In der Weist");
        break;
    }
    case 170392:
    {
        returnValue = F("In der Weizengewann");
        break;
    }
    case 170393:
    {
        returnValue = F("In der Weizenworth");
        break;
    }
    case 170394:
    {
        returnValue = F("In der Weißenburg");
        break;
    }
    case 170395:
    {
        returnValue = F("In der Weißerde");
        break;
    }
    case 170396:
    {
        returnValue = F("In der Weißheit");
        break;
    }
    case 170397:
    {
        returnValue = F("In der Welheimer Mark");
        break;
    }
    case 170398:
    {
        returnValue = F("In der Welke");
        break;
    }
    case 170399:
    {
        returnValue = F("In der Welle");
        break;
    }
    case 170400:
    {
        returnValue = F("In der Wellingse");
        break;
    }
    case 170401:
    {
        returnValue = F("In der Welsebach");
        break;
    }
    case 170402:
    {
        returnValue = F("In der Welsmicke");
        break;
    }
    case 170403:
    {
        returnValue = F("In der Wend");
        break;
    }
    case 170404:
    {
        returnValue = F("In der Wenk");
        break;
    }
    case 170405:
    {
        returnValue = F("In der Wennig");
        break;
    }
    case 170406:
    {
        returnValue = F("In der Werr");
        break;
    }
    case 170407:
    {
        returnValue = F("In der Werraaue");
        break;
    }
    case 170408:
    {
        returnValue = F("In der Werth");
        break;
    }
    case 170409:
    {
        returnValue = F("In der Wesbach");
        break;
    }
    case 170410:
    {
        returnValue = F("In der Wesch");
        break;
    }
    case 170411:
    {
        returnValue = F("In der Wesser");
        break;
    }
    case 170412:
    {
        returnValue = F("In der Westerich");
        break;
    }
    case 170413:
    {
        returnValue = F("In der Westfeldmark");
        break;
    }
    case 170414:
    {
        returnValue = F("In der Weth");
        break;
    }
    case 170415:
    {
        returnValue = F("In der Wettau");
        break;
    }
    case 170416:
    {
        returnValue = F("In der Wettau 1-12");
        break;
    }
    case 170417:
    {
        returnValue = F("In der Wettau 13-28");
        break;
    }
    case 170418:
    {
        returnValue = F("In der Wette");
        break;
    }
    case 170419:
    {
        returnValue = F("In der Wettel");
        break;
    }
    case 170420:
    {
        returnValue = F("In der Wettmühle");
        break;
    }
    case 170421:
    {
        returnValue = F("In der Wieden");
        break;
    }
    case 170422:
    {
        returnValue = F("In der Wiedi");
        break;
    }
    case 170423:
    {
        returnValue = F("In der Wiege");
        break;
    }
    case 170424:
    {
        returnValue = F("In der Wiehre");
        break;
    }
    case 170425:
    {
        returnValue = F("In der Wiehwisch");
        break;
    }
    case 170426:
    {
        returnValue = F("In der Wiem");
        break;
    }
    case 170427:
    {
        returnValue = F("In der Wiemicke");
        break;
    }
    case 170428:
    {
        returnValue = F("In der Wierde");
        break;
    }
    case 170429:
    {
        returnValue = F("In der Wiere");
        break;
    }
    case 170430:
    {
        returnValue = F("In der Wies");
        break;
    }
    case 170431:
    {
        returnValue = F("In der Wiese");
        break;
    }
    case 170432:
    {
        returnValue = F("In der Wiesenaue");
        break;
    }
    case 170433:
    {
        returnValue = F("In der Wiesentrop");
        break;
    }
    case 170434:
    {
        returnValue = F("In der Wihr");
        break;
    }
    case 170435:
    {
        returnValue = F("In der Wildbahn");
        break;
    }
    case 170436:
    {
        returnValue = F("In der Wildnis");
        break;
    }
    case 170437:
    {
        returnValue = F("In der Wimm");
        break;
    }
    case 170438:
    {
        returnValue = F("In der Windling");
        break;
    }
    case 170439:
    {
        returnValue = F("In der Windstube");
        break;
    }
    case 170440:
    {
        returnValue = F("In der Wingertsgewanne");
        break;
    }
    case 170441:
    {
        returnValue = F("In der Wingertsmauer");
        break;
    }
    case 170442:
    {
        returnValue = F("In der Winkelsheck");
        break;
    }
    case 170443:
    {
        returnValue = F("In der Winn");
        break;
    }
    case 170444:
    {
        returnValue = F("In der Wintergaß");
        break;
    }
    case 170445:
    {
        returnValue = F("In der Winterhell");
        break;
    }
    case 170446:
    {
        returnValue = F("In der Winterhelle");
        break;
    }
    case 170447:
    {
        returnValue = F("In der Winterlied");
        break;
    }
    case 170448:
    {
        returnValue = F("In der Winterlyt");
        break;
    }
    case 170449:
    {
        returnValue = F("In der Winzenbecke");
        break;
    }
    case 170450:
    {
        returnValue = F("In der Wirbel");
        break;
    }
    case 170451:
    {
        returnValue = F("In der Wirde");
        break;
    }
    case 170452:
    {
        returnValue = F("In der Wirtswies");
        break;
    }
    case 170453:
    {
        returnValue = F("In der Wisch");
        break;
    }
    case 170454:
    {
        returnValue = F("In der With");
        break;
    }
    case 170455:
    {
        returnValue = F("In der Witmete");
        break;
    }
    case 170456:
    {
        returnValue = F("In der Wittum");
        break;
    }
    case 170457:
    {
        returnValue = F("In der Witz");
        break;
    }
    case 170458:
    {
        returnValue = F("In der Wolbig");
        break;
    }
    case 170459:
    {
        returnValue = F("In der Wolfsgrub");
        break;
    }
    case 170460:
    {
        returnValue = F("In der Wolfsgrube");
        break;
    }
    case 170461:
    {
        returnValue = F("In der Wolfshecke");
        break;
    }
    case 170462:
    {
        returnValue = F("In der Wolfskaul");
        break;
    }
    case 170463:
    {
        returnValue = F("In der Wolfskaut");
        break;
    }
    case 170464:
    {
        returnValue = F("In der Wolfskaute");
        break;
    }
    case 170465:
    {
        returnValue = F("In der Wolfsschlucht");
        break;
    }
    case 170466:
    {
        returnValue = F("In der Wolfswies");
        break;
    }
    case 170467:
    {
        returnValue = F("In der Wollreute");
        break;
    }
    case 170468:
    {
        returnValue = F("In der Wolsbach");
        break;
    }
    case 170469:
    {
        returnValue = F("In der Wolskermarsch");
        break;
    }
    case 170470:
    {
        returnValue = F("In der Woort");
        break;
    }
    case 170471:
    {
        returnValue = F("In der Wormau");
        break;
    }
    case 170472:
    {
        returnValue = F("In der Wormsheck");
        break;
    }
    case 170473:
    {
        returnValue = F("In der Worth");
        break;
    }
    case 170474:
    {
        returnValue = F("In der Wulfekuhle");
        break;
    }
    case 170475:
    {
        returnValue = F("In der Wälzebach");
        break;
    }
    case 170476:
    {
        returnValue = F("In der Wässerscheid");
        break;
    }
    case 170477:
    {
        returnValue = F("In der Wässerung");
        break;
    }
    case 170478:
    {
        returnValue = F("In der Wölpke");
        break;
    }
    case 170479:
    {
        returnValue = F("In der Wörde");
        break;
    }
    case 170480:
    {
        returnValue = F("In der Wörth");
        break;
    }
    case 170481:
    {
        returnValue = F("In der Wörthenlache");
        break;
    }
    case 170482:
    {
        returnValue = F("In der Wöste");
        break;
    }
    case 170483:
    {
        returnValue = F("In der Wünne");
        break;
    }
    case 170484:
    {
        returnValue = F("In der Würze");
        break;
    }
    case 170485:
    {
        returnValue = F("In der Wüste");
        break;
    }
    case 170486:
    {
        returnValue = F("In der Zahlbach");
        break;
    }
    case 170487:
    {
        returnValue = F("In der Zangershalde");
        break;
    }
    case 170488:
    {
        returnValue = F("In der Zech");
        break;
    }
    case 170489:
    {
        returnValue = F("In der Zehnt");
        break;
    }
    case 170490:
    {
        returnValue = F("In der Zeil");
        break;
    }
    case 170491:
    {
        returnValue = F("In der Zeitenbach");
        break;
    }
    case 170492:
    {
        returnValue = F("In der Zelch");
        break;
    }
    case 170493:
    {
        returnValue = F("In der Zell");
        break;
    }
    case 170494:
    {
        returnValue = F("In der Zennwies");
        break;
    }
    case 170495:
    {
        returnValue = F("In der Zeu");
        break;
    }
    case 170496:
    {
        returnValue = F("In der Zeun");
        break;
    }
    case 170497:
    {
        returnValue = F("In der Ziegelei");
        break;
    }
    case 170498:
    {
        returnValue = F("In der Ziegelheide");
        break;
    }
    case 170499:
    {
        returnValue = F("In der Ziegelhütte");
        break;
    }
    case 170500:
    {
        returnValue = F("In der Ziel");
        break;
    }
    case 170501:
    {
        returnValue = F("In der Zielgass");
        break;
    }
    case 170502:
    {
        returnValue = F("In der Zielswiese");
        break;
    }
    case 170503:
    {
        returnValue = F("In der Zillmatt");
        break;
    }
    case 170504:
    {
        returnValue = F("In der Zitadelle");
        break;
    }
    case 170505:
    {
        returnValue = F("In der Zitzenbach");
        break;
    }
    case 170506:
    {
        returnValue = F("In der Zwissel");
        break;
    }
    case 170507:
    {
        returnValue = F("In der alten Mühle");
        break;
    }
    case 170508:
    {
        returnValue = F("In der alten Str.");
        break;
    }
    case 170509:
    {
        returnValue = F("In der großen Au");
        break;
    }
    case 170510:
    {
        returnValue = F("In der großen Harras");
        break;
    }
    case 170511:
    {
        returnValue = F("In der grünen Gasse");
        break;
    }
    case 170512:
    {
        returnValue = F("In der hinteren Au");
        break;
    }
    case 170513:
    {
        returnValue = F("In der hintersten Kaul");
        break;
    }
    case 170514:
    {
        returnValue = F("In der kleinen Au");
        break;
    }
    case 170515:
    {
        returnValue = F("In der kleinen Eulenburg");
        break;
    }
    case 170516:
    {
        returnValue = F("In der kleinen Gasse");
        break;
    }
    case 170517:
    {
        returnValue = F("In der kleinen Harras");
        break;
    }
    case 170518:
    {
        returnValue = F("In der krummen Aue");
        break;
    }
    case 170519:
    {
        returnValue = F("In der langen Nacht");
        break;
    }
    case 170520:
    {
        returnValue = F("In der nassen Struth");
        break;
    }
    case 170521:
    {
        returnValue = F("In der neuen Halde");
        break;
    }
    case 170522:
    {
        returnValue = F("In der neuen Lach");
        break;
    }
    case 170523:
    {
        returnValue = F("In der oberen Burresdell");
        break;
    }
    case 170524:
    {
        returnValue = F("In der obersten Brücke");
        break;
    }
    case 170525:
    {
        returnValue = F("In der südlichen Au");
        break;
    }
    case 170526:
    {
        returnValue = F("In der unteren Au");
        break;
    }
    case 170527:
    {
        returnValue = F("In der Ährecke");
        break;
    }
    case 170528:
    {
        returnValue = F("In der Öd");
        break;
    }
    case 170529:
    {
        returnValue = F("In der Ölke");
        break;
    }
    case 170530:
    {
        returnValue = F("In der Ölkelter");
        break;
    }
    case 170531:
    {
        returnValue = F("In der Örth");
        break;
    }
    case 170532:
    {
        returnValue = F("In deär Queyte");
        break;
    }
    case 170533:
    {
        returnValue = F("In gen Rae");
        break;
    }
    case 170534:
    {
        returnValue = F("In het Ray");
        break;
    }
    case 170535:
    {
        returnValue = F("In het Veld");
        break;
    }
    case 170536:
    {
        returnValue = F("In Ägypten");
        break;
    }
    case 170537:
    {
        returnValue = F("In Ückerath");
        break;
    }
    case 170538:
    {
        returnValue = F("In'n Appelhoff");
        break;
    }
    case 170539:
    {
        returnValue = F("In'n Deel");
        break;
    }
    case 170540:
    {
        returnValue = F("In'n Deep Moor");
        break;
    }
    case 170541:
    {
        returnValue = F("In'n Diek");
        break;
    }
    case 170542:
    {
        returnValue = F("In'n Dörp");
        break;
    }
    case 170543:
    {
        returnValue = F("In'n Sack");
        break;
    }
    case 170544:
    {
        returnValue = F("In'n Wieg");
        break;
    }
    case 170545:
    {
        returnValue = F("In'n lütten Busch");
        break;
    }
    case 170546:
    {
        returnValue = F("In't Brook");
        break;
    }
    case 170547:
    {
        returnValue = F("In't Börgerland");
        break;
    }
    case 170548:
    {
        returnValue = F("In't Carolinenwinkel");
        break;
    }
    case 170549:
    {
        returnValue = F("In't Dörp");
        break;
    }
    case 170550:
    {
        returnValue = F("In't Holt");
        break;
    }
    case 170551:
    {
        returnValue = F("In't Hooge");
        break;
    }
    case 170552:
    {
        returnValue = F("In't Kampke");
        break;
    }
    case 170553:
    {
        returnValue = F("In't Loog");
        break;
    }
    case 170554:
    {
        returnValue = F("In't Nesse");
        break;
    }
    case 170555:
    {
        returnValue = F("In't Seeburger Winkel");
        break;
    }
    case 170556:
    {
        returnValue = F("In't Tjüch");
        break;
    }
    case 170557:
    {
        returnValue = F("In't Visk");
        break;
    }
    case 170558:
    {
        returnValue = F("Ina-Carstensen-Str.");
        break;
    }
    case 170559:
    {
        returnValue = F("Ina-Hochreuter-Str.");
        break;
    }
    case 170560:
    {
        returnValue = F("Ina-Rothschild-Weg");
        break;
    }
    case 170561:
    {
        returnValue = F("Ina-Seidel-Bogen");
        break;
    }
    case 170562:
    {
        returnValue = F("Ina-Seidel-Ring");
        break;
    }
    case 170563:
    {
        returnValue = F("Ina-Seidel-Str.");
        break;
    }
    case 170564:
    {
        returnValue = F("Ina-Seidel-Weg");
        break;
    }
    case 170565:
    {
        returnValue = F("Inastr.");
        break;
    }
    case 170566:
    {
        returnValue = F("Inchenhofener Str.");
        break;
    }
    case 170567:
    {
        returnValue = F("Inchinger Str.");
        break;
    }
    case 170568:
    {
        returnValue = F("Inchingerweg");
        break;
    }
    case 170569:
    {
        returnValue = F("Indaginestr.");
        break;
    }
    case 170570:
    {
        returnValue = F("Indehell");
        break;
    }
    case 170571:
    {
        returnValue = F("Indener Weg");
        break;
    }
    case 170572:
    {
        returnValue = F("Independance Road");
        break;
    }
    case 170573:
    {
        returnValue = F("Indepromenade");
        break;
    }
    case 170574:
    {
        returnValue = F("Indersbach");
        break;
    }
    case 170575:
    {
        returnValue = F("Indersbacher Str.");
        break;
    }
    case 170576:
    {
        returnValue = F("Indersdorfer Str.");
        break;
    }
    case 170577:
    {
        returnValue = F("Inderstorferstr.");
        break;
    }
    case 170578:
    {
        returnValue = F("Indestr.");
        break;
    }
    case 170579:
    {
        returnValue = F("Indeweg");
        break;
    }
    case 170580:
    {
        returnValue = F("Indexstr.");
        break;
    }
    case 170581:
    {
        returnValue = F("Indiana Jones Runde");
        break;
    }
    case 170582:
    {
        returnValue = F("Indianastr.");
        break;
    }
    case 170583:
    {
        returnValue = F("Indianer-Familienpfad");
        break;
    }
    case 170584:
    {
        returnValue = F("Indianer-Lager");
        break;
    }
    case 170585:
    {
        returnValue = F("Indianerpfad");
        break;
    }
    case 170586:
    {
        returnValue = F("Indianersteg");
        break;
    }
    case 170587:
    {
        returnValue = F("Indlekofener Str.");
        break;
    }
    case 170588:
    {
        returnValue = F("Indlekoferweg");
        break;
    }
    case 170589:
    {
        returnValue = F("Indlinger Str.");
        break;
    }
    case 170590:
    {
        returnValue = F("Indorf");
        break;
    }
    case 170591:
    {
        returnValue = F("Industrie- und Gewerbegebiet");
        break;
    }
    case 170592:
    {
        returnValue = F("Industrie- und Gewerbepark");
        break;
    }
    case 170593:
    {
        returnValue = F("Industriebahn");
        break;
    }
    case 170594:
    {
        returnValue = F("Industriebrücke");
        break;
    }
    case 170595:
    {
        returnValue = F("Industriegebiet");
        break;
    }
    case 170596:
    {
        returnValue = F("Industriegebiet Goldene Aue Ost");
        break;
    }
    case 170597:
    {
        returnValue = F("Industriegebiet Goldene Aue West");
        break;
    }
    case 170598:
    {
        returnValue = F("Industriegebiet Kapelle");
        break;
    }
    case 170599:
    {
        returnValue = F("Industriegebiet Pfaffenberg");
        break;
    }
    case 170600:
    {
        returnValue = F("Industriegebiet See");
        break;
    }
    case 170601:
    {
        returnValue = F("Industriegebiet West");
        break;
    }
    case 170602:
    {
        returnValue = F("Industriegebietsstr.");
        break;
    }
    case 170603:
    {
        returnValue = F("Industriegelände");
        break;
    }
    case 170604:
    {
        returnValue = F("Industriegelände Am Bahnhof");
        break;
    }
    case 170605:
    {
        returnValue = F("Industriegelände Steinritsch");
        break;
    }
    case 170606:
    {
        returnValue = F("Industriehafen");
        break;
    }
    case 170607:
    {
        returnValue = F("Industriehof");
        break;
    }
    case 170608:
    {
        returnValue = F("Industriemuseum");
        break;
    }
    case 170609:
    {
        returnValue = F("Industriepark");
        break;
    }
    case 170610:
    {
        returnValue = F("Industriepark BAB1");
        break;
    }
    case 170611:
    {
        returnValue = F("Industriepark I Str. C");
        break;
    }
    case 170612:
    {
        returnValue = F("Industriepark Nord");
        break;
    }
    case 170613:
    {
        returnValue = F("Industriepark Ponholz");
        break;
    }
    case 170614:
    {
        returnValue = F("Industriepark Soonwald");
        break;
    }
    case 170615:
    {
        returnValue = F("Industriepark Str. E");
        break;
    }
    case 170616:
    {
        returnValue = F("Industriepark Wiethfeld");
        break;
    }
    case 170617:
    {
        returnValue = F("Industriepark Wolfgang");
        break;
    }
    case 170618:
    {
        returnValue = F("Industrieparkstr.");
        break;
    }
    case 170619:
    {
        returnValue = F("Industrieplatz");
        break;
    }
    case 170620:
    {
        returnValue = F("Industrierandstr.");
        break;
    }
    case 170621:
    {
        returnValue = F("Industriering");
        break;
    }
    case 170622:
    {
        returnValue = F("Industriering Ost");
        break;
    }
    case 170623:
    {
        returnValue = F("Industriesiedlung");
        break;
    }
    case 170624:
    {
        returnValue = F("Industriestr.");
        break;
    }
    case 170625:
    {
        returnValue = F("Industriestr. A31 Ost");
        break;
    }
    case 170626:
    {
        returnValue = F("Industriestr. Mitte");
        break;
    }
    case 170627:
    {
        returnValue = F("Industriestr. Möhnetal");
        break;
    }
    case 170628:
    {
        returnValue = F("Industriestr. Nord");
        break;
    }
    case 170629:
    {
        returnValue = F("Industriestr. Ost");
        break;
    }
    case 170630:
    {
        returnValue = F("Industriestr. West");
        break;
    }
    case 170631:
    {
        returnValue = F("Industriestr.-Nord");
        break;
    }
    case 170632:
    {
        returnValue = F("Industriestr.-Süd");
        break;
    }
    case 170633:
    {
        returnValue = F("Industrietor");
        break;
    }
    case 170634:
    {
        returnValue = F("Industrieweg");
        break;
    }
    case 170635:
    {
        returnValue = F("Industriezentrum");
        break;
    }
    case 170636:
    {
        returnValue = F("Industriezubringer");
        break;
    }
    case 170637:
    {
        returnValue = F("Infang");
        break;
    }
    case 170638:
    {
        returnValue = F("Infanterie-Galerie");
        break;
    }
    case 170639:
    {
        returnValue = F("Infanteriestr.");
        break;
    }
    case 170640:
    {
        returnValue = F("Infanterieweg");
        break;
    }
    case 170641:
    {
        returnValue = F("Infantin-Isabella-Str.");
        break;
    }
    case 170642:
    {
        returnValue = F("Infelder Weg");
        break;
    }
    case 170643:
    {
        returnValue = F("Infopfad");
        break;
    }
    case 170644:
    {
        returnValue = F("Infopfad Bäume");
        break;
    }
    case 170645:
    {
        returnValue = F("Infopfad KZ Uckermark");
        break;
    }
    case 170646:
    {
        returnValue = F("Infoweg über Calwer Tradition");
        break;
    }
    case 170647:
    {
        returnValue = F("Infrastrukturstr.");
        break;
    }
    case 170648:
    {
        returnValue = F("Ing.-Alfred-Rudow-Str.");
        break;
    }
    case 170649:
    {
        returnValue = F("Ing.-Goering-Str.");
        break;
    }
    case 170650:
    {
        returnValue = F("Ingbert-Naab-Str.");
        break;
    }
    case 170651:
    {
        returnValue = F("Ingbertsweg");
        break;
    }
    case 170652:
    {
        returnValue = F("Inge-Borkh-Str.");
        break;
    }
    case 170653:
    {
        returnValue = F("Inge-Donnepp-Str.");
        break;
    }
    case 170654:
    {
        returnValue = F("Inge-Doose-Stieg");
        break;
    }
    case 170655:
    {
        returnValue = F("Inge-Feltrinelli-Platz");
        break;
    }
    case 170656:
    {
        returnValue = F("Inge-Kröger-Weg");
        break;
    }
    case 170657:
    {
        returnValue = F("Inge-Lichtenstein-Weg");
        break;
    }
    case 170658:
    {
        returnValue = F("Inge-Meysel-Str.");
        break;
    }
    case 170659:
    {
        returnValue = F("Inge-Ransenberg-Weg");
        break;
    }
    case 170660:
    {
        returnValue = F("Inge-Sedlmaier-Str.");
        break;
    }
    case 170661:
    {
        returnValue = F("Inge-Stern-Str.");
        break;
    }
    case 170662:
    {
        returnValue = F("Ingeborg-Andresen-Weg");
        break;
    }
    case 170663:
    {
        returnValue = F("Ingeborg-Bachmann-Str.");
        break;
    }
    case 170664:
    {
        returnValue = F("Ingeborg-Bachmann-Weg");
        break;
    }
    case 170665:
    {
        returnValue = F("Ingeborg-Dittmer-Weg");
        break;
    }
    case 170666:
    {
        returnValue = F("Ingeborg-Drewitz-Hof");
        break;
    }
    case 170667:
    {
        returnValue = F("Ingeborg-Drewitz-Weg");
        break;
    }
    case 170668:
    {
        returnValue = F("Ingeborg-Friebe-Platz");
        break;
    }
    case 170669:
    {
        returnValue = F("Ingeborg-Kreßmann-Str.");
        break;
    }
    case 170670:
    {
        returnValue = F("Ingeborg-Küster-Str.");
        break;
    }
    case 170671:
    {
        returnValue = F("Ingeborg-Nahnsen-Platz");
        break;
    }
    case 170672:
    {
        returnValue = F("Ingeborgbrücke");
        break;
    }
    case 170673:
    {
        returnValue = F("Ingeborgstr.");
        break;
    }
    case 170674:
    {
        returnValue = F("Ingeburg-Lohse-Weg");
        break;
    }
    case 170675:
    {
        returnValue = F("Ingelbacher Weg");
        break;
    }
    case 170676:
    {
        returnValue = F("Ingeleber Str.");
        break;
    }
    case 170677:
    {
        returnValue = F("Ingelesweg");
        break;
    }
    case 170678:
    {
        returnValue = F("Ingelfinger Str.");
        break;
    }
    case 170679:
    {
        returnValue = F("Ingelheimer Garten");
        break;
    }
    case 170680:
    {
        returnValue = F("Ingelheimer Gasse");
        break;
    }
    case 170681:
    {
        returnValue = F("Ingelheimer Hof");
        break;
    }
    case 170682:
    {
        returnValue = F("Ingelheimer Str.");
        break;
    }
    case 170683:
    {
        returnValue = F("Ingelheimer Weg");
        break;
    }
    case 170684:
    {
        returnValue = F("Ingelheimstr.");
        break;
    }
    case 170685:
    {
        returnValue = F("Ingelmannstr.");
        break;
    }
    case 170686:
    {
        returnValue = F("Ingelmunsterstr.");
        break;
    }
    case 170687:
    {
        returnValue = F("Ingeln Ortsmitte");
        break;
    }
    case 170688:
    {
        returnValue = F("Ingelsberg");
        break;
    }
    case 170689:
    {
        returnValue = F("Ingelsberger Weg");
        break;
    }
    case 170690:
    {
        returnValue = F("Ingelstedter Grund");
        break;
    }
    case 170691:
    {
        returnValue = F("Ingelstr.");
        break;
    }
    case 170692:
    {
        returnValue = F("Ingemerterhammer");
        break;
    }
    case 170693:
    {
        returnValue = F("Ingendorf");
        break;
    }
    case 170694:
    {
        returnValue = F("Ingendorfer Höhe");
        break;
    }
    case 170695:
    {
        returnValue = F("Ingendorfer Str.");
        break;
    }
    case 170696:
    {
        returnValue = F("Ingendorfer Weg");
        break;
    }
    case 170697:
    {
        returnValue = F("Ingenfeldstr.");
        break;
    }
    case 170698:
    {
        returnValue = F("Ingenhovenweg");
        break;
    }
    case 170699:
    {
        returnValue = F("Ingenieur Fußweg");
        break;
    }
    case 170700:
    {
        returnValue = F("Ingenieur-Baer-Str.");
        break;
    }
    case 170701:
    {
        returnValue = F("Ingenieur-Honnef-Str.");
        break;
    }
    case 170702:
    {
        returnValue = F("Ingenieurweg");
        break;
    }
    case 170703:
    {
        returnValue = F("Ingenkampstr.");
        break;
    }
    case 170704:
    {
        returnValue = F("Ingenlaeckstr.");
        break;
    }
    case 170705:
    {
        returnValue = F("Ingenrieder Str.");
        break;
    }
    case 170706:
    {
        returnValue = F("Inger-Karén-Str.");
        break;
    }
    case 170707:
    {
        returnValue = F("Ingerer Str.");
        break;
    }
    case 170708:
    {
        returnValue = F("Ingerhof");
        break;
    }
    case 170709:
    {
        returnValue = F("Ingerkinger Str.");
        break;
    }
    case 170710:
    {
        returnValue = F("Ingerkinger Weg");
        break;
    }
    case 170711:
    {
        returnValue = F("Ingersberg");
        break;
    }
    case 170712:
    {
        returnValue = F("Ingersheimer Hauptstr.");
        break;
    }
    case 170713:
    {
        returnValue = F("Ingersheimer Str.");
        break;
    }
    case 170714:
    {
        returnValue = F("Ingersheimer Weg");
        break;
    }
    case 170715:
    {
        returnValue = F("Ingersleben Z.-Mühle");
        break;
    }
    case 170716:
    {
        returnValue = F("Ingerslebener Str.");
        break;
    }
    case 170717:
    {
        returnValue = F("Ingerslebener Weg");
        break;
    }
    case 170718:
    {
        returnValue = F("Ingerstr.");
        break;
    }
    case 170719:
    {
        returnValue = F("Ingerweg");
        break;
    }
    case 170720:
    {
        returnValue = F("Ingewai");
        break;
    }
    case 170721:
    {
        returnValue = F("Ingiwai");
        break;
    }
    case 170722:
    {
        returnValue = F("Ingoldinger Str.");
        break;
    }
    case 170723:
    {
        returnValue = F("Ingoldinger Weg");
        break;
    }
    case 170724:
    {
        returnValue = F("Ingolfweg");
        break;
    }
    case 170725:
    {
        returnValue = F("Ingolstadter Hof");
        break;
    }
    case 170726:
    {
        returnValue = F("Ingolstadter Str.");
        break;
    }
    case 170727:
    {
        returnValue = F("Ingolstädter Landstr.");
        break;
    }
    case 170728:
    {
        returnValue = F("Ingolstädter Ring");
        break;
    }
    case 170729:
    {
        returnValue = F("Ingolstädter Str.");
        break;
    }
    case 170730:
    {
        returnValue = F("Ingolstädter Weg");
        break;
    }
    case 170731:
    {
        returnValue = F("Ingostr.");
        break;
    }
    case 170732:
    {
        returnValue = F("Ingrid-Bergman-Str.");
        break;
    }
    case 170733:
    {
        returnValue = F("Ingrid-Buck-Str.");
        break;
    }
    case 170734:
    {
        returnValue = F("Ingrid-Friedheim-Str.");
        break;
    }
    case 170735:
    {
        returnValue = F("Ingrid-Kipper-Weg");
        break;
    }
    case 170736:
    {
        returnValue = F("Ingrid-Marie-Weg");
        break;
    }
    case 170737:
    {
        returnValue = F("Ingrid-Pilz-Str.");
        break;
    }
    case 170738:
    {
        returnValue = F("Ingrid-Schöneberger-Weg");
        break;
    }
    case 170739:
    {
        returnValue = F("Ingrid-von-Schmettow-Str.");
        break;
    }
    case 170740:
    {
        returnValue = F("Ingridstr.");
        break;
    }
    case 170741:
    {
        returnValue = F("Ingridweg");
        break;
    }
    case 170742:
    {
        returnValue = F("Ingstetten");
        break;
    }
    case 170743:
    {
        returnValue = F("Ingstettener Str.");
        break;
    }
    case 170744:
    {
        returnValue = F("Ingstetter Str.");
        break;
    }
    case 170745:
    {
        returnValue = F("Ingweilerhof");
        break;
    }
    case 170746:
    {
        returnValue = F("Ingweilerstr.");
        break;
    }
    case 170747:
    {
        returnValue = F("Ingwer-Dethlefsen-Str.");
        break;
    }
    case 170748:
    {
        returnValue = F("Ingwer-Laseeter-Weg");
        break;
    }
    case 170749:
    {
        returnValue = F("Ingwer-Paulsen-Str.");
        break;
    }
    case 170750:
    {
        returnValue = F("Ingwer-Paulsen-Weg");
        break;
    }
    case 170751:
    {
        returnValue = F("Ingwersenweg");
        break;
    }
    case 170752:
    {
        returnValue = F("Ingwershörner Deich");
        break;
    }
    case 170753:
    {
        returnValue = F("Ingwerstr.");
        break;
    }
    case 170754:
    {
        returnValue = F("Ingwerweg");
        break;
    }
    case 170755:
    {
        returnValue = F("Ingwiller Str.");
        break;
    }
    case 170756:
    {
        returnValue = F("Inhamer Str.");
        break;
    }
    case 170757:
    {
        returnValue = F("Inhauser Landstr.");
        break;
    }
    case 170758:
    {
        returnValue = F("Inhauser Str.");
        break;
    }
    case 170759:
    {
        returnValue = F("Inhausersieler Deich");
        break;
    }
    case 170760:
    {
        returnValue = F("Inhülsenweg");
        break;
    }
    case 170761:
    {
        returnValue = F("Inkelthalerhof");
        break;
    }
    case 170762:
    {
        returnValue = F("Inken-Michels-Weg");
        break;
    }
    case 170763:
    {
        returnValue = F("Inkenweg");
        break;
    }
    case 170764:
    {
        returnValue = F("Inkofen");
        break;
    }
    case 170765:
    {
        returnValue = F("Inkofener Str.");
        break;
    }
    case 170766:
    {
        returnValue = F("Inleg");
        break;
    }
    case 170767:
    {
        returnValue = F("Inn-Museum-Freigelände");
        break;
    }
    case 170768:
    {
        returnValue = F("Inn-Uferweg");
        break;
    }
    case 170769:
    {
        returnValue = F("Innach");
        break;
    }
    case 170770:
    {
        returnValue = F("Innbrückgasse");
        break;
    }
    case 170771:
    {
        returnValue = F("Inndamm");
        break;
    }
    case 170772:
    {
        returnValue = F("Inne Beek");
        break;
    }
    case 170773:
    {
        returnValue = F("Inne Grüpp");
        break;
    }
    case 170774:
    {
        returnValue = F("Inne Stadt");
        break;
    }
    case 170775:
    {
        returnValue = F("Inne Worth");
        break;
    }
    case 170776:
    {
        returnValue = F("Inneberger Str.");
        break;
    }
    case 170777:
    {
        returnValue = F("Inneboltstr.");
        break;
    }
    case 170778:
    {
        returnValue = F("Innenbergstr.");
        break;
    }
    case 170779:
    {
        returnValue = F("Innendorf");
        break;
    }
    case 170780:
    {
        returnValue = F("Inneneck");
        break;
    }
    case 170781:
    {
        returnValue = F("Innenhof");
        break;
    }
    case 170782:
    {
        returnValue = F("Innenhof Mestrenger Mühle (privat)");
        break;
    }
    case 170783:
    {
        returnValue = F("Innenhof der Stadtverwaltung Friedberg");
        break;
    }
    case 170784:
    {
        returnValue = F("Innenhof-Spielplatz Glockengießerstr.");
        break;
    }
    case 170785:
    {
        returnValue = F("Innenhofpark");
        break;
    }
    case 170786:
    {
        returnValue = F("Innenkoppel");
        break;
    }
    case 170787:
    {
        returnValue = F("Innenköpfleweg");
        break;
    }
    case 170788:
    {
        returnValue = F("Innenpark zur alten Schule");
        break;
    }
    case 170789:
    {
        returnValue = F("Innenrieder Str.");
        break;
    }
    case 170790:
    {
        returnValue = F("Innenring");
        break;
    }
    case 170791:
    {
        returnValue = F("Innenstadt-Strand");
        break;
    }
    case 170792:
    {
        returnValue = F("Innenstadtpark \"Ruhranlage");
        break;
    }
    case 170793:
    {
        returnValue = F("Innenstadtring");
        break;
    }
    case 170794:
    {
        returnValue = F("Innenstetten");
        break;
    }
    case 170795:
    {
        returnValue = F("Innenwall");
        break;
    }
    case 170796:
    {
        returnValue = F("Innenweg");
        break;
    }
    case 170797:
    {
        returnValue = F("Inner Berg");
        break;
    }
    case 170798:
    {
        returnValue = F("Inner Circle");
        break;
    }
    case 170799:
    {
        returnValue = F("Innerdorf");
        break;
    }
    case 170800:
    {
        returnValue = F("Innere Au");
        break;
    }
    case 170801:
    {
        returnValue = F("Innere Aumühlstr.");
        break;
    }
    case 170802:
    {
        returnValue = F("Innere Bahnhofstr.");
        break;
    }
    case 170803:
    {
        returnValue = F("Innere Bautzener Str.");
        break;
    }
    case 170804:
    {
        returnValue = F("Innere Bergstr.");
        break;
    }
    case 170805:
    {
        returnValue = F("Innere Biegen");
        break;
    }
    case 170806:
    {
        returnValue = F("Innere Blanke");
        break;
    }
    case 170807:
    {
        returnValue = F("Innere Bogenstr.");
        break;
    }
    case 170808:
    {
        returnValue = F("Innere Breite");
        break;
    }
    case 170809:
    {
        returnValue = F("Innere Brucker Str.");
        break;
    }
    case 170810:
    {
        returnValue = F("Innere Buchleuthenstr.");
        break;
    }
    case 170811:
    {
        returnValue = F("Innere Burgstaffel");
        break;
    }
    case 170812:
    {
        returnValue = F("Innere Christlingen");
        break;
    }
    case 170813:
    {
        returnValue = F("Innere Cramer-Klett-Str.");
        break;
    }
    case 170814:
    {
        returnValue = F("Innere Crimmitschauer Str.");
        break;
    }
    case 170815:
    {
        returnValue = F("Innere Dorfstr.");
        break;
    }
    case 170816:
    {
        returnValue = F("Innere Einfahrt");
        break;
    }
    case 170817:
    {
        returnValue = F("Innere Emmerten");
        break;
    }
    case 170818:
    {
        returnValue = F("Innere Freiwasserstr.");
        break;
    }
    case 170819:
    {
        returnValue = F("Innere Frühlingstr.");
        break;
    }
    case 170820:
    {
        returnValue = F("Innere Gasse");
        break;
    }
    case 170821:
    {
        returnValue = F("Innere Grabenstr.");
        break;
    }
    case 170822:
    {
        returnValue = F("Innere Hagenäcker");
        break;
    }
    case 170823:
    {
        returnValue = F("Innere Halde");
        break;
    }
    case 170824:
    {
        returnValue = F("Innere Hallerstr.");
        break;
    }
    case 170825:
    {
        returnValue = F("Innere Heerstr.");
        break;
    }
    case 170826:
    {
        returnValue = F("Innere Herlasgrüner Str.");
        break;
    }
    case 170827:
    {
        returnValue = F("Innere Karl-Liebknecht-Str.");
        break;
    }
    case 170828:
    {
        returnValue = F("Innere Kelterstr.");
        break;
    }
    case 170829:
    {
        returnValue = F("Innere Klinge");
        break;
    }
    case 170830:
    {
        returnValue = F("Innere Kobergerstr.");
        break;
    }
    case 170831:
    {
        returnValue = F("Innere Lauenstr.");
        break;
    }
    case 170832:
    {
        returnValue = F("Innere Lehren");
        break;
    }
    case 170833:
    {
        returnValue = F("Innere Lengenfelder Str.");
        break;
    }
    case 170834:
    {
        returnValue = F("Innere Lichsen");
        break;
    }
    case 170835:
    {
        returnValue = F("Innere Löwenstr.");
        break;
    }
    case 170836:
    {
        returnValue = F("Innere Mehle");
        break;
    }
    case 170837:
    {
        returnValue = F("Innere Münchener Str.");
        break;
    }
    case 170838:
    {
        returnValue = F("Innere Münchner Str.");
        break;
    }
    case 170839:
    {
        returnValue = F("Innere Neumatten");
        break;
    }
    case 170840:
    {
        returnValue = F("Innere Neuwieser Str.");
        break;
    }
    case 170841:
    {
        returnValue = F("Innere Ochsenäcker");
        break;
    }
    case 170842:
    {
        returnValue = F("Innere Ortsstr.");
        break;
    }
    case 170843:
    {
        returnValue = F("Innere Oybiner Str.");
        break;
    }
    case 170844:
    {
        returnValue = F("Innere Parkstr.");
        break;
    }
    case 170845:
    {
        returnValue = F("Innere Passauer Str.");
        break;
    }
    case 170846:
    {
        returnValue = F("Innere Regensburger Str.");
        break;
    }
    case 170847:
    {
        returnValue = F("Innere Schneeberger Str.");
        break;
    }
    case 170848:
    {
        returnValue = F("Innere Schneidmatten");
        break;
    }
    case 170849:
    {
        returnValue = F("Innere Seeäckerstr.");
        break;
    }
    case 170850:
    {
        returnValue = F("Innere Simbacher Str.");
        break;
    }
    case 170851:
    {
        returnValue = F("Innere Steige");
        break;
    }
    case 170852:
    {
        returnValue = F("Innere Sulzfelder Str.");
        break;
    }
    case 170853:
    {
        returnValue = F("Innere Süeskoppel");
        break;
    }
    case 170854:
    {
        returnValue = F("Innere Teichgasse");
        break;
    }
    case 170855:
    {
        returnValue = F("Innere Uferstr.");
        break;
    }
    case 170856:
    {
        returnValue = F("Innere Wasserlachen");
        break;
    }
    case 170857:
    {
        returnValue = F("Innere Weberstr.");
        break;
    }
    case 170858:
    {
        returnValue = F("Innere Weißenseestr.");
        break;
    }
    case 170859:
    {
        returnValue = F("Innere Wiesen");
        break;
    }
    case 170860:
    {
        returnValue = F("Innere Wingertstr.");
        break;
    }
    case 170861:
    {
        returnValue = F("Innere Zittauer Str.");
        break;
    }
    case 170862:
    {
        returnValue = F("Innere Zwickauer Str.");
        break;
    }
    case 170863:
    {
        returnValue = F("Innerer Bachgrund");
        break;
    }
    case 170864:
    {
        returnValue = F("Innerer Birktalweg");
        break;
    }
    case 170865:
    {
        returnValue = F("Innerer Burghof");
        break;
    }
    case 170866:
    {
        returnValue = F("Innerer Gartenweg");
        break;
    }
    case 170867:
    {
        returnValue = F("Innerer Graben");
        break;
    }
    case 170868:
    {
        returnValue = F("Innerer Gries");
        break;
    }
    case 170869:
    {
        returnValue = F("Innerer Grund");
        break;
    }
    case 170870:
    {
        returnValue = F("Innerer Heckweg");
        break;
    }
    case 170871:
    {
        returnValue = F("Innerer Heuleweg");
        break;
    }
    case 170872:
    {
        returnValue = F("Innerer Hohlweg");
        break;
    }
    case 170873:
    {
        returnValue = F("Innerer Hunnenbrunnen");
        break;
    }
    case 170874:
    {
        returnValue = F("Innerer Krautgartenweg");
        break;
    }
    case 170875:
    {
        returnValue = F("Innerer Lohweg");
        break;
    }
    case 170876:
    {
        returnValue = F("Innerer Markt");
        break;
    }
    case 170877:
    {
        returnValue = F("Innerer Murrer Weg");
        break;
    }
    case 170878:
    {
        returnValue = F("Innerer Riedmattweg");
        break;
    }
    case 170879:
    {
        returnValue = F("Innerer Ring");
        break;
    }
    case 170880:
    {
        returnValue = F("Innerer Schobdacher Weg");
        break;
    }
    case 170881:
    {
        returnValue = F("Innerer Schwarzenbacher Ring");
        break;
    }
    case 170882:
    {
        returnValue = F("Innerer See");
        break;
    }
    case 170883:
    {
        returnValue = F("Innerer Siedlerweg");
        break;
    }
    case 170884:
    {
        returnValue = F("Innerer Stadtgraben");
        break;
    }
    case 170885:
    {
        returnValue = F("Innerer Steig");
        break;
    }
    case 170886:
    {
        returnValue = F("Innerer Stockweg");
        break;
    }
    case 170887:
    {
        returnValue = F("Innerer Weg");
        break;
    }
    case 170888:
    {
        returnValue = F("Innerer Weidach");
        break;
    }
    case 170889:
    {
        returnValue = F("Inneres Flassental");
        break;
    }
    case 170890:
    {
        returnValue = F("Inneres Hart");
        break;
    }
    case 170891:
    {
        returnValue = F("Inneres Imlet");
        break;
    }
    case 170892:
    {
        returnValue = F("Inneres Löchle");
        break;
    }
    case 170893:
    {
        returnValue = F("Inneres Pfaffengäßchen");
        break;
    }
    case 170894:
    {
        returnValue = F("Innerhardtsberg");
        break;
    }
    case 170895:
    {
        returnValue = F("Innerhartsberg");
        break;
    }
    case 170896:
    {
        returnValue = F("Innerhienthaler Weg");
        break;
    }
    case 170897:
    {
        returnValue = F("Inneringer Str.");
        break;
    }
    case 170898:
    {
        returnValue = F("Inneringer Weg");
        break;
    }
    case 170899:
    {
        returnValue = F("Innerlohener Str.");
        break;
    }
    case 170900:
    {
        returnValue = F("Innerlohenerstr.");
        break;
    }
    case 170901:
    {
        returnValue = F("Innersteallee");
        break;
    }
    case 170902:
    {
        returnValue = F("Innersteblick");
        break;
    }
    case 170903:
    {
        returnValue = F("Innerstetal");
        break;
    }
    case 170904:
    {
        returnValue = F("Innersteweg");
        break;
    }
    case 170905:
    {
        returnValue = F("Innerstädtische Erholungszone");
        break;
    }
    case 170906:
    {
        returnValue = F("Innerthann");
        break;
    }
    case 170907:
    {
        returnValue = F("Innerthanner Str.");
        break;
    }
    case 170908:
    {
        returnValue = F("Innerweg");
        break;
    }
    case 170909:
    {
        returnValue = F("Innewald");
        break;
    }
    case 170910:
    {
        returnValue = F("Innfeldstr.");
        break;
    }
    case 170911:
    {
        returnValue = F("Innfährweg");
        break;
    }
    case 170912:
    {
        returnValue = F("Innhornweg");
        break;
    }
    case 170913:
    {
        returnValue = F("Innichner Str.");
        break;
    }
    case 170914:
    {
        returnValue = F("Inniger-Kranzweg-Geräumt");
        break;
    }
    case 170915:
    {
        returnValue = F("Innigetal");
        break;
    }
    case 170916:
    {
        returnValue = F("Inninger Str.");
        break;
    }
    case 170917:
    {
        returnValue = F("Inninger Weg");
        break;
    }
    case 170918:
    {
        returnValue = F("Innkai");
        break;
    }
    case 170919:
    {
        returnValue = F("Innleitenstr.");
        break;
    }
    case 170920:
    {
        returnValue = F("Innleitenweg");
        break;
    }
    case 170921:
    {
        returnValue = F("Innlände");
        break;
    }
    case 170922:
    {
        returnValue = F("Innolidochstr.");
        break;
    }
    case 170923:
    {
        returnValue = F("Innomotion Park");
        break;
    }
    case 170924:
    {
        returnValue = F("Innovapark");
        break;
    }
    case 170925:
    {
        returnValue = F("Innovationskamp");
        break;
    }
    case 170926:
    {
        returnValue = F("Innovativ-Ring");
        break;
    }
    case 170927:
    {
        returnValue = F("Innozenz-Fehr-Str.");
        break;
    }
    case 170928:
    {
        returnValue = F("Innozenz-Stangl-Weg");
        break;
    }
    case 170929:
    {
        returnValue = F("Innpromenade");
        break;
    }
    case 170930:
    {
        returnValue = F("Innsbrucker Allee");
        break;
    }
    case 170931:
    {
        returnValue = F("Innsbrucker Str.");
        break;
    }
    case 170932:
    {
        returnValue = F("Innsbrucker Weg");
        break;
    }
    case 170933:
    {
        returnValue = F("Innsteg");
        break;
    }
    case 170934:
    {
        returnValue = F("Innstr.");
        break;
    }
    case 170935:
    {
        returnValue = F("Innstr_Isarstr_Flurweg");
        break;
    }
    case 170936:
    {
        returnValue = F("Inntaler Str.");
        break;
    }
    case 170937:
    {
        returnValue = F("Inntalstr.");
        break;
    }
    case 170938:
    {
        returnValue = F("Innthal");
        break;
    }
    case 170939:
    {
        returnValue = F("Innthalstr.");
        break;
    }
    case 170940:
    {
        returnValue = F("Innungsstr.");
        break;
    }
    case 170941:
    {
        returnValue = F("Innungstr.");
        break;
    }
    case 170942:
    {
        returnValue = F("Innungswall");
        break;
    }
    case 170943:
    {
        returnValue = F("Innviertel");
        break;
    }
    case 170944:
    {
        returnValue = F("Innviertler Str.");
        break;
    }
    case 170945:
    {
        returnValue = F("Innweg");
        break;
    }
    case 170946:
    {
        returnValue = F("Innwerksiedlung");
        break;
    }
    case 170947:
    {
        returnValue = F("Innwiese");
        break;
    }
    case 170948:
    {
        returnValue = F("Inostr.");
        break;
    }
    case 170949:
    {
        returnValue = F("Inrather Str.");
        break;
    }
    case 170950:
    {
        returnValue = F("Ins Engenthal");
        break;
    }
    case 170951:
    {
        returnValue = F("Ins Fegefeuer");
        break;
    }
    case 170952:
    {
        returnValue = F("Ins Moor");
        break;
    }
    case 170953:
    {
        returnValue = F("Ins Tal");
        break;
    }
    case 170954:
    {
        returnValue = F("Ins Thal");
        break;
    }
    case 170955:
    {
        returnValue = F("Ins Umpferstedter Holz");
        break;
    }
    case 170956:
    {
        returnValue = F("Ins Wiesental");
        break;
    }
    case 170957:
    {
        returnValue = F("Insaweg");
        break;
    }
    case 170958:
    {
        returnValue = F("Insbachstr.");
        break;
    }
    case 170959:
    {
        returnValue = F("Insbrucker Str.");
        break;
    }
    case 170960:
    {
        returnValue = F("Insektenpark");
        break;
    }
    case 170961:
    {
        returnValue = F("Insel");
        break;
    }
    case 170962:
    {
        returnValue = F("Insel Aubügel");
        break;
    }
    case 170963:
    {
        returnValue = F("Insel Bärbel");
        break;
    }
    case 170964:
    {
        returnValue = F("Insel Görmitz");
        break;
    }
    case 170965:
    {
        returnValue = F("Insel Julianenpark");
        break;
    }
    case 170966:
    {
        returnValue = F("Insel Oberau");
        break;
    }
    case 170967:
    {
        returnValue = F("Insel Silberau");
        break;
    }
    case 170968:
    {
        returnValue = F("Insel Sonneck");
        break;
    }
    case 170969:
    {
        returnValue = F("Insel Vilm");
        break;
    }
    case 170970:
    {
        returnValue = F("Insel- und Uferpark");
        break;
    }
    case 170971:
    {
        returnValue = F("Inselallee");
        break;
    }
    case 170972:
    {
        returnValue = F("Inselbachstr.");
        break;
    }
    case 170973:
    {
        returnValue = F("Inselbadweg");
        break;
    }
    case 170974:
    {
        returnValue = F("Inselberg");
        break;
    }
    case 170975:
    {
        returnValue = F("Inselbergblick");
        break;
    }
    case 170976:
    {
        returnValue = F("Inselbergstr.");
        break;
    }
    case 170977:
    {
        returnValue = F("Inselblick");
        break;
    }
    case 170978:
    {
        returnValue = F("Inselbrücke");
        break;
    }
    case 170979:
    {
        returnValue = F("Inseldamm (Hochwasserdamm)");
        break;
    }
    case 170980:
    {
        returnValue = F("Inseler Str.");
        break;
    }
    case 170981:
    {
        returnValue = F("Inselfriedhof");
        break;
    }
    case 170982:
    {
        returnValue = F("Inselgarten");
        break;
    }
    case 170983:
    {
        returnValue = F("Inselgasse");
        break;
    }
    case 170984:
    {
        returnValue = F("Inselgraben");
        break;
    }
    case 170985:
    {
        returnValue = F("Inselgässchen");
        break;
    }
    case 170986:
    {
        returnValue = F("Inselgässle");
        break;
    }
    case 170987:
    {
        returnValue = F("Inselhof");
        break;
    }
    case 170988:
    {
        returnValue = F("Inseligumpenweg");
        break;
    }
    case 170989:
    {
        returnValue = F("Inselkammerstr.");
        break;
    }
    case 170990:
    {
        returnValue = F("Inselkämpe");
        break;
    }
    case 170991:
    {
        returnValue = F("Inselmannsweg");
        break;
    }
    case 170992:
    {
        returnValue = F("Inselneudorf Str.");
        break;
    }
    case 170993:
    {
        returnValue = F("Inselpark");
        break;
    }
    case 170994:
    {
        returnValue = F("Inselplatz");
        break;
    }
    case 170995:
    {
        returnValue = F("Inselring");
        break;
    }
    case 170996:
    {
        returnValue = F("Inselsbergblick");
        break;
    }
    case 170997:
    {
        returnValue = F("Inselsberger Weg");
        break;
    }
    case 170998:
    {
        returnValue = F("Inselsbergstr.");
        break;
    }
    case 170999:
    {
        returnValue = F("Inselsee-Weg");
        break;
    }
    case 171000:
    {
        returnValue = F("Inselseeblick");
        break;
    }
    case 171001:
    {
        returnValue = F("Inselseeweg");
        break;
    }
    case 171002:
    {
        returnValue = F("Inselseeweg, Naturerlebnispfad Sophienhöhe");
        break;
    }
    case 171003:
    {
        returnValue = F("Inselsteig");
        break;
    }
    case 171004:
    {
        returnValue = F("Inselstr.");
        break;
    }
    case 171005:
    {
        returnValue = F("Inselstraat");
        break;
    }
    case 171006:
    {
        returnValue = F("Inselweg");
        break;
    }
    case 171007:
    {
        returnValue = F("Inselweiher");
        break;
    }
    case 171008:
    {
        returnValue = F("Inselwiesen");
        break;
    }
    case 171009:
    {
        returnValue = F("Inselwiesenstr.");
        break;
    }
    case 171010:
    {
        returnValue = F("Insenhausener Str.");
        break;
    }
    case 171011:
    {
        returnValue = F("Insenkreuz");
        break;
    }
    case 171012:
    {
        returnValue = F("Insheimer Str.");
        break;
    }
    case 171013:
    {
        returnValue = F("Insinger Str.");
        break;
    }
    case 171014:
    {
        returnValue = F("Insleber Str.");
        break;
    }
    case 171015:
    {
        returnValue = F("Inspektionsgasse");
        break;
    }
    case 171016:
    {
        returnValue = F("Inspektor-Weimar-Weg");
        break;
    }
    case 171017:
    {
        returnValue = F("Inspektorat");
        break;
    }
    case 171018:
    {
        returnValue = F("Inspektorengang");
        break;
    }
    case 171019:
    {
        returnValue = F("Instenkoppel");
        break;
    }
    case 171020:
    {
        returnValue = F("Instenredder");
        break;
    }
    case 171021:
    {
        returnValue = F("Instenweg");
        break;
    }
    case 171022:
    {
        returnValue = F("Insterburger Ring");
        break;
    }
    case 171023:
    {
        returnValue = F("Insterburger Str.");
        break;
    }
    case 171024:
    {
        returnValue = F("Insterburger Weg");
        break;
    }
    case 171025:
    {
        returnValue = F("Insterburgstr.");
        break;
    }
    case 171026:
    {
        returnValue = F("Insterburgweg");
        break;
    }
    case 171027:
    {
        returnValue = F("Insterstr.");
        break;
    }
    case 171028:
    {
        returnValue = F("Insterweg");
        break;
    }
    case 171029:
    {
        returnValue = F("Institut");
        break;
    }
    case 171030:
    {
        returnValue = F("Institut Garnier");
        break;
    }
    case 171031:
    {
        returnValue = F("Instituts Park");
        break;
    }
    case 171032:
    {
        returnValue = F("Institutsgarten");
        break;
    }
    case 171033:
    {
        returnValue = F("Institutsgasse");
        break;
    }
    case 171034:
    {
        returnValue = F("Institutstr.");
        break;
    }
    case 171035:
    {
        returnValue = F("Institutweg");
        break;
    }
    case 171036:
    {
        returnValue = F("Insulaweg");
        break;
    }
    case 171037:
    {
        returnValue = F("Insuler Weg");
        break;
    }
    case 171038:
    {
        returnValue = F("Int Fieftig");
        break;
    }
    case 171039:
    {
        returnValue = F("Int Hörn");
        break;
    }
    case 171040:
    {
        returnValue = F("Int Swatte");
        break;
    }
    case 171041:
    {
        returnValue = F("Integrata-Park");
        break;
    }
    case 171042:
    {
        returnValue = F("Inter Weg");
        break;
    }
    case 171043:
    {
        returnValue = F("Interesseloch");
        break;
    }
    case 171044:
    {
        returnValue = F("Interessengemeinschaft Papiergraben e.V.");
        break;
    }
    case 171045:
    {
        returnValue = F("Interessentenforst");
        break;
    }
    case 171046:
    {
        returnValue = F("Interessentenweg");
        break;
    }
    case 171047:
    {
        returnValue = F("Interkultureller Garten");
        break;
    }
    case 171048:
    {
        returnValue = F("Interkultureller Schaugarten");
        break;
    }
    case 171049:
    {
        returnValue = F("Interlakenstr.");
        break;
    }
    case 171050:
    {
        returnValue = F("Internatstr.");
        break;
    }
    case 171051:
    {
        returnValue = F("Internatsweg");
        break;
    }
    case 171052:
    {
        returnValue = F("Intjar");
        break;
    }
    case 171053:
    {
        returnValue = F("Intruper Esch");
        break;
    }
    case 171054:
    {
        returnValue = F("Intruper Weg");
        break;
    }
    case 171055:
    {
        returnValue = F("Intscheder Dorfstr.");
        break;
    }
    case 171056:
    {
        returnValue = F("Intzeplatz");
        break;
    }
    case 171057:
    {
        returnValue = F("Intzestr.");
        break;
    }
    case 171058:
    {
        returnValue = F("Intüsken");
        break;
    }
    case 171059:
    {
        returnValue = F("Invalidenplatz");
        break;
    }
    case 171060:
    {
        returnValue = F("Invalidenstr.");
        break;
    }
    case 171061:
    {
        returnValue = F("Invalidenweg");
        break;
    }
    case 171062:
    {
        returnValue = F("Inverness-Allee");
        break;
    }
    case 171063:
    {
        returnValue = F("Inweg");
        break;
    }
    case 171064:
    {
        returnValue = F("Inwendener Str.");
        break;
    }
    case 171065:
    {
        returnValue = F("Inzeller Str.");
        break;
    }
    case 171066:
    {
        returnValue = F("Inzemooser Str.");
        break;
    }
    case 171067:
    {
        returnValue = F("Inzendorf");
        break;
    }
    case 171068:
    {
        returnValue = F("Inzenhofer Str.");
        break;
    }
    case 171069:
    {
        returnValue = F("Inzenhoferstr.");
        break;
    }
    case 171070:
    {
        returnValue = F("Inzigkofer Str.");
        break;
    }
    case 171071:
    {
        returnValue = F("Inzinger Str.");
        break;
    }
    case 171072:
    {
        returnValue = F("Inzlinger Str.");
        break;
    }
    case 171073:
    {
        returnValue = F("Inzmühlener Str.");
        break;
    }
    case 171074:
    {
        returnValue = F("In’t läswinkel");
        break;
    }
    case 171075:
    {
        returnValue = F("Ipenweg");
        break;
    }
    case 171076:
    {
        returnValue = F("Ipflerplatz");
        break;
    }
    case 171077:
    {
        returnValue = F("Ipflerstr.");
        break;
    }
    case 171078:
    {
        returnValue = F("Ipfstr.");
        break;
    }
    case 171079:
    {
        returnValue = F("Ipfweg");
        break;
    }
    case 171080:
    {
        returnValue = F("Iphigenienweg");
        break;
    }
    case 171081:
    {
        returnValue = F("Iphöfer Str.");
        break;
    }
    case 171082:
    {
        returnValue = F("Iphöfer Weg");
        break;
    }
    case 171083:
    {
        returnValue = F("Ippeln");
        break;
    }
    case 171084:
    {
        returnValue = F("Ippener Kämpe");
        break;
    }
    case 171085:
    {
        returnValue = F("Ippener Str.");
        break;
    }
    case 171086:
    {
        returnValue = F("Ippenschieder Trift");
        break;
    }
    case 171087:
    {
        returnValue = F("Ippensen");
        break;
    }
    case 171088:
    {
        returnValue = F("Ippensen Farm");
        break;
    }
    case 171089:
    {
        returnValue = F("Ippensen Süd");
        break;
    }
    case 171090:
    {
        returnValue = F("Ippenser Str.");
        break;
    }
    case 171091:
    {
        returnValue = F("Ippenstedter Str.");
        break;
    }
    case 171092:
    {
        returnValue = F("Ippenwarfer Weg");
        break;
    }
    case 171093:
    {
        returnValue = F("Ipperfeld");
        break;
    }
    case 171094:
    {
        returnValue = F("Ippergasse");
        break;
    }
    case 171095:
    {
        returnValue = F("Ippertshausen");
        break;
    }
    case 171096:
    {
        returnValue = F("Ippertsmühle");
        break;
    }
    case 171097:
    {
        returnValue = F("Ippesheimer Str.");
        break;
    }
    case 171098:
    {
        returnValue = F("Ippesheimer Weg");
        break;
    }
    case 171099:
    {
        returnValue = F("Ippichen");
        break;
    }
    case 171100:
    {
        returnValue = F("Ippinger Str.");
        break;
    }
    case 171101:
    {
        returnValue = F("Ippinger Weg");
        break;
    }
    case 171102:
    {
        returnValue = F("Ippinghäuser Str.");
        break;
    }
    case 171103:
    {
        returnValue = F("Ipplendorfer Str.");
        break;
    }
    case 171104:
    {
        returnValue = F("Iprechtstr.");
        break;
    }
    case 171105:
    {
        returnValue = F("Iprumper Moor");
        break;
    }
    case 171106:
    {
        returnValue = F("Ipser Weg");
        break;
    }
    case 171107:
    {
        returnValue = F("Iptestal");
        break;
    }
    case 171108:
    {
        returnValue = F("Iptinger Str.");
        break;
    }
    case 171109:
    {
        returnValue = F("Iptinger Weg");
        break;
    }
    case 171110:
    {
        returnValue = F("Irbersdorfer Str.");
        break;
    }
    case 171111:
    {
        returnValue = F("Irbgasse");
        break;
    }
    case 171112:
    {
        returnValue = F("Irchelweg");
        break;
    }
    case 171113:
    {
        returnValue = F("Irchenriether Str.");
        break;
    }
    case 171114:
    {
        returnValue = F("Irchinger Str.");
        break;
    }
    case 171115:
    {
        returnValue = F("Irchwitzer Str.");
        break;
    }
    case 171116:
    {
        returnValue = F("Ireland Loop");
        break;
    }
    case 171117:
    {
        returnValue = F("Irena-Sendler-Str.");
        break;
    }
    case 171118:
    {
        returnValue = F("Irene-Kärcher-Str.");
        break;
    }
    case 171119:
    {
        returnValue = F("Irene-Nett-Weg");
        break;
    }
    case 171120:
    {
        returnValue = F("Irene-Rollwage-Weg");
        break;
    }
    case 171121:
    {
        returnValue = F("Irene-Thordsen-Ring");
        break;
    }
    case 171122:
    {
        returnValue = F("Irene-von-Schwaben-Weg");
        break;
    }
    case 171123:
    {
        returnValue = F("Irenenplatz");
        break;
    }
    case 171124:
    {
        returnValue = F("Irenenstr.");
        break;
    }
    case 171125:
    {
        returnValue = F("Irenenweg");
        break;
    }
    case 171126:
    {
        returnValue = F("Irenes Eck");
        break;
    }
    case 171127:
    {
        returnValue = F("Irenestr.");
        break;
    }
    case 171128:
    {
        returnValue = F("Irenicusstr.");
        break;
    }
    case 171129:
    {
        returnValue = F("Irfersdorfer Weg");
        break;
    }
    case 171130:
    {
        returnValue = F("Irfersgrüner Bahnhofstr.");
        break;
    }
    case 171131:
    {
        returnValue = F("Irfersgrüner Str.");
        break;
    }
    case 171132:
    {
        returnValue = F("Irfersgrüner Weg");
        break;
    }
    case 171133:
    {
        returnValue = F("Irgastr.");
        break;
    }
    case 171134:
    {
        returnValue = F("Irgersdorf");
        break;
    }
    case 171135:
    {
        returnValue = F("Irgertsheimer Str.");
        break;
    }
    case 171136:
    {
        returnValue = F("Irging");
        break;
    }
    case 171137:
    {
        returnValue = F("Iringheimer Str.");
        break;
    }
    case 171138:
    {
        returnValue = F("Iringstr.");
        break;
    }
    case 171139:
    {
        returnValue = F("Iringweg");
        break;
    }
    case 171140:
    {
        returnValue = F("Irionweg");
        break;
    }
    case 171141:
    {
        returnValue = F("Iris Garten");
        break;
    }
    case 171142:
    {
        returnValue = F("Iris Weg");
        break;
    }
    case 171143:
    {
        returnValue = F("Iris-Hahs-Hoffstetter-Str.");
        break;
    }
    case 171144:
    {
        returnValue = F("Irisbogen");
        break;
    }
    case 171145:
    {
        returnValue = F("Irisgang");
        break;
    }
    case 171146:
    {
        returnValue = F("Irisring");
        break;
    }
    case 171147:
    {
        returnValue = F("Irissteig");
        break;
    }
    case 171148:
    {
        returnValue = F("Irisstieg");
        break;
    }
    case 171149:
    {
        returnValue = F("Irisstiege");
        break;
    }
    case 171150:
    {
        returnValue = F("Irisstr.");
        break;
    }
    case 171151:
    {
        returnValue = F("Irisweg");
        break;
    }
    case 171152:
    {
        returnValue = F("Irkensbusch");
        break;
    }
    case 171153:
    {
        returnValue = F("Irkutsker Str.");
        break;
    }
    case 171154:
    {
        returnValue = F("Irl");
        break;
    }
    case 171155:
    {
        returnValue = F("Irlach");
        break;
    }
    case 171156:
    {
        returnValue = F("Irlacher Dorfstr.");
        break;
    }
    case 171157:
    {
        returnValue = F("Irlacher Str.");
        break;
    }
    case 171158:
    {
        returnValue = F("Irlacher Weg");
        break;
    }
    case 171159:
    {
        returnValue = F("Irlachinger Str.");
        break;
    }
    case 171160:
    {
        returnValue = F("Irlachstr.");
        break;
    }
    case 171161:
    {
        returnValue = F("Irlachweg");
        break;
    }
    case 171162:
    {
        returnValue = F("Irlackerstr.");
        break;
    }
    case 171163:
    {
        returnValue = F("Irlahüller Weg");
        break;
    }
    case 171164:
    {
        returnValue = F("Irlauweg");
        break;
    }
    case 171165:
    {
        returnValue = F("Irlbach");
        break;
    }
    case 171166:
    {
        returnValue = F("Irlbacher Str.");
        break;
    }
    case 171167:
    {
        returnValue = F("Irlberg");
        break;
    }
    case 171168:
    {
        returnValue = F("Irlbergstr.");
        break;
    }
    case 171169:
    {
        returnValue = F("Irlbruck");
        break;
    }
    case 171170:
    {
        returnValue = F("Irlbründlstr.");
        break;
    }
    case 171171:
    {
        returnValue = F("Irle-Siedlung");
        break;
    }
    case 171172:
    {
        returnValue = F("Irlebahnweg");
        break;
    }
    case 171173:
    {
        returnValue = F("Irlefeld");
        break;
    }
    case 171174:
    {
        returnValue = F("Irlen");
        break;
    }
    case 171175:
    {
        returnValue = F("Irlenborner Str.");
        break;
    }
    case 171176:
    {
        returnValue = F("Irlenbuscher Str.");
        break;
    }
    case 171177:
    {
        returnValue = F("Irlenfeld");
        break;
    }
    case 171178:
    {
        returnValue = F("Irlenhof");
        break;
    }
    case 171179:
    {
        returnValue = F("Irlenpütz");
        break;
    }
    case 171180:
    {
        returnValue = F("Irlenstr.");
        break;
    }
    case 171181:
    {
        returnValue = F("Irlenweg");
        break;
    }
    case 171182:
    {
        returnValue = F("Irler Hof");
        break;
    }
    case 171183:
    {
        returnValue = F("Irler Str.");
        break;
    }
    case 171184:
    {
        returnValue = F("Irler Weg");
        break;
    }
    case 171185:
    {
        returnValue = F("Irlerhof");
        break;
    }
    case 171186:
    {
        returnValue = F("Irleshof");
        break;
    }
    case 171187:
    {
        returnValue = F("Irletweg");
        break;
    }
    case 171188:
    {
        returnValue = F("Irleweg");
        break;
    }
    case 171189:
    {
        returnValue = F("Irlfeldstr.");
        break;
    }
    case 171190:
    {
        returnValue = F("Irlgasse");
        break;
    }
    case 171191:
    {
        returnValue = F("Irlham");
        break;
    }
    case 171192:
    {
        returnValue = F("Irlhamer Str.");
        break;
    }
    case 171193:
    {
        returnValue = F("Irling");
        break;
    }
    case 171194:
    {
        returnValue = F("Irlinger Weg");
        break;
    }
    case 171195:
    {
        returnValue = F("Irlmauth");
        break;
    }
    case 171196:
    {
        returnValue = F("Irlmoos");
        break;
    }
    case 171197:
    {
        returnValue = F("Irlmühle");
        break;
    }
    case 171198:
    {
        returnValue = F("Irlsaigner Str.");
        break;
    }
    case 171199:
    {
        returnValue = F("Irlsbrunn");
        break;
    }
    case 171200:
    {
        returnValue = F("Irlsbrunner Str.");
        break;
    }
    case 171201:
    {
        returnValue = F("Irlseignweg");
        break;
    }
    case 171202:
    {
        returnValue = F("Irlstr.");
        break;
    }
    case 171203:
    {
        returnValue = F("Irlweg");
        break;
    }
    case 171204:
    {
        returnValue = F("Irlwienstr.");
        break;
    }
    case 171205:
    {
        returnValue = F("Irläckerstr.");
        break;
    }
    case 171206:
    {
        returnValue = F("Irma-Cornelßen-Str.");
        break;
    }
    case 171207:
    {
        returnValue = F("Irma-Feldweg-Str.");
        break;
    }
    case 171208:
    {
        returnValue = F("Irma-Oerlein-Weg");
        break;
    }
    case 171209:
    {
        returnValue = F("Irma-Stern-Hof");
        break;
    }
    case 171210:
    {
        returnValue = F("Irma-Stern-Str.");
        break;
    }
    case 171211:
    {
        returnValue = F("Irmannsweiler");
        break;
    }
    case 171212:
    {
        returnValue = F("Irmannsweiler Weg");
        break;
    }
    case 171213:
    {
        returnValue = F("Irmapark");
        break;
    }
    case 171214:
    {
        returnValue = F("Irmastr.");
        break;
    }
    case 171215:
    {
        returnValue = F("Irmatshoferstr.");
        break;
    }
    case 171216:
    {
        returnValue = F("Irmaweg");
        break;
    }
    case 171217:
    {
        returnValue = F("Irmela-Hammelstein-Str.");
        break;
    }
    case 171218:
    {
        returnValue = F("Irmelenweg");
        break;
    }
    case 171219:
    {
        returnValue = F("Irmelsgasse");
        break;
    }
    case 171220:
    {
        returnValue = F("Irmelshäuser Str.");
        break;
    }
    case 171221:
    {
        returnValue = F("Irmengardisstr.");
        break;
    }
    case 171222:
    {
        returnValue = F("Irmengardstr.");
        break;
    }
    case 171223:
    {
        returnValue = F("Irmensteige");
        break;
    }
    case 171224:
    {
        returnValue = F("Irmentrudstr.");
        break;
    }
    case 171225:
    {
        returnValue = F("Irmfridweg");
        break;
    }
    case 171226:
    {
        returnValue = F("Irmgard-Ballauff-Str.");
        break;
    }
    case 171227:
    {
        returnValue = F("Irmgard-Feldhaus-Str.");
        break;
    }
    case 171228:
    {
        returnValue = F("Irmgard-Keun-Str.");
        break;
    }
    case 171229:
    {
        returnValue = F("Irmgard-Keun-Weg");
        break;
    }
    case 171230:
    {
        returnValue = F("Irmgard-Preymann-Str.");
        break;
    }
    case 171231:
    {
        returnValue = F("Irmgard-Str.");
        break;
    }
    case 171232:
    {
        returnValue = F("Irmgard-Ulderup-Str.");
        break;
    }
    case 171233:
    {
        returnValue = F("Irmgardisgarten");
        break;
    }
    case 171234:
    {
        returnValue = F("Irmgardishof");
        break;
    }
    case 171235:
    {
        returnValue = F("Irmgardisstr.");
        break;
    }
    case 171236:
    {
        returnValue = F("Irmgardisweg");
        break;
    }
    case 171237:
    {
        returnValue = F("Irmgardsglück");
        break;
    }
    case 171238:
    {
        returnValue = F("Irmgardstr.");
        break;
    }
    case 171239:
    {
        returnValue = F("Irmgardweg");
        break;
    }
    case 171240:
    {
        returnValue = F("Irmgarteichener Weg");
        break;
    }
    case 171241:
    {
        returnValue = F("Irminenplatz");
        break;
    }
    case 171242:
    {
        returnValue = F("Irminenstr.");
        break;
    }
    case 171243:
    {
        returnValue = F("Irminfriedstr.");
        break;
    }
    case 171244:
    {
        returnValue = F("Irmingardstr.");
        break;
    }
    case 171245:
    {
        returnValue = F("Irmingardweg");
        break;
    }
    case 171246:
    {
        returnValue = F("Irminratstr.");
        break;
    }
    case 171247:
    {
        returnValue = F("Irmstr.");
        break;
    }
    case 171248:
    {
        returnValue = F("Irmtraud-Morgner-Str.");
        break;
    }
    case 171249:
    {
        returnValue = F("Irmtrauter Hof");
        break;
    }
    case 171250:
    {
        returnValue = F("Irmtrauter Str.");
        break;
    }
    case 171251:
    {
        returnValue = F("Irmundusweg");
        break;
    }
    case 171252:
    {
        returnValue = F("Irmweg");
        break;
    }
    case 171253:
    {
        returnValue = F("Irnaustr.");
        break;
    }
    case 171254:
    {
        returnValue = F("Irnich");
        break;
    }
    case 171255:
    {
        returnValue = F("Irnkam");
        break;
    }
    case 171256:
    {
        returnValue = F("Irnkofen");
        break;
    }
    case 171257:
    {
        returnValue = F("Irpisdorf");
        break;
    }
    case 171258:
    {
        returnValue = F("Irrbornweg");
        break;
    }
    case 171259:
    {
        returnValue = F("Irreler Str.");
        break;
    }
    case 171260:
    {
        returnValue = F("Irrenbergstr.");
        break;
    }
    case 171261:
    {
        returnValue = F("Irrenloher Damm");
        break;
    }
    case 171262:
    {
        returnValue = F("Irrgangstr.");
        break;
    }
    case 171263:
    {
        returnValue = F("Irrgarten");
        break;
    }
    case 171264:
    {
        returnValue = F("Irrhain");
        break;
    }
    case 171265:
    {
        returnValue = F("Irrlacher Weg");
        break;
    }
    case 171266:
    {
        returnValue = F("Irrlenwiese");
        break;
    }
    case 171267:
    {
        returnValue = F("Irrlichterweg");
        break;
    }
    case 171268:
    {
        returnValue = F("Irrlrinnig");
        break;
    }
    case 171269:
    {
        returnValue = F("Irrlweg");
        break;
    }
    case 171270:
    {
        returnValue = F("Irrmannsweilerplanie");
        break;
    }
    case 171271:
    {
        returnValue = F("Irrwaldweg");
        break;
    }
    case 171272:
    {
        returnValue = F("Irrweg");
        break;
    }
    case 171273:
    {
        returnValue = F("Irrwälder Weg");
        break;
    }
    case 171274:
    {
        returnValue = F("Irsbachweg");
        break;
    }
    case 171275:
    {
        returnValue = F("Irscheider Weg");
        break;
    }
    case 171276:
    {
        returnValue = F("Irschenberger Str.");
        break;
    }
    case 171277:
    {
        returnValue = F("Irschener Str.");
        break;
    }
    case 171278:
    {
        returnValue = F("Irschenhauser Str.");
        break;
    }
    case 171279:
    {
        returnValue = F("Irschenhauser Weg");
        break;
    }
    case 171280:
    {
        returnValue = F("Irscher Str.");
        break;
    }
    case 171281:
    {
        returnValue = F("Irseer Anstaltsfriedhof");
        break;
    }
    case 171282:
    {
        returnValue = F("Irseer Str.");
        break;
    }
    case 171283:
    {
        returnValue = F("Irseer Weg");
        break;
    }
    case 171284:
    {
        returnValue = F("Irseldamm");
        break;
    }
    case 171285:
    {
        returnValue = F("Irselhof");
        break;
    }
    case 171286:
    {
        returnValue = F("Irsenpfad");
        break;
    }
    case 171287:
    {
        returnValue = F("Irsentalstr.");
        break;
    }
    case 171288:
    {
        returnValue = F("Irser Str.");
        break;
    }
    case 171289:
    {
        returnValue = F("Irserstr.");
        break;
    }
    case 171290:
    {
        returnValue = F("Irsertalstr.");
        break;
    }
    case 171291:
    {
        returnValue = F("Irsham");
        break;
    }
    case 171292:
    {
        returnValue = F("Irsinger Str.");
        break;
    }
    case 171293:
    {
        returnValue = F("Irslenbach");
        break;
    }
    case 171294:
    {
        returnValue = F("Irslenbachweg");
        break;
    }
    case 171295:
    {
        returnValue = F("Irslinger Str.");
        break;
    }
    case 171296:
    {
        returnValue = F("Irungweg");
        break;
    }
    case 171297:
    {
        returnValue = F("Irving-Heymont-Str.");
        break;
    }
    case 171298:
    {
        returnValue = F("Irwin-Helford-Str.");
        break;
    }
    case 171299:
    {
        returnValue = F("Irwin-Stein-Weg");
        break;
    }
    case 171300:
    {
        returnValue = F("Irxlebener Siedlung");
        break;
    }
    case 171301:
    {
        returnValue = F("Irxlebener Str.");
        break;
    }
    case 171302:
    {
        returnValue = F("Irxleber Str.");
        break;
    }
    case 171303:
    {
        returnValue = F("Irxleber Weg");
        break;
    }
    case 171304:
    {
        returnValue = F("Isa-Boxler-Str.");
        break;
    }
    case 171305:
    {
        returnValue = F("Isaac-Bürger-Str.");
        break;
    }
    case 171306:
    {
        returnValue = F("Isaac-Newton-Str.");
        break;
    }
    case 171307:
    {
        returnValue = F("Isaac-Newton-Weg");
        break;
    }
    case 171308:
    {
        returnValue = F("Isaac-Singer-Str.");
        break;
    }
    case 171309:
    {
        returnValue = F("Isaak");
        break;
    }
    case 171310:
    {
        returnValue = F("Isaak-Heß-Weg");
        break;
    }
    case 171311:
    {
        returnValue = F("Isaak-Kounen-Str.");
        break;
    }
    case 171312:
    {
        returnValue = F("Isaak-Loewi-Str.");
        break;
    }
    case 171313:
    {
        returnValue = F("Isaak-Maus-Str.");
        break;
    }
    case 171314:
    {
        returnValue = F("Isaak-Visser-Weg");
        break;
    }
    case 171315:
    {
        returnValue = F("Isaak-Winkler-Weg");
        break;
    }
    case 171316:
    {
        returnValue = F("Isaar");
        break;
    }
    case 171317:
    {
        returnValue = F("Isaarer Str.");
        break;
    }
    case 171318:
    {
        returnValue = F("Isabella");
        break;
    }
    case 171319:
    {
        returnValue = F("Isabella-Braun-Str.");
        break;
    }
    case 171320:
    {
        returnValue = F("Isabella-Nadolny-Weg");
        break;
    }
    case 171321:
    {
        returnValue = F("Isabella-Str.");
        break;
    }
    case 171322:
    {
        returnValue = F("Isabellastr.");
        break;
    }
    case 171323:
    {
        returnValue = F("Isabellenstr.");
        break;
    }
    case 171324:
    {
        returnValue = F("Isackleweg");
        break;
    }
    case 171325:
    {
        returnValue = F("Isanperhtweg");
        break;
    }
    case 171326:
    {
        returnValue = F("Isar-Amperwerke-Str.");
        break;
    }
    case 171327:
    {
        returnValue = F("Isar-Geräumt");
        break;
    }
    case 171328:
    {
        returnValue = F("Isar-Loisach Stadion");
        break;
    }
    case 171329:
    {
        returnValue = F("Isar-Seinsbrücke");
        break;
    }
    case 171330:
    {
        returnValue = F("Isarau");
        break;
    }
    case 171331:
    {
        returnValue = F("Isarauenpark");
        break;
    }
    case 171332:
    {
        returnValue = F("Isarauenstr.");
        break;
    }
    case 171333:
    {
        returnValue = F("Isarauer Str.");
        break;
    }
    case 171334:
    {
        returnValue = F("Isaraustr.");
        break;
    }
    case 171335:
    {
        returnValue = F("Isarberg");
        break;
    }
    case 171336:
    {
        returnValue = F("Isarblick");
        break;
    }
    case 171337:
    {
        returnValue = F("Isarbrücke");
        break;
    }
    case 171338:
    {
        returnValue = F("Isardamm");
        break;
    }
    case 171339:
    {
        returnValue = F("Isarhornbrücke");
        break;
    }
    case 171340:
    {
        returnValue = F("Isarleiten");
        break;
    }
    case 171341:
    {
        returnValue = F("Isarleitenweg");
        break;
    }
    case 171342:
    {
        returnValue = F("Isarmoosweg");
        break;
    }
    case 171343:
    {
        returnValue = F("Isarradweg");
        break;
    }
    case 171344:
    {
        returnValue = F("Isarring");
        break;
    }
    case 171345:
    {
        returnValue = F("Isarspitz");
        break;
    }
    case 171346:
    {
        returnValue = F("Isarstauseesteig");
        break;
    }
    case 171347:
    {
        returnValue = F("Isarstr.");
        break;
    }
    case 171348:
    {
        returnValue = F("Isartalstr.");
        break;
    }
    case 171349:
    {
        returnValue = F("Isarwanderweg");
        break;
    }
    case 171350:
    {
        returnValue = F("Isarweg");
        break;
    }
    case 171351:
    {
        returnValue = F("Isawa-Str.");
        break;
    }
    case 171352:
    {
        returnValue = F("Isbrügge");
        break;
    }
    case 171353:
    {
        returnValue = F("Ischbachweg");
        break;
    }
    case 171354:
    {
        returnValue = F("Ischebecke");
        break;
    }
    case 171355:
    {
        returnValue = F("Ischebecker Str.");
        break;
    }
    case 171356:
    {
        returnValue = F("Ischenröder Str.");
        break;
    }
    case 171357:
    {
        returnValue = F("Ischertstr.");
        break;
    }
    case 171358:
    {
        returnValue = F("Ischeweg");
        break;
    }
    case 171359:
    {
        returnValue = F("Ischhofener Str.");
        break;
    }
    case 171360:
    {
        returnValue = F("Ischl");
        break;
    }
    case 171361:
    {
        returnValue = F("Ischler Str.");
        break;
    }
    case 171362:
    {
        returnValue = F("Ischler Weg");
        break;
    }
    case 171363:
    {
        returnValue = F("Isdobben");
        break;
    }
    case 171364:
    {
        returnValue = F("Isegrimstr.");
        break;
    }
    case 171365:
    {
        returnValue = F("Isehorner Weg");
        break;
    }
    case 171366:
    {
        returnValue = F("Iselbergstr.");
        break;
    }
    case 171367:
    {
        returnValue = F("Iselerberg");
        break;
    }
    case 171368:
    {
        returnValue = F("Iselerstr.");
        break;
    }
    case 171369:
    {
        returnValue = F("Iselerweg");
        break;
    }
    case 171370:
    {
        returnValue = F("Iselinstr.");
        break;
    }
    case 171371:
    {
        returnValue = F("Iselshauser Str.");
        break;
    }
    case 171372:
    {
        returnValue = F("Iselweg");
        break;
    }
    case 171373:
    {
        returnValue = F("Isemannweg");
        break;
    }
    case 171374:
    {
        returnValue = F("Isenachstr.");
        break;
    }
    case 171375:
    {
        returnValue = F("Isenachweg");
        break;
    }
    case 171376:
    {
        returnValue = F("Isenacker");
        break;
    }
    case 171377:
    {
        returnValue = F("Isenaustr.");
        break;
    }
    case 171378:
    {
        returnValue = F("Isenbachstr.");
        break;
    }
    case 171379:
    {
        returnValue = F("Isenbachweg");
        break;
    }
    case 171380:
    {
        returnValue = F("Isenbahnschneise");
        break;
    }
    case 171381:
    {
        returnValue = F("Isenbartstr.");
        break;
    }
    case 171382:
    {
        returnValue = F("Isenbek");
        break;
    }
    case 171383:
    {
        returnValue = F("Isenbergstr.");
        break;
    }
    case 171384:
    {
        returnValue = F("Isenbreite");
        break;
    }
    case 171385:
    {
        returnValue = F("Isenbrucher Mühle");
        break;
    }
    case 171386:
    {
        returnValue = F("Isenbrunner Weg");
        break;
    }
    case 171387:
    {
        returnValue = F("Isenburger Str.");
        break;
    }
    case 171388:
    {
        returnValue = F("Isenburgerweg");
        break;
    }
    case 171389:
    {
        returnValue = F("Isenburgring");
        break;
    }
    case 171390:
    {
        returnValue = F("Isenburgstr.");
        break;
    }
    case 171391:
    {
        returnValue = F("Isenburgweg");
        break;
    }
    case 171392:
    {
        returnValue = F("Isenbügeler Kopf");
        break;
    }
    case 171393:
    {
        returnValue = F("Isenbügeler Platz");
        break;
    }
    case 171394:
    {
        returnValue = F("Isenbügeler Str.");
        break;
    }
    case 171395:
    {
        returnValue = F("Isenbütteler Str.");
        break;
    }
    case 171396:
    {
        returnValue = F("Isenbütteler Weg");
        break;
    }
    case 171397:
    {
        returnValue = F("Isendorf");
        break;
    }
    case 171398:
    {
        returnValue = F("Isener Str.");
        break;
    }
    case 171399:
    {
        returnValue = F("Isengarten");
        break;
    }
    case 171400:
    {
        returnValue = F("Isengeeteriewech");
        break;
    }
    case 171401:
    {
        returnValue = F("Isenhofen");
        break;
    }
    case 171402:
    {
        returnValue = F("Isenkamp");
        break;
    }
    case 171403:
    {
        returnValue = F("Isenkroidter Str.");
        break;
    }
    case 171404:
    {
        returnValue = F("Isenloh");
        break;
    }
    case 171405:
    {
        returnValue = F("Isenschnibber Chaussee");
        break;
    }
    case 171406:
    {
        returnValue = F("Isenschnibber Str.");
        break;
    }
    case 171407:
    {
        returnValue = F("Isenseestr.");
        break;
    }
    case 171408:
    {
        returnValue = F("Isenser Burweg");
        break;
    }
    case 171409:
    {
        returnValue = F("Isenstedter Str.");
        break;
    }
    case 171410:
    {
        returnValue = F("Isenstr.");
        break;
    }
    case 171411:
    {
        returnValue = F("Isenweg");
        break;
    }
    case 171412:
    {
        returnValue = F("Isenwisch");
        break;
    }
    case 171413:
    {
        returnValue = F("Iserbachstr.");
        break;
    }
    case 171414:
    {
        returnValue = F("Iserbegka");
        break;
    }
    case 171415:
    {
        returnValue = F("Iserberg");
        break;
    }
    case 171416:
    {
        returnValue = F("Iserbergweg");
        break;
    }
    case 171417:
    {
        returnValue = F("Iserfeld");
        break;
    }
    case 171418:
    {
        returnValue = F("Isergebirgsstr.");
        break;
    }
    case 171419:
    {
        returnValue = F("Isergebirgsweg");
        break;
    }
    case 171420:
    {
        returnValue = F("Iserhorstweg");
        break;
    }
    case 171421:
    {
        returnValue = F("Iserkull");
        break;
    }
    case 171422:
    {
        returnValue = F("Iserlohner Landstr.");
        break;
    }
    case 171423:
    {
        returnValue = F("Iserlohner Post- und Eisenweg");
        break;
    }
    case 171424:
    {
        returnValue = F("Iserlohner Postweg");
        break;
    }
    case 171425:
    {
        returnValue = F("Iserlohner Str.");
        break;
    }
    case 171426:
    {
        returnValue = F("Iserlohner Weg");
        break;
    }
    case 171427:
    {
        returnValue = F("Iserlohweg");
        break;
    }
    case 171428:
    {
        returnValue = F("Iserloyer Str.");
        break;
    }
    case 171429:
    {
        returnValue = F("Isermannstr.");
        break;
    }
    case 171430:
    {
        returnValue = F("Isermeyerstr.");
        break;
    }
    case 171431:
    {
        returnValue = F("Isern Hinnerk");
        break;
    }
    case 171432:
    {
        returnValue = F("Isern Porte");
        break;
    }
    case 171433:
    {
        returnValue = F("Isern-Hinnerk-Weg");
        break;
    }
    case 171434:
    {
        returnValue = F("Isernbreede");
        break;
    }
    case 171435:
    {
        returnValue = F("Isernhagener Str.");
        break;
    }
    case 171436:
    {
        returnValue = F("Isernhagenweg");
        break;
    }
    case 171437:
    {
        returnValue = F("Isernhägener Str.");
        break;
    }
    case 171438:
    {
        returnValue = F("Iserothweg");
        break;
    }
    case 171439:
    {
        returnValue = F("Iserschmittstr.");
        break;
    }
    case 171440:
    {
        returnValue = F("Iserstr.");
        break;
    }
    case 171441:
    {
        returnValue = F("Isertor");
        break;
    }
    case 171442:
    {
        returnValue = F("Isertorweg");
        break;
    }
    case 171443:
    {
        returnValue = F("Iserweg");
        break;
    }
    case 171444:
    {
        returnValue = F("Isetöfte");
        break;
    }
    case 171445:
    {
        returnValue = F("Iseweg");
        break;
    }
    case 171446:
    {
        returnValue = F("Isfelder Weg");
        break;
    }
    case 171447:
    {
        returnValue = F("Isfriedstr.");
        break;
    }
    case 171448:
    {
        returnValue = F("Isgier");
        break;
    }
    case 171449:
    {
        returnValue = F("Isi-Huber-Str.");
        break;
    }
    case 171450:
    {
        returnValue = F("Isidor-Baron-Str.");
        break;
    }
    case 171451:
    {
        returnValue = F("Isidor-Gistl-Str.");
        break;
    }
    case 171452:
    {
        returnValue = F("Isidor-Goldberg-Str.");
        break;
    }
    case 171453:
    {
        returnValue = F("Isidor-Hipper-Str.");
        break;
    }
    case 171454:
    {
        returnValue = F("Isidor-Muck-Weg");
        break;
    }
    case 171455:
    {
        returnValue = F("Isidor-Stürber-Str.");
        break;
    }
    case 171456:
    {
        returnValue = F("Isidorsteg");
        break;
    }
    case 171457:
    {
        returnValue = F("Isidorstr.");
        break;
    }
    case 171458:
    {
        returnValue = F("Isidorweg");
        break;
    }
    case 171459:
    {
        returnValue = F("Isigatweiler");
        break;
    }
    case 171460:
    {
        returnValue = F("Isigny-Allee");
        break;
    }
    case 171461:
    {
        returnValue = F("Isimutstal");
        break;
    }
    case 171462:
    {
        returnValue = F("Isinger Str.");
        break;
    }
    case 171463:
    {
        returnValue = F("Isingeröder Str.");
        break;
    }
    case 171464:
    {
        returnValue = F("Isinggrund");
        break;
    }
    case 171465:
    {
        returnValue = F("Isinoweg");
        break;
    }
    case 171466:
    {
        returnValue = F("Iskaraweg");
        break;
    }
    case 171467:
    {
        returnValue = F("Iskenrutsche");
        break;
    }
    case 171468:
    {
        returnValue = F("Iskenweg");
        break;
    }
    case 171469:
    {
        returnValue = F("Iskiersand");
        break;
    }
    case 171470:
    {
        returnValue = F("Iskuhle");
        break;
    }
    case 171471:
    {
        returnValue = F("Iskuhler Weg");
        break;
    }
    case 171472:
    {
        returnValue = F("Islandhof");
        break;
    }
    case 171473:
    {
        returnValue = F("Islandpferdehof");
        break;
    }
    case 171474:
    {
        returnValue = F("Islandring");
        break;
    }
    case 171475:
    {
        returnValue = F("Islandstr.");
        break;
    }
    case 171476:
    {
        returnValue = F("Islinger Str.");
        break;
    }
    case 171477:
    {
        returnValue = F("Islinger Weg");
        break;
    }
    case 171478:
    {
        returnValue = F("Isloher Weg");
        break;
    }
    case 171479:
    {
        returnValue = F("Isländer Platz");
        break;
    }
    case 171480:
    {
        returnValue = F("Isländer Weg");
        break;
    }
    case 171481:
    {
        returnValue = F("Isländische Str.");
        break;
    }
    case 171482:
    {
        returnValue = F("Ismaninger Str.");
        break;
    }
    case 171483:
    {
        returnValue = F("Ismannsdorf");
        break;
    }
    case 171484:
    {
        returnValue = F("Ismeerstrate");
        break;
    }
    case 171485:
    {
        returnValue = F("Ismertstr.");
        break;
    }
    case 171486:
    {
        returnValue = F("Isnyer Brücke");
        break;
    }
    case 171487:
    {
        returnValue = F("Isnyer Str.");
        break;
    }
    case 171488:
    {
        returnValue = F("Isolastr.");
        break;
    }
    case 171489:
    {
        returnValue = F("Isolde-Hausser-Str.");
        break;
    }
    case 171490:
    {
        returnValue = F("Isolde-Kurz-Hof");
        break;
    }
    case 171491:
    {
        returnValue = F("Isolde-Kurz-Str.");
        break;
    }
    case 171492:
    {
        returnValue = F("Isolde-Kurz-Weg");
        break;
    }
    case 171493:
    {
        returnValue = F("Isoldenstr.");
        break;
    }
    case 171494:
    {
        returnValue = F("Isoldenweg");
        break;
    }
    case 171495:
    {
        returnValue = F("Isoldestr.");
        break;
    }
    case 171496:
    {
        returnValue = F("Isoldeweg");
        break;
    }
    case 171497:
    {
        returnValue = F("Isolfstr.");
        break;
    }
    case 171498:
    {
        returnValue = F("Isonzostr.");
        break;
    }
    case 171499:
    {
        returnValue = F("Isonzoweg");
        break;
    }
    case 171500:
    {
        returnValue = F("Isopistr.");
        break;
    }
    case 171501:
    {
        returnValue = F("Isotex-Str.");
        break;
    }
    case 171502:
    {
        returnValue = F("Ispei");
        break;
    }
    case 171503:
    {
        returnValue = F("Ispelsstr.");
        break;
    }
    case 171504:
    {
        returnValue = F("Ispericher Str.");
        break;
    }
    case 171505:
    {
        returnValue = F("Ispingrade");
        break;
    }
    case 171506:
    {
        returnValue = F("Ispingrader Str.");
        break;
    }
    case 171507:
    {
        returnValue = F("Ispo-Str.");
        break;
    }
    case 171508:
    {
        returnValue = F("Ispringer Pfad");
        break;
    }
    case 171509:
    {
        returnValue = F("Ispringer Str.");
        break;
    }
    case 171510:
    {
        returnValue = F("Ispringerweg");
        break;
    }
    case 171511:
    {
        returnValue = F("Israel-Beker-Str.");
        break;
    }
    case 171512:
    {
        returnValue = F("Israel-Friedrich-Wirth-Str.");
        break;
    }
    case 171513:
    {
        returnValue = F("Isringhausen-Ring");
        break;
    }
    case 171514:
    {
        returnValue = F("Isschlatt");
        break;
    }
    case 171515:
    {
        returnValue = F("Isselaue");
        break;
    }
    case 171516:
    {
        returnValue = F("Isselbacher Str.");
        break;
    }
    case 171517:
    {
        returnValue = F("Isselbachgasse");
        break;
    }
    case 171518:
    {
        returnValue = F("Isselburger Feld");
        break;
    }
    case 171519:
    {
        returnValue = F("Isselburger Str.");
        break;
    }
    case 171520:
    {
        returnValue = F("Isselburgweg");
        break;
    }
    case 171521:
    {
        returnValue = F("Isseldeich");
        break;
    }
    case 171522:
    {
        returnValue = F("Isseldyk");
        break;
    }
    case 171523:
    {
        returnValue = F("Isseler Hof");
        break;
    }
    case 171524:
    {
        returnValue = F("Isseler Str.");
        break;
    }
    case 171525:
    {
        returnValue = F("Isselhorst");
        break;
    }
    case 171526:
    {
        returnValue = F("Isselhorster Kirchplatz");
        break;
    }
    case 171527:
    {
        returnValue = F("Isselhorster Str.");
        break;
    }
    case 171528:
    {
        returnValue = F("Isselhöwwe");
        break;
    }
    case 171529:
    {
        returnValue = F("Isselsiedlung");
        break;
    }
    case 171530:
    {
        returnValue = F("Isselsmorgen");
        break;
    }
    case 171531:
    {
        returnValue = F("Isselstr.");
        break;
    }
    case 171532:
    {
        returnValue = F("Isseltalweg");
        break;
    }
    case 171533:
    {
        returnValue = F("Isselweg");
        break;
    }
    case 171534:
    {
        returnValue = F("Issemerplatz");
        break;
    }
    case 171535:
    {
        returnValue = F("Issendorfer Str.");
        break;
    }
    case 171536:
    {
        returnValue = F("Issendorfer Weg");
        break;
    }
    case 171537:
    {
        returnValue = F("Issersheiliger Weg");
        break;
    }
    case 171538:
    {
        returnValue = F("Isserstedter Str.");
        break;
    }
    case 171539:
    {
        returnValue = F("Issigauer Str.");
        break;
    }
    case 171540:
    {
        returnValue = F("Issigheimer Str.");
        break;
    }
    case 171541:
    {
        returnValue = F("Issinger Weg");
        break;
    }
    case 171542:
    {
        returnValue = F("Isslerstr.");
        break;
    }
    case 171543:
    {
        returnValue = F("Issumer Ring");
        break;
    }
    case 171544:
    {
        returnValue = F("Issumer Str.");
        break;
    }
    case 171545:
    {
        returnValue = F("Issumer Tor");
        break;
    }
    case 171546:
    {
        returnValue = F("Issumer Weg");
        break;
    }
    case 171547:
    {
        returnValue = F("Isteiner Str.");
        break;
    }
    case 171548:
    {
        returnValue = F("Istelstr.");
        break;
    }
    case 171549:
    {
        returnValue = F("Istelweg");
        break;
    }
    case 171550:
    {
        returnValue = F("Isterberger Weg");
        break;
    }
    case 171551:
    {
        returnValue = F("Isterbergweg");
        break;
    }
    case 171552:
    {
        returnValue = F("Isterbieser Str.");
        break;
    }
    case 171553:
    {
        returnValue = F("Isterbieser Weg");
        break;
    }
    case 171554:
    {
        returnValue = F("Istergieseler Str.");
        break;
    }
    case 171555:
    {
        returnValue = F("Isthaer Str.");
        break;
    }
    case 171556:
    {
        returnValue = F("Isthaer Weg");
        break;
    }
    case 171557:
    {
        returnValue = F("Istres-Promenade");
        break;
    }
    case 171558:
    {
        returnValue = F("Istruper Str.");
        break;
    }
    case 171559:
    {
        returnValue = F("Isums");
        break;
    }
    case 171560:
    {
        returnValue = F("Isumser Str.");
        break;
    }
    case 171561:
    {
        returnValue = F("Isvennweg");
        break;
    }
    case 171562:
    {
        returnValue = F("Isweg");
        break;
    }
    case 171563:
    {
        returnValue = F("Isweiler");
        break;
    }
    case 171564:
    {
        returnValue = F("Ita-Wegman-Str.");
        break;
    }
    case 171565:
    {
        returnValue = F("Itagstr.");
        break;
    }
    case 171566:
    {
        returnValue = F("Italiaanderstr.");
        break;
    }
    case 171567:
    {
        returnValue = F("Italiener Weg");
        break;
    }
    case 171568:
    {
        returnValue = F("Italienerweg");
        break;
    }
    case 171569:
    {
        returnValue = F("Italienischer Garten");
        break;
    }
    case 171570:
    {
        returnValue = F("Italienischer Weg");
        break;
    }
    case 171571:
    {
        returnValue = F("Italienweg");
        break;
    }
    case 171572:
    {
        returnValue = F("Italstr.");
        break;
    }
    case 171573:
    {
        returnValue = F("Itelsgasse");
        break;
    }
    case 171574:
    {
        returnValue = F("Itenstr.");
        break;
    }
    case 171575:
    {
        returnValue = F("Iternberg");
        break;
    }
    case 171576:
    {
        returnValue = F("Itester Weg");
        break;
    }
    case 171577:
    {
        returnValue = F("Ith-Hils-Weg");
        break;
    }
    case 171578:
    {
        returnValue = F("Ith-Str.");
        break;
    }
    case 171579:
    {
        returnValue = F("Ithbergstr.");
        break;
    }
    case 171580:
    {
        returnValue = F("Ithblick");
        break;
    }
    case 171581:
    {
        returnValue = F("Ithorst");
        break;
    }
    case 171582:
    {
        returnValue = F("Ithstr.");
        break;
    }
    case 171583:
    {
        returnValue = F("Ithweg");
        break;
    }
    case 171584:
    {
        returnValue = F("Itschensteg");
        break;
    }
    case 171585:
    {
        returnValue = F("Itsching");
        break;
    }
    case 171586:
    {
        returnValue = F("Itteler Str.");
        break;
    }
    case 171587:
    {
        returnValue = F("Ittelsburger Str.");
        break;
    }
    case 171588:
    {
        returnValue = F("Ittelshofen");
        break;
    }
    case 171589:
    {
        returnValue = F("Ittenbacher Str.");
        break;
    }
    case 171590:
    {
        returnValue = F("Ittenbachstr.");
        break;
    }
    case 171591:
    {
        returnValue = F("Ittenberg");
        break;
    }
    case 171592:
    {
        returnValue = F("Ittenberger Str.");
        break;
    }
    case 171593:
    {
        returnValue = F("Ittenbeuren");
        break;
    }
    case 171594:
    {
        returnValue = F("Ittendorfer Str.");
        break;
    }
    case 171595:
    {
        returnValue = F("Ittenhauser Str.");
        break;
    }
    case 171596:
    {
        returnValue = F("Itterbachstr.");
        break;
    }
    case 171597:
    {
        returnValue = F("Itterbachweg");
        break;
    }
    case 171598:
    {
        returnValue = F("Itterbecker Str.");
        break;
    }
    case 171599:
    {
        returnValue = F("Itterberg-Hauptweg");
        break;
    }
    case 171600:
    {
        returnValue = F("Itterberg-Randweg");
        break;
    }
    case 171601:
    {
        returnValue = F("Itterberger Str.");
        break;
    }
    case 171602:
    {
        returnValue = F("Itterpark");
        break;
    }
    case 171603:
    {
        returnValue = F("Ittersbacher Str.");
        break;
    }
    case 171604:
    {
        returnValue = F("Ittersbacher Weg");
        break;
    }
    case 171605:
    {
        returnValue = F("Ittersdorfer Str.");
        break;
    }
    case 171606:
    {
        returnValue = F("Itterstr.");
        break;
    }
    case 171607:
    {
        returnValue = F("Ittertalstr.");
        break;
    }
    case 171608:
    {
        returnValue = F("Ittling");
        break;
    }
    case 171609:
    {
        returnValue = F("Ittlinger Graben");
        break;
    }
    case 171610:
    {
        returnValue = F("Ittlinger Hauptstr.");
        break;
    }
    case 171611:
    {
        returnValue = F("Ittlinger Mühle");
        break;
    }
    case 171612:
    {
        returnValue = F("Ittlinger Str.");
        break;
    }
    case 171613:
    {
        returnValue = F("Ittmecker Weg");
        break;
    }
    case 171614:
    {
        returnValue = F("Ittnerstr.");
        break;
    }
    case 171615:
    {
        returnValue = F("Itzbachstr.");
        break;
    }
    case 171616:
    {
        returnValue = F("Itzbachweg");
        break;
    }
    case 171617:
    {
        returnValue = F("Itzehoer Chaussee");
        break;
    }
    case 171618:
    {
        returnValue = F("Itzehoer Str.");
        break;
    }
    case 171619:
    {
        returnValue = F("Itzehoer Weg");
        break;
    }
    case 171620:
    {
        returnValue = F("Itzelberger Str.");
        break;
    }
    case 171621:
    {
        returnValue = F("Itzelfeldnerstr.");
        break;
    }
    case 171622:
    {
        returnValue = F("Itzelstein");
        break;
    }
    case 171623:
    {
        returnValue = F("Itzelstr.");
        break;
    }
    case 171624:
    {
        returnValue = F("Itzenbütteler Bauernforst");
        break;
    }
    case 171625:
    {
        returnValue = F("Itzenbütteler Brumhof");
        break;
    }
    case 171626:
    {
        returnValue = F("Itzenbütteler Buchen");
        break;
    }
    case 171627:
    {
        returnValue = F("Itzenbütteler Eichhof");
        break;
    }
    case 171628:
    {
        returnValue = F("Itzenbütteler Feldhof");
        break;
    }
    case 171629:
    {
        returnValue = F("Itzenbütteler Heuweg");
        break;
    }
    case 171630:
    {
        returnValue = F("Itzenbütteler Kirchfeld");
        break;
    }
    case 171631:
    {
        returnValue = F("Itzenbütteler Mühlenweg");
        break;
    }
    case 171632:
    {
        returnValue = F("Itzenbütteler Sod");
        break;
    }
    case 171633:
    {
        returnValue = F("Itzenbütteler Str.");
        break;
    }
    case 171634:
    {
        returnValue = F("Itzenbütteler Waldweg");
        break;
    }
    case 171635:
    {
        returnValue = F("Itzenbütteler Weg");
        break;
    }
    case 171636:
    {
        returnValue = F("Itzendorfer Str.");
        break;
    }
    case 171637:
    {
        returnValue = F("Itzendorfplate");
        break;
    }
    case 171638:
    {
        returnValue = F("Itzenhainer Str.");
        break;
    }
    case 171639:
    {
        returnValue = F("Itzenplitzstr.");
        break;
    }
    case 171640:
    {
        returnValue = F("Itzgasse");
        break;
    }
    case 171641:
    {
        returnValue = F("Itzgrund");
        break;
    }
    case 171642:
    {
        returnValue = F("Itzgrundstr.");
        break;
    }
    case 171643:
    {
        returnValue = F("Itzinger Str.");
        break;
    }
    case 171644:
    {
        returnValue = F("Itzinger Weg");
        break;
    }
    case 171645:
    {
        returnValue = F("Itzling");
        break;
    }
    case 171646:
    {
        returnValue = F("Itzlinger Str.");
        break;
    }
    case 171647:
    {
        returnValue = F("Itzlinger Weg");
        break;
    }
    case 171648:
    {
        returnValue = F("Itzlings");
        break;
    }
    case 171649:
    {
        returnValue = F("Itzsteinstr.");
        break;
    }
    case 171650:
    {
        returnValue = F("Itzstr.");
        break;
    }
    case 171651:
    {
        returnValue = F("Itzumer Hauptstr.");
        break;
    }
    case 171652:
    {
        returnValue = F("Itzumer Str.");
        break;
    }
    case 171653:
    {
        returnValue = F("Itzwörden");
        break;
    }
    case 171654:
    {
        returnValue = F("Itzwördener Str.");
        break;
    }
    case 171655:
    {
        returnValue = F("Ivangsweg");
        break;
    }
    case 171656:
    {
        returnValue = F("Iven-Agßen-Str.");
        break;
    }
    case 171657:
    {
        returnValue = F("Iven-Kruse-Str.");
        break;
    }
    case 171658:
    {
        returnValue = F("Iven-Kruse-Weg");
        break;
    }
    case 171659:
    {
        returnValue = F("Ivenacker Str.");
        break;
    }
    case 171660:
    {
        returnValue = F("Ivendorfer Landstr.");
        break;
    }
    case 171661:
    {
        returnValue = F("Ivenfleth");
        break;
    }
    case 171662:
    {
        returnValue = F("Ivenflether Weg");
        break;
    }
    case 171663:
    {
        returnValue = F("Ivenroder Str.");
        break;
    }
    case 171664:
    {
        returnValue = F("Ivenroder Weg");
        break;
    }
    case 171665:
    {
        returnValue = F("Ivenspark");
        break;
    }
    case 171666:
    {
        returnValue = F("Ivensring");
        break;
    }
    case 171667:
    {
        returnValue = F("Ivensstr.");
        break;
    }
    case 171668:
    {
        returnValue = F("Ivenstr.");
        break;
    }
    case 171669:
    {
        returnValue = F("Iventrup");
        break;
    }
    case 171670:
    {
        returnValue = F("Ivenweg");
        break;
    }
    case 171671:
    {
        returnValue = F("Iversbüller Weg");
        break;
    }
    case 171672:
    {
        returnValue = F("Iversheimer Str.");
        break;
    }
    case 171673:
    {
        returnValue = F("Iverslund");
        break;
    }
    case 171674:
    {
        returnValue = F("Iveshof");
        break;
    }
    case 171675:
    {
        returnValue = F("Ivestr.");
        break;
    }
    case 171676:
    {
        returnValue = F("Ivo-Braak-Platz");
        break;
    }
    case 171677:
    {
        returnValue = F("Ivo-Braak-Ring");
        break;
    }
    case 171678:
    {
        returnValue = F("Ivo-Braak-Str.");
        break;
    }
    case 171679:
    {
        returnValue = F("Ivo-Hennemann-Str.");
        break;
    }
    case 171680:
    {
        returnValue = F("Ivostr.");
        break;
    }
    case 171681:
    {
        returnValue = F("Ivrystr.");
        break;
    }
    case 171682:
    {
        returnValue = F("Ivy Street");
        break;
    }
    case 171683:
    {
        returnValue = F("Iwan-Bloch-Weg");
        break;
    }
    case 171684:
    {
        returnValue = F("Iwan-Pawlow-Str.");
        break;
    }
    case 171685:
    {
        returnValue = F("Iwan-von-Müller-Str.");
        break;
    }
    case 171686:
    {
        returnValue = F("Iwand Weg");
        break;
    }
    case 171687:
    {
        returnValue = F("Iwenbergstr.");
        break;
    }
    case 171688:
    {
        returnValue = F("Iwering");
        break;
    }
    case 171689:
    {
        returnValue = F("Ixelweg");
        break;
    }
    case 171690:
    {
        returnValue = F("Ixengässchen");
        break;
    }
    case 171691:
    {
        returnValue = F("Ixheimer Str.");
        break;
    }
    case 171692:
    {
        returnValue = F("Ixweg");
        break;
    }
    case 171693:
    {
        returnValue = F("Izegem-Platz");
        break;
    }
    case 171694:
    {
        returnValue = F("Iznanger Str.");
        break;
    }
    }
    return returnValue;
}
