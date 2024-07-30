#include <stdio.h>

#define TAB 9
#define BACKSPACE 8
#define DELETE 127
#define BACKSLASH 92

/* copy input to output, replace tab with \t, backspace with \b, backslash by \\ */
main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == TAB)
			printf("\\t");
		else if (c == BACKSPACE || c == DELETE)
			/* Seems this doesn't work because input not read until \n pressed */
			printf("\\b");
		else if (c == BACKSLASH)
			printf("\\\\");
		else
			putchar(c);
	}
}
