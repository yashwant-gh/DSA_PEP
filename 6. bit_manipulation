#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int *arr=new int[n];
    //  5, 2, 3, 1, 2, 2, 5, 3, 3, 5, 1, 1, 5

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int bit=0;bit<32;bit++){
        int count=0;
        for(int i=0;i<n;i++){
            if((arr[i] & (1<<bit))!=0){
                count++;
            }
        }
        if(count%3!=0){
            ans |=(1<<bit);
        }
    }
    cout<<ans;
    delete[] arr;
    return 0;
}
