#include<iostream>
#include<vector>

using namespace std;


int main(){
  int cases;cin>>cases;
  while(cases--){
     int n;cin>>n;
     vector<int>vec(n);
     int a,b,c;
     for(int i=0;i<n;i++)cin>>vec[i];
     for(int i=0;i<n-2;i++){
        a=vec[i];
        b=vec[i+1];
        c=vec[i+2];
        if(a==b && b==c)continue;
        else{
            if(a==c)cout<<i+1+1<<endl;
            else if(a==b)cout<<i+2+1<<endl;
            else cout<<i+1<<endl;
            break;
        }
     }
  }



    return 0;
}