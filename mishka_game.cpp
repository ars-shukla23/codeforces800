#include<iostream>

using namespace std;

int main(){
    int n;cin>>n;
    int m=0,c=0;
    while(n>0){
        int a,b;cin>>a>>b;
        if(a>b)m++;
        if(b>a)c++;
        n--;
    }
    if(m>c)cout<<"Mishka";
    else if(m<c)cout<<"Chris";
    else cout<<"Friendship is magic!^^";


    return 0;
}