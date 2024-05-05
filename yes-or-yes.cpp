#include<iostream>
#include<string>

using namespace std;

int main(){
   int num;cin>>num;
   while(num>0){
    string s;cin>>s;
    if(s[0]!='y' && s[0]!='Y')cout<<"NO"<<endl;
    else if(s[1]!='e' && s[1]!='E')cout<<"NO"<<endl;
    else if(s[2]!='s' && s[2]!='S')cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    num--;
   }



    return 0;
}