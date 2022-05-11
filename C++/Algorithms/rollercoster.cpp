#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++) {
		int x, h; // x = height of chef's son, h = minimum height required 
		cin >> x >> h;
		if(x >= h) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
	return 0;
}
