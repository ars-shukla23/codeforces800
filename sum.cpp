#include<iostream>
#include<vector>
#include<algorithm>
#include<string>


using namespace std;

string sumof2(vector<int>v){
    sort(v.begin(),v.end());
    return (v[2]-(v[1]+v[0])==0)?"YES":"NO";
}

int main(){
    int cases;
    cin>>cases;
    while(cases>0){
        vector<int>vec(3);
        for(int i=0;i<3;i++){
            cin>>vec[i];
        }
        cout<<sumof2(vec)<<endl;
        cases--;
    }



    return 0;
}