#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	static void helper() {
		int n;
		cin >> n;

		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		vector<int> res(n);
		res[0] = arr[0];

		for (int i = 1; i < n; i++) {
			int prefSum  = res[i - 1] + arr[i];
			int diff = res[i - 1] - arr[i];
			if (prefSum > 0 &&  diff > 0 && prefSum != diff) {
				cout << -1 << endl;
				return;
			} else {
				res[i] = max(prefSum, diff);
			}
		}

		for (int i = 0; i < n; i++) {
			cout << res[i] << " ";
		}

		cout << endl;
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
