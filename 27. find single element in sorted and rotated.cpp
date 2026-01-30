
// we will check based on even odd index 
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
    if(arr.size()==1)return arr[0];
    if(arr[0]!=arr[1])return arr[0];
    if(arr[arr.size()-1]!=arr[arr.size()-2])return arr[arr.size()-1];
    
    int l=1;
    int h=arr.size()-2;
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            ans=arr[mid];
            break;
        }
        if(mid%2==0){
            if(arr[mid]==arr[mid-1])h=mid-1;
            else l=mid+1;
        }
        else{
            if(arr[mid]==arr[mid-1])l=mid+1;
            else h=mid-1;
        }
    }
    return ans;
    }
};
