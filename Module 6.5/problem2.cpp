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
    cout << "\nSize: " << size << endl;
}


void check_duplicates(Node *head){ 
    Node *temp1=head;
    int count=0;
    while(temp1!=NULL){
        Node *temp2=temp1->next;
        while(temp2!=NULL){ 
            if(temp1->val==temp2->val){ 
                count++;
                cout<<"Duplicates value: "<<temp1->val<<endl;
            }
        temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    if(count==0){ 
        cout<<"NO: "<<"No duplicate value: "<<count<<endl;
    }
    else{
        cout<<"YES: "<<"Total duplicate value: "<<count<<endl;
    }
}



int main() {
    Node *head = NULL;
    
    while (true) {
        cout << "\nOptions:\n";
        cout << "1: Take input from user\n";
        cout << "2: Print the linked list\n";
        cout << "3: Check for duplicate numbers\n";
        cout << "4: Terminate linked list operations\n";
        
        int op;
        cout << "Enter your option: ";
        cin >> op;
        
        if (op == 1) {
            int val;
            cout << "Enter your values (enter -1 to end): ";
            while (true) {
                cin >> val;
                if (val == -1) {
                    break;
                } else {
                    insert_at_tail(head, val);
                }
            }
            cout<<"\n\n";
        } else if (op == 2) {
            print_linked_list(head);
            cout<<"\n\n";
        } else if (op == 3) {

            cout<<"\n\n";
            check_duplicates(head);
        } else if (op == 4) {
            cout << "Terminating linked list operations.\n";
            break;
        } else {
            cout << "Invalid option. Please try again.\n";
        }
    }

    return 0;
}
