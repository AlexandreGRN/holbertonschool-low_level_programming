#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

typedef struct typeee
{
	char ctype;
	void (*f)(int *a, ...);
}type_t;

void fc(int *a, ...);
void fi(int *a, ...);
void ff(int *a, ...);
void fs(int *a, ...);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
