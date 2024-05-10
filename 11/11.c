#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int result = 0;
    for(int i=1;i<=num;i++){
        result+=i;
        printf("%d ",result);
        }
    return 0;
}
