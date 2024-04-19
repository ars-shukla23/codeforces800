#include<iostream>

using namespace std;



int main(){
   int n;cin>>n;
   string s="Division ";
   while(n>0){
    int num;
    cin>>num;
    if(num>=1900)cout<<s+'1'<<endl;
    else if(num<1900 && num>=1600)cout<<s+'2'<<endl;
    else if(num<1600 && num>=1400)cout<<s+'3'<<endl;
    else cout<<s+'4'<<endl;
    n--;
   }




    return 0;
}