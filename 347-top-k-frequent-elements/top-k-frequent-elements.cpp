class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(auto i : nums){
            freq[i]++;
        }
        vector<vector<int>> bucketlist(nums.size()+1);
        for(auto j : freq){
            bucketlist[j.second].push_back(j.first);
        }
        vector<int> result;
        for(int i=bucketlist.size()-1;i>=0&&result.size()<k;i--){
            for(auto x : bucketlist[i]){
                result.push_back(x);
                if(result.size()==k){
                    break;
                }
            }
        }
        return result;
    }
};