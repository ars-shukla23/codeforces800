#include<iostream>
#include<vector>

using namespace std;

vector<int> favSeq(vector<int>v,int n){
    vector<int>result;
    int start=0,end=n-1;
    while(start<=end){
        if(start==end)result.push_back(v[start++]);
        else{
        result.push_back(v[start++]);
        result.push_back(v[end--]);
        }
    }
    return result;

}

int main(){
    int cases;
    cin>>cases;
    while(cases>0){
        int n;cin>>n;vector<int>vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];
        vector<int>result=favSeq(vec,n);
        for(int i=0;i<n;i++){
            cout<<result[i]<<" ";
        }
        cout<<"\n";
        cases--;
    }

    return 0;
}