#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */
int main(void)
{
README.md int n;

README.md srand(time(0));
README.md n = rand() - RAND_MAX / 2;

README.md if (n > 0)
README.md printf("%d is positive\n", n);
README.md else if (n == 0)
README.md printf("%d is zero\n", n);
README.md else
README.md printf("%d is negative\n", n);

README.md return (0);

}
