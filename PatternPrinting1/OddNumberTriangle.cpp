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
        for(int j=1;j<=2*i-1;j+=2){
            cout<<j;
        }
        cout<<endl;
    }
    

    
}