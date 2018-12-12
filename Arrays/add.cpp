// Write a function to add and subtract two matrices of order
// m x n and implement it in a C++ program.

#include <iostream.h>
#include <conio.h>

void add(int a[][12], int b[][12], int c[][12],
         int m, int n, int op) {
    for(int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            c[i][j] = a[i][j] + op*b[i][j];
}

int main() {
    int a[12][12], b[12][12], c[12][12];
    int m, n, i, j;
    clrscr();
    do {
        cout << "Enter no. of rows (max. 12): "; cin >> m;
    } while (m < 1 || m > 12);
    do {
        cout << "Enter no. of columns (max. 12): "; cin >> n;
    } while (n < 1 || n > 12);
    cout << "Enter " << m << " x " << n << " elements of first matrix:\n";
    for(i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
        cout << endl;
    }
    cout << "Enter " << m << " x " << n << " elements of second matrix:\n";
    for(i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
        cout << endl;
    }
    add(a, b, c, m, n, 1);
    cout << "Here goes addition of the two matrices :\n";
    for(i=0; i<m; i++) {
        cout << "[ " << c[i][0];
        for (j=1; j<n; j++)
            cout << " " << c[i][j];
        cout << " ]\n";
    }
    add(a, b, c, m, n, -1);
    cout << "Here goes subtraction of second matrix from first :\n";
    for(i=0; i<m; i++) {
        cout << "[ " << c[i][0];
        for (j=1; j<n; j++)
            cout << " " << c[i][j];
        cout << " ]\n";
    }
    getch();
    return 0;
}