class Solution {
public:
    // HashMap (Two Pass Loop). this fails Handling Duplicate Values (Edge Case)
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(mp.find(diff)!=mp.end()){
                return {i, mp[diff]};
            }
        }
        return {};

        // This will fail at some instance or testcases
    }
};
