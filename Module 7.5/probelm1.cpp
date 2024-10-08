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

int main() {
    cout << "\tOption" << endl;
    cout << "1. Input linked list from user" << endl;
    cout << "2. Print linked list" << endl;
    cout << "3. Check their size" << endl;
    cout << "4. Terminate" << endl;

    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;

    while (true) {
        int op;
        cout << "Enter Option: ";
        cin >> op;
        if (op == 1) {
            cout << "Enter linked list-1 values (-1 to stop): ";
            while (true) {
                int val;
                cin >> val;
                if (val == -1) {
                    break;
                } else {
                    insertAtTail(head1, tail1, val);
                }
            }
            cout << "Linked List-1: ";
            printLinkedList(head1);
            cout << "Linked List-1 size: " << sizeCount(head1) << endl;

            cout << "Enter linked list-2 values (-1 to stop): ";
            while (true) {
                int val;
                cin >> val;
                if (val == -1) {
                    break;
                } else {
                    insertAtTail(head2, tail2, val);
                }
            }
            cout << "Linked List-2: ";
            printLinkedList(head2);
            cout << "Linked List-2 size: " << sizeCount(head2) << endl;
            cout<<endl<<endl;

        } else if (op == 2) {
            cout << "Linked List-1: ";
            printLinkedList(head1);
            cout << "Linked List-2: ";
            printLinkedList(head2);
            cout<<endl<<endl;

        } else if (op == 3) {
            int size1 = sizeCount(head1);
            int size2 = sizeCount(head2);
            if (size1 == size2) {
                cout << "Both linked lists have the same size." << endl;
            } else {
                cout << "The linked lists have different sizes." << endl;
            }
            cout<<endl<<endl;

        } else if (op == 4) {
            cout<<"Terminated"<<endl;
            break;
        } else {
            cout << "Invalid option, try again." << endl;
        }
    }
    return 0;
}
