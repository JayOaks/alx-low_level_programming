#include <stdio.h>

void ahead(void) __attribute__ ((constructor));

void ahead(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
