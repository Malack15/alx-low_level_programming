#include "main.h"
/**
* _power - calculate (base and power)
* @base: base of the exponet
* @pow: power of the exponet
* Return: value of base and power
*/
unsigned long int _power(unsigned int base, unsigned int pow)
{
unsigned long int number;
unsigned int i;

number = 1;
for (i = 1; i <= pow; i++)
number *= base;
return (number);
}
/**
* print_binary - prints the binary representation of a number
* @n: num of prented
* Return: void
*/
void print_binary(unsigned long int n)
{
unsigned long int d, result;
char flag;

flag = 0;
d = _power(2, sizeof(unsigned long int) * 8 - 1);

while (d != 0)
{
result = n & d;
if (result == d)
{
flag = 1;
_putchar('1');

}
else if (flag == 1 || d == 1)
{
_putchar('0');
}
d >>= 1;
}
}
