#include<stdio.h>
int main(){
    int num , rev = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int n = num;
    while(n>0){
        rev = rev*10 + n%10;
        n/=10;
    }
    if(rev == num){
        printf("Palindromic number");
    }
    else{
        printf("Not a Palindromic Number");
    }
}