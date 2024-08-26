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

void insert_at_head(Node *&head, int val){ 
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val){  // Pass tail by reference
    Node *newNode = new Node(val);
    if (head == NULL) { 
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node *head) {
    Node *temp = head;
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int option;
    
    while (true) {
        cout << "Enter option (1 to input values, 2 to terminate): ";
        cin >> option;

        if (option == 1) {
            int val;
            cout << "Enter Your value (end with -1): ";
            while (true) {
                cin >> val;
                if (val == -1) { 
                    break;
                } else {
                    insert_at_tail(head, tail, val);
                }
            }
            print_linked_list(head);
        } 
        else if (option == 2) {
            cout << "Terminated" << endl;
            break;
        } 
        else {
            cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}