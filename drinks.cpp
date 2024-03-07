#include<iostream>


using namespace std;

int main(){
    int n;cin>>n;
    int total=0;
    for(int i=0;i<n;i++){
        int n;
        cin>>n;
        total+=n;
    }
    cout<<(float)total/n<<endl;



    return 0;
}