#include <iostream>
using namespace std;
int main() {
    int a,d,n,sum_of_AP;
    cout<<"Enter the first number of AP:"<<endl;
    cin>>a;
    cout<<"Enter the difference of each number in AP:"<<endl;
    cin>>d;
    cout<<"Enter the number of terms of AP need to be printed:"<<endl;
    cin>>n;
    
    sum_of_AP = (n/2)*(2*a + (n-1)*d);
    
    cout<<"The sum of Arithmetic progression: "<<sum_of_AP ;
    return 0;
}
