#include <stdio.h>

int main() {
int   n , S;
printf (" entre la taille :");
scanf("%d",&n);
int T[n];
printf("Entre les éléments :\n");
  for (int i = 0 ; i < n; i++){
    printf ("T[%d]=",i);
      scanf ("%d",&T[i]);
  }  
  printf("Les element sont:\n");
for (int i = 0; i < n; i++) {
        
        printf("T[%d] = %d\n", i,T[i]);
        S=S+T[i];
      
    }
  printf("La somme est :%d", S);
    return 0;
}