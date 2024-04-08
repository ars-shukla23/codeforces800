#include<iostream>
#include<vector>
#include<string>


using namespace std;

int main(){
  int n;cin>>n;
  string s;cin>>s;
  vector<int>alphabet(27,0);
  for(char c:s){
     if(c<=90)c+=32;
     alphabet[c-96]++;
  }
  bool result=true;
  for(int i=1;i<27;i++){
     if(alphabet[i]==0){
        result=false;
        break;
     }
  }
  string ans=(result)?"YES":"NO";
  cout<<ans<<endl;
   return 0;
}