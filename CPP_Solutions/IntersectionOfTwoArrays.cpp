class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        std::vector<int> vec;

        std::unordered_set<int> mySet;
        mySet.insert(nums1.begin(), nums1.end());

        for(int i = 0; i < nums2.size(); ++i){
            if(mySet.find(nums2[i]) != mySet.end()){
                vec.push_back(nums2[i]);
                mySet.erase(nums2[i]);
            }
        }

        return vec;
    }
};
