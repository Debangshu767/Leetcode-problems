class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        
        vector<int> p;
        
        for(int i = 0;i<m;i++)
            p.push_back(i+1);
         
        for(int i =0;i<queries.size();i++)
        {
            for(int j = 0;j<p.size();j++)
            {
                if(p[j] == queries[i])
                {
                    queries[i] = j;
                    int temp = p[j];
                    p.erase(p.begin()+j);
                    p.insert(p.begin(),temp);
                    break;
                }
            }
        }
        
        return queries;
        
    }
};