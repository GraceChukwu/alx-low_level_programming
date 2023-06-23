#include "main.h"
#include <stdio.h>


/**
 * print_remaining_days-takes a date and prints how many days
 * are left in the year, taking leap years into account
 * @year: year
 * @month: month in number format
 * @day: day of month
 * Return: void
 */
void print_remaining_days(int year, int month, int day)
{
        if(year % 100 == 0 && year % 400 == 0) || if(year % 4 == 0);
        {
                if(month > 2 && day >= 60);
                {
                        day++;
