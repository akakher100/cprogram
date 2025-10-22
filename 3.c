//Write a program that converts temperature from Celsius to Fahrenheit 

#include <stdio.h>
int main()
{
      int c, f;
      printf("Enter temperature in C to F: ");
      scanf("%d", &c);
      f = (9 * c)/5 + 32;            // we know, C/5 = (F-32)/9
      printf("Temperature %dF", f);
      return 0;
}
