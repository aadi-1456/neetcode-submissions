class Solution {
public:
    // Sorting
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){ // (Critical Bug)
        // int i=1, this is because of the edge case when nums.size()=0 
            if(nums[i]==nums[i-1]){
                return true;
            }
        }
        return false;
    }
};