#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>g

using namespace std;

int problemLog(string s){
  int ans=0;
  unordered_map<char,int>freq;
  for(char c:s){
    freq[c]++;
  }
  for(auto it:freq){
    if(it.second>=(it.first-'A'+1)) ans++;
  }

  return ans;

}

int main(){
    int cases;
    cin>>cases;
    while(cases>0){
       int n;
       cin>>n;
       string log;
       cin>>log;
       cout<<problemLog(log)<<endl;

        cases--;
    }



    return 0;
}