class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator == 0) return "0";
        string res;
        if(numerator<0 ^ denominator <0) res+='-';
        long long int n=numerator,d=denominator;
        n=abs(n);
        d=abs(d);
        
        res+=to_string(n/d);
        long long int r=n%d;
        if(r==0) return res;
        else res+='.';
        unordered_map<int,int> map;
        while(r){
            if(map.find(r)!=map.end()){
                res.insert(map[r],1,'(');
                res+=')';
                break;
            }
            map[r]=res.size();
            r*=10;
            res+=to_string(r/d);
            r=r%d;
        }
        return res;
        
        
    }
};