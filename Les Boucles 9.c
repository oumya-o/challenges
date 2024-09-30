#include <stdio.h>

int main() {
int  n  , i=0;
    printf ("Entre les chiffres : ");
    scanf ("%d", &n);
    
    while (n!=0){
    n = n / 10 ;
    i++;
    

       }printf ("Nomber de chiffres est : %d",i);
        
    
    
    
    return 0;
}