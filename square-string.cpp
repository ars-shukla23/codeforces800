#include<iostream>
#include<string>

using namespace std;

int main(){
   int cases;cin>>cases;
   while(cases--){
     string s;cin>>s;
     if(s.size()%2!=0)cout<<"NO"<<endl;
     else{
        int n=s.size()/2;
        if(s.substr(0,n)==s.substr(n,n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
   }




    return 0;
}