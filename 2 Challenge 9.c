#include <stdio.h>

int main() {
   char L;
   printf("Entre la letter : ");
   scanf("%c", &L);
   
   if ( 'A' <= L && L <= 'Z'){
       printf("c\'est un alphabet Majuscule");
   }else if ( 'a' <= L && L <= 'z'){
       printf("c\'est un alphabet Miniscule");
   }else{
       printf("Pas d\'un alphabet");
   }
    return 0;
}