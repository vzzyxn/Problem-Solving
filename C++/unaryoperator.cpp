// operator overloading using unary(-) 
#include<iostream>
using namespace std;
class num {
    int a,b;
        public:
            num(int x, int y) {
                a = x;
                b = y;
            }
            void operator-() { // operator function defined
                a = -a; // if we need an postive operator(+) .. we must use'an + sign
                b = -b;
            }
            void display() {
                cout << "\nA = " << a;
                cout << "\nB = " << b;
            }
};
int main() {
    num s(10,15);
        cout << "\n\tBefore using operator";
            s.display();
                 cout << "\n\tAfter using operator";
                 -s;
            s.display();
    return 0;
}
