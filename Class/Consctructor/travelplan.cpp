// Define a class TravelPlan:
// Private members:
//   planCode       - long integer
//   place          - string
//   noOfTravellers - integer
//   noOfBuses      - integer
//
// Public memebers
//   constructor - to initialize planCode as 1001, place
//                 as "Agra", noOfTravellers as 5, noOfBuses as 1
//
//   newPlan()   - to enter planCode, place and noOfTravellers and
//                 assign the value of noOfBuses as per the following:
//                 noOfTravellers                noOfBuses
//                 --------------                ---------
//                 less than 20                  1
//                 >= 20 and < 40                2
//                 >= 40                         3
//
//   showPlan()  - display content of all the data memebers
//
//   destructor  - display "Travel planned successfully."

#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

class TravelPlan {
private:
    long planCode;
    char place[20];
    int noOfTravellers, noOfBuses;

public:
    TravelPlan() {
        planCode = 1001;
        strcpy(place, "Agra");
        noOfTravellers = 5;
        noOfBuses = 1;
    }

    void newPlan() {
        cout << "Enter plan code: "; cin >> planCode;
        cout << "Enter place: "; gets(place);
        cout << "Enter no. of travellers: "; cin >> noOfTravellers;

        int n = noOfTravellers;
        if (n < 20) noOfBuses = 1;
        else if (n >= 20 && n <= 40) noOfBuses = 2;
        else noOfBuses = 3;
    }

    void showPlan() {
        cout << "Plan code         : " << planCode << endl;
        cout << "Place             : " << place << endl;
        cout << "No. of travellers : " << noOfTravellers << endl;
        cout << "No. of buses      : " << noOfBuses << endl;
    }

    ~TravelPlan() {
        cout << "Travel planned successfully.";
        getch();
    }
};

void main() {
    clrscr();
    TravelPlan tp;
    tp.newPlan();
    cout << endl;
    tp.showPlan();
    getch();
}
