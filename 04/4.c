#include<stdio.h>
int main()
{
    int num, total=0;
    printf("Enter a number:");
    scanf("%d",&num);
    int n = num;
    while(num>0){
        int rem = num%10;
        total+=rem;
        num/=10;
    }
    if(n%total==0){
        printf("Harshad number");
    }
    else{
        printf("Not a Harshad number");
    }
    return 0;
}