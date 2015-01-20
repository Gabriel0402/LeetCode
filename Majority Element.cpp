class Solution {
public:
    int majorityElement(vector<int> &num) {
        int index=0;
        int count=1;
        for(int i=1;i<num.size();i++)
        {
            if(num[i]==num[index]){
                count++;
                
            }
            else{
                count--;
                if(count==0){
                    index=i;
                    count=1;
                }
            }
        }
        return num[index];
        
    }
};