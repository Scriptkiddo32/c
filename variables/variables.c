#include <stdio.h>
#include <stdbool.h>


int main()
{
  int integerVar = 100;
  float floatingVar = 331.79;
  double doubleVar = 8.44;
  char charVar = 'W';

  bool boolVar = false;

  printf("integerVar = %i\n", integerVar);
  printf("floatingVar = %f\n", doubleVar);
  printf("doubleVar = %e \n", doubleVar);
  printf("floatingVar = %g\n", doubleVar);
  printf("charVar = %c\n", charVar);
  printf("boolVar = %i\n", boolVar);
  return 0;
}