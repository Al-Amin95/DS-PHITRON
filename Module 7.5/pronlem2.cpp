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

void insertAtTail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void printLinkedList(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int sizeCount(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp != NULL) { 
        temp = temp->next;
        count++;
    }
    return count;
}

void printRecursionReverse(Node *node){
    if(node == NULL) {
        return;
    }
    printRecursionReverse(node->next);
    cout << node->val << " ";
}

int main() {
    cout << "\tOption" << endl;
    cout << "1. Input linked list from user" << endl;
    cout << "2. Print linked list" << endl;
    cout << "3. Print linked list in reverse using recursion" << endl;
    cout << "4. Terminate" << endl;

    Node *head = NULL;
    Node *tail = NULL;

    while (true) {
        int op;
        cout << "Enter Option: ";
        cin >> op;
        if (op == 1) {
            cout << "Enter linked list values (-1 to stop): ";
            while (true) {
                int val;
                cin >> val;
                if (val == -1) {
                    break;
                } else {
                    insertAtTail(head, tail, val);
                }
            }
            cout << "Linked List: ";
            printLinkedList(head);
            cout << "Linked List size: " << sizeCount(head) << endl;

        } else if (op == 2) {
            cout << "Linked List: ";
            printLinkedList(head);
            cout << endl;
        } else if (op == 3) {
            cout << "Linked List in Reverse: ";
            printRecursionReverse(head);
            cout << endl;
        } else if (op == 4) {
            cout << "Terminated" << endl;
            break;
        } else {
            cout << "Invalid option, try again." << endl;
        }
    }

    return 0;
}
