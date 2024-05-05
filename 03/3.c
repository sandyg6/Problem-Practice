#include<stdio.h>
int main()
{
    int num, flag=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0){
        int rem = num%10;
        if(rem==0){
            flag=1;
        }
        num/=10;
    }
    if(flag==1){
        printf("Duck number");
    }
    else{
        printf("Not a duck number");
    }
    return 0;
}