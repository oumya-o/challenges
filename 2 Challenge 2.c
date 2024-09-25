#include <stdio.h>

int main() {
    char Letter;
    printf("entre un letter : ");
    scanf("%c" , &Letter);

switch (Letter) {
  case 'a':
    printf("voyelle");
    break;
  case 'e':
    printf("voyelle");
    break;
  case 'u':
    printf("voyelle");
    break;
  case 'i':
    printf("voyelle");
    break;
  case 'o':
    printf("voyelle");
    break;
  default :
    printf("non voyelle");
}
    return 0;
}