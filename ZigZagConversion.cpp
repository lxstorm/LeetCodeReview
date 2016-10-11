class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)    return s;
        string *str = new string[numRows];
        string res = "";
        int step = 1;
        int r = 0;
        for(int i = 0; i < s.size();++i){
            if(r == 0)
                step = 1;
            if(r == numRows - 1)
                step = -1;
            str[r] += s[i];
            r = r + step;
        }
        for(int i = 0; i < numRows;++i)
            res += str[i];
        return res;
    }
};
