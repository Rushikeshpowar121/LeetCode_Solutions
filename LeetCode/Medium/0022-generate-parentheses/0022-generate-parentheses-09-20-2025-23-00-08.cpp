class Solution {
public:
    void backtrack(int open, int close, int n, vector<string> &res, string &str)
    {
        if(open == close && open==n)
        {
            res.push_back(str);
            return;
        }

        if(open<n)
        {
            str+='(';
            backtrack(open+1, close, n, res, str);
            str.pop_back();
        }

        if(close<open)
        {
            str+=')';
            backtrack(open,close+1,n,res,str);
            str.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        string str;
        vector<string> res;
        backtrack(0,0,n,res,str);
        return res;
    }


};