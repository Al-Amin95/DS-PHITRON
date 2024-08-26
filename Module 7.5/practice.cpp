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

void printLinkedList(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int sizeCount(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp != NULL){ 
        temp = temp->next;
        count++;
    }
    return count;
}

void checkSize(Node *head1, Node *head2){
    int s1 = sizeCount(head1);
    int s2 = sizeCount(head2);

    if (s1 == s2){
        cout << "Same Size" << endl;
    } else {
        cout << "Different Size" << endl;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main() {

    cout << "\tOptions\t" << endl;
    cout << "1. Input from user" << endl;
    cout << "2. Print the linked list" << endl;
    cout << "3. Check the size of linked list" << endl;
    cout << "4. Terminate" << endl << endl;

    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;

    while(true){
        int op;
        cout << "Enter Option: ";
        cin >> op;

        if(op == 1){
            int val;
            cout << "Enter values for Linked List-1 (-1 to stop): ";
            while(true){
                cin >> val;
                if(val == -1) break;
                insert_at_tail(head1, tail1, val);
            }

            cout << "Enter values for Linked List-2 (-1 to stop): ";
            while(true){
                cin >> val;
                if(val == -1) break;
                insert_at_tail(head2, tail2, val);
            }
        }
        else if(op == 2){ 
            cout << "Linked List-1: ";
            printLinkedList(head1);
            cout << "Linked List-2: ";
            printLinkedList(head2);
        }
        else if(op == 3){ 
            checkSize(head1, head2);
        }
        else if(op == 4){
            cout << "Terminated" << endl;
            break;
        } else {
            cout << "Invalid option! Please try again." << endl;
        }
    }
    return 0;
}
