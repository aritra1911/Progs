// Write a program to implement operations on a Linked Queue

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
void insert(Node*);
void display(Node*);
void del();

int main() {
    front = rear = NULL;
    int inf; char ch = 'y'; int c;
    while (tolower(ch) == 'y') {
        system("cls");
        cout << "\nQueue :\n";
        display(front);
        cout << endl;
        cout << "1 >> Insert\n";
        cout << "2 >> Delete\n";
        cout << "Enter choice: "; cin >> c;

        switch (c) {
            case 1:
                cout << "\nEnter information for new node: ";
                cin >> inf;
                newptr = create_new_node(inf);
                if (newptr == NULL) {
                    cout << "\nCannot create new node. Aborting...\n";
                    system("pause"); exit(1);
                } insert(newptr);
                cout << "\nQueue :\n";
                display(front); break;

            case 2:
                int choice;
                cout << "Want to delete node? [Y|n]: "; choice = getche();
                if (tolower(choice) == 'y') del();
                cout << "\nQueue :\n";
                display(front); break;

            default:
                cout << "\nInvalid choice!\n";
        }
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

void insert(Node* np) {
    if (front == NULL)
        front = rear = np;
    else {
        rear->next = np;
        rear = np;
    }
}

void del() {
    if (front == NULL) cout << "UNDERFLOW!!!\n";
    else {
        ptr = front;
        front = ptr->next;
        delete ptr;
    }
}

void display(Node* np) {
    while (np != NULL) {
        cout << np->info << " -> ";
        np = np->next;
    } cout << "!!!\n";
}
