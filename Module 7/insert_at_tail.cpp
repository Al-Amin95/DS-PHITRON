#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node (int val){
        this->val=val;
        this->next=NULL;
    }
};

// ==================================Insert Operatioon========================== //
void insert_at_positiin(Node *head, int pos, int val){ 
    Node *newNode=new Node(val);
    Node *temp=head;
    for(int i=1; i<=pos-1; i++){
        temp=temp->next;
    }
    // cout<<"tmp node val: "<<temp->val<<endl;
    newNode->next=temp->next;
    temp->next=newNode;
}

void insert_at_head(Node *&head, int val){ 
    Node *newNode=new Node (val);
    newNode->next=head;
    head=newNode;
}
void insert_at_tail(Node *&head,  Node *&tail, int val){ 
    Node *newNode=new Node (val);
    if(head==NULL){ 
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

int size(Node *head) {
    int count = 0;
    Node *temp = head;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}

// ==================================Delete Operatioon========================== //

void print_linked_list(Node *head){
    Node *temp=head;
    cout<<"Linked List: ";
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
  
int main() {
    Node *head=new Node (10);  //create node dynamically
    Node *a=new Node (20);  //create node dynamically
    Node *b=new Node (30);  //create node dynamically
    Node *c=new Node (40);  //create node dynamically
    Node *d=new Node (50);  //create node dynamically
    Node *tail=d;
    head->next=a; //create link
    a->next=b; //create link
    b->next=c; //create link
    c->next=d; //create link
    print_linked_list(head); 
    cout<<endl<<"Tail: "<<tail->val<<endl;

    int pos, val;
    cout<<endl<<endl<<"Enter position and value: ";
    cin>>pos>>val;
    if(pos>size(head)){
        cout<<"Invalid Indeex"<<endl;
    }
    else if(pos==0){ 
        insert_at_head(head,val);
    }
    else if(pos==size(head)){ 
        insert_at_tail(head,tail,val);
    }
    else{
    insert_at_positiin(head, pos,val);
    }    
    print_linked_list(head); 
    cout <<endl<< "Tail: " << tail->val << endl;

    return 0;
}
