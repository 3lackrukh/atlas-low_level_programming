#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _isupper(int c);
int _islower(int c);
int _isalpha(int c);
int _isdigit(int c);
int mul(int a, int b);
int print_sign(int n);
int _abs(int n);
int print_last_digit(int);
void print_numbers(void);
void print_most_numbers(void);
void print_line(int n);
void more_numbers(void);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);

#endif
