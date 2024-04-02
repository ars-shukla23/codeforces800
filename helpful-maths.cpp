#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string s;cin>>s;
    vector<int>nums;
    for(int i=0;i<s.size();i++){
        if(i%2==0)nums.push_back(s[i]-'0');
    }
    sort(nums.begin(),nums.end());
    string result="";
    for(int i=0;i<nums.size();i++){
        if(i==nums.size()-1) result.push_back(nums[i]+48);
        else{
           result.push_back(nums[i]+48);
           result.push_back('+'); 
        }
    }
    cout<<result<<endl;


    return 0;
}