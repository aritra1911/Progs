// Define a class Metropolis with the following specifications:
// Private members:
//     mCode     - integer type.
//     mName     - string type.
//     mPop      - long integer type.
//     area      - floating-point type.
//     popDense  - floating-point type.
//     calDen()  - to calculate (mPop / area) and store in popDense.
//
// Public members:
//     enter()   - allows user to enter values of mCode, mName,
//                 mPop, area, and finally call calDen() function.
//
//     viewAll() - to display all the data members and a message:
//                 "Highly Populated Area" if popDense > 12000.
////////////////////////////////////////////////////////////////////

#include <iostream.h>
#include <stdio.h>
#include <conio.h>

class Metropolis {
    private:
    int mCode;
    char mName[25];
    long mPop;
    float area, popDense;

    void calDen() { popDense = mPop/area; }

    public:
    void enter() {
        cout << "Enter city code: "; cin >> mCode;
        cout << "Enter city name: "; gets(mName);
        cout << "Enter Population: "; cin >> mPop;
        cout << "Enter Area: "; cin >> area;
    }

    void viewAll() {
        cout << "City Code : " << mCode << endl;
        cout << "City Name : " << mName << endl;
        cout << "Population : " << mPop << endl;
        cout << "Area : " << area << endl;
        cout << "Population Density : " << popDense << endl;
        if (mPop > 12000)
            cout << "Highly Populated Area" << endl;
    }
};

void main() {
    clrscr();
    Metropolis city;
    city.enter();
    cout << endl;
    city.viewAll();
    getch();
}