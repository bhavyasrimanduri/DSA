class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixcount;
        prefixcount[0]=1;
        int currsum=0;
        int cnt=0;
        for(int num: nums){
            currsum += num;
            if(prefixcount.find(currsum-k) != prefixcount.end()){
                cnt += prefixcount[currsum-k];
            }
            prefixcount[currsum]++;
        }
        return cnt;
    }
};