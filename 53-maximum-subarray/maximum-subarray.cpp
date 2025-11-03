class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=nums[0];
        int currntsum=0;
        for(int i=0;i<nums.size();i++){
            currntsum += nums[i];
            if(currntsum > maxsum){
                maxsum=currntsum;
            }
            if(currntsum < 0){
                currntsum=0;
            }
        }
        return maxsum;
    }
};