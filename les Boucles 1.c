#include <stdio.h>

int main() {
  int i=1 , N  ;
    printf ("Entre une Number : ");
    scanf ("%d", &N);
    
  while (i <= 10) {
    printf("%d x %d = %d\n", N , i , N*i );
   i ++;
}
    
    return 0;
}