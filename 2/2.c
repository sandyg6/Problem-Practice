#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0){
        int r =num%10;
        count++;
        num/=10;
    }
    printf("Digit count: %d",count);
    return 0;
}