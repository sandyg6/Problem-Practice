#include <iostream>
using namespace std;
int main() {
    int n,cols,rows;
    cout<<"Enter a number: ";
    cin>>n;
    for(rows=1;rows<=n;rows++){
        for(cols=n;cols>rows;cols--){
            cout<<" ";
        }
        cout<<"*";
        for(cols=1;cols< (rows-1)*2;cols++){
            cout<<" ";
        }
        if(rows == 1){
            cout<<"\n";
        }
        else{
            cout<<"*\n";
        }
    }
    
    for(rows = n-1;rows>=1;rows--){
        for(cols = n;cols>rows;cols--){
            cout<<" ";
        }
        cout<<"*";
        for(cols = 1;cols<(rows-1)*2;cols++){
            cout<<" ";
        }
        if(rows==1){
            cout<<"\n";
        }
        else{
            cout<<"*\n";
        }
    }
    return 0;
}
