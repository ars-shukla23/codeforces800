#include<iostream>
#include<vector>
using namespace std;

int operations(vector<int>even,vector<int>odd){
    int ne=0,no=0;
    for(int i:even)if(i%2!=0)ne++;
    for(int i:odd)if(i%2==0)no++;
    if(ne!=no)return -1;
    else return ne;
}

int main(){
   int cases;cin>>cases;
   while(cases>0){
    int n;cin>>n;
    vector<int>even,odd;
    for(int i=0;i<n;i++){
        int num;cin>>num;
        if(i%2==0)even.push_back(num);
        else odd.push_back(num);
    }
    cout<<operations(even,odd)<<endl;
    cases--;
   }


    return 0;
}