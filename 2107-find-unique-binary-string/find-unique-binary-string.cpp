class Solution {
public:
    string ans="";
    
    void solve(int i, int n, string &curr, unordered_set<string> &st){
        if(i==n){
            if(st.find(curr)==st.end()){
                ans=curr;
            }
            return;
        }
        
        curr.push_back('0');
        solve(i+1,n,curr,st);
        curr.pop_back();
        
        if(ans!="") return;
        
        curr.push_back('1');
        solve(i+1,n,curr,st);
        curr.pop_back();
    }
    
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        unordered_set<string> st(nums.begin(),nums.end());
        string curr="";
        solve(0,n,curr,st);
        return ans;
    }
};