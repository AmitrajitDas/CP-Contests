#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        static int captureForts(vector<int>& forts) {
            int res = 0;
            int n = forts.size();

            for(int i = 0; i < n; i++) {
                int count = 0;
                if(forts[i] == 1) {
                    int j = i + 1;
                    for(j; j < n && forts[j] == 0; j++)
                        count++;
                    if(j < n && forts[j] == -1) res = max(count, res); 
                }
            }

            for(int i = n - 1; i >= 0; i--) {
                int count = 0;
                int j = i - 1;
                if(forts[i] == 1) {
                    for(j; j >= 0 && forts[j] == 0; j--)
                        count++;
                    if(j >= 0 && forts[j] == -1) res = max(count, res);
                }
                
            }
            return res;
    }

    int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

        vector<int> forts = {1,0,0,-1,0,0,0,0,1};
        int res = Solution::captureForts(forts);
        cout << res;
        return 0;
    }
};
