#include <iostream>
using namespace std;
int main() {
    int number, count =0;
    cout << "Enter a number: ";
    cin>>number;
    while(number>0){
        int rem=number%10;
        count++;
        number/=10;
    }
    cout<<"Digit count: "<<count;
    return 0;
}