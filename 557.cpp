class Solution {
public:
    string reverseWords(string s) {
        int j = 0;
        for (int i = 0; i < s.length(); i++){
            if (i == s.length() - 1){
                reversee(s, j, i);
            }
            else if (s[i] == ' '){
                reversee(s, j, i-1);
                j = i + 1;
            }   
        }
        return s;
    }
    
    void reversee(string &s, int start, int end){
        while (start < end)
            swap(s[start++], s[end--]);
    }
};