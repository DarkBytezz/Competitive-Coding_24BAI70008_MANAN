class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>freq;
        int maxLen = 0, l = 0;
        for(int r = 0; r<s.size(); ++r){
            freq[s[r]]++;

            while(freq[s[r]] >1){
                freq[s[l]]--;
                l++;
            }
                maxLen = max(maxLen, r-l+1);

        }
        return maxLen;
    }
};
