class Solution {
public:
    string longestPalindrome(string s) {
        string result="";
        int len=s.length();
        if(len==0) return result;
        string longest=s.substr(0,1);
        for(int i=0;i<len;i++){
            string p1=check(s,i,i);
            if(p1.length()>longest.length()) longest=p1;
            string p2=check(s,i,i+1);
            if(p2.length()>longest.length()) longest=p2;
        }
        return longest;
        
    }
    string check(string s,int start,int end){
        int len=s.length();
        while(start>=0 && end<len && s[start]==s[end]){
            start--;
            end++;
        }
        int dis=end-start-1;
        return s.substr(start+1,dis);
    }
};