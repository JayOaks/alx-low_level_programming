#include <stdio.h>

int main(void)
{
    char c;
    int i;
    long li;
    long long lii;
    float f;

    printf("Size of a char: %ld byte(s)", sizeof(c));
    printf("Size of an int: %ld byte(s)", sizeof(i));
    printf("Size of a long int: %ld byte(s)", sizeof(li));
    printf("Size of a long long int: %ld byte(s)", sizeof(lii));
    printf("Size of a float: %ld byte(s)", sizeof(f));
    return (0);
}
