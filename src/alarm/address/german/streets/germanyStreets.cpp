#include <Arduino.h>

#include "variables.h"

#include "germanyStreets1_1.h"
#include "germanyStreets2_1.h"
#include "germanyStreets3_1.h"
#include "germanyStreets4_1.h"
#include "germanyStreets5_1.h"
#include "germanyStreets6_1.h"
#include "germanyStreets7_1.h"
#include "germanyStreets8_1.h"
#include "germanyStreets9_1.h"
#include "germanyStreetsA_1.h"
#include "germanyStreetsA_2.h"
#include "germanyStreetsA_3.h"
#include "germanyStreetsA_4.h"
#include "germanyStreetsA_5.h"
#include "germanyStreetsB_1.h"
#include "germanyStreetsB_2.h"
#include "germanyStreetsB_3.h"
#include "germanyStreetsB_4.h"
#include "germanyStreetsC_1.h"
#include "germanyStreetsD_1.h"
#include "germanyStreetsD_2.h"
#include "germanyStreetsE_1.h"
#include "germanyStreetsE_2.h"
#include "germanyStreetsF_1.h"
#include "germanyStreetsF_2.h"
#include "germanyStreetsF_3.h"
#include "germanyStreetsG_1.h"
#include "germanyStreetsG_2.h"
#include "germanyStreetsH_1.h"
#include "germanyStreetsH_2.h"
#include "germanyStreetsH_3.h"
#include "germanyStreetsH_4.h"
#include "germanyStreetsI_1.h"
#include "germanyStreetsI_2.h"
#include "germanyStreetsI_3.h"
#include "germanyStreetsJ_1.h"
#include "germanyStreetsK_1.h"
#include "germanyStreetsK_2.h"
#include "germanyStreetsK_3.h"
#include "germanyStreetsL_1.h"
#include "germanyStreetsL_2.h"
#include "germanyStreetsL_3.h"
#include "germanyStreetsM_1.h"
#include "germanyStreetsM_2.h"
#include "germanyStreetsN_1.h"
#include "germanyStreetsN_2.h"
#include "germanyStreetsO_1.h"
#include "germanyStreetsO_2.h"
#include "germanyStreetsP_1.h"
#include "germanyStreetsP_2.h"
#include "germanyStreetsQ_1.h"
#include "germanyStreetsR_1.h"
#include "germanyStreetsR_2.h"
#include "germanyStreetsR_3.h"
#include "germanyStreetsS_1.h"
#include "germanyStreetsS_2.h"
#include "germanyStreetsS_3.h"
#include "germanyStreetsS_4.h"
#include "germanyStreetsT_1.h"
#include "germanyStreetsT_2.h"
#include "germanyStreetsU_1.h"
#include "germanyStreetsV_1.h"
#include "germanyStreetsV_2.h"
#include "germanyStreetsW_1.h"
#include "germanyStreetsW_2.h"
#include "germanyStreetsW_3.h"
#include "germanyStreetsX_1.h"
#include "germanyStreetsY_1.h"
#include "germanyStreetsZ_1.h"
#include "germanyStreetsZ_2.h"
#include "germanyStreetsAe_1.h"
#include "germanyStreetsOe_1.h"
#include "germanyStreetsUe_1.h"
String getGermanyStreetName(unsigned int streetKey)
{
	String returnValue = "";
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetName11(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetName21(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetName31(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetName41(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetName51(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetName61(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetName71(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetName81(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetName91(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameA1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameA2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameA3(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameA4(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameA5(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameB1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameB2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameB3(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameB4(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameC1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameD1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameD2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameE1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameE2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameF1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameF2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameF3(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameG1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameG2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameH1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameH2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameH3(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameH4(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameI1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameI2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameI3(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameJ1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameK1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameK2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameK3(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameL1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameL2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameL3(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameM1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameM2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameN1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameN2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameO1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameO2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameP1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameP2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameR1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameR2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameR3(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameS1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameS2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameS3(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameS4(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameT1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameT2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameU1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameV1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameV2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameW1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameW2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameW3(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameX1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameY1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameZ1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameZ2(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameAe1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameOe1(streetKey);
	}
	if (returnValue.isEmpty())
	{
		returnValue = getGermanyStreetNameUe1(streetKey);
	}
	return returnValue;
}
