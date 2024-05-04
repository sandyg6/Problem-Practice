#include <iostream>
using namespace std;

int main() {
  int num;
  cout<<"Enter a number:" ;
  cin>> num;
  int rev =0;
  while(num>0){
  int rem=num%10;
  rev = rev*10 + rem;
  num/=10;
  }
  cout<<"The reversed number is "<<rev<<endl;
  return 0;
}