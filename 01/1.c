#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The extracted digits are:\n");
    while(num>0){
        printf("%d ",num%10);
        num/=10;
    }
    return 0;
}