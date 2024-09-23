#include <stdio.h>
int main(void) {
double number1, number2;  
  printf("Type the 1st number: ");
      scanf("%lf",&number1);
  printf("Type the 2nd number: ");
      scanf("%lf",&number2);
   
  printf("\nSum = %.2lf", (number1 + number2));
  printf("\nSubtraction = %.2lf", (number1 - number2));
  printf("\nMultiplication = %.2lf", (number1 * number2));
  printf("\nDivision = %.2lf", (number1/number2));
  return 0;
}
