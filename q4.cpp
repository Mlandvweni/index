#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    static int bookCount;

public:
    // Constructor with user input
    Book() {
        cout << "Enter the book title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter the author's name: ";
        getline(cin, author);
        bookCount++;
    }

    void displayBookDetails() const {
        cout << "Title: " << title << ", Author: " << author << endl;
    }

    static int getBookCount() {
        return bookCount;
    }
};

// Initialize static member variable
int Book::bookCount = 0;

int main() {
    int numOfBooks;
    cout << "How many books do you want to enter? ";
    cin >> numOfBooks;

    Book* books = new Book[numOfBooks];

    for (int i = 0; i < numOfBooks; i++) {
        cout << "\nDetails of Book " << i + 1 << ":" << endl;
        books[i].displayBookDetails();
    }

    cout << "\nTotal number of books: " << Book::getBookCount() << endl;

    delete[] books; // Free allocated memory
    return 0;
}

