#include <stdio.h>

int main() {
  float N1, N2, N3;
  float P1 = 2 , P2 = 3 , P3 = 5 ;
  float Sum1 , SumPond , MoyennePond;
  printf("Entre number1 : ");
  scanf("%f",&N2);
  printf("Entre number2 :");
  scanf("%f",&N2);
  printf("Entre number3 : ");
  scanf("%f",&N3);
  
  Sum1 = (N1*P1)+(N2*P2)+(N3*P3) ;
  SumPond = P1 + P2 + P3;
  MoyennePond = Sum1 / SumPond;
  
  
  printf("MoyennePond : %.2f\n" ,MoyennePond );

  
  
  return 0;
}