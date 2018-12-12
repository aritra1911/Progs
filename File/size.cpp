// Write a program that displays the size in bytes of a file.

#include <iostream.h>
#include <conio.h>
#include <fstream.h>

int main() {
    char name[25];
    clrscr();
    cout << "Enter filename: ";
    cin.getline(name, 25);
    ifstream fin(name, ios:: in | ios::ate);
    if (!fin)
        cout << "Unable to read " << name << endl;
    else {
        long bytes = fin.tellg();
        cout << "Size : " << bytes << " bytes\n";
    }
    getch();
    return 0;
}