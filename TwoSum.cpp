class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;

        for(int i = 0;i < nums.size();++i){
            int k = target - nums[i];
            if(m.find(k) != m.end()){
                result.push_back(m[k]);
                result.push_back(i);
                break;
            }
            else{
                m[nums[i]] = i;
            }
        }
        return result;
    }
};
