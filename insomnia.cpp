#include<iostream>
#include<vector>

using namespace std;

int main(){
    int k,l,m,n,d;cin>>k>>l>>m>>n>>d;
    vector<int>arr(d+1,0);
    for(int i=1;i<d+1;i++){
        if(i%k==0){
            arr[i]=1;
            continue;
        }
        else if(i%l==0){
            arr[i]=1;
            continue;
        }
        else if(i%m==0){
            arr[i]=1;
            continue;
        }
        else if(i%n==0){
            arr[i]=1;
            continue;
        }
    }
    int result=0;
    for(int i=0;i<d+1;i++)if(arr[i]==1)result++;
    
    cout<<result<<endl;

    return 0;
}