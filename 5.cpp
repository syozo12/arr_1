#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"enter no. of ele";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter ele "<<i+1;
        cin>>a[i];
    }
    bool flag=true;
    x=1;
    for(int i=0;i<n;i++){
        if(a[i]!=x){
            flag=false;
            cout<<"smallest missing element is"<<x;
            x++;
            break;
        }
        else{
            x++;
        }
    }
    if(flag==true) cout<<"no missing element found";
    return 0;

}