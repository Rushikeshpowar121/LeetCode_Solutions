class Solution {
    public int[] sortedSquares(int[] nums) {
        
       int i=0,j;
       int arr[] = new int[nums.length];
       int p=0;

       while(i<nums.length && nums[i]<0){
        i++;
       }

       j=i;
       i=i-1;


       while(i>=0 && j<nums.length){
        int s1= nums[i] * nums[i];
        int s2 = nums[j] * nums[j];

        if(s1<=s2){
            arr[p] = s1;
            i--;
        }else{
            arr[p] = s2;
            j++;
        }
        p++;

       }

       while(i>=0)
       {
        arr[p]= nums[i]* nums[i];
        i--;
        p++;
       }

       while(j<nums.length){
        arr[p] = nums[j] * nums[j];
        j++;
        p++;
       }

       return arr;
    }
}