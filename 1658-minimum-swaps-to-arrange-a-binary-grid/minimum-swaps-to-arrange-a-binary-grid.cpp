class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size();
        int swaps=0;
        vector<int> maxright(n);
        for(int i=0;i<n;i++){
            int rightmost=-1;
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    rightmost=j;
                }
            }
            maxright[i]=rightmost;
        }
        for(int i=0;i<n;i++){
            int j=i;
            while(j<n && maxright[j]>i){
                j++;
            }
            if(j==n) return -1;
            while(j>i){
                swap(maxright[j],maxright[j-1]);
                swaps++;
                j--;
            }
        }
        return swaps;
    }
};