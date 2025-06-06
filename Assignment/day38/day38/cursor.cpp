#include <iostream>
#include <list>
#include <string>
using namespace std;

class Cursor {
	list<string>textBuffer;
	list<string>::iterator cursor;
public:
	Cursor() {
		cursor = textBuffer.begin();

	}

	void insertLine(const string& line) {
		cursor = textBuffer.insert(cursor, line);
		cursor++;
	}

	void movingUp() {
		if (cursor != textBuffer.begin()) {
			cursor--;
		}
		else {
			cout << "they are at top" << endl;
		}
	}

	void movingDown() {
		if (cursor != textBuffer.end()) {
			cursor++;
		}
		else {
			cout << "they are at down" << endl;
		}
	}

	void display() const {
		cout << "text buffer" << endl;
		for (const string& line : textBuffer) {
			cout << line << endl;
		}
	}
};

int main() {
	Cursor c;
	c.insertLine("Hello");
	c.insertLine("world");
	c.movingUp();
	c.insertLine("beautiful");
	c.movingDown();
	c.insertLine("people");
	c.display();
	return 0;

}