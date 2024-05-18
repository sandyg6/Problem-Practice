#include <stdio.h>

int main() {
    int a,d,n,last;
    printf("Enter the first number of AP:\n");
    scanf("%d",&a);
    printf("Enter the difference of each number in AP:\n");
    scanf("%d",&d);
    printf("Enter the number of terms of AP need to be printed:\n");
    scanf("%d",&n);
    
    last = a + (n-1)*d;
    
    printf("The Arithmetic progression:\n");
    for(int i = a; i<= last ; i=i+d){
        printf("%d ",i);
    }
    return 0;
}
