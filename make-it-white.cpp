#include<iostream>
#include<string>

using namespace std;

int makeItWhite(int len,string s){
    int start=0,end=0;
    for(int i=0;i<len;i++){
        if(s[i]=='B'){
            start=i;
            break;
        }
    }
    for(int i=len-1;i>=0;i--){
        if(s[i]=='B'){
            end=i;
            break;
        }
    }
    return end-start+1;
}


int main(){

   int n;
   cin>>n;
   for(int i=0;i<n;i++){
     int len;
     cin>>len;
     string s;
     cin>>s;
     cout<<makeItWhite(len,s)<<endl;
   }



    return 0;
}