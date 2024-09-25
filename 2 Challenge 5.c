#include <stdio.h>

int main() {
    int  A , M , j , S , H , Min , Sec , n;
    printf("entre les années : ");
    scanf("%d" , &A);
    printf("entre un nomber 1~6\n1-Mois\n2-semaines\n3-Jour\n4-heurs\n5-Min\n6-Sec\n -----:");
    scanf("%d",&n);
    
    S = A* 52;
    M = A* 12;
    j = A* 365;
    H = A* 8766;
    Min =A* 8766*60;
    Sec = A* 8766*60*60;

switch (n) {
  case 1:
    printf("Il y a %.d Mois" ,M);
    break;
  case 2:
    printf("Il y a %.d Semaines" ,S);
    break;
  case 3:
    printf("Il y a %.d Jours" ,j);
    break;
  case 4:
    printf("Il y a %.d heures" ,H);
    break;
  case 5:
    printf("Il y a %.d Min" ,Min);
    break;
  case 6:
    printf("Il y a %.d Sec" ,Sec);
    break;
}
    return 0;
}