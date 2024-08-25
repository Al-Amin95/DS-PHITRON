#include <bits/stdc++.h>
using namespace std;

// Node class representing each element in the linked list
class Node {
public:
    int val;       // Value of the node
    Node *next;    // Pointer to the next node
    Node(int val) { // Constructor to initialize the node with a value
        this->val = val;
        this->next = NULL;
    }
};

// Function to insert a node at the tail of the linked list
void insert_at_tail(Node *&head, int val) {
    Node *newNode = new Node(val); // Create a new node with the given value
    if (head == NULL) { // If the list is empty, set the new node as the head
        head = newNode;
        cout << "Inserted at head: " << val << endl;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) { // Traverse to the last node
        temp = temp->next;
    }
    temp->next = newNode; // Link the new node to the end of the list
    cout << "Inserted at tail: " << val << endl;
}

// Function to check and print duplicate values in the linked list

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
// Function to print the middle element(s) of the linked list
void print_middle_element(Node *head) {
    if (head == NULL) { // Check if the list is empty
        cout << "The list is empty." << endl;
        return;
    }
    Node *p1 = head;
    Node *p2 = head;
    
    //Traverse:  p2: two steps, and p1: one step at a time
    while (p2 != NULL && p2->next != NULL) {
        p1 = p1->next;//p1: one step
        p2 = p2->next->next; //p2: two steps
    }
    
    if (p2 == NULL) { // Even number of nodes, p1 is the second middle element
        Node *temp = head;
        while (temp->next != p1) {
            temp = temp->next;
        }
        cout << "Middle Elements: " << temp->val<<" "<< p1->val << endl;
    } else { // Odd number of nodes, p1 is the middle element
        cout << "Middle Element: " << p1->val << endl;
    }
}

// Function to print the entire linked list
void print_linked_list(Node *head) {
    cout << "\nLinked List: ";
    int size = 0;
    Node *temp = head;
    while (temp != NULL) { // Traverse the list and print each value
        cout << temp->val << " ";
        size++;
        temp = temp->next;
    }
    cout << "\nSize: " << size << endl; // Print the size of the linked list
}

// Main function to manage linked list operations
int main() {
    Node *head = NULL;
     // Display menu options
        cout << "\nOptions:\n";
        cout << "1: Take input from user\n";
        cout << "2: Print the linked list\n";
        cout << "3: Check for duplicate numbers\n";
        cout << "4: Print the middle element\n";
        cout << "5: Terminate linked list operations\n";
    
    while (true) {
        int op;
        cout << "Enter your option: ";
        cin >> op;
        
        if (op == 1) {
            // Option to insert elements into the linked list
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
        } else if (op == 2) {
             cout<<endl<<endl;
            print_linked_list(head);  // Option to print the linked list
             cout<<endl<<endl;
        } else if (op == 3) {
             cout<<endl<<endl;
            check_duplicates(head);  // Option to check for duplicate values
             cout<<endl<<endl;
        } else if (op == 4) {
             cout<<endl<<endl;
            print_middle_element(head);    // Option to print the middle element(s)
             cout<<endl<<endl;
        } else if (op == 5) {
            cout<<endl<<endl;
            cout << "Terminating linked list operations.\n";   // Option to terminate the program
            break;
        } else {
            cout << "Invalid option. Please try again.\n";
        }
    }

    return 0;
}
