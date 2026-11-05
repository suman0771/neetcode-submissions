class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;

        unordered_map<char, int> mpps;
        unordered_map<char, int> mppt;
        for(int i=0;i<s.length();i++){
            mpps[s[i]]++;
            mppt[t[i]]++;
        }
        return mpps == mppt;
    }
};
