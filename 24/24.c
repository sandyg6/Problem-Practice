#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int l=1,u=n;
    printf("The series:");
    for(int i=0;i<n;i++){
        printf(" %d %d",l,u);
        l+=1;
        u-=1;
    }
}