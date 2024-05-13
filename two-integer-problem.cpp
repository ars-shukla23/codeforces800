#include<iostream>
#include<cmath>

using namespace std;

int main(){
  int cases;cin>>cases;
  while(cases--){
    int a,b;cin>>a>>b;
    int x=(abs(a-b))%10;
    if(x==0)cout<<(abs(a-b))/10<<endl;
    else cout<<((abs(a-b))/10)+1<<endl;
  }
  return 0;
}