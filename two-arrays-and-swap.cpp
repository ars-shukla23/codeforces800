#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int cases;cin>>cases;
    while(cases>0){
        int n,k;cin>>n>>k;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        int req_sum=0;
        for(int i=0;i<k;i++)req_sum+=max(a[i],b[i]);
        for(int i=k;i<n;i++)req_sum+=a[i];
        cout<<req_sum<<endl;
        cases--;
    }

    return 0;
}