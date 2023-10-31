#include <Arduino.h>

#include "variables.h"

String getSwitzerlandFederalStateName(unsigned int federalState)
{
	String returnValue = "";
	switch (federalState)
	{
	case 1:
	{
		returnValue = F("Zürich");
		break;
	}
	case 2:
	{
		returnValue = F("Bern");
		break;
	}
	case 3:
	{
		returnValue = F("Luzern");
		break;
	}
	case 4:
	{
		returnValue = F("Uri");
		break;
	}
	case 5:
	{
		returnValue = F("Schwyz");
		break;
	}
	case 6:
	{
		returnValue = F("Obwalden");
		break;
	}
	case 7:
	{
		returnValue = F("Nidwalden");
		break;
	}
	case 8:
	{
		returnValue = F("Glarus");
		break;
	}
	case 9:
	{
		returnValue = F("Zug");
		break;
	}
	case 10:
	{
		returnValue = F("Freiburg");
		break;
	}
	case 11:
	{
		returnValue = F("Solothurn");
		break;
	}
	case 12:
	{
		returnValue = F("Basel-Stadt");
		break;
	}
	case 13:
	{
		returnValue = F("Basel-Landschaft");
		break;
	}
	case 14:
	{
		returnValue = F("Schaffhausen");
		break;
	}
	case 15:
	{
		returnValue = F("Appenzell Ausserrhoden");
		break;
	}
	case 16:
	{
		returnValue = F("Appenzell Innerrhoden");
		break;
	}
	case 17:
	{
		returnValue = F("St. Gallen");
		break;
	}
	case 18:
	{
		returnValue = F("Graubünden");
		break;
	}
	case 19:
	{
		returnValue = F("Aargau");
		break;
	}
	case 20:
	{
		returnValue = F("Thurgau");
		break;
	}
	case 21:
	{
		returnValue = F("Ticino");
		break;
	}
	case 22:
	{
		returnValue = F("Vaud");
		break;
	}
	case 23:
	{
		returnValue = F("Wallis");
		break;
	}
	case 24:
	{
		returnValue = F("Neuchâtel");
		break;
	}
	case 25:
	{
		returnValue = F("Genève");
		break;
	}
	case 26:
	{
		returnValue = F("Jura");
		break;
	}
	}
	return returnValue;
}

String getSwitzerlandFederalStateCode(unsigned int federalState)
{
		String returnValue = "";
	switch (federalState)
	{
	case 1:
	{
		returnValue = F("ZH");
		break;
	}
	case 2:
	{
		returnValue = F("BE");
		break;
	}
	case 3:
	{
		returnValue = F("LU");
		break;
	}
	case 4:
	{
		returnValue = F("UR");
		break;
	}
	case 5:
	{
		returnValue = F("SZ");
		break;
	}
	case 6:
	{
		returnValue = F("OW");
		break;
	}
	case 7:
	{
		returnValue = F("NW");
		break;
	}
	case 8:
	{
		returnValue = F("GL");
		break;
	}
	case 9:
	{
		returnValue = F("ZG");
		break;
	}
	case 10:
	{
		returnValue = F("FR");
		break;
	}
	case 11:
	{
		returnValue = F("SO");
		break;
	}
	case 12:
	{
		returnValue = F("BS");
		break;
	}
	case 13:
	{
		returnValue = F("BL");
		break;
	}
	case 14:
	{
		returnValue = F("SH");
		break;
	}
	case 15:
	{
		returnValue = F("AR");
		break;
	}
	case 16:
	{
		returnValue = F("AI");
		break;
	}
	case 17:
	{
		returnValue = F("SG");
		break;
	}
	case 18:
	{
		returnValue = F("GR");
		break;
	}
	case 19:
	{
		returnValue = F("AG");
		break;
	}
	case 20:
	{
		returnValue = F("TG");
		break;
	}
	case 21:
	{
		returnValue = F("TI");
		break;
	}
	case 22:
	{
		returnValue = F("VD");
		break;
	}
	case 23:
	{
		returnValue = F("VS");
		break;
	}
	case 24:
	{
		returnValue = F("NE");
		break;
	}
	case 25:
	{
		returnValue = F("GE");
		break;
	}
	case 26:
	{
		returnValue = F("JU");
		break;
	}
	}
	return returnValue;
}

unsigned int getSwitzerlandFederalStateKeyFromName(String federalState)
{
	for (size_t i = 1; i <= 26; i++)
	{
		String tmpFederalState = getSwitzerlandFederalStateName(i);
		if (tmpFederalState.equalsIgnoreCase(federalState))
		{
			return i;
		}
	}
	return 0;
}

unsigned int getSwitzerlandFederalStateKeyFromCode(String code)
{
	for (size_t i = 1; i <= 26; i++)
	{
		String tmpCode = getSwitzerlandFederalStateCode(i);
		if (tmpCode.equalsIgnoreCase(code))
		{
			return i;
		}
	}
	return 0;
}