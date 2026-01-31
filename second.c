#include <stdio.h>
#include <conio.h>

int fact(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  else if (n > 1)
  {
    return n * fact(n - 1);
  }
}

int main()
{
  int n = 4;
  fact(n);
  printf("The factorial of %d is %d", n, fact(4));
  return 0;
}