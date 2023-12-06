#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameM1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 213182:
    {
        returnValue = F("M");
        break;
    }
    case 213183:
    {
        returnValue = F("M-Flügel");
        break;
    }
    case 213184:
    {
        returnValue = F("M-Weg");
        break;
    }
    case 213185:
    {
        returnValue = F("M. Brautsch-Str.");
        break;
    }
    case 213186:
    {
        returnValue = F("M. Hartung-Weg");
        break;
    }
    case 213187:
    {
        returnValue = F("M.+T.-Werner-Str.");
        break;
    }
    case 213188:
    {
        returnValue = F("M.-K.-Fitzkow-Platz");
        break;
    }
    case 213189:
    {
        returnValue = F("M.-Luther-Weg");
        break;
    }
    case 213190:
    {
        returnValue = F("M.-Schiestl-Str.");
        break;
    }
    case 213191:
    {
        returnValue = F("M.-T.-Buchholz-Stich");
        break;
    }
    case 213192:
    {
        returnValue = F("MAS-Hof");
        break;
    }
    case 213193:
    {
        returnValue = F("MIAG-Park");
        break;
    }
    case 213194:
    {
        returnValue = F("MIAG-Weg");
        break;
    }
    case 213195:
    {
        returnValue = F("MIL8");
        break;
    }
    case 213196:
    {
        returnValue = F("MIttelschneise");
        break;
    }
    case 213197:
    {
        returnValue = F("MMM-Str.");
        break;
    }
    case 213198:
    {
        returnValue = F("MSGR-Scheperjans-Str.");
        break;
    }
    case 213199:
    {
        returnValue = F("MSP 17");
        break;
    }
    case 213200:
    {
        returnValue = F("MSP 7");
        break;
    }
    case 213201:
    {
        returnValue = F("MSP 8");
        break;
    }
    case 213202:
    {
        returnValue = F("MST21");
        break;
    }
    case 213203:
    {
        returnValue = F("MTB");
        break;
    }
    case 213204:
    {
        returnValue = F("MTB \"SadoMaso");
        break;
    }
    case 213205:
    {
        returnValue = F("MTB - Trail");
        break;
    }
    case 213206:
    {
        returnValue = F("MTB HERO Wegscheid");
        break;
    }
    case 213207:
    {
        returnValue = F("MTB Trail");
        break;
    }
    case 213208:
    {
        returnValue = F("MTB-4");
        break;
    }
    case 213209:
    {
        returnValue = F("MTB-Strecke Simmerberg");
        break;
    }
    case 213210:
    {
        returnValue = F("MTB-Trail");
        break;
    }
    case 213211:
    {
        returnValue = F("MTB-Trail Maria Bildhausen Südwest");
        break;
    }
    case 213212:
    {
        returnValue = F("MTB-Trainings-Zentrum Monschau-Kalterherberg");
        break;
    }
    case 213213:
    {
        returnValue = F("MTB14");
        break;
    }
    case 213214:
    {
        returnValue = F("MTB: \"Brachialo");
        break;
    }
    case 213215:
    {
        returnValue = F("MTS Siedlung");
        break;
    }
    case 213216:
    {
        returnValue = F("MTS-Siedlung");
        break;
    }
    case 213217:
    {
        returnValue = F("MTS-Str.");
        break;
    }
    case 213218:
    {
        returnValue = F("MTS-Viertel");
        break;
    }
    case 213219:
    {
        returnValue = F("MTS-Weg");
        break;
    }
    case 213220:
    {
        returnValue = F("MX-Park Konstanz");
        break;
    }
    case 213221:
    {
        returnValue = F("Maacksgasse");
        break;
    }
    case 213222:
    {
        returnValue = F("Maad");
        break;
    }
    case 213223:
    {
        returnValue = F("Maadbergweg");
        break;
    }
    case 213224:
    {
        returnValue = F("Maadeland");
        break;
    }
    case 213225:
    {
        returnValue = F("Maadestr.");
        break;
    }
    case 213226:
    {
        returnValue = F("Maadeweg");
        break;
    }
    case 213227:
    {
        returnValue = F("Maagshofstr.");
        break;
    }
    case 213228:
    {
        returnValue = F("Maagshöhe");
        break;
    }
    case 213229:
    {
        returnValue = F("Maagweg");
        break;
    }
    case 213230:
    {
        returnValue = F("Maakenhofwinkel");
        break;
    }
    case 213231:
    {
        returnValue = F("Maalenstegalk");
        break;
    }
    case 213232:
    {
        returnValue = F("Maalstätte");
        break;
    }
    case 213233:
    {
        returnValue = F("Maangarten");
        break;
    }
    case 213234:
    {
        returnValue = F("Maankampsweg");
        break;
    }
    case 213235:
    {
        returnValue = F("Maanweg");
        break;
    }
    case 213236:
    {
        returnValue = F("Maaraustr.");
        break;
    }
    case 213237:
    {
        returnValue = F("Maarbachstr.");
        break;
    }
    case 213238:
    {
        returnValue = F("Maareckenstr.");
        break;
    }
    case 213239:
    {
        returnValue = F("Maarende");
        break;
    }
    case 213240:
    {
        returnValue = F("Maarer Goldhelg");
        break;
    }
    case 213241:
    {
        returnValue = F("Maarer Str.");
        break;
    }
    case 213242:
    {
        returnValue = F("Maarfeld");
        break;
    }
    case 213243:
    {
        returnValue = F("Maarfelder Hof");
        break;
    }
    case 213244:
    {
        returnValue = F("Maarflach");
        break;
    }
    case 213245:
    {
        returnValue = F("Maargasse");
        break;
    }
    case 213246:
    {
        returnValue = F("Maarheckstr.");
        break;
    }
    case 213247:
    {
        returnValue = F("Maarheiderweg");
        break;
    }
    case 213248:
    {
        returnValue = F("Maarhufenweg");
        break;
    }
    case 213249:
    {
        returnValue = F("Maarhäuser Weg");
        break;
    }
    case 213250:
    {
        returnValue = F("Maarortstr.");
        break;
    }
    case 213251:
    {
        returnValue = F("Maarpfad");
        break;
    }
    case 213252:
    {
        returnValue = F("Maarplatz");
        break;
    }
    case 213253:
    {
        returnValue = F("Maarstr.");
        break;
    }
    case 213254:
    {
        returnValue = F("Maarweg");
        break;
    }
    case 213255:
    {
        returnValue = F("Maarwinkel");
        break;
    }
    case 213256:
    {
        returnValue = F("Maas");
        break;
    }
    case 213257:
    {
        returnValue = F("Maasbeeker Feld");
        break;
    }
    case 213258:
    {
        returnValue = F("Maasbeeker Str.");
        break;
    }
    case 213259:
    {
        returnValue = F("Maasbergstr.");
        break;
    }
    case 213260:
    {
        returnValue = F("Maasbüllhof");
        break;
    }
    case 213261:
    {
        returnValue = F("Maaschen");
        break;
    }
    case 213262:
    {
        returnValue = F("Maasdorfer Weg");
        break;
    }
    case 213263:
    {
        returnValue = F("Maaseiker Str.");
        break;
    }
    case 213264:
    {
        returnValue = F("Maasen");
        break;
    }
    case 213265:
    {
        returnValue = F("Maasen Planie");
        break;
    }
    case 213266:
    {
        returnValue = F("Maasenbachstr.");
        break;
    }
    case 213267:
    {
        returnValue = F("Maaser Str.");
        break;
    }
    case 213268:
    {
        returnValue = F("Maaseweg");
        break;
    }
    case 213269:
    {
        returnValue = F("Maasgraben");
        break;
    }
    case 213270:
    {
        returnValue = F("Maashofstr.");
        break;
    }
    case 213271:
    {
        returnValue = F("Maashänserweg");
        break;
    }
    case 213272:
    {
        returnValue = F("Maaskamp");
        break;
    }
    case 213273:
    {
        returnValue = F("Maaskamper Weg");
        break;
    }
    case 213274:
    {
        returnValue = F("Maasleben");
        break;
    }
    case 213275:
    {
        returnValue = F("Maaslinger Dorfstr.");
        break;
    }
    case 213276:
    {
        returnValue = F("Maaslinger Grenzweg");
        break;
    }
    case 213277:
    {
        returnValue = F("Maaslinger Str.");
        break;
    }
    case 213278:
    {
        returnValue = F("Maasrangen");
        break;
    }
    case 213279:
    {
        returnValue = F("Maassenstr.");
        break;
    }
    case 213280:
    {
        returnValue = F("Maasstr.");
        break;
    }
    case 213281:
    {
        returnValue = F("Maastrichter Ring");
        break;
    }
    case 213282:
    {
        returnValue = F("Maastrichter Str.");
        break;
    }
    case 213283:
    {
        returnValue = F("Maastrichter Weg");
        break;
    }
    case 213284:
    {
        returnValue = F("Maastrichterweg");
        break;
    }
    case 213285:
    {
        returnValue = F("Maasweg");
        break;
    }
    case 213286:
    {
        returnValue = F("Maate Weg");
        break;
    }
    case 213287:
    {
        returnValue = F("Maatepatt");
        break;
    }
    case 213288:
    {
        returnValue = F("Maatestr.");
        break;
    }
    case 213289:
    {
        returnValue = F("Maateweg");
        break;
    }
    case 213290:
    {
        returnValue = F("Maatheide");
        break;
    }
    case 213291:
    {
        returnValue = F("Maatjatz");
        break;
    }
    case 213292:
    {
        returnValue = F("Maaßen-Nagel-Str.");
        break;
    }
    case 213293:
    {
        returnValue = F("Maaßensteg");
        break;
    }
    case 213294:
    {
        returnValue = F("Maaßenstr.");
        break;
    }
    case 213295:
    {
        returnValue = F("Maaßenweg");
        break;
    }
    case 213296:
    {
        returnValue = F("Maaßhellmer");
        break;
    }
    case 213297:
    {
        returnValue = F("Maaßstr.");
        break;
    }
    case 213298:
    {
        returnValue = F("Maaßweg");
        break;
    }
    case 213299:
    {
        returnValue = F("Mabel-Grammer-Ring");
        break;
    }
    case 213300:
    {
        returnValue = F("Maberzeller Str.");
        break;
    }
    case 213301:
    {
        returnValue = F("Mac-Kaleu-Str.");
        break;
    }
    case 213302:
    {
        returnValue = F("Macairestr.");
        break;
    }
    case 213303:
    {
        returnValue = F("Maccostr.");
        break;
    }
    case 213304:
    {
        returnValue = F("Mach-Mit-Wiese");
        break;
    }
    case 213305:
    {
        returnValue = F("Machabäerstr.");
        break;
    }
    case 213306:
    {
        returnValue = F("Machandelhof");
        break;
    }
    case 213307:
    {
        returnValue = F("Machandelstieg");
        break;
    }
    case 213308:
    {
        returnValue = F("Machandelweg");
        break;
    }
    case 213309:
    {
        returnValue = F("Machangelstr.");
        break;
    }
    case 213310:
    {
        returnValue = F("Machangelweg");
        break;
    }
    case 213311:
    {
        returnValue = F("Machariusstr.");
        break;
    }
    case 213312:
    {
        returnValue = F("Machaweg");
        break;
    }
    case 213313:
    {
        returnValue = F("Macheinerweg");
        break;
    }
    case 213314:
    {
        returnValue = F("Macheinstr.");
        break;
    }
    case 213315:
    {
        returnValue = F("Machelberger Str.");
        break;
    }
    case 213316:
    {
        returnValue = F("Macheleidtstr.");
        break;
    }
    case 213317:
    {
        returnValue = F("Machelmstr.");
        break;
    }
    case 213318:
    {
        returnValue = F("Machels Hain");
        break;
    }
    case 213319:
    {
        returnValue = F("Macherbach");
        break;
    }
    case 213320:
    {
        returnValue = F("Macherenstr.");
        break;
    }
    case 213321:
    {
        returnValue = F("Macherheck");
        break;
    }
    case 213322:
    {
        returnValue = F("Macherner Str.");
        break;
    }
    case 213323:
    {
        returnValue = F("Macherscheider Str.");
        break;
    }
    case 213324:
    {
        returnValue = F("Macherslust");
        break;
    }
    case 213325:
    {
        returnValue = F("Macherstr.");
        break;
    }
    case 213326:
    {
        returnValue = F("Machestr.");
        break;
    }
    case 213327:
    {
        returnValue = F("Machham");
        break;
    }
    case 213328:
    {
        returnValue = F("Machnigstr.");
        break;
    }
    case 213329:
    {
        returnValue = F("Machnower Busch");
        break;
    }
    case 213330:
    {
        returnValue = F("Machnower Chaussee");
        break;
    }
    case 213331:
    {
        returnValue = F("Machnower Seestr.");
        break;
    }
    case 213332:
    {
        returnValue = F("Machnower Str.");
        break;
    }
    case 213333:
    {
        returnValue = F("Macholdshiebsweg");
        break;
    }
    case 213334:
    {
        returnValue = F("Machstr.");
        break;
    }
    case 213335:
    {
        returnValue = F("Machtesberger Str.");
        break;
    }
    case 213336:
    {
        returnValue = F("Machthildstr.");
        break;
    }
    case 213337:
    {
        returnValue = F("Machtilshäuser Str.");
        break;
    }
    case 213338:
    {
        returnValue = F("Machtlfinger Str.");
        break;
    }
    case 213339:
    {
        returnValue = F("Machtloser Str.");
        break;
    }
    case 213340:
    {
        returnValue = F("Machtloser Weg");
        break;
    }
    case 213341:
    {
        returnValue = F("Machtolfstr.");
        break;
    }
    case 213342:
    {
        returnValue = F("Machtolfweg");
        break;
    }
    case 213343:
    {
        returnValue = F("Machtolsheimer Str.");
        break;
    }
    case 213344:
    {
        returnValue = F("Machtolsheimer Weg");
        break;
    }
    case 213345:
    {
        returnValue = F("Machtsumer Str.");
        break;
    }
    case 213346:
    {
        returnValue = F("Machtsumer Weg");
        break;
    }
    case 213347:
    {
        returnValue = F("Machutusweg");
        break;
    }
    case 213348:
    {
        returnValue = F("Mackebenstr.");
        break;
    }
    case 213349:
    {
        returnValue = F("Mackedamm");
        break;
    }
    case 213350:
    {
        returnValue = F("Mackelweg");
        break;
    }
    case 213351:
    {
        returnValue = F("Mackenbach");
        break;
    }
    case 213352:
    {
        returnValue = F("Mackenbacher Str.");
        break;
    }
    case 213353:
    {
        returnValue = F("Mackenbacker Str.");
        break;
    }
    case 213354:
    {
        returnValue = F("Mackenbrucher Str.");
        break;
    }
    case 213355:
    {
        returnValue = F("Mackendorfer Str.");
        break;
    }
    case 213356:
    {
        returnValue = F("Mackendorfer Weg");
        break;
    }
    case 213357:
    {
        returnValue = F("Mackenheimer Str.");
        break;
    }
    case 213358:
    {
        returnValue = F("Mackenheimer Weg");
        break;
    }
    case 213359:
    {
        returnValue = F("Mackenkampsweg");
        break;
    }
    case 213360:
    {
        returnValue = F("Mackenmühle");
        break;
    }
    case 213361:
    {
        returnValue = F("Mackenroder Hauptstr.");
        break;
    }
    case 213362:
    {
        returnValue = F("Mackenroder Str.");
        break;
    }
    case 213363:
    {
        returnValue = F("Mackenrodtstr.");
        break;
    }
    case 213364:
    {
        returnValue = F("Mackenrothweg");
        break;
    }
    case 213365:
    {
        returnValue = F("Mackenröder Stieg");
        break;
    }
    case 213366:
    {
        returnValue = F("Mackenröder Str.");
        break;
    }
    case 213367:
    {
        returnValue = F("Mackenröder Trail");
        break;
    }
    case 213368:
    {
        returnValue = F("Mackensenring");
        break;
    }
    case 213369:
    {
        returnValue = F("Mackensenstr.");
        break;
    }
    case 213370:
    {
        returnValue = F("Mackensenweg");
        break;
    }
    case 213371:
    {
        returnValue = F("Mackenser Str.");
        break;
    }
    case 213372:
    {
        returnValue = F("Mackenstedter Feld");
        break;
    }
    case 213373:
    {
        returnValue = F("Mackenstedter Str.");
        break;
    }
    case 213374:
    {
        returnValue = F("Mackenstein");
        break;
    }
    case 213375:
    {
        returnValue = F("Mackensteiner Str.");
        break;
    }
    case 213376:
    {
        returnValue = F("Mackental");
        break;
    }
    case 213377:
    {
        returnValue = F("Mackenzeller Str.");
        break;
    }
    case 213378:
    {
        returnValue = F("Mackeriege");
        break;
    }
    case 213379:
    {
        returnValue = F("Mackestr.");
        break;
    }
    case 213380:
    {
        returnValue = F("Macksgasse");
        break;
    }
    case 213381:
    {
        returnValue = F("Mackstr.");
        break;
    }
    case 213382:
    {
        returnValue = F("Mackstruth");
        break;
    }
    case 213383:
    {
        returnValue = F("Mackweg");
        break;
    }
    case 213384:
    {
        returnValue = F("Maconring");
        break;
    }
    case 213385:
    {
        returnValue = F("Mad");
        break;
    }
    case 213386:
    {
        returnValue = F("Madachstr.");
        break;
    }
    case 213387:
    {
        returnValue = F("Madackerweg");
        break;
    }
    case 213388:
    {
        returnValue = F("Madame-Blanc-Str.");
        break;
    }
    case 213389:
    {
        returnValue = F("Madame-Cherier-Str.");
        break;
    }
    case 213390:
    {
        returnValue = F("Madame-Curie-Str.");
        break;
    }
    case 213391:
    {
        returnValue = F("Madamenweg");
        break;
    }
    case 213392:
    {
        returnValue = F("Madauerstr.");
        break;
    }
    case 213393:
    {
        returnValue = F("Madausstr.");
        break;
    }
    case 213394:
    {
        returnValue = F("Madaustr.");
        break;
    }
    case 213395:
    {
        returnValue = F("Madbachstr.");
        break;
    }
    case 213396:
    {
        returnValue = F("Maddenberg");
        break;
    }
    case 213397:
    {
        returnValue = F("Maddo-Clüver-Str.");
        break;
    }
    case 213398:
    {
        returnValue = F("Madeburg");
        break;
    }
    case 213399:
    {
        returnValue = F("Madeburger Weg");
        break;
    }
    case 213400:
    {
        returnValue = F("Madegasse");
        break;
    }
    case 213401:
    {
        returnValue = F("Madeggerweg");
        break;
    }
    case 213402:
    {
        returnValue = F("Madel");
        break;
    }
    case 213403:
    {
        returnValue = F("Madelblick");
        break;
    }
    case 213404:
    {
        returnValue = F("Madeleine-Ruoff-Str.");
        break;
    }
    case 213405:
    {
        returnValue = F("Madeler Weg");
        break;
    }
    case 213406:
    {
        returnValue = F("Madelgasse");
        break;
    }
    case 213407:
    {
        returnValue = F("Madellstr.");
        break;
    }
    case 213408:
    {
        returnValue = F("Madelsederstr.");
        break;
    }
    case 213409:
    {
        returnValue = F("Madelstr.");
        break;
    }
    case 213410:
    {
        returnValue = F("Madelunger Str.");
        break;
    }
    case 213411:
    {
        returnValue = F("Madelwai");
        break;
    }
    case 213412:
    {
        returnValue = F("Mademannstr.");
        break;
    }
    case 213413:
    {
        returnValue = F("Madenbergweg");
        break;
    }
    case 213414:
    {
        returnValue = F("Madenburgblick");
        break;
    }
    case 213415:
    {
        returnValue = F("Madenburgstr.");
        break;
    }
    case 213416:
    {
        returnValue = F("Madenburgweg");
        break;
    }
    case 213417:
    {
        returnValue = F("Madener Str.");
        break;
    }
    case 213418:
    {
        returnValue = F("Madenfelderhofstr.");
        break;
    }
    case 213419:
    {
        returnValue = F("Madenreute");
        break;
    }
    case 213420:
    {
        returnValue = F("Madenstr.");
        break;
    }
    case 213421:
    {
        returnValue = F("Maderbräustr.");
        break;
    }
    case 213422:
    {
        returnValue = F("Madererstr.");
        break;
    }
    case 213423:
    {
        returnValue = F("Madergasse");
        break;
    }
    case 213424:
    {
        returnValue = F("Maderhalm");
        break;
    }
    case 213425:
    {
        returnValue = F("Maderhalmer Weg");
        break;
    }
    case 213426:
    {
        returnValue = F("Maderholzweg");
        break;
    }
    case 213427:
    {
        returnValue = F("Maderlechnerstr.");
        break;
    }
    case 213428:
    {
        returnValue = F("Maderstr.");
        break;
    }
    case 213429:
    {
        returnValue = F("Madertal");
        break;
    }
    case 213430:
    {
        returnValue = F("Maderweg");
        break;
    }
    case 213431:
    {
        returnValue = F("Madeweg");
        break;
    }
    case 213432:
    {
        returnValue = F("Madfelder Str.");
        break;
    }
    case 213433:
    {
        returnValue = F("Madisonallee");
        break;
    }
    case 213434:
    {
        returnValue = F("Madisonstr.");
        break;
    }
    case 213435:
    {
        returnValue = F("Madlenenweg");
        break;
    }
    case 213436:
    {
        returnValue = F("Madlenerstr.");
        break;
    }
    case 213437:
    {
        returnValue = F("Madlenerweg");
        break;
    }
    case 213438:
    {
        returnValue = F("Madlietweg");
        break;
    }
    case 213439:
    {
        returnValue = F("Madlower Chaussee");
        break;
    }
    case 213440:
    {
        returnValue = F("Madlower Hauptstr.");
        break;
    }
    case 213441:
    {
        returnValue = F("Madlower Schulstr.");
        break;
    }
    case 213442:
    {
        returnValue = F("Madlower Str.");
        break;
    }
    case 213443:
    {
        returnValue = F("Madlsteigweg");
        break;
    }
    case 213444:
    {
        returnValue = F("Madlstr.");
        break;
    }
    case 213445:
    {
        returnValue = F("Madlweg");
        break;
    }
    case 213446:
    {
        returnValue = F("Madona-Allee");
        break;
    }
    case 213447:
    {
        returnValue = F("Madonna");
        break;
    }
    case 213448:
    {
        returnValue = F("Madonnastr.");
        break;
    }
    case 213449:
    {
        returnValue = F("Madonnenbergweg");
        break;
    }
    case 213450:
    {
        returnValue = F("Madonnenhöhe");
        break;
    }
    case 213451:
    {
        returnValue = F("Madonnenweg");
        break;
    }
    case 213452:
    {
        returnValue = F("Madrider Allee");
        break;
    }
    case 213453:
    {
        returnValue = F("Madrider Ring");
        break;
    }
    case 213454:
    {
        returnValue = F("Madrider Str.");
        break;
    }
    case 213455:
    {
        returnValue = F("Madrider Weg");
        break;
    }
    case 213456:
    {
        returnValue = F("Madridstr.");
        break;
    }
    case 213457:
    {
        returnValue = F("Madronstr.");
        break;
    }
    case 213458:
    {
        returnValue = F("Mads-Clausen-Str.");
        break;
    }
    case 213459:
    {
        returnValue = F("Madsenweg");
        break;
    }
    case 213460:
    {
        returnValue = F("Madsow");
        break;
    }
    case 213461:
    {
        returnValue = F("Maduschkastr.");
        break;
    }
    case 213462:
    {
        returnValue = F("Maehderweg");
        break;
    }
    case 213463:
    {
        returnValue = F("Maelanne");
        break;
    }
    case 213464:
    {
        returnValue = F("Maelenweg");
        break;
    }
    case 213465:
    {
        returnValue = F("Maelostr.");
        break;
    }
    case 213466:
    {
        returnValue = F("Maenherstr.");
        break;
    }
    case 213467:
    {
        returnValue = F("Maerckerstr.");
        break;
    }
    case 213468:
    {
        returnValue = F("Maerkelweg");
        break;
    }
    case 213469:
    {
        returnValue = F("Maerkerstieg");
        break;
    }
    case 213470:
    {
        returnValue = F("Maerkerstr.");
        break;
    }
    case 213471:
    {
        returnValue = F("Maerzenbecherweg");
        break;
    }
    case 213472:
    {
        returnValue = F("Maerzensteg");
        break;
    }
    case 213473:
    {
        returnValue = F("Maerzensteig");
        break;
    }
    case 213474:
    {
        returnValue = F("Maestruper Brook");
        break;
    }
    case 213475:
    {
        returnValue = F("Maestruper Str.");
        break;
    }
    case 213476:
    {
        returnValue = F("Maetzelweg");
        break;
    }
    case 213477:
    {
        returnValue = F("Mafellstr.");
        break;
    }
    case 213478:
    {
        returnValue = F("Maffeihof");
        break;
    }
    case 213479:
    {
        returnValue = F("Maffeiplatz");
        break;
    }
    case 213480:
    {
        returnValue = F("Maffeistr.");
        break;
    }
    case 213481:
    {
        returnValue = F("Maffeiweg");
        break;
    }
    case 213482:
    {
        returnValue = F("Mafiastr.");
        break;
    }
    case 213483:
    {
        returnValue = F("Mafridstr.");
        break;
    }
    case 213484:
    {
        returnValue = F("Magalettigasse");
        break;
    }
    case 213485:
    {
        returnValue = F("Maganbertstr.");
        break;
    }
    case 213486:
    {
        returnValue = F("Maganusweg");
        break;
    }
    case 213487:
    {
        returnValue = F("Magarethagasse");
        break;
    }
    case 213488:
    {
        returnValue = F("Magarethe-Cohn-Str.");
        break;
    }
    case 213489:
    {
        returnValue = F("Magazingasse");
        break;
    }
    case 213490:
    {
        returnValue = F("Magazinplatz");
        break;
    }
    case 213491:
    {
        returnValue = F("Magazinstr.");
        break;
    }
    case 213492:
    {
        returnValue = F("Magda-Heyken-Str.");
        break;
    }
    case 213493:
    {
        returnValue = F("Magda-Menn-Str.");
        break;
    }
    case 213494:
    {
        returnValue = F("Magda-Roos-Platz");
        break;
    }
    case 213495:
    {
        returnValue = F("Magda-Spiegel-Weg");
        break;
    }
    case 213496:
    {
        returnValue = F("Magdalaer Str.");
        break;
    }
    case 213497:
    {
        returnValue = F("Magdalaer Weg");
        break;
    }
    case 213498:
    {
        returnValue = F("Magdalena-Bräu-Weg");
        break;
    }
    case 213499:
    {
        returnValue = F("Magdalena-Daemen-Str.");
        break;
    }
    case 213500:
    {
        returnValue = F("Magdalena-Dietrich-Str.");
        break;
    }
    case 213501:
    {
        returnValue = F("Magdalena-Ehlers-Str.");
        break;
    }
    case 213502:
    {
        returnValue = F("Magdalena-Gerber-Str.");
        break;
    }
    case 213503:
    {
        returnValue = F("Magdalena-Glötter-Weg");
        break;
    }
    case 213504:
    {
        returnValue = F("Magdalena-Herrle-Str.");
        break;
    }
    case 213505:
    {
        returnValue = F("Magdalena-Heymaier-Str.");
        break;
    }
    case 213506:
    {
        returnValue = F("Magdalena-Hirsching-Weg");
        break;
    }
    case 213507:
    {
        returnValue = F("Magdalena-Schlegel-Str.");
        break;
    }
    case 213508:
    {
        returnValue = F("Magdalena-Schuster-Weg");
        break;
    }
    case 213509:
    {
        returnValue = F("Magdalena-Schwarz-Str.");
        break;
    }
    case 213510:
    {
        returnValue = F("Magdalena-Wilckens-Str.");
        break;
    }
    case 213511:
    {
        returnValue = F("Magdalena-Wingerter-Str.");
        break;
    }
    case 213512:
    {
        returnValue = F("Magdalenastr.");
        break;
    }
    case 213513:
    {
        returnValue = F("Magdalenaweg");
        break;
    }
    case 213514:
    {
        returnValue = F("Magdalene-Fervers-Str.");
        break;
    }
    case 213515:
    {
        returnValue = F("Magdalene-Melchers-Weg");
        break;
    }
    case 213516:
    {
        returnValue = F("Magdalene-Schoch-Str.");
        break;
    }
    case 213517:
    {
        returnValue = F("Magdalene-Welsch-Str.");
        break;
    }
    case 213518:
    {
        returnValue = F("Magdalenen Str.");
        break;
    }
    case 213519:
    {
        returnValue = F("Magdalenenallee");
        break;
    }
    case 213520:
    {
        returnValue = F("Magdalenenbergstr.");
        break;
    }
    case 213521:
    {
        returnValue = F("Magdalenengarten");
        break;
    }
    case 213522:
    {
        returnValue = F("Magdalenengasse");
        break;
    }
    case 213523:
    {
        returnValue = F("Magdalenenhäuser Weg");
        break;
    }
    case 213524:
    {
        returnValue = F("Magdalenenlust");
        break;
    }
    case 213525:
    {
        returnValue = F("Magdalenenluster Weg");
        break;
    }
    case 213526:
    {
        returnValue = F("Magdalenenpark");
        break;
    }
    case 213527:
    {
        returnValue = F("Magdalenenplatz");
        break;
    }
    case 213528:
    {
        returnValue = F("Magdalenenruh");
        break;
    }
    case 213529:
    {
        returnValue = F("Magdalenenstr.");
        break;
    }
    case 213530:
    {
        returnValue = F("Magdalenentalstr.");
        break;
    }
    case 213531:
    {
        returnValue = F("Magdalenenweg");
        break;
    }
    case 213532:
    {
        returnValue = F("Magdalénienstr.");
        break;
    }
    case 213533:
    {
        returnValue = F("Magdeborner Str.");
        break;
    }
    case 213534:
    {
        returnValue = F("Magdeborner Weg");
        break;
    }
    case 213535:
    {
        returnValue = F("Magdeburg-Leipziger-Chaussee");
        break;
    }
    case 213536:
    {
        returnValue = F("Magdeburg-Leipziger-Str.");
        break;
    }
    case 213537:
    {
        returnValue = F("Magdeburger Allee");
        break;
    }
    case 213538:
    {
        returnValue = F("Magdeburger Berg");
        break;
    }
    case 213539:
    {
        returnValue = F("Magdeburger Brücke");
        break;
    }
    case 213540:
    {
        returnValue = F("Magdeburger Chaussee");
        break;
    }
    case 213541:
    {
        returnValue = F("Magdeburger Gasse");
        break;
    }
    case 213542:
    {
        returnValue = F("Magdeburger Kamp");
        break;
    }
    case 213543:
    {
        returnValue = F("Magdeburger Knie");
        break;
    }
    case 213544:
    {
        returnValue = F("Magdeburger Landstr.");
        break;
    }
    case 213545:
    {
        returnValue = F("Magdeburger Promenade");
        break;
    }
    case 213546:
    {
        returnValue = F("Magdeburger Ring");
        break;
    }
    case 213547:
    {
        returnValue = F("Magdeburger Siedlung");
        break;
    }
    case 213548:
    {
        returnValue = F("Magdeburger Stadtweg");
        break;
    }
    case 213549:
    {
        returnValue = F("Magdeburger Str.");
        break;
    }
    case 213550:
    {
        returnValue = F("Magdeburger Tor");
        break;
    }
    case 213551:
    {
        returnValue = F("Magdeburger Tor Hof");
        break;
    }
    case 213552:
    {
        returnValue = F("Magdeburger Weg");
        break;
    }
    case 213553:
    {
        returnValue = F("Magdeburgring");
        break;
    }
    case 213554:
    {
        returnValue = F("Magdeburgstr.");
        break;
    }
    case 213555:
    {
        returnValue = F("Magdeburgweg");
        break;
    }
    case 213556:
    {
        returnValue = F("Magdelstieg");
        break;
    }
    case 213557:
    {
        returnValue = F("Magdgrabweg");
        break;
    }
    case 213558:
    {
        returnValue = F("Magdheide");
        break;
    }
    case 213559:
    {
        returnValue = F("Magdloser Str.");
        break;
    }
    case 213560:
    {
        returnValue = F("Magdloser Weg");
        break;
    }
    case 213561:
    {
        returnValue = F("Magdruh");
        break;
    }
    case 213562:
    {
        returnValue = F("Magdsteeg");
        break;
    }
    case 213563:
    {
        returnValue = F("Magellan-Allee");
        break;
    }
    case 213564:
    {
        returnValue = F("Magellanstr.");
        break;
    }
    case 213565:
    {
        returnValue = F("Magellanweg");
        break;
    }
    case 213566:
    {
        returnValue = F("Magelsen");
        break;
    }
    case 213567:
    {
        returnValue = F("Magelspfad");
        break;
    }
    case 213568:
    {
        returnValue = F("Magenaustr.");
        break;
    }
    case 213569:
    {
        returnValue = F("Magenbucher Str.");
        break;
    }
    case 213570:
    {
        returnValue = F("Magengasse");
        break;
    }
    case 213571:
    {
        returnValue = F("Magengäßle");
        break;
    }
    case 213572:
    {
        returnValue = F("Magenheimer Str.");
        break;
    }
    case 213573:
    {
        returnValue = F("Magerauer Str.");
        break;
    }
    case 213574:
    {
        returnValue = F("Magerbacher Str.");
        break;
    }
    case 213575:
    {
        returnValue = F("Magere Brake");
        break;
    }
    case 213576:
    {
        returnValue = F("Magergasse");
        break;
    }
    case 213577:
    {
        returnValue = F("Mageritenweg");
        break;
    }
    case 213578:
    {
        returnValue = F("Magermannstr.");
        break;
    }
    case 213579:
    {
        returnValue = F("Magersdorf");
        break;
    }
    case 213580:
    {
        returnValue = F("Magerviel");
        break;
    }
    case 213581:
    {
        returnValue = F("Maggesgasse");
        break;
    }
    case 213582:
    {
        returnValue = F("Magirus-Deutz-Str.");
        break;
    }
    case 213583:
    {
        returnValue = F("Magirushof");
        break;
    }
    case 213584:
    {
        returnValue = F("Magirusstr.");
        break;
    }
    case 213585:
    {
        returnValue = F("Magister Laukhard Str.");
        break;
    }
    case 213586:
    {
        returnValue = F("Magister-Chuno-Str.");
        break;
    }
    case 213587:
    {
        returnValue = F("Magister-Dorn-Str.");
        break;
    }
    case 213588:
    {
        returnValue = F("Magister-Faust-Gasse");
        break;
    }
    case 213589:
    {
        returnValue = F("Magister-Goldner-Platz");
        break;
    }
    case 213590:
    {
        returnValue = F("Magister-Hering-Str.");
        break;
    }
    case 213591:
    {
        returnValue = F("Magister-Herr-Str.");
        break;
    }
    case 213592:
    {
        returnValue = F("Magister-Hoffius-Str.");
        break;
    }
    case 213593:
    {
        returnValue = F("Magister-Koller-Str.");
        break;
    }
    case 213594:
    {
        returnValue = F("Magister-Wigbold-Str.");
        break;
    }
    case 213595:
    {
        returnValue = F("Magisterberg");
        break;
    }
    case 213596:
    {
        returnValue = F("Magistergang");
        break;
    }
    case 213597:
    {
        returnValue = F("Magisters Wiese");
        break;
    }
    case 213598:
    {
        returnValue = F("Magisterstr.");
        break;
    }
    case 213599:
    {
        returnValue = F("Magistralbrücke");
        break;
    }
    case 213600:
    {
        returnValue = F("Magistrale");
        break;
    }
    case 213601:
    {
        returnValue = F("Magistratsstr.");
        break;
    }
    case 213602:
    {
        returnValue = F("Magistratstr.");
        break;
    }
    case 213603:
    {
        returnValue = F("Magistratsweg");
        break;
    }
    case 213604:
    {
        returnValue = F("Maglianastr.");
        break;
    }
    case 213605:
    {
        returnValue = F("Magmannstr.");
        break;
    }
    case 213606:
    {
        returnValue = F("Magmastr.");
        break;
    }
    case 213607:
    {
        returnValue = F("Magnacstr.");
        break;
    }
    case 213608:
    {
        returnValue = F("Magnerichstr.");
        break;
    }
    case 213609:
    {
        returnValue = F("Magnetsried");
        break;
    }
    case 213610:
    {
        returnValue = F("Magnikirchplatz");
        break;
    }
    case 213611:
    {
        returnValue = F("Magnitorwall");
        break;
    }
    case 213612:
    {
        returnValue = F("Magnolia Street");
        break;
    }
    case 213613:
    {
        returnValue = F("Magnoliengarten");
        break;
    }
    case 213614:
    {
        returnValue = F("Magnolienpfad");
        break;
    }
    case 213615:
    {
        returnValue = F("Magnolienplatz");
        break;
    }
    case 213616:
    {
        returnValue = F("Magnolienring");
        break;
    }
    case 213617:
    {
        returnValue = F("Magnolienstr.");
        break;
    }
    case 213618:
    {
        returnValue = F("Magnolienweg");
        break;
    }
    case 213619:
    {
        returnValue = F("Magnus-Hackl-Str.");
        break;
    }
    case 213620:
    {
        returnValue = F("Magnus-Hartmann-Str.");
        break;
    }
    case 213621:
    {
        returnValue = F("Magnus-Hirschfeld-Str.");
        break;
    }
    case 213622:
    {
        returnValue = F("Magnus-Niedermair-Str.");
        break;
    }
    case 213623:
    {
        returnValue = F("Magnus-Poser-Str.");
        break;
    }
    case 213624:
    {
        returnValue = F("Magnus-Remy-Str.");
        break;
    }
    case 213625:
    {
        returnValue = F("Magnus-Scharpf-Str.");
        break;
    }
    case 213626:
    {
        returnValue = F("Magnus-Voss-Str.");
        break;
    }
    case 213627:
    {
        returnValue = F("Magnus-Voß-Str.");
        break;
    }
    case 213628:
    {
        returnValue = F("Magnus-Weidemann-Weg");
        break;
    }
    case 213629:
    {
        returnValue = F("Magnus-Zeller-Platz");
        break;
    }
    case 213630:
    {
        returnValue = F("Magnus-Zeller-Ring");
        break;
    }
    case 213631:
    {
        returnValue = F("Magnusgasse");
        break;
    }
    case 213632:
    {
        returnValue = F("Magnushaldeweg");
        break;
    }
    case 213633:
    {
        returnValue = F("Magnushof");
        break;
    }
    case 213634:
    {
        returnValue = F("Magnusplatz");
        break;
    }
    case 213635:
    {
        returnValue = F("Magnussenstr.");
        break;
    }
    case 213636:
    {
        returnValue = F("Magnusstr.");
        break;
    }
    case 213637:
    {
        returnValue = F("Magnusweg");
        break;
    }
    case 213638:
    {
        returnValue = F("Magnéweg");
        break;
    }
    case 213639:
    {
        returnValue = F("Magolsheimer Str.");
        break;
    }
    case 213640:
    {
        returnValue = F("Magreglioweg");
        break;
    }
    case 213641:
    {
        returnValue = F("Magreta-Brandt-Str.");
        break;
    }
    case 213642:
    {
        returnValue = F("Magstadter Str.");
        break;
    }
    case 213643:
    {
        returnValue = F("Magstädter Weg");
        break;
    }
    case 213644:
    {
        returnValue = F("Magzinstr.");
        break;
    }
    case 213645:
    {
        returnValue = F("Mahagonipfad");
        break;
    }
    case 213646:
    {
        returnValue = F("Mahalia-Jackson-Str.");
        break;
    }
    case 213647:
    {
        returnValue = F("Mahatma-Gandhi-Pfad");
        break;
    }
    case 213648:
    {
        returnValue = F("Mahatma-Gandhi-Str.");
        break;
    }
    case 213649:
    {
        returnValue = F("Mahatma-Ghandi-Weg");
        break;
    }
    case 213650:
    {
        returnValue = F("Mahd");
        break;
    }
    case 213651:
    {
        returnValue = F("Mahdachstr.");
        break;
    }
    case 213652:
    {
        returnValue = F("Mahdackerweg");
        break;
    }
    case 213653:
    {
        returnValue = F("Mahdauweg");
        break;
    }
    case 213654:
    {
        returnValue = F("Mahde");
        break;
    }
    case 213655:
    {
        returnValue = F("Mahdengasse");
        break;
    }
    case 213656:
    {
        returnValue = F("Mahdenholzweg");
        break;
    }
    case 213657:
    {
        returnValue = F("Mahdenstr.");
        break;
    }
    case 213658:
    {
        returnValue = F("Mahdentalstr.");
        break;
    }
    case 213659:
    {
        returnValue = F("Mahdentalweg");
        break;
    }
    case 213660:
    {
        returnValue = F("Mahdenweg");
        break;
    }
    case 213661:
    {
        returnValue = F("Mahdenwiesenweg");
        break;
    }
    case 213662:
    {
        returnValue = F("Mahdenäcker");
        break;
    }
    case 213663:
    {
        returnValue = F("Mahderweg");
        break;
    }
    case 213664:
    {
        returnValue = F("Mahderweg Sackweg");
        break;
    }
    case 213665:
    {
        returnValue = F("Mahdfeldstr.");
        break;
    }
    case 213666:
    {
        returnValue = F("Mahdgasse");
        break;
    }
    case 213667:
    {
        returnValue = F("Mahdhalde");
        break;
    }
    case 213668:
    {
        returnValue = F("Mahdholz");
        break;
    }
    case 213669:
    {
        returnValue = F("Mahdsbrunnenweg");
        break;
    }
    case 213670:
    {
        returnValue = F("Mahdstr.");
        break;
    }
    case 213671:
    {
        returnValue = F("Mahdweg");
        break;
    }
    case 213672:
    {
        returnValue = F("Mahdwiesen");
        break;
    }
    case 213673:
    {
        returnValue = F("Mahdwiesenstr.");
        break;
    }
    case 213674:
    {
        returnValue = F("Mahdwiesenweg");
        break;
    }
    case 213675:
    {
        returnValue = F("Mahdäcker");
        break;
    }
    case 213676:
    {
        returnValue = F("Mahirstr.");
        break;
    }
    case 213677:
    {
        returnValue = F("Mahkornstr.");
        break;
    }
    case 213678:
    {
        returnValue = F("Mahlastr.");
        break;
    }
    case 213679:
    {
        returnValue = F("Mahlaweg");
        break;
    }
    case 213680:
    {
        returnValue = F("Mahlberger Str.");
        break;
    }
    case 213681:
    {
        returnValue = F("Mahlbergstr.");
        break;
    }
    case 213682:
    {
        returnValue = F("Mahlbergweg");
        break;
    }
    case 213683:
    {
        returnValue = F("Mahle");
        break;
    }
    case 213684:
    {
        returnValue = F("Mahlegasse");
        break;
    }
    case 213685:
    {
        returnValue = F("Mahlen");
        break;
    }
    case 213686:
    {
        returnValue = F("Mahlenburger Weg");
        break;
    }
    case 213687:
    {
        returnValue = F("Mahlendorf");
        break;
    }
    case 213688:
    {
        returnValue = F("Mahlendorfer Str.");
        break;
    }
    case 213689:
    {
        returnValue = F("Mahlendorfer Weg");
        break;
    }
    case 213690:
    {
        returnValue = F("Mahlengrund");
        break;
    }
    case 213691:
    {
        returnValue = F("Mahlenstorf");
        break;
    }
    case 213692:
    {
        returnValue = F("Mahlenstorfer Weg");
        break;
    }
    case 213693:
    {
        returnValue = F("Mahlenweg");
        break;
    }
    case 213694:
    {
        returnValue = F("Mahlenziener Dorfstr.");
        break;
    }
    case 213695:
    {
        returnValue = F("Mahlenziener Str.");
        break;
    }
    case 213696:
    {
        returnValue = F("Mahler Marschweg");
        break;
    }
    case 213697:
    {
        returnValue = F("Mahler Str.");
        break;
    }
    case 213698:
    {
        returnValue = F("Mahlerfeldstr.");
        break;
    }
    case 213699:
    {
        returnValue = F("Mahlergasse");
        break;
    }
    case 213700:
    {
        returnValue = F("Mahlerstr.");
        break;
    }
    case 213701:
    {
        returnValue = F("Mahlerter Str.");
        break;
    }
    case 213702:
    {
        returnValue = F("Mahlertser Str.");
        break;
    }
    case 213703:
    {
        returnValue = F("Mahlertsmühle");
        break;
    }
    case 213704:
    {
        returnValue = F("Mahlerweg");
        break;
    }
    case 213705:
    {
        returnValue = F("Mahlerweinstr.");
        break;
    }
    case 213706:
    {
        returnValue = F("Mahlestr.");
        break;
    }
    case 213707:
    {
        returnValue = F("Mahlgang");
        break;
    }
    case 213708:
    {
        returnValue = F("Mahlgasse");
        break;
    }
    case 213709:
    {
        returnValue = F("Mahlgassing");
        break;
    }
    case 213710:
    {
        returnValue = F("Mahlgassinger Weg");
        break;
    }
    case 213711:
    {
        returnValue = F("Mahlheide");
        break;
    }
    case 213712:
    {
        returnValue = F("Mahlholzweg");
        break;
    }
    case 213713:
    {
        returnValue = F("Mahliser Str.");
        break;
    }
    case 213714:
    {
        returnValue = F("Mahliser Weg");
        break;
    }
    case 213715:
    {
        returnValue = F("Mahlitz");
        break;
    }
    case 213716:
    {
        returnValue = F("Mahlitzer (Kamernscher) Weg");
        break;
    }
    case 213717:
    {
        returnValue = F("Mahlitzer Siedlung");
        break;
    }
    case 213718:
    {
        returnValue = F("Mahlitzer Weg");
        break;
    }
    case 213719:
    {
        returnValue = F("Mahlitzsch");
        break;
    }
    case 213720:
    {
        returnValue = F("Mahlitzscher Str.");
        break;
    }
    case 213721:
    {
        returnValue = F("Mahlitzscher Weg");
        break;
    }
    case 213722:
    {
        returnValue = F("Mahllindenweg");
        break;
    }
    case 213723:
    {
        returnValue = F("Mahlmannstr.");
        break;
    }
    case 213724:
    {
        returnValue = F("Mahlmeisterstr.");
        break;
    }
    case 213725:
    {
        returnValue = F("Mahlmühlenweg");
        break;
    }
    case 213726:
    {
        returnValue = F("Mahlocksweg");
        break;
    }
    case 213727:
    {
        returnValue = F("Mahlower Allee");
        break;
    }
    case 213728:
    {
        returnValue = F("Mahlower Dorfstr.");
        break;
    }
    case 213729:
    {
        returnValue = F("Mahlower Str.");
        break;
    }
    case 213730:
    {
        returnValue = F("Mahlower Weg");
        break;
    }
    case 213731:
    {
        returnValue = F("Mahlpfuhler Dorfstr.");
        break;
    }
    case 213732:
    {
        returnValue = F("Mahlpfuhler Weg");
        break;
    }
    case 213733:
    {
        returnValue = F("Mahlrain");
        break;
    }
    case 213734:
    {
        returnValue = F("Mahlrockweg");
        break;
    }
    case 213735:
    {
        returnValue = F("Mahlscheid");
        break;
    }
    case 213736:
    {
        returnValue = F("Mahlscheidt");
        break;
    }
    case 213737:
    {
        returnValue = F("Mahlsdorf");
        break;
    }
    case 213738:
    {
        returnValue = F("Mahlsdorfer Allee");
        break;
    }
    case 213739:
    {
        returnValue = F("Mahlsdorfer Gärten");
        break;
    }
    case 213740:
    {
        returnValue = F("Mahlsdorfer Str.");
        break;
    }
    case 213741:
    {
        returnValue = F("Mahlsdorfer Weg");
        break;
    }
    case 213742:
    {
        returnValue = F("Mahlsdorfweg");
        break;
    }
    case 213743:
    {
        returnValue = F("Mahlstatt");
        break;
    }
    case 213744:
    {
        returnValue = F("Mahlstedter Ring");
        break;
    }
    case 213745:
    {
        returnValue = F("Mahlstedtstr.");
        break;
    }
    case 213746:
    {
        returnValue = F("Mahlsteg");
        break;
    }
    case 213747:
    {
        returnValue = F("Mahlsteinweg");
        break;
    }
    case 213748:
    {
        returnValue = F("Mahlstetter Str.");
        break;
    }
    case 213749:
    {
        returnValue = F("Mahlstetter Weg");
        break;
    }
    case 213750:
    {
        returnValue = F("Mahlstr.");
        break;
    }
    case 213751:
    {
        returnValue = F("Mahlumer Str.");
        break;
    }
    case 213752:
    {
        returnValue = F("Mahlweg");
        break;
    }
    case 213753:
    {
        returnValue = F("Mahlzower Str.");
        break;
    }
    case 213754:
    {
        returnValue = F("Mahläckerstr.");
        break;
    }
    case 213755:
    {
        returnValue = F("Mahmilchgasse");
        break;
    }
    case 213756:
    {
        returnValue = F("Mahnberg");
        break;
    }
    case 213757:
    {
        returnValue = F("Mahnbrück");
        break;
    }
    case 213758:
    {
        returnValue = F("Mahnbrücker Weg");
        break;
    }
    case 213759:
    {
        returnValue = F("Mahnburger Weg");
        break;
    }
    case 213760:
    {
        returnValue = F("Mahndorf-Dorfstr.");
        break;
    }
    case 213761:
    {
        returnValue = F("Mahndorfer Bahnhof");
        break;
    }
    case 213762:
    {
        returnValue = F("Mahndorfer Deich");
        break;
    }
    case 213763:
    {
        returnValue = F("Mahndorfer Heerstr.");
        break;
    }
    case 213764:
    {
        returnValue = F("Mahndorfer Landstr.");
        break;
    }
    case 213765:
    {
        returnValue = F("Mahndorfer Str.");
        break;
    }
    case 213766:
    {
        returnValue = F("Mahndorfer Weg");
        break;
    }
    case 213767:
    {
        returnValue = F("Mahneberg");
        break;
    }
    case 213768:
    {
        returnValue = F("Mahneckesche Twiete");
        break;
    }
    case 213769:
    {
        returnValue = F("Mahnenhude Weg");
        break;
    }
    case 213770:
    {
        returnValue = F("Mahner Berg");
        break;
    }
    case 213771:
    {
        returnValue = F("Mahnerfeldweg");
        break;
    }
    case 213772:
    {
        returnValue = F("Mahnerstr.");
        break;
    }
    case 213773:
    {
        returnValue = F("Mahnert");
        break;
    }
    case 213774:
    {
        returnValue = F("Mahnertmühle");
        break;
    }
    case 213775:
    {
        returnValue = F("Mahnhof");
        break;
    }
    case 213776:
    {
        returnValue = F("Mahnhorst Ausbau");
        break;
    }
    case 213777:
    {
        returnValue = F("Mahnland");
        break;
    }
    case 213778:
    {
        returnValue = F("Mahnmal");
        break;
    }
    case 213779:
    {
        returnValue = F("Mahnstr.");
        break;
    }
    case 213780:
    {
        returnValue = F("Mahntestr.");
        break;
    }
    case 213781:
    {
        returnValue = F("Mahntweg");
        break;
    }
    case 213782:
    {
        returnValue = F("Mahnweg");
        break;
    }
    case 213783:
    {
        returnValue = F("Mahonienweg");
        break;
    }
    case 213784:
    {
        returnValue = F("Mahrenholtzstr.");
        break;
    }
    case 213785:
    {
        returnValue = F("Mahrenholz");
        break;
    }
    case 213786:
    {
        returnValue = F("Mahrenholzer Weg");
        break;
    }
    case 213787:
    {
        returnValue = F("Mahrerstr.");
        break;
    }
    case 213788:
    {
        returnValue = F("Mahriser Str.");
        break;
    }
    case 213789:
    {
        returnValue = F("Mahrstr.");
        break;
    }
    case 213790:
    {
        returnValue = F("Mahrweg");
        break;
    }
    case 213791:
    {
        returnValue = F("Mahräckerstr.");
        break;
    }
    case 213792:
    {
        returnValue = F("Mai Jaaßje");
        break;
    }
    case 213793:
    {
        returnValue = F("Mai Schneise");
        break;
    }
    case 213794:
    {
        returnValue = F("Mai-Kuhle");
        break;
    }
    case 213795:
    {
        returnValue = F("Maiacher Str.");
        break;
    }
    case 213796:
    {
        returnValue = F("Maiacker");
        break;
    }
    case 213797:
    {
        returnValue = F("Maiackerring");
        break;
    }
    case 213798:
    {
        returnValue = F("Maiackerweg");
        break;
    }
    case 213799:
    {
        returnValue = F("Maibacher Berg");
        break;
    }
    case 213800:
    {
        returnValue = F("Maibacher Kirchweg");
        break;
    }
    case 213801:
    {
        returnValue = F("Maibacher Pfädchen");
        break;
    }
    case 213802:
    {
        returnValue = F("Maibacher Str.");
        break;
    }
    case 213803:
    {
        returnValue = F("Maibacher Weg");
        break;
    }
    case 213804:
    {
        returnValue = F("Maibachhof");
        break;
    }
    case 213805:
    {
        returnValue = F("Maibachstr.");
        break;
    }
    case 213806:
    {
        returnValue = F("Maibaum Schneise");
        break;
    }
    case 213807:
    {
        returnValue = F("Maibaumpark");
        break;
    }
    case 213808:
    {
        returnValue = F("Maibaumplatz");
        break;
    }
    case 213809:
    {
        returnValue = F("Maibaums Kamp");
        break;
    }
    case 213810:
    {
        returnValue = F("Maibaumstr.");
        break;
    }
    case 213811:
    {
        returnValue = F("Maibaumweg");
        break;
    }
    case 213812:
    {
        returnValue = F("Maibeerweg");
        break;
    }
    case 213813:
    {
        returnValue = F("Maiberg");
        break;
    }
    case 213814:
    {
        returnValue = F("Maiberger Allee");
        break;
    }
    case 213815:
    {
        returnValue = F("Maiberger Str.");
        break;
    }
    case 213816:
    {
        returnValue = F("Maibergring");
        break;
    }
    case 213817:
    {
        returnValue = F("Maibergstr.");
        break;
    }
    case 213818:
    {
        returnValue = F("Maibergweg");
        break;
    }
    case 213819:
    {
        returnValue = F("Maiblumenberg");
        break;
    }
    case 213820:
    {
        returnValue = F("Maiblumengehege");
        break;
    }
    case 213821:
    {
        returnValue = F("Maiblumenhof");
        break;
    }
    case 213822:
    {
        returnValue = F("Maiblumenstr.");
        break;
    }
    case 213823:
    {
        returnValue = F("Maiblumenweg");
        break;
    }
    case 213824:
    {
        returnValue = F("Maiboekenplatz");
        break;
    }
    case 213825:
    {
        returnValue = F("Maibruchweg");
        break;
    }
    case 213826:
    {
        returnValue = F("Maibrunn");
        break;
    }
    case 213827:
    {
        returnValue = F("Maibrunnenstr.");
        break;
    }
    case 213828:
    {
        returnValue = F("Maibrückenweg");
        break;
    }
    case 213829:
    {
        returnValue = F("Maibuchenweg");
        break;
    }
    case 213830:
    {
        returnValue = F("Maibuckelweg");
        break;
    }
    case 213831:
    {
        returnValue = F("Maiburger Str.");
        break;
    }
    case 213832:
    {
        returnValue = F("Maiburgstr.");
        break;
    }
    case 213833:
    {
        returnValue = F("Maibuscher Str.");
        break;
    }
    case 213834:
    {
        returnValue = F("Maibühl");
        break;
    }
    case 213835:
    {
        returnValue = F("Maibühlblick");
        break;
    }
    case 213836:
    {
        returnValue = F("Maibüsch");
        break;
    }
    case 213837:
    {
        returnValue = F("Maicha");
        break;
    }
    case 213838:
    {
        returnValue = F("Maicher Str.");
        break;
    }
    case 213839:
    {
        returnValue = F("Maichinger Str.");
        break;
    }
    case 213840:
    {
        returnValue = F("Maicklerstr.");
        break;
    }
    case 213841:
    {
        returnValue = F("Maiclerstr.");
        break;
    }
    case 213842:
    {
        returnValue = F("Maicostr.");
        break;
    }
    case 213843:
    {
        returnValue = F("Maidamm");
        break;
    }
    case 213844:
    {
        returnValue = F("Maidbronner Str.");
        break;
    }
    case 213845:
    {
        returnValue = F("Maidbronner Weg");
        break;
    }
    case 213846:
    {
        returnValue = F("Maidbrunnstr.");
        break;
    }
    case 213847:
    {
        returnValue = F("Maidelsmühle");
        break;
    }
    case 213848:
    {
        returnValue = F("Maidenbergstr.");
        break;
    }
    case 213849:
    {
        returnValue = F("Maidenheadstr.");
        break;
    }
    case 213850:
    {
        returnValue = F("Maidenweg");
        break;
    }
    case 213851:
    {
        returnValue = F("Maidornstr.");
        break;
    }
    case 213852:
    {
        returnValue = F("Maidwiesenstr.");
        break;
    }
    case 213853:
    {
        returnValue = F("Maienbachweg");
        break;
    }
    case 213854:
    {
        returnValue = F("Maienbaß");
        break;
    }
    case 213855:
    {
        returnValue = F("Maienbeeck");
        break;
    }
    case 213856:
    {
        returnValue = F("Maienbeeke");
        break;
    }
    case 213857:
    {
        returnValue = F("Maienberg");
        break;
    }
    case 213858:
    {
        returnValue = F("Maienbergkopfweg");
        break;
    }
    case 213859:
    {
        returnValue = F("Maienbergstr.");
        break;
    }
    case 213860:
    {
        returnValue = F("Maienbergweg");
        break;
    }
    case 213861:
    {
        returnValue = F("Maienbreite");
        break;
    }
    case 213862:
    {
        returnValue = F("Maienbrook");
        break;
    }
    case 213863:
    {
        returnValue = F("Maienbrunnen");
        break;
    }
    case 213864:
    {
        returnValue = F("Maienbrunnenstr.");
        break;
    }
    case 213865:
    {
        returnValue = F("Maienburgstr.");
        break;
    }
    case 213866:
    {
        returnValue = F("Maienbühl");
        break;
    }
    case 213867:
    {
        returnValue = F("Maienbühlstr.");
        break;
    }
    case 213868:
    {
        returnValue = F("Maienbühlsträßchen");
        break;
    }
    case 213869:
    {
        returnValue = F("Maienbühlweg");
        break;
    }
    case 213870:
    {
        returnValue = F("Maienfeld");
        break;
    }
    case 213871:
    {
        returnValue = F("Maienfeld-Schneise");
        break;
    }
    case 213872:
    {
        returnValue = F("Maienfeldstr.");
        break;
    }
    case 213873:
    {
        returnValue = F("Maienfelser Weg");
        break;
    }
    case 213874:
    {
        returnValue = F("Maiengasse");
        break;
    }
    case 213875:
    {
        returnValue = F("Maiengraben");
        break;
    }
    case 213876:
    {
        returnValue = F("Maiengrundstr.");
        break;
    }
    case 213877:
    {
        returnValue = F("Maiengässle");
        break;
    }
    case 213878:
    {
        returnValue = F("Maienhaldeweg");
        break;
    }
    case 213879:
    {
        returnValue = F("Maienhaupt");
        break;
    }
    case 213880:
    {
        returnValue = F("Maienhaustr.");
        break;
    }
    case 213881:
    {
        returnValue = F("Maienhof");
        break;
    }
    case 213882:
    {
        returnValue = F("Maienhöhe");
        break;
    }
    case 213883:
    {
        returnValue = F("Maienhölzle");
        break;
    }
    case 213884:
    {
        returnValue = F("Maienluft");
        break;
    }
    case 213885:
    {
        returnValue = F("Maienluftstr.");
        break;
    }
    case 213886:
    {
        returnValue = F("Maienpfuhl");
        break;
    }
    case 213887:
    {
        returnValue = F("Maienplatz");
        break;
    }
    case 213888:
    {
        returnValue = F("Maienried");
        break;
    }
    case 213889:
    {
        returnValue = F("Maienstein");
        break;
    }
    case 213890:
    {
        returnValue = F("Maienstr.");
        break;
    }
    case 213891:
    {
        returnValue = F("Maientagsrondell");
        break;
    }
    case 213892:
    {
        returnValue = F("Maiental");
        break;
    }
    case 213893:
    {
        returnValue = F("Maienthalerhof");
        break;
    }
    case 213894:
    {
        returnValue = F("Maienwaldstr.");
        break;
    }
    case 213895:
    {
        returnValue = F("Maienwaldweg");
        break;
    }
    case 213896:
    {
        returnValue = F("Maienwalterstr.");
        break;
    }
    case 213897:
    {
        returnValue = F("Maienweg");
        break;
    }
    case 213898:
    {
        returnValue = F("Maienweingärten");
        break;
    }
    case 213899:
    {
        returnValue = F("Maienwiesen");
        break;
    }
    case 213900:
    {
        returnValue = F("Maienwiesle");
        break;
    }
    case 213901:
    {
        returnValue = F("Maier Str.");
        break;
    }
    case 213902:
    {
        returnValue = F("Maier-Leibnitz-Str.");
        break;
    }
    case 213903:
    {
        returnValue = F("Maier-Pfau-Weg");
        break;
    }
    case 213904:
    {
        returnValue = F("Maieralmweg");
        break;
    }
    case 213905:
    {
        returnValue = F("Maieranger");
        break;
    }
    case 213906:
    {
        returnValue = F("Maierangerweg");
        break;
    }
    case 213907:
    {
        returnValue = F("Maierbachstr.");
        break;
    }
    case 213908:
    {
        returnValue = F("Maierbergle");
        break;
    }
    case 213909:
    {
        returnValue = F("Maierbreite");
        break;
    }
    case 213910:
    {
        returnValue = F("Maierbreiten");
        break;
    }
    case 213911:
    {
        returnValue = F("Maierbräugasteig");
        break;
    }
    case 213912:
    {
        returnValue = F("Maierbuckallee");
        break;
    }
    case 213913:
    {
        returnValue = F("Maierbuckstr.");
        break;
    }
    case 213914:
    {
        returnValue = F("Maierbuscher Str.");
        break;
    }
    case 213915:
    {
        returnValue = F("Maierbühnd");
        break;
    }
    case 213916:
    {
        returnValue = F("Maieregernweg");
        break;
    }
    case 213917:
    {
        returnValue = F("Maierei");
        break;
    }
    case 213918:
    {
        returnValue = F("Maierfeld");
        break;
    }
    case 213919:
    {
        returnValue = F("Maierfeldstr.");
        break;
    }
    case 213920:
    {
        returnValue = F("Maierfeldweg");
        break;
    }
    case 213921:
    {
        returnValue = F("Maiergartenstr.");
        break;
    }
    case 213922:
    {
        returnValue = F("Maiergasse");
        break;
    }
    case 213923:
    {
        returnValue = F("Maiergschwendter Str.");
        break;
    }
    case 213924:
    {
        returnValue = F("Maiergässle");
        break;
    }
    case 213925:
    {
        returnValue = F("Maierhalde");
        break;
    }
    case 213926:
    {
        returnValue = F("Maierhaldenstr.");
        break;
    }
    case 213927:
    {
        returnValue = F("Maierhaldenweg");
        break;
    }
    case 213928:
    {
        returnValue = F("Maierhof");
        break;
    }
    case 213929:
    {
        returnValue = F("Maierhofener Str.");
        break;
    }
    case 213930:
    {
        returnValue = F("Maierhoferfeld");
        break;
    }
    case 213931:
    {
        returnValue = F("Maierhoferstr.");
        break;
    }
    case 213932:
    {
        returnValue = F("Maierhoferweg");
        break;
    }
    case 213933:
    {
        returnValue = F("Maierhofgasse");
        break;
    }
    case 213934:
    {
        returnValue = F("Maierhofstr.");
        break;
    }
    case 213935:
    {
        returnValue = F("Maierhofweg");
        break;
    }
    case 213936:
    {
        returnValue = F("Maierholzstr.");
        break;
    }
    case 213937:
    {
        returnValue = F("Maierholzweg");
        break;
    }
    case 213938:
    {
        returnValue = F("Maierhöfe");
        break;
    }
    case 213939:
    {
        returnValue = F("Maierhöfener Str.");
        break;
    }
    case 213940:
    {
        returnValue = F("Maierklopfen");
        break;
    }
    case 213941:
    {
        returnValue = F("Maiermühle");
        break;
    }
    case 213942:
    {
        returnValue = F("Maiers Gewand");
        break;
    }
    case 213943:
    {
        returnValue = F("Maiers Weg");
        break;
    }
    case 213944:
    {
        returnValue = F("Maiersbach");
        break;
    }
    case 213945:
    {
        returnValue = F("Maiersbachweg");
        break;
    }
    case 213946:
    {
        returnValue = F("Maiersbergstr.");
        break;
    }
    case 213947:
    {
        returnValue = F("Maiersbildweg");
        break;
    }
    case 213948:
    {
        returnValue = F("Maiersgrund");
        break;
    }
    case 213949:
    {
        returnValue = F("Maiersgrüner Str.");
        break;
    }
    case 213950:
    {
        returnValue = F("Maierslochweg");
        break;
    }
    case 213951:
    {
        returnValue = F("Maierspark");
        break;
    }
    case 213952:
    {
        returnValue = F("Maierstr.");
        break;
    }
    case 213953:
    {
        returnValue = F("Maiersweg");
        break;
    }
    case 213954:
    {
        returnValue = F("Maiertorweg");
        break;
    }
    case 213955:
    {
        returnValue = F("Maiertshofer Str.");
        break;
    }
    case 213956:
    {
        returnValue = F("Maierwaldstr.");
        break;
    }
    case 213957:
    {
        returnValue = F("Maierwaldweg");
        break;
    }
    case 213958:
    {
        returnValue = F("Maierweg");
        break;
    }
    case 213959:
    {
        returnValue = F("Maierwiesen");
        break;
    }
    case 213960:
    {
        returnValue = F("Maierwiesenstr.");
        break;
    }
    case 213961:
    {
        returnValue = F("Maierwiesenweg");
        break;
    }
    case 213962:
    {
        returnValue = F("Maierwiesle");
        break;
    }
    case 213963:
    {
        returnValue = F("Maieräckerstr.");
        break;
    }
    case 213964:
    {
        returnValue = F("Maieröd");
        break;
    }
    case 213965:
    {
        returnValue = F("Maifeld");
        break;
    }
    case 213966:
    {
        returnValue = F("Maifeldstr.");
        break;
    }
    case 213967:
    {
        returnValue = F("Maifeldweg");
        break;
    }
    case 213968:
    {
        returnValue = F("Maifestwiese");
        break;
    }
    case 213969:
    {
        returnValue = F("Maifischgasse");
        break;
    }
    case 213970:
    {
        returnValue = F("Maifischweg");
        break;
    }
    case 213971:
    {
        returnValue = F("Maigaard");
        break;
    }
    case 213972:
    {
        returnValue = F("Maigard");
        break;
    }
    case 213973:
    {
        returnValue = F("Maigartenstr.");
        break;
    }
    case 213974:
    {
        returnValue = F("Maigartenweg");
        break;
    }
    case 213975:
    {
        returnValue = F("Maigasse");
        break;
    }
    case 213976:
    {
        returnValue = F("Maigerstr.");
        break;
    }
    case 213977:
    {
        returnValue = F("Maigesetzweg");
        break;
    }
    case 213978:
    {
        returnValue = F("Maiglerstr.");
        break;
    }
    case 213979:
    {
        returnValue = F("Maiglöckchen");
        break;
    }
    case 213980:
    {
        returnValue = F("Maiglöckchengasse");
        break;
    }
    case 213981:
    {
        returnValue = F("Maiglöckchenpfad");
        break;
    }
    case 213982:
    {
        returnValue = F("Maiglöckchenring");
        break;
    }
    case 213983:
    {
        returnValue = F("Maiglöckchenstr.");
        break;
    }
    case 213984:
    {
        returnValue = F("Maiglöckchenweg");
        break;
    }
    case 213985:
    {
        returnValue = F("Maiglöckerlweg");
        break;
    }
    case 213986:
    {
        returnValue = F("Maigoldweg");
        break;
    }
    case 213987:
    {
        returnValue = F("Maigrabenstr.");
        break;
    }
    case 213988:
    {
        returnValue = F("Maihaldenstr.");
        break;
    }
    case 213989:
    {
        returnValue = F("Maihausen");
        break;
    }
    case 213990:
    {
        returnValue = F("Maihausergroden");
        break;
    }
    case 213991:
    {
        returnValue = F("Maihecke");
        break;
    }
    case 213992:
    {
        returnValue = F("Maihinger Str.");
        break;
    }
    case 213993:
    {
        returnValue = F("Maihof");
        break;
    }
    case 213994:
    {
        returnValue = F("Maihohl");
        break;
    }
    case 213995:
    {
        returnValue = F("Maihohle");
        break;
    }
    case 213996:
    {
        returnValue = F("Maiholm");
        break;
    }
    case 213997:
    {
        returnValue = F("Maihäldenstr.");
        break;
    }
    case 213998:
    {
        returnValue = F("Maikammer");
        break;
    }
    case 213999:
    {
        returnValue = F("Maikammerer Str.");
        break;
    }
    case 214000:
    {
        returnValue = F("Maikammerer Weg");
        break;
    }
    case 214001:
    {
        returnValue = F("Maikammerstr.");
        break;
    }
    case 214002:
    {
        returnValue = F("Maikamp");
        break;
    }
    case 214003:
    {
        returnValue = F("Maikesselkopf");
        break;
    }
    case 214004:
    {
        returnValue = F("Maikeweg");
        break;
    }
    case 214005:
    {
        returnValue = F("Maikirschenweg");
        break;
    }
    case 214006:
    {
        returnValue = F("Maikopf");
        break;
    }
    case 214007:
    {
        returnValue = F("Maikottenhöhe");
        break;
    }
    case 214008:
    {
        returnValue = F("Maikottenweg");
        break;
    }
    case 214009:
    {
        returnValue = F("Maikuhle");
        break;
    }
    case 214010:
    {
        returnValue = F("Maikuhlenweg");
        break;
    }
    case 214011:
    {
        returnValue = F("Maikäferring");
        break;
    }
    case 214012:
    {
        returnValue = F("Maikäferstieg");
        break;
    }
    case 214013:
    {
        returnValue = F("Maikäferweg");
        break;
    }
    case 214014:
    {
        returnValue = F("Mail");
        break;
    }
    case 214015:
    {
        returnValue = F("Mailach");
        break;
    }
    case 214016:
    {
        returnValue = F("Mailand");
        break;
    }
    case 214017:
    {
        returnValue = F("Mailandweg");
        break;
    }
    case 214018:
    {
        returnValue = F("Mailbacher Str.");
        break;
    }
    case 214019:
    {
        returnValue = F("Maileser Str.");
        break;
    }
    case 214020:
    {
        returnValue = F("Mailinger Spitz");
        break;
    }
    case 214021:
    {
        returnValue = F("Mailinger Weg");
        break;
    }
    case 214022:
    {
        returnValue = F("Maille");
        break;
    }
    case 214023:
    {
        returnValue = F("Maille-Bahn");
        break;
    }
    case 214024:
    {
        returnValue = F("Maillestr.");
        break;
    }
    case 214025:
    {
        returnValue = F("Mailling");
        break;
    }
    case 214026:
    {
        returnValue = F("Maillinger Str.");
        break;
    }
    case 214027:
    {
        returnValue = F("Maillingerstr.");
        break;
    }
    case 214028:
    {
        returnValue = F("Mailoh");
        break;
    }
    case 214029:
    {
        returnValue = F("Mailonweg");
        break;
    }
    case 214030:
    {
        returnValue = F("Mailstädter Str.");
        break;
    }
    case 214031:
    {
        returnValue = F("Mailust");
        break;
    }
    case 214032:
    {
        returnValue = F("Mailänder Höhe");
        break;
    }
    case 214033:
    {
        returnValue = F("Mailänder Passage");
        break;
    }
    case 214034:
    {
        returnValue = F("Mailänder Platz");
        break;
    }
    case 214035:
    {
        returnValue = F("Mailänder Str.");
        break;
    }
    case 214036:
    {
        returnValue = F("Mailänder Weg");
        break;
    }
    case 214037:
    {
        returnValue = F("Mailänderweg");
        break;
    }
    case 214038:
    {
        returnValue = F("Mailücke");
        break;
    }
    case 214039:
    {
        returnValue = F("Maimerweg");
        break;
    }
    case 214040:
    {
        returnValue = F("Maimi-von-Mirbach-Str.");
        break;
    }
    case 214041:
    {
        returnValue = F("Maimontstr.");
        break;
    }
    case 214042:
    {
        returnValue = F("Maimühle");
        break;
    }
    case 214043:
    {
        returnValue = F("Main Werra Radweg");
        break;
    }
    case 214044:
    {
        returnValue = F("Main-Donau-Bodensee-Weg");
        break;
    }
    case 214045:
    {
        returnValue = F("Main-Kinzig-Str.");
        break;
    }
    case 214046:
    {
        returnValue = F("Main-Mies-Weg");
        break;
    }
    case 214047:
    {
        returnValue = F("Main-Neckar-Bahn-Str.");
        break;
    }
    case 214048:
    {
        returnValue = F("Main-Neckar-Str.");
        break;
    }
    case 214049:
    {
        returnValue = F("Main-Taunus-Ring");
        break;
    }
    case 214050:
    {
        returnValue = F("Main-Taunus-Zentrum");
        break;
    }
    case 214051:
    {
        returnValue = F("Main-Uferweg");
        break;
    }
    case 214052:
    {
        returnValue = F("Main-Werra-Radweg/ Radweg Meiningen-Hassfurt/ Radweg Sülzetal");
        break;
    }
    case 214053:
    {
        returnValue = F("Main-Weser-Str.");
        break;
    }
    case 214054:
    {
        returnValue = F("Mainanger");
        break;
    }
    case 214055:
    {
        returnValue = F("Mainanlage");
        break;
    }
    case 214056:
    {
        returnValue = F("Mainaschaffer Str.");
        break;
    }
    case 214057:
    {
        returnValue = F("Mainau");
        break;
    }
    case 214058:
    {
        returnValue = F("Mainau B");
        break;
    }
    case 214059:
    {
        returnValue = F("Mainau C");
        break;
    }
    case 214060:
    {
        returnValue = F("Mainaue");
        break;
    }
    case 214061:
    {
        returnValue = F("Mainauer Str.");
        break;
    }
    case 214062:
    {
        returnValue = F("Mainauer Weg");
        break;
    }
    case 214063:
    {
        returnValue = F("Mainauring");
        break;
    }
    case 214064:
    {
        returnValue = F("Mainaussicht");
        break;
    }
    case 214065:
    {
        returnValue = F("Mainaustr.");
        break;
    }
    case 214066:
    {
        returnValue = F("Mainauweg");
        break;
    }
    case 214067:
    {
        returnValue = F("Mainbacher Höhe");
        break;
    }
    case 214068:
    {
        returnValue = F("Mainbacher Str.");
        break;
    }
    case 214069:
    {
        returnValue = F("Mainbachstr.");
        break;
    }
    case 214070:
    {
        returnValue = F("Mainbachtal");
        break;
    }
    case 214071:
    {
        returnValue = F("Mainberg");
        break;
    }
    case 214072:
    {
        returnValue = F("Mainbergblick");
        break;
    }
    case 214073:
    {
        returnValue = F("Mainberger Str.");
        break;
    }
    case 214074:
    {
        returnValue = F("Mainbergstr.");
        break;
    }
    case 214075:
    {
        returnValue = F("Mainbernheimer Str.");
        break;
    }
    case 214076:
    {
        returnValue = F("Mainblick");
        break;
    }
    case 214077:
    {
        returnValue = F("Mainblickstr.");
        break;
    }
    case 214078:
    {
        returnValue = F("Mainbrücke");
        break;
    }
    case 214079:
    {
        returnValue = F("Mainbrücke Klingenberg");
        break;
    }
    case 214080:
    {
        returnValue = F("Mainbrücke Theisau");
        break;
    }
    case 214081:
    {
        returnValue = F("Mainbrückenstr.");
        break;
    }
    case 214082:
    {
        returnValue = F("Mainbullau");
        break;
    }
    case 214083:
    {
        returnValue = F("Mainbullauer Str.");
        break;
    }
    case 214084:
    {
        returnValue = F("Mainbullauer Weg");
        break;
    }
    case 214085:
    {
        returnValue = F("Mainbuller Grenzweg");
        break;
    }
    case 214086:
    {
        returnValue = F("Mainburger Str.");
        break;
    }
    case 214087:
    {
        returnValue = F("Maind");
        break;
    }
    case 214088:
    {
        returnValue = F("Maindammweg");
        break;
    }
    case 214089:
    {
        returnValue = F("Mainecker Str.");
        break;
    }
    case 214090:
    {
        returnValue = F("Mainecker Weg");
        break;
    }
    case 214091:
    {
        returnValue = F("Mainestr.");
        break;
    }
    case 214092:
    {
        returnValue = F("Mainfeldstr.");
        break;
    }
    case 214093:
    {
        returnValue = F("Mainflinger Str.");
        break;
    }
    case 214094:
    {
        returnValue = F("Mainfrankenhöhe");
        break;
    }
    case 214095:
    {
        returnValue = F("Mainfährstr.");
        break;
    }
    case 214096:
    {
        returnValue = F("Maingasse");
        break;
    }
    case 214097:
    {
        returnValue = F("Maingaustr.");
        break;
    }
    case 214098:
    {
        returnValue = F("Maingründeler Weg");
        break;
    }
    case 214099:
    {
        returnValue = F("Mainhardter Feld");
        break;
    }
    case 214100:
    {
        returnValue = F("Mainhardter Str.");
        break;
    }
    case 214101:
    {
        returnValue = F("Mainhardter Weg");
        break;
    }
    case 214102:
    {
        returnValue = F("Mainhardtholzweg");
        break;
    }
    case 214103:
    {
        returnValue = F("Mainhardtsall");
        break;
    }
    case 214104:
    {
        returnValue = F("Mainhardtweg");
        break;
    }
    case 214105:
    {
        returnValue = F("Mainhausener Str.");
        break;
    }
    case 214106:
    {
        returnValue = F("Mainhoststr.");
        break;
    }
    case 214107:
    {
        returnValue = F("Maininsel");
        break;
    }
    case 214108:
    {
        returnValue = F("Mainkai");
        break;
    }
    case 214109:
    {
        returnValue = F("Mainkaistr.");
        break;
    }
    case 214110:
    {
        returnValue = F("Mainkamp");
        break;
    }
    case 214111:
    {
        returnValue = F("Mainkanal");
        break;
    }
    case 214112:
    {
        returnValue = F("Mainkleiner Weg");
        break;
    }
    case 214113:
    {
        returnValue = F("Mainklinger Str.");
        break;
    }
    case 214114:
    {
        returnValue = F("Mainkofener Str.");
        break;
    }
    case 214115:
    {
        returnValue = F("Mainkurstr.");
        break;
    }
    case 214116:
    {
        returnValue = F("Mainleite");
        break;
    }
    case 214117:
    {
        returnValue = F("Mainleitenstr.");
        break;
    }
    case 214118:
    {
        returnValue = F("Mainluststr.");
        break;
    }
    case 214119:
    {
        returnValue = F("Mainlände");
        break;
    }
    case 214120:
    {
        returnValue = F("Mainlände mit Stadtstrand und Grillplatz");
        break;
    }
    case 214121:
    {
        returnValue = F("Mainländer Str.");
        break;
    }
    case 214122:
    {
        returnValue = F("Mainpark");
        break;
    }
    case 214123:
    {
        returnValue = F("Mainparkplatz");
        break;
    }
    case 214124:
    {
        returnValue = F("Mainparkstr.");
        break;
    }
    case 214125:
    {
        returnValue = F("Mainpfortstr.");
        break;
    }
    case 214126:
    {
        returnValue = F("Mainplatz");
        break;
    }
    case 214127:
    {
        returnValue = F("Mainpromenade");
        break;
    }
    case 214128:
    {
        returnValue = F("Mainring");
        break;
    }
    case 214129:
    {
        returnValue = F("Mainroad");
        break;
    }
    case 214130:
    {
        returnValue = F("Mainrother Str.");
        break;
    }
    case 214131:
    {
        returnValue = F("Mainschneise");
        break;
    }
    case 214132:
    {
        returnValue = F("Mainsondsheimer Str.");
        break;
    }
    case 214133:
    {
        returnValue = F("Mainsstr.");
        break;
    }
    case 214134:
    {
        returnValue = F("Mainstockheimer Str.");
        break;
    }
    case 214135:
    {
        returnValue = F("Mainstockheimer Weg");
        break;
    }
    case 214136:
    {
        returnValue = F("Mainstr.");
        break;
    }
    case 214137:
    {
        returnValue = F("Mainstweg");
        break;
    }
    case 214138:
    {
        returnValue = F("Maintal");
        break;
    }
    case 214139:
    {
        returnValue = F("Maintalblick");
        break;
    }
    case 214140:
    {
        returnValue = F("Maintaler Grenzschneise");
        break;
    }
    case 214141:
    {
        returnValue = F("Maintaler Str.");
        break;
    }
    case 214142:
    {
        returnValue = F("Maintalstr.");
        break;
    }
    case 214143:
    {
        returnValue = F("Maintalweg");
        break;
    }
    case 214144:
    {
        returnValue = F("Mainteweg");
        break;
    }
    case 214145:
    {
        returnValue = F("Maintorstr.");
        break;
    }
    case 214146:
    {
        returnValue = F("Mainufer");
        break;
    }
    case 214147:
    {
        returnValue = F("Mainuferpark");
        break;
    }
    case 214148:
    {
        returnValue = F("Mainuferradweg");
        break;
    }
    case 214149:
    {
        returnValue = F("Mainuferstr.");
        break;
    }
    case 214150:
    {
        returnValue = F("Mainuferweg");
        break;
    }
    case 214151:
    {
        returnValue = F("Mainvorland");
        break;
    }
    case 214152:
    {
        returnValue = F("Mainwanderweg");
        break;
    }
    case 214153:
    {
        returnValue = F("Mainwanger Str.");
        break;
    }
    case 214154:
    {
        returnValue = F("Mainwangerweg");
        break;
    }
    case 214155:
    {
        returnValue = F("Mainweg");
        break;
    }
    case 214156:
    {
        returnValue = F("Mainwegschneise");
        break;
    }
    case 214157:
    {
        returnValue = F("Mainwehr");
        break;
    }
    case 214158:
    {
        returnValue = F("Mainwehrstr.");
        break;
    }
    case 214159:
    {
        returnValue = F("Mainwiesenpfad");
        break;
    }
    case 214160:
    {
        returnValue = F("Mainwiesenweg");
        break;
    }
    case 214161:
    {
        returnValue = F("Mainz-Waggonfabrik");
        break;
    }
    case 214162:
    {
        returnValue = F("Mainzer Allee");
        break;
    }
    case 214163:
    {
        returnValue = F("Mainzer Bahnweg");
        break;
    }
    case 214164:
    {
        returnValue = F("Mainzer Berg");
        break;
    }
    case 214165:
    {
        returnValue = F("Mainzer Breite");
        break;
    }
    case 214166:
    {
        returnValue = F("Mainzer Gasse");
        break;
    }
    case 214167:
    {
        returnValue = F("Mainzer Golfplatzweg");
        break;
    }
    case 214168:
    {
        returnValue = F("Mainzer Land");
        break;
    }
    case 214169:
    {
        returnValue = F("Mainzer Landstr.");
        break;
    }
    case 214170:
    {
        returnValue = F("Mainzer Linie");
        break;
    }
    case 214171:
    {
        returnValue = F("Mainzer Privatweg");
        break;
    }
    case 214172:
    {
        returnValue = F("Mainzer Ring");
        break;
    }
    case 214173:
    {
        returnValue = F("Mainzer Str.");
        break;
    }
    case 214174:
    {
        returnValue = F("Mainzer Tal");
        break;
    }
    case 214175:
    {
        returnValue = F("Mainzer Tor");
        break;
    }
    case 214176:
    {
        returnValue = F("Mainzer Weg");
        break;
    }
    case 214177:
    {
        returnValue = F("Mainzer Weg Schneise");
        break;
    }
    case 214178:
    {
        returnValue = F("Mainzer-Pfort-Str.");
        break;
    }
    case 214179:
    {
        returnValue = F("Mainzer-Tor-Anlage");
        break;
    }
    case 214180:
    {
        returnValue = F("Mainzer-Tor-Weg");
        break;
    }
    case 214181:
    {
        returnValue = F("Mainzerhofplatz");
        break;
    }
    case 214182:
    {
        returnValue = F("Mainzerhofstr.");
        break;
    }
    case 214183:
    {
        returnValue = F("Mainzerstr.");
        break;
    }
    case 214184:
    {
        returnValue = F("Mainzinger Weg");
        break;
    }
    case 214185:
    {
        returnValue = F("Mainzlarer Kirchenweg");
        break;
    }
    case 214186:
    {
        returnValue = F("Mainzlarer Str.");
        break;
    }
    case 214187:
    {
        returnValue = F("Mainzlarer Weg");
        break;
    }
    case 214188:
    {
        returnValue = F("Mainzlohe");
        break;
    }
    case 214189:
    {
        returnValue = F("Mainzstr.");
        break;
    }
    case 214190:
    {
        returnValue = F("Mainzweilerstr.");
        break;
    }
    case 214191:
    {
        returnValue = F("Maio-Str.");
        break;
    }
    case 214192:
    {
        returnValue = F("Maiplacken");
        break;
    }
    case 214193:
    {
        returnValue = F("Maiplatz");
        break;
    }
    case 214194:
    {
        returnValue = F("Mairhausenstr.");
        break;
    }
    case 214195:
    {
        returnValue = F("Mairhof");
        break;
    }
    case 214196:
    {
        returnValue = F("Mairichstr.");
        break;
    }
    case 214197:
    {
        returnValue = F("Mairichweg");
        break;
    }
    case 214198:
    {
        returnValue = F("Mais");
        break;
    }
    case 214199:
    {
        returnValue = F("Mais Venne");
        break;
    }
    case 214200:
    {
        returnValue = F("Maisacher Str.");
        break;
    }
    case 214201:
    {
        returnValue = F("Maisacher Weg");
        break;
    }
    case 214202:
    {
        returnValue = F("Maisachweg");
        break;
    }
    case 214203:
    {
        returnValue = F("Maisacker");
        break;
    }
    case 214204:
    {
        returnValue = F("Maisbacher Fußweg");
        break;
    }
    case 214205:
    {
        returnValue = F("Maisbacher Str.");
        break;
    }
    case 214206:
    {
        returnValue = F("Maisbachstr.");
        break;
    }
    case 214207:
    {
        returnValue = F("Maisbachweg");
        break;
    }
    case 214208:
    {
        returnValue = F("Maisberg");
        break;
    }
    case 214209:
    {
        returnValue = F("Maisbergstr.");
        break;
    }
    case 214210:
    {
        returnValue = F("Maisborner Str.");
        break;
    }
    case 214211:
    {
        returnValue = F("Maisborsteler Str.");
        break;
    }
    case 214212:
    {
        returnValue = F("Maisbrunner Str.");
        break;
    }
    case 214213:
    {
        returnValue = F("Maischeider Str.");
        break;
    }
    case 214214:
    {
        returnValue = F("Maischeider Weg");
        break;
    }
    case 214215:
    {
        returnValue = F("Maischer Str.");
        break;
    }
    case 214216:
    {
        returnValue = F("Maischeweg");
        break;
    }
    case 214217:
    {
        returnValue = F("Maischlackweg");
        break;
    }
    case 214218:
    {
        returnValue = F("Maischützenfestzelt");
        break;
    }
    case 214219:
    {
        returnValue = F("Maischützenstr.");
        break;
    }
    case 214220:
    {
        returnValue = F("Maisdörpe");
        break;
    }
    case 214221:
    {
        returnValue = F("Maisebachstr.");
        break;
    }
    case 214222:
    {
        returnValue = F("Maiselsberger Str.");
        break;
    }
    case 214223:
    {
        returnValue = F("Maisenbach");
        break;
    }
    case 214224:
    {
        returnValue = F("Maisenbacher Str.");
        break;
    }
    case 214225:
    {
        returnValue = F("Maisenbacher Weg");
        break;
    }
    case 214226:
    {
        returnValue = F("Maisenbachsiedlung");
        break;
    }
    case 214227:
    {
        returnValue = F("Maisenbachstr.");
        break;
    }
    case 214228:
    {
        returnValue = F("Maisenbachtalstr.");
        break;
    }
    case 214229:
    {
        returnValue = F("Maisenbachweg");
        break;
    }
    case 214230:
    {
        returnValue = F("Maisenberg");
        break;
    }
    case 214231:
    {
        returnValue = F("Maisenburgweg");
        break;
    }
    case 214232:
    {
        returnValue = F("Maisenbügele");
        break;
    }
    case 214233:
    {
        returnValue = F("Maisenhardtweg");
        break;
    }
    case 214234:
    {
        returnValue = F("Maisenhälder Str.");
        break;
    }
    case 214235:
    {
        returnValue = F("Maisenhäldestr.");
        break;
    }
    case 214236:
    {
        returnValue = F("Maisenhäuser Str.");
        break;
    }
    case 214237:
    {
        returnValue = F("Maisenlachweg");
        break;
    }
    case 214238:
    {
        returnValue = F("Maisenstückweg");
        break;
    }
    case 214239:
    {
        returnValue = F("Maiser");
        break;
    }
    case 214240:
    {
        returnValue = F("Maisfeld");
        break;
    }
    case 214241:
    {
        returnValue = F("Maisgasse");
        break;
    }
    case 214242:
    {
        returnValue = F("Maisidden");
        break;
    }
    case 214243:
    {
        returnValue = F("Maisig");
        break;
    }
    case 214244:
    {
        returnValue = F("Maisinger Platz");
        break;
    }
    case 214245:
    {
        returnValue = F("Maisinger Schlucht");
        break;
    }
    case 214246:
    {
        returnValue = F("Maisinger Str.");
        break;
    }
    case 214247:
    {
        returnValue = F("Maisinger Weg");
        break;
    }
    case 214248:
    {
        returnValue = F("Maisinger-Schlucht-Str.");
        break;
    }
    case 214249:
    {
        returnValue = F("Maiskamp");
        break;
    }
    case 214250:
    {
        returnValue = F("Maislabyrinth Liederbach");
        break;
    }
    case 214251:
    {
        returnValue = F("Maislabyrinth Seehof Steinweiler");
        break;
    }
    case 214252:
    {
        returnValue = F("Maisloch");
        break;
    }
    case 214253:
    {
        returnValue = F("Maisons-Laffitte-Platz");
        break;
    }
    case 214254:
    {
        returnValue = F("Maispiel");
        break;
    }
    case 214255:
    {
        returnValue = F("Maisrundweg");
        break;
    }
    case 214256:
    {
        returnValue = F("Maisstieg");
        break;
    }
    case 214257:
    {
        returnValue = F("Maisstr.");
        break;
    }
    case 214258:
    {
        returnValue = F("Maisteig");
        break;
    }
    case 214259:
    {
        returnValue = F("Maisteigstr.");
        break;
    }
    case 214260:
    {
        returnValue = F("Maisthaler Weg");
        break;
    }
    case 214261:
    {
        returnValue = F("Maisthuberstr.");
        break;
    }
    case 214262:
    {
        returnValue = F("Maistieg");
        break;
    }
    case 214263:
    {
        returnValue = F("Maistoft");
        break;
    }
    case 214264:
    {
        returnValue = F("Maistr.");
        break;
    }
    case 214265:
    {
        returnValue = F("Maistumpf");
        break;
    }
    case 214266:
    {
        returnValue = F("Maistücksweg");
        break;
    }
    case 214267:
    {
        returnValue = F("Maisweg");
        break;
    }
    case 214268:
    {
        returnValue = F("Maiszanter Weg");
        break;
    }
    case 214269:
    {
        returnValue = F("Maitalweg");
        break;
    }
    case 214270:
    {
        returnValue = F("Maitenbethener Str.");
        break;
    }
    case 214271:
    {
        returnValue = F("Maitiser Str.");
        break;
    }
    case 214272:
    {
        returnValue = F("Maitzborner Str.");
        break;
    }
    case 214273:
    {
        returnValue = F("Maiwald");
        break;
    }
    case 214274:
    {
        returnValue = F("Maiwaldsiedlung");
        break;
    }
    case 214275:
    {
        returnValue = F("Maiwaldstr.");
        break;
    }
    case 214276:
    {
        returnValue = F("Maiwandstr.");
        break;
    }
    case 214277:
    {
        returnValue = F("Maiweg");
        break;
    }
    case 214278:
    {
        returnValue = F("Maiwegstr.");
        break;
    }
    case 214279:
    {
        returnValue = F("Maiweiderstr.");
        break;
    }
    case 214280:
    {
        returnValue = F("Maiwies");
        break;
    }
    case 214281:
    {
        returnValue = F("Maiwiese");
        break;
    }
    case 214282:
    {
        returnValue = F("Maiwiesen");
        break;
    }
    case 214283:
    {
        returnValue = F("Maiwiesenweg");
        break;
    }
    case 214284:
    {
        returnValue = F("Maiwieserweg");
        break;
    }
    case 214285:
    {
        returnValue = F("Maiwiesle");
        break;
    }
    case 214286:
    {
        returnValue = F("Maiwinkel");
        break;
    }
    case 214287:
    {
        returnValue = F("Maiwäldeleweg");
        break;
    }
    case 214288:
    {
        returnValue = F("Maiäcker");
        break;
    }
    case 214289:
    {
        returnValue = F("Maiäckerstr.");
        break;
    }
    case 214290:
    {
        returnValue = F("Maja-Lex-Weg");
        break;
    }
    case 214291:
    {
        returnValue = F("Majack");
        break;
    }
    case 214292:
    {
        returnValue = F("Majakowskistr.");
        break;
    }
    case 214293:
    {
        returnValue = F("Majenfelder Landstr.");
        break;
    }
    case 214294:
    {
        returnValue = F("Majenfelder Str.");
        break;
    }
    case 214295:
    {
        returnValue = F("Majolikastr.");
        break;
    }
    case 214296:
    {
        returnValue = F("Major-Bedding-Str.");
        break;
    }
    case 214297:
    {
        returnValue = F("Major-Braun-Weg");
        break;
    }
    case 214298:
    {
        returnValue = F("Major-Hirst-Str.");
        break;
    }
    case 214299:
    {
        returnValue = F("Major-von-Minckwitz-Allee");
        break;
    }
    case 214300:
    {
        returnValue = F("Majoranweg");
        break;
    }
    case 214301:
    {
        returnValue = F("Majoratswaldstr.");
        break;
    }
    case 214302:
    {
        returnValue = F("Majorsweg");
        break;
    }
    case 214303:
    {
        returnValue = F("Makadamweg");
        break;
    }
    case 214304:
    {
        returnValue = F("Makarenkostr.");
        break;
    }
    case 214305:
    {
        returnValue = F("Makartstr.");
        break;
    }
    case 214306:
    {
        returnValue = F("Makenhofstr.");
        break;
    }
    case 214307:
    {
        returnValue = F("Makenhorst");
        break;
    }
    case 214308:
    {
        returnValue = F("Makens Gang");
        break;
    }
    case 214309:
    {
        returnValue = F("Makens Hoff");
        break;
    }
    case 214310:
    {
        returnValue = F("Makete-Weg");
        break;
    }
    case 214311:
    {
        returnValue = F("Makofener Str.");
        break;
    }
    case 214312:
    {
        returnValue = F("Makrelenstr.");
        break;
    }
    case 214313:
    {
        returnValue = F("Makrelenweg");
        break;
    }
    case 214314:
    {
        returnValue = F("Makrene");
        break;
    }
    case 214315:
    {
        returnValue = F("Makusstr.");
        break;
    }
    case 214316:
    {
        returnValue = F("Malachias-Geiger-Weg");
        break;
    }
    case 214317:
    {
        returnValue = F("Malachitstr.");
        break;
    }
    case 214318:
    {
        returnValue = F("Malachitweg");
        break;
    }
    case 214319:
    {
        returnValue = F("Malagasse");
        break;
    }
    case 214320:
    {
        returnValue = F("Malagaweg");
        break;
    }
    case 214321:
    {
        returnValue = F("Malagstr.");
        break;
    }
    case 214322:
    {
        returnValue = F("Malaienstr.");
        break;
    }
    case 214323:
    {
        returnValue = F("Malakoffstr.");
        break;
    }
    case 214324:
    {
        returnValue = F("Malapertstr.");
        break;
    }
    case 214325:
    {
        returnValue = F("Malatzäcker");
        break;
    }
    case 214326:
    {
        returnValue = F("Malbach");
        break;
    }
    case 214327:
    {
        returnValue = F("Malbachweg");
        break;
    }
    case 214328:
    {
        returnValue = F("Malberger Esch");
        break;
    }
    case 214329:
    {
        returnValue = F("Malberger Mark");
        break;
    }
    case 214330:
    {
        returnValue = F("Malberger Str.");
        break;
    }
    case 214331:
    {
        returnValue = F("Malbergstr.");
        break;
    }
    case 214332:
    {
        returnValue = F("Malbergweg");
        break;
    }
    case 214333:
    {
        returnValue = F("Malbergweg / Panorama-Rundweg - Frücht");
        break;
    }
    case 214334:
    {
        returnValue = F("Malbork-Platz");
        break;
    }
    case 214335:
    {
        returnValue = F("Malborner Weg");
        break;
    }
    case 214336:
    {
        returnValue = F("Malchensbrücke");
        break;
    }
    case 214337:
    {
        returnValue = F("Malchenweg");
        break;
    }
    case 214338:
    {
        returnValue = F("Malcher Schneise");
        break;
    }
    case 214339:
    {
        returnValue = F("Malcher Str.");
        break;
    }
    case 214340:
    {
        returnValue = F("Malcher Wegschneise");
        break;
    }
    case 214341:
    {
        returnValue = F("Malchiner Str.");
        break;
    }
    case 214342:
    {
        returnValue = F("Malchinger Str.");
        break;
    }
    case 214343:
    {
        returnValue = F("Malchow Damerower Weg");
        break;
    }
    case 214344:
    {
        returnValue = F("Malchow Dorfmitte");
        break;
    }
    case 214345:
    {
        returnValue = F("Malchow Prenzlauer Str.");
        break;
    }
    case 214346:
    {
        returnValue = F("Malchow Schmiedeweg");
        break;
    }
    case 214347:
    {
        returnValue = F("Malchow Siedlungsstr.");
        break;
    }
    case 214348:
    {
        returnValue = F("Malchower Chaussee");
        break;
    }
    case 214349:
    {
        returnValue = F("Malchower Landstr.");
        break;
    }
    case 214350:
    {
        returnValue = F("Malchower Str.");
        break;
    }
    case 214351:
    {
        returnValue = F("Malchower Weg");
        break;
    }
    case 214352:
    {
        returnValue = F("Maldegemstr.");
        break;
    }
    case 214353:
    {
        returnValue = F("Malderitzstr.");
        break;
    }
    case 214354:
    {
        returnValue = F("Maldfeldstr.");
        break;
    }
    case 214355:
    {
        returnValue = F("Malditzerbergstr.");
        break;
    }
    case 214356:
    {
        returnValue = F("Maleens Knoll");
        break;
    }
    case 214357:
    {
        returnValue = F("Malefikantenweg");
        break;
    }
    case 214358:
    {
        returnValue = F("Malefinkbachstr.");
        break;
    }
    case 214359:
    {
        returnValue = F("Malefinkstr.");
        break;
    }
    case 214360:
    {
        returnValue = F("Malefitzweg");
        break;
    }
    case 214361:
    {
        returnValue = F("Malensteinweg");
        break;
    }
    case 214362:
    {
        returnValue = F("Malente");
        break;
    }
    case 214363:
    {
        returnValue = F("Malenter Landstr.");
        break;
    }
    case 214364:
    {
        returnValue = F("Malenter Str.");
        break;
    }
    case 214365:
    {
        returnValue = F("Malenter Weg");
        break;
    }
    case 214366:
    {
        returnValue = F("Maler-Becker-Str.");
        break;
    }
    case 214367:
    {
        returnValue = F("Maler-Bestle-Str.");
        break;
    }
    case 214368:
    {
        returnValue = F("Maler-Beyschlag-Weg");
        break;
    }
    case 214369:
    {
        returnValue = F("Maler-Bock-Gäßchen");
        break;
    }
    case 214370:
    {
        returnValue = F("Maler-Bürkel-Platz");
        break;
    }
    case 214371:
    {
        returnValue = F("Maler-Bürkel-Str.");
        break;
    }
    case 214372:
    {
        returnValue = F("Maler-Ernst-Str.");
        break;
    }
    case 214373:
    {
        returnValue = F("Maler-Faber-Str.");
        break;
    }
    case 214374:
    {
        returnValue = F("Maler-Fischer-Str.");
        break;
    }
    case 214375:
    {
        returnValue = F("Maler-Hengge-Weg");
        break;
    }
    case 214376:
    {
        returnValue = F("Maler-Heß-Str.");
        break;
    }
    case 214377:
    {
        returnValue = F("Maler-Hiltensperger-Str.");
        break;
    }
    case 214378:
    {
        returnValue = F("Maler-Klecksel-Weg");
        break;
    }
    case 214379:
    {
        returnValue = F("Maler-Koch-Str.");
        break;
    }
    case 214380:
    {
        returnValue = F("Maler-Köster-Str.");
        break;
    }
    case 214381:
    {
        returnValue = F("Maler-Metten-Weg");
        break;
    }
    case 214382:
    {
        returnValue = F("Maler-Müller-Str.");
        break;
    }
    case 214383:
    {
        returnValue = F("Maler-Müller-Weg");
        break;
    }
    case 214384:
    {
        returnValue = F("Maler-Peters-Ecke");
        break;
    }
    case 214385:
    {
        returnValue = F("Maler-Reinhold-Str.");
        break;
    }
    case 214386:
    {
        returnValue = F("Maler-Sauter-Str.");
        break;
    }
    case 214387:
    {
        returnValue = F("Maler-Vogt-Weg");
        break;
    }
    case 214388:
    {
        returnValue = F("Maler-Weiß-Weg");
        break;
    }
    case 214389:
    {
        returnValue = F("Malerecke");
        break;
    }
    case 214390:
    {
        returnValue = F("Malergang");
        break;
    }
    case 214391:
    {
        returnValue = F("Malergasse");
        break;
    }
    case 214392:
    {
        returnValue = F("Malergässchen");
        break;
    }
    case 214393:
    {
        returnValue = F("Malergäßchen");
        break;
    }
    case 214394:
    {
        returnValue = F("Malersbuckel");
        break;
    }
    case 214395:
    {
        returnValue = F("Malerskirchweg");
        break;
    }
    case 214396:
    {
        returnValue = F("Malerstieg");
        break;
    }
    case 214397:
    {
        returnValue = F("Malerstr.");
        break;
    }
    case 214398:
    {
        returnValue = F("Malertwete");
        break;
    }
    case 214399:
    {
        returnValue = F("Malerweg");
        break;
    }
    case 214400:
    {
        returnValue = F("Malerwinkel");
        break;
    }
    case 214401:
    {
        returnValue = F("Malerwinkelweg");
        break;
    }
    case 214402:
    {
        returnValue = F("Malesherber Str.");
        break;
    }
    case 214403:
    {
        returnValue = F("Maletenstr.");
        break;
    }
    case 214404:
    {
        returnValue = F("Malfeld");
        break;
    }
    case 214405:
    {
        returnValue = F("Malgartener Damm");
        break;
    }
    case 214406:
    {
        returnValue = F("Malgartener Str.");
        break;
    }
    case 214407:
    {
        returnValue = F("Malgerstegeweg");
        break;
    }
    case 214408:
    {
        returnValue = F("Malgertsham");
        break;
    }
    case 214409:
    {
        returnValue = F("Malgeser Str.");
        break;
    }
    case 214410:
    {
        returnValue = F("Malgisostr.");
        break;
    }
    case 214411:
    {
        returnValue = F("Malheckenweg");
        break;
    }
    case 214412:
    {
        returnValue = F("Maliante");
        break;
    }
    case 214413:
    {
        returnValue = F("Malinenhof");
        break;
    }
    case 214414:
    {
        returnValue = F("Malinshof");
        break;
    }
    case 214415:
    {
        returnValue = F("Malipieroplatz");
        break;
    }
    case 214416:
    {
        returnValue = F("Malischstr.");
        break;
    }
    case 214417:
    {
        returnValue = F("Malistr.");
        break;
    }
    case 214418:
    {
        returnValue = F("Malitschkendorfer Str.");
        break;
    }
    case 214419:
    {
        returnValue = F("Malittenburgweg");
        break;
    }
    case 214420:
    {
        returnValue = F("Maliweg");
        break;
    }
    case 214421:
    {
        returnValue = F("Malkastenstr.");
        break;
    }
    case 214422:
    {
        returnValue = F("Malkendorfer Str.");
        break;
    }
    case 214423:
    {
        returnValue = F("Malkendorfer Weg");
        break;
    }
    case 214424:
    {
        returnValue = F("Malkeser Str.");
        break;
    }
    case 214425:
    {
        returnValue = F("Malkeser Weg");
        break;
    }
    case 214426:
    {
        returnValue = F("Malkotscher Str.");
        break;
    }
    case 214427:
    {
        returnValue = F("Malkvitz");
        break;
    }
    case 214428:
    {
        returnValue = F("Malkwitz");
        break;
    }
    case 214429:
    {
        returnValue = F("Malkwitzer Weg");
        break;
    }
    case 214430:
    {
        returnValue = F("Mallack");
        break;
    }
    case 214431:
    {
        returnValue = F("Mallaustr.");
        break;
    }
    case 214432:
    {
        returnValue = F("Mallauweg");
        break;
    }
    case 214433:
    {
        returnValue = F("Malleichen");
        break;
    }
    case 214434:
    {
        returnValue = F("Mallendarer Bachgasse");
        break;
    }
    case 214435:
    {
        returnValue = F("Mallendarer Bachtal");
        break;
    }
    case 214436:
    {
        returnValue = F("Mallendorfer Weg");
        break;
    }
    case 214437:
    {
        returnValue = F("Mallener Weg");
        break;
    }
    case 214438:
    {
        returnValue = F("Mallenweg");
        break;
    }
    case 214439:
    {
        returnValue = F("Mallersdorf");
        break;
    }
    case 214440:
    {
        returnValue = F("Mallersdorfer Str.");
        break;
    }
    case 214441:
    {
        returnValue = F("Mallersdorfer Weg");
        break;
    }
    case 214442:
    {
        returnValue = F("Mallershofener Weg");
        break;
    }
    case 214443:
    {
        returnValue = F("Mallersricht");
        break;
    }
    case 214444:
    {
        returnValue = F("Mallersricht-Ziegelhütte");
        break;
    }
    case 214445:
    {
        returnValue = F("Mallertshofener Str.");
        break;
    }
    case 214446:
    {
        returnValue = F("Mallestr.");
        break;
    }
    case 214447:
    {
        returnValue = F("Malletstr.");
        break;
    }
    case 214448:
    {
        returnValue = F("Malletweg");
        break;
    }
    case 214449:
    {
        returnValue = F("Malliehäger Str.");
        break;
    }
    case 214450:
    {
        returnValue = F("Mallinckrodtpark");
        break;
    }
    case 214451:
    {
        returnValue = F("Mallinckrodtplatz");
        break;
    }
    case 214452:
    {
        returnValue = F("Mallinckrodtstr.");
        break;
    }
    case 214453:
    {
        returnValue = F("Mallingerstr.");
        break;
    }
    case 214454:
    {
        returnValue = F("Mallinghausen");
        break;
    }
    case 214455:
    {
        returnValue = F("Mallinghäuser Str.");
        break;
    }
    case 214456:
    {
        returnValue = F("Mallißer Ring");
        break;
    }
    case 214457:
    {
        returnValue = F("Mallmannsteinweg");
        break;
    }
    case 214458:
    {
        returnValue = F("Mallmersdorfer Str.");
        break;
    }
    case 214459:
    {
        returnValue = F("Mallnitzer Str.");
        break;
    }
    case 214460:
    {
        returnValue = F("Mallnitzer Weg");
        break;
    }
    case 214461:
    {
        returnValue = F("Mallnitzstr.");
        break;
    }
    case 214462:
    {
        returnValue = F("Mallnower Dorfstr.");
        break;
    }
    case 214463:
    {
        returnValue = F("Mallnower Str.");
        break;
    }
    case 214464:
    {
        returnValue = F("Mallohweg");
        break;
    }
    case 214465:
    {
        returnValue = F("Mallweg");
        break;
    }
    case 214466:
    {
        returnValue = F("Mallwitzstr.");
        break;
    }
    case 214467:
    {
        returnValue = F("Malmedyer Steig");
        break;
    }
    case 214468:
    {
        returnValue = F("Malmedyer Str.");
        break;
    }
    case 214469:
    {
        returnValue = F("Malmedyer Weg");
        break;
    }
    case 214470:
    {
        returnValue = F("Malmedystr.");
        break;
    }
    case 214471:
    {
        returnValue = F("Malmedyweg");
        break;
    }
    case 214472:
    {
        returnValue = F("Malmen");
        break;
    }
    case 214473:
    {
        returnValue = F("Malmentunnel");
        break;
    }
    case 214474:
    {
        returnValue = F("Malmenweg");
        break;
    }
    case 214475:
    {
        returnValue = F("Malmershaupt");
        break;
    }
    case 214476:
    {
        returnValue = F("Malmerzer Str.");
        break;
    }
    case 214477:
    {
        returnValue = F("Malmesbury Park");
        break;
    }
    case 214478:
    {
        returnValue = F("Malmessiepen");
        break;
    }
    case 214479:
    {
        returnValue = F("Malmkestr.");
        break;
    }
    case 214480:
    {
        returnValue = F("Malmsbacher Weg");
        break;
    }
    case 214481:
    {
        returnValue = F("Malmsheimer Pfad");
        break;
    }
    case 214482:
    {
        returnValue = F("Malmsheimer Str.");
        break;
    }
    case 214483:
    {
        returnValue = F("Malmsheimer Weg");
        break;
    }
    case 214484:
    {
        returnValue = F("Malmsheimerstr.");
        break;
    }
    case 214485:
    {
        returnValue = F("Malmsteg");
        break;
    }
    case 214486:
    {
        returnValue = F("Malmsteg-Süd");
        break;
    }
    case 214487:
    {
        returnValue = F("Malmstr.");
        break;
    }
    case 214488:
    {
        returnValue = F("Malmweg");
        break;
    }
    case 214489:
    {
        returnValue = F("Malmöer Ring");
        break;
    }
    case 214490:
    {
        returnValue = F("Malmöer Str.");
        break;
    }
    case 214491:
    {
        returnValue = F("Malmöstr.");
        break;
    }
    case 214492:
    {
        returnValue = F("Malmöweg");
        break;
    }
    case 214493:
    {
        returnValue = F("Malnstich");
        break;
    }
    case 214494:
    {
        returnValue = F("Malortiestr.");
        break;
    }
    case 214495:
    {
        returnValue = F("Malottenweg");
        break;
    }
    case 214496:
    {
        returnValue = F("Malpendorfer Weg");
        break;
    }
    case 214497:
    {
        returnValue = F("Malritzstr.");
        break;
    }
    case 214498:
    {
        returnValue = F("Malsbendener Auel");
        break;
    }
    case 214499:
    {
        returnValue = F("Malsbergstr.");
        break;
    }
    case 214500:
    {
        returnValue = F("Malsburger Weg");
        break;
    }
    case 214501:
    {
        returnValue = F("Malsburgstr.");
        break;
    }
    case 214502:
    {
        returnValue = F("Malschbach");
        break;
    }
    case 214503:
    {
        returnValue = F("Malschbacher Str.");
        break;
    }
    case 214504:
    {
        returnValue = F("Malschbachstr.");
        break;
    }
    case 214505:
    {
        returnValue = F("Malscheider Weg");
        break;
    }
    case 214506:
    {
        returnValue = F("Malscheidstr.");
        break;
    }
    case 214507:
    {
        returnValue = F("Malschenberger Str.");
        break;
    }
    case 214508:
    {
        returnValue = F("Malschendorfer Str.");
        break;
    }
    case 214509:
    {
        returnValue = F("Malscher Gasse");
        break;
    }
    case 214510:
    {
        returnValue = F("Malscher Str.");
        break;
    }
    case 214511:
    {
        returnValue = F("Malschwitzer Landstr.");
        break;
    }
    case 214512:
    {
        returnValue = F("Malschwitzer Str.");
        break;
    }
    case 214513:
    {
        returnValue = F("Malsener Str.");
        break;
    }
    case 214514:
    {
        returnValue = F("Malsenstr.");
        break;
    }
    case 214515:
    {
        returnValue = F("Malser Str.");
        break;
    }
    case 214516:
    {
        returnValue = F("Malser Weg");
        break;
    }
    case 214517:
    {
        returnValue = F("Malsfelder Str.");
        break;
    }
    case 214518:
    {
        returnValue = F("Malsitzer Weg");
        break;
    }
    case 214519:
    {
        returnValue = F("Malslebener Str.");
        break;
    }
    case 214520:
    {
        returnValue = F("Malspitzer Weg");
        break;
    }
    case 214521:
    {
        returnValue = F("Malstatter Brücke");
        break;
    }
    case 214522:
    {
        returnValue = F("Malstatter Str.");
        break;
    }
    case 214523:
    {
        returnValue = F("Malstattstr.");
        break;
    }
    case 214524:
    {
        returnValue = F("Malstedter Str.");
        break;
    }
    case 214525:
    {
        returnValue = F("Malstätter Str.");
        break;
    }
    case 214526:
    {
        returnValue = F("Malter");
        break;
    }
    case 214527:
    {
        returnValue = F("Maltererstr.");
        break;
    }
    case 214528:
    {
        returnValue = F("Malterhausen Dorf");
        break;
    }
    case 214529:
    {
        returnValue = F("Malterhausen Siedlung");
        break;
    }
    case 214530:
    {
        returnValue = F("Malterhausener Weg");
        break;
    }
    case 214531:
    {
        returnValue = F("Malterscheidtstr.");
        break;
    }
    case 214532:
    {
        returnValue = F("Maltersenweg");
        break;
    }
    case 214533:
    {
        returnValue = F("Malterstr.");
        break;
    }
    case 214534:
    {
        returnValue = F("Malterweg");
        break;
    }
    case 214535:
    {
        returnValue = F("Malteser-Passage");
        break;
    }
    case 214536:
    {
        returnValue = F("Malteser-Wegle");
        break;
    }
    case 214537:
    {
        returnValue = F("Maltesergarten");
        break;
    }
    case 214538:
    {
        returnValue = F("Maltesergasse");
        break;
    }
    case 214539:
    {
        returnValue = F("Maltesergrund");
        break;
    }
    case 214540:
    {
        returnValue = F("Malteserleite");
        break;
    }
    case 214541:
    {
        returnValue = F("Malteserordensstr.");
        break;
    }
    case 214542:
    {
        returnValue = F("Malteserplatz");
        break;
    }
    case 214543:
    {
        returnValue = F("Malteserring");
        break;
    }
    case 214544:
    {
        returnValue = F("Malteserstr.");
        break;
    }
    case 214545:
    {
        returnValue = F("Malteserweg");
        break;
    }
    case 214546:
    {
        returnValue = F("Maltewitzlinie");
        break;
    }
    case 214547:
    {
        returnValue = F("Maltheserstr.");
        break;
    }
    case 214548:
    {
        returnValue = F("Maltis");
        break;
    }
    case 214549:
    {
        returnValue = F("Maltitz");
        break;
    }
    case 214550:
    {
        returnValue = F("Maltitzer Weg");
        break;
    }
    case 214551:
    {
        returnValue = F("Maltitzpfad");
        break;
    }
    case 214552:
    {
        returnValue = F("Maltschachstr.");
        break;
    }
    case 214553:
    {
        returnValue = F("Maltwies");
        break;
    }
    case 214554:
    {
        returnValue = F("Maltzanstr.");
        break;
    }
    case 214555:
    {
        returnValue = F("Maltzien");
        break;
    }
    case 214556:
    {
        returnValue = F("Maltzstr.");
        break;
    }
    case 214557:
    {
        returnValue = F("Malusgarten");
        break;
    }
    case 214558:
    {
        returnValue = F("Malusiusstr.");
        break;
    }
    case 214559:
    {
        returnValue = F("Malvenbogen");
        break;
    }
    case 214560:
    {
        returnValue = F("Malvenhang");
        break;
    }
    case 214561:
    {
        returnValue = F("Malvenkamp");
        break;
    }
    case 214562:
    {
        returnValue = F("Malvenplatz");
        break;
    }
    case 214563:
    {
        returnValue = F("Malvenring");
        break;
    }
    case 214564:
    {
        returnValue = F("Malvenstieg");
        break;
    }
    case 214565:
    {
        returnValue = F("Malvenstr.");
        break;
    }
    case 214566:
    {
        returnValue = F("Malvenweg");
        break;
    }
    case 214567:
    {
        returnValue = F("Malvenwerg");
        break;
    }
    case 214568:
    {
        returnValue = F("Malvestr.");
        break;
    }
    case 214569:
    {
        returnValue = F("Malvidastr.");
        break;
    }
    case 214570:
    {
        returnValue = F("Malvine-Schiesser-Weg");
        break;
    }
    case 214571:
    {
        returnValue = F("Malwine-Enckhausen-Weg");
        break;
    }
    case 214572:
    {
        returnValue = F("Malxeweg");
        break;
    }
    case 214573:
    {
        returnValue = F("Maly-Delschaft-Weg");
        break;
    }
    case 214574:
    {
        returnValue = F("Malzackerweg");
        break;
    }
    case 214575:
    {
        returnValue = F("Malzbachstr.");
        break;
    }
    case 214576:
    {
        returnValue = F("Malzberg");
        break;
    }
    case 214577:
    {
        returnValue = F("Malzbrache");
        break;
    }
    case 214578:
    {
        returnValue = F("Malzenbühnd");
        break;
    }
    case 214579:
    {
        returnValue = F("Malzer Chaussee");
        break;
    }
    case 214580:
    {
        returnValue = F("Malzer Dorfstr.");
        break;
    }
    case 214581:
    {
        returnValue = F("Malzer Wald");
        break;
    }
    case 214582:
    {
        returnValue = F("Malzer Weg");
        break;
    }
    case 214583:
    {
        returnValue = F("Malzeviller Platz");
        break;
    }
    case 214584:
    {
        returnValue = F("Malzfabrikstr.");
        break;
    }
    case 214585:
    {
        returnValue = F("Malzgasse");
        break;
    }
    case 214586:
    {
        returnValue = F("Malzgraben");
        break;
    }
    case 214587:
    {
        returnValue = F("Malzhagener Str.");
        break;
    }
    case 214588:
    {
        returnValue = F("Malzhauser Str.");
        break;
    }
    case 214589:
    {
        returnValue = F("Malzhausgasse");
        break;
    }
    case 214590:
    {
        returnValue = F("Malzhausstr.");
        break;
    }
    case 214591:
    {
        returnValue = F("Malzhausweg");
        break;
    }
    case 214592:
    {
        returnValue = F("Malzholzweg");
        break;
    }
    case 214593:
    {
        returnValue = F("Malzhügel");
        break;
    }
    case 214594:
    {
        returnValue = F("Malzmache");
        break;
    }
    case 214595:
    {
        returnValue = F("Malzmühlenberg");
        break;
    }
    case 214596:
    {
        returnValue = F("Malzmühlstr.");
        break;
    }
    case 214597:
    {
        returnValue = F("Malzmühlweg");
        break;
    }
    case 214598:
    {
        returnValue = F("Malzower Maurinetal");
        break;
    }
    case 214599:
    {
        returnValue = F("Malzplan");
        break;
    }
    case 214600:
    {
        returnValue = F("Malzstr.");
        break;
    }
    case 214601:
    {
        returnValue = F("Malzteichstr.");
        break;
    }
    case 214602:
    {
        returnValue = F("Malzweg");
        break;
    }
    case 214603:
    {
        returnValue = F("Malßen Berg");
        break;
    }
    case 214604:
    {
        returnValue = F("Malßstr.");
        break;
    }
    case 214605:
    {
        returnValue = F("Mambachstr.");
        break;
    }
    case 214606:
    {
        returnValue = F("Mambachtalstr.");
        break;
    }
    case 214607:
    {
        returnValue = F("Mamburger Str.");
        break;
    }
    case 214608:
    {
        returnValue = F("Mamburger Weg");
        break;
    }
    case 214609:
    {
        returnValue = F("Mambächeler Str.");
        break;
    }
    case 214610:
    {
        returnValue = F("Mamersweg");
        break;
    }
    case 214611:
    {
        returnValue = F("Mamertus-Perzlmayer-Str.");
        break;
    }
    case 214612:
    {
        returnValue = F("Mamertusstr.");
        break;
    }
    case 214613:
    {
        returnValue = F("Mamhofen");
        break;
    }
    case 214614:
    {
        returnValue = F("Mamhofener Str.");
        break;
    }
    case 214615:
    {
        returnValue = F("Mamhofener Weg");
        break;
    }
    case 214616:
    {
        returnValue = F("Mamhofer Weg");
        break;
    }
    case 214617:
    {
        returnValue = F("Mamme-Folkardus-Weg");
        break;
    }
    case 214618:
    {
        returnValue = F("Mammendorfer Str.");
        break;
    }
    case 214619:
    {
        returnValue = F("Mammendorfer Weg");
        break;
    }
    case 214620:
    {
        returnValue = F("Mammenstr.");
        break;
    }
    case 214621:
    {
        returnValue = F("Mammental");
        break;
    }
    case 214622:
    {
        returnValue = F("Mammhuser Weg");
        break;
    }
    case 214623:
    {
        returnValue = F("Mamminger Str.");
        break;
    }
    case 214624:
    {
        returnValue = F("Mammolshainer Str.");
        break;
    }
    case 214625:
    {
        returnValue = F("Mammolshainer Weg");
        break;
    }
    case 214626:
    {
        returnValue = F("Mammostr.");
        break;
    }
    case 214627:
    {
        returnValue = F("Mammutbaumallee");
        break;
    }
    case 214628:
    {
        returnValue = F("Mammutbogen");
        break;
    }
    case 214629:
    {
        returnValue = F("Mammutpfad");
        break;
    }
    case 214630:
    {
        returnValue = F("Mammutring");
        break;
    }
    case 214631:
    {
        returnValue = F("Mammutstr.");
        break;
    }
    case 214632:
    {
        returnValue = F("Mamreweg");
        break;
    }
    case 214633:
    {
        returnValue = F("Mamsell-Westphalen-Weg");
        break;
    }
    case 214634:
    {
        returnValue = F("Manasserstr.");
        break;
    }
    case 214635:
    {
        returnValue = F("Manau");
        break;
    }
    case 214636:
    {
        returnValue = F("Manauer Str.");
        break;
    }
    case 214637:
    {
        returnValue = F("Manbachweg");
        break;
    }
    case 214638:
    {
        returnValue = F("Manbergstr.");
        break;
    }
    case 214639:
    {
        returnValue = F("Manchertalstr.");
        break;
    }
    case 214640:
    {
        returnValue = F("Manchesterplatz");
        break;
    }
    case 214641:
    {
        returnValue = F("Manchesterstr.");
        break;
    }
    case 214642:
    {
        returnValue = F("Manchinger Str.");
        break;
    }
    case 214643:
    {
        returnValue = F("Manchotstr.");
        break;
    }
    case 214644:
    {
        returnValue = F("Mancinusweg");
        break;
    }
    case 214645:
    {
        returnValue = F("Mandarinenweg");
        break;
    }
    case 214646:
    {
        returnValue = F("Mandauer Berg");
        break;
    }
    case 214647:
    {
        returnValue = F("Mandaustr.");
        break;
    }
    case 214648:
    {
        returnValue = F("Mandauufer");
        break;
    }
    case 214649:
    {
        returnValue = F("Mandauweg");
        break;
    }
    case 214650:
    {
        returnValue = F("Mandelas Pfad");
        break;
    }
    case 214651:
    {
        returnValue = F("Mandelastr.");
        break;
    }
    case 214652:
    {
        returnValue = F("Mandelbachstr.");
        break;
    }
    case 214653:
    {
        returnValue = F("Mandelbachweg");
        break;
    }
    case 214654:
    {
        returnValue = F("Mandelbaumpfad");
        break;
    }
    case 214655:
    {
        returnValue = F("Mandelbaumstr.");
        break;
    }
    case 214656:
    {
        returnValue = F("Mandelbaumweg");
        break;
    }
    case 214657:
    {
        returnValue = F("Mandelbecker Landstr.");
        break;
    }
    case 214658:
    {
        returnValue = F("Mandelbecker Str.");
        break;
    }
    case 214659:
    {
        returnValue = F("Mandelberg");
        break;
    }
    case 214660:
    {
        returnValue = F("Mandelbergerhof");
        break;
    }
    case 214661:
    {
        returnValue = F("Mandelbergstr.");
        break;
    }
    case 214662:
    {
        returnValue = F("Mandelblütenstr.");
        break;
    }
    case 214663:
    {
        returnValue = F("Mandelblütenweg");
        break;
    }
    case 214664:
    {
        returnValue = F("Mandelbrunnen");
        break;
    }
    case 214665:
    {
        returnValue = F("Mandelburgweg");
        break;
    }
    case 214666:
    {
        returnValue = F("Mandeler Weg");
        break;
    }
    case 214667:
    {
        returnValue = F("Mandelgasse");
        break;
    }
    case 214668:
    {
        returnValue = F("Mandelhof");
        break;
    }
    case 214669:
    {
        returnValue = F("Mandelhol");
        break;
    }
    case 214670:
    {
        returnValue = F("Mandelholz");
        break;
    }
    case 214671:
    {
        returnValue = F("Mandelholzer Fußweg");
        break;
    }
    case 214672:
    {
        returnValue = F("Mandelholzstr.");
        break;
    }
    case 214673:
    {
        returnValue = F("Mandelner Weg");
        break;
    }
    case 214674:
    {
        returnValue = F("Mandelnstr.");
        break;
    }
    case 214675:
    {
        returnValue = F("Mandelring");
        break;
    }
    case 214676:
    {
        returnValue = F("Mandelsloher Str.");
        break;
    }
    case 214677:
    {
        returnValue = F("Mandelsloher Weg");
        break;
    }
    case 214678:
    {
        returnValue = F("Mandelslohstr.");
        break;
    }
    case 214679:
    {
        returnValue = F("Mandelstr.");
        break;
    }
    case 214680:
    {
        returnValue = F("Mandelweg");
        break;
    }
    case 214681:
    {
        returnValue = F("Mandepolderweg");
        break;
    }
    case 214682:
    {
        returnValue = F("Manderbacher Str.");
        break;
    }
    case 214683:
    {
        returnValue = F("Manderbacher Weg");
        break;
    }
    case 214684:
    {
        returnValue = F("Manderner Str.");
        break;
    }
    case 214685:
    {
        returnValue = F("Manderner Weg");
        break;
    }
    case 214686:
    {
        returnValue = F("Manderower Weg");
        break;
    }
    case 214687:
    {
        returnValue = F("Manderscheider Platz");
        break;
    }
    case 214688:
    {
        returnValue = F("Manderscheider Str.");
        break;
    }
    case 214689:
    {
        returnValue = F("Manderscheider Weg");
        break;
    }
    case 214690:
    {
        returnValue = F("Manderscheidtstr.");
        break;
    }
    case 214691:
    {
        returnValue = F("Mandeweg");
        break;
    }
    case 214692:
    {
        returnValue = F("Mandlacher Weg");
        break;
    }
    case 214693:
    {
        returnValue = F("Mandlachweg");
        break;
    }
    case 214694:
    {
        returnValue = F("Mandlau");
        break;
    }
    case 214695:
    {
        returnValue = F("Mandlberg");
        break;
    }
    case 214696:
    {
        returnValue = F("Mandlerweg");
        break;
    }
    case 214697:
    {
        returnValue = F("Mandlfeld");
        break;
    }
    case 214698:
    {
        returnValue = F("Mandlingweg");
        break;
    }
    case 214699:
    {
        returnValue = F("Mandlstr.");
        break;
    }
    case 214700:
    {
        returnValue = F("Mandlweg");
        break;
    }
    case 214701:
    {
        returnValue = F("Mandolinenweg");
        break;
    }
    case 214702:
    {
        returnValue = F("Mandrystr.");
        break;
    }
    case 214703:
    {
        returnValue = F("Mandschurenkraniche");
        break;
    }
    case 214704:
    {
        returnValue = F("Mandtgasse");
        break;
    }
    case 214705:
    {
        returnValue = F("Mandtstr.");
        break;
    }
    case 214706:
    {
        returnValue = F("Maneckestr.");
        break;
    }
    case 214707:
    {
        returnValue = F("Maneckeweg");
        break;
    }
    case 214708:
    {
        returnValue = F("Maneesch");
        break;
    }
    case 214709:
    {
        returnValue = F("Manegold-Gasse");
        break;
    }
    case 214710:
    {
        returnValue = F("Manegoldstr.");
        break;
    }
    case 214711:
    {
        returnValue = F("Manentalstr.");
        break;
    }
    case 214712:
    {
        returnValue = F("Manetstr.");
        break;
    }
    case 214713:
    {
        returnValue = F("Manforter Str.");
        break;
    }
    case 214714:
    {
        returnValue = F("Manfred-Behr-Str.");
        break;
    }
    case 214715:
    {
        returnValue = F("Manfred-Billinger-Str.");
        break;
    }
    case 214716:
    {
        returnValue = F("Manfred-Brüning-Weg");
        break;
    }
    case 214717:
    {
        returnValue = F("Manfred-Capellmann-Str.");
        break;
    }
    case 214718:
    {
        returnValue = F("Manfred-Faber-Weg");
        break;
    }
    case 214719:
    {
        returnValue = F("Manfred-Fuchs-Str.");
        break;
    }
    case 214720:
    {
        returnValue = F("Manfred-Hausmann-Str.");
        break;
    }
    case 214721:
    {
        returnValue = F("Manfred-Hausmann-Weg");
        break;
    }
    case 214722:
    {
        returnValue = F("Manfred-Henninger-Weg");
        break;
    }
    case 214723:
    {
        returnValue = F("Manfred-Herrmann-Weg");
        break;
    }
    case 214724:
    {
        returnValue = F("Manfred-Hildenbrand-Str.");
        break;
    }
    case 214725:
    {
        returnValue = F("Manfred-Hochhaus-Str.");
        break;
    }
    case 214726:
    {
        returnValue = F("Manfred-Hochstatter-Str.");
        break;
    }
    case 214727:
    {
        returnValue = F("Manfred-Hollenbach-Weg");
        break;
    }
    case 214728:
    {
        returnValue = F("Manfred-Kastner-Weg");
        break;
    }
    case 214729:
    {
        returnValue = F("Manfred-Klaiber-Str.");
        break;
    }
    case 214730:
    {
        returnValue = F("Manfred-Knieß-Str.");
        break;
    }
    case 214731:
    {
        returnValue = F("Manfred-Kyber-Str.");
        break;
    }
    case 214732:
    {
        returnValue = F("Manfred-Linden-Ring");
        break;
    }
    case 214733:
    {
        returnValue = F("Manfred-Oechsle-Platz");
        break;
    }
    case 214734:
    {
        returnValue = F("Manfred-Pahl-Weg");
        break;
    }
    case 214735:
    {
        returnValue = F("Manfred-Raumberger-Str.");
        break;
    }
    case 214736:
    {
        returnValue = F("Manfred-Roth-Str.");
        break;
    }
    case 214737:
    {
        returnValue = F("Manfred-Rothe-Weg");
        break;
    }
    case 214738:
    {
        returnValue = F("Manfred-Römbell-Weg");
        break;
    }
    case 214739:
    {
        returnValue = F("Manfred-Samusch-Str.");
        break;
    }
    case 214740:
    {
        returnValue = F("Manfred-Schweikert-Str.");
        break;
    }
    case 214741:
    {
        returnValue = F("Manfred-Schöne-Str.");
        break;
    }
    case 214742:
    {
        returnValue = F("Manfred-Settele-Str.");
        break;
    }
    case 214743:
    {
        returnValue = F("Manfred-Stern-Str.");
        break;
    }
    case 214744:
    {
        returnValue = F("Manfred-Stoewenau-Weg");
        break;
    }
    case 214745:
    {
        returnValue = F("Manfred-Streubel-Weg");
        break;
    }
    case 214746:
    {
        returnValue = F("Manfred-Strößenreuter-Str.");
        break;
    }
    case 214747:
    {
        returnValue = F("Manfred-Stumpf-Str.");
        break;
    }
    case 214748:
    {
        returnValue = F("Manfred-Vetter-Str.");
        break;
    }
    case 214749:
    {
        returnValue = F("Manfred-Wankmüller-Str.");
        break;
    }
    case 214750:
    {
        returnValue = F("Manfred-Wirth-Weg");
        break;
    }
    case 214751:
    {
        returnValue = F("Manfred-Wörner-Platz");
        break;
    }
    case 214752:
    {
        returnValue = F("Manfred-Wörner-Str.");
        break;
    }
    case 214753:
    {
        returnValue = F("Manfred-von-Ardenne-Ring");
        break;
    }
    case 214754:
    {
        returnValue = F("Manfred-von-Ardenne-Str.");
        break;
    }
    case 214755:
    {
        returnValue = F("Manfred-von-Richthofen-Str.");
        break;
    }
    case 214756:
    {
        returnValue = F("Manfredstr.");
        break;
    }
    case 214757:
    {
        returnValue = F("Manfredweg");
        break;
    }
    case 214758:
    {
        returnValue = F("Mangangrube");
        break;
    }
    case 214759:
    {
        returnValue = F("Manganstr.");
        break;
    }
    case 214760:
    {
        returnValue = F("Manganweg");
        break;
    }
    case 214761:
    {
        returnValue = F("Mangelgasse");
        break;
    }
    case 214762:
    {
        returnValue = F("Mangelhauser Str.");
        break;
    }
    case 214763:
    {
        returnValue = F("Mangelsbach");
        break;
    }
    case 214764:
    {
        returnValue = F("Mangelsdorfstr.");
        break;
    }
    case 214765:
    {
        returnValue = F("Mangelsfeld");
        break;
    }
    case 214766:
    {
        returnValue = F("Mangelsweg");
        break;
    }
    case 214767:
    {
        returnValue = F("Mangenberg Park");
        break;
    }
    case 214768:
    {
        returnValue = F("Mangenberger Str.");
        break;
    }
    case 214769:
    {
        returnValue = F("Mangenhalde");
        break;
    }
    case 214770:
    {
        returnValue = F("Mangenhofweg");
        break;
    }
    case 214771:
    {
        returnValue = F("Mangenstr.");
        break;
    }
    case 214772:
    {
        returnValue = F("Mangentalweg");
        break;
    }
    case 214773:
    {
        returnValue = F("Mangenweg");
        break;
    }
    case 214774:
    {
        returnValue = F("Mangenweiherweg");
        break;
    }
    case 214775:
    {
        returnValue = F("Mangersgasse");
        break;
    }
    case 214776:
    {
        returnValue = F("Mangersreuther Friedhofsweg");
        break;
    }
    case 214777:
    {
        returnValue = F("Mangersreuther Str.");
        break;
    }
    case 214778:
    {
        returnValue = F("Mangerstr.");
        break;
    }
    case 214779:
    {
        returnValue = F("Mangfallpark Nord");
        break;
    }
    case 214780:
    {
        returnValue = F("Mangfallpark Süd");
        break;
    }
    case 214781:
    {
        returnValue = F("Mangfallplatz");
        break;
    }
    case 214782:
    {
        returnValue = F("Mangfallring");
        break;
    }
    case 214783:
    {
        returnValue = F("Mangfallsteg");
        break;
    }
    case 214784:
    {
        returnValue = F("Mangfallstr.");
        break;
    }
    case 214785:
    {
        returnValue = F("Mangfallweg");
        break;
    }
    case 214786:
    {
        returnValue = F("Manggasse");
        break;
    }
    case 214787:
    {
        returnValue = F("Manghausplatz");
        break;
    }
    case 214788:
    {
        returnValue = F("Mangholzgasse");
        break;
    }
    case 214789:
    {
        returnValue = F("Manghöhe");
        break;
    }
    case 214790:
    {
        returnValue = F("Manglersweg");
        break;
    }
    case 214791:
    {
        returnValue = F("Mangmühlenweg");
        break;
    }
    case 214792:
    {
        returnValue = F("Mangmühlweg");
        break;
    }
    case 214793:
    {
        returnValue = F("Mangoldgasse");
        break;
    }
    case 214794:
    {
        returnValue = F("Mangoldinger Str.");
        break;
    }
    case 214795:
    {
        returnValue = F("Mangoldsgasse");
        break;
    }
    case 214796:
    {
        returnValue = F("Mangoldstr.");
        break;
    }
    case 214797:
    {
        returnValue = F("Mangoldsweg");
        break;
    }
    case 214798:
    {
        returnValue = F("Mangoldtstr.");
        break;
    }
    case 214799:
    {
        returnValue = F("Mangoldweg");
        break;
    }
    case 214800:
    {
        returnValue = F("Mangplatz");
        break;
    }
    case 214801:
    {
        returnValue = F("Mangrovenweg");
        break;
    }
    case 214802:
    {
        returnValue = F("Mangstr.");
        break;
    }
    case 214803:
    {
        returnValue = F("Mangweg");
        break;
    }
    case 214804:
    {
        returnValue = F("Manhagen");
        break;
    }
    case 214805:
    {
        returnValue = F("Manhagener Allee");
        break;
    }
    case 214806:
    {
        returnValue = F("Manhagener Weg");
        break;
    }
    case 214807:
    {
        returnValue = F("Manhardtsgasse");
        break;
    }
    case 214808:
    {
        returnValue = F("Manhardtwinkl");
        break;
    }
    case 214809:
    {
        returnValue = F("Manhartsdorf");
        break;
    }
    case 214810:
    {
        returnValue = F("Manhartstr.");
        break;
    }
    case 214811:
    {
        returnValue = F("Manheimer Ring");
        break;
    }
    case 214812:
    {
        returnValue = F("Manheimer Str.");
        break;
    }
    case 214813:
    {
        returnValue = F("Manheimerstr.");
        break;
    }
    case 214814:
    {
        returnValue = F("Manhennenweg");
        break;
    }
    case 214815:
    {
        returnValue = F("Manholdinger Str.");
        break;
    }
    case 214816:
    {
        returnValue = F("Manhomer Str.");
        break;
    }
    case 214817:
    {
        returnValue = F("Manhorner Str.");
        break;
    }
    case 214818:
    {
        returnValue = F("Manigoldstr.");
        break;
    }
    case 214819:
    {
        returnValue = F("Manitiusstr.");
        break;
    }
    case 214820:
    {
        returnValue = F("Manitoba-Str.");
        break;
    }
    case 214821:
    {
        returnValue = F("Mankenbach");
        break;
    }
    case 214822:
    {
        returnValue = F("Mankenbitzstr.");
        break;
    }
    case 214823:
    {
        returnValue = F("Mankham");
        break;
    }
    case 214824:
    {
        returnValue = F("Mankhauser Pött");
        break;
    }
    case 214825:
    {
        returnValue = F("Mankhauser Str.");
        break;
    }
    case 214826:
    {
        returnValue = F("Mankmooser Str.");
        break;
    }
    case 214827:
    {
        returnValue = F("Mankmußer Dorfstr.");
        break;
    }
    case 214828:
    {
        returnValue = F("Manlichstr.");
        break;
    }
    case 214829:
    {
        returnValue = F("Mannacker");
        break;
    }
    case 214830:
    {
        returnValue = F("Mannagasse");
        break;
    }
    case 214831:
    {
        returnValue = F("Mannastr.");
        break;
    }
    case 214832:
    {
        returnValue = F("Mannbachweg");
        break;
    }
    case 214833:
    {
        returnValue = F("Mannebacher Str.");
        break;
    }
    case 214834:
    {
        returnValue = F("Mannecker");
        break;
    }
    case 214835:
    {
        returnValue = F("Mannelsfelder Weg");
        break;
    }
    case 214836:
    {
        returnValue = F("Mannelstr.");
        break;
    }
    case 214837:
    {
        returnValue = F("Mannemorsumtal");
        break;
    }
    case 214838:
    {
        returnValue = F("Mannenbachheide Weg");
        break;
    }
    case 214839:
    {
        returnValue = F("Mannenberger Str.");
        break;
    }
    case 214840:
    {
        returnValue = F("Mannenberger Weg");
        break;
    }
    case 214841:
    {
        returnValue = F("Mannenbergweg");
        break;
    }
    case 214842:
    {
        returnValue = F("Mannengasse");
        break;
    }
    case 214843:
    {
        returnValue = F("Mannengraben");
        break;
    }
    case 214844:
    {
        returnValue = F("Mannenstr.");
        break;
    }
    case 214845:
    {
        returnValue = F("Mannenweg");
        break;
    }
    case 214846:
    {
        returnValue = F("Mannenweiler");
        break;
    }
    case 214847:
    {
        returnValue = F("Mannenweiler Str.");
        break;
    }
    case 214848:
    {
        returnValue = F("Mannerbachstr.");
        break;
    }
    case 214849:
    {
        returnValue = F("Mannertalstr.");
        break;
    }
    case 214850:
    {
        returnValue = F("Mannertstr.");
        break;
    }
    case 214851:
    {
        returnValue = F("Mannesmannallee");
        break;
    }
    case 214852:
    {
        returnValue = F("Mannesmannstr.");
        break;
    }
    case 214853:
    {
        returnValue = F("Mannesmannufer");
        break;
    }
    case 214854:
    {
        returnValue = F("Mannesstr.");
        break;
    }
    case 214855:
    {
        returnValue = F("Manneweg");
        break;
    }
    case 214856:
    {
        returnValue = F("Mannfeldstr.");
        break;
    }
    case 214857:
    {
        returnValue = F("Manngartenstr.");
        break;
    }
    case 214858:
    {
        returnValue = F("Mannhagener Str.");
        break;
    }
    case 214859:
    {
        returnValue = F("Mannhagener Weg");
        break;
    }
    case 214860:
    {
        returnValue = F("Mannhardtstr.");
        break;
    }
    case 214861:
    {
        returnValue = F("Mannheim");
        break;
    }
    case 214862:
    {
        returnValue = F("Mannheimer Landstr.");
        break;
    }
    case 214863:
    {
        returnValue = F("Mannheimer Platz");
        break;
    }
    case 214864:
    {
        returnValue = F("Mannheimer Staffel");
        break;
    }
    case 214865:
    {
        returnValue = F("Mannheimer Str.");
        break;
    }
    case 214866:
    {
        returnValue = F("Mannheimer Weg");
        break;
    }
    case 214867:
    {
        returnValue = F("Mannheimplatz");
        break;
    }
    case 214868:
    {
        returnValue = F("Mannheimstr.");
        break;
    }
    case 214869:
    {
        returnValue = F("Mannhirzleweg");
        break;
    }
    case 214870:
    {
        returnValue = F("Mannhofer Str.");
        break;
    }
    case 214871:
    {
        returnValue = F("Mannholz");
        break;
    }
    case 214872:
    {
        returnValue = F("Mannholzer Str.");
        break;
    }
    case 214873:
    {
        returnValue = F("Mannhäger Str.");
        break;
    }
    case 214874:
    {
        returnValue = F("Mannhäuser Str.");
        break;
    }
    case 214875:
    {
        returnValue = F("Mannichswalder Platz");
        break;
    }
    case 214876:
    {
        returnValue = F("Mannichswalder Str.");
        break;
    }
    case 214877:
    {
        returnValue = F("Manningastr.");
        break;
    }
    case 214878:
    {
        returnValue = F("Manningaweg");
        break;
    }
    case 214879:
    {
        returnValue = F("Manniskestr.");
        break;
    }
    case 214880:
    {
        returnValue = F("Mannlehen");
        break;
    }
    case 214881:
    {
        returnValue = F("Mannlehenweg");
        break;
    }
    case 214882:
    {
        returnValue = F("Mannlichplatz");
        break;
    }
    case 214883:
    {
        returnValue = F("Mannlichsbrunnengasse");
        break;
    }
    case 214884:
    {
        returnValue = F("Mannlichstr.");
        break;
    }
    case 214885:
    {
        returnValue = F("Mannsbergstr.");
        break;
    }
    case 214886:
    {
        returnValue = F("Mannschatzer Str.");
        break;
    }
    case 214887:
    {
        returnValue = F("Mannsdorf");
        break;
    }
    case 214888:
    {
        returnValue = F("Mannsdorfer Str.");
        break;
    }
    case 214889:
    {
        returnValue = F("Mannseestr.");
        break;
    }
    case 214890:
    {
        returnValue = F("Mannseicher Str.");
        break;
    }
    case 214891:
    {
        returnValue = F("Mannsfelder Str.");
        break;
    }
    case 214892:
    {
        returnValue = F("Mannsflurer Weg");
        break;
    }
    case 214893:
    {
        returnValue = F("Mannsgereuther Weg");
        break;
    }
    case 214894:
    {
        returnValue = F("Mannsgrabenweg");
        break;
    }
    case 214895:
    {
        returnValue = F("Mannshofweg");
        break;
    }
    case 214896:
    {
        returnValue = F("Mannslohweg");
        break;
    }
    case 214897:
    {
        returnValue = F("Mannsnetterstr.");
        break;
    }
    case 214898:
    {
        returnValue = F("Mannspergerstr.");
        break;
    }
    case 214899:
    {
        returnValue = F("Mannspergerweg");
        break;
    }
    case 214900:
    {
        returnValue = F("Mannsrütteweg");
        break;
    }
    case 214901:
    {
        returnValue = F("Mannsstr.");
        break;
    }
    case 214902:
    {
        returnValue = F("Mannstaedtstr.");
        break;
    }
    case 214903:
    {
        returnValue = F("Mannstedter Str.");
        break;
    }
    case 214904:
    {
        returnValue = F("Mannstr.");
        break;
    }
    case 214905:
    {
        returnValue = F("Mannsweg");
        break;
    }
    case 214906:
    {
        returnValue = F("Mannteilsweg");
        break;
    }
    case 214907:
    {
        returnValue = F("Mannwaldstr.");
        break;
    }
    case 214908:
    {
        returnValue = F("Mannwerk");
        break;
    }
    case 214909:
    {
        returnValue = F("Manomer Weg");
        break;
    }
    case 214910:
    {
        returnValue = F("Manosquer Str.");
        break;
    }
    case 214911:
    {
        returnValue = F("Manrade");
        break;
    }
    case 214912:
    {
        returnValue = F("Manroder Str.");
        break;
    }
    case 214913:
    {
        returnValue = F("Manroder Weg");
        break;
    }
    case 214914:
    {
        returnValue = F("Manroth");
        break;
    }
    case 214915:
    {
        returnValue = F("Mansbacher Str.");
        break;
    }
    case 214916:
    {
        returnValue = F("Mansbacher Weg");
        break;
    }
    case 214917:
    {
        returnValue = F("Mansberg");
        break;
    }
    case 214918:
    {
        returnValue = F("Manscheid");
        break;
    }
    case 214919:
    {
        returnValue = F("Manscheider Str.");
        break;
    }
    case 214920:
    {
        returnValue = F("Manschenhäger Str.");
        break;
    }
    case 214921:
    {
        returnValue = F("Mansegang");
        break;
    }
    case 214922:
    {
        returnValue = F("Manseifen");
        break;
    }
    case 214923:
    {
        returnValue = F("Mansfelder Grund");
        break;
    }
    case 214924:
    {
        returnValue = F("Mansfelder Ring");
        break;
    }
    case 214925:
    {
        returnValue = F("Mansfelder Str.");
        break;
    }
    case 214926:
    {
        returnValue = F("Mansfelder Weg");
        break;
    }
    case 214927:
    {
        returnValue = F("Mansfeldsteig");
        break;
    }
    case 214928:
    {
        returnValue = F("Mansfeldstr.");
        break;
    }
    case 214929:
    {
        returnValue = F("Mansfeldweg");
        break;
    }
    case 214930:
    {
        returnValue = F("Mansfieldplatz");
        break;
    }
    case 214931:
    {
        returnValue = F("Mansgasse");
        break;
    }
    case 214932:
    {
        returnValue = F("Mansholter Str.");
        break;
    }
    case 214933:
    {
        returnValue = F("Manskestr.");
        break;
    }
    case 214934:
    {
        returnValue = F("Manskopfstr.");
        break;
    }
    case 214935:
    {
        returnValue = F("Manskuhlenberg");
        break;
    }
    case 214936:
    {
        returnValue = F("Manslagter Dörpstraat");
        break;
    }
    case 214937:
    {
        returnValue = F("Manslagter Innweg");
        break;
    }
    case 214938:
    {
        returnValue = F("Manslagter Reihe");
        break;
    }
    case 214939:
    {
        returnValue = F("Manslagter Ring");
        break;
    }
    case 214940:
    {
        returnValue = F("Mansler Str.");
        break;
    }
    case 214941:
    {
        returnValue = F("Mansoweg");
        break;
    }
    case 214942:
    {
        returnValue = F("Manssen-Gasse");
        break;
    }
    case 214943:
    {
        returnValue = F("Manstadtstr.");
        break;
    }
    case 214944:
    {
        returnValue = F("Manstedtener Berg");
        break;
    }
    case 214945:
    {
        returnValue = F("Manstedtener Str.");
        break;
    }
    case 214946:
    {
        returnValue = F("Manstedtener Weg");
        break;
    }
    case 214947:
    {
        returnValue = F("Manstedter Weg");
        break;
    }
    case 214948:
    {
        returnValue = F("Manstein Brücke");
        break;
    }
    case 214949:
    {
        returnValue = F("Mansteinstr.");
        break;
    }
    case 214950:
    {
        returnValue = F("Mantelbergstr.");
        break;
    }
    case 214951:
    {
        returnValue = F("Mantelbergweg");
        break;
    }
    case 214952:
    {
        returnValue = F("Manteler Str.");
        break;
    }
    case 214953:
    {
        returnValue = F("Manteler Weg");
        break;
    }
    case 214954:
    {
        returnValue = F("Mantelfeld");
        break;
    }
    case 214955:
    {
        returnValue = F("Mantelfeldstr.");
        break;
    }
    case 214956:
    {
        returnValue = F("Mantelhofer Weg");
        break;
    }
    case 214957:
    {
        returnValue = F("Mantelhofstr.");
        break;
    }
    case 214958:
    {
        returnValue = F("Mantelkam");
        break;
    }
    case 214959:
    {
        returnValue = F("Mantell-Str.");
        break;
    }
    case 214960:
    {
        returnValue = F("Mantelsteig");
        break;
    }
    case 214961:
    {
        returnValue = F("Mantelstr.");
        break;
    }
    case 214962:
    {
        returnValue = F("Mantelsträßchen");
        break;
    }
    case 214963:
    {
        returnValue = F("Mantelweg");
        break;
    }
    case 214964:
    {
        returnValue = F("Mantershagener Str.");
        break;
    }
    case 214965:
    {
        returnValue = F("Mantes-La-Ville-Platz");
        break;
    }
    case 214966:
    {
        returnValue = F("Manteuffel-Anlage");
        break;
    }
    case 214967:
    {
        returnValue = F("Manteuffelplatz");
        break;
    }
    case 214968:
    {
        returnValue = F("Manteuffelstr.");
        break;
    }
    case 214969:
    {
        returnValue = F("Manthenstr.");
        break;
    }
    case 214970:
    {
        returnValue = F("Mantigostr.");
        break;
    }
    case 214971:
    {
        returnValue = F("Mantinghauser Str.");
        break;
    }
    case 214972:
    {
        returnValue = F("Mantiusstr.");
        break;
    }
    case 214973:
    {
        returnValue = F("Mantlach");
        break;
    }
    case 214974:
    {
        returnValue = F("Mantlacher Str.");
        break;
    }
    case 214975:
    {
        returnValue = F("Mantlacher Weg");
        break;
    }
    case 214976:
    {
        returnValue = F("Mantlachtrail01(KM)");
        break;
    }
    case 214977:
    {
        returnValue = F("Mantlarner Str.");
        break;
    }
    case 214978:
    {
        returnValue = F("Mantzelstr.");
        break;
    }
    case 214979:
    {
        returnValue = F("Mantzentalweg");
        break;
    }
    case 214980:
    {
        returnValue = F("Manuelastr.");
        break;
    }
    case 214981:
    {
        returnValue = F("Manuelesgässle");
        break;
    }
    case 214982:
    {
        returnValue = F("Manuelstr.");
        break;
    }
    case 214983:
    {
        returnValue = F("Manule");
        break;
    }
    case 214984:
    {
        returnValue = F("Manusgasse");
        break;
    }
    case 214985:
    {
        returnValue = F("Manusstr.");
        break;
    }
    case 214986:
    {
        returnValue = F("Many-Jost-Weg");
        break;
    }
    case 214987:
    {
        returnValue = F("Manzeller Str.");
        break;
    }
    case 214988:
    {
        returnValue = F("Manzeller Weg");
        break;
    }
    case 214989:
    {
        returnValue = F("Manzen");
        break;
    }
    case 214990:
    {
        returnValue = F("Manzenberg");
        break;
    }
    case 214991:
    {
        returnValue = F("Manzenberger Str.");
        break;
    }
    case 214992:
    {
        returnValue = F("Manzenbergstr.");
        break;
    }
    case 214993:
    {
        returnValue = F("Manzengasse");
        break;
    }
    case 214994:
    {
        returnValue = F("Manzenstr.");
        break;
    }
    case 214995:
    {
        returnValue = F("Manzentalstr.");
        break;
    }
    case 214996:
    {
        returnValue = F("Manzentalweg");
        break;
    }
    case 214997:
    {
        returnValue = F("Manzenweg");
        break;
    }
    case 214998:
    {
        returnValue = F("Manzingerstr.");
        break;
    }
    case 214999:
    {
        returnValue = F("Manzweg");
        break;
    }
    case 215000:
    {
        returnValue = F("Manöversträßchen");
        break;
    }
    case 215001:
    {
        returnValue = F("Manöverweg");
        break;
    }
    case 215002:
    {
        returnValue = F("Maplestr.");
        break;
    }
    case 215003:
    {
        returnValue = F("Mappach");
        break;
    }
    case 215004:
    {
        returnValue = F("Mappacher Str.");
        break;
    }
    case 215005:
    {
        returnValue = F("Mappenberger Str.");
        break;
    }
    case 215006:
    {
        returnValue = F("Mappesmühle");
        break;
    }
    case 215007:
    {
        returnValue = F("Mappus-Steg");
        break;
    }
    case 215008:
    {
        returnValue = F("Marabus");
        break;
    }
    case 215009:
    {
        returnValue = F("Marabustr.");
        break;
    }
    case 215010:
    {
        returnValue = F("Marahrensweg");
        break;
    }
    case 215011:
    {
        returnValue = F("Marano Equo Str.");
        break;
    }
    case 215012:
    {
        returnValue = F("Marathonstr.");
        break;
    }
    case 215013:
    {
        returnValue = F("Marathontor");
        break;
    }
    case 215014:
    {
        returnValue = F("Marathonweg");
        break;
    }
    case 215015:
    {
        returnValue = F("Maraweg");
        break;
    }
    case 215016:
    {
        returnValue = F("Marbach");
        break;
    }
    case 215017:
    {
        returnValue = F("Marbacher Berg");
        break;
    }
    case 215018:
    {
        returnValue = F("Marbacher Chaussee");
        break;
    }
    case 215019:
    {
        returnValue = F("Marbacher Gasse");
        break;
    }
    case 215020:
    {
        returnValue = F("Marbacher Höhe");
        break;
    }
    case 215021:
    {
        returnValue = F("Marbacher Kirchenpfad");
        break;
    }
    case 215022:
    {
        returnValue = F("Marbacher Str.");
        break;
    }
    case 215023:
    {
        returnValue = F("Marbacher Weg");
        break;
    }
    case 215024:
    {
        returnValue = F("Marbachseite");
        break;
    }
    case 215025:
    {
        returnValue = F("Marbachstr.");
        break;
    }
    case 215026:
    {
        returnValue = F("Marbachsweg");
        break;
    }
    case 215027:
    {
        returnValue = F("Marbachweg");
        break;
    }
    case 215028:
    {
        returnValue = F("Marbecker Str.");
        break;
    }
    case 215029:
    {
        returnValue = F("Marbeke");
        break;
    }
    case 215030:
    {
        returnValue = F("Marben Hoff");
        break;
    }
    case 215031:
    {
        returnValue = F("Marberg");
        break;
    }
    case 215032:
    {
        returnValue = F("Marbergweg");
        break;
    }
    case 215033:
    {
        returnValue = F("Marbestr.");
        break;
    }
    case 215034:
    {
        returnValue = F("Marbeweg");
        break;
    }
    case 215035:
    {
        returnValue = F("Marblicksweg");
        break;
    }
    case 215036:
    {
        returnValue = F("Marblingstr.");
        break;
    }
    case 215037:
    {
        returnValue = F("Marbodstr.");
        break;
    }
    case 215038:
    {
        returnValue = F("Marborner Str.");
        break;
    }
    case 215039:
    {
        returnValue = F("Marbostel");
        break;
    }
    case 215040:
    {
        returnValue = F("Marbosteler Weg");
        break;
    }
    case 215041:
    {
        returnValue = F("Marburg");
        break;
    }
    case 215042:
    {
        returnValue = F("Marburger Landstr.");
        break;
    }
    case 215043:
    {
        returnValue = F("Marburger Ring");
        break;
    }
    case 215044:
    {
        returnValue = F("Marburger Str.");
        break;
    }
    case 215045:
    {
        returnValue = F("Marburger Tor");
        break;
    }
    case 215046:
    {
        returnValue = F("Marburger Weg");
        break;
    }
    case 215047:
    {
        returnValue = F("Marbweg");
        break;
    }
    case 215048:
    {
        returnValue = F("Marc-Aurel-Ring");
        break;
    }
    case 215049:
    {
        returnValue = F("Marc-Aurel-Str.");
        break;
    }
    case 215050:
    {
        returnValue = F("Marc-Aurel-Ufer");
        break;
    }
    case 215051:
    {
        returnValue = F("Marc-Aurel-Weg");
        break;
    }
    case 215052:
    {
        returnValue = F("Marc-Cain-Allee");
        break;
    }
    case 215053:
    {
        returnValue = F("Marc-Chagall-Hof");
        break;
    }
    case 215054:
    {
        returnValue = F("Marc-Chagall-Str.");
        break;
    }
    case 215055:
    {
        returnValue = F("Marc-Chagall-Weg");
        break;
    }
    case 215056:
    {
        returnValue = F("Marcalistr.");
        break;
    }
    case 215057:
    {
        returnValue = F("Marcardsmoorer Str.");
        break;
    }
    case 215058:
    {
        returnValue = F("Marcardstr.");
        break;
    }
    case 215059:
    {
        returnValue = F("Marcel-Breuer-Ring");
        break;
    }
    case 215060:
    {
        returnValue = F("Marcel-Breuer-Str.");
        break;
    }
    case 215061:
    {
        returnValue = F("Marcel-Callo-Platz");
        break;
    }
    case 215062:
    {
        returnValue = F("Marcel-Callo-Str.");
        break;
    }
    case 215063:
    {
        returnValue = F("Marcel-Charpantier-Str.");
        break;
    }
    case 215064:
    {
        returnValue = F("Marcel-Cordes-Str.");
        break;
    }
    case 215065:
    {
        returnValue = F("Marcel-Deprez-Str.");
        break;
    }
    case 215066:
    {
        returnValue = F("Marcel-Jehl-Str.");
        break;
    }
    case 215067:
    {
        returnValue = F("Marcel-Paul-Str.");
        break;
    }
    case 215068:
    {
        returnValue = F("Marcel-Proust-Weg");
        break;
    }
    case 215069:
    {
        returnValue = F("Marcel-Verfaillie-Allee");
        break;
    }
    case 215070:
    {
        returnValue = F("Marcellstr.");
        break;
    }
    case 215071:
    {
        returnValue = F("Marcellusplatz");
        break;
    }
    case 215072:
    {
        returnValue = F("Marchandweg");
        break;
    }
    case 215073:
    {
        returnValue = F("Marchbrunnweg");
        break;
    }
    case 215074:
    {
        returnValue = F("Marche");
        break;
    }
    case 215075:
    {
        returnValue = F("Marchenbacher Str.");
        break;
    }
    case 215076:
    {
        returnValue = F("Marcher Str.");
        break;
    }
    case 215077:
    {
        returnValue = F("Marchetsreut");
        break;
    }
    case 215078:
    {
        returnValue = F("Marchholdstr.");
        break;
    }
    case 215079:
    {
        returnValue = F("Marchinistr.");
        break;
    }
    case 215080:
    {
        returnValue = F("Marchlerweg");
        break;
    }
    case 215081:
    {
        returnValue = F("Marchlewskistr.");
        break;
    }
    case 215082:
    {
        returnValue = F("Marchlewskiweg");
        break;
    }
    case 215083:
    {
        returnValue = F("Marchnerstr.");
        break;
    }
    case 215084:
    {
        returnValue = F("Marchstr.");
        break;
    }
    case 215085:
    {
        returnValue = F("Marchtaler Str.");
        break;
    }
    case 215086:
    {
        returnValue = F("Marchtalerstr.");
        break;
    }
    case 215087:
    {
        returnValue = F("Marchwartweg");
        break;
    }
    case 215088:
    {
        returnValue = F("Marchwiesenweg");
        break;
    }
    case 215089:
    {
        returnValue = F("Marchwitzaweg");
        break;
    }
    case 215090:
    {
        returnValue = F("Marcigny Str.");
        break;
    }
    case 215091:
    {
        returnValue = F("Marcillatstr.");
        break;
    }
    case 215092:
    {
        returnValue = F("Marcker Esch");
        break;
    }
    case 215093:
    {
        returnValue = F("Marckolsheimer Str.");
        break;
    }
    case 215094:
    {
        returnValue = F("Marcksstr.");
        break;
    }
    case 215095:
    {
        returnValue = F("Marco-Polo-Str.");
        break;
    }
    case 215096:
    {
        returnValue = F("Marco-Polo-Weg");
        break;
    }
    case 215097:
    {
        returnValue = F("Marcobrunnerstr.");
        break;
    }
    case 215098:
    {
        returnValue = F("Marconi Road");
        break;
    }
    case 215099:
    {
        returnValue = F("Marconistr.");
        break;
    }
    case 215100:
    {
        returnValue = F("Marconiweg");
        break;
    }
    case 215101:
    {
        returnValue = F("Marcoussisstr.");
        break;
    }
    case 215102:
    {
        returnValue = F("Marcq-en-Baroeul-Str.");
        break;
    }
    case 215103:
    {
        returnValue = F("Marcus Brücke");
        break;
    }
    case 215104:
    {
        returnValue = F("Marcus-Heinemann-Str.");
        break;
    }
    case 215105:
    {
        returnValue = F("Marcus-Sierck-Weg");
        break;
    }
    case 215106:
    {
        returnValue = F("Marcusallee");
        break;
    }
    case 215107:
    {
        returnValue = F("Marcusgasse");
        break;
    }
    case 215108:
    {
        returnValue = F("Marcusstr.");
        break;
    }
    case 215109:
    {
        returnValue = F("Marcusweg");
        break;
    }
    case 215110:
    {
        returnValue = F("Marcweg");
        break;
    }
    case 215111:
    {
        returnValue = F("Mardale");
        break;
    }
    case 215112:
    {
        returnValue = F("Mardalstr.");
        break;
    }
    case 215113:
    {
        returnValue = F("Mardensieg");
        break;
    }
    case 215114:
    {
        returnValue = F("Marderallee");
        break;
    }
    case 215115:
    {
        returnValue = F("Marderartige");
        break;
    }
    case 215116:
    {
        returnValue = F("Marderbachweg");
        break;
    }
    case 215117:
    {
        returnValue = F("Marderbruch");
        break;
    }
    case 215118:
    {
        returnValue = F("Mardereck");
        break;
    }
    case 215119:
    {
        returnValue = F("Mardereichweg");
        break;
    }
    case 215120:
    {
        returnValue = F("Marderfalle");
        break;
    }
    case 215121:
    {
        returnValue = F("Marderfang");
        break;
    }
    case 215122:
    {
        returnValue = F("Mardergasse");
        break;
    }
    case 215123:
    {
        returnValue = F("Marderhof");
        break;
    }
    case 215124:
    {
        returnValue = F("Marderpfad");
        break;
    }
    case 215125:
    {
        returnValue = F("Marderschlag");
        break;
    }
    case 215126:
    {
        returnValue = F("Mardersteg");
        break;
    }
    case 215127:
    {
        returnValue = F("Mardersteig");
        break;
    }
    case 215128:
    {
        returnValue = F("Mardersteige");
        break;
    }
    case 215129:
    {
        returnValue = F("Marderstieg");
        break;
    }
    case 215130:
    {
        returnValue = F("Marderstiege");
        break;
    }
    case 215131:
    {
        returnValue = F("Marderstr.");
        break;
    }
    case 215132:
    {
        returnValue = F("Marderweg");
        break;
    }
    case 215133:
    {
        returnValue = F("Marderwiesen");
        break;
    }
    case 215134:
    {
        returnValue = F("Marderwinkel");
        break;
    }
    case 215135:
    {
        returnValue = F("Mardieksweg");
        break;
    }
    case 215136:
    {
        returnValue = F("Mardorfer Brücke");
        break;
    }
    case 215137:
    {
        returnValue = F("Mardorfer Gasse");
        break;
    }
    case 215138:
    {
        returnValue = F("Mardorfer Riehe");
        break;
    }
    case 215139:
    {
        returnValue = F("Mardorfer Str.");
        break;
    }
    case 215140:
    {
        returnValue = F("Mardorfer Weg");
        break;
    }
    case 215141:
    {
        returnValue = F("Mardostr.");
        break;
    }
    case 215142:
    {
        returnValue = F("Mareaustr.");
        break;
    }
    case 215143:
    {
        returnValue = F("Mareese");
        break;
    }
    case 215144:
    {
        returnValue = F("Mareisring");
        break;
    }
    case 215145:
    {
        returnValue = F("Mareitzweg");
        break;
    }
    case 215146:
    {
        returnValue = F("Marellenkämpe");
        break;
    }
    case 215147:
    {
        returnValue = F("Maren Sörensen Weg");
        break;
    }
    case 215148:
    {
        returnValue = F("Marenbacher Str.");
        break;
    }
    case 215149:
    {
        returnValue = F("Marenbacher Weg");
        break;
    }
    case 215150:
    {
        returnValue = F("Marenholtzstr.");
        break;
    }
    case 215151:
    {
        returnValue = F("Marenholzweg");
        break;
    }
    case 215152:
    {
        returnValue = F("Marfeldstr.");
        break;
    }
    case 215153:
    {
        returnValue = F("Marferdingstr.");
        break;
    }
    case 215154:
    {
        returnValue = F("Marfordingweg");
        break;
    }
    case 215155:
    {
        returnValue = F("Marga-Böhmer-Str.");
        break;
    }
    case 215156:
    {
        returnValue = F("Marga-Faulstich-Str.");
        break;
    }
    case 215157:
    {
        returnValue = F("Marga-Groove-Str.");
        break;
    }
    case 215158:
    {
        returnValue = F("Marga-Jess-Str.");
        break;
    }
    case 215159:
    {
        returnValue = F("Marga-Kersten-Weg");
        break;
    }
    case 215160:
    {
        returnValue = F("Marga-Meusel-Str.");
        break;
    }
    case 215161:
    {
        returnValue = F("Marga-Spiegel-Weg");
        break;
    }
    case 215162:
    {
        returnValue = F("Marga-von-Etzdorf-Platz");
        break;
    }
    case 215163:
    {
        returnValue = F("Marga-von-Etzdorf-Weg");
        break;
    }
    case 215164:
    {
        returnValue = F("Margaret-Mitchell-Str.");
        break;
    }
    case 215165:
    {
        returnValue = F("Margareta-Helbling-Str.");
        break;
    }
    case 215166:
    {
        returnValue = F("Margareta-Stelten-Str.");
        break;
    }
    case 215167:
    {
        returnValue = F("Margareta-Str.");
        break;
    }
    case 215168:
    {
        returnValue = F("Margaretastr.");
        break;
    }
    case 215169:
    {
        returnValue = F("Margarete Rose Weg");
        break;
    }
    case 215170:
    {
        returnValue = F("Margarete-Bieber-Weg");
        break;
    }
    case 215171:
    {
        returnValue = F("Margarete-Bissen-Str.");
        break;
    }
    case 215172:
    {
        returnValue = F("Margarete-Buber-Neumann-Str.");
        break;
    }
    case 215173:
    {
        returnValue = F("Margarete-Buscher-Str.");
        break;
    }
    case 215174:
    {
        returnValue = F("Margarete-Böhme-Str.");
        break;
    }
    case 215175:
    {
        returnValue = F("Margarete-Czech-Str.");
        break;
    }
    case 215176:
    {
        returnValue = F("Margarete-Daasch-Weg");
        break;
    }
    case 215177:
    {
        returnValue = F("Margarete-Endemann-Weg");
        break;
    }
    case 215178:
    {
        returnValue = F("Margarete-Gaertner-Str.");
        break;
    }
    case 215179:
    {
        returnValue = F("Margarete-Gramberg-Str.");
        break;
    }
    case 215180:
    {
        returnValue = F("Margarete-Gutöhrlein-Str.");
        break;
    }
    case 215181:
    {
        returnValue = F("Margarete-Haferkamp-Str.");
        break;
    }
    case 215182:
    {
        returnValue = F("Margarete-Hannsmann-Weg");
        break;
    }
    case 215183:
    {
        returnValue = F("Margarete-Hoffer-Weg");
        break;
    }
    case 215184:
    {
        returnValue = F("Margarete-Hofmann-Weg");
        break;
    }
    case 215185:
    {
        returnValue = F("Margarete-Höppel-Platz");
        break;
    }
    case 215186:
    {
        returnValue = F("Margarete-Jansen-Str.");
        break;
    }
    case 215187:
    {
        returnValue = F("Margarete-Kallmann-Str.");
        break;
    }
    case 215188:
    {
        returnValue = F("Margarete-Kiesel-Str.");
        break;
    }
    case 215189:
    {
        returnValue = F("Margarete-Köchner-Str.");
        break;
    }
    case 215190:
    {
        returnValue = F("Margarete-Massias-Str.");
        break;
    }
    case 215191:
    {
        returnValue = F("Margarete-Metz-Str.");
        break;
    }
    case 215192:
    {
        returnValue = F("Margarete-Mitscherlich-Str.");
        break;
    }
    case 215193:
    {
        returnValue = F("Margarete-Moormann-Weg");
        break;
    }
    case 215194:
    {
        returnValue = F("Margarete-Müller-Bull-Steg");
        break;
    }
    case 215195:
    {
        returnValue = F("Margarete-Peters-Weg");
        break;
    }
    case 215196:
    {
        returnValue = F("Margarete-Reißner-Str.");
        break;
    }
    case 215197:
    {
        returnValue = F("Margarete-Ries-Str.");
        break;
    }
    case 215198:
    {
        returnValue = F("Margarete-Rudoll-Weg");
        break;
    }
    case 215199:
    {
        returnValue = F("Margarete-Schloßnagel-Weg");
        break;
    }
    case 215200:
    {
        returnValue = F("Margarete-Schreiner-Str.");
        break;
    }
    case 215201:
    {
        returnValue = F("Margarete-Schurz-Weg");
        break;
    }
    case 215202:
    {
        returnValue = F("Margarete-Schütte-Lihotzky-Anlage");
        break;
    }
    case 215203:
    {
        returnValue = F("Margarete-Steiff-Allee");
        break;
    }
    case 215204:
    {
        returnValue = F("Margarete-Steiff-Str.");
        break;
    }
    case 215205:
    {
        returnValue = F("Margarete-Steiff-Weg");
        break;
    }
    case 215206:
    {
        returnValue = F("Margarete-Stingele-Weg");
        break;
    }
    case 215207:
    {
        returnValue = F("Margarete-Susman-Weg");
        break;
    }
    case 215208:
    {
        returnValue = F("Margarete-Sänger-Weg");
        break;
    }
    case 215209:
    {
        returnValue = F("Margarete-Tanner-Park");
        break;
    }
    case 215210:
    {
        returnValue = F("Margarete-Weber-Anlage");
        break;
    }
    case 215211:
    {
        returnValue = F("Margarete-Windthorst-Str.");
        break;
    }
    case 215212:
    {
        returnValue = F("Margarete-Wolf-Schlemm-Str.");
        break;
    }
    case 215213:
    {
        returnValue = F("Margarete-und-Fritz-Kahl-Anlage");
        break;
    }
    case 215214:
    {
        returnValue = F("Margarete-von Isenburg-Str.");
        break;
    }
    case 215215:
    {
        returnValue = F("Margarete-von-Wrangell-Str.");
        break;
    }
    case 215216:
    {
        returnValue = F("Margarete-zur-Bentlage-Str.");
        break;
    }
    case 215217:
    {
        returnValue = F("Margaretenallee");
        break;
    }
    case 215218:
    {
        returnValue = F("Margaretenanger");
        break;
    }
    case 215219:
    {
        returnValue = F("Margaretenau");
        break;
    }
    case 215220:
    {
        returnValue = F("Margaretendamm");
        break;
    }
    case 215221:
    {
        returnValue = F("Margaretenfeld");
        break;
    }
    case 215222:
    {
        returnValue = F("Margaretengasse");
        break;
    }
    case 215223:
    {
        returnValue = F("Margaretengäßchen");
        break;
    }
    case 215224:
    {
        returnValue = F("Margaretenhof");
        break;
    }
    case 215225:
    {
        returnValue = F("Margaretenhöhe");
        break;
    }
    case 215226:
    {
        returnValue = F("Margaretenhütte");
        break;
    }
    case 215227:
    {
        returnValue = F("Margaretenplatz");
        break;
    }
    case 215228:
    {
        returnValue = F("Margaretenstr.");
        break;
    }
    case 215229:
    {
        returnValue = F("Margaretental");
        break;
    }
    case 215230:
    {
        returnValue = F("Margaretenweg");
        break;
    }
    case 215231:
    {
        returnValue = F("Margaretha-Ebner-Weg");
        break;
    }
    case 215232:
    {
        returnValue = F("Margaretha-Flesch-Str.");
        break;
    }
    case 215233:
    {
        returnValue = F("Margaretha-Jenisch-Ring");
        break;
    }
    case 215234:
    {
        returnValue = F("Margaretha-Küchle-Str.");
        break;
    }
    case 215235:
    {
        returnValue = F("Margaretha-Meinders-Str. links");
        break;
    }
    case 215236:
    {
        returnValue = F("Margaretha-Meinders-Str. rechts");
        break;
    }
    case 215237:
    {
        returnValue = F("Margaretha-Rothe-Str.");
        break;
    }
    case 215238:
    {
        returnValue = F("Margaretha-Stock-Weg");
        break;
    }
    case 215239:
    {
        returnValue = F("Margarethastr.");
        break;
    }
    case 215240:
    {
        returnValue = F("Margarethe Jochimsen Str.");
        break;
    }
    case 215241:
    {
        returnValue = F("Margarethe-Bacher-Str.");
        break;
    }
    case 215242:
    {
        returnValue = F("Margarethe-Cohn-Str.");
        break;
    }
    case 215243:
    {
        returnValue = F("Margarethe-Gehrig-Weg");
        break;
    }
    case 215244:
    {
        returnValue = F("Margarethe-Geiger-Str.");
        break;
    }
    case 215245:
    {
        returnValue = F("Margarethe-Gottliebe-Weg");
        break;
    }
    case 215246:
    {
        returnValue = F("Margarethe-Hormuth-Str.");
        break;
    }
    case 215247:
    {
        returnValue = F("Margarethe-Höhne-Str.");
        break;
    }
    case 215248:
    {
        returnValue = F("Margarethe-Jacobsen-Str.");
        break;
    }
    case 215249:
    {
        returnValue = F("Margarethe-Kletke-Str.");
        break;
    }
    case 215250:
    {
        returnValue = F("Margarethe-Kramer-Str.");
        break;
    }
    case 215251:
    {
        returnValue = F("Margarethe-Kreitz-Str.");
        break;
    }
    case 215252:
    {
        returnValue = F("Margarethe-Kron-Weg");
        break;
    }
    case 215253:
    {
        returnValue = F("Margarethe-Kruse-Str.");
        break;
    }
    case 215254:
    {
        returnValue = F("Margarethe-Lachmund-Str.");
        break;
    }
    case 215255:
    {
        returnValue = F("Margarethe-Naumann-Str.");
        break;
    }
    case 215256:
    {
        returnValue = F("Margarethe-Nelges-Str.");
        break;
    }
    case 215257:
    {
        returnValue = F("Margarethe-Näfe-Str.");
        break;
    }
    case 215258:
    {
        returnValue = F("Margarethe-Scherb-Str.");
        break;
    }
    case 215259:
    {
        returnValue = F("Margarethe-Schreiber-Str.");
        break;
    }
    case 215260:
    {
        returnValue = F("Margarethe-Schurz-Str.");
        break;
    }
    case 215261:
    {
        returnValue = F("Margarethe-Stingele-Str.");
        break;
    }
    case 215262:
    {
        returnValue = F("Margarethe-Werner-Weg");
        break;
    }
    case 215263:
    {
        returnValue = F("Margarethe-und-Max-Rüdenberg-Platz");
        break;
    }
    case 215264:
    {
        returnValue = F("Margarethe-von-Geyern-Str.");
        break;
    }
    case 215265:
    {
        returnValue = F("Margarethe-von-Hersel-Str.");
        break;
    }
    case 215266:
    {
        returnValue = F("Margarethe-von-Wrangel-Weg");
        break;
    }
    case 215267:
    {
        returnValue = F("Margarethe-von-Wrangell-Weg");
        break;
    }
    case 215268:
    {
        returnValue = F("Margarethen");
        break;
    }
    case 215269:
    {
        returnValue = F("Margarethen-Ring");
        break;
    }
    case 215270:
    {
        returnValue = F("Margarethen-Weg");
        break;
    }
    case 215271:
    {
        returnValue = F("Margarethenanger");
        break;
    }
    case 215272:
    {
        returnValue = F("Margarethenberg");
        break;
    }
    case 215273:
    {
        returnValue = F("Margarethengasse");
        break;
    }
    case 215274:
    {
        returnValue = F("Margarethengässchen");
        break;
    }
    case 215275:
    {
        returnValue = F("Margarethenhain");
        break;
    }
    case 215276:
    {
        returnValue = F("Margarethenhof");
        break;
    }
    case 215277:
    {
        returnValue = F("Margarethenhöhe");
        break;
    }
    case 215278:
    {
        returnValue = F("Margarethenkamp");
        break;
    }
    case 215279:
    {
        returnValue = F("Margarethenpark");
        break;
    }
    case 215280:
    {
        returnValue = F("Margarethenplatz");
        break;
    }
    case 215281:
    {
        returnValue = F("Margarethenried");
        break;
    }
    case 215282:
    {
        returnValue = F("Margarethenring");
        break;
    }
    case 215283:
    {
        returnValue = F("Margarethenruhweg");
        break;
    }
    case 215284:
    {
        returnValue = F("Margarethenschlucht");
        break;
    }
    case 215285:
    {
        returnValue = F("Margarethensteig");
        break;
    }
    case 215286:
    {
        returnValue = F("Margarethenstr.");
        break;
    }
    case 215287:
    {
        returnValue = F("Margarethental");
        break;
    }
    case 215288:
    {
        returnValue = F("Margarethenwall");
        break;
    }
    case 215289:
    {
        returnValue = F("Margarethenwall-Weg");
        break;
    }
    case 215290:
    {
        returnValue = F("Margarethenwallstr.");
        break;
    }
    case 215291:
    {
        returnValue = F("Margarethenweg");
        break;
    }
    case 215292:
    {
        returnValue = F("Margarita-Calvary-Str.");
        break;
    }
    case 215293:
    {
        returnValue = F("Margarita-Lillelund-Weg");
        break;
    }
    case 215294:
    {
        returnValue = F("Margarita-Linder-Str.");
        break;
    }
    case 215295:
    {
        returnValue = F("Margarita-Linder-Weg");
        break;
    }
    case 215296:
    {
        returnValue = F("Margaritenstr.");
        break;
    }
    case 215297:
    {
        returnValue = F("Margaritenweg");
        break;
    }
    case 215298:
    {
        returnValue = F("Margarten");
        break;
    }
    case 215299:
    {
        returnValue = F("Margenboomstr.");
        break;
    }
    case 215300:
    {
        returnValue = F("Margens");
        break;
    }
    case 215301:
    {
        returnValue = F("Margenser Kleiweg");
        break;
    }
    case 215302:
    {
        returnValue = F("Margeritenkamp");
        break;
    }
    case 215303:
    {
        returnValue = F("Margeritenring");
        break;
    }
    case 215304:
    {
        returnValue = F("Margeritensteig");
        break;
    }
    case 215305:
    {
        returnValue = F("Margeritenstr.");
        break;
    }
    case 215306:
    {
        returnValue = F("Margeritenweg");
        break;
    }
    case 215307:
    {
        returnValue = F("Margeritenwinkel");
        break;
    }
    case 215308:
    {
        returnValue = F("Margertz");
        break;
    }
    case 215309:
    {
        returnValue = F("Margetshöchheimer Str.");
        break;
    }
    case 215310:
    {
        returnValue = F("Marggraffshof");
        break;
    }
    case 215311:
    {
        returnValue = F("Marggrafstr.");
        break;
    }
    case 215312:
    {
        returnValue = F("Marggrafweg");
        break;
    }
    case 215313:
    {
        returnValue = F("Margit-Blaha-Str.");
        break;
    }
    case 215314:
    {
        returnValue = F("Margit-Manz-Str.");
        break;
    }
    case 215315:
    {
        returnValue = F("Margonstr.");
        break;
    }
    case 215316:
    {
        returnValue = F("Margot-Becke-Ring");
        break;
    }
    case 215317:
    {
        returnValue = F("Margot-Büttner-Weg");
        break;
    }
    case 215318:
    {
        returnValue = F("Margot-Kaufmann-Str.");
        break;
    }
    case 215319:
    {
        returnValue = F("Margot-Krause-Weg");
        break;
    }
    case 215320:
    {
        returnValue = F("Margot-König-Str.");
        break;
    }
    case 215321:
    {
        returnValue = F("Margot-Matthias-Str.");
        break;
    }
    case 215322:
    {
        returnValue = F("Margot-Pottlitzer-Strauß-Str.");
        break;
    }
    case 215323:
    {
        returnValue = F("Margot-Röttger-Rath-Str.");
        break;
    }
    case 215324:
    {
        returnValue = F("Margraf-Fischer-Siedlung");
        break;
    }
    case 215325:
    {
        returnValue = F("Margrafenstr.");
        break;
    }
    case 215326:
    {
        returnValue = F("Margratenstr.");
        break;
    }
    case 215327:
    {
        returnValue = F("Margrefstr.");
        break;
    }
    case 215328:
    {
        returnValue = F("Margreider Platz");
        break;
    }
    case 215329:
    {
        returnValue = F("Margreider Str.");
        break;
    }
    case 215330:
    {
        returnValue = F("Margret-Alps-Weg");
        break;
    }
    case 215331:
    {
        returnValue = F("Margret-Boixen-Weg");
        break;
    }
    case 215332:
    {
        returnValue = F("Margretenanger");
        break;
    }
    case 215333:
    {
        returnValue = F("Margretenhauner Str.");
        break;
    }
    case 215334:
    {
        returnValue = F("Margrethauser Str.");
        break;
    }
    case 215335:
    {
        returnValue = F("Margretstr.");
        break;
    }
    case 215336:
    {
        returnValue = F("Margretweg");
        break;
    }
    case 215337:
    {
        returnValue = F("Margrit-Kennedy-Weg");
        break;
    }
    case 215338:
    {
        returnValue = F("Margrittenweg");
        break;
    }
    case 215339:
    {
        returnValue = F("Margueritenstr.");
        break;
    }
    case 215340:
    {
        returnValue = F("Margueritenweg");
        break;
    }
    case 215341:
    {
        returnValue = F("Marguerrestr.");
        break;
    }
    case 215342:
    {
        returnValue = F("Marheinekes Hof");
        break;
    }
    case 215343:
    {
        returnValue = F("Marheinekestr.");
        break;
    }
    case 215344:
    {
        returnValue = F("Marhof");
        break;
    }
    case 215345:
    {
        returnValue = F("Marhähnen");
        break;
    }
    case 215346:
    {
        returnValue = F("Marhöferstr.");
        break;
    }
    case 215347:
    {
        returnValue = F("Marhördt");
        break;
    }
    case 215348:
    {
        returnValue = F("Marhördter Str.");
        break;
    }
    case 215349:
    {
        returnValue = F("Maria Almeda Weg");
        break;
    }
    case 215350:
    {
        returnValue = F("Maria Buch");
        break;
    }
    case 215351:
    {
        returnValue = F("Maria Frieden");
        break;
    }
    case 215352:
    {
        returnValue = F("Maria Hell");
        break;
    }
    case 215353:
    {
        returnValue = F("Maria Hilfstr.");
        break;
    }
    case 215354:
    {
        returnValue = F("Maria Sibylla Merian-Garten");
        break;
    }
    case 215355:
    {
        returnValue = F("Maria Ward");
        break;
    }
    case 215356:
    {
        returnValue = F("Maria Ward Weg");
        break;
    }
    case 215357:
    {
        returnValue = F("Maria Weigert Str.");
        break;
    }
    case 215358:
    {
        returnValue = F("Maria von der Thann Str.");
        break;
    }
    case 215359:
    {
        returnValue = F("Maria-Adelberger-Str.");
        break;
    }
    case 215360:
    {
        returnValue = F("Maria-Adämmer-Weg");
        break;
    }
    case 215361:
    {
        returnValue = F("Maria-Aerdken-Str.");
        break;
    }
    case 215362:
    {
        returnValue = F("Maria-Agnesi-Str.");
        break;
    }
    case 215363:
    {
        returnValue = F("Maria-Alber-Str.");
        break;
    }
    case 215364:
    {
        returnValue = F("Maria-Amelia-Str.");
        break;
    }
    case 215365:
    {
        returnValue = F("Maria-Anna-Bloching-Str.");
        break;
    }
    case 215366:
    {
        returnValue = F("Maria-Anna-Braig-Weg");
        break;
    }
    case 215367:
    {
        returnValue = F("Maria-Antonia-Str.");
        break;
    }
    case 215368:
    {
        returnValue = F("Maria-Bach Gasse");
        break;
    }
    case 215369:
    {
        returnValue = F("Maria-Basels-Str.");
        break;
    }
    case 215370:
    {
        returnValue = F("Maria-Baumgärtle-Str.");
        break;
    }
    case 215371:
    {
        returnValue = F("Maria-Beatrix-Str.");
        break;
    }
    case 215372:
    {
        returnValue = F("Maria-Becker-Str.");
        break;
    }
    case 215373:
    {
        returnValue = F("Maria-Bee-Str.");
        break;
    }
    case 215374:
    {
        returnValue = F("Maria-Beine-Hager-Weg");
        break;
    }
    case 215375:
    {
        returnValue = F("Maria-Berns-Str.");
        break;
    }
    case 215376:
    {
        returnValue = F("Maria-Birnbaum-Str.");
        break;
    }
    case 215377:
    {
        returnValue = F("Maria-Birnbaum-Weg");
        break;
    }
    case 215378:
    {
        returnValue = F("Maria-Block-Str.");
        break;
    }
    case 215379:
    {
        returnValue = F("Maria-Bornheim-Weg");
        break;
    }
    case 215380:
    {
        returnValue = F("Maria-Brandt-Str.");
        break;
    }
    case 215381:
    {
        returnValue = F("Maria-Buch-Str.");
        break;
    }
    case 215382:
    {
        returnValue = F("Maria-Burger-Weg");
        break;
    }
    case 215383:
    {
        returnValue = F("Maria-Caspar-Filser-Str.");
        break;
    }
    case 215384:
    {
        returnValue = F("Maria-Catharina-Reich-Str.");
        break;
    }
    case 215385:
    {
        returnValue = F("Maria-Cebotari-Str.");
        break;
    }
    case 215386:
    {
        returnValue = F("Maria-Christina-Lorck-Str.");
        break;
    }
    case 215387:
    {
        returnValue = F("Maria-Clementine-Martin-Str.");
        break;
    }
    case 215388:
    {
        returnValue = F("Maria-Clementine-Martin-Weg");
        break;
    }
    case 215389:
    {
        returnValue = F("Maria-Croon-Str.");
        break;
    }
    case 215390:
    {
        returnValue = F("Maria-Cunitz-Weg");
        break;
    }
    case 215391:
    {
        returnValue = F("Maria-Dettmann-Weg");
        break;
    }
    case 215392:
    {
        returnValue = F("Maria-Detzel-Str.");
        break;
    }
    case 215393:
    {
        returnValue = F("Maria-Djuk-Str.");
        break;
    }
    case 215394:
    {
        returnValue = F("Maria-Dorothea-Str.");
        break;
    }
    case 215395:
    {
        returnValue = F("Maria-Dresen-Str.");
        break;
    }
    case 215396:
    {
        returnValue = F("Maria-Droste-Str.");
        break;
    }
    case 215397:
    {
        returnValue = F("Maria-Eberhard-Weg");
        break;
    }
    case 215398:
    {
        returnValue = F("Maria-Eberle-Str.");
        break;
    }
    case 215399:
    {
        returnValue = F("Maria-Eck-Str.");
        break;
    }
    case 215400:
    {
        returnValue = F("Maria-Eich-Str.");
        break;
    }
    case 215401:
    {
        returnValue = F("Maria-Eich-Weg");
        break;
    }
    case 215402:
    {
        returnValue = F("Maria-Elend-Weg");
        break;
    }
    case 215403:
    {
        returnValue = F("Maria-Ellenrieder-Str.");
        break;
    }
    case 215404:
    {
        returnValue = F("Maria-End-Weg");
        break;
    }
    case 215405:
    {
        returnValue = F("Maria-Euthymia-Weg");
        break;
    }
    case 215406:
    {
        returnValue = F("Maria-Felder-Weg");
        break;
    }
    case 215407:
    {
        returnValue = F("Maria-Fels-Str.");
        break;
    }
    case 215408:
    {
        returnValue = F("Maria-Ferdinanda-Str.");
        break;
    }
    case 215409:
    {
        returnValue = F("Maria-Ferschl-Str.");
        break;
    }
    case 215410:
    {
        returnValue = F("Maria-Fischer-Weg");
        break;
    }
    case 215411:
    {
        returnValue = F("Maria-Flink-Weg");
        break;
    }
    case 215412:
    {
        returnValue = F("Maria-Franziska-Str.");
        break;
    }
    case 215413:
    {
        returnValue = F("Maria-Freymüller-Str.");
        break;
    }
    case 215414:
    {
        returnValue = F("Maria-Föhrenbach-Str.");
        break;
    }
    case 215415:
    {
        returnValue = F("Maria-Gebbert-Str.");
        break;
    }
    case 215416:
    {
        returnValue = F("Maria-Germana-Str.");
        break;
    }
    case 215417:
    {
        returnValue = F("Maria-Gilles-Str.");
        break;
    }
    case 215418:
    {
        returnValue = F("Maria-Glasl-Str.");
        break;
    }
    case 215419:
    {
        returnValue = F("Maria-Goeppert-Mayer-Str.");
        break;
    }
    case 215420:
    {
        returnValue = F("Maria-Goeppert-Ring");
        break;
    }
    case 215421:
    {
        returnValue = F("Maria-Goeppert-Str.");
        break;
    }
    case 215422:
    {
        returnValue = F("Maria-Grafwallner-Weg");
        break;
    }
    case 215423:
    {
        returnValue = F("Maria-Graßl-Str.");
        break;
    }
    case 215424:
    {
        returnValue = F("Maria-Greiner-Weg");
        break;
    }
    case 215425:
    {
        returnValue = F("Maria-Grollmuß-Str.");
        break;
    }
    case 215426:
    {
        returnValue = F("Maria-Göppert-Weg");
        break;
    }
    case 215427:
    {
        returnValue = F("Maria-Görlin-Str.");
        break;
    }
    case 215428:
    {
        returnValue = F("Maria-Günzl-Weg");
        break;
    }
    case 215429:
    {
        returnValue = F("Maria-Haas-Str.");
        break;
    }
    case 215430:
    {
        returnValue = F("Maria-Hall-Anlage");
        break;
    }
    case 215431:
    {
        returnValue = F("Maria-Hansen-Str.");
        break;
    }
    case 215432:
    {
        returnValue = F("Maria-Herbert-Str.");
        break;
    }
    case 215433:
    {
        returnValue = F("Maria-Hierlwimmer-Weg");
        break;
    }
    case 215434:
    {
        returnValue = F("Maria-Hilf Weg");
        break;
    }
    case 215435:
    {
        returnValue = F("Maria-Hilf-Berg");
        break;
    }
    case 215436:
    {
        returnValue = F("Maria-Hilf-Platz");
        break;
    }
    case 215437:
    {
        returnValue = F("Maria-Hilf-Str.");
        break;
    }
    case 215438:
    {
        returnValue = F("Maria-Hilf-Weg");
        break;
    }
    case 215439:
    {
        returnValue = F("Maria-Hiller-Föll-Str.");
        break;
    }
    case 215440:
    {
        returnValue = F("Maria-Himmelfahrts-Weg");
        break;
    }
    case 215441:
    {
        returnValue = F("Maria-Hof-Weg");
        break;
    }
    case 215442:
    {
        returnValue = F("Maria-Holl-Str.");
        break;
    }
    case 215443:
    {
        returnValue = F("Maria-Isabella-von-Gruben-Str.");
        break;
    }
    case 215444:
    {
        returnValue = F("Maria-Jacobi-Str.");
        break;
    }
    case 215445:
    {
        returnValue = F("Maria-Jessen-Weg");
        break;
    }
    case 215446:
    {
        returnValue = F("Maria-Juchacz-Ring");
        break;
    }
    case 215447:
    {
        returnValue = F("Maria-Juchacz-Str.");
        break;
    }
    case 215448:
    {
        returnValue = F("Maria-Juchacz-Weg");
        break;
    }
    case 215449:
    {
        returnValue = F("Maria-Kaempf-Riberio-Str.");
        break;
    }
    case 215450:
    {
        returnValue = F("Maria-Kahle-Str.");
        break;
    }
    case 215451:
    {
        returnValue = F("Maria-Kann-Weg");
        break;
    }
    case 215452:
    {
        returnValue = F("Maria-Kappl-Weg");
        break;
    }
    case 215453:
    {
        returnValue = F("Maria-Kasper-Str.");
        break;
    }
    case 215454:
    {
        returnValue = F("Maria-Kirch-Str.");
        break;
    }
    case 215455:
    {
        returnValue = F("Maria-Klothen-Str.");
        break;
    }
    case 215456:
    {
        returnValue = F("Maria-Knöpfler-Str.");
        break;
    }
    case 215457:
    {
        returnValue = F("Maria-Krüger-Str.");
        break;
    }
    case 215458:
    {
        returnValue = F("Maria-Kurt-Str.");
        break;
    }
    case 215459:
    {
        returnValue = F("Maria-König-Str.");
        break;
    }
    case 215460:
    {
        returnValue = F("Maria-Lanz-Str.");
        break;
    }
    case 215461:
    {
        returnValue = F("Maria-Laskowski-Weg");
        break;
    }
    case 215462:
    {
        returnValue = F("Maria-Lass-Weg");
        break;
    }
    case 215463:
    {
        returnValue = F("Maria-Lenfers-Weg");
        break;
    }
    case 215464:
    {
        returnValue = F("Maria-Lenzen-Ring");
        break;
    }
    case 215465:
    {
        returnValue = F("Maria-Lenzen-Str.");
        break;
    }
    case 215466:
    {
        returnValue = F("Maria-Lerch-Str.");
        break;
    }
    case 215467:
    {
        returnValue = F("Maria-Lerch-Weg");
        break;
    }
    case 215468:
    {
        returnValue = F("Maria-Lerchl-Str.");
        break;
    }
    case 215469:
    {
        returnValue = F("Maria-Likarz-Weg");
        break;
    }
    case 215470:
    {
        returnValue = F("Maria-Lind");
        break;
    }
    case 215471:
    {
        returnValue = F("Maria-Link-Str.");
        break;
    }
    case 215472:
    {
        returnValue = F("Maria-Lobach-Str.");
        break;
    }
    case 215473:
    {
        returnValue = F("Maria-Lohmann-Weg");
        break;
    }
    case 215474:
    {
        returnValue = F("Maria-Ludwig-Stift");
        break;
    }
    case 215475:
    {
        returnValue = F("Maria-Ludwig-Str.");
        break;
    }
    case 215476:
    {
        returnValue = F("Maria-Luise-Hatzfeld-Platz");
        break;
    }
    case 215477:
    {
        returnValue = F("Maria-Magdalena-Str.");
        break;
    }
    case 215478:
    {
        returnValue = F("Maria-Mandel-Str.");
        break;
    }
    case 215479:
    {
        returnValue = F("Maria-Matheis-Str.");
        break;
    }
    case 215480:
    {
        returnValue = F("Maria-Mathi-Str.");
        break;
    }
    case 215481:
    {
        returnValue = F("Maria-Meller-Str.");
        break;
    }
    case 215482:
    {
        returnValue = F("Maria-Menz-Str.");
        break;
    }
    case 215483:
    {
        returnValue = F("Maria-Menz-Weg");
        break;
    }
    case 215484:
    {
        returnValue = F("Maria-Merian-Bogen");
        break;
    }
    case 215485:
    {
        returnValue = F("Maria-Merian-Str.");
        break;
    }
    case 215486:
    {
        returnValue = F("Maria-Merian-Weg");
        break;
    }
    case 215487:
    {
        returnValue = F("Maria-Merkert-Str.");
        break;
    }
    case 215488:
    {
        returnValue = F("Maria-Miller-Str.");
        break;
    }
    case 215489:
    {
        returnValue = F("Maria-Misselhorn-Str.");
        break;
    }
    case 215490:
    {
        returnValue = F("Maria-Mitchell-Str.");
        break;
    }
    case 215491:
    {
        returnValue = F("Maria-Montessori-Allee");
        break;
    }
    case 215492:
    {
        returnValue = F("Maria-Montessori-Str.");
        break;
    }
    case 215493:
    {
        returnValue = F("Maria-Montessori-Weg");
        break;
    }
    case 215494:
    {
        returnValue = F("Maria-Moos-Gasse");
        break;
    }
    case 215495:
    {
        returnValue = F("Maria-Mönch-Tegeder-Str.");
        break;
    }
    case 215496:
    {
        returnValue = F("Maria-Müller-Gögler-Str.");
        break;
    }
    case 215497:
    {
        returnValue = F("Maria-Müller-Gögler-Weg");
        break;
    }
    case 215498:
    {
        returnValue = F("Maria-Münster-Str.");
        break;
    }
    case 215499:
    {
        returnValue = F("Maria-Niehues-Str.");
        break;
    }
    case 215500:
    {
        returnValue = F("Maria-Niemann-Weg");
        break;
    }
    case 215501:
    {
        returnValue = F("Maria-Nolte-Str.");
        break;
    }
    case 215502:
    {
        returnValue = F("Maria-Nötenwang");
        break;
    }
    case 215503:
    {
        returnValue = F("Maria-Oberndorf-Str.");
        break;
    }
    case 215504:
    {
        returnValue = F("Maria-Paschalis-Weg");
        break;
    }
    case 215505:
    {
        returnValue = F("Maria-Paula-Emunds-Str.");
        break;
    }
    case 215506:
    {
        returnValue = F("Maria-Pawlowna-Str.");
        break;
    }
    case 215507:
    {
        returnValue = F("Maria-Penn-Str.");
        break;
    }
    case 215508:
    {
        returnValue = F("Maria-Poyntz-Str.");
        break;
    }
    case 215509:
    {
        returnValue = F("Maria-Probst-Str.");
        break;
    }
    case 215510:
    {
        returnValue = F("Maria-Proebst-Weg");
        break;
    }
    case 215511:
    {
        returnValue = F("Maria-Rainer-Str.");
        break;
    }
    case 215512:
    {
        returnValue = F("Maria-Rasch-Weg");
        break;
    }
    case 215513:
    {
        returnValue = F("Maria-Rast-Str.");
        break;
    }
    case 215514:
    {
        returnValue = F("Maria-Reiff-Weg");
        break;
    }
    case 215515:
    {
        returnValue = F("Maria-Rigel-Str.");
        break;
    }
    case 215516:
    {
        returnValue = F("Maria-Rodenhauser-Str.");
        break;
    }
    case 215517:
    {
        returnValue = F("Maria-Rosenthal-Ring");
        break;
    }
    case 215518:
    {
        returnValue = F("Maria-Rost-Str.");
        break;
    }
    case 215519:
    {
        returnValue = F("Maria-Rupp-Weg");
        break;
    }
    case 215520:
    {
        returnValue = F("Maria-Salome-Buchmüller-Str.");
        break;
    }
    case 215521:
    {
        returnValue = F("Maria-Sand-Str.");
        break;
    }
    case 215522:
    {
        returnValue = F("Maria-Scherer-Str.");
        break;
    }
    case 215523:
    {
        returnValue = F("Maria-Schiffer-Str.");
        break;
    }
    case 215524:
    {
        returnValue = F("Maria-Schlegel-Str.");
        break;
    }
    case 215525:
    {
        returnValue = F("Maria-Schlenz-Str.");
        break;
    }
    case 215526:
    {
        returnValue = F("Maria-Schmelz-Weg");
        break;
    }
    case 215527:
    {
        returnValue = F("Maria-Schmid-Str.");
        break;
    }
    case 215528:
    {
        returnValue = F("Maria-Schnee-Str.");
        break;
    }
    case 215529:
    {
        returnValue = F("Maria-Schnee-Weg");
        break;
    }
    case 215530:
    {
        returnValue = F("Maria-Schray-Weg");
        break;
    }
    case 215531:
    {
        returnValue = F("Maria-Schreiner-Weg");
        break;
    }
    case 215532:
    {
        returnValue = F("Maria-Schweiger-Ring");
        break;
    }
    case 215533:
    {
        returnValue = F("Maria-Schwägerl-Str.");
        break;
    }
    case 215534:
    {
        returnValue = F("Maria-Seidel-Str.");
        break;
    }
    case 215535:
    {
        returnValue = F("Maria-Seidl-Weg");
        break;
    }
    case 215536:
    {
        returnValue = F("Maria-Sevenich-Weg");
        break;
    }
    case 215537:
    {
        returnValue = F("Maria-Sibylla-Merian-Hof");
        break;
    }
    case 215538:
    {
        returnValue = F("Maria-Sibylla-Merian-Str.");
        break;
    }
    case 215539:
    {
        returnValue = F("Maria-Sibylla-Merian-Weg");
        break;
    }
    case 215540:
    {
        returnValue = F("Maria-Sohmann-Str.");
        break;
    }
    case 215541:
    {
        returnValue = F("Maria-Sophia-Str.");
        break;
    }
    case 215542:
    {
        returnValue = F("Maria-Springe-Weg");
        break;
    }
    case 215543:
    {
        returnValue = F("Maria-Stapp-Weg");
        break;
    }
    case 215544:
    {
        returnValue = F("Maria-Stauner-Weg");
        break;
    }
    case 215545:
    {
        returnValue = F("Maria-Stern Str.");
        break;
    }
    case 215546:
    {
        returnValue = F("Maria-Stern-Platz");
        break;
    }
    case 215547:
    {
        returnValue = F("Maria-Stern-Str.");
        break;
    }
    case 215548:
    {
        returnValue = F("Maria-Stieren-Weg");
        break;
    }
    case 215549:
    {
        returnValue = F("Maria-Stockbauer-Weg");
        break;
    }
    case 215550:
    {
        returnValue = F("Maria-Strassner-Weg");
        break;
    }
    case 215551:
    {
        returnValue = F("Maria-Stuart-Str.");
        break;
    }
    case 215552:
    {
        returnValue = F("Maria-Susanna-Str.");
        break;
    }
    case 215553:
    {
        returnValue = F("Maria-Sybilla-Merian-Str.");
        break;
    }
    case 215554:
    {
        returnValue = F("Maria-Sybille-Merian-Weg");
        break;
    }
    case 215555:
    {
        returnValue = F("Maria-Tann-Weg");
        break;
    }
    case 215556:
    {
        returnValue = F("Maria-Terwiel-Str.");
        break;
    }
    case 215557:
    {
        returnValue = F("Maria-Thann");
        break;
    }
    case 215558:
    {
        returnValue = F("Maria-Theresia-Allee");
        break;
    }
    case 215559:
    {
        returnValue = F("Maria-Theresia-Haselmayr-Str.");
        break;
    }
    case 215560:
    {
        returnValue = F("Maria-Theresia-Promenade");
        break;
    }
    case 215561:
    {
        returnValue = F("Maria-Theresia-Str.");
        break;
    }
    case 215562:
    {
        returnValue = F("Maria-Theresien-Str.");
        break;
    }
    case 215563:
    {
        returnValue = F("Maria-Tiefenbacher-Str.");
        break;
    }
    case 215564:
    {
        returnValue = F("Maria-Triller-Str.");
        break;
    }
    case 215565:
    {
        returnValue = F("Maria-Trost-Allee");
        break;
    }
    case 215566:
    {
        returnValue = F("Maria-Uhden-Weg");
        break;
    }
    case 215567:
    {
        returnValue = F("Maria-Uhrmann-Str.");
        break;
    }
    case 215568:
    {
        returnValue = F("Maria-Ursula-Maier-Weg");
        break;
    }
    case 215569:
    {
        returnValue = F("Maria-Viktoria-Str.");
        break;
    }
    case 215570:
    {
        returnValue = F("Maria-Von-Linden-Str.");
        break;
    }
    case 215571:
    {
        returnValue = F("Maria-Wagenhäuser-Str.");
        break;
    }
    case 215572:
    {
        returnValue = F("Maria-Wald-Str.");
        break;
    }
    case 215573:
    {
        returnValue = F("Maria-Ward-Platz");
        break;
    }
    case 215574:
    {
        returnValue = F("Maria-Ward-Str.");
        break;
    }
    case 215575:
    {
        returnValue = F("Maria-Ward-Weg");
        break;
    }
    case 215576:
    {
        returnValue = F("Maria-Weber-Weg");
        break;
    }
    case 215577:
    {
        returnValue = F("Maria-Weigand-Platz");
        break;
    }
    case 215578:
    {
        returnValue = F("Maria-Weiß-Str.");
        break;
    }
    case 215579:
    {
        returnValue = F("Maria-Wörther-Str.");
        break;
    }
    case 215580:
    {
        returnValue = F("Maria-Zanders-Anlage");
        break;
    }
    case 215581:
    {
        returnValue = F("Maria-Zanders-Str.");
        break;
    }
    case 215582:
    {
        returnValue = F("Maria-Zell-Weg");
        break;
    }
    case 215583:
    {
        returnValue = F("Maria-Zimmermann-Str.");
        break;
    }
    case 215584:
    {
        returnValue = F("Maria-am-Berg");
        break;
    }
    case 215585:
    {
        returnValue = F("Maria-in-der-Au");
        break;
    }
    case 215586:
    {
        returnValue = F("Maria-und-Georg-Dietrich-Str.");
        break;
    }
    case 215587:
    {
        returnValue = F("Maria-von-Ahlefeldt Str.");
        break;
    }
    case 215588:
    {
        returnValue = F("Maria-von-Bosnien-Weg");
        break;
    }
    case 215589:
    {
        returnValue = F("Maria-von-Burgund-Str.");
        break;
    }
    case 215590:
    {
        returnValue = F("Maria-von-Haxthausen-Weg");
        break;
    }
    case 215591:
    {
        returnValue = F("Maria-von-Jever-Str.");
        break;
    }
    case 215592:
    {
        returnValue = F("Maria-von-Linden-Str.");
        break;
    }
    case 215593:
    {
        returnValue = F("Maria-von-Linden-Weg");
        break;
    }
    case 215594:
    {
        returnValue = F("Maria-von-Neuenstein-Str.");
        break;
    }
    case 215595:
    {
        returnValue = F("Mariabergstr.");
        break;
    }
    case 215596:
    {
        returnValue = F("Mariabrunner Str.");
        break;
    }
    case 215597:
    {
        returnValue = F("Mariabrunnstr.");
        break;
    }
    case 215598:
    {
        returnValue = F("Mariabrunnweg");
        break;
    }
    case 215599:
    {
        returnValue = F("Mariaburghausener Str.");
        break;
    }
    case 215600:
    {
        returnValue = F("Mariadorfer Str.");
        break;
    }
    case 215601:
    {
        returnValue = F("Mariahallstr.");
        break;
    }
    case 215602:
    {
        returnValue = F("Mariahilfanger");
        break;
    }
    case 215603:
    {
        returnValue = F("Mariahilfberg");
        break;
    }
    case 215604:
    {
        returnValue = F("Mariahilfbergweg");
        break;
    }
    case 215605:
    {
        returnValue = F("Mariahilfer Str.");
        break;
    }
    case 215606:
    {
        returnValue = F("Mariahilferstr.");
        break;
    }
    case 215607:
    {
        returnValue = F("Mariahilferweg");
        break;
    }
    case 215608:
    {
        returnValue = F("Mariahilfkirchenweg");
        break;
    }
    case 215609:
    {
        returnValue = F("Mariahilfstr.");
        break;
    }
    case 215610:
    {
        returnValue = F("Mariahilfweg");
        break;
    }
    case 215611:
    {
        returnValue = F("Mariahof");
        break;
    }
    case 215612:
    {
        returnValue = F("Mariahof - Unterpark");
        break;
    }
    case 215613:
    {
        returnValue = F("Mariahofweg");
        break;
    }
    case 215614:
    {
        returnValue = F("Mariahöh");
        break;
    }
    case 215615:
    {
        returnValue = F("Mariahütte");
        break;
    }
    case 215616:
    {
        returnValue = F("Mariahütter Str.");
        break;
    }
    case 215617:
    {
        returnValue = F("Mariakirchener Str.");
        break;
    }
    case 215618:
    {
        returnValue = F("Mariakirchner Str.");
        break;
    }
    case 215619:
    {
        returnValue = F("Mariakronstr.");
        break;
    }
    case 215620:
    {
        returnValue = F("Mariama-Ba-Str.");
        break;
    }
    case 215621:
    {
        returnValue = F("Marian-Pusch-Weg");
        break;
    }
    case 215622:
    {
        returnValue = F("Marian-Wieser-Weg");
        break;
    }
    case 215623:
    {
        returnValue = F("Mariandelsteg");
        break;
    }
    case 215624:
    {
        returnValue = F("Marianne-Adrian-Weg");
        break;
    }
    case 215625:
    {
        returnValue = F("Marianne-Andreas-Weg");
        break;
    }
    case 215626:
    {
        returnValue = F("Marianne-Baecker-Allee");
        break;
    }
    case 215627:
    {
        returnValue = F("Marianne-Barisch-Weg");
        break;
    }
    case 215628:
    {
        returnValue = F("Marianne-Beuchert-Platz");
        break;
    }
    case 215629:
    {
        returnValue = F("Marianne-Blumenbecker-Park");
        break;
    }
    case 215630:
    {
        returnValue = F("Marianne-Brandt-Str.");
        break;
    }
    case 215631:
    {
        returnValue = F("Marianne-Brandt-Weg");
        break;
    }
    case 215632:
    {
        returnValue = F("Marianne-Bruns-Str.");
        break;
    }
    case 215633:
    {
        returnValue = F("Marianne-Carré-Str.");
        break;
    }
    case 215634:
    {
        returnValue = F("Marianne-Cohn-Str.");
        break;
    }
    case 215635:
    {
        returnValue = F("Marianne-Ehrmann-Str.");
        break;
    }
    case 215636:
    {
        returnValue = F("Marianne-Fritzen-Weg");
        break;
    }
    case 215637:
    {
        returnValue = F("Marianne-Grunthal-Str.");
        break;
    }
    case 215638:
    {
        returnValue = F("Marianne-Heese-Str.");
        break;
    }
    case 215639:
    {
        returnValue = F("Marianne-Hoppe-Weg");
        break;
    }
    case 215640:
    {
        returnValue = F("Marianne-Kahlen-Str.");
        break;
    }
    case 215641:
    {
        returnValue = F("Marianne-Kirchgessner-Str.");
        break;
    }
    case 215642:
    {
        returnValue = F("Marianne-Mecke-Weg");
        break;
    }
    case 215643:
    {
        returnValue = F("Marianne-Plehn-Weg");
        break;
    }
    case 215644:
    {
        returnValue = F("Marianne-Rein-Str.");
        break;
    }
    case 215645:
    {
        returnValue = F("Marianne-Rihm-Str.");
        break;
    }
    case 215646:
    {
        returnValue = F("Marianne-Sauter-Weg");
        break;
    }
    case 215647:
    {
        returnValue = F("Marianne-Scheelken-Str.");
        break;
    }
    case 215648:
    {
        returnValue = F("Marianne-Schmidt-Weg");
        break;
    }
    case 215649:
    {
        returnValue = F("Marianne-Schnittger-Weg");
        break;
    }
    case 215650:
    {
        returnValue = F("Marianne-Tennhof-Str.");
        break;
    }
    case 215651:
    {
        returnValue = F("Marianne-Vogel-Weg");
        break;
    }
    case 215652:
    {
        returnValue = F("Marianne-Weber-Str.");
        break;
    }
    case 215653:
    {
        returnValue = F("Marianne-Weber-Weg");
        break;
    }
    case 215654:
    {
        returnValue = F("Marianne-Werefkin-Str.");
        break;
    }
    case 215655:
    {
        returnValue = F("Marianne-Wittmann-Str.");
        break;
    }
    case 215656:
    {
        returnValue = F("Marianne-von-Werefkin-Str.");
        break;
    }
    case 215657:
    {
        returnValue = F("Marianne-von-Werefkin-Weg");
        break;
    }
    case 215658:
    {
        returnValue = F("Mariannen Brücke");
        break;
    }
    case 215659:
    {
        returnValue = F("Mariannenbahn");
        break;
    }
    case 215660:
    {
        returnValue = F("Mariannenhof");
        break;
    }
    case 215661:
    {
        returnValue = F("Mariannenhofer Str.");
        break;
    }
    case 215662:
    {
        returnValue = F("Mariannenpark");
        break;
    }
    case 215663:
    {
        returnValue = F("Mariannenplatz");
        break;
    }
    case 215664:
    {
        returnValue = F("Mariannenstr.");
        break;
    }
    case 215665:
    {
        returnValue = F("Mariannenthaler Str.");
        break;
    }
    case 215666:
    {
        returnValue = F("Mariannenweg");
        break;
    }
    case 215667:
    {
        returnValue = F("Marianneweg");
        break;
    }
    case 215668:
    {
        returnValue = F("Mariannhillstr.");
        break;
    }
    case 215669:
    {
        returnValue = F("Mariannhillweg");
        break;
    }
    case 215670:
    {
        returnValue = F("Marianusstr.");
        break;
    }
    case 215671:
    {
        returnValue = F("Mariaorter Brücke");
        break;
    }
    case 215672:
    {
        returnValue = F("Mariaorter Str.");
        break;
    }
    case 215673:
    {
        returnValue = F("Mariaspringweg");
        break;
    }
    case 215674:
    {
        returnValue = F("Mariastiftstr.");
        break;
    }
    case 215675:
    {
        returnValue = F("Mariastr.");
        break;
    }
    case 215676:
    {
        returnValue = F("Mariatal");
        break;
    }
    case 215677:
    {
        returnValue = F("Mariataler Str.");
        break;
    }
    case 215678:
    {
        returnValue = F("Mariawalder Str.");
        break;
    }
    case 215679:
    {
        returnValue = F("Mariaweilerstr.");
        break;
    }
    case 215680:
    {
        returnValue = F("Mariawerth");
        break;
    }
    case 215681:
    {
        returnValue = F("Mariazeller Str.");
        break;
    }
    case 215682:
    {
        returnValue = F("Mariazeller Weg");
        break;
    }
    case 215683:
    {
        returnValue = F("Mariborer Str.");
        break;
    }
    case 215684:
    {
        returnValue = F("Maridelweg");
        break;
    }
    case 215685:
    {
        returnValue = F("Marie Antoinette Brücke");
        break;
    }
    case 215686:
    {
        returnValue = F("Marie Kurz Hof");
        break;
    }
    case 215687:
    {
        returnValue = F("Marie-Alexandra-Str.");
        break;
    }
    case 215688:
    {
        returnValue = F("Marie-Ankermüller-Str.");
        break;
    }
    case 215689:
    {
        returnValue = F("Marie-Anne-Kuntze-Weg");
        break;
    }
    case 215690:
    {
        returnValue = F("Marie-Baum-Str.");
        break;
    }
    case 215691:
    {
        returnValue = F("Marie-Beck-Weg");
        break;
    }
    case 215692:
    {
        returnValue = F("Marie-Behncke-Str.");
        break;
    }
    case 215693:
    {
        returnValue = F("Marie-Bernays-Platz");
        break;
    }
    case 215694:
    {
        returnValue = F("Marie-Bernays-Ring");
        break;
    }
    case 215695:
    {
        returnValue = F("Marie-Bieber-Str.");
        break;
    }
    case 215696:
    {
        returnValue = F("Marie-Bittorf-Anlage");
        break;
    }
    case 215697:
    {
        returnValue = F("Marie-Bloch-Str.");
        break;
    }
    case 215698:
    {
        returnValue = F("Marie-Brosin-Weg");
        break;
    }
    case 215699:
    {
        returnValue = F("Marie-Buckel");
        break;
    }
    case 215700:
    {
        returnValue = F("Marie-Calm-Str.");
        break;
    }
    case 215701:
    {
        returnValue = F("Marie-Carstens-Str.");
        break;
    }
    case 215702:
    {
        returnValue = F("Marie-Charlotte-Wasmuht-Str.");
        break;
    }
    case 215703:
    {
        returnValue = F("Marie-Christ-Platz");
        break;
    }
    case 215704:
    {
        returnValue = F("Marie-Clauss-Str.");
        break;
    }
    case 215705:
    {
        returnValue = F("Marie-Colinet-Str.");
        break;
    }
    case 215706:
    {
        returnValue = F("Marie-Curie-Allee");
        break;
    }
    case 215707:
    {
        returnValue = F("Marie-Curie-Hof");
        break;
    }
    case 215708:
    {
        returnValue = F("Marie-Curie-Höhe");
        break;
    }
    case 215709:
    {
        returnValue = F("Marie-Curie-Platz");
        break;
    }
    case 215710:
    {
        returnValue = F("Marie-Curie-Ring");
        break;
    }
    case 215711:
    {
        returnValue = F("Marie-Curie-Str.");
        break;
    }
    case 215712:
    {
        returnValue = F("Marie-Curie-Strasse");
        break;
    }
    case 215713:
    {
        returnValue = F("Marie-Curie-Weg");
        break;
    }
    case 215714:
    {
        returnValue = F("Marie-Deubler-Str.");
        break;
    }
    case 215715:
    {
        returnValue = F("Marie-Diederich-Str.");
        break;
    }
    case 215716:
    {
        returnValue = F("Marie-Eberth-Str.");
        break;
    }
    case 215717:
    {
        returnValue = F("Marie-Elisabeth-Lüders-Str.");
        break;
    }
    case 215718:
    {
        returnValue = F("Marie-Elisabeth-Lüders-Weg");
        break;
    }
    case 215719:
    {
        returnValue = F("Marie-Elise-Kayser-Str.");
        break;
    }
    case 215720:
    {
        returnValue = F("Marie-Grasnick-Weg");
        break;
    }
    case 215721:
    {
        returnValue = F("Marie-Hackfeld-Str.");
        break;
    }
    case 215722:
    {
        returnValue = F("Marie-Hager-Str.");
        break;
    }
    case 215723:
    {
        returnValue = F("Marie-Hankel-Str.");
        break;
    }
    case 215724:
    {
        returnValue = F("Marie-Hannemann-Str.");
        break;
    }
    case 215725:
    {
        returnValue = F("Marie-Harrer-Str.");
        break;
    }
    case 215726:
    {
        returnValue = F("Marie-Hart-Weg");
        break;
    }
    case 215727:
    {
        returnValue = F("Marie-Hassenpflug-Weg");
        break;
    }
    case 215728:
    {
        returnValue = F("Marie-Hedwig-Str.");
        break;
    }
    case 215729:
    {
        returnValue = F("Marie-Hellmann-Weg");
        break;
    }
    case 215730:
    {
        returnValue = F("Marie-Hesse-Weg");
        break;
    }
    case 215731:
    {
        returnValue = F("Marie-Huzel-Str.");
        break;
    }
    case 215732:
    {
        returnValue = F("Marie-Höhne-Str.");
        break;
    }
    case 215733:
    {
        returnValue = F("Marie-Jahn-Str.");
        break;
    }
    case 215734:
    {
        returnValue = F("Marie-Jahoda-Weg");
        break;
    }
    case 215735:
    {
        returnValue = F("Marie-Jorns-Ring");
        break;
    }
    case 215736:
    {
        returnValue = F("Marie-Juchacz Weg");
        break;
    }
    case 215737:
    {
        returnValue = F("Marie-Juchacz-Allee");
        break;
    }
    case 215738:
    {
        returnValue = F("Marie-Juchacz-Park");
        break;
    }
    case 215739:
    {
        returnValue = F("Marie-Juchacz-Platz");
        break;
    }
    case 215740:
    {
        returnValue = F("Marie-Juchacz-Ring");
        break;
    }
    case 215741:
    {
        returnValue = F("Marie-Juchacz-Str.");
        break;
    }
    case 215742:
    {
        returnValue = F("Marie-Juchacz-Weg");
        break;
    }
    case 215743:
    {
        returnValue = F("Marie-Jung-Str.");
        break;
    }
    case 215744:
    {
        returnValue = F("Marie-Kahle-Allee");
        break;
    }
    case 215745:
    {
        returnValue = F("Marie-Kick-Str.");
        break;
    }
    case 215746:
    {
        returnValue = F("Marie-Kreft-Ring");
        break;
    }
    case 215747:
    {
        returnValue = F("Marie-Kupfer-Weg");
        break;
    }
    case 215748:
    {
        returnValue = F("Marie-Lang-Weg");
        break;
    }
    case 215749:
    {
        returnValue = F("Marie-Lene-Rödder-Str.");
        break;
    }
    case 215750:
    {
        returnValue = F("Marie-Louise-Str.");
        break;
    }
    case 215751:
    {
        returnValue = F("Marie-Luise-Fleißer-Str.");
        break;
    }
    case 215752:
    {
        returnValue = F("Marie-Luise-Fleißer-Weg");
        break;
    }
    case 215753:
    {
        returnValue = F("Marie-Luise-Hensel-Weg");
        break;
    }
    case 215754:
    {
        returnValue = F("Marie-Luise-Jahn-Str.");
        break;
    }
    case 215755:
    {
        returnValue = F("Marie-Luise-Kaschnitz-Hof");
        break;
    }
    case 215756:
    {
        returnValue = F("Marie-Luise-Kaschnitz-Str.");
        break;
    }
    case 215757:
    {
        returnValue = F("Marie-Luise-Kaschnitz-Weg");
        break;
    }
    case 215758:
    {
        returnValue = F("Marie-Luise-Metge-Str.");
        break;
    }
    case 215759:
    {
        returnValue = F("Marie-Luise-Pleißner-Park");
        break;
    }
    case 215760:
    {
        returnValue = F("Marie-Luise-Tanski-Str.");
        break;
    }
    case 215761:
    {
        returnValue = F("Marie-Luisen-Str.");
        break;
    }
    case 215762:
    {
        returnValue = F("Marie-Lütgens-Weg");
        break;
    }
    case 215763:
    {
        returnValue = F("Marie-Marcks-Str.");
        break;
    }
    case 215764:
    {
        returnValue = F("Marie-Martens-Str.");
        break;
    }
    case 215765:
    {
        returnValue = F("Marie-Merkle-Str.");
        break;
    }
    case 215766:
    {
        returnValue = F("Marie-Mindermann-Str.");
        break;
    }
    case 215767:
    {
        returnValue = F("Marie-Moelhoff-Str.");
        break;
    }
    case 215768:
    {
        returnValue = F("Marie-Müller-Str.");
        break;
    }
    case 215769:
    {
        returnValue = F("Marie-Nauen-Str.");
        break;
    }
    case 215770:
    {
        returnValue = F("Marie-Paur-Str.");
        break;
    }
    case 215771:
    {
        returnValue = F("Marie-Rasch-Str.");
        break;
    }
    case 215772:
    {
        returnValue = F("Marie-Schandri-Str.");
        break;
    }
    case 215773:
    {
        returnValue = F("Marie-Scheele-Str.");
        break;
    }
    case 215774:
    {
        returnValue = F("Marie-Schenk-Str.");
        break;
    }
    case 215775:
    {
        returnValue = F("Marie-Schlei-Allee");
        break;
    }
    case 215776:
    {
        returnValue = F("Marie-Schlei-Str.");
        break;
    }
    case 215777:
    {
        returnValue = F("Marie-Schlei-Weg");
        break;
    }
    case 215778:
    {
        returnValue = F("Marie-Schmidt-Str.");
        break;
    }
    case 215779:
    {
        returnValue = F("Marie-Schmidtsberg-Str.");
        break;
    }
    case 215780:
    {
        returnValue = F("Marie-Schorge-Str.");
        break;
    }
    case 215781:
    {
        returnValue = F("Marie-Simon-Str.");
        break;
    }
    case 215782:
    {
        returnValue = F("Marie-Specht-Weg");
        break;
    }
    case 215783:
    {
        returnValue = F("Marie-Stengle-Str.");
        break;
    }
    case 215784:
    {
        returnValue = F("Marie-Stritt-Str.");
        break;
    }
    case 215785:
    {
        returnValue = F("Marie-Sybille-Platz");
        break;
    }
    case 215786:
    {
        returnValue = F("Marie-Theres-Baur-Str.");
        break;
    }
    case 215787:
    {
        returnValue = F("Marie-Tilch-Str.");
        break;
    }
    case 215788:
    {
        returnValue = F("Marie-Trier-Str.");
        break;
    }
    case 215789:
    {
        returnValue = F("Marie-Ulfers-Weg");
        break;
    }
    case 215790:
    {
        returnValue = F("Marie-Villinger-Str.");
        break;
    }
    case 215791:
    {
        returnValue = F("Marie-Volk-Str.");
        break;
    }
    case 215792:
    {
        returnValue = F("Marie-Wagenknecht-Str.");
        break;
    }
    case 215793:
    {
        returnValue = F("Marie-Willerding-Str.");
        break;
    }
    case 215794:
    {
        returnValue = F("Marie-Wittich-Str.");
        break;
    }
    case 215795:
    {
        returnValue = F("Marie-Zehetmaier-Str.");
        break;
    }
    case 215796:
    {
        returnValue = F("Marie-von-Kalckreuth-Weg");
        break;
    }
    case 215797:
    {
        returnValue = F("Marie-von-Oriola-Str.");
        break;
    }
    case 215798:
    {
        returnValue = F("Marie-von-Pentz-Weg");
        break;
    }
    case 215799:
    {
        returnValue = F("Mariechenweg");
        break;
    }
    case 215800:
    {
        returnValue = F("Mariefredstr.");
        break;
    }
    case 215801:
    {
        returnValue = F("Marielies-Schleicher-Str.");
        break;
    }
    case 215802:
    {
        returnValue = F("Marieluise-Fleißer-Str.");
        break;
    }
    case 215803:
    {
        returnValue = F("Marieluise-Fleißer-Weg");
        break;
    }
    case 215804:
    {
        returnValue = F("Marien Geräumt");
        break;
    }
    case 215805:
    {
        returnValue = F("Marien-Kirchgasse");
        break;
    }
    case 215806:
    {
        returnValue = F("Marien-Kirchplatz");
        break;
    }
    case 215807:
    {
        returnValue = F("Marienallee");
        break;
    }
    case 215808:
    {
        returnValue = F("Marienau");
        break;
    }
    case 215809:
    {
        returnValue = F("Marienaue");
        break;
    }
    case 215810:
    {
        returnValue = F("Marienauer Str.");
        break;
    }
    case 215811:
    {
        returnValue = F("Marienauer Weg");
        break;
    }
    case 215812:
    {
        returnValue = F("Marienbad Brandenburg");
        break;
    }
    case 215813:
    {
        returnValue = F("Marienbader Allee");
        break;
    }
    case 215814:
    {
        returnValue = F("Marienbader Platz");
        break;
    }
    case 215815:
    {
        returnValue = F("Marienbader Ring");
        break;
    }
    case 215816:
    {
        returnValue = F("Marienbader Str.");
        break;
    }
    case 215817:
    {
        returnValue = F("Marienbader Weg");
        break;
    }
    case 215818:
    {
        returnValue = F("Marienbadweg");
        break;
    }
    case 215819:
    {
        returnValue = F("Marienbaumer Str.");
        break;
    }
    case 215820:
    {
        returnValue = F("Marienberg");
        break;
    }
    case 215821:
    {
        returnValue = F("Marienberg Nord-Aufgang");
        break;
    }
    case 215822:
    {
        returnValue = F("Marienberg Süd-Aufgang");
        break;
    }
    case 215823:
    {
        returnValue = F("Marienberger Hohl");
        break;
    }
    case 215824:
    {
        returnValue = F("Marienberger Str.");
        break;
    }
    case 215825:
    {
        returnValue = F("Marienberger Weg");
        break;
    }
    case 215826:
    {
        returnValue = F("Marienberghang");
        break;
    }
    case 215827:
    {
        returnValue = F("Marienberghausener Str.");
        break;
    }
    case 215828:
    {
        returnValue = F("Marienbergstr.");
        break;
    }
    case 215829:
    {
        returnValue = F("Marienbildweg");
        break;
    }
    case 215830:
    {
        returnValue = F("Marienblum");
        break;
    }
    case 215831:
    {
        returnValue = F("Marienblumenweg");
        break;
    }
    case 215832:
    {
        returnValue = F("Marienbongard");
        break;
    }
    case 215833:
    {
        returnValue = F("Marienborn");
        break;
    }
    case 215834:
    {
        returnValue = F("Marienborn Weg");
        break;
    }
    case 215835:
    {
        returnValue = F("Marienborner Bergweg");
        break;
    }
    case 215836:
    {
        returnValue = F("Marienborner Str.");
        break;
    }
    case 215837:
    {
        returnValue = F("Marienborner Weg");
        break;
    }
    case 215838:
    {
        returnValue = F("Marienbornstr.");
        break;
    }
    case 215839:
    {
        returnValue = F("Marienbornweg");
        break;
    }
    case 215840:
    {
        returnValue = F("Marienbreiter Weg");
        break;
    }
    case 215841:
    {
        returnValue = F("Marienbruchstr.");
        break;
    }
    case 215842:
    {
        returnValue = F("Marienbrunnenstr.");
        break;
    }
    case 215843:
    {
        returnValue = F("Marienbrunner Str.");
        break;
    }
    case 215844:
    {
        returnValue = F("Marienbrunner Weg");
        break;
    }
    case 215845:
    {
        returnValue = F("Marienbrunnstr.");
        break;
    }
    case 215846:
    {
        returnValue = F("Marienbrücke");
        break;
    }
    case 215847:
    {
        returnValue = F("Marienburg");
        break;
    }
    case 215848:
    {
        returnValue = F("Marienburg Park");
        break;
    }
    case 215849:
    {
        returnValue = F("Marienburger Damm");
        break;
    }
    case 215850:
    {
        returnValue = F("Marienburger Platz");
        break;
    }
    case 215851:
    {
        returnValue = F("Marienburger Str.");
        break;
    }
    case 215852:
    {
        returnValue = F("Marienburger Ufer");
        break;
    }
    case 215853:
    {
        returnValue = F("Marienburger Weg");
        break;
    }
    case 215854:
    {
        returnValue = F("Marienburgerstr.");
        break;
    }
    case 215855:
    {
        returnValue = F("Marienburgpark");
        break;
    }
    case 215856:
    {
        returnValue = F("Marienburgstr.");
        break;
    }
    case 215857:
    {
        returnValue = F("Marienburgweg");
        break;
    }
    case 215858:
    {
        returnValue = F("Marienbuschfeld");
        break;
    }
    case 215859:
    {
        returnValue = F("Marienbäumchen");
        break;
    }
    case 215860:
    {
        returnValue = F("Marienchor");
        break;
    }
    case 215861:
    {
        returnValue = F("Marienchorstr.");
        break;
    }
    case 215862:
    {
        returnValue = F("Mariendistelweg");
        break;
    }
    case 215863:
    {
        returnValue = F("Mariendorf");
        break;
    }
    case 215864:
    {
        returnValue = F("Mariendorfer Str.");
        break;
    }
    case 215865:
    {
        returnValue = F("Marieneck");
        break;
    }
    case 215866:
    {
        returnValue = F("Marieneher Str.");
        break;
    }
    case 215867:
    {
        returnValue = F("Marieneyer Str.");
        break;
    }
    case 215868:
    {
        returnValue = F("Marienfeld");
        break;
    }
    case 215869:
    {
        returnValue = F("Marienfelde");
        break;
    }
    case 215870:
    {
        returnValue = F("Marienfelder Allee");
        break;
    }
    case 215871:
    {
        returnValue = F("Marienfelder Anger");
        break;
    }
    case 215872:
    {
        returnValue = F("Marienfelder Str.");
        break;
    }
    case 215873:
    {
        returnValue = F("Marienfelder Weg");
        break;
    }
    case 215874:
    {
        returnValue = F("Marienfeldstr.");
        break;
    }
    case 215875:
    {
        returnValue = F("Marienfeldweg");
        break;
    }
    case 215876:
    {
        returnValue = F("Marienfelsenweg");
        break;
    }
    case 215877:
    {
        returnValue = F("Marienfelser Str.");
        break;
    }
    case 215878:
    {
        returnValue = F("Marienfelsstr.");
        break;
    }
    case 215879:
    {
        returnValue = F("Marienforster Allee");
        break;
    }
    case 215880:
    {
        returnValue = F("Marienforster Kirchweg");
        break;
    }
    case 215881:
    {
        returnValue = F("Marienforster Promenade");
        break;
    }
    case 215882:
    {
        returnValue = F("Marienforster Steinweg");
        break;
    }
    case 215883:
    {
        returnValue = F("Marienforster Str.");
        break;
    }
    case 215884:
    {
        returnValue = F("Marienforster Weg");
        break;
    }
    case 215885:
    {
        returnValue = F("Marienfriedhof");
        break;
    }
    case 215886:
    {
        returnValue = F("Marienfriedstr.");
        break;
    }
    case 215887:
    {
        returnValue = F("Mariengaard");
        break;
    }
    case 215888:
    {
        returnValue = F("Mariengaarder Str.");
        break;
    }
    case 215889:
    {
        returnValue = F("Mariengaden");
        break;
    }
    case 215890:
    {
        returnValue = F("Mariengarten");
        break;
    }
    case 215891:
    {
        returnValue = F("Mariengartener Str.");
        break;
    }
    case 215892:
    {
        returnValue = F("Mariengartengasse");
        break;
    }
    case 215893:
    {
        returnValue = F("Mariengartenstr.");
        break;
    }
    case 215894:
    {
        returnValue = F("Mariengasse");
        break;
    }
    case 215895:
    {
        returnValue = F("Marienglacis");
        break;
    }
    case 215896:
    {
        returnValue = F("Mariengrasweg");
        break;
    }
    case 215897:
    {
        returnValue = F("Mariengrotte");
        break;
    }
    case 215898:
    {
        returnValue = F("Mariengrund");
        break;
    }
    case 215899:
    {
        returnValue = F("Mariengueser Str.");
        break;
    }
    case 215900:
    {
        returnValue = F("Mariengässchen");
        break;
    }
    case 215901:
    {
        returnValue = F("Mariengäßchen");
        break;
    }
    case 215902:
    {
        returnValue = F("Marienhafer Str.");
        break;
    }
    case 215903:
    {
        returnValue = F("Marienhafer Wieke");
        break;
    }
    case 215904:
    {
        returnValue = F("Marienhagener Str.");
        break;
    }
    case 215905:
    {
        returnValue = F("Marienhain");
        break;
    }
    case 215906:
    {
        returnValue = F("Marienhalde");
        break;
    }
    case 215907:
    {
        returnValue = F("Marienhausgasse");
        break;
    }
    case 215908:
    {
        returnValue = F("Marienhave-Str.");
        break;
    }
    case 215909:
    {
        returnValue = F("Marienheide");
        break;
    }
    case 215910:
    {
        returnValue = F("Marienheider Str.");
        break;
    }
    case 215911:
    {
        returnValue = F("Marienhof");
        break;
    }
    case 215912:
    {
        returnValue = F("Marienhofcenter");
        break;
    }
    case 215913:
    {
        returnValue = F("Marienhofer Str.");
        break;
    }
    case 215914:
    {
        returnValue = F("Marienhofer Weg");
        break;
    }
    case 215915:
    {
        returnValue = F("Marienhofstr.");
        break;
    }
    case 215916:
    {
        returnValue = F("Marienhofweg");
        break;
    }
    case 215917:
    {
        returnValue = F("Marienholm");
        break;
    }
    case 215918:
    {
        returnValue = F("Marienholzer Weg");
        break;
    }
    case 215919:
    {
        returnValue = F("Marienholzstr.");
        break;
    }
    case 215920:
    {
        returnValue = F("Marienhook");
        break;
    }
    case 215921:
    {
        returnValue = F("Marienhäuser Weg");
        break;
    }
    case 215922:
    {
        returnValue = F("Marienhöfe");
        break;
    }
    case 215923:
    {
        returnValue = F("Marienhöh");
        break;
    }
    case 215924:
    {
        returnValue = F("Marienhöhe");
        break;
    }
    case 215925:
    {
        returnValue = F("Marienhöher Weg");
        break;
    }
    case 215926:
    {
        returnValue = F("Marienhölzungsweg");
        break;
    }
    case 215927:
    {
        returnValue = F("Marienhüttenstr.");
        break;
    }
    case 215928:
    {
        returnValue = F("Marienhüttenweg");
        break;
    }
    case 215929:
    {
        returnValue = F("Marieninsel");
        break;
    }
    case 215930:
    {
        returnValue = F("Marienkamer Str.");
        break;
    }
    case 215931:
    {
        returnValue = F("Marienkamper Str.");
        break;
    }
    case 215932:
    {
        returnValue = F("Marienkircher Feld");
        break;
    }
    case 215933:
    {
        returnValue = F("Marienkirchgang");
        break;
    }
    case 215934:
    {
        returnValue = F("Marienkirchgasse");
        break;
    }
    case 215935:
    {
        returnValue = F("Marienkirchplatz");
        break;
    }
    case 215936:
    {
        returnValue = F("Marienkirchstr.");
        break;
    }
    case 215937:
    {
        returnValue = F("Marienkirchweg");
        break;
    }
    case 215938:
    {
        returnValue = F("Marienkloster");
        break;
    }
    case 215939:
    {
        returnValue = F("Marienkooger Str.");
        break;
    }
    case 215940:
    {
        returnValue = F("Marienkoogsdeich");
        break;
    }
    case 215941:
    {
        returnValue = F("Marienkroon-Str.");
        break;
    }
    case 215942:
    {
        returnValue = F("Marienkäferweg");
        break;
    }
    case 215943:
    {
        returnValue = F("Marienküppel");
        break;
    }
    case 215944:
    {
        returnValue = F("Marienleuchter Weg");
        break;
    }
    case 215945:
    {
        returnValue = F("Marienlinde");
        break;
    }
    case 215946:
    {
        returnValue = F("Marienloher Str.");
        break;
    }
    case 215947:
    {
        returnValue = F("Marienlustgarten");
        break;
    }
    case 215948:
    {
        returnValue = F("Marienmattenweg");
        break;
    }
    case 215949:
    {
        returnValue = F("Marienmauer");
        break;
    }
    case 215950:
    {
        returnValue = F("Marienmühle");
        break;
    }
    case 215951:
    {
        returnValue = F("Marienmünsterweg");
        break;
    }
    case 215952:
    {
        returnValue = F("Marienpark");
        break;
    }
    case 215953:
    {
        returnValue = F("Marienpfad");
        break;
    }
    case 215954:
    {
        returnValue = F("Marienpforte");
        break;
    }
    case 215955:
    {
        returnValue = F("Marienpfädle");
        break;
    }
    case 215956:
    {
        returnValue = F("Marienplatz");
        break;
    }
    case 215957:
    {
        returnValue = F("Marienplatz /Verkehrsübungsplatz (Radfahrer)");
        break;
    }
    case 215958:
    {
        returnValue = F("Marienpärkle");
        break;
    }
    case 215959:
    {
        returnValue = F("Marienrain");
        break;
    }
    case 215960:
    {
        returnValue = F("Marienring");
        break;
    }
    case 215961:
    {
        returnValue = F("Marienroggenweg");
        break;
    }
    case 215962:
    {
        returnValue = F("Marienruhweg");
        break;
    }
    case 215963:
    {
        returnValue = F("Marienschachtweg");
        break;
    }
    case 215964:
    {
        returnValue = F("Marienschulweg");
        break;
    }
    case 215965:
    {
        returnValue = F("Marienstaffel");
        break;
    }
    case 215966:
    {
        returnValue = F("Marienstedter Str.");
        break;
    }
    case 215967:
    {
        returnValue = F("Marienstedter Weg");
        break;
    }
    case 215968:
    {
        returnValue = F("Mariensteg");
        break;
    }
    case 215969:
    {
        returnValue = F("Mariensteig");
        break;
    }
    case 215970:
    {
        returnValue = F("Marienstein");
        break;
    }
    case 215971:
    {
        returnValue = F("Marienstieg");
        break;
    }
    case 215972:
    {
        returnValue = F("Marienstiftstr.");
        break;
    }
    case 215973:
    {
        returnValue = F("Marienstr.");
        break;
    }
    case 215974:
    {
        returnValue = F("Marienstätter Str.");
        break;
    }
    case 215975:
    {
        returnValue = F("Marienstätter Weg");
        break;
    }
    case 215976:
    {
        returnValue = F("Marienstätterweg");
        break;
    }
    case 215977:
    {
        returnValue = F("Mariensäule");
        break;
    }
    case 215978:
    {
        returnValue = F("Mariental");
        break;
    }
    case 215979:
    {
        returnValue = F("Marientaler Au");
        break;
    }
    case 215980:
    {
        returnValue = F("Marientaler Str.");
        break;
    }
    case 215981:
    {
        returnValue = F("Marientalstr.");
        break;
    }
    case 215982:
    {
        returnValue = F("Marientalweg");
        break;
    }
    case 215983:
    {
        returnValue = F("Marienthal");
        break;
    }
    case 215984:
    {
        returnValue = F("Marienthaler Dorfstr.");
        break;
    }
    case 215985:
    {
        returnValue = F("Marienthaler Fußweg");
        break;
    }
    case 215986:
    {
        returnValue = F("Marienthaler Höhe");
        break;
    }
    case 215987:
    {
        returnValue = F("Marienthaler Str.");
        break;
    }
    case 215988:
    {
        returnValue = F("Marienthaler Waldstr.");
        break;
    }
    case 215989:
    {
        returnValue = F("Marienthaler Weg");
        break;
    }
    case 215990:
    {
        returnValue = F("Marienthaler Weißenborner Fußweg");
        break;
    }
    case 215991:
    {
        returnValue = F("Marienthalstr.");
        break;
    }
    case 215992:
    {
        returnValue = F("Marienthalweg");
        break;
    }
    case 215993:
    {
        returnValue = F("Marientor");
        break;
    }
    case 215994:
    {
        returnValue = F("Marientorbrücke");
        break;
    }
    case 215995:
    {
        returnValue = F("Marientorgraben");
        break;
    }
    case 215996:
    {
        returnValue = F("Marientormauer");
        break;
    }
    case 215997:
    {
        returnValue = F("Marientorpassage");
        break;
    }
    case 215998:
    {
        returnValue = F("Marientorstr.");
        break;
    }
    case 215999:
    {
        returnValue = F("Marientorweg");
        break;
    }
    case 216000:
    {
        returnValue = F("Marientunnel");
        break;
    }
    case 216001:
    {
        returnValue = F("Marienturm");
        break;
    }
    case 216002:
    {
        returnValue = F("Marientäle");
        break;
    }
    case 216003:
    {
        returnValue = F("Marienvorstadt");
        break;
    }
    case 216004:
    {
        returnValue = F("Marienvreder Str.");
        break;
    }
    case 216005:
    {
        returnValue = F("Marienwalder Str.");
        break;
    }
    case 216006:
    {
        returnValue = F("Marienwall");
        break;
    }
    case 216007:
    {
        returnValue = F("Marienwasser");
        break;
    }
    case 216008:
    {
        returnValue = F("Marienwasserstr.");
        break;
    }
    case 216009:
    {
        returnValue = F("Marienwasserweg");
        break;
    }
    case 216010:
    {
        returnValue = F("Marienweg");
        break;
    }
    case 216011:
    {
        returnValue = F("Marienwehr");
        break;
    }
    case 216012:
    {
        returnValue = F("Marienwehrster Zwinger");
        break;
    }
    case 216013:
    {
        returnValue = F("Marienweiler");
        break;
    }
    case 216014:
    {
        returnValue = F("Marienwerder Ring");
        break;
    }
    case 216015:
    {
        returnValue = F("Marienwerder Str.");
        break;
    }
    case 216016:
    {
        returnValue = F("Marienwerderallee");
        break;
    }
    case 216017:
    {
        returnValue = F("Marienwerderstr.");
        break;
    }
    case 216018:
    {
        returnValue = F("Marienwerderweg");
        break;
    }
    case 216019:
    {
        returnValue = F("Marienwohlde");
        break;
    }
    case 216020:
    {
        returnValue = F("Marietheres-von-Spies-Str.");
        break;
    }
    case 216021:
    {
        returnValue = F("Marietta-Ufer");
        break;
    }
    case 216022:
    {
        returnValue = F("Marignanestr.");
        break;
    }
    case 216023:
    {
        returnValue = F("Marihner Weg");
        break;
    }
    case 216024:
    {
        returnValue = F("Marijampolestr.");
        break;
    }
    case 216025:
    {
        returnValue = F("Mariken-un-Jehann-Weg");
        break;
    }
    case 216026:
    {
        returnValue = F("Marillenhof");
        break;
    }
    case 216027:
    {
        returnValue = F("Marina");
        break;
    }
    case 216028:
    {
        returnValue = F("Marina Bortfeld");
        break;
    }
    case 216029:
    {
        returnValue = F("Marina-Zwetajewa-Weg");
        break;
    }
    case 216030:
    {
        returnValue = F("Marinastr.");
        break;
    }
    case 216031:
    {
        returnValue = F("Marinebahn");
        break;
    }
    case 216032:
    {
        returnValue = F("Marinedamm");
        break;
    }
    case 216033:
    {
        returnValue = F("Marineplatz");
        break;
    }
    case 216034:
    {
        returnValue = F("Marinesiedlung");
        break;
    }
    case 216035:
    {
        returnValue = F("Marinestr.");
        break;
    }
    case 216036:
    {
        returnValue = F("Marineweg");
        break;
    }
    case 216037:
    {
        returnValue = F("Maringer Str.");
        break;
    }
    case 216038:
    {
        returnValue = F("Maringerweg");
        break;
    }
    case 216039:
    {
        returnValue = F("Marinusstr.");
        break;
    }
    case 216040:
    {
        returnValue = F("Mario-Adorf-Burgweg");
        break;
    }
    case 216041:
    {
        returnValue = F("Mario-Beckmann-Stieg");
        break;
    }
    case 216042:
    {
        returnValue = F("Marion-Donovan-Str.");
        break;
    }
    case 216043:
    {
        returnValue = F("Marion-Dönhoff-Str.");
        break;
    }
    case 216044:
    {
        returnValue = F("Marion-Dönhoff-Weg");
        break;
    }
    case 216045:
    {
        returnValue = F("Mariothstr.");
        break;
    }
    case 216046:
    {
        returnValue = F("Marisfelder Str.");
        break;
    }
    case 216047:
    {
        returnValue = F("Maristenhof");
        break;
    }
    case 216048:
    {
        returnValue = F("Marita-Loersch-Weg");
        break;
    }
    case 216049:
    {
        returnValue = F("Maritim-Platz");
        break;
    }
    case 216050:
    {
        returnValue = F("Maritimstr.");
        break;
    }
    case 216051:
    {
        returnValue = F("Marius-Eriksen-Str.");
        break;
    }
    case 216052:
    {
        returnValue = F("Marius-Faisse-Allee");
        break;
    }
    case 216053:
    {
        returnValue = F("Mariusstr.");
        break;
    }
    case 216054:
    {
        returnValue = F("Mariusweg");
        break;
    }
    case 216055:
    {
        returnValue = F("Mariánské Lázně-Platz");
        break;
    }
    case 216056:
    {
        returnValue = F("Marjana-Domaskojc-Str.");
        break;
    }
    case 216057:
    {
        returnValue = F("Marjosser Weg");
        break;
    }
    case 216058:
    {
        returnValue = F("Mark");
        break;
    }
    case 216059:
    {
        returnValue = F("Mark Friedersdorf");
        break;
    }
    case 216060:
    {
        returnValue = F("Mark I");
        break;
    }
    case 216061:
    {
        returnValue = F("Mark Nauendorf");
        break;
    }
    case 216062:
    {
        returnValue = F("Mark Pannewitz");
        break;
    }
    case 216063:
    {
        returnValue = F("Mark Schmelz");
        break;
    }
    case 216064:
    {
        returnValue = F("Mark Zschiesewitz");
        break;
    }
    case 216065:
    {
        returnValue = F("Mark-Aurel-Allee");
        break;
    }
    case 216066:
    {
        returnValue = F("Mark-Aurel-Str.");
        break;
    }
    case 216067:
    {
        returnValue = F("Mark-Hövel-Str.");
        break;
    }
    case 216068:
    {
        returnValue = F("Mark-Passage");
        break;
    }
    case 216069:
    {
        returnValue = F("Mark-Twain-Str.");
        break;
    }
    case 216070:
    {
        returnValue = F("Mark-Twain-Weg");
        break;
    }
    case 216071:
    {
        returnValue = F("Markau");
        break;
    }
    case 216072:
    {
        returnValue = F("Markauer Hauptstr.");
        break;
    }
    case 216073:
    {
        returnValue = F("Markaweg");
        break;
    }
    case 216074:
    {
        returnValue = F("Markbachweg");
        break;
    }
    case 216075:
    {
        returnValue = F("Markbauernstr.");
        break;
    }
    case 216076:
    {
        returnValue = F("Markbeinweg");
        break;
    }
    case 216077:
    {
        returnValue = F("Markbergstr.");
        break;
    }
    case 216078:
    {
        returnValue = F("Markblick");
        break;
    }
    case 216079:
    {
        returnValue = F("Markbronner Str.");
        break;
    }
    case 216080:
    {
        returnValue = F("Markbronner Weg");
        break;
    }
    case 216081:
    {
        returnValue = F("Markdorfer Str.");
        break;
    }
    case 216082:
    {
        returnValue = F("Markeer Hauptstr.");
        break;
    }
    case 216083:
    {
        returnValue = F("Markeer Str.");
        break;
    }
    case 216084:
    {
        returnValue = F("Markeicherhof");
        break;
    }
    case 216085:
    {
        returnValue = F("Markeldissen");
        break;
    }
    case 216086:
    {
        returnValue = F("Markeldisser Weg");
        break;
    }
    case 216087:
    {
        returnValue = F("Markelfinger Str.");
        break;
    }
    case 216088:
    {
        returnValue = F("Markeloh");
        break;
    }
    case 216089:
    {
        returnValue = F("Markelsbach");
        break;
    }
    case 216090:
    {
        returnValue = F("Markelsfeld");
        break;
    }
    case 216091:
    {
        returnValue = F("Markelsheimer Str.");
        break;
    }
    case 216092:
    {
        returnValue = F("Markemoote");
        break;
    }
    case 216093:
    {
        returnValue = F("Markenbergstr.");
        break;
    }
    case 216094:
    {
        returnValue = F("Markenbildchenweg");
        break;
    }
    case 216095:
    {
        returnValue = F("Markenbrauck");
        break;
    }
    case 216096:
    {
        returnValue = F("Markenbrunnen");
        break;
    }
    case 216097:
    {
        returnValue = F("Markenbusch");
        break;
    }
    case 216098:
    {
        returnValue = F("Markendorfer Dorfstr.");
        break;
    }
    case 216099:
    {
        returnValue = F("Markendorfer Gutshof");
        break;
    }
    case 216100:
    {
        returnValue = F("Markendorfer Hauptstr.");
        break;
    }
    case 216101:
    {
        returnValue = F("Markendorfer Siedlung");
        break;
    }
    case 216102:
    {
        returnValue = F("Markendorfer Str.");
        break;
    }
    case 216103:
    {
        returnValue = F("Markendorfer Waldsiedlung");
        break;
    }
    case 216104:
    {
        returnValue = F("Markendorfer Weg");
        break;
    }
    case 216105:
    {
        returnValue = F("Markeneck");
        break;
    }
    case 216106:
    {
        returnValue = F("Markengrund");
        break;
    }
    case 216107:
    {
        returnValue = F("Markenhofstr.");
        break;
    }
    case 216108:
    {
        returnValue = F("Markenhudeweg");
        break;
    }
    case 216109:
    {
        returnValue = F("Markenkamp");
        break;
    }
    case 216110:
    {
        returnValue = F("Markenkoog");
        break;
    }
    case 216111:
    {
        returnValue = F("Markenkoppel");
        break;
    }
    case 216112:
    {
        returnValue = F("Markens Kamp");
        break;
    }
    case 216113:
    {
        returnValue = F("Markenstiege");
        break;
    }
    case 216114:
    {
        returnValue = F("Markenstr.");
        break;
    }
    case 216115:
    {
        returnValue = F("Markenwaldstr.");
        break;
    }
    case 216116:
    {
        returnValue = F("Markenwaldweg");
        break;
    }
    case 216117:
    {
        returnValue = F("Markenweg");
        break;
    }
    case 216118:
    {
        returnValue = F("Marker Allee");
        break;
    }
    case 216119:
    {
        returnValue = F("Marker Breite");
        break;
    }
    case 216120:
    {
        returnValue = F("Marker Dorfstr.");
        break;
    }
    case 216121:
    {
        returnValue = F("Marker Hang");
        break;
    }
    case 216122:
    {
        returnValue = F("Marker Heuweg");
        break;
    }
    case 216123:
    {
        returnValue = F("Marker Höh");
        break;
    }
    case 216124:
    {
        returnValue = F("Marker Kirchplatz");
        break;
    }
    case 216125:
    {
        returnValue = F("Marker Kirchweg");
        break;
    }
    case 216126:
    {
        returnValue = F("Marker Mühlenweg");
        break;
    }
    case 216127:
    {
        returnValue = F("Marker Str.");
        break;
    }
    case 216128:
    {
        returnValue = F("Marker Weg");
        break;
    }
    case 216129:
    {
        returnValue = F("Markerbenhöhe");
        break;
    }
    case 216130:
    {
        returnValue = F("Markersbacher Str.");
        break;
    }
    case 216131:
    {
        returnValue = F("Markersbacher Weg");
        break;
    }
    case 216132:
    {
        returnValue = F("Markersbachstr.");
        break;
    }
    case 216133:
    {
        returnValue = F("Markersbachweg");
        break;
    }
    case 216134:
    {
        returnValue = F("Markersdorf");
        break;
    }
    case 216135:
    {
        returnValue = F("Markersdorfer Str.");
        break;
    }
    case 216136:
    {
        returnValue = F("Markersdorfer Weg");
        break;
    }
    case 216137:
    {
        returnValue = F("Markersreuth");
        break;
    }
    case 216138:
    {
        returnValue = F("Markersweg");
        break;
    }
    case 216139:
    {
        returnValue = F("Markertsgrüner Weg");
        break;
    }
    case 216140:
    {
        returnValue = F("Markertshofen");
        break;
    }
    case 216141:
    {
        returnValue = F("Markertstr.");
        break;
    }
    case 216142:
    {
        returnValue = F("Markeruper Weg");
        break;
    }
    case 216143:
    {
        returnValue = F("Markerweg");
        break;
    }
    case 216144:
    {
        returnValue = F("Markesche Str.");
        break;
    }
    case 216145:
    {
        returnValue = F("Marketendergasse");
        break;
    }
    case 216146:
    {
        returnValue = F("Marketenderinnenweg");
        break;
    }
    case 216147:
    {
        returnValue = F("Marketenderstr.");
        break;
    }
    case 216148:
    {
        returnValue = F("Marketenderweg");
        break;
    }
    case 216149:
    {
        returnValue = F("Marketweg");
        break;
    }
    case 216150:
    {
        returnValue = F("Markeweg");
        break;
    }
    case 216151:
    {
        returnValue = F("Markfelder");
        break;
    }
    case 216152:
    {
        returnValue = F("Markfelder Str.");
        break;
    }
    case 216153:
    {
        returnValue = F("Markfeldstr.");
        break;
    }
    case 216154:
    {
        returnValue = F("Markfestestr.");
        break;
    }
    case 216155:
    {
        returnValue = F("Markfür");
        break;
    }
    case 216156:
    {
        returnValue = F("Markgraben");
        break;
    }
    case 216157:
    {
        returnValue = F("Markgraf-Alexander-Str.");
        break;
    }
    case 216158:
    {
        returnValue = F("Markgraf-Bernhard-Str.");
        break;
    }
    case 216159:
    {
        returnValue = F("Markgraf-Berthold-Str.");
        break;
    }
    case 216160:
    {
        returnValue = F("Markgraf-Christoph-Str.");
        break;
    }
    case 216161:
    {
        returnValue = F("Markgraf-Diepold-Str.");
        break;
    }
    case 216162:
    {
        returnValue = F("Markgraf-Friedrich-Weg");
        break;
    }
    case 216163:
    {
        returnValue = F("Markgraf-Georg-Str.");
        break;
    }
    case 216164:
    {
        returnValue = F("Markgraf-Jacob-Allee");
        break;
    }
    case 216165:
    {
        returnValue = F("Markgraf-Karl-Str.");
        break;
    }
    case 216166:
    {
        returnValue = F("Markgraf-Ludwig-Str.");
        break;
    }
    case 216167:
    {
        returnValue = F("Markgraf-Wilhelm-Str.");
        break;
    }
    case 216168:
    {
        returnValue = F("Markgrafenallee");
        break;
    }
    case 216169:
    {
        returnValue = F("Markgrafenbrücke");
        break;
    }
    case 216170:
    {
        returnValue = F("Markgrafenbusch");
        break;
    }
    case 216171:
    {
        returnValue = F("Markgrafendamm");
        break;
    }
    case 216172:
    {
        returnValue = F("Markgrafengasse");
        break;
    }
    case 216173:
    {
        returnValue = F("Markgrafenhalde");
        break;
    }
    case 216174:
    {
        returnValue = F("Markgrafenheide");
        break;
    }
    case 216175:
    {
        returnValue = F("Markgrafenheider Str.");
        break;
    }
    case 216176:
    {
        returnValue = F("Markgrafenhof");
        break;
    }
    case 216177:
    {
        returnValue = F("Markgrafenmühle");
        break;
    }
    case 216178:
    {
        returnValue = F("Markgrafenmühlenweg");
        break;
    }
    case 216179:
    {
        returnValue = F("Markgrafenplatz");
        break;
    }
    case 216180:
    {
        returnValue = F("Markgrafenring");
        break;
    }
    case 216181:
    {
        returnValue = F("Markgrafenstr.");
        break;
    }
    case 216182:
    {
        returnValue = F("Markgrafenufer");
        break;
    }
    case 216183:
    {
        returnValue = F("Markgrafenweg");
        break;
    }
    case 216184:
    {
        returnValue = F("Markgrafenwiese");
        break;
    }
    case 216185:
    {
        returnValue = F("Markgrafpiesker Str.");
        break;
    }
    case 216186:
    {
        returnValue = F("Markgrafstr.");
        break;
    }
    case 216187:
    {
        returnValue = F("Markgrafweg");
        break;
    }
    case 216188:
    {
        returnValue = F("Markgräfler Str.");
        break;
    }
    case 216189:
    {
        returnValue = F("Markgräfler Weg");
        break;
    }
    case 216190:
    {
        returnValue = F("Markgräflerstr.");
        break;
    }
    case 216191:
    {
        returnValue = F("Markgröninger Allee");
        break;
    }
    case 216192:
    {
        returnValue = F("Markgröninger Str.");
        break;
    }
    case 216193:
    {
        returnValue = F("Markgröninger Weg");
        break;
    }
    case 216194:
    {
        returnValue = F("Markgäßchen");
        break;
    }
    case 216195:
    {
        returnValue = F("Markhahn");
        break;
    }
    case 216196:
    {
        returnValue = F("Markhahnweg");
        break;
    }
    case 216197:
    {
        returnValue = F("Markhalde");
        break;
    }
    case 216198:
    {
        returnValue = F("Markham Str.");
        break;
    }
    case 216199:
    {
        returnValue = F("Markhaulinie");
        break;
    }
    case 216200:
    {
        returnValue = F("Markhauser Kämpen");
        break;
    }
    case 216201:
    {
        returnValue = F("Markhauser Str.");
        break;
    }
    case 216202:
    {
        returnValue = F("Markhege");
        break;
    }
    case 216203:
    {
        returnValue = F("Markhofstr.");
        break;
    }
    case 216204:
    {
        returnValue = F("Markhäuser");
        break;
    }
    case 216205:
    {
        returnValue = F("Markhäuser Hof");
        break;
    }
    case 216206:
    {
        returnValue = F("Markhäuser Weg");
        break;
    }
    case 216207:
    {
        returnValue = F("Markircher Str.");
        break;
    }
    case 216208:
    {
        returnValue = F("Markkleeberger Str.");
        break;
    }
    case 216209:
    {
        returnValue = F("Markkuhle");
        break;
    }
    case 216210:
    {
        returnValue = F("Markland");
        break;
    }
    case 216211:
    {
        returnValue = F("Marklandstr.");
        break;
    }
    case 216212:
    {
        returnValue = F("Marklerkreisel");
        break;
    }
    case 216213:
    {
        returnValue = F("Marklingeröder Str.");
        break;
    }
    case 216214:
    {
        returnValue = F("Marklissaweg");
        break;
    }
    case 216215:
    {
        returnValue = F("Marklkofener Str.");
        break;
    }
    case 216216:
    {
        returnValue = F("Markloweg");
        break;
    }
    case 216217:
    {
        returnValue = F("Marklweg");
        break;
    }
    case 216218:
    {
        returnValue = F("Markmannstr.");
        break;
    }
    case 216219:
    {
        returnValue = F("Markmorgen");
        break;
    }
    case 216220:
    {
        returnValue = F("Markneukirchner Str.");
        break;
    }
    case 216221:
    {
        returnValue = F("Markoldendorfer Str.");
        break;
    }
    case 216222:
    {
        returnValue = F("Markolfstr.");
        break;
    }
    case 216223:
    {
        returnValue = F("Markomannenplatz");
        break;
    }
    case 216224:
    {
        returnValue = F("Markomannenstr.");
        break;
    }
    case 216225:
    {
        returnValue = F("Markomannenweg");
        break;
    }
    case 216226:
    {
        returnValue = F("Markomanniaweg");
        break;
    }
    case 216227:
    {
        returnValue = F("Markomannstr.");
        break;
    }
    case 216228:
    {
        returnValue = F("Markower Str.");
        break;
    }
    case 216229:
    {
        returnValue = F("Markplatz");
        break;
    }
    case 216230:
    {
        returnValue = F("Markranstädter Str.");
        break;
    }
    case 216231:
    {
        returnValue = F("Markranstädter Weg");
        break;
    }
    case 216232:
    {
        returnValue = F("Markriede");
        break;
    }
    case 216233:
    {
        returnValue = F("Markringstr.");
        break;
    }
    case 216234:
    {
        returnValue = F("Markritz");
        break;
    }
    case 216235:
    {
        returnValue = F("Markröhlitzer Str.");
        break;
    }
    case 216236:
    {
        returnValue = F("Marksbendenweg");
        break;
    }
    case 216237:
    {
        returnValue = F("Marksburgstr.");
        break;
    }
    case 216238:
    {
        returnValue = F("Marksburgweg");
        break;
    }
    case 216239:
    {
        returnValue = F("Markschachen");
        break;
    }
    case 216240:
    {
        returnValue = F("Markscheffelshof");
        break;
    }
    case 216241:
    {
        returnValue = F("Markscheide");
        break;
    }
    case 216242:
    {
        returnValue = F("Markscheidergasse");
        break;
    }
    case 216243:
    {
        returnValue = F("Markscheiderhof");
        break;
    }
    case 216244:
    {
        returnValue = F("Markscheiderstr.");
        break;
    }
    case 216245:
    {
        returnValue = F("Markscheiderweg");
        break;
    }
    case 216246:
    {
        returnValue = F("Markscheidweg");
        break;
    }
    case 216247:
    {
        returnValue = F("Markschell");
        break;
    }
    case 216248:
    {
        returnValue = F("Markschiedsweg");
        break;
    }
    case 216249:
    {
        returnValue = F("Marksiedlitzer Weg");
        break;
    }
    case 216250:
    {
        returnValue = F("Markskamp");
        break;
    }
    case 216251:
    {
        returnValue = F("Marksrebenweg");
        break;
    }
    case 216252:
    {
        returnValue = F("Markstal");
        break;
    }
    case 216253:
    {
        returnValue = F("Markstatt");
        break;
    }
    case 216254:
    {
        returnValue = F("Markstauden");
        break;
    }
    case 216255:
    {
        returnValue = F("Marksteig");
        break;
    }
    case 216256:
    {
        returnValue = F("Markstein");
        break;
    }
    case 216257:
    {
        returnValue = F("Marksteinstr.");
        break;
    }
    case 216258:
    {
        returnValue = F("Marksteinweg");
        break;
    }
    case 216259:
    {
        returnValue = F("Markstettenstr.");
        break;
    }
    case 216260:
    {
        returnValue = F("Markstiege");
        break;
    }
    case 216261:
    {
        returnValue = F("Markstockstr.");
        break;
    }
    case 216262:
    {
        returnValue = F("Markstr.");
        break;
    }
    case 216263:
    {
        returnValue = F("Marksuhler Ring");
        break;
    }
    case 216264:
    {
        returnValue = F("Marksuhler Str.");
        break;
    }
    case 216265:
    {
        returnValue = F("Marksußra");
        break;
    }
    case 216266:
    {
        returnValue = F("Marksweg");
        break;
    }
    case 216267:
    {
        returnValue = F("Markt");
        break;
    }
    case 216268:
    {
        returnValue = F("Markt Berolzheimer Str.");
        break;
    }
    case 216269:
    {
        returnValue = F("Markt Clingen");
        break;
    }
    case 216270:
    {
        returnValue = F("Markt Erlbacher Str.");
        break;
    }
    case 216271:
    {
        returnValue = F("Markt Flamersheim");
        break;
    }
    case 216272:
    {
        returnValue = F("Markt Glinde");
        break;
    }
    case 216273:
    {
        returnValue = F("Markt Herrnsheim");
        break;
    }
    case 216274:
    {
        returnValue = F("Markt Mihla");
        break;
    }
    case 216275:
    {
        returnValue = F("Markt Nordheim");
        break;
    }
    case 216276:
    {
        returnValue = F("Markt Passage");
        break;
    }
    case 216277:
    {
        returnValue = F("Markt Rettenbacher Str.");
        break;
    }
    case 216278:
    {
        returnValue = F("Markt Schwabener Str.");
        break;
    }
    case 216279:
    {
        returnValue = F("Markt-Passage");
        break;
    }
    case 216280:
    {
        returnValue = F("Markt-Walder-Str.");
        break;
    }
    case 216281:
    {
        returnValue = F("Marktacker");
        break;
    }
    case 216282:
    {
        returnValue = F("Marktackerstr.");
        break;
    }
    case 216283:
    {
        returnValue = F("Marktackerweg");
        break;
    }
    case 216284:
    {
        returnValue = F("Marktal");
        break;
    }
    case 216285:
    {
        returnValue = F("Marktallee");
        break;
    }
    case 216286:
    {
        returnValue = F("Marktanger");
        break;
    }
    case 216287:
    {
        returnValue = F("Marktberg");
        break;
    }
    case 216288:
    {
        returnValue = F("Marktbergeler Str.");
        break;
    }
    case 216289:
    {
        returnValue = F("Marktbergstr.");
        break;
    }
    case 216290:
    {
        returnValue = F("Marktbornweg");
        break;
    }
    case 216291:
    {
        returnValue = F("Marktbreite");
        break;
    }
    case 216292:
    {
        returnValue = F("Marktbreiter Str.");
        break;
    }
    case 216293:
    {
        returnValue = F("Marktbreiter Weg");
        break;
    }
    case 216294:
    {
        returnValue = F("Marktbrunnengäßle");
        break;
    }
    case 216295:
    {
        returnValue = F("Marktbrunnenstr.");
        break;
    }
    case 216296:
    {
        returnValue = F("Marktbrücke");
        break;
    }
    case 216297:
    {
        returnValue = F("Markteichstr.");
        break;
    }
    case 216298:
    {
        returnValue = F("Markteichweg");
        break;
    }
    case 216299:
    {
        returnValue = F("Marktenhöhe");
        break;
    }
    case 216300:
    {
        returnValue = F("Markter Str.");
        break;
    }
    case 216301:
    {
        returnValue = F("Markteweg");
        break;
    }
    case 216302:
    {
        returnValue = F("Marktfeld");
        break;
    }
    case 216303:
    {
        returnValue = F("Marktfelder Gärten");
        break;
    }
    case 216304:
    {
        returnValue = F("Marktfeldstr.");
        break;
    }
    case 216305:
    {
        returnValue = F("Marktfeldweg");
        break;
    }
    case 216306:
    {
        returnValue = F("Marktgalerie");
        break;
    }
    case 216307:
    {
        returnValue = F("Marktgarten");
        break;
    }
    case 216308:
    {
        returnValue = F("Marktgasse");
        break;
    }
    case 216309:
    {
        returnValue = F("Marktgemeinde-Bromberg-Weg");
        break;
    }
    case 216310:
    {
        returnValue = F("Marktgraben");
        break;
    }
    case 216311:
    {
        returnValue = F("Marktgärtenstr.");
        break;
    }
    case 216312:
    {
        returnValue = F("Marktgässchen");
        break;
    }
    case 216313:
    {
        returnValue = F("Marktgässle");
        break;
    }
    case 216314:
    {
        returnValue = F("Marktgäßchen");
        break;
    }
    case 216315:
    {
        returnValue = F("Marktgäßle");
        break;
    }
    case 216316:
    {
        returnValue = F("Marktgölitz");
        break;
    }
    case 216317:
    {
        returnValue = F("Marktgölitzer Str.");
        break;
    }
    case 216318:
    {
        returnValue = F("Markthalle");
        break;
    }
    case 216319:
    {
        returnValue = F("Markthallenstr.");
        break;
    }
    case 216320:
    {
        returnValue = F("Markthamm");
        break;
    }
    case 216321:
    {
        returnValue = F("Marktheidenfelder Str.");
        break;
    }
    case 216322:
    {
        returnValue = F("Markthof");
        break;
    }
    case 216323:
    {
        returnValue = F("Markthöhe");
        break;
    }
    case 216324:
    {
        returnValue = F("Marktkirchhof");
        break;
    }
    case 216325:
    {
        returnValue = F("Marktkreppenweg");
        break;
    }
    case 216326:
    {
        returnValue = F("Marktlaubenstr.");
        break;
    }
    case 216327:
    {
        returnValue = F("Marktler Str.");
        break;
    }
    case 216328:
    {
        returnValue = F("Marktlerplatz");
        break;
    }
    case 216329:
    {
        returnValue = F("Marktleugaster Weg");
        break;
    }
    case 216330:
    {
        returnValue = F("Marktmeister-Zahn-Brücke");
        break;
    }
    case 216331:
    {
        returnValue = F("Marktmühle");
        break;
    }
    case 216332:
    {
        returnValue = F("Marktmühlstr.");
        break;
    }
    case 216333:
    {
        returnValue = F("Marktmühlweg");
        break;
    }
    case 216334:
    {
        returnValue = F("Marktoberdorfer Str.");
        break;
    }
    case 216335:
    {
        returnValue = F("Marktoffinger Str.");
        break;
    }
    case 216336:
    {
        returnValue = F("Marktpassage");
        break;
    }
    case 216337:
    {
        returnValue = F("Marktpatz");
        break;
    }
    case 216338:
    {
        returnValue = F("Marktpfadweg");
        break;
    }
    case 216339:
    {
        returnValue = F("Marktpforte");
        break;
    }
    case 216340:
    {
        returnValue = F("Marktplatz");
        break;
    }
    case 216341:
    {
        returnValue = F("Marktplatz Au");
        break;
    }
    case 216342:
    {
        returnValue = F("Marktplatz Eversten");
        break;
    }
    case 216343:
    {
        returnValue = F("Marktplatz Lützenkirchen");
        break;
    }
    case 216344:
    {
        returnValue = F("Marktplatz Osterfeld");
        break;
    }
    case 216345:
    {
        returnValue = F("Marktplatz Rheinau");
        break;
    }
    case 216346:
    {
        returnValue = F("Marktplatz Sudmerberg");
        break;
    }
    case 216347:
    {
        returnValue = F("Marktplatzstr.");
        break;
    }
    case 216348:
    {
        returnValue = F("Marktpromenade");
        break;
    }
    case 216349:
    {
        returnValue = F("Marktrain");
        break;
    }
    case 216350:
    {
        returnValue = F("Marktredwitzer Str.");
        break;
    }
    case 216351:
    {
        returnValue = F("Marktrichterstr.");
        break;
    }
    case 216352:
    {
        returnValue = F("Marktrichterweg");
        break;
    }
    case 216353:
    {
        returnValue = F("Marktring");
        break;
    }
    case 216354:
    {
        returnValue = F("Marktschreiberweg");
        break;
    }
    case 216355:
    {
        returnValue = F("Marktstefter Str.");
        break;
    }
    case 216356:
    {
        returnValue = F("Marktstefter Weg");
        break;
    }
    case 216357:
    {
        returnValue = F("Marktsteg");
        break;
    }
    case 216358:
    {
        returnValue = F("Marktsteig");
        break;
    }
    case 216359:
    {
        returnValue = F("Marktsteig/R-Weg");
        break;
    }
    case 216360:
    {
        returnValue = F("Marktsteige");
        break;
    }
    case 216361:
    {
        returnValue = F("Marktsteinacher Hauptstr.");
        break;
    }
    case 216362:
    {
        returnValue = F("Marktsteinacher Str.");
        break;
    }
    case 216363:
    {
        returnValue = F("Marktsteinstr.");
        break;
    }
    case 216364:
    {
        returnValue = F("Marktstieg");
        break;
    }
    case 216365:
    {
        returnValue = F("Marktstiege");
        break;
    }
    case 216366:
    {
        returnValue = F("Marktstr.");
        break;
    }
    case 216367:
    {
        returnValue = F("Marktstraat");
        break;
    }
    case 216368:
    {
        returnValue = F("Marktstrasse");
        break;
    }
    case 216369:
    {
        returnValue = F("Marktteichweg");
        break;
    }
    case 216370:
    {
        returnValue = F("Markttorstr.");
        break;
    }
    case 216371:
    {
        returnValue = F("Markttriebendorf");
        break;
    }
    case 216372:
    {
        returnValue = F("Markttwiete");
        break;
    }
    case 216373:
    {
        returnValue = F("Marktwasen");
        break;
    }
    case 216374:
    {
        returnValue = F("Marktwasserweg");
        break;
    }
    case 216375:
    {
        returnValue = F("Marktweg");
        break;
    }
    case 216376:
    {
        returnValue = F("Marktwegfeld");
        break;
    }
    case 216377:
    {
        returnValue = F("Marktweide");
        break;
    }
    case 216378:
    {
        returnValue = F("Marktweiherweg");
        break;
    }
    case 216379:
    {
        returnValue = F("Marktwiese");
        break;
    }
    case 216380:
    {
        returnValue = F("Marktwiesenweg");
        break;
    }
    case 216381:
    {
        returnValue = F("Marktwinkl");
        break;
    }
    case 216382:
    {
        returnValue = F("Marktzellweg");
        break;
    }
    case 216383:
    {
        returnValue = F("Marktzeulner Weg");
        break;
    }
    case 216384:
    {
        returnValue = F("Marktäckerstr.");
        break;
    }
    case 216385:
    {
        returnValue = F("Marktäckerweg");
        break;
    }
    case 216386:
    {
        returnValue = F("Markungsweg");
        break;
    }
    case 216387:
    {
        returnValue = F("Markus-Freund-Str.");
        break;
    }
    case 216388:
    {
        returnValue = F("Markus-Koch-Str.");
        break;
    }
    case 216389:
    {
        returnValue = F("Markus-Konder-Str.");
        break;
    }
    case 216390:
    {
        returnValue = F("Markus-Pflüger-Str.");
        break;
    }
    case 216391:
    {
        returnValue = F("Markus-Ruf-Str.");
        break;
    }
    case 216392:
    {
        returnValue = F("Markus-Röhling-Weg");
        break;
    }
    case 216393:
    {
        returnValue = F("Markus-Schmiedel-Platz");
        break;
    }
    case 216394:
    {
        returnValue = F("Markus-Semmler-Str.");
        break;
    }
    case 216395:
    {
        returnValue = F("Markus-Stübner-Str.");
        break;
    }
    case 216396:
    {
        returnValue = F("Markus-Zahn-Allee");
        break;
    }
    case 216397:
    {
        returnValue = F("Markusberg");
        break;
    }
    case 216398:
    {
        returnValue = F("Markusberger Weg");
        break;
    }
    case 216399:
    {
        returnValue = F("Markusgasse");
        break;
    }
    case 216400:
    {
        returnValue = F("Markushof");
        break;
    }
    case 216401:
    {
        returnValue = F("Markuskirchplatz");
        break;
    }
    case 216402:
    {
        returnValue = F("Markuskirchweg");
        break;
    }
    case 216403:
    {
        returnValue = F("Markuslustweg");
        break;
    }
    case 216404:
    {
        returnValue = F("Markusplatz");
        break;
    }
    case 216405:
    {
        returnValue = F("Markusplätzle");
        break;
    }
    case 216406:
    {
        returnValue = F("Markusstr.");
        break;
    }
    case 216407:
    {
        returnValue = F("Markusweg");
        break;
    }
    case 216408:
    {
        returnValue = F("Markwald");
        break;
    }
    case 216409:
    {
        returnValue = F("Markwaldsiedlung");
        break;
    }
    case 216410:
    {
        returnValue = F("Markwaldstr.");
        break;
    }
    case 216411:
    {
        returnValue = F("Markwaldweg");
        break;
    }
    case 216412:
    {
        returnValue = F("Markwardanlage");
        break;
    }
    case 216413:
    {
        returnValue = F("Markwardstr.");
        break;
    }
    case 216414:
    {
        returnValue = F("Markwartstr.");
        break;
    }
    case 216415:
    {
        returnValue = F("Markwasen");
        break;
    }
    case 216416:
    {
        returnValue = F("Markwasenweg");
        break;
    }
    case 216417:
    {
        returnValue = F("Markweg");
        break;
    }
    case 216418:
    {
        returnValue = F("Markwerbener Schulstr.");
        break;
    }
    case 216419:
    {
        returnValue = F("Markwerbener Str.");
        break;
    }
    case 216420:
    {
        returnValue = F("Markwerbener Weg");
        break;
    }
    case 216421:
    {
        returnValue = F("Markwieschen");
        break;
    }
    case 216422:
    {
        returnValue = F("Markwiese");
        break;
    }
    case 216423:
    {
        returnValue = F("Markwiesenstr.");
        break;
    }
    case 216424:
    {
        returnValue = F("Markwiesenweg");
        break;
    }
    case 216425:
    {
        returnValue = F("Markwinkel");
        break;
    }
    case 216426:
    {
        returnValue = F("Markwitzerkamp");
        break;
    }
    case 216427:
    {
        returnValue = F("Marköbeler Str.");
        break;
    }
    case 216428:
    {
        returnValue = F("Marlacher Str.");
        break;
    }
    case 216429:
    {
        returnValue = F("Marlborough Road");
        break;
    }
    case 216430:
    {
        returnValue = F("Marleben");
        break;
    }
    case 216431:
    {
        returnValue = F("Marlene-Dietrich-Allee");
        break;
    }
    case 216432:
    {
        returnValue = F("Marlene-Dietrich-Platz");
        break;
    }
    case 216433:
    {
        returnValue = F("Marlene-Dietrich-Str.");
        break;
    }
    case 216434:
    {
        returnValue = F("Marlener Str.");
        break;
    }
    case 216435:
    {
        returnValue = F("Marlenheimer Str.");
        break;
    }
    case 216436:
    {
        returnValue = F("Marler Damm");
        break;
    }
    case 216437:
    {
        returnValue = F("Marler Str.");
        break;
    }
    case 216438:
    {
        returnValue = F("Marler Weg");
        break;
    }
    case 216439:
    {
        returnValue = F("Marlesgrube");
        break;
    }
    case 216440:
    {
        returnValue = F("Marlesreuther Weg");
        break;
    }
    case 216441:
    {
        returnValue = F("Marlies-Zimmermeier-Weg");
        break;
    }
    case 216442:
    {
        returnValue = F("Marlin");
        break;
    }
    case 216443:
    {
        returnValue = F("Marlinger Weg");
        break;
    }
    case 216444:
    {
        returnValue = F("Marlinkstr.");
        break;
    }
    case 216445:
    {
        returnValue = F("Marliring");
        break;
    }
    case 216446:
    {
        returnValue = F("Marlis-Ragge-Weg");
        break;
    }
    case 216447:
    {
        returnValue = F("Marlistr.");
        break;
    }
    case 216448:
    {
        returnValue = F("Marlittstr.");
        break;
    }
    case 216449:
    {
        returnValue = F("Marloffsteiner Str.");
        break;
    }
    case 216450:
    {
        returnValue = F("Marlow");
        break;
    }
    case 216451:
    {
        returnValue = F("Marlow-Ausbau");
        break;
    }
    case 216452:
    {
        returnValue = F("Marlower Chaussee");
        break;
    }
    case 216453:
    {
        returnValue = F("Marlower Str.");
        break;
    }
    case 216454:
    {
        returnValue = F("Marlygarten");
        break;
    }
    case 216455:
    {
        returnValue = F("Marmagener Str.");
        break;
    }
    case 216456:
    {
        returnValue = F("Marmannweg");
        break;
    }
    case 216457:
    {
        returnValue = F("Marmaris-Wanderweg");
        break;
    }
    case 216458:
    {
        returnValue = F("Marmarisplatz");
        break;
    }
    case 216459:
    {
        returnValue = F("Marmecke Downhill");
        break;
    }
    case 216460:
    {
        returnValue = F("Marmelinghöfener Weg");
        break;
    }
    case 216461:
    {
        returnValue = F("Marmelshagen");
        break;
    }
    case 216462:
    {
        returnValue = F("Marmer Weg");
        break;
    }
    case 216463:
    {
        returnValue = F("Marmontstr.");
        break;
    }
    case 216464:
    {
        returnValue = F("Marmonweg");
        break;
    }
    case 216465:
    {
        returnValue = F("Marmorbadbrücke");
        break;
    }
    case 216466:
    {
        returnValue = F("Marmorbruch");
        break;
    }
    case 216467:
    {
        returnValue = F("Marmorbruchweg");
        break;
    }
    case 216468:
    {
        returnValue = F("Marmorbrücke");
        break;
    }
    case 216469:
    {
        returnValue = F("Marmorstr.");
        break;
    }
    case 216470:
    {
        returnValue = F("Marmorweg");
        break;
    }
    case 216471:
    {
        returnValue = F("Marmorwerk");
        break;
    }
    case 216472:
    {
        returnValue = F("Marmorwerkstr.");
        break;
    }
    case 216473:
    {
        returnValue = F("Marmstorfer Poststr.");
        break;
    }
    case 216474:
    {
        returnValue = F("Marnbacher Str.");
        break;
    }
    case 216475:
    {
        returnValue = F("Marne");
        break;
    }
    case 216476:
    {
        returnValue = F("Marner Chaussee");
        break;
    }
    case 216477:
    {
        returnValue = F("Marner Str.");
        break;
    }
    case 216478:
    {
        returnValue = F("Marner Weg");
        break;
    }
    case 216479:
    {
        returnValue = F("Marnestr.");
        break;
    }
    case 216480:
    {
        returnValue = F("Marneweg");
        break;
    }
    case 216481:
    {
        returnValue = F("Marnheimer Str.");
        break;
    }
    case 216482:
    {
        returnValue = F("Marnheimer Weg");
        break;
    }
    case 216483:
    {
        returnValue = F("Marnitzer Chaussee");
        break;
    }
    case 216484:
    {
        returnValue = F("Marnitzer Str.");
        break;
    }
    case 216485:
    {
        returnValue = F("Marnitzer Weg");
        break;
    }
    case 216486:
    {
        returnValue = F("Marnkeweg");
        break;
    }
    case 216487:
    {
        returnValue = F("Maroldstr.");
        break;
    }
    case 216488:
    {
        returnValue = F("Marolteröder Landstr.");
        break;
    }
    case 216489:
    {
        returnValue = F("Marommer Stieg");
        break;
    }
    case 216490:
    {
        returnValue = F("Marommer Str.");
        break;
    }
    case 216491:
    {
        returnValue = F("Maronengasse");
        break;
    }
    case 216492:
    {
        returnValue = F("Maronenhain");
        break;
    }
    case 216493:
    {
        returnValue = F("Maronenring");
        break;
    }
    case 216494:
    {
        returnValue = F("Maronenstr.");
        break;
    }
    case 216495:
    {
        returnValue = F("Maronenweg");
        break;
    }
    case 216496:
    {
        returnValue = F("Marother Str.");
        break;
    }
    case 216497:
    {
        returnValue = F("Marpe");
        break;
    }
    case 216498:
    {
        returnValue = F("Marper Schulweg");
        break;
    }
    case 216499:
    {
        returnValue = F("Marper Weg");
        break;
    }
    case 216500:
    {
        returnValue = F("Marpergerstr.");
        break;
    }
    case 216501:
    {
        returnValue = F("Marpestr.");
        break;
    }
    case 216502:
    {
        returnValue = F("Marpinger Str.");
        break;
    }
    case 216503:
    {
        returnValue = F("Marpinger Weg");
        break;
    }
    case 216504:
    {
        returnValue = F("Marquard-Gulde-Weg");
        break;
    }
    case 216505:
    {
        returnValue = F("Marquard-Rantzau-Str.");
        break;
    }
    case 216506:
    {
        returnValue = F("Marquard-Roppelt-Str.");
        break;
    }
    case 216507:
    {
        returnValue = F("Marquard-Schreye-Str.");
        break;
    }
    case 216508:
    {
        returnValue = F("Marquard-von-Grumbach-Str.");
        break;
    }
    case 216509:
    {
        returnValue = F("Marquard-von-Schwendi-Str.");
        break;
    }
    case 216510:
    {
        returnValue = F("Marquardplatz");
        break;
    }
    case 216511:
    {
        returnValue = F("Marquards Feld");
        break;
    }
    case 216512:
    {
        returnValue = F("Marquardsburg");
        break;
    }
    case 216513:
    {
        returnValue = F("Marquardsenstr.");
        break;
    }
    case 216514:
    {
        returnValue = F("Marquardsholz A");
        break;
    }
    case 216515:
    {
        returnValue = F("Marquardsholz B");
        break;
    }
    case 216516:
    {
        returnValue = F("Marquardsholz C");
        break;
    }
    case 216517:
    {
        returnValue = F("Marquardsholz D");
        break;
    }
    case 216518:
    {
        returnValue = F("Marquardsholz E");
        break;
    }
    case 216519:
    {
        returnValue = F("Marquardsholz F");
        break;
    }
    case 216520:
    {
        returnValue = F("Marquardsholz G");
        break;
    }
    case 216521:
    {
        returnValue = F("Marquardsholz H");
        break;
    }
    case 216522:
    {
        returnValue = F("Marquardsholzer Weg");
        break;
    }
    case 216523:
    {
        returnValue = F("Marquardstr.");
        break;
    }
    case 216524:
    {
        returnValue = F("Marquardter Chaussee");
        break;
    }
    case 216525:
    {
        returnValue = F("Marquardter Str.");
        break;
    }
    case 216526:
    {
        returnValue = F("Marquardter Str. Ausbau");
        break;
    }
    case 216527:
    {
        returnValue = F("Marquardtsstieg");
        break;
    }
    case 216528:
    {
        returnValue = F("Marquardtstr.");
        break;
    }
    case 216529:
    {
        returnValue = F("Marquardtsweg");
        break;
    }
    case 216530:
    {
        returnValue = F("Marquardtweg");
        break;
    }
    case 216531:
    {
        returnValue = F("Marquardweg");
        break;
    }
    case 216532:
    {
        returnValue = F("Marquartsteiner Str.");
        break;
    }
    case 216533:
    {
        returnValue = F("Marquartstr.");
        break;
    }
    case 216534:
    {
        returnValue = F("Marquede");
        break;
    }
    case 216535:
    {
        returnValue = F("Marquisat-Ufer");
        break;
    }
    case 216536:
    {
        returnValue = F("Marrensberg");
        break;
    }
    case 216537:
    {
        returnValue = F("Marrensdamm");
        break;
    }
    case 216538:
    {
        returnValue = F("Marrenshof");
        break;
    }
    case 216539:
    {
        returnValue = F("Marrensmoor");
        break;
    }
    case 216540:
    {
        returnValue = F("Marrenstr.");
        break;
    }
    case 216541:
    {
        returnValue = F("Marrgrabenstr.");
        break;
    }
    case 216542:
    {
        returnValue = F("Marrinkskamp");
        break;
    }
    case 216543:
    {
        returnValue = F("Marrinksweg");
        break;
    }
    case 216544:
    {
        returnValue = F("Marris-Mühlen-Weg");
        break;
    }
    case 216545:
    {
        returnValue = F("Marrée");
        break;
    }
    case 216546:
    {
        returnValue = F("Mars-Camulus-Str.");
        break;
    }
    case 216547:
    {
        returnValue = F("Mars-la-Tour-Str.");
        break;
    }
    case 216548:
    {
        returnValue = F("Marsaner Str.");
        break;
    }
    case 216549:
    {
        returnValue = F("Marsbachstr.");
        break;
    }
    case 216550:
    {
        returnValue = F("Marsbachweg");
        break;
    }
    case 216551:
    {
        returnValue = F("Marsberger Str.");
        break;
    }
    case 216552:
    {
        returnValue = F("Marsbrookweg");
        break;
    }
    case 216553:
    {
        returnValue = F("Marsbruchweg");
        break;
    }
    case 216554:
    {
        returnValue = F("Marsch");
        break;
    }
    case 216555:
    {
        returnValue = F("Marsch-Anna-Weg");
        break;
    }
    case 216556:
    {
        returnValue = F("Marschackerstr.");
        break;
    }
    case 216557:
    {
        returnValue = F("Marschal");
        break;
    }
    case 216558:
    {
        returnValue = F("Marschalkstr.");
        break;
    }
    case 216559:
    {
        returnValue = F("Marschall");
        break;
    }
    case 216560:
    {
        returnValue = F("Marschall-Lannes-Weg");
        break;
    }
    case 216561:
    {
        returnValue = F("Marschaller Weg");
        break;
    }
    case 216562:
    {
        returnValue = F("Marschallgasse");
        break;
    }
    case 216563:
    {
        returnValue = F("Marschalling");
        break;
    }
    case 216564:
    {
        returnValue = F("Marschallpfad");
        break;
    }
    case 216565:
    {
        returnValue = F("Marschallring");
        break;
    }
    case 216566:
    {
        returnValue = F("Marschallsgarten");
        break;
    }
    case 216567:
    {
        returnValue = F("Marschallshagen");
        break;
    }
    case 216568:
    {
        returnValue = F("Marschallshof");
        break;
    }
    case 216569:
    {
        returnValue = F("Marschallstr.");
        break;
    }
    case 216570:
    {
        returnValue = F("Marschallteich");
        break;
    }
    case 216571:
    {
        returnValue = F("Marschberg");
        break;
    }
    case 216572:
    {
        returnValue = F("Marschblick");
        break;
    }
    case 216573:
    {
        returnValue = F("Marschbrookweg");
        break;
    }
    case 216574:
    {
        returnValue = F("Marschböltweg");
        break;
    }
    case 216575:
    {
        returnValue = F("Marschchaussee");
        break;
    }
    case 216576:
    {
        returnValue = F("Marschdamm");
        break;
    }
    case 216577:
    {
        returnValue = F("Marschdeich");
        break;
    }
    case 216578:
    {
        returnValue = F("Marschdiek");
        break;
    }
    case 216579:
    {
        returnValue = F("Marsche");
        break;
    }
    case 216580:
    {
        returnValue = F("Marscheid");
        break;
    }
    case 216581:
    {
        returnValue = F("Marscheiderweg");
        break;
    }
    case 216582:
    {
        returnValue = F("Marschenblick");
        break;
    }
    case 216583:
    {
        returnValue = F("Marschenhausweg");
        break;
    }
    case 216584:
    {
        returnValue = F("Marschenkamp");
        break;
    }
    case 216585:
    {
        returnValue = F("Marschenpark");
        break;
    }
    case 216586:
    {
        returnValue = F("Marschenring");
        break;
    }
    case 216587:
    {
        returnValue = F("Marschenweg");
        break;
    }
    case 216588:
    {
        returnValue = F("Marscher Weg");
        break;
    }
    case 216589:
    {
        returnValue = F("Marscherdamm");
        break;
    }
    case 216590:
    {
        returnValue = F("Marschgärten");
        break;
    }
    case 216591:
    {
        returnValue = F("Marschhausen");
        break;
    }
    case 216592:
    {
        returnValue = F("Marschhauser Weg");
        break;
    }
    case 216593:
    {
        returnValue = F("Marschhof");
        break;
    }
    case 216594:
    {
        returnValue = F("Marschkamp");
        break;
    }
    case 216595:
    {
        returnValue = F("Marschkamper Weg");
        break;
    }
    case 216596:
    {
        returnValue = F("Marschkampweg");
        break;
    }
    case 216597:
    {
        returnValue = F("Marschkoogweg");
        break;
    }
    case 216598:
    {
        returnValue = F("Marschkämpe");
        break;
    }
    case 216599:
    {
        returnValue = F("Marschlagweg");
        break;
    }
    case 216600:
    {
        returnValue = F("Marschlinger Hof");
        break;
    }
    case 216601:
    {
        returnValue = F("Marschmorgen");
        break;
    }
    case 216602:
    {
        returnValue = F("Marschnerstr.");
        break;
    }
    case 216603:
    {
        returnValue = F("Marschnerweg");
        break;
    }
    case 216604:
    {
        returnValue = F("Marschowitzer Str.");
        break;
    }
    case 216605:
    {
        returnValue = F("Marschring");
        break;
    }
    case 216606:
    {
        returnValue = F("Marschstr.");
        break;
    }
    case 216607:
    {
        returnValue = F("Marschweg");
        break;
    }
    case 216608:
    {
        returnValue = F("Marschwitz");
        break;
    }
    case 216609:
    {
        returnValue = F("Marschütz");
        break;
    }
    case 216610:
    {
        returnValue = F("Marsdorfer Gasse");
        break;
    }
    case 216611:
    {
        returnValue = F("Marsdorfer Str.");
        break;
    }
    case 216612:
    {
        returnValue = F("Marsdorfer Weg");
        break;
    }
    case 216613:
    {
        returnValue = F("Marseillestr.");
        break;
    }
    case 216614:
    {
        returnValue = F("Marsenstr.");
        break;
    }
    case 216615:
    {
        returnValue = F("Marsenweg");
        break;
    }
    case 216616:
    {
        returnValue = F("Marserstr.");
        break;
    }
    case 216617:
    {
        returnValue = F("Marserweg");
        break;
    }
    case 216618:
    {
        returnValue = F("Marshall-Heights-Ring");
        break;
    }
    case 216619:
    {
        returnValue = F("Marshall-Prentice-Str.");
        break;
    }
    case 216620:
    {
        returnValue = F("Marshallstr.");
        break;
    }
    case 216621:
    {
        returnValue = F("Marshof");
        break;
    }
    case 216622:
    {
        returnValue = F("Marsiliusplatz");
        break;
    }
    case 216623:
    {
        returnValue = F("Marsiliusstr.");
        break;
    }
    case 216624:
    {
        returnValue = F("Marsiliusweg");
        break;
    }
    case 216625:
    {
        returnValue = F("Marskamp");
        break;
    }
    case 216626:
    {
        returnValue = F("Marslebener Weg");
        break;
    }
    case 216627:
    {
        returnValue = F("Marsower Str.");
        break;
    }
    case 216628:
    {
        returnValue = F("Marsstr.");
        break;
    }
    case 216629:
    {
        returnValue = F("Marstall");
        break;
    }
    case 216630:
    {
        returnValue = F("Marstallbrücke");
        break;
    }
    case 216631:
    {
        returnValue = F("Marstallhof");
        break;
    }
    case 216632:
    {
        returnValue = F("Marstallschneise");
        break;
    }
    case 216633:
    {
        returnValue = F("Marstallsdeich");
        break;
    }
    case 216634:
    {
        returnValue = F("Marstallstr.");
        break;
    }
    case 216635:
    {
        returnValue = F("Marstallweg");
        break;
    }
    case 216636:
    {
        returnValue = F("Marsteiner Hof");
        break;
    }
    case 216637:
    {
        returnValue = F("Marstettenstr.");
        break;
    }
    case 216638:
    {
        returnValue = F("Marsweg");
        break;
    }
    case 216639:
    {
        returnValue = F("Marsweilerstr.");
        break;
    }
    case 216640:
    {
        returnValue = F("Marswidisstr.");
        break;
    }
    case 216641:
    {
        returnValue = F("Marta-Astfalck-Vietz-Weg");
        break;
    }
    case 216642:
    {
        returnValue = F("Marta-Fraenkel-Str.");
        break;
    }
    case 216643:
    {
        returnValue = F("Marta-Hummler-Weg");
        break;
    }
    case 216644:
    {
        returnValue = F("Marta-Scale-Weg");
        break;
    }
    case 216645:
    {
        returnValue = F("Marta-Schanzenbach-Str.");
        break;
    }
    case 216646:
    {
        returnValue = F("Marta-Schanzenbach-Weg");
        break;
    }
    case 216647:
    {
        returnValue = F("Marta-Worringer-Str.");
        break;
    }
    case 216648:
    {
        returnValue = F("Martackertenstr.");
        break;
    }
    case 216649:
    {
        returnValue = F("Martaruhweg");
        break;
    }
    case 216650:
    {
        returnValue = F("Martastr.");
        break;
    }
    case 216651:
    {
        returnValue = F("Martel-Mayer-Str.");
        break;
    }
    case 216652:
    {
        returnValue = F("Martelenberger Weg");
        break;
    }
    case 216653:
    {
        returnValue = F("Marteleweg");
        break;
    }
    case 216654:
    {
        returnValue = F("Martelgasse");
        break;
    }
    case 216655:
    {
        returnValue = F("Martellring");
        break;
    }
    case 216656:
    {
        returnValue = F("Martellstr.");
        break;
    }
    case 216657:
    {
        returnValue = F("Martelsberg");
        break;
    }
    case 216658:
    {
        returnValue = F("Martelsgraben");
        break;
    }
    case 216659:
    {
        returnValue = F("Martelsweg");
        break;
    }
    case 216660:
    {
        returnValue = F("Martelweg");
        break;
    }
    case 216661:
    {
        returnValue = F("Marten-Kröncke-Weg");
        break;
    }
    case 216662:
    {
        returnValue = F("Marten-van-Achten-Ring");
        break;
    }
    case 216663:
    {
        returnValue = F("Martenbachweg");
        break;
    }
    case 216664:
    {
        returnValue = F("Martendorf");
        break;
    }
    case 216665:
    {
        returnValue = F("Martenkamp");
        break;
    }
    case 216666:
    {
        returnValue = F("Martenkreuzweg");
        break;
    }
    case 216667:
    {
        returnValue = F("Martenrother Weg");
        break;
    }
    case 216668:
    {
        returnValue = F("Martens Highway");
        break;
    }
    case 216669:
    {
        returnValue = F("Martens-Hof");
        break;
    }
    case 216670:
    {
        returnValue = F("Martensdamm");
        break;
    }
    case 216671:
    {
        returnValue = F("Martensdorf");
        break;
    }
    case 216672:
    {
        returnValue = F("Martensdorfer Weg");
        break;
    }
    case 216673:
    {
        returnValue = F("Martenshof");
        break;
    }
    case 216674:
    {
        returnValue = F("Martenshofweg");
        break;
    }
    case 216675:
    {
        returnValue = F("Martenshorsttwiete");
        break;
    }
    case 216676:
    {
        returnValue = F("Martenskamp");
        break;
    }
    case 216677:
    {
        returnValue = F("Martenspadd");
        break;
    }
    case 216678:
    {
        returnValue = F("Martensrader Weg");
        break;
    }
    case 216679:
    {
        returnValue = F("Martensstr.");
        break;
    }
    case 216680:
    {
        returnValue = F("Martenstr.");
        break;
    }
    case 216681:
    {
        returnValue = F("Martensweg");
        break;
    }
    case 216682:
    {
        returnValue = F("Marterberg");
        break;
    }
    case 216683:
    {
        returnValue = F("Marterbergstr.");
        break;
    }
    case 216684:
    {
        returnValue = F("Marterbreitenweg");
        break;
    }
    case 216685:
    {
        returnValue = F("Marterfeldstr.");
        break;
    }
    case 216686:
    {
        returnValue = F("Martergasse");
        break;
    }
    case 216687:
    {
        returnValue = F("Marterleiten");
        break;
    }
    case 216688:
    {
        returnValue = F("Marterlweg");
        break;
    }
    case 216689:
    {
        returnValue = F("Martermühle");
        break;
    }
    case 216690:
    {
        returnValue = F("Martersteigstr.");
        break;
    }
    case 216691:
    {
        returnValue = F("Marterstr.");
        break;
    }
    case 216692:
    {
        returnValue = F("Martertal");
        break;
    }
    case 216693:
    {
        returnValue = F("Marterweg");
        break;
    }
    case 216694:
    {
        returnValue = F("Marterwiese");
        break;
    }
    case 216695:
    {
        returnValue = F("Marteräcker");
        break;
    }
    case 216696:
    {
        returnValue = F("Marteröschle");
        break;
    }
    case 216697:
    {
        returnValue = F("Martesweg");
        break;
    }
    case 216698:
    {
        returnValue = F("Martfelder Weg");
        break;
    }
    case 216699:
    {
        returnValue = F("Marth");
        break;
    }
    case 216700:
    {
        returnValue = F("Martha Maria");
        break;
    }
    case 216701:
    {
        returnValue = F("Martha Müller-Grählert-Park");
        break;
    }
    case 216702:
    {
        returnValue = F("Martha-Arnold-Str.");
        break;
    }
    case 216703:
    {
        returnValue = F("Martha-Brach-Str.");
        break;
    }
    case 216704:
    {
        returnValue = F("Martha-Brautzsch-Str.");
        break;
    }
    case 216705:
    {
        returnValue = F("Martha-Brautzsch-Weg");
        break;
    }
    case 216706:
    {
        returnValue = F("Martha-Eberhard-Str.");
        break;
    }
    case 216707:
    {
        returnValue = F("Martha-Fuchs-Str.");
        break;
    }
    case 216708:
    {
        returnValue = F("Martha-Fuchs-Weg");
        break;
    }
    case 216709:
    {
        returnValue = F("Martha-Korell-Weg");
        break;
    }
    case 216710:
    {
        returnValue = F("Martha-Kropp-Str.");
        break;
    }
    case 216711:
    {
        returnValue = F("Martha-Lesse-Str.");
        break;
    }
    case 216712:
    {
        returnValue = F("Martha-Mannsbach-Ring");
        break;
    }
    case 216713:
    {
        returnValue = F("Martha-McCarthy-Str.");
        break;
    }
    case 216714:
    {
        returnValue = F("Martha-Mendel-Weg");
        break;
    }
    case 216715:
    {
        returnValue = F("Martha-Michaelis-Str.");
        break;
    }
    case 216716:
    {
        returnValue = F("Martha-Munz-Magenwirth-Platz");
        break;
    }
    case 216717:
    {
        returnValue = F("Martha-Müller-Grählert-Str.");
        break;
    }
    case 216718:
    {
        returnValue = F("Martha-Müller-Grählert-Weg");
        break;
    }
    case 216719:
    {
        returnValue = F("Martha-Saalfeld-Platz");
        break;
    }
    case 216720:
    {
        returnValue = F("Martha-Schlinkert-Weg");
        break;
    }
    case 216721:
    {
        returnValue = F("Martha-Schrag-Str.");
        break;
    }
    case 216722:
    {
        returnValue = F("Martha-Schwarzkopf-Str.");
        break;
    }
    case 216723:
    {
        returnValue = F("Martha-Stein-Weg");
        break;
    }
    case 216724:
    {
        returnValue = F("Martha-Stölting-Str.");
        break;
    }
    case 216725:
    {
        returnValue = F("Martha-Traut-Weg");
        break;
    }
    case 216726:
    {
        returnValue = F("Martha-Ulfert-Weg");
        break;
    }
    case 216727:
    {
        returnValue = F("Martha-Vogeler-Str.");
        break;
    }
    case 216728:
    {
        returnValue = F("Martha-Walz-Birrer-Str.");
        break;
    }
    case 216729:
    {
        returnValue = F("Martha-Warnecke-Str.");
        break;
    }
    case 216730:
    {
        returnValue = F("Martha-Weber-Gasse");
        break;
    }
    case 216731:
    {
        returnValue = F("Martha-von-Opel-Weg");
        break;
    }
    case 216732:
    {
        returnValue = F("Martha-von-Puttkamer-Str.");
        break;
    }
    case 216733:
    {
        returnValue = F("Marthabräustr.");
        break;
    }
    case 216734:
    {
        returnValue = F("Marthas Placken");
        break;
    }
    case 216735:
    {
        returnValue = F("Marthashofen");
        break;
    }
    case 216736:
    {
        returnValue = F("Marthastr.");
        break;
    }
    case 216737:
    {
        returnValue = F("Marthaweg");
        break;
    }
    case 216738:
    {
        returnValue = F("Marthe-Brautzsch-Str.");
        break;
    }
    case 216739:
    {
        returnValue = F("Marthesiastr.");
        break;
    }
    case 216740:
    {
        returnValue = F("Marthliesen-Brücke");
        break;
    }
    case 216741:
    {
        returnValue = F("Marthliesenweg");
        break;
    }
    case 216742:
    {
        returnValue = F("Marthweg");
        break;
    }
    case 216743:
    {
        returnValue = F("Martin Luther Platz");
        break;
    }
    case 216744:
    {
        returnValue = F("Martin Luther Ring");
        break;
    }
    case 216745:
    {
        returnValue = F("Martin Luther Str.");
        break;
    }
    case 216746:
    {
        returnValue = F("Martin Söhlein Weg");
        break;
    }
    case 216747:
    {
        returnValue = F("Martin-A.-Nexö-Str.");
        break;
    }
    case 216748:
    {
        returnValue = F("Martin-Adolff-Str.");
        break;
    }
    case 216749:
    {
        returnValue = F("Martin-Agricola-Str.");
        break;
    }
    case 216750:
    {
        returnValue = F("Martin-Albert-Str.");
        break;
    }
    case 216751:
    {
        returnValue = F("Martin-Altenbach-Weg");
        break;
    }
    case 216752:
    {
        returnValue = F("Martin-Andersen-Nexö-Platz");
        break;
    }
    case 216753:
    {
        returnValue = F("Martin-Andersen-Nexö-Ring");
        break;
    }
    case 216754:
    {
        returnValue = F("Martin-Andersen-Nexö-Str.");
        break;
    }
    case 216755:
    {
        returnValue = F("Martin-Andersen-Nexö-Weg");
        break;
    }
    case 216756:
    {
        returnValue = F("Martin-Anderson-Nexö-Str.");
        break;
    }
    case 216757:
    {
        returnValue = F("Martin-Aschenbroich-Weg");
        break;
    }
    case 216758:
    {
        returnValue = F("Martin-Auer-Str.");
        break;
    }
    case 216759:
    {
        returnValue = F("Martin-Augustyniak-Platz");
        break;
    }
    case 216760:
    {
        returnValue = F("Martin-Bachhuber-Str.");
        break;
    }
    case 216761:
    {
        returnValue = F("Martin-Bauer-Weg");
        break;
    }
    case 216762:
    {
        returnValue = F("Martin-Bauhofer-Weg");
        break;
    }
    case 216763:
    {
        returnValue = F("Martin-Behaim-Str.");
        break;
    }
    case 216764:
    {
        returnValue = F("Martin-Behaim-Weg");
        break;
    }
    case 216765:
    {
        returnValue = F("Martin-Biebesheimer-Str.");
        break;
    }
    case 216766:
    {
        returnValue = F("Martin-Biedenbach-Str.");
        break;
    }
    case 216767:
    {
        returnValue = F("Martin-Bihn-Str.");
        break;
    }
    case 216768:
    {
        returnValue = F("Martin-Binder-Ring");
        break;
    }
    case 216769:
    {
        returnValue = F("Martin-Bittl-Str.");
        break;
    }
    case 216770:
    {
        returnValue = F("Martin-Blessing-Str.");
        break;
    }
    case 216771:
    {
        returnValue = F("Martin-Bohne-Str.");
        break;
    }
    case 216772:
    {
        returnValue = F("Martin-Boyken-Ring");
        break;
    }
    case 216773:
    {
        returnValue = F("Martin-Breuer-Weg");
        break;
    }
    case 216774:
    {
        returnValue = F("Martin-Brüns-Str.");
        break;
    }
    case 216775:
    {
        returnValue = F("Martin-Buber-Str.");
        break;
    }
    case 216776:
    {
        returnValue = F("Martin-Buber-Weg");
        break;
    }
    case 216777:
    {
        returnValue = F("Martin-Bucer-Str.");
        break;
    }
    case 216778:
    {
        returnValue = F("Martin-Bummele-Str.");
        break;
    }
    case 216779:
    {
        returnValue = F("Martin-Butzer-Str.");
        break;
    }
    case 216780:
    {
        returnValue = F("Martin-Butzer-Weg");
        break;
    }
    case 216781:
    {
        returnValue = F("Martin-Bürkle-Weg");
        break;
    }
    case 216782:
    {
        returnValue = F("Martin-Conrath-Weg");
        break;
    }
    case 216783:
    {
        returnValue = F("Martin-Crusius-Str.");
        break;
    }
    case 216784:
    {
        returnValue = F("Martin-Danjes-Weg");
        break;
    }
    case 216785:
    {
        returnValue = F("Martin-Deutsch-Str.");
        break;
    }
    case 216786:
    {
        returnValue = F("Martin-Dietrich-Allee");
        break;
    }
    case 216787:
    {
        returnValue = F("Martin-Donandt-Platz");
        break;
    }
    case 216788:
    {
        returnValue = F("Martin-Drickl-Str.");
        break;
    }
    case 216789:
    {
        returnValue = F("Martin-Drucker-Str.");
        break;
    }
    case 216790:
    {
        returnValue = F("Martin-Dömling-Str.");
        break;
    }
    case 216791:
    {
        returnValue = F("Martin-Ebell-Str.");
        break;
    }
    case 216792:
    {
        returnValue = F("Martin-Edlbauer-Str.");
        break;
    }
    case 216793:
    {
        returnValue = F("Martin-Elsaesser-Weg");
        break;
    }
    case 216794:
    {
        returnValue = F("Martin-Ephraim-Str.");
        break;
    }
    case 216795:
    {
        returnValue = F("Martin-Erhard-Weg");
        break;
    }
    case 216796:
    {
        returnValue = F("Martin-Ernst-Str.");
        break;
    }
    case 216797:
    {
        returnValue = F("Martin-Eßwein-Str.");
        break;
    }
    case 216798:
    {
        returnValue = F("Martin-Faber-Str.");
        break;
    }
    case 216799:
    {
        returnValue = F("Martin-Faßnacht-Str.");
        break;
    }
    case 216800:
    {
        returnValue = F("Martin-Festl-Ring");
        break;
    }
    case 216801:
    {
        returnValue = F("Martin-Fischbach-Weg");
        break;
    }
    case 216802:
    {
        returnValue = F("Martin-Fischel-Str.");
        break;
    }
    case 216803:
    {
        returnValue = F("Martin-Fischer-Weg");
        break;
    }
    case 216804:
    {
        returnValue = F("Martin-Flücken-Str.");
        break;
    }
    case 216805:
    {
        returnValue = F("Martin-Fonck-Str.");
        break;
    }
    case 216806:
    {
        returnValue = F("Martin-Gallus-Weg");
        break;
    }
    case 216807:
    {
        returnValue = F("Martin-Gauger-Brücke");
        break;
    }
    case 216808:
    {
        returnValue = F("Martin-Gauger-Str.");
        break;
    }
    case 216809:
    {
        returnValue = F("Martin-Gaßner-Str.");
        break;
    }
    case 216810:
    {
        returnValue = F("Martin-Geigenberger-Str.");
        break;
    }
    case 216811:
    {
        returnValue = F("Martin-Gerbert-Str.");
        break;
    }
    case 216812:
    {
        returnValue = F("Martin-Gerste-Str.");
        break;
    }
    case 216813:
    {
        returnValue = F("Martin-Gnad-Str.");
        break;
    }
    case 216814:
    {
        returnValue = F("Martin-Goldyga-Weg");
        break;
    }
    case 216815:
    {
        returnValue = F("Martin-Gomm-Weg");
        break;
    }
    case 216816:
    {
        returnValue = F("Martin-Grainer-Platz");
        break;
    }
    case 216817:
    {
        returnValue = F("Martin-Grambauer-Weg");
        break;
    }
    case 216818:
    {
        returnValue = F("Martin-Greckl-Str.");
        break;
    }
    case 216819:
    {
        returnValue = F("Martin-Greif-Höhe");
        break;
    }
    case 216820:
    {
        returnValue = F("Martin-Greif-Str.");
        break;
    }
    case 216821:
    {
        returnValue = F("Martin-Gremminger-Weg");
        break;
    }
    case 216822:
    {
        returnValue = F("Martin-Grothe-Weg");
        break;
    }
    case 216823:
    {
        returnValue = F("Martin-Grundheber-Str.");
        break;
    }
    case 216824:
    {
        returnValue = F("Martin-Göhring-Str.");
        break;
    }
    case 216825:
    {
        returnValue = F("Martin-Görgens-Str.");
        break;
    }
    case 216826:
    {
        returnValue = F("Martin-Götze-Str.");
        break;
    }
    case 216827:
    {
        returnValue = F("Martin-Haindl-Str.");
        break;
    }
    case 216828:
    {
        returnValue = F("Martin-Hassmann-Str.");
        break;
    }
    case 216829:
    {
        returnValue = F("Martin-Haug-Str.");
        break;
    }
    case 216830:
    {
        returnValue = F("Martin-Haumeier-Str.");
        break;
    }
    case 216831:
    {
        returnValue = F("Martin-Hebel-Weg");
        break;
    }
    case 216832:
    {
        returnValue = F("Martin-Heer-Weg");
        break;
    }
    case 216833:
    {
        returnValue = F("Martin-Heidegger-Str.");
        break;
    }
    case 216834:
    {
        returnValue = F("Martin-Heidegger-Weg");
        break;
    }
    case 216835:
    {
        returnValue = F("Martin-Heigl-Str.");
        break;
    }
    case 216836:
    {
        returnValue = F("Martin-Heinrich-Klaproth-Str.");
        break;
    }
    case 216837:
    {
        returnValue = F("Martin-Heix-Platz");
        break;
    }
    case 216838:
    {
        returnValue = F("Martin-Herrmann-Str.");
        break;
    }
    case 216839:
    {
        returnValue = F("Martin-Heusel-Weg");
        break;
    }
    case 216840:
    {
        returnValue = F("Martin-Heyden-Str.");
        break;
    }
    case 216841:
    {
        returnValue = F("Martin-Hilti-Weg");
        break;
    }
    case 216842:
    {
        returnValue = F("Martin-Hirsch-Str.");
        break;
    }
    case 216843:
    {
        returnValue = F("Martin-Hochmuth-Str.");
        break;
    }
    case 216844:
    {
        returnValue = F("Martin-Hofmann-Str.");
        break;
    }
    case 216845:
    {
        returnValue = F("Martin-Hoop-Str.");
        break;
    }
    case 216846:
    {
        returnValue = F("Martin-Hoop-Weg");
        break;
    }
    case 216847:
    {
        returnValue = F("Martin-Huber-Str.");
        break;
    }
    case 216848:
    {
        returnValue = F("Martin-Huber-Treppe");
        break;
    }
    case 216849:
    {
        returnValue = F("Martin-Hülsemann-Str.");
        break;
    }
    case 216850:
    {
        returnValue = F("Martin-Jansen-Str.");
        break;
    }
    case 216851:
    {
        returnValue = F("Martin-Jenninsweg");
        break;
    }
    case 216852:
    {
        returnValue = F("Martin-Josef-Str.");
        break;
    }
    case 216853:
    {
        returnValue = F("Martin-Jäger-Weg");
        break;
    }
    case 216854:
    {
        returnValue = F("Martin-Karg-Str.");
        break;
    }
    case 216855:
    {
        returnValue = F("Martin-Kaschke-Str.");
        break;
    }
    case 216856:
    {
        returnValue = F("Martin-Kempter-Str.");
        break;
    }
    case 216857:
    {
        returnValue = F("Martin-Kilian-Weg");
        break;
    }
    case 216858:
    {
        returnValue = F("Martin-Kirchhoff-Str.");
        break;
    }
    case 216859:
    {
        returnValue = F("Martin-Kirchner-Str.");
        break;
    }
    case 216860:
    {
        returnValue = F("Martin-Klauer-Weg");
        break;
    }
    case 216861:
    {
        returnValue = F("Martin-Klob-Str.");
        break;
    }
    case 216862:
    {
        returnValue = F("Martin-Kloß-Str.");
        break;
    }
    case 216863:
    {
        returnValue = F("Martin-Klün-Str.");
        break;
    }
    case 216864:
    {
        returnValue = F("Martin-Knapp-Str.");
        break;
    }
    case 216865:
    {
        returnValue = F("Martin-Knoll-Weg");
        break;
    }
    case 216866:
    {
        returnValue = F("Martin-Knoller-Str.");
        break;
    }
    case 216867:
    {
        returnValue = F("Martin-Kolmsperger-Str.");
        break;
    }
    case 216868:
    {
        returnValue = F("Martin-Kraus-Str.");
        break;
    }
    case 216869:
    {
        returnValue = F("Martin-Krebs-Weg");
        break;
    }
    case 216870:
    {
        returnValue = F("Martin-Kretschmer-Str.");
        break;
    }
    case 216871:
    {
        returnValue = F("Martin-Kuen-Str.");
        break;
    }
    case 216872:
    {
        returnValue = F("Martin-Kuen-Weg");
        break;
    }
    case 216873:
    {
        returnValue = F("Martin-Kärcher-Str.");
        break;
    }
    case 216874:
    {
        returnValue = F("Martin-Köhler-Weg");
        break;
    }
    case 216875:
    {
        returnValue = F("Martin-Köllen-Str.");
        break;
    }
    case 216876:
    {
        returnValue = F("Martin-Lang-Str.");
        break;
    }
    case 216877:
    {
        returnValue = F("Martin-Laven-Weg");
        break;
    }
    case 216878:
    {
        returnValue = F("Martin-Leder-Str.");
        break;
    }
    case 216879:
    {
        returnValue = F("Martin-Legros-Str.");
        break;
    }
    case 216880:
    {
        returnValue = F("Martin-Leuprechtinger-Str.");
        break;
    }
    case 216881:
    {
        returnValue = F("Martin-Loos-Str.");
        break;
    }
    case 216882:
    {
        returnValue = F("Martin-Ludwig-Str.");
        break;
    }
    case 216883:
    {
        returnValue = F("Martin-Luther-Allee");
        break;
    }
    case 216884:
    {
        returnValue = F("Martin-Luther-Anlage");
        break;
    }
    case 216885:
    {
        returnValue = F("Martin-Luther-Bogen");
        break;
    }
    case 216886:
    {
        returnValue = F("Martin-Luther-Gasse");
        break;
    }
    case 216887:
    {
        returnValue = F("Martin-Luther-Hain");
        break;
    }
    case 216888:
    {
        returnValue = F("Martin-Luther-Hof");
        break;
    }
    case 216889:
    {
        returnValue = F("Martin-Luther-King-Allee");
        break;
    }
    case 216890:
    {
        returnValue = F("Martin-Luther-King-Platz");
        break;
    }
    case 216891:
    {
        returnValue = F("Martin-Luther-King-Ring");
        break;
    }
    case 216892:
    {
        returnValue = F("Martin-Luther-King-Str.");
        break;
    }
    case 216893:
    {
        returnValue = F("Martin-Luther-King-Weg");
        break;
    }
    case 216894:
    {
        returnValue = F("Martin-Luther-Kirchplatz");
        break;
    }
    case 216895:
    {
        returnValue = F("Martin-Luther-Park");
        break;
    }
    case 216896:
    {
        returnValue = F("Martin-Luther-Platz");
        break;
    }
    case 216897:
    {
        returnValue = F("Martin-Luther-Ring");
        break;
    }
    case 216898:
    {
        returnValue = F("Martin-Luther-Str.");
        break;
    }
    case 216899:
    {
        returnValue = F("Martin-Luther-Weg");
        break;
    }
    case 216900:
    {
        returnValue = F("Martin-Lutzer-Brücke");
        break;
    }
    case 216901:
    {
        returnValue = F("Martin-Lövenich-Str.");
        break;
    }
    case 216902:
    {
        returnValue = F("Martin-Lürkens-Str.");
        break;
    }
    case 216903:
    {
        returnValue = F("Martin-Maier-Str.");
        break;
    }
    case 216904:
    {
        returnValue = F("Martin-May-Str.");
        break;
    }
    case 216905:
    {
        returnValue = F("Martin-Mayrock-Weg");
        break;
    }
    case 216906:
    {
        returnValue = F("Martin-Meiners-Str.");
        break;
    }
    case 216907:
    {
        returnValue = F("Martin-Mertz-Str.");
        break;
    }
    case 216908:
    {
        returnValue = F("Martin-Michel-Str.");
        break;
    }
    case 216909:
    {
        returnValue = F("Martin-Moser-Str.");
        break;
    }
    case 216910:
    {
        returnValue = F("Martin-Moyn-Ring");
        break;
    }
    case 216911:
    {
        returnValue = F("Martin-Müller-Str.");
        break;
    }
    case 216912:
    {
        returnValue = F("Martin-Müller-Weg");
        break;
    }
    case 216913:
    {
        returnValue = F("Martin-Niemöller-Anlage");
        break;
    }
    case 216914:
    {
        returnValue = F("Martin-Niemöller-Platz");
        break;
    }
    case 216915:
    {
        returnValue = F("Martin-Niemöller-Ring");
        break;
    }
    case 216916:
    {
        returnValue = F("Martin-Niemöller-Str.");
        break;
    }
    case 216917:
    {
        returnValue = F("Martin-Niemöller-Weg");
        break;
    }
    case 216918:
    {
        returnValue = F("Martin-Null-Weg");
        break;
    }
    case 216919:
    {
        returnValue = F("Martin-Oberndorfer-Str.");
        break;
    }
    case 216920:
    {
        returnValue = F("Martin-Opitz-Str.");
        break;
    }
    case 216921:
    {
        returnValue = F("Martin-Opitz-Weg");
        break;
    }
    case 216922:
    {
        returnValue = F("Martin-Ott-Str.");
        break;
    }
    case 216923:
    {
        returnValue = F("Martin-Ottens-Ring");
        break;
    }
    case 216924:
    {
        returnValue = F("Martin-Pauls-Str.");
        break;
    }
    case 216925:
    {
        returnValue = F("Martin-Peller-Str.");
        break;
    }
    case 216926:
    {
        returnValue = F("Martin-Planer-Str.");
        break;
    }
    case 216927:
    {
        returnValue = F("Martin-Planer-Weg");
        break;
    }
    case 216928:
    {
        returnValue = F("Martin-Posser-Str.");
        break;
    }
    case 216929:
    {
        returnValue = F("Martin-Prech-Str.");
        break;
    }
    case 216930:
    {
        returnValue = F("Martin-Pöhlmann-Str.");
        break;
    }
    case 216931:
    {
        returnValue = F("Martin-Rachor-Str.");
        break;
    }
    case 216932:
    {
        returnValue = F("Martin-Raith-Str.");
        break;
    }
    case 216933:
    {
        returnValue = F("Martin-Raschke-Str.");
        break;
    }
    case 216934:
    {
        returnValue = F("Martin-Recher-Str.");
        break;
    }
    case 216935:
    {
        returnValue = F("Martin-Reck-Str.");
        break;
    }
    case 216936:
    {
        returnValue = F("Martin-Reglin-Str.");
        break;
    }
    case 216937:
    {
        returnValue = F("Martin-Reichard-Weg");
        break;
    }
    case 216938:
    {
        returnValue = F("Martin-Reinemann-Str.");
        break;
    }
    case 216939:
    {
        returnValue = F("Martin-Reinhard-Str.");
        break;
    }
    case 216940:
    {
        returnValue = F("Martin-Reinke-Str.");
        break;
    }
    case 216941:
    {
        returnValue = F("Martin-Renner-Str.");
        break;
    }
    case 216942:
    {
        returnValue = F("Martin-Renz-Str.");
        break;
    }
    case 216943:
    {
        returnValue = F("Martin-Richter-Str.");
        break;
    }
    case 216944:
    {
        returnValue = F("Martin-Rieffert-Str.");
        break;
    }
    case 216945:
    {
        returnValue = F("Martin-Rinkart-Str.");
        break;
    }
    case 216946:
    {
        returnValue = F("Martin-Roth-Brücke");
        break;
    }
    case 216947:
    {
        returnValue = F("Martin-Ruf-Str.");
        break;
    }
    case 216948:
    {
        returnValue = F("Martin-Schalling-Str.");
        break;
    }
    case 216949:
    {
        returnValue = F("Martin-Schenk-Str.");
        break;
    }
    case 216950:
    {
        returnValue = F("Martin-Scheumann-Str.");
        break;
    }
    case 216951:
    {
        returnValue = F("Martin-Schleker-Platz");
        break;
    }
    case 216952:
    {
        returnValue = F("Martin-Schleyer-Str.");
        break;
    }
    case 216953:
    {
        returnValue = F("Martin-Schlör-Str.");
        break;
    }
    case 216954:
    {
        returnValue = F("Martin-Schmal-Str.");
        break;
    }
    case 216955:
    {
        returnValue = F("Martin-Schmidt-Str.");
        break;
    }
    case 216956:
    {
        returnValue = F("Martin-Schmitt-Str.");
        break;
    }
    case 216957:
    {
        returnValue = F("Martin-Schneller-Str.");
        break;
    }
    case 216958:
    {
        returnValue = F("Martin-Schongauer-Str.");
        break;
    }
    case 216959:
    {
        returnValue = F("Martin-Schongauer-Weg");
        break;
    }
    case 216960:
    {
        returnValue = F("Martin-Schorer-Str.");
        break;
    }
    case 216961:
    {
        returnValue = F("Martin-Schrenk-Str.");
        break;
    }
    case 216962:
    {
        returnValue = F("Martin-Schrettinger-Str.");
        break;
    }
    case 216963:
    {
        returnValue = F("Martin-Schröder-Str.");
        break;
    }
    case 216964:
    {
        returnValue = F("Martin-Schunck-Str.");
        break;
    }
    case 216965:
    {
        returnValue = F("Martin-Schwantes-Str.");
        break;
    }
    case 216966:
    {
        returnValue = F("Martin-Schwarz-Weg");
        break;
    }
    case 216967:
    {
        returnValue = F("Martin-Schweiger-Str.");
        break;
    }
    case 216968:
    {
        returnValue = F("Martin-Seidel-Str.");
        break;
    }
    case 216969:
    {
        returnValue = F("Martin-Seitz-Str.");
        break;
    }
    case 216970:
    {
        returnValue = F("Martin-Selber-Str.");
        break;
    }
    case 216971:
    {
        returnValue = F("Martin-Siebert-Str.");
        break;
    }
    case 216972:
    {
        returnValue = F("Martin-Speel-Str.");
        break;
    }
    case 216973:
    {
        returnValue = F("Martin-Speer-Weg");
        break;
    }
    case 216974:
    {
        returnValue = F("Martin-Stangl-Str.");
        break;
    }
    case 216975:
    {
        returnValue = F("Martin-Staud-Str.");
        break;
    }
    case 216976:
    {
        returnValue = F("Martin-Stegmüller-Str.");
        break;
    }
    case 216977:
    {
        returnValue = F("Martin-Strauss-Platz");
        break;
    }
    case 216978:
    {
        returnValue = F("Martin-Struff-Str.");
        break;
    }
    case 216979:
    {
        returnValue = F("Martin-Stähle-Str.");
        break;
    }
    case 216980:
    {
        returnValue = F("Martin-Stöhr-Str.");
        break;
    }
    case 216981:
    {
        returnValue = F("Martin-Ulbrich-Str.");
        break;
    }
    case 216982:
    {
        returnValue = F("Martin-Unger-Weg");
        break;
    }
    case 216983:
    {
        returnValue = F("Martin-Utzmann-Weg");
        break;
    }
    case 216984:
    {
        returnValue = F("Martin-Venedey-Str.");
        break;
    }
    case 216985:
    {
        returnValue = F("Martin-Vetten-Str.");
        break;
    }
    case 216986:
    {
        returnValue = F("Martin-Vierengel-Str.");
        break;
    }
    case 216987:
    {
        returnValue = F("Martin-Volck-Str.");
        break;
    }
    case 216988:
    {
        returnValue = F("Martin-Vollmer-Weg");
        break;
    }
    case 216989:
    {
        returnValue = F("Martin-Voß-Str.");
        break;
    }
    case 216990:
    {
        returnValue = F("Martin-Wallinger-Str.");
        break;
    }
    case 216991:
    {
        returnValue = F("Martin-Weber-Weg");
        break;
    }
    case 216992:
    {
        returnValue = F("Martin-Wehnert-Platz");
        break;
    }
    case 216993:
    {
        returnValue = F("Martin-Weigel-Str.");
        break;
    }
    case 216994:
    {
        returnValue = F("Martin-Weinrich-Weg");
        break;
    }
    case 216995:
    {
        returnValue = F("Martin-Weiß-Str.");
        break;
    }
    case 216996:
    {
        returnValue = F("Martin-Wieland-Str.");
        break;
    }
    case 216997:
    {
        returnValue = F("Martin-Wiesend-Str.");
        break;
    }
    case 216998:
    {
        returnValue = F("Martin-Wilhelm-Str.");
        break;
    }
    case 216999:
    {
        returnValue = F("Martin-Wohmann-Str.");
        break;
    }
    case 217000:
    {
        returnValue = F("Martin-Wöhrl-Str.");
        break;
    }
    case 217001:
    {
        returnValue = F("Martin-Zach-Str.");
        break;
    }
    case 217002:
    {
        returnValue = F("Martin-Zeiler-Str.");
        break;
    }
    case 217003:
    {
        returnValue = F("Martin-Zey-Str.");
        break;
    }
    case 217004:
    {
        returnValue = F("Martin-von-Deutinger-Str.");
        break;
    }
    case 217005:
    {
        returnValue = F("Martin-von-Eyb-Str.");
        break;
    }
    case 217006:
    {
        returnValue = F("Martin-von-Holle-Weg");
        break;
    }
    case 217007:
    {
        returnValue = F("Martin-von-Schaumberg Str.");
        break;
    }
    case 217008:
    {
        returnValue = F("Martina-Glagow-Park");
        break;
    }
    case 217009:
    {
        returnValue = F("Martina-Hoerbiger-Str.");
        break;
    }
    case 217010:
    {
        returnValue = F("Martinerfeld");
        break;
    }
    case 217011:
    {
        returnValue = F("Martinetstr.");
        break;
    }
    case 217012:
    {
        returnValue = F("Martinfelder Str.");
        break;
    }
    case 217013:
    {
        returnValue = F("Martinhagener Str.");
        break;
    }
    case 217014:
    {
        returnValue = F("Martinifriedhof");
        break;
    }
    case 217015:
    {
        returnValue = F("Martinigarten");
        break;
    }
    case 217016:
    {
        returnValue = F("Martinigasse");
        break;
    }
    case 217017:
    {
        returnValue = F("Martinikirchgang");
        break;
    }
    case 217018:
    {
        returnValue = F("Martinikirchhof");
        break;
    }
    case 217019:
    {
        returnValue = F("Martinipark");
        break;
    }
    case 217020:
    {
        returnValue = F("Martiniplatz");
        break;
    }
    case 217021:
    {
        returnValue = F("Martiniring");
        break;
    }
    case 217022:
    {
        returnValue = F("Martinistr.");
        break;
    }
    case 217023:
    {
        returnValue = F("Martiniweg");
        break;
    }
    case 217024:
    {
        returnValue = F("Martinlamitzer Str.");
        break;
    }
    case 217025:
    {
        returnValue = F("Martinlamitzer Weg");
        break;
    }
    case 217026:
    {
        returnValue = F("Martinplatz");
        break;
    }
    case 217027:
    {
        returnValue = F("Martinring");
        break;
    }
    case 217028:
    {
        returnValue = F("Martinrodaer Landstr.");
        break;
    }
    case 217029:
    {
        returnValue = F("Martinrodaer Str.");
        break;
    }
    case 217030:
    {
        returnValue = F("Martinrodaer Weg");
        break;
    }
    case 217031:
    {
        returnValue = F("Martins Feld");
        break;
    }
    case 217032:
    {
        returnValue = F("Martins Weg");
        break;
    }
    case 217033:
    {
        returnValue = F("Martins-Kirch-Str.");
        break;
    }
    case 217034:
    {
        returnValue = F("Martins-Kirchgasse");
        break;
    }
    case 217035:
    {
        returnValue = F("Martinsallee");
        break;
    }
    case 217036:
    {
        returnValue = F("Martinsanger");
        break;
    }
    case 217037:
    {
        returnValue = F("Martinsbachweg");
        break;
    }
    case 217038:
    {
        returnValue = F("Martinsberg");
        break;
    }
    case 217039:
    {
        returnValue = F("Martinsberger Str.");
        break;
    }
    case 217040:
    {
        returnValue = F("Martinsbergstr.");
        break;
    }
    case 217041:
    {
        returnValue = F("Martinsbergweg");
        break;
    }
    case 217042:
    {
        returnValue = F("Martinsblick");
        break;
    }
    case 217043:
    {
        returnValue = F("Martinsbrücke");
        break;
    }
    case 217044:
    {
        returnValue = F("Martinsbucher Str.");
        break;
    }
    case 217045:
    {
        returnValue = F("Martinsburg");
        break;
    }
    case 217046:
    {
        returnValue = F("Martinsbühler Str.");
        break;
    }
    case 217047:
    {
        returnValue = F("Martinsbühlweg");
        break;
    }
    case 217048:
    {
        returnValue = F("Martinsbütteler Weg");
        break;
    }
    case 217049:
    {
        returnValue = F("Martinseck");
        break;
    }
    case 217050:
    {
        returnValue = F("Martinsenstr.");
        break;
    }
    case 217051:
    {
        returnValue = F("Martinsfeld");
        break;
    }
    case 217052:
    {
        returnValue = F("Martinsgang");
        break;
    }
    case 217053:
    {
        returnValue = F("Martinsgarten");
        break;
    }
    case 217054:
    {
        returnValue = F("Martinsgasse");
        break;
    }
    case 217055:
    {
        returnValue = F("Martinsgrund");
        break;
    }
    case 217056:
    {
        returnValue = F("Martinshardtstr.");
        break;
    }
    case 217057:
    {
        returnValue = F("Martinshaun");
        break;
    }
    case 217058:
    {
        returnValue = F("Martinshof");
        break;
    }
    case 217059:
    {
        returnValue = F("Martinshöhe");
        break;
    }
    case 217060:
    {
        returnValue = F("Martinshöher Weg");
        break;
    }
    case 217061:
    {
        returnValue = F("Martinshütte");
        break;
    }
    case 217062:
    {
        returnValue = F("Martinshütter Weg");
        break;
    }
    case 217063:
    {
        returnValue = F("Martinskamp");
        break;
    }
    case 217064:
    {
        returnValue = F("Martinskirche");
        break;
    }
    case 217065:
    {
        returnValue = F("Martinskirchgasse");
        break;
    }
    case 217066:
    {
        returnValue = F("Martinskirchner Weg");
        break;
    }
    case 217067:
    {
        returnValue = F("Martinskirchstr.");
        break;
    }
    case 217068:
    {
        returnValue = F("Martinskirchweg");
        break;
    }
    case 217069:
    {
        returnValue = F("Martinskloster");
        break;
    }
    case 217070:
    {
        returnValue = F("Martinskreuz");
        break;
    }
    case 217071:
    {
        returnValue = F("Martinskreuzweg");
        break;
    }
    case 217072:
    {
        returnValue = F("Martinsmooser Str.");
        break;
    }
    case 217073:
    {
        returnValue = F("Martinsnück");
        break;
    }
    case 217074:
    {
        returnValue = F("Martinspfad");
        break;
    }
    case 217075:
    {
        returnValue = F("Martinspforte");
        break;
    }
    case 217076:
    {
        returnValue = F("Martinsplatz");
        break;
    }
    case 217077:
    {
        returnValue = F("Martinsreuth");
        break;
    }
    case 217078:
    {
        returnValue = F("Martinsrieder Str.");
        break;
    }
    case 217079:
    {
        returnValue = F("Martinsriether Weg");
        break;
    }
    case 217080:
    {
        returnValue = F("Martinsring");
        break;
    }
    case 217081:
    {
        returnValue = F("Martinssteg");
        break;
    }
    case 217082:
    {
        returnValue = F("Martinssteig");
        break;
    }
    case 217083:
    {
        returnValue = F("Martinsstr.");
        break;
    }
    case 217084:
    {
        returnValue = F("Martinstal");
        break;
    }
    case 217085:
    {
        returnValue = F("Martinsthaler Weg");
        break;
    }
    case 217086:
    {
        returnValue = F("Martinstift");
        break;
    }
    case 217087:
    {
        returnValue = F("Martinstor");
        break;
    }
    case 217088:
    {
        returnValue = F("Martinstorplatz");
        break;
    }
    case 217089:
    {
        returnValue = F("Martinstr.");
        break;
    }
    case 217090:
    {
        returnValue = F("Martinsufer");
        break;
    }
    case 217091:
    {
        returnValue = F("Martinsweg");
        break;
    }
    case 217092:
    {
        returnValue = F("Martinsweiler");
        break;
    }
    case 217093:
    {
        returnValue = F("Martinswinkel");
        break;
    }
    case 217094:
    {
        returnValue = F("Martinswinkelstr.");
        break;
    }
    case 217095:
    {
        returnValue = F("Martinszell");
        break;
    }
    case 217096:
    {
        returnValue = F("Martinumgasse");
        break;
    }
    case 217097:
    {
        returnValue = F("Martinuskirchstr.");
        break;
    }
    case 217098:
    {
        returnValue = F("Martinusplatz");
        break;
    }
    case 217099:
    {
        returnValue = F("Martinusstr.");
        break;
    }
    case 217100:
    {
        returnValue = F("Martinusviertel");
        break;
    }
    case 217101:
    {
        returnValue = F("Martinusweg");
        break;
    }
    case 217102:
    {
        returnValue = F("Martinweg");
        break;
    }
    case 217103:
    {
        returnValue = F("Martiusweg");
        break;
    }
    case 217104:
    {
        returnValue = F("Martje-Flohrs-Str.");
        break;
    }
    case 217105:
    {
        returnValue = F("Martlbauerfeld");
        break;
    }
    case 217106:
    {
        returnValue = F("Martlstr.");
        break;
    }
    case 217107:
    {
        returnValue = F("Martsieksweg");
        break;
    }
    case 217108:
    {
        returnValue = F("Martzschpark");
        break;
    }
    case 217109:
    {
        returnValue = F("Martzschstr.");
        break;
    }
    case 217110:
    {
        returnValue = F("Martzschweg");
        break;
    }
    case 217111:
    {
        returnValue = F("Marum-Park");
        break;
    }
    case 217112:
    {
        returnValue = F("Marumstr.");
        break;
    }
    case 217113:
    {
        returnValue = F("Marwa-El-Sherbini-Park");
        break;
    }
    case 217114:
    {
        returnValue = F("Marwanger Ring");
        break;
    }
    case 217115:
    {
        returnValue = F("Marwanger Str.");
        break;
    }
    case 217116:
    {
        returnValue = F("Marweder Str.");
        break;
    }
    case 217117:
    {
        returnValue = F("Marweder Weg");
        break;
    }
    case 217118:
    {
        returnValue = F("Marwick");
        break;
    }
    case 217119:
    {
        returnValue = F("Marwitzer Str.");
        break;
    }
    case 217120:
    {
        returnValue = F("Marwitzer Trift");
        break;
    }
    case 217121:
    {
        returnValue = F("Marx von Bubenhofen-Str.");
        break;
    }
    case 217122:
    {
        returnValue = F("Marx-Engels-Platz");
        break;
    }
    case 217123:
    {
        returnValue = F("Marx-Engels-Str.");
        break;
    }
    case 217124:
    {
        returnValue = F("Marx-Meyer-Str.");
        break;
    }
    case 217125:
    {
        returnValue = F("Marx-Wadle-Str.");
        break;
    }
    case 217126:
    {
        returnValue = F("Marxbauerstr.");
        break;
    }
    case 217127:
    {
        returnValue = F("Marxdorfer Str.");
        break;
    }
    case 217128:
    {
        returnValue = F("Marxenbühlweg");
        break;
    }
    case 217129:
    {
        returnValue = F("Marxener Str.");
        break;
    }
    case 217130:
    {
        returnValue = F("Marxener Weg");
        break;
    }
    case 217131:
    {
        returnValue = F("Marxengasse");
        break;
    }
    case 217132:
    {
        returnValue = F("Marxenhofweg");
        break;
    }
    case 217133:
    {
        returnValue = F("Marxenweg");
        break;
    }
    case 217134:
    {
        returnValue = F("Marxenweidenweg");
        break;
    }
    case 217135:
    {
        returnValue = F("Marxenäckerweg");
        break;
    }
    case 217136:
    {
        returnValue = F("Marxer Buschweg");
        break;
    }
    case 217137:
    {
        returnValue = F("Marxer Feldweg");
        break;
    }
    case 217138:
    {
        returnValue = F("Marxer Hauptstr.");
        break;
    }
    case 217139:
    {
        returnValue = F("Marxer Hopelser Weg");
        break;
    }
    case 217140:
    {
        returnValue = F("Marxer Rosenweg");
        break;
    }
    case 217141:
    {
        returnValue = F("Marxer Schulweg");
        break;
    }
    case 217142:
    {
        returnValue = F("Marxgrüner Weg");
        break;
    }
    case 217143:
    {
        returnValue = F("Marxgärtenstr.");
        break;
    }
    case 217144:
    {
        returnValue = F("Marxheimer Kräutergarten");
        break;
    }
    case 217145:
    {
        returnValue = F("Marxheimer Str.");
        break;
    }
    case 217146:
    {
        returnValue = F("Marxhofstr.");
        break;
    }
    case 217147:
    {
        returnValue = F("Marxnweg");
        break;
    }
    case 217148:
    {
        returnValue = F("Marxsteig");
        break;
    }
    case 217149:
    {
        returnValue = F("Marxstr.");
        break;
    }
    case 217150:
    {
        returnValue = F("Marxwalder Str.");
        break;
    }
    case 217151:
    {
        returnValue = F("Marxzeller Str.");
        break;
    }
    case 217152:
    {
        returnValue = F("Marxzeller Weg");
        break;
    }
    case 217153:
    {
        returnValue = F("Mary-Anderson-Str.");
        break;
    }
    case 217154:
    {
        returnValue = F("Mary-Cassatt-Ring");
        break;
    }
    case 217155:
    {
        returnValue = F("Mary-Krebs-Str.");
        break;
    }
    case 217156:
    {
        returnValue = F("Mary-Neumann-Str.");
        break;
    }
    case 217157:
    {
        returnValue = F("Mary-Somerville-Boulevard");
        break;
    }
    case 217158:
    {
        returnValue = F("Mary-Wigman-Str.");
        break;
    }
    case 217159:
    {
        returnValue = F("Mary-Wigman-Weg");
        break;
    }
    case 217160:
    {
        returnValue = F("Maryland Avenue");
        break;
    }
    case 217161:
    {
        returnValue = F("Marz");
        break;
    }
    case 217162:
    {
        returnValue = F("Marzahnaer Gartenstr.");
        break;
    }
    case 217163:
    {
        returnValue = F("Marzahnaer Mühlenweg");
        break;
    }
    case 217164:
    {
        returnValue = F("Marzahnaer Str.");
        break;
    }
    case 217165:
    {
        returnValue = F("Marzahnaer Winkel");
        break;
    }
    case 217166:
    {
        returnValue = F("Marzahner Feldweg");
        break;
    }
    case 217167:
    {
        returnValue = F("Marzahner Str.");
        break;
    }
    case 217168:
    {
        returnValue = F("Marzauer Mühle");
        break;
    }
    case 217169:
    {
        returnValue = F("Marzell");
        break;
    }
    case 217170:
    {
        returnValue = F("Marzell-Oberneder-Str.");
        break;
    }
    case 217171:
    {
        returnValue = F("Marzeller Weg");
        break;
    }
    case 217172:
    {
        returnValue = F("Marzellerstr.");
        break;
    }
    case 217173:
    {
        returnValue = F("Marzellinastr.");
        break;
    }
    case 217174:
    {
        returnValue = F("Marzellusgasse");
        break;
    }
    case 217175:
    {
        returnValue = F("Marzellusstr.");
        break;
    }
    case 217176:
    {
        returnValue = F("Marzelstetten");
        break;
    }
    case 217177:
    {
        returnValue = F("Marzelstetter Weg");
        break;
    }
    case 217178:
    {
        returnValue = F("Marzenbruchstr.");
        break;
    }
    case 217179:
    {
        returnValue = F("Marzer Weg");
        break;
    }
    case 217180:
    {
        returnValue = F("Marzhäuser Str.");
        break;
    }
    case 217181:
    {
        returnValue = F("Marzlinger Fußweg");
        break;
    }
    case 217182:
    {
        returnValue = F("Marzoller Weg");
        break;
    }
    case 217183:
    {
        returnValue = F("Marßeler Str.");
        break;
    }
    case 217184:
    {
        returnValue = F("Maränenring");
        break;
    }
    case 217185:
    {
        returnValue = F("Maränenstieg");
        break;
    }
    case 217186:
    {
        returnValue = F("Maränenweg");
        break;
    }
    case 217187:
    {
        returnValue = F("Maräzweg");
        break;
    }
    case 217188:
    {
        returnValue = F("Maréesstr.");
        break;
    }
    case 217189:
    {
        returnValue = F("Marödelstr.");
        break;
    }
    case 217190:
    {
        returnValue = F("Masanscher Weg");
        break;
    }
    case 217191:
    {
        returnValue = F("Masayaplatz");
        break;
    }
    case 217192:
    {
        returnValue = F("Masbach");
        break;
    }
    case 217193:
    {
        returnValue = F("Masbacher Str.");
        break;
    }
    case 217194:
    {
        returnValue = F("Masbeck");
        break;
    }
    case 217195:
    {
        returnValue = F("Masberg");
        break;
    }
    case 217196:
    {
        returnValue = F("Masbergweg");
        break;
    }
    case 217197:
    {
        returnValue = F("Masbrock");
        break;
    }
    case 217198:
    {
        returnValue = F("Masbrocker Weg");
        break;
    }
    case 217199:
    {
        returnValue = F("Masbrok");
        break;
    }
    case 217200:
    {
        returnValue = F("Masburger Str.");
        break;
    }
    case 217201:
    {
        returnValue = F("Masch");
        break;
    }
    case 217202:
    {
        returnValue = F("Mascha-Kaleko-Str.");
        break;
    }
    case 217203:
    {
        returnValue = F("Maschberg");
        break;
    }
    case 217204:
    {
        returnValue = F("Maschbruchstr.");
        break;
    }
    case 217205:
    {
        returnValue = F("Maschdamm");
        break;
    }
    case 217206:
    {
        returnValue = F("Masche");
        break;
    }
    case 217207:
    {
        returnValue = F("Maschenbauerstr.");
        break;
    }
    case 217208:
    {
        returnValue = F("Maschenberger Str.");
        break;
    }
    case 217209:
    {
        returnValue = F("Maschener Kirchweg");
        break;
    }
    case 217210:
    {
        returnValue = F("Maschener Schützenstr.");
        break;
    }
    case 217211:
    {
        returnValue = F("Maschener Str.");
        break;
    }
    case 217212:
    {
        returnValue = F("Maschenhack");
        break;
    }
    case 217213:
    {
        returnValue = F("Maschenplatz");
        break;
    }
    case 217214:
    {
        returnValue = F("Maschenpromenade");
        break;
    }
    case 217215:
    {
        returnValue = F("Maschenquetge");
        break;
    }
    case 217216:
    {
        returnValue = F("Maschensfeld");
        break;
    }
    case 217217:
    {
        returnValue = F("Maschenstr.");
        break;
    }
    case 217218:
    {
        returnValue = F("Maschenweg");
        break;
    }
    case 217219:
    {
        returnValue = F("Mascheroder Str.");
        break;
    }
    case 217220:
    {
        returnValue = F("Mascheroder Weg");
        break;
    }
    case 217221:
    {
        returnValue = F("Maschfeld");
        break;
    }
    case 217222:
    {
        returnValue = F("Maschgaeten");
        break;
    }
    case 217223:
    {
        returnValue = F("Maschgarten");
        break;
    }
    case 217224:
    {
        returnValue = F("Maschgartenberg");
        break;
    }
    case 217225:
    {
        returnValue = F("Maschgartenstr.");
        break;
    }
    case 217226:
    {
        returnValue = F("Maschgärten");
        break;
    }
    case 217227:
    {
        returnValue = F("Maschhagen");
        break;
    }
    case 217228:
    {
        returnValue = F("Maschhalbe");
        break;
    }
    case 217229:
    {
        returnValue = F("Maschhaupt");
        break;
    }
    case 217230:
    {
        returnValue = F("Maschhof");
        break;
    }
    case 217231:
    {
        returnValue = F("Maschhop");
        break;
    }
    case 217232:
    {
        returnValue = F("Maschhorns Damm");
        break;
    }
    case 217233:
    {
        returnValue = F("Maschinenhausstr.");
        break;
    }
    case 217234:
    {
        returnValue = F("Maschinenstr.");
        break;
    }
    case 217235:
    {
        returnValue = F("Maschinenweg");
        break;
    }
    case 217236:
    {
        returnValue = F("Maschkamp");
        break;
    }
    case 217237:
    {
        returnValue = F("Maschke-Weg");
        break;
    }
    case 217238:
    {
        returnValue = F("Maschkoppel");
        break;
    }
    case 217239:
    {
        returnValue = F("Maschland");
        break;
    }
    case 217240:
    {
        returnValue = F("Maschlandstr.");
        break;
    }
    case 217241:
    {
        returnValue = F("Maschmühlenweg");
        break;
    }
    case 217242:
    {
        returnValue = F("Maschortstr.");
        break;
    }
    case 217243:
    {
        returnValue = F("Maschplatz");
        break;
    }
    case 217244:
    {
        returnValue = F("Maschring");
        break;
    }
    case 217245:
    {
        returnValue = F("Maschseeweg");
        break;
    }
    case 217246:
    {
        returnValue = F("Maschsiedlung");
        break;
    }
    case 217247:
    {
        returnValue = F("Maschstr.");
        break;
    }
    case 217248:
    {
        returnValue = F("Maschtor");
        break;
    }
    case 217249:
    {
        returnValue = F("Maschtorkamp");
        break;
    }
    case 217250:
    {
        returnValue = F("Maschtwete");
        break;
    }
    case 217251:
    {
        returnValue = F("Maschweg");
        break;
    }
    case 217252:
    {
        returnValue = F("Maschwiese");
        break;
    }
    case 217253:
    {
        returnValue = F("Maschwiesen");
        break;
    }
    case 217254:
    {
        returnValue = F("Maschwinkel");
        break;
    }
    case 217255:
    {
        returnValue = F("Maschwitzer Str.");
        break;
    }
    case 217256:
    {
        returnValue = F("Maschwitzer Weg");
        break;
    }
    case 217257:
    {
        returnValue = F("Mascowstr.");
        break;
    }
    case 217258:
    {
        returnValue = F("Maselberg");
        break;
    }
    case 217259:
    {
        returnValue = F("Maseler Dorfstr.");
        break;
    }
    case 217260:
    {
        returnValue = F("Maseler Str.");
        break;
    }
    case 217261:
    {
        returnValue = F("Maselheimer Str.");
        break;
    }
    case 217262:
    {
        returnValue = F("Masendorfer Weg");
        break;
    }
    case 217263:
    {
        returnValue = F("Maseniusstr.");
        break;
    }
    case 217264:
    {
        returnValue = F("Maseringer Str.");
        break;
    }
    case 217265:
    {
        returnValue = F("Maserstr.");
        break;
    }
    case 217266:
    {
        returnValue = F("Mashalderring");
        break;
    }
    case 217267:
    {
        returnValue = F("Masholderer Str.");
        break;
    }
    case 217268:
    {
        returnValue = F("Maslingstr.");
        break;
    }
    case 217269:
    {
        returnValue = F("Masloh");
        break;
    }
    case 217270:
    {
        returnValue = F("Masloher Brunnenweg");
        break;
    }
    case 217271:
    {
        returnValue = F("Maspe");
        break;
    }
    case 217272:
    {
        returnValue = F("Masper Str.");
        break;
    }
    case 217273:
    {
        returnValue = F("Mass Avenue");
        break;
    }
    case 217274:
    {
        returnValue = F("Massachusetts Avenue");
        break;
    }
    case 217275:
    {
        returnValue = F("Massandweg");
        break;
    }
    case 217276:
    {
        returnValue = F("Massanei");
        break;
    }
    case 217277:
    {
        returnValue = F("Massaneier Str.");
        break;
    }
    case 217278:
    {
        returnValue = F("Massaplatz");
        break;
    }
    case 217279:
    {
        returnValue = F("Massastr.");
        break;
    }
    case 217280:
    {
        returnValue = F("Massdiek");
        break;
    }
    case 217281:
    {
        returnValue = F("Masselbachstr.");
        break;
    }
    case 217282:
    {
        returnValue = F("Masselberg");
        break;
    }
    case 217283:
    {
        returnValue = F("Masselbett");
        break;
    }
    case 217284:
    {
        returnValue = F("Masseldornstr.");
        break;
    }
    case 217285:
    {
        returnValue = F("Masselstr.");
        break;
    }
    case 217286:
    {
        returnValue = F("Masselturenstr.");
        break;
    }
    case 217287:
    {
        returnValue = F("Masselweg");
        break;
    }
    case 217288:
    {
        returnValue = F("Massenbach");
        break;
    }
    case 217289:
    {
        returnValue = F("Massenbacher Str.");
        break;
    }
    case 217290:
    {
        returnValue = F("Massenbacher Weg");
        break;
    }
    case 217291:
    {
        returnValue = F("Massenbachhausener Str.");
        break;
    }
    case 217292:
    {
        returnValue = F("Massenbachstr.");
        break;
    }
    case 217293:
    {
        returnValue = F("Massenbachweg");
        break;
    }
    case 217294:
    {
        returnValue = F("Massenbergstr.");
        break;
    }
    case 217295:
    {
        returnValue = F("Massenbergweg");
        break;
    }
    case 217296:
    {
        returnValue = F("Massendorfer Str.");
        break;
    }
    case 217297:
    {
        returnValue = F("Massendorfer Weg");
        break;
    }
    case 217298:
    {
        returnValue = F("Masseneistr.");
        break;
    }
    case 217299:
    {
        returnValue = F("Massener Bachstr.");
        break;
    }
    case 217300:
    {
        returnValue = F("Massener Bahnhofstr.");
        break;
    }
    case 217301:
    {
        returnValue = F("Massener Dorfstr.");
        break;
    }
    case 217302:
    {
        returnValue = F("Massener Heide");
        break;
    }
    case 217303:
    {
        returnValue = F("Massener Hellweg");
        break;
    }
    case 217304:
    {
        returnValue = F("Massener Kirchweg");
        break;
    }
    case 217305:
    {
        returnValue = F("Massener Str.");
        break;
    }
    case 217306:
    {
        returnValue = F("Massengasse");
        break;
    }
    case 217307:
    {
        returnValue = F("Massenhausener Str.");
        break;
    }
    case 217308:
    {
        returnValue = F("Massenhauser Str.");
        break;
    }
    case 217309:
    {
        returnValue = F("Massenhauserstr.");
        break;
    }
    case 217310:
    {
        returnValue = F("Massenheimer Str.");
        break;
    }
    case 217311:
    {
        returnValue = F("Massenheimer Weg");
        break;
    }
    case 217312:
    {
        returnValue = F("Massenhäuser Dorfstr.");
        break;
    }
    case 217313:
    {
        returnValue = F("Massenhäuser Str.");
        break;
    }
    case 217314:
    {
        returnValue = F("Massenmühle");
        break;
    }
    case 217315:
    {
        returnValue = F("Masserberger Str.");
        break;
    }
    case 217316:
    {
        returnValue = F("Massholder");
        break;
    }
    case 217317:
    {
        returnValue = F("Massi Park");
        break;
    }
    case 217318:
    {
        returnValue = F("Massiefen");
        break;
    }
    case 217319:
    {
        returnValue = F("Massinger Str.");
        break;
    }
    case 217320:
    {
        returnValue = F("Massinger Weg");
        break;
    }
    case 217321:
    {
        returnValue = F("Masslerweg");
        break;
    }
    case 217322:
    {
        returnValue = F("Massnachweg");
        break;
    }
    case 217323:
    {
        returnValue = F("Massonneaustr.");
        break;
    }
    case 217324:
    {
        returnValue = F("Massowburg");
        break;
    }
    case 217325:
    {
        returnValue = F("Massower Str.");
        break;
    }
    case 217326:
    {
        returnValue = F("Massweg");
        break;
    }
    case 217327:
    {
        returnValue = F("Masswelle");
        break;
    }
    case 217328:
    {
        returnValue = F("Massy-Igny-Weg");
        break;
    }
    case 217329:
    {
        returnValue = F("Mastauweg");
        break;
    }
    case 217330:
    {
        returnValue = F("Mastbergstr.");
        break;
    }
    case 217331:
    {
        returnValue = F("Mastbrock");
        break;
    }
    case 217332:
    {
        returnValue = F("Mastbrooker Weg");
        break;
    }
    case 217333:
    {
        returnValue = F("Mastbruch");
        break;
    }
    case 217334:
    {
        returnValue = F("Mastbruchstr.");
        break;
    }
    case 217335:
    {
        returnValue = F("Mastbruchweg");
        break;
    }
    case 217336:
    {
        returnValue = F("Mastbrunnenschneise");
        break;
    }
    case 217337:
    {
        returnValue = F("Mastbrücke");
        break;
    }
    case 217338:
    {
        returnValue = F("Mastendamm");
        break;
    }
    case 217339:
    {
        returnValue = F("Mastener Ring");
        break;
    }
    case 217340:
    {
        returnValue = F("Mastener Str.");
        break;
    }
    case 217341:
    {
        returnValue = F("Mastener Weg");
        break;
    }
    case 217342:
    {
        returnValue = F("Mastengasse");
        break;
    }
    case 217343:
    {
        returnValue = F("Mastenweg");
        break;
    }
    case 217344:
    {
        returnValue = F("Master Esch");
        break;
    }
    case 217345:
    {
        returnValue = F("Mastershausener Weg");
        break;
    }
    case 217346:
    {
        returnValue = F("Masteweg");
        break;
    }
    case 217347:
    {
        returnValue = F("Mastfeld");
        break;
    }
    case 217348:
    {
        returnValue = F("Masthoffstr.");
        break;
    }
    case 217349:
    {
        returnValue = F("Mastholter Str.");
        break;
    }
    case 217350:
    {
        returnValue = F("Masthorner Str.");
        break;
    }
    case 217351:
    {
        returnValue = F("Mastkamp");
        break;
    }
    case 217352:
    {
        returnValue = F("Mastkobener Weg");
        break;
    }
    case 217353:
    {
        returnValue = F("Mastkorbweg");
        break;
    }
    case 217354:
    {
        returnValue = F("Mastorter Str.");
        break;
    }
    case 217355:
    {
        returnValue = F("Maststr.");
        break;
    }
    case 217356:
    {
        returnValue = F("Masttal");
        break;
    }
    case 217357:
    {
        returnValue = F("Mastweg");
        break;
    }
    case 217358:
    {
        returnValue = F("Mastwiesenweg");
        break;
    }
    case 217359:
    {
        returnValue = F("Masurenallee");
        break;
    }
    case 217360:
    {
        returnValue = F("Masurengasse");
        break;
    }
    case 217361:
    {
        returnValue = F("Masurenpfad");
        break;
    }
    case 217362:
    {
        returnValue = F("Masurenplatz");
        break;
    }
    case 217363:
    {
        returnValue = F("Masurenring");
        break;
    }
    case 217364:
    {
        returnValue = F("Masurenstr.");
        break;
    }
    case 217365:
    {
        returnValue = F("Masurenweg");
        break;
    }
    case 217366:
    {
        returnValue = F("Matagalpa-Ufer");
        break;
    }
    case 217367:
    {
        returnValue = F("Mataréstr.");
        break;
    }
    case 217368:
    {
        returnValue = F("Mateh-Yehuda-Str.");
        break;
    }
    case 217369:
    {
        returnValue = F("Matenastr.");
        break;
    }
    case 217370:
    {
        returnValue = F("Mater-Bonifacia-Weg");
        break;
    }
    case 217371:
    {
        returnValue = F("Mater-Brigitta-Str.");
        break;
    }
    case 217372:
    {
        returnValue = F("Mater-Coelestine-Weg");
        break;
    }
    case 217373:
    {
        returnValue = F("Mater-Corona-Str.");
        break;
    }
    case 217374:
    {
        returnValue = F("Mater-Rosa-Ring");
        break;
    }
    case 217375:
    {
        returnValue = F("Materaweg");
        break;
    }
    case 217376:
    {
        returnValue = F("Materborner Allee");
        break;
    }
    case 217377:
    {
        returnValue = F("Materialhofstr.");
        break;
    }
    case 217378:
    {
        returnValue = F("Materialienstr.");
        break;
    }
    case 217379:
    {
        returnValue = F("Materialseilbahn");
        break;
    }
    case 217380:
    {
        returnValue = F("Materlikstr.");
        break;
    }
    case 217381:
    {
        returnValue = F("Matern-Feuerbacher-Str.");
        break;
    }
    case 217382:
    {
        returnValue = F("Matern-Miltz-Str.");
        break;
    }
    case 217383:
    {
        returnValue = F("Maternstr.");
        break;
    }
    case 217384:
    {
        returnValue = F("Maternusberg");
        break;
    }
    case 217385:
    {
        returnValue = F("Maternusstr.");
        break;
    }
    case 217386:
    {
        returnValue = F("Maternusweg");
        break;
    }
    case 217387:
    {
        returnValue = F("Maternweg");
        break;
    }
    case 217388:
    {
        returnValue = F("Matesberg");
        break;
    }
    case 217389:
    {
        returnValue = F("Matfriedstr.");
        break;
    }
    case 217390:
    {
        returnValue = F("Matgendorfer Str.");
        break;
    }
    case 217391:
    {
        returnValue = F("Matheisstr.");
        break;
    }
    case 217392:
    {
        returnValue = F("Matheisweg");
        break;
    }
    case 217393:
    {
        returnValue = F("Mathens Hohlweg");
        break;
    }
    case 217394:
    {
        returnValue = F("Mathenstr.");
        break;
    }
    case 217395:
    {
        returnValue = F("Mathepark");
        break;
    }
    case 217396:
    {
        returnValue = F("Mather Avenue");
        break;
    }
    case 217397:
    {
        returnValue = F("Mathes-Deutsch-Weg");
        break;
    }
    case 217398:
    {
        returnValue = F("Mathesbergstr.");
        break;
    }
    case 217399:
    {
        returnValue = F("Matheshörlebach");
        break;
    }
    case 217400:
    {
        returnValue = F("Mathesiusstr.");
        break;
    }
    case 217401:
    {
        returnValue = F("Mathesleite");
        break;
    }
    case 217402:
    {
        returnValue = F("Mathestr.");
        break;
    }
    case 217403:
    {
        returnValue = F("Mathesweg");
        break;
    }
    case 217404:
    {
        returnValue = F("Matheus-Müller-Platz");
        break;
    }
    case 217405:
    {
        returnValue = F("Matheus-Müller-Str.");
        break;
    }
    case 217406:
    {
        returnValue = F("Matheus-Wagner-Str.");
        break;
    }
    case 217407:
    {
        returnValue = F("Matheusweg");
        break;
    }
    case 217408:
    {
        returnValue = F("Matheweg");
        break;
    }
    case 217409:
    {
        returnValue = F("Mathias- Kern- Str.");
        break;
    }
    case 217410:
    {
        returnValue = F("Mathias-Bauer-Str.");
        break;
    }
    case 217411:
    {
        returnValue = F("Mathias-Blank-Str.");
        break;
    }
    case 217412:
    {
        returnValue = F("Mathias-Brandhuber-Weg");
        break;
    }
    case 217413:
    {
        returnValue = F("Mathias-Duschl-Str.");
        break;
    }
    case 217414:
    {
        returnValue = F("Mathias-Eberle-Weg");
        break;
    }
    case 217415:
    {
        returnValue = F("Mathias-Erzberger-Str.");
        break;
    }
    case 217416:
    {
        returnValue = F("Mathias-Esser-Str.");
        break;
    }
    case 217417:
    {
        returnValue = F("Mathias-Faller-Weg");
        break;
    }
    case 217418:
    {
        returnValue = F("Mathias-Flurl-Str.");
        break;
    }
    case 217419:
    {
        returnValue = F("Mathias-Giesen-Str.");
        break;
    }
    case 217420:
    {
        returnValue = F("Mathias-Graf-Str.");
        break;
    }
    case 217421:
    {
        returnValue = F("Mathias-Graf-Weg");
        break;
    }
    case 217422:
    {
        returnValue = F("Mathias-Greiter-Str.");
        break;
    }
    case 217423:
    {
        returnValue = F("Mathias-Grünewald-Str.");
        break;
    }
    case 217424:
    {
        returnValue = F("Mathias-Hauck-Weg");
        break;
    }
    case 217425:
    {
        returnValue = F("Mathias-Hess-Str.");
        break;
    }
    case 217426:
    {
        returnValue = F("Mathias-Hudler-Weg");
        break;
    }
    case 217427:
    {
        returnValue = F("Mathias-Iven-Str.");
        break;
    }
    case 217428:
    {
        returnValue = F("Mathias-Kern-Str.");
        break;
    }
    case 217429:
    {
        returnValue = F("Mathias-Kerz-Str.");
        break;
    }
    case 217430:
    {
        returnValue = F("Mathias-Kraus-Str.");
        break;
    }
    case 217431:
    {
        returnValue = F("Mathias-Leyendecker-Str.");
        break;
    }
    case 217432:
    {
        returnValue = F("Mathias-Marx-Str.");
        break;
    }
    case 217433:
    {
        returnValue = F("Mathias-Mayr-Str.");
        break;
    }
    case 217434:
    {
        returnValue = F("Mathias-Mühlbauer-Platz");
        break;
    }
    case 217435:
    {
        returnValue = F("Mathias-Niehaus-Str.");
        break;
    }
    case 217436:
    {
        returnValue = F("Mathias-Obermayr-Str.");
        break;
    }
    case 217437:
    {
        returnValue = F("Mathias-Pelzer-Str.");
        break;
    }
    case 217438:
    {
        returnValue = F("Mathias-Schaller-Str.");
        break;
    }
    case 217439:
    {
        returnValue = F("Mathias-SieberStr.");
        break;
    }
    case 217440:
    {
        returnValue = F("Mathias-Stinnes-Platz");
        break;
    }
    case 217441:
    {
        returnValue = F("Mathias-Tenhaeff-Str.");
        break;
    }
    case 217442:
    {
        returnValue = F("Mathias-Thesen-Str.");
        break;
    }
    case 217443:
    {
        returnValue = F("Mathias-Vogler-Str.");
        break;
    }
    case 217444:
    {
        returnValue = F("Mathias-Walch-Weg");
        break;
    }
    case 217445:
    {
        returnValue = F("Mathias-Weishaupt-Str.");
        break;
    }
    case 217446:
    {
        returnValue = F("Mathias-von-Hallberg-Str.");
        break;
    }
    case 217447:
    {
        returnValue = F("Mathias-von-den-Driesch-Str.");
        break;
    }
    case 217448:
    {
        returnValue = F("Mathiasgasse");
        break;
    }
    case 217449:
    {
        returnValue = F("Mathiasplatz");
        break;
    }
    case 217450:
    {
        returnValue = F("Mathiasstr.");
        break;
    }
    case 217451:
    {
        returnValue = F("Mathiasweg");
        break;
    }
    case 217452:
    {
        returnValue = F("Mathieslweg");
        break;
    }
    case 217453:
    {
        returnValue = F("Mathilde-Anneke-Str.");
        break;
    }
    case 217454:
    {
        returnValue = F("Mathilde-Bauten-Str.");
        break;
    }
    case 217455:
    {
        returnValue = F("Mathilde-Emden-Weg");
        break;
    }
    case 217456:
    {
        returnValue = F("Mathilde-Erfurth-Weg");
        break;
    }
    case 217457:
    {
        returnValue = F("Mathilde-F.-Anneke-Str.");
        break;
    }
    case 217458:
    {
        returnValue = F("Mathilde-Franziska-Anneke-Str.");
        break;
    }
    case 217459:
    {
        returnValue = F("Mathilde-Hain-Str.");
        break;
    }
    case 217460:
    {
        returnValue = F("Mathilde-Hasenkamp-Str.");
        break;
    }
    case 217461:
    {
        returnValue = F("Mathilde-Lehmann-Str.");
        break;
    }
    case 217462:
    {
        returnValue = F("Mathilde-Mathis-Str.");
        break;
    }
    case 217463:
    {
        returnValue = F("Mathilde-Otto-Platz");
        break;
    }
    case 217464:
    {
        returnValue = F("Mathilde-Planck-Str.");
        break;
    }
    case 217465:
    {
        returnValue = F("Mathilde-Planck-Weg");
        break;
    }
    case 217466:
    {
        returnValue = F("Mathilde-Ruperti-Weg");
        break;
    }
    case 217467:
    {
        returnValue = F("Mathilde-Röben-Str.");
        break;
    }
    case 217468:
    {
        returnValue = F("Mathilde-Rösch-Str.");
        break;
    }
    case 217469:
    {
        returnValue = F("Mathilde-Vaerting-Str.");
        break;
    }
    case 217470:
    {
        returnValue = F("Mathilde-Wrede-Str.");
        break;
    }
    case 217471:
    {
        returnValue = F("Mathilde-Wurm-Str.");
        break;
    }
    case 217472:
    {
        returnValue = F("Mathilden Weg");
        break;
    }
    case 217473:
    {
        returnValue = F("Mathildenbadstr.");
        break;
    }
    case 217474:
    {
        returnValue = F("Mathildenhof");
        break;
    }
    case 217475:
    {
        returnValue = F("Mathildenhofweg");
        break;
    }
    case 217476:
    {
        returnValue = F("Mathildenhöhe");
        break;
    }
    case 217477:
    {
        returnValue = F("Mathildenhöhweg");
        break;
    }
    case 217478:
    {
        returnValue = F("Mathildenhütte");
        break;
    }
    case 217479:
    {
        returnValue = F("Mathildenpark");
        break;
    }
    case 217480:
    {
        returnValue = F("Mathildenplatz");
        break;
    }
    case 217481:
    {
        returnValue = F("Mathildenstr.");
        break;
    }
    case 217482:
    {
        returnValue = F("Mathildental");
        break;
    }
    case 217483:
    {
        returnValue = F("Mathildenweg");
        break;
    }
    case 217484:
    {
        returnValue = F("Mathildestr.");
        break;
    }
    case 217485:
    {
        returnValue = F("Mathildeweg");
        break;
    }
    case 217486:
    {
        returnValue = F("Mathisleweiher Weg");
        break;
    }
    case 217487:
    {
        returnValue = F("Mathisstr.");
        break;
    }
    case 217488:
    {
        returnValue = F("Mathkreuzweg");
        break;
    }
    case 217489:
    {
        returnValue = F("Mathonetstr.");
        break;
    }
    case 217490:
    {
        returnValue = F("Mathweg");
        break;
    }
    case 217491:
    {
        returnValue = F("Mathystr.");
        break;
    }
    case 217492:
    {
        returnValue = F("Mathäistr.");
        break;
    }
    case 217493:
    {
        returnValue = F("Mathäus-Hotz-Str.");
        break;
    }
    case 217494:
    {
        returnValue = F("Mathäus-Riese-Weg");
        break;
    }
    case 217495:
    {
        returnValue = F("Matigtal");
        break;
    }
    case 217496:
    {
        returnValue = F("Matlpeterweg");
        break;
    }
    case 217497:
    {
        returnValue = F("Matrastr.");
        break;
    }
    case 217498:
    {
        returnValue = F("Matratzenweg");
        break;
    }
    case 217499:
    {
        returnValue = F("Matreier Str.");
        break;
    }
    case 217500:
    {
        returnValue = F("Matronenweg");
        break;
    }
    case 217501:
    {
        returnValue = F("Matrose");
        break;
    }
    case 217502:
    {
        returnValue = F("Matrosengasse");
        break;
    }
    case 217503:
    {
        returnValue = F("Matrosenweg");
        break;
    }
    case 217504:
    {
        returnValue = F("Matrum");
        break;
    }
    case 217505:
    {
        returnValue = F("Matrumer Str.");
        break;
    }
    case 217506:
    {
        returnValue = F("Matrumer Weg");
        break;
    }
    case 217507:
    {
        returnValue = F("Mats Kamp");
        break;
    }
    case 217508:
    {
        returnValue = F("Matsch");
        break;
    }
    case 217509:
    {
        returnValue = F("Matschbuggel");
        break;
    }
    case 217510:
    {
        returnValue = F("Matscheberg");
        break;
    }
    case 217511:
    {
        returnValue = F("Matschenstr.");
        break;
    }
    case 217512:
    {
        returnValue = F("Matschenzstr.");
        break;
    }
    case 217513:
    {
        returnValue = F("Matsieken");
        break;
    }
    case 217514:
    {
        returnValue = F("Mattarelloallee");
        break;
    }
    case 217515:
    {
        returnValue = F("Mattchow");
        break;
    }
    case 217516:
    {
        returnValue = F("Matteberg");
        break;
    }
    case 217517:
    {
        returnValue = F("Mattegasse");
        break;
    }
    case 217518:
    {
        returnValue = F("Mattelbach");
        break;
    }
    case 217519:
    {
        returnValue = F("Mattelbusch");
        break;
    }
    case 217520:
    {
        returnValue = F("Matten");
        break;
    }
    case 217521:
    {
        returnValue = F("Mattenbachstr.");
        break;
    }
    case 217522:
    {
        returnValue = F("Mattenbauernhäusleweg");
        break;
    }
    case 217523:
    {
        returnValue = F("Mattenbergstr.");
        break;
    }
    case 217524:
    {
        returnValue = F("Mattenbergweg");
        break;
    }
    case 217525:
    {
        returnValue = F("Mattenburg");
        break;
    }
    case 217526:
    {
        returnValue = F("Mattenburger Str.");
        break;
    }
    case 217527:
    {
        returnValue = F("Mattendorfer Str.");
        break;
    }
    case 217528:
    {
        returnValue = F("Mattener Str.");
        break;
    }
    case 217529:
    {
        returnValue = F("Mattenerlenstr.");
        break;
    }
    case 217530:
    {
        returnValue = F("Mattenhof");
        break;
    }
    case 217531:
    {
        returnValue = F("Mattenhofen");
        break;
    }
    case 217532:
    {
        returnValue = F("Mattenhofener Str.");
        break;
    }
    case 217533:
    {
        returnValue = F("Mattenhofweg");
        break;
    }
    case 217534:
    {
        returnValue = F("Mattenkamp");
        break;
    }
    case 217535:
    {
        returnValue = F("Mattenklodtsteg");
        break;
    }
    case 217536:
    {
        returnValue = F("Mattenkloidtstr.");
        break;
    }
    case 217537:
    {
        returnValue = F("Mattenkofen");
        break;
    }
    case 217538:
    {
        returnValue = F("Mattenkofener Str.");
        break;
    }
    case 217539:
    {
        returnValue = F("Mattenleestr.");
        break;
    }
    case 217540:
    {
        returnValue = F("Mattenmoorstr.");
        break;
    }
    case 217541:
    {
        returnValue = F("Mattenmühleweg");
        break;
    }
    case 217542:
    {
        returnValue = F("Mattenschlagweg");
        break;
    }
    case 217543:
    {
        returnValue = F("Mattenstieg");
        break;
    }
    case 217544:
    {
        returnValue = F("Mattenstr.");
        break;
    }
    case 217545:
    {
        returnValue = F("Mattensweg");
        break;
    }
    case 217546:
    {
        returnValue = F("Mattentalweg");
        break;
    }
    case 217547:
    {
        returnValue = F("Mattentwiete");
        break;
    }
    case 217548:
    {
        returnValue = F("Mattenweg");
        break;
    }
    case 217549:
    {
        returnValue = F("Mattenwiesen");
        break;
    }
    case 217550:
    {
        returnValue = F("Matterhornstr.");
        break;
    }
    case 217551:
    {
        returnValue = F("Mattern Weg");
        break;
    }
    case 217552:
    {
        returnValue = F("Matternstr.");
        break;
    }
    case 217553:
    {
        returnValue = F("Matterstockstr.");
        break;
    }
    case 217554:
    {
        returnValue = F("Mattesstr.");
        break;
    }
    case 217555:
    {
        returnValue = F("Mattesweg");
        break;
    }
    case 217556:
    {
        returnValue = F("Mattewegle");
        break;
    }
    case 217557:
    {
        returnValue = F("Mattfeldstr.");
        break;
    }
    case 217558:
    {
        returnValue = F("Mattgasse");
        break;
    }
    case 217559:
    {
        returnValue = F("Matthaistr.");
        break;
    }
    case 217560:
    {
        returnValue = F("Mattheis Kamp");
        break;
    }
    case 217561:
    {
        returnValue = F("Mattheiser Acht");
        break;
    }
    case 217562:
    {
        returnValue = F("Mattheiser Str.");
        break;
    }
    case 217563:
    {
        returnValue = F("Mattheiser Weiher");
        break;
    }
    case 217564:
    {
        returnValue = F("Mattheiserstr.");
        break;
    }
    case 217565:
    {
        returnValue = F("Matthes-Enderlein-Str.");
        break;
    }
    case 217566:
    {
        returnValue = F("Mattheshöh");
        break;
    }
    case 217567:
    {
        returnValue = F("Mattheshöher Weg");
        break;
    }
    case 217568:
    {
        returnValue = F("Matthesstr.");
        break;
    }
    case 217569:
    {
        returnValue = F("Mattheystr.");
        break;
    }
    case 217570:
    {
        returnValue = F("Matthias-Bauer-Ring");
        break;
    }
    case 217571:
    {
        returnValue = F("Matthias-Bauer-Str.");
        break;
    }
    case 217572:
    {
        returnValue = F("Matthias-Bell-Str.");
        break;
    }
    case 217573:
    {
        returnValue = F("Matthias-Binder-Str.");
        break;
    }
    case 217574:
    {
        returnValue = F("Matthias-Claudius Weg");
        break;
    }
    case 217575:
    {
        returnValue = F("Matthias-Claudius-Ring");
        break;
    }
    case 217576:
    {
        returnValue = F("Matthias-Claudius-Str.");
        break;
    }
    case 217577:
    {
        returnValue = F("Matthias-Claudius-Weg");
        break;
    }
    case 217578:
    {
        returnValue = F("Matthias-Curt-Str.");
        break;
    }
    case 217579:
    {
        returnValue = F("Matthias-Darne-Weg");
        break;
    }
    case 217580:
    {
        returnValue = F("Matthias-Daßbach-Str.");
        break;
    }
    case 217581:
    {
        returnValue = F("Matthias-Domaschk-Str.");
        break;
    }
    case 217582:
    {
        returnValue = F("Matthias-Ehrenfried-Str.");
        break;
    }
    case 217583:
    {
        returnValue = F("Matthias-Emmerich-Str.");
        break;
    }
    case 217584:
    {
        returnValue = F("Matthias-Ertl-Str.");
        break;
    }
    case 217585:
    {
        returnValue = F("Matthias-Erzberger-Brücke");
        break;
    }
    case 217586:
    {
        returnValue = F("Matthias-Erzberger-Str.");
        break;
    }
    case 217587:
    {
        returnValue = F("Matthias-Erzberger-Weg");
        break;
    }
    case 217588:
    {
        returnValue = F("Matthias-Fackler-Weg");
        break;
    }
    case 217589:
    {
        returnValue = F("Matthias-Faller-Str.");
        break;
    }
    case 217590:
    {
        returnValue = F("Matthias-Faßbender-Str.");
        break;
    }
    case 217591:
    {
        returnValue = F("Matthias-Fink-Str.");
        break;
    }
    case 217592:
    {
        returnValue = F("Matthias-Gesner-Str.");
        break;
    }
    case 217593:
    {
        returnValue = F("Matthias-Grathes-Str.");
        break;
    }
    case 217594:
    {
        returnValue = F("Matthias-Grell-Str.");
        break;
    }
    case 217595:
    {
        returnValue = F("Matthias-Grünewald-Ring");
        break;
    }
    case 217596:
    {
        returnValue = F("Matthias-Grünewald-Str.");
        break;
    }
    case 217597:
    {
        returnValue = F("Matthias-Grünewald-Weg");
        break;
    }
    case 217598:
    {
        returnValue = F("Matthias-Gäch-Str.");
        break;
    }
    case 217599:
    {
        returnValue = F("Matthias-Gärtner-Str.");
        break;
    }
    case 217600:
    {
        returnValue = F("Matthias-Götz-Str.");
        break;
    }
    case 217601:
    {
        returnValue = F("Matthias-Hasse-Str.");
        break;
    }
    case 217602:
    {
        returnValue = F("Matthias-Heesch-Str.");
        break;
    }
    case 217603:
    {
        returnValue = F("Matthias-Hendricks-Weg");
        break;
    }
    case 217604:
    {
        returnValue = F("Matthias-Hess-Weg");
        break;
    }
    case 217605:
    {
        returnValue = F("Matthias-Hof-Str.");
        break;
    }
    case 217606:
    {
        returnValue = F("Matthias-Hohner-Str.");
        break;
    }
    case 217607:
    {
        returnValue = F("Matthias-Hösl-Str.");
        break;
    }
    case 217608:
    {
        returnValue = F("Matthias-Jacoby-Str.");
        break;
    }
    case 217609:
    {
        returnValue = F("Matthias-Joseph-Mehs-Str.");
        break;
    }
    case 217610:
    {
        returnValue = F("Matthias-Kahlke-Promenade");
        break;
    }
    case 217611:
    {
        returnValue = F("Matthias-Kaiser-Str.");
        break;
    }
    case 217612:
    {
        returnValue = F("Matthias-Kempkes-Str.");
        break;
    }
    case 217613:
    {
        returnValue = F("Matthias-Kerer-Str.");
        break;
    }
    case 217614:
    {
        returnValue = F("Matthias-Kesseler-Str.");
        break;
    }
    case 217615:
    {
        returnValue = F("Matthias-Kinn-Weg");
        break;
    }
    case 217616:
    {
        returnValue = F("Matthias-Kirch-Weg");
        break;
    }
    case 217617:
    {
        returnValue = F("Matthias-Kirsch-Str.");
        break;
    }
    case 217618:
    {
        returnValue = F("Matthias-Klebl-Str.");
        break;
    }
    case 217619:
    {
        returnValue = F("Matthias-Klinger-Str.");
        break;
    }
    case 217620:
    {
        returnValue = F("Matthias-Klotz-Str.");
        break;
    }
    case 217621:
    {
        returnValue = F("Matthias-Koch-Str.");
        break;
    }
    case 217622:
    {
        returnValue = F("Matthias-Koch-Weg");
        break;
    }
    case 217623:
    {
        returnValue = F("Matthias-Kraus-Gasse");
        break;
    }
    case 217624:
    {
        returnValue = F("Matthias-Kronen-Weg");
        break;
    }
    case 217625:
    {
        returnValue = F("Matthias-Kruse-Str.");
        break;
    }
    case 217626:
    {
        returnValue = F("Matthias-Lammet-Str.");
        break;
    }
    case 217627:
    {
        returnValue = F("Matthias-Lang-Weg");
        break;
    }
    case 217628:
    {
        returnValue = F("Matthias-Langen-Str.");
        break;
    }
    case 217629:
    {
        returnValue = F("Matthias-Miller-Weg");
        break;
    }
    case 217630:
    {
        returnValue = F("Matthias-Neff-Str.");
        break;
    }
    case 217631:
    {
        returnValue = F("Matthias-Neuner-Weg");
        break;
    }
    case 217632:
    {
        returnValue = F("Matthias-Nickels-Str.");
        break;
    }
    case 217633:
    {
        returnValue = F("Matthias-Noell-Weg");
        break;
    }
    case 217634:
    {
        returnValue = F("Matthias-Oechsler-Str.");
        break;
    }
    case 217635:
    {
        returnValue = F("Matthias-Offermann-Str.");
        break;
    }
    case 217636:
    {
        returnValue = F("Matthias-Peters-Weg");
        break;
    }
    case 217637:
    {
        returnValue = F("Matthias-Raths-Str.");
        break;
    }
    case 217638:
    {
        returnValue = F("Matthias-Rieß-Str.");
        break;
    }
    case 217639:
    {
        returnValue = F("Matthias-Rommelfanger-Str.");
        break;
    }
    case 217640:
    {
        returnValue = F("Matthias-Rosemann-Str.");
        break;
    }
    case 217641:
    {
        returnValue = F("Matthias-Schleiden-Weg");
        break;
    }
    case 217642:
    {
        returnValue = F("Matthias-Seybold-Str.");
        break;
    }
    case 217643:
    {
        returnValue = F("Matthias-Sieber-Str.");
        break;
    }
    case 217644:
    {
        returnValue = F("Matthias-Siebold-Weg");
        break;
    }
    case 217645:
    {
        returnValue = F("Matthias-Stiel-Str.");
        break;
    }
    case 217646:
    {
        returnValue = F("Matthias-Stocker-Weg");
        break;
    }
    case 217647:
    {
        returnValue = F("Matthias-Thoma-Str.");
        break;
    }
    case 217648:
    {
        returnValue = F("Matthias-Thurmer-Str.");
        break;
    }
    case 217649:
    {
        returnValue = F("Matthias-Trettenbacher-Str.");
        break;
    }
    case 217650:
    {
        returnValue = F("Matthias-Voit-Str.");
        break;
    }
    case 217651:
    {
        returnValue = F("Matthias-Wahl-Str.");
        break;
    }
    case 217652:
    {
        returnValue = F("Matthias-Weete-Str.");
        break;
    }
    case 217653:
    {
        returnValue = F("Matthias-Wehr-Str.");
        break;
    }
    case 217654:
    {
        returnValue = F("Matthias-Well-Str.");
        break;
    }
    case 217655:
    {
        returnValue = F("Matthias-Werner-Str.");
        break;
    }
    case 217656:
    {
        returnValue = F("Matthias-Widmann-Str.");
        break;
    }
    case 217657:
    {
        returnValue = F("Matthias-Winkel-Platz");
        break;
    }
    case 217658:
    {
        returnValue = F("Matthias-Zimmermann-Str.");
        break;
    }
    case 217659:
    {
        returnValue = F("Matthias-Zintl-Str.");
        break;
    }
    case 217660:
    {
        returnValue = F("Matthias-Zoller-Str.");
        break;
    }
    case 217661:
    {
        returnValue = F("Matthias-von-der-Sitt-Str.");
        break;
    }
    case 217662:
    {
        returnValue = F("Matthiasberg");
        break;
    }
    case 217663:
    {
        returnValue = F("Matthiasfelde");
        break;
    }
    case 217664:
    {
        returnValue = F("Matthiashofstr.");
        break;
    }
    case 217665:
    {
        returnValue = F("Matthiaskirchweg");
        break;
    }
    case 217666:
    {
        returnValue = F("Matthiasplatz");
        break;
    }
    case 217667:
    {
        returnValue = F("Matthiasstr.");
        break;
    }
    case 217668:
    {
        returnValue = F("Matthiasweg");
        break;
    }
    case 217669:
    {
        returnValue = F("Matthiaswiese");
        break;
    }
    case 217670:
    {
        returnValue = F("Matthiaszeche");
        break;
    }
    case 217671:
    {
        returnValue = F("Matthiesstegge");
        break;
    }
    case 217672:
    {
        returnValue = F("Matthissonstr.");
        break;
    }
    case 217673:
    {
        returnValue = F("Mattholzweg");
        break;
    }
    case 217674:
    {
        returnValue = F("Matthäistr.");
        break;
    }
    case 217675:
    {
        returnValue = F("Matthäsanger");
        break;
    }
    case 217676:
    {
        returnValue = F("Matthäus-Berg-Ring");
        break;
    }
    case 217677:
    {
        returnValue = F("Matthäus-Boegl-Str.");
        break;
    }
    case 217678:
    {
        returnValue = F("Matthäus-Fischer-Str.");
        break;
    }
    case 217679:
    {
        returnValue = F("Matthäus-Ginter-Str.");
        break;
    }
    case 217680:
    {
        returnValue = F("Matthäus-Günther-Platz");
        break;
    }
    case 217681:
    {
        returnValue = F("Matthäus-Günther-Str.");
        break;
    }
    case 217682:
    {
        returnValue = F("Matthäus-Günther-Weg");
        break;
    }
    case 217683:
    {
        returnValue = F("Matthäus-Hahn-Str.");
        break;
    }
    case 217684:
    {
        returnValue = F("Matthäus-Herrmann-Platz");
        break;
    }
    case 217685:
    {
        returnValue = F("Matthäus-Hipp-Weg");
        break;
    }
    case 217686:
    {
        returnValue = F("Matthäus-Hofmann-Weg");
        break;
    }
    case 217687:
    {
        returnValue = F("Matthäus-Hummel-Str.");
        break;
    }
    case 217688:
    {
        returnValue = F("Matthäus-Janson-Anlage");
        break;
    }
    case 217689:
    {
        returnValue = F("Matthäus-Kern-Weg");
        break;
    }
    case 217690:
    {
        returnValue = F("Matthäus-Krafft-Str.");
        break;
    }
    case 217691:
    {
        returnValue = F("Matthäus-Kreuz-Str.");
        break;
    }
    case 217692:
    {
        returnValue = F("Matthäus-Lang-Str.");
        break;
    }
    case 217693:
    {
        returnValue = F("Matthäus-Lange-Str.");
        break;
    }
    case 217694:
    {
        returnValue = F("Matthäus-Merian-Ring");
        break;
    }
    case 217695:
    {
        returnValue = F("Matthäus-Merian-Str.");
        break;
    }
    case 217696:
    {
        returnValue = F("Matthäus-Möck-Str.");
        break;
    }
    case 217697:
    {
        returnValue = F("Matthäus-Reichart-Platz");
        break;
    }
    case 217698:
    {
        returnValue = F("Matthäus-Ring");
        break;
    }
    case 217699:
    {
        returnValue = F("Matthäus-Sauter-Str.");
        break;
    }
    case 217700:
    {
        returnValue = F("Matthäus-Schmidt-Str.");
        break;
    }
    case 217701:
    {
        returnValue = F("Matthäus-Schneider-Str.");
        break;
    }
    case 217702:
    {
        returnValue = F("Matthäus-Stäblein-Str.");
        break;
    }
    case 217703:
    {
        returnValue = F("Matthäus-Vogel-Str.");
        break;
    }
    case 217704:
    {
        returnValue = F("Matthäuserstr.");
        break;
    }
    case 217705:
    {
        returnValue = F("Matthäusgasse");
        break;
    }
    case 217706:
    {
        returnValue = F("Matthäusplatz");
        break;
    }
    case 217707:
    {
        returnValue = F("Matthäusstr.");
        break;
    }
    case 217708:
    {
        returnValue = F("Matthäusweg");
        break;
    }
    case 217709:
    {
        returnValue = F("Mattias-Koch-Weg");
        break;
    }
    case 217710:
    {
        returnValue = F("Mattinastr.");
        break;
    }
    case 217711:
    {
        returnValue = F("Mattinger Str.");
        break;
    }
    case 217712:
    {
        returnValue = F("Mattinger Weg");
        break;
    }
    case 217713:
    {
        returnValue = F("Mattlerbusch");
        break;
    }
    case 217714:
    {
        returnValue = F("Mattlerstr.");
        break;
    }
    case 217715:
    {
        returnValue = F("Mattmecke");
        break;
    }
    case 217716:
    {
        returnValue = F("Mattrain");
        break;
    }
    case 217717:
    {
        returnValue = F("Mattschö-Moll-Weg");
        break;
    }
    case 217718:
    {
        returnValue = F("Mattseestr.");
        break;
    }
    case 217719:
    {
        returnValue = F("Mattsieser Str.");
        break;
    }
    case 217720:
    {
        returnValue = F("Mattstedter Str.");
        break;
    }
    case 217721:
    {
        returnValue = F("Mattstedter Weg");
        break;
    }
    case 217722:
    {
        returnValue = F("Mattstedter Weiden");
        break;
    }
    case 217723:
    {
        returnValue = F("Mattsteigstr.");
        break;
    }
    case 217724:
    {
        returnValue = F("Mattstieg");
        break;
    }
    case 217725:
    {
        returnValue = F("Mattstr.");
        break;
    }
    case 217726:
    {
        returnValue = F("Mattweg");
        break;
    }
    case 217727:
    {
        returnValue = F("Matulusstr.");
        break;
    }
    case 217728:
    {
        returnValue = F("Matzbacher Str.");
        break;
    }
    case 217729:
    {
        returnValue = F("Matzdorf");
        break;
    }
    case 217730:
    {
        returnValue = F("Matzdorfer Str.");
        break;
    }
    case 217731:
    {
        returnValue = F("Matzdorfer Weg");
        break;
    }
    case 217732:
    {
        returnValue = F("Matzelhardt");
        break;
    }
    case 217733:
    {
        returnValue = F("Matzelsdorfer Weg");
        break;
    }
    case 217734:
    {
        returnValue = F("Matzenbacher Sträßchen");
        break;
    }
    case 217735:
    {
        returnValue = F("Matzenberg");
        break;
    }
    case 217736:
    {
        returnValue = F("Matzenberger Str.");
        break;
    }
    case 217737:
    {
        returnValue = F("Matzenberger Weg");
        break;
    }
    case 217738:
    {
        returnValue = F("Matzenbergstr.");
        break;
    }
    case 217739:
    {
        returnValue = F("Matzenbergweg");
        break;
    }
    case 217740:
    {
        returnValue = F("Matzengasse");
        break;
    }
    case 217741:
    {
        returnValue = F("Matzenhecke");
        break;
    }
    case 217742:
    {
        returnValue = F("Matzenhofer Weg");
        break;
    }
    case 217743:
    {
        returnValue = F("Matzenhügel");
        break;
    }
    case 217744:
    {
        returnValue = F("Matzenkamp");
        break;
    }
    case 217745:
    {
        returnValue = F("Matzenlochweg");
        break;
    }
    case 217746:
    {
        returnValue = F("Matzenlohweg");
        break;
    }
    case 217747:
    {
        returnValue = F("Matzenstr.");
        break;
    }
    case 217748:
    {
        returnValue = F("Matzentalweg");
        break;
    }
    case 217749:
    {
        returnValue = F("Matzenweiler");
        break;
    }
    case 217750:
    {
        returnValue = F("Matzenweiler Ring");
        break;
    }
    case 217751:
    {
        returnValue = F("Matzerather Maar");
        break;
    }
    case 217752:
    {
        returnValue = F("Matzersreuth");
        break;
    }
    case 217753:
    {
        returnValue = F("Matzgrabenweg");
        break;
    }
    case 217754:
    {
        returnValue = F("Matzhornweg");
        break;
    }
    case 217755:
    {
        returnValue = F("Matzhöhlenweg");
        break;
    }
    case 217756:
    {
        returnValue = F("Matzlower Weg");
        break;
    }
    case 217757:
    {
        returnValue = F("Matzlsberger Str.");
        break;
    }
    case 217758:
    {
        returnValue = F("Matzmannsdorf");
        break;
    }
    case 217759:
    {
        returnValue = F("Matzplatz");
        break;
    }
    case 217760:
    {
        returnValue = F("Matzstr.");
        break;
    }
    case 217761:
    {
        returnValue = F("Matzweg");
        break;
    }
    case 217762:
    {
        returnValue = F("Matzwinkel");
        break;
    }
    case 217763:
    {
        returnValue = F("Matzwitzer Weg");
        break;
    }
    case 217764:
    {
        returnValue = F("Maubacher Str.");
        break;
    }
    case 217765:
    {
        returnValue = F("Maubachweg");
        break;
    }
    case 217766:
    {
        returnValue = F("Maubergerstr.");
        break;
    }
    case 217767:
    {
        returnValue = F("Maubeshauser Str.");
        break;
    }
    case 217768:
    {
        returnValue = F("Maubeuger Ring");
        break;
    }
    case 217769:
    {
        returnValue = F("Maubischpass");
        break;
    }
    case 217770:
    {
        returnValue = F("Maubisstr.");
        break;
    }
    case 217771:
    {
        returnValue = F("Mauchachweg");
        break;
    }
    case 217772:
    {
        returnValue = F("Mauchener Gasse");
        break;
    }
    case 217773:
    {
        returnValue = F("Mauchener Str.");
        break;
    }
    case 217774:
    {
        returnValue = F("Mauchenerweg");
        break;
    }
    case 217775:
    {
        returnValue = F("Mauchentalstr.");
        break;
    }
    case 217776:
    {
        returnValue = F("Maucher's Mariental");
        break;
    }
    case 217777:
    {
        returnValue = F("Maucherstr.");
        break;
    }
    case 217778:
    {
        returnValue = F("Mauchgasse");
        break;
    }
    case 217779:
    {
        returnValue = F("Mauchlisweg");
        break;
    }
    case 217780:
    {
        returnValue = F("Mauchstr.");
        break;
    }
    case 217781:
    {
        returnValue = F("Mauckenweg");
        break;
    }
    case 217782:
    {
        returnValue = F("Maudacher Str.");
        break;
    }
    case 217783:
    {
        returnValue = F("Maudacher Weg");
        break;
    }
    case 217784:
    {
        returnValue = F("Maudener Weg");
        break;
    }
    case 217785:
    {
        returnValue = F("Maudensteig");
        break;
    }
    case 217786:
    {
        returnValue = F("Maueler Feld");
        break;
    }
    case 217787:
    {
        returnValue = F("Maueler Pfad");
        break;
    }
    case 217788:
    {
        returnValue = F("Maueler Str.");
        break;
    }
    case 217789:
    {
        returnValue = F("Maueler Weg");
        break;
    }
    case 217790:
    {
        returnValue = F("Mauenheimer Str.");
        break;
    }
    case 217791:
    {
        returnValue = F("Mauenholzer Weg");
        break;
    }
    case 217792:
    {
        returnValue = F("Mauer");
        break;
    }
    case 217793:
    {
        returnValue = F("Mauer-Anger-Geräumt");
        break;
    }
    case 217794:
    {
        returnValue = F("Mauer-Viehtor-Str.");
        break;
    }
    case 217795:
    {
        returnValue = F("Mauerackerstr.");
        break;
    }
    case 217796:
    {
        returnValue = F("Mauerackerweg");
        break;
    }
    case 217797:
    {
        returnValue = F("Maueranger-Geräumt");
        break;
    }
    case 217798:
    {
        returnValue = F("Mauerbacher Str.");
        break;
    }
    case 217799:
    {
        returnValue = F("Mauerberg");
        break;
    }
    case 217800:
    {
        returnValue = F("Mauerbergstr.");
        break;
    }
    case 217801:
    {
        returnValue = F("Mauerblümchenweg");
        break;
    }
    case 217802:
    {
        returnValue = F("Mauerbrandstr.");
        break;
    }
    case 217803:
    {
        returnValue = F("Mauerbreite");
        break;
    }
    case 217804:
    {
        returnValue = F("Mauererstr.");
        break;
    }
    case 217805:
    {
        returnValue = F("Mauerfeldchen");
        break;
    }
    case 217806:
    {
        returnValue = F("Mauerfeldstr.");
        break;
    }
    case 217807:
    {
        returnValue = F("Mauergang");
        break;
    }
    case 217808:
    {
        returnValue = F("Mauergartenstr.");
        break;
    }
    case 217809:
    {
        returnValue = F("Mauergartenweg");
        break;
    }
    case 217810:
    {
        returnValue = F("Mauergasse");
        break;
    }
    case 217811:
    {
        returnValue = F("Mauergässle");
        break;
    }
    case 217812:
    {
        returnValue = F("Mauergäßchen");
        break;
    }
    case 217813:
    {
        returnValue = F("Mauergäßle");
        break;
    }
    case 217814:
    {
        returnValue = F("Mauerhagen");
        break;
    }
    case 217815:
    {
        returnValue = F("Mauerhalde");
        break;
    }
    case 217816:
    {
        returnValue = F("Mauerhammer");
        break;
    }
    case 217817:
    {
        returnValue = F("Mauerhecke");
        break;
    }
    case 217818:
    {
        returnValue = F("Mauerhof");
        break;
    }
    case 217819:
    {
        returnValue = F("Mauerhofweg");
        break;
    }
    case 217820:
    {
        returnValue = F("Mauerhäusleweg");
        break;
    }
    case 217821:
    {
        returnValue = F("Mauerkirchner Weg");
        break;
    }
    case 217822:
    {
        returnValue = F("Mauerköppel");
        break;
    }
    case 217823:
    {
        returnValue = F("Mauerlesweg");
        break;
    }
    case 217824:
    {
        returnValue = F("Mauermattenstr.");
        break;
    }
    case 217825:
    {
        returnValue = F("Mauermayrstr.");
        break;
    }
    case 217826:
    {
        returnValue = F("Mauermer Weg");
        break;
    }
    case 217827:
    {
        returnValue = F("Mauerner Str.");
        break;
    }
    case 217828:
    {
        returnValue = F("Mauerngässchen");
        break;
    }
    case 217829:
    {
        returnValue = F("Mauernriedtunnel");
        break;
    }
    case 217830:
    {
        returnValue = F("Mauernstr.");
        break;
    }
    case 217831:
    {
        returnValue = F("Mauernweg");
        break;
    }
    case 217832:
    {
        returnValue = F("Mauersberger Weg");
        break;
    }
    case 217833:
    {
        returnValue = F("Mauersbergerstr.");
        break;
    }
    case 217834:
    {
        returnValue = F("Mauerschleuse");
        break;
    }
    case 217835:
    {
        returnValue = F("Mauerseeweg");
        break;
    }
    case 217836:
    {
        returnValue = F("Mauerseglerstr.");
        break;
    }
    case 217837:
    {
        returnValue = F("Mauerseglerweg");
        break;
    }
    case 217838:
    {
        returnValue = F("Mauerser Str.");
        break;
    }
    case 217839:
    {
        returnValue = F("Mauersteig");
        break;
    }
    case 217840:
    {
        returnValue = F("Mauersteige");
        break;
    }
    case 217841:
    {
        returnValue = F("Mauerstettener Str.");
        break;
    }
    case 217842:
    {
        returnValue = F("Mauerstettener Weg");
        break;
    }
    case 217843:
    {
        returnValue = F("Mauerstiege");
        break;
    }
    case 217844:
    {
        returnValue = F("Mauerstock");
        break;
    }
    case 217845:
    {
        returnValue = F("Mauerstr.");
        break;
    }
    case 217846:
    {
        returnValue = F("Mauertal");
        break;
    }
    case 217847:
    {
        returnValue = F("Mauertal-Loipe");
        break;
    }
    case 217848:
    {
        returnValue = F("Mauertalstr.");
        break;
    }
    case 217849:
    {
        returnValue = F("Mauertalweg");
        break;
    }
    case 217850:
    {
        returnValue = F("Mauerweg");
        break;
    }
    case 217851:
    {
        returnValue = F("Mauerwiese");
        break;
    }
    case 217852:
    {
        returnValue = F("Mauerwiesenstr.");
        break;
    }
    case 217853:
    {
        returnValue = F("Maueräcker");
        break;
    }
    case 217854:
    {
        returnValue = F("Maueräckerstr.");
        break;
    }
    case 217855:
    {
        returnValue = F("Maueröd");
        break;
    }
    case 217856:
    {
        returnValue = F("Maufiusstr.");
        break;
    }
    case 217857:
    {
        returnValue = F("Maugenharder Str.");
        break;
    }
    case 217858:
    {
        returnValue = F("Maugenharder Weg");
        break;
    }
    case 217859:
    {
        returnValue = F("Mauggen");
        break;
    }
    case 217860:
    {
        returnValue = F("Mauhecke");
        break;
    }
    case 217861:
    {
        returnValue = F("Mauk");
        break;
    }
    case 217862:
    {
        returnValue = F("Maukendorf Am Fließ");
        break;
    }
    case 217863:
    {
        returnValue = F("Maukendorf Am Wald");
        break;
    }
    case 217864:
    {
        returnValue = F("Maukendorf Dorfplatz");
        break;
    }
    case 217865:
    {
        returnValue = F("Maukendorf Gutshof");
        break;
    }
    case 217866:
    {
        returnValue = F("Maukendorf Mühle");
        break;
    }
    case 217867:
    {
        returnValue = F("Maukendorf Schule");
        break;
    }
    case 217868:
    {
        returnValue = F("Maukendorf Zum See");
        break;
    }
    case 217869:
    {
        returnValue = F("Maukendorfer Chaussee");
        break;
    }
    case 217870:
    {
        returnValue = F("Maukendorfer Str.");
        break;
    }
    case 217871:
    {
        returnValue = F("Maukenreuth");
        break;
    }
    case 217872:
    {
        returnValue = F("Mauker Str.");
        break;
    }
    case 217873:
    {
        returnValue = F("Maukschne Schneise");
        break;
    }
    case 217874:
    {
        returnValue = F("Maulacher Hauptstr.");
        break;
    }
    case 217875:
    {
        returnValue = F("Maulacher Str.");
        break;
    }
    case 217876:
    {
        returnValue = F("Maulbacher Str.");
        break;
    }
    case 217877:
    {
        returnValue = F("Maulbacher Weg");
        break;
    }
    case 217878:
    {
        returnValue = F("Maulbeer-Allee");
        break;
    }
    case 217879:
    {
        returnValue = F("Maulbeerallee");
        break;
    }
    case 217880:
    {
        returnValue = F("Maulbeereck");
        break;
    }
    case 217881:
    {
        returnValue = F("Maulbeergarten");
        break;
    }
    case 217882:
    {
        returnValue = F("Maulbeergasse");
        break;
    }
    case 217883:
    {
        returnValue = F("Maulbeerkamp");
        break;
    }
    case 217884:
    {
        returnValue = F("Maulbeerplantage");
        break;
    }
    case 217885:
    {
        returnValue = F("Maulbeerstr.");
        break;
    }
    case 217886:
    {
        returnValue = F("Maulbeerstück");
        break;
    }
    case 217887:
    {
        returnValue = F("Maulbeerwalder Dorfstr.");
        break;
    }
    case 217888:
    {
        returnValue = F("Maulbeerwalder Weg");
        break;
    }
    case 217889:
    {
        returnValue = F("Maulbeerweg");
        break;
    }
    case 217890:
    {
        returnValue = F("Maulberg");
        break;
    }
    case 217891:
    {
        returnValue = F("Maulberger Weg");
        break;
    }
    case 217892:
    {
        returnValue = F("Maulbertschstr.");
        break;
    }
    case 217893:
    {
        returnValue = F("Maulbronner Hof");
        break;
    }
    case 217894:
    {
        returnValue = F("Maulbronner Steige");
        break;
    }
    case 217895:
    {
        returnValue = F("Maulbronner Str.");
        break;
    }
    case 217896:
    {
        returnValue = F("Maulbronner Weg");
        break;
    }
    case 217897:
    {
        returnValue = F("Maulburger Str.");
        break;
    }
    case 217898:
    {
        returnValue = F("Maulbühl");
        break;
    }
    case 217899:
    {
        returnValue = F("Maulengasse");
        break;
    }
    case 217900:
    {
        returnValue = F("Maulhoop");
        break;
    }
    case 217901:
    {
        returnValue = F("Maulkuppenstr.");
        break;
    }
    case 217902:
    {
        returnValue = F("Maulkuppenweg");
        break;
    }
    case 217903:
    {
        returnValue = F("Mauloffer Weg");
        break;
    }
    case 217904:
    {
        returnValue = F("Maulrainweg");
        break;
    }
    case 217905:
    {
        returnValue = F("Maulweg");
        break;
    }
    case 217906:
    {
        returnValue = F("Maulwurf");
        break;
    }
    case 217907:
    {
        returnValue = F("Maulwurfskämpe");
        break;
    }
    case 217908:
    {
        returnValue = F("Maulwurfweg");
        break;
    }
    case 217909:
    {
        returnValue = F("Maulwurfwegerl");
        break;
    }
    case 217910:
    {
        returnValue = F("Maumker Str.");
        break;
    }
    case 217911:
    {
        returnValue = F("Mauna");
        break;
    }
    case 217912:
    {
        returnValue = F("Maunaer Str.");
        break;
    }
    case 217913:
    {
        returnValue = F("Maunzengasse");
        break;
    }
    case 217914:
    {
        returnValue = F("Maunzenweg");
        break;
    }
    case 217915:
    {
        returnValue = F("Mauracher Hof");
        break;
    }
    case 217916:
    {
        returnValue = F("Mauracher Str.");
        break;
    }
    case 217917:
    {
        returnValue = F("Maurell");
        break;
    }
    case 217918:
    {
        returnValue = F("Mauremer Weg");
        break;
    }
    case 217919:
    {
        returnValue = F("Mauren");
        break;
    }
    case 217920:
    {
        returnValue = F("Maurenbrecherstr.");
        break;
    }
    case 217921:
    {
        returnValue = F("Maurener Ring");
        break;
    }
    case 217922:
    {
        returnValue = F("Maurener Str.");
        break;
    }
    case 217923:
    {
        returnValue = F("Maurener Tal");
        break;
    }
    case 217924:
    {
        returnValue = F("Maurener Weg");
        break;
    }
    case 217925:
    {
        returnValue = F("Maurenstr.");
        break;
    }
    case 217926:
    {
        returnValue = F("Maurentiusweg");
        break;
    }
    case 217927:
    {
        returnValue = F("Maurenweg");
        break;
    }
    case 217928:
    {
        returnValue = F("Maurepasstr.");
        break;
    }
    case 217929:
    {
        returnValue = F("Maurer Berg");
        break;
    }
    case 217930:
    {
        returnValue = F("Maurer am Berg");
        break;
    }
    case 217931:
    {
        returnValue = F("Maurer-Geräumt");
        break;
    }
    case 217932:
    {
        returnValue = F("Maurer-Jackl-Weg");
        break;
    }
    case 217933:
    {
        returnValue = F("Maurerberg");
        break;
    }
    case 217934:
    {
        returnValue = F("Maurergasse");
        break;
    }
    case 217935:
    {
        returnValue = F("Maurerin");
        break;
    }
    case 217936:
    {
        returnValue = F("Maurermeistergasse");
        break;
    }
    case 217937:
    {
        returnValue = F("Maurershorn");
        break;
    }
    case 217938:
    {
        returnValue = F("Maurersklingenweg");
        break;
    }
    case 217939:
    {
        returnValue = F("Maurerstr.");
        break;
    }
    case 217940:
    {
        returnValue = F("Maurerstraßl");
        break;
    }
    case 217941:
    {
        returnValue = F("Maurerweg");
        break;
    }
    case 217942:
    {
        returnValue = F("Maurerwiesen");
        break;
    }
    case 217943:
    {
        returnValue = F("Maurerwirtberg");
        break;
    }
    case 217944:
    {
        returnValue = F("Maurice-Ravel-Park");
        break;
    }
    case 217945:
    {
        returnValue = F("Maurice-Ravel-Str.");
        break;
    }
    case 217946:
    {
        returnValue = F("Maurice-Ravel-Weg");
        break;
    }
    case 217947:
    {
        returnValue = F("Maurichwiesweg");
        break;
    }
    case 217948:
    {
        returnValue = F("Maurine");
        break;
    }
    case 217949:
    {
        returnValue = F("Maurinestr.");
        break;
    }
    case 217950:
    {
        returnValue = F("Maurinplatz");
        break;
    }
    case 217951:
    {
        returnValue = F("Maurinusstr.");
        break;
    }
    case 217952:
    {
        returnValue = F("Mauristr.");
        break;
    }
    case 217953:
    {
        returnValue = F("Mauritius Ring");
        break;
    }
    case 217954:
    {
        returnValue = F("Mauritiusbrücke");
        break;
    }
    case 217955:
    {
        returnValue = F("Mauritiusgasse");
        break;
    }
    case 217956:
    {
        returnValue = F("Mauritiusplatz");
        break;
    }
    case 217957:
    {
        returnValue = F("Mauritiusring");
        break;
    }
    case 217958:
    {
        returnValue = F("Mauritiussiedlung");
        break;
    }
    case 217959:
    {
        returnValue = F("Mauritiusstr.");
        break;
    }
    case 217960:
    {
        returnValue = F("Mauritiusweg");
        break;
    }
    case 217961:
    {
        returnValue = F("Mauritz");
        break;
    }
    case 217962:
    {
        returnValue = F("Mauritzstr.");
        break;
    }
    case 217963:
    {
        returnValue = F("Maurmeierstr.");
        break;
    }
    case 217964:
    {
        returnValue = F("Maurus-Ahn-Str.");
        break;
    }
    case 217965:
    {
        returnValue = F("Maurus-Betz-Str.");
        break;
    }
    case 217966:
    {
        returnValue = F("Maurus-Dietl-Str.");
        break;
    }
    case 217967:
    {
        returnValue = F("Maurus-Gerle-Str.");
        break;
    }
    case 217968:
    {
        returnValue = F("Maurus-Rost-Weg");
        break;
    }
    case 217969:
    {
        returnValue = F("Maurus-Weber-Str.");
        break;
    }
    case 217970:
    {
        returnValue = F("Maurusgasse");
        break;
    }
    case 217971:
    {
        returnValue = F("Maurusstr.");
        break;
    }
    case 217972:
    {
        returnValue = F("Maurusweg");
        break;
    }
    case 217973:
    {
        returnValue = F("Maurweg");
        break;
    }
    case 217974:
    {
        returnValue = F("Maus");
        break;
    }
    case 217975:
    {
        returnValue = F("Mausackerweg");
        break;
    }
    case 217976:
    {
        returnValue = F("Mausauel");
        break;
    }
    case 217977:
    {
        returnValue = F("Mausbacher Str.");
        break;
    }
    case 217978:
    {
        returnValue = F("Mausbachhangweg");
        break;
    }
    case 217979:
    {
        returnValue = F("Mausbachstr.");
        break;
    }
    case 217980:
    {
        returnValue = F("Mausbachtalweg");
        break;
    }
    case 217981:
    {
        returnValue = F("Mausbachweg");
        break;
    }
    case 217982:
    {
        returnValue = F("Mausberg");
        break;
    }
    case 217983:
    {
        returnValue = F("Mausbergstr.");
        break;
    }
    case 217984:
    {
        returnValue = F("Mausbergweg");
        break;
    }
    case 217985:
    {
        returnValue = F("Mauschbacher Str.");
        break;
    }
    case 217986:
    {
        returnValue = F("Mauschbacher Weg");
        break;
    }
    case 217987:
    {
        returnValue = F("Mauschelhofstr.");
        break;
    }
    case 217988:
    {
        returnValue = F("Mauschwitz");
        break;
    }
    case 217989:
    {
        returnValue = F("Mauschwitzer Weg");
        break;
    }
    case 217990:
    {
        returnValue = F("Mausdorf");
        break;
    }
    case 217991:
    {
        returnValue = F("Mausdorfer Str.");
        break;
    }
    case 217992:
    {
        returnValue = F("Mauseberg");
        break;
    }
    case 217993:
    {
        returnValue = F("Mausebrunnenweg");
        break;
    }
    case 217994:
    {
        returnValue = F("Mauseburg");
        break;
    }
    case 217995:
    {
        returnValue = F("Mausegasse");
        break;
    }
    case 217996:
    {
        returnValue = F("Mausegatt");
        break;
    }
    case 217997:
    {
        returnValue = F("Mausegattstr.");
        break;
    }
    case 217998:
    {
        returnValue = F("Mausehundgraben");
        break;
    }
    case 217999:
    {
        returnValue = F("Mauseloch");
        break;
    }
    case 218000:
    {
        returnValue = F("Mauselochweg");
        break;
    }
    case 218001:
    {
        returnValue = F("Mausendorf");
        break;
    }
    case 218002:
    {
        returnValue = F("Mausendorfer Str.");
        break;
    }
    case 218003:
    {
        returnValue = F("Mausendorfer Weg");
        break;
    }
    case 218004:
    {
        returnValue = F("Mauserstr.");
        break;
    }
    case 218005:
    {
        returnValue = F("Mausesteig");
        break;
    }
    case 218006:
    {
        returnValue = F("Mausestr.");
        break;
    }
    case 218007:
    {
        returnValue = F("Mauseteich");
        break;
    }
    case 218008:
    {
        returnValue = F("Mauseweg");
        break;
    }
    case 218009:
    {
        returnValue = F("Mausewinkel");
        break;
    }
    case 218010:
    {
        returnValue = F("Mausgarten");
        break;
    }
    case 218011:
    {
        returnValue = F("Mausheim");
        break;
    }
    case 218012:
    {
        returnValue = F("Mausheim 100");
        break;
    }
    case 218013:
    {
        returnValue = F("Mausheimer Str.");
        break;
    }
    case 218014:
    {
        returnValue = F("Maushof");
        break;
    }
    case 218015:
    {
        returnValue = F("Maushäuschen");
        break;
    }
    case 218016:
    {
        returnValue = F("Maushöhlweg");
        break;
    }
    case 218017:
    {
        returnValue = F("Mausitz");
        break;
    }
    case 218018:
    {
        returnValue = F("Mauskirchweg");
        break;
    }
    case 218019:
    {
        returnValue = F("Mausleithen");
        break;
    }
    case 218020:
    {
        returnValue = F("Mausloch");
        break;
    }
    case 218021:
    {
        returnValue = F("Mauslochweg");
        break;
    }
    case 218022:
    {
        returnValue = F("Mausmaar");
        break;
    }
    case 218023:
    {
        returnValue = F("Mausmühle");
        break;
    }
    case 218024:
    {
        returnValue = F("Mausoleumsweg");
        break;
    }
    case 218025:
    {
        returnValue = F("Mauspfad");
        break;
    }
    case 218026:
    {
        returnValue = F("Mausriedweg");
        break;
    }
    case 218027:
    {
        returnValue = F("Mausstr.");
        break;
    }
    case 218028:
    {
        returnValue = F("Maustalstr.");
        break;
    }
    case 218029:
    {
        returnValue = F("Maustalsträßchen");
        break;
    }
    case 218030:
    {
        returnValue = F("Mauster Str.");
        break;
    }
    case 218031:
    {
        returnValue = F("Maustäle");
        break;
    }
    case 218032:
    {
        returnValue = F("Mausweg");
        break;
    }
    case 218033:
    {
        returnValue = F("Mauswieselweg");
        break;
    }
    case 218034:
    {
        returnValue = F("Mauswiesenweg");
        break;
    }
    case 218035:
    {
        returnValue = F("Mauswinkel");
        break;
    }
    case 218036:
    {
        returnValue = F("Mausäcker");
        break;
    }
    case 218037:
    {
        returnValue = F("Mausäckerweg");
        break;
    }
    case 218038:
    {
        returnValue = F("Mautanger");
        break;
    }
    case 218039:
    {
        returnValue = F("Mautenreutestr.");
        break;
    }
    case 218040:
    {
        returnValue = F("Mauternstr.");
        break;
    }
    case 218041:
    {
        returnValue = F("Mautersbrunnenweg");
        break;
    }
    case 218042:
    {
        returnValue = F("Mautgasse");
        break;
    }
    case 218043:
    {
        returnValue = F("Mautgewanne");
        break;
    }
    case 218044:
    {
        returnValue = F("Mautgässele");
        break;
    }
    case 218045:
    {
        returnValue = F("Mauth");
        break;
    }
    case 218046:
    {
        returnValue = F("Mauthauser Str.");
        break;
    }
    case 218047:
    {
        returnValue = F("Mauthausstr.");
        break;
    }
    case 218048:
    {
        returnValue = F("Mauthausweg");
        break;
    }
    case 218049:
    {
        returnValue = F("Mauthegäßle");
        break;
    }
    case 218050:
    {
        returnValue = F("Mauthepark");
        break;
    }
    case 218051:
    {
        returnValue = F("Mauther Str.");
        break;
    }
    case 218052:
    {
        returnValue = F("Mauthestr.");
        break;
    }
    case 218053:
    {
        returnValue = F("Mauthner Feld");
        break;
    }
    case 218054:
    {
        returnValue = F("Mauthnerstr.");
        break;
    }
    case 218055:
    {
        returnValue = F("Mauthnerweg");
        break;
    }
    case 218056:
    {
        returnValue = F("Mauthstr.");
        break;
    }
    case 218057:
    {
        returnValue = F("Mauthuberstr.");
        break;
    }
    case 218058:
    {
        returnValue = F("Mauthweg");
        break;
    }
    case 218059:
    {
        returnValue = F("Mautitzer Str.");
        break;
    }
    case 218060:
    {
        returnValue = F("Mautnerstr.");
        break;
    }
    case 218061:
    {
        returnValue = F("Mautpfad");
        break;
    }
    case 218062:
    {
        returnValue = F("Mautstr.");
        break;
    }
    case 218063:
    {
        returnValue = F("Mauttafelstr.");
        break;
    }
    case 218064:
    {
        returnValue = F("Mauttnerweg");
        break;
    }
    case 218065:
    {
        returnValue = F("Mautweg");
        break;
    }
    case 218066:
    {
        returnValue = F("Mauweg");
        break;
    }
    case 218067:
    {
        returnValue = F("Mauzenbergstr.");
        break;
    }
    case 218068:
    {
        returnValue = F("Mauzensteige");
        break;
    }
    case 218069:
    {
        returnValue = F("Mawicker Bundesstr.");
        break;
    }
    case 218070:
    {
        returnValue = F("Mawicker Hellweg");
        break;
    }
    case 218071:
    {
        returnValue = F("Mawicker Str.");
        break;
    }
    case 218072:
    {
        returnValue = F("Mawicker Weg");
        break;
    }
    case 218073:
    {
        returnValue = F("Max - von Müller Str.");
        break;
    }
    case 218074:
    {
        returnValue = F("Max Holder - / Daimler Str.");
        break;
    }
    case 218075:
    {
        returnValue = F("Max Holländer Platz");
        break;
    }
    case 218076:
    {
        returnValue = F("Max Jacob Kultur-Passage");
        break;
    }
    case 218077:
    {
        returnValue = F("Max Reger Weg");
        break;
    }
    case 218078:
    {
        returnValue = F("Max Schulze-Sölde Weg");
        break;
    }
    case 218079:
    {
        returnValue = F("Max Vogler Park");
        break;
    }
    case 218080:
    {
        returnValue = F("Max Weg");
        break;
    }
    case 218081:
    {
        returnValue = F("Max Ziegler Weg");
        break;
    }
    case 218082:
    {
        returnValue = F("Max-Ackermann-Str.");
        break;
    }
    case 218083:
    {
        returnValue = F("Max-Ackermann-Weg");
        break;
    }
    case 218084:
    {
        returnValue = F("Max-Adler-Str.");
        break;
    }
    case 218085:
    {
        returnValue = F("Max-Adrion-Str.");
        break;
    }
    case 218086:
    {
        returnValue = F("Max-Ahrens-Weg");
        break;
    }
    case 218087:
    {
        returnValue = F("Max-Aicher-Allee");
        break;
    }
    case 218088:
    {
        returnValue = F("Max-Alban-Schwabe-Weg");
        break;
    }
    case 218089:
    {
        returnValue = F("Max-Alvary-Str.");
        break;
    }
    case 218090:
    {
        returnValue = F("Max-Anderl-Str.");
        break;
    }
    case 218091:
    {
        returnValue = F("Max-Auernhammer-Str.");
        break;
    }
    case 218092:
    {
        returnValue = F("Max-Baer-Str.");
        break;
    }
    case 218093:
    {
        returnValue = F("Max-Baermann-Str.");
        break;
    }
    case 218094:
    {
        returnValue = F("Max-Baginski-Str.");
        break;
    }
    case 218095:
    {
        returnValue = F("Max-Baier-Weg");
        break;
    }
    case 218096:
    {
        returnValue = F("Max-Balles-Str.");
        break;
    }
    case 218097:
    {
        returnValue = F("Max-Barnicol-Str.");
        break;
    }
    case 218098:
    {
        returnValue = F("Max-Barth-Weg");
        break;
    }
    case 218099:
    {
        returnValue = F("Max-Bartl-Str.");
        break;
    }
    case 218100:
    {
        returnValue = F("Max-Becher-Str.");
        break;
    }
    case 218101:
    {
        returnValue = F("Max-Beck-Str.");
        break;
    }
    case 218102:
    {
        returnValue = F("Max-Becker-Str.");
        break;
    }
    case 218103:
    {
        returnValue = F("Max-Beckmann-Platz");
        break;
    }
    case 218104:
    {
        returnValue = F("Max-Beckmann-Str.");
        break;
    }
    case 218105:
    {
        returnValue = F("Max-Beckmann-Weg");
        break;
    }
    case 218106:
    {
        returnValue = F("Max-Beermann-Platz");
        break;
    }
    case 218107:
    {
        returnValue = F("Max-Berek-Str.");
        break;
    }
    case 218108:
    {
        returnValue = F("Max-Bergmann-Str.");
        break;
    }
    case 218109:
    {
        returnValue = F("Max-Beringer-Str.");
        break;
    }
    case 218110:
    {
        returnValue = F("Max-Berlis-Weg");
        break;
    }
    case 218111:
    {
        returnValue = F("Max-Bernhard-Schwab-Str.");
        break;
    }
    case 218112:
    {
        returnValue = F("Max-Bierend-Weg");
        break;
    }
    case 218113:
    {
        returnValue = F("Max-Bill-Str.");
        break;
    }
    case 218114:
    {
        returnValue = F("Max-Binder-Str.");
        break;
    }
    case 218115:
    {
        returnValue = F("Max-Birner-Str.");
        break;
    }
    case 218116:
    {
        returnValue = F("Max-Bodenstein-Str.");
        break;
    }
    case 218117:
    {
        returnValue = F("Max-Bogenberger-Str.");
        break;
    }
    case 218118:
    {
        returnValue = F("Max-Bohne-Str.");
        break;
    }
    case 218119:
    {
        returnValue = F("Max-Bommer-Weg");
        break;
    }
    case 218120:
    {
        returnValue = F("Max-Born-Ring");
        break;
    }
    case 218121:
    {
        returnValue = F("Max-Born-Str.");
        break;
    }
    case 218122:
    {
        returnValue = F("Max-Born-Weg");
        break;
    }
    case 218123:
    {
        returnValue = F("Max-Bram-Platz");
        break;
    }
    case 218124:
    {
        returnValue = F("Max-Brand-Str.");
        break;
    }
    case 218125:
    {
        returnValue = F("Max-Brandts-Str.");
        break;
    }
    case 218126:
    {
        returnValue = F("Max-Bratsch-Str.");
        break;
    }
    case 218127:
    {
        returnValue = F("Max-Braun-Str.");
        break;
    }
    case 218128:
    {
        returnValue = F("Max-Breiherr-Str.");
        break;
    }
    case 218129:
    {
        returnValue = F("Max-Brockert-Str.");
        break;
    }
    case 218130:
    {
        returnValue = F("Max-Brod-Weg");
        break;
    }
    case 218131:
    {
        returnValue = F("Max-Brombacher-Weg");
        break;
    }
    case 218132:
    {
        returnValue = F("Max-Bromme-Str.");
        break;
    }
    case 218133:
    {
        returnValue = F("Max-Bronold-Str.");
        break;
    }
    case 218134:
    {
        returnValue = F("Max-Bruch-Str.");
        break;
    }
    case 218135:
    {
        returnValue = F("Max-Bruch-Weg");
        break;
    }
    case 218136:
    {
        returnValue = F("Max-Brunner-Weg");
        break;
    }
    case 218137:
    {
        returnValue = F("Max-Bruns-Str.");
        break;
    }
    case 218138:
    {
        returnValue = F("Max-Buchfellner-Str.");
        break;
    }
    case 218139:
    {
        returnValue = F("Max-Busch-Str.");
        break;
    }
    case 218140:
    {
        returnValue = F("Max-Bär-Str.");
        break;
    }
    case 218141:
    {
        returnValue = F("Max-Böcker-Str.");
        break;
    }
    case 218142:
    {
        returnValue = F("Max-Bögl-Str.");
        break;
    }
    case 218143:
    {
        returnValue = F("Max-Böhlen-Weg");
        break;
    }
    case 218144:
    {
        returnValue = F("Max-Böhm-Ring");
        break;
    }
    case 218145:
    {
        returnValue = F("Max-Böhme-Ring");
        break;
    }
    case 218146:
    {
        returnValue = F("Max-Böhnel-Weg");
        break;
    }
    case 218147:
    {
        returnValue = F("Max-Cahnbley-Str.");
        break;
    }
    case 218148:
    {
        returnValue = F("Max-Cars-Platz");
        break;
    }
    case 218149:
    {
        returnValue = F("Max-Caspar-Str.");
        break;
    }
    case 218150:
    {
        returnValue = F("Max-Dauer-Gasse");
        break;
    }
    case 218151:
    {
        returnValue = F("Max-Dauthendey-Str.");
        break;
    }
    case 218152:
    {
        returnValue = F("Max-Delbrück-Str.");
        break;
    }
    case 218153:
    {
        returnValue = F("Max-Delbrück-Weg");
        break;
    }
    case 218154:
    {
        returnValue = F("Max-Dienemann-Weg");
        break;
    }
    case 218155:
    {
        returnValue = F("Max-Dietel-Str.");
        break;
    }
    case 218156:
    {
        returnValue = F("Max-Dietrich-Str.");
        break;
    }
    case 218157:
    {
        returnValue = F("Max-Dingler-Str.");
        break;
    }
    case 218158:
    {
        returnValue = F("Max-Dittrich-Str.");
        break;
    }
    case 218159:
    {
        returnValue = F("Max-Doerner-Weg");
        break;
    }
    case 218160:
    {
        returnValue = F("Max-Dortu-Str.");
        break;
    }
    case 218161:
    {
        returnValue = F("Max-Dreyer-Str.");
        break;
    }
    case 218162:
    {
        returnValue = F("Max-Droßbach-Str.");
        break;
    }
    case 218163:
    {
        returnValue = F("Max-Duncker-Weg");
        break;
    }
    case 218164:
    {
        returnValue = F("Max-Dünnebier-Str.");
        break;
    }
    case 218165:
    {
        returnValue = F("Max-Dünßer-Str.");
        break;
    }
    case 218166:
    {
        returnValue = F("Max-Eder-Ring");
        break;
    }
    case 218167:
    {
        returnValue = F("Max-Egon-Str.");
        break;
    }
    case 218168:
    {
        returnValue = F("Max-Eichmeier-Ring");
        break;
    }
    case 218169:
    {
        returnValue = F("Max-Elsas-Str.");
        break;
    }
    case 218170:
    {
        returnValue = F("Max-Emanuel-Str.");
        break;
    }
    case 218171:
    {
        returnValue = F("Max-Enderlin-Str.");
        break;
    }
    case 218172:
    {
        returnValue = F("Max-Ernst-Str.");
        break;
    }
    case 218173:
    {
        returnValue = F("Max-Ernst-Weg");
        break;
    }
    case 218174:
    {
        returnValue = F("Max-Esenwein-Str.");
        break;
    }
    case 218175:
    {
        returnValue = F("Max-Eyth Weg");
        break;
    }
    case 218176:
    {
        returnValue = F("Max-Eyth-Allee");
        break;
    }
    case 218177:
    {
        returnValue = F("Max-Eyth-Platz");
        break;
    }
    case 218178:
    {
        returnValue = F("Max-Eyth-Str.");
        break;
    }
    case 218179:
    {
        returnValue = F("Max-Eyth-Weg");
        break;
    }
    case 218180:
    {
        returnValue = F("Max-Feldbauer-Weg");
        break;
    }
    case 218181:
    {
        returnValue = F("Max-Fellermeier-Str.");
        break;
    }
    case 218182:
    {
        returnValue = F("Max-Fischer-Str.");
        break;
    }
    case 218183:
    {
        returnValue = F("Max-Fleischer-Weg");
        break;
    }
    case 218184:
    {
        returnValue = F("Max-Foerster-Str.");
        break;
    }
    case 218185:
    {
        returnValue = F("Max-Frankl-Str.");
        break;
    }
    case 218186:
    {
        returnValue = F("Max-Fraunberger-Str.");
        break;
    }
    case 218187:
    {
        returnValue = F("Max-Friedrich-Str.");
        break;
    }
    case 218188:
    {
        returnValue = F("Max-Friesenegger-Str.");
        break;
    }
    case 218189:
    {
        returnValue = F("Max-Frisch-Str.");
        break;
    }
    case 218190:
    {
        returnValue = F("Max-Frisch-Weg");
        break;
    }
    case 218191:
    {
        returnValue = F("Max-Fritz-Hammer-Str.");
        break;
    }
    case 218192:
    {
        returnValue = F("Max-Fromm-Str.");
        break;
    }
    case 218193:
    {
        returnValue = F("Max-Fürst-Str.");
        break;
    }
    case 218194:
    {
        returnValue = F("Max-Garthe-Str.");
        break;
    }
    case 218195:
    {
        returnValue = F("Max-Gaul-Weg");
        break;
    }
    case 218196:
    {
        returnValue = F("Max-Gebhard-Str.");
        break;
    }
    case 218197:
    {
        returnValue = F("Max-Gerhaher-Str.");
        break;
    }
    case 218198:
    {
        returnValue = F("Max-Giese-Str.");
        break;
    }
    case 218199:
    {
        returnValue = F("Max-Gigglberger-Weg");
        break;
    }
    case 218200:
    {
        returnValue = F("Max-Gilly-Str.");
        break;
    }
    case 218201:
    {
        returnValue = F("Max-Grabmair-Str.");
        break;
    }
    case 218202:
    {
        returnValue = F("Max-Graf-von-Drechsel-Str.");
        break;
    }
    case 218203:
    {
        returnValue = F("Max-Greil-Siedlung");
        break;
    }
    case 218204:
    {
        returnValue = F("Max-Greil-Str.");
        break;
    }
    case 218205:
    {
        returnValue = F("Max-Greve-Str.");
        break;
    }
    case 218206:
    {
        returnValue = F("Max-Griesbach-Str.");
        break;
    }
    case 218207:
    {
        returnValue = F("Max-Grossmann-Str.");
        break;
    }
    case 218208:
    {
        returnValue = F("Max-Gräfe-Gasse");
        break;
    }
    case 218209:
    {
        returnValue = F("Max-Grünbaum-Weg");
        break;
    }
    case 218210:
    {
        returnValue = F("Max-Grünebaum-Str.");
        break;
    }
    case 218211:
    {
        returnValue = F("Max-Gutknecht-Str.");
        break;
    }
    case 218212:
    {
        returnValue = F("Max-Gutmann-Str.");
        break;
    }
    case 218213:
    {
        returnValue = F("Max-Haarig-Str.");
        break;
    }
    case 218214:
    {
        returnValue = F("Max-Habermann-Str.");
        break;
    }
    case 218215:
    {
        returnValue = F("Max-Habermann-Weg");
        break;
    }
    case 218216:
    {
        returnValue = F("Max-Hachenburg-Str.");
        break;
    }
    case 218217:
    {
        returnValue = F("Max-Haftka-Str.");
        break;
    }
    case 218218:
    {
        returnValue = F("Max-Hagen-Weg");
        break;
    }
    case 218219:
    {
        returnValue = F("Max-Halbach-Str.");
        break;
    }
    case 218220:
    {
        returnValue = F("Max-Halbe-Str.");
        break;
    }
    case 218221:
    {
        returnValue = F("Max-Halbe-Weg");
        break;
    }
    case 218222:
    {
        returnValue = F("Max-Halberstadt-Park");
        break;
    }
    case 218223:
    {
        returnValue = F("Max-Halle-Weg");
        break;
    }
    case 218224:
    {
        returnValue = F("Max-Hamerich-Str.");
        break;
    }
    case 218225:
    {
        returnValue = F("Max-Hammer-Str.");
        break;
    }
    case 218226:
    {
        returnValue = F("Max-Hannemann-Str.");
        break;
    }
    case 218227:
    {
        returnValue = F("Max-Hansen-Weg");
        break;
    }
    case 218228:
    {
        returnValue = F("Max-Harnisch-Str.");
        break;
    }
    case 218229:
    {
        returnValue = F("Max-Hartmann-Str.");
        break;
    }
    case 218230:
    {
        returnValue = F("Max-Hauschild-Weg");
        break;
    }
    case 218231:
    {
        returnValue = F("Max-Heder-Str.");
        break;
    }
    case 218232:
    {
        returnValue = F("Max-Heim-Str.");
        break;
    }
    case 218233:
    {
        returnValue = F("Max-Heimbucher-Str.");
        break;
    }
    case 218234:
    {
        returnValue = F("Max-Heinzelmann-Str.");
        break;
    }
    case 218235:
    {
        returnValue = F("Max-Hempel-Str.");
        break;
    }
    case 218236:
    {
        returnValue = F("Max-Herm-Str.");
        break;
    }
    case 218237:
    {
        returnValue = F("Max-Hermkes-Platz");
        break;
    }
    case 218238:
    {
        returnValue = F("Max-Herrmann-Weg");
        break;
    }
    case 218239:
    {
        returnValue = F("Max-Herrndobler-Str.");
        break;
    }
    case 218240:
    {
        returnValue = F("Max-Hertwig-Weg");
        break;
    }
    case 218241:
    {
        returnValue = F("Max-Herz-Str.");
        break;
    }
    case 218242:
    {
        returnValue = F("Max-Hessemer-Str.");
        break;
    }
    case 218243:
    {
        returnValue = F("Max-Heynen-Str.");
        break;
    }
    case 218244:
    {
        returnValue = F("Max-Hickl-Str.");
        break;
    }
    case 218245:
    {
        returnValue = F("Max-Hildebrandt-Str.");
        break;
    }
    case 218246:
    {
        returnValue = F("Max-Hilsenbeck-Str.");
        break;
    }
    case 218247:
    {
        returnValue = F("Max-Himmelheber-Str.");
        break;
    }
    case 218248:
    {
        returnValue = F("Max-Hirsch-Str.");
        break;
    }
    case 218249:
    {
        returnValue = F("Max-Hirtreiter-Str.");
        break;
    }
    case 218250:
    {
        returnValue = F("Max-Hitzler-Str.");
        break;
    }
    case 218251:
    {
        returnValue = F("Max-Holder-Str.");
        break;
    }
    case 218252:
    {
        returnValue = F("Max-Holland-Str.");
        break;
    }
    case 218253:
    {
        returnValue = F("Max-Holthausen-Platz");
        break;
    }
    case 218254:
    {
        returnValue = F("Max-Holz -Str.");
        break;
    }
    case 218255:
    {
        returnValue = F("Max-Horkheimer-Str.");
        break;
    }
    case 218256:
    {
        returnValue = F("Max-Horkheimer-Weg");
        break;
    }
    case 218257:
    {
        returnValue = F("Max-Huber-Str.");
        break;
    }
    case 218258:
    {
        returnValue = F("Max-Hueber-Str.");
        break;
    }
    case 218259:
    {
        returnValue = F("Max-Hufschmidt-Str.");
        break;
    }
    case 218260:
    {
        returnValue = F("Max-Humpl-Str.");
        break;
    }
    case 218261:
    {
        returnValue = F("Max-Hupfer-Str.");
        break;
    }
    case 218262:
    {
        returnValue = F("Max-Höfler-Platz");
        break;
    }
    case 218263:
    {
        returnValue = F("Max-Högg-Str.");
        break;
    }
    case 218264:
    {
        returnValue = F("Max-Höra-Str.");
        break;
    }
    case 218265:
    {
        returnValue = F("Max-Höser-Weg");
        break;
    }
    case 218266:
    {
        returnValue = F("Max-Hünermann-Str.");
        break;
    }
    case 218267:
    {
        returnValue = F("Max-Hünten-Weg");
        break;
    }
    case 218268:
    {
        returnValue = F("Max-Imdahl-Str.");
        break;
    }
    case 218269:
    {
        returnValue = F("Max-Immelmann-Allee");
        break;
    }
    case 218270:
    {
        returnValue = F("Max-Immelmann-Str.");
        break;
    }
    case 218271:
    {
        returnValue = F("Max-Isserlin-Str.");
        break;
    }
    case 218272:
    {
        returnValue = F("Max-Jacob-Str.");
        break;
    }
    case 218273:
    {
        returnValue = F("Max-Jarecki-Str.");
        break;
    }
    case 218274:
    {
        returnValue = F("Max-Jenne-Str.");
        break;
    }
    case 218275:
    {
        returnValue = F("Max-Jensch-Str.");
        break;
    }
    case 218276:
    {
        returnValue = F("Max-Johannsen-Brücke");
        break;
    }
    case 218277:
    {
        returnValue = F("Max-John-Str.");
        break;
    }
    case 218278:
    {
        returnValue = F("Max-Josef-Geräumt");
        break;
    }
    case 218279:
    {
        returnValue = F("Max-Josef-Metzger-Str.");
        break;
    }
    case 218280:
    {
        returnValue = F("Max-Josef-Metzger-Weg");
        break;
    }
    case 218281:
    {
        returnValue = F("Max-Josef-Park");
        break;
    }
    case 218282:
    {
        returnValue = F("Max-Josef-Str.");
        break;
    }
    case 218283:
    {
        returnValue = F("Max-Josef-Weg");
        break;
    }
    case 218284:
    {
        returnValue = F("Max-Joseph-Platz");
        break;
    }
    case 218285:
    {
        returnValue = F("Max-Joseph-Str.");
        break;
    }
    case 218286:
    {
        returnValue = F("Max-Joseph-Weg");
        break;
    }
    case 218287:
    {
        returnValue = F("Max-Kahlcke-Weg");
        break;
    }
    case 218288:
    {
        returnValue = F("Max-Kaiser-Str.");
        break;
    }
    case 218289:
    {
        returnValue = F("Max-Kamprath-Str.");
        break;
    }
    case 218290:
    {
        returnValue = F("Max-Kasperschinski-Str.");
        break;
    }
    case 218291:
    {
        returnValue = F("Max-Kassube-Str.");
        break;
    }
    case 218292:
    {
        returnValue = F("Max-Kegel-Str.");
        break;
    }
    case 218293:
    {
        returnValue = F("Max-Kirschner-Str.");
        break;
    }
    case 218294:
    {
        returnValue = F("Max-Klein-Str.");
        break;
    }
    case 218295:
    {
        returnValue = F("Max-Klemens-Str.");
        break;
    }
    case 218296:
    {
        returnValue = F("Max-Klemm-Str.");
        break;
    }
    case 218297:
    {
        returnValue = F("Max-Klinger-Str.");
        break;
    }
    case 218298:
    {
        returnValue = F("Max-Klinger-Weg");
        break;
    }
    case 218299:
    {
        returnValue = F("Max-Kluge-Str.");
        break;
    }
    case 218300:
    {
        returnValue = F("Max-Klühs-Str.");
        break;
    }
    case 218301:
    {
        returnValue = F("Max-Koeppen-Str.");
        break;
    }
    case 218302:
    {
        returnValue = F("Max-Kohl-Str.");
        break;
    }
    case 218303:
    {
        returnValue = F("Max-Kolbe-Weg");
        break;
    }
    case 218304:
    {
        returnValue = F("Max-Koppenstätter-Str.");
        break;
    }
    case 218305:
    {
        returnValue = F("Max-Korb-Str.");
        break;
    }
    case 218306:
    {
        returnValue = F("Max-Koswig-Str.");
        break;
    }
    case 218307:
    {
        returnValue = F("Max-Kraus-Str.");
        break;
    }
    case 218308:
    {
        returnValue = F("Max-Krehan-Str.");
        break;
    }
    case 218309:
    {
        returnValue = F("Max-Kruse-Str.");
        break;
    }
    case 218310:
    {
        returnValue = F("Max-Kuhn-Str.");
        break;
    }
    case 218311:
    {
        returnValue = F("Max-Kunath-Str.");
        break;
    }
    case 218312:
    {
        returnValue = F("Max-Kunz-Gasse");
        break;
    }
    case 218313:
    {
        returnValue = F("Max-Kurz-Str.");
        break;
    }
    case 218314:
    {
        returnValue = F("Max-Kästner-Str.");
        break;
    }
    case 218315:
    {
        returnValue = F("Max-Köhler-Str.");
        break;
    }
    case 218316:
    {
        returnValue = F("Max-Kölges-Str.");
        break;
    }
    case 218317:
    {
        returnValue = F("Max-Köster-Str.");
        break;
    }
    case 218318:
    {
        returnValue = F("Max-Künzel-Str.");
        break;
    }
    case 218319:
    {
        returnValue = F("Max-Küper-Str.");
        break;
    }
    case 218320:
    {
        returnValue = F("Max-Kürschner-Str.");
        break;
    }
    case 218321:
    {
        returnValue = F("Max-Küstner-Str.");
        break;
    }
    case 218322:
    {
        returnValue = F("Max-Lademann-Str.");
        break;
    }
    case 218323:
    {
        returnValue = F("Max-Laeuger-Str.");
        break;
    }
    case 218324:
    {
        returnValue = F("Max-Laeugner-Platz");
        break;
    }
    case 218325:
    {
        returnValue = F("Max-Lang-Str.");
        break;
    }
    case 218326:
    {
        returnValue = F("Max-Lange-Str.");
        break;
    }
    case 218327:
    {
        returnValue = F("Max-Lange-Weg");
        break;
    }
    case 218328:
    {
        returnValue = F("Max-Langer-Str.");
        break;
    }
    case 218329:
    {
        returnValue = F("Max-Langer-Weg");
        break;
    }
    case 218330:
    {
        returnValue = F("Max-Lanz-Str.");
        break;
    }
    case 218331:
    {
        returnValue = F("Max-Laumann-Str.");
        break;
    }
    case 218332:
    {
        returnValue = F("Max-Lazarus-Str.");
        break;
    }
    case 218333:
    {
        returnValue = F("Max-Lechler-Str.");
        break;
    }
    case 218334:
    {
        returnValue = F("Max-Leeser-Str.");
        break;
    }
    case 218335:
    {
        returnValue = F("Max-Lehner-Str.");
        break;
    }
    case 218336:
    {
        returnValue = F("Max-Leipheimer-Weg");
        break;
    }
    case 218337:
    {
        returnValue = F("Max-Lenk-Str.");
        break;
    }
    case 218338:
    {
        returnValue = F("Max-Leuze-Str.");
        break;
    }
    case 218339:
    {
        returnValue = F("Max-Leven-Gasse");
        break;
    }
    case 218340:
    {
        returnValue = F("Max-Levi-Str.");
        break;
    }
    case 218341:
    {
        returnValue = F("Max-Levy-Str.");
        break;
    }
    case 218342:
    {
        returnValue = F("Max-Lieber-Str.");
        break;
    }
    case 218343:
    {
        returnValue = F("Max-Liebermann-Str.");
        break;
    }
    case 218344:
    {
        returnValue = F("Max-Liebermann-Weg");
        break;
    }
    case 218345:
    {
        returnValue = F("Max-Liersch-Anger");
        break;
    }
    case 218346:
    {
        returnValue = F("Max-Linde-Weg");
        break;
    }
    case 218347:
    {
        returnValue = F("Max-Lindow-Str.");
        break;
    }
    case 218348:
    {
        returnValue = F("Max-Lingner-Str.");
        break;
    }
    case 218349:
    {
        returnValue = F("Max-Linie");
        break;
    }
    case 218350:
    {
        returnValue = F("Max-Linke-Str.");
        break;
    }
    case 218351:
    {
        returnValue = F("Max-Lohlein-Str.");
        break;
    }
    case 218352:
    {
        returnValue = F("Max-Lull-Str.");
        break;
    }
    case 218353:
    {
        returnValue = F("Max-Läuger-Str.");
        break;
    }
    case 218354:
    {
        returnValue = F("Max-Löw-Str.");
        break;
    }
    case 218355:
    {
        returnValue = F("Max-Löwenstein-Weg");
        break;
    }
    case 218356:
    {
        returnValue = F("Max-Maddalena-Str.");
        break;
    }
    case 218357:
    {
        returnValue = F("Max-Maier-Weg");
        break;
    }
    case 218358:
    {
        returnValue = F("Max-Mang-Str.");
        break;
    }
    case 218359:
    {
        returnValue = F("Max-Mannheimer-Platz");
        break;
    }
    case 218360:
    {
        returnValue = F("Max-Mannheimer-Ring");
        break;
    }
    case 218361:
    {
        returnValue = F("Max-Mannheimer-Str.");
        break;
    }
    case 218362:
    {
        returnValue = F("Max-Matern-Str.");
        break;
    }
    case 218363:
    {
        returnValue = F("Max-Matheis-Str.");
        break;
    }
    case 218364:
    {
        returnValue = F("Max-Mattheis-Str.");
        break;
    }
    case 218365:
    {
        returnValue = F("Max-Mattig-Weg");
        break;
    }
    case 218366:
    {
        returnValue = F("Max-Maurer-Str.");
        break;
    }
    case 218367:
    {
        returnValue = F("Max-Mayer-Berg");
        break;
    }
    case 218368:
    {
        returnValue = F("Max-Mayer-Str.");
        break;
    }
    case 218369:
    {
        returnValue = F("Max-Mayr-Platz");
        break;
    }
    case 218370:
    {
        returnValue = F("Max-Mehner-Str.");
        break;
    }
    case 218371:
    {
        returnValue = F("Max-Meier-Str.");
        break;
    }
    case 218372:
    {
        returnValue = F("Max-Mendrock-Str.");
        break;
    }
    case 218373:
    {
        returnValue = F("Max-Merkel-Str.");
        break;
    }
    case 218374:
    {
        returnValue = F("Max-Meutzner-Weg");
        break;
    }
    case 218375:
    {
        returnValue = F("Max-Meyer-Olbersleben-Str.");
        break;
    }
    case 218376:
    {
        returnValue = F("Max-Michaelis-Str.");
        break;
    }
    case 218377:
    {
        returnValue = F("Max-Michel-Str.");
        break;
    }
    case 218378:
    {
        returnValue = F("Max-Militzer-Weg");
        break;
    }
    case 218379:
    {
        returnValue = F("Max-Miller-Weg");
        break;
    }
    case 218380:
    {
        returnValue = F("Max-Mohr-Str.");
        break;
    }
    case 218381:
    {
        returnValue = F("Max-Morlock-Weg");
        break;
    }
    case 218382:
    {
        returnValue = F("Max-Moser-Str.");
        break;
    }
    case 218383:
    {
        returnValue = F("Max-Munding-Weg");
        break;
    }
    case 218384:
    {
        returnValue = F("Max-Mutscheller-Str.");
        break;
    }
    case 218385:
    {
        returnValue = F("Max-Märtens-Weg");
        break;
    }
    case 218386:
    {
        returnValue = F("Max-Müller-Str.");
        break;
    }
    case 218387:
    {
        returnValue = F("Max-Müller-Weg");
        break;
    }
    case 218388:
    {
        returnValue = F("Max-Neeser-Str.");
        break;
    }
    case 218389:
    {
        returnValue = F("Max-Niklas-Str.");
        break;
    }
    case 218390:
    {
        returnValue = F("Max-Näder-Str.");
        break;
    }
    case 218391:
    {
        returnValue = F("Max-Oelgart-Str.");
        break;
    }
    case 218392:
    {
        returnValue = F("Max-Oertz-Str.");
        break;
    }
    case 218393:
    {
        returnValue = F("Max-Olpp-Weg");
        break;
    }
    case 218394:
    {
        returnValue = F("Max-Opitz-Str.");
        break;
    }
    case 218395:
    {
        returnValue = F("Max-Oppenheim-Platz");
        break;
    }
    case 218396:
    {
        returnValue = F("Max-Osterloh-Platz");
        break;
    }
    case 218397:
    {
        returnValue = F("Max-Ostheimer-Str.");
        break;
    }
    case 218398:
    {
        returnValue = F("Max-Oswin-Horn-Str.");
        break;
    }
    case 218399:
    {
        returnValue = F("Max-Otten-Str.");
        break;
    }
    case 218400:
    {
        returnValue = F("Max-Otto-Hoffmann-Str.");
        break;
    }
    case 218401:
    {
        returnValue = F("Max-Otto-Str.");
        break;
    }
    case 218402:
    {
        returnValue = F("Max-Pangerl-Str.");
        break;
    }
    case 218403:
    {
        returnValue = F("Max-Pechstein-Str.");
        break;
    }
    case 218404:
    {
        returnValue = F("Max-Pechstein-Weg");
        break;
    }
    case 218405:
    {
        returnValue = F("Max-Peinkofer-Str.");
        break;
    }
    case 218406:
    {
        returnValue = F("Max-Peinkofer-Weg");
        break;
    }
    case 218407:
    {
        returnValue = F("Max-Pelz-Str.");
        break;
    }
    case 218408:
    {
        returnValue = F("Max-Perthy-Str.");
        break;
    }
    case 218409:
    {
        returnValue = F("Max-Peschel-Str.");
        break;
    }
    case 218410:
    {
        returnValue = F("Max-Peter-Str.");
        break;
    }
    case 218411:
    {
        returnValue = F("Max-Petzi-Str.");
        break;
    }
    case 218412:
    {
        returnValue = F("Max-Pezold-Str.");
        break;
    }
    case 218413:
    {
        returnValue = F("Max-Pfaller-Weg");
        break;
    }
    case 218414:
    {
        returnValue = F("Max-Pfau-Str.");
        break;
    }
    case 218415:
    {
        returnValue = F("Max-Philipp-Weg");
        break;
    }
    case 218416:
    {
        returnValue = F("Max-Planck Str.");
        break;
    }
    case 218417:
    {
        returnValue = F("Max-Planck-Ring");
        break;
    }
    case 218418:
    {
        returnValue = F("Max-Planck-Stieg");
        break;
    }
    case 218419:
    {
        returnValue = F("Max-Planck-Str.");
        break;
    }
    case 218420:
    {
        returnValue = F("Max-Planck-Weg");
        break;
    }
    case 218421:
    {
        returnValue = F("Max-Plank-Str.");
        break;
    }
    case 218422:
    {
        returnValue = F("Max-Pohly Ring");
        break;
    }
    case 218423:
    {
        returnValue = F("Max-Pollin-Str.");
        break;
    }
    case 218424:
    {
        returnValue = F("Max-Prechtl-Str.");
        break;
    }
    case 218425:
    {
        returnValue = F("Max-Preis-Str.");
        break;
    }
    case 218426:
    {
        returnValue = F("Max-Prinstner-Str.");
        break;
    }
    case 218427:
    {
        returnValue = F("Max-Pruß-Weg");
        break;
    }
    case 218428:
    {
        returnValue = F("Max-Präger-Weg");
        break;
    }
    case 218429:
    {
        returnValue = F("Max-Pöhlmann-Str.");
        break;
    }
    case 218430:
    {
        returnValue = F("Max-Pöhlmann-Weg");
        break;
    }
    case 218431:
    {
        returnValue = F("Max-Rappenglitz-Ring");
        break;
    }
    case 218432:
    {
        returnValue = F("Max-Ratschow-Weg");
        break;
    }
    case 218433:
    {
        returnValue = F("Max-Rauth-Str.");
        break;
    }
    case 218434:
    {
        returnValue = F("Max-Redelstein-Str.");
        break;
    }
    case 218435:
    {
        returnValue = F("Max-Reeb-Str.");
        break;
    }
    case 218436:
    {
        returnValue = F("Max-Reger-Hof");
        break;
    }
    case 218437:
    {
        returnValue = F("Max-Reger-Park");
        break;
    }
    case 218438:
    {
        returnValue = F("Max-Reger-Platz");
        break;
    }
    case 218439:
    {
        returnValue = F("Max-Reger-Ring");
        break;
    }
    case 218440:
    {
        returnValue = F("Max-Reger-Str.");
        break;
    }
    case 218441:
    {
        returnValue = F("Max-Reger-Weg");
        break;
    }
    case 218442:
    {
        returnValue = F("Max-Rehle-Weg");
        break;
    }
    case 218443:
    {
        returnValue = F("Max-Reichpietsch-Platz");
        break;
    }
    case 218444:
    {
        returnValue = F("Max-Reichpietsch-Ring");
        break;
    }
    case 218445:
    {
        returnValue = F("Max-Reichpietsch-Str.");
        break;
    }
    case 218446:
    {
        returnValue = F("Max-Reichpietsch-Weg");
        break;
    }
    case 218447:
    {
        returnValue = F("Max-Reimann-Str.");
        break;
    }
    case 218448:
    {
        returnValue = F("Max-Reinhardt-Str.");
        break;
    }
    case 218449:
    {
        returnValue = F("Max-Reinhardt-Weg");
        break;
    }
    case 218450:
    {
        returnValue = F("Max-Remmele-Str.");
        break;
    }
    case 218451:
    {
        returnValue = F("Max-Reschauer-Str.");
        break;
    }
    case 218452:
    {
        returnValue = F("Max-Richter-Str.");
        break;
    }
    case 218453:
    {
        returnValue = F("Max-Ridple-Platz");
        break;
    }
    case 218454:
    {
        returnValue = F("Max-Rieple-Weg");
        break;
    }
    case 218455:
    {
        returnValue = F("Max-Rimmele-Str.");
        break;
    }
    case 218456:
    {
        returnValue = F("Max-Roeder-Weg");
        break;
    }
    case 218457:
    {
        returnValue = F("Max-Roesler-Str.");
        break;
    }
    case 218458:
    {
        returnValue = F("Max-Roscher-Str.");
        break;
    }
    case 218459:
    {
        returnValue = F("Max-Roth-Str.");
        break;
    }
    case 218460:
    {
        returnValue = F("Max-Rubow-Weg");
        break;
    }
    case 218461:
    {
        returnValue = F("Max-Ruh-Str.");
        break;
    }
    case 218462:
    {
        returnValue = F("Max-Röer-Platz");
        break;
    }
    case 218463:
    {
        returnValue = F("Max-Rüttgers-Str.");
        break;
    }
    case 218464:
    {
        returnValue = F("Max-Sabersky-Allee");
        break;
    }
    case 218465:
    {
        returnValue = F("Max-Sachse-Str.");
        break;
    }
    case 218466:
    {
        returnValue = F("Max-Samson-Str.");
        break;
    }
    case 218467:
    {
        returnValue = F("Max-Sander-Str.");
        break;
    }
    case 218468:
    {
        returnValue = F("Max-Sauerbrey-Str.");
        break;
    }
    case 218469:
    {
        returnValue = F("Max-Sauerstein-Str.");
        break;
    }
    case 218470:
    {
        returnValue = F("Max-Saupe-Str.");
        break;
    }
    case 218471:
    {
        returnValue = F("Max-Sauter-Str.");
        break;
    }
    case 218472:
    {
        returnValue = F("Max-Scheiff-Str.");
        break;
    }
    case 218473:
    {
        returnValue = F("Max-Scheler-Str.");
        break;
    }
    case 218474:
    {
        returnValue = F("Max-Schidlo-Str.");
        break;
    }
    case 218475:
    {
        returnValue = F("Max-Schieferdecker-Str.");
        break;
    }
    case 218476:
    {
        returnValue = F("Max-Schier-Weg");
        break;
    }
    case 218477:
    {
        returnValue = F("Max-Schieritz-Str.");
        break;
    }
    case 218478:
    {
        returnValue = F("Max-Schiffer-Str.");
        break;
    }
    case 218479:
    {
        returnValue = F("Max-Schiller-Str.");
        break;
    }
    case 218480:
    {
        returnValue = F("Max-Schlosser-Str.");
        break;
    }
    case 218481:
    {
        returnValue = F("Max-Schmeling-Platz");
        break;
    }
    case 218482:
    {
        returnValue = F("Max-Schmeling-Str.");
        break;
    }
    case 218483:
    {
        returnValue = F("Max-Schmerler-Weg");
        break;
    }
    case 218484:
    {
        returnValue = F("Max-Schmid-Str.");
        break;
    }
    case 218485:
    {
        returnValue = F("Max-Schmidt-Str.");
        break;
    }
    case 218486:
    {
        returnValue = F("Max-Schnabel-Str.");
        break;
    }
    case 218487:
    {
        returnValue = F("Max-Schneider-Str.");
        break;
    }
    case 218488:
    {
        returnValue = F("Max-Schneider-Weg");
        break;
    }
    case 218489:
    {
        returnValue = F("Max-Schnös-Weg");
        break;
    }
    case 218490:
    {
        returnValue = F("Max-Schott-Str.");
        break;
    }
    case 218491:
    {
        returnValue = F("Max-Schreiber-Str.");
        break;
    }
    case 218492:
    {
        returnValue = F("Max-Schreitmüller-Str.");
        break;
    }
    case 218493:
    {
        returnValue = F("Max-Schreyer-Str.");
        break;
    }
    case 218494:
    {
        returnValue = F("Max-Schubert-Weg");
        break;
    }
    case 218495:
    {
        returnValue = F("Max-Schulmeyr-Str.");
        break;
    }
    case 218496:
    {
        returnValue = F("Max-Schulze-Str.");
        break;
    }
    case 218497:
    {
        returnValue = F("Max-Schumann-Str.");
        break;
    }
    case 218498:
    {
        returnValue = F("Max-Schuster-Str.");
        break;
    }
    case 218499:
    {
        returnValue = F("Max-Schwall-Str.");
        break;
    }
    case 218500:
    {
        returnValue = F("Max-Schwarz-Str.");
        break;
    }
    case 218501:
    {
        returnValue = F("Max-Schwarze-Str.");
        break;
    }
    case 218502:
    {
        returnValue = F("Max-Schwarze-Weg");
        break;
    }
    case 218503:
    {
        returnValue = F("Max-Schweinlin-Str.");
        break;
    }
    case 218504:
    {
        returnValue = F("Max-Schäfer-Steig");
        break;
    }
    case 218505:
    {
        returnValue = F("Max-Schäller-Str.");
        break;
    }
    case 218506:
    {
        returnValue = F("Max-Schönenberg-Str.");
        break;
    }
    case 218507:
    {
        returnValue = F("Max-Seeboth-Str.");
        break;
    }
    case 218508:
    {
        returnValue = F("Max-Seifriz-Str.");
        break;
    }
    case 218509:
    {
        returnValue = F("Max-Sens-Platz");
        break;
    }
    case 218510:
    {
        returnValue = F("Max-Sievogt-Str.");
        break;
    }
    case 218511:
    {
        returnValue = F("Max-Slevogt-Hof");
        break;
    }
    case 218512:
    {
        returnValue = F("Max-Slevogt-Str.");
        break;
    }
    case 218513:
    {
        returnValue = F("Max-Slevogt-Weg");
        break;
    }
    case 218514:
    {
        returnValue = F("Max-Spenger-Str.");
        break;
    }
    case 218515:
    {
        returnValue = F("Max-Stangl-Str.");
        break;
    }
    case 218516:
    {
        returnValue = F("Max-Steen-Weg");
        break;
    }
    case 218517:
    {
        returnValue = F("Max-Steenbeck-Str.");
        break;
    }
    case 218518:
    {
        returnValue = F("Max-Steinleitner-Str.");
        break;
    }
    case 218519:
    {
        returnValue = F("Max-Stengl-Ring");
        break;
    }
    case 218520:
    {
        returnValue = F("Max-Stieler-Str.");
        break;
    }
    case 218521:
    {
        returnValue = F("Max-Stirner-Str.");
        break;
    }
    case 218522:
    {
        returnValue = F("Max-Stock-Str.");
        break;
    }
    case 218523:
    {
        returnValue = F("Max-Stoll-Str.");
        break;
    }
    case 218524:
    {
        returnValue = F("Max-Storfinger-Str.");
        break;
    }
    case 218525:
    {
        returnValue = F("Max-Str.nmeyer-Str.");
        break;
    }
    case 218526:
    {
        returnValue = F("Max-Strauss-Weg");
        break;
    }
    case 218527:
    {
        returnValue = F("Max-Stromeyer-Str.");
        break;
    }
    case 218528:
    {
        returnValue = F("Max-Suhrbier-Str.");
        break;
    }
    case 218529:
    {
        returnValue = F("Max-Swoboda-Str.");
        break;
    }
    case 218530:
    {
        returnValue = F("Max-Taube-Weg");
        break;
    }
    case 218531:
    {
        returnValue = F("Max-Taut-Str.");
        break;
    }
    case 218532:
    {
        returnValue = F("Max-Teichmann-Str.");
        break;
    }
    case 218533:
    {
        returnValue = F("Max-Thormann-Platz");
        break;
    }
    case 218534:
    {
        returnValue = F("Max-Tobias-Weg");
        break;
    }
    case 218535:
    {
        returnValue = F("Max-Traber-Str.");
        break;
    }
    case 218536:
    {
        returnValue = F("Max-Tretter-Str.");
        break;
    }
    case 218537:
    {
        returnValue = F("Max-Türpe-Str.");
        break;
    }
    case 218538:
    {
        returnValue = F("Max-Uhrmann-Str.");
        break;
    }
    case 218539:
    {
        returnValue = F("Max-Valentin-Str.");
        break;
    }
    case 218540:
    {
        returnValue = F("Max-Verspohl-Str.");
        break;
    }
    case 218541:
    {
        returnValue = F("Max-Viereck-Str.");
        break;
    }
    case 218542:
    {
        returnValue = F("Max-Volmer-Str.");
        break;
    }
    case 218543:
    {
        returnValue = F("Max-Voß-Str.");
        break;
    }
    case 218544:
    {
        returnValue = F("Max-Wald-Str.");
        break;
    }
    case 218545:
    {
        returnValue = F("Max-Wartemann-Str.");
        break;
    }
    case 218546:
    {
        returnValue = F("Max-Weber-Str.");
        break;
    }
    case 218547:
    {
        returnValue = F("Max-Weigelt-Str.");
        break;
    }
    case 218548:
    {
        returnValue = F("Max-Weinberg-Str.");
        break;
    }
    case 218549:
    {
        returnValue = F("Max-Weishaupt-Str.");
        break;
    }
    case 218550:
    {
        returnValue = F("Max-Welcker-Weg");
        break;
    }
    case 218551:
    {
        returnValue = F("Max-Wenzel-Platz");
        break;
    }
    case 218552:
    {
        returnValue = F("Max-Wenzel-Str.");
        break;
    }
    case 218553:
    {
        returnValue = F("Max-Werner-Str.");
        break;
    }
    case 218554:
    {
        returnValue = F("Max-Wetzel-Str.");
        break;
    }
    case 218555:
    {
        returnValue = F("Max-Wieland-Str.");
        break;
    }
    case 218556:
    {
        returnValue = F("Max-Wien-Platz");
        break;
    }
    case 218557:
    {
        returnValue = F("Max-Wiesent-Str.");
        break;
    }
    case 218558:
    {
        returnValue = F("Max-Wiethoff-Str.");
        break;
    }
    case 218559:
    {
        returnValue = F("Max-Will-Str.");
        break;
    }
    case 218560:
    {
        returnValue = F("Max-Willner Platz");
        break;
    }
    case 218561:
    {
        returnValue = F("Max-Wimmer-Ring");
        break;
    }
    case 218562:
    {
        returnValue = F("Max-Windmüller-Str.");
        break;
    }
    case 218563:
    {
        returnValue = F("Max-Wissner-Str.");
        break;
    }
    case 218564:
    {
        returnValue = F("Max-Wittmann-Str.");
        break;
    }
    case 218565:
    {
        returnValue = F("Max-Woelm-Str.");
        break;
    }
    case 218566:
    {
        returnValue = F("Max-Wolf-Str.");
        break;
    }
    case 218567:
    {
        returnValue = F("Max-Wolff-Str.");
        break;
    }
    case 218568:
    {
        returnValue = F("Max-Wundel-Str.");
        break;
    }
    case 218569:
    {
        returnValue = F("Max-Zimmermann-Str.");
        break;
    }
    case 218570:
    {
        returnValue = F("Max-Zugschwerdt-Str.");
        break;
    }
    case 218571:
    {
        returnValue = F("Max-und-Moritz-Str.");
        break;
    }
    case 218572:
    {
        returnValue = F("Max-und-Moritz-Weg");
        break;
    }
    case 218573:
    {
        returnValue = F("Max-v.-Eyth-Str.");
        break;
    }
    case 218574:
    {
        returnValue = F("Max-von-Eyth-Str.");
        break;
    }
    case 218575:
    {
        returnValue = F("Max-von-Geyr-Str.");
        break;
    }
    case 218576:
    {
        returnValue = F("Max-von-Laue-Ring");
        break;
    }
    case 218577:
    {
        returnValue = F("Max-von-Laue-Str.");
        break;
    }
    case 218578:
    {
        returnValue = F("Max-von-Laue-Weg");
        break;
    }
    case 218579:
    {
        returnValue = F("Max-von-Müller-Str.");
        break;
    }
    case 218580:
    {
        returnValue = F("Max-von-Oppenheim-Weg");
        break;
    }
    case 218581:
    {
        returnValue = F("Max-von-Pettenkofer-Str.");
        break;
    }
    case 218582:
    {
        returnValue = F("Max-von-Schenkendorf-Str.");
        break;
    }
    case 218583:
    {
        returnValue = F("Max-von-Venningen-Str.");
        break;
    }
    case 218584:
    {
        returnValue = F("Max-von-der-Grün-Str.");
        break;
    }
    case 218585:
    {
        returnValue = F("Maxallee");
        break;
    }
    case 218586:
    {
        returnValue = F("Maxau");
        break;
    }
    case 218587:
    {
        returnValue = F("Maxauer Str.");
        break;
    }
    case 218588:
    {
        returnValue = F("Maxbergweg");
        break;
    }
    case 218589:
    {
        returnValue = F("Maxbrunnenstr.");
        break;
    }
    case 218590:
    {
        returnValue = F("Maxbrücke");
        break;
    }
    case 218591:
    {
        returnValue = F("Maxburgring");
        break;
    }
    case 218592:
    {
        returnValue = F("Maxburgstr.");
        break;
    }
    case 218593:
    {
        returnValue = F("Maxburgweg");
        break;
    }
    case 218594:
    {
        returnValue = F("Maxdorf");
        break;
    }
    case 218595:
    {
        returnValue = F("Maxdorfer Allee");
        break;
    }
    case 218596:
    {
        returnValue = F("Maxdorfer Hauptstr.");
        break;
    }
    case 218597:
    {
        returnValue = F("Maxdorfer Str.");
        break;
    }
    case 218598:
    {
        returnValue = F("Maxdorfer Weg");
        break;
    }
    case 218599:
    {
        returnValue = F("Maxeinsmühle");
        break;
    }
    case 218600:
    {
        returnValue = F("Maxener Str.");
        break;
    }
    case 218601:
    {
        returnValue = F("Maxengäßle");
        break;
    }
    case 218602:
    {
        returnValue = F("Maxenlohe");
        break;
    }
    case 218603:
    {
        returnValue = F("Maxfeldhof");
        break;
    }
    case 218604:
    {
        returnValue = F("Maxgasse");
        break;
    }
    case 218605:
    {
        returnValue = F("Maxgrund");
        break;
    }
    case 218606:
    {
        returnValue = F("Maxhafen");
        break;
    }
    case 218607:
    {
        returnValue = F("Maxhan");
        break;
    }
    case 218608:
    {
        returnValue = F("Maxhausweg");
        break;
    }
    case 218609:
    {
        returnValue = F("Maxhof");
        break;
    }
    case 218610:
    {
        returnValue = F("Maxhof Fußweg");
        break;
    }
    case 218611:
    {
        returnValue = F("Maxhofen");
        break;
    }
    case 218612:
    {
        returnValue = F("Maxhofener Str.");
        break;
    }
    case 218613:
    {
        returnValue = F("Maxhofweg");
        break;
    }
    case 218614:
    {
        returnValue = F("Maxhütte");
        break;
    }
    case 218615:
    {
        returnValue = F("Maxhüttenstr.");
        break;
    }
    case 218616:
    {
        returnValue = F("Maxhütter Str.");
        break;
    }
    case 218617:
    {
        returnValue = F("Maxie-Wander-Ring");
        break;
    }
    case 218618:
    {
        returnValue = F("Maxie-Wander-Str.");
        break;
    }
    case 218619:
    {
        returnValue = F("Maxim-Gork-Str.");
        break;
    }
    case 218620:
    {
        returnValue = F("Maxim-Gorki-Platz");
        break;
    }
    case 218621:
    {
        returnValue = F("Maxim-Gorki-Ring");
        break;
    }
    case 218622:
    {
        returnValue = F("Maxim-Gorki-Str.");
        break;
    }
    case 218623:
    {
        returnValue = F("Maxim-Gorki-Weg");
        break;
    }
    case 218624:
    {
        returnValue = F("Maxim-Gorkij-Str.");
        break;
    }
    case 218625:
    {
        returnValue = F("Maximilian Weyhe Promenade");
        break;
    }
    case 218626:
    {
        returnValue = F("Maximilian-Aschenauer-Str.");
        break;
    }
    case 218627:
    {
        returnValue = F("Maximilian-Bentele-Str.");
        break;
    }
    case 218628:
    {
        returnValue = F("Maximilian-F.-Weyhe-Weg");
        break;
    }
    case 218629:
    {
        returnValue = F("Maximilian-Franz-Str.");
        break;
    }
    case 218630:
    {
        returnValue = F("Maximilian-Fratscher-Str.");
        break;
    }
    case 218631:
    {
        returnValue = F("Maximilian-Geräumt");
        break;
    }
    case 218632:
    {
        returnValue = F("Maximilian-Gönner-Str.");
        break;
    }
    case 218633:
    {
        returnValue = F("Maximilian-Haller-Str.");
        break;
    }
    case 218634:
    {
        returnValue = F("Maximilian-Heinrich-Platz");
        break;
    }
    case 218635:
    {
        returnValue = F("Maximilian-Karl-Str.");
        break;
    }
    case 218636:
    {
        returnValue = F("Maximilian-Kolbe Str.");
        break;
    }
    case 218637:
    {
        returnValue = F("Maximilian-Kolbe-Allee");
        break;
    }
    case 218638:
    {
        returnValue = F("Maximilian-Kolbe-Platz");
        break;
    }
    case 218639:
    {
        returnValue = F("Maximilian-Kolbe-Str.");
        break;
    }
    case 218640:
    {
        returnValue = F("Maximilian-Kolbe-Weg");
        break;
    }
    case 218641:
    {
        returnValue = F("Maximilian-Kottmann-Platz");
        break;
    }
    case 218642:
    {
        returnValue = F("Maximilian-Lorenz-Str.");
        break;
    }
    case 218643:
    {
        returnValue = F("Maximilian-Philipp-Str.");
        break;
    }
    case 218644:
    {
        returnValue = F("Maximilian-Puchhauser-Weg");
        break;
    }
    case 218645:
    {
        returnValue = F("Maximilian-Str.");
        break;
    }
    case 218646:
    {
        returnValue = F("Maximilian-Str.r-Str.");
        break;
    }
    case 218647:
    {
        returnValue = F("Maximilian-Thumm-Weg");
        break;
    }
    case 218648:
    {
        returnValue = F("Maximilian-Ulrich-Str.");
        break;
    }
    case 218649:
    {
        returnValue = F("Maximilian-Welsch-Str.");
        break;
    }
    case 218650:
    {
        returnValue = F("Maximilian-Weyhe-Allee");
        break;
    }
    case 218651:
    {
        returnValue = F("Maximilian-Weyhe-Str.");
        break;
    }
    case 218652:
    {
        returnValue = F("Maximilian-von-Dziembowski-Str.");
        break;
    }
    case 218653:
    {
        returnValue = F("Maximilian-von-Welsch-Str.");
        break;
    }
    case 218654:
    {
        returnValue = F("Maximilianplatz");
        break;
    }
    case 218655:
    {
        returnValue = F("Maximilians-Geräumt");
        break;
    }
    case 218656:
    {
        returnValue = F("Maximiliansauer Weg");
        break;
    }
    case 218657:
    {
        returnValue = F("Maximiliansbrücke");
        break;
    }
    case 218658:
    {
        returnValue = F("Maximilianshof");
        break;
    }
    case 218659:
    {
        returnValue = F("Maximiliansplatz");
        break;
    }
    case 218660:
    {
        returnValue = F("Maximiliansreitweg");
        break;
    }
    case 218661:
    {
        returnValue = F("Maximiliansstr.");
        break;
    }
    case 218662:
    {
        returnValue = F("Maximilianstr.");
        break;
    }
    case 218663:
    {
        returnValue = F("Maximiliansweg");
        break;
    }
    case 218664:
    {
        returnValue = F("Maximiliantunnel");
        break;
    }
    case 218665:
    {
        returnValue = F("Maximilianweg");
        break;
    }
    case 218666:
    {
        returnValue = F("Maximillianstr.");
        break;
    }
    case 218667:
    {
        returnValue = F("Maximiner Wäldchen");
        break;
    }
    case 218668:
    {
        returnValue = F("Maximineracht");
        break;
    }
    case 218669:
    {
        returnValue = F("Maximinerhof");
        break;
    }
    case 218670:
    {
        returnValue = F("Maximinerplatz");
        break;
    }
    case 218671:
    {
        returnValue = F("Maximinerstr.");
        break;
    }
    case 218672:
    {
        returnValue = F("Maximinerweg");
        break;
    }
    case 218673:
    {
        returnValue = F("Maximinstr.");
        break;
    }
    case 218674:
    {
        returnValue = F("Maximus-Urbanus-Str.");
        break;
    }
    case 218675:
    {
        returnValue = F("Maximus-von-Imhof-Forum");
        break;
    }
    case 218676:
    {
        returnValue = F("Maxlrainer Str.");
        break;
    }
    case 218677:
    {
        returnValue = F("Maxlrainerweg");
        break;
    }
    case 218678:
    {
        returnValue = F("Maxpassage");
        break;
    }
    case 218679:
    {
        returnValue = F("Maxplatz");
        break;
    }
    case 218680:
    {
        returnValue = F("Maxrain");
        break;
    }
    case 218681:
    {
        returnValue = F("Maxreuther Weg");
        break;
    }
    case 218682:
    {
        returnValue = F("Maxsainer Str.");
        break;
    }
    case 218683:
    {
        returnValue = F("Maxschachtsiedlung");
        break;
    }
    case 218684:
    {
        returnValue = F("Maxschachtstr.");
        break;
    }
    case 218685:
    {
        returnValue = F("Maxstadtstr.");
        break;
    }
    case 218686:
    {
        returnValue = F("Maxstr.");
        break;
    }
    case 218687:
    {
        returnValue = F("Maxweg");
        break;
    }
    case 218688:
    {
        returnValue = F("Maxweilerstr.");
        break;
    }
    case 218689:
    {
        returnValue = F("Maxwell Boulevard");
        break;
    }
    case 218690:
    {
        returnValue = F("MaxxTrail");
        break;
    }
    case 218691:
    {
        returnValue = F("Max´n Stog");
        break;
    }
    case 218692:
    {
        returnValue = F("Maxéville-Ring");
        break;
    }
    case 218693:
    {
        returnValue = F("May");
        break;
    }
    case 218694:
    {
        returnValue = F("Maybacher Weg");
        break;
    }
    case 218695:
    {
        returnValue = F("Maybachhof");
        break;
    }
    case 218696:
    {
        returnValue = F("Maybachstr.");
        break;
    }
    case 218697:
    {
        returnValue = F("Maybachweg");
        break;
    }
    case 218698:
    {
        returnValue = F("Mayenbergstr.");
        break;
    }
    case 218699:
    {
        returnValue = F("Mayenbrook");
        break;
    }
    case 218700:
    {
        returnValue = F("Mayener Grubenfeld");
        break;
    }
    case 218701:
    {
        returnValue = F("Mayener Hohl");
        break;
    }
    case 218702:
    {
        returnValue = F("Mayener Str.");
        break;
    }
    case 218703:
    {
        returnValue = F("Mayenfeldstr.");
        break;
    }
    case 218704:
    {
        returnValue = F("Mayenfischstr.");
        break;
    }
    case 218705:
    {
        returnValue = F("Mayenhoog");
        break;
    }
    case 218706:
    {
        returnValue = F("Mayenne-Ring");
        break;
    }
    case 218707:
    {
        returnValue = F("Mayenner Str.");
        break;
    }
    case 218708:
    {
        returnValue = F("Mayenrainweg");
        break;
    }
    case 218709:
    {
        returnValue = F("Mayer-Alberti-Str.");
        break;
    }
    case 218710:
    {
        returnValue = F("Mayer-Bergwald-Str.");
        break;
    }
    case 218711:
    {
        returnValue = F("Mayer-Franken-Str.");
        break;
    }
    case 218712:
    {
        returnValue = F("Mayerbacherstr.");
        break;
    }
    case 218713:
    {
        returnValue = F("Mayerbachstr.");
        break;
    }
    case 218714:
    {
        returnValue = F("Mayerfeld");
        break;
    }
    case 218715:
    {
        returnValue = F("Mayergasse");
        break;
    }
    case 218716:
    {
        returnValue = F("Mayerhof");
        break;
    }
    case 218717:
    {
        returnValue = F("Mayerhofer Str.");
        break;
    }
    case 218718:
    {
        returnValue = F("Mayerhofstr.");
        break;
    }
    case 218719:
    {
        returnValue = F("Mayerhofweg");
        break;
    }
    case 218720:
    {
        returnValue = F("Mayerholzweg");
        break;
    }
    case 218721:
    {
        returnValue = F("Mayers Gärten");
        break;
    }
    case 218722:
    {
        returnValue = F("Mayerskamp");
        break;
    }
    case 218723:
    {
        returnValue = F("Mayerstr.");
        break;
    }
    case 218724:
    {
        returnValue = F("Mayersweg");
        break;
    }
    case 218725:
    {
        returnValue = F("Mayersäge");
        break;
    }
    case 218726:
    {
        returnValue = F("Mayerweg");
        break;
    }
    case 218727:
    {
        returnValue = F("Mayerwiese");
        break;
    }
    case 218728:
    {
        returnValue = F("Maygadessen");
        break;
    }
    case 218729:
    {
        returnValue = F("Mayinger Str.");
        break;
    }
    case 218730:
    {
        returnValue = F("Mayland");
        break;
    }
    case 218731:
    {
        returnValue = F("Maylandweg");
        break;
    }
    case 218732:
    {
        returnValue = F("Mayr-Nusser-Weg");
        break;
    }
    case 218733:
    {
        returnValue = F("Mayrbreite");
        break;
    }
    case 218734:
    {
        returnValue = F("Mayrfeld");
        break;
    }
    case 218735:
    {
        returnValue = F("Mayrhalde");
        break;
    }
    case 218736:
    {
        returnValue = F("Mayrhofener Weg");
        break;
    }
    case 218737:
    {
        returnValue = F("Mayrhofer Ring");
        break;
    }
    case 218738:
    {
        returnValue = F("Mayrichstr.");
        break;
    }
    case 218739:
    {
        returnValue = F("Mayrstr.");
        break;
    }
    case 218740:
    {
        returnValue = F("Mayrweg");
        break;
    }
    case 218741:
    {
        returnValue = F("Maystr.");
        break;
    }
    case 218742:
    {
        returnValue = F("Maysweg");
        break;
    }
    case 218743:
    {
        returnValue = F("Mayter Weg");
        break;
    }
    case 218744:
    {
        returnValue = F("Maythal");
        break;
    }
    case 218745:
    {
        returnValue = F("Maytoft");
        break;
    }
    case 218746:
    {
        returnValue = F("Mayweg");
        break;
    }
    case 218747:
    {
        returnValue = F("Mazenodweg");
        break;
    }
    case 218748:
    {
        returnValue = F("Mazillisstr.");
        break;
    }
    case 218749:
    {
        returnValue = F("Mazmannstr.");
        break;
    }
    case 218750:
    {
        returnValue = F("Maßbacher Höhe");
        break;
    }
    case 218751:
    {
        returnValue = F("Maßbacher Str.");
        break;
    }
    case 218752:
    {
        returnValue = F("Maßbacher Weg");
        break;
    }
    case 218753:
    {
        returnValue = F("Maßbergstr.");
        break;
    }
    case 218754:
    {
        returnValue = F("Maßbruch");
        break;
    }
    case 218755:
    {
        returnValue = F("Maßbrucher Weg");
        break;
    }
    case 218756:
    {
        returnValue = F("Maßbruchweg");
        break;
    }
    case 218757:
    {
        returnValue = F("Maßbühlweg");
        break;
    }
    case 218758:
    {
        returnValue = F("Maßdorfer Str.");
        break;
    }
    case 218759:
    {
        returnValue = F("Maßendorf");
        break;
    }
    case 218760:
    {
        returnValue = F("Maßfelder Weg");
        break;
    }
    case 218761:
    {
        returnValue = F("Maßholder Weg");
        break;
    }
    case 218762:
    {
        returnValue = F("Maßholderbaumweg");
        break;
    }
    case 218763:
    {
        returnValue = F("Maßholdersteige");
        break;
    }
    case 218764:
    {
        returnValue = F("Maßholderstr.");
        break;
    }
    case 218765:
    {
        returnValue = F("Maßholderweg");
        break;
    }
    case 218766:
    {
        returnValue = F("Maßkamp");
        break;
    }
    case 218767:
    {
        returnValue = F("Maßkopf");
        break;
    }
    case 218768:
    {
        returnValue = F("Maßlauer Linie");
        break;
    }
    case 218769:
    {
        returnValue = F("Maßlauer Str.");
        break;
    }
    case 218770:
    {
        returnValue = F("Maßlow");
        break;
    }
    case 218771:
    {
        returnValue = F("Maßlow Ausbau");
        break;
    }
    case 218772:
    {
        returnValue = F("Maßlower Reihe");
        break;
    }
    case 218773:
    {
        returnValue = F("Maßmannstr.");
        break;
    }
    case 218774:
    {
        returnValue = F("Maßnitzer Dorfstr.");
        break;
    }
    case 218775:
    {
        returnValue = F("Maßnitzer Weg");
        break;
    }
    case 218776:
    {
        returnValue = F("Maßpforte");
        break;
    }
    case 218777:
    {
        returnValue = F("Maßstr.");
        break;
    }
    case 218778:
    {
        returnValue = F("Maßweg");
        break;
    }
    case 218779:
    {
        returnValue = F("Maßäcker");
        break;
    }
    case 218780:
    {
        returnValue = F("Mc Kinley Drive");
        break;
    }
    case 218781:
    {
        returnValue = F("McChord Road");
        break;
    }
    case 218782:
    {
        returnValue = F("McDonald's Außengelände");
        break;
    }
    case 218783:
    {
        returnValue = F("McGinnis Street");
        break;
    }
    case 218784:
    {
        returnValue = F("McKeeplatz");
        break;
    }
    case 218785:
    {
        returnValue = F("Meanstr.");
        break;
    }
    case 218786:
    {
        returnValue = F("Mebartweg");
        break;
    }
    case 218787:
    {
        returnValue = F("Meboldstr.");
        break;
    }
    case 218788:
    {
        returnValue = F("Mebritz");
        break;
    }
    case 218789:
    {
        returnValue = F("Mebusweg");
        break;
    }
    case 218790:
    {
        returnValue = F("Mechelgrüner Str.");
        break;
    }
    case 218791:
    {
        returnValue = F("Mechelgrüner Weg");
        break;
    }
    case 218792:
    {
        returnValue = F("Mechelner Platz");
        break;
    }
    case 218793:
    {
        returnValue = F("Mechelnkamp");
        break;
    }
    case 218794:
    {
        returnValue = F("Mechelwinder Weg");
        break;
    }
    case 218795:
    {
        returnValue = F("Mechenharder Str.");
        break;
    }
    case 218796:
    {
        returnValue = F("Mechenharder Str. (Streit)");
        break;
    }
    case 218797:
    {
        returnValue = F("Mechenharder Weg");
        break;
    }
    case 218798:
    {
        returnValue = F("Mechenseer Str.");
        break;
    }
    case 218799:
    {
        returnValue = F("Mecherner Str.");
        break;
    }
    case 218800:
    {
        returnValue = F("Mechernicher Str.");
        break;
    }
    case 218801:
    {
        returnValue = F("Mechernicher Weg");
        break;
    }
    case 218802:
    {
        returnValue = F("Mechlenreuth");
        break;
    }
    case 218803:
    {
        returnValue = F("Mechower Str.");
        break;
    }
    case 218804:
    {
        returnValue = F("Mechower Weg");
        break;
    }
    case 218805:
    {
        returnValue = F("Mechtelstr.");
        break;
    }
    case 218806:
    {
        returnValue = F("Mechtenbergstr.");
        break;
    }
    case 218807:
    {
        returnValue = F("Mechterser Berg");
        break;
    }
    case 218808:
    {
        returnValue = F("Mechterser Weg");
        break;
    }
    case 218809:
    {
        returnValue = F("Mechtersheimer Str.");
        break;
    }
    case 218810:
    {
        returnValue = F("Mechterstädter Str.");
        break;
    }
    case 218811:
    {
        returnValue = F("Mechthildenstr.");
        break;
    }
    case 218812:
    {
        returnValue = F("Mechthildisstr.");
        break;
    }
    case 218813:
    {
        returnValue = F("Mechthildplatz");
        break;
    }
    case 218814:
    {
        returnValue = F("Mechthildshausener Str.");
        break;
    }
    case 218815:
    {
        returnValue = F("Mechthildstr.");
        break;
    }
    case 218816:
    {
        returnValue = F("Mechthildweg");
        break;
    }
    case 218817:
    {
        returnValue = F("Mechtild-Vieracker-Str.");
        break;
    }
    case 218818:
    {
        returnValue = F("Mechtildisstr.");
        break;
    }
    case 218819:
    {
        returnValue = F("Mechtildisweg");
        break;
    }
    case 218820:
    {
        returnValue = F("Mechwartstr.");
        break;
    }
    case 218821:
    {
        returnValue = F("Mecka");
        break;
    }
    case 218822:
    {
        returnValue = F("Meckatz");
        break;
    }
    case 218823:
    {
        returnValue = F("Meckauerweg");
        break;
    }
    case 218824:
    {
        returnValue = F("Meckbach-Friedewald");
        break;
    }
    case 218825:
    {
        returnValue = F("Meckbacher Str.");
        break;
    }
    case 218826:
    {
        returnValue = F("Meckelbachweg");
        break;
    }
    case 218827:
    {
        returnValue = F("Meckeler Str.");
        break;
    }
    case 218828:
    {
        returnValue = F("Meckelhof");
        break;
    }
    case 218829:
    {
        returnValue = F("Meckelsheimer Weg");
        break;
    }
    case 218830:
    {
        returnValue = F("Meckelsmühlweg");
        break;
    }
    case 218831:
    {
        returnValue = F("Meckelstedter Str.");
        break;
    }
    case 218832:
    {
        returnValue = F("Meckelstr.");
        break;
    }
    case 218833:
    {
        returnValue = F("Meckelweger Feld");
        break;
    }
    case 218834:
    {
        returnValue = F("Meckelweger Kirchweg");
        break;
    }
    case 218835:
    {
        returnValue = F("Meckelweger Str.");
        break;
    }
    case 218836:
    {
        returnValue = F("Meckenbacher Weg");
        break;
    }
    case 218837:
    {
        returnValue = F("Meckenemstr.");
        break;
    }
    case 218838:
    {
        returnValue = F("Meckenhausen A");
        break;
    }
    case 218839:
    {
        returnValue = F("Meckenhausen B");
        break;
    }
    case 218840:
    {
        returnValue = F("Meckenhausen C");
        break;
    }
    case 218841:
    {
        returnValue = F("Meckenhausen D");
        break;
    }
    case 218842:
    {
        returnValue = F("Meckenhausen E");
        break;
    }
    case 218843:
    {
        returnValue = F("Meckenhausen F");
        break;
    }
    case 218844:
    {
        returnValue = F("Meckenhausen G");
        break;
    }
    case 218845:
    {
        returnValue = F("Meckenhausen H");
        break;
    }
    case 218846:
    {
        returnValue = F("Meckenhausen I");
        break;
    }
    case 218847:
    {
        returnValue = F("Meckenhausen K");
        break;
    }
    case 218848:
    {
        returnValue = F("Meckenhausen L");
        break;
    }
    case 218849:
    {
        returnValue = F("Meckenhausen M");
        break;
    }
    case 218850:
    {
        returnValue = F("Meckenhausener Str.");
        break;
    }
    case 218851:
    {
        returnValue = F("Meckenheimer Allee");
        break;
    }
    case 218852:
    {
        returnValue = F("Meckenheimer Str.");
        break;
    }
    case 218853:
    {
        returnValue = F("Meckenheimer Weg");
        break;
    }
    case 218854:
    {
        returnValue = F("Meckenloher Str.");
        break;
    }
    case 218855:
    {
        returnValue = F("Meckenloher Weg");
        break;
    }
    case 218856:
    {
        returnValue = F("Meckenschlagweg");
        break;
    }
    case 218857:
    {
        returnValue = F("Meckergasse");
        break;
    }
    case 218858:
    {
        returnValue = F("Meckerndorfer Ring");
        break;
    }
    case 218859:
    {
        returnValue = F("Meckerndorfer Str.");
        break;
    }
    case 218860:
    {
        returnValue = F("Meckerndorfer Weg");
        break;
    }
    case 218861:
    {
        returnValue = F("Meckerstr.");
        break;
    }
    case 218862:
    {
        returnValue = F("Meckesheimer Str.");
        break;
    }
    case 218863:
    {
        returnValue = F("Meckesheimer Weg");
        break;
    }
    case 218864:
    {
        returnValue = F("Meckeweg");
        break;
    }
    case 218865:
    {
        returnValue = F("Meckfelder Str.");
        break;
    }
    case 218866:
    {
        returnValue = F("Meckfelder Weg");
        break;
    }
    case 218867:
    {
        returnValue = F("Meckhofer Feld");
        break;
    }
    case 218868:
    {
        returnValue = F("Meckinghover Weg");
        break;
    }
    case 218869:
    {
        returnValue = F("Mecklarer Str.");
        break;
    }
    case 218870:
    {
        returnValue = F("Mecklenburger Allee");
        break;
    }
    case 218871:
    {
        returnValue = F("Mecklenburger Ende");
        break;
    }
    case 218872:
    {
        returnValue = F("Mecklenburger Kuhl");
        break;
    }
    case 218873:
    {
        returnValue = F("Mecklenburger Landstr.");
        break;
    }
    case 218874:
    {
        returnValue = F("Mecklenburger Ring");
        break;
    }
    case 218875:
    {
        returnValue = F("Mecklenburger Str.");
        break;
    }
    case 218876:
    {
        returnValue = F("Mecklenburger Str. Moltow");
        break;
    }
    case 218877:
    {
        returnValue = F("Mecklenburger Weg");
        break;
    }
    case 218878:
    {
        returnValue = F("Mecklenburgerstr.");
        break;
    }
    case 218879:
    {
        returnValue = F("Mecklenburgische Str.");
        break;
    }
    case 218880:
    {
        returnValue = F("Mecklenburgring");
        break;
    }
    case 218881:
    {
        returnValue = F("Mecklenburgsdamm");
        break;
    }
    case 218882:
    {
        returnValue = F("Mecklenburgstr.");
        break;
    }
    case 218883:
    {
        returnValue = F("Mecklenburgweg");
        break;
    }
    case 218884:
    {
        returnValue = F("Mecklenhorster Str.");
        break;
    }
    case 218885:
    {
        returnValue = F("Mecklinger Str.");
        break;
    }
    case 218886:
    {
        returnValue = F("Mecklinghauser Str.");
        break;
    }
    case 218887:
    {
        returnValue = F("Meckstr.");
        break;
    }
    case 218888:
    {
        returnValue = F("MedXpert-Kreisel");
        break;
    }
    case 218889:
    {
        returnValue = F("Medarder Weg");
        break;
    }
    case 218890:
    {
        returnValue = F("Medardstr.");
        break;
    }
    case 218891:
    {
        returnValue = F("Medardusring");
        break;
    }
    case 218892:
    {
        returnValue = F("Medardusstr.");
        break;
    }
    case 218893:
    {
        returnValue = F("Medardusweg");
        break;
    }
    case 218894:
    {
        returnValue = F("Medauweg");
        break;
    }
    case 218895:
    {
        returnValue = F("Medbacher Kreisel");
        break;
    }
    case 218896:
    {
        returnValue = F("Medbacher Str.");
        break;
    }
    case 218897:
    {
        returnValue = F("Medbacher Weg");
        break;
    }
    case 218898:
    {
        returnValue = F("Meddagskamp");
        break;
    }
    case 218899:
    {
        returnValue = F("Meddelskamp");
        break;
    }
    case 218900:
    {
        returnValue = F("Meddenbick");
        break;
    }
    case 218901:
    {
        returnValue = F("Meddersheimer Str.");
        break;
    }
    case 218902:
    {
        returnValue = F("Meddingheide");
        break;
    }
    case 218903:
    {
        returnValue = F("Medebacher Landstr.");
        break;
    }
    case 218904:
    {
        returnValue = F("Medebacher Str.");
        break;
    }
    case 218905:
    {
        returnValue = F("Medebekskamp");
        break;
    }
    case 218906:
    {
        returnValue = F("Medebekstr.");
        break;
    }
    case 218907:
    {
        returnValue = F("Medebekweg");
        break;
    }
    case 218908:
    {
        returnValue = F("Medefelder Str.");
        break;
    }
    case 218909:
    {
        returnValue = F("Medehop");
        break;
    }
    case 218910:
    {
        returnValue = F("Medelbyer Str.");
        break;
    }
    case 218911:
    {
        returnValue = F("Medelbyer Weg");
        break;
    }
    case 218912:
    {
        returnValue = F("Medeloner Str.");
        break;
    }
    case 218913:
    {
        returnValue = F("Medelsheimer Str.");
        break;
    }
    case 218914:
    {
        returnValue = F("Medelsheimer Weg");
        break;
    }
    case 218915:
    {
        returnValue = F("Medemland");
        break;
    }
    case 218916:
    {
        returnValue = F("Medemsand");
        break;
    }
    case 218917:
    {
        returnValue = F("Medemstade");
        break;
    }
    case 218918:
    {
        returnValue = F("Medemstr.");
        break;
    }
    case 218919:
    {
        returnValue = F("Medemstrot");
        break;
    }
    case 218920:
    {
        returnValue = F("Medenbacher Str.");
        break;
    }
    case 218921:
    {
        returnValue = F("Medenbacher Weg");
        break;
    }
    case 218922:
    {
        returnValue = F("Medenbreite");
        break;
    }
    case 218923:
    {
        returnValue = F("Medenheimer Platz");
        break;
    }
    case 218924:
    {
        returnValue = F("Medenheimer Str.");
        break;
    }
    case 218925:
    {
        returnValue = F("Medererstr.");
        break;
    }
    case 218926:
    {
        returnValue = F("Medericher Str.");
        break;
    }
    case 218927:
    {
        returnValue = F("Mederichstr.");
        break;
    }
    case 218928:
    {
        returnValue = F("Mederns");
        break;
    }
    case 218929:
    {
        returnValue = F("Medernser Altendeich");
        break;
    }
    case 218930:
    {
        returnValue = F("Medersbach");
        break;
    }
    case 218931:
    {
        returnValue = F("Medessener Str.");
        break;
    }
    case 218932:
    {
        returnValue = F("Medeweger Str.");
        break;
    }
    case 218933:
    {
        returnValue = F("Medewitzer Dorfstr.");
        break;
    }
    case 218934:
    {
        returnValue = F("Medewitzer Str.");
        break;
    }
    case 218935:
    {
        returnValue = F("Medewitzer Weg");
        break;
    }
    case 218936:
    {
        returnValue = F("Medi-Globe-Str.");
        break;
    }
    case 218937:
    {
        returnValue = F("Media-Saturn-Str.");
        break;
    }
    case 218938:
    {
        returnValue = F("Mediascher Gasse");
        break;
    }
    case 218939:
    {
        returnValue = F("Mediascher Weg");
        break;
    }
    case 218940:
    {
        returnValue = F("Medicusstr.");
        break;
    }
    case 218941:
    {
        returnValue = F("Medienallee");
        break;
    }
    case 218942:
    {
        returnValue = F("Medienstr.");
        break;
    }
    case 218943:
    {
        returnValue = F("Medinger Allee");
        break;
    }
    case 218944:
    {
        returnValue = F("Medinger Feld");
        break;
    }
    case 218945:
    {
        returnValue = F("Medinger Str.");
        break;
    }
    case 218946:
    {
        returnValue = F("Medinger Weg");
        break;
    }
    case 218947:
    {
        returnValue = F("Medinghovener Str.");
        break;
    }
    case 218948:
    {
        returnValue = F("Medings Gang");
        break;
    }
    case 218949:
    {
        returnValue = F("Medingstr.");
        break;
    }
    case 218950:
    {
        returnValue = F("Medioweg");
        break;
    }
    case 218951:
    {
        returnValue = F("Medipark");
        break;
    }
    case 218952:
    {
        returnValue = F("Medishörn");
        break;
    }
    case 218953:
    {
        returnValue = F("Meditationspfad");
        break;
    }
    case 218954:
    {
        returnValue = F("Meditationsweg");
        break;
    }
    case 218955:
    {
        returnValue = F("MedizinWald Ratzeburg");
        break;
    }
    case 218956:
    {
        returnValue = F("Medlerstr.");
        break;
    }
    case 218957:
    {
        returnValue = F("Medlinger Str.");
        break;
    }
    case 218958:
    {
        returnValue = F("Medlitzer Str.");
        break;
    }
    case 218959:
    {
        returnValue = F("Medmannstr.");
        break;
    }
    case 218960:
    {
        returnValue = F("Medoc Ring");
        break;
    }
    case 218961:
    {
        returnValue = F("Medonstr.");
        break;
    }
    case 218962:
    {
        returnValue = F("Medow Ausbau");
        break;
    }
    case 218963:
    {
        returnValue = F("Medracher Weg");
        break;
    }
    case 218964:
    {
        returnValue = F("Medumer Hof");
        break;
    }
    case 218965:
    {
        returnValue = F("Medumland");
        break;
    }
    case 218966:
    {
        returnValue = F("Medusastr.");
        break;
    }
    case 218967:
    {
        returnValue = F("Medworkring");
        break;
    }
    case 218968:
    {
        returnValue = F("Meeboldstr.");
        break;
    }
    case 218969:
    {
        returnValue = F("Meedemoorweg");
        break;
    }
    case 218970:
    {
        returnValue = F("Meedensdorfer Str.");
        break;
    }
    case 218971:
    {
        returnValue = F("Meedenstr.");
        break;
    }
    case 218972:
    {
        returnValue = F("Meedenstückweg");
        break;
    }
    case 218973:
    {
        returnValue = F("Meedenweg");
        break;
    }
    case 218974:
    {
        returnValue = F("Meederer Str.");
        break;
    }
    case 218975:
    {
        returnValue = F("Meedestr.");
        break;
    }
    case 218976:
    {
        returnValue = F("Meedeweg");
        break;
    }
    case 218977:
    {
        returnValue = F("Meedlandskampen");
        break;
    }
    case 218978:
    {
        returnValue = F("Meedlandsreihe");
        break;
    }
    case 218979:
    {
        returnValue = F("Meedlandstr.");
        break;
    }
    case 218980:
    {
        returnValue = F("Meedlandsweg");
        break;
    }
    case 218981:
    {
        returnValue = F("Meegener Str.");
        break;
    }
    case 218982:
    {
        returnValue = F("Meekerchaussee");
        break;
    }
    case 218983:
    {
        returnValue = F("Meelenwäi");
        break;
    }
    case 218984:
    {
        returnValue = F("Meena-Str.");
        break;
    }
    case 218985:
    {
        returnValue = F("Meendemoorweg");
        break;
    }
    case 218986:
    {
        returnValue = F("Meendstückenweg");
        break;
    }
    case 218987:
    {
        returnValue = F("Meenenkuhle");
        break;
    }
    case 218988:
    {
        returnValue = F("Meenewischen");
        break;
    }
    case 218989:
    {
        returnValue = F("Meenheit");
        break;
    }
    case 218990:
    {
        returnValue = F("Meenheitsweg");
        break;
    }
    case 218991:
    {
        returnValue = F("Meenser Str.");
        break;
    }
    case 218992:
    {
        returnValue = F("Meenser Weg");
        break;
    }
    case 218993:
    {
        returnValue = F("Meente");
        break;
    }
    case 218994:
    {
        returnValue = F("Meentelandshörn");
        break;
    }
    case 218995:
    {
        returnValue = F("Meentelandstr.");
        break;
    }
    case 218996:
    {
        returnValue = F("Meentelandsweg");
        break;
    }
    case 218997:
    {
        returnValue = F("Meentemoorstr.");
        break;
    }
    case 218998:
    {
        returnValue = F("Meenteweg");
        break;
    }
    case 218999:
    {
        returnValue = F("Meentmoorweg");
        break;
    }
    case 219000:
    {
        returnValue = F("Meentviert");
        break;
    }
    case 219001:
    {
        returnValue = F("Meenweg");
        break;
    }
    case 219002:
    {
        returnValue = F("Meeracker");
        break;
    }
    case 219003:
    {
        returnValue = F("Meerackerring");
        break;
    }
    case 219004:
    {
        returnValue = F("Meeramwai");
        break;
    }
    case 219005:
    {
        returnValue = F("Meeraner Str.");
        break;
    }
    case 219006:
    {
        returnValue = F("Meeraner Weg");
        break;
    }
    case 219007:
    {
        returnValue = F("Meerau");
        break;
    }
    case 219008:
    {
        returnValue = F("Meerbachstr.");
        break;
    }
    case 219009:
    {
        returnValue = F("Meerbachweg");
        break;
    }
    case 219010:
    {
        returnValue = F("Meerbecker Str.");
        break;
    }
    case 219011:
    {
        returnValue = F("Meerbergstr.");
        break;
    }
    case 219012:
    {
        returnValue = F("Meerbodenreuth");
        break;
    }
    case 219013:
    {
        returnValue = F("Meerbodenreuther Str.");
        break;
    }
    case 219014:
    {
        returnValue = F("Meerbrauckweg");
        break;
    }
    case 219015:
    {
        returnValue = F("Meerbreiersgässchen");
        break;
    }
    case 219016:
    {
        returnValue = F("Meerbrink");
        break;
    }
    case 219017:
    {
        returnValue = F("Meerbruch");
        break;
    }
    case 219018:
    {
        returnValue = F("Meerbrucherlebnisweg");
        break;
    }
    case 219019:
    {
        returnValue = F("Meerbrücke");
        break;
    }
    case 219020:
    {
        returnValue = F("Meerbuscher Str.");
        break;
    }
    case 219021:
    {
        returnValue = F("Meerbuscher Weg");
        break;
    }
    case 219022:
    {
        returnValue = F("Meerchengasse");
        break;
    }
    case 219023:
    {
        returnValue = F("Meerdammweg");
        break;
    }
    case 219024:
    {
        returnValue = F("Meerdorfer Str.");
        break;
    }
    case 219025:
    {
        returnValue = F("Meerendonker Str.");
        break;
    }
    case 219026:
    {
        returnValue = F("Meerenkopfweg");
        break;
    }
    case 219027:
    {
        returnValue = F("Meerenstieg");
        break;
    }
    case 219028:
    {
        returnValue = F("Meerenweg");
        break;
    }
    case 219029:
    {
        returnValue = F("Meeresblickstr.");
        break;
    }
    case 219030:
    {
        returnValue = F("Meeresrauschen");
        break;
    }
    case 219031:
    {
        returnValue = F("Meeresstr.");
        break;
    }
    case 219032:
    {
        returnValue = F("Meereweg");
        break;
    }
    case 219033:
    {
        returnValue = F("Meerfeld");
        break;
    }
    case 219034:
    {
        returnValue = F("Meerfelder Pfad");
        break;
    }
    case 219035:
    {
        returnValue = F("Meerfeldstr.");
        break;
    }
    case 219036:
    {
        returnValue = F("Meergartenweg");
        break;
    }
    case 219037:
    {
        returnValue = F("Meergasse");
        break;
    }
    case 219038:
    {
        returnValue = F("Meergraben");
        break;
    }
    case 219039:
    {
        returnValue = F("Meergrabenweg");
        break;
    }
    case 219040:
    {
        returnValue = F("Meergrubenstaße");
        break;
    }
    case 219041:
    {
        returnValue = F("Meergrund");
        break;
    }
    case 219042:
    {
        returnValue = F("Meergäßle");
        break;
    }
    case 219043:
    {
        returnValue = F("Meerheck");
        break;
    }
    case 219044:
    {
        returnValue = F("Meerhof");
        break;
    }
    case 219045:
    {
        returnValue = F("Meerhofer Str.");
        break;
    }
    case 219046:
    {
        returnValue = F("Meerhofstr.");
        break;
    }
    case 219047:
    {
        returnValue = F("Meerhofweg");
        break;
    }
    case 219048:
    {
        returnValue = F("Meerholzer Landweg");
        break;
    }
    case 219049:
    {
        returnValue = F("Meerholzer Str.");
        break;
    }
    case 219050:
    {
        returnValue = F("Meerholzweg");
        break;
    }
    case 219051:
    {
        returnValue = F("Meerhook");
        break;
    }
    case 219052:
    {
        returnValue = F("Meerhöfe");
        break;
    }
    case 219053:
    {
        returnValue = F("Meerjungfrausteg");
        break;
    }
    case 219054:
    {
        returnValue = F("Meerkamp");
        break;
    }
    case 219055:
    {
        returnValue = F("Meerkamper Kirchweg");
        break;
    }
    case 219056:
    {
        returnValue = F("Meerkampsweg");
        break;
    }
    case 219057:
    {
        returnValue = F("Meerkatz");
        break;
    }
    case 219058:
    {
        returnValue = F("Meerkatzstr.");
        break;
    }
    case 219059:
    {
        returnValue = F("Meerkeweg");
        break;
    }
    case 219060:
    {
        returnValue = F("Meerkircher Str.");
        break;
    }
    case 219061:
    {
        returnValue = F("Meerkornstr.");
        break;
    }
    case 219062:
    {
        returnValue = F("Meerkuhle");
        break;
    }
    case 219063:
    {
        returnValue = F("Meerlach");
        break;
    }
    case 219064:
    {
        returnValue = F("Meerlacher-Deich-Str.");
        break;
    }
    case 219065:
    {
        returnValue = F("Meermühlenstr.");
        break;
    }
    case 219066:
    {
        returnValue = F("Meernacher Str.");
        break;
    }
    case 219067:
    {
        returnValue = F("Meerpand");
        break;
    }
    case 219068:
    {
        returnValue = F("Meerpfad");
        break;
    }
    case 219069:
    {
        returnValue = F("Meerrettichdorfbrücke");
        break;
    }
    case 219070:
    {
        returnValue = F("Meerrettichdorfstr.");
        break;
    }
    case 219071:
    {
        returnValue = F("Meerrettichgasse");
        break;
    }
    case 219072:
    {
        returnValue = F("Meersburger Str.");
        break;
    }
    case 219073:
    {
        returnValue = F("Meersche");
        break;
    }
    case 219074:
    {
        returnValue = F("Meerschenweg");
        break;
    }
    case 219075:
    {
        returnValue = F("Meerschlader Weg");
        break;
    }
    case 219076:
    {
        returnValue = F("Meerschlag");
        break;
    }
    case 219077:
    {
        returnValue = F("Meerschweinchen");
        break;
    }
    case 219078:
    {
        returnValue = F("Meersenweg");
        break;
    }
    case 219079:
    {
        returnValue = F("Meersfeld");
        break;
    }
    case 219080:
    {
        returnValue = F("Meersgrund");
        break;
    }
    case 219081:
    {
        returnValue = F("Meerspinnstr.");
        break;
    }
    case 219082:
    {
        returnValue = F("Meerssener Str.");
        break;
    }
    case 219083:
    {
        returnValue = F("Meerstallweg");
        break;
    }
    case 219084:
    {
        returnValue = F("Meerstiege");
        break;
    }
    case 219085:
    {
        returnValue = F("Meerstr.");
        break;
    }
    case 219086:
    {
        returnValue = F("Meersweg");
        break;
    }
    case 219087:
    {
        returnValue = F("Meertal");
        break;
    }
    case 219088:
    {
        returnValue = F("Meerwasserfreibad Doroness");
        break;
    }
    case 219089:
    {
        returnValue = F("Meerweg");
        break;
    }
    case 219090:
    {
        returnValue = F("Meerweibchenstr.");
        break;
    }
    case 219091:
    {
        returnValue = F("Meerweinstr.");
        break;
    }
    case 219092:
    {
        returnValue = F("Meerwiese");
        break;
    }
    case 219093:
    {
        returnValue = F("Meerwiesen");
        break;
    }
    case 219094:
    {
        returnValue = F("Meerwiesenstr.");
        break;
    }
    case 219095:
    {
        returnValue = F("Meerwiesenweg");
        break;
    }
    case 219096:
    {
        returnValue = F("Meerwiesertalweg");
        break;
    }
    case 219097:
    {
        returnValue = F("Meeräckerweg");
        break;
    }
    case 219098:
    {
        returnValue = F("Meesche");
        break;
    }
    case 219099:
    {
        returnValue = F("Meeschemorgen");
        break;
    }
    case 219100:
    {
        returnValue = F("Meeschendorf");
        break;
    }
    case 219101:
    {
        returnValue = F("Meeschenkamp");
        break;
    }
    case 219102:
    {
        returnValue = F("Meeschenstr.");
        break;
    }
    case 219103:
    {
        returnValue = F("Meeschesteg");
        break;
    }
    case 219104:
    {
        returnValue = F("Meeschestr.");
        break;
    }
    case 219105:
    {
        returnValue = F("Meescheweg");
        break;
    }
    case 219106:
    {
        returnValue = F("Meeschweg");
        break;
    }
    case 219107:
    {
        returnValue = F("Meesdiek");
        break;
    }
    case 219108:
    {
        returnValue = F("Meesdorfer Str.");
        break;
    }
    case 219109:
    {
        returnValue = F("Meesekamp");
        break;
    }
    case 219110:
    {
        returnValue = F("Meesenbergstr.");
        break;
    }
    case 219111:
    {
        returnValue = F("Meesenburg");
        break;
    }
    case 219112:
    {
        returnValue = F("Meesenhof");
        break;
    }
    case 219113:
    {
        returnValue = F("Meesenmühle");
        break;
    }
    case 219114:
    {
        returnValue = F("Meesenplatz");
        break;
    }
    case 219115:
    {
        returnValue = F("Meesenring");
        break;
    }
    case 219116:
    {
        returnValue = F("Meesenweg");
        break;
    }
    case 219117:
    {
        returnValue = F("Meesgasse");
        break;
    }
    case 219118:
    {
        returnValue = F("Meesiger Damm");
        break;
    }
    case 219119:
    {
        returnValue = F("Meeskwai");
        break;
    }
    case 219120:
    {
        returnValue = F("Meesmannstr.");
        break;
    }
    case 219121:
    {
        returnValue = F("Meessen");
        break;
    }
    case 219122:
    {
        returnValue = F("Meesstr.");
        break;
    }
    case 219123:
    {
        returnValue = F("Meester-Hinderks-Stroat");
        break;
    }
    case 219124:
    {
        returnValue = F("Meester-Vink-Straat");
        break;
    }
    case 219125:
    {
        returnValue = F("Meestereistr.");
        break;
    }
    case 219126:
    {
        returnValue = F("Meestertun");
        break;
    }
    case 219127:
    {
        returnValue = F("Meesterwinkel");
        break;
    }
    case 219128:
    {
        returnValue = F("Meesweg");
        break;
    }
    case 219129:
    {
        returnValue = F("Meetschow-Laasche");
        break;
    }
    case 219130:
    {
        returnValue = F("Meetschower Mastenweg");
        break;
    }
    case 219131:
    {
        returnValue = F("Meetzener Str.");
        break;
    }
    case 219132:
    {
        returnValue = F("Meezener Str.");
        break;
    }
    case 219133:
    {
        returnValue = F("Mefferdatisstr.");
        break;
    }
    case 219134:
    {
        returnValue = F("Meffertstr.");
        break;
    }
    case 219135:
    {
        returnValue = F("Meffertweg");
        break;
    }
    case 219136:
    {
        returnValue = F("Meftlergasse");
        break;
    }
    case 219137:
    {
        returnValue = F("Megamatplatz");
        break;
    }
    case 219138:
    {
        returnValue = F("Megerleweg");
        break;
    }
    case 219139:
    {
        returnValue = F("Megezerweg");
        break;
    }
    case 219140:
    {
        returnValue = F("Meggendorferstr.");
        break;
    }
    case 219141:
    {
        returnValue = F("Meggener Str.");
        break;
    }
    case 219142:
    {
        returnValue = F("Meggerhoff");
        break;
    }
    case 219143:
    {
        returnValue = F("Meggerkamp");
        break;
    }
    case 219144:
    {
        returnValue = F("Megingaudstr.");
        break;
    }
    case 219145:
    {
        returnValue = F("Meginhardstr.");
        break;
    }
    case 219146:
    {
        returnValue = F("Meginoltweg");
        break;
    }
    case 219147:
    {
        returnValue = F("Meglishalde");
        break;
    }
    case 219148:
    {
        returnValue = F("Mehdenweg");
        break;
    }
    case 219149:
    {
        returnValue = F("Mehderitzscher Weg");
        break;
    }
    case 219150:
    {
        returnValue = F("Mehedorfer Str.");
        break;
    }
    case 219151:
    {
        returnValue = F("Mehedorfer Weg");
        break;
    }
    case 219152:
    {
        returnValue = F("Mehlaer Hauptstr.");
        break;
    }
    case 219153:
    {
        returnValue = F("Mehlaer Weg");
        break;
    }
    case 219154:
    {
        returnValue = F("Mehlandsdeich");
        break;
    }
    case 219155:
    {
        returnValue = F("Mehlandstr.");
        break;
    }
    case 219156:
    {
        returnValue = F("Mehlbacher Str.");
        break;
    }
    case 219157:
    {
        returnValue = F("Mehlbachstr.");
        break;
    }
    case 219158:
    {
        returnValue = F("Mehlbachstrift");
        break;
    }
    case 219159:
    {
        returnValue = F("Mehlbachweg");
        break;
    }
    case 219160:
    {
        returnValue = F("Mehlbaum");
        break;
    }
    case 219161:
    {
        returnValue = F("Mehlbaumstr.");
        break;
    }
    case 219162:
    {
        returnValue = F("Mehlbaumweg");
        break;
    }
    case 219163:
    {
        returnValue = F("Mehlbeerenring");
        break;
    }
    case 219164:
    {
        returnValue = F("Mehlbeerensteig");
        break;
    }
    case 219165:
    {
        returnValue = F("Mehlbeerenstr.");
        break;
    }
    case 219166:
    {
        returnValue = F("Mehlbeerenweg");
        break;
    }
    case 219167:
    {
        returnValue = F("Mehlbeerweg");
        break;
    }
    case 219168:
    {
        returnValue = F("Mehlbehrenallee");
        break;
    }
    case 219169:
    {
        returnValue = F("Mehlbekweg");
        break;
    }
    case 219170:
    {
        returnValue = F("Mehlberger Str.");
        break;
    }
    case 219171:
    {
        returnValue = F("Mehlberggasse");
        break;
    }
    case 219172:
    {
        returnValue = F("Mehlbergstr.");
        break;
    }
    case 219173:
    {
        returnValue = F("Mehlbergweg");
        break;
    }
    case 219174:
    {
        returnValue = F("Mehlbichlstr.");
        break;
    }
    case 219175:
    {
        returnValue = F("Mehlbydiek");
        break;
    }
    case 219176:
    {
        returnValue = F("Mehlemer Str.");
        break;
    }
    case 219177:
    {
        returnValue = F("Mehlemer Weg");
        break;
    }
    case 219178:
    {
        returnValue = F("Mehlenbachstr.");
        break;
    }
    case 219179:
    {
        returnValue = F("Mehlener Str.");
        break;
    }
    case 219180:
    {
        returnValue = F("Mehlenkamp");
        break;
    }
    case 219181:
    {
        returnValue = F("Mehlenstr.");
        break;
    }
    case 219182:
    {
        returnValue = F("Mehlentalweg");
        break;
    }
    case 219183:
    {
        returnValue = F("Mehlenweg");
        break;
    }
    case 219184:
    {
        returnValue = F("Mehler Stenpad");
        break;
    }
    case 219185:
    {
        returnValue = F("Mehler Str.");
        break;
    }
    case 219186:
    {
        returnValue = F("Mehler Weg");
        break;
    }
    case 219187:
    {
        returnValue = F("Mehlergasse");
        break;
    }
    case 219188:
    {
        returnValue = F("Mehlersche Str.");
        break;
    }
    case 219189:
    {
        returnValue = F("Mehlerstr.");
        break;
    }
    case 219190:
    {
        returnValue = F("Mehlesweg");
        break;
    }
    case 219191:
    {
        returnValue = F("Mehleweg");
        break;
    }
    case 219192:
    {
        returnValue = F("Mehlgasse");
        break;
    }
    case 219193:
    {
        returnValue = F("Mehlgrund");
        break;
    }
    case 219194:
    {
        returnValue = F("Mehlgärtchenweg");
        break;
    }
    case 219195:
    {
        returnValue = F("Mehlhagen");
        break;
    }
    case 219196:
    {
        returnValue = F("Mehlhellerweg");
        break;
    }
    case 219197:
    {
        returnValue = F("Mehlhofstr.");
        break;
    }
    case 219198:
    {
        returnValue = F("Mehlholz");
        break;
    }
    case 219199:
    {
        returnValue = F("Mehlhornschneise");
        break;
    }
    case 219200:
    {
        returnValue = F("Mehliete");
        break;
    }
    case 219201:
    {
        returnValue = F("Mehlisgraben");
        break;
    }
    case 219202:
    {
        returnValue = F("Mehliskopfweg");
        break;
    }
    case 219203:
    {
        returnValue = F("Mehlisstr.");
        break;
    }
    case 219204:
    {
        returnValue = F("Mehlkampweg");
        break;
    }
    case 219205:
    {
        returnValue = F("Mehlklinge");
        break;
    }
    case 219206:
    {
        returnValue = F("Mehlleitenweg");
        break;
    }
    case 219207:
    {
        returnValue = F("Mehlm");
        break;
    }
    case 219208:
    {
        returnValue = F("Mehlpfortstr.");
        break;
    }
    case 219209:
    {
        returnValue = F("Mehlpfuhlstr.");
        break;
    }
    case 219210:
    {
        returnValue = F("Mehlplatzweg");
        break;
    }
    case 219211:
    {
        returnValue = F("Mehlsackweg");
        break;
    }
    case 219212:
    {
        returnValue = F("Mehlschwalbenweg");
        break;
    }
    case 219213:
    {
        returnValue = F("Mehlsdorf");
        break;
    }
    case 219214:
    {
        returnValue = F("Mehlsdorfer Str.");
        break;
    }
    case 219215:
    {
        returnValue = F("Mehlsdorfer Weg");
        break;
    }
    case 219216:
    {
        returnValue = F("Mehlseeschneise");
        break;
    }
    case 219217:
    {
        returnValue = F("Mehlsgang");
        break;
    }
    case 219218:
    {
        returnValue = F("Mehlsstr.");
        break;
    }
    case 219219:
    {
        returnValue = F("Mehlsteig");
        break;
    }
    case 219220:
    {
        returnValue = F("Mehlstr.");
        break;
    }
    case 219221:
    {
        returnValue = F("Mehltal");
        break;
    }
    case 219222:
    {
        returnValue = F("Mehltauer");
        break;
    }
    case 219223:
    {
        returnValue = F("Mehlthau");
        break;
    }
    case 219224:
    {
        returnValue = F("Mehltheuer Str.");
        break;
    }
    case 219225:
    {
        returnValue = F("Mehltheuersche Str.");
        break;
    }
    case 219226:
    {
        returnValue = F("Mehlweg");
        break;
    }
    case 219227:
    {
        returnValue = F("Mehlweiherkopf");
        break;
    }
    case 219228:
    {
        returnValue = F("Mehlwiesenweg");
        break;
    }
    case 219229:
    {
        returnValue = F("Mehläckerweg");
        break;
    }
    case 219230:
    {
        returnValue = F("Mehmelser Str.");
        break;
    }
    case 219231:
    {
        returnValue = F("Mehmkenkamp");
        break;
    }
    case 219232:
    {
        returnValue = F("Mehmker Weg");
        break;
    }
    case 219233:
    {
        returnValue = F("Mehner Mühle");
        break;
    }
    case 219234:
    {
        returnValue = F("Mehner Wald");
        break;
    }
    case 219235:
    {
        returnValue = F("Mehnertsweg");
        break;
    }
    case 219236:
    {
        returnValue = F("Mehracker");
        break;
    }
    case 219237:
    {
        returnValue = F("Mehrbachstr.");
        break;
    }
    case 219238:
    {
        returnValue = F("Mehrbachtalstr.");
        break;
    }
    case 219239:
    {
        returnValue = F("Mehrbruchstr.");
        break;
    }
    case 219240:
    {
        returnValue = F("Mehrbuchweg");
        break;
    }
    case 219241:
    {
        returnValue = F("Mehren");
        break;
    }
    case 219242:
    {
        returnValue = F("Mehrener Str.");
        break;
    }
    case 219243:
    {
        returnValue = F("Mehrenkamper Str.");
        break;
    }
    case 219244:
    {
        returnValue = F("Mehrenkampsweg");
        break;
    }
    case 219245:
    {
        returnValue = F("Mehrenstetter Ortsstr.");
        break;
    }
    case 219246:
    {
        returnValue = F("Mehrensweg");
        break;
    }
    case 219247:
    {
        returnValue = F("Mehrer Str.");
        break;
    }
    case 219248:
    {
        returnValue = F("Mehrgenerationen-Park");
        break;
    }
    case 219249:
    {
        returnValue = F("Mehrgenerationengarten");
        break;
    }
    case 219250:
    {
        returnValue = F("Mehrgenerationenpark");
        break;
    }
    case 219251:
    {
        returnValue = F("Mehrgenerationenplatz");
        break;
    }
    case 219252:
    {
        returnValue = F("Mehrhooger Str.");
        break;
    }
    case 219253:
    {
        returnValue = F("Mehriner Dorfstr.");
        break;
    }
    case 219254:
    {
        returnValue = F("Mehringen");
        break;
    }
    case 219255:
    {
        returnValue = F("Mehringer Str.");
        break;
    }
    case 219256:
    {
        returnValue = F("Mehringer Weg");
        break;
    }
    case 219257:
    {
        returnValue = F("Mehringstr.");
        break;
    }
    case 219258:
    {
        returnValue = F("Mehrkamp");
        break;
    }
    case 219259:
    {
        returnValue = F("Mehrkuhle");
        break;
    }
    case 219260:
    {
        returnValue = F("Mehrleinweg");
        break;
    }
    case 219261:
    {
        returnValue = F("Mehrlichweg");
        break;
    }
    case 219262:
    {
        returnValue = F("Mehrower Chaussee");
        break;
    }
    case 219263:
    {
        returnValue = F("Mehrower Dorfstr.");
        break;
    }
    case 219264:
    {
        returnValue = F("Mehrower Landweg");
        break;
    }
    case 219265:
    {
        returnValue = F("Mehrower Str.");
        break;
    }
    case 219266:
    {
        returnValue = F("Mehrower Weg");
        break;
    }
    case 219267:
    {
        returnValue = F("Mehrstedt");
        break;
    }
    case 219268:
    {
        returnValue = F("Mehrstedter Dorfstr.");
        break;
    }
    case 219269:
    {
        returnValue = F("Mehrstedter Str.");
        break;
    }
    case 219270:
    {
        returnValue = F("Mehrstedter Weg");
        break;
    }
    case 219271:
    {
        returnValue = F("Mehrstetter Str.");
        break;
    }
    case 219272:
    {
        returnValue = F("Mehrumer Str.");
        break;
    }
    case 219273:
    {
        returnValue = F("Mehrumer Weg");
        break;
    }
    case 219274:
    {
        returnValue = F("Mehrweg");
        break;
    }
    case 219275:
    {
        returnValue = F("Mehun-Str.");
        break;
    }
    case 219276:
    {
        returnValue = F("Meiberg");
        break;
    }
    case 219277:
    {
        returnValue = F("Meiberger Weg");
        break;
    }
    case 219278:
    {
        returnValue = F("Meibomstr.");
        break;
    }
    case 219279:
    {
        returnValue = F("Meiborssen");
        break;
    }
    case 219280:
    {
        returnValue = F("Meicastr.");
        break;
    }
    case 219281:
    {
        returnValue = F("Meichelbeckstr.");
        break;
    }
    case 219282:
    {
        returnValue = F("Meicheser Str.");
        break;
    }
    case 219283:
    {
        returnValue = F("Meicheser Weg");
        break;
    }
    case 219284:
    {
        returnValue = F("Meichlitzer Str.");
        break;
    }
    case 219285:
    {
        returnValue = F("Meichower Str.");
        break;
    }
    case 219286:
    {
        returnValue = F("Meide");
        break;
    }
    case 219287:
    {
        returnValue = F("Meidelstetter Str.");
        break;
    }
    case 219288:
    {
        returnValue = F("Meidelstetter Weg");
        break;
    }
    case 219289:
    {
        returnValue = F("Meidericher Str.");
        break;
    }
    case 219290:
    {
        returnValue = F("Meidestr.");
        break;
    }
    case 219291:
    {
        returnValue = F("Meidingerstr.");
        break;
    }
    case 219292:
    {
        returnValue = F("Meidnerweg");
        break;
    }
    case 219293:
    {
        returnValue = F("Meidredder");
        break;
    }
    case 219294:
    {
        returnValue = F("Meienbergstr.");
        break;
    }
    case 219295:
    {
        returnValue = F("Meienborn");
        break;
    }
    case 219296:
    {
        returnValue = F("Meienbornstr.");
        break;
    }
    case 219297:
    {
        returnValue = F("Meienbrockstr.");
        break;
    }
    case 219298:
    {
        returnValue = F("Meiendorfer Str.");
        break;
    }
    case 219299:
    {
        returnValue = F("Meienhoop");
        break;
    }
    case 219300:
    {
        returnValue = F("Meier Str.");
        break;
    }
    case 219301:
    {
        returnValue = F("Meier's Weg");
        break;
    }
    case 219302:
    {
        returnValue = F("Meier-Helmbrecht-Str.");
        break;
    }
    case 219303:
    {
        returnValue = F("Meier-Schneise");
        break;
    }
    case 219304:
    {
        returnValue = F("Meier-Wirt-Str.");
        break;
    }
    case 219305:
    {
        returnValue = F("Meierbach");
        break;
    }
    case 219306:
    {
        returnValue = F("Meierbachgärten");
        break;
    }
    case 219307:
    {
        returnValue = F("Meierbachweg");
        break;
    }
    case 219308:
    {
        returnValue = F("Meierberg");
        break;
    }
    case 219309:
    {
        returnValue = F("Meierberger Str.");
        break;
    }
    case 219310:
    {
        returnValue = F("Meierbergweg");
        break;
    }
    case 219311:
    {
        returnValue = F("Meierbrede");
        break;
    }
    case 219312:
    {
        returnValue = F("Meierbreite");
        break;
    }
    case 219313:
    {
        returnValue = F("Meierbruch");
        break;
    }
    case 219314:
    {
        returnValue = F("Meierbündtweg");
        break;
    }
    case 219315:
    {
        returnValue = F("Meierdamm");
        break;
    }
    case 219316:
    {
        returnValue = F("Meierdiek");
        break;
    }
    case 219317:
    {
        returnValue = F("Meierdingsen");
        break;
    }
    case 219318:
    {
        returnValue = F("Meieregertstr.");
        break;
    }
    case 219319:
    {
        returnValue = F("Meierei");
        break;
    }
    case 219320:
    {
        returnValue = F("Meierei-Besuchergang");
        break;
    }
    case 219321:
    {
        returnValue = F("Meiereiberg");
        break;
    }
    case 219322:
    {
        returnValue = F("Meiereidamm");
        break;
    }
    case 219323:
    {
        returnValue = F("Meiereifeld");
        break;
    }
    case 219324:
    {
        returnValue = F("Meiereigang");
        break;
    }
    case 219325:
    {
        returnValue = F("Meiereigraben");
        break;
    }
    case 219326:
    {
        returnValue = F("Meiereikoppel");
        break;
    }
    case 219327:
    {
        returnValue = F("Meiereisteig");
        break;
    }
    case 219328:
    {
        returnValue = F("Meiereistieg");
        break;
    }
    case 219329:
    {
        returnValue = F("Meiereistr.");
        break;
    }
    case 219330:
    {
        returnValue = F("Meiereiweg");
        break;
    }
    case 219331:
    {
        returnValue = F("Meierend");
        break;
    }
    case 219332:
    {
        returnValue = F("Meierfeld");
        break;
    }
    case 219333:
    {
        returnValue = F("Meierfeldstr.");
        break;
    }
    case 219334:
    {
        returnValue = F("Meierfreundstr.");
        break;
    }
    case 219335:
    {
        returnValue = F("Meiergarten");
        break;
    }
    case 219336:
    {
        returnValue = F("Meiergartenstr.");
        break;
    }
    case 219337:
    {
        returnValue = F("Meiergasse");
        break;
    }
    case 219338:
    {
        returnValue = F("Meiergraben");
        break;
    }
    case 219339:
    {
        returnValue = F("Meiergärtleweg");
        break;
    }
    case 219340:
    {
        returnValue = F("Meierhafe");
        break;
    }
    case 219341:
    {
        returnValue = F("Meierhaltweg");
        break;
    }
    case 219342:
    {
        returnValue = F("Meierhof");
        break;
    }
    case 219343:
    {
        returnValue = F("Meierhofgasse");
        break;
    }
    case 219344:
    {
        returnValue = F("Meierhofsiedlung");
        break;
    }
    case 219345:
    {
        returnValue = F("Meierhofstr.");
        break;
    }
    case 219346:
    {
        returnValue = F("Meierhofsweg");
        break;
    }
    case 219347:
    {
        returnValue = F("Meierhofweg");
        break;
    }
    case 219348:
    {
        returnValue = F("Meierholz");
        break;
    }
    case 219349:
    {
        returnValue = F("Meierholzung");
        break;
    }
    case 219350:
    {
        returnValue = F("Meierhöfe");
        break;
    }
    case 219351:
    {
        returnValue = F("Meiering");
        break;
    }
    case 219352:
    {
        returnValue = F("Meieringstr.");
        break;
    }
    case 219353:
    {
        returnValue = F("Meierkamp");
        break;
    }
    case 219354:
    {
        returnValue = F("Meierkampstr.");
        break;
    }
    case 219355:
    {
        returnValue = F("Meierkampweg");
        break;
    }
    case 219356:
    {
        returnValue = F("Meierküppel");
        break;
    }
    case 219357:
    {
        returnValue = F("Meiermattstr.");
        break;
    }
    case 219358:
    {
        returnValue = F("Meiernberg");
        break;
    }
    case 219359:
    {
        returnValue = F("Meierort");
        break;
    }
    case 219360:
    {
        returnValue = F("Meierplatz");
        break;
    }
    case 219361:
    {
        returnValue = F("Meiers Berg");
        break;
    }
    case 219362:
    {
        returnValue = F("Meiers Kamp");
        break;
    }
    case 219363:
    {
        returnValue = F("Meiers Lööse");
        break;
    }
    case 219364:
    {
        returnValue = F("Meiers Mühle");
        break;
    }
    case 219365:
    {
        returnValue = F("Meiers Weg");
        break;
    }
    case 219366:
    {
        returnValue = F("Meiersberg");
        break;
    }
    case 219367:
    {
        returnValue = F("Meiersberger Str.");
        break;
    }
    case 219368:
    {
        returnValue = F("Meiersbergweg");
        break;
    }
    case 219369:
    {
        returnValue = F("Meiersdell");
        break;
    }
    case 219370:
    {
        returnValue = F("Meiersdorfer Weg");
        break;
    }
    case 219371:
    {
        returnValue = F("Meierseckenweg");
        break;
    }
    case 219372:
    {
        returnValue = F("Meiersfeld");
        break;
    }
    case 219373:
    {
        returnValue = F("Meiersfelder Str.");
        break;
    }
    case 219374:
    {
        returnValue = F("Meiersfeldweg");
        break;
    }
    case 219375:
    {
        returnValue = F("Meiersgartenweg");
        break;
    }
    case 219376:
    {
        returnValue = F("Meiersgasse");
        break;
    }
    case 219377:
    {
        returnValue = F("Meiersgrund");
        break;
    }
    case 219378:
    {
        returnValue = F("Meierskamp");
        break;
    }
    case 219379:
    {
        returnValue = F("Meierskopfweg");
        break;
    }
    case 219380:
    {
        returnValue = F("Meiersmattstr.");
        break;
    }
    case 219381:
    {
        returnValue = F("Meiersortweg");
        break;
    }
    case 219382:
    {
        returnValue = F("Meiersteg");
        break;
    }
    case 219383:
    {
        returnValue = F("Meierstorfer Str.");
        break;
    }
    case 219384:
    {
        returnValue = F("Meierstr.");
        break;
    }
    case 219385:
    {
        returnValue = F("Meiersweg");
        break;
    }
    case 219386:
    {
        returnValue = F("Meierweg");
        break;
    }
    case 219387:
    {
        returnValue = F("Meierwiese");
        break;
    }
    case 219388:
    {
        returnValue = F("Meierwiesenweg");
        break;
    }
    case 219389:
    {
        returnValue = F("Meierwisk");
        break;
    }
    case 219390:
    {
        returnValue = F("Meiganne Str.");
        break;
    }
    case 219391:
    {
        returnValue = F("Meigelsried");
        break;
    }
    case 219392:
    {
        returnValue = F("Meigelsrieder Weg");
        break;
    }
    case 219393:
    {
        returnValue = F("Meigen");
        break;
    }
    case 219394:
    {
        returnValue = F("Meigener Str.");
        break;
    }
    case 219395:
    {
        returnValue = F("Meigerweg");
        break;
    }
    case 219396:
    {
        returnValue = F("Meikenmichelweg");
        break;
    }
    case 219397:
    {
        returnValue = F("Meil-Weg");
        break;
    }
    case 219398:
    {
        returnValue = F("Meila");
        break;
    }
    case 219399:
    {
        returnValue = F("Meilaer Str.");
        break;
    }
    case 219400:
    {
        returnValue = F("Meilbachstr.");
        break;
    }
    case 219401:
    {
        returnValue = F("Meilbrücker Str.");
        break;
    }
    case 219402:
    {
        returnValue = F("Meileck");
        break;
    }
    case 219403:
    {
        returnValue = F("Meilenberger Str.");
        break;
    }
    case 219404:
    {
        returnValue = F("Meilendorfer Str.");
        break;
    }
    case 219405:
    {
        returnValue = F("Meilenheld");
        break;
    }
    case 219406:
    {
        returnValue = F("Meilenhofener Str.");
        break;
    }
    case 219407:
    {
        returnValue = F("Meilensteinflügel");
        break;
    }
    case 219408:
    {
        returnValue = F("Meilensteinschneise");
        break;
    }
    case 219409:
    {
        returnValue = F("Meilensteinweg");
        break;
    }
    case 219410:
    {
        returnValue = F("Meilenstr.");
        break;
    }
    case 219411:
    {
        returnValue = F("Meilenweg");
        break;
    }
    case 219412:
    {
        returnValue = F("Meilereiweg");
        break;
    }
    case 219413:
    {
        returnValue = F("Meilergstell");
        break;
    }
    case 219414:
    {
        returnValue = F("Meilerplatz");
        break;
    }
    case 219415:
    {
        returnValue = F("Meilerriege");
        break;
    }
    case 219416:
    {
        returnValue = F("Meilerschlüchteweg");
        break;
    }
    case 219417:
    {
        returnValue = F("Meilerstatt");
        break;
    }
    case 219418:
    {
        returnValue = F("Meilerstieg");
        break;
    }
    case 219419:
    {
        returnValue = F("Meilerstr.");
        break;
    }
    case 219420:
    {
        returnValue = F("Meilerstätte");
        break;
    }
    case 219421:
    {
        returnValue = F("Meilerweg");
        break;
    }
    case 219422:
    {
        returnValue = F("Meileshof");
        break;
    }
    case 219423:
    {
        returnValue = F("Meilfesweg");
        break;
    }
    case 219424:
    {
        returnValue = F("Meilinger Str.");
        break;
    }
    case 219425:
    {
        returnValue = F("Meilinger Weg");
        break;
    }
    case 219426:
    {
        returnValue = F("Meilitz");
        break;
    }
    case 219427:
    {
        returnValue = F("Meilitzer Fußgängerbrücke");
        break;
    }
    case 219428:
    {
        returnValue = F("Meilitzer Str.");
        break;
    }
    case 219429:
    {
        returnValue = F("Meillerstr.");
        break;
    }
    case 219430:
    {
        returnValue = F("Meillerweg");
        break;
    }
    case 219431:
    {
        returnValue = F("Meilschnitzer Str.");
        break;
    }
    case 219432:
    {
        returnValue = F("Meilsdorfer Damm");
        break;
    }
    case 219433:
    {
        returnValue = F("Meilsener Birkenweg");
        break;
    }
    case 219434:
    {
        returnValue = F("Meilsener Heide");
        break;
    }
    case 219435:
    {
        returnValue = F("Meilsener Str.");
        break;
    }
    case 219436:
    {
        returnValue = F("Meilwaldstr.");
        break;
    }
    case 219437:
    {
        returnValue = F("Meilwiesenstr.");
        break;
    }
    case 219438:
    {
        returnValue = F("Meimbresser Str.");
        break;
    }
    case 219439:
    {
        returnValue = F("Meimersdorfer Moor");
        break;
    }
    case 219440:
    {
        returnValue = F("Meimersdorfer Weg");
        break;
    }
    case 219441:
    {
        returnValue = F("Meimerser Weg");
        break;
    }
    case 219442:
    {
        returnValue = F("Meimsheimer Gasse");
        break;
    }
    case 219443:
    {
        returnValue = F("Meimsheimer Str.");
        break;
    }
    case 219444:
    {
        returnValue = F("Meimsheimer Weg");
        break;
    }
    case 219445:
    {
        returnValue = F("Mein-Heim-Str.");
        break;
    }
    case 219446:
    {
        returnValue = F("Meinackersgrund");
        break;
    }
    case 219447:
    {
        returnValue = F("Meinard-Fortmann-Str.");
        break;
    }
    case 219448:
    {
        returnValue = F("Meinardusstr.");
        break;
    }
    case 219449:
    {
        returnValue = F("Meinauweg");
        break;
    }
    case 219450:
    {
        returnValue = F("Meinberger Str.");
        break;
    }
    case 219451:
    {
        returnValue = F("Meinbergstr.");
        break;
    }
    case 219452:
    {
        returnValue = F("Meinbrexener Str.");
        break;
    }
    case 219453:
    {
        returnValue = F("Meinbrexer Str.");
        break;
    }
    case 219454:
    {
        returnValue = F("Meinburgisstr.");
        break;
    }
    case 219455:
    {
        returnValue = F("Meinde");
        break;
    }
    case 219456:
    {
        returnValue = F("Meindling");
        break;
    }
    case 219457:
    {
        returnValue = F("Meindlinger Weg");
        break;
    }
    case 219458:
    {
        returnValue = F("Meindlstr.");
        break;
    }
    case 219459:
    {
        returnValue = F("Meindorfer Allee");
        break;
    }
    case 219460:
    {
        returnValue = F("Meindorfer Str.");
        break;
    }
    case 219461:
    {
        returnValue = F("Meineckenstr.");
        break;
    }
    case 219462:
    {
        returnValue = F("Meineckestr.");
        break;
    }
    case 219463:
    {
        returnValue = F("Meinegarten");
        break;
    }
    case 219464:
    {
        returnValue = F("Meinekenhop");
        break;
    }
    case 219465:
    {
        returnValue = F("Meinekestr.");
        break;
    }
    case 219466:
    {
        returnValue = F("Meinekeweg");
        break;
    }
    case 219467:
    {
        returnValue = F("Meinelstr.");
        break;
    }
    case 219468:
    {
        returnValue = F("Meinenbroich");
        break;
    }
    case 219469:
    {
        returnValue = F("Meinenhof");
        break;
    }
    case 219470:
    {
        returnValue = F("Meinenkamp");
        break;
    }
    case 219471:
    {
        returnValue = F("Meiner Str.");
        break;
    }
    case 219472:
    {
        returnValue = F("Meiner Weg");
        break;
    }
    case 219473:
    {
        returnValue = F("Meinerdinger Kirchweg");
        break;
    }
    case 219474:
    {
        returnValue = F("Meineringhäuser Str.");
        break;
    }
    case 219475:
    {
        returnValue = F("Meinern");
        break;
    }
    case 219476:
    {
        returnValue = F("Meinersdorfer Str.");
        break;
    }
    case 219477:
    {
        returnValue = F("Meinersdorfer Weg");
        break;
    }
    case 219478:
    {
        returnValue = F("Meinerser Str.");
        break;
    }
    case 219479:
    {
        returnValue = F("Meinerser Weg");
        break;
    }
    case 219480:
    {
        returnValue = F("Meinersfehner Str.");
        break;
    }
    case 219481:
    {
        returnValue = F("Meinershauser Str.");
        break;
    }
    case 219482:
    {
        returnValue = F("Meinersweg");
        break;
    }
    case 219483:
    {
        returnValue = F("Meinerts Brook");
        break;
    }
    case 219484:
    {
        returnValue = F("Meinerts Kämpken");
        break;
    }
    case 219485:
    {
        returnValue = F("Meinertsberg");
        break;
    }
    case 219486:
    {
        returnValue = F("Meinertstr.");
        break;
    }
    case 219487:
    {
        returnValue = F("Meinertsweg");
        break;
    }
    case 219488:
    {
        returnValue = F("Meinertzhagener Str.");
        break;
    }
    case 219489:
    {
        returnValue = F("Meinertzstr.");
        break;
    }
    case 219490:
    {
        returnValue = F("Meinerzhagener Str.");
        break;
    }
    case 219491:
    {
        returnValue = F("Meinerzhagener_Weg");
        break;
    }
    case 219492:
    {
        returnValue = F("Meinestr.");
        break;
    }
    case 219493:
    {
        returnValue = F("Meinetalstr.");
        break;
    }
    case 219494:
    {
        returnValue = F("Meineweher Hauptstr.");
        break;
    }
    case 219495:
    {
        returnValue = F("Meineweher Mühlenweg");
        break;
    }
    case 219496:
    {
        returnValue = F("Meineweher Str.");
        break;
    }
    case 219497:
    {
        returnValue = F("Meinfelder Str.");
        break;
    }
    case 219498:
    {
        returnValue = F("Meinfelder Weg");
        break;
    }
    case 219499:
    {
        returnValue = F("Meingoldstr.");
        break;
    }
    case 219500:
    {
        returnValue = F("Meinhard Jürgen Weg");
        break;
    }
    case 219501:
    {
        returnValue = F("Meinhard-Jacoby-Weg");
        break;
    }
    case 219502:
    {
        returnValue = F("Meinhard-Uttecht-Str.");
        break;
    }
    case 219503:
    {
        returnValue = F("Meinhardingstr.");
        break;
    }
    case 219504:
    {
        returnValue = F("Meinhardistr.");
        break;
    }
    case 219505:
    {
        returnValue = F("Meinhardshof");
        break;
    }
    case 219506:
    {
        returnValue = F("Meinhardswinden");
        break;
    }
    case 219507:
    {
        returnValue = F("Meinhardswindener Schneise");
        break;
    }
    case 219508:
    {
        returnValue = F("Meinhardswindener Str.");
        break;
    }
    case 219509:
    {
        returnValue = F("Meinhardtstr.");
        break;
    }
    case 219510:
    {
        returnValue = F("Meinhardtsweg");
        break;
    }
    case 219511:
    {
        returnValue = F("Meinhardtweg");
        break;
    }
    case 219512:
    {
        returnValue = F("Meinheimer Str.");
        break;
    }
    case 219513:
    {
        returnValue = F("Meinheitsweg");
        break;
    }
    case 219514:
    {
        returnValue = F("Meinholdstr.");
        break;
    }
    case 219515:
    {
        returnValue = F("Meinholtweg");
        break;
    }
    case 219516:
    {
        returnValue = F("Meinholz");
        break;
    }
    case 219517:
    {
        returnValue = F("Meinhövelerweg");
        break;
    }
    case 219518:
    {
        returnValue = F("Meinickeweg");
        break;
    }
    case 219519:
    {
        returnValue = F("Meiniger Str.");
        break;
    }
    case 219520:
    {
        returnValue = F("Meinigstr.");
        break;
    }
    case 219521:
    {
        returnValue = F("Meinigte");
        break;
    }
    case 219522:
    {
        returnValue = F("Meiningener Str.");
        break;
    }
    case 219523:
    {
        returnValue = F("Meiningenstr.");
        break;
    }
    case 219524:
    {
        returnValue = F("Meininger Allee");
        break;
    }
    case 219525:
    {
        returnValue = F("Meininger Chaussee");
        break;
    }
    case 219526:
    {
        returnValue = F("Meininger Fußweg");
        break;
    }
    case 219527:
    {
        returnValue = F("Meininger Landstr.");
        break;
    }
    case 219528:
    {
        returnValue = F("Meininger Str.");
        break;
    }
    case 219529:
    {
        returnValue = F("Meininger Weg");
        break;
    }
    case 219530:
    {
        returnValue = F("Meininghausen");
        break;
    }
    case 219531:
    {
        returnValue = F("Meiningser Weg");
        break;
    }
    case 219532:
    {
        returnValue = F("Meinitz");
        break;
    }
    case 219533:
    {
        returnValue = F("Meinitzer Weg");
        break;
    }
    case 219534:
    {
        returnValue = F("Meinkerstr.");
        break;
    }
    case 219535:
    {
        returnValue = F("Meinkingsburg");
        break;
    }
    case 219536:
    {
        returnValue = F("Meinkingsburger Str.");
        break;
    }
    case 219537:
    {
        returnValue = F("Meinkoter Str.");
        break;
    }
    case 219538:
    {
        returnValue = F("Meinlettenstr.");
        break;
    }
    case 219539:
    {
        returnValue = F("Meinolfstr.");
        break;
    }
    case 219540:
    {
        returnValue = F("Meinolfusstr.");
        break;
    }
    case 219541:
    {
        returnValue = F("Meinolphusallee");
        break;
    }
    case 219542:
    {
        returnValue = F("Meinolphusstr.");
        break;
    }
    case 219543:
    {
        returnValue = F("Meinrad-Hotz-Weg");
        break;
    }
    case 219544:
    {
        returnValue = F("Meinrad-Miltenberger-Weg");
        break;
    }
    case 219545:
    {
        returnValue = F("Meinrad-Spieß-Str.");
        break;
    }
    case 219546:
    {
        returnValue = F("Meinrad-Thoma-Str.");
        break;
    }
    case 219547:
    {
        returnValue = F("Meinrad-von-Au-Str.");
        break;
    }
    case 219548:
    {
        returnValue = F("Meinradstr.");
        break;
    }
    case 219549:
    {
        returnValue = F("Meins Weg");
        break;
    }
    case 219550:
    {
        returnValue = F("Meinsdorfer Str.");
        break;
    }
    case 219551:
    {
        returnValue = F("Meinsdorfer Weg");
        break;
    }
    case 219552:
    {
        returnValue = F("Meinsener Str.");
        break;
    }
    case 219553:
    {
        returnValue = F("Meinser Brink");
        break;
    }
    case 219554:
    {
        returnValue = F("Meinser Str.");
        break;
    }
    case 219555:
    {
        returnValue = F("Meinshäuser Str.");
        break;
    }
    case 219556:
    {
        returnValue = F("Meinstr.");
        break;
    }
    case 219557:
    {
        returnValue = F("Meinsweg");
        break;
    }
    case 219558:
    {
        returnValue = F("Meint-Ehlen-Weg");
        break;
    }
    case 219559:
    {
        returnValue = F("Meinte");
        break;
    }
    case 219560:
    {
        returnValue = F("Meintelsches Höfle");
        break;
    }
    case 219561:
    {
        returnValue = F("Meintemoorweg");
        break;
    }
    case 219562:
    {
        returnValue = F("Meintestr.");
        break;
    }
    case 219563:
    {
        returnValue = F("Meintetalstr.");
        break;
    }
    case 219564:
    {
        returnValue = F("Meinteweg");
        break;
    }
    case 219565:
    {
        returnValue = F("Meinweg");
        break;
    }
    case 219566:
    {
        returnValue = F("Meinwerkstr.");
        break;
    }
    case 219567:
    {
        returnValue = F("Meinzing");
        break;
    }
    case 219568:
    {
        returnValue = F("Meirangasse");
        break;
    }
    case 219569:
    {
        returnValue = F("Meirehmer Berg");
        break;
    }
    case 219570:
    {
        returnValue = F("Meirehmer Str.");
        break;
    }
    case 219571:
    {
        returnValue = F("Meiringplatz");
        break;
    }
    case 219572:
    {
        returnValue = F("Meiringstr.");
        break;
    }
    case 219573:
    {
        returnValue = F("Meis Wieske");
        break;
    }
    case 219574:
    {
        returnValue = F("Meisastr.");
        break;
    }
    case 219575:
    {
        returnValue = F("Meisau");
        break;
    }
    case 219576:
    {
        returnValue = F("Meisbachstr.");
        break;
    }
    case 219577:
    {
        returnValue = F("Meisberg");
        break;
    }
    case 219578:
    {
        returnValue = F("Meisberger Str.");
        break;
    }
    case 219579:
    {
        returnValue = F("Meisburger Str.");
        break;
    }
    case 219580:
    {
        returnValue = F("Meisburgstr.");
        break;
    }
    case 219581:
    {
        returnValue = F("Meischenfeld");
        break;
    }
    case 219582:
    {
        returnValue = F("Meischenstr.");
        break;
    }
    case 219583:
    {
        returnValue = F("Meischnerstr.");
        break;
    }
    case 219584:
    {
        returnValue = F("Meisdorfer Trift");
        break;
    }
    case 219585:
    {
        returnValue = F("Meisdorfer Weg");
        break;
    }
    case 219586:
    {
        returnValue = F("Meise");
        break;
    }
    case 219587:
    {
        returnValue = F("Meisebacher Str.");
        break;
    }
    case 219588:
    {
        returnValue = F("Meiseberger Weg");
        break;
    }
    case 219589:
    {
        returnValue = F("Meisel");
        break;
    }
    case 219590:
    {
        returnValue = F("Meiselschachtweg");
        break;
    }
    case 219591:
    {
        returnValue = F("Meiselsgrund");
        break;
    }
    case 219592:
    {
        returnValue = F("Meiselterweg");
        break;
    }
    case 219593:
    {
        returnValue = F("Meisenbacher Str.");
        break;
    }
    case 219594:
    {
        returnValue = F("Meisenbachstr.");
        break;
    }
    case 219595:
    {
        returnValue = F("Meisenbachweg");
        break;
    }
    case 219596:
    {
        returnValue = F("Meisenbaum-Weg");
        break;
    }
    case 219597:
    {
        returnValue = F("Meisenberg");
        break;
    }
    case 219598:
    {
        returnValue = F("Meisenbergstr.");
        break;
    }
    case 219599:
    {
        returnValue = F("Meisenbergweg");
        break;
    }
    case 219600:
    {
        returnValue = F("Meisenbogen");
        break;
    }
    case 219601:
    {
        returnValue = F("Meisenbornweg");
        break;
    }
    case 219602:
    {
        returnValue = F("Meisenbrink");
        break;
    }
    case 219603:
    {
        returnValue = F("Meisenbrunnenweg");
        break;
    }
    case 219604:
    {
        returnValue = F("Meisenbrunnerweg");
        break;
    }
    case 219605:
    {
        returnValue = F("Meisenbrunnweg");
        break;
    }
    case 219606:
    {
        returnValue = F("Meisenburger Weg");
        break;
    }
    case 219607:
    {
        returnValue = F("Meisenbusch");
        break;
    }
    case 219608:
    {
        returnValue = F("Meisenbüchel");
        break;
    }
    case 219609:
    {
        returnValue = F("Meisenbühl");
        break;
    }
    case 219610:
    {
        returnValue = F("Meisenbühlring");
        break;
    }
    case 219611:
    {
        returnValue = F("Meisenbüschenweg");
        break;
    }
    case 219612:
    {
        returnValue = F("Meisendobl");
        break;
    }
    case 219613:
    {
        returnValue = F("Meiseneck");
        break;
    }
    case 219614:
    {
        returnValue = F("Meisenfeld");
        break;
    }
    case 219615:
    {
        returnValue = F("Meisengang");
        break;
    }
    case 219616:
    {
        returnValue = F("Meisengasse");
        break;
    }
    case 219617:
    {
        returnValue = F("Meisengraben");
        break;
    }
    case 219618:
    {
        returnValue = F("Meisengrund");
        break;
    }
    case 219619:
    {
        returnValue = F("Meisengässle");
        break;
    }
    case 219620:
    {
        returnValue = F("Meisenhag");
        break;
    }
    case 219621:
    {
        returnValue = F("Meisenhalde");
        break;
    }
    case 219622:
    {
        returnValue = F("Meisenhartweg");
        break;
    }
    case 219623:
    {
        returnValue = F("Meisenheide");
        break;
    }
    case 219624:
    {
        returnValue = F("Meisenheimer Str.");
        break;
    }
    case 219625:
    {
        returnValue = F("Meisenheimer Weg");
        break;
    }
    case 219626:
    {
        returnValue = F("Meisenhof");
        break;
    }
    case 219627:
    {
        returnValue = F("Meisenhofstr.");
        break;
    }
    case 219628:
    {
        returnValue = F("Meisenhofweg");
        break;
    }
    case 219629:
    {
        returnValue = F("Meisenhüttenweg");
        break;
    }
    case 219630:
    {
        returnValue = F("Meisenkamp");
        break;
    }
    case 219631:
    {
        returnValue = F("Meisenkopfstr.");
        break;
    }
    case 219632:
    {
        returnValue = F("Meisenlauf");
        break;
    }
    case 219633:
    {
        returnValue = F("Meisenleite");
        break;
    }
    case 219634:
    {
        returnValue = F("Meisennest");
        break;
    }
    case 219635:
    {
        returnValue = F("Meisenpadd");
        break;
    }
    case 219636:
    {
        returnValue = F("Meisenpfad");
        break;
    }
    case 219637:
    {
        returnValue = F("Meisenrech");
        break;
    }
    case 219638:
    {
        returnValue = F("Meisenring");
        break;
    }
    case 219639:
    {
        returnValue = F("Meisenschneise");
        break;
    }
    case 219640:
    {
        returnValue = F("Meisensteg");
        break;
    }
    case 219641:
    {
        returnValue = F("Meisensteig");
        break;
    }
    case 219642:
    {
        returnValue = F("Meisensteige");
        break;
    }
    case 219643:
    {
        returnValue = F("Meisenstieg");
        break;
    }
    case 219644:
    {
        returnValue = F("Meisenstr.");
        break;
    }
    case 219645:
    {
        returnValue = F("Meisentalsiedlung");
        break;
    }
    case 219646:
    {
        returnValue = F("Meisentalstr.");
        break;
    }
    case 219647:
    {
        returnValue = F("Meisentalweg");
        break;
    }
    case 219648:
    {
        returnValue = F("Meisenthaler Weg");
        break;
    }
    case 219649:
    {
        returnValue = F("Meisentwiete");
        break;
    }
    case 219650:
    {
        returnValue = F("Meisenweg");
        break;
    }
    case 219651:
    {
        returnValue = F("Meisenwinkel");
        break;
    }
    case 219652:
    {
        returnValue = F("Meisenzahlstr.");
        break;
    }
    case 219653:
    {
        returnValue = F("Meisericher Str.");
        break;
    }
    case 219654:
    {
        returnValue = F("Meiserstr.");
        break;
    }
    case 219655:
    {
        returnValue = F("Meisfeldstr.");
        break;
    }
    case 219656:
    {
        returnValue = F("Meisham");
        break;
    }
    case 219657:
    {
        returnValue = F("Meisheide");
        break;
    }
    case 219658:
    {
        returnValue = F("Meisheide (old)");
        break;
    }
    case 219659:
    {
        returnValue = F("Meising");
        break;
    }
    case 219660:
    {
        returnValue = F("Meisingstr.");
        break;
    }
    case 219661:
    {
        returnValue = F("Meiskamp");
        break;
    }
    case 219662:
    {
        returnValue = F("Meislahnstr.");
        break;
    }
    case 219663:
    {
        returnValue = F("Meisleinsstr.");
        break;
    }
    case 219664:
    {
        returnValue = F("Meislweg");
        break;
    }
    case 219665:
    {
        returnValue = F("Meisnerstieg");
        break;
    }
    case 219666:
    {
        returnValue = F("Meisnerstr.");
        break;
    }
    case 219667:
    {
        returnValue = F("Meissener Str.");
        break;
    }
    case 219668:
    {
        returnValue = F("Meissener Weg");
        break;
    }
    case 219669:
    {
        returnValue = F("Meissnerstr.");
        break;
    }
    case 219670:
    {
        returnValue = F("Meister");
        break;
    }
    case 219671:
    {
        returnValue = F("Meister Eckhart Str.");
        break;
    }
    case 219672:
    {
        returnValue = F("Meister Ring");
        break;
    }
    case 219673:
    {
        returnValue = F("Meister Str.");
        break;
    }
    case 219674:
    {
        returnValue = F("Meister-Bode-Weg");
        break;
    }
    case 219675:
    {
        returnValue = F("Meister-Conrad-Str.");
        break;
    }
    case 219676:
    {
        returnValue = F("Meister-Eckehart-Str.");
        break;
    }
    case 219677:
    {
        returnValue = F("Meister-Eckhard Str.");
        break;
    }
    case 219678:
    {
        returnValue = F("Meister-Eckhard-Str.");
        break;
    }
    case 219679:
    {
        returnValue = F("Meister-Eckhart-Weg");
        break;
    }
    case 219680:
    {
        returnValue = F("Meister-Erhart-Str.");
        break;
    }
    case 219681:
    {
        returnValue = F("Meister-Erwin-Str.");
        break;
    }
    case 219682:
    {
        returnValue = F("Meister-Geerds-Str.");
        break;
    }
    case 219683:
    {
        returnValue = F("Meister-Geerds-Zwinger");
        break;
    }
    case 219684:
    {
        returnValue = F("Meister-Gerhard-Str.");
        break;
    }
    case 219685:
    {
        returnValue = F("Meister-Heinrich-Str.");
        break;
    }
    case 219686:
    {
        returnValue = F("Meister-Hermann-Str.");
        break;
    }
    case 219687:
    {
        returnValue = F("Meister-Jörg-Str.");
        break;
    }
    case 219688:
    {
        returnValue = F("Meister-Knick-Weg");
        break;
    }
    case 219689:
    {
        returnValue = F("Meister-Lampe-Weg");
        break;
    }
    case 219690:
    {
        returnValue = F("Meister-Simon-Str.");
        break;
    }
    case 219691:
    {
        returnValue = F("Meister-Stütting-Str.");
        break;
    }
    case 219692:
    {
        returnValue = F("Meister-von-Meßkirch-Str.");
        break;
    }
    case 219693:
    {
        returnValue = F("Meisterberg");
        break;
    }
    case 219694:
    {
        returnValue = F("Meisterberg Höhenweg");
        break;
    }
    case 219695:
    {
        returnValue = F("Meisterberg Micheln");
        break;
    }
    case 219696:
    {
        returnValue = F("Meisterbergweg");
        break;
    }
    case 219697:
    {
        returnValue = F("Meistereck");
        break;
    }
    case 219698:
    {
        returnValue = F("Meisterei");
        break;
    }
    case 219699:
    {
        returnValue = F("Meisterei Heuweg");
        break;
    }
    case 219700:
    {
        returnValue = F("Meistereigasse");
        break;
    }
    case 219701:
    {
        returnValue = F("Meistereistr.");
        break;
    }
    case 219702:
    {
        returnValue = F("Meisterfeld");
        break;
    }
    case 219703:
    {
        returnValue = F("Meistergang");
        break;
    }
    case 219704:
    {
        returnValue = F("Meistergasse");
        break;
    }
    case 219705:
    {
        returnValue = F("Meisterhaus");
        break;
    }
    case 219706:
    {
        returnValue = F("Meisterhausstr.");
        break;
    }
    case 219707:
    {
        returnValue = F("Meisterhofstr.");
        break;
    }
    case 219708:
    {
        returnValue = F("Meisterjahnstr.");
        break;
    }
    case 219709:
    {
        returnValue = F("Meistermannskamp");
        break;
    }
    case 219710:
    {
        returnValue = F("Meistermannstr.");
        break;
    }
    case 219711:
    {
        returnValue = F("Meistermannsweg");
        break;
    }
    case 219712:
    {
        returnValue = F("Meistermannweg");
        break;
    }
    case 219713:
    {
        returnValue = F("Meisternebeneweg");
        break;
    }
    case 219714:
    {
        returnValue = F("Meisternhaldeweg");
        break;
    }
    case 219715:
    {
        returnValue = F("Meisternkopfweg");
        break;
    }
    case 219716:
    {
        returnValue = F("Meisternstr.");
        break;
    }
    case 219717:
    {
        returnValue = F("Meisterntunnel");
        break;
    }
    case 219718:
    {
        returnValue = F("Meisterreihe");
        break;
    }
    case 219719:
    {
        returnValue = F("Meisterselstr.");
        break;
    }
    case 219720:
    {
        returnValue = F("Meistersgasse");
        break;
    }
    case 219721:
    {
        returnValue = F("Meistersgrundweg");
        break;
    }
    case 219722:
    {
        returnValue = F("Meistershofener Str.");
        break;
    }
    case 219723:
    {
        returnValue = F("Meistersingerstr.");
        break;
    }
    case 219724:
    {
        returnValue = F("Meistersingerweg");
        break;
    }
    case 219725:
    {
        returnValue = F("Meisterstall");
        break;
    }
    case 219726:
    {
        returnValue = F("Meistersteig");
        break;
    }
    case 219727:
    {
        returnValue = F("Meisterstr.");
        break;
    }
    case 219728:
    {
        returnValue = F("Meistersweg");
        break;
    }
    case 219729:
    {
        returnValue = F("Meisterweg");
        break;
    }
    case 219730:
    {
        returnValue = F("Meisterwiesenweg");
        break;
    }
    case 219731:
    {
        returnValue = F("Meisteräcker");
        break;
    }
    case 219732:
    {
        returnValue = F("Meiswinkel");
        break;
    }
    case 219733:
    {
        returnValue = F("Meiswinkeler Str.");
        break;
    }
    case 219734:
    {
        returnValue = F("Meitingen Bahnhof (Westseite)");
        break;
    }
    case 219735:
    {
        returnValue = F("Meitinger Str.");
        break;
    }
    case 219736:
    {
        returnValue = F("Meitner Ring");
        break;
    }
    case 219737:
    {
        returnValue = F("Meitnerstr.");
        break;
    }
    case 219738:
    {
        returnValue = F("Meitnerweg");
        break;
    }
    case 219739:
    {
        returnValue = F("Meitzenbach");
        break;
    }
    case 219740:
    {
        returnValue = F("Meitzendorfer Str.");
        break;
    }
    case 219741:
    {
        returnValue = F("Meitzendorfer Weg");
        break;
    }
    case 219742:
    {
        returnValue = F("Meitzer Busch");
        break;
    }
    case 219743:
    {
        returnValue = F("Meitzer Str.");
        break;
    }
    case 219744:
    {
        returnValue = F("Meitzer Weg");
        break;
    }
    case 219745:
    {
        returnValue = F("Meixlerstr.");
        break;
    }
    case 219746:
    {
        returnValue = F("Meixnerstr.");
        break;
    }
    case 219747:
    {
        returnValue = F("Meißelstr.");
        break;
    }
    case 219748:
    {
        returnValue = F("Meißelweg");
        break;
    }
    case 219749:
    {
        returnValue = F("Meißenbachstr.");
        break;
    }
    case 219750:
    {
        returnValue = F("Meißenberg");
        break;
    }
    case 219751:
    {
        returnValue = F("Meißendorfer Kirchweg");
        break;
    }
    case 219752:
    {
        returnValue = F("Meißendorfer Str.");
        break;
    }
    case 219753:
    {
        returnValue = F("Meißendorfer Weg");
        break;
    }
    case 219754:
    {
        returnValue = F("Meißener Bruch");
        break;
    }
    case 219755:
    {
        returnValue = F("Meißener Dorfstr.");
        break;
    }
    case 219756:
    {
        returnValue = F("Meißener Mühlenweg");
        break;
    }
    case 219757:
    {
        returnValue = F("Meißener Str.");
        break;
    }
    case 219758:
    {
        returnValue = F("Meißener Weg");
        break;
    }
    case 219759:
    {
        returnValue = F("Meißenheimer Str.");
        break;
    }
    case 219760:
    {
        returnValue = F("Meißenstr.");
        break;
    }
    case 219761:
    {
        returnValue = F("Meißenwies");
        break;
    }
    case 219762:
    {
        returnValue = F("Meißering");
        break;
    }
    case 219763:
    {
        returnValue = F("Meißeweg");
        break;
    }
    case 219764:
    {
        returnValue = F("Meißewiesenweg");
        break;
    }
    case 219765:
    {
        returnValue = F("Meißingerweg");
        break;
    }
    case 219766:
    {
        returnValue = F("Meißner Allee");
        break;
    }
    case 219767:
    {
        returnValue = F("Meißner Berg");
        break;
    }
    case 219768:
    {
        returnValue = F("Meißner Blick");
        break;
    }
    case 219769:
    {
        returnValue = F("Meißner Gasse");
        break;
    }
    case 219770:
    {
        returnValue = F("Meißner Landstr.");
        break;
    }
    case 219771:
    {
        returnValue = F("Meißner Platz");
        break;
    }
    case 219772:
    {
        returnValue = F("Meißner Ring");
        break;
    }
    case 219773:
    {
        returnValue = F("Meißner Str.");
        break;
    }
    case 219774:
    {
        returnValue = F("Meißner Weg");
        break;
    }
    case 219775:
    {
        returnValue = F("Meißner-Kreisel");
        break;
    }
    case 219776:
    {
        returnValue = F("Meißner-Radweg");
        break;
    }
    case 219777:
    {
        returnValue = F("Meißnerbergstr.");
        break;
    }
    case 219778:
    {
        returnValue = F("Meißnerblick");
        break;
    }
    case 219779:
    {
        returnValue = F("Meißnergasse");
        break;
    }
    case 219780:
    {
        returnValue = F("Meißnergrund");
        break;
    }
    case 219781:
    {
        returnValue = F("Meißnerring");
        break;
    }
    case 219782:
    {
        returnValue = F("Meißnersgasse");
        break;
    }
    case 219783:
    {
        returnValue = F("Meißnerstr.");
        break;
    }
    case 219784:
    {
        returnValue = F("Meißnerweg");
        break;
    }
    case 219785:
    {
        returnValue = F("Meke-van-Heiden-Str.");
        break;
    }
    case 219786:
    {
        returnValue = F("Mekonikusweg");
        break;
    }
    case 219787:
    {
        returnValue = F("Melacpass");
        break;
    }
    case 219788:
    {
        returnValue = F("Melanchthonplatz");
        break;
    }
    case 219789:
    {
        returnValue = F("Melanchthonstr.");
        break;
    }
    case 219790:
    {
        returnValue = F("Melanchthonweg");
        break;
    }
    case 219791:
    {
        returnValue = F("Meland");
        break;
    }
    case 219792:
    {
        returnValue = F("Melanderplatz");
        break;
    }
    case 219793:
    {
        returnValue = F("Melanderstr.");
        break;
    }
    case 219794:
    {
        returnValue = F("Melandstr.");
        break;
    }
    case 219795:
    {
        returnValue = F("Melanger");
        break;
    }
    case 219796:
    {
        returnValue = F("Melaniastr.");
        break;
    }
    case 219797:
    {
        returnValue = F("Melanieweg");
        break;
    }
    case 219798:
    {
        returnValue = F("Melanija-Anlage");
        break;
    }
    case 219799:
    {
        returnValue = F("Melassering");
        break;
    }
    case 219800:
    {
        returnValue = F("Melassestr.");
        break;
    }
    case 219801:
    {
        returnValue = F("Melatener Str.");
        break;
    }
    case 219802:
    {
        returnValue = F("Melatener Weg");
        break;
    }
    case 219803:
    {
        returnValue = F("Melatenstr.");
        break;
    }
    case 219804:
    {
        returnValue = F("Melatenweg");
        break;
    }
    case 219805:
    {
        returnValue = F("Melau");
        break;
    }
    case 219806:
    {
        returnValue = F("Melaune");
        break;
    }
    case 219807:
    {
        returnValue = F("Melauner Str.");
        break;
    }
    case 219808:
    {
        returnValue = F("Melbach");
        break;
    }
    case 219809:
    {
        returnValue = F("Melbacher Str.");
        break;
    }
    case 219810:
    {
        returnValue = F("Melbacher Weg");
        break;
    }
    case 219811:
    {
        returnValue = F("Melbecke");
        break;
    }
    case 219812:
    {
        returnValue = F("Melbecker Berg");
        break;
    }
    case 219813:
    {
        returnValue = F("Melbecker Str.");
        break;
    }
    case 219814:
    {
        returnValue = F("Melbeckstr.");
        break;
    }
    case 219815:
    {
        returnValue = F("Melbenring");
        break;
    }
    case 219816:
    {
        returnValue = F("Melbenweg");
        break;
    }
    case 219817:
    {
        returnValue = F("Melbergasse");
        break;
    }
    case 219818:
    {
        returnValue = F("Melbernsteigstr.");
        break;
    }
    case 219819:
    {
        returnValue = F("Melbersmühlstr.");
        break;
    }
    case 219820:
    {
        returnValue = F("Melberstr.");
        break;
    }
    case 219821:
    {
        returnValue = F("Melbinger");
        break;
    }
    case 219822:
    {
        returnValue = F("Melbishaldenweg");
        break;
    }
    case 219823:
    {
        returnValue = F("Melborner Str.");
        break;
    }
    case 219824:
    {
        returnValue = F("Melbournestr.");
        break;
    }
    case 219825:
    {
        returnValue = F("Melchenberg");
        break;
    }
    case 219826:
    {
        returnValue = F("Melcherbruch");
        break;
    }
    case 219827:
    {
        returnValue = F("Melcherleshorn");
        break;
    }
    case 219828:
    {
        returnValue = F("Melchersberger Str.");
        break;
    }
    case 219829:
    {
        returnValue = F("Melchershof");
        break;
    }
    case 219830:
    {
        returnValue = F("Melchersstr.");
        break;
    }
    case 219831:
    {
        returnValue = F("Melcherstiege");
        break;
    }
    case 219832:
    {
        returnValue = F("Melcherstätte");
        break;
    }
    case 219833:
    {
        returnValue = F("Melchertsburger Weg");
        break;
    }
    case 219834:
    {
        returnValue = F("Melcherweg");
        break;
    }
    case 219835:
    {
        returnValue = F("Melchhof");
        break;
    }
    case 219836:
    {
        returnValue = F("Melchhofer Weg");
        break;
    }
    case 219837:
    {
        returnValue = F("Melchinger Str.");
        break;
    }
    case 219838:
    {
        returnValue = F("Melchior-Bauer-Gasse");
        break;
    }
    case 219839:
    {
        returnValue = F("Melchior-Bauer-Str.");
        break;
    }
    case 219840:
    {
        returnValue = F("Melchior-Binder-Weg");
        break;
    }
    case 219841:
    {
        returnValue = F("Melchior-Brenner-Str.");
        break;
    }
    case 219842:
    {
        returnValue = F("Melchior-Elch-Str.");
        break;
    }
    case 219843:
    {
        returnValue = F("Melchior-Fanger-Str.");
        break;
    }
    case 219844:
    {
        returnValue = F("Melchior-Faul-Weg");
        break;
    }
    case 219845:
    {
        returnValue = F("Melchior-Feuerlein-Str.");
        break;
    }
    case 219846:
    {
        returnValue = F("Melchior-Franck-Str.");
        break;
    }
    case 219847:
    {
        returnValue = F("Melchior-Holl-Str.");
        break;
    }
    case 219848:
    {
        returnValue = F("Melchior-Huber-Str.");
        break;
    }
    case 219849:
    {
        returnValue = F("Melchior-Meyr-Str.");
        break;
    }
    case 219850:
    {
        returnValue = F("Melchior-Otto-Platz");
        break;
    }
    case 219851:
    {
        returnValue = F("Melchior-Paulus-Str.");
        break;
    }
    case 219852:
    {
        returnValue = F("Melchior-Schramm-Str.");
        break;
    }
    case 219853:
    {
        returnValue = F("Melchior-Schwoon-Str.");
        break;
    }
    case 219854:
    {
        returnValue = F("Melchior-Senft-Str.");
        break;
    }
    case 219855:
    {
        returnValue = F("Melchior-Steidl-Str.");
        break;
    }
    case 219856:
    {
        returnValue = F("Melchior-Tatzen-Weg");
        break;
    }
    case 219857:
    {
        returnValue = F("Melchiorsgrund");
        break;
    }
    case 219858:
    {
        returnValue = F("Melchiorshaistr.");
        break;
    }
    case 219859:
    {
        returnValue = F("Melchiorshauser Str.");
        break;
    }
    case 219860:
    {
        returnValue = F("Melchiorstr.");
        break;
    }
    case 219861:
    {
        returnValue = F("Melchiorweg");
        break;
    }
    case 219862:
    {
        returnValue = F("Melchisengoren");
        break;
    }
    case 219863:
    {
        returnValue = F("Melchower Feld");
        break;
    }
    case 219864:
    {
        returnValue = F("Melchower Ring");
        break;
    }
    case 219865:
    {
        returnValue = F("Melchower Str.");
        break;
    }
    case 219866:
    {
        returnValue = F("Melchower Weg");
        break;
    }
    case 219867:
    {
        returnValue = F("Melchweg");
        break;
    }
    case 219868:
    {
        returnValue = F("Meldauer Str.");
        break;
    }
    case 219869:
    {
        returnValue = F("Meldauer Weg");
        break;
    }
    case 219870:
    {
        returnValue = F("Meldenweg");
        break;
    }
    case 219871:
    {
        returnValue = F("Meldestr.");
        break;
    }
    case 219872:
    {
        returnValue = F("Meldeweg");
        break;
    }
    case 219873:
    {
        returnValue = F("Meldinger Weg");
        break;
    }
    case 219874:
    {
        returnValue = F("Meldorfer Moor");
        break;
    }
    case 219875:
    {
        returnValue = F("Meldorfer Str.");
        break;
    }
    case 219876:
    {
        returnValue = F("Meldorfer Weg");
        break;
    }
    case 219877:
    {
        returnValue = F("Meleckweg");
        break;
    }
    case 219878:
    {
        returnValue = F("Melessen");
        break;
    }
    case 219879:
    {
        returnValue = F("Melfortweg");
        break;
    }
    case 219880:
    {
        returnValue = F("Melgershäuser Str.");
        break;
    }
    case 219881:
    {
        returnValue = F("Melibocusstr.");
        break;
    }
    case 219882:
    {
        returnValue = F("Melibokusblick");
        break;
    }
    case 219883:
    {
        returnValue = F("Melibokusstr.");
        break;
    }
    case 219884:
    {
        returnValue = F("Melibokusweg");
        break;
    }
    case 219885:
    {
        returnValue = F("Melicker Str.");
        break;
    }
    case 219886:
    {
        returnValue = F("Meline-Müller-Str.");
        break;
    }
    case 219887:
    {
        returnValue = F("Melissenstr.");
        break;
    }
    case 219888:
    {
        returnValue = F("Melissenweg");
        break;
    }
    case 219889:
    {
        returnValue = F("Melisseweg");
        break;
    }
    case 219890:
    {
        returnValue = F("Melitta-Bentz-Str.");
        break;
    }
    case 219891:
    {
        returnValue = F("Melittastr.");
        break;
    }
    case 219892:
    {
        returnValue = F("Melkberg");
        break;
    }
    case 219893:
    {
        returnValue = F("Melkeberg");
        break;
    }
    case 219894:
    {
        returnValue = F("Melkendorfer Hauptstr.");
        break;
    }
    case 219895:
    {
        returnValue = F("Melkendorfer Schulstr.");
        break;
    }
    case 219896:
    {
        returnValue = F("Melkendorfer Str.");
        break;
    }
    case 219897:
    {
        returnValue = F("Melkenkamp");
        break;
    }
    case 219898:
    {
        returnValue = F("Melkenteichweg");
        break;
    }
    case 219899:
    {
        returnValue = F("Melkenweg");
        break;
    }
    case 219900:
    {
        returnValue = F("Melkeplatz");
        break;
    }
    case 219901:
    {
        returnValue = F("Melker Str.");
        break;
    }
    case 219902:
    {
        returnValue = F("Melkerbrücke");
        break;
    }
    case 219903:
    {
        returnValue = F("Melkerpad");
        break;
    }
    case 219904:
    {
        returnValue = F("Melkerser Hauptstr.");
        break;
    }
    case 219905:
    {
        returnValue = F("Melkerser Str.");
        break;
    }
    case 219906:
    {
        returnValue = F("Melkersgang");
        break;
    }
    case 219907:
    {
        returnValue = F("Melkerstieg");
        break;
    }
    case 219908:
    {
        returnValue = F("Melkerstr.");
        break;
    }
    case 219909:
    {
        returnValue = F("Melkersweg");
        break;
    }
    case 219910:
    {
        returnValue = F("Melkerweg");
        break;
    }
    case 219911:
    {
        returnValue = F("Melkesteig");
        break;
    }
    case 219912:
    {
        returnValue = F("Melkeweg");
        break;
    }
    case 219913:
    {
        returnValue = F("Melkgasse");
        break;
    }
    case 219914:
    {
        returnValue = F("Melkhüttenweg");
        break;
    }
    case 219915:
    {
        returnValue = F("Melkkutschers Hoff");
        break;
    }
    case 219916:
    {
        returnValue = F("Melkofer Str.");
        break;
    }
    case 219917:
    {
        returnValue = F("Melkower Hauptstr.");
        break;
    }
    case 219918:
    {
        returnValue = F("Melkpad");
        break;
    }
    case 219919:
    {
        returnValue = F("Melkpfad");
        break;
    }
    case 219920:
    {
        returnValue = F("Melkpättken");
        break;
    }
    case 219921:
    {
        returnValue = F("Melksett");
        break;
    }
    case 219922:
    {
        returnValue = F("Melkstattweg");
        break;
    }
    case 219923:
    {
        returnValue = F("Melkstedtdiek");
        break;
    }
    case 219924:
    {
        returnValue = F("Melkstraat");
        break;
    }
    case 219925:
    {
        returnValue = F("Melkstroot");
        break;
    }
    case 219926:
    {
        returnValue = F("Melktal");
        break;
    }
    case 219927:
    {
        returnValue = F("Melkwech");
        break;
    }
    case 219928:
    {
        returnValue = F("Melkweg");
        break;
    }
    case 219929:
    {
        returnValue = F("Mellagestr.");
        break;
    }
    case 219930:
    {
        returnValue = F("Mellauer Str.");
        break;
    }
    case 219931:
    {
        returnValue = F("Melle-Klinkenborg-Str.");
        break;
    }
    case 219932:
    {
        returnValue = F("Mellenau");
        break;
    }
    case 219933:
    {
        returnValue = F("Mellenbacher Str.");
        break;
    }
    case 219934:
    {
        returnValue = F("Mellenberg");
        break;
    }
    case 219935:
    {
        returnValue = F("Mellenbergstr.");
        break;
    }
    case 219936:
    {
        returnValue = F("Mellendorfer Kirchweg");
        break;
    }
    case 219937:
    {
        returnValue = F("Mellendorfer Str.");
        break;
    }
    case 219938:
    {
        returnValue = F("Mellener Str.");
        break;
    }
    case 219939:
    {
        returnValue = F("Mellener Weg");
        break;
    }
    case 219940:
    {
        returnValue = F("Mellenkamp");
        break;
    }
    case 219941:
    {
        returnValue = F("Mellenrader Weg");
        break;
    }
    case 219942:
    {
        returnValue = F("Mellenseestr.");
        break;
    }
    case 219943:
    {
        returnValue = F("Mellenweg");
        break;
    }
    case 219944:
    {
        returnValue = F("Meller Berg");
        break;
    }
    case 219945:
    {
        returnValue = F("Meller Hochzeitsallee");
        break;
    }
    case 219946:
    {
        returnValue = F("Meller Landstr.");
        break;
    }
    case 219947:
    {
        returnValue = F("Meller Str.");
        break;
    }
    case 219948:
    {
        returnValue = F("Meller Weg");
        break;
    }
    case 219949:
    {
        returnValue = F("Mellerhöhe");
        break;
    }
    case 219950:
    {
        returnValue = F("Mellerstr.");
        break;
    }
    case 219951:
    {
        returnValue = F("Mellerweg");
        break;
    }
    case 219952:
    {
        returnValue = F("Melleschweg");
        break;
    }
    case 219953:
    {
        returnValue = F("Melleweg");
        break;
    }
    case 219954:
    {
        returnValue = F("Mellhörn");
        break;
    }
    case 219955:
    {
        returnValue = F("Melli-Beese-Ring");
        break;
    }
    case 219956:
    {
        returnValue = F("Melli-Beese-Str.");
        break;
    }
    case 219957:
    {
        returnValue = F("Melli-Beese-Weg");
        break;
    }
    case 219958:
    {
        returnValue = F("Mellicher Berg");
        break;
    }
    case 219959:
    {
        returnValue = F("Melliehaweg");
        break;
    }
    case 219960:
    {
        returnValue = F("Melliner Str.");
        break;
    }
    case 219961:
    {
        returnValue = F("Mellinger Feld");
        break;
    }
    case 219962:
    {
        returnValue = F("Mellinger Str.");
        break;
    }
    case 219963:
    {
        returnValue = F("Mellingerstr.");
        break;
    }
    case 219964:
    {
        returnValue = F("Mellinghausstr.");
        break;
    }
    case 219965:
    {
        returnValue = F("Mellinghofer Str.");
        break;
    }
    case 219966:
    {
        returnValue = F("Mellinghofstr.");
        break;
    }
    case 219967:
    {
        returnValue = F("Mellinghäuser Kirchweg");
        break;
    }
    case 219968:
    {
        returnValue = F("Mellinghäuser Str.");
        break;
    }
    case 219969:
    {
        returnValue = F("Mellinstr.");
        break;
    }
    case 219970:
    {
        returnValue = F("Mellinweg");
        break;
    }
    case 219971:
    {
        returnValue = F("Mellisstr.");
        break;
    }
    case 219972:
    {
        returnValue = F("Mellnauer Str.");
        break;
    }
    case 219973:
    {
        returnValue = F("Mellnitz");
        break;
    }
    case 219974:
    {
        returnValue = F("Mellnsdorf");
        break;
    }
    case 219975:
    {
        returnValue = F("Mellnsdorfer Str.");
        break;
    }
    case 219976:
    {
        returnValue = F("Melloh");
        break;
    }
    case 219977:
    {
        returnValue = F("Mellostr.");
        break;
    }
    case 219978:
    {
        returnValue = F("Mellricher Str.");
        break;
    }
    case 219979:
    {
        returnValue = F("Mellrichstädter Str.");
        break;
    }
    case 219980:
    {
        returnValue = F("Mellumer Str.");
        break;
    }
    case 219981:
    {
        returnValue = F("Mellumer Weg");
        break;
    }
    case 219982:
    {
        returnValue = F("Mellumplate");
        break;
    }
    case 219983:
    {
        returnValue = F("Mellumring");
        break;
    }
    case 219984:
    {
        returnValue = F("Mellumstr.");
        break;
    }
    case 219985:
    {
        returnValue = F("Mellumweg");
        break;
    }
    case 219986:
    {
        returnValue = F("Mellwiesenstr.");
        break;
    }
    case 219987:
    {
        returnValue = F("Melm");
        break;
    }
    case 219988:
    {
        returnValue = F("Melmcheweg");
        break;
    }
    case 219989:
    {
        returnValue = F("Melmeke");
        break;
    }
    case 219990:
    {
        returnValue = F("Melmengasse");
        break;
    }
    case 219991:
    {
        returnValue = F("Melmensee");
        break;
    }
    case 219992:
    {
        returnValue = F("Melmenäcker");
        break;
    }
    case 219993:
    {
        returnValue = F("Melmer Weg");
        break;
    }
    case 219994:
    {
        returnValue = F("Melmeringen");
        break;
    }
    case 219995:
    {
        returnValue = F("Melmesfeld");
        break;
    }
    case 219996:
    {
        returnValue = F("Melmstr.");
        break;
    }
    case 219997:
    {
        returnValue = F("Melmsträßchen");
        break;
    }
    case 219998:
    {
        returnValue = F("Melmweg");
        break;
    }
    case 219999:
    {
        returnValue = F("Melmäcker");
        break;
    }
    case 220000:
    {
        returnValue = F("Melniker Str.");
        break;
    }
    case 220001:
    {
        returnValue = F("Melnknop");
        break;
    }
    case 220002:
    {
        returnValue = F("Melnwai");
        break;
    }
    case 220003:
    {
        returnValue = F("Melperser Str.");
        break;
    }
    case 220004:
    {
        returnValue = F("Melpertser Str.");
        break;
    }
    case 220005:
    {
        returnValue = F("Melpertser Weg");
        break;
    }
    case 220006:
    {
        returnValue = F("Melpitzer Str.");
        break;
    }
    case 220007:
    {
        returnValue = F("Melroseweg");
        break;
    }
    case 220008:
    {
        returnValue = F("Melsbacher Hohl");
        break;
    }
    case 220009:
    {
        returnValue = F("Melsbacher Str.");
        break;
    }
    case 220010:
    {
        returnValue = F("Melschedestr.");
        break;
    }
    case 220011:
    {
        returnValue = F("Melschen Kamp");
        break;
    }
    case 220012:
    {
        returnValue = F("Melsdorfer Feldweg");
        break;
    }
    case 220013:
    {
        returnValue = F("Melsdorfer Str.");
        break;
    }
    case 220014:
    {
        returnValue = F("Melsdorfer Weg");
        break;
    }
    case 220015:
    {
        returnValue = F("Melsenseehof");
        break;
    }
    case 220016:
    {
        returnValue = F("Melstergraben");
        break;
    }
    case 220017:
    {
        returnValue = F("Melsterhag");
        break;
    }
    case 220018:
    {
        returnValue = F("Melsterstr.");
        break;
    }
    case 220019:
    {
        returnValue = F("Melstrup-Siedlung");
        break;
    }
    case 220020:
    {
        returnValue = F("Melstruper Hauptstr.");
        break;
    }
    case 220021:
    {
        returnValue = F("Melstruper Str.");
        break;
    }
    case 356434:
    {
        returnValue = F("m-Gestell");
        break;
    }
    case 356435:
    {
        returnValue = F("mittler Murrweg");
        break;
    }
    case 356436:
    {
        returnValue = F("mittlere Bergstr.");
        break;
    }
    case 356437:
    {
        returnValue = F("mittlere Steige");
        break;
    }
    case 356438:
    {
        returnValue = F("mittlerer Auhaldenweg");
        break;
    }
    case 356439:
    {
        returnValue = F("mittlerer Buchweg");
        break;
    }
    case 356440:
    {
        returnValue = F("mittlerer Eckweg");
        break;
    }
    case 356441:
    {
        returnValue = F("mittlerer Glasbergweg");
        break;
    }
    case 356442:
    {
        returnValue = F("mittlerer Hangweg");
        break;
    }
    case 356443:
    {
        returnValue = F("mittlerer Schächtrigweg");
        break;
    }
    case 356444:
    {
        returnValue = F("motec-data");
        break;
    }
    case 356445:
    {
        returnValue = F("museum");
        break;
    }
    case 356446:
    {
        returnValue = F("muß weiter getrackt werden");
        break;
    }
    }
    return returnValue;
}
