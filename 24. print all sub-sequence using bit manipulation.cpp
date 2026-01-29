
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    
    
    for(int i=0;i<(1<<n);i++){  //1<<n: if n=1 it is 2 if n=0 it is 1
        for(int j=0;j<n;j++){
            if(i&(1<<j))cout<<arr[j];
        }
        cout<<endl;
    }
    return 0;
}
