/*
Contributors: Tara Rao-Pandit, Devanshi Paliwal
Filename: book.cpp
*/

#include "book.hpp"
#include <iostream>
#include <string>

using namespace std;

Book::Book() :
book_title("n/a"), book_authors("n/a"), date_of_publication("n/a") {}

Book::Book(string new_title, string new_authors, string new_dop) :
book_title(new_title),
book_authors(new_authors),
date_of_publication(new_dop) {}

// check if books are equal
bool Book::check_if_same(Book& target)
    {
        if (target.get_title() == book_title && target.get_authors() == book_authors && target.get_dop() == date_of_publication)
            return true;
        else
            return false;
    }

// print book info
void Book::print () {
cout << book_title << " - "
    << book_authors << " - "
    << date_of_publication << endl;
}
