#include<iostream>
#include<vector>
#include<string>

using namespace std;

string easyOrNot(vector<int>v){
  for(int i:v){
    if(i==1){
        return "HARD";
    }
  }
  return "EASY";
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<easyOrNot(v)<<endl;

    return 0;
}