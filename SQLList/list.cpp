// Write a program to implement Insertion at begining, Insertion at end &
// Deletion at begining in a linked list containing an integer information

#include <iostream.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <process.h>

struct Node {
    int info;
    Node* next;
} *front, *newptr, *ptr, *rear;

Node* create_new_node(int);
void insert_beg(Node*);
void insert_end(Node*);
void display(Node*);
void del_node();

int main() {
    front = rear = NULL;
    int inf; char ch = 'y'; int c;
    while (tolower(ch) == 'y') {
        system("cls");
        cout << "\nList :\n";
        display(front);
        cout << "1 >> Insert Node at Begining\n";
        cout << "2 >> Insert Node at End\n";
        cout << "3 >> Delete Node at Begining\n";
        cout << "Enter choice: "; cin >> c;
        if (c == 1 || c == 2) {
            cout << "\nEnter information for new node: ";
            cin >> inf;
            cout << "\nCreating new node. Press enter to continue...";
            system("pause");
            newptr = create_new_node(inf);
            if (newptr != NULL) {
                cout << "\n\nNew node Created. Press enter to continue...";
                system("pause");
            } else {
                cout << "\nCannot create new node. Aborting...\n";
                system("pause"); exit(1);
            }
            cout << "\n\nNow inserting node at the end of list\n";
            cout << "Press enter to continue...";
            system("pause");
            if (c == 1) insert_beg(newptr);
            else insert_end(newptr);
            cout << "\nList :\n";
            display(front);
        } else if (c == 3) {
            int choice;
            cout << "Want to delete first node? [Y|n]: "; choice = getche();
            if (tolower(choice) == 'y') del_node();
            cout << "\nList :\n";
            display(front);
        } else
            cout << "\nInvalid choice!\n";
        cout << "\nWould you like to continue? [Y|n]: ";
        ch = getche();
    }
    return 0;
}

Node* create_new_node(int n) {
    ptr = new Node;
    ptr->info = n;
    ptr->next = NULL;
    return ptr;
}

void insert_beg(Node* np) {
    if (front == NULL)
        front = rear = np;
    else {
        np->next = front;
        front = np;
    }
}

void insert_end(Node* np) {
    if (front == NULL)
        front = rear = np;
    else {
        rear->next = np;
        rear = np;
    }
}

void display(Node* np) {
    while (np != NULL) {
        cout << np->info << " -> ";
        np = np->next;
    } cout << "!!!\n";
}

void del_node() {
    if (front == NULL) cout << "\nUNDERFLOW!!!\n";
    else {
        ptr = front;
        front = front->next;
        delete ptr;
    }
}
