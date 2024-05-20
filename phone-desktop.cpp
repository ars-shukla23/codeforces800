#include<iostream>

using namespace std;

int main(){
    int cases;cin>>cases;
    while(cases--){
        int a,b,screens;
        cin>>a>>b;
        screens=(b-(b%2))/2;
        if(b%2!=0)screens++;
        int blank=(screens*15)-(b*4);
        if(blank<a){
            while(blank<a){
                blank+=15;
                screens++;
            }  
        }
        cout<<screens<<endl;
    }


    return 0;
}