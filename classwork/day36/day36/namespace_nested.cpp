#include <iostream>
#include <vector>
#include <string>
using namespace std;

// BookCollection class
class BookCollection {
private:
    vector<string> books;

public:
    void addBook(const string& bookName) {
        books.push_back(bookName);
        cout << "Book added: " << bookName << endl;
    }

    void listBooks() {
        cout << "\nBooks in the collection:\n";
        for (const auto& book : books) {
            cout << "- " << book << endl;
        }
    }

    bool hasBook(const string& bookName) {
        for (const auto& book : books) {
            if (book == bookName) return true;
        }
        return false;
    }
};

// Librarian class
class Librarian {
public:
    void issueBook(const string& bookName, BookCollection& collection) {
        if (collection.hasBook(bookName)) {
            cout << "\nLibrarian issued the book: " << bookName << endl;
        }
        else {
            cout << "\nBook not available: " << bookName << endl;
        }
    }
};

// Library class (uses composition)
class Library {
private:
    BookCollection books;  // has-a BookCollection
    Librarian librarian;   // has-a Librarian

public:
    void runLibrary() {
        books.addBook("C++ Primer");
        books.addBook("Clean Code");
        books.listBooks();

        librarian.issueBook("C++ Primer", books);
        librarian.issueBook("The Pragmatic Programmer", books);
    }
};

// Main function
int main() {
    Library myLibrary;
    myLibrary.runLibrary();

    return 0;
}

