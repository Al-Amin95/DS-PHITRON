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

void delete_at_position(Node *&head, int pos) {  // Pass head by reference
    if (head == NULL) { 
        cout << "Invalid Index" << endl; 
        return;
    }
    if (pos == 0) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++) {
        if (temp == NULL || temp->next == NULL) { 
            cout << "Invalid Index" << endl; 
            return;
        }
        temp = temp->next;
    }

    Node *delete_node = temp->next;
    if (delete_node == NULL) {
        cout << "Invalid Index" << endl;
        return;
    }
    temp->next = temp->next->next;
    delete delete_node;
}

void delete_at_head(Node *&head){

    if(head==NULL){
        cout << "Invalid Index" << endl;
        return;
    }
    Node *temp_head=head;
    head=head->next;
    delete temp_head;
}

int size(Node *head) {
    Node *temp = head;
    int count = 0;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
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
    Node *head = new Node(10);  // Create nodes dynamically
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a; // Create links
    a->next = b;
    b->next = c;
    c->next = d;

    cout << "\tOptions\t" << endl;
    cout << "1. Delete node at position" << endl;
    cout << "2. Delete node at head" << endl;
    cout << "3. Exit" << endl<<endl;

    while (true) { 
        print_linked_list(head); 
        int op;
        cout << "Enter Your Option: ";
        cin >> op;
        cout << endl;

        if (op == 1) {
            int pos;
            cout << "Enter node position: ";
            cin >> pos;

            if (pos >= size(head) || pos < 0) {
                cout << "Invalid Index" << endl; 
            } else {
                delete_at_position(head, pos);
                print_linked_list(head);
            }
        cout<<endl;
        }
        else if(op==2){
            delete_at_head(head);
        } 
        else if (op == 3) {
            cout << "Terminated" << endl;
            break;
        } else {
            cout << "Invalid Option" << endl;
        }
    }

    return 0;
}
