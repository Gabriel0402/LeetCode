class Solution {
public:
    int reverse(int x) {
        int result=0;
        int s=1;
        if(x<0) 
        {
            x*=-1;
            s=-1;
        }
        while(x)
        {
            result=result*10+x%10;
            x=x/10;
        }
        result=result*s;
        return result;
    }
};