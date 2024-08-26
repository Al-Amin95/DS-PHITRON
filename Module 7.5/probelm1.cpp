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

// Function to insert a node at the tail of the linked list
void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) { 
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

// Function to print the linked list
void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to count the number of nodes in the linked list
int countNodes(Node *head) {
    int count = 0;
    Node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to check if the sizes of two linked lists are the same
void checkSize(Node *head1, Node *head2) {
    int size1 = countNodes(head1);
    int size2 = countNodes(head2);

    if (size1 == size2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    cout << "\tOptions\t" << endl;
    cout << "1. Input linked list from user" << endl;
    cout << "2. Print both linked lists" << endl;
    cout << "3. Check if sizes are the same" << endl;
    cout << "4. Terminate" << endl;
    
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true) {

        int op;
        cout << "Enter your option: ";
        cin >> op;
        
        if (op == 1) {
            cout << "Input for Linked list-1 (-1 to stop): ";
            while (true) { 
                int val;
                cin >> val;
                if (val == -1) break;
                insert_at_tail(head1, tail1, val);
            }
            cout << "Input for Linked list-2 (-1 to stop): " ;
            while (true) { 
                int val;
                cin >> val;
                if (val == -1) break;
                insert_at_tail(head2, tail2, val);
            }
        } else if (op == 2) {
            cout << "Linked list-1:" << endl;
            print_linked_list(head1);
            cout << "Linked list-2:" << endl;
            print_linked_list(head2);
        } else if (op == 3) {
            checkSize(head1, head2);
        } else if (op == 4) {
            cout << "Terminated" << endl;
            break;
        } else {
            cout << "Invalid option, please try again." << endl;
        }
    }
    return 0;
}
