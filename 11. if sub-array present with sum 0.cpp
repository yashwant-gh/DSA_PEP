Time : O(n^2)

#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   int k;
   cin>>k;
   bool ans=false;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   for(int i=0;i<n;i++){
       int sum=0;
       for(int j=i;j<n;j++){
           sum+=arr[j];
           if(sum==k){
               ans=true;
               break;
           }
       }
   }
   cout<<ans;
   return 0;
}
