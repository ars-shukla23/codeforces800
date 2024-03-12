#include<iostream>


using namespace std;

int pyheight(int n){
   int level=0;
   int sum=0;
   while(sum<=n){
      level++;
      sum+=(level)*(level+1)/2;
   }
   return level-1;
}

int main(){
 int n;cin>>n;
 cout<<pyheight(n)<<endl;


    return 0;
}