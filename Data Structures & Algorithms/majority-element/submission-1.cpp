class Solution {
public:
    // Hash Map Method
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int res=0,count=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;

            if(mp[nums[i]]>count){
                res=nums[i];
                count=mp[nums[i]];
            }
        }
        return res;
    }
};