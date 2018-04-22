// Define a class Restra with the following specifications:
// Private members:
//     foodCode     - integer type.
//     food         - string type.
//     ftype        - string type.
//     sticker      - string type.
//     getSticker() - to assign the following values for sticker as
//                    per the given ftype:
//                    ftype                 sticker
//                    -----                 -------
//                    "vegeteranian"        "green"
//                    "contains egg"        "yellow"
//                    "non-vegeteranian"    "red"
//
// Public members:
//     getFood()    - to allow user to enter values for foodCode, food,
//                    ftype, and call function getSticker().
//
//     showFood()   - to view the content of all the data members.
///////////////////////////////////////////////////////////////////////

#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

class Restra {
    private:
    int foodCode;
    char food[25], ftype[20], sticker[10];

    void getSticker() {
        if (strcmp(ftype, "vegeteranian") == 0)
            strcpy(sticker, "green");
        else if (strcmp(ftype, "contains egg") == 0)
            strcpy(sticker, "yellow");
        else
            strcpy(sticker, "red"); // Non-vegeteranian
    }

    public:
    void getFood() {
        cout << "Enter food code: "; cin >> foodCode;
        cout << "Enter food: "; gets(food);
        cout << "Enter food type: "; gets(ftype);
        getSticker();
    }

    void showFood() {
        cout << "Food Code : " << foodCode << endl;
        cout << "Food : " << food << endl;
        cout << "Food Type : " << ftype << endl;
        cout << "Sticker : " << sticker << endl;
    }
};

void main() {
    clrscr();
    Restra grub;
    grub.getFood();
    cout << endl;
    grub.showFood();
    getch();
}