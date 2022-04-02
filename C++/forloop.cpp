#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    string s[] = {"one","two","three","four","five","six","seven","eight","nine"};
    if(b > 9) {
    for(int i = a; i <= 9; i++) {
        cout << s[i-1] << "\n";
    }
    }
    else {
        for(int i = a; i <= b; i++) {
            cout <<s[i-1] << "\n";
        }
    }
    // odd or  even
    if(b>9) {
    for(int i = 10; i <= b; i++) {
        if(i%2== 0)
            cout << "even" << "\n";
        else
            cout << "odd" << "\n";
    }
    }
    return 0;
}
