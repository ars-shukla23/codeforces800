#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
   int cases;cin>>cases;
   while(cases--){
    int n;cin>>n;vector<int>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    bool flag=true;
    sort(vec.begin(),vec.end());
    for(int i=0;i<n-1;i++){
        if(vec[i+1]-vec[i]>1){
          cout<<"NO"<<endl;
          flag=false;
          break;
    }
    }
    if(flag)cout<<"YES"<<endl;
   }




    return 0;
}