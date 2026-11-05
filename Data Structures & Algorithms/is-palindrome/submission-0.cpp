class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        for(char c:s){
            if(isalnum(c) || (c>=0 and c<=9)){
                st+=tolower(c);
            }
        }
        int left=0,right=st.size()-1;
        while(left<right){
            if(st[left]!=st[right])return false;
            left++;
            right--;
        }
        return true;
    }
};
