#include<iostream>
using namespace std;
int main()
{
    // Algorithm for factorial .. f! = num*num*num ... 
    // Example: f! = 3; So, 3 = 1*2*3 = 6
    int factorial = 1;
    int num;
    cin >> num;
    for(int i = 1; i <= num; i++) {
        factorial *= i;
    }
    cout << factorial;
    return 0;
}
