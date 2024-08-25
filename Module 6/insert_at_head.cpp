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



void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v); // create node object
    if (head == NULL)
    {                   // if head is NULL
        head = newNode; // update head
        return;
    }
    Node *tmp = head; // assign head in tmp
    while (tmp->next != NULL)
    {
        tmp = tmp->next; // traver and assing next node address
    }
    tmp->next = newNode; // assign temp in newNode
    cout << "Inserted at tail" << endl;
}

void insert_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "Inserted at poisition: " << endl;
}


void insert_at_head( Node *&head, int val){
    Node *newNode =new Node(val);
    newNode->next=head;
    head=newNode;
 cout << "Inserted at head" << endl;


}

void print_list(Node *head)
{
    Node *tmp = head; // assign head in tmp
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next; // traver and assing next node address
    }
    cout <<endl<< "Printed" << endl;
}


main()
{
    cout << "option-1 Insert node: " << endl;
    cout << "option-2 Print linkied list: " << endl;
    cout << "option-3 Inset at position: " << endl;
    cout << "option-4 Inset at head: " << endl;
    cout << "option-5 Terminate:" << endl;
    Node *head = NULL;
    while (true)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        if (op == 2)
        {
            cout << "Your liked list: ";
            print_list(head);
        }
        if (op == 3) {
            int val, pos;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;

            if(pos==0){
                insert_at_head(head, val);
            }
            else{
            insert_position(head, pos, val);
            }
        }
        if (op == 4)
        {
            int val;
            cout << "Enter value: ";
            cin >> val;
            insert_at_head(head, val);

        }
        if (op == 5)
        {   
            cout << "Terminated";
            break;
        }
    }

    return 0;
}
