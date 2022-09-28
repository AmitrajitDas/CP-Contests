#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
	static void helper() {
		int n;
		cin >> n;
		string str;
 
		int res = 0;
 
		while (n--) {
			cin >> str;
			if (str[1] == '+') res++;
			else res--;
		}
 
		cout << res << endl;
	}
};
 
 
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	Solution::helper();
 
	// int t;
	// cin >> t;
 
	// while (t--) {
	// 	Solution::helper();
	// }
 
	return 0;
}
