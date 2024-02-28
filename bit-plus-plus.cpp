#include<iostream>
#include<string>
#include<vector>

using namespace std;

int bitOper(vector<string>v){
    int sum=0;
    for(string s:v){
         if(s[1]=='+') sum++;
         else{sum--;}
    }
    return sum;
}


int main(){
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<bitOper(v)<<endl;


    return 0;
}