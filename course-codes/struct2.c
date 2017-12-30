#include<stdio.h>

struct person
{
  int age;
  double height;
  double weight;
};

int main(void) {
  struct person BillyBob={34,1.93,85.0};
  printf("The age is %d.\n",BillyBob.age);
  printf("The height is %.1f.\n",BillyBob.height);
  printf("The weight is %.1f.\n",BillyBob.weight);
  return 0;
}
