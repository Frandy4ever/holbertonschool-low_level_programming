/*
 * File: 0-binary_to_uint.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * binary_to_unit - Converts a binary number to an unsigned int
 * @b: Pointer to string of 0 and 1 chars
 *
 * Return: 0 or converted number
 */

unsigned int binary_to_uint( const char *b)
{
 unsigned int k = 1;
 unsigned int sum = 0;
 int count;
 unsigned int len;

 len = strlen(b);

  for (count = len - 1; count >= 0; count--)
 {
  if (b[count] != '0' && b[count] != '1')
      return (0);
    
  if (b[count] == '1')
    {
     sum += k;
     }
    k *= 2;
}
 
return (sum);
}

