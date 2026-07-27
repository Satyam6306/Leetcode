class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high) {
            int mid =low +(high-low)/2;
             cout<<mid<<endl;
            if(nums[mid]==target) {
                return mid;
              }//  cout<<mid;
            else if (nums[mid]>target) 
                high=mid-1;
            
            else
            low=mid+1;
        }
        return -1;
    }
};
