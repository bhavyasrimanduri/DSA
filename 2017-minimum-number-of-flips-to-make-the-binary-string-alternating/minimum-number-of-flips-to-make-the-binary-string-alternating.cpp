class Solution {
public:
    int minFlips(string s) {
    int n = s.size();
    string t = s + s;
    
    int flip1 = 0, flip2 = 0;
    int ans = INT_MAX;
    
    for(int i = 0; i < t.size(); i++){
        
        char exp1 = (i % 2) ? '1' : '0';
        char exp2 = (i % 2) ? '0' : '1';
        
        if(t[i] != exp1) flip1++;
        if(t[i] != exp2) flip2++;
        
        if(i >= n){
            char prev1 = ((i-n) % 2) ? '1' : '0';
            char prev2 = ((i-n) % 2) ? '0' : '1';
            
            if(t[i-n] != prev1) flip1--;
            if(t[i-n] != prev2) flip2--;
        }
        
        if(i >= n-1){
            ans = min(ans, min(flip1, flip2));
        }
    }
    
    return ans;
}
};