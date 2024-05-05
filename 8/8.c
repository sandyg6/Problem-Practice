#include<stdio.h>
int main(){
    int n, sqOfnum,lenOfnum = 0,mul=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    int num = n;
    sqOfnum = n*n;
    while (n>0)
    {
        lenOfnum+=1;
        n/=10;
    }
    for(int i=0;i<lenOfnum;i++){
        mul = mul * 10;
    }
    int digitOfSq = sqOfnum % mul;
    if (num == digitOfSq)
    {
        printf("Automorphic Number");
    }
    else{
        printf("Not an Automorphic number");
    }
}
