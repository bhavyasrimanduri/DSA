class Solution {
public:
    int minPartitions(string n) {
        int maxdigit=0;
        for(int i=0;i<n.size();i++){
            maxdigit=max(maxdigit,n[i]-'0');
        }
        return maxdigit;
    }
};