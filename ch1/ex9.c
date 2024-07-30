#include <stdio.h>

/* Copy its input to its output, replacing each string of one or
* more blanks by a single blank */
main()
{
	int c, lc;

	while ((c = getchar()) != EOF)
	{
		if (c != ' ' || lc != ' ')
			putchar(c);
		lc = c;
	}
}
