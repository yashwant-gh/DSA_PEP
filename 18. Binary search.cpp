#include<bits/stdc++.h>
using namespace std;
// Time: O(log n)
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int target;
    cin>>target;
    int l=0;
    int h=n-1;
    while(l<=r){
        int mid=l+(h-l)/2;
        if(arr[mid]==target){
            cout<<"Found at "<<mid;
            return 0;
        }
        else if(arr[mid]<target){
            l=mid+1;
        }
        else h=mid-1;
    }
    cout<<"Not found";
    return 0;
}
