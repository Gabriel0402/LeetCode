class Solution {
public:
    vector<int> searchRange(int A[], int n, int target) {
        vector<int> res(2,-1);
        int low=0;
        int high=n-1;
        int mid;
        while(low<high){
            mid=(low+high)/2;
            if(A[mid]<target) low=mid+1;
            else high=mid;
        }
        if(A[low]!=target) return res;
        res[0]=low;
        high=n;
        while(low<high){
            mid=(low+high)/2;
            if(A[mid]<=target) low=mid+1;
            else high=mid;
        }
        res[1]=high-1;
        return res;
        
    }
};