#include "Member.h"

Member::Member(std::string _name) : name(_name), booksBorrowed(0) {}

void Member::borrowBook() {
    booksBorrowed++;
}

void Member::returnBook() {
    if (booksBorrowed > 0)
        booksBorrowed--;
}

std::string Member::getName() const {
    return name;
}

void Member::setName(const std::string& _name) {
    name = _name;
}

unsigned int Member::getBooksBorrowed() const {
    return booksBorrowed;
}

void Member::setBooksBorrowed(unsigned int _booksBorrowed) {
    booksBorrowed = _booksBorrowed;
}
