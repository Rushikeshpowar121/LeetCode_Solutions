class Solution {
public:
    string interpret(string command) {
       stack<char> s;
       string str="";

       for(int i=0;i<=command.size()-1;i++)
       {
        if(command[i]=='(')
            s.push(command[i]);

        else if(command[i]==')' && command[i-1]=='l')
        {
            // str+="al";
            s.pop();
        }
        else if(command[i]==')' && s.top()=='(')
        {
            str.push_back('o');
            s.pop();
        }
        
        else
            str+=command[i];
            
       }

       return str;
    }
};