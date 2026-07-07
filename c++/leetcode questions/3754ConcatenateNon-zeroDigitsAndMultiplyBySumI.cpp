
class Solution {
public:
    typedef long long ll;
    ll revNum(ll n){
        ll res=0;
        while(n){
            int rem=n%10;
            res=rem+res*10;
            n/=10;
        }
        return res;
    }
    ll calculate(int n){
        ll res=0;
        while(n){
            int rem=n%10;
            if(rem){
                res=res*10+rem;
            }
            n/=10;
        }
        return revNum(res);
    }
    ll sum(int n){
        ll res=0;
        while(n){
            res+=(n%10);
            n/=10;
        }
        return res;
    }

    long long sumAndMultiply(int n) {
        ll x=calculate(n);
        ll s=sum(n);
        return x*s;
    }
};