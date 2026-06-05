class Solution {
public:
    // Two Pointer - Type 2 (Start & End Pointer)
    int removeElement(vector<int>& nums, int val) {
        int i=0, n=nums.size(); // note about the n size

        while(i<n){
            if(nums[i]==val){
                nums[i]=nums[n-1];  // This to be noted or do [--n]
                n--;
            } else {
                i++;
            }
        }

        return n;
    }
};