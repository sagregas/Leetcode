class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

         std::vector<int> vec;

         for(int i = 0; i < nums.size(); ++i){
             if(nums[i] > 0){
                 if(nums[nums[i]-1] > 0) nums[nums[i]-1] = -nums[nums[i]-1];
             }
             else{
                nums[i] = -nums[i];
                if(nums[nums[i]-1] > 0 && nums[i] - 1 != i) nums[nums[i]-1] = -nums[nums[i]-1];
                nums[i] = -nums[i];
             }
         }


         for(int i = 0; i < nums.size(); ++i){
             if(nums[i] > 0) vec.push_back(i+1);
         }

        return vec;
    }
};
