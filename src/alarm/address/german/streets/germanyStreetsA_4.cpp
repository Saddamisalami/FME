#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameA4(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 30003:
    {
        returnValue = F("Am Schwarzen Feld");
        break;
    }
    case 30004:
    {
        returnValue = F("Am Schwarzen Felsen");
        break;
    }
    case 30005:
    {
        returnValue = F("Am Schwarzen Graben");
        break;
    }
    case 30006:
    {
        returnValue = F("Am Schwarzen Land");
        break;
    }
    case 30007:
    {
        returnValue = F("Am Schwarzen Mannsgraben");
        break;
    }
    case 30008:
    {
        returnValue = F("Am Schwarzen Moor");
        break;
    }
    case 30009:
    {
        returnValue = F("Am Schwarzen Pfahl");
        break;
    }
    case 30010:
    {
        returnValue = F("Am Schwarzen Rain");
        break;
    }
    case 30011:
    {
        returnValue = F("Am Schwarzen Schöps");
        break;
    }
    case 30012:
    {
        returnValue = F("Am Schwarzen See");
        break;
    }
    case 30013:
    {
        returnValue = F("Am Schwarzen Siek");
        break;
    }
    case 30014:
    {
        returnValue = F("Am Schwarzen Steg");
        break;
    }
    case 30015:
    {
        returnValue = F("Am Schwarzen Stock");
        break;
    }
    case 30016:
    {
        returnValue = F("Am Schwarzen Stuken");
        break;
    }
    case 30017:
    {
        returnValue = F("Am Schwarzen Stück");
        break;
    }
    case 30018:
    {
        returnValue = F("Am Schwarzen Teich");
        break;
    }
    case 30019:
    {
        returnValue = F("Am Schwarzen Weg");
        break;
    }
    case 30020:
    {
        returnValue = F("Am Schwarzen Weiher");
        break;
    }
    case 30021:
    {
        returnValue = F("Am Schwarzenbach");
        break;
    }
    case 30022:
    {
        returnValue = F("Am Schwarzenbachgrund");
        break;
    }
    case 30023:
    {
        returnValue = F("Am Schwarzenberg");
        break;
    }
    case 30024:
    {
        returnValue = F("Am Schwarzenstein");
        break;
    }
    case 30025:
    {
        returnValue = F("Am Schwarzenweg");
        break;
    }
    case 30026:
    {
        returnValue = F("Am Schwarzfeld");
        break;
    }
    case 30027:
    {
        returnValue = F("Am Schwarzfelder Weg");
        break;
    }
    case 30028:
    {
        returnValue = F("Am Schwarzgraben");
        break;
    }
    case 30029:
    {
        returnValue = F("Am Schwarzrod");
        break;
    }
    case 30030:
    {
        returnValue = F("Am Schwarzwasser");
        break;
    }
    case 30031:
    {
        returnValue = F("Am Schwarzweiher");
        break;
    }
    case 30032:
    {
        returnValue = F("Am Schwarzwäldchen");
        break;
    }
    case 30033:
    {
        returnValue = F("Am Schwebach");
        break;
    }
    case 30034:
    {
        returnValue = F("Am Schwedderberg");
        break;
    }
    case 30035:
    {
        returnValue = F("Am Schwedenberg");
        break;
    }
    case 30036:
    {
        returnValue = F("Am Schwedengraben");
        break;
    }
    case 30037:
    {
        returnValue = F("Am Schwedenkreuz");
        break;
    }
    case 30038:
    {
        returnValue = F("Am Schwedenstein");
        break;
    }
    case 30039:
    {
        returnValue = F("Am Schwedenteich");
        break;
    }
    case 30040:
    {
        returnValue = F("Am Schwedentor");
        break;
    }
    case 30041:
    {
        returnValue = F("Am Schwedenturm");
        break;
    }
    case 30042:
    {
        returnValue = F("Am Schwedenwall");
        break;
    }
    case 30043:
    {
        returnValue = F("Am Schwediwald");
        break;
    }
    case 30044:
    {
        returnValue = F("Am Schwedsberg");
        break;
    }
    case 30045:
    {
        returnValue = F("Am Schwefelbrunnen");
        break;
    }
    case 30046:
    {
        returnValue = F("Am Schwefelgraben");
        break;
    }
    case 30047:
    {
        returnValue = F("Am Schwegelacker");
        break;
    }
    case 30048:
    {
        returnValue = F("Am Schwegelweiher");
        break;
    }
    case 30049:
    {
        returnValue = F("Am Schweibusch");
        break;
    }
    case 30050:
    {
        returnValue = F("Am Schweiger");
        break;
    }
    case 30051:
    {
        returnValue = F("Am Schweigsiek");
        break;
    }
    case 30052:
    {
        returnValue = F("Am Schweinedamm");
        break;
    }
    case 30053:
    {
        returnValue = F("Am Schweinegrund");
        break;
    }
    case 30054:
    {
        returnValue = F("Am Schweinemarkt");
        break;
    }
    case 30055:
    {
        returnValue = F("Am Schweinetor");
        break;
    }
    case 30056:
    {
        returnValue = F("Am Schweinheimer Pfad");
        break;
    }
    case 30057:
    {
        returnValue = F("Am Schweinskrug");
        break;
    }
    case 30058:
    {
        returnValue = F("Am Schweissberg");
        break;
    }
    case 30059:
    {
        returnValue = F("Am Schweizberg");
        break;
    }
    case 30060:
    {
        returnValue = F("Am Schweizerbach");
        break;
    }
    case 30061:
    {
        returnValue = F("Am Schweizergarten");
        break;
    }
    case 30062:
    {
        returnValue = F("Am Schweizerhaus");
        break;
    }
    case 30063:
    {
        returnValue = F("Am Schweizerhof");
        break;
    }
    case 30064:
    {
        returnValue = F("Am Schweizersbild");
        break;
    }
    case 30065:
    {
        returnValue = F("Am Schweizerwald");
        break;
    }
    case 30066:
    {
        returnValue = F("Am Schwelgdyk");
        break;
    }
    case 30067:
    {
        returnValue = F("Am Schwellbau");
        break;
    }
    case 30068:
    {
        returnValue = F("Am Schwellborn");
        break;
    }
    case 30069:
    {
        returnValue = F("Am Schwellenbächle");
        break;
    }
    case 30070:
    {
        returnValue = F("Am Schwemmacker");
        break;
    }
    case 30071:
    {
        returnValue = F("Am Schwemmegraben");
        break;
    }
    case 30072:
    {
        returnValue = F("Am Schwemmteich");
        break;
    }
    case 30073:
    {
        returnValue = F("Am Schwemmtümpfel");
        break;
    }
    case 30074:
    {
        returnValue = F("Am Schwendelgraben");
        break;
    }
    case 30075:
    {
        returnValue = F("Am Schwenkhaus");
        break;
    }
    case 30076:
    {
        returnValue = F("Am Schweriner See");
        break;
    }
    case 30077:
    {
        returnValue = F("Am Schwertberge");
        break;
    }
    case 30078:
    {
        returnValue = F("Am Schwesternhaus");
        break;
    }
    case 30079:
    {
        returnValue = F("Am Schwesternheim");
        break;
    }
    case 30080:
    {
        returnValue = F("Am Schwettinger Graben");
        break;
    }
    case 30081:
    {
        returnValue = F("Am Schwibbogen");
        break;
    }
    case 30082:
    {
        returnValue = F("Am Schwickenberg");
        break;
    }
    case 30083:
    {
        returnValue = F("Am Schwiemelgraben");
        break;
    }
    case 30084:
    {
        returnValue = F("Am Schwimmbad");
        break;
    }
    case 30085:
    {
        returnValue = F("Am Schwimmel");
        break;
    }
    case 30086:
    {
        returnValue = F("Am Schwimmstadion");
        break;
    }
    case 30087:
    {
        returnValue = F("Am Schwindelbaum");
        break;
    }
    case 30088:
    {
        returnValue = F("Am Schwindgraben");
        break;
    }
    case 30089:
    {
        returnValue = F("Am Schwingbach");
        break;
    }
    case 30090:
    {
        returnValue = F("Am Schwitzenberg");
        break;
    }
    case 30091:
    {
        returnValue = F("Am Schwärzefloß");
        break;
    }
    case 30092:
    {
        returnValue = F("Am Schwärzelsberg");
        break;
    }
    case 30093:
    {
        returnValue = F("Am Schwärzenbronnen");
        break;
    }
    case 30094:
    {
        returnValue = F("Am Schächele");
        break;
    }
    case 30095:
    {
        returnValue = F("Am Schächer");
        break;
    }
    case 30096:
    {
        returnValue = F("Am Schächtchen");
        break;
    }
    case 30097:
    {
        returnValue = F("Am Schäferacker");
        break;
    }
    case 30098:
    {
        returnValue = F("Am Schäferanger");
        break;
    }
    case 30099:
    {
        returnValue = F("Am Schäferbach");
        break;
    }
    case 30100:
    {
        returnValue = F("Am Schäferberg");
        break;
    }
    case 30101:
    {
        returnValue = F("Am Schäferbrink");
        break;
    }
    case 30102:
    {
        returnValue = F("Am Schäferbruch");
        break;
    }
    case 30103:
    {
        returnValue = F("Am Schäferbrunnen");
        break;
    }
    case 30104:
    {
        returnValue = F("Am Schäferbusch");
        break;
    }
    case 30105:
    {
        returnValue = F("Am Schäfereck");
        break;
    }
    case 30106:
    {
        returnValue = F("Am Schäferfeld");
        break;
    }
    case 30107:
    {
        returnValue = F("Am Schäfergarten");
        break;
    }
    case 30108:
    {
        returnValue = F("Am Schäfergrab");
        break;
    }
    case 30109:
    {
        returnValue = F("Am Schäfergraben");
        break;
    }
    case 30110:
    {
        returnValue = F("Am Schäfergrund");
        break;
    }
    case 30111:
    {
        returnValue = F("Am Schäferhaus");
        break;
    }
    case 30112:
    {
        returnValue = F("Am Schäferhof");
        break;
    }
    case 30113:
    {
        returnValue = F("Am Schäferig");
        break;
    }
    case 30114:
    {
        returnValue = F("Am Schäferkamp");
        break;
    }
    case 30115:
    {
        returnValue = F("Am Schäferkaten");
        break;
    }
    case 30116:
    {
        returnValue = F("Am Schäferköpfchen");
        break;
    }
    case 30117:
    {
        returnValue = F("Am Schäferlingen");
        break;
    }
    case 30118:
    {
        returnValue = F("Am Schäferloch");
        break;
    }
    case 30119:
    {
        returnValue = F("Am Schäfermoor");
        break;
    }
    case 30120:
    {
        returnValue = F("Am Schäferpfad");
        break;
    }
    case 30121:
    {
        returnValue = F("Am Schäferpfuhl");
        break;
    }
    case 30122:
    {
        returnValue = F("Am Schäferplatz");
        break;
    }
    case 30123:
    {
        returnValue = F("Am Schäferrain");
        break;
    }
    case 30124:
    {
        returnValue = F("Am Schäferräumicht");
        break;
    }
    case 30125:
    {
        returnValue = F("Am Schäfers Kreuz");
        break;
    }
    case 30126:
    {
        returnValue = F("Am Schäfersacker");
        break;
    }
    case 30127:
    {
        returnValue = F("Am Schäfersberg");
        break;
    }
    case 30128:
    {
        returnValue = F("Am Schäfersborn");
        break;
    }
    case 30129:
    {
        returnValue = F("Am Schäferseck");
        break;
    }
    case 30130:
    {
        returnValue = F("Am Schäfersgarten");
        break;
    }
    case 30131:
    {
        returnValue = F("Am Schäfersgraben");
        break;
    }
    case 30132:
    {
        returnValue = F("Am Schäferstich");
        break;
    }
    case 30133:
    {
        returnValue = F("Am Schäferstieg");
        break;
    }
    case 30134:
    {
        returnValue = F("Am Schäferteich");
        break;
    }
    case 30135:
    {
        returnValue = F("Am Schäferwald");
        break;
    }
    case 30136:
    {
        returnValue = F("Am Schäffgraben");
        break;
    }
    case 30137:
    {
        returnValue = F("Am Schäfflerberg");
        break;
    }
    case 30138:
    {
        returnValue = F("Am Schäfingskamp");
        break;
    }
    case 30139:
    {
        returnValue = F("Am Schäkel");
        break;
    }
    case 30140:
    {
        returnValue = F("Am Schälberg");
        break;
    }
    case 30141:
    {
        returnValue = F("Am Schänzchen");
        break;
    }
    case 30142:
    {
        returnValue = F("Am Schänzel");
        break;
    }
    case 30143:
    {
        returnValue = F("Am Schänzjeskriemer");
        break;
    }
    case 30144:
    {
        returnValue = F("Am Schänzle");
        break;
    }
    case 30145:
    {
        returnValue = F("Am Schäperhoff");
        break;
    }
    case 30146:
    {
        returnValue = F("Am Schäperkamp");
        break;
    }
    case 30147:
    {
        returnValue = F("Am Schärf");
        break;
    }
    case 30148:
    {
        returnValue = F("Am Schättlisberg");
        break;
    }
    case 30149:
    {
        returnValue = F("Am Schäufelfeld");
        break;
    }
    case 30150:
    {
        returnValue = F("Am Schäwer");
        break;
    }
    case 30151:
    {
        returnValue = F("Am Schäßbach");
        break;
    }
    case 30152:
    {
        returnValue = F("Am Schöberle");
        break;
    }
    case 30153:
    {
        returnValue = F("Am Schödelein");
        break;
    }
    case 30154:
    {
        returnValue = F("Am Schöffenshof");
        break;
    }
    case 30155:
    {
        returnValue = F("Am Schöffental");
        break;
    }
    case 30156:
    {
        returnValue = F("Am Schöffer");
        break;
    }
    case 30157:
    {
        returnValue = F("Am Schöllerrain");
        break;
    }
    case 30158:
    {
        returnValue = F("Am Schöllgraben");
        break;
    }
    case 30159:
    {
        returnValue = F("Am Schölzbach");
        break;
    }
    case 30160:
    {
        returnValue = F("Am Schönauer Weg");
        break;
    }
    case 30161:
    {
        returnValue = F("Am Schönbaum");
        break;
    }
    case 30162:
    {
        returnValue = F("Am Schönberg");
        break;
    }
    case 30163:
    {
        returnValue = F("Am Schönblick");
        break;
    }
    case 30164:
    {
        returnValue = F("Am Schönborn");
        break;
    }
    case 30165:
    {
        returnValue = F("Am Schönborner Hof");
        break;
    }
    case 30166:
    {
        returnValue = F("Am Schönbühl");
        break;
    }
    case 30167:
    {
        returnValue = F("Am Schöneberg");
        break;
    }
    case 30168:
    {
        returnValue = F("Am Schöneberger Hof");
        break;
    }
    case 30169:
    {
        returnValue = F("Am Schöneck");
        break;
    }
    case 30170:
    {
        returnValue = F("Am Schönen Moos");
        break;
    }
    case 30171:
    {
        returnValue = F("Am Schönen Rain");
        break;
    }
    case 30172:
    {
        returnValue = F("Am Schönenberg");
        break;
    }
    case 30173:
    {
        returnValue = F("Am Schönenhof");
        break;
    }
    case 30174:
    {
        returnValue = F("Am Schönherrnberg");
        break;
    }
    case 30175:
    {
        returnValue = F("Am Schönhof");
        break;
    }
    case 30176:
    {
        returnValue = F("Am Schönjungferngrund");
        break;
    }
    case 30177:
    {
        returnValue = F("Am Schönletter");
        break;
    }
    case 30178:
    {
        returnValue = F("Am Schönortsmoor");
        break;
    }
    case 30179:
    {
        returnValue = F("Am Schönungsteich");
        break;
    }
    case 30180:
    {
        returnValue = F("Am Schönweiher");
        break;
    }
    case 30181:
    {
        returnValue = F("Am Schöpfbrunnen");
        break;
    }
    case 30182:
    {
        returnValue = F("Am Schöpfchen");
        break;
    }
    case 30183:
    {
        returnValue = F("Am Schöpfenfleck");
        break;
    }
    case 30184:
    {
        returnValue = F("Am Schöpfwerk");
        break;
    }
    case 30185:
    {
        returnValue = F("Am Schöps");
        break;
    }
    case 30186:
    {
        returnValue = F("Am Schörzbach");
        break;
    }
    case 30187:
    {
        returnValue = F("Am Schötenweg");
        break;
    }
    case 30188:
    {
        returnValue = F("Am Schötteler");
        break;
    }
    case 30189:
    {
        returnValue = F("Am Schöxweiher");
        break;
    }
    case 30190:
    {
        returnValue = F("Am Schüberg");
        break;
    }
    case 30191:
    {
        returnValue = F("Am Schückingplatz");
        break;
    }
    case 30192:
    {
        returnValue = F("Am Schüerken");
        break;
    }
    case 30193:
    {
        returnValue = F("Am Schüllgen");
        break;
    }
    case 30194:
    {
        returnValue = F("Am Schünenbusch");
        break;
    }
    case 30195:
    {
        returnValue = F("Am Schünsee");
        break;
    }
    case 30196:
    {
        returnValue = F("Am Schürenfeld");
        break;
    }
    case 30197:
    {
        returnValue = F("Am Schürenkamp");
        break;
    }
    case 30198:
    {
        returnValue = F("Am Schürhof");
        break;
    }
    case 30199:
    {
        returnValue = F("Am Schürkamp");
        break;
    }
    case 30200:
    {
        returnValue = F("Am Schürken");
        break;
    }
    case 30201:
    {
        returnValue = F("Am Schürlebach");
        break;
    }
    case 30202:
    {
        returnValue = F("Am Schürmannshof");
        break;
    }
    case 30203:
    {
        returnValue = F("Am Schürplatz");
        break;
    }
    case 30204:
    {
        returnValue = F("Am Schürzeberg");
        break;
    }
    case 30205:
    {
        returnValue = F("Am Schütt");
        break;
    }
    case 30206:
    {
        returnValue = F("Am Schüttelberg");
        break;
    }
    case 30207:
    {
        returnValue = F("Am Schüttenhassel");
        break;
    }
    case 30208:
    {
        returnValue = F("Am Schüttenkamp");
        break;
    }
    case 30209:
    {
        returnValue = F("Am Schüttetörle");
        break;
    }
    case 30210:
    {
        returnValue = F("Am Schütting");
        break;
    }
    case 30211:
    {
        returnValue = F("Am Schütz");
        break;
    }
    case 30212:
    {
        returnValue = F("Am Schützberg");
        break;
    }
    case 30213:
    {
        returnValue = F("Am Schützen");
        break;
    }
    case 30214:
    {
        returnValue = F("Am Schützenanger");
        break;
    }
    case 30215:
    {
        returnValue = F("Am Schützenberg");
        break;
    }
    case 30216:
    {
        returnValue = F("Am Schützenbründl");
        break;
    }
    case 30217:
    {
        returnValue = F("Am Schützenbrünnele");
        break;
    }
    case 30218:
    {
        returnValue = F("Am Schützenbusch");
        break;
    }
    case 30219:
    {
        returnValue = F("Am Schützenbäumchen");
        break;
    }
    case 30220:
    {
        returnValue = F("Am Schützenbühl");
        break;
    }
    case 30221:
    {
        returnValue = F("Am Schützeneck");
        break;
    }
    case 30222:
    {
        returnValue = F("Am Schützengarten");
        break;
    }
    case 30223:
    {
        returnValue = F("Am Schützengraben");
        break;
    }
    case 30224:
    {
        returnValue = F("Am Schützengrund");
        break;
    }
    case 30225:
    {
        returnValue = F("Am Schützenhaus");
        break;
    }
    case 30226:
    {
        returnValue = F("Am Schützenheim");
        break;
    }
    case 30227:
    {
        returnValue = F("Am Schützenhof");
        break;
    }
    case 30228:
    {
        returnValue = F("Am Schützenholz");
        break;
    }
    case 30229:
    {
        returnValue = F("Am Schützenpark");
        break;
    }
    case 30230:
    {
        returnValue = F("Am Schützenpfad");
        break;
    }
    case 30231:
    {
        returnValue = F("Am Schützenpfuhl");
        break;
    }
    case 30232:
    {
        returnValue = F("Am Schützenplatz");
        break;
    }
    case 30233:
    {
        returnValue = F("Am Schützenrain");
        break;
    }
    case 30234:
    {
        returnValue = F("Am Schützenring");
        break;
    }
    case 30235:
    {
        returnValue = F("Am Schützenteich");
        break;
    }
    case 30236:
    {
        returnValue = F("Am Schützenwald");
        break;
    }
    case 30237:
    {
        returnValue = F("Am Schützenweg");
        break;
    }
    case 30238:
    {
        returnValue = F("Am Schützenweiher");
        break;
    }
    case 30239:
    {
        returnValue = F("Am Schützenwäldchen");
        break;
    }
    case 30240:
    {
        returnValue = F("Am Schützgraben");
        break;
    }
    case 30241:
    {
        returnValue = F("Am Schützteich");
        break;
    }
    case 30242:
    {
        returnValue = F("Am Schüßler");
        break;
    }
    case 30243:
    {
        returnValue = F("Am Sebastiberg");
        break;
    }
    case 30244:
    {
        returnValue = F("Am Sebbel");
        break;
    }
    case 30245:
    {
        returnValue = F("Am Sebnitzbach");
        break;
    }
    case 30246:
    {
        returnValue = F("Am Sechsbeetehübel");
        break;
    }
    case 30247:
    {
        returnValue = F("Am Sechslindenöschle");
        break;
    }
    case 30248:
    {
        returnValue = F("Am Seckelberg");
        break;
    }
    case 30249:
    {
        returnValue = F("Am Sedelbach");
        break;
    }
    case 30250:
    {
        returnValue = F("Am See");
        break;
    }
    case 30251:
    {
        returnValue = F("Am Seeacker");
        break;
    }
    case 30252:
    {
        returnValue = F("Am Seebach");
        break;
    }
    case 30253:
    {
        returnValue = F("Am Seebachanger");
        break;
    }
    case 30254:
    {
        returnValue = F("Am Seebarg");
        break;
    }
    case 30255:
    {
        returnValue = F("Am Seebeek");
        break;
    }
    case 30256:
    {
        returnValue = F("Am Seeberg");
        break;
    }
    case 30257:
    {
        returnValue = F("Am Seebichl");
        break;
    }
    case 30258:
    {
        returnValue = F("Am Seeblick");
        break;
    }
    case 30259:
    {
        returnValue = F("Am Seebrunnen");
        break;
    }
    case 30260:
    {
        returnValue = F("Am Seebächle");
        break;
    }
    case 30261:
    {
        returnValue = F("Am Seechen");
        break;
    }
    case 30262:
    {
        returnValue = F("Am Seedamm");
        break;
    }
    case 30263:
    {
        returnValue = F("Am Seedeich");
        break;
    }
    case 30264:
    {
        returnValue = F("Am Seeden");
        break;
    }
    case 30265:
    {
        returnValue = F("Am Seediek");
        break;
    }
    case 30266:
    {
        returnValue = F("Am Seedobben");
        break;
    }
    case 30267:
    {
        returnValue = F("Am Seefeld");
        break;
    }
    case 30268:
    {
        returnValue = F("Am Seefeldberg");
        break;
    }
    case 30269:
    {
        returnValue = F("Am Seefelde");
        break;
    }
    case 30270:
    {
        returnValue = F("Am Seegarten");
        break;
    }
    case 30271:
    {
        returnValue = F("Am Seegatter");
        break;
    }
    case 30272:
    {
        returnValue = F("Am Seegen");
        break;
    }
    case 30273:
    {
        returnValue = F("Am Seegraben");
        break;
    }
    case 30274:
    {
        returnValue = F("Am Seegrund");
        break;
    }
    case 30275:
    {
        returnValue = F("Am Seegärtchen");
        break;
    }
    case 30276:
    {
        returnValue = F("Am Seehagen");
        break;
    }
    case 30277:
    {
        returnValue = F("Am Seehaus");
        break;
    }
    case 30278:
    {
        returnValue = F("Am Seehof");
        break;
    }
    case 30279:
    {
        returnValue = F("Am Seeholz");
        break;
    }
    case 30280:
    {
        returnValue = F("Am Seehügel");
        break;
    }
    case 30281:
    {
        returnValue = F("Am Seekamp");
        break;
    }
    case 30282:
    {
        returnValue = F("Am Seekanal");
        break;
    }
    case 30283:
    {
        returnValue = F("Am Seekenbek");
        break;
    }
    case 30284:
    {
        returnValue = F("Am Seekenhof");
        break;
    }
    case 30285:
    {
        returnValue = F("Am Seekenkamp");
        break;
    }
    case 30286:
    {
        returnValue = F("Am Seekorso");
        break;
    }
    case 30287:
    {
        returnValue = F("Am Seel");
        break;
    }
    case 30288:
    {
        returnValue = F("Am Seelacker");
        break;
    }
    case 30289:
    {
        returnValue = F("Am Seelbach");
        break;
    }
    case 30290:
    {
        returnValue = F("Am Seelein");
        break;
    }
    case 30291:
    {
        returnValue = F("Am Seelenbach");
        break;
    }
    case 30292:
    {
        returnValue = F("Am Seelengütlein");
        break;
    }
    case 30293:
    {
        returnValue = F("Am Seelesgraben");
        break;
    }
    case 30294:
    {
        returnValue = F("Am Seeleswald");
        break;
    }
    case 30295:
    {
        returnValue = F("Am Seelgräth");
        break;
    }
    case 30296:
    {
        returnValue = F("Am Seelkopf");
        break;
    }
    case 30297:
    {
        returnValue = F("Am Seelohbach");
        break;
    }
    case 30298:
    {
        returnValue = F("Am Seelübber See");
        break;
    }
    case 30299:
    {
        returnValue = F("Am Seemoor");
        break;
    }
    case 30300:
    {
        returnValue = F("Am Seemännlein");
        break;
    }
    case 30301:
    {
        returnValue = F("Am Seepark");
        break;
    }
    case 30302:
    {
        returnValue = F("Am Seepferdchen");
        break;
    }
    case 30303:
    {
        returnValue = F("Am Seerain");
        break;
    }
    case 30304:
    {
        returnValue = F("Am Seerasen");
        break;
    }
    case 30305:
    {
        returnValue = F("Am Seerhein");
        break;
    }
    case 30306:
    {
        returnValue = F("Am Seesbühl");
        break;
    }
    case 30307:
    {
        returnValue = F("Am Seeschaarwald");
        break;
    }
    case 30308:
    {
        returnValue = F("Am Seeschlag");
        break;
    }
    case 30309:
    {
        returnValue = F("Am Seeschlößchen");
        break;
    }
    case 30310:
    {
        returnValue = F("Am Seestall");
        break;
    }
    case 30311:
    {
        returnValue = F("Am Seestern");
        break;
    }
    case 30312:
    {
        returnValue = F("Am Seeth");
        break;
    }
    case 30313:
    {
        returnValue = F("Am Seeufer");
        break;
    }
    case 30314:
    {
        returnValue = F("Am Seewald");
        break;
    }
    case 30315:
    {
        returnValue = F("Am Seewaldschacht");
        break;
    }
    case 30316:
    {
        returnValue = F("Am Seewasem");
        break;
    }
    case 30317:
    {
        returnValue = F("Am Seewasen");
        break;
    }
    case 30318:
    {
        returnValue = F("Am Seeweg");
        break;
    }
    case 30319:
    {
        returnValue = F("Am Seewege");
        break;
    }
    case 30320:
    {
        returnValue = F("Am Seewerngraben");
        break;
    }
    case 30321:
    {
        returnValue = F("Am Seewinkel");
        break;
    }
    case 30322:
    {
        returnValue = F("Am Seffersbach");
        break;
    }
    case 30323:
    {
        returnValue = F("Am Segelberg");
        break;
    }
    case 30324:
    {
        returnValue = F("Am Segelflugplatz");
        break;
    }
    case 30325:
    {
        returnValue = F("Am Segelhafen");
        break;
    }
    case 30326:
    {
        returnValue = F("Am Segelsgraben");
        break;
    }
    case 30327:
    {
        returnValue = F("Am Segen");
        break;
    }
    case 30328:
    {
        returnValue = F("Am Seglerhafen");
        break;
    }
    case 30329:
    {
        returnValue = F("Am Sehlbrink");
        break;
    }
    case 30330:
    {
        returnValue = F("Am Sehner");
        break;
    }
    case 30331:
    {
        returnValue = F("Am Seibelseck");
        break;
    }
    case 30332:
    {
        returnValue = F("Am Seibelstein");
        break;
    }
    case 30333:
    {
        returnValue = F("Am Seiberg");
        break;
    }
    case 30334:
    {
        returnValue = F("Am Seibesbach");
        break;
    }
    case 30335:
    {
        returnValue = F("Am Seidelacker");
        break;
    }
    case 30336:
    {
        returnValue = F("Am Seidelberg");
        break;
    }
    case 30337:
    {
        returnValue = F("Am Seidelsberg");
        break;
    }
    case 30338:
    {
        returnValue = F("Am Seidenberg");
        break;
    }
    case 30339:
    {
        returnValue = F("Am Seidenbuckel");
        break;
    }
    case 30340:
    {
        returnValue = F("Am Seidenhof");
        break;
    }
    case 30341:
    {
        returnValue = F("Am Seidenschwanz");
        break;
    }
    case 30342:
    {
        returnValue = F("Am Seidenspinner");
        break;
    }
    case 30343:
    {
        returnValue = F("Am Seiesberg");
        break;
    }
    case 30344:
    {
        returnValue = F("Am Seif");
        break;
    }
    case 30345:
    {
        returnValue = F("Am Seifen");
        break;
    }
    case 30346:
    {
        returnValue = F("Am Seifenbach");
        break;
    }
    case 30347:
    {
        returnValue = F("Am Seifenberg");
        break;
    }
    case 30348:
    {
        returnValue = F("Am Seifengrund");
        break;
    }
    case 30349:
    {
        returnValue = F("Am Seifenkopf");
        break;
    }
    case 30350:
    {
        returnValue = F("Am Seifertsberg");
        break;
    }
    case 30351:
    {
        returnValue = F("Am Seigen");
        break;
    }
    case 30352:
    {
        returnValue = F("Am Seilbahnberg");
        break;
    }
    case 30353:
    {
        returnValue = F("Am Seilerberg");
        break;
    }
    case 30354:
    {
        returnValue = F("Am Seilerweg");
        break;
    }
    case 30355:
    {
        returnValue = F("Am Seilwerk");
        break;
    }
    case 30356:
    {
        returnValue = F("Am Seitbach");
        break;
    }
    case 30357:
    {
        returnValue = F("Am Seitel");
        break;
    }
    case 30358:
    {
        returnValue = F("Am Seitenberg");
        break;
    }
    case 30359:
    {
        returnValue = F("Am Seitenkanal");
        break;
    }
    case 30360:
    {
        returnValue = F("Am Seitenweg");
        break;
    }
    case 30361:
    {
        returnValue = F("Am Seitert");
        break;
    }
    case 30362:
    {
        returnValue = F("Am Seitzentor");
        break;
    }
    case 30363:
    {
        returnValue = F("Am Selbacher Weg");
        break;
    }
    case 30364:
    {
        returnValue = F("Am Selberge");
        break;
    }
    case 30365:
    {
        returnValue = F("Am Selda");
        break;
    }
    case 30366:
    {
        returnValue = F("Am Selder");
        break;
    }
    case 30367:
    {
        returnValue = F("Am Sellbüsch");
        break;
    }
    case 30368:
    {
        returnValue = F("Am Sellhof");
        break;
    }
    case 30369:
    {
        returnValue = F("Am Selliner See");
        break;
    }
    case 30370:
    {
        returnValue = F("Am Sellnhof");
        break;
    }
    case 30371:
    {
        returnValue = F("Am Sellro");
        break;
    }
    case 30372:
    {
        returnValue = F("Am Selsinger Bach");
        break;
    }
    case 30373:
    {
        returnValue = F("Am Seltenbach");
        break;
    }
    case 30374:
    {
        returnValue = F("Am Seltenberg");
        break;
    }
    case 30375:
    {
        returnValue = F("Am Seltengraben");
        break;
    }
    case 30376:
    {
        returnValue = F("Am Seltenrain");
        break;
    }
    case 30377:
    {
        returnValue = F("Am Selzenborn");
        break;
    }
    case 30378:
    {
        returnValue = F("Am Selzengraben");
        break;
    }
    case 30379:
    {
        returnValue = F("Am Selzer");
        break;
    }
    case 30380:
    {
        returnValue = F("Am Sembach");
        break;
    }
    case 30381:
    {
        returnValue = F("Am Semberg");
        break;
    }
    case 30382:
    {
        returnValue = F("Am Seminargarten");
        break;
    }
    case 30383:
    {
        returnValue = F("Am Semlowerkanal");
        break;
    }
    case 30384:
    {
        returnValue = F("Am Semmbach");
        break;
    }
    case 30385:
    {
        returnValue = F("Am Semmelberg");
        break;
    }
    case 30386:
    {
        returnValue = F("Am Semmersberg");
        break;
    }
    case 30387:
    {
        returnValue = F("Am Semmiggut");
        break;
    }
    case 30388:
    {
        returnValue = F("Am Sendelbach");
        break;
    }
    case 30389:
    {
        returnValue = F("Am Sendelgraben");
        break;
    }
    case 30390:
    {
        returnValue = F("Am Sender");
        break;
    }
    case 30391:
    {
        returnValue = F("Am Sendle");
        break;
    }
    case 30392:
    {
        returnValue = F("Am Senft");
        break;
    }
    case 30393:
    {
        returnValue = F("Am Sengeberg");
        break;
    }
    case 30394:
    {
        returnValue = F("Am Sengelbach");
        break;
    }
    case 30395:
    {
        returnValue = F("Am Sengelsiel");
        break;
    }
    case 30396:
    {
        returnValue = F("Am Sengelskamp");
        break;
    }
    case 30397:
    {
        returnValue = F("Am Sengenberg");
        break;
    }
    case 30398:
    {
        returnValue = F("Am Sengenhoff");
        break;
    }
    case 30399:
    {
        returnValue = F("Am Senger");
        break;
    }
    case 30400:
    {
        returnValue = F("Am Sengert");
        break;
    }
    case 30401:
    {
        returnValue = F("Am Sengig");
        break;
    }
    case 30402:
    {
        returnValue = F("Am Seniorenheim");
        break;
    }
    case 30403:
    {
        returnValue = F("Am Seniorenpark");
        break;
    }
    case 30404:
    {
        returnValue = F("Am Seniorenzentrum");
        break;
    }
    case 30405:
    {
        returnValue = F("Am Sennberg");
        break;
    }
    case 30406:
    {
        returnValue = F("Am Sennebach");
        break;
    }
    case 30407:
    {
        returnValue = F("Am Senneberg");
        break;
    }
    case 30408:
    {
        returnValue = F("Am Sennehügel");
        break;
    }
    case 30409:
    {
        returnValue = F("Am Sennenbusch");
        break;
    }
    case 30410:
    {
        returnValue = F("Am Sennerbad");
        break;
    }
    case 30411:
    {
        returnValue = F("Am Sennfeld");
        break;
    }
    case 30412:
    {
        returnValue = F("Am Sensberg");
        break;
    }
    case 30413:
    {
        returnValue = F("Am Sensch");
        break;
    }
    case 30414:
    {
        returnValue = F("Am Senselberg");
        break;
    }
    case 30415:
    {
        returnValue = F("Am Sensenberg");
        break;
    }
    case 30416:
    {
        returnValue = F("Am Sensenhammer");
        break;
    }
    case 30417:
    {
        returnValue = F("Am Sentenhart");
        break;
    }
    case 30418:
    {
        returnValue = F("Am Senteshof");
        break;
    }
    case 30419:
    {
        returnValue = F("Am Sepphof");
        break;
    }
    case 30420:
    {
        returnValue = F("Am Serginer Platz");
        break;
    }
    case 30421:
    {
        returnValue = F("Am Sermesberg");
        break;
    }
    case 30422:
    {
        returnValue = F("Am Sernoer Forsthaus");
        break;
    }
    case 30423:
    {
        returnValue = F("Am Serrahnsbach");
        break;
    }
    case 30424:
    {
        returnValue = F("Am Sersberg");
        break;
    }
    case 30425:
    {
        returnValue = F("Am Sess");
        break;
    }
    case 30426:
    {
        returnValue = F("Am Sesselberg");
        break;
    }
    case 30427:
    {
        returnValue = F("Am Sessenhahn");
        break;
    }
    case 30428:
    {
        returnValue = F("Am Sethenbach");
        break;
    }
    case 30429:
    {
        returnValue = F("Am Settel");
        break;
    }
    case 30430:
    {
        returnValue = F("Am Setzebach");
        break;
    }
    case 30431:
    {
        returnValue = F("Am Setzen");
        break;
    }
    case 30432:
    {
        returnValue = F("Am Setzerweiher");
        break;
    }
    case 30433:
    {
        returnValue = F("Am Setzgraben");
        break;
    }
    case 30434:
    {
        returnValue = F("Am Seugenbach");
        break;
    }
    case 30435:
    {
        returnValue = F("Am Seukenbach");
        break;
    }
    case 30436:
    {
        returnValue = F("Am Sevengraben");
        break;
    }
    case 30437:
    {
        returnValue = F("Am Severinstor");
        break;
    }
    case 30438:
    {
        returnValue = F("Am Seßweg");
        break;
    }
    case 30439:
    {
        returnValue = F("Am Sichenwegl");
        break;
    }
    case 30440:
    {
        returnValue = F("Am Sichtepöhl");
        break;
    }
    case 30441:
    {
        returnValue = F("Am Sickenbrünnle");
        break;
    }
    case 30442:
    {
        returnValue = F("Am Sickerberg");
        break;
    }
    case 30443:
    {
        returnValue = F("Am Sickersberg");
        break;
    }
    case 30444:
    {
        returnValue = F("Am Sickingerhof");
        break;
    }
    case 30445:
    {
        returnValue = F("Am Sidowsee");
        break;
    }
    case 30446:
    {
        returnValue = F("Am Siebeck");
        break;
    }
    case 30447:
    {
        returnValue = F("Am Siebenborn");
        break;
    }
    case 30448:
    {
        returnValue = F("Am Siebenhügel");
        break;
    }
    case 30449:
    {
        returnValue = F("Am Siebenstein");
        break;
    }
    case 30450:
    {
        returnValue = F("Am Siebenstern");
        break;
    }
    case 30451:
    {
        returnValue = F("Am Sieberdamm");
        break;
    }
    case 30452:
    {
        returnValue = F("Am Sieberg");
        break;
    }
    case 30453:
    {
        returnValue = F("Am Siebetsborn");
        break;
    }
    case 30454:
    {
        returnValue = F("Am Siebfeld");
        break;
    }
    case 30455:
    {
        returnValue = F("Am Siebgraben");
        break;
    }
    case 30456:
    {
        returnValue = F("Am Siechen");
        break;
    }
    case 30457:
    {
        returnValue = F("Am Siechenbach");
        break;
    }
    case 30458:
    {
        returnValue = F("Am Siechenberg");
        break;
    }
    case 30459:
    {
        returnValue = F("Am Siechengrund");
        break;
    }
    case 30460:
    {
        returnValue = F("Am Siechenhorst");
        break;
    }
    case 30461:
    {
        returnValue = F("Am Siechenrasen");
        break;
    }
    case 30462:
    {
        returnValue = F("Am Siechenturm");
        break;
    }
    case 30463:
    {
        returnValue = F("Am Siechhaus");
        break;
    }
    case 30464:
    {
        returnValue = F("Am Siechhof");
        break;
    }
    case 30465:
    {
        returnValue = F("Am Siechweiher");
        break;
    }
    case 30466:
    {
        returnValue = F("Am Siedbruch");
        break;
    }
    case 30467:
    {
        returnValue = F("Am Siedebach");
        break;
    }
    case 30468:
    {
        returnValue = F("Am Sieden");
        break;
    }
    case 30469:
    {
        returnValue = F("Am Siedenkamp");
        break;
    }
    case 30470:
    {
        returnValue = F("Am Siedenmoor");
        break;
    }
    case 30471:
    {
        returnValue = F("Am Siedlerberg");
        break;
    }
    case 30472:
    {
        returnValue = F("Am Siedlerplatz");
        break;
    }
    case 30473:
    {
        returnValue = F("Am Siedlerstreifen");
        break;
    }
    case 30474:
    {
        returnValue = F("Am Siedlerweg");
        break;
    }
    case 30475:
    {
        returnValue = F("Am Siedlungseck");
        break;
    }
    case 30476:
    {
        returnValue = F("Am Siedner");
        break;
    }
    case 30477:
    {
        returnValue = F("Am Siefen");
        break;
    }
    case 30478:
    {
        returnValue = F("Am Sieferbusch");
        break;
    }
    case 30479:
    {
        returnValue = F("Am Siegbach");
        break;
    }
    case 30480:
    {
        returnValue = F("Am Siegberg");
        break;
    }
    case 30481:
    {
        returnValue = F("Am Siegborn");
        break;
    }
    case 30482:
    {
        returnValue = F("Am Siegelbach");
        break;
    }
    case 30483:
    {
        returnValue = F("Am Siegelrain");
        break;
    }
    case 30484:
    {
        returnValue = F("Am Siegen");
        break;
    }
    case 30485:
    {
        returnValue = F("Am Siegenbach");
        break;
    }
    case 30486:
    {
        returnValue = F("Am Siegenberg");
        break;
    }
    case 30487:
    {
        returnValue = F("Am Siegenpfad");
        break;
    }
    case 30488:
    {
        returnValue = F("Am Sieger Dömpel");
        break;
    }
    case 30489:
    {
        returnValue = F("Am Siegerberg");
        break;
    }
    case 30490:
    {
        returnValue = F("Am Siegerborn");
        break;
    }
    case 30491:
    {
        returnValue = F("Am Siegersbach");
        break;
    }
    case 30492:
    {
        returnValue = F("Am Siegesbach");
        break;
    }
    case 30493:
    {
        returnValue = F("Am Siegfriedsbrunnen");
        break;
    }
    case 30494:
    {
        returnValue = F("Am Sieggraben");
        break;
    }
    case 30495:
    {
        returnValue = F("Am Sieghaus");
        break;
    }
    case 30496:
    {
        returnValue = F("Am Sieglberg");
        break;
    }
    case 30497:
    {
        returnValue = F("Am Sieglrang");
        break;
    }
    case 30498:
    {
        returnValue = F("Am Siegtor");
        break;
    }
    case 30499:
    {
        returnValue = F("Am Siehnberg");
        break;
    }
    case 30500:
    {
        returnValue = F("Am Siehsnichtgern");
        break;
    }
    case 30501:
    {
        returnValue = F("Am Siek");
        break;
    }
    case 30502:
    {
        returnValue = F("Am Siekbach");
        break;
    }
    case 30503:
    {
        returnValue = F("Am Sieksfeld");
        break;
    }
    case 30504:
    {
        returnValue = F("Am Siel");
        break;
    }
    case 30505:
    {
        returnValue = F("Am Sieleitz");
        break;
    }
    case 30506:
    {
        returnValue = F("Am Sielfleet");
        break;
    }
    case 30507:
    {
        returnValue = F("Am Sielhof");
        break;
    }
    case 30508:
    {
        returnValue = F("Am Sielk");
        break;
    }
    case 30509:
    {
        returnValue = F("Am Sielmönker Tief");
        break;
    }
    case 30510:
    {
        returnValue = F("Am Sielsee");
        break;
    }
    case 30511:
    {
        returnValue = F("Am Sieltief");
        break;
    }
    case 30512:
    {
        returnValue = F("Am Siemensbach");
        break;
    }
    case 30513:
    {
        returnValue = F("Am Siep");
        break;
    }
    case 30514:
    {
        returnValue = F("Am Siepbach");
        break;
    }
    case 30515:
    {
        returnValue = F("Am Siepen");
        break;
    }
    case 30516:
    {
        returnValue = F("Am Siepenbach");
        break;
    }
    case 30517:
    {
        returnValue = F("Am Sieperloh");
        break;
    }
    case 30518:
    {
        returnValue = F("Am Sieresweg");
        break;
    }
    case 30519:
    {
        returnValue = F("Am Siester");
        break;
    }
    case 30520:
    {
        returnValue = F("Am Siesterbach");
        break;
    }
    case 30521:
    {
        returnValue = F("Am Siethener See");
        break;
    }
    case 30522:
    {
        returnValue = F("Am Sietmoor");
        break;
    }
    case 30523:
    {
        returnValue = F("Am Silbach");
        break;
    }
    case 30524:
    {
        returnValue = F("Am Silbecher");
        break;
    }
    case 30525:
    {
        returnValue = F("Am Silberbach");
        break;
    }
    case 30526:
    {
        returnValue = F("Am Silberberg");
        break;
    }
    case 30527:
    {
        returnValue = F("Am Silberblick");
        break;
    }
    case 30528:
    {
        returnValue = F("Am Silberborn");
        break;
    }
    case 30529:
    {
        returnValue = F("Am Silberbrünnele");
        break;
    }
    case 30530:
    {
        returnValue = F("Am Silberbuck");
        break;
    }
    case 30531:
    {
        returnValue = F("Am Silberbuckel");
        break;
    }
    case 30532:
    {
        returnValue = F("Am Silberbühl");
        break;
    }
    case 30533:
    {
        returnValue = F("Am Silberfeld");
        break;
    }
    case 30534:
    {
        returnValue = F("Am Silberg");
        break;
    }
    case 30535:
    {
        returnValue = F("Am Silbergang");
        break;
    }
    case 30536:
    {
        returnValue = F("Am Silbergarten");
        break;
    }
    case 30537:
    {
        returnValue = F("Am Silbergraben");
        break;
    }
    case 30538:
    {
        returnValue = F("Am Silbergras");
        break;
    }
    case 30539:
    {
        returnValue = F("Am Silbergrub");
        break;
    }
    case 30540:
    {
        returnValue = F("Am Silberhalter");
        break;
    }
    case 30541:
    {
        returnValue = F("Am Silberhammer");
        break;
    }
    case 30542:
    {
        returnValue = F("Am Silberhang");
        break;
    }
    case 30543:
    {
        returnValue = F("Am Silberkamp");
        break;
    }
    case 30544:
    {
        returnValue = F("Am Silberknapp");
        break;
    }
    case 30545:
    {
        returnValue = F("Am Silberloch");
        break;
    }
    case 30546:
    {
        returnValue = F("Am Silberlochbach");
        break;
    }
    case 30547:
    {
        returnValue = F("Am Silberpark");
        break;
    }
    case 30548:
    {
        returnValue = F("Am Silberplatz");
        break;
    }
    case 30549:
    {
        returnValue = F("Am Silbersbeek");
        break;
    }
    case 30550:
    {
        returnValue = F("Am Silberschacht");
        break;
    }
    case 30551:
    {
        returnValue = F("Am Silbersee");
        break;
    }
    case 30552:
    {
        returnValue = F("Am Silbersegen");
        break;
    }
    case 30553:
    {
        returnValue = F("Am Silcherpfad");
        break;
    }
    case 30554:
    {
        returnValue = F("Am Silexfeld");
        break;
    }
    case 30555:
    {
        returnValue = F("Am Silgesberg");
        break;
    }
    case 30556:
    {
        returnValue = F("Am Sillberg");
        break;
    }
    case 30557:
    {
        returnValue = F("Am Sillbruch");
        break;
    }
    case 30558:
    {
        returnValue = F("Am Sillerkamp");
        break;
    }
    case 30559:
    {
        returnValue = F("Am Silo");
        break;
    }
    case 30560:
    {
        returnValue = F("Am Silzenweg");
        break;
    }
    case 30561:
    {
        returnValue = F("Am Silzer Berg");
        break;
    }
    case 30562:
    {
        returnValue = F("Am Simmelsberg");
        break;
    }
    case 30563:
    {
        returnValue = F("Am Simmelsee");
        break;
    }
    case 30564:
    {
        returnValue = F("Am Simmergraben");
        break;
    }
    case 30565:
    {
        returnValue = F("Am Simmersee");
        break;
    }
    case 30566:
    {
        returnValue = F("Am Simmig");
        break;
    }
    case 30567:
    {
        returnValue = F("Am Simonsgarten");
        break;
    }
    case 30568:
    {
        returnValue = F("Am Simonsweg");
        break;
    }
    case 30569:
    {
        returnValue = F("Am Simontalgraben");
        break;
    }
    case 30570:
    {
        returnValue = F("Am Sina");
        break;
    }
    case 30571:
    {
        returnValue = F("Am Singberg");
        break;
    }
    case 30572:
    {
        returnValue = F("Am Singer");
        break;
    }
    case 30573:
    {
        returnValue = F("Am Singhäusle");
        break;
    }
    case 30574:
    {
        returnValue = F("Am Singlberg");
        break;
    }
    case 30575:
    {
        returnValue = F("Am Sinkbachl");
        break;
    }
    case 30576:
    {
        returnValue = F("Am Sinnberg");
        break;
    }
    case 30577:
    {
        returnValue = F("Am Sinnenbüsch");
        break;
    }
    case 30578:
    {
        returnValue = F("Am Sinnfeld");
        break;
    }
    case 30579:
    {
        returnValue = F("Am Sinter");
        break;
    }
    case 30580:
    {
        returnValue = F("Am Sioniterhof");
        break;
    }
    case 30581:
    {
        returnValue = F("Am Sionsberg");
        break;
    }
    case 30582:
    {
        returnValue = F("Am Sirzbach");
        break;
    }
    case 30583:
    {
        returnValue = F("Am Sittersberg");
        break;
    }
    case 30584:
    {
        returnValue = F("Am Sitterswald");
        break;
    }
    case 30585:
    {
        returnValue = F("Am Sittert");
        break;
    }
    case 30586:
    {
        returnValue = F("Am Sittertzhof");
        break;
    }
    case 30587:
    {
        returnValue = F("Am Sitzhoffeld");
        break;
    }
    case 30588:
    {
        returnValue = F("Am Sixenfelsen");
        break;
    }
    case 30589:
    {
        returnValue = F("Am Sixmeisterwoog");
        break;
    }
    case 30590:
    {
        returnValue = F("Am Skibuckel");
        break;
    }
    case 30591:
    {
        returnValue = F("Am Skihang");
        break;
    }
    case 30592:
    {
        returnValue = F("Am Skilift");
        break;
    }
    case 30593:
    {
        returnValue = F("Am Skiweg");
        break;
    }
    case 30594:
    {
        returnValue = F("Am Skulpturenpark");
        break;
    }
    case 30595:
    {
        returnValue = F("Am Slott");
        break;
    }
    case 30596:
    {
        returnValue = F("Am Slöpp");
        break;
    }
    case 30597:
    {
        returnValue = F("Am Smeytshof");
        break;
    }
    case 30598:
    {
        returnValue = F("Am Sod");
        break;
    }
    case 30599:
    {
        returnValue = F("Am Sodebach");
        break;
    }
    case 30600:
    {
        returnValue = F("Am Soden");
        break;
    }
    case 30601:
    {
        returnValue = F("Am Sodenbach");
        break;
    }
    case 30602:
    {
        returnValue = F("Am Sodenstich");
        break;
    }
    case 30603:
    {
        returnValue = F("Am Sodenweg");
        break;
    }
    case 30604:
    {
        returnValue = F("Am Soermannsbach");
        break;
    }
    case 30605:
    {
        returnValue = F("Am Soesmenfeld");
        break;
    }
    case 30606:
    {
        returnValue = F("Am Sohl");
        break;
    }
    case 30607:
    {
        returnValue = F("Am Sohlacker");
        break;
    }
    case 30608:
    {
        returnValue = F("Am Sohlbaum");
        break;
    }
    case 30609:
    {
        returnValue = F("Am Sohleck");
        break;
    }
    case 30610:
    {
        returnValue = F("Am Sohler");
        break;
    }
    case 30611:
    {
        returnValue = F("Am Sohlweg");
        break;
    }
    case 30612:
    {
        returnValue = F("Am Sohnstedter Weg");
        break;
    }
    case 30613:
    {
        returnValue = F("Am Sohr");
        break;
    }
    case 30614:
    {
        returnValue = F("Am Solarfeld");
        break;
    }
    case 30615:
    {
        returnValue = F("Am Solbad");
        break;
    }
    case 30616:
    {
        returnValue = F("Am Solberg");
        break;
    }
    case 30617:
    {
        returnValue = F("Am Solebad");
        break;
    }
    case 30618:
    {
        returnValue = F("Am Soleborn");
        break;
    }
    case 30619:
    {
        returnValue = F("Am Solenturm");
        break;
    }
    case 30620:
    {
        returnValue = F("Am Solgraben");
        break;
    }
    case 30621:
    {
        returnValue = F("Am Soll");
        break;
    }
    case 30622:
    {
        returnValue = F("Am Sollerbach");
        break;
    }
    case 30623:
    {
        returnValue = F("Am Solling");
        break;
    }
    case 30624:
    {
        returnValue = F("Am Sollring");
        break;
    }
    case 30625:
    {
        returnValue = F("Am Solmerge");
        break;
    }
    case 30626:
    {
        returnValue = F("Am Solnhofer Weg");
        break;
    }
    case 30627:
    {
        returnValue = F("Am Solperts Garten");
        break;
    }
    case 30628:
    {
        returnValue = F("Am Soltauer Berg");
        break;
    }
    case 30629:
    {
        returnValue = F("Am Soltekamp");
        break;
    }
    case 30630:
    {
        returnValue = F("Am Somborn");
        break;
    }
    case 30631:
    {
        returnValue = F("Am Sommeracker");
        break;
    }
    case 30632:
    {
        returnValue = F("Am Sommeranger");
        break;
    }
    case 30633:
    {
        returnValue = F("Am Sommerbad");
        break;
    }
    case 30634:
    {
        returnValue = F("Am Sommerberg");
        break;
    }
    case 30635:
    {
        returnValue = F("Am Sommerdeich");
        break;
    }
    case 30636:
    {
        returnValue = F("Am Sommerfeld");
        break;
    }
    case 30637:
    {
        returnValue = F("Am Sommerfelsen");
        break;
    }
    case 30638:
    {
        returnValue = F("Am Sommergarten");
        break;
    }
    case 30639:
    {
        returnValue = F("Am Sommerhagen");
        break;
    }
    case 30640:
    {
        returnValue = F("Am Sommerhof");
        break;
    }
    case 30641:
    {
        returnValue = F("Am Sommerkeller");
        break;
    }
    case 30642:
    {
        returnValue = F("Am Sommerrain");
        break;
    }
    case 30643:
    {
        returnValue = F("Am Sommerranken");
        break;
    }
    case 30644:
    {
        returnValue = F("Am Sommersbach");
        break;
    }
    case 30645:
    {
        returnValue = F("Am Sommerturm");
        break;
    }
    case 30646:
    {
        returnValue = F("Am Sonder");
        break;
    }
    case 30647:
    {
        returnValue = F("Am Sonderbach");
        break;
    }
    case 30648:
    {
        returnValue = F("Am Sonderrain");
        break;
    }
    case 30649:
    {
        returnValue = F("Am Sondersiefen");
        break;
    }
    case 30650:
    {
        returnValue = F("Am Sondorfer Bach");
        break;
    }
    case 30651:
    {
        returnValue = F("Am Sonnacker");
        break;
    }
    case 30652:
    {
        returnValue = F("Am Sonnberg");
        break;
    }
    case 30653:
    {
        returnValue = F("Am Sonnbichl");
        break;
    }
    case 30654:
    {
        returnValue = F("Am Sonnblick");
        break;
    }
    case 30655:
    {
        returnValue = F("Am Sonneberg");
        break;
    }
    case 30656:
    {
        returnValue = F("Am Sonnebühl");
        break;
    }
    case 30657:
    {
        returnValue = F("Am Sonneck");
        break;
    }
    case 30658:
    {
        returnValue = F("Am Sonnehügel");
        break;
    }
    case 30659:
    {
        returnValue = F("Am Sonnenanger");
        break;
    }
    case 30660:
    {
        returnValue = F("Am Sonnenbad");
        break;
    }
    case 30661:
    {
        returnValue = F("Am Sonnenberg");
        break;
    }
    case 30662:
    {
        returnValue = F("Am Sonnenberge");
        break;
    }
    case 30663:
    {
        returnValue = F("Am Sonnenbichel");
        break;
    }
    case 30664:
    {
        returnValue = F("Am Sonnenbichl");
        break;
    }
    case 30665:
    {
        returnValue = F("Am Sonnenblick");
        break;
    }
    case 30666:
    {
        returnValue = F("Am Sonnenbogen");
        break;
    }
    case 30667:
    {
        returnValue = F("Am Sonnenbrink");
        break;
    }
    case 30668:
    {
        returnValue = F("Am Sonnenbrunnen");
        break;
    }
    case 30669:
    {
        returnValue = F("Am Sonnenbrühl");
        break;
    }
    case 30670:
    {
        returnValue = F("Am Sonnenbuckel");
        break;
    }
    case 30671:
    {
        returnValue = F("Am Sonnenbüchel");
        break;
    }
    case 30672:
    {
        returnValue = F("Am Sonnenbühl");
        break;
    }
    case 30673:
    {
        returnValue = F("Am Sonnendeich");
        break;
    }
    case 30674:
    {
        returnValue = F("Am Sonneneck");
        break;
    }
    case 30675:
    {
        returnValue = F("Am Sonnenfeld");
        break;
    }
    case 30676:
    {
        returnValue = F("Am Sonnengarten");
        break;
    }
    case 30677:
    {
        returnValue = F("Am Sonnenglück");
        break;
    }
    case 30678:
    {
        returnValue = F("Am Sonnenhain");
        break;
    }
    case 30679:
    {
        returnValue = F("Am Sonnenhang");
        break;
    }
    case 30680:
    {
        returnValue = F("Am Sonnenhaus");
        break;
    }
    case 30681:
    {
        returnValue = F("Am Sonnenhof");
        break;
    }
    case 30682:
    {
        returnValue = F("Am Sonnenhügel");
        break;
    }
    case 30683:
    {
        returnValue = F("Am Sonnenhügl");
        break;
    }
    case 30684:
    {
        returnValue = F("Am Sonnenkamp");
        break;
    }
    case 30685:
    {
        returnValue = F("Am Sonnenkopf");
        break;
    }
    case 30686:
    {
        returnValue = F("Am Sonnenlicht");
        break;
    }
    case 30687:
    {
        returnValue = F("Am Sonnenplan");
        break;
    }
    case 30688:
    {
        returnValue = F("Am Sonnenplateau");
        break;
    }
    case 30689:
    {
        returnValue = F("Am Sonnenplätzchen");
        break;
    }
    case 30690:
    {
        returnValue = F("Am Sonnenrain");
        break;
    }
    case 30691:
    {
        returnValue = F("Am Sonnenschein");
        break;
    }
    case 30692:
    {
        returnValue = F("Am Sonnenschlicher");
        break;
    }
    case 30693:
    {
        returnValue = F("Am Sonnenstein");
        break;
    }
    case 30694:
    {
        returnValue = F("Am Sonnenstrand");
        break;
    }
    case 30695:
    {
        returnValue = F("Am Sonnenstuhl");
        break;
    }
    case 30696:
    {
        returnValue = F("Am Sonnenstück");
        break;
    }
    case 30697:
    {
        returnValue = F("Am Sonnentau");
        break;
    }
    case 30698:
    {
        returnValue = F("Am Sonnenweg");
        break;
    }
    case 30699:
    {
        returnValue = F("Am Sonnenwinkel");
        break;
    }
    case 30700:
    {
        returnValue = F("Am Sonnhügel");
        break;
    }
    case 30701:
    {
        returnValue = F("Am Sonnigen Hang");
        break;
    }
    case 30702:
    {
        returnValue = F("Am Sonnwend");
        break;
    }
    case 30703:
    {
        returnValue = F("Am Sonnwiesgraben");
        break;
    }
    case 30704:
    {
        returnValue = F("Am Sonsbach");
        break;
    }
    case 30705:
    {
        returnValue = F("Am Sood");
        break;
    }
    case 30706:
    {
        returnValue = F("Am Soodhof");
        break;
    }
    case 30707:
    {
        returnValue = F("Am Soot");
        break;
    }
    case 30708:
    {
        returnValue = F("Am Sophienbad");
        break;
    }
    case 30709:
    {
        returnValue = F("Am Sophienhof");
        break;
    }
    case 30710:
    {
        returnValue = F("Am Sorchem");
        break;
    }
    case 30711:
    {
        returnValue = F("Am Sorgauer Maiberg");
        break;
    }
    case 30712:
    {
        returnValue = F("Am Sorger Pfad");
        break;
    }
    case 30713:
    {
        returnValue = F("Am Sorgschrofen");
        break;
    }
    case 30714:
    {
        returnValue = F("Am Sourenhof");
        break;
    }
    case 30715:
    {
        returnValue = F("Am Soutyhof");
        break;
    }
    case 30716:
    {
        returnValue = F("Am Spachet");
        break;
    }
    case 30717:
    {
        returnValue = F("Am Spadener See");
        break;
    }
    case 30718:
    {
        returnValue = F("Am Spakenberg");
        break;
    }
    case 30719:
    {
        returnValue = F("Am Spalter Tor");
        break;
    }
    case 30720:
    {
        returnValue = F("Am Spalterhals");
        break;
    }
    case 30721:
    {
        returnValue = F("Am Spangenberg");
        break;
    }
    case 30722:
    {
        returnValue = F("Am Spangeney");
        break;
    }
    case 30723:
    {
        returnValue = F("Am Spangl");
        break;
    }
    case 30724:
    {
        returnValue = F("Am Spaniergarten");
        break;
    }
    case 30725:
    {
        returnValue = F("Am Spannbrook");
        break;
    }
    case 30726:
    {
        returnValue = F("Am Spannenberg");
        break;
    }
    case 30727:
    {
        returnValue = F("Am Spannkamp");
        break;
    }
    case 30728:
    {
        returnValue = F("Am Spannstuhl");
        break;
    }
    case 30729:
    {
        returnValue = F("Am Spanplattenwerk");
        break;
    }
    case 30730:
    {
        returnValue = F("Am Spansweg");
        break;
    }
    case 30731:
    {
        returnValue = F("Am Sparbuck");
        break;
    }
    case 30732:
    {
        returnValue = F("Am Spargelacker");
        break;
    }
    case 30733:
    {
        returnValue = F("Am Spargelberg");
        break;
    }
    case 30734:
    {
        returnValue = F("Am Spargelfeld");
        break;
    }
    case 30735:
    {
        returnValue = F("Am Spargelkamp");
        break;
    }
    case 30736:
    {
        returnValue = F("Am Sparkassenplatz");
        break;
    }
    case 30737:
    {
        returnValue = F("Am Spascher Park");
        break;
    }
    case 30738:
    {
        returnValue = F("Am Spascher Ring");
        break;
    }
    case 30739:
    {
        returnValue = F("Am Spascher Sand");
        break;
    }
    case 30740:
    {
        returnValue = F("Am Spascher See");
        break;
    }
    case 30741:
    {
        returnValue = F("Am Spascher Wald");
        break;
    }
    case 30742:
    {
        returnValue = F("Am Spateneisen");
        break;
    }
    case 30743:
    {
        returnValue = F("Am Spatwerk");
        break;
    }
    case 30744:
    {
        returnValue = F("Am Spatzenbaum");
        break;
    }
    case 30745:
    {
        returnValue = F("Am Spatzenberg");
        break;
    }
    case 30746:
    {
        returnValue = F("Am Spatzenhüwel");
        break;
    }
    case 30747:
    {
        returnValue = F("Am Spatzenwinkel");
        break;
    }
    case 30748:
    {
        returnValue = F("Am Spechthammer");
        break;
    }
    case 30749:
    {
        returnValue = F("Am Spechtswald");
        break;
    }
    case 30750:
    {
        returnValue = F("Am Speck");
        break;
    }
    case 30751:
    {
        returnValue = F("Am Specken");
        break;
    }
    case 30752:
    {
        returnValue = F("Am Speckenbach");
        break;
    }
    case 30753:
    {
        returnValue = F("Am Speckenbaum");
        break;
    }
    case 30754:
    {
        returnValue = F("Am Speckenberg");
        break;
    }
    case 30755:
    {
        returnValue = F("Am Speckenrain");
        break;
    }
    case 30756:
    {
        returnValue = F("Am Specker Feld");
        break;
    }
    case 30757:
    {
        returnValue = F("Am Speckert");
        break;
    }
    case 30758:
    {
        returnValue = F("Am Speckfeld");
        break;
    }
    case 30759:
    {
        returnValue = F("Am Speckgraben");
        break;
    }
    case 30760:
    {
        returnValue = F("Am Speckhof");
        break;
    }
    case 30761:
    {
        returnValue = F("Am Speckkamp");
        break;
    }
    case 30762:
    {
        returnValue = F("Am Speckrain");
        break;
    }
    case 30763:
    {
        returnValue = F("Am Speelbrink");
        break;
    }
    case 30764:
    {
        returnValue = F("Am Speelplatz");
        break;
    }
    case 30765:
    {
        returnValue = F("Am Spehrteich");
        break;
    }
    case 30766:
    {
        returnValue = F("Am Speichenbach");
        break;
    }
    case 30767:
    {
        returnValue = F("Am Speicher");
        break;
    }
    case 30768:
    {
        returnValue = F("Am Speieracker");
        break;
    }
    case 30769:
    {
        returnValue = F("Am Speierling");
        break;
    }
    case 30770:
    {
        returnValue = F("Am Spellberg");
        break;
    }
    case 30771:
    {
        returnValue = F("Am Spellhof");
        break;
    }
    case 30772:
    {
        returnValue = F("Am Spelzenacker");
        break;
    }
    case 30773:
    {
        returnValue = F("Am Spenderberg");
        break;
    }
    case 30774:
    {
        returnValue = F("Am Sperbenbaum");
        break;
    }
    case 30775:
    {
        returnValue = F("Am Sperber");
        break;
    }
    case 30776:
    {
        returnValue = F("Am Sperberhölzchen");
        break;
    }
    case 30777:
    {
        returnValue = F("Am Sperberweg");
        break;
    }
    case 30778:
    {
        returnValue = F("Am Spergenberg");
        break;
    }
    case 30779:
    {
        returnValue = F("Am Sperlingsberg");
        break;
    }
    case 30780:
    {
        returnValue = F("Am Sperlingsberge");
        break;
    }
    case 30781:
    {
        returnValue = F("Am Sperlingshaupt");
        break;
    }
    case 30782:
    {
        returnValue = F("Am Sperlingskopf");
        break;
    }
    case 30783:
    {
        returnValue = F("Am Sperlingszaun");
        break;
    }
    case 30784:
    {
        returnValue = F("Am Sperrain");
        break;
    }
    case 30785:
    {
        returnValue = F("Am Sperrbaum");
        break;
    }
    case 30786:
    {
        returnValue = F("Am Sperrtor");
        break;
    }
    case 30787:
    {
        returnValue = F("Am Spessart");
        break;
    }
    case 30788:
    {
        returnValue = F("Am Speukebusch");
        break;
    }
    case 30789:
    {
        returnValue = F("Am Speyerer Hof");
        break;
    }
    case 30790:
    {
        returnValue = F("Am Speyerer Weg");
        break;
    }
    case 30791:
    {
        returnValue = F("Am Spich");
        break;
    }
    case 30792:
    {
        returnValue = F("Am Spichen");
        break;
    }
    case 30793:
    {
        returnValue = F("Am Spichensberg");
        break;
    }
    case 30794:
    {
        returnValue = F("Am Spickerfeld");
        break;
    }
    case 30795:
    {
        returnValue = F("Am Spiecker");
        break;
    }
    case 30796:
    {
        returnValue = F("Am Spiegel");
        break;
    }
    case 30797:
    {
        returnValue = F("Am Spiegelberg");
        break;
    }
    case 30798:
    {
        returnValue = F("Am Spiegelbrunnen");
        break;
    }
    case 30799:
    {
        returnValue = F("Am Spiegelkamp");
        break;
    }
    case 30800:
    {
        returnValue = F("Am Spiegelsberg");
        break;
    }
    case 30801:
    {
        returnValue = F("Am Spieglerberg");
        break;
    }
    case 30802:
    {
        returnValue = F("Am Spiek");
        break;
    }
    case 30803:
    {
        returnValue = F("Am Spieker");
        break;
    }
    case 30804:
    {
        returnValue = F("Am Spiekerhof");
        break;
    }
    case 30805:
    {
        returnValue = F("Am Spiekerkrog");
        break;
    }
    case 30806:
    {
        returnValue = F("Am Spiekersberg");
        break;
    }
    case 30807:
    {
        returnValue = F("Am Spielberg");
        break;
    }
    case 30808:
    {
        returnValue = F("Am Spielborn");
        break;
    }
    case 30809:
    {
        returnValue = F("Am Spielenberg");
        break;
    }
    case 30810:
    {
        returnValue = F("Am Spieles");
        break;
    }
    case 30811:
    {
        returnValue = F("Am Spielfeld");
        break;
    }
    case 30812:
    {
        returnValue = F("Am Spielmannsfalter");
        break;
    }
    case 30813:
    {
        returnValue = F("Am Spielplatz");
        break;
    }
    case 30814:
    {
        returnValue = F("Am Spielstein");
        break;
    }
    case 30815:
    {
        returnValue = F("Am Spiesswäldchen");
        break;
    }
    case 30816:
    {
        returnValue = F("Am Spieß");
        break;
    }
    case 30817:
    {
        returnValue = F("Am Spießensberg");
        break;
    }
    case 30818:
    {
        returnValue = F("Am Spießtor");
        break;
    }
    case 30819:
    {
        returnValue = F("Am Spießweiher");
        break;
    }
    case 30820:
    {
        returnValue = F("Am Spillenpütt");
        break;
    }
    case 30821:
    {
        returnValue = F("Am Spilles");
        break;
    }
    case 30822:
    {
        returnValue = F("Am Spindelanger");
        break;
    }
    case 30823:
    {
        returnValue = F("Am Spindelberg");
        break;
    }
    case 30824:
    {
        returnValue = F("Am Spindelsburggraben");
        break;
    }
    case 30825:
    {
        returnValue = F("Am Spindler");
        break;
    }
    case 30826:
    {
        returnValue = F("Am Spinnaker");
        break;
    }
    case 30827:
    {
        returnValue = F("Am Spinnerberg");
        break;
    }
    case 30828:
    {
        returnValue = F("Am Spinngraben");
        break;
    }
    case 30829:
    {
        returnValue = F("Am Spinnrädel");
        break;
    }
    case 30830:
    {
        returnValue = F("Am Spinnseyer");
        break;
    }
    case 30831:
    {
        returnValue = F("Am Spinnwirtel");
        break;
    }
    case 30832:
    {
        returnValue = F("Am Spirkbrunnen");
        break;
    }
    case 30833:
    {
        returnValue = F("Am Spissart");
        break;
    }
    case 30834:
    {
        returnValue = F("Am Spital");
        break;
    }
    case 30835:
    {
        returnValue = F("Am Spitalfeld");
        break;
    }
    case 30836:
    {
        returnValue = F("Am Spitalgarten");
        break;
    }
    case 30837:
    {
        returnValue = F("Am Spitalhof");
        break;
    }
    case 30838:
    {
        returnValue = F("Am Spitalholz");
        break;
    }
    case 30839:
    {
        returnValue = F("Am Spitalthor");
        break;
    }
    case 30840:
    {
        returnValue = F("Am Spitaltörle");
        break;
    }
    case 30841:
    {
        returnValue = F("Am Spitalwald");
        break;
    }
    case 30842:
    {
        returnValue = F("Am Spitalweg");
        break;
    }
    case 30843:
    {
        returnValue = F("Am Spitalweiher");
        break;
    }
    case 30844:
    {
        returnValue = F("Am Spitlberg");
        break;
    }
    case 30845:
    {
        returnValue = F("Am Spittel");
        break;
    }
    case 30846:
    {
        returnValue = F("Am Spittelbach");
        break;
    }
    case 30847:
    {
        returnValue = F("Am Spittelberg");
        break;
    }
    case 30848:
    {
        returnValue = F("Am Spittelholz");
        break;
    }
    case 30849:
    {
        returnValue = F("Am Spittelsberg");
        break;
    }
    case 30850:
    {
        returnValue = F("Am Spittelteich");
        break;
    }
    case 30851:
    {
        returnValue = F("Am Spittlberg");
        break;
    }
    case 30852:
    {
        returnValue = F("Am Spitulersberg");
        break;
    }
    case 30853:
    {
        returnValue = F("Am Spitzacker");
        break;
    }
    case 30854:
    {
        returnValue = F("Am Spitzberg");
        break;
    }
    case 30855:
    {
        returnValue = F("Am Spitzelberg");
        break;
    }
    case 30856:
    {
        returnValue = F("Am Spitzen Morgen");
        break;
    }
    case 30857:
    {
        returnValue = F("Am Spitzen Rain");
        break;
    }
    case 30858:
    {
        returnValue = F("Am Spitzenacker");
        break;
    }
    case 30859:
    {
        returnValue = F("Am Spitzenbach");
        break;
    }
    case 30860:
    {
        returnValue = F("Am Spitzenberg");
        break;
    }
    case 30861:
    {
        returnValue = F("Am Spitzenberge");
        break;
    }
    case 30862:
    {
        returnValue = F("Am Spitzengarten");
        break;
    }
    case 30863:
    {
        returnValue = F("Am Spitzenpfad");
        break;
    }
    case 30864:
    {
        returnValue = F("Am Spitzenrod");
        break;
    }
    case 30865:
    {
        returnValue = F("Am Spitzenwäldele");
        break;
    }
    case 30866:
    {
        returnValue = F("Am Spitzgarten");
        break;
    }
    case 30867:
    {
        returnValue = F("Am Spitzhof");
        break;
    }
    case 30868:
    {
        returnValue = F("Am Spitzigen Berg");
        break;
    }
    case 30869:
    {
        returnValue = F("Am Spitzkamp");
        break;
    }
    case 30870:
    {
        returnValue = F("Am Spitzlberg");
        break;
    }
    case 30871:
    {
        returnValue = F("Am Spitzling");
        break;
    }
    case 30872:
    {
        returnValue = F("Am Spitzwald");
        break;
    }
    case 30873:
    {
        returnValue = F("Am Spitzwegwinkel");
        break;
    }
    case 30874:
    {
        returnValue = F("Am Sponellenberg");
        break;
    }
    case 30875:
    {
        returnValue = F("Am Sporacker");
        break;
    }
    case 30876:
    {
        returnValue = F("Am Sporrer");
        break;
    }
    case 30877:
    {
        returnValue = F("Am Sportareal");
        break;
    }
    case 30878:
    {
        returnValue = F("Am Sportbad");
        break;
    }
    case 30879:
    {
        returnValue = F("Am Sportcamp");
        break;
    }
    case 30880:
    {
        returnValue = F("Am Sportcenter");
        break;
    }
    case 30881:
    {
        returnValue = F("Am Sportfeld");
        break;
    }
    case 30882:
    {
        returnValue = F("Am Sportforum");
        break;
    }
    case 30883:
    {
        returnValue = F("Am Sportgelände");
        break;
    }
    case 30884:
    {
        returnValue = F("Am Sporthafen");
        break;
    }
    case 30885:
    {
        returnValue = F("Am Sportheim");
        break;
    }
    case 30886:
    {
        returnValue = F("Am Sportlerheim");
        break;
    }
    case 30887:
    {
        returnValue = F("Am Sportpark");
        break;
    }
    case 30888:
    {
        returnValue = F("Am Sportplatz");
        break;
    }
    case 30889:
    {
        returnValue = F("Am Sportplatz (Kindergarten)");
        break;
    }
    case 30890:
    {
        returnValue = F("Am Sportplatzteich");
        break;
    }
    case 30891:
    {
        returnValue = F("Am Sportsee");
        break;
    }
    case 30892:
    {
        returnValue = F("Am Sportweiher");
        break;
    }
    case 30893:
    {
        returnValue = F("Am Sportzentrum");
        break;
    }
    case 30894:
    {
        returnValue = F("Am Sportzenturm");
        break;
    }
    case 30895:
    {
        returnValue = F("Am Spottenberg");
        break;
    }
    case 30896:
    {
        returnValue = F("Am Sprackelbarg");
        break;
    }
    case 30897:
    {
        returnValue = F("Am Sprait");
        break;
    }
    case 30898:
    {
        returnValue = F("Am Spratzer");
        break;
    }
    case 30899:
    {
        returnValue = F("Am Sprauberg");
        break;
    }
    case 30900:
    {
        returnValue = F("Am Spreebord");
        break;
    }
    case 30901:
    {
        returnValue = F("Am Spreeborn");
        break;
    }
    case 30902:
    {
        returnValue = F("Am Spreedamm");
        break;
    }
    case 30903:
    {
        returnValue = F("Am Spreedeplacken");
        break;
    }
    case 30904:
    {
        returnValue = F("Am Spreeken");
        break;
    }
    case 30905:
    {
        returnValue = F("Am Spreenland");
        break;
    }
    case 30906:
    {
        returnValue = F("Am Spreepark");
        break;
    }
    case 30907:
    {
        returnValue = F("Am Spreeufer");
        break;
    }
    case 30908:
    {
        returnValue = F("Am Sprengel");
        break;
    }
    case 30909:
    {
        returnValue = F("Am Sprengelbrink");
        break;
    }
    case 30910:
    {
        returnValue = F("Am Spreth");
        break;
    }
    case 30911:
    {
        returnValue = F("Am Spreubach");
        break;
    }
    case 30912:
    {
        returnValue = F("Am Spring");
        break;
    }
    case 30913:
    {
        returnValue = F("Am Springberg");
        break;
    }
    case 30914:
    {
        returnValue = F("Am Springbernbaum");
        break;
    }
    case 30915:
    {
        returnValue = F("Am Springborn");
        break;
    }
    case 30916:
    {
        returnValue = F("Am Springbrunnen");
        break;
    }
    case 30917:
    {
        returnValue = F("Am Springbrühl");
        break;
    }
    case 30918:
    {
        returnValue = F("Am Springe");
        break;
    }
    case 30919:
    {
        returnValue = F("Am Springeberg");
        break;
    }
    case 30920:
    {
        returnValue = F("Am Springenkopf");
        break;
    }
    case 30921:
    {
        returnValue = F("Am Springergarten");
        break;
    }
    case 30922:
    {
        returnValue = F("Am Springgarten");
        break;
    }
    case 30923:
    {
        returnValue = F("Am Springluch");
        break;
    }
    case 30924:
    {
        returnValue = F("Am Springsgraben");
        break;
    }
    case 30925:
    {
        returnValue = F("Am Sprinkenberg");
        break;
    }
    case 30926:
    {
        returnValue = F("Am Sprint");
        break;
    }
    case 30927:
    {
        returnValue = F("Am Spritzenhaus");
        break;
    }
    case 30928:
    {
        returnValue = F("Am Spritzenhäuschen");
        break;
    }
    case 30929:
    {
        returnValue = F("Am Spritzenmättle");
        break;
    }
    case 30930:
    {
        returnValue = F("Am Sprudel");
        break;
    }
    case 30931:
    {
        returnValue = F("Am Sprung");
        break;
    }
    case 30932:
    {
        returnValue = F("Am Sprunk");
        break;
    }
    case 30933:
    {
        returnValue = F("Am Sprösselbach");
        break;
    }
    case 30934:
    {
        returnValue = F("Am Sprötzberg");
        break;
    }
    case 30935:
    {
        returnValue = F("Am Spurk");
        break;
    }
    case 30936:
    {
        returnValue = F("Am Spycker See");
        break;
    }
    case 30937:
    {
        returnValue = F("Am Spälbarg");
        break;
    }
    case 30938:
    {
        returnValue = F("Am Spöhren");
        break;
    }
    case 30939:
    {
        returnValue = F("Am Spöllberg");
        break;
    }
    case 30940:
    {
        returnValue = F("Am Spülteich");
        break;
    }
    case 30941:
    {
        returnValue = F("Am St. Andreas");
        break;
    }
    case 30942:
    {
        returnValue = F("Am St. Annabach");
        break;
    }
    case 30943:
    {
        returnValue = F("Am St. Jakob");
        break;
    }
    case 30944:
    {
        returnValue = F("Am St. Johannis");
        break;
    }
    case 30945:
    {
        returnValue = F("Am St. Johanniskloster");
        break;
    }
    case 30946:
    {
        returnValue = F("Am St. Martinshof");
        break;
    }
    case 30947:
    {
        returnValue = F("Am St. Spiritus");
        break;
    }
    case 30948:
    {
        returnValue = F("Am St.-Annen-Tor");
        break;
    }
    case 30949:
    {
        returnValue = F("Am St.-Barbara-Garten");
        break;
    }
    case 30950:
    {
        returnValue = F("Am St.-Georgsritt");
        break;
    }
    case 30951:
    {
        returnValue = F("Am St.-Peter-Schacht");
        break;
    }
    case 30952:
    {
        returnValue = F("Am St.Georgsfeld");
        break;
    }
    case 30953:
    {
        returnValue = F("Am St.Jakobsberg");
        break;
    }
    case 30954:
    {
        returnValue = F("Am Staaten");
        break;
    }
    case 30955:
    {
        returnValue = F("Am Staatsbahnhof");
        break;
    }
    case 30956:
    {
        returnValue = F("Am Staatsberg");
        break;
    }
    case 30957:
    {
        returnValue = F("Am Staatsforst");
        break;
    }
    case 30958:
    {
        returnValue = F("Am Stabelsee");
        break;
    }
    case 30959:
    {
        returnValue = F("Am Stabsberg");
        break;
    }
    case 30960:
    {
        returnValue = F("Am Stachelacker");
        break;
    }
    case 30961:
    {
        returnValue = F("Am Stachus");
        break;
    }
    case 30962:
    {
        returnValue = F("Am Stacken");
        break;
    }
    case 30963:
    {
        returnValue = F("Am Stade");
        break;
    }
    case 30964:
    {
        returnValue = F("Am Stadel");
        break;
    }
    case 30965:
    {
        returnValue = F("Am Stadelberg");
        break;
    }
    case 30966:
    {
        returnValue = F("Am Stadelfeld");
        break;
    }
    case 30967:
    {
        returnValue = F("Am Staden");
        break;
    }
    case 30968:
    {
        returnValue = F("Am Stadion");
        break;
    }
    case 30969:
    {
        returnValue = F("Am Stadtbach");
        break;
    }
    case 30970:
    {
        returnValue = F("Am Stadtbad");
        break;
    }
    case 30971:
    {
        returnValue = F("Am Stadtbahnhof");
        break;
    }
    case 30972:
    {
        returnValue = F("Am Stadtberg");
        break;
    }
    case 30973:
    {
        returnValue = F("Am Stadtblick");
        break;
    }
    case 30974:
    {
        returnValue = F("Am Stadtbruch");
        break;
    }
    case 30975:
    {
        returnValue = F("Am Stadtbrunnen");
        break;
    }
    case 30976:
    {
        returnValue = F("Am Stadtbächel");
        break;
    }
    case 30977:
    {
        returnValue = F("Am Stadtesch");
        break;
    }
    case 30978:
    {
        returnValue = F("Am Stadtfeld");
        break;
    }
    case 30979:
    {
        returnValue = F("Am Stadtfeldchen");
        break;
    }
    case 30980:
    {
        returnValue = F("Am Stadtfelde");
        break;
    }
    case 30981:
    {
        returnValue = F("Am Stadtforst");
        break;
    }
    case 30982:
    {
        returnValue = F("Am Stadtgarten");
        break;
    }
    case 30983:
    {
        returnValue = F("Am Stadtgericht");
        break;
    }
    case 30984:
    {
        returnValue = F("Am Stadtgraben");
        break;
    }
    case 30985:
    {
        returnValue = F("Am Stadtgraben West");
        break;
    }
    case 30986:
    {
        returnValue = F("Am Stadtgut");
        break;
    }
    case 30987:
    {
        returnValue = F("Am Stadthafen");
        break;
    }
    case 30988:
    {
        returnValue = F("Am Stadthaus");
        break;
    }
    case 30989:
    {
        returnValue = F("Am Stadthof");
        break;
    }
    case 30990:
    {
        returnValue = F("Am Stadtholz");
        break;
    }
    case 30991:
    {
        returnValue = F("Am Stadtkamp");
        break;
    }
    case 30992:
    {
        returnValue = F("Am Stadtmuseum");
        break;
    }
    case 30993:
    {
        returnValue = F("Am Stadtpark");
        break;
    }
    case 30994:
    {
        returnValue = F("Am Stadtpfad");
        break;
    }
    case 30995:
    {
        returnValue = F("Am Stadtplatz");
        break;
    }
    case 30996:
    {
        returnValue = F("Am Stadtrain");
        break;
    }
    case 30997:
    {
        returnValue = F("Am Stadtrand");
        break;
    }
    case 30998:
    {
        returnValue = F("Am Stadtschreiber");
        break;
    }
    case 30999:
    {
        returnValue = F("Am Stadtsee");
        break;
    }
    case 31000:
    {
        returnValue = F("Am Stadtstieg");
        break;
    }
    case 31001:
    {
        returnValue = F("Am Stadtteich");
        break;
    }
    case 31002:
    {
        returnValue = F("Am Stadttor");
        break;
    }
    case 31003:
    {
        returnValue = F("Am Stadtturm");
        break;
    }
    case 31004:
    {
        returnValue = F("Am Stadtwald");
        break;
    }
    case 31005:
    {
        returnValue = F("Am Stadtwall");
        break;
    }
    case 31006:
    {
        returnValue = F("Am Stadtweg");
        break;
    }
    case 31007:
    {
        returnValue = F("Am Stadtweiher");
        break;
    }
    case 31008:
    {
        returnValue = F("Am Stadtweinberg");
        break;
    }
    case 31009:
    {
        returnValue = F("Am Stadtwäldchen");
        break;
    }
    case 31010:
    {
        returnValue = F("Am Stadtwäldele");
        break;
    }
    case 31011:
    {
        returnValue = F("Am Staersbach");
        break;
    }
    case 31012:
    {
        returnValue = F("Am Staffel");
        break;
    }
    case 31013:
    {
        returnValue = F("Am Staffelbach");
        break;
    }
    case 31014:
    {
        returnValue = F("Am Staffelberg");
        break;
    }
    case 31015:
    {
        returnValue = F("Am Staffelstein");
        break;
    }
    case 31016:
    {
        returnValue = F("Am Staffelwald");
        break;
    }
    case 31017:
    {
        returnValue = F("Am Staffenberg");
        break;
    }
    case 31018:
    {
        returnValue = F("Am Stahl");
        break;
    }
    case 31019:
    {
        returnValue = F("Am Stahlbach");
        break;
    }
    case 31020:
    {
        returnValue = F("Am Stahlberg");
        break;
    }
    case 31021:
    {
        returnValue = F("Am Stahlbrink");
        break;
    }
    case 31022:
    {
        returnValue = F("Am Stahlbrunnen");
        break;
    }
    case 31023:
    {
        returnValue = F("Am Stahlbügel");
        break;
    }
    case 31024:
    {
        returnValue = F("Am Stahlgraben");
        break;
    }
    case 31025:
    {
        returnValue = F("Am Stahlsberg");
        break;
    }
    case 31026:
    {
        returnValue = F("Am Stahlwerk");
        break;
    }
    case 31027:
    {
        returnValue = F("Am Staigle");
        break;
    }
    case 31028:
    {
        returnValue = F("Am Stall");
        break;
    }
    case 31029:
    {
        returnValue = F("Am Stallanger");
        break;
    }
    case 31030:
    {
        returnValue = F("Am Stallberg");
        break;
    }
    case 31031:
    {
        returnValue = F("Am Stallgarten");
        break;
    }
    case 31032:
    {
        returnValue = F("Am Stallhübel");
        break;
    }
    case 31033:
    {
        returnValue = F("Am Stallmannsbusch");
        break;
    }
    case 31034:
    {
        returnValue = F("Am Stallmannshof");
        break;
    }
    case 31035:
    {
        returnValue = F("Am Stalzbach");
        break;
    }
    case 31036:
    {
        returnValue = F("Am Stamers Hoop");
        break;
    }
    case 31037:
    {
        returnValue = F("Am Stammbach");
        break;
    }
    case 31038:
    {
        returnValue = F("Am Stammbachgraben");
        break;
    }
    case 31039:
    {
        returnValue = F("Am Stammelhof");
        break;
    }
    case 31040:
    {
        returnValue = F("Am Stammhaus");
        break;
    }
    case 31041:
    {
        returnValue = F("Am Stammigbaum");
        break;
    }
    case 31042:
    {
        returnValue = F("Am Stampf");
        break;
    }
    case 31043:
    {
        returnValue = F("Am Stampfbach");
        break;
    }
    case 31044:
    {
        returnValue = F("Am Stampfgraben");
        break;
    }
    case 31045:
    {
        returnValue = F("Am Stangacker");
        break;
    }
    case 31046:
    {
        returnValue = F("Am Stangenbach");
        break;
    }
    case 31047:
    {
        returnValue = F("Am Stangenberg");
        break;
    }
    case 31048:
    {
        returnValue = F("Am Stangenteich");
        break;
    }
    case 31049:
    {
        returnValue = F("Am Stangenwald");
        break;
    }
    case 31050:
    {
        returnValue = F("Am Stangersgraben");
        break;
    }
    case 31051:
    {
        returnValue = F("Am Stanglhof");
        break;
    }
    case 31052:
    {
        returnValue = F("Am Stapel");
        break;
    }
    case 31053:
    {
        returnValue = F("Am Stapelacker");
        break;
    }
    case 31054:
    {
        returnValue = F("Am Stapelberg");
        break;
    }
    case 31055:
    {
        returnValue = F("Am Stapelsberg");
        break;
    }
    case 31056:
    {
        returnValue = F("Am Stapenberg");
        break;
    }
    case 31057:
    {
        returnValue = F("Am Stapp");
        break;
    }
    case 31058:
    {
        returnValue = F("Am Stappenweg");
        break;
    }
    case 31059:
    {
        returnValue = F("Am Stapperhof");
        break;
    }
    case 31060:
    {
        returnValue = F("Am Starenbuckel");
        break;
    }
    case 31061:
    {
        returnValue = F("Am Starenfang");
        break;
    }
    case 31062:
    {
        returnValue = F("Am Starenkasten");
        break;
    }
    case 31063:
    {
        returnValue = F("Am Starkenbrunnen");
        break;
    }
    case 31064:
    {
        returnValue = F("Am Starksborn");
        break;
    }
    case 31065:
    {
        returnValue = F("Am Starzenbach");
        break;
    }
    case 31066:
    {
        returnValue = F("Am Staten");
        break;
    }
    case 31067:
    {
        returnValue = F("Am Stater");
        break;
    }
    case 31068:
    {
        returnValue = F("Am Stationenweg");
        break;
    }
    case 31069:
    {
        returnValue = F("Am Stau");
        break;
    }
    case 31070:
    {
        returnValue = F("Am Staubes");
        break;
    }
    case 31071:
    {
        returnValue = F("Am Stauch");
        break;
    }
    case 31072:
    {
        returnValue = F("Am Stauchbrunnen");
        break;
    }
    case 31073:
    {
        returnValue = F("Am Staudamm");
        break;
    }
    case 31074:
    {
        returnValue = F("Am Stauden");
        break;
    }
    case 31075:
    {
        returnValue = F("Am Staudenbach");
        break;
    }
    case 31076:
    {
        returnValue = F("Am Staudenwald");
        break;
    }
    case 31077:
    {
        returnValue = F("Am Staudig");
        break;
    }
    case 31078:
    {
        returnValue = F("Am Staufen");
        break;
    }
    case 31079:
    {
        returnValue = F("Am Staufenberg");
        break;
    }
    case 31080:
    {
        returnValue = F("Am Staufenbergle");
        break;
    }
    case 31081:
    {
        returnValue = F("Am Staufenblick");
        break;
    }
    case 31082:
    {
        returnValue = F("Am Staufeneck");
        break;
    }
    case 31083:
    {
        returnValue = F("Am Stauferwall");
        break;
    }
    case 31084:
    {
        returnValue = F("Am Staugraben");
        break;
    }
    case 31085:
    {
        returnValue = F("Am Staupbesenfleck");
        break;
    }
    case 31086:
    {
        returnValue = F("Am Staupitzsteg");
        break;
    }
    case 31087:
    {
        returnValue = F("Am Stausee");
        break;
    }
    case 31088:
    {
        returnValue = F("Am Stauseeblick");
        break;
    }
    case 31089:
    {
        returnValue = F("Am Staute");
        break;
    }
    case 31090:
    {
        returnValue = F("Am Stauwehr");
        break;
    }
    case 31091:
    {
        returnValue = F("Am Stauweiher");
        break;
    }
    case 31092:
    {
        returnValue = F("Am Stebbach");
        break;
    }
    case 31093:
    {
        returnValue = F("Am Stechberg");
        break;
    }
    case 31094:
    {
        returnValue = F("Am Stechersberg");
        break;
    }
    case 31095:
    {
        returnValue = F("Am Stechgraben");
        break;
    }
    case 31096:
    {
        returnValue = F("Am Stechkopf");
        break;
    }
    case 31097:
    {
        returnValue = F("Am Steckel");
        break;
    }
    case 31098:
    {
        returnValue = F("Am Steckelberg");
        break;
    }
    case 31099:
    {
        returnValue = F("Am Steckelchen");
        break;
    }
    case 31100:
    {
        returnValue = F("Am Steckelsberg");
        break;
    }
    case 31101:
    {
        returnValue = F("Am Steckenbüsch");
        break;
    }
    case 31102:
    {
        returnValue = F("Am Steckenfeld");
        break;
    }
    case 31103:
    {
        returnValue = F("Am Steckinghof");
        break;
    }
    case 31104:
    {
        returnValue = F("Am Stecknersberg");
        break;
    }
    case 31105:
    {
        returnValue = F("Am Steckwald");
        break;
    }
    case 31106:
    {
        returnValue = F("Am Stederain");
        break;
    }
    case 31107:
    {
        returnValue = F("Am Stederwald");
        break;
    }
    case 31108:
    {
        returnValue = F("Am Steeg");
        break;
    }
    case 31109:
    {
        returnValue = F("Am Steege");
        break;
    }
    case 31110:
    {
        returnValue = F("Am Steegen");
        break;
    }
    case 31111:
    {
        returnValue = F("Am Steegenwald");
        break;
    }
    case 31112:
    {
        returnValue = F("Am Steen");
        break;
    }
    case 31113:
    {
        returnValue = F("Am Steenacker");
        break;
    }
    case 31114:
    {
        returnValue = F("Am Steenblenk");
        break;
    }
    case 31115:
    {
        returnValue = F("Am Steenere Hus");
        break;
    }
    case 31116:
    {
        returnValue = F("Am Steenkamp");
        break;
    }
    case 31117:
    {
        returnValue = F("Am Steenskamp");
        break;
    }
    case 31118:
    {
        returnValue = F("Am Steffelberg");
        break;
    }
    case 31119:
    {
        returnValue = F("Am Steffensbach");
        break;
    }
    case 31120:
    {
        returnValue = F("Am Steffensberg");
        break;
    }
    case 31121:
    {
        returnValue = F("Am Steg");
        break;
    }
    case 31122:
    {
        returnValue = F("Am Stegacker");
        break;
    }
    case 31123:
    {
        returnValue = F("Am Stegbach");
        break;
    }
    case 31124:
    {
        returnValue = F("Am Stegbrunnen");
        break;
    }
    case 31125:
    {
        returnValue = F("Am Stege");
        break;
    }
    case 31126:
    {
        returnValue = F("Am Stegebach");
        break;
    }
    case 31127:
    {
        returnValue = F("Am Stegel");
        break;
    }
    case 31128:
    {
        returnValue = F("Am Stegelchen");
        break;
    }
    case 31129:
    {
        returnValue = F("Am Stegenberg");
        break;
    }
    case 31130:
    {
        returnValue = F("Am Stegenfeld");
        break;
    }
    case 31131:
    {
        returnValue = F("Am Steger");
        break;
    }
    case 31132:
    {
        returnValue = F("Am Steggarten");
        break;
    }
    case 31133:
    {
        returnValue = F("Am Steglesgraben");
        break;
    }
    case 31134:
    {
        returnValue = F("Am Steglis Rain");
        break;
    }
    case 31135:
    {
        returnValue = F("Am Stegturm");
        break;
    }
    case 31136:
    {
        returnValue = F("Am Stehenbach");
        break;
    }
    case 31137:
    {
        returnValue = F("Am Stehl");
        break;
    }
    case 31138:
    {
        returnValue = F("Am Stehlekopf");
        break;
    }
    case 31139:
    {
        returnValue = F("Am Stehler Weg");
        break;
    }
    case 31140:
    {
        returnValue = F("Am Stehlsberg");
        break;
    }
    case 31141:
    {
        returnValue = F("Am Stehpoint");
        break;
    }
    case 31142:
    {
        returnValue = F("Am Steickerer");
        break;
    }
    case 31143:
    {
        returnValue = F("Am Steierköppel");
        break;
    }
    case 31144:
    {
        returnValue = F("Am Steig");
        break;
    }
    case 31145:
    {
        returnValue = F("Am Steigacker");
        break;
    }
    case 31146:
    {
        returnValue = F("Am Steigberg");
        break;
    }
    case 31147:
    {
        returnValue = F("Am Steigbühl");
        break;
    }
    case 31148:
    {
        returnValue = F("Am Steigeneck");
        break;
    }
    case 31149:
    {
        returnValue = F("Am Steigenwäldchen");
        break;
    }
    case 31150:
    {
        returnValue = F("Am Steiger");
        break;
    }
    case 31151:
    {
        returnValue = F("Am Steigerhain");
        break;
    }
    case 31152:
    {
        returnValue = F("Am Steigerhaus");
        break;
    }
    case 31153:
    {
        returnValue = F("Am Steigert");
        break;
    }
    case 31154:
    {
        returnValue = F("Am Steigerturm");
        break;
    }
    case 31155:
    {
        returnValue = F("Am Steigerwald");
        break;
    }
    case 31156:
    {
        returnValue = F("Am Steigfeld");
        break;
    }
    case 31157:
    {
        returnValue = F("Am Steiggraben");
        break;
    }
    case 31158:
    {
        returnValue = F("Am Steigl");
        break;
    }
    case 31159:
    {
        returnValue = F("Am Steigle");
        break;
    }
    case 31160:
    {
        returnValue = F("Am Steigleiter");
        break;
    }
    case 31161:
    {
        returnValue = F("Am Steigpfad");
        break;
    }
    case 31162:
    {
        returnValue = F("Am Steigstück");
        break;
    }
    case 31163:
    {
        returnValue = F("Am Steigweg");
        break;
    }
    case 31164:
    {
        returnValue = F("Am Steigweiher");
        break;
    }
    case 31165:
    {
        returnValue = F("Am Steil");
        break;
    }
    case 31166:
    {
        returnValue = F("Am Steilen Weg");
        break;
    }
    case 31167:
    {
        returnValue = F("Am Steilhang");
        break;
    }
    case 31168:
    {
        returnValue = F("Am Steilnrain");
        break;
    }
    case 31169:
    {
        returnValue = F("Am Steilufer");
        break;
    }
    case 31170:
    {
        returnValue = F("Am Steimbach");
        break;
    }
    case 31171:
    {
        returnValue = F("Am Steimel");
        break;
    }
    case 31172:
    {
        returnValue = F("Am Steimelberg");
        break;
    }
    case 31173:
    {
        returnValue = F("Am Stein");
        break;
    }
    case 31174:
    {
        returnValue = F("Am Steinach");
        break;
    }
    case 31175:
    {
        returnValue = F("Am Steinacker");
        break;
    }
    case 31176:
    {
        returnValue = F("Am Steinanger");
        break;
    }
    case 31177:
    {
        returnValue = F("Am Steinaubach");
        break;
    }
    case 31178:
    {
        returnValue = F("Am Steinautal");
        break;
    }
    case 31179:
    {
        returnValue = F("Am Steinbach");
        break;
    }
    case 31180:
    {
        returnValue = F("Am Steinbacher Berg");
        break;
    }
    case 31181:
    {
        returnValue = F("Am Steinbacher Wald");
        break;
    }
    case 31182:
    {
        returnValue = F("Am Steinbacher Weg");
        break;
    }
    case 31183:
    {
        returnValue = F("Am Steinbachhölzl");
        break;
    }
    case 31184:
    {
        returnValue = F("Am Steinbaum");
        break;
    }
    case 31185:
    {
        returnValue = F("Am Steinbeck");
        break;
    }
    case 31186:
    {
        returnValue = F("Am Steinbeker Hof");
        break;
    }
    case 31187:
    {
        returnValue = F("Am Steinberg");
        break;
    }
    case 31188:
    {
        returnValue = F("Am Steinbergel");
        break;
    }
    case 31189:
    {
        returnValue = F("Am Steinberger Feld");
        break;
    }
    case 31190:
    {
        returnValue = F("Am Steinberger See");
        break;
    }
    case 31191:
    {
        returnValue = F("Am Steinbergerfeld");
        break;
    }
    case 31192:
    {
        returnValue = F("Am Steinbett");
        break;
    }
    case 31193:
    {
        returnValue = F("Am Steinbiel");
        break;
    }
    case 31194:
    {
        returnValue = F("Am Steinbint");
        break;
    }
    case 31195:
    {
        returnValue = F("Am Steinborn");
        break;
    }
    case 31196:
    {
        returnValue = F("Am Steinborner Graben");
        break;
    }
    case 31197:
    {
        returnValue = F("Am Steinboß");
        break;
    }
    case 31198:
    {
        returnValue = F("Am Steinbrink");
        break;
    }
    case 31199:
    {
        returnValue = F("Am Steinbruch");
        break;
    }
    case 31200:
    {
        returnValue = F("Am Steinbruchweg");
        break;
    }
    case 31201:
    {
        returnValue = F("Am Steinbrunnen");
        break;
    }
    case 31202:
    {
        returnValue = F("Am Steinbrüchelchen");
        break;
    }
    case 31203:
    {
        returnValue = F("Am Steinbrückel");
        break;
    }
    case 31204:
    {
        returnValue = F("Am Steinbrünnle");
        break;
    }
    case 31205:
    {
        returnValue = F("Am Steinbuck");
        break;
    }
    case 31206:
    {
        returnValue = F("Am Steinbuckel");
        break;
    }
    case 31207:
    {
        returnValue = F("Am Steinbuckl");
        break;
    }
    case 31208:
    {
        returnValue = F("Am Steinbusch");
        break;
    }
    case 31209:
    {
        returnValue = F("Am Steinbächel");
        break;
    }
    case 31210:
    {
        returnValue = F("Am Steinböhl");
        break;
    }
    case 31211:
    {
        returnValue = F("Am Steinbörnl");
        break;
    }
    case 31212:
    {
        returnValue = F("Am Steinbüchel");
        break;
    }
    case 31213:
    {
        returnValue = F("Am Steinbügelweg");
        break;
    }
    case 31214:
    {
        returnValue = F("Am Steinbügl");
        break;
    }
    case 31215:
    {
        returnValue = F("Am Steinbühl");
        break;
    }
    case 31216:
    {
        returnValue = F("Am Steinbüschel");
        break;
    }
    case 31217:
    {
        returnValue = F("Am Steinbüttel");
        break;
    }
    case 31218:
    {
        returnValue = F("Am Steinchen");
        break;
    }
    case 31219:
    {
        returnValue = F("Am Steinchesküppel");
        break;
    }
    case 31220:
    {
        returnValue = F("Am Steincleef");
        break;
    }
    case 31221:
    {
        returnValue = F("Am Steindamm");
        break;
    }
    case 31222:
    {
        returnValue = F("Am Steindlgut");
        break;
    }
    case 31223:
    {
        returnValue = F("Am Steine");
        break;
    }
    case 31224:
    {
        returnValue = F("Am Steineberg");
        break;
    }
    case 31225:
    {
        returnValue = F("Am Steinebühl");
        break;
    }
    case 31226:
    {
        returnValue = F("Am Steineck");
        break;
    }
    case 31227:
    {
        returnValue = F("Am Steinekreuz");
        break;
    }
    case 31228:
    {
        returnValue = F("Am Steinenbach");
        break;
    }
    case 31229:
    {
        returnValue = F("Am Steinenberg");
        break;
    }
    case 31230:
    {
        returnValue = F("Am Steinenhaus");
        break;
    }
    case 31231:
    {
        returnValue = F("Am Steiner Heid");
        break;
    }
    case 31232:
    {
        returnValue = F("Am Steiner Kreuz");
        break;
    }
    case 31233:
    {
        returnValue = F("Am Steiner Loh");
        break;
    }
    case 31234:
    {
        returnValue = F("Am Steiner Pfad");
        break;
    }
    case 31235:
    {
        returnValue = F("Am Steinerbach");
        break;
    }
    case 31236:
    {
        returnValue = F("Am Steinerberg");
        break;
    }
    case 31237:
    {
        returnValue = F("Am Steinern Brückl");
        break;
    }
    case 31238:
    {
        returnValue = F("Am Steinern Kreuz");
        break;
    }
    case 31239:
    {
        returnValue = F("Am Steinern Weg");
        break;
    }
    case 31240:
    {
        returnValue = F("Am Steinernen Berg");
        break;
    }
    case 31241:
    {
        returnValue = F("Am Steinernen Bild");
        break;
    }
    case 31242:
    {
        returnValue = F("Am Steinernen Brückchen");
        break;
    }
    case 31243:
    {
        returnValue = F("Am Steinernen Brückl");
        break;
    }
    case 31244:
    {
        returnValue = F("Am Steinernen Brücklein");
        break;
    }
    case 31245:
    {
        returnValue = F("Am Steinernen Haus");
        break;
    }
    case 31246:
    {
        returnValue = F("Am Steinernen Hügel");
        break;
    }
    case 31247:
    {
        returnValue = F("Am Steinernen Kreuz");
        break;
    }
    case 31248:
    {
        returnValue = F("Am Steinernen Sand");
        break;
    }
    case 31249:
    {
        returnValue = F("Am Steinernen Stock");
        break;
    }
    case 31250:
    {
        returnValue = F("Am Steinernen Weg");
        break;
    }
    case 31251:
    {
        returnValue = F("Am Steinernen Wehr");
        break;
    }
    case 31252:
    {
        returnValue = F("Am Steiners");
        break;
    }
    case 31253:
    {
        returnValue = F("Am Steiners Berg");
        break;
    }
    case 31254:
    {
        returnValue = F("Am Steinert");
        break;
    }
    case 31255:
    {
        returnValue = F("Am Steinertal");
        break;
    }
    case 31256:
    {
        returnValue = F("Am Steinerts");
        break;
    }
    case 31257:
    {
        returnValue = F("Am Steinertsee");
        break;
    }
    case 31258:
    {
        returnValue = F("Am Steinertsgraben");
        break;
    }
    case 31259:
    {
        returnValue = F("Am Steines");
        break;
    }
    case 31260:
    {
        returnValue = F("Am Steinfall");
        break;
    }
    case 31261:
    {
        returnValue = F("Am Steinfeld");
        break;
    }
    case 31262:
    {
        returnValue = F("Am Steinfelder Redder");
        break;
    }
    case 31263:
    {
        returnValue = F("Am Steinfels");
        break;
    }
    case 31264:
    {
        returnValue = F("Am Steinfelsen");
        break;
    }
    case 31265:
    {
        returnValue = F("Am Steinforst");
        break;
    }
    case 31266:
    {
        returnValue = F("Am Steinfurther Weg");
        break;
    }
    case 31267:
    {
        returnValue = F("Am Steinförth");
        break;
    }
    case 31268:
    {
        returnValue = F("Am Steingarten");
        break;
    }
    case 31269:
    {
        returnValue = F("Am Steingeheg");
        break;
    }
    case 31270:
    {
        returnValue = F("Am Steingrab");
        break;
    }
    case 31271:
    {
        returnValue = F("Am Steingraben");
        break;
    }
    case 31272:
    {
        returnValue = F("Am Steingrande");
        break;
    }
    case 31273:
    {
        returnValue = F("Am Steingrund");
        break;
    }
    case 31274:
    {
        returnValue = F("Am Steingräbel");
        break;
    }
    case 31275:
    {
        returnValue = F("Am Steingrüble");
        break;
    }
    case 31276:
    {
        returnValue = F("Am Steingärtchen");
        break;
    }
    case 31277:
    {
        returnValue = F("Am Steinhaag");
        break;
    }
    case 31278:
    {
        returnValue = F("Am Steinham");
        break;
    }
    case 31279:
    {
        returnValue = F("Am Steinhard");
        break;
    }
    case 31280:
    {
        returnValue = F("Am Steinhartl");
        break;
    }
    case 31281:
    {
        returnValue = F("Am Steinhauck");
        break;
    }
    case 31282:
    {
        returnValue = F("Am Steinhauerplatz");
        break;
    }
    case 31283:
    {
        returnValue = F("Am Steinhaus");
        break;
    }
    case 31284:
    {
        returnValue = F("Am Steinhauser Busch");
        break;
    }
    case 31285:
    {
        returnValue = F("Am Steinheimer Turm");
        break;
    }
    case 31286:
    {
        returnValue = F("Am Steinherd");
        break;
    }
    case 31287:
    {
        returnValue = F("Am Steinhof");
        break;
    }
    case 31288:
    {
        returnValue = F("Am Steinhohn");
        break;
    }
    case 31289:
    {
        returnValue = F("Am Steinhäuschen");
        break;
    }
    case 31290:
    {
        returnValue = F("Am Steinhäusergarten");
        break;
    }
    case 31291:
    {
        returnValue = F("Am Steinhäusle");
        break;
    }
    case 31292:
    {
        returnValue = F("Am Steinhöver");
        break;
    }
    case 31293:
    {
        returnValue = F("Am Steinhübel");
        break;
    }
    case 31294:
    {
        returnValue = F("Am Steinhügel");
        break;
    }
    case 31295:
    {
        returnValue = F("Am Steinhügelgrab");
        break;
    }
    case 31296:
    {
        returnValue = F("Am Steinhügl");
        break;
    }
    case 31297:
    {
        returnValue = F("Am Steinig");
        break;
    }
    case 31298:
    {
        returnValue = F("Am Steinigen Berg");
        break;
    }
    case 31299:
    {
        returnValue = F("Am Steinigen Graben");
        break;
    }
    case 31300:
    {
        returnValue = F("Am Steinigen Kopf");
        break;
    }
    case 31301:
    {
        returnValue = F("Am Steinigt");
        break;
    }
    case 31302:
    {
        returnValue = F("Am Steinigtberg");
        break;
    }
    case 31303:
    {
        returnValue = F("Am Steinigten Haupt");
        break;
    }
    case 31304:
    {
        returnValue = F("Am Steinkamm");
        break;
    }
    case 31305:
    {
        returnValue = F("Am Steinkamp");
        break;
    }
    case 31306:
    {
        returnValue = F("Am Steinkart");
        break;
    }
    case 31307:
    {
        returnValue = F("Am Steinkläffle");
        break;
    }
    case 31308:
    {
        returnValue = F("Am Steinknapp");
        break;
    }
    case 31309:
    {
        returnValue = F("Am Steinknock");
        break;
    }
    case 31310:
    {
        returnValue = F("Am Steinkopf");
        break;
    }
    case 31311:
    {
        returnValue = F("Am Steinkorb");
        break;
    }
    case 31312:
    {
        returnValue = F("Am Steinkreuz");
        break;
    }
    case 31313:
    {
        returnValue = F("Am Steinkäulchen");
        break;
    }
    case 31314:
    {
        returnValue = F("Am Steinköppel");
        break;
    }
    case 31315:
    {
        returnValue = F("Am Steinküppel");
        break;
    }
    case 31316:
    {
        returnValue = F("Am Steinland");
        break;
    }
    case 31317:
    {
        returnValue = F("Am Steinlein");
        break;
    }
    case 31318:
    {
        returnValue = F("Am Steinletz");
        break;
    }
    case 31319:
    {
        returnValue = F("Am Steinling");
        break;
    }
    case 31320:
    {
        returnValue = F("Am Steinloch");
        break;
    }
    case 31321:
    {
        returnValue = F("Am Steinloh");
        break;
    }
    case 31322:
    {
        returnValue = F("Am Steinlöchel");
        break;
    }
    case 31323:
    {
        returnValue = F("Am Steinmecke");
        break;
    }
    case 31324:
    {
        returnValue = F("Am Steinmell");
        break;
    }
    case 31325:
    {
        returnValue = F("Am Steinmes");
        break;
    }
    case 31326:
    {
        returnValue = F("Am Steinmetzbrünnel");
        break;
    }
    case 31327:
    {
        returnValue = F("Am Steinmorgen");
        break;
    }
    case 31328:
    {
        returnValue = F("Am Steinmäuerlein");
        break;
    }
    case 31329:
    {
        returnValue = F("Am Steinmühl");
        break;
    }
    case 31330:
    {
        returnValue = F("Am Steinmühlenkamp");
        break;
    }
    case 31331:
    {
        returnValue = F("Am Steinnörrn");
        break;
    }
    case 31332:
    {
        returnValue = F("Am Steinort");
        break;
    }
    case 31333:
    {
        returnValue = F("Am Steinpfad");
        break;
    }
    case 31334:
    {
        returnValue = F("Am Steinplatt");
        break;
    }
    case 31335:
    {
        returnValue = F("Am Steinpranger");
        break;
    }
    case 31336:
    {
        returnValue = F("Am Steinpöhlwald");
        break;
    }
    case 31337:
    {
        returnValue = F("Am Steinrausch");
        break;
    }
    case 31338:
    {
        returnValue = F("Am Steinrech");
        break;
    }
    case 31339:
    {
        returnValue = F("Am Steinreisle");
        break;
    }
    case 31340:
    {
        returnValue = F("Am Steinriegel");
        break;
    }
    case 31341:
    {
        returnValue = F("Am Steinriesel");
        break;
    }
    case 31342:
    {
        returnValue = F("Am Steinriesen");
        break;
    }
    case 31343:
    {
        returnValue = F("Am Steinritsch");
        break;
    }
    case 31344:
    {
        returnValue = F("Am Steinrössel");
        break;
    }
    case 31345:
    {
        returnValue = F("Am Steinrück");
        break;
    }
    case 31346:
    {
        returnValue = F("Am Steinrücken");
        break;
    }
    case 31347:
    {
        returnValue = F("Am Steinsberg");
        break;
    }
    case 31348:
    {
        returnValue = F("Am Steinsborn");
        break;
    }
    case 31349:
    {
        returnValue = F("Am Steinschlag");
        break;
    }
    case 31350:
    {
        returnValue = F("Am Steinsgraben");
        break;
    }
    case 31351:
    {
        returnValue = F("Am Steinsheckchen");
        break;
    }
    case 31352:
    {
        returnValue = F("Am Steinsiek");
        break;
    }
    case 31353:
    {
        returnValue = F("Am Steinsteg");
        break;
    }
    case 31354:
    {
        returnValue = F("Am Steinstock");
        break;
    }
    case 31355:
    {
        returnValue = F("Am Steinstück");
        break;
    }
    case 31356:
    {
        returnValue = F("Am Steinteich");
        break;
    }
    case 31357:
    {
        returnValue = F("Am Steintisch");
        break;
    }
    case 31358:
    {
        returnValue = F("Am Steintl");
        break;
    }
    case 31359:
    {
        returnValue = F("Am Steintor");
        break;
    }
    case 31360:
    {
        returnValue = F("Am Steintoranger");
        break;
    }
    case 31361:
    {
        returnValue = F("Am Steinwald");
        break;
    }
    case 31362:
    {
        returnValue = F("Am Steinwall");
        break;
    }
    case 31363:
    {
        returnValue = F("Am Steinwandel");
        break;
    }
    case 31364:
    {
        returnValue = F("Am Steinwedeler Wald");
        break;
    }
    case 31365:
    {
        returnValue = F("Am Steinweg");
        break;
    }
    case 31366:
    {
        returnValue = F("Am Steinwendener Weg");
        break;
    }
    case 31367:
    {
        returnValue = F("Am Steinwerk");
        break;
    }
    case 31368:
    {
        returnValue = F("Am Steinwäldchen");
        break;
    }
    case 31369:
    {
        returnValue = F("Am Steinzeitplatz");
        break;
    }
    case 31370:
    {
        returnValue = F("Am Stellberg");
        break;
    }
    case 31371:
    {
        returnValue = F("Am Stellbrink");
        break;
    }
    case 31372:
    {
        returnValue = F("Am Stellekamp");
        break;
    }
    case 31373:
    {
        returnValue = F("Am Stellenberg");
        break;
    }
    case 31374:
    {
        returnValue = F("Am Steller Damm");
        break;
    }
    case 31375:
    {
        returnValue = F("Am Stellerberg");
        break;
    }
    case 31376:
    {
        returnValue = F("Am Stellesberg");
        break;
    }
    case 31377:
    {
        returnValue = F("Am Stellplatz");
        break;
    }
    case 31378:
    {
        returnValue = F("Am Stellungsbrunnen");
        break;
    }
    case 31379:
    {
        returnValue = F("Am Stellweg");
        break;
    }
    case 31380:
    {
        returnValue = F("Am Stellwerk");
        break;
    }
    case 31381:
    {
        returnValue = F("Am Stellwinkel");
        break;
    }
    case 31382:
    {
        returnValue = F("Am Stelzbach");
        break;
    }
    case 31383:
    {
        returnValue = F("Am Stelzenbach");
        break;
    }
    case 31384:
    {
        returnValue = F("Am Stelzenberg");
        break;
    }
    case 31385:
    {
        returnValue = F("Am Stelzersgraben");
        break;
    }
    case 31386:
    {
        returnValue = F("Am Stemmannsberg");
        break;
    }
    case 31387:
    {
        returnValue = F("Am Stemmen");
        break;
    }
    case 31388:
    {
        returnValue = F("Am Stemmerberg");
        break;
    }
    case 31389:
    {
        returnValue = F("Am Stemmteich");
        break;
    }
    case 31390:
    {
        returnValue = F("Am Stempel");
        break;
    }
    case 31391:
    {
        returnValue = F("Am Stemweder Moor");
        break;
    }
    case 31392:
    {
        returnValue = F("Am Steneberg");
        break;
    }
    case 31393:
    {
        returnValue = F("Am Stengach");
        break;
    }
    case 31394:
    {
        returnValue = F("Am Stenpatt");
        break;
    }
    case 31395:
    {
        returnValue = F("Am Stentenberg");
        break;
    }
    case 31396:
    {
        returnValue = F("Am Stephansberg");
        break;
    }
    case 31397:
    {
        returnValue = F("Am Stephansberge");
        break;
    }
    case 31398:
    {
        returnValue = F("Am Stephanusstift");
        break;
    }
    case 31399:
    {
        returnValue = F("Am Steppach");
        break;
    }
    case 31400:
    {
        returnValue = F("Am Steppachbrunnen");
        break;
    }
    case 31401:
    {
        returnValue = F("Am Steppbach");
        break;
    }
    case 31402:
    {
        returnValue = F("Am Steppbachwiesle");
        break;
    }
    case 31403:
    {
        returnValue = F("Am Steppenkamp");
        break;
    }
    case 31404:
    {
        returnValue = F("Am Stepprather Hof");
        break;
    }
    case 31405:
    {
        returnValue = F("Am Sterenbach");
        break;
    }
    case 31406:
    {
        returnValue = F("Am Sterkelsberg");
        break;
    }
    case 31407:
    {
        returnValue = F("Am Stern");
        break;
    }
    case 31408:
    {
        returnValue = F("Am Sternanger");
        break;
    }
    case 31409:
    {
        returnValue = F("Am Sternbach");
        break;
    }
    case 31410:
    {
        returnValue = F("Am Sternberg");
        break;
    }
    case 31411:
    {
        returnValue = F("Am Sternbusch");
        break;
    }
    case 31412:
    {
        returnValue = F("Am Sternenberg");
        break;
    }
    case 31413:
    {
        returnValue = F("Am Sternenkeller");
        break;
    }
    case 31414:
    {
        returnValue = F("Am Sternenweg");
        break;
    }
    case 31415:
    {
        returnValue = F("Am Sterngrund");
        break;
    }
    case 31416:
    {
        returnValue = F("Am Sternstieg");
        break;
    }
    case 31417:
    {
        returnValue = F("Am Sterthagen");
        break;
    }
    case 31418:
    {
        returnValue = F("Am Sterzelbach");
        break;
    }
    case 31419:
    {
        returnValue = F("Am Stetenrain");
        break;
    }
    case 31420:
    {
        returnValue = F("Am Stettacker");
        break;
    }
    case 31421:
    {
        returnValue = F("Am Stettbach");
        break;
    }
    case 31422:
    {
        returnValue = F("Am Stettberg");
        break;
    }
    case 31423:
    {
        returnValue = F("Am Stettbergacker");
        break;
    }
    case 31424:
    {
        returnValue = F("Am Stettenfeld");
        break;
    }
    case 31425:
    {
        returnValue = F("Am Stettiner Berg");
        break;
    }
    case 31426:
    {
        returnValue = F("Am Stettiner Teich");
        break;
    }
    case 31427:
    {
        returnValue = F("Am Stetweg");
        break;
    }
    case 31428:
    {
        returnValue = F("Am Steuerberg");
        break;
    }
    case 31429:
    {
        returnValue = F("Am Steuerfeld");
        break;
    }
    case 31430:
    {
        returnValue = F("Am Stevenhof");
        break;
    }
    case 31431:
    {
        returnValue = F("Am Stevert");
        break;
    }
    case 31432:
    {
        returnValue = F("Am Steverufer");
        break;
    }
    case 31433:
    {
        returnValue = F("Am Steyrerfeld");
        break;
    }
    case 31434:
    {
        returnValue = F("Am Stich");
        break;
    }
    case 31435:
    {
        returnValue = F("Am Stich Maaß 3");
        break;
    }
    case 31436:
    {
        returnValue = F("Am Stichelbach");
        break;
    }
    case 31437:
    {
        returnValue = F("Am Stichgartl");
        break;
    }
    case 31438:
    {
        returnValue = F("Am Stichgraben");
        break;
    }
    case 31439:
    {
        returnValue = F("Am Stichkanal");
        break;
    }
    case 31440:
    {
        returnValue = F("Am Stickel");
        break;
    }
    case 31441:
    {
        returnValue = F("Am Stickelsacker");
        break;
    }
    case 31442:
    {
        returnValue = F("Am Stickelsberg");
        break;
    }
    case 31443:
    {
        returnValue = F("Am Stickeshof");
        break;
    }
    case 31444:
    {
        returnValue = F("Am Stickteich");
        break;
    }
    case 31445:
    {
        returnValue = F("Am Stiebach");
        break;
    }
    case 31446:
    {
        returnValue = F("Am Stiedel");
        break;
    }
    case 31447:
    {
        returnValue = F("Am Stiefel");
        break;
    }
    case 31448:
    {
        returnValue = F("Am Stieg");
        break;
    }
    case 31449:
    {
        returnValue = F("Am Stiege");
        break;
    }
    case 31450:
    {
        returnValue = F("Am Stiegel");
        break;
    }
    case 31451:
    {
        returnValue = F("Am Stiegelberg");
        break;
    }
    case 31452:
    {
        returnValue = F("Am Stiegele");
        break;
    }
    case 31453:
    {
        returnValue = F("Am Stiegelefels");
        break;
    }
    case 31454:
    {
        returnValue = F("Am Stiegelein");
        break;
    }
    case 31455:
    {
        returnValue = F("Am Stiegelfeld");
        break;
    }
    case 31456:
    {
        returnValue = F("Am Stiegertor");
        break;
    }
    case 31457:
    {
        returnValue = F("Am Stiegl");
        break;
    }
    case 31458:
    {
        returnValue = F("Am Stieglein");
        break;
    }
    case 31459:
    {
        returnValue = F("Am Stiegäcker");
        break;
    }
    case 31460:
    {
        returnValue = F("Am Stiel");
        break;
    }
    case 31461:
    {
        returnValue = F("Am Stielhölzl");
        break;
    }
    case 31462:
    {
        returnValue = F("Am Stielweg");
        break;
    }
    case 31463:
    {
        returnValue = F("Am Stienitzsee");
        break;
    }
    case 31464:
    {
        returnValue = F("Am Stieranger");
        break;
    }
    case 31465:
    {
        returnValue = F("Am Stierberg");
        break;
    }
    case 31466:
    {
        returnValue = F("Am Stiergarten");
        break;
    }
    case 31467:
    {
        returnValue = F("Am Stiergraben");
        break;
    }
    case 31468:
    {
        returnValue = F("Am Stierksken");
        break;
    }
    case 31469:
    {
        returnValue = F("Am Stierlein");
        break;
    }
    case 31470:
    {
        returnValue = F("Am Stift");
        break;
    }
    case 31471:
    {
        returnValue = F("Am Stiftsacker");
        break;
    }
    case 31472:
    {
        returnValue = F("Am Stiftsbusch");
        break;
    }
    case 31473:
    {
        returnValue = F("Am Stiftsgarten");
        break;
    }
    case 31474:
    {
        returnValue = F("Am Stiftsgraben");
        break;
    }
    case 31475:
    {
        returnValue = F("Am Stiftshof");
        break;
    }
    case 31476:
    {
        returnValue = F("Am Stiftshofe");
        break;
    }
    case 31477:
    {
        returnValue = F("Am Stiftswald");
        break;
    }
    case 31478:
    {
        returnValue = F("Am Stig");
        break;
    }
    case 31479:
    {
        returnValue = F("Am Stiglberg");
        break;
    }
    case 31480:
    {
        returnValue = F("Am Stigloh");
        break;
    }
    case 31481:
    {
        returnValue = F("Am Stillbach");
        break;
    }
    case 31482:
    {
        returnValue = F("Am Stillen Wasser");
        break;
    }
    case 31483:
    {
        returnValue = F("Am Stillen Weg");
        break;
    }
    case 31484:
    {
        returnValue = F("Am Stillflecken");
        break;
    }
    case 31485:
    {
        returnValue = F("Am Stillhof");
        break;
    }
    case 31486:
    {
        returnValue = F("Am Stimberg");
        break;
    }
    case 31487:
    {
        returnValue = F("Am Stimbergpark");
        break;
    }
    case 31488:
    {
        returnValue = F("Am Stimmbeck");
        break;
    }
    case 31489:
    {
        returnValue = F("Am Stinnberg");
        break;
    }
    case 31490:
    {
        returnValue = F("Am Stintgraben");
        break;
    }
    case 31491:
    {
        returnValue = F("Am Stippchen");
        break;
    }
    case 31492:
    {
        returnValue = F("Am Stippenweg");
        break;
    }
    case 31493:
    {
        returnValue = F("Am Stirkenbend");
        break;
    }
    case 31494:
    {
        returnValue = F("Am Stirnberg");
        break;
    }
    case 31495:
    {
        returnValue = F("Am Stoa");
        break;
    }
    case 31496:
    {
        returnValue = F("Am Stoben");
        break;
    }
    case 31497:
    {
        returnValue = F("Am Stobenberg");
        break;
    }
    case 31498:
    {
        returnValue = F("Am Stobenkamp");
        break;
    }
    case 31499:
    {
        returnValue = F("Am Stobenteich");
        break;
    }
    case 31500:
    {
        returnValue = F("Am Stock");
        break;
    }
    case 31501:
    {
        returnValue = F("Am Stockacker");
        break;
    }
    case 31502:
    {
        returnValue = F("Am Stockberg");
        break;
    }
    case 31503:
    {
        returnValue = F("Am Stockbergerbusch");
        break;
    }
    case 31504:
    {
        returnValue = F("Am Stockborn");
        break;
    }
    case 31505:
    {
        returnValue = F("Am Stockbrunnen");
        break;
    }
    case 31506:
    {
        returnValue = F("Am Stockburen");
        break;
    }
    case 31507:
    {
        returnValue = F("Am Stockbühl");
        break;
    }
    case 31508:
    {
        returnValue = F("Am Stockenbleek");
        break;
    }
    case 31509:
    {
        returnValue = F("Am Stockenpütz");
        break;
    }
    case 31510:
    {
        returnValue = F("Am Stocker");
        break;
    }
    case 31511:
    {
        returnValue = F("Am Stockerfeld");
        break;
    }
    case 31512:
    {
        returnValue = F("Am Stockert");
        break;
    }
    case 31513:
    {
        returnValue = F("Am Stocket");
        break;
    }
    case 31514:
    {
        returnValue = F("Am Stockey");
        break;
    }
    case 31515:
    {
        returnValue = F("Am Stockfeld");
        break;
    }
    case 31516:
    {
        returnValue = F("Am Stockgraben");
        break;
    }
    case 31517:
    {
        returnValue = F("Am Stockhahn");
        break;
    }
    case 31518:
    {
        returnValue = F("Am Stockhaus");
        break;
    }
    case 31519:
    {
        returnValue = F("Am Stockich");
        break;
    }
    case 31520:
    {
        returnValue = F("Am Stockkamp");
        break;
    }
    case 31521:
    {
        returnValue = F("Am Stockplatz");
        break;
    }
    case 31522:
    {
        returnValue = F("Am Stockrasen");
        break;
    }
    case 31523:
    {
        returnValue = F("Am Stocksberg");
        break;
    }
    case 31524:
    {
        returnValue = F("Am Stocksee");
        break;
    }
    case 31525:
    {
        returnValue = F("Am Stockteich");
        break;
    }
    case 31526:
    {
        returnValue = F("Am Stockäcker");
        break;
    }
    case 31527:
    {
        returnValue = F("Am Stode");
        break;
    }
    case 31528:
    {
        returnValue = F("Am Stoffelbach");
        break;
    }
    case 31529:
    {
        returnValue = F("Am Stokenberg");
        break;
    }
    case 31530:
    {
        returnValue = F("Am Stollberger Berg");
        break;
    }
    case 31531:
    {
        returnValue = F("Am Stollborn");
        break;
    }
    case 31532:
    {
        returnValue = F("Am Stollen");
        break;
    }
    case 31533:
    {
        returnValue = F("Am Stollenbach");
        break;
    }
    case 31534:
    {
        returnValue = F("Am Stollengarten");
        break;
    }
    case 31535:
    {
        returnValue = F("Am Stollengraben");
        break;
    }
    case 31536:
    {
        returnValue = F("Am Stollenkamp");
        break;
    }
    case 31537:
    {
        returnValue = F("Am Stollenrain");
        break;
    }
    case 31538:
    {
        returnValue = F("Am Stollenwald");
        break;
    }
    case 31539:
    {
        returnValue = F("Am Stollenweg");
        break;
    }
    case 31540:
    {
        returnValue = F("Am Stollenweiher");
        break;
    }
    case 31541:
    {
        returnValue = F("Am Stollhof");
        break;
    }
    case 31542:
    {
        returnValue = F("Am Stollngarten");
        break;
    }
    case 31543:
    {
        returnValue = F("Am Stollrasen");
        break;
    }
    case 31544:
    {
        returnValue = F("Am Stolp");
        break;
    }
    case 31545:
    {
        returnValue = F("Am Stolzenrangen");
        break;
    }
    case 31546:
    {
        returnValue = F("Am Stopenberg");
        break;
    }
    case 31547:
    {
        returnValue = F("Am Stopfer");
        break;
    }
    case 31548:
    {
        returnValue = F("Am Stoppborn");
        break;
    }
    case 31549:
    {
        returnValue = F("Am Stoppelfeld");
        break;
    }
    case 31550:
    {
        returnValue = F("Am Stoppelhof");
        break;
    }
    case 31551:
    {
        returnValue = F("Am Storchenacker");
        break;
    }
    case 31552:
    {
        returnValue = F("Am Storchenbaum");
        break;
    }
    case 31553:
    {
        returnValue = F("Am Storchenbuckel");
        break;
    }
    case 31554:
    {
        returnValue = F("Am Storchengraben");
        break;
    }
    case 31555:
    {
        returnValue = F("Am Storchenhaus");
        break;
    }
    case 31556:
    {
        returnValue = F("Am Storchenheim");
        break;
    }
    case 31557:
    {
        returnValue = F("Am Storchenhof");
        break;
    }
    case 31558:
    {
        returnValue = F("Am Storchenhorst");
        break;
    }
    case 31559:
    {
        returnValue = F("Am Storchennest");
        break;
    }
    case 31560:
    {
        returnValue = F("Am Storchenpfad");
        break;
    }
    case 31561:
    {
        returnValue = F("Am Storchentor");
        break;
    }
    case 31562:
    {
        returnValue = F("Am Storchenturm");
        break;
    }
    case 31563:
    {
        returnValue = F("Am Storchenweiher");
        break;
    }
    case 31564:
    {
        returnValue = F("Am Storchhübel");
        break;
    }
    case 31565:
    {
        returnValue = F("Am Storchsborn");
        break;
    }
    case 31566:
    {
        returnValue = F("Am Storkebrink");
        break;
    }
    case 31567:
    {
        returnValue = F("Am Storkesfeld");
        break;
    }
    case 31568:
    {
        returnValue = F("Am Storksberg");
        break;
    }
    case 31569:
    {
        returnValue = F("Am Storzenberg");
        break;
    }
    case 31570:
    {
        returnValue = F("Am Stoteler See");
        break;
    }
    case 31571:
    {
        returnValue = F("Am Stoß");
        break;
    }
    case 31572:
    {
        returnValue = F("Am Str.nacker");
        break;
    }
    case 31573:
    {
        returnValue = F("Am Str.nbahnmuseum");
        break;
    }
    case 31574:
    {
        returnValue = F("Am Str.nberg");
        break;
    }
    case 31575:
    {
        returnValue = F("Am Str.nfeld");
        break;
    }
    case 31576:
    {
        returnValue = F("Am Str.nheimer Weg");
        break;
    }
    case 31577:
    {
        returnValue = F("Am Str.nverkehrsamt");
        break;
    }
    case 31578:
    {
        returnValue = F("Am Stracken Wege");
        break;
    }
    case 31579:
    {
        returnValue = F("Am Strackmanns Esch");
        break;
    }
    case 31580:
    {
        returnValue = F("Am Stragel");
        break;
    }
    case 31581:
    {
        returnValue = F("Am Stragholzer Kreuz");
        break;
    }
    case 31582:
    {
        returnValue = F("Am Strahlberg");
        break;
    }
    case 31583:
    {
        returnValue = F("Am Strahn");
        break;
    }
    case 31584:
    {
        returnValue = F("Am Strampfbach");
        break;
    }
    case 31585:
    {
        returnValue = F("Am Strand");
        break;
    }
    case 31586:
    {
        returnValue = F("Am Strandbad");
        break;
    }
    case 31587:
    {
        returnValue = F("Am Strandcasino");
        break;
    }
    case 31588:
    {
        returnValue = F("Am Strande");
        break;
    }
    case 31589:
    {
        returnValue = F("Am Strandpark");
        break;
    }
    case 31590:
    {
        returnValue = F("Am Strandweg");
        break;
    }
    case 31591:
    {
        returnValue = F("Am Strang");
        break;
    }
    case 31592:
    {
        returnValue = F("Am Strangbach");
        break;
    }
    case 31593:
    {
        returnValue = F("Am Strange");
        break;
    }
    case 31594:
    {
        returnValue = F("Am Strangfeld");
        break;
    }
    case 31595:
    {
        returnValue = F("Am Strassberg");
        break;
    }
    case 31596:
    {
        returnValue = F("Am Stratjebusch");
        break;
    }
    case 31597:
    {
        returnValue = F("Am Strauch");
        break;
    }
    case 31598:
    {
        returnValue = F("Am Strauchberg");
        break;
    }
    case 31599:
    {
        returnValue = F("Am Strauchelfeld");
        break;
    }
    case 31600:
    {
        returnValue = F("Am Strauchfeld");
        break;
    }
    case 31601:
    {
        returnValue = F("Am Strauchgraben");
        break;
    }
    case 31602:
    {
        returnValue = F("Am Strauchshof");
        break;
    }
    case 31603:
    {
        returnValue = F("Am Strauchwerder");
        break;
    }
    case 31604:
    {
        returnValue = F("Am Straun");
        break;
    }
    case 31605:
    {
        returnValue = F("Am Strausberger Tor");
        break;
    }
    case 31606:
    {
        returnValue = F("Am Strauß");
        break;
    }
    case 31607:
    {
        returnValue = F("Am Straußenhof");
        break;
    }
    case 31608:
    {
        returnValue = F("Am Straßacker");
        break;
    }
    case 31609:
    {
        returnValue = F("Am Straßanger");
        break;
    }
    case 31610:
    {
        returnValue = F("Am Straßbach");
        break;
    }
    case 31611:
    {
        returnValue = F("Am Straßberg");
        break;
    }
    case 31612:
    {
        returnValue = F("Am Straßfeld");
        break;
    }
    case 31613:
    {
        returnValue = F("Am Straßlacher Feld");
        break;
    }
    case 31614:
    {
        returnValue = F("Am Straßland");
        break;
    }
    case 31615:
    {
        returnValue = F("Am Straßäcker");
        break;
    }
    case 31616:
    {
        returnValue = F("Am Streckerplatz");
        break;
    }
    case 31617:
    {
        returnValue = F("Am Streckfluß");
        break;
    }
    case 31618:
    {
        returnValue = F("Am Streek");
        break;
    }
    case 31619:
    {
        returnValue = F("Am Streffel");
        break;
    }
    case 31620:
    {
        returnValue = F("Am Streganzsee");
        break;
    }
    case 31621:
    {
        returnValue = F("Am Stregelberg");
        break;
    }
    case 31622:
    {
        returnValue = F("Am Strehl");
        break;
    }
    case 31623:
    {
        returnValue = F("Am Strehlaer Wasser");
        break;
    }
    case 31624:
    {
        returnValue = F("Am Strehlerhof");
        break;
    }
    case 31625:
    {
        returnValue = F("Am Streich");
        break;
    }
    case 31626:
    {
        returnValue = F("Am Streichen");
        break;
    }
    case 31627:
    {
        returnValue = F("Am Streichling");
        break;
    }
    case 31628:
    {
        returnValue = F("Am Streitacker");
        break;
    }
    case 31629:
    {
        returnValue = F("Am Streitberg");
        break;
    }
    case 31630:
    {
        returnValue = F("Am Streite");
        break;
    }
    case 31631:
    {
        returnValue = F("Am Streitfeld");
        break;
    }
    case 31632:
    {
        returnValue = F("Am Streitgraben");
        break;
    }
    case 31633:
    {
        returnValue = F("Am Streitholz");
        break;
    }
    case 31634:
    {
        returnValue = F("Am Streitkopf");
        break;
    }
    case 31635:
    {
        returnValue = F("Am Streitplacken");
        break;
    }
    case 31636:
    {
        returnValue = F("Am Streitteich");
        break;
    }
    case 31637:
    {
        returnValue = F("Am Strelasund");
        break;
    }
    case 31638:
    {
        returnValue = F("Am Strellberg");
        break;
    }
    case 31639:
    {
        returnValue = F("Am Stremel");
        break;
    }
    case 31640:
    {
        returnValue = F("Am Streng");
        break;
    }
    case 31641:
    {
        returnValue = F("Am Strengbach");
        break;
    }
    case 31642:
    {
        returnValue = F("Am Strengebach");
        break;
    }
    case 31643:
    {
        returnValue = F("Am Strengschloot");
        break;
    }
    case 31644:
    {
        returnValue = F("Am Strenzleweg");
        break;
    }
    case 31645:
    {
        returnValue = F("Am Streubach");
        break;
    }
    case 31646:
    {
        returnValue = F("Am Streublick");
        break;
    }
    case 31647:
    {
        returnValue = F("Am Streubügel");
        break;
    }
    case 31648:
    {
        returnValue = F("Am Streuerkamp");
        break;
    }
    case 31649:
    {
        returnValue = F("Am Streuffenhof");
        break;
    }
    case 31650:
    {
        returnValue = F("Am Streuobsthang");
        break;
    }
    case 31651:
    {
        returnValue = F("Am Strichgraben");
        break;
    }
    case 31652:
    {
        returnValue = F("Am Strickberg");
        break;
    }
    case 31653:
    {
        returnValue = F("Am Striebelsee");
        break;
    }
    case 31654:
    {
        returnValue = F("Am Striegel");
        break;
    }
    case 31655:
    {
        returnValue = F("Am Strieglerberg");
        break;
    }
    case 31656:
    {
        returnValue = F("Am Strieglhof");
        break;
    }
    case 31657:
    {
        returnValue = F("Am Strietbach");
        break;
    }
    case 31658:
    {
        returnValue = F("Am Strigl");
        break;
    }
    case 31659:
    {
        returnValue = F("Am Strogenkanal");
        break;
    }
    case 31660:
    {
        returnValue = F("Am Strogensteg");
        break;
    }
    case 31661:
    {
        returnValue = F("Am Strohberg");
        break;
    }
    case 31662:
    {
        returnValue = F("Am Strohschochen");
        break;
    }
    case 31663:
    {
        returnValue = F("Am Strohügel");
        break;
    }
    case 31664:
    {
        returnValue = F("Am Strom");
        break;
    }
    case 31665:
    {
        returnValue = F("Am Stromberg");
        break;
    }
    case 31666:
    {
        returnValue = F("Am Strooter Hörn");
        break;
    }
    case 31667:
    {
        returnValue = F("Am Strothbach");
        break;
    }
    case 31668:
    {
        returnValue = F("Am Strothebach");
        break;
    }
    case 31669:
    {
        returnValue = F("Am Strubelbrunnen");
        break;
    }
    case 31670:
    {
        returnValue = F("Am Struckey");
        break;
    }
    case 31671:
    {
        returnValue = F("Am Struckmannsberg");
        break;
    }
    case 31672:
    {
        returnValue = F("Am Struckteich");
        break;
    }
    case 31673:
    {
        returnValue = F("Am Strudel");
        break;
    }
    case 31674:
    {
        returnValue = F("Am Strudelweiher");
        break;
    }
    case 31675:
    {
        returnValue = F("Am Strudl");
        break;
    }
    case 31676:
    {
        returnValue = F("Am Strummin");
        break;
    }
    case 31677:
    {
        returnValue = F("Am Struther Berg");
        break;
    }
    case 31678:
    {
        returnValue = F("Am Struthgraben");
        break;
    }
    case 31679:
    {
        returnValue = F("Am Struthwege");
        break;
    }
    case 31680:
    {
        returnValue = F("Am Struwenberg");
        break;
    }
    case 31681:
    {
        returnValue = F("Am Strußfeld");
        break;
    }
    case 31682:
    {
        returnValue = F("Am Sträßchen");
        break;
    }
    case 31683:
    {
        returnValue = F("Am Sträßel");
        break;
    }
    case 31684:
    {
        returnValue = F("Am Sträßle");
        break;
    }
    case 31685:
    {
        returnValue = F("Am Sträßlein");
        break;
    }
    case 31686:
    {
        returnValue = F("Am Ströher Bahnhof");
        break;
    }
    case 31687:
    {
        returnValue = F("Am Strühe");
        break;
    }
    case 31688:
    {
        returnValue = F("Am Strütchen");
        break;
    }
    case 31689:
    {
        returnValue = F("Am Strüthchen");
        break;
    }
    case 31690:
    {
        returnValue = F("Am Stubben");
        break;
    }
    case 31691:
    {
        returnValue = F("Am Stubbenbruch");
        break;
    }
    case 31692:
    {
        returnValue = F("Am Stubbenhof");
        break;
    }
    case 31693:
    {
        returnValue = F("Am Stubberg");
        break;
    }
    case 31694:
    {
        returnValue = F("Am Stuben");
        break;
    }
    case 31695:
    {
        returnValue = F("Am Stuck");
        break;
    }
    case 31696:
    {
        returnValue = F("Am Stuckeberg");
        break;
    }
    case 31697:
    {
        returnValue = F("Am Stuckenberg");
        break;
    }
    case 31698:
    {
        returnValue = F("Am Stuckertsgraben");
        break;
    }
    case 31699:
    {
        returnValue = F("Am Stufenberg");
        break;
    }
    case 31700:
    {
        returnValue = F("Am Stuhl");
        break;
    }
    case 31701:
    {
        returnValue = F("Am Stuhlberg");
        break;
    }
    case 31702:
    {
        returnValue = F("Am Stuhlenberg");
        break;
    }
    case 31703:
    {
        returnValue = F("Am Stukenholz");
        break;
    }
    case 31704:
    {
        returnValue = F("Am Stummelmorgen");
        break;
    }
    case 31705:
    {
        returnValue = F("Am Stumpenberg");
        break;
    }
    case 31706:
    {
        returnValue = F("Am Stumpenhof");
        break;
    }
    case 31707:
    {
        returnValue = F("Am Stumpf");
        break;
    }
    case 31708:
    {
        returnValue = F("Am Stumpfen Turm");
        break;
    }
    case 31709:
    {
        returnValue = F("Am Stundenstein");
        break;
    }
    case 31710:
    {
        returnValue = F("Am Sturmbühl");
        break;
    }
    case 31711:
    {
        returnValue = F("Am Sturmeck");
        break;
    }
    case 31712:
    {
        returnValue = F("Am Sturmen");
        break;
    }
    case 31713:
    {
        returnValue = F("Am Sturmfeld");
        break;
    }
    case 31714:
    {
        returnValue = F("Am Sturmiusberg");
        break;
    }
    case 31715:
    {
        returnValue = F("Am Sturmweg");
        break;
    }
    case 31716:
    {
        returnValue = F("Am Sturz");
        break;
    }
    case 31717:
    {
        returnValue = F("Am Sturzbach");
        break;
    }
    case 31718:
    {
        returnValue = F("Am Sturzgraben");
        break;
    }
    case 31719:
    {
        returnValue = F("Am Stutenanger");
        break;
    }
    case 31720:
    {
        returnValue = F("Am Stutenberg");
        break;
    }
    case 31721:
    {
        returnValue = F("Am Stutenpatt");
        break;
    }
    case 31722:
    {
        returnValue = F("Am Stutenrand");
        break;
    }
    case 31723:
    {
        returnValue = F("Am Stutenteich");
        break;
    }
    case 31724:
    {
        returnValue = F("Am Stuttenstück");
        break;
    }
    case 31725:
    {
        returnValue = F("Am Stutter Weg");
        break;
    }
    case 31726:
    {
        returnValue = F("Am Stuttgarter Weg");
        break;
    }
    case 31727:
    {
        returnValue = F("Am Stutz");
        break;
    }
    case 31728:
    {
        returnValue = F("Am Stutzenwald");
        break;
    }
    case 31729:
    {
        returnValue = F("Am Stutzkreuz");
        break;
    }
    case 31730:
    {
        returnValue = F("Am Stuvenberg");
        break;
    }
    case 31731:
    {
        returnValue = F("Am Stuvenwald");
        break;
    }
    case 31732:
    {
        returnValue = F("Am Stäbel");
        break;
    }
    case 31733:
    {
        returnValue = F("Am Städtchen");
        break;
    }
    case 31734:
    {
        returnValue = F("Am Städter Berg");
        break;
    }
    case 31735:
    {
        returnValue = F("Am Stägehaus");
        break;
    }
    case 31736:
    {
        returnValue = F("Am Stählesbrunnen");
        break;
    }
    case 31737:
    {
        returnValue = F("Am Stängelsbrunnen");
        break;
    }
    case 31738:
    {
        returnValue = F("Am Stänglesbrunnen");
        break;
    }
    case 31739:
    {
        returnValue = F("Am Stärkel");
        break;
    }
    case 31740:
    {
        returnValue = F("Am Stärkelsbach");
        break;
    }
    case 31741:
    {
        returnValue = F("Am Stärkesboll");
        break;
    }
    case 31742:
    {
        returnValue = F("Am Stärzenbach");
        break;
    }
    case 31743:
    {
        returnValue = F("Am Stäsgen");
        break;
    }
    case 31744:
    {
        returnValue = F("Am Stättenrain");
        break;
    }
    case 31745:
    {
        returnValue = F("Am Stättle");
        break;
    }
    case 31746:
    {
        returnValue = F("Am Stäuben");
        break;
    }
    case 31747:
    {
        returnValue = F("Am Stäudig");
        break;
    }
    case 31748:
    {
        returnValue = F("Am Stäudigt");
        break;
    }
    case 31749:
    {
        returnValue = F("Am Stöbersberg");
        break;
    }
    case 31750:
    {
        returnValue = F("Am Stöcke");
        break;
    }
    case 31751:
    {
        returnValue = F("Am Stöckenberg");
        break;
    }
    case 31752:
    {
        returnValue = F("Am Stöckenhof");
        break;
    }
    case 31753:
    {
        returnValue = F("Am Stöckfeld");
        break;
    }
    case 31754:
    {
        returnValue = F("Am Stöckig");
        break;
    }
    case 31755:
    {
        returnValue = F("Am Stöckl");
        break;
    }
    case 31756:
    {
        returnValue = F("Am Stöcklberg");
        break;
    }
    case 31757:
    {
        returnValue = F("Am Stöckle");
        break;
    }
    case 31758:
    {
        returnValue = F("Am Stöcklein");
        break;
    }
    case 31759:
    {
        returnValue = F("Am Stöcklrain");
        break;
    }
    case 31760:
    {
        returnValue = F("Am Stöckofen");
        break;
    }
    case 31761:
    {
        returnValue = F("Am Stöckweg");
        break;
    }
    case 31762:
    {
        returnValue = F("Am Stödtener Weg");
        break;
    }
    case 31763:
    {
        returnValue = F("Am Stöffenkamp");
        break;
    }
    case 31764:
    {
        returnValue = F("Am Stögnfeld");
        break;
    }
    case 31765:
    {
        returnValue = F("Am Stöhnebrink");
        break;
    }
    case 31766:
    {
        returnValue = F("Am Stöhr");
        break;
    }
    case 31767:
    {
        returnValue = F("Am Stöhrenberg");
        break;
    }
    case 31768:
    {
        returnValue = F("Am Stömpgen");
        break;
    }
    case 31769:
    {
        returnValue = F("Am Störbogen");
        break;
    }
    case 31770:
    {
        returnValue = F("Am Störchelberg");
        break;
    }
    case 31771:
    {
        returnValue = F("Am Störkanal");
        break;
    }
    case 31772:
    {
        returnValue = F("Am Störlein");
        break;
    }
    case 31773:
    {
        returnValue = F("Am Störtal");
        break;
    }
    case 31774:
    {
        returnValue = F("Am Stöttenfeld");
        break;
    }
    case 31775:
    {
        returnValue = F("Am Stöwenhahn");
        break;
    }
    case 31776:
    {
        returnValue = F("Am Stößbach");
        break;
    }
    case 31777:
    {
        returnValue = F("Am Stüb");
        break;
    }
    case 31778:
    {
        returnValue = F("Am Stübacher Berg");
        break;
    }
    case 31779:
    {
        returnValue = F("Am Stübbenweg");
        break;
    }
    case 31780:
    {
        returnValue = F("Am Stübchenstück");
        break;
    }
    case 31781:
    {
        returnValue = F("Am Stübel");
        break;
    }
    case 31782:
    {
        returnValue = F("Am Stüberg");
        break;
    }
    case 31783:
    {
        returnValue = F("Am Stück");
        break;
    }
    case 31784:
    {
        returnValue = F("Am Stückberg");
        break;
    }
    case 31785:
    {
        returnValue = F("Am Stückelberg");
        break;
    }
    case 31786:
    {
        returnValue = F("Am Stückelgarten");
        break;
    }
    case 31787:
    {
        returnValue = F("Am Stückermersch");
        break;
    }
    case 31788:
    {
        returnValue = F("Am Stücklesberg");
        break;
    }
    case 31789:
    {
        returnValue = F("Am Stüh");
        break;
    }
    case 31790:
    {
        returnValue = F("Am Stühberg");
        break;
    }
    case 31791:
    {
        returnValue = F("Am Stühbusch");
        break;
    }
    case 31792:
    {
        returnValue = F("Am Stühkamp");
        break;
    }
    case 31793:
    {
        returnValue = F("Am Stümpel");
        break;
    }
    case 31794:
    {
        returnValue = F("Am Stümpflein");
        break;
    }
    case 31795:
    {
        returnValue = F("Am Stürzbach");
        break;
    }
    case 31796:
    {
        returnValue = F("Am Stürzel");
        break;
    }
    case 31797:
    {
        returnValue = F("Am Stürzenberg");
        break;
    }
    case 31798:
    {
        returnValue = F("Am Stüssgeshof");
        break;
    }
    case 31799:
    {
        returnValue = F("Am Stüting");
        break;
    }
    case 31800:
    {
        returnValue = F("Am Stützel");
        break;
    }
    case 31801:
    {
        returnValue = F("Am Stützelbaum");
        break;
    }
    case 31802:
    {
        returnValue = F("Am Stützle");
        break;
    }
    case 31803:
    {
        returnValue = F("Am Stützpunkt");
        break;
    }
    case 31804:
    {
        returnValue = F("Am Stützweg");
        break;
    }
    case 31805:
    {
        returnValue = F("Am Suckower Graben");
        break;
    }
    case 31806:
    {
        returnValue = F("Am Sudfelde");
        break;
    }
    case 31807:
    {
        returnValue = F("Am Sudhaus");
        break;
    }
    case 31808:
    {
        returnValue = F("Am Sudheimer Weg");
        break;
    }
    case 31809:
    {
        returnValue = F("Am Sudhof");
        break;
    }
    case 31810:
    {
        returnValue = F("Am Sufferloher Weiher");
        break;
    }
    case 31811:
    {
        returnValue = F("Am Suhl");
        break;
    }
    case 31812:
    {
        returnValue = F("Am Suhrenberg");
        break;
    }
    case 31813:
    {
        returnValue = F("Am Suhrenhof");
        break;
    }
    case 31814:
    {
        returnValue = F("Am Suhrenkamp");
        break;
    }
    case 31815:
    {
        returnValue = F("Am Sulberg");
        break;
    }
    case 31816:
    {
        returnValue = F("Am Suletal");
        break;
    }
    case 31817:
    {
        returnValue = F("Am Sulhof");
        break;
    }
    case 31818:
    {
        returnValue = F("Am Sulzbach");
        break;
    }
    case 31819:
    {
        returnValue = F("Am Sulzbacher Pfad");
        break;
    }
    case 31820:
    {
        returnValue = F("Am Sulzberg");
        break;
    }
    case 31821:
    {
        returnValue = F("Am Sulzbogen");
        break;
    }
    case 31822:
    {
        returnValue = F("Am Sulzental");
        break;
    }
    case 31823:
    {
        returnValue = F("Am Sulzfeld");
        break;
    }
    case 31824:
    {
        returnValue = F("Am Sulzfelder Weg");
        break;
    }
    case 31825:
    {
        returnValue = F("Am Sulzgraben");
        break;
    }
    case 31826:
    {
        returnValue = F("Am Sulzheimer Pfad");
        break;
    }
    case 31827:
    {
        returnValue = F("Am Sulzrain");
        break;
    }
    case 31828:
    {
        returnValue = F("Am Sulzteich");
        break;
    }
    case 31829:
    {
        returnValue = F("Am Sumpf");
        break;
    }
    case 31830:
    {
        returnValue = F("Am Sumpfbach");
        break;
    }
    case 31831:
    {
        returnValue = F("Am Sumpfigen Wege");
        break;
    }
    case 31832:
    {
        returnValue = F("Am Sumpfkamp");
        break;
    }
    case 31833:
    {
        returnValue = F("Am Sumpfsee");
        break;
    }
    case 31834:
    {
        returnValue = F("Am Sund");
        break;
    }
    case 31835:
    {
        returnValue = F("Am Sunderbach");
        break;
    }
    case 31836:
    {
        returnValue = F("Am Sunderkamp");
        break;
    }
    case 31837:
    {
        returnValue = F("Am Sundern");
        break;
    }
    case 31838:
    {
        returnValue = F("Am Sunthauser Weg");
        break;
    }
    case 31839:
    {
        returnValue = F("Am Surbach");
        break;
    }
    case 31840:
    {
        returnValue = F("Am Surbroock");
        break;
    }
    case 31841:
    {
        returnValue = F("Am Susanna Kreuz");
        break;
    }
    case 31842:
    {
        returnValue = F("Am Susewind");
        break;
    }
    case 31843:
    {
        returnValue = F("Am Sutumer Graben");
        break;
    }
    case 31844:
    {
        returnValue = F("Am Swistbach");
        break;
    }
    case 31845:
    {
        returnValue = F("Am Swisterberg");
        break;
    }
    case 31846:
    {
        returnValue = F("Am Sybillenstein");
        break;
    }
    case 31847:
    {
        returnValue = F("Am Säbel");
        break;
    }
    case 31848:
    {
        returnValue = F("Am Sächslesberg");
        break;
    }
    case 31849:
    {
        returnValue = F("Am Säganger");
        break;
    }
    case 31850:
    {
        returnValue = F("Am Sägbach");
        break;
    }
    case 31851:
    {
        returnValue = F("Am Sägberg");
        break;
    }
    case 31852:
    {
        returnValue = F("Am Sägbuck");
        break;
    }
    case 31853:
    {
        returnValue = F("Am Sägebach");
        break;
    }
    case 31854:
    {
        returnValue = F("Am Sägebauer");
        break;
    }
    case 31855:
    {
        returnValue = F("Am Sägenberg");
        break;
    }
    case 31856:
    {
        returnValue = F("Am Sägeplatz");
        break;
    }
    case 31857:
    {
        returnValue = F("Am Sägerbach");
        break;
    }
    case 31858:
    {
        returnValue = F("Am Sägerhof");
        break;
    }
    case 31859:
    {
        returnValue = F("Am Sägersbuck");
        break;
    }
    case 31860:
    {
        returnValue = F("Am Sägewasen");
        break;
    }
    case 31861:
    {
        returnValue = F("Am Sägewerk");
        break;
    }
    case 31862:
    {
        returnValue = F("Am Sägfeld");
        break;
    }
    case 31863:
    {
        returnValue = F("Am Säggraben");
        break;
    }
    case 31864:
    {
        returnValue = F("Am Sägmühlweiher");
        break;
    }
    case 31865:
    {
        returnValue = F("Am Sägplatz");
        break;
    }
    case 31866:
    {
        returnValue = F("Am Sägweiher");
        break;
    }
    case 31867:
    {
        returnValue = F("Am Sägwerk");
        break;
    }
    case 31868:
    {
        returnValue = F("Am Sämig");
        break;
    }
    case 31869:
    {
        returnValue = F("Am Sändchen");
        break;
    }
    case 31870:
    {
        returnValue = F("Am Sängerheim");
        break;
    }
    case 31871:
    {
        returnValue = F("Am Sängerling");
        break;
    }
    case 31872:
    {
        returnValue = F("Am Sängerpark");
        break;
    }
    case 31873:
    {
        returnValue = F("Am Sängerplatz");
        break;
    }
    case 31874:
    {
        returnValue = F("Am Sänges");
        break;
    }
    case 31875:
    {
        returnValue = F("Am Säubach");
        break;
    }
    case 31876:
    {
        returnValue = F("Am Säuer");
        break;
    }
    case 31877:
    {
        returnValue = F("Am Säulnhafner");
        break;
    }
    case 31878:
    {
        returnValue = F("Am Säumarkt");
        break;
    }
    case 31879:
    {
        returnValue = F("Am Säumerberg");
        break;
    }
    case 31880:
    {
        returnValue = F("Am Säumertor");
        break;
    }
    case 31881:
    {
        returnValue = F("Am Söhlberg");
        break;
    }
    case 31882:
    {
        returnValue = F("Am Söhnholz");
        break;
    }
    case 31883:
    {
        returnValue = F("Am Söhreberg");
        break;
    }
    case 31884:
    {
        returnValue = F("Am Söhrig");
        break;
    }
    case 31885:
    {
        returnValue = F("Am Sölber Berg");
        break;
    }
    case 31886:
    {
        returnValue = F("Am Sölchen");
        break;
    }
    case 31887:
    {
        returnValue = F("Am Söldnerfeld");
        break;
    }
    case 31888:
    {
        returnValue = F("Am Söldnermoos");
        break;
    }
    case 31889:
    {
        returnValue = F("Am Sölken");
        break;
    }
    case 31890:
    {
        returnValue = F("Am Söller");
        break;
    }
    case 31891:
    {
        returnValue = F("Am Söllgraben");
        break;
    }
    case 31892:
    {
        returnValue = F("Am Söllinger");
        break;
    }
    case 31893:
    {
        returnValue = F("Am Sönsberg");
        break;
    }
    case 31894:
    {
        returnValue = F("Am Sör");
        break;
    }
    case 31895:
    {
        returnValue = F("Am Sörgenlocher Weg");
        break;
    }
    case 31896:
    {
        returnValue = F("Am Söterberg");
        break;
    }
    case 31897:
    {
        returnValue = F("Am Südacker");
        break;
    }
    case 31898:
    {
        returnValue = F("Am Südbach");
        break;
    }
    case 31899:
    {
        returnValue = F("Am Südbahnhof");
        break;
    }
    case 31900:
    {
        returnValue = F("Am Südberg");
        break;
    }
    case 31901:
    {
        returnValue = F("Am Südblick");
        break;
    }
    case 31902:
    {
        returnValue = F("Am Südbusch");
        break;
    }
    case 31903:
    {
        returnValue = F("Am Südend");
        break;
    }
    case 31904:
    {
        returnValue = F("Am Süderfeld");
        break;
    }
    case 31905:
    {
        returnValue = F("Am Süderholz");
        break;
    }
    case 31906:
    {
        returnValue = F("Am Südersoll");
        break;
    }
    case 31907:
    {
        returnValue = F("Am Südertief");
        break;
    }
    case 31908:
    {
        returnValue = F("Am Südesch");
        break;
    }
    case 31909:
    {
        returnValue = F("Am Südfeld");
        break;
    }
    case 31910:
    {
        returnValue = F("Am Südfelde");
        break;
    }
    case 31911:
    {
        returnValue = F("Am Südgraben");
        break;
    }
    case 31912:
    {
        returnValue = F("Am Südhafen");
        break;
    }
    case 31913:
    {
        returnValue = F("Am Südhang");
        break;
    }
    case 31914:
    {
        returnValue = F("Am Südholz");
        break;
    }
    case 31915:
    {
        returnValue = F("Am Südhorn");
        break;
    }
    case 31916:
    {
        returnValue = F("Am Südkamp");
        break;
    }
    case 31917:
    {
        returnValue = F("Am Südkreisel");
        break;
    }
    case 31918:
    {
        returnValue = F("Am Südlichen Burgfrieden");
        break;
    }
    case 31919:
    {
        returnValue = F("Am Südpark");
        break;
    }
    case 31920:
    {
        returnValue = F("Am Südrand");
        break;
    }
    case 31921:
    {
        returnValue = F("Am Südring");
        break;
    }
    case 31922:
    {
        returnValue = F("Am Südsee");
        break;
    }
    case 31923:
    {
        returnValue = F("Am Südtor");
        break;
    }
    case 31924:
    {
        returnValue = F("Am Südufer");
        break;
    }
    case 31925:
    {
        returnValue = F("Am Südwald");
        break;
    }
    case 31926:
    {
        returnValue = F("Am Südwall");
        break;
    }
    case 31927:
    {
        returnValue = F("Am Südwerk");
        break;
    }
    case 31928:
    {
        returnValue = F("Am Südwesthang");
        break;
    }
    case 31929:
    {
        returnValue = F("Am Sühd Wohl");
        break;
    }
    case 31930:
    {
        returnValue = F("Am Süllbach");
        break;
    }
    case 31931:
    {
        returnValue = F("Am Süllberg");
        break;
    }
    case 31932:
    {
        returnValue = F("Am Sültenberg");
        break;
    }
    case 31933:
    {
        returnValue = F("Am Sülzbach");
        break;
    }
    case 31934:
    {
        returnValue = F("Am Sülzberg");
        break;
    }
    case 31935:
    {
        returnValue = F("Am Sülzbruch");
        break;
    }
    case 31936:
    {
        returnValue = F("Am Sülzegraben");
        break;
    }
    case 31937:
    {
        returnValue = F("Am Sülzehang");
        break;
    }
    case 31938:
    {
        returnValue = F("Am Sülzenbach");
        break;
    }
    case 31939:
    {
        returnValue = F("Am Sülzenberg");
        break;
    }
    case 31940:
    {
        returnValue = F("Am Sülzenbrückener Wege");
        break;
    }
    case 31941:
    {
        returnValue = F("Am Sülzer Berg");
        break;
    }
    case 31942:
    {
        returnValue = F("Am Sümpborn");
        break;
    }
    case 31943:
    {
        returnValue = F("Am Sünbarg");
        break;
    }
    case 31944:
    {
        returnValue = F("Am Sünderbek");
        break;
    }
    case 31945:
    {
        returnValue = F("Am Sünderberg");
        break;
    }
    case 31946:
    {
        returnValue = F("Am Sünderland");
        break;
    }
    case 31947:
    {
        returnValue = F("Am Sündersweg");
        break;
    }
    case 31948:
    {
        returnValue = F("Am Sünhöfel");
        break;
    }
    case 31949:
    {
        returnValue = F("Am Sünnekamp");
        break;
    }
    case 31950:
    {
        returnValue = F("Am Sünnenkringel");
        break;
    }
    case 31951:
    {
        returnValue = F("Am Süptitzer Weg");
        break;
    }
    case 31952:
    {
        returnValue = F("Am Sürchen");
        break;
    }
    case 31953:
    {
        returnValue = F("Am Sürkenstein");
        break;
    }
    case 31954:
    {
        returnValue = F("Am Süselerbaum");
        break;
    }
    case 31955:
    {
        returnValue = F("Am Süstedter Bach");
        break;
    }
    case 31956:
    {
        returnValue = F("Am Süstedter Holz");
        break;
    }
    case 31957:
    {
        returnValue = F("Am Sütter");
        break;
    }
    case 31958:
    {
        returnValue = F("Am Süßbach");
        break;
    }
    case 31959:
    {
        returnValue = F("Am Süßberg");
        break;
    }
    case 31960:
    {
        returnValue = F("Am Süßen Winkel");
        break;
    }
    case 31961:
    {
        returnValue = F("Am Süßling");
        break;
    }
    case 31962:
    {
        returnValue = F("Am TV-Platz");
        break;
    }
    case 31963:
    {
        returnValue = F("Am Tabakfeld");
        break;
    }
    case 31964:
    {
        returnValue = F("Am Tabakschopf");
        break;
    }
    case 31965:
    {
        returnValue = F("Am Tabakschuppen");
        break;
    }
    case 31966:
    {
        returnValue = F("Am Tabakskamp");
        break;
    }
    case 31967:
    {
        returnValue = F("Am Tafelacker");
        break;
    }
    case 31968:
    {
        returnValue = F("Am Tafelbrunnen");
        break;
    }
    case 31969:
    {
        returnValue = F("Am Tafelkreuz");
        break;
    }
    case 31970:
    {
        returnValue = F("Am Tafelstein");
        break;
    }
    case 31971:
    {
        returnValue = F("Am Taffingsweiher");
        break;
    }
    case 31972:
    {
        returnValue = F("Am Tagbau");
        break;
    }
    case 31973:
    {
        returnValue = F("Am Tagebau");
        break;
    }
    case 31974:
    {
        returnValue = F("Am Tageberg");
        break;
    }
    case 31975:
    {
        returnValue = F("Am Tagesbau");
        break;
    }
    case 31976:
    {
        returnValue = F("Am Taglilienfeld");
        break;
    }
    case 31977:
    {
        returnValue = F("Am Tairnbacher Weg");
        break;
    }
    case 31978:
    {
        returnValue = F("Am Takelmast");
        break;
    }
    case 31979:
    {
        returnValue = F("Am Tal");
        break;
    }
    case 31980:
    {
        returnValue = F("Am Talacker");
        break;
    }
    case 31981:
    {
        returnValue = F("Am Talbach");
        break;
    }
    case 31982:
    {
        returnValue = F("Am Talberg");
        break;
    }
    case 31983:
    {
        returnValue = F("Am Talblick");
        break;
    }
    case 31984:
    {
        returnValue = F("Am Talbuck");
        break;
    }
    case 31985:
    {
        returnValue = F("Am Talfeld");
        break;
    }
    case 31986:
    {
        returnValue = F("Am Talgraben");
        break;
    }
    case 31987:
    {
        returnValue = F("Am Talhang");
        break;
    }
    case 31988:
    {
        returnValue = F("Am Talhaus");
        break;
    }
    case 31989:
    {
        returnValue = F("Am Talkampe");
        break;
    }
    case 31990:
    {
        returnValue = F("Am Talkenberger Hof");
        break;
    }
    case 31991:
    {
        returnValue = F("Am Talschlag");
        break;
    }
    case 31992:
    {
        returnValue = F("Am Talstücksbach");
        break;
    }
    case 31993:
    {
        returnValue = F("Am Talweg");
        break;
    }
    case 31994:
    {
        returnValue = F("Am Talweiher");
        break;
    }
    case 31995:
    {
        returnValue = F("Am Tambor");
        break;
    }
    case 31996:
    {
        returnValue = F("Am Tambourwäldchen");
        break;
    }
    case 31997:
    {
        returnValue = F("Am Tamlingsberg");
        break;
    }
    case 31998:
    {
        returnValue = F("Am Tammrath");
        break;
    }
    case 31999:
    {
        returnValue = F("Am Tampel");
        break;
    }
    case 32000:
    {
        returnValue = F("Am Tanganger");
        break;
    }
    case 32001:
    {
        returnValue = F("Am Tangen");
        break;
    }
    case 32002:
    {
        returnValue = F("Am Tanger");
        break;
    }
    case 32003:
    {
        returnValue = F("Am Tangstedter Forst");
        break;
    }
    case 32004:
    {
        returnValue = F("Am Tankholzplatz");
        break;
    }
    case 32005:
    {
        returnValue = F("Am Tann");
        break;
    }
    case 32006:
    {
        returnValue = F("Am Tannach");
        break;
    }
    case 32007:
    {
        returnValue = F("Am Tannacker");
        break;
    }
    case 32008:
    {
        returnValue = F("Am Tannberg");
        break;
    }
    case 32009:
    {
        returnValue = F("Am Tanndorfer Bahnhof");
        break;
    }
    case 32010:
    {
        returnValue = F("Am Tannegert");
        break;
    }
    case 32011:
    {
        returnValue = F("Am Tannen-Kamp");
        break;
    }
    case 32012:
    {
        returnValue = F("Am Tannenbaum");
        break;
    }
    case 32013:
    {
        returnValue = F("Am Tannenberg");
        break;
    }
    case 32014:
    {
        returnValue = F("Am Tannenblick");
        break;
    }
    case 32015:
    {
        returnValue = F("Am Tannenbrink");
        break;
    }
    case 32016:
    {
        returnValue = F("Am Tannenbuckel");
        break;
    }
    case 32017:
    {
        returnValue = F("Am Tannenbusch");
        break;
    }
    case 32018:
    {
        returnValue = F("Am Tannenbühl");
        break;
    }
    case 32019:
    {
        returnValue = F("Am Tanneneck");
        break;
    }
    case 32020:
    {
        returnValue = F("Am Tannenfeld");
        break;
    }
    case 32021:
    {
        returnValue = F("Am Tannenforst");
        break;
    }
    case 32022:
    {
        returnValue = F("Am Tannengarten");
        break;
    }
    case 32023:
    {
        returnValue = F("Am Tannengrund");
        break;
    }
    case 32024:
    {
        returnValue = F("Am Tannenhain");
        break;
    }
    case 32025:
    {
        returnValue = F("Am Tannenhang");
        break;
    }
    case 32026:
    {
        returnValue = F("Am Tannenhart");
        break;
    }
    case 32027:
    {
        returnValue = F("Am Tannenhof");
        break;
    }
    case 32028:
    {
        returnValue = F("Am Tannenholz");
        break;
    }
    case 32029:
    {
        returnValue = F("Am Tannenhügel");
        break;
    }
    case 32030:
    {
        returnValue = F("Am Tannenkamp");
        break;
    }
    case 32031:
    {
        returnValue = F("Am Tannenkopf");
        break;
    }
    case 32032:
    {
        returnValue = F("Am Tannenkopp");
        break;
    }
    case 32033:
    {
        returnValue = F("Am Tannenmoor");
        break;
    }
    case 32034:
    {
        returnValue = F("Am Tannenrain");
        break;
    }
    case 32035:
    {
        returnValue = F("Am Tannenschlag");
        break;
    }
    case 32036:
    {
        returnValue = F("Am Tannenstumpf");
        break;
    }
    case 32037:
    {
        returnValue = F("Am Tannenturm");
        break;
    }
    case 32038:
    {
        returnValue = F("Am Tannenwald");
        break;
    }
    case 32039:
    {
        returnValue = F("Am Tannenweg");
        break;
    }
    case 32040:
    {
        returnValue = F("Am Tannenwäldchen");
        break;
    }
    case 32041:
    {
        returnValue = F("Am Tanner Holz");
        break;
    }
    case 32042:
    {
        returnValue = F("Am Tannersberg");
        break;
    }
    case 32043:
    {
        returnValue = F("Am Tannewald");
        break;
    }
    case 32044:
    {
        returnValue = F("Am Tannhof");
        break;
    }
    case 32045:
    {
        returnValue = F("Am Tannicht");
        break;
    }
    case 32046:
    {
        returnValue = F("Am Tannig");
        break;
    }
    case 32047:
    {
        returnValue = F("Am Tannle");
        break;
    }
    case 32048:
    {
        returnValue = F("Am Tannrähm");
        break;
    }
    case 32049:
    {
        returnValue = F("Am Tannscharn");
        break;
    }
    case 32050:
    {
        returnValue = F("Am Tannwald");
        break;
    }
    case 32051:
    {
        returnValue = F("Am Tanzbaum");
        break;
    }
    case 32052:
    {
        returnValue = F("Am Tanzberg");
        break;
    }
    case 32053:
    {
        returnValue = F("Am Tanzeplatz");
        break;
    }
    case 32054:
    {
        returnValue = F("Am Tanzfleckl");
        break;
    }
    case 32055:
    {
        returnValue = F("Am Tanzplatz");
        break;
    }
    case 32056:
    {
        returnValue = F("Am Tapp");
        break;
    }
    case 32057:
    {
        returnValue = F("Am Tarm");
        break;
    }
    case 32058:
    {
        returnValue = F("Am Tarpenufer");
        break;
    }
    case 32059:
    {
        returnValue = F("Am Taschenbaum");
        break;
    }
    case 32060:
    {
        returnValue = F("Am Taschenberg");
        break;
    }
    case 32061:
    {
        returnValue = F("Am Taschinger Berg");
        break;
    }
    case 32062:
    {
        returnValue = F("Am Taterberg");
        break;
    }
    case 32063:
    {
        returnValue = F("Am Taterhof");
        break;
    }
    case 32064:
    {
        returnValue = F("Am Taterkrug");
        break;
    }
    case 32065:
    {
        returnValue = F("Am Tau");
        break;
    }
    case 32066:
    {
        returnValue = F("Am Taubacher Weg");
        break;
    }
    case 32067:
    {
        returnValue = F("Am Taubenacker");
        break;
    }
    case 32068:
    {
        returnValue = F("Am Taubenbaum");
        break;
    }
    case 32069:
    {
        returnValue = F("Am Taubenberg");
        break;
    }
    case 32070:
    {
        returnValue = F("Am Taubenborn");
        break;
    }
    case 32071:
    {
        returnValue = F("Am Taubenfeld");
        break;
    }
    case 32072:
    {
        returnValue = F("Am Taubengrund");
        break;
    }
    case 32073:
    {
        returnValue = F("Am Taubenherd");
        break;
    }
    case 32074:
    {
        returnValue = F("Am Taubenhorst");
        break;
    }
    case 32075:
    {
        returnValue = F("Am Taubenhübel");
        break;
    }
    case 32076:
    {
        returnValue = F("Am Taubenhügel");
        break;
    }
    case 32077:
    {
        returnValue = F("Am Taubenloch");
        break;
    }
    case 32078:
    {
        returnValue = F("Am Taubenmarkt");
        break;
    }
    case 32079:
    {
        returnValue = F("Am Taubenrain");
        break;
    }
    case 32080:
    {
        returnValue = F("Am Taubenried");
        break;
    }
    case 32081:
    {
        returnValue = F("Am Taubenring");
        break;
    }
    case 32082:
    {
        returnValue = F("Am Taubenschlag");
        break;
    }
    case 32083:
    {
        returnValue = F("Am Taubentor");
        break;
    }
    case 32084:
    {
        returnValue = F("Am Tauberbach");
        break;
    }
    case 32085:
    {
        returnValue = F("Am Tauberberg");
        break;
    }
    case 32086:
    {
        returnValue = F("Am Taubergrund");
        break;
    }
    case 32087:
    {
        returnValue = F("Am Taubersteg");
        break;
    }
    case 32088:
    {
        returnValue = F("Am Taubhaus");
        break;
    }
    case 32089:
    {
        returnValue = F("Am Tauenberg");
        break;
    }
    case 32090:
    {
        returnValue = F("Am Taufachmoos");
        break;
    }
    case 32091:
    {
        returnValue = F("Am Tauhübel");
        break;
    }
    case 32092:
    {
        returnValue = F("Am Taunusblick");
        break;
    }
    case 32093:
    {
        returnValue = F("Am Taurastein");
        break;
    }
    case 32094:
    {
        returnValue = F("Am Tauschberg");
        break;
    }
    case 32095:
    {
        returnValue = F("Am Tauschenberg");
        break;
    }
    case 32096:
    {
        returnValue = F("Am Tauschlag");
        break;
    }
    case 32097:
    {
        returnValue = F("Am Tauschwitzer Bach");
        break;
    }
    case 32098:
    {
        returnValue = F("Am Techentiner Damm");
        break;
    }
    case 32099:
    {
        returnValue = F("Am Technikstützpunkt");
        break;
    }
    case 32100:
    {
        returnValue = F("Am Technikum");
        break;
    }
    case 32101:
    {
        returnValue = F("Am Technologiepark");
        break;
    }
    case 32102:
    {
        returnValue = F("Am Teebaum");
        break;
    }
    case 32103:
    {
        returnValue = F("Am Teeberg");
        break;
    }
    case 32104:
    {
        returnValue = F("Am Teegarten");
        break;
    }
    case 32105:
    {
        returnValue = F("Am Teehaus");
        break;
    }
    case 32106:
    {
        returnValue = F("Am Teenberg");
        break;
    }
    case 32107:
    {
        returnValue = F("Am Teepenhof");
        break;
    }
    case 32108:
    {
        returnValue = F("Am Teepohl");
        break;
    }
    case 32109:
    {
        returnValue = F("Am Teerhaus");
        break;
    }
    case 32110:
    {
        returnValue = F("Am Teetzensee");
        break;
    }
    case 32111:
    {
        returnValue = F("Am Tegauer Weg");
        break;
    }
    case 32112:
    {
        returnValue = F("Am Tegel");
        break;
    }
    case 32113:
    {
        returnValue = F("Am Tegelberg");
        break;
    }
    case 32114:
    {
        returnValue = F("Am Tegelbusch");
        break;
    }
    case 32115:
    {
        returnValue = F("Am Tegelkamp");
        break;
    }
    case 32116:
    {
        returnValue = F("Am Tegelland");
        break;
    }
    case 32117:
    {
        returnValue = F("Am Teich");
        break;
    }
    case 32118:
    {
        returnValue = F("Am Teichacker");
        break;
    }
    case 32119:
    {
        returnValue = F("Am Teichberg");
        break;
    }
    case 32120:
    {
        returnValue = F("Am Teichdamm");
        break;
    }
    case 32121:
    {
        returnValue = F("Am Teiche");
        break;
    }
    case 32122:
    {
        returnValue = F("Am Teichelrangen");
        break;
    }
    case 32123:
    {
        returnValue = F("Am Teichfeld");
        break;
    }
    case 32124:
    {
        returnValue = F("Am Teichgarten");
        break;
    }
    case 32125:
    {
        returnValue = F("Am Teichgehege");
        break;
    }
    case 32126:
    {
        returnValue = F("Am Teichgraben");
        break;
    }
    case 32127:
    {
        returnValue = F("Am Teichhof");
        break;
    }
    case 32128:
    {
        returnValue = F("Am Teichkamp");
        break;
    }
    case 32129:
    {
        returnValue = F("Am Teichkopf");
        break;
    }
    case 32130:
    {
        returnValue = F("Am Teichlande");
        break;
    }
    case 32131:
    {
        returnValue = F("Am Teichplatz");
        break;
    }
    case 32132:
    {
        returnValue = F("Am Teichrasen");
        break;
    }
    case 32133:
    {
        returnValue = F("Am Teichwall");
        break;
    }
    case 32134:
    {
        returnValue = F("Am Teichweg");
        break;
    }
    case 32135:
    {
        returnValue = F("Am Teichwege");
        break;
    }
    case 32136:
    {
        returnValue = F("Am Teigelkamp");
        break;
    }
    case 32137:
    {
        returnValue = F("Am Teigelofen");
        break;
    }
    case 32138:
    {
        returnValue = F("Am Teil");
        break;
    }
    case 32139:
    {
        returnValue = F("Am Teilacker");
        break;
    }
    case 32140:
    {
        returnValue = F("Am Teilberg");
        break;
    }
    case 32141:
    {
        returnValue = F("Am Teilland");
        break;
    }
    case 32142:
    {
        returnValue = F("Am Teilsrain");
        break;
    }
    case 32143:
    {
        returnValue = F("Am Teilweg");
        break;
    }
    case 32144:
    {
        returnValue = F("Am Teimer");
        break;
    }
    case 32145:
    {
        returnValue = F("Am Telegraf");
        break;
    }
    case 32146:
    {
        returnValue = F("Am Telegraphenberg");
        break;
    }
    case 32147:
    {
        returnValue = F("Am Telgen");
        break;
    }
    case 32148:
    {
        returnValue = F("Am Telgenbusch");
        break;
    }
    case 32149:
    {
        returnValue = F("Am Telgengrund");
        break;
    }
    case 32150:
    {
        returnValue = F("Am Telgenkamp");
        break;
    }
    case 32151:
    {
        returnValue = F("Am Tellkamp");
        break;
    }
    case 32152:
    {
        returnValue = F("Am Telt");
        break;
    }
    case 32153:
    {
        returnValue = F("Am Teltowkanal");
        break;
    }
    case 32154:
    {
        returnValue = F("Am Tempel");
        break;
    }
    case 32155:
    {
        returnValue = F("Am Tempelberg");
        break;
    }
    case 32156:
    {
        returnValue = F("Am Tempeler Bach");
        break;
    }
    case 32157:
    {
        returnValue = F("Am Tempelgarten");
        break;
    }
    case 32158:
    {
        returnValue = F("Am Tempelhain");
        break;
    }
    case 32159:
    {
        returnValue = F("Am Tempelhamm");
        break;
    }
    case 32160:
    {
        returnValue = F("Am Tempelhof");
        break;
    }
    case 32161:
    {
        returnValue = F("Am Tempelkamp");
        break;
    }
    case 32162:
    {
        returnValue = F("Am Tempelsbuckel");
        break;
    }
    case 32163:
    {
        returnValue = F("Am Tempelwald");
        break;
    }
    case 32164:
    {
        returnValue = F("Am Tennenbach");
        break;
    }
    case 32165:
    {
        returnValue = F("Am Tennig");
        break;
    }
    case 32166:
    {
        returnValue = F("Am Tennispark");
        break;
    }
    case 32167:
    {
        returnValue = F("Am Tennisplatz");
        break;
    }
    case 32168:
    {
        returnValue = F("Am Ternscher See");
        break;
    }
    case 32169:
    {
        returnValue = F("Am Teschling");
        break;
    }
    case 32170:
    {
        returnValue = F("Am Tettenbach");
        break;
    }
    case 32171:
    {
        returnValue = F("Am Teuchelbach");
        break;
    }
    case 32172:
    {
        returnValue = F("Am Teufelsberg");
        break;
    }
    case 32173:
    {
        returnValue = F("Am Teufelsbett");
        break;
    }
    case 32174:
    {
        returnValue = F("Am Teufelsbruch");
        break;
    }
    case 32175:
    {
        returnValue = F("Am Teufelsgraben");
        break;
    }
    case 32176:
    {
        returnValue = F("Am Teufelsloch");
        break;
    }
    case 32177:
    {
        returnValue = F("Am Teufelsmoor");
        break;
    }
    case 32178:
    {
        returnValue = F("Am Teufelssee");
        break;
    }
    case 32179:
    {
        returnValue = F("Am Teufelstein");
        break;
    }
    case 32180:
    {
        returnValue = F("Am Teuschnitzer Berg");
        break;
    }
    case 32181:
    {
        returnValue = F("Am Teutohang");
        break;
    }
    case 32182:
    {
        returnValue = F("Am Texas");
        break;
    }
    case 32183:
    {
        returnValue = F("Am Thaa");
        break;
    }
    case 32184:
    {
        returnValue = F("Am Thalaubach");
        break;
    }
    case 32185:
    {
        returnValue = F("Am Thalbach");
        break;
    }
    case 32186:
    {
        returnValue = F("Am Thalberg");
        break;
    }
    case 32187:
    {
        returnValue = F("Am Thalborner Tore");
        break;
    }
    case 32188:
    {
        returnValue = F("Am Thaler Bach");
        break;
    }
    case 32189:
    {
        returnValue = F("Am Thalersberg");
        break;
    }
    case 32190:
    {
        returnValue = F("Am Thalgut");
        break;
    }
    case 32191:
    {
        returnValue = F("Am Thalhoferweg");
        break;
    }
    case 32192:
    {
        returnValue = F("Am Thannberg");
        break;
    }
    case 32193:
    {
        returnValue = F("Am Thannenmais");
        break;
    }
    case 32194:
    {
        returnValue = F("Am Thannerfeld");
        break;
    }
    case 32195:
    {
        returnValue = F("Am Thannetholz");
        break;
    }
    case 32196:
    {
        returnValue = F("Am Thannhauser Berg");
        break;
    }
    case 32197:
    {
        returnValue = F("Am Tharandter Wald");
        break;
    }
    case 32198:
    {
        returnValue = F("Am Thasberg");
        break;
    }
    case 32199:
    {
        returnValue = F("Am Theater");
        break;
    }
    case 32200:
    {
        returnValue = F("Am Theelbach");
        break;
    }
    case 32201:
    {
        returnValue = F("Am Theenser Anger");
        break;
    }
    case 32202:
    {
        returnValue = F("Am Theinberg");
        break;
    }
    case 32203:
    {
        returnValue = F("Am Theisenacker");
        break;
    }
    case 32204:
    {
        returnValue = F("Am Theklaberg");
        break;
    }
    case 32205:
    {
        returnValue = F("Am Thelen Siefen");
        break;
    }
    case 32206:
    {
        returnValue = F("Am Theodorschacht");
        break;
    }
    case 32207:
    {
        returnValue = F("Am Theresenhof");
        break;
    }
    case 32208:
    {
        returnValue = F("Am Theresienbrunnen");
        break;
    }
    case 32209:
    {
        returnValue = F("Am Theresienstift");
        break;
    }
    case 32210:
    {
        returnValue = F("Am Thermalbad");
        break;
    }
    case 32211:
    {
        returnValue = F("Am Thermweg");
        break;
    }
    case 32212:
    {
        returnValue = F("Am Thesingbach");
        break;
    }
    case 32213:
    {
        returnValue = F("Am Thetkamp");
        break;
    }
    case 32214:
    {
        returnValue = F("Am Thie");
        break;
    }
    case 32215:
    {
        returnValue = F("Am Thieberg");
        break;
    }
    case 32216:
    {
        returnValue = F("Am Thiebogen");
        break;
    }
    case 32217:
    {
        returnValue = F("Am Thiegraben");
        break;
    }
    case 32218:
    {
        returnValue = F("Am Thieleborn");
        break;
    }
    case 32219:
    {
        returnValue = F("Am Thieleshof");
        break;
    }
    case 32220:
    {
        returnValue = F("Am Thielwoog");
        break;
    }
    case 32221:
    {
        returnValue = F("Am Thiemendorfer Hang");
        break;
    }
    case 32222:
    {
        returnValue = F("Am Thiens Busch");
        break;
    }
    case 32223:
    {
        returnValue = F("Am Thieplatz");
        break;
    }
    case 32224:
    {
        returnValue = F("Am Thiergarten");
        break;
    }
    case 32225:
    {
        returnValue = F("Am Thieroldsholz");
        break;
    }
    case 32226:
    {
        returnValue = F("Am Thiersbach");
        break;
    }
    case 32227:
    {
        returnValue = F("Am Thiershof");
        break;
    }
    case 32228:
    {
        returnValue = F("Am Thiesenberg");
        break;
    }
    case 32229:
    {
        returnValue = F("Am Thigarten");
        break;
    }
    case 32230:
    {
        returnValue = F("Am Thing");
        break;
    }
    case 32231:
    {
        returnValue = F("Am Thingplatz");
        break;
    }
    case 32232:
    {
        returnValue = F("Am Thingstieg");
        break;
    }
    case 32233:
    {
        returnValue = F("Am Thomasberg");
        break;
    }
    case 32234:
    {
        returnValue = F("Am Thomasborn");
        break;
    }
    case 32235:
    {
        returnValue = F("Am Thomasteich");
        break;
    }
    case 32236:
    {
        returnValue = F("Am Thomberg");
        break;
    }
    case 32237:
    {
        returnValue = F("Am Thombreden");
        break;
    }
    case 32238:
    {
        returnValue = F("Am Thomelt Grund");
        break;
    }
    case 32239:
    {
        returnValue = F("Am Thonberg");
        break;
    }
    case 32240:
    {
        returnValue = F("Am Thongraben");
        break;
    }
    case 32241:
    {
        returnValue = F("Am Thonhausener Weg");
        break;
    }
    case 32242:
    {
        returnValue = F("Am Thonwerk");
        break;
    }
    case 32243:
    {
        returnValue = F("Am Thoracker");
        break;
    }
    case 32244:
    {
        returnValue = F("Am Thorenkamp");
        break;
    }
    case 32245:
    {
        returnValue = F("Am Thorgraben");
        break;
    }
    case 32246:
    {
        returnValue = F("Am Thormbeck");
        break;
    }
    case 32247:
    {
        returnValue = F("Am Thormählenpark");
        break;
    }
    case 32248:
    {
        returnValue = F("Am Thorsberg");
        break;
    }
    case 32249:
    {
        returnValue = F("Am Thorwengert");
        break;
    }
    case 32250:
    {
        returnValue = F("Am Throms Garten");
        break;
    }
    case 32251:
    {
        returnValue = F("Am Thronweg");
        break;
    }
    case 32252:
    {
        returnValue = F("Am Thumbach");
        break;
    }
    case 32253:
    {
        returnValue = F("Am Thurbruch");
        break;
    }
    case 32254:
    {
        returnValue = F("Am Thurmberg");
        break;
    }
    case 32255:
    {
        returnValue = F("Am Thurnbühl");
        break;
    }
    case 32256:
    {
        returnValue = F("Am Thy");
        break;
    }
    case 32257:
    {
        returnValue = F("Am Thymiansberge");
        break;
    }
    case 32258:
    {
        returnValue = F("Am Thälmannplatz");
        break;
    }
    case 32259:
    {
        returnValue = F("Am Thörlich");
        break;
    }
    case 32260:
    {
        returnValue = F("Am Thösbusch");
        break;
    }
    case 32261:
    {
        returnValue = F("Am Thümmelberg");
        break;
    }
    case 32262:
    {
        returnValue = F("Am Thümmlitz");
        break;
    }
    case 32263:
    {
        returnValue = F("Am Thürlein");
        break;
    }
    case 32264:
    {
        returnValue = F("Am Tiasbusch");
        break;
    }
    case 32265:
    {
        returnValue = F("Am Tichelkamp");
        break;
    }
    case 32266:
    {
        returnValue = F("Am Tichelwark");
        break;
    }
    case 32267:
    {
        returnValue = F("Am Tidehafen");
        break;
    }
    case 32268:
    {
        returnValue = F("Am Tie");
        break;
    }
    case 32269:
    {
        returnValue = F("Am Tiedeberg");
        break;
    }
    case 32270:
    {
        returnValue = F("Am Tief");
        break;
    }
    case 32271:
    {
        returnValue = F("Am Tiefen Born");
        break;
    }
    case 32272:
    {
        returnValue = F("Am Tiefen Graben");
        break;
    }
    case 32273:
    {
        returnValue = F("Am Tiefen Grund");
        break;
    }
    case 32274:
    {
        returnValue = F("Am Tiefen Moor");
        break;
    }
    case 32275:
    {
        returnValue = F("Am Tiefen See");
        break;
    }
    case 32276:
    {
        returnValue = F("Am Tiefen Steg");
        break;
    }
    case 32277:
    {
        returnValue = F("Am Tiefen Stein");
        break;
    }
    case 32278:
    {
        returnValue = F("Am Tiefen Tal");
        break;
    }
    case 32279:
    {
        returnValue = F("Am Tiefen Weg");
        break;
    }
    case 32280:
    {
        returnValue = F("Am Tiefenbach");
        break;
    }
    case 32281:
    {
        returnValue = F("Am Tiefenbruch");
        break;
    }
    case 32282:
    {
        returnValue = F("Am Tiefental");
        break;
    }
    case 32283:
    {
        returnValue = F("Am Tiefenthal");
        break;
    }
    case 32284:
    {
        returnValue = F("Am Tiefenweg");
        break;
    }
    case 32285:
    {
        returnValue = F("Am Tieferbach");
        break;
    }
    case 32286:
    {
        returnValue = F("Am Tiefwasseranleger");
        break;
    }
    case 32287:
    {
        returnValue = F("Am Tieg");
        break;
    }
    case 32288:
    {
        returnValue = F("Am Tielemannsort");
        break;
    }
    case 32289:
    {
        returnValue = F("Am Tierenbach");
        break;
    }
    case 32290:
    {
        returnValue = F("Am Tiergarten");
        break;
    }
    case 32291:
    {
        returnValue = F("Am Tiergehege");
        break;
    }
    case 32292:
    {
        returnValue = F("Am Tierheim");
        break;
    }
    case 32293:
    {
        returnValue = F("Am Tierpark");
        break;
    }
    case 32294:
    {
        returnValue = F("Am Tierpütz");
        break;
    }
    case 32295:
    {
        returnValue = F("Am Tierstein");
        break;
    }
    case 32296:
    {
        returnValue = F("Am Tietzbusch");
        break;
    }
    case 32297:
    {
        returnValue = F("Am Tigerberg");
        break;
    }
    case 32298:
    {
        returnValue = F("Am Tiggelhoff");
        break;
    }
    case 32299:
    {
        returnValue = F("Am Tillemaar");
        break;
    }
    case 32300:
    {
        returnValue = F("Am Tillgarten");
        break;
    }
    case 32301:
    {
        returnValue = F("Am Tilljak");
        break;
    }
    case 32302:
    {
        returnValue = F("Am Timeloh");
        break;
    }
    case 32303:
    {
        returnValue = F("Am Timmeloh");
        break;
    }
    case 32304:
    {
        returnValue = F("Am Timmenkamp");
        break;
    }
    case 32305:
    {
        returnValue = F("Am Timmerahde");
        break;
    }
    case 32306:
    {
        returnValue = F("Am Timmerbarg");
        break;
    }
    case 32307:
    {
        returnValue = F("Am Timmerberg");
        break;
    }
    case 32308:
    {
        returnValue = F("Am Timmerbeul");
        break;
    }
    case 32309:
    {
        returnValue = F("Am Timmerhof");
        break;
    }
    case 32310:
    {
        returnValue = F("Am Timmersberge");
        break;
    }
    case 32311:
    {
        returnValue = F("Am Timmhorstkamp");
        break;
    }
    case 32312:
    {
        returnValue = F("Am Timp");
        break;
    }
    case 32313:
    {
        returnValue = F("Am Timpen");
        break;
    }
    case 32314:
    {
        returnValue = F("Am Timpke");
        break;
    }
    case 32315:
    {
        returnValue = F("Am Tinkoken");
        break;
    }
    case 32316:
    {
        returnValue = F("Am Tipkenhoog");
        break;
    }
    case 32317:
    {
        returnValue = F("Am Tisch");
        break;
    }
    case 32318:
    {
        returnValue = F("Am Tischfelsen");
        break;
    }
    case 32319:
    {
        returnValue = F("Am Tischligweg");
        break;
    }
    case 32320:
    {
        returnValue = F("Am Tischplatt");
        break;
    }
    case 32321:
    {
        returnValue = F("Am Tivoli");
        break;
    }
    case 32322:
    {
        returnValue = F("Am Tjücher Tief");
        break;
    }
    case 32323:
    {
        returnValue = F("Am Tobel");
        break;
    }
    case 32324:
    {
        returnValue = F("Am Tobelbach");
        break;
    }
    case 32325:
    {
        returnValue = F("Am Toberbusch");
        break;
    }
    case 32326:
    {
        returnValue = F("Am Tocksberg");
        break;
    }
    case 32327:
    {
        returnValue = F("Am Todnitzsee");
        break;
    }
    case 32328:
    {
        returnValue = F("Am Todtenbach");
        break;
    }
    case 32329:
    {
        returnValue = F("Am Todtenberg");
        break;
    }
    case 32330:
    {
        returnValue = F("Am Toft");
        break;
    }
    case 32331:
    {
        returnValue = F("Am Toggraben");
        break;
    }
    case 32332:
    {
        returnValue = F("Am Tokebach");
        break;
    }
    case 32333:
    {
        returnValue = F("Am Tollen Born");
        break;
    }
    case 32334:
    {
        returnValue = F("Am Tollenberg");
        break;
    }
    case 32335:
    {
        returnValue = F("Am Tollentisch");
        break;
    }
    case 32336:
    {
        returnValue = F("Am Tollertbruch");
        break;
    }
    case 32337:
    {
        returnValue = F("Am Tolling");
        break;
    }
    case 32338:
    {
        returnValue = F("Am Tomberg");
        break;
    }
    case 32339:
    {
        returnValue = F("Am Tomlaich");
        break;
    }
    case 32340:
    {
        returnValue = F("Am Ton");
        break;
    }
    case 32341:
    {
        returnValue = F("Am Tonanger");
        break;
    }
    case 32342:
    {
        returnValue = F("Am Tonberg");
        break;
    }
    case 32343:
    {
        returnValue = F("Am Tonfeld");
        break;
    }
    case 32344:
    {
        returnValue = F("Am Tongraben");
        break;
    }
    case 32345:
    {
        returnValue = F("Am Tonhafen");
        break;
    }
    case 32346:
    {
        returnValue = F("Am Tonhügel");
        break;
    }
    case 32347:
    {
        returnValue = F("Am Tonkamp");
        break;
    }
    case 32348:
    {
        returnValue = F("Am Tonloch");
        break;
    }
    case 32349:
    {
        returnValue = F("Am Tonneborn");
        break;
    }
    case 32350:
    {
        returnValue = F("Am Tonnenberg");
        break;
    }
    case 32351:
    {
        returnValue = F("Am Tonschacht");
        break;
    }
    case 32352:
    {
        returnValue = F("Am Tonschuppen");
        break;
    }
    case 32353:
    {
        returnValue = F("Am Tonsee");
        break;
    }
    case 32354:
    {
        returnValue = F("Am Tonteich");
        break;
    }
    case 32355:
    {
        returnValue = F("Am Tonwerk");
        break;
    }
    case 32356:
    {
        returnValue = F("Am Topfmarkt");
        break;
    }
    case 32357:
    {
        returnValue = F("Am Tor");
        break;
    }
    case 32358:
    {
        returnValue = F("Am Toracker");
        break;
    }
    case 32359:
    {
        returnValue = F("Am Torberg");
        break;
    }
    case 32360:
    {
        returnValue = F("Am Torbogen");
        break;
    }
    case 32361:
    {
        returnValue = F("Am Torbuck");
        break;
    }
    case 32362:
    {
        returnValue = F("Am Tore");
        break;
    }
    case 32363:
    {
        returnValue = F("Am Torfberg");
        break;
    }
    case 32364:
    {
        returnValue = F("Am Torfdamm");
        break;
    }
    case 32365:
    {
        returnValue = F("Am Torfeld");
        break;
    }
    case 32366:
    {
        returnValue = F("Am Torfgraben");
        break;
    }
    case 32367:
    {
        returnValue = F("Am Torfmeer");
        break;
    }
    case 32368:
    {
        returnValue = F("Am Torfmoor");
        break;
    }
    case 32369:
    {
        returnValue = F("Am Torfmoorweg");
        break;
    }
    case 32370:
    {
        returnValue = F("Am Torfring");
        break;
    }
    case 32371:
    {
        returnValue = F("Am Torfsockel");
        break;
    }
    case 32372:
    {
        returnValue = F("Am Torfspitt");
        break;
    }
    case 32373:
    {
        returnValue = F("Am Torfstich");
        break;
    }
    case 32374:
    {
        returnValue = F("Am Torgraben");
        break;
    }
    case 32375:
    {
        returnValue = F("Am Torhaus");
        break;
    }
    case 32376:
    {
        returnValue = F("Am Torkel");
        break;
    }
    case 32377:
    {
        returnValue = F("Am Tornauer Teich");
        break;
    }
    case 32378:
    {
        returnValue = F("Am Torney");
        break;
    }
    case 32379:
    {
        returnValue = F("Am Tornowsee");
        break;
    }
    case 32380:
    {
        returnValue = F("Am Torteich");
        break;
    }
    case 32381:
    {
        returnValue = F("Am Torweg");
        break;
    }
    case 32382:
    {
        returnValue = F("Am Toschlag");
        break;
    }
    case 32383:
    {
        returnValue = F("Am Tossenberg");
        break;
    }
    case 32384:
    {
        returnValue = F("Am Toten Arm");
        break;
    }
    case 32385:
    {
        returnValue = F("Am Totenborn");
        break;
    }
    case 32386:
    {
        returnValue = F("Am Totenhof");
        break;
    }
    case 32387:
    {
        returnValue = F("Am Tottenberg");
        break;
    }
    case 32388:
    {
        returnValue = F("Am Tower");
        break;
    }
    case 32389:
    {
        returnValue = F("Am Trabelt");
        break;
    }
    case 32390:
    {
        returnValue = F("Am Tradl");
        break;
    }
    case 32391:
    {
        returnValue = F("Am Tradlfeld");
        break;
    }
    case 32392:
    {
        returnValue = F("Am Trafo");
        break;
    }
    case 32393:
    {
        returnValue = F("Am Trammer See");
        break;
    }
    case 32394:
    {
        returnValue = F("Am Transformator");
        break;
    }
    case 32395:
    {
        returnValue = F("Am Trappenberg");
        break;
    }
    case 32396:
    {
        returnValue = F("Am Trappenschuss");
        break;
    }
    case 32397:
    {
        returnValue = F("Am Trappenstein");
        break;
    }
    case 32398:
    {
        returnValue = F("Am Tratbügel");
        break;
    }
    case 32399:
    {
        returnValue = F("Am Trathl");
        break;
    }
    case 32400:
    {
        returnValue = F("Am Trauben");
        break;
    }
    case 32401:
    {
        returnValue = F("Am Traubenland");
        break;
    }
    case 32402:
    {
        returnValue = F("Am Traubersweg");
        break;
    }
    case 32403:
    {
        returnValue = F("Am Traugraben");
        break;
    }
    case 32404:
    {
        returnValue = F("Am Trausberg");
        break;
    }
    case 32405:
    {
        returnValue = F("Am Trautheim");
        break;
    }
    case 32406:
    {
        returnValue = F("Am Trautnerberg");
        break;
    }
    case 32407:
    {
        returnValue = F("Am Travehang");
        break;
    }
    case 32408:
    {
        returnValue = F("Am Trebelsee");
        break;
    }
    case 32409:
    {
        returnValue = F("Am Trebeltal");
        break;
    }
    case 32410:
    {
        returnValue = F("Am Trebeteich");
        break;
    }
    case 32411:
    {
        returnValue = F("Am Treckeberg");
        break;
    }
    case 32412:
    {
        returnValue = F("Am Treekerhof");
        break;
    }
    case 32413:
    {
        returnValue = F("Am Treenefeld");
        break;
    }
    case 32414:
    {
        returnValue = F("Am Treeneufer");
        break;
    }
    case 32415:
    {
        returnValue = F("Am Treiberweg");
        break;
    }
    case 32416:
    {
        returnValue = F("Am Treibweg");
        break;
    }
    case 32417:
    {
        returnValue = F("Am Treidelhafen");
        break;
    }
    case 32418:
    {
        returnValue = F("Am Treidelpadd");
        break;
    }
    case 32419:
    {
        returnValue = F("Am Treidelsteg");
        break;
    }
    case 32420:
    {
        returnValue = F("Am Treidelsteig");
        break;
    }
    case 32421:
    {
        returnValue = F("Am Treidelweg");
        break;
    }
    case 32422:
    {
        returnValue = F("Am Treisbach");
        break;
    }
    case 32423:
    {
        returnValue = F("Am Treisberg");
        break;
    }
    case 32424:
    {
        returnValue = F("Am Trempel");
        break;
    }
    case 32425:
    {
        returnValue = F("Am Trendelkamp");
        break;
    }
    case 32426:
    {
        returnValue = F("Am Trenelsee");
        break;
    }
    case 32427:
    {
        returnValue = F("Am Trennelsee");
        break;
    }
    case 32428:
    {
        returnValue = F("Am Trenschelbuck");
        break;
    }
    case 32429:
    {
        returnValue = F("Am Trensenbrink");
        break;
    }
    case 32430:
    {
        returnValue = F("Am Trentlinger Weg");
        break;
    }
    case 32431:
    {
        returnValue = F("Am Treppchen");
        break;
    }
    case 32432:
    {
        returnValue = F("Am Trepper");
        break;
    }
    case 32433:
    {
        returnValue = F("Am Trerichsweiher");
        break;
    }
    case 32434:
    {
        returnValue = F("Am Treskower Berg");
        break;
    }
    case 32435:
    {
        returnValue = F("Am Trespelberg");
        break;
    }
    case 32436:
    {
        returnValue = F("Am Tressower See");
        break;
    }
    case 32437:
    {
        returnValue = F("Am Tretenbach");
        break;
    }
    case 32438:
    {
        returnValue = F("Am Treuenfels");
        break;
    }
    case 32439:
    {
        returnValue = F("Am Triangel");
        break;
    }
    case 32440:
    {
        returnValue = F("Am Tribohmer Bach");
        break;
    }
    case 32441:
    {
        returnValue = F("Am Trieb");
        break;
    }
    case 32442:
    {
        returnValue = F("Am Triebacker");
        break;
    }
    case 32443:
    {
        returnValue = F("Am Triebischwehr");
        break;
    }
    case 32444:
    {
        returnValue = F("Am Triebtal");
        break;
    }
    case 32445:
    {
        returnValue = F("Am Triebweg");
        break;
    }
    case 32446:
    {
        returnValue = F("Am Tried");
        break;
    }
    case 32447:
    {
        returnValue = F("Am Triefenbach");
        break;
    }
    case 32448:
    {
        returnValue = F("Am Triepenbusch");
        break;
    }
    case 32449:
    {
        returnValue = F("Am Trierbach");
        break;
    }
    case 32450:
    {
        returnValue = F("Am Triesch");
        break;
    }
    case 32451:
    {
        returnValue = F("Am Trietenbroich");
        break;
    }
    case 32452:
    {
        returnValue = F("Am Trift");
        break;
    }
    case 32453:
    {
        returnValue = F("Am Triftbach");
        break;
    }
    case 32454:
    {
        returnValue = F("Am Triftberg");
        break;
    }
    case 32455:
    {
        returnValue = F("Am Triften");
        break;
    }
    case 32456:
    {
        returnValue = F("Am Triftfeld");
        break;
    }
    case 32457:
    {
        returnValue = F("Am Triftholz");
        break;
    }
    case 32458:
    {
        returnValue = F("Am Triftweg");
        break;
    }
    case 32459:
    {
        returnValue = F("Am Trinkborn");
        break;
    }
    case 32460:
    {
        returnValue = F("Am Trinkbrünnla");
        break;
    }
    case 32461:
    {
        returnValue = F("Am Trinkpütz");
        break;
    }
    case 32462:
    {
        returnValue = F("Am Tripp");
        break;
    }
    case 32463:
    {
        returnValue = F("Am Trippelsborn");
        break;
    }
    case 32464:
    {
        returnValue = F("Am Tripser Wäldchen");
        break;
    }
    case 32465:
    {
        returnValue = F("Am Trisch");
        break;
    }
    case 32466:
    {
        returnValue = F("Am Trispel");
        break;
    }
    case 32467:
    {
        returnValue = F("Am Trockenbagger");
        break;
    }
    case 32468:
    {
        returnValue = F("Am Trockendock");
        break;
    }
    case 32469:
    {
        returnValue = F("Am Trockenen Weg");
        break;
    }
    case 32470:
    {
        returnValue = F("Am Trockenturm");
        break;
    }
    case 32471:
    {
        returnValue = F("Am Trockenwerk");
        break;
    }
    case 32472:
    {
        returnValue = F("Am Trog");
        break;
    }
    case 32473:
    {
        returnValue = F("Am Trograngen");
        break;
    }
    case 32474:
    {
        returnValue = F("Am Troistedter Weg");
        break;
    }
    case 32475:
    {
        returnValue = F("Am Trommlerbusch");
        break;
    }
    case 32476:
    {
        returnValue = F("Am Trompeterskopf");
        break;
    }
    case 32477:
    {
        returnValue = F("Am Trosselbach");
        break;
    }
    case 32478:
    {
        returnValue = F("Am Trostgrund");
        break;
    }
    case 32479:
    {
        returnValue = F("Am Trottacker");
        break;
    }
    case 32480:
    {
        returnValue = F("Am Trottenwald");
        break;
    }
    case 32481:
    {
        returnValue = F("Am Trotz");
        break;
    }
    case 32482:
    {
        returnValue = F("Am Trotzbach");
        break;
    }
    case 32483:
    {
        returnValue = F("Am Trubbach");
        break;
    }
    case 32484:
    {
        returnValue = F("Am Truckenbrunnen");
        break;
    }
    case 32485:
    {
        returnValue = F("Am Truckstop");
        break;
    }
    case 32486:
    {
        returnValue = F("Am Trudenbuck");
        break;
    }
    case 32487:
    {
        returnValue = F("Am Trumpf");
        break;
    }
    case 32488:
    {
        returnValue = F("Am Trunhoop");
        break;
    }
    case 32489:
    {
        returnValue = F("Am Trutenholz");
        break;
    }
    case 32490:
    {
        returnValue = F("Am Träglersteig");
        break;
    }
    case 32491:
    {
        returnValue = F("Am Tränkbach");
        break;
    }
    case 32492:
    {
        returnValue = F("Am Tränkebach");
        break;
    }
    case 32493:
    {
        returnValue = F("Am Tränkegarten");
        break;
    }
    case 32494:
    {
        returnValue = F("Am Tränkenrain");
        break;
    }
    case 32495:
    {
        returnValue = F("Am Tränkeweg");
        break;
    }
    case 32496:
    {
        returnValue = F("Am Tränkgarten");
        break;
    }
    case 32497:
    {
        returnValue = F("Am Tränkwald");
        break;
    }
    case 32498:
    {
        returnValue = F("Am Tränkwall");
        break;
    }
    case 32499:
    {
        returnValue = F("Am Tröbel");
        break;
    }
    case 32500:
    {
        returnValue = F("Am Trögebach");
        break;
    }
    case 32501:
    {
        returnValue = F("Am Trögers Berg");
        break;
    }
    case 32502:
    {
        returnValue = F("Am Trömel");
        break;
    }
    case 32503:
    {
        returnValue = F("Am Trübenbach");
        break;
    }
    case 32504:
    {
        returnValue = F("Am Trübengraben");
        break;
    }
    case 32505:
    {
        returnValue = F("Am Trützschler");
        break;
    }
    case 32506:
    {
        returnValue = F("Am Tucherschloß");
        break;
    }
    case 32507:
    {
        returnValue = F("Am Tulpenbaum");
        break;
    }
    case 32508:
    {
        returnValue = F("Am Tulpenfeld");
        break;
    }
    case 32509:
    {
        returnValue = F("Am Tulpenweg");
        break;
    }
    case 32510:
    {
        returnValue = F("Am Tummelplatz");
        break;
    }
    case 32511:
    {
        returnValue = F("Am Tummersbach");
        break;
    }
    case 32512:
    {
        returnValue = F("Am Tumulus");
        break;
    }
    case 32513:
    {
        returnValue = F("Am Tunnel");
        break;
    }
    case 32514:
    {
        returnValue = F("Am Tunseler Graben");
        break;
    }
    case 32515:
    {
        returnValue = F("Am Turbinenbach");
        break;
    }
    case 32516:
    {
        returnValue = F("Am Turm");
        break;
    }
    case 32517:
    {
        returnValue = F("Am Turmacker");
        break;
    }
    case 32518:
    {
        returnValue = F("Am Turmberg");
        break;
    }
    case 32519:
    {
        returnValue = F("Am Turmbusch");
        break;
    }
    case 32520:
    {
        returnValue = F("Am Turmgarten");
        break;
    }
    case 32521:
    {
        returnValue = F("Am Turmhaus");
        break;
    }
    case 32522:
    {
        returnValue = F("Am Turmhof");
        break;
    }
    case 32523:
    {
        returnValue = F("Am Turmhügel");
        break;
    }
    case 32524:
    {
        returnValue = F("Am Turmplatz");
        break;
    }
    case 32525:
    {
        returnValue = F("Am Turmweg");
        break;
    }
    case 32526:
    {
        returnValue = F("Am Turnerheim");
        break;
    }
    case 32527:
    {
        returnValue = F("Am Turnerplatz");
        break;
    }
    case 32528:
    {
        returnValue = F("Am Turnierplatz");
        break;
    }
    case 32529:
    {
        returnValue = F("Am Turnplatz");
        break;
    }
    case 32530:
    {
        returnValue = F("Am Tuttel");
        break;
    }
    case 32531:
    {
        returnValue = F("Am Tweböhmer");
        break;
    }
    case 32532:
    {
        returnValue = F("Am Twecht");
        break;
    }
    case 32533:
    {
        returnValue = F("Am Twennenberge");
        break;
    }
    case 32534:
    {
        returnValue = F("Am Twerkamp");
        break;
    }
    case 32535:
    {
        returnValue = F("Am Twerspring");
        break;
    }
    case 32536:
    {
        returnValue = F("Am Twetgenwasser");
        break;
    }
    case 32537:
    {
        returnValue = F("Am Twisselberg");
        break;
    }
    case 32538:
    {
        returnValue = F("Am Twistenberge");
        break;
    }
    case 32539:
    {
        returnValue = F("Am Twistenberger Weg");
        break;
    }
    case 32540:
    {
        returnValue = F("Am TÜV");
        break;
    }
    case 32541:
    {
        returnValue = F("Am Täberg");
        break;
    }
    case 32542:
    {
        returnValue = F("Am Täfele");
        break;
    }
    case 32543:
    {
        returnValue = F("Am Täfelesberg");
        break;
    }
    case 32544:
    {
        returnValue = F("Am Tälchen");
        break;
    }
    case 32545:
    {
        returnValue = F("Am Täle");
        break;
    }
    case 32546:
    {
        returnValue = F("Am Tälesbach");
        break;
    }
    case 32547:
    {
        returnValue = F("Am Tännele");
        break;
    }
    case 32548:
    {
        returnValue = F("Am Tännicht");
        break;
    }
    case 32549:
    {
        returnValue = F("Am Tännig");
        break;
    }
    case 32550:
    {
        returnValue = F("Am Tännigt");
        break;
    }
    case 32551:
    {
        returnValue = F("Am Täuberlberg");
        break;
    }
    case 32552:
    {
        returnValue = F("Am Täubig");
        break;
    }
    case 32553:
    {
        returnValue = F("Am Töbele");
        break;
    }
    case 32554:
    {
        returnValue = F("Am Töller");
        break;
    }
    case 32555:
    {
        returnValue = F("Am Töllschützer Berg");
        break;
    }
    case 32556:
    {
        returnValue = F("Am Tölz");
        break;
    }
    case 32557:
    {
        returnValue = F("Am Tömp");
        break;
    }
    case 32558:
    {
        returnValue = F("Am Töneken");
        break;
    }
    case 32559:
    {
        returnValue = F("Am Tönisberg");
        break;
    }
    case 32560:
    {
        returnValue = F("Am Tönnissee");
        break;
    }
    case 32561:
    {
        returnValue = F("Am Töpfenmarkt");
        break;
    }
    case 32562:
    {
        returnValue = F("Am Töpfer");
        break;
    }
    case 32563:
    {
        returnValue = F("Am Töpferberg");
        break;
    }
    case 32564:
    {
        returnValue = F("Am Töpferbrunnen");
        break;
    }
    case 32565:
    {
        returnValue = F("Am Töpfermarkt");
        break;
    }
    case 32566:
    {
        returnValue = F("Am Töpferofen");
        break;
    }
    case 32567:
    {
        returnValue = F("Am Töpferteich");
        break;
    }
    case 32568:
    {
        returnValue = F("Am Törle");
        break;
    }
    case 32569:
    {
        returnValue = F("Am Törner See");
        break;
    }
    case 32570:
    {
        returnValue = F("Am Tübbeckenberg");
        break;
    }
    case 32571:
    {
        returnValue = F("Am Tümmeldiek");
        break;
    }
    case 32572:
    {
        returnValue = F("Am Tümpel");
        break;
    }
    case 32573:
    {
        returnValue = F("Am Tünneckenberg");
        break;
    }
    case 32574:
    {
        returnValue = F("Am Tünnsbrink");
        break;
    }
    case 32575:
    {
        returnValue = F("Am Tüppel");
        break;
    }
    case 32576:
    {
        returnValue = F("Am Türchen");
        break;
    }
    case 32577:
    {
        returnValue = F("Am Türkengraben");
        break;
    }
    case 32578:
    {
        returnValue = F("Am Türkenhof");
        break;
    }
    case 32579:
    {
        returnValue = F("Am Türlberg");
        break;
    }
    case 32580:
    {
        returnValue = F("Am Türleinspfad");
        break;
    }
    case 32581:
    {
        returnValue = F("Am Türlesgraben");
        break;
    }
    case 32582:
    {
        returnValue = F("Am Türlürsberg");
        break;
    }
    case 32583:
    {
        returnValue = F("Am Türmchen");
        break;
    }
    case 32584:
    {
        returnValue = F("Am Türmle");
        break;
    }
    case 32585:
    {
        returnValue = F("Am Tüschenwald");
        break;
    }
    case 32586:
    {
        returnValue = F("Am Tüskenbach");
        break;
    }
    case 32587:
    {
        returnValue = F("Am Tütberg");
        break;
    }
    case 32588:
    {
        returnValue = F("Am Tütenberg");
        break;
    }
    case 32589:
    {
        returnValue = F("Am Tütenbrook");
        break;
    }
    case 32590:
    {
        returnValue = F("Am Ubierring");
        break;
    }
    case 32591:
    {
        returnValue = F("Am Ubstall");
        break;
    }
    case 32592:
    {
        returnValue = F("Am Uchtedamm");
        break;
    }
    case 32593:
    {
        returnValue = F("Am Uckerstadion");
        break;
    }
    case 32594:
    {
        returnValue = F("Am Ueckerbogen");
        break;
    }
    case 32595:
    {
        returnValue = F("Am Ueckerdamm");
        break;
    }
    case 32596:
    {
        returnValue = F("Am Ueckerweg");
        break;
    }
    case 32597:
    {
        returnValue = F("Am Uelkenberg");
        break;
    }
    case 32598:
    {
        returnValue = F("Am Uenglinger Berg");
        break;
    }
    case 32599:
    {
        returnValue = F("Am Ufer");
        break;
    }
    case 32600:
    {
        returnValue = F("Am Uferbaum");
        break;
    }
    case 32601:
    {
        returnValue = F("Am Uferkastell");
        break;
    }
    case 32602:
    {
        returnValue = F("Am Uferweg");
        break;
    }
    case 32603:
    {
        returnValue = F("Am Ufo");
        break;
    }
    case 32604:
    {
        returnValue = F("Am Ugental");
        break;
    }
    case 32605:
    {
        returnValue = F("Am Uhlbachrain");
        break;
    }
    case 32606:
    {
        returnValue = F("Am Uhlberg");
        break;
    }
    case 32607:
    {
        returnValue = F("Am Uhlenberg");
        break;
    }
    case 32608:
    {
        returnValue = F("Am Uhlenbrock");
        break;
    }
    case 32609:
    {
        returnValue = F("Am Uhlenhorst");
        break;
    }
    case 32610:
    {
        returnValue = F("Am Uhlenkamp");
        break;
    }
    case 32611:
    {
        returnValue = F("Am Uhlenkopp");
        break;
    }
    case 32612:
    {
        returnValue = F("Am Uhlensterz");
        break;
    }
    case 32613:
    {
        returnValue = F("Am Uhlenwinkel");
        break;
    }
    case 32614:
    {
        returnValue = F("Am Uhlesrahm");
        break;
    }
    case 32615:
    {
        returnValue = F("Am Uhlsberg");
        break;
    }
    case 32616:
    {
        returnValue = F("Am Uhrackerl");
        break;
    }
    case 32617:
    {
        returnValue = F("Am Uhrenturm");
        break;
    }
    case 32618:
    {
        returnValue = F("Am Uhrmacherberg");
        break;
    }
    case 32619:
    {
        returnValue = F("Am Ukleiredder");
        break;
    }
    case 32620:
    {
        returnValue = F("Am Ullenbach");
        break;
    }
    case 32621:
    {
        returnValue = F("Am Ullersbach");
        break;
    }
    case 32622:
    {
        returnValue = F("Am Ullersberg");
        break;
    }
    case 32623:
    {
        returnValue = F("Am Ullersteig");
        break;
    }
    case 32624:
    {
        returnValue = F("Am Ulmbach");
        break;
    }
    case 32625:
    {
        returnValue = F("Am Ulmenberg");
        break;
    }
    case 32626:
    {
        returnValue = F("Am Ulmengrund");
        break;
    }
    case 32627:
    {
        returnValue = F("Am Ulmenhain");
        break;
    }
    case 32628:
    {
        returnValue = F("Am Ulmenhang");
        break;
    }
    case 32629:
    {
        returnValue = F("Am Ulmenhof");
        break;
    }
    case 32630:
    {
        returnValue = F("Am Ulrichsberg");
        break;
    }
    case 32631:
    {
        returnValue = F("Am Ulrichsbichl");
        break;
    }
    case 32632:
    {
        returnValue = F("Am Ulrichsbrunnen");
        break;
    }
    case 32633:
    {
        returnValue = F("Am Ulrichshof");
        break;
    }
    case 32634:
    {
        returnValue = F("Am Ulsterberg");
        break;
    }
    case 32635:
    {
        returnValue = F("Am Ulsterblick");
        break;
    }
    case 32636:
    {
        returnValue = F("Am Umfluter");
        break;
    }
    case 32637:
    {
        returnValue = F("Am Umpern");
        break;
    }
    case 32638:
    {
        returnValue = F("Am Umriß");
        break;
    }
    case 32639:
    {
        returnValue = F("Am Umschlagbahnhof");
        break;
    }
    case 32640:
    {
        returnValue = F("Am Umschwang");
        break;
    }
    case 32641:
    {
        returnValue = F("Am Umsetzer");
        break;
    }
    case 32642:
    {
        returnValue = F("Am Umspannwerk");
        break;
    }
    case 32643:
    {
        returnValue = F("Am Umsteigebahnhof");
        break;
    }
    case 32644:
    {
        returnValue = F("Am Umweg");
        break;
    }
    case 32645:
    {
        returnValue = F("Am Umweltbahnhof");
        break;
    }
    case 32646:
    {
        returnValue = F("Am Uneben");
        break;
    }
    case 32647:
    {
        returnValue = F("Am Ungersgarten");
        break;
    }
    case 32648:
    {
        returnValue = F("Am Unionschacht");
        break;
    }
    case 32649:
    {
        returnValue = F("Am Unkelstein");
        break;
    }
    case 32650:
    {
        returnValue = F("Am Unkenbach");
        break;
    }
    case 32651:
    {
        returnValue = F("Am Unkenfunk");
        break;
    }
    case 32652:
    {
        returnValue = F("Am Unkersberg");
        break;
    }
    case 32653:
    {
        returnValue = F("Am Unland");
        break;
    }
    case 32654:
    {
        returnValue = F("Am Unsinnbach");
        break;
    }
    case 32655:
    {
        returnValue = F("Am Unteranger");
        break;
    }
    case 32656:
    {
        returnValue = F("Am Unterbach");
        break;
    }
    case 32657:
    {
        returnValue = F("Am Unterberg");
        break;
    }
    case 32658:
    {
        returnValue = F("Am Unteren Anger");
        break;
    }
    case 32659:
    {
        returnValue = F("Am Unteren Bach");
        break;
    }
    case 32660:
    {
        returnValue = F("Am Unteren Bahnhof");
        break;
    }
    case 32661:
    {
        returnValue = F("Am Unteren Christ");
        break;
    }
    case 32662:
    {
        returnValue = F("Am Unteren Elm");
        break;
    }
    case 32663:
    {
        returnValue = F("Am Unteren Feld");
        break;
    }
    case 32664:
    {
        returnValue = F("Am Unteren Feuerteich");
        break;
    }
    case 32665:
    {
        returnValue = F("Am Unteren Flur");
        break;
    }
    case 32666:
    {
        returnValue = F("Am Unteren Graben");
        break;
    }
    case 32667:
    {
        returnValue = F("Am Unteren Gries");
        break;
    }
    case 32668:
    {
        returnValue = F("Am Unteren Griesweg");
        break;
    }
    case 32669:
    {
        returnValue = F("Am Unteren Haldenrain");
        break;
    }
    case 32670:
    {
        returnValue = F("Am Unteren Hammer");
        break;
    }
    case 32671:
    {
        returnValue = F("Am Unteren Hang");
        break;
    }
    case 32672:
    {
        returnValue = F("Am Unteren Lauterdamm");
        break;
    }
    case 32673:
    {
        returnValue = F("Am Unteren Mühlbach");
        break;
    }
    case 32674:
    {
        returnValue = F("Am Unteren Mühlgraben");
        break;
    }
    case 32675:
    {
        returnValue = F("Am Unteren Pfad");
        break;
    }
    case 32676:
    {
        returnValue = F("Am Unteren Pfaffenrain");
        break;
    }
    case 32677:
    {
        returnValue = F("Am Unteren Rain");
        break;
    }
    case 32678:
    {
        returnValue = F("Am Unteren Schlittberg");
        break;
    }
    case 32679:
    {
        returnValue = F("Am Unteren Seifen");
        break;
    }
    case 32680:
    {
        returnValue = F("Am Unteren Steg");
        break;
    }
    case 32681:
    {
        returnValue = F("Am Unteren Stein");
        break;
    }
    case 32682:
    {
        returnValue = F("Am Unteren Teich");
        break;
    }
    case 32683:
    {
        returnValue = F("Am Unteren Tor");
        break;
    }
    case 32684:
    {
        returnValue = F("Am Unteren Vorhafen");
        break;
    }
    case 32685:
    {
        returnValue = F("Am Unteren Wandel");
        break;
    }
    case 32686:
    {
        returnValue = F("Am Unteren Weinberg");
        break;
    }
    case 32687:
    {
        returnValue = F("Am Unterende");
        break;
    }
    case 32688:
    {
        returnValue = F("Am Unterfeld");
        break;
    }
    case 32689:
    {
        returnValue = F("Am Untergries");
        break;
    }
    case 32690:
    {
        returnValue = F("Am Untergrün");
        break;
    }
    case 32691:
    {
        returnValue = F("Am Untergut");
        break;
    }
    case 32692:
    {
        returnValue = F("Am Unterhain");
        break;
    }
    case 32693:
    {
        returnValue = F("Am Unterhammer");
        break;
    }
    case 32694:
    {
        returnValue = F("Am Unterhohn");
        break;
    }
    case 32695:
    {
        returnValue = F("Am Unterholz");
        break;
    }
    case 32696:
    {
        returnValue = F("Am Unterlemnitzer Weg");
        break;
    }
    case 32697:
    {
        returnValue = F("Am Untermoos");
        break;
    }
    case 32698:
    {
        returnValue = F("Am Unterschiltacher Weg");
        break;
    }
    case 32699:
    {
        returnValue = F("Am Unterstberg");
        break;
    }
    case 32700:
    {
        returnValue = F("Am Unterteich");
        break;
    }
    case 32701:
    {
        returnValue = F("Am Untertor");
        break;
    }
    case 32702:
    {
        returnValue = F("Am Untertorplatz");
        break;
    }
    case 32703:
    {
        returnValue = F("Am Unterwasser");
        break;
    }
    case 32704:
    {
        returnValue = F("Am Unterweg");
        break;
    }
    case 32705:
    {
        returnValue = F("Am Unterösch");
        break;
    }
    case 32706:
    {
        returnValue = F("Am Unzberg");
        break;
    }
    case 32707:
    {
        returnValue = F("Am Uphof");
        break;
    }
    case 32708:
    {
        returnValue = F("Am Upstall");
        break;
    }
    case 32709:
    {
        returnValue = F("Am Uptal");
        break;
    }
    case 32710:
    {
        returnValue = F("Am Urberg");
        break;
    }
    case 32711:
    {
        returnValue = F("Am Urenberg");
        break;
    }
    case 32712:
    {
        returnValue = F("Am Urfahr");
        break;
    }
    case 32713:
    {
        returnValue = F("Am Urgraben");
        break;
    }
    case 32714:
    {
        returnValue = F("Am Urianfelsen");
        break;
    }
    case 32715:
    {
        returnValue = F("Am Urlauberdorf");
        break;
    }
    case 32716:
    {
        returnValue = F("Am Urlaß");
        break;
    }
    case 32717:
    {
        returnValue = F("Am Urlesring");
        break;
    }
    case 32718:
    {
        returnValue = F("Am Urloh");
        break;
    }
    case 32719:
    {
        returnValue = F("Am Urnenfeld");
        break;
    }
    case 32720:
    {
        returnValue = F("Am Urnenfriedhof");
        break;
    }
    case 32721:
    {
        returnValue = F("Am Ursberg");
        break;
    }
    case 32722:
    {
        returnValue = F("Am Ursprung");
        break;
    }
    case 32723:
    {
        returnValue = F("Am Urteilsgarten");
        break;
    }
    case 32724:
    {
        returnValue = F("Am Urtel");
        break;
    }
    case 32725:
    {
        returnValue = F("Am Urwald");
        break;
    }
    case 32726:
    {
        returnValue = F("Am Usweg");
        break;
    }
    case 32727:
    {
        returnValue = F("Am Utkiek");
        break;
    }
    case 32728:
    {
        returnValue = F("Am Uttenbach");
        break;
    }
    case 32729:
    {
        returnValue = F("Am Uttsberg");
        break;
    }
    case 32730:
    {
        returnValue = F("Am Utzbach");
        break;
    }
    case 32731:
    {
        returnValue = F("Am Utzberger Wege");
        break;
    }
    case 32732:
    {
        returnValue = F("Am Vaetsbruch");
        break;
    }
    case 32733:
    {
        returnValue = F("Am Vahrenhorstkamp");
        break;
    }
    case 32734:
    {
        returnValue = F("Am Vahrenkamp");
        break;
    }
    case 32735:
    {
        returnValue = F("Am Valder");
        break;
    }
    case 32736:
    {
        returnValue = F("Am Valepagenhof");
        break;
    }
    case 32737:
    {
        returnValue = F("Am Vallendarer Törchen");
        break;
    }
    case 32738:
    {
        returnValue = F("Am Varel");
        break;
    }
    case 32739:
    {
        returnValue = F("Am Varrenbruch");
        break;
    }
    case 32740:
    {
        returnValue = F("Am Varusberg");
        break;
    }
    case 32741:
    {
        returnValue = F("Am Vatikan");
        break;
    }
    case 32742:
    {
        returnValue = F("Am Vatteröder Teich");
        break;
    }
    case 32743:
    {
        returnValue = F("Am Vatzenberg");
        break;
    }
    case 32744:
    {
        returnValue = F("Am Vechel Berge");
        break;
    }
    case 32745:
    {
        returnValue = F("Am Vechtetal");
        break;
    }
    case 32746:
    {
        returnValue = F("Am Vechteufer");
        break;
    }
    case 32747:
    {
        returnValue = F("Am Vehicle-Park");
        break;
    }
    case 32748:
    {
        returnValue = F("Am Vehnemoor");
        break;
    }
    case 32749:
    {
        returnValue = F("Am Vehrenkamp");
        break;
    }
    case 32750:
    {
        returnValue = F("Am Veilchenberg");
        break;
    }
    case 32751:
    {
        returnValue = F("Am Veilchenbühl");
        break;
    }
    case 32752:
    {
        returnValue = F("Am Veilchenweg");
        break;
    }
    case 32753:
    {
        returnValue = F("Am Veilsdorfer Weg");
        break;
    }
    case 32754:
    {
        returnValue = F("Am Veitberg");
        break;
    }
    case 32755:
    {
        returnValue = F("Am Veitsberg");
        break;
    }
    case 32756:
    {
        returnValue = F("Am Veitsbronner Weg");
        break;
    }
    case 32757:
    {
        returnValue = F("Am Veitsgraben");
        break;
    }
    case 32758:
    {
        returnValue = F("Am Velberholz");
        break;
    }
    case 32759:
    {
        returnValue = F("Am Veldenzer Bach");
        break;
    }
    case 32760:
    {
        returnValue = F("Am Velper Bahnhof");
        break;
    }
    case 32761:
    {
        returnValue = F("Am Velper Mühlenbach");
        break;
    }
    case 32762:
    {
        returnValue = F("Am Veltheimstollen");
        break;
    }
    case 32763:
    {
        returnValue = F("Am Venn");
        break;
    }
    case 32764:
    {
        returnValue = F("Am Vennebähnchen");
        break;
    }
    case 32765:
    {
        returnValue = F("Am Venniberg");
        break;
    }
    case 32766:
    {
        returnValue = F("Am Vennstein");
        break;
    }
    case 32767:
    {
        returnValue = F("Am Venusberg");
        break;
    }
    case 32768:
    {
        returnValue = F("Am Verdel");
        break;
    }
    case 32769:
    {
        returnValue = F("Am Vereinigtfeldschacht");
        break;
    }
    case 32770:
    {
        returnValue = F("Am Vereinshaus");
        break;
    }
    case 32771:
    {
        returnValue = F("Am Verishof");
        break;
    }
    case 32772:
    {
        returnValue = F("Am Verlaat");
        break;
    }
    case 32773:
    {
        returnValue = F("Am Verlorenen Bach");
        break;
    }
    case 32774:
    {
        returnValue = F("Am Versorgungzentrum");
        break;
    }
    case 32775:
    {
        returnValue = F("Am Versstück");
        break;
    }
    case 32776:
    {
        returnValue = F("Am Versuchsfeld");
        break;
    }
    case 32777:
    {
        returnValue = F("Am Versuchsgarten");
        break;
    }
    case 32778:
    {
        returnValue = F("Am Versunkenen Schloß");
        break;
    }
    case 32779:
    {
        returnValue = F("Am Vertrauenschacht");
        break;
    }
    case 32780:
    {
        returnValue = F("Am Vesperbild");
        break;
    }
    case 32781:
    {
        returnValue = F("Am Vetterberg");
        break;
    }
    case 32782:
    {
        returnValue = F("Am Vettersbrunnen");
        break;
    }
    case 32783:
    {
        returnValue = F("Am Viadukt");
        break;
    }
    case 32784:
    {
        returnValue = F("Am Vicinalweg");
        break;
    }
    case 32785:
    {
        returnValue = F("Am Vicus");
        break;
    }
    case 32786:
    {
        returnValue = F("Am Vie");
        break;
    }
    case 32787:
    {
        returnValue = F("Am Viebich");
        break;
    }
    case 32788:
    {
        returnValue = F("Am Viebig");
        break;
    }
    case 32789:
    {
        returnValue = F("Am Viechberg");
        break;
    }
    case 32790:
    {
        returnValue = F("Am Viehbach");
        break;
    }
    case 32791:
    {
        returnValue = F("Am Viehberg");
        break;
    }
    case 32792:
    {
        returnValue = F("Am Viehbicht");
        break;
    }
    case 32793:
    {
        returnValue = F("Am Viehbigt");
        break;
    }
    case 32794:
    {
        returnValue = F("Am Viehbruch");
        break;
    }
    case 32795:
    {
        returnValue = F("Am Viehgraben");
        break;
    }
    case 32796:
    {
        returnValue = F("Am Viehgrund");
        break;
    }
    case 32797:
    {
        returnValue = F("Am Viehhof");
        break;
    }
    case 32798:
    {
        returnValue = F("Am Viehhügel");
        break;
    }
    case 32799:
    {
        returnValue = F("Am Viehmarkt");
        break;
    }
    case 32800:
    {
        returnValue = F("Am Viehtor");
        break;
    }
    case 32801:
    {
        returnValue = F("Am Viehtrieb");
        break;
    }
    case 32802:
    {
        returnValue = F("Am Viehtriftweg");
        break;
    }
    case 32803:
    {
        returnValue = F("Am Viehweg");
        break;
    }
    case 32804:
    {
        returnValue = F("Am Viehweidbichl");
        break;
    }
    case 32805:
    {
        returnValue = F("Am Viehweidegraben");
        break;
    }
    case 32806:
    {
        returnValue = F("Am Vielitzsee");
        break;
    }
    case 32807:
    {
        returnValue = F("Am Viereck");
        break;
    }
    case 32808:
    {
        returnValue = F("Am Vierenberg");
        break;
    }
    case 32809:
    {
        returnValue = F("Am Viererblock");
        break;
    }
    case 32810:
    {
        returnValue = F("Am Vierergraben");
        break;
    }
    case 32811:
    {
        returnValue = F("Am Viersdorfer Weg");
        break;
    }
    case 32812:
    {
        returnValue = F("Am Viert");
        break;
    }
    case 32813:
    {
        returnValue = F("Am Viertel");
        break;
    }
    case 32814:
    {
        returnValue = F("Am Viertelbach");
        break;
    }
    case 32815:
    {
        returnValue = F("Am Viertelfeld");
        break;
    }
    case 32816:
    {
        returnValue = F("Am Viertelsberg");
        break;
    }
    case 32817:
    {
        returnValue = F("Am Viertelsring");
        break;
    }
    case 32818:
    {
        returnValue = F("Am Vierth");
        break;
    }
    case 32819:
    {
        returnValue = F("Am Vierundzwanzigmorgen");
        break;
    }
    case 32820:
    {
        returnValue = F("Am Vietengraben");
        break;
    }
    case 32821:
    {
        returnValue = F("Am Viethenkreuz");
        break;
    }
    case 32822:
    {
        returnValue = F("Am Vikariegarten");
        break;
    }
    case 32823:
    {
        returnValue = F("Am Viktoriaschacht");
        break;
    }
    case 32824:
    {
        returnValue = F("Am Viktoriasee");
        break;
    }
    case 32825:
    {
        returnValue = F("Am Villbacher Grund");
        break;
    }
    case 32826:
    {
        returnValue = F("Am Villepohl");
        break;
    }
    case 32827:
    {
        returnValue = F("Am Vilser Holz");
        break;
    }
    case 32828:
    {
        returnValue = F("Am Vilsufer");
        break;
    }
    case 32829:
    {
        returnValue = F("Am Vinckenbusch");
        break;
    }
    case 32830:
    {
        returnValue = F("Am Vinxtbach");
        break;
    }
    case 32831:
    {
        returnValue = F("Am Viterai");
        break;
    }
    case 32832:
    {
        returnValue = F("Am Vitibuck");
        break;
    }
    case 32833:
    {
        returnValue = F("Am Vitusbach");
        break;
    }
    case 32834:
    {
        returnValue = F("Am Viverdamm");
        break;
    }
    case 32835:
    {
        returnValue = F("Am Vlattener Bach");
        break;
    }
    case 32836:
    {
        returnValue = F("Am Vlothoer Baum");
        break;
    }
    case 32837:
    {
        returnValue = F("Am Vockeroth");
        break;
    }
    case 32838:
    {
        returnValue = F("Am Vogatsbichel");
        break;
    }
    case 32839:
    {
        returnValue = F("Am Vogel");
        break;
    }
    case 32840:
    {
        returnValue = F("Am Vogelacker");
        break;
    }
    case 32841:
    {
        returnValue = F("Am Vogelanger");
        break;
    }
    case 32842:
    {
        returnValue = F("Am Vogelbaum");
        break;
    }
    case 32843:
    {
        returnValue = F("Am Vogelbeerbaum");
        break;
    }
    case 32844:
    {
        returnValue = F("Am Vogelberg");
        break;
    }
    case 32845:
    {
        returnValue = F("Am Vogelbrink");
        break;
    }
    case 32846:
    {
        returnValue = F("Am Vogelbrunnen");
        break;
    }
    case 32847:
    {
        returnValue = F("Am Vogelbusch");
        break;
    }
    case 32848:
    {
        returnValue = F("Am Vogeldriesch");
        break;
    }
    case 32849:
    {
        returnValue = F("Am Vogelfang");
        break;
    }
    case 32850:
    {
        returnValue = F("Am Vogelfeld");
        break;
    }
    case 32851:
    {
        returnValue = F("Am Vogelgarten");
        break;
    }
    case 32852:
    {
        returnValue = F("Am Vogelgesang");
        break;
    }
    case 32853:
    {
        returnValue = F("Am Vogelgraben");
        break;
    }
    case 32854:
    {
        returnValue = F("Am Vogelhain");
        break;
    }
    case 32855:
    {
        returnValue = F("Am Vogelherd");
        break;
    }
    case 32856:
    {
        returnValue = F("Am Vogelherdweg");
        break;
    }
    case 32857:
    {
        returnValue = F("Am Vogelhof");
        break;
    }
    case 32858:
    {
        returnValue = F("Am Vogelholz");
        break;
    }
    case 32859:
    {
        returnValue = F("Am Vogelhölzle");
        break;
    }
    case 32860:
    {
        returnValue = F("Am Vogelkamp");
        break;
    }
    case 32861:
    {
        returnValue = F("Am Vogelkundepfad");
        break;
    }
    case 32862:
    {
        returnValue = F("Am Vogelort");
        break;
    }
    case 32863:
    {
        returnValue = F("Am Vogelpark");
        break;
    }
    case 32864:
    {
        returnValue = F("Am Vogelpoel");
        break;
    }
    case 32865:
    {
        returnValue = F("Am Vogelpohl");
        break;
    }
    case 32866:
    {
        returnValue = F("Am Vogelrain");
        break;
    }
    case 32867:
    {
        returnValue = F("Am Vogelsand");
        break;
    }
    case 32868:
    {
        returnValue = F("Am Vogelsang");
        break;
    }
    case 32869:
    {
        returnValue = F("Am Vogelsbaum");
        break;
    }
    case 32870:
    {
        returnValue = F("Am Vogelsberg");
        break;
    }
    case 32871:
    {
        returnValue = F("Am Vogelsbrunnen");
        break;
    }
    case 32872:
    {
        returnValue = F("Am Vogelschutz");
        break;
    }
    case 32873:
    {
        returnValue = F("Am Vogelschutzpark");
        break;
    }
    case 32874:
    {
        returnValue = F("Am Vogelsgesang");
        break;
    }
    case 32875:
    {
        returnValue = F("Am Vogelsgraben");
        break;
    }
    case 32876:
    {
        returnValue = F("Am Vogelstal");
        break;
    }
    case 32877:
    {
        returnValue = F("Am Vogeltal");
        break;
    }
    case 32878:
    {
        returnValue = F("Am Vogelteich");
        break;
    }
    case 32879:
    {
        returnValue = F("Am Vogeltend");
        break;
    }
    case 32880:
    {
        returnValue = F("Am Vogeltenn");
        break;
    }
    case 32881:
    {
        returnValue = F("Am Vogelwasser");
        break;
    }
    case 32882:
    {
        returnValue = F("Am Vogelweg");
        break;
    }
    case 32883:
    {
        returnValue = F("Am Vogelwäldchen");
        break;
    }
    case 32884:
    {
        returnValue = F("Am Voglacker");
        break;
    }
    case 32885:
    {
        returnValue = F("Am Voglfelsen");
        break;
    }
    case 32886:
    {
        returnValue = F("Am Vogtberg");
        break;
    }
    case 32887:
    {
        returnValue = F("Am Vogtgarten");
        break;
    }
    case 32888:
    {
        returnValue = F("Am Vogtlandblick");
        break;
    }
    case 32889:
    {
        returnValue = F("Am Vogts Garten");
        break;
    }
    case 32890:
    {
        returnValue = F("Am Vogtsbach");
        break;
    }
    case 32891:
    {
        returnValue = F("Am Vogtsberg");
        break;
    }
    case 32892:
    {
        returnValue = F("Am Vogtshostert");
        break;
    }
    case 32893:
    {
        returnValue = F("Am Vogtsmoor");
        break;
    }
    case 32894:
    {
        returnValue = F("Am Vohbach");
        break;
    }
    case 32895:
    {
        returnValue = F("Am Vohberg");
        break;
    }
    case 32896:
    {
        returnValue = F("Am Voigtplatz");
        break;
    }
    case 32897:
    {
        returnValue = F("Am Voigtshof");
        break;
    }
    case 32898:
    {
        returnValue = F("Am Volbertsberg");
        break;
    }
    case 32899:
    {
        returnValue = F("Am Volkereck");
        break;
    }
    case 32900:
    {
        returnValue = F("Am Volksbad");
        break;
    }
    case 32901:
    {
        returnValue = F("Am Volksbrunnen");
        break;
    }
    case 32902:
    {
        returnValue = F("Am Volksfestplatz");
        break;
    }
    case 32903:
    {
        returnValue = F("Am Volksgarten");
        break;
    }
    case 32904:
    {
        returnValue = F("Am Volksgut");
        break;
    }
    case 32905:
    {
        returnValue = F("Am Volksgut Gautzsch");
        break;
    }
    case 32906:
    {
        returnValue = F("Am Volkshaus");
        break;
    }
    case 32907:
    {
        returnValue = F("Am Volksheim");
        break;
    }
    case 32908:
    {
        returnValue = F("Am Volkskulturpark");
        break;
    }
    case 32909:
    {
        returnValue = F("Am Volkspark");
        break;
    }
    case 32910:
    {
        returnValue = F("Am Volksplatz");
        break;
    }
    case 32911:
    {
        returnValue = F("Am Vollesberge");
        break;
    }
    case 32912:
    {
        returnValue = F("Am Vollmer");
        break;
    }
    case 32913:
    {
        returnValue = F("Am Volmehang");
        break;
    }
    case 32914:
    {
        returnValue = F("Am Vondermanns-Park");
        break;
    }
    case 32915:
    {
        returnValue = F("Am Vorberg");
        break;
    }
    case 32916:
    {
        returnValue = F("Am Vordel");
        break;
    }
    case 32917:
    {
        returnValue = F("Am Vorderacker");
        break;
    }
    case 32918:
    {
        returnValue = F("Am Vorderbach");
        break;
    }
    case 32919:
    {
        returnValue = F("Am Vorderbruch");
        break;
    }
    case 32920:
    {
        returnValue = F("Am Vorderen Berg");
        break;
    }
    case 32921:
    {
        returnValue = F("Am Vorderfeld");
        break;
    }
    case 32922:
    {
        returnValue = F("Am Vorderflöß");
        break;
    }
    case 32923:
    {
        returnValue = F("Am Vorderochsen");
        break;
    }
    case 32924:
    {
        returnValue = F("Am Vorderstein");
        break;
    }
    case 32925:
    {
        returnValue = F("Am Voresch");
        break;
    }
    case 32926:
    {
        returnValue = F("Am Vorfluter");
        break;
    }
    case 32927:
    {
        returnValue = F("Am Vorgraben");
        break;
    }
    case 32928:
    {
        returnValue = F("Am Vorgstaig");
        break;
    }
    case 32929:
    {
        returnValue = F("Am Vorholz");
        break;
    }
    case 32930:
    {
        returnValue = F("Am Vorland");
        break;
    }
    case 32931:
    {
        returnValue = F("Am Vorliek");
        break;
    }
    case 32932:
    {
        returnValue = F("Am Vornberg");
        break;
    }
    case 32933:
    {
        returnValue = F("Am Vorplatz");
        break;
    }
    case 32934:
    {
        returnValue = F("Am Vorrain");
        break;
    }
    case 32935:
    {
        returnValue = F("Am Vorspessart");
        break;
    }
    case 32936:
    {
        returnValue = F("Am Vorstadtberg");
        break;
    }
    case 32937:
    {
        returnValue = F("Am Vorstau");
        break;
    }
    case 32938:
    {
        returnValue = F("Am Vorster Bruch");
        break;
    }
    case 32939:
    {
        returnValue = F("Am Vorstgraben");
        break;
    }
    case 32940:
    {
        returnValue = F("Am Vorteich");
        break;
    }
    case 32941:
    {
        returnValue = F("Am Vorwall");
        break;
    }
    case 32942:
    {
        returnValue = F("Am Vorwerk");
        break;
    }
    case 32943:
    {
        returnValue = F("Am Vorwerksbusch");
        break;
    }
    case 32944:
    {
        returnValue = F("Am Voshövel");
        break;
    }
    case 32945:
    {
        returnValue = F("Am Vossacker");
        break;
    }
    case 32946:
    {
        returnValue = F("Am Vosseberg");
        break;
    }
    case 32947:
    {
        returnValue = F("Am Vossgraben");
        break;
    }
    case 32948:
    {
        returnValue = F("Am Vosskamp");
        break;
    }
    case 32949:
    {
        returnValue = F("Am Vossmoor");
        break;
    }
    case 32950:
    {
        returnValue = F("Am Vosspand");
        break;
    }
    case 32951:
    {
        returnValue = F("Am Vossweg");
        break;
    }
    case 32952:
    {
        returnValue = F("Am Voßbarg");
        break;
    }
    case 32953:
    {
        returnValue = F("Am Voßberg");
        break;
    }
    case 32954:
    {
        returnValue = F("Am Voßbrink");
        break;
    }
    case 32955:
    {
        returnValue = F("Am Voßkamp");
        break;
    }
    case 32956:
    {
        returnValue = F("Am Voßpattschlot");
        break;
    }
    case 32957:
    {
        returnValue = F("Am Voßschloot");
        break;
    }
    case 32958:
    {
        returnValue = F("Am Voßtor");
        break;
    }
    case 32959:
    {
        returnValue = F("Am Vredepool");
        break;
    }
    case 32960:
    {
        returnValue = F("Am Vulkaneum");
        break;
    }
    case 32961:
    {
        returnValue = F("Am Vulkanpark");
        break;
    }
    case 32962:
    {
        returnValue = F("Am Vynschen Feld");
        break;
    }
    case 32963:
    {
        returnValue = F("Am Vögelisberg");
        break;
    }
    case 32964:
    {
        returnValue = F("Am Völker");
        break;
    }
    case 32965:
    {
        returnValue = F("Am Völzbach");
        break;
    }
    case 32966:
    {
        returnValue = F("Am Vörkamp");
        break;
    }
    case 32967:
    {
        returnValue = F("Am WASAG-Bahnhof");
        break;
    }
    case 32968:
    {
        returnValue = F("Am Waag");
        break;
    }
    case 32969:
    {
        returnValue = F("Am Waaghaus");
        break;
    }
    case 32970:
    {
        returnValue = F("Am Waaghäusle");
        break;
    }
    case 32971:
    {
        returnValue = F("Am Waagrain");
        break;
    }
    case 32972:
    {
        returnValue = F("Am Waal");
        break;
    }
    case 32973:
    {
        returnValue = F("Am Waasengut");
        break;
    }
    case 32974:
    {
        returnValue = F("Am Wababerg");
        break;
    }
    case 32975:
    {
        returnValue = F("Am Wachauer Ende");
        break;
    }
    case 32976:
    {
        returnValue = F("Am Wachbaum");
        break;
    }
    case 32977:
    {
        returnValue = F("Am Wachberg");
        break;
    }
    case 32978:
    {
        returnValue = F("Am Wachbühl");
        break;
    }
    case 32979:
    {
        returnValue = F("Am Wacheberg");
        break;
    }
    case 32980:
    {
        returnValue = F("Am Wachenberg");
        break;
    }
    case 32981:
    {
        returnValue = F("Am Wachfelsen");
        break;
    }
    case 32982:
    {
        returnValue = F("Am Wachhang");
        break;
    }
    case 32983:
    {
        returnValue = F("Am Wachholder");
        break;
    }
    case 32984:
    {
        returnValue = F("Am Wachhübel");
        break;
    }
    case 32985:
    {
        returnValue = F("Am Wachhügel");
        break;
    }
    case 32986:
    {
        returnValue = F("Am Wacholder");
        break;
    }
    case 32987:
    {
        returnValue = F("Am Wacholderberg");
        break;
    }
    case 32988:
    {
        returnValue = F("Am Wacholderbusch");
        break;
    }
    case 32989:
    {
        returnValue = F("Am Wacholderholz");
        break;
    }
    case 32990:
    {
        returnValue = F("Am Wacholderpark");
        break;
    }
    case 32991:
    {
        returnValue = F("Am Wacholderrain");
        break;
    }
    case 32992:
    {
        returnValue = F("Am Wacholderstrauch");
        break;
    }
    case 32993:
    {
        returnValue = F("Am Wachsberg");
        break;
    }
    case 32994:
    {
        returnValue = F("Am Wachtberg");
        break;
    }
    case 32995:
    {
        returnValue = F("Am Wachtbuckel");
        break;
    }
    case 32996:
    {
        returnValue = F("Am Wachtbühl");
        break;
    }
    case 32997:
    {
        returnValue = F("Am Wachteberg");
        break;
    }
    case 32998:
    {
        returnValue = F("Am Wachtelbach");
        break;
    }
    case 32999:
    {
        returnValue = F("Am Wachtelberg");
        break;
    }
    case 33000:
    {
        returnValue = F("Am Wachtelrain");
        break;
    }
    case 33001:
    {
        returnValue = F("Am Wachtelschlag");
        break;
    }
    case 33002:
    {
        returnValue = F("Am Wachtfelsen");
        break;
    }
    case 33003:
    {
        returnValue = F("Am Wachtgraben");
        break;
    }
    case 33004:
    {
        returnValue = F("Am Wachthübel");
        break;
    }
    case 33005:
    {
        returnValue = F("Am Wackelberg");
        break;
    }
    case 33006:
    {
        returnValue = F("Am Wackelstein");
        break;
    }
    case 33007:
    {
        returnValue = F("Am Wackenberg");
        break;
    }
    case 33008:
    {
        returnValue = F("Am Wackenpfad");
        break;
    }
    case 33009:
    {
        returnValue = F("Am Wackensteg");
        break;
    }
    case 33010:
    {
        returnValue = F("Am Wackenstein");
        break;
    }
    case 33011:
    {
        returnValue = F("Am Wackerberg");
        break;
    }
    case 33012:
    {
        returnValue = F("Am Wadenberg");
        break;
    }
    case 33013:
    {
        returnValue = F("Am Wadtberg");
        break;
    }
    case 33014:
    {
        returnValue = F("Am Waffenhammer");
        break;
    }
    case 33015:
    {
        returnValue = F("Am Wageck");
        break;
    }
    case 33016:
    {
        returnValue = F("Am Wagenberg");
        break;
    }
    case 33017:
    {
        returnValue = F("Am Wagenweg");
        break;
    }
    case 33018:
    {
        returnValue = F("Am Waggonbau");
        break;
    }
    case 33019:
    {
        returnValue = F("Am Wagnerbaum");
        break;
    }
    case 33020:
    {
        returnValue = F("Am Wagnerberg");
        break;
    }
    case 33021:
    {
        returnValue = F("Am Wagnerfeld");
        break;
    }
    case 33022:
    {
        returnValue = F("Am Wagnergraben");
        break;
    }
    case 33023:
    {
        returnValue = F("Am Wagnersberg");
        break;
    }
    case 33024:
    {
        returnValue = F("Am Wagrain");
        break;
    }
    case 33025:
    {
        returnValue = F("Am Wahl");
        break;
    }
    case 33026:
    {
        returnValue = F("Am Wahlberg");
        break;
    }
    case 33027:
    {
        returnValue = F("Am Wahlebach");
        break;
    }
    case 33028:
    {
        returnValue = F("Am Wahlend");
        break;
    }
    case 33029:
    {
        returnValue = F("Am Wahlsberg");
        break;
    }
    case 33030:
    {
        returnValue = F("Am Wahrbühl");
        break;
    }
    case 33031:
    {
        returnValue = F("Am Wahrensee");
        break;
    }
    case 33032:
    {
        returnValue = F("Am Waidengraben");
        break;
    }
    case 33033:
    {
        returnValue = F("Am Waidgarten");
        break;
    }
    case 33034:
    {
        returnValue = F("Am Waidhof");
        break;
    }
    case 33035:
    {
        returnValue = F("Am Waidstein");
        break;
    }
    case 33036:
    {
        returnValue = F("Am Waillenbach");
        break;
    }
    case 33037:
    {
        returnValue = F("Am Waischbach");
        break;
    }
    case 33038:
    {
        returnValue = F("Am Waizenbach");
        break;
    }
    case 33039:
    {
        returnValue = F("Am Waizenhof");
        break;
    }
    case 33040:
    {
        returnValue = F("Am Wal");
        break;
    }
    case 33041:
    {
        returnValue = F("Am Walberberg");
        break;
    }
    case 33042:
    {
        returnValue = F("Am Walberg");
        break;
    }
    case 33043:
    {
        returnValue = F("Am Walberstück");
        break;
    }
    case 33044:
    {
        returnValue = F("Am Walburger Weg");
        break;
    }
    case 33045:
    {
        returnValue = F("Am Walch");
        break;
    }
    case 33046:
    {
        returnValue = F("Am Wald");
        break;
    }
    case 33047:
    {
        returnValue = F("Am Waldachufer");
        break;
    }
    case 33048:
    {
        returnValue = F("Am Waldacker");
        break;
    }
    case 33049:
    {
        returnValue = F("Am Waldanger");
        break;
    }
    case 33050:
    {
        returnValue = F("Am Waldau");
        break;
    }
    case 33051:
    {
        returnValue = F("Am Waldbach");
        break;
    }
    case 33052:
    {
        returnValue = F("Am Waldbad");
        break;
    }
    case 33053:
    {
        returnValue = F("Am Waldbahnhof");
        break;
    }
    case 33054:
    {
        returnValue = F("Am Waldberg");
        break;
    }
    case 33055:
    {
        returnValue = F("Am Waldblick");
        break;
    }
    case 33056:
    {
        returnValue = F("Am Waldborn");
        break;
    }
    case 33057:
    {
        returnValue = F("Am Waldbrunnen");
        break;
    }
    case 33058:
    {
        returnValue = F("Am Walde");
        break;
    }
    case 33059:
    {
        returnValue = F("Am Waldeck");
        break;
    }
    case 33060:
    {
        returnValue = F("Am Waldeck Radrundweg Plauer See");
        break;
    }
    case 33061:
    {
        returnValue = F("Am Waldemarplatz");
        break;
    }
    case 33062:
    {
        returnValue = F("Am Waldend");
        break;
    }
    case 33063:
    {
        returnValue = F("Am Waldesrand");
        break;
    }
    case 33064:
    {
        returnValue = F("Am Waldessaum");
        break;
    }
    case 33065:
    {
        returnValue = F("Am Waldfeld");
        break;
    }
    case 33066:
    {
        returnValue = F("Am Waldfestplatz");
        break;
    }
    case 33067:
    {
        returnValue = F("Am Waldfrieden");
        break;
    }
    case 33068:
    {
        returnValue = F("Am Waldfriedhof");
        break;
    }
    case 33069:
    {
        returnValue = F("Am Waldgarten");
        break;
    }
    case 33070:
    {
        returnValue = F("Am Waldgraben");
        break;
    }
    case 33071:
    {
        returnValue = F("Am Waldhang");
        break;
    }
    case 33072:
    {
        returnValue = F("Am Waldhauer");
        break;
    }
    case 33073:
    {
        returnValue = F("Am Waldhaus");
        break;
    }
    case 33074:
    {
        returnValue = F("Am Waldheim");
        break;
    }
    case 33075:
    {
        returnValue = F("Am Waldhof");
        break;
    }
    case 33076:
    {
        returnValue = F("Am Waldholz");
        break;
    }
    case 33077:
    {
        returnValue = F("Am Waldhübel");
        break;
    }
    case 33078:
    {
        returnValue = F("Am Waldidyll");
        break;
    }
    case 33079:
    {
        returnValue = F("Am Waldkater");
        break;
    }
    case 33080:
    {
        returnValue = F("Am Waldkletterpark");
        break;
    }
    case 33081:
    {
        returnValue = F("Am Waldl");
        break;
    }
    case 33082:
    {
        returnValue = F("Am Waldmorgen");
        break;
    }
    case 33083:
    {
        returnValue = F("Am Waldmuseum");
        break;
    }
    case 33084:
    {
        returnValue = F("Am Waldpark");
        break;
    }
    case 33085:
    {
        returnValue = F("Am Waldpfad");
        break;
    }
    case 33086:
    {
        returnValue = F("Am Waldrain");
        break;
    }
    case 33087:
    {
        returnValue = F("Am Waldrand");
        break;
    }
    case 33088:
    {
        returnValue = F("Am Waldring");
        break;
    }
    case 33089:
    {
        returnValue = F("Am Waldsaum");
        break;
    }
    case 33090:
    {
        returnValue = F("Am Waldschlösschen");
        break;
    }
    case 33091:
    {
        returnValue = F("Am Waldschlößchen");
        break;
    }
    case 33092:
    {
        returnValue = F("Am Waldschwimmbad");
        break;
    }
    case 33093:
    {
        returnValue = F("Am Waldsee");
        break;
    }
    case 33094:
    {
        returnValue = F("Am Waldseebad");
        break;
    }
    case 33095:
    {
        returnValue = F("Am Waldsportplatz");
        break;
    }
    case 33096:
    {
        returnValue = F("Am Waldstadion");
        break;
    }
    case 33097:
    {
        returnValue = F("Am Waldstall");
        break;
    }
    case 33098:
    {
        returnValue = F("Am Waldstich");
        break;
    }
    case 33099:
    {
        returnValue = F("Am Waldstrauch");
        break;
    }
    case 33100:
    {
        returnValue = F("Am Waldweg");
        break;
    }
    case 33101:
    {
        returnValue = F("Am Waldweiher");
        break;
    }
    case 33102:
    {
        returnValue = F("Am Waldwinkel");
        break;
    }
    case 33103:
    {
        returnValue = F("Am Waldzipfel");
        break;
    }
    case 33104:
    {
        returnValue = F("Am Walgerbach");
        break;
    }
    case 33105:
    {
        returnValue = F("Am Walkenrain");
        break;
    }
    case 33106:
    {
        returnValue = F("Am Walkersbach");
        break;
    }
    case 33107:
    {
        returnValue = F("Am Walkmühlengraben");
        break;
    }
    case 33108:
    {
        returnValue = F("Am Walkmüller Holz");
        break;
    }
    case 33109:
    {
        returnValue = F("Am Walkweiher");
        break;
    }
    case 33110:
    {
        returnValue = F("Am Wall");
        break;
    }
    case 33111:
    {
        returnValue = F("Am Wallacker");
        break;
    }
    case 33112:
    {
        returnValue = F("Am Wallbach");
        break;
    }
    case 33113:
    {
        returnValue = F("Am Wallberg");
        break;
    }
    case 33114:
    {
        returnValue = F("Am Walle");
        break;
    }
    case 33115:
    {
        returnValue = F("Am Wallenbach");
        break;
    }
    case 33116:
    {
        returnValue = F("Am Wallenbaum");
        break;
    }
    case 33117:
    {
        returnValue = F("Am Wallenborn");
        break;
    }
    case 33118:
    {
        returnValue = F("Am Wallensteingraben");
        break;
    }
    case 33119:
    {
        returnValue = F("Am Wallersteig");
        break;
    }
    case 33120:
    {
        returnValue = F("Am Wallerstädter Weg");
        break;
    }
    case 33121:
    {
        returnValue = F("Am Wallesborn");
        break;
    }
    case 33122:
    {
        returnValue = F("Am Wallgarten");
        break;
    }
    case 33123:
    {
        returnValue = F("Am Wallgraben");
        break;
    }
    case 33124:
    {
        returnValue = F("Am Wallhof");
        break;
    }
    case 33125:
    {
        returnValue = F("Am Wallholz");
        break;
    }
    case 33126:
    {
        returnValue = F("Am Wallhotel");
        break;
    }
    case 33127:
    {
        returnValue = F("Am Wallhügel");
        break;
    }
    case 33128:
    {
        returnValue = F("Am Wallmoor");
        break;
    }
    case 33129:
    {
        returnValue = F("Am Wallnerberg");
        break;
    }
    case 33130:
    {
        returnValue = F("Am Wallnussbaum");
        break;
    }
    case 33131:
    {
        returnValue = F("Am Wallrabsholz");
        break;
    }
    case 33132:
    {
        returnValue = F("Am Wallring");
        break;
    }
    case 33133:
    {
        returnValue = F("Am Wallschen Rode");
        break;
    }
    case 33134:
    {
        returnValue = F("Am Wallschloot");
        break;
    }
    case 33135:
    {
        returnValue = F("Am Wallteich");
        break;
    }
    case 33136:
    {
        returnValue = F("Am Walltor");
        break;
    }
    case 33137:
    {
        returnValue = F("Am Walnussbaum");
        break;
    }
    case 33138:
    {
        returnValue = F("Am Walperloh");
        break;
    }
    case 33139:
    {
        returnValue = F("Am Waltersbach");
        break;
    }
    case 33140:
    {
        returnValue = F("Am Waltersbühl");
        break;
    }
    case 33141:
    {
        returnValue = F("Am Waltersgarten");
        break;
    }
    case 33142:
    {
        returnValue = F("Am Waltersweiher");
        break;
    }
    case 33143:
    {
        returnValue = F("Am Walthersee");
        break;
    }
    case 33144:
    {
        returnValue = F("Am Walthersgrund");
        break;
    }
    case 33145:
    {
        returnValue = F("Am Waltinger Weg");
        break;
    }
    case 33146:
    {
        returnValue = F("Am Walzbach");
        break;
    }
    case 33147:
    {
        returnValue = F("Am Walzwerk");
        break;
    }
    case 33148:
    {
        returnValue = F("Am Wanderweg");
        break;
    }
    case 33149:
    {
        returnValue = F("Am Wandrahmen");
        break;
    }
    case 33150:
    {
        returnValue = F("Am Wang");
        break;
    }
    case 33151:
    {
        returnValue = F("Am Wangenbach");
        break;
    }
    case 33152:
    {
        returnValue = F("Am Wangermeer");
        break;
    }
    case 33153:
    {
        returnValue = F("Am Wangertief");
        break;
    }
    case 33154:
    {
        returnValue = F("Am Wanggießen");
        break;
    }
    case 33155:
    {
        returnValue = F("Am Wannberg");
        break;
    }
    case 33156:
    {
        returnValue = F("Am Wanneberg");
        break;
    }
    case 33157:
    {
        returnValue = F("Am Wannekop");
        break;
    }
    case 33158:
    {
        returnValue = F("Am Wannenberg");
        break;
    }
    case 33159:
    {
        returnValue = F("Am Wannenbuck");
        break;
    }
    case 33160:
    {
        returnValue = F("Am Wannenrain");
        break;
    }
    case 33161:
    {
        returnValue = F("Am Wannenweg");
        break;
    }
    case 33162:
    {
        returnValue = F("Am Wanningers Garten");
        break;
    }
    case 33163:
    {
        returnValue = F("Am Wanzkaer See");
        break;
    }
    case 33164:
    {
        returnValue = F("Am Wapelbach");
        break;
    }
    case 33165:
    {
        returnValue = F("Am Warberg");
        break;
    }
    case 33166:
    {
        returnValue = F("Am Warf");
        break;
    }
    case 33167:
    {
        returnValue = F("Am Warftacker");
        break;
    }
    case 33168:
    {
        returnValue = F("Am Warndtgymnasium");
        break;
    }
    case 33169:
    {
        returnValue = F("Am Warneckenberg");
        break;
    }
    case 33170:
    {
        returnValue = F("Am Warsbergerhof");
        break;
    }
    case 33171:
    {
        returnValue = F("Am Wartbaum");
        break;
    }
    case 33172:
    {
        returnValue = F("Am Wartberg");
        break;
    }
    case 33173:
    {
        returnValue = F("Am Warteberg");
        break;
    }
    case 33174:
    {
        returnValue = F("Am Wartehübel");
        break;
    }
    case 33175:
    {
        returnValue = F("Am Wartenberg");
        break;
    }
    case 33176:
    {
        returnValue = F("Am Wartenwald");
        break;
    }
    case 33177:
    {
        returnValue = F("Am Wartheberg");
        break;
    }
    case 33178:
    {
        returnValue = F("Am Warthweg");
        break;
    }
    case 33179:
    {
        returnValue = F("Am Wartweg");
        break;
    }
    case 33180:
    {
        returnValue = F("Am Wasberg");
        break;
    }
    case 33181:
    {
        returnValue = F("Am Waschbach");
        break;
    }
    case 33182:
    {
        returnValue = F("Am Waschberg");
        break;
    }
    case 33183:
    {
        returnValue = F("Am Waschbrunnen");
        break;
    }
    case 33184:
    {
        returnValue = F("Am Waschdiek");
        break;
    }
    case 33185:
    {
        returnValue = F("Am Waschweiher");
        break;
    }
    case 33186:
    {
        returnValue = F("Am Waseme");
        break;
    }
    case 33187:
    {
        returnValue = F("Am Wasen");
        break;
    }
    case 33188:
    {
        returnValue = F("Am Wasenbrunnen");
        break;
    }
    case 33189:
    {
        returnValue = F("Am Wasenmoos");
        break;
    }
    case 33190:
    {
        returnValue = F("Am Waserturm");
        break;
    }
    case 33191:
    {
        returnValue = F("Am Wasl");
        break;
    }
    case 33192:
    {
        returnValue = F("Am Wasser");
        break;
    }
    case 33193:
    {
        returnValue = F("Am Wasserbassin");
        break;
    }
    case 33194:
    {
        returnValue = F("Am Wasserbau");
        break;
    }
    case 33195:
    {
        returnValue = F("Am Wasserbaum");
        break;
    }
    case 33196:
    {
        returnValue = F("Am Wasserberg");
        break;
    }
    case 33197:
    {
        returnValue = F("Am Wasserbett");
        break;
    }
    case 33198:
    {
        returnValue = F("Am Wasserbogen");
        break;
    }
    case 33199:
    {
        returnValue = F("Am Wasserfall");
        break;
    }
    case 33200:
    {
        returnValue = F("Am Wasserfeld");
        break;
    }
    case 33201:
    {
        returnValue = F("Am Wassergarten");
        break;
    }
    case 33202:
    {
        returnValue = F("Am Wassergraben");
        break;
    }
    case 33203:
    {
        returnValue = F("Am Wasserhaus");
        break;
    }
    case 33204:
    {
        returnValue = F("Am Wasserhorn");
        break;
    }
    case 33205:
    {
        returnValue = F("Am Wasserhäuschen");
        break;
    }
    case 33206:
    {
        returnValue = F("Am Wasserhäusl");
        break;
    }
    case 33207:
    {
        returnValue = F("Am Wasserhäusle");
        break;
    }
    case 33208:
    {
        returnValue = F("Am Wasserkraftwerk");
        break;
    }
    case 33209:
    {
        returnValue = F("Am Wasserlauf");
        break;
    }
    case 33210:
    {
        returnValue = F("Am Wasserloch");
        break;
    }
    case 33211:
    {
        returnValue = F("Am Wasserloof");
        break;
    }
    case 33212:
    {
        returnValue = F("Am Wasserloser Tor");
        break;
    }
    case 33213:
    {
        returnValue = F("Am Wasserrad");
        break;
    }
    case 33214:
    {
        returnValue = F("Am Wasserrain");
        break;
    }
    case 33215:
    {
        returnValue = F("Am Wasserschloß");
        break;
    }
    case 33216:
    {
        returnValue = F("Am Wassersee");
        break;
    }
    case 33217:
    {
        returnValue = F("Am Wasserstall");
        break;
    }
    case 33218:
    {
        returnValue = F("Am Wasserstein");
        break;
    }
    case 33219:
    {
        returnValue = F("Am Wasserstollen");
        break;
    }
    case 33220:
    {
        returnValue = F("Am Wasserstrich");
        break;
    }
    case 33221:
    {
        returnValue = F("Am Wasserstuhl");
        break;
    }
    case 33222:
    {
        returnValue = F("Am Wassertal");
        break;
    }
    case 33223:
    {
        returnValue = F("Am Wassertor");
        break;
    }
    case 33224:
    {
        returnValue = F("Am Wassertrog");
        break;
    }
    case 33225:
    {
        returnValue = F("Am Wassertrum");
        break;
    }
    case 33226:
    {
        returnValue = F("Am Wasserturm");
        break;
    }
    case 33227:
    {
        returnValue = F("Am Wasserweg");
        break;
    }
    case 33228:
    {
        returnValue = F("Am Wasserwehr");
        break;
    }
    case 33229:
    {
        returnValue = F("Am Wasserwerk");
        break;
    }
    case 33230:
    {
        returnValue = F("Am Wassum");
        break;
    }
    case 33231:
    {
        returnValue = F("Am Wastlberg");
        break;
    }
    case 33232:
    {
        returnValue = F("Am Watberg");
        break;
    }
    case 33233:
    {
        returnValue = F("Am Waterkamp");
        break;
    }
    case 33234:
    {
        returnValue = F("Am Waterpool");
        break;
    }
    case 33235:
    {
        returnValue = F("Am Wattberg");
        break;
    }
    case 33236:
    {
        returnValue = F("Am Wattenbach");
        break;
    }
    case 33237:
    {
        returnValue = F("Am Wattenberg");
        break;
    }
    case 33238:
    {
        returnValue = F("Am Wattenmeer");
        break;
    }
    case 33239:
    {
        returnValue = F("Am Watzeborn");
        break;
    }
    case 33240:
    {
        returnValue = F("Am Watzenbach");
        break;
    }
    case 33241:
    {
        returnValue = F("Am Waymannshof");
        break;
    }
    case 33242:
    {
        returnValue = F("Am Waßberg");
        break;
    }
    case 33243:
    {
        returnValue = F("Am Webelsbach");
        break;
    }
    case 33244:
    {
        returnValue = F("Am Webenheimer Bösch");
        break;
    }
    case 33245:
    {
        returnValue = F("Am Weberacker");
        break;
    }
    case 33246:
    {
        returnValue = F("Am Weberanger");
        break;
    }
    case 33247:
    {
        returnValue = F("Am Weberbachl");
        break;
    }
    case 33248:
    {
        returnValue = F("Am Weberberg");
        break;
    }
    case 33249:
    {
        returnValue = F("Am Weberbrunnen");
        break;
    }
    case 33250:
    {
        returnValue = F("Am Webergarten");
        break;
    }
    case 33251:
    {
        returnValue = F("Am Webermoor");
        break;
    }
    case 33252:
    {
        returnValue = F("Am Weberpark");
        break;
    }
    case 33253:
    {
        returnValue = F("Am Weberplatz");
        break;
    }
    case 33254:
    {
        returnValue = F("Am Webersbüschken");
        break;
    }
    case 33255:
    {
        returnValue = F("Am Weberschiffchen");
        break;
    }
    case 33256:
    {
        returnValue = F("Am Webersfeld");
        break;
    }
    case 33257:
    {
        returnValue = F("Am Webersgraben");
        break;
    }
    case 33258:
    {
        returnValue = F("Am Webertor");
        break;
    }
    case 33259:
    {
        returnValue = F("Am Webstuhl");
        break;
    }
    case 33260:
    {
        returnValue = F("Am Wechsel");
        break;
    }
    case 33261:
    {
        returnValue = F("Am Wechselbühl");
        break;
    }
    case 33262:
    {
        returnValue = F("Am Wechter Mühlenbach");
        break;
    }
    case 33263:
    {
        returnValue = F("Am Weckberg");
        break;
    }
    case 33264:
    {
        returnValue = F("Am Weckelweiler Weg");
        break;
    }
    case 33265:
    {
        returnValue = F("Am Weckersgraben");
        break;
    }
    case 33266:
    {
        returnValue = F("Am Weddel");
        break;
    }
    case 33267:
    {
        returnValue = F("Am Wedder");
        break;
    }
    case 33268:
    {
        returnValue = F("Am Wedelbach");
        break;
    }
    case 33269:
    {
        returnValue = F("Am Wedelgraben");
        break;
    }
    case 33270:
    {
        returnValue = F("Am Wedem Hoven");
        break;
    }
    case 33271:
    {
        returnValue = F("Am Weden");
        break;
    }
    case 33272:
    {
        returnValue = F("Am Wedenbach");
        break;
    }
    case 33273:
    {
        returnValue = F("Am Wedenberg");
        break;
    }
    case 33274:
    {
        returnValue = F("Am Weesterstich");
        break;
    }
    case 33275:
    {
        returnValue = F("Am Weg beim Kreuz");
        break;
    }
    case 33276:
    {
        returnValue = F("Am Weg zur Gleuenbrücke");
        break;
    }
    case 33277:
    {
        returnValue = F("Am Wegacker");
        break;
    }
    case 33278:
    {
        returnValue = F("Am Wegberg");
        break;
    }
    case 33279:
    {
        returnValue = F("Am Wege");
        break;
    }
    case 33280:
    {
        returnValue = F("Am Wege nach Ballstedt");
        break;
    }
    case 33281:
    {
        returnValue = F("Am Wege nach Stipsdorf");
        break;
    }
    case 33282:
    {
        returnValue = F("Am Wege nach Thalborn");
        break;
    }
    case 33283:
    {
        returnValue = F("Am Wegehaspel");
        break;
    }
    case 33284:
    {
        returnValue = F("Am Wegekreuz");
        break;
    }
    case 33285:
    {
        returnValue = F("Am Wegen");
        break;
    }
    case 33286:
    {
        returnValue = F("Am Wegerich");
        break;
    }
    case 33287:
    {
        returnValue = F("Am Wegesende");
        break;
    }
    case 33288:
    {
        returnValue = F("Am Wegfeld");
        break;
    }
    case 33289:
    {
        returnValue = F("Am Weghause");
        break;
    }
    case 33290:
    {
        returnValue = F("Am Wegkreuz \"Zur Stätte");
        break;
    }
    case 33291:
    {
        returnValue = F("Am Weglanger");
        break;
    }
    case 33292:
    {
        returnValue = F("Am Weglein");
        break;
    }
    case 33293:
    {
        returnValue = F("Am Wegmannbichl");
        break;
    }
    case 33294:
    {
        returnValue = F("Am Wegscheid");
        break;
    }
    case 33295:
    {
        returnValue = F("Am Wegweiser");
        break;
    }
    case 33296:
    {
        returnValue = F("Am Wegäcker");
        break;
    }
    case 33297:
    {
        returnValue = F("Am Wehberg");
        break;
    }
    case 33298:
    {
        returnValue = F("Am Wehe");
        break;
    }
    case 33299:
    {
        returnValue = F("Am Wehebach");
        break;
    }
    case 33300:
    {
        returnValue = F("Am Wehelitzer Berg");
        break;
    }
    case 33301:
    {
        returnValue = F("Am Wehl");
        break;
    }
    case 33302:
    {
        returnValue = F("Am Wehlen");
        break;
    }
    case 33303:
    {
        returnValue = F("Am Wehnert");
        break;
    }
    case 33304:
    {
        returnValue = F("Am Wehr");
        break;
    }
    case 33305:
    {
        returnValue = F("Am Wehrbach");
        break;
    }
    case 33306:
    {
        returnValue = F("Am Wehrberg");
        break;
    }
    case 33307:
    {
        returnValue = F("Am Wehrbuck");
        break;
    }
    case 33308:
    {
        returnValue = F("Am Wehrbusch");
        break;
    }
    case 33309:
    {
        returnValue = F("Am Wehrbüsch");
        break;
    }
    case 33310:
    {
        returnValue = F("Am Wehrfeld");
        break;
    }
    case 33311:
    {
        returnValue = F("Am Wehrgang");
        break;
    }
    case 33312:
    {
        returnValue = F("Am Wehrgarten");
        break;
    }
    case 33313:
    {
        returnValue = F("Am Wehrgraben");
        break;
    }
    case 33314:
    {
        returnValue = F("Am Wehrhahn");
        break;
    }
    case 33315:
    {
        returnValue = F("Am Wehrhaus");
        break;
    }
    case 33316:
    {
        returnValue = F("Am Wehrholz");
        break;
    }
    case 33317:
    {
        returnValue = F("Am Wehrkamp");
        break;
    }
    case 33318:
    {
        returnValue = F("Am Wehrleweg");
        break;
    }
    case 33319:
    {
        returnValue = F("Am Wehrsteg");
        break;
    }
    case 33320:
    {
        returnValue = F("Am Wehrteich");
        break;
    }
    case 33321:
    {
        returnValue = F("Am Wehrturm");
        break;
    }
    case 33322:
    {
        returnValue = F("Am Wehrweiher");
        break;
    }
    case 33323:
    {
        returnValue = F("Am Wehweg");
        break;
    }
    case 33324:
    {
        returnValue = F("Am Weiberdeich");
        break;
    }
    case 33325:
    {
        returnValue = F("Am Weibersbach");
        break;
    }
    case 33326:
    {
        returnValue = F("Am Weichberg");
        break;
    }
    case 33327:
    {
        returnValue = F("Am Weichenwang");
        break;
    }
    case 33328:
    {
        returnValue = F("Am Weicherberg");
        break;
    }
    case 33329:
    {
        returnValue = F("Am Weichhaus");
        break;
    }
    case 33330:
    {
        returnValue = F("Am Weichselbaum");
        break;
    }
    case 33331:
    {
        returnValue = F("Am Weichselberg");
        break;
    }
    case 33332:
    {
        returnValue = F("Am Weichselgarten");
        break;
    }
    case 33333:
    {
        returnValue = F("Am Weidach");
        break;
    }
    case 33334:
    {
        returnValue = F("Am Weidacker");
        break;
    }
    case 33335:
    {
        returnValue = F("Am Weidaer Tor");
        break;
    }
    case 33336:
    {
        returnValue = F("Am Weidanger");
        break;
    }
    case 33337:
    {
        returnValue = F("Am Weidbach");
        break;
    }
    case 33338:
    {
        returnValue = F("Am Weidberg");
        break;
    }
    case 33339:
    {
        returnValue = F("Am Weidblech");
        break;
    }
    case 33340:
    {
        returnValue = F("Am Weidboden");
        break;
    }
    case 33341:
    {
        returnValue = F("Am Weidchen");
        break;
    }
    case 33342:
    {
        returnValue = F("Am Weide");
        break;
    }
    case 33343:
    {
        returnValue = F("Am Weidebogen");
        break;
    }
    case 33344:
    {
        returnValue = F("Am Weidefeld");
        break;
    }
    case 33345:
    {
        returnValue = F("Am Weidegrund");
        break;
    }
    case 33346:
    {
        returnValue = F("Am Weidegut");
        break;
    }
    case 33347:
    {
        returnValue = F("Am Weidehang");
        break;
    }
    case 33348:
    {
        returnValue = F("Am Weidehof");
        break;
    }
    case 33349:
    {
        returnValue = F("Am Weidekamp");
        break;
    }
    case 33350:
    {
        returnValue = F("Am Weidelbach");
        break;
    }
    case 33351:
    {
        returnValue = F("Am Weidenbach");
        break;
    }
    case 33352:
    {
        returnValue = F("Am Weidenbaum");
        break;
    }
    case 33353:
    {
        returnValue = F("Am Weidenberg");
        break;
    }
    case 33354:
    {
        returnValue = F("Am Weidenborn");
        break;
    }
    case 33355:
    {
        returnValue = F("Am Weidenbrink");
        break;
    }
    case 33356:
    {
        returnValue = F("Am Weidenbruch");
        break;
    }
    case 33357:
    {
        returnValue = F("Am Weidenbrunn");
        break;
    }
    case 33358:
    {
        returnValue = F("Am Weidenbrunnen");
        break;
    }
    case 33359:
    {
        returnValue = F("Am Weidenbusch");
        break;
    }
    case 33360:
    {
        returnValue = F("Am Weidenbächle");
        break;
    }
    case 33361:
    {
        returnValue = F("Am Weidendamm");
        break;
    }
    case 33362:
    {
        returnValue = F("Am Weidenesch");
        break;
    }
    case 33363:
    {
        returnValue = F("Am Weidengarten");
        break;
    }
    case 33364:
    {
        returnValue = F("Am Weidengehölz");
        break;
    }
    case 33365:
    {
        returnValue = F("Am Weidengraben");
        break;
    }
    case 33366:
    {
        returnValue = F("Am Weidengrund");
        break;
    }
    case 33367:
    {
        returnValue = F("Am Weidengässlein");
        break;
    }
    case 33368:
    {
        returnValue = F("Am Weidenhain");
        break;
    }
    case 33369:
    {
        returnValue = F("Am Weidenhof");
        break;
    }
    case 33370:
    {
        returnValue = F("Am Weidenhofe");
        break;
    }
    case 33371:
    {
        returnValue = F("Am Weidenhäuser Bahnhof");
        break;
    }
    case 33372:
    {
        returnValue = F("Am Weidenkamp");
        break;
    }
    case 33373:
    {
        returnValue = F("Am Weidenpark");
        break;
    }
    case 33374:
    {
        returnValue = F("Am Weidenplan");
        break;
    }
    case 33375:
    {
        returnValue = F("Am Weidenrain");
        break;
    }
    case 33376:
    {
        returnValue = F("Am Weidenring");
        break;
    }
    case 33377:
    {
        returnValue = F("Am Weidenrot");
        break;
    }
    case 33378:
    {
        returnValue = F("Am Weidenröschen");
        break;
    }
    case 33379:
    {
        returnValue = F("Am Weidensatz");
        break;
    }
    case 33380:
    {
        returnValue = F("Am Weidenschlag");
        break;
    }
    case 33381:
    {
        returnValue = F("Am Weidensee");
        break;
    }
    case 33382:
    {
        returnValue = F("Am Weidenstock");
        break;
    }
    case 33383:
    {
        returnValue = F("Am Weidenstrauch");
        break;
    }
    case 33384:
    {
        returnValue = F("Am Weidenstück");
        break;
    }
    case 33385:
    {
        returnValue = F("Am Weidenteich");
        break;
    }
    case 33386:
    {
        returnValue = F("Am Weidenweg");
        break;
    }
    case 33387:
    {
        returnValue = F("Am Weidenwinkel");
        break;
    }
    case 33388:
    {
        returnValue = F("Am Weiderdamm");
        break;
    }
    case 33389:
    {
        returnValue = F("Am Weides");
        break;
    }
    case 33390:
    {
        returnValue = F("Am Weidesbach");
        break;
    }
    case 33391:
    {
        returnValue = F("Am Weideweg");
        break;
    }
    case 33392:
    {
        returnValue = F("Am Weidig");
        break;
    }
    case 33393:
    {
        returnValue = F("Am Weidigt");
        break;
    }
    case 33394:
    {
        returnValue = F("Am Weidkamp");
        break;
    }
    case 33395:
    {
        returnValue = F("Am Weidkippel");
        break;
    }
    case 33396:
    {
        returnValue = F("Am Weidl");
        break;
    }
    case 33397:
    {
        returnValue = F("Am Weidlegraben");
        break;
    }
    case 33398:
    {
        returnValue = F("Am Weidmoos");
        break;
    }
    case 33399:
    {
        returnValue = F("Am Weidnerhof");
        break;
    }
    case 33400:
    {
        returnValue = F("Am Weidstück");
        break;
    }
    case 33401:
    {
        returnValue = F("Am Weier");
        break;
    }
    case 33402:
    {
        returnValue = F("Am Weieracker");
        break;
    }
    case 33403:
    {
        returnValue = F("Am Weierberg");
        break;
    }
    case 33404:
    {
        returnValue = F("Am Weierich");
        break;
    }
    case 33405:
    {
        returnValue = F("Am Weiersborn");
        break;
    }
    case 33406:
    {
        returnValue = F("Am Weigenbach");
        break;
    }
    case 33407:
    {
        returnValue = F("Am Weigert");
        break;
    }
    case 33408:
    {
        returnValue = F("Am Weiglfeld");
        break;
    }
    case 33409:
    {
        returnValue = F("Am Weigoldsberg");
        break;
    }
    case 33410:
    {
        returnValue = F("Am Weihbach");
        break;
    }
    case 33411:
    {
        returnValue = F("Am Weihbusch");
        break;
    }
    case 33412:
    {
        returnValue = F("Am Weihbühlpfad");
        break;
    }
    case 33413:
    {
        returnValue = F("Am Weihenbaum");
        break;
    }
    case 33414:
    {
        returnValue = F("Am Weiher");
        break;
    }
    case 33415:
    {
        returnValue = F("Am Weiher Trockt");
        break;
    }
    case 33416:
    {
        returnValue = F("Am Weiheracker");
        break;
    }
    case 33417:
    {
        returnValue = F("Am Weiheranger");
        break;
    }
    case 33418:
    {
        returnValue = F("Am Weiherbach");
        break;
    }
    case 33419:
    {
        returnValue = F("Am Weiherbachl");
        break;
    }
    case 33420:
    {
        returnValue = F("Am Weiherberg");
        break;
    }
    case 33421:
    {
        returnValue = F("Am Weiherboden");
        break;
    }
    case 33422:
    {
        returnValue = F("Am Weiherborn");
        break;
    }
    case 33423:
    {
        returnValue = F("Am Weiherbruck");
        break;
    }
    case 33424:
    {
        returnValue = F("Am Weiherbrunn");
        break;
    }
    case 33425:
    {
        returnValue = F("Am Weiherbrunnen");
        break;
    }
    case 33426:
    {
        returnValue = F("Am Weiherbrünnlein");
        break;
    }
    case 33427:
    {
        returnValue = F("Am Weiherdamm");
        break;
    }
    case 33428:
    {
        returnValue = F("Am Weiherespan");
        break;
    }
    case 33429:
    {
        returnValue = F("Am Weiherfeld");
        break;
    }
    case 33430:
    {
        returnValue = F("Am Weihergarten");
        break;
    }
    case 33431:
    {
        returnValue = F("Am Weihergraben");
        break;
    }
    case 33432:
    {
        returnValue = F("Am Weihergrund");
        break;
    }
    case 33433:
    {
        returnValue = F("Am Weiherhaus");
        break;
    }
    case 33434:
    {
        returnValue = F("Am Weiherhof");
        break;
    }
    case 33435:
    {
        returnValue = F("Am Weiherholz");
        break;
    }
    case 33436:
    {
        returnValue = F("Am Weiherle");
        break;
    }
    case 33437:
    {
        returnValue = F("Am Weiherleberg");
        break;
    }
    case 33438:
    {
        returnValue = F("Am Weiherlein");
        break;
    }
    case 33439:
    {
        returnValue = F("Am Weihermahd");
        break;
    }
    case 33440:
    {
        returnValue = F("Am Weiherplatz");
        break;
    }
    case 33441:
    {
        returnValue = F("Am Weiherrain");
        break;
    }
    case 33442:
    {
        returnValue = F("Am Weihersbach");
        break;
    }
    case 33443:
    {
        returnValue = F("Am Weihersberg");
        break;
    }
    case 33444:
    {
        returnValue = F("Am Weihersbrunnen");
        break;
    }
    case 33445:
    {
        returnValue = F("Am Weihersgarten");
        break;
    }
    case 33446:
    {
        returnValue = F("Am Weihersgraben");
        break;
    }
    case 33447:
    {
        returnValue = F("Am Weihersgrund");
        break;
    }
    case 33448:
    {
        returnValue = F("Am Weiherstein");
        break;
    }
    case 33449:
    {
        returnValue = F("Am Weiherstück");
        break;
    }
    case 33450:
    {
        returnValue = F("Am Weihertal");
        break;
    }
    case 33451:
    {
        returnValue = F("Am Weiherteil");
        break;
    }
    case 33452:
    {
        returnValue = F("Am Weihertorplatz");
        break;
    }
    case 33453:
    {
        returnValue = F("Am Weiherweg");
        break;
    }
    case 33454:
    {
        returnValue = F("Am Weihnachtsgraben");
        break;
    }
    case 33455:
    {
        returnValue = F("Am Weikers");
        break;
    }
    case 33456:
    {
        returnValue = F("Am Weikert");
        break;
    }
    case 33457:
    {
        returnValue = F("Am Weikertshofer Feld");
        break;
    }
    case 33458:
    {
        returnValue = F("Am Weilachfeld");
        break;
    }
    case 33459:
    {
        returnValue = F("Am Weilenbach");
        break;
    }
    case 33460:
    {
        returnValue = F("Am Weilenberg");
        break;
    }
    case 33461:
    {
        returnValue = F("Am Weiler");
        break;
    }
    case 33462:
    {
        returnValue = F("Am Weiler Pfad");
        break;
    }
    case 33463:
    {
        returnValue = F("Am Weiler Weg");
        break;
    }
    case 33464:
    {
        returnValue = F("Am Weilerbach");
        break;
    }
    case 33465:
    {
        returnValue = F("Am Weilerberg");
        break;
    }
    case 33466:
    {
        returnValue = F("Am Weilerhau");
        break;
    }
    case 33467:
    {
        returnValue = F("Am Weilerhof");
        break;
    }
    case 33468:
    {
        returnValue = F("Am Weilerweg");
        break;
    }
    case 33469:
    {
        returnValue = F("Am Weilheimer Weg");
        break;
    }
    case 33470:
    {
        returnValue = F("Am Weilnbach");
        break;
    }
    case 33471:
    {
        returnValue = F("Am Weilsberg");
        break;
    }
    case 33472:
    {
        returnValue = F("Am Weilsgarten");
        break;
    }
    case 33473:
    {
        returnValue = F("Am Weimarer Berg");
        break;
    }
    case 33474:
    {
        returnValue = F("Am Weimarweg");
        break;
    }
    case 33475:
    {
        returnValue = F("Am Weimer");
        break;
    }
    case 33476:
    {
        returnValue = F("Am Weimersberg");
        break;
    }
    case 33477:
    {
        returnValue = F("Am Weinacker");
        break;
    }
    case 33478:
    {
        returnValue = F("Am Weinbach");
        break;
    }
    case 33479:
    {
        returnValue = F("Am Weinberg");
        break;
    }
    case 33480:
    {
        returnValue = F("Am Weinberg Weißenschirmbach");
        break;
    }
    case 33481:
    {
        returnValue = F("Am Weinberge");
        break;
    }
    case 33482:
    {
        returnValue = F("Am Weinberghof");
        break;
    }
    case 33483:
    {
        returnValue = F("Am Weinbergsrain");
        break;
    }
    case 33484:
    {
        returnValue = F("Am Weinbruck");
        break;
    }
    case 33485:
    {
        returnValue = F("Am Weinbrunnen");
        break;
    }
    case 33486:
    {
        returnValue = F("Am Weinbrünnl");
        break;
    }
    case 33487:
    {
        returnValue = F("Am Weinbusch");
        break;
    }
    case 33488:
    {
        returnValue = F("Am Weinbäumchen");
        break;
    }
    case 33489:
    {
        returnValue = F("Am Weinbühl");
        break;
    }
    case 33490:
    {
        returnValue = F("Am Weinfaß");
        break;
    }
    case 33491:
    {
        returnValue = F("Am Weinfeld");
        break;
    }
    case 33492:
    {
        returnValue = F("Am Weingarten");
        break;
    }
    case 33493:
    {
        returnValue = F("Am Weingartsberg");
        break;
    }
    case 33494:
    {
        returnValue = F("Am Weingartsgraben");
        break;
    }
    case 33495:
    {
        returnValue = F("Am Weingartsteig");
        break;
    }
    case 33496:
    {
        returnValue = F("Am Weingert");
        break;
    }
    case 33497:
    {
        returnValue = F("Am Weingrund");
        break;
    }
    case 33498:
    {
        returnValue = F("Am Weingut");
        break;
    }
    case 33499:
    {
        returnValue = F("Am Weingut Hausberg");
        break;
    }
    case 33500:
    {
        returnValue = F("Am Weingärtle");
        break;
    }
    case 33501:
    {
        returnValue = F("Am Weinheimer Berg");
        break;
    }
    case 33502:
    {
        returnValue = F("Am Weinhof");
        break;
    }
    case 33503:
    {
        returnValue = F("Am Weinhübel");
        break;
    }
    case 33504:
    {
        returnValue = F("Am Weinhügel");
        break;
    }
    case 33505:
    {
        returnValue = F("Am Weinkastell");
        break;
    }
    case 33506:
    {
        returnValue = F("Am Weinkauf");
        break;
    }
    case 33507:
    {
        returnValue = F("Am Weinklöpfchen");
        break;
    }
    case 33508:
    {
        returnValue = F("Am Weinmeisterbruch");
        break;
    }
    case 33509:
    {
        returnValue = F("Am Weinpfad");
        break;
    }
    case 33510:
    {
        returnValue = F("Am Weinsheimer Weg");
        break;
    }
    case 33511:
    {
        returnValue = F("Am Weinsoder");
        break;
    }
    case 33512:
    {
        returnValue = F("Am Weinsteig");
        break;
    }
    case 33513:
    {
        returnValue = F("Am Weinstock");
        break;
    }
    case 33514:
    {
        returnValue = F("Am Weinswieschen");
        break;
    }
    case 33515:
    {
        returnValue = F("Am Weinturm");
        break;
    }
    case 33516:
    {
        returnValue = F("Am Weinwasen");
        break;
    }
    case 33517:
    {
        returnValue = F("Am Weipertsacker");
        break;
    }
    case 33518:
    {
        returnValue = F("Am Weisenacker");
        break;
    }
    case 33519:
    {
        returnValue = F("Am Weisenfeld");
        break;
    }
    case 33520:
    {
        returnValue = F("Am Weisenstein");
        break;
    }
    case 33521:
    {
        returnValue = F("Am Weisgraben");
        break;
    }
    case 33522:
    {
        returnValue = F("Am Weissen Berg");
        break;
    }
    case 33523:
    {
        returnValue = F("Am Weissen Stein");
        break;
    }
    case 33524:
    {
        returnValue = F("Am Weissenrain");
        break;
    }
    case 33525:
    {
        returnValue = F("Am Weissenstein");
        break;
    }
    case 33526:
    {
        returnValue = F("Am Weissgerber");
        break;
    }
    case 33527:
    {
        returnValue = F("Am Weissig");
        break;
    }
    case 33528:
    {
        returnValue = F("Am Weitblick");
        break;
    }
    case 33529:
    {
        returnValue = F("Am Weiten Blick");
        break;
    }
    case 33530:
    {
        returnValue = F("Am Weiten Graben");
        break;
    }
    case 33531:
    {
        returnValue = F("Am Weitenmoor");
        break;
    }
    case 33532:
    {
        returnValue = F("Am Weitenstück");
        break;
    }
    case 33533:
    {
        returnValue = F("Am Weitfeld");
        break;
    }
    case 33534:
    {
        returnValue = F("Am Weitlesberg");
        break;
    }
    case 33535:
    {
        returnValue = F("Am Weiweg");
        break;
    }
    case 33536:
    {
        returnValue = F("Am Weizacker");
        break;
    }
    case 33537:
    {
        returnValue = F("Am Weizberg");
        break;
    }
    case 33538:
    {
        returnValue = F("Am Weizenacker");
        break;
    }
    case 33539:
    {
        returnValue = F("Am Weizenbach");
        break;
    }
    case 33540:
    {
        returnValue = F("Am Weizenberg");
        break;
    }
    case 33541:
    {
        returnValue = F("Am Weizenfeld");
        break;
    }
    case 33542:
    {
        returnValue = F("Am Weizengrund");
        break;
    }
    case 33543:
    {
        returnValue = F("Am Weizenkamp");
        break;
    }
    case 33544:
    {
        returnValue = F("Am Weizenländchen");
        break;
    }
    case 33545:
    {
        returnValue = F("Am Weizland");
        break;
    }
    case 33546:
    {
        returnValue = F("Am Weizäckerl");
        break;
    }
    case 33547:
    {
        returnValue = F("Am Weißbach");
        break;
    }
    case 33548:
    {
        returnValue = F("Am Weißberg");
        break;
    }
    case 33549:
    {
        returnValue = F("Am Weißborn");
        break;
    }
    case 33550:
    {
        returnValue = F("Am Weißdorn");
        break;
    }
    case 33551:
    {
        returnValue = F("Am Weißdornbusch");
        break;
    }
    case 33552:
    {
        returnValue = F("Am Weißen Bach");
        break;
    }
    case 33553:
    {
        returnValue = F("Am Weißen Berg");
        break;
    }
    case 33554:
    {
        returnValue = F("Am Weißen Berge");
        break;
    }
    case 33555:
    {
        returnValue = F("Am Weißen Born");
        break;
    }
    case 33556:
    {
        returnValue = F("Am Weißen Busch");
        break;
    }
    case 33557:
    {
        returnValue = F("Am Weißen Grund");
        break;
    }
    case 33558:
    {
        returnValue = F("Am Weißen Gut");
        break;
    }
    case 33559:
    {
        returnValue = F("Am Weißen Haus");
        break;
    }
    case 33560:
    {
        returnValue = F("Am Weißen Kreuz");
        break;
    }
    case 33561:
    {
        returnValue = F("Am Weißen Moor");
        break;
    }
    case 33562:
    {
        returnValue = F("Am Weißen Rain");
        break;
    }
    case 33563:
    {
        returnValue = F("Am Weißen Sand");
        break;
    }
    case 33564:
    {
        returnValue = F("Am Weißen See");
        break;
    }
    case 33565:
    {
        returnValue = F("Am Weißen Stein");
        break;
    }
    case 33566:
    {
        returnValue = F("Am Weißen Stock");
        break;
    }
    case 33567:
    {
        returnValue = F("Am Weißen Tor");
        break;
    }
    case 33568:
    {
        returnValue = F("Am Weißen Weg");
        break;
    }
    case 33569:
    {
        returnValue = F("Am Weißenbach");
        break;
    }
    case 33570:
    {
        returnValue = F("Am Weißenberg");
        break;
    }
    case 33571:
    {
        returnValue = F("Am Weißenborn");
        break;
    }
    case 33572:
    {
        returnValue = F("Am Weißenfeld");
        break;
    }
    case 33573:
    {
        returnValue = F("Am Weißenstein");
        break;
    }
    case 33574:
    {
        returnValue = F("Am Weißer Stein");
        break;
    }
    case 33575:
    {
        returnValue = F("Am Weißeweg");
        break;
    }
    case 33576:
    {
        returnValue = F("Am Weißfeld");
        break;
    }
    case 33577:
    {
        returnValue = F("Am Weißgraben");
        break;
    }
    case 33578:
    {
        returnValue = F("Am Weißholz");
        break;
    }
    case 33579:
    {
        returnValue = F("Am Weißkopp");
        break;
    }
    case 33580:
    {
        returnValue = F("Am Weißpfennig");
        break;
    }
    case 33581:
    {
        returnValue = F("Am Weißwald");
        break;
    }
    case 33582:
    {
        returnValue = F("Am Weißwasserbach");
        break;
    }
    case 33583:
    {
        returnValue = F("Am Welbslebener Weg");
        break;
    }
    case 33584:
    {
        returnValue = F("Am Welde");
        break;
    }
    case 33585:
    {
        returnValue = F("Am Weldener Fußweg");
        break;
    }
    case 33586:
    {
        returnValue = F("Am Wellbach");
        break;
    }
    case 33587:
    {
        returnValue = F("Am Wellberg");
        break;
    }
    case 33588:
    {
        returnValue = F("Am Wellbrunnen");
        break;
    }
    case 33589:
    {
        returnValue = F("Am Wellbusch");
        break;
    }
    case 33590:
    {
        returnValue = F("Am Wellenbach");
        break;
    }
    case 33591:
    {
        returnValue = F("Am Wellenbache");
        break;
    }
    case 33592:
    {
        returnValue = F("Am Wellenberg");
        break;
    }
    case 33593:
    {
        returnValue = F("Am Wellenholz");
        break;
    }
    case 33594:
    {
        returnValue = F("Am Wellenhäuschen");
        break;
    }
    case 33595:
    {
        returnValue = F("Am Wellenkamp");
        break;
    }
    case 33596:
    {
        returnValue = F("Am Wellenpfad");
        break;
    }
    case 33597:
    {
        returnValue = F("Am Wellenweiher");
        break;
    }
    case 33598:
    {
        returnValue = F("Am Wellersberg");
        break;
    }
    case 33599:
    {
        returnValue = F("Am Welleshof");
        break;
    }
    case 33600:
    {
        returnValue = F("Am Wellet");
        break;
    }
    case 33601:
    {
        returnValue = F("Am Wellgarten");
        break;
    }
    case 33602:
    {
        returnValue = F("Am Wellinger Berg");
        break;
    }
    case 33603:
    {
        returnValue = F("Am Welsbach");
        break;
    }
    case 33604:
    {
        returnValue = F("Am Welschbach");
        break;
    }
    case 33605:
    {
        returnValue = F("Am Welschberg");
        break;
    }
    case 33606:
    {
        returnValue = F("Am Welschen Brunnen");
        break;
    }
    case 33607:
    {
        returnValue = F("Am Welschenberg");
        break;
    }
    case 33608:
    {
        returnValue = F("Am Welschgraben");
        break;
    }
    case 33609:
    {
        returnValue = F("Am Welsenfeld");
        break;
    }
    case 33610:
    {
        returnValue = F("Am Welsengraben");
        break;
    }
    case 33611:
    {
        returnValue = F("Am Weltersberg");
        break;
    }
    case 33612:
    {
        returnValue = F("Am Weltersborn");
        break;
    }
    case 33613:
    {
        returnValue = F("Am Welzbach");
        break;
    }
    case 33614:
    {
        returnValue = F("Am Welzenstein");
        break;
    }
    case 33615:
    {
        returnValue = F("Am Wembach");
        break;
    }
    case 33616:
    {
        returnValue = F("Am Wemken");
        break;
    }
    case 33617:
    {
        returnValue = F("Am Wenauer Hof");
        break;
    }
    case 33618:
    {
        returnValue = F("Am Wendebach");
        break;
    }
    case 33619:
    {
        returnValue = F("Am Wendebecken");
        break;
    }
    case 33620:
    {
        returnValue = F("Am Wendehammer");
        break;
    }
    case 33621:
    {
        returnValue = F("Am Wendehof");
        break;
    }
    case 33622:
    {
        returnValue = F("Am Wendekamp");
        break;
    }
    case 33623:
    {
        returnValue = F("Am Wendel");
        break;
    }
    case 33624:
    {
        returnValue = F("Am Wendelberg");
        break;
    }
    case 33625:
    {
        returnValue = F("Am Wendelberge");
        break;
    }
    case 33626:
    {
        returnValue = F("Am Wendelinusbrunnen");
        break;
    }
    case 33627:
    {
        returnValue = F("Am Wendelrain");
        break;
    }
    case 33628:
    {
        returnValue = F("Am Wendelsberg");
        break;
    }
    case 33629:
    {
        returnValue = F("Am Wendelsfleck");
        break;
    }
    case 33630:
    {
        returnValue = F("Am Wendelstein");
        break;
    }
    case 33631:
    {
        returnValue = F("Am Wendeplatz");
        break;
    }
    case 33632:
    {
        returnValue = F("Am Wendischen Teich");
        break;
    }
    case 33633:
    {
        returnValue = F("Am Wendsberg");
        break;
    }
    case 33634:
    {
        returnValue = F("Am Wendteich");
        break;
    }
    case 33635:
    {
        returnValue = F("Am Wengert");
        break;
    }
    case 33636:
    {
        returnValue = F("Am Wengertsgrund");
        break;
    }
    case 33637:
    {
        returnValue = F("Am Weningser Weg");
        break;
    }
    case 33638:
    {
        returnValue = F("Am Wennsberg");
        break;
    }
    case 33639:
    {
        returnValue = F("Am Wenzelflecken");
        break;
    }
    case 33640:
    {
        returnValue = F("Am Wenzelpark");
        break;
    }
    case 33641:
    {
        returnValue = F("Am Wenzenbach");
        break;
    }
    case 33642:
    {
        returnValue = F("Am Werbel");
        break;
    }
    case 33643:
    {
        returnValue = F("Am Werbellinkanal");
        break;
    }
    case 33644:
    {
        returnValue = F("Am Werde");
        break;
    }
    case 33645:
    {
        returnValue = F("Am Werdeldamm");
        break;
    }
    case 33646:
    {
        returnValue = F("Am Werder");
        break;
    }
    case 33647:
    {
        returnValue = F("Am Wereth");
        break;
    }
    case 33648:
    {
        returnValue = F("Am Werfel");
        break;
    }
    case 33649:
    {
        returnValue = F("Am Werfersee");
        break;
    }
    case 33650:
    {
        returnValue = F("Am Wergkäulchen");
        break;
    }
    case 33651:
    {
        returnValue = F("Am Werk");
        break;
    }
    case 33652:
    {
        returnValue = F("Am Werk Fortschritt");
        break;
    }
    case 33653:
    {
        returnValue = F("Am Werkbach");
        break;
    }
    case 33654:
    {
        returnValue = F("Am Werkerhäuschen");
        break;
    }
    case 33655:
    {
        returnValue = F("Am Werkersgarten");
        break;
    }
    case 33656:
    {
        returnValue = F("Am Werkmeisterhaus");
        break;
    }
    case 33657:
    {
        returnValue = F("Am Werksgraben");
        break;
    }
    case 33658:
    {
        returnValue = F("Am Werkshagen");
        break;
    }
    case 33659:
    {
        returnValue = F("Am Werkshorn");
        break;
    }
    case 33660:
    {
        returnValue = F("Am Werkskanal");
        break;
    }
    case 33661:
    {
        returnValue = F("Am Werl");
        break;
    }
    case 33662:
    {
        returnValue = F("Am Werlauer Hang");
        break;
    }
    case 33663:
    {
        returnValue = F("Am Wermutsgraben");
        break;
    }
    case 33664:
    {
        returnValue = F("Am Wernergraben");
        break;
    }
    case 33665:
    {
        returnValue = F("Am Wernscheid");
        break;
    }
    case 33666:
    {
        returnValue = F("Am Werr");
        break;
    }
    case 33667:
    {
        returnValue = F("Am Werragrund");
        break;
    }
    case 33668:
    {
        returnValue = F("Am Werrauferpark");
        break;
    }
    case 33669:
    {
        returnValue = F("Am Werren");
        break;
    }
    case 33670:
    {
        returnValue = F("Am Werrtor");
        break;
    }
    case 33671:
    {
        returnValue = F("Am Werscher Berg");
        break;
    }
    case 33672:
    {
        returnValue = F("Am Wertachgraben");
        break;
    }
    case 33673:
    {
        returnValue = F("Am Werth");
        break;
    }
    case 33674:
    {
        returnValue = F("Am Werthchen");
        break;
    }
    case 33675:
    {
        returnValue = F("Am Werther Berg");
        break;
    }
    case 33676:
    {
        returnValue = F("Am Werthplatz");
        break;
    }
    case 33677:
    {
        returnValue = F("Am Wesenbeek");
        break;
    }
    case 33678:
    {
        returnValue = F("Am Weseranger");
        break;
    }
    case 33679:
    {
        returnValue = F("Am Weserbogen");
        break;
    }
    case 33680:
    {
        returnValue = F("Am Weserdeich");
        break;
    }
    case 33681:
    {
        returnValue = F("Am Weserende");
        break;
    }
    case 33682:
    {
        returnValue = F("Am Weserufer");
        break;
    }
    case 33683:
    {
        returnValue = F("Am Wesnitzbogen");
        break;
    }
    case 33684:
    {
        returnValue = F("Am Wespenmoos");
        break;
    }
    case 33685:
    {
        returnValue = F("Am Wesse");
        break;
    }
    case 33686:
    {
        returnValue = F("Am Westbach");
        break;
    }
    case 33687:
    {
        returnValue = F("Am Westbahnhof");
        break;
    }
    case 33688:
    {
        returnValue = F("Am Westblick");
        break;
    }
    case 33689:
    {
        returnValue = F("Am Westbogen");
        break;
    }
    case 33690:
    {
        returnValue = F("Am Westen");
        break;
    }
    case 33691:
    {
        returnValue = F("Am Westend");
        break;
    }
    case 33692:
    {
        returnValue = F("Am Westende");
        break;
    }
    case 33693:
    {
        returnValue = F("Am Westendorfer Feld");
        break;
    }
    case 33694:
    {
        returnValue = F("Am Westenfeld");
        break;
    }
    case 33695:
    {
        returnValue = F("Am Westerbach");
        break;
    }
    case 33696:
    {
        returnValue = F("Am Westerberg");
        break;
    }
    case 33697:
    {
        returnValue = F("Am Westerberge");
        break;
    }
    case 33698:
    {
        returnValue = F("Am Westerfeld");
        break;
    }
    case 33699:
    {
        returnValue = F("Am Westergraben");
        break;
    }
    case 33700:
    {
        returnValue = F("Am Westerhof");
        break;
    }
    case 33701:
    {
        returnValue = F("Am Westerholz");
        break;
    }
    case 33702:
    {
        returnValue = F("Am Westerkamp");
        break;
    }
    case 33703:
    {
        returnValue = F("Am Westerling");
        break;
    }
    case 33704:
    {
        returnValue = F("Am Westermoor");
        break;
    }
    case 33705:
    {
        returnValue = F("Am Westernbaum");
        break;
    }
    case 33706:
    {
        returnValue = F("Am Westernberg");
        break;
    }
    case 33707:
    {
        returnValue = F("Am Westernfeld");
        break;
    }
    case 33708:
    {
        returnValue = F("Am Westersielzug");
        break;
    }
    case 33709:
    {
        returnValue = F("Am Westerteich");
        break;
    }
    case 33710:
    {
        returnValue = F("Am Westerwinkel");
        break;
    }
    case 33711:
    {
        returnValue = F("Am Westfeld");
        break;
    }
    case 33712:
    {
        returnValue = F("Am Westhafen");
        break;
    }
    case 33713:
    {
        returnValue = F("Am Westhang");
        break;
    }
    case 33714:
    {
        returnValue = F("Am Westheimerfeld");
        break;
    }
    case 33715:
    {
        returnValue = F("Am Westkaap");
        break;
    }
    case 33716:
    {
        returnValue = F("Am Westrand");
        break;
    }
    case 33717:
    {
        returnValue = F("Am Westring");
        break;
    }
    case 33718:
    {
        returnValue = F("Am Westruper Bach");
        break;
    }
    case 33719:
    {
        returnValue = F("Am Westschacht");
        break;
    }
    case 33720:
    {
        returnValue = F("Am Weststrand");
        break;
    }
    case 33721:
    {
        returnValue = F("Am Westwall");
        break;
    }
    case 33722:
    {
        returnValue = F("Am Wetenplatz");
        break;
    }
    case 33723:
    {
        returnValue = F("Am Wethbach");
        break;
    }
    case 33724:
    {
        returnValue = F("Am Wethbächle");
        break;
    }
    case 33725:
    {
        returnValue = F("Am Wettbach");
        break;
    }
    case 33726:
    {
        returnValue = F("Am Wettebach");
        break;
    }
    case 33727:
    {
        returnValue = F("Am Wettele");
        break;
    }
    case 33728:
    {
        returnValue = F("Am Wettelsberg");
        break;
    }
    case 33729:
    {
        returnValue = F("Am Wetterberg");
        break;
    }
    case 33730:
    {
        returnValue = F("Am Wetterkreuz");
        break;
    }
    case 33731:
    {
        returnValue = F("Am Wetterschacht");
        break;
    }
    case 33732:
    {
        returnValue = F("Am Wetterspiel");
        break;
    }
    case 33733:
    {
        returnValue = F("Am Wettiner Weg");
        break;
    }
    case 33734:
    {
        returnValue = F("Am Wettpohl");
        break;
    }
    case 33735:
    {
        returnValue = F("Am Wetzbach");
        break;
    }
    case 33736:
    {
        returnValue = F("Am Wetzel");
        break;
    }
    case 33737:
    {
        returnValue = F("Am Wetzelsberg");
        break;
    }
    case 33738:
    {
        returnValue = F("Am Wetzloser Weg");
        break;
    }
    case 33739:
    {
        returnValue = F("Am Wetzstein");
        break;
    }
    case 33740:
    {
        returnValue = F("Am Wevelbach");
        break;
    }
    case 33741:
    {
        returnValue = F("Am Wewerdiek");
        break;
    }
    case 33742:
    {
        returnValue = F("Am Weyer");
        break;
    }
    case 33743:
    {
        returnValue = F("Am Weyerbach");
        break;
    }
    case 33744:
    {
        returnValue = F("Am Weyergarten");
        break;
    }
    case 33745:
    {
        returnValue = F("Am Weyerhof");
        break;
    }
    case 33746:
    {
        returnValue = F("Am Weyersberg");
        break;
    }
    case 33747:
    {
        returnValue = F("Am Weyhenberg");
        break;
    }
    case 33748:
    {
        returnValue = F("Am Weyherner Graben");
        break;
    }
    case 33749:
    {
        returnValue = F("Am Weyrer Kreuz");
        break;
    }
    case 33750:
    {
        returnValue = F("Am Wibbelsberg");
        break;
    }
    case 33751:
    {
        returnValue = F("Am Wichberg");
        break;
    }
    case 33752:
    {
        returnValue = F("Am Wichelboom");
        break;
    }
    case 33753:
    {
        returnValue = F("Am Wichtebach");
        break;
    }
    case 33754:
    {
        returnValue = F("Am Wickelstrauch");
        break;
    }
    case 33755:
    {
        returnValue = F("Am Wickenberg");
        break;
    }
    case 33756:
    {
        returnValue = F("Am Wickenfeld");
        break;
    }
    case 33757:
    {
        returnValue = F("Am Wickengarten");
        break;
    }
    case 33758:
    {
        returnValue = F("Am Wickenhof");
        break;
    }
    case 33759:
    {
        returnValue = F("Am Wickenkamp");
        break;
    }
    case 33760:
    {
        returnValue = F("Am Wickenstück");
        break;
    }
    case 33761:
    {
        returnValue = F("Am Wickershan");
        break;
    }
    case 33762:
    {
        returnValue = F("Am Wickerstedter Weg");
        break;
    }
    case 33763:
    {
        returnValue = F("Am Wickertberg");
        break;
    }
    case 33764:
    {
        returnValue = F("Am Wickhorn");
        break;
    }
    case 33765:
    {
        returnValue = F("Am Widder Camp");
        break;
    }
    case 33766:
    {
        returnValue = F("Am Widderpard");
        break;
    }
    case 33767:
    {
        returnValue = F("Am Widderstand");
        break;
    }
    case 33768:
    {
        returnValue = F("Am Widderstreben");
        break;
    }
    case 33769:
    {
        returnValue = F("Am Widdum");
        break;
    }
    case 33770:
    {
        returnValue = F("Am Widfeld");
        break;
    }
    case 33771:
    {
        returnValue = F("Am Wido");
        break;
    }
    case 33772:
    {
        returnValue = F("Am Widsoll");
        break;
    }
    case 33773:
    {
        returnValue = F("Am Wiebach");
        break;
    }
    case 33774:
    {
        returnValue = F("Am Wiebelsbach");
        break;
    }
    case 33775:
    {
        returnValue = F("Am Wiebelsberg");
        break;
    }
    case 33776:
    {
        returnValue = F("Am Wiebelsborn");
        break;
    }
    case 33777:
    {
        returnValue = F("Am Wiebelsmoor");
        break;
    }
    case 33778:
    {
        returnValue = F("Am Wiebusch");
        break;
    }
    case 33779:
    {
        returnValue = F("Am Wiebuschkotten");
        break;
    }
    case 33780:
    {
        returnValue = F("Am Wieckenbusch");
        break;
    }
    case 33781:
    {
        returnValue = F("Am Wiedanger");
        break;
    }
    case 33782:
    {
        returnValue = F("Am Wiedeberg");
        break;
    }
    case 33783:
    {
        returnValue = F("Am Wiedehagen");
        break;
    }
    case 33784:
    {
        returnValue = F("Am Wiedemann");
        break;
    }
    case 33785:
    {
        returnValue = F("Am Wiedenbauernfeld");
        break;
    }
    case 33786:
    {
        returnValue = F("Am Wiedenfeld");
        break;
    }
    case 33787:
    {
        returnValue = F("Am Wiedenhausener Bach");
        break;
    }
    case 33788:
    {
        returnValue = F("Am Wiedenhof");
        break;
    }
    case 33789:
    {
        returnValue = F("Am Wiedholz");
        break;
    }
    case 33790:
    {
        returnValue = F("Am Wiedich");
        break;
    }
    case 33791:
    {
        returnValue = F("Am Wiedkamp");
        break;
    }
    case 33792:
    {
        returnValue = F("Am Wiedlein");
        break;
    }
    case 33793:
    {
        returnValue = F("Am Wiefeld");
        break;
    }
    case 33794:
    {
        returnValue = F("Am Wiegeborn");
        break;
    }
    case 33795:
    {
        returnValue = F("Am Wiegehaus");
        break;
    }
    case 33796:
    {
        returnValue = F("Am Wiegel");
        break;
    }
    case 33797:
    {
        returnValue = F("Am Wiegenberg");
        break;
    }
    case 33798:
    {
        returnValue = F("Am Wiegestein");
        break;
    }
    case 33799:
    {
        returnValue = F("Am Wieglebsteig");
        break;
    }
    case 33800:
    {
        returnValue = F("Am Wiegwasser");
        break;
    }
    case 33801:
    {
        returnValue = F("Am Wieh");
        break;
    }
    case 33802:
    {
        returnValue = F("Am Wiehagen");
        break;
    }
    case 33803:
    {
        returnValue = F("Am Wiehbusch");
        break;
    }
    case 33804:
    {
        returnValue = F("Am Wiehefleet");
        break;
    }
    case 33805:
    {
        returnValue = F("Am Wiehenbrink");
        break;
    }
    case 33806:
    {
        returnValue = F("Am Wiehenfeld");
        break;
    }
    case 33807:
    {
        returnValue = F("Am Wiehengebirge");
        break;
    }
    case 33808:
    {
        returnValue = F("Am Wiekenbrink");
        break;
    }
    case 33809:
    {
        returnValue = F("Am Wielandkanal");
        break;
    }
    case 33810:
    {
        returnValue = F("Am Wielbach");
        break;
    }
    case 33811:
    {
        returnValue = F("Am Wiemen");
        break;
    }
    case 33812:
    {
        returnValue = F("Am Wiemenkamp");
        break;
    }
    case 33813:
    {
        returnValue = F("Am Wiemersberg");
        break;
    }
    case 33814:
    {
        returnValue = F("Am Wiemhof");
        break;
    }
    case 33815:
    {
        returnValue = F("Am Wienebütteler Weg");
        break;
    }
    case 33816:
    {
        returnValue = F("Am Wienkamp");
        break;
    }
    case 33817:
    {
        returnValue = F("Am Wieratal");
        break;
    }
    case 33818:
    {
        returnValue = F("Am Wierl");
        break;
    }
    case 33819:
    {
        returnValue = F("Am Wierngraben");
        break;
    }
    case 33820:
    {
        returnValue = F("Am Wies'chen");
        break;
    }
    case 33821:
    {
        returnValue = F("Am Wiesacker");
        break;
    }
    case 33822:
    {
        returnValue = F("Am Wiesaer Weg");
        break;
    }
    case 33823:
    {
        returnValue = F("Am Wiesanger");
        break;
    }
    case 33824:
    {
        returnValue = F("Am Wiesbach");
        break;
    }
    case 33825:
    {
        returnValue = F("Am Wiesberg");
        break;
    }
    case 33826:
    {
        returnValue = F("Am Wieschen");
        break;
    }
    case 33827:
    {
        returnValue = F("Am Wiesegarten");
        break;
    }
    case 33828:
    {
        returnValue = F("Am Wieselbrunnen");
        break;
    }
    case 33829:
    {
        returnValue = F("Am Wiesele");
        break;
    }
    case 33830:
    {
        returnValue = F("Am Wieseleck");
        break;
    }
    case 33831:
    {
        returnValue = F("Am Wieselsgraben");
        break;
    }
    case 33832:
    {
        returnValue = F("Am Wiesenbach");
        break;
    }
    case 33833:
    {
        returnValue = F("Am Wiesenbeek");
        break;
    }
    case 33834:
    {
        returnValue = F("Am Wiesenberg");
        break;
    }
    case 33835:
    {
        returnValue = F("Am Wiesenbergl");
        break;
    }
    case 33836:
    {
        returnValue = F("Am Wiesenborn");
        break;
    }
    case 33837:
    {
        returnValue = F("Am Wiesenbrunnen");
        break;
    }
    case 33838:
    {
        returnValue = F("Am Wiesenbusch");
        break;
    }
    case 33839:
    {
        returnValue = F("Am Wiesendeich");
        break;
    }
    case 33840:
    {
        returnValue = F("Am Wieseneck");
        break;
    }
    case 33841:
    {
        returnValue = F("Am Wiesenfeld");
        break;
    }
    case 33842:
    {
        returnValue = F("Am Wiesenfelder Weg");
        break;
    }
    case 33843:
    {
        returnValue = F("Am Wiesenflecken");
        break;
    }
    case 33844:
    {
        returnValue = F("Am Wiesengarten");
        break;
    }
    case 33845:
    {
        returnValue = F("Am Wiesengraben");
        break;
    }
    case 33846:
    {
        returnValue = F("Am Wiesengrund");
        break;
    }
    case 33847:
    {
        returnValue = F("Am Wiesengrunde");
        break;
    }
    case 33848:
    {
        returnValue = F("Am Wiesenhang");
        break;
    }
    case 33849:
    {
        returnValue = F("Am Wiesenhaus");
        break;
    }
    case 33850:
    {
        returnValue = F("Am Wiesenhof");
        break;
    }
    case 33851:
    {
        returnValue = F("Am Wiesenholz");
        break;
    }
    case 33852:
    {
        returnValue = F("Am Wiesenhügel");
        break;
    }
    case 33853:
    {
        returnValue = F("Am Wiesenkieker");
        break;
    }
    case 33854:
    {
        returnValue = F("Am Wiesenkreuz");
        break;
    }
    case 33855:
    {
        returnValue = F("Am Wiesenmahd");
        break;
    }
    case 33856:
    {
        returnValue = F("Am Wiesenpfad");
        break;
    }
    case 33857:
    {
        returnValue = F("Am Wiesenplatz");
        break;
    }
    case 33858:
    {
        returnValue = F("Am Wiesenrain");
        break;
    }
    case 33859:
    {
        returnValue = F("Am Wiesenrand");
        break;
    }
    case 33860:
    {
        returnValue = F("Am Wiesenring");
        break;
    }
    case 33861:
    {
        returnValue = F("Am Wiesensteg");
        break;
    }
    case 33862:
    {
        returnValue = F("Am Wiesensteig");
        break;
    }
    case 33863:
    {
        returnValue = F("Am Wiesental");
        break;
    }
    case 33864:
    {
        returnValue = F("Am Wiesenteich");
        break;
    }
    case 33865:
    {
        returnValue = F("Am Wiesenthal");
        break;
    }
    case 33866:
    {
        returnValue = F("Am Wiesenweg");
        break;
    }
    case 33867:
    {
        returnValue = F("Am Wiesenwegmoor");
        break;
    }
    case 33868:
    {
        returnValue = F("Am Wieserweg");
        break;
    }
    case 33869:
    {
        returnValue = F("Am Wiesfeld");
        break;
    }
    case 33870:
    {
        returnValue = F("Am Wiesfleck");
        break;
    }
    case 33871:
    {
        returnValue = F("Am Wiesgarten");
        break;
    }
    case 33872:
    {
        returnValue = F("Am Wiesgraben");
        break;
    }
    case 33873:
    {
        returnValue = F("Am Wiesgässchen");
        break;
    }
    case 33874:
    {
        returnValue = F("Am Wiesherrgottle");
        break;
    }
    case 33875:
    {
        returnValue = F("Am Wieshof");
        break;
    }
    case 33876:
    {
        returnValue = F("Am Wieshörnle");
        break;
    }
    case 33877:
    {
        returnValue = F("Am Wiesigsgraben");
        break;
    }
    case 33878:
    {
        returnValue = F("Am Wiesland");
        break;
    }
    case 33879:
    {
        returnValue = F("Am Wieslappen");
        break;
    }
    case 33880:
    {
        returnValue = F("Am Wiesle");
        break;
    }
    case 33881:
    {
        returnValue = F("Am Wieslein");
        break;
    }
    case 33882:
    {
        returnValue = F("Am Wieslenbach");
        break;
    }
    case 33883:
    {
        returnValue = F("Am Wiesmahd");
        break;
    }
    case 33884:
    {
        returnValue = F("Am Wiesmahtweg");
        break;
    }
    case 33885:
    {
        returnValue = F("Am Wiesmoor");
        break;
    }
    case 33886:
    {
        returnValue = F("Am Wiestebruch");
        break;
    }
    case 33887:
    {
        returnValue = F("Am Wiester Graben");
        break;
    }
    case 33888:
    {
        returnValue = F("Am Wiesteweg");
        break;
    }
    case 33889:
    {
        returnValue = F("Am Wieszipfl");
        break;
    }
    case 33890:
    {
        returnValue = F("Am Wiethop");
        break;
    }
    case 33891:
    {
        returnValue = F("Am Wietin");
        break;
    }
    case 33892:
    {
        returnValue = F("Am Wietingshof");
        break;
    }
    case 33893:
    {
        returnValue = F("Am Wietkamp");
        break;
    }
    case 33894:
    {
        returnValue = F("Am Wietsoll");
        break;
    }
    case 33895:
    {
        returnValue = F("Am Wigbold");
        break;
    }
    case 33896:
    {
        returnValue = F("Am Wiggestät");
        break;
    }
    case 33897:
    {
        returnValue = F("Am Wikfeld");
        break;
    }
    case 33898:
    {
        returnValue = F("Am Wildacker");
        break;
    }
    case 33899:
    {
        returnValue = F("Am Wildanger");
        break;
    }
    case 33900:
    {
        returnValue = F("Am Wildbach");
        break;
    }
    case 33901:
    {
        returnValue = F("Am Wildbad");
        break;
    }
    case 33902:
    {
        returnValue = F("Am Wildbann");
        break;
    }
    case 33903:
    {
        returnValue = F("Am Wildbertsstock");
        break;
    }
    case 33904:
    {
        returnValue = F("Am Wildbuschgraben");
        break;
    }
    case 33905:
    {
        returnValue = F("Am Wilden Graben");
        break;
    }
    case 33906:
    {
        returnValue = F("Am Wilden Mann");
        break;
    }
    case 33907:
    {
        returnValue = F("Am Wilden Moor");
        break;
    }
    case 33908:
    {
        returnValue = F("Am Wilden Stein");
        break;
    }
    case 33909:
    {
        returnValue = F("Am Wilden Teich");
        break;
    }
    case 33910:
    {
        returnValue = F("Am Wildenberg");
        break;
    }
    case 33911:
    {
        returnValue = F("Am Wildenkiel");
        break;
    }
    case 33912:
    {
        returnValue = F("Am Wildenkopf");
        break;
    }
    case 33913:
    {
        returnValue = F("Am Wildenloh");
        break;
    }
    case 33914:
    {
        returnValue = F("Am Wildfang");
        break;
    }
    case 33915:
    {
        returnValue = F("Am Wildfrauhaus");
        break;
    }
    case 33916:
    {
        returnValue = F("Am Wildfrauhausberg");
        break;
    }
    case 33917:
    {
        returnValue = F("Am Wildgarten");
        break;
    }
    case 33918:
    {
        returnValue = F("Am Wildgatter");
        break;
    }
    case 33919:
    {
        returnValue = F("Am Wildgehege");
        break;
    }
    case 33920:
    {
        returnValue = F("Am Wildgraben");
        break;
    }
    case 33921:
    {
        returnValue = F("Am Wildkamp");
        break;
    }
    case 33922:
    {
        returnValue = F("Am Wildmannsacker");
        break;
    }
    case 33923:
    {
        returnValue = F("Am Wildnishof");
        break;
    }
    case 33924:
    {
        returnValue = F("Am Wildpark");
        break;
    }
    case 33925:
    {
        returnValue = F("Am Wildpfad");
        break;
    }
    case 33926:
    {
        returnValue = F("Am Wildring");
        break;
    }
    case 33927:
    {
        returnValue = F("Am Wildwasser");
        break;
    }
    case 33928:
    {
        returnValue = F("Am Wildwechsel");
        break;
    }
    case 33929:
    {
        returnValue = F("Am Wildwieseneck");
        break;
    }
    case 33930:
    {
        returnValue = F("Am Wildzaun");
        break;
    }
    case 33931:
    {
        returnValue = F("Am Wilfenberg");
        break;
    }
    case 33932:
    {
        returnValue = F("Am Wilhelmsbau");
        break;
    }
    case 33933:
    {
        returnValue = F("Am Wilhelmsbühl");
        break;
    }
    case 33934:
    {
        returnValue = F("Am Wilhelmschacht");
        break;
    }
    case 33935:
    {
        returnValue = F("Am Wilhelmsdamm");
        break;
    }
    case 33936:
    {
        returnValue = F("Am Wilhelmsgarten");
        break;
    }
    case 33937:
    {
        returnValue = F("Am Wilhelmshof");
        break;
    }
    case 33938:
    {
        returnValue = F("Am Wilhelmsplatz");
        break;
    }
    case 33939:
    {
        returnValue = F("Am Wilhelmsstollen");
        break;
    }
    case 33940:
    {
        returnValue = F("Am Wilhelmstörle");
        break;
    }
    case 33941:
    {
        returnValue = F("Am Wilisch");
        break;
    }
    case 33942:
    {
        returnValue = F("Am Wilkenbach");
        break;
    }
    case 33943:
    {
        returnValue = F("Am Willberg");
        break;
    }
    case 33944:
    {
        returnValue = F("Am Willbrok");
        break;
    }
    case 33945:
    {
        returnValue = F("Am Willemshof");
        break;
    }
    case 33946:
    {
        returnValue = F("Am Willenbach");
        break;
    }
    case 33947:
    {
        returnValue = F("Am Willenbruch");
        break;
    }
    case 33948:
    {
        returnValue = F("Am Willersberg");
        break;
    }
    case 33949:
    {
        returnValue = F("Am Willerwald");
        break;
    }
    case 33950:
    {
        returnValue = F("Am Willger");
        break;
    }
    case 33951:
    {
        returnValue = F("Am Willgraben");
        break;
    }
    case 33952:
    {
        returnValue = F("Am Willrother Berg");
        break;
    }
    case 33953:
    {
        returnValue = F("Am Willsdörn");
        break;
    }
    case 33954:
    {
        returnValue = F("Am Wilmenried");
        break;
    }
    case 33955:
    {
        returnValue = F("Am Wilmersdorfer Weg");
        break;
    }
    case 33956:
    {
        returnValue = F("Am Wilsterfeld");
        break;
    }
    case 33957:
    {
        returnValue = F("Am Wimbach");
        break;
    }
    case 33958:
    {
        returnValue = F("Am Wimberg");
        break;
    }
    case 33959:
    {
        returnValue = F("Am Wimhof");
        break;
    }
    case 33960:
    {
        returnValue = F("Am Wimmersberg");
        break;
    }
    case 33961:
    {
        returnValue = F("Am Winacker");
        break;
    }
    case 33962:
    {
        returnValue = F("Am Wind");
        break;
    }
    case 33963:
    {
        returnValue = F("Am Windacker");
        break;
    }
    case 33964:
    {
        returnValue = F("Am Windberg");
        break;
    }
    case 33965:
    {
        returnValue = F("Am Windbuck");
        break;
    }
    case 33966:
    {
        returnValue = F("Am Windecker Weg");
        break;
    }
    case 33967:
    {
        returnValue = F("Am Windelsbach");
        break;
    }
    case 33968:
    {
        returnValue = F("Am Windfang");
        break;
    }
    case 33969:
    {
        returnValue = F("Am Windfeld");
        break;
    }
    case 33970:
    {
        returnValue = F("Am Windflügel");
        break;
    }
    case 33971:
    {
        returnValue = F("Am Windhain");
        break;
    }
    case 33972:
    {
        returnValue = F("Am Windhof");
        break;
    }
    case 33973:
    {
        returnValue = F("Am Windhop");
        break;
    }
    case 33974:
    {
        returnValue = F("Am Windhübel");
        break;
    }
    case 33975:
    {
        returnValue = F("Am Windhügel");
        break;
    }
    case 33976:
    {
        returnValue = F("Am Windmotor");
        break;
    }
    case 33977:
    {
        returnValue = F("Am Windmühlenberg");
        break;
    }
    case 33978:
    {
        returnValue = F("Am Windmühlenfeld");
        break;
    }
    case 33979:
    {
        returnValue = F("Am Windmühlenhügel");
        break;
    }
    case 33980:
    {
        returnValue = F("Am Windmühlenstein");
        break;
    }
    case 33981:
    {
        returnValue = F("Am Windmühlenteich");
        break;
    }
    case 33982:
    {
        returnValue = F("Am Windmühlenweg");
        break;
    }
    case 33983:
    {
        returnValue = F("Am Windpark");
        break;
    }
    case 33984:
    {
        returnValue = F("Am Windrad");
        break;
    }
    case 33985:
    {
        returnValue = F("Am Windsberg");
        break;
    }
    case 33986:
    {
        returnValue = F("Am Windschlag");
        break;
    }
    case 33987:
    {
        returnValue = F("Am Windshöfner");
        break;
    }
    case 33988:
    {
        returnValue = F("Am Windsteig");
        break;
    }
    case 33989:
    {
        returnValue = F("Am Wingans");
        break;
    }
    case 33990:
    {
        returnValue = F("Am Wingeberg");
        break;
    }
    case 33991:
    {
        returnValue = F("Am Wingenrain");
        break;
    }
    case 33992:
    {
        returnValue = F("Am Wingersbach");
        break;
    }
    case 33993:
    {
        returnValue = F("Am Wingert");
        break;
    }
    case 33994:
    {
        returnValue = F("Am Wingertsacker");
        break;
    }
    case 33995:
    {
        returnValue = F("Am Wingertsbach");
        break;
    }
    case 33996:
    {
        returnValue = F("Am Wingertsberg");
        break;
    }
    case 33997:
    {
        returnValue = F("Am Wingertsbrunnen");
        break;
    }
    case 33998:
    {
        returnValue = F("Am Wingertsbuckel");
        break;
    }
    case 33999:
    {
        returnValue = F("Am Wingertshübel");
        break;
    }
    case 34000:
    {
        returnValue = F("Am Wingertstor");
        break;
    }
    case 34001:
    {
        returnValue = F("Am Wingertsweg");
        break;
    }
    case 34002:
    {
        returnValue = F("Am Winkel");
        break;
    }
    case 34003:
    {
        returnValue = F("Am Winkelacker");
        break;
    }
    case 34004:
    {
        returnValue = F("Am Winkelbach");
        break;
    }
    case 34005:
    {
        returnValue = F("Am Winkelberg");
        break;
    }
    case 34006:
    {
        returnValue = F("Am Winkelberge");
        break;
    }
    case 34007:
    {
        returnValue = F("Am Winkelfeld");
        break;
    }
    case 34008:
    {
        returnValue = F("Am Winkelgraben");
        break;
    }
    case 34009:
    {
        returnValue = F("Am Winkelmoos");
        break;
    }
    case 34010:
    {
        returnValue = F("Am Winkelsborn");
        break;
    }
    case 34011:
    {
        returnValue = F("Am Winkelsteg");
        break;
    }
    case 34012:
    {
        returnValue = F("Am Winkelweg");
        break;
    }
    case 34013:
    {
        returnValue = F("Am Winkelzaun");
        break;
    }
    case 34014:
    {
        returnValue = F("Am Winkl");
        break;
    }
    case 34015:
    {
        returnValue = F("Am Winkles Garten");
        break;
    }
    case 34016:
    {
        returnValue = F("Am Winneberg");
        break;
    }
    case 34017:
    {
        returnValue = F("Am Winnenthalschen Weg");
        break;
    }
    case 34018:
    {
        returnValue = F("Am Winnewald");
        break;
    }
    case 34019:
    {
        returnValue = F("Am Winsel");
        break;
    }
    case 34020:
    {
        returnValue = F("Am Winterbaum");
        break;
    }
    case 34021:
    {
        returnValue = F("Am Winterberg");
        break;
    }
    case 34022:
    {
        returnValue = F("Am Winterbergtor");
        break;
    }
    case 34023:
    {
        returnValue = F("Am Winterbusch");
        break;
    }
    case 34024:
    {
        returnValue = F("Am Winterfeld");
        break;
    }
    case 34025:
    {
        returnValue = F("Am Winterhof");
        break;
    }
    case 34026:
    {
        returnValue = F("Am Winterholz");
        break;
    }
    case 34027:
    {
        returnValue = F("Am Winterhügel");
        break;
    }
    case 34028:
    {
        returnValue = F("Am Winterort");
        break;
    }
    case 34029:
    {
        returnValue = F("Am Winterquartier");
        break;
    }
    case 34030:
    {
        returnValue = F("Am Winterrain");
        break;
    }
    case 34031:
    {
        returnValue = F("Am Wintersberg");
        break;
    }
    case 34032:
    {
        returnValue = F("Am Winzerkeller");
        break;
    }
    case 34033:
    {
        returnValue = F("Am Wippeteich");
        break;
    }
    case 34034:
    {
        returnValue = F("Am Wipsenbach");
        break;
    }
    case 34035:
    {
        returnValue = F("Am Wirbelbach");
        break;
    }
    case 34036:
    {
        returnValue = F("Am Wirbelberg");
        break;
    }
    case 34037:
    {
        returnValue = F("Am Wirbstein");
        break;
    }
    case 34038:
    {
        returnValue = F("Am Wirschk");
        break;
    }
    case 34039:
    {
        returnValue = F("Am Wirthsberg");
        break;
    }
    case 34040:
    {
        returnValue = F("Am Wirthsfeld");
        break;
    }
    case 34041:
    {
        returnValue = F("Am Wirtsacker");
        break;
    }
    case 34042:
    {
        returnValue = F("Am Wirtsanger");
        break;
    }
    case 34043:
    {
        returnValue = F("Am Wirtsberg");
        break;
    }
    case 34044:
    {
        returnValue = F("Am Wirtsbierl");
        break;
    }
    case 34045:
    {
        returnValue = F("Am Wirtsbuck");
        break;
    }
    case 34046:
    {
        returnValue = F("Am Wirtschaftshof");
        break;
    }
    case 34047:
    {
        returnValue = F("Am Wirtschaftsweg");
        break;
    }
    case 34048:
    {
        returnValue = F("Am Wirtseck");
        break;
    }
    case 34049:
    {
        returnValue = F("Am Wirtsfeld");
        break;
    }
    case 34050:
    {
        returnValue = F("Am Wirtsgarten");
        break;
    }
    case 34051:
    {
        returnValue = F("Am Wirtsgehau");
        break;
    }
    case 34052:
    {
        returnValue = F("Am Wirtshof");
        break;
    }
    case 34053:
    {
        returnValue = F("Am Wirtskreuz");
        break;
    }
    case 34054:
    {
        returnValue = F("Am Wirtsland");
        break;
    }
    case 34055:
    {
        returnValue = F("Am Wirtsrain");
        break;
    }
    case 34056:
    {
        returnValue = F("Am Wirtsweg");
        break;
    }
    case 34057:
    {
        returnValue = F("Am Wirtsweiher");
        break;
    }
    case 34058:
    {
        returnValue = F("Am Wirzfeld");
        break;
    }
    case 34059:
    {
        returnValue = F("Am Wischacker");
        break;
    }
    case 34060:
    {
        returnValue = F("Am Wischberg");
        break;
    }
    case 34061:
    {
        returnValue = F("Am Wischdeich");
        break;
    }
    case 34062:
    {
        returnValue = F("Am Wischfeld");
        break;
    }
    case 34063:
    {
        returnValue = F("Am Wischhof");
        break;
    }
    case 34064:
    {
        returnValue = F("Am Wischhoff");
        break;
    }
    case 34065:
    {
        returnValue = F("Am Wisselsbach");
        break;
    }
    case 34066:
    {
        returnValue = F("Am Witschenberg");
        break;
    }
    case 34067:
    {
        returnValue = F("Am Wittbender Tor");
        break;
    }
    case 34068:
    {
        returnValue = F("Am Witte Moor");
        break;
    }
    case 34069:
    {
        returnValue = F("Am Witteberg");
        break;
    }
    case 34070:
    {
        returnValue = F("Am Wittekindsprudel");
        break;
    }
    case 34071:
    {
        returnValue = F("Am Wittelsbach");
        break;
    }
    case 34072:
    {
        returnValue = F("Am Witten");
        break;
    }
    case 34073:
    {
        returnValue = F("Am Wittenbach");
        break;
    }
    case 34074:
    {
        returnValue = F("Am Wittenberge");
        break;
    }
    case 34075:
    {
        returnValue = F("Am Wittenborn");
        break;
    }
    case 34076:
    {
        returnValue = F("Am Wittenbrink");
        break;
    }
    case 34077:
    {
        returnValue = F("Am Wittenfeld");
        break;
    }
    case 34078:
    {
        returnValue = F("Am Wittenmoor");
        break;
    }
    case 34079:
    {
        returnValue = F("Am Wittenwiewerbarg");
        break;
    }
    case 34080:
    {
        returnValue = F("Am Wittinghaaf");
        break;
    }
    case 34081:
    {
        returnValue = F("Am Wittkamp");
        break;
    }
    case 34082:
    {
        returnValue = F("Am Wittmoor");
        break;
    }
    case 34083:
    {
        returnValue = F("Am Wittrehm");
        break;
    }
    case 34084:
    {
        returnValue = F("Am Wittsandsbeek");
        break;
    }
    case 34085:
    {
        returnValue = F("Am Wittsee");
        break;
    }
    case 34086:
    {
        returnValue = F("Am Wittstock");
        break;
    }
    case 34087:
    {
        returnValue = F("Am Wittum");
        break;
    }
    case 34088:
    {
        returnValue = F("Am Wittumsacker");
        break;
    }
    case 34089:
    {
        returnValue = F("Am Witwenberg");
        break;
    }
    case 34090:
    {
        returnValue = F("Am Witznitzer Werk");
        break;
    }
    case 34091:
    {
        returnValue = F("Am Witzpfad");
        break;
    }
    case 34092:
    {
        returnValue = F("Am Wiwaweiher");
        break;
    }
    case 34093:
    {
        returnValue = F("Am Wißberg");
        break;
    }
    case 34094:
    {
        returnValue = F("Am Wochenend");
        break;
    }
    case 34095:
    {
        returnValue = F("Am Wodanstein");
        break;
    }
    case 34096:
    {
        returnValue = F("Am Wodenweg");
        break;
    }
    case 34097:
    {
        returnValue = F("Am Woferlfeld");
        break;
    }
    case 34098:
    {
        returnValue = F("Am Wohlaer Berg");
        break;
    }
    case 34099:
    {
        returnValue = F("Am Wohlbach");
        break;
    }
    case 34100:
    {
        returnValue = F("Am Wohld");
        break;
    }
    case 34101:
    {
        returnValue = F("Am Wohldberg");
        break;
    }
    case 34102:
    {
        returnValue = F("Am Wohnbach");
        break;
    }
    case 34103:
    {
        returnValue = F("Am Wohnberg");
        break;
    }
    case 34104:
    {
        returnValue = F("Am Wohnpark");
        break;
    }
    case 34105:
    {
        returnValue = F("Am Wohnungsbusch");
        break;
    }
    case 34106:
    {
        returnValue = F("Am Wohnweg");
        break;
    }
    case 34107:
    {
        returnValue = F("Am Wohrenberg");
        break;
    }
    case 34108:
    {
        returnValue = F("Am Wokerberg");
        break;
    }
    case 34109:
    {
        returnValue = F("Am Wolbenwerder");
        break;
    }
    case 34110:
    {
        returnValue = F("Am Wolf");
        break;
    }
    case 34111:
    {
        returnValue = F("Am Wolfanger");
        break;
    }
    case 34112:
    {
        returnValue = F("Am Wolfbeet");
        break;
    }
    case 34113:
    {
        returnValue = F("Am Wolfenberg");
        break;
    }
    case 34114:
    {
        returnValue = F("Am Wolfenholz");
        break;
    }
    case 34115:
    {
        returnValue = F("Am Wolfenkamp");
        break;
    }
    case 34116:
    {
        returnValue = F("Am Wolfert");
        break;
    }
    case 34117:
    {
        returnValue = F("Am Wolfgangsberg");
        break;
    }
    case 34118:
    {
        returnValue = F("Am Wolfgraben");
        break;
    }
    case 34119:
    {
        returnValue = F("Am Wolfhagen");
        break;
    }
    case 34120:
    {
        returnValue = F("Am Wolfhang");
        break;
    }
    case 34121:
    {
        returnValue = F("Am Wolfsacker");
        break;
    }
    case 34122:
    {
        returnValue = F("Am Wolfsanger");
        break;
    }
    case 34123:
    {
        returnValue = F("Am Wolfsbach");
        break;
    }
    case 34124:
    {
        returnValue = F("Am Wolfsbachtal");
        break;
    }
    case 34125:
    {
        returnValue = F("Am Wolfsbaum");
        break;
    }
    case 34126:
    {
        returnValue = F("Am Wolfsberg");
        break;
    }
    case 34127:
    {
        returnValue = F("Am Wolfsbild");
        break;
    }
    case 34128:
    {
        returnValue = F("Am Wolfsborn");
        break;
    }
    case 34129:
    {
        returnValue = F("Am Wolfsbuck");
        break;
    }
    case 34130:
    {
        returnValue = F("Am Wolfsbuckel");
        break;
    }
    case 34131:
    {
        returnValue = F("Am Wolfsbusch");
        break;
    }
    case 34132:
    {
        returnValue = F("Am Wolfsbühl");
        break;
    }
    case 34133:
    {
        returnValue = F("Am Wolfseck");
        break;
    }
    case 34134:
    {
        returnValue = F("Am Wolfsfeld");
        break;
    }
    case 34135:
    {
        returnValue = F("Am Wolfsgalgen");
        break;
    }
    case 34136:
    {
        returnValue = F("Am Wolfsgang");
        break;
    }
    case 34137:
    {
        returnValue = F("Am Wolfsgarten");
        break;
    }
    case 34138:
    {
        returnValue = F("Am Wolfsgestell");
        break;
    }
    case 34139:
    {
        returnValue = F("Am Wolfsgraben");
        break;
    }
    case 34140:
    {
        returnValue = F("Am Wolfsgrund");
        break;
    }
    case 34141:
    {
        returnValue = F("Am Wolfsgut");
        break;
    }
    case 34142:
    {
        returnValue = F("Am Wolfshag");
        break;
    }
    case 34143:
    {
        returnValue = F("Am Wolfshof");
        break;
    }
    case 34144:
    {
        returnValue = F("Am Wolfshofer Weg");
        break;
    }
    case 34145:
    {
        returnValue = F("Am Wolfshorn");
        break;
    }
    case 34146:
    {
        returnValue = F("Am Wolfshölzchen");
        break;
    }
    case 34147:
    {
        returnValue = F("Am Wolfshübel");
        break;
    }
    case 34148:
    {
        returnValue = F("Am Wolfskrug");
        break;
    }
    case 34149:
    {
        returnValue = F("Am Wolfsloch");
        break;
    }
    case 34150:
    {
        returnValue = F("Am Wolfsmeer");
        break;
    }
    case 34151:
    {
        returnValue = F("Am Wolfsmorgen");
        break;
    }
    case 34152:
    {
        returnValue = F("Am Wolfspfad");
        break;
    }
    case 34153:
    {
        returnValue = F("Am Wolfspfädchen");
        break;
    }
    case 34154:
    {
        returnValue = F("Am Wolfssee");
        break;
    }
    case 34155:
    {
        returnValue = F("Am Wolfssteig");
        break;
    }
    case 34156:
    {
        returnValue = F("Am Wolfstal");
        break;
    }
    case 34157:
    {
        returnValue = F("Am Wolfsteig");
        break;
    }
    case 34158:
    {
        returnValue = F("Am Wolfstor");
        break;
    }
    case 34159:
    {
        returnValue = F("Am Wolfstrang");
        break;
    }
    case 34160:
    {
        returnValue = F("Am Wolfsturm");
        break;
    }
    case 34161:
    {
        returnValue = F("Am Wolfswinkel");
        break;
    }
    case 34162:
    {
        returnValue = F("Am Wolfswäldle");
        break;
    }
    case 34163:
    {
        returnValue = F("Am Wolkenbarg");
        break;
    }
    case 34164:
    {
        returnValue = F("Am Wolkenberg");
        break;
    }
    case 34165:
    {
        returnValue = F("Am Wolkenbruch");
        break;
    }
    case 34166:
    {
        returnValue = F("Am Wolkenfeld");
        break;
    }
    case 34167:
    {
        returnValue = F("Am Wolkenrasen");
        break;
    }
    case 34168:
    {
        returnValue = F("Am Wollbach");
        break;
    }
    case 34169:
    {
        returnValue = F("Am Wollberg");
        break;
    }
    case 34170:
    {
        returnValue = F("Am Wollenbach");
        break;
    }
    case 34171:
    {
        returnValue = F("Am Wollenberg");
        break;
    }
    case 34172:
    {
        returnValue = F("Am Wollgras");
        break;
    }
    case 34173:
    {
        returnValue = F("Am Wollmarberg");
        break;
    }
    case 34174:
    {
        returnValue = F("Am Wollmatinger Ried");
        break;
    }
    case 34175:
    {
        returnValue = F("Am Wollsbach");
        break;
    }
    case 34176:
    {
        returnValue = F("Am Wolpenberg");
        break;
    }
    case 34177:
    {
        returnValue = F("Am Wolsbach");
        break;
    }
    case 34178:
    {
        returnValue = F("Am Wolschinkateich");
        break;
    }
    case 34179:
    {
        returnValue = F("Am Woltersberg");
        break;
    }
    case 34180:
    {
        returnValue = F("Am Wolterskamp");
        break;
    }
    case 34181:
    {
        returnValue = F("Am Woltersmoor");
        break;
    }
    case 34182:
    {
        returnValue = F("Am Womberg");
        break;
    }
    case 34183:
    {
        returnValue = F("Am Wonneberg");
        break;
    }
    case 34184:
    {
        returnValue = F("Am Woog");
        break;
    }
    case 34185:
    {
        returnValue = F("Am Woogbach");
        break;
    }
    case 34186:
    {
        returnValue = F("Am Woogberg");
        break;
    }
    case 34187:
    {
        returnValue = F("Am Woogdamm");
        break;
    }
    case 34188:
    {
        returnValue = F("Am Woppenkamp");
        break;
    }
    case 34189:
    {
        returnValue = F("Am Worberg");
        break;
    }
    case 34190:
    {
        returnValue = F("Am Wormketal");
        break;
    }
    case 34191:
    {
        returnValue = F("Am Wormshof");
        break;
    }
    case 34192:
    {
        returnValue = F("Am Wormshölzchen");
        break;
    }
    case 34193:
    {
        returnValue = F("Am Wornsberg");
        break;
    }
    case 34194:
    {
        returnValue = F("Am Wremer Bahnhof");
        break;
    }
    case 34195:
    {
        returnValue = F("Am Wremer Tief");
        break;
    }
    case 34196:
    {
        returnValue = F("Am Wuhlsgraben");
        break;
    }
    case 34197:
    {
        returnValue = F("Am Wuhlwinkel");
        break;
    }
    case 34198:
    {
        returnValue = F("Am Wuhr");
        break;
    }
    case 34199:
    {
        returnValue = F("Am Wuhrloch");
        break;
    }
    case 34200:
    {
        returnValue = F("Am Wulfbach");
        break;
    }
    case 34201:
    {
        returnValue = F("Am Wulfkamp");
        break;
    }
    case 34202:
    {
        returnValue = F("Am Wulfsbarg");
        break;
    }
    case 34203:
    {
        returnValue = F("Am Wulfsberg");
        break;
    }
    case 34204:
    {
        returnValue = F("Am Wulfsthun");
        break;
    }
    case 34205:
    {
        returnValue = F("Am Wullbrandt");
        break;
    }
    case 34206:
    {
        returnValue = F("Am Wulleberg");
        break;
    }
    case 34207:
    {
        returnValue = F("Am Wunderbau");
        break;
    }
    case 34208:
    {
        returnValue = F("Am Wunderbrunnen");
        break;
    }
    case 34209:
    {
        returnValue = F("Am Wundergraben");
        break;
    }
    case 34210:
    {
        returnValue = F("Am Wunderhorn");
        break;
    }
    case 34211:
    {
        returnValue = F("Am Wurfbrunnen");
        break;
    }
    case 34212:
    {
        returnValue = F("Am Wurgel");
        break;
    }
    case 34213:
    {
        returnValue = F("Am Wurlsee");
        break;
    }
    case 34214:
    {
        returnValue = F("Am Wurmberg");
        break;
    }
    case 34215:
    {
        returnValue = F("Am Wurmerich");
        break;
    }
    case 34216:
    {
        returnValue = F("Am Wurmfeld");
        break;
    }
    case 34217:
    {
        returnValue = F("Am Wurstberg");
        break;
    }
    case 34218:
    {
        returnValue = F("Am Wurzacker");
        break;
    }
    case 34219:
    {
        returnValue = F("Am Wurzbächle");
        break;
    }
    case 34220:
    {
        returnValue = F("Am Wurzelbach");
        break;
    }
    case 34221:
    {
        returnValue = F("Am Wurzelgraben");
        break;
    }
    case 34222:
    {
        returnValue = F("Am Wustbach");
        break;
    }
    case 34223:
    {
        returnValue = F("Am Wustenberg");
        break;
    }
    case 34224:
    {
        returnValue = F("Am Wutzsee");
        break;
    }
    case 34225:
    {
        returnValue = F("Am Wäcker");
        break;
    }
    case 34226:
    {
        returnValue = F("Am Wählacker");
        break;
    }
    case 34227:
    {
        returnValue = F("Am Wäldchen");
        break;
    }
    case 34228:
    {
        returnValue = F("Am Wäldchenborn");
        break;
    }
    case 34229:
    {
        returnValue = F("Am Wäldchenloch");
        break;
    }
    case 34230:
    {
        returnValue = F("Am Wäldele");
        break;
    }
    case 34231:
    {
        returnValue = F("Am Wäldla");
        break;
    }
    case 34232:
    {
        returnValue = F("Am Wäldle");
        break;
    }
    case 34233:
    {
        returnValue = F("Am Wällchen");
        break;
    }
    case 34234:
    {
        returnValue = F("Am Wällerchen");
        break;
    }
    case 34235:
    {
        returnValue = F("Am Wällken");
        break;
    }
    case 34236:
    {
        returnValue = F("Am Wälzebach");
        break;
    }
    case 34237:
    {
        returnValue = F("Am Wäschbach");
        break;
    }
    case 34238:
    {
        returnValue = F("Am Wäschbrünnele");
        break;
    }
    case 34239:
    {
        returnValue = F("Am Wäschebach");
        break;
    }
    case 34240:
    {
        returnValue = F("Am Wäscheborn");
        break;
    }
    case 34241:
    {
        returnValue = F("Am Wäschen");
        break;
    }
    case 34242:
    {
        returnValue = F("Am Wässerchen");
        break;
    }
    case 34243:
    {
        returnValue = F("Am Wäthering");
        break;
    }
    case 34244:
    {
        returnValue = F("Am Wöddel");
        break;
    }
    case 34245:
    {
        returnValue = F("Am Wöhle Hof");
        break;
    }
    case 34246:
    {
        returnValue = F("Am Wöhn");
        break;
    }
    case 34247:
    {
        returnValue = F("Am Wöhr");
        break;
    }
    case 34248:
    {
        returnValue = F("Am Wöhrle");
        break;
    }
    case 34249:
    {
        returnValue = F("Am Wölflbach");
        break;
    }
    case 34250:
    {
        returnValue = F("Am Wöllerspfad");
        break;
    }
    case 34251:
    {
        returnValue = F("Am Wöllstein");
        break;
    }
    case 34252:
    {
        returnValue = F("Am Wörbes");
        break;
    }
    case 34253:
    {
        returnValue = F("Am Wördehoff");
        break;
    }
    case 34254:
    {
        returnValue = F("Am Wörn");
        break;
    }
    case 34255:
    {
        returnValue = F("Am Wörsbach");
        break;
    }
    case 34256:
    {
        returnValue = F("Am Wört");
        break;
    }
    case 34257:
    {
        returnValue = F("Am Wörth");
        break;
    }
    case 34258:
    {
        returnValue = F("Am Wörthbach");
        break;
    }
    case 34259:
    {
        returnValue = F("Am Wörthberg");
        break;
    }
    case 34260:
    {
        returnValue = F("Am Wörthen");
        break;
    }
    case 34261:
    {
        returnValue = F("Am Wörthle");
        break;
    }
    case 34262:
    {
        returnValue = F("Am Wörthling");
        break;
    }
    case 34263:
    {
        returnValue = F("Am Wörtzgarten");
        break;
    }
    case 34264:
    {
        returnValue = F("Am Wöstenbach");
        break;
    }
    case 34265:
    {
        returnValue = F("Am Wötzelbusch");
        break;
    }
    case 34266:
    {
        returnValue = F("Am Wührweg");
        break;
    }
    case 34267:
    {
        returnValue = F("Am Wüllen");
        break;
    }
    case 34268:
    {
        returnValue = F("Am Wüllenberg");
        break;
    }
    case 34269:
    {
        returnValue = F("Am Wüllnitzer Feld");
        break;
    }
    case 34270:
    {
        returnValue = F("Am Wünschberg");
        break;
    }
    case 34271:
    {
        returnValue = F("Am Würen");
        break;
    }
    case 34272:
    {
        returnValue = F("Am Würfelweg");
        break;
    }
    case 34273:
    {
        returnValue = F("Am Würmkanal");
        break;
    }
    case 34274:
    {
        returnValue = F("Am Würmsee");
        break;
    }
    case 34275:
    {
        returnValue = F("Am Würmufer");
        break;
    }
    case 34276:
    {
        returnValue = F("Am Würtembergle");
        break;
    }
    case 34277:
    {
        returnValue = F("Am Würzbach");
        break;
    }
    case 34278:
    {
        returnValue = F("Am Würzburger Tor");
        break;
    }
    case 34279:
    {
        returnValue = F("Am Würzgarten");
        break;
    }
    case 34280:
    {
        returnValue = F("Am Wüsteberg");
        break;
    }
    case 34281:
    {
        returnValue = F("Am Wüsten Placken");
        break;
    }
    case 34282:
    {
        returnValue = F("Am Wüsten Schloß");
        break;
    }
    case 34283:
    {
        returnValue = F("Am Wüstenhau");
        break;
    }
    case 34284:
    {
        returnValue = F("Am Yachthafen");
        break;
    }
    case 34285:
    {
        returnValue = F("Am Yachtwiek");
        break;
    }
    case 34286:
    {
        returnValue = F("Am Zaaster");
        break;
    }
    case 34287:
    {
        returnValue = F("Am Zabitzer Anger");
        break;
    }
    case 34288:
    {
        returnValue = F("Am Zacherkeller");
        break;
    }
    case 34289:
    {
        returnValue = F("Am Zachow");
        break;
    }
    case 34290:
    {
        returnValue = F("Am Zaglberg");
        break;
    }
    case 34291:
    {
        returnValue = F("Am Zahn");
        break;
    }
    case 34292:
    {
        returnValue = F("Am Zahnkreuz");
        break;
    }
    case 34293:
    {
        returnValue = F("Am Zahrener See");
        break;
    }
    case 34294:
    {
        returnValue = F("Am Zainhammer");
        break;
    }
    case 34295:
    {
        returnValue = F("Am Zangenberg");
        break;
    }
    case 34296:
    {
        returnValue = F("Am Zankwald");
        break;
    }
    case 34297:
    {
        returnValue = F("Am Zapfenbach");
        break;
    }
    case 34298:
    {
        returnValue = F("Am Zapfengarten");
        break;
    }
    case 34299:
    {
        returnValue = F("Am Zappelberg");
        break;
    }
    case 34300:
    {
        returnValue = F("Am Zappelteich");
        break;
    }
    case 34301:
    {
        returnValue = F("Am Zappenberg");
        break;
    }
    case 34302:
    {
        returnValue = F("Am Zaschberg");
        break;
    }
    case 34303:
    {
        returnValue = F("Am Zauberberg");
        break;
    }
    case 34304:
    {
        returnValue = F("Am Zauberkraut");
        break;
    }
    case 34305:
    {
        returnValue = F("Am Zauberwald");
        break;
    }
    case 34306:
    {
        returnValue = F("Am Zaun");
        break;
    }
    case 34307:
    {
        returnValue = F("Am Zaunacker");
        break;
    }
    case 34308:
    {
        returnValue = F("Am Zaunbusch");
        break;
    }
    case 34309:
    {
        returnValue = F("Am Zaune");
        break;
    }
    case 34310:
    {
        returnValue = F("Am Zechengrund");
        break;
    }
    case 34311:
    {
        returnValue = F("Am Zechenhaus");
        break;
    }
    case 34312:
    {
        returnValue = F("Am Zechstein");
        break;
    }
    case 34313:
    {
        returnValue = F("Am Zederpfuhl");
        break;
    }
    case 34314:
    {
        returnValue = F("Am Zeegenbach");
        break;
    }
    case 34315:
    {
        returnValue = F("Am Zeel");
        break;
    }
    case 34316:
    {
        returnValue = F("Am Zeerranken");
        break;
    }
    case 34317:
    {
        returnValue = F("Am Zehenbühl");
        break;
    }
    case 34318:
    {
        returnValue = F("Am Zehentfeld");
        break;
    }
    case 34319:
    {
        returnValue = F("Am Zehentgrund");
        break;
    }
    case 34320:
    {
        returnValue = F("Am Zehenthof");
        break;
    }
    case 34321:
    {
        returnValue = F("Am Zehentstadel");
        break;
    }
    case 34322:
    {
        returnValue = F("Am Zehentstadl");
        break;
    }
    case 34323:
    {
        returnValue = F("Am Zehentstüblein");
        break;
    }
    case 34324:
    {
        returnValue = F("Am Zehentweg");
        break;
    }
    case 34325:
    {
        returnValue = F("Am Zehling");
        break;
    }
    case 34326:
    {
        returnValue = F("Am Zehnbuschgraben");
        break;
    }
    case 34327:
    {
        returnValue = F("Am Zehnergarten");
        break;
    }
    case 34328:
    {
        returnValue = F("Am Zehnrutengraben");
        break;
    }
    case 34329:
    {
        returnValue = F("Am Zehntacker");
        break;
    }
    case 34330:
    {
        returnValue = F("Am Zehntberg");
        break;
    }
    case 34331:
    {
        returnValue = F("Am Zehntefrei");
        break;
    }
    case 34332:
    {
        returnValue = F("Am Zehntenbach");
        break;
    }
    case 34333:
    {
        returnValue = F("Am Zehntenfeld");
        break;
    }
    case 34334:
    {
        returnValue = F("Am Zehntenhof");
        break;
    }
    case 34335:
    {
        returnValue = F("Am Zehntgraben");
        break;
    }
    case 34336:
    {
        returnValue = F("Am Zehntgrafen");
        break;
    }
    case 34337:
    {
        returnValue = F("Am Zehnthof");
        break;
    }
    case 34338:
    {
        returnValue = F("Am Zehnthofe");
        break;
    }
    case 34339:
    {
        returnValue = F("Am Zehnthäusl");
        break;
    }
    case 34340:
    {
        returnValue = F("Am Zehnthügel");
        break;
    }
    case 34341:
    {
        returnValue = F("Am Zehntkeller");
        break;
    }
    case 34342:
    {
        returnValue = F("Am Zehntstadel");
        break;
    }
    case 34343:
    {
        returnValue = F("Am Zehnttor");
        break;
    }
    case 34344:
    {
        returnValue = F("Am Zehrech");
        break;
    }
    case 34345:
    {
        returnValue = F("Am Zeicht");
        break;
    }
    case 34346:
    {
        returnValue = F("Am Zeidelteich");
        break;
    }
    case 34347:
    {
        returnValue = F("Am Zeil");
        break;
    }
    case 34348:
    {
        returnValue = F("Am Zeilacker");
        break;
    }
    case 34349:
    {
        returnValue = F("Am Zeilbaum");
        break;
    }
    case 34350:
    {
        returnValue = F("Am Zeilberg");
        break;
    }
    case 34351:
    {
        returnValue = F("Am Zeiler");
        break;
    }
    case 34352:
    {
        returnValue = F("Am Zeilfeld");
        break;
    }
    case 34353:
    {
        returnValue = F("Am Zeilgraben");
        break;
    }
    case 34354:
    {
        returnValue = F("Am Zeilweg");
        break;
    }
    case 34355:
    {
        returnValue = F("Am Zeintl");
        break;
    }
    case 34356:
    {
        returnValue = F("Am Zeise Rain");
        break;
    }
    case 34357:
    {
        returnValue = F("Am Zeisenstein");
        break;
    }
    case 34358:
    {
        returnValue = F("Am Zeisig");
        break;
    }
    case 34359:
    {
        returnValue = F("Am Zeisigberg");
        break;
    }
    case 34360:
    {
        returnValue = F("Am Zeitzgrund");
        break;
    }
    case 34361:
    {
        returnValue = F("Am Zelch");
        break;
    }
    case 34362:
    {
        returnValue = F("Am Zellacker");
        break;
    }
    case 34363:
    {
        returnValue = F("Am Zellbaum");
        break;
    }
    case 34364:
    {
        returnValue = F("Am Zellenrain");
        break;
    }
    case 34365:
    {
        returnValue = F("Am Zeller Sportplatz");
        break;
    }
    case 34366:
    {
        returnValue = F("Am Zellerbach");
        break;
    }
    case 34367:
    {
        returnValue = F("Am Zellerberg");
        break;
    }
    case 34368:
    {
        returnValue = F("Am Zellerbruch");
        break;
    }
    case 34369:
    {
        returnValue = F("Am Zellersbach");
        break;
    }
    case 34370:
    {
        returnValue = F("Am Zellweg");
        break;
    }
    case 34371:
    {
        returnValue = F("Am Zeltplatz");
        break;
    }
    case 34372:
    {
        returnValue = F("Am Zementwerk");
        break;
    }
    case 34373:
    {
        returnValue = F("Am Zemmer");
        break;
    }
    case 34374:
    {
        returnValue = F("Am Zemmerhof");
        break;
    }
    case 34375:
    {
        returnValue = F("Am Zengerweiher");
        break;
    }
    case 34376:
    {
        returnValue = F("Am Zengselsberg");
        break;
    }
    case 34377:
    {
        returnValue = F("Am Zentbuckel");
        break;
    }
    case 34378:
    {
        returnValue = F("Am Zenterberge");
        break;
    }
    case 34379:
    {
        returnValue = F("Am Zenterling");
        break;
    }
    case 34380:
    {
        returnValue = F("Am Zentral");
        break;
    }
    case 34381:
    {
        returnValue = F("Am Zentralparkplatz");
        break;
    }
    case 34382:
    {
        returnValue = F("Am Zentralweg");
        break;
    }
    case 34383:
    {
        returnValue = F("Am Zentrum");
        break;
    }
    case 34384:
    {
        returnValue = F("Am Zenzenbach");
        break;
    }
    case 34385:
    {
        returnValue = F("Am Zenzenberg");
        break;
    }
    case 34386:
    {
        returnValue = F("Am Zeppelindenkmal");
        break;
    }
    case 34387:
    {
        returnValue = F("Am Zeppelinstein");
        break;
    }
    case 34388:
    {
        returnValue = F("Am Zesterfleet");
        break;
    }
    case 34389:
    {
        returnValue = F("Am Zettelbach");
        break;
    }
    case 34390:
    {
        returnValue = F("Am Zettischbrerg");
        break;
    }
    case 34391:
    {
        returnValue = F("Am Zeugamt");
        break;
    }
    case 34392:
    {
        returnValue = F("Am Zeuthener Winkel");
        break;
    }
    case 34393:
    {
        returnValue = F("Am Zibetholz");
        break;
    }
    case 34394:
    {
        returnValue = F("Am Zickelfeld");
        break;
    }
    case 34395:
    {
        returnValue = F("Am Zickenkamp");
        break;
    }
    case 34396:
    {
        returnValue = F("Am Zidderwald");
        break;
    }
    case 34397:
    {
        returnValue = F("Am Ziedergraben");
        break;
    }
    case 34398:
    {
        returnValue = F("Am Ziegelacker");
        break;
    }
    case 34399:
    {
        returnValue = F("Am Ziegelanger");
        break;
    }
    case 34400:
    {
        returnValue = F("Am Ziegelbach");
        break;
    }
    case 34401:
    {
        returnValue = F("Am Ziegelbaum");
        break;
    }
    case 34402:
    {
        returnValue = F("Am Ziegelberg");
        break;
    }
    case 34403:
    {
        returnValue = F("Am Ziegelbronnen");
        break;
    }
    case 34404:
    {
        returnValue = F("Am Ziegelbruch");
        break;
    }
    case 34405:
    {
        returnValue = F("Am Ziegelbrunn");
        break;
    }
    case 34406:
    {
        returnValue = F("Am Ziegelbrunnen");
        break;
    }
    case 34407:
    {
        returnValue = F("Am Ziegelbuch");
        break;
    }
    case 34408:
    {
        returnValue = F("Am Ziegelbuck");
        break;
    }
    case 34409:
    {
        returnValue = F("Am Ziegelbuckel");
        break;
    }
    case 34410:
    {
        returnValue = F("Am Ziegelbug");
        break;
    }
    case 34411:
    {
        returnValue = F("Am Ziegelbühl");
        break;
    }
    case 34412:
    {
        returnValue = F("Am Ziegeldamm");
        break;
    }
    case 34413:
    {
        returnValue = F("Am Ziegeldeich");
        break;
    }
    case 34414:
    {
        returnValue = F("Am Ziegeleck");
        break;
    }
    case 34415:
    {
        returnValue = F("Am Ziegeleiberg");
        break;
    }
    case 34416:
    {
        returnValue = F("Am Ziegeleigraben");
        break;
    }
    case 34417:
    {
        returnValue = F("Am Ziegeleihof");
        break;
    }
    case 34418:
    {
        returnValue = F("Am Ziegeleipark");
        break;
    }
    case 34419:
    {
        returnValue = F("Am Ziegeleischlag");
        break;
    }
    case 34420:
    {
        returnValue = F("Am Ziegeleistich");
        break;
    }
    case 34421:
    {
        returnValue = F("Am Ziegeleiteich");
        break;
    }
    case 34422:
    {
        returnValue = F("Am Ziegeleitor");
        break;
    }
    case 34423:
    {
        returnValue = F("Am Ziegeleiweg");
        break;
    }
    case 34424:
    {
        returnValue = F("Am Ziegelesch");
        break;
    }
    case 34425:
    {
        returnValue = F("Am Ziegeleschle");
        break;
    }
    case 34426:
    {
        returnValue = F("Am Ziegelfeld");
        break;
    }
    case 34427:
    {
        returnValue = F("Am Ziegelgarten");
        break;
    }
    case 34428:
    {
        returnValue = F("Am Ziegelgraben");
        break;
    }
    case 34429:
    {
        returnValue = F("Am Ziegelgrund");
        break;
    }
    case 34430:
    {
        returnValue = F("Am Ziegelhang");
        break;
    }
    case 34431:
    {
        returnValue = F("Am Ziegelhau");
        break;
    }
    case 34432:
    {
        returnValue = F("Am Ziegelherd");
        break;
    }
    case 34433:
    {
        returnValue = F("Am Ziegelhof");
        break;
    }
    case 34434:
    {
        returnValue = F("Am Ziegelholz");
        break;
    }
    case 34435:
    {
        returnValue = F("Am Ziegelhäuschen");
        break;
    }
    case 34436:
    {
        returnValue = F("Am Ziegelhäusl");
        break;
    }
    case 34437:
    {
        returnValue = F("Am Ziegelkamp");
        break;
    }
    case 34438:
    {
        returnValue = F("Am Ziegelland");
        break;
    }
    case 34439:
    {
        returnValue = F("Am Ziegelmahd");
        break;
    }
    case 34440:
    {
        returnValue = F("Am Ziegelofen");
        break;
    }
    case 34441:
    {
        returnValue = F("Am Ziegelplatz");
        break;
    }
    case 34442:
    {
        returnValue = F("Am Ziegelrain");
        break;
    }
    case 34443:
    {
        returnValue = F("Am Ziegelrasen");
        break;
    }
    case 34444:
    {
        returnValue = F("Am Ziegelrück");
        break;
    }
    case 34445:
    {
        returnValue = F("Am Ziegelsand");
        break;
    }
    case 34446:
    {
        returnValue = F("Am Ziegelsberg");
        break;
    }
    case 34447:
    {
        returnValue = F("Am Ziegelsgrund");
        break;
    }
    case 34448:
    {
        returnValue = F("Am Ziegelstadel");
        break;
    }
    case 34449:
    {
        returnValue = F("Am Ziegelstadelberg");
        break;
    }
    case 34450:
    {
        returnValue = F("Am Ziegelstadelfeld");
        break;
    }
    case 34451:
    {
        returnValue = F("Am Ziegelstadl");
        break;
    }
    case 34452:
    {
        returnValue = F("Am Ziegelteich");
        break;
    }
    case 34453:
    {
        returnValue = F("Am Ziegeltörle");
        break;
    }
    case 34454:
    {
        returnValue = F("Am Ziegelwall");
        break;
    }
    case 34455:
    {
        returnValue = F("Am Ziegelweiher");
        break;
    }
    case 34456:
    {
        returnValue = F("Am Ziegelwinkel");
        break;
    }
    case 34457:
    {
        returnValue = F("Am Ziegelwoog");
        break;
    }
    case 34458:
    {
        returnValue = F("Am Ziegenbach");
        break;
    }
    case 34459:
    {
        returnValue = F("Am Ziegenberg");
        break;
    }
    case 34460:
    {
        returnValue = F("Am Ziegenberge");
        break;
    }
    case 34461:
    {
        returnValue = F("Am Ziegenbirnbaum");
        break;
    }
    case 34462:
    {
        returnValue = F("Am Ziegenhals");
        break;
    }
    case 34463:
    {
        returnValue = F("Am Ziegenkopf");
        break;
    }
    case 34464:
    {
        returnValue = F("Am Ziegenköppel");
        break;
    }
    case 34465:
    {
        returnValue = F("Am Ziegenrück");
        break;
    }
    case 34466:
    {
        returnValue = F("Am Ziegenrücken");
        break;
    }
    case 34467:
    {
        returnValue = F("Am Ziegenstadel");
        break;
    }
    case 34468:
    {
        returnValue = F("Am Zieger");
        break;
    }
    case 34469:
    {
        returnValue = F("Am Ziegler");
        break;
    }
    case 34470:
    {
        returnValue = F("Am Zieglersrain");
        break;
    }
    case 34471:
    {
        returnValue = F("Am Zieglersweg");
        break;
    }
    case 34472:
    {
        returnValue = F("Am Zieglstadl");
        break;
    }
    case 34473:
    {
        returnValue = F("Am Ziehborn");
        break;
    }
    case 34474:
    {
        returnValue = F("Am Ziehküppel");
        break;
    }
    case 34475:
    {
        returnValue = F("Am Ziehmoosfeld");
        break;
    }
    case 34476:
    {
        returnValue = F("Am Ziehr");
        break;
    }
    case 34477:
    {
        returnValue = F("Am Ziel");
        break;
    }
    case 34478:
    {
        returnValue = F("Am Zielbaum");
        break;
    }
    case 34479:
    {
        returnValue = F("Am Zielberg");
        break;
    }
    case 34480:
    {
        returnValue = F("Am Zielgarten");
        break;
    }
    case 34481:
    {
        returnValue = F("Am Zielitz");
        break;
    }
    case 34482:
    {
        returnValue = F("Am Ziemnitzgraben");
        break;
    }
    case 34483:
    {
        returnValue = F("Am Zien");
        break;
    }
    case 34484:
    {
        returnValue = F("Am Zierle");
        break;
    }
    case 34485:
    {
        returnValue = F("Am Ziers");
        break;
    }
    case 34486:
    {
        returnValue = F("Am Zieselbach");
        break;
    }
    case 34487:
    {
        returnValue = F("Am Ziest");
        break;
    }
    case 34488:
    {
        returnValue = F("Am Ziestsee");
        break;
    }
    case 34489:
    {
        returnValue = F("Am Zigeunerweiher");
        break;
    }
    case 34490:
    {
        returnValue = F("Am Zihlbühl");
        break;
    }
    case 34491:
    {
        returnValue = F("Am Zilkesberg");
        break;
    }
    case 34492:
    {
        returnValue = F("Am Zillerhof");
        break;
    }
    case 34493:
    {
        returnValue = F("Am Zillesbach");
        break;
    }
    case 34494:
    {
        returnValue = F("Am Zilliggarten");
        break;
    }
    case 34495:
    {
        returnValue = F("Am Zimmerbach");
        break;
    }
    case 34496:
    {
        returnValue = F("Am Zimmerbeil");
        break;
    }
    case 34497:
    {
        returnValue = F("Am Zimmerberg");
        break;
    }
    case 34498:
    {
        returnValue = F("Am Zimmererberg");
        break;
    }
    case 34499:
    {
        returnValue = F("Am Zimmerkopf");
        break;
    }
    case 34500:
    {
        returnValue = F("Am Zimmerköpfl");
        break;
    }
    case 34501:
    {
        returnValue = F("Am Zimmerplatz");
        break;
    }
    case 34502:
    {
        returnValue = F("Am Zimmersberg");
        break;
    }
    case 34503:
    {
        returnValue = F("Am Zimmersgrund");
        break;
    }
    case 34504:
    {
        returnValue = F("Am Zimmerweg");
        break;
    }
    case 34505:
    {
        returnValue = F("Am Zimmeshaus");
        break;
    }
    case 34506:
    {
        returnValue = F("Am Zingel");
        break;
    }
    case 34507:
    {
        returnValue = F("Am Zinken");
        break;
    }
    case 34508:
    {
        returnValue = F("Am Zinkenholz");
        break;
    }
    case 34509:
    {
        returnValue = F("Am Zinkenrain");
        break;
    }
    case 34510:
    {
        returnValue = F("Am Zinkenschlag");
        break;
    }
    case 34511:
    {
        returnValue = F("Am Zinnacker");
        break;
    }
    case 34512:
    {
        returnValue = F("Am Zinnaer Tor");
        break;
    }
    case 34513:
    {
        returnValue = F("Am Zinnbach");
        break;
    }
    case 34514:
    {
        returnValue = F("Am Zinnberg");
        break;
    }
    case 34515:
    {
        returnValue = F("Am Zinnwald");
        break;
    }
    case 34516:
    {
        returnValue = F("Am Zinshof");
        break;
    }
    case 34517:
    {
        returnValue = F("Am Zion");
        break;
    }
    case 34518:
    {
        returnValue = F("Am Zipfel");
        break;
    }
    case 34519:
    {
        returnValue = F("Am Zipfelbach");
        break;
    }
    case 34520:
    {
        returnValue = F("Am Zippenberg");
        break;
    }
    case 34521:
    {
        returnValue = F("Am Zippenweg");
        break;
    }
    case 34522:
    {
        returnValue = F("Am Zirkel");
        break;
    }
    case 34523:
    {
        returnValue = F("Am Zirkelborn");
        break;
    }
    case 34524:
    {
        returnValue = F("Am Zirkelrain");
        break;
    }
    case 34525:
    {
        returnValue = F("Am Zirkelstein");
        break;
    }
    case 34526:
    {
        returnValue = F("Am Zirowberg");
        break;
    }
    case 34527:
    {
        returnValue = F("Am Zitronenberg");
        break;
    }
    case 34528:
    {
        returnValue = F("Am Zitter");
        break;
    }
    case 34529:
    {
        returnValue = F("Am Zitterbach");
        break;
    }
    case 34530:
    {
        returnValue = F("Am Zobelpfad");
        break;
    }
    case 34531:
    {
        returnValue = F("Am Zobelstein");
        break;
    }
    case 34532:
    {
        returnValue = F("Am Zoglerberg");
        break;
    }
    case 34533:
    {
        returnValue = F("Am Zolch");
        break;
    }
    case 34534:
    {
        returnValue = F("Am Zoll");
        break;
    }
    case 34535:
    {
        returnValue = F("Am Zollacker");
        break;
    }
    case 34536:
    {
        returnValue = F("Am Zollamt");
        break;
    }
    case 34537:
    {
        returnValue = F("Am Zollanger");
        break;
    }
    case 34538:
    {
        returnValue = F("Am Zollbahnhof");
        break;
    }
    case 34539:
    {
        returnValue = F("Am Zollbaum");
        break;
    }
    case 34540:
    {
        returnValue = F("Am Zollbrett");
        break;
    }
    case 34541:
    {
        returnValue = F("Am Zollen");
        break;
    }
    case 34542:
    {
        returnValue = F("Am Zollenberg");
        break;
    }
    case 34543:
    {
        returnValue = F("Am Zollerbahnhof");
        break;
    }
    case 34544:
    {
        returnValue = F("Am Zollerberg");
        break;
    }
    case 34545:
    {
        returnValue = F("Am Zollerblick");
        break;
    }
    case 34546:
    {
        returnValue = F("Am Zollernblick");
        break;
    }
    case 34547:
    {
        returnValue = F("Am Zollfeld");
        break;
    }
    case 34548:
    {
        returnValue = F("Am Zollhaus");
        break;
    }
    case 34549:
    {
        returnValue = F("Am Zollhof");
        break;
    }
    case 34550:
    {
        returnValue = F("Am Zollholz");
        break;
    }
    case 34551:
    {
        returnValue = F("Am Zollkrug");
        break;
    }
    case 34552:
    {
        returnValue = F("Am Zollposten");
        break;
    }
    case 34553:
    {
        returnValue = F("Am Zollstangen");
        break;
    }
    case 34554:
    {
        returnValue = F("Am Zollsteig");
        break;
    }
    case 34555:
    {
        returnValue = F("Am Zollstock");
        break;
    }
    case 34556:
    {
        returnValue = F("Am Zolltor");
        break;
    }
    case 34557:
    {
        returnValue = F("Am Zolperhof");
        break;
    }
    case 34558:
    {
        returnValue = F("Am Zonshof");
        break;
    }
    case 34559:
    {
        returnValue = F("Am Zootzen");
        break;
    }
    case 34560:
    {
        returnValue = F("Am Zoperich");
        break;
    }
    case 34561:
    {
        returnValue = F("Am Zoppenberg");
        break;
    }
    case 34562:
    {
        returnValue = F("Am Zschaitener Sportplatz");
        break;
    }
    case 34563:
    {
        returnValue = F("Am Zschopenberg");
        break;
    }
    case 34564:
    {
        returnValue = F("Am Zschöllauer Berg");
        break;
    }
    case 34565:
    {
        returnValue = F("Am Zubringer");
        break;
    }
    case 34566:
    {
        returnValue = F("Am Zuckerbaum");
        break;
    }
    case 34567:
    {
        returnValue = F("Am Zuckerberg");
        break;
    }
    case 34568:
    {
        returnValue = F("Am Zuckerborn");
        break;
    }
    case 34569:
    {
        returnValue = F("Am Zuckerbuckel");
        break;
    }
    case 34570:
    {
        returnValue = F("Am Zuckergraben");
        break;
    }
    case 34571:
    {
        returnValue = F("Am Zuckerhut");
        break;
    }
    case 34572:
    {
        returnValue = F("Am Zuckerlottchen");
        break;
    }
    case 34573:
    {
        returnValue = F("Am Zuckerturm");
        break;
    }
    case 34574:
    {
        returnValue = F("Am Zufang");
        break;
    }
    case 34575:
    {
        returnValue = F("Am Zuggraben");
        break;
    }
    case 34576:
    {
        returnValue = F("Am Zugmantel");
        break;
    }
    case 34577:
    {
        returnValue = F("Am Zusamanger");
        break;
    }
    case 34578:
    {
        returnValue = F("Am Zusamblick");
        break;
    }
    case 34579:
    {
        returnValue = F("Am Zusamtal");
        break;
    }
    case 34580:
    {
        returnValue = F("Am Zuschlag");
        break;
    }
    case 34581:
    {
        returnValue = F("Am Zuschlag / Im Esch");
        break;
    }
    case 34582:
    {
        returnValue = F("Am Zwangsacker");
        break;
    }
    case 34583:
    {
        returnValue = F("Am Zweckerweiher");
        break;
    }
    case 34584:
    {
        returnValue = F("Am Zweigkanal");
        break;
    }
    case 34585:
    {
        returnValue = F("Am Zweiling");
        break;
    }
    case 34586:
    {
        returnValue = F("Am Zweng");
        break;
    }
    case 34587:
    {
        returnValue = F("Am Zwengel");
        break;
    }
    case 34588:
    {
        returnValue = F("Am Zwenger");
        break;
    }
    case 34589:
    {
        returnValue = F("Am Zwerchbach");
        break;
    }
    case 34590:
    {
        returnValue = F("Am Zwerchgraben");
        break;
    }
    case 34591:
    {
        returnValue = F("Am Zwergbach");
        break;
    }
    case 34592:
    {
        returnValue = F("Am Zwergenwald");
        break;
    }
    case 34593:
    {
        returnValue = F("Am Zwerggraben");
        break;
    }
    case 34594:
    {
        returnValue = F("Am Zwergwegle");
        break;
    }
    case 34595:
    {
        returnValue = F("Am Zwickauer Marktsteig");
        break;
    }
    case 34596:
    {
        returnValue = F("Am Zwiebelberg");
        break;
    }
    case 34597:
    {
        returnValue = F("Am Zwiebelgarten");
        break;
    }
    case 34598:
    {
        returnValue = F("Am Zwiebelrain");
        break;
    }
    case 34599:
    {
        returnValue = F("Am Zwierenzl");
        break;
    }
    case 34600:
    {
        returnValue = F("Am Zwiernet");
        break;
    }
    case 34601:
    {
        returnValue = F("Am Zwiesel");
        break;
    }
    case 34602:
    {
        returnValue = F("Am Zwieselberg");
        break;
    }
    case 34603:
    {
        returnValue = F("Am Zwieselhang");
        break;
    }
    case 34604:
    {
        returnValue = F("Am Zwingel");
        break;
    }
    case 34605:
    {
        returnValue = F("Am Zwingelsbrünnchen");
        break;
    }
    case 34606:
    {
        returnValue = F("Am Zwinger");
        break;
    }
    case 34607:
    {
        returnValue = F("Am Zwirn");
        break;
    }
    case 34608:
    {
        returnValue = F("Am Zwirnberg");
        break;
    }
    case 34609:
    {
        returnValue = F("Am Zwirner");
        break;
    }
    case 34610:
    {
        returnValue = F("Am Zwirnet");
        break;
    }
    case 34611:
    {
        returnValue = F("Am Zwirrleinsberg");
        break;
    }
    case 34612:
    {
        returnValue = F("Am Zwischenweg");
        break;
    }
    case 34613:
    {
        returnValue = F("Am Zwölfmannsgarten");
        break;
    }
    case 34614:
    {
        returnValue = F("Am Zänker");
        break;
    }
    case 34615:
    {
        returnValue = F("Am Zäun");
        break;
    }
    case 34616:
    {
        returnValue = F("Am Zäunchen");
        break;
    }
    case 34617:
    {
        returnValue = F("Am Zäunefeld");
        break;
    }
    case 34618:
    {
        returnValue = F("Am Zöffelpark");
        break;
    }
    case 34619:
    {
        returnValue = F("Am Zöller");
        break;
    }
    case 34620:
    {
        returnValue = F("Am Zückberg");
        break;
    }
    case 34621:
    {
        returnValue = F("Am Zügel");
        break;
    }
    case 34622:
    {
        returnValue = F("Am Zühlensee");
        break;
    }
    case 34623:
    {
        returnValue = F("Am Zürch");
        break;
    }
    case 34624:
    {
        returnValue = F("Am alden Schmidt");
        break;
    }
    case 34625:
    {
        returnValue = F("Am alten Amtsgericht");
        break;
    }
    case 34626:
    {
        returnValue = F("Am alten Amtshaus");
        break;
    }
    case 34627:
    {
        returnValue = F("Am alten Amtshof");
        break;
    }
    case 34628:
    {
        returnValue = F("Am alten Bach");
        break;
    }
    case 34629:
    {
        returnValue = F("Am alten Bad");
        break;
    }
    case 34630:
    {
        returnValue = F("Am alten Bahndamm");
        break;
    }
    case 34631:
    {
        returnValue = F("Am alten Bahnhaus");
        break;
    }
    case 34632:
    {
        returnValue = F("Am alten Bahnhof");
        break;
    }
    case 34633:
    {
        returnValue = F("Am alten Bahnweg");
        break;
    }
    case 34634:
    {
        returnValue = F("Am alten Bauhof");
        break;
    }
    case 34635:
    {
        returnValue = F("Am alten Berg");
        break;
    }
    case 34636:
    {
        returnValue = F("Am alten Birnbaum");
        break;
    }
    case 34637:
    {
        returnValue = F("Am alten Bolzplatz");
        break;
    }
    case 34638:
    {
        returnValue = F("Am alten Bongert");
        break;
    }
    case 34639:
    {
        returnValue = F("Am alten Born");
        break;
    }
    case 34640:
    {
        returnValue = F("Am alten Brunnen");
        break;
    }
    case 34641:
    {
        returnValue = F("Am alten Bähnle");
        break;
    }
    case 34642:
    {
        returnValue = F("Am alten DJK-Sportplatz");
        break;
    }
    case 34643:
    {
        returnValue = F("Am alten Deich");
        break;
    }
    case 34644:
    {
        returnValue = F("Am alten Donaubad");
        break;
    }
    case 34645:
    {
        returnValue = F("Am alten Dorf");
        break;
    }
    case 34646:
    {
        returnValue = F("Am alten Dorfanger");
        break;
    }
    case 34647:
    {
        returnValue = F("Am alten Dorfplatz");
        break;
    }
    case 34648:
    {
        returnValue = F("Am alten Dorfteich");
        break;
    }
    case 34649:
    {
        returnValue = F("Am alten Dornicher Weg");
        break;
    }
    case 34650:
    {
        returnValue = F("Am alten Dreschplatz");
        break;
    }
    case 34651:
    {
        returnValue = F("Am alten Dütschower Weg");
        break;
    }
    case 34652:
    {
        returnValue = F("Am alten Eisenwerk");
        break;
    }
    case 34653:
    {
        returnValue = F("Am alten Exerzierplatz");
        break;
    }
    case 34654:
    {
        returnValue = F("Am alten Fahr");
        break;
    }
    case 34655:
    {
        returnValue = F("Am alten Feld");
        break;
    }
    case 34656:
    {
        returnValue = F("Am alten Festplatz");
        break;
    }
    case 34657:
    {
        returnValue = F("Am alten Feuerwehrhaus");
        break;
    }
    case 34658:
    {
        returnValue = F("Am alten Fliegerhorst");
        break;
    }
    case 34659:
    {
        returnValue = F("Am alten Floßgraben");
        break;
    }
    case 34660:
    {
        returnValue = F("Am alten Flugplatz");
        break;
    }
    case 34661:
    {
        returnValue = F("Am alten Flutgraben");
        break;
    }
    case 34662:
    {
        returnValue = F("Am alten Fort");
        break;
    }
    case 34663:
    {
        returnValue = F("Am alten Freibad");
        break;
    }
    case 34664:
    {
        returnValue = F("Am alten Friedhof");
        break;
    }
    case 34665:
    {
        returnValue = F("Am alten Fritz");
        break;
    }
    case 34666:
    {
        returnValue = F("Am alten Garten");
        break;
    }
    case 34667:
    {
        returnValue = F("Am alten Gasthofe");
        break;
    }
    case 34668:
    {
        returnValue = F("Am alten Gaswerk");
        break;
    }
    case 34669:
    {
        returnValue = F("Am alten Gericht");
        break;
    }
    case 34670:
    {
        returnValue = F("Am alten Gleis");
        break;
    }
    case 34671:
    {
        returnValue = F("Am alten Graben");
        break;
    }
    case 34672:
    {
        returnValue = F("Am alten Gradierwerk");
        break;
    }
    case 34673:
    {
        returnValue = F("Am alten Grenzstein");
        break;
    }
    case 34674:
    {
        returnValue = F("Am alten Großmarkt");
        break;
    }
    case 34675:
    {
        returnValue = F("Am alten Gut");
        break;
    }
    case 34676:
    {
        returnValue = F("Am alten Gutshof");
        break;
    }
    case 34677:
    {
        returnValue = F("Am alten Güterbahnhof");
        break;
    }
    case 34678:
    {
        returnValue = F("Am alten Hafen");
        break;
    }
    case 34679:
    {
        returnValue = F("Am alten Hahn");
        break;
    }
    case 34680:
    {
        returnValue = F("Am alten Hain");
        break;
    }
    case 34681:
    {
        returnValue = F("Am alten Handelshafen");
        break;
    }
    case 34682:
    {
        returnValue = F("Am alten Helweg");
        break;
    }
    case 34683:
    {
        returnValue = F("Am alten Hof");
        break;
    }
    case 34684:
    {
        returnValue = F("Am alten Hofgut");
        break;
    }
    case 34685:
    {
        returnValue = F("Am alten Holzplatz");
        break;
    }
    case 34686:
    {
        returnValue = F("Am alten Judenfriedhof");
        break;
    }
    case 34687:
    {
        returnValue = F("Am alten Jugendzentrum");
        break;
    }
    case 34688:
    {
        returnValue = F("Am alten Kammergut");
        break;
    }
    case 34689:
    {
        returnValue = F("Am alten Kaninsberg");
        break;
    }
    case 34690:
    {
        returnValue = F("Am alten Kiesberg");
        break;
    }
    case 34691:
    {
        returnValue = F("Am alten Kindergarten");
        break;
    }
    case 34692:
    {
        returnValue = F("Am alten Kirchenweg");
        break;
    }
    case 34693:
    {
        returnValue = F("Am alten Kirchhof");
        break;
    }
    case 34694:
    {
        returnValue = F("Am alten Kirchplatz");
        break;
    }
    case 34695:
    {
        returnValue = F("Am alten Kirchturm");
        break;
    }
    case 34696:
    {
        returnValue = F("Am alten Kirchweg");
        break;
    }
    case 34697:
    {
        returnValue = F("Am alten Kirmesplatz");
        break;
    }
    case 34698:
    {
        returnValue = F("Am alten Kotten");
        break;
    }
    case 34699:
    {
        returnValue = F("Am alten Kraftwerk");
        break;
    }
    case 34700:
    {
        returnValue = F("Am alten Krankenhaus");
        break;
    }
    case 34701:
    {
        returnValue = F("Am alten Kreidebruch");
        break;
    }
    case 34702:
    {
        returnValue = F("Am alten Kurhaus");
        break;
    }
    case 34703:
    {
        returnValue = F("Am alten Landgraben");
        break;
    }
    case 34704:
    {
        returnValue = F("Am alten Laufgraben");
        break;
    }
    case 34705:
    {
        returnValue = F("Am alten Lokschuppen");
        break;
    }
    case 34706:
    {
        returnValue = F("Am alten Luhebogen");
        break;
    }
    case 34707:
    {
        returnValue = F("Am alten Mahl");
        break;
    }
    case 34708:
    {
        returnValue = F("Am alten Main");
        break;
    }
    case 34709:
    {
        returnValue = F("Am alten Markt");
        break;
    }
    case 34710:
    {
        returnValue = F("Am alten Marmorwerk");
        break;
    }
    case 34711:
    {
        returnValue = F("Am alten Marstall");
        break;
    }
    case 34712:
    {
        returnValue = F("Am alten Meiereigraben");
        break;
    }
    case 34713:
    {
        returnValue = F("Am alten Mörtelwerk");
        break;
    }
    case 34714:
    {
        returnValue = F("Am alten Mühlengraben");
        break;
    }
    case 34715:
    {
        returnValue = F("Am alten Mühlgraben");
        break;
    }
    case 34716:
    {
        returnValue = F("Am alten Osterfeuer");
        break;
    }
    case 34717:
    {
        returnValue = F("Am alten Pfarrhof");
        break;
    }
    case 34718:
    {
        returnValue = F("Am alten Posthof");
        break;
    }
    case 34719:
    {
        returnValue = F("Am alten Postweg");
        break;
    }
    case 34720:
    {
        returnValue = F("Am alten Rathaus");
        break;
    }
    case 34721:
    {
        returnValue = F("Am alten Rathausbogen");
        break;
    }
    case 34722:
    {
        returnValue = F("Am alten Reitplatz");
        break;
    }
    case 34723:
    {
        returnValue = F("Am alten Rhein");
        break;
    }
    case 34724:
    {
        returnValue = F("Am alten Sauerstoffwerk");
        break;
    }
    case 34725:
    {
        returnValue = F("Am alten Schafstall");
        break;
    }
    case 34726:
    {
        returnValue = F("Am alten Schießplatz");
        break;
    }
    case 34727:
    {
        returnValue = F("Am alten Schießstand");
        break;
    }
    case 34728:
    {
        returnValue = F("Am alten Schirrhof");
        break;
    }
    case 34729:
    {
        returnValue = F("Am alten Schlachthof");
        break;
    }
    case 34730:
    {
        returnValue = F("Am alten Schlag");
        break;
    }
    case 34731:
    {
        returnValue = F("Am alten Schlagbaum");
        break;
    }
    case 34732:
    {
        returnValue = F("Am alten Schloss");
        break;
    }
    case 34733:
    {
        returnValue = F("Am alten Schloß");
        break;
    }
    case 34734:
    {
        returnValue = F("Am alten Schulhaus");
        break;
    }
    case 34735:
    {
        returnValue = F("Am alten Schulhof");
        break;
    }
    case 34736:
    {
        returnValue = F("Am alten Schulplatz");
        break;
    }
    case 34737:
    {
        returnValue = F("Am alten Schulwald");
        break;
    }
    case 34738:
    {
        returnValue = F("Am alten Schuttloch");
        break;
    }
    case 34739:
    {
        returnValue = F("Am alten Schuttplatz");
        break;
    }
    case 34740:
    {
        returnValue = F("Am alten Schwimmbad");
        break;
    }
    case 34741:
    {
        returnValue = F("Am alten Schützenhaus");
        break;
    }
    case 34742:
    {
        returnValue = F("Am alten Schützenplatz");
        break;
    }
    case 34743:
    {
        returnValue = F("Am alten Siel");
        break;
    }
    case 34744:
    {
        returnValue = F("Am alten Speicher");
        break;
    }
    case 34745:
    {
        returnValue = F("Am alten Spital");
        break;
    }
    case 34746:
    {
        returnValue = F("Am alten Sportplatz");
        break;
    }
    case 34747:
    {
        returnValue = F("Am alten Spriehusener Landweg");
        break;
    }
    case 34748:
    {
        returnValue = F("Am alten Spritzenhaus");
        break;
    }
    case 34749:
    {
        returnValue = F("Am alten Stadion");
        break;
    }
    case 34750:
    {
        returnValue = F("Am alten Steg");
        break;
    }
    case 34751:
    {
        returnValue = F("Am alten Stein");
        break;
    }
    case 34752:
    {
        returnValue = F("Am alten Steinbruch");
        break;
    }
    case 34753:
    {
        returnValue = F("Am alten Sudhaus");
        break;
    }
    case 34754:
    {
        returnValue = F("Am alten Sägewerk");
        break;
    }
    case 34755:
    {
        returnValue = F("Am alten Söll");
        break;
    }
    case 34756:
    {
        returnValue = F("Am alten Tagebau");
        break;
    }
    case 34757:
    {
        returnValue = F("Am alten Teich");
        break;
    }
    case 34758:
    {
        returnValue = F("Am alten Tief");
        break;
    }
    case 34759:
    {
        returnValue = F("Am alten Tiergarten");
        break;
    }
    case 34760:
    {
        returnValue = F("Am alten Turm");
        break;
    }
    case 34761:
    {
        returnValue = F("Am alten Turnplatz");
        break;
    }
    case 34762:
    {
        returnValue = F("Am alten Viehmarkt");
        break;
    }
    case 34763:
    {
        returnValue = F("Am alten Viehwege");
        break;
    }
    case 34764:
    {
        returnValue = F("Am alten Vogthof");
        break;
    }
    case 34765:
    {
        returnValue = F("Am alten Wald");
        break;
    }
    case 34766:
    {
        returnValue = F("Am alten Wallgraben");
        break;
    }
    case 34767:
    {
        returnValue = F("Am alten Wasser");
        break;
    }
    case 34768:
    {
        returnValue = F("Am alten Wasserhaus");
        break;
    }
    case 34769:
    {
        returnValue = F("Am alten Wasserwerk");
        break;
    }
    case 34770:
    {
        returnValue = F("Am alten Weber");
        break;
    }
    case 34771:
    {
        returnValue = F("Am alten Weg");
        break;
    }
    case 34772:
    {
        returnValue = F("Am alten Weiher");
        break;
    }
    case 34773:
    {
        returnValue = F("Am alten Weinberg");
        break;
    }
    case 34774:
    {
        returnValue = F("Am alten Weingarten");
        break;
    }
    case 34775:
    {
        returnValue = F("Am alten Weingut");
        break;
    }
    case 34776:
    {
        returnValue = F("Am alten Weinkeller");
        break;
    }
    case 34777:
    {
        returnValue = F("Am alten Winzerkeller");
        break;
    }
    case 34778:
    {
        returnValue = F("Am alten Zimmerplatz");
        break;
    }
    case 34779:
    {
        returnValue = F("Am alten Zollhaus");
        break;
    }
    case 34780:
    {
        returnValue = F("Am alten Zoo");
        break;
    }
    case 34781:
    {
        returnValue = F("Am blauen Berg");
        break;
    }
    case 34782:
    {
        returnValue = F("Am blauen Stein");
        break;
    }
    case 34783:
    {
        returnValue = F("Am blauen Tor");
        break;
    }
    case 34784:
    {
        returnValue = F("Am braunen Berg");
        break;
    }
    case 34785:
    {
        returnValue = F("Am braunen Wasser");
        break;
    }
    case 34786:
    {
        returnValue = F("Am breiten Graben");
        break;
    }
    case 34787:
    {
        returnValue = F("Am breiten Leinpfad");
        break;
    }
    case 34788:
    {
        returnValue = F("Am breiten Rain");
        break;
    }
    case 34789:
    {
        returnValue = F("Am breiten Stück");
        break;
    }
    case 34790:
    {
        returnValue = F("Am der Appelwiese");
        break;
    }
    case 34791:
    {
        returnValue = F("Am dicken Turm");
        break;
    }
    case 34792:
    {
        returnValue = F("Am drügen Pött");
        break;
    }
    case 34793:
    {
        returnValue = F("Am dürren Berg");
        break;
    }
    case 34794:
    {
        returnValue = F("Am evangelischen Friedhof");
        break;
    }
    case 34795:
    {
        returnValue = F("Am freien Feld");
        break;
    }
    case 34796:
    {
        returnValue = F("Am freien Platz");
        break;
    }
    case 34797:
    {
        returnValue = F("Am gebackenen Stein");
        break;
    }
    case 34798:
    {
        returnValue = F("Am gebrannten Stein");
        break;
    }
    case 34799:
    {
        returnValue = F("Am gelben Baum");
        break;
    }
    case 34800:
    {
        returnValue = F("Am grasigen Weg");
        break;
    }
    case 34801:
    {
        returnValue = F("Am grauen Berg");
        break;
    }
    case 34802:
    {
        returnValue = F("Am grauen Gäßchen");
        break;
    }
    case 34803:
    {
        returnValue = F("Am grauen Wäldchen");
        break;
    }
    case 34804:
    {
        returnValue = F("Am großen Baum");
        break;
    }
    case 34805:
    {
        returnValue = F("Am großen Berg");
        break;
    }
    case 34806:
    {
        returnValue = F("Am großen Busch");
        break;
    }
    case 34807:
    {
        returnValue = F("Am großen Damm");
        break;
    }
    case 34808:
    {
        returnValue = F("Am großen Feld");
        break;
    }
    case 34809:
    {
        returnValue = F("Am großen Graben");
        break;
    }
    case 34810:
    {
        returnValue = F("Am großen Graf");
        break;
    }
    case 34811:
    {
        returnValue = F("Am großen Gänsepfuhl");
        break;
    }
    case 34812:
    {
        returnValue = F("Am großen Hamm");
        break;
    }
    case 34813:
    {
        returnValue = F("Am großen Hasselgraben");
        break;
    }
    case 34814:
    {
        returnValue = F("Am großen Horbweg");
        break;
    }
    case 34815:
    {
        returnValue = F("Am großen Kampe");
        break;
    }
    case 34816:
    {
        returnValue = F("Am großen Stein");
        break;
    }
    case 34817:
    {
        returnValue = F("Am großen Stück");
        break;
    }
    case 34818:
    {
        returnValue = F("Am großen Tonloch");
        break;
    }
    case 34819:
    {
        returnValue = F("Am grundlosen Brunnen");
        break;
    }
    case 34820:
    {
        returnValue = F("Am grünen Baum");
        break;
    }
    case 34821:
    {
        returnValue = F("Am grünen Berg");
        break;
    }
    case 34822:
    {
        returnValue = F("Am grünen Feld");
        break;
    }
    case 34823:
    {
        returnValue = F("Am grünen Hang");
        break;
    }
    case 34824:
    {
        returnValue = F("Am grünen Hof");
        break;
    }
    case 34825:
    {
        returnValue = F("Am grünen Steg");
        break;
    }
    case 34826:
    {
        returnValue = F("Am grünen Wall");
        break;
    }
    case 34827:
    {
        returnValue = F("Am grünen Weg");
        break;
    }
    case 34828:
    {
        returnValue = F("Am grünen Wege");
        break;
    }
    case 34829:
    {
        returnValue = F("Am guten Brunnen");
        break;
    }
    case 34830:
    {
        returnValue = F("Am heiligen Baum");
        break;
    }
    case 34831:
    {
        returnValue = F("Am heiligen Floß");
        break;
    }
    case 34832:
    {
        returnValue = F("Am heiligen Spiegel");
        break;
    }
    case 34833:
    {
        returnValue = F("Am heiligen Stöckel");
        break;
    }
    case 34834:
    {
        returnValue = F("Am heißen Stein");
        break;
    }
    case 34835:
    {
        returnValue = F("Am hinteren Feld");
        break;
    }
    case 34836:
    {
        returnValue = F("Am hinteren Rompelberg");
        break;
    }
    case 34837:
    {
        returnValue = F("Am hohen Berg");
        break;
    }
    case 34838:
    {
        returnValue = F("Am hohen Busch");
        break;
    }
    case 34839:
    {
        returnValue = F("Am hohen Felde");
        break;
    }
    case 34840:
    {
        returnValue = F("Am hohen Graben");
        break;
    }
    case 34841:
    {
        returnValue = F("Am hohen Kopf");
        break;
    }
    case 34842:
    {
        returnValue = F("Am hohen Kreuz");
        break;
    }
    case 34843:
    {
        returnValue = F("Am hohen Nußbaum");
        break;
    }
    case 34844:
    {
        returnValue = F("Am hohen Rain");
        break;
    }
    case 34845:
    {
        returnValue = F("Am hohen Rhein");
        break;
    }
    case 34846:
    {
        returnValue = F("Am hohen Rott");
        break;
    }
    case 34847:
    {
        returnValue = F("Am hohen Ruck");
        break;
    }
    case 34848:
    {
        returnValue = F("Am hohen Stein");
        break;
    }
    case 34849:
    {
        returnValue = F("Am hohen Turm");
        break;
    }
    case 34850:
    {
        returnValue = F("Am hohen Weg");
        break;
    }
    case 34851:
    {
        returnValue = F("Am hohlen Wege");
        break;
    }
    case 34852:
    {
        returnValue = F("Am jüdischen Bethaus");
        break;
    }
    case 34853:
    {
        returnValue = F("Am jüdischen Friedhof");
        break;
    }
    case 34854:
    {
        returnValue = F("Am kalten Born");
        break;
    }
    case 34855:
    {
        returnValue = F("Am kalten Bühl");
        break;
    }
    case 34856:
    {
        returnValue = F("Am kalten Frosch");
        break;
    }
    case 34857:
    {
        returnValue = F("Am kirchhofsgarten");
        break;
    }
    case 34858:
    {
        returnValue = F("Am klaren Wasser");
        break;
    }
    case 34859:
    {
        returnValue = F("Am kleinen Baumweg");
        break;
    }
    case 34860:
    {
        returnValue = F("Am kleinen Berg");
        break;
    }
    case 34861:
    {
        returnValue = F("Am kleinen Born");
        break;
    }
    case 34862:
    {
        returnValue = F("Am kleinen Brunnen");
        break;
    }
    case 34863:
    {
        returnValue = F("Am kleinen Brunsberg");
        break;
    }
    case 34864:
    {
        returnValue = F("Am kleinen Buchenberg");
        break;
    }
    case 34865:
    {
        returnValue = F("Am kleinen Bäumchen");
        break;
    }
    case 34866:
    {
        returnValue = F("Am kleinen Damm");
        break;
    }
    case 34867:
    {
        returnValue = F("Am kleinen Feld");
        break;
    }
    case 34868:
    {
        returnValue = F("Am kleinen Feldchen");
        break;
    }
    case 34869:
    {
        returnValue = F("Am kleinen Graf");
        break;
    }
    case 34870:
    {
        returnValue = F("Am kleinen Hermes");
        break;
    }
    case 34871:
    {
        returnValue = F("Am kleinen Hetzel");
        break;
    }
    case 34872:
    {
        returnValue = F("Am kleinen Höchst");
        break;
    }
    case 34873:
    {
        returnValue = F("Am kleinen Hölzchen");
        break;
    }
    case 34874:
    {
        returnValue = F("Am kleinen Kirchhof");
        break;
    }
    case 34875:
    {
        returnValue = F("Am kleinen Kreuzchen");
        break;
    }
    case 34876:
    {
        returnValue = F("Am kleinen Kulbitz");
        break;
    }
    case 34877:
    {
        returnValue = F("Am kleinen Moor");
        break;
    }
    case 34878:
    {
        returnValue = F("Am kleinen Paradies");
        break;
    }
    case 34879:
    {
        returnValue = F("Am kleinen Park");
        break;
    }
    case 34880:
    {
        returnValue = F("Am kleinen Plan");
        break;
    }
    case 34881:
    {
        returnValue = F("Am kleinen Riedweg");
        break;
    }
    case 34882:
    {
        returnValue = F("Am kleinen See");
        break;
    }
    case 34883:
    {
        returnValue = F("Am kleinen Stadtfeld");
        break;
    }
    case 34884:
    {
        returnValue = F("Am kleinen Steeg");
        break;
    }
    case 34885:
    {
        returnValue = F("Am kleinen Stieg");
        break;
    }
    case 34886:
    {
        returnValue = F("Am kleinen Tempel");
        break;
    }
    case 34887:
    {
        returnValue = F("Am kleinen Ternickel");
        break;
    }
    case 34888:
    {
        returnValue = F("Am kleinen Wasser");
        break;
    }
    case 34889:
    {
        returnValue = F("Am kleinen Weg");
        break;
    }
    case 34890:
    {
        returnValue = F("Am kleinen Weidchen");
        break;
    }
    case 34891:
    {
        returnValue = F("Am kleinen Zeckernberg");
        break;
    }
    case 34892:
    {
        returnValue = F("Am kleinen Zieger");
        break;
    }
    case 34893:
    {
        returnValue = F("Am krummen Acker");
        break;
    }
    case 34894:
    {
        returnValue = F("Am krummen Auwer");
        break;
    }
    case 34895:
    {
        returnValue = F("Am krummen Timpen");
        break;
    }
    case 34896:
    {
        returnValue = F("Am krummen Weg");
        break;
    }
    case 34897:
    {
        returnValue = F("Am kurzen Haag");
        break;
    }
    case 34898:
    {
        returnValue = F("Am kühlen Kasten");
        break;
    }
    case 34899:
    {
        returnValue = F("Am langen Acker");
        break;
    }
    case 34900:
    {
        returnValue = F("Am langen Bach");
        break;
    }
    case 34901:
    {
        returnValue = F("Am langen Baum");
        break;
    }
    case 34902:
    {
        returnValue = F("Am langen Damm");
        break;
    }
    case 34903:
    {
        returnValue = F("Am langen Esch");
        break;
    }
    case 34904:
    {
        returnValue = F("Am langen Feld");
        break;
    }
    case 34905:
    {
        returnValue = F("Am langen Graben");
        break;
    }
    case 34906:
    {
        returnValue = F("Am langen Haag");
        break;
    }
    case 34907:
    {
        returnValue = F("Am langen Hag");
        break;
    }
    case 34908:
    {
        returnValue = F("Am langen Jammer");
        break;
    }
    case 34909:
    {
        returnValue = F("Am langen Rain");
        break;
    }
    case 34910:
    {
        returnValue = F("Am langen Rasen");
        break;
    }
    case 34911:
    {
        returnValue = F("Am langen Rech");
        break;
    }
    case 34912:
    {
        returnValue = F("Am langen Rüggen");
        break;
    }
    case 34913:
    {
        returnValue = F("Am langen Sand");
        break;
    }
    case 34914:
    {
        returnValue = F("Am langen Siek");
        break;
    }
    case 34915:
    {
        returnValue = F("Am langen Stein");
        break;
    }
    case 34916:
    {
        returnValue = F("Am langen Stück");
        break;
    }
    case 34917:
    {
        returnValue = F("Am langen Teich");
        break;
    }
    case 34918:
    {
        returnValue = F("Am langen Weg");
        break;
    }
    case 34919:
    {
        returnValue = F("Am langen Wehr");
        break;
    }
    case 34920:
    {
        returnValue = F("Am langen Weiher");
        break;
    }
    case 34921:
    {
        returnValue = F("Am langen Weinberg");
        break;
    }
    case 34922:
    {
        returnValue = F("Am langen Zügel");
        break;
    }
    case 34923:
    {
        returnValue = F("Am lütken Esch");
        break;
    }
    case 34924:
    {
        returnValue = F("Am mageren Berg");
        break;
    }
    case 34925:
    {
        returnValue = F("Am mittleren Eichenberg");
        break;
    }
    case 34926:
    {
        returnValue = F("Am mittleren Schloßberg");
        break;
    }
    case 34927:
    {
        returnValue = F("Am mittleren Weg");
        break;
    }
    case 34928:
    {
        returnValue = F("Am mittleren Weinberg");
        break;
    }
    case 34929:
    {
        returnValue = F("Am müden Born");
        break;
    }
    case 34930:
    {
        returnValue = F("Am neuen Brunnen");
        break;
    }
    case 34931:
    {
        returnValue = F("Am neuen Damm");
        break;
    }
    case 34932:
    {
        returnValue = F("Am neuen Friedhof");
        break;
    }
    case 34933:
    {
        returnValue = F("Am neuen Garten");
        break;
    }
    case 34934:
    {
        returnValue = F("Am neuen Gasthof");
        break;
    }
    case 34935:
    {
        returnValue = F("Am neuen Graben");
        break;
    }
    case 34936:
    {
        returnValue = F("Am neuen Gretenbrunnen");
        break;
    }
    case 34937:
    {
        returnValue = F("Am neuen Haus");
        break;
    }
    case 34938:
    {
        returnValue = F("Am neuen Kampe");
        break;
    }
    case 34939:
    {
        returnValue = F("Am neuen Kreuz");
        break;
    }
    case 34940:
    {
        returnValue = F("Am neuen Markt");
        break;
    }
    case 34941:
    {
        returnValue = F("Am neuen Ring");
        break;
    }
    case 34942:
    {
        returnValue = F("Am neuen Schacht");
        break;
    }
    case 34943:
    {
        returnValue = F("Am neuen Sportplatz");
        break;
    }
    case 34944:
    {
        returnValue = F("Am neuen Törlein");
        break;
    }
    case 34945:
    {
        returnValue = F("Am neuen Weg");
        break;
    }
    case 34946:
    {
        returnValue = F("Am neuen Wehr");
        break;
    }
    case 34947:
    {
        returnValue = F("Am oberen Anger");
        break;
    }
    case 34948:
    {
        returnValue = F("Am oberen Bach");
        break;
    }
    case 34949:
    {
        returnValue = F("Am oberen Erbrain");
        break;
    }
    case 34950:
    {
        returnValue = F("Am oberen Friedhof");
        break;
    }
    case 34951:
    {
        returnValue = F("Am oberen Grottensee");
        break;
    }
    case 34952:
    {
        returnValue = F("Am oberen Hohlweg");
        break;
    }
    case 34953:
    {
        returnValue = F("Am oberen Schloßberg");
        break;
    }
    case 34954:
    {
        returnValue = F("Am oberen See");
        break;
    }
    case 34955:
    {
        returnValue = F("Am oberen Teich");
        break;
    }
    case 34956:
    {
        returnValue = F("Am oberen Tor");
        break;
    }
    case 34957:
    {
        returnValue = F("Am oberen Wannenberg");
        break;
    }
    case 34958:
    {
        returnValue = F("Am oberen Wasen");
        break;
    }
    case 34959:
    {
        returnValue = F("Am oberen Weinberg");
        break;
    }
    case 34960:
    {
        returnValue = F("Am roten Berg");
        break;
    }
    case 34961:
    {
        returnValue = F("Am roten Heiligen");
        break;
    }
    case 34962:
    {
        returnValue = F("Am roten Hügel");
        break;
    }
    case 34963:
    {
        returnValue = F("Am roten Rain");
        break;
    }
    case 34964:
    {
        returnValue = F("Am roten Stein");
        break;
    }
    case 34965:
    {
        returnValue = F("Am roten Stiege");
        break;
    }
    case 34966:
    {
        returnValue = F("Am runden Hucht");
        break;
    }
    case 34967:
    {
        returnValue = F("Am runden Rech");
        break;
    }
    case 34968:
    {
        returnValue = F("Am schiefen Turm");
        break;
    }
    case 34969:
    {
        returnValue = F("Am schwarzen Berg");
        break;
    }
    case 34970:
    {
        returnValue = F("Am schwarzen Berge");
        break;
    }
    case 34971:
    {
        returnValue = F("Am schwarzen Hagen");
        break;
    }
    case 34972:
    {
        returnValue = F("Am schwarzen Kreuz");
        break;
    }
    case 34973:
    {
        returnValue = F("Am schwarzen Stock");
        break;
    }
    case 34974:
    {
        returnValue = F("Am schönen Flecken");
        break;
    }
    case 34975:
    {
        returnValue = F("Am schönen Rain");
        break;
    }
    case 34976:
    {
        returnValue = F("Am siebten Seil");
        break;
    }
    case 34977:
    {
        returnValue = F("Am spitzen Berg");
        break;
    }
    case 34978:
    {
        returnValue = F("Am spitzigen Berg");
        break;
    }
    case 34979:
    {
        returnValue = F("Am stillen Winkel");
        break;
    }
    case 34980:
    {
        returnValue = F("Am tiefen Brunnen");
        break;
    }
    case 34981:
    {
        returnValue = F("Am tiefen Graben");
        break;
    }
    case 34982:
    {
        returnValue = F("Am tiefen Weg");
        break;
    }
    case 34983:
    {
        returnValue = F("Am unteren Dorfgraben");
        break;
    }
    case 34984:
    {
        returnValue = F("Am unteren Garten");
        break;
    }
    case 34985:
    {
        returnValue = F("Am unteren Grottensee");
        break;
    }
    case 34986:
    {
        returnValue = F("Am unteren Meere");
        break;
    }
    case 34987:
    {
        returnValue = F("Am unteren Mosebach");
        break;
    }
    case 34988:
    {
        returnValue = F("Am unteren Schloßberg");
        break;
    }
    case 34989:
    {
        returnValue = F("Am unteren See");
        break;
    }
    case 34990:
    {
        returnValue = F("Am unteren Sonnenrain");
        break;
    }
    case 34991:
    {
        returnValue = F("Am unteren Spielberg");
        break;
    }
    case 34992:
    {
        returnValue = F("Am unteren Tor");
        break;
    }
    case 34993:
    {
        returnValue = F("Am unteren Wannenberg");
        break;
    }
    case 34994:
    {
        returnValue = F("Am unteren Weinberg");
        break;
    }
    case 34995:
    {
        returnValue = F("Am untersten Hahn");
        break;
    }
    case 34996:
    {
        returnValue = F("Am verschlossenen Born");
        break;
    }
    case 34997:
    {
        returnValue = F("Am versunkenen Schloss");
        break;
    }
    case 34998:
    {
        returnValue = F("Am vorderen Mühlberg");
        break;
    }
    case 34999:
    {
        returnValue = F("Am vorderen Steinchen");
        break;
    }
    case 35000:
    {
        returnValue = F("Am weichen Hau");
        break;
    }
    case 35001:
    {
        returnValue = F("Am weiten Born");
        break;
    }
    case 35002:
    {
        returnValue = F("Am weißen Berge");
        break;
    }
    case 35003:
    {
        returnValue = F("Am weißen Bild");
        break;
    }
    case 35004:
    {
        returnValue = F("Am weißen Kreuz");
        break;
    }
    case 35005:
    {
        returnValue = F("Am weißen Moor");
        break;
    }
    case 35006:
    {
        returnValue = F("Am weißen Pfad");
        break;
    }
    case 35007:
    {
        returnValue = F("Am weißen Stein");
        break;
    }
    case 35008:
    {
        returnValue = F("Am weißen Weg");
        break;
    }
    case 35009:
    {
        returnValue = F("Am westlichen Heeden");
        break;
    }
    case 35010:
    {
        returnValue = F("Am Äbtissinberg");
        break;
    }
    case 35011:
    {
        returnValue = F("Am Ächselesberg");
        break;
    }
    case 35012:
    {
        returnValue = F("Am Ächterott");
        break;
    }
    case 35013:
    {
        returnValue = F("Am Äckerchen");
        break;
    }
    case 35014:
    {
        returnValue = F("Am Äckerle");
        break;
    }
    case 35015:
    {
        returnValue = F("Am Äckerlein");
        break;
    }
    case 35016:
    {
        returnValue = F("Am Ählerbrunnen");
        break;
    }
    case 35017:
    {
        returnValue = F("Am Ährenfeld");
        break;
    }
    case 35018:
    {
        returnValue = F("Am Ährenkranz");
        break;
    }
    case 35019:
    {
        returnValue = F("Am Änger");
        break;
    }
    case 35020:
    {
        returnValue = F("Am Ängerle");
        break;
    }
    case 35021:
    {
        returnValue = F("Am Ängerlein");
        break;
    }
    case 35022:
    {
        returnValue = F("Am Ärmesgrund");
        break;
    }
    case 35023:
    {
        returnValue = F("Am Ärztehaus");
        break;
    }
    case 35024:
    {
        returnValue = F("Am Ärzteheim");
        break;
    }
    case 35025:
    {
        returnValue = F("Am Äspenlaich");
        break;
    }
    case 35026:
    {
        returnValue = F("Am Äußeren Stadtbach");
        break;
    }
    case 35027:
    {
        returnValue = F("Am Äußernacker");
        break;
    }
    case 35028:
    {
        returnValue = F("Am Öberhai");
        break;
    }
    case 35029:
    {
        returnValue = F("Am Öchslemühlbach");
        break;
    }
    case 35030:
    {
        returnValue = F("Am Ödberg");
        break;
    }
    case 35031:
    {
        returnValue = F("Am Öden Turm");
        break;
    }
    case 35032:
    {
        returnValue = F("Am Ödenbühel");
        break;
    }
    case 35033:
    {
        returnValue = F("Am Ödertal");
        break;
    }
    case 35034:
    {
        returnValue = F("Am Ödgarten");
        break;
    }
    case 35035:
    {
        returnValue = F("Am Ödholz");
        break;
    }
    case 35036:
    {
        returnValue = F("Am Ödig");
        break;
    }
    case 35037:
    {
        returnValue = F("Am Öferl");
        break;
    }
    case 35038:
    {
        returnValue = F("Am Öhrberg");
        break;
    }
    case 35039:
    {
        returnValue = F("Am Ökoteich");
        break;
    }
    case 35040:
    {
        returnValue = F("Am Ölbach");
        break;
    }
    case 35041:
    {
        returnValue = F("Am Ölbachgraben");
        break;
    }
    case 35042:
    {
        returnValue = F("Am Ölberg");
        break;
    }
    case 35043:
    {
        returnValue = F("Am Ölfeld");
        break;
    }
    case 35044:
    {
        returnValue = F("Am Ölgarten");
        break;
    }
    case 35045:
    {
        returnValue = F("Am Ölgedamm");
        break;
    }
    case 35046:
    {
        returnValue = F("Am Ölgraben");
        break;
    }
    case 35047:
    {
        returnValue = F("Am Ölgärtchen");
        break;
    }
    case 35048:
    {
        returnValue = F("Am Ölkorb");
        break;
    }
    case 35049:
    {
        returnValue = F("Am Ölmühlenbach");
        break;
    }
    case 35050:
    {
        returnValue = F("Am Ölsbach");
        break;
    }
    case 35051:
    {
        returnValue = F("Am Ölschlag");
        break;
    }
    case 35052:
    {
        returnValue = F("Am Ölwerk");
        break;
    }
    case 35053:
    {
        returnValue = F("Am Örtelberg");
        break;
    }
    case 35054:
    {
        returnValue = F("Am Ösch");
        break;
    }
    case 35055:
    {
        returnValue = F("Am Öschbach");
        break;
    }
    case 35056:
    {
        returnValue = F("Am Öschle");
        break;
    }
    case 35057:
    {
        returnValue = F("Am Öschweg");
        break;
    }
    case 35058:
    {
        returnValue = F("Am Ösel");
        break;
    }
    case 35059:
    {
        returnValue = F("Am Österberg");
        break;
    }
    case 35060:
    {
        returnValue = F("Am Östernberg");
        break;
    }
    case 35061:
    {
        returnValue = F("Am Östlichen Bollwerk");
        break;
    }
    case 35062:
    {
        returnValue = F("Am Ötzelsteich");
        break;
    }
    case 35063:
    {
        returnValue = F("Am Över");
        break;
    }
    case 35064:
    {
        returnValue = F("Am Öwer");
        break;
    }
    case 35065:
    {
        returnValue = F("Am Öüwer");
        break;
    }
    case 35066:
    {
        returnValue = F("Am Überbach");
        break;
    }
    case 35067:
    {
        returnValue = F("Am Überfeld");
        break;
    }
    case 35068:
    {
        returnValue = F("Am Überhof");
        break;
    }
    case 35069:
    {
        returnValue = F("Am Überlandwerk");
        break;
    }
    case 35070:
    {
        returnValue = F("Am Überloor");
        break;
    }
    case 35071:
    {
        returnValue = F("Am Überweg");
        break;
    }
    case 35072:
    {
        returnValue = F("Am Ückern");
        break;
    }
    case 35073:
    {
        returnValue = F("Am Üdersee");
        break;
    }
    case 35074:
    {
        returnValue = F("Am Ükern");
        break;
    }
    case 35075:
    {
        returnValue = F("Am Ützenbarg");
        break;
    }
    case 35076:
    {
        returnValue = F("Am östlichen Stadtgraben");
        break;
    }
    case 35077:
    {
        returnValue = F("Am-Angele-Hof");
        break;
    }
    case 35078:
    {
        returnValue = F("Am-August-Bebel-Hain");
        break;
    }
    case 35079:
    {
        returnValue = F("Am-Friedrich-Wilhelm-Kanal");
        break;
    }
    case 35080:
    {
        returnValue = F("Am-Josefs-Berg");
        break;
    }
    case 35081:
    {
        returnValue = F("Am-Otterloher-Feld");
        break;
    }
    case 35082:
    {
        returnValue = F("Am-Prunner-Steig");
        break;
    }
    case 35083:
    {
        returnValue = F("AmEßleben");
        break;
    }
    case 35084:
    {
        returnValue = F("Amadeus-Weg");
        break;
    }
    case 35085:
    {
        returnValue = F("Amadeusweg");
        break;
    }
    case 35086:
    {
        returnValue = F("Amag-Hilpert-Str.");
        break;
    }
    case 35087:
    {
        returnValue = F("Amaker Markt");
        break;
    }
    case 35088:
    {
        returnValue = F("Amalia Scharrer Weg");
        break;
    }
    case 35089:
    {
        returnValue = F("Amaliastr.");
        break;
    }
    case 35090:
    {
        returnValue = F("Amalie-Baader-Str.");
        break;
    }
    case 35091:
    {
        returnValue = F("Amalie-Dietrich-Str.");
        break;
    }
    case 35092:
    {
        returnValue = F("Amalie-Dietrich-Weg");
        break;
    }
    case 35093:
    {
        returnValue = F("Amalie-Helfrich-Pfad");
        break;
    }
    case 35094:
    {
        returnValue = F("Amalie-Hofer-Str.");
        break;
    }
    case 35095:
    {
        returnValue = F("Amalie-Hohenester-Weg");
        break;
    }
    case 35096:
    {
        returnValue = F("Amalie-Kablé-Weg");
        break;
    }
    case 35097:
    {
        returnValue = F("Amalie-Marby-Str.");
        break;
    }
    case 35098:
    {
        returnValue = F("Amalie-Müller-Str.");
        break;
    }
    case 35099:
    {
        returnValue = F("Amalie-Noether-Str.");
        break;
    }
    case 35100:
    {
        returnValue = F("Amalie-Nordheim Park");
        break;
    }
    case 35101:
    {
        returnValue = F("Amalie-Rehm-Weg");
        break;
    }
    case 35102:
    {
        returnValue = F("Amalie-Röhrs-Weg");
        break;
    }
    case 35103:
    {
        returnValue = F("Amalie-Schoppe-Str.");
        break;
    }
    case 35104:
    {
        returnValue = F("Amalie-Schoppe-Weg");
        break;
    }
    case 35105:
    {
        returnValue = F("Amalie-Sieveking-Str.");
        break;
    }
    case 35106:
    {
        returnValue = F("Amalie-Sieveking-Weg");
        break;
    }
    case 35107:
    {
        returnValue = F("Amalie-Struve-Str.");
        break;
    }
    case 35108:
    {
        returnValue = F("Amalie-Tonoli-Str.");
        break;
    }
    case 35109:
    {
        returnValue = F("Amalie-Wündisch-Str.");
        break;
    }
    case 35110:
    {
        returnValue = F("Amalien Geräumt");
        break;
    }
    case 35111:
    {
        returnValue = F("Amalienbadstr.");
        break;
    }
    case 35112:
    {
        returnValue = F("Amalienbergstr.");
        break;
    }
    case 35113:
    {
        returnValue = F("Amaliendamm");
        break;
    }
    case 35114:
    {
        returnValue = F("Amalienfelder Weg");
        break;
    }
    case 35115:
    {
        returnValue = F("Amalienhof");
        break;
    }
    case 35116:
    {
        returnValue = F("Amalienhofer Weg");
        break;
    }
    case 35117:
    {
        returnValue = F("Amalienhütte");
        break;
    }
    case 35118:
    {
        returnValue = F("Amalienpforte");
        break;
    }
    case 35119:
    {
        returnValue = F("Amalienruh");
        break;
    }
    case 35120:
    {
        returnValue = F("Amalienruher Str.");
        break;
    }
    case 35121:
    {
        returnValue = F("Amalienschneise");
        break;
    }
    case 35122:
    {
        returnValue = F("Amalienstr.");
        break;
    }
    case 35123:
    {
        returnValue = F("Amalienthaler Str.");
        break;
    }
    case 35124:
    {
        returnValue = F("Amalienufer");
        break;
    }
    case 35125:
    {
        returnValue = F("Amalienweg");
        break;
    }
    case 35126:
    {
        returnValue = F("Amalungstr.");
        break;
    }
    case 35127:
    {
        returnValue = F("Amanastr.");
        break;
    }
    case 35128:
    {
        returnValue = F("Amand-Bielmeier-Str.");
        break;
    }
    case 35129:
    {
        returnValue = F("Amand-Goegg-Allee");
        break;
    }
    case 35130:
    {
        returnValue = F("Amand-Goegg-Str.");
        break;
    }
    case 35131:
    {
        returnValue = F("Amand-Ney-Str.");
        break;
    }
    case 35132:
    {
        returnValue = F("Amand-von-Buseck-Str.");
        break;
    }
    case 35133:
    {
        returnValue = F("Amanda-Jürgens-Str.");
        break;
    }
    case 35134:
    {
        returnValue = F("Amanda-Weber-Ring");
        break;
    }
    case 35135:
    {
        returnValue = F("Amandas Garten");
        break;
    }
    case 35136:
    {
        returnValue = F("Amandastr.");
        break;
    }
    case 35137:
    {
        returnValue = F("Amandus-Schütt-Str.");
        break;
    }
    case 35138:
    {
        returnValue = F("Amandus-Voigt-Str.");
        break;
    }
    case 35139:
    {
        returnValue = F("Amandusdorfer Weg");
        break;
    }
    case 35140:
    {
        returnValue = F("Amandusgasse");
        break;
    }
    case 35141:
    {
        returnValue = F("Amandusstr.");
        break;
    }
    case 35142:
    {
        returnValue = F("Amandusweg");
        break;
    }
    case 35143:
    {
        returnValue = F("Amann-Locher-Weg");
        break;
    }
    case 35144:
    {
        returnValue = F("Amannhof");
        break;
    }
    case 35145:
    {
        returnValue = F("Amannsberg");
        break;
    }
    case 35146:
    {
        returnValue = F("Amannstr.");
        break;
    }
    case 35147:
    {
        returnValue = F("Amanstr.");
        break;
    }
    case 35148:
    {
        returnValue = F("Amaryllisweg");
        break;
    }
    case 35149:
    {
        returnValue = F("Amarylliswegbrücke");
        break;
    }
    case 35150:
    {
        returnValue = F("Amata-Grüner-Str.");
        break;
    }
    case 35151:
    {
        returnValue = F("Amazon-Str.");
        break;
    }
    case 35152:
    {
        returnValue = F("Amazonasstr.");
        break;
    }
    case 35153:
    {
        returnValue = F("Amazonen");
        break;
    }
    case 35154:
    {
        returnValue = F("Amazonstr.");
        break;
    }
    case 35155:
    {
        returnValue = F("Ambacher Str.");
        break;
    }
    case 35156:
    {
        returnValue = F("Ambacher Weg");
        break;
    }
    case 35157:
    {
        returnValue = F("Ambachstr.");
        break;
    }
    case 35158:
    {
        returnValue = F("Ambachweg");
        break;
    }
    case 35159:
    {
        returnValue = F("Ambazac-Str.");
        break;
    }
    case 35160:
    {
        returnValue = F("Ambelenbachweg");
        break;
    }
    case 35161:
    {
        returnValue = F("Ambelwiesenstr.");
        break;
    }
    case 35162:
    {
        returnValue = F("Amberbaumstr.");
        break;
    }
    case 35163:
    {
        returnValue = F("Amberbaumweg");
        break;
    }
    case 35164:
    {
        returnValue = F("Amberg");
        break;
    }
    case 35165:
    {
        returnValue = F("Ambergauring");
        break;
    }
    case 35166:
    {
        returnValue = F("Amberger Str.");
        break;
    }
    case 35167:
    {
        returnValue = F("Amberger Weg");
        break;
    }
    case 35168:
    {
        returnValue = F("Ambergergasse");
        break;
    }
    case 35169:
    {
        returnValue = F("Ambergerstr.");
        break;
    }
    case 35170:
    {
        returnValue = F("Ambergerweg");
        break;
    }
    case 35171:
    {
        returnValue = F("Ambergstr.");
        break;
    }
    case 35172:
    {
        returnValue = F("Amberieustr.");
        break;
    }
    case 35173:
    {
        returnValue = F("Ambert-Park");
        break;
    }
    case 35174:
    {
        returnValue = F("Amberweg");
        break;
    }
    case 35175:
    {
        returnValue = F("Ambetstr.");
        break;
    }
    case 35176:
    {
        returnValue = F("Ambiorixstr.");
        break;
    }
    case 35177:
    {
        returnValue = F("Ambornsweg");
        break;
    }
    case 35178:
    {
        returnValue = F("Ambossgasse");
        break;
    }
    case 35179:
    {
        returnValue = F("Ambossweg");
        break;
    }
    case 35180:
    {
        returnValue = F("Ambosteler Weg");
        break;
    }
    case 35181:
    {
        returnValue = F("Amboßring");
        break;
    }
    case 35182:
    {
        returnValue = F("Amboßstr.");
        break;
    }
    case 35183:
    {
        returnValue = F("Amboßweg");
        break;
    }
    case 35184:
    {
        returnValue = F("Ambringer Grundweg");
        break;
    }
    case 35185:
    {
        returnValue = F("Ambringer Ring");
        break;
    }
    case 35186:
    {
        returnValue = F("Ambringer Weg");
        break;
    }
    case 35187:
    {
        returnValue = F("Ambronengasse");
        break;
    }
    case 35188:
    {
        returnValue = F("Ambros-Blösch-Str.");
        break;
    }
    case 35189:
    {
        returnValue = F("Ambros-Nehren-Str.");
        break;
    }
    case 35190:
    {
        returnValue = F("Ambrosius-Blarer-Platz");
        break;
    }
    case 35191:
    {
        returnValue = F("Ambrosius-Blarer-Str.");
        break;
    }
    case 35192:
    {
        returnValue = F("Ambrosius-Brand-Str.");
        break;
    }
    case 35193:
    {
        returnValue = F("Ambrosius-Heim-Str.");
        break;
    }
    case 35194:
    {
        returnValue = F("Ambrosius-Marthaus-Str.");
        break;
    }
    case 35195:
    {
        returnValue = F("Ambrosius-Mößmer-Weg");
        break;
    }
    case 35196:
    {
        returnValue = F("Ambrosiusgasse");
        break;
    }
    case 35197:
    {
        returnValue = F("Ambrosiusplatz");
        break;
    }
    case 35198:
    {
        returnValue = F("Ambrosiusring");
        break;
    }
    case 35199:
    {
        returnValue = F("Ambrosiusstr.");
        break;
    }
    case 35200:
    {
        returnValue = F("Ambrosiusweg");
        break;
    }
    case 35201:
    {
        returnValue = F("Ambrosiweg");
        break;
    }
    case 35202:
    {
        returnValue = F("Ambrosstr.");
        break;
    }
    case 35203:
    {
        returnValue = F("Ambrosweg");
        break;
    }
    case 35204:
    {
        returnValue = F("Ambulatorenweg");
        break;
    }
    case 35205:
    {
        returnValue = F("Amdorfer Str.");
        break;
    }
    case 35206:
    {
        returnValue = F("Amdorfstr.");
        break;
    }
    case 35207:
    {
        returnValue = F("Amedorfer Dorfstr.");
        break;
    }
    case 35208:
    {
        returnValue = F("Ameisbergstr.");
        break;
    }
    case 35209:
    {
        returnValue = F("Ameisen Weg");
        break;
    }
    case 35210:
    {
        returnValue = F("Ameisenberg");
        break;
    }
    case 35211:
    {
        returnValue = F("Ameisenbergweg");
        break;
    }
    case 35212:
    {
        returnValue = F("Ameisenbuckelweg");
        break;
    }
    case 35213:
    {
        returnValue = F("Ameisenbusch");
        break;
    }
    case 35214:
    {
        returnValue = F("Ameisenbärweg");
        break;
    }
    case 35215:
    {
        returnValue = F("Ameisenbühl");
        break;
    }
    case 35216:
    {
        returnValue = F("Ameisenbühlstr.");
        break;
    }
    case 35217:
    {
        returnValue = F("Ameisenbühlweg");
        break;
    }
    case 35218:
    {
        returnValue = F("Ameisengasse");
        break;
    }
    case 35219:
    {
        returnValue = F("Ameisenhalde");
        break;
    }
    case 35220:
    {
        returnValue = F("Ameisenhardt");
        break;
    }
    case 35221:
    {
        returnValue = F("Ameisenhauweg");
        break;
    }
    case 35222:
    {
        returnValue = F("Ameisenheckenweg");
        break;
    }
    case 35223:
    {
        returnValue = F("Ameisenkopfweg");
        break;
    }
    case 35224:
    {
        returnValue = F("Ameisenlachschneise");
        break;
    }
    case 35225:
    {
        returnValue = F("Ameisenlehrpfad");
        break;
    }
    case 35226:
    {
        returnValue = F("Ameisenlochweg");
        break;
    }
    case 35227:
    {
        returnValue = F("Ameisenlohweg");
        break;
    }
    case 35228:
    {
        returnValue = F("Ameisenpfad");
        break;
    }
    case 35229:
    {
        returnValue = F("Ameisenschlag");
        break;
    }
    case 35230:
    {
        returnValue = F("Ameisenstieg");
        break;
    }
    case 35231:
    {
        returnValue = F("Ameisenstr.");
        break;
    }
    case 35232:
    {
        returnValue = F("Ameisental");
        break;
    }
    case 35233:
    {
        returnValue = F("Ameisenwald");
        break;
    }
    case 35234:
    {
        returnValue = F("Ameisenwaldweg");
        break;
    }
    case 35235:
    {
        returnValue = F("Ameisenweg");
        break;
    }
    case 35236:
    {
        returnValue = F("Ameiser");
        break;
    }
    case 35237:
    {
        returnValue = F("Ameispfad");
        break;
    }
    case 35238:
    {
        returnValue = F("Ameke");
        break;
    }
    case 35239:
    {
        returnValue = F("Ameke-Berg");
        break;
    }
    case 35240:
    {
        returnValue = F("Ameker Geist");
        break;
    }
    case 35241:
    {
        returnValue = F("Amelandstr.");
        break;
    }
    case 35242:
    {
        returnValue = F("Amelandweg");
        break;
    }
    case 35243:
    {
        returnValue = F("Amelborgster Weg");
        break;
    }
    case 35244:
    {
        returnValue = F("Ameldungstr.");
        break;
    }
    case 35245:
    {
        returnValue = F("Amelgatzer Str.");
        break;
    }
    case 35246:
    {
        returnValue = F("Amelgering");
        break;
    }
    case 35247:
    {
        returnValue = F("Amelhauser Str.");
        break;
    }
    case 35248:
    {
        returnValue = F("Ameliastr.");
        break;
    }
    case 35249:
    {
        returnValue = F("Ameliengasse");
        break;
    }
    case 35250:
    {
        returnValue = F("Amelinghausener Str.");
        break;
    }
    case 35251:
    {
        returnValue = F("Amelinghäuser Str.");
        break;
    }
    case 35252:
    {
        returnValue = F("Amelither Str.");
        break;
    }
    case 35253:
    {
        returnValue = F("Amellenbuckweg");
        break;
    }
    case 35254:
    {
        returnValue = F("Amelner Str.");
        break;
    }
    case 35255:
    {
        returnValue = F("Amelner Weg");
        break;
    }
    case 35256:
    {
        returnValue = F("Amelogenstr.");
        break;
    }
    case 35257:
    {
        returnValue = F("Ameloser Str.");
        break;
    }
    case 35258:
    {
        returnValue = F("Amelsbürener Str.");
        break;
    }
    case 35259:
    {
        returnValue = F("Amelscheider Weg");
        break;
    }
    case 35260:
    {
        returnValue = F("Amelser Str.");
        break;
    }
    case 35261:
    {
        returnValue = F("Amelungenstr.");
        break;
    }
    case 35262:
    {
        returnValue = F("Amelungenweg");
        break;
    }
    case 35263:
    {
        returnValue = F("Amelungpark");
        break;
    }
    case 35264:
    {
        returnValue = F("Amelungsborn");
        break;
    }
    case 35265:
    {
        returnValue = F("Amelungsborn-Str.");
        break;
    }
    case 35266:
    {
        returnValue = F("Amelungsborner Weg");
        break;
    }
    case 35267:
    {
        returnValue = F("Amelungstr.");
        break;
    }
    case 35268:
    {
        returnValue = F("Amelungsweg");
        break;
    }
    case 35269:
    {
        returnValue = F("Amelweg");
        break;
    }
    case 35270:
    {
        returnValue = F("Amely-Goebel-Str.");
        break;
    }
    case 35271:
    {
        returnValue = F("Amendestr.");
        break;
    }
    case 35272:
    {
        returnValue = F("Amendinger Str.");
        break;
    }
    case 35273:
    {
        returnValue = F("Amendinger Weg");
        break;
    }
    case 35274:
    {
        returnValue = F("Ameranger Str.");
        break;
    }
    case 35275:
    {
        returnValue = F("Amerangstr.");
        break;
    }
    case 35276:
    {
        returnValue = F("Amerbachweg");
        break;
    }
    case 35277:
    {
        returnValue = F("Amerbuscher Str.");
        break;
    }
    case 35278:
    {
        returnValue = F("Amerdinger Str.");
        break;
    }
    case 35279:
    {
        returnValue = F("Amerigo-Vespucci-Str.");
        break;
    }
    case 35280:
    {
        returnValue = F("Amerika-Platz");
        break;
    }
    case 35281:
    {
        returnValue = F("Amerikaner Allee");
        break;
    }
    case 35282:
    {
        returnValue = F("Amerikanerweg");
        break;
    }
    case 35283:
    {
        returnValue = F("Amerikastr.");
        break;
    }
    case 35284:
    {
        returnValue = F("Amerikaweg");
        break;
    }
    case 35285:
    {
        returnValue = F("Amerner Benden");
        break;
    }
    case 35286:
    {
        returnValue = F("Amerner Str.");
        break;
    }
    case 35287:
    {
        returnValue = F("Amerner Weg");
        break;
    }
    case 35288:
    {
        returnValue = F("Amersberg");
        break;
    }
    case 35289:
    {
        returnValue = F("Amershamplatz");
        break;
    }
    case 35290:
    {
        returnValue = F("Amersloher Weg");
        break;
    }
    case 35291:
    {
        returnValue = F("Amertsfeld");
        break;
    }
    case 35292:
    {
        returnValue = F("Amerunger Str.");
        break;
    }
    case 35293:
    {
        returnValue = F("Amesberg");
        break;
    }
    case 35294:
    {
        returnValue = F("Amesdorfer Str.");
        break;
    }
    case 35295:
    {
        returnValue = F("Amesmeierweg");
        break;
    }
    case 35296:
    {
        returnValue = F("Amethyststr.");
        break;
    }
    case 35297:
    {
        returnValue = F("Ametsbichl");
        break;
    }
    case 35298:
    {
        returnValue = F("Ametshof");
        break;
    }
    case 35299:
    {
        returnValue = F("Ametswiesen");
        break;
    }
    case 35300:
    {
        returnValue = F("Amfrevilleplatz");
        break;
    }
    case 35301:
    {
        returnValue = F("Amhofstr.");
        break;
    }
    case 35302:
    {
        returnValue = F("Ami-Schneise");
        break;
    }
    case 35303:
    {
        returnValue = F("Amickeweg");
        break;
    }
    case 35304:
    {
        returnValue = F("Amiconistr.");
        break;
    }
    case 35305:
    {
        returnValue = F("Amiesental");
        break;
    }
    case 35306:
    {
        returnValue = F("Amilyplatz");
        break;
    }
    case 35307:
    {
        returnValue = F("Amirastr.");
        break;
    }
    case 35308:
    {
        returnValue = F("Amisia");
        break;
    }
    case 35309:
    {
        returnValue = F("Amiweg");
        break;
    }
    case 35310:
    {
        returnValue = F("Amke-Willen-Weg");
        break;
    }
    case 35311:
    {
        returnValue = F("Amke-van-Lengen-Str.");
        break;
    }
    case 35312:
    {
        returnValue = F("Amkenhausener Str.");
        break;
    }
    case 35313:
    {
        returnValue = F("Amkenheide");
        break;
    }
    case 35314:
    {
        returnValue = F("Amlichstr.");
        break;
    }
    case 35315:
    {
        returnValue = F("Amlingstadter Str.");
        break;
    }
    case 35316:
    {
        returnValue = F("Amlingweg");
        break;
    }
    case 35317:
    {
        returnValue = F("Amlishagener Str.");
        break;
    }
    case 35318:
    {
        returnValue = F("Ammann-Kreuzer-Weg");
        break;
    }
    case 35319:
    {
        returnValue = F("Ammannsallerweg");
        break;
    }
    case 35320:
    {
        returnValue = F("Ammannstr.");
        break;
    }
    case 35321:
    {
        returnValue = F("Ammannweg");
        break;
    }
    case 35322:
    {
        returnValue = F("Ammelbrucher Hauptstr.");
        break;
    }
    case 35323:
    {
        returnValue = F("Ammelbrucher Str.");
        break;
    }
    case 35324:
    {
        returnValue = F("Ammeldinger Str.");
        break;
    }
    case 35325:
    {
        returnValue = F("Ammeldingerstr.");
        break;
    }
    case 35326:
    {
        returnValue = F("Ammelgoßwitz");
        break;
    }
    case 35327:
    {
        returnValue = F("Ammelhofen");
        break;
    }
    case 35328:
    {
        returnValue = F("Ammelhornweg");
        break;
    }
    case 35329:
    {
        returnValue = F("Ammeln");
        break;
    }
    case 35330:
    {
        returnValue = F("Ammelner Str.");
        break;
    }
    case 35331:
    {
        returnValue = F("Ammelner Weg");
        break;
    }
    case 35332:
    {
        returnValue = F("Ammeloe");
        break;
    }
    case 35333:
    {
        returnValue = F("Ammelsdorf");
        break;
    }
    case 35334:
    {
        returnValue = F("Ammelshainer Str.");
        break;
    }
    case 35335:
    {
        returnValue = F("Ammelshainer Weg");
        break;
    }
    case 35336:
    {
        returnValue = F("Ammelsmatt");
        break;
    }
    case 35337:
    {
        returnValue = F("Ammelstädt");
        break;
    }
    case 35338:
    {
        returnValue = F("Ammelwiesenweg");
        break;
    }
    case 35339:
    {
        returnValue = F("Ammeläcker");
        break;
    }
    case 35340:
    {
        returnValue = F("Ammelücken");
        break;
    }
    case 35341:
    {
        returnValue = F("Ammendorfer Str.");
        break;
    }
    case 35342:
    {
        returnValue = F("Ammenhausen");
        break;
    }
    case 35343:
    {
        returnValue = F("Ammenhausener Str.");
        break;
    }
    case 35344:
    {
        returnValue = F("Ammenhäuser Str.");
        break;
    }
    case 35345:
    {
        returnValue = F("Ammenpfad");
        break;
    }
    case 35346:
    {
        returnValue = F("Ammensleber Weg");
        break;
    }
    case 35347:
    {
        returnValue = F("Ammerbachstr.");
        break;
    }
    case 35348:
    {
        returnValue = F("Ammerbauerweg");
        break;
    }
    case 35349:
    {
        returnValue = F("Ammerberg");
        break;
    }
    case 35350:
    {
        returnValue = F("Ammerbergweg");
        break;
    }
    case 35351:
    {
        returnValue = F("Ammerbreite");
        break;
    }
    case 35352:
    {
        returnValue = F("Ammerbuchstr.");
        break;
    }
    case 35353:
    {
        returnValue = F("Ammerbuck");
        break;
    }
    case 35354:
    {
        returnValue = F("Ammerer Str.");
        break;
    }
    case 35355:
    {
        returnValue = F("Ammerfeld");
        break;
    }
    case 35356:
    {
        returnValue = F("Ammergarten");
        break;
    }
    case 35357:
    {
        returnValue = F("Ammergartenweg");
        break;
    }
    case 35358:
    {
        returnValue = F("Ammergasse");
        break;
    }
    case 35359:
    {
        returnValue = F("Ammergauer Str.");
        break;
    }
    case 35360:
    {
        returnValue = F("Ammergauerstr.");
        break;
    }
    case 35361:
    {
        returnValue = F("Ammergaßl");
        break;
    }
    case 35362:
    {
        returnValue = F("Ammerhof");
        break;
    }
    case 35363:
    {
        returnValue = F("Ammerhofweg");
        break;
    }
    case 35364:
    {
        returnValue = F("Ammerhöfe");
        break;
    }
    case 35365:
    {
        returnValue = F("Ammerhöfer Weg");
        break;
    }
    case 35366:
    {
        returnValue = F("Ammerke");
        break;
    }
    case 35367:
    {
        returnValue = F("Ammerkreppe");
        break;
    }
    case 35368:
    {
        returnValue = F("Ammerlander Hauptstr.");
        break;
    }
    case 35369:
    {
        returnValue = F("Ammerlander Str.");
        break;
    }
    case 35370:
    {
        returnValue = F("Ammerlander Weg");
        break;
    }
    case 35371:
    {
        returnValue = F("Ammerlands Heide");
        break;
    }
    case 35372:
    {
        returnValue = F("Ammerlandstr.");
        break;
    }
    case 35373:
    {
        returnValue = F("Ammerlandweg");
        break;
    }
    case 35374:
    {
        returnValue = F("Ammerländer Str.");
        break;
    }
    case 35375:
    {
        returnValue = F("Ammerländer Weg");
        break;
    }
    case 35376:
    {
        returnValue = F("Ammermühle");
        break;
    }
    case 35377:
    {
        returnValue = F("Ammermühlenstr.");
        break;
    }
    case 35378:
    {
        returnValue = F("Ammermühlweg");
        break;
    }
    case 35379:
    {
        returnValue = F("Ammerndorfer Str.");
        break;
    }
    case 35380:
    {
        returnValue = F("Ammernweg");
        break;
    }
    case 35381:
    {
        returnValue = F("Ammersberg");
        break;
    }
    case 35382:
    {
        returnValue = F("Ammersbühl");
        break;
    }
    case 35383:
    {
        returnValue = F("Ammersche Brücke");
        break;
    }
    case 35384:
    {
        returnValue = F("Ammerscher Weg");
        break;
    }
    case 35385:
    {
        returnValue = F("Ammersee Höhenweg");
        break;
    }
    case 35386:
    {
        returnValue = F("Ammersee-Höhenweg");
        break;
    }
    case 35387:
    {
        returnValue = F("Ammerseerhöhenweg");
        break;
    }
    case 35388:
    {
        returnValue = F("Ammerseestr.");
        break;
    }
    case 35389:
    {
        returnValue = F("Ammerseeweg");
        break;
    }
    case 35390:
    {
        returnValue = F("Ammerskamp");
        break;
    }
    case 35391:
    {
        returnValue = F("Ammersrichter Steig");
        break;
    }
    case 35392:
    {
        returnValue = F("Ammerstadion");
        break;
    }
    case 35393:
    {
        returnValue = F("Ammerstr.");
        break;
    }
    case 35394:
    {
        returnValue = F("Ammerswurth");
        break;
    }
    case 35395:
    {
        returnValue = F("Ammert");
        break;
    }
    case 35396:
    {
        returnValue = F("Ammertal");
        break;
    }
    case 35397:
    {
        returnValue = F("Ammertalstr.");
        break;
    }
    case 35398:
    {
        returnValue = F("Ammertalweg");
        break;
    }
    case 35399:
    {
        returnValue = F("Ammerthaler Pfad");
        break;
    }
    case 35400:
    {
        returnValue = F("Ammerthaler Str.");
        break;
    }
    case 35401:
    {
        returnValue = F("Ammerthaler Weg");
        break;
    }
    case 35402:
    {
        returnValue = F("Ammertsbergweg");
        break;
    }
    case 35403:
    {
        returnValue = F("Ammerwaldweg");
        break;
    }
    case 35404:
    {
        returnValue = F("Ammerweg");
        break;
    }
    case 35405:
    {
        returnValue = F("Amminger Str.");
        break;
    }
    case 35406:
    {
        returnValue = F("Ammolandsweg");
        break;
    }
    case 35407:
    {
        returnValue = F("Ammonitenstr.");
        break;
    }
    case 35408:
    {
        returnValue = F("Ammonitenweg");
        break;
    }
    case 35409:
    {
        returnValue = F("Ammonstr.");
        break;
    }
    case 35410:
    {
        returnValue = F("Amoltertal Weg");
        break;
    }
    case 35411:
    {
        returnValue = F("Amoltertalgasse");
        break;
    }
    case 35412:
    {
        returnValue = F("Amonshöhe");
        break;
    }
    case 35413:
    {
        returnValue = F("Amorbacher Str.");
        break;
    }
    case 35414:
    {
        returnValue = F("Amorbacher Weg");
        break;
    }
    case 35415:
    {
        returnValue = F("Amorbachstr.");
        break;
    }
    case 35416:
    {
        returnValue = F("Amorellenwörth");
        break;
    }
    case 35417:
    {
        returnValue = F("Amorkamp");
        break;
    }
    case 35418:
    {
        returnValue = F("Amorsbrunner Str.");
        break;
    }
    case 35419:
    {
        returnValue = F("Amortplatz");
        break;
    }
    case 35420:
    {
        returnValue = F("Amortstr.");
        break;
    }
    case 35421:
    {
        returnValue = F("Amorweg");
        break;
    }
    case 35422:
    {
        returnValue = F("Amosweg");
        break;
    }
    case 35423:
    {
        returnValue = F("Ampelweg");
        break;
    }
    case 35424:
    {
        returnValue = F("Ampener Weg");
        break;
    }
    case 35425:
    {
        returnValue = F("Amperau");
        break;
    }
    case 35426:
    {
        returnValue = F("Amperaustr.");
        break;
    }
    case 35427:
    {
        returnValue = F("Amperblick");
        break;
    }
    case 35428:
    {
        returnValue = F("Amperbrücke");
        break;
    }
    case 35429:
    {
        returnValue = F("Amperdamm");
        break;
    }
    case 35430:
    {
        returnValue = F("Amperestr.");
        break;
    }
    case 35431:
    {
        returnValue = F("Ampereweg");
        break;
    }
    case 35432:
    {
        returnValue = F("Amperfeld");
        break;
    }
    case 35433:
    {
        returnValue = F("Amperleite");
        break;
    }
    case 35434:
    {
        returnValue = F("Amperpettenbacher Str.");
        break;
    }
    case 35435:
    {
        returnValue = F("Amperstr.");
        break;
    }
    case 35436:
    {
        returnValue = F("Ampertal");
        break;
    }
    case 35437:
    {
        returnValue = F("Ampertalstr.");
        break;
    }
    case 35438:
    {
        returnValue = F("Ampertalweg");
        break;
    }
    case 35439:
    {
        returnValue = F("Amperterrasse");
        break;
    }
    case 35440:
    {
        returnValue = F("Ampertshausen");
        break;
    }
    case 35441:
    {
        returnValue = F("Amperweg");
        break;
    }
    case 35442:
    {
        returnValue = F("Amperwehrstr.");
        break;
    }
    case 35443:
    {
        returnValue = F("Ampfelbronner Str.");
        break;
    }
    case 35444:
    {
        returnValue = F("Ampferbach");
        break;
    }
    case 35445:
    {
        returnValue = F("Ampferbacher Str.");
        break;
    }
    case 35446:
    {
        returnValue = F("Ampferstieg");
        break;
    }
    case 35447:
    {
        returnValue = F("Ampferstr.");
        break;
    }
    case 35448:
    {
        returnValue = F("Ampferweg");
        break;
    }
    case 35449:
    {
        returnValue = F("Ampfinger Str.");
        break;
    }
    case 35450:
    {
        returnValue = F("Ampfurther Ring");
        break;
    }
    case 35451:
    {
        returnValue = F("Ampfurther Weg");
        break;
    }
    case 35452:
    {
        returnValue = F("Amphietheater");
        break;
    }
    case 35453:
    {
        returnValue = F("Amphop");
        break;
    }
    case 35454:
    {
        returnValue = F("Amphoper Str.");
        break;
    }
    case 35455:
    {
        returnValue = F("Amphorenhof");
        break;
    }
    case 35456:
    {
        returnValue = F("Amploniusstr.");
        break;
    }
    case 35457:
    {
        returnValue = F("Ampo");
        break;
    }
    case 35458:
    {
        returnValue = F("Amrastr.");
        break;
    }
    case 35459:
    {
        returnValue = F("Amray");
        break;
    }
    case 35460:
    {
        returnValue = F("Amrheinstr.");
        break;
    }
    case 35461:
    {
        returnValue = F("Amrheinsweg");
        break;
    }
    case 35462:
    {
        returnValue = F("Amrichshäuser Str.");
        break;
    }
    case 35463:
    {
        returnValue = F("Amrigschwand");
        break;
    }
    case 35464:
    {
        returnValue = F("Amriswiler Str.");
        break;
    }
    case 35465:
    {
        returnValue = F("Amriswilstr.");
        break;
    }
    case 35466:
    {
        returnValue = F("Amrumer Gang");
        break;
    }
    case 35467:
    {
        returnValue = F("Amrumer Str.");
        break;
    }
    case 35468:
    {
        returnValue = F("Amrumer Weg");
        break;
    }
    case 35469:
    {
        returnValue = F("Amrumstieg");
        break;
    }
    case 35470:
    {
        returnValue = F("Amrumstr.");
        break;
    }
    case 35471:
    {
        returnValue = F("Amrumweg");
        break;
    }
    case 35472:
    {
        returnValue = F("Amsbergring");
        break;
    }
    case 35473:
    {
        returnValue = F("Amsbergstieg");
        break;
    }
    case 35474:
    {
        returnValue = F("Amsbergstr.");
        break;
    }
    case 35475:
    {
        returnValue = F("Amsdorfer Chaussee");
        break;
    }
    case 35476:
    {
        returnValue = F("Amsdorfer Str.");
        break;
    }
    case 35477:
    {
        returnValue = F("Amsdorfstr.");
        break;
    }
    case 35478:
    {
        returnValue = F("Amsel");
        break;
    }
    case 35479:
    {
        returnValue = F("Amsel Str.");
        break;
    }
    case 35480:
    {
        returnValue = F("Amsel-Weg");
        break;
    }
    case 35481:
    {
        returnValue = F("Amselallee");
        break;
    }
    case 35482:
    {
        returnValue = F("Amselberg");
        break;
    }
    case 35483:
    {
        returnValue = F("Amselbrink");
        break;
    }
    case 35484:
    {
        returnValue = F("Amselbusch");
        break;
    }
    case 35485:
    {
        returnValue = F("Amseletal");
        break;
    }
    case 35486:
    {
        returnValue = F("Amselfeld");
        break;
    }
    case 35487:
    {
        returnValue = F("Amselfing");
        break;
    }
    case 35488:
    {
        returnValue = F("Amselfinger Str.");
        break;
    }
    case 35489:
    {
        returnValue = F("Amselgasse");
        break;
    }
    case 35490:
    {
        returnValue = F("Amselgraben");
        break;
    }
    case 35491:
    {
        returnValue = F("Amselgrund");
        break;
    }
    case 35492:
    {
        returnValue = F("Amselgrundstr.");
        break;
    }
    case 35493:
    {
        returnValue = F("Amselhain");
        break;
    }
    case 35494:
    {
        returnValue = F("Amselhainstr.");
        break;
    }
    case 35495:
    {
        returnValue = F("Amselherd");
        break;
    }
    case 35496:
    {
        returnValue = F("Amselhof");
        break;
    }
    case 35497:
    {
        returnValue = F("Amselleite");
        break;
    }
    case 35498:
    {
        returnValue = F("Amselnest");
        break;
    }
    case 35499:
    {
        returnValue = F("Amselpfad");
        break;
    }
    case 35500:
    {
        returnValue = F("Amselplatz");
        break;
    }
    case 35501:
    {
        returnValue = F("Amselrain");
        break;
    }
    case 35502:
    {
        returnValue = F("Amselreut");
        break;
    }
    case 35503:
    {
        returnValue = F("Amselreutehof");
        break;
    }
    case 35504:
    {
        returnValue = F("Amselring");
        break;
    }
    case 35505:
    {
        returnValue = F("Amselschlag");
        break;
    }
    case 35506:
    {
        returnValue = F("Amselschneise");
        break;
    }
    case 35507:
    {
        returnValue = F("Amselsprung");
        break;
    }
    case 35508:
    {
        returnValue = F("Amselsteg");
        break;
    }
    case 35509:
    {
        returnValue = F("Amselsteig");
        break;
    }
    case 35510:
    {
        returnValue = F("Amselstieg");
        break;
    }
    case 35511:
    {
        returnValue = F("Amselstiege");
        break;
    }
    case 35512:
    {
        returnValue = F("Amselstr.");
        break;
    }
    case 35513:
    {
        returnValue = F("Amseltal");
        break;
    }
    case 35514:
    {
        returnValue = F("Amseltalweg");
        break;
    }
    case 35515:
    {
        returnValue = F("Amselteichweg");
        break;
    }
    case 35516:
    {
        returnValue = F("Amselthal");
        break;
    }
    case 35517:
    {
        returnValue = F("Amselweg");
        break;
    }
    case 35518:
    {
        returnValue = F("Amselweg 159 - 201");
        break;
    }
    case 35519:
    {
        returnValue = F("Amselweg ?");
        break;
    }
    case 35520:
    {
        returnValue = F("Amsenbuckweg");
        break;
    }
    case 35521:
    {
        returnValue = F("Amserweg");
        break;
    }
    case 35522:
    {
        returnValue = F("Amseweg");
        break;
    }
    case 35523:
    {
        returnValue = F("Amshamer Str.");
        break;
    }
    case 35524:
    {
        returnValue = F("Amshammer Gasse");
        break;
    }
    case 35525:
    {
        returnValue = F("Amshausener Str.");
        break;
    }
    case 35526:
    {
        returnValue = F("Amsheimer Str.");
        break;
    }
    case 35527:
    {
        returnValue = F("Amslatt");
        break;
    }
    case 35528:
    {
        returnValue = F("Amstelbachstr.");
        break;
    }
    case 35529:
    {
        returnValue = F("Amsterdamer Allee");
        break;
    }
    case 35530:
    {
        returnValue = F("Amsterdamer Gracht");
        break;
    }
    case 35531:
    {
        returnValue = F("Amsterdamer Str.");
        break;
    }
    case 35532:
    {
        returnValue = F("Amsterdamer Weg");
        break;
    }
    case 35533:
    {
        returnValue = F("Amsterdamstr.");
        break;
    }
    case 35534:
    {
        returnValue = F("Amstetter Str.");
        break;
    }
    case 35535:
    {
        returnValue = F("Amstetter Weg");
        break;
    }
    case 35536:
    {
        returnValue = F("Amt");
        break;
    }
    case 35537:
    {
        returnValue = F("Amt Chorin");
        break;
    }
    case 35538:
    {
        returnValue = F("Amtberg");
        break;
    }
    case 35539:
    {
        returnValue = F("Amtenhausener Str.");
        break;
    }
    case 35540:
    {
        returnValue = F("Amters Hof");
        break;
    }
    case 35541:
    {
        returnValue = F("Amtgasse");
        break;
    }
    case 35542:
    {
        returnValue = F("Amthaus");
        break;
    }
    case 35543:
    {
        returnValue = F("Amthausstr.");
        break;
    }
    case 35544:
    {
        returnValue = F("Amthausweg");
        break;
    }
    case 35545:
    {
        returnValue = F("Amthof");
        break;
    }
    case 35546:
    {
        returnValue = F("Amthofplatz");
        break;
    }
    case 35547:
    {
        returnValue = F("Amthofstr.");
        break;
    }
    case 35548:
    {
        returnValue = F("Amtland");
        break;
    }
    case 35549:
    {
        returnValue = F("Amtlehenweg");
        break;
    }
    case 35550:
    {
        returnValue = F("Amtmann Weg");
        break;
    }
    case 35551:
    {
        returnValue = F("Amtmann-Brons-Weg");
        break;
    }
    case 35552:
    {
        returnValue = F("Amtmann-Brüning-Str.");
        break;
    }
    case 35553:
    {
        returnValue = F("Amtmann-Daniel-Str.");
        break;
    }
    case 35554:
    {
        returnValue = F("Amtmann-Dircks-Str.");
        break;
    }
    case 35555:
    {
        returnValue = F("Amtmann-Finger-Str.");
        break;
    }
    case 35556:
    {
        returnValue = F("Amtmann-Jessele-Str.");
        break;
    }
    case 35557:
    {
        returnValue = F("Amtmann-Lueder-Str.");
        break;
    }
    case 35558:
    {
        returnValue = F("Amtmann-Reinecke-Str.");
        break;
    }
    case 35559:
    {
        returnValue = F("Amtmann-Schipper-Str.");
        break;
    }
    case 35560:
    {
        returnValue = F("Amtmann-Schroeter-Str.");
        break;
    }
    case 35561:
    {
        returnValue = F("Amtmann-Stein-Str.");
        break;
    }
    case 35562:
    {
        returnValue = F("Amtmannberg");
        break;
    }
    case 35563:
    {
        returnValue = F("Amtmannfeld");
        break;
    }
    case 35564:
    {
        returnValue = F("Amtmannfeldweg");
        break;
    }
    case 35565:
    {
        returnValue = F("Amtmanns Weide");
        break;
    }
    case 35566:
    {
        returnValue = F("Amtmannstr.");
        break;
    }
    case 35567:
    {
        returnValue = F("Amtmannsweg");
        break;
    }
    case 35568:
    {
        returnValue = F("Amtmannswiese");
        break;
    }
    case 35569:
    {
        returnValue = F("Amtmannweg");
        break;
    }
    case 35570:
    {
        returnValue = F("Amts Feld");
        break;
    }
    case 35571:
    {
        returnValue = F("Amts- und Apothekenweg");
        break;
    }
    case 35572:
    {
        returnValue = F("Amtsallee");
        break;
    }
    case 35573:
    {
        returnValue = F("Amtsbauhof");
        break;
    }
    case 35574:
    {
        returnValue = F("Amtsberg");
        break;
    }
    case 35575:
    {
        returnValue = F("Amtsbergstr.");
        break;
    }
    case 35576:
    {
        returnValue = F("Amtsbreite");
        break;
    }
    case 35577:
    {
        returnValue = F("Amtsbrink");
        break;
    }
    case 35578:
    {
        returnValue = F("Amtsbrücke");
        break;
    }
    case 35579:
    {
        returnValue = F("Amtsdamm");
        break;
    }
    case 35580:
    {
        returnValue = F("Amtsdrostenstr.");
        break;
    }
    case 35581:
    {
        returnValue = F("Amtsfahrt");
        break;
    }
    case 35582:
    {
        returnValue = F("Amtsfeld");
        break;
    }
    case 35583:
    {
        returnValue = F("Amtsfeldstr.");
        break;
    }
    case 35584:
    {
        returnValue = F("Amtsfreiheit");
        break;
    }
    case 35585:
    {
        returnValue = F("Amtsgarten");
        break;
    }
    case 35586:
    {
        returnValue = F("Amtsgartenweg");
        break;
    }
    case 35587:
    {
        returnValue = F("Amtsgasse");
        break;
    }
    case 35588:
    {
        returnValue = F("Amtsgericht Burgwedel");
        break;
    }
    case 35589:
    {
        returnValue = F("Amtsgerichtsgarten");
        break;
    }
    case 35590:
    {
        returnValue = F("Amtsgerichtsgasse");
        break;
    }
    case 35591:
    {
        returnValue = F("Amtsgerichtsplatz");
        break;
    }
    case 35592:
    {
        returnValue = F("Amtsgerichtsstr.");
        break;
    }
    case 35593:
    {
        returnValue = F("Amtsgerichtstr.");
        break;
    }
    case 35594:
    {
        returnValue = F("Amtsgerichtsweg");
        break;
    }
    case 35595:
    {
        returnValue = F("Amtshausplatz");
        break;
    }
    case 35596:
    {
        returnValue = F("Amtshausstr.");
        break;
    }
    case 35597:
    {
        returnValue = F("Amtsheide");
        break;
    }
    case 35598:
    {
        returnValue = F("Amtshof");
        break;
    }
    case 35599:
    {
        returnValue = F("Amtshofgäßlein");
        break;
    }
    case 35600:
    {
        returnValue = F("Amtshofstr.");
        break;
    }
    case 35601:
    {
        returnValue = F("Amtshofweg");
        break;
    }
    case 35602:
    {
        returnValue = F("Amtshälde-Hubel");
        break;
    }
    case 35603:
    {
        returnValue = F("Amtshäuser");
        break;
    }
    case 35604:
    {
        returnValue = F("Amtshäuser Str.");
        break;
    }
    case 35605:
    {
        returnValue = F("Amtskellergasse");
        break;
    }
    case 35606:
    {
        returnValue = F("Amtskellerstr.");
        break;
    }
    case 35607:
    {
        returnValue = F("Amtsknechtsgasse");
        break;
    }
    case 35608:
    {
        returnValue = F("Amtsknechtswahn");
        break;
    }
    case 35609:
    {
        returnValue = F("Amtskoppel");
        break;
    }
    case 35610:
    {
        returnValue = F("Amtsmoor");
        break;
    }
    case 35611:
    {
        returnValue = F("Amtsmühle");
        break;
    }
    case 35612:
    {
        returnValue = F("Amtsmühlenweg");
        break;
    }
    case 35613:
    {
        returnValue = F("Amtspark Burgwedel");
        break;
    }
    case 35614:
    {
        returnValue = F("Amtspfad");
        break;
    }
    case 35615:
    {
        returnValue = F("Amtsplatz");
        break;
    }
    case 35616:
    {
        returnValue = F("Amtsrain");
        break;
    }
    case 35617:
    {
        returnValue = F("Amtsrichtergasse");
        break;
    }
    case 35618:
    {
        returnValue = F("Amtsrichterstr.");
        break;
    }
    case 35619:
    {
        returnValue = F("Amtsrichterweg");
        break;
    }
    case 35620:
    {
        returnValue = F("Amtsschaftrift");
        break;
    }
    case 35621:
    {
        returnValue = F("Amtsschützengasse");
        break;
    }
    case 35622:
    {
        returnValue = F("Amtsseite-Am Schießwecken");
        break;
    }
    case 35623:
    {
        returnValue = F("Amtsseite-Bergstr.");
        break;
    }
    case 35624:
    {
        returnValue = F("Amtsseite-Brettmühlenstr.");
        break;
    }
    case 35625:
    {
        returnValue = F("Amtsseite-Dorfstr.");
        break;
    }
    case 35626:
    {
        returnValue = F("Amtsseite-Hinterer Grund");
        break;
    }
    case 35627:
    {
        returnValue = F("Amtsseite-Höhenweg");
        break;
    }
    case 35628:
    {
        returnValue = F("Amtsseite-Katzensteinweg");
        break;
    }
    case 35629:
    {
        returnValue = F("Amtsseite-Kniebreche");
        break;
    }
    case 35630:
    {
        returnValue = F("Amtssteig");
        break;
    }
    case 35631:
    {
        returnValue = F("Amtsstieg");
        break;
    }
    case 35632:
    {
        returnValue = F("Amtsstiege");
        break;
    }
    case 35633:
    {
        returnValue = F("Amtsstr.");
        break;
    }
    case 35634:
    {
        returnValue = F("Amtsstufen");
        break;
    }
    case 35635:
    {
        returnValue = F("Amtstor");
        break;
    }
    case 35636:
    {
        returnValue = F("Amtstorstr.");
        break;
    }
    case 35637:
    {
        returnValue = F("Amtstr.");
        break;
    }
    case 35638:
    {
        returnValue = F("Amtsvogt-Fiedler-Str.");
        break;
    }
    case 35639:
    {
        returnValue = F("Amtsvogt-Schlüter-Weg");
        break;
    }
    case 35640:
    {
        returnValue = F("Amtsvogtei");
        break;
    }
    case 35641:
    {
        returnValue = F("Amtsvogtsweg");
        break;
    }
    case 35642:
    {
        returnValue = F("Amtsvogtweg");
        break;
    }
    case 35643:
    {
        returnValue = F("Amtswald");
        break;
    }
    case 35644:
    {
        returnValue = F("Amtswallstr.");
        break;
    }
    case 35645:
    {
        returnValue = F("Amtsweg");
        break;
    }
    case 35646:
    {
        returnValue = F("Amtsweide");
        break;
    }
    case 35647:
    {
        returnValue = F("Amtswiese");
        break;
    }
    case 35648:
    {
        returnValue = F("Amtswiese/Festwiese");
        break;
    }
    case 35649:
    {
        returnValue = F("Amtswiesenstr.");
        break;
    }
    case 35650:
    {
        returnValue = F("Amtteich");
        break;
    }
    case 35651:
    {
        returnValue = F("Amtweg");
        break;
    }
    case 35652:
    {
        returnValue = F("Amtzeller Str.");
        break;
    }
    case 35653:
    {
        returnValue = F("Amtäckerstr.");
        break;
    }
    case 35654:
    {
        returnValue = F("Amundsenstr.");
        break;
    }
    case 35655:
    {
        returnValue = F("Amundsenweg");
        break;
    }
    case 35656:
    {
        returnValue = F("Amweg");
        break;
    }
    case 35657:
    {
        returnValue = F("Amönauer Weg");
        break;
    }
    case 35658:
    {
        returnValue = F("Amönenhofstr.");
        break;
    }
    case 35659:
    {
        returnValue = F("Amönenwarte");
        break;
    }
    case 35660:
    {
        returnValue = F("An  den Stolpseewiesen");
        break;
    }
    case 35661:
    {
        returnValue = F("An Alfken Heide");
        break;
    }
    case 35662:
    {
        returnValue = F("An Backesbeek");
        break;
    }
    case 35663:
    {
        returnValue = F("An Backhus");
        break;
    }
    case 35664:
    {
        returnValue = F("An Bals Hof");
        break;
    }
    case 35665:
    {
        returnValue = F("An Barg");
        break;
    }
    case 35666:
    {
        returnValue = F("An Berkenstrücken");
        break;
    }
    case 35667:
    {
        returnValue = F("An Betzenwegl");
        break;
    }
    case 35668:
    {
        returnValue = F("An Bleeckhoff");
        break;
    }
    case 35669:
    {
        returnValue = F("An Bocketsmühle");
        break;
    }
    case 35670:
    {
        returnValue = F("An Bracht");
        break;
    }
    case 35671:
    {
        returnValue = F("An Brink");
        break;
    }
    case 35672:
    {
        returnValue = F("An Bruckes");
        break;
    }
    case 35673:
    {
        returnValue = F("An Bruders Heck");
        break;
    }
    case 35674:
    {
        returnValue = F("An Brümmerskamp");
        break;
    }
    case 35675:
    {
        returnValue = F("An Burg Kreuzau");
        break;
    }
    case 35676:
    {
        returnValue = F("An Burger Weide");
        break;
    }
    case 35677:
    {
        returnValue = F("An Deckers");
        break;
    }
    case 35678:
    {
        returnValue = F("An Der Linglmühle");
        break;
    }
    case 35679:
    {
        returnValue = F("An Der Schafleite");
        break;
    }
    case 35680:
    {
        returnValue = F("An Deroy");
        break;
    }
    case 35681:
    {
        returnValue = F("An Diek");
        break;
    }
    case 35682:
    {
        returnValue = F("An Dilia");
        break;
    }
    case 35683:
    {
        returnValue = F("An Dörp");
        break;
    }
    case 35684:
    {
        returnValue = F("An Dörpend");
        break;
    }
    case 35685:
    {
        returnValue = F("An Ehrenmal");
        break;
    }
    case 35686:
    {
        returnValue = F("An Eikbarg");
        break;
    }
    case 35687:
    {
        returnValue = F("An Ellernholt");
        break;
    }
    case 35688:
    {
        returnValue = F("An Estrich");
        break;
    }
    case 35689:
    {
        returnValue = F("An Eulen");
        break;
    }
    case 35690:
    {
        returnValue = F("An Felderhausen");
        break;
    }
    case 35691:
    {
        returnValue = F("An Frohnhofen");
        break;
    }
    case 35692:
    {
        returnValue = F("An Fronte Beckers");
        break;
    }
    case 35693:
    {
        returnValue = F("An Fronte Diez");
        break;
    }
    case 35694:
    {
        returnValue = F("An Fronte Karl");
        break;
    }
    case 35695:
    {
        returnValue = F("An Fronte Lamotte");
        break;
    }
    case 35696:
    {
        returnValue = F("An Greives Kapelle");
        break;
    }
    case 35697:
    {
        returnValue = F("An Grolls Tannen");
        break;
    }
    case 35698:
    {
        returnValue = F("An Gummerts Kamp");
        break;
    }
    case 35699:
    {
        returnValue = F("An Gut Driesch");
        break;
    }
    case 35700:
    {
        returnValue = F("An Haben");
        break;
    }
    case 35701:
    {
        returnValue = F("An Haus Behr");
        break;
    }
    case 35702:
    {
        returnValue = F("An Haus Bruch");
        break;
    }
    case 35703:
    {
        returnValue = F("An Haus Clee");
        break;
    }
    case 35704:
    {
        returnValue = F("An Haus Padenberg");
        break;
    }
    case 35705:
    {
        returnValue = F("An Haus Steinfunder");
        break;
    }
    case 35706:
    {
        returnValue = F("An Heebarg");
        break;
    }
    case 35707:
    {
        returnValue = F("An Heimers Grund");
        break;
    }
    case 35708:
    {
        returnValue = F("An Heinrichshaus");
        break;
    }
    case 35709:
    {
        returnValue = F("An Heinrichsruh");
        break;
    }
    case 35710:
    {
        returnValue = F("An Heisterbarg");
        break;
    }
    case 35711:
    {
        returnValue = F("An Hinrichsbarg");
        break;
    }
    case 35712:
    {
        returnValue = F("An Hofäcker");
        break;
    }
    case 35713:
    {
        returnValue = F("An Hog Barg");
        break;
    }
    case 35714:
    {
        returnValue = F("An Hollings Busch");
        break;
    }
    case 35715:
    {
        returnValue = F("An Homerich");
        break;
    }
    case 35716:
    {
        returnValue = F("An Hufenberg");
        break;
    }
    case 35717:
    {
        returnValue = F("An Hömig");
        break;
    }
    case 35718:
    {
        returnValue = F("An Jacobis Hofe");
        break;
    }
    case 35719:
    {
        returnValue = F("An Johannes Junker");
        break;
    }
    case 35720:
    {
        returnValue = F("An Kampel");
        break;
    }
    case 35721:
    {
        returnValue = F("An Kessels Stich");
        break;
    }
    case 35722:
    {
        returnValue = F("An Kirchberg");
        break;
    }
    case 35723:
    {
        returnValue = F("An Klas' Kotten");
        break;
    }
    case 35724:
    {
        returnValue = F("An Kolenbeek");
        break;
    }
    case 35725:
    {
        returnValue = F("An Kuckum");
        break;
    }
    case 35726:
    {
        returnValue = F("An Lampen Busch");
        break;
    }
    case 35727:
    {
        returnValue = F("An Luziakirch");
        break;
    }
    case 35728:
    {
        returnValue = F("An Lütten Kanol");
        break;
    }
    case 35729:
    {
        returnValue = F("An Menses Mühle");
        break;
    }
    case 35730:
    {
        returnValue = F("An Miesners Hof");
        break;
    }
    case 35731:
    {
        returnValue = F("An Millessen");
        break;
    }
    case 35732:
    {
        returnValue = F("An Mühlscheid");
        break;
    }
    case 35733:
    {
        returnValue = F("An Pastorskuhle");
        break;
    }
    case 35734:
    {
        returnValue = F("An Peschbenden");
        break;
    }
    case 35735:
    {
        returnValue = F("An Peters Zehnten");
        break;
    }
    case 35736:
    {
        returnValue = F("An Rainen");
        break;
    }
    case 35737:
    {
        returnValue = F("An Rantzen Donnerkiel");
        break;
    }
    case 35738:
    {
        returnValue = F("An Regen");
        break;
    }
    case 35739:
    {
        returnValue = F("An Romersmühle");
        break;
    }
    case 35740:
    {
        returnValue = F("An Rurödes Hof");
        break;
    }
    case 35741:
    {
        returnValue = F("An Rönnekers Hof");
        break;
    }
    case 35742:
    {
        returnValue = F("An Sallahn");
        break;
    }
    case 35743:
    {
        returnValue = F("An Sandbarg");
        break;
    }
    case 35744:
    {
        returnValue = F("An Sangskath");
        break;
    }
    case 35745:
    {
        returnValue = F("An Sankt Marien");
        break;
    }
    case 35746:
    {
        returnValue = F("An Sankt Wolfgang");
        break;
    }
    case 35747:
    {
        returnValue = F("An Schlossberg");
        break;
    }
    case 35748:
    {
        returnValue = F("An Schreiners Birken");
        break;
    }
    case 35749:
    {
        returnValue = F("An Schützenhaus");
        break;
    }
    case 35750:
    {
        returnValue = F("An See");
        break;
    }
    case 35751:
    {
        returnValue = F("An St. Agatha");
        break;
    }
    case 35752:
    {
        returnValue = F("An St. Anton");
        break;
    }
    case 35753:
    {
        returnValue = F("An St. Georg");
        break;
    }
    case 35754:
    {
        returnValue = F("An St. Göddert");
        break;
    }
    case 35755:
    {
        returnValue = F("An St. Johannes");
        break;
    }
    case 35756:
    {
        returnValue = F("An St. Jost");
        break;
    }
    case 35757:
    {
        returnValue = F("An St. Katharina");
        break;
    }
    case 35758:
    {
        returnValue = F("An Steen");
        break;
    }
    case 35759:
    {
        returnValue = F("An Steenoben");
        break;
    }
    case 35760:
    {
        returnValue = F("An Steinbrechers Hof");
        break;
    }
    case 35761:
    {
        returnValue = F("An Steinbuck");
        break;
    }
    case 35762:
    {
        returnValue = F("An Steinen");
        break;
    }
    case 35763:
    {
        returnValue = F("An Steinhaus");
        break;
    }
    case 35764:
    {
        returnValue = F("An Steintgens-Gut");
        break;
    }
    case 35765:
    {
        returnValue = F("An Steverdings Bülten");
        break;
    }
    case 35766:
    {
        returnValue = F("An Stockacker");
        break;
    }
    case 35767:
    {
        returnValue = F("An Stoll");
        break;
    }
    case 35768:
    {
        returnValue = F("An Storchenneest");
        break;
    }
    case 35769:
    {
        returnValue = F("An Streitberg");
        break;
    }
    case 35770:
    {
        returnValue = F("An Teckners Tannen");
        break;
    }
    case 35771:
    {
        returnValue = F("An Teepen Tannen");
        break;
    }
    case 35772:
    {
        returnValue = F("An Theisings Hof");
        break;
    }
    case 35773:
    {
        returnValue = F("An Thelen");
        break;
    }
    case 35774:
    {
        returnValue = F("An Tiefen Graben");
        break;
    }
    case 35775:
    {
        returnValue = F("An Trierbach");
        break;
    }
    case 35776:
    {
        returnValue = F("An Trötschkes");
        break;
    }
    case 35777:
    {
        returnValue = F("An Unterhammer");
        break;
    }
    case 35778:
    {
        returnValue = F("An Victors Wäldchen");
        break;
    }
    case 35779:
    {
        returnValue = F("An Wehes Hof");
        break;
    }
    case 35780:
    {
        returnValue = F("An Wilhelmstein");
        break;
    }
    case 35781:
    {
        returnValue = F("An d' Blocksbarg");
        break;
    }
    case 35782:
    {
        returnValue = F("An d'nee Kark");
        break;
    }
    case 35783:
    {
        returnValue = F("An d'r Kapell");
        break;
    }
    case 35784:
    {
        returnValue = F("An d.Lehnenhöfer Tannen");
        break;
    }
    case 35785:
    {
        returnValue = F("An de Alde Scholl");
        break;
    }
    case 35786:
    {
        returnValue = F("An de Au");
        break;
    }
    case 35787:
    {
        returnValue = F("An de Autobaan");
        break;
    }
    case 35788:
    {
        returnValue = F("An de Baeke");
        break;
    }
    case 35789:
    {
        returnValue = F("An de Barg");
        break;
    }
    case 35790:
    {
        returnValue = F("An de Becke");
        break;
    }
    case 35791:
    {
        returnValue = F("An de Beek");
        break;
    }
    case 35792:
    {
        returnValue = F("An de Beeten");
        break;
    }
    case 35793:
    {
        returnValue = F("An de Birk");
        break;
    }
    case 35794:
    {
        returnValue = F("An de Bleek");
        break;
    }
    case 35795:
    {
        returnValue = F("An de Bleeke");
        break;
    }
    case 35796:
    {
        returnValue = F("An de Borch");
        break;
    }
    case 35797:
    {
        returnValue = F("An de Bornsteed");
        break;
    }
    case 35798:
    {
        returnValue = F("An de Brüch");
        break;
    }
    case 35799:
    {
        returnValue = F("An de Brüng");
        break;
    }
    case 35800:
    {
        returnValue = F("An de Bydiek");
        break;
    }
    case 35801:
    {
        returnValue = F("An de Bäk");
        break;
    }
    case 35802:
    {
        returnValue = F("An de Diek");
        break;
    }
    case 35803:
    {
        returnValue = F("An de Diekwisch");
        break;
    }
    case 35804:
    {
        returnValue = F("An de Drift");
        break;
    }
    case 35805:
    {
        returnValue = F("An de Eck");
        break;
    }
    case 35806:
    {
        returnValue = F("An de Eek");
        break;
    }
    case 35807:
    {
        returnValue = F("An de Eider");
        break;
    }
    case 35808:
    {
        returnValue = F("An de Füerwehr");
        break;
    }
    case 35809:
    {
        returnValue = F("An de Gauswisch");
        break;
    }
    case 35810:
    {
        returnValue = F("An de Greeden");
        break;
    }
    case 35811:
    {
        returnValue = F("An de Grüpp");
        break;
    }
    case 35812:
    {
        returnValue = F("An de Hang");
        break;
    }
    case 35813:
    {
        returnValue = F("An de Hohe Steeg");
        break;
    }
    case 35814:
    {
        returnValue = F("An de Howe");
        break;
    }
    case 35815:
    {
        returnValue = F("An de Häg");
        break;
    }
    case 35816:
    {
        returnValue = F("An de Kerkhoff");
        break;
    }
    case 35817:
    {
        returnValue = F("An de Kier");
        break;
    }
    case 35818:
    {
        returnValue = F("An de Kirch");
        break;
    }
    case 35819:
    {
        returnValue = F("An de Klump");
        break;
    }
    case 35820:
    {
        returnValue = F("An de Klus");
        break;
    }
    case 35821:
    {
        returnValue = F("An de Klützer Bäk");
        break;
    }
    case 35822:
    {
        returnValue = F("An de Knick");
        break;
    }
    case 35823:
    {
        returnValue = F("An de Kohdränk");
        break;
    }
    case 35824:
    {
        returnValue = F("An de Koul");
        break;
    }
    case 35825:
    {
        returnValue = F("An de Kreisstroot");
        break;
    }
    case 35826:
    {
        returnValue = F("An de Krüpper");
        break;
    }
    case 35827:
    {
        returnValue = F("An de Krütpasch");
        break;
    }
    case 35828:
    {
        returnValue = F("An de L 13");
        break;
    }
    case 35829:
    {
        returnValue = F("An de Lainacker");
        break;
    }
    case 35830:
    {
        returnValue = F("An de Lehmkuhl");
        break;
    }
    case 35831:
    {
        returnValue = F("An de Lieth");
        break;
    }
    case 35832:
    {
        returnValue = F("An de Loh");
        break;
    }
    case 35833:
    {
        returnValue = F("An de Lükken");
        break;
    }
    case 35834:
    {
        returnValue = F("An de Marsch");
        break;
    }
    case 35835:
    {
        returnValue = F("An de Masch");
        break;
    }
    case 35836:
    {
        returnValue = F("An de Möhl");
        break;
    }
    case 35837:
    {
        returnValue = F("An de Noordkant");
        break;
    }
    case 35838:
    {
        returnValue = F("An de Pülk");
        break;
    }
    case 35839:
    {
        returnValue = F("An de Pütt");
        break;
    }
    case 35840:
    {
        returnValue = F("An de Reith");
        break;
    }
    case 35841:
    {
        returnValue = F("An de Roos");
        break;
    }
    case 35842:
    {
        returnValue = F("An de Schaapsbrüg");
        break;
    }
    case 35843:
    {
        returnValue = F("An de Schanz");
        break;
    }
    case 35844:
    {
        returnValue = F("An de Schapwasch");
        break;
    }
    case 35845:
    {
        returnValue = F("An de Schleck");
        break;
    }
    case 35846:
    {
        returnValue = F("An de School");
        break;
    }
    case 35847:
    {
        returnValue = F("An de Schützenwarft");
        break;
    }
    case 35848:
    {
        returnValue = F("An de Seen");
        break;
    }
    case 35849:
    {
        returnValue = F("An de Siepe");
        break;
    }
    case 35850:
    {
        returnValue = F("An de Straat");
        break;
    }
    case 35851:
    {
        returnValue = F("An de Sylsbek");
        break;
    }
    case 35852:
    {
        returnValue = F("An de Tegelie");
        break;
    }
    case 35853:
    {
        returnValue = F("An de Timpenwisch");
        break;
    }
    case 35854:
    {
        returnValue = F("An de Wasch");
        break;
    }
    case 35855:
    {
        returnValue = F("An de Wees");
        break;
    }
    case 35856:
    {
        returnValue = F("An de Wehl");
        break;
    }
    case 35857:
    {
        returnValue = F("An de Wettern");
        break;
    }
    case 35858:
    {
        returnValue = F("An de Wieden");
        break;
    }
    case 35859:
    {
        returnValue = F("An de Wisch");
        break;
    }
    case 35860:
    {
        returnValue = F("An de Wischen");
        break;
    }
    case 35861:
    {
        returnValue = F("An de Woord");
        break;
    }
    case 35862:
    {
        returnValue = F("An de Wurth");
        break;
    }
    case 35863:
    {
        returnValue = F("An dei Bäk");
        break;
    }
    case 35864:
    {
        returnValue = F("An dem Berg");
        break;
    }
    case 35865:
    {
        returnValue = F("An dem Bienengarten");
        break;
    }
    case 35866:
    {
        returnValue = F("An dem Doberg");
        break;
    }
    case 35867:
    {
        returnValue = F("An dem Rabenköppel");
        break;
    }
    case 35868:
    {
        returnValue = F("An dem Schwarzbach");
        break;
    }
    case 35869:
    {
        returnValue = F("An dem Seebach");
        break;
    }
    case 35870:
    {
        returnValue = F("An dem Sturmbühl");
        break;
    }
    case 35871:
    {
        returnValue = F("An dem Teiche");
        break;
    }
    case 35872:
    {
        returnValue = F("An dem Wallweg");
        break;
    }
    case 35873:
    {
        returnValue = F("An dem Wehe");
        break;
    }
    case 35874:
    {
        returnValue = F("An dem unteren Seebach");
        break;
    }
    case 35875:
    {
        returnValue = F("An den 30 Morgen");
        break;
    }
    case 35876:
    {
        returnValue = F("An den 6 Bäumchen");
        break;
    }
    case 35877:
    {
        returnValue = F("An den Abtshöfen");
        break;
    }
    case 35878:
    {
        returnValue = F("An den Acht Morgen");
        break;
    }
    case 35879:
    {
        returnValue = F("An den Ahorngärten");
        break;
    }
    case 35880:
    {
        returnValue = F("An den Akazien");
        break;
    }
    case 35881:
    {
        returnValue = F("An den Alten Schulen");
        break;
    }
    case 35882:
    {
        returnValue = F("An den Altwiesen");
        break;
    }
    case 35883:
    {
        returnValue = F("An den Ambührener Tannen");
        break;
    }
    case 35884:
    {
        returnValue = F("An den Angerkabeln");
        break;
    }
    case 35885:
    {
        returnValue = F("An den Angerwiesen");
        break;
    }
    case 35886:
    {
        returnValue = F("An den Anlagen");
        break;
    }
    case 35887:
    {
        returnValue = F("An den Apfelblüten");
        break;
    }
    case 35888:
    {
        returnValue = F("An den Apfelwiesen");
        break;
    }
    case 35889:
    {
        returnValue = F("An den Auenwiesen");
        break;
    }
    case 35890:
    {
        returnValue = F("An den Auewiesen");
        break;
    }
    case 35891:
    {
        returnValue = F("An den Augärten");
        break;
    }
    case 35892:
    {
        returnValue = F("An den Auwiesen");
        break;
    }
    case 35893:
    {
        returnValue = F("An den Bachgärten");
        break;
    }
    case 35894:
    {
        returnValue = F("An den Bachwiesen");
        break;
    }
    case 35895:
    {
        returnValue = F("An den Badäckern");
        break;
    }
    case 35896:
    {
        returnValue = F("An den Bahngleisen");
        break;
    }
    case 35897:
    {
        returnValue = F("An den Bahngärten");
        break;
    }
    case 35898:
    {
        returnValue = F("An den Baken");
        break;
    }
    case 35899:
    {
        returnValue = F("An den Banggärten");
        break;
    }
    case 35900:
    {
        returnValue = F("An den Batzenstückern");
        break;
    }
    case 35901:
    {
        returnValue = F("An den Bauernsteinen");
        break;
    }
    case 35902:
    {
        returnValue = F("An den Bauernwiesen");
        break;
    }
    case 35903:
    {
        returnValue = F("An den Bauhöfen");
        break;
    }
    case 35904:
    {
        returnValue = F("An den Baumgärten");
        break;
    }
    case 35905:
    {
        returnValue = F("An den Baumschulen");
        break;
    }
    case 35906:
    {
        returnValue = F("An den Beckheuen");
        break;
    }
    case 35907:
    {
        returnValue = F("An den Beeten");
        break;
    }
    case 35908:
    {
        returnValue = F("An den Benden");
        break;
    }
    case 35909:
    {
        returnValue = F("An den Bergen");
        break;
    }
    case 35910:
    {
        returnValue = F("An den Berggärten");
        break;
    }
    case 35911:
    {
        returnValue = F("An den Bergstücken");
        break;
    }
    case 35912:
    {
        returnValue = F("An den Bergtannen");
        break;
    }
    case 35913:
    {
        returnValue = F("An den Bergwiesen");
        break;
    }
    case 35914:
    {
        returnValue = F("An den Bergäckern");
        break;
    }
    case 35915:
    {
        returnValue = F("An den Bernhecken");
        break;
    }
    case 35916:
    {
        returnValue = F("An den Betzen");
        break;
    }
    case 35917:
    {
        returnValue = F("An den Beuten");
        break;
    }
    case 35918:
    {
        returnValue = F("An den Birken");
        break;
    }
    case 35919:
    {
        returnValue = F("An den Birkenfeldern");
        break;
    }
    case 35920:
    {
        returnValue = F("An den Birkenäckern");
        break;
    }
    case 35921:
    {
        returnValue = F("An den Bleichen");
        break;
    }
    case 35922:
    {
        returnValue = F("An den Bleicherkolken");
        break;
    }
    case 35923:
    {
        returnValue = F("An den Bleichewiesen");
        break;
    }
    case 35924:
    {
        returnValue = F("An den Bleichwiesen");
        break;
    }
    case 35925:
    {
        returnValue = F("An den Bläuwiesen");
        break;
    }
    case 35926:
    {
        returnValue = F("An den Boddenwiesen");
        break;
    }
    case 35927:
    {
        returnValue = F("An den Bootshäusern");
        break;
    }
    case 35928:
    {
        returnValue = F("An den Borngärten");
        break;
    }
    case 35929:
    {
        returnValue = F("An den Bornwiesen");
        break;
    }
    case 35930:
    {
        returnValue = F("An den Brachgärten");
        break;
    }
    case 35931:
    {
        returnValue = F("An den Brandeichen");
        break;
    }
    case 35932:
    {
        returnValue = F("An den Brennöfen");
        break;
    }
    case 35933:
    {
        returnValue = F("An den Bruchstücken");
        break;
    }
    case 35934:
    {
        returnValue = F("An den Bruchteichen");
        break;
    }
    case 35935:
    {
        returnValue = F("An den Bruchwiesen");
        break;
    }
    case 35936:
    {
        returnValue = F("An den Brunnen");
        break;
    }
    case 35937:
    {
        returnValue = F("An den Brunnengärten");
        break;
    }
    case 35938:
    {
        returnValue = F("An den Brunnenkammern");
        break;
    }
    case 35939:
    {
        returnValue = F("An den Brunnenwiesen");
        break;
    }
    case 35940:
    {
        returnValue = F("An den Brüchen");
        break;
    }
    case 35941:
    {
        returnValue = F("An den Brüchkoppeln");
        break;
    }
    case 35942:
    {
        returnValue = F("An den Buchen");
        break;
    }
    case 35943:
    {
        returnValue = F("An den Burwiesen");
        break;
    }
    case 35944:
    {
        returnValue = F("An den Bächen");
        break;
    }
    case 35945:
    {
        returnValue = F("An den Bäckerwiesen");
        break;
    }
    case 35946:
    {
        returnValue = F("An den Bäumchen");
        break;
    }
    case 35947:
    {
        returnValue = F("An den Bülten");
        break;
    }
    case 35948:
    {
        returnValue = F("An den Bürgerwiesen");
        break;
    }
    case 35949:
    {
        returnValue = F("An den Büschen");
        break;
    }
    case 35950:
    {
        returnValue = F("An den Caputher Gärten");
        break;
    }
    case 35951:
    {
        returnValue = F("An den Christinenteichen");
        break;
    }
    case 35952:
    {
        returnValue = F("An den Dammathen");
        break;
    }
    case 35953:
    {
        returnValue = F("An den Dammwiesen");
        break;
    }
    case 35954:
    {
        returnValue = F("An den Dippenäckern");
        break;
    }
    case 35955:
    {
        returnValue = F("An den Dohlwiesen");
        break;
    }
    case 35956:
    {
        returnValue = F("An den Dorfbrunnen");
        break;
    }
    case 35957:
    {
        returnValue = F("An den Dorfgärten");
        break;
    }
    case 35958:
    {
        returnValue = F("An den Dorfplätzen");
        break;
    }
    case 35959:
    {
        returnValue = F("An den Dorfstellen");
        break;
    }
    case 35960:
    {
        returnValue = F("An den Dorfwiesen");
        break;
    }
    case 35961:
    {
        returnValue = F("An den Dossewiesen");
        break;
    }
    case 35962:
    {
        returnValue = F("An den Drei Linden");
        break;
    }
    case 35963:
    {
        returnValue = F("An den Drei Mühlen");
        break;
    }
    case 35964:
    {
        returnValue = F("An den Drei Weisen");
        break;
    }
    case 35965:
    {
        returnValue = F("An den Dreißigruten");
        break;
    }
    case 35966:
    {
        returnValue = F("An den Dämmwiesen");
        break;
    }
    case 35967:
    {
        returnValue = F("An den Döllen");
        break;
    }
    case 35968:
    {
        returnValue = F("An den Döllnitzwiesen");
        break;
    }
    case 35969:
    {
        returnValue = F("An den Dünen");
        break;
    }
    case 35970:
    {
        returnValue = F("An den Eckwiesen");
        break;
    }
    case 35971:
    {
        returnValue = F("An den Effen");
        break;
    }
    case 35972:
    {
        returnValue = F("An den Eichelstücken");
        break;
    }
    case 35973:
    {
        returnValue = F("An den Eichen");
        break;
    }
    case 35974:
    {
        returnValue = F("An den Eichgräben");
        break;
    }
    case 35975:
    {
        returnValue = F("An den Eichgärten");
        break;
    }
    case 35976:
    {
        returnValue = F("An den Eichwiesen");
        break;
    }
    case 35977:
    {
        returnValue = F("An den Eichäckern");
        break;
    }
    case 35978:
    {
        returnValue = F("An den Eigenheimen");
        break;
    }
    case 35979:
    {
        returnValue = F("An den Eiskuten");
        break;
    }
    case 35980:
    {
        returnValue = F("An den Ellern");
        break;
    }
    case 35981:
    {
        returnValue = F("An den Elmen");
        break;
    }
    case 35982:
    {
        returnValue = F("An den Engern");
        break;
    }
    case 35983:
    {
        returnValue = F("An den Erbsländern");
        break;
    }
    case 35984:
    {
        returnValue = F("An den Erlen");
        break;
    }
    case 35985:
    {
        returnValue = F("An den Erlen-Bungalow");
        break;
    }
    case 35986:
    {
        returnValue = F("An den Erlwiesen");
        break;
    }
    case 35987:
    {
        returnValue = F("An den Eschen");
        break;
    }
    case 35988:
    {
        returnValue = F("An den Eschenbacher Teichen");
        break;
    }
    case 35989:
    {
        returnValue = F("An den Feldern");
        break;
    }
    case 35990:
    {
        returnValue = F("An den Feldkämpen");
        break;
    }
    case 35991:
    {
        returnValue = F("An den Feldäckern");
        break;
    }
    case 35992:
    {
        returnValue = F("An den Fichten");
        break;
    }
    case 35993:
    {
        returnValue = F("An den Fichtenäckern");
        break;
    }
    case 35994:
    {
        returnValue = F("An den Filzteilen");
        break;
    }
    case 35995:
    {
        returnValue = F("An den Fischgruben");
        break;
    }
    case 35996:
    {
        returnValue = F("An den Fischhältern");
        break;
    }
    case 35997:
    {
        returnValue = F("An den Fischteichen");
        break;
    }
    case 35998:
    {
        returnValue = F("An den Flachskuhlen");
        break;
    }
    case 35999:
    {
        returnValue = F("An den Flachsrotten");
        break;
    }
    case 36000:
    {
        returnValue = F("An den Flachsrösten");
        break;
    }
    case 36001:
    {
        returnValue = F("An den Flacken");
        break;
    }
    case 36002:
    {
        returnValue = F("An den Fleischbänken");
        break;
    }
    case 36003:
    {
        returnValue = F("An den Fließgärten");
        break;
    }
    case 36004:
    {
        returnValue = F("An den Folgen");
        break;
    }
    case 36005:
    {
        returnValue = F("An den Forsten");
        break;
    }
    case 36006:
    {
        returnValue = F("An den Forstäckern");
        break;
    }
    case 36007:
    {
        returnValue = F("An den Freigärten");
        break;
    }
    case 36008:
    {
        returnValue = F("An den Freiäckern");
        break;
    }
    case 36009:
    {
        returnValue = F("An den Friedenslinden");
        break;
    }
    case 36010:
    {
        returnValue = F("An den Friedhofswällen");
        break;
    }
    case 36011:
    {
        returnValue = F("An den Fuchsbergen");
        break;
    }
    case 36012:
    {
        returnValue = F("An den Fuchsellern");
        break;
    }
    case 36013:
    {
        returnValue = F("An den Fuchslöchern");
        break;
    }
    case 36014:
    {
        returnValue = F("An den Fuhren");
        break;
    }
    case 36015:
    {
        returnValue = F("An den Fünfruten");
        break;
    }
    case 36016:
    {
        returnValue = F("An den Gaden");
        break;
    }
    case 36017:
    {
        returnValue = F("An den Galgenhecken");
        break;
    }
    case 36018:
    {
        returnValue = F("An den Gartenhöfen");
        break;
    }
    case 36019:
    {
        returnValue = F("An den Gartenwiesen");
        break;
    }
    case 36020:
    {
        returnValue = F("An den Gassenäckern");
        break;
    }
    case 36021:
    {
        returnValue = F("An den Geestbergen");
        break;
    }
    case 36022:
    {
        returnValue = F("An den Gehren");
        break;
    }
    case 36023:
    {
        returnValue = F("An den Geierwiesen");
        break;
    }
    case 36024:
    {
        returnValue = F("An den Gemeindewiesen");
        break;
    }
    case 36025:
    {
        returnValue = F("An den Geraer Linden");
        break;
    }
    case 36026:
    {
        returnValue = F("An den Gerbhäusern");
        break;
    }
    case 36027:
    {
        returnValue = F("An den Gerichtslinden");
        break;
    }
    case 36028:
    {
        returnValue = F("An den Geroldsklippen");
        break;
    }
    case 36029:
    {
        returnValue = F("An den Gewerbewiesen");
        break;
    }
    case 36030:
    {
        returnValue = F("An den Giebeln");
        break;
    }
    case 36031:
    {
        returnValue = F("An den Glaswerken");
        break;
    }
    case 36032:
    {
        returnValue = F("An den Gleisen");
        break;
    }
    case 36033:
    {
        returnValue = F("An den Grachten");
        break;
    }
    case 36034:
    {
        returnValue = F("An den Graden");
        break;
    }
    case 36035:
    {
        returnValue = F("An den Griebenherden");
        break;
    }
    case 36036:
    {
        returnValue = F("An den Gruben");
        break;
    }
    case 36037:
    {
        returnValue = F("An den Grundwiesen");
        break;
    }
    case 36038:
    {
        returnValue = F("An den Gräbenwiesen");
        break;
    }
    case 36039:
    {
        returnValue = F("An den Gänsewiesen");
        break;
    }
    case 36040:
    {
        returnValue = F("An den Gänsäckern");
        break;
    }
    case 36041:
    {
        returnValue = F("An den Gärten");
        break;
    }
    case 36042:
    {
        returnValue = F("An den Göhren");
        break;
    }
    case 36043:
    {
        returnValue = F("An den Gölden");
        break;
    }
    case 36044:
    {
        returnValue = F("An den Gütern");
        break;
    }
    case 36045:
    {
        returnValue = F("An den Gützäckern");
        break;
    }
    case 36046:
    {
        returnValue = F("An den Hafergärten");
        break;
    }
    case 36047:
    {
        returnValue = F("An den Haiden");
        break;
    }
    case 36048:
    {
        returnValue = F("An den Hainwiesen");
        break;
    }
    case 36049:
    {
        returnValue = F("An den Halden");
        break;
    }
    case 36050:
    {
        returnValue = F("An den Hanfretzen");
        break;
    }
    case 36051:
    {
        returnValue = F("An den Hattern");
        break;
    }
    case 36052:
    {
        returnValue = F("An den Hauckgärten");
        break;
    }
    case 36053:
    {
        returnValue = F("An den Hauskoppeln");
        break;
    }
    case 36054:
    {
        returnValue = F("An den Hauswiesen");
        break;
    }
    case 36055:
    {
        returnValue = F("An den Hausäckern");
        break;
    }
    case 36056:
    {
        returnValue = F("An den Hauweien");
        break;
    }
    case 36057:
    {
        returnValue = F("An den Havelwiesen");
        break;
    }
    case 36058:
    {
        returnValue = F("An den Hecken");
        break;
    }
    case 36059:
    {
        returnValue = F("An den Heroldteichen");
        break;
    }
    case 36060:
    {
        returnValue = F("An den Hestern");
        break;
    }
    case 36061:
    {
        returnValue = F("An den Heuwiesen");
        break;
    }
    case 36062:
    {
        returnValue = F("An den Hirtenwiesen");
        break;
    }
    case 36063:
    {
        returnValue = F("An den Hirtenäckern");
        break;
    }
    case 36064:
    {
        returnValue = F("An den Hofgelängen");
        break;
    }
    case 36065:
    {
        returnValue = F("An den Hofgärten");
        break;
    }
    case 36066:
    {
        returnValue = F("An den Hofwiesen");
        break;
    }
    case 36067:
    {
        returnValue = F("An den Hofäckern");
        break;
    }
    case 36068:
    {
        returnValue = F("An den Hohen Baumgärten");
        break;
    }
    case 36069:
    {
        returnValue = F("An den Hohlgärten");
        break;
    }
    case 36070:
    {
        returnValue = F("An den Hohwiesen");
        break;
    }
    case 36071:
    {
        returnValue = F("An den Holleräckern");
        break;
    }
    case 36072:
    {
        returnValue = F("An den Holzwiesen");
        break;
    }
    case 36073:
    {
        returnValue = F("An den Hopfengärten");
        break;
    }
    case 36074:
    {
        returnValue = F("An den Hornwiesen");
        break;
    }
    case 36075:
    {
        returnValue = F("An den Hufen");
        break;
    }
    case 36076:
    {
        returnValue = F("An den Hundert Äckern");
        break;
    }
    case 36077:
    {
        returnValue = F("An den Häusern");
        break;
    }
    case 36078:
    {
        returnValue = F("An den Höfen");
        break;
    }
    case 36079:
    {
        returnValue = F("An den Hühneräckern");
        break;
    }
    case 36080:
    {
        returnValue = F("An den Hülsen");
        break;
    }
    case 36081:
    {
        returnValue = F("An den Kaiserfeldern");
        break;
    }
    case 36082:
    {
        returnValue = F("An den Kalköfen");
        break;
    }
    case 36083:
    {
        returnValue = F("An den Kammern");
        break;
    }
    case 36084:
    {
        returnValue = F("An den Kanalwiesen");
        break;
    }
    case 36085:
    {
        returnValue = F("An den Kanitzen");
        break;
    }
    case 36086:
    {
        returnValue = F("An den Kapellenäckern");
        break;
    }
    case 36087:
    {
        returnValue = F("An den Kappesgärten");
        break;
    }
    case 36088:
    {
        returnValue = F("An den Kastanien");
        break;
    }
    case 36089:
    {
        returnValue = F("An den Katzenstufen");
        break;
    }
    case 36090:
    {
        returnValue = F("An den Kellerbergen");
        break;
    }
    case 36091:
    {
        returnValue = F("An den Kellern");
        break;
    }
    case 36092:
    {
        returnValue = F("An den Kellerwiesen");
        break;
    }
    case 36093:
    {
        returnValue = F("An den Keltengräbern");
        break;
    }
    case 36094:
    {
        returnValue = F("An den Kelterwiesen");
        break;
    }
    case 36095:
    {
        returnValue = F("An den Kiebitzwiesen");
        break;
    }
    case 36096:
    {
        returnValue = F("An den Kiefern");
        break;
    }
    case 36097:
    {
        returnValue = F("An den Kiesgruben");
        break;
    }
    case 36098:
    {
        returnValue = F("An den Kiesteichen");
        break;
    }
    case 36099:
    {
        returnValue = F("An den Kiezgärten");
        break;
    }
    case 36100:
    {
        returnValue = F("An den Kirchen");
        break;
    }
    case 36101:
    {
        returnValue = F("An den Kirchenäckern");
        break;
    }
    case 36102:
    {
        returnValue = F("An den Kirchgaden");
        break;
    }
    case 36103:
    {
        returnValue = F("An den Kirchhöfen");
        break;
    }
    case 36104:
    {
        returnValue = F("An den Kirchäckern");
        break;
    }
    case 36105:
    {
        returnValue = F("An den Kirschbäumen");
        break;
    }
    case 36106:
    {
        returnValue = F("An den Kleeäckern");
        break;
    }
    case 36107:
    {
        returnValue = F("An den Kleingärten");
        break;
    }
    case 36108:
    {
        returnValue = F("An den Klingerwiesen");
        break;
    }
    case 36109:
    {
        returnValue = F("An den Klippen");
        break;
    }
    case 36110:
    {
        returnValue = F("An den Klostergründen");
        break;
    }
    case 36111:
    {
        returnValue = F("An den Klärteichen");
        break;
    }
    case 36112:
    {
        returnValue = F("An den Kohlgärten");
        break;
    }
    case 36113:
    {
        returnValue = F("An den Kopfweiden");
        break;
    }
    case 36114:
    {
        returnValue = F("An den Koppelgärten");
        break;
    }
    case 36115:
    {
        returnValue = F("An den Koppeln");
        break;
    }
    case 36116:
    {
        returnValue = F("An den Koppelwiesen");
        break;
    }
    case 36117:
    {
        returnValue = F("An den Korbweiden");
        break;
    }
    case 36118:
    {
        returnValue = F("An den Kornflaschen");
        break;
    }
    case 36119:
    {
        returnValue = F("An den Krautgärten");
        break;
    }
    case 36120:
    {
        returnValue = F("An den Krautäckern");
        break;
    }
    case 36121:
    {
        returnValue = F("An den Krebsseen");
        break;
    }
    case 36122:
    {
        returnValue = F("An den Kreischen");
        break;
    }
    case 36123:
    {
        returnValue = F("An den Kreuzen");
        break;
    }
    case 36124:
    {
        returnValue = F("An den Kreuzgärten");
        break;
    }
    case 36125:
    {
        returnValue = F("An den Kreuzwiesen");
        break;
    }
    case 36126:
    {
        returnValue = F("An den Kreuzäckern");
        break;
    }
    case 36127:
    {
        returnValue = F("An den Kruggärten");
        break;
    }
    case 36128:
    {
        returnValue = F("An den Kuhlen");
        break;
    }
    case 36129:
    {
        returnValue = F("An den Kuhteichen");
        break;
    }
    case 36130:
    {
        returnValue = F("An den Kuhweiden");
        break;
    }
    case 36131:
    {
        returnValue = F("An den Kummkehlen");
        break;
    }
    case 36132:
    {
        returnValue = F("An den Kusseln");
        break;
    }
    case 36133:
    {
        returnValue = F("An den Kuten");
        break;
    }
    case 36134:
    {
        returnValue = F("An den Kämpen");
        break;
    }
    case 36135:
    {
        returnValue = F("An den Königskerzen");
        break;
    }
    case 36136:
    {
        returnValue = F("An den Königswiesen");
        break;
    }
    case 36137:
    {
        returnValue = F("An den Küppelgärten");
        break;
    }
    case 36138:
    {
        returnValue = F("An den Laaberauen");
        break;
    }
    case 36139:
    {
        returnValue = F("An den Lachen");
        break;
    }
    case 36140:
    {
        returnValue = F("An den Langbergen");
        break;
    }
    case 36141:
    {
        returnValue = F("An den Langen Elsen");
        break;
    }
    case 36142:
    {
        returnValue = F("An den Langen Feldern");
        break;
    }
    case 36143:
    {
        returnValue = F("An den Langen Äckern");
        break;
    }
    case 36144:
    {
        returnValue = F("An den Lattentannen");
        break;
    }
    case 36145:
    {
        returnValue = F("An den Lauben");
        break;
    }
    case 36146:
    {
        returnValue = F("An den Lehmgärten");
        break;
    }
    case 36147:
    {
        returnValue = F("An den Lehmkuhlen");
        break;
    }
    case 36148:
    {
        returnValue = F("An den Lehnwiesen");
        break;
    }
    case 36149:
    {
        returnValue = F("An den Leinewiesen");
        break;
    }
    case 36150:
    {
        returnValue = F("An den Leithen");
        break;
    }
    case 36151:
    {
        returnValue = F("An den Leyen");
        break;
    }
    case 36152:
    {
        returnValue = F("An den Liepen");
        break;
    }
    case 36153:
    {
        returnValue = F("An den Lindbergen");
        break;
    }
    case 36154:
    {
        returnValue = F("An den Linden");
        break;
    }
    case 36155:
    {
        returnValue = F("An den Lindenbäumen");
        break;
    }
    case 36156:
    {
        returnValue = F("An den Linngärten");
        break;
    }
    case 36157:
    {
        returnValue = F("An den Littersbäumen");
        break;
    }
    case 36158:
    {
        returnValue = F("An den Loren");
        break;
    }
    case 36159:
    {
        returnValue = F("An den Luckauer Wiesen");
        break;
    }
    case 36160:
    {
        returnValue = F("An den Lutterhöfen");
        break;
    }
    case 36161:
    {
        returnValue = F("An den Lämmeräckern");
        break;
    }
    case 36162:
    {
        returnValue = F("An den Lärchen");
        break;
    }
    case 36163:
    {
        returnValue = F("An den Lübbensteinen");
        break;
    }
    case 36164:
    {
        returnValue = F("An den Mainwiesen");
        break;
    }
    case 36165:
    {
        returnValue = F("An den Maiwiesen");
        break;
    }
    case 36166:
    {
        returnValue = F("An den Marlachauen");
        break;
    }
    case 36167:
    {
        returnValue = F("An den Martenswiesen");
        break;
    }
    case 36168:
    {
        returnValue = F("An den Martinsgärten");
        break;
    }
    case 36169:
    {
        returnValue = F("An den Marwiesen");
        break;
    }
    case 36170:
    {
        returnValue = F("An den Mehlbäumen");
        break;
    }
    case 36171:
    {
        returnValue = F("An den Meierwiesen");
        break;
    }
    case 36172:
    {
        returnValue = F("An den Meisterhäusern");
        break;
    }
    case 36173:
    {
        returnValue = F("An den Meisterwiesen");
        break;
    }
    case 36174:
    {
        returnValue = F("An den Minschenwieden");
        break;
    }
    case 36175:
    {
        returnValue = F("An den Mitteläckern");
        break;
    }
    case 36176:
    {
        returnValue = F("An den Moorteilen");
        break;
    }
    case 36177:
    {
        returnValue = F("An den Moorwiesen");
        break;
    }
    case 36178:
    {
        returnValue = F("An den Morgen");
        break;
    }
    case 36179:
    {
        returnValue = F("An den Morten");
        break;
    }
    case 36180:
    {
        returnValue = F("An den Mönchsteichen");
        break;
    }
    case 36181:
    {
        returnValue = F("An den Mönchwiesen");
        break;
    }
    case 36182:
    {
        returnValue = F("An den Mühlen");
        break;
    }
    case 36183:
    {
        returnValue = F("An den Mühlsteinen");
        break;
    }
    case 36184:
    {
        returnValue = F("An den Mühlwiesen");
        break;
    }
    case 36185:
    {
        returnValue = F("An den Neegenbargen");
        break;
    }
    case 36186:
    {
        returnValue = F("An den Netzstiefeln");
        break;
    }
    case 36187:
    {
        returnValue = F("An den Neuwiesen");
        break;
    }
    case 36188:
    {
        returnValue = F("An den Neuäckern");
        break;
    }
    case 36189:
    {
        returnValue = F("An den Niederenden");
        break;
    }
    case 36190:
    {
        returnValue = F("An den Niersauen");
        break;
    }
    case 36191:
    {
        returnValue = F("An den Nußbäumen");
        break;
    }
    case 36192:
    {
        returnValue = F("An den Obstgärten");
        break;
    }
    case 36193:
    {
        returnValue = F("An den Obstwiesen");
        break;
    }
    case 36194:
    {
        returnValue = F("An den Osterbergen");
        break;
    }
    case 36195:
    {
        returnValue = F("An den Pappeln");
        break;
    }
    case 36196:
    {
        returnValue = F("An den Parthenwiesen");
        break;
    }
    case 36197:
    {
        returnValue = F("An den Pfauenteichen");
        break;
    }
    case 36198:
    {
        returnValue = F("An den Pferdekoppeln");
        break;
    }
    case 36199:
    {
        returnValue = F("An den Pferdsbenden");
        break;
    }
    case 36200:
    {
        returnValue = F("An den Pflanzgärten");
        break;
    }
    case 36201:
    {
        returnValue = F("An den Pfleggärten");
        break;
    }
    case 36202:
    {
        returnValue = F("An den Plantagen");
        break;
    }
    case 36203:
    {
        returnValue = F("An den Platanen");
        break;
    }
    case 36204:
    {
        returnValue = F("An den Priesterfichten");
        break;
    }
    case 36205:
    {
        returnValue = F("An den Privatmooren");
        break;
    }
    case 36206:
    {
        returnValue = F("An den Pulsäckern");
        break;
    }
    case 36207:
    {
        returnValue = F("An den Pütten");
        break;
    }
    case 36208:
    {
        returnValue = F("An den Quellen");
        break;
    }
    case 36209:
    {
        returnValue = F("An den Querstücken");
        break;
    }
    case 36210:
    {
        returnValue = F("An den Querteilen");
        break;
    }
    case 36211:
    {
        returnValue = F("An den Rabstücken");
        break;
    }
    case 36212:
    {
        returnValue = F("An den Rainen");
        break;
    }
    case 36213:
    {
        returnValue = F("An den Rainwiesen");
        break;
    }
    case 36214:
    {
        returnValue = F("An den Reben");
        break;
    }
    case 36215:
    {
        returnValue = F("An den Reepen");
        break;
    }
    case 36216:
    {
        returnValue = F("An den Reesenbetten");
        break;
    }
    case 36217:
    {
        returnValue = F("An den Regenauen");
        break;
    }
    case 36218:
    {
        returnValue = F("An den Rehwiesen");
        break;
    }
    case 36219:
    {
        returnValue = F("An den Reifwiesen");
        break;
    }
    case 36220:
    {
        returnValue = F("An den Reiterhöfen");
        break;
    }
    case 36221:
    {
        returnValue = F("An den Rhadewiesen");
        break;
    }
    case 36222:
    {
        returnValue = F("An den Rheinwiesen");
        break;
    }
    case 36223:
    {
        returnValue = F("An den Rhingärten");
        break;
    }
    case 36224:
    {
        returnValue = F("An den Riehen");
        break;
    }
    case 36225:
    {
        returnValue = F("An den Rieselfeldern");
        break;
    }
    case 36226:
    {
        returnValue = F("An den Rieselwiesen");
        break;
    }
    case 36227:
    {
        returnValue = F("An den Ringweiden");
        break;
    }
    case 36228:
    {
        returnValue = F("An den Rittergütern");
        break;
    }
    case 36229:
    {
        returnValue = F("An den Rohrwiesen");
        break;
    }
    case 36230:
    {
        returnValue = F("An den Rootten");
        break;
    }
    case 36231:
    {
        returnValue = F("An den Rotbuchen");
        break;
    }
    case 36232:
    {
        returnValue = F("An den Roteichen");
        break;
    }
    case 36233:
    {
        returnValue = F("An den Rotenbergen");
        break;
    }
    case 36234:
    {
        returnValue = F("An den Rotmainauen");
        break;
    }
    case 36235:
    {
        returnValue = F("An den Rotpfuhlen");
        break;
    }
    case 36236:
    {
        returnValue = F("An den Rottekuhlen");
        break;
    }
    case 36237:
    {
        returnValue = F("An den Rotten");
        break;
    }
    case 36238:
    {
        returnValue = F("An den Röderwiesen");
        break;
    }
    case 36239:
    {
        returnValue = F("An den Römerhügeln");
        break;
    }
    case 36240:
    {
        returnValue = F("An den Römertürmen");
        break;
    }
    case 36241:
    {
        returnValue = F("An den Röstebänken");
        break;
    }
    case 36242:
    {
        returnValue = F("An den Röthen");
        break;
    }
    case 36243:
    {
        returnValue = F("An den Rübengärten");
        break;
    }
    case 36244:
    {
        returnValue = F("An den Rübenäckern");
        break;
    }
    case 36245:
    {
        returnValue = F("An den Sakazen");
        break;
    }
    case 36246:
    {
        returnValue = F("An den Salzwiesen");
        break;
    }
    case 36247:
    {
        returnValue = F("An den Sandbergen");
        break;
    }
    case 36248:
    {
        returnValue = F("An den Sandgruben");
        break;
    }
    case 36249:
    {
        returnValue = F("An den Sandgärten");
        break;
    }
    case 36250:
    {
        returnValue = F("An den Sandpeschen");
        break;
    }
    case 36251:
    {
        returnValue = F("An den Sandwellen");
        break;
    }
    case 36252:
    {
        returnValue = F("An den Sandäckern");
        break;
    }
    case 36253:
    {
        returnValue = F("An den Schaalwiesen");
        break;
    }
    case 36254:
    {
        returnValue = F("An den Schaftannen");
        break;
    }
    case 36255:
    {
        returnValue = F("An den Schaftannen/ Radrundweg Plauer See");
        break;
    }
    case 36256:
    {
        returnValue = F("An den Schafäckern");
        break;
    }
    case 36257:
    {
        returnValue = F("An den Schanzen");
        break;
    }
    case 36258:
    {
        returnValue = F("An den Scheuergärten");
        break;
    }
    case 36259:
    {
        returnValue = F("An den Scheunen");
        break;
    }
    case 36260:
    {
        returnValue = F("An den Schillergärten");
        break;
    }
    case 36261:
    {
        returnValue = F("An den Schlehen");
        break;
    }
    case 36262:
    {
        returnValue = F("An den Schlenken");
        break;
    }
    case 36263:
    {
        returnValue = F("An den Schleuningsteinen");
        break;
    }
    case 36264:
    {
        returnValue = F("An den Schlossweiden");
        break;
    }
    case 36265:
    {
        returnValue = F("An den Schmalstücken");
        break;
    }
    case 36266:
    {
        returnValue = F("An den Schneewehen");
        break;
    }
    case 36267:
    {
        returnValue = F("An den Schraan");
        break;
    }
    case 36268:
    {
        returnValue = F("An den Schrebergärten");
        break;
    }
    case 36269:
    {
        returnValue = F("An den Schultannen");
        break;
    }
    case 36270:
    {
        returnValue = F("An den Schultenhöfen");
        break;
    }
    case 36271:
    {
        returnValue = F("An den Schulwiesen");
        break;
    }
    case 36272:
    {
        returnValue = F("An den Schwabachauen");
        break;
    }
    case 36273:
    {
        returnValue = F("An den Schwalgen");
        break;
    }
    case 36274:
    {
        returnValue = F("An den Schwalmauen");
        break;
    }
    case 36275:
    {
        returnValue = F("An den Schönäckern");
        break;
    }
    case 36276:
    {
        returnValue = F("An den Sechzig Morgen");
        break;
    }
    case 36277:
    {
        returnValue = F("An den Seegärten");
        break;
    }
    case 36278:
    {
        returnValue = F("An den Seematen");
        break;
    }
    case 36279:
    {
        returnValue = F("An den Seen");
        break;
    }
    case 36280:
    {
        returnValue = F("An den Seetannen");
        break;
    }
    case 36281:
    {
        returnValue = F("An den Seewiesen");
        break;
    }
    case 36282:
    {
        returnValue = F("An den Sekenkämpen");
        break;
    }
    case 36283:
    {
        returnValue = F("An den Selzwiesen");
        break;
    }
    case 36284:
    {
        returnValue = F("An den Seppen");
        break;
    }
    case 36285:
    {
        returnValue = F("An den Sieben Linden");
        break;
    }
    case 36286:
    {
        returnValue = F("An den Sieben Quellen");
        break;
    }
    case 36287:
    {
        returnValue = F("An den Sieben Ruthen");
        break;
    }
    case 36288:
    {
        returnValue = F("An den Sieben Stücken");
        break;
    }
    case 36289:
    {
        returnValue = F("An den Siebenrücken");
        break;
    }
    case 36290:
    {
        returnValue = F("An den Sielen");
        break;
    }
    case 36291:
    {
        returnValue = F("An den Soleteichen");
        break;
    }
    case 36292:
    {
        returnValue = F("An den Sonnengärten");
        break;
    }
    case 36293:
    {
        returnValue = F("An den Spatzenäckern");
        break;
    }
    case 36294:
    {
        returnValue = F("An den Speckenbacher Wiesen");
        break;
    }
    case 36295:
    {
        returnValue = F("An den Spiegelwiesen");
        break;
    }
    case 36296:
    {
        returnValue = F("An den Sportanlagen");
        break;
    }
    case 36297:
    {
        returnValue = F("An den Sportplätzen");
        break;
    }
    case 36298:
    {
        returnValue = F("An den Spreewiesen");
        break;
    }
    case 36299:
    {
        returnValue = F("An den Stadtwerken");
        break;
    }
    case 36300:
    {
        returnValue = F("An den Stapeläckern");
        break;
    }
    case 36301:
    {
        returnValue = F("An den Stegmatten");
        break;
    }
    case 36302:
    {
        returnValue = F("An den Steigäckern");
        break;
    }
    case 36303:
    {
        returnValue = F("An den Steilen");
        break;
    }
    case 36304:
    {
        returnValue = F("An den Steinbrüchen");
        break;
    }
    case 36305:
    {
        returnValue = F("An den Steineichen");
        break;
    }
    case 36306:
    {
        returnValue = F("An den Steinen");
        break;
    }
    case 36307:
    {
        returnValue = F("An den Steinkisten");
        break;
    }
    case 36308:
    {
        returnValue = F("An den Steinkreuzen");
        break;
    }
    case 36309:
    {
        returnValue = F("An den Steinkuhlen");
        break;
    }
    case 36310:
    {
        returnValue = F("An den Steinländern");
        break;
    }
    case 36311:
    {
        returnValue = F("An den Steinwällen");
        break;
    }
    case 36312:
    {
        returnValue = F("An den Steinäckern");
        break;
    }
    case 36313:
    {
        returnValue = F("An den Stellkämpen");
        break;
    }
    case 36314:
    {
        returnValue = F("An den Stiegcaveln");
        break;
    }
    case 36315:
    {
        returnValue = F("An den Stockmatten");
        break;
    }
    case 36316:
    {
        returnValue = F("An den Streuobstwiesen");
        break;
    }
    case 36317:
    {
        returnValue = F("An den Streuwiesen");
        break;
    }
    case 36318:
    {
        returnValue = F("An den Strothwiesen");
        break;
    }
    case 36319:
    {
        returnValue = F("An den Stufen");
        break;
    }
    case 36320:
    {
        returnValue = F("An den Stöcken");
        break;
    }
    case 36321:
    {
        returnValue = F("An den Sundwiesen");
        break;
    }
    case 36322:
    {
        returnValue = F("An den Sähmen");
        break;
    }
    case 36323:
    {
        returnValue = F("An den Sülzenpflegen");
        break;
    }
    case 36324:
    {
        returnValue = F("An den Sümpfen");
        break;
    }
    case 36325:
    {
        returnValue = F("An den Talwiesen");
        break;
    }
    case 36326:
    {
        returnValue = F("An den Tannen");
        break;
    }
    case 36327:
    {
        returnValue = F("An den Teichen");
        break;
    }
    case 36328:
    {
        returnValue = F("An den Teichhöfen");
        break;
    }
    case 36329:
    {
        returnValue = F("An den Teichwiesen");
        break;
    }
    case 36330:
    {
        returnValue = F("An den Teichäckern");
        break;
    }
    case 36331:
    {
        returnValue = F("An den Tennisplätzen");
        break;
    }
    case 36332:
    {
        returnValue = F("An den Thingstühlen");
        break;
    }
    case 36333:
    {
        returnValue = F("An den Thomasäckern");
        break;
    }
    case 36334:
    {
        returnValue = F("An den Tierhäuptern");
        break;
    }
    case 36335:
    {
        returnValue = F("An den Toften");
        break;
    }
    case 36336:
    {
        returnValue = F("An den Tongruben");
        break;
    }
    case 36337:
    {
        returnValue = F("An den Tonkuhlen");
        break;
    }
    case 36338:
    {
        returnValue = F("An den Tonwerken");
        break;
    }
    case 36339:
    {
        returnValue = F("An den Torfwiesen");
        break;
    }
    case 36340:
    {
        returnValue = F("An den Torweinbergen");
        break;
    }
    case 36341:
    {
        returnValue = F("An den Tranen");
        break;
    }
    case 36342:
    {
        returnValue = F("An den Trillers Büschen");
        break;
    }
    case 36343:
    {
        returnValue = F("An den Turmäckern");
        break;
    }
    case 36344:
    {
        returnValue = F("An den Uferwiesen");
        break;
    }
    case 36345:
    {
        returnValue = F("An den Ulmen");
        break;
    }
    case 36346:
    {
        returnValue = F("An den Ulsterwiesen");
        break;
    }
    case 36347:
    {
        returnValue = F("An den Vier Morgen");
        break;
    }
    case 36348:
    {
        returnValue = F("An den Vier Ruten");
        break;
    }
    case 36349:
    {
        returnValue = F("An den Vier Winden");
        break;
    }
    case 36350:
    {
        returnValue = F("An den Vogelauen");
        break;
    }
    case 36351:
    {
        returnValue = F("An den Vogtlandwerken");
        break;
    }
    case 36352:
    {
        returnValue = F("An den Waldteichen");
        break;
    }
    case 36353:
    {
        returnValue = F("An den Waldäckern");
        break;
    }
    case 36354:
    {
        returnValue = F("An den Wallhecken");
        break;
    }
    case 36355:
    {
        returnValue = F("An den Wasenwiesen");
        break;
    }
    case 36356:
    {
        returnValue = F("An den Wegestücken");
        break;
    }
    case 36357:
    {
        returnValue = F("An den Wehrwiesen");
        break;
    }
    case 36358:
    {
        returnValue = F("An den Weiden");
        break;
    }
    case 36359:
    {
        returnValue = F("An den Weihern");
        break;
    }
    case 36360:
    {
        returnValue = F("An den Weiherwiesen");
        break;
    }
    case 36361:
    {
        returnValue = F("An den Weinbergen");
        break;
    }
    case 36362:
    {
        returnValue = F("An den Weingärten");
        break;
    }
    case 36363:
    {
        returnValue = F("An den Weißen Steinen");
        break;
    }
    case 36364:
    {
        returnValue = F("An den Wellen");
        break;
    }
    case 36365:
    {
        returnValue = F("An den Werkstätten");
        break;
    }
    case 36366:
    {
        returnValue = F("An den Wermutsgärten");
        break;
    }
    case 36367:
    {
        returnValue = F("An den Wettenwiesen");
        break;
    }
    case 36368:
    {
        returnValue = F("An den Wiedgärten");
        break;
    }
    case 36369:
    {
        returnValue = F("An den Wiesen");
        break;
    }
    case 36370:
    {
        returnValue = F("An den Wiesenzäunen");
        break;
    }
    case 36371:
    {
        returnValue = F("An den Windflüchtern");
        break;
    }
    case 36372:
    {
        returnValue = F("An den Windmühlen");
        break;
    }
    case 36373:
    {
        returnValue = F("An den Woeren");
        break;
    }
    case 36374:
    {
        returnValue = F("An den Wolfhecken");
        break;
    }
    case 36375:
    {
        returnValue = F("An den Wolfsklippen");
        break;
    }
    case 36376:
    {
        returnValue = F("An den Wolfskuhlen");
        break;
    }
    case 36377:
    {
        returnValue = F("An den Worthen");
        break;
    }
    case 36378:
    {
        returnValue = F("An den Wurthen");
        break;
    }
    case 36379:
    {
        returnValue = F("An den Wöhrden");
        break;
    }
    case 36380:
    {
        returnValue = F("An den Zehn Morgen");
        break;
    }
    case 36381:
    {
        returnValue = F("An den Zeilweiden");
        break;
    }
    case 36382:
    {
        returnValue = F("An den Ziegeleien");
        break;
    }
    case 36383:
    {
        returnValue = F("An den Ziegeläckern");
        break;
    }
    case 36384:
    {
        returnValue = F("An den Zinsäckern");
        break;
    }
    case 36385:
    {
        returnValue = F("An den Zollhäusern");
        break;
    }
    case 36386:
    {
        returnValue = F("An den Zuckerwiesen");
        break;
    }
    case 36387:
    {
        returnValue = F("An den Zuschlägen");
        break;
    }
    case 36388:
    {
        returnValue = F("An den Zwieberlingen");
        break;
    }
    case 36389:
    {
        returnValue = F("An den alten Schulen");
        break;
    }
    case 36390:
    {
        returnValue = F("An den drei Birken");
        break;
    }
    case 36391:
    {
        returnValue = F("An den drei Eichen");
        break;
    }
    case 36392:
    {
        returnValue = F("An den drei Erken");
        break;
    }
    case 36393:
    {
        returnValue = F("An den drei Kreuzen");
        break;
    }
    case 36394:
    {
        returnValue = F("An den drei Linden");
        break;
    }
    case 36395:
    {
        returnValue = F("An den drei Morgen");
        break;
    }
    case 36396:
    {
        returnValue = F("An den drei Teichen");
        break;
    }
    case 36397:
    {
        returnValue = F("An den sechs Morgen");
        break;
    }
    case 36398:
    {
        returnValue = F("An den sechs Steinen");
        break;
    }
    case 36399:
    {
        returnValue = F("An den sieben Bäumen");
        break;
    }
    case 36400:
    {
        returnValue = F("An den sieben Quellen");
        break;
    }
    case 36401:
    {
        returnValue = F("An den sieben Teichen");
        break;
    }
    case 36402:
    {
        returnValue = F("An den zwei Kreuzchen");
        break;
    }
    case 36403:
    {
        returnValue = F("An den Äckern");
        break;
    }
    case 36404:
    {
        returnValue = F("An den Öläckern");
        break;
    }
    case 36405:
    {
        returnValue = F("An der  Marter");
        break;
    }
    case 36406:
    {
        returnValue = F("An der 3. Innwieke");
        break;
    }
    case 36407:
    {
        returnValue = F("An der 4. Innwieke");
        break;
    }
    case 36408:
    {
        returnValue = F("An der A9");
        break;
    }
    case 36409:
    {
        returnValue = F("An der Aa");
        break;
    }
    case 36410:
    {
        returnValue = F("An der Aacht");
        break;
    }
    case 36411:
    {
        returnValue = F("An der Aalbeek");
        break;
    }
    case 36412:
    {
        returnValue = F("An der Aalkate");
        break;
    }
    case 36413:
    {
        returnValue = F("An der Abendleite");
        break;
    }
    case 36414:
    {
        returnValue = F("An der Abendseite");
        break;
    }
    case 36415:
    {
        returnValue = F("An der Abens");
        break;
    }
    case 36416:
    {
        returnValue = F("An der Ablach");
        break;
    }
    case 36417:
    {
        returnValue = F("An der Ablage");
        break;
    }
    case 36418:
    {
        returnValue = F("An der Abtei");
        break;
    }
    case 36419:
    {
        returnValue = F("An der Ach");
        break;
    }
    case 36420:
    {
        returnValue = F("An der Ache");
        break;
    }
    case 36421:
    {
        returnValue = F("An der Achelriede");
        break;
    }
    case 36422:
    {
        returnValue = F("An der Achen");
        break;
    }
    case 36423:
    {
        returnValue = F("An der Acher");
        break;
    }
    case 36424:
    {
        returnValue = F("An der Achmühle");
        break;
    }
    case 36425:
    {
        returnValue = F("An der Acht");
        break;
    }
    case 36426:
    {
        returnValue = F("An der Ackerstr.");
        break;
    }
    case 36427:
    {
        returnValue = F("An der Ackerwinde");
        break;
    }
    case 36428:
    {
        returnValue = F("An der Actien-Zuckerfabrik");
        break;
    }
    case 36429:
    {
        returnValue = F("An der Adamslust");
        break;
    }
    case 36430:
    {
        returnValue = F("An der Adelegg");
        break;
    }
    case 36431:
    {
        returnValue = F("An der Adlerskerbe");
        break;
    }
    case 36432:
    {
        returnValue = F("An der Adria");
        break;
    }
    case 36433:
    {
        returnValue = F("An der Ag");
        break;
    }
    case 36434:
    {
        returnValue = F("An der Ahlmühle");
        break;
    }
    case 36435:
    {
        returnValue = F("An der Ahna");
        break;
    }
    case 36436:
    {
        returnValue = F("An der Ahne");
        break;
    }
    case 36437:
    {
        returnValue = F("An der Ahnewand");
        break;
    }
    case 36438:
    {
        returnValue = F("An der Ahornstr.");
        break;
    }
    case 36439:
    {
        returnValue = F("An der Ahrquelle");
        break;
    }
    case 36440:
    {
        returnValue = F("An der Aich");
        break;
    }
    case 36441:
    {
        returnValue = F("An der Aistaiger Str.");
        break;
    }
    case 36442:
    {
        returnValue = F("An der Aitrach");
        break;
    }
    case 36443:
    {
        returnValue = F("An der Aitranger Str.");
        break;
    }
    case 36444:
    {
        returnValue = F("An der Akademie");
        break;
    }
    case 36445:
    {
        returnValue = F("An der Alb");
        break;
    }
    case 36446:
    {
        returnValue = F("An der Albesbach");
        break;
    }
    case 36447:
    {
        returnValue = F("An der Alemannenstaffel");
        break;
    }
    case 36448:
    {
        returnValue = F("An der Alexanderheide");
        break;
    }
    case 36449:
    {
        returnValue = F("An der Alexishütte");
        break;
    }
    case 36450:
    {
        returnValue = F("An der Allee");
        break;
    }
    case 36451:
    {
        returnValue = F("An der Allmende");
        break;
    }
    case 36452:
    {
        returnValue = F("An der Alm");
        break;
    }
    case 36453:
    {
        returnValue = F("An der Almaue");
        break;
    }
    case 36454:
    {
        returnValue = F("An der Alme");
        break;
    }
    case 36455:
    {
        returnValue = F("An der Alp");
        break;
    }
    case 36456:
    {
        returnValue = F("An der Alster");
        break;
    }
    case 36457:
    {
        returnValue = F("An der Alsterquelle");
        break;
    }
    case 36458:
    {
        returnValue = F("An der Altefeld");
        break;
    }
    case 36459:
    {
        returnValue = F("An der Alten AWG");
        break;
    }
    case 36460:
    {
        returnValue = F("An der Alten Aa");
        break;
    }
    case 36461:
    {
        returnValue = F("An der Alten Aller");
        break;
    }
    case 36462:
    {
        returnValue = F("An der Alten Bach");
        break;
    }
    case 36463:
    {
        returnValue = F("An der Alten Bahn");
        break;
    }
    case 36464:
    {
        returnValue = F("An der Alten Beienburg");
        break;
    }
    case 36465:
    {
        returnValue = F("An der Alten Bergschule");
        break;
    }
    case 36466:
    {
        returnValue = F("An der Alten Brauerei");
        break;
    }
    case 36467:
    {
        returnValue = F("An der Alten Brücke");
        break;
    }
    case 36468:
    {
        returnValue = F("An der Alten Burg");
        break;
    }
    case 36469:
    {
        returnValue = F("An der Alten Bäke");
        break;
    }
    case 36470:
    {
        returnValue = F("An der Alten Eiche");
        break;
    }
    case 36471:
    {
        returnValue = F("An der Alten Elbe");
        break;
    }
    case 36472:
    {
        returnValue = F("An der Alten Färberei");
        break;
    }
    case 36473:
    {
        returnValue = F("An der Alten Gießerei");
        break;
    }
    case 36474:
    {
        returnValue = F("An der Alten Gärtnerei");
        break;
    }
    case 36475:
    {
        returnValue = F("An der Alten Heide");
        break;
    }
    case 36476:
    {
        returnValue = F("An der Alten Hessel");
        break;
    }
    case 36477:
    {
        returnValue = F("An der Alten Kapelle");
        break;
    }
    case 36478:
    {
        returnValue = F("An der Alten Kirche");
        break;
    }
    case 36479:
    {
        returnValue = F("An der Alten Lahn");
        break;
    }
    case 36480:
    {
        returnValue = F("An der Alten Maar");
        break;
    }
    case 36481:
    {
        returnValue = F("An der Alten Molkerei");
        break;
    }
    case 36482:
    {
        returnValue = F("An der Alten Mühle");
        break;
    }
    case 36483:
    {
        returnValue = F("An der Alten Naab");
        break;
    }
    case 36484:
    {
        returnValue = F("An der Alten Oberförsterei");
        break;
    }
    case 36485:
    {
        returnValue = F("An der Alten Post");
        break;
    }
    case 36486:
    {
        returnValue = F("An der Alten Poststr.");
        break;
    }
    case 36487:
    {
        returnValue = F("An der Alten Rheinbrücke");
        break;
    }
    case 36488:
    {
        returnValue = F("An der Alten Röder");
        break;
    }
    case 36489:
    {
        returnValue = F("An der Alten Scheuer");
        break;
    }
    case 36490:
    {
        returnValue = F("An der Alten Schleuse");
        break;
    }
    case 36491:
    {
        returnValue = F("An der Alten Schmiede");
        break;
    }
    case 36492:
    {
        returnValue = F("An der Alten Schule");
        break;
    }
    case 36493:
    {
        returnValue = F("An der Alten Spinnerei");
        break;
    }
    case 36494:
    {
        returnValue = F("An der Alten Str.");
        break;
    }
    case 36495:
    {
        returnValue = F("An der Alten Säge");
        break;
    }
    case 36496:
    {
        returnValue = F("An der Alten Tonkuhle");
        break;
    }
    case 36497:
    {
        returnValue = F("An der Alten Waage");
        break;
    }
    case 36498:
    {
        returnValue = F("An der Alten Wache");
        break;
    }
    case 36499:
    {
        returnValue = F("An der Alten Weed");
        break;
    }
    case 36500:
    {
        returnValue = F("An der Alten Werft");
        break;
    }
    case 36501:
    {
        returnValue = F("An der Alten Wiblinger Str.");
        break;
    }
    case 36502:
    {
        returnValue = F("An der Alten Wiese");
        break;
    }
    case 36503:
    {
        returnValue = F("An der Alten Wietze");
        break;
    }
    case 36504:
    {
        returnValue = F("An der Alten Ziegelei");
        break;
    }
    case 36505:
    {
        returnValue = F("An der Altenau");
        break;
    }
    case 36506:
    {
        returnValue = F("An der Altenbach");
        break;
    }
    case 36507:
    {
        returnValue = F("An der Alter");
        break;
    }
    case 36508:
    {
        returnValue = F("An der Altern");
        break;
    }
    case 36509:
    {
        returnValue = F("An der Altmühl");
        break;
    }
    case 36510:
    {
        returnValue = F("An der Altmühlbrücke");
        break;
    }
    case 36511:
    {
        returnValue = F("An der Amecke");
        break;
    }
    case 36512:
    {
        returnValue = F("An der Ameisenhalde");
        break;
    }
    case 36513:
    {
        returnValue = F("An der Ammerhalde");
        break;
    }
    case 36514:
    {
        returnValue = F("An der Amperbrücke");
        break;
    }
    case 36515:
    {
        returnValue = F("An der Amtmannsmühle");
        break;
    }
    case 36516:
    {
        returnValue = F("An der Amtswiese");
        break;
    }
    case 36517:
    {
        returnValue = F("An der Andreaskirche");
        break;
    }
    case 36518:
    {
        returnValue = F("An der Anewand");
        break;
    }
    case 36519:
    {
        returnValue = F("An der Angelbrücke");
        break;
    }
    case 36520:
    {
        returnValue = F("An der Angermühle");
        break;
    }
    case 36521:
    {
        returnValue = F("An der Angerwiese");
        break;
    }
    case 36522:
    {
        returnValue = F("An der Anhaide");
        break;
    }
    case 36523:
    {
        returnValue = F("An der Anhalter Bahn");
        break;
    }
    case 36524:
    {
        returnValue = F("An der Ankermühle");
        break;
    }
    case 36525:
    {
        returnValue = F("An der Anlage");
        break;
    }
    case 36526:
    {
        returnValue = F("An der Annakapelle");
        break;
    }
    case 36527:
    {
        returnValue = F("An der Anspann");
        break;
    }
    case 36528:
    {
        returnValue = F("An der Antenne");
        break;
    }
    case 36529:
    {
        returnValue = F("An der Antensburg");
        break;
    }
    case 36530:
    {
        returnValue = F("An der Anwand");
        break;
    }
    case 36531:
    {
        returnValue = F("An der Apenburger Str.");
        break;
    }
    case 36532:
    {
        returnValue = F("An der Apfelplantage");
        break;
    }
    case 36533:
    {
        returnValue = F("An der Apfelstädt");
        break;
    }
    case 36534:
    {
        returnValue = F("An der Apke");
        break;
    }
    case 36535:
    {
        returnValue = F("An der Apoldaer Str.");
        break;
    }
    case 36536:
    {
        returnValue = F("An der Apotheke");
        break;
    }
    case 36537:
    {
        returnValue = F("An der Appel");
        break;
    }
    case 36538:
    {
        returnValue = F("An der Appelsmühle");
        break;
    }
    case 36539:
    {
        returnValue = F("An der Arche");
        break;
    }
    case 36540:
    {
        returnValue = F("An der Arend");
        break;
    }
    case 36541:
    {
        returnValue = F("An der Argen");
        break;
    }
    case 36542:
    {
        returnValue = F("An der Armbach");
        break;
    }
    case 36543:
    {
        returnValue = F("An der Arnitz");
        break;
    }
    case 36544:
    {
        returnValue = F("An der Arnoldsgrube");
        break;
    }
    case 36545:
    {
        returnValue = F("An der Arztpraxis");
        break;
    }
    case 36546:
    {
        returnValue = F("An der Asbacher Str.");
        break;
    }
    case 36547:
    {
        returnValue = F("An der Ascha");
        break;
    }
    case 36548:
    {
        returnValue = F("An der Aschau");
        break;
    }
    case 36549:
    {
        returnValue = F("An der Ascher Str.");
        break;
    }
    case 36550:
    {
        returnValue = F("An der Aspel");
        break;
    }
    case 36551:
    {
        returnValue = F("An der Asse");
        break;
    }
    case 36552:
    {
        returnValue = F("An der Au");
        break;
    }
    case 36553:
    {
        returnValue = F("An der Aub");
        break;
    }
    case 36554:
    {
        returnValue = F("An der Aue");
        break;
    }
    case 36555:
    {
        returnValue = F("An der Auehütte");
        break;
    }
    case 36556:
    {
        returnValue = F("An der Auemühle");
        break;
    }
    case 36557:
    {
        returnValue = F("An der Auer Str.");
        break;
    }
    case 36558:
    {
        returnValue = F("An der Auerbacher Str.");
        break;
    }
    case 36559:
    {
        returnValue = F("An der Aufstiegstr.");
        break;
    }
    case 36560:
    {
        returnValue = F("An der Aula");
        break;
    }
    case 36561:
    {
        returnValue = F("An der Aumühle");
        break;
    }
    case 36562:
    {
        returnValue = F("An der Aura");
        break;
    }
    case 36563:
    {
        returnValue = F("An der Aurach");
        break;
    }
    case 36564:
    {
        returnValue = F("An der Auschnippe");
        break;
    }
    case 36565:
    {
        returnValue = F("An der Autmut");
        break;
    }
    case 36566:
    {
        returnValue = F("An der Autobahn");
        break;
    }
    case 36567:
    {
        returnValue = F("An der Autobahn A 24");
        break;
    }
    case 36568:
    {
        returnValue = F("An der Automeile");
        break;
    }
    case 36569:
    {
        returnValue = F("An der Auwisch");
        break;
    }
    case 36570:
    {
        returnValue = F("An der B 1");
        break;
    }
    case 36571:
    {
        returnValue = F("An der B 100");
        break;
    }
    case 36572:
    {
        returnValue = F("An der B 101");
        break;
    }
    case 36573:
    {
        returnValue = F("An der B 103");
        break;
    }
    case 36574:
    {
        returnValue = F("An der B 105");
        break;
    }
    case 36575:
    {
        returnValue = F("An der B 106");
        break;
    }
    case 36576:
    {
        returnValue = F("An der B 107");
        break;
    }
    case 36577:
    {
        returnValue = F("An der B 110");
        break;
    }
    case 36578:
    {
        returnValue = F("An der B 112");
        break;
    }
    case 36579:
    {
        returnValue = F("An der B 115");
        break;
    }
    case 36580:
    {
        returnValue = F("An der B 167");
        break;
    }
    case 36581:
    {
        returnValue = F("An der B 180");
        break;
    }
    case 36582:
    {
        returnValue = F("An der B 198");
        break;
    }
    case 36583:
    {
        returnValue = F("An der B 200");
        break;
    }
    case 36584:
    {
        returnValue = F("An der B 202");
        break;
    }
    case 36585:
    {
        returnValue = F("An der B 206");
        break;
    }
    case 36586:
    {
        returnValue = F("An der B 214");
        break;
    }
    case 36587:
    {
        returnValue = F("An der B 255");
        break;
    }
    case 36588:
    {
        returnValue = F("An der B 26");
        break;
    }
    case 36589:
    {
        returnValue = F("An der B 285");
        break;
    }
    case 36590:
    {
        returnValue = F("An der B 4");
        break;
    }
    case 36591:
    {
        returnValue = F("An der B 404");
        break;
    }
    case 36592:
    {
        returnValue = F("An der B 430");
        break;
    }
    case 36593:
    {
        returnValue = F("An der B 432");
        break;
    }
    case 36594:
    {
        returnValue = F("An der B 433");
        break;
    }
    case 36595:
    {
        returnValue = F("An der B 436");
        break;
    }
    case 36596:
    {
        returnValue = F("An der B 5");
        break;
    }
    case 36597:
    {
        returnValue = F("An der B 54");
        break;
    }
    case 36598:
    {
        returnValue = F("An der B 6");
        break;
    }
    case 36599:
    {
        returnValue = F("An der B 68");
        break;
    }
    case 36600:
    {
        returnValue = F("An der B 71");
        break;
    }
    case 36601:
    {
        returnValue = F("An der B 76");
        break;
    }
    case 36602:
    {
        returnValue = F("An der B 80");
        break;
    }
    case 36603:
    {
        returnValue = F("An der B 89");
        break;
    }
    case 36604:
    {
        returnValue = F("An der B 9");
        break;
    }
    case 36605:
    {
        returnValue = F("An der B 92");
        break;
    }
    case 36606:
    {
        returnValue = F("An der B 96 Neddemin");
        break;
    }
    case 36607:
    {
        returnValue = F("An der B 99");
        break;
    }
    case 36608:
    {
        returnValue = F("An der B.87");
        break;
    }
    case 36609:
    {
        returnValue = F("An der B1");
        break;
    }
    case 36610:
    {
        returnValue = F("An der B102");
        break;
    }
    case 36611:
    {
        returnValue = F("An der B104");
        break;
    }
    case 36612:
    {
        returnValue = F("An der B105");
        break;
    }
    case 36613:
    {
        returnValue = F("An der B105 Sülsdorf");
        break;
    }
    case 36614:
    {
        returnValue = F("An der B105 Waldeck");
        break;
    }
    case 36615:
    {
        returnValue = F("An der B105 Zarnewenz");
        break;
    }
    case 36616:
    {
        returnValue = F("An der B167");
        break;
    }
    case 36617:
    {
        returnValue = F("An der B173");
        break;
    }
    case 36618:
    {
        returnValue = F("An der B2");
        break;
    }
    case 36619:
    {
        returnValue = F("An der B213");
        break;
    }
    case 36620:
    {
        returnValue = F("An der B3");
        break;
    }
    case 36621:
    {
        returnValue = F("An der B4");
        break;
    }
    case 36622:
    {
        returnValue = F("An der B416");
        break;
    }
    case 36623:
    {
        returnValue = F("An der B5");
        break;
    }
    case 36624:
    {
        returnValue = F("An der B6");
        break;
    }
    case 36625:
    {
        returnValue = F("An der B64");
        break;
    }
    case 36626:
    {
        returnValue = F("An der B68");
        break;
    }
    case 36627:
    {
        returnValue = F("An der B84");
        break;
    }
    case 36628:
    {
        returnValue = F("An der B85");
        break;
    }
    case 36629:
    {
        returnValue = F("An der B96");
        break;
    }
    case 36630:
    {
        returnValue = F("An der BAdkaul");
        break;
    }
    case 36631:
    {
        returnValue = F("An der Babe");
        break;
    }
    case 36632:
    {
        returnValue = F("An der Bach");
        break;
    }
    case 36633:
    {
        returnValue = F("An der Bache");
        break;
    }
    case 36634:
    {
        returnValue = F("An der Bachleite");
        break;
    }
    case 36635:
    {
        returnValue = F("An der Bachleiten");
        break;
    }
    case 36636:
    {
        returnValue = F("An der Bachmühle");
        break;
    }
    case 36637:
    {
        returnValue = F("An der Bachschleife");
        break;
    }
    case 36638:
    {
        returnValue = F("An der Bachweide");
        break;
    }
    case 36639:
    {
        returnValue = F("An der Bachwiese");
        break;
    }
    case 36640:
    {
        returnValue = F("An der Backesmühle");
        break;
    }
    case 36641:
    {
        returnValue = F("An der Backhausbreite");
        break;
    }
    case 36642:
    {
        returnValue = F("An der Backhauswiese");
        break;
    }
    case 36643:
    {
        returnValue = F("An der Backstania");
        break;
    }
    case 36644:
    {
        returnValue = F("An der Bade");
        break;
    }
    case 36645:
    {
        returnValue = F("An der Badeanstalt");
        break;
    }
    case 36646:
    {
        returnValue = F("An der Badstube");
        break;
    }
    case 36647:
    {
        returnValue = F("An der Baggerkuhle");
        break;
    }
    case 36648:
    {
        returnValue = F("An der Bahn");
        break;
    }
    case 36649:
    {
        returnValue = F("An der Bahn Nord");
        break;
    }
    case 36650:
    {
        returnValue = F("An der Bahn nach Arnsdorf");
        break;
    }
    case 36651:
    {
        returnValue = F("An der Bahn nach Langebrück");
        break;
    }
    case 36652:
    {
        returnValue = F("An der Bahnbrücke");
        break;
    }
    case 36653:
    {
        returnValue = F("An der Bahnhofsallee");
        break;
    }
    case 36654:
    {
        returnValue = F("An der Bahnhofsstr.");
        break;
    }
    case 36655:
    {
        returnValue = F("An der Bahnlinie");
        break;
    }
    case 36656:
    {
        returnValue = F("An der Bahnschranke");
        break;
    }
    case 36657:
    {
        returnValue = F("An der Bahnstrecke");
        break;
    }
    case 36658:
    {
        returnValue = F("An der Bahntrasse");
        break;
    }
    case 36659:
    {
        returnValue = F("An der Bahra");
        break;
    }
    case 36660:
    {
        returnValue = F("An der Baldinger Mauer");
        break;
    }
    case 36661:
    {
        returnValue = F("An der Balge");
        break;
    }
    case 36662:
    {
        returnValue = F("An der Ballstedter Str.");
        break;
    }
    case 36663:
    {
        returnValue = F("An der Bamburg");
        break;
    }
    case 36664:
    {
        returnValue = F("An der Bannweide");
        break;
    }
    case 36665:
    {
        returnValue = F("An der Barget");
        break;
    }
    case 36666:
    {
        returnValue = F("An der Barnimer Heide");
        break;
    }
    case 36667:
    {
        returnValue = F("An der Barnitz");
        break;
    }
    case 36668:
    {
        returnValue = F("An der Barriere");
        break;
    }
    case 36669:
    {
        returnValue = F("An der Barsbek");
        break;
    }
    case 36670:
    {
        returnValue = F("An der Bashake");
        break;
    }
    case 36671:
    {
        returnValue = F("An der Basilika");
        break;
    }
    case 36672:
    {
        returnValue = F("An der Bastei");
        break;
    }
    case 36673:
    {
        returnValue = F("An der Bastenweide");
        break;
    }
    case 36674:
    {
        returnValue = F("An der Bastil");
        break;
    }
    case 36675:
    {
        returnValue = F("An der Bastion");
        break;
    }
    case 36676:
    {
        returnValue = F("An der Baueraller");
        break;
    }
    case 36677:
    {
        returnValue = F("An der Bauernwiese");
        break;
    }
    case 36678:
    {
        returnValue = F("An der Bauhecke");
        break;
    }
    case 36679:
    {
        returnValue = F("An der Baumbreite");
        break;
    }
    case 36680:
    {
        returnValue = F("An der Baumbrücke");
        break;
    }
    case 36681:
    {
        returnValue = F("An der Baumschule");
        break;
    }
    case 36682:
    {
        returnValue = F("An der Bauna");
        break;
    }
    case 36683:
    {
        returnValue = F("An der Baunach");
        break;
    }
    case 36684:
    {
        returnValue = F("An der Bayersäg");
        break;
    }
    case 36685:
    {
        returnValue = F("An der Bebberwiese");
        break;
    }
    case 36686:
    {
        returnValue = F("An der Bechau");
        break;
    }
    case 36687:
    {
        returnValue = F("An der Becke");
        break;
    }
    case 36688:
    {
        returnValue = F("An der Beeckerbrücke");
        break;
    }
    case 36689:
    {
        returnValue = F("An der Beek");
        break;
    }
    case 36690:
    {
        returnValue = F("An der Beeke");
        break;
    }
    case 36691:
    {
        returnValue = F("An der Beermahd");
        break;
    }
    case 36692:
    {
        returnValue = F("An der Beine");
        break;
    }
    case 36693:
    {
        returnValue = F("An der Beint");
        break;
    }
    case 36694:
    {
        returnValue = F("An der Beitz");
        break;
    }
    case 36695:
    {
        returnValue = F("An der Bek");
        break;
    }
    case 36696:
    {
        returnValue = F("An der Bekau");
        break;
    }
    case 36697:
    {
        returnValue = F("An der Beke");
        break;
    }
    case 36698:
    {
        returnValue = F("An der Bellekuhl");
        break;
    }
    case 36699:
    {
        returnValue = F("An der Bellevue");
        break;
    }
    case 36700:
    {
        returnValue = F("An der Belmicke");
        break;
    }
    case 36701:
    {
        returnValue = F("An der Bendenmühle");
        break;
    }
    case 36702:
    {
        returnValue = F("An der Bent");
        break;
    }
    case 36703:
    {
        returnValue = F("An der Bereiters Mühle");
        break;
    }
    case 36704:
    {
        returnValue = F("An der Berendsgrub");
        break;
    }
    case 36705:
    {
        returnValue = F("An der Bergbrauerei");
        break;
    }
    case 36706:
    {
        returnValue = F("An der Bergermauer");
        break;
    }
    case 36707:
    {
        returnValue = F("An der Berghecke");
        break;
    }
    case 36708:
    {
        returnValue = F("An der Berginspektion");
        break;
    }
    case 36709:
    {
        returnValue = F("An der Bergkette");
        break;
    }
    case 36710:
    {
        returnValue = F("An der Bergkirche");
        break;
    }
    case 36711:
    {
        returnValue = F("An der Bergkoppel");
        break;
    }
    case 36712:
    {
        returnValue = F("An der Berglehne");
        break;
    }
    case 36713:
    {
        returnValue = F("An der Bergleite");
        break;
    }
    case 36714:
    {
        returnValue = F("An der Bergmühle");
        break;
    }
    case 36715:
    {
        returnValue = F("An der Bergschenke");
        break;
    }
    case 36716:
    {
        returnValue = F("An der Bergschmiede");
        break;
    }
    case 36717:
    {
        returnValue = F("An der Bergschule");
        break;
    }
    case 36718:
    {
        returnValue = F("An der Bergstr.");
        break;
    }
    case 36719:
    {
        returnValue = F("An der Bergwiese");
        break;
    }
    case 36720:
    {
        returnValue = F("An der Berkel");
        break;
    }
    case 36721:
    {
        returnValue = F("An der Berme");
        break;
    }
    case 36722:
    {
        returnValue = F("An der Berste");
        break;
    }
    case 36723:
    {
        returnValue = F("An der Berufsschule");
        break;
    }
    case 36724:
    {
        returnValue = F("An der Betmauer");
        break;
    }
    case 36725:
    {
        returnValue = F("An der Betzenlohe");
        break;
    }
    case 36726:
    {
        returnValue = F("An der Beuche");
        break;
    }
    case 36727:
    {
        returnValue = F("An der Beule");
        break;
    }
    case 36728:
    {
        returnValue = F("An der Beune");
        break;
    }
    case 36729:
    {
        returnValue = F("An der Beuns");
        break;
    }
    case 36730:
    {
        returnValue = F("An der Beuster");
        break;
    }
    case 36731:
    {
        returnValue = F("An der Bever");
        break;
    }
    case 36732:
    {
        returnValue = F("An der Bibelskirch");
        break;
    }
    case 36733:
    {
        returnValue = F("An der Biber");
        break;
    }
    case 36734:
    {
        returnValue = F("An der Biberwiese");
        break;
    }
    case 36735:
    {
        returnValue = F("An der Bicke");
        break;
    }
    case 36736:
    {
        returnValue = F("An der Bickenalb");
        break;
    }
    case 36737:
    {
        returnValue = F("An der Bickmühle");
        break;
    }
    case 36738:
    {
        returnValue = F("An der Bieber");
        break;
    }
    case 36739:
    {
        returnValue = F("An der Bieg");
        break;
    }
    case 36740:
    {
        returnValue = F("An der Biegenwiese");
        break;
    }
    case 36741:
    {
        returnValue = F("An der Biela");
        break;
    }
    case 36742:
    {
        returnValue = F("An der Bielicke");
        break;
    }
    case 36743:
    {
        returnValue = F("An der Bietnitz");
        break;
    }
    case 36744:
    {
        returnValue = F("An der Bildeiche");
        break;
    }
    case 36745:
    {
        returnValue = F("An der Bildsaul");
        break;
    }
    case 36746:
    {
        returnValue = F("An der Bildsäule");
        break;
    }
    case 36747:
    {
        returnValue = F("An der Bille");
        break;
    }
    case 36748:
    {
        returnValue = F("An der Billerke");
        break;
    }
    case 36749:
    {
        returnValue = F("An der Billheck");
        break;
    }
    case 36750:
    {
        returnValue = F("An der Bimmelglocke");
        break;
    }
    case 36751:
    {
        returnValue = F("An der Bind");
        break;
    }
    case 36752:
    {
        returnValue = F("An der Binge");
        break;
    }
    case 36753:
    {
        returnValue = F("An der Birkach");
        break;
    }
    case 36754:
    {
        returnValue = F("An der Birkenbreite");
        break;
    }
    case 36755:
    {
        returnValue = F("An der Birkenkaute");
        break;
    }
    case 36756:
    {
        returnValue = F("An der Birkenpfuhlheide");
        break;
    }
    case 36757:
    {
        returnValue = F("An der Bismarckhöhe");
        break;
    }
    case 36758:
    {
        returnValue = F("An der Bittenhalde");
        break;
    }
    case 36759:
    {
        returnValue = F("An der Bitz");
        break;
    }
    case 36760:
    {
        returnValue = F("An der Blaiche");
        break;
    }
    case 36761:
    {
        returnValue = F("An der Blanke");
        break;
    }
    case 36762:
    {
        returnValue = F("An der Blankschmiede");
        break;
    }
    case 36763:
    {
        returnValue = F("An der Blauen Flut");
        break;
    }
    case 36764:
    {
        returnValue = F("An der Bleich");
        break;
    }
    case 36765:
    {
        returnValue = F("An der Bleiche");
        break;
    }
    case 36766:
    {
        returnValue = F("An der Bleicherei");
        break;
    }
    case 36767:
    {
        returnValue = F("An der Bleichwiese");
        break;
    }
    case 36768:
    {
        returnValue = F("An der Blenk");
        break;
    }
    case 36769:
    {
        returnValue = F("An der Blindschleiche");
        break;
    }
    case 36770:
    {
        returnValue = F("An der Blink");
        break;
    }
    case 36771:
    {
        returnValue = F("An der Blinke");
        break;
    }
    case 36772:
    {
        returnValue = F("An der Blockhütte");
        break;
    }
    case 36773:
    {
        returnValue = F("An der Blume");
        break;
    }
    case 36774:
    {
        returnValue = F("An der Blumenaue");
        break;
    }
    case 36775:
    {
        returnValue = F("An der Blumenkapelle");
        break;
    }
    case 36776:
    {
        returnValue = F("An der Blumenwiese");
        break;
    }
    case 36777:
    {
        returnValue = F("An der Blöße");
        break;
    }
    case 36778:
    {
        returnValue = F("An der Bobek");
        break;
    }
    case 36779:
    {
        returnValue = F("An der Bockbek");
        break;
    }
    case 36780:
    {
        returnValue = F("An der Bockmühle");
        break;
    }
    case 36781:
    {
        returnValue = F("An der Bockwiese");
        break;
    }
    case 36782:
    {
        returnValue = F("An der Bode");
        break;
    }
    case 36783:
    {
        returnValue = F("An der Bodlitz");
        break;
    }
    case 36784:
    {
        returnValue = F("An der Bogjama");
        break;
    }
    case 36785:
    {
        returnValue = F("An der Bohle");
        break;
    }
    case 36786:
    {
        returnValue = F("An der Boikenhorst");
        break;
    }
    case 36787:
    {
        returnValue = F("An der Boind");
        break;
    }
    case 36788:
    {
        returnValue = F("An der Bokemühle");
        break;
    }
    case 36789:
    {
        returnValue = F("An der Bollenkoppel");
        break;
    }
    case 36790:
    {
        returnValue = F("An der Bonifatiuskapelle");
        break;
    }
    case 36791:
    {
        returnValue = F("An der Bonifatiusschule");
        break;
    }
    case 36792:
    {
        returnValue = F("An der Bonnstr.");
        break;
    }
    case 36793:
    {
        returnValue = F("An der Bootfahrt");
        break;
    }
    case 36794:
    {
        returnValue = F("An der Bordwiese");
        break;
    }
    case 36795:
    {
        returnValue = F("An der Borg");
        break;
    }
    case 36796:
    {
        returnValue = F("An der Bornau");
        break;
    }
    case 36797:
    {
        returnValue = F("An der Borner Mühle");
        break;
    }
    case 36798:
    {
        returnValue = F("An der Borngasse");
        break;
    }
    case 36799:
    {
        returnValue = F("An der Bornhecke");
        break;
    }
    case 36800:
    {
        returnValue = F("An der Bornkappe");
        break;
    }
    case 36801:
    {
        returnValue = F("An der Bornmühle");
        break;
    }
    case 36802:
    {
        returnValue = F("An der Bornste");
        break;
    }
    case 36803:
    {
        returnValue = F("An der Borntelle");
        break;
    }
    case 36804:
    {
        returnValue = F("An der Bornwiese");
        break;
    }
    case 36805:
    {
        returnValue = F("An der Boy");
        break;
    }
    case 36806:
    {
        returnValue = F("An der Brache");
        break;
    }
    case 36807:
    {
        returnValue = F("An der Bracht");
        break;
    }
    case 36808:
    {
        returnValue = F("An der Bracke");
        break;
    }
    case 36809:
    {
        returnValue = F("An der Brahmsche");
        break;
    }
    case 36810:
    {
        returnValue = F("An der Brake");
        break;
    }
    case 36811:
    {
        returnValue = F("An der Bramo");
        break;
    }
    case 36812:
    {
        returnValue = F("An der Brand");
        break;
    }
    case 36813:
    {
        returnValue = F("An der Brandenburg");
        break;
    }
    case 36814:
    {
        returnValue = F("An der Brandheide");
        break;
    }
    case 36815:
    {
        returnValue = F("An der Brandshütte");
        break;
    }
    case 36816:
    {
        returnValue = F("An der Brandwiese");
        break;
    }
    case 36817:
    {
        returnValue = F("An der Bratpfanne");
        break;
    }
    case 36818:
    {
        returnValue = F("An der Brauerei");
        break;
    }
    case 36819:
    {
        returnValue = F("An der Brauerwiese");
        break;
    }
    case 36820:
    {
        returnValue = F("An der Brauke");
        break;
    }
    case 36821:
    {
        returnValue = F("An der Braunau");
        break;
    }
    case 36822:
    {
        returnValue = F("An der Brechdarre");
        break;
    }
    case 36823:
    {
        returnValue = F("An der Breche");
        break;
    }
    case 36824:
    {
        returnValue = F("An der Brechkaut");
        break;
    }
    case 36825:
    {
        returnValue = F("An der Bredde");
        break;
    }
    case 36826:
    {
        returnValue = F("An der Bredenbeeke");
        break;
    }
    case 36827:
    {
        returnValue = F("An der Bredenbek");
        break;
    }
    case 36828:
    {
        returnValue = F("An der Bree");
        break;
    }
    case 36829:
    {
        returnValue = F("An der Breede");
        break;
    }
    case 36830:
    {
        returnValue = F("An der Brehnaer Str.");
        break;
    }
    case 36831:
    {
        returnValue = F("An der Breie");
        break;
    }
    case 36832:
    {
        returnValue = F("An der Breien");
        break;
    }
    case 36833:
    {
        returnValue = F("An der Breite");
        break;
    }
    case 36834:
    {
        returnValue = F("An der Breiten");
        break;
    }
    case 36835:
    {
        returnValue = F("An der Breitheck");
        break;
    }
    case 36836:
    {
        returnValue = F("An der Breitung");
        break;
    }
    case 36837:
    {
        returnValue = F("An der Breitwiese");
        break;
    }
    case 36838:
    {
        returnValue = F("An der Bremke");
        break;
    }
    case 36839:
    {
        returnValue = F("An der Brennerei");
        break;
    }
    case 36840:
    {
        returnValue = F("An der Bretonenbrücke");
        break;
    }
    case 36841:
    {
        returnValue = F("An der Brettig");
        break;
    }
    case 36842:
    {
        returnValue = F("An der Brey");
        break;
    }
    case 36843:
    {
        returnValue = F("An der Brie");
        break;
    }
    case 36844:
    {
        returnValue = F("An der Brielower Aue");
        break;
    }
    case 36845:
    {
        returnValue = F("An der Bringenburg");
        break;
    }
    case 36846:
    {
        returnValue = F("An der Brink");
        break;
    }
    case 36847:
    {
        returnValue = F("An der Brotge");
        break;
    }
    case 36848:
    {
        returnValue = F("An der Bruchgrenze");
        break;
    }
    case 36849:
    {
        returnValue = F("An der Bruchkrepp");
        break;
    }
    case 36850:
    {
        returnValue = F("An der Bruchmühle");
        break;
    }
    case 36851:
    {
        returnValue = F("An der Bruchriede");
        break;
    }
    case 36852:
    {
        returnValue = F("An der Bruchwiese");
        break;
    }
    case 36853:
    {
        returnValue = F("An der Bruckmühle");
        break;
    }
    case 36854:
    {
        returnValue = F("An der Brunnengasse");
        break;
    }
    case 36855:
    {
        returnValue = F("An der Brunnenkunst");
        break;
    }
    case 36856:
    {
        returnValue = F("An der Brunnenmühle");
        break;
    }
    case 36857:
    {
        returnValue = F("An der Brunnenstr.");
        break;
    }
    case 36858:
    {
        returnValue = F("An der Brunnenstube");
        break;
    }
    case 36859:
    {
        returnValue = F("An der Brunnenwiese");
        break;
    }
    case 36860:
    {
        returnValue = F("An der Brunnsteige");
        break;
    }
    case 36861:
    {
        returnValue = F("An der Brutsche");
        break;
    }
    case 36862:
    {
        returnValue = F("An der Bräukapelle");
        break;
    }
    case 36863:
    {
        returnValue = F("An der Bräunegrube");
        break;
    }
    case 36864:
    {
        returnValue = F("An der Brücke");
        break;
    }
    case 36865:
    {
        returnValue = F("An der Brückenecke");
        break;
    }
    case 36866:
    {
        returnValue = F("An der Brückenmühle");
        break;
    }
    case 36867:
    {
        returnValue = F("An der Brückmühle");
        break;
    }
    case 36868:
    {
        returnValue = F("An der Brückwiese");
        break;
    }
    case 36869:
    {
        returnValue = F("An der Bschlacht");
        break;
    }
    case 36870:
    {
        returnValue = F("An der Bubenklinge");
        break;
    }
    case 36871:
    {
        returnValue = F("An der Bublika");
        break;
    }
    case 36872:
    {
        returnValue = F("An der Buch");
        break;
    }
    case 36873:
    {
        returnValue = F("An der Buche");
        break;
    }
    case 36874:
    {
        returnValue = F("An der Buchenhecke");
        break;
    }
    case 36875:
    {
        returnValue = F("An der Buchfarter Str.");
        break;
    }
    case 36876:
    {
        returnValue = F("An der Buchhalde");
        break;
    }
    case 36877:
    {
        returnValue = F("An der Buchmühle");
        break;
    }
    case 36878:
    {
        returnValue = F("An der Bucht");
        break;
    }
    case 36879:
    {
        returnValue = F("An der Buchwiese");
        break;
    }
    case 36880:
    {
        returnValue = F("An der Buddemühle");
        break;
    }
    case 36881:
    {
        returnValue = F("An der Bues");
        break;
    }
    case 36882:
    {
        returnValue = F("An der Buhle");
        break;
    }
    case 36883:
    {
        returnValue = F("An der Buke");
        break;
    }
    case 36884:
    {
        returnValue = F("An der Bullermühle");
        break;
    }
    case 36885:
    {
        returnValue = F("An der Bullungsburg");
        break;
    }
    case 36886:
    {
        returnValue = F("An der Bult");
        break;
    }
    case 36887:
    {
        returnValue = F("An der Bummelse");
        break;
    }
    case 36888:
    {
        returnValue = F("An der Bundesautobahn");
        break;
    }
    case 36889:
    {
        returnValue = F("An der Bundesbahn");
        break;
    }
    case 36890:
    {
        returnValue = F("An der Bundesstr.");
        break;
    }
    case 36891:
    {
        returnValue = F("An der Bundesstr. 209");
        break;
    }
    case 36892:
    {
        returnValue = F("An der Bundesstr. 5");
        break;
    }
    case 36893:
    {
        returnValue = F("An der Burbek");
        break;
    }
    case 36894:
    {
        returnValue = F("An der Burdenow");
        break;
    }
    case 36895:
    {
        returnValue = F("An der Burg");
        break;
    }
    case 36896:
    {
        returnValue = F("An der Burg Katz");
        break;
    }
    case 36897:
    {
        returnValue = F("An der Burgbergkapelle");
        break;
    }
    case 36898:
    {
        returnValue = F("An der Burgbreite");
        break;
    }
    case 36899:
    {
        returnValue = F("An der Burgenwand");
        break;
    }
    case 36900:
    {
        returnValue = F("An der Burgkapelle");
        break;
    }
    case 36901:
    {
        returnValue = F("An der Burgkirche");
        break;
    }
    case 36902:
    {
        returnValue = F("An der Burgkoppel");
        break;
    }
    case 36903:
    {
        returnValue = F("An der Burgmühle");
        break;
    }
    case 36904:
    {
        returnValue = F("An der Burgpforte");
        break;
    }
    case 36905:
    {
        returnValue = F("An der Burgschule");
        break;
    }
    case 36906:
    {
        returnValue = F("An der Burstehe");
        break;
    }
    case 36907:
    {
        returnValue = F("An der Buschkate");
        break;
    }
    case 36908:
    {
        returnValue = F("An der Buschkiete");
        break;
    }
    case 36909:
    {
        returnValue = F("An der Buschkoppel");
        break;
    }
    case 36910:
    {
        returnValue = F("An der Buschmühle");
        break;
    }
    case 36911:
    {
        returnValue = F("An der Buschwiese");
        break;
    }
    case 36912:
    {
        returnValue = F("An der Bust");
        break;
    }
    case 36913:
    {
        returnValue = F("An der Butterburg");
        break;
    }
    case 36914:
    {
        returnValue = F("An der Butterleithe");
        break;
    }
    case 36915:
    {
        returnValue = F("An der Butterwelle");
        break;
    }
    case 36916:
    {
        returnValue = F("An der Butz");
        break;
    }
    case 36917:
    {
        returnValue = F("An der Bäckerei");
        break;
    }
    case 36918:
    {
        returnValue = F("An der Bäckermühle");
        break;
    }
    case 36919:
    {
        returnValue = F("An der Bäderstr.");
        break;
    }
    case 36920:
    {
        returnValue = F("An der Bäk");
        break;
    }
    case 36921:
    {
        returnValue = F("An der Bäke");
        break;
    }
    case 36922:
    {
        returnValue = F("An der Bära");
        break;
    }
    case 36923:
    {
        returnValue = F("An der Bärburg");
        break;
    }
    case 36924:
    {
        returnValue = F("An der Bärenhecke");
        break;
    }
    case 36925:
    {
        returnValue = F("An der Bärenleite");
        break;
    }
    case 36926:
    {
        returnValue = F("An der Bärenwiese");
        break;
    }
    case 36927:
    {
        returnValue = F("An der Bärnwiese");
        break;
    }
    case 36928:
    {
        returnValue = F("An der Bäun");
        break;
    }
    case 36929:
    {
        returnValue = F("An der Böhke");
        break;
    }
    case 36930:
    {
        returnValue = F("An der Böke");
        break;
    }
    case 36931:
    {
        returnValue = F("An der Böll");
        break;
    }
    case 36932:
    {
        returnValue = F("An der Börne");
        break;
    }
    case 36933:
    {
        returnValue = F("An der Börning");
        break;
    }
    case 36934:
    {
        returnValue = F("An der Börse");
        break;
    }
    case 36935:
    {
        returnValue = F("An der Büchelsbach");
        break;
    }
    case 36936:
    {
        returnValue = F("An der Bücke");
        break;
    }
    case 36937:
    {
        returnValue = F("An der Büdnerei");
        break;
    }
    case 36938:
    {
        returnValue = F("An der Bühler");
        break;
    }
    case 36939:
    {
        returnValue = F("An der Bülte");
        break;
    }
    case 36940:
    {
        returnValue = F("An der Bünd");
        break;
    }
    case 36941:
    {
        returnValue = F("An der Bünne");
        break;
    }
    case 36942:
    {
        returnValue = F("An der Bünte");
        break;
    }
    case 36943:
    {
        returnValue = F("An der Bürgel");
        break;
    }
    case 36944:
    {
        returnValue = F("An der Bürgerheide");
        break;
    }
    case 36945:
    {
        returnValue = F("An der Bürgerreuth");
        break;
    }
    case 36946:
    {
        returnValue = F("An der Bürgerruhe");
        break;
    }
    case 36947:
    {
        returnValue = F("An der Bürgerweide");
        break;
    }
    case 36948:
    {
        returnValue = F("An der Büttenwiese");
        break;
    }
    case 36949:
    {
        returnValue = F("An der Büttnerwiese");
        break;
    }
    case 36950:
    {
        returnValue = F("An der Calle");
        break;
    }
    case 36951:
    {
        returnValue = F("An der Capelle");
        break;
    }
    case 36952:
    {
        returnValue = F("An der Celler Bahn");
        break;
    }
    case 36953:
    {
        returnValue = F("An der Cent");
        break;
    }
    case 36954:
    {
        returnValue = F("An der Centleite");
        break;
    }
    case 36955:
    {
        returnValue = F("An der Charlottenhöhe");
        break;
    }
    case 36956:
    {
        returnValue = F("An der Chauseè");
        break;
    }
    case 36957:
    {
        returnValue = F("An der Chaussee");
        break;
    }
    case 36958:
    {
        returnValue = F("An der Christoph-Bernhard-Bastei");
        break;
    }
    case 36959:
    {
        returnValue = F("An der Christuskirche");
        break;
    }
    case 36960:
    {
        returnValue = F("An der Coburger Str.");
        break;
    }
    case 36961:
    {
        returnValue = F("An der Commende");
        break;
    }
    case 36962:
    {
        returnValue = F("An der Concordiahütte");
        break;
    }
    case 36963:
    {
        returnValue = F("An der Creußen");
        break;
    }
    case 36964:
    {
        returnValue = F("An der Crivitzer Chaussee");
        break;
    }
    case 36965:
    {
        returnValue = F("An der Crossbahn");
        break;
    }
    case 36966:
    {
        returnValue = F("An der Crostewitzer Höhe");
        break;
    }
    case 36967:
    {
        returnValue = F("An der Cöllmsmühle");
        break;
    }
    case 36968:
    {
        returnValue = F("An der Dabernack");
        break;
    }
    case 36969:
    {
        returnValue = F("An der Dahle");
        break;
    }
    case 36970:
    {
        returnValue = F("An der Dahlenmühle");
        break;
    }
    case 36971:
    {
        returnValue = F("An der Dahlewitzer Heide");
        break;
    }
    case 36972:
    {
        returnValue = F("An der Dahme");
        break;
    }
    case 36973:
    {
        returnValue = F("An der Dahmebrücke");
        break;
    }
    case 36974:
    {
        returnValue = F("An der Dalbach");
        break;
    }
    case 36975:
    {
        returnValue = F("An der Dallmühle");
        break;
    }
    case 36976:
    {
        returnValue = F("An der Dammühle");
        break;
    }
    case 36977:
    {
        returnValue = F("An der Dampfmühle");
        break;
    }
    case 36978:
    {
        returnValue = F("An der Dannemicke");
        break;
    }
    case 36979:
    {
        returnValue = F("An der Darmstädter Str.");
        break;
    }
    case 36980:
    {
        returnValue = F("An der Darre");
        break;
    }
    case 36981:
    {
        returnValue = F("An der Dechsel");
        break;
    }
    case 36982:
    {
        returnValue = F("An der Dehne");
        break;
    }
    case 36983:
    {
        returnValue = F("An der Deichgrube");
        break;
    }
    case 36984:
    {
        returnValue = F("An der Deichlücke");
        break;
    }
    case 36985:
    {
        returnValue = F("An der Deininger Mauer");
        break;
    }
    case 36986:
    {
        returnValue = F("An der Dell");
        break;
    }
    case 36987:
    {
        returnValue = F("An der Delle");
        break;
    }
    case 36988:
    {
        returnValue = F("An der Deponie");
        break;
    }
    case 36989:
    {
        returnValue = F("An der Deutenhofkapelle");
        break;
    }
    case 36990:
    {
        returnValue = F("An der Dhünn");
        break;
    }
    case 36991:
    {
        returnValue = F("An der Diana");
        break;
    }
    case 36992:
    {
        returnValue = F("An der Dick");
        break;
    }
    case 36993:
    {
        returnValue = F("An der Dicken Eiche");
        break;
    }
    case 36994:
    {
        returnValue = F("An der Dicken Linde");
        break;
    }
    case 36995:
    {
        returnValue = F("An der Diekworth");
        break;
    }
    case 36996:
    {
        returnValue = F("An der Diemel");
        break;
    }
    case 36997:
    {
        returnValue = F("An der Dieße");
        break;
    }
    case 36998:
    {
        returnValue = F("An der Dillebirk");
        break;
    }
    case 36999:
    {
        returnValue = F("An der Dillenburg");
        break;
    }
    case 37000:
    {
        returnValue = F("An der Dingelstätte");
        break;
    }
    case 37001:
    {
        returnValue = F("An der Dingstelle");
        break;
    }
    case 37002:
    {
        returnValue = F("An der Distelburg");
        break;
    }
    case 37003:
    {
        returnValue = F("An der Distelliete");
        break;
    }
    case 37004:
    {
        returnValue = F("An der Dittersdorfer Höhe");
        break;
    }
    case 37005:
    {
        returnValue = F("An der Dittfuhrt");
        break;
    }
    case 37006:
    {
        returnValue = F("An der Dobachquelle");
        break;
    }
    case 37007:
    {
        returnValue = F("An der Dobelbreite");
        break;
    }
    case 37008:
    {
        returnValue = F("An der Dohlmühle");
        break;
    }
    case 37009:
    {
        returnValue = F("An der Dommelmühle");
        break;
    }
    case 37010:
    {
        returnValue = F("An der Domsühler Str.");
        break;
    }
    case 37011:
    {
        returnValue = F("An der Domäne");
        break;
    }
    case 37012:
    {
        returnValue = F("An der Donau");
        break;
    }
    case 37013:
    {
        returnValue = F("An der Donauhalle");
        break;
    }
    case 37014:
    {
        returnValue = F("An der Doppeleiche");
        break;
    }
    case 37015:
    {
        returnValue = F("An der Doppheide");
        break;
    }
    case 37016:
    {
        returnValue = F("An der Dorbek");
        break;
    }
    case 37017:
    {
        returnValue = F("An der Dorenburg");
        break;
    }
    case 37018:
    {
        returnValue = F("An der Dorfaue");
        break;
    }
    case 37019:
    {
        returnValue = F("An der Dorfbreite");
        break;
    }
    case 37020:
    {
        returnValue = F("An der Dorfbrücke");
        break;
    }
    case 37021:
    {
        returnValue = F("An der Dorfkirche");
        break;
    }
    case 37022:
    {
        returnValue = F("An der Dorflinde");
        break;
    }
    case 37023:
    {
        returnValue = F("An der Dorfmauer");
        break;
    }
    case 37024:
    {
        returnValue = F("An der Dorfmühle");
        break;
    }
    case 37025:
    {
        returnValue = F("An der Dorfquelle");
        break;
    }
    case 37026:
    {
        returnValue = F("An der Dorfschule");
        break;
    }
    case 37027:
    {
        returnValue = F("An der Dorfstr.");
        break;
    }
    case 37028:
    {
        returnValue = F("An der Dorfstätte");
        break;
    }
    case 37029:
    {
        returnValue = F("An der Dorfwiese");
        break;
    }
    case 37030:
    {
        returnValue = F("An der Dorndelle");
        break;
    }
    case 37031:
    {
        returnValue = F("An der Dornebbe");
        break;
    }
    case 37032:
    {
        returnValue = F("An der Dornhecke");
        break;
    }
    case 37033:
    {
        returnValue = F("An der Dornheide");
        break;
    }
    case 37034:
    {
        returnValue = F("An der Dornwiese");
        break;
    }
    case 37035:
    {
        returnValue = F("An der Dornzeile");
        break;
    }
    case 37036:
    {
        returnValue = F("An der Dorothea");
        break;
    }
    case 37037:
    {
        returnValue = F("An der Dorpke");
        break;
    }
    case 37038:
    {
        returnValue = F("An der Dostel");
        break;
    }
    case 37039:
    {
        returnValue = F("An der Drahtseilbahn");
        break;
    }
    case 37040:
    {
        returnValue = F("An der Drahtwiese");
        break;
    }
    case 37041:
    {
        returnValue = F("An der Draisine");
        break;
    }
    case 37042:
    {
        returnValue = F("An der Dramme");
        break;
    }
    case 37043:
    {
        returnValue = F("An der Dreesche");
        break;
    }
    case 37044:
    {
        returnValue = F("An der Drehbank");
        break;
    }
    case 37045:
    {
        returnValue = F("An der Drehe");
        break;
    }
    case 37046:
    {
        returnValue = F("An der Drehscheibe");
        break;
    }
    case 37047:
    {
        returnValue = F("An der Dreieichenröhr");
        break;
    }
    case 37048:
    {
        returnValue = F("An der Dreifaltigkeit");
        break;
    }
    case 37049:
    {
        returnValue = F("An der Dreihofstr.");
        break;
    }
    case 37050:
    {
        returnValue = F("An der Dreispitz");
        break;
    }
    case 37051:
    {
        returnValue = F("An der Dreschhalle");
        break;
    }
    case 37052:
    {
        returnValue = F("An der Drift");
        break;
    }
    case 37053:
    {
        returnValue = F("An der Drille");
        break;
    }
    case 37054:
    {
        returnValue = F("An der Drossenwiese");
        break;
    }
    case 37055:
    {
        returnValue = F("An der Droth");
        break;
    }
    case 37056:
    {
        returnValue = F("An der Droßlach");
        break;
    }
    case 37057:
    {
        returnValue = F("An der Druckerei");
        break;
    }
    case 37058:
    {
        returnValue = F("An der Dränke");
        break;
    }
    case 37059:
    {
        returnValue = F("An der Drüghweide");
        break;
    }
    case 37060:
    {
        returnValue = F("An der Dubrow");
        break;
    }
    case 37061:
    {
        returnValue = F("An der Dudeseite");
        break;
    }
    case 37062:
    {
        returnValue = F("An der Dunsthöhle");
        break;
    }
    case 37063:
    {
        returnValue = F("An der Dölle");
        break;
    }
    case 37064:
    {
        returnValue = F("An der Döllnitz");
        break;
    }
    case 37065:
    {
        returnValue = F("An der Dörbrake");
        break;
    }
    case 37066:
    {
        returnValue = F("An der Dörnte");
        break;
    }
    case 37067:
    {
        returnValue = F("An der Dörrwiese");
        break;
    }
    case 37068:
    {
        returnValue = F("An der Dörspe");
        break;
    }
    case 37069:
    {
        returnValue = F("An der Dümme");
        break;
    }
    case 37070:
    {
        returnValue = F("An der Düne");
        break;
    }
    case 37071:
    {
        returnValue = F("An der Dünung");
        break;
    }
    case 37072:
    {
        returnValue = F("An der Düpenau");
        break;
    }
    case 37073:
    {
        returnValue = F("An der Dürre Schönberg");
        break;
    }
    case 37074:
    {
        returnValue = F("An der Düsburg");
        break;
    }
    case 37075:
    {
        returnValue = F("An der Düssel");
        break;
    }
    case 37076:
    {
        returnValue = F("An der Ebbecke");
        break;
    }
    case 37077:
    {
        returnValue = F("An der Eben");
        break;
    }
    case 37078:
    {
        returnValue = F("An der Ebrach");
        break;
    }
    case 37079:
    {
        returnValue = F("An der Echaz");
        break;
    }
    case 37080:
    {
        returnValue = F("An der Eck");
        break;
    }
    case 37081:
    {
        returnValue = F("An der Ecke");
        break;
    }
    case 37082:
    {
        returnValue = F("An der Eckerkaul");
        break;
    }
    case 37083:
    {
        returnValue = F("An der Eckhalde");
        break;
    }
    case 37084:
    {
        returnValue = F("An der Eckwisch");
        break;
    }
    case 37085:
    {
        returnValue = F("An der Edder");
        break;
    }
    case 37086:
    {
        returnValue = F("An der Edelhofgasse");
        break;
    }
    case 37087:
    {
        returnValue = F("An der Eder");
        break;
    }
    case 37088:
    {
        returnValue = F("An der Edertalschule");
        break;
    }
    case 37089:
    {
        returnValue = F("An der Efze");
        break;
    }
    case 37090:
    {
        returnValue = F("An der Egau");
        break;
    }
    case 37091:
    {
        returnValue = F("An der Eger");
        break;
    }
    case 37092:
    {
        returnValue = F("An der Egge");
        break;
    }
    case 37093:
    {
        returnValue = F("An der Ehmsenkoppel");
        break;
    }
    case 37094:
    {
        returnValue = F("An der Ehwende");
        break;
    }
    case 37095:
    {
        returnValue = F("An der Eich");
        break;
    }
    case 37096:
    {
        returnValue = F("An der Eichbrücke");
        break;
    }
    case 37097:
    {
        returnValue = F("An der Eiche");
        break;
    }
    case 37098:
    {
        returnValue = F("An der Eichelfahrt");
        break;
    }
    case 37099:
    {
        returnValue = F("An der Eichenallee");
        break;
    }
    case 37100:
    {
        returnValue = F("An der Eichenmühle");
        break;
    }
    case 37101:
    {
        returnValue = F("An der Eichfeldstr.");
        break;
    }
    case 37102:
    {
        returnValue = F("An der Eichhalde");
        break;
    }
    case 37103:
    {
        returnValue = F("An der Eichheide");
        break;
    }
    case 37104:
    {
        returnValue = F("An der Eichhelle");
        break;
    }
    case 37105:
    {
        returnValue = F("An der Eichleite");
        break;
    }
    case 37106:
    {
        returnValue = F("An der Eichmühle");
        break;
    }
    case 37107:
    {
        returnValue = F("An der Eichspitze");
        break;
    }
    case 37108:
    {
        returnValue = F("An der Eick");
        break;
    }
    case 37109:
    {
        returnValue = F("An der Eider");
        break;
    }
    case 37110:
    {
        returnValue = F("An der Eie");
        break;
    }
    case 37111:
    {
        returnValue = F("An der Eilenburger Landstr.");
        break;
    }
    case 37112:
    {
        returnValue = F("An der Eilshorst");
        break;
    }
    case 37113:
    {
        returnValue = F("An der Eilwettern");
        break;
    }
    case 37114:
    {
        returnValue = F("An der Einigkeit");
        break;
    }
    case 37115:
    {
        returnValue = F("An der Eisbahn");
        break;
    }
    case 37116:
    {
        returnValue = F("An der Eisenbahn");
        break;
    }
    case 37117:
    {
        returnValue = F("An der Eisenbahnstr.");
        break;
    }
    case 37118:
    {
        returnValue = F("An der Eisenberger Str.");
        break;
    }
    case 37119:
    {
        returnValue = F("An der Eisengrube");
        break;
    }
    case 37120:
    {
        returnValue = F("An der Eisenhütte");
        break;
    }
    case 37121:
    {
        returnValue = F("An der Eisenkaut");
        break;
    }
    case 37122:
    {
        returnValue = F("An der Eisenschmelze");
        break;
    }
    case 37123:
    {
        returnValue = F("An der Eisernen Brück");
        break;
    }
    case 37124:
    {
        returnValue = F("An der Eiskuhle");
        break;
    }
    case 37125:
    {
        returnValue = F("An der Eislebener Str.");
        break;
    }
    case 37126:
    {
        returnValue = F("An der Eismiete");
        break;
    }
    case 37127:
    {
        returnValue = F("An der Eiswiese");
        break;
    }
    case 37128:
    {
        returnValue = F("An der Eiter");
        break;
    }
    case 37129:
    {
        returnValue = F("An der Elbaue");
        break;
    }
    case 37130:
    {
        returnValue = F("An der Elbbrücke");
        break;
    }
    case 37131:
    {
        returnValue = F("An der Elbe");
        break;
    }
    case 37132:
    {
        returnValue = F("An der Elde");
        break;
    }
    case 37133:
    {
        returnValue = F("An der Elle");
        break;
    }
    case 37134:
    {
        returnValue = F("An der Ellenbäke");
        break;
    }
    case 37135:
    {
        returnValue = F("An der Eller");
        break;
    }
    case 37136:
    {
        returnValue = F("An der Ellgauer Str.");
        break;
    }
    case 37137:
    {
        returnValue = F("An der Elsche");
        break;
    }
    case 37138:
    {
        returnValue = F("An der Else");
        break;
    }
    case 37139:
    {
        returnValue = F("An der Elsemühle");
        break;
    }
    case 37140:
    {
        returnValue = F("An der Elsenz");
        break;
    }
    case 37141:
    {
        returnValue = F("An der Elsmaar");
        break;
    }
    case 37142:
    {
        returnValue = F("An der Elster");
        break;
    }
    case 37143:
    {
        returnValue = F("An der Elsteraue");
        break;
    }
    case 37144:
    {
        returnValue = F("An der Elstermühle");
        break;
    }
    case 37145:
    {
        returnValue = F("An der Elte");
        break;
    }
    case 37146:
    {
        returnValue = F("An der Elz");
        break;
    }
    case 37147:
    {
        returnValue = F("An der Embsmühle");
        break;
    }
    case 37148:
    {
        returnValue = F("An der Emde");
        break;
    }
    case 37149:
    {
        returnValue = F("An der Emmauskirche");
        break;
    }
    case 37150:
    {
        returnValue = F("An der Emmener Mühle");
        break;
    }
    case 37151:
    {
        returnValue = F("An der Ems");
        break;
    }
    case 37152:
    {
        returnValue = F("An der Emsbrücke");
        break;
    }
    case 37153:
    {
        returnValue = F("An der Emse");
        break;
    }
    case 37154:
    {
        returnValue = F("An der Emsmühle");
        break;
    }
    case 37155:
    {
        returnValue = F("An der Emte");
        break;
    }
    case 37156:
    {
        returnValue = F("An der Endert");
        break;
    }
    case 37157:
    {
        returnValue = F("An der Engelsburg");
        break;
    }
    case 37158:
    {
        returnValue = F("An der Enggasse");
        break;
    }
    case 37159:
    {
        returnValue = F("An der Entenglupe");
        break;
    }
    case 37160:
    {
        returnValue = F("An der Enz");
        break;
    }
    case 37161:
    {
        returnValue = F("An der Erbkornmühle");
        break;
    }
    case 37162:
    {
        returnValue = F("An der Erdinger Str.");
        break;
    }
    case 37163:
    {
        returnValue = F("An der Erdkuhle");
        break;
    }
    case 37164:
    {
        returnValue = F("An der Eremitage");
        break;
    }
    case 37165:
    {
        returnValue = F("An der Erfurter Str.");
        break;
    }
    case 37166:
    {
        returnValue = F("An der Erholung");
        break;
    }
    case 37167:
    {
        returnValue = F("An der Erk");
        break;
    }
    case 37168:
    {
        returnValue = F("An der Erl");
        break;
    }
    case 37169:
    {
        returnValue = F("An der Erle");
        break;
    }
    case 37170:
    {
        returnValue = F("An der Erlenmühle");
        break;
    }
    case 37171:
    {
        returnValue = F("An der Erlwiese");
        break;
    }
    case 37172:
    {
        returnValue = F("An der Ernst-Reuter-Schule");
        break;
    }
    case 37173:
    {
        returnValue = F("An der Erpe");
        break;
    }
    case 37174:
    {
        returnValue = F("An der Erthalhalle");
        break;
    }
    case 37175:
    {
        returnValue = F("An der Erzgrube");
        break;
    }
    case 37176:
    {
        returnValue = F("An der Erzkaut");
        break;
    }
    case 37177:
    {
        returnValue = F("An der Erzwäsche");
        break;
    }
    case 37178:
    {
        returnValue = F("An der Esch");
        break;
    }
    case 37179:
    {
        returnValue = F("An der Eschbach");
        break;
    }
    case 37180:
    {
        returnValue = F("An der Esche");
        break;
    }
    case 37181:
    {
        returnValue = F("An der Eschenbreite");
        break;
    }
    case 37182:
    {
        returnValue = F("An der Escherwiese");
        break;
    }
    case 37183:
    {
        returnValue = F("An der Eschweide");
        break;
    }
    case 37184:
    {
        returnValue = F("An der Eselswiese");
        break;
    }
    case 37185:
    {
        returnValue = F("An der Esha Strasse");
        break;
    }
    case 37186:
    {
        returnValue = F("An der Espe");
        break;
    }
    case 37187:
    {
        returnValue = F("An der Esse");
        break;
    }
    case 37188:
    {
        returnValue = F("An der Essel");
        break;
    }
    case 37189:
    {
        returnValue = F("An der Este");
        break;
    }
    case 37190:
    {
        returnValue = F("An der Eterna");
        break;
    }
    case 37191:
    {
        returnValue = F("An der Etzweide");
        break;
    }
    case 37192:
    {
        returnValue = F("An der Etzwiese");
        break;
    }
    case 37193:
    {
        returnValue = F("An der Eulenburg");
        break;
    }
    case 37194:
    {
        returnValue = F("An der Eulenmühle");
        break;
    }
    case 37195:
    {
        returnValue = F("An der Evangelischen Kirche");
        break;
    }
    case 37196:
    {
        returnValue = F("An der Evgl. Kirche");
        break;
    }
    case 37197:
    {
        returnValue = F("An der Eyb");
        break;
    }
    case 37198:
    {
        returnValue = F("An der Eye");
        break;
    }
    case 37199:
    {
        returnValue = F("An der Eyller Schanz");
        break;
    }
    case 37200:
    {
        returnValue = F("An der Eyter");
        break;
    }
    case 37201:
    {
        returnValue = F("An der Fabrik");
        break;
    }
    case 37202:
    {
        returnValue = F("An der Fagnitz");
        break;
    }
    case 37203:
    {
        returnValue = F("An der Fahrenbrach");
        break;
    }
    case 37204:
    {
        returnValue = F("An der Fahrrinne");
        break;
    }
    case 37205:
    {
        returnValue = F("An der Fahrt");
        break;
    }
    case 37206:
    {
        returnValue = F("An der Falkenlei");
        break;
    }
    case 37207:
    {
        returnValue = F("An der Falkenstr.");
        break;
    }
    case 37208:
    {
        returnValue = F("An der Falkenwiese");
        break;
    }
    case 37209:
    {
        returnValue = F("An der Falterbreite");
        break;
    }
    case 37210:
    {
        returnValue = F("An der Farbmühle");
        break;
    }
    case 37211:
    {
        returnValue = F("An der Fasanerie");
        break;
    }
    case 37212:
    {
        returnValue = F("An der Faulweide");
        break;
    }
    case 37213:
    {
        returnValue = F("An der Federhecke");
        break;
    }
    case 37214:
    {
        returnValue = F("An der Fegetasche");
        break;
    }
    case 37215:
    {
        returnValue = F("An der Fehdenwiese");
        break;
    }
    case 37216:
    {
        returnValue = F("An der Fehla");
        break;
    }
    case 37217:
    {
        returnValue = F("An der Fehnkaserne");
        break;
    }
    case 37218:
    {
        returnValue = F("An der Fehrn");
        break;
    }
    case 37219:
    {
        returnValue = F("An der Feichten");
        break;
    }
    case 37220:
    {
        returnValue = F("An der Feigenklamm");
        break;
    }
    case 37221:
    {
        returnValue = F("An der Fein");
        break;
    }
    case 37222:
    {
        returnValue = F("An der Felda");
        break;
    }
    case 37223:
    {
        returnValue = F("An der Feldbahn");
        break;
    }
    case 37224:
    {
        returnValue = F("An der Felderhalde");
        break;
    }
    case 37225:
    {
        returnValue = F("An der Feldhecke");
        break;
    }
    case 37226:
    {
        returnValue = F("An der Feldmark");
        break;
    }
    case 37227:
    {
        returnValue = F("An der Feldmühle");
        break;
    }
    case 37228:
    {
        returnValue = F("An der Feldriede");
        break;
    }
    case 37229:
    {
        returnValue = F("An der Feldscheuer");
        break;
    }
    case 37230:
    {
        returnValue = F("An der Feldscheune");
        break;
    }
    case 37231:
    {
        returnValue = F("An der Feldstr.");
        break;
    }
    case 37232:
    {
        returnValue = F("An der Feldwiese");
        break;
    }
    case 37233:
    {
        returnValue = F("An der Fels");
        break;
    }
    case 37234:
    {
        returnValue = F("An der Felsenmühle");
        break;
    }
    case 37235:
    {
        returnValue = F("An der Felsgrotte");
        break;
    }
    case 37236:
    {
        returnValue = F("An der Fenne");
        break;
    }
    case 37237:
    {
        returnValue = F("An der Fercher Str.");
        break;
    }
    case 37238:
    {
        returnValue = F("An der Ferndorf");
        break;
    }
    case 37239:
    {
        returnValue = F("An der Festscheune");
        break;
    }
    case 37240:
    {
        returnValue = F("An der Festung");
        break;
    }
    case 37241:
    {
        returnValue = F("An der Festwiese");
        break;
    }
    case 37242:
    {
        returnValue = F("An der Fettwies");
        break;
    }
    case 37243:
    {
        returnValue = F("An der Feuerwache");
        break;
    }
    case 37244:
    {
        returnValue = F("An der Feuerwehr");
        break;
    }
    case 37245:
    {
        returnValue = F("An der Fichte");
        break;
    }
    case 37246:
    {
        returnValue = F("An der Fichtelwand");
        break;
    }
    case 37247:
    {
        returnValue = F("An der Fiehe");
        break;
    }
    case 37248:
    {
        returnValue = F("An der Fimag");
        break;
    }
    case 37249:
    {
        returnValue = F("An der Findorfsmühle");
        break;
    }
    case 37250:
    {
        returnValue = F("An der Finheide");
        break;
    }
    case 37251:
    {
        returnValue = F("An der Finkenburg");
        break;
    }
    case 37252:
    {
        returnValue = F("An der Finkenhütte");
        break;
    }
    case 37253:
    {
        returnValue = F("An der Finste");
        break;
    }
    case 37254:
    {
        returnValue = F("An der Fintau");
        break;
    }
    case 37255:
    {
        returnValue = F("An der Fischbachswand");
        break;
    }
    case 37256:
    {
        returnValue = F("An der Fischeraue");
        break;
    }
    case 37257:
    {
        returnValue = F("An der Fischerbrücke");
        break;
    }
    case 37258:
    {
        returnValue = F("An der Fischerei");
        break;
    }
    case 37259:
    {
        returnValue = F("An der Fischerklause");
        break;
    }
    case 37260:
    {
        returnValue = F("An der Fischermühle");
        break;
    }
    case 37261:
    {
        returnValue = F("An der Fischlaake");
        break;
    }
    case 37262:
    {
        returnValue = F("An der Fischlache");
        break;
    }
    case 37263:
    {
        returnValue = F("An der Fischmaar");
        break;
    }
    case 37264:
    {
        returnValue = F("An der Flachs");
        break;
    }
    case 37265:
    {
        returnValue = F("An der Flachsbreche");
        break;
    }
    case 37266:
    {
        returnValue = F("An der Flachsbäke");
        break;
    }
    case 37267:
    {
        returnValue = F("An der Flachsroth");
        break;
    }
    case 37268:
    {
        returnValue = F("An der Flachsröste");
        break;
    }
    case 37269:
    {
        returnValue = F("An der Flachsröße");
        break;
    }
    case 37270:
    {
        returnValue = F("An der Flage");
        break;
    }
    case 37271:
    {
        returnValue = F("An der Flakhalle");
        break;
    }
    case 37272:
    {
        returnValue = F("An der Flande");
        break;
    }
    case 37273:
    {
        returnValue = F("An der Flechthecke");
        break;
    }
    case 37274:
    {
        returnValue = F("An der Fliede");
        break;
    }
    case 37275:
    {
        returnValue = F("An der Fliehburg");
        break;
    }
    case 37276:
    {
        returnValue = F("An der Fließ");
        break;
    }
    case 37277:
    {
        returnValue = F("An der Flockenfabrik");
        break;
    }
    case 37278:
    {
        returnValue = F("An der Floeth");
        break;
    }
    case 37279:
    {
        returnValue = F("An der Florianskapelle");
        break;
    }
    case 37280:
    {
        returnValue = F("An der Floßwiese");
        break;
    }
    case 37281:
    {
        returnValue = F("An der Flur");
        break;
    }
    case 37282:
    {
        returnValue = F("An der Flurstadt");
        break;
    }
    case 37283:
    {
        returnValue = F("An der Fluth");
        break;
    }
    case 37284:
    {
        returnValue = F("An der Flöha");
        break;
    }
    case 37285:
    {
        returnValue = F("An der Flöth");
        break;
    }
    case 37286:
    {
        returnValue = F("An der Flüh");
        break;
    }
    case 37287:
    {
        returnValue = F("An der Foche");
        break;
    }
    case 37288:
    {
        returnValue = F("An der Fock");
        break;
    }
    case 37289:
    {
        returnValue = F("An der Fohlenweide");
        break;
    }
    case 37290:
    {
        returnValue = F("An der Folge");
        break;
    }
    case 37291:
    {
        returnValue = F("An der Forst");
        break;
    }
    case 37292:
    {
        returnValue = F("An der Forstbreite");
        break;
    }
    case 37293:
    {
        returnValue = F("An der Forstleiten");
        break;
    }
    case 37294:
    {
        returnValue = F("An der Forstnück");
        break;
    }
    case 37295:
    {
        returnValue = F("An der Forta");
        break;
    }
    case 37296:
    {
        returnValue = F("An der Fossa");
        break;
    }
    case 37297:
    {
        returnValue = F("An der Frankenhöhe");
        break;
    }
    case 37298:
    {
        returnValue = F("An der Frankenwarte");
        break;
    }
    case 37299:
    {
        returnValue = F("An der Franziskuskirche");
        break;
    }
    case 37300:
    {
        returnValue = F("An der Frauenkirche");
        break;
    }
    case 37301:
    {
        returnValue = F("An der Freiberger Muldenbrücke");
        break;
    }
    case 37302:
    {
        returnValue = F("An der Freigerichthalle");
        break;
    }
    case 37303:
    {
        returnValue = F("An der Freiheit");
        break;
    }
    case 37304:
    {
        returnValue = F("An der Freihub");
        break;
    }
    case 37305:
    {
        returnValue = F("An der Freilichtbühne");
        break;
    }
    case 37306:
    {
        returnValue = F("An der Freizeitanlage");
        break;
    }
    case 37307:
    {
        returnValue = F("An der Fretz");
        break;
    }
    case 37308:
    {
        returnValue = F("An der Freude");
        break;
    }
    case 37309:
    {
        returnValue = F("An der Frey");
        break;
    }
    case 37310:
    {
        returnValue = F("An der Freyung");
        break;
    }
    case 37311:
    {
        returnValue = F("An der Fried");
        break;
    }
    case 37312:
    {
        returnValue = F("An der Friedensbrücke");
        break;
    }
    case 37313:
    {
        returnValue = F("An der Friedenseiche");
        break;
    }
    case 37314:
    {
        returnValue = F("An der Friedensgrenze");
        break;
    }
    case 37315:
    {
        returnValue = F("An der Friedenshöhe");
        break;
    }
    case 37316:
    {
        returnValue = F("An der Friedenskirche");
        break;
    }
    case 37317:
    {
        returnValue = F("An der Friedenslinde");
        break;
    }
    case 37318:
    {
        returnValue = F("An der Friedensschule");
        break;
    }
    case 37319:
    {
        returnValue = F("An der Friedenstr.");
        break;
    }
    case 37320:
    {
        returnValue = F("An der Friedhofstr.");
        break;
    }
    case 37321:
    {
        returnValue = F("An der Friedsäule");
        break;
    }
    case 37322:
    {
        returnValue = F("An der Friemarer Str.");
        break;
    }
    case 37323:
    {
        returnValue = F("An der Froschgrube");
        break;
    }
    case 37324:
    {
        returnValue = F("An der Froschweide");
        break;
    }
    case 37325:
    {
        returnValue = F("An der Frühlingswiese");
        break;
    }
    case 37326:
    {
        returnValue = F("An der Fuchsenhütte");
        break;
    }
    case 37327:
    {
        returnValue = F("An der Fuchsfarm");
        break;
    }
    case 37328:
    {
        returnValue = F("An der Fuchshecke");
        break;
    }
    case 37329:
    {
        returnValue = F("An der Fuchshütte");
        break;
    }
    case 37330:
    {
        returnValue = F("An der Fuchsleite");
        break;
    }
    case 37331:
    {
        returnValue = F("An der Fuchsliede");
        break;
    }
    case 37332:
    {
        returnValue = F("An der Fuchslohe");
        break;
    }
    case 37333:
    {
        returnValue = F("An der Fuchsmühle");
        break;
    }
    case 37334:
    {
        returnValue = F("An der Fuchswiese");
        break;
    }
    case 37335:
    {
        returnValue = F("An der Fuckmühle");
        break;
    }
    case 37336:
    {
        returnValue = F("An der Fuhne");
        break;
    }
    case 37337:
    {
        returnValue = F("An der Fuhse");
        break;
    }
    case 37338:
    {
        returnValue = F("An der Fulda");
        break;
    }
    case 37339:
    {
        returnValue = F("An der Fulkskuhle");
        break;
    }
    case 37340:
    {
        returnValue = F("An der Furch");
        break;
    }
    case 37341:
    {
        returnValue = F("An der Furt");
        break;
    }
    case 37342:
    {
        returnValue = F("An der Furth");
        break;
    }
    case 37343:
    {
        returnValue = F("An der Fährbrücke");
        break;
    }
    case 37344:
    {
        returnValue = F("An der Fähre");
        break;
    }
    case 37345:
    {
        returnValue = F("An der Fährhütte");
        break;
    }
    case 37346:
    {
        returnValue = F("An der Fälle");
        break;
    }
    case 37347:
    {
        returnValue = F("An der Färbe");
        break;
    }
    case 37348:
    {
        returnValue = F("An der Föritz");
        break;
    }
    case 37349:
    {
        returnValue = F("An der Förstereck");
        break;
    }
    case 37350:
    {
        returnValue = F("An der Försterei");
        break;
    }
    case 37351:
    {
        returnValue = F("An der Försterwiese");
        break;
    }
    case 37352:
    {
        returnValue = F("An der Führung");
        break;
    }
    case 37353:
    {
        returnValue = F("An der Fülle");
        break;
    }
    case 37354:
    {
        returnValue = F("An der Fürstenmühle");
        break;
    }
    case 37355:
    {
        returnValue = F("An der Gabelung");
        break;
    }
    case 37356:
    {
        returnValue = F("An der Gadenwiese");
        break;
    }
    case 37357:
    {
        returnValue = F("An der Gahlkower Chaussee");
        break;
    }
    case 37358:
    {
        returnValue = F("An der Gaibach");
        break;
    }
    case 37359:
    {
        returnValue = F("An der Galegenleite");
        break;
    }
    case 37360:
    {
        returnValue = F("An der Galgenbrücke");
        break;
    }
    case 37361:
    {
        returnValue = F("An der Galgeneiche");
        break;
    }
    case 37362:
    {
        returnValue = F("An der Galgenfuhre");
        break;
    }
    case 37363:
    {
        returnValue = F("An der Galgenkuhle");
        break;
    }
    case 37364:
    {
        returnValue = F("An der Galgenmühle");
        break;
    }
    case 37365:
    {
        returnValue = F("An der Galgenspitze");
        break;
    }
    case 37366:
    {
        returnValue = F("An der Galline");
        break;
    }
    case 37367:
    {
        returnValue = F("An der Gamse");
        break;
    }
    case 37368:
    {
        returnValue = F("An der Ganswiese");
        break;
    }
    case 37369:
    {
        returnValue = F("An der Garnison");
        break;
    }
    case 37370:
    {
        returnValue = F("An der Gartenanlage");
        break;
    }
    case 37371:
    {
        returnValue = F("An der Gartenanlage Glück auf");
        break;
    }
    case 37372:
    {
        returnValue = F("An der Gartenbreite");
        break;
    }
    case 37373:
    {
        returnValue = F("An der Gartenfreiheit");
        break;
    }
    case 37374:
    {
        returnValue = F("An der Gartenmauer");
        break;
    }
    case 37375:
    {
        returnValue = F("An der Gartenstadt");
        break;
    }
    case 37376:
    {
        returnValue = F("An der Gartenstr.");
        break;
    }
    case 37377:
    {
        returnValue = F("An der Garvensdorfer Feldscheune");
        break;
    }
    case 37378:
    {
        returnValue = F("An der Gasanstalt");
        break;
    }
    case 37379:
    {
        returnValue = F("An der Gasse");
        break;
    }
    case 37380:
    {
        returnValue = F("An der Gaste");
        break;
    }
    case 37381:
    {
        returnValue = F("An der Gastendonk");
        break;
    }
    case 37382:
    {
        returnValue = F("An der Gatterhalle");
        break;
    }
    case 37383:
    {
        returnValue = F("An der Gauchsmühle");
        break;
    }
    case 37384:
    {
        returnValue = F("An der Gaß");
        break;
    }
    case 37385:
    {
        returnValue = F("An der Geberbachquelle");
        break;
    }
    case 37386:
    {
        returnValue = F("An der Gebind");
        break;
    }
    case 37387:
    {
        returnValue = F("An der Gebirgsschänke");
        break;
    }
    case 37388:
    {
        returnValue = F("An der Gehlbach");
        break;
    }
    case 37389:
    {
        returnValue = F("An der Gehle");
        break;
    }
    case 37390:
    {
        returnValue = F("An der Gehre");
        break;
    }
    case 37391:
    {
        returnValue = F("An der Gehrengasse");
        break;
    }
    case 37392:
    {
        returnValue = F("An der Geige");
        break;
    }
    case 37393:
    {
        returnValue = F("An der Geinze");
        break;
    }
    case 37394:
    {
        returnValue = F("An der Geis");
        break;
    }
    case 37395:
    {
        returnValue = F("An der Geisel");
        break;
    }
    case 37396:
    {
        returnValue = F("An der Geistpromenade");
        break;
    }
    case 37397:
    {
        returnValue = F("An der Geistwiese");
        break;
    }
    case 37398:
    {
        returnValue = F("An der Geißspitze");
        break;
    }
    case 37399:
    {
        returnValue = F("An der Geißwies");
        break;
    }
    case 37400:
    {
        returnValue = F("An der Gelben Schule");
        break;
    }
    case 37401:
    {
        returnValue = F("An der Gelben Seite");
        break;
    }
    case 37402:
    {
        returnValue = F("An der Gelster");
        break;
    }
    case 37403:
    {
        returnValue = F("An der Gemeinde");
        break;
    }
    case 37404:
    {
        returnValue = F("An der Gemen");
        break;
    }
    case 37405:
    {
        returnValue = F("An der Gende");
        break;
    }
    case 37406:
    {
        returnValue = F("An der Georgsburg");
        break;
    }
    case 37407:
    {
        returnValue = F("An der Georgshöhe");
        break;
    }
    case 37408:
    {
        returnValue = F("An der Georgskapelle");
        break;
    }
    case 37409:
    {
        returnValue = F("An der Gera");
        break;
    }
    case 37410:
    {
        returnValue = F("An der Gerberei");
        break;
    }
    case 37411:
    {
        returnValue = F("An der Gerichtslaube");
        break;
    }
    case 37412:
    {
        returnValue = F("An der Gerichtslinde");
        break;
    }
    case 37413:
    {
        returnValue = F("An der Gern");
        break;
    }
    case 37414:
    {
        returnValue = F("An der Gersprenz");
        break;
    }
    case 37415:
    {
        returnValue = F("An der Gerstenkoppel");
        break;
    }
    case 37416:
    {
        returnValue = F("An der Gertrudenau");
        break;
    }
    case 37417:
    {
        returnValue = F("An der Gienicke");
        break;
    }
    case 37418:
    {
        returnValue = F("An der Gierhalde");
        break;
    }
    case 37419:
    {
        returnValue = F("An der Gieselau");
        break;
    }
    case 37420:
    {
        returnValue = F("An der Gießerei");
        break;
    }
    case 37421:
    {
        returnValue = F("An der Gilsa");
        break;
    }
    case 37422:
    {
        returnValue = F("An der Gipsleite");
        break;
    }
    case 37423:
    {
        returnValue = F("An der Gipsmühle");
        break;
    }
    case 37424:
    {
        returnValue = F("An der Glasfabrik");
        break;
    }
    case 37425:
    {
        returnValue = F("An der Glasfachschule");
        break;
    }
    case 37426:
    {
        returnValue = F("An der Glashett");
        break;
    }
    case 37427:
    {
        returnValue = F("An der Glashütte");
        break;
    }
    case 37428:
    {
        returnValue = F("An der Glasstr.");
        break;
    }
    case 37429:
    {
        returnValue = F("An der Gleesener Schule");
        break;
    }
    case 37430:
    {
        returnValue = F("An der Glinze");
        break;
    }
    case 37431:
    {
        returnValue = F("An der Glocke");
        break;
    }
    case 37432:
    {
        returnValue = F("An der Glockenheide");
        break;
    }
    case 37433:
    {
        returnValue = F("An der Glockenkelter");
        break;
    }
    case 37434:
    {
        returnValue = F("An der Glockenwiese");
        break;
    }
    case 37435:
    {
        returnValue = F("An der Glonnaue");
        break;
    }
    case 37436:
    {
        returnValue = F("An der Glotter");
        break;
    }
    case 37437:
    {
        returnValue = F("An der Glöck");
        break;
    }
    case 37438:
    {
        returnValue = F("An der Gnadenkirche");
        break;
    }
    case 37439:
    {
        returnValue = F("An der Gnisse");
        break;
    }
    case 37440:
    {
        returnValue = F("An der Goethebrücke");
        break;
    }
    case 37441:
    {
        returnValue = F("An der Goldach");
        break;
    }
    case 37442:
    {
        returnValue = F("An der Goldenen Höhe");
        break;
    }
    case 37443:
    {
        returnValue = F("An der Goldgasse");
        break;
    }
    case 37444:
    {
        returnValue = F("An der Goldgrube");
        break;
    }
    case 37445:
    {
        returnValue = F("An der Goldkaul");
        break;
    }
    case 37446:
    {
        returnValue = F("An der Goldkaute");
        break;
    }
    case 37447:
    {
        returnValue = F("An der Goldleiste");
        break;
    }
    case 37448:
    {
        returnValue = F("An der Golle");
        break;
    }
    case 37449:
    {
        returnValue = F("An der Gonzenburg");
        break;
    }
    case 37450:
    {
        returnValue = F("An der Goorley");
        break;
    }
    case 37451:
    {
        returnValue = F("An der Goosbek");
        break;
    }
    case 37452:
    {
        returnValue = F("An der Goth");
        break;
    }
    case 37453:
    {
        returnValue = F("An der Gothaer Str.");
        break;
    }
    case 37454:
    {
        returnValue = F("An der Gottesgabe");
        break;
    }
    case 37455:
    {
        returnValue = F("An der Gotteskammer");
        break;
    }
    case 37456:
    {
        returnValue = F("An der Gottleuba");
        break;
    }
    case 37457:
    {
        returnValue = F("An der Grabenwehr");
        break;
    }
    case 37458:
    {
        returnValue = F("An der Grabenwiese");
        break;
    }
    case 37459:
    {
        returnValue = F("An der Gracht");
        break;
    }
    case 37460:
    {
        returnValue = F("An der Grafenbrücker Schleuse");
        break;
    }
    case 37461:
    {
        returnValue = F("An der Graft");
        break;
    }
    case 37462:
    {
        returnValue = F("An der Gramme");
        break;
    }
    case 37463:
    {
        returnValue = F("An der Granahöhe");
        break;
    }
    case 37464:
    {
        returnValue = F("An der Grandbreite");
        break;
    }
    case 37465:
    {
        returnValue = F("An der Graste");
        break;
    }
    case 37466:
    {
        returnValue = F("An der Graswiese");
        break;
    }
    case 37467:
    {
        returnValue = F("An der Graue");
        break;
    }
    case 37468:
    {
        returnValue = F("An der Grauen Burg");
        break;
    }
    case 37469:
    {
        returnValue = F("An der Grauen Hecke");
        break;
    }
    case 37470:
    {
        returnValue = F("An der Gredl");
        break;
    }
    case 37471:
    {
        returnValue = F("An der Gregnitz");
        break;
    }
    case 37472:
    {
        returnValue = F("An der Greifswalder Landstr.");
        break;
    }
    case 37473:
    {
        returnValue = F("An der Greika");
        break;
    }
    case 37474:
    {
        returnValue = F("An der Grenze");
        break;
    }
    case 37475:
    {
        returnValue = F("An der Greye");
        break;
    }
    case 37476:
    {
        returnValue = F("An der Griesmühle");
        break;
    }
    case 37477:
    {
        returnValue = F("An der Grimme");
        break;
    }
    case 37478:
    {
        returnValue = F("An der Grimmsäge");
        break;
    }
    case 37479:
    {
        returnValue = F("An der Grinde");
        break;
    }
    case 37480:
    {
        returnValue = F("An der Grolle");
        break;
    }
    case 37481:
    {
        returnValue = F("An der Grootbruchsley");
        break;
    }
    case 37482:
    {
        returnValue = F("An der Grotte");
        break;
    }
    case 37483:
    {
        returnValue = F("An der Großen Aue");
        break;
    }
    case 37484:
    {
        returnValue = F("An der Großen Brücke");
        break;
    }
    case 37485:
    {
        returnValue = F("An der Großen Mauer");
        break;
    }
    case 37486:
    {
        returnValue = F("An der Großheck");
        break;
    }
    case 37487:
    {
        returnValue = F("An der Großsporthalle");
        break;
    }
    case 37488:
    {
        returnValue = F("An der Großwies");
        break;
    }
    case 37489:
    {
        returnValue = F("An der Grub");
        break;
    }
    case 37490:
    {
        returnValue = F("An der Grube");
        break;
    }
    case 37491:
    {
        returnValue = F("An der Grubenbahn");
        break;
    }
    case 37492:
    {
        returnValue = F("An der Grund");
        break;
    }
    case 37493:
    {
        returnValue = F("An der Grundbreite");
        break;
    }
    case 37494:
    {
        returnValue = F("An der Grundmühle");
        break;
    }
    case 37495:
    {
        returnValue = F("An der Grundschule");
        break;
    }
    case 37496:
    {
        returnValue = F("An der Gräfte");
        break;
    }
    case 37497:
    {
        returnValue = F("An der Grühlingseiche");
        break;
    }
    case 37498:
    {
        returnValue = F("An der Grühlingstr.");
        break;
    }
    case 37499:
    {
        returnValue = F("An der Grün");
        break;
    }
    case 37500:
    {
        returnValue = F("An der Gründengewann");
        break;
    }
    case 37501:
    {
        returnValue = F("An der Grünen Aue");
        break;
    }
    case 37502:
    {
        returnValue = F("An der Grünen Furth");
        break;
    }
    case 37503:
    {
        returnValue = F("An der Grünen Kuhle");
        break;
    }
    case 37504:
    {
        returnValue = F("An der Grüngesweide");
        break;
    }
    case 37505:
    {
        returnValue = F("An der Gucke");
        break;
    }
    case 37506:
    {
        returnValue = F("An der Guldenmühle");
        break;
    }
    case 37507:
    {
        returnValue = F("An der Gumme");
        break;
    }
    case 37508:
    {
        returnValue = F("An der Gundelsberger Brücke");
        break;
    }
    case 37509:
    {
        returnValue = F("An der Gurgel");
        break;
    }
    case 37510:
    {
        returnValue = F("An der Gutach");
        break;
    }
    case 37511:
    {
        returnValue = F("An der Gutmannshohl");
        break;
    }
    case 37512:
    {
        returnValue = F("An der Gänsekuhle");
        break;
    }
    case 37513:
    {
        returnValue = F("An der Gänseleite");
        break;
    }
    case 37514:
    {
        returnValue = F("An der Gänseweide");
        break;
    }
    case 37515:
    {
        returnValue = F("An der Gänsewiese");
        break;
    }
    case 37516:
    {
        returnValue = F("An der Gänsgrub");
        break;
    }
    case 37517:
    {
        returnValue = F("An der Gänsstirne");
        break;
    }
    case 37518:
    {
        returnValue = F("An der Gänsweide");
        break;
    }
    case 37519:
    {
        returnValue = F("An der Gärtnerei");
        break;
    }
    case 37520:
    {
        returnValue = F("An der Göschbeek");
        break;
    }
    case 37521:
    {
        returnValue = F("An der Gösche");
        break;
    }
    case 37522:
    {
        returnValue = F("An der Götzenwiese");
        break;
    }
    case 37523:
    {
        returnValue = F("An der Göwe");
        break;
    }
    case 37524:
    {
        returnValue = F("An der Gülichsburg");
        break;
    }
    case 37525:
    {
        returnValue = F("An der Günne");
        break;
    }
    case 37526:
    {
        returnValue = F("An der Günz");
        break;
    }
    case 37527:
    {
        returnValue = F("An der Güterhalle");
        break;
    }
    case 37528:
    {
        returnValue = F("An der Haag");
        break;
    }
    case 37529:
    {
        returnValue = F("An der Haagstr.");
        break;
    }
    case 37530:
    {
        returnValue = F("An der Haak");
        break;
    }
    case 37531:
    {
        returnValue = F("An der Haar");
        break;
    }
    case 37532:
    {
        returnValue = F("An der Haardstr.");
        break;
    }
    case 37533:
    {
        returnValue = F("An der Haardt");
        break;
    }
    case 37534:
    {
        returnValue = F("An der Haarlake");
        break;
    }
    case 37535:
    {
        returnValue = F("An der Haarspott");
        break;
    }
    case 37536:
    {
        returnValue = F("An der Hab");
        break;
    }
    case 37537:
    {
        returnValue = F("An der Hachinger Haid");
        break;
    }
    case 37538:
    {
        returnValue = F("An der Hackmähde");
        break;
    }
    case 37539:
    {
        returnValue = F("An der Hafenbahn");
        break;
    }
    case 37540:
    {
        returnValue = F("An der Haferkoppel");
        break;
    }
    case 37541:
    {
        returnValue = F("An der Haferriede");
        break;
    }
    case 37542:
    {
        returnValue = F("An der Haffküste");
        break;
    }
    case 37543:
    {
        returnValue = F("An der Hafnergrube");
        break;
    }
    case 37544:
    {
        returnValue = F("An der Hagenau");
        break;
    }
    case 37545:
    {
        returnValue = F("An der Hagenbuche");
        break;
    }
    case 37546:
    {
        returnValue = F("An der Hager");
        break;
    }
    case 37547:
    {
        returnValue = F("An der Hahle");
        break;
    }
    case 37548:
    {
        returnValue = F("An der Hahler");
        break;
    }
    case 37549:
    {
        returnValue = F("An der Hahnbünte");
        break;
    }
    case 37550:
    {
        returnValue = F("An der Hahnewiese");
        break;
    }
    case 37551:
    {
        returnValue = F("An der Hahnwiese");
        break;
    }
    case 37552:
    {
        returnValue = F("An der Haide");
        break;
    }
    case 37553:
    {
        returnValue = F("An der Haidkoppel");
        break;
    }
    case 37554:
    {
        returnValue = F("An der Hainburg");
        break;
    }
    case 37555:
    {
        returnValue = F("An der Hainichte");
        break;
    }
    case 37556:
    {
        returnValue = F("An der Hakelt");
        break;
    }
    case 37557:
    {
        returnValue = F("An der Hakenkrümme");
        break;
    }
    case 37558:
    {
        returnValue = F("An der Halbe");
        break;
    }
    case 37559:
    {
        returnValue = F("An der Halbige");
        break;
    }
    case 37560:
    {
        returnValue = F("An der Halde");
        break;
    }
    case 37561:
    {
        returnValue = F("An der Halden");
        break;
    }
    case 37562:
    {
        returnValue = F("An der Hall");
        break;
    }
    case 37563:
    {
        returnValue = F("An der Halle");
        break;
    }
    case 37564:
    {
        returnValue = F("An der Halleschen Str.");
        break;
    }
    case 37565:
    {
        returnValue = F("An der Halt");
        break;
    }
    case 37566:
    {
        returnValue = F("An der Haltestelle");
        break;
    }
    case 37567:
    {
        returnValue = F("An der Hamme");
        break;
    }
    case 37568:
    {
        returnValue = F("An der Hammelkuhle");
        break;
    }
    case 37569:
    {
        returnValue = F("An der Hammerbleiche");
        break;
    }
    case 37570:
    {
        returnValue = F("An der Hammerschmiede");
        break;
    }
    case 37571:
    {
        returnValue = F("An der Hammerschänke");
        break;
    }
    case 37572:
    {
        returnValue = F("An der Hammerstatt");
        break;
    }
    case 37573:
    {
        returnValue = F("An der Hand");
        break;
    }
    case 37574:
    {
        returnValue = F("An der Hanfröste");
        break;
    }
    case 37575:
    {
        returnValue = F("An der Hanfrötze");
        break;
    }
    case 37576:
    {
        returnValue = F("An der Hansenkoppel");
        break;
    }
    case 37577:
    {
        returnValue = F("An der Hard");
        break;
    }
    case 37578:
    {
        returnValue = F("An der Hardt");
        break;
    }
    case 37579:
    {
        returnValue = F("An der Hardtlinde");
        break;
    }
    case 37580:
    {
        returnValue = F("An der Harenburg");
        break;
    }
    case 37581:
    {
        returnValue = F("An der Hareweed");
        break;
    }
    case 37582:
    {
        returnValue = F("An der Harle");
        break;
    }
    case 37583:
    {
        returnValue = F("An der Harste");
        break;
    }
    case 37584:
    {
        returnValue = F("An der Hart");
        break;
    }
    case 37585:
    {
        returnValue = F("An der Hartauquelle");
        break;
    }
    case 37586:
    {
        returnValue = F("An der Harth");
        break;
    }
    case 37587:
    {
        returnValue = F("An der Harthe");
        break;
    }
    case 37588:
    {
        returnValue = F("An der Hartig");
        break;
    }
    case 37589:
    {
        returnValue = F("An der Hartmecke");
        break;
    }
    case 37590:
    {
        returnValue = F("An der Hartmühle");
        break;
    }
    case 37591:
    {
        returnValue = F("An der Harz");
        break;
    }
    case 37592:
    {
        returnValue = F("An der Hasbacher Wiese");
        break;
    }
    case 37593:
    {
        returnValue = F("An der Haschenbrücke");
        break;
    }
    case 37594:
    {
        returnValue = F("An der Hase");
        break;
    }
    case 37595:
    {
        returnValue = F("An der Hasel");
        break;
    }
    case 37596:
    {
        returnValue = F("An der Haselhecke");
        break;
    }
    case 37597:
    {
        returnValue = F("An der Haselmauer");
        break;
    }
    case 37598:
    {
        returnValue = F("An der Haselstaude");
        break;
    }
    case 37599:
    {
        returnValue = F("An der Hasenbeune");
        break;
    }
    case 37600:
    {
        returnValue = F("An der Hasenhalle");
        break;
    }
    case 37601:
    {
        returnValue = F("An der Hasenhecke");
        break;
    }
    case 37602:
    {
        returnValue = F("An der Hasenheide");
        break;
    }
    case 37603:
    {
        returnValue = F("An der Hasenkuhle");
        break;
    }
    case 37604:
    {
        returnValue = F("An der Hasenleuchte");
        break;
    }
    case 37605:
    {
        returnValue = F("An der Hasenmühle");
        break;
    }
    case 37606:
    {
        returnValue = F("An der Hasenweide");
        break;
    }
    case 37607:
    {
        returnValue = F("An der Hasenwiese");
        break;
    }
    case 37608:
    {
        returnValue = F("An der Haslach");
        break;
    }
    case 37609:
    {
        returnValue = F("An der Haslbreite");
        break;
    }
    case 37610:
    {
        returnValue = F("An der Hasler Zell");
        break;
    }
    case 37611:
    {
        returnValue = F("An der Hasseler Kapelle");
        break;
    }
    case 37612:
    {
        returnValue = F("An der Hatzbach");
        break;
    }
    case 37613:
    {
        returnValue = F("An der Haube");
        break;
    }
    case 37614:
    {
        returnValue = F("An der Hauptschule");
        break;
    }
    case 37615:
    {
        returnValue = F("An der Hauptstr.");
        break;
    }
    case 37616:
    {
        returnValue = F("An der Hauptstr. (Schnaps Allee)");
        break;
    }
    case 37617:
    {
        returnValue = F("An der Hauptstzraße");
        break;
    }
    case 37618:
    {
        returnValue = F("An der Hauptwache");
        break;
    }
    case 37619:
    {
        returnValue = F("An der Hausener Str.");
        break;
    }
    case 37620:
    {
        returnValue = F("An der Hausermühle");
        break;
    }
    case 37621:
    {
        returnValue = F("An der Hausstatt");
        break;
    }
    case 37622:
    {
        returnValue = F("An der Hautzenmühle");
        break;
    }
    case 37623:
    {
        returnValue = F("An der Havel");
        break;
    }
    case 37624:
    {
        returnValue = F("An der Haßlach");
        break;
    }
    case 37625:
    {
        returnValue = F("An der Hech");
        break;
    }
    case 37626:
    {
        returnValue = F("An der Heck");
        break;
    }
    case 37627:
    {
        returnValue = F("An der Hecke");
        break;
    }
    case 37628:
    {
        returnValue = F("An der Heckenmühle");
        break;
    }
    case 37629:
    {
        returnValue = F("An der Heckensteige");
        break;
    }
    case 37630:
    {
        returnValue = F("An der Heder");
        break;
    }
    case 37631:
    {
        returnValue = F("An der Heeg");
        break;
    }
    case 37632:
    {
        returnValue = F("An der Heege");
        break;
    }
    case 37633:
    {
        returnValue = F("An der Heerstr.");
        break;
    }
    case 37634:
    {
        returnValue = F("An der Heete");
        break;
    }
    case 37635:
    {
        returnValue = F("An der Hege");
        break;
    }
    case 37636:
    {
        returnValue = F("An der Hegelith");
        break;
    }
    case 37637:
    {
        returnValue = F("An der Hegge");
        break;
    }
    case 37638:
    {
        returnValue = F("An der Heggenaa");
        break;
    }
    case 37639:
    {
        returnValue = F("An der Hegi");
        break;
    }
    case 37640:
    {
        returnValue = F("An der Heglach");
        break;
    }
    case 37641:
    {
        returnValue = F("An der Hehlenriede");
        break;
    }
    case 37642:
    {
        returnValue = F("An der Heide");
        break;
    }
    case 37643:
    {
        returnValue = F("An der Heidekrautbahn");
        break;
    }
    case 37644:
    {
        returnValue = F("An der Heiden");
        break;
    }
    case 37645:
    {
        returnValue = F("An der Heidkoppel");
        break;
    }
    case 37646:
    {
        returnValue = F("An der Heidkämpe");
        break;
    }
    case 37647:
    {
        returnValue = F("An der Heidmark-Halle");
        break;
    }
    case 37648:
    {
        returnValue = F("An der Heidmühle");
        break;
    }
    case 37649:
    {
        returnValue = F("An der Heier");
        break;
    }
    case 37650:
    {
        returnValue = F("An der Heierbek");
        break;
    }
    case 37651:
    {
        returnValue = F("An der Heilinde");
        break;
    }
    case 37652:
    {
        returnValue = F("An der Heilquelle");
        break;
    }
    case 37653:
    {
        returnValue = F("An der Heilstättenbahn");
        break;
    }
    case 37654:
    {
        returnValue = F("An der Heimatstube");
        break;
    }
    case 37655:
    {
        returnValue = F("An der Heimbach");
        break;
    }
    case 37656:
    {
        returnValue = F("An der Heimstätte");
        break;
    }
    case 37657:
    {
        returnValue = F("An der Heinrichsquelle");
        break;
    }
    case 37658:
    {
        returnValue = F("An der Heinzebank");
        break;
    }
    case 37659:
    {
        returnValue = F("An der Heister");
        break;
    }
    case 37660:
    {
        returnValue = F("An der Heisterburg");
        break;
    }
    case 37661:
    {
        returnValue = F("An der Heitere");
        break;
    }
    case 37662:
    {
        returnValue = F("An der Heithörn");
        break;
    }
    case 37663:
    {
        returnValue = F("An der Helbe");
        break;
    }
    case 37664:
    {
        returnValue = F("An der Held");
        break;
    }
    case 37665:
    {
        returnValue = F("An der Helincheneiche");
        break;
    }
    case 37666:
    {
        returnValue = F("An der Hell");
        break;
    }
    case 37667:
    {
        returnValue = F("An der Hellbühlbrücke");
        break;
    }
    case 37668:
    {
        returnValue = F("An der Helle");
        break;
    }
    case 37669:
    {
        returnValue = F("An der Helmerte");
        break;
    }
    case 37670:
    {
        returnValue = F("An der Henckemühle");
        break;
    }
    case 37671:
    {
        returnValue = F("An der Hend");
        break;
    }
    case 37672:
    {
        returnValue = F("An der Henne");
        break;
    }
    case 37673:
    {
        returnValue = F("An der Heppenmauer");
        break;
    }
    case 37674:
    {
        returnValue = F("An der Herberge");
        break;
    }
    case 37675:
    {
        returnValue = F("An der Herbstleite");
        break;
    }
    case 37676:
    {
        returnValue = F("An der Herd");
        break;
    }
    case 37677:
    {
        returnValue = F("An der Herkertmühle");
        break;
    }
    case 37678:
    {
        returnValue = F("An der Hermannshöhe");
        break;
    }
    case 37679:
    {
        returnValue = F("An der Hermannsleite");
        break;
    }
    case 37680:
    {
        returnValue = F("An der Herrenfurth");
        break;
    }
    case 37681:
    {
        returnValue = F("An der Herrenlanke");
        break;
    }
    case 37682:
    {
        returnValue = F("An der Herrenstraß");
        break;
    }
    case 37683:
    {
        returnValue = F("An der Herrenweide");
        break;
    }
    case 37684:
    {
        returnValue = F("An der Herrenwies");
        break;
    }
    case 37685:
    {
        returnValue = F("An der Herrenwiese");
        break;
    }
    case 37686:
    {
        returnValue = F("An der Herrlichkeit");
        break;
    }
    case 37687:
    {
        returnValue = F("An der Herrnacht");
        break;
    }
    case 37688:
    {
        returnValue = F("An der Herrnwiese");
        break;
    }
    case 37689:
    {
        returnValue = F("An der Herrschaftsscheune");
        break;
    }
    case 37690:
    {
        returnValue = F("An der Herskaul");
        break;
    }
    case 37691:
    {
        returnValue = F("An der Hessel");
        break;
    }
    case 37692:
    {
        returnValue = F("An der Hetze");
        break;
    }
    case 37693:
    {
        returnValue = F("An der Hetzelhardt");
        break;
    }
    case 37694:
    {
        returnValue = F("An der Heuhecke");
        break;
    }
    case 37695:
    {
        returnValue = F("An der Heusteige");
        break;
    }
    case 37696:
    {
        returnValue = F("An der Heuwaag");
        break;
    }
    case 37697:
    {
        returnValue = F("An der Heuwiese");
        break;
    }
    case 37698:
    {
        returnValue = F("An der Hexenbleiche");
        break;
    }
    case 37699:
    {
        returnValue = F("An der Hexeneiche");
        break;
    }
    case 37700:
    {
        returnValue = F("An der Hexenkuhle");
        break;
    }
    case 37701:
    {
        returnValue = F("An der Heßlerquelle");
        break;
    }
    case 37702:
    {
        returnValue = F("An der Hibbeke");
        break;
    }
    case 37703:
    {
        returnValue = F("An der Hilb");
        break;
    }
    case 37704:
    {
        returnValue = F("An der Hilbengass");
        break;
    }
    case 37705:
    {
        returnValue = F("An der Hildebrandsmühle");
        break;
    }
    case 37706:
    {
        returnValue = F("An der Hillschla");
        break;
    }
    case 37707:
    {
        returnValue = F("An der Himmelfahrt");
        break;
    }
    case 37708:
    {
        returnValue = F("An der Himmelsleiter");
        break;
    }
    case 37709:
    {
        returnValue = F("An der Hintermühle");
        break;
    }
    case 37710:
    {
        returnValue = F("An der Hinterwieke");
        break;
    }
    case 37711:
    {
        returnValue = F("An der Hinterwiese");
        break;
    }
    case 37712:
    {
        returnValue = F("An der Hirschaue");
        break;
    }
    case 37713:
    {
        returnValue = F("An der Hirschsteige");
        break;
    }
    case 37714:
    {
        returnValue = F("An der Hirschtränke");
        break;
    }
    case 37715:
    {
        returnValue = F("An der Hirselache");
        break;
    }
    case 37716:
    {
        returnValue = F("An der Hirtentrift");
        break;
    }
    case 37717:
    {
        returnValue = F("An der Hirtenwies");
        break;
    }
    case 37718:
    {
        returnValue = F("An der Hirtenwiese");
        break;
    }
    case 37719:
    {
        returnValue = F("An der Hochbahn");
        break;
    }
    case 37720:
    {
        returnValue = F("An der Hochbreite");
        break;
    }
    case 37721:
    {
        returnValue = F("An der Hochbrücke");
        break;
    }
    case 37722:
    {
        returnValue = F("An der Hochburg");
        break;
    }
    case 37723:
    {
        returnValue = F("An der Hochleite");
        break;
    }
    case 37724:
    {
        returnValue = F("An der Hochleiten");
        break;
    }
    case 37725:
    {
        returnValue = F("An der Hochschule");
        break;
    }
    case 37726:
    {
        returnValue = F("An der Hochspannung");
        break;
    }
    case 37727:
    {
        returnValue = F("An der Hochstr.");
        break;
    }
    case 37728:
    {
        returnValue = F("An der Hochstätt");
        break;
    }
    case 37729:
    {
        returnValue = F("An der Hockenwiese");
        break;
    }
    case 37730:
    {
        returnValue = F("An der Hoekweide");
        break;
    }
    case 37731:
    {
        returnValue = F("An der Hofau");
        break;
    }
    case 37732:
    {
        returnValue = F("An der Hofbreede");
        break;
    }
    case 37733:
    {
        returnValue = F("An der Hofbreite");
        break;
    }
    case 37734:
    {
        returnValue = F("An der Hofestatt");
        break;
    }
    case 37735:
    {
        returnValue = F("An der Hofet");
        break;
    }
    case 37736:
    {
        returnValue = F("An der Hoffischerei");
        break;
    }
    case 37737:
    {
        returnValue = F("An der Hoffnung");
        break;
    }
    case 37738:
    {
        returnValue = F("An der Hofkoppel");
        break;
    }
    case 37739:
    {
        returnValue = F("An der Hofmark");
        break;
    }
    case 37740:
    {
        returnValue = F("An der Hofmühle");
        break;
    }
    case 37741:
    {
        returnValue = F("An der Hofstadt");
        break;
    }
    case 37742:
    {
        returnValue = F("An der Hofstatt");
        break;
    }
    case 37743:
    {
        returnValue = F("An der Hofwies");
        break;
    }
    case 37744:
    {
        returnValue = F("An der Hofwiese");
        break;
    }
    case 37745:
    {
        returnValue = F("An der Hohbruck");
        break;
    }
    case 37746:
    {
        returnValue = F("An der Hoheck");
        break;
    }
    case 37747:
    {
        returnValue = F("An der Hohen Bank");
        break;
    }
    case 37748:
    {
        returnValue = F("An der Hohen Brücke");
        break;
    }
    case 37749:
    {
        returnValue = F("An der Hohen Eiche");
        break;
    }
    case 37750:
    {
        returnValue = F("An der Hohen Eifer");
        break;
    }
    case 37751:
    {
        returnValue = F("An der Hohen Hecke");
        break;
    }
    case 37752:
    {
        returnValue = F("An der Hohen Luft");
        break;
    }
    case 37753:
    {
        returnValue = F("An der Hohen Schule");
        break;
    }
    case 37754:
    {
        returnValue = F("An der Hohen Str.");
        break;
    }
    case 37755:
    {
        returnValue = F("An der Hohl");
        break;
    }
    case 37756:
    {
        returnValue = F("An der Hohle");
        break;
    }
    case 37757:
    {
        returnValue = F("An der Hohleiche");
        break;
    }
    case 37758:
    {
        returnValue = F("An der Hohleite");
        break;
    }
    case 37759:
    {
        returnValue = F("An der Hohlen Eiche");
        break;
    }
    case 37760:
    {
        returnValue = F("An der Hohlgass");
        break;
    }
    case 37761:
    {
        returnValue = F("An der Holderstauden");
        break;
    }
    case 37762:
    {
        returnValue = F("An der Hollerstaud");
        break;
    }
    case 37763:
    {
        returnValue = F("An der Hollerstaude");
        break;
    }
    case 37764:
    {
        returnValue = F("An der Hollsteine");
        break;
    }
    case 37765:
    {
        returnValue = F("An der Holländer Mühle");
        break;
    }
    case 37766:
    {
        returnValue = F("An der Holtemme");
        break;
    }
    case 37767:
    {
        returnValue = F("An der Holter Kirche");
        break;
    }
    case 37768:
    {
        returnValue = F("An der Holzbrücke");
        break;
    }
    case 37769:
    {
        returnValue = F("An der Holzgasse");
        break;
    }
    case 37770:
    {
        returnValue = F("An der Holzgaß");
        break;
    }
    case 37771:
    {
        returnValue = F("An der Holzhecke");
        break;
    }
    case 37772:
    {
        returnValue = F("An der Holzmühle");
        break;
    }
    case 37773:
    {
        returnValue = F("An der Holzmühler Brücke");
        break;
    }
    case 37774:
    {
        returnValue = F("An der Holzstr.");
        break;
    }
    case 37775:
    {
        returnValue = F("An der Holzwolle");
        break;
    }
    case 37776:
    {
        returnValue = F("An der Hopfel");
        break;
    }
    case 37777:
    {
        returnValue = F("An der Hopfenblüte");
        break;
    }
    case 37778:
    {
        returnValue = F("An der Hopfendarre");
        break;
    }
    case 37779:
    {
        returnValue = F("An der Hoppe");
        break;
    }
    case 37780:
    {
        returnValue = F("An der Horke");
        break;
    }
    case 37781:
    {
        returnValue = F("An der Hornsmühle");
        break;
    }
    case 37782:
    {
        returnValue = F("An der Hornweide");
        break;
    }
    case 37783:
    {
        returnValue = F("An der Horst");
        break;
    }
    case 37784:
    {
        returnValue = F("An der Horsterbeck");
        break;
    }
    case 37785:
    {
        returnValue = F("An der Hospitalmühle");
        break;
    }
    case 37786:
    {
        returnValue = F("An der Hove");
        break;
    }
    case 37787:
    {
        returnValue = F("An der Howwefahrt");
        break;
    }
    case 37788:
    {
        returnValue = F("An der Hub");
        break;
    }
    case 37789:
    {
        returnValue = F("An der Hubertusburg");
        break;
    }
    case 37790:
    {
        returnValue = F("An der Hubertusmühle");
        break;
    }
    case 37791:
    {
        returnValue = F("An der Hudau");
        break;
    }
    case 37792:
    {
        returnValue = F("An der Hude");
        break;
    }
    case 37793:
    {
        returnValue = F("An der Hudelslinde");
        break;
    }
    case 37794:
    {
        returnValue = F("An der Hufe");
        break;
    }
    case 37795:
    {
        returnValue = F("An der Hufschmiede");
        break;
    }
    case 37796:
    {
        returnValue = F("An der Hummelwiese");
        break;
    }
    case 37797:
    {
        returnValue = F("An der Hundemühl");
        break;
    }
    case 37798:
    {
        returnValue = F("An der Hundsanger");
        break;
    }
    case 37799:
    {
        returnValue = F("An der Hundsmühle");
        break;
    }
    case 37800:
    {
        returnValue = F("An der Hunnenschlucht");
        break;
    }
    case 37801:
    {
        returnValue = F("An der Hunte");
        break;
    }
    case 37802:
    {
        returnValue = F("An der Hurtbrücke");
        break;
    }
    case 37803:
    {
        returnValue = F("An der Hut");
        break;
    }
    case 37804:
    {
        returnValue = F("An der Hutbreite");
        break;
    }
    case 37805:
    {
        returnValue = F("An der Huth");
        break;
    }
    case 37806:
    {
        returnValue = F("An der Hutungswiese");
        break;
    }
    case 37807:
    {
        returnValue = F("An der Hutweide");
        break;
    }
    case 37808:
    {
        returnValue = F("An der Hyrchwiese");
        break;
    }
    case 37809:
    {
        returnValue = F("An der Häsel");
        break;
    }
    case 37810:
    {
        returnValue = F("An der Höchte");
        break;
    }
    case 37811:
    {
        returnValue = F("An der Höckerlinie");
        break;
    }
    case 37812:
    {
        returnValue = F("An der Höft");
        break;
    }
    case 37813:
    {
        returnValue = F("An der Högede");
        break;
    }
    case 37814:
    {
        returnValue = F("An der Höh");
        break;
    }
    case 37815:
    {
        returnValue = F("An der Höhe");
        break;
    }
    case 37816:
    {
        returnValue = F("An der Höhle");
        break;
    }
    case 37817:
    {
        returnValue = F("An der Höll");
        break;
    }
    case 37818:
    {
        returnValue = F("An der Höllenkammer");
        break;
    }
    case 37819:
    {
        returnValue = F("An der Höth");
        break;
    }
    case 37820:
    {
        returnValue = F("An der Höwe");
        break;
    }
    case 37821:
    {
        returnValue = F("An der Hüde");
        break;
    }
    case 37822:
    {
        returnValue = F("An der Hüfte");
        break;
    }
    case 37823:
    {
        returnValue = F("An der Hüftersheimer Mühle");
        break;
    }
    case 37824:
    {
        returnValue = F("An der Hügelstr.");
        break;
    }
    case 37825:
    {
        returnValue = F("An der Hüh");
        break;
    }
    case 37826:
    {
        returnValue = F("An der Hühle");
        break;
    }
    case 37827:
    {
        returnValue = F("An der Hühnerhecke");
        break;
    }
    case 37828:
    {
        returnValue = F("An der Hühnerhöhle");
        break;
    }
    case 37829:
    {
        returnValue = F("An der Hülbe");
        break;
    }
    case 37830:
    {
        returnValue = F("An der Hüle");
        break;
    }
    case 37831:
    {
        returnValue = F("An der Hüll");
        break;
    }
    case 37832:
    {
        returnValue = F("An der Hülle");
        break;
    }
    case 37833:
    {
        returnValue = F("An der Hülsebeeke");
        break;
    }
    case 37834:
    {
        returnValue = F("An der Hümes");
        break;
    }
    case 37835:
    {
        returnValue = F("An der Hürde");
        break;
    }
    case 37836:
    {
        returnValue = F("An der Hütmauer");
        break;
    }
    case 37837:
    {
        returnValue = F("An der Ihle");
        break;
    }
    case 37838:
    {
        returnValue = F("An der Ihlsbeck");
        break;
    }
    case 37839:
    {
        returnValue = F("An der Ilke");
        break;
    }
    case 37840:
    {
        returnValue = F("An der Iller");
        break;
    }
    case 37841:
    {
        returnValue = F("An der Ilm");
        break;
    }
    case 37842:
    {
        returnValue = F("An der Ilmenau");
        break;
    }
    case 37843:
    {
        returnValue = F("An der Ilse");
        break;
    }
    case 37844:
    {
        returnValue = F("An der Immenstelle");
        break;
    }
    case 37845:
    {
        returnValue = F("An der Immer");
        break;
    }
    case 37846:
    {
        returnValue = F("An der Industriebahn");
        break;
    }
    case 37847:
    {
        returnValue = F("An der Infanteriegalerie");
        break;
    }
    case 37848:
    {
        returnValue = F("An der Innerste");
        break;
    }
    case 37849:
    {
        returnValue = F("An der Insel");
        break;
    }
    case 37850:
    {
        returnValue = F("An der Inwieke");
        break;
    }
    case 37851:
    {
        returnValue = F("An der Isarau");
        break;
    }
    case 37852:
    {
        returnValue = F("An der Isarlust");
        break;
    }
    case 37853:
    {
        returnValue = F("An der Isen");
        break;
    }
    case 37854:
    {
        returnValue = F("An der Isenburg");
        break;
    }
    case 37855:
    {
        returnValue = F("An der Isidorkapelle");
        break;
    }
    case 37856:
    {
        returnValue = F("An der Isselkant");
        break;
    }
    case 37857:
    {
        returnValue = F("An der Itter");
        break;
    }
    case 37858:
    {
        returnValue = F("An der Itterbrücke");
        break;
    }
    case 37859:
    {
        returnValue = F("An der Itz");
        break;
    }
    case 37860:
    {
        returnValue = F("An der Jagdwirtschaft");
        break;
    }
    case 37861:
    {
        returnValue = F("An der Jagstbrücke");
        break;
    }
    case 37862:
    {
        returnValue = F("An der Jahna");
        break;
    }
    case 37863:
    {
        returnValue = F("An der Jakobuskirche");
        break;
    }
    case 37864:
    {
        returnValue = F("An der Johanneskirche");
        break;
    }
    case 37865:
    {
        returnValue = F("An der Johannishecke");
        break;
    }
    case 37866:
    {
        returnValue = F("An der Johannisweide");
        break;
    }
    case 37867:
    {
        returnValue = F("An der Jordanquelle");
        break;
    }
    case 37868:
    {
        returnValue = F("An der Josefkirche");
        break;
    }
    case 37869:
    {
        returnValue = F("An der Jossa");
        break;
    }
    case 37870:
    {
        returnValue = F("An der Juchhöh");
        break;
    }
    case 37871:
    {
        returnValue = F("An der Jucht");
        break;
    }
    case 37872:
    {
        returnValue = F("An der Jugendherberge");
        break;
    }
    case 37873:
    {
        returnValue = F("An der Juliushöhe");
        break;
    }
    case 37874:
    {
        returnValue = F("An der Jungfernmühle");
        break;
    }
    case 37875:
    {
        returnValue = F("An der Jungfernwiese");
        break;
    }
    case 37876:
    {
        returnValue = F("An der Jungwiese");
        break;
    }
    case 37877:
    {
        returnValue = F("An der Junkerheide");
        break;
    }
    case 37878:
    {
        returnValue = F("An der Junkermühle");
        break;
    }
    case 37879:
    {
        returnValue = F("An der Jägerhütte");
        break;
    }
    case 37880:
    {
        returnValue = F("An der Jägerkuhle");
        break;
    }
    case 37881:
    {
        returnValue = F("An der Jägermühle");
        break;
    }
    case 37882:
    {
        returnValue = F("An der Jägerwiese");
        break;
    }
    case 37883:
    {
        returnValue = F("An der Jöhstädter Str.");
        break;
    }
    case 37884:
    {
        returnValue = F("An der Jünglingshecke");
        break;
    }
    case 37885:
    {
        returnValue = F("An der Jüpke");
        break;
    }
    case 37886:
    {
        returnValue = F("An der K 15");
        break;
    }
    case 37887:
    {
        returnValue = F("An der K.M.E.");
        break;
    }
    case 37888:
    {
        returnValue = F("An der Kaapdüne");
        break;
    }
    case 37889:
    {
        returnValue = F("An der Kabelske");
        break;
    }
    case 37890:
    {
        returnValue = F("An der Kahre");
        break;
    }
    case 37891:
    {
        returnValue = F("An der Kahrstege");
        break;
    }
    case 37892:
    {
        returnValue = F("An der Kaiserallee");
        break;
    }
    case 37893:
    {
        returnValue = F("An der Kaiserbrauerei");
        break;
    }
    case 37894:
    {
        returnValue = F("An der Kaisereiche");
        break;
    }
    case 37895:
    {
        returnValue = F("An der Kaiserlinde");
        break;
    }
    case 37896:
    {
        returnValue = F("An der Kaiserpfalz");
        break;
    }
    case 37897:
    {
        returnValue = F("An der Kaiserquelle");
        break;
    }
    case 37898:
    {
        returnValue = F("An der Kaje");
        break;
    }
    case 37899:
    {
        returnValue = F("An der Kalkgrube");
        break;
    }
    case 37900:
    {
        returnValue = F("An der Kalkhütte");
        break;
    }
    case 37901:
    {
        returnValue = F("An der Kalkröse");
        break;
    }
    case 37902:
    {
        returnValue = F("An der Kalksteingrube");
        break;
    }
    case 37903:
    {
        returnValue = F("An der Kalle");
        break;
    }
    case 37904:
    {
        returnValue = F("An der Kalten Buche");
        break;
    }
    case 37905:
    {
        returnValue = F("An der Kalter");
        break;
    }
    case 37906:
    {
        returnValue = F("An der Kammerermühle");
        break;
    }
    case 37907:
    {
        returnValue = F("An der Kammerstatt");
        break;
    }
    case 37908:
    {
        returnValue = F("An der Kammfabrik");
        break;
    }
    case 37909:
    {
        returnValue = F("An der Kammgarn");
        break;
    }
    case 37910:
    {
        returnValue = F("An der Kampbrücke");
        break;
    }
    case 37911:
    {
        returnValue = F("An der Kampfbahn");
        break;
    }
    case 37912:
    {
        returnValue = F("An der Kampkoppel");
        break;
    }
    case 37913:
    {
        returnValue = F("An der Kampskuhle");
        break;
    }
    case 37914:
    {
        returnValue = F("An der Kanalbrücke");
        break;
    }
    case 37915:
    {
        returnValue = F("An der Kandel");
        break;
    }
    case 37916:
    {
        returnValue = F("An der Kandelskehre");
        break;
    }
    case 37917:
    {
        returnValue = F("An der Kander");
        break;
    }
    case 37918:
    {
        returnValue = F("An der Kanone");
        break;
    }
    case 37919:
    {
        returnValue = F("An der Kanonenbahn");
        break;
    }
    case 37920:
    {
        returnValue = F("An der Kante");
        break;
    }
    case 37921:
    {
        returnValue = F("An der Kanzlei");
        break;
    }
    case 37922:
    {
        returnValue = F("An der Kapell");
        break;
    }
    case 37923:
    {
        returnValue = F("An der Kapelle");
        break;
    }
    case 37924:
    {
        returnValue = F("An der Kapellenmühle");
        break;
    }
    case 37925:
    {
        returnValue = F("An der Kappel");
        break;
    }
    case 37926:
    {
        returnValue = F("An der Kappesgewann");
        break;
    }
    case 37927:
    {
        returnValue = F("An der Kappeslücke");
        break;
    }
    case 37928:
    {
        returnValue = F("An der Kapplach");
        break;
    }
    case 37929:
    {
        returnValue = F("An der Karbek");
        break;
    }
    case 37930:
    {
        returnValue = F("An der Karl-Marx-Str.");
        break;
    }
    case 37931:
    {
        returnValue = F("An der Karlsbahn");
        break;
    }
    case 37932:
    {
        returnValue = F("An der Karlshöhe");
        break;
    }
    case 37933:
    {
        returnValue = F("An der Karlsmühle");
        break;
    }
    case 37934:
    {
        returnValue = F("An der Karlsquelle");
        break;
    }
    case 37935:
    {
        returnValue = F("An der Karrbrücke");
        break;
    }
    case 37936:
    {
        returnValue = F("An der Karrenbrücke");
        break;
    }
    case 37937:
    {
        returnValue = F("An der Kartause");
        break;
    }
    case 37938:
    {
        returnValue = F("An der Kartoffelhalle");
        break;
    }
    case 37939:
    {
        returnValue = F("An der Kartonage");
        break;
    }
    case 37940:
    {
        returnValue = F("An der Kaserne");
        break;
    }
    case 37941:
    {
        returnValue = F("An der Kasse");
        break;
    }
    case 37942:
    {
        returnValue = F("An der Kasseler Str.");
        break;
    }
    case 37943:
    {
        returnValue = F("An der Kastanie");
        break;
    }
    case 37944:
    {
        returnValue = F("An der Kastanienallee");
        break;
    }
    case 37945:
    {
        returnValue = F("An der Katze");
        break;
    }
    case 37946:
    {
        returnValue = F("An der Katzengewann");
        break;
    }
    case 37947:
    {
        returnValue = F("An der Katzenhecke");
        break;
    }
    case 37948:
    {
        returnValue = F("An der Katzensteig");
        break;
    }
    case 37949:
    {
        returnValue = F("An der Kaufhalle");
        break;
    }
    case 37950:
    {
        returnValue = F("An der Kaul");
        break;
    }
    case 37951:
    {
        returnValue = F("An der Kauleck");
        break;
    }
    case 37952:
    {
        returnValue = F("An der Kegelbahn");
        break;
    }
    case 37953:
    {
        returnValue = F("An der Kegelhalle");
        break;
    }
    case 37954:
    {
        returnValue = F("An der Kehl");
        break;
    }
    case 37955:
    {
        returnValue = F("An der Kehr");
        break;
    }
    case 37956:
    {
        returnValue = F("An der Kehre");
        break;
    }
    case 37957:
    {
        returnValue = F("An der Kellergasse");
        break;
    }
    case 37958:
    {
        returnValue = F("An der Keltenschanze");
        break;
    }
    case 37959:
    {
        returnValue = F("An der Kelter");
        break;
    }
    case 37960:
    {
        returnValue = F("An der Kelterstation");
        break;
    }
    case 37961:
    {
        returnValue = F("An der Kelterwiese");
        break;
    }
    case 37962:
    {
        returnValue = F("An der Kemnade");
        break;
    }
    case 37963:
    {
        returnValue = F("An der Kemp");
        break;
    }
    case 37964:
    {
        returnValue = F("An der Keppritz");
        break;
    }
    case 37965:
    {
        returnValue = F("An der Keramik");
        break;
    }
    case 37966:
    {
        returnValue = F("An der Kesbach");
        break;
    }
    case 37967:
    {
        returnValue = F("An der Kessel");
        break;
    }
    case 37968:
    {
        returnValue = F("An der Kesselschmiede");
        break;
    }
    case 37969:
    {
        returnValue = F("An der Kesselspringe");
        break;
    }
    case 37970:
    {
        returnValue = F("An der Kesser");
        break;
    }
    case 37971:
    {
        returnValue = F("An der Kiefernhöhe");
        break;
    }
    case 37972:
    {
        returnValue = F("An der Kielstau");
        break;
    }
    case 37973:
    {
        returnValue = F("An der Kienheide");
        break;
    }
    case 37974:
    {
        returnValue = F("An der Kiesgrube");
        break;
    }
    case 37975:
    {
        returnValue = F("An der Kieskaul");
        break;
    }
    case 37976:
    {
        returnValue = F("An der Kieskaut");
        break;
    }
    case 37977:
    {
        returnValue = F("An der Kieskaute");
        break;
    }
    case 37978:
    {
        returnValue = F("An der Kieskuhle");
        break;
    }
    case 37979:
    {
        returnValue = F("An der Kiffe");
        break;
    }
    case 37980:
    {
        returnValue = F("An der Killwiese");
        break;
    }
    case 37981:
    {
        returnValue = F("An der Kimmelwiese");
        break;
    }
    case 37982:
    {
        returnValue = F("An der Kindswiese");
        break;
    }
    case 37983:
    {
        returnValue = F("An der Kinzig");
        break;
    }
    case 37984:
    {
        returnValue = F("An der Kipp");
        break;
    }
    case 37985:
    {
        returnValue = F("An der Kippe");
        break;
    }
    case 37986:
    {
        returnValue = F("An der Kirch");
        break;
    }
    case 37987:
    {
        returnValue = F("An der Kirche");
        break;
    }
    case 37988:
    {
        returnValue = F("An der Kirchenburg");
        break;
    }
    case 37989:
    {
        returnValue = F("An der Kirchenheide");
        break;
    }
    case 37990:
    {
        returnValue = F("An der Kirchenmühle");
        break;
    }
    case 37991:
    {
        returnValue = F("An der Kirchenpforte");
        break;
    }
    case 37992:
    {
        returnValue = F("An der Kirchenspitz");
        break;
    }
    case 37993:
    {
        returnValue = F("An der Kirchenwettern");
        break;
    }
    case 37994:
    {
        returnValue = F("An der Kirchenwiese");
        break;
    }
    case 37995:
    {
        returnValue = F("An der Kirchhöhe");
        break;
    }
    case 37996:
    {
        returnValue = F("An der Kirchleiten");
        break;
    }
    case 37997:
    {
        returnValue = F("An der Kirchmauer");
        break;
    }
    case 37998:
    {
        returnValue = F("An der Kirchpforte");
        break;
    }
    case 37999:
    {
        returnValue = F("An der Kirchschule");
        break;
    }
    case 38000:
    {
        returnValue = F("An der Kirchsteige");
        break;
    }
    case 38001:
    {
        returnValue = F("An der Kirchtreppe");
        break;
    }
    case 38002:
    {
        returnValue = F("An der Kirchwiese");
        break;
    }
    case 38003:
    {
        returnValue = F("An der Kirnitzsch");
        break;
    }
    case 38004:
    {
        returnValue = F("An der Kirschallee");
        break;
    }
    case 38005:
    {
        returnValue = F("An der Kirschenklamm");
        break;
    }
    case 38006:
    {
        returnValue = F("An der Kirschhecke");
        break;
    }
    case 38007:
    {
        returnValue = F("An der Kirschwiese");
        break;
    }
    case 38008:
    {
        returnValue = F("An der Kirsebek");
        break;
    }
    case 38009:
    {
        returnValue = F("An der Klamm");
        break;
    }
    case 38010:
    {
        returnValue = F("An der Klampe");
        break;
    }
    case 38011:
    {
        returnValue = F("An der Klanze");
        break;
    }
    case 38012:
    {
        returnValue = F("An der Klappbrücke");
        break;
    }
    case 38013:
    {
        returnValue = F("An der Klappermühle");
        break;
    }
    case 38014:
    {
        returnValue = F("An der Klapphake");
        break;
    }
    case 38015:
    {
        returnValue = F("An der Klause");
        break;
    }
    case 38016:
    {
        returnValue = F("An der Klauskirche");
        break;
    }
    case 38017:
    {
        returnValue = F("An der Klausmühle");
        break;
    }
    case 38018:
    {
        returnValue = F("An der Kleewiese");
        break;
    }
    case 38019:
    {
        returnValue = F("An der Kleier");
        break;
    }
    case 38020:
    {
        returnValue = F("An der Kleimühle");
        break;
    }
    case 38021:
    {
        returnValue = F("An der Kleinbahn");
        break;
    }
    case 38022:
    {
        returnValue = F("An der Kleinen Mauer");
        break;
    }
    case 38023:
    {
        returnValue = F("An der Kleinen Striegis");
        break;
    }
    case 38024:
    {
        returnValue = F("An der Kleinen Wiese");
        break;
    }
    case 38025:
    {
        returnValue = F("An der Kleinschmiede");
        break;
    }
    case 38026:
    {
        returnValue = F("An der Klempnitz");
        break;
    }
    case 38027:
    {
        returnValue = F("An der Klia");
        break;
    }
    case 38028:
    {
        returnValue = F("An der Kliffkante");
        break;
    }
    case 38029:
    {
        returnValue = F("An der Kling");
        break;
    }
    case 38030:
    {
        returnValue = F("An der Klinge");
        break;
    }
    case 38031:
    {
        returnValue = F("An der Klingelpforte");
        break;
    }
    case 38032:
    {
        returnValue = F("An der Klinke");
        break;
    }
    case 38033:
    {
        returnValue = F("An der Klinkermühle");
        break;
    }
    case 38034:
    {
        returnValue = F("An der Klippe");
        break;
    }
    case 38035:
    {
        returnValue = F("An der Kloppmaschin");
        break;
    }
    case 38036:
    {
        returnValue = F("An der Klosterforst");
        break;
    }
    case 38037:
    {
        returnValue = F("An der Klosterkirche");
        break;
    }
    case 38038:
    {
        returnValue = F("An der Klosterkoppel");
        break;
    }
    case 38039:
    {
        returnValue = F("An der Klostermauer");
        break;
    }
    case 38040:
    {
        returnValue = F("An der Klostermühle");
        break;
    }
    case 38041:
    {
        returnValue = F("An der Klosterruine");
        break;
    }
    case 38042:
    {
        returnValue = F("An der Klosterwiese");
        break;
    }
    case 38043:
    {
        returnValue = F("An der Kloßmanufaktur");
        break;
    }
    case 38044:
    {
        returnValue = F("An der Klunkau");
        break;
    }
    case 38045:
    {
        returnValue = F("An der Klunst");
        break;
    }
    case 38046:
    {
        returnValue = F("An der Klus");
        break;
    }
    case 38047:
    {
        returnValue = F("An der Kluse");
        break;
    }
    case 38048:
    {
        returnValue = F("An der Klye");
        break;
    }
    case 38049:
    {
        returnValue = F("An der Kläranlage");
        break;
    }
    case 38050:
    {
        returnValue = F("An der Klärwerkanlage");
        break;
    }
    case 38051:
    {
        returnValue = F("An der Knableiten");
        break;
    }
    case 38052:
    {
        returnValue = F("An der Knemühle");
        break;
    }
    case 38053:
    {
        returnValue = F("An der Kniebreche");
        break;
    }
    case 38054:
    {
        returnValue = F("An der Knochendarre");
        break;
    }
    case 38055:
    {
        returnValue = F("An der Knorpelschänke");
        break;
    }
    case 38056:
    {
        returnValue = F("An der Kobermühle");
        break;
    }
    case 38057:
    {
        returnValue = F("An der Kohlebahn");
        break;
    }
    case 38058:
    {
        returnValue = F("An der Kohlenbahn");
        break;
    }
    case 38059:
    {
        returnValue = F("An der Kohlenstr.");
        break;
    }
    case 38060:
    {
        returnValue = F("An der Kohlplatte");
        break;
    }
    case 38061:
    {
        returnValue = F("An der Kohlstatt");
        break;
    }
    case 38062:
    {
        returnValue = F("An der Kohlstelle");
        break;
    }
    case 38063:
    {
        returnValue = F("An der Kohlwalle");
        break;
    }
    case 38064:
    {
        returnValue = F("An der Koldung");
        break;
    }
    case 38065:
    {
        returnValue = F("An der Kolonie");
        break;
    }
    case 38066:
    {
        returnValue = F("An der Kolvenburg");
        break;
    }
    case 38067:
    {
        returnValue = F("An der Kommandantur");
        break;
    }
    case 38068:
    {
        returnValue = F("An der Kommende");
        break;
    }
    case 38069:
    {
        returnValue = F("An der Kond");
        break;
    }
    case 38070:
    {
        returnValue = F("An der Kopp");
        break;
    }
    case 38071:
    {
        returnValue = F("An der Koppe");
        break;
    }
    case 38072:
    {
        returnValue = F("An der Koppel");
        break;
    }
    case 38073:
    {
        returnValue = F("An der Korbweide");
        break;
    }
    case 38074:
    {
        returnValue = F("An der Korkmühle");
        break;
    }
    case 38075:
    {
        returnValue = F("An der Kormke");
        break;
    }
    case 38076:
    {
        returnValue = F("An der Korngasse");
        break;
    }
    case 38077:
    {
        returnValue = F("An der Korsopromenade");
        break;
    }
    case 38078:
    {
        returnValue = F("An der Kortecke");
        break;
    }
    case 38079:
    {
        returnValue = F("An der Kraftisrieder Str.");
        break;
    }
    case 38080:
    {
        returnValue = F("An der Kraftzentrale");
        break;
    }
    case 38081:
    {
        returnValue = F("An der Kraich");
        break;
    }
    case 38082:
    {
        returnValue = F("An der Krainke");
        break;
    }
    case 38083:
    {
        returnValue = F("An der Kranenweide");
        break;
    }
    case 38084:
    {
        returnValue = F("An der Krassach");
        break;
    }
    case 38085:
    {
        returnValue = F("An der Krautbitze");
        break;
    }
    case 38086:
    {
        returnValue = F("An der Krautwiese");
        break;
    }
    case 38087:
    {
        returnValue = F("An der Krebsburg");
        break;
    }
    case 38088:
    {
        returnValue = F("An der Krebsmühle");
        break;
    }
    case 38089:
    {
        returnValue = F("An der Kreidegrube");
        break;
    }
    case 38090:
    {
        returnValue = F("An der Kreidlwiesn");
        break;
    }
    case 38091:
    {
        returnValue = F("An der Kreisbahn");
        break;
    }
    case 38092:
    {
        returnValue = F("An der Kreisstr.");
        break;
    }
    case 38093:
    {
        returnValue = F("An der Krellse");
        break;
    }
    case 38094:
    {
        returnValue = F("An der Krepp");
        break;
    }
    case 38095:
    {
        returnValue = F("An der Kreppe");
        break;
    }
    case 38096:
    {
        returnValue = F("An der Kreutzbrede");
        break;
    }
    case 38097:
    {
        returnValue = F("An der Kreutzwiese");
        break;
    }
    case 38098:
    {
        returnValue = F("An der Kreuzbreite");
        break;
    }
    case 38099:
    {
        returnValue = F("An der Kreuzgrube");
        break;
    }
    case 38100:
    {
        returnValue = F("An der Kreuzheck");
        break;
    }
    case 38101:
    {
        returnValue = F("An der Kreuzkapelle");
        break;
    }
    case 38102:
    {
        returnValue = F("An der Kreuzkirche");
        break;
    }
    case 38103:
    {
        returnValue = F("An der Kreuzkupp");
        break;
    }
    case 38104:
    {
        returnValue = F("An der Kreuzstr.");
        break;
    }
    case 38105:
    {
        returnValue = F("An der Kreuztanne");
        break;
    }
    case 38106:
    {
        returnValue = F("An der Kreuzung");
        break;
    }
    case 38107:
    {
        returnValue = F("An der Kreuzwiese");
        break;
    }
    case 38108:
    {
        returnValue = F("An der Kriebecke");
        break;
    }
    case 38109:
    {
        returnValue = F("An der Krim");
        break;
    }
    case 38110:
    {
        returnValue = F("An der Krippe");
        break;
    }
    case 38111:
    {
        returnValue = F("An der Kroneneiche");
        break;
    }
    case 38112:
    {
        returnValue = F("An der Kronsdelle");
        break;
    }
    case 38113:
    {
        returnValue = F("An der Kruchenbach");
        break;
    }
    case 38114:
    {
        returnValue = F("An der Krumbach");
        break;
    }
    case 38115:
    {
        returnValue = F("An der Krummen Mauer");
        break;
    }
    case 38116:
    {
        returnValue = F("An der Krusau");
        break;
    }
    case 38117:
    {
        returnValue = F("An der Krähenhardt");
        break;
    }
    case 38118:
    {
        returnValue = F("An der Krähenheide");
        break;
    }
    case 38119:
    {
        returnValue = F("An der Krämershecke");
        break;
    }
    case 38120:
    {
        returnValue = F("An der Krölls Mühle");
        break;
    }
    case 38121:
    {
        returnValue = F("An der Krückau");
        break;
    }
    case 38122:
    {
        returnValue = F("An der Krücke");
        break;
    }
    case 38123:
    {
        returnValue = F("An der Krümme");
        break;
    }
    case 38124:
    {
        returnValue = F("An der Kuchelbreite");
        break;
    }
    case 38125:
    {
        returnValue = F("An der Kudix Laake");
        break;
    }
    case 38126:
    {
        returnValue = F("An der Kugeleiche");
        break;
    }
    case 38127:
    {
        returnValue = F("An der Kuhbrücksau");
        break;
    }
    case 38128:
    {
        returnValue = F("An der Kuhle");
        break;
    }
    case 38129:
    {
        returnValue = F("An der Kuhpforte");
        break;
    }
    case 38130:
    {
        returnValue = F("An der Kuhstr.");
        break;
    }
    case 38131:
    {
        returnValue = F("An der Kuhtrift");
        break;
    }
    case 38132:
    {
        returnValue = F("An der Kuhtränke");
        break;
    }
    case 38133:
    {
        returnValue = F("An der Kull");
        break;
    }
    case 38134:
    {
        returnValue = F("An der Kulmleite");
        break;
    }
    case 38135:
    {
        returnValue = F("An der Kulturhalle");
        break;
    }
    case 38136:
    {
        returnValue = F("An der Kummel");
        break;
    }
    case 38137:
    {
        returnValue = F("An der Kunst");
        break;
    }
    case 38138:
    {
        returnValue = F("An der Kupfermühle");
        break;
    }
    case 38139:
    {
        returnValue = F("An der Kupferschmiede");
        break;
    }
    case 38140:
    {
        returnValue = F("An der Kuppe");
        break;
    }
    case 38141:
    {
        returnValue = F("An der Kuppel");
        break;
    }
    case 38142:
    {
        returnValue = F("An der Kurau");
        break;
    }
    case 38143:
    {
        returnValue = F("An der Kurpfalzmühle");
        break;
    }
    case 38144:
    {
        returnValue = F("An der Kurpromenade");
        break;
    }
    case 38145:
    {
        returnValue = F("An der Kurzecke");
        break;
    }
    case 38146:
    {
        returnValue = F("An der Kurzen Gewanne");
        break;
    }
    case 38147:
    {
        returnValue = F("An der Käbnitz");
        break;
    }
    case 38148:
    {
        returnValue = F("An der Kähnhecke");
        break;
    }
    case 38149:
    {
        returnValue = F("An der Kälberhut");
        break;
    }
    case 38150:
    {
        returnValue = F("An der Kälberweid");
        break;
    }
    case 38151:
    {
        returnValue = F("An der Kälberweide");
        break;
    }
    case 38152:
    {
        returnValue = F("An der Kälschbach");
        break;
    }
    case 38153:
    {
        returnValue = F("An der Kämpe");
        break;
    }
    case 38154:
    {
        returnValue = F("An der Käsebank");
        break;
    }
    case 38155:
    {
        returnValue = F("An der Käsküche");
        break;
    }
    case 38156:
    {
        returnValue = F("An der Köhlerei");
        break;
    }
    case 38157:
    {
        returnValue = F("An der Köhm");
        break;
    }
    case 38158:
    {
        returnValue = F("An der Kölnmaar");
        break;
    }
    case 38159:
    {
        returnValue = F("An der Königsburg");
        break;
    }
    case 38160:
    {
        returnValue = F("An der Königsgrube");
        break;
    }
    case 38161:
    {
        returnValue = F("An der Königshöhe");
        break;
    }
    case 38162:
    {
        returnValue = F("An der Königslinde");
        break;
    }
    case 38163:
    {
        returnValue = F("An der Königsmühle");
        break;
    }
    case 38164:
    {
        returnValue = F("An der Königstanne");
        break;
    }
    case 38165:
    {
        returnValue = F("An der Königswiese");
        break;
    }
    case 38166:
    {
        returnValue = F("An der Köppelwies");
        break;
    }
    case 38167:
    {
        returnValue = F("An der Köppernitz");
        break;
    }
    case 38168:
    {
        returnValue = F("An der Körnerbrücke");
        break;
    }
    case 38169:
    {
        returnValue = F("An der Körsche");
        break;
    }
    case 38170:
    {
        returnValue = F("An der Kösseine");
        break;
    }
    case 38171:
    {
        returnValue = F("An der Kötach");
        break;
    }
    case 38172:
    {
        returnValue = F("An der Kößnach");
        break;
    }
    case 38173:
    {
        returnValue = F("An der Küchelgrube");
        break;
    }
    case 38174:
    {
        returnValue = F("An der Küchenbreite");
        break;
    }
    case 38175:
    {
        returnValue = F("An der Kühnheide");
        break;
    }
    case 38176:
    {
        returnValue = F("An der Kühruh");
        break;
    }
    case 38177:
    {
        returnValue = F("An der Kühtrat");
        break;
    }
    case 38178:
    {
        returnValue = F("An der Kürassierkaserne");
        break;
    }
    case 38179:
    {
        returnValue = F("An der Küthe");
        break;
    }
    case 38180:
    {
        returnValue = F("An der L 02");
        break;
    }
    case 38181:
    {
        returnValue = F("An der L 108");
        break;
    }
    case 38182:
    {
        returnValue = F("An der L 113");
        break;
    }
    case 38183:
    {
        returnValue = F("An der L 170");
        break;
    }
    case 38184:
    {
        returnValue = F("An der L 184");
        break;
    }
    case 38185:
    {
        returnValue = F("An der LPG");
        break;
    }
    case 38186:
    {
        returnValue = F("An der Laaber");
        break;
    }
    case 38187:
    {
        returnValue = F("An der Laaberquelle");
        break;
    }
    case 38188:
    {
        returnValue = F("An der Laach");
        break;
    }
    case 38189:
    {
        returnValue = F("An der Laag");
        break;
    }
    case 38190:
    {
        returnValue = F("An der Laak");
        break;
    }
    case 38191:
    {
        returnValue = F("An der Lach");
        break;
    }
    case 38192:
    {
        returnValue = F("An der Lache");
        break;
    }
    case 38193:
    {
        returnValue = F("An der Lackfabrik");
        break;
    }
    case 38194:
    {
        returnValue = F("An der Ladestr.");
        break;
    }
    case 38195:
    {
        returnValue = F("An der Lagune");
        break;
    }
    case 38196:
    {
        returnValue = F("An der Lahn");
        break;
    }
    case 38197:
    {
        returnValue = F("An der Lahnbrücke");
        break;
    }
    case 38198:
    {
        returnValue = F("An der Lai");
        break;
    }
    case 38199:
    {
        returnValue = F("An der Laich");
        break;
    }
    case 38200:
    {
        returnValue = F("An der Lake");
        break;
    }
    case 38201:
    {
        returnValue = F("An der Lamme");
        break;
    }
    case 38202:
    {
        returnValue = F("An der Lammert");
        break;
    }
    case 38203:
    {
        returnValue = F("An der Lande");
        break;
    }
    case 38204:
    {
        returnValue = F("An der Landebahn");
        break;
    }
    case 38205:
    {
        returnValue = F("An der Landesgrenze");
        break;
    }
    case 38206:
    {
        returnValue = F("An der Landeskrone");
        break;
    }
    case 38207:
    {
        returnValue = F("An der Landesstr.");
        break;
    }
    case 38208:
    {
        returnValue = F("An der Landhege");
        break;
    }
    case 38209:
    {
        returnValue = F("An der Landleite");
        break;
    }
    case 38210:
    {
        returnValue = F("An der Landriede");
        break;
    }
    case 38211:
    {
        returnValue = F("An der Landscheide");
        break;
    }
    case 38212:
    {
        returnValue = F("An der Landskronbrauerei");
        break;
    }
    case 38213:
    {
        returnValue = F("An der Landstr.");
        break;
    }
    case 38214:
    {
        returnValue = F("An der Landstraß");
        break;
    }
    case 38215:
    {
        returnValue = F("An der Landvogtei");
        break;
    }
    case 38216:
    {
        returnValue = F("An der Landwehr");
        break;
    }
    case 38217:
    {
        returnValue = F("An der Lang");
        break;
    }
    case 38218:
    {
        returnValue = F("An der Langackergasse");
        break;
    }
    case 38219:
    {
        returnValue = F("An der Langen Brücke");
        break;
    }
    case 38220:
    {
        returnValue = F("An der Langen Wiese");
        break;
    }
    case 38221:
    {
        returnValue = F("An der Langenstr.");
        break;
    }
    case 38222:
    {
        returnValue = F("An der Langenwies");
        break;
    }
    case 38223:
    {
        returnValue = F("An der Langwiese");
        break;
    }
    case 38224:
    {
        returnValue = F("An der Lanke");
        break;
    }
    case 38225:
    {
        returnValue = F("An der Lanver");
        break;
    }
    case 38226:
    {
        returnValue = F("An der Lasbek");
        break;
    }
    case 38227:
    {
        returnValue = F("An der Lau");
        break;
    }
    case 38228:
    {
        returnValue = F("An der Laube");
        break;
    }
    case 38229:
    {
        returnValue = F("An der Lauchert");
        break;
    }
    case 38230:
    {
        returnValue = F("An der Lauchstädter Str.");
        break;
    }
    case 38231:
    {
        returnValue = F("An der Laufe");
        break;
    }
    case 38232:
    {
        returnValue = F("An der Laugna");
        break;
    }
    case 38233:
    {
        returnValue = F("An der Lausekuppe");
        break;
    }
    case 38234:
    {
        returnValue = F("An der Laushecke");
        break;
    }
    case 38235:
    {
        returnValue = F("An der Lausur");
        break;
    }
    case 38236:
    {
        returnValue = F("An der Laut");
        break;
    }
    case 38237:
    {
        returnValue = F("An der Laute");
        break;
    }
    case 38238:
    {
        returnValue = F("An der Lauter");
        break;
    }
    case 38239:
    {
        returnValue = F("An der Lauterach");
        break;
    }
    case 38240:
    {
        returnValue = F("An der Lauterhecke");
        break;
    }
    case 38241:
    {
        returnValue = F("An der Lay");
        break;
    }
    case 38242:
    {
        returnValue = F("An der Layenmühle");
        break;
    }
    case 38243:
    {
        returnValue = F("An der Lazarettkirche");
        break;
    }
    case 38244:
    {
        returnValue = F("An der Lechleite");
        break;
    }
    case 38245:
    {
        returnValue = F("An der Lecker");
        break;
    }
    case 38246:
    {
        returnValue = F("An der Lederfabrik");
        break;
    }
    case 38247:
    {
        returnValue = F("An der Ledigen");
        break;
    }
    case 38248:
    {
        returnValue = F("An der Leegde");
        break;
    }
    case 38249:
    {
        returnValue = F("An der Leerenschen Rinne");
        break;
    }
    case 38250:
    {
        returnValue = F("An der Legde");
        break;
    }
    case 38251:
    {
        returnValue = F("An der Legge");
        break;
    }
    case 38252:
    {
        returnValue = F("An der Lehde");
        break;
    }
    case 38253:
    {
        returnValue = F("An der Lehmbach");
        break;
    }
    case 38254:
    {
        returnValue = F("An der Lehmbahn");
        break;
    }
    case 38255:
    {
        returnValue = F("An der Lehmbreite");
        break;
    }
    case 38256:
    {
        returnValue = F("An der Lehmenkaute");
        break;
    }
    case 38257:
    {
        returnValue = F("An der Lehmgasse");
        break;
    }
    case 38258:
    {
        returnValue = F("An der Lehmgrube");
        break;
    }
    case 38259:
    {
        returnValue = F("An der Lehmhorst");
        break;
    }
    case 38260:
    {
        returnValue = F("An der Lehmkaut");
        break;
    }
    case 38261:
    {
        returnValue = F("An der Lehmkaute");
        break;
    }
    case 38262:
    {
        returnValue = F("An der Lehmkauthalle");
        break;
    }
    case 38263:
    {
        returnValue = F("An der Lehmkiete");
        break;
    }
    case 38264:
    {
        returnValue = F("An der Lehmkuhl");
        break;
    }
    case 38265:
    {
        returnValue = F("An der Lehmkuhle");
        break;
    }
    case 38266:
    {
        returnValue = F("An der Lehmkutte");
        break;
    }
    case 38267:
    {
        returnValue = F("An der Lehmwiese");
        break;
    }
    case 38268:
    {
        returnValue = F("An der Lehn");
        break;
    }
    case 38269:
    {
        returnValue = F("An der Lehne");
        break;
    }
    case 38270:
    {
        returnValue = F("An der Lehnsweide");
        break;
    }
    case 38271:
    {
        returnValue = F("An der Lehnwiese");
        break;
    }
    case 38272:
    {
        returnValue = F("An der Lehr");
        break;
    }
    case 38273:
    {
        returnValue = F("An der Lehrten");
        break;
    }
    case 38274:
    {
        returnValue = F("An der Lei");
        break;
    }
    case 38275:
    {
        returnValue = F("An der Leibi");
        break;
    }
    case 38276:
    {
        returnValue = F("An der Leide");
        break;
    }
    case 38277:
    {
        returnValue = F("An der Leierecke");
        break;
    }
    case 38278:
    {
        returnValue = F("An der Leiha");
        break;
    }
    case 38279:
    {
        returnValue = F("An der Leimgrube");
        break;
    }
    case 38280:
    {
        returnValue = F("An der Leimhütte");
        break;
    }
    case 38281:
    {
        returnValue = F("An der Leimkaul");
        break;
    }
    case 38282:
    {
        returnValue = F("An der Leine");
        break;
    }
    case 38283:
    {
        returnValue = F("An der Leinenkaute");
        break;
    }
    case 38284:
    {
        returnValue = F("An der Leinleiter");
        break;
    }
    case 38285:
    {
        returnValue = F("An der Leismühle");
        break;
    }
    case 38286:
    {
        returnValue = F("An der Leite");
        break;
    }
    case 38287:
    {
        returnValue = F("An der Leiten");
        break;
    }
    case 38288:
    {
        returnValue = F("An der Leith");
        break;
    }
    case 38289:
    {
        returnValue = F("An der Leithe");
        break;
    }
    case 38290:
    {
        returnValue = F("An der Leithen");
        break;
    }
    case 38291:
    {
        returnValue = F("An der Leitn");
        break;
    }
    case 38292:
    {
        returnValue = F("An der Leke");
        break;
    }
    case 38293:
    {
        returnValue = F("An der Lenne");
        break;
    }
    case 38294:
    {
        returnValue = F("An der Lenschbach");
        break;
    }
    case 38295:
    {
        returnValue = F("An der Lenther Linde");
        break;
    }
    case 38296:
    {
        returnValue = F("An der Lenzenmühle");
        break;
    }
    case 38297:
    {
        returnValue = F("An der Lerau");
        break;
    }
    case 38298:
    {
        returnValue = F("An der Lethe");
        break;
    }
    case 38299:
    {
        returnValue = F("An der Lettensteige");
        break;
    }
    case 38300:
    {
        returnValue = F("An der Lettkaute");
        break;
    }
    case 38301:
    {
        returnValue = F("An der Letze");
        break;
    }
    case 38302:
    {
        returnValue = F("An der Leuba");
        break;
    }
    case 38303:
    {
        returnValue = F("An der Leubach");
        break;
    }
    case 38304:
    {
        returnValue = F("An der Leuchtboje");
        break;
    }
    case 38305:
    {
        returnValue = F("An der Leuchte");
        break;
    }
    case 38306:
    {
        returnValue = F("An der Leuchtenburg");
        break;
    }
    case 38307:
    {
        returnValue = F("An der Lewitzmühle");
        break;
    }
    case 38308:
    {
        returnValue = F("An der Lexenmühle");
        break;
    }
    case 38309:
    {
        returnValue = F("An der Ley");
        break;
    }
    case 38310:
    {
        returnValue = F("An der Leye");
        break;
    }
    case 38311:
    {
        returnValue = F("An der Leyermühle");
        break;
    }
    case 38312:
    {
        returnValue = F("An der Lichtenburg");
        break;
    }
    case 38313:
    {
        returnValue = F("An der Lichtenhardt");
        break;
    }
    case 38314:
    {
        returnValue = F("An der Lichtsmühle");
        break;
    }
    case 38315:
    {
        returnValue = F("An der Lichtung");
        break;
    }
    case 38316:
    {
        returnValue = F("An der Lide");
        break;
    }
    case 38317:
    {
        returnValue = F("An der Liebenwalder Str.");
        break;
    }
    case 38318:
    {
        returnValue = F("An der Liebesallee");
        break;
    }
    case 38319:
    {
        returnValue = F("An der Liebesbuche");
        break;
    }
    case 38320:
    {
        returnValue = F("An der Liebestatt");
        break;
    }
    case 38321:
    {
        returnValue = F("An der Liebfrauenkirche");
        break;
    }
    case 38322:
    {
        returnValue = F("An der Liebssiedlung");
        break;
    }
    case 38323:
    {
        returnValue = F("An der Liede");
        break;
    }
    case 38324:
    {
        returnValue = F("An der Lieden");
        break;
    }
    case 38325:
    {
        returnValue = F("An der Liegend");
        break;
    }
    case 38326:
    {
        returnValue = F("An der Liete");
        break;
    }
    case 38327:
    {
        returnValue = F("An der Lieth");
        break;
    }
    case 38328:
    {
        returnValue = F("An der Liethe");
        break;
    }
    case 38329:
    {
        returnValue = F("An der Liethen");
        break;
    }
    case 38330:
    {
        returnValue = F("An der Limpseit");
        break;
    }
    case 38331:
    {
        returnValue = F("An der Limpurgbrücke");
        break;
    }
    case 38332:
    {
        returnValue = F("An der Linde");
        break;
    }
    case 38333:
    {
        returnValue = F("An der Lindenhöhe");
        break;
    }
    case 38334:
    {
        returnValue = F("An der Lindenkate");
        break;
    }
    case 38335:
    {
        returnValue = F("An der Lippershard");
        break;
    }
    case 38336:
    {
        returnValue = F("An der Litt");
        break;
    }
    case 38337:
    {
        returnValue = F("An der Littard");
        break;
    }
    case 38338:
    {
        returnValue = F("An der Litzke");
        break;
    }
    case 38339:
    {
        returnValue = F("An der Lobermühle");
        break;
    }
    case 38340:
    {
        returnValue = F("An der Lochmühle");
        break;
    }
    case 38341:
    {
        returnValue = F("An der Lockwitz");
        break;
    }
    case 38342:
    {
        returnValue = F("An der Loge");
        break;
    }
    case 38343:
    {
        returnValue = F("An der Loh");
        break;
    }
    case 38344:
    {
        returnValue = F("An der Lohe");
        break;
    }
    case 38345:
    {
        returnValue = F("An der Lohmühle");
        break;
    }
    case 38346:
    {
        returnValue = F("An der Lohstr.");
        break;
    }
    case 38347:
    {
        returnValue = F("An der Lohwiese");
        break;
    }
    case 38348:
    {
        returnValue = F("An der Loisach");
        break;
    }
    case 38349:
    {
        returnValue = F("An der Loisachbrücke");
        break;
    }
    case 38350:
    {
        returnValue = F("An der Lone");
        break;
    }
    case 38351:
    {
        returnValue = F("An der Lopau");
        break;
    }
    case 38352:
    {
        returnValue = F("An der Loreley");
        break;
    }
    case 38353:
    {
        returnValue = F("An der Lorfe");
        break;
    }
    case 38354:
    {
        returnValue = F("An der Losheide");
        break;
    }
    case 38355:
    {
        returnValue = F("An der Lossa");
        break;
    }
    case 38356:
    {
        returnValue = F("An der Losse");
        break;
    }
    case 38357:
    {
        returnValue = F("An der Lottbek");
        break;
    }
    case 38358:
    {
        returnValue = F("An der Loyer Bäke");
        break;
    }
    case 38359:
    {
        returnValue = F("An der Luchsenburg");
        break;
    }
    case 38360:
    {
        returnValue = F("An der Lucke");
        break;
    }
    case 38361:
    {
        returnValue = F("An der Ludwigfeste");
        break;
    }
    case 38362:
    {
        returnValue = F("An der Luhne");
        break;
    }
    case 38363:
    {
        returnValue = F("An der Luhnstedter Str.");
        break;
    }
    case 38364:
    {
        returnValue = F("An der Luisenhöhe");
        break;
    }
    case 38365:
    {
        returnValue = F("An der Lunebrücke");
        break;
    }
    case 38366:
    {
        returnValue = F("An der Lunette");
        break;
    }
    case 38367:
    {
        returnValue = F("An der Lust");
        break;
    }
    case 38368:
    {
        returnValue = F("An der Luthereiche");
        break;
    }
    case 38369:
    {
        returnValue = F("An der Lutter");
        break;
    }
    case 38370:
    {
        returnValue = F("An der Lutze");
        break;
    }
    case 38371:
    {
        returnValue = F("An der Lämmerwiese");
        break;
    }
    case 38372:
    {
        returnValue = F("An der Lände");
        break;
    }
    case 38373:
    {
        returnValue = F("An der Läng");
        break;
    }
    case 38374:
    {
        returnValue = F("An der Länge");
        break;
    }
    case 38375:
    {
        returnValue = F("An der Längwitz");
        break;
    }
    case 38376:
    {
        returnValue = F("An der Lärche");
        break;
    }
    case 38377:
    {
        returnValue = F("An der Läuterau");
        break;
    }
    case 38378:
    {
        returnValue = F("An der Löbershecke");
        break;
    }
    case 38379:
    {
        returnValue = F("An der Lögesmühle");
        break;
    }
    case 38380:
    {
        returnValue = F("An der Lönn");
        break;
    }
    case 38381:
    {
        returnValue = F("An der Löpsinger Mauer");
        break;
    }
    case 38382:
    {
        returnValue = F("An der Lösermühle");
        break;
    }
    case 38383:
    {
        returnValue = F("An der Lück");
        break;
    }
    case 38384:
    {
        returnValue = F("An der Lücke");
        break;
    }
    case 38385:
    {
        returnValue = F("An der Lüder");
        break;
    }
    case 38386:
    {
        returnValue = F("An der Lüdersdorfer Chaussee");
        break;
    }
    case 38387:
    {
        returnValue = F("An der Lütken Haar");
        break;
    }
    case 38388:
    {
        returnValue = F("An der Lütter");
        break;
    }
    case 38389:
    {
        returnValue = F("An der MTS");
        break;
    }
    case 38390:
    {
        returnValue = F("An der Maade");
        break;
    }
    case 38391:
    {
        returnValue = F("An der Maar");
        break;
    }
    case 38392:
    {
        returnValue = F("An der Maas");
        break;
    }
    case 38393:
    {
        returnValue = F("An der Madel");
        break;
    }
    case 38394:
    {
        returnValue = F("An der Magdel");
        break;
    }
    case 38395:
    {
        returnValue = F("An der Mahlsteig");
        break;
    }
    case 38396:
    {
        returnValue = F("An der Mahmilch");
        break;
    }
    case 38397:
    {
        returnValue = F("An der Maierbreiten");
        break;
    }
    case 38398:
    {
        returnValue = F("An der Maiheck");
        break;
    }
    case 38399:
    {
        returnValue = F("An der Maikoppel");
        break;
    }
    case 38400:
    {
        returnValue = F("An der Mainaue");
        break;
    }
    case 38401:
    {
        returnValue = F("An der Mainlände");
        break;
    }
    case 38402:
    {
        returnValue = F("An der Maisach");
        break;
    }
    case 38403:
    {
        returnValue = F("An der Maisenlach");
        break;
    }
    case 38404:
    {
        returnValue = F("An der Maishecke");
        break;
    }
    case 38405:
    {
        returnValue = F("An der Maitz");
        break;
    }
    case 38406:
    {
        returnValue = F("An der Malbe");
        break;
    }
    case 38407:
    {
        returnValue = F("An der Malchower Brücke");
        break;
    }
    case 38408:
    {
        returnValue = F("An der Maledei");
        break;
    }
    case 38409:
    {
        returnValue = F("An der Mallerbreite");
        break;
    }
    case 38410:
    {
        returnValue = F("An der Malte");
        break;
    }
    case 38411:
    {
        returnValue = F("An der Malxe");
        break;
    }
    case 38412:
    {
        returnValue = F("An der Mandling");
        break;
    }
    case 38413:
    {
        returnValue = F("An der Mangfall");
        break;
    }
    case 38414:
    {
        returnValue = F("An der Mangmühle");
        break;
    }
    case 38415:
    {
        returnValue = F("An der Marbach");
        break;
    }
    case 38416:
    {
        returnValue = F("An der Marburger Str.");
        break;
    }
    case 38417:
    {
        returnValue = F("An der Margarethenkirche");
        break;
    }
    case 38418:
    {
        returnValue = F("An der Marienbergstr.");
        break;
    }
    case 38419:
    {
        returnValue = F("An der Marienbrücke");
        break;
    }
    case 38420:
    {
        returnValue = F("An der Marienburg");
        break;
    }
    case 38421:
    {
        returnValue = F("An der Marienglashöhle");
        break;
    }
    case 38422:
    {
        returnValue = F("An der Marienhöhe");
        break;
    }
    case 38423:
    {
        returnValue = F("An der Marienhölzung");
        break;
    }
    case 38424:
    {
        returnValue = F("An der Marienkapelle");
        break;
    }
    case 38425:
    {
        returnValue = F("An der Marienkirche");
        break;
    }
    case 38426:
    {
        returnValue = F("An der Marienlinde");
        break;
    }
    case 38427:
    {
        returnValue = F("An der Marienschule");
        break;
    }
    case 38428:
    {
        returnValue = F("An der Marina");
        break;
    }
    case 38429:
    {
        returnValue = F("An der Mark");
        break;
    }
    case 38430:
    {
        returnValue = F("An der Marke");
        break;
    }
    case 38431:
    {
        returnValue = F("An der Markgrafenbrücke");
        break;
    }
    case 38432:
    {
        returnValue = F("An der Markgrafenkirche");
        break;
    }
    case 38433:
    {
        returnValue = F("An der Markscheide");
        break;
    }
    case 38434:
    {
        returnValue = F("An der Marktbrücke");
        break;
    }
    case 38435:
    {
        returnValue = F("An der Marktkirche");
        break;
    }
    case 38436:
    {
        returnValue = F("An der Marktmühle");
        break;
    }
    case 38437:
    {
        returnValue = F("An der Marktstr.");
        break;
    }
    case 38438:
    {
        returnValue = F("An der Marktwiese");
        break;
    }
    case 38439:
    {
        returnValue = F("An der Markung");
        break;
    }
    case 38440:
    {
        returnValue = F("An der Markuskirche");
        break;
    }
    case 38441:
    {
        returnValue = F("An der Marlach");
        break;
    }
    case 38442:
    {
        returnValue = F("An der Marpe");
        break;
    }
    case 38443:
    {
        returnValue = F("An der Marsch");
        break;
    }
    case 38444:
    {
        returnValue = F("An der Marter");
        break;
    }
    case 38445:
    {
        returnValue = F("An der Martinskirche");
        break;
    }
    case 38446:
    {
        returnValue = F("An der Martinswand");
        break;
    }
    case 38447:
    {
        returnValue = F("An der Martinusquelle");
        break;
    }
    case 38448:
    {
        returnValue = F("An der Marzahner Chaussee");
        break;
    }
    case 38449:
    {
        returnValue = F("An der Masch");
        break;
    }
    case 38450:
    {
        returnValue = F("An der Masche");
        break;
    }
    case 38451:
    {
        returnValue = F("An der Massermühle");
        break;
    }
    case 38452:
    {
        returnValue = F("An der Matilge");
        break;
    }
    case 38453:
    {
        returnValue = F("An der Matthiaskirche");
        break;
    }
    case 38454:
    {
        returnValue = F("An der Matthäikirche");
        break;
    }
    case 38455:
    {
        returnValue = F("An der Mauer");
        break;
    }
    case 38456:
    {
        returnValue = F("An der Maulbeeraue");
        break;
    }
    case 38457:
    {
        returnValue = F("An der Maulschelle");
        break;
    }
    case 38458:
    {
        returnValue = F("An der Maurine");
        break;
    }
    case 38459:
    {
        returnValue = F("An der Maus");
        break;
    }
    case 38460:
    {
        returnValue = F("An der Mauth");
        break;
    }
    case 38461:
    {
        returnValue = F("An der Maxe");
        break;
    }
    case 38462:
    {
        returnValue = F("An der Maxhütte");
        break;
    }
    case 38463:
    {
        returnValue = F("An der Maß");
        break;
    }
    case 38464:
    {
        returnValue = F("An der Mecken");
        break;
    }
    case 38465:
    {
        returnValue = F("An der Medem");
        break;
    }
    case 38466:
    {
        returnValue = F("An der Medger");
        break;
    }
    case 38467:
    {
        returnValue = F("An der Meente");
        break;
    }
    case 38468:
    {
        returnValue = F("An der Meer");
        break;
    }
    case 38469:
    {
        returnValue = F("An der Meesche");
        break;
    }
    case 38470:
    {
        returnValue = F("An der Mehde");
        break;
    }
    case 38471:
    {
        returnValue = F("An der Mehlbeeke");
        break;
    }
    case 38472:
    {
        returnValue = F("An der Mehle");
        break;
    }
    case 38473:
    {
        returnValue = F("An der Mehlsee");
        break;
    }
    case 38474:
    {
        returnValue = F("An der Mehrzweckhalle");
        break;
    }
    case 38475:
    {
        returnValue = F("An der Meierbreiten");
        break;
    }
    case 38476:
    {
        returnValue = F("An der Meierei");
        break;
    }
    case 38477:
    {
        returnValue = F("An der Meierwiese");
        break;
    }
    case 38478:
    {
        returnValue = F("An der Meile");
        break;
    }
    case 38479:
    {
        returnValue = F("An der Meiningenbrücke");
        break;
    }
    case 38480:
    {
        returnValue = F("An der Meinte");
        break;
    }
    case 38481:
    {
        returnValue = F("An der Meisengasse");
        break;
    }
    case 38482:
    {
        returnValue = F("An der Meline");
        break;
    }
    case 38483:
    {
        returnValue = F("An der Meme");
        break;
    }
    case 38484:
    {
        returnValue = F("An der Mente");
        break;
    }
    case 38485:
    {
        returnValue = F("An der Mergel");
        break;
    }
    case 38486:
    {
        returnValue = F("An der Mergelgrube");
        break;
    }
    case 38487:
    {
        returnValue = F("An der Mergelkuhle");
        break;
    }
    case 38488:
    {
        returnValue = F("An der Mergelskaul");
        break;
    }
    case 38489:
    {
        returnValue = F("An der Merlenburg");
        break;
    }
    case 38490:
    {
        returnValue = F("An der Messe");
        break;
    }
    case 38491:
    {
        returnValue = F("An der Metow");
        break;
    }
    case 38492:
    {
        returnValue = F("An der Michaelschule");
        break;
    }
    case 38493:
    {
        returnValue = F("An der Michelheide");
        break;
    }
    case 38494:
    {
        returnValue = F("An der Miela");
        break;
    }
    case 38495:
    {
        returnValue = F("An der Miele");
        break;
    }
    case 38496:
    {
        returnValue = F("An der Miere");
        break;
    }
    case 38497:
    {
        returnValue = F("An der Milchrampe");
        break;
    }
    case 38498:
    {
        returnValue = F("An der Milchstelle");
        break;
    }
    case 38499:
    {
        returnValue = F("An der Milchviehanlage");
        break;
    }
    case 38500:
    {
        returnValue = F("An der Mildenitz");
        break;
    }
    case 38501:
    {
        returnValue = F("An der Millerbek");
        break;
    }
    case 38502:
    {
        returnValue = F("An der Milseburg");
        break;
    }
    case 38503:
    {
        returnValue = F("An der Mindel");
        break;
    }
    case 38504:
    {
        returnValue = F("An der Mirabellenwiese");
        break;
    }
    case 38505:
    {
        returnValue = F("An der Miss");
        break;
    }
    case 38506:
    {
        returnValue = F("An der Mittagswiese");
        break;
    }
    case 38507:
    {
        returnValue = F("An der Mittelbreite");
        break;
    }
    case 38508:
    {
        returnValue = F("An der Mittelbrücke");
        break;
    }
    case 38509:
    {
        returnValue = F("An der Mittelleite");
        break;
    }
    case 38510:
    {
        returnValue = F("An der Mittelmühle");
        break;
    }
    case 38511:
    {
        returnValue = F("An der Mittelschule");
        break;
    }
    case 38512:
    {
        returnValue = F("An der Modau");
        break;
    }
    case 38513:
    {
        returnValue = F("An der Mohle");
        break;
    }
    case 38514:
    {
        returnValue = F("An der Mohrenstr.");
        break;
    }
    case 38515:
    {
        returnValue = F("An der Mohrsmühle");
        break;
    }
    case 38516:
    {
        returnValue = F("An der Molkenwiese");
        break;
    }
    case 38517:
    {
        returnValue = F("An der Molkerei");
        break;
    }
    case 38518:
    {
        returnValue = F("An der Molkereischule");
        break;
    }
    case 38519:
    {
        returnValue = F("An der Molkeswiese");
        break;
    }
    case 38520:
    {
        returnValue = F("An der Molle");
        break;
    }
    case 38521:
    {
        returnValue = F("An der Molmecker Kirche");
        break;
    }
    case 38522:
    {
        returnValue = F("An der Mommel");
        break;
    }
    case 38523:
    {
        returnValue = F("An der Mondraute");
        break;
    }
    case 38524:
    {
        returnValue = F("An der Monna");
        break;
    }
    case 38525:
    {
        returnValue = F("An der Moorbahn");
        break;
    }
    case 38526:
    {
        returnValue = F("An der Moorbeeke");
        break;
    }
    case 38527:
    {
        returnValue = F("An der Moorbek");
        break;
    }
    case 38528:
    {
        returnValue = F("An der Moore");
        break;
    }
    case 38529:
    {
        returnValue = F("An der Moorkoppel");
        break;
    }
    case 38530:
    {
        returnValue = F("An der Moorkuhle");
        break;
    }
    case 38531:
    {
        returnValue = F("An der Mooskaue");
        break;
    }
    case 38532:
    {
        returnValue = F("An der Moosleite");
        break;
    }
    case 38533:
    {
        returnValue = F("An der Moosmühle");
        break;
    }
    case 38534:
    {
        returnValue = F("An der Morgensonne");
        break;
    }
    case 38535:
    {
        returnValue = F("An der Mortel");
        break;
    }
    case 38536:
    {
        returnValue = F("An der Mosel");
        break;
    }
    case 38537:
    {
        returnValue = F("An der Mosterei");
        break;
    }
    case 38538:
    {
        returnValue = F("An der Motel");
        break;
    }
    case 38539:
    {
        returnValue = F("An der Motte");
        break;
    }
    case 38540:
    {
        returnValue = F("An der Mozartstr.");
        break;
    }
    case 38541:
    {
        returnValue = F("An der Muhre");
        break;
    }
    case 38542:
    {
        returnValue = F("An der Mulde");
        break;
    }
    case 38543:
    {
        returnValue = F("An der Muldenaue");
        break;
    }
    case 38544:
    {
        returnValue = F("An der Muldenbrücke");
        break;
    }
    case 38545:
    {
        returnValue = F("An der Muldenwiese");
        break;
    }
    case 38546:
    {
        returnValue = F("An der Museumsbahn");
        break;
    }
    case 38547:
    {
        returnValue = F("An der Musikhalle");
        break;
    }
    case 38548:
    {
        returnValue = F("An der Mutstaffel");
        break;
    }
    case 38549:
    {
        returnValue = F("An der Mutterbach");
        break;
    }
    case 38550:
    {
        returnValue = F("An der Mäker");
        break;
    }
    case 38551:
    {
        returnValue = F("An der Mälzerei");
        break;
    }
    case 38552:
    {
        returnValue = F("An der Märzenquelle");
        break;
    }
    case 38553:
    {
        returnValue = F("An der Mäsbek");
        break;
    }
    case 38554:
    {
        returnValue = F("An der Mäsche");
        break;
    }
    case 38555:
    {
        returnValue = F("An der Möhlinhalle");
        break;
    }
    case 38556:
    {
        returnValue = F("An der Möhringsburg");
        break;
    }
    case 38557:
    {
        returnValue = F("An der Mönchshecke");
        break;
    }
    case 38558:
    {
        returnValue = F("An der Mönchskappe");
        break;
    }
    case 38559:
    {
        returnValue = F("An der Mönchslede");
        break;
    }
    case 38560:
    {
        returnValue = F("An der Mönchstockheimer Str.");
        break;
    }
    case 38561:
    {
        returnValue = F("An der Möweninsel");
        break;
    }
    case 38562:
    {
        returnValue = F("An der Müggenburg");
        break;
    }
    case 38563:
    {
        returnValue = F("An der Mühl");
        break;
    }
    case 38564:
    {
        returnValue = F("An der Mühlbach");
        break;
    }
    case 38565:
    {
        returnValue = F("An der Mühlbachquelle");
        break;
    }
    case 38566:
    {
        returnValue = F("An der Mühlbreite");
        break;
    }
    case 38567:
    {
        returnValue = F("An der Mühlbrücke");
        break;
    }
    case 38568:
    {
        returnValue = F("An der Mühle");
        break;
    }
    case 38569:
    {
        returnValue = F("An der Mühle Merkwitz");
        break;
    }
    case 38570:
    {
        returnValue = F("An der Mühlenau");
        break;
    }
    case 38571:
    {
        returnValue = F("An der Mühlenaue");
        break;
    }
    case 38572:
    {
        returnValue = F("An der Mühlenbreede");
        break;
    }
    case 38573:
    {
        returnValue = F("An der Mühlenheide");
        break;
    }
    case 38574:
    {
        returnValue = F("An der Mühlenilse");
        break;
    }
    case 38575:
    {
        returnValue = F("An der Mühlenschule");
        break;
    }
    case 38576:
    {
        returnValue = F("An der Mühlensteige");
        break;
    }
    case 38577:
    {
        returnValue = F("An der Mühlentorweide");
        break;
    }
    case 38578:
    {
        returnValue = F("An der Mühlenweide");
        break;
    }
    case 38579:
    {
        returnValue = F("An der Mühlhalde");
        break;
    }
    case 38580:
    {
        returnValue = F("An der Mühlhecke");
        break;
    }
    case 38581:
    {
        returnValue = F("An der Mühlleite");
        break;
    }
    case 38582:
    {
        returnValue = F("An der Mühlseite");
        break;
    }
    case 38583:
    {
        returnValue = F("An der Mühlstatt");
        break;
    }
    case 38584:
    {
        returnValue = F("An der Mühlsteige");
        break;
    }
    case 38585:
    {
        returnValue = F("An der Mühlwiese");
        break;
    }
    case 38586:
    {
        returnValue = F("An der Müllerseite");
        break;
    }
    case 38587:
    {
        returnValue = F("An der Münze");
        break;
    }
    case 38588:
    {
        returnValue = F("An der Münzenbach");
        break;
    }
    case 38589:
    {
        returnValue = F("An der Müst");
        break;
    }
    case 38590:
    {
        returnValue = F("An der Müß");
        break;
    }
    case 38591:
    {
        returnValue = F("An der Nachtigall");
        break;
    }
    case 38592:
    {
        returnValue = F("An der Nachtweid");
        break;
    }
    case 38593:
    {
        returnValue = F("An der Nachtweide");
        break;
    }
    case 38594:
    {
        returnValue = F("An der Nagelschmiede");
        break;
    }
    case 38595:
    {
        returnValue = F("An der Naherfurth");
        break;
    }
    case 38596:
    {
        returnValue = F("An der Naherholung");
        break;
    }
    case 38597:
    {
        returnValue = F("An der Nandl");
        break;
    }
    case 38598:
    {
        returnValue = F("An der Napoleonsbrücke");
        break;
    }
    case 38599:
    {
        returnValue = F("An der Napoleonsbuche");
        break;
    }
    case 38600:
    {
        returnValue = F("An der Nassach");
        break;
    }
    case 38601:
    {
        returnValue = F("An der Nassau");
        break;
    }
    case 38602:
    {
        returnValue = F("An der Nasse");
        break;
    }
    case 38603:
    {
        returnValue = F("An der Natobrücke");
        break;
    }
    case 38604:
    {
        returnValue = F("An der Natterwiese");
        break;
    }
    case 38605:
    {
        returnValue = F("An der Naturbühne");
        break;
    }
    case 38606:
    {
        returnValue = F("An der Natzschung");
        break;
    }
    case 38607:
    {
        returnValue = F("An der Naßburg");
        break;
    }
    case 38608:
    {
        returnValue = F("An der Nebelbeeke");
        break;
    }
    case 38609:
    {
        returnValue = F("An der Nebelstation");
        break;
    }
    case 38610:
    {
        returnValue = F("An der Neckarbrücke");
        break;
    }
    case 38611:
    {
        returnValue = F("An der Neerdar");
        break;
    }
    case 38612:
    {
        returnValue = F("An der Neetze");
        break;
    }
    case 38613:
    {
        returnValue = F("An der Neiße");
        break;
    }
    case 38614:
    {
        returnValue = F("An der Nerzfarm");
        break;
    }
    case 38615:
    {
        returnValue = F("An der Nette");
        break;
    }
    case 38616:
    {
        returnValue = F("An der Nettkull");
        break;
    }
    case 38617:
    {
        returnValue = F("An der Neubauernsiedlung");
        break;
    }
    case 38618:
    {
        returnValue = F("An der Neuen Kirche");
        break;
    }
    case 38619:
    {
        returnValue = F("An der Neuen Scheune");
        break;
    }
    case 38620:
    {
        returnValue = F("An der Neuen Schule");
        break;
    }
    case 38621:
    {
        returnValue = F("An der Neuen Str.");
        break;
    }
    case 38622:
    {
        returnValue = F("An der Neuen Warte");
        break;
    }
    case 38623:
    {
        returnValue = F("An der Neuen Weed");
        break;
    }
    case 38624:
    {
        returnValue = F("An der Neuen Welt");
        break;
    }
    case 38625:
    {
        returnValue = F("An der Neuhäuser Str.");
        break;
    }
    case 38626:
    {
        returnValue = F("An der Neumühle");
        break;
    }
    case 38627:
    {
        returnValue = F("An der Neuwiese");
        break;
    }
    case 38628:
    {
        returnValue = F("An der Nicolaikirche");
        break;
    }
    case 38629:
    {
        returnValue = F("An der Niedeck");
        break;
    }
    case 38630:
    {
        returnValue = F("An der Niederbruck");
        break;
    }
    case 38631:
    {
        returnValue = F("An der Niederhohl");
        break;
    }
    case 38632:
    {
        returnValue = F("An der Niedermühle");
        break;
    }
    case 38633:
    {
        returnValue = F("An der Niers");
        break;
    }
    case 38634:
    {
        returnValue = F("An der Nieskyer Str.");
        break;
    }
    case 38635:
    {
        returnValue = F("An der Nikolaikirche");
        break;
    }
    case 38636:
    {
        returnValue = F("An der Nikolauspforte");
        break;
    }
    case 38637:
    {
        returnValue = F("An der Nordbahn");
        break;
    }
    case 38638:
    {
        returnValue = F("An der Norderhake");
        break;
    }
    case 38639:
    {
        returnValue = F("An der Norderreihe");
        break;
    }
    case 38640:
    {
        returnValue = F("An der Norderriede");
        break;
    }
    case 38641:
    {
        returnValue = F("An der Nordsee");
        break;
    }
    case 38642:
    {
        returnValue = F("An der Nordstr.");
        break;
    }
    case 38643:
    {
        returnValue = F("An der Norr");
        break;
    }
    case 38644:
    {
        returnValue = F("An der Not");
        break;
    }
    case 38645:
    {
        returnValue = F("An der Noßwitzbrücke");
        break;
    }
    case 38646:
    {
        returnValue = F("An der Nuthe");
        break;
    }
    case 38647:
    {
        returnValue = F("An der Nutzung");
        break;
    }
    case 38648:
    {
        returnValue = F("An der Nuß");
        break;
    }
    case 38649:
    {
        returnValue = F("An der Nußhecke");
        break;
    }
    case 38650:
    {
        returnValue = F("An der Nußleite");
        break;
    }
    case 38651:
    {
        returnValue = F("An der Nybro");
        break;
    }
    case 38652:
    {
        returnValue = F("An der Nüllheck");
        break;
    }
    case 38653:
    {
        returnValue = F("An der Nüst");
        break;
    }
    case 38654:
    {
        returnValue = F("An der Oahle");
        break;
    }
    case 38655:
    {
        returnValue = F("An der Obek");
        break;
    }
    case 38656:
    {
        returnValue = F("An der Oberau");
        break;
    }
    case 38657:
    {
        returnValue = F("An der Oberbek");
        break;
    }
    case 38658:
    {
        returnValue = F("An der Oberburg");
        break;
    }
    case 38659:
    {
        returnValue = F("An der Oberecke");
        break;
    }
    case 38660:
    {
        returnValue = F("An der Oberen Au");
        break;
    }
    case 38661:
    {
        returnValue = F("An der Oberen Dorfstr.");
        break;
    }
    case 38662:
    {
        returnValue = F("An der Oberen Lußhardt");
        break;
    }
    case 38663:
    {
        returnValue = F("An der Oberen Mühle");
        break;
    }
    case 38664:
    {
        returnValue = F("An der Oberen Nassach");
        break;
    }
    case 38665:
    {
        returnValue = F("An der Oberen Pforte");
        break;
    }
    case 38666:
    {
        returnValue = F("An der Oberhecke");
        break;
    }
    case 38667:
    {
        returnValue = F("An der Oberheide");
        break;
    }
    case 38668:
    {
        returnValue = F("An der Oberlück");
        break;
    }
    case 38669:
    {
        returnValue = F("An der Obermühle");
        break;
    }
    case 38670:
    {
        returnValue = F("An der Oberpforte");
        break;
    }
    case 38671:
    {
        returnValue = F("An der Oberschaar");
        break;
    }
    case 38672:
    {
        returnValue = F("An der Oberschule");
        break;
    }
    case 38673:
    {
        returnValue = F("An der Oberwalkmühle");
        break;
    }
    case 38674:
    {
        returnValue = F("An der Oberweide");
        break;
    }
    case 38675:
    {
        returnValue = F("An der Oberwiese");
        break;
    }
    case 38676:
    {
        returnValue = F("An der Obstbaumwiese");
        break;
    }
    case 38677:
    {
        returnValue = F("An der Obstbauschule");
        break;
    }
    case 38678:
    {
        returnValue = F("An der Obstplantage");
        break;
    }
    case 38679:
    {
        returnValue = F("An der Obstwiese");
        break;
    }
    case 38680:
    {
        returnValue = F("An der Ochsenkuhle");
        break;
    }
    case 38681:
    {
        returnValue = F("An der Ochsenweide");
        break;
    }
    case 38682:
    {
        returnValue = F("An der Oderbruchbahn");
        break;
    }
    case 38683:
    {
        returnValue = F("An der Oelmühle");
        break;
    }
    case 38684:
    {
        returnValue = F("An der Oelwiese");
        break;
    }
    case 38685:
    {
        returnValue = F("An der Oethe");
        break;
    }
    case 38686:
    {
        returnValue = F("An der Ohe");
        break;
    }
    case 38687:
    {
        returnValue = F("An der Ohm");
        break;
    }
    case 38688:
    {
        returnValue = F("An der Ohra");
        break;
    }
    case 38689:
    {
        returnValue = F("An der Ohre");
        break;
    }
    case 38690:
    {
        returnValue = F("An der Oje");
        break;
    }
    case 38691:
    {
        returnValue = F("An der Oker");
        break;
    }
    case 38692:
    {
        returnValue = F("An der Olef");
        break;
    }
    case 38693:
    {
        returnValue = F("An der Ollen");
        break;
    }
    case 38694:
    {
        returnValue = F("An der Orgel");
        break;
    }
    case 38695:
    {
        returnValue = F("An der Orke");
        break;
    }
    case 38696:
    {
        returnValue = F("An der Orla");
        break;
    }
    case 38697:
    {
        returnValue = F("An der Ortsliede");
        break;
    }
    case 38698:
    {
        returnValue = F("An der Ortsmauer");
        break;
    }
    case 38699:
    {
        returnValue = F("An der Ost-West-Brücke");
        break;
    }
    case 38700:
    {
        returnValue = F("An der Ostbahn");
        break;
    }
    case 38701:
    {
        returnValue = F("An der Oste");
        break;
    }
    case 38702:
    {
        returnValue = F("An der Osterau");
        break;
    }
    case 38703:
    {
        returnValue = F("An der Ostergrube");
        break;
    }
    case 38704:
    {
        returnValue = F("An der Osterhöge");
        break;
    }
    case 38705:
    {
        returnValue = F("An der Osterleite");
        break;
    }
    case 38706:
    {
        returnValue = F("An der Osternohe");
        break;
    }
    case 38707:
    {
        returnValue = F("An der Osterwiese");
        break;
    }
    case 38708:
    {
        returnValue = F("An der Ostpeene");
        break;
    }
    case 38709:
    {
        returnValue = F("An der Ostrach");
        break;
    }
    case 38710:
    {
        returnValue = F("An der Ostsee");
        break;
    }
    case 38711:
    {
        returnValue = F("An der Otteritz");
        break;
    }
    case 38712:
    {
        returnValue = F("An der Ottosäule");
        break;
    }
    case 38713:
    {
        returnValue = F("An der Ourbrücke");
        break;
    }
    case 38714:
    {
        returnValue = F("An der Oßnitz");
        break;
    }
    case 38715:
    {
        returnValue = F("An der Paas");
        break;
    }
    case 38716:
    {
        returnValue = F("An der Paaschburg");
        break;
    }
    case 38717:
    {
        returnValue = F("An der Paint");
        break;
    }
    case 38718:
    {
        returnValue = F("An der Pallerflumm");
        break;
    }
    case 38719:
    {
        returnValue = F("An der Papenmühle");
        break;
    }
    case 38720:
    {
        returnValue = F("An der Papierfabrik");
        break;
    }
    case 38721:
    {
        returnValue = F("An der Papiermühle");
        break;
    }
    case 38722:
    {
        returnValue = F("An der Pappel");
        break;
    }
    case 38723:
    {
        returnValue = F("An der Pappelweide");
        break;
    }
    case 38724:
    {
        returnValue = F("An der Parchimer Chaussee");
        break;
    }
    case 38725:
    {
        returnValue = F("An der Parkschule");
        break;
    }
    case 38726:
    {
        returnValue = F("An der Parthe");
        break;
    }
    case 38727:
    {
        returnValue = F("An der Parthenaue");
        break;
    }
    case 38728:
    {
        returnValue = F("An der Pasche");
        break;
    }
    case 38729:
    {
        returnValue = F("An der Paulikirche");
        break;
    }
    case 38730:
    {
        returnValue = F("An der Paulus-Bastei");
        break;
    }
    case 38731:
    {
        returnValue = F("An der Pech");
        break;
    }
    case 38732:
    {
        returnValue = F("An der Pechhütte");
        break;
    }
    case 38733:
    {
        returnValue = F("An der Peene");
        break;
    }
    case 38734:
    {
        returnValue = F("An der Petergrube");
        break;
    }
    case 38735:
    {
        returnValue = F("An der Peterskirche");
        break;
    }
    case 38736:
    {
        returnValue = F("An der Petri-Kirche");
        break;
    }
    case 38737:
    {
        returnValue = F("An der Petrikirche");
        break;
    }
    case 38738:
    {
        returnValue = F("An der Petruskirche");
        break;
    }
    case 38739:
    {
        returnValue = F("An der Peunthe");
        break;
    }
    case 38740:
    {
        returnValue = F("An der Pfaffenbach");
        break;
    }
    case 38741:
    {
        returnValue = F("An der Pfanne");
        break;
    }
    case 38742:
    {
        returnValue = F("An der Pfannenbreite");
        break;
    }
    case 38743:
    {
        returnValue = F("An der Pfannenschmiede");
        break;
    }
    case 38744:
    {
        returnValue = F("An der Pfarrbreite");
        break;
    }
    case 38745:
    {
        returnValue = F("An der Pfarre");
        break;
    }
    case 38746:
    {
        returnValue = F("An der Pfarrei");
        break;
    }
    case 38747:
    {
        returnValue = F("An der Pfarrpfründe");
        break;
    }
    case 38748:
    {
        returnValue = F("An der Pfarrwiese");
        break;
    }
    case 38749:
    {
        returnValue = F("An der Pfauenwiese");
        break;
    }
    case 38750:
    {
        returnValue = F("An der Pfaut");
        break;
    }
    case 38751:
    {
        returnValue = F("An der Pfeffermühle");
        break;
    }
    case 38752:
    {
        returnValue = F("An der Pfenniglohe");
        break;
    }
    case 38753:
    {
        returnValue = F("An der Pferdebahn");
        break;
    }
    case 38754:
    {
        returnValue = F("An der Pferdekoppel");
        break;
    }
    case 38755:
    {
        returnValue = F("An der Pferdeweide");
        break;
    }
    case 38756:
    {
        returnValue = F("An der Pferdewiese");
        break;
    }
    case 38757:
    {
        returnValue = F("An der Pferdsleite");
        break;
    }
    case 38758:
    {
        returnValue = F("An der Pfingstweide");
        break;
    }
    case 38759:
    {
        returnValue = F("An der Pfingstwiese");
        break;
    }
    case 38760:
    {
        returnValue = F("An der Pfisterleiten");
        break;
    }
    case 38761:
    {
        returnValue = F("An der Pfitz");
        break;
    }
    case 38762:
    {
        returnValue = F("An der Pfitze");
        break;
    }
    case 38763:
    {
        returnValue = F("An der Pflasterbahn");
        break;
    }
    case 38764:
    {
        returnValue = F("An der Pflaumenhohle");
        break;
    }
    case 38765:
    {
        returnValue = F("An der Pforte");
        break;
    }
    case 38766:
    {
        returnValue = F("An der Pfudrach");
        break;
    }
    case 38767:
    {
        returnValue = F("An der Pfütz");
        break;
    }
    case 38768:
    {
        returnValue = F("An der Pfütze");
        break;
    }
    case 38769:
    {
        returnValue = F("An der Pharma");
        break;
    }
    case 38770:
    {
        returnValue = F("An der Philippine");
        break;
    }
    case 38771:
    {
        returnValue = F("An der Pilze");
        break;
    }
    case 38772:
    {
        returnValue = F("An der Pinnau");
        break;
    }
    case 38773:
    {
        returnValue = F("An der Pinnhecke");
        break;
    }
    case 38774:
    {
        returnValue = F("An der Pirkacher Breite");
        break;
    }
    case 38775:
    {
        returnValue = F("An der Pirnermühle");
        break;
    }
    case 38776:
    {
        returnValue = F("An der Planitz");
        break;
    }
    case 38777:
    {
        returnValue = F("An der Planke");
        break;
    }
    case 38778:
    {
        returnValue = F("An der Plantage");
        break;
    }
    case 38779:
    {
        returnValue = F("An der Platane");
        break;
    }
    case 38780:
    {
        returnValue = F("An der Platte");
        break;
    }
    case 38781:
    {
        returnValue = F("An der Platzmauer");
        break;
    }
    case 38782:
    {
        returnValue = F("An der Pleckmühle");
        break;
    }
    case 38783:
    {
        returnValue = F("An der Pleiße");
        break;
    }
    case 38784:
    {
        returnValue = F("An der Plesse");
        break;
    }
    case 38785:
    {
        returnValue = F("An der Pletze");
        break;
    }
    case 38786:
    {
        returnValue = F("An der Pließnitz");
        break;
    }
    case 38787:
    {
        returnValue = F("An der Plüschweberei");
        break;
    }
    case 38788:
    {
        returnValue = F("An der Poche");
        break;
    }
    case 38789:
    {
        returnValue = F("An der Pockau");
        break;
    }
    case 38790:
    {
        returnValue = F("An der Poggenkuhle");
        break;
    }
    case 38791:
    {
        returnValue = F("An der Pohlitzer Mühle");
        break;
    }
    case 38792:
    {
        returnValue = F("An der Point");
        break;
    }
    case 38793:
    {
        returnValue = F("An der Pointen");
        break;
    }
    case 38794:
    {
        returnValue = F("An der Pointn");
        break;
    }
    case 38795:
    {
        returnValue = F("An der Poliklinik");
        break;
    }
    case 38796:
    {
        returnValue = F("An der Port");
        break;
    }
    case 38797:
    {
        returnValue = F("An der Post");
        break;
    }
    case 38798:
    {
        returnValue = F("An der Posthalterei");
        break;
    }
    case 38799:
    {
        returnValue = F("An der Poststeige");
        break;
    }
    case 38800:
    {
        returnValue = F("An der Poststr.");
        break;
    }
    case 38801:
    {
        returnValue = F("An der Postsäule");
        break;
    }
    case 38802:
    {
        returnValue = F("An der Pottschütt");
        break;
    }
    case 38803:
    {
        returnValue = F("An der Potztrine");
        break;
    }
    case 38804:
    {
        returnValue = F("An der Poxdorfer Str.");
        break;
    }
    case 38805:
    {
        returnValue = F("An der Prien");
        break;
    }
    case 38806:
    {
        returnValue = F("An der Priesterwiese");
        break;
    }
    case 38807:
    {
        returnValue = F("An der Prießnitzaue");
        break;
    }
    case 38808:
    {
        returnValue = F("An der Promenade");
        break;
    }
    case 38809:
    {
        returnValue = F("An der Promnitz");
        break;
    }
    case 38810:
    {
        returnValue = F("An der Propstei");
        break;
    }
    case 38811:
    {
        returnValue = F("An der Prügeleiche");
        break;
    }
    case 38812:
    {
        returnValue = F("An der Pulsnitz");
        break;
    }
    case 38813:
    {
        returnValue = F("An der Pulverhütte");
        break;
    }
    case 38814:
    {
        returnValue = F("An der Pulvermühle");
        break;
    }
    case 38815:
    {
        returnValue = F("An der Pumpe");
        break;
    }
    case 38816:
    {
        returnValue = F("An der Queckenmühle");
        break;
    }
    case 38817:
    {
        returnValue = F("An der Quelle");
        break;
    }
    case 38818:
    {
        returnValue = F("An der Quelllache");
        break;
    }
    case 38819:
    {
        returnValue = F("An der Querbreite");
        break;
    }
    case 38820:
    {
        returnValue = F("An der Querstr.");
        break;
    }
    case 38821:
    {
        returnValue = F("An der Quetge");
        break;
    }
    case 38822:
    {
        returnValue = F("An der Quänenburg");
        break;
    }
    case 38823:
    {
        returnValue = F("An der Raa");
        break;
    }
    case 38824:
    {
        returnValue = F("An der Rabenleite");
        break;
    }
    case 38825:
    {
        returnValue = F("An der Rachel");
        break;
    }
    case 38826:
    {
        returnValue = F("An der Rackstädt");
        break;
    }
    case 38827:
    {
        returnValue = F("An der Radegast");
        break;
    }
    case 38828:
    {
        returnValue = F("An der Raderstrass");
        break;
    }
    case 38829:
    {
        returnValue = F("An der Rakenhalde");
        break;
    }
    case 38830:
    {
        returnValue = F("An der Rampe");
        break;
    }
    case 38831:
    {
        returnValue = F("An der Raschauer Flurgrenze");
        break;
    }
    case 38832:
    {
        returnValue = F("An der Rase");
        break;
    }
    case 38833:
    {
        returnValue = F("An der Rasenspitze");
        break;
    }
    case 38834:
    {
        returnValue = F("An der Rast");
        break;
    }
    case 38835:
    {
        returnValue = F("An der Ratsmühle");
        break;
    }
    case 38836:
    {
        returnValue = F("An der Ratsziegelei");
        break;
    }
    case 38837:
    {
        returnValue = F("An der Raubkammer");
        break;
    }
    case 38838:
    {
        returnValue = F("An der Rauda");
        break;
    }
    case 38839:
    {
        returnValue = F("An der Rauhen Riede");
        break;
    }
    case 38840:
    {
        returnValue = F("An der Rauhleite");
        break;
    }
    case 38841:
    {
        returnValue = F("An der Rauhstedt");
        break;
    }
    case 38842:
    {
        returnValue = F("An der Raute");
        break;
    }
    case 38843:
    {
        returnValue = F("An der Rauterskath");
        break;
    }
    case 38844:
    {
        returnValue = F("An der Ravenlay");
        break;
    }
    case 38845:
    {
        returnValue = F("An der Realschule");
        break;
    }
    case 38846:
    {
        returnValue = F("An der Rechenmühle");
        break;
    }
    case 38847:
    {
        returnValue = F("An der Reede");
        break;
    }
    case 38848:
    {
        returnValue = F("An der Reeke");
        break;
    }
    case 38849:
    {
        returnValue = F("An der Rees");
        break;
    }
    case 38850:
    {
        returnValue = F("An der Regnitz");
        break;
    }
    case 38851:
    {
        returnValue = F("An der Regnitzbrücke");
        break;
    }
    case 38852:
    {
        returnValue = F("An der Reheide");
        break;
    }
    case 38853:
    {
        returnValue = F("An der Rehwiese");
        break;
    }
    case 38854:
    {
        returnValue = F("An der Reichen Ebrach");
        break;
    }
    case 38855:
    {
        returnValue = F("An der Reichenbach");
        break;
    }
    case 38856:
    {
        returnValue = F("An der Reichsbahn");
        break;
    }
    case 38857:
    {
        returnValue = F("An der Reichsstr.");
        break;
    }
    case 38858:
    {
        returnValue = F("An der Reihe");
        break;
    }
    case 38859:
    {
        returnValue = F("An der Reiherbeize");
        break;
    }
    case 38860:
    {
        returnValue = F("An der Reiherheide");
        break;
    }
    case 38861:
    {
        returnValue = F("An der Reimlinger Mauer");
        break;
    }
    case 38862:
    {
        returnValue = F("An der Reisachmühle");
        break;
    }
    case 38863:
    {
        returnValue = F("An der Reistl");
        break;
    }
    case 38864:
    {
        returnValue = F("An der Reitbahn");
        break;
    }
    case 38865:
    {
        returnValue = F("An der Reiterkoppel");
        break;
    }
    case 38866:
    {
        returnValue = F("An der Reiterwiese");
        break;
    }
    case 38867:
    {
        returnValue = F("An der Reithalle");
        break;
    }
    case 38868:
    {
        returnValue = F("An der Reithwiese");
        break;
    }
    case 38869:
    {
        returnValue = F("An der Reitkuhle");
        break;
    }
    case 38870:
    {
        returnValue = F("An der Reitschule");
        break;
    }
    case 38871:
    {
        returnValue = F("An der Reizleite");
        break;
    }
    case 38872:
    {
        returnValue = F("An der Reling");
        break;
    }
    case 38873:
    {
        returnValue = F("An der Rellau");
        break;
    }
    case 38874:
    {
        returnValue = F("An der Rems");
        break;
    }
    case 38875:
    {
        returnValue = F("An der Remte");
        break;
    }
    case 38876:
    {
        returnValue = F("An der Rench");
        break;
    }
    case 38877:
    {
        returnValue = F("An der Renn");
        break;
    }
    case 38878:
    {
        returnValue = F("An der Rennbahn");
        break;
    }
    case 38879:
    {
        returnValue = F("An der Renne");
        break;
    }
    case 38880:
    {
        returnValue = F("An der Renngasse");
        break;
    }
    case 38881:
    {
        returnValue = F("An der Rennkoppel");
        break;
    }
    case 38882:
    {
        returnValue = F("An der Rennweide");
        break;
    }
    case 38883:
    {
        returnValue = F("An der Repke");
        break;
    }
    case 38884:
    {
        returnValue = F("An der Residenz");
        break;
    }
    case 38885:
    {
        returnValue = F("An der Rethlage");
        break;
    }
    case 38886:
    {
        returnValue = F("An der Retloh");
        break;
    }
    case 38887:
    {
        returnValue = F("An der Rettungswache");
        break;
    }
    case 38888:
    {
        returnValue = F("An der Reute");
        break;
    }
    case 38889:
    {
        returnValue = F("An der Reutemühle");
        break;
    }
    case 38890:
    {
        returnValue = F("An der Reutenmühle");
        break;
    }
    case 38891:
    {
        returnValue = F("An der Reuterkoppel");
        break;
    }
    case 38892:
    {
        returnValue = F("An der Reuthe");
        break;
    }
    case 38893:
    {
        returnValue = F("An der Rheinberger Heide");
        break;
    }
    case 38894:
    {
        returnValue = F("An der Rheinfähre");
        break;
    }
    case 38895:
    {
        returnValue = F("An der Rheinschanze");
        break;
    }
    case 38896:
    {
        returnValue = F("An der Rhume");
        break;
    }
    case 38897:
    {
        returnValue = F("An der Rhumequelle");
        break;
    }
    case 38898:
    {
        returnValue = F("An der Rhünda");
        break;
    }
    case 38899:
    {
        returnValue = F("An der Richard");
        break;
    }
    case 38900:
    {
        returnValue = F("An der Richt");
        break;
    }
    case 38901:
    {
        returnValue = F("An der Richtermühle");
        break;
    }
    case 38902:
    {
        returnValue = F("An der Richtstatt");
        break;
    }
    case 38903:
    {
        returnValue = F("An der Riedbahn");
        break;
    }
    case 38904:
    {
        returnValue = F("An der Riede");
        break;
    }
    case 38905:
    {
        returnValue = F("An der Riedelgrube");
        break;
    }
    case 38906:
    {
        returnValue = F("An der Riedmühle");
        break;
    }
    case 38907:
    {
        returnValue = F("An der Riedwiese");
        break;
    }
    case 38908:
    {
        returnValue = F("An der Riehe");
        break;
    }
    case 38909:
    {
        returnValue = F("An der Ries");
        break;
    }
    case 38910:
    {
        returnValue = F("An der Riese");
        break;
    }
    case 38911:
    {
        returnValue = F("An der Riesen");
        break;
    }
    case 38912:
    {
        returnValue = F("An der Riesenburg");
        break;
    }
    case 38913:
    {
        returnValue = F("An der Rietlake");
        break;
    }
    case 38914:
    {
        returnValue = F("An der Ringelwiese");
        break;
    }
    case 38915:
    {
        returnValue = F("An der Ringmauer");
        break;
    }
    case 38916:
    {
        returnValue = F("An der Ringpromenade");
        break;
    }
    case 38917:
    {
        returnValue = F("An der Ringstr.");
        break;
    }
    case 38918:
    {
        returnValue = F("An der Rippach");
        break;
    }
    case 38919:
    {
        returnValue = F("An der Rischmühle");
        break;
    }
    case 38920:
    {
        returnValue = F("An der Ritsch");
        break;
    }
    case 38921:
    {
        returnValue = F("An der Ritterburg");
        break;
    }
    case 38922:
    {
        returnValue = F("An der Ritterschule");
        break;
    }
    case 38923:
    {
        returnValue = F("An der Ritterstr.");
        break;
    }
    case 38924:
    {
        returnValue = F("An der Riß");
        break;
    }
    case 38925:
    {
        returnValue = F("An der Roda");
        break;
    }
    case 38926:
    {
        returnValue = F("An der Rodach");
        break;
    }
    case 38927:
    {
        returnValue = F("An der Roddau");
        break;
    }
    case 38928:
    {
        returnValue = F("An der Rodelbahn");
        break;
    }
    case 38929:
    {
        returnValue = F("An der Rodelwiese");
        break;
    }
    case 38930:
    {
        returnValue = F("An der Roedlerwies");
        break;
    }
    case 38931:
    {
        returnValue = F("An der Rohne");
        break;
    }
    case 38932:
    {
        returnValue = F("An der Rohrach");
        break;
    }
    case 38933:
    {
        returnValue = F("An der Rohrlache");
        break;
    }
    case 38934:
    {
        returnValue = F("An der Rohrwiese");
        break;
    }
    case 38935:
    {
        returnValue = F("An der Rolandquelle");
        break;
    }
    case 38936:
    {
        returnValue = F("An der Rollbahn");
        break;
    }
    case 38937:
    {
        returnValue = F("An der Rolle");
        break;
    }
    case 38938:
    {
        returnValue = F("An der Rollschuhbahn");
        break;
    }
    case 38939:
    {
        returnValue = F("An der Romantischen Str.");
        break;
    }
    case 38940:
    {
        returnValue = F("An der Ronne");
        break;
    }
    case 38941:
    {
        returnValue = F("An der Ronnhoed");
        break;
    }
    case 38942:
    {
        returnValue = F("An der Rood");
        break;
    }
    case 38943:
    {
        returnValue = F("An der Rosenau");
        break;
    }
    case 38944:
    {
        returnValue = F("An der Rosendelle");
        break;
    }
    case 38945:
    {
        returnValue = F("An der Rosenecke");
        break;
    }
    case 38946:
    {
        returnValue = F("An der Rosengasse");
        break;
    }
    case 38947:
    {
        returnValue = F("An der Rosenkirche");
        break;
    }
    case 38948:
    {
        returnValue = F("An der Rosoppe");
        break;
    }
    case 38949:
    {
        returnValue = F("An der Rot");
        break;
    }
    case 38950:
    {
        returnValue = F("An der Rotach");
        break;
    }
    case 38951:
    {
        returnValue = F("An der Rotbuche");
        break;
    }
    case 38952:
    {
        returnValue = F("An der Rote");
        break;
    }
    case 38953:
    {
        returnValue = F("An der Roten Höhe");
        break;
    }
    case 38954:
    {
        returnValue = F("An der Roten Kuhle");
        break;
    }
    case 38955:
    {
        returnValue = F("An der Roten Mauer");
        break;
    }
    case 38956:
    {
        returnValue = F("An der Roten Mühle");
        break;
    }
    case 38957:
    {
        returnValue = F("An der Roten Villa");
        break;
    }
    case 38958:
    {
        returnValue = F("An der Roten Warte");
        break;
    }
    case 38959:
    {
        returnValue = F("An der Roth");
        break;
    }
    case 38960:
    {
        returnValue = F("An der Rothach");
        break;
    }
    case 38961:
    {
        returnValue = F("An der Rothalde");
        break;
    }
    case 38962:
    {
        returnValue = F("An der Rotheck");
        break;
    }
    case 38963:
    {
        returnValue = F("An der Rothen Mühle");
        break;
    }
    case 38964:
    {
        returnValue = F("An der Rothenburg");
        break;
    }
    case 38965:
    {
        returnValue = F("An der Rothenmühle");
        break;
    }
    case 38966:
    {
        returnValue = F("An der Rotleiten");
        break;
    }
    case 38967:
    {
        returnValue = F("An der Rottach");
        break;
    }
    case 38968:
    {
        returnValue = F("An der Rottkuhle");
        break;
    }
    case 38969:
    {
        returnValue = F("An der Rottlersreuther Str.");
        break;
    }
    case 38970:
    {
        returnValue = F("An der Rotunde");
        break;
    }
    case 38971:
    {
        returnValue = F("An der Roßeiche");
        break;
    }
    case 38972:
    {
        returnValue = F("An der Roßschwemme");
        break;
    }
    case 38973:
    {
        returnValue = F("An der Roßweide");
        break;
    }
    case 38974:
    {
        returnValue = F("An der Roßwiese");
        break;
    }
    case 38975:
    {
        returnValue = F("An der Ruh");
        break;
    }
    case 38976:
    {
        returnValue = F("An der Ruhbank");
        break;
    }
    case 38977:
    {
        returnValue = F("An der Ruhl");
        break;
    }
    case 38978:
    {
        returnValue = F("An der Ruhmauer");
        break;
    }
    case 38979:
    {
        returnValue = F("An der Ruhstatt");
        break;
    }
    case 38980:
    {
        returnValue = F("An der Rundkirche");
        break;
    }
    case 38981:
    {
        returnValue = F("An der Rundwies");
        break;
    }
    case 38982:
    {
        returnValue = F("An der Runz");
        break;
    }
    case 38983:
    {
        returnValue = F("An der Rur");
        break;
    }
    case 38984:
    {
        returnValue = F("An der Ruschwede");
        break;
    }
    case 38985:
    {
        returnValue = F("An der Ruthe");
        break;
    }
    case 38986:
    {
        returnValue = F("An der Ruthen");
        break;
    }
    case 38987:
    {
        returnValue = F("An der Rutsch");
        break;
    }
    case 38988:
    {
        returnValue = F("An der Rutsche");
        break;
    }
    case 38989:
    {
        returnValue = F("An der Rutschel");
        break;
    }
    case 38990:
    {
        returnValue = F("An der Ruwer");
        break;
    }
    case 38991:
    {
        returnValue = F("An der Rußdorfer Kirche");
        break;
    }
    case 38992:
    {
        returnValue = F("An der Rußhütte");
        break;
    }
    case 38993:
    {
        returnValue = F("An der Räucherkate");
        break;
    }
    case 38994:
    {
        returnValue = F("An der Räum");
        break;
    }
    case 38995:
    {
        returnValue = F("An der Röde");
        break;
    }
    case 38996:
    {
        returnValue = F("An der Röder");
        break;
    }
    case 38997:
    {
        returnValue = F("An der Röderaue");
        break;
    }
    case 38998:
    {
        returnValue = F("An der Römerbrücke");
        break;
    }
    case 38999:
    {
        returnValue = F("An der Römerhalle");
        break;
    }
    case 39000:
    {
        returnValue = F("An der Römerkelter");
        break;
    }
    case 39001:
    {
        returnValue = F("An der Römerlinde");
        break;
    }
    case 39002:
    {
        returnValue = F("An der Römerschanze");
        break;
    }
    case 39003:
    {
        returnValue = F("An der Römerstr.");
        break;
    }
    case 39004:
    {
        returnValue = F("An der Römervilla");
        break;
    }
    case 39005:
    {
        returnValue = F("An der Römischen Villa");
        break;
    }
    case 39006:
    {
        returnValue = F("An der Rönnel");
        break;
    }
    case 39007:
    {
        returnValue = F("An der Rösla");
        break;
    }
    case 39008:
    {
        returnValue = F("An der Röslau");
        break;
    }
    case 39009:
    {
        returnValue = F("An der Röslwies");
        break;
    }
    case 39010:
    {
        returnValue = F("An der Rösse");
        break;
    }
    case 39011:
    {
        returnValue = F("An der Röst");
        break;
    }
    case 39012:
    {
        returnValue = F("An der Röste");
        break;
    }
    case 39013:
    {
        returnValue = F("An der Röte");
        break;
    }
    case 39014:
    {
        returnValue = F("An der Röten");
        break;
    }
    case 39015:
    {
        returnValue = F("An der Röth");
        break;
    }
    case 39016:
    {
        returnValue = F("An der Röthaller");
        break;
    }
    case 39017:
    {
        returnValue = F("An der Röthe");
        break;
    }
    case 39018:
    {
        returnValue = F("An der Röthekuhle");
        break;
    }
    case 39019:
    {
        returnValue = F("An der Röthen");
        break;
    }
    case 39020:
    {
        returnValue = F("An der Rübhalde");
        break;
    }
    case 39021:
    {
        returnValue = F("An der Rückersdorfer Str.");
        break;
    }
    case 39022:
    {
        returnValue = F("An der Rüster");
        break;
    }
    case 39023:
    {
        returnValue = F("An der Saalborner Str.");
        break;
    }
    case 39024:
    {
        returnValue = F("An der Saalburg");
        break;
    }
    case 39025:
    {
        returnValue = F("An der Saale");
        break;
    }
    case 39026:
    {
        returnValue = F("An der Saar");
        break;
    }
    case 39027:
    {
        returnValue = F("An der Saarfahrt");
        break;
    }
    case 39028:
    {
        returnValue = F("An der Sachsenhausener Str.");
        break;
    }
    case 39029:
    {
        returnValue = F("An der Sachsenlandhalle");
        break;
    }
    case 39030:
    {
        returnValue = F("An der Sackgasse");
        break;
    }
    case 39031:
    {
        returnValue = F("An der Salbach");
        break;
    }
    case 39032:
    {
        returnValue = F("An der Salch");
        break;
    }
    case 39033:
    {
        returnValue = F("An der Saline");
        break;
    }
    case 39034:
    {
        returnValue = F("An der Saling");
        break;
    }
    case 39035:
    {
        returnValue = F("An der Salzbrücke");
        break;
    }
    case 39036:
    {
        returnValue = F("An der Salze");
        break;
    }
    case 39037:
    {
        returnValue = F("An der Salzleite");
        break;
    }
    case 39038:
    {
        returnValue = F("An der Salzmest");
        break;
    }
    case 39039:
    {
        returnValue = F("An der Salzstr.");
        break;
    }
    case 39040:
    {
        returnValue = F("An der Sandbeune");
        break;
    }
    case 39041:
    {
        returnValue = F("An der Sandbreede");
        break;
    }
    case 39042:
    {
        returnValue = F("An der Sandbreite");
        break;
    }
    case 39043:
    {
        returnValue = F("An der Sandbrücke");
        break;
    }
    case 39044:
    {
        returnValue = F("An der Sandeberghütung");
        break;
    }
    case 39045:
    {
        returnValue = F("An der Sandgrube");
        break;
    }
    case 39046:
    {
        returnValue = F("An der Sandkaul");
        break;
    }
    case 39047:
    {
        returnValue = F("An der Sandkaule");
        break;
    }
    case 39048:
    {
        returnValue = F("An der Sandkaut");
        break;
    }
    case 39049:
    {
        returnValue = F("An der Sandkaute");
        break;
    }
    case 39050:
    {
        returnValue = F("An der Sandkeite");
        break;
    }
    case 39051:
    {
        returnValue = F("An der Sandkiete");
        break;
    }
    case 39052:
    {
        returnValue = F("An der Sandkuhle");
        break;
    }
    case 39053:
    {
        returnValue = F("An der Sandleite");
        break;
    }
    case 39054:
    {
        returnValue = F("An der Sandscholle");
        break;
    }
    case 39055:
    {
        returnValue = F("An der Sandstaude");
        break;
    }
    case 39056:
    {
        returnValue = F("An der Sandwiese");
        break;
    }
    case 39057:
    {
        returnValue = F("An der Sang");
        break;
    }
    case 39058:
    {
        returnValue = F("An der Sankt Sylvesterkirche");
        break;
    }
    case 39059:
    {
        returnValue = F("An der Sarre");
        break;
    }
    case 39060:
    {
        returnValue = F("An der Sattelei");
        break;
    }
    case 39061:
    {
        returnValue = F("An der Sauerwiese");
        break;
    }
    case 39062:
    {
        returnValue = F("An der Saulheimer Pforte");
        break;
    }
    case 39063:
    {
        returnValue = F("An der Schaaftrift");
        break;
    }
    case 39064:
    {
        returnValue = F("An der Schaalbeke");
        break;
    }
    case 39065:
    {
        returnValue = F("An der Schaale");
        break;
    }
    case 39066:
    {
        returnValue = F("An der Schacht");
        break;
    }
    case 39067:
    {
        returnValue = F("An der Schachtbahn");
        break;
    }
    case 39068:
    {
        returnValue = F("An der Schachtebeeke");
        break;
    }
    case 39069:
    {
        returnValue = F("An der Schafau");
        break;
    }
    case 39070:
    {
        returnValue = F("An der Schafbrücke");
        break;
    }
    case 39071:
    {
        returnValue = F("An der Schafe");
        break;
    }
    case 39072:
    {
        returnValue = F("An der Schafhalde");
        break;
    }
    case 39073:
    {
        returnValue = F("An der Schafmauer");
        break;
    }
    case 39074:
    {
        returnValue = F("An der Schafslück");
        break;
    }
    case 39075:
    {
        returnValue = F("An der Schafstädter Str.");
        break;
    }
    case 39076:
    {
        returnValue = F("An der Schaftrift");
        break;
    }
    case 39077:
    {
        returnValue = F("An der Schafwehde");
        break;
    }
    case 39078:
    {
        returnValue = F("An der Schafweide");
        break;
    }
    case 39079:
    {
        returnValue = F("An der Schafwiese");
        break;
    }
    case 39080:
    {
        returnValue = F("An der Schafwäsche");
        break;
    }
    case 39081:
    {
        returnValue = F("An der Schalkauer Str.");
        break;
    }
    case 39082:
    {
        returnValue = F("An der Schaltanlage");
        break;
    }
    case 39083:
    {
        returnValue = F("An der Schaltstation");
        break;
    }
    case 39084:
    {
        returnValue = F("An der Schanz");
        break;
    }
    case 39085:
    {
        returnValue = F("An der Schanze");
        break;
    }
    case 39086:
    {
        returnValue = F("An der Scharnitz");
        break;
    }
    case 39087:
    {
        returnValue = F("An der Scharringhäuser Str.");
        break;
    }
    case 39088:
    {
        returnValue = F("An der Schauenburg");
        break;
    }
    case 39089:
    {
        returnValue = F("An der Scheibe");
        break;
    }
    case 39090:
    {
        returnValue = F("An der Scheiben");
        break;
    }
    case 39091:
    {
        returnValue = F("An der Schelenburg");
        break;
    }
    case 39092:
    {
        returnValue = F("An der Schelle");
        break;
    }
    case 39093:
    {
        returnValue = F("An der Schelmenhalde");
        break;
    }
    case 39094:
    {
        returnValue = F("An der Scheperweide");
        break;
    }
    case 39095:
    {
        returnValue = F("An der Scherf");
        break;
    }
    case 39096:
    {
        returnValue = F("An der Scherkonde");
        break;
    }
    case 39097:
    {
        returnValue = F("An der Scheuerbreite");
        break;
    }
    case 39098:
    {
        returnValue = F("An der Schiere");
        break;
    }
    case 39099:
    {
        returnValue = F("An der Schiessmauer");
        break;
    }
    case 39100:
    {
        returnValue = F("An der Schießhütte");
        break;
    }
    case 39101:
    {
        returnValue = F("An der Schießmauer");
        break;
    }
    case 39102:
    {
        returnValue = F("An der Schießstätte");
        break;
    }
    case 39103:
    {
        returnValue = F("An der Schießäckerstr.");
        break;
    }
    case 39104:
    {
        returnValue = F("An der Schiffslände");
        break;
    }
    case 39105:
    {
        returnValue = F("An der Schilde");
        break;
    }
    case 39106:
    {
        returnValue = F("An der Schildmühle");
        break;
    }
    case 39107:
    {
        returnValue = F("An der Schildwacht");
        break;
    }
    case 39108:
    {
        returnValue = F("An der Schilfwiese");
        break;
    }
    case 39109:
    {
        returnValue = F("An der Schillerhöhe");
        break;
    }
    case 39110:
    {
        returnValue = F("An der Schillerschule");
        break;
    }
    case 39111:
    {
        returnValue = F("An der Schimmings Höhe");
        break;
    }
    case 39112:
    {
        returnValue = F("An der Schinderlohe");
        break;
    }
    case 39113:
    {
        returnValue = F("An der Schindersgasse");
        break;
    }
    case 39114:
    {
        returnValue = F("An der Schla");
        break;
    }
    case 39115:
    {
        returnValue = F("An der Schlackenmühle");
        break;
    }
    case 39116:
    {
        returnValue = F("An der Schlagd");
        break;
    }
    case 39117:
    {
        returnValue = F("An der Schlagmühle");
        break;
    }
    case 39118:
    {
        returnValue = F("An der Schlakendorfer Str.");
        break;
    }
    case 39119:
    {
        returnValue = F("An der Schlamerkoppel");
        break;
    }
    case 39120:
    {
        returnValue = F("An der Schlau");
        break;
    }
    case 39121:
    {
        returnValue = F("An der Schlaube");
        break;
    }
    case 39122:
    {
        returnValue = F("An der Schledde");
        break;
    }
    case 39123:
    {
        returnValue = F("An der Schlehenhecke");
        break;
    }
    case 39124:
    {
        returnValue = F("An der Schleif");
        break;
    }
    case 39125:
    {
        returnValue = F("An der Schleife");
        break;
    }
    case 39126:
    {
        returnValue = F("An der Schleifmühl");
        break;
    }
    case 39127:
    {
        returnValue = F("An der Schleifmühle");
        break;
    }
    case 39128:
    {
        returnValue = F("An der Schlenke");
        break;
    }
    case 39129:
    {
        returnValue = F("An der Schlenze");
        break;
    }
    case 39130:
    {
        returnValue = F("An der Schleppenburg");
        break;
    }
    case 39131:
    {
        returnValue = F("An der Schleuse");
        break;
    }
    case 39132:
    {
        returnValue = F("An der Schlicht");
        break;
    }
    case 39133:
    {
        returnValue = F("An der Schliefenanlage");
        break;
    }
    case 39134:
    {
        returnValue = F("An der Schließ");
        break;
    }
    case 39135:
    {
        returnValue = F("An der Schlinge");
        break;
    }
    case 39136:
    {
        returnValue = F("An der Schlosshecke");
        break;
    }
    case 39137:
    {
        returnValue = F("An der Schlossleite");
        break;
    }
    case 39138:
    {
        returnValue = F("An der Schlossmauer");
        break;
    }
    case 39139:
    {
        returnValue = F("An der Schlossmühle");
        break;
    }
    case 39140:
    {
        returnValue = F("An der Schlosstreppe");
        break;
    }
    case 39141:
    {
        returnValue = F("An der Schloßbreite");
        break;
    }
    case 39142:
    {
        returnValue = F("An der Schloßbreiten");
        break;
    }
    case 39143:
    {
        returnValue = F("An der Schloßfabrik");
        break;
    }
    case 39144:
    {
        returnValue = F("An der Schloßgärtnerei");
        break;
    }
    case 39145:
    {
        returnValue = F("An der Schloßhalde");
        break;
    }
    case 39146:
    {
        returnValue = F("An der Schloßleite");
        break;
    }
    case 39147:
    {
        returnValue = F("An der Schloßmauer");
        break;
    }
    case 39148:
    {
        returnValue = F("An der Schloßmühle");
        break;
    }
    case 39149:
    {
        returnValue = F("An der Schloßremise");
        break;
    }
    case 39150:
    {
        returnValue = F("An der Schloßwand");
        break;
    }
    case 39151:
    {
        returnValue = F("An der Schlucht");
        break;
    }
    case 39152:
    {
        returnValue = F("An der Schlumper");
        break;
    }
    case 39153:
    {
        returnValue = F("An der Schluse");
        break;
    }
    case 39154:
    {
        returnValue = F("An der Schläde");
        break;
    }
    case 39155:
    {
        returnValue = F("An der Schlösselmühle");
        break;
    }
    case 39156:
    {
        returnValue = F("An der Schlößlleite");
        break;
    }
    case 39157:
    {
        returnValue = F("An der Schmachtekorste");
        break;
    }
    case 39158:
    {
        returnValue = F("An der Schmallag");
        break;
    }
    case 39159:
    {
        returnValue = F("An der Schmalmach");
        break;
    }
    case 39160:
    {
        returnValue = F("An der Schmalmke");
        break;
    }
    case 39161:
    {
        returnValue = F("An der Schmalwiese");
        break;
    }
    case 39162:
    {
        returnValue = F("An der Schmeihmühle");
        break;
    }
    case 39163:
    {
        returnValue = F("An der Schmelze");
        break;
    }
    case 39164:
    {
        returnValue = F("An der Schmelzhütte");
        break;
    }
    case 39165:
    {
        returnValue = F("An der Schmidmarter");
        break;
    }
    case 39166:
    {
        returnValue = F("An der Schmidtsei");
        break;
    }
    case 39167:
    {
        returnValue = F("An der Schmiede");
        break;
    }
    case 39168:
    {
        returnValue = F("An der Schmiedenfurt");
        break;
    }
    case 39169:
    {
        returnValue = F("An der Schmiedgasse");
        break;
    }
    case 39170:
    {
        returnValue = F("An der Schmiehe");
        break;
    }
    case 39171:
    {
        returnValue = F("An der Schmitte");
        break;
    }
    case 39172:
    {
        returnValue = F("An der Schmutter");
        break;
    }
    case 39173:
    {
        returnValue = F("An der Schmutterbrücke");
        break;
    }
    case 39174:
    {
        returnValue = F("An der Schnabelburg");
        break;
    }
    case 39175:
    {
        returnValue = F("An der Schnat");
        break;
    }
    case 39176:
    {
        returnValue = F("An der Schnauder");
        break;
    }
    case 39177:
    {
        returnValue = F("An der Schnauderaue");
        break;
    }
    case 39178:
    {
        returnValue = F("An der Schneckenhecke");
        break;
    }
    case 39179:
    {
        returnValue = F("An der Schneckenmatt");
        break;
    }
    case 39180:
    {
        returnValue = F("An der Schneebeerenhecke");
        break;
    }
    case 39181:
    {
        returnValue = F("An der Schneeschanze");
        break;
    }
    case 39182:
    {
        returnValue = F("An der Schneibeke");
        break;
    }
    case 39183:
    {
        returnValue = F("An der Schneiderburg");
        break;
    }
    case 39184:
    {
        returnValue = F("An der Schneiderei");
        break;
    }
    case 39185:
    {
        returnValue = F("An der Schneise");
        break;
    }
    case 39186:
    {
        returnValue = F("An der Schnellbahn");
        break;
    }
    case 39187:
    {
        returnValue = F("An der Schnelle");
        break;
    }
    case 39188:
    {
        returnValue = F("An der Schnellstr.");
        break;
    }
    case 39189:
    {
        returnValue = F("An der Schnepfenburg");
        break;
    }
    case 39190:
    {
        returnValue = F("An der Schnepfenschneise");
        break;
    }
    case 39191:
    {
        returnValue = F("An der Scholssmühle");
        break;
    }
    case 39192:
    {
        returnValue = F("An der Schomm");
        break;
    }
    case 39193:
    {
        returnValue = F("An der Schorgast");
        break;
    }
    case 39194:
    {
        returnValue = F("An der Schoßpforte");
        break;
    }
    case 39195:
    {
        returnValue = F("An der Schraube");
        break;
    }
    case 39196:
    {
        returnValue = F("An der Schreinerhänge");
        break;
    }
    case 39197:
    {
        returnValue = F("An der Schrenk");
        break;
    }
    case 39198:
    {
        returnValue = F("An der Schrotmühle");
        break;
    }
    case 39199:
    {
        returnValue = F("An der Schulau");
        break;
    }
    case 39200:
    {
        returnValue = F("An der Schule");
        break;
    }
    case 39201:
    {
        returnValue = F("An der Schulenburg");
        break;
    }
    case 39202:
    {
        returnValue = F("An der Schulkoppel");
        break;
    }
    case 39203:
    {
        returnValue = F("An der Schulscheune");
        break;
    }
    case 39204:
    {
        returnValue = F("An der Schulstr.");
        break;
    }
    case 39205:
    {
        returnValue = F("An der Schulwiese");
        break;
    }
    case 39206:
    {
        returnValue = F("An der Schulzenwiese");
        break;
    }
    case 39207:
    {
        returnValue = F("An der Schunter");
        break;
    }
    case 39208:
    {
        returnValue = F("An der Schustermühle");
        break;
    }
    case 39209:
    {
        returnValue = F("An der Schutzhütte");
        break;
    }
    case 39210:
    {
        returnValue = F("An der Schußmauer");
        break;
    }
    case 39211:
    {
        returnValue = F("An der Schwakenburg");
        break;
    }
    case 39212:
    {
        returnValue = F("An der Schwalbach");
        break;
    }
    case 39213:
    {
        returnValue = F("An der Schwale");
        break;
    }
    case 39214:
    {
        returnValue = F("An der Schwalm");
        break;
    }
    case 39215:
    {
        returnValue = F("An der Schwanleite");
        break;
    }
    case 39216:
    {
        returnValue = F("An der Schwartemeierstr.");
        break;
    }
    case 39217:
    {
        returnValue = F("An der Schwarza");
        break;
    }
    case 39218:
    {
        returnValue = F("An der Schwarzach");
        break;
    }
    case 39219:
    {
        returnValue = F("An der Schwarzbek");
        break;
    }
    case 39220:
    {
        returnValue = F("An der Schwarzburg");
        break;
    }
    case 39221:
    {
        returnValue = F("An der Schwarzeiche");
        break;
    }
    case 39222:
    {
        returnValue = F("An der Schwarzen Elster");
        break;
    }
    case 39223:
    {
        returnValue = F("An der Schwarzen Hecke");
        break;
    }
    case 39224:
    {
        returnValue = F("An der Schwarzwiese");
        break;
    }
    case 39225:
    {
        returnValue = F("An der Schwedenschanze");
        break;
    }
    case 39226:
    {
        returnValue = F("An der Schwefelquelle");
        break;
    }
    case 39227:
    {
        returnValue = F("An der Schweil");
        break;
    }
    case 39228:
    {
        returnValue = F("An der Schweinitz");
        break;
    }
    case 39229:
    {
        returnValue = F("An der Schwelk");
        break;
    }
    case 39230:
    {
        returnValue = F("An der Schwelle");
        break;
    }
    case 39231:
    {
        returnValue = F("An der Schwellenbeize");
        break;
    }
    case 39232:
    {
        returnValue = F("An der Schwemm");
        break;
    }
    case 39233:
    {
        returnValue = F("An der Schwemme");
        break;
    }
    case 39234:
    {
        returnValue = F("An der Schwenke");
        break;
    }
    case 39235:
    {
        returnValue = F("An der Schwennigke");
        break;
    }
    case 39236:
    {
        returnValue = F("An der Schwentine");
        break;
    }
    case 39237:
    {
        returnValue = F("An der Schweriner Chaussee");
        break;
    }
    case 39238:
    {
        returnValue = F("An der Schwillach");
        break;
    }
    case 39239:
    {
        returnValue = F("An der Schwimmhalle");
        break;
    }
    case 39240:
    {
        returnValue = F("An der Schwärz");
        break;
    }
    case 39241:
    {
        returnValue = F("An der Schwärze");
        break;
    }
    case 39242:
    {
        returnValue = F("An der Schwülme");
        break;
    }
    case 39243:
    {
        returnValue = F("An der Schäferbreite");
        break;
    }
    case 39244:
    {
        returnValue = F("An der Schäferei");
        break;
    }
    case 39245:
    {
        returnValue = F("An der Schäferkapelle");
        break;
    }
    case 39246:
    {
        returnValue = F("An der Schäferwiese");
        break;
    }
    case 39247:
    {
        returnValue = F("An der Schölecke");
        break;
    }
    case 39248:
    {
        returnValue = F("An der Schön");
        break;
    }
    case 39249:
    {
        returnValue = F("An der Schönau");
        break;
    }
    case 39250:
    {
        returnValue = F("An der Schönen Aussicht");
        break;
    }
    case 39251:
    {
        returnValue = F("An der Schönen Höhe");
        break;
    }
    case 39252:
    {
        returnValue = F("An der Schönfließer Str.");
        break;
    }
    case 39253:
    {
        returnValue = F("An der Schöte");
        break;
    }
    case 39254:
    {
        returnValue = F("An der Schütt");
        break;
    }
    case 39255:
    {
        returnValue = F("An der Schützeneiche");
        break;
    }
    case 39256:
    {
        returnValue = F("An der Schützengasse");
        break;
    }
    case 39257:
    {
        returnValue = F("An der Schützenhalle");
        break;
    }
    case 39258:
    {
        returnValue = F("An der Schützenheide");
        break;
    }
    case 39259:
    {
        returnValue = F("An der Schützenkanzel");
        break;
    }
    case 39260:
    {
        returnValue = F("An der Schützenkoppel");
        break;
    }
    case 39261:
    {
        returnValue = F("An der Schützenwiese");
        break;
    }
    case 39262:
    {
        returnValue = F("An der Seckach");
        break;
    }
    case 39263:
    {
        returnValue = F("An der Seebrücke");
        break;
    }
    case 39264:
    {
        returnValue = F("An der Seefahrtsschule");
        break;
    }
    case 39265:
    {
        returnValue = F("An der Seekenkapelle");
        break;
    }
    case 39266:
    {
        returnValue = F("An der Seekoppel");
        break;
    }
    case 39267:
    {
        returnValue = F("An der Seelhardt");
        break;
    }
    case 39268:
    {
        returnValue = F("An der Seemühle");
        break;
    }
    case 39269:
    {
        returnValue = F("An der Seenotstation");
        break;
    }
    case 39270:
    {
        returnValue = F("An der Seepromenade");
        break;
    }
    case 39271:
    {
        returnValue = F("An der Seeschleuse");
        break;
    }
    case 39272:
    {
        returnValue = F("An der Seestr.");
        break;
    }
    case 39273:
    {
        returnValue = F("An der Seewiese");
        break;
    }
    case 39274:
    {
        returnValue = F("An der Sehma");
        break;
    }
    case 39275:
    {
        returnValue = F("An der Seibelhohl");
        break;
    }
    case 39276:
    {
        returnValue = F("An der Seidewitz");
        break;
    }
    case 39277:
    {
        returnValue = F("An der Seilbahn");
        break;
    }
    case 39278:
    {
        returnValue = F("An der Seilbahntrasse");
        break;
    }
    case 39279:
    {
        returnValue = F("An der Seilerbahn");
        break;
    }
    case 39280:
    {
        returnValue = F("An der Seilerei");
        break;
    }
    case 39281:
    {
        returnValue = F("An der Seit");
        break;
    }
    case 39282:
    {
        returnValue = F("An der Seite");
        break;
    }
    case 39283:
    {
        returnValue = F("An der Seiters");
        break;
    }
    case 39284:
    {
        returnValue = F("An der Seitzenbergstr.");
        break;
    }
    case 39285:
    {
        returnValue = F("An der Selke");
        break;
    }
    case 39286:
    {
        returnValue = F("An der Selz");
        break;
    }
    case 39287:
    {
        returnValue = F("An der Semmelweissiedlung");
        break;
    }
    case 39288:
    {
        returnValue = F("An der Sempfkuhle");
        break;
    }
    case 39289:
    {
        returnValue = F("An der Senke");
        break;
    }
    case 39290:
    {
        returnValue = F("An der Senne");
        break;
    }
    case 39291:
    {
        returnValue = F("An der Sensbach");
        break;
    }
    case 39292:
    {
        returnValue = F("An der Sense");
        break;
    }
    case 39293:
    {
        returnValue = F("An der Sensenschmiede");
        break;
    }
    case 39294:
    {
        returnValue = F("An der Seseke");
        break;
    }
    case 39295:
    {
        returnValue = F("An der Setz");
        break;
    }
    case 39296:
    {
        returnValue = F("An der Seufzerallee");
        break;
    }
    case 39297:
    {
        returnValue = F("An der Sicker");
        break;
    }
    case 39298:
    {
        returnValue = F("An der Siebenfreude");
        break;
    }
    case 39299:
    {
        returnValue = F("An der Siebenmeisterbrücke");
        break;
    }
    case 39300:
    {
        returnValue = F("An der Sieber");
        break;
    }
    case 39301:
    {
        returnValue = F("An der Siebertmühle");
        break;
    }
    case 39302:
    {
        returnValue = F("An der Siedlung");
        break;
    }
    case 39303:
    {
        returnValue = F("An der Siegelau");
        break;
    }
    case 39304:
    {
        returnValue = F("An der Siegleithe");
        break;
    }
    case 39305:
    {
        returnValue = F("An der Sieke");
        break;
    }
    case 39306:
    {
        returnValue = F("An der Siekwiese");
        break;
    }
    case 39307:
    {
        returnValue = F("An der Sieme");
        break;
    }
    case 39308:
    {
        returnValue = F("An der Sietwende");
        break;
    }
    case 39309:
    {
        returnValue = F("An der Siggelhavel");
        break;
    }
    case 39310:
    {
        returnValue = F("An der Silber-Therme");
        break;
    }
    case 39311:
    {
        returnValue = F("An der Silberbachstr.");
        break;
    }
    case 39312:
    {
        returnValue = F("An der Silberhütte");
        break;
    }
    case 39313:
    {
        returnValue = F("An der Silberpappel");
        break;
    }
    case 39314:
    {
        returnValue = F("An der Silberquelle");
        break;
    }
    case 39315:
    {
        returnValue = F("An der Silberspitze");
        break;
    }
    case 39316:
    {
        returnValue = F("An der Simmühle");
        break;
    }
    case 39317:
    {
        returnValue = F("An der Singold");
        break;
    }
    case 39318:
    {
        returnValue = F("An der Sinthalde");
        break;
    }
    case 39319:
    {
        returnValue = F("An der Skala");
        break;
    }
    case 39320:
    {
        returnValue = F("An der Skihütte");
        break;
    }
    case 39321:
    {
        returnValue = F("An der Skiwiese");
        break;
    }
    case 39322:
    {
        returnValue = F("An der Soltau");
        break;
    }
    case 39323:
    {
        returnValue = F("An der Sommerbank");
        break;
    }
    case 39324:
    {
        returnValue = F("An der Sommerhälde");
        break;
    }
    case 39325:
    {
        returnValue = F("An der Sommerlaite");
        break;
    }
    case 39326:
    {
        returnValue = F("An der Sommerleite");
        break;
    }
    case 39327:
    {
        returnValue = F("An der Sommerseite");
        break;
    }
    case 39328:
    {
        returnValue = F("An der Sommerwand");
        break;
    }
    case 39329:
    {
        returnValue = F("An der Sommerwiese");
        break;
    }
    case 39330:
    {
        returnValue = F("An der Sonder");
        break;
    }
    case 39331:
    {
        returnValue = F("An der Sonne");
        break;
    }
    case 39332:
    {
        returnValue = F("An der Sonnenhalde");
        break;
    }
    case 39333:
    {
        returnValue = F("An der Sonnenlehne");
        break;
    }
    case 39334:
    {
        returnValue = F("An der Sonnenleite");
        break;
    }
    case 39335:
    {
        returnValue = F("An der Sonnenseite");
        break;
    }
    case 39336:
    {
        returnValue = F("An der Sonnenterrasse");
        break;
    }
    case 39337:
    {
        returnValue = F("An der Sonnenwiese");
        break;
    }
    case 39338:
    {
        returnValue = F("An der Sonnhalde");
        break;
    }
    case 39339:
    {
        returnValue = F("An der Sonntagsley");
        break;
    }
    case 39340:
    {
        returnValue = F("An der Sorg");
        break;
    }
    case 39341:
    {
        returnValue = F("An der Sorge");
        break;
    }
    case 39342:
    {
        returnValue = F("An der Sormitz");
        break;
    }
    case 39343:
    {
        returnValue = F("An der Sosaer Str.");
        break;
    }
    case 39344:
    {
        returnValue = F("An der Spaargasse");
        break;
    }
    case 39345:
    {
        returnValue = F("An der Sparkasse");
        break;
    }
    case 39346:
    {
        returnValue = F("An der Specke");
        break;
    }
    case 39347:
    {
        returnValue = F("An der Speckerhohl");
        break;
    }
    case 39348:
    {
        returnValue = F("An der Speichwiese");
        break;
    }
    case 39349:
    {
        returnValue = F("An der Sperlingswiese");
        break;
    }
    case 39350:
    {
        returnValue = F("An der Spesse");
        break;
    }
    case 39351:
    {
        returnValue = F("An der Spielleite");
        break;
    }
    case 39352:
    {
        returnValue = F("An der Spielwiese");
        break;
    }
    case 39353:
    {
        returnValue = F("An der Spille");
        break;
    }
    case 39354:
    {
        returnValue = F("An der Spinnbahn");
        break;
    }
    case 39355:
    {
        returnValue = F("An der Spinnebahn");
        break;
    }
    case 39356:
    {
        returnValue = F("An der Spinnerei");
        break;
    }
    case 39357:
    {
        returnValue = F("An der Spitze");
        break;
    }
    case 39358:
    {
        returnValue = F("An der Spitzgasse");
        break;
    }
    case 39359:
    {
        returnValue = F("An der Spitzlay");
        break;
    }
    case 39360:
    {
        returnValue = F("An der Spitzmühle");
        break;
    }
    case 39361:
    {
        returnValue = F("An der Spitzwiese");
        break;
    }
    case 39362:
    {
        returnValue = F("An der Spolsau");
        break;
    }
    case 39363:
    {
        returnValue = F("An der Spornburg");
        break;
    }
    case 39364:
    {
        returnValue = F("An der Sportanlage");
        break;
    }
    case 39365:
    {
        returnValue = F("An der Sporthalle");
        break;
    }
    case 39366:
    {
        returnValue = F("An der Sportkoppel");
        break;
    }
    case 39367:
    {
        returnValue = F("An der Sportschule");
        break;
    }
    case 39368:
    {
        returnValue = F("An der Spoy");
        break;
    }
    case 39369:
    {
        returnValue = F("An der Sprante");
        break;
    }
    case 39370:
    {
        returnValue = F("An der Spree");
        break;
    }
    case 39371:
    {
        returnValue = F("An der Spreekenhorst");
        break;
    }
    case 39372:
    {
        returnValue = F("An der Spreekoppel");
        break;
    }
    case 39373:
    {
        returnValue = F("An der Spring");
        break;
    }
    case 39374:
    {
        returnValue = F("An der Springe");
        break;
    }
    case 39375:
    {
        returnValue = F("An der Springlake");
        break;
    }
    case 39376:
    {
        returnValue = F("An der Springmühle");
        break;
    }
    case 39377:
    {
        returnValue = F("An der Sprötauer Klinge");
        break;
    }
    case 39378:
    {
        returnValue = F("An der Sprötauer Str.");
        break;
    }
    case 39379:
    {
        returnValue = F("An der Spüle");
        break;
    }
    case 39380:
    {
        returnValue = F("An der Spülig");
        break;
    }
    case 39381:
    {
        returnValue = F("An der St. Johanniskirche");
        break;
    }
    case 39382:
    {
        returnValue = F("An der St. Veitsmühle");
        break;
    }
    case 39383:
    {
        returnValue = F("An der St.-Josefs-Kirche");
        break;
    }
    case 39384:
    {
        returnValue = F("An der St.-Lorenz-Kirche");
        break;
    }
    case 39385:
    {
        returnValue = F("An der St.-Marien-Kirche");
        break;
    }
    case 39386:
    {
        returnValue = F("An der Staatsstr.");
        break;
    }
    case 39387:
    {
        returnValue = F("An der Stadt");
        break;
    }
    case 39388:
    {
        returnValue = F("An der Stadtbahn");
        break;
    }
    case 39389:
    {
        returnValue = F("An der Stadtgrenze");
        break;
    }
    case 39390:
    {
        returnValue = F("An der Stadthalle");
        break;
    }
    case 39391:
    {
        returnValue = F("An der Stadtkirche");
        break;
    }
    case 39392:
    {
        returnValue = F("An der Stadtmarter");
        break;
    }
    case 39393:
    {
        returnValue = F("An der Stadtmauer");
        break;
    }
    case 39394:
    {
        returnValue = F("An der Stadtmauer Nord");
        break;
    }
    case 39395:
    {
        returnValue = F("An der Stadtmauer Süd");
        break;
    }
    case 39396:
    {
        returnValue = F("An der Stadtmauer West");
        break;
    }
    case 39397:
    {
        returnValue = F("An der Stadtmühle");
        break;
    }
    case 39398:
    {
        returnValue = F("An der Stadtwaage");
        break;
    }
    case 39399:
    {
        returnValue = F("An der Staffel");
        break;
    }
    case 39400:
    {
        returnValue = F("An der Staig");
        break;
    }
    case 39401:
    {
        returnValue = F("An der Stalden");
        break;
    }
    case 39402:
    {
        returnValue = F("An der Stammbahn");
        break;
    }
    case 39403:
    {
        returnValue = F("An der Stampfe");
        break;
    }
    case 39404:
    {
        returnValue = F("An der Starz");
        break;
    }
    case 39405:
    {
        returnValue = F("An der Starzel");
        break;
    }
    case 39406:
    {
        returnValue = F("An der Stau");
        break;
    }
    case 39407:
    {
        returnValue = F("An der Stauferklinik");
        break;
    }
    case 39408:
    {
        returnValue = F("An der Staumauer");
        break;
    }
    case 39409:
    {
        returnValue = F("An der Staustufe");
        break;
    }
    case 39410:
    {
        returnValue = F("An der Stecknitz");
        break;
    }
    case 39411:
    {
        returnValue = F("An der Stedte");
        break;
    }
    case 39412:
    {
        returnValue = F("An der Stedtener Str.");
        break;
    }
    case 39413:
    {
        returnValue = F("An der Steege");
        break;
    }
    case 39414:
    {
        returnValue = F("An der Steffelmühle");
        break;
    }
    case 39415:
    {
        returnValue = F("An der Stege");
        break;
    }
    case 39416:
    {
        returnValue = F("An der Stegmühle");
        break;
    }
    case 39417:
    {
        returnValue = F("An der Stegwiese");
        break;
    }
    case 39418:
    {
        returnValue = F("An der Steig");
        break;
    }
    case 39419:
    {
        returnValue = F("An der Steige");
        break;
    }
    case 39420:
    {
        returnValue = F("An der Steiger");
        break;
    }
    case 39421:
    {
        returnValue = F("An der Steilen Wand");
        break;
    }
    case 39422:
    {
        returnValue = F("An der Steilküste");
        break;
    }
    case 39423:
    {
        returnValue = F("An der Steinach");
        break;
    }
    case 39424:
    {
        returnValue = F("An der Steinart");
        break;
    }
    case 39425:
    {
        returnValue = F("An der Steinau");
        break;
    }
    case 39426:
    {
        returnValue = F("An der Steinaue");
        break;
    }
    case 39427:
    {
        returnValue = F("An der Steinbach");
        break;
    }
    case 39428:
    {
        returnValue = F("An der Steinbek");
        break;
    }
    case 39429:
    {
        returnValue = F("An der Steinbrede");
        break;
    }
    case 39430:
    {
        returnValue = F("An der Steinbreite");
        break;
    }
    case 39431:
    {
        returnValue = F("An der Steinbrücke");
        break;
    }
    case 39432:
    {
        returnValue = F("An der Steinbuchse");
        break;
    }
    case 39433:
    {
        returnValue = F("An der Steindaren Riede");
        break;
    }
    case 39434:
    {
        returnValue = F("An der Steinenporz");
        break;
    }
    case 39435:
    {
        returnValue = F("An der Steinern Brück");
        break;
    }
    case 39436:
    {
        returnValue = F("An der Steinernen Bank");
        break;
    }
    case 39437:
    {
        returnValue = F("An der Steinernen Brücke");
        break;
    }
    case 39438:
    {
        returnValue = F("An der Steinert");
        break;
    }
    case 39439:
    {
        returnValue = F("An der Steinfabrik");
        break;
    }
    case 39440:
    {
        returnValue = F("An der Steinfurt");
        break;
    }
    case 39441:
    {
        returnValue = F("An der Steingrube");
        break;
    }
    case 39442:
    {
        returnValue = F("An der Steinhecke");
        break;
    }
    case 39443:
    {
        returnValue = F("An der Steinkaut");
        break;
    }
    case 39444:
    {
        returnValue = F("An der Steinkaute");
        break;
    }
    case 39445:
    {
        returnValue = F("An der Steinklinge");
        break;
    }
    case 39446:
    {
        returnValue = F("An der Steinklippe");
        break;
    }
    case 39447:
    {
        returnValue = F("An der Steinkuhl");
        break;
    }
    case 39448:
    {
        returnValue = F("An der Steinkuhle");
        break;
    }
    case 39449:
    {
        returnValue = F("An der Steinlach");
        break;
    }
    case 39450:
    {
        returnValue = F("An der Steinleiten");
        break;
    }
    case 39451:
    {
        returnValue = F("An der Steinmark");
        break;
    }
    case 39452:
    {
        returnValue = F("An der Steinmauer");
        break;
    }
    case 39453:
    {
        returnValue = F("An der Steinmühle");
        break;
    }
    case 39454:
    {
        returnValue = F("An der Steinreiß");
        break;
    }
    case 39455:
    {
        returnValue = F("An der Steinriehe");
        break;
    }
    case 39456:
    {
        returnValue = F("An der Steinselb");
        break;
    }
    case 39457:
    {
        returnValue = F("An der Steinstr.");
        break;
    }
    case 39458:
    {
        returnValue = F("An der Steinsäge");
        break;
    }
    case 39459:
    {
        returnValue = F("An der Stelle");
        break;
    }
    case 39460:
    {
        returnValue = F("An der Stellenhalde");
        break;
    }
    case 39461:
    {
        returnValue = F("An der Stelze");
        break;
    }
    case 39462:
    {
        returnValue = F("An der Stengelkaserne");
        break;
    }
    case 39463:
    {
        returnValue = F("An der Stepenitz");
        break;
    }
    case 39464:
    {
        returnValue = F("An der Stern");
        break;
    }
    case 39465:
    {
        returnValue = F("An der Sternschanze");
        break;
    }
    case 39466:
    {
        returnValue = F("An der Sternwarte");
        break;
    }
    case 39467:
    {
        returnValue = F("An der Stertwelle");
        break;
    }
    case 39468:
    {
        returnValue = F("An der Stichel");
        break;
    }
    case 39469:
    {
        returnValue = F("An der Stiede");
        break;
    }
    case 39470:
    {
        returnValue = F("An der Stiege");
        break;
    }
    case 39471:
    {
        returnValue = F("An der Stiegel");
        break;
    }
    case 39472:
    {
        returnValue = F("An der Stierwiese");
        break;
    }
    case 39473:
    {
        returnValue = F("An der Stiftskirche");
        break;
    }
    case 39474:
    {
        returnValue = F("An der Stiftsmauer");
        break;
    }
    case 39475:
    {
        returnValue = F("An der Stiftsmühle");
        break;
    }
    case 39476:
    {
        returnValue = F("An der Stimbergschule");
        break;
    }
    case 39477:
    {
        returnValue = F("An der Stimmecke");
        break;
    }
    case 39478:
    {
        returnValue = F("An der Stocke");
        break;
    }
    case 39479:
    {
        returnValue = F("An der Stockwiese");
        break;
    }
    case 39480:
    {
        returnValue = F("An der Storkower Str.");
        break;
    }
    case 39481:
    {
        returnValue = F("An der Str. nach Rohndorf");
        break;
    }
    case 39482:
    {
        returnValue = F("An der Str. nach Weilen");
        break;
    }
    case 39483:
    {
        returnValue = F("An der Str.nbahn");
        break;
    }
    case 39484:
    {
        returnValue = F("An der Str.nmeisterei");
        break;
    }
    case 39485:
    {
        returnValue = F("An der Strausche");
        break;
    }
    case 39486:
    {
        returnValue = F("An der Straßmühle");
        break;
    }
    case 39487:
    {
        returnValue = F("An der Strecke");
        break;
    }
    case 39488:
    {
        returnValue = F("An der Streng");
        break;
    }
    case 39489:
    {
        returnValue = F("An der Stressenleite");
        break;
    }
    case 39490:
    {
        returnValue = F("An der Streu");
        break;
    }
    case 39491:
    {
        returnValue = F("An der Streuobstwiese");
        break;
    }
    case 39492:
    {
        returnValue = F("An der Striegis");
        break;
    }
    case 39493:
    {
        returnValue = F("An der Strohriede");
        break;
    }
    case 39494:
    {
        returnValue = F("An der Strukau");
        break;
    }
    case 39495:
    {
        returnValue = F("An der Strut");
        break;
    }
    case 39496:
    {
        returnValue = F("An der Struth");
        break;
    }
    case 39497:
    {
        returnValue = F("An der Stuhlsteige");
        break;
    }
    case 39498:
    {
        returnValue = F("An der Stumpfen Kirche");
        break;
    }
    case 39499:
    {
        returnValue = F("An der Stupe");
        break;
    }
    case 39500:
    {
        returnValue = F("An der Sturmlaterne");
        break;
    }
    case 39501:
    {
        returnValue = F("An der Stursbergs-Ecke");
        break;
    }
    case 39502:
    {
        returnValue = F("An der Stöcke");
        break;
    }
    case 39503:
    {
        returnValue = F("An der Stöcki");
        break;
    }
    case 39504:
    {
        returnValue = F("An der Stör");
        break;
    }
    case 39505:
    {
        returnValue = F("An der Stöß");
        break;
    }
    case 39506:
    {
        returnValue = F("An der Stückhohl");
        break;
    }
    case 39507:
    {
        returnValue = F("An der Stückwiese");
        break;
    }
    case 39508:
    {
        returnValue = F("An der Stühl");
        break;
    }
    case 39509:
    {
        returnValue = F("An der Stürze");
        break;
    }
    case 39510:
    {
        returnValue = F("An der Stüveeiche");
        break;
    }
    case 39511:
    {
        returnValue = F("An der Sude");
        break;
    }
    case 39512:
    {
        returnValue = F("An der Sudriede");
        break;
    }
    case 39513:
    {
        returnValue = F("An der Suhl");
        break;
    }
    case 39514:
    {
        returnValue = F("An der Suhla");
        break;
    }
    case 39515:
    {
        returnValue = F("An der Suhle");
        break;
    }
    case 39516:
    {
        returnValue = F("An der Sulz");
        break;
    }
    case 39517:
    {
        returnValue = F("An der Surheide");
        break;
    }
    case 39518:
    {
        returnValue = F("An der Susannenhöhe");
        break;
    }
    case 39519:
    {
        returnValue = F("An der Synagoge");
        break;
    }
    case 39520:
    {
        returnValue = F("An der Säge");
        break;
    }
    case 39521:
    {
        returnValue = F("An der Sägemühle");
        break;
    }
    case 39522:
    {
        returnValue = F("An der Sägmühle");
        break;
    }
    case 39523:
    {
        returnValue = F("An der Söhleke");
        break;
    }
    case 39524:
    {
        returnValue = F("An der Söhrebahn");
        break;
    }
    case 39525:
    {
        returnValue = F("An der Südbrücke");
        break;
    }
    case 39526:
    {
        returnValue = F("An der Süderau");
        break;
    }
    case 39527:
    {
        returnValue = F("An der Süderriede");
        break;
    }
    case 39528:
    {
        returnValue = F("An der Südhecke");
        break;
    }
    case 39529:
    {
        returnValue = F("An der Südradde");
        break;
    }
    case 39530:
    {
        returnValue = F("An der Südschule");
        break;
    }
    case 39531:
    {
        returnValue = F("An der Südstr.");
        break;
    }
    case 39532:
    {
        returnValue = F("An der Südumgehung");
        break;
    }
    case 39533:
    {
        returnValue = F("An der Süle");
        break;
    }
    case 39534:
    {
        returnValue = F("An der Sülz");
        break;
    }
    case 39535:
    {
        returnValue = F("An der Sülze");
        break;
    }
    case 39536:
    {
        returnValue = F("An der Tabaksmühle");
        break;
    }
    case 39537:
    {
        returnValue = F("An der Tachbachsmühle");
        break;
    }
    case 39538:
    {
        returnValue = F("An der Talaue");
        break;
    }
    case 39539:
    {
        returnValue = F("An der Talbrücke");
        break;
    }
    case 39540:
    {
        returnValue = F("An der Talmühle");
        break;
    }
    case 39541:
    {
        returnValue = F("An der Talsperre");
        break;
    }
    case 39542:
    {
        returnValue = F("An der Talstr.");
        break;
    }
    case 39543:
    {
        returnValue = F("An der Tankstelle");
        break;
    }
    case 39544:
    {
        returnValue = F("An der Tann");
        break;
    }
    case 39545:
    {
        returnValue = F("An der Tanne");
        break;
    }
    case 39546:
    {
        returnValue = F("An der Tanzlinde");
        break;
    }
    case 39547:
    {
        returnValue = F("An der Tarnitz");
        break;
    }
    case 39548:
    {
        returnValue = F("An der Tasche");
        break;
    }
    case 39549:
    {
        returnValue = F("An der Taubenburg");
        break;
    }
    case 39550:
    {
        returnValue = F("An der Tauber");
        break;
    }
    case 39551:
    {
        returnValue = F("An der Taunuseisenbahn");
        break;
    }
    case 39552:
    {
        returnValue = F("An der Technik");
        break;
    }
    case 39553:
    {
        returnValue = F("An der Teeplantage");
        break;
    }
    case 39554:
    {
        returnValue = F("An der Teichlilie");
        break;
    }
    case 39555:
    {
        returnValue = F("An der Teichwiese");
        break;
    }
    case 39556:
    {
        returnValue = F("An der Teisnach");
        break;
    }
    case 39557:
    {
        returnValue = F("An der Telle");
        break;
    }
    case 39558:
    {
        returnValue = F("An der Tellwiese");
        break;
    }
    case 39559:
    {
        returnValue = F("An der Tenne");
        break;
    }
    case 39560:
    {
        returnValue = F("An der Terrasse");
        break;
    }
    case 39561:
    {
        returnValue = F("An der Teufe");
        break;
    }
    case 39562:
    {
        returnValue = F("An der Teufelshohle");
        break;
    }
    case 39563:
    {
        returnValue = F("An der Teufelskuhle");
        break;
    }
    case 39564:
    {
        returnValue = F("An der Teufelstreppe");
        break;
    }
    case 39565:
    {
        returnValue = F("An der Thalach");
        break;
    }
    case 39566:
    {
        returnValue = F("An der Thalheck");
        break;
    }
    case 39567:
    {
        returnValue = F("An der Then");
        break;
    }
    case 39568:
    {
        returnValue = F("An der Thingstätte");
        break;
    }
    case 39569:
    {
        returnValue = F("An der Thomasaue");
        break;
    }
    case 39570:
    {
        returnValue = F("An der Thomasmühle");
        break;
    }
    case 39571:
    {
        returnValue = F("An der Thronpost");
        break;
    }
    case 39572:
    {
        returnValue = F("An der Thulba");
        break;
    }
    case 39573:
    {
        returnValue = F("An der Thune");
        break;
    }
    case 39574:
    {
        returnValue = F("An der Tiefenmühle");
        break;
    }
    case 39575:
    {
        returnValue = F("An der Tiefer");
        break;
    }
    case 39576:
    {
        returnValue = F("An der Tillyschanze");
        break;
    }
    case 39577:
    {
        returnValue = F("An der Tonbahn");
        break;
    }
    case 39578:
    {
        returnValue = F("An der Tongrube");
        break;
    }
    case 39579:
    {
        returnValue = F("An der Tonkuhle");
        break;
    }
    case 39580:
    {
        returnValue = F("An der Torfbahn");
        break;
    }
    case 39581:
    {
        returnValue = F("An der Torgauer Landstr.");
        break;
    }
    case 39582:
    {
        returnValue = F("An der Torgauer Str.");
        break;
    }
    case 39583:
    {
        returnValue = F("An der Torwiese");
        break;
    }
    case 39584:
    {
        returnValue = F("An der Trabrennbahn");
        break;
    }
    case 39585:
    {
        returnValue = F("An der Trah");
        break;
    }
    case 39586:
    {
        returnValue = F("An der Trainierbahn");
        break;
    }
    case 39587:
    {
        returnValue = F("An der Trappe");
        break;
    }
    case 39588:
    {
        returnValue = F("An der Trassmühle");
        break;
    }
    case 39589:
    {
        returnValue = F("An der Traube");
        break;
    }
    case 39590:
    {
        returnValue = F("An der Trave");
        break;
    }
    case 39591:
    {
        returnValue = F("An der Trebe");
        break;
    }
    case 39592:
    {
        returnValue = F("An der Treene");
        break;
    }
    case 39593:
    {
        returnValue = F("An der Treib");
        break;
    }
    case 39594:
    {
        returnValue = F("An der Treppe");
        break;
    }
    case 39595:
    {
        returnValue = F("An der Treuerhalde");
        break;
    }
    case 39596:
    {
        returnValue = F("An der Tribüne");
        break;
    }
    case 39597:
    {
        returnValue = F("An der Trie");
        break;
    }
    case 39598:
    {
        returnValue = F("An der Trieb");
        break;
    }
    case 39599:
    {
        returnValue = F("An der Triebe");
        break;
    }
    case 39600:
    {
        returnValue = F("An der Trifft");
        break;
    }
    case 39601:
    {
        returnValue = F("An der Trift");
        break;
    }
    case 39602:
    {
        returnValue = F("An der Trinitatiskirche");
        break;
    }
    case 39603:
    {
        returnValue = F("An der Trinkhalle");
        break;
    }
    case 39604:
    {
        returnValue = F("An der Trockenbach");
        break;
    }
    case 39605:
    {
        returnValue = F("An der Trocknung");
        break;
    }
    case 39606:
    {
        returnValue = F("An der Trodt");
        break;
    }
    case 39607:
    {
        returnValue = F("An der Trogbrücke");
        break;
    }
    case 39608:
    {
        returnValue = F("An der Trohe");
        break;
    }
    case 39609:
    {
        returnValue = F("An der Tromme");
        break;
    }
    case 39610:
    {
        returnValue = F("An der Truse");
        break;
    }
    case 39611:
    {
        returnValue = F("An der Träf");
        break;
    }
    case 39612:
    {
        returnValue = F("An der Tränk");
        break;
    }
    case 39613:
    {
        returnValue = F("An der Tränke");
        break;
    }
    case 39614:
    {
        returnValue = F("An der Trög");
        break;
    }
    case 39615:
    {
        returnValue = F("An der Tuchbleiche");
        break;
    }
    case 39616:
    {
        returnValue = F("An der Tumpe");
        break;
    }
    case 39617:
    {
        returnValue = F("An der Turnhalle");
        break;
    }
    case 39618:
    {
        returnValue = F("An der Turnwiese");
        break;
    }
    case 39619:
    {
        returnValue = F("An der Twete");
        break;
    }
    case 39620:
    {
        returnValue = F("An der Twiete I");
        break;
    }
    case 39621:
    {
        returnValue = F("An der Twiete II");
        break;
    }
    case 39622:
    {
        returnValue = F("An der Twiste");
        break;
    }
    case 39623:
    {
        returnValue = F("An der Tönneburg");
        break;
    }
    case 39624:
    {
        returnValue = F("An der Türkei");
        break;
    }
    case 39625:
    {
        returnValue = F("An der Uchte");
        break;
    }
    case 39626:
    {
        returnValue = F("An der Ucker");
        break;
    }
    case 39627:
    {
        returnValue = F("An der Uecker");
        break;
    }
    case 39628:
    {
        returnValue = F("An der Uhlenflucht");
        break;
    }
    case 39629:
    {
        returnValue = F("An der Uhr");
        break;
    }
    case 39630:
    {
        returnValue = F("An der Ulfe");
        break;
    }
    case 39631:
    {
        returnValue = F("An der Ulme");
        break;
    }
    case 39632:
    {
        returnValue = F("An der Ulmtalhalle");
        break;
    }
    case 39633:
    {
        returnValue = F("An der Ulster");
        break;
    }
    case 39634:
    {
        returnValue = F("An der Umflut");
        break;
    }
    case 39635:
    {
        returnValue = F("An der Umgehungsbahn");
        break;
    }
    case 39636:
    {
        returnValue = F("An der Umgehungsstr.");
        break;
    }
    case 39637:
    {
        returnValue = F("An der Unkenbach");
        break;
    }
    case 39638:
    {
        returnValue = F("An der Unstrut");
        break;
    }
    case 39639:
    {
        returnValue = F("An der Unterburg");
        break;
    }
    case 39640:
    {
        returnValue = F("An der Untereich");
        break;
    }
    case 39641:
    {
        returnValue = F("An der Unteren Dorfstr.");
        break;
    }
    case 39642:
    {
        returnValue = F("An der Unteren Mühle");
        break;
    }
    case 39643:
    {
        returnValue = F("An der Unteren Zell");
        break;
    }
    case 39644:
    {
        returnValue = F("An der Unterführung");
        break;
    }
    case 39645:
    {
        returnValue = F("An der Untermilde");
        break;
    }
    case 39646:
    {
        returnValue = F("An der Untermühle");
        break;
    }
    case 39647:
    {
        returnValue = F("An der Unterpforte");
        break;
    }
    case 39648:
    {
        returnValue = F("An der Urbansmühle");
        break;
    }
    case 39649:
    {
        returnValue = F("An der Urfall");
        break;
    }
    case 39650:
    {
        returnValue = F("An der Urff");
        break;
    }
    case 39651:
    {
        returnValue = F("An der Valleroy");
        break;
    }
    case 39652:
    {
        returnValue = F("An der Vechte");
        break;
    }
    case 39653:
    {
        returnValue = F("An der Veerse");
        break;
    }
    case 39654:
    {
        returnValue = F("An der Vehne");
        break;
    }
    case 39655:
    {
        returnValue = F("An der Veida");
        break;
    }
    case 39656:
    {
        returnValue = F("An der Velmede");
        break;
    }
    case 39657:
    {
        returnValue = F("An der Venn");
        break;
    }
    case 39658:
    {
        returnValue = F("An der Versuchsfläche");
        break;
    }
    case 39659:
    {
        returnValue = F("An der Vestischen");
        break;
    }
    case 39660:
    {
        returnValue = F("An der Vethe");
        break;
    }
    case 39661:
    {
        returnValue = F("An der Via Belgica");
        break;
    }
    case 39662:
    {
        returnValue = F("An der Via Claudia");
        break;
    }
    case 39663:
    {
        returnValue = F("An der Viehleite");
        break;
    }
    case 39664:
    {
        returnValue = F("An der Viehtrift");
        break;
    }
    case 39665:
    {
        returnValue = F("An der Viehwaage");
        break;
    }
    case 39666:
    {
        returnValue = F("An der Viehweide");
        break;
    }
    case 39667:
    {
        returnValue = F("An der Vikarie");
        break;
    }
    case 39668:
    {
        returnValue = F("An der Villa");
        break;
    }
    case 39669:
    {
        returnValue = F("An der Villa Schmitz");
        break;
    }
    case 39670:
    {
        returnValue = F("An der Vils");
        break;
    }
    case 39671:
    {
        returnValue = F("An der Vitzthummühle");
        break;
    }
    case 39672:
    {
        returnValue = F("An der Vocke");
        break;
    }
    case 39673:
    {
        returnValue = F("An der Vodelstr.");
        break;
    }
    case 39674:
    {
        returnValue = F("An der Vogelfluglinie");
        break;
    }
    case 39675:
    {
        returnValue = F("An der Vogelheck");
        break;
    }
    case 39676:
    {
        returnValue = F("An der Vogelhecke");
        break;
    }
    case 39677:
    {
        returnValue = F("An der Vogelhege");
        break;
    }
    case 39678:
    {
        returnValue = F("An der Vogelhüll");
        break;
    }
    case 39679:
    {
        returnValue = F("An der Vogelpfeife");
        break;
    }
    case 39680:
    {
        returnValue = F("An der Vogelriehe");
        break;
    }
    case 39681:
    {
        returnValue = F("An der Vogelrute");
        break;
    }
    case 39682:
    {
        returnValue = F("An der Vogelsberger Str.");
        break;
    }
    case 39683:
    {
        returnValue = F("An der Vogelsiedlung");
        break;
    }
    case 39684:
    {
        returnValue = F("An der Vogelstange");
        break;
    }
    case 39685:
    {
        returnValue = F("An der Vogelstellige");
        break;
    }
    case 39686:
    {
        returnValue = F("An der Vogelweide");
        break;
    }
    case 39687:
    {
        returnValue = F("An der Vogelwiese");
        break;
    }
    case 39688:
    {
        returnValue = F("An der Voglhüll");
        break;
    }
    case 39689:
    {
        returnValue = F("An der Vogtei");
        break;
    }
    case 39690:
    {
        returnValue = F("An der Volkach");
        break;
    }
    case 39691:
    {
        returnValue = F("An der Volksbühne");
        break;
    }
    case 39692:
    {
        returnValue = F("An der Volkswiese");
        break;
    }
    case 39693:
    {
        returnValue = F("An der Vollungleite");
        break;
    }
    case 39694:
    {
        returnValue = F("An der Volme");
        break;
    }
    case 39695:
    {
        returnValue = F("An der Vorburg");
        break;
    }
    case 39696:
    {
        returnValue = F("An der Vorderheide");
        break;
    }
    case 39697:
    {
        returnValue = F("An der Vorthbrücke");
        break;
    }
    case 39698:
    {
        returnValue = F("An der Voßkaul");
        break;
    }
    case 39699:
    {
        returnValue = F("An der Voßkuhle");
        break;
    }
    case 39700:
    {
        returnValue = F("An der Vulkeskuhle");
        break;
    }
    case 39701:
    {
        returnValue = F("An der Völlburg");
        break;
    }
    case 39702:
    {
        returnValue = F("An der Waad");
        break;
    }
    case 39703:
    {
        returnValue = F("An der Waage");
        break;
    }
    case 39704:
    {
        returnValue = F("An der Waaghalde");
        break;
    }
    case 39705:
    {
        returnValue = F("An der Waar");
        break;
    }
    case 39706:
    {
        returnValue = F("An der Wabe");
        break;
    }
    case 39707:
    {
        returnValue = F("An der Wach");
        break;
    }
    case 39708:
    {
        returnValue = F("An der Wache");
        break;
    }
    case 39709:
    {
        returnValue = F("An der Wachsstange");
        break;
    }
    case 39710:
    {
        returnValue = F("An der Wacht");
        break;
    }
    case 39711:
    {
        returnValue = F("An der Wae");
        break;
    }
    case 39712:
    {
        returnValue = F("An der Wagnerbreite");
        break;
    }
    case 39713:
    {
        returnValue = F("An der Wagnershöhe");
        break;
    }
    case 39714:
    {
        returnValue = F("An der Wahl");
        break;
    }
    case 39715:
    {
        returnValue = F("An der Waid");
        break;
    }
    case 39716:
    {
        returnValue = F("An der Waidmaar");
        break;
    }
    case 39717:
    {
        returnValue = F("An der Waidmühle");
        break;
    }
    case 39718:
    {
        returnValue = F("An der Waldburg");
        break;
    }
    case 39719:
    {
        returnValue = F("An der Waldbühne");
        break;
    }
    case 39720:
    {
        returnValue = F("An der Waldeisenbahn");
        break;
    }
    case 39721:
    {
        returnValue = F("An der Waldkante");
        break;
    }
    case 39722:
    {
        returnValue = F("An der Waldkapelle");
        break;
    }
    case 39723:
    {
        returnValue = F("An der Waldkolonie");
        break;
    }
    case 39724:
    {
        returnValue = F("An der Waldkoppel");
        break;
    }
    case 39725:
    {
        returnValue = F("An der Waldmühle");
        break;
    }
    case 39726:
    {
        returnValue = F("An der Waldnaab");
        break;
    }
    case 39727:
    {
        returnValue = F("An der Waldpromenade");
        break;
    }
    case 39728:
    {
        returnValue = F("An der Waldquelle");
        break;
    }
    case 39729:
    {
        returnValue = F("An der Waldscheuer");
        break;
    }
    case 39730:
    {
        returnValue = F("An der Waldschmiede");
        break;
    }
    case 39731:
    {
        returnValue = F("An der Waldschule");
        break;
    }
    case 39732:
    {
        returnValue = F("An der Waldschänke");
        break;
    }
    case 39733:
    {
        returnValue = F("An der Waldseite");
        break;
    }
    case 39734:
    {
        returnValue = F("An der Waldshard");
        break;
    }
    case 39735:
    {
        returnValue = F("An der Waldspitze");
        break;
    }
    case 39736:
    {
        returnValue = F("An der Waldsporthalle");
        break;
    }
    case 39737:
    {
        returnValue = F("An der Waldstr.");
        break;
    }
    case 39738:
    {
        returnValue = F("An der Waldwies");
        break;
    }
    case 39739:
    {
        returnValue = F("An der Waldwiese");
        break;
    }
    case 39740:
    {
        returnValue = F("An der Walke");
        break;
    }
    case 39741:
    {
        returnValue = F("An der Walkemühle");
        break;
    }
    case 39742:
    {
        returnValue = F("An der Walkenmühle");
        break;
    }
    case 39743:
    {
        returnValue = F("An der Walkmühle");
        break;
    }
    case 39744:
    {
        returnValue = F("An der Wallburg");
        break;
    }
    case 39745:
    {
        returnValue = F("An der Wallfahrt");
        break;
    }
    case 39746:
    {
        returnValue = F("An der Wallfahrtskirche");
        break;
    }
    case 39747:
    {
        returnValue = F("An der Wallhecke");
        break;
    }
    case 39748:
    {
        returnValue = F("An der Wallsbek");
        break;
    }
    case 39749:
    {
        returnValue = F("An der Walsbach");
        break;
    }
    case 39750:
    {
        returnValue = F("An der Walse");
        break;
    }
    case 39751:
    {
        returnValue = F("An der Walserbrücke");
        break;
    }
    case 39752:
    {
        returnValue = F("An der Walthershöhe");
        break;
    }
    case 39753:
    {
        returnValue = F("An der Walze");
        break;
    }
    case 39754:
    {
        returnValue = F("An der Wande");
        break;
    }
    case 39755:
    {
        returnValue = F("An der Wanderbahn");
        break;
    }
    case 39756:
    {
        returnValue = F("An der Wang");
        break;
    }
    case 39757:
    {
        returnValue = F("An der Wange");
        break;
    }
    case 39758:
    {
        returnValue = F("An der Wann");
        break;
    }
    case 39759:
    {
        returnValue = F("An der Wanne");
        break;
    }
    case 39760:
    {
        returnValue = F("An der Wappau");
        break;
    }
    case 39761:
    {
        returnValue = F("An der Wappenschmiede");
        break;
    }
    case 39762:
    {
        returnValue = F("An der Ward");
        break;
    }
    case 39763:
    {
        returnValue = F("An der Warnow");
        break;
    }
    case 39764:
    {
        returnValue = F("An der Wart");
        break;
    }
    case 39765:
    {
        returnValue = F("An der Warte");
        break;
    }
    case 39766:
    {
        returnValue = F("An der Warth");
        break;
    }
    case 39767:
    {
        returnValue = F("An der Warthe");
        break;
    }
    case 39768:
    {
        returnValue = F("An der Wasch");
        break;
    }
    case 39769:
    {
        returnValue = F("An der Waschau");
        break;
    }
    case 39770:
    {
        returnValue = F("An der Waschwiese");
        break;
    }
    case 39771:
    {
        returnValue = F("An der Wasserburg");
        break;
    }
    case 39772:
    {
        returnValue = F("An der Wasserfahrt");
        break;
    }
    case 39773:
    {
        returnValue = F("An der Wasserfurch");
        break;
    }
    case 39774:
    {
        returnValue = F("An der Wasserfurche");
        break;
    }
    case 39775:
    {
        returnValue = F("An der Wassergall");
        break;
    }
    case 39776:
    {
        returnValue = F("An der Wasserkuhle");
        break;
    }
    case 39777:
    {
        returnValue = F("An der Wasserkunst");
        break;
    }
    case 39778:
    {
        returnValue = F("An der Wasserleitung");
        break;
    }
    case 39779:
    {
        returnValue = F("An der Wasserlöse");
        break;
    }
    case 39780:
    {
        returnValue = F("An der Wassermühle");
        break;
    }
    case 39781:
    {
        returnValue = F("An der Wasserreserve");
        break;
    }
    case 39782:
    {
        returnValue = F("An der Wasserrinne");
        break;
    }
    case 39783:
    {
        returnValue = F("An der Wasserschapf");
        break;
    }
    case 39784:
    {
        returnValue = F("An der Wasserscheide");
        break;
    }
    case 39785:
    {
        returnValue = F("An der Waterkant");
        break;
    }
    case 39786:
    {
        returnValue = F("An der Waterkuhl");
        break;
    }
    case 39787:
    {
        returnValue = F("An der Weberei");
        break;
    }
    case 39788:
    {
        returnValue = F("An der Wedel");
        break;
    }
    case 39789:
    {
        returnValue = F("An der Weed");
        break;
    }
    case 39790:
    {
        returnValue = F("An der Weet");
        break;
    }
    case 39791:
    {
        returnValue = F("An der Wegemühle");
        break;
    }
    case 39792:
    {
        returnValue = F("An der Wegscheid");
        break;
    }
    case 39793:
    {
        returnValue = F("An der Wegscheide");
        break;
    }
    case 39794:
    {
        returnValue = F("An der Wehle");
        break;
    }
    case 39795:
    {
        returnValue = F("An der Wehr");
        break;
    }
    case 39796:
    {
        returnValue = F("An der Wehrbrücke");
        break;
    }
    case 39797:
    {
        returnValue = F("An der Wehre");
        break;
    }
    case 39798:
    {
        returnValue = F("An der Wehrkirche");
        break;
    }
    case 39799:
    {
        returnValue = F("An der Wehrwiese");
        break;
    }
    case 39800:
    {
        returnValue = F("An der Weid");
        break;
    }
    case 39801:
    {
        returnValue = F("An der Weida");
        break;
    }
    case 39802:
    {
        returnValue = F("An der Weidach");
        break;
    }
    case 39803:
    {
        returnValue = F("An der Weide");
        break;
    }
    case 39804:
    {
        returnValue = F("An der Weidenbrücke");
        break;
    }
    case 39805:
    {
        returnValue = F("An der Weidenmühle");
        break;
    }
    case 39806:
    {
        returnValue = F("An der Weiherheck");
        break;
    }
    case 39807:
    {
        returnValue = F("An der Weihertanne");
        break;
    }
    case 39808:
    {
        returnValue = F("An der Weilach");
        break;
    }
    case 39809:
    {
        returnValue = F("An der Weilergasse");
        break;
    }
    case 39810:
    {
        returnValue = F("An der Weilquelle");
        break;
    }
    case 39811:
    {
        returnValue = F("An der Weinbreite");
        break;
    }
    case 39812:
    {
        returnValue = F("An der Weinhecke");
        break;
    }
    case 39813:
    {
        returnValue = F("An der Weinkaje");
        break;
    }
    case 39814:
    {
        returnValue = F("An der Weinleite");
        break;
    }
    case 39815:
    {
        returnValue = F("An der Weinleithe");
        break;
    }
    case 39816:
    {
        returnValue = F("An der Weinsteige");
        break;
    }
    case 39817:
    {
        returnValue = F("An der Weinstr.");
        break;
    }
    case 39818:
    {
        returnValue = F("An der Weinwiese");
        break;
    }
    case 39819:
    {
        returnValue = F("An der Weisach");
        break;
    }
    case 39820:
    {
        returnValue = F("An der Weismain");
        break;
    }
    case 39821:
    {
        returnValue = F("An der Weißbach");
        break;
    }
    case 39822:
    {
        returnValue = F("An der Weißburg");
        break;
    }
    case 39823:
    {
        returnValue = F("An der Weißen Brücke");
        break;
    }
    case 39824:
    {
        returnValue = F("An der Weißen Marter");
        break;
    }
    case 39825:
    {
        returnValue = F("An der Weißen Mauer");
        break;
    }
    case 39826:
    {
        returnValue = F("An der Weißen Taube");
        break;
    }
    case 39827:
    {
        returnValue = F("An der Weißen Wiek");
        break;
    }
    case 39828:
    {
        returnValue = F("An der Weißmühle");
        break;
    }
    case 39829:
    {
        returnValue = F("An der Welle");
        break;
    }
    case 39830:
    {
        returnValue = F("An der Wellekuhle");
        break;
    }
    case 39831:
    {
        returnValue = F("An der Welsbach");
        break;
    }
    case 39832:
    {
        returnValue = F("An der Weme");
        break;
    }
    case 39833:
    {
        returnValue = F("An der Wende");
        break;
    }
    case 39834:
    {
        returnValue = F("An der Wendestelle");
        break;
    }
    case 39835:
    {
        returnValue = F("An der Werkleite");
        break;
    }
    case 39836:
    {
        returnValue = F("An der Werkstatt");
        break;
    }
    case 39837:
    {
        returnValue = F("An der Werme");
        break;
    }
    case 39838:
    {
        returnValue = F("An der Werpa");
        break;
    }
    case 39839:
    {
        returnValue = F("An der Werra");
        break;
    }
    case 39840:
    {
        returnValue = F("An der Werse");
        break;
    }
    case 39841:
    {
        returnValue = F("An der Wersemühle");
        break;
    }
    case 39842:
    {
        returnValue = F("An der Weschnitz");
        break;
    }
    case 39843:
    {
        returnValue = F("An der Wesenitz");
        break;
    }
    case 39844:
    {
        returnValue = F("An der Weser");
        break;
    }
    case 39845:
    {
        returnValue = F("An der Wesering");
        break;
    }
    case 39846:
    {
        returnValue = F("An der Westen");
        break;
    }
    case 39847:
    {
        returnValue = F("An der Westerheide");
        break;
    }
    case 39848:
    {
        returnValue = F("An der Westerweede");
        break;
    }
    case 39849:
    {
        returnValue = F("An der Westerwiese");
        break;
    }
    case 39850:
    {
        returnValue = F("An der Westspange");
        break;
    }
    case 39851:
    {
        returnValue = F("An der Westumgehung");
        break;
    }
    case 39852:
    {
        returnValue = F("An der Weth");
        break;
    }
    case 39853:
    {
        returnValue = F("An der Wette");
        break;
    }
    case 39854:
    {
        returnValue = F("An der Wetter");
        break;
    }
    case 39855:
    {
        returnValue = F("An der Wettern");
        break;
    }
    case 39856:
    {
        returnValue = F("An der Wetterwarte");
        break;
    }
    case 39857:
    {
        returnValue = F("An der Weuert");
        break;
    }
    case 39858:
    {
        returnValue = F("An der Wichtelweide");
        break;
    }
    case 39859:
    {
        returnValue = F("An der Wicke");
        break;
    }
    case 39860:
    {
        returnValue = F("An der Wickriede");
        break;
    }
    case 39861:
    {
        returnValue = F("An der Wickstädter Str.");
        break;
    }
    case 39862:
    {
        returnValue = F("An der Wied");
        break;
    }
    case 39863:
    {
        returnValue = F("An der Wiedemuth");
        break;
    }
    case 39864:
    {
        returnValue = F("An der Wiege");
        break;
    }
    case 39865:
    {
        returnValue = F("An der Wiek");
        break;
    }
    case 39866:
    {
        returnValue = F("An der Wieke");
        break;
    }
    case 39867:
    {
        returnValue = F("An der Wierau");
        break;
    }
    case 39868:
    {
        returnValue = F("An der Wies");
        break;
    }
    case 39869:
    {
        returnValue = F("An der Wiese");
        break;
    }
    case 39870:
    {
        returnValue = F("An der Wiesenkapelle");
        break;
    }
    case 39871:
    {
        returnValue = F("An der Wiesenmaas");
        break;
    }
    case 39872:
    {
        returnValue = F("An der Wiesenmühle");
        break;
    }
    case 39873:
    {
        returnValue = F("An der Wiesenquelle");
        break;
    }
    case 39874:
    {
        returnValue = F("An der Wiesent");
        break;
    }
    case 39875:
    {
        returnValue = F("An der Wieskapelle");
        break;
    }
    case 39876:
    {
        returnValue = F("An der Wieslauf");
        break;
    }
    case 39877:
    {
        returnValue = F("An der Wieste");
        break;
    }
    case 39878:
    {
        returnValue = F("An der Wietlake");
        break;
    }
    case 39879:
    {
        returnValue = F("An der Wietze");
        break;
    }
    case 39880:
    {
        returnValue = F("An der Wildbahn");
        break;
    }
    case 39881:
    {
        returnValue = F("An der Wilden Gutach");
        break;
    }
    case 39882:
    {
        returnValue = F("An der Wildenburg");
        break;
    }
    case 39883:
    {
        returnValue = F("An der Wildkoppel");
        break;
    }
    case 39884:
    {
        returnValue = F("An der Wilhelmsburg");
        break;
    }
    case 39885:
    {
        returnValue = F("An der Wilhelmshöhe");
        break;
    }
    case 39886:
    {
        returnValue = F("An der Willibrordschule");
        break;
    }
    case 39887:
    {
        returnValue = F("An der Windmühle");
        break;
    }
    case 39888:
    {
        returnValue = F("An der Windrose");
        break;
    }
    case 39889:
    {
        returnValue = F("An der Windwehe");
        break;
    }
    case 39890:
    {
        returnValue = F("An der Wingertsmühle");
        break;
    }
    case 39891:
    {
        returnValue = F("An der Winneburg");
        break;
    }
    case 39892:
    {
        returnValue = F("An der Winsch");
        break;
    }
    case 39893:
    {
        returnValue = F("An der Winterbahn");
        break;
    }
    case 39894:
    {
        returnValue = F("An der Winterhälde");
        break;
    }
    case 39895:
    {
        returnValue = F("An der Winterleite");
        break;
    }
    case 39896:
    {
        returnValue = F("An der Wintermaar");
        break;
    }
    case 39897:
    {
        returnValue = F("An der Winterschänke");
        break;
    }
    case 39898:
    {
        returnValue = F("An der Winterseite");
        break;
    }
    case 39899:
    {
        returnValue = F("An der Wipfra");
        break;
    }
    case 39900:
    {
        returnValue = F("An der Wippe");
        break;
    }
    case 39901:
    {
        returnValue = F("An der Wipper");
        break;
    }
    case 39902:
    {
        returnValue = F("An der Wipperau");
        break;
    }
    case 39903:
    {
        returnValue = F("An der Wirtschaftsstr.");
        break;
    }
    case 39904:
    {
        returnValue = F("An der Wisentahalle");
        break;
    }
    case 39905:
    {
        returnValue = F("An der Wittbeck");
        break;
    }
    case 39906:
    {
        returnValue = F("An der Wittenburg");
        break;
    }
    case 39907:
    {
        returnValue = F("An der Wittgeshohl");
        break;
    }
    case 39908:
    {
        returnValue = F("An der Woblitz");
        break;
    }
    case 39909:
    {
        returnValue = F("An der Wohrte");
        break;
    }
    case 39910:
    {
        returnValue = F("An der Wohte");
        break;
    }
    case 39911:
    {
        returnValue = F("An der Wolfgangwiese");
        break;
    }
    case 39912:
    {
        returnValue = F("An der Wolfsburg");
        break;
    }
    case 39913:
    {
        returnValue = F("An der Wolfsdelle");
        break;
    }
    case 39914:
    {
        returnValue = F("An der Wolfseiche");
        break;
    }
    case 39915:
    {
        returnValue = F("An der Wolfsgrube");
        break;
    }
    case 39916:
    {
        returnValue = F("An der Wolfsgurgel");
        break;
    }
    case 39917:
    {
        returnValue = F("An der Wolfsheck");
        break;
    }
    case 39918:
    {
        returnValue = F("An der Wolfsheide");
        break;
    }
    case 39919:
    {
        returnValue = F("An der Wolfskammer");
        break;
    }
    case 39920:
    {
        returnValue = F("An der Wolfskaut");
        break;
    }
    case 39921:
    {
        returnValue = F("An der Wolfskuhle");
        break;
    }
    case 39922:
    {
        returnValue = F("An der Wolfsschlucht");
        break;
    }
    case 39923:
    {
        returnValue = F("An der Wolfsstaud");
        break;
    }
    case 39924:
    {
        returnValue = F("An der Wolldecke");
        break;
    }
    case 39925:
    {
        returnValue = F("An der Woogwiese");
        break;
    }
    case 39926:
    {
        returnValue = F("An der Woorte");
        break;
    }
    case 39927:
    {
        returnValue = F("An der Wormser Str.");
        break;
    }
    case 39928:
    {
        returnValue = F("An der Worth");
        break;
    }
    case 39929:
    {
        returnValue = F("An der Worthe");
        break;
    }
    case 39930:
    {
        returnValue = F("An der Woy");
        break;
    }
    case 39931:
    {
        returnValue = F("An der Wrau");
        break;
    }
    case 39932:
    {
        returnValue = F("An der Wuhle");
        break;
    }
    case 39933:
    {
        returnValue = F("An der Wunderburg");
        break;
    }
    case 39934:
    {
        returnValue = F("An der Wunn");
        break;
    }
    case 39935:
    {
        returnValue = F("An der Wunne");
        break;
    }
    case 39936:
    {
        returnValue = F("An der Wupper");
        break;
    }
    case 39937:
    {
        returnValue = F("An der Wurt");
        break;
    }
    case 39938:
    {
        returnValue = F("An der Wurth");
        break;
    }
    case 39939:
    {
        returnValue = F("An der Wurzel");
        break;
    }
    case 39940:
    {
        returnValue = F("An der Wyhra");
        break;
    }
    case 39941:
    {
        returnValue = F("An der Währ");
        break;
    }
    case 39942:
    {
        returnValue = F("An der Wäsche");
        break;
    }
    case 39943:
    {
        returnValue = F("An der Wäter");
        break;
    }
    case 39944:
    {
        returnValue = F("An der Wätering");
        break;
    }
    case 39945:
    {
        returnValue = F("An der Wätern");
        break;
    }
    case 39946:
    {
        returnValue = F("An der Wöhrde");
        break;
    }
    case 39947:
    {
        returnValue = F("An der Wörde");
        break;
    }
    case 39948:
    {
        returnValue = F("An der Wörnitzquelle");
        break;
    }
    case 39949:
    {
        returnValue = F("An der Wörpe");
        break;
    }
    case 39950:
    {
        returnValue = F("An der Wörth");
        break;
    }
    case 39951:
    {
        returnValue = F("An der Wöste");
        break;
    }
    case 39952:
    {
        returnValue = F("An der Würde");
        break;
    }
    case 39953:
    {
        returnValue = F("An der Würmhalde");
        break;
    }
    case 39954:
    {
        returnValue = F("An der Würmleiten");
        break;
    }
    case 39955:
    {
        returnValue = F("An der Würschnitzaue");
        break;
    }
    case 39956:
    {
        returnValue = F("An der Wüste");
        break;
    }
    case 39957:
    {
        returnValue = F("An der Wüstung");
        break;
    }
    case 39958:
    {
        returnValue = F("An der Zarnow");
        break;
    }
    case 39959:
    {
        returnValue = F("An der Zaubach");
        break;
    }
    case 39960:
    {
        returnValue = F("An der Zaunburg");
        break;
    }
    case 39961:
    {
        returnValue = F("An der Zech");
        break;
    }
    case 39962:
    {
        returnValue = F("An der Zechenbahn");
        break;
    }
    case 39963:
    {
        returnValue = F("An der Zehnbach");
        break;
    }
    case 39964:
    {
        returnValue = F("An der Zehnt");
        break;
    }
    case 39965:
    {
        returnValue = F("An der Zehntpforte");
        break;
    }
    case 39966:
    {
        returnValue = F("An der Zehntscheuer");
        break;
    }
    case 39967:
    {
        returnValue = F("An der Zehntscheune");
        break;
    }
    case 39968:
    {
        returnValue = F("An der Zeidelweide");
        break;
    }
    case 39969:
    {
        returnValue = F("An der Zeih");
        break;
    }
    case 39970:
    {
        returnValue = F("An der Zeil");
        break;
    }
    case 39971:
    {
        returnValue = F("An der Zeile");
        break;
    }
    case 39972:
    {
        returnValue = F("An der Zeilstatt");
        break;
    }
    case 39973:
    {
        returnValue = F("An der Zeilweide");
        break;
    }
    case 39974:
    {
        returnValue = F("An der Zeiselsmühle");
        break;
    }
    case 39975:
    {
        returnValue = F("An der Zeisigburg");
        break;
    }
    case 39976:
    {
        returnValue = F("An der Zeistritz");
        break;
    }
    case 39977:
    {
        returnValue = F("An der Zeiße");
        break;
    }
    case 39978:
    {
        returnValue = F("An der Zell");
        break;
    }
    case 39979:
    {
        returnValue = F("An der Zent");
        break;
    }
    case 39980:
    {
        returnValue = F("An der Zeppelinscheune");
        break;
    }
    case 39981:
    {
        returnValue = F("An der Zeppelinstr.");
        break;
    }
    case 39982:
    {
        returnValue = F("An der Zickelburg");
        break;
    }
    case 39983:
    {
        returnValue = F("An der Ziegelei");
        break;
    }
    case 39984:
    {
        returnValue = F("An der Ziegeleibäke");
        break;
    }
    case 39985:
    {
        returnValue = F("An der Ziegelhütte");
        break;
    }
    case 39986:
    {
        returnValue = F("An der Ziegelscheune");
        break;
    }
    case 39987:
    {
        returnValue = F("An der Ziegenwiese");
        break;
    }
    case 39988:
    {
        returnValue = F("An der Ziethe");
        break;
    }
    case 39989:
    {
        returnValue = F("An der Zimmerei");
        break;
    }
    case 39990:
    {
        returnValue = F("An der Zisterne");
        break;
    }
    case 39991:
    {
        returnValue = F("An der Zitadelle");
        break;
    }
    case 39992:
    {
        returnValue = F("An der Zitterquelle");
        break;
    }
    case 39993:
    {
        returnValue = F("An der Zoche");
        break;
    }
    case 39994:
    {
        returnValue = F("An der Zollbrücke");
        break;
    }
    case 39995:
    {
        returnValue = F("An der Zollstation");
        break;
    }
    case 39996:
    {
        returnValue = F("An der Zolltafel");
        break;
    }
    case 39997:
    {
        returnValue = F("An der Zschopau");
        break;
    }
    case 39998:
    {
        returnValue = F("An der Zuckerfabrik");
        break;
    }
    case 39999:
    {
        returnValue = F("An der Zuckerraffinerie");
        break;
    }
    case 40000:
    {
        returnValue = F("An der Zugbrücke");
        break;
    }
    case 40001:
    {
        returnValue = F("An der Zugspitze");
        break;
    }
    case 40002:
    {
        returnValue = F("An der Zwerg");
        break;
    }
    case 40003:
    {
        returnValue = F("An der Zwieselmühle");
        break;
    }
    }
    return returnValue;
}
