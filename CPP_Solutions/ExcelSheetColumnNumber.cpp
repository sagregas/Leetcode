class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;
        for(int i = 0; i < s.length(); ++i){
            result += pow(26,s.length()-1-i) * ((int)s[i] - 64);
        }
        return result;
    }
};
