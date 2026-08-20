//Create a LibraryBook class that hides the availability status and provides issueBook() and returnBook() functions.
#include <iostream>
using namespace std;
class LibraryBook {
private:
    bool isAvailable;
public:
    LibraryBook() {
        isAvailable = true;
    }
    void issueBook() {
        if (isAvailable) {
            isAvailable = false;
        } else {
            cout << "Book is not available for issue." << endl;
        }
    }
    void returnBook() {
        isAvailable = true;
    }
};
int main(){
    LibraryBook book;
    book.issueBook(); // Issue the book
    book.issueBook(); // Try to issue again
    book.returnBook(); // Return the book
    book.issueBook(); // Issue again after return
    return 0;
}