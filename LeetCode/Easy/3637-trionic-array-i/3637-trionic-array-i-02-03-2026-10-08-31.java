class Solution {
    public boolean isTrionic(int[] nums) {
        
        int n = nums.length;
         int i=1;

        if(n<4)
            return false;
        

        while(i<n && nums[i] > nums[i-1])
        {
            i++;
        }

        if(i==1 || i==n) return false;

        while(i<n && nums[i] < nums[i-1])
        {
            i++;
        }
    
        if(i == n) return false;

         while(i<n && nums[i] > nums[i-1])
        {
            i++;
        }

        return i==n;
        

    }
}