class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(128, -1);
        int start = 0;
        int end = 0;
        int maxLen = 0;
        while(end < s.size()){
            if(m[s[end]] >= start)
                start = m[s[end]] + 1;
            m[s[end]] = end;
            maxLen = max(maxLen, end - start + 1);
            end++;
        }
        return maxLen;
    }
};
