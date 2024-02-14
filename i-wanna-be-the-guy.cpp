#include<iostream>
#include<unordered_set>
#include<string>
#include<vector>
using namespace std;
string theGuy(vector<int>x,vector<int>y,int n){
    bool flag=true;
    unordered_set<int>levels;
    for(int i=0;i<x.size();i++){
          levels.insert(x[i]);
    }
    for(int i=0;i<y.size();i++){
        levels.insert(y[i]);
    }
    for(int i=1;i<n+1;i++){
        if(levels.count(i)==0){
            flag=false;
            break;
        }     
    }

    return (flag)?"I become the guy.":"Oh, my keyboard!";
      
}

int main(){
   int levels;
   cin>>levels;
   int x_len;
   cin>>x_len;
   vector<int>x(x_len);
   for(int i=0;i<x_len;i++){
      cin>>x[i];
   }
   int y_len;
   cin>>y_len;
   vector<int>y(y_len);
   for(int i=0;i<y_len;i++){
      cin>>y[i];
   }
   cout<<theGuy(x,y,levels)<<endl;

   return 0;
}