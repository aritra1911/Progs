// Define a class Outfit:
// Private members:
//   oCode   - string
//   oType   - string
//   oSize   - integer
//   oFabric - string
//   oPrice  - floating-point
//
//   initPrice() - a function that calculates and assigns the values
//                 of oPrice as follows:
//                 >> for the value of oFabric as "denim"
//                    oType            oPrice
//                    -----            ------
//                    "trouser"        1500.0
//                    "jacket"         2500.0
//                 >> for oFabric other than "denim", the above mentioned
//                    oPrice gets reduced to 25%
//
// Public memebers
//   constructor - to assign initial values for oCode, oType & oFabric with
//                 the words "Not Initialized", and oSize and oPrice with 0
//
//   input()     - to input the values for oCode, oType, oSize and oFabric
//                 and invoke initPrice()
//
//   display()  - display content of all the data memebers
//
//   destructor  - display "Travel planned successfully."

#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

class Outfit {
private:
    char oCode[15], oType[20], oFabric[25];
    int oSize;
    float oPrice;

    void initPrice() {
        if (strcmpi(oType, "trouser") == 0)
            oPrice = 1500.0;
        else oPrice = 2500.0;

        if (strcmpi(oFabric, "denim") != 0)
            oPrice = 0.25 * oPrice;
    }

public:
    Outfit() {
        strcpy(oCode, "Not Initialized");
        strcpy(oType, "Not Initialized");
        strcpy(oFabric, "Not Initialized");
        oSize = 0; oPrice = 0.0;
    }

    void input(){
        cout << "Enter outfit code: "; gets(oCode);
        cout << "Enter type: "; gets(oType);
        cout << "Enter fabric: "; gets(oFabric);
        cout << "Enter size: "; cin >> oSize;
        initPrice();
    }

    void display() {
        cout << "Outfit code : " << oCode << endl;
        cout << "Type        : " << oType << endl;
        cout << "Fabric      : " << oFabric << endl;
        cout << "Size        : " << oSize << endl;
        cout << "Price       : " << oPrice << endl;
    }

    ~Outfit() {
        cout << "Purchase successful!";
        getch();
    }
};

void main() {
    clrscr();
    Outfit o;
    o.input();
    cout << endl;
    o.display();
    cout << endl;
    getch();
}
