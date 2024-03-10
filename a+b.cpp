#include<iostream>
#include<string>

using namespace std;

int sumOfab(string s){
    return (s[0]-'0')+(s[2]-'0');
}

int main(){
    int cases;
    cin>>cases;
    while(cases>0){
        string s;
        cin>>s;
        cout<<sumOfab(s)<<endl;

        cases--;
    }

    return 0;
}