class Solution {
    public int removeDuplicates(int[] nums) {
        
        int k=0;

        if(nums.length==0) return 0;

        for(int i=1;i<nums.length;i++)
        {
            if(nums[i]!= nums[k])
            {
                k++;
                nums[k] = nums[i];
                // continue;
            }
            
        }

        return k+1;
    }
}