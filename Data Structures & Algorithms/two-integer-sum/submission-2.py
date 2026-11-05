class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        see={};
        for i in range(len(nums)):
            sum=target-nums[i]
            if sum in see:
                return [see[sum],i];
            see[nums[i]]=i;
        return [0,0]
