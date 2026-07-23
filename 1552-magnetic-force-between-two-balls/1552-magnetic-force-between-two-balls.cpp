class Solution {
public:
int distball(vector<int>& position, int dist ,int m) {
    int  count=1;
    int i =0;
    int j=i+1;
    while(j<position.size()) {
        if(position[j] -position[i]>=dist) 
        {
            count++;
            i=j;
            j=j+1;
        }
        else {
            j++;
        }
    }
    return count;
}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
     int l=1;
     int hi=position[position.size()-1] -position[0];
     cout<<hi;
     int ans=0;
         while(l<=hi) {
            int mid=l+(hi-l)/2;
           int TB=distball(position ,mid, m);
              if(TB>=m) {
                ans=mid;
                 l=mid+1;
              }
                else {
                hi=mid-1;
                  }
        
        }
      return ans;
    }
    
};