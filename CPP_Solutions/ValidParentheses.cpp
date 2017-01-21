class Stack {
public:
  void push(char c){
      stk.push_back(c);
      top = stk.size() - 1;
  }
  char pop(char c) {
      if(stk.empty()) return 'I';
      if((c == ')' && stk[top] == '(') ||(c == ']' && stk[top] == '[') || (c == '}' && stk[top] == '{') ){
          stk.pop_back();
          top = stk.size() - 1;
          return 'V';
      }
      else return 'I';
  }
  bool isEmpty(){
      return stk.empty();
  }
private:
  std::vector<char> stk;
  int top;
};

class Solution {
public:
    bool isValid(string s) {

        Stack st;

        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else{
                char c = st.pop(s[i]);
                if(c == 'I') return false;
            }
        }

        if(!st.isEmpty()) return false;

        return true;


    }
};
