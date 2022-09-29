#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	static void helper() {
		int n, m;
		cin >> n >> m;

		cout << n / 2 + 1 << " " << m / 2 + 1 << endl;
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
