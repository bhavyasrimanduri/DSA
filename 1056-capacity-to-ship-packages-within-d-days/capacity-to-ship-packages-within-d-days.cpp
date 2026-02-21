class Solution {
public:
    int addweights(vector<int>& weights,int capacity){
        int day=1;
        int load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>capacity){
                day=day+1;
                load=weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return day;
    };
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int total=0;
        for(int i=0;i<weights.size();i++){
             total += weights[i];
        }
        int high=total;
        while(low<=high){
            int mid=(low+high)/2;
            int val=addweights(weights,mid);
            if(val<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};