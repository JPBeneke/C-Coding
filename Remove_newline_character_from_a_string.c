/* Remove newline character from a string. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char name [20];
	printf("What is you name? ");
	if (fgets(name, sizeof name, stdin) != NULL)
	{
		name[strlen (name) - 1] = '\0';	 /* Remove newline character from a string. */
	}

	printf("Hello %s!\n", name);

	return(0);
}
