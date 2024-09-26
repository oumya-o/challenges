#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  srand(time(NULL));
  int randomchoice = (rand()%7)+1;
  printf ("Your lucky day this week is : ", randomchoice);
  switch (randomchoice){
     case 1 :
      printf("Lundi");
      break ;
     case 2 :
      printf("Mardi");
      break ;
     case 3 :
      printf ("Mercredi");
      break ;
     case 4 :
      printf("Jeudi");
      break ;
     case 5 :
      printf("Vendredi");
      break ;
     case 6 :
      printf("Samedi");
      break ;
     case 7 :
      printf("Dimanche");
      break ;
  }
  return 0;
}