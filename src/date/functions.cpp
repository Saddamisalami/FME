#include <Arduino.h>

#include "i18n\functions.h"

String getMonth(int month)
{
    if (month == 1)
    {
        return getI18n("month_january");
    }
    else if (month == 2)
    {
        return getI18n("month_february");
    }
    else if (month == 3)
    {
        return getI18n("month_march");
    }
    else if (month == 4)
    {
        return getI18n("month_april");
    }
    else if (month == 5)
    {
        return getI18n("month_may");
    }
    else if (month == 6)
    {
        return getI18n("month_june");
    }
    else if (month == 7)
    {
        return getI18n("month_july");
    }
    else if (month == 8)
    {
        return getI18n("month_august");
    }
    else if (month == 9)
    {
        return getI18n("month_september");
    }
    else if (month == 10)
    {
        return getI18n("month_october");
    }
    else if (month == 11)
    {
        return getI18n("month_november");
    }
    else if (month == 12)
    {
        return getI18n("month_december");
    }
}

String getMonthAbr(int month)
{
    if (month == 1)
    {
        return getI18n("month_short_january");
    }
    else if (month == 2)
    {
        return getI18n("month_short_february");
    }
    else if (month == 3)
    {
        return getI18n("month_short_march");
    }
    else if (month == 4)
    {
        return getI18n("month_short_april");
    }
    else if (month == 5)
    {
        return getI18n("month_short_may");
    }
    else if (month == 6)
    {
        return getI18n("month_short_june");
    }
    else if (month == 7)
    {
        return getI18n("month_short_july");
    }
    else if (month == 8)
    {
        return getI18n("month_short_august");
    }
    else if (month == 9)
    {
        return getI18n("month_short_september");
    }
    else if (month == 10)
    {
        return getI18n("month_short_october");
    }
    else if (month == 11)
    {
        return getI18n("month_short_november");
    }
    else if (month == 12)
    {
        return getI18n("month_short_december");
    }
}

String getWeekday(int weekday)
{

    if (weekday == 0)
    {
        return getI18n("week_sunday");
    }
    else if (weekday == 1)
    {
        return getI18n("week_monday");
    }
    else if (weekday == 2)
    {
        return getI18n("week_tuesday");
    }
    else if (weekday == 3)
    {
        return getI18n("week_wednesday");
    }
    else if (weekday == 4)
    {
        return getI18n("week_thursday");
    }
    else if (weekday == 5)
    {
        return getI18n("week_friday");
    }
    else if (weekday == 6)
    {
        return getI18n("week_saturday");
    }
}

String getWeekdayAbr(int weekday)
{

    if (weekday == 0)
    {
        return getI18n("week_short_sunday");
    }
    else if (weekday == 1)
    {
        return getI18n("week_short_monday");
    }
    else if (weekday == 2)
    {
        return getI18n("week_short_tuesday");
    }
    else if (weekday == 3)
    {
        return getI18n("week_short_wednesday");
    }
    else if (weekday == 4)
    {
        return getI18n("week_short_thursday");
    }
    else if (weekday == 5)
    {
        return getI18n("week_short_friday");
    }
    else if (weekday == 6)
    {
        return getI18n("week_short_saturday");
    }
}