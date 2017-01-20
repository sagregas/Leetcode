class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::map<int,int> myMap;

        std::vector<int> vec;
        vec.reserve(2);

        for(int i = 0; i < nums.size(); ++i){
            if(myMap.find(target - nums[i]) != myMap.end()){
                vec.push_back((myMap.find(target - nums[i]))->second);
                vec.push_back(i);
                break;
            }
            else{
                myMap[nums[i]] = i;
            }
        }

        return vec;
    }
};
