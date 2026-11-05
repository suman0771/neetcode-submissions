class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort(nums.begin(),nums.end());
        int n=nums.size(),i=0,j=1;
        while(i!=j){
            if(target==nums[i]+nums[j]){
                break;
            }
            else if(j<n){
                j++;
            }
            else{
                i++;
                j=i+1;
            }
        }
        return {i,j};
    }
};
