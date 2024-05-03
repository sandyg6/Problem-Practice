#include <iostream>
using namespace std;
int main(){
    int num,rem,total=0;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    int n=num;
    while(num>0){
        rem=num%10;
        total+=rem;
        num/=10;
    }
    if(n%total==0){
        cout<<"Harshad number"<<endl;
    }
    else{
        cout<<"Not a Harshad number"<<endl;
    }
    return 0;
}
