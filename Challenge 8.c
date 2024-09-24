#include <stdio.h>
#include <math.h>
int main() {
  float a , b , c , MoyenneGéométrique;
  printf("Entre a : ");
  scanf("%f",&a);
  printf("Entre b : ");
  scanf("%f",&b);
  printf("Entre c : ");
  scanf("%f",&c);
  
 MoyenneGéométrique = pow(a * b * c, 1.0 / 3.0);
  
  printf("Moyenne géométrique : %.2f\n" ,MoyenneGéométrique );

  
  
  return 0;
}