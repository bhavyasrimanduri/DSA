class Solution {
public:
    int countbits(int n){
        int cnt=0;
        while(n > 0){
            if(n % 2==1) cnt++;
            n=n/2;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),[&](int a,int b){
              int ca = countbits(a);
              int cb = countbits(b);
              if(ca==cb) return a<b;
              return ca < cb;
        });
        return arr;
    }
};