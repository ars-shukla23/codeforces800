#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int operations(vector<int>v){
    auto maxel=max_element(v.begin(),v.end()),minel=min_element(v.begin(),v.end());
    return *maxel-*minel;
}

int main(){
   int cases;cin>>cases;
   while(cases>0){
     int n;cin>>n;
     vector<int>vec(n);
     for(int i=0;i<n;i++)cin>>vec[i];
     cout<<operations(vec)<<endl;
     cases--;
   }


    return 0;
}