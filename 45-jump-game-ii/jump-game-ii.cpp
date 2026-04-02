class Solution {
public:
    int jump(vector<int>& nums) {
        int maxind=0;
        int cnt=0;
        int currend=0;
        if(nums.size()==1) return 0;
        for(int i = 0;i<nums.size()-1;i++){
            if(i > maxind) return -1;
            maxind = max(maxind,nums[i]+i);
            if(i==currend){
                cnt++;
                currend=maxind;
            }
        }
        return cnt;
    }
};