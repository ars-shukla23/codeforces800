#include<iostream>
#include<vector>
#include<string>

using namespace std;

int howManyDigits(int n){
    vector<string>numbers_list;
    for(int i=49;i<=57;i++){
        char c=i;
       for(int j=1;j<=4;j++){
          string s="";
          for(int k=1;k<=j;k++){
            s.push_back(c);
          }
          numbers_list.push_back(s);
       }
         
    }
    string stop=to_string(n);
    int num=0;
    for(string s:numbers_list){
        if(stoi(s)!=n){
            num+=s.size();
        }
        else{
            num+=stop.size();
            break;
        }
    }
    return num;
}


int main(){
   int cases;
   cin>>cases;
   while(cases>0){
      int n;
      cin>>n;
      cout<<howManyDigits(n)<<endl;
      cases--;
   }


    return 0;
}