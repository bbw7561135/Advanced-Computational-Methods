#include<stdio.h> 

int main( void ) {  /* convert from fahrenheit to celsius */

  double celsius;
  double fahrenheit;
  fahrenheit = 82;

  celsius = (fahrenheit-32)*(5/9);           
  
  printf("%f degree Fahrenheit are %f degree Celsius.\n", 
	 fahrenheit, celsius);

  return 0;
}
