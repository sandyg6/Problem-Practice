#include<iostream>
#include<math.h>
using namespace std;
int checkPronic(int n){
    for(int i=1;i<sqrt(n);i++){
        if(i*(i+1)==n)
            return true;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(checkPronic(n)){
        cout<<"The given number is Pronic"<<endl;
    }
    else{
        cout<<"The given number is not Pronic"<<endl;
    }

}