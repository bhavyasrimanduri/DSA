class Solution {
public:
    string minWindow(string s, string t) {
        if(s.empty()||t.empty()) return "";
        vector<int> freq(128,0);
        for(int i=0;i<t.length();i++){
            freq[t[i]]++;
        }
        int cnt = t.length();
        int minlen=INT_MAX;
        int left=0;
        int start=0;
        for(int right=0;right<s.length();right++){
            if(freq[s[right]]>0) cnt--;
            freq[s[right]]--;
            while(cnt==0){
                if(right-left+1<minlen){
                    minlen=right-left+1;
                    start=left;
                }
                freq[s[left]]++;
                if(freq[s[left]]>0) cnt++;
                left++;
            }
        }
        return minlen==INT_MAX ? "" :s.substr(start,minlen);
    }
};