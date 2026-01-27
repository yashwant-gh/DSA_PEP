//Brute force
//Time: O(n^2)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int mx=0;
    int c0=0;
    int c1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            c0=1;
            c1=0;
        }
        else{
            c1=1;
            c0=0;
        }
        for(int j=i+1;j<n;j++){
            if(arr[j]==0)c0++;
            else c1++;
            if(c0==c1)mx=max(mx,j-i+1);
        }
    }
    cout<<mx;
    
}
