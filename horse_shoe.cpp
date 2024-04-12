#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<int,int>map;
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        map[x]++;
    }

    cout<<4-map.size()<<endl;


    return 0;
}