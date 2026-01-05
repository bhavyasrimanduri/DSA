class Solution {
public:
    long long mod = 1e9+7;
    long long power(long long x , long long n){
        long long ans=1;
        while(n > 0){
            if(n & 1)
                ans = (ans *x) % mod;
            x = (x*x) % mod;
            n >>= 1;    
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long evencnt = (n+1)/2;
        long long oddcnt = n/2;
        long long res=(power(5,evencnt)*power(4,oddcnt)) % mod;
        return res;
    }
};