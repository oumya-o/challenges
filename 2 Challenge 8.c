int main() {
   float M;
   printf("Entre le moyenne de l\'élève : ");
   scanf("%f", &M);
   
   if ( 10 > M  && M > 0){
       printf("Recalé");
   }else if (10 <= M && M <= 12){
       printf ("Passable");
   }else if (12 < M && M <= 14){
       printf("Assez bien");
   }else if (14 < M && M <= 16){
       printf("Bien");
   }else if (16 < M && M <= 20){
       printf("Très bien");
   }else {
       printf("Faut Donnes");
   }
    return 0;
}