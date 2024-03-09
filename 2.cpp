#include<iostream>
using namespace std;
#include<limits.h>
int main(){
    int n;
    int max2;
    int max1=max2=INT_MIN;
    cout<<"enter no. of ele";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter ele "<<i+1;
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2&&a[i]!=max1){
            max2=a[i];
        }
    }
    if(max2==INT_MIN) cout<<"no second max exist";
    else cout<<"second max is"<<max2;
    return 0;

    }
