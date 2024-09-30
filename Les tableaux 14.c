#include <stdio.h>

int main() {
int   n , Moy=0;
float y;
printf ("Entre la taille de tableau :");
scanf("%d",&n);
int T[n];
printf("Entre les éléments :\n");
  for (int i = 0 ; i < n; i++){
    printf ("T[%d]=",i);
      scanf ("%d",&T[i]);
  }
for(int i = 0; i < n ; i++){
   
    Moy=Moy+T[i];
    
}

y=Moy/n;
printf("Le moyenne est %f\n" , y);
   return 0;
}