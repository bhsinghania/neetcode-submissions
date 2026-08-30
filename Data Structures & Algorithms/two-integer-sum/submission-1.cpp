class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol = {0,0};
        for(int i = 0;i<nums.size();i++){
            int target2 = target-nums[i];
            for(int j = i+1;j<nums.size();j++){
                if(nums[j] == target2){
                    sol[0] = i;
                    sol[1] = j;
                    return sol;
                }
            }
        }
        return sol;
    }
};
