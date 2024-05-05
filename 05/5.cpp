#include <iostream>
#include <math.h>
using namespace std;
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
int main(){
    int num,rem,count=0;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    int number=num;
    while(num>0){
        rem=num%10;
        count+=1;
        num/=10;
    }
    int check = isarmstrong(number,count);
    if(check==number){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not a Armstrong  number"<<endl;
    }
    return 0;
}
