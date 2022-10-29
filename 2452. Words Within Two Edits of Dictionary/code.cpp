class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int n = queries[0].length();
        vector<string> res;
        for(int i = 0; i < queries.size(); i++) {
            for(int j = 0; j < dictionary.size(); j++) {
                int count = 0;
                for(int k = 0; k < n; k++) {
                    if(queries[i][k] != dictionary[j][k]) count++;
                    if(count > 2) break;
                }
                if(count <= 2) {
                    res.push_back(queries[i]);
                    break;
                } 
            }
        }
        
        return res;
    }
};
