class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        if(nums.size()==1){return k;}
        else{
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != nums[i + 1] && i+1<nums.size()) {
                nums[k] = nums[i+1];
                k++;
            }
        }
        return k;}
    }
};