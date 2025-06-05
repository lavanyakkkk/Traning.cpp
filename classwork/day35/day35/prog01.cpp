//#include <iostream>  //copy constructor-to copy one object's content to another
//using namespace std;  //shallow,deep copy constructor  ////fobj from where i want to copy

#include <iostream>

using namespace std;


class myArray {
	int* data;

public:

	myArray(int val)
	{
		data = new int(val);

	}

	myArray(const myArray& fObj)
	{
		cout << "Copy Cstr got called" << endl;
		data = new int(*fObj.data);

	}
	void setVal(int val) { *data = val; }
	void display()
	{
		cout << "Address of data: " << data;
		cout << "\t" << *data << endl;

	}
	~myArray()
	{
		delete data;
	}

};


int main()
{
	myArray a1(10);
	a1.display();
	myArray a2 = a1;
	a2.display();
	a2.setVal(20);

	a1.display();
	a2.display();



	return 0;
}