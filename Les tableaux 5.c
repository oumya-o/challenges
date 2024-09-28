#include <stdio.h>

int main() {
    int n, i;
    int Min;

    printf(" Combien de numbers ");
    scanf("%d", &n);

    int tableau[n]; 


    printf("Entre les number :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    Min = tableau[n-1];

    for (i = 1; i < n; i++) {
        if (tableau[i] < Min) {
            Min = tableau[i];
        }
    }

    printf("le plus petit number entre les %d numbers est : %d\n", n, Min);

    return 0;
}
