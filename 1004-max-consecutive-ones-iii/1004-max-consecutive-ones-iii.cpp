class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n =nums.size();
        int freq0=0;
        int l=0;
        int ans=0;
        for (int i =0;i<n;i++) {
            if(nums[i]==0) freq0++;
            while(freq0>k) {
                if(nums[l]==0) freq0--;
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};