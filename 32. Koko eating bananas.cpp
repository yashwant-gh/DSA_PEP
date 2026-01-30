#include <bits/stdc++.h>
using namespace std;

// Time: O(nlog(m)) , m is the max element in given array
bool ispossible(vector<int>& arr,int n,int hour){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<n)sum++;
        else{
            sum+=(arr[i]/n);
            if(arr[i]%n)sum++;
        }
        if(sum>hour)return false;
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int hour;
    cin>>hour;
    int l=1;        //l is not 0 because cannot devide by 0
    int h=*max_element(arr.begin(),arr.end());
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(ispossible(arr,mid,hour)){
            ans=mid;
            h=mid-1;
        }
        else l=mid+1;
    }
    cout<<endl<<ans;
}
