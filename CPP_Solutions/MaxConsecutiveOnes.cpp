class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count = 0;
        int result = 0;

        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 1){
                count++;
            }
            else{
                result = result > count ? result : count;
                count = 0;
            }
        }

        if(count) result = result > count ? result : count;

        return result;
    }
};
