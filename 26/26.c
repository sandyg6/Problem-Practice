#include<stdio.h>
#include<math.h>

int checkPronic(int n){
    for(int i=1;i<sqrt(n);i++){
        if(i*(i+1)==n)
            return 1;
    }
    return 0;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(checkPronic(n)){
        printf("The given number is Pronic");
    }
    else{
        printf("The given number is not Pronic");
    }

}