class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator==0) return "0";
        string ans="";
        if((numerator<0)^(denominator<0)){
            ans+='-';
        }
        long long n=abs((long long)numerator);
        long long d=abs((long long)denominator);
        ans+=to_string(n/d);
        long long rem=n%d;
        if(rem==0){
            return ans;
        }
        ans+='.';
        unordered_map<int,int> m;
        while(rem!=0){
            if(m.count(rem)) {
                ans.insert(m[rem],"(");
                ans+=")";
                break;
            }
            m[rem] = ans.size();

            rem*=10;
            ans+=to_string(rem/d);
            rem%=d;
        }
        return ans;

    }
};