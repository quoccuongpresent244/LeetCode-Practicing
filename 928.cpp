#include <bits/stdc++.h>

using namespace std;

int findLongest(string s);

int main(){
    cout << findLongest("aaabbbbeeee");
    return 0;
}

int findLongest(string s){
    int i = 0, j = 0, maxLength = 0;
    unordered_map <char, int> map;
    int n = s.length();

    while (i < n && j < n){
        map[s[j]]++;
        while (map.size() > 2){
            maxLength = max(maxLength, j-i);
            map[s[i]]--;
            if (map[s[i]] == 0){
                map.erase(s[i]);
            }
            i++;
        }
        maxLength = max(maxLength, j - i + 1);
        j++;
    }
    return maxLength;
}