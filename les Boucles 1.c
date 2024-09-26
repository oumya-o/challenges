#include <stdio.h>

int main() {
    int i ,N  ;
    printf ("Entre une Number : ");
    scanf ("%d", &N);
    
    while (i <= 10) {
  printf("%d * %d = %d\n", i , N , N*i );
  i ++;
}
    
    return 0;
}