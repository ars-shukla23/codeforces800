#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int cases;cin>>cases;
    while(cases--){
      int m;cin>>m;
      int n=m*2;
      vector<int>vec(n);
      for(int i=0;i<n;i++)cin>>vec[i];
      int sum=0;
      sort(vec.begin(),vec.end());
      for(int i=0;i<n-1;i+=2)sum+=vec[i];
      cout<<sum<<endl;
    }
    return 0;
}