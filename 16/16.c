#include <stdio.h>

int main() {
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    printf("Before swapping:\n");
    printf("number 1: %d\n",num1);
    printf("number 2: %d\n",num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After swapping:\n");
    printf("number 1: %d\n",num1);
    printf("number 2: %d\n",num2);
    return 0;
}
