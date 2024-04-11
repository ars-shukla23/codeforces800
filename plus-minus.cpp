#include<iostream>

using namespace std;

int main(){
    int n;cin>>n;
    while(n>0){
    int a,b,c;
    cin>>a>>b>>c;
    if(c=a+b)cout<<'+'<<endl;
    else cout<<'-'<<endl;
    n--;
    }


    return 0;
}