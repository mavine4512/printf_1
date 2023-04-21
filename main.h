#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#define BUFF_SIZE 1024
#define UNUSED(x) (void)(x)

/*Prototype functions*/
int _printf(const char *format, ...);
int  handle_print(const char *fmt, int *i, va_list list, char buffer[], int flags, int width, int precision, int size);

/*Function to handle other specifiers */
int get_flags(const char *format, int *i);
int get_size(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);

/*Sizes*/
#define S_SHORT 1
#define S_LONG 2

/*Flags*/
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/*Functions to print charactors*/
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);

/*UTILS*/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

#endif
