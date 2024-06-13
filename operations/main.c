#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    int add = num1 + num2;
    int sub = num1 - num2;
   int mult = num1 * num2;
    float div = num1 * num2;
  
    printf("ADD = %d\n", add);
    printf("SUB = %d\n", sub);
    printf("MULT = %d\n", mult);
    printf("DIV = %.2f\n", div);
    printf("\n");
    return 0;
}