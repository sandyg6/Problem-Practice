#include<iostream>
using namespace std;
int checkAbundant(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int num = checkAbundant(n);
    if(num>n){
        cout<<"The given number is Abundant"<<endl;
    }
    else{
        cout<<"The given number is not Abundant"<<endl;
    }

}