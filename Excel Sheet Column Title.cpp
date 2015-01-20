class Solution {
public:
    string convertToTitle(int n) {
        string temp="";
        while(n){
            int r=n%26;
            n=n/26;
            if(r==0){
                temp+='Z';
                n--;
            }
            else{
                temp+=('A'+r-1);
            }
        }
        string res="";
        for(int i=temp.size()-1;i>=0;i--){
            res+=temp[i];
        }
        return res;
    }
};