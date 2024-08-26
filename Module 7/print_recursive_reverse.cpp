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


void print_with_recursive(Node *node){
    if (node ==NULL) {
        return;
    }
    cout<<node->val<<" ";
    print_with_recursive(node->next); //recursion
}

void print_reverse_with_recursive(Node *node){
    if (node ==NULL) {
        return;
    }
    print_reverse_with_recursive(node->next); //recursion
    cout<<node->val<<" ";
}


void insert_at_tail(Node *&head, Node *&tail, int val){
    Node *newNode=new Node(val);
    if (head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
   
int main() {

    Node *head=NULL;
    Node *tail=NULL;
    int val;
    cout<<"Enter node value(end with -1): ";
    while(true){
    cin>>val;
    if (val==-1){
        break;
    }
    else{
        insert_at_tail(head, tail, val);
    }
    }
  
    cout<<"Liniked List: ";
    print_with_recursive(head);
    cout<<endl;
    cout<<"Liniked List in reverse: ";
    print_reverse_with_recursive(head);
 
   
   
    return 0;
}
