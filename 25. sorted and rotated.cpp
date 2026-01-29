#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int l=0;
    int h=arr.size()-1;

    while(l <  h){
        int mid=l+(h-l)/2;
        if(arr[mid]>arr[h])l=mid+1;
        else {
            h=mid;
        }
    }
    cout<<arr[l];
    return 0;
}
