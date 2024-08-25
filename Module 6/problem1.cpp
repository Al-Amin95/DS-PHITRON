/*
1. Create a Singly Linked List (Take input from user)
2. Count the Size of the list
3. Display List
*/

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, int val) {
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        cout << "Insert at head: " << val << endl << endl;
    } else {
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        cout << "Insert at tail: " << val << endl << endl;
    }
}

void print_list(Node *head) {
    Node *temp = head;
    int size=0;
    while (temp != NULL) {
        cout << temp->val << " ";
        size++;
        temp = temp->next;
    }
    cout <<endl<< "Size of the List: " << size << endl << endl;
}


int main() {
    cout << "Option-1: Input from user: ";
    Node *head = NULL;
    int val;

    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_tail(head, val);
    }

    cout << "Linked List: ";
    print_list(head);
    cout << endl;

    return 0;
}
