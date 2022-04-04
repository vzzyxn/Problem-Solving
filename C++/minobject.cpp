// min of two objects using >>  friend function 
#include<iostream>
using namespace std;
class num {
	int a;
	   public:
	        void read () {
	        	cin >> a;
	        }
	        friend void min(num , num);
};
void min (num obj1 , num obj2) {
	if(obj1.a < obj2.a) {
		cout << "Min : " << obj1.a;
	}
	else {
		cout << "Min : " << obj2.a;
	}
}
	int main() {
		num obj1,obj2;
		obj1.read();
		obj2.read();
		min(obj1,obj2);
	return 0;
}