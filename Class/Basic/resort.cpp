// Define a class Resort with the following specifications:
// Private members:
//     rno        - to store room number.
//     name       - to store customer name.
//     charges    - to store per day charges.
//     days       - number of days to stay.
//     compute()  - a function to calculate and return the amount as
//                  (days * charges), but if this amount is greater than 11000, then
//                  amount to be computed as (1.02 * days * charges).
//
// Public members:
//     getInfo()  - to allow user to enter content of rno, name, charges and days.
//
//     dispInfo() - to display rno, name, charges, days and amount.
//                  (amount to be displayed by calling compute() function.)
/////////////////////////////////////////////////////////////////////////////////////

#include <iostream.h>
#include <stdio.h>
#include <conio.h>

class Resort {
    private:
    int rno, days;
    char name[25];
    float charges;

    float compute() {
        float val = days * charges;
        if (val > 11000) return 1.02 * val;
        return val;
    }

    public:
    void getInfo() {
        cout << "Enter room number: "; cin >> rno;
        cout << "Enter name: "; gets(name);
        cout << "Enter number of days: "; cin >> days;
        cout << "Enter charge per day: "; cin >> charges;
    }

    void dispInfo() {
        cout << "Room number : " << rno << endl;
        cout << "Name : " << name << endl;
        cout << "Charges : " << charges << endl;
        cout << "Days : " << days << endl;
        cout << "Amount : " << compute() << endl;
    }
};

void main() {
    clrscr();
    Resort california;
    california.getInfo();
    cout << endl;
    california.dispInfo();
    getch();
}