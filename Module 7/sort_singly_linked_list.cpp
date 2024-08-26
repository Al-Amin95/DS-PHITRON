#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_with_recursive(Node *node) {
    if (node == NULL) {
        return;
    }
    cout << node->val << " ";
    print_with_recursive(node->next); // recursion
}

void print_reverse_with_recursive(Node *node) {
    if (node == NULL) {
        return;
    }
    print_reverse_with_recursive(node->next); // recursion
    cout << node->val << " ";
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

void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void sort_ascending(Node *head) {
    if (head == NULL) return;

    for (Node *i = head; i->next != NULL; i = i->next) {
        for (Node *j = i->next; j != NULL; j = j->next) {
            if (i->val > j->val) {
                swap(i->val, j->val);
            }
        }
    }
}

void sort_descending(Node *head) {
    if (head == NULL) return;

    for (Node *i = head; i->next != NULL; i = i->next) {
        for (Node *j = i->next; j != NULL; j = j->next) {
            if (i->val < j->val) {
                swap(i->val, j->val);
            }
        }
    }
}

int main() {
    cout << "\tOption\t"<<endl;
    cout << "1. Take input from user" << endl;
    cout << "2. Print with recursive and reverse" << endl;
    cout << "3. Sort in ascending order" << endl;
    cout << "4. Sort in descending order" << endl;
    cout << "5. Terminate" << endl << endl;

    Node *head = NULL;
    Node *tail = NULL;

    while (true) {
        int op;
        cout << "Enter Your Option: ";
        cin >> op;

        if (op == 1) {
            int val;
            cout << "Enter node value (end with -1): ";
            while (true) {
                cin >> val;
                if (val == -1) {
                    break;
                }
                else{
                insert_at_tail(head, tail, val);
                }
            }
            print_linked_list(head);
        } else if (op == 2) {
            cout << "Linked List: ";
            print_with_recursive(head);
            cout << endl;
            cout << "Linked List in reverse: ";
            print_reverse_with_recursive(head);
            cout << endl;
        } else if (op == 3) {
            sort_ascending(head);
            cout << "Linked List after sorting in ascending order: ";
            print_with_recursive(head);
            cout << endl;
        } else if (op == 4) {
            sort_descending(head);
            cout << "Linked List after sorting in descending order: ";
            print_with_recursive(head);
            cout << endl;
        } else if (op == 5) {
            cout << "Terminated" << endl;
            break;
        } else {
            cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}
