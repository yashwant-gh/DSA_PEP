#include<bits/stdc++.h>
using namespace std;


//Given int arr of length n the elements are in range[1,n]
//each int appears once or twice 
//return an array of all elements that appear twice 
// T.C : O(n) and Space complexity: O(1) 
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        int x=abs(arr[i]);
        if(arr[x-1]<0)ans.push_back(x);
        else arr[x-1]=-(arr[x-1]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
