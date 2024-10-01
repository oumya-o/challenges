// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n , x;
       printf ("Entre la taille de la 1er Tab :");
       scanf ("%d",&n);
       printf ("Entre la taille de la 2eme Tab :");
       scanf ("%d",&x);
   int T1[n] , T2[x];
       printf("Entrez les element de la 1er tab\n");
     for (int i=0 ;i<n; i++){
       printf("T1[%d]=",i);
       scanf("%d",&T1[i]);
       }
       printf("Entrez les element de la 2eme tab\n");
     for (int i=0 ;i<x; i++){
       printf("T2[%d]=",i);
       scanf("%d",&T2[i]);
     }
     int T3[x+n];
    
  for (int i = 0; i < n; i++) {
        T3[i] = T1[i];
    }
    for (int i = 0; i < x; i++) {
        T3[n + i] = T2[i];
    }

    printf("Les elements de la 3eme tab sont :\n");
    for (int i = 0; i < x + n; i++) {
        printf("T3[%d]=%d\n", i, T3[i]);
    }

    return 0;
}