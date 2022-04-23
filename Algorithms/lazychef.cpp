#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        int x,m,d,x_m,x_d;
        cin >> x >> m >> d;
        // x = time to finish work, m = time chef taken to finish work, d = delay time 
        x_m = x * m;
        x_d = x + d;
        if(x_m < x_d) {
            cout << x_m;
        }
        else if (x_m > x_d) {
            cout << x_d;
        }
        else if(x_m == x_d) {
            cout << x_m;
        }
    }
    return 0;
}

