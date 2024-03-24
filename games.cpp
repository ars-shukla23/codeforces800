#include<iostream>
#include<vector>

using namespace std;

int kitColor(vector<int>home,vector<int>away){
    int result=0;
    int n=home.size();
    int val;
    for(int i=0;i<n;i++){
          val=0;
          for(int j=0;j<n;j++){
            if(j==i)continue;
            if(away[j]==home[i])val++;
          }
          result+=val;
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    vector<int>home;
    vector<int>away;
    for(int i=0;i<n;i++){
        int h,a;
        cin>>h>>a;
        home.push_back(h);
        away.push_back(a);
    }
    cout<<kitColor(home,away)<<endl;

    return 0;
}