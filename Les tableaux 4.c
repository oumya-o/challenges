#include <stdio.h>

int main() {
    int n, i;
    int M;

    printf(" Combien de numbers ");
    scanf("%d", &n);

    int tableau[n]; 


    printf("Entre les number :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    M = tableau[0];

    for (i = 1; i < n; i++) {
        if (tableau[i] > M) {
            M = tableau[i];
        }
    }

    printf("le grand number entre les %d numbers est : %d\n", n, M);

    return 0;
}
