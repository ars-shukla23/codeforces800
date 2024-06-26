#include<iostream>
#include<string>
using namespace std;

int main(){
   int cases;cin>>cases;
   while(cases--){
    int n;cin>>n;
    string s1,s2;cin>>s1>>s2;
    bool same=true;
    for(int i=0;i<n;i++){
        if(s1[i]==s2[i] ||((s1[i]=='G' || s1[i]=='B') && (s2[i]=='G' || s2[i]=='B')))continue;
        else{
            same=false;
            break;
        }
    }
    if(!same)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
   }
    return 0;
}