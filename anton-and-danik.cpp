#include<iostream>
#include<string>

using namespace std;

string theWinner(string s){
    int a=0,d=0;
    for(char c:s){
        if(c=='A') a++;
        else{d++;}
    }
    if(a==d) return "Friendship"; 
    return (a>d)?"Anton":"Danik";
}

int main(){
    int games;
    cin>>games;
    string s;
    cin>>s;
    cout<<theWinner(s);



    return 0;
}