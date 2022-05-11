#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        // n = total questions, x = questions correct, p = marks needed to pass the exam
        // algorithm = correct question - incorrect question 
        //      if(algorithm >= passing mark) >> then..."PASS" >> else .... "FAIL" 
        int n,x,p,mark;
        string answer;
        cin >> n >> x >> p;
        mark = (x * 3) - (n-x);
        answer = (mark >= p) ? "PASS\n" : "FAIL\n";
        cout << answer;
    }
    return 0;
}
