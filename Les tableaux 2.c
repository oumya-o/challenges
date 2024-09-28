

#include <stdio.h>

int main() {
    int n;

    printf("Entre la taille :");
    scanf("%d", &n);

    int T[n];

    printf("Entre les éléments :\n");
    
    for (int i = 0; i < n; i++) {
        
        scanf("%d", &T[i]);
    }

    printf("Alors :\n");
    for (int i = 0; i < n; i++) {
        
        printf("T[%d] = %d\n", i,T[i]);
    }

    return 0;
}