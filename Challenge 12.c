#include <stdio.h>

int main() {
    
       int A ;
       int t , z , y , x;
       int B;
       printf("Entier un nombre à quatre chiffres :");
       scanf("%d" , &A);
       
       t =  A / 1000;
       z = (A / 100)%10;
       y = (A / 10)%10;
       x =  A % 10;
       B =(x * 1000 )+ (y * 100) + (z * 10) + t ;
       
       printf (" l'ordre inverse de la nombre  :%d ", B);

    return 0;
}