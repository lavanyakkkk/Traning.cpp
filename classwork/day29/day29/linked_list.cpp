#include <iostream>

using namespace std;

struct node {
	int v;
	struct node* ptr;
};

int main()
{
	//Step 1: allocationg mem for different nodes
	struct node n1, n2, n3,n4,n5,n6;
	cout << sizeof(n1) << "\tAddress of n1: " << (unsigned long int) & n1 << endl;
	cout << sizeof(n2) << "\tAddress of n2: " << (unsigned long int) & n2 << endl;
	cout << sizeof(n3) << "\tAddress of n3: " << (unsigned long int) & n3 << endl;
	cout << sizeof(n3) << "\tAddress of n4: " << (unsigned long int) & n4<< endl;
	cout << sizeof(n3) << "\tAddress of n5: " << (unsigned long int) & n5 << endl;
	cout << sizeof(n3) << "\tAddress of n6: " << (unsigned long int) & n6 << endl;





	//Step 2: initialize value to all nodes
	n1.v = 10;
	n1.ptr = NULL;

	n2.v = 20;
	n2.ptr = NULL;

	n3.v = 30;
	n3.ptr = NULL;

	n4.v = 40;
	n4.ptr = NULL;

	n5.v = 50;
	n5.ptr = NULL;

	n6.v = 60;
	n6.ptr = NULL;

	cout << "n1 value: " << n1.v << "\tptr: " << (unsigned long int)n1.ptr << endl;
	cout << "n2 value: " << n2.v << "\tptr: " << (unsigned long int)n2.ptr << endl;
	cout << "n3 value: " << n3.v << "\tptr: " << (unsigned long int)n3.ptr << endl;
	cout << "n4 value: " << n4.v << "\tptr: " << (unsigned long int)n4.ptr << endl;
	cout << "n5 value: " << n5.v << "\tptr: " << (unsigned long int)n5.ptr << endl;
	cout << "n6 value: " << n6.v << "\tptr: " << (unsigned long int)n6.ptr << endl;



	//Step 3: make a relationship
	n1.ptr = &n2;
	n2.ptr = &n3;

	cout << "After Making the relationship" << endl;
	cout << "n1 value: " << n1.v << "\tptr: " << (unsigned long int)n1.ptr << endl;
	cout << "n2 value: " << n2.v << "\tptr: " << (unsigned long int)n2.ptr << endl;
	cout << "n3 value: " << n3.v << "\tptr: " << (unsigned long int)n3.ptr << endl;

	//Step 4: traversing in the list
	//struct node* head = &n1; // n1 => Base address of the list

	/*
	cout << n1.v << endl;//10
	cout << head->v << endl; 
	cout << "Address of head->ptr: " << (unsigned long int)head->ptr << endl;

	//head = &n2;
	head = head->ptr;
	cout << n2.v<<endl;//20
	cout << head->v<<endl;

	//head = &n3;
	head = head->ptr;
	cout << head->v << endl;
	*/

	struct  node* n4;

	head = &n1;
	


	while (head != NULL)
	{
		cout << head->v << "->";
		head = head->ptr;
	}
	cout << "NULL" << endl;
	return 0;
}