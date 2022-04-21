#include<bits/stdc++.h>
using namespace std;
void update(int *a,int *b) {
    int sum = *a + *b;
    *a = sum;
    *b = diff;
}
int main() {
    int a = 4,b = 5;
    int *pa = &a, *pb = &b;
    update(pa,pb);
    cout << a << " "<< b;

    return 0;
}
