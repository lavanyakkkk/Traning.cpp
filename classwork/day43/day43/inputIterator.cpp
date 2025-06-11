/*#include <iostream>
#include <iterator>
using namespace std;
int main() {
	cout << "enter the elements: " << endl;
	istream_iterator<int>input(cin);
	istream_iterator<int>output;

	while (input != output) {
		cout << "Reading all the elememts: " << *input << endl;
		input++;

	}
	return 0;
}
*/


/*#include <iostream>
#include <iterator>
using namespace std;
int main() {
	cout << "enter the elemnts: " << endl;
	istream_iterator<int>input(cin);
	istream_iterator<int>output;
	while (input != output) {
		cout << "reading all elements: " << *input << endl;
		input++;
	}
	return 0;
}*/

/*
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main() {
	vector<int>v = { 10,20,30 };
	ostream_iterator<int>output(cout, " ");
	copy(v.begin(), v.end(), output);
	return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main() {
	vector<int>v = { 10,203,0,40 };
	ostream_iterator<int>output(cout, " ");
	copy(v.begin(), v.end(), output);
	return 0;
}
*/

//forward list 
/*
#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;
int main() {
	forward_list<int>f = { 10,20,30,40,50 };
	forward_list<int>::iterator it;//init
	cout << "forward list: " << endl;
	for (it = f.begin();it != f.end();it++) {
		cout << *it << endl;
	}

}*/

/*#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;
int main() {
	forward_list<int>f = { 10,20,30,40 };
	forward_list<int>::iterator i;
	cout << "forward list: " << endl;
	for (i = f.begin(); i != f.end();i++) {
		cout << *i<< endl;

	}

}*/
/*
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main() {
	vector<int>v = { 10,20,30 };
	vector<int>::iterator it = v.begin();
	cout << "first element: " << *it << endl;
	cout << "addition of element: " << *it + 1 << endl;
	cout << "random element: " << *(it + 1) << endl;

	for (int i = 0;i <v.size();i++) {
		cout << v[i] << endl;
	}

}
*/

#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main() {
	map<string, int>v = { {"lavan",10},{"ajith",20} };
	for (auto it = v.begin();it!= v.end();it++) {
		cout << "first element:  " << it->first << " " << "second element : " << it->second << endl;

	}
	
	auto i = v.find("lavan");
	if (i != v.end()) {
		cout << "first key and first element: " << i->first <<i->second << endl;

	}


}





