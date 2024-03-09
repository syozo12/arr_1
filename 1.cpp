#include<iostream>
using namespace std;
int main(){
    int n;
    int prod=1;
    cout<<"enter no. of ele";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter ele "<<i+1;
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        prod=prod*a[i];

    }
    cout<<"the product of the elements in the array is "<<prod;



}