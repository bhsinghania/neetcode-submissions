class Solution {
public:
    bool isalpha(char c){
        return((c >= 'a' && c <= 'z') 
        || (c >= 'A' && c <= 'Z')
        || (c >= '0' && c <= '9'));
    }
    bool isequal(char c1, char c2){
        return (tolower(c1) == tolower(c2));
    }
    bool isPalindrome(string s) {
        if(s.length() <= 1) return true;
        int i1 = 0;
        int i2 = s.length()-1;
        while(i2 > i1){
            while(i1<i2 && !isalpha(s[i1])){
                i1++;
            }
            while(i1<i2 && !isalpha(s[i2])){
                i2--;
            }
            if(!isequal(s[i1],s[i2])){
                return false;
            }
            i1++;
            i2--;

        }
        return true;

    }
};
