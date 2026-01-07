class Solution {
public:
    void findcombination(int ind,vector<int>& candiates,int target,vector<int>& temp,vector<vector<int>>& ans){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<candiates.size();i++){
            if(i > ind && candiates[i]==candiates[i-1]){
                continue;
            }
            if(candiates[i] > target){
                break;
            }
            temp.push_back(candiates[i]);
            findcombination(i+1,candiates,target-candiates[i],temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        findcombination(0,candidates,target,temp,ans);
        return ans;
    }
};