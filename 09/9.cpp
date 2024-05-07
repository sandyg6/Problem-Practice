#include <iostream>
using namespace std;
int isPrime(int n){
    int divisors = 0;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                divisors += 1;
            }
        }
        return divisors;
}

int main() {
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if (num == 1) {
            cout<<"Neither a Prime nor a Composite number";
        } else if (isPrime(num)!=0) {
            cout<<"Not a Prime number";
        }
        else {
            cout<<"Prime Number";
        }
    

    return 0;
}
