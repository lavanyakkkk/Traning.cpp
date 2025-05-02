/*
* You are given an array A of size N containing positive integers. For each element in the array, count the number of elements to its right that are smaller than the current element.

Your task is to compute and print a list of counts corresponding to each element.
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of elements: ";
    cin >> N;
    int A[100];
    int counts[100] = { 0 };
    cout << "Enter " << N << " positive integers: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

   
    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = i + 1; j < N; j++) {
            if (A[j] < A[i]) {
                count++;
            }
        }
        counts[i] = count;
    }

    
    cout << "Counts of smaller elements:\n";
    for (int i = 0; i < N; i++) {
        cout << counts[i];
        if (i != N - 1) cout << " ";
    }
    cout << endl;

    return 0;
}