#include<stdio.h>
int main(){
    int n;
    printf("Enter range:");
    scanf("%d",&n);
    int sum_of_n_square = ((n*(n+1)*(2*n+1))/6);
    printf("The sum of square of first %d Natural numbers is %d",n,sum_of_n_square);
    return 0;
}