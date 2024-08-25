#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node *next;
    Node (int val){ 
         this->val=val;
         this->next=NULL;
    }
};

// ==================================Insert Operation============================= //
void insert_tail(Node *&head, int val){ 
    Node *newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        cout<<"Inserted at head"<<endl<<endl;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL){ 
        temp=temp->next;
       
    }temp->next=newNode;
    cout<<"Inserted at tail"<<endl<<endl;
}

void insert_position(Node *head, int pos, int val){ 
    Node *newNode=new Node(val);
    
    Node *temp=head;
    for (int i=1;i<=pos-1;i++){
        temp=temp->next;
         if(temp==NULL){
        cout<<"Invalid Index"<<endl<<endl;
        return;
        }
    }
    newNode->next=temp->next;
    temp->next=newNode;
    cout<<"Inserted at pos: "<<pos<<endl<<endl;
}

void insert_head(Node *&head,int val){ 
    Node *newNode=new Node(val);

    newNode->next=head;
    head=newNode;
        cout<<"Inserted at head: "<<val<<endl<<endl;

}

//================================Delete Operation============//

void delete_tail(Node *&head) {
    if (head == NULL) {
        cout << "List is empty" << endl << endl;
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        cout << "Deleted node from tail" << endl << endl;
        return;
    }
    Node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    cout << "Deleted node from tailsss" << endl << endl;
}

void delete_position(Node *&head,int pos){

    if(head==NULL){
         cout<<"Invalid Index"<<endl<<endl;
        return;
    }

    Node *temp=head; 
    for(int i=1;i<=pos-1;i++){ 
        temp=temp->next;
        if(temp==NULL){
        cout<<"Invalid Index"<<endl<<endl;
        return;
        }
    }
   if(temp->next==NULL){
        cout<<"Invalid Index"<<endl<<endl;
        return;
        }
    Node *del_node=temp->next;
    temp->next=temp->next->next;
    delete del_node;
    cout << "Deleted node from pos: " << pos<< endl;

}


void delete_head(Node *&head){ 
    if(head==NULL){
         cout<<"Invalid Index"<<endl<<endl;
        return;
    }
    Node *del_head=head;
    head=head->next;
    delete del_head;
    cout << "Deleted node from head: " << endl;
}
// ====================Print Linked List====================== //
void print_list(Node *head){
    Node *temp=head;
    while(temp!=NULL){ 
       cout<<temp->val<<" ";
       temp=temp->next;
    }cout<<endl;
}


int main() {

    cout<<"Option-1: input from user"<<endl;
    cout<<"Option-2: insert at tail"<<endl;
    cout<<"Option-3: insert at  head"<<endl;
    cout<<"Option-4: insert at any position"<<endl;
    cout<<"Option-5: delete from tail"<<endl;
    cout<<"Option-6: delete from any position"<<endl;
    cout<<"Option-7: delete from head"<<endl;
    cout<<"Option-8: print linked list"<<endl;
    cout<<"Option-9: Opertaion is terminated"<<endl<<endl;

    Node *head=NULL;
    while(true){ 
        int op;
        cout<<"Enter Your Option: ";
        cin>>op;

        if(op==1){
            cout<<"Enter values and  -1 terminate the input: ";
            int val;
            while(true){
            cin>>val;
            if(val==-1){
                break;
            }
            insert_tail(head,val);
            }
            
        }
        else if(op==2){
            int val;
            cout<<"Enter value: ";
            cin>>val;
            insert_tail(head,val);
        }
        else if(op==3){
            int val;
            cout<<"Enter value: ";
            cin>>val;
            insert_head(head,val);
        }
        else if(op==4){
            int val,pos;
            cout<<"Enter pos: ";
            cin>>pos;
            cout<<"Enter value: ";
            cin>>val;
            if(pos==0){
            insert_head(head,val);
            }
            else{
                insert_position(head,pos,val);
            }
        }
        else if(op==5){
            delete_tail(head);
        }
        else if(op==6){
            int pos;
            cout<<"Enter position: ";
            cin>>pos;
            if(pos==0){ 
                  delete_head(head);
            }else{ 
            delete_position(head,pos);
            }
        }
        else if(op==7){
            delete_head(head);
        }
        else if(op==8){
            print_list(head);
        }
        else if(op==9){ 
            cout<<"Terminated"<<endl<<endl;
            break;
        }
    }
    return 0;
}
