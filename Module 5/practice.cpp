#include <bits/stdc++.h>
using namespace std;

//create a node
class Node {
    public:
    int val;
    Node *next;

    Node (int val){ 
        this->val=val;
        this->next=NULL;
    }
};

int main() {

    // Node h, a,b,c;

    // h.val=10;   
    // a.val=20;   
    // b.val=30;   
    // c.val=40;   

    // Node h(10), a(20),b(30),c(40);  

    // h.next=&a;
    // a.next=&b;
    // b.next=&c;

    // cout<<"Lined List: "<<h.val<<" "<<a.val<<" "<<b.val<<" "<<c.val<<endl;
    // cout<<"Lined List: "<<h.val<<" "<<h.next->val<<" "<<h.next->next->val<<" "<<h.next->next->next->val<<endl;


    Node *h=new Node (10);
    Node *a=new Node (20);
    Node *b=new Node (30);
    Node *c=new Node (40);

    h->next=a;
    a->next=b;
    b->next=c;

    cout<<"Lined List: "<<h->val<<" "<<a->val<<" "<<b->val<<" "<<c->val<<endl;
    cout<<"Lined List: "<<h->val<<" "<<h->next->val<<" "<<h->next->next->val<<" "<<h->next->next->next->val<<endl<<endl;

    Node *temp=h;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }cout<<endl;

    return 0;
}
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
   