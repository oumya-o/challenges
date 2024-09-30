#include <stdio.h>

int main() {
int   n , Tmax;
printf (" entre la taille :");
scanf("%d",&n);
int T[n];
printf("Entre les éléments :\n");
  for (int i = 0 ; i < n; i++){
    printf ("T[%d]=",i);
      scanf ("%d",&T[i]);
  }
  Tmax = T[0];
  for (int i = 0 ; i < n; i++){
       if (T[i]>Tmax){
           Tmax = T[i];
       }
    
  }printf("Le max number entre les %d numbers est :%d", n ,Tmax);
    return 0;
}