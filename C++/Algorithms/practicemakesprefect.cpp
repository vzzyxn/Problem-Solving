#include <iostream>
using namespace std;

int main() {
	int p1,p2,p3,p4;
	cin >> p1 >> p2 >> p3 >> p4;
	int arr [] = {p1,p2,p3,p4};
	int total = 0;
	int length = sizeof(arr) / sizeof(arr[0]);
	for(int i = 0; i <= length - 1; i++) {
		if(arr[i] >= 10) {
			total += 1;
		}
	}
	cout << total;
	return 0;
}
		
		
