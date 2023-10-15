#include <Arduino.h>

#include "alarm\address\functions.h"
#include "alarm\keywords\functions.h"

#include "variables.h"

void cleanAlarm()
{
     display_action = false;
     running_Alarm = false;
}

int getAlarmCategory(unsigned int currentType)
{
	int currentAlarmText = 0;
	if (currentType >= 101 && currentType <= 199)
	{
		currentAlarmText = 1;
	}
	else if (currentType >= 201 && currentType <= 299)
	{
		currentAlarmText = 2;
	}
	else if (currentType >= 301 && currentType <= 399)
	{
		currentAlarmText = 3;
	}
	else if (currentType >= 401 && currentType <= 499)
	{
		currentAlarmText = 4;
	}
	else if (currentType >= 501 && currentType <= 599)
	{
		currentAlarmText = 5;
	}
	else if (currentType >= 601 && currentType <= 699)
	{
		currentAlarmText = 6;
	}
	else
	{
	}
	return currentAlarmText;
}