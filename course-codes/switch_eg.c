#include<stdio.h> 

int main( void ) 
{
  int which;
  which = 2;  /* This could be a lottery result etc. */
  switch(which)
    {
    case 1:
      printf("You are the winner.\n");
      break;
    case 2:
      printf("You came second.\n");
      break;
    case 3:
      printf("You came third.\n");
      break;
    case 4: case 5:
      printf("You came very close!\n");
      break;
    default:
      printf("You did not make it to the podium.\n");
      break;
    }
  return 0;
}
