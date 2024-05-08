#include<iostream>

using namespace std;

int main(){
    int cases;cin>>cases;
    while(cases--){
       int n,a,b;cin>>n>>a>>b;
       if((a*2)<=b){
         cout<<n*a<<endl;
       }
       else if((a*2)>b){
         if(n%2==0){
            cout<<(n*b)/2<<endl;
         }
         else cout<<(((n-1)*b)/2)+a<<endl;
       }
       
    }


    return 0;
}