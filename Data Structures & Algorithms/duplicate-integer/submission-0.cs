public class Solution {
    public bool hasDuplicate(int[] nums){
        for(int i = 0;i<nums.Length;i++){
        int currchar = nums[i];
            for(int j = i+1;j<nums.Length;j++){
                if(currchar == nums[j]){
                return true;
                }
            }
        }
    return false;
    }   
}