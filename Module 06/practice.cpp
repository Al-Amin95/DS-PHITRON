#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node (int val){
        this->val = val;
        this->next = NULL;
    }
};

// ==================================Insert Operation============================//

//insert at tail
void insert_at_tail(Node *&head, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        cout << "Inserted node at head" << endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << "Inserted node at tail" << endl;
}

//insert at any position
void insert_at_any_position(Node *head, int pos, int val) {
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++) { 
        temp = temp->next;
        if (temp == NULL) { 
            cout << "Invalid Index" << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

//insert at head
void insert_at_head(Node *&head, int val) { 
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << "Inserted node at head" << endl;
}

// ==============================Delete Operation========================//
void delete_at_any_position(Node *head, int pos) {
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++) {
        temp = temp->next;
        if (temp == NULL) { 
            cout << "Invalid Index" << endl;
            return;
        }
    }
    if (temp->next == NULL) { 
        cout << "Invalid Index" << endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << "Deleted from position: " << pos << endl;
}

void delete_at_head(Node *&head) {
    
    if (head == NULL) { 
        cout << "Invalid Index" << endl << endl;
        return;
    }
    Node *delete_head = head;
    head = head->next;
    delete delete_head;
    cout << "Deleted from head" << endl;
}

//print linked list
void print_linked_list(Node *head) { 
    Node *temp = head;
    while (temp != NULL) { 
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main() {
    Node *head = NULL;

    while (true) { 
        cout << "Option-1: Input from user" << endl;
        cout << "Option-2: Insert at tail" << endl;
        cout << "Option-3: Insert at any position" << endl;
        cout << "Option-4: Insert at head" << endl;
        cout << "Option-5: Delete from any position" << endl;
        cout << "Option-6: Delete head" << endl;
        cout << "Option-7: Print linked list" << endl;
        cout << "Option-8: Operation Terminated" << endl << endl;

        int option;
        cout << "Choose your option: ";
        cin >> option;

        if (option == 1) {
            cout << "Enter values to insert (end with -1): ";
            int val;
            while (true) {
                cin >> val;
                if (val == -1)
                    break;
                // if (head == NULL) {
                //     insert_at_head(head, val);
                // } else {
                //     insert_at_tail(head, val);
                // }
               insert_at_tail(head, val);
            }
            cout << "Updated Linked List: ";
            print_linked_list(head);
            cout << endl << endl;
        } 
        else if (option == 2) {
            int val;
            cout << "Enter value: ";
            cin >> val;

            insert_at_tail(head, val);
            cout << endl;
        }
        else if (option == 3) {
            int pos, val;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            if (pos == 0) {
                insert_at_head(head, val);
            }
            else {
                insert_at_any_position(head, pos, val);
            }
            cout << endl;
        }
        else if (option == 4) {
            int val;
            cout << "Enter value: ";
            cin >> val;
            insert_at_head(head, val);
            cout << endl;
        }
        else if (option == 5) {
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            if (pos == 0) {
                delete_at_head(head);
            }
            else {
                delete_at_any_position(head, pos);
            }
            cout << endl;
        }
        else if (option == 6) {
            delete_at_head(head);
            cout << endl;
        }
        else if (option == 7) {
            cout << "Linked List: ";
            print_linked_list(head);
            cout << endl << endl;
        }
        else if (option == 8) {
            cout << "Operation is terminated." << endl;
            break;
        }
    }
    return 0;
}
 