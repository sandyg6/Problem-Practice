#include <iostream>
using namespace std;
int main() {
    int a,d,n,last;
    cout<<"Enter the first number of AP:"<<endl;
    cin>>a;
    cout<<"Enter the difference of each number in AP:"<<endl;
    cin>>d;
    cout<<"Enter the number of terms of AP need to be printed:"<<endl;
    cin>>n;
    last = a + (n-1)*d;
    
    cout<<"The Arithmetic progression:"<<endl;
    for(int i = a; i<= last ; i=i+d){
        cout<<i<<" ";
    }
    return 0;
}
