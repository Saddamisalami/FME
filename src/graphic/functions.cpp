#include <Arduino.h>

#include "variables.h"

struct theme
{
    const char *AlarmClock_48;
    const char *Alarm_16;
    const char *Alarm_48;
    const char *Arduino_24;
    const char *Arm_24;
    const char *Back_12;
    const char *Bat000_16;
    const char *Bat010_16;
    const char *Bat025_16;
    const char *Bat050_16;
    const char *Bat075_16;
    const char *Bat100_16;
    const char *BatCharge_16;
    const char *Bluetooth_24;
    const char *Brightness000_48;
    const char *Brightness010_48;
    const char *Brightness020_48;
    const char *Brightness030_48;
    const char *Brightness040_48;
    const char *Brightness050_48;
    const char *Brightness060_48;
    const char *Brightness070_48;
    const char *Brightness080_48;
    const char *Brightness090_48;
    const char *Brightness100_48;
    const char *Brightness_48;
    const char *Calendar_48;
    const char *Clock_48;
    const char *ThemeBW_48;
    const char *Theme_48;
    const char *ThemeOutline_48;

    const char *Day_01_48;
    const char *Day_02_48;
    const char *Day_03_48;
    const char *Day_04_48;
    const char *Day_05_48;
    const char *Day_06_48;
    const char *Day_07_48;
    const char *Day_08_48;
    const char *Day_09_48;
    const char *Day_10_48;
    const char *Day_11_48;
    const char *Day_12_48;
    const char *Day_13_48;
    const char *Day_14_48;
    const char *Day_15_48;
    const char *Day_16_48;
    const char *Day_17_48;
    const char *Day_18_48;
    const char *Day_19_48;
    const char *Day_20_48;
    const char *Day_21_48;
    const char *Day_22_48;
    const char *Day_23_48;
    const char *Day_24_48;
    const char *Day_25_48;
    const char *Day_26_48;
    const char *Day_27_48;
    const char *Day_28_48;
    const char *Day_29_48;
    const char *Day_30_48;
    const char *Day_31_48;
    const char *Down_12;
    const char *Forward_12;
    const char *Giessen_170;
    const char *Icons8_24;
    const char *Info_48;
    const char *LangDE_48;
    const char *LangEN_48;
    const char *LockC_16;
    const char *LockC_48;
    const char *LockO_16;
    const char *LogoO_170;
    const char *Menu_12;
    const char *Month_Apr_48;
    const char *Month_Aug_48;
    const char *Month_Dec_48;
    const char *Month_Feb_48;
    const char *Month_Jan_48;
    const char *Month_Jul_48;
    const char *Month_Jun_48;
    const char *Month_Mar_48;
    const char *Month_May_48;
    const char *Month_Nov_48;
    const char *Month_Oct_48;
    const char *Month_Sep_48;
    const char *NichtOk_12;
    const char *Ok_12;
    const char *OriChange_48;
    const char *OriHor_48;
    const char *OriVert_48;
    const char *Setting_48;
    const char *Sig000_16;
    const char *Sig025_16;
    const char *Sig050_16;
    const char *Sig075_16;
    const char *Sig100_16;
    const char *Sound000_16;
    const char *Sound000_48;
    const char *Sound025_16;
    const char *Sound025_48;
    const char *Sound050_16;
    const char *Sound050_48;
    const char *Sound075_16;
    const char *Sound075_48;
    const char *Sound100_16;
    const char *Sound100_48;
    const char *Speaker_48;
    const char *Text_16;
    const char *Text_48;

    const char *Type_D000_12;
    const char *Type_D000_24;
    const char *Type_D000_48;
    const char *Type_D000_64;
    const char *Type_D001_12;
    const char *Type_D001_24;
    const char *Type_D001_48;
    const char *Type_D001_64;

    const char *Type_F001_12;
    const char *Type_F001_24;
    const char *Type_F001_48;
    const char *Type_F001_64;
    const char *Type_F002_12;
    const char *Type_F002_24;
    const char *Type_F002_48;
    const char *Type_F002_64;
    const char *Type_F003_12;
    const char *Type_F003_24;
    const char *Type_F003_48;
    const char *Type_F003_64;
    const char *Type_F004_12;
    const char *Type_F004_24;
    const char *Type_F004_48;
    const char *Type_F004_64;
    const char *Type_F005_12;
    const char *Type_F005_24;
    const char *Type_F005_48;
    const char *Type_F005_64;
    const char *Type_F006_12;
    const char *Type_F006_24;
    const char *Type_F006_48;
    const char *Type_F006_64;
    const char *Type_F007_12;
    const char *Type_F007_24;
    const char *Type_F007_48;
    const char *Type_F007_64;
    const char *Type_F008_12;
    const char *Type_F008_24;
    const char *Type_F008_48;
    const char *Type_F008_64;
    const char *Type_F009_12;
    const char *Type_F009_24;
    const char *Type_F009_48;
    const char *Type_F009_64;
    const char *Type_F010_12;
    const char *Type_F010_24;
    const char *Type_F010_48;
    const char *Type_F010_64;
    const char *Type_F011_12;
    const char *Type_F011_24;
    const char *Type_F011_48;
    const char *Type_F011_64;
    const char *Type_F012_12;
    const char *Type_F012_24;
    const char *Type_F012_48;
    const char *Type_F012_64;
    const char *Type_F013_12;
    const char *Type_F013_24;
    const char *Type_F013_48;
    const char *Type_F013_64;
    const char *Type_F014_12;
    const char *Type_F014_24;
    const char *Type_F014_48;
    const char *Type_F014_64;
    const char *Type_F015_12;
    const char *Type_F015_24;
    const char *Type_F015_48;
    const char *Type_F015_64;
    const char *Type_F016_12;
    const char *Type_F016_24;
    const char *Type_F016_48;
    const char *Type_F016_64;
    const char *Type_F017_12;
    const char *Type_F017_24;
    const char *Type_F017_48;
    const char *Type_F017_64;
    const char *Type_F018_12;
    const char *Type_F018_24;
    const char *Type_F018_48;
    const char *Type_F018_64;
    const char *Type_F019_12;
    const char *Type_F019_24;
    const char *Type_F019_48;
    const char *Type_F019_64;
    const char *Type_F020_12;
    const char *Type_F020_24;
    const char *Type_F020_48;
    const char *Type_F020_64;
    const char *Type_F021_12;
    const char *Type_F021_24;
    const char *Type_F021_48;
    const char *Type_F021_64;

    const char *Type_H001_12;
    const char *Type_H001_24;
    const char *Type_H001_48;
    const char *Type_H001_64;
    const char *Type_H002_12;
    const char *Type_H002_24;
    const char *Type_H002_48;
    const char *Type_H002_64;
    const char *Type_H003_12;
    const char *Type_H003_24;
    const char *Type_H003_48;
    const char *Type_H003_64;
    const char *Type_H004_12;
    const char *Type_H004_24;
    const char *Type_H004_48;
    const char *Type_H004_64;
    const char *Type_H005_12;
    const char *Type_H005_24;
    const char *Type_H005_48;
    const char *Type_H005_64;
    const char *Type_H006_12;
    const char *Type_H006_24;
    const char *Type_H006_48;
    const char *Type_H006_64;
    const char *Type_H007_12;
    const char *Type_H007_24;
    const char *Type_H007_48;
    const char *Type_H007_64;
    const char *Type_H008_12;
    const char *Type_H008_24;
    const char *Type_H008_48;
    const char *Type_H008_64;
    const char *Type_H009_12;
    const char *Type_H009_24;
    const char *Type_H009_48;
    const char *Type_H009_64;
    const char *Type_H010_12;
    const char *Type_H010_24;
    const char *Type_H010_48;
    const char *Type_H010_64;
    const char *Type_H011_12;
    const char *Type_H011_24;
    const char *Type_H011_48;
    const char *Type_H011_64;
    const char *Type_H012_12;
    const char *Type_H012_24;
    const char *Type_H012_48;
    const char *Type_H012_64;
    const char *Type_H013_12;
    const char *Type_H013_24;
    const char *Type_H013_48;
    const char *Type_H013_64;
    const char *Type_H014_12;
    const char *Type_H014_24;
    const char *Type_H014_48;
    const char *Type_H014_64;
    const char *Type_H015_12;
    const char *Type_H015_24;
    const char *Type_H015_48;
    const char *Type_H015_64;
    const char *Type_H016_12;
    const char *Type_H016_24;
    const char *Type_H016_48;
    const char *Type_H016_64;
    const char *Type_H017_12;
    const char *Type_H017_24;
    const char *Type_H017_48;
    const char *Type_H017_64;
    const char *Type_H018_12;
    const char *Type_H018_24;
    const char *Type_H018_48;
    const char *Type_H018_64;
    const char *Type_H019_12;
    const char *Type_H019_24;
    const char *Type_H019_48;
    const char *Type_H019_64;
    const char *Type_H020_12;
    const char *Type_H020_24;
    const char *Type_H020_48;
    const char *Type_H020_64;
    const char *Type_H021_12;
    const char *Type_H021_24;
    const char *Type_H021_48;
    const char *Type_H021_64;
    const char *Type_H022_12;
    const char *Type_H022_24;
    const char *Type_H022_48;
    const char *Type_H022_64;

    const char *Type_P001_12;
    const char *Type_P001_24;
    const char *Type_P001_48;
    const char *Type_P001_64;
    const char *Type_P002_12;
    const char *Type_P002_24;
    const char *Type_P002_48;
    const char *Type_P002_64;
    const char *Type_P003_12;
    const char *Type_P003_24;
    const char *Type_P003_48;
    const char *Type_P003_64;
    const char *Type_P004_12;
    const char *Type_P004_24;
    const char *Type_P004_48;
    const char *Type_P004_64;
    const char *Type_P005_12;
    const char *Type_P005_24;
    const char *Type_P005_48;
    const char *Type_P005_64;
    const char *Type_P006_12;
    const char *Type_P006_24;
    const char *Type_P006_48;
    const char *Type_P006_64;

    const char *Type_R001_12;
    const char *Type_R001_24;
    const char *Type_R001_48;
    const char *Type_R001_64;
    const char *Type_R002_12;
    const char *Type_R002_24;
    const char *Type_R002_48;
    const char *Type_R002_64;
    const char *Type_R003_12;
    const char *Type_R003_24;
    const char *Type_R003_48;
    const char *Type_R003_64;
    const char *Type_R004_12;
    const char *Type_R004_24;
    const char *Type_R004_48;
    const char *Type_R004_64;
    const char *Type_R005_12;
    const char *Type_R005_24;
    const char *Type_R005_48;
    const char *Type_R005_64;
    const char *Type_R006_12;
    const char *Type_R006_24;
    const char *Type_R006_48;
    const char *Type_R006_64;
    const char *Type_R007_12;
    const char *Type_R007_24;
    const char *Type_R007_48;
    const char *Type_R007_64;
    const char *Type_R008_12;
    const char *Type_R008_24;
    const char *Type_R008_48;
    const char *Type_R008_64;

    const char *Type_T001_12;
    const char *Type_T001_24;
    const char *Type_T001_48;
    const char *Type_T001_64;
    const char *Type_T003_12;
    const char *Type_T003_24;
    const char *Type_T003_48;
    const char *Type_T003_64;
    const char *Type_T004_12;
    const char *Type_T004_24;
    const char *Type_T004_48;
    const char *Type_T004_64;
    const char *Type_T005_12;
    const char *Type_T005_24;
    const char *Type_T005_48;
    const char *Type_T005_64;
    const char *Type_T006_12;
    const char *Type_T006_24;
    const char *Type_T006_48;
    const char *Type_T006_64;
    const char *Type_T007_12;
    const char *Type_T007_24;
    const char *Type_T007_48;
    const char *Type_T007_64;
    const char *Type_T008_12;
    const char *Type_T008_24;
    const char *Type_T008_48;
    const char *Type_T008_64;
    const char *Type_T009_12;
    const char *Type_T009_24;
    const char *Type_T009_48;
    const char *Type_T009_64;
    const char *Type_T010_12;
    const char *Type_T010_24;
    const char *Type_T010_48;
    const char *Type_T010_64;
    const char *Type_T011_12;
    const char *Type_T011_24;
    const char *Type_T011_48;
    const char *Type_T011_64;
    const char *Type_T012_12;
    const char *Type_T012_24;
    const char *Type_T012_48;
    const char *Type_T012_64;
    const char *Type_T013_12;
    const char *Type_T013_24;
    const char *Type_T013_48;
    const char *Type_T013_64;
    const char *Type_T014_12;
    const char *Type_T014_24;
    const char *Type_T014_48;
    const char *Type_T014_64;
    const char *Type_T015_12;
    const char *Type_T015_24;
    const char *Type_T015_48;
    const char *Type_T015_64;
    const char *Type_T016_12;
    const char *Type_T016_24;
    const char *Type_T016_48;
    const char *Type_T016_64;
    const char *Type_T017_12;
    const char *Type_T017_24;
    const char *Type_T017_48;
    const char *Type_T017_64;
    const char *Type_T018_12;
    const char *Type_T018_24;
    const char *Type_T018_48;
    const char *Type_T018_64;
    const char *Type_T019_12;
    const char *Type_T019_24;
    const char *Type_T019_48;
    const char *Type_T019_64;
    const char *Type_T020_12;
    const char *Type_T020_24;
    const char *Type_T020_48;
    const char *Type_T020_64;
    const char *Type_T021_12;
    const char *Type_T021_24;
    const char *Type_T021_48;
    const char *Type_T021_64;

    const char *Type_U001_12;
    const char *Type_U001_24;
    const char *Type_U001_48;
    const char *Type_U001_64;
    const char *Type_U002_12;
    const char *Type_U002_24;
    const char *Type_U002_48;
    const char *Type_U002_64;

    const char *Coat_000_48;
    const char *Coat_001_48;
    const char *Coat_002_48;
    const char *Coat_003_48;
    const char *Coat_004_48;
    const char *Coat_005_48;
    const char *Coat_006_48;
    const char *Coat_007_48;
    const char *Coat_008_48;
    const char *Coat_009_48;
    const char *Coat_010_48;
    const char *Coat_011_48;
    const char *Coat_012_48;
    const char *Coat_013_48;
    const char *Coat_014_48;
    const char *Coat_015_48;
    const char *Coat_016_48;
    const char *Coat_017_48;
    const char *Coat_018_48;

    const char *Up_12;
    const char *WiFi_24;
    const char *WlanC_16;
    const char *WlanD_16;
    const char *Wlan_16;
};

theme color = {"/c_AlarmClock_48.jpg",
               "/c_Alarm_16.jpg", "/c_Alarm_48.jpg",
               "/c_Arduino_24.jpg",
               "/c_Arm_24.jpg",
               "/c_Back_12.jpg",
               "/c_Bat000_16.jpg", "/c_Bat010_16.jpg", "/c_Bat025_16.jpg", "/c_Bat050_16.jpg", "/c_Bat075_16.jpg", "/c_Bat100_16.jpg", "/c_BatCharge_16.jpg",
               "/c_Bluetooth_24.jpg",
               "/c_Brightness000_48.jpg", "/c_Brightness010_48.jpg", "/c_Brightness020_48.jpg", "/c_Brightness030_48.jpg", "/c_Brightness040_48.jpg", "/c_Brightness050_48.jpg", "/c_Brightness060_48.jpg", "/c_Brightness070_48.jpg", "/c_Brightness080_48.jpg", "/c_Brightness090_48.jpg", "/c_Brightness100_48.jpg", "/c_Brightness_48.jpg",
               "/c_Calendar_48.jpg",
               "/c_Clock_48.jpg",
               "/ThemeBW_48.jpg", "/Theme_48.jpg", "/ThemeOutline_48.jpg",
               "/c_Day_01_48.jpg", "/c_Day_02_48.jpg", "/c_Day_03_48.jpg", "/c_Day_04_48.jpg", "/c_Day_05_48.jpg", "/c_Day_06_48.jpg", "/c_Day_07_48.jpg", "/c_Day_08_48.jpg", "/c_Day_09_48.jpg", "/c_Day_10_48.jpg", "/c_Day_11_48.jpg", "/c_Day_12_48.jpg", "/c_Day_13_48.jpg", "/c_Day_14_48.jpg", "/c_Day_15_48.jpg", "/c_Day_16_48.jpg", "/c_Day_17_48.jpg", "/c_Day_18_48.jpg", "/c_Day_19_48.jpg", "/c_Day_20_48.jpg", "/c_Day_21_48.jpg", "/c_Day_22_48.jpg", "/c_Day_23_48.jpg", "/c_Day_24_48.jpg", "/c_Day_25_48.jpg", "/c_Day_26_48.jpg", "/c_Day_27_48.jpg", "/c_Day_28_48.jpg", "/c_Day_29_48.jpg", "/c_Day_30_48.jpg", "/c_Day_31_48.jpg",
               "/c_Down_12.jpg",
               "/c_Forward_12.jpg",
               "/c_Giessen_170.jpg",
               "/c_Icons8_24.jpg",
               "/c_Info_48.jpg",
               "/c_LangDE_48.jpg", "/c_LangEN_48.jpg",
               "/c_LockC_16.jpg", "/c_LockC_48.jpg", "/c_LockO_16.jpg",
               "/c_LogoO_170.jpg",
               "/c_Menu_12.jpg",
               "/c_Month_Apr_48.jpg", "/c_Month_Aug_48.jpg", "/c_Month_Dec_48.jpg", "/c_Month_Feb_48.jpg", "/c_Month_Jan_48.jpg", "/c_Month_Jul_48.jpg", "/c_Month_Jun_48.jpg", "/c_Month_Mar_48.jpg", "/c_Month_May_48.jpg", "/c_Month_Nov_48.jpg", "/c_Month_Oct_48.jpg", "/c_Month_Sep_48.jpg",
               "/c_NichtOk_12.jpg", "/c_Ok_12.jpg",
               "/c_OriChange_48.jpg", "/c_OriHor_48.jpg", "/c_OriVert_48.jpg", "/c_Setting_48.jpg",
               "/c_Sig000_16.jpg", "/c_Sig025_16.jpg", "/c_Sig050_16.jpg", "/c_Sig075_16.jpg", "/c_Sig100_16.jpg", "/c_Sound000_16.jpg",
               "/c_Sound000_48.jpg", "/c_Sound025_16.jpg", "/c_Sound025_48.jpg", "/c_Sound050_16.jpg", "/c_Sound050_48.jpg", "/c_Sound075_16.jpg", "/c_Sound075_48.jpg", "/c_Sound100_16.jpg", "/c_Sound100_48.jpg",
               "/c_Speaker_48.jpg",
               "/c_Text_16.jpg",
               "/c_Text_48.jpg",
               "/c_Type_D000_12.jpg", "/c_Type_D000_24.jpg", "/c_Type_D000_48.jpg", "/c_Type_D000_64.jpg",
               "/c_Type_D001_12.jpg", "/c_Type_D001_24.jpg", "/c_Type_D001_48.jpg", "/c_Type_D001_64.jpg",
               "/c_Type_F001_12.jpg", "/c_Type_F001_24.jpg", "/c_Type_F001_48.jpg", "/c_Type_F001_64.jpg",
               "/c_Type_F002_12.jpg", "/c_Type_F002_24.jpg", "/c_Type_F002_48.jpg", "/c_Type_F002_64.jpg",
               "/c_Type_F003_12.jpg", "/c_Type_F003_24.jpg", "/c_Type_F003_48.jpg", "/c_Type_F003_64.jpg",
               "/c_Type_F004_12.jpg", "/c_Type_F004_24.jpg", "/c_Type_F004_48.jpg", "/c_Type_F004_64.jpg",
               "/c_Type_F005_12.jpg", "/c_Type_F005_24.jpg", "/c_Type_F005_48.jpg", "/c_Type_F005_64.jpg",
               "/c_Type_F006_12.jpg", "/c_Type_F006_24.jpg", "/c_Type_F006_48.jpg", "/c_Type_F006_64.jpg",
               "/c_Type_F007_12.jpg", "/c_Type_F007_24.jpg", "/c_Type_F007_48.jpg", "/c_Type_F007_64.jpg",
               "/c_Type_F008_12.jpg", "/c_Type_F008_24.jpg", "/c_Type_F008_48.jpg", "/c_Type_F008_64.jpg",
               "/c_Type_F009_12.jpg", "/c_Type_F009_24.jpg", "/c_Type_F009_48.jpg", "/c_Type_F009_64.jpg",
               "/c_Type_F010_12.jpg", "/c_Type_F010_24.jpg", "/c_Type_F010_48.jpg", "/c_Type_F010_64.jpg",
               "/c_Type_F011_12.jpg", "/c_Type_F011_24.jpg", "/c_Type_F011_48.jpg", "/c_Type_F011_64.jpg",
               "/c_Type_F012_12.jpg", "/c_Type_F012_24.jpg", "/c_Type_F012_48.jpg", "/c_Type_F012_64.jpg",
               "/c_Type_F013_12.jpg", "/c_Type_F013_24.jpg", "/c_Type_F013_48.jpg", "/c_Type_F013_64.jpg",
               "/c_Type_F014_12.jpg", "/c_Type_F014_24.jpg", "/c_Type_F014_48.jpg", "/c_Type_F014_64.jpg",
               "/c_Type_F015_12.jpg", "/c_Type_F015_24.jpg", "/c_Type_F015_48.jpg", "/c_Type_F015_64.jpg",
               "/c_Type_F016_12.jpg", "/c_Type_F016_24.jpg", "/c_Type_F016_48.jpg", "/c_Type_F016_64.jpg",
               "/c_Type_F017_12.jpg", "/c_Type_F017_24.jpg", "/c_Type_F017_48.jpg", "/c_Type_F017_64.jpg",
               "/c_Type_F018_12.jpg", "/c_Type_F018_24.jpg", "/c_Type_F018_48.jpg", "/c_Type_F018_64.jpg",
               "/c_Type_F019_12.jpg", "/c_Type_F019_24.jpg", "/c_Type_F019_48.jpg", "/c_Type_F019_64.jpg",
               "/c_Type_F020_12.jpg", "/c_Type_F020_24.jpg", "/c_Type_F020_48.jpg", "/c_Type_F020_64.jpg",
               "/c_Type_F021_12.jpg", "/c_Type_F021_24.jpg", "/c_Type_F021_48.jpg", "/c_Type_F021_64.jpg",
               "/c_Type_H001_12.jpg", "/c_Type_H001_24.jpg", "/c_Type_H001_48.jpg", "/c_Type_H001_64.jpg",
               "/c_Type_H002_12.jpg", "/c_Type_H002_24.jpg", "/c_Type_H002_48.jpg", "/c_Type_H002_64.jpg",
               "/c_Type_H003_12.jpg", "/c_Type_H003_24.jpg", "/c_Type_H003_48.jpg", "/c_Type_H003_64.jpg",
               "/c_Type_H004_12.jpg", "/c_Type_H004_24.jpg", "/c_Type_H004_48.jpg", "/c_Type_H004_64.jpg",
               "/c_Type_H005_12.jpg", "/c_Type_H005_24.jpg", "/c_Type_H005_48.jpg", "/c_Type_H005_64.jpg",
               "/c_Type_H006_12.jpg", "/c_Type_H006_24.jpg", "/c_Type_H006_48.jpg", "/c_Type_H006_64.jpg",
               "/c_Type_H007_12.jpg", "/c_Type_H007_24.jpg", "/c_Type_H007_48.jpg", "/c_Type_H007_64.jpg",
               "/c_Type_H008_12.jpg", "/c_Type_H008_24.jpg", "/c_Type_H008_48.jpg", "/c_Type_H008_64.jpg",
               "/c_Type_H009_12.jpg", "/c_Type_H009_24.jpg", "/c_Type_H009_48.jpg", "/c_Type_H009_64.jpg",
               "/c_Type_H010_12.jpg", "/c_Type_H010_24.jpg", "/c_Type_H010_48.jpg", "/c_Type_H010_64.jpg",
               "/c_Type_H011_12.jpg", "/c_Type_H011_24.jpg", "/c_Type_H011_48.jpg", "/c_Type_H011_64.jpg",
               "/c_Type_H012_12.jpg", "/c_Type_H012_24.jpg", "/c_Type_H012_48.jpg", "/c_Type_H012_64.jpg",
               "/c_Type_H013_12.jpg", "/c_Type_H013_24.jpg", "/c_Type_H013_48.jpg", "/c_Type_H013_64.jpg",
               "/c_Type_H014_12.jpg", "/c_Type_H014_24.jpg", "/c_Type_H014_48.jpg", "/c_Type_H014_64.jpg",
               "/c_Type_H015_12.jpg", "/c_Type_H015_24.jpg", "/c_Type_H015_48.jpg", "/c_Type_H015_64.jpg",
               "/c_Type_H016_12.jpg", "/c_Type_H016_24.jpg", "/c_Type_H016_48.jpg", "/c_Type_H016_64.jpg",
               "/c_Type_H017_12.jpg", "/c_Type_H017_24.jpg", "/c_Type_H017_48.jpg", "/c_Type_H017_64.jpg",
               "/c_Type_H018_12.jpg", "/c_Type_H018_24.jpg", "/c_Type_H018_48.jpg", "/c_Type_H018_64.jpg",
               "/c_Type_H019_12.jpg", "/c_Type_H019_24.jpg", "/c_Type_H019_48.jpg", "/c_Type_H019_64.jpg",
               "/c_Type_H020_12.jpg", "/c_Type_H020_24.jpg", "/c_Type_H020_48.jpg", "/c_Type_H020_64.jpg",
               "/c_Type_H021_12.jpg", "/c_Type_H021_24.jpg", "/c_Type_H021_48.jpg", "/c_Type_H021_64.jpg",
               "/c_Type_H022_12.jpg", "/c_Type_H022_24.jpg", "/c_Type_H022_48.jpg", "/c_Type_H022_64.jpg",
               "/c_Type_P001_12.jpg", "/c_Type_P001_24.jpg", "/c_Type_P001_48.jpg", "/c_Type_P001_64.jpg",
               "/c_Type_P002_12.jpg", "/c_Type_P002_24.jpg", "/c_Type_P002_48.jpg", "/c_Type_P002_64.jpg",
               "/c_Type_P003_12.jpg", "/c_Type_P003_24.jpg", "/c_Type_P003_48.jpg", "/c_Type_P003_64.jpg",
               "/c_Type_P004_12.jpg", "/c_Type_P004_24.jpg", "/c_Type_P004_48.jpg", "/c_Type_P004_64.jpg",
               "/c_Type_P005_12.jpg", "/c_Type_P005_24.jpg", "/c_Type_P005_48.jpg", "/c_Type_P005_64.jpg",
               "/c_Type_P006_12.jpg", "/c_Type_P006_24.jpg", "/c_Type_P006_48.jpg", "/c_Type_P006_64.jpg",
               "/c_Type_R001_12.jpg", "/c_Type_R001_24.jpg", "/c_Type_R001_48.jpg", "/c_Type_R001_64.jpg",
               "/c_Type_R002_12.jpg", "/c_Type_R002_24.jpg", "/c_Type_R002_48.jpg", "/c_Type_R002_64.jpg",
               "/c_Type_R003_12.jpg", "/c_Type_R003_24.jpg", "/c_Type_R003_48.jpg", "/c_Type_R003_64.jpg",
               "/c_Type_R004_12.jpg", "/c_Type_R004_24.jpg", "/c_Type_R004_48.jpg", "/c_Type_R004_64.jpg",
               "/c_Type_R005_12.jpg", "/c_Type_R005_24.jpg", "/c_Type_R005_48.jpg", "/c_Type_R005_64.jpg",
               "/c_Type_R006_12.jpg", "/c_Type_R006_24.jpg", "/c_Type_R006_48.jpg", "/c_Type_R006_64.jpg",
               "/c_Type_R007_12.jpg", "/c_Type_R007_24.jpg", "/c_Type_R007_48.jpg", "/c_Type_R007_64.jpg",
               "/c_Type_R008_12.jpg", "/c_Type_R008_24.jpg", "/c_Type_R008_48.jpg", "/c_Type_R008_64.jpg",
               "/c_Type_T001_12.jpg", "/c_Type_T001_24.jpg", "/c_Type_T001_48.jpg", "/c_Type_T001_64.jpg",
               "/c_Type_T003_12.jpg", "/c_Type_T003_24.jpg", "/c_Type_T003_48.jpg", "/c_Type_T003_64.jpg",
               "/c_Type_T004_12.jpg", "/c_Type_T004_24.jpg", "/c_Type_T004_48.jpg", "/c_Type_T004_64.jpg",
               "/c_Type_T005_12.jpg", "/c_Type_T005_24.jpg", "/c_Type_T005_48.jpg", "/c_Type_T005_64.jpg",
               "/c_Type_T006_12.jpg", "/c_Type_T006_24.jpg", "/c_Type_T006_48.jpg", "/c_Type_T006_64.jpg",
               "/c_Type_T007_12.jpg", "/c_Type_T007_24.jpg", "/c_Type_T007_48.jpg", "/c_Type_T007_64.jpg",
               "/c_Type_T008_12.jpg", "/c_Type_T008_24.jpg", "/c_Type_T008_48.jpg", "/c_Type_T008_64.jpg",
               "/c_Type_T009_12.jpg", "/c_Type_T009_24.jpg", "/c_Type_T009_48.jpg", "/c_Type_T009_64.jpg",
               "/c_Type_T010_12.jpg", "/c_Type_T010_24.jpg", "/c_Type_T010_48.jpg", "/c_Type_T010_64.jpg",
               "/c_Type_T011_12.jpg", "/c_Type_T011_24.jpg", "/c_Type_T011_48.jpg", "/c_Type_T011_64.jpg",
               "/c_Type_T012_12.jpg", "/c_Type_T012_24.jpg", "/c_Type_T012_48.jpg", "/c_Type_T012_64.jpg",
               "/c_Type_T013_12.jpg", "/c_Type_T013_24.jpg", "/c_Type_T013_48.jpg", "/c_Type_T013_64.jpg",
               "/c_Type_T014_12.jpg", "/c_Type_T014_24.jpg", "/c_Type_T014_48.jpg", "/c_Type_T014_64.jpg",
               "/c_Type_T015_12.jpg", "/c_Type_T015_24.jpg", "/c_Type_T015_48.jpg", "/c_Type_T015_64.jpg",
               "/c_Type_T016_12.jpg", "/c_Type_T016_24.jpg", "/c_Type_T016_48.jpg", "/c_Type_T016_64.jpg",
               "/c_Type_T017_12.jpg", "/c_Type_T017_24.jpg", "/c_Type_T017_48.jpg", "/c_Type_T017_64.jpg",
               "/c_Type_T018_12.jpg", "/c_Type_T018_24.jpg", "/c_Type_T018_48.jpg", "/c_Type_T018_64.jpg",
               "/c_Type_T019_12.jpg", "/c_Type_T019_24.jpg", "/c_Type_T019_48.jpg", "/c_Type_T019_64.jpg",
               "/c_Type_T020_12.jpg", "/c_Type_T020_24.jpg", "/c_Type_T020_48.jpg", "/c_Type_T020_64.jpg",
               "/c_Type_T021_12.jpg", "/c_Type_T021_24.jpg", "/c_Type_T021_48.jpg", "/c_Type_T021_64.jpg",
               "/c_Type_U001_12.jpg", "/c_Type_U001_24.jpg", "/c_Type_U001_48.jpg", "/c_Type_U001_64.jpg",
               "/c_Type_U002_12.jpg", "/c_Type_U002_24.jpg", "/c_Type_U002_48.jpg", "/c_Type_U002_64.jpg",
               "/c_Coat_000_48.jpg", "/c_Coat_001_48.jpg", "/c_Coat_002_48.jpg", "/c_Coat_003_48.jpg",
               "/c_Coat_004_48.jpg", "/c_Coat_005_48.jpg", "/c_Coat_006_48.jpg", "/c_Coat_007_48.jpg",
               "/c_Coat_008_48.jpg", "/c_Coat_009_48.jpg", "/c_Coat_010_48.jpg", "/c_Coat_011_48.jpg",
               "/c_Coat_012_48.jpg", "/c_Coat_013_48.jpg", "/c_Coat_014_48.jpg", "/c_Coat_015_48.jpg",
               "/c_Coat_016_48.jpg", "/c_Coat_017_48.jpg", "/c_Coat_018_48.jpg",
               "/c_Up_12.jpg",
               "/c_WiFi_24.jpg",
               "/c_WlanC_16.jpg", "/c_WlanD_16.jpg", "/c_Wlan_16.jpg"};

theme blackwhite = {"/b_AlarmClock_48.jpg",
                    "/b_Alarm_16.jpg", "/b_Alarm_48.jpg",
                    "/b_Arduino_24.jpg",
                    "/b_Arm_24.jpg",
                    "/b_Back_12.jpg",
                    "/b_Bat000_16.jpg", "/b_Bat010_16.jpg", "/b_Bat025_16.jpg", "/b_Bat050_16.jpg", "/b_Bat075_16.jpg", "/b_Bat100_16.jpg", "/b_BatCharge_16.jpg",
                    "/b_Bluetooth_24.jpg",
                    "/b_Brightness000_48.jpg", "/b_Brightness010_48.jpg", "/b_Brightness020_48.jpg", "/b_Brightness030_48.jpg", "/b_Brightness040_48.jpg", "/b_Brightness050_48.jpg", "/b_Brightness060_48.jpg", "/b_Brightness070_48.jpg", "/b_Brightness080_48.jpg", "/b_Brightness090_48.jpg", "/b_Brightness100_48.jpg", "/b_Brightness_48.jpg",
                    "/b_Calendar_48.jpg",
                    "/b_Clock_48.jpg",
                    "/ThemeBW_48.jpg", "/Theme_48.jpg", "/ThemeOutline_48.jpg",
                    "/b_Day_01_48.jpg", "/b_Day_02_48.jpg", "/b_Day_03_48.jpg", "/b_Day_04_48.jpg", "/b_Day_05_48.jpg", "/b_Day_06_48.jpg", "/b_Day_07_48.jpg", "/b_Day_08_48.jpg", "/b_Day_09_48.jpg", "/b_Day_10_48.jpg", "/b_Day_11_48.jpg", "/b_Day_12_48.jpg", "/b_Day_13_48.jpg", "/b_Day_14_48.jpg", "/b_Day_15_48.jpg", "/b_Day_16_48.jpg", "/b_Day_17_48.jpg", "/b_Day_18_48.jpg", "/b_Day_19_48.jpg", "/b_Day_20_48.jpg", "/b_Day_21_48.jpg", "/b_Day_22_48.jpg", "/b_Day_23_48.jpg", "/b_Day_24_48.jpg", "/b_Day_25_48.jpg", "/b_Day_26_48.jpg", "/b_Day_27_48.jpg", "/b_Day_28_48.jpg", "/b_Day_29_48.jpg", "/b_Day_30_48.jpg", "/b_Day_31_48.jpg",
                    "/b_Down_12.jpg",
                    "/b_Forward_12.jpg",
                    "/b_Giessen_170.jpg",
                    "/b_Icons8_24.jpg",
                    "/b_Info_48.jpg",
                    "/b_LangDE_48.jpg", "/b_LangEN_48.jpg",
                    "/b_LockC_16.jpg", "/b_LockC_48.jpg", "/b_LockO_16.jpg",
                    "/b_LogoO_170.jpg",
                    "/b_Menu_12.jpg",
                    "/b_Month_Apr_48.jpg", "/b_Month_Aug_48.jpg", "/b_Month_Dec_48.jpg", "/b_Month_Feb_48.jpg", "/b_Month_Jan_48.jpg", "/b_Month_Jul_48.jpg", "/b_Month_Jun_48.jpg", "/b_Month_Mar_48.jpg", "/b_Month_May_48.jpg", "/b_Month_Nov_48.jpg", "/b_Month_Oct_48.jpg", "/b_Month_Sep_48.jpg",
                    "/b_NichtOk_12.jpg", "/b_Ok_12.jpg",
                    "/b_OriChange_48.jpg", "/b_OriHor_48.jpg", "/b_OriVert_48.jpg", "/b_Setting_48.jpg",
                    "/b_Sig000_16.jpg", "/b_Sig025_16.jpg", "/b_Sig050_16.jpg", "/b_Sig075_16.jpg", "/b_Sig100_16.jpg", "/b_Sound000_16.jpg",
                    "/b_Sound000_48.jpg", "/b_Sound025_16.jpg", "/b_Sound025_48.jpg", "/b_Sound050_16.jpg", "/b_Sound050_48.jpg", "/b_Sound075_16.jpg", "/b_Sound075_48.jpg", "/b_Sound100_16.jpg", "/b_Sound100_48.jpg",
                    "/b_Speaker_48.jpg",
                    "/b_Text_16.jpg",
                    "/b_Text_48.jpg",
                    "/b_Type_D000_12.jpg", "/b_Type_D000_24.jpg", "/b_Type_D000_48.jpg", "/b_Type_D000_64.jpg",
                    "/b_Type_D001_12.jpg", "/b_Type_D001_24.jpg", "/b_Type_D001_48.jpg", "/b_Type_D001_64.jpg",
                    "/b_Type_F001_12.jpg", "/b_Type_F001_24.jpg", "/b_Type_F001_48.jpg", "/b_Type_F001_64.jpg",
                    "/b_Type_F002_12.jpg", "/b_Type_F002_24.jpg", "/b_Type_F002_48.jpg", "/b_Type_F002_64.jpg",
                    "/b_Type_F003_12.jpg", "/b_Type_F003_24.jpg", "/b_Type_F003_48.jpg", "/b_Type_F003_64.jpg",
                    "/b_Type_F004_12.jpg", "/b_Type_F004_24.jpg", "/b_Type_F004_48.jpg", "/b_Type_F004_64.jpg",
                    "/b_Type_F005_12.jpg", "/b_Type_F005_24.jpg", "/b_Type_F005_48.jpg", "/b_Type_F005_64.jpg",
                    "/b_Type_F006_12.jpg", "/b_Type_F006_24.jpg", "/b_Type_F006_48.jpg", "/b_Type_F006_64.jpg",
                    "/b_Type_F007_12.jpg", "/b_Type_F007_24.jpg", "/b_Type_F007_48.jpg", "/b_Type_F007_64.jpg",
                    "/b_Type_F008_12.jpg", "/b_Type_F008_24.jpg", "/b_Type_F008_48.jpg", "/b_Type_F008_64.jpg",
                    "/b_Type_F009_12.jpg", "/b_Type_F009_24.jpg", "/b_Type_F009_48.jpg", "/b_Type_F009_64.jpg",
                    "/b_Type_F010_12.jpg", "/b_Type_F010_24.jpg", "/b_Type_F010_48.jpg", "/b_Type_F010_64.jpg",
                    "/b_Type_F011_12.jpg", "/b_Type_F011_24.jpg", "/b_Type_F011_48.jpg", "/b_Type_F011_64.jpg",
                    "/b_Type_F012_12.jpg", "/b_Type_F012_24.jpg", "/b_Type_F012_48.jpg", "/b_Type_F012_64.jpg",
                    "/b_Type_F013_12.jpg", "/b_Type_F013_24.jpg", "/b_Type_F013_48.jpg", "/b_Type_F013_64.jpg",
                    "/b_Type_F014_12.jpg", "/b_Type_F014_24.jpg", "/b_Type_F014_48.jpg", "/b_Type_F014_64.jpg",
                    "/b_Type_F015_12.jpg", "/b_Type_F015_24.jpg", "/b_Type_F015_48.jpg", "/b_Type_F015_64.jpg",
                    "/b_Type_F016_12.jpg", "/b_Type_F016_24.jpg", "/b_Type_F016_48.jpg", "/b_Type_F016_64.jpg",
                    "/b_Type_F017_12.jpg", "/b_Type_F017_24.jpg", "/b_Type_F017_48.jpg", "/b_Type_F017_64.jpg",
                    "/b_Type_F018_12.jpg", "/b_Type_F018_24.jpg", "/b_Type_F018_48.jpg", "/b_Type_F018_64.jpg",
                    "/b_Type_F019_12.jpg", "/b_Type_F019_24.jpg", "/b_Type_F019_48.jpg", "/b_Type_F019_64.jpg",
                    "/b_Type_F020_12.jpg", "/b_Type_F020_24.jpg", "/b_Type_F020_48.jpg", "/b_Type_F020_64.jpg",
                    "/b_Type_F021_12.jpg", "/b_Type_F021_24.jpg", "/b_Type_F021_48.jpg", "/b_Type_F021_64.jpg",
                    "/b_Type_H001_12.jpg", "/b_Type_H001_24.jpg", "/b_Type_H001_48.jpg", "/b_Type_H001_64.jpg",
                    "/b_Type_H002_12.jpg", "/b_Type_H002_24.jpg", "/b_Type_H002_48.jpg", "/b_Type_H002_64.jpg",
                    "/b_Type_H003_12.jpg", "/b_Type_H003_24.jpg", "/b_Type_H003_48.jpg", "/b_Type_H003_64.jpg",
                    "/b_Type_H004_12.jpg", "/b_Type_H004_24.jpg", "/b_Type_H004_48.jpg", "/b_Type_H004_64.jpg",
                    "/b_Type_H005_12.jpg", "/b_Type_H005_24.jpg", "/b_Type_H005_48.jpg", "/b_Type_H005_64.jpg",
                    "/b_Type_H006_12.jpg", "/b_Type_H006_24.jpg", "/b_Type_H006_48.jpg", "/b_Type_H006_64.jpg",
                    "/b_Type_H007_12.jpg", "/b_Type_H007_24.jpg", "/b_Type_H007_48.jpg", "/b_Type_H007_64.jpg",
                    "/b_Type_H008_12.jpg", "/b_Type_H008_24.jpg", "/b_Type_H008_48.jpg", "/b_Type_H008_64.jpg",
                    "/b_Type_H009_12.jpg", "/b_Type_H009_24.jpg", "/b_Type_H009_48.jpg", "/b_Type_H009_64.jpg",
                    "/b_Type_H010_12.jpg", "/b_Type_H010_24.jpg", "/b_Type_H010_48.jpg", "/b_Type_H010_64.jpg",
                    "/b_Type_H011_12.jpg", "/b_Type_H011_24.jpg", "/b_Type_H011_48.jpg", "/b_Type_H011_64.jpg",
                    "/b_Type_H012_12.jpg", "/b_Type_H012_24.jpg", "/b_Type_H012_48.jpg", "/b_Type_H012_64.jpg",
                    "/b_Type_H013_12.jpg", "/b_Type_H013_24.jpg", "/b_Type_H013_48.jpg", "/b_Type_H013_64.jpg",
                    "/b_Type_H014_12.jpg", "/b_Type_H014_24.jpg", "/b_Type_H014_48.jpg", "/b_Type_H014_64.jpg",
                    "/b_Type_H015_12.jpg", "/b_Type_H015_24.jpg", "/b_Type_H015_48.jpg", "/b_Type_H015_64.jpg",
                    "/b_Type_H016_12.jpg", "/b_Type_H016_24.jpg", "/b_Type_H016_48.jpg", "/b_Type_H016_64.jpg",
                    "/b_Type_H017_12.jpg", "/b_Type_H017_24.jpg", "/b_Type_H017_48.jpg", "/b_Type_H017_64.jpg",
                    "/b_Type_H018_12.jpg", "/b_Type_H018_24.jpg", "/b_Type_H018_48.jpg", "/b_Type_H018_64.jpg",
                    "/b_Type_H019_12.jpg", "/b_Type_H019_24.jpg", "/b_Type_H019_48.jpg", "/b_Type_H019_64.jpg",
                    "/b_Type_H020_12.jpg", "/b_Type_H020_24.jpg", "/b_Type_H020_48.jpg", "/b_Type_H020_64.jpg",
                    "/b_Type_H021_12.jpg", "/b_Type_H021_24.jpg", "/b_Type_H021_48.jpg", "/b_Type_H021_64.jpg",
                    "/b_Type_H022_12.jpg", "/b_Type_H022_24.jpg", "/b_Type_H022_48.jpg", "/b_Type_H022_64.jpg",
                    "/b_Type_P001_12.jpg", "/b_Type_P001_24.jpg", "/b_Type_P001_48.jpg", "/b_Type_P001_64.jpg",
                    "/b_Type_P002_12.jpg", "/b_Type_P002_24.jpg", "/b_Type_P002_48.jpg", "/b_Type_P002_64.jpg",
                    "/b_Type_P003_12.jpg", "/b_Type_P003_24.jpg", "/b_Type_P003_48.jpg", "/b_Type_P003_64.jpg",
                    "/b_Type_P004_12.jpg", "/b_Type_P004_24.jpg", "/b_Type_P004_48.jpg", "/b_Type_P004_64.jpg",
                    "/b_Type_P005_12.jpg", "/b_Type_P005_24.jpg", "/b_Type_P005_48.jpg", "/b_Type_P005_64.jpg",
                    "/b_Type_P006_12.jpg", "/b_Type_P006_24.jpg", "/b_Type_P006_48.jpg", "/b_Type_P006_64.jpg",
                    "/b_Type_R001_12.jpg", "/b_Type_R001_24.jpg", "/b_Type_R001_48.jpg", "/b_Type_R001_64.jpg",
                    "/b_Type_R002_12.jpg", "/b_Type_R002_24.jpg", "/b_Type_R002_48.jpg", "/b_Type_R002_64.jpg",
                    "/b_Type_R003_12.jpg", "/b_Type_R003_24.jpg", "/b_Type_R003_48.jpg", "/b_Type_R003_64.jpg",
                    "/b_Type_R004_12.jpg", "/b_Type_R004_24.jpg", "/b_Type_R004_48.jpg", "/b_Type_R004_64.jpg",
                    "/b_Type_R005_12.jpg", "/b_Type_R005_24.jpg", "/b_Type_R005_48.jpg", "/b_Type_R005_64.jpg",
                    "/b_Type_R006_12.jpg", "/b_Type_R006_24.jpg", "/b_Type_R006_48.jpg", "/b_Type_R006_64.jpg",
                    "/b_Type_R007_12.jpg", "/b_Type_R007_24.jpg", "/b_Type_R007_48.jpg", "/b_Type_R007_64.jpg",
                    "/b_Type_R008_12.jpg", "/b_Type_R008_24.jpg", "/b_Type_R008_48.jpg", "/b_Type_R008_64.jpg",
                    "/b_Type_T001_12.jpg", "/b_Type_T001_24.jpg", "/b_Type_T001_48.jpg", "/b_Type_T001_64.jpg",
                    "/b_Type_T003_12.jpg", "/b_Type_T003_24.jpg", "/b_Type_T003_48.jpg", "/b_Type_T003_64.jpg",
                    "/b_Type_T004_12.jpg", "/b_Type_T004_24.jpg", "/b_Type_T004_48.jpg", "/b_Type_T004_64.jpg",
                    "/b_Type_T005_12.jpg", "/b_Type_T005_24.jpg", "/b_Type_T005_48.jpg", "/b_Type_T005_64.jpg",
                    "/b_Type_T006_12.jpg", "/b_Type_T006_24.jpg", "/b_Type_T006_48.jpg", "/b_Type_T006_64.jpg",
                    "/b_Type_T007_12.jpg", "/b_Type_T007_24.jpg", "/b_Type_T007_48.jpg", "/b_Type_T007_64.jpg",
                    "/b_Type_T008_12.jpg", "/b_Type_T008_24.jpg", "/b_Type_T008_48.jpg", "/b_Type_T008_64.jpg",
                    "/b_Type_T009_12.jpg", "/b_Type_T009_24.jpg", "/b_Type_T009_48.jpg", "/b_Type_T009_64.jpg",
                    "/b_Type_T010_12.jpg", "/b_Type_T010_24.jpg", "/b_Type_T010_48.jpg", "/b_Type_T010_64.jpg",
                    "/b_Type_T011_12.jpg", "/b_Type_T011_24.jpg", "/b_Type_T011_48.jpg", "/b_Type_T011_64.jpg",
                    "/b_Type_T012_12.jpg", "/b_Type_T012_24.jpg", "/b_Type_T012_48.jpg", "/b_Type_T012_64.jpg",
                    "/b_Type_T013_12.jpg", "/b_Type_T013_24.jpg", "/b_Type_T013_48.jpg", "/b_Type_T013_64.jpg",
                    "/b_Type_T014_12.jpg", "/b_Type_T014_24.jpg", "/b_Type_T014_48.jpg", "/b_Type_T014_64.jpg",
                    "/b_Type_T015_12.jpg", "/b_Type_T015_24.jpg", "/b_Type_T015_48.jpg", "/b_Type_T015_64.jpg",
                    "/b_Type_T016_12.jpg", "/b_Type_T016_24.jpg", "/b_Type_T016_48.jpg", "/b_Type_T016_64.jpg",
                    "/b_Type_T017_12.jpg", "/b_Type_T017_24.jpg", "/b_Type_T017_48.jpg", "/b_Type_T017_64.jpg",
                    "/b_Type_T018_12.jpg", "/b_Type_T018_24.jpg", "/b_Type_T018_48.jpg", "/b_Type_T018_64.jpg",
                    "/b_Type_T019_12.jpg", "/b_Type_T019_24.jpg", "/b_Type_T019_48.jpg", "/b_Type_T019_64.jpg",
                    "/b_Type_T020_12.jpg", "/b_Type_T020_24.jpg", "/b_Type_T020_48.jpg", "/b_Type_T020_64.jpg",
                    "/b_Type_T021_12.jpg", "/b_Type_T021_24.jpg", "/b_Type_T021_48.jpg", "/b_Type_T021_64.jpg",
                    "/b_Type_U001_12.jpg", "/b_Type_U001_24.jpg", "/b_Type_U001_48.jpg", "/b_Type_U001_64.jpg",
                    "/b_Type_U002_12.jpg", "/b_Type_U002_24.jpg", "/b_Type_U002_48.jpg", "/b_Type_U002_64.jpg",
                    "/b_Coat_000_48.jpg", "/b_Coat_001_48.jpg", "/b_Coat_002_48.jpg", "/b_Coat_003_48.jpg",
                    "/b_Coat_004_48.jpg", "/b_Coat_005_48.jpg", "/b_Coat_006_48.jpg", "/b_Coat_007_48.jpg",
                    "/b_Coat_008_48.jpg", "/b_Coat_009_48.jpg", "/b_Coat_010_48.jpg", "/b_Coat_011_48.jpg",
                    "/b_Coat_012_48.jpg", "/b_Coat_013_48.jpg", "/b_Coat_014_48.jpg", "/b_Coat_015_48.jpg",
                    "/b_Coat_016_48.jpg", "/b_Coat_017_48.jpg", "/b_Coat_018_48.jpg",
                    "/b_Up_12.jpg",
                    "/b_WiFi_24.jpg",
                    "/b_WlanC_16.jpg", "/b_WlanD_16.jpg", "/b_Wlan_16.jpg"};

theme outline = {"/o_AlarmClock_48.jpg",
                 "/o_Alarm_16.jpg", "/o_Alarm_48.jpg",
                 "/o_Arduino_24.jpg",
                 "/b_Arm_24.jpg",
                 "/o_Back_12.jpg",
                 "/o_Bat000_16.jpg", "/o_Bat010_16.jpg", "/o_Bat025_16.jpg", "/o_Bat050_16.jpg", "/o_Bat075_16.jpg", "/o_Bat100_16.jpg", "/o_BatCharge_16.jpg",
                 "/o_Bluetooth_24.jpg",
                 "/o_Brightness000_48.jpg", "/o_Brightness010_48.jpg", "/o_Brightness020_48.jpg", "/o_Brightness030_48.jpg", "/o_Brightness040_48.jpg", "/o_Brightness050_48.jpg", "/o_Brightness060_48.jpg", "/o_Brightness070_48.jpg", "/o_Brightness080_48.jpg", "/o_Brightness090_48.jpg", "/o_Brightness100_48.jpg", "/o_Brightness_48.jpg",
                 "/o_Calendar_48.jpg",
                 "/o_Clock_48.jpg",
                 "/ThemeBW_48.jpg", "/Theme_48.jpg", "/ThemeOutline_48.jpg",
                 "/o_Day_01_48.jpg", "/o_Day_02_48.jpg", "/o_Day_03_48.jpg", "/o_Day_04_48.jpg", "/o_Day_05_48.jpg", "/o_Day_06_48.jpg", "/o_Day_07_48.jpg", "/o_Day_08_48.jpg", "/o_Day_09_48.jpg", "/o_Day_10_48.jpg", "/o_Day_11_48.jpg", "/o_Day_12_48.jpg", "/o_Day_13_48.jpg", "/o_Day_14_48.jpg", "/o_Day_15_48.jpg", "/o_Day_16_48.jpg", "/o_Day_17_48.jpg", "/o_Day_18_48.jpg", "/o_Day_19_48.jpg", "/o_Day_20_48.jpg", "/o_Day_21_48.jpg", "/o_Day_22_48.jpg", "/o_Day_23_48.jpg", "/o_Day_24_48.jpg", "/o_Day_25_48.jpg", "/o_Day_26_48.jpg", "/o_Day_27_48.jpg", "/o_Day_28_48.jpg", "/o_Day_29_48.jpg", "/o_Day_30_48.jpg", "/o_Day_31_48.jpg",
                 "/o_Down_12.jpg",
                 "/o_Forward_12.jpg",
                 "/b_Giessen_170.jpg",
                 "/o_Icons8_24.jpg",
                 "/o_Info_48.jpg",
                 "/b_LangDE_48.jpg", "/b_LangEN_48.jpg",
                 "/b_LockC_16.jpg", "/b_LockC_48.jpg", "/b_LockO_16.jpg",
                 "/b_LogoO_170.jpg",
                 "/o_Menu_12.jpg",
                 "/o_Month_Apr_48.jpg", "/o_Month_Aug_48.jpg", "/o_Month_Dec_48.jpg", "/o_Month_Feb_48.jpg", "/o_Month_Jan_48.jpg", "/o_Month_Jul_48.jpg", "/o_Month_Jun_48.jpg", "/o_Month_Mar_48.jpg", "/o_Month_May_48.jpg", "/o_Month_Nov_48.jpg", "/o_Month_Oct_48.jpg", "/o_Month_Sep_48.jpg",
                 "/o_NichtOk_12.jpg", "/o_Ok_12.jpg",
                 "/o_OriChange_48.jpg", "/o_OriHor_48.jpg", "/o_OriVert_48.jpg", "/o_Setting_48.jpg",
                 "/o_Sig000_16.jpg", "/o_Sig025_16.jpg", "/o_Sig050_16.jpg", "/o_Sig075_16.jpg", "/o_Sig100_16.jpg", "/o_Sound000_16.jpg",
                 "/o_Sound000_48.jpg", "/o_Sound025_16.jpg", "/o_Sound025_48.jpg", "/o_Sound050_16.jpg", "/o_Sound050_48.jpg", "/o_Sound075_16.jpg", "/o_Sound075_48.jpg", "/o_Sound100_16.jpg", "/o_Sound100_48.jpg",
                 "/o_Speaker_48.jpg",
                 "/o_Text_16.jpg",
                 "/o_Text_48.jpg",
                 "/o_Type_D000_12.jpg", "/o_Type_D000_24.jpg", "/o_Type_D000_48.jpg", "/o_Type_D000_64.jpg",
                 "/o_Type_D001_12.jpg", "/o_Type_D001_24.jpg", "/o_Type_D001_48.jpg", "/o_Type_D001_64.jpg",
                 "/o_Type_F001_12.jpg", "/o_Type_F001_24.jpg", "/o_Type_F001_48.jpg", "/o_Type_F001_64.jpg",
                 "/o_Type_F002_12.jpg", "/o_Type_F002_24.jpg", "/o_Type_F002_48.jpg", "/o_Type_F002_64.jpg",
                 "/o_Type_F003_12.jpg", "/o_Type_F003_24.jpg", "/o_Type_F003_48.jpg", "/o_Type_F003_64.jpg",
                 "/o_Type_F004_12.jpg", "/o_Type_F004_24.jpg", "/o_Type_F004_48.jpg", "/o_Type_F004_64.jpg",
                 "/o_Type_F005_12.jpg", "/o_Type_F005_24.jpg", "/o_Type_F005_48.jpg", "/o_Type_F005_64.jpg",
                 "/o_Type_F006_12.jpg", "/o_Type_F006_24.jpg", "/o_Type_F006_48.jpg", "/o_Type_F006_64.jpg",
                 "/o_Type_F007_12.jpg", "/o_Type_F007_24.jpg", "/o_Type_F007_48.jpg", "/o_Type_F007_64.jpg",
                 "/o_Type_F008_12.jpg", "/o_Type_F008_24.jpg", "/o_Type_F008_48.jpg", "/o_Type_F008_64.jpg",
                 "/o_Type_F009_12.jpg", "/o_Type_F009_24.jpg", "/o_Type_F009_48.jpg", "/o_Type_F009_64.jpg",
                 "/o_Type_F010_12.jpg", "/o_Type_F010_24.jpg", "/o_Type_F010_48.jpg", "/o_Type_F010_64.jpg",
                 "/o_Type_F011_12.jpg", "/o_Type_F011_24.jpg", "/o_Type_F011_48.jpg", "/o_Type_F011_64.jpg",
                 "/o_Type_F012_12.jpg", "/o_Type_F012_24.jpg", "/o_Type_F012_48.jpg", "/o_Type_F012_64.jpg",
                 "/o_Type_F013_12.jpg", "/o_Type_F013_24.jpg", "/o_Type_F013_48.jpg", "/o_Type_F013_64.jpg",
                 "/o_Type_F014_12.jpg", "/o_Type_F014_24.jpg", "/o_Type_F014_48.jpg", "/o_Type_F014_64.jpg",
                 "/o_Type_F015_12.jpg", "/o_Type_F015_24.jpg", "/o_Type_F015_48.jpg", "/o_Type_F015_64.jpg",
                 "/o_Type_F016_12.jpg", "/o_Type_F016_24.jpg", "/o_Type_F016_48.jpg", "/o_Type_F016_64.jpg",
                 "/o_Type_F017_12.jpg", "/o_Type_F017_24.jpg", "/o_Type_F017_48.jpg", "/o_Type_F017_64.jpg",
                 "/o_Type_F018_12.jpg", "/o_Type_F018_24.jpg", "/o_Type_F018_48.jpg", "/o_Type_F018_64.jpg",
                 "/o_Type_F019_12.jpg", "/o_Type_F019_24.jpg", "/o_Type_F019_48.jpg", "/o_Type_F019_64.jpg",
                 "/o_Type_F020_12.jpg", "/o_Type_F020_24.jpg", "/o_Type_F020_48.jpg", "/o_Type_F020_64.jpg",
                 "/o_Type_F021_12.jpg", "/o_Type_F021_24.jpg", "/o_Type_F021_48.jpg", "/o_Type_F021_64.jpg",
                 "/o_Type_H001_12.jpg", "/o_Type_H001_24.jpg", "/o_Type_H001_48.jpg", "/o_Type_H001_64.jpg",
                 "/o_Type_H002_12.jpg", "/o_Type_H002_24.jpg", "/o_Type_H002_48.jpg", "/o_Type_H002_64.jpg",
                 "/o_Type_H003_12.jpg", "/o_Type_H003_24.jpg", "/o_Type_H003_48.jpg", "/o_Type_H003_64.jpg",
                 "/o_Type_H004_12.jpg", "/o_Type_H004_24.jpg", "/o_Type_H004_48.jpg", "/o_Type_H004_64.jpg",
                 "/o_Type_H005_12.jpg", "/o_Type_H005_24.jpg", "/o_Type_H005_48.jpg", "/o_Type_H005_64.jpg",
                 "/o_Type_H006_12.jpg", "/o_Type_H006_24.jpg", "/o_Type_H006_48.jpg", "/o_Type_H006_64.jpg",
                 "/o_Type_H007_12.jpg", "/o_Type_H007_24.jpg", "/o_Type_H007_48.jpg", "/o_Type_H007_64.jpg",
                 "/o_Type_H008_12.jpg", "/o_Type_H008_24.jpg", "/o_Type_H008_48.jpg", "/o_Type_H008_64.jpg",
                 "/o_Type_H009_12.jpg", "/o_Type_H009_24.jpg", "/o_Type_H009_48.jpg", "/o_Type_H009_64.jpg",
                 "/o_Type_H010_12.jpg", "/o_Type_H010_24.jpg", "/o_Type_H010_48.jpg", "/o_Type_H010_64.jpg",
                 "/o_Type_H011_12.jpg", "/o_Type_H011_24.jpg", "/o_Type_H011_48.jpg", "/o_Type_H011_64.jpg",
                 "/o_Type_H012_12.jpg", "/o_Type_H012_24.jpg", "/o_Type_H012_48.jpg", "/o_Type_H012_64.jpg",
                 "/o_Type_H013_12.jpg", "/o_Type_H013_24.jpg", "/o_Type_H013_48.jpg", "/o_Type_H013_64.jpg",
                 "/o_Type_H014_12.jpg", "/o_Type_H014_24.jpg", "/o_Type_H014_48.jpg", "/o_Type_H014_64.jpg",
                 "/o_Type_H015_12.jpg", "/o_Type_H015_24.jpg", "/o_Type_H015_48.jpg", "/o_Type_H015_64.jpg",
                 "/o_Type_H016_12.jpg", "/o_Type_H016_24.jpg", "/o_Type_H016_48.jpg", "/o_Type_H016_64.jpg",
                 "/o_Type_H017_12.jpg", "/o_Type_H017_24.jpg", "/o_Type_H017_48.jpg", "/o_Type_H017_64.jpg",
                 "/o_Type_H018_12.jpg", "/o_Type_H018_24.jpg", "/o_Type_H018_48.jpg", "/o_Type_H018_64.jpg",
                 "/o_Type_H019_12.jpg", "/o_Type_H019_24.jpg", "/o_Type_H019_48.jpg", "/o_Type_H019_64.jpg",
                 "/o_Type_H020_12.jpg", "/o_Type_H020_24.jpg", "/o_Type_H020_48.jpg", "/o_Type_H020_64.jpg",
                 "/o_Type_H021_12.jpg", "/o_Type_H021_24.jpg", "/o_Type_H021_48.jpg", "/o_Type_H021_64.jpg",
                 "/o_Type_H022_12.jpg", "/o_Type_H022_24.jpg", "/o_Type_H022_48.jpg", "/o_Type_H022_64.jpg",
                 "/o_Type_P001_12.jpg", "/o_Type_P001_24.jpg", "/o_Type_P001_48.jpg", "/o_Type_P001_64.jpg",
                 "/o_Type_P002_12.jpg", "/o_Type_P002_24.jpg", "/o_Type_P002_48.jpg", "/o_Type_P002_64.jpg",
                 "/o_Type_P003_12.jpg", "/o_Type_P003_24.jpg", "/o_Type_P003_48.jpg", "/o_Type_P003_64.jpg",
                 "/o_Type_P004_12.jpg", "/o_Type_P004_24.jpg", "/o_Type_P004_48.jpg", "/o_Type_P004_64.jpg",
                 "/o_Type_P005_12.jpg", "/o_Type_P005_24.jpg", "/o_Type_P005_48.jpg", "/o_Type_P005_64.jpg",
                 "/o_Type_P006_12.jpg", "/o_Type_P006_24.jpg", "/o_Type_P006_48.jpg", "/o_Type_P006_64.jpg",
                 "/o_Type_R001_12.jpg", "/o_Type_R001_24.jpg", "/o_Type_R001_48.jpg", "/o_Type_R001_64.jpg",
                 "/o_Type_R002_12.jpg", "/o_Type_R002_24.jpg", "/o_Type_R002_48.jpg", "/o_Type_R002_64.jpg",
                 "/o_Type_R003_12.jpg", "/o_Type_R003_24.jpg", "/o_Type_R003_48.jpg", "/o_Type_R003_64.jpg",
                 "/o_Type_R004_12.jpg", "/o_Type_R004_24.jpg", "/o_Type_R004_48.jpg", "/o_Type_R004_64.jpg",
                 "/o_Type_R005_12.jpg", "/o_Type_R005_24.jpg", "/o_Type_R005_48.jpg", "/o_Type_R005_64.jpg",
                 "/o_Type_R006_12.jpg", "/o_Type_R006_24.jpg", "/o_Type_R006_48.jpg", "/o_Type_R006_64.jpg",
                 "/o_Type_R007_12.jpg", "/o_Type_R007_24.jpg", "/o_Type_R007_48.jpg", "/o_Type_R007_64.jpg",
                 "/o_Type_R008_12.jpg", "/o_Type_R008_24.jpg", "/o_Type_R008_48.jpg", "/o_Type_R008_64.jpg",
                 "/o_Type_T001_12.jpg", "/o_Type_T001_24.jpg", "/o_Type_T001_48.jpg", "/o_Type_T001_64.jpg",
                 "/o_Type_T003_12.jpg", "/o_Type_T003_24.jpg", "/o_Type_T003_48.jpg", "/o_Type_T003_64.jpg",
                 "/o_Type_T004_12.jpg", "/o_Type_T004_24.jpg", "/o_Type_T004_48.jpg", "/o_Type_T004_64.jpg",
                 "/o_Type_T005_12.jpg", "/o_Type_T005_24.jpg", "/o_Type_T005_48.jpg", "/o_Type_T005_64.jpg",
                 "/o_Type_T006_12.jpg", "/o_Type_T006_24.jpg", "/o_Type_T006_48.jpg", "/o_Type_T006_64.jpg",
                 "/o_Type_T007_12.jpg", "/o_Type_T007_24.jpg", "/o_Type_T007_48.jpg", "/o_Type_T007_64.jpg",
                 "/o_Type_T008_12.jpg", "/o_Type_T008_24.jpg", "/o_Type_T008_48.jpg", "/o_Type_T008_64.jpg",
                 "/o_Type_T009_12.jpg", "/o_Type_T009_24.jpg", "/o_Type_T009_48.jpg", "/o_Type_T009_64.jpg",
                 "/o_Type_T010_12.jpg", "/o_Type_T010_24.jpg", "/o_Type_T010_48.jpg", "/o_Type_T010_64.jpg",
                 "/o_Type_T011_12.jpg", "/o_Type_T011_24.jpg", "/o_Type_T011_48.jpg", "/o_Type_T011_64.jpg",
                 "/o_Type_T012_12.jpg", "/o_Type_T012_24.jpg", "/o_Type_T012_48.jpg", "/o_Type_T012_64.jpg",
                 "/o_Type_T013_12.jpg", "/o_Type_T013_24.jpg", "/o_Type_T013_48.jpg", "/o_Type_T013_64.jpg",
                 "/o_Type_T014_12.jpg", "/o_Type_T014_24.jpg", "/o_Type_T014_48.jpg", "/o_Type_T014_64.jpg",
                 "/o_Type_T015_12.jpg", "/o_Type_T015_24.jpg", "/o_Type_T015_48.jpg", "/o_Type_T015_64.jpg",
                 "/o_Type_T016_12.jpg", "/o_Type_T016_24.jpg", "/o_Type_T016_48.jpg", "/o_Type_T016_64.jpg",
                 "/o_Type_T017_12.jpg", "/o_Type_T017_24.jpg", "/o_Type_T017_48.jpg", "/o_Type_T017_64.jpg",
                 "/o_Type_T018_12.jpg", "/o_Type_T018_24.jpg", "/o_Type_T018_48.jpg", "/o_Type_T018_64.jpg",
                 "/o_Type_T019_12.jpg", "/o_Type_T019_24.jpg", "/o_Type_T019_48.jpg", "/o_Type_T019_64.jpg",
                 "/o_Type_T020_12.jpg", "/o_Type_T020_24.jpg", "/o_Type_T020_48.jpg", "/o_Type_T020_64.jpg",
                 "/o_Type_T021_12.jpg", "/o_Type_T021_24.jpg", "/o_Type_T021_48.jpg", "/o_Type_T021_64.jpg",
                 "/o_Type_U001_12.jpg", "/o_Type_U001_24.jpg", "/o_Type_U001_48.jpg", "/o_Type_U001_64.jpg",
                 "/o_Type_U002_12.jpg", "/o_Type_U002_24.jpg", "/o_Type_U002_48.jpg", "/o_Type_U002_64.jpg",
                 "/b_Coat_000_48.jpg", "/b_Coat_001_48.jpg", "/b_Coat_002_48.jpg", "/b_Coat_003_48.jpg",
                 "/b_Coat_004_48.jpg", "/b_Coat_005_48.jpg", "/b_Coat_006_48.jpg", "/b_Coat_007_48.jpg",
                 "/b_Coat_008_48.jpg", "/b_Coat_009_48.jpg", "/b_Coat_010_48.jpg", "/b_Coat_011_48.jpg",
                 "/b_Coat_012_48.jpg", "/b_Coat_013_48.jpg", "/b_Coat_014_48.jpg", "/b_Coat_015_48.jpg",
                 "/b_Coat_016_48.jpg", "/b_Coat_017_48.jpg", "/b_Coat_018_48.jpg",
                 "/o_Up_12.jpg",
                 "/b_WiFi_24.jpg",
                 "/o_WlanC_16.jpg", "/o_WlanD_16.jpg", "/o_Wlan_16.jpg"};

theme current_theme = color;

void setTheme(String themeName)
{
    if (themeName.equalsIgnoreCase("color"))
    {
        current_theme = color;
        display_theme = "color";
    }
    else if (themeName.equalsIgnoreCase("outline"))
    {
        current_theme = outline;
        display_theme = "outline";
    }
    else
    {
        current_theme = blackwhite;
        display_theme = "blackwhite";
    }
}

void initTheme(String themeName)
{
    setTheme(themeName);
}

void initTheme()
{
    initTheme("color");
}

const char *getIcon(String stringId)
{
    if (stringId.equalsIgnoreCase("AlarmClock_48"))
    {
        return current_theme.AlarmClock_48;
    }
    else if (stringId.equalsIgnoreCase("Alarm_16"))
    {
        return current_theme.Alarm_16;
    }
    else if (stringId.equalsIgnoreCase("Alarm_48"))
    {
        return current_theme.Alarm_48;
    }
    else if (stringId.equalsIgnoreCase("Arduino_24"))
    {
        return current_theme.Arduino_24;
    }
    else if (stringId.equalsIgnoreCase("Arm_24"))
    {
        return current_theme.Arm_24;
    }
    else if (stringId.equalsIgnoreCase("Back_12"))
    {
        return current_theme.Back_12;
    }
    else if (stringId.equalsIgnoreCase("Bat000_16"))
    {
        return current_theme.Bat000_16;
    }
    else if (stringId.equalsIgnoreCase("Bat010_16"))
    {
        return current_theme.Bat010_16;
    }
    else if (stringId.equalsIgnoreCase("Bat025_16"))
    {
        return current_theme.Bat025_16;
    }
    else if (stringId.equalsIgnoreCase("Bat050_16"))
    {
        return current_theme.Bat050_16;
    }
    else if (stringId.equalsIgnoreCase("Bat075_16"))
    {
        return current_theme.Bat075_16;
    }
    else if (stringId.equalsIgnoreCase("Bat100_16"))
    {
        return current_theme.Bat100_16;
    }
    else if (stringId.equalsIgnoreCase("BatCharge_16"))
    {
        return current_theme.BatCharge_16;
    }
    else if (stringId.equalsIgnoreCase("Bluetooth_24"))
    {
        return current_theme.Bluetooth_24;
    }
    else if (stringId.equalsIgnoreCase("Brightness000_48"))
    {
        return current_theme.Brightness000_48;
    }
    else if (stringId.equalsIgnoreCase("Brightness010_48"))
    {
        return current_theme.Brightness010_48;
    }
    else if (stringId.equalsIgnoreCase("Brightness020_48"))
    {
        return current_theme.Brightness020_48;
    }
    else if (stringId.equalsIgnoreCase("Brightness030_48"))
    {
        return current_theme.Brightness030_48;
    }
    else if (stringId.equalsIgnoreCase("Brightness040_48"))
    {
        return current_theme.Brightness040_48;
    }
    else if (stringId.equalsIgnoreCase("Brightness050_48"))
    {
        return current_theme.Brightness050_48;
    }
    else if (stringId.equalsIgnoreCase("Brightness060_48"))
    {
        return current_theme.Brightness060_48;
    }
    else if (stringId.equalsIgnoreCase("Brightness070_48"))
    {
        return current_theme.Brightness070_48;
    }
    else if (stringId.equalsIgnoreCase("Brightness080_48"))
    {
        return current_theme.Brightness080_48;
    }
    else if (stringId.equalsIgnoreCase("Brightness090_48"))
    {
        return current_theme.Brightness090_48;
    }
    else if (stringId.equalsIgnoreCase("Brightness100_48"))
    {
        return current_theme.Brightness100_48;
    }
    else if (stringId.equalsIgnoreCase("Brightness_48"))
    {
        return current_theme.Brightness_48;
    }
    else if (stringId.equalsIgnoreCase("Calendar_48"))
    {
        return current_theme.Calendar_48;
    }
    else if (stringId.equalsIgnoreCase("Clock_48"))
    {
        return current_theme.Clock_48;
    }
    else if (stringId.equalsIgnoreCase("ThemeBW_48"))
    {
        return current_theme.ThemeBW_48;
    }
    else if (stringId.equalsIgnoreCase("Theme_48"))
    {
        return current_theme.Theme_48;
    }
    else if (stringId.equalsIgnoreCase("ThemeOutline_48"))
    {
        return current_theme.ThemeOutline_48;
    }
    else if (stringId.equalsIgnoreCase("Day_01_48"))
    {
        return current_theme.Day_01_48;
    }
    else if (stringId.equalsIgnoreCase("Day_02_48"))
    {
        return current_theme.Day_02_48;
    }
    else if (stringId.equalsIgnoreCase("Day_03_48"))
    {
        return current_theme.Day_03_48;
    }
    else if (stringId.equalsIgnoreCase("Day_04_48"))
    {
        return current_theme.Day_04_48;
    }
    else if (stringId.equalsIgnoreCase("Day_05_48"))
    {
        return current_theme.Day_05_48;
    }
    else if (stringId.equalsIgnoreCase("Day_06_48"))
    {
        return current_theme.Day_06_48;
    }
    else if (stringId.equalsIgnoreCase("Day_07_48"))
    {
        return current_theme.Day_07_48;
    }
    else if (stringId.equalsIgnoreCase("Day_08_48"))
    {
        return current_theme.Day_08_48;
    }
    else if (stringId.equalsIgnoreCase("Day_09_48"))
    {
        return current_theme.Day_09_48;
    }
    else if (stringId.equalsIgnoreCase("Day_10_48"))
    {
        return current_theme.Day_10_48;
    }
    else if (stringId.equalsIgnoreCase("Day_11_48"))
    {
        return current_theme.Day_11_48;
    }
    else if (stringId.equalsIgnoreCase("Day_12_48"))
    {
        return current_theme.Day_12_48;
    }
    else if (stringId.equalsIgnoreCase("Day_13_48"))
    {
        return current_theme.Day_13_48;
    }
    else if (stringId.equalsIgnoreCase("Day_14_48"))
    {
        return current_theme.Day_14_48;
    }
    else if (stringId.equalsIgnoreCase("Day_15_48"))
    {
        return current_theme.Day_15_48;
    }
    else if (stringId.equalsIgnoreCase("Day_16_48"))
    {
        return current_theme.Day_16_48;
    }
    else if (stringId.equalsIgnoreCase("Day_17_48"))
    {
        return current_theme.Day_17_48;
    }
    else if (stringId.equalsIgnoreCase("Day_18_48"))
    {
        return current_theme.Day_18_48;
    }
    else if (stringId.equalsIgnoreCase("Day_19_48"))
    {
        return current_theme.Day_19_48;
    }
    else if (stringId.equalsIgnoreCase("Day_20_48"))
    {
        return current_theme.Day_20_48;
    }
    else if (stringId.equalsIgnoreCase("Day_21_48"))
    {
        return current_theme.Day_21_48;
    }
    else if (stringId.equalsIgnoreCase("Day_22_48"))
    {
        return current_theme.Day_22_48;
    }
    else if (stringId.equalsIgnoreCase("Day_23_48"))
    {
        return current_theme.Day_23_48;
    }
    else if (stringId.equalsIgnoreCase("Day_24_48"))
    {
        return current_theme.Day_24_48;
    }
    else if (stringId.equalsIgnoreCase("Day_25_48"))
    {
        return current_theme.Day_25_48;
    }
    else if (stringId.equalsIgnoreCase("Day_26_48"))
    {
        return current_theme.Day_26_48;
    }
    else if (stringId.equalsIgnoreCase("Day_27_48"))
    {
        return current_theme.Day_27_48;
    }
    else if (stringId.equalsIgnoreCase("Day_28_48"))
    {
        return current_theme.Day_28_48;
    }
    else if (stringId.equalsIgnoreCase("Day_29_48"))
    {
        return current_theme.Day_29_48;
    }
    else if (stringId.equalsIgnoreCase("Day_30_48"))
    {
        return current_theme.Day_30_48;
    }
    else if (stringId.equalsIgnoreCase("Day_31_48"))
    {
        return current_theme.Day_31_48;
    }
    else if (stringId.equalsIgnoreCase("Down_12"))
    {
        return current_theme.Down_12;
    }
    else if (stringId.equalsIgnoreCase("Forward_12"))
    {
        return current_theme.Forward_12;
    }
    else if (stringId.equalsIgnoreCase("Giessen_170"))
    {
        return current_theme.Giessen_170;
    }
    else if (stringId.equalsIgnoreCase("Icons8_24"))
    {
        return current_theme.Icons8_24;
    }
    else if (stringId.equalsIgnoreCase("Info_48"))
    {
        return current_theme.Info_48;
    }
    else if (stringId.equalsIgnoreCase("LangDE_48"))
    {
        return current_theme.LangDE_48;
    }
    else if (stringId.equalsIgnoreCase("LangEN_48"))
    {
        return current_theme.LangEN_48;
    }
    else if (stringId.equalsIgnoreCase("LockC_16"))
    {
        return current_theme.LockC_16;
    }
    else if (stringId.equalsIgnoreCase("LockC_48"))
    {
        return current_theme.LockC_48;
    }
    else if (stringId.equalsIgnoreCase("LockO_16"))
    {
        return current_theme.LockO_16;
    }
    else if (stringId.equalsIgnoreCase("LogoO_170"))
    {
        return current_theme.LogoO_170;
    }
    else if (stringId.equalsIgnoreCase("Menu_12"))
    {
        return current_theme.Menu_12;
    }
    else if (stringId.equalsIgnoreCase("Month_Apr_48"))
    {
        return current_theme.Month_Apr_48;
    }
    else if (stringId.equalsIgnoreCase("Month_Aug_48"))
    {
        return current_theme.Month_Aug_48;
    }
    else if (stringId.equalsIgnoreCase("Month_Dec_48"))
    {
        return current_theme.Month_Dec_48;
    }
    else if (stringId.equalsIgnoreCase("Month_Feb_48"))
    {
        return current_theme.Month_Feb_48;
    }
    else if (stringId.equalsIgnoreCase("Month_Jan_48"))
    {
        return current_theme.Month_Jan_48;
    }
    else if (stringId.equalsIgnoreCase("Month_Jul_48"))
    {
        return current_theme.Month_Jul_48;
    }
    else if (stringId.equalsIgnoreCase("Month_Jun_48"))
    {
        return current_theme.Month_Jun_48;
    }
    else if (stringId.equalsIgnoreCase("Month_Mar_48"))
    {
        return current_theme.Month_Mar_48;
    }
    else if (stringId.equalsIgnoreCase("Month_May_48"))
    {
        return current_theme.Month_May_48;
    }
    else if (stringId.equalsIgnoreCase("Month_Nov_48"))
    {
        return current_theme.Month_Nov_48;
    }
    else if (stringId.equalsIgnoreCase("Month_Oct_48"))
    {
        return current_theme.Month_Oct_48;
    }
    else if (stringId.equalsIgnoreCase("Month_Sep_48"))
    {
        return current_theme.Month_Sep_48;
    }
    else if (stringId.equalsIgnoreCase("NichtOk_12"))
    {
        return current_theme.NichtOk_12;
    }
    else if (stringId.equalsIgnoreCase("Ok_12"))
    {
        return current_theme.Ok_12;
    }
    else if (stringId.equalsIgnoreCase("OriChange_48"))
    {
        return current_theme.OriChange_48;
    }
    else if (stringId.equalsIgnoreCase("OriHor_48"))
    {
        return current_theme.OriHor_48;
    }
    else if (stringId.equalsIgnoreCase("OriVert_48"))
    {
        return current_theme.OriVert_48;
    }
    else if (stringId.equalsIgnoreCase("Setting_48"))
    {
        return current_theme.Setting_48;
    }
    else if (stringId.equalsIgnoreCase("Sig000_16"))
    {
        return current_theme.Sig000_16;
    }
    else if (stringId.equalsIgnoreCase("Sig025_16"))
    {
        return current_theme.Sig025_16;
    }
    else if (stringId.equalsIgnoreCase("Sig050_16"))
    {
        return current_theme.Sig050_16;
    }
    else if (stringId.equalsIgnoreCase("Sig075_16"))
    {
        return current_theme.Sig075_16;
    }
    else if (stringId.equalsIgnoreCase("Sig100_16"))
    {
        return current_theme.Sig100_16;
    }
    else if (stringId.equalsIgnoreCase("Sound000_16"))
    {
        return current_theme.Sound000_16;
    }
    else if (stringId.equalsIgnoreCase("Sound000_48"))
    {
        return current_theme.Sound000_48;
    }
    else if (stringId.equalsIgnoreCase("Sound025_16"))
    {
        return current_theme.Sound025_16;
    }
    else if (stringId.equalsIgnoreCase("Sound025_48"))
    {
        return current_theme.Sound025_48;
    }
    else if (stringId.equalsIgnoreCase("Sound050_16"))
    {
        return current_theme.Sound050_16;
    }
    else if (stringId.equalsIgnoreCase("Sound050_48"))
    {
        return current_theme.Sound050_48;
    }
    else if (stringId.equalsIgnoreCase("Sound075_16"))
    {
        return current_theme.Sound075_16;
    }
    else if (stringId.equalsIgnoreCase("Sound075_48"))
    {
        return current_theme.Sound075_48;
    }
    else if (stringId.equalsIgnoreCase("Sound100_16"))
    {
        return current_theme.Sound100_16;
    }
    else if (stringId.equalsIgnoreCase("Sound100_48"))
    {
        return current_theme.Sound100_48;
    }
    else if (stringId.equalsIgnoreCase("Speaker_48"))
    {
        return current_theme.Speaker_48;
    }
    else if (stringId.equalsIgnoreCase("Text_16"))
    {
        return current_theme.Text_16;
    }
    else if (stringId.equalsIgnoreCase("Text_48"))
    {
        return current_theme.Text_48;
    }
    else if (stringId.equalsIgnoreCase("Up_12"))
    {
        return current_theme.Up_12;
    }
    else if (stringId.equalsIgnoreCase("WiFi_24"))
    {
        return current_theme.WiFi_24;
    }
    else if (stringId.equalsIgnoreCase("WlanC_16"))
    {
        return current_theme.WlanC_16;
    }
    else if (stringId.equalsIgnoreCase("WlanD_16"))
    {
        return current_theme.WlanD_16;
    }
    else if (stringId.equalsIgnoreCase("Wlan_16"))
    {
        return current_theme.Wlan_16;
    }

    else if (stringId.equalsIgnoreCase("Type_D000_12"))
    {
        return current_theme.Type_D000_12;
    }
    else if (stringId.equalsIgnoreCase("Type_D000_24"))
    {
        return current_theme.Type_D000_24;
    }
    else if (stringId.equalsIgnoreCase("Type_D000_48"))
    {
        return current_theme.Type_D000_48;
    }
    else if (stringId.equalsIgnoreCase("Type_D000_64"))
    {
        return current_theme.Type_D000_64;
    }
    else if (stringId.equalsIgnoreCase("Type_D001_12"))
    {
        return current_theme.Type_D001_12;
    }
    else if (stringId.equalsIgnoreCase("Type_D001_24"))
    {
        return current_theme.Type_D001_24;
    }
    else if (stringId.equalsIgnoreCase("Type_D001_48"))
    {
        return current_theme.Type_D001_48;
    }
    else if (stringId.equalsIgnoreCase("Type_D001_64"))
    {
        return current_theme.Type_D001_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F001_12"))
    {
        return current_theme.Type_F001_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F001_24"))
    {
        return current_theme.Type_F001_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F001_48"))
    {
        return current_theme.Type_F001_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F001_64"))
    {
        return current_theme.Type_F001_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F002_12"))
    {
        return current_theme.Type_F002_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F002_24"))
    {
        return current_theme.Type_F002_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F002_48"))
    {
        return current_theme.Type_F002_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F002_64"))
    {
        return current_theme.Type_F002_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F003_12"))
    {
        return current_theme.Type_F003_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F003_24"))
    {
        return current_theme.Type_F003_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F003_48"))
    {
        return current_theme.Type_F003_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F003_64"))
    {
        return current_theme.Type_F003_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F004_12"))
    {
        return current_theme.Type_F004_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F004_24"))
    {
        return current_theme.Type_F004_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F004_48"))
    {
        return current_theme.Type_F004_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F004_64"))
    {
        return current_theme.Type_F004_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F005_12"))
    {
        return current_theme.Type_F005_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F005_24"))
    {
        return current_theme.Type_F005_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F005_48"))
    {
        return current_theme.Type_F005_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F005_64"))
    {
        return current_theme.Type_F005_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F006_12"))
    {
        return current_theme.Type_F006_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F006_24"))
    {
        return current_theme.Type_F006_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F006_48"))
    {
        return current_theme.Type_F006_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F006_64"))
    {
        return current_theme.Type_F006_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F007_12"))
    {
        return current_theme.Type_F007_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F007_24"))
    {
        return current_theme.Type_F007_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F007_48"))
    {
        return current_theme.Type_F007_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F007_64"))
    {
        return current_theme.Type_F007_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F008_12"))
    {
        return current_theme.Type_F008_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F008_24"))
    {
        return current_theme.Type_F008_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F008_48"))
    {
        return current_theme.Type_F008_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F008_64"))
    {
        return current_theme.Type_F008_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F009_12"))
    {
        return current_theme.Type_F009_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F009_24"))
    {
        return current_theme.Type_F009_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F009_48"))
    {
        return current_theme.Type_F009_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F009_64"))
    {
        return current_theme.Type_F009_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F010_12"))
    {
        return current_theme.Type_F010_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F010_24"))
    {
        return current_theme.Type_F010_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F010_48"))
    {
        return current_theme.Type_F010_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F010_64"))
    {
        return current_theme.Type_F010_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F011_12"))
    {
        return current_theme.Type_F011_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F011_24"))
    {
        return current_theme.Type_F011_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F011_48"))
    {
        return current_theme.Type_F011_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F011_64"))
    {
        return current_theme.Type_F011_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F012_12"))
    {
        return current_theme.Type_F012_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F012_24"))
    {
        return current_theme.Type_F012_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F012_48"))
    {
        return current_theme.Type_F012_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F012_64"))
    {
        return current_theme.Type_F012_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F013_12"))
    {
        return current_theme.Type_F013_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F013_24"))
    {
        return current_theme.Type_F013_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F013_48"))
    {
        return current_theme.Type_F013_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F013_64"))
    {
        return current_theme.Type_F013_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F014_12"))
    {
        return current_theme.Type_F014_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F014_24"))
    {
        return current_theme.Type_F014_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F014_48"))
    {
        return current_theme.Type_F014_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F014_64"))
    {
        return current_theme.Type_F014_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F015_12"))
    {
        return current_theme.Type_F015_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F015_24"))
    {
        return current_theme.Type_F015_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F015_48"))
    {
        return current_theme.Type_F015_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F015_64"))
    {
        return current_theme.Type_F015_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F016_12"))
    {
        return current_theme.Type_F016_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F016_24"))
    {
        return current_theme.Type_F016_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F016_48"))
    {
        return current_theme.Type_F016_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F016_64"))
    {
        return current_theme.Type_F016_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F017_12"))
    {
        return current_theme.Type_F017_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F017_24"))
    {
        return current_theme.Type_F017_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F017_48"))
    {
        return current_theme.Type_F017_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F017_64"))
    {
        return current_theme.Type_F017_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F018_12"))
    {
        return current_theme.Type_F018_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F018_24"))
    {
        return current_theme.Type_F018_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F018_48"))
    {
        return current_theme.Type_F018_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F018_64"))
    {
        return current_theme.Type_F018_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F019_12"))
    {
        return current_theme.Type_F019_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F019_24"))
    {
        return current_theme.Type_F019_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F019_48"))
    {
        return current_theme.Type_F019_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F019_64"))
    {
        return current_theme.Type_F019_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F020_12"))
    {
        return current_theme.Type_F020_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F020_24"))
    {
        return current_theme.Type_F020_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F020_48"))
    {
        return current_theme.Type_F020_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F020_64"))
    {
        return current_theme.Type_F020_64;
    }
    else if (stringId.equalsIgnoreCase("Type_F021_12"))
    {
        return current_theme.Type_F021_12;
    }
    else if (stringId.equalsIgnoreCase("Type_F021_24"))
    {
        return current_theme.Type_F021_24;
    }
    else if (stringId.equalsIgnoreCase("Type_F021_48"))
    {
        return current_theme.Type_F021_48;
    }
    else if (stringId.equalsIgnoreCase("Type_F021_64"))
    {
        return current_theme.Type_F021_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H001_12"))
    {
        return current_theme.Type_H001_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H001_24"))
    {
        return current_theme.Type_H001_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H001_48"))
    {
        return current_theme.Type_H001_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H001_64"))
    {
        return current_theme.Type_H001_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H002_12"))
    {
        return current_theme.Type_H002_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H002_24"))
    {
        return current_theme.Type_H002_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H002_48"))
    {
        return current_theme.Type_H002_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H002_64"))
    {
        return current_theme.Type_H002_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H003_12"))
    {
        return current_theme.Type_H003_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H003_24"))
    {
        return current_theme.Type_H003_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H003_48"))
    {
        return current_theme.Type_H003_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H003_64"))
    {
        return current_theme.Type_H003_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H004_12"))
    {
        return current_theme.Type_H004_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H004_24"))
    {
        return current_theme.Type_H004_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H004_48"))
    {
        return current_theme.Type_H004_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H004_64"))
    {
        return current_theme.Type_H004_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H005_12"))
    {
        return current_theme.Type_H005_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H005_24"))
    {
        return current_theme.Type_H005_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H005_48"))
    {
        return current_theme.Type_H005_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H005_64"))
    {
        return current_theme.Type_H005_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H006_12"))
    {
        return current_theme.Type_H006_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H006_24"))
    {
        return current_theme.Type_H006_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H006_48"))
    {
        return current_theme.Type_H006_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H006_64"))
    {
        return current_theme.Type_H006_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H007_12"))
    {
        return current_theme.Type_H007_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H007_24"))
    {
        return current_theme.Type_H007_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H007_48"))
    {
        return current_theme.Type_H007_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H007_64"))
    {
        return current_theme.Type_H007_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H008_12"))
    {
        return current_theme.Type_H008_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H008_24"))
    {
        return current_theme.Type_H008_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H008_48"))
    {
        return current_theme.Type_H008_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H008_64"))
    {
        return current_theme.Type_H008_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H009_12"))
    {
        return current_theme.Type_H009_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H009_24"))
    {
        return current_theme.Type_H009_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H009_48"))
    {
        return current_theme.Type_H009_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H009_64"))
    {
        return current_theme.Type_H009_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H010_12"))
    {
        return current_theme.Type_H010_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H010_24"))
    {
        return current_theme.Type_H010_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H010_48"))
    {
        return current_theme.Type_H010_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H010_64"))
    {
        return current_theme.Type_H010_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H011_12"))
    {
        return current_theme.Type_H011_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H011_24"))
    {
        return current_theme.Type_H011_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H011_48"))
    {
        return current_theme.Type_H011_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H011_64"))
    {
        return current_theme.Type_H011_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H012_12"))
    {
        return current_theme.Type_H012_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H012_24"))
    {
        return current_theme.Type_H012_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H012_48"))
    {
        return current_theme.Type_H012_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H012_64"))
    {
        return current_theme.Type_H012_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H013_12"))
    {
        return current_theme.Type_H013_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H013_24"))
    {
        return current_theme.Type_H013_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H013_48"))
    {
        return current_theme.Type_H013_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H013_64"))
    {
        return current_theme.Type_H013_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H014_12"))
    {
        return current_theme.Type_H014_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H014_24"))
    {
        return current_theme.Type_H014_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H014_48"))
    {
        return current_theme.Type_H014_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H014_64"))
    {
        return current_theme.Type_H014_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H015_12"))
    {
        return current_theme.Type_H015_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H015_24"))
    {
        return current_theme.Type_H015_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H015_48"))
    {
        return current_theme.Type_H015_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H015_64"))
    {
        return current_theme.Type_H015_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H016_12"))
    {
        return current_theme.Type_H016_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H016_24"))
    {
        return current_theme.Type_H016_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H016_48"))
    {
        return current_theme.Type_H016_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H016_64"))
    {
        return current_theme.Type_H016_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H017_12"))
    {
        return current_theme.Type_H017_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H017_24"))
    {
        return current_theme.Type_H017_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H017_48"))
    {
        return current_theme.Type_H017_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H017_64"))
    {
        return current_theme.Type_H017_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H018_12"))
    {
        return current_theme.Type_H018_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H018_24"))
    {
        return current_theme.Type_H018_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H018_48"))
    {
        return current_theme.Type_H018_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H018_64"))
    {
        return current_theme.Type_H018_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H019_12"))
    {
        return current_theme.Type_H019_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H019_24"))
    {
        return current_theme.Type_H019_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H019_48"))
    {
        return current_theme.Type_H019_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H019_64"))
    {
        return current_theme.Type_H019_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H020_12"))
    {
        return current_theme.Type_H020_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H020_24"))
    {
        return current_theme.Type_H020_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H020_48"))
    {
        return current_theme.Type_H020_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H020_64"))
    {
        return current_theme.Type_H020_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H021_12"))
    {
        return current_theme.Type_H021_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H021_24"))
    {
        return current_theme.Type_H021_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H021_48"))
    {
        return current_theme.Type_H021_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H021_64"))
    {
        return current_theme.Type_H021_64;
    }
    else if (stringId.equalsIgnoreCase("Type_H022_12"))
    {
        return current_theme.Type_H022_12;
    }
    else if (stringId.equalsIgnoreCase("Type_H022_24"))
    {
        return current_theme.Type_H022_24;
    }
    else if (stringId.equalsIgnoreCase("Type_H022_48"))
    {
        return current_theme.Type_H022_48;
    }
    else if (stringId.equalsIgnoreCase("Type_H022_64"))
    {
        return current_theme.Type_H022_64;
    }
    else if (stringId.equalsIgnoreCase("Type_P001_12"))
    {
        return current_theme.Type_P001_12;
    }
    else if (stringId.equalsIgnoreCase("Type_P001_24"))
    {
        return current_theme.Type_P001_24;
    }
    else if (stringId.equalsIgnoreCase("Type_P001_48"))
    {
        return current_theme.Type_P001_48;
    }
    else if (stringId.equalsIgnoreCase("Type_P001_64"))
    {
        return current_theme.Type_P001_64;
    }
    else if (stringId.equalsIgnoreCase("Type_P002_12"))
    {
        return current_theme.Type_P002_12;
    }
    else if (stringId.equalsIgnoreCase("Type_P002_24"))
    {
        return current_theme.Type_P002_24;
    }
    else if (stringId.equalsIgnoreCase("Type_P002_48"))
    {
        return current_theme.Type_P002_48;
    }
    else if (stringId.equalsIgnoreCase("Type_P002_64"))
    {
        return current_theme.Type_P002_64;
    }
    else if (stringId.equalsIgnoreCase("Type_P003_12"))
    {
        return current_theme.Type_P003_12;
    }
    else if (stringId.equalsIgnoreCase("Type_P003_24"))
    {
        return current_theme.Type_P003_24;
    }
    else if (stringId.equalsIgnoreCase("Type_P003_48"))
    {
        return current_theme.Type_P003_48;
    }
    else if (stringId.equalsIgnoreCase("Type_P003_64"))
    {
        return current_theme.Type_P003_64;
    }
    else if (stringId.equalsIgnoreCase("Type_P004_12"))
    {
        return current_theme.Type_P004_12;
    }
    else if (stringId.equalsIgnoreCase("Type_P004_24"))
    {
        return current_theme.Type_P004_24;
    }
    else if (stringId.equalsIgnoreCase("Type_P004_48"))
    {
        return current_theme.Type_P004_48;
    }
    else if (stringId.equalsIgnoreCase("Type_P004_64"))
    {
        return current_theme.Type_P004_64;
    }
    else if (stringId.equalsIgnoreCase("Type_P005_12"))
    {
        return current_theme.Type_P005_12;
    }
    else if (stringId.equalsIgnoreCase("Type_P005_24"))
    {
        return current_theme.Type_P005_24;
    }
    else if (stringId.equalsIgnoreCase("Type_P005_48"))
    {
        return current_theme.Type_P005_48;
    }
    else if (stringId.equalsIgnoreCase("Type_P005_64"))
    {
        return current_theme.Type_P005_64;
    }
    else if (stringId.equalsIgnoreCase("Type_P006_12"))
    {
        return current_theme.Type_P006_12;
    }
    else if (stringId.equalsIgnoreCase("Type_P006_24"))
    {
        return current_theme.Type_P006_24;
    }
    else if (stringId.equalsIgnoreCase("Type_P006_48"))
    {
        return current_theme.Type_P006_48;
    }
    else if (stringId.equalsIgnoreCase("Type_P006_64"))
    {
        return current_theme.Type_P006_64;
    }
    else if (stringId.equalsIgnoreCase("Type_R001_12"))
    {
        return current_theme.Type_R001_12;
    }
    else if (stringId.equalsIgnoreCase("Type_R001_24"))
    {
        return current_theme.Type_R001_24;
    }
    else if (stringId.equalsIgnoreCase("Type_R001_48"))
    {
        return current_theme.Type_R001_48;
    }
    else if (stringId.equalsIgnoreCase("Type_R001_64"))
    {
        return current_theme.Type_R001_64;
    }
    else if (stringId.equalsIgnoreCase("Type_R002_12"))
    {
        return current_theme.Type_R002_12;
    }
    else if (stringId.equalsIgnoreCase("Type_R002_24"))
    {
        return current_theme.Type_R002_24;
    }
    else if (stringId.equalsIgnoreCase("Type_R002_48"))
    {
        return current_theme.Type_R002_48;
    }
    else if (stringId.equalsIgnoreCase("Type_R002_64"))
    {
        return current_theme.Type_R002_64;
    }
    else if (stringId.equalsIgnoreCase("Type_R003_12"))
    {
        return current_theme.Type_R003_12;
    }
    else if (stringId.equalsIgnoreCase("Type_R003_24"))
    {
        return current_theme.Type_R003_24;
    }
    else if (stringId.equalsIgnoreCase("Type_R003_48"))
    {
        return current_theme.Type_R003_48;
    }
    else if (stringId.equalsIgnoreCase("Type_R003_64"))
    {
        return current_theme.Type_R003_64;
    }
    else if (stringId.equalsIgnoreCase("Type_R004_12"))
    {
        return current_theme.Type_R004_12;
    }
    else if (stringId.equalsIgnoreCase("Type_R004_24"))
    {
        return current_theme.Type_R004_24;
    }
    else if (stringId.equalsIgnoreCase("Type_R004_48"))
    {
        return current_theme.Type_R004_48;
    }
    else if (stringId.equalsIgnoreCase("Type_R004_64"))
    {
        return current_theme.Type_R004_64;
    }
    else if (stringId.equalsIgnoreCase("Type_R005_12"))
    {
        return current_theme.Type_R005_12;
    }
    else if (stringId.equalsIgnoreCase("Type_R005_24"))
    {
        return current_theme.Type_R005_24;
    }
    else if (stringId.equalsIgnoreCase("Type_R005_48"))
    {
        return current_theme.Type_R005_48;
    }
    else if (stringId.equalsIgnoreCase("Type_R005_64"))
    {
        return current_theme.Type_R005_64;
    }
    else if (stringId.equalsIgnoreCase("Type_R006_12"))
    {
        return current_theme.Type_R006_12;
    }
    else if (stringId.equalsIgnoreCase("Type_R006_24"))
    {
        return current_theme.Type_R006_24;
    }
    else if (stringId.equalsIgnoreCase("Type_R006_48"))
    {
        return current_theme.Type_R006_48;
    }
    else if (stringId.equalsIgnoreCase("Type_R006_64"))
    {
        return current_theme.Type_R006_64;
    }
    else if (stringId.equalsIgnoreCase("Type_R007_12"))
    {
        return current_theme.Type_R007_12;
    }
    else if (stringId.equalsIgnoreCase("Type_R007_24"))
    {
        return current_theme.Type_R007_24;
    }
    else if (stringId.equalsIgnoreCase("Type_R007_48"))
    {
        return current_theme.Type_R007_48;
    }
    else if (stringId.equalsIgnoreCase("Type_R007_64"))
    {
        return current_theme.Type_R007_64;
    }
    else if (stringId.equalsIgnoreCase("Type_R008_12"))
    {
        return current_theme.Type_R008_12;
    }
    else if (stringId.equalsIgnoreCase("Type_R008_24"))
    {
        return current_theme.Type_R008_24;
    }
    else if (stringId.equalsIgnoreCase("Type_R008_48"))
    {
        return current_theme.Type_R008_48;
    }
    else if (stringId.equalsIgnoreCase("Type_R008_64"))
    {
        return current_theme.Type_R008_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T001_12"))
    {
        return current_theme.Type_T001_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T001_24"))
    {
        return current_theme.Type_T001_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T001_48"))
    {
        return current_theme.Type_T001_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T001_64"))
    {
        return current_theme.Type_T001_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T003_12"))
    {
        return current_theme.Type_T003_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T003_24"))
    {
        return current_theme.Type_T003_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T003_48"))
    {
        return current_theme.Type_T003_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T003_64"))
    {
        return current_theme.Type_T003_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T004_12"))
    {
        return current_theme.Type_T004_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T004_24"))
    {
        return current_theme.Type_T004_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T004_48"))
    {
        return current_theme.Type_T004_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T004_64"))
    {
        return current_theme.Type_T004_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T005_12"))
    {
        return current_theme.Type_T005_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T005_24"))
    {
        return current_theme.Type_T005_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T005_48"))
    {
        return current_theme.Type_T005_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T005_64"))
    {
        return current_theme.Type_T005_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T006_12"))
    {
        return current_theme.Type_T006_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T006_24"))
    {
        return current_theme.Type_T006_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T006_48"))
    {
        return current_theme.Type_T006_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T006_64"))
    {
        return current_theme.Type_T006_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T007_12"))
    {
        return current_theme.Type_T007_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T007_24"))
    {
        return current_theme.Type_T007_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T007_48"))
    {
        return current_theme.Type_T007_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T007_64"))
    {
        return current_theme.Type_T007_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T008_12"))
    {
        return current_theme.Type_T008_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T008_24"))
    {
        return current_theme.Type_T008_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T008_48"))
    {
        return current_theme.Type_T008_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T008_64"))
    {
        return current_theme.Type_T008_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T009_12"))
    {
        return current_theme.Type_T009_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T009_24"))
    {
        return current_theme.Type_T009_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T009_48"))
    {
        return current_theme.Type_T009_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T009_64"))
    {
        return current_theme.Type_T009_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T010_12"))
    {
        return current_theme.Type_T010_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T010_24"))
    {
        return current_theme.Type_T010_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T010_48"))
    {
        return current_theme.Type_T010_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T010_64"))
    {
        return current_theme.Type_T010_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T011_12"))
    {
        return current_theme.Type_T011_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T011_24"))
    {
        return current_theme.Type_T011_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T011_48"))
    {
        return current_theme.Type_T011_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T011_64"))
    {
        return current_theme.Type_T011_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T012_12"))
    {
        return current_theme.Type_T012_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T012_24"))
    {
        return current_theme.Type_T012_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T012_48"))
    {
        return current_theme.Type_T012_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T012_64"))
    {
        return current_theme.Type_T012_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T013_12"))
    {
        return current_theme.Type_T013_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T013_24"))
    {
        return current_theme.Type_T013_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T013_48"))
    {
        return current_theme.Type_T013_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T013_64"))
    {
        return current_theme.Type_T013_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T014_12"))
    {
        return current_theme.Type_T014_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T014_24"))
    {
        return current_theme.Type_T014_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T014_48"))
    {
        return current_theme.Type_T014_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T014_64"))
    {
        return current_theme.Type_T014_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T015_12"))
    {
        return current_theme.Type_T015_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T015_24"))
    {
        return current_theme.Type_T015_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T015_48"))
    {
        return current_theme.Type_T015_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T015_64"))
    {
        return current_theme.Type_T015_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T016_12"))
    {
        return current_theme.Type_T016_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T016_24"))
    {
        return current_theme.Type_T016_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T016_48"))
    {
        return current_theme.Type_T016_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T016_64"))
    {
        return current_theme.Type_T016_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T017_12"))
    {
        return current_theme.Type_T017_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T017_24"))
    {
        return current_theme.Type_T017_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T017_48"))
    {
        return current_theme.Type_T017_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T017_64"))
    {
        return current_theme.Type_T017_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T018_12"))
    {
        return current_theme.Type_T018_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T018_24"))
    {
        return current_theme.Type_T018_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T018_48"))
    {
        return current_theme.Type_T018_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T018_64"))
    {
        return current_theme.Type_T018_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T019_12"))
    {
        return current_theme.Type_T019_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T019_24"))
    {
        return current_theme.Type_T019_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T019_48"))
    {
        return current_theme.Type_T019_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T019_64"))
    {
        return current_theme.Type_T019_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T020_12"))
    {
        return current_theme.Type_T020_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T020_24"))
    {
        return current_theme.Type_T020_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T020_48"))
    {
        return current_theme.Type_T020_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T020_64"))
    {
        return current_theme.Type_T020_64;
    }
    else if (stringId.equalsIgnoreCase("Type_T021_12"))
    {
        return current_theme.Type_T021_12;
    }
    else if (stringId.equalsIgnoreCase("Type_T021_24"))
    {
        return current_theme.Type_T021_24;
    }
    else if (stringId.equalsIgnoreCase("Type_T021_48"))
    {
        return current_theme.Type_T021_48;
    }
    else if (stringId.equalsIgnoreCase("Type_T021_64"))
    {
        return current_theme.Type_T021_64;
    }
    else if (stringId.equalsIgnoreCase("Type_U001_12"))
    {
        return current_theme.Type_U001_12;
    }
    else if (stringId.equalsIgnoreCase("Type_U001_24"))
    {
        return current_theme.Type_U001_24;
    }
    else if (stringId.equalsIgnoreCase("Type_U001_48"))
    {
        return current_theme.Type_U001_48;
    }
    else if (stringId.equalsIgnoreCase("Type_U001_64"))
    {
        return current_theme.Type_U001_64;
    }
    else if (stringId.equalsIgnoreCase("Type_U002_12"))
    {
        return current_theme.Type_U002_12;
    }
    else if (stringId.equalsIgnoreCase("Type_U002_24"))
    {
        return current_theme.Type_U002_24;
    }
    else if (stringId.equalsIgnoreCase("Type_U002_48"))
    {
        return current_theme.Type_U002_48;
    }
    else if (stringId.equalsIgnoreCase("Type_U002_64"))
    {
        return current_theme.Type_U002_64;
    }
    else if (stringId.equalsIgnoreCase("Coat_000_48"))
    {
        return current_theme.Coat_000_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_001_48"))
    {
        return current_theme.Coat_001_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_002_48"))
    {
        return current_theme.Coat_002_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_003_48"))
    {
        return current_theme.Coat_003_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_004_48"))
    {
        return current_theme.Coat_004_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_005_48"))
    {
        return current_theme.Coat_005_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_006_48"))
    {
        return current_theme.Coat_006_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_007_48"))
    {
        return current_theme.Coat_007_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_008_48"))
    {
        return current_theme.Coat_008_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_009_48"))
    {
        return current_theme.Coat_009_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_010_48"))
    {
        return current_theme.Coat_010_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_011_48"))
    {
        return current_theme.Coat_011_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_012_48"))
    {
        return current_theme.Coat_012_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_013_48"))
    {
        return current_theme.Coat_013_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_014_48"))
    {
        return current_theme.Coat_014_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_015_48"))
    {
        return current_theme.Coat_015_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_016_48"))
    {
        return current_theme.Coat_016_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_017_48"))
    {
        return current_theme.Coat_017_48;
    }
    else if (stringId.equalsIgnoreCase("Coat_018_48"))
    {
        return current_theme.Coat_018_48;
    }
}