#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
//#include<bits/stdc++.h>



using namespace std;

int beautyYear(int n){
   bool found=false;
   n+=1;
   while(!found){
      string s=to_string(n);
      unordered_map<char,int>freq;
      for(char c:s){
        freq[c]++;
      }
      bool all_unique=true;
      for(auto it:freq){
          if(it.second>1) {all_unique=false; break;}
      }
      if(all_unique){
        found=true;
        return n;
      }
      else{
        n++;
      }
   }
   return -1;
}

int main(){

    
        int n;cin>>n;
        cout<<beautyYear(n);
    
    return 0;
}