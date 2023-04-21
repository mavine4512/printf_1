#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#define BUFF_SIZE 1024

/*Prototype functions*/
int _printf(const char *format, ...);

/*Function to handle other specifiers */
int get_flags(const char *format, int *i);
int get_size(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);

/*Functions to print charactors*/
int print_char(va_list types, char buffer[], int flag, int width, int precision int size);

#endif
