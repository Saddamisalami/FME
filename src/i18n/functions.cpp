#include <Arduino.h>

#include "variables.h"

struct language
{
   String language;

   String menubar_menu;
   String menubar_select;
   String menubar_save;
   String menubar_back;

   String menu_menu;
   String menu_alarmmessages;
   String menu_textmessages;
   String menu_audioprofiles;
   String menu_settings;
   String menu_alarmclock;
   String menu_service;

   String menu_audio_silent;
   String menu_audio_25;
   String menu_audio_50;
   String menu_audio_75;
   String menu_audio_normal;

   String menu_brightness;
   String menu_time;
   String menu_date;
   String menu_buttonsound;
   String menu_language;
   String menu_orientation;
   String menu_theme;

   String menu_on;
   String menu_off;

   String menu_brightness_set;
   String menu_time_set;

   String menu_date_year;
   String menu_date_month;
   String menu_date_day;

   String menu_date_year_set;
   String menu_date_month_set;
   String menu_date_day_set;

   String menu_alarmclock_set;

   String menu_service_hardware;
   String menu_service_software;
   String menu_service_subscriber;

   String menu_service_info;
   String menu_service_info_size;
   String menu_service_info_compile;
   String menu_service_info_cores;
   String menu_service_info_speed;
   String menu_service_info_issi;

   String alarm_address;
   String alarm_comment;

   String week_monday;
   String week_tuesday;
   String week_wednesday;
   String week_thursday;
   String week_friday;
   String week_saturday;
   String week_sunday;

   String week_short_monday;
   String week_short_tuesday;
   String week_short_wednesday;
   String week_short_thursday;
   String week_short_friday;
   String week_short_saturday;
   String week_short_sunday;

   String month_january;
   String month_february;
   String month_march;
   String month_april;
   String month_may;
   String month_june;
   String month_july;
   String month_august;
   String month_september;
   String month_october;
   String month_november;
   String month_december;

   String month_short_january;
   String month_short_february;
   String month_short_march;
   String month_short_april;
   String month_short_may;
   String month_short_june;
   String month_short_july;
   String month_short_august;
   String month_short_september;
   String month_short_october;
   String month_short_november;
   String month_short_december;

   String vertical;
   String horizontal;

   String color_color;
   String color_blackwhite;
   String color_outline;
};

language en = {"English",
               "MENU", "SELECT", "SAVE", "BACK",
               "Menu", "Alarmmessages", "Textmessages", "Audio-Profiles", "Settings", "Alarmclock", "Service",
               "Silent", "25%", "50%", "75%", "Normal",
               "Brightness", "Time", "Date", "Buttonsound", "Language", "Orientation", "Theme",
               "On", "Off",
               "Set Brightness", "Set Time",
               "Year", "Month", "Day",
               "Set Year", "Set Month", "Set Day",
               "Set Wake Up Time",
               "Hardware", "Software", "Subscriber",
               "Info", "Size", "Compiled on", "Cores", "Speed", "ISSI",
               "Address", "Comment",
               "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday",
               "Mon.", "Tues.", "Wed.", "Thurs.", "Fri.", "Sat.", "Sun.",
               "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December",
               "Jan.", "Feb.", "Mar.", "Apr.", "May", "June", "July", "Aug.", "Sep.", "Oct.", "Nov.", "Dec.",
               "Vertical", "Horizontal",
               "Color", "Black & White", "Outline"};

language de = {"Deutsch",
               "MENÜ", "AUSWÄHLEN", "SPEICHERN", "ZURÜCK",
               "Menü", "Alarmmitteil.", "Textmitteil.", "Audio-Profile", "Einstellungen", "Wecker", "Service",
               "Lautlos", "25%", "50%", "75%", "Normal",
               "Helligkeit", "Uhrzeit", "Datum", "Tastenton", "Sprache", "Orientierung", "Theme",
               "Eingeschaltet", "Ausgeschaltet",
               "Helligkeit setzen", "Uhrzeit setzen",
               "Jahr", "Monat", "Tag",
               "Jahr setzen", "Monat setzen", "Tag setzen",
               "Weckzeit setzen",
               "Hardware", "Software", "Teilnehmer",
               "Info", "Größe", "Kompiliert am", "Kerne", "Geschwindigkeit", "ISSI",
               "Adresse", "Kommentar",
               "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag", "Sonntag",
               "Mo.", "Di.", "Mi.", "Do.", "Fr.", "Sa.", "So.",
               "Januar", "Februar", "März", "April", "Mai", "Juni", "Juli", "August", "September", "Oktober", "November", "Dezember",
               "Jan.", "Feb.", "Mrz.", "Apr.", "Mai", "Jun.", "Jul.", "Aug.", "Sep.", "Okt.", "Nov.", "Dez.",
               "Vertikal", "Horizontal",
               "Farbe", "Schwarz & Weiß", "Outline"};

language current_lang = de;

void setLanguage(String lang)
{
   if (lang.equalsIgnoreCase("de"))
   {
      current_lang = de;
      i18n = "de";
   }
   else
   {
      current_lang = en;
      i18n = "en";
   }
}

void initLanguage(String lang)
{
   setLanguage(lang);
}

void initLanguage()
{
   initLanguage("de");
}

String getI18n(String stringId)
{
   if (stringId.equalsIgnoreCase("language"))
   {
      return current_lang.language;
   }
   else if (stringId.equalsIgnoreCase("menubar_menu"))
   {
      return current_lang.menubar_menu;
   }
   else if (stringId.equalsIgnoreCase("menubar_select"))
   {
      return current_lang.menubar_select;
   }
   else if (stringId.equalsIgnoreCase("menubar_save"))
   {
      return current_lang.menubar_save;
   }
   else if (stringId.equalsIgnoreCase("menubar_back"))
   {
      return current_lang.menubar_back;
   }

   else if (stringId.equalsIgnoreCase("menu_menu"))
   {
      return current_lang.menu_menu;
   }
   else if (stringId.equalsIgnoreCase("menu_alarmmessages"))
   {
      return current_lang.menu_alarmmessages;
   }
   else if (stringId.equalsIgnoreCase("menu_textmessages"))
   {
      return current_lang.menu_textmessages;
   }
   else if (stringId.equalsIgnoreCase("menu_audioprofiles"))
   {
      return current_lang.menu_audioprofiles;
   }
   else if (stringId.equalsIgnoreCase("menu_settings"))
   {
      return current_lang.menu_settings;
   }
   else if (stringId.equalsIgnoreCase("menu_alarmclock"))
   {
      return current_lang.menu_alarmclock;
   }
   else if (stringId.equalsIgnoreCase("menu_service"))
   {
      return current_lang.menu_service;
   }

   else if (stringId.equalsIgnoreCase("menu_audio_silent"))
   {
      return current_lang.menu_audio_silent;
   }
   else if (stringId.equalsIgnoreCase("menu_audio_25"))
   {
      return current_lang.menu_audio_25;
   }
   else if (stringId.equalsIgnoreCase("menu_audio_50"))
   {
      return current_lang.menu_audio_50;
   }
   else if (stringId.equalsIgnoreCase("menu_audio_75"))
   {
      return current_lang.menu_audio_75;
   }
   else if (stringId.equalsIgnoreCase("menu_audio_normal"))
   {
      return current_lang.menu_audio_normal;
   }

   else if (stringId.equalsIgnoreCase("menu_brightness"))
   {
      return current_lang.menu_brightness;
   }
   else if (stringId.equalsIgnoreCase("menu_time"))
   {
      return current_lang.menu_time;
   }
   else if (stringId.equalsIgnoreCase("menu_date"))
   {
      return current_lang.menu_date;
   }
   else if (stringId.equalsIgnoreCase("menu_buttonsound"))
   {
      return current_lang.menu_buttonsound;
   }
   else if (stringId.equalsIgnoreCase("menu_language"))
   {
      return current_lang.menu_language;
   }
   else if (stringId.equalsIgnoreCase("menu_orientation"))
   {
      return current_lang.menu_orientation;
   }
   else if (stringId.equalsIgnoreCase("menu_theme"))
   {
      return current_lang.menu_theme;
   }

   else if (stringId.equalsIgnoreCase("menu_on"))
   {
      return current_lang.menu_on;
   }
   else if (stringId.equalsIgnoreCase("menu_off"))
   {
      return current_lang.menu_off;
   }

   else if (stringId.equalsIgnoreCase("menu_brightness_set"))
   {
      return current_lang.menu_brightness_set;
   }
   else if (stringId.equalsIgnoreCase("menu_time_set"))
   {
      return current_lang.menu_time_set;
   }

   else if (stringId.equalsIgnoreCase("menu_date_year"))
   {
      return current_lang.menu_date_year;
   }
   else if (stringId.equalsIgnoreCase("menu_date_month"))
   {
      return current_lang.menu_date_month;
   }
   else if (stringId.equalsIgnoreCase("menu_date_day"))
   {
      return current_lang.menu_date_day;
   }

   else if (stringId.equalsIgnoreCase("menu_date_year_set"))
   {
      return current_lang.menu_date_year_set;
   }
   else if (stringId.equalsIgnoreCase("menu_date_month_set"))
   {
      return current_lang.menu_date_month_set;
   }
   else if (stringId.equalsIgnoreCase("menu_date_day_set"))
   {
      return current_lang.menu_date_day_set;
   }

   else if (stringId.equalsIgnoreCase("menu_alarmclock_set"))
   {
      return current_lang.menu_alarmclock_set;
   }

   else if (stringId.equalsIgnoreCase("menu_service_hardware"))
   {
      return current_lang.menu_service_hardware;
   }
   else if (stringId.equalsIgnoreCase("menu_service_software"))
   {
      return current_lang.menu_service_software;
   }
   else if (stringId.equalsIgnoreCase("menu_service_subscriber"))
   {
      return current_lang.menu_service_subscriber;
   }

   else if (stringId.equalsIgnoreCase("menu_service_info"))
   {
      return current_lang.menu_service_info;
   }
   else if (stringId.equalsIgnoreCase("menu_service_info_size"))
   {
      return current_lang.menu_service_info_size;
   }
   else if (stringId.equalsIgnoreCase("menu_service_info_compile"))
   {
      return current_lang.menu_service_info_compile;
   }
   else if (stringId.equalsIgnoreCase("menu_service_info_cores"))
   {
      return current_lang.menu_service_info_cores;
   }
   else if (stringId.equalsIgnoreCase("menu_service_info_speed"))
   {
      return current_lang.menu_service_info_speed;
   }
   else if (stringId.equalsIgnoreCase("menu_service_info_issi"))
   {
      return current_lang.menu_service_info_issi;
   }

   else if (stringId.equalsIgnoreCase("alarm_address"))
   {
      return current_lang.alarm_address;
   }
   else if (stringId.equalsIgnoreCase("alarm_comment"))
   {
      return current_lang.alarm_comment;
   }

   else if (stringId.equalsIgnoreCase("week_monday"))
   {
      return current_lang.week_monday;
   }
   else if (stringId.equalsIgnoreCase("week_tuesday"))
   {
      return current_lang.week_tuesday;
   }
   else if (stringId.equalsIgnoreCase("week_wednesday"))
   {
      return current_lang.week_wednesday;
   }
   else if (stringId.equalsIgnoreCase("week_thursday"))
   {
      return current_lang.week_thursday;
   }
   else if (stringId.equalsIgnoreCase("week_friday"))
   {
      return current_lang.week_friday;
   }
   else if (stringId.equalsIgnoreCase("week_saturday"))
   {
      return current_lang.week_saturday;
   }
   else if (stringId.equalsIgnoreCase("week_sunday"))
   {
      return current_lang.week_sunday;
   }

   else if (stringId.equalsIgnoreCase("week_short_monday"))
   {
      return current_lang.week_short_monday;
   }
   else if (stringId.equalsIgnoreCase("week_short_tuesday"))
   {
      return current_lang.week_short_tuesday;
   }
   else if (stringId.equalsIgnoreCase("week_short_wednesday"))
   {
      return current_lang.week_short_wednesday;
   }
   else if (stringId.equalsIgnoreCase("week_short_thursday"))
   {
      return current_lang.week_short_thursday;
   }
   else if (stringId.equalsIgnoreCase("week_short_friday"))
   {
      return current_lang.week_short_friday;
   }
   else if (stringId.equalsIgnoreCase("week_short_saturday"))
   {
      return current_lang.week_short_saturday;
   }
   else if (stringId.equalsIgnoreCase("week_short_sunday"))
   {
      return current_lang.week_short_sunday;
   }

   else if (stringId.equalsIgnoreCase("month_january"))
   {
      return current_lang.month_january;
   }
   else if (stringId.equalsIgnoreCase("month_february"))
   {
      return current_lang.month_february;
   }
   else if (stringId.equalsIgnoreCase("month_march"))
   {
      return current_lang.month_march;
   }
   else if (stringId.equalsIgnoreCase("month_april"))
   {
      return current_lang.month_april;
   }
   else if (stringId.equalsIgnoreCase("month_may"))
   {
      return current_lang.month_may;
   }
   else if (stringId.equalsIgnoreCase("month_june"))
   {
      return current_lang.month_june;
   }
   else if (stringId.equalsIgnoreCase("month_july"))
   {
      return current_lang.month_july;
   }
   else if (stringId.equalsIgnoreCase("month_august"))
   {
      return current_lang.month_august;
   }
   else if (stringId.equalsIgnoreCase("month_september"))
   {
      return current_lang.month_september;
   }
   else if (stringId.equalsIgnoreCase("month_october"))
   {
      return current_lang.month_october;
   }
   else if (stringId.equalsIgnoreCase("month_november"))
   {
      return current_lang.month_november;
   }
   else if (stringId.equalsIgnoreCase("month_december"))
   {
      return current_lang.week_short_sunday;
   }

   else if (stringId.equalsIgnoreCase("month_short_january"))
   {
      return current_lang.month_short_january;
   }
   else if (stringId.equalsIgnoreCase("month_short_february"))
   {
      return current_lang.month_short_february;
   }
   else if (stringId.equalsIgnoreCase("month_short_march"))
   {
      return current_lang.month_short_march;
   }
   else if (stringId.equalsIgnoreCase("month_short_april"))
   {
      return current_lang.month_short_april;
   }
   else if (stringId.equalsIgnoreCase("month_short_may"))
   {
      return current_lang.month_short_may;
   }
   else if (stringId.equalsIgnoreCase("month_short_june"))
   {
      return current_lang.month_short_june;
   }
   else if (stringId.equalsIgnoreCase("month_short_july"))
   {
      return current_lang.month_short_july;
   }
   else if (stringId.equalsIgnoreCase("month_short_august"))
   {
      return current_lang.month_short_august;
   }
   else if (stringId.equalsIgnoreCase("month_short_september"))
   {
      return current_lang.month_short_september;
   }
   else if (stringId.equalsIgnoreCase("month_short_october"))
   {
      return current_lang.month_short_october;
   }
   else if (stringId.equalsIgnoreCase("month_short_november"))
   {
      return current_lang.month_short_november;
   }
   else if (stringId.equalsIgnoreCase("month_short_december"))
   {
      return current_lang.week_short_sunday;
   }

   else if (stringId.equalsIgnoreCase("vertical"))
   {
      return current_lang.vertical;
   }
   else if (stringId.equalsIgnoreCase("horizontal"))
   {
      return current_lang.horizontal;
   }

   else if (stringId.equalsIgnoreCase("color_color"))
   {
      return current_lang.color_color;
   }
   else if (stringId.equalsIgnoreCase("color_blackwhite"))
   {
      return current_lang.color_blackwhite;
   }
   else if (stringId.equalsIgnoreCase("color_outline"))
   {
      return current_lang.color_outline;
   }

   else
   {
      return "";
   }
}