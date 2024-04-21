#include<iostream>
#include<algorithm>

using namespace std;


int main(){ 
   int a,b;cin>>a>>b;
   int maxi=max(a,b),mini=min(a,b);
   cout<<mini<<" ";
   int remain=maxi-mini;
   if(remain%2==0)cout<<remain/2;
   else cout<<(remain-1)/2;

   return 0;
}