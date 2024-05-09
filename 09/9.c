#include <stdio.h>

int isPrime(int n){
    int divisors = 0;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                divisors += 1;
            }
        }
        return divisors;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num == 1) {
            printf("Neither a Prime nor a Composite number\n");
        } else if (isPrime(num)!=0) {
            printf("Not a Prime number\n");
        }
        else {
            printf("Prime Number\n");
        }
    return 0;
}
