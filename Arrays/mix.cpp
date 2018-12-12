// Given two arrays a and b of sizes m and n respecively.
// Write a function named mix() which will produce a third
// array named c such than the following sequence is followed:
// (1) All even numbers of a from left to right are copied into
//     c left to right.
// (2) All odd numbers of a from left to right are copied into
//     c right to left.
// (3) All even numbers of b from left to right are copied into
//     c left to right.
// (4) All odd numbers of b from left to right are copied into
//     c right to left.

#include <iostream.h>
#include <conio.h>

void mix(int a[], int b[], int c[], int m, int n) {
    int k = 0;
    for (int i=0; i<m; i++)
        if (a[i] % 2 == 0)
            c[k++] = a[i];
    for(int j=m-1; j>=0; j--)
        if (a[j] % 2 == 1)
            c[k++] = a[j];
    for (int l=0; l<n; l++)
        if (b[l] % 2 == 0)
            c[k++] = b[l];
    for(int o=n-1; o>=0; o--)
        if (b[o] % 2 == 1)
            c[k++] = b[o];
}

int main() {
    int a[50], b[50], c[100];
    int m, n;
    clrscr();
    do {
        cout << "Enter size of first array (max. 50): "; cin >> m;
    } while (m < 1 || m > 50);
    do {
        cout << "Enter size of second array (max. 50): "; cin >> n;
    } while (n < 1 || n > 50);
    cout << "Enter " << m << " element(s) for first array:\n";
    for (int i=0; i<m; i++) {
        cout << "Element [" << i << "]: ";
        cin >> a[i];
    }
    cout << "Enter " << n << " element(s) for second array:\n";
    for (int j=0; j<n; j++) {
        cout << "Element [" << j << "]: ";
        cin >> b[j];
    }
    mix(a, b, c, m, n);
    cout << "Here's a mixed array :\n";
    cout << "{" << c[0];
    for (int k=1; k<m+n; k++)
        cout << " , " << c[k];
    cout << "}\n";
    getch();
    return 0;
}