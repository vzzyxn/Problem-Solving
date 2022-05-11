#include <bits/stdc++.h>

using namespace std;

int main() {
    int w;
    cin >> w;
    // Algorithm = Brute force
    // 1.find if w(weight) == even number 
    // 2.find w can be divide into to equal parts 
    //      >> if correct YES >>else NO
    if(w % 2 == 0 && w > 2) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
