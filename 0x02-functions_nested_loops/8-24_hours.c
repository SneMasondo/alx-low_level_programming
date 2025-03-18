#include "main.h"

/**
 * jack_bauer - prints every minute of the day.
 *
 * Return: nothing.
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)  /* Loop through 24 hours */
	{
		for (minute = 0; minute < 60; minute++)  /* Loop through 60 minutes */
		{
			_putchar((hour / 10) + '0');  /* Print the tens place of hour */
			_putchar((hour % 10) + '0');  /* Print the ones place of hour */
			_putchar(':');  /* Print colon */
			_putchar((minute / 10) + '0');  /* Print the tens place of minute */
			_putchar((minute % 10) + '0');  /* Print the ones place of minute */
			_putchar('\n');  /* Newline after each time */
		}
	}
}
