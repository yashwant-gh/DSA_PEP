#include<bits/stdc++.h>
using namespace std;

// arr: 1 2 4 6 7 9 7 5 4 3     peak: 9
int bs(vector<int>arr){ //binary search 
    int l=0;
    int h=arr.size()-1;
    int ans=0;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
           return ans=arr[mid];
        }
        else if(arr[mid]<arr[mid+1])l=mid+1;
        else if(arr[mid]<arr[mid-1])h=mid-1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int ans=bs(arr);
    cout<<ans;
    return 0;
}
