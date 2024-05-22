#include<iostream>
#include<string>

using namespace std;

int main(){
    int cases;cin>>cases;
    string word="codeforces";
    while(cases--){
        string s;cin>>s;
        int result=0;
        for(int i=0;i<10;i++)if(s[i]!=word[i])result++;
        cout<<result<<endl;  
    }
    return 0;
}