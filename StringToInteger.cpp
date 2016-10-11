class Solution {
public:
    int myAtoi(string str) {
        long long result = 0;
        int sgn = 1, start = 0;
        while(start < str.size() && str[start] == ' ')
            start++;
        if(str[start] == '-'){
            start++;
            sgn = -1;
        }
        else if(str[start] == '+'){
            start++;
        }

        while(start < str.size() && str[start] == 0)
            start++;
        while(start < str.size()){
            if(str[start] > '9' || str[start] < '0')
                break;
            result = result * 10 + str[start] - '0';
            start++;
            if(result > INT_MAX && sgn == 1)
                return INT_MAX;
            if(sgn == -1 && result - 1 > INT_MAX)
                return INT_MIN;
        }
        sgn == 1 ? : result = -result;
        return result;
    }
};
