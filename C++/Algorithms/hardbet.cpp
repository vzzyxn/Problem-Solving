:#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++) { 
		int a,b,c;
		cin >> a >> b >> c;
		if(a < b && a < c) {
			cout << "Draw\n";
		}
		else if(b < a && b < c) {
			cout << "Bob\n";
		}
		else if(c < a && c < b) {
			cout << "Alice\n";
		}	
	}
	return 0;
}
