#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; // no:of inputs 
    cin >> t;
    for(int i = 1; i <= t; i++) {
        int x,m,d,x_m,x_d;
        cin >> x >> m >> d;
        // x = time to finish work, m = time chef taken to finish work, d = max time 
        ////         Basic Algorithm
         // Create two variables, 1(x_m)::to multiply x * y, 2(x_d)::to add x + y
        //  if x_m < x_d >> then print x_m,
       //   else if x_m > x_d >> then print x_d,
      //    and if its both are of same value print either x_m nor x_d
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
