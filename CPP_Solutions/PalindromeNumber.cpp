class Solution {
public:
    bool isPalindrome(int x) {

     if(x < 0) return false;

     if(x / 10 == 0) return true;

     std::stack<int> stk;

     int num = x;

     while(num != 0){
         stk.push(num%10);
         num = num/10;
     }

     while(x != 0){
         if(stk.top() != x%10){
             return false;
         }
         else{
             x = x/10;
             stk.pop();
         }
     }

     return true;

    }
};
