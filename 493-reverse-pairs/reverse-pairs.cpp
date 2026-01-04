class Solution {
public:
    int mergesort(vector<int>& nums,int low,int high,vector<int>& temp){
        if(low >= high) return 0;
        int mid = (low+high)/2;
        int cnt=0;
        cnt += mergesort(nums,low,mid,temp);
        cnt += mergesort(nums,mid+1,high,temp);
        int j= mid+1;
        for(int i=low;i<=mid;i++){
            while(j <= high && (long long)nums[i] > 2LL*nums[j]){
                j++;
            }
            cnt += (j-(mid+1));
        }
        int left = low, right = mid+1,k=0;
        while(left <= mid && right<= high){
            if(nums[left] <= nums[right]){
                temp[k++]=nums[left++];  
            }
            else {
               temp[k++]=nums[right++];
            }
        }
            while(left <= mid) temp[k++]=nums[left++];
            while(right <= high) temp[k++]=nums[right++];
            for(int i=0;i<k;i++){
                nums[low+i]=temp[i];
            }
            return cnt;
    }
    int reversePairs(vector<int>& nums) {
        vector<int> temp(nums.size());
        return mergesort(nums,0,nums.size()-1,temp);
    }
};