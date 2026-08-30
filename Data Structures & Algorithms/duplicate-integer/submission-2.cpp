class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> map1;
        for(int i =0;i<nums.size();i++){
            if(map1.find(nums[i]) != map1.end()){
                return true;
            }else{
                map1.insert(nums[i]);
            }
        }
        return false;
    }
};