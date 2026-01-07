class Solution {
public:
    void findcombination(int start,int k,int n,vector<int>& temp,vector<vector<int>>& ans){
        if(temp.size() == k){
            if(n == 0) ans.push_back(temp);
            return;
        }
        for(int i=start;i<=9;i++){
            if( i > n) break;
            temp.push_back(i);
            findcombination(i+1,k,n-i,temp,ans);
            temp.pop_back();
        }

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<vector<int>> ans;
        findcombination(1,k,n,temp,ans);
        return ans;
    }
};