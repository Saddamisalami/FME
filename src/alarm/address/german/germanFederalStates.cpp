#include <Arduino.h>

#include "variables.h"

String getGermanFederalStateName(unsigned int federalState)
{
	String returnValue = "";
	switch (federalState)
	{
	case 1:
	{
		returnValue = F("Schleswig-Holstein");
		break;
	}
	case 2:
	{
		returnValue = F("Hamburg");
		break;
	}
	case 3:
	{
		returnValue = F("Niedersachsen");
		break;
	}
	case 4:
	{
		returnValue = F("Bremen");
		break;
	}
	case 5:
	{
		returnValue = F("Nordrhein-Westfalen");
		break;
	}
	case 6:
	{
		returnValue = F("Hessen");
		break;
	}
	case 7:
	{
		returnValue = F("Rheinland-Pfalz");
		break;
	}
	case 8:
	{
		returnValue = F("Baden-Württemberg");
		break;
	}
	case 9:
	{
		returnValue = F("Bayern");
		break;
	}
	case 10:
	{
		returnValue = F("Saarland");
		break;
	}
	case 11:
	{
		returnValue = F("Berlin");
		break;
	}
	case 12:
	{
		returnValue = F("Brandenburg");
		break;
	}
	case 13:
	{
		returnValue = F("Mecklenburg-Vorpommern");
		break;
	}
	case 14:
	{
		returnValue = F("Sachsen");
		break;
	}
	case 15:
	{
		returnValue = F("Sachsen-Anhalt");
		break;
	}
	case 16:
	{
		returnValue = F("Thüringen");
		break;
	}
	}
	return returnValue;
}

String getGermanFederalStateSeatOfGovernment(unsigned int federalState)
{
	String returnValue = "";
	switch (federalState)
	{
	case 1:
	{
		returnValue = F("Kiel");
		break;
	}
	case 2:
	{
		returnValue = F("Hamburg");
		break;
	}
	case 3:
	{
		returnValue = F("Hannover");
		break;
	}
	case 4:
	{
		returnValue = F("Bremen");
		break;
	}
	case 5:
	{
		returnValue = F("Düsseldorf");
		break;
	}
	case 6:
	{
		returnValue = F("Wiesbaden");
		break;
	}
	case 7:
	{
		returnValue = F("Mainz");
		break;
	}
	case 8:
	{
		returnValue = F("Stuttgart");
		break;
	}
	case 9:
	{
		returnValue = F("München");
		break;
	}
	case 10:
	{
		returnValue = F("Saarbrücken, Landeshauptstadt");
		break;
	}
	case 11:
	{
		returnValue = F("Berlin");
		break;
	}
	case 12:
	{
		returnValue = F("Potsdam");
		break;
	}
	case 13:
	{
		returnValue = F("Schwerin");
		break;
	}
	case 14:
	{
		returnValue = F("Dresden");
		break;
	}
	case 15:
	{
		returnValue = F("Magdeburg");
		break;
	}
	case 16:
	{
		returnValue = F("Erfurt");
		break;
	}
	}
	return returnValue;
}

unsigned int getGermanFederalStateKeyFromName(String federalState)
{
	for (size_t i = 1; i <= 16; i++)
	{
		String tmpFederalState = getGermanFederalStateName(i);
		if (tmpFederalState.equalsIgnoreCase(federalState))
		{
			return i;
		}
	}
	return 0;
}

unsigned int getGermanFederalStateKeyFromSeatOfGovernment(String seatOfGoverment)
{
	for (size_t i = 1; i <= 16; i++)
	{
		String tmpSeatOfGovernment = getGermanFederalStateSeatOfGovernment(i);
		if (tmpSeatOfGovernment.equalsIgnoreCase(seatOfGoverment))
		{
			return i;
		}
	}
	return 0;
}