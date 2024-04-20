#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    string a,b,t;
    cin>>a>>b>>t;
    bool flag=true;
    unordered_map<char,int>freq;
    for(char c:a)freq[c]++;
    for(char c:b)freq[c]++;
    for(char c:t){
        if(freq.find(c)==freq.end()){
            flag=false;
            break;
        }
        else freq[c]--;
    }
    for(auto it:freq){
        if(it.second!=0){
            flag=false;
            break;
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    


    return 0;
}