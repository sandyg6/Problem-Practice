#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter range:"<<endl;
    cin>>n;
    int sum_of_n_square = ((n*(n+1)*(2*n+1))/6);
    cout<<"The sum of square of first "<<n<<" Natural numbers is "<<sum_of_n_square;
    return 0;
}