#include<iostream>
using namespace  std;
int main(){
    int n ;
    cout<<"enter a number:";
    cin>>n;
    for(int i= 1;i<=n;i++){
        for(int j= 1;j<=n;j++){
            if((i+j)%2==0) cout<<1;
            // if both are even then it is sum
            
            else cout<<0;
        }
        
    }
    
    
}