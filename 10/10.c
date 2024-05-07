#include <stdio.h>
int isNeon(int number){
        int sqnum = number*number;
        int SumofDigits=0;
        while(sqnum>0){
            SumofDigits+= sqnum%10;
            sqnum/=10;
        }
        return SumofDigits;
    }
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(isNeon(num)==num) {
            printf("Neon Number");
        }
        else {
            printf("Not a Neon Number");
        }
    return 0;
}
