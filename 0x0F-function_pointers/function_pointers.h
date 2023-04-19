#ifndef FUCTION_POINTERS_H
#define FUCTION_POINTERS_H

#include <stdio.h>
#include <stddef.h>

void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
int int_index(int *array, int size, int (*cmp)(int));

#endif