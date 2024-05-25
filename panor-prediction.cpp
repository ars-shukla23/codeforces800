#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)return false;
    }
    return true;
}


int main(){
    int a,b;cin>>a>>b;
    int prime_result=-1;
    for(int i=a+1;i<=b;i++){
        if(isPrime(i)){
            prime_result=i;
            break;
        }
    }
    if(prime_result==b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}