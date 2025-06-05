#include <iostream>
#include <list>
using namespace std;

class listnum {
	list<int>lst;
public:
	void insert(int val) {
		lst.push_back(val);
	}

	void insertfront(int val) {
		lst.push_front(val);

	}

	void remove(int val) {
		lst.remove(val);
	}

	void display() {
		for (int i : lst) {
			cout << i << endl;
		}
	}

	void sizelst() {
		int size;
		cout << lst.size() << endl;
	}

};

int main() {
	listnum l;
	l.insert(10);
	l.insert(20);
	l.insertfront(30);
	l.insert(40);
	l.insert(10);
	l.remove(10);

	cout << "display the elements: " << endl;
	l.display();
	cout << "size of given list: " << endl;
	l.sizelst();

	return 0;

}