#include <stdio.h>

int main() {
  float number1, number2, number3;
  float pond1 = 2 , pond2 = 3 , pond3 = 5 ;
  float Sum1 , SumPond , MoyennePond;
  printf("Entre number1 : ");
  scanf("%f",&number2);
  printf("Entre number2 : ");
  scanf("%f",&number2);
  printf("Entre number3 : ");
  scanf("%f",&number3);
  
  Sum1 = (number1 * pond1) + (number2 * pond2) + (number3+pond3);
  SumPond = pond1 + pond2 + pond3;
  MoyennePond = Sum1 / SumPond;
  
  
  printf("MoyennePond : %.2f\n" ,MoyennePond );

  
  
  return 0;
}