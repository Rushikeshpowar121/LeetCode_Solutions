class Solution {
public:
    string interpret(string command) {
        int c=0;
        string s="";
        int flag=0;

        for(int i=0;i<command.size();i++)
        {
            if(command[i]=='G')
            {
                s.push_back('G');
            }
            if(command[i]=='(')
            {
                flag=1;
            }
            if(command[i]=='a' || command[i]=='l')
            {
                flag=0;
            }
            
            if(command[i]==')')
            {
                if(flag==1)
                {
                    s.push_back('o');
                    flag=0;
                }
                else
                {
                    s.push_back('a');
                    s.push_back('l');
                }
            }
        }

        return s;
    }
};