#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	static void helper() {
		int n;
		cin >> n;
		string s;
		cin >> s;

		int i = 0, j = n - 1;
		list<char> res{};

		while (true) {
			if (s[i] == '0') res.push_front(s[i]);
			else res.push_back(s[i]);
			i++;
			if (i > j) break;

			if (s[j] == '1') res.push_front(s[j]);
			else res.push_back(s[j]);
			j--;
			if (i > j) break;
		}
		for (auto it = res.begin(); it != res.end(); ++it) {
			cout << *it;
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
