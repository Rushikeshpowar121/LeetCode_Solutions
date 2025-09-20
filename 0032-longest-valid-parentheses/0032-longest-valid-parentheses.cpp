class Solution {
public:
    int longestValidParentheses(string s) {
        int left=0, right =0, maxv =0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                left++;
            else
            {
                right++;
            }

            if(left==right)
            {
                maxv = max(maxv, right*2);
            }
            if(right>left)
            {
                left=0;
                right =0;
            }
        }

        left =0;
        right =0;

        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='(')
                left++;
            else
            {
                right++;
            }

            if(left==right)
            {
                maxv = max(maxv, left*2);
            }
            if(left>right)
            {
                left=0;
                right =0;
            }
        }

        return maxv;
    }

};
