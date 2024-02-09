#include<iostream>
#include<string>
#include<vector>


using namespace std;

void abreviate(vector<string>&words,int n){
    for(int i=0;i<n;i++){
        int word_size=words[i].size();
        if(word_size>10){
        string s=to_string(word_size-2);
        char start=words[i][0];
        char end=words[i][word_size-1];
        words[i]=start+s+end;
        }
    }
    //return words;
}

int main(){
    int n;
    cin>>n;
    vector<string>words;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        words.push_back(s);
    }
    abreviate(words,n);

    for(int i=0;i<n;i++){
        cout<<words[i]<<endl;
    }
    
}