#include <stdio.h>

int main() {
int   n , Tmin;
printf (" entre la taille :");
scanf("%d",&n);
int T[n];
printf("Entre les éléments :\n");
  for (int i = 0 ; i < n; i++){
    printf ("T[%d]=",i);
      scanf ("%d",&T[i]);
  }
  Tmin = T[0];
  for (int i = 0 ; i < n; i++){
       if (T[i]<Tmin){
           Tmin = T[i];
       }
    
  }printf("Le max number entre les %d numbers est :%d", n ,Tmin);
    return 0;
}