/*
#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {
	list<string>v = { "Ravi", "Nina", "Amit" };
	for (auto it = v.rbegin();it != v.rend();it++) {
		cout << *it << endl;

	}
	return 0;

}
*/

/*
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	map<string, int>v = { {"lanya",55},{"Aji",40},{"man",45} };
	for (auto it = v.begin();it != v.end();it++) {
		if (it->second <= 50) {
			it->second += 5;
		}


	}
	for (auto it = v.begin();it != v.end();it++) {
		cout << "first element: " << it->first << " " << "second element: " << it->second << endl;
	}
	return 0;
}
*/

/*
#include <iostream>
#include <map>
#include <list>
#include <set>
using namespace std;
int main() {
	set<int>evenNum;
	list<int>v = { 1,2,3,4,5,6,7,8,9,10 };
	for (auto const it : v) {
		if (it % 2 == 0) {
			evenNum.insert(it);
		}
	}

	cout << "even number are: " << endl;
	for (set<int>::const_iterator i = evenNum.begin();i!= evenNum.end();i++) {
		cout << *i << endl;

	}
*/

/*#include <iostream>
#include <set>
#include <list>
using namespace std;
int main() {
	list<int>v = { 1,2,3,4,5,6,7,8,9,10 };
	set<int>num;
	for (auto const it : v) {
		num.insert(it);
	}
	cout << "list out all the elements: " << endl;
	for (set<int>::const_iterator i = num.begin();i != num.end();i++) {
		cout << *i << endl;
	}

}*/

#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
	vector<string>word = { "apple","banana","apple","orange","grapes","grapes" };
	set<string>unique_words;
	for (auto const it : word) {
		unique_words.insert(it);
	}
	cout << "unique elements are : " << endl;
	for (set<string>::const_iterator i = unique_words.begin();i != unique_words.end();i++) {
		cout << *i << endl;
	}
}