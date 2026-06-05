class Solution {
public:
    // Sorting Method
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int res= nums[nums.size()/2];
        return res;
    }
};