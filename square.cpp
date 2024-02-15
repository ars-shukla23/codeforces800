#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;


int areaSquare(vector<pair<int,int>>v){
     int side1,side2;
     //To find side1
     int a=v[0].first;
     int b=v[0].second;
     for(int i=1;i<4;i++){
        if(v[i].first==a){
            side1=abs(v[i].second-b);
            break;
        }
     }
     //To find side2
     
     for(int i=1;i<4;i++){
        if(v[i].second==b){
            side2=abs(v[i].first-a);
            break;
        }
     }
     return side1*side2;
}


int main(){
    int n;
    cin>>n;
    while(n>0){
   vector<pair<int,int>>points;
   for(int i=0;i<4;i++){
     pair<int,int>p;
     cin>>p.first>>p.second;
     points.push_back(p);
   }
    cout<<areaSquare(points)<<endl;
        n--;
    }

    return 0;
}