class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int k=0,i=0,n=nums.size()-1;
        // while(i<=n){
        //     if(nums[n]!=val){
        //         k++;
        //         if(nums[i]==val){
        //             swap(nums[i],nums[n]);
        //         }
        //         i++;

        //     }else{
        //         n--;
        //     }
        // }

        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[k++]=nums[i];
            }
        }
       
        return k;
    }
};