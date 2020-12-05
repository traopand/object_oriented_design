/*
Contributors: Tara Rao-Pandit, Devanshi Paliwal
Filename: main.cpp

I hereby declare that this code, submitted for credit for the course SYDE 121, is a product of our own efforts.
This coded solution has not been plagiarized from other sources and has not been knowingly plagiarized by others.

Project: working with Structures and Classes
Purpose: Output Classes, member variables, remove duplicates from a class instance and insert new instances into the class.
Due Date: Friday, November 20, 2020
 */

/*
This program was tested by ensuring it printed the Book class and all its attributes, and also the library class with all its attributes. The
program sufficiently outputted n/a when required, and the correct author and publication dates. The insert function correctly inserted the book
attributes when there were no duplicates in the library, and rejected the insertion when there were duplicates. The removal function also adequetly
removes a set of attributes, as shown in the output when the console prints before and after removal.
*/

#include "main.hpp"
#include <iostream>
#include <vector>
#include <cassert>
#include "book.hpp"
#include "library.hpp"

using namespace std;


void test_constructors() {
    cout << "Testing Book Constructor: " << endl;
    Book my_book1; // Testing default constructor
    Book my_book2("Harry Potter", "JK Rowling", "June 1997");
    Book my_book3("The Fault in Our Stars", "John Green", "n/a");
    Book my_book4("The Hunger Games", "n/a", "n/a");
    
    my_book2.print(); // Testing book constructor
    cout << endl;
    Library my_library;
        // test scenario
        my_library.insert(my_book1);
        my_library.insert(my_book2);
        my_library.insert(my_book3);
        my_library.insert(my_book4);
    cout << "Testing Library Constructor: " << endl;
    my_library.print(); // Testing library constructor
    cout << endl;
    cout << endl;
}


void test_book_insertion1() {
    cout << "Testing Book Insertion with Book Instance: " << endl;
    Book my_book1("Harry Potter", "JK Rowling", "June 1997"); // first book
    Book my_book2("Harry Potter", "JK Rowling", "June 1997"); // duplicate book
    Book my_book3("The Fault in Our Stars", "John Green", "January 2012"); // similar but not duplicate
    Library instances_library;
    
    instances_library.insert(my_book1);
    instances_library.insert(my_book2);
    instances_library.insert(my_book3);
    instances_library.print();
    // Expected output: Should only print the first and third books, since the second is a duplicate
    cout << endl;
    
    cout << "Testing Book Insertion with Strings: " << endl;
    Library string_library;
     string_library.insert("Harry Potter", "JK Rowling", "June 1997");
        string_library.insert("Harry Potter", "JK Rowling", "June 1997");
        string_library.insert("The Fault in Our Stars", "John Green", "January 2012");
        string_library.print();
    // Expected output: Should only print the first and third books, since the second is a duplicate (same as previous)
    cout << endl;
}

void test_book_removal1() {
    cout << "Testing Book Removal with Instances: " << endl;
    // setup (insertion into instances library)
    Book my_book1("Harry Potter", "JK Rowling", "June 1997");
    Book my_book2("The Hunger Games", "Suzanne Collins", "September 2008");
    Book my_book3("The Fault in Our Stars", "John Green", "January 2012");
    Library instances_library;
        instances_library.insert(my_book1);
        instances_library.insert(my_book2);
        instances_library.insert(my_book3);
    cout << "Before Removal: " << endl;
    instances_library.print();
    // Expected output: Should print all three books
    cout << endl;
    
    // removal
     instances_library.remove(my_book3);
     instances_library.remove(my_book1);
    cout << "After Removal: " << endl;
     instances_library.print();
    // Expected output: Should only print my_book2
    cout << endl;

    cout << "Testing Book Removal with Strings: " << endl;
    Library string_library;
        string_library.insert("Harry Potter", "JK Rowling", "June 1997");
        string_library.insert("The Hunger Games", "Suzanne Collins", "September 2008");
        string_library.insert("The Fault in Our Stars", "John Green", "January 2012");
    
        cout << "Before Removal: " << endl;
        string_library.print();
        // Expected output: Should print all three books
        cout << endl;
    
        string_library.remove("Harry Potter", "JK Rowling", "June 1997");
        string_library.remove("The Hunger Games", "Suzanne Collins", "September 2008");
        cout << "After Removal: " << endl;
        string_library.print();
        // Expected output: Should only print my_book3
        cout << endl;

}

void execute_tests() {
    test_constructors();
    test_book_insertion1();
    test_book_removal1();
}

int main() {
    execute_tests();
}
