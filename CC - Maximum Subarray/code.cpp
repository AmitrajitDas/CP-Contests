#include<bits/stdc++.h>
using namespace std;
// #define int long long
class Solution {
private:
	static int kadane(vector<int> &arr) {
		int localMax = INT_MIN, globalMax = INT_MIN;

		for (int i = 0; i < arr.size(); i++) {
			localMax = max(arr[i], localMax + arr[i]);
			globalMax = max(localMax, globalMax);
		}

		return globalMax;
	}

public:
	static void solve() {
		int n, m;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		cin >> m;
		vector<int> b(m);
		vector<int> pos;
		for (int i = 0; i < m; i++) {
			cin >> b[i];
			if (b[i] > 0) pos.push_back(b[i]);
		}

		// adding +ve elements to the rear side of A
		vector<int> temp1 = a;
		for (int i = 0; i < pos.size(); i++) {
			temp1.push_back(pos[i]);
		}

		// adding +ve elements to the front side of A
		vector<int> temp2 = pos;
		for (int i = 0; i < n; i++) {
			temp2.push_back(a[i]);
		}

		int left = kadane(temp1);
		int right = kadane(temp2);

		cout << max(left, right) << endl;
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
		Solution::solve();
	}

	return 0;
}
