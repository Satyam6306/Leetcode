class Solution {
public:
    int findPoisonedDuration(vector<int>& nums, int dur) {
        int n = nums.size();
        int ans=0;
        int s=nums[0];
        int e=nums[0]+dur-1;
        for(int i =1;i<n;i++){
            if(nums[i]>=s &&nums[i]<=e) {
                e=max(e,nums[i]+dur-1);

            }
            else {
                ans=ans+e-s+1;
                s=nums[i];
                e=nums[i]+dur-1;
            }
        }
        ans=ans+(e-s+1);
        return ans;
    }
};