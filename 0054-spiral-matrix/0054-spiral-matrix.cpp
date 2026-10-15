class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix[0].size() - 1;
        int m = matrix.size() - 1;
        int top = 0;
        int r = n;
        int l = 0;
        int bot = m;
        vector<int> res;
        while(top <= bot &&l<=r){
          
            for(int i = l; i <= r; i++){
                res.push_back(matrix[top][i]);
            }
            top++;

            for(int i=top;i<=bot;i++){
                res.push_back(matrix[i][r]);
            }
            r--;

            if(top <= bot){
              
                for(int i = r; i>=l;i--){
                    res.push_back(matrix[bot][i]);
                }
                bot--;
            }

            if(l<= r){
               
                for(int i = bot; i >= top; i--){
                    res.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return res;
    }
};
