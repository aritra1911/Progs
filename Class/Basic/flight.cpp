// Define a class 'Flight' with the following specifications:
// Private members:
//     flightNo    - integer type.
//     distance    - floating-point type.
//     fuel        - floating-point type.
//     destination - string type.
//     calFuel()   - a function to calculate fuel as following:
//                   distance                  fuel
//                   --------                  ----
//                   <= 1000.0                 500.0
//                   > 1000.0 but <= 2000.0    1100.0
//                   > 2000.0                  2200.0
//
// Public members:
//     feedInfo()  - to allow user to enter the values of flightNo,
//                   distance, destination, and finally call calFuel().
//
//     showInfo()  - to view the content of all the data members.
///////////////////////////////////////////////////////////////////////

#include <iostream.h>
#include <stdio.h>
#include <conio.h>

class Flight {
    private:
    int flightNo;
    float distance, fuel;
    char destination[25];

    void calFuel() {
        if (distance <= 1000.0) 
            fuel = 500.0;
        else if (distance > 1000.0 && distance < 2000.0)
            fuel = 1100.0;
        else
            fuel = 2200.0;
    }

    public:
    void feedInfo() {
        cout << "Enter flight number: "; cin >> flightNo;
        cout << "Enter distance: "; cin >> distance;
        cout << "Enter destination: "; gets(destination);
        calFuel();
    }

    void showInfo() {
        cout << "Flight number : " << flightNo << endl;
        cout << "Distance : " << distance << endl;
        cout << "Fuel : " << fuel << endl;
        cout << "Destination : " << destination << endl;
    }
};

void main() {
    clrscr();
    Flight in;
    in.feedInfo();
    cout << endl;
    in.showInfo();
    getch();
}