#include<iostream>

using namespace std;

int main(){
  int cases;cin>>cases;
  while(cases--){
     int a,b,c;cin>>a>>b>>c;
     bool flag=true;
     int tents=a;
     int x=b%3;
     tents+=(b-x)/3;
     if(x==1){
      if(c>=2){
       tents++;
       c-=2;
      }
      else flag=false;
     }
     else if(x==2){
       if(c>=1){
       tents++;
       c-=1;
       }
       else flag=false;
     }
     if(!flag)cout<<-1<<endl;
     else{
     int rem=c%3;
     tents+=(c-rem)/3;
     if(rem!=0)tents++;
     cout<<tents<<endl;
     }
  }
  return 0;
}