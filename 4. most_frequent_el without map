#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
   vector<int>arr(n); 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int ans=0;
    int maxu=INT_MIN;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i])count++;
        }
        if(count>maxu){
            maxu=count;
            ans=arr[i];
        }
    }
    cout<<ans;
    return 0;
}
