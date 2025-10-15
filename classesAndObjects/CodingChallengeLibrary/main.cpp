/*
Problem Statement
Create a simple Library Management System that allows you to manage books in a library. You need to create classes for Book, Library, and Member. The Library should hold a collection of Book objects, and Member should represent a user of the library with the ability to borrow and return books.

Requirements
Book Class

Attributes:
title: a string representing the title of the book.
author: a string representing the author of the book.
isBorrowed: a boolean representing if the book is currently borrowed.
Methods:
A constructor to initialize the book's title and author.
A method borrow() that marks the book as borrowed (sets isBorrowed to true) if it is not already borrowed. It should return true if the book was successfully borrowed, otherwise false.
A method returnBook() that marks the book as not borrowed (sets isBorrowed to false) if it is currently borrowed. It should return true if the book was successfully returned, otherwise false.
A method displayInfo() that prints the book's title, author, and the borrowing status.


Library Class

Attributes:
A vector of Book objects to hold the collection of books.
Methods:
A method addBook(Book newBook) to add a new book to the library.
A method findBook(string title) that returns a pointer to the Book object if found, otherwise returns nullptr.
A method listBooks() that displays all books in the library.


Member Class

Attributes:
name: a string representing the member's name.
maxBooks: an integer representing the maximum number of books a member can borrow.
A vector of pointers to the borrowed Book objects.
Methods:
A constructor to initialize the member's name and the maximum number of books.
A method borrowBook(Library &lib, string title) that allows the member to borrow a book by title from the library.
A method returnBook(Library &lib, string title) that allows the member to return a book to the library.
A method displayBorrowedBooks() that lists all the books currently borrowed by the member.
*/

#include "LMS.h"
#include <iostream>
#include <string>

using namespace std;

const string breakLine{"=========================="};

int main(){

    Library library;
    
    Book book1{"The Great Gatsby", "F. Scott Fitzgerald"};
    Book book2{"The Catcher in the Rye", "J.D Sallinger"};

    book1.displayInfo();
    cout << breakLine << endl;
    book1.borrow();

    book1.displayInfo();
    cout << breakLine << endl;

    book1.returnBook();
    book1.displayInfo();

    library.addBook(book1);
    library.addBook(book2);
    
    Book *found = library.findBook("The Great Gatsby");
    if(found != nullptr){
        cout << "Book found: " << (*found).getTitle() << endl;
    }else{
        cout << "Book is not available" << endl;
    }

    library.listBooks();
    
    return 0;
}
