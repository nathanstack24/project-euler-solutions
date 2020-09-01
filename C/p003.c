/* LARGEST PRIME FACTOR */

/* 
  The prime factors of 13195 are 5, 7, 13 and 29.

  What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>
#include <math.h>

#define NUM 600851475143

int solution(void);

int main(void)
{
  printf("%d", solution());
  return 0;
}

int solution(void)
{
  long n = NUM;
  int largest = 0;

  while (n % 2 == 0)
  {
    largest = 2;
    n = n / 2;
  }

  // n must be odd
  for (int i = 3; i <= sqrt(n); i = i + 2)
  {
    while (n % i == 0)
    {
      if (i > largest)
        largest = i;

      n = n / i;
    }
  }

  if (n > 2 && n > largest)
    largest = n;

  return largest;
}