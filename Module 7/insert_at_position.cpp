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

int size(Node *head) {
    int count = 0;
    Node *temp = head;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}


void print_linked_list(Node *head){
    Node *temp=head;
    cout<<"Linked List: ";
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
  
int main() {
    // Node h,a,b; // create node
    // h.val=10; //assign value
    // a.val=20; //assign value
    // b.val=30; //assign value
    // h.next=&a; // create link
    // a.next=&b; // create link
    // cout<<"Linked List: "<<h.val<<" "<<a.val<<" "<<b.val<<endl;

  
    Node *head=new Node (10);  //create node dynamically
    Node *a=new Node (20);  //create node dynamically
    Node *b=new Node (30);  //create node dynamically
    Node *c=new Node (40);  //create node dynamically
    Node *d=new Node (50);  //create node dynamically
    head->next=a; //create link
    a->next=b; //create link
    b->next=c; //create link
    c->next=d; //create link

    // cout<<"Linked List: "<<(*h).val;
    // cout<<"Linked List: "<<h.val;// error because--> first must deference then print
    // cout<<"Linked List: "<<h->val<<" "<<a->val<<" "<<b->val<<" "<<c->val<<" "<<d->val<<endl;
    print_linked_list(head); 

    int pos, val;
    cout<<endl<<endl<<"Enter position and value: ";
    cin>>pos>>val;
    if(pos>size(head)){
        cout<<"Invalid Indeex"<<endl;
    }
    else{
    insert_at_positiin(head, pos,val);
    }    
    print_linked_list(head); 

    return 0;
}
