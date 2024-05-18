#include <iostream>
using namespace std;
int main() {
    int num1,num2;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    int min = (num1<num2)*num1 + (num2<num1)*num2;
    int max = (num1>num2)*num1 + (num2>num1)*num2;
    cout<<"The maximum number is "<<max<<endl;
    cout<<"The minimum number is "<<min;
    return 0;
}
