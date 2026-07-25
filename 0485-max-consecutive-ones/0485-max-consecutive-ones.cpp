class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cur=0;
        int maxi=0;
    for(int i:nums)
     {
        if( i==1){
            cur++;
        }
        else {
            maxi=max(maxi,cur);
            cur=0;

        }
     }
     return max(maxi,cur);
    }
};