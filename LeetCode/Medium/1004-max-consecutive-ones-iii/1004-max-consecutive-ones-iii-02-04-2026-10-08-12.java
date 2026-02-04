class Solution {
    public int longestOnes(int[] nums, int k) {
        int l=0,maxl=0, maxz=0;
        int n = nums.length;
        for(int r=0; r<n;r++)
        {
            if(nums[r] == 0 && maxz<=k)
            {
                maxz++;
            }

            while(maxz>k)
            {
                if(nums[l]==0)
                {
                    maxz--;
                }
                l++;
            }
            maxl = Math.max(maxl, r-l+1);
        }

        return maxl;
    }
}