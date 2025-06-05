#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

void batchWord(vector<string>& words) {
    for (string& word : words) {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }

    sort(words.begin(), words.end());


    auto it = unique(words.begin(), words.end());
    words.erase(it, words.end());
}

int main() {
    vector<string> words = { "Apple", "banana", "apple", "Orange", "BANANA", "grape" };

    batchWord(words);

    for (const string& word : words) {
        cout << "[" << word << "]" << endl;
    }




    return 0;
}
