#include<bits/stdc++.h>
using namespace std;


// arr: 1 2 3 5 6 7 4 3 2 1       target:4     output: 6
int bspeak(vector<int>arr){ //binary search for peak element
    int l=0;
    int h=arr.size()-1;
    int ans=0;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
           return ans=mid;
        }
        else if(arr[mid]<arr[mid+1])l=mid+1;
        else if(arr[mid]<arr[mid-1])h=mid-1;
    }
    return ans;
}

int bsinc(vector<int>arr,int target,int h){ // binary search in increasing arr
    int l=0;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target)l=mid+1;
        else h=mid-1;
    }
    return -1;
}

int bsdec(vector<int>arr,int target,int l){ // binary search in increasing arr
    int h=arr.size()-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target)h=mid-1;
        else l=mid+1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int target;
    cin>>target;
    int peak=bspeak(arr);
    int ans=bsinc(arr,target,peak);
    if(ans==-1){
        ans=bsdec(arr,target,peak+1);
    }
    cout<<ans;
    return 0;
}
