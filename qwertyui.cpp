#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int sum=0;
    int r=0;
    int ans=INT_MIN;
    while(r<arr.size()){
        if(sum<0)sum=0;
        else ans=max(ans,sum);
        r++;
        sum+=arr[r];
    }
    cout<<ans;
}
