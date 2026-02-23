class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=1<<k;
        vector<bool> binary(n,false);
        int m=n-1;
        int hash=0;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            hash = ((hash << 1) & m) | (s[i] - '0');
            if(i>=k-1){
                if(!binary[hash]){
                    binary[hash]=true;
                    cnt++;
                }
                if(cnt == n){
                    return true;
                }
            }
        }
        return false;
    }
};