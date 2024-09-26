#include <stdio.h>

int main() {
  int i=1 , N , f=1 ;
    printf ("Entre une Number : ");
    scanf ("%d", &N);
     while (i <= N) {
         
    f*=i;
    i++;
    
     }
    printf("%d" ,f );
   

    
    return 0;
}