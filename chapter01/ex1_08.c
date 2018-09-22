#include <stdio.h>

/*count blanks, tabs and newline from input. */
int main(void)
{
	int ns, nt, nl;
	int c;
	ns = nt = nl = 0;
	
	while((c = getchar()) != EOF)
	{
		switch(c)
		{
			case ' ':
				++ns;
				break;
			case '\t':
				++nt;
				break;
			case '\n':
				++nl;
				break;
			default:
				break;
		}
	}

	printf("blanks: %d\ttabs: %d\tnewlines: %d\n", ns, nt, nl);

	return 0;
}
