typedef pair<int,int> P;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        //empty min heap
        priority_queue<P,vector<P>,greater<P>> PQ;
        unordered_map<int,int> mp;
        //store frequency
        for(int i:nums){
            mp[i]++;
        }
        //insert k element in PQ and remove if more than k element and then remove the smallest element which will be on top of Min heap.
        //PQ ->{frequency, Value}
        for(auto it:mp){
            PQ.push({it.second,it.first});
            if(PQ.size()>k){
                PQ.pop();
            }
        }

        //heap have most k frequent element now collect these elements.
        for(int i=0;i<k;i++){
            ans.push_back(PQ.top().second);
            PQ.pop();
        }
        return ans;

    }
};
