#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    vector<int>vec2(vec);
    sort(vec2.begin(),vec2.end());
    int maxn=vec2[n-1],minn=vec2[0];
    int leftmax,rightmin;
    for(int i=0;i<n;i++){
        if(vec[i]==maxn){
        leftmax=i;
        break;
        }
        }
    for(int i=n-1;i>=0;i--){
        if(vec[i]==minn){
            rightmin=i;
            break;
            }
        }

    int result=(leftmax)+(n-1-rightmin);
    if(leftmax>rightmin)result--;
    cout<<result<<endl;


    return 0;
}