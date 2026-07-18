// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=0;
        int right=n;
        int ans=INT_MAX;


        while(l<=right) {
            int mid= l+(right-l)/2;

            if(isBadVersion(mid)){
                ans=min(ans,mid);
                right=mid-1;
            }
            else {
                l=mid+1;
            }


        }
        return ans;
    }
};