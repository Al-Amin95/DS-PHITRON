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
    cout << "Inseted at tail" << endl;
}

void insert_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "Inseted at poisition: " << endl;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << "Inseted at head" << endl;
}

void delete_positiion(Node *head, int pos)
{

    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid Index" << endl
                 << endl;
            return;
        }
    }

    if (temp->next == NULL)
    {
        cout << "Invalid Index" << endl
             << endl;
        return;
    }

    Node *delete_node = temp->next;
    temp->next = temp->next->next;
    delete delete_node;
    cout << "Node delete" << endl
         << endl;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "Head is not available" << endl<< endl;
        return;
    }

    Node *delete_head = head;
    head = head->next;
    delete delete_head;
    cout << "Head node delete" << endl
         << endl;
}

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << "Printed" << endl;
}

main()
{

    Node *head = NULL;
    while (true)
    {
        cout << "option-1 Insert node: " << endl;
        cout << "option-2 Print linkied list: " << endl;
        cout << "option-3 Inset at position: " << endl;
        cout << "option-4 Inset at head: " << endl;
        cout << "option-5 Delete node at position: " << endl;
        cout << "option-6 Delete node at head position: " << endl;
        cout << "option-7 Terminate:" << endl;
        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            cout << "Your liked list: ";
            print_list(head);
        }
        else if (op == 3)
        {
            int val, pos;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_position(head, pos, val);
            }
        }
        else if (op == 4)
        {
            int val;
            cout << "Enter value: ";
            cin >> val;
            insert_at_head(head, val);
        }
        else if (op == 5)
        {
            cout << "Node delete from any position " << endl;

            int pos;
            cout << "Enter position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_positiion(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            cout << "Terminated";
            break;
        }
    }

    return 0;
}
