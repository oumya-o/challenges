#include <stdio.h>

int main() {
int   n ;
printf ("Entre la taille de tableau :");
scanf("%d",&n);
int T[n];
printf("Entre les éléments :\n");
  for (int i = 0 ; i < n; i++){
    printf ("T[%d]=",i);
      scanf ("%d",&T[i]);
  }
  int B[n];
printf ("Les element dans la 2eme tableau :\n");
  for (int i = 0 ; i < n; i++){
   
    B[i]=T[i];
    
      printf("B[%d]=%d\n",i , B[i]);
      }

   return 0;
}