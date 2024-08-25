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

void insert_head(Node *&head, int val) {
    Node *newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        cout << "Inserted at head: " << val << endl;
    }
    else{
    newNode->next = head;
    head = newNode;
    cout << "Inserted at head: " << val << endl;
    }
}



void print_linked_list(Node *head) {
    cout << "Linked List: ";
    int size = 0;
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        size++;
        temp = temp->next;
    }
    cout << endl << "Size: " << size << endl;
}

int main() {
    cout << "Opt-1: Input from user" << endl;
    cout << "Opt-2: Insert head" << endl;
    cout << "Opt-3: Insert tail" << endl;
    cout << "Opt-4: Insert pos" << endl;
    cout << "Opt-5: Print Linked List" << endl;

    Node *head = NULL;
    int op;

    while (true) {
        cout << "Enter Your Option: ";
        cin >> op;

        if (op == 1) {
            int val;
            cout << "Enter values to insert at head (-1 to stop): " << endl;
            while (true) {
                cin >> val;
                if (val == -1) {
                    break;
                } else {
                    insert_head(head, val);
                }
                

            }
            cout<<"Updated - ";
            print_linked_list(head);
        } 
        
        else if (op == 2) {
             int val;
             cout << "Enter Your Value: ";
             cin >> val;
             insert_head(head, val);
             cout<<endl;
        } 

        else if (op == 5) {
            print_linked_list(head);
        } 

        else {
            cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}
