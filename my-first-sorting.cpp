#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int cases;cin>>cases;
    while(cases--){
     int a,b;cin>>a>>b;
      cout<<min(a,b)<<" "<<max(a,b)<<endl;
    }

    return 0;

}