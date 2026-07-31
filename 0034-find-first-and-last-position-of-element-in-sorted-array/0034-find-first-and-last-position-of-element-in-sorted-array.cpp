class Solution {
public:

    int Findlm(vector<int> &nums,int target,int n) {
        int l=0;
        int h=n-1;
        int left_most=-1;
        while(l<=h) {
            int mid=l+(h-l)/2;
            cout<<mid<<endl;
            if(nums[mid]==target){
                left_most= mid;
                h=mid-1;
            } else if(nums[mid]<target){
                l=mid+1;
            } else 
                h=mid-1;
        }
        return left_most;
    }
    int Findrm(vector<int> &nums,int target,int n) {
        int l =0;
        int h=n-1;

        int right_most=-1;
        while(l<=h) {
            int mid=l+(h-l)/2;
            if(nums[mid]==target) {
                right_most=mid;
                l=mid+1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else 
                h=mid-1;
        }
        return right_most;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n =nums.size();

        int left_most=Findlm(nums,target,n);
        int right_most=Findrm(nums,target,n);
        return {left_most,right_most};
    }
    
};