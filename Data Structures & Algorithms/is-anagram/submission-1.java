public class Solution {
    public boolean isAnagram(String s, String t)
    {   
        if(s.length()!= t.length()){
            return false;
        }
        int count = 0;
        for (int i = 0; i < s.length(); i++)        {
            char currchar = s.charAt(i);
            for (int j = 0; j < t.length(); j++)
            {
                if (t.charAt(j) == currchar)
                {
                   t = t.substring(0,j)+t.substring(j+1);
                   count++;
                   break;                
                }
            }
        }
        return count == s.length();
    }
}
