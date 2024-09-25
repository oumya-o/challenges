#include <stdio.h>
#include <math.h>
int main() {
    float a , b , c ;
    float D  ;
    printf("entre la valuer de a :");
    scanf("%f" , &a);
    printf("entre la valuer de b:");
    scanf("%f" , &b);
    printf("entre la valuer de c :");
    scanf("%f" , &c);
    
    D = pow(b,2)*(4 * a * c);
if ( D > 0 ){
    printf( " solution 1= %.2f ", (-b + (sqrt (D)))/(2*a));
    printf( " solution 1= %.2f ", (-b - (sqrt (D)))/(2*a));
}else if ( D == 0 ){
    printf("Solution = %.2f", (-b)/(2 * a ) );
    
}else {
     printf("cette équation n\'admet pas de solutions réelles");
}
    return 0;
}