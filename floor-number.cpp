#include<iostream>
#include<vector>

using namespace std;

int floorNo(int n,int x){
    int count=0;
    if(n<=2){
       return 1;
    }
    else{
       while(n>2){
         n-=x;
         count++;
       }
    }
    return count+1;
}

int main(){
    int cases;
    cin>>cases;
    vector<int>results;
    while(cases>0){
        int n,x;
        cin>>n>>x;
        results.push_back(floorNo(n,x));
        cases--;
    }
    for(int i:results){
        cout<<i<<endl;
    }


    return 0;
}