#include <stdio.h>

int main() {
int  a , b , i , x;
    printf ("Entre la base : ");
    scanf ("%d", &a);
    printf ("Entre l\'exposant : ");
    scanf ("%d", &b);
    x=1;
     for (i=1 ; i<=b ;i++) {
         
    x=x*a;
     
  
     }
  printf(" %d", x );
    
    return 0;
}