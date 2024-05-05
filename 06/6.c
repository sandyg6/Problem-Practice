#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int rev = 0;
    while(num>0){
        int rem = num%10;
        rev = rev*10 + rem;
        num/=10;
    }
    printf("The reversed number is %d",rev);
    return 0;
}