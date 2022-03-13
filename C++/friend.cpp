#include<iostream>
using namespace std;
class two;
class one {
    int a;
        public:
    int read ()
    {
        cin >> a;
    }
    int display()
    {
        cout << a;
    }
    friend swap(one &, two &);
};

class two {
    int a;
        public:
    int read()
    {
        cin >> a;
    }
    int display()
    {
        cout << a;
    }
    friend swap(one &obj1, two &obj2);
};
int swap(one &obj1, two &obj2)
{
    int temp;
    temp = obj1.a;
    obj1.a = obj2.a;
    obj2.a = temp;
}

int main() 
{
    one obj1;
    two obj2;
    cout << "\t\tSwap the values of two classes objects:";
  
    cout << "\n\nEnter value of obj1: ";
    obj1.read();
    cout << "\n\nEnter value of obj2: ";
    obj2.read();

    cout << "\n\nValue before swap: ";
    cout << "\nValue of obj1: ";
    obj1.display();
    cout << "\nValue of obj2: ";
    obj2.display();
    swap(obj1,obj2);

    cout << "\n\nValue after swap:";
    cout << "\nValue of obj1: ";
    obj1.display();
    cout << "\nValue of obj2: ";
    obj2.display();

    return 0;
}
