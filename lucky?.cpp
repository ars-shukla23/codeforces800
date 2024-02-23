#include<iostream>
#include<string>
using namespace std;


string isLucky(string s){
    int first3=0,last3=0;
    for(int i=0;i<6;i++){
        if(i<3){
            first3+=s[i]-'0';
        }
        else{
            last3+=s[i]-'0';
        }

       
    }
     return (first3==last3)? "YES":"NO";
}

int main(){
    int cases;
    cin>>cases;
    while(cases>0){
        string s;
        cin>>s;
        cout<<isLucky(s)<<endl;


        cases--;
    }




    return 0;
}