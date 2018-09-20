#include <stdio.h>
/* read a character */

int main(void)
{
	int c;

	c = getchar();
	while ((c = getchar()) != EOF)
	{
		putchar(c);
	}
	printf("%d\n", c);

	return 0;
}
