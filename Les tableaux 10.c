#include <stdio.h>

int main() {
int   n , x;
printf ("Entre la taille de tableau :");
scanf("%d",&n);
int T[n];
printf("Entre les éléments :\n");
  for (int i = 0 ; i < n; i++){
    printf ("T[%d]=",i);
      scanf ("%d",&T[i]);
  }
  printf ("Entre un element :");
  scanf ("%d", &x);
  for (int i = 0 ; i < n; i++){
    if (T[i] == x){
      printf("L'élément est présent");
      
       return 0;
        
    }
}

      printf ("L'élément est absent");
  
 
    return 0;
}