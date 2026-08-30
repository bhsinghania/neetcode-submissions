class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set1(nums.begin(),nums.end());
            int maxlength = 0;
            for(int num:set1){
                
                if(set1.find(num-1) == set1.end()){
                    int length = 1;
                    int current = num;
                    while(set1.find(current+1) != set1.end()){
                        current++;
                        length++;
                    }
                    maxlength = max(maxlength,length);
                }
            }
        return maxlength;
        
    }
};
