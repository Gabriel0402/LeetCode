class Solution {
public:
    int numTrees(int n) {
        return BST(1,n);
    }
    int BST(int start,int end){
        if(start>=end) return 1;
        int res=0;
        for(int i=start;i<=end;i++){
            res+=BST(start,i-1)*BST(i+1,end);
        }
        return res;
    }
};