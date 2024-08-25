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

void insert_at_tail(Node *&head, int val) { // Pass head by reference
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        cout << "Inserted at head: " << val << endl;
        return; // Early return to avoid the rest of the function
    }
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << "Inserted at tail: " << val << endl;
}

void print_linked_list(Node *head) {
    cout << "\n\nLinked List: ";

    int size = 0;
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        size++;
        temp = temp->next;
    }
    cout << "\nSize: " << size;
}

int main() {
    Node *head = NULL;

    int val;
    cout << "Enter Your value: ";
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        } else {
            insert_at_tail(head, val);
        }
    }
    print_linked_list(head);

    return 0;
}
