class Solution {
public:
    int candy(vector<int> &ratings) {
        int n=ratings.size();
        vector<int> res(n,1);
        int temp=1;
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]) temp++;
            else temp=1;
            res[i]=temp;
        }
        temp=1;
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]) temp++;
            else temp=1;
            res[i]=res[i]>=temp?res[i]:temp;
        }
        int sum=0;
        for(int i=0;i<res.size();i++){
            sum+=res[i];
        }
        return sum;
        
        
    }
};