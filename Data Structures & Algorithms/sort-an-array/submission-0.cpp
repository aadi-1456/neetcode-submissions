class Solution {
public:
    // Merge Sort Approach (Method)
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }

private:
    void mergeSort(vector<int>& nums,int left,int right){
        if(left>=right){
            return;
        }
        int mid=(left+right)/2;
        mergeSort(nums,left,mid);
        mergeSort(nums,mid+1,right);
        merge(nums,left,mid,right);
    }

    void merge(vector<int>& nums,int l,int m,int r){
        vector<int> temp;
        int i=l,j=m+1;
        while(i<=m && j<=r){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while(i<=m){
            temp.push_back(nums[i]);
            i++;
        }

        while(j<=r){
            temp.push_back(nums[j]);
            j++;
        }

        for(int i=l;i<=r;i++){
            nums[i]=temp[i-l];
        }
    }
};