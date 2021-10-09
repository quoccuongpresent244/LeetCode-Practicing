class Solution {
public:
	int lengthOfLongestSubstring(string s) {
        
        int i = 0, j = 0, res = 0; 
        unordered_set <char> check;
        
        while (i < s.length() && j < s.length()){
            
            if (check.find(s[j]) == check.end()){
                check.insert(s[j]);
                j++;
                res = max(res, j-i);
            }
            else{
                check.erase(s[i]);
                i++;
            }
        }
        return res;
    }
};