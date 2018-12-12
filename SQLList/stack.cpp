// Write a program to implement operations on a Linked Stack

#include <iostream.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <process.h>

struct Node {
    int info;
    Node* next;
} *top, *newptr, *ptr;

Node* create_new_node(int);
void push(Node*);
int pop();
void display(Node*);

int main() {
    int inf; char ch = 'y';
    top = NULL; int c;
    while (tolower(ch) == 'y') {
        system("cls");
        cout << "\nStack :\n";
        display(top);
        cout << endl;
        cout << "1 >> Push\n";
        cout << "2 >> Pop\n";
        cout << "Enter choice: "; cin >> c;
        switch (c) {
            case 1:
                cout << "Enter information: "; cin >> inf;
                newptr = create_new_node(inf);
                if (newptr == NULL) {
                    cout << "Cannot create new node! Aborting...\n";
                    system("pause"); exit(1);
                }
                push(newptr);
                cout << "\nStack :\n";
                display(top); break;

            case 2:
                int choice;
                cout << "Want to pop an element? [Y|n]: "; choice = getche();
                if (tolower(choice) == 'y') {
                    int ele = pop();
                    if (ele != -1)
                        cout << "\nPopped : " << ele;
                }
                cout << "\nStack :\n";
                display(top); break;

            default:
                cout << "\nInvalid Choice!\n";
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

void push(Node* np) {
    if (top == NULL) top = np;
    else {
        np->next = top;
        top = np;
    }
}

int pop() {
    int inf = -1;
    if (top == NULL) cout << "\nUNDERFLOW!!!\n";
    else {
        ptr = top;
        top = top->next;
        inf = ptr->info;
        delete ptr;
    } return inf;
}

void display(Node* np) {
    while (np != NULL) {
        cout << np->info << " -> ";
        np = np->next;
    } cout << "!!!\n";
}
