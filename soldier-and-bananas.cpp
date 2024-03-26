#include<iostream>

using namespace std;

int main(){
    int k,n,w;cin>>k>>n>>w;
    int money_req=(k*w*(w+1))/2;
    int result=(money_req>n)? (money_req-n):0;
    cout<<result<<endl;

    return 0;
}