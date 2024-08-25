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
void delete_head(Node *&head) {

    if(head==NULL){
        cout << "Invalid Index" << endl;
        return;
    }
    else{
        Node *delete_head= head;
        head= head->next;
        delete delete_head;
        delete_head=NULL;
    cout << "Delete  at head: "<< endl<<endl;
    }
}


void insert_tail(Node *&head, int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        cout << "Inserted at head: " << val << endl;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    cout << "Inserted value at tail: "<< val << endl;
}

void insert_pos(Node *&head, int pos, int val){
    Node *newNode = new Node(val);
    Node *temp=head;
    for (int i=1; i<=pos-1; i++){
        temp=temp->next;
    }
    if(temp->next==NULL){
        cout << "Invalid Index: " << endl;
        return;
    }
    else { 
        newNode->next=temp->next;
        temp->next = newNode;
    }
    cout << "Inserted value at postion: "<<pos<<" and  value: " << val << endl;
}

void delete_tail(Node *&head){
     if(head==NULL){
        cout << "Invalid Index" << endl;
        return;
    }

    Node *temp=head;
    while (temp->next->next!=NULL){
        temp=temp->next;
         
    }
    delete temp->next;
    temp->next=NULL;
    cout << "Delted node at tail "<<endl<<endl;
}

void delete_positiion(Node *&head, int pos){
     if(head==NULL || pos<0){
        cout << "Invalid Index" << endl;
        return;
    }

    Node *temp=head;
    for (int i=1; i<=pos-1; i++){
        temp=temp->next;
         if (temp->next == NULL || temp->next->next == NULL ) {
        cout << "Invalid Index: " << pos << endl;
        return;
        }
    }
    
    Node *delete_node_pos= temp->next;
        temp->next=temp->next->next;
        delete delete_node_pos;
        delete_node_pos=NULL;

    cout << "Delted node at postion: "<< pos<<endl<<endl;
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
    cout << "Opt-2: Insert at head" << endl;
    cout << "Opt-3: Insert at tail" << endl;
    cout << "Opt-4: Insert at pos" << endl;
    cout << "Opt-5: Print Linked List"<< endl;
    cout << "Opt-7: Delete at head" << endl;
    cout << "Opt-8: Delete at tail" << endl;
    cout << "Opt-9: Delete at pos" << endl<<endl;

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
                    insert_tail(head, val);
                }
                

            }
            cout<<"Updated - ";
            print_linked_list(head);
            cout<<endl<<endl;
        } 
        
        else if (op == 2) {
             int val;
             cout << "Enter Your Value: ";
             cin >> val;
             insert_head(head, val);
            print_linked_list(head);
             cout<<endl<<endl;
        } 
        else if (op == 3) {
             int val;
             cout << "Enter Your Value: ";
             cin >> val;
             insert_tail(head, val);
             print_linked_list(head);
             cout<<endl<<endl;
        } 
        else if (op == 4) {

             int val,pos;
             cout << "Enter Your Position: ";
             cin >> pos;
             cout << "Enter Your Value: ";
             cin >> val;
             if (pos==0){
                insert_head(head, val);
             }
             else{
             insert_pos(head,pos,val);
             }
            print_linked_list(head);
            cout<<endl<<endl;
        } 

        else if (op == 5) {
            print_linked_list(head);
             cout<<endl<<endl;
        } 

        else if(op==6) {
            cout << "Terminated:  Please try again." << endl<<endl;
        }
        else if (op == 7) {
            delete_head(head);
            print_linked_list(head);
            cout<<endl<<endl;
        } 
        else if (op == 8) {
            delete_tail(head);
            print_linked_list(head);
            cout<<endl<<endl;
        } 

        else if (op == 9) {
            int pos;
             cout << "Enter Your Position: ";
             cin >> pos;
             if (pos==0){
                delete_head(head);
             }
             else{
             delete_positiion(head,pos);
             }
            print_linked_list(head);
            cout<<endl<<endl;
        } 
    }

    return 0;
}
