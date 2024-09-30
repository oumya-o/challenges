#include <stdio.h>

int main() {
int   n , Multi , F;
printf ("Entre la taille de tableau :");
scanf("%d",&n);
int T[n];
printf("Entre les éléments :\n");
  for (int i = 0 ; i < n; i++){
    printf ("T[%d]=",i);
      scanf ("%d",&T[i]);
  }
  
printf ("entre le facteur de multiplication: ");
scanf("%d",&F);

  for (int i = 0 ; i < n; i++){
    Multi = T[i]*F;
      printf("T[%d] x %d = %d\n" ,i , F ,Multi);
      
  }
  
  
    return 0;
}