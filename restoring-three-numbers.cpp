#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;


int main(){
   long long int x,y,z,d;
   cin>>x>>y>>z>>d;
   long glong int sum=(x+y+z+d)/3;
   x=sum-x;y=sum-y;z=sum-z;d=sum-d;
   if(x!=0)cout<<x<<" ";
   if(y!=0)cout<<y<<" ";
   if(z!=0)cout<<z<<" ";
   if(d!=0)cout<<d<<" ";
   cout<<endl;



    return 0;
}