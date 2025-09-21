class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size()-1;
        int left =0;
        int right =n;


        while(left<right)
        {
            int res = numbers[left] + numbers[right];

            if(res==target)
            {    
                return {left+1, right+1};
            }
            else if(res<target)
                left++;
            else
                right--;

            
        }

        return {-1,-1};
    }
};