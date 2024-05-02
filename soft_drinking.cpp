#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main(){
   int n, k, l, c, d, p, nl, np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   int A=p/(np*n),B=(c*d)/n,C=(k*l)/(n*nl);
   vector<int>vec={A,B,C};
   auto minval=min_element(vec.begin(),vec.end());
   cout<<*minval<<endl;
   



    return 0;
}