#include<iostream>
#include <iostream>

using namespace std;

int main() {
    struct Book {
        string name;
        string author;
        string publisher;
        int pages;
    };

    Book book;
    book.name = "The war and the peace";
    book.author = "L.N. Tolstoj";
    book.publisher = "Piter";
    book.pages = 500;

    cout << "Name       : " << book.name << endl;
    cout << "Author     : " << book.author << endl;
    cout << "Izdatelstvo: " << book.publisher << endl;
    cout << "Pages      : " << book.pages << endl;

    return 0;
}