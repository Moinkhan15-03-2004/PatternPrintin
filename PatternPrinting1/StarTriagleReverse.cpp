#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter rows:";
    cin>>n;
    int m ;
    cout<<"Enter coloums:";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    

    
}