#include<iostream>
#include<string>

using namespace std;

int wrongSub(string s,int n){
    while(n>0){
        if(s[s.size()-1]=='0'){
            s.pop_back();
        }
        else{
            int x=s.size();
            s[x-1]=(s[x-1]-1);
        }
        n--;
    }
    return stoi(s);

}

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    cout<<wrongSub(s,n);

    return 0;
}