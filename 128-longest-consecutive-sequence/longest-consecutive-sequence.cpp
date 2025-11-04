#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for (int num : s) {
            if (s.find(num - 1) == s.end()) { // start of a new sequence
                int currNum = num;
                int currStreak = 1;

                while (s.find(currNum + 1) != s.end()) {
                    currNum++;
                    currStreak++;
                }

                longest = max(longest, currStreak);
            }
        }

        return longest;
    }
};

