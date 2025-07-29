class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0;
        int maxlength=0;
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()&&mp[s[i]]>=start)
            {
                start=mp[s[i]]+1;
            }
            mp[s[i]]=i;
            maxlength=max(maxlength,i-start+1);
        }
        return maxlength;
    }
};