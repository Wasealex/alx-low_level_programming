#include <stdio.h>
/**
 *before_main - print before main function
 *
 */
int before_main(void) __attribute__((constructor));
int before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return (0);
}
