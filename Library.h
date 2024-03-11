#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "Member.h"
#include <vector>

class Library {
private:
    std::vector<Book> books;

public:
    Library();

    void addBook(const Book& b);
    void removeBook(const Book& b);
    void borrowBook(Member& m, const std::string& isbn);
    void returnBook(Member& m, const std::string& isbn);
    void displayBooks() const;
};

#endif // LIBRARY_H
