#include <stdio.h>

int main() {
    float x , y;
    printf("entre 1er Nr :");
    scanf("%f" , &x);
    printf("entre 2er Nr :");
    scanf("%f" , &y);
    
if ( x == y ){
    printf( " (Nr1 + Nr2) * 3 = %.2f ", (x+y)*3);
}else{
    printf("Nr1 + Nr2 = %.2f", x + y );
}
    return 0;
}