#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello";
    std::string str2 = "World";

    // Concatenation
    std::string str3 = str1 + " " + str2;
    std::cout << "Concatenated: " << str3 <<"\n";

    // Append
    str3.append("!");
    std::cout << "Appended: " << str3 << "\n";

    // Access
    std::cout << "First character: " << str3[0] << "\n";

    // Length
    std::cout << "Length: " << str3.length() << "\n";

    // Substring
    std::string sub = str3.substr(6, 4);
    std::cout << "Substring: " << sub << "\n";

    // Find
    size_t pos = str3.find("lavanya");
    if (pos != std::string::npos)
        std::cout << "'World' found at position: " << pos << "\n";
    else
        std::cout << "'lavanya' it is not found. " <<"\n";

    // Replace
    str3.replace(6, 5, "Universe");
    std::cout << "After replace: " << str3 << "\n";

    // Compare
    if (str1 == "Hello")
        std::cout << "str1 equals 'Hello'\n";

    // Clear
    str1.clear();
    std::cout << "str1 after clear (length): " << str1.length() << "\n";

    std::string s1 = "this is cpp programming class, class is very helpful";

    int pos1 = s1.find("class");
    std::cout << pos1 << std::endl;


    int pos2 = s1.rfind("class");
    std::cout << pos2 << std::endl;//insert(pos, str)

    s1.insert(5,"are");
    std::cout << s1 << std::endl;
    
    int n=1;
    s1.resize(n);
    std::cout << s1 << std::endl;



    return 0;
}