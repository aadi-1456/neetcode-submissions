class Solution {
public:
    // Boyer-Moore Voting Algorithm
    int majorityElement(vector<int>& nums) {
        int res=0,count=0;

        for(int i=0;i<nums.size();i++){
            if(count==0){
                res=nums[i];
            }

            // count += (nums[i] == res) ? 1 : -1; 

            if(res==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return res;
    }
};