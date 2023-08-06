#include <stdio.h>

/**
 * main - the main function.
 *
 * Return: 0 success.
 */

int main(void)
{
	int year;
	int week;
	int days;

	printf("The total number of days: ");
	scanf("%d", &days);

	year = days / 365;
	week = (days - (year + 365)) / 7;
	days = days - ((year * 365) + (week * 7));

	printf("%d year = %d week = %d days\n", year, week, days);
	return (0);
}
