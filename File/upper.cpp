// Write a function in C++ to count the number of uppercase
// characters in a given file. Say a file named "ARTICLE.TXT"
// lists the following:
//
// I fear thee, ancient Mariner!
// I fear thy skinny hand
// And thou art long, and lank, and brown,
// As is the ribbed sea sand.
//
// For this file, it should return 5. Write a program
// implementing this function.

#include <iostream.h>
#include <fstream.h>
#include <ctype.h>
#include <conio.h>

int uppers(char filename[]) {
    int c = 0;
    char character;
    ifstream fin(filename);
    if (!fin) {
        cout << "Unable to read " << filename << endl;
        return -1;
    }
    while (!fin.eof()) {
        fin >> character;
        if (isupper(character)) c++;
    }
    fin.close();
    return c;
}

int main() {
    char filename[25];
    clrscr();
    cout << "Enter a filename: ";
    cin.getline(filename, 25);
    int ups = uppers(filename);
    if (ups != -1)
        cout << "There are " << ups << " uppercase characters in "
             << filename << endl;
    getch();
    return 0;
}