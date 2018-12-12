// Imagine a publishing company that markets both book and audiocassette
// versions of its works. Create a class publication that stores the title (a
// string) and price (type float) of a publiation. From this class derive two
// classes: book, whivh adds a page count (type int), and tape, which adds a
// playing time in minutes (type float). Each of these three classes should a
// getdata() function to get its data from the user at the keyboard, and a
// putdata() function to display its data.
//
// Write a main() program to test the book and tape classes by creating
// instances of them, asking the user to fill in data with getdata(), and then
// displaying the data with putdata().

#include <iostream.h>
#include <stdio.h>
#include <conio.h>

class publication {
private:
    char title[80];
    float price;

public:
    void getdata() {
        cout << "Enter title: ";
        gets(title);
        cout << "Enter price: ";
        cin >> price;
    }

    void putdata() {
        cout << "Title : " << title << endl;
        cout << "Price : " << price << endl;
    }
};

class book : public publication {
private:
    int page_count;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter page count: ";
        cin >> page_count;
    }

    void putdata() {
        publication::putdata();
        cout << "Page Count : " << page_count << endl;
    }
};

class tape : public publication {
private:
    float playing_time;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter playing time: ";
        cin >> playing_time;
    }

    void putdata() {
        publication::putdata();
        cout << "Playing Time : " << playing_time << endl;
    }
};

int main() {
    clrscr();

    book book1;
    tape tape1;

    book1.getdata();
    cout << endl;
    tape1.getdata();
    cout << endl;

    cout << endl;

    book1.putdata();
    cout << endl;
    tape1.putdata();
    cout << endl;

    getch();
    return 0;
}