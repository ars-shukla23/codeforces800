#include<iostream>

using namespace std;

int main(){ 
    int n;
    cin>>n;
    while(n>0){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int result=0;
        if(b>a)result++;
        if(c>a)result++;
        if(d>a)result++;
        cout<<result<<endl;
        n--;
    }
    return 0;
}