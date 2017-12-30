#include<stdio.h>
int main(void){
  double price=1.42;
  int n=5;
  double total=0.;
  total = n*price;
  printf("%d bottles of milk at %4.2f "\
	 "each cost %5.2f in total.",
	 n,price,total);
  return 0;
}
