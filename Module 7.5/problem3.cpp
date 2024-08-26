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

void printMiddleElement(Node *head){ 
    if(head == NULL){ 
        cout << "This is an empty list" << endl;
        return;
    }
    Node *p1 = head;
    Node *p2 = head;
    // Traverse: p2: two steps, and p1: one step at a time
    while(p2 != NULL && p2->next != NULL){ 
        p1 = p1->next;  // p1: one step
        p2 = p2->next->next;  // p2: two steps
    }
    cout << "Middle Element: " << p1->val << endl;
}

void maxValue(Node *head) {
    if (head == NULL) { 
        cout << "This is an empty list" << endl;
        return;
    }
    int maxVal = head->val;  // Start with the first node's value as the maximum
    Node *temp = head->next;

    while (temp != NULL) {
        if (temp->val > maxVal) {
            maxVal = temp->val;
        }
        temp = temp->next;
    }

    cout << "The maximum value in the list is: " << maxVal << endl;
}

void sortDescending(Node *&head) {
    if (head == NULL) return;

    Node *current = head;
    while (current != NULL) {
        Node *index = current->next;
        while (index != NULL) {
            if (current->val < index->val) {
                swap(current->val, index->val);
            }
            index = index->next;
        }
        current = current->next;
    }
}

void sortAscending(Node *&head) {
    if (head == NULL) return;

    Node *current = head;
    while (current != NULL) {
        Node *index = current->next;
        while (index != NULL) {
            if (current->val > index->val) {
                swap(current->val, index->val);
            }
            index = index->next;
        }
        current = current->next;
    }
}

int main() {
    cout << "\tOption" << endl;
    cout << "1. Input linked list from user" << endl;
    cout << "2. Print linked list" << endl;
    cout << "3. Print linked list in reverse using recursion" << endl;
    cout << "4. Print middle element" << endl;
    cout << "5. Maximum value" << endl;
    cout << "6. Print in descending order" << endl;
    cout << "7. Print in ascending order" << endl;
    cout << "8. Terminate" << endl;

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
            printMiddleElement(head);
            cout << endl;
        } else if (op == 5) {
            maxValue(head);
            cout << endl;
        } else if (op == 6) {
            sortDescending(head);
            cout << "Linked List in Descending Order: ";
            printLinkedList(head);
            cout << endl;
        } else if (op == 7) {
            sortAscending(head);
            cout << "Linked List in Ascending Order: ";
            printLinkedList(head);
            cout << endl;
        } else if (op == 8) {
            cout << "Terminated" << endl;
            break;
        } else {
            cout << "Invalid option, try again." << endl;
        }
    }
    return 0;
}
