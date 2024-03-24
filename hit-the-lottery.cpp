#include<iostream>

using namespace std;

int minDenomination(int n){
    int notes=0;
    while(n>=100){
        n-=100;
        notes++;
    }
    while(n>=20){
        n-=20;
        notes++;
    }
    while(n>=10){
        n-=10;
        notes++;
    }
    while(n>=5){
        n-=5;
        notes++;
    }
    while(n>=1){
        n-=1;
        notes++;
    }
    return notes;
}

int main(){
    int n;cin>>n;
    cout<<minDenomination(n)<<endl;

    return 0;
}