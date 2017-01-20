class Solution {
public:
    int reverse(int x) {

        std::string s = std::to_string(x);

        if(s[0] == '-'){
            for(int i = 1; i <= s.length()/2; ++i){
                char temp;
                temp = s[i];
                s.replace(i,1,1,s[s.length()-i]);
                s.replace(s.length() - i, 1,1, temp);
            }
        }
        else{
            for(int i = 0; i < s.length()/2; ++i){
                char temp;
                temp = s[i];
                s.replace(i,1,1,s[s.length()-i-1]);
                s.replace(s.length()-i-1, 1,1, temp);
            }
        }


        if(stol(s) < INT_MIN || stol(s) > INT_MAX) return 0;

        return stoi(s);

    }
};
