#include<iostream>

using namespace std;

int main(){
    int cases;cin>>cases;
    while(cases--){
        int a,b,c;cin>>a>>b>>c;
        if(b>a && b>c)cout<<"PEAK"<<endl;
        else if(c>b && b>a)cout<<"STAIR"<<endl;
        else cout<<"NONE"<<endl;
    }




    return 0;
}