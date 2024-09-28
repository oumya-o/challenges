#include <stdio.h>
int main() {
    int n, i, sum = 0;
        printf("Entre la taille : ");
        scanf("%d", &n);
    int T[100]; 
        printf("Entre les éléments :\n");
    for (i = 0; i < n; i++) {
       
        scanf("%d", &T[i]);
        sum += T[i];
    }
    printf("La sum de number est : %d\n", sum);
    return 0;
}