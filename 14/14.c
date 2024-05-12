#include <stdio.h>

int main() {
    int n,cols,rows;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++){
        for(cols=n;cols>rows;cols--){
            printf(" ");
        }
        printf("*");
        for(cols=1;cols< (rows-1)*2;cols++){
            printf(" ");
        }
        if(rows == 1){
            printf("\n");
        }
        else{
            printf("*\n");
        }
    }
    
    for(rows = n-1;rows>=1;rows--){
        for(cols = n;cols>rows;cols--){
            printf(" ");
        }
        printf("*");
        for(cols = 1;cols<(rows-1)*2;cols++){
            printf(" ");
        }
        if(rows==1){
            printf("\n");
        }
        else{
            printf("*\n");
        }
    }
    return 0;
}
