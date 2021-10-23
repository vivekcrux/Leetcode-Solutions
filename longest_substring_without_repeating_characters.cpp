// https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length(), ans = 0;
        map<char, int> freq;
        for(int i=0,j=0;i<n;i++)
        {
            freq[s[i]]++;
            while(freq[s[i]] > 1)
            {
                freq[s[j++]]--;
            }
            ans = max(ans, i-j+1);
        }
        return ans;
    }
};
