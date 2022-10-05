#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
	static bool isVowel(char &x) {
		if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') return true;
		else return false;
	}

public:
	static void helper() {
		string s;
		cin >> s;
		int len = 0;

		for (int i = 0; i < s.size() - 2; i++) {
			if (isVowel(s[i])) {
				len++;
				if (len > 2) {
					cout << "Happy" << endl;
					return;
				}

			} else len = 0;

		}

		cout << "Sad" << endl;
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
