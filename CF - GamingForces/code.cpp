#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	static void helper() {
		int mons, health;
		cin >> mons;
		int count = 0;
		for(int i = 0; i < mons; i++) {
			cin >> health;
			if(health == 1) count++;
		}
		int res;
		if(count % 2) res = count/2 + mons - count + 1;
		else res = count/2 + mons - count;
		cout << res << endl;
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
