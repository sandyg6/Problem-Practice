#include<stdio.h>
int main(){
    int start, end;
    printf("Enter the start range:\n");
    scanf("%d",&start);
    printf("Enter the end range:");
    scanf("%d",&end);
    int first = start*(start-1)/2;
    int last = end*(end+1)/2;
    int sum_of_numbers = last-first;
    printf("The sum of numbers within the range %d and %d is %d",start,end,sum_of_numbers);
    return 0;
}