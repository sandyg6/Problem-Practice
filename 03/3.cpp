#include <iostream>
using namespace std;
int main(){
    int num,rem,flag=0;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    while(num>0){
        rem=num%10;
        if(rem==0){
            flag=1;
        }
        num/=10;
    }
    if(flag==1){
        cout<<"Duck number"<<endl;
    }
    else{
        cout<<"Not a duck number"<<endl;
    }
    return 0;
}
