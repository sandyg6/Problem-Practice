#include <iostream>
using namespace std;
int isNeon(int number){
        int sqnum = number*number;
        int SumofDigits=0;
        while(sqnum>0){
            SumofDigits+= sqnum%10;
            sqnum/=10;
        }
        return SumofDigits;
    }
int main() {
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if(isNeon(num)==num) {
            cout<<"Neon Number";
        }
        else {
            cout<<"Not a Neon Number";
        }
    return 0;
}
