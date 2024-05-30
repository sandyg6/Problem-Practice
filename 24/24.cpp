#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int l=1,u=n;
    cout<<"The series:";
    for(int i=0;i<n;i++){
        cout<<l<<" "<<u<<" ";
        l+=1;u-=1;
    }

}