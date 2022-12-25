class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        map<string, vector<int>> mp;
        int n = words.size();
        for(int i = 0; i < n; i++) {
            mp[words[i]].push_back(i);
        }
        if(mp.count(target) == 0) return -1;
        int res = INT_MAX;
        
        for(int i = 0; i < mp[target].size(); i++) {
            if(mp[target][i] > startIndex) {
                int r = mp[target][i] - startIndex;
                int l = n - r;
                res = min(res, min(l, r));
            } else {
                int r = startIndex - mp[target][i];
                int l = n - r;
                res = min(res, min(l, r));
            }
        }
        
        return res;
    }
};
