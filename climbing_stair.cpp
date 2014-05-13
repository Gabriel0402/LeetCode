class Solution {
public:
    int climbStairs(int n) {
        vector<int> stair(3,1);
        for(int i=2;i<=n;i++){
            stair[i%3]=stair[(i-1)%3]+stair[(i-2)%3];
        }
        return stair[n%3];      
    }
};