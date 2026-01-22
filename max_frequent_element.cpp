#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr=new int[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)mp[arr[i]]++;
    int maxu=INT_MIN;
    int index=0;
    for(int i=0;i<n;i++){
        if(mp[arr[i]]>=maxu){
            maxu=mp[arr[i]];
            index=i;
        }
    }
    cout<<index;
    delete[] arr;
    return 0;
}
