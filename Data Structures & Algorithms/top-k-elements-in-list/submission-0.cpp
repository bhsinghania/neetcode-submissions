class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map1;
        for(auto it:nums){
            map1[it]++;
        }    
        vector<vector<int>> bucket(nums.size()+1);
        for(auto it:map1){
            bucket[it.second].push_back(it.first);
        }
        vector<int> result;
        for(int f = nums.size();f>= 1 && result.size() <k;f--){
            for(auto x:bucket[f]){
                result.push_back(x);
                if(result.size() == k){
                    return result;
                }
            }
        }
        return result;              
    }
};
