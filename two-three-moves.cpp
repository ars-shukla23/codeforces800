#include<iostream>

using namespace std;

int main(){
   int cases;cin>>cases;
   while(cases--){
     int n;cin>>n;
     if(n%3==0)cout<<n/3<<endl;
     else if(n%3==2)cout<<(n/3)+1<<endl;
     else cout<<(n/3)+2<<endl;
   }
    return 0;
}