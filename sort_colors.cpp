class Solution {
public:
    void sortColors(int A[], int n) {
        if (A==NULL) return;
        int redIndex=0;
        int blueIndex=n-1;
        int index=0;
        while(index<=blueIndex){
            if(A[index]==0){
                swap(A[index],A[redIndex]);
                index++;
                redIndex++;
            }
            else if(A[index]==2){
                swap(A[index],A[blueIndex]);
                blueIndex--;
            }
            else index++;
        }
        
    }
};