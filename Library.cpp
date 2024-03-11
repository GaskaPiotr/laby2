#include "Library.h"
#include <iostream>

Library::Library() {
    // Nie trzeba nic robić
}

void Library::addBook(const Book& b) {
    books.push_back(b);
}

void Library::removeBook(const Book& b) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getISBN() == b.getISBN()) {
            books.erase(it);
            break;
        }
    }
}

void Library::borrowBook(Member& m, const std::string& isbn) {
    for (auto& book : books) {
        if (book.getISBN() == isbn && book.isAvailable()) {
            book.setAvailable(false);
            m.borrowBook();
            std::cout << "Book with ISBN " << isbn << " borrowed by " << m.getName() << std::endl;
            return;
        }
    }
    std::cout << "Book with ISBN " << isbn << " not available" << std::endl;
}

void Library::returnBook(Member& m, const std::string& isbn) {
    for (auto& book : books) {
        if (book.getISBN() == isbn && !book.isAvailable()) {
            book.setAvailable(true);
            m.returnBook();
            std::cout << "Book with ISBN " << isbn << " returned by " << m.getName() << std::endl;
            return;
        }
    }
    std::cout << "Book with ISBN " << isbn << " not borrowed by " << m.getName() << std::endl;
}

void Library::displayBooks() const {
    for (const auto& book : books) {
        book.getInfo();
    }
}
