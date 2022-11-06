/*
 * File: 100-first.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * here - Prints a string before the main functuon is executed
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,\\n""I bore my house upon my back!\\n");
}
