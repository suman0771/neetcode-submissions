class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(auto &i:strs){
            string st=i;
            sort(st.begin(),st.end());
            res[st].push_back(i);
        }
        vector<vector<string>> result;
        for(auto &it:res){
            result.push_back(it.second);
        }
        return result;

    }
};
