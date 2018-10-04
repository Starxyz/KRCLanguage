#include <stdio.h>

int main(void)
{
	char c;
	int flag = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			flag++;
		}
		else
		{
			flag = 0;
		}
		if (flag > 1)
			continue;
		putchar(c);
	}

	return 0;
}
