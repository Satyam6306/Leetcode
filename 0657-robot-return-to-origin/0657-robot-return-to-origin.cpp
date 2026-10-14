class Solution {
public:
    bool judgeCircle(string moves) {
        int up=0;
        int down =0;

        for(char ch:moves) {
            switch (ch) {
                case 'U': up++; break;
                case 'D': up--; break;
                case 'L': down--; break;
                case 'R': down++; break;

            }
           
        }
         return up==0 && down==0;
    }
};