class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int right=n-1,left=0;
        int maxwater=0;
        while(left<right){
            int height=min(heights[left],heights[right]);
            if(heights[left]<heights[right]){
                left++;
            }else{
                right--;
            }
            maxwater=max(maxwater,(right-left+1)*height);
        }
        return maxwater;

    }
};
