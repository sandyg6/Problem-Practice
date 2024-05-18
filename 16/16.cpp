#include <iostream>
using namespace std;
int main() {
    int num1,num2;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    cout<<"Before swapping:"<<endl;
    cout<<"number 1: "<<num1<<endl;
    cout<<"number 2: "<<num2<<endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout<<"After swapping:"<<endl;
    cout<<"number 1: "<<num1<<endl;
    cout<<"number 2: "<<num2<<endl;
    return 0;
}
