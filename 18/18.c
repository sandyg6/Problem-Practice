#include <stdio.h>

int main() {
    int a,d,n,sum_of_AP;
    printf("Enter the first number of AP:\n");
    scanf("%d",&a);
    printf("Enter the difference of each number in AP:\n");
    scanf("%d",&d);
    printf("Enter the number of terms of AP need to be printed:\n");
    scanf("%d",&n);
    
    sum_of_AP = (n/2)*(2*a + (n-1)*d);
    
    printf("The sum of Arithmetic progression: %d",sum_of_AP);
    return 0;
}
