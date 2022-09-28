#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
	static void helper() {
		int n;
		cin >> n;
 
		if (n > 2 && n % 2 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
};
 
 
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


  Solution::helper();

  return 0;
}
