#include "LMS.h"
#include <iostream>
#include <string>

Book::Book(std::string input_title, std::string input_author){
    title = input_title;
    author = input_author;
}

void Book::displayInfo() const{
    std::cout << "Title: " << title << " Author: " << author << std::endl;
}

std::string const Book::getTitle(){
    return title;
}

bool Book::borrow(){
    isBorrowed = true;
    return true;
}

bool Book::returnBook(){
    isBorrowed = false;
    return false;
}

void Library::addBook(Book newBook){
    bookCollection.push_back(newBook);
    std::cout << "Book added" << std::endl;
}

void const Library::listBooks(){
    if(bookCollection.empty()){
        std::cout << "No books in the Library" << std::endl;
    }else{
        for(const auto &book : bookCollection){
            book.displayInfo();
        }
    }
}

Book *Library::findBook(const std::string &title){
    for(auto &book : bookCollection){
        if(book.getTitle() == title){
            return &book;
        }
    }
    return nullptr;
}