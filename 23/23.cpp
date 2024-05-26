#include<iostream>
using namespace std;
int main(){
    int start, end;
    cout<<"Enter the range (start, end):"<<endl;
    cin>>start>>end;
    cout<<"Even Numbers:"<<endl;
    for(int i = start;i<=end;i++){
        if(i%2 == 0){
            cout<<i<<" ";
        }
    }
    cout<<"\nOdd Numbers:\n";
    for(int i = start;i<=end;i++){
        if(i%2 == 1){
            cout<<i<<" ";
        }
    }
}