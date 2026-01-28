#include<bits/stdc++.h>
using namespace std;

//array is non increasing and only contain 1's and 0's
// arr: [1,1,1,1,1,0,0,0,0,0]
int bsr(vector<int>arr){ //binary search right
    int l=0;
    int h=arr.size()-1;
    int ans=0;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==1){
            ans=mid;
            l=mid+1;
        }
        else if(arr[mid]<1)h=mid-1;
    }
    return ans+1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int ans=bsr(arr);
    cout<<ans;
    return 0;
}
