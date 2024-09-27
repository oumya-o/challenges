#include <stdio.h>

int main() {
   char L;
   printf("Entre la letter : ");
   scanf("%c", &L);
   
   if ( 65 <= L && L <= 90){
       printf("La letter est Majuscule");
   }else{
       printf("la lettre est Miniscule");
   }
    return 0;
}