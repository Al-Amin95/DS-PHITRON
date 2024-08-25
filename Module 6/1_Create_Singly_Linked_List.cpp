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

void print_linked_list(Node *head){ 
    cout<<"Linked List: ";
    int size=0;
    Node *temp=head;
    while(true){ 
        cout<<temp->val<<" ";
        size++;
        temp=temp->next;
    }cout<<endl<<"Size: "<<size<<endl;
}
   
int main() {

    int val;
    cout<<"Enter Your Value: ";
    Node *head=NULL;
    Node *tail=NULL;

    while(true){ 
        cin>> val;
        if(val==-1){
            break;
        }
        else{
            Node *newNode=new Node(val);
            if(head==NULL){
                head=newNode;
                tail=newNode;
            }
            else{ 
                tail->next=newNode;
                tail=newNode;
            }
        }
    }
    print_linked_list(head);   
   
    return 0;
}
