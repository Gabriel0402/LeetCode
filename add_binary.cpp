class Solution {
public:
    string addBinary(string a, string b) {
        int m=a.length()-1;
        int n=b.length()-1;
        string res;
        int cur=0;
        while(m>=0 || n>=0){
            int a_temp=m>=0?a[m]-'0':0;
            int b_temp=n>=0?b[n]-'0':0;
            if((a_temp+b_temp+cur)%2==0){
                res.insert(0,"0");
            }
            else{
                res.insert(0,"1");
            }
            cur=(a_temp+b_temp+cur)/2;
            m--;
            n--;
        }
        if(cur==1) res.insert(0,"1");
        return res;
    }
};