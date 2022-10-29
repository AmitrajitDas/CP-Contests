class Solution {
public:
    string oddString(vector<string>& words) {
        int n = words.size();
        map<vector<int>, int> mp;
        for(int i = 0; i < n; i++) {
            vector<int> subDiff(n - 1);
            for(int j = 0; j < words[i].length() - 1; j++) {
                int d = words[i][j+1] - words[i][j];
                subDiff.push_back(d);
            }
            mp[subDiff]++;
        }
        
        vector<int> targetDiff;
        for(auto it : mp) {
            if(it.second == 1) targetDiff = it.first;
        }
        
        for(int i = 0; i < n; i++) {
            vector<int> subDiff(n - 1);
            for(int j = 0; j < words[i].length() - 1; j++) {
                int d = words[i][j+1] - words[i][j];
                subDiff.push_back(d);
            }
            if(subDiff == targetDiff) return words[i];
        }
        
        return words[0];
    }
};
