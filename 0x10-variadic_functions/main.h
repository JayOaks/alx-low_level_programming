#ifndef MAIN_H
#define MAIN_H

/**
 * Auth: Jeroldine Oakley
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x10-variadic_functions directory.
 */


int _putchar(char c);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
