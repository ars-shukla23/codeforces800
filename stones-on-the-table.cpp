#include<iostream>
#include<vector>

using namespace std;

int diffStones(vector<char>stones, int n){
    int count=0;
    for(int i=1;i<n;i++){
        if(stones[i]==stones[i-1]){
            count++;
        }
    }
    return count;
}


int main(){
    int n;
   cin>>n;
   vector<char>stones;
   for(int i=0;i<n;i++){
       char c;
       cin>>c;
       stones.push_back(c);
   }
   cout<<diffStones(stones,n);



    return 0;
}