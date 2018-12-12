// Write a declaration for a class Person which has the following:
// - data members name, phone
// - set and get functions for every data member
// - a display function
// - a destructor
//
// For the Person class above, write each of the constructors, the assignment
// operator, and the getName member function.
//
// Given the Person class above, write the declaration for a class Spouse that
// inherits from Person and does the following:
// - has an extra data member spouseName
// - redefines the display member function
//
// For the spouse class above, write each of the constructors and the display
// member function.

#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

class Person {
private:
    char name[32], phone[16];

public:
    Person(char arg_name[], char arg_phone[]) {
        strcpy(name, arg_name);
        strcpy(phone, arg_phone);
    }

    Person(const Person &p) {
        strcpy(name, p.name);
        strcpy(phone, p.phone);
    }

    void setName(char n[]) { strcpy(name, n); }
    void getName(char n[]) { strcpy(n, name); }
    void setPhone(char p[]) { strcpy(phone, p); }
    void getPhone(char p[]) { strcpy(p, phone); }

    void display() {
        cout << "Name : " << name << endl;
        cout << "Phone : " << phone << endl;
    }

    ~Person() {
        getch();
    }
};

class Spouse : public Person {
private:
    char spouseName[32];

public:
    Spouse(char name[], char phone[], char spouse_name[]) : Person(name, phone)
    {
        strcpy(spouseName, spouse_name);
    }

    Spouse(const Spouse &s) : Person(s) {
        strcpy(spouseName, s.spouseName);
    }

    void display() {
        char name[32], phone[16];
        getName(name);
        getPhone(phone);
        cout << "Name : " << name << endl;
        cout << "Phone : " << phone << endl;
        cout << "Spouse Name : " << spouseName << endl;
    }
};

int main() {
    clrscr();
    char name[32], phone[16], spouse_name[32];
    cout << "Enter name: "; gets(name);
    cout << "Enter phone: "; gets(phone);
    cout << "Enter spouse name: "; gets(spouse_name);
    Spouse person(name, phone, spouse_name);
    cout << endl;
    person.display();
    return 0;
}
