class Solution {
public:
    string decodeMessage(string key, string message) {
        
        map<char,char> mp;
        char set = 'a';
        
        for(int i = 0;i<key.length();i++)
        {
            if(key[i] != ' ')
            {
                if(mp.find(key[i]) == mp.end())
                {
                    mp[key[i]] = set++;
                }
            }
        }
        
        // for( auto it : mp)
        // {
        //     cout<<it.first<< ":" <<it.second<<endl;
        // }
        string ans;
        
        for(int i = 0;i<message.length();i++)
        {
            if(message[i] == ' ')
                ans+=' ';
            else
            {
                ans+= mp[message[i]];
            }
        }
        
        return ans;
        
    }
};