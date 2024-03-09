#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,6,1,3,1,8};
    int n =sizeof(a)/sizeof(a[0]);
    bool flag=false;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
             cout<<"it contains duplicate";
             flag=true;
             break;
            }
        }
        if(flag==true)
            break;
    }
    if(flag==false) cout<<"no duplicate";
    return 0;
}

        
        