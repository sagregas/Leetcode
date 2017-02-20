class Solution {
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        do{
            slow = getSum(slow);
            fast = getSum(getSum(fast));
        }
        while(slow!=fast);

        return slow == 1 ? true:false;
    }
private:
    int getSum(int n){
        int sum = 0;
        while(n){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
};
