#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
