#include<iostream>

using namespace std;

long int candies( long int n){
    if(n==0 || n==1) return 0;
    else{
        if(n%2==0)return ((n/2)-1);
        else return (n-1)/2;
    }
}

int main(){
    int n;cin>>n;
    while(n>0){
        long int num;cin>>num;
        cout<<candies(num)<<endl;
        n--;
    }


    return 0;
}