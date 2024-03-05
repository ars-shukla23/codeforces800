#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int beautyMatrix(pair<int,int>p){
       return abs(p.first-2)+abs(p.second-2);
}


int main(){
    pair<int,int>pos1;
    vector<vector<int>>vec;
    for(int i=0;i<5;i++){
        vector<int>row;
        for(int j=0;j<5;j++){
            int num;
            cin>>num;
            row.push_back(num);
            if(num==1){
                pos1.first=i;
                pos1.second=j;
            }
        }
        vec.push_back(row);
    }
    cout<<beautyMatrix(pos1)<<endl;


    return 0;
}