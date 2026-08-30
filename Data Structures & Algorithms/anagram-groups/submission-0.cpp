class Solution {
public:
    


    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> sols;
        unordered_map<string,vector<string>> map1;
        for(auto it:strs){
            string etc = it;
            sort(etc.begin(),etc.end());
            map1[etc].push_back(it);
        }
        for(auto it: map1){
            sols.push_back(it.second);
        }
        return sols;
    }
};
