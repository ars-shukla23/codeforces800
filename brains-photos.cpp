#include<iostream>
#include<string>
using namespace std;

int main(){
int rows,columns;
cin>>rows>>columns;
bool breakout=false;
for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        char pix;
        cin>>pix;
        if(pix!='W' && pix!='G' && pix!='B')breakout=true;
    }
    if(breakout)break;
}
 string result=(breakout)?"#Color":"#Black&White";
 cout<<result<<endl;
}