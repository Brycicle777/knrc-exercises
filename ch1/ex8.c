#include <stdio.h>

/* Write a program to count blanks, tabs, and newlines */
main()
{
	int c, bl, tb, nl;

	bl = 0; /* Not really sure what a blank means here? Treating as space idk */
	tb = 0;
	nl = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++bl;
		if (c == '\t')
			++tb;
		if (c == '\n')
			++nl;
	}
	printf("%d blanks, %d tabs, %d newlines\n", bl, tb, nl);
}
