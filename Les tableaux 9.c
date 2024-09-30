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
  printf (" Les number on onrdre Croissant\n");
  for (int i = n-1 ; i >= 0; i--){
    
      printf("T[%d] = %d\n" , i, T[i]);
      
  }
  
  
    return 0;
}