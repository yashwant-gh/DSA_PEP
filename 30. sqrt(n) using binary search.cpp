int mySqrt(int x) {
        if(x==0) return 0;
        if(x==1) return 1;
        int ans=-1;
        int l=1;
        int h=x/2;
        while(l<=h){
            long long mid=l+(h-l)/2;
            if(mid*mid<=x){
                ans=mid;
                l=mid+1;
            }
            else h=mid-1;
        }
        return ans;
    }
