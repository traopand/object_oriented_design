/*
Contributors: Tara Rao-Pandit, Devanshi Paliwal
Filename: book.hpp
*/

#ifndef book_hpp
#define book_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

// PURPOSE: Models a book instance with corresponding attributes
class Book {
    string book_title, book_authors, date_of_publication;
public:
    Book();
    // PURPOSE: Parametric constructor with all attributes specified
    Book(string new_title, string new_authors, string new_dop);
    
    // PURPOSE: Parametric constructor with the title and authors provided
    Book(string new_title, string new_authors);
    
    // PURPOSE: Parametric constructor with only the title provided
    Book(string new_title);

    // PURPOSE: Service function that outputs all attribute values
    void print();

    // PURPOSE: getters
    string get_title()
    {
        return book_title;
    }
    string get_authors()
    {
        return book_authors;
    }
    string get_dop()
    {
        return date_of_publication;
    }
    
    bool check_if_same(Book& target);
    
};
#endif
