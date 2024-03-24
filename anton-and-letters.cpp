#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;

int distinctLetters(vector<char>v){
    unordered_map<char,int>umap;
    for(char c:v) umap[c]++;

    return umap.size();
}

int main(){
    string s;
    getline(cin,s);
    vector<char>v;
    for(char c:s)if(c!=' ' && c!=',' && c!='{' && c!='}')v.push_back(c);
    cout<<distinctLetters(v)<<endl;


    return 0;
}