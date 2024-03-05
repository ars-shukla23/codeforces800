#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int nextRound(vector<int>v,int k,int n){
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int count=0;
    int req_score=v[k-1];
    for(int i=0;i<n;i++){
        if(v[i]>=req_score && v[i]>0) count++;
    }
   return count;
}


int main(){
   int n,k;
   cin>>n>>k;
   vector<int>vec(n);
   for(int i=0;i<n;i++){
    cin>>vec[i];
   }
   cout<<nextRound(vec,k,n)<<endl;



    return 0;
}