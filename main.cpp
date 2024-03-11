#include <iostream>
#include "Book.h"
#include "Member.h"
#include "Library.h"

int main() {
    Library library;

    // Dodaj kilka książek do biblioteki
    library.addBook(Book("Harry Potter", "J.K. Rowling", "1234567890"));
    library.addBook(Book("The Lord of the Rings", "J.R.R. Tolkien", "0987654321"));
    library.addBook(Book("To Kill a Mockingbird", "Harper Lee", "1111111111"));

    // Utwórz kilku czytelników
    Member member1("John");
    Member member2("Alice");

    // Przeprowadź operacje pożyczania i zwracania książek
    library.borrowBook(member1, "1234567890");
    library.borrowBook(member2, "1111111111");
    library.displayBooks();

    library.returnBook(member1, "1234567890");
    library.displayBooks();

    return 0;
}
