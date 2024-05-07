#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int a,b;cin>>a>>b;
    int numer=(6-max(a,b))+1;
    
    switch(numer){
        case 0:
           cout<<"0/1"<<endl;break;
        case 1:
           cout<<"1/6"<<endl;break;
        case 2:
           cout<<"1/3"<<endl;break;
        case 3:
           cout<<"1/2"<<endl;break;
        case 4:
           cout<<"2/3"<<endl;break;
        case 5:
           cout<<"5/6"<<endl;break;
        case 6:
           cout<<"1/1"<<endl;break;               

    }

    return 0;
}