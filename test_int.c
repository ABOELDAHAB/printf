#include "main.h"

/**
 * test_deci - print args of int
 * @bb: parameter
 * Return: Always 0.
 */
void test_deci(va_list bb)
{
int b;

b = va_args(bb, int);
if (b < 0)
{
b = b * -1;
pr('-');
}
if (b == 0)
return;
deci(b / 10);
pr(((b % 10) + '0'));
}