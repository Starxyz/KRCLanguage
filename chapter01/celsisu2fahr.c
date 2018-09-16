#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = -20;/* lower limit of temperature scale */
	upper = 150;/* upper limit */
	step = 10;	/* step size */

	celsius = lower;
	printf("  C\t     F\n");/* align to right */
	while (celsius <= upper)
	{
		fahr = 32.0 + celsius * 9.0 / 5.0;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius += step;
	}
	
	return 0;
}
