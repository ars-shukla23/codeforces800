#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
    int cases;cin>>cases;
    while(cases--){
       string s;cin>>s;
       char ch=s[0];
       bool flag=false;
       for(char c:s){
         if(c!=ch){
            flag=true;
            break;
         }
       }
       if(!flag)cout<<"NO"<<endl;
       else{
         cout<<"YES"<<endl;
         string st=s;
         int a,b;
         while(st==s){
           a=(rand()%s.size());
           b=(rand()%s.size());
           if(a!=b){
             char temp=st[a];
             st[a]=st[b];
             st[b]=temp;  
           }
         }
         cout<<st<<endl;
       }
    }
    return 0;
}