//Dutch national flag


// Time: O(n) Space: O(1)
// Unstable sorting
#include<bits/stdc++>h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    
    
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        swap(arr[mid],arr[low]);
        low++;
        mid++;
    }
    else if(arr[mid]==1){
        mid++;
    }
    else {
        swap(arr[mid],arr[high]);
        high--;
    }
    
}
