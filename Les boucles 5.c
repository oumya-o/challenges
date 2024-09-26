#include <stdio.h>

int main() {
int  a , b , i ;
    printf ("Entre la base : ");
    scanf ("%d", &a);
    printf ("Entre l\'exposant : ");
    scanf ("%d", &b);
    b=1;
     for (i=0 ; i<=a ;i++) {
         
    b=b*a;
     
  
     }
  printf(" %d", b );
    
    return 0;
}