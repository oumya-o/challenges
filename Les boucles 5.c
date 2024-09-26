#include <stdio.h>
#include <math.h>
int main() {
int  a , b , i , x;
    printf ("Entre la base : ");
    scanf ("%d", &a);
    printf ("Entre l\'exposant : ");
    scanf ("%d", &b);
    
      for ( i = 0 ; i <= b ; i--) {
         x = pow (a,b) ;
       
    printf("%d^%d = %d\n" , a , b , x );
       break;
       
       }
  return 0;

}