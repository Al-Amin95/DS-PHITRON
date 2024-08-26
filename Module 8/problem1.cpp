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
    Node *temp=head;
    while(true){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
   
int main() {
   
   
    return 0;
}
