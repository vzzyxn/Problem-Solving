#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    // (x = points earned, y = points needed, z = games left)
    // Algorithm 
    // (points needed + 2 * games left) 
    for(int i = 1; i <= t; i++) {
        int x, y, z,ans;
        cin >> x >> y >> z; 
        ans = (x + 2 * z);
        if(ans >= y) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    return 0;
}

