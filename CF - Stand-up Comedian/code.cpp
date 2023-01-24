#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	static void helper() {
		int arr[4];
		for(int i=0;i<4;i++) cin>>arr[i];
		int check=arr[3]+abs(arr[2]-arr[1])-arr[0];
		if(!arr[0]) cout<<1<<"\n";
		else if(check<=0) cout<<arr[0]+2* min(arr[1],arr[2])+abs(arr[1]-arr[2])+arr[3]<<"\n";
		else cout<<2*arr[0]+2*min(arr[1],arr[2])+1<<"\n";
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
