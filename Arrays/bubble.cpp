// Write a program in C++ to implement the technique
// of the bubble sort algorithm to sort an array of
// 10 elements in ascending order

#include <iostream.h>
#include <conio.h>

void bubble_sort(int a[], int n) {
    for (int i=0; i<n; i++)
        for (int j=0; j<(n-1)-i; j++)
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
}

int main() {
    int a[10], i;
    clrscr();
    cout << "Enter 10 elements:\n";
    for (i=0; i<10; i++) {
        cout << "Element [" << i << "]: ";
        cin >> a[i];
    }
    bubble_sort(a, 10);
    cout << "Here goes the sorted array :\n";
    for (i=0; i<10; i++)
        cout << a[i] << endl;
    getch();
    return 0;
}