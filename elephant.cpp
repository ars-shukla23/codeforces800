#include<iostream>

using namespace std;

int minSteps(int n){
    return ((n-(n%5))/5)+((n%5==0)?0:1);
}


int main(){
    int n;
    cin>>n;
    cout<<minSteps(n)<<endl;


    return 0;
}