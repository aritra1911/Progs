// Write an algorithm to search a given element in an array using
// the binary search technique. Implement this algorithm in C++

#include <iostream.h>
#include <conio.h>

int binary_search(int a[], int elem, int n) {
    int l = 0; // lower limit
    int u = n - 1; // upper limit
    int m; // middle element

    while (l < u) {
        m = (l + u) / 2; // detect middle element
        if (a[m] < elem)
            l = m;
        else if (a[m] > elem)
            u = m;
        else
            return m;
    }
    return -1; 
}

int main() {
    int a[10], r, e;
    clrscr();
    cout << "Enter 10 elements in ascending order:\n";
    for (int i=0; i<10; i++) {
        cout << "Enter element [" << i << "]: ";
        cin >> a[i];
    }
    cout << "\nEnter element you wish to search: ";
    cin >> e;
    r = binary_search(a, e, 10);
    if (r != -1)
        cout << "Element exists at index " << r << endl;
    else
        cout << "Element not found\n" << endl;
    getch();
    return 0;
}