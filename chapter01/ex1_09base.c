#include <stdio.h>

/* copy input to output, replacing each string of one or
 * more blanks by a single blank.
 *
 * It was designed not to use logical operator or breaks
 * statements.
 */
int main(void)
{
	char c;

	while ((c = getchar()) != EOF)
	{
		putchar(c);
		if (c == ' ')
		{
			while ((c = getchar()) == ' ');
			putchar(c);
		}
	}
	return 0;
}
