#include<iostream>
#include<cmath>

using namespace std;

long long int sumFunction(long long int n){
    if(n==0){return 0;}
    if(n%2==0){
        return n/2;
    }
    else{
        return ((-1)*(n+1))/2;
    }
}

   

int main(){
    long long int n;cin>>n;
    cout<<sumFunction(n)<<endl;


    return 0;
}