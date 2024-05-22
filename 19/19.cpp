#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range till which the sum of Natural Numbers need to be printed: "<<endl;
    cin>>n;
    int sum_of_Natural = (n*(n+1))/2;
    cout<<"The sum of "<<n<<" Natural numbers is "<<sum_of_Natural;
}