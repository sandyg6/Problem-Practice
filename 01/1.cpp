#include <iostream>
using namespace std;

int main() {
  int num;
  cout<<"Enter a number:" ;
  cin>> num;
  cout << "The extracted digits are: ";
  while(num>0){
  int rem=num%10;
  cout << rem<< " ";
  num/=10;
  }
  return 0;
}