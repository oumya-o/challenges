#include <stdio.h>

int main() {
int  N , i ;
    printf ("Entre une Number : ");
    scanf ("%d", &N);
    for (i=0; i < N ; i++ ){
    printf("%d\n" ,2 * i + 1);
    }
  return 0;
}