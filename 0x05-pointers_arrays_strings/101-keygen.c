#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */

int main(void)
{
int pw[100];
int i, j, sum;

j = 0;        

srand(time(NULL));

for (i = 0; i < 100; i++)
{
pw[i] = rand() % 78;
j += (pw[i] + '0');
putchar(pw[i] + '0');
if ((2772 - j) - '0' < 78)
{
sum = 2772 - j - '0';
j += sum;
putchar(sum + '0');
break;
}
}

return (0);
}
