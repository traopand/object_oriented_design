/*
Contributors: Tara Rao-Pandit, Devanshi Paliwal
Filename: library.cpp
*/

#include "library.hpp"
#include "book.hpp"
#include <iostream>

Library::Library() {}

Library::Library(vector<Book> new_books) {
    // insert contents of new_books into my_books
    for (int i = 0; i < my_books.size(); i++) {
        my_books[i] = new_books[i];
    }
}

bool Library::insert(string new_title, string new_authors, string new_dop) {
    // PURPOSE: Check for duplicates
    Book insert_book(new_title, new_authors, new_dop);
    return insert(insert_book);
}


bool Library::insert(Book new_book) {
    bool exists = false;
    // iterate through the vector to see if that book already exists
    for (int i = 0; i < my_books.size(); ++i) {
    if (my_books[i].get_title() == new_book.get_title() &&
        my_books[i].get_authors() == new_book.get_authors() &&
        my_books[i].get_dop() == new_book.get_dop()) {
    // if it does not exist, insert it into the vector
        exists = true;
        }
        }
        if (exists == false) {
            my_books.push_back(new_book);
            return true;
    }
        else return false;
}
                  
bool Library::remove(string remove_title, string remove_authors, string remove_dop) {
    return remove(Book(remove_title, remove_authors, remove_dop));
    }
                  
bool Library::remove(Book new_book) {
   bool exist = false;
    int index = 0;
       // iterate through the vector to see if that book already exists
       for (int i = 0; i < my_books.size(); i++) {
       if (my_books[i].get_title() == new_book.get_title() &&
           my_books[i].get_authors() == new_book.get_authors() &&
           my_books[i].get_dop() == new_book.get_dop()) {
       // if equal book found, set exists to true
           exist = true;
           index = i;
           }
           }
        // if book exists, remove book
           if (exist == true) {
               swap(my_books[index], my_books[my_books.size() - 1]);
               my_books.pop_back();
       }
    if (exist == true) {
        return true;
    }
           else return false;
   }

void Library::print() {
    Book b;
    // iterate through elements of the library
    for (int i = 0; i < my_books.size(); i++) {
        b = my_books[i];
        cout << "Book " << i << ": ";
        b.print(); // call print function
    }
    }

