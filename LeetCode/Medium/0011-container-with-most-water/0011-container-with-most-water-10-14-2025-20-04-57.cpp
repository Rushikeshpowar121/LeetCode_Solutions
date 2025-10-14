class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j = height.size()-1;
        long long maxArea =0;

        while(i<j)
        {
            long long h = min(height[i], height[j]);
            long long w = j-i;
            long long area = h * w;
            maxArea = max(area, maxArea);

            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        return (int)maxArea;

    }
};