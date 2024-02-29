#include<iostream>
#include<vector>


using namespace std;

int minCapacity(vector<pair<int,int>>v,int n){
    int maxcap=0;
    int people=0;
    for(int i=0;i<n;i++){
        people-=v[i].first;
        people+=v[i].second;
        maxcap=max(maxcap,people);
    }

    return maxcap;
}


int main(){
   int n;
   cin>>n;
   vector<pair<int,int>>bus;
   for(int i=0;i<n;i++){
    pair<int,int>current;
    cin>>current.first;
    cin>>current.second;
    bus.push_back(current);
   }
   cout<<minCapacity(bus,n)<<endl;

    return 0;
}