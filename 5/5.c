// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int isarmstrong(int n,int c){
    int tot=0;
    for(int i=0;i<c;i++){
        int rem = n%10;
        int val = pow(rem, c);
        tot+=val;
        n/=10;
    }
    return tot;
}
int main() {
    int num,rem,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    int number=num;
    while(num>0){
        rem=num%10;
        count+=1;
        num/=10;
    }
    int check = isarmstrong(number,count);
    if(check==number){
        printf("Armstrong number\n");
    }
    else{
        printf("Not a Armstrong  number\n");
    }
    return 0;
}