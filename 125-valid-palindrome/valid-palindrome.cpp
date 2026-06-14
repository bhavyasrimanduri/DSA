class Solution {
public:
    bool isalphaNum(char ch){
        if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int strt=0;
        int end= s.length()-1;
        while(strt<end){
            if(!isalphaNum(s[strt])) {
                strt++; 
                continue;
            }
            if(!isalphaNum(s[end])) {
                end--;  
                continue;
            }
            if(tolower(s[strt])!=tolower(s[end])){
                return false;
            }
            strt++;
            end--;
        }
        return true;
    }
};