#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool available;

public:
    Book(std::string _title, std::string _author, std::string _isbn);

    ~Book();

    void getInfo() const;

    // Getters and setters
    std::string getTitle() const;
    void setTitle(const std::string& _title);
    std::string getAuthor() const;
    void setAuthor(const std::string& _author);
    std::string getISBN() const;
    void setISBN(const std::string& _isbn);
    bool isAvailable() const;
    void setAvailable(bool _available);
};

#endif // BOOK_H
