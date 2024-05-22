#include<iostream>
using namespace std;
int main(){
    int start, end;
    cout<<"Enter start range:"<<endl;
    cin>>start;
    cout<<"Enter end range:"<<endl;
    cin>>end;
    int first = start*(start-1)/2;
    int last = end*(end+1)/2;
    int sum_of_numbers = last-first;
    cout<<"The sum of numbers within the range "<<start<<" and "<<end<<" is "<<sum_of_numbers;
    return 0;
}