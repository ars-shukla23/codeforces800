#include<iostream>
#include<string>

using namespace std;

int main(){
   
   int n;
   cin>>n;
   bool hate=true;
   string s="";
   for(int i=n;i>0;i--){
     string word=(hate)?"hate":"love"; 
    if(i==1){
        s+="I "+word+" it";
      }
      else{
      s+="I "+word+" that ";
      hate=!hate;
      }
   }

   cout<<s<<endl;




    return 0;
}