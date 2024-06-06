#include<iostream>
#include<string>

using namespace std;

int main(){
    int cases;cin>>cases;
    while(cases--){
        int n;cin>>n;
        int x=0,y=0;
        string s;cin>>s;
        bool found=false;
        for(char c:s){
            switch(c){
                case 'U':
                y++;break;
                case 'D':
                y--;break;
                case 'R':
                x++;break;
                case 'L':
                x--;break;
            }
            if(x==1 && y==1){
                found=true;
                break;
            }
        }
        string result=(found)?"YES":"NO";
        cout<<result<<endl;
    }
    return 0;
}