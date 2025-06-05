#include <iostream>
using namespace std;
template <class T>
void swap_my(T& a, T& b) {
	T t = a;
	a = b;
	b = t;
}

template
<class T1,class T2>
float add(T1 a, T2 b) {
	return a + b;
}


int main() {
	int a = 10, b = 20;
	float x = 33.3, y = 34.5;
	char d = 'a', d1 = 'A';

	cout << "a" << a << "\tb" << b<<endl;
	swap_my(a, b);
	cout << "a" << a << "\tb" << b << endl;

	cout << "x" << x << "\ty" << y << endl;
	swap_my(x, y);
	cout << "x" << x << "\ty" << y << endl;
	

	cout << "d " << d << "\td1 " << d1 << endl;
	swap_my(d, d1);
	cout << "d " << d << "\td1 " << d1 << endl;

	cout << add(10, 12.2) << endl;


	

}
