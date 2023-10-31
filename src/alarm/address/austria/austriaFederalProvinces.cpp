#include <Arduino.h>

#include "variables.h"

String getAustriaFederalProvincesName(unsigned int federalProvince)
{
	String returnValue = "";
	switch (federalProvince)
	{
	case 1:
	{
		returnValue = F("Burgenland");
		break;
	}
	case 2:
	{
		returnValue = F("Kärnten");
		break;
	}
	case 3:
	{
		returnValue = F("Niederösterreich");
		break;
	}
	case 4:
	{
		returnValue = F("Oberösterreich");
		break;
	}
	case 5:
	{
		returnValue = F("Salzburg");
		break;
	}
	case 6:
	{
		returnValue = F("Steiermark");
		break;
	}
	case 7:
	{
		returnValue = F("Tirol");
		break;
	}
	case 8:
	{
		returnValue = F("Vorarlberg");
		break;
	}
	case 9:
	{
		returnValue = F("Wien");
		break;
	}
	}
	return returnValue;
}

unsigned int getAustriaFederalProvincesKeyFromName(String federalProvince)
{
	for (size_t i = 1; i <= 9; i++)
	{
		String tmpFederalProvince = getAustriaFederalProvincesName(i);
		if (tmpFederalProvince.equalsIgnoreCase(federalProvince))
		{
			return i;
		}
	}
	return 0;
}