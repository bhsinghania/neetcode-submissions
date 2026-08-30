class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map1;
        char *a = &s[0];
        char *b = &t[0];
        while(*a != '\0'){
            map1[*a]++;
            a++;
        }
        while(*b != '\0'){
            if(map1[*b] == 0) return false;
            map1[*b]--;
            b++;
        }
        for(auto a:map1){
            if(a.second!= 0) return false;
        }
        return true;
    }
};
