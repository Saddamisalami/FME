#include <Arduino.h>

#include "variables.h"

/*
toDo:
-Einsatzstichworte
	-Deutschland
		-Baden-Württemberg
		-Berlin
		-Hamburg
		-Mecklenburg-Vorpommern
		-Niedersachsen
		-Saarland
		-Sachsen
		-Sachsen-Anhalt
done:

-Einsatzstichworte
			-Polizei
			-THW
	-Deutschland
		-Bayern
		-Brandenburg
		-Bremen
		-Hessen
		-Nordrhein-Westfalen
		-Rheinland-Pfalz
		-Schleswig-Holstein
		-Thüringen
*/
String getAlarmTypeText_DE_POL(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 601:
	{
		currentAlarmText = F("P BR"); // Polizei Bereitstellung
		break;
	}
	case 602:
	{
		currentAlarmText = F("P BOMBE"); // Polizei Bombendrohung
		break;
	}
	case 603:
	{
		currentAlarmText = F("P USBV"); // Polizei USBV-Fund
		break;
	}
	case 604:
	{
		currentAlarmText = F("P GEISEL"); // Polizei Geisellage
		break;
	}
	case 605:
	{
		currentAlarmText = F("P SEK"); // Polizei SEK Einsatz
		break;
	}
	case 606:
	{
		currentAlarmText = F("P LEBEL"); // Polizei Lebensbedrohliche Lage
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_THW(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 501:
	{
		currentAlarmText = F("THW"); // THW Technischer Zug
		break;
	}
	case 502:
	{
		currentAlarmText = F("THW SEG"); // THW Spezialeinsatzgruppe
		break;
	}
	case 503:
	{
		currentAlarmText = F("THW FB"); // THW Fachberatung
		break;
	}
	case 504:
	{
		currentAlarmText = F("THW BEL"); // THW Fachgruppe Beleuchtung
		break;
	}
	case 505:
	{
		currentAlarmText = F("THW BRB"); // THW Fachgruppe Brückenbau
		break;
	}
	case 506:
	{
		currentAlarmText = F("THW E"); // THW Fachgruppe Elektroversorgung
		break;
	}
	case 507:
	{
		currentAlarmText = F("THW FK"); // THW Fachgruppe Führung und Kommunikation
		break;
	}
	case 508:
	{
		currentAlarmText = F("THW WV"); // THW Fachgruppe Weitverkehrstrupp
		break;
	}
	case 509:
	{
		currentAlarmText = F("THW HÖRG"); // THW Fachgruppe Höhenrettung
		break;
	}
	case 510:
	{
		currentAlarmText = F("THW I"); // THW Fachgruppe Infrastruktur
		break;
	}
	case 511:
	{
		currentAlarmText = F("THW LOG V"); // THW Fachgruppe Logistik, Versorgungstrupp
		break;
	}
	case 512:
	{
		currentAlarmText = F("THW LOG M"); // THW Fachgruppe Logistik, Materialerhaltungstrupp
		break;
	}
	case 513:
	{
		currentAlarmText = F("THW ORT"); // THW Fachgruppe Ortung
		break;
	}
	case 514:
	{
		currentAlarmText = F("THW ÖL"); // THW Fachgruppe Ölwehr
		break;
	}
	case 515:
	{
		currentAlarmText = F("THW R"); // THW Fachgruppe Räumen
		break;
	}
	case 516:
	{
		currentAlarmText = F("THW TW"); // THW Fachgruppe Trinkwasserversorgung
		break;
	}
	case 517:
	{
		currentAlarmText = F("THW SPR"); // THW Fachgruppe Sprengen
		break;
	}
	case 518:
	{
		currentAlarmText = F("THW WASSER"); // THW Fachgruppe Wassergefahren
		break;
	}
	case 519:
	{
		currentAlarmText = F("THW WP"); // THW Fachgruppe Wasserschaden, Pumpen
		break;
	}
	case 520:
	{
		currentAlarmText = F("THW EGS"); // THW Technischer Zug mit Einsatzgerüstsystem
		break;
	}
	case 521:
	{
		currentAlarmText = F("THW ASH"); // THW Technischer Zug mit Abstützsystem-Holz
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}

String getAlarmTypeText_DE_BW(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}
	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_BY(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 101:
	{
		currentAlarmText = F("B 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("B 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("B 2 PERSON");
		break;
	}
	case 104:
	{
		currentAlarmText = F("B 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("B 3 PERSON");
		break;
	}
	case 106:
	{
		currentAlarmText = F("B 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("B 5");
		break;
	}
	case 108:
	{
		currentAlarmText = F("B 6");
		break;
	}
	case 109:
	{
		currentAlarmText = F("B 7");
		break;
	}
	case 110:
	{
		currentAlarmText = F("B 8");
		break;
	}
	case 111:
	{
		currentAlarmText = F("B BMA");
		break;
	}
	case 112:
	{
		currentAlarmText = F("B BOOT");
		break;
	}
	case 113:
	{
		currentAlarmText = F("B ELEKTROANLAGE");
		break;
	}
	case 114:
	{
		currentAlarmText = F("B SCHIENENTUNNEL");
		break;
	}
	case 115:
	{
		currentAlarmText = F("B SCHIFF");
		break;
	}
	case 116:
	{
		currentAlarmText = F("B STRAßENTUNNEL");
		break;
	}
	case 117:
	{
		currentAlarmText = F("B WALD");
		break;
	}
	case 118:
	{
		currentAlarmText = F("B ZUG");
		break;
	}
	case 201:
	{
		currentAlarmText = F("THL AMOK FW");
		break;
	}
	case 202:
	{
		currentAlarmText = F("THL BELEUCHTUNG");
		break;
	}
	case 203:
	{
		currentAlarmText = F("THL BOMBENDROHUNG");
		break;
	}
	case 204:
	{
		currentAlarmText = F("THL BOMBENFUND");
		break;
	}
	case 205:
	{
		currentAlarmText = F("THL ERKUNDUNG");
		break;
	}
	case 206:
	{
		currentAlarmText = F("THL FIRST RESPONDER");
		break;
	}
	case 207:
	{
		currentAlarmText = F("THL GEBÄUDEEINSTURZ");
		break;
	}
	case 208:
	{
		currentAlarmText = F("THL GROßTIERRETTUNG");
		break;
	}
	case 209:
	{
		currentAlarmText = F("THL HUBSCHRAUBERLANDUNG");
		break;
	}
	case 210:
	{
		currentAlarmText = F("THL P AUFZUG");
		break;
	}
	case 211:
	{
		currentAlarmText = F("THL P RETTUNG H / T");
		break;
	}
	case 212:
	{
		currentAlarmText = F("THL P STRAßENBAHN");
		break;
	}
	case 213:
	{
		currentAlarmText = F("THL P STROM");
		break;
	}
	case 214:
	{
		currentAlarmText = F("THL P U-BAHN");
		break;
	}
	case 215:
	{
		currentAlarmText = F("THL P VERSCHÜTTET");
		break;
	}
	case 216:
	{
		currentAlarmText = F("THL P EINGESCHLOSSEN");
		break;
	}
	case 217:
	{
		currentAlarmText = F("THL P ZUG");
		break;
	}
	case 218:
	{
		currentAlarmText = F("THL RETTUNGSKORB");
		break;
	}
	case 219:
	{
		currentAlarmText = F("THL 1");
		break;
	}
	case 220:
	{
		currentAlarmText = F("THL 2");
		break;
	}
	case 221:
	{
		currentAlarmText = F("THL 3");
		break;
	}
	case 222:
	{
		currentAlarmText = F("THL 4");
		break;
	}
	case 223:
	{
		currentAlarmText = F("THL 5");
		break;
	}
	case 224:
	{
		currentAlarmText = F("THL SCHIENE");
		break;
	}
	case 225:
	{
		currentAlarmText = F("THL WASSER");
		break;
	}
	case 226:
	{
		currentAlarmText = F("THL TRAGEHILFE");
		break;
	}
	case 227:
	{
		currentAlarmText = F("THL UNWETTER");
		break;
	}
	case 228:
	{
		currentAlarmText = F("THL VU FLUGZEUG 1");
		break;
	}
	case 229:
	{
		currentAlarmText = F("THL VU FLUGZEUG 2");
		break;
	}
	case 230:
	{
		currentAlarmText = F("THL VU SCHIFF KOLLISION");
		break;
	}
	case 231:
	{
		currentAlarmText = F("THL VU SCHIFF LECK");
		break;
	}
	case 232:
	{
		currentAlarmText = F("THL VU ZUG");
		break;
	}
	case 301:
	{
		currentAlarmText = F("ABC 1");
		break;
	}
	case 302:
	{
		currentAlarmText = F("ABC KRAFTSTOFF");
		break;
	}
	case 303:
	{
		currentAlarmText = F("ABC 2");
		break;
	}
	case 304:
	{
		currentAlarmText = F("ABC 3");
		break;
	}
	case 305:
	{
		currentAlarmText = F("ABC B ATOM");
		break;
	}
	case 306:
	{
		currentAlarmText = F("ABC B");
		break;
	}
	case 307:
	{
		currentAlarmText = F("ABC B BIO / CHEMIE");
		break;
	}
	case 308:
	{
		currentAlarmText = F("ABC THL ATOM");
		break;
	}
	case 309:
	{
		currentAlarmText = F("ABC THL BIO / CHEMIE");
		break;
	}
	case 310:
	{
		currentAlarmText = F("ABC EXPLOSION");
		break;
	}
	case 311:
	{
		currentAlarmText = F("ABC ÖL WASSER");
		break;
	}
	case 312:
	{
		currentAlarmText = F("ABC ÖL LAND");
		break;
	}
	case 313:
	{
		currentAlarmText = F("ABC GEFAHRSTOFFMELDEANLAGE");
		break;
	}
	case 401:
	{
		currentAlarmText = F("RD 1");
		break;
	}
	case 402:
	{
		currentAlarmText = F("RD 2");
		break;
	}
	case 403:
	{
		currentAlarmText = F("RD 2-KIND");
		break;
	}
	case 404:
	{
		currentAlarmText = F("RD 3");
		break;
	}
	case 405:
	{
		currentAlarmText = F("RD 4");
		break;
	}
	case 406:
	{
		currentAlarmText = F("RD 5");
		break;
	}
	case 407:
	{
		currentAlarmText = F("RD MANV 10 – 15");
		break;
	}
	case 408:
	{
		currentAlarmText = F("RD MANV 16 – 25");
		break;
	}
	case 409:
	{
		currentAlarmText = F("RD MANV 26 – 50");
		break;
	}
	case 410:
	{
		currentAlarmText = F("RD MANV 51 – 100");
		break;
	}
	case 411:
	{
		currentAlarmText = F("RD MANV ab 100");
		break;
	}
	case 412:
	{
		currentAlarmText = F("RD BERGRETTUNG");
		break;
	}
	case 413:
	{
		currentAlarmText = F("RD WASSERNOT 0");
		break;
	}
	case 414:
	{
		currentAlarmText = F("RD WASSERNOT 1");
		break;
	}
	case 415:
	{
		currentAlarmText = F("RD WASSERNOT 2");
		break;
	}
	case 416:
	{
		currentAlarmText = F("RD WASSERNOT 3");
		break;
	}
	case 417:
	{
		currentAlarmText = F("RD WASSERNOT 4");
		break;
	}
	case 418:
	{
		currentAlarmText = F("RD WASSERNOT 5");
		break;
	}
	case 419:
	{
		currentAlarmText = F("RD TAUCHUNFALL");
		break;
	}
	case 420:
	{
		currentAlarmText = F("RD EISUNFALL 1");
		break;
	}
	case 421:
	{
		currentAlarmText = F("RD EISUNFALL 2");
		break;
	}
	case 422:
	{
		currentAlarmText = F("RD EISUNFALL 3");
		break;
	}
	case 423:
	{
		currentAlarmText = F("RD KTP");
		break;
	}
	case 424:
	{
		currentAlarmText = F("RD KTP/RTW");
		break;
	}
	case 425:
	{
		currentAlarmText = F("RD INFEKT GR4 / E");
		break;
	}
	case 426:
	{
		currentAlarmText = F("RD VEF");
		break;
	}
	case 427:
	{
		currentAlarmText = F("RD ITW");
		break;
	}
	case 428:
	{
		currentAlarmText = F("RD ITH");
		break;
	}
	case 429:
	{
		currentAlarmText = F("RD AMOK RD");
		break;
	}
	case 430:
	{
		currentAlarmText = F("RD ABSICHERUNG");
		break;
	}
	case 431:
	{
		currentAlarmText = F("RD SONSTIGE");
		break;
	}
	case 432:
	{
		currentAlarmText = F("RD BETREUUNG");
		break;
	}
	case 433:
	{
		currentAlarmText = F("RD HILFE / SONSTIGE");
		break;
	}
	case 434:
	{
		currentAlarmText = F("RD ÜBERÖRTLICH");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}
	case 701:
	{
		currentAlarmText = F("SON BELEUCHTUNG");
		break;
	}
	case 702:
	{
		currentAlarmText = F("SON EINGLEISEN");
		break;
	}
	case 703:
	{
		currentAlarmText = F("SON HILFE / SONSTIGES FW");
		break;
	}
	case 704:
	{
		currentAlarmText = F("SON HUBSCHRAUBERLANDUNG");
		break;
	}
	case 705:
	{
		currentAlarmText = F("SON MOTORRADSTREIFE");
		break;
	}
	case 706:
	{
		currentAlarmText = F("SON PSNV (B)");
		break;
	}
	case 707:
	{
		currentAlarmText = F("SON PSNV (E)");
		break;
	}
	case 708:
	{
		currentAlarmText = F("SON THW BEREITSCHAFT");
		break;
	}
	case 709:
	{
		currentAlarmText = F("SON TRAGEHILFE");
		break;
	}
	case 710:
	{
		currentAlarmText = F("SON ÜBERÖRTLICHER EINSATZ");
		break;
	}
	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_BE(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_BB(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 101:
	{
		currentAlarmText = F("B:Klein");
		break;
	}
	case 102:
	{
		currentAlarmText = F("B:Pkw");
		break;
	}
	case 103:
	{
		currentAlarmText = F("B:Lkw");
		break;
	}
	case 104:
	{
		currentAlarmText = F("B:Schornstein");
		break;
	}
	case 105:
	{
		currentAlarmText = F("B:Gebäude klein");
		break;
	}
	case 106:
	{
		currentAlarmText = F("B:Gebäude groß");
		break;
	}
	case 107:
	{
		currentAlarmText = F("B:Sonderobjekt");
		break;
	}
	case 108:
	{
		currentAlarmText = F("B:BMA");
		break;
	}
	case 109:
	{
		currentAlarmText = F("B:Fläche");
		break;
	}
	case 110:
	{
		currentAlarmText = F("B:Wald");
		break;
	}
	case 111:
	{
		currentAlarmText = F("B:Wald groß");
		break;
	}
	case 112:
	{
		currentAlarmText = F("B:Schiene");
		break;
	}
	case 113:
	{
		currentAlarmText = F("B:Boot");
		break;
	}
	case 114:
	{
		currentAlarmText = F("B:Schiff");
		break;
	}
	case 115:
	{
		currentAlarmText = F("B:Gefahrgut");
		break;
	}
	case 116:
	{
		currentAlarmText = F("B:Kleinflugzeug");
		break;
	}
	case 117:
	{
		currentAlarmText = F("B:Großflugzeug");
		break;
	}
	case 118:
	{
		currentAlarmText = F("B:Explosion");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H:klein");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H:Natur");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H:Hilfeleistung");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H:Türnotöffnung");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H:VU ohne P");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H:VU mit P");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H:VU Klemm");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H:VU LKW/Bus");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H:VU Schiene");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H:VU Schiff");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H:Flugzeugunfall klein");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H:Flugzeugunfall groß");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H:Person auf Schiene");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H:Person im Wasser/Eis");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H:Rettung aus Höhen und Tiefen");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H:Gas");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H:Gefahrgut klein");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H:Gefahrgut groß");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H:Einsturz");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H:Öl Land");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H:Öl auf Wasser");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H:Tier in Not");
		break;
	}
	case 223:
	{
		currentAlarmText = F("H:Kommunal");
		break;
	}
	case 224:
	{
		currentAlarmText = F("H:Person-TMR");
		break;
	}
	case 301:
	{
		currentAlarmText = F("K1:KTW");
		break;
	}
	case 302:
	{
		currentAlarmText = F("K2:KTW-Infektionsfahrt");
		break;
	}
	case 401:
	{
		currentAlarmText = F("R1N0 nt");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R1N0");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R2N0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R3N0");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R1N1");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R2N1");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R3N1");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R4N1");
		break;
	}
	case 409:
	{
		currentAlarmText = F("R2N2");
		break;
	}
	case 410:
	{
		currentAlarmText = F("R3N2");
		break;
	}
	case 411:
	{
		currentAlarmText = F("R4N2");
		break;
	}
	case 412:
	{
		currentAlarmText = F("R3N3");
		break;
	}
	case 413:
	{
		currentAlarmText = F("R4N3");
		break;
	}
	case 414:
	{
		currentAlarmText = F("R1N1 p");
		break;
	}
	case 415:
	{
		currentAlarmText = F("R1N1 f");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}
	case 701:
	{
		currentAlarmText = F("V1R");
		break;
	}
	case 702:
	{
		currentAlarmText = F("V1N");
		break;
	}
	case 703:
	{
		currentAlarmText = F("V2R");
		break;
	}
	case 704:
	{
		currentAlarmText = F("V2N");
		break;
	}
	case 705:
	{
		currentAlarmText = F("V3N");
		break;
	}
	case 706:
	{
		currentAlarmText = F("V4N");
		break;
	}
	case 707:
	{
		currentAlarmText = F("V5R");
		break;
	}
	case 801:
	{
		currentAlarmText = F("MANV-Klein");
		break;
	}
	case 802:
	{
		currentAlarmText = F("MANV-Mittel");
		break;
	}
	case 803:
	{
		currentAlarmText = F("MANV-Groß");
		break;
	}
	case 804:
	{
		currentAlarmText = F("ÜMANV-Sofort");
		break;
	}
	case 805:
	{
		currentAlarmText = F("MAN-E");
		break;
	}
	case 901:
	{
		currentAlarmText = F("S1:Baby-NAW/Inkubator");
		break;
	}
	case 902:
	{
		currentAlarmText = F("S2:Notfallseelsorge");
		break;
	}
	case 903:
	{
		currentAlarmText = F("S3:Org-Fahrten");
		break;
	}
	case 904:
	{
		currentAlarmText = F("S4:Polizeiliche-Einsatzlage");
		break;
	}
	case 905:
	{
		currentAlarmText = F("S5:Ausnahmelage");
		break;
	}
	case 906:
	{
		currentAlarmText = F("S6:Polizei-übergeben");
		break;
	}
	case 907:
	{
		currentAlarmText = F("S7:Einsatz-Ablehung");
		break;
	}
	case 908:
	{
		currentAlarmText = F("S8:AnforderungRettungshundestaffel");
		break;
	}
	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_HB(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 101:
	{
		currentAlarmText = F("b1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("b2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("b2r2");
		break;
	}
	case 104:
	{
		currentAlarmText = F("bex");
		break;
	}
	case 105:
	{
		currentAlarmText = F("b3");
		break;
	}
	case 106:
	{
		currentAlarmText = F("b4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("bf1");
		break;
	}
	case 108:
	{
		currentAlarmText = F("bf2");
		break;
	}
	case 109:
	{
		currentAlarmText = F("bg");
		break;
	}
	case 110:
	{
		currentAlarmText = F("bstr");
		break;
	}
	case 111:
	{
		currentAlarmText = F("bt");
		break;
	}
	case 201:
	{
		currentAlarmText = F("h1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("h1r1");
		break;
	}
	case 203:
	{
		currentAlarmText = F("h2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("h2r2");
		break;
	}
	case 205:
	{
		currentAlarmText = F("h3");
		break;
	}
	case 206:
	{
		currentAlarmText = F("hg0");
		break;
	}
	case 207:
	{
		currentAlarmText = F("hg1");
		break;
	}
	case 208:
	{
		currentAlarmText = F("hg2");
		break;
	}
	case 209:
	{
		currentAlarmText = F("hg3");
		break;
	}
	case 210:
	{
		currentAlarmText = F("hgw");
		break;
	}
	case 211:
	{
		currentAlarmText = F("hh");
		break;
	}
	case 212:
	{
		currentAlarmText = F("hhr2");
		break;
	}
	case 213:
	{
		currentAlarmText = F("hw");
		break;
	}
	case 214:
	{
		currentAlarmText = F("hstr");
		break;
	}
	case 215:
	{
		currentAlarmText = F("ht");
		break;
	}
	case 216:
	{
		currentAlarmText = F("hsonst");
		break;
	}
	case 217:
	{
		currentAlarmText = F("hgewalt");
		break;
	}
	case 401:
	{
		currentAlarmText = F("k0");
		break;
	}
	case 402:
	{
		currentAlarmText = F("r0");
		break;
	}
	case 403:
	{
		currentAlarmText = F("r1");
		break;
	}
	case 404:
	{
		currentAlarmText = F("r2");
		break;
	}
	case 405:
	{
		currentAlarmText = F("r3");
		break;
	}
	case 406:
	{
		currentAlarmText = F("r4");
		break;
	}
	case 407:
	{
		currentAlarmText = F("r5");
		break;
	}
	case 408:
	{
		currentAlarmText = F("rfr");
		break;
	}
	case 409:
	{
		currentAlarmText = F("rschwer");
		break;
	}
	case 410:
	{
		currentAlarmText = F("rintensiv");
		break;
	}
	case 411:
	{
		currentAlarmText = F("rkit");
		break;
	}
	case 412:
	{
		currentAlarmText = F("rtransport");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}
	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_HH(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_HE(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 409:
	{
		currentAlarmText = F("R MRW");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_MV(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_NI(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_NW(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 101:
	{
		currentAlarmText = F("B1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("B2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("B3");
		break;
	}
	case 104:
	{
		currentAlarmText = F("B4");
		break;
	}
	case 105:
	{
		currentAlarmText = F("B5");
		break;
	}
	case 201:
	{
		currentAlarmText = F("TH1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("TH2");
		break;
	}
	case 203:
	{
		currentAlarmText = F("TH3");
		break;
	}
	case 204:
	{
		currentAlarmText = F("TH4");
		break;
	}
	case 205:
	{
		currentAlarmText = F("TH5");
		break;
	}
	case 206:
	{
		currentAlarmText = F("TH-UW");
		break;
	}
	case 207:
	{
		currentAlarmText = F("TH-EINGLEISUNG");
		break;
	}
	case 208:
	{
		currentAlarmText = F("TH-BAHN1");
		break;
	}
	case 209:
	{
		currentAlarmText = F("TH-BAHN2");
		break;
	}
	case 210:
	{
		currentAlarmText = F("TH-BAHN3");
		break;
	}
	case 211:
	{
		currentAlarmText = F("TH-SCHIFF1");
		break;
	}
	case 212:
	{
		currentAlarmText = F("TH-SCHIFF2");
		break;
	}
	case 213:
	{
		currentAlarmText = F("TH-SCHIFF3");
		break;
	}
	case 214:
	{
		currentAlarmText = F("TH-FLUGAB1");
		break;
	}
	case 215:
	{
		currentAlarmText = F("TH-FLUGAB2");
		break;
	}
	case 216:
	{
		currentAlarmText = F("TH-FLUGAB3");
		break;
	}
	case 301:
	{
		currentAlarmText = F("ABC1");
		break;
	}
	case 302:
	{
		currentAlarmText = F("ABC2");
		break;
	}
	case 303:
	{
		currentAlarmText = F("ABC3");
		break;
	}
	case 304:
	{
		currentAlarmText = F("ABC4");
		break;
	}
	case 305:
	{
		currentAlarmText = F("GAS1");
		break;
	}
	case 306:
	{
		currentAlarmText = F("GAS2");
		break;
	}
		case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}
	case 701:
	{
		currentAlarmText = F("SU-BEREITSTELLUNG");
		break;
	}
	case 702:
	{
		currentAlarmText = F("SU-FF-MANV1");
		break;
	}
	case 703:
	{
		currentAlarmText = F("SU-FF-MANV2");
		break;
	}
	case 704:
	{
		currentAlarmText = F("SU-FF-MANV3");
		break;
	}
	case 705:
	{
		currentAlarmText = F("SU-EVAK1");
		break;
	}
	case 706:
	{
		currentAlarmText = F("SU-EVAK2");
		break;
	}
	case 707:
	{
		currentAlarmText = F("SU-EVAK3");
		break;
	}
	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_RP(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 101:
	{
		currentAlarmText = F("B1.01 Müllbrand");
		break;
	}
	case 102:
	{
		currentAlarmText = F("B1.02 Flächenbrand klein");
		break;
	}
	case 103:
	{
		currentAlarmText = F("B1.03 Fahrzeugbrand klein");
		break;
	}
	case 104:
	{
		currentAlarmText = F("B1.04 Brandnachschau");
		break;
	}
	case 105:
	{
		currentAlarmText = F("B1.05 Rauchentwicklung im Freien");
		break;
	}
	case 106:
	{
		currentAlarmText = F("B2.01 Rauchentwicklung aus Gebäude");
		break;
	}
	case 107:
	{
		currentAlarmText = F("B2.02 Flächenbrand groß");
		break;
	}
	case 108:
	{
		currentAlarmText = F("B2.03 Fahrzeugbrand groß");
		break;
	}
	case 109:
	{
		currentAlarmText = F("B2.04 Kaminbrand");
		break;
	}
	case 110:
	{
		currentAlarmText = F("B2.05 Nebengebäude");
		break;
	}
	case 111:
	{
		currentAlarmText = F("B2.06 Rauchwarnmelder");
		break;
	}
	case 112:
	{
		currentAlarmText = F("B2.07 BMA");
		break;
	}
	case 113:
	{
		currentAlarmText = F("B2.08 Wohnungsbrand");
		break;
	}
	case 114:
	{
		currentAlarmText = F("B2.09 Wohnungsbrand mit Personenrettung");
		break;
	}
	case 115:
	{
		currentAlarmText = F("B3.01 Gebäudebrand");
		break;
	}
	case 116:
	{
		currentAlarmText = F("B3.02 Hotel, Event");
		break;
	}
	case 117:
	{
		currentAlarmText = F("B3.03 Industriebrand");
		break;
	}
	case 118:
	{
		currentAlarmText = F("B3.04 Explosion");
		break;
	}
	case 119:
	{
		currentAlarmText = F("B3.05 Fahrzeugbrand mit Gefahrgut");
		break;
	}
	case 120:
	{
		currentAlarmText = F("B3.06 Brand Zug");
		break;
	}
	case 121:
	{
		currentAlarmText = F("B3.07 Brand Straßenbahn");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H1.01 Türöffnen");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H1.02 Absicherung");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H1.03 Insekten");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H1.04 Tierbergung");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H1.05 Tierrettung");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H1.06 Person in Aufzug");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H1.07 Einfache Hilfeleistung");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H1.08 Unterstützung Rettungsdienst");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H1.09 Wassereinbruch");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H2.01 Türöffnen dringend");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H2.02 Leichenbergung");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H2.03 Verkehrsunfall");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H2.04 Person in Zwangslage");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H2.05 Person droht zu springen");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H2.06 Einsturz klein");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H2.07 Größere Hilfeleistung");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H2.08 Unterstützung Rettungsdienst HRF");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H2.09 Unterstützung Rettungsdienst Gelände");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H2.10 Person unter Zug");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H2.11 Person unter Straßenbahn");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H3.01 Verkehrsunfall groß");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H3.02 Höhen-, Tiefenrettung");
		break;
	}
	case 223:
	{
		currentAlarmText = F("H3.03 Einsturz groß");
		break;
	}
	case 224:
	{
		currentAlarmText = F("H3.04 Verkehrsunfall Zug");
		break;
	}
	case 225:
	{
		currentAlarmText = F("H3.05 Verkehrsunfall Straßenbahn");
		break;
	}
	case 301:
	{
		currentAlarmText = F("G1.01 Ölspur");
		break;
	}
	case 302:
	{
		currentAlarmText = F("G1.02 Auslaufende Betriebsstoffe PKW");
		break;
	}
	case 303:
	{
		currentAlarmText = F("G1.03 Sonstige Kleinmengen < 10 l");
		break;
	}
	case 304:
	{
		currentAlarmText = F("G1.04 AEP-GS Alarmstufe 1");
		break;
	}
	case 305:
	{
		currentAlarmText = F("G2.01 Auslaufende Betriebsstoffe LKW >50 l");
		break;
	}
	case 306:
	{
		currentAlarmText = F("G2.02 AEP-GS Alarmstufe 2");
		break;
	}
	case 307:
	{
		currentAlarmText = F("G2.03 Gasgeruch");
		break;
	}
	case 308:
	{
		currentAlarmText = F("G3.01 AEP-GS Alarmstufe 3");
		break;
	}
	case 309:
	{
		currentAlarmText = F("G3.02 Gefahrstoffaustritt");
		break;
	}
	case 310:
	{
		currentAlarmText = F("G3.03 Gasausströmung");
		break;
	}
	case 311:
	{
		currentAlarmText = F("G3.04 Gefahrstoffaustritt Schienenfahrzeug");
		break;
	}
	case 312:
	{
		currentAlarmText = F("G4.01 AEP GS Alarmstufe 4");
		break;
	}
	case 401:
	{
		currentAlarmText = F("W1.01 Hochwasser");
		break;
	}
	case 402:
	{
		currentAlarmText = F("W1.02 Gewässerverunreinigung");
		break;
	}
	case 403:
	{
		currentAlarmText = F("W2.01 Wasser- / Eisrettung klein");
		break;
	}
	case 404:
	{
		currentAlarmText = F("W2.02 Taucheinsatz");
		break;
	}
	case 405:
	{
		currentAlarmText = F("W2.03 Bootsunfall");
		break;
	}
	case 406:
	{
		currentAlarmText = F("W2.04 Öl auf Gewässer");
		break;
	}
	case 407:
	{
		currentAlarmText = F("W2.05 Bootsbrand");
		break;
	}
	case 408:
	{
		currentAlarmText = F("W3.01 Schiffsbrand");
		break;
	}
	case 409:
	{
		currentAlarmText = F("W3.01 Schiffsbrand");
		break;
	}
	case 410:
	{
		currentAlarmText = F("W3.02 Schiffshavarie");
		break;
	}
	case 411:
	{
		currentAlarmText = F("W3.03 Wasser- / Eisrettung groß");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}
	case 701:
	{
		currentAlarmText = F("S1.01 Einsatz nach Rücksprache");
		break;
	}
	case 703:
	{
		currentAlarmText = F("S1.03 Bombenfund");
		break;
	}
	case 705:
	{
		currentAlarmText = F("S1.05 Personensuche");
		break;
	}
	case 706:
	{
		currentAlarmText = F("S1.06 PSNV");
		break;
	}
	case 707:
	{
		currentAlarmText = F("S1.07 Stromausfall");
		break;
	}
	case 709:
	{
		currentAlarmText = F("S1.09 Erkundung");
		break;
	}
	case 711:
	{
		currentAlarmText = F("S1.11 Schwerlasttransport");
		break;
	}
	case 714:
	{
		currentAlarmText = F("S1.14 Hubschrauberlandung");
		break;
	}
	case 715:
	{
		currentAlarmText = F("S1.15 Zubringerdienst");
		break;
	}
	case 716:
	{
		currentAlarmText = F("S1.16 Kommunikationsausfall");
		break;
	}
	case 717:
	{
		currentAlarmText = F("S1.17 Sonstige Gefahrenmeldung");
		break;
	}
	case 718:
	{
		currentAlarmText = F("S1.18 D1-Störfallmeldung");
		break;
	}
	case 719:
	{
		currentAlarmText = F("S2.01 Flugzeugunfall klein");
		break;
	}
	case 720:
	{
		currentAlarmText = F("S2.02 Unwetter");
		break;
	}
	case 721:
	{
		currentAlarmText = F("S2.03 D2-Störfallmeldung");
		break;
	}
	case 722:
	{
		currentAlarmText = F("S3.01 D3-Störfallmeldung");
		break;
	}
	case 723:
	{
		currentAlarmText = F("S4.01 Flugzeugunfall groß");
		break;
	}
	case 724:
	{
		currentAlarmText = F("S4.02 AEP Kernkraftwerk");
		break;
	}
	case 725:
	{
		currentAlarmText = F("S4.03 Gefahrenlage polizeilicher Einsatz");
		break;
	}
	case 726:
	{
		currentAlarmText = F("S4.04 LebEL Extern St.1 B-Raum");
		break;
	}
	case 727:
	{
		currentAlarmText = F("S4.05 LebEL Extern St.2 Bereitschaft");
		break;
	}
	case 728:
	{
		currentAlarmText = F("S4.06 Überörtliche Hilfe größeren Umfanges");
		break;
	}
	case 729:
	{
		currentAlarmText = F("S4.07 D4-Störfallmeldung");
		break;
	}
	case 801:
	{
		currentAlarmText = F("U1.01 Lose Objekte ohne Dringlichkeit");
		break;
	}
	case 802:
	{
		currentAlarmText = F("U1.02 Abgebrochener Ast ohne Dringlichkeit");
		break;
	}
	case 803:
	{
		currentAlarmText = F("U1.03 Wasser in Gebäude klein");
		break;
	}
	case 804:
	{
		currentAlarmText = F("U1.04 Umgestürzter Baum ohne Dringlichkeit");
		break;
	}
	case 805:
	{
		currentAlarmText = F("U2.01 Übergetretener Bach");
		break;
	}
	case 806:
	{
		currentAlarmText = F("U2.02 Wasser in Gebäude");
		break;
	}
	case 807:
	{
		currentAlarmText = F("U2.03 Lose Objekte mit Dringlichkeit");
		break;
	}
	case 808:
	{
		currentAlarmText = F("U2.04 Abgebrochener Ast mit Dringlichkeit");
		break;
	}
	case 809:
	{
		currentAlarmText = F("U2.05 Wasser in Gebäude");
		break;
	}
	case 810:
	{
		currentAlarmText = F("U2.06 Überflutete Fahrbahn");
		break;
	}
	case 811:
	{
		currentAlarmText = F("U2.07 Umgestürzter Baum mit Dringlichkeit");
		break;
	}
	case 812:
	{
		currentAlarmText = F("U2.08 Abgedecktes Dach");
		break;
	}
	case 813:
	{
		currentAlarmText = F("U3.01 Hangrutsch");
		break;
	}
	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_SL(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_SN(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_ST(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_SH(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 1001:
	{
		currentAlarmText = F("FEU AUS");
		break;
	}
	case 1002:
	{
		currentAlarmText = F("FEU K");
		break;
	}
	case 1003:
	{
		currentAlarmText = F("FEU");
		break;
	}
	case 1004:
	{
		currentAlarmText = F("FEU 2");
		break;
	}
	case 1005:
	{
		currentAlarmText = F("FEU 3");
		break;
	}
	case 1006:
	{
		currentAlarmText = F("FEU 4");
		break;
	}
	case 1007:
	{
		currentAlarmText = F("FEU 5");
		break;
	}
	case 1008:
	{
		currentAlarmText = F("FEU 6");
		break;
	}
	case 1009:
	{
		currentAlarmText = F("FEU 7");
		break;
	}
	case 1010:
	{
		currentAlarmText = F("FEU Y");
		break;
	}
	case 1011:
	{
		currentAlarmText = F("FEU R0");
		break;
	}
	case 1012:
	{
		currentAlarmText = F("FEU R1");
		break;
	}
	case 1013:
	{
		currentAlarmText = F("FEU R2");
		break;
	}
	case 1014:
	{
		currentAlarmText = F("FEU R3");
		break;
	}
	case 1015:
	{
		currentAlarmText = F("FEU R4");
		break;
	}
	case 1016:
	{
		currentAlarmText = F("FEU X");
		break;
	}
	case 1017:
	{
		currentAlarmText = F("FEU XY");
		break;
	}
	case 1018:
	{
		currentAlarmText = F("FEU XR0");
		break;
	}
	case 1019:
	{
		currentAlarmText = F("FEU XR1");
		break;
	}
	case 1020:
	{
		currentAlarmText = F("FEU XR2");
		break;
	}
	case 1021:
	{
		currentAlarmText = F("FEU XR3");
		break;
	}
	case 1022:
	{
		currentAlarmText = F("FEU XR4");
		break;
	}
	case 1023:
	{
		currentAlarmText = F("FEU G");
		break;
	}
	case 1024:
	{
		currentAlarmText = F("FEU G Y");
		break;
	}
	case 1025:
	{
		currentAlarmText = F("FEU G R0");
		break;
	}
	case 1026:
	{
		currentAlarmText = F("FEU G R1");
		break;
	}
	case 1027:
	{
		currentAlarmText = F("FEU G R2");
		break;
	}
	case 1028:
	{
		currentAlarmText = F("FEU G R3");
		break;
	}
	case 1029:
	{
		currentAlarmText = F("FEU G R4");
		break;
	}
	case 1030:
	{
		currentAlarmText = F("FEU G X");
		break;
	}
	case 1031:
	{
		currentAlarmText = F("FEU G XY");
		break;
	}
	case 1032:
	{
		currentAlarmText = F("FEU G XR0");
		break;
	}
	case 1033:
	{
		currentAlarmText = F("FEU G XR1");
		break;
	}
	case 1034:
	{
		currentAlarmText = F("FEU G XR2");
		break;
	}
	case 1035:
	{
		currentAlarmText = F("FEU G XR3");
		break;
	}
	case 1036:
	{
		currentAlarmText = F("FEU G XR4");
		break;
	}
	case 1037:
	{
		currentAlarmText = F("FEU K BAHN");
		break;
	}
	case 1038:
	{
		currentAlarmText = F("FEU BAHN");
		break;
	}
	case 1039:
	{
		currentAlarmText = F("FEU BAHN Y");
		break;
	}
	case 1040:
	{
		currentAlarmText = F("FEU BAHN R0");
		break;
	}
	case 1041:
	{
		currentAlarmText = F("FEU BAHN R1");
		break;
	}
	case 1042:
	{
		currentAlarmText = F("FEU BAHN R2");
		break;
	}
	case 1043:
	{
		currentAlarmText = F("FEU BAHN R3");
		break;
	}
	case 1044:
	{
		currentAlarmText = F("FEU BAHN R4");
		break;
	}
	case 1045:
	{
		currentAlarmText = F("FEU BAHN X");
		break;
	}
	case 1046:
	{
		currentAlarmText = F("FEU BAHN XY");
		break;
	}
	case 1047:
	{
		currentAlarmText = F("FEU BAHN XR0");
		break;
	}
	case 1048:
	{
		currentAlarmText = F("FEU BAHN XR1");
		break;
	}
	case 1049:
	{
		currentAlarmText = F("FEU BAHN XR2");
		break;
	}
	case 1050:
	{
		currentAlarmText = F("FEU BAHN XR3");
		break;
	}
	case 1051:
	{
		currentAlarmText = F("FEU BAHN XR4");
		break;
	}
	case 1052:
	{
		currentAlarmText = F("FEU G BAHN");
		break;
	}
	case 1053:
	{
		currentAlarmText = F("FEU G BAHN Y");
		break;
	}
	case 1054:
	{
		currentAlarmText = F("FEU G BAHN R0");
		break;
	}
	case 1055:
	{
		currentAlarmText = F("FEU G BAHN R1");
		break;
	}
	case 1056:
	{
		currentAlarmText = F("FEU G BAHN R2");
		break;
	}
	case 1057:
	{
		currentAlarmText = F("FEU G BAHN R3");
		break;
	}
	case 1058:
	{
		currentAlarmText = F("FEU G BAHN R4");
		break;
	}
	case 1059:
	{
		currentAlarmText = F("FEU G BAHN X");
		break;
	}
	case 1060:
	{
		currentAlarmText = F("FEU G BAHN XY");
		break;
	}
	case 1061:
	{
		currentAlarmText = F("FEU G BAHN XR0");
		break;
	}
	case 1062:
	{
		currentAlarmText = F("FEU G BAHN XR1");
		break;
	}
	case 1063:
	{
		currentAlarmText = F("FEU G BAHN XR2");
		break;
	}
	case 1064:
	{
		currentAlarmText = F("FEU G BAHN XR3");
		break;
	}
	case 1065:
	{
		currentAlarmText = F("FEU G BAHN XR4");
		break;
	}
	case 1066:
	{
		currentAlarmText = F("FEU K BMA");
		break;
	}
	case 1067:
	{
		currentAlarmText = F("FEU BMA");
		break;
	}
	case 1068:
	{
		currentAlarmText = F("FEU K RWM");
		break;
	}
	case 1069:
	{
		currentAlarmText = F("FEU K SCHIFF");
		break;
	}
	case 1070:
	{
		currentAlarmText = F("FEU K SCHIFF Y");
		break;
	}
	case 1071:
	{
		currentAlarmText = F("FEU K SCHIFFR0");
		break;
	}
	case 1072:
	{
		currentAlarmText = F("FEU K SCHIFF X");
		break;
	}
	case 1073:
	{
		currentAlarmText = F("FEU K SCHIFF XY");
		break;
	}
	case 1074:
	{
		currentAlarmText = F("FEU K SCHIFF XR0");
		break;
	}
	case 1075:
	{
		currentAlarmText = F("FEU SCHIFF");
		break;
	}
	case 1076:
	{
		currentAlarmText = F("FEU SCHIFF Y");
		break;
	}
	case 1077:
	{
		currentAlarmText = F("FEU SCHIFF R0");
		break;
	}
	case 1078:
	{
		currentAlarmText = F("FEU SCHIFF R1");
		break;
	}
	case 1079:
	{
		currentAlarmText = F("FEU SCHIFF R2");
		break;
	}
	case 1080:
	{
		currentAlarmText = F("FEU SCHIFF R3");
		break;
	}
	case 1081:
	{
		currentAlarmText = F("FEU SCHIFF R4");
		break;
	}
	case 1082:
	{
		currentAlarmText = F("FEU SCHIFF X");
		break;
	}
	case 1083:
	{
		currentAlarmText = F("FEU SCHIFF XY");
		break;
	}
	case 1084:
	{
		currentAlarmText = F("FEU SCHIFF XR0");
		break;
	}
	case 1085:
	{
		currentAlarmText = F("FEU SCHIFF XR1");
		break;
	}
	case 1086:
	{
		currentAlarmText = F("FEU SCHIFF XR2");
		break;
	}
	case 1087:
	{
		currentAlarmText = F("FEU SCHIFF XR3");
		break;
	}
	case 1088:
	{
		currentAlarmText = F("FEU SCHIFF XR4");
		break;
	}
	case 1089:
	{
		currentAlarmText = F("FEU G SCHIFF");
		break;
	}
	case 1090:
	{
		currentAlarmText = F("FEU G SCHIFF Y");
		break;
	}
	case 1091:
	{
		currentAlarmText = F("FEU G SCHIFF R0");
		break;
	}
	case 1092:
	{
		currentAlarmText = F("FEU G SCHIFF R1");
		break;
	}
	case 1093:
	{
		currentAlarmText = F("FEU G SCHIFF R2");
		break;
	}
	case 1094:
	{
		currentAlarmText = F("FEU G SCHIFF R3");
		break;
	}
	case 1095:
	{
		currentAlarmText = F("FEU G SCHIFF R4");
		break;
	}
	case 1096:
	{
		currentAlarmText = F("FEU G SCHIFF X");
		break;
	}
	case 1097:
	{
		currentAlarmText = F("FEU G SCHIFF XY");
		break;
	}
	case 1098:
	{
		currentAlarmText = F("FEU G SCHIFF XR0");
		break;
	}
	case 1099:
	{
		currentAlarmText = F("FEU G SCHIFF XR1");
		break;
	}
	case 1100:
	{
		currentAlarmText = F("FEU G SCHIFF XR2");
		break;
	}
	case 1101:
	{
		currentAlarmText = F("FEU G SCHIFF XR3");
		break;
	}
	case 1102:
	{
		currentAlarmText = F("FEU G SCHIFF XR4");
		break;
	}
	case 1103:
	{
		currentAlarmText = F("FEU K WALD");
		break;
	}
	case 1104:
	{
		currentAlarmText = F("FEU WALD");
		break;
	}
	case 1105:
	{
		currentAlarmText = F("FEU G WALD");
		break;
	}
	case 2001:
	{
		currentAlarmText = F("TH K");
		break;
	}
	case 2002:
	{
		currentAlarmText = F("TH K Y");
		break;
	}
	case 2003:
	{
		currentAlarmText = F("TH K X");
		break;
	}
	case 2004:
	{
		currentAlarmText = F("TH K XY");
		break;
	}
	case 2005:
	{
		currentAlarmText = F("TH");
		break;
	}
	case 2006:
	{
		currentAlarmText = F("TH 2");
		break;
	}
	case 2007:
	{
		currentAlarmText = F("TH 3");
		break;
	}
	case 2008:
	{
		currentAlarmText = F("TH 4");
		break;
	}
	case 2009:
	{
		currentAlarmText = F("TH 5");
		break;
	}
	case 2010:
	{
		currentAlarmText = F("TH Y");
		break;
	}
	case 2011:
	{
		currentAlarmText = F("TH R0");
		break;
	}
	case 2012:
	{
		currentAlarmText = F("TH R1");
		break;
	}
	case 2013:
	{
		currentAlarmText = F("TH R2");
		break;
	}
	case 2014:
	{
		currentAlarmText = F("TH R3");
		break;
	}
	case 2015:
	{
		currentAlarmText = F("TH R4");
		break;
	}
	case 2016:
	{
		currentAlarmText = F("TH X");
		break;
	}
	case 2017:
	{
		currentAlarmText = F("TH XY");
		break;
	}
	case 2018:
	{
		currentAlarmText = F("TH XR0");
		break;
	}
	case 2019:
	{
		currentAlarmText = F("TH XR1");
		break;
	}
	case 2020:
	{
		currentAlarmText = F("TH XR2");
		break;
	}
	case 2021:
	{
		currentAlarmText = F("TH XR3");
		break;
	}
	case 2022:
	{
		currentAlarmText = F("TH XR4");
		break;
	}
	case 2023:
	{
		currentAlarmText = F("TH G");
		break;
	}
	case 2024:
	{
		currentAlarmText = F("TH G Y");
		break;
	}
	case 2025:
	{
		currentAlarmText = F("TH G R0");
		break;
	}
	case 2026:
	{
		currentAlarmText = F("TH G R1");
		break;
	}
	case 2027:
	{
		currentAlarmText = F("TH G R2");
		break;
	}
	case 2028:
	{
		currentAlarmText = F("TH G R3");
		break;
	}
	case 2029:
	{
		currentAlarmText = F("TH G R4");
		break;
	}
	case 2030:
	{
		currentAlarmText = F("TH G X");
		break;
	}
	case 2031:
	{
		currentAlarmText = F("TH G XY");
		break;
	}
	case 2032:
	{
		currentAlarmText = F("TH G XR0");
		break;
	}
	case 2033:
	{
		currentAlarmText = F("TH G XR1");
		break;
	}
	case 2034:
	{
		currentAlarmText = F("TH G XR2");
		break;
	}
	case 2035:
	{
		currentAlarmText = F("TH G XR3");
		break;
	}
	case 2036:
	{
		currentAlarmText = F("TH G XR4");
		break;
	}
	case 2037:
	{
		currentAlarmText = F("TH K BAHN");
		break;
	}
	case 2038:
	{
		currentAlarmText = F("TH BAHN");
		break;
	}
	case 2039:
	{
		currentAlarmText = F("TH BAHN Y");
		break;
	}
	case 2040:
	{
		currentAlarmText = F("TH BAHN R0");
		break;
	}
	case 2041:
	{
		currentAlarmText = F("TH BAHN R1");
		break;
	}
	case 2042:
	{
		currentAlarmText = F("TH BAHN R2");
		break;
	}
	case 2043:
	{
		currentAlarmText = F("TH BAHN R3");
		break;
	}
	case 2044:
	{
		currentAlarmText = F("TH BAHN R4");
		break;
	}
	case 2045:
	{
		currentAlarmText = F("TH BAHN X");
		break;
	}
	case 2046:
	{
		currentAlarmText = F("TH BAHN XY");
		break;
	}
	case 2047:
	{
		currentAlarmText = F("TH BAHN XR0");
		break;
	}
	case 2048:
	{
		currentAlarmText = F("TH BAHN XR1");
		break;
	}
	case 2049:
	{
		currentAlarmText = F("TH BAHN XR2");
		break;
	}
	case 2050:
	{
		currentAlarmText = F("TH BAHN XR3");
		break;
	}
	case 2051:
	{
		currentAlarmText = F("TH BAHN XR4");
		break;
	}
	case 2052:
	{
		currentAlarmText = F("TH G BAHN");
		break;
	}
	case 2053:
	{
		currentAlarmText = F("TH G BAHN Y");
		break;
	}
	case 2054:
	{
		currentAlarmText = F("TH G BAHN R0");
		break;
	}
	case 2055:
	{
		currentAlarmText = F("TH G BAHN R1");
		break;
	}
	case 2056:
	{
		currentAlarmText = F("TH G BAHN R2");
		break;
	}
	case 2057:
	{
		currentAlarmText = F("TH G BAHN R3");
		break;
	}
	case 2058:
	{
		currentAlarmText = F("TH G BAHN R4");
		break;
	}
	case 2059:
	{
		currentAlarmText = F("TH G BAHN X");
		break;
	}
	case 2060:
	{
		currentAlarmText = F("TH G BAHN XY");
		break;
	}
	case 2061:
	{
		currentAlarmText = F("TH G BAHN XR0");
		break;
	}
	case 2062:
	{
		currentAlarmText = F("TH G BAHN XR1");
		break;
	}
	case 2063:
	{
		currentAlarmText = F("TH G BAHN XR2");
		break;
	}
	case 2064:
	{
		currentAlarmText = F("TH G BAHN XR3");
		break;
	}
	case 2065:
	{
		currentAlarmText = F("TH G BAHN XR4");
		break;
	}
	case 2066:
	{
		currentAlarmText = F("TH G FLUG1");
		break;
	}
	case 2067:
	{
		currentAlarmText = F("TH G FLUG1 R0");
		break;
	}
	case 2068:
	{
		currentAlarmText = F("TH G FLUG2");
		break;
	}
	case 2069:
	{
		currentAlarmText = F("TH G FLUG2 R0");
		break;
	}
	case 2070:
	{
		currentAlarmText = F("TH G FLUG2 R1");
		break;
	}
	case 2071:
	{
		currentAlarmText = F("TH G FLUG2 R2");
		break;
	}
	case 2072:
	{
		currentAlarmText = F("TH G FLUG2 R3");
		break;
	}
	case 2073:
	{
		currentAlarmText = F("TH G FLUG2 R4");
		break;
	}
	case 2074:
	{
		currentAlarmText = F("TH K SCHIFF");
		break;
	}
	case 2075:
	{
		currentAlarmText = F("TH K SCHIFF Y");
		break;
	}
	case 2076:
	{
		currentAlarmText = F("TH K SCHIFF R0");
		break;
	}
	case 2077:
	{
		currentAlarmText = F("TH K SCHIFF X");
		break;
	}
	case 2078:
	{
		currentAlarmText = F("TH K SCHIFF XY");
		break;
	}
	case 2079:
	{
		currentAlarmText = F("TH K SCHIFF XR0");
		break;
	}
	case 2080:
	{
		currentAlarmText = F("TH SCHIFF");
		break;
	}
	case 2081:
	{
		currentAlarmText = F("TH SCHIFF Y");
		break;
	}
	case 2082:
	{
		currentAlarmText = F("TH SCHIFF R0");
		break;
	}
	case 2083:
	{
		currentAlarmText = F("TH SCHIFF R1");
		break;
	}
	case 2084:
	{
		currentAlarmText = F("TH SCHIFF R2");
		break;
	}
	case 2085:
	{
		currentAlarmText = F("TH SCHIFF R3");
		break;
	}
	case 2086:
	{
		currentAlarmText = F("TH SCHIFF R4");
		break;
	}
	case 2087:
	{
		currentAlarmText = F("TH SCHIFF X");
		break;
	}
	case 2088:
	{
		currentAlarmText = F("TH SCHIFF XY");
		break;
	}
	case 2089:
	{
		currentAlarmText = F("TH SCHIFF XR0");
		break;
	}
	case 2090:
	{
		currentAlarmText = F("TH SCHIFF XR1");
		break;
	}
	case 2091:
	{
		currentAlarmText = F("TH SCHIFF XR2");
		break;
	}
	case 2092:
	{
		currentAlarmText = F("TH SCHIFF XR3");
		break;
	}
	case 2093:
	{
		currentAlarmText = F("TH SCHIFF XR4");
		break;
	}
	case 2094:
	{
		currentAlarmText = F("TH G SCHIFF");
		break;
	}
	case 2095:
	{
		currentAlarmText = F("TH G SCHIFF Y");
		break;
	}
	case 2096:
	{
		currentAlarmText = F("TH G SCHIFF R0");
		break;
	}
	case 2097:
	{
		currentAlarmText = F("TH G SCHIFF R1");
		break;
	}
	case 2098:
	{
		currentAlarmText = F("TH G SCHIFF R2");
		break;
	}
	case 2099:
	{
		currentAlarmText = F("TH G SCHIFF R3");
		break;
	}
	case 2100:
	{
		currentAlarmText = F("TH G SCHIFF R4");
		break;
	}
	case 2101:
	{
		currentAlarmText = F("TH G SCHIFF X");
		break;
	}
	case 2102:
	{
		currentAlarmText = F("TH G SCHIFF XY");
		break;
	}
	case 2103:
	{
		currentAlarmText = F("TH G SCHIFF XR0");
		break;
	}
	case 2104:
	{
		currentAlarmText = F("TH G SCHIFF XR1");
		break;
	}
	case 2105:
	{
		currentAlarmText = F("TH G SCHIFF XR2");
		break;
	}
	case 2106:
	{
		currentAlarmText = F("TH G SCHIFF XR3");
		break;
	}
	case 2107:
	{
		currentAlarmText = F("TH G SCHIFF XR4");
		break;
	}
	case 2108:
	{
		currentAlarmText = F("TH K WASSER");
		break;
	}
	case 2109:
	{
		currentAlarmText = F("TH WASSER");
		break;
	}
	case 2110:
	{
		currentAlarmText = F("TH WASSER Y");
		break;
	}
	case 2111:
	{
		currentAlarmText = F("TH WASSER R0");
		break;
	}
	case 2112:
	{
		currentAlarmText = F("TH WASSER R1");
		break;
	}
	case 2113:
	{
		currentAlarmText = F("TH WASSER R2");
		break;
	}
	case 2114:
	{
		currentAlarmText = F("TH WASSER R3");
		break;
	}
	case 2115:
	{
		currentAlarmText = F("TH WASSER R4");
		break;
	}
	case 2116:
	{
		currentAlarmText = F("THAUST K");
		break;
	}
	case 2117:
	{
		currentAlarmText = F("THAUST K BAHN");
		break;
	}
	case 2118:
	{
		currentAlarmText = F("THAUST K WASSER");
		break;
	}
	case 2119:
	{
		currentAlarmText = F("THAUST");
		break;
	}
	case 2120:
	{
		currentAlarmText = F("THAUST BAHN");
		break;
	}
	case 2121:
	{
		currentAlarmText = F("THAUST WASSER");
		break;
	}
	case 2122:
	{
		currentAlarmText = F("THAUST G");
		break;
	}
	case 2123:
	{
		currentAlarmText = F("THAUST G BAHN");
		break;
	}
	case 2124:
	{
		currentAlarmText = F("THAUST G WASSER");
		break;
	}
	case 2125:
	{
		currentAlarmText = F("THFLUSI K");
		break;
	}
	case 2126:
	{
		currentAlarmText = F("THDRZF");
		break;
	}
	case 2127:
	{
		currentAlarmText = F("THGAS");
		break;
	}
	case 2128:
	{
		currentAlarmText = F("THGAS HAUS");
		break;
	}
	case 2129:
	{
		currentAlarmText = F("THGAS HAUS Y");
		break;
	}
	case 2130:
	{
		currentAlarmText = F("THGAS HAUS R0");
		break;
	}
	case 2131:
	{
		currentAlarmText = F("THGAS HAUS R1");
		break;
	}
	case 2132:
	{
		currentAlarmText = F("THPDRZS");
		break;
	}
	case 2133:
	{
		currentAlarmText = F("THTIER  K");
		break;
	}
	case 2134:
	{
		currentAlarmText = F("THTIER");
		break;
	}
	case 2135:
	{
		currentAlarmText = F("THTIER G");
		break;
	}
	case 2136:
	{
		currentAlarmText = F("THHÖHE");
		break;
	}
	case 2137:
	{
		currentAlarmText = F("THKMF");
		break;
	}
	case 2138:
	{
		currentAlarmText = F("THTV");
		break;
	}
	case 3001:
	{
		currentAlarmText = F("NIL");
		break;
	}
	case 4001:
	{
		currentAlarmText = F("DF BSW");
		break;
	}
	case 4002:
	{
		currentAlarmText = F("DF FREMD");
		break;
	}
	case 5001:
	{
		currentAlarmText = F("AUSN");
		break;
	}
	case 5002:
	{
		currentAlarmText = F("AUSN WAL");
		break;
	}
	case 6001:
	{
		currentAlarmText = F("NOTF K");
		break;
	}
	case 6002:
	{
		currentAlarmText = F("NOTF");
		break;
	}
	case 6003:
	{
		currentAlarmText = F("NOTF NA");
		break;
	}
	case 6004:
	{
		currentAlarmText = F("NOTF NA FIRST");
		break;
	}
	case 6005:
	{
		currentAlarmText = F("NOTF NA REA");
		break;
	}
	case 6006:
	{
		currentAlarmText = F("NOTF RTH");
		break;
	}
	case 6007:
	{
		currentAlarmText = F("NOTF DLK");
		break;
	}
	case 6008:
	{
		currentAlarmText = F("NOTF BAB");
		break;
	}
	case 6009:
	{
		currentAlarmText = F("NOTF BAB NA");
		break;
	}
	case 6010:
	{
		currentAlarmText = F("NOTF ADIP K");
		break;
	}
	case 6011:
	{
		currentAlarmText = F("NOTF ADIP");
		break;
	}
	case 6012:
	{
		currentAlarmText = F("NOTF ADIP G");
		break;
	}
	case 6013:
	{
		currentAlarmText = F("NOTF ADIP K NA");
		break;
	}
	case 6014:
	{
		currentAlarmText = F("NOTF ADIP NA");
		break;
	}
	case 6015:
	{
		currentAlarmText = F("NOTF ADIP G NA");
		break;
	}
	case 6016:
	{
		currentAlarmText = F("NOTF INF");
		break;
	}
	case 6017:
	{
		currentAlarmText = F("NOTF INF NA");
		break;
	}
	case 6018:
	{
		currentAlarmText = F("NOTF TV");
		break;
	}
	case 6019:
	{
		currentAlarmText = F("NOTF TV NA");
		break;
	}
	case 6020:
	{
		currentAlarmText = F("NOTF VERL");
		break;
	}
	case 6021:
	{
		currentAlarmText = F("NOTF VERL NA");
		break;
	}
	case 6022:
	{
		currentAlarmText = F("NOTF VERL ARZT");
		break;
	}
	case 6023:
	{
		currentAlarmText = F("NOTF VERL RTH");
		break;
	}
	case 6024:
	{
		currentAlarmText = F("NOTF VERL ITW");
		break;
	}
	case 6025:
	{
		currentAlarmText = F("NOTF VERL INF");
		break;
	}
	case 6026:
	{
		currentAlarmText = F("NOTF VERL INF NA");
		break;
	}
	case 6027:
	{
		currentAlarmText = F("NOTF VERL INF ARZT");
		break;
	}
	case 6028:
	{
		currentAlarmText = F("NOTF VERL INF RTH");
		break;
	}
	case 6029:
	{
		currentAlarmText = F("NOTF VERL INF ITW");
		break;
	}
	case 6030:
	{
		currentAlarmText = F("NOTF R0");
		break;
	}
	case 6031:
	{
		currentAlarmText = F("NOTF R1");
		break;
	}
	case 6032:
	{
		currentAlarmText = F("NOTF R2");
		break;
	}
	case 6033:
	{
		currentAlarmText = F("NOTF R3");
		break;
	}
	case 6034:
	{
		currentAlarmText = F("NOTF R4");
		break;
	}
	case 6035:
	{
		currentAlarmText = F("KBF");
		break;
	}
	case 6036:
	{
		currentAlarmText = F("KBF AMBU");
		break;
	}
	case 6037:
	{
		currentAlarmText = F("KBF AMBU INF");
		break;
	}
	case 6038:
	{
		currentAlarmText = F("KBF ADIP K");
		break;
	}
	case 6039:
	{
		currentAlarmText = F("KBF ADIP");
		break;
	}
	case 6040:
	{
		currentAlarmText = F("KBF ADIP G");
		break;
	}
	case 6041:
	{
		currentAlarmText = F("KBF FERN");
		break;
	}
	case 6042:
	{
		currentAlarmText = F("KBF FERN INF");
		break;
	}
	case 6043:
	{
		currentAlarmText = F("KBF INF");
		break;
	}
	case 6044:
	{
		currentAlarmText = F("KBF INF G");
		break;
	}
	case 6045:
	{
		currentAlarmText = F("KBF VERL");
		break;
	}
	case 6046:
	{
		currentAlarmText = F("KBF VERL ARZT");
		break;
	}
	case 6047:
	{
		currentAlarmText = F("KBF VERL ADIP K");
		break;
	}
	case 6048:
	{
		currentAlarmText = F("KBF VERL ADIP");
		break;
	}
	case 6049:
	{
		currentAlarmText = F("KBF VERL ADIP g");
		break;
	}
	case 6050:
	{
		currentAlarmText = F("KBF VERL ADIP K ARZT");
		break;
	}
	case 6051:
	{
		currentAlarmText = F("KBF VERL ADIP ARZT");
		break;
	}
	case 6052:
	{
		currentAlarmText = F("KBF VERL ADIP G ARZT");
		break;
	}
	case 6053:
	{
		currentAlarmText = F("KBF VERL INF");
		break;
	}
	case 6054:
	{
		currentAlarmText = F("KBF VERL INF ARZT");
		break;
	}
	case 6055:
	{
		currentAlarmText = F("KBF DLK");
		break;
	}
	case 7001:
	{
		currentAlarmText = F("ORG");
		break;
	}
	case 7002:
	{
		currentAlarmText = F("ORG FREMD");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}
	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE_TH(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F WALD 3");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 3");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H WASS ÖL");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmTypeText_DE_THW(currentType);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmTypeText_DE_POL(currentType);
		break;
	}
	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText_DE(unsigned int currentType)
{
	String currentAlarmText = "";
	switch (currentType)
	{
	case 1:
	{
		currentAlarmText = getAlarmTypeText_DE_SH(currentType);
		break;
	}
	case 2:
	{
		currentAlarmText = getAlarmTypeText_DE_HH(currentType);
		break;
	}
	case 3:
	{
		currentAlarmText = getAlarmTypeText_DE_NI(currentType);
		break;
	}
	case 4:
	{
		currentAlarmText = getAlarmTypeText_DE_HB(currentType);
		break;
	}
	case 5:
	{
		currentAlarmText = getAlarmTypeText_DE_NW(currentType);
		break;
	}
	case 6:
	{
		currentAlarmText = getAlarmTypeText_DE_HE(currentType);
		break;
	}
	case 7:
	{
		currentAlarmText = getAlarmTypeText_DE_RP(currentType);
		break;
	}
	case 8:
	{
		currentAlarmText = getAlarmTypeText_DE_BW(currentType);
		break;
	}
	case 9:
	{
		currentAlarmText = getAlarmTypeText_DE_BY(currentType);
		break;
	}
	case 10:
	{
		currentAlarmText = getAlarmTypeText_DE_SL(currentType);
		break;
	}
	case 11:
	{
		currentAlarmText = getAlarmTypeText_DE_BE(currentType);
		break;
	}
	case 12:
	{
		currentAlarmText = getAlarmTypeText_DE_BB(currentType);
		break;
	}
	case 13:
	{
		currentAlarmText = getAlarmTypeText_DE_MV(currentType);
		break;
	}
	case 14:
	{
		currentAlarmText = getAlarmTypeText_DE_SN(currentType);
		break;
	}
	case 15:
	{
		currentAlarmText = getAlarmTypeText_DE_ST(currentType);
		break;
	}
	case 16:
	{
		currentAlarmText = getAlarmTypeText_DE_TH(currentType);
		break;
	}
	default:
	{
		currentAlarmText = getAlarmTypeText_DE_HE(currentType);
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmTypeText(unsigned int currentType)
{
	return getAlarmTypeText_DE(currentType);
}

String getAlarmSubText_DE_POL(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 601:
	{
		currentAlarmText = F("P BR"); // Polizei Bereitstellung
		break;
	}
	case 602:
	{
		currentAlarmText = F("P BOMBE"); // Polizei Bombendrohung
		break;
	}
	case 603:
	{
		currentAlarmText = F("P USBV"); // Polizei USBV-Fund
		break;
	}
	case 604:
	{
		currentAlarmText = F("P GEISEL"); // Polizei Geisellage
		break;
	}
	case 605:
	{
		currentAlarmText = F("P SEK"); // Polizei SEK Einsatz
		break;
	}
	case 606:
	{
		currentAlarmText = F("P LEBEL"); // Polizei Lebensbedrohliche Lage
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_THW(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 501:
	{
		currentAlarmText = F("THW"); // THW Technischer Zug
		break;
	}
	case 502:
	{
		currentAlarmText = F("THW SEG"); // THW Spezialeinsatzgruppe
		break;
	}
	case 503:
	{
		currentAlarmText = F("THW FB"); // THW Fachberatung
		break;
	}
	case 504:
	{
		currentAlarmText = F("THW BEL"); // THW Fachgruppe Beleuchtung
		break;
	}
	case 505:
	{
		currentAlarmText = F("THW BRB"); // THW Fachgruppe Brückenbau
		break;
	}
	case 506:
	{
		currentAlarmText = F("THW E"); // THW Fachgruppe Elektroversorgung
		break;
	}
	case 507:
	{
		currentAlarmText = F("THW FK"); // THW Fachgruppe Führung und Kommunikation
		break;
	}
	case 508:
	{
		currentAlarmText = F("THW WV"); // THW Fachgruppe Weitverkehrstrupp
		break;
	}
	case 509:
	{
		currentAlarmText = F("THW HÖRG"); // THW Fachgruppe Höhenrettung
		break;
	}
	case 510:
	{
		currentAlarmText = F("THW I"); // THW Fachgruppe Infrastruktur
		break;
	}
	case 511:
	{
		currentAlarmText = F("THW LOG V"); // THW Fachgruppe Logistik, Versorgungstrupp
		break;
	}
	case 512:
	{
		currentAlarmText = F("THW LOG M"); // THW Fachgruppe Logistik, Materialerhaltungstrupp
		break;
	}
	case 513:
	{
		currentAlarmText = F("THW ORT"); // THW Fachgruppe Ortung
		break;
	}
	case 514:
	{
		currentAlarmText = F("THW ÖL"); // THW Fachgruppe Ölwehr
		break;
	}
	case 515:
	{
		currentAlarmText = F("THW R"); // THW Fachgruppe Räumen
		break;
	}
	case 516:
	{
		currentAlarmText = F("THW TW"); // THW Fachgruppe Trinkwasserversorgung
		break;
	}
	case 517:
	{
		currentAlarmText = F("THW SPR"); // THW Fachgruppe Sprengen
		break;
	}
	case 518:
	{
		currentAlarmText = F("THW WASSER"); // THW Fachgruppe Wassergefahren
		break;
	}
	case 519:
	{
		currentAlarmText = F("THW WP"); // THW Fachgruppe Wasserschaden, Pumpen
		break;
	}
	case 520:
	{
		currentAlarmText = F("THW EGS"); // THW Technischer Zug mit Einsatzgerüstsystem
		break;
	}
	case 521:
	{
		currentAlarmText = F("THW ASH"); // THW Technischer Zug mit Abstützsystem-Holz
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}

String getAlarmSubText_DE_BW(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}
	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_BY(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 10101:
	{
		currentAlarmText = F("Brandgeruch");
		break;
	}
	case 10102:
	{
		currentAlarmText = F("Rauchentwicklung");
		break;
	}
	case 10103:
	{
		currentAlarmText = F("Freifläche klein (< 100 m²)");
		break;
	}
	case 10104:
	{
		currentAlarmText = F("Abfall-, Müll-, Papiercontainer");
		break;
	}
	case 10105:
	{
		currentAlarmText = F("Kleinbrand");
		break;
	}
	case 10106:
	{
		currentAlarmText = F("Nachschau");
		break;
	}
	case 10107:
	{
		currentAlarmText = F("Motorrad");
		break;
	}
	case 10201:
	{
		currentAlarmText = F("Wald, klein (< 1000 m²)");
		break;
	}
	case 10202:
	{
		currentAlarmText = F("Freifläche groß (> 100 m²)");
		break;
	}
	case 10203:
	{
		currentAlarmText = F("Bahndamm");
		break;
	}
	case 10204:
	{
		currentAlarmText = F("Bau-, Wohncontainer");
		break;
	}
	case 10205:
	{
		currentAlarmText = F("Gartenhütte, Schuppen");
		break;
	}
	case 10206:
	{
		currentAlarmText = F("Kamin");
		break;
	}
	case 10207:
	{
		currentAlarmText = F("überhitzter Ofen / Ölofen");
		break;
	}
	case 10208:
	{
		currentAlarmText = F("PKW");
		break;
	}
	case 10209:
	{
		currentAlarmText = F("PKW auf BAB");
		break;
	}
	case 10210:
	{
		currentAlarmText = F("LKW / Bus innerorts");
		break;
	}
	case 10301:
	{
		currentAlarmText = F("Bau-, Wohncontainer (Person in Gefahr)");
		break;
	}
	case 10302:
	{
		currentAlarmText = F("Gartenhütte / Schuppen (Person in Gefahr)");
		break;
	}
	case 10303:
	{
		currentAlarmText = F("Person");
		break;
	}
	case 10304:
	{
		currentAlarmText = F("PKW (Person in Gefahr)");
		break;
	}
	case 10305:
	{
		currentAlarmText = F("PKW auf BAB (Person in Gefahr)");
		break;
	}
	case 10401:
	{
		currentAlarmText = F("am Gebäude");
		break;
	}
	case 10402:
	{
		currentAlarmText = F("Brandgeruch");
		break;
	}
	case 10403:
	{
		currentAlarmText = F("Dachstuhl");
		break;
	}
	case 10404:
	{
		currentAlarmText = F("Dehnfuge");
		break;
	}
	case 10405:
	{
		currentAlarmText = F("Garage");
		break;
	}
	case 10406:
	{
		currentAlarmText = F("Keller");
		break;
	}
	case 10407:
	{
		currentAlarmText = F("Rauchentwicklung");
		break;
	}
	case 10408:
	{
		currentAlarmText = F("Zimmer");
		break;
	}
	case 10409:
	{
		currentAlarmText = F("Berghütte");
		break;
	}
	case 10410:
	{
		currentAlarmText = F("Fahrzeug / Maschine");
		break;
	}
	case 10411:
	{
		currentAlarmText = F("LKW / Bus außerorts");
		break;
	}
	case 10412:
	{
		currentAlarmText = F("LKW / Bus auf BAB");
		break;
	}
	case 10413:
	{
		currentAlarmText = F("überhitzter Heustock");
		break;
	}
	case 10501:
	{
		currentAlarmText = F("Dachstuhl (Person in Gefahr)");
		break;
	}
	case 10502:
	{
		currentAlarmText = F("Garage (Person in Gefahr)");
		break;
	}
	case 10503:
	{
		currentAlarmText = F("Keller (Person in Gefahr)");
		break;
	}
	case 10504:
	{
		currentAlarmText = F("Rauchentwicklung (Person in Gefahr)");
		break;
	}
	case 10505:
	{
		currentAlarmText = F("Zimmer (Person in Gefahr)");
		break;
	}
	case 10506:
	{
		currentAlarmText = F("LKW (Person in Gefahr)");
		break;
	}
	case 10507:
	{
		currentAlarmText = F("LKW auf BAB (Person in Gefahr)");
		break;
	}
	case 10601:
	{
		currentAlarmText = F("ausgedehnt / hoch bis 6. OG");
		break;
	}
	case 10602:
	{
		currentAlarmText = F("Tiefgarage");
		break;
	}
	case 10603:
	{
		currentAlarmText = F("Wohnheim");
		break;
	}
	case 10604:
	{
		currentAlarmText = F("Behinderteneinrichtung");
		break;
	}
	case 10605:
	{
		currentAlarmText = F("Hochhaus ab 7. OG");
		break;
	}
	case 10606:
	{
		currentAlarmText = F("Supermarkt");
		break;
	}
	case 10607:
	{
		currentAlarmText = F("Kindergarten");
		break;
	}
	case 10608:
	{
		currentAlarmText = F("Kino");
		break;
	}
	case 10609:
	{
		currentAlarmText = F("Kirche");
		break;
	}
	case 10610:
	{
		currentAlarmText = F("Schule");
		break;
	}
	case 10611:
	{
		currentAlarmText = F("Theater");
		break;
	}
	case 10612:
	{
		currentAlarmText = F("Zirkus");
		break;
	}
	case 10613:
	{
		currentAlarmText = F("Hotel");
		break;
	}
	case 10614:
	{
		currentAlarmText = F("Sägewerk / Schreinerei");
		break;
	}
	case 10615:
	{
		currentAlarmText = F("Lagerhalle");
		break;
	}
	case 10616:
	{
		currentAlarmText = F("Silo (kein Gefahrstoff)");
		break;
	}
	case 10617:
	{
		currentAlarmText = F("große Höhe – Turm");
		break;
	}
	case 10618:
	{
		currentAlarmText = F("große Höhe – Windrad");
		break;
	}
	case 10619:
	{
		currentAlarmText = F("Industriegebäude");
		break;
	}
	case 10620:
	{
		currentAlarmText = F("Bauernhof");
		break;
	}
	case 10621:
	{
		currentAlarmText = F("Stall / Scheune");
		break;
	}
	case 10622:
	{
		currentAlarmText = F("Aussiedlerhof");
		break;
	}
	case 10701:
	{
		currentAlarmText = F("Pflege-/Altenheim");
		break;
	}
	case 10702:
	{
		currentAlarmText = F("Kaufhaus");
		break;
	}
	case 10703:
	{
		currentAlarmText = F("Krankenhaus");
		break;
	}
	case 10801:
	{
		currentAlarmText = F("");
		break;
	}
	case 10901:
	{
		currentAlarmText = F("");
		break;
	}
	case 11001:
	{
		currentAlarmText = F("");
		break;
	}
	case 11101:
	{
		currentAlarmText = F("Brandmeldeanlage");
		break;
	}
	case 11102:
	{
		currentAlarmText = F("Rauchwarnmelder über Hausnotruf");
		break;
	}
	case 11103:
	{
		currentAlarmText = F("Rauchwarnmelder");
		break;
	}
	case 11201:
	{
		currentAlarmText = F("Boot / Yacht / Floß");
		break;
	}
	case 11301:
	{
		currentAlarmText = F("Elektroanlage / Trafo");
		break;
	}
	case 11401:
	{
		currentAlarmText = F("Zug im Tunnel");
		break;
	}
	case 11402:
	{
		currentAlarmText = F("S-Bahn im Tunnel");
		break;
	}
	case 11403:
	{
		currentAlarmText = F("U-Bahn im Tunnel");
		break;
	}
	case 11501:
	{
		currentAlarmText = F("Passagierschiff");
		break;
	}
	case 11502:
	{
		currentAlarmText = F("Frachtschiff");
		break;
	}
	case 11601:
	{
		currentAlarmText = F("Tunnel");
		break;
	}
	case 11701:
	{
		currentAlarmText = F("Wald groß (> 1000 m²)");
		break;
	}
	case 11702:
	{
		currentAlarmText = F("Bergwald");
		break;
	}
	case 11801:
	{
		currentAlarmText = F("Personenzug");
		break;
	}
	case 11802:
	{
		currentAlarmText = F("Güterzug");
		break;
	}
	case 11803:
	{
		currentAlarmText = F("Zug nur Lokomotive");
		break;
	}
	case 11804:
	{
		currentAlarmText = F("Straßenbahn");
		break;
	}
	case 11805:
	{
		currentAlarmText = F("U-Bahn im Freien");
		break;
	}
	case 11806:
	{
		currentAlarmText = F("S-Bahn im Freien");
		break;
	}
	case 20101:
	{
		currentAlarmText = F("Amoklage");
		break;
	}
	case 20201:
	{
		currentAlarmText = F("Einsatzstelle ausleuchten");
		break;
	}
	case 20301:
	{
		currentAlarmText = F("Bombendrohung");
		break;
	}
	case 20401:
	{
		currentAlarmText = F("Bombenfund");
		break;
	}
	case 20501:
	{
		currentAlarmText = F("Erkundung");
		break;
	}
	case 20601:
	{
		currentAlarmText = F("First Responder");
		break;
	}
	case 20701:
	{
		currentAlarmText = F("Gebäude eingestürzt");
		break;
	}
	case 20801:
	{
		currentAlarmText = F("Rettung Großtier (z. B. Kuh, Pferd)");
		break;
	}
	case 20901:
	{
		currentAlarmText = F("Hubschrauberlandung sichern");
		break;
	}
	case 21001:
	{
		currentAlarmText = F("Aufzug öffnen akut");
		break;
	}
	case 21101:
	{
		currentAlarmText = F("Person droht zu springen");
		break;
	}
	case 21102:
	{
		currentAlarmText = F("Person absturzgefährdet");
		break;
	}
	case 21103:
	{
		currentAlarmText = F("Person in Höhe");
		break;
	}
	case 21104:
	{
		currentAlarmText = F("Person aus Tiefe / Schacht");
		break;
	}
	case 21105:
	{
		currentAlarmText = F("schwergewichtiger Patient");
		break;
	}
	case 21106:
	{
		currentAlarmText = F("Person auf Windrad / Kran");
		break;
	}
	case 21107:
	{
		currentAlarmText = F("Paraglider / Fallschirmspringer / Drachenflieger abgestürzt");
		break;
	}
	case 21201:
	{
		currentAlarmText = F("Person unter Straßenbahn");
		break;
	}
	case 21202:
	{
		currentAlarmText = F("Straßenbahn");
		break;
	}
	case 21301:
	{
		currentAlarmText = F("Person Stromunfall");
		break;
	}
	case 21401:
	{
		currentAlarmText = F("Person unter U-Bahn");
		break;
	}
	case 21501:
	{
		currentAlarmText = F("Person verschüttet / Tiefbauunfall");
		break;
	}
	case 21502:
	{
		currentAlarmText = F("Person in Silo");
		break;
	}
	case 21601:
	{
		currentAlarmText = F("Wohnung öffnen akut");
		break;
	}
	case 21602:
	{
		currentAlarmText = F("Fahrzeug öffnen akut");
		break;
	}
	case 21701:
	{
		currentAlarmText = F("Person unter Zug");
		break;
	}
	case 21702:
	{
		currentAlarmText = F("Person unter S-Bahn");
		break;
	}
	case 21703:
	{
		currentAlarmText = F("Person vom Zug erfasst");
		break;
	}
	case 21801:
	{
		currentAlarmText = F("Drehleiter");
		break;
	}
	case 21901:
	{
		currentAlarmText = F("allgemein");
		break;
	}
	case 21902:
	{
		currentAlarmText = F("Baum auf Straße");
		break;
	}
	case 21903:
	{
		currentAlarmText = F("Baum auf Schiene");
		break;
	}
	case 21904:
	{
		currentAlarmText = F("Dach räumen");
		break;
	}
	case 21905:
	{
		currentAlarmText = F("Fahrzeug öffnen");
		break;
	}
	case 21906:
	{
		currentAlarmText = F("Fahrzeug sichern");
		break;
	}
	case 21907:
	{
		currentAlarmText = F("Wohnung öffnen");
		break;
	}
	case 21908:
	{
		currentAlarmText = F("Gebäude sichern");
		break;
	}
	case 21909:
	{
		currentAlarmText = F("Gegenstand / Teil sichern");
		break;
	}
	case 21910:
	{
		currentAlarmText = F("Straße reinigen");
		break;
	}
	case 21911:
	{
		currentAlarmText = F("Straße überschwemmt");
		break;
	}
	case 21912:
	{
		currentAlarmText = F("Wasser im Keller");
		break;
	}
	case 21913:
	{
		currentAlarmText = F("Wasser in Gebäude");
		break;
	}
	case 21914:
	{
		currentAlarmText = F("Unterstützung");
		break;
	}
	case 21915:
	{
		currentAlarmText = F("Personensuche");
		break;
	}
	case 21916:
	{
		currentAlarmText = F("VU mit Motorrad");
		break;
	}
	case 21917:
	{
		currentAlarmText = F("VU mit PKW");
		break;
	}
	case 21918:
	{
		currentAlarmText = F("Insekten (Gefahr für Personen)");
		break;
	}
	case 21919:
	{
		currentAlarmText = F("Rettung Kleintier");
		break;
	}
	case 21920:
	{
		currentAlarmText = F("Bergung Kleintier");
		break;
	}
	case 21921:
	{
		currentAlarmText = F("Bergung Großtier (z. B. Kuh, Pferd)");
		break;
	}
	case 21922:
	{
		currentAlarmText = F("Waldunfall ohne eingeklemmte Person");
		break;
	}
	case 21923:
	{
		currentAlarmText = F("Verkehrslenkung");
		break;
	}
	case 22001:
	{
		currentAlarmText = F("VU mehrere PKW");
		break;
	}
	case 22002:
	{
		currentAlarmText = F("VU LKW / Bus (leer), ohne eingeklemmte Personen");
		break;
	}
	case 22101:
	{
		currentAlarmText = F("Person eingeklemmt (nicht VU)");
		break;
	}
	case 22102:
	{
		currentAlarmText = F("VU 1 oder 2 PKW, Person eingeklemmt");
		break;
	}
	case 22103:
	{
		currentAlarmText = F("VU Bus (besetzt)");
		break;
	}
	case 22104:
	{
		currentAlarmText = F("Gerüst umgestürzt");
		break;
	}
	case 22105:
	{
		currentAlarmText = F("Stromleitungsmast umgestürzt");
		break;
	}
	case 22106:
	{
		currentAlarmText = F("Kran umgestürzt");
		break;
	}
	case 22107:
	{
		currentAlarmText = F("Waldunfall mit eingeklemmter Person");
		break;
	}
	case 22201:
	{
		currentAlarmText = F("VU mehrere PKW, Personen eingeklemmt");
		break;
	}
	case 22202:
	{
		currentAlarmText = F("VU LKW / Bus (leer), Person eingeklemmt");
		break;
	}
	case 22301:
	{
		currentAlarmText = F("VU Massenkarambolage, Personen eingeklemm");
		break;
	}
	case 22302:
	{
		currentAlarmText = F("VU Bus besetzt mit eingeklemmten Personen");
		break;
	}
	case 22303:
	{
		currentAlarmText = F("VU mehrere LKW mit eingeklemmten Personen");
		break;
	}
	case 22401:
	{
		currentAlarmText = F("Hilfeleistung Straßenbahn");
		break;
	}
	case 22402:
	{
		currentAlarmText = F("Hilfeleistung S-Bahn");
		break;
	}
	case 22403:
	{
		currentAlarmText = F("Hilfeleistung U-Bahn");
		break;
	}
	case 22501:
	{
		currentAlarmText = F("Bergung Sache / Leiche");
		break;
	}
	case 22502:
	{
		currentAlarmText = F("Rettung Tier");
		break;
	}
	case 22503:
	{
		currentAlarmText = F("Rettung Person");
		break;
	}
	case 22504:
	{
		currentAlarmText = F("Tauchereinsatz ohne Rettung");
		break;
	}
	case 22601:
	{
		currentAlarmText = F("Tragehilfe");
		break;
	}
	case 22701:
	{
		currentAlarmText = F("Baum / Ast droht zu fallen");
		break;
	}
	case 22702:
	{
		currentAlarmText = F("Baum / Ast auf Fahrbahn");
		break;
	}
	case 22703:
	{
		currentAlarmText = F("Baum / Ast auf Schiene");
		break;
	}
	case 22704:
	{
		currentAlarmText = F("Baum / Ast auf Gebäude");
		break;
	}
	case 22705:
	{
		currentAlarmText = F("Baum / Ast auf Stromleitung");
		break;
	}
	case 22706:
	{
		currentAlarmText = F("Baum / Ast auf PKW / LKW");
		break;
	}
	case 22707:
	{
		currentAlarmText = F("Baum umgestürzt");
		break;
	}
	case 22708:
	{
		currentAlarmText = F("Bauteil / Gegenstand droht zu fallen");
		break;
	}
	case 22709:
	{
		currentAlarmText = F("Gebäude sichern");
		break;
	}
	case 22710:
	{
		currentAlarmText = F("Bauzaun sichern");
		break;
	}
	case 22711:
	{
		currentAlarmText = F("Fahrbahn / Gehweg überschwemmt");
		break;
	}
	case 22712:
	{
		currentAlarmText = F("Gebäude unter Wasser");
		break;
	}
	case 22713:
	{
		currentAlarmText = F("Keller unter Wasser");
		break;
	}
	case 22714:
	{
		currentAlarmText = F("Fahrzeug / sonstigen Gegenstand sichern");
		break;
	}
	case 22715:
	{
		currentAlarmText = F("Erkundung nicht zeitkritisch");
		break;
	}
	case 22716:
	{
		currentAlarmText = F("sonstiger Schaden");
		break;
	}
	case 22801:
	{
		currentAlarmText = F("Notlandung");
		break;
	}
	case 22802:
	{
		currentAlarmText = F("Ballon");
		break;
	}
	case 22803:
	{
		currentAlarmText = F("Hubschrauber");
		break;
	}
	case 22804:
	{
		currentAlarmText = F("Kleinflugzeug");
		break;
	}
	case 22901:
	{
		currentAlarmText = F("Frachtflugzeug");
		break;
	}
	case 22902:
	{
		currentAlarmText = F("Passagierflugzeug");
		break;
	}
	case 22903:
	{
		currentAlarmText = F("Militärflugzeug");
		break;
	}
	case 23001:
	{
		currentAlarmText = F("Kollision Passagierschiff");
		break;
	}
	case 23002:
	{
		currentAlarmText = F("Kollision Frachtschiff");
		break;
	}
	case 23003:
	{
		currentAlarmText = F("Kollision Boot / Yacht / Floß");
		break;
	}
	case 23101:
	{
		currentAlarmText = F("Schiff leck Passagierschiff");
		break;
	}
	case 23102:
	{
		currentAlarmText = F("Schiff leck Frachtschiff");
		break;
	}
	case 23201:
	{
		currentAlarmText = F("Zug");
		break;
	}
	case 30101:
	{
		currentAlarmText = F("undefinierbarer Geruch");
		break;
	}
	case 30102:
	{
		currentAlarmText = F("Geruch nach Ammoniak");
		break;
	}
	case 30103:
	{
		currentAlarmText = F("Geruch nach Chlor");
		break;
	}
	case 30104:
	{
		currentAlarmText = F("Geruch nach Erdgas / Gas");
		break;
	}
	case 30201:
	{
		currentAlarmText = F("auslaufender Kraftstoff (z. B. Benzin, Diesel)");
		break;
	}
	case 30301:
	{
		currentAlarmText = F("verdächtiger Stoff");
		break;
	}
	case 30302:
	{
		currentAlarmText = F("undefinierbare Flüssigkeit");
		break;
	}
	case 30303:
	{
		currentAlarmText = F("undefinierbarer Gegenstand");
		break;
	}
	case 30304:
	{
		currentAlarmText = F("kleine Menge");
		break;
	}
	case 30305:
	{
		currentAlarmText = F("undefinierbares Pulver");
		break;
	}
	case 30306:
	{
		currentAlarmText = F("Gasaustritt im Freien");
		break;
	}
	case 30401:
	{
		currentAlarmText = F("große Menge");
		break;
	}
	case 30402:
	{
		currentAlarmText = F("Gasaustritt brennbar");
		break;
	}
	case 30403:
	{
		currentAlarmText = F("Gasaustritt im Gebäude");
		break;
	}
	case 30501:
	{
		currentAlarmText = F("Brand Atom im Gebäude");
		break;
	}
	case 30502:
	{
		currentAlarmText = F("Brand Atom im Freien");
		break;
	}
	case 30503:
	{
		currentAlarmText = F("Brand Atom PKW / LKW");
		break;
	}
	case 30504:
	{
		currentAlarmText = F("Brand Atomkraftwerk (AKW)");
		break;
	}
	case 30601:
	{
		currentAlarmText = F("Brand Tankstelle");
		break;
	}
	case 30602:
	{
		currentAlarmText = F("Brand Biogasanlage");
		break;
	}
	case 30603:
	{
		currentAlarmText = F("Brand Raffinerie");
		break;
	}
	case 30604:
	{
		currentAlarmText = F("Brand Tanklager");
		break;
	}
	case 30605:
	{
		currentAlarmText = F("Brand Tankwagen");
		break;
	}
	case 30701:
	{
		currentAlarmText = F("Brand Bio im Gebäude");
		break;
	}
	case 30702:
	{
		currentAlarmText = F("Brand Bio im Freien");
		break;
	}
	case 30703:
	{
		currentAlarmText = F("Brand Bio PKW / LKW");
		break;
	}
	case 30704:
	{
		currentAlarmText = F("Brand Chemie im Gebäude");
		break;
	}
	case 30705:
	{
		currentAlarmText = F("Brand Chemie im Freien");
		break;
	}
	case 30706:
	{
		currentAlarmText = F("Brand Chemie Zug");
		break;
	}
	case 30707:
	{
		currentAlarmText = F("Brand Chemie LKW");
		break;
	}
	case 30801:
	{
		currentAlarmText = F("THL Atom Austritt im Gebäude");
		break;
	}
	case 30802:
	{
		currentAlarmText = F("THL Atom Austritt im Freien");
		break;
	}
	case 30803:
	{
		currentAlarmText = F("THL Atom PKW / LKW");
		break;
	}
	case 30804:
	{
		currentAlarmText = F("THL VU Atom PKW / LKW");
		break;
	}
	case 30901:
	{
		currentAlarmText = F("THL Bio Austritt im Freien");
		break;
	}
	case 30902:
	{
		currentAlarmText = F("THL Bio Austritt im Gebäude");
		break;
	}
	case 30903:
	{
		currentAlarmText = F("THL Bio PKW / LKW");
		break;
	}
	case 30904:
	{
		currentAlarmText = F("THL Chemie Austritt im Gebäude");
		break;
	}
	case 30905:
	{
		currentAlarmText = F("THL Chemie Austritt im Freien");
		break;
	}
	case 30906:
	{
		currentAlarmText = F("THL Chemie PKW / LKW");
		break;
	}
	case 30907:
	{
		currentAlarmText = F("THL VU Bio PKW / LKW");
		break;
	}
	case 30908:
	{
		currentAlarmText = F("THL VU Chemie PKW / LKW");
		break;
	}
	case 30909:
	{
		currentAlarmText = F("THL VU Chemie Zug");
		break;
	}
	case 31001:
	{
		currentAlarmText = F("Explosion / Verpuffung");
		break;
	}
	case 31101:
	{
		currentAlarmText = F("Öl auf fließendem Gewässer");
		break;
	}
	case 31102:
	{
		currentAlarmText = F("Öl auf stehendem Gewässer");
		break;
	}
	case 31201:
	{
		currentAlarmText = F("undichter Heizöltank");
		break;
	}
	case 31202:
	{
		currentAlarmText = F("ausgedehnter Ölschaden");
		break;
	}
	case 31301:
	{
		currentAlarmText = F("Meldeanlage Ammoniak");
		break;
	}
	case 31302:
	{
		currentAlarmText = F("Meldeanlage Chlor");
		break;
	}
	case 31303:
	{
		currentAlarmText = F("Meldeanlage Stickstoff");
		break;
	}
	case 31304:
	{
		currentAlarmText = F("Meldeanlage CO2");
		break;
	}
	case 31305:
	{
		currentAlarmText = F("Meldeanlage Butan");
		break;
	}
	case 31306:
	{
		currentAlarmText = F("Meldeanlage Propan");
		break;
	}
	case 31307:
	{
		currentAlarmText = F("Meldeanlage undefiniert");
		break;
	}
	case 40101:
	{
		currentAlarmText = F("Bewusstsein");
		break;
	}
	case 40102:
	{
		currentAlarmText = F("Atmung");
		break;
	}
	case 40103:
	{
		currentAlarmText = F("Herz/Kreislauf");
		break;
	}
	case 40104:
	{
		currentAlarmText = F("Schmerzen");
		break;
	}
	case 40105:
	{
		currentAlarmText = F("Neuro");
		break;
	}
	case 40106:
	{
		currentAlarmText = F("Psych");
		break;
	}
	case 40107:
	{
		currentAlarmText = F("Trauma");
		break;
	}
	case 40108:
	{
		currentAlarmText = F("Verkehrsunfall (VU) nur RD");
		break;
	}
	case 40109:
	{
		currentAlarmText = F("(bis 12 Jahre) Erkrankt");
		break;
	}
	case 40110:
	{
		currentAlarmText = F("(bis 12 Jahre) Trauma");
		break;
	}
	case 40111:
	{
		currentAlarmText = F("Inkubator – Intensiv");
		break;
	}
	case 40112:
	{
		currentAlarmText = F("Neugeborenen-Holdienst (NHD)");
		break;
	}
	case 40113:
	{
		currentAlarmText = F("Verlegung – Notfalltransport mit RTW");
		break;
	}
	case 40114:
	{
		currentAlarmText = F("Sonstiges Ereignis/Zustand");
		break;
	}
	case 40115:
	{
		currentAlarmText = F("Sonstiges Ereignis/Zustand – Intoxikation");
		break;
	}
	case 40116:
	{
		currentAlarmText = F("Sonstiges Ereignis/Zustand – Geburt/Entbindung");
		break;
	}
	case 40117:
	{
		currentAlarmText = F("Ärger");
		break;
	}
	case 40118:
	{
		currentAlarmText = F("Hausnotruf aktiver Alarm");
		break;
	}
	case 40201:
	{
		currentAlarmText = F("Schmerzen – stark");
		break;
	}
	case 40301:
	{
		currentAlarmText = F("(bis 12 Jahre) Erkrankt – vitale Bedrohung");
		break;
	}
	case 40302:
	{
		currentAlarmText = F("(bis 12 Jahre) Trauma – vitale Bedrohung");
		break;
	}
	case 40303:
	{
		currentAlarmText = F("(bis 12 Jahre) Kreislaufstill- stand/Reanimation");
		break;
	}
	case 40304:
	{
		currentAlarmText = F("(bis 1 Jahr) Kreislaufstill- stand/Reanimation");
		break;
	}
	case 40305:
	{
		currentAlarmText = F("(bis 12 Jahre) Nachforderung NA");
		break;
	}
	case 40401:
	{
		currentAlarmText = F("Schmerzen – Nachforderung NA");
		break;
	}
	case 40402:
	{
		currentAlarmText = F("Neuro – vitale Bedrohung");
		break;
	}
	case 40403:
	{
		currentAlarmText = F("Neuro – Nachforderung NA");
		break;
	}
	case 40404:
	{
		currentAlarmText = F("Psych – vitale Bedrohung");
		break;
	}
	case 40405:
	{
		currentAlarmText = F("Psych – vitale Bedrohung – mit Polizei");
		break;
	}
	case 40406:
	{
		currentAlarmText = F("Psych – Nachforderung NA");
		break;
	}
	case 40407:
	{
		currentAlarmText = F("vitale Bedrohung – Person verletzt schwer");
		break;
	}
	case 40408:
	{
		currentAlarmText = F("vitale Bedrohung – Verkehrsunfall (VU) nur RD");
		break;
	}
	case 40409:
	{
		currentAlarmText = F("vitale Bedrohung – Arbeitsunfall");
		break;
	}
	case 40410:
	{
		currentAlarmText = F("vitale Bedrohung – Starke Blutung");
		break;
	}
	case 40411:
	{
		currentAlarmText = F("vitale Bedrohung – Unfall (Schule, Kindergarten, Kita)");
		break;
	}
	case 40412:
	{
		currentAlarmText = F("Nachforderung NA");
		break;
	}
	case 40413:
	{
		currentAlarmText = F("Verlegung – Notfalltransport mit NA");
		break;
	}
	case 40414:
	{
		currentAlarmText = F("Sonstiges Ereignis/Zustand – vitale Bedrohung");
		break;
	}
	case 40415:
	{
		currentAlarmText = F("Sonstiges Ereignis/Zustand – vitale Bedrohung – Intoxikation");
		break;
	}
	case 40416:
	{
		currentAlarmText = F("Sonstiges Ereignis/Zustand – Geburt/Entbindung akut");
		break;
	}
	case 40417:
	{
		currentAlarmText = F("Sonstiges Ereignis/Zustand – vitale Bedrohung – Nachforderung NA");
		break;
	}
	case 40418:
	{
		currentAlarmText = F("Ärger – vitale Bedrohung");
		break;
	}
	case 40419:
	{
		currentAlarmText = F("Ärger – Geiselnahme");
		break;
	}
	case 40420:
	{
		currentAlarmText = F("Ärger – Schuss, Hieb- und Stichverletzung(en)");
		break;
	}
	case 40421:
	{
		currentAlarmText = F("Ärger – vitale Bedrohung – Nachforderung NA");
		break;
	}
	case 40422:
	{
		currentAlarmText = F("2 oder 3 verletzte/ erkrankte Personen");
		break;
	}
	case 40501:
	{
		currentAlarmText = F("4 oder 5 verletzte/ erkrankte Personen");
		break;
	}
	case 40601:
	{
		currentAlarmText = F("6 bis 9 verletzte/ erkrankte Personen");
		break;
	}
	case 40701:
	{
		currentAlarmText = F("10 bis 15 verletzte/ erkrankte Personen");
		break;
	}
	case 40801:
	{
		currentAlarmText = F("16 bis 25 verletzte/ erkrankte Personen");
		break;
	}
	case 40901:
	{
		currentAlarmText = F("26 bis 50 verletzte/ erkrankte Personen");
		break;
	}
	case 41001:
	{
		currentAlarmText = F("51 bis 100 verletzte/ erkrankte Personen");
		break;
	}
	case 41101:
	{
		currentAlarmText = F("mehr als 100 verletzte/ erkrankte Personen");
		break;
	}
	case 41201:
	{
		currentAlarmText = F("Erkundung/ Vermisstensuche");
		break;
	}
	case 41202:
	{
		currentAlarmText = F("Rettungsdiensteinsatz in unwegsamen Gelände");
		break;
	}
	case 41203:
	{
		currentAlarmText = F("Höhlenunfall");
		break;
	}
	case 41204:
	{
		currentAlarmText = F("Bergrettung – Lawinenunfall");
		break;
	}
	case 41205:
	{
		currentAlarmText = F("Bergrettung – Canyonunfall");
		break;
	}
	case 41206:
	{
		currentAlarmText = F("Bergrettung – Skiunfall");
		break;
	}
	case 41207:
	{
		currentAlarmText = F("Seilbahnevakuierung");
		break;
	}
	case 41208:
	{
		currentAlarmText = F("Gleitschirm/Drachen in Baum");
		break;
	}
	case 41209:
	{
		currentAlarmText = F("fachliche Unterstützung für Andere");
		break;
	}
	case 41301:
	{
		currentAlarmText = F("Hilfeleistung");
		break;
	}
	case 41401:
	{
		currentAlarmText = F("gekentertes Boot");
		break;
	}
	case 41501:
	{
		currentAlarmText = F("mehrere gekenterte Boote");
		break;
	}
	case 41502:
	{
		currentAlarmText = F("Vermisstensuche");
		break;
	}
	case 41601:
	{
		currentAlarmText = F("1 Person in Wassernot");
		break;
	}
	case 41701:
	{
		currentAlarmText = F("2 bis 3 Personen in Wassernot");
		break;
	}
	case 41801:
	{
		currentAlarmText = F("ab 4 Personen in Wassernot");
		break;
	}
	case 41901:
	{
		currentAlarmText = F("Wasserrettung – Tauchunfall");
		break;
	}
	case 42001:
	{
		currentAlarmText = F("auf dem Eis verletzt/ erkrankt");
		break;
	}
	case 42101:
	{
		currentAlarmText = F("1 bis 2 Person(en) im Eis eingebrochen");
		break;
	}
	case 42201:
	{
		currentAlarmText = F("ab 3 Personen im Eis eingebrochen");
		break;
	}
	case 42301:
	{
		currentAlarmText = F("KTP – Transport zum Krankenhaus");
		break;
	}
	case 42302:
	{
		currentAlarmText = F("KTP – Verlegung");
		break;
	}
	case 42303:
	{
		currentAlarmText = F("KTP – Heimfahrt");
		break;
	}
	case 42304:
	{
		currentAlarmText = F("KTP – Ambulanzfahrt");
		break;
	}
	case 42305:
	{
		currentAlarmText = F("KTP – Unterbringung");
		break;
	}
	case 42306:
	{
		currentAlarmText = F("KTP – Inkubator");
		break;
	}
	case 42307:
	{
		currentAlarmText = F("KTP – Dialyse");
		break;
	}
	case 42308:
	{
		currentAlarmText = F("KTP – nicht disponibel (Prio 2)");
		break;
	}
	case 42309:
	{
		currentAlarmText = F("KTP – Wohnungswechsel");
		break;
	}
	case 42310:
	{
		currentAlarmText = F("KTP – sonstiger Transport");
		break;
	}
	case 42311:
	{
		currentAlarmText = F("Verlegung – nicht disponibel mit KTW (Prio 1)");
		break;
	}
	case 42401:
	{
		currentAlarmText = F("KTP – Übernahme Landeplatz");
		break;
	}
	case 42402:
	{
		currentAlarmText = F("KTP – mit RTW");
		break;
	}
	case 42403:
	{
		currentAlarmText = F("KTP – Schwergewichtiger Patient");
		break;
	}
	case 42501:
	{
		currentAlarmText = F("Infekt Gr. 4/E");
		break;
	}
	case 42601:
	{
		currentAlarmText = F("Verlegung – VEF");
		break;
	}
	case 42602:
	{
		currentAlarmText = F("Verlegung – VEF und RTW");
		break;
	}
	case 42701:
	{
		currentAlarmText = F("Verlegung – ITW");
		break;
	}
	case 42801:
	{
		currentAlarmText = F("Verlegung – ITH");
		break;
	}
	case 42901:
	{
		currentAlarmText = F("Ärger – Amok");
		break;
	}
	case 43001:
	{
		currentAlarmText = F("Bereitstellung Rettungsmittel");
		break;
	}
	case 43002:
	{
		currentAlarmText = F("Dienstfahrt");
		break;
	}
	case 43101:
	{
		currentAlarmText = F("Werkstattfahrt");
		break;
	}
	case 43102:
	{
		currentAlarmText = F("Gebietsabsicherung");
		break;
	}
	case 43201:
	{
		currentAlarmText = F("Betreuung von Personen Anzahl kleiner 50");
		break;
	}
	case 43202:
	{
		currentAlarmText = F("Betreuung von Personen Anzahl größer 50");
		break;
	}
	case 43301:
	{
		currentAlarmText = F("Hilfeleistung – nicht zeitkritisch");
		break;
	}
	case 43302:
	{
		currentAlarmText = F("Lotsenfahrt durch RD-Fahrzeuge");
		break;
	}
	case 43303:
	{
		currentAlarmText = F("Transport – von Transplantat / Organ / Blutkonserven / med. Gerät");
		break;
	}
	case 43401:
	{
		currentAlarmText = F("Anforderung RD von Fremd-ILS Bayern");
		break;
	}
	case 43402:
	{
		currentAlarmText = F("Anforderung RD von Fremd-ILS nicht Bayern");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}
	case 70101:
	{
		currentAlarmText = F("");
		break;
	}
	case 70201:
	{
		currentAlarmText = F("");
		break;
	}
	case 70301:
	{
		currentAlarmText = F("");
		break;
	}
	case 70401:
	{
		currentAlarmText = F("");
		break;
	}
	case 70501:
	{
		currentAlarmText = F("Motorradstreife");
		break;
	}
	case 70601:
	{
		currentAlarmText = F("Betroffene");
		break;
	}
	case 70701:
	{
		currentAlarmText = F("Einsatzkräfte");
		break;
	}
	case 70801:
	{
		currentAlarmText = F("");
		break;
	}
	case 70901:
	{
		currentAlarmText = F("Tragehilfe für den Rettungsdienst");
		break;
	}
	case 71001:
	{
		currentAlarmText = F("");
		break;
	}
	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_BE(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_BB(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 10101:
	{
		currentAlarmText = F("Papierkorb");
		break;
	}
	case 10102:
	{
		currentAlarmText = F("Container");
		break;
	}
	case 10103:
	{
		currentAlarmText = F("Kontrolle nach Brand/Ereignis");
		break;
	}
	case 10201:
	{
		currentAlarmText = F("Pkw");
		break;
	}
	case 10202:
	{
		currentAlarmText = F("Motorrad");
		break;
	}
	case 10301:
	{
		currentAlarmText = F("Lkw");
		break;
	}
	case 10302:
	{
		currentAlarmText = F("Bus");
		break;
	}
	case 10303:
	{
		currentAlarmText = F("Traktor");
		break;
	}
	case 10304:
	{
		currentAlarmText = F("Campinganhänger");
		break;
	}
	case 10401:
	{
		currentAlarmText = F("Schornstein");
		break;
	}
	case 10402:
	{
		currentAlarmText = F("Kamin");
		break;
	}
	case 10501:
	{
		currentAlarmText = F("Garage");
		break;
	}
	case 10502:
	{
		currentAlarmText = F("Schuppen");
		break;
	}
	case 10503:
	{
		currentAlarmText = F("Bungalow");
		break;
	}
	case 10504:
	{
		currentAlarmText = F("elektrische Anlage");
		break;
	}
	case 10505:
	{
		currentAlarmText = F("Trafo");
		break;
	}
	case 10601:
	{
		currentAlarmText = F("Zimmerbrand");
		break;
	}
	case 10602:
	{
		currentAlarmText = F("Kellerbrand");
		break;
	}
	case 10603:
	{
		currentAlarmText = F("Dachstuhlbrand");
		break;
	}
	case 10604:
	{
		currentAlarmText = F("andwirtschaftliches Anwesen");
		break;
	}
	case 10605:
	{
		currentAlarmText = F("Wohnung");
		break;
	}
	case 10701:
	{
		currentAlarmText = F("Sonderobjekt mit ObjektAAO");
		break;
	}
	case 10801:
	{
		currentAlarmText = F("örtliche Festlegung");
		break;
	}
	case 10901:
	{
		currentAlarmText = F("Ödland");
		break;
	}
	case 10902:
	{
		currentAlarmText = F("Wiese");
		break;
	}
	case 11001:
	{
		currentAlarmText = F("Wald");
		break;
	}
	case 11002:
	{
		currentAlarmText = F("Bahndamm");
		break;
	}
	case 11101:
	{
		currentAlarmText = F("Wald");
		break;
	}
	case 11102:
	{
		currentAlarmText = F(" Getreidefeld");
		break;
	}
	case 11201:
	{
		currentAlarmText = F("");
		break;
	}
	case 11301:
	{
		currentAlarmText = F("Sport- und Freizeitboote");
		break;
	}
	case 11401:
	{
		currentAlarmText = F("Schiff");
		break;
	}
	case 11402:
	{
		currentAlarmText = F("Transportschiff");
		break;
	}
	case 11403:
	{
		currentAlarmText = F("Fahrgastschiff");
		break;
	}
	case 11501:
	{
		currentAlarmText = F("");
		break;
	}
	case 11601:
	{
		currentAlarmText = F("");
		break;
	}
	case 11701:
	{
		currentAlarmText = F("");
		break;
	}
	case 11801:
	{
		currentAlarmText = F("");
		break;
	}
	case 20101:
	{
		currentAlarmText = F("Wasser in Keller");
		break;
	}
	case 20102:
	{
		currentAlarmText = F("Baum auf Straße");
		break;
	}
	case 20201:
	{
		currentAlarmText = F("Schäden durch witterungsbedingte Ereignisse");
		break;
	}
	case 20301:
	{
		currentAlarmText = F("Ausleuchten von Einsatzstellen");
		break;
	}
	case 20302:
	{
		currentAlarmText = F("Tragehilfe Rettungsdienst");
		break;
	}
	case 20303:
	{
		currentAlarmText = F("Hubschrauberlandung");
		break;
	}
	case 20304:
	{
		currentAlarmText = F("Transport RTH-Besatzung");
		break;
	}
	case 20305:
	{
		currentAlarmText = F("Stromunfall");
		break;
	}
	case 20401:
	{
		currentAlarmText = F("Hilflose Person");
		break;
	}
	case 20501:
	{
		currentAlarmText = F("Unfall mit Blechschaden, auslauf. Flüssigkeiten");
		break;
	}
	case 20601:
	{
		currentAlarmText = F("Unfall mit Verletzten, jedoch nicht eingeklemmt");
		break;
	}
	case 20701:
	{
		currentAlarmText = F("eingeklemmte Person");
		break;
	}
	case 20801:
	{
		currentAlarmText = F("LKW-/Busunfall LKW gegen PKW/LKW/BUS");
		break;
	}
	case 20901:
	{
		currentAlarmText = F("Pkw gegen Zug");
		break;
	}
	case 20902:
	{
		currentAlarmText = F("entgleister Zug");
		break;
	}
	case 20903:
	{
		currentAlarmText = F("Zug gegen Zug");
		break;
	}
	case 21001:
	{
		currentAlarmText = F("Schiffskollision");
		break;
	}
	case 21002:
	{
		currentAlarmText = F("leckgeschlagenes Schiff");
		break;
	}
	case 21003:
	{
		currentAlarmText = F("Transportschiff");
		break;
	}
	case 21004:
	{
		currentAlarmText = F("Fahrgastschiff");
		break;
	}
	case 21101:
	{
		currentAlarmText = F("Absturz Kleinflugzeug");
		break;
	}
	case 21201:
	{
		currentAlarmText = F("Unfall mit Großflugzeug");
		break;
	}
	case 21301:
	{
		currentAlarmText = F("");
		break;
	}
	case 21401:
	{
		currentAlarmText = F("Wasserrettung");
		break;
	}
	case 21402:
	{
		currentAlarmText = F("Eingebrochene Person in See");
		break;
	}
	case 21501:
	{
		currentAlarmText = F("Bauunfall");
		break;
	}
	case 21502:
	{
		currentAlarmText = F("Rettung aus Höhe");
		break;
	}
	case 21503:
	{
		currentAlarmText = F("Rettung aus Schacht");
		break;
	}
	case 21504:
	{
		currentAlarmText = F("Windkraftanlage");
		break;
	}
	case 21601:
	{
		currentAlarmText = F("Gasgeruch");
		break;
	}
	case 21602:
	{
		currentAlarmText = F("Gasaustritt");
		break;
	}
	case 21701:
	{
		currentAlarmText = F("AAO durch Träger des BS bis Körperschutzform 1");
		break;
	}
	case 21801:
	{
		currentAlarmText = F("AAO durch Landkreis in Verbindung mit Träger des BS");
		break;
	}
	case 21901:
	{
		currentAlarmText = F("");
		break;
	}
	case 22001:
	{
		currentAlarmText = F("");
		break;
	}
	case 22101:
	{
		currentAlarmText = F("");
		break;
	}
	case 22201:
	{
		currentAlarmText = F("Tier in Not");
		break;
	}
	case 22202:
	{
		currentAlarmText = F("Not durch Tier");
		break;
	}
	case 22301:
	{
		currentAlarmText = F("Einsätze im Auftrag des Trägers");
		break;
	}
	case 22302:
	{
		currentAlarmText = F("Amtshilfe");
		break;
	}
	case 22303:
	{
		currentAlarmText = F("BRASIWA");
		break;
	}
	case 22304:
	{
		currentAlarmText = F("Notarztzubringer");
		break;
	}
	case 22401:
	{
		currentAlarmText = F("Person in Not");
		break;
	}
	case 22402:
	{
		currentAlarmText = F("Technische Menschenrettung");
		break;
	}
	case 30101:
	{
		currentAlarmText = F("");
		break;
	}
	case 30201:
	{
		currentAlarmText = F("spezielle Situation (z.B. MRSA)");
		break;
	}
	case 40101:
	{
		currentAlarmText = F("");
		break;
	}
	case 40201:
	{
		currentAlarmText = F("");
		break;
	}
	case 40301:
	{
		currentAlarmText = F("");
		break;
	}
	case 40401:
	{
		currentAlarmText = F("");
		break;
	}
	case 40501:
	{
		currentAlarmText = F("");
		break;
	}
	case 40601:
	{
		currentAlarmText = F("");
		break;
	}
	case 40701:
	{
		currentAlarmText = F("");
		break;
	}
	case 40801:
	{
		currentAlarmText = F("");
		break;
	}
	case 40901:
	{
		currentAlarmText = F("");
		break;
	}
	case 41001:
	{
		currentAlarmText = F("");
		break;
	}
	case 41101:
	{
		currentAlarmText = F("");
		break;
	}
	case 41201:
	{
		currentAlarmText = F("");
		break;
	}
	case 41301:
	{
		currentAlarmText = F("");
		break;
	}
	case 41401:
	{
		currentAlarmText = F("Indikation Polytrauma");
		break;
	}
	case 41501:
	{
		currentAlarmText = F("mit Alarmierung von First-Responder-Einheiten");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}
	case 70101:
	{
		currentAlarmText = F("Primärtransport mit einem bodengebundenen Einsatzmittel");
		break;
	}
	case 70201:
	{
		currentAlarmText = F("Primärtransport mit einem bodengebundenen Einsatzmittel; Begleitung durch abgebendes Krankenhaus prüfen");
		break;
	}
	case 70301:
	{
		currentAlarmText = F("Sekundärtransport mit einem bodengebundenen Einsatzmittel");
		break;
	}
	case 70401:
	{
		currentAlarmText = F("Sekundärtransport mit einem bodengebundenen Einsatzmittel; Begleitung durch abgebendes Krankenhaus prüfen");
		break;
	}
	case 70501:
	{
		currentAlarmText = F("Sekundärtransport mit einem Luftrettungsmittel entsprechend der DA Luftrettung (§6 und §6.3.2), V-NEF nur als Ersatz für RTH/ITH");
		break;
	}
	case 70601:
	{
		currentAlarmText = F("Primärtransport mit einem Luftrettungsmittel entsprechend der DA Luftrettung (§5 - §5.2), V-NEF nur als Ersatz für RTH/ITH");
		break;
	}
	case 70701:
	{
		currentAlarmText = F("Sekundärtransport bodengebundenen Einsatzmittel, im Vorfeld durch den Träger genehmigte Transporte z.B. ADAC Rücktransporte");
		break;
	}
	case 80101:
	{
		currentAlarmText = F("5-9 Verletzte / Erkrankte");
		break;
	}
	case 80201:
	{
		currentAlarmText = F("10 -19 Verletzte / Erkrankte");
		break;
	}
	case 80301:
	{
		currentAlarmText = F("mehr als 20 Verletzte / Erkrankte");
		break;
	}
	case 80401:
	{
		currentAlarmText = F("Eigene Maßnahmen bei MANV anderer Träger");
		break;
	}
	case 80501:
	{
		currentAlarmText = F("größere Zahl von Erkrankten z.B. Lebensmittelvergiftung in einer Einrichtung");
		break;
	}
	case 90101:
	{
		currentAlarmText = F("Baby-Notarztwagen, Fahrt mit Inkubator");
		break;
	}
	case 90201:
	{
		currentAlarmText = F("Notfallseelsorge nach Einsatzgeschehen");
		break;
	}
	case 90301:
	{
		currentAlarmText = F("Werkstattfahrten");
		break;
	}
	case 90401:
	{
		currentAlarmText = F("Einsatz wird durch Polizei geführt (KLEE-Einsatz)");
		break;
	}
	case 90501:
	{
		currentAlarmText = F("Information über Ausnahmelage (z.B. Unwetter)");
		break;
	}
	case 90601:
	{
		currentAlarmText = F("Einsatz an Polizei übergeben");
		break;
	}
	case 90701:
	{
		currentAlarmText = F("Ablehung von Einsätzen ITH/RTH/V-NEF (keine Höher- oder Niederstufung nur Ablehungen)");
		break;
	}
	case 90801:
	{
		currentAlarmText = F("Anforderung von Rettungshunden");
		break;
	}
	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_HB(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 10101:
	{
		currentAlarmText = F("Feuer bereits gelöscht");
		break;
	}
	case 10102:
	{
		currentAlarmText = F("Garage (1-2 Stellplätze)");
		break;
	}
	case 10103:
	{
		currentAlarmText = F("Gras");
		break;
	}
	case 10104:
	{
		currentAlarmText = F("Müll");
		break;
	}
	case 10105:
	{
		currentAlarmText = F("Müllcontainer (SB)");
		break;
	}
	case 10106:
	{
		currentAlarmText = F("Parzelle");
		break;
	}
	case 10107:
	{
		currentAlarmText = F("PKW im Freien");
		break;
	}
	case 10108:
	{
		currentAlarmText = F("Schornstein");
		break;
	}
	case 10109:
	{
		currentAlarmText = F("Schuppen (SB)");
		break;
	}
	case 10110:
	{
		currentAlarmText = F("unklare Heizung");
		break;
	}
	case 10111:
	{
		currentAlarmText = F("verdächtiger Rauch");
		break;
	}
	case 10201:
	{
		currentAlarmText = F("Dachstuhl");
		break;
	}
	case 10202:
	{
		currentAlarmText = F("Gebäude");
		break;
	}
	case 10203:
	{
		currentAlarmText = F("Keller");
		break;
	}
	case 10204:
	{
		currentAlarmText = F("Mülldeponie");
		break;
	}
	case 10205:
	{
		currentAlarmText = F("Schiff < 1000 t");
		break;
	}
	case 10206:
	{
		currentAlarmText = F("Wohnung");
		break;
	}
	case 10207:
	{
		currentAlarmText = F("Zimmer");
		break;
	}
	case 10301:
	{
		currentAlarmText = F("Dachstuhl");
		break;
	}
	case 10302:
	{
		currentAlarmText = F("Gebäude");
		break;
	}
	case 10303:
	{
		currentAlarmText = F("Keller");
		break;
	}
	case 10304:
	{
		currentAlarmText = F("Mülldeponie");
		break;
	}
	case 10305:
	{
		currentAlarmText = F("Schiff < 1000 t");
		break;
	}
	case 10306:
	{
		currentAlarmText = F("Wohnung");
		break;
	}
	case 10307:
	{
		currentAlarmText = F("Zimmer");
		break;
	}
	case 10401:
	{
		currentAlarmText = F("Explosion");
		break;
	}
	case 10402:
	{
		currentAlarmText = F("Brand nach Explosion");
		break;
	}
	case 10403:
	{
		currentAlarmText = F("Erdgasauströmung (groß)");
		break;
	}
	case 10501:
	{
		currentAlarmText = F("Bauernhof");
		break;
	}
	case 10502:
	{
		currentAlarmText = F("Gebäudekomplex");
		break;
	}
	case 10503:
	{
		currentAlarmText = F("Lagerhalle");
		break;
	}
	case 10504:
	{
		currentAlarmText = F("Mehrfamilienhaus");
		break;
	}
	case 10505:
	{
		currentAlarmText = F("Reetdach");
		break;
	}
	case 10601:
	{
		currentAlarmText = F("Schiff > 1000 t");
		break;
	}
	case 10602:
	{
		currentAlarmText = F("Lagerhalle > 10000 qm");
		break;
	}
	case 10603:
	{
		currentAlarmText = F("Schuppen/Speicher (Hafen)");
		break;
	}
	case 10604:
	{
		currentAlarmText = F("Industrie");
		break;
	}
	case 10605:
	{
		currentAlarmText = F("Tanklager");
		break;
	}
	case 10701:
	{
		currentAlarmText = F("Flugunfall, drohend");
		break;
	}
	case 10801:
	{
		currentAlarmText = F("Flugunfall bestätigt");
		break;
	}
	case 10901:
	{
		currentAlarmText = F("Gefahrgut (SB)");
		break;
	}
	case 10902:
	{
		currentAlarmText = F("Labor");
		break;
	}
	case 10903:
	{
		currentAlarmText = F("Tankwagen");
		break;
	}
	case 10904:
	{
		currentAlarmText = F("Tankstelle");
		break;
	}
	case 11001:
	{
		currentAlarmText = F("Gefahrgut (radioaktiv)");
		break;
	}
	case 11101:
	{
		currentAlarmText = F("Tunnel");
		break;
	}
	case 20101:
	{
		currentAlarmText = F("Baum");
		break;
	}
	case 20102:
	{
		currentAlarmText = F("Keller auspumpen");
		break;
	}
	case 20103:
	{
		currentAlarmText = F("Person im Aufzug");
		break;
	}
	case 20104:
	{
		currentAlarmText = F("Person in Notlage");
		break;
	}
	case 20105:
	{
		currentAlarmText = F("Sturmschaden, klein");
		break;
	}
	case 20106:
	{
		currentAlarmText = F("Tier in Notlage");
		break;
	}
	case 20107:
	{
		currentAlarmText = F("Unklarer Geruch");
		break;
	}
	case 20108:
	{
		currentAlarmText = F("Verkehrshindernis");
		break;
	}
	case 20109:
	{
		currentAlarmText = F("Wasserrohrbruch");
		break;
	}
	case 20110:
	{
		currentAlarmText = F("Insekten");
		break;
	}
	case 20201:
	{
		currentAlarmText = F("Person in Wohnung");
		break;
	}
	case 20301:
	{
		currentAlarmText = F("Baum auf Haus");
		break;
	}
	case 20302:
	{
		currentAlarmText = F("Betriebsunfall");
		break;
	}
	case 20303:
	{
		currentAlarmText = F("Einsturz / Umsturz");
		break;
	}
	case 20304:
	{
		currentAlarmText = F("Straßenbahn entgleist");
		break;
	}
	case 20305:
	{
		currentAlarmText = F("Sturmschaden, groß");
		break;
	}
	case 20306:
	{
		currentAlarmText = F("Unfall (Straße)");
		break;
	}
	case 20401:
	{
		currentAlarmText = F("Baum auf Haus");
		break;
	}
	case 20402:
	{
		currentAlarmText = F("Betriebsunfall");
		break;
	}
	case 20403:
	{
		currentAlarmText = F("Einsturz / Umsturz");
		break;
	}
	case 20404:
	{
		currentAlarmText = F("Straßenbahn entgleist");
		break;
	}
	case 20405:
	{
		currentAlarmText = F("Sturmschaden, groß");
		break;
	}
	case 20406:
	{
		currentAlarmText = F("Unfall (Straße)");
		break;
	}
	case 20407:
	{
		currentAlarmText = F("Person nach Unfall eingeklemmt");
		break;
	}
	case 20408:
	{
		currentAlarmText = F("Person in Maschine eingeklemmt");
		break;
	}
	case 20501:
	{
		currentAlarmText = F("Gebäudeeinsturz");
		break;
	}
	case 20502:
	{
		currentAlarmText = F("Unfall (Schiene)");
		break;
	}
	case 20503:
	{
		currentAlarmText = F("Verschüttete Person (SB)");
		break;
	}
	case 20601:
	{
		currentAlarmText = F("Gefahrgut, Kleinstmenge");
		break;
	}
	case 20701:
	{
		currentAlarmText = F("Gefahrgut ausgelaufen < 300l");
		break;
	}
	case 20801:
	{
		currentAlarmText = F("Gasauströmung");
		break;
	}
	case 20802:
	{
		currentAlarmText = F("Gefahrgut ausgelaufen > 300l");
		break;
	}
	case 20901:
	{
		currentAlarmText = F("Giftgas");
		break;
	}
	case 20902:
	{
		currentAlarmText = F("Kesselwagen");
		break;
	}
	case 20903:
	{
		currentAlarmText = F("Tanklastzug");
		break;
	}
	case 21001:
	{
		currentAlarmText = F("Öl (SB) auf Gewässer");
		break;
	}
	case 21101:
	{
		currentAlarmText = F("Gegenstand droht zu fallen");
		break;
	}
	case 21201:
	{
		currentAlarmText = F("Person droht zu fallen");
		break;
	}
	case 21202:
	{
		currentAlarmText = F("Person droht zu springen");
		break;
	}
	case 21301:
	{
		currentAlarmText = F("Person in Wasser");
		break;
	}
	case 21302:
	{
		currentAlarmText = F("Eisunfall");
		break;
	}
	case 21303:
	{
		currentAlarmText = F("Taucherunfall");
		break;
	}
	case 21401:
	{
		currentAlarmText = F("Gefahrgut (radioaktiv)");
		break;
	}
	case 21402:
	{
		currentAlarmText = F("Strahler, geschlossen");
		break;
	}
	case 21403:
	{
		currentAlarmText = F("Strahler, offen");
		break;
	}
	case 21501:
	{
		currentAlarmText = F("Hilfeleistung Tunnel");
		break;
	}
	case 21601:
	{
		currentAlarmText = F("unklare Lage");
		break;
	}
	case 21701:
	{
		currentAlarmText = F("gewaltbereiter Täter");
		break;
	}
	case 40101:
	{
		currentAlarmText = F("Qualifizierter Krankentransport");
		break;
	}
	case 40201:
	{
		currentAlarmText = F("Notfalltransport ohne Alarm");
		break;
	}
	case 40301:
	{
		currentAlarmText = F("Notfalltransport mit Alarm");
		break;
	}
	case 40401:
	{
		currentAlarmText = F("Notfallrettung mit Arzt");
		break;
	}
	case 40501:
	{
		currentAlarmText = F("Rettungseinsatz bis 4 Verletzte");
		break;
	}
	case 40601:
	{
		currentAlarmText = F("Rettungseinsatz 5 bis 12 Verletzte (MANV 1)");
		break;
	}
	case 40701:
	{
		currentAlarmText = F("Rettungseinsatz > 12 Verletzte (MANV 2)");
		break;
	}
	case 40801:
	{
		currentAlarmText = F("First Responder");
		break;
	}
	case 40901:
	{
		currentAlarmText = F("überschwere Person");
		break;
	}
	case 41001:
	{
		currentAlarmText = F("Intensivtransport");
		break;
	}
	case 41101:
	{
		currentAlarmText = F("Krisenintervention > 5 Personen");
		break;
	}
	case 41201:
	{
		currentAlarmText = F("Transport von lebenswichtigen Medikamenten, Blutversorgungen und Organe für Notfallpatienten");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}
	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_HH(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_HE(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 10101:
	{
		currentAlarmText = F("PKW");
		break;
	}
	case 10102:
	{
		currentAlarmText = F("Mülltonne");
		break;
	}
	case 10103:
	{
		currentAlarmText = F("Gerümpel im Freien");
		break;
	}
	case 10104:
	{
		currentAlarmText = F("gelöschtes Feuer");
		break;
	}
	case 10105:
	{
		currentAlarmText = F("Nachschau");
		break;
	}
	case 10201:
	{
		currentAlarmText = F("Wohnungsbrand");
		break;
	}
	case 10202:
	{
		currentAlarmText = F("Dachstuhlbrand");
		break;
	}
	case 10203:
	{
		currentAlarmText = F("Kellerbrand");
		break;
	}
	case 10204:
	{
		currentAlarmText = F("Zimmerbrand");
		break;
	}
	case 10205:
	{
		currentAlarmText = F("Kaminbrand");
		break;
	}
	case 10206:
	{
		currentAlarmText = F("Rauchentwicklung");
		break;
	}
	case 10301:
	{
		currentAlarmText = F("in Wohngebäuden");
		break;
	}
	case 10401:
	{
		currentAlarmText = F("Hochhaus");
		break;
	}
	case 10402:
	{
		currentAlarmText = F("Gewerbebetrieb");
		break;
	}
	case 10403:
	{
		currentAlarmText = F("Schreinerei");
		break;
	}
	case 10404:
	{
		currentAlarmText = F("Kfz-Werkstatt");
		break;
	}
	case 10405:
	{
		currentAlarmText = F("Pension");
		break;
	}
	case 10406:
	{
		currentAlarmText = F("Lagerplatz");
		break;
	}
	case 10407:
	{
		currentAlarmText = F("Produktions- und/oder Lagergebäude");
		break;
	}
	case 10501:
	{
		currentAlarmText = F("in Sondergebäuden");
		break;
	}
	case 10601:
	{
		currentAlarmText = F("");
		break;
	}
	case 10701:
	{
		currentAlarmText = F("Meldung einer Brandmeldeanlage");
		break;
	}
	case 10801:
	{
		currentAlarmText = F("Reisebus");
		break;
	}
	case 10802:
	{
		currentAlarmText = F("Bus des ÖPNV");
		break;
	}
	case 10803:
	{
		currentAlarmText = F("Schulbus");
		break;
	}
	case 10901:
	{
		currentAlarmText = F("Kleinflugzeug");
		break;
	}
	case 10902:
	{
		currentAlarmText = F("Sportmaschine");
		break;
	}
	case 10903:
	{
		currentAlarmText = F("Segelflieger / Paraglider");
		break;
	}
	case 10904:
	{
		currentAlarmText = F("Hubschrauber");
		break;
	}
	case 10905:
	{
		currentAlarmText = F("Heißluftballons");
		break;
	}
	case 10906:
	{
		currentAlarmText = F("Militärmaschine");
		break;
	}
	case 11001:
	{
		currentAlarmText = F("Großflugzeug");
		break;
	}
	case 11101:
	{
		currentAlarmText = F("einzelner Gasflaschen");
		break;
	}
	case 11102:
	{
		currentAlarmText = F("einer Gasleitung");
		break;
	}
	case 11201:
	{
		currentAlarmText = F("Gastanks");
		break;
	}
	case 11202:
	{
		currentAlarmText = F("Gastankfahrzeugs");
		break;
	}
	case 11203:
	{
		currentAlarmText = F("Gaskesselwagens");
		break;
	}
	case 11301:
	{
		currentAlarmText = F("LKW");
		break;
	}
	case 11302:
	{
		currentAlarmText = F("Busses ohne Personen");
		break;
	}
	case 11303:
	{
		currentAlarmText = F("einer landwirtschaftlichen Arbeitsmaschine in Feldgemarkung (z.B. Mähdreschers)");
		break;
	}
	case 11401:
	{
		currentAlarmText = F("Schienenfahrzeugs ohne Menschenleben in Gefahr");
		break;
	}
	case 11402:
	{
		currentAlarmText = F("Triebfahrzeugs ohne Menschenleben in Gefahr");
		break;
	}
	case 11403:
	{
		currentAlarmText = F("Waggons ohne Menschenleben in Gefahr");
		break;
	}
	case 11404:
	{
		currentAlarmText = F("Personenzugs ohne Menschenleben in Gefahr");
		break;
	}
	case 11405:
	{
		currentAlarmText = F("U- / S-Bahn-Zug ohne Menschenleben in Gefahr");
		break;
	}
	case 11406:
	{
		currentAlarmText = F("Güterzugs ohne Menschenleben in Gefahr");
		break;
	}
	case 11501:
	{
		currentAlarmText = F("Schienenfahrzeugs");
		break;
	}
	case 11502:
	{
		currentAlarmText = F("Triebfahrzeugs");
		break;
	}
	case 11503:
	{
		currentAlarmText = F("Waggons");
		break;
	}
	case 11504:
	{
		currentAlarmText = F("Personenzugs");
		break;
	}
	case 11505:
	{
		currentAlarmText = F("U- / S-Bahn-Zug");
		break;
	}
	case 11506:
	{
		currentAlarmText = F("Güterzugs");
		break;
	}
	case 11601:
	{
		currentAlarmText = F("Meldung eines ausgelösten (Heim-) Rauchwarnmelders");
		break;
	}
	case 11701:
	{
		currentAlarmText = F("eines Sportboots");
		break;
	}
	case 11702:
	{
		currentAlarmText = F("eines Segelboots");
		break;
	}
	case 11703:
	{
		currentAlarmText = F("einer Yacht");
		break;
	}
	case 11801:
	{
		currentAlarmText = F("eines Frachtschiffes");
		break;
	}
	case 11901:
	{
		currentAlarmText = F("eines Personenschiffes");
		break;
	}
	case 11902:
	{
		currentAlarmText = F("einer Personen- oder Fahrzeugfähre");
		break;
	}
	case 12001:
	{
		currentAlarmText = F("Tankschiff");
		break;
	}
	case 12002:
	{
		currentAlarmText = F("Containerschiff");
		break;
	}
	case 12003:
	{
		currentAlarmText = F("Frachtschiff");
		break;
	}
	case 12101:
	{
		currentAlarmText = F("eines Waldes, einer Wiese oder Feldes mit geringer oder keiner Ausbreitungsgefahr");
		break;
	}
	case 12102:
	{
		currentAlarmText = F("unbekannte Lage in Wald, auf Wiese und Feldern");
		break;
	}
	case 12103:
	{
		currentAlarmText = F("Windenergieanlage außerhalb des Waldes");
		break;
	}
	case 12201:
	{
		currentAlarmText = F("eines Waldes, einer Wiese oder Feldes mit der Gefahr der weiteren Ausdehnung");
		break;
	}
	case 12202:
	{
		currentAlarmText = F("Windenergieanlage im Wald");
		break;
	}
	case 20101:
	{
		currentAlarmText = F("Wasser im Keller");
		break;
	}
	case 20102:
	{
		currentAlarmText = F("Wasserrohrbruch");
		break;
	}
	case 20103:
	{
		currentAlarmText = F("Tür- und Fenstersicherung");
		break;
	}
	case 20104:
	{
		currentAlarmText = F("Baum oder Gegenstand auf der Straße");
		break;
	}
	case 20105:
	{
		currentAlarmText = F("Tier in Not oder Unfall mit Tier");
		break;
	}
	case 20106:
	{
		currentAlarmText = F("einfache technische Hilfeleistung an Bächen, Seen oder in Hafenbereichen");
		break;
	}
	case 20107:
	{
		currentAlarmText = F("Ölspur");
		break;
	}
	case 20108:
	{
		currentAlarmText = F("Kleine Mengen Betriebsstoffe aufnehmen");
		break;
	}
	case 20201:
	{
		currentAlarmText = F("Notfall-Türöffnung");
		break;
	}
	case 20202:
	{
		currentAlarmText = F("Person im Aufzug");
		break;
	}
	case 20203:
	{
		currentAlarmText = F("Tragehilfe für den Rettungsdienst");
		break;
	}
	case 20301:
	{
		currentAlarmText = F("Fahrzeug umgestürzt");
		break;
	}
	case 20302:
	{
		currentAlarmText = F("Bauunfall");
		break;
	}
	case 20303:
	{
		currentAlarmText = F("Gerüsteinsturz");
		break;
	}
	case 20304:
	{
		currentAlarmText = F("Kran umgestürzt");
		break;
	}
	case 20305:
	{
		currentAlarmText = F("Unfall mit Einsturz von beteiligten Objekten");
		break;
	}
	case 20401:
	{
		currentAlarmText = F("in Absturzgefahr");
		break;
	}
	case 20402:
	{
		currentAlarmText = F("droht zu springen");
		break;
	}
	case 20501:
	{
		currentAlarmText = F("Unfall in großen elektrischen Anlagen / Hochspannungsanlagen");
		break;
	}
	case 20601:
	{
		currentAlarmText = F("Gebäudeeinsturz");
		break;
	}
	case 20602:
	{
		currentAlarmText = F("Bauunfall");
		break;
	}
	case 20603:
	{
		currentAlarmText = F("Gerüsteinsturz");
		break;
	}
	case 20604:
	{
		currentAlarmText = F("Kran umgestürzt");
		break;
	}
	case 20605:
	{
		currentAlarmText = F("Unfall mit Einsturz von beteiligten Objekten");
		break;
	}
	case 20606:
	{
		currentAlarmText = F("Person verschüttet");
		break;
	}
	case 20701:
	{
		currentAlarmText = F("Einfache technische Hilfeleistung auf Flüssen");
		break;
	}
	case 20801:
	{
		currentAlarmText = F("Person in Fluss");
		break;
	}
	case 20901:
	{
		currentAlarmText = F("Bach");
		break;
	}
	case 20902:
	{
		currentAlarmText = F("See");
		break;
	}
	case 20903:
	{
		currentAlarmText = F("Hafenbereich");
		break;
	}
	case 21001:
	{
		currentAlarmText = F("Gasgeruch");
		break;
	}
	case 21101:
	{
		currentAlarmText = F("Beschädigung einer Gasleitung");
		break;
	}
	case 21102:
	{
		currentAlarmText = F("Beschädigung eines Gastanks");
		break;
	}
	case 21103:
	{
		currentAlarmText = F("Beschädigung eines Gastankfahrzeugs");
		break;
	}
	case 21104:
	{
		currentAlarmText = F("Beschädigung eines Gaskesselwagen");
		break;
	}
	case 21201:
	{
		currentAlarmText = F("einzelnen Gebinden von Chemikalien (Säure o.ä.)");
		break;
	}
	case 21202:
	{
		currentAlarmText = F("einzelnen Gebinden von Kraftstoffen (Benzin o.ä.)");
		break;
	}
	case 21203:
	{
		currentAlarmText = F("einzelnen Gebinden von größeren Mengen Öl");
		break;
	}
	case 21204:
	{
		currentAlarmText = F("Austritt von Gefahrstoff im begrenzten Umfang");
		break;
	}
	case 21205:
	{
		currentAlarmText = F("Austritt von Chlorgas im Schwimmbad");
		break;
	}
	case 21301:
	{
		currentAlarmText = F("Tankfahrzeug");
		break;
	}
	case 21302:
	{
		currentAlarmText = F("Tankcontainer");
		break;
	}
	case 21303:
	{
		currentAlarmText = F("Kesselwaggon");
		break;
	}
	case 21401:
	{
		currentAlarmText = F("PKW / LKW nach VU");
		break;
	}
	case 21402:
	{
		currentAlarmText = F("Kfz / Maschine");
		break;
	}
	case 21403:
	{
		currentAlarmText = F("eCall-Notruf");
		break;
	}
	case 21404:
	{
		currentAlarmText = F("Person verschüttet");
		break;
	}
	case 21501:
	{
		currentAlarmText = F("Bus nach VU");
		break;
	}
	case 21502:
	{
		currentAlarmText = F("Kfz / Maschine");
		break;
	}
	case 21503:
	{
		currentAlarmText = F("Mehrere Personen verschüttet");
		break;
	}
	case 21601:
	{
		currentAlarmText = F("Öl auf Fluss");
		break;
	}
	case 21701:
	{
		currentAlarmText = F("Öl auf Bach");
		break;
	}
	case 21702:
	{
		currentAlarmText = F("Öl auf See");
		break;
	}
	case 21703:
	{
		currentAlarmText = F("Öl auf Hafenbereich");
		break;
	}
	case 21801:
	{
		currentAlarmText = F("Unfall mit radioaktiven Stoffen");
		break;
	}
	case 21901:
	{
		currentAlarmText = F("Havarie oder Kollision eines Personen- oder Frachtschiffes oder einer Fähre");
		break;
	}
	case 21902:
	{
		currentAlarmText = F("Schiff auf Grund gelaufen oder droht zu sinken");
		break;
	}
	case 21903:
	{
		currentAlarmText = F("größerer Wassereintritt in Boot / Schiff");
		break;
	}
	case 22001:
	{
		currentAlarmText = F("Havarie oder Kollision eines Personen- oder Frachtschiffes oder einer Fähre");
		break;
	}
	case 22101:
	{
		currentAlarmText = F("Person unter Zug / U- / S-Bahn / Straßenbahn");
		break;
	}
	case 22102:
	{
		currentAlarmText = F("Kollision eines Zuges mit einem Straßenfahrzeug");
		break;
	}
	case 22201:
	{
		currentAlarmText = F("Unfall eines Zuges / einer U- / S-Bahn / Straßenbahn");
		break;
	}
	case 22202:
	{
		currentAlarmText = F("Kollision zweier Züge");
		break;
	}
	case 30101:
	{
		currentAlarmText = F("Baum umgestürzt");
		break;
	}
	case 30102:
	{
		currentAlarmText = F("Dach abgedeckt/eingestürzt");
		break;
	}
	case 30103:
	{
		currentAlarmText = F("Schäden durch umhergewehte Gegenständen");
		break;
	}
	case 30104:
	{
		currentAlarmText = F("Sicherung von Gebäudeteilen und Gegenständen");
		break;
	}
	case 30105:
	{
		currentAlarmText = F("Befreiung von Schneelasten");
		break;
	}
	case 30201:
	{
		currentAlarmText = F("Wasser im Keller, in Tiefgaragen und Unterführungen");
		break;
	}
	case 30202:
	{
		currentAlarmText = F("Straße überflutet");
		break;
	}
	case 30203:
	{
		currentAlarmText = F("Kfz steckt im Wasser fest");
		break;
	}
	case 40101:
	{
		currentAlarmText = F("Qualifizierter Krankentransport");
		break;
	}
	case 40102:
	{
		currentAlarmText = F("ärztliche Einweisung (sofort durchzuführender, disponibler oder vorbestellter Krankentransport)");
		break;
	}
	case 40201:
	{
		currentAlarmText = F("Minderdringlicher Notfalleinsatz nach Indikationsliste für den N-KTW, dessen Dringlichkeit nicht so groß ist, dass die Anordnung von Sondersignalen oder der Einsatz eines RTW / MZF erforderlich wäre");
		break;
	}
	case 40301:
	{
		currentAlarmText = F("Notfalleinsatz unterhalb der Indikationsliste für den Notarzt, dessen Dringlichkeit nicht so groß ist, dass die Anordnung von Sondersignalen erforderlich wäre");
		break;
	}
	case 40401:
	{
		currentAlarmText = F("Notfalleinsatz unterhalb der Indikationsliste für den Notarzt, jedoch so dringlich, dass der Gebrauch von Sondersignalen angeordnet werden muss");
		break;
	}
	case 40501:
	{
		currentAlarmText = F("Notfalleinsatz mit einem Notarztsystem; bei allen akut lebensbedrohlichen Situationen, die der Indikationsliste für den Notarzt entsprechen");
		break;
	}
	case 40601:
	{
		currentAlarmText = F("Notarzteinsatz ‚alleine‘ bei akut lebensbedrohlichen Situationen, die der Indikationsliste für den Notarzt entsprechen (z. B. bereichsübergreifender Notarzteinsatz oder Notarzt-Nachforderung im eigenen Rettungsdienstbereich)");
		break;
	}
	case 40701:
	{
		currentAlarmText = F("Notfalleinsatz bei lebensbedrohlichen Einsatzlagen für das Einsatzpersonal im Zusammenhang mit bewaffneten Gewalttätern");
		break;
	}
	case 40801:
	{
		currentAlarmText = F("Notfall mit einer großen Anzahl von Verletzten und/oder Erkrankten sowie Betroffenen");
		break;
	}
	case 40901:
	{
		currentAlarmText = F("Mobile Rettungswache zur Bereichsabdeckung oder Wachverschiebungen von Einsatzmitteln");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_MV(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_NI(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_NW(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 10101:
	{
		currentAlarmText = F("CONTAINER");
		break;
	}
	case 10102:
	{
		currentAlarmText = F("PKW");
		break;
	}
	case 10103:
	{
		currentAlarmText = F("FLÄCHE");
		break;
	}
	case 10104:
	{
		currentAlarmText = F("RAUCHMELDER");
		break;
	}
	case 10105:
	{
		currentAlarmText = F("NACHSCHAU");
		break;
	}
	case 10201:
	{
		currentAlarmText = F("GEBÄUDE");
		break;
	}
	case 10202:
	{
		currentAlarmText = F("KAMIN");
		break;
	}
	case 10203:
	{
		currentAlarmText = F("LKW");
		break;
	}
	case 10204:
	{
		currentAlarmText = F("TRANSFORMATOR");
		break;
	}
	case 10205:
	{
		currentAlarmText = F("FLÄCHE");
		break;
	}
	case 10206:
	{
		currentAlarmText = F("WALD");
		break;
	}
	case 10207:
	{
		currentAlarmText = F("BMA");
		break;
	}
	case 10208:
	{
		currentAlarmText = F("ASE");
		break;
	}
	case 10301:
	{
		currentAlarmText = F("GEBÄUDE");
		break;
	}
	case 10302:
	{
		currentAlarmText = F("DACH");
		break;
	}
	case 10303:
	{
		currentAlarmText = F("BMA");
		break;
	}
	case 10304:
	{
		currentAlarmText = F("ASE");
		break;
	}
	case 10401:
	{
		currentAlarmText = F("GEBÄUDE");
		break;
	}
	case 10402:
	{
		currentAlarmText = F("ATH/KH");
		break;
	}
	case 10403:
	{
		currentAlarmText = F("TIEFGARAGE");
		break;
	}
	case 10404:
	{
		currentAlarmText = F("EXPLOSION");
		break;
	}
	case 10405:
	{
		currentAlarmText = F("WALD");
		break;
	}
	case 10406:
	{
		currentAlarmText = F("BMA");
		break;
	}
	case 10407:
	{
		currentAlarmText = F("ASE");
		break;
	}
	case 10501:
	{
		currentAlarmText = F("U-BAHN");
		break;
	}
	case 10502:
	{
		currentAlarmText = F("U-TUNNEL");
		break;
	}
	case 10503:
	{
		currentAlarmText = F("ASE");
		break;
	}
	case 20101:
	{
		currentAlarmText = F("HIRD");
		break;
	}
	case 20102:
	{
		currentAlarmText = F("P.EINGESCHLOSSEN");
		break;
	}
	case 20103:
	{
		currentAlarmText = F("P.AUFZUG");
		break;
	}
	case 20104:
	{
		currentAlarmText = F("STURM");
		break;
	}
	case 20105:
	{
		currentAlarmText = F("WASSER");
		break;
	}
	case 20106:
	{
		currentAlarmText = F("TIERNOT");
		break;
	}
	case 20107:
	{
		currentAlarmText = F("TIERTRANSPORT");
		break;
	}
	case 20201:
	{
		currentAlarmText = F("P.KLEMMT");
		break;
	}
	case 20202:
	{
		currentAlarmText = F("P.SPRINGT");
		break;
	}
	case 20203:
	{
		currentAlarmText = F("SPRENG-KAMPFM");
		break;
	}
	case 20204:
	{
		currentAlarmText = F("KANAL-UNF");
		break;
	}
	case 20205:
	{
		currentAlarmText = F("HÖHE/TIEFE");
		break;
	}
	case 20206:
	{
		currentAlarmText = F("PZUG");
		break;
	}
	case 20301:
	{
		currentAlarmText = F("P.KLEMMT");
		break;
	}
	case 20302:
	{
		currentAlarmText = F("P.SCHÜTT");
		break;
	}
	case 20303:
	{
		currentAlarmText = F("PZUG");
		break;
	}
	case 20304:
	{
		currentAlarmText = F("P.WASSER/EIS");
		break;
	}
	case 20305:
	{
		currentAlarmText = F("HÖHE/TIEFE");
		break;
	}
	case 20401:
	{
		currentAlarmText = F("GEBÄUDEEINSTURZ");
		break;
	}
	case 20501:
	{
		currentAlarmText = F("GEBÄUDEEINSTURZ");
		break;
	}
	case 20601:
	{
		currentAlarmText = F("BEN.");
		break;
	}
	case 20602:
	{
		currentAlarmText = F("BAUM");
		break;
	}
	case 20603:
	{
		currentAlarmText = F("DACH");
		break;
	}
	case 20604:
	{
		currentAlarmText = F("KELLER");
		break;
	}
	case 20605:
	{
		currentAlarmText = F("STURM");
		break;
	}
	case 20606:
	{
		currentAlarmText = F("VERKEHR");
		break;
	}
	case 20607:
	{
		currentAlarmText = F("WASSER");
		break;
	}
	case 20701:
	{
		currentAlarmText = F("");
		break;
	}
	case 20801:
	{
		currentAlarmText = F("");
		break;
	}
	case 20901:
	{
		currentAlarmText = F("");
		break;
	}
	case 21001:
	{
		currentAlarmText = F("");
		break;
	}
	case 21101:
	{
		currentAlarmText = F("");
		break;
	}
	case 21201:
	{
		currentAlarmText = F("");
		break;
	}
	case 21301:
	{
		currentAlarmText = F("");
		break;
	}
	case 21401:
	{
		currentAlarmText = F("");
		break;
	}
	case 21501:
	{
		currentAlarmText = F("");
		break;
	}
	case 21601:
	{
		currentAlarmText = F("");
		break;
	}
	case 30101:
	{
		currentAlarmText = F("ÖL");
		break;
	}
	case 30102:
	{
		currentAlarmText = F("ERKUND");
		break;
	}
	case 30201:
	{
		currentAlarmText = F("ÖL");
		break;
	}
	case 30202:
	{
		currentAlarmText = F("FUND");
		break;
	}
	case 30301:
	{
		currentAlarmText = F("AUSTRITT");
		break;
	}
	case 30302:
	{
		currentAlarmText = F("LKW/BAHN");
		break;
	}
	case 30303:
	{
		currentAlarmText = F("STRAHL");
		break;
	}
	case 30401:
	{
		currentAlarmText = F("AUSTRITT");
		break;
	}
	case 30402:
	{
		currentAlarmText = F("LKW/BAHN");
		break;
	}
	case 30403:
	{
		currentAlarmText = F("SCHIFF");
		break;
	}
	case 30501:
	{
		currentAlarmText = F("");
		break;
	}
	case 30601:
	{
		currentAlarmText = F("");
		break;
	}
	case 40101:
	{
		currentAlarmText = F("Qualifizierter Krankentransport");
		break;
	}
	case 40102:
	{
		currentAlarmText = F("ärztliche Einweisung (sofort durchzuführender, disponibler oder vorbestellter Krankentransport)");
		break;
	}
	case 40201:
	{
		currentAlarmText = F("Minderdringlicher Notfalleinsatz nach Indikationsliste für den N-KTW, dessen Dringlichkeit nicht so groß ist, dass die Anordnung von Sondersignalen oder der Einsatz eines RTW / MZF erforderlich wäre");
		break;
	}
	case 40301:
	{
		currentAlarmText = F("Notfalleinsatz unterhalb der Indikationsliste für den Notarzt, dessen Dringlichkeit nicht so groß ist, dass die Anordnung von Sondersignalen erforderlich wäre");
		break;
	}
	case 40401:
	{
		currentAlarmText = F("Notfalleinsatz unterhalb der Indikationsliste für den Notarzt, jedoch so dringlich, dass der Gebrauch von Sondersignalen angeordnet werden muss");
		break;
	}
	case 40501:
	{
		currentAlarmText = F("Notfalleinsatz mit einem Notarztsystem; bei allen akut lebensbedrohlichen Situationen, die der Indikationsliste für den Notarzt entsprechen");
		break;
	}
	case 40601:
	{
		currentAlarmText = F("Notarzteinsatz ‚alleine‘ bei akut lebensbedrohlichen Situationen, die der Indikationsliste für den Notarzt entsprechen (z. B. bereichsübergreifender Notarzteinsatz oder Notarzt-Nachforderung im eigenen Rettungsdienstbereich)");
		break;
	}
	case 40701:
	{
		currentAlarmText = F("Notfalleinsatz bei lebensbedrohlichen Einsatzlagen für das Einsatzpersonal im Zusammenhang mit bewaffneten Gewalttätern");
		break;
	}
	case 40801:
	{
		currentAlarmText = F("Notfall mit einer großen Anzahl von Verletzten und/oder Erkrankten sowie Betroffenen");
		break;
	}
	case 40901:
	{
		currentAlarmText = F("Mobile Rettungswache zur Bereichsabdeckung oder Wachverschiebungen von Einsatzmitteln");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}
	case 70101:
	{
		currentAlarmText = F("");
		break;
	}
	case 70201:
	{
		currentAlarmText = F("");
		break;
	}
	case 70301:
	{
		currentAlarmText = F("");
		break;
	}
	case 70401:
	{
		currentAlarmText = F("");
		break;
	}
	case 70501:
	{
		currentAlarmText = F("");
		break;
	}
	case 70601:
	{
		currentAlarmText = F("");
		break;
	}
	case 70701:
	{
		currentAlarmText = F("");
		break;
	}
	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_RP(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 10101:
	{
		currentAlarmText = F("Müllbrand");
		break;
	}
	case 10102:
	{
		currentAlarmText = F("Sperrmüllbrand");
		break;
	}
	case 10103:
	{
		currentAlarmText = F("Müllcontainer");
		break;
	}
	case 10104:
	{
		currentAlarmText = F("Mülltonne");
		break;
	}
	case 10105:
	{
		currentAlarmText = F("Altpapierbrand");
		break;
	}
	case 10201:
	{
		currentAlarmText = F("Flächenbrand klein");
		break;
	}
	case 10202:
	{
		currentAlarmText = F("Wiesenbrand");
		break;
	}
	case 10203:
	{
		currentAlarmText = F("Böschungsbrand");
		break;
	}
	case 10204:
	{
		currentAlarmText = F("Heckenbrand");
		break;
	}
	case 10205:
	{
		currentAlarmText = F("Gebüschbrand");
		break;
	}
	case 10206:
	{
		currentAlarmText = F("Baumbrand");
		break;
	}
	case 10301:
	{
		currentAlarmText = F("Fahrzeugbrand klein");
		break;
	}
	case 10302:
	{
		currentAlarmText = F("Fahrzeugbrand innerorts");
		break;
	}
	case 10303:
	{
		currentAlarmText = F("PKW-Brand innerorts");
		break;
	}
	case 10304:
	{
		currentAlarmText = F("Motorradbrand");
		break;
	}
	case 10305:
	{
		currentAlarmText = F("Zweiradbrand");
		break;
	}
	case 10401:
	{
		currentAlarmText = F("Brandnachschau");
		break;
	}
	case 10402:
	{
		currentAlarmText = F("gelöschtes Feuer");
		break;
	}
	case 10403:
	{
		currentAlarmText = F("erloschenes Feuer");
		break;
	}
	case 10501:
	{
		currentAlarmText = F("Rauchentwicklung im Freien");
		break;
	}
	case 10502:
	{
		currentAlarmText = F("unklare Rauchentwicklung im Freien");
		break;
	}
	case 10503:
	{
		currentAlarmText = F("Brandgeruch im Freien");
		break;
	}
	case 10504:
	{
		currentAlarmText = F("Rauchsäule im Gelände");
		break;
	}
	case 10601:
	{
		currentAlarmText = F("Rauchentwicklung aus Gebäude");
		break;
	}
	case 10602:
	{
		currentAlarmText = F("Rauchentwicklung in / aus Gebäude unklar");
		break;
	}
	case 10603:
	{
		currentAlarmText = F("ungewöhnlicher Geruch im Gebäude");
		break;
	}
	case 10701:
	{
		currentAlarmText = F("Flächenbrand groß");
		break;
	}
	case 10702:
	{
		currentAlarmText = F("Waldbrand");
		break;
	}
	case 10703:
	{
		currentAlarmText = F("Rundballenbrand");
		break;
	}
	case 10801:
	{
		currentAlarmText = F("Fahrzeugbrand groß");
		break;
	}
	case 10802:
	{
		currentAlarmText = F("Fahrzeugbrand außerorts");
		break;
	}
	case 10803:
	{
		currentAlarmText = F("PKW-Brand außerorts");
		break;
	}
	case 10804:
	{
		currentAlarmText = F("LKW-Brand");
		break;
	}
	case 10805:
	{
		currentAlarmText = F("Bus-Brand");
		break;
	}
	case 10806:
	{
		currentAlarmText = F("mehrere Fahrzeuge");
		break;
	}
	case 10901:
	{
		currentAlarmText = F("Kaminbrand");
		break;
	}
	case 10902:
	{
		currentAlarmText = F("Schornsteinbrand");
		break;
	}
	case 11001:
	{
		currentAlarmText = F("Nebengebäude");
		break;
	}
	case 11002:
	{
		currentAlarmText = F("Nebengebäudebrand");
		break;
	}
	case 11003:
	{
		currentAlarmText = F("Gartenhausbrand");
		break;
	}
	case 11004:
	{
		currentAlarmText = F("Laubenbrand");
		break;
	}
	case 11005:
	{
		currentAlarmText = F("Garagenbrand");
		break;
	}
	case 11006:
	{
		currentAlarmText = F("Barackenbrand");
		break;
	}
	case 11007:
	{
		currentAlarmText = F("Wohnwagenbrand");
		break;
	}
	case 11008:
	{
		currentAlarmText = F("Bauwagenbrand");
		break;
	}
	case 11009:
	{
		currentAlarmText = F("Schuppenbrand");
		break;
	}
	case 11101:
	{
		currentAlarmText = F("Rauchwarnmelder");
		break;
	}
	case 11102:
	{
		currentAlarmText = F("Piepsender Heimrauchmelder");
		break;
	}
	case 11103:
	{
		currentAlarmText = F("Heimrauchmelder");
		break;
	}
	case 11104:
	{
		currentAlarmText = F("Rauchmelder");
		break;
	}
	case 11201:
	{
		currentAlarmText = F("BMA");
		break;
	}
	case 11301:
	{
		currentAlarmText = F("Wohnungsbrand");
		break;
	}
	case 11302:
	{
		currentAlarmText = F("Zimmerbrand");
		break;
	}
	case 11303:
	{
		currentAlarmText = F("Küchenbrand");
		break;
	}
	case 11304:
	{
		currentAlarmText = F("Kellerbrand");
		break;
	}
	case 11401:
	{
		currentAlarmText = F("Wohnungsbrand mit Personenrettung");
		break;
	}
	case 11402:
	{
		currentAlarmText = F("Zimmerbrand mit Personenrettung");
		break;
	}
	case 11403:
	{
		currentAlarmText = F("Küchenbrand mit Personenrettung");
		break;
	}
	case 11404:
	{
		currentAlarmText = F("Kellerbrand mit Personenrettung");
		break;
	}
	case 11501:
	{
		currentAlarmText = F("Gebäudebrand");
		break;
	}
	case 11502:
	{
		currentAlarmText = F("Gebäudevollbrand");
		break;
	}
	case 11503:
	{
		currentAlarmText = F("Dachstuhlbrand");
		break;
	}
	case 11504:
	{
		currentAlarmText = F("Feuer mit Personenrettung");
		break;
	}
	case 11505:
	{
		currentAlarmText = F("landwirtschaftliches Gebäude");
		break;
	}
	case 11601:
	{
		currentAlarmText = F("Hotel");
		break;
	}
	case 11602:
	{
		currentAlarmText = F("Event");
		break;
	}
	case 11603:
	{
		currentAlarmText = F("Hotelbrand");
		break;
	}
	case 11604:
	{
		currentAlarmText = F("Festzeltbrand");
		break;
	}
	case 11605:
	{
		currentAlarmText = F("Großereignis");
		break;
	}
	case 11606:
	{
		currentAlarmText = F("Versammlungsstätte");
		break;
	}
	case 11607:
	{
		currentAlarmText = F("Pensionsbrand");
		break;
	}
	case 11701:
	{
		currentAlarmText = F("Industriebrand");
		break;
	}
	case 11702:
	{
		currentAlarmText = F("Hallenbrand");
		break;
	}
	case 11703:
	{
		currentAlarmText = F("Industriegebäudebrand");
		break;
	}
	case 11704:
	{
		currentAlarmText = F("Werkstattbrand");
		break;
	}
	case 11801:
	{
		currentAlarmText = F("Explosion");
		break;
	}
	case 11901:
	{
		currentAlarmText = F("Fahrzeugbrand mit Gefahrgut");
		break;
	}
	case 11902:
	{
		currentAlarmText = F("Brand Gefahrguttransport");
		break;
	}
	case 12001:
	{
		currentAlarmText = F("Brand Zug");
		break;
	}
	case 12002:
	{
		currentAlarmText = F("Rauchentwicklung Zug");
		break;
	}
	case 12003:
	{
		currentAlarmText = F("Brand Lokomotive");
		break;
	}
	case 12004:
	{
		currentAlarmText = F("Rauchentwicklung Lokomotive");
		break;
	}
	case 12101:
	{
		currentAlarmText = F("Brand Straßenbahn");
		break;
	}
	case 12102:
	{
		currentAlarmText = F("Rauchentwicklung Straßenbahn");
		break;
	}
	case 20101:
	{
		currentAlarmText = F("Türöffnen");
		break;
	}
	case 20102:
	{
		currentAlarmText = F("Türöffnung ohne Dringlichkeit");
		break;
	}
	case 20103:
	{
		currentAlarmText = F("Türöffnung als Amtshilfe für Behörde");
		break;
	}
	case 20201:
	{
		currentAlarmText = F("Absicherung");
		break;
	}
	case 20202:
	{
		currentAlarmText = F("Absicherung Gefahrenstelle");
		break;
	}
	case 20203:
	{
		currentAlarmText = F("Absicherung herabfallende Teile");
		break;
	}
	case 20204:
	{
		currentAlarmText = F("Eigentumssicherung");
		break;
	}
	case 20205:
	{
		currentAlarmText = F("Türe verschließen");
		break;
	}
	case 20206:
	{
		currentAlarmText = F("Fenster verschließen");
		break;
	}
	case 20207:
	{
		currentAlarmText = F("Schaufenster verschließen");
		break;
	}
	case 20208:
	{
		currentAlarmText = F("Bergung eines Gegenstand");
		break;
	}
	case 20209:
	{
		currentAlarmText = F("Sicherung eines Gegenstand");
		break;
	}
	case 20210:
	{
		currentAlarmText = F("Sicherstellung von Gegenständen");
		break;
	}
	case 20301:
	{
		currentAlarmText = F("Insekten");
		break;
	}
	case 20302:
	{
		currentAlarmText = F("Bienen");
		break;
	}
	case 20303:
	{
		currentAlarmText = F("Wespen");
		break;
	}
	case 20304:
	{
		currentAlarmText = F("Hornissen");
		break;
	}
	case 20401:
	{
		currentAlarmText = F("Tierbergung");
		break;
	}
	case 20402:
	{
		currentAlarmText = F("Tierkadaver");
		break;
	}
	case 20403:
	{
		currentAlarmText = F("Kadaver");
		break;
	}
	case 20404:
	{
		currentAlarmText = F("totes Tier");
		break;
	}
	case 20501:
	{
		currentAlarmText = F("Tierrettung");
		break;
	}
	case 20502:
	{
		currentAlarmText = F("Tier in Notlage");
		break;
	}
	case 20503:
	{
		currentAlarmText = F("Tierhilfe");
		break;
	}
	case 20504:
	{
		currentAlarmText = F("Freilaufende Tiere und/oder Fundtiere");
		break;
	}
	case 20601:
	{
		currentAlarmText = F("Person in Aufzug ohne Dringlichkeit");
		break;
	}
	case 20701:
	{
		currentAlarmText = F("Ast auf Fahrbahn");
		break;
	}
	case 20702:
	{
		currentAlarmText = F("umgestürzter Baum");
		break;
	}
	case 20703:
	{
		currentAlarmText = F("ausgehobener Kanaldeckel");
		break;
	}
	case 20704:
	{
		currentAlarmText = F("Beseitigung Verkehrshindernis");
		break;
	}
	case 20705:
	{
		currentAlarmText = F("Beseitigung etwaige Gefährdung");
		break;
	}
	case 20801:
	{
		currentAlarmText = F("Unterstützung Rettungsdienst");
		break;
	}
	case 20802:
	{
		currentAlarmText = F("Unterstützung Personenrettung");
		break;
	}
	case 20901:
	{
		currentAlarmText = F("Wassereinbruch");
		break;
	}
	case 20902:
	{
		currentAlarmText = F("Wasser in Gebäude");
		break;
	}
	case 20903:
	{
		currentAlarmText = F("Wasserrohrbruch");
		break;
	}
	case 20904:
	{
		currentAlarmText = F("tropfendes Wasser von Decke");
		break;
	}
	case 20905:
	{
		currentAlarmText = F("Wasser aus Tür");
		break;
	}
	case 20906:
	{
		currentAlarmText = F("Wasser in Keller");
		break;
	}
	case 20907:
	{
		currentAlarmText = F("Wassereinbruch in Boot");
		break;
	}
	case 20908:
	{
		currentAlarmText = F("Pumparbeiten klein");
		break;
	}
	case 21001:
	{
		currentAlarmText = F("Türöffnen dringend");
		break;
	}
	case 21002:
	{
		currentAlarmText = F("Türöffnung hilflose Person");
		break;
	}
	case 21003:
	{
		currentAlarmText = F("Türöffnung Rettungsdienst");
		break;
	}
	case 21101:
	{
		currentAlarmText = F("Leichenbergung als Amtshilfe");
		break;
	}
	case 21201:
	{
		currentAlarmText = F("Verkehrsunfall");
		break;
	}
	case 21202:
	{
		currentAlarmText = F("VU Person eingeklemmt");
		break;
	}
	case 21203:
	{
		currentAlarmText = F("VU P Klemm");
		break;
	}
	case 21204:
	{
		currentAlarmText = F("Person eingeklemmt");
		break;
	}
	case 21205:
	{
		currentAlarmText = F("Verkehrsunfall unklar");
		break;
	}
	case 21206:
	{
		currentAlarmText = F("Notrufmeldung über eCall");
		break;
	}
	case 21301:
	{
		currentAlarmText = F("Person in Zwangslage");
		break;
	}
	case 21302:
	{
		currentAlarmText = F("Person in Spielgerüst");
		break;
	}
	case 21303:
	{
		currentAlarmText = F("Person steckt fest");
		break;
	}
	case 21304:
	{
		currentAlarmText = F("Arbeitsunfall");
		break;
	}
	case 21305:
	{
		currentAlarmText = F("Person in Aufzug mit Dringlichkeit");
		break;
	}
	case 21306:
	{
		currentAlarmText = F("Forstunfall");
		break;
	}
	case 21401:
	{
		currentAlarmText = F("Person droht zu springen");
		break;
	}
	case 21402:
	{
		currentAlarmText = F("Person droht von Bauwerk zu springen");
		break;
	}
	case 21403:
	{
		currentAlarmText = F("Springer");
		break;
	}
	case 21404:
	{
		currentAlarmText = F("Suizidabsicht");
		break;
	}
	case 21501:
	{
		currentAlarmText = F("Einsturz klein");
		break;
	}
	case 21502:
	{
		currentAlarmText = F("Deckeneinsturz");
		break;
	}
	case 21503:
	{
		currentAlarmText = F("Teileinsturz");
		break;
	}
	case 21504:
	{
		currentAlarmText = F("herabgestürzte Teile");
		break;
	}
	case 21505:
	{
		currentAlarmText = F("absturzgefährdete Teile");
		break;
	}
	case 21506:
	{
		currentAlarmText = F("Einsturzgefahr");
		break;
	}
	case 21601:
	{
		currentAlarmText = F("Größere Hilfeleistung");
		break;
	}
	case 21602:
	{
		currentAlarmText = F("Baum auf Gebäude");
		break;
	}
	case 21603:
	{
		currentAlarmText = F("Baum in Stromleitung");
		break;
	}
	case 21604:
	{
		currentAlarmText = F("Baum auf Fahrzeug");
		break;
	}
	case 21701:
	{
		currentAlarmText = F("HRF hilft Rettungsdienst");
		break;
	}
	case 21801:
	{
		currentAlarmText = F("Personenrettung aus unwegsamen Gelände");
		break;
	}
	case 21901:
	{
		currentAlarmText = F("Person unter Zug");
		break;
	}
	case 21902:
	{
		currentAlarmText = F("Person von Zug erfasst");
		break;
	}
	case 21903:
	{
		currentAlarmText = F("Person vor Zug");
		break;
	}
	case 21904:
	{
		currentAlarmText = F("Person im / am Gleis");
		break;
	}
	case 22001:
	{
		currentAlarmText = F("Person unter Straßenbahn");
		break;
	}
	case 22002:
	{
		currentAlarmText = F("Person von Straßenbahn erfasst");
		break;
	}
	case 22003:
	{
		currentAlarmText = F("Person vor Straßenbahn");
		break;
	}
	case 22004:
	{
		currentAlarmText = F("Person im / am Gleis");
		break;
	}
	case 22101:
	{
		currentAlarmText = F("Verkehrsunfall groß");
		break;
	}
	case 22102:
	{
		currentAlarmText = F("Verkehrsunfall >3 PKW");
		break;
	}
	case 22103:
	{
		currentAlarmText = F("Verkehrsunfall LKW");
		break;
	}
	case 22104:
	{
		currentAlarmText = F("Verkehrsunfall Bus");
		break;
	}
	case 22201:
	{
		currentAlarmText = F("Höhen-, Tiefenrettung");
		break;
	}
	case 22202:
	{
		currentAlarmText = F("Höhensicherung");
		break;
	}
	case 22203:
	{
		currentAlarmText = F("Person droht abzustürzen");
		break;
	}
	case 22204:
	{
		currentAlarmText = F("Person auf Gerüst");
		break;
	}
	case 22205:
	{
		currentAlarmText = F("Kletterunfall");
		break;
	}
	case 22206:
	{
		currentAlarmText = F("Gleitschirmflieger");
		break;
	}
	case 22207:
	{
		currentAlarmText = F("Paraglider");
		break;
	}
	case 22301:
	{
		currentAlarmText = F("Einsturz groß");
		break;
	}
	case 22302:
	{
		currentAlarmText = F("Gebäudeeinsturz");
		break;
	}
	case 22303:
	{
		currentAlarmText = F("Person verschüttet");
		break;
	}
	case 22401:
	{
		currentAlarmText = F("Verkehrsunfall Zug");
		break;
	}
	case 22402:
	{
		currentAlarmText = F("Zusammenstoß Zug");
		break;
	}
	case 22403:
	{
		currentAlarmText = F("Entgleisung Zug");
		break;
	}
	case 22404:
	{
		currentAlarmText = F("Kollision Zug");
		break;
	}
	case 22405:
	{
		currentAlarmText = F("Umsturz Zug");
		break;
	}
	case 22406:
	{
		currentAlarmText = F("PKW von Zug erfasst");
		break;
	}
	case 22407:
	{
		currentAlarmText = F("Fahrzeug von Zug erfasst");
		break;
	}
	case 22501:
	{
		currentAlarmText = F("Verkehrsunfall Straßenbahn");
		break;
	}
	case 22502:
	{
		currentAlarmText = F("Zusammenstoß Straßenbahnn");
		break;
	}
	case 22503:
	{
		currentAlarmText = F("Entgleisung Straßenbahn");
		break;
	}
	case 22504:
	{
		currentAlarmText = F("Kollision Straßenbahn");
		break;
	}
	case 22505:
	{
		currentAlarmText = F("Umsturz Straßenbahn");
		break;
	}
	case 30101:
	{
		currentAlarmText = F("Ölspur");
		break;
	}
	case 30102:
	{
		currentAlarmText = F("Absicherung Gefahrenstelle");
		break;
	}
	case 30201:
	{
		currentAlarmText = F("Auslaufende Betriebsstoffe PKW");
		break;
	}
	case 30301:
	{
		currentAlarmText = F("Sonstige Kleinmengen < 10 l");
		break;
	}
	case 30302:
	{
		currentAlarmText = F("Kanister");
		break;
	}
	case 30401:
	{
		currentAlarmText = F("AEP-GS Alarmstufe 1");
		break;
	}
	case 30402:
	{
		currentAlarmText = F("Gefahrstoff klein");
		break;
	}
	case 30501:
	{
		currentAlarmText = F("Auslaufende Betriebsstoffe LKW >50 l");
		break;
	}
	case 30502:
	{
		currentAlarmText = F("auslaufender Diesel");
		break;
	}
	case 30503:
	{
		currentAlarmText = F("auslaufender Tank");
		break;
	}
	case 30601:
	{
		currentAlarmText = F("AEP-GS Alarmstufe 2");
		break;
	}
	case 30602:
	{
		currentAlarmText = F("Gefahrstoff mittel");
		break;
	}
	case 30603:
	{
		currentAlarmText = F("Gefahrstoffgruppe");
		break;
	}
	case 30604:
	{
		currentAlarmText = F("Teileinheit Gefahrstoffzug");
		break;
	}
	case 30701:
	{
		currentAlarmText = F("Gasgeruch");
		break;
	}
	case 30702:
	{
		currentAlarmText = F("Erdgasgeruch");
		break;
	}
	case 30703:
	{
		currentAlarmText = F("ausgelöster CO-Warner RD");
		break;
	}
	case 30704:
	{
		currentAlarmText = F("ausgelöster CO-Melder");
		break;
	}
	case 30705:
	{
		currentAlarmText = F("Geruch chemisch unklar");
		break;
	}
	case 30801:
	{
		currentAlarmText = F("AEP-GS Alarmstufe 3");
		break;
	}
	case 30802:
	{
		currentAlarmText = F("Gefahrstoff groß");
		break;
	}
	case 30803:
	{
		currentAlarmText = F("Gefahrstoffzug");
		break;
	}
	case 30804:
	{
		currentAlarmText = F("Strahlenschutzeinsatz");
		break;
	}
	case 30901:
	{
		currentAlarmText = F("Gefahrstoffaustritt");
		break;
	}
	case 30902:
	{
		currentAlarmText = F("Gefahrstoffunfall Straße");
		break;
	}
	case 30903:
	{
		currentAlarmText = F("Tanklastzug");
		break;
	}
	case 30904:
	{
		currentAlarmText = F("Tankunfall");
		break;
	}
	case 30905:
	{
		currentAlarmText = F("Produktaustritt");
		break;
	}
	case 31001:
	{
		currentAlarmText = F("Gasausströmung");
		break;
	}
	case 31002:
	{
		currentAlarmText = F("Erdgasaustritt");
		break;
	}
	case 31003:
	{
		currentAlarmText = F("undichte Gasleitung");
		break;
	}
	case 31101:
	{
		currentAlarmText = F("Gefahrstoffaustritt Schienenfahrzeug");
		break;
	}
	case 31102:
	{
		currentAlarmText = F("Gefahrstoffaustritt Schiene");
		break;
	}
	case 31103:
	{
		currentAlarmText = F("Gefahrstoffunfall Schiene");
		break;
	}
	case 31104:
	{
		currentAlarmText = F("Gefahrgutunfall Schiene");
		break;
	}
	case 31201:
	{
		currentAlarmText = F("AEP GS Alarmstufe 4");
		break;
	}
	case 31202:
	{
		currentAlarmText = F("weiterer Gefahrstoffzug");
		break;
	}
	case 40101:
	{
		currentAlarmText = F("Hochwasser");
		break;
	}
	case 40102:
	{
		currentAlarmText = F("langsam steigender Wasserstand");
		break;
	}
	case 40201:
	{
		currentAlarmText = F("Gewässerverunreinigung");
		break;
	}
	case 40202:
	{
		currentAlarmText = F("unklare Gewässerverunreinigung");
		break;
	}
	case 40301:
	{
		currentAlarmText = F("Wasser- / Eisrettung klein");
		break;
	}
	case 40302:
	{
		currentAlarmText = F("Wasserrettung stehendes Gewässer");
		break;
	}
	case 40303:
	{
		currentAlarmText = F("Wasserrettung See");
		break;
	}
	case 40304:
	{
		currentAlarmText = F("Person droht in stehendes Gewässer zu springen");
		break;
	}
	case 40305:
	{
		currentAlarmText = F("Person in stehendem Gewässer");
		break;
	}
	case 40306:
	{
		currentAlarmText = F("Eisrettung stehendes Gewässer");
		break;
	}
	case 40307:
	{
		currentAlarmText = F("Person im Eis stehendes Gewässer");
		break;
	}
	case 40308:
	{
		currentAlarmText = F("Person eingebrochen stehendes Gewässer");
		break;
	}
	case 40309:
	{
		currentAlarmText = F("Eiseinbruch stehendes Gewässer");
		break;
	}
	case 40401:
	{
		currentAlarmText = F("Taucheinsatz");
		break;
	}
	case 40402:
	{
		currentAlarmText = F("Fahrzeug in Gewässer");
		break;
	}
	case 40501:
	{
		currentAlarmText = F("Bootsunfall");
		break;
	}
	case 40502:
	{
		currentAlarmText = F("Sportbootunfall");
		break;
	}
	case 40503:
	{
		currentAlarmText = F("gekentertes Boot");
		break;
	}
	case 40504:
	{
		currentAlarmText = F("manövrierunfähiges Boot");
		break;
	}
	case 40505:
	{
		currentAlarmText = F("Yachtunfall");
		break;
	}
	case 40506:
	{
		currentAlarmText = F("gekenterte Yacht");
		break;
	}
	case 40507:
	{
		currentAlarmText = F("manövrierunfähige Yacht");
		break;
	}
	case 40601:
	{
		currentAlarmText = F("Öl auf Gewässer");
		break;
	}
	case 40602:
	{
		currentAlarmText = F("Ölfilm");
		break;
	}
	case 40701:
	{
		currentAlarmText = F("Bootsbrand");
		break;
	}
	case 40702:
	{
		currentAlarmText = F("Yachtbrand");
		break;
	}
	case 40801:
	{
		currentAlarmText = F("Schiffsbrand");
		break;
	}
	case 40901:
	{
		currentAlarmText = F("Schiffsbrand");
		break;
	}
	case 41001:
	{
		currentAlarmText = F("Schiffshavarie");
		break;
	}
	case 41002:
	{
		currentAlarmText = F("Schiffsunfall");
		break;
	}
	case 41003:
	{
		currentAlarmText = F("Schiffskollision");
		break;
	}
	case 41004:
	{
		currentAlarmText = F("manövrierunfähiges Schiff");
		break;
	}
	case 41101:
	{
		currentAlarmText = F("Wasser- / Eisrettung groß");
		break;
	}
	case 41102:
	{
		currentAlarmText = F("Wasserrettung 3+");
		break;
	}
	case 41103:
	{
		currentAlarmText = F("Personen in Wasser 3+");
		break;
	}
	case 41104:
	{
		currentAlarmText = F("Wasserrettung in fließendem Gewässer");
		break;
	}
	case 41105:
	{
		currentAlarmText = F("Person droht in fließendes Gewässer zu springen");
		break;
	}
	case 41106:
	{
		currentAlarmText = F("Person in fließendem Gewässer");
		break;
	}
	case 41107:
	{
		currentAlarmText = F("Person im Eis fließendes Gewässer");
		break;
	}
	case 41108:
	{
		currentAlarmText = F("Person eingebrochen fließendes Gewässer");
		break;
	}
	case 41109:
	{
		currentAlarmText = F("Eiseinbruch fließendes Gewässer");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}
	case 70101:
	{
		currentAlarmText = F("Einsatz nach Rücksprache");
		break;
	}
	case 70102:
	{
		currentAlarmText = F("Amtshilfe");
		break;
	}
	case 70103:
	{
		currentAlarmText = F("Anforderungen");
		break;
	}
	case 70104:
	{
		currentAlarmText = F("Einsatz Messleitkomponente");
		break;
	}
	case 70105:
	{
		currentAlarmText = F("Wachbesetzung");
		break;
	}
	case 70106:
	{
		currentAlarmText = F("Besetzung Feuerwehrhaus");
		break;
	}
	case 70301:
	{
		currentAlarmText = F("Bombenfund");
		break;
	}
	case 70302:
	{
		currentAlarmText = F("Bombe (Bombe aus den Weltkriegen)");
		break;
	}
	case 70501:
	{
		currentAlarmText = F("Personensuche");
		break;
	}
	case 70502:
	{
		currentAlarmText = F("vermisste Person");
		break;
	}
	case 70601:
	{
		currentAlarmText = F("PSNV");
		break;
	}
	case 70602:
	{
		currentAlarmText = F("Notfallseelsorge");
		break;
	}
	case 70701:
	{
		currentAlarmText = F("Stromausfall");
		break;
	}
	case 70901:
	{
		currentAlarmText = F("");
		break;
	}
	case 71101:
	{
		currentAlarmText = F("Schwerlasttransport");
		break;
	}
	case 71102:
	{
		currentAlarmText = F("Transport adipöser Personen");
		break;
	}
	case 71103:
	{
		currentAlarmText = F("Adipösentransport");
		break;
	}
	case 71401:
	{
		currentAlarmText = F("Hubschrauberlandung");
		break;
	}
	case 71402:
	{
		currentAlarmText = F("Landung Rettungshubschrauber");
		break;
	}
	case 71403:
	{
		currentAlarmText = F("Ausleuchtung Landeplatz");
		break;
	}
	case 71501:
	{
		currentAlarmText = F("Zubringerdienst");
		break;
	}
	case 71601:
	{
		currentAlarmText = F("Kommunikationsausfall");
		break;
	}
	case 71602:
	{
		currentAlarmText = F("Ausfall Telekommunikationsnetze");
		break;
	}
	case 71603:
	{
		currentAlarmText = F("Ausfall Alarmierungsnetze");
		break;
	}
	case 71701:
	{
		currentAlarmText = F("Sonstige Gefahrenmeldung");
		break;
	}
	case 71801:
	{
		currentAlarmText = F("D1-Meldung nach Störfallverordnung");
		break;
	}
	case 71901:
	{
		currentAlarmText = F("Flugzeugunfall klein");
		break;
	}
	case 71902:
	{
		currentAlarmText = F("Ultraleichtflieger");
		break;
	}
	case 71903:
	{
		currentAlarmText = F("Kleinflugzeug");
		break;
	}
	case 71904:
	{
		currentAlarmText = F("Notwasserung Kleinfluggerät");
		break;
	}
	case 72001:
	{
		currentAlarmText = F("Unwetter");
		break;
	}
	case 72002:
	{
		currentAlarmText = F("Hochwasser");
		break;
	}
	case 72003:
	{
		currentAlarmText = F("Sturm");
		break;
	}
	case 72101:
	{
		currentAlarmText = F("D2-Meldung nach Störfallverordnung");
		break;
	}
	case 72201:
	{
		currentAlarmText = F("D3-Meldung nach Störfallverordnung");
		break;
	}
	case 72301:
	{
		currentAlarmText = F("Flugzeugunfall groß");
		break;
	}
	case 72302:
	{
		currentAlarmText = F("Flugzeug auf Gebäude");
		break;
	}
	case 72303:
	{
		currentAlarmText = F("Personenflugzeug Unfall");
		break;
	}
	case 72401:
	{
		currentAlarmText = F("AEP Kernkraftwerk");
		break;
	}
	case 72402:
	{
		currentAlarmText = F("Kernkraftwerk");
		break;
	}
	case 72403:
	{
		currentAlarmText = F("Atomunfall");
		break;
	}
	case 72501:
	{
		currentAlarmText = F("Gefahrenlage polizeilicher Einsatz");
		break;
	}
	case 72502:
	{
		currentAlarmText = F("Amok");
		break;
	}
	case 72503:
	{
		currentAlarmText = F("Geiselnahme");
		break;
	}
	case 72504:
	{
		currentAlarmText = F("sonstige Gefahrenlage durch polizeilichen Einsatz");
		break;
	}
	case 72505:
	{
		currentAlarmText = F("LebEL");
		break;
	}
	case 72601:
	{
		currentAlarmText = F("LebEL Extern St.1 B-Raum");
		break;
	}
	case 72701:
	{
		currentAlarmText = F("LebEL Extern St.2 Bereitschaft");
		break;
	}
	case 72801:
	{
		currentAlarmText = F("Überörtliche Hilfe größeren Umfanges");
		break;
	}
	case 72901:
	{
		currentAlarmText = F("D4-Meldung nach Störfallverordnung");
		break;
	}
	case 80101:
	{
		currentAlarmText = F("Lose Objekte ohne Dringlichkeit");
		break;
	}
	case 80201:
	{
		currentAlarmText = F("Abgebrochener Ast ohne Dringlichkeit");
		break;
	}
	case 80202:
	{
		currentAlarmText = F("Ast im Garten");
		break;
	}
	case 80203:
	{
		currentAlarmText = F("Ast neben der Fahrbahn");
		break;
	}
	case 80204:
	{
		currentAlarmText = F("Ast auf Waldweg");
		break;
	}
	case 80301:
	{
		currentAlarmText = F("Wasser in Gebäude klein");
		break;
	}
	case 80302:
	{
		currentAlarmText = F("Wasser in Gebäude < 10 cm");
		break;
	}
	case 80401:
	{
		currentAlarmText = F("Umgestürzter Baum ohne Dringlichkeit");
		break;
	}
	case 80402:
	{
		currentAlarmText = F("Baum in Garten");
		break;
	}
	case 80403:
	{
		currentAlarmText = F("Baum auf Waldweg");
		break;
	}
	case 80404:
	{
		currentAlarmText = F("Baum auf Nebenstraße");
		break;
	}
	case 80501:
	{
		currentAlarmText = F("Übergetretener Bach");
		break;
	}
	case 80502:
	{
		currentAlarmText = F("Bach überflutet Fahrbahn");
		break;
	}
	case 80503:
	{
		currentAlarmText = F("Bach überflutet Grundstück");
		break;
	}
	case 80601:
	{
		currentAlarmText = F("Wasser in Gebäude");
		break;
	}
	case 80602:
	{
		currentAlarmText = F("Wasser in Gebäude > 10 cm, < 50 cm");
		break;
	}
	case 80701:
	{
		currentAlarmText = F("Lose Objekte mit Dringlichkeit");
		break;
	}
	case 80702:
	{
		currentAlarmText = F("Baugerüst");
		break;
	}
	case 80703:
	{
		currentAlarmText = F("Werbetafel");
		break;
	}
	case 80704:
	{
		currentAlarmText = F("einzelne Dachpfannen");
		break;
	}
	case 80705:
	{
		currentAlarmText = F("Fassadenelemente");
		break;
	}
	case 80801:
	{
		currentAlarmText = F("Abgebrochener Ast mit Dringlichkeit");
		break;
	}
	case 80802:
	{
		currentAlarmText = F("Ast auf Fahrzeug");
		break;
	}
	case 80803:
	{
		currentAlarmText = F("Ast auf Haus");
		break;
	}
	case 80804:
	{
		currentAlarmText = F("Ast auf Dach");
		break;
	}
	case 80805:
	{
		currentAlarmText = F("Ast auf Stromleitung");
		break;
	}
	case 80901:
	{
		currentAlarmText = F("Wasser in Gebäude");
		break;
	}
	case 80902:
	{
		currentAlarmText = F("Wasser in Gebäude > 50 cm");
		break;
	}
	case 81001:
	{
		currentAlarmText = F("Überflutete Fahrbahn");
		break;
	}
	case 81002:
	{
		currentAlarmText = F("Wasser auf Fahrbahn");
		break;
	}
	case 81003:
	{
		currentAlarmText = F("Fahrbahnüberflutung");
		break;
	}
	case 81101:
	{
		currentAlarmText = F("Umgestürzter Baum mit Dringlichkeit");
		break;
	}
	case 81102:
	{
		currentAlarmText = F("Baum auf Fahrbahn");
		break;
	}
	case 81103:
	{
		currentAlarmText = F("Baum auf Stromleitung");
		break;
	}
	case 81104:
	{
		currentAlarmText = F("Baum auf Haus");
		break;
	}
	case 81105:
	{
		currentAlarmText = F("Baum auf Dach");
		break;
	}
	case 81106:
	{
		currentAlarmText = F("Baum auf Fahrzeug");
		break;
	}
	case 81107:
	{
		currentAlarmText = F("eingeschlossenes Fahrzeug");
		break;
	}
	case 81108:
	{
		currentAlarmText = F("abgeschnittene Ortszufahrt");
		break;
	}
	case 81201:
	{
		currentAlarmText = F("Abgedecktes Dach");
		break;
	}
	case 81301:
	{
		currentAlarmText = F("Hangrutsch");
		break;
	}
	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_SL(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_SN(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_ST(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 101:
	{
		currentAlarmText = F("F 1");
		break;
	}
	case 102:
	{
		currentAlarmText = F("F 2");
		break;
	}
	case 103:
	{
		currentAlarmText = F("F 2 Y");
		break;
	}
	case 104:
	{
		currentAlarmText = F("F 3");
		break;
	}
	case 105:
	{
		currentAlarmText = F("F 3 Y");
		break;
	}
	case 106:
	{
		currentAlarmText = F("F 4");
		break;
	}
	case 107:
	{
		currentAlarmText = F("F BMA");
		break;
	}
	case 108:
	{
		currentAlarmText = F("F BUS Y");
		break;
	}
	case 109:
	{
		currentAlarmText = F("F FLUG 1 Y");
		break;
	}
	case 110:
	{
		currentAlarmText = F("F FLUG 2 Y");
		break;
	}
	case 111:
	{
		currentAlarmText = F("F GAS 1");
		break;
	}
	case 112:
	{
		currentAlarmText = F("F GAS 2");
		break;
	}
	case 113:
	{
		currentAlarmText = F("F LKW");
		break;
	}
	case 114:
	{
		currentAlarmText = F("F ZUG");
		break;
	}
	case 115:
	{
		currentAlarmText = F("F ZUG Y");
		break;
	}
	case 116:
	{
		currentAlarmText = F("F RWM");
		break;
	}
	case 117:
	{
		currentAlarmText = F("F SCHIFF 1");
		break;
	}
	case 118:
	{
		currentAlarmText = F("F SCHIFF 2");
		break;
	}
	case 119:
	{
		currentAlarmText = F("F SCHIFF 2 Y");
		break;
	}
	case 120:
	{
		currentAlarmText = F("F SCHIFF 2 GEFAHR");
		break;
	}
	case 121:
	{
		currentAlarmText = F("F WALD 1");
		break;
	}
	case 122:
	{
		currentAlarmText = F("F WALD 2");
		break;
	}
	case 201:
	{
		currentAlarmText = F("H 1");
		break;
	}
	case 202:
	{
		currentAlarmText = F("H 1 Y");
		break;
	}
	case 203:
	{
		currentAlarmText = F("H 2");
		break;
	}
	case 204:
	{
		currentAlarmText = F("H ABST Y");
		break;
	}
	case 205:
	{
		currentAlarmText = F("H ELEK");
		break;
	}
	case 206:
	{
		currentAlarmText = F("H EINST Y");
		break;
	}
	case 207:
	{
		currentAlarmText = F("H FLUSS");
		break;
	}
	case 208:
	{
		currentAlarmText = F("H FLUSS Y");
		break;
	}
	case 209:
	{
		currentAlarmText = F("H WASS Y");
		break;
	}
	case 210:
	{
		currentAlarmText = F("H GAS 1");
		break;
	}
	case 211:
	{
		currentAlarmText = F("H GAS 2");
		break;
	}
	case 212:
	{
		currentAlarmText = F("H GEFAHR 1");
		break;
	}
	case 213:
	{
		currentAlarmText = F("H GEFAHR 2");
		break;
	}
	case 214:
	{
		currentAlarmText = F("H KLEMM 1 Y");
		break;
	}
	case 215:
	{
		currentAlarmText = F("H KLEMM 2 Y");
		break;
	}
	case 216:
	{
		currentAlarmText = F("H ÖL FLUSS");
		break;
	}
	case 217:
	{
		currentAlarmText = F("H ÖL WASS");
		break;
	}
	case 218:
	{
		currentAlarmText = F("H RADIOAKTIV");
		break;
	}
	case 219:
	{
		currentAlarmText = F("H SCHIFF");
		break;
	}
	case 220:
	{
		currentAlarmText = F("H SCHIFF Y");
		break;
	}
	case 221:
	{
		currentAlarmText = F("H ZUG 1 Y");
		break;
	}
	case 222:
	{
		currentAlarmText = F("H ZUG 2 Y");
		break;
	}
	case 301:
	{
		currentAlarmText = F("U UNWETTER STURM");
		break;
	}
	case 302:
	{
		currentAlarmText = F("U UNWETTER WASSER");
		break;
	}
	case 401:
	{
		currentAlarmText = F("K");
		break;
	}
	case 402:
	{
		currentAlarmText = F("R 0 K");
		break;
	}
	case 403:
	{
		currentAlarmText = F("R 0");
		break;
	}
	case 404:
	{
		currentAlarmText = F("R 1");
		break;
	}
	case 405:
	{
		currentAlarmText = F("R 2");
		break;
	}
	case 406:
	{
		currentAlarmText = F("R 3");
		break;
	}
	case 407:
	{
		currentAlarmText = F("R LEBEL");
		break;
	}
	case 408:
	{
		currentAlarmText = F("R MANV");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_SH(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 1001:
	{
		currentAlarmText = F("Feuer, gelöscht");
		break;
	}
	case 1002:
	{
		currentAlarmText = F("Feuer, kleiner als Standard");
		break;
	}
	case 1003:
	{
		currentAlarmText = F("Feuer");
		break;
	}
	case 1004:
	{
		currentAlarmText = F("Feuer, 2 Löschzüge");
		break;
	}
	case 1005:
	{
		currentAlarmText = F("Feuer, 3 Löschzüge");
		break;
	}
	case 1006:
	{
		currentAlarmText = F("Feuer, 4 Löschzüge");
		break;
	}
	case 1007:
	{
		currentAlarmText = F("Feuer, 5 Löschzüge");
		break;
	}
	case 1008:
	{
		currentAlarmText = F("Feuer, 6 Löschzüge");
		break;
	}
	case 1009:
	{
		currentAlarmText = F("Feuer, 7 Löschzüge");
		break;
	}
	case 1010:
	{
		currentAlarmText = F("Feuer, Menschenleben in Gefahr");
		break;
	}
	case 1011:
	{
		currentAlarmText = F("Feuer, Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 1012:
	{
		currentAlarmText = F("Feuer, Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 1013:
	{
		currentAlarmText = F("Feuer, Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 1014:
	{
		currentAlarmText = F("Feuer, Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 1015:
	{
		currentAlarmText = F("Feuer, Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 1016:
	{
		currentAlarmText = F("Feuer, Gefährdung durch Gefahrstoffe (CBRN)");
		break;
	}
	case 1017:
	{
		currentAlarmText = F("Feuer, Gefährdung durch Gefahrstoffe (CBRN), Menschenleben in Gefahr");
		break;
	}
	case 1018:
	{
		currentAlarmText = F("Feuer, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 1019:
	{
		currentAlarmText = F("Feuer, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 1020:
	{
		currentAlarmText = F("Feuer, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 1021:
	{
		currentAlarmText = F("Feuer, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 1022:
	{
		currentAlarmText = F("Feuer, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 1023:
	{
		currentAlarmText = F("Feuer größer als Standard");
		break;
	}
	case 1024:
	{
		currentAlarmText = F("Feuer größer als Standard, Menschenleben in Gefahr");
		break;
	}
	case 1025:
	{
		currentAlarmText = F("Feuer größer als Standard, Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 1026:
	{
		currentAlarmText = F("Feuer größer als Standard, Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 1027:
	{
		currentAlarmText = F("Feuer größer als Standard, Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 1028:
	{
		currentAlarmText = F("Feuer größer als Standard, Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 1029:
	{
		currentAlarmText = F("Feuer größer als Standard, Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 1030:
	{
		currentAlarmText = F("Feuer größer als Standard, Gefährdung durch Gefahrstoffe (CBRN)");
		break;
	}
	case 1031:
	{
		currentAlarmText = F("Feuer größer als Standard, Gefährdung durch Gefahrstoffe (CBRN), Menschenleben in Gefahr");
		break;
	}
	case 1032:
	{
		currentAlarmText = F("Feuer größer als Standard, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 1033:
	{
		currentAlarmText = F("Feuer größer als Standard, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 1034:
	{
		currentAlarmText = F("Feuer größer als Standard, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 1035:
	{
		currentAlarmText = F("Feuer größer als Standard, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 1036:
	{
		currentAlarmText = F("Feuer größer als Standard, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 1037:
	{
		currentAlarmText = F("Feuer, kleiner als Standard im Bahnbereich");
		break;
	}
	case 1038:
	{
		currentAlarmText = F("Feuer im Bahnbereich");
		break;
	}
	case 1039:
	{
		currentAlarmText = F("Feuer im Bahnbereich, Menschenleben in Gefahr");
		break;
	}
	case 1040:
	{
		currentAlarmText = F("Feuer im Bahnbereich, Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 1041:
	{
		currentAlarmText = F("Feuer im Bahnbereich, Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 1042:
	{
		currentAlarmText = F("Feuer im Bahnbereich, Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 1043:
	{
		currentAlarmText = F("Feuer im Bahnbereich, Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 1044:
	{
		currentAlarmText = F("Feuer im Bahnbereich, Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 1045:
	{
		currentAlarmText = F("Feuer im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN)");
		break;
	}
	case 1046:
	{
		currentAlarmText = F("Feuer im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Menschenleben in Gefahr");
		break;
	}
	case 1047:
	{
		currentAlarmText = F("Feuer im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 1048:
	{
		currentAlarmText = F("Feuer im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 1049:
	{
		currentAlarmText = F("Feuer im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 1050:
	{
		currentAlarmText = F("Feuer im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 1051:
	{
		currentAlarmText = F("Feuer im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 1052:
	{
		currentAlarmText = F("Feuer, größer als Standard im Bahnbereich");
		break;
	}
	case 1053:
	{
		currentAlarmText = F("Feuer, größer als Standard im Bahnbereich, Menschenleben in Gefahr");
		break;
	}
	case 1054:
	{
		currentAlarmText = F("Feuer, größer als Standard im Bahnbereich, Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 1055:
	{
		currentAlarmText = F("Feuer, größer als Standard im Bahnbereich, Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 1056:
	{
		currentAlarmText = F("Feuer, größer als Standard im Bahnbereich, Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 1057:
	{
		currentAlarmText = F("Feuer, größer als Standard im Bahnbereich, Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 1058:
	{
		currentAlarmText = F("Feuer, größer als Standard im Bahnbereich, Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 1059:
	{
		currentAlarmText = F("Feuer, größer als Standard im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN)");
		break;
	}
	case 1060:
	{
		currentAlarmText = F("Feuer, größer als Standard im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Menschenleben in Gefahr");
		break;
	}
	case 1061:
	{
		currentAlarmText = F("Feuer, größer als Standard im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 1062:
	{
		currentAlarmText = F("Feuer, größer als Standard im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 1063:
	{
		currentAlarmText = F("Feuer, größer als Standard im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 1064:
	{
		currentAlarmText = F("Feuer, größer als Standard im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 1065:
	{
		currentAlarmText = F("Feuer, größer als Standard im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 1066:
	{
		currentAlarmText = F("Feuer, Meldung über eine Brandmeldeanlage (reduziertes Aufgebot)");
		break;
	}
	case 1067:
	{
		currentAlarmText = F("Feuer, Meldung über eine Brandmeldeanlage");
		break;
	}
	case 1068:
	{
		currentAlarmText = F("Feuer, Auslösung eines Rauchwarnmelders (reduziertes Aufgebot)");
		break;
	}
	case 1069:
	{
		currentAlarmText = F("Feuer auf einem Boot");
		break;
	}
	case 1070:
	{
		currentAlarmText = F("Feuer auf einem Boot, Menschenleben in Gefahr");
		break;
	}
	case 1071:
	{
		currentAlarmText = F("Feuer auf einem Boot, Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 1072:
	{
		currentAlarmText = F("Feuer auf einem Boot, Gefährdung durch Gefahrstoffe (CBRN)");
		break;
	}
	case 1073:
	{
		currentAlarmText = F("Feuer auf einem Boot, Gefährdung durch Gefahrstoffe (CBRN), Menschenleben in Gefahr");
		break;
	}
	case 1074:
	{
		currentAlarmText = F("Feuer auf einem Boot, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 1075:
	{
		currentAlarmText = F("Feuer auf einem Schiff");
		break;
	}
	case 1076:
	{
		currentAlarmText = F("Feuer auf einem Schiff, Menschenleben in Gefahr");
		break;
	}
	case 1077:
	{
		currentAlarmText = F("Feuer auf einem Schiff, Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 1078:
	{
		currentAlarmText = F("Feuer auf einem Schiff, Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 1079:
	{
		currentAlarmText = F("Feuer auf einem Schiff, Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 1080:
	{
		currentAlarmText = F("Feuer auf einem Schiff, Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 1081:
	{
		currentAlarmText = F("Feuer auf einem Schiff, Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 1082:
	{
		currentAlarmText = F("Feuer auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN)");
		break;
	}
	case 1083:
	{
		currentAlarmText = F("Feuer auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Menschenleben in Gefahr");
		break;
	}
	case 1084:
	{
		currentAlarmText = F("Feuer auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 1085:
	{
		currentAlarmText = F("Feuer auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 1086:
	{
		currentAlarmText = F("Feuer auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 1087:
	{
		currentAlarmText = F("Feuer auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 1088:
	{
		currentAlarmText = F("Feuer auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 1089:
	{
		currentAlarmText = F("Feuer größer als Standard auf einem Schiff");
		break;
	}
	case 1090:
	{
		currentAlarmText = F("Feuer größer als Standard auf einem Schiff, Menschenleben in Gefahr");
		break;
	}
	case 1091:
	{
		currentAlarmText = F("Feuer größer als Standard auf einem Schiff, Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 1092:
	{
		currentAlarmText = F("Feuer größer als Standard auf einem Schiff, Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 1093:
	{
		currentAlarmText = F("Feuer größer als Standard auf einem Schiff, Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 1094:
	{
		currentAlarmText = F("Feuer größer als Standard auf einem Schiff, Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 1095:
	{
		currentAlarmText = F("Feuer größer als Standard auf einem Schiff, Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 1096:
	{
		currentAlarmText = F("Feuer größer als Standard auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN)");
		break;
	}
	case 1097:
	{
		currentAlarmText = F("Feuer größer als Standard auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Menschenleben in Gefahr");
		break;
	}
	case 1098:
	{
		currentAlarmText = F("Feuer größer als Standard auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 1099:
	{
		currentAlarmText = F("Feuer größer als Standard auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 1100:
	{
		currentAlarmText = F("Feuer größer als Standard auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 1101:
	{
		currentAlarmText = F("Feuer größer als Standard auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 1102:
	{
		currentAlarmText = F("Feuer größer als Standard auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 1103:
	{
		currentAlarmText = F("Feuer in einem Wald, kleiner Standard");
		break;
	}
	case 1104:
	{
		currentAlarmText = F("Feuer in einem Wald");
		break;
	}
	case 1105:
	{
		currentAlarmText = F("Feuer in einem Wald, größer Standard");
		break;
	}
	case 2001:
	{
		currentAlarmText = F("Technische Hilfeleistung, kleiner als Standard");
		break;
	}
	case 2002:
	{
		currentAlarmText = F("Technische Hilfeleistung, kleiner als Standard, Menschenleben in Gefahr");
		break;
	}
	case 2003:
	{
		currentAlarmText = F("Technische Hilfeleistung, kleiner als Standard, Gefährdung durch Gefahrstoffe (CBRN)");
		break;
	}
	case 2004:
	{
		currentAlarmText = F("Technische Hilfeleistung, kleiner als Standard, Gefährdung durch Gefahrstoffe (CBRN), Menschenleben in Gefahr");
		break;
	}
	case 2005:
	{
		currentAlarmText = F("Technische Hilfeleistung");
		break;
	}
	case 2006:
	{
		currentAlarmText = F("Technische Hilfeleistung, 2 Rüstzüge");
		break;
	}
	case 2007:
	{
		currentAlarmText = F("Technische Hilfeleistung, 3 Rüstzüge");
		break;
	}
	case 2008:
	{
		currentAlarmText = F("Technische Hilfeleistung, 4 Rüstzüge");
		break;
	}
	case 2009:
	{
		currentAlarmText = F("Technische Hilfeleistung, 5 Rüstzüge");
		break;
	}
	case 2010:
	{
		currentAlarmText = F("Technische Hilfeleistung, Menschenleben in Gefahr");
		break;
	}
	case 2011:
	{
		currentAlarmText = F("Technische Hilfeleistung, Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 2012:
	{
		currentAlarmText = F("Technische Hilfeleistung, Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 2013:
	{
		currentAlarmText = F("Technische Hilfeleistung, Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 2014:
	{
		currentAlarmText = F("Technische Hilfeleistung, Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 2015:
	{
		currentAlarmText = F("Technische Hilfeleistung, Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 2016:
	{
		currentAlarmText = F("Technische Hilfeleistung, Gefährdung durch Gefahrstoffe (CBRN)");
		break;
	}
	case 2017:
	{
		currentAlarmText = F("Technische Hilfeleistung, Gefährdung durch Gefahrstoffe (CBRN), Menschenleben in Gefahr");
		break;
	}
	case 2018:
	{
		currentAlarmText = F("Technische Hilfeleistung, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 2019:
	{
		currentAlarmText = F("Technische Hilfeleistung, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 2020:
	{
		currentAlarmText = F("Technische Hilfeleistung, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 2021:
	{
		currentAlarmText = F("Technische Hilfeleistung, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 2022:
	{
		currentAlarmText = F("Technische Hilfeleistung, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 2023:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard");
		break;
	}
	case 2024:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard, Menschenleben in Gefahr");
		break;
	}
	case 2025:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard, Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 2026:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard, Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 2027:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard, Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 2028:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard, Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 2029:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard, Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 2030:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard, Gefährdung durch Gefahrstoffe (CBRN)");
		break;
	}
	case 2031:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard, Gefährdung durch Gefahrstoffe (CBRN), Menschenleben in Gefahr");
		break;
	}
	case 2032:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 2033:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 2034:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 2035:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 2036:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 2037:
	{
		currentAlarmText = F("Technische Hilfeleistung im Bahnbereich kleiner als Standard");
		break;
	}
	case 2038:
	{
		currentAlarmText = F("Technische Hilfeleistung im Bahnbereich");
		break;
	}
	case 2039:
	{
		currentAlarmText = F("Technische Hilfeleistung im Bahnbereich, Menschenleben in Gefahr");
		break;
	}
	case 2040:
	{
		currentAlarmText = F("Technische Hilfeleistung im Bahnbereich, Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 2041:
	{
		currentAlarmText = F("Technische Hilfeleistung im Bahnbereich, Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 2042:
	{
		currentAlarmText = F("Technische Hilfeleistung im Bahnbereich, Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 2043:
	{
		currentAlarmText = F("Technische Hilfeleistung im Bahnbereich, Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 2044:
	{
		currentAlarmText = F("Technische Hilfeleistung im Bahnbereich, Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 2045:
	{
		currentAlarmText = F("Technische Hilfeleistung im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN)");
		break;
	}
	case 2046:
	{
		currentAlarmText = F("Technische Hilfeleistung im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Menschenleben in Gefahr");
		break;
	}
	case 2047:
	{
		currentAlarmText = F("Technische Hilfeleistung im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 2048:
	{
		currentAlarmText = F("Technische Hilfeleistung im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 2049:
	{
		currentAlarmText = F("Technische Hilfeleistung im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 2050:
	{
		currentAlarmText = F("Technische Hilfeleistung im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 2051:
	{
		currentAlarmText = F("Technische Hilfeleistung im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 2052:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard im Bahnbereich");
		break;
	}
	case 2053:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard im Bahnbereich, Menschenleben in Gefahr");
		break;
	}
	case 2054:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard im Bahnbereich, Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 2055:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard im Bahnbereich, Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 2056:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard im Bahnbereich, Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 2057:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard im Bahnbereich, Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 2058:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard im Bahnbereich, Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 2059:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN)");
		break;
	}
	case 2060:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Menschenleben in Gefahr");
		break;
	}
	case 2061:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 2062:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 2063:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 2064:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 2065:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard im Bahnbereich, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 2066:
	{
		currentAlarmText = F("Technische Hilfeleistung an einem Luftfahrzeug (< 7 to Startmasse)");
		break;
	}
	case 2067:
	{
		currentAlarmText = F("Technische Hilfeleistung an einem Luftfahrzeug (< 7 to Startmasse), Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 2068:
	{
		currentAlarmText = F("Technische Hilfeleistung an einem Luftfahrzeug (> 7 to Startmasse)");
		break;
	}
	case 2069:
	{
		currentAlarmText = F("Technische Hilfeleistung an einem Luftfahrzeug (> 7 to Startmasse), Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 2070:
	{
		currentAlarmText = F("Technische Hilfeleistung an einem Luftfahrzeug (> 7 to Startmasse), Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 2071:
	{
		currentAlarmText = F("Technische Hilfeleistung an einem Luftfahrzeug (> 7 to Startmasse), Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 2072:
	{
		currentAlarmText = F("Technische Hilfeleistung an einem Luftfahrzeug (> 7 to Startmasse), Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 2073:
	{
		currentAlarmText = F("Technische Hilfeleistung an einem Luftfahrzeug (> 7 to Startmasse), Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 2074:
	{
		currentAlarmText = F("Technischer Hilfeleistung kleiner als Standard auf einem Boot");
		break;
	}
	case 2075:
	{
		currentAlarmText = F("Technischer Hilfeleistung kleiner als Standard auf einem Boot, Menschenleben in Gefahr");
		break;
	}
	case 2076:
	{
		currentAlarmText = F("Technischer Hilfeleistung kleiner als Standard auf einem Boot, Großeinsatz Rettungsstufe 0");
		break;
	}
	case 2077:
	{
		currentAlarmText = F("Technischer Hilfeleistung kleiner als Standard auf einem Boot, Gefährdung durch Gefahrstoffe (CBRN)");
		break;
	}
	case 2078:
	{
		currentAlarmText = F("Technischer Hilfeleistung kleiner als Standard auf einem Boot, Gefährdung durch Gefahrstoffe (CBRN), Menschenleben in Gefahr");
		break;
	}
	case 2079:
	{
		currentAlarmText = F("Technischer Hilfeleistung kleiner als Standard auf einem Boot, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsstufe 0");
		break;
	}
	case 2080:
	{
		currentAlarmText = F("Technische Hilfeleistung auf einem Schiff");
		break;
	}
	case 2081:
	{
		currentAlarmText = F("Technische Hilfeleistung auf einem Schiff, Menschenleben in Gefahr");
		break;
	}
	case 2082:
	{
		currentAlarmText = F("Technische Hilfeleistung auf einem Schiff, Großeinsatz Rettungsstufe 0");
		break;
	}
	case 2083:
	{
		currentAlarmText = F("Technische Hilfeleistung auf einem Schiff, Großeinsatz Rettungsstufe 1");
		break;
	}
	case 2084:
	{
		currentAlarmText = F("Technische Hilfeleistung auf einem Schiff, Großeinsatz Rettungsstufe 2");
		break;
	}
	case 2085:
	{
		currentAlarmText = F("Technische Hilfeleistung auf einem Schiff, Großeinsatz Rettungsstufe 3");
		break;
	}
	case 2086:
	{
		currentAlarmText = F("Technische Hilfeleistung auf einem Schiff, Großeinsatz Rettungsstufe 4");
		break;
	}
	case 2087:
	{
		currentAlarmText = F("Technische Hilfeleistung auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN)");
		break;
	}
	case 2088:
	{
		currentAlarmText = F("Technische Hilfeleistung auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Menschenleben in Gefahr");
		break;
	}
	case 2089:
	{
		currentAlarmText = F("Technische Hilfeleistung auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsstufe 0");
		break;
	}
	case 2090:
	{
		currentAlarmText = F("Technische Hilfeleistung auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsstufe 1");
		break;
	}
	case 2091:
	{
		currentAlarmText = F("Technische Hilfeleistung auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsstufe 2");
		break;
	}
	case 2092:
	{
		currentAlarmText = F("Technische Hilfeleistung auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsstufe 3");
		break;
	}
	case 2093:
	{
		currentAlarmText = F("Technische Hilfeleistung auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsstufe 4");
		break;
	}
	case 2094:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard auf einem Schiff");
		break;
	}
	case 2095:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard auf einem Schiff, Menschenleben in Gefahr");
		break;
	}
	case 2096:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard auf einem Schiff, Großeinsatz Rettungsstufe 0");
		break;
	}
	case 2097:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard auf einem Schiff, Großeinsatz Rettungsstufe 1");
		break;
	}
	case 2098:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard auf einem Schiff, Großeinsatz Rettungsstufe 2");
		break;
	}
	case 2099:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard auf einem Schiff, Großeinsatz Rettungsstufe 3");
		break;
	}
	case 2100:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard auf einem Schiff, Großeinsatz Rettungsstufe 4");
		break;
	}
	case 2101:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN)");
		break;
	}
	case 2102:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Menschenleben in Gefahr");
		break;
	}
	case 2103:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsstufe 0");
		break;
	}
	case 2104:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsstufe 1");
		break;
	}
	case 2105:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsstufe 2");
		break;
	}
	case 2106:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsstufe 3");
		break;
	}
	case 2107:
	{
		currentAlarmText = F("Technische Hilfeleistung größer als Standard auf einem Schiff, Gefährdung durch Gefahrstoffe (CBRN), Großeinsatz Rettungsstufe 4");
		break;
	}
	case 2108:
	{
		currentAlarmText = F("Technische Hilfeleistung auf dem Wasser, kleiner Standard");
		break;
	}
	case 2109:
	{
		currentAlarmText = F("Technische Hilfeleistung auf dem Wasser");
		break;
	}
	case 2110:
	{
		currentAlarmText = F("Technische Hilfeleistung auf dem Wasser, Menschenleben in Gefahr");
		break;
	}
	case 2111:
	{
		currentAlarmText = F("Technische Hilfeleistung auf dem Wasser, Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 2112:
	{
		currentAlarmText = F("Technische Hilfeleistung auf dem Wasser, Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 2113:
	{
		currentAlarmText = F("Technische Hilfeleistung auf dem Wasser, Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 2114:
	{
		currentAlarmText = F("Technische Hilfeleistung auf dem Wasser, Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 2115:
	{
		currentAlarmText = F("Technische Hilfeleistung auf dem Wasser, Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 2116:
	{
		currentAlarmText = F("Technische Hilfeleistung, Austritt von Betriebsstoffen, kleiner als Standard");
		break;
	}
	case 2117:
	{
		currentAlarmText = F("Technische Hilfeleistung, Austritt von Betriebsstoffen im Bahnbereich, kleiner als Standard");
		break;
	}
	case 2118:
	{
		currentAlarmText = F("Technische Hilfeleistung, Austritt von Betriebsstoffen auf dem Wasser, kleiner als Standard");
		break;
	}
	case 2119:
	{
		currentAlarmText = F("Technische Hilfeleistung, Austritt von Betriebsstoffen");
		break;
	}
	case 2120:
	{
		currentAlarmText = F("Technische Hilfeleistung, Austritt von Betriebsstoffen im Bahnbereich");
		break;
	}
	case 2121:
	{
		currentAlarmText = F("Technische Hilfeleistung, Austritt von Betriebsstoffen auf dem Wasser");
		break;
	}
	case 2122:
	{
		currentAlarmText = F("Technische Hilfeleistung, Austritt von Betriebsstoffen, größer als Standard");
		break;
	}
	case 2123:
	{
		currentAlarmText = F("Technische Hilfeleistung, Austritt von Betriebsstoffen im Bahnbereich, größer als Standard");
		break;
	}
	case 2124:
	{
		currentAlarmText = F("Technische Hilfeleistung, Austritt von Betriebsstoffen auf dem Wasser, größer als Standard");
		break;
	}
	case 2125:
	{
		currentAlarmText = F("Technische Hilfeleistung, Absicherung RTH-Landung, kleiner als Standard");
		break;
	}
	case 2126:
	{
		currentAlarmText = F("Technische Hilfeleistung, Gegenstand droht zu fallen");
		break;
	}
	case 2127:
	{
		currentAlarmText = F("Technische Hilfeleistung, Gasaustritt");
		break;
	}
	case 2128:
	{
		currentAlarmText = F("Technische Hilfeleistung, Gasaustritt in einem Gebäude");
		break;
	}
	case 2129:
	{
		currentAlarmText = F("Technische Hilfeleistung, Gasaustritt in einem Gebäude, Menschenleben in Gefahr");
		break;
	}
	case 2130:
	{
		currentAlarmText = F("Technische Hilfeleistung, Gasaustritt in einem Gebäude mit Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 2131:
	{
		currentAlarmText = F("Technische Hilfeleistung, Gasaustritt in einem Gebäude mit Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 2132:
	{
		currentAlarmText = F("Technische Hilfeleistung, Tier in Notlage");
		break;
	}
	case 2133:
	{
		currentAlarmText = F("Technische Hilfeleistung, Tier in Notlage");
		break;
	}
	case 2134:
	{
		currentAlarmText = F("Technische Hilfeleistung, Tier in Notlage");
		break;
	}
	case 2135:
	{
		currentAlarmText = F("Technische Hilfeleistung, Tier in Notlage");
		break;
	}
	case 2136:
	{
		currentAlarmText = F("Technische Hilfeleistung, Höhen oder Tiefen");
		break;
	}
	case 2137:
	{
		currentAlarmText = F("Technische Hilfeleistung, Kampfmittel-/Bombenfund");
		break;
	}
	case 2138:
	{
		currentAlarmText = F("Technische Hilfeleistung");
		break;
	}
	case 3001:
	{
		currentAlarmText = F("Nicht in Leitrechner");
		break;
	}
	case 4001:
	{
		currentAlarmText = F("Dienstfahrt, Brandsicherheitswache");
		break;
	}
	case 4002:
	{
		currentAlarmText = F("Dienstfahrt, Fremdbesetzung");
		break;
	}
	case 5001:
	{
		currentAlarmText = F("Technische Hilfeleistung im Ausnahmezustand");
		break;
	}
	case 5002:
	{
		currentAlarmText = F("Technische Hilfeleistung im Ausnahmezustand, Gegenstand droht zu fallen - Wachalarm");
		break;
	}
	case 6001:
	{
		currentAlarmText = F("Notfalleinsatz, kleiner als Standard");
		break;
	}
	case 6002:
	{
		currentAlarmText = F("Notfalleinsatz RTW");
		break;
	}
	case 6003:
	{
		currentAlarmText = F("Notfalleinsatz RTW und Notarzt");
		break;
	}
	case 6004:
	{
		currentAlarmText = F("Notfalleinsatz RTW und Notarzt, zusätzlich First Responder");
		break;
	}
	case 6005:
	{
		currentAlarmText = F("Notfalleinsatz RTW und Notarzt, zusätzlich Ersthelfersystem");
		break;
	}
	case 6006:
	{
		currentAlarmText = F("Notfalleinsatz für einen RTH");
		break;
	}
	case 6007:
	{
		currentAlarmText = F("Notfalleinsatz RTW und Notarzt, Hubrettungsmittel erforderlich");
		break;
	}
	case 6008:
	{
		currentAlarmText = F("Notfalleinsatz RTW auf einer Schnellstraße");
		break;
	}
	case 6009:
	{
		currentAlarmText = F("Notfalleinsatz RTW und Notarzt auf einer Schnellstraße");
		break;
	}
	case 6010:
	{
		currentAlarmText = F("Notfalleinsatz, überschwerer / adipöser Patient, kleiner als Standard");
		break;
	}
	case 6011:
	{
		currentAlarmText = F("Notfalleinsatz, überschwerer / adipöser Patient");
		break;
	}
	case 6012:
	{
		currentAlarmText = F("Notfalleinsatz, überschwerer / adipöser Patient, größer als Standard");
		break;
	}
	case 6013:
	{
		currentAlarmText = F("Notfalleinsatz, überschwerer / adipöser Patient, inkl. Notarzt");
		break;
	}
	case 6014:
	{
		currentAlarmText = F("Notfalleinsatz, überschwerer / adipöser Patient, inkl. Notarzt");
		break;
	}
	case 6015:
	{
		currentAlarmText = F("Notfalleinsatz, überschwerer / adipöser Patient, inkl. Notarzt");
		break;
	}
	case 6016:
	{
		currentAlarmText = F("Notfalleinsatz RTW, Infektionstransport");
		break;
	}
	case 6017:
	{
		currentAlarmText = F("Notfalleinsatz RTW, Infektionstransport und Notarzt");
		break;
	}
	case 6018:
	{
		currentAlarmText = F("Notfalleinsatz RTW, Tür verschlossen");
		break;
	}
	case 6019:
	{
		currentAlarmText = F("Notfalleinsatz RTW und Notarzt, Tür verschlossen");
		break;
	}
	case 6020:
	{
		currentAlarmText = F("Notfalleinsatz, Verlegung");
		break;
	}
	case 6021:
	{
		currentAlarmText = F("Notfalleinsatz, Verlegung mit Notarzt");
		break;
	}
	case 6022:
	{
		currentAlarmText = F("Notfalleinsatz, Verlegung mit begleitendem (Klinik-)Arzt");
		break;
	}
	case 6023:
	{
		currentAlarmText = F("Notfalleinsatz, Verlegung mit RTH");
		break;
	}
	case 6024:
	{
		currentAlarmText = F("Notfalleinsatz, Verlegung mit ITW");
		break;
	}
	case 6025:
	{
		currentAlarmText = F("Notfalleinsatz, Verlegung, Infektionstransport");
		break;
	}
	case 6026:
	{
		currentAlarmText = F("Notfalleinsatz, Verlegung, Infektionstransport, inkl. Notarzt");
		break;
	}
	case 6027:
	{
		currentAlarmText = F("Notfalleinsatz, Verlegung, Infektionstransport, 1 begleitender Arzt");
		break;
	}
	case 6028:
	{
		currentAlarmText = F("Notfalleinsatz, Verlegung, Infektionstransport, Verlegung mit RTH");
		break;
	}
	case 6029:
	{
		currentAlarmText = F("Notfalleinsatz, Verlegung, Infektionstransport, Verlegung mit ITW");
		break;
	}
	case 6030:
	{
		currentAlarmText = F("Notfalleinsatz, Großeinsatz Rettungsdienst Stufe 0");
		break;
	}
	case 6031:
	{
		currentAlarmText = F("Notfalleinsatz, Großeinsatz Rettungsdienst Stufe 1");
		break;
	}
	case 6032:
	{
		currentAlarmText = F("Notfalleinsatz, Großeinsatz Rettungsdienst Stufe 2");
		break;
	}
	case 6033:
	{
		currentAlarmText = F("Notfalleinsatz, Großeinsatz Rettungsdienst Stufe 3");
		break;
	}
	case 6034:
	{
		currentAlarmText = F("Notfalleinsatz, Großeinsatz Rettungsdienst Stufe 4");
		break;
	}
	case 6035:
	{
		currentAlarmText = F("Krankenbeförderung");
		break;
	}
	case 6036:
	{
		currentAlarmText = F("Krankenbeförderung, Ambulanztransport");
		break;
	}
	case 6037:
	{
		currentAlarmText = F("Krankenbeförderung, Ambulanztransport, Infektionstransport");
		break;
	}
	case 6038:
	{
		currentAlarmText = F("Krankenbeförderung, überschwerer / adipöser Patient kleiner als Standard");
		break;
	}
	case 6039:
	{
		currentAlarmText = F("Krankenbeförderung, überschwerer / adipöser Patient");
		break;
	}
	case 6040:
	{
		currentAlarmText = F("Krankenbeförderung, überschwerer / adipöser Patient größer als Standard");
		break;
	}
	case 6041:
	{
		currentAlarmText = F("Krankenbeförderung, Fernfahrt");
		break;
	}
	case 6042:
	{
		currentAlarmText = F("Krankenbeförderung, Fernfahrt, Infektionstransport");
		break;
	}
	case 6043:
	{
		currentAlarmText = F("Krankenbeförderung, Infektionstransport");
		break;
	}
	case 6044:
	{
		currentAlarmText = F("Krankenbeförderung, Infektionstransport Risikogruppe 4, Verlegung mit begleitendem (Klinik-)Arzt");
		break;
	}
	case 6045:
	{
		currentAlarmText = F("Krankenbeförderung, Verlegung");
		break;
	}
	case 6046:
	{
		currentAlarmText = F("Krankenbeförderung, Verlegung mit begleitendem (Klinik-)Arzt");
		break;
	}
	case 6047:
	{
		currentAlarmText = F("Krankenbeförderung adipöser Patient. Kleiner als Standard");
		break;
	}
	case 6048:
	{
		currentAlarmText = F("Krankenbeförderung adipöser Patient");
		break;
	}
	case 6049:
	{
		currentAlarmText = F("Krankenbeförderung adipöser Patient. Größer als Standard");
		break;
	}
	case 6050:
	{
		currentAlarmText = F("Krankenbeförderung, Verlegung mit begleitenden (Klinik-)Arzt, überschwerer / adipöser Patient bis 180 kg");
		break;
	}
	case 6051:
	{
		currentAlarmText = F("Krankenbeförderung, Verlegung mit begleitenden (Klinik-)Arzt, überschwerer / adipöser Patient");
		break;
	}
	case 6052:
	{
		currentAlarmText = F("Krankenbeförderung, Verlegung mit begleitenden (Klinik-)Arzt, überschwerer / adipöser Patient. Größer als Standard");
		break;
	}
	case 6053:
	{
		currentAlarmText = F("Krankenbeförderung, Verlegung, Infektionstransport");
		break;
	}
	case 6054:
	{
		currentAlarmText = F("Krankenbeförderung, Verlegung mit begleitendem (Klinik-)Arzt, Infektionstransport");
		break;
	}
	case 6055:
	{
		currentAlarmText = F("Krankenbeförderung, Hubrettungsmittel erforderlich");
		break;
	}
	case 7001:
	{
		currentAlarmText = F("Organisationsfahrt");
		break;
	}
	case 7002:
	{
		currentAlarmText = F("Organisationsfahrt, Fremdbesetzung");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE_TH(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 10101:
	{
		currentAlarmText = F("PKW");
		break;
	}
	case 10102:
	{
		currentAlarmText = F("Mülltonne");
		break;
	}
	case 10103:
	{
		currentAlarmText = F("Gerümpel im Freien");
		break;
	}
	case 10104:
	{
		currentAlarmText = F("gelöschtes Feuer");
		break;
	}
	case 10105:
	{
		currentAlarmText = F("Nachschau");
		break;
	}
	case 10201:
	{
		currentAlarmText = F("Wohnungsbrand");
		break;
	}
	case 10202:
	{
		currentAlarmText = F("Dachstuhlbrand");
		break;
	}
	case 10203:
	{
		currentAlarmText = F("Kellerbrand");
		break;
	}
	case 10204:
	{
		currentAlarmText = F("Zimmerbrand");
		break;
	}
	case 10205:
	{
		currentAlarmText = F("Kaminbrand");
		break;
	}
	case 10206:
	{
		currentAlarmText = F("Rauchentwicklung");
		break;
	}
	case 10301:
	{
		currentAlarmText = F("in Wohngebäuden");
		break;
	}
	case 10401:
	{
		currentAlarmText = F("Hochhaus");
		break;
	}
	case 10402:
	{
		currentAlarmText = F("Gewerbebetrieb");
		break;
	}
	case 10403:
	{
		currentAlarmText = F("Schreinerei");
		break;
	}
	case 10404:
	{
		currentAlarmText = F("Kfz-Werkstatt");
		break;
	}
	case 10405:
	{
		currentAlarmText = F("Pension");
		break;
	}
	case 10406:
	{
		currentAlarmText = F("Lagerplatz");
		break;
	}
	case 10407:
	{
		currentAlarmText = F("Produktions- und/oder Lagergebäude");
		break;
	}
	case 10501:
	{
		currentAlarmText = F("in Sondergebäuden");
		break;
	}
	case 10601:
	{
		currentAlarmText = F("");
		break;
	}
	case 10701:
	{
		currentAlarmText = F("Meldung einer Brandmeldeanlage");
		break;
	}
	case 10801:
	{
		currentAlarmText = F("Reisebus");
		break;
	}
	case 10802:
	{
		currentAlarmText = F("Bus des ÖPNV");
		break;
	}
	case 10803:
	{
		currentAlarmText = F("Schulbus");
		break;
	}
	case 10901:
	{
		currentAlarmText = F("Kleinflugzeug");
		break;
	}
	case 10902:
	{
		currentAlarmText = F("Sportmaschine");
		break;
	}
	case 10903:
	{
		currentAlarmText = F("Segelflieger / Paraglider");
		break;
	}
	case 10904:
	{
		currentAlarmText = F("Hubschrauber");
		break;
	}
	case 10905:
	{
		currentAlarmText = F("Heißluftballons");
		break;
	}
	case 10906:
	{
		currentAlarmText = F("Militärmaschine");
		break;
	}
	case 11001:
	{
		currentAlarmText = F("Großflugzeug");
		break;
	}
	case 11101:
	{
		currentAlarmText = F("einzelner Gasflaschen");
		break;
	}
	case 11102:
	{
		currentAlarmText = F("einer Gasleitung");
		break;
	}
	case 11201:
	{
		currentAlarmText = F("Gastanks");
		break;
	}
	case 11202:
	{
		currentAlarmText = F("Gastankfahrzeugs");
		break;
	}
	case 11203:
	{
		currentAlarmText = F("Gaskesselwagens");
		break;
	}
	case 11301:
	{
		currentAlarmText = F("LKW");
		break;
	}
	case 11302:
	{
		currentAlarmText = F("Busses ohne Personen");
		break;
	}
	case 11303:
	{
		currentAlarmText = F("einer landwirtschaftlichen Arbeitsmaschine in Feldgemarkung (z.B. Mähdreschers)");
		break;
	}
	case 11401:
	{
		currentAlarmText = F("Schienenfahrzeugs ohne Menschenleben in Gefahr");
		break;
	}
	case 11402:
	{
		currentAlarmText = F("Triebfahrzeugs ohne Menschenleben in Gefahr");
		break;
	}
	case 11403:
	{
		currentAlarmText = F("Waggons ohne Menschenleben in Gefahr");
		break;
	}
	case 11404:
	{
		currentAlarmText = F("Personenzugs ohne Menschenleben in Gefahr");
		break;
	}
	case 11405:
	{
		currentAlarmText = F("U- / S-Bahn-Zug ohne Menschenleben in Gefahr");
		break;
	}
	case 11406:
	{
		currentAlarmText = F("Güterzugs ohne Menschenleben in Gefahr");
		break;
	}
	case 11501:
	{
		currentAlarmText = F("Schienenfahrzeugs");
		break;
	}
	case 11502:
	{
		currentAlarmText = F("Triebfahrzeugs");
		break;
	}
	case 11503:
	{
		currentAlarmText = F("Waggons");
		break;
	}
	case 11504:
	{
		currentAlarmText = F("Personenzugs");
		break;
	}
	case 11505:
	{
		currentAlarmText = F("U- / S-Bahn-Zug");
		break;
	}
	case 11506:
	{
		currentAlarmText = F("Güterzugs");
		break;
	}
	case 11601:
	{
		currentAlarmText = F("Meldung eines ausgelösten (Heim-) Rauchwarnmelders");
		break;
	}
	case 11701:
	{
		currentAlarmText = F("eines Sportboots");
		break;
	}
	case 11702:
	{
		currentAlarmText = F("eines Segelboots");
		break;
	}
	case 11703:
	{
		currentAlarmText = F("einer Yacht");
		break;
	}
	case 11801:
	{
		currentAlarmText = F("eines Waldes oder einer Wiese mit geringer oder keiner Ausbreitungsgefahr");
		break;
	}
	case 11802:
	{
		currentAlarmText = F("unbekannte Lage in Wald und Wiese");
		break;
	}
	case 11901:
	{
		currentAlarmText = F("eines Waldes oder einer Wiese mit der Gefahr der weiteren Ausdehnung");
		break;
	}
	case 12001:
	{
		currentAlarmText = F("eines Waldes oder einer Wiese mit der Notwendigkeit zur Wasserförderung über eine lange Wegstrecke");
		break;
	}
	case 20101:
	{
		currentAlarmText = F("Wasser im Keller");
		break;
	}
	case 20102:
	{
		currentAlarmText = F("Wasserrohrbruch");
		break;
	}
	case 20103:
	{
		currentAlarmText = F("Tür- und Fenstersicherung");
		break;
	}
	case 20104:
	{
		currentAlarmText = F("Baum oder Gegenstand auf der Straße");
		break;
	}
	case 20105:
	{
		currentAlarmText = F("Tier in Not oder Unfall mit Tier");
		break;
	}
	case 20106:
	{
		currentAlarmText = F("einfache technische Hilfeleistung an Bächen, Seen oder in Hafenbereichen");
		break;
	}
	case 20107:
	{
		currentAlarmText = F("Ölspur");
		break;
	}
	case 20108:
	{
		currentAlarmText = F("Kleine Mengen Betriebsstoffe aufnehmen");
		break;
	}
	case 20201:
	{
		currentAlarmText = F("Notfall-Türöffnung");
		break;
	}
	case 20202:
	{
		currentAlarmText = F("Person im Aufzug");
		break;
	}
	case 20203:
	{
		currentAlarmText = F("Tragehilfe für den Rettungsdienst");
		break;
	}
	case 20301:
	{
		currentAlarmText = F("Fahrzeug umgestürzt");
		break;
	}
	case 20302:
	{
		currentAlarmText = F("Bauunfall");
		break;
	}
	case 20303:
	{
		currentAlarmText = F("Gerüsteinsturz");
		break;
	}
	case 20304:
	{
		currentAlarmText = F("Kran umgestürzt");
		break;
	}
	case 20305:
	{
		currentAlarmText = F("Unfall mit Einsturz von beteiligten Objekten");
		break;
	}
	case 20401:
	{
		currentAlarmText = F("in Absturzgefahr");
		break;
	}
	case 20402:
	{
		currentAlarmText = F("droht zu springen");
		break;
	}
	case 20501:
	{
		currentAlarmText = F("Unfall in großen elektrischen Anlagen / Hochspannungsanlagen");
		break;
	}
	case 20601:
	{
		currentAlarmText = F("Gebäudeeinsturz");
		break;
	}
	case 20602:
	{
		currentAlarmText = F("Bauunfall");
		break;
	}
	case 20603:
	{
		currentAlarmText = F("Gerüsteinsturz");
		break;
	}
	case 20604:
	{
		currentAlarmText = F("Kran umgestürzt");
		break;
	}
	case 20605:
	{
		currentAlarmText = F("Unfall mit Einsturz von beteiligten Objekten");
		break;
	}
	case 20606:
	{
		currentAlarmText = F("Person verschüttet");
		break;
	}
	case 20701:
	{
		currentAlarmText = F("Person in Fluss");
		break;
	}
	case 20702:
	{
		currentAlarmText = F("Person in Bach");
		break;
	}
	case 20703:
	{
		currentAlarmText = F("Person in See");
		break;
	}
	case 20801:
	{
		currentAlarmText = F("Gasgeruch");
		break;
	}
	case 20901:
	{
		currentAlarmText = F("Beschädigung einer Gasleitung");
		break;
	}
	case 20902:
	{
		currentAlarmText = F("Beschädigung eines Gastanks");
		break;
	}
	case 20903:
	{
		currentAlarmText = F("Beschädigung eines Gastankfahrzeugs");
		break;
	}
	case 20904:
	{
		currentAlarmText = F("Beschädigung eines Gaskesselwagen");
		break;
	}
	case 21001:
	{
		currentAlarmText = F("Fachberatung Gefahrgut");
		break;
	}
	case 21102:
	{
		currentAlarmText = F("Messeinsatz Gefahrgut");
		break;
	}
	case 21201:
	{
		currentAlarmText = F("Gefahrguteinsatz");
		break;
	}
	case 21301:
	{
		currentAlarmText = F("PKW / LKW nach VU");
		break;
	}
	case 21302:
	{
		currentAlarmText = F("Kfz / Maschine");
		break;
	}
	case 21303:
	{
		currentAlarmText = F("Person verschüttet");
		break;
	}
	case 21401:
	{
		currentAlarmText = F("Bus nach VU");
		break;
	}
	case 21402:
	{
		currentAlarmText = F("Kfz / Maschine");
		break;
	}
	case 21403:
	{
		currentAlarmText = F("Mehrere Personen verschüttet");
		break;
	}
	case 21501:
	{
		currentAlarmText = F("Öl auf Fluss");
		break;
	}
	case 21502:
	{
		currentAlarmText = F("Öl auf Bach");
		break;
	}
	case 21503:
	{
		currentAlarmText = F("Öl auf See");
		break;
	}
	case 21601:
	{
		currentAlarmText = F("Person unter Zug / U- / S-Bahn / Straßenbahn");
		break;
	}
	case 21602:
	{
		currentAlarmText = F("Kollision eines Zuges mit einem Straßenfahrzeug");
		break;
	}
	case 21701:
	{
		currentAlarmText = F("Unfall eines Zuges / einer U- / S-Bahn / Straßenbahn");
		break;
	}
	case 21702:
	{
		currentAlarmText = F("Kollision zweier Züge");
		break;
	}
	case 40101:
	{
		currentAlarmText = F("Qualifizierter Krankentransport");
		break;
	}
	case 40102:
	{
		currentAlarmText = F("ärztliche Einweisung (sofort durchzuführender, disponibler oder vorbestellter Krankentransport)");
		break;
	}
	case 40201:
	{
		currentAlarmText = F("Minderdringlicher Notfalleinsatz nach Indikationsliste für den N-KTW, dessen Dringlichkeit nicht so groß ist, dass die Anordnung von Sondersignalen oder der Einsatz eines RTW / MZF erforderlich wäre");
		break;
	}
	case 40301:
	{
		currentAlarmText = F("Notfalleinsatz unterhalb der Indikationsliste für den Notarzt, dessen Dringlichkeit nicht so groß ist, dass die Anordnung von Sondersignalen erforderlich wäre");
		break;
	}
	case 40401:
	{
		currentAlarmText = F("Notfalleinsatz unterhalb der Indikationsliste für den Notarzt, jedoch so dringlich, dass der Gebrauch von Sondersignalen angeordnet werden muss");
		break;
	}
	case 40501:
	{
		currentAlarmText = F("Notfalleinsatz mit einem Notarztsystem; bei allen akut lebensbedrohlichen Situationen, die der Indikationsliste für den Notarzt entsprechen");
		break;
	}
	case 40601:
	{
		currentAlarmText = F("Notarzteinsatz ‚alleine‘ bei akut lebensbedrohlichen Situationen, die der Indikationsliste für den Notarzt entsprechen (z. B. bereichsübergreifender Notarzteinsatz oder Notarzt-Nachforderung im eigenen Rettungsdienstbereich)");
		break;
	}
	case 40701:
	{
		currentAlarmText = F("Notfalleinsatz bei lebensbedrohlichen Einsatzlagen für das Einsatzpersonal im Zusammenhang mit bewaffneten Gewalttätern");
		break;
	}
	case 40801:
	{
		currentAlarmText = F("Notfall mit einer großen Anzahl von Verletzten und/oder Erkrankten sowie Betroffenen");
		break;
	}
	case 40901:
	{
		currentAlarmText = F("Mobile Rettungswache zur Bereichsabdeckung oder Wachverschiebungen von Einsatzmitteln");
		break;
	}
	case 501 ... 599:
	{
		currentAlarmText = getAlarmSubText_DE_THW(currentSub);
		break;
	}
	case 601 ... 699:
	{
		currentAlarmText = getAlarmSubText_DE_POL(currentSub);
		break;
	}

	case 1:
	{
		currentAlarmText = F("FME Test");
		break;
	}
	default:
	{
		currentAlarmText = F("UNKLAR");
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText_DE(unsigned int currentSub)
{
	String currentAlarmText = "";
	switch (currentSub)
	{
	case 1:
	{
		currentAlarmText = getAlarmSubText_DE_SH(currentSub);
		break;
	}
	case 2:
	{
		currentAlarmText = getAlarmSubText_DE_HH(currentSub);
		break;
	}
	case 3:
	{
		currentAlarmText = getAlarmSubText_DE_NI(currentSub);
		break;
	}
	case 4:
	{
		currentAlarmText = getAlarmSubText_DE_HB(currentSub);
		break;
	}
	case 5:
	{
		currentAlarmText = getAlarmSubText_DE_NW(currentSub);
		break;
	}
	case 6:
	{
		currentAlarmText = getAlarmSubText_DE_HE(currentSub);
		break;
	}
	case 7:
	{
		currentAlarmText = getAlarmSubText_DE_RP(currentSub);
		break;
	}
	case 8:
	{
		currentAlarmText = getAlarmSubText_DE_BW(currentSub);
		break;
	}
	case 9:
	{
		currentAlarmText = getAlarmSubText_DE_BY(currentSub);
		break;
	}
	case 10:
	{
		currentAlarmText = getAlarmSubText_DE_SL(currentSub);
		break;
	}
	case 11:
	{
		currentAlarmText = getAlarmSubText_DE_BE(currentSub);
		break;
	}
	case 12:
	{
		currentAlarmText = getAlarmSubText_DE_BB(currentSub);
		break;
	}
	case 13:
	{
		currentAlarmText = getAlarmSubText_DE_MV(currentSub);
		break;
	}
	case 14:
	{
		currentAlarmText = getAlarmSubText_DE_SN(currentSub);
		break;
	}
	case 15:
	{
		currentAlarmText = getAlarmSubText_DE_ST(currentSub);
		break;
	}
	case 16:
	{
		currentAlarmText = getAlarmSubText_DE_TH(currentSub);
		break;
	}
	default:
	{
		currentAlarmText = getAlarmSubText_DE_HE(currentSub);
		break;
	}
	}
	return currentAlarmText;
}
String getAlarmSubText(unsigned int currentSub)
{
	return getAlarmSubText_DE(currentSub);
}