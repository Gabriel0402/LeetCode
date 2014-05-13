class Solution {
public:
    int reverse(int x) {
        char res[32];
        int i=0;
        if(x<0){
            res[i++]='-';
            x*=-1;
        }
        while(x){
            res[i++]=x%10+'0';
            x/=10;
        }
        int sol=atoi(res);
        return sol;
        
    }
};