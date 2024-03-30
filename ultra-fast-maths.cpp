#include<iostream>
#include<string>
using namespace std;

string reqNum(string s1,string s2){
    int n=s1.size();
    string result="";
    for(int i=n-1;i>=0;i--){
        if(s1[i]==s2[i]) result.push_back('0');
        else result.push_back('1');
    }
    return result;
}

int main(){
   string s1,s2;
    cin>>s1>>s2;
    cout<<reqNum(s1,s2)<<endl;


    return 0;
}