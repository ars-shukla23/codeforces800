#include<iostream>
#include<vector>

using namespace std;

pair<int,int> maxScore(vector<int>v,int n){
    int left=0,right=n-1;
    bool sereja_flag=true;
    int sereja=0,dima=0;
    while(left<=right){
        if(v[left]>=v[right]){
            if(sereja_flag)sereja+=v[left];
            else dima+=v[left];
            left++;
        }
        else{
            if(sereja_flag)sereja+=v[right];
            else dima+=v[right];
            right--; 
        }
        sereja_flag=!sereja_flag;
    }
    return {sereja,dima};
}

int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    pair<int,int> result=maxScore(v,n);
    cout<<result.first<<" "<<result.second<<endl;


    return 0;
}