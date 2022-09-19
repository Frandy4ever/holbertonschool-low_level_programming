/*
 *  * File: 
 *   * Auth: Frandy Slueue @holbertonschool
 *    */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
int f;

srand(time(0));
n = rand() - RAND_MAX / 2;
f = n % 10;

if (n > 5)
{
printf("Last digit of %i is %i and is greater than 5\n",n,f);
}
else if (n == 0)
{
printf("Last digit of %i is %i and is 0\n",n,f);
}
else
{
printf("Last digit of %i is %i and is less than 6 ans not 0\n",n,f);
}

return (0);

}
