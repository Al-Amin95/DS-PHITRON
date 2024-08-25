/*
Insertion at Head
Insertion at Tail
Insertion at Specific Position
*/

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


//---------------------------Insert Operation-------------------------//
void insert_tail(Node *&head, int val) {
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        cout << "Insert at head: " << val << endl << endl;
    } else {
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        cout << "Insert at tail: " << val << endl << endl;
    }
}

void insert_head(Node *&head, int val){
    Node *newNode = new Node(val);
    newNode->next=head;
    head=newNode;
    cout << "Insert at head: " << val<< endl << endl;

}

void insert_position(Node *head, int pos, int val){ 
    Node *newNode = new Node(val);

    Node *temp=head;
    for (int i=1; i<=pos-1;i++){ 
        temp=temp->next;
        if(temp==NULL){
            cout<<"Invalid Index "<<endl;
            return;
        }
    }
    newNode->next=temp->next;
    temp->next=newNode;
    cout << "Insert at pos: " <<pos<< endl;
}


/*----------------------------------Delete Operation-----------------------------*/
 




void print_list(Node *head) {
    Node *temp = head;
    int size=0;
    cout<<"Linked List: ";
    while (temp != NULL) {
        cout << temp->val << " ";
        size++;
        temp = temp->next;
    }
    cout <<endl<< "Size of the List: " << size << endl << endl;
}


int main() {
    cout << "Option-1: Input from user "<<endl;
    cout << "Option-2: Insert at head"<<endl;
    cout << "Option-3: Insert at tail"<<endl;
    cout << "Option-4: Insert at specific position"<<endl;

    cout << "Option-5: Delete at head"<<endl;
    cout << "Option-6: Delete at tail"<<endl;
    cout << "Option-7: Delete at a specific Position"<<endl;
    cout << "Option-8: Print List"<<endl;
    cout << "Option-9: Operation is terminate"<<endl<<endl;

    Node *head = NULL;

    while(true){
        int op;
        cout<<"Enter Your Option: ";
        cin>>op;
        if(op==1){
            int val;
                cout<<"Enter your values (-1 ends):";
            while(true){
                cin>>val;
                if(val==-1) break;
                insert_tail(head, val);
            }
                print_list(head);
                cout<<endl;
        }
        else if(op==2){
            int val;
            cout<<"Enter Value: ";
            cin>>val;
            insert_head (head,val);
            cout<<endl;
        }
        else if(op==3){
            int val;
            cout<<"Enter Value: ";
            cin>>val;
            insert_tail (head,val);
            cout<<endl;
        }
        else if(op==4){
            int val,pos;
            cout<<"Enter Position: ";
            cin>>pos;
            cout<<"Enter Value: ";
            cin>>val;
            if(pos==0){
                insert_head (head,val);
            }
            else{
            insert_position (head,pos,val);
            }
            cout<<endl;
        }
        else if(op==8){
           print_list(head);
        }
        else if(op==9){
            cout<<"Terminated "<<endl; 
            break;
        }
    }
    

    return 0;
}

