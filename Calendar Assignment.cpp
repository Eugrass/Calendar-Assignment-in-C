#include <stdio.h>

int start(int year);

int main(void) {
	const char* monthNames[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };//name of months array
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//number of days in months array
	int month, year;
	
	printf("%s", "Please enter year for this calendar: ");
	scanf_s("%d", &year);
	printf("\n ***     CALENDAR for %4d   *** \n", year);
	int startingDay = start(year);
	
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		daysInMonth[1] = 29;
	
	for (month = 0; month < 12; month++) { //month loop

		int dayOfWeek;
		
		printf("\n%s %d\n", monthNames[month], year);//printing month name
		printf("\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n");//days of week
		for (dayOfWeek = 1; dayOfWeek < startingDay; dayOfWeek++)//printing blanks till starting day of month
			printf("     ");

		for (int date = 1; date <= daysInMonth[month]; date++) {//printing days of the month till last day nextline after evert saturday

			printf("%-5d", date);
			if (++dayOfWeek > 7) {
				printf("\n");//end of the week(saturday) nextline
				dayOfWeek = 1;
			}
		}
		if (dayOfWeek != 1)
			printf("\n");

		startingDay = dayOfWeek;//last day of the month saved for next month starting date

	}
	printf("\n\n\n");
}
int start(int year) {
	
	
	int ref_year = 1000, leap = 0, diff, day, dayDiff;
	unsigned long long int total_days = 0;

		diff = year - ref_year;

		while (ref_year < year)
		{
			if ((ref_year % 4 == 0) && (ref_year % 100 != 0) || (ref_year % 400 == 0))
				leap++;

			ref_year++;
		}
		
		total_days = (diff * 365) + (leap * 1);
		dayDiff = (total_days % 7) + 1;
		day = ((2 + dayDiff) % 7) + 1;
	return day;
}
