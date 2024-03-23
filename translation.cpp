#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

string isCorrect(string s1,string s2){
    reverse(s1.begin(),s1.end());
    return (s1==s2)?"YES":"NO";
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<isCorrect(s1,s2)<<endl;
}