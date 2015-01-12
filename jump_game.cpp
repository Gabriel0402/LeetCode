class Solution {
public:
    bool canJump(int A[], int n) {
        if(n==0) return false;
        int cur=A[0];
        int i=0;
        while(i<=cur){
            cur=cur>=(A[i]+i)?cur:(A[i]+i);
            if(cur>=n-1) return true;
            i++;
        }
        return false;
        
    }
};