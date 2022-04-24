#include<iostream>
using namespace std;
int main() {
    // Problem-set : Way too long words [codeforces = #71A] 
    int n,flag=0;
    string s;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> s;
        int len_s = s.size();
        if(len_s <= 10) {
            cout << s << endl;
        }
        else {
            flag = len_s - 2;
            cout << s[0] << flag << s[len_s - 1] << endl;
        }
    }
    return 0;
}
