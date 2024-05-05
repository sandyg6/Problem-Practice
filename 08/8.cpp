#include<iostream>
using namespace std;
int main(){
    int n, sqOfnum,lenOfnum = 0,mul=1;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int num = n;
    sqOfnum = n*n;
    while (n>0)
    {
        lenOfnum+=1;
        n/=10;
    }
    for(int i=0;i<lenOfnum;i++){
        mul *= 10;
    }
    int digitOfSq = sqOfnum % mul;
    if (num == digitOfSq)
    {
        cout<<"Automorphic Number"<<endl;
    }
    else{
        cout<<"Not an Automorphic number"<<endl;
    }
}
