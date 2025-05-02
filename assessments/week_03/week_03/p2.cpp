/*
Problem Statement 2
You are given a sorted array A of size N containing integers. Every element in the array appears exactly twice, except for one element that appears only once. Your task is to find and print that unique element.
*/
#include <iostream>
using namespace std;
int func(int n, int a[]) {
    int find_unique = 0;
    for (int i = 0; i < n; i += 2) {
        if (i + 1 >= n || a[i] != a[i + 1]) {
            find_unique = a[i];
            break;
        }
    }
    return find_unique;
}
int main() {
    int n;
    cout << "enter number: " << endl;
    cin >> n;
    int a[10000];
    cout << "enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int unique = func(n, a);
    cout << unique << endl;
    return 0;
}

/*
enter element: 9
enter number: 1 1 0 0 -3 4 4 5 5 
output: -3


*/

















































































































