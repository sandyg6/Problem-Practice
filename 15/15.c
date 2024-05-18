#include <stdio.h>

int main() {
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    int min = (num1<num2)*num1 + (num2<num1)*num2;
    int max = (num1>num2)*num1 + (num2>num1)*num2;
    printf("The maximum number is %d\n",max);
    printf("The minimum number is %d",min);
    return 0;
}
