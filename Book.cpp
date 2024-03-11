#include "Book.h"
#include <iostream>

Book::Book(std::string _title, std::string _author, std::string _isbn)
    : title(_title), author(_author), isbn(_isbn), available(true) {}

Book::~Book() {
    std::cout << "niszczę książkę" << std::endl;
}

void Book::getInfo() const {
    std::cout << "Title: " << title << ", Author: " << author << ", ISBN: " << isbn << ", Available: " << (available ? "Yes" : "No") << std::endl;
}

std::string Book::getTitle() const {
    return title;
}

void Book::setTitle(const std::string& _title) {
    title = _title;
}

std::string Book::getAuthor() const {
    return author;
}

void Book::setAuthor(const std::string& _author) {
    author = _author;
}

std::string Book::getISBN() const {
    return isbn;
}

void Book::setISBN(const std::string& _isbn) {
    isbn = _isbn;
}

bool Book::isAvailable() const {
    return available;
}

void Book::setAvailable(bool _available) {
    available = _available;
}
