#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
   int cases;cin>>cases;
   while(cases--){
     int n;cin>>n;
     string s;cin>>s;
     string str=s;
     sort(str.begin(),str.end());
     if(str==s)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

   }
   return 0;
}