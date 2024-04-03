#include<iostream>
#include<unordered_set>
#include<string>

using namespace std;

int main(){
   unordered_set<char>s1;
   string s;
   cin>>s;
   for(char c:s) s1.insert(c);

   string result=(s1.size()%2==0)?"CHAT WITH HER!":"IGNORE HIM!";
   cout<<result<<endl;



    return 0;
}