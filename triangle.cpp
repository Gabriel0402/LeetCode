class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
       vector<int> res;
       int m=triangle.size()-1;
       for(int i=0;i<triangle[m].size();i++){
           res.push_back(triangle[m][i]);
       }
       for(int j=m-1;j>=0;j--){
           for(int i=0;i<=j;i++){
               res[i]=triangle[j][i]+min(res[i],res[i+1]);
           }
       }
       return res[0];
        
    }
};