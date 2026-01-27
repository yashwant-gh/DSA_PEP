#include<bits/stdc++.h>
using namespace std;

Time: O(n) Space:O(n)
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    unordered_map<int,int>mp;
    mp[0]=-1;
    int c0=0;
    int c1=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)c0++;
        else c1++;
        int diff=c1-c0;
        if(mp.find(diff)!=mp.end()){
            if(i-mp[diff]>ans){
                ans=i-mp[diff];
            }
        }
        else mp[diff]=i;
    }
        cout<<ans;
        return 0;
}
