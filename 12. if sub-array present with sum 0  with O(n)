// if sub-array present with sum 0 
//Time : O(n)


#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   int k;
   cin>>k;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   bool ans=false;
   unordered_map<int,int>mp;
   mp[0]=1;
   int currsum=arr[0];
   for(int i=0;i<n;i++){
       currsum+=arr[i];
       if(mp.find(currsum-k)!=mp.end()){
           ans=true;
           cout<<ans;
           return 0;
       }
       mp[currsum]++;
   }
   cout<<ans;
   return 0;
}
