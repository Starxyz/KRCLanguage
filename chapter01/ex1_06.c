/* This program prompts for input, and then captures a character
 * from the keyboard. If EOF is signalled (typically through a 
 * CTRL-D or CTRL-Z character, thogh not necessarily),
 * the program prints 0. Otherwise, it print 1.
 *
 * If your input stream is buffered (and it probaly is), then
 * you will need to press the ENTER key before the program will
 * respond.
 */

#include <stdio.h>

int main(void)
{
	printf("Press a key. ENTER would be nice :-)\n\n");
	printf("The expression getchar() != EOF evaluates to %d\n",
			getchar() != EOF);

	return 0;
}
