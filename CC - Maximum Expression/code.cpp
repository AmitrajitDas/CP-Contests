#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	static void helper() {
		int n;
		cin >> n;
		string str;
		cin >> str;

		vector<int> nums;
		int add = 0, sub = 0;

		for (auto it : str) {
			if (it != '+' && it != '-') nums.push_back(it);
			else if (it == '+') add++;
			else sub++;
		}

		sort(nums.begin(), nums.end());

		string res = "";

		for (int i = 0; i < nums.size(); i++) {
			if (sub) {
				res += static_cast<char>(nums[i]);
				res += '-';
				sub--;
			} else if (add) {
				res += static_cast<char>(nums[i]);
				res += '+';
				add--;
			} else {
				res += static_cast<char>(nums[i]);
			}
		}

		for (int i = res.length() - 1; i >= 0; i--) {
			cout << res[i];
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
