#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"The factorial of "<<n<<" is "<<fact;
    return 0;
}