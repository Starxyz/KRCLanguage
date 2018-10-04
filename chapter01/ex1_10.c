#include <stdio.h>
/* copy input to output, replacing each tab by \t, each backspace by \b,
 * and each backslash by \\.
 */

int main(void)
{
	char c;

	while ((c = getchar()) != EOF)
	{
		switch (c)
		{
			case '\b': 
				printf("\\b");
				break;
			case '\t':
				printf("\\t");
				break;
			case '\\':
				printf("\\\\");
				break;
			default:
				putchar(c);
				break;
		}
	}

	return 0;

}
