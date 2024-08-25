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


int main() {
  
    Node a(10),b(20),c(30),d(40);

    a.next=&b;
    b.next=&c;
    c.next=&d;

    cout<<"Linked List: "<<a.val<<" "<<b.val<<" "<<c.val<<" "<<d.val<<endl;
    cout<<"Linked list: "<<a.next->val<<" "<<a.next->next->val<<" "<<a.next->next->next->val<<endl;

    return 0;
}
