#include<iostream>
#include<unordered_map>


using namespace std;

int main(){
   unordered_map<string,int>names;
   names["Tetrahedron"]=4;
   names["Cube"]=6;
   names["Octahedron"]=8;
   names["Dodecahedron"]=12;
   names["Icosahedron"]=20;
   int n,result=0;cin>>n;
   for(int i=0;i<n;i++){
    string s;cin>>s;
    result+=names[s];
   }
   cout<<result<<endl;

   


    return 0;
}