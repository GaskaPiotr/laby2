#ifndef MEMBER_H
#define MEMBER_H

#include <string>

class Member {
private:
    std::string name;
    unsigned int booksBorrowed;

public:
    Member(std::string _name);

    void borrowBook();
    void returnBook();

    // Getters and setters
    std::string getName() const;
    void setName(const std::string& _name);
    unsigned int getBooksBorrowed() const;
    void setBooksBorrowed(unsigned int _booksBorrowed);
};

#endif // MEMBER_H
