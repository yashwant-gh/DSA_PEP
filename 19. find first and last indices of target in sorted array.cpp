#include<bits/stdc++.h>
using namespace std;

//  function to check for first index
int bsl(vector<int>arr,int target){  // binary search left
    int l=0;
    int h=arr.size()-1;
    int ans=0;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==target){
           ans=mid;
            h=mid-1;   //if found now check on left of it 
        }
        else if(arr[mid]>target)h=mid-1;
        else l=mid+1;
    }
    return ans;
}

//  function to check for last index
int bsr(vector<int>arr,int target){ // binary search right
    int l=0;
    int h=arr.size()-1;
    int ans=0;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==target){
           ans=mid;
            l=mid+1; // if found now check on right of it 
        }
        else if(arr[mid]>target)h=mid-1;
        else l=mid+1;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int fin=bsl(arr,target);  // first index
    int lin=bsr(arr,target);  // last index
    cout<<fin<<" "<<lin<<endl;
    return 0;
}
