#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
	static void helper() {
		string str;
		cin >> str;
 
		if (str.size() > 10) {
			cout << str[0] << str.size() - 2 << str[str.size() - 1] << endl;
		} else cout << str << endl;
	}
};
 
 
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	int t;
	cin >> t;
 
	while (t--) {
		Solution::helper();
	}
 
	return 0;
}
