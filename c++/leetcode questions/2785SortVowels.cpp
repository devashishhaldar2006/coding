class Solution {
public:
    string sortVowels(string s) {
        vector<int> pos;
        vector<char> vowels;
        for (int i = 0; i < s.size(); ++i) {
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                pos.push_back(i);
                vowels.push_back(ch);
            }
        }
        sort(vowels.begin(), vowels.end());
        for (int i = 0; i < pos.size(); ++i) {
            s[pos[i]] = vowels[i];
        }
        return s;
    }
};