#include <stdio.h>

int main() {
int  N , f=0 ,i ;
    printf ("Entre une Number : ");
    scanf ("%d", &N);
     for (i=1 ; i<=N ; i++) {
         
    f+=i;
     }
    printf("%d" ,f );
   
   
  return 0;
}