class Solution {
public:
    
//     vector<int> gen(int numrows, int i, vector<int> &temp)
//     {
//         if(i>numrows+1)
//             return temp;
        
//         vector<int> row(i);

//             row[0] = 1;
//             row[i-1] = 1;
            
//             for(int j = 1;j<i-1;j++)
//             {
//                 row[j] = temp[j-1] + temp[j];
//             }
//        return gen(numrows,i+1,row);
        
//     }
    
    vector<int> getRow(int rowIndex) {
        
       //   vector<int> temp;
       //  temp.push_back(1);
       // return gen(rowIndex,2,temp);
        rowIndex+=1;
        vector<int> res;
        long long ans = 1;
        res.push_back(ans);
        for(int i = 1;i<rowIndex;i++)
        {
            ans *= (rowIndex-i);
            ans /= i;
            res.push_back(ans);
            
        }
        
        return res;
        
        
        
    }
};