#include <stdio.h>

int main() {
   float N;
   printf("Entre le nomber que vos doit traite : ");
   scanf("%f", &N);
   
   if ( N < 0){
       printf("Le number est nagatif");
   }else if ( 0 < N ){
       printf("Le number est Positif");
   }else{
       printf("le number est Nul");
   }
    return 0;
}