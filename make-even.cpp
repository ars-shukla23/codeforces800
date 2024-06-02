#include<iostream>
#include<string>

using namespace std;

int main(){
   int cases;cin>>cases;
   while(cases--){
     string num;cin>>num;
     bool even=false;
     for(char c:num){
        if((c-'0')%2==0){
            even=true;
            break;
        }
     }
     if(!even)cout<<-1<<endl;
     else{
        if((num[num.size()-1]-'0')%2==0)cout<<0<<endl;
        else if((num[0]-'0')%2==0)cout<<1<<endl;
        else cout<<2<<endl;
     }
   }



   return 0;
}