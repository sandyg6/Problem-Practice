#include<stdio.h>
int main(){
    int start, end;
    printf("Enter the range (start, end):");
    scanf("%d %d",&start,&end);
    printf("Even Numbers:\n");
    for(int i = start;i<=end;i++){
        if(i%2 == 0){
            printf("%d ",i);
        }
    }
    printf("\nOdd Numbers:\n");
    for(int i = start;i<=end;i++){
        if(i%2 == 1){
            printf("%d ",i);
        }
    }
}