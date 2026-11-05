class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen=0;
        int n=s.length();
        unordered_map<char,int> mp;
        int j=0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            char f;
            int st=0;
            for(auto [p,q]:mp){
                if(q>st){
                    f=p;
                    st=q;
                }
            }
            if((i-j+1)-st<=k){
                maxlen=max(maxlen,(i-j+1));
            }
            while((i-j+1)-st>k){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    mp.erase(s[j]);
                }
                j++;
            }
        }
        return maxlen;
    }
};
