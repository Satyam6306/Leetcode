class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        int low=1;
        int high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            long long check=0;
            for(int i=0;i<n;i++){
                check += ceil((double)nums[i] / (double)mid);
            }
            if(check<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};