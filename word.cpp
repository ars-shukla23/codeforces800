#include<iostream>
#include<string>


using namespace std;

string word(string s){
    int wordcase=0;
    for(char c:s){
        if((int)c<=90){
            wordcase++;
        }
        else{
            wordcase--;
        }
    }
    string result="";
    int lrange=(wordcase<=0)?65:97;
    int urange=(wordcase<=0)?90:122;
    int num=(wordcase<=0)?32:-32;
    for(char c:s){
        if((int)c>=lrange && (int)c<=urange){
         result.push_back(c+num);
        }
        else{
            result.push_back(c);
        }
    }

    return result;
}


int main(){
    string s;
    cin>>s;
    cout<<word(s)<<endl;



    return 0;
}