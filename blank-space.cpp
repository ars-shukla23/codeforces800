#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
   int cases;cin>>cases;
   while(cases--){
     int n;cin>>n;
     vector<int>vec(n);
     for(int i=0;i<n;i++)cin>>vec[i];
     bool found_zero=false;
     for(int i=0;i<n;i++){
        if(vec[i]==0){
            found_zero=true;
            break;
        }
     }
     if(!found_zero)cout<<0<<endl;
     else{
     int length=1,max_length=0;
     for(int i=1;i<n;i++){
        if(vec[i]==vec[i-1] && vec[i]==0)length++;
        else{
            max_length=max(length,max_length);
            length=1;
        }
     }
     max_length=max(length,max_length);
     cout<<max_length<<endl;
     }
    
   }
    return 0;
}