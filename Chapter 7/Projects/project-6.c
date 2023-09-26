//Prints values of sizeof
#include <stdio.h>

int main(void)
{
  printf("Value of sizeof(int): %d\n", (int) sizeof(int));
  printf("Value of sizeof(short): %d\n", (int) sizeof(short));
  printf("Value of sizeof(long): %d\n", (int) sizeof(long));
  printf("Value of sizeof(float): %d\n", (int) sizeof(float));
  printf("Value of sizeof(double): %d\n", (int) sizeof(double));
  printf("Value of sizeof(long double): %d\n", (int) sizeof(long double));

  return 0;
}