#include<iostream>
#include<string>
using namespace std;

string almostLucky(string s){
    int n=s.size();
    int x=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!='4' && s[i]!='7'){
           n--;
        }
    }
    string number=to_string(n);
    int nsize=number.size();
    for(int i=0;i<nsize;i++){
        if(number[i]!='4' && number[i]!='7'){
            return "NO";
        }
    }
    return "YES";

}


int main(){
   string num;
   cin>>num;
   cout<<almostLucky(num)<<endl;

    return 0;
}