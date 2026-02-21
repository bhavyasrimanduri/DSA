class Solution {
public:
    int sumby(vector<int>&nums,int div){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum += ceil((double)nums[i]/div);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(nums.size()>threshold) return -1;
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=(low+high)/2;
            int val=sumby(nums,mid);
            if(val<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};