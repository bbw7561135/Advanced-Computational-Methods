#include<stdio.h>

unsigned long factorial(unsigned long n)
{
  if(n<2)
    {
      return n;
    }
  else
    {
      return n*factorial(n-1);
    }
}


int main(void)
{
  unsigned long number = 10L;
  printf("The factorial of %lu is %lu.\n",number,factorial(number));
  return 0;
}
