class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n =nums.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(st.empty() || nums[i]<nums[st.top()]){
                st.push(i);
            }
        }
        int maxwidth=0;
        for(int j=n-1;j>=0;j--) {
            while(!st.empty() && nums[j]>=nums[st.top()]){
                maxwidth= max(maxwidth,j-st.top());

                st.pop();
            }
        }
        return maxwidth;
    }
};