/*Custom String Parsers with find, substr, rfind
Useful for extracting parts of strings efficiently:


std::string s = "Name:Lavanya|Age:21|Role:Engineer";

size_t start = s.find("Age:") + 4;
size_t end = s.find('|', start);
std::string age = s.substr(start, end - start);*/

/*Using stringstream for Tokenization
Ideal for parsing structured input like CSV, logs:

#include <sstream>
std::string line = "apple,banana,cherry";
std::stringstream ss(line);
std::string item;

while (std::getline(ss, item, ',')) {
    std::cout << item << "\n";
}*/

/*Efficient String Concatenation
Use std::ostringstream for large concatenations:


#include <sstream>
std::ostringstream oss;
oss << "Hello" << " " << "World" << "!";
std::string result = oss.str();*/

/* String Algorithms (<algorithm>)
Transform case, reverse, etc.:
#include <algorithm>
std::string s = "Lavanya";
std::transform(s.begin(), s.end(), s.begin(), ::toupper);  // LAVANYA
std::reverse(s.begin(), s.end());                          // AYNAVAL
*/

/*
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cctype>

using namespace std;

int main() {
    string paragraph = "Wow! This, right here, is amazing! Let's test: regex, works?";

    // Step 1: Remove punctuation
    for (char& ch : paragraph) {
        if (!isalnum(ch) && !isspace(ch)) {
            ch = ' '; // Replace punctuation with space
        }
    }

    // Step 2: Use stringstream to extract words
    stringstream ss(paragraph);
    string word;

    while (ss >> word) {
        cout << word << "\n";
    }

    return 0;
}

*/


/*#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

int main() {
    string paragraph = "Wow! This, right here, is amazing! Let's test: regex, works?";

    // Step 1: Replace punctuation with space
    for (char& ch : paragraph) {
        if (!isalnum(ch) && !isspace(ch)) {
            ch = ' ';
        }
    }

    // Step 2: Extract words and rebuild sentence
    stringstream ss(paragraph);
    string word;
    string cleanedSentence;

    while (ss >> word) {
        cleanedSentence += word + " ";
    }

    // Optional: Remove the last space
    if (!cleanedSentence.empty()) {
        cleanedSentence.pop_back();
    }

    cout << "Cleaned Sentence:\n" << cleanedSentence << endl;

    return 0;
}
*/

/*#include <algorithm>
transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
*/

/*


erase - remove idiom(if not using loops)
Removes all punctuation directly(not covered yet, but advanced)

#include <algorithm>
paragraph.erase(remove_if(paragraph.begin(), paragraph.end(),
    [](char ch) { return !isalnum(ch) && !isspace(ch); }), paragraph.end());
    */