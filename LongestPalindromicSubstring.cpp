class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() < 2)
            return s;
        int maxStart = 0, maxLen = 0;
        int start = 0;
        while(start < s.size()){
            int l = start;
            int r = start;
            while(r < s.size() - 1 && s[r + 1] == s[l]) r++;
            start = r + 1;
            while(l > 0 && r < s.size() - 1 && s[l - 1] == s[r + 1]){
                l--;
                r++;
            }
            if(maxLen < r - l + 1){
                maxLen = r - l + 1;
                maxStart = l;
            }
        }
        return s.substr(maxStart, maxLen);
    }
};
