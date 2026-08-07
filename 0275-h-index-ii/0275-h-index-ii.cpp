class Solution {
public:
    int hIndex(vector<int>& citations) {
    sort(citations.begin(),citations.end());
    int n =citations.size();

    int l=0;
    int h=n-1;

    int ans=0;

    while(l<=h){
        int mid =l+(h-l)/2;
        cout<<mid;
        if(citations[mid] >= n-mid) {
             ans = max(ans, n - mid);
                h = mid - 1;

        }
        else 
            l=mid+1;
        
    }
    
    return ans;
     
    }
};