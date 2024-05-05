#include <iostream>
using namespace std;
int main(){
    int num , rev = 0;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int n = num;
    while(n>0){
        rev = rev*10 + n%10;
        n/=10;
    }
    if(rev == num){
        cout<<"Palindromic number"<<endl;
    }
    else{
        cout<<"Not a Palindromic Number"<<endl;
    }
    return 0;
}