class Solution {
public:
    void findcombination(int ind,int target,vector<int>& temp,vector<vector<int>>& ans,vector<int>& candiates){
          if(target == 0){
            ans.push_back(temp);
            return;
          }
          if(ind == candiates.size()  || target <0){
            return;
          }
          if(candiates[ind] <= target){
            temp.push_back(candiates[ind]);
            findcombination(ind,target - candiates[ind],temp,ans,candiates);
            temp.pop_back();
          }
          findcombination(ind+1,target,temp,ans,candiates);
    }



    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> ans;
         vector<int> temp;
         findcombination(0,target,temp,ans,candidates);
         return ans;
    }
};