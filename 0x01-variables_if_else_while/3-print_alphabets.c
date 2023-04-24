#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int n = 97;
int m = 65;

while (n <= 122)
{
punchar(n);
n++;
}
while (m <= 98)
{
punchar(n);
m++;
}
punchar('\n');
return (0);
}
