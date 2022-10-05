#include<bits/stdc++.h>
using namespace std;
int arr[100001];

class Solution {
public:
	static void helper() {
		int n;
		cin >> n;
		bool flag = false;
		int idx;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		for (int i = 1; i < n; i++) {
			if (arr[i] > arr[0]) {
				flag = true;
				idx = i;
				break;
			}
		}

		if (!flag) {
			puts("-1");
			return;
		}
		cout << idx << endl;
		for (int i = 0; i < idx; i++)
			cout << arr[i] << ' ';
		cout << endl << n - idx << endl;
		for (int i = idx; i < n; i++)
			cout << arr[i] << ' ';
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
