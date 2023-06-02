#include <stdio.h>

void Before(void)__attribute__((constructor));

/**
 * Before - prints a sentence before the main
 * function is executed
 */
void Before(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
