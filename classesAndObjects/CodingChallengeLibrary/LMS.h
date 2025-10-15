#ifndef _LMS_H_
#define _LMS_H_
#include <string>
#include <vector> 

class Book{
    private:
        std::string title;
        std::string author;
        bool isBorrowed {false};
    
    public:
        Book(std::string input_title, std::string input_author);
        bool borrow();
        bool returnBook();
        void displayInfo() const;
        std::string const getTitle();
};

class Library{   
    private:
        std::vector<Book> bookCollection{};

    public:
        Book *findBook(const std::string& title);
        void addBook(Book newBook);
        void const listBooks();
};

class Member{


};

#endif