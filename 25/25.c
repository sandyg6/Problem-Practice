#include<stdio.h>

int checkAbundant(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int num = checkAbundant(n);
    if(num>n){
        printf("The given number is Abundant\n");
    }
    else{
        printf("The given number is not Abundant\n");
    }

}