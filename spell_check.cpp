#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    int cases;cin>>cases;
    string str="Timur";
    sort(str.begin(),str.end());
    while(cases--){
       int n;cin>>n;
       string s;cin>>s;
       sort(s.begin(),s.end());
       if(s==str)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}