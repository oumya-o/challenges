#include <stdio.h>

int main() {
   int A , M , J ;
   printf("Entre l'année : ");
   scanf("%d", &A);
   printf("Entre le mois : ");
   scanf("%d", &M);
   printf("Entre le jour : ");
   scanf("%d", &J);
   printf("%d/%d/%d" , A , M , J);
   
   
   switch (M){
  case 1:
    printf("\n%d/Janvier/%d" , A , J );
    break;
  case 2:
    printf("\n%d/Février/%d" , A , J);
    break;
  case 3:
    printf("\n%d/Mars/%d" , A , J);
    break;
  case 4:
    printf("\n%d/Avril/%d" , A , J);
    break;
  case 5:
    printf("\n%d/Mai/%d" , A , J);
    break;
  case 6:
    printf("\n%d/Juin/%d" , A , J);
    break;
  case 7:
    printf("\n%d/Juillet/%d" , A , J);
    break;
  case 8:
    printf("\n%d/Août/%d" , A , J);
    break;
  case 9:
    printf("\n%d/Septembre/%d" , A , J);
    break;
  case 10:
    printf("\n%d/Octobre/%d" , A , J);
    break;
  case 11:
    printf("\n%d/Novembre/%d" , A , J);
    break;
  case 12:
    printf("\n%d/Décembre/%d" , A , J);
    break;
}

   
  
    return 0;
}