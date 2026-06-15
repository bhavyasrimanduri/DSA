class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int idx=0;
        for(int i=0;i<n;){
            char ch=chars[i];
            int cnt=0;
            while(i<n && chars[i]==ch){
                cnt++;
                i++;
            }
            if(cnt==1){
                chars[idx]=ch;
                idx++;
            }
            else{
                chars[idx++]=ch;
                string str=to_string(cnt);
                for(int j=0;j<str.length();j++){
                    chars[idx++]=str[j];
                }
            }
        }
        return idx;
    }
};