#ifndef _MAIN_H_

#define _MAIN_H_


#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 *
 * Return: on success `.
 * On error, -1 is returned, and error is set appropretelyl
 * */


int _putchar(char c);



void print_alphabet(void);



void print_alphabet_x10(void);



int _islower(int c);



int _isalpha(int c);



int print_sign(int n);



int _abs(int);


int print_last_digit(int);


void jack_bauer(void);


void times_table(void);


int add(int, int);


void print_to_98(int n);

#endif

