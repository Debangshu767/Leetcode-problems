class Solution {
public:
    string interpret(string command) {
        
        string ans;
        int size = command.length();
        for(int i = 0;i< size;i++)
        {
            if(command[i] == 'G')
                ans+='G';
            else if(command[i] == '(')
                if(command[i+1] == ')')
                    ans+='o';
                else 
                    ans+="al";
        }
        
        return ans;
        
    }
};