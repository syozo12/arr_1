#include<iostream>
using namespace std;
#include<limits.h>
int main(){
    int n;
    int min=INT_MAX;
    cout<<"enter no. of ele";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter ele "<<i+1;
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(min>a[i]) min=a[i];
    }
    cout<<"min element in the array is"<<min;
    return 0;

}