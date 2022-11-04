#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

typedef struct typeee
{
	char ctype;
	void (*f)(va_list ptr);
}type_t;

void fc(va_list ptr);
void fi(va_list ptr);
void ff(va_list ptr);
void fs(va_list ptr);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
