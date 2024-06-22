#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int cases;cin>>cases;
    while(cases--){
    vector<vector<char>>grid(8,vector<char>(8));  
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>grid[i][j];
        }
    } 
    string result="";
    for(int col=0;col<8;col++){
        for(int row=0;row<8;row++){
            if(grid[row][col]!='.')result.push_back(grid[row][col]);
        }
    }
    cout<<result<<endl;
    }
    
    return 0;
}