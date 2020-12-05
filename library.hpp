/*
Contributors: Tara Rao-Pandit, Devanshi Paliwal
Filename: library.hpp
*/

#ifndef library_hpp
#define library_hpp

#include <stdio.h>
#include <vector>
#include "book.hpp"
#include <iostream>
#include <string>

using namespace std;

class Library {
    vector<Book> my_books;
public:
    
    void insert_book (Book& book_info) {
        my_books.push_back(book_info);
    }
    
    Library();
    Library(vector<Book> new_books);
    
    // PURPOSE: Insert a book from the library based on specified values
    bool insert(string, string, string);
    bool insert(Book);

    // PURPOSE: Removes a book from the library based on specified values
    bool remove(string, string, string);
    bool remove(Book);

    //PURPOSE: Outputs all the books in the Book collection
    void print();

};
#endif
